#include "stdafx.h"
#include "HotShelter_Objects.h"
#include "HotShelter1.h"
#include "HotShelter2.h"
#include "HotShelter3.h"

FunctionPointer(void, sub_4B9540, (NJS_VECTOR *position, NJS_VECTOR *scale_v, float scale), 0x4B9540);
FunctionPointer(void, sub_405370, (NJS_OBJECT *a1, NJS_MOTION *a2, float a3, float a4), 0x405370);
DataPointer(float, E105HitCounter, 0x03C58158);
DataPointer(float, CurrentFogDist, 0x03ABDC64);
DataPointer(float, CurrentFogLayer, 0x03ABDC60);
DataArray(NJS_TEX, uvSTG12_01410790, 0x01810790, 20); //Water thing UVs 1
DataArray(NJS_TEX, uvSTG12_014107E0, 0x018107E0, 56); //Water thing UVs 2
DataArray(NJS_MATERIAL, WaterThingMaterials, 0x18106C4, 2); //Water thing materials
DataArray(NJS_OBJECT*, SuimenArray, 0x1873B98, 4); //Array of Suimen objects

static float suimen_increment = 0.0f;
static int suimen_direction = 1;
static int TextureAnim = 78;
static int WaterThing_VShift = 0;
static bool ReduceHotShelterFog = false;
static Angle E105Angle = 0;

NJS_MATERIAL* DisableAlphaRejection_HotShelter[] = {
	&matlistSTG12_00032C20[0], //Act 1 green light
	&matlistSTG12_00096220[0], //Act 2 green light
	&matlistSTG12_0009639C[0], //Act 2 green light
	&matlistSTG12_000964DC[0], //Act 2 green light
	&matlistSTG12_000DCC38[10], //Act 3 blue light
	&matlistSTG12_000DEBEC_2[0], //Act 3 blue light
};

NJS_MATERIAL* LevelSpecular_HotShelter[] = {
	((NJS_MATERIAL*)0x01A3AD08), //Glass tube elevator
};

