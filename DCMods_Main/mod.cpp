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
std::string EnableImpressFont = "Off";
bool ColorizeFont = true;
bool DisableFontSmoothing = true;
bool EnableLSDFix = false;
bool FPSLock = false;
bool EnableDCRipple = true;

bool Use1999SetFiles = false;
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
	int (**v1)(void);
	for (int i = 3; i < 528; i++)
	{
		v1 = (int (**)(void))&InitializationFunctions[i];
		if (v1) (*v1)();
	}
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
		if (helperFunctions.Version < 7)
		{
			MessageBox(WindowHandle,
				L"Please update SADX Mod Loader. Dreamcast Conversion requires API version 7 or newer.",
				L"DC Conversion error: Mod loader out of date", MB_OK | MB_ICONERROR);
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
		FPSLock = config->getBool("General", "FPSLock", false);
		EnableDCRipple = config->getBool("General", "EnableDreamcastWaterRipple", true);
		EnableCutsceneFix = config->getBool("General", "EnableCutsceneFix", true);
		EnableImpressFont = config->getString("General", "EnableImpressFont", "Impress");
		CutsceneSkipMode = config->getInt("General", "CutsceneSkipMode", 0);
		ColorizeFont = config->getBool("General", "ColorizeFont", true);
		DisableFontSmoothing = config->getBool("General", "DisableFontSmoothing", true);
		EnableLSDFix = config->getBool("Miscellaneous", "EnableLSDFix", false);
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
		EnableTwinkleCircuit = config->getBool("Miscellaneous", "EnableTwinkleCircuit", true);
		EnableSandHill = config->getBool("Miscellaneous", "EnableSandHill", true);
		CowgirlOn = config->getBool("Miscellaneous", "EnableCasinopolisCowgirl", true);
		Use1999SetFiles = config->getBool("Miscellaneous", "Use1999SetFiles", false);
		IamStupidAndIWantFuckedUpOcean = config->getBool("Miscellaneous", "RevertEmeraldCoastDrawDistance", false);
		EnableSkyChaseEnemyModels = config->getBool("Miscellaneous", "EnableSkyChaseEnemyModels", true);
		EnableSSGarden = config->getBool("Chao Gardens", "EnableStationSquareGarden", true);
		EnableMRGarden = config->getBool("Chao Gardens", "EnableMysticRuinsGarden", true);
		EnableECGarden = config->getBool("Chao Gardens", "EnableEggCarrierGarden", true);
		ReplaceFruits = config->getInt("Chao Gardens", "ReplaceFruits", 0);
		ReplaceEggs = config->getBool("Chao Gardens", "ReplaceEggs", true);
		EnableLobby = config->getBool("Chao Gardens", "EnableChaoRaceLobby", true);
		//Autodemo mods check
		if (GetModuleHandle(L"AutoDemo_WindyValley") != nullptr) EnableWindyValley = false;
		if (GetModuleHandle(L"AutoDemo_SpeedHighway") != nullptr) EnableSpeedHighway = false;
		if (GetModuleHandle(L"AutoDemo_RedMountain") != nullptr) EnableRedMountain = false;
		//Set window title
		if (EnableWindowTitle) helperFunctions.SetWindowTitle("Sonic Adventure");
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
		//Init functions
		SADXStyleWater_Init(config, helperFunctions);
		if (EnableDCBranding) Branding_Init(config, helperFunctions);
		WriteCall((void*)0x422B2A, HedgehogHammer_Init);
		if (EnableStationSquare)
		{
			WriteCall((void*)0x4231E6, ADV00_Init);
		}
		if (EnableEggCarrier)
		{
			WriteCall((void*)0x4232C9, ADV01_Init);
			WriteCall((void*)0x4233BB, ADV01C_Init);
		}
		if (EnableMysticRuins)
		{
			WriteCall((void*)0x4234AD, ADV02_Init);
		}
		if (EnablePast)
		{
			WriteCall((void*)0x423554, ADV03_Init);
		}
		Bosses_Init(); //General boss stuff
		if (EnableEmeraldCoast)
		{
			WriteCall((void*)0x422B68, EmeraldCoast_Init);
		}
		if (EnableWindyValley)
		{
			WriteCall((void*)0x422BD3, WindyValley_Init);
		}
		if (EnableTwinklePark)
		{
			WriteCall((void*)0x422C3E, TwinklePark_Init);
		}
		if (EnableSpeedHighway)
		{
			WriteCall((void*)0x422CA9, SpeedHighway_Init);
		}
		if (EnableRedMountain)
		{
			WriteCall((void*)0x422D14, RedMountain_Init);
		}
		if (EnableSkyDeck)
		{
			WriteCall((void*)0x422D84, SkyDeck_Init);
		}
		if (EnableLostWorld)
		{
			WriteCall((void*)0x422DEF, LostWorld_Init);
		}
		if (EnableIceCap)
		{
			WriteCall((void*)0x422E5A, IceCap_Init);
		}
		if (EnableCasinopolis)
		{
			WriteCall((void*)0x422EE8, Casinopolis_Init);
		}
		if (EnableFinalEgg)
		{
			WriteCall((void*)0x422F71, FinalEgg_Init);
		}
		if (EnableHotShelter)
		{
			WriteCall((void*)0x422FFF, HotShelter_Init);
		}
		if (EnableChaos0)
		{
			WriteCall((void*)0x423088, Chaos0_Init);
		}
		if (EnableChaos2)
		{
			WriteCall((void*)0x4230B7, Chaos2_Init);
		}
		if (EnableChaos4)
		{
			WriteCall((void*)0x4230CD, Chaos4_Init);
		}
		if (EnableChaos6)
		{
			WriteCall((void*)0x4230E3, Chaos6_Init);
		}
		if (EnablePerfectChaos)
		{
			WriteCall((void*)0x423108, PerfectChaos_Init);
		}
		if (EnableEggHornet)
		{
			WriteCall((void*)0x423146, EggHornet_Init);
		}
		if (EnableEggWalker)
		{
			WriteCall((void*)0x42315F, EggWalker_Init);
		}
		if (EnableEggViper)
		{
			WriteCall((void*)0x423178, EggViper_Init);
		}
		if (EnableE101)
		{
			WriteCall((void*)0x4231AF, E101_Init);
		}
		if (EnableZeroE101R)
		{
			WriteCall((void*)0x423196, Zero_Init);
			WriteCall((void*)0x4231CD, E101R_Init);
		}
		SkyChaseFix_Init();
		WriteCall((void*)0x4236B1, SkyChase_Init);
		WriteCall((void*)0x4236E0, SkyChase_Init);
		if (EnableTwinkleCircuit)
		{
			WriteCall((void*)0x4235EC, TwinkleCircuit_Init);
		}
		if (EnableSandHill)
		{
			WriteCall((void*)0x42370F, SandHill_Init);
		}
		WriteCall((void*)0x423795, ChaoGardens_Init);
		if (!DisableAllVideoStuff) Videos_Init(config, helperFunctions);
		if (EnableSpeedFixes) SpeedFixes_Init();
		delete config;
	}
		
	__declspec(dllexport) void __cdecl OnFrame()
	{
		//Animate materials and UVs
		if (!IsGamePaused())
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
				}
				else
				{
					if (UVAnimationData_Permanent[i].level == CurrentLevel && UVAnimationData_Permanent[i].act == CurrentAct) AnimateUVs(&UVAnimationData_Permanent[i]);
					if (UVAnimationData[i].level == CurrentLevel && UVAnimationData[i].act == CurrentAct) AnimateUVs(&UVAnimationData[i]);
					if (TextureAnimationData[i].level == CurrentLevel && TextureAnimationData[i].act == CurrentAct) AnimateTexture(&TextureAnimationData[i]);
					if (TextureAnimationData_Permanent[i].level == CurrentLevel && TextureAnimationData_Permanent[i].act == CurrentAct) AnimateTexture(&TextureAnimationData_Permanent[i]);
				}
			}
		}
		if (EnableDCBranding) Branding_OnFrame();
		if (EnableStationSquare) ADV00_OnFrame();
		if (EnableEggCarrier)
		{
			ADV01_OnFrame();
			ADV01C_OnFrame();
		}
		if (EnableMysticRuins) ADV02_OnFrame();
		if (EnablePast) ADV03_OnFrame();
		if (EnableEggHornet) EggHornet_OnFrame();
		if (EnableEggViper) EggViper_OnFrame();
		if (EnableZeroE101R)
		{
			Zero_OnFrame();
			E101R_OnFrame();
		}
		if (EnablePerfectChaos) PerfectChaos_OnFrame();
		if (EnableEmeraldCoast) EmeraldCoast_OnFrame();
		if (EnableWindyValley) WindyValley_OnFrame();
		if (EnableTwinklePark) TwinklePark_OnFrame();
		if (EnableSpeedHighway) SpeedHighway_OnFrame();
		if (EnableRedMountain) RedMountain_OnFrame();
		if (EnableSkyDeck) SkyDeck_OnFrame();
		if (EnableLostWorld) LostWorld_OnFrame();
		if (EnableIceCap) IceCap_OnFrame();
		if (EnableCasinopolis) Casinopolis_OnFrame();
		if (EnableFinalEgg) FinalEgg_OnFrame();
		if (EnableHotShelter) HotShelter_OnFrame();
		//Subgames_OnFrame();
		ChaoGardens_OnFrame();
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