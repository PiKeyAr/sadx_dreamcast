#include "stdafx.h"
#include "Objects_Windy.h"

NJS_TEXNAME textures_windy1[20];
NJS_TEXLIST texlist_windy1 = { arrayptrandlength(textures_windy1) };

NJS_TEXNAME textures_windy2[17];
NJS_TEXLIST texlist_windy2 = { arrayptrandlength(textures_windy2) };

NJS_TEXNAME textures_windy3[28];
NJS_TEXLIST texlist_windy3 = { arrayptrandlength(textures_windy3) };

DataArray(SkyboxScale, SkyboxScale_Windy1, 0x00AFE924, 3);
DataArray(FogData, FogData_Windy1, 0x00AFEA20, 3);
DataArray(FogData, FogData_Windy2, 0x00AFEA50, 3);
DataArray(FogData, FogData_Windy3, 0x00AFEA80, 3);
DataPointer(NJS_OBJECT, stru_C05E10, 0xC05E10);
DataPointer(NJS_OBJECT, stru_C06344, 0xC06344);
DataPointer(NJS_OBJECT, stru_C06450, 0xC06450);
DataPointer(NJS_OBJECT, stru_C0655C, 0xC0655C);
DataPointer(NJS_OBJECT, stru_C06A94, 0xC06A94);
DataPointer(float, CurrentFogDist, 0x03ABDC64);
DataPointer(float, CurrentFogLayer, 0x03ABDC60);
DataPointer(NJS_VECTOR, CurrentSkybox, 0x03ABDC94);
DataPointer(NJS_BGRA, CurrentFogColorX, 0x03ABDC68);
FunctionPointer(void, sub_409E70, (NJS_MODEL_SADX *a1, int a2, float a3), 0x409E70);
FunctionPointer(void, sub_408530, (NJS_OBJECT *o), 0x408530);
FunctionPointer(void, sub_408350, (NJS_ACTION *a1, float a2, int a3, float a4), 0x408350);
static int TornadoMode = 0;
static float SkyTrans = 1.0f;

NJS_VECTOR TornadoSpawnPosition = { 3254, -421, -1665 };

NJS_MATERIAL* ObjectSpecular_Windy[] = {
	//St_brd
	((NJS_MATERIAL*)0x00C3BBB8),
	((NJS_MATERIAL*)0x00C3BBCC),
	((NJS_MATERIAL*)0x00C3BBE0),
	((NJS_MATERIAL*)0x00C3BBF4),
	//Rocket
	((NJS_MATERIAL*)0x008C24D0),
	((NJS_MATERIAL*)0x008C24E4),
	((NJS_MATERIAL*)0x008C24F8),
	((NJS_MATERIAL*)0x008C250C),
	//O Toge
	((NJS_MATERIAL*)0x008BAAC8),
	((NJS_MATERIAL*)0x008BAADC),
	((NJS_MATERIAL*)0x008BAAF0),
	((NJS_MATERIAL*)0x008BAB04),
	((NJS_MATERIAL*)0x008BAB18),
	((NJS_MATERIAL*)0x008BA708),
	//Boa-boa
	((NJS_MATERIAL*)0x0094F34C),
	((NJS_MATERIAL*)0x0094F360),
	((NJS_MATERIAL*)0x0094F008),
	((NJS_MATERIAL*)0x0094F01C),
	((NJS_MATERIAL*)0x0094FEB4),
	((NJS_MATERIAL*)0x0094FEC8),
	((NJS_MATERIAL*)0x0094FB6C),
	((NJS_MATERIAL*)0x0094FB80),
};

