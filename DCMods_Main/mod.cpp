#include "stdafx.h"

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
		DLLLoaded_HDGUI    = (GetModuleHandle(L"HD_GUI") != nullptr);
		DLLLoaded_SA1Chars = (GetModuleHandle(L"SA1_Chars") != nullptr);
		DLLLoaded_Lantern  = (GetModuleHandle(L"sadx-dc-lighting") != nullptr);
		DLLLoaded_DLCs     = (GetModuleHandle(L"DLCs_Main") != nullptr);
		DLLLoaded_SADXFE   = (GetModuleHandle(L"sadx-fixed-edition") != nullptr);
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
		if (EnableStationSquare) ADV00_Init(config, helperFunctions);
		if (EnableEggCarrier) ADV01_Init(config, helperFunctions);
		FixMRBase_Apply(config, helperFunctions);
		if (EnableMysticRuins) ADV02_Init(config, helperFunctions);
		if (EnablePast) ADV03_Init(config, helperFunctions);
		Bosses_Init(config, helperFunctions);
		if (!WaterEffect && EnableEmeraldCoast)
		{
			ReplaceBIN_DC("SET0100E");
			ReplaceBIN_DC("SET0100S");
			ReplaceBIN_DC("SET0101M");
			ReplaceBIN_DC("SET0101S");
			ReplaceBIN_DC("SET0102B");
			ReplaceBIN_DC("SET0102S");
			switch (EnableSETFixes)
			{
			case SETFixes_Normal:
				AddSETFix("SET0100S");
				AddSETFix("SET0100E");
				AddSETFix("SET0101S");
				break;
			case SETFixes_Extra:
				AddSETFix_Extra("SET0100S");
				AddSETFix_Extra("SET0100E");
				AddSETFix_Extra("SET0101S");
				break;
			default:
				break;
			}
			ReplacePVM("BEACH01");
			ReplacePVM("BEACH02");
			ReplacePVM("BEACH03");
			ReplacePVM("BG_BEACH");
			ReplacePVM("OBJ_BEACH");
			ReplacePVM("BEACH_SEA");
			//Load configuration settings
			IamStupidAndIWantFuckedUpOcean = config->getBool("Miscellaneous", "RevertEmeraldCoastDrawDistance", false);
			if (!IamStupidAndIWantFuckedUpOcean)
			{
				for (unsigned int i = 0; i < 3; i++)
				{
					ReplaceBIN_DC("CAM0100E");
					ReplaceBIN_DC("CAM0100S");
					ReplaceBIN_DC("CAM0101S");
					ReplaceBIN_DC("CAM0102B");
					ReplaceBIN_DC("CAM0102S");
					SkyboxScale_EmeraldCoast1[i].x = 1.0f;
					SkyboxScale_EmeraldCoast1[i].y = 1.0f;
					SkyboxScale_EmeraldCoast1[i].z = 1.0f;
					SkyboxScale_EmeraldCoast2[i].x = 1.0f;
					SkyboxScale_EmeraldCoast2[i].y = 1.0f;
					SkyboxScale_EmeraldCoast2[i].z = 1.0f;
					SkyboxScale_EmeraldCoast3[i].x = 1.0f;
					SkyboxScale_EmeraldCoast3[i].y = 1.0f;
					SkyboxScale_EmeraldCoast3[i].z = 1.0f;
					DrawDist_EmeraldCoast1[i].Maximum = -6000.0f;
					DrawDist_EmeraldCoast2[i].Maximum = -3900.0f;
					FogData_EmeraldCoast1[i].Distance = -12000.0f;
					FogData_EmeraldCoast1[i].Layer = -12000.0f;
					FogData_EmeraldCoast2[i].Distance = -12000.0f;
					FogData_EmeraldCoast2[i].Layer = -12000.0f;
				}
			}
			else
			{
				ReplaceBIN("CAM0100E", "CAM0100E_R");
				ReplaceBIN("CAM0100S", "CAM0100S_R");
				ReplaceBIN("CAM0101S", "CAM0101S_R");
				ReplaceBIN("CAM0102S", "CAM0102S_R");
				ReplaceBIN("CAM0102B", "CAM0102B_R");
			}
			WriteCall((void*)0x422B68, EmeraldCoast_Init);
		}
		if (EnableWindyValley)
		{
			ReplaceBIN_DC("SET0200S");
			ReplaceBIN_DC("SET0200E");
			ReplaceBIN_DC("SET0201S");
			ReplaceBIN_DC("SET0202M");
			ReplaceBIN_DC("SET0202S");
			ReplaceBIN_DC("CAM0200E");
			ReplaceBIN_DC("CAM0200S");
			ReplaceBIN_DC("CAM0201S");
			ReplaceBIN_DC("CAM0202M");
			ReplaceBIN_DC("CAM0202S");
			switch (EnableSETFixes)
			{
			case SETFixes_Normal:
				AddSETFix("SET0200E");
				AddSETFix("SET0200S");
				AddSETFix("SET0201S");
				AddSETFix("SET0202M");
				AddSETFix("SET0202S");
				break;
			case SETFixes_Extra:
				AddSETFix_Extra("SET0200E");
				AddSETFix_Extra("SET0200S");
				AddSETFix_Extra("SET0201S");
				AddSETFix_Extra("SET0202M");
				AddSETFix_Extra("SET0202S");
				break;
			default:
				break;
			}
			ReplacePVM("OBJ_WINDY");
			ReplacePVM("WINDY01");
			ReplacePVM("WINDY02");
			ReplacePVM("WINDY03");
			ReplacePVM("WINDY_BACK");
			ReplacePVM("WINDY_BACK2");
			ReplacePVM("WINDY_BACK3");
			WriteCall((void*)0x422BD3, WindyValley_Init);
		}
		if (EnableTwinklePark)
		{
			ReplaceBIN_DC("CAM0300S");
			ReplaceBIN_DC("CAM0301A");
			ReplaceBIN_DC("CAM0301B");
			ReplaceBIN_DC("CAM0301S");
			ReplaceBIN_DC("CAM0302A");
			ReplaceBIN_DC("CAM0302S");
			ReplaceBIN_DC("SET0300S");
			ReplaceBIN_DC("SET0301A");
			ReplaceBIN_DC("SET0301B");
			ReplaceBIN_DC("SET0301S");
			ReplaceBIN_DC("SET0302A");
			ReplaceBIN_DC("SET0302S");
			switch (EnableSETFixes)
			{
			case SETFixes_Normal:
				AddSETFix("SET0301A");
				AddSETFix("SET0301B");
				AddSETFix("SET0301S");
				AddSETFix("SET0302A");
				break;
			case SETFixes_Extra:
				AddSETFix_Extra("SET0301A");
				AddSETFix_Extra("SET0301B");
				AddSETFix_Extra("SET0301S");
				AddSETFix_Extra("SET0302A");
				break;
			default:
				break;
			}
			ReplacePVM("BG_SHAREOBJ");
			ReplacePVM("OBJ_SHAREOBJ");
			ReplacePVM("OBJ_TWINKLE");
			ReplacePVM("TWINKLE01");
			ReplacePVM("TWINKLE02");
			ReplacePVM("TWINKLE03");
			WriteCall((void*)0x422C3E, TwinklePark_Init);
		}
		if (EnableSpeedHighway)
		{
			ReplaceBIN("PL_40B", "PL_40X");
			ReplaceBIN("PL_41B", "PL_41X");
			ReplaceBIN_DC("CAM0400M");
			ReplaceBIN_DC("CAM0400S");
			ReplaceBIN_DC("CAM0401S");
			ReplaceBIN_DC("CAM0402K");
			ReplaceBIN_DC("CAM0402S");
			ReplaceBIN_DC("SET0400M");
			ReplaceBIN_DC("SET0400S");
			ReplaceBIN_DC("SET0401S");
			ReplaceBIN_DC("SET0402K");
			ReplaceBIN_DC("SET0402S");
			switch (EnableSETFixes)
			{
			case SETFixes_Normal:
				AddSETFix("SET0400M");
				AddSETFix("SET0400S");
				AddSETFix("SET0401S");
				AddSETFix("SET0402K");
				AddSETFix("SET0402S");
				break;
			case SETFixes_Extra:
				AddSETFix_Extra("SET0400M");
				AddSETFix_Extra("SET0400S");
				AddSETFix_Extra("SET0401S");
				AddSETFix_Extra("SET0402K");
				AddSETFix_Extra("SET0402S");
				break;
			default:
				break;
			}
			ReplacePVM("BG_HIGHWAY");
			ReplacePVM("BG_HIGHWAY01");
			ReplacePVM("BG_HIGHWAY02");
			ReplacePVM("BG_HIGHWAY03");
			ReplacePVM("HIGHWAY01");
			ReplacePVM("HIGHWAY02");
			ReplacePVM("HIGHWAY03");
			ReplacePVM("HIGHWAY_CAR");
			ReplacePVM("OBJ_HIGHWAY");
			ReplacePVM("OBJ_HIGHWAY2");
			WriteCall((void*)0x422CA9, SpeedHighway_Init);
		}
		if (EnableRedMountain)
		{
			ReplaceBIN_DC("CAM0500S");
			ReplaceBIN_DC("CAM0501E");
			ReplaceBIN_DC("CAM0501S");
			ReplaceBIN_DC("CAM0502K");
			ReplaceBIN_DC("SET0500S");
			ReplaceBIN_DC("SET0501E");
			ReplaceBIN_DC("SET0501S");
			ReplaceBIN_DC("SET0502K");
			switch (EnableSETFixes)
			{
			case SETFixes_Normal:
				AddSETFix("SET0500S");
				AddSETFix("SET0501E");
				AddSETFix("SET0501S");
				AddSETFix("SET0502K");
				break;
			case SETFixes_Extra:
				AddSETFix_Extra("SET0500S");
				AddSETFix_Extra("SET0501E");
				AddSETFix_Extra("SET0501S");
				AddSETFix_Extra("SET0502K");
				break;
			default:
				break;
			}
			ReplacePVM("MOUNTAIN01");
			ReplacePVM("MOUNTAIN02");
			ReplacePVM("MOUNTAIN03");
			ReplacePVM("MOUNTAIN_CARRIER");
			ReplacePVM("MOUNTAIN_E104");
			ReplacePVM("MOUNTAIN_MEXPLOSION");
			ReplacePVM("MOUNTAIN_STEAM");
			ReplacePVM("OBJ_MOUNTAIN");
			ReplacePVM("YOUGAN_ANIM");
			ReplaceBIN("PL_51B", "PL_51X");
			WriteCall((void*)0x422D14, RedMountain_Init);
		}
		if (EnableSkyDeck)
		{
			ReplaceBIN_DC("SET0600M");
			ReplaceBIN_DC("SET0600S");
			ReplaceBIN_DC("SET0601M");
			ReplaceBIN_DC("SET0601S");
			ReplaceBIN_DC("SET0602K");
			ReplaceBIN_DC("SET0602M");
			ReplaceBIN_DC("SET0602S");
			ReplaceBIN_DC("CAM0600M");
			ReplaceBIN_DC("CAM0600S");
			ReplaceBIN_DC("CAM0601S");
			ReplaceBIN_DC("CAM0602K");
			ReplaceBIN_DC("CAM0602S");
			switch (EnableSETFixes)
			{
			case SETFixes_Normal:
				AddSETFix("SET0600M");
				AddSETFix("SET0600S");
				AddSETFix("SET0601S");
				AddSETFix("SET0602K");
				AddSETFix("SET0602S");
				break;
			case SETFixes_Extra:
				AddSETFix_Extra("SET0600M");
				AddSETFix_Extra("SET0600S");
				AddSETFix_Extra("SET0601S");
				AddSETFix_Extra("SET0602K");
				AddSETFix_Extra("SET0602S");
				break;
			default:
				break;
			}
			ReplacePVM("E_AIRCRAFT");
			ReplacePVM("OBJ_SKYDECK");
			ReplacePVM("SKYDECK01");
			ReplacePVM("SKYDECK02");
			ReplacePVM("SKYDECK03");
			WriteCall((void*)0x422D84, SkyDeck_Init);
		}
		if (EnableLostWorld)
		{
			ReplaceBIN_DC("CAM0700S");
			ReplaceBIN_DC("CAM0701K");
			ReplaceBIN_DC("CAM0701S");
			ReplaceBIN_DC("CAM0702S");
			ReplaceBIN_DC("SET0700S");
			ReplaceBIN_DC("SET0701K");
			ReplaceBIN_DC("SET0701S");
			ReplaceBIN_DC("SET0702S");
			switch (EnableSETFixes)
			{
			case SETFixes_Normal:
				AddSETFix("SET0700S");
				AddSETFix("SET0701K");
				AddSETFix("SET0701S");
				AddSETFix("SET0702S");
				break;
			case SETFixes_Extra:
				AddSETFix_Extra("SET0700S");
				AddSETFix_Extra("SET0701K");
				AddSETFix_Extra("SET0701S");
				AddSETFix_Extra("SET0702S");
				break;
			default:
				break;
			}
			ReplacePVM("BG_RUIN");
			ReplacePVM("RUIN01");
			ReplacePVM("RUIN02");
			ReplacePVM("RUIN03");
			ReplacePVM("OBJ_RUIN");
			ReplacePVM("OBJ_RUIN2");
			WriteCall((void*)0x422DEF, LostWorld_Init);
		}
		if (EnableIceCap)
		{
			ReplaceBIN_DC("CAM0800S");
			ReplaceBIN_DC("CAM0801S");
			ReplaceBIN_DC("CAM0802S");
			ReplaceBIN_DC("CAM0803B");
			ReplaceBIN_DC("SET0800S");
			ReplaceBIN_DC("SET0801S");
			ReplaceBIN_DC("SET0802M");
			ReplaceBIN_DC("SET0802S");
			ReplaceBIN_DC("SET0803B");
			switch (EnableSETFixes)
			{
			case SETFixes_Normal:
				AddSETFix("SET0800S");
				AddSETFix("SET0801S");
				AddSETFix("SET0802M");
				AddSETFix("SET0802S");
				AddSETFix("SET0803B");
				break;
			case SETFixes_Extra:
				AddSETFix_Extra("SET0800S");
				AddSETFix_Extra("SET0801S");
				AddSETFix_Extra("SET0802M");
				AddSETFix_Extra("SET0802S");
				AddSETFix_Extra("SET0803B");
				break;
			default:
				break;
			}
			ReplacePVM("BG_ICECAP");
			ReplacePVM("ICECAP01");
			ReplacePVM("ICECAP02");
			ReplacePVM("ICECAP03");
			ReplacePVM("OBJ_ICECAP");
			ReplacePVM("OBJ_ICECAP2");
			ReplacePVR("MIW_B001");
			ReplacePVR("MTX_BOARD0");
			ReplacePVR("SB_BOARD1");
			WriteCall((void*)0x422E5A, IceCap_Init);
		}
		if (EnableCasinopolis)
		{
			ReplaceBIN_DC("CAM0900K");
			ReplaceBIN_DC("CAM0900S");
			ReplaceBIN_DC("CAM0901M");
			ReplaceBIN_DC("CAM0901S");
			ReplaceBIN_DC("CAM0902S");
			ReplaceBIN_DC("CAM0903S");
			ReplaceBIN_DC("SET0900K");
			ReplaceBIN_DC("SET0900S");
			ReplaceBIN_DC("SET0901M");
			ReplaceBIN_DC("SET0901S");
			ReplaceBIN_DC("SET0902S");
			ReplaceBIN_DC("SET0903S");
			ReplaceBIN_DC("SETMI0900K");
			switch (EnableSETFixes)
			{
			case SETFixes_Normal:
				AddSETFix("SET0900K");
				AddSETFix("SET0900S");
				AddSETFix("SET0901M");
				AddSETFix("SET0901S");
				AddSETFix("SET0902S");
				AddSETFix("SET0903S");
				break;
			case SETFixes_Extra:
				AddSETFix_Extra("SET0900K");
				AddSETFix_Extra("SET0900S");
				AddSETFix_Extra("SET0901M");
				AddSETFix_Extra("SET0901S");
				AddSETFix_Extra("SET0902S");
				AddSETFix_Extra("SET0903S");
				break;
			default:
				break;
			}
			ReplacePVM("CASINO01");
			ReplacePVM("CASINO02");
			ReplacePVM("CASINO03");
			ReplacePVM("CASINO04");
			ReplacePVM("OBJ_CASINO2");
			ReplacePVM("OBJ_CASINO8");
			ReplacePVM("OBJ_CASINO9");
			ReplacePVM("OBJ_CASINO_E");
			//Lantern stuff
			ReplaceBIN("PL_90B", "PL_90X");
			//Load configuration settings
			CowgirlOn = config->getBool("Miscellaneous", "EnableCasinopolisCowgirl", true);
			WriteCall((void*)0x422EE8, Casinopolis_Init);
		}
		if (EnableFinalEgg)
		{
			ReplaceBIN_DC("CAM1000A");
			ReplaceBIN_DC("CAM1000S");
			ReplaceBIN_DC("CAM1001S");
			ReplaceBIN_DC("CAM1002E");
			ReplaceBIN_DC("CAM1002S");
			ReplaceBIN_DC("CAM1003S");
			ReplaceBIN_DC("SET1000A");
			ReplaceBIN_DC("SET1000S");
			ReplaceBIN_DC("SET1001S");
			ReplaceBIN_DC("SET1002E");
			ReplaceBIN_DC("SET1002S");
			ReplaceBIN_DC("SET1003S");
			switch (EnableSETFixes)
			{
			case SETFixes_Normal:
				AddSETFix("SET1000A");
				AddSETFix("SET1000S");
				AddSETFix("SET1001S");
				AddSETFix("SET1002E");
				AddSETFix("SET1002S");
				AddSETFix("SET1003S");
				break;
			case SETFixes_Extra:
				AddSETFix_Extra("SET1000A");
				AddSETFix_Extra("SET1000S");
				AddSETFix_Extra("SET1001S");
				AddSETFix_Extra("SET1002E");
				AddSETFix_Extra("SET1002S");
				AddSETFix_Extra("SET1003S");
				break;
			default:
				break;
			}
			ReplacePVM("EFF_FINALEGG_POM");
			ReplacePVM("FINALEGG1");
			ReplacePVM("FINALEGG2");
			ReplacePVM("FINALEGG3");
			ReplacePVM("FINALEGG4");
			ReplaceBIN("PL_A0B", "PL_A0X");
			ReplaceBIN("PL_A2B", "PL_A2X");
			if (DLLLoaded_Lantern)
			{
				if (set_alpha_reject_ptr != nullptr)
				{
					ReplacePVM("OBJ_FINALEGG");
				}
				else
				{
					ReplaceGeneric("OBJ_FINALEGG.PVM", "OBJ_FINALEGG_DC_OLD.PVM");
				}
				WriteCall((void*)0x422F71, FinalEgg_Init);
			}
			else ReplaceGeneric("OBJ_FINALEGG.PVM", "OBJ_FINALEGG_DC_OLD.PVM");
		}
		if (EnableHotShelter)
		{
			ReplaceBIN_DC("SET1200A");
			ReplaceBIN_DC("SET1200B");
			ReplaceBIN_DC("SET1200S");
			ReplaceBIN_DC("SET1201A");
			ReplaceBIN_DC("SET1201S");
			ReplaceBIN_DC("SET1202E");
			ReplaceBIN_DC("SET1202S");
			ReplaceBIN_DC("SET1203S");
			ReplaceBIN_DC("CAM1200A");
			ReplaceBIN_DC("CAM1200B");
			ReplaceBIN_DC("CAM1200S");
			ReplaceBIN_DC("CAM1201A");
			ReplaceBIN_DC("CAM1201S");
			ReplaceBIN_DC("CAM1202E");
			ReplaceBIN_DC("CAM1202S");
			ReplaceBIN_DC("CAM1203S");
			switch (EnableSETFixes)
			{
			case SETFixes_Normal:
				AddSETFix("SET1200A");
				AddSETFix("SET1200B");
				AddSETFix("SET1201A");
				AddSETFix("SET1202E");
				break;
			case SETFixes_Extra:
				AddSETFix_Extra("SET1200A");
				AddSETFix_Extra("SET1200B");
				AddSETFix_Extra("SET1201A");
				AddSETFix_Extra("SET1202E");
				break;
			default:
				break;
			}
			ReplacePVM("HOTSHELTER0");
			ReplacePVM("HOTSHELTER1");
			ReplacePVM("HOTSHELTER2");
			ReplacePVM("HOTSHELTER3");
			ReplacePVM("HOTSHELTER4");
			ReplacePVM("SHELTER_COLUMN");
			ReplacePVM("SHELTER_SUIMEN");
			WriteCall((void*)0x422FFF, HotShelter_Init);
		}
		SkyChaseFix_Init();
		Subgames_Init(config, helperFunctions);
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