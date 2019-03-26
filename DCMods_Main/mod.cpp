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
LandTableInfo *MINICART_Info = nullptr;
LandTableInfo *SBOARD_Info = nullptr;
LandTableInfo *AL_GARDEN00_Info = nullptr;
LandTableInfo *AL_GARDEN01_Info = nullptr;
LandTableInfo *AL_GARDEN02_Info = nullptr;
LandTableInfo *AL_RACE_0_Info = nullptr;
LandTableInfo *AL_RACE_1_Info = nullptr;

HMODULE LanternDLL;
set_shader_flags* set_shader_flags_ptr;
material_register* material_register_ptr;
material_unregister* material_unregister_ptr;
set_diffuse* set_diffuse_ptr;
set_specular* set_specular_ptr;
set_alpha_reject* set_alpha_reject_ptr;
set_blend_factor* set_blend_factor_ptr;
set_diffuse_blend* set_diffuse_blend_ptr;
set_specular_blend* set_specular_blend_ptr;

LandTable **___LANDTABLEBOSSCHAOS0 = nullptr;
NJS_ACTION **___BOSSCHAOS0_ACTIONS = nullptr;
NJS_OBJECT **___BOSSCHAOS0_OBJECTS = nullptr;
NJS_TEXLIST **___BOSSCHAOS0_TEXLISTS = nullptr;
NJS_TEXLIST **___ADV00_TEXLISTS = nullptr;
LandTable **___LANDTABLESS = nullptr;
NJS_OBJECT **___MILES_OBJECTS = nullptr;
NJS_TEXLIST **___ADV01_TEXLISTS = nullptr;
NJS_MODEL_SADX **___ADV01_MODELS = nullptr;
NJS_TEXLIST **___ADV01C_TEXLISTS = nullptr;
LandTable **___LANDTABLEEC = nullptr;
LandTable **___LANDTABLEECC = nullptr;
NJS_OBJECT **___ADV01C_OBJECTS = nullptr;
NJS_ACTION **___ADV01C_ACTIONS = nullptr;
NJS_ACTION **___ADV01_ACTIONS = nullptr;
NJS_OBJECT **___ADV01_OBJECTS = nullptr;
NJS_OBJECT **___ADV01EC00_OBJECTS = nullptr;
NJS_MODEL_SADX **___ADV01C_MODELS = nullptr;
NJS_TEXLIST **___ADV02_TEXLISTS = nullptr;
NJS_MODEL_SADX **___ADV02_MODELS = nullptr;
NJS_OBJECT **___ADV02_OBJECTS = nullptr;
NJS_OBJECT **___ADV02MR02_OBJECTS = nullptr;
NJS_ACTION **___ADV02_ACTIONS = nullptr;
LandTable **___LANDTABLEMR = nullptr;
NJS_TEXLIST **___ADV03_TEXLISTS = nullptr;
LandTable **___LANDTABLEPAST = nullptr;
NJS_OBJECT **___ADV03PAST01_OBJECTS = nullptr;
NJS_OBJECT **___ADV03PAST02_OBJECTS = nullptr;
NJS_OBJECT **___ADV03_OBJECTS = nullptr;

HelperFunctions HelperFunctionsGlobal;
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

bool SADXWater_EmeraldCoast = false;
bool SADXWater_StationSquare = false;
bool SADXWater_MysticRuins = false;
bool SADXWater_EggCarrier = false;
bool SADXWater_Past = false;

SETFixes_e EnableSETFixes = SETFixes_Normal;

bool DLLLoaded_SA1Chars = false;
bool DLLLoaded_Lantern = false;
bool DLLLoaded_HDGUI = false;
bool DLLLoaded_DLCs = false;
bool DLLLoaded_SADXFE = false;
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

void AnimateTextures(NJS_MATERIAL *material, int startframe, int endframe, int speed)
{
	int texid = material->attr_texId;
	if (FrameCounter % (speed / FramerateSetting) == 0)	texid++;
	if (texid > endframe) texid = startframe;
	material->attr_texId = texid;
}

