#include "stdafx.h"
#include <SADXModLoader.h>
#include <lanternapi.h>
#include "textures.h"
#include "SS_Objects.h"
#include "ADVSS00(CityHall).h"
#include "ADVSS01(CasinoArea).h"
#include "ADVSS02(Sewers).h"
#include "ADVSS03Fixes.h"
#include "ADVSS03(StationMainArea).h"
#include "ADVSS04Collision.h"
#include "ADVSS04(Hotel).h"
#include "ADVSS05(TwinkleParkEntrance).h"
#include "NPCMaterials.h"
#include <IniFile.hpp>
#include "DC_Levels.h"

static int anim1 = 46;
static int anim2 = 183;
static int anim3 = 29;
static int anim4 = 59;
static int anim5 = 60;
static int anim6 = 219;
static int anim7 = 120;
static int anim_sadx = 268;
static int anim_sadx2 = 123;
static bool SADXStyleWater = false;

DataPointer(int, FramerateSetting, 0x0389D7DC);
DataPointer(int, DroppedFrames, 0x03B1117C);
DataPointer(int, CutsceneID, 0x3B2C570);
DataArray(FogData, StationSquare1Fog, 0x02AA3D10, 3);
DataArray(FogData, StationSquare2Fog, 0x02AA3D40, 3);
DataArray(FogData, StationSquare3Fog, 0x02AA3D70, 3);
DataArray(FogData, StationSquare4Fog, 0x02AA3DA0, 3);
DataArray(FogData, StationSquare5Fog, 0x02AA3DD0, 3);
DataArray(FogData, StationSquare6Fog, 0x02AA3E00, 3);
DataArray(DrawDistance, StationSquare6DrawDist, 0x02AA3CF8, 3);
FunctionPointer(void, sub_405470, (NJS_ACTION *a1, float a2, int a3), 0x405470);
FunctionPointer(void, sub_405450, (NJS_ACTION *a1, float frame, float scale), 0x405450);
FunctionPointer(void, sub_409E70, (NJS_MODEL_SADX *model, int blend, float scale), 0x409E70);

void __cdecl WaterTexture()
{
	if (CurrentAct == 4 && GetTimeOfDay() != 1) njSetTextureNum(119);
	if (CurrentAct == 4 && GetTimeOfDay() == 1) njSetTextureNum(122);
	if (CurrentAct == 3 && GetTimeOfDay() == 1) njSetTextureNum(267);
	if (CurrentAct == 3 && GetTimeOfDay() != 1) njSetTextureNum(266);
}

int __cdecl CheckIfCameraIsInHotel_Lol()
{
	int result; // eax@3
	int v1; // eax@8
	result = 0;
	return result;
}

void __cdecl SSWater()
{
	if (CurrentAct == 3)
	{
		if (!DroppedFrames)
		{
			njSetTexture(&texlist_advss03); //Act 3
			njPushMatrix(0);
			njTranslate(0, 0, 0, 0);
			ProcessModelNode_AB_Wrapper(&objectADV00_00114E50Z, 1.0f);
			njPopMatrix(1u);
		}
	}
}

NJS_MATERIAL* CharacterStuff[] = {
	&matlistADV00_0000DE08[0],
};

NJS_MATERIAL* WhiteDiffuseADV00[] = {
	//Helicopter
	&matlistADV00_0000E238[0],
	&matlistADV00_0000E238[1],
	//Police car in cutscene
	((NJS_MATERIAL*)0x02DBE574),
	((NJS_MATERIAL*)0x02DBE588),
	((NJS_MATERIAL*)0x02DBE59C),
	//Level stuff
	&matlistADV00_0008E8EC[3],
	&matlistADV00_0008E8EC[4],
	&matlistADV00_0008E8EC[5],
	&matlistADV00_0008E8EC[6],
	&matlistADV00_0008E8EC[7],
	&matlistADV00_00082400[1],
	&matlistADV00_00082400[2],
	&matlistADV00_000D8D58[0],
	&matlistADV00_000D8D58[1],
	&matlistADV00_000D8D58[2],
	&matlistADV00_000D8D58[3],
	&matlistADV00_000D8D58[4],
	&matlistADV00_000D8D58[5],
	&matlistADV00_000D8D58[6],
	&matlistADV00_000D8D58[7],
	&matlistADV00_000D8D58[8],
	&matlistADV00_000D8D58[9],
	&matlistADV00_00190C2C[8], //Train
};

NJS_MATERIAL* WhiteDiffuseADV00_Night[] = {
	&matlistADV00_00126720[2],
	&matlistADV00_00126720[2],
	&matlistADV00_00125F20[2],
	&matlistADV00_00125408[1],
};