NJS_MATERIAL* ObjectSpecular_HotShelter[] = {
	//Shutter
	((NJS_MATERIAL*)0x01814318),
	((NJS_MATERIAL*)0x0181432C),
	//Some stuff for Gamma's train
	((NJS_MATERIAL*)0x017E6D78),
	((NJS_MATERIAL*)0x017E6D8C),
	((NJS_MATERIAL*)0x017E6DA0),
	((NJS_MATERIAL*)0x017E6DB4),
	((NJS_MATERIAL*)0x017E6DC8),
	((NJS_MATERIAL*)0x017E6DDC),
	((NJS_MATERIAL*)0x017E6DF0),
	((NJS_MATERIAL*)0x017E6E04),
	((NJS_MATERIAL*)0x017E6E18),
	((NJS_MATERIAL*)0x017E6E2C),
	((NJS_MATERIAL*)0x017E6E40),
	((NJS_MATERIAL*)0x017E6E54),
	((NJS_MATERIAL*)0x017E6E68),
	((NJS_MATERIAL*)0x017E6E7C),
	((NJS_MATERIAL*)0x017E8E18),
	((NJS_MATERIAL*)0x017E8E2C),
	((NJS_MATERIAL*)0x017E8E40),
	((NJS_MATERIAL*)0x017E8E54),
	((NJS_MATERIAL*)0x017E8E68),
	((NJS_MATERIAL*)0x017E8E7C),
	((NJS_MATERIAL*)0x017E8E90),
	((NJS_MATERIAL*)0x017E8EA4),
	((NJS_MATERIAL*)0x017E8EB8),
	((NJS_MATERIAL*)0x017E8ECC),
	((NJS_MATERIAL*)0x017E8EE0),
	((NJS_MATERIAL*)0x017E8EF4),
	((NJS_MATERIAL*)0x017E8F08),
	((NJS_MATERIAL*)0x017E8F1C),
	//More train stuff
	((NJS_MATERIAL*)0x017E2D88),
	((NJS_MATERIAL*)0x017E2D9C),
	((NJS_MATERIAL*)0x017E2DB0),
	//Some more stuff
	((NJS_MATERIAL*)0x017F27F0),
	((NJS_MATERIAL*)0x017F2804),
	((NJS_MATERIAL*)0x017F2818),
	((NJS_MATERIAL*)0x017F282C),
	((NJS_MATERIAL*)0x017F2840),
	((NJS_MATERIAL*)0x017F2854),
	((NJS_MATERIAL*)0x017F2868),
	((NJS_MATERIAL*)0x017F287C),
	((NJS_MATERIAL*)0x017F1EA0),
	((NJS_MATERIAL*)0x017F1EB4),
	((NJS_MATERIAL*)0x017F1EC8),
	((NJS_MATERIAL*)0x017F1EDC),
	((NJS_MATERIAL*)0x017F1EF0),
	((NJS_MATERIAL*)0x017F1F04),
	((NJS_MATERIAL*)0x017F1F18),
	((NJS_MATERIAL*)0x017F1F2C),
	//Gamma train start
	((NJS_MATERIAL*)0x017DFA18),
	((NJS_MATERIAL*)0x017DFA2C),
	((NJS_MATERIAL*)0x017DFA40),
	((NJS_MATERIAL*)0x017DFA54),
	((NJS_MATERIAL*)0x017DFA68),
	((NJS_MATERIAL*)0x017DFA7C),
	((NJS_MATERIAL*)0x017DFA90),
	((NJS_MATERIAL*)0x017DFAA4),
	((NJS_MATERIAL*)0x017DFAB8),
	((NJS_MATERIAL*)0x017DFACC),
	//OFens
	((NJS_MATERIAL*)0x01868158),
	((NJS_MATERIAL*)0x0186816C),
	((NJS_MATERIAL*)0x01868180),
	((NJS_MATERIAL*)0x01868194),
	((NJS_MATERIAL*)0x018681A8),
	//OCargoStart
	((NJS_MATERIAL*)0x017E5458),
	((NJS_MATERIAL*)0x017E546C),
	((NJS_MATERIAL*)0x017E5480),
	((NJS_MATERIAL*)0x017E5494),
	((NJS_MATERIAL*)0x017E54A8),
	((NJS_MATERIAL*)0x017E54BC),
	((NJS_MATERIAL*)0x017E54D0),
	((NJS_MATERIAL*)0x017E54E4),
	((NJS_MATERIAL*)0x017E4B08),
	((NJS_MATERIAL*)0x017E4B1C),
	((NJS_MATERIAL*)0x017E4B30),
	((NJS_MATERIAL*)0x017E4B44),
	((NJS_MATERIAL*)0x017E4B58),
	((NJS_MATERIAL*)0x017E4B6C),
	((NJS_MATERIAL*)0x017E4B80),
	((NJS_MATERIAL*)0x017E4B94),
	//OCrane (OCarne)
	((NJS_MATERIAL*)0x0185B800),
	((NJS_MATERIAL*)0x0185B814),
	((NJS_MATERIAL*)0x0185B828),
	((NJS_MATERIAL*)0x0185B83C),
	((NJS_MATERIAL*)0x0185B850),
	((NJS_MATERIAL*)0x0185B864),
	((NJS_MATERIAL*)0x0185B878),
	((NJS_MATERIAL*)0x0185B88C),
	((NJS_MATERIAL*)0x0185B8A0),
	//OBiribiri
	((NJS_MATERIAL*)0x01862868),
	((NJS_MATERIAL*)0x0186287C),
	((NJS_MATERIAL*)0x01862890),
	((NJS_MATERIAL*)0x018628A4),
	((NJS_MATERIAL*)0x018628B8),
	//OBridge
	((NJS_MATERIAL*)0x0183CC70),
	((NJS_MATERIAL*)0x0183CC84),
	((NJS_MATERIAL*)0x0183CC98),
	((NJS_MATERIAL*)0x0183CCAC),
	//OKaidan
	((NJS_MATERIAL*)0x01831460),
	((NJS_MATERIAL*)0x01831474),
	((NJS_MATERIAL*)0x01831488),
	((NJS_MATERIAL*)0x0183149C),
	((NJS_MATERIAL*)0x018314B0),
	((NJS_MATERIAL*)0x018314C4),
	((NJS_MATERIAL*)0x018309A0),
	((NJS_MATERIAL*)0x018309B4),
	((NJS_MATERIAL*)0x01830550),
	((NJS_MATERIAL*)0x01830564),
	((NJS_MATERIAL*)0x018300FC),
	((NJS_MATERIAL*)0x01830110),
	//OKaitenMeter
	((NJS_MATERIAL*)0x0182E058),
	((NJS_MATERIAL*)0x0182E06C),
	((NJS_MATERIAL*)0x0182E094),
	//Water
	((NJS_MATERIAL*)0x01810150),
	((NJS_MATERIAL*)0x0180F608),
	((NJS_MATERIAL*)0x0180FA60),
	((NJS_MATERIAL*)0x0180FBE8),
	((NJS_MATERIAL*)0x0180FCF4),
	((NJS_MATERIAL*)0x0180EED8),
	//OKaitenKey
	((NJS_MATERIAL*)0x0182D758),
	((NJS_MATERIAL*)0x0182D76C),
	((NJS_MATERIAL*)0x0182D780),
	((NJS_MATERIAL*)0x0182D794),
	//OUkijima
	((NJS_MATERIAL*)0x018136E0),
	((NJS_MATERIAL*)0x018136F4),
	((NJS_MATERIAL*)0x01813708),
};

