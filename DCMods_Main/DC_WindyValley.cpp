#include "stdafx.h"

NJS_TEXNAME textures_windy1[20];
NJS_TEXLIST texlist_windy1 = { arrayptrandlength(textures_windy1) };

NJS_TEXNAME textures_windy2[17];
NJS_TEXLIST texlist_windy2 = { arrayptrandlength(textures_windy2) };

NJS_TEXNAME textures_windy3[28];
NJS_TEXLIST texlist_windy3 = { arrayptrandlength(textures_windy3) };

int Windy3Cols[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; 

/*
#include "Windy1.h"
#include "Windy2.h"
#include "Windy3.h"
*/

DataArray(SkyboxScale, SkyboxScale_Windy1, 0x00AFE924, 3);
DataArray(FogData, FogData_Windy1, 0x00AFEA20, 3);
DataArray(FogData, FogData_Windy2, 0x00AFEA50, 3);
DataArray(FogData, FogData_Windy3, 0x00AFEA80, 3);
DataPointer(float, CurrentFogDist, 0x03ABDC64);
DataPointer(float, CurrentFogLayer, 0x03ABDC60);
DataPointer(NJS_VECTOR, CurrentSkybox, 0x03ABDC94);
DataPointer(NJS_BGRA, CurrentFogColorX, 0x03ABDC68);
FunctionPointer(void, sub_409E70, (NJS_MODEL_SADX *a1, int a2, float a3), 0x409E70);
FunctionPointer(void, sub_408530, (NJS_OBJECT *o), 0x408530);
FunctionPointer(void, sub_408350, (NJS_ACTION *a1, float a2, int a3, float a4), 0x408350);
FunctionPointer(void, sub_4CACF0, (NJS_VECTOR *a1, float a2), 0x4CACF0);
FunctionPointer(void, sub_407FC0, (NJS_MODEL_SADX *a1, int blend), 0x407FC0);
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
	ProcessModelNode((NJS_OBJECT*)0xC05E10, (QueuedModelFlagsB)0, 1.0f); //Main
	DrawQueueDepthBias = -28000.0f;
	ProcessModelNode((NJS_OBJECT*)0xC06450, (QueuedModelFlagsB)0, 1.0f); //Bottom non-trans
	SetMaterialAndSpriteColor_Float(SkyTrans* 0.6f, 1.0f, 1.0f, 1.0f);
	DrawQueueDepthBias = -25000.0f;
	ProcessModelNode((NJS_OBJECT*)0xC0655C, (QueuedModelFlagsB)0, 1.0f); //Bottom trans
	DrawQueueDepthBias = -20000.0f;
	SetMaterialAndSpriteColor_Float(SkyTrans, 1.0f, 1.0f, 1.0f);
	ProcessModelNode((NJS_OBJECT*)0xC06344, (QueuedModelFlagsB)0, 1.0f); //Cloud 1
	DrawQueueDepthBias = -18000.0f;
	ProcessModelNode((NJS_OBJECT*)0xC06A94, (QueuedModelFlagsB)0, 1.0f); //Cloud 2
	DrawQueueDepthBias = 0;
}

void UnloadLevelFiles_STG02()
{
	delete STG02_0_Info;
	delete STG02_1_Info;
	delete STG02_2_Info;
	STG02_0_Info = nullptr;
	STG02_1_Info = nullptr;
	STG02_2_Info = nullptr;
}

void OHasieFix(NJS_MODEL_SADX *model, float scale)
{
	sub_407FC0(model, (QueuedModelFlagsB)0);
}

void AddWindyTransparentThing(int colnumber)
{
	for (int i = 0; i < LengthOfArray(Windy3Cols); i++)
	{
		if (Windy3Cols[i] == colnumber) return;
		else if (Windy3Cols[i] == 0)
		{
			Windy3Cols[i] = colnumber;
			//PrintDebug("Added COl: %d\n", colnumber);
			return;
		}
	}
}

void ParseWindyColFlags(LandTable *landtable)
{
	int colflags;
	for (unsigned int j = 0; j < landtable->COLCount; j++)
	{
		colflags = landtable->Col[j].Flags;
		if (colflags == 0x88000000)
		{
			if (landtable->Col[j].Flags & ColFlags_Visible) landtable->Col[j].Flags &= ~ColFlags_Visible;
			AddWindyTransparentThing(j);
		}
	}
}

