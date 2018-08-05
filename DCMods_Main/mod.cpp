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
bool EnableWindyValley = true;
bool EnableTwinklePark = true;
bool EnableSpeedHighway = true;
bool EnableRedMountain = true;
bool EnableSkyDeck = true;
bool EnableLostWorld = true; 
bool EnableIceCap = true;
bool EnableCasinopolis = true;
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
		if (!WaterEffect && EnableEmeraldCoast) EmeraldCoast_Init(config, helperFunctions);
		if (EnableWindyValley) WindyValley_Init(config, helperFunctions);
		if (EnableTwinklePark) TwinklePark_Init(config, helperFunctions);
		if (EnableSpeedHighway) SpeedHighway_Init(config, helperFunctions);
		if (EnableRedMountain) RedMountain_Init(config, helperFunctions);
		if (EnableSkyDeck) SkyDeck_Init(config, helperFunctions);
		if (EnableLostWorld) LostWorld_Init(config, helperFunctions);
		if (EnableIceCap) IceCap_Init(config, helperFunctions);
		if (EnableCasinopolis) Casinopolis_Init(config, helperFunctions);
		if (EnableFinalEgg) FinalEgg_Init(config, helperFunctions);
		if (EnableHotShelter) HotShelter_Init(config, helperFunctions);
		SkyChaseFix_Init();
		Subgames_Init(config, helperFunctions);
		ChaoGardens_Init(config, helperFunctions);
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