NJS_MATERIAL* LevelSpecular_Windy[] = {
	//Boa-boa
	((NJS_MATERIAL*)0x00950200),
	((NJS_MATERIAL*)0x00950214),
	((NJS_MATERIAL*)0x00950228),
	((NJS_MATERIAL*)0x0095023C),
	((NJS_MATERIAL*)0x00950250),
	((NJS_MATERIAL*)0x00950264),
	//Rocket
	((NJS_MATERIAL*)0x008C2D38),
	((NJS_MATERIAL*)0x008C2D4C),
	((NJS_MATERIAL*)0x008C2D60),
	((NJS_MATERIAL*)0x008C2D74),
	((NJS_MATERIAL*)0x008C2D88),
	((NJS_MATERIAL*)0x008C2D9C),
};

NJS_MATERIAL* ObjectSpecularWhiteDiffuse[] = {
	//OPopo
	((NJS_MATERIAL*)0x00C1C47C),
	//Leon eyes
	((NJS_MATERIAL*)0x009544DC),
	((NJS_MATERIAL*)0x009544F0),
	((NJS_MATERIAL*)0x00953ABC),
	((NJS_MATERIAL*)0x00953AD0),
};

void RetrieveWindy1SkyTransparency(float a, float r, float g, float b)
{
	SkyTrans = a;
}

void RenderWindy1Sky()
{
	SetMaterialAndSpriteColor_Float(SkyTrans, 1.0f, 1.0f, 1.0f);
	DrawQueueDepthBias = -30000.0f;
	ProcessModelNode(&stru_C05E10, (QueuedModelFlagsB)0, 1.0f); //Main
	DrawQueueDepthBias = -28000.0f;
	ProcessModelNode(&stru_C06450, (QueuedModelFlagsB)0, 1.0f); //Bottom non-trans
	SetMaterialAndSpriteColor_Float(SkyTrans* 0.6f, 1.0f, 1.0f, 1.0f);
	DrawQueueDepthBias = -25000.0f;
	ProcessModelNode(&stru_C0655C, (QueuedModelFlagsB)0, 1.0f); //Bottom trans
	DrawQueueDepthBias = -20000.0f;
	SetMaterialAndSpriteColor_Float(SkyTrans, 1.0f, 1.0f, 1.0f);
	ProcessModelNode(&stru_C06344, (QueuedModelFlagsB)0, 1.0f); //Cloud 1
	DrawQueueDepthBias = -18000.0f;
	ProcessModelNode(&stru_C06A94, (QueuedModelFlagsB)0, 1.0f); //Cloud 2
	DrawQueueDepthBias = 0;
}

void FixBranch(NJS_ACTION *a1, float a2, int a3, float a4)
{
	DrawQueueDepthBias = 2000.0f;
	sub_408350(a1, a2, a3, a4);
	DrawQueueDepthBias = 2200.0f;
	sub_408350(&action_OTREEM_Action, a2, a3, a4);
}

void LoadLevelFiles_STG02()
{
	STG02_0_Info = new LandTableInfo(ModPath + "\\data\\STG02\\0.sa1lvl");
	STG02_1_Info = new LandTableInfo(ModPath + "\\data\\STG02\\1.sa1lvl");
	STG02_2_Info = new LandTableInfo(ModPath + "\\data\\STG02\\2.sa1lvl");
	LandTable *STG02_0 = STG02_0_Info->getlandtable();
	LandTable *STG02_1 = STG02_1_Info->getlandtable();
	LandTable *STG02_2 = STG02_2_Info->getlandtable();
	STG02_0->TexList = &texlist_windy1;
	STG02_1->TexList = &texlist_windy2;
	STG02_2->TexList = &texlist_windy3;
	WriteData((LandTable**)0x97DA48, STG02_0); //Act 1
	WriteData((LandTable**)0x97DA4C, STG02_1); //Act 2
	WriteData((LandTable**)0x97DA50, STG02_2); //Act 3
}