void LoadLevelFiles_STG02()
{
	CheckAndUnloadLevelFiles();
	STG02_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG02\\0.sa1lvl"));
	STG02_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG02\\1.sa1lvl"));
	STG02_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG02\\2.sa1lvl"));
	LandTable *STG02_0 = STG02_0_Info->getlandtable(); //&landtable_0000D7E0; //STG02_0_Info->getlandtable();
	LandTable *STG02_1 = STG02_1_Info->getlandtable(); //&landtable_0000DB40; //STG02_1_Info->getlandtable();
	LandTable *STG02_2 = STG02_2_Info->getlandtable(); //&landtable_0000F274; //STG02_2_Info->getlandtable();
	RemoveMaterialColors_Landtable(STG02_0);
	RemoveMaterialColors_Landtable(STG02_1);
	RemoveMaterialColors_Landtable(STG02_2);
	STG02_0->TexList = &texlist_windy1;
	STG02_1->TexList = &texlist_windy2;
	STG02_2->TexList = &texlist_windy3;
	WriteData((LandTable**)0x97DA48, STG02_0); //Act 1
	WriteData((LandTable**)0x97DA4C, STG02_1); //Act 2
	WriteData((LandTable**)0x97DA50, STG02_2); //Act 3
	ParseWindyColFlags(STG02_2);
}

void DrawTransparentBrokenBlocks(NJS_MODEL_SADX *model, QueuedModelFlagsB blend)
{
	DrawQueueDepthBias = 5000.0f;
	DrawModel_Queue(model, blend);
	DrawQueueDepthBias = 0.0f;
}

void DrawTransparentBrokenBlocksExplosion(NJS_VECTOR *a1, float a2)
{
	ParticleDepthOverride = 22048.0f;
	sub_4CACF0(a1, a2);
	ParticleDepthOverride = 0.0f;
}

void __cdecl OTanpopo_Child_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi
	EntityData1 *v2; // edi
	float ZDist; // ST08_4
	float YDist; // ST04_4
	float XDist; // ST00_4
	Angle v6; // ecx

	v1 = a1->Data1;
	v2 = a1->Parent->Data1;
	ZDist = v2->Scale.z + v1->Position.z;
	YDist = v2->Scale.y + v1->Position.y;
	XDist = v2->Scale.x + v1->Position.x;
	if ((abs(v1->Position.x - v2->Position.x) > 0.5f || abs(v1->Position.y-v2->Position.y > 0.5f) || abs(v1->Position.z - v2->Position.z) > 0.5f))
	{
		if (!MissedFrames)
		{
			SetTextureToLevelObj();
			njPushMatrix(0);
			njTranslate(0, XDist, YDist, ZDist);
			v6 = Camera_Data1->Rotation.y;
			if (v6)
			{
				njRotateY(0, (unsigned __int16)v6);
			}
			ProcessModelNode_A_Wrapper((NJS_OBJECT*)0x00C1DBFC, QueuedModelFlagsB_SomeTextureThing, 1.0f);
			njPopMatrix(1u);
		}
	}
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
	WriteCall((void**)0x4E126F, OHasieFix);
	WriteCall((void**)0x4E12D2, OHasieFix);
	WriteCall((void**)0x4E133E, OHasieFix);
	WriteCall((void*)0x4E282D, DrawTransparentBrokenBlocksExplosion);
	WriteCall((void*)0x4E2703, DrawTransparentBrokenBlocksExplosion);
	WriteCall((void*)0x4E2262, DrawTransparentBrokenBlocks);
	WriteJump((void*)0x4DFA60, OTanpopo_Child_Display); //Fix hanging dandelion
	*(NJS_MODEL_SADX*)0xC1DDF8 = *LoadModel("system\\data\\STG02\\Models\\000C4A70.sa1mdl")->basicdxmodel; //Bridge piece
	*(NJS_MODEL_SADX*)0xC1E168 = *LoadModel("system\\data\\STG02\\Models\\000C4D24.sa1mdl")->basicdxmodel; //Fixed bridge rope
	*(NJS_MODEL_SADX*)0xC1D068 = *LoadModel("system\\data\\STG02\\Models\\000C4024.sa1mdl")->basicdxmodel; //OPopo base
	*(NJS_OBJECT*)0xC1DAE0 = *LoadModel("system\\data\\STG02\\Models\\000C47B0.sa1mdl"); //OTanpopo
	*(NJS_OBJECT*)0xC1DBFC = *LoadModel("system\\data\\STG02\\Models\\000C48B4.sa1mdl"); //OTanpopo fuzz
	*(NJS_OBJECT*)0xC1C648 = *LoadModel("system\\data\\STG02\\Models\\000C3A70.sa1mdl"); //OPopo part 2
	*(NJS_OBJECT*)0xC1C848 = *LoadModel("system\\data\\STG02\\Models\\000C38A8.sa1mdl"); //OPopo part 1 (I swapped these because SADX renders them in an incorrect order)
	*(NJS_OBJECT*)0xC2663C = *LoadModel("system\\data\\STG02\\Models\\000CB98C.sa1mdl"); //OTreeM
	*(NJS_OBJECT*)0xC32DB8 = *LoadModel("system\\data\\STG02\\Models\\000D40D4.sa1mdl"); //Grassy rock
	SortModel((NJS_OBJECT*)0xC32DB8);
	*(NJS_OBJECT*)0xC0B188 = *LoadModel("system\\data\\STG02\\Models\\000B6C3C.sa1mdl"); //Skybox bottom in Act 3
	*(NJS_OBJECT*)0xC2B860 = *LoadModel("system\\data\\STG02\\Models\\000CF660.sa1mdl"); //broken fan piece
	SortModel((NJS_OBJECT*)0xC2B860);
	*(NJS_OBJECT*)0xC2C160 = *LoadModel("system\\data\\STG02\\Models\\000CFC44.sa1mdl"); //broken fan piece 2
	SortModel((NJS_OBJECT*)0xC2C160);
	*(NJS_OBJECT*)0xC2C788 = *LoadModel("system\\data\\STG02\\Models\\000D0098.sa1mdl"); //broken fan piece 3
	SortModel((NJS_OBJECT*)0xC2C788);
	*(NJS_OBJECT*)0xC21704 = *LoadModel("system\\data\\STG02\\Models\\000C7F08.sa1mdl"); //Yure
	*(NJS_OBJECT*)0xC29B94 = *LoadModel("system\\data\\STG02\\Models\\000CE310.sa1mdl"); //HaneA
	*(NJS_OBJECT*)0xC1560C = *LoadModel("system\\data\\STG02\\Models\\000BEF7C.sa1mdl"); //BridgeC
	*(NJS_OBJECT*)0xC142FC = *LoadModel("system\\data\\STG02\\Models\\000BE2F0.sa1mdl"); //BridgeB
	*(NJS_OBJECT*)0xC13274 = *LoadModel("system\\data\\STG02\\Models\\000BD7C8.sa1mdl"); //BridgeA
	*(NJS_OBJECT*)0xC2433C = *LoadModel("system\\data\\STG02\\Models\\000C9DE8.sa1mdl"); //OSaku C
	*(NJS_OBJECT*)0xC23384 = *LoadModel("system\\data\\STG02\\Models\\000C9298.sa1mdl"); //OSaku B
	*(NJS_OBJECT*)0xC22E74 = *LoadModel("system\\data\\STG02\\Models\\000C8F20.sa1mdl"); //OSaku A
	*(NJS_OBJECT*)0xC315FC = *LoadModel("system\\data\\STG02\\Models\\000D38A8.sa1mdl"); //Wind gate 1
	*(NJS_OBJECT*)0xC30C44 = *LoadModel("system\\data\\STG02\\Models\\000D31C8.sa1mdl"); //Wind gate 2
	*(NJS_OBJECT*)0xC305A4 = *LoadModel("system\\data\\STG02\\Models\\000D2C98.sa1mdl"); //Wind gate 3
	*(NJS_OBJECT*)0xC2FF04 = *LoadModel("system\\data\\STG02\\Models\\000D2768.sa1mdl"); //Wind gate 4
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

