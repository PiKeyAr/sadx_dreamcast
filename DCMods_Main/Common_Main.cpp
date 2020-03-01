#include "stdafx.h"

//Level files
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

DataPointer(char, nullsub_ADV00, 0x4231E6);
DataPointer(char, nullsub_ADV01, 0x4232C9);
DataPointer(char, nullsub_ADV01C, 0x4233BB);
DataPointer(char, nullsub_ADV02, 0x4234AD);
DataPointer(char, nullsub_ADV03, 0x423554);
DataPointer(char, nullsub_STG00, 0x422B2A);
DataPointer(char, nullsub_STG01, 0x422B68);
DataPointer(char, nullsub_STG02, 0x422BD3);
DataPointer(char, nullsub_STG03, 0x422C3E);
DataPointer(char, nullsub_STG04, 0x422CA9);
DataPointer(char, nullsub_STG05, 0x422D14);
DataPointer(char, nullsub_STG06, 0x422D84);
DataPointer(char, nullsub_STG07, 0x422DEF);
DataPointer(char, nullsub_STG08, 0x422E5A);
DataPointer(char, nullsub_STG09, 0x422EE8);
DataPointer(char, nullsub_STG10, 0x422F71);
DataPointer(char, nullsub_STG12, 0x422FFF);
DataPointer(char, nullsub_B_CHAOS0, 0x423088);
DataPointer(char, nullsub_B_CHAOS2, 0x4230B7);
DataPointer(char, nullsub_B_CHAOS4, 0x4230CD);
DataPointer(char, nullsub_B_CHAOS6, 0x4230E3);
DataPointer(char, nullsub_B_CHAOS7, 0x423108);
DataPointer(char, nullsub_B_EGM1, 0x423146);
DataPointer(char, nullsub_B_EGM2, 0x42315F);
DataPointer(char, nullsub_B_EGM3, 0x423178);
DataPointer(char, nullsub_B_ROBO, 0x423196);
DataPointer(char, nullsub_B_E101, 0x4231AF);
DataPointer(char, nullsub_B_E101R, 0x4231CD);
DataPointer(char, nullsub_SHOOTING1, 0x4236B1);
DataPointer(char, nullsub_SHOOTING2, 0x4236E0);
DataPointer(char, nullsub_SBOARD, 0x42370F);
DataPointer(char, nullsub_MINICART, 0x4235EC);
DataPointer(char, nullsub_Chao, 0x423795);

set_shader_flags* set_shader_flags_ptr;
material_register* material_register_ptr;
material_unregister* material_unregister_ptr;
set_diffuse* set_diffuse_ptr;
set_specular* set_specular_ptr;
set_alpha_reject* set_alpha_reject_ptr;
set_blend_factor* set_blend_factor_ptr;
set_diffuse_blend* set_diffuse_blend_ptr;
set_specular_blend* set_specular_blend_ptr;

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
bool AssumeOIT = false;
int Use1999SetFiles = 0;

bool RemoveSetUpPad = false;
bool RemoveMap = false;
bool RemoveCamera = false;

bool EnableWindowTitle = true;
bool EnableDCBranding = true;
bool EnableEmeraldCoast = true;
bool IamStupidAndIWantFuckedUpOcean = false;
bool EnableWindyValley = true;
bool EnableTwinklePark = true;
bool EnableSpeedHighway = true;
bool EnableRedMountain = true;
bool EnableSkyDeck = true;
bool EnableLostWorld = true; 
bool EnableIceCap = true;
bool EnableCasinopolis = true;
bool CowgirlOn = true;
bool EnableFinalEgg = true;
bool EnableHotShelter = true;
bool EnableStationSquare = true;
bool EnableMysticRuins = true;
bool EnableEggCarrier = true;
bool EnablePast = true;
bool DisableAllVideoStuff = true;

bool EnableChaos0 = true;
bool EnableChaos2 = true;
bool EnableChaos4 = true;
bool EnableChaos6 = true;
bool EnablePerfectChaos = true;
bool EnableEggHornet = true;
bool EnableEggWalker = true;
bool EnableEggViper = true;
bool EnableE101 = true;
bool EnableZeroE101R = true;