NJS_MATERIAL* ObjectSpecularADV00[] = {
	//OTWADoor
	((NJS_MATERIAL*)0x02AB5180),
	((NJS_MATERIAL*)0x02AB5194),
	((NJS_MATERIAL*)0x02AB51A8),
	((NJS_MATERIAL*)0x02AB4F08),
	((NJS_MATERIAL*)0x02AB4F1C),
	((NJS_MATERIAL*)0x02AB4F30),
	((NJS_MATERIAL*)0x02AB4C8C),
	((NJS_MATERIAL*)0x02AB4CA0),
	((NJS_MATERIAL*)0x02AB4CB4),
	//OPoolChair
	((NJS_MATERIAL*)0x02ACAF88),
	((NJS_MATERIAL*)0x02ACAF9C),
	((NJS_MATERIAL*)0x02ACAFB0),
	((NJS_MATERIAL*)0x02ACAFC4),
	((NJS_MATERIAL*)0x02ACAFD8),
	((NJS_MATERIAL*)0x02ACAFEC),
	//Station door
	((NJS_MATERIAL*)0x02AC60D0),
	((NJS_MATERIAL*)0x02AC60E4),
	((NJS_MATERIAL*)0x02AC60F8),
	((NJS_MATERIAL*)0x02AC610C),
	((NJS_MATERIAL*)0x02AC6120),
	((NJS_MATERIAL*)0x02AC6134),
	((NJS_MATERIAL*)0x02AC6AD8),
	((NJS_MATERIAL*)0x02AC6AEC),
	((NJS_MATERIAL*)0x02AC6B00),
	((NJS_MATERIAL*)0x02AC6B14),
	((NJS_MATERIAL*)0x02AC6B28),
	((NJS_MATERIAL*)0x02AC6B3C),
	//Burger shop door
	((NJS_MATERIAL*)0x02AB0310),
	((NJS_MATERIAL*)0x02AB0324),
	((NJS_MATERIAL*)0x02AB0338),
	((NJS_MATERIAL*)0x02AB034C),
	((NJS_MATERIAL*)0x02AAF590),
	((NJS_MATERIAL*)0x02AAF5A4),
	((NJS_MATERIAL*)0x02AAF5B8),
	((NJS_MATERIAL*)0x02AAF5CC),
};

NJS_MATERIAL* LevelSpecularADV00[] = {
	//Burger shop door
	((NJS_MATERIAL*)0x02AB1068),
	((NJS_MATERIAL*)0x02AB107C),
	//Casino stuff
	((NJS_MATERIAL*)0x02B02B18),
	((NJS_MATERIAL*)0x02B02B2C),
	((NJS_MATERIAL*)0x02B02B40),
	((NJS_MATERIAL*)0x02B03358),
	((NJS_MATERIAL*)0x02B0336C),
	((NJS_MATERIAL*)0x02B03380),
	((NJS_MATERIAL*)0x02B03394),
	((NJS_MATERIAL*)0x02B033A8),
	((NJS_MATERIAL*)0x02B00C48),
	((NJS_MATERIAL*)0x02B009B8),
	((NJS_MATERIAL*)0x02B009CC),
	((NJS_MATERIAL*)0x02B009E0),
	((NJS_MATERIAL*)0x02B00728),
	((NJS_MATERIAL*)0x02B0073C),
	((NJS_MATERIAL*)0x02B00750),
	((NJS_MATERIAL*)0x02B00498),
	((NJS_MATERIAL*)0x02B004AC),
	((NJS_MATERIAL*)0x02B004C0),
	((NJS_MATERIAL*)0x02B00208),
	((NJS_MATERIAL*)0x02B0021C),
	((NJS_MATERIAL*)0x02B00230),
	((NJS_MATERIAL*)0x02AFFF78),
	((NJS_MATERIAL*)0x02AFFF8C),
	((NJS_MATERIAL*)0x02AFFFA0),
	((NJS_MATERIAL*)0x02AFFCE8),
	((NJS_MATERIAL*)0x02AFFCFC),
	((NJS_MATERIAL*)0x02AFFD10),
	((NJS_MATERIAL*)0x02AFFA58),
	((NJS_MATERIAL*)0x02AFFA6C),
	((NJS_MATERIAL*)0x02AFFA80),
	((NJS_MATERIAL*)0x02AFF7C8),
	((NJS_MATERIAL*)0x02AFF7DC),
	((NJS_MATERIAL*)0x02AFF7F0),
	((NJS_MATERIAL*)0x02AFF538),
	((NJS_MATERIAL*)0x02AFF54C),
	((NJS_MATERIAL*)0x02AFF560),
	((NJS_MATERIAL*)0x02AFF2A8),
	((NJS_MATERIAL*)0x02AFF2BC),
	((NJS_MATERIAL*)0x02AFF2D0),
};

void FixPoliceCar(NJS_ACTION *a1, float a2, int a3)
{
	NJS_ACTION a4;
	sub_405450(a1, a2, a3);
	if (a1->object->basicdxmodel->mats[6].attr_texId == 16)
	{
		a4.motion = a1->motion;
		a4.object = &objectADV00_0019F390_2;
		sub_405450(&a4, a2, a3);
	}
}

void RenderPoliceCarBarricade(NJS_OBJECT *obj, float scale)
{
	ProcessModelNode_AB_Wrapper(obj, scale);
	ProcessModelNode(&objectADV00_0019F390_2, (QueuedModelFlagsB)1, scale);
}

void RenderOfficeDoor(NJS_MODEL_SADX *a1, float scale)
{
	DrawQueueDepthBias = -2000.0f;
	DrawModel_Queue(a1, QueuedModelFlagsB_EnableZWrite);
}

void RenderOfficeDoor_Child(NJS_MODEL_SADX *a1, float scale)
{
	DrawQueueDepthBias = -3000.0f;
	DrawModel_Queue(a1, QueuedModelFlagsB_EnableZWrite);
}

void RenderPoolChair(NJS_MODEL_SADX *a1, int a2, float a3)
{
	sub_409E70(&attach_00182AB0, a2, a3);
	DrawQueueDepthBias = 1000.0f;
	ProcessModelNode(&object_00182AD8_2, QueuedModelFlagsB_EnableZWrite, 1.0f);
	DrawQueueDepthBias = 1100.0f;
	ProcessModelNode(&object_00182AD8_3, QueuedModelFlagsB_EnableZWrite, 1.0f);
	DrawQueueDepthBias = 1200.0f;
	ProcessModelNode(&object_00182AD8_4, QueuedModelFlagsB_EnableZWrite, 1.0f);
	DrawQueueDepthBias = 0.0f;
}