NJS_MATERIAL* WhiteDiffuse_HotShelter[] = {
	//OKazari2
	((NJS_MATERIAL*)0x0181751C),
	//OCarne
	((NJS_MATERIAL*)0x0185B8B4),
	//Level stuff
	&matlistSTG12_000D7B10[2],
	&matlistSTG12_000D7878[2],
	&matlistSTG12_000F3C6C[5],
	&matlistSTG12_000F4D74[5],
	//Colored cubes
	&matlistSTG12_00170E74[8],
	&matlistSTG12_00170088[8],
	&matlistSTG12_0016F29C[8],
	&matlistSTG12_0016E4B0[8],
	//OBoxAna
	((NJS_MATERIAL*)0x01800E34),
	//Light
	&matlistSTG12_0015C248[0],
	&matlistSTG12_0015C248[1],
	&matlistSTG12_0015C248[2],
	&matlistSTG12_0015C248[3],
	&matlistSTG12_0015C248[4],
	&matlistSTG12_0015C248[5],
	&matlistSTG12_0015C248[6],
	&matlistSTG12_0015C248[7],
};

void RenderWaterThing(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	DrawQueueDepthBias = -17000.0f;
	ProcessModelNode(a1, QueuedModelFlagsB_SomeTextureThing, a3);
	DrawQueueDepthBias = 0;
}

void AmyHatchFix(ObjectMaster *obj, CollisionData *collisionArray, int count, unsigned __int8 list)
{
	if (CurrentCharacter != 5) Collision_Init(obj, collisionArray, count, list);
}

void __cdecl RenderSuimen(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	SetMaterialAndSpriteColor_Float(0.0f, 0.5f, 0.5f, 0.5f);
	ProcessModelNode_A_Wrapper(a1, a2, a3);
}

void RenderOHikari(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	ProcessModelNode_C_VerifyTexList(a1, a2, a3);
	DrawQueueDepthBias = 1000.0f;
	ProcessModelNode(&objectSTG12_0015CC48_2, QueuedModelFlagsB_SomeTextureThing, 1.0f);
	DrawQueueDepthBias = 0.0f;
}

void E105Animation(NJS_OBJECT *a1, NJS_MOTION *a2, float a3, float a4)
{
	sub_405370(a1, a2, a3, a4);
	if (!MissedFrames && GameState != 16 && E105HitCounter > 0)
	{
		E105Angle = (E105Angle + 1024 * FramerateSetting) % 65535;
		((NJS_OBJECT*)0x017D6C64)->pos[1] = -7.5f - 7.5f*njSin((E105Angle + 1024 * FramerateSetting) % 65535);
		((NJS_OBJECT*)0x017D72FC)->pos[1] = -7.5f - 7.5f*njSin((E105Angle + 8192 + 1024 * FramerateSetting) % 65535);
		((NJS_OBJECT*)0x017D7994)->pos[1] = -7.5f - 7.5f*njSin((E105Angle + 24576 + 1024 * FramerateSetting) % 65535);
		((NJS_OBJECT*)0x017D589C)->pos[1] = -7.5f - 7.5f*njSin((E105Angle + 49152 + 1024 * FramerateSetting) % 65535);
		((NJS_OBJECT*)0x017D5F34)->pos[1] = -7.5f - 7.5f*njSin((E105Angle + 32768 + 1024 * FramerateSetting) % 65535);
		((NJS_OBJECT*)0x017D65CC)->pos[1] = -7.5f - 7.5f*njSin((E105Angle + 16384 + 1024 * FramerateSetting) % 65535);
	}
}