bool EnableHedgehogHammer = true;
bool EnableTwinkleCircuit = true;
bool EnableSandHill = true;
bool EnableSkyChaseFixes = true;
bool EnableSkyChaseEnemyModels = true;

bool EnableSSGarden = true;
bool EnableMRGarden = true;
bool EnableECGarden = true;
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

void ReinitializeDLLStuff()
{
	int result;
	int (**v1)(void);
	for (int i = 3; i < 528; i++)
	{
		//PrintDebug("Init function: %d\n", i);
		v1 = (int (**)(void))&InitializationFunctions[i];
		if (v1 && i != 179) result = (*v1)();
	}
}

//The most important trampoline
static void LoadLevelFiles_r();
static Trampoline LoadLevelFiles_t(0x422AD0, 0x422AD8, LoadLevelFiles_r);
static void __cdecl LoadLevelFiles_r()
{
	auto original = reinterpret_cast<decltype(LoadLevelFiles_r)*>(LoadLevelFiles_t.Target());
	CheckAndUnloadLevelFiles();
	original();
}

extern "C"
{
	__declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
	{
		HelperFunctionsGlobal = helperFunctions;
		//Global mod path
		ModPath = std::string(path);
		//Set up function pointers for Lantern API
		HMODULE LanternDLL = GetModuleHandle(L"sadx-dc-lighting");
		set_shader_flags_ptr = (void(*)(uint32_t, bool))GetProcAddress(LanternDLL, "set_shader_flags");
		material_register_ptr = (void(*)(const NJS_MATERIAL *const *materials, size_t length, lantern_material_cb callback))GetProcAddress(LanternDLL, "material_register");
		material_unregister_ptr = (void(*)(const NJS_MATERIAL *const *materials, size_t length, lantern_material_cb callback))GetProcAddress(LanternDLL, "material_unregister");
		set_diffuse_ptr = (void(*)(int32_t, bool))GetProcAddress(LanternDLL, "set_diffuse");
		set_specular_ptr = (void(*)(int32_t, bool))GetProcAddress(LanternDLL, "set_specular");
		set_alpha_reject_ptr = (void(*)(float, bool))GetProcAddress(LanternDLL, "set_alpha_reject");
		set_blend_factor_ptr = (void(*)(float))GetProcAddress(LanternDLL, "set_blend_factor");
		set_diffuse_blend_ptr = (void(*)(int32_t, int32_t))GetProcAddress(LanternDLL, "set_diffuse_blend");
		set_specular_blend_ptr = (void(*)(int32_t, int32_t))GetProcAddress(LanternDLL, "set_specular_blend");
		//Check which DLLs are loaded
		DLLLoaded_DX11 = (GetModuleHandle(L"sadx-d3d11") != nullptr);
		DLLLoaded_HDGUI = (GetModuleHandle(L"HD_GUI") != nullptr);
		DLLLoaded_SA1Chars = (GetModuleHandle(L"SA1_Chars") != nullptr);
		DLLLoaded_Lantern = (GetModuleHandle(L"sadx-dc-lighting") != nullptr);
		DLLLoaded_DLCs = (GetModuleHandle(L"DLCs_Main") != nullptr);
		DLLLoaded_SADXFE = (GetModuleHandle(L"sadx-fixed-edition") != nullptr);
		//Error messages
		if (!DLLLoaded_Lantern) LanternErrorMessageTimer = 600;
		if (DLLLoaded_Lantern && set_alpha_reject_ptr == nullptr)
		{
			MessageBox(WindowHandle,
				L"Please update the Lantern Engine mod. Dreamcast Conversion requires Lantern Engine 1.4.4 or newer.",
				L"DC Conversion error: Lantern Engine out of date", MB_OK | MB_ICONERROR);
			return;
		}
		if (helperFunctions.Version < 7)
		{
			MessageBox(WindowHandle,
				L"Please update SADX Mod Loader. Dreamcast Conversion requires API version 7 or newer.",
				L"DC Conversion error: Mod Loader out of date", MB_OK | MB_ICONERROR);
			return;
		}
		//Check for old mod DLLs
		std::wstring OldModsMessage = L"Old/incompatible mods detected!\n\n"
			L"The following mods are outdated and will cause "
			L"problems if you leave them enabled. These mods are "
			L"no longer needed because they are built into the "
			L"main Dreamcast Conversion mod.\n\n"
			L"Please uninstall the following mods in the Mod Manager:\n\n";
		bool OldModsFound = false;
		for (int i = 0; i < LengthOfArray(OldModDLLs); i++)
		{
			if (GetModuleHandle(OldModDLLs[i]) != nullptr)
			{
				//Found a known incompatible mod
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
			return;
		}
		const std::string s_path(path);
		const std::string s_config_ini(s_path + "\\config.ini");
		//Config stuff
		const IniFile *const config = new IniFile(s_config_ini);
		//Read config stuff
		SuppressWarnings = config->getBool("General", "SuppressWarnings", false);
		FPSLock = config->getBool("General", "FPSLock", false);
		EnableDCRipple = config->getBool("General", "EnableDreamcastWaterRipple", true);
		EnableCutsceneFix = config->getBool("General", "EnableCutsceneFix", true);
		EnableImpressFont = config->getString("General", "EnableImpressFont", "Impress");
		CutsceneSkipMode = config->getInt("General", "CutsceneSkipMode", 0);
		ColorizeFont = config->getBool("General", "ColorizeFont", true);
		AssumeOIT = config->getBool("General", "AssumeOIT", false);
		DisableFontSmoothing = config->getBool("General", "DisableFontSmoothing", true);
		DisableFontFiltering = config->getBool("General", "DisableFontFiltering", true);
		EnableLSDFix = config->getBool("Miscellaneous", "EnableLSDFix", false);
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
		EnableEmeraldCoast = config->getBool("Levels", "EnableEmeraldCoast", true);
		EnableWindyValley = config->getBool("Levels", "EnableWindyValley", true);
		EnableTwinklePark = config->getBool("Levels", "EnableTwinklePark", true);
		EnableSpeedHighway = config->getBool("Levels", "EnableSpeedHighway", true);
		EnableRedMountain = config->getBool("Levels", "EnableRedMountain", true);
		EnableSkyDeck = config->getBool("Levels", "EnableSkyDeck", true);
		EnableLostWorld = config->getBool("Levels", "EnableLostWorld", true);
		EnableIceCap = config->getBool("Levels", "EnableIceCap", true);
		EnableCasinopolis = config->getBool("Levels", "EnableCasinopolis", true);
		EnableFinalEgg = config->getBool("Levels", "EnableFinalEgg", true);
		EnableHotShelter = config->getBool("Levels", "EnableHotShelter", true);
		EnableStationSquare = config->getBool("Levels", "EnableStationSquare", true);
		EnableMysticRuins = config->getBool("Levels", "EnableMysticRuins", true);
		EnableEggCarrier = config->getBool("Levels", "EnableEggCarrier", true);
		EnablePast = config->getBool("Levels", "EnablePast", true);
		DisableAllVideoStuff = config->getBool("Videos", "DisableAllVideoStuff", false);
		SADXWater_EmeraldCoast = config->getBool("SADX Style Water", "EmeraldCoast", false);
		SADXWater_StationSquare = config->getBool("SADX Style Water", "StationSquare", false);
		SADXWater_MysticRuins = config->getBool("SADX Style Water", "MysticRuins", false);
		SADXWater_EggCarrier = config->getBool("SADX Style Water", "EggCarrier", false);
		SADXWater_Past = config->getBool("SADX Style Water", "Past", false);
		EnableChaos0 = config->getBool("Bosses", "EnableChaos0", true);
		EnableChaos2 = config->getBool("Bosses", "EnableChaos2", true);
		EnableChaos4 = config->getBool("Bosses", "EnableChaos4", true);
		EnableChaos6 = config->getBool("Bosses", "EnableChaos6", true);
		EnablePerfectChaos = config->getBool("Bosses", "EnablePerfectChaos", true);
		EnableEggHornet = config->getBool("Bosses", "EnableEggHornet", true);
		EnableEggWalker = config->getBool("Bosses", "EnableEggWalker", true);
		EnableEggViper = config->getBool("Bosses", "EnableEggViper", true);
		EnableE101 = config->getBool("Bosses", "EnableE101", true);
		EnableZeroE101R = config->getBool("Bosses", "EnableZeroE101R", true);
		EnableHedgehogHammer = config->getBool("Miscellaneous", "EnableHedgehogHammer", true);
		EnableTwinkleCircuit = config->getBool("Miscellaneous", "EnableTwinkleCircuit", true);
		EnableSandHill = config->getBool("Miscellaneous", "EnableSandHill", true);
		CowgirlOn = config->getBool("Miscellaneous", "EnableCasinopolisCowgirl", true);
		Use1999SetFiles = config->getInt("Miscellaneous", "Use1999SetFiles", 0);
		IamStupidAndIWantFuckedUpOcean = config->getBool("Miscellaneous", "RevertEmeraldCoastDrawDistance", false);
		EnableSkyChaseEnemyModels = config->getBool("Miscellaneous", "EnableSkyChaseEnemyModels", true);
		EnableWhiteDiffuse = config->getBool("Miscellaneous", "EnableWhiteDiffuse", true);
		EnableSSGarden = config->getBool("Chao Gardens", "EnableStationSquareGarden", true);
		EnableMRGarden = config->getBool("Chao Gardens", "EnableMysticRuinsGarden", true);
		EnableECGarden = config->getBool("Chao Gardens", "EnableEggCarrierGarden", true);
		ReplaceFruits = config->getInt("Chao Gardens", "ReplaceFruits", 0);
		ReplaceEggs = config->getBool("Chao Gardens", "ReplaceEggs", true);
		EnableLobby = config->getBool("Chao Gardens", "EnableChaoRaceLobby", true);
		DisableChaoButtonPrompts = config->getBool("Chao Gardens", "DisableChaoButtonPrompts", false);
		//Autodemo mods check
		if (GetModuleHandle(L"AutoDemo_TestLevels") != nullptr) EnableHedgehogHammer = false;
		if (GetModuleHandle(L"AutoDemo_WindyValley") != nullptr) EnableWindyValley = false;
		if (GetModuleHandle(L"AutoDemo_SpeedHighway") != nullptr) EnableSpeedHighway = false;
		if (GetModuleHandle(L"AutoDemo_RedMountain") != nullptr) EnableRedMountain = false;
		//Set window title
		if (EnableWindowTitle) helperFunctions.SetWindowTitle("Sonic Adventure");
		//Don't disable subtitle font filtering if HD GUI is detected
		if (DLLLoaded_HDGUI) DisableFontFiltering = false;
		//Another error message
		if (EnableEmeraldCoast && GetModuleHandle(L"WaterEffect") != nullptr)
		{
			EnableEmeraldCoast = false;
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
		//Disable font smoothing
		if (DisableFontSmoothing)
		{
			//Probably better than making the whole texture ARGB1555
			WriteData<1>((char*)0x40DA0B, 0x00);
			WriteData<1>((char*)0x40DA0C, 0x00);
			WriteData<1>((char*)0x40DA12, 0x00);
		}
		//Enable Impress font
		if (EnableImpressFont == "Impress")
		{
			ReplaceGeneric("FONTDATA1.BIN", "FONTDATA1_I.BIN");
		}
		//Enable Comic Sans font (experimental)
		else if (EnableImpressFont == "ComicSans")
		{
			ReplaceGeneric("FONTDATA1.BIN", "FONTDATA1_C.BIN");
		}
		if (ColorizeFont)
		{
			//Subtitles (ARGB from 0 to F: CEEF)
			WriteData<1>((char*)0x40E28D, 0xEF);
			WriteData<1>((char*)0x40E28E, 0xCE);
			//Pause menu text (ARGB from 00 to FF: BFEFEFFF)
			WriteData<1>((char*)0x40E541, 0xFF);
			WriteData<1>((char*)0x40E542, 0xEF);
			WriteData<1>((char*)0x40E543, 0xEF);
			WriteData<1>((char*)0x40E544, 0xBF);
			//Recap screen (just FF F8 F8 F8)
			WriteCall((void*)0x6428AD, ColorizeRecapText);
		}
		//Init functions
		Init_Global(); //General stuff that runs at mod startup, some level-specific stuff there too
		if (AssumeOIT) OIT_Init();
		SADXStyleWater_Init(config, helperFunctions);
		if (EnableDCBranding) Branding_Init(config, helperFunctions);
		if (EnableStationSquare && nullsub_ADV00 != 0x90u)
		{
			WriteCall((void*)0x4231E6, ADV00_Init);
		}
		if (EnableEggCarrier)
		{
			if (nullsub_ADV01 != 0x90u) WriteCall((void*)0x4232C9, ADV01_Init);
			if (nullsub_ADV01C != 0x90u) WriteCall((void*)0x4233BB, ADV01C_Init);
		}
		if (EnableMysticRuins && nullsub_ADV02 != 0x90u)
		{
			WriteCall((void*)0x4234AD, ADV02_Init);
		}
		if (EnablePast && nullsub_ADV03 != 0x90u)
		{
			WriteCall((void*)0x423554, ADV03_Init);
		}
		if (EnableEmeraldCoast && nullsub_STG01 != 0x90u)
		{
			WriteCall((void*)0x422B68, EmeraldCoast_Init);
		}
		if (EnableWindyValley && nullsub_STG02 != 0x90u)
		{
			WriteCall((void*)0x422BD3, WindyValley_Init);
		}
		if (EnableTwinklePark && nullsub_STG03 != 0x90u)
		{
			WriteCall((void*)0x422C3E, TwinklePark_Init);
		}
		if (EnableSpeedHighway && nullsub_STG04 != 0x90u)
		{
			WriteCall((void*)0x422CA9, SpeedHighway_Init);
		}
		if (EnableRedMountain && nullsub_STG05 != 0x90u)
		{
			WriteCall((void*)0x422D14, RedMountain_Init);
		}
		if (EnableSkyDeck && nullsub_STG06 != 0x90u)
		{
			WriteCall((void*)0x422D84, SkyDeck_Init);
		}
		if (EnableLostWorld && nullsub_STG07 != 0x90u)
		{
			WriteCall((void*)0x422DEF, LostWorld_Init);
		}
		if (EnableIceCap && nullsub_STG08 != 0x90u)
		{
			WriteCall((void*)0x422E5A, IceCap_Init);
		}
		if (EnableCasinopolis && nullsub_STG09 != 0x90u)
		{
			WriteCall((void*)0x422EE8, Casinopolis_Init);
		}
		if (EnableFinalEgg && nullsub_STG10 != 0x90u)
		{
			WriteCall((void*)0x422F71, FinalEgg_Init);
		}
		if (EnableHotShelter && nullsub_STG12 != 0x90u)
		{
			WriteCall((void*)0x422FFF, HotShelter_Init);
		}
		if (EnableChaos0 && nullsub_B_CHAOS0 != 0x90u)
		{
			WriteCall((void*)0x423088, Chaos0_Init);
		}
		if (EnableChaos2 && nullsub_B_CHAOS2 != 0x90u)
		{
			WriteCall((void*)0x4230B7, Chaos2_Init);
		}
		if (EnableChaos4 && nullsub_B_CHAOS4 != 0x90u)
		{
			WriteCall((void*)0x4230CD, Chaos4_Init);
		}
		if (EnableChaos6 && nullsub_B_CHAOS6 != 0x90u)
		{
			WriteCall((void*)0x4230E3, Chaos6_Init);
		}
		if (EnablePerfectChaos && nullsub_B_CHAOS7 != 0x90u)
		{
			WriteCall((void*)0x423108, PerfectChaos_Init);
		}
		if (EnableEggHornet && nullsub_B_EGM1 != 0x90u)
		{
			WriteCall((void*)0x423146, EggHornet_Init);
		}
		if (EnableEggWalker && nullsub_B_EGM2 != 0x90u)
		{
			WriteCall((void*)0x42315F, EggWalker_Init);
		}
		if (EnableEggViper && nullsub_B_EGM3 != 0x90u)
		{
			WriteCall((void*)0x423178, EggViper_Init);
		}
		if (EnableE101 && nullsub_B_E101 != 0x90u)
		{
			WriteCall((void*)0x4231AF, E101_Init);
		}
		if (EnableZeroE101R)
		{
			if (nullsub_B_ROBO != 0x90u) WriteCall((void*)0x423196, Zero_Init);
			if (nullsub_B_E101R != 0x90u) WriteCall((void*)0x4231CD, E101R_Init);
		}
		SkyChaseFix_Init();
		if (nullsub_SHOOTING1 != 0x90u) WriteCall((void*)0x4236B1, SkyChase_Init);
		if (nullsub_SHOOTING2 != 0x90u) WriteCall((void*)0x4236E0, SkyChase_Init);
		if (EnableHedgehogHammer && nullsub_STG00 != 0x90u)
		{
			WriteCall((void*)0x422B2A, HedgehogHammer_Init);
		}
		if (EnableTwinkleCircuit && nullsub_MINICART != 0x90u)
		{
			WriteCall((void*)0x4235EC, TwinkleCircuit_Init);
		}
		if (EnableSandHill && nullsub_SBOARD != 0x90u)
		{
			WriteCall((void*)0x42370F, SandHill_Init);
		}
		if (nullsub_Chao != 0x90u) WriteCall((void*)0x423795, ChaoGardens_Init);
		if (!DisableAllVideoStuff) Videos_Init(config, helperFunctions);
		if (EnableSpeedFixes) SpeedFixes_Init();
		delete config;
	}
		
	__declspec(dllexport) void __cdecl OnFrame()
	{
		//Display error messages
		if (!SuppressWarnings && LanternErrorMessageTimer && (IsIngame() || GameMode == GameModes_Menu))
		{
			
			SetDebugFontSize(10.0f * (float)VerticalResolution / 480.0f);
			DisplayDebugString(NJM_LOCATION(2, 1), "Failed to detect the Lantern Engine mod.");
			DisplayDebugString(NJM_LOCATION(2, 2), "Dreamcast levels will have no lighting,");
			DisplayDebugString(NJM_LOCATION(2, 3), "and alpha rejection fixes will not be applied.");
			DisplayDebugString(NJM_LOCATION(2, 4), "Please install and enable Lantern Engine for correct visuals.");
			LanternErrorMessageTimer--;
		}
		if (!SuppressWarnings && PauseHideErrorMessageTimer && (IsIngame() || GameMode == GameModes_Menu))
		{
			SetDebugFontSize(10.0f * (float)VerticalResolution / 480.0f);
			DisplayDebugString(NJM_LOCATION(2, 6), "The Pause Hide mod interferes with");
			DisplayDebugString(NJM_LOCATION(2, 7), "some options in Dreamcast Conversion.");
			DisplayDebugString(NJM_LOCATION(2, 8), "Dreamcast Conversion already includes");
			DisplayDebugString(NJM_LOCATION(2, 9), "the functionality of the Pause Hide mod.");
			DisplayDebugString(NJM_LOCATION(2, 10), "Please disable or remove it.");
			PauseHideErrorMessageTimer--;
		}
		//Animate materials and UVs
		if (!IsGamePaused() && Camera_Data1)
		{
			for (int i = 0; i < 128; ++i)
			{
				if (CurrentChaoStage != 0xFFFFFFFF)
				{
					if (TextureAnimationData[i].level == LevelIDs_ECGarden && CurrentChaoStage == SADXChaoStage_EggCarrier) AnimateTexture(&TextureAnimationData[i]);
					if (TextureAnimationData[i].level == LevelIDs_SSGarden && CurrentChaoStage == SADXChaoStage_StationSquare) AnimateTexture(&TextureAnimationData[i]);
					if (TextureAnimationData[i].level == LevelIDs_MRGarden && CurrentChaoStage == SADXChaoStage_MysticRuins) AnimateTexture(&TextureAnimationData[i]);
					if (TextureAnimationData[i].level == LevelIDs_ChaoRace && CurrentChaoStage == SADXChaoStage_Race) AnimateTexture(&TextureAnimationData[i]);
					if (UVAnimationData[i].level == LevelIDs_MRGarden && CurrentChaoStage == SADXChaoStage_MysticRuins) AnimateUVs(&UVAnimationData[i]);
					if (UVAnimationData_Permanent[i].level == LevelIDs_ChaoRace && CurrentChaoStage == SADXChaoStage_Race) AnimateUVs(&UVAnimationData_Permanent[i]);
				}
				else
				{
					if (UVAnimationData_Permanent[i].level == CurrentLevel && (UVAnimationData_Permanent[i].act == CurrentAct || UVAnimationData_Permanent[i].act == -1)) AnimateUVs(&UVAnimationData_Permanent[i]);
					if (UVAnimationData[i].level == CurrentLevel && UVAnimationData[i].act == CurrentAct) AnimateUVs(&UVAnimationData[i]);
					if (TextureAnimationData[i].level == CurrentLevel && TextureAnimationData[i].act == CurrentAct) AnimateTexture(&TextureAnimationData[i]);
					if (TextureAnimationData_Permanent[i].level == CurrentLevel && TextureAnimationData_Permanent[i].act == CurrentAct) AnimateTexture(&TextureAnimationData_Permanent[i]);
				}
			}
		}
		if (EnableDCBranding) Branding_OnFrame();
		if (EnableStationSquare && nullsub_ADV00 != 0x90u) ADV00_OnFrame();
		if (EnableEggCarrier)
		{
			if (nullsub_ADV01 != 0x90u) ADV01_OnFrame();
			if (nullsub_ADV01C != 0x90u) ADV01C_OnFrame();
		}
		if (EnableMysticRuins && nullsub_ADV02 != 0x90u) ADV02_OnFrame();
		if (EnablePast && nullsub_ADV03 != 0x90u) ADV03_OnFrame();
		if (EnableEggHornet && nullsub_B_EGM1 != 0x90u) EggHornet_OnFrame();
		if (EnableEggViper && nullsub_B_EGM3 != 0x90u) EggViper_OnFrame();
		if (EnableZeroE101R)
		{
			if (nullsub_B_ROBO != 0x90u) Zero_OnFrame();
			if (nullsub_B_E101R != 0x90u) E101R_OnFrame();
		}
		if (EnablePerfectChaos && nullsub_B_CHAOS7 != 0x90u) PerfectChaos_OnFrame();
		if (EnableEmeraldCoast && nullsub_STG01 != 0x90u) EmeraldCoast_OnFrame();
		if (EnableWindyValley && nullsub_STG02 != 0x90u) WindyValley_OnFrame();
		//if (EnableTwinklePark && nullsub_STG03 != 0x90u) TwinklePark_OnFrame();
		//if (EnableTwinklePark || EnableTwinkleCircuit) ShareObj_OnFrame();
		if (EnableSpeedHighway && nullsub_STG04 != 0x90u) SpeedHighway_OnFrame();
		if (EnableRedMountain && nullsub_STG05 != 0x90u) RedMountain_OnFrame();
		if (EnableSkyDeck && nullsub_STG06 != 0x90u) SkyDeck_OnFrame();
		if (EnableLostWorld && nullsub_STG07 != 0x90u) LostWorld_OnFrame();
		if (EnableIceCap && nullsub_STG08 != 0x90u) IceCap_OnFrame();
		if (EnableCasinopolis && nullsub_STG09 != 0x90u) Casinopolis_OnFrame();
		if (EnableFinalEgg && nullsub_STG10 != 0x90u) FinalEgg_OnFrame();
		if (EnableHotShelter && nullsub_STG12 != 0x90u) HotShelter_OnFrame();
		//Subgames_OnFrame();
		if (nullsub_Chao != 0x90u) ChaoGardens_OnFrame();
		ChaoRace_OnFrame();
		General_OnFrame();
		if (!DisableAllVideoStuff) Videos_OnFrame();
		if (EnableSpeedFixes) SpeedFixes_OnFrame();
		if (!IsGamePaused()) SADXStyleWater_OnFrame();
	}

	__declspec(dllexport) void __cdecl OnInput()
	{
		if (!DisableAllVideoStuff) Videos_OnInput();
		if (CutsceneSkipMode != 3) General_OnInput();
	}

	__declspec(dllexport) void __cdecl OnRenderDeviceReset()
	{
		SkyChaseFix_UpdateBounds();
		Branding_SetUpVariables();
	}

	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}