void ADV00_Init(const char *path, const HelperFunctions &helperFunctions)
{
	char pathbuf[MAX_PATH];
	ReplaceBIN_DC("SETSS00A");
	ReplaceBIN_DC("SETSS00B");
	ReplaceBIN_DC("SETSS00E");
	ReplaceBIN_DC("SETSS00K");
	ReplaceBIN_DC("SETSS00L");
	ReplaceBIN_DC("SETSS00M");
	ReplaceBIN_DC("SETSS00S");
	ReplaceBIN_DC("SETSS01A");
	ReplaceBIN_DC("SETSS01B");
	ReplaceBIN_DC("SETSS01E");
	ReplaceBIN_DC("SETSS01K");
	ReplaceBIN_DC("SETSS01L");
	ReplaceBIN_DC("SETSS01M");
	ReplaceBIN_DC("SETSS01S");
	ReplaceBIN_DC("SETSS02S");
	ReplaceBIN_DC("SETSS02B");
	ReplaceBIN_DC("SETSS03A");
	ReplaceBIN_DC("SETSS03B");
	ReplaceBIN_DC("SETSS03E");
	ReplaceBIN_DC("SETSS03K");
	ReplaceBIN_DC("SETSS03L");
	ReplaceBIN_DC("SETSS03M");
	ReplaceBIN_DC("SETSS03S");
	ReplaceBIN_DC("SETSS04A");
	ReplaceBIN_DC("SETSS04B");
	ReplaceBIN_DC("SETSS04E");
	ReplaceBIN_DC("SETSS04K");
	ReplaceBIN_DC("SETSS04L");
	ReplaceBIN_DC("SETSS04M");
	ReplaceBIN_DC("SETSS04S");
	ReplaceBIN_DC("SETSS05S");
	if (EnableSETFixes == 1)
	{
		AddSETFix("SETSS00A");
		AddSETFix("SETSS00B");
		AddSETFix("SETSS00E");
		AddSETFix("SETSS00K");
		AddSETFix("SETSS00L");
		AddSETFix("SETSS00M");
		AddSETFix("SETSS00S");
		AddSETFix("SETSS01A");
		AddSETFix("SETSS01B");
		AddSETFix("SETSS01E");
		AddSETFix("SETSS01K");
		AddSETFix("SETSS01L");
		AddSETFix("SETSS01M");
		AddSETFix("SETSS01S");
		AddSETFix("SETSS02S");
		AddSETFix("SETSS03A");
		AddSETFix("SETSS03B");
		AddSETFix("SETSS03E");
		AddSETFix("SETSS03K");
		AddSETFix("SETSS03L");
		AddSETFix("SETSS03M");
		AddSETFix("SETSS03S");
		AddSETFix("SETSS04A");
		AddSETFix("SETSS04B");
		AddSETFix("SETSS04E");
		AddSETFix("SETSS04K");
		AddSETFix("SETSS04L");
		AddSETFix("SETSS04M");
		AddSETFix("SETSS04S");
		AddSETFix("SETSS05S");
	}
	if (EnableSETFixes == 2)
	{
		AddSETFix_Extra("SETSS00A");
		AddSETFix_Extra("SETSS00B");
		AddSETFix_Extra("SETSS00E");
		AddSETFix_Extra("SETSS00K");
		AddSETFix_Extra("SETSS00L");
		AddSETFix_Extra("SETSS00M");
		AddSETFix_Extra("SETSS00S");
		AddSETFix_Extra("SETSS01A");
		AddSETFix_Extra("SETSS01B");
		AddSETFix_Extra("SETSS01E");
		AddSETFix_Extra("SETSS01K");
		AddSETFix_Extra("SETSS01L");
		AddSETFix_Extra("SETSS01M");
		AddSETFix_Extra("SETSS01S");
		AddSETFix_Extra("SETSS02S");
		AddSETFix_Extra("SETSS03A");
		AddSETFix_Extra("SETSS03B");
		AddSETFix_Extra("SETSS03E");
		AddSETFix_Extra("SETSS03K");
		AddSETFix_Extra("SETSS03L");
		AddSETFix_Extra("SETSS03M");
		AddSETFix_Extra("SETSS03S");
		AddSETFix_Extra("SETSS04A");
		AddSETFix_Extra("SETSS04B");
		AddSETFix_Extra("SETSS04E");
		AddSETFix_Extra("SETSS04K");
		AddSETFix_Extra("SETSS04L");
		AddSETFix_Extra("SETSS04M");
		AddSETFix_Extra("SETSS04S");
		AddSETFix_Extra("SETSS05S");
	}
	if (DLLLoaded_DLCs == false)
	{
		ReplaceBIN_DC("CAMSS00S");
		ReplaceBIN_DC("CAMSS01S");
		ReplaceBIN_DC("CAMSS02S");
		ReplaceBIN_DC("CAMSS03S");
		ReplaceBIN_DC("CAMSS04S");
		ReplaceBIN_DC("CAMSS05S");
	}
	ReplacePVM("ADVSS00");
	ReplacePVM("ADVSS01");
	ReplacePVM("ADVSS05");
	ReplacePVM("OBJ_SS");
	ReplacePVM("SS_BG");
	ReplacePVM("SS_BOAT");
	ReplacePVM("SS_BURGER");
	ReplacePVM("SS_CASINO");
	ReplacePVM("SS_DENTOU");
	ReplacePVM("SS_EKIIN");
	ReplacePVM("SS_KANBAN");
	ReplacePVM("SS_MIZUGI");
	ReplacePVM("SS_PEOPLE");
	ReplacePVM("SS_TRAIN");
	ReplacePVM("SS_TWINS");
	ReplacePVM("SSCAR");
	ReplacePVM("SSPATCAR_BODY");
	ReplacePVR("SS_FINESKY");
	ReplacePVR("SS_NIGHTSKY");
	ReplacePVR("SS_NIGHTSKYB");
	ReplacePVR("SS_YUSKAY_MINI");
	const IniFile *config = new IniFile(std::string(path) + "\\config.ini");
	SADXStyleWater = config->getBool("SADX Style Water", "StationSquare", false);
	delete config;
	if (SADXStyleWater == true)
	{
		ReplacePVMX_SADXStyleWater("ADVSS02");
		ReplacePVMX_SADXStyleWater("ADVSS03");
		ReplacePVMX_SADXStyleWater("ADVSS04");
	}
	else
	{
		ReplacePVM("ADVSS02");
		ReplacePVM("ADVSS03");
		ReplacePVM("ADVSS04");
	}
	WriteCall((void*)0x00636DE9, RenderOfficeDoor);
	WriteCall((void*)0x00636E99, RenderOfficeDoor);
	WriteCall((void*)0x00636F0B, RenderOfficeDoor);
	WriteCall((void*)0x00636E1A, RenderOfficeDoor_Child);
	WriteCall((void*)0x00636E52, RenderOfficeDoor_Child);
	WriteCall((void*)0x00636EC0, RenderOfficeDoor_Child);
	WriteCall((void*)0x00636F32, RenderOfficeDoor_Child);
	WriteCall((void*)0x00638B2E, RenderPoliceCarBarricade);
	WriteCall((void*)0x00638B50, RenderPoliceCarBarricade);
	WriteCall((void*)0x00632773, FixPoliceCar);
	//Fix camera in Light Speed Shoes cutscene
	WriteData((float*)0x00652F74, 800.0f); //X1
	WriteData((float*)0x00652F79, -92.6f); //Y1
	WriteData((float*)0x006532BB, 509.9f); //X2
	WriteData((float*)0x006532B6, -89.4f); //Y2
	WriteData((float*)0x006532B1, 812.3f); //Z2
	if (DLLLoaded_Lantern == true)
	{
		material_register(CharacterStuff, LengthOfArray(CharacterStuff), &ForceDiffuse2Specular2);
		material_register(LevelSpecularADV00, LengthOfArray(LevelSpecularADV00), &ForceDiffuse0Specular0);
		material_register(ObjectSpecularADV00, LengthOfArray(ObjectSpecularADV00), &ForceDiffuse0Specular1);
		material_register(WhiteDiffuseADV00, LengthOfArray(WhiteDiffuseADV00), &ForceWhiteDiffuse1);
		material_register(WhiteDiffuseADV00_Night, LengthOfArray(WhiteDiffuseADV00_Night), &ForceWhiteDiffuse3_Night);
		material_register(NPCMaterials, LengthOfArray(NPCMaterials), &NPCModelsFunction);
	}
	if (SADXStyleWater == true)
	{
		WriteCall((void*)0x006312BB, WaterTexture);
		matlistADV00_00123C24[0].attrflags |= NJD_FLAG_USE_ALPHA;
		matlistADV00_00122894_2[0].attrflags |= NJD_FLAG_USE_ALPHA;
		matlistADV00_00133D3C[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		collist_000DA99C[LengthOfArray(collist_000DA99C) - 11].Flags = 0x80000000; //SADX sea bottom
		meshlistADV00_00114DB0[0].vertcolor = vcolor_0015EFF0; //SADX sea bottom
		meshlistADV00_00151E84[0].vertcolor = vcolor_001B6370; //SADX sea bottom (hotel)
		collist_000DA99C[LengthOfArray(collist_000DA99C) - 3].Flags = 0x00000002; //Sewers water
		matlistADV00_000D9890[0].diffuse.color = 0xD2B2B2B2;
		matlistADV00_0014B314[0].attr_texId = 65;
		matlistADV00_0014BED8[0].attr_texId = 65;
		matlistADV00_00151E54[0].attr_texId = 59;
		matlistADV00_001566E4[0].attr_texId = 65;
		matlistADV00_00151E54[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		matlistADV00_001566E4[0].diffuse.argb.a = 0;
		objectADV00_00151F24.pos[1] = -29.5f;
		ResizeTextureList(&texlist_advss03, 283);
		ResizeTextureList(&texlist_advss04, 138);
		WriteData((int*)0x006311BB, 268);
		WriteData((int*)0x006311D9, 266);
		WriteData((int*)0x006311D2, 267);
	}
	else
	{
		WriteJump((void*)0x631140, SSWater);
		matlistADV00_00123C24[0].attrflags |= NJD_FLAG_USE_ALPHA;
		matlistADV00_00122894_2[0].attrflags |= NJD_FLAG_USE_ALPHA;
		matlistADV00_00133D3C[0].attrflags |= NJD_FLAG_USE_ALPHA;
		collist_000DA99C[LengthOfArray(collist_000DA99C) - 11].Flags = 0x00000000; //SADX sea bottom
		meshlistADV00_00114DB0[0].vertcolor = NULL; //SADX sea bottom
		meshlistADV00_00151E84[0].vertcolor = NULL; //SADX sea bottom (hotel)
		collist_000DA99C[LengthOfArray(collist_000DA99C) - 3].Flags = 0x80000002; //Sewers water
		matlistADV00_000D9890[0].diffuse.color = 0xB2B2B2B2;
		matlistADV00_0014B314[0].attr_texId = 78;
		matlistADV00_0014BED8[0].attr_texId = 78;
		matlistADV00_00151E54[0].attr_texId = 78;
		matlistADV00_001566E4[0].attr_texId = 78;
		matlistADV00_00151E54[0].attrflags |= NJD_FLAG_USE_ALPHA;
		matlistADV00_001566E4[0].diffuse.argb.a = 0xB2;
		objectADV00_00151F24.pos[1] = -13;
	}
	WriteData<4>((void*)0x00630AE0, 0x90); //Hotel door fix
	WriteJump((void*)0x0062EA30, CheckIfCameraIsInHotel_Lol); //Hotel lighting
	ResizeTextureList((NJS_TEXLIST*)0x2AD9F58, 31); //SS_TRAIN
	//Material stuff
	((NJS_OBJECT*)0x02AB757C)->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_USE_ALPHA; //Speed Highway elevator door
	((NJS_OBJECT*)0x02AB6E4C)->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_USE_ALPHA; //Speed Highway elevator door
	//Objects
	*(NJS_OBJECT*)0x2AB2CCC = objectADV00_001689C4; //Shop 2 door
	((NJS_ACTION*)0x2AB2D9C)->object = &objectADV00_001689C4; //Shop 2 door
	WriteCall((void*)0x0063A6A4, RenderPoolChair); // Pool chair
	*(NJS_OBJECT*)0x02DBD6D0 = objectADV00_00011208; // Event helicopter
	*(NJS_OBJECT*)0x02AD4EA4 = objectADV00_00186E88; // Hidden door 1
	*(NJS_OBJECT*)0x02AD4CD4 = objectADV00_00186CC4; // Hidden door 2
	*(NJS_OBJECT*)0x02AEE7B0 = objectADV00_0019AF04; // Boat
	*(NJS_OBJECT*)0x02AAB0E4 = objectADV00_00164444; // Hotel door 1
	*(NJS_OBJECT*)0x02AAE0BC = objectADV00_00164444; // Hotel door 2
	*(NJS_MODEL_SADX*)0x02AC9EE4 = attachADV00_0017DDC0; // Lamp pole
	*(NJS_MODEL_SADX*)0x02AC9840 = attachADV00_0017D7A8; // Lamp pole
	*(NJS_OBJECT*)0x02ABDF0C = objectADV00_00172BD4; // Box in the sewers
	*(NJS_OBJECT*)0x02AE8674 = objectADV00_00195DC0; // SS train
	*(NJS_OBJECT*)0x02AF4FC0 = objectADV00_0019F390; // SS Police
	*(NJS_OBJECT*)0x02AF1974 = objectADV00_0019CBD8; // SS Red Car
	*(NJS_OBJECT*)0x02AF8400 = objectADV00_001A17C4; // SS Blue Car
	*(NJS_OBJECT*)0x02AFBA64 = objectADV00_001A4268; // SS Taxi
	*(NJS_OBJECT*)0x02AD362C = objectADV00_00185A20; // SS Twinkle Park Ball
	*(NJS_OBJECT*)0x02AB6900 = objectADV00_0016C3FC; // SS Twinkle Park Elevator
	*(NJS_OBJECT*)0x02AD14C8 = objectADV00_00183B8C; // Gamma's target (O M Saku)
	*(NJS_MODEL_SADX*)0x02AC95BC = attachADV00_0017D540; // Fire Extinguisher
	*(NJS_OBJECT*)0x02AD484C = objectADV00_0018684C; // Ice Key 1
	//Landtables
	HMODULE handle = GetModuleHandle(L"ADV00MODELS");
	NJS_TEXLIST **___ADV00_TEXLISTS = (NJS_TEXLIST **)GetProcAddress(handle, "___ADV00_TEXLISTS");
	LandTable **___LANDTABLESS = (LandTable **)GetProcAddress(handle, "___LANDTABLESS");
	___LANDTABLESS[0] = &landtable_000157F4;
	___LANDTABLESS[1] = &landtable_000738F4;
	___LANDTABLESS[2] = &landtable_000C21F0;
	___LANDTABLESS[3] = &landtable_000DCEBC;
	___LANDTABLESS[4] = &landtable_00135A90;
	___LANDTABLESS[5] = &landtable_001573CC;
	___ADV00_TEXLISTS[0] = &texlist_advss00;
	___ADV00_TEXLISTS[1] = &texlist_advss01;
	___ADV00_TEXLISTS[2] = &texlist_advss02;
	___ADV00_TEXLISTS[3] = &texlist_advss03;
	___ADV00_TEXLISTS[4] = &texlist_advss04;
	___ADV00_TEXLISTS[5] = &texlist_advss05;
	//Fog data
	for (int i = 0; i < 3; i++)
	{
		StationSquare1Fog[i].Toggle = 1;
		StationSquare2Fog[i].Toggle = 1;
		StationSquare3Fog[i].Toggle = 1;
		StationSquare4Fog[i].Toggle = 1;
		StationSquare5Fog[i].Toggle = 1;
		StationSquare6Fog[i].Toggle = 1;
		StationSquare1Fog[i].Distance = -12000.0f;
		StationSquare2Fog[i].Distance = -12000.0f;
		StationSquare3Fog[i].Distance = -12000.0f;
		StationSquare4Fog[i].Distance = -12000.0f;
		StationSquare5Fog[i].Distance = -12000.0f;
		StationSquare6Fog[i].Distance = -12000.0f;
		StationSquare1Fog[i].Layer = -12000.0f;
		StationSquare2Fog[i].Layer = -12000.0f;
		StationSquare3Fog[i].Layer = -12000.0f;
		StationSquare4Fog[i].Layer = -12000.0f;
		StationSquare5Fog[i].Layer = -12000.0f;
		StationSquare6Fog[i].Layer = -12000.0f;
		StationSquare6DrawDist[i].Maximum = -600.0f;
	}
}

void ADV00_OnFrame()
{
	auto CharObj1PtrsThing = EntityData1Ptrs[0];
	if (CurrentLevel == 26 && GetTimeOfDay() == 0) WriteData<1>((void*)0x0063A906, 0x01); else WriteData<1>((void*)0x0063A906, 0x05);
	//Act 2 (Sewers)
	if (CurrentLevel == 26 && CurrentAct == 2)
	{
		//Fix Sonic's rotation in the Light Speed Shoes cutscene
		if (CharObj1PtrsThing != nullptr && EV_MainThread_ptr != nullptr && CutsceneID == 358)
		{
			CharObj1PtrsThing->Rotation.x = 0;
			CharObj1PtrsThing->Rotation.z = 0;
			CharObj1PtrsThing->Rotation.y = 49072;
		}
		//Water animation
		if (GameState != 16)
		{
			if (anim1 > 55) anim1 = 46;
			matlistADV00_000D9890[0].attr_texId = anim1;
			matlistADV00_000C24BC[0].attr_texId = anim1;
			if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2) anim1++;
		}
	}
	//Night reflections Act 0
	if (CurrentLevel == 26 && CurrentAct == 0 && GetTimeOfDay() == 2)
	{
		matlistADV00_0003B3C4[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0003AFD4[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000522AC[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0004D3FC[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0004F4B4[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0004F4B4[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0004F4B4[4].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000642F8[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00059BFC[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000638C4[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00066CF0[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00066CF0[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00066CF0[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		attachADV00_0017D7A8.mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00031C48[3].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00030274[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00022CC0[5].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00022CC0[12].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00025990[5].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0001E1DC[4].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0001E1DC[5].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000285A0[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0002C924[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0002C2BC[4].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00052FA8[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000483CC[3].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00042DBC[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0005AB04[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0005F744[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00061B50[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0005C6C4[4].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000309E0[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000309E0[3].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000309E0[4].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000309E0[6].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00046404[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00046404[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000631AC[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000631AC[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000631AC[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00063748[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00021684[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000203BC[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0002B718[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0002F984[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0003B3C4[1].attr_texId = 207;
		matlistADV00_0003BBA4[1].attr_texId = 207;
		matlistADV00_0003BF94[1].attr_texId = 207;
		matlistADV00_0003C384[1].attr_texId = 207;
		matlistADV00_0003AFD4[1].attr_texId = 207;
		matlistADV00_0003B7B4[1].attr_texId = 207;
		matlistADV00_0003BBA4[1].attr_texId = 207;
		matlistADV00_000631AC[2].attr_texId = 207;
		matlistADV00_00046404[0].attr_texId = 209;
		matlistADV00_00046404[1].attr_texId = 209;
		matlistADV00_0007C240[0].attr_texId = 209;
		matlistADV00_0007C240[1].attr_texId = 209;
		matlistADV00_0002B718[0].attr_texId = 211;
		matlistADV00_0002F984[0].attr_texId = 211;
		matlistADV00_000631AC[0].attr_texId = 213;
		matlistADV00_00063748[0].attr_texId = 213;
		matlistADV00_000203BC[0].attr_texId = 215;
		matlistADV00_00021684[0].attr_texId = 217;
		matlistADV00_000631AC[1].attr_texId = 219;
	}

	//Evening reflections Act 0
	if (CurrentLevel == 26 && CurrentAct == 0 && GetTimeOfDay() == 1)
	{
		matlistADV00_0003B3C4[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0003AFD4[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000522AC[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0004D3FC[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0004F4B4[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0004F4B4[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0004F4B4[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000642F8[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00059BFC[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000638C4[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00066CF0[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00066CF0[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00066CF0[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00031C48[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00030274[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00022CC0[5].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00022CC0[12].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00025990[5].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0001E1DC[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0001E1DC[5].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000285A0[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0002C924[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0002C2BC[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00052FA8[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000483CC[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00042DBC[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0005AB04[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0005F744[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00061B50[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0005C6C4[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000309E0[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000309E0[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000309E0[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000309E0[6].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00046404[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00046404[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000631AC[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000631AC[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000631AC[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00063748[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00021684[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000203BC[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0002B718[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0002F984[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0003B3C4[1].attr_texId = 206;
		matlistADV00_0003BBA4[1].attr_texId = 206;
		matlistADV00_0003BF94[1].attr_texId = 206;
		matlistADV00_0003C384[1].attr_texId = 206;
		matlistADV00_0003AFD4[1].attr_texId = 206;
		matlistADV00_0003B7B4[1].attr_texId = 206;
		matlistADV00_0003BBA4[1].attr_texId = 206;
		matlistADV00_000631AC[2].attr_texId = 206;
		matlistADV00_00046404[0].attr_texId = 208;
		matlistADV00_00046404[1].attr_texId = 208;
		matlistADV00_0007C240[0].attr_texId = 208;
		matlistADV00_0007C240[1].attr_texId = 208;
		matlistADV00_0002B718[0].attr_texId = 210;
		matlistADV00_0002F984[0].attr_texId = 210;
		matlistADV00_000631AC[0].attr_texId = 212;
		matlistADV00_00063748[0].attr_texId = 212;
		matlistADV00_000203BC[0].attr_texId = 214;
		matlistADV00_00021684[0].attr_texId = 216;
		matlistADV00_000631AC[1].attr_texId = 218;
	}

	//Day reflections Act 0
	if (CurrentLevel == 26 && CurrentAct == 0 && GetTimeOfDay() == 0)
	{
		matlistADV00_0003B3C4[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0003AFD4[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000522AC[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0004D3FC[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0004F4B4[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0004F4B4[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0004F4B4[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000642F8[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00059BFC[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000638C4[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00066CF0[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00066CF0[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00066CF0[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00031C48[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00030274[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00022CC0[5].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00022CC0[12].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00025990[5].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0001E1DC[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0001E1DC[5].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000285A0[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0002C924[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0002C2BC[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00052FA8[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000483CC[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00042DBC[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0005AB04[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0005F744[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00061B50[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0005C6C4[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000309E0[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000309E0[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000309E0[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000309E0[6].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00046404[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00046404[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000631AC[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000631AC[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000631AC[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00063748[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00021684[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000203BC[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0002B718[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0002F984[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0003B3C4[1].attr_texId = 124;
		matlistADV00_0003BBA4[1].attr_texId = 124;
		matlistADV00_0003BF94[1].attr_texId = 124;
		matlistADV00_0003C384[1].attr_texId = 124;
		matlistADV00_0003AFD4[1].attr_texId = 124;
		matlistADV00_0003B7B4[1].attr_texId = 124;
		matlistADV00_0003BBA4[1].attr_texId = 124;
		matlistADV00_000631AC[2].attr_texId = 124;
		matlistADV00_00046404[0].attr_texId = 145;
		matlistADV00_00046404[1].attr_texId = 145;
		matlistADV00_0007C240[0].attr_texId = 145;
		matlistADV00_0007C240[1].attr_texId = 145;
		matlistADV00_0002B718[0].attr_texId = 69;
		matlistADV00_0002F984[0].attr_texId = 69;
		matlistADV00_000631AC[0].attr_texId = 184;
		matlistADV00_00063748[0].attr_texId = 184;
		matlistADV00_000203BC[0].attr_texId = 36;
		matlistADV00_00021684[0].attr_texId = 39;
		matlistADV00_000631AC[1].attr_texId = 185;
	}

	//Day, Night & Evening textures for Act 1 (Casino)
	if (CurrentLevel == 26 && CurrentAct == 1 && GetTimeOfDay() == 2) matlistADV00_000B59E0[0].attr_texId = 265;
	if (CurrentLevel == 26 && CurrentAct == 1 && GetTimeOfDay() == 1) matlistADV00_000B59E0[0].attr_texId = 264;
	if (CurrentLevel == 26 && CurrentAct == 1 && GetTimeOfDay() == 0) matlistADV00_000B59E0[0].attr_texId = 240;

	//Day, Night & Evening textures for Act 4 (Hotel)
	if (CurrentLevel == 26 && CurrentAct == 4 && GetTimeOfDay() == 2) matlistADV00_00151F58[0].attr_texId = 118;
	if (CurrentLevel == 26 && CurrentAct == 4 && GetTimeOfDay() == 2) matlistADV00_00152110[0].attr_texId = 117;
	if (CurrentLevel == 26 && CurrentAct == 4 && GetTimeOfDay() == 1) matlistADV00_00151F58[0].attr_texId = 116;
	if (CurrentLevel == 26 && CurrentAct == 4 && GetTimeOfDay() == 1) matlistADV00_00152110[0].attr_texId = 115;
	if (CurrentLevel == 26 && CurrentAct == 4 && GetTimeOfDay() == 0) matlistADV00_00151F58[0].attr_texId = 69;
	if (CurrentLevel == 26 && CurrentAct == 4 && GetTimeOfDay() == 0) matlistADV00_00152110[0].attr_texId = 70;

	//Night reflections Act 3 (Main area)
	if (CurrentLevel == 26 && GetTimeOfDay() == 2) attachADV00_0017D7A8.mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
	if (CurrentLevel == 26 && GetTimeOfDay() != 2) attachADV00_0017D7A8.mats[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
	if (CurrentLevel == 26 && CurrentAct == 3 && GetTimeOfDay() == 2)
	{
		matlistADV00_000E4358[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00103FFC[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000FAA28[4].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00129C8C[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00129C8C[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000F4178[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00124B94[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0012A874[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00125F20_2[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00101184_2[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00126720_2[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000E3CC4[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000F5934[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0012BD98[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0012BD98[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0012BD98[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_001163FC[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00115CE0[3].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0011EACC[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0011DEFC[3].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00109760[4].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00109378[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0010956C[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00109CCC[4].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000E4358[8].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000FE7A4[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000FC250[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000F7940[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000F7314[3].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000EF170[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_001129AC[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000F002C[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000F1C08[4].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000F43F0[7].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00104E6C[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00104E6C[3].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00102CD4[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0011ABE0[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0011ABE0[3].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000FA4D4[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000FBD0C[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_001209D8[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000EFA74[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000F062C[5].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00128FA8[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00128FA8[3].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00125408[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00125038[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00129814[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00129814[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00124B94[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000F062C[5].attr_texId = 259;
		matlistADV00_000EF934[0].attr_texId = 259;
		matlistADV00_000FA4D4[0].attr_texId = 263;
		matlistADV00_000FBD0C[0].attr_texId = 261;
		matlistADV00_0011BE68[2].attr_texId = 257;
	}

	//Evening reflections Act 3 (Main area)
	if (CurrentLevel == 26 && CurrentAct == 3 && GetTimeOfDay() == 1)
	{
		matlistADV00_000E4358[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00103FFC[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000FAA28[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00129C8C[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00129C8C[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000F4178[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00124B94[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0012A874[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00125F20_2[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00101184_2[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00126720_2[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000E3CC4[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000F5934[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0012BD98[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0012BD98[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0012BD98[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_001163FC[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00115CE0[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0011EACC[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0011DEFC[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00109760[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00109378[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0010956C[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00109CCC[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000E4358[8].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000FE7A4[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000FC250[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000F7940[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000F7314[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000EF170[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_001129AC[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000F002C[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000F1C08[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000F43F0[7].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00104E6C[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00104E6C[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00102CD4[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0011ABE0[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0011ABE0[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000FA4D4[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000FBD0C[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_001209D8[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000EFA74[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000F062C[5].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00128FA8[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00128FA8[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00125408[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00125038[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00129814[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00129814[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00124B94[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000F062C[5].attr_texId = 258;
		matlistADV00_000EF934[0].attr_texId = 258;
		matlistADV00_000FA4D4[0].attr_texId = 262;
		matlistADV00_000FBD0C[0].attr_texId = 260;
		matlistADV00_0011BE68[2].attr_texId = 256;
	}

	//Day reflections Act 3 (Main area)
	if (CurrentLevel == 26 && CurrentAct == 3 && GetTimeOfDay() == 0)
	{
		matlistADV00_000E4358[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00103FFC[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000FAA28[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00129C8C[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00129C8C[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000F4178[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00124B94[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0012A874[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00125F20_2[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00101184_2[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00126720_2[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000E3CC4[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000F5934[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0012BD98[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0012BD98[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0012BD98[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_001163FC[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00115CE0[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0011EACC[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0011DEFC[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00109760[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00109378[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0010956C[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00109CCC[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000E4358[8].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000FE7A4[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000FC250[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000F7940[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000F7314[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000EF170[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_001129AC[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000F002C[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000F1C08[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000F43F0[7].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00104E6C[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00104E6C[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00102CD4[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0011ABE0[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_0011ABE0[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000FA4D4[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000FBD0C[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_001209D8[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000EFA74[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000F062C[5].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00128FA8[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00128FA8[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00125408[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00125038[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00129814[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00129814[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_00124B94[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		matlistADV00_000EF934[0].attr_texId = 52;
		matlistADV00_000F062C[5].attr_texId = 60;
		matlistADV00_000FA4D4[0].attr_texId = 89;
		matlistADV00_000FBD0C[0].attr_texId = 94;
		matlistADV00_0011BE68[2].attr_texId = 165;
	}

	//Sea animations Act 3 (Main area)
	if (CurrentLevel == 26 && CurrentAct == 3 && GameState != 16)
	{
		if (anim_sadx > 282) anim_sadx = 268;
		if (SADXStyleWater == true) WriteData((int*)0x006311BB, anim_sadx);
		if (anim6 > 227) anim6 = 219;
		if (anim2 > 255) anim2 = 183;
		if (anim2 > 183 && anim2 < 242) anim2 = 242;
		if (anim3 > 241) anim3 = 29;
		if (anim3 > 29 && anim3 < 228) anim3 = 228;
		matlistADV00_0012231C[0].attr_texId = anim2;
		matlistADV00_00123620[0].attr_texId = anim2;
		matlistADV00_000E7180[1].attr_texId = anim3;
		matlistADV00_00122894[2].attr_texId = anim3;
		if (SADXStyleWater == true) matlistADV00_00114D80[0].attr_texId = anim3;
		if (SADXStyleWater == true) matlistADV00_00114D80[0].diffuse.argb.a = 0xB2;
		if (SADXStyleWater == true)matlistADV00_00114D80[0].attrflags |= NJD_FLAG_USE_ALPHA;
		if (SADXStyleWater == false) matlistADV00_00133D3C[0].attr_texId = anim6;
		if (SADXStyleWater == false) matlistADV00_00114D80Z[0].attr_texId = anim6;
		if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2)
		{
			anim2++;
			anim3++;
			anim6++;
			anim_sadx++;
		}
	}

	//Sea animations Act 4 (Hotel)
	if (CurrentLevel == 26 && CurrentAct == 4 && GameState != 16)
	{
		if (anim_sadx2 > 137) anim_sadx2 = 123;
		if (anim7 > 86) anim7 = 65;
		if (anim7 > 65 && anim7 < 78) anim7 = 78;
		if (anim4 > 100) anim4 = 59;
		if (anim4 > 59 && anim4 < 87) anim4 = 87;
		if (anim5 > 114) anim5 = 60;
		if (anim5 > 60 && anim5 < 101) anim5 = 101;
		matlistADV00_00147958[2].attr_texId = anim4;
		matlistADV00_00150A50[1].attr_texId = anim4;
		matlistADV00_00150A50[3].attr_texId = anim5;
		if (SADXStyleWater == true) matlistADV00_00151E54[0].attr_texId = anim4;
		if (SADXStyleWater == true) WriteData((int*)0x006311E0, anim_sadx2);
		matlistADV00_00148688[0].attr_texId = anim5;
		if (SADXStyleWater == false) matlistADV00_00151E54[0].attr_texId = anim7;
		if (SADXStyleWater == false) matlistADV00_001566E4[0].attr_texId = anim7;
		if (SADXStyleWater == false) matlistADV00_0014B314[0].attr_texId = anim7;
		if (SADXStyleWater == false) matlistADV00_0014BED8[0].attr_texId = anim7;
		if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2)
		{
			anim4++;
			anim5++;
			anim7++;
			anim_sadx2++;
		}
	}
}