void WindyValley_Init()
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
	*(NJS_MODEL_SADX*)0xC1E168 = attachSTG02_000C4CFC; //Fixed bridge rope
	//Skybox stuff
	WriteCall((void*)0x004DD794, RetrieveWindy1SkyTransparency);
	WriteCall((void*)0x004DD7D1, RenderWindy1Sky);
	WriteData<5>((void*)0x004DD7DB, 0x90);
	WriteData<5>((void*)0x004DD7E5, 0x90);
	WriteData<5>((void*)0x004DD7EF, 0x90);
	WriteData<5>((void*)0x004DD7F9, 0x90);
	//Material fixes
	((NJS_MATERIAL*)0x00C1C468)->attr_texId &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x00C1C47C)->attr_texId &= ~NJD_FLAG_IGNORE_SPECULAR;
	if (DLLLoaded_Lantern)
	{
		material_register_ptr(LevelSpecular_Windy, LengthOfArray(LevelSpecular_Windy), &ForceDiffuse0Specular0);
		material_register_ptr(ObjectSpecular_Windy, LengthOfArray(ObjectSpecular_Windy), &ForceDiffuse0Specular1);
		material_register_ptr(ObjectSpecularWhiteDiffuse, LengthOfArray(ObjectSpecularWhiteDiffuse), &ForceWhiteDiffuse3Specular1);
	}
	WriteData<1>((void*)0x4DD120, 0xC3); //Disable some fog thing
	WriteCall((void*)0x004E1E35, sub_409E70); //Wind gate rendering function
	WriteCall((void*)0x004E1E9A, sub_409E70); //Wind gate rendering function
	WriteCall((void*)0x004E1F08, sub_409E70); //Wind gate rendering function
	WriteCall((void*)0x004E1F77, sub_409E70); //Wind gate rendering function
	*(NJS_OBJECT*)0x00C32DB8 = objectSTG02_000D40D4; //Grassy rock
	*(NJS_OBJECT*)0xC0B188 = objectSTG02_000B6C3C; //Skybox bottom in Act 3
	*(NJS_OBJECT*)0xC2B860 = objectSTG02_0082B860; //broken fan piece
	*(NJS_OBJECT*)0xC2C160 = objectSTG02_0082C160; //broken fan piece 2
	*(NJS_OBJECT*)0xC2C788 = objectSTG02_0082C788; //broken fan piece 3
	*(NJS_OBJECT*)0xC21704 = objectSTG02_000C7F08; //Yure
	*(NJS_OBJECT*)0xC29B94 = objectSTG02_000CE310; //HaneA
	*(NJS_OBJECT*)0xC1560C = objectSTG02_000BEF7C; //BridgeC
	*(NJS_OBJECT*)0xC142FC = objectSTG02_000BE2F0; //BridgeB
	*(NJS_OBJECT*)0xC13274 = objectSTG02_000BD7C8; //BridgeA
	*(NJS_OBJECT*)0xC2433C = objectSTG02_000C9DE8; //OSaku C
	*(NJS_OBJECT*)0xC23384 = objectSTG02_000C9298; //OSaku B
	*(NJS_OBJECT*)0xC22E74 = objectSTG02_000C8F20; //OSaku A
	*(NJS_MODEL_SADX*)0xC1DDF8 = attachSTG02_000C4A48; //Bridge piece
	*(NJS_OBJECT*)0xC315FC = objectSTG02_000D38A8; //Wind gate 1
	*(NJS_OBJECT*)0xC30C44 = objectSTG02_00830C44; //Wind gate 2
	*(NJS_OBJECT*)0xC305A4 = objectSTG02_008305A4; //Wind gate 3
	*(NJS_OBJECT*)0xC2FF04 = objectSTG02_0082FF04; //Wind gate 4
	//OTreeM fixes
	*(NJS_OBJECT*)0xC2663C = object_000CB98C; //OTreeM DC model
	WriteCall((void*)0x4E2BA1, FixBranch);
	//Skybox/fog data stuff
	for (unsigned int i = 0; i < 3; i++)
	{
		SkyboxScale_Windy1->Far.x = 1.0f;
		SkyboxScale_Windy1->Far.y = 1.0f;
		SkyboxScale_Windy1->Far.z = 1.0f;
		SkyboxScale_Windy1->Normal.x = 1.0f;
		SkyboxScale_Windy1->Normal.y = 1.0f;
		SkyboxScale_Windy1->Normal.z = 1.0f;
		SkyboxScale_Windy1->Near.x = 1.0f;
		SkyboxScale_Windy1->Near.y = 1.0f;
		SkyboxScale_Windy1->Near.z = 1.0f;
		DrawDist_WindyValley1[i].Maximum = -8000.0f;
		FogData_Windy1[i].Distance = 12000.0f;
		FogData_Windy1[i].Layer = 1000.0f;
		FogData_Windy1[i].Color = 0xFFFFFFFF;
		FogData_Windy2[i].Color = 0xFFFFFFFF;
		FogData_Windy2[i].Distance = 2500.0f;
		FogData_Windy2[i].Layer = 50.0f;
		FogData_Windy2[i].Toggle = 1;
		FogData_Windy3[i].Distance = 6000.0f;
		FogData_Windy3[i].Layer = 200.0f;
		FogData_Windy3[i].Color = 0xFFFFFFFF;
	}
	ResizeTextureList((NJS_TEXLIST *)0xB98BF8, textures_windy1);
	ResizeTextureList((NJS_TEXLIST *)0xB81304, textures_windy2);
	ResizeTextureList((NJS_TEXLIST *)0xAFEC30, textures_windy3);
};