void PlayMusicHook_DisableE105Fog(MusicIDs song)
{
	PlayMusic(song);
	ReduceHotShelterFog = true;
}

void HotShelter_Init(const IniFile *config, const HelperFunctions &helperFunctions)
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
	WriteCall((void*)0x5A3A03, PlayMusicHook_DisableE105Fog); //Hook to disable fog in E105 room
	WriteCall((void*)0x005A3C99, E105Animation); //Add missing E105 Zeta animation
	WriteCall((void*)0x0059F75C, AmyHatchFix); //Don't make the ventilation hatch solid when playing as Amy
	WaterThingMaterials[0].attr_texId = 44;
	WaterThingMaterials[1].attr_texId = 3;
	//Fix the water splashes created by the water thing
	WriteCall((void*)0x5AD478, RenderWaterThing);
	WriteCall((void*)0x5AD4BF, RenderWaterThing);
	WriteCall((void*)0x5AD506, RenderWaterThing);
	WriteCall((void*)0x5AD54D, RenderWaterThing);
	WriteData((LandTable**)0x97DB88, &landtable_0001970C);
	WriteData((LandTable**)0x97DB8C, &landtable_0005277C);
	WriteData((LandTable**)0x97DB90, &landtable_000B0DA4);
	//Texlists
	ResizeTextureList((NJS_TEXLIST*)0x180DFF4, textures_shelter1);
	ResizeTextureList((NJS_TEXLIST*)0x17F56F4, textures_shelter2);
	ResizeTextureList((NJS_TEXLIST*)0x17F4F74, textures_shelter3);
	if (DLLLoaded_Lantern)
	{
		if (set_alpha_reject != nullptr) material_register(DisableAlphaRejection_HotShelter, LengthOfArray(DisableAlphaRejection_HotShelter), &DisableAlphaRejection);
		material_register(LevelSpecular_HotShelter, LengthOfArray(LevelSpecular_HotShelter), &ForceDiffuse0Specular0);
		material_register(ObjectSpecular_HotShelter, LengthOfArray(ObjectSpecular_HotShelter), &ForceDiffuse0Specular1);
		material_register(WhiteDiffuse_HotShelter, LengthOfArray(WhiteDiffuse_HotShelter), &ForceWhiteDiffuse1);
	}
	//Material fixes
	((NJS_MATERIAL*)0x01810150)->attrflags &= ~NJD_FLAG_IGNORE_LIGHT; //Water surface
	((NJS_MATERIAL*)0x0180F608)->attrflags &= ~NJD_FLAG_IGNORE_LIGHT; //Water surface
	((NJS_MATERIAL*)0x0180FA60)->attrflags &= ~NJD_FLAG_IGNORE_LIGHT; //Water surface
	((NJS_MATERIAL*)0x0180FBE8)->attrflags &= ~NJD_FLAG_IGNORE_LIGHT; //Water surface
	((NJS_MATERIAL*)0x0180FCF4)->attrflags &= ~NJD_FLAG_IGNORE_LIGHT; //Water surface
	((NJS_MATERIAL*)0x0180EED8)->attrflags &= ~NJD_FLAG_IGNORE_LIGHT; //Water surface
	((NJS_MATERIAL*)0x0180F824)->attrflags &= ~NJD_FLAG_IGNORE_LIGHT; //Water surface
	((NJS_MATERIAL*)0x0182E080)->attrflags |= NJD_FLAG_IGNORE_LIGHT; //KaitenMeter
	((NJS_MATERIAL*)0x0182E080)->diffuse.color = 0x00000000; //KaitenMeter
	//Object replacements
	WriteCall((void*)0x5A8FE1, RenderSuimen); //Fix Suimen flickering
	WriteCall((void*)0x59D444, RenderOHikari); //Add back OHikari green light
	*(NJS_OBJECT*)0x180391C = objectSTG12_0016F268; //Colored cube 1
	*(NJS_OBJECT*)0x1804CD4 = objectSTG12_00170054; //Colored cube 2
	*(NJS_OBJECT*)0x180608C = objectSTG12_00170E40; //Colored cube 3
	*(NJS_OBJECT*)0x1807444 = objectSTG12_00171C2C; //Colored cube 4
	*(NJS_OBJECT*)0x018136AC = objectSTG12_0010A8AC; //Bathroom door
	*(NJS_OBJECT*)0x0185A974 = objectSTG12_00148A44; //O Computer
	*(NJS_OBJECT*)0x18608A4 = objectSTG12_0014D13C; //Broken wall (full)
	*(NJS_OBJECT*)0x1862834 = objectSTG12_0014E514; //Broken wall (broken)
	*(NJS_OBJECT*)0x185F280 = objectSTG12_0014C23C; //Broken wall (pieces)
	*(NJS_OBJECT*)0x1812D34 = objectSTG12_00109F58; //Egghead door 1
	*(NJS_OBJECT*)0x184C22C = objectSTG12_0013CDD4; //Egghead door 2 part 1
	*(NJS_OBJECT*)0x184BA64 = objectSTG12_0013C6AC; //Egghead door 2 part 2
	*(NJS_OBJECT*)0x1851CA4 = objectSTG12_00140EBC; //Elevator
	*(NJS_OBJECT*)0x0187201C = objectSTG12_0015CC48; //Light
	*(NJS_OBJECT*)0x0186FC1C = objectSTG12_0146FC1C; //OKaitenashiba
	*(NJS_MODEL_SADX*)0x0183C594 = attachSTG12_0012AB9C; // Bridge
	((NJS_MATERIAL*)0x018136E0)->diffuse.color = 0xFFB2B2B2; //OUkijima material colors
	((NJS_MATERIAL*)0x018136F4)->diffuse.color = 0xFFB2B2B2; //OUkijima material colors
	((NJS_MATERIAL*)0x01813708)->diffuse.color = 0xFFB2B2B2; //OUkijima material colors
	//Fog/draw distance data
	for (unsigned int i = 0; i < 3; i++)
	{
		DrawDist_HotShelter1[i].Maximum = -3000.0;
		DrawDist_HotShelter2[i].Maximum = -3000.0;
		FogData_HotShelter1[i].Color = 0xFF000000;
		FogData_HotShelter1[i].Layer = 600.0f;
		FogData_HotShelter1[i].Distance = 1500.0f;
		FogData_HotShelter2[i].Color = 0xFF000000;
		FogData_HotShelter2[i].Toggle = 1;
		FogData_HotShelter2[i].Layer = 800.0f;
		FogData_HotShelter2[i].Distance = 2000.0f;
		FogData_HotShelter3[i].Color = 0xFF000000;
		FogData_HotShelter3[i].Toggle = 1;
		FogData_HotShelter3[i].Layer = 500.0f;
		FogData_HotShelter3[i].Distance = 1800.0f;
	}
}

void HotShelter_OnFrame()
{
	{
		if (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21) ReduceHotShelterFog = false;
		//Fog in E105 room
		if (CurrentLevel == 12 && CurrentAct == 2 && GameState != 16)
		{
			if (ReduceHotShelterFog == true)
			{
				if (CurrentFogDist < 6000) CurrentFogDist = CurrentFogDist + 32.0f;
				if (CurrentFogLayer < 2000) CurrentFogLayer = CurrentFogLayer + 16.0f;
			}
		}
		if (CurrentLevel == 12 && CurrentAct == 0 && GameState != 16)
		{
			//Waterfall UVs
			if (HotShelterWaterThing < 65.0f && HotShelterWaterThing > 0.0f)
			{
				WaterThing_VShift = (WaterThing_VShift - 16 * FramerateSetting) % 255;
				for (int i = 0; i < 56; i++)
				{
					uvSTG12_014107E0[i].v = uvSTG12_014107E0_0[i].v + WaterThing_VShift;
				}
				for (int i = 0; i < 20; i++)
				{
					uvSTG12_01410790[i].v = uvSTG12_01410790_0[i].v + WaterThing_VShift * 2;
				}
			}
		}
	}
}