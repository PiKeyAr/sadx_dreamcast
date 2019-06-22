#include "stdafx.h"
#include "TwinklePark_objects.h"

NJS_TEXNAME textures_twinkle1[35];
NJS_TEXLIST texlist_twinkle1 = { arrayptrandlength(textures_twinkle1) };

NJS_TEXNAME textures_twinkle2[88];
NJS_TEXLIST texlist_twinkle2 = { arrayptrandlength(textures_twinkle2) };

NJS_TEXNAME textures_twinkle3[30];
NJS_TEXLIST texlist_twinkle3 = { arrayptrandlength(textures_twinkle3) };

/*
#include "Twinkle1.h"
#include "Twinkle2.h"
#include "Twinkle3.h"
*/

DataArray(FogData, TwinklePark1Fog, 0x026B339C, 3);
DataArray(FogData, TwinklePark2Fog, 0x026B33CC, 3);
DataArray(FogData, TwinklePark3Fog, 0x026B33FC, 3);
DataArray(FogData, TwinklePark4Fog, 0x026B342C, 3);
FunctionPointer(void, sub_61D4E0, (ObjectMaster *a1), 0x61D4E0);
FunctionPointer(void, sub_61D1F0, (ObjectMaster *a1), 0x61D1F0);
FunctionPointer(void, sub_4BA5D0, (NJS_OBJECT *a1, ObjectThingC *a2), 0x4BA5D0);
FunctionPointer(void, sub_4BA710, (NJS_OBJECT *a1, ObjectThingC *a2), 0x4BA710);
FunctionPointer(void, sub_408530, (NJS_OBJECT *a1), 0x408530);
FunctionPointer(void, sub_405450, (NJS_ACTION *a1, float frame, float scale), 0x405450);
FunctionPointer(void, sub_407FC0, (NJS_MODEL_SADX *a1, int blend), 0x407FC0);