extern "C"
{
	__declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
	{
		//Get handles for all DLLs
		___LANDTABLEBOSSCHAOS0 = (LandTable **)GetProcAddress(GetModuleHandle(L"BOSSCHAOS0MODELS"), "___LANDTABLEBOSSCHAOS0");
		___BOSSCHAOS0_ACTIONS = (NJS_ACTION **)GetProcAddress(GetModuleHandle(L"BOSSCHAOS0MODELS"), "___BOSSCHAOS0_ACTIONS");
		___BOSSCHAOS0_OBJECTS = (NJS_OBJECT **)GetProcAddress(GetModuleHandle(L"BOSSCHAOS0MODELS"), "___BOSSCHAOS0_OBJECTS");
		___BOSSCHAOS0_TEXLISTS = (NJS_TEXLIST **)GetProcAddress(GetModuleHandle(L"BOSSCHAOS0MODELS"), "___BOSSCHAOS0_TEXLISTS");
		___ADV00_TEXLISTS = (NJS_TEXLIST **)GetProcAddress(GetModuleHandle(L"ADV00MODELS"), "___ADV00_TEXLISTS");
		___LANDTABLESS = (LandTable **)GetProcAddress(GetModuleHandle(L"ADV00MODELS"), "___LANDTABLESS");
		___MILES_OBJECTS = (NJS_OBJECT **)GetProcAddress(GetModuleHandle(L"CHRMODELS_orig"), "___MILES_OBJECTS");
		___ADV01_TEXLISTS = (NJS_TEXLIST **)GetProcAddress(GetModuleHandle(L"ADV01MODELS"), "___ADV01_TEXLISTS");
		___ADV01_MODELS = (NJS_MODEL_SADX **)GetProcAddress(GetModuleHandle(L"ADV01MODELS"), "___ADV01_MODELS");
		___ADV01C_TEXLISTS = (NJS_TEXLIST **)GetProcAddress(GetModuleHandle(L"ADV01CMODELS"), "___ADV01C_TEXLISTS");
		___LANDTABLEEC = (LandTable **)GetProcAddress(GetModuleHandle(L"ADV01MODELS"), "___LANDTABLEEC");
		___LANDTABLEECC = (LandTable **)GetProcAddress(GetModuleHandle(L"ADV01CMODELS"), "___LANDTABLEEC");
		___ADV01C_OBJECTS = (NJS_OBJECT **)GetProcAddress(GetModuleHandle(L"ADV01CMODELS"), "___ADV01C_OBJECTS");
		___ADV01C_ACTIONS = (NJS_ACTION **)GetProcAddress(GetModuleHandle(L"ADV01CMODELS"), "___ADV01C_ACTIONS");
		___ADV01_ACTIONS = (NJS_ACTION **)GetProcAddress(GetModuleHandle(L"ADV01MODELS"), "___ADV01_ACTIONS");
		___ADV01_OBJECTS = (NJS_OBJECT **)GetProcAddress(GetModuleHandle(L"ADV01MODELS"), "___ADV01_OBJECTS");
		___ADV01EC00_OBJECTS = (NJS_OBJECT **)GetProcAddress(GetModuleHandle(L"ADV01MODELS"), "___ADV01EC00_OBJECTS");
		___ADV01C_MODELS = (NJS_MODEL_SADX **)GetProcAddress(GetModuleHandle(L"ADV01CMODELS"), "___ADV01C_MODELS");
		___ADV02_TEXLISTS = (NJS_TEXLIST **)GetProcAddress(GetModuleHandle(L"ADV02MODELS"), "___ADV02_TEXLISTS");
		___ADV02_MODELS = (NJS_MODEL_SADX **)GetProcAddress(GetModuleHandle(L"ADV02MODELS"), "___ADV02_MODELS");
		___ADV02_OBJECTS = (NJS_OBJECT **)GetProcAddress(GetModuleHandle(L"ADV02MODELS"), "___ADV02_OBJECTS");
		___ADV02MR02_OBJECTS = (NJS_OBJECT **)GetProcAddress(GetModuleHandle(L"ADV02MODELS"), "___ADV02MR02_OBJECTS");
		___ADV02_ACTIONS = (NJS_ACTION **)GetProcAddress(GetModuleHandle(L"ADV02MODELS"), "___ADV02_ACTIONS");
		___LANDTABLEMR = (LandTable **)GetProcAddress(GetModuleHandle(L"ADV02MODELS"), "___LANDTABLEMR");
		___ADV03_TEXLISTS = (NJS_TEXLIST **)GetProcAddress(GetModuleHandle(L"ADV03MODELS"), "___ADV03_TEXLISTS");
		___LANDTABLEPAST = (LandTable **)GetProcAddress(GetModuleHandle(L"ADV03MODELS"), "___LANDTABLEPAST");
		___ADV03PAST01_OBJECTS = (NJS_OBJECT **)GetProcAddress(GetModuleHandle(L"ADV03MODELS"), "___ADV03PAST01_OBJECTS");
		___ADV03PAST02_OBJECTS = (NJS_OBJECT **)GetProcAddress(GetModuleHandle(L"ADV03MODELS"), "___ADV03PAST02_OBJECTS");
		___ADV03_OBJECTS = (NJS_OBJECT **)GetProcAddress(GetModuleHandle(L"ADV03MODELS"), "___ADV03_OBJECTS");
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
		DLLLoaded_HDGUI = (GetModuleHandle(L"HD_GUI") != nullptr);
		DLLLoaded_SA1Chars = (GetModuleHandle(L"SA1_Chars") != nullptr);
		DLLLoaded_Lantern = (GetModuleHandle(L"sadx-dc-lighting") != nullptr);
		DLLLoaded_DLCs = (GetModuleHandle(L"DLCs_Main") != nullptr);
		DLLLoaded_SADXFE = (GetModuleHandle(L"sadx-fixed-edition") != nullptr);
		HMODULE WaterEffect = GetModuleHandle(L"WaterEffect");
		HMODULE Autodemo_WindyValley = GetModuleHandle(L"AutoDemo_WindyValley");
		HMODULE Autodemo_SpeedHighway = GetModuleHandle(L"AutoDemo_SpeedHighway");
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
		for (unsigned int i = 0; i < LengthOfArray(OldModDLLs); i++)
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
		//Read config stuff for levels and branding
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
		IamStupidAndIWantFuckedUpOcean = config->getBool("Miscellaneous", "RevertEmeraldCoastDrawDistance", false);
		EnableSkyChaseEnemyModels = config->getBool("Miscellaneous", "EnableSkyChaseEnemyModels", true);
		EnableSSGarden = config->getBool("Chao Gardens", "EnableStationSquareGarden", true);
		EnableMRGarden = config->getBool("Chao Gardens", "EnableMysticRuinsGarden", true);
		EnableECGarden = config->getBool("Chao Gardens", "EnableEggCarrierGarden", true);
		ReplaceFruits = config->getInt("Chao Gardens", "ReplaceFruits", 0);
		ReplaceEggs = config->getBool("Chao Gardens", "ReplaceEggs", true);
		//Autodemo mods check
		if (Autodemo_WindyValley != nullptr) EnableWindyValley = false;
		if (Autodemo_SpeedHighway != nullptr) EnableSpeedHighway = false;
		const std::string EnableSETFixes_String = config->getString("Miscellaneous", "EnableSETFixes", "Normal");
		if (EnableSETFixes_String == "Off")
			EnableSETFixes = SETFixes_Off;
		else if (EnableSETFixes_String == "Normal")
			EnableSETFixes = SETFixes_Normal;
		else if (EnableSETFixes_String == "Extra")
			EnableSETFixes = SETFixes_Extra;
		//Set window title
		if (EnableWindowTitle) helperFunctions.SetWindowTitle("Sonic Adventure");
		//Another error message
		if (EnableEmeraldCoast && WaterEffect != nullptr)
		{
			MessageBox(WindowHandle,
				L"The Enhanced Emerald Coast mod is not "
				L"compatible with DC Emerald Coast. Please "
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
		if (EnableStationSquare)
		{
			WriteCall((void*)0x4231E6, LoadLevelFiles_ADV00);
			ADV00_Init();
		}
		if (EnableEggCarrier)
		{
			WriteCall((void*)0x4232C9, LoadLevelFiles_ADV01);
			WriteCall((void*)0x4233BB, LoadLevelFiles_ADV01C);
			ADV01_Init(config, helperFunctions);
		}
		FixMRBase_Apply(config, helperFunctions);
		if (EnableMysticRuins)
		{
			WriteCall((void*)0x4234AD, LoadLevelFiles_ADV02);
			ADV02_Init();
		}
		if (EnablePast)
		{
			WriteCall((void*)0x423554, LoadLevelFiles_ADV03);
			ADV03_Init();
		}
		Bosses_Init();
		if (!WaterEffect && EnableEmeraldCoast)
		{
			WriteCall((void*)0x422B68, LoadLevelFiles_STG01);
			EmeraldCoast_Init();
		}
		if (EnableWindyValley)
		{
			WriteCall((void*)0x422BD3, LoadLevelFiles_STG02);
			WindyValley_Init();
		}
		if (EnableTwinklePark)
		{
			WriteCall((void*)0x422C3E, LoadLevelFiles_STG03);
			TwinklePark_Init();
		}
		if (EnableSpeedHighway)
		{
			WriteCall((void*)0x422CA9, LoadLevelFiles_STG04);
			SpeedHighway_Init();
		}
		if (EnableRedMountain)
		{
			WriteCall((void*)0x422D14, LoadLevelFiles_STG05);
			RedMountain_Init();
		}
		if (EnableSkyDeck)
		{
			WriteCall((void*)0x422D84, LoadLevelFiles_STG06);
			SkyDeck_Init();
		}
		if (EnableLostWorld)
		{
			WriteCall((void*)0x422DEF, LoadLevelFiles_STG07);
			LostWorld_Init();
		}
		if (EnableIceCap)
		{
			WriteCall((void*)0x422E5A, LoadLevelFiles_STG08);
			IceCap_Init();
		}
		if (EnableCasinopolis)
		{
			WriteCall((void*)0x422EE8, LoadLevelFiles_STG09);
			Casinopolis_Init();
		}
		if (EnableFinalEgg)
		{
			WriteCall((void*)0x422F71, LoadLevelFiles_STG10);
			FinalEgg_Init();
		}
		if (EnableHotShelter)
		{
			WriteCall((void*)0x422FFF, LoadLevelFiles_STG12);
			HotShelter_Init();
		}
		if (EnableChaos0)
		{
			WriteCall((void*)0x423088, LoadLevelFiles_B_CHAOS0);
			Chaos0_Init();
		}
		if (EnableChaos2)
		{
			WriteCall((void*)0x4230B7, LoadLevelFiles_B_CHAOS2);
			Chaos2_Init();
		}
		if (EnableChaos4)
		{
			WriteCall((void*)0x4230CD, LoadLevelFiles_B_CHAOS4);
			Chaos4_Init();
		}
		if (EnableChaos6)
		{
			WriteCall((void*)0x4230E3, LoadLevelFiles_B_CHAOS6);
			Chaos6_Init();
		}
		if (EnablePerfectChaos)
		{
			WriteCall((void*)0x423108, LoadLevelFiles_B_CHAOS7);
			PerfectChaos_Init();
		}
		if (EnableEggHornet)
		{
			WriteCall((void*)0x423146, LoadLevelFiles_B_EGM1);
			EggHornet_Init();
		}
		if (EnableEggWalker)
		{
			WriteCall((void*)0x42315F, LoadLevelFiles_B_EGM2);
			EggWalker_Init();
		}
		if (EnableEggViper)
		{
			WriteCall((void*)0x423178, LoadLevelFiles_B_EGM3);
			EggViper_Init();
		}
		if (EnableE101)
		{
			WriteCall((void*)0x4231AF, LoadLevelFiles_B_E101);
			E101_Init();
		}
		if (EnableZeroE101R)
		{
			WriteCall((void*)0x423196, LoadLevelFiles_B_ROBO);
			WriteCall((void*)0x4231CD, LoadLevelFiles_B_E101R);
			Zero_Init();
			E101R_Init();
		}
		SkyChaseFix_Init();
		Subgames_Init();
		if (EnableTwinkleCircuit)
		{
			WriteCall((void*)0x4235EC, LoadLevelFiles_MINICART);
		}
		if (EnableSandHill)
		{
			WriteCall((void*)0x42370F, LoadLevelFiles_SBOARD);
		}
		WriteCall((void*)0x423795, LoadLevelFiles_Chao);
		ChaoGardens_Init(config, helperFunctions);
		ChaoRace_Init(config, helperFunctions);
		General_Init(config, helperFunctions);
		if (!DisableAllVideoStuff) Videos_Init(config, helperFunctions);
		if (EnableSpeedFixes) SpeedFixes_Init();
		delete config;
	}
		
	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (EnableDCBranding) Branding_OnFrame();
		if (EnableStationSquare) ADV00_OnFrame();
		if (EnableEggCarrier) ADV01_OnFrame();
		if (EnableMysticRuins) ADV02_OnFrame();
		if (EnablePast) ADV03_OnFrame();
		Bosses_OnFrame();
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
		SADXStyleWater_OnFrame();
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