void RenderWindy3Cols()
{
	NJS_VECTOR sphere = { 0, 0, 0 };
	float radius = 0.0f;
	if (!MissedFrames)
	{
		for (int i = 0; i < LengthOfArray(Windy3Cols); i++)
		{
			//PrintDebug("Trying COl: %d\n", Windy3Cols[i]);
			radius = 2500.0f + GeoLists[18]->Col[Windy3Cols[i]].Radius;
			//PrintDebug("Radius: %f", radius);
			sphere.x = GeoLists[18]->Col[Windy3Cols[i]].Center.x;
			sphere.y = GeoLists[18]->Col[Windy3Cols[i]].Center.y;
			sphere.z = GeoLists[18]->Col[Windy3Cols[i]].Center.z;
			if (radius != 0 && IsPlayerInsideSphere(&sphere, radius))
			{
				njSetTexture(&texlist_windy3);
				njPushMatrix(0);
				njTranslate(0, 0, 0, 0);
				DrawQueueDepthBias = 2500.0f;
				ProcessModelNode_D(GeoLists[18]->Col[Windy3Cols[i]].Model, 1, 1.0f);
				njPopMatrix(1u);
				DrawQueueDepthBias = 0;
			}
		}
	}
}

void WindyValley_OnFrame()
{
	float TornadoDistance;
	auto entity = EntityData1Ptrs[0];
	//Draw stuff in Act 3
	if (CurrentAct == 2 && EntityData1Ptrs[0] != nullptr) RenderWindy3Cols();
	//Tornado stuff
	if (CurrentAct == 0)
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