#include "stdafx.h"

NJS_TEXNAME textures_obj_twinkle[96];
NJS_TEXLIST texlist_obj_twinkle = { arrayptrandlength(textures_obj_twinkle) };

NJS_TEXNAME textures_twinkle1[35];
NJS_TEXLIST texlist_twinkle1 = { arrayptrandlength(textures_twinkle1) };

NJS_TEXNAME textures_twinkle2[88];
NJS_TEXLIST texlist_twinkle2 = { arrayptrandlength(textures_twinkle2) };

NJS_TEXNAME textures_twinkle3[30];
NJS_TEXLIST texlist_twinkle3 = { arrayptrandlength(textures_twinkle3) };

DataArray(FogData, TwinklePark1Fog, 0x026B339C, 3);
DataArray(FogData, TwinklePark2Fog, 0x026B33CC, 3);
DataArray(FogData, TwinklePark3Fog, 0x026B33FC, 3);
DataArray(FogData, TwinklePark4Fog, 0x026B342C, 3);
FunctionPointer(void, sub_61D4E0, (ObjectMaster *a1), 0x61D4E0);
FunctionPointer(void, sub_61D1F0, (ObjectMaster *a1), 0x61D1F0);
FunctionPointer(void, sub_4BA5D0, (NJS_OBJECT *a1, ObjectThingC *a2), 0x4BA5D0);
FunctionPointer(void, sub_4BA710, (NJS_OBJECT *a1, ObjectThingC *a2), 0x4BA710);

NJS_OBJECT *PirateShipStars = nullptr;
NJS_OBJECT CartGlass = { NJD_EVAL_BREAK | NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
NJS_OBJECT *ArchLightLight = nullptr;
NJS_OBJECT *OPanelPanel = nullptr;
NJS_OBJECT *OPole_Main = nullptr;
NJS_OBJECT *OPole_Pole = nullptr;
NJS_OBJECT *OCatapultFloor = nullptr;

SETObjData setdata_tp = {};
static int PoleUVIncrease = 0;

NJS_TEXNAME textures_tpobjects[97];

NJS_MATERIAL* WhiteDiffuse_Twinkle[] = {
	// Satellite
	((NJS_MATERIAL*)0x038AE590),
	((NJS_MATERIAL*)0x038AE5A4),
};

void __cdecl DrawPirateShipShit(ObjectMaster *a1)
{
	EntityData1 *v1; // esi
	Angle v2; // edi
	Angle v4; // eax

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
		// 1
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, -v4);
		}
		DrawModel(v1->Object->basicdxmodel);
		// 2
		njPushMatrix(0);
		njTranslate(0, v1->Object->child->pos[0], v1->Object->child->pos[1], v1->Object->child->pos[2]);
		if (v2)
		{
			njRotateZ(0, v2);
		}
		DrawModel(v1->Object->child->basicdxmodel);
		// 3 
		njPushMatrix(0);
		njTranslate(0, v1->Object->child->child->pos[0], v1->Object->child->child->pos[1], v1->Object->child->child->pos[2]);
		if (v2)
		{
			njRotateZ(0, -v2);
		}
		DrawModel(v1->Object->child->child->basicdxmodel);
		njPopMatrix(1u);
		njPopMatrix(1u);
		// 4
		njPushMatrix(0);
		njTranslate(0, v1->Object->child->sibling->pos[0], v1->Object->child->sibling->pos[1], v1->Object->child->sibling->pos[2]);
		if (v2)
		{
			njRotateZ(0, v2);
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
		lateDrawObject(PirateShipStars, QueuedModelFlagsB_EnableZWrite, 1.0f);
		DrawQueueDepthBias = 0.0f;
		njPopMatrix(1u);
	}
}

void CartFunction(NJS_OBJECT *a1, ObjectThingC *a2)
{
	sub_4BA5D0(a1, a2);
	if (a1 == (NJS_OBJECT*)0x038BAAA4) lateDrawObject(&CartGlass, (QueuedModelFlagsB)0, 1.0f);
}

void RenderCatapult(NJS_ACTION *a1, float frame, float scale)
{
	ds_ActionClip(a1, frame, scale);
	DrawQueueDepthBias = -17000.0f;
	lateDrawObject(OCatapultFloor, QueuedModelFlagsB_EnableZWrite, 1.0f);
	DrawQueueDepthBias = 0.0f;
}

void UnloadLevelFiles_STG03()
{
	delete STG03_0_Info;
	delete STG03_1_Info;
	delete STG03_2_Info;
	STG03_0_Info = nullptr;
	STG03_1_Info = nullptr;
	STG03_2_Info = nullptr;
}

void ParseTwinkleParkMaterials(LandTable *landtable)
{
	int texid;
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			texid = landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId;
			// Texanim 1
			if (texid >= 74 && texid <= 87)
			{
				AddTextureAnimation(3, 1, (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k], false, 2, 74, 87);
			}
		}
	}
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
		ds_DrawObjectClip(v1->Object, 1.0f);
		DrawQueueDepthBias = 0.0f;
		njPopMatrix(1u);
	}
}

void __cdecl FlowerBedFix(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	if (a1 == (NJS_OBJECT*)0x27B6170 || a1 == (NJS_OBJECT*)0x27B80C4 || a1 == (NJS_OBJECT*)0x27BAC54 || a1 == (NJS_OBJECT*)0x27B6A58 || a1 == (NJS_OBJECT*)0x27B972C || a1 == (NJS_OBJECT*)0x27BC1C4)
	{
		DrawModelMesh(a1->basicdxmodel, (QueuedModelFlagsB)1);
	}
	else late_DrawObjectClipEx(a1, a2, a3);
}

void FixArchLight(NJS_MODEL_SADX *model)
{
	DrawModel(model);
	late_DrawModel(ArchLightLight->basicdxmodel, QueuedModelFlagsB_SomeTextureThing);
}

void FixShittyLightObjects_Pause(NJS_OBJECT *object)
{
	// ArchLight
	if (object == (NJS_OBJECT*)0x38C02C4)
	{
		DrawModel(object->basicdxmodel);
		lateDrawObject(ArchLightLight, QueuedModelFlagsB_SomeTextureThing, 1.0f);
		lateDrawObject(object->child, QueuedModelFlagsB_SomeTextureThing, 1.0f);
	}
	// Pole
	if (object == (NJS_OBJECT*)0x38C28A8)
	{
		DrawModel(object->basicdxmodel);
		lateDrawObject(OPole_Pole, QueuedModelFlagsB_SomeTextureThing, 1.0f);
		lateDrawObject(object->child, QueuedModelFlagsB_SomeTextureThing, 1.0f);
	}
	else dsDrawObject(object);
}

void RenderOPanel_Main(NJS_OBJECT *a1, QueuedModelFlagsB a2)
{
	ds_DrawObjectClip(a1, 1.0f);
}

void RenderOPanel_Transparent(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	lateDrawObject(OPanelPanel, QueuedModelFlagsB_SomeTextureThing, 1.0f);
}

void ORocketFix1(NJS_MODEL_SADX *a1)
{
	late_DrawModel(a1, QueuedModelFlagsB_SomeTextureThing);
}

void OPoleFix1(NJS_MODEL_SADX *a1)
{
	DrawModel(OPole_Main->basicdxmodel);
	late_DrawModel(OPole_Pole->basicdxmodel, QueuedModelFlagsB_SomeTextureThing);
}

void OPoleFix2(NJS_MODEL_SADX *model, QueuedModelFlagsB blend)
{
	late_DrawModel(OPole_Main->child->basicdxmodel, blend);
}

void TwinklePark_Init()
{
	ReplacePVM("BG_SHAREOBJ");
	ReplacePVM("OBJ_SHAREOBJ");
	ReplaceCAM("CAM0300S");
	ReplaceCAM("CAM0301A");
	ReplaceCAM("CAM0301B");
	ReplaceCAM("CAM0301S");
	ReplaceCAM("CAM0302A");
	ReplaceCAM("CAM0302S");
	ReplaceSET("SET0300S");
	ReplaceSET("SET0301A");
	ReplaceSET("SET0301B");
	ReplaceSET("SET0301S");
	ReplaceSET("SET0302A");
	ReplaceSET("SET0302S");
	ReplacePVM("OBJ_TWINKLE");
	ReplacePVM("TWINKLE01");
	ReplacePVM("TWINKLE02");
	ReplacePVM("TWINKLE03");
	// Fog and draw distance
	for (int i = 0; i < 3; i++)
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
}

void TwinklePark_Load()
{
	STG03_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG03\\0.sa1lvl"));
	STG03_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG03\\1.sa1lvl"));
	STG03_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG03\\2.sa1lvl"));
	LandTable* STG03_0 = STG03_0_Info->getlandtable(); //&landtable_0001788C; // STG03_0_Info->getlandtable();
	LandTable* STG03_1 = STG03_1_Info->getlandtable(); //&landtable_00019344; // STG03_1_Info->getlandtable();
	LandTable* STG03_2 = STG03_2_Info->getlandtable(); //&landtable_00019F5C; // STG03_2_Info->getlandtable();
	RemoveMaterialColors_Landtable(STG03_0);
	RemoveMaterialColors_Landtable(STG03_1);
	RemoveMaterialColors_Landtable(STG03_2);
	STG03_0->TexList = &texlist_twinkle1;
	STG03_1->TexList = &texlist_twinkle2;
	STG03_2->TexList = &texlist_twinkle3;
	for (int i = 0; i < STG03_1->COLCount; i++)
	{
		STG03_1->Col[i].blockbits = 0; // Remove block bit flags that cause pop-in
	}
	WriteData((LandTable**)0x97DA68, STG03_0);
	WriteData((LandTable**)0x97DA6C, STG03_1);
	WriteData((LandTable**)0x97DA70, STG03_2);
	ParseTwinkleParkMaterials(STG03_1);
	if (!ModelsLoaded_STG03)
	{
		OBJ_TWINKLE_TEXLIST = texlist_obj_twinkle;
		TWINKLE01_TEXLIST = texlist_twinkle1;
		TWINKLE02_TEXLIST = texlist_twinkle2;
		TWINKLE03_TEXLIST = texlist_twinkle3;
		// Code fixes
		WriteCall((void*)0x061F684, FlowerBedFix);
		WriteCall((void*)0x621222, DrawObjectFromObjectMaster); // Fix merry-go-round floor shadow flickering
		// Material fixes
		RemoveVertexColors_Object((NJS_OBJECT*)0x27B1374); // OCandle1
		RemoveVertexColors_Object((NJS_OBJECT*)0x27B1FB4); // OCandle2
		// Pirate ship fixes
		*(NJS_OBJECT*)0x27AC44C = *LoadModel("system\\data\\STG03\\Models\\000AB6DC.sa1mdl"); // Pirate ship
		PirateShipStars = CloneObject((NJS_OBJECT*)0x27AC44C); // Pirate ship stars mesh
		PirateShipStars->child = NULL;
		PirateShipStars->evalflags |= NJD_EVAL_BREAK;
		HideMesh_Object(PirateShipStars, 0, 1, 2, 3, 4, 5, 6, 7);
		HideMesh_Object(((NJS_OBJECT*)0x27AC44C), 5);
		WriteJump((void*)0x620BC0, DrawPirateShipShit);
		// Models
		*(NJS_OBJECT*)0x27A3358 = *LoadModel("system\\data\\STG03\\Models\\000A6584.sa1mdl"); // Fence (merged meshes 0+1 and made it trimesh instead of MESHSET_N)
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x27A3358)->basicdxmodel->mats[1]);
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x27A3358)->basicdxmodel->mats[2]);
		*(NJS_OBJECT*)0x27B0708 = *LoadModel("system\\data\\STG03\\Models\\000AEC6C.sa1mdl"); // Merry-go-round floor
		*(NJS_OBJECT*)0x27AF5EC = *LoadModel("system\\data\\STG03\\Models\\000ADBE0.sa1mdl"); // Double door
		*(NJS_OBJECT*)0x27C17CC = *LoadModel("system\\data\\STG03\\Models\\000BB2B4.sa1mdl"); // OShutter
		SwapMeshsets((NJS_OBJECT*)0x27C17CC, 3, 5); // For UV animation
		*(NJS_OBJECT*)0x27A3F5C = *LoadModel("system\\data\\STG03\\Models\\000A6CD8.sa1mdl"); // OFlyer
		*(NJS_OBJECT*)0x27AFCF0 = *LoadModel("system\\data\\STG03\\Models\\000AE2BC.sa1mdl"); // Crown
		*(NJS_OBJECT*)0x38B119C = *LoadModel("system\\data\\STG03\\Models\\000DF3F0.sa1mdl"); // Ship
		*(NJS_OBJECT*)0x27AE4F4 = *LoadModel("system\\data\\STG03\\Models\\000AD08C.sa1mdl"); // Merry-go-round (swapped materials/meshsets 0 and 2 for compatibility with DX animation code)
		*(NJS_OBJECT*)0x27BEA34 = *LoadModel("system\\data\\STG03\\Models\\000B95A0.sa1mdl"); // Horsies
		*(NJS_OBJECT*)0x27AD86C = *LoadModel("system\\data\\STG03\\Models\\000AC45C.sa1mdl"); // Bowling door
		*(NJS_OBJECT*)0x27A67B4 = *LoadModel("system\\data\\STG03\\Models\\000A8D60.sa1mdl"); // OBowWindow
		*(NJS_OBJECT*)0x27B23E4 = *LoadModel("system\\data\\STG03\\Models\\000B0818.sa1mdl"); // Trap door
		*(NJS_OBJECT*)0x27B2DE4 = *LoadModel("system\\data\\STG03\\Models\\000B0A9C.sa1mdl"); // ODoor
		*(NJS_OBJECT*)0x27B5884 = *LoadModel("system\\data\\STG03\\Models\\000B2A40.sa1mdl"); // O Foothold
		*(NJS_OBJECT*)0x27B6170 = *LoadModel("system\\data\\STG03\\Models\\000B34C8.sa1mdl"); // Yellow flower pot (wall)
		*(NJS_OBJECT*)0x27B80C4 = *LoadModel("system\\data\\STG03\\Models\\000B4F1C.sa1mdl"); // Yellow flower pot
		*(NJS_OBJECT*)0x27BAC54 = *LoadModel("system\\data\\STG03\\Models\\000B6CF8.sa1mdl"); // Yellow flower bed
		*(NJS_OBJECT*)0x27B6A58 = *LoadModel("system\\data\\STG03\\Models\\000B3F50.sa1mdl"); // Pink flower pot (wall)
		*(NJS_OBJECT*)0x27B972C = *LoadModel("system\\data\\STG03\\Models\\000B5EE8.sa1mdl"); // Pink flower pot
		*(NJS_OBJECT*)0x27BC1C4 = *LoadModel("system\\data\\STG03\\Models\\000B7B08.sa1mdl"); // Pink flower bed
		*(NJS_OBJECT*)0x27BF9DC = *LoadModel("system\\data\\STG03\\Models\\000B9E98.sa1mdl"); // Spinning roof
		*(NJS_OBJECT*)0x27BCD7C = *LoadModel("system\\data\\STG03\\Models\\000B812C.sa1mdl"); // Lilypad
		*(NJS_OBJECT*)0x27C05FC = *LoadModel("system\\data\\STG03\\Models\\000BA81C.sa1mdl"); // Monitor in Act 1 (meshes 4 and 5 swapped for UV code compatibility)
		*(NJS_OBJECT*)0x27B3DB8 = *LoadModel("system\\data\\STG03\\Models\\000B13A8.sa1mdl"); // Bowling pin
		*(NJS_OBJECT*)0x38E50C4 = *LoadModel("system\\data\\STG03\\Models\\000C6264.sa1mdl"); // Buyon feet
		*(NJS_OBJECT*)0x38E3584 = *LoadModel("system\\data\\STG03\\Models\\000C47C8.sa1mdl"); // Buyon head
		*(NJS_OBJECT*)0x38E3B2C = *LoadModel("system\\data\\STG03\\Models\\000C4D60.sa1mdl"); // Buyon body
		*(NJS_OBJECT*)0x27A247C = *LoadModel("system\\data\\STG03\\Models\\000A56D0.sa1mdl"); // Rollercoaster
		((NJS_ACTION*)0x27C295C)->object = LoadModel("system\\data\\STG03\\Models\\000A7A7C.sa1mdl"); // Flag 1
		((NJS_ACTION*)0x27C26B4)->object = LoadModel("system\\data\\STG03\\Models\\000A7640.sa1mdl"); // Flag 2
		((NJS_ACTION*)0x27C2EA4)->object = LoadModel("system\\data\\STG03\\Models\\000A89E4.sa1mdl"); // OFlagWLamp
		*(NJS_OBJECT*)0x27A0560 = *LoadModel("system\\data\\STG03\\Models\\000A3DD0.sa1mdl"); // OFlagWLamp light
		AddAlphaRejectMaterial(&((NJS_OBJECT*)0x27A0560)->basicdxmodel->mats[0]);
		*(NJS_OBJECT*)0x27B49AC = *LoadModel("system\\data\\STG03\\Models\\000B1DEC.sa1mdl"); // OLamp
		AddAlphaRejectMaterial(&((NJS_OBJECT*)0x27B49AC)->child->basicdxmodel->mats[0]);
		AddAlphaRejectMaterial(&((NJS_OBJECT*)0x27B49AC)->child->sibling->basicdxmodel->mats[0]);
		// Bowling fixes
		*(NJS_OBJECT*)0x27A0454 = *LoadModel("system\\data\\STG03\\Models\\000A3CCC.sa1mdl"); // Bowling catapult
		HideMesh_Object(((NJS_OBJECT*)0x27A0454), 0); // Disable transparent floor
		OCatapultFloor = LoadModel("system\\data\\STG03\\Models\\000A3CCC.sa1mdl"); // Bowling catapult (floor)
		HideMesh_Object(OCatapultFloor, 1, 2, 3);
		OCatapultFloor->evalflags |= NJD_EVAL_BREAK;
		OCatapultFloor->child = NULL;
		WriteCall((void*)0x621FE5, RenderCatapult); // Bowling catapult fix
		// Barrel stuff
		*(NJS_OBJECT*)0x279D364 = *LoadModel("system\\data\\STG03\\Models\\000A0E58.sa1mdl"); // Barrel
		*(NJS_OBJECT*)0x279D6AC = *LoadModel("system\\data\\STG03\\Models\\000A1064.sa1mdl"); // Barrel (destroyed) part 1
		*(NJS_OBJECT*)0x279D7F4 = *LoadModel("system\\data\\STG03\\Models\\000A11A4.sa1mdl"); // Barrel (destroyed) part 2
		*(NJS_OBJECT*)0x279D900 = *LoadModel("system\\data\\STG03\\Models\\000A12A8.sa1mdl"); // Barrel (destroyed) part 3
		*(NJS_OBJECT*)0x279DA28 = *LoadModel("system\\data\\STG03\\Models\\000A13C8.sa1mdl"); // Barrel (destroyed) part 4
		*(NJS_OBJECT*)0x279DB14 = *LoadModel("system\\data\\STG03\\Models\\000A14AC.sa1mdl"); // Barrel (destroyed) part 5
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x279D364)->basicdxmodel->mats[1]);
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x279D364)->basicdxmodel->mats[2]);
		// Lantern stuff
		if (DLLLoaded_Lantern)
		{
			material_register(WhiteDiffuse_Twinkle, LengthOfArray(WhiteDiffuse_Twinkle), &ForceWhiteDiffuse);
		}
		ModelsLoaded_STG03 = true;
	}
	if (!ModelsLoaded_ShareObj) ShareObj_Init();
}

void ShareObj_Init()
{
	if (!ModelsLoaded_ShareObj)
	{
		// OLight1 fixes
		*(NJS_OBJECT*)0x38C3A9C = *LoadModel("system\\data\\STG03\\Models\\000F1228.sa1mdl"); // OLight1
		HideMesh_Object(((NJS_OBJECT*)0x38C3A9C), 7); // Disable transparent part
		((NJS_OBJECT*)0x38C3A9C)->basicdxmodel->mats[7].attrflags &= ~NJD_FLAG_USE_ALPHA; // Disable transparent part
		((NJS_OBJECT*)0x38C3A9C)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x38C3A9C)->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x38C3A9C)->basicdxmodel->mats[0]);
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x38C3A9C)->basicdxmodel->mats[1]);
		*(NJS_OBJECT*)0x38C3A68 = *LoadModel("system\\data\\STG03\\Models\\000F1228.sa1mdl"); // OLight1 (transparent)
		HideMesh_Object(((NJS_OBJECT*)0x38C3A68), 1, 2, 3, 4, 5, 6, 7); // Disable opaque part
		((NJS_OBJECT*)0x38C3A9C)->sibling = (NJS_OBJECT*)0x38C3A68; // Make transparent part sibling
		// ORocket fixes
		WriteCall((void*)0x79BEBA, ORocketFix1);
		WriteCall((void*)0x79BEF8, ORocketFix1);
		WriteCall((void*)0x79BF5D, ORocketFix1);
		WriteCall((void*)0x79BF97, ORocketFix1);
		// Cart fixes
		RemoveVertexColors_Object((NJS_OBJECT*)0x38B8780); // Cart enemy
		// Cart models (destroyed)
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38BA758); // 1
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38BA284); // 2
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38BA138); // 3
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38B9C9C); // 4
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38B9B6C); // 5
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38B9950); // 6
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38B97FC); // 7
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38B95E0); // 8
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38B907C); // 9
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38A7164); // 11
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38A7630); // 12
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38A77AC); // 13
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38A7C78); // 14
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38A7DE0); // 15
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38A802C); // 16
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38A81B8); // 17
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38A8404); // 18
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38A896C); // 19
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38A90D0); // 20
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38A9284); // 22
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38A9750); // 23
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38A98CC); // 24
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38A9D98); // 25
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38A9F00); // 26
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38AA14C); // 27
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38AA2D8); // 28
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38AA524); // 29
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38AAA8C); // 30
		RemoveVertexColors_Model((NJS_MODEL_SADX*)0x38AB1F0); // 31
		LoadModel_ReplaceMeshes((NJS_OBJECT*)0x038BAAA4, "system\\data\\STG03\\Models\\000EAB28.sa1mdl");
		HideMesh_Object(((NJS_OBJECT*)0x038BAAA4)->child, 1);
		CartGlass.basicdxmodel = LoadModel("system\\data\\STG03\\Models\\000EAB28.sa1mdl")->child->basicdxmodel;
		HideMesh_Object(&CartGlass, 0, 2, 3, 4);
		WriteCall((void*)0x00796F0C, CartFunction);
		RemoveVertexColors_Object((NJS_OBJECT*)0x038BAAA4); // Cart 1 (Sonic)
		RemoveVertexColors_Object((NJS_OBJECT*)0x038BAA70); // Cart 2
		RemoveVertexColors_Object((NJS_OBJECT*)0x038AB250); // Cart 3
		RemoveVertexColors_Object((NJS_OBJECT*)0x038A9130); // Cart 4
		// ArchLight fixes
		*(NJS_OBJECT*)0x38BFA74 = *LoadModel("system\\data\\STG03\\Models\\000ED90C.sa1mdl"); // Arch
		*(NJS_OBJECT*)0x38C02C4 = *LoadModel("system\\data\\STG03\\Models\\000EE138.sa1mdl"); // Arch supporter
		ArchLightLight = CloneObject((NJS_OBJECT*)0x38C02C4); // Arch supporter (transparent)
		HideMesh_Object(((NJS_OBJECT*)0x38C02C4), 2); // Disable transparent parts
		ArchLightLight->evalflags |= NJD_EVAL_BREAK;
		ArchLightLight->child = NULL;
		HideMesh_Object(ArchLightLight, 0, 1, 3); // Disable opaque parts
		WriteCall((void*)0x0079C5FD, FixArchLight);
		WriteCall((void*)0x0079C36A, FixShittyLightObjects_Pause);
		// Other models
		*(NJS_OBJECT*)0x38BE5F4 = *LoadModel("system\\data\\STG03\\Models\\000EC4E0.sa1mdl"); // Dash pad
		*(NJS_OBJECT*)0x38C07CC = *LoadModel("system\\data\\STG03\\Models\\000EE618.sa1mdl"); // Jump pad
		*(NJS_OBJECT*)0x38C5B3C = *LoadModel("system\\data\\STG03\\Models\\000F3170.sa1mdl"); // OCartStopper
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x38C5B3C)->basicdxmodel->mats[2]);
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x38C5B3C)->basicdxmodel->mats[8]);
		*(NJS_OBJECT*)0x38BE2B4 = *LoadModel("system\\data\\STG03\\Models\\000EC1B4.sa1mdl"); // OPlanet with rings
		// OPanel fix
		*(NJS_OBJECT*)0x38C214C = *LoadModel("system\\data\\STG03\\Models\\000EFF38.sa1mdl"); // OPanel (opaque)
		OPanelPanel = CloneObject((NJS_OBJECT*)0x38C214C); // OPanel (transparent)
		HideMesh_Object(((NJS_OBJECT*)0x38C214C), 1, 4, 6);
		HideMesh_Object(OPanelPanel, 0, 2, 3, 5);
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x38C214C)->basicdxmodel->mats[2]);
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x38C214C)->basicdxmodel->mats[3]);
		WriteCall((void*)0x79DB94, RenderOPanel_Main);
		WriteCall((void*)0x79DBA4, RenderOPanel_Transparent);
		// OPole fix
		OPole_Main = LoadModel("system\\data\\STG03\\Models\\000F066C.sa1mdl"); // OPole model (opaque + light child object)
		OPole_Pole = CloneObject(OPole_Main); // OPole model (transparent)
		AddWhiteDiffuseMaterial(&OPole_Main->basicdxmodel->mats[3]);
		HideMesh_Object(OPole_Main, 1, 2, 4);
		HideMesh_Object(OPole_Pole, 0, 3);
		OPole_Pole->evalflags |= NJD_EVAL_BREAK;
		OPole_Pole->child = NULL;
		WriteCall((void*)0x79CD61, OPoleFix1);
		WriteCall((void*)0x79CD96, OPoleFix2);
		AddUVAnimation_Permanent(LevelIDs_TwinklePark, 0, &OPole_Pole->basicdxmodel->meshsets[1], 0, 0, 16);
		AddUVAnimation_Permanent(LevelIDs_TwinkleCircuit, -1, &OPole_Pole->basicdxmodel->meshsets[1], 0, 0, 16);
		ModelsLoaded_ShareObj = true;
	}
}