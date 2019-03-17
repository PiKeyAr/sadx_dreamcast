#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <string>

class IniFile;

DataPointer(int, FramerateSetting_Config, 0x0089295C);
DataPointer(int, FramerateSetting, 0x0389D7DC);
DataPointer(int, DroppedFrames, 0x03B1117C);
DataPointer(int, CutsceneID, 0x3B2C570);
DataPointer(float, EnvMap1, 0x038A5DD0);
DataPointer(float, EnvMap2, 0x038A5DE4);
DataPointer(float, EnvMap3, 0x038A5E00);
DataPointer(float, EnvMap4, 0x038A5E04);

typedef enum
{
	SETFixes_Off	= 0,
	SETFixes_Normal	= 1,
	SETFixes_Extra	= 2,
} SETFixes_e;

extern SETFixes_e EnableSETFixes;

extern int SADXWaveAnimation;
extern int CutsceneSkipMode;
extern bool EnableSpeedFixes;
extern bool DLLLoaded_DLCs;
extern bool DLLLoaded_SA1Chars;
extern bool DLLLoaded_Lantern;
extern bool DLLLoaded_HDGUI;
extern bool DLLLoaded_SADXFE;
extern bool EnableDCBranding;
extern bool EnableEmeraldCoast;
extern bool EnableWindyValley;
extern bool EnableTwinklePark;
extern bool EnableSpeedHighway;
extern bool EnableRedMountain;
extern bool EnableSkyDeck;
extern bool EnableLostWorld;
extern bool EnableIceCap;
extern bool EnableCasinopolis;
extern bool EnableFinalEgg;
extern bool EnableHotShelter;
extern bool EnableStationSquare;
extern bool EnableMysticRuins;
extern bool EnableEggCarrier;
extern bool EnablePast;
extern bool DisableAllVideoStuff;
extern bool SADXWater_EmeraldCoast;
extern bool SADXWater_StationSquare;
extern bool SADXWater_MysticRuins;
extern bool SADXWater_EggCarrier;
extern bool SADXWater_Past;
extern NJS_TEXLIST texlist_sadxwtr_beach;
extern NJS_TEXLIST texlist_sadxwtr_sewers;
extern NJS_TEXLIST texlist_sadxwtr_waves;
extern SecondaryEntrance BK_SSGardenStartPoint;
extern std::string ModPath;

void FixMRBase_Apply(const IniFile *config, const HelperFunctions &helperFunctions);
void DisableSADXWaterFog();
void Branding_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void Branding_OnFrame();
void ADV00_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void ADV00_OnFrame();
void ADV01_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void ADV01_OnFrame();
void ADV02_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void ADV02_OnFrame();
void ADV03_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void ADV03_OnFrame();
void Bosses_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void Bosses_OnFrame();
void EmeraldCoast_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void EmeraldCoast_OnFrame();
void WindyValley_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void WindyValley_OnFrame();
void TwinklePark_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void TwinklePark_OnFrame();
void SpeedHighway_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void SpeedHighway_OnFrame();
void RedMountain_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void RedMountain_OnFrame();
void SkyDeck_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void SkyDeck_OnFrame();
void LostWorld_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void LostWorld_OnFrame();
void IceCap_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void IceCap_OnFrame();
void Casinopolis_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void Casinopolis_OnFrame();
void FinalEgg_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void FinalEgg_OnFrame();
void HotShelter_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void HotShelter_OnFrame();
void Subgames_Init(const IniFile *config, const HelperFunctions &helperFunctions);
//void Subgames_OnFrame();
void ChaoGardens_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void ChaoGardens_OnFrame();
void ChaoRace_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void ChaoRace_OnFrame();
void General_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void General_OnFrame();
void General_OnInput();
void Videos_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void Videos_OnFrame();
void Videos_OnInput();
void SkyChaseFix_Init();
void SkyChaseFix_UpdateBounds();
void Branding_SetUpVariables();
void SpeedFixes_Init();
void SpeedFixes_OnFrame();
void SADXStyleWater_Init(const IniFile *config, const HelperFunctions &helperFunctions);
void SADXStyleWater_OnFrame();
void __cdecl EmeraldCoast_OceanDraw_SADXStyle(OceanData *o);
void __cdecl MysticRuins_OceanDraw_SADXStyle(OceanData *o);
void __cdecl EggCarrier_OceanDraw_SADXStyle(OceanData *o);
void __cdecl Past_OceanDraw_SADXStyle(OceanData *o);

bool ForceWhiteDiffuse1(NJS_MATERIAL* material, uint32_t flags);
bool ForceWhiteDiffuse3(NJS_MATERIAL* material, uint32_t flags);
bool ForceWhiteDiffuse3_Night(NJS_MATERIAL* material, uint32_t flags);
bool ForceWhiteDiffuse3Specular1(NJS_MATERIAL* material, uint32_t flags);
bool ChaosPuddleFunc(NJS_MATERIAL* material, uint32_t flags);
bool Chaos2Function(NJS_MATERIAL* material, uint32_t flags);
bool Chaos4NPCFunction(NJS_MATERIAL* material, uint32_t flags);
void RemoveMaterialColors(NJS_MATERIAL* material);
bool DisableAlphaRejection(NJS_MATERIAL* material, uint32_t flags);

bool ForceDiffuse0Specular0(NJS_MATERIAL* material, uint32_t flags);
bool ForceDiffuse0Specular1(NJS_MATERIAL* material, uint32_t flags);
bool ForceDiffuse0Specular0or1(NJS_MATERIAL* material, uint32_t flags);
bool ForceDiffuse2Specular2(NJS_MATERIAL* material, uint32_t flags);
bool ForceDiffuse2Specular3(NJS_MATERIAL* material, uint32_t flags);
bool ForceDiffuse4Specular5(NJS_MATERIAL* material, uint32_t flags);

void DisplayVideoFadeout(int fadeout, int mode);

void AnimateTextures(NJS_MATERIAL *material, int startframe, int endframe, int speed);

#define ReplacePVM(a) helperFunctions.ReplaceFile("system\\" a ".PVM", "system\\" a "_DC.PVM")
#define ReplacePVR(a) helperFunctions.ReplaceFile("system\\" a ".PVR", "system\\" a "_DC.PVR")
#define ReplaceGeneric(a,b) helperFunctions.ReplaceFile("system\\" a, "system\\" b)
#define ReplaceBIN(a,b) helperFunctions.ReplaceFile("system\\" a ".BIN", "system\\" b ".BIN")
#define ReplaceBIN_DC(a) helperFunctions.ReplaceFile("system\\" a ".BIN", "system\\" a "_DC.BIN")
#define AddSETFix(a) helperFunctions.ReplaceFile("system\\" a ".BIN", "system\\" a "_S.BIN")
#define AddSETFix_Extra(a) helperFunctions.ReplaceFile("system\\" a ".BIN", "system\\" a "_E.BIN")
#define ReplacePVMX_SADXStyleWater(a) helperFunctions.ReplaceFile("system\\" a ".PVM", "system\\" a "W.PVM")

extern set_shader_flags* set_shader_flags_ptr;
extern material_register* material_register_ptr;
extern material_unregister* material_unregister_ptr;
extern set_diffuse* set_diffuse_ptr;
extern set_specular* set_specular_ptr;
extern set_alpha_reject* set_alpha_reject_ptr;
extern set_blend_factor* set_blend_factor_ptr;
extern set_diffuse_blend* set_diffuse_blend_ptr;
extern set_specular_blend* set_specular_blend_ptr;

struct SubtitleThing
{
	char field_0;
	char gap1[1];
	float px;
	float py;
	int field_6;
	int field_8;
	float sx;
	float sy;
	__int16 width;
	__int16 height;
	__int16 field_12;
	__int16 field_14;
	__int16 field_16;
	__int16 field_18;
	__int16 field_1A;
	NJS_BGRA colorA;
	NJS_COLOR colorB;
	float scale;
	void *data_or_d3dtexture;
	Uint32 gbix;
	NJS_TEXLIST tlist;
	NJS_TEXNAME texname;
	int flags;
};
