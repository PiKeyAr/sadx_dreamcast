#include "stdafx.h"

// TODO:
// Use symbol stuff where possible
// Replace model filenames
// Load all animations externally

// Level files
LandTableInfo *STG00_0_Info = nullptr;
LandTableInfo *STG01_0_Info = nullptr;
LandTableInfo *STG01_1_Info = nullptr;
LandTableInfo *STG01_2_Info = nullptr;
LandTableInfo *STG02_0_Info = nullptr;
LandTableInfo *STG02_1_Info = nullptr;
LandTableInfo *STG02_2_Info = nullptr;
LandTableInfo *STG03_0_Info = nullptr;
LandTableInfo *STG03_1_Info = nullptr;
LandTableInfo *STG03_2_Info = nullptr;
LandTableInfo *STG04_0_Info = nullptr;
LandTableInfo *STG04_1_Info = nullptr;
LandTableInfo *STG04_2_Info = nullptr;
LandTableInfo *STG05_0_Info = nullptr;
LandTableInfo *STG05_1_Info = nullptr;
LandTableInfo *STG05_2_Info = nullptr;
LandTableInfo *STG06_0_Info = nullptr;
LandTableInfo *STG06_1_Info = nullptr;
LandTableInfo *STG06_2_Info = nullptr;
LandTableInfo *STG07_0_Info = nullptr;
LandTableInfo *STG07_1_Info = nullptr;
LandTableInfo *STG07_2_Info = nullptr;
LandTableInfo *STG08_0_Info = nullptr;
LandTableInfo *STG08_1_Info = nullptr;
LandTableInfo *STG08_2_Info = nullptr;
LandTableInfo *STG08_3_Info = nullptr;
LandTableInfo *STG09_0_Info = nullptr;
LandTableInfo *STG09_1_Info = nullptr;
LandTableInfo *STG09_2_Info = nullptr;
LandTableInfo *STG09_3_Info = nullptr;
LandTableInfo *STG10_0_Info = nullptr;
LandTableInfo *STG10_1_Info = nullptr;
LandTableInfo *STG10_2_Info = nullptr;
LandTableInfo *STG12_0_Info = nullptr;
LandTableInfo *STG12_1_Info = nullptr;
LandTableInfo *STG12_2_Info = nullptr;
LandTableInfo *B_CHAOS0_Info = nullptr;
LandTableInfo *B_CHAOS2_Info = nullptr;
LandTableInfo *B_CHAOS4_Info = nullptr;
LandTableInfo *B_CHAOS6_0_Info = nullptr;
LandTableInfo *B_CHAOS6_1_Info = nullptr;
LandTableInfo *B_CHAOS7_Info = nullptr;
LandTableInfo *B_EGM1_Info = nullptr;
LandTableInfo *B_EGM2_Info = nullptr;
LandTableInfo *B_EGM3_Info = nullptr;
LandTableInfo *B_E101_Info = nullptr;
LandTableInfo *B_ROBO_Info = nullptr;
LandTableInfo *B_E101_R_Info = nullptr;
LandTableInfo *ADV00_0_Info = nullptr;
LandTableInfo *ADV00_1_Info = nullptr;
LandTableInfo *ADV00_2_Info = nullptr;
LandTableInfo *ADV00_3_Info = nullptr;
LandTableInfo *ADV00_4_Info = nullptr;
LandTableInfo *ADV00_5_Info = nullptr;
LandTableInfo *ADV01_0_Info = nullptr;
LandTableInfo *ADV01_1_Info = nullptr;
LandTableInfo *ADV01_2_Info = nullptr;
LandTableInfo *ADV01_3_Info = nullptr;
LandTableInfo *ADV01_4_Info = nullptr;
LandTableInfo *ADV01_5_Info = nullptr;
LandTableInfo *ADV01C_0_Info = nullptr;
LandTableInfo *ADV01C_1_Info = nullptr;
LandTableInfo *ADV01C_2_Info = nullptr;
LandTableInfo *ADV01C_3_Info = nullptr;
LandTableInfo *ADV01C_4_Info = nullptr;
LandTableInfo *ADV01C_5_Info = nullptr;
LandTableInfo *ADV02_0_Info = nullptr;
LandTableInfo *ADV02_1_Info = nullptr;
LandTableInfo *ADV02_2_Info = nullptr;
LandTableInfo *ADV02_3_Info = nullptr;
LandTableInfo *ADV03_0_Info = nullptr;
LandTableInfo *ADV03_1_Info = nullptr;
LandTableInfo *ADV03_2_Info = nullptr;
LandTableInfo *MINICART_0_Info = nullptr;
LandTableInfo *MINICART_1_Info = nullptr;
LandTableInfo *MINICART_2_Info = nullptr;
LandTableInfo *MINICART_3_Info = nullptr;
LandTableInfo *MINICART_4_Info = nullptr;
LandTableInfo *MINICART_5_Info = nullptr;
LandTableInfo *SBOARD_Info = nullptr;
LandTableInfo *AL_GARDEN00_Info = nullptr;
LandTableInfo *AL_GARDEN01_Info = nullptr;
LandTableInfo *AL_GARDEN02_Info = nullptr;
LandTableInfo *AL_RACE_0_Info = nullptr;
LandTableInfo *AL_RACE_1_Info = nullptr;

std::vector<TextureAnimation> TextureAnimationData;
std::vector<TextureAnimation> TextureAnimationData_Permanent;
std::vector<UVAnimation> UVAnimationData;
std::vector<UVAnimation> UVAnimationData_Permanent;

bool UIScale = false;
bool ModelsLoaded_General = false;
bool ModelsLoaded_ShareObj = false;
bool ModelsLoaded_Chao = false;
bool ModelsLoaded_STG00 = false;
bool ModelsLoaded_STG01 = false;
bool ModelsLoaded_STG02 = false;
bool ModelsLoaded_STG03 = false;
bool ModelsLoaded_STG04 = false;
bool ModelsLoaded_STG05 = false;
bool ModelsLoaded_STG06 = false;
bool ModelsLoaded_STG07 = false;
bool ModelsLoaded_STG08 = false;
bool ModelsLoaded_STG09 = false;
bool ModelsLoaded_STG10 = false;
bool ModelsLoaded_STG12 = false;
bool ModelsLoaded_B_CHAOS0 = false;
bool ModelsLoaded_B_CHAOS2 = false;
bool ModelsLoaded_B_CHAOS4 = false;
bool ModelsLoaded_B_CHAOS6 = false;
bool ModelsLoaded_B_CHAOS7 = false;
bool ModelsLoaded_B_EGM1 = false;
bool ModelsLoaded_B_EGM2 = false;
bool ModelsLoaded_B_EGM3 = false;
bool ModelsLoaded_B_ROBO = false;
bool ModelsLoaded_B_E101 = false;
bool ModelsLoaded_B_E101R = false;
bool ModelsLoaded_ADV00 = false;
bool ModelsLoaded_ADV0100 = false;
bool ModelsLoaded_ADV0130 = false;
bool ModelsLoaded_ADV02 = false;
bool ModelsLoaded_ADV03 = false;
bool ModelsLoaded_SHOOTING = false;
bool ModelsLoaded_MINICART = false;
bool ModelsLoaded_SBOARD = false;
bool InitError = false;

DataPointer(float*, HorizontalStretchPointer, 0x51285E);

HelperFunctions HelperFunctionsGlobal;

bool EnableCutsceneFix = true;
int CutsceneSkipMode = 0;
int CutsceneFrameCounter = 0;
std::string EnableImpressFont = "Impress";
bool ColorizeFont = true;
bool DisableFontSmoothing = true;
bool DisableFontFiltering = true;
bool EnableLSDFix = false;
bool FPSLock = false;
bool EnableDCRipple = true;
bool EnableWhiteDiffuse = true;
bool RestoreHumpAnimations = true;
bool AssumeOIT = false;
int Use1999SetFiles = 0;
bool FixHeldObjects = true;
bool RestoreYButton = true;
bool RemoveSetUpPad = false;
bool RemoveMap = false;
bool RemoveCamera = false;

bool EnableWindowTitle = true;
bool EnableDCBranding = true;

bool IamStupidAndIWantFuckedUpOcean = false;
bool CowgirlOn = true;
bool DisableAllVideoStuff = true;

bool EnabledLevels[43];

bool EnableSkyChaseFixes = true;
bool EnableSkyChaseEnemyModels = true;

bool ReplaceEggs = true;
int ReplaceFruits = 0;
bool EnableLobby = true;
bool DisableChaoButtonPrompts = false;

bool SADXWater_EmeraldCoast = false;
bool SADXWater_StationSquare = false;
bool SADXWater_MysticRuins = false;
bool SADXWater_EggCarrier = false;
bool SADXWater_Past = false;

bool DLLLoaded_SA1Chars = false;
bool DLLLoaded_Lantern = false;
bool DLLLoaded_HDGUI = false;
bool DLLLoaded_DLCs = false;
bool DLLLoaded_SADXFE = false;
bool DLLLoaded_DX11 = false;
bool EnableSpeedFixes = true;
bool SuppressWarnings = false;
bool BigBeltFix = false;

int LanternErrorMessageTimer = 0;
int PauseHideErrorMessageTimer = 0;

std::string ModPath = "";

static const wchar_t *const OldModDLLs[] = {
	L"DC_Bosses",
	L"DC_Branding",
	L"DC_ChaoGardens",
	L"DC_Casinopolis",
	L"DC_ADV00MODELS",
	L"DC_ADV01MODELS",
	L"DC_ADV02MODELS",
	L"DC_ADV03MODELS",
	L"DC_EmeraldCoast",
	L"DC_EnvMaps",
	L"DC_FinalEgg",
	L"DC_General",
	L"DC_HotShelter",
	L"DC_IceCap",
	L"DC_LostWorld",
	L"DC_RedMountain",
	L"DC_SkyDeck",
	L"DC_SpeedHighway",
	L"DC_TwinklePark",
	L"DC_WindyValley",
	L"DC_SubGames",
	L"DC_TornadoModels",
	L"DisableSA1TitleScreen",
	L"KillCream",
	L"RevertECDrawDistance",
	L"SADXStyleWater",
	L"MRFinalEggFix"
};


void RestoreHumpAnimations_apply()
{
	SonicAnimData[37].AnimationSpeed = 0.5f;
	TailsAnimData[62].AnimationSpeed = 0.5f;
	KnucklesAnimData[74].AnimationSpeed = 1.0f;
	KnucklesAnimData[24].AnimationSpeed = 1.0f; // Fix wrong speed for Knuckles' push animation (same value as pull animation)
	AmyAnimData[47].AnimationSpeed = 0.25f; // Half the original value because it looks stupid
	WriteData<1>((char*)0x45C08B, 0x50u); // Correct animation index for Tails' "jump while holding something"
	TailsAnimData[80].Animation = MILES_ACTIONS[21]; // Tails jumping while holding something
	TailsAnimData[80].AnimationSpeed = 0.5f;
	TailsAnimData[81].Animation = MILES_ACTIONS[22]; // Tails transition jumping while holding something
	TailsAnimData[81].AnimationSpeed = 0.5f;
	TailsAnimData[82].Animation = MILES_ACTIONS[23]; // Tails falling while holding something
}

// The most important trampoline
static Trampoline* LoadLevelFiles_t = nullptr;
static void __cdecl LoadLevelFiles_r()
{
	const auto original = TARGET_DYNAMIC(LoadLevelFiles);
	CheckAndUnloadLevelFiles();
	if (RestoreHumpAnimations) RestoreHumpAnimations_apply();
	original();
}

static void __declspec(naked) land_DrawObjectHacc()
{
	__asm
	{
		push[esp + 04h] // a2
		push edi // a1

		// Call your __cdecl function here:
		call land_DrawObject_New

		pop edi // a1
		add esp, 4 // a2
		retn
	}
}

extern "C"
{
	__declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
	{
		// Check which DLLs are loaded
		DLLLoaded_DX11 = (GetModuleHandle(L"sadx-d3d11") != nullptr);
		DLLLoaded_HDGUI = (GetModuleHandle(L"HD_GUI") != nullptr);
		DLLLoaded_SA1Chars = (GetModuleHandle(L"SA1_Chars") != nullptr);
		DLLLoaded_Lantern = (GetModuleHandle(L"sadx-dc-lighting") != nullptr);
		DLLLoaded_DLCs = (GetModuleHandle(L"DLCs_Main") != nullptr);
		DLLLoaded_SADXFE = (GetModuleHandle(L"sadx-fixed-edition") != nullptr);
		HelperFunctionsGlobal = helperFunctions;
		// Global mod path
		ModPath = std::string(path);
		HMODULE LanternDLL = GetModuleHandle(L"sadx-dc-lighting");
		if (HorizontalStretchPointer != &HorizontalStretch) UIScale = true; else UIScale = false;
		// Error messages
		if (!DLLLoaded_Lantern) LanternErrorMessageTimer = 600;
		if (DLLLoaded_Lantern && GetProcAddress(LanternDLL, "palette_from_mix") == nullptr)
		{
			MessageBox(WindowHandle,
				L"Please update the Lantern Engine mod. Dreamcast Conversion requires Lantern Engine 1.4.6 or newer.",
				L"DC Conversion error: Lantern Engine out of date", MB_OK | MB_ICONERROR);
			InitError = true;
		}
		if (helperFunctions.Version < 7)
		{
			MessageBox(WindowHandle,
				L"Please update SADX Mod Loader. Dreamcast Conversion requires API version 7 or newer.",
				L"DC Conversion error: Mod Loader out of date", MB_OK | MB_ICONERROR);
			InitError = true;
		}
		// Check for old mod DLLs
		std::wstring OldModsMessage = L"Old/incompatible mods detected!\n\n"
			L"The following mods are outdated and will cause "
			L"problems if you leave them enabled. These mods are "
			L"no longer needed because they are built into the "
			L"main Dreamcast Conversion mod.\n\n"
			L"Please uninstall the following mods in the Mod Manager:\n\n";
		bool OldModsFound = false;
		for (unsigned int i = 0; i < LengthOfArray(OldModDLLs); i++)
		{
			if (GetModuleHandle(OldModDLLs[i]) != nullptr)
			{
				// Found a known incompatible mod
				OldModsMessage += OldModDLLs[i];
				OldModsMessage += '\n';
				OldModsFound = true;
			}
		}
		if (OldModsFound)
		{
			MessageBox(WindowHandle, OldModsMessage.c_str(),
				L"DC Conversion error: incompatible mods detected",
				MB_OK | MB_ICONERROR);
			InitError = true;
		}
		if (InitError) return;
		LoadLevelFiles_t = new Trampoline(0x422AD0, 0x422AD8, LoadLevelFiles_r);
		const std::string s_path(path);
		const std::string s_config_ini(s_path + "\\config.ini");
		// Config stuff
		const IniFile *const config = new IniFile(s_config_ini);
		// Read config stuff
		SuppressWarnings = config->getBool("General", "SuppressWarnings", false);
		FPSLock = config->getBool("General", "FPSLock", false);
		RestoreHumpAnimations = config->getBool("General", "RestoreHumpAnimations", true);
		EnableDCRipple = config->getBool("General", "EnableDreamcastWaterRipple", true);
		EnableCutsceneFix = config->getBool("General", "EnableCutsceneFix", true);
		EnableImpressFont = config->getString("General", "EnableImpressFont", "Impress");
		CutsceneSkipMode = config->getInt("General", "CutsceneSkipMode", 0);
		ColorizeFont = config->getBool("General", "ColorizeFont", true);
		AssumeOIT = config->getBool("General", "AssumeOIT", false);
		DisableFontSmoothing = config->getBool("General", "DisableFontSmoothing", true);
		DisableFontFiltering = config->getBool("General", "DisableFontFiltering", true);
		EnableLSDFix = config->getBool("Miscellaneous", "EnableLSDFix", false);
		BigBeltFix = config->getBool("Miscellaneous", "BigBeltFix", false);
		RemoveSetUpPad = config->getBool("Branding", "RemoveSetUpPad", false);
		RemoveMap = config->getBool("Branding", "RemoveMap", false);
		RemoveCamera = config->getBool("Branding", "RemoveCamera", false);
		if (GetModuleHandle(L"pause-hide") != nullptr)
		{
			if (RemoveMap || RemoveCamera || RemoveSetUpPad) PauseHideErrorMessageTimer = 600;
		}
		EnableDCBranding = config->getBool("General", "EnableDreamcastBranding", true);
		EnableSpeedFixes = config->getBool("General", "EnableSpeedFixes", true);
		EnableWindowTitle = config->getBool("General", "EnableWindowTitle", true);
		EnabledLevels[LevelIDs_EmeraldCoast] = config->getBool("Levels", "EnableEmeraldCoast", true);
		EnabledLevels[LevelIDs_WindyValley] = config->getBool("Levels", "EnableWindyValley", true);
		EnabledLevels[LevelIDs_TwinklePark] = config->getBool("Levels", "EnableTwinklePark", true);
		EnabledLevels[LevelIDs_SpeedHighway] = config->getBool("Levels", "EnableSpeedHighway", true);
		EnabledLevels[LevelIDs_RedMountain] = config->getBool("Levels", "EnableRedMountain", true);
		EnabledLevels[LevelIDs_SkyDeck] = config->getBool("Levels", "EnableSkyDeck", true);
		EnabledLevels[LevelIDs_LostWorld] = config->getBool("Levels", "EnableLostWorld", true);
		EnabledLevels[LevelIDs_IceCap] = config->getBool("Levels", "EnableIceCap", true);
		EnabledLevels[LevelIDs_Casinopolis] = config->getBool("Levels", "EnableCasinopolis", true);
		EnabledLevels[LevelIDs_FinalEgg] = config->getBool("Levels", "EnableFinalEgg", true);
		EnabledLevels[LevelIDs_HotShelter] = config->getBool("Levels", "EnableHotShelter", true);
		EnabledLevels[LevelIDs_StationSquare] = config->getBool("Levels", "EnableStationSquare", true);
		EnabledLevels[LevelIDs_MysticRuins] = config->getBool("Levels", "EnableMysticRuins", true);
		EnabledLevels[LevelIDs_EggCarrierOutside] = EnabledLevels[LevelIDs_EggCarrierInside] = config->getBool("Levels", "EnableEggCarrier", true);
		EnabledLevels[LevelIDs_Past] = config->getBool("Levels", "EnablePast", true);
		DisableAllVideoStuff = config->getBool("Videos", "DisableAllVideoStuff", false);
		SADXWater_EmeraldCoast = config->getBool("SADX Style Water", "EmeraldCoast", false);
		SADXWater_StationSquare = config->getBool("SADX Style Water", "StationSquare", false);
		SADXWater_MysticRuins = config->getBool("SADX Style Water", "MysticRuins", false);
		SADXWater_EggCarrier = config->getBool("SADX Style Water", "EggCarrier", false);
		SADXWater_Past = config->getBool("SADX Style Water", "Past", false);
		EnabledLevels[LevelIDs_Chaos0] = config->getBool("Bosses", "EnableChaos0", true);
		EnabledLevels[LevelIDs_Chaos2] = config->getBool("Bosses", "EnableChaos2", true);
		EnabledLevels[LevelIDs_Chaos4] = config->getBool("Bosses", "EnableChaos4", true);
		EnabledLevels[LevelIDs_Chaos6] = config->getBool("Bosses", "EnableChaos6", true);
		EnabledLevels[LevelIDs_PerfectChaos] = config->getBool("Bosses", "EnablePerfectChaos", true);
		EnabledLevels[LevelIDs_EggHornet] = config->getBool("Bosses", "EnableEggHornet", true);
		EnabledLevels[LevelIDs_EggWalker] = config->getBool("Bosses", "EnableEggWalker", true);
		EnabledLevels[LevelIDs_EggViper] = config->getBool("Bosses", "EnableEggViper", true);
		EnabledLevels[LevelIDs_E101] = config->getBool("Bosses", "EnableE101", true);
		EnabledLevels[LevelIDs_Zero] = EnabledLevels[LevelIDs_E101R] = config->getBool("Bosses", "EnableZeroE101R", true);
		EnabledLevels[LevelIDs_HedgehogHammer] = config->getBool("Miscellaneous", "EnableHedgehogHammer", true);
		EnabledLevels[LevelIDs_TwinkleCircuit] = config->getBool("Miscellaneous", "EnableTwinkleCircuit", true);
		EnabledLevels[LevelIDs_SandHill] = config->getBool("Miscellaneous", "EnableSandHill", true);
		CowgirlOn = config->getBool("Miscellaneous", "EnableCasinopolisCowgirl", true);
		Use1999SetFiles = config->getInt("Miscellaneous", "Use1999SetFiles", 0);
		FixHeldObjects = config->getBool("Miscellaneous", "FixHeldObjects", true);
		RestoreYButton = config->getBool("Miscellaneous", "RestoreYButton", true);
		IamStupidAndIWantFuckedUpOcean = config->getBool("Miscellaneous", "RevertEmeraldCoastDrawDistance", false);
		EnableSkyChaseEnemyModels = config->getBool("Miscellaneous", "EnableSkyChaseEnemyModels", true);
		EnableWhiteDiffuse = config->getBool("Miscellaneous", "EnableWhiteDiffuse", true);
		EnabledLevels[LevelIDs_SSGarden] = config->getBool("Chao Gardens", "EnableStationSquareGarden", true);
		EnabledLevels[LevelIDs_MRGarden] = config->getBool("Chao Gardens", "EnableMysticRuinsGarden", true);
		EnabledLevels[LevelIDs_ECGarden] = config->getBool("Chao Gardens", "EnableEggCarrierGarden", true);
		ReplaceFruits = config->getInt("Chao Gardens", "ReplaceFruits", 0);
		ReplaceEggs = config->getBool("Chao Gardens", "ReplaceEggs", true);
		EnableLobby = config->getBool("Chao Gardens", "EnableChaoRaceLobby", true);
		DisableChaoButtonPrompts = config->getBool("Chao Gardens", "DisableChaoButtonPrompts", false);
		// Autodemo mods check
		if (GetModuleHandle(L"AutoDemo_TestLevels") != nullptr) EnabledLevels[LevelIDs_HedgehogHammer] = false;
		if (GetModuleHandle(L"AutoDemo_WindyValley") != nullptr) EnabledLevels[LevelIDs_WindyValley] = false;
		if (GetModuleHandle(L"AutoDemo_SpeedHighway") != nullptr) EnabledLevels[LevelIDs_SpeedHighway] = false;
		if (GetModuleHandle(L"AutoDemo_RedMountain") != nullptr) EnabledLevels[LevelIDs_RedMountain] = false;
		// Set window title
		if (EnableWindowTitle) helperFunctions.SetWindowTitle("Sonic Adventure");
		// Another error message
		if (EnabledLevels[LevelIDs_EmeraldCoast] && GetModuleHandle(L"WaterEffect") != nullptr)
		{
			EnabledLevels[LevelIDs_EmeraldCoast] = false;
			MessageBox(WindowHandle,
				L"The Enhanced Emerald Coast mod is not "
				L"compatible with Dreamcast Emerald Coast. Please "
				L"disable Enhanced Emerald Coast for the "
				L"Dreamcast level to work. To get SADX-like "
				L"water in DC Emerald Coast, enable SADX "
				L"Style Water in Dreamcast Conversion's config.",
				L"DC Conversion error: incompatible mod detected",
				MB_OK | MB_ICONERROR);
		}
		// Disable font smoothing
		if (DisableFontSmoothing)
		{
			// Probably better than making the whole texture ARGB1555
			WriteData<1>((char*)0x40DA0B, 0x00);
			WriteData<1>((char*)0x40DA0C, 0x00);
			WriteData<1>((char*)0x40DA12, 0x00);
		}
		// Enable Impress font
		if (EnableImpressFont == "Impress")
		{
			ReplaceGeneric("FONTDATA1.BIN", "FONTDATA1_I.BIN");
		}
		// Enable Comic Sans font (experimental)
		else if (EnableImpressFont == "ComicSans")
		{
			ReplaceGeneric("FONTDATA1.BIN", "FONTDATA1_C.BIN");
		}
		if (ColorizeFont)
		{
			// Subtitles (ARGB from 0 to F: CEEF)
			WriteData<1>((char*)0x40E28D, 0xEF);
			WriteData<1>((char*)0x40E28E, 0xCE);
			// Pause menu text (ARGB from 00 to FF: BFEFEFFF)
			WriteData<1>((char*)0x40E541, 0xFF);
			WriteData<1>((char*)0x40E542, 0xEF);
			WriteData<1>((char*)0x40E543, 0xEF);
			WriteData<1>((char*)0x40E544, 0xBF);
			// Recap screen (just FF F8 F8 F8)
			WriteCall((void*)0x6428AD, ColorizeRecapText);
		}
		// Init functions
		Init_Global(); // General stuff that runs at mod startup, some level-specific stuff there too
		WriteCall((void*)0x43A757, land_DrawObjectHacc);
		WriteCall((void*)0x43A7CD, land_DrawObjectHacc);
		if (AssumeOIT) OIT_Init();
		SADXStyleWater_Init(config, helperFunctions);
		if (EnableDCBranding) Branding_Init(config, helperFunctions);
		if (EnabledLevels[LevelIDs_StationSquare] && nullsub_ADV00 != 0x90u)
		{
			WriteCall((void*)0x4231E6, ADV00_Init);
		}
		if (EnabledLevels[LevelIDs_EggCarrierOutside])
		{
			if (nullsub_ADV01 != 0x90u) WriteCall((void*)0x4232C9, ADV01_Init);
			if (nullsub_ADV01C != 0x90u) WriteCall((void*)0x4233BB, ADV01C_Init);
		}
		if (EnabledLevels[LevelIDs_MysticRuins] && nullsub_ADV02 != 0x90u)
		{
			WriteCall((void*)0x4234AD, ADV02_Init);
		}
		if (EnabledLevels[LevelIDs_Past] && nullsub_ADV03 != 0x90u)
		{
			WriteCall((void*)0x423554, ADV03_Init);
		}
		if (EnabledLevels[LevelIDs_EmeraldCoast] && nullsub_STG01 != 0x90u)
		{
			WriteCall((void*)0x422B68, EmeraldCoast_Init);
		}
		if (EnabledLevels[LevelIDs_WindyValley] && nullsub_STG02 != 0x90u)
		{
			WriteCall((void*)0x422BD3, WindyValley_Init);
		}
		if (EnabledLevels[LevelIDs_TwinklePark] && nullsub_STG03 != 0x90u)
		{
			WriteCall((void*)0x422C3E, TwinklePark_Init);
		}
		if (EnabledLevels[LevelIDs_SpeedHighway] && nullsub_STG04 != 0x90u)
		{
			WriteCall((void*)0x422CA9, SpeedHighway_Init);
		}
		if (EnabledLevels[LevelIDs_RedMountain] && nullsub_STG05 != 0x90u)
		{
			WriteCall((void*)0x422D14, RedMountain_Init);
		}
		if (EnabledLevels[LevelIDs_SkyDeck] && nullsub_STG06 != 0x90u)
		{
			WriteCall((void*)0x422D84, SkyDeck_Init);
		}
		if (EnabledLevels[LevelIDs_LostWorld] && nullsub_STG07 != 0x90u)
		{
			WriteCall((void*)0x422DEF, LostWorld_Init);
		}
		if (EnabledLevels[LevelIDs_IceCap] && nullsub_STG08 != 0x90u)
		{
			WriteCall((void*)0x422E5A, IceCap_Init);
		}
		if (EnabledLevels[LevelIDs_Casinopolis] && nullsub_STG09 != 0x90u)
		{
			WriteCall((void*)0x422EE8, Casinopolis_Init);
		}
		if (EnabledLevels[LevelIDs_FinalEgg] && nullsub_STG10 != 0x90u)
		{
			WriteCall((void*)0x422F71, FinalEgg_Init);
		}
		if (EnabledLevels[LevelIDs_HotShelter] && nullsub_STG12 != 0x90u)
		{
			WriteCall((void*)0x422FFF, HotShelter_Init);
		}
		if (EnabledLevels[LevelIDs_Chaos0] && nullsub_B_CHAOS0 != 0x90u)
		{
			WriteCall((void*)0x423088, Chaos0_Init);
		}
		if (EnabledLevels[LevelIDs_Chaos2] && nullsub_B_CHAOS2 != 0x90u)
		{
			WriteCall((void*)0x4230B7, Chaos2_Init);
		}
		if (EnabledLevels[LevelIDs_Chaos4] && nullsub_B_CHAOS4 != 0x90u)
		{
			WriteCall((void*)0x4230CD, Chaos4_Init);
		}
		if (EnabledLevels[LevelIDs_Chaos6] && nullsub_B_CHAOS6 != 0x90u)
		{
			WriteCall((void*)0x4230E3, Chaos6_Init);
		}
		if (EnabledLevels[LevelIDs_PerfectChaos] && nullsub_B_CHAOS7 != 0x90u)
		{
			WriteCall((void*)0x423108, PerfectChaos_Init);
		}
		if (EnabledLevels[LevelIDs_EggHornet] && nullsub_B_EGM1 != 0x90u)
		{
			WriteCall((void*)0x423146, EggHornet_Init);
		}
		if (EnabledLevels[LevelIDs_EggWalker] && nullsub_B_EGM2 != 0x90u)
		{
			WriteCall((void*)0x42315F, EggWalker_Init);
		}
		if (EnabledLevels[LevelIDs_EggViper] && nullsub_B_EGM3 != 0x90u)
		{
			WriteCall((void*)0x423178, EggViper_Init);
		}
		if (EnabledLevels[LevelIDs_E101] && nullsub_B_E101 != 0x90u)
		{
			WriteCall((void*)0x4231AF, E101_Init);
		}
		if (EnabledLevels[LevelIDs_Zero])
		{
			if (nullsub_B_ROBO != 0x90u) WriteCall((void*)0x423196, Zero_Init);
			if (nullsub_B_E101R != 0x90u) WriteCall((void*)0x4231CD, E101R_Init);
		}
		SkyChaseFix_Init();
		if (nullsub_SHOOTING1 != 0x90u) WriteCall((void*)0x4236B1, SkyChase_Init);
		if (nullsub_SHOOTING2 != 0x90u) WriteCall((void*)0x4236E0, SkyChase_Init);
		if (EnabledLevels[LevelIDs_HedgehogHammer] && nullsub_STG00 != 0x90u)
		{
			WriteCall((void*)0x422B2A, HedgehogHammer_Init);
		}
		if (EnabledLevels[LevelIDs_TwinkleCircuit] && nullsub_MINICART != 0x90u)
		{
			WriteCall((void*)0x4235EC, TwinkleCircuit_Init);
		}
		if (EnabledLevels[LevelIDs_SandHill] && nullsub_SBOARD != 0x90u)
		{
			WriteCall((void*)0x42370F, SandHill_Init);
		}
		if (nullsub_Chao != 0x90u) WriteCall((void*)0x423795, ChaoGardens_Init);
		if (!DisableAllVideoStuff) Videos_Init(config, helperFunctions);
		if (EnableSpeedFixes) SpeedFixes_Init();
		delete config;
	}
		
	__declspec(dllexport) void __cdecl OnInitEnd()
	{
		if (InitError) return;
		OnInitEnd_Videos();
	}

	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (InitError) return;
		// Display error messages
		if (!SuppressWarnings && LanternErrorMessageTimer && (IsIngame() || GameMode == GameModes_Menu))
		{
			BackupDebugFontSettings();
			SetDebugFontSize(Uint16(10.0f * (float)VerticalResolution / 480.0f));
			SetDebugFontColor(0xFFBFBFBF);
			DisplayDebugString(NJM_LOCATION(2, 1), "Failed to detect the Lantern Engine mod.");
			DisplayDebugString(NJM_LOCATION(2, 2), "Dreamcast levels will have no lighting,");
			DisplayDebugString(NJM_LOCATION(2, 3), "and alpha rejection fixes will not be applied.");
			DisplayDebugString(NJM_LOCATION(2, 4), "Please install and enable Lantern Engine for correct visuals.");
			LanternErrorMessageTimer--;
			RestoreDebugFontSettings();
		}
		if (!SuppressWarnings && PauseHideErrorMessageTimer && (IsIngame() || GameMode == GameModes_Menu))
		{
			BackupDebugFontSettings();
			SetDebugFontSize(Uint16(10.0f * (float)VerticalResolution / 480.0f));
			SetDebugFontColor(0xFFBFBFBF);
			DisplayDebugString(NJM_LOCATION(2, 6), "The Pause Hide mod interferes with");
			DisplayDebugString(NJM_LOCATION(2, 7), "some options in Dreamcast Conversion.");
			DisplayDebugString(NJM_LOCATION(2, 8), "Dreamcast Conversion already includes");
			DisplayDebugString(NJM_LOCATION(2, 9), "the functionality of the Pause Hide mod.");
			DisplayDebugString(NJM_LOCATION(2, 10), "Please disable or remove it.");
			PauseHideErrorMessageTimer--;
			RestoreDebugFontSettings();
		}
		// Animate materials and UVs
		if (!IsGamePaused() && Camera_Data1)
		{
			int levelid = -1;
			int actid = 0;
			switch (CurrentChaoStage)
			{
			case SADXChaoStage_Race:
				levelid = LevelIDs_ChaoRace;
				break;
			case SADXChaoStage_StationSquare:
				levelid = LevelIDs_SSGarden;
				break;
			case SADXChaoStage_EggCarrier:
				levelid = LevelIDs_ECGarden;
				break;
			case SADXChaoStage_MysticRuins:
				levelid = LevelIDs_MRGarden;
				break;
			case -1:
			default:
				levelid = CurrentLevel;
				actid = CurrentAct;
				break;
			}

			// Texture animations
			for (TextureAnimation anim : TextureAnimationData)
			{
				if (anim.level == levelid && anim.act == actid)
					AnimateTexture(&anim);
			}

			// Texture animations permanent
			for (TextureAnimation anim : TextureAnimationData_Permanent)
			{
				if (anim.level == levelid && anim.act == actid)
					AnimateTexture(&anim);
			}

			// UV animations
			for (UVAnimation uvanim : UVAnimationData)
			{
				if (uvanim.level == levelid && uvanim.act == actid)
					AnimateUVs(&uvanim);
			}

			// UV animations permanent
			for (UVAnimation uvanim : UVAnimationData_Permanent)
			{
				if (uvanim.level == levelid && (uvanim.act == actid || uvanim.act == -1))
					AnimateUVs(&uvanim);
			}
		}
		if (EnableDCBranding) Branding_OnFrame();
		if (EnabledLevels[LevelIDs_StationSquare] && nullsub_ADV00 != 0x90u) ADV00_OnFrame();
		if (EnabledLevels[LevelIDs_EggCarrierOutside])
		{
			if (nullsub_ADV01 != 0x90u) ADV01_OnFrame();
			if (nullsub_ADV01C != 0x90u) ADV01C_OnFrame();
		}
		if (EnabledLevels[LevelIDs_MysticRuins] && nullsub_ADV02 != 0x90u) ADV02_OnFrame();
		if (EnabledLevels[LevelIDs_Past] && nullsub_ADV03 != 0x90u) ADV03_OnFrame();
		if (EnabledLevels[LevelIDs_EggHornet] && nullsub_B_EGM1 != 0x90u) EggHornet_OnFrame();
		if (EnabledLevels[LevelIDs_EggViper] && nullsub_B_EGM3 != 0x90u) EggViper_OnFrame();
		if (EnabledLevels[LevelIDs_Zero])
		{
			if (nullsub_B_ROBO != 0x90u) Zero_OnFrame();
			if (nullsub_B_E101R != 0x90u) E101R_OnFrame();
		}
		if (EnabledLevels[LevelIDs_PerfectChaos] && nullsub_B_CHAOS7 != 0x90u) PerfectChaos_OnFrame();
		if (EnabledLevels[LevelIDs_EmeraldCoast] && nullsub_STG01 != 0x90u) EmeraldCoast_OnFrame();
		if (EnabledLevels[LevelIDs_WindyValley] && nullsub_STG02 != 0x90u) WindyValley_OnFrame();
		//if (EnabledLevels[LevelIDs_TwinklePark] && nullsub_STG03 != 0x90u) TwinklePark_OnFrame();
		//if (EnabledLevels[LevelIDs_TwinklePark] || EnabledLevels[LevelIDs_TwinkleCircuit]) ShareObj_OnFrame();
		//if (EnabledLevels[LevelIDs_SpeedHighway] && nullsub_STG04 != 0x90u) SpeedHighway_OnFrame();
		if (EnabledLevels[LevelIDs_RedMountain] && nullsub_STG05 != 0x90u) RedMountain_OnFrame();
		if (EnabledLevels[LevelIDs_SkyDeck] && nullsub_STG06 != 0x90u) SkyDeck_OnFrame();
		if (EnabledLevels[LevelIDs_LostWorld] && nullsub_STG07 != 0x90u) LostWorld_OnFrame();
		if (EnabledLevels[LevelIDs_IceCap] && nullsub_STG08 != 0x90u) IceCap_OnFrame();
		if (EnabledLevels[LevelIDs_Casinopolis] && nullsub_STG09 != 0x90u) Casinopolis_OnFrame();
		if (EnabledLevels[LevelIDs_FinalEgg] && nullsub_STG10 != 0x90u) FinalEgg_OnFrame();
		if (EnabledLevels[LevelIDs_HotShelter] && nullsub_STG12 != 0x90u) HotShelter_OnFrame();
		//Subgames_OnFrame();
		if (nullsub_Chao != 0x90u) ChaoGardens_OnFrame();
		if (nullsub_Chao != 0x90u) ChaoRace_OnFrame();
		General_OnFrame();
		if (!DisableAllVideoStuff) Videos_OnFrame();
		if (EnableSpeedFixes) SpeedFixes_OnFrame();
		if (!IsGamePaused()) SADXStyleWater_OnFrame();
	}

	__declspec(dllexport) void __cdecl OnInput()
	{
		if (InitError) return;
		if (!DisableAllVideoStuff) Videos_OnInput();
		if (CutsceneSkipMode != 3) General_OnInput();
	}

	__declspec(dllexport) void __cdecl OnRenderDeviceReset()
	{
		if (InitError) return;
		SkyChaseFix_UpdateBounds();
		Branding_SetUpVariables();
	}

	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}