void WindyValley_OnFrame()
{
	float TornadoDistance;
	auto entity = EntityData1Ptrs[0];
	if (CurrentLevel == 2 && CurrentAct == 0)
	{
		if (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21 || CurrentCharacter == 6) TornadoMode = 0;
		if (CurrentCharacter != 6 && entity != nullptr)
		{
			TornadoDistance = squareroot((entity->Position.x - TornadoSpawnPosition.x) * (entity->Position.x - TornadoSpawnPosition.x) + (entity->Position.y - TornadoSpawnPosition.y)*(entity->Position.y - TornadoSpawnPosition.y) + (entity->Position.z - TornadoSpawnPosition.z)*(entity->Position.z - TornadoSpawnPosition.z));
			if (TornadoMode != 4)
			{
				if (TornadoDistance < 680) TornadoMode = 1;
				if (TornadoDistance < 310) TornadoMode = 2;
				if (TornadoDistance < 170) TornadoMode = 3;
				if (TornadoDistance < 150) TornadoMode = 4;
			}
			if (TornadoMode == 0 || TornadoMode == 4)
			{
				if (CurrentFogDist < 2200) CurrentFogDist = CurrentFogDist + 32.0f;
				if (CurrentFogLayer < 400) CurrentFogLayer = CurrentFogLayer + 16.0f;
			}
			if (TornadoMode == 1)
			{
				if (CurrentFogColorX.r > 7)
				{
					CurrentFogColorX.r = CurrentFogColorX.r - 8;
					CurrentFogColorX.g = CurrentFogColorX.g - 8;
					CurrentFogColorX.b = CurrentFogColorX.b - 8;
				}
				if (CurrentFogColorX.r <= 7 && CurrentFogColorX.r > 0)
				{
					CurrentFogColorX.r = 0;
					CurrentFogColorX.g = 0;
					CurrentFogColorX.b = 0;
				}
				if (CurrentFogDist > 5000) CurrentFogDist = CurrentFogDist - 128.0f;
				if (CurrentFogLayer >= 100) CurrentFogLayer = CurrentFogLayer - 128.0f;
			}
			if (TornadoMode == 2)
			{
				if (CurrentFogDist > 450) CurrentFogDist = CurrentFogDist - 64.0f;
				if (CurrentFogLayer >= 64) CurrentFogLayer = CurrentFogLayer - 64.0f;
				if (CurrentFogColorX.r > 1)
				{
					CurrentFogColorX.r--;
					CurrentFogColorX.g--;
					CurrentFogColorX.b--;
				}
			}
		}
	}
}