NJS_OBJECT *PirateShipStars = nullptr;
NJS_OBJECT CartGlass = { NJD_EVAL_BREAK | NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
NJS_OBJECT *ArchLightLight = nullptr;
NJS_OBJECT *OPanelPanel = nullptr;
NJS_OBJECT *OPolePole = nullptr;
NJS_OBJECT *OCatapultFloor = nullptr;
NJS_OBJECT *Mirrors[] = { nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr };

SETObjData setdata_tp = {};
static int PoleUVIncrease = 0;
static bool MirrorsLoaded = false;

NJS_TEXNAME textures_tpobjects[97];

NJS_MATERIAL* WhiteDiffuse_Twinkle[] = {
	//Satellite
	((NJS_MATERIAL*)0x038AE590),
	((NJS_MATERIAL*)0x038AE5A4),
};

NJS_MATERIAL* LevelSpecular_Twinkle[]={
	//Barrel pieces
	((NJS_MATERIAL*)0x0279D398),
	((NJS_MATERIAL*)0x0279D3AC),
	((NJS_MATERIAL*)0x0279D6E0),
	((NJS_MATERIAL*)0x0279D828),
	((NJS_MATERIAL*)0x0279D934),
	((NJS_MATERIAL*)0x0279DA5C),
	//Zero
	((NJS_MATERIAL*)0x0098A2B0),
	((NJS_MATERIAL*)0x0098A2C4),
	((NJS_MATERIAL*)0x0098A2D8),
	((NJS_MATERIAL*)0x0098A2EC),
	((NJS_MATERIAL*)0x0098A300),
	((NJS_MATERIAL*)0x0098ACD0),
	((NJS_MATERIAL*)0x0098ACE4),
	((NJS_MATERIAL*)0x0098ACF8),
	((NJS_MATERIAL*)0x0098AAE0),
	((NJS_MATERIAL*)0x0098C140),
	((NJS_MATERIAL*)0x0098C154),
	((NJS_MATERIAL*)0x0098C168),
	((NJS_MATERIAL*)0x0098BF50),
	((NJS_MATERIAL*)0x00990FE0),
	((NJS_MATERIAL*)0x00990FF4),
	//Amy's balloon
	((NJS_MATERIAL*)0x008BD7A0),
	//ODoor
	((NJS_MATERIAL*)0x027B2418),
	((NJS_MATERIAL*)0x027B242C),
	((NJS_MATERIAL*)0x027B2440),
	//Dash pad
	((NJS_MATERIAL*)0x008B8828),
	((NJS_MATERIAL*)0x008B883C),
	((NJS_MATERIAL*)0x008B8850),
	((NJS_MATERIAL*)0x008B8864),
	((NJS_MATERIAL*)0x008B8878),
	((NJS_MATERIAL*)0x008B8498),
	((NJS_MATERIAL*)0x008B84AC),
	//Sweep
	((NJS_MATERIAL*)0x038D05C8),
	((NJS_MATERIAL*)0x038D05DC),
	((NJS_MATERIAL*)0x038D05F0),
	((NJS_MATERIAL*)0x038D0604),
	((NJS_MATERIAL*)0x038D0618),
	((NJS_MATERIAL*)0x038CFB80),
	((NJS_MATERIAL*)0x038CFB94),
	((NJS_MATERIAL*)0x038CFBA8),
	((NJS_MATERIAL*)0x038CFBBC),
	((NJS_MATERIAL*)0x038CFBD0),
	((NJS_MATERIAL*)0x038CFBE4),
	((NJS_MATERIAL*)0x038CFBF8),
	((NJS_MATERIAL*)0x038CFC0C),
	((NJS_MATERIAL*)0x038CF850),
	((NJS_MATERIAL*)0x038CF864),
	((NJS_MATERIAL*)0x038CF878),
	((NJS_MATERIAL*)0x038CF88C),
	((NJS_MATERIAL*)0x038CF5E8),
	((NJS_MATERIAL*)0x038CF5FC),
	((NJS_MATERIAL*)0x038CF610),
	((NJS_MATERIAL*)0x038CF260),
	((NJS_MATERIAL*)0x038CF274),
	((NJS_MATERIAL*)0x038CEF58),
	((NJS_MATERIAL*)0x038CEF6C),
	((NJS_MATERIAL*)0x038CEF80),
	((NJS_MATERIAL*)0x038CEDE8),
	((NJS_MATERIAL*)0x038CEA60),
	((NJS_MATERIAL*)0x038CEA74),
	((NJS_MATERIAL*)0x038CE758),
	((NJS_MATERIAL*)0x038CE76C),
	((NJS_MATERIAL*)0x038CE780),
	((NJS_MATERIAL*)0x038CE5E8),
	((NJS_MATERIAL*)0x038CE260),
	((NJS_MATERIAL*)0x038CE274),
	((NJS_MATERIAL*)0x038CDF58),
	((NJS_MATERIAL*)0x038CDF6C),
	((NJS_MATERIAL*)0x038CDF80),
	((NJS_MATERIAL*)0x038CDDE8),
	((NJS_MATERIAL*)0x038CDA60),
	((NJS_MATERIAL*)0x038CDA74),
	((NJS_MATERIAL*)0x038CD758),
	((NJS_MATERIAL*)0x038CD76C),
	((NJS_MATERIAL*)0x038CD780),
	((NJS_MATERIAL*)0x038CD5E8),
};

void Mirror_Delete(ObjectMaster *a1)
{
	MirrorsLoaded = false;
	CheckThingButThenDeleteObject(a1);
}

void Mirror_Display(ObjectMaster *a1)
{
	EntityData1 *v1;
	v1 = a1->Data1;
	if (CurrentAct == 2 && !DroppedFrames)
	{
		njSetTexture(&texlist_twinkle3);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		njScale(0, 1.0f, 1.0f, 1.0f);
		njRotateXYZ(0, 0, 0, 0);
		DrawQueueDepthBias = 6000.0f;
		ProcessModelNode(Mirrors[0], (QueuedModelFlagsB)0, 1.0f); //far right
		ProcessModelNode(Mirrors[1], (QueuedModelFlagsB)0, 1.0f); //far left
		ProcessModelNode(Mirrors[2], (QueuedModelFlagsB)0, 1.0f); //far right 2
		ProcessModelNode(Mirrors[3], (QueuedModelFlagsB)0, 1.0f); //far left 2
		DrawQueueDepthBias = 5000.0f;
		ProcessModelNode(Mirrors[4], (QueuedModelFlagsB)0, 1.0f); //mid right
		ProcessModelNode(Mirrors[5], (QueuedModelFlagsB)0, 1.0f); //mid left 
		ProcessModelNode(Mirrors[6], (QueuedModelFlagsB)0, 1.0f); //mid right 2
		ProcessModelNode(Mirrors[7], (QueuedModelFlagsB)0, 1.0f); //mid left 2
		DrawQueueDepthBias = 4000.0f;
		ProcessModelNode(Mirrors[8], (QueuedModelFlagsB)0, 1.0f); //end right
		ProcessModelNode(Mirrors[9], (QueuedModelFlagsB)0, 1.0f); //end left
		ProcessModelNode(Mirrors[10], (QueuedModelFlagsB)0, 1.0f); //end right 2
		ProcessModelNode(Mirrors[11], (QueuedModelFlagsB)0, 1.0f); //end left 2
		DrawQueueDepthBias = 3000.0f;
		ProcessModelNode(Mirrors[12], (QueuedModelFlagsB)0, 1.0f); //end 1
		ProcessModelNode(Mirrors[13], (QueuedModelFlagsB)0, 1.0f); //end 2
		njPopMatrix(1u);
		DrawQueueDepthBias = 0;
	}
}

void Mirror_Main(ObjectMaster *a1)
{
	if (CurrentLevel == 3)
	{
		if (CurrentAct == 2) Mirror_Display(a1);
	}
	else Mirror_Delete(a1);
}

void Mirror_Load(ObjectMaster *a1)
{
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Mirror_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))Mirror_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))Mirror_Delete;
}

void LoadMirrors()
{
	ObjectMaster *obj;
	EntityData1 *ent;
	ObjectFunc(OF0, Mirror_Load);
	setdata_tp.Distance = 612800.0f;
	obj = LoadObject((LoadObj)2, 3, OF0);
	obj->SETData.SETData = &setdata_tp;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 0;
		ent->Position.y = 0;
		ent->Position.z = 0;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0;
		ent->Rotation.z = 0;
	}
	MirrorsLoaded = true;
}

static void SkyBox_TwinklePark_Load_r(ObjectMaster *a1);
static Trampoline SkyBox_TwinklePark_Load_t(0x61D570, 0x61D57B, SkyBox_TwinklePark_Load_r);
static void __cdecl SkyBox_TwinklePark_Load_r(ObjectMaster *a1)
{
	auto original = reinterpret_cast<decltype(SkyBox_TwinklePark_Load_r)*>(SkyBox_TwinklePark_Load_t.Target());
	original(a1);
	if (EnableTwinklePark && !MirrorsLoaded) LoadMirrors();
}

void __cdecl DrawPirateShipShit(ObjectMaster *a1)
{
	EntityData1 *v1; // esi
	Angle v2; // edi
	Angle v4; // eax
	int v5; // ebp
	int v6; // ebp
	int v7; // ebp
	EntityData1 *v8; // eax

	v1 = a1->Data1;
	v2 = v1->Rotation.z;
	if (!MissedFrames)
	{
		if (v1->Index > 0x1Eu)
		{
			v1->Object->basicdxmodel->mats[4].attr_texId = 28;
			v1->Object->child->basicdxmodel->mats[0].attr_texId = 28;
			v1->Object->child->sibling->basicdxmodel->mats[0].attr_texId = 28;
			v1->Object->child->child->basicdxmodel->mats[2].attr_texId = 28;
			v1->Object->child->child->basicdxmodel->mats[3].attr_texId = 28;
			v1->Object->child->child->basicdxmodel->mats[8].attr_texId = 28;
			v1->Object->child->child->basicdxmodel->mats[12].attr_texId = 28;
		}
		SetTextureToLevelObj();
		//1
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, v4);
		}
		DrawModel(v1->Object->basicdxmodel);
		//2
		njPushMatrix(0);
		njTranslate(0, v1->Object->child->pos[0], v1->Object->child->pos[1], v1->Object->child->pos[2]);
		if (v2)
		{
			njRotateZ(0, -v2);
		}
		DrawModel(v1->Object->child->basicdxmodel);
		//3 
		njPushMatrix(0);
		njTranslate(0, v1->Object->child->child->pos[0], v1->Object->child->child->pos[1], v1->Object->child->child->pos[2]);
		if (v2)
		{
			njRotateZ(0, v2);
		}
		DrawModel(v1->Object->child->child->basicdxmodel);
		njPopMatrix(1u);
		njPopMatrix(1u);
		//4
		njPushMatrix(0);
		njTranslate(0, v1->Object->child->sibling->pos[0], v1->Object->child->sibling->pos[1], v1->Object->child->sibling->pos[2]);
		if (v2)
		{
			njRotateZ(0, -v2);
		}
		DrawModel(v1->Object->child->sibling->basicdxmodel);
		njPopMatrix(1u);
		njPopMatrix(1u);
		if (v1->Index > 0x1Eu)
		{
			v1->Object->basicdxmodel->mats[4].attr_texId = 95;
			v1->Object->child->basicdxmodel->mats[0].attr_texId = 95;
			v1->Object->child->sibling->basicdxmodel->mats[0].attr_texId = 95;
			v1->Object->child->child->basicdxmodel->mats[2].attr_texId = 95;
			v1->Object->child->child->basicdxmodel->mats[3].attr_texId = 95;
			v1->Object->child->child->basicdxmodel->mats[8].attr_texId = 95;
			v1->Object->child->child->basicdxmodel->mats[12].attr_texId = 95;
		}
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		njRotateXYZ(0, 0, v1->Rotation.y, 0);
		if (CharObj2Ptrs[0]->UnderwaterTime) DrawQueueDepthBias = -28000.0f; else DrawQueueDepthBias = 0.0f;
		ProcessModelNode(PirateShipStars, QueuedModelFlagsB_EnableZWrite, 1.0f);
		DrawQueueDepthBias = 0.0f;
		njPopMatrix(1u);
	}
}

void CartFunction(NJS_OBJECT *a1, ObjectThingC *a2)
{
	sub_4BA5D0(a1, a2);
	if (a1 == (NJS_OBJECT*)0x038BAAA4) ProcessModelNode(&CartGlass, (QueuedModelFlagsB)0, 1.0f);
}

void RenderCatapult(NJS_ACTION *a1, float frame, float scale)
{
	sub_405450(a1, frame, scale);
	DrawQueueDepthBias = -17000.0f;
	ProcessModelNode(OCatapultFloor, QueuedModelFlagsB_EnableZWrite, 1.0f);
	DrawQueueDepthBias = 0.0f;
}

void UnloadLevelFiles_STG03()
{
	for (int q = 0; q < LengthOfArray(Mirrors); ++q)
	{
		Mirrors[q] = nullptr;
	}
	delete STG03_0_Info;
	delete STG03_1_Info;
	delete STG03_2_Info;
	STG03_0_Info = nullptr;
	STG03_1_Info = nullptr;
	STG03_2_Info = nullptr;
}

void AddMirror(NJS_OBJECT *object)
{
	for (int q = 0; q < LengthOfArray(Mirrors); ++q)
	{
		if (Mirrors[q] == object) return;
		else if (Mirrors[q] == nullptr)
		{
			Mirrors[q] = object;
			return;
		}
	}
}

void LoadTwinkleParkMirrors(LandTable *landtable)
{
	int colflags;
	for (unsigned int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->COLCount; ++k)
		{
			colflags = landtable->Col[j].Flags;
			if (colflags & 0x8000000)
			{
				landtable->Col[j].Flags &= ~ColFlags_Visible;
				AddMirror(landtable->Col[j].Model);
			}
		}
	}
}

void ParseTwinkleParkMaterials(LandTable *landtable)
{
	int texid;
	for (unsigned int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			texid = landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId;
			//Texanim 1
			if (texid >= 74 && texid <= 87)
			{
				AddTextureAnimation(1, (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k], false, 2, 74, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}

void LoadLevelFiles_STG03()
{
	CheckAndUnloadLevelFiles();
	STG03_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG03\\0.sa1lvl"));
	STG03_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG03\\1.sa1lvl"));
	STG03_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG03\\2.sa1lvl"));
	LandTable *STG03_0 = STG03_0_Info->getlandtable(); //&landtable_0001788C; // STG03_0_Info->getlandtable();
	LandTable *STG03_1 = STG03_1_Info->getlandtable(); //&landtable_00019344; // STG03_1_Info->getlandtable();
	LandTable *STG03_2 = STG03_2_Info->getlandtable(); //&landtable_00019F5C; // STG03_2_Info->getlandtable();
	RemoveMaterialColors_Landtable(STG03_0);
	RemoveMaterialColors_Landtable(STG03_1);
	RemoveMaterialColors_Landtable(STG03_2);
	STG03_0->TexList = &texlist_twinkle1;
	STG03_1->TexList = &texlist_twinkle2;
	STG03_2->TexList = &texlist_twinkle3;
	ResizeTextureList(&OBJ_TWINKLE_TEXLIST, 96);
	WriteData((LandTable**)0x97DA68, STG03_0);
	WriteData((LandTable**)0x97DA6C, STG03_1);
	WriteData((LandTable**)0x97DA70, STG03_2);
	LoadTwinkleParkMirrors(STG03_2);
	ParseTwinkleParkMaterials(STG03_1);
}

void __cdecl DrawObjectFromObjectMaster(ObjectMaster *a2)
{
	EntityData1 *v1; // esi
	Angle v2; // eax

	v1 = a2->Data1;
	if (!MissedFrames)
	{
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y-0.1f, v1->Position.z);
		v2 = v1->Rotation.y;
		if (v2)
		{
			njRotateY(0, v2);
		}
		SetTextureToLevelObj();
		DrawQueueDepthBias = -47952.0f;
		ProcessModelNode_AB_Wrapper(v1->Object, 1.0f);
		DrawQueueDepthBias = 0.0f;
		njPopMatrix(1u);
	}
}

void __cdecl FlowerBedFix(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	sub_407FC0(a1->basicdxmodel, (QueuedModelFlagsB)1);
}

void FixArchLight(NJS_MODEL_SADX *model)
{
	DrawModel(model);
	DrawVisibleModel_Queue(ArchLightLight->basicdxmodel, QueuedModelFlagsB_SomeTextureThing);
}

void FixShittyLightObjects_Pause(NJS_OBJECT *object)
{
	//ArchLight
	if (object == (NJS_OBJECT*)0x38C02C4)
	{
		DrawModel(object->basicdxmodel);
		ProcessModelNode(ArchLightLight, QueuedModelFlagsB_SomeTextureThing, 1.0f);
		ProcessModelNode(object->child, QueuedModelFlagsB_SomeTextureThing, 1.0f);
	}
	//Pole
	if (object == (NJS_OBJECT*)0x38C28A8)
	{
		DrawModel(object->basicdxmodel);
		ProcessModelNode(OPolePole, QueuedModelFlagsB_SomeTextureThing, 1.0f);
		ProcessModelNode(object->child, QueuedModelFlagsB_SomeTextureThing, 1.0f);
	}
	else sub_408530(object);
}

void RenderOPanel_Main(NJS_OBJECT *a1, QueuedModelFlagsB a2)
{
	ProcessModelNode_AB_Wrapper(a1, 1.0f);
}

void RenderOPanel_Transparent(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	ProcessModelNode(OPanelPanel, QueuedModelFlagsB_SomeTextureThing, 1.0f);
}

void ORocketFix1(NJS_MODEL_SADX *a1)
{
	DrawVisibleModel_Queue(a1, QueuedModelFlagsB_SomeTextureThing);
}

void OPoleFix(NJS_MODEL_SADX *a1)
{
	DrawModel(a1);
	DrawVisibleModel_Queue(OPolePole->basicdxmodel, QueuedModelFlagsB_SomeTextureThing);
}

void TwinklePark_Init()
{
	WriteCall((void*)0x061F684, FlowerBedFix);
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
		AddSETFix("SET0300S");
		AddSETFix("SET0301A");
		AddSETFix("SET0301B");
		AddSETFix("SET0301S");
		AddSETFix("SET0302A");
		break;
	case SETFixes_Extra:
		AddSETFix_Extra("SET0300S");
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
	WriteCall((void*)0x621222, DrawObjectFromObjectMaster); //Fix merry-go-round floor shadow flickering
	//ArchLight fixes
	*(NJS_OBJECT*)0x38BFA74 = *LoadModel("system\\data\\STG03\\Models\\000ED90C.sa1mdl", false); //Arch
	*(NJS_OBJECT*)0x38C02C4 = *LoadModel("system\\data\\STG03\\Models\\000EE138.sa1mdl", false); //Arch supporter
	((NJS_OBJECT*)0x38C02C4)->basicdxmodel->meshsets[2].nbMesh = 0; //Disable transparent parts
	ArchLightLight = LoadModel("system\\data\\STG03\\Models\\000EE138.sa1mdl", false); //Arch supporter (transparent)
	ArchLightLight->evalflags |= NJD_EVAL_BREAK;
	ArchLightLight->child = NULL;
	ArchLightLight->basicdxmodel->meshsets[0].nbMesh = 0; //Disable opaque parts
	ArchLightLight->basicdxmodel->meshsets[1].nbMesh = 0; //Disable opaque parts
	ArchLightLight->basicdxmodel->meshsets[3].nbMesh = 0; //Disable opaque parts
	WriteCall((void*)0x0079C5FD, FixArchLight);
	WriteCall((void*)0x0079C36A, FixShittyLightObjects_Pause);
	//Cart fixes
	RemoveVertexColors_Object((NJS_OBJECT*)0x038B8780); //Cart enemy
	LoadModel_ReplaceMeshes((NJS_OBJECT*)0x038BAAA4, "system\\data\\STG03\\Models\\000EAB28.sa1mdl");
	((NJS_OBJECT*)0x038BAAA4)->child->basicdxmodel->meshsets[1].nbMesh = 0;
	CartGlass.basicdxmodel = LoadModel("system\\data\\STG03\\Models\\000EAB28.sa1mdl", false)->child->basicdxmodel;
	CartGlass.basicdxmodel->meshsets[0].nbMesh = 0;
	CartGlass.basicdxmodel->meshsets[2].nbMesh = 0;
	CartGlass.basicdxmodel->meshsets[3].nbMesh = 0;
	CartGlass.basicdxmodel->meshsets[4].nbMesh = 0;
	WriteCall((void*)0x00796F0C, CartFunction);
	RemoveVertexColors_Object((NJS_OBJECT*)0x038BAAA4); //Cart 1 (Sonic)
	RemoveVertexColors_Object((NJS_OBJECT*)0x038BAA70); //Cart 2
	RemoveVertexColors_Object((NJS_OBJECT*)0x038AB250); //Cart 3
	RemoveVertexColors_Object((NJS_OBJECT*)0x038A9130); //Cart 4
	//Amy's barrel fix
	NJS_OBJECT **___AMY_OBJECTS = (NJS_OBJECT **)GetProcAddress(GetModuleHandle(L"CHRMODELS_orig"), "___AMY_OBJECTS");
	___AMY_OBJECTS[1]->child->child->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
	___AMY_OBJECTS[1]->child->child->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
	((NJS_OBJECT*)0x008BF3A0)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT; //shadow blob
	ResizeTextureList((NJS_TEXLIST*)0x26B9960, textures_twinkle1);
	ResizeTextureList((NJS_TEXLIST*)0x2721A8C, textures_twinkle2);
	ResizeTextureList((NJS_TEXLIST*)0x26FEA54, textures_twinkle3);
	//OLight1 fixes
	*(NJS_OBJECT*)0x38C3A9C = *LoadModel("system\\data\\STG03\\Models\\000F1228.sa1mdl", true); //OLight1
	((NJS_OBJECT*)0x38C3A9C)->basicdxmodel->meshsets[7].nbMesh = 0; //Disable transparent part
	((NJS_OBJECT*)0x38C3A9C)->basicdxmodel->mats[7].attrflags &= ~NJD_FLAG_USE_ALPHA; //Disable transparent part
	((NJS_OBJECT*)0x38C3A9C)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x38C3A9C)->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x38C3A9C)->basicdxmodel->mats[0]);
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x38C3A9C)->basicdxmodel->mats[1]);
	*(NJS_OBJECT*)0x38C3A68 = *LoadModel("system\\data\\STG03\\Models\\000F1228.sa1mdl", false); //OLight1 (transparent)
	((NJS_OBJECT*)0x38C3A68)->basicdxmodel->meshsets[1].nbMesh = 0; //Disable opaque part
	((NJS_OBJECT*)0x38C3A68)->basicdxmodel->meshsets[2].nbMesh = 0; //Disable opaque part
	((NJS_OBJECT*)0x38C3A68)->basicdxmodel->meshsets[3].nbMesh = 0; //Disable opaque part
	((NJS_OBJECT*)0x38C3A68)->basicdxmodel->meshsets[4].nbMesh = 0; //Disable opaque part
	((NJS_OBJECT*)0x38C3A68)->basicdxmodel->meshsets[5].nbMesh = 0; //Disable opaque part
	((NJS_OBJECT*)0x38C3A68)->basicdxmodel->meshsets[6].nbMesh = 0; //Disable opaque part
	((NJS_OBJECT*)0x38C3A68)->basicdxmodel->meshsets[7].nbMesh = 0; //Disable opaque part
	((NJS_OBJECT*)0x38C3A9C)->sibling = (NJS_OBJECT*)0x38C3A68; //Make transparent part sibling
	//ORocket fixes
	WriteCall((void*)0x79BEBA, ORocketFix1);
	WriteCall((void*)0x79BEF8, ORocketFix1);
	WriteCall((void*)0x79BF5D, ORocketFix1);
	WriteCall((void*)0x79BF97, ORocketFix1);
	//Pirate ship fixes
	*(NJS_OBJECT*)0x27AC44C = *LoadModel("system\\data\\STG03\\Models\\000AB6DC.sa1mdl", false); //Pirate ship
	PirateShipStars = LoadModel("system\\data\\STG03\\Models\\000AB6DC.sa1mdl", false); //Pirate ship stars mesh
	PirateShipStars->child = NULL;
	PirateShipStars->evalflags |= NJD_EVAL_BREAK;
	PirateShipStars->basicdxmodel->meshsets[0].nbMesh = 0;
	PirateShipStars->basicdxmodel->meshsets[1].nbMesh = 0;
	PirateShipStars->basicdxmodel->meshsets[2].nbMesh = 0;
	PirateShipStars->basicdxmodel->meshsets[3].nbMesh = 0;
	PirateShipStars->basicdxmodel->meshsets[4].nbMesh = 0;
	PirateShipStars->basicdxmodel->meshsets[6].nbMesh = 0;
	PirateShipStars->basicdxmodel->meshsets[7].nbMesh = 0;
	((NJS_OBJECT*)0x27AC44C)->basicdxmodel->meshsets[5].nbMesh = 0;
	WriteJump((void*)0x620BC0, DrawPirateShipShit);
	//Models
	*(NJS_OBJECT*)0x27A3358 = *LoadModel("system\\data\\STG03\\Models\\000A6584.sa1mdl", false); //Fence (merged meshes 0+1 and made it trimesh instead of MESHSET_N)
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x27A3358)->basicdxmodel->mats[1]);
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x27A3358)->basicdxmodel->mats[2]);
	*(NJS_OBJECT*)0x27B0708 = *LoadModel("system\\data\\STG03\\Models\\000AEC6C.sa1mdl", false); //Merry-go-round floor
	*(NJS_OBJECT*)0x27AF5EC = *LoadModel("system\\data\\STG03\\Models\\000ADBE0.sa1mdl", false); //Double door
	*(NJS_OBJECT*)0x27C17CC = *LoadModel("system\\data\\STG03\\Models\\000BB2B4.sa1mdl", false); //OShutter
	*(NJS_OBJECT*)0x27A3F5C = *LoadModel("system\\data\\STG03\\Models\\000A6CD8.sa1mdl", false); //OFlyer
	*(NJS_OBJECT*)0x27AFCF0 = *LoadModel("system\\data\\STG03\\Models\\000AE2BC.sa1mdl", false); //Crown
	*(NJS_OBJECT*)0x38B119C = *LoadModel("system\\data\\STG03\\Models\\000DF3F0.sa1mdl", false); //Ship
	*(NJS_OBJECT*)0x38BE5F4 = *LoadModel("system\\data\\STG03\\Models\\000EC4E0.sa1mdl", false); //Dash pad
	*(NJS_OBJECT*)0x38C07CC = *LoadModel("system\\data\\STG03\\Models\\000EE618.sa1mdl", false); //Jump pad
	*(NJS_OBJECT*)0x38C5B3C = *LoadModel("system\\data\\STG03\\Models\\000F3170.sa1mdl", false); //OCartStopper
	*(NJS_OBJECT*)0x38BE2B4 = *LoadModel("system\\data\\STG03\\Models\\000EC1B4.sa1mdl", false); //OPlanet with rings
	*(NJS_OBJECT*)0x27AE4F4 = *LoadModel("system\\data\\STG03\\Models\\000AD08C.sa1mdl", false); //Merry-go-round (swapped materials/meshsets 0 and 2 for compatibility with DX animation code)
	*(NJS_OBJECT*)0x27BEA34 = *LoadModel("system\\data\\STG03\\Models\\000B95A0.sa1mdl", false); //Horsies
	*(NJS_OBJECT*)0x27AD86C = *LoadModel("system\\data\\STG03\\Models\\000AC45C.sa1mdl", false); //Bowling door
	*(NJS_OBJECT*)0x27A67B4 = *LoadModel("system\\data\\STG03\\Models\\000A8D60.sa1mdl", false); //OBowWindow
	*(NJS_OBJECT*)0x27B23E4 = *LoadModel("system\\data\\STG03\\Models\\000B0818.sa1mdl", false); //Trap door
	*(NJS_OBJECT*)0x27A0454 = *LoadModel("system\\data\\STG03\\Models\\000A3CCC.sa1mdl", false); //Bowling catapult
	((NJS_OBJECT*)0x27A0454)->basicdxmodel->meshsets[0].nbMesh = 0; //Disable transparent floor
	OCatapultFloor = LoadModel("system\\data\\STG03\\Models\\000A3CCC.sa1mdl", false); //Bowling catapult (floor)
	OCatapultFloor->basicdxmodel->meshsets[1].nbMesh = 0;
	OCatapultFloor->basicdxmodel->meshsets[2].nbMesh = 0;
	OCatapultFloor->basicdxmodel->meshsets[3].nbMesh = 0;
	OCatapultFloor->evalflags |= NJD_EVAL_BREAK;
	OCatapultFloor->child = NULL;
	*(NJS_OBJECT*)0x27B5884 = *LoadModel("system\\data\\STG03\\Models\\000B2A40.sa1mdl", false); //O Foothold
	*(NJS_OBJECT*)0x279D364 = *LoadModel("system\\data\\STG03\\Models\\000A0E58.sa1mdl", true); //Barrel
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x279D364)->basicdxmodel->mats[1]);
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x279D364)->basicdxmodel->mats[2]);
	*(NJS_OBJECT*)0x27B6170 = *LoadModel("system\\data\\STG03\\Models\\000B34C8.sa1mdl", false); //Yellow flower pot (wall)
	*(NJS_OBJECT*)0x27B80C4 = *LoadModel("system\\data\\STG03\\Models\\000B4F1C.sa1mdl", false); //Yellow flower pot
	*(NJS_OBJECT*)0x27BAC54 = *LoadModel("system\\data\\STG03\\Models\\000B6CF8.sa1mdl", false); //Yellow flower bed
	*(NJS_OBJECT*)0x27B6A58 = *LoadModel("system\\data\\STG03\\Models\\000B3F50.sa1mdl", false); //Pink flower pot (wall)
	*(NJS_OBJECT*)0x27B972C = *LoadModel("system\\data\\STG03\\Models\\000B5EE8.sa1mdl", false); //Pink flower pot
	*(NJS_OBJECT*)0x27BC1C4 = *LoadModel("system\\data\\STG03\\Models\\000B7B08.sa1mdl", false); //Pink flower bed
	*(NJS_OBJECT*)0x27BF9DC = *LoadModel("system\\data\\STG03\\Models\\000B9E98.sa1mdl", false); //Spinning roof
	*(NJS_OBJECT*)0x27BCD7C = *LoadModel("system\\data\\STG03\\Models\\000B812C.sa1mdl", false); //Lilypad
	*(NJS_OBJECT*)0x27C05FC = *LoadModel("system\\data\\STG03\\Models\\000BA81C.sa1mdl", false); //Monitor in Act 1 (meshes 4 and 5 swapped for UV code compatibility)
	*(NJS_OBJECT*)0x27B3DB8 = *LoadModel("system\\data\\STG03\\Models\\000B13A8.sa1mdl", false); //Bowling pin
	*(NJS_OBJECT*)0x38E50C4 = *LoadModel("system\\data\\STG03\\Models\\000C6264.sa1mdl", false); //Buyon feet
	*(NJS_OBJECT*)0x38E3584 = *LoadModel("system\\data\\STG03\\Models\\000C47C8.sa1mdl", false); //Buyon head
	*(NJS_OBJECT*)0x38E3B2C = *LoadModel("system\\data\\STG03\\Models\\000C4D60.sa1mdl", false); //Buyon body
	*(NJS_OBJECT*)0x27A247C = *LoadModel("system\\data\\STG03\\Models\\000A56D0.sa1mdl", false); //Rollercoaster
	((NJS_ACTION*)0x27C295C)->object = LoadModel("system\\data\\STG03\\Models\\000A7A7C.sa1mdl", false); //Flag 1
	((NJS_ACTION*)0x27C26B4)->object = LoadModel("system\\data\\STG03\\Models\\000A7640.sa1mdl", false); //Flag 2
	((NJS_ACTION*)0x27C2EA4)->object = LoadModel("system\\data\\STG03\\Models\\000A89E4.sa1mdl", false); //OFlagWLamp
	*(NJS_OBJECT*)0x27A0560 = *LoadModel("system\\data\\STG03\\Models\\000A3DD0.sa1mdl", false); //OFlagWLamp light
	AddAlphaRejectMaterial(&((NJS_OBJECT*)0x27A0560)->basicdxmodel->mats[0]);
	*(NJS_OBJECT*)0x27B49AC = *LoadModel("system\\data\\STG03\\Models\\000B1DEC.sa1mdl", false); //OLamp
	AddAlphaRejectMaterial(&((NJS_OBJECT*)0x27B49AC)->child->basicdxmodel->mats[0]);
	AddAlphaRejectMaterial(&((NJS_OBJECT*)0x27B49AC)->child->sibling->basicdxmodel->mats[0]);
	//OPanel fix
	*(NJS_OBJECT*)0x38C214C = *LoadModel("system\\data\\STG03\\Models\\000EFF38.sa1mdl", false); //OPanel (opaque)
	((NJS_OBJECT*)0x38C214C)->basicdxmodel->meshsets[1].nbMesh = 0;
	((NJS_OBJECT*)0x38C214C)->basicdxmodel->meshsets[4].nbMesh = 0;
	((NJS_OBJECT*)0x38C214C)->basicdxmodel->meshsets[6].nbMesh = 0;
	OPanelPanel = LoadModel("system\\data\\STG03\\Models\\000EFF38.sa1mdl", false); //OPanel (transparent)
	OPanelPanel->basicdxmodel->meshsets[0].nbMesh = 0;
	OPanelPanel->basicdxmodel->meshsets[2].nbMesh = 0;
	OPanelPanel->basicdxmodel->meshsets[3].nbMesh = 0;
	OPanelPanel->basicdxmodel->meshsets[5].nbMesh = 0;
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x38C214C)->basicdxmodel->mats[2]);
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x38C214C)->basicdxmodel->mats[3]);
	WriteCall((void*)0x79DB94, RenderOPanel_Main);
	WriteCall((void*)0x79DBA4, RenderOPanel_Transparent);
	//OPole fix
	*(NJS_OBJECT*)0x38C28A8 = *LoadModel("system\\data\\STG03\\Models\\000F066C.sa1mdl", false); //OPole model (opaque)
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x38C28A8)->basicdxmodel->mats[3]);
	((NJS_OBJECT*)0x38C28A8)->basicdxmodel->meshsets[1].nbMesh = 0;
	((NJS_OBJECT*)0x38C28A8)->basicdxmodel->meshsets[2].nbMesh = 0;
	((NJS_OBJECT*)0x38C28A8)->basicdxmodel->meshsets[4].nbMesh = 0;
	OPolePole = LoadModel("system\\data\\STG03\\Models\\000F066C.sa1mdl", false); //OPole model (transparent)
	OPolePole->basicdxmodel->meshsets[0].nbMesh = 0;
	OPolePole->basicdxmodel->meshsets[3].nbMesh = 0;
	OPolePole->evalflags |= NJD_EVAL_BREAK;
	OPolePole->child = NULL;
	WriteCall((void*)0x79CD61, OPoleFix);
	WriteCall((void*)0x621FE5, RenderCatapult); //Catapult fix
	//Fog and draw distance
	for (unsigned int i = 0; i < 3; i++)
	{
		TwinklePark1Fog[i].Layer = 1500.0f;
		TwinklePark2Fog[i].Layer = -1400.0f;
		TwinklePark2Fog[i].Distance = -3200.0f;
		TwinklePark2Fog[i].Color = 0xFF100030;
		TwinklePark3Fog[i].Layer = -800.0f;
		TwinklePark3Fog[i].Distance = -2200.0f;
		TwinklePark3Fog[i].Color = 0xFF100030;
		TwinklePark4Fog[i].Color = 0xFF000000;
		TwinklePark4Fog[i].Layer = 1.0f;
		TwinklePark4Fog[i].Distance = 1200.0f;
		TwinklePark4Fog[i].Toggle = 1;
	}
	//Lantern stuff
	if (DLLLoaded_Lantern)
	{
		material_register_ptr(WhiteDiffuse_Twinkle, LengthOfArray(WhiteDiffuse_Twinkle), &ForceWhiteDiffuse);
	}
}

void TwinklePark_OnFrame()
{
	if (CurrentLevel == LevelIDs_TwinklePark || CurrentLevel == LevelIDs_TwinkleCircuit)
	{
		if (!IsGamePaused()) PoleUVIncrease += 16;
		if (PoleUVIncrease >= 255) PoleUVIncrease -= 255;
		for (unsigned int i = 0; i < 12; i++)
		{
			OPolePole->basicdxmodel->meshsets[1].vertuv[i].v = PoleUVs[i].v + PoleUVIncrease;
		}
	}
}