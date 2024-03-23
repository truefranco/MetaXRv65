// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "OculusXREditorModule.h"

#include "AssetToolsModule.h"
#include "OculusXRToolStyle.h"
#include "OculusXRToolCommands.h"
#include "OculusXRPlatformToolWidget.h"
#include "OculusXRAssetDirectory.h"
#include "OculusXRHMDRuntimeSettings.h"
#include "IOculusXRProjectSetupModule.h"
#include "OculusXRHMDTypes.h"
#include "LevelEditor.h"
#include "Modules/ModuleManager.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Input/SButton.h"
#include "PropertyEditorModule.h"
#include "DetailLayoutBuilder.h"
#include "DetailCategoryBuilder.h"
#include "DetailWidgetRow.h"
#include "GeneralProjectSettings.h"
#include "IAssetTools.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "ISettingsModule.h"
#include "OculusXRPassthroughColorLutAsset.h"
#include "OculusXRSimulator.h"
#include "OculusXRSyntheticEnvironmentServer.h"
#include "OculusXRPrivacyNotification.h"
#include "OculusXRSettingsToggle.h"
#include "OculusXRTelemetryPrivacySettings.h"
#include "OculusXRTelemetry.h"
#include "OculusXRTelemetryEditorEvents.h"

#define LOCTEXT_NAMESPACE "OculusXREditor"

const FName FOculusXREditorModule::OculusPlatToolTabName = FName("OculusXRPlaformTool");

void FOculusXREditorModule::PostLoadCallback()
{
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
}

void FOculusXREditorModule::StartupModule()
{
	bModuleValid = true;
	RegisterSettings();
	FOculusAssetDirectory::LoadForCook();

	if (!IsRunningCommandlet())
	{
		FOculusToolStyle::Initialize();
		FOculusToolStyle::ReloadTextures();

		FOculusToolCommands::Register();

		PluginCommands = MakeShareable(new FUICommandList);

		PluginCommands->MapAction(
			FOculusToolCommands::Get().OpenProjectSetupTool,
			FExecuteAction::CreateRaw(this, &FOculusXREditorModule::PluginOpenSetupToolWindow),
			FCanExecuteAction());
		PluginCommands->MapAction(
			FOculusToolCommands::Get().OpenPlatWindow,
			FExecuteAction::CreateRaw(this, &FOculusXREditorModule::PluginOpenPlatWindow),
			FCanExecuteAction());
		PluginCommands->MapAction(
			FOculusToolCommands::Get().ToggleDeploySo,
			FExecuteAction::CreateLambda([=]() {
				UOculusXRHMDRuntimeSettings* settings = GetMutableDefault<UOculusXRHMDRuntimeSettings>();
				settings->bDeploySoToDevice = !settings->bDeploySoToDevice;
				settings->Modify(true);
				settings->UpdateSinglePropertyInConfigFile(settings->GetClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(UOculusXRHMDRuntimeSettings, bDeploySoToDevice)), settings->GetDefaultConfigFilename());
			}),
			FCanExecuteAction(),
			FIsActionChecked::CreateLambda([=]() {
				return GetMutableDefault<UOculusXRHMDRuntimeSettings>()->bDeploySoToDevice;
			}));
		PluginCommands->MapAction(
			FOculusToolCommands::Get().ToggleMetaXRSim,
			FExecuteAction::CreateRaw(this, &FOculusXREditorModule::ToggleOpenXRRuntime),
			FCanExecuteAction(),
			FIsActionChecked::CreateLambda([=]() {
				return FMetaXRSimulator::IsSimulatorActivated();
			}));
		PluginCommands->MapAction(
			FOculusToolCommands::Get().LaunchGameRoom,
			FExecuteAction::CreateRaw(this, &FOculusXREditorModule::LaunchSESGameRoom),
			FCanExecuteAction());
		PluginCommands->MapAction(
			FOculusToolCommands::Get().LaunchLivingRoom,
			FExecuteAction::CreateRaw(this, &FOculusXREditorModule::LaunchSESLivingRoom),
			FCanExecuteAction());
		PluginCommands->MapAction(
			FOculusToolCommands::Get().LaunchBedroom,
			FExecuteAction::CreateRaw(this, &FOculusXREditorModule::LaunchSESBedroom),
			FCanExecuteAction());
		PluginCommands->MapAction(
			FOculusToolCommands::Get().StopServer,
			FExecuteAction::CreateRaw(this, &FOculusXREditorModule::StopSESServer),
			FCanExecuteAction());

		FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");

		// Adds an option to launch the tool to Window->Developer Tools.
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		MenuExtender->AddMenuExtension("Miscellaneous", EExtensionHook::After, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FOculusXREditorModule::AddMenuExtension));
		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);

		// We add the Oculus menu on the toolbar
		TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
		ToolbarExtender->AddToolBarExtension("Play", EExtensionHook::After, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this, &FOculusXREditorModule::AddToolbarExtension));
		LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);

		FGlobalTabmanager::Get()->RegisterNomadTabSpawner(OculusPlatToolTabName, FOnSpawnTab::CreateRaw(this, &FOculusXREditorModule::OnSpawnPlatToolTab)).SetDisplayName(LOCTEXT("FOculusPlatfToolTabTitle", "Meta XR Platform Tool")).SetMenuType(ETabSpawnerMenuType::Hidden);

		// Register asset types
		IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
		AssetTools.RegisterAssetTypeActions(MakeShareable(new FAssetTypeActions_OculusXRPassthroughColorLut));

		OculusXRTelemetry::SetTelemetryConsent(OculusXRTelemetry::IsActive());

		// If needed, open a notification here.
		OculusXRTelemetry::SpawnNotification();
		OculusXRTelemetry::TScopedMarker<OculusXRTelemetry::Events::FEditorStart>();
	}
}

void FOculusXREditorModule::ShutdownModule()
{
	if (!bModuleValid)
	{
		return;
	}

	if (!IsRunningCommandlet())
	{
		FOculusToolStyle::Shutdown();
		FOculusToolCommands::Unregister();
		FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(OculusPlatToolTabName);
	}

	FOculusAssetDirectory::ReleaseAll();
	if (UObjectInitialized())
	{
		UnregisterSettings();
	}
}

TSharedRef<SDockTab> FOculusXREditorModule::OnSpawnPlatToolTab(const FSpawnTabArgs& SpawnTabArgs)
{
	/* clang-format off */
	auto myTab = SNew(SDockTab)
	.TabRole(ETabRole::NomadTab)
	[
		SNew(SOculusPlatformToolWidget)
	];
	/* clang-format on */

	return myTab;
}

void FOculusXREditorModule::RegisterSettings()
{
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->RegisterSettings("Project", "Plugins", "OculusXR",
			LOCTEXT("RuntimeSettingsName", "Meta XR"),
			LOCTEXT("RuntimeSettingsDescription", "Configure the Meta XR plugin"),
			GetMutableDefault<UOculusXRHMDRuntimeSettings>());

		FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
		PropertyModule.RegisterCustomClassLayout(UOculusXRHMDRuntimeSettings::StaticClass()->GetFName(), FOnGetDetailCustomizationInstance::CreateStatic(&FOculusXRHMDSettingsDetailsCustomization::MakeInstance));

		SettingsModule->RegisterSettings("Editor", "Privacy", "OculusXR",
			LOCTEXT("PrivacyTelemetrySettingsName", "MetaXR Usage Data"),
			LOCTEXT("PrivacyTelemetrySettingsDescription", "Configure the way MetaXR usage information is handled."),
			GetMutableDefault<UOculusXRTelemetryPrivacySettings>());
		PropertyModule.RegisterCustomClassLayout(UOculusXRTelemetryPrivacySettings::StaticClass()->GetFName(), FOnGetDetailCustomizationInstance::CreateStatic(&FOculusXRSettingsToggle::MakeInstance));
	}
}

void FOculusXREditorModule::UnregisterSettings()
{
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->UnregisterSettings("Project", "Plugins", "OculusXR");
		SettingsModule->UnregisterSettings("Editor", "Privacy", "OculusXR");
	}
}

FReply FOculusXREditorModule::PluginClickFn(bool text)
{
	PluginOpenSetupToolWindow();
	return FReply::Handled();
}

void FOculusXREditorModule::PluginOpenSetupToolWindow()
{
	IOculusXRProjectSetupToolModule::Get().ShowProjectSetupTool("Meta Menu");
}

void FOculusXREditorModule::PluginOpenPlatWindow()
{
	FGlobalTabmanager::Get()->TryInvokeTab(OculusPlatToolTabName);
}

void FOculusXREditorModule::ToggleOpenXRRuntime()
{
	FMetaXRSimulator::ToggleOpenXRRuntime();
}

void FOculusXREditorModule::LaunchSESGameRoom()
{
	FMetaXRSES::LaunchGameRoom();
}

void FOculusXREditorModule::LaunchSESLivingRoom()
{
	FMetaXRSES::LaunchLivingRoom();
}

void FOculusXREditorModule::LaunchSESBedroom()
{
	FMetaXRSES::LaunchBedroom();
}

void FOculusXREditorModule::StopSESServer()
{
	FMetaXRSES::StopServer();
}

void FOculusXREditorModule::AddMenuExtension(FMenuBuilder& Builder)
{
	bool v = false;
	GConfig->GetBool(TEXT("/Script/OculusXREditor.OculusXREditorSettings"), TEXT("bAddMenuOption"), v, GEditorIni);
	if (v)
	{
		Builder.AddMenuEntry(FOculusToolCommands::Get().OpenProjectSetupTool);
	}
}

void FOculusXREditorModule::AddToolbarExtension(FToolBarBuilder& Builder)
{
	Builder.SetLabelVisibility(EVisibility::All);
	Builder.AddComboButton(
		FUIAction(),
		FOnGetContent::CreateRaw(this, &FOculusXREditorModule::CreateToolbarEntryMenu, PluginCommands),
		LOCTEXT("OculusToolsToolBarCombo", "Meta XR Tools"),
		LOCTEXT("OculusToolsToolBarComboTooltip", "Meta XR tools"),
		TAttribute<FSlateIcon>::CreateLambda([]() {
			return FSlateIcon(FOculusToolStyle::GetStyleSetName(), "OculusTool.MenuButton");
		}),
		false);

	Builder.AddComboButton(
		FUIAction(),
		FOnGetContent::CreateRaw(this, &FOculusXREditorModule::CreateXrSimToolbarEntryMenu, PluginCommands),
		LOCTEXT("MetaXRSimulatorCombo", "Meta XR Simulator"),
		LOCTEXT("MetaXRSimulatorComboTooltip", "Meta XR Simulator"),
		TAttribute<FSlateIcon>::CreateLambda([]() {
			return FSlateIcon(FOculusToolStyle::GetStyleSetName(), "OculusTool.MenuButton");
		}),
		false);
}

// Add the entries to the OculusXR Tools toolbar menu button
TSharedRef<SWidget> FOculusXREditorModule::CreateToolbarEntryMenu(TSharedPtr<class FUICommandList> Commands)
{
	FMenuBuilder MenuBuilder(true, Commands);
	MenuBuilder.BeginSection("OculusXRBuilds", LOCTEXT("OculusXRBuilds", "Builds"));
	MenuBuilder.AddMenuEntry(FOculusToolCommands::Get().ToggleDeploySo);
	MenuBuilder.EndSection();

	MenuBuilder.BeginSection("OculusXRTools", LOCTEXT("OculusXRTools", "Tools"));
	MenuBuilder.AddMenuEntry(FOculusToolCommands::Get().OpenProjectSetupTool);
	MenuBuilder.AddMenuEntry(FOculusToolCommands::Get().OpenPlatWindow);
	MenuBuilder.EndSection();

	return MenuBuilder.MakeWidget();
}

TSharedRef<SWidget> FOculusXREditorModule::CreateXrSimToolbarEntryMenu(TSharedPtr<class FUICommandList> Commands)
{
	FMenuBuilder MenuBuilder(true, Commands);

	MenuBuilder.BeginSection("MetaXRSimulator", LOCTEXT("MetaXRSimulator", "Toggle"));
	MenuBuilder.AddMenuEntry(FOculusToolCommands::Get().ToggleMetaXRSim);
	MenuBuilder.EndSection();

	MenuBuilder.BeginSection("SES", LOCTEXT("SES", "SES"));
	MenuBuilder.AddSubMenu(
		LOCTEXT("Synthetic Environment Server", "Synthetic Environment Server"),
		LOCTEXT("Synthetic Environment Server", "Synthetic Environment Server"),
		FNewMenuDelegate::CreateRaw(this, &FOculusXREditorModule::CreateSESSubMenus));
	MenuBuilder.EndSection();

	return MenuBuilder.MakeWidget();
}

void FOculusXREditorModule::CreateSESSubMenus(FMenuBuilder& MenuBuilder)
{
	MenuBuilder.BeginSection("Synthetic Environment Server", LOCTEXT("Synthetic Environment Server", "Synthetic Environment Server"));
	MenuBuilder.AddMenuEntry(FOculusToolCommands::Get().LaunchGameRoom);
	MenuBuilder.AddMenuEntry(FOculusToolCommands::Get().LaunchLivingRoom);
	MenuBuilder.AddMenuEntry(FOculusToolCommands::Get().LaunchBedroom);
	MenuBuilder.AddMenuEntry(FOculusToolCommands::Get().StopServer);
	MenuBuilder.EndSection();
}

TSharedRef<IDetailCustomization> FOculusXRHMDSettingsDetailsCustomization::MakeInstance()
{
	return MakeShareable(new FOculusXRHMDSettingsDetailsCustomization);
}

FReply FOculusXRHMDSettingsDetailsCustomization::PluginClickPerfFn(bool text)
{
	IOculusXRProjectSetupToolModule::Get().ShowProjectSetupTool("Settings");
	return FReply::Handled();
}

FReply FOculusXRHMDSettingsDetailsCustomization::PluginClickPlatFn(bool text)
{
	FGlobalTabmanager::Get()->TryInvokeTab(FOculusXREditorModule::OculusPlatToolTabName);
	return FReply::Handled();
}

FReply FOculusXRHMDSettingsDetailsCustomization::DisableEngineSplash(bool text)
{
	UOculusXRHMDRuntimeSettings* Settings = GetMutableDefault<UOculusXRHMDRuntimeSettings>();
	Settings->bAutoEnabled = false;
	Settings->SplashDescs.Empty();
	Settings->TryUpdateDefaultConfigFile();
	return FReply::Handled();
}

void FOculusXRHMDSettingsDetailsCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailLayout)
{
	// Labeled "General OculusXR" instead of "General" to enable searchability. The button "Launch Oculus Utilities Window" doesn't show up if you search for "Oculus"
	IDetailCategoryBuilder& CategoryBuilder = DetailLayout.EditCategory("General Meta XR", FText::GetEmpty(), ECategoryPriority::Important);
	/* clang-format off */
	CategoryBuilder.AddCustomRow(LOCTEXT("General", "General"))
	.WholeRowContent()
	[
		SNew(SVerticalBox)
		+ SVerticalBox::Slot().AutoHeight().Padding(2)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot().AutoWidth()
			[
				SNew(SButton)
				.Text(LOCTEXT("LaunchTool", "Launch Meta XR Project Setup Tool"))
				.OnClicked(this, &FOculusXRHMDSettingsDetailsCustomization::PluginClickPerfFn, true)
			]
			+ SHorizontalBox::Slot().FillWidth(8)
		]
		+ SVerticalBox::Slot().AutoHeight().Padding(2)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot().AutoWidth()
			[
				SNew(SButton)
				.Text(LOCTEXT("LaunchPlatTool", "Launch Meta XR Platform Window"))
				.OnClicked(this, &FOculusXRHMDSettingsDetailsCustomization::PluginClickPlatFn, true)
			]
			+ SHorizontalBox::Slot().FillWidth(8)
		]
	];

	IDetailCategoryBuilder& CTXPTCategoryBuilder = DetailLayout.EditCategory("System SplashScreen", FText::GetEmpty(), ECategoryPriority::Important);

	static const FName WarningColorStyle("Colors.AccentYellow");

	CTXPTCategoryBuilder.AddCustomRow(LOCTEXT("CTXPTWarning", "Contextual Passthrough Warning"))
	.Visibility(TAttribute<EVisibility>(this, &FOculusXRHMDSettingsDetailsCustomization::GetContextualPassthroughWarningVisibility))
	[
		SNew(SVerticalBox)
		+ SVerticalBox::Slot().FillHeight(1.f)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot().FillWidth(1.f).VAlign(EVerticalAlignment::VAlign_Center)
			[
				SNew(STextBlock)
				.Font(IDetailLayoutBuilder::GetDetailFont())
				.AutoWrapText(true)
				.Justification(ETextJustify::Center)
				.Text(LOCTEXT("CTXPT_EngineSplashWarning", "Engine Splash Screen is enabled, this will result in an inconsistent experience."))
				.ColorAndOpacity(FAppStyle::Get().GetSlateColor(WarningColorStyle))
			]
			+ SHorizontalBox::Slot().FillWidth(1.f).HAlign(EHorizontalAlignment::HAlign_Left)
			[
				SNew(SButton)
				.VAlign(EVerticalAlignment::VAlign_Center)
				.Text(LOCTEXT("DisableEngineSplashScreen", "Disable Engine Splash Screen"))
				.OnClicked(this, &FOculusXRHMDSettingsDetailsCustomization::DisableEngineSplash, true)
			]
		]
	];
	/* clang-format on */
}

EVisibility FOculusXRHMDSettingsDetailsCustomization::GetContextualPassthroughWarningVisibility() const
{
	UOculusXRHMDRuntimeSettings* OculusSettings = GetMutableDefault<UOculusXRHMDRuntimeSettings>();
	return OculusSettings->SystemSplashBackground == ESystemSplashBackgroundType::Contextual && (OculusSettings->bAutoEnabled || !OculusSettings->SplashDescs.IsEmpty()) ? EVisibility::Visible : EVisibility::Collapsed;
}

//////////////////////////////////////////////////////////////////////////

IMPLEMENT_MODULE(FOculusXREditorModule, OculusXREditor);

//////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE
