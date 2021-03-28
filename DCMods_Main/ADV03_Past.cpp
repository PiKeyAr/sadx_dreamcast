#include "stdafx.h"

// TODO: Water ripples in Knuckles' cutscene "My father is coming here soon" aren't positioned exactly like on DC
// TODO: Pacman's eyes (the invisible bit) don't ignore specular
// TODO: Look into "invalid" reflection textures

// Texlists
NJS_TEXNAME textures_past0[60];
NJS_TEXLIST texlist_past00 = { arrayptrandlength(textures_past0) };

NJS_TEXNAME textures_past1[83];
NJS_TEXLIST texlist_past01 = { arrayptrandlength(textures_past1) };

NJS_TEXNAME textures_past2[85];
NJS_TEXLIST texlist_past02 = { arrayptrandlength(textures_past2) };

// Model pointers
ModelInfo *PastChaoModel_2_Info = nullptr;
ModelInfo *PastChaoModel_7_Info = nullptr;
ModelInfo *PastChaoModel_8_Info = nullptr;
ModelInfo *PastChaoModel_9_Info = nullptr;
ModelInfo *PastChaoModel_10_Info = nullptr;
NJS_OBJECT *PastChaoModel_2 = nullptr;
NJS_OBJECT *PastChaoModel_7 = nullptr;
NJS_OBJECT *PastChaoModel_8 = nullptr;
NJS_OBJECT *PastChaoModel_9 = nullptr;
NJS_OBJECT *PastChaoModel_10 = nullptr;
NJS_OBJECT* PalmBottom = nullptr;
NJS_OBJECT* PalmBottom2 = nullptr;
NJS_OBJECT* TreeShadow = nullptr;

FunctionPointer(void, AllocateEventObject, (ObjectMaster *a1, NJS_ACTION *a2, NJS_TEXLIST *a3, float a4, char a5, char a6), 0x42FE00);
FunctionPointer(void, sub_6EEFF0, (NJS_OBJECT *a1), 0x6EEFF0);
FunctionPointer(void, sub_4187D0, (EntityData1 *a1), 0x4187D0);
DataArray(DrawDistance, DrawDist_Past1, 0x0111E540, 3);
DataArray(DrawDistance, DrawDist_Past2, 0x0111E558, 3);
DataArray(DrawDistance, DrawDist_Past3, 0x0111E570, 3);
DataArray(FogData, FogData_Past1, 0x0111E588, 3);
DataArray(FogData, FogData_Past2, 0x0111E5B8, 3);
DataArray(FogData, FogData_Past3, 0x0111E5E8, 3);
DataPointer(void*, dword_3D08844, 0x3D08844);
static int ocean_act1 = 73;
static int ocean_act2 = 59;
static int water_act1 = 59;
static int water_act2 = 59;
static float PastStairsDistanceFix = 2000.0f;
SETObjData setdata_past = {};

void RenderPalm2(NJS_ACTION *a1, float a2, int a3, float a4)
{
	late_ActionClipEx(a1, a2, a3, a4);
	DrawQueueDepthBias = -49000.0f;
	DrawObjectClipMesh(PalmBottom, (QueuedModelFlagsB)0, 1.0f);
	DrawQueueDepthBias = 0.0f;
}

void RenderPalm1(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	late_DrawObjectClipEx(a1, a2, a3);
	DrawQueueDepthBias = -49000.0f;
	DrawObjectClipMesh(PalmBottom2, (QueuedModelFlagsB)0, 1.0f);
	DrawQueueDepthBias = 0.0f;
}

void __cdecl Past_OceanDraw_r(OceanData *a1)
{
	if (SADXWater_Past) 
		Past_OceanDraw_SADXStyle(a1);
}

void AllocateEventChao_2(ObjectMaster *a1, NJS_ACTION *a2, NJS_TEXLIST *a3, float a4, char a5, char a6)
{
	NJS_ACTION newaction;
	newaction.motion = a2->motion;
	newaction.object = PastChaoModel_2;
	AllocateEventObject(a1, &newaction, a3, a4, a5, a6);
}

void AllocateEventChao_7(ObjectMaster *a1, NJS_ACTION *a2, NJS_TEXLIST *a3, float a4, char a5, char a6)
{
	NJS_ACTION newaction;
	newaction.motion = a2->motion;
	newaction.object = PastChaoModel_7;
	AllocateEventObject(a1, &newaction, a3, a4, a5, a6);
}

void AllocateEventChao_8(ObjectMaster *a1, NJS_ACTION *a2, NJS_TEXLIST *a3, float a4, char a5, char a6)
{
	NJS_ACTION newaction;
	newaction.motion = a2->motion;
	newaction.object = PastChaoModel_8;
	AllocateEventObject(a1, &newaction, a3, a4, a5, a6);
}

void AllocateEventChao_9(ObjectMaster *a1, NJS_ACTION *a2, NJS_TEXLIST *a3, float a4, char a5, char a6)
{
	NJS_ACTION newaction;
	newaction.motion = a2->motion;
	newaction.object = PastChaoModel_9;
	AllocateEventObject(a1, &newaction, a3, a4, a5, a6);
}

void AllocateEventChao_10(ObjectMaster *a1, NJS_ACTION *a2, NJS_TEXLIST *a3, float a4, char a5, char a6)
{
	NJS_ACTION newaction;
	newaction.motion = a2->motion;
	newaction.object = PastChaoModel_10;
	AllocateEventObject(a1, &newaction, a3, a4, a5, a6);
}

void FixTreeShadowFlickering1(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	late_DrawObjectClipEx(a1, a2, a3);
	if (TreeShadow)
	{
		DrawQueueDepthBias = -27000.0f;
		lateDrawModel(TreeShadow->basicdxmodel, (QueuedModelFlagsB)4);
		DrawQueueDepthBias = 0.0f;
	}
}

void FixTreeShadowFlickering2(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	late_DrawObjectClipMesh(a1, a2, a3);
	if (TreeShadow)
	{
		DrawQueueDepthBias = -27000.0f;
		lateDrawModel(TreeShadow->basicdxmodel, (QueuedModelFlagsB)4);
		DrawQueueDepthBias = 0.0f;
	}
}

void ParsePastMaterials()
{
	Uint32 materialflags;
	NJS_MATERIAL *material;
	NJS_TEX *uv;
	LandTable *landtable;
	landtable = LANDTABLEPAST[1];
	// SADX water
	if (SADXWater_Past)
		landtable->Col[0].Flags = 0;
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
			materialflags = material->attrflags;
			// Texanim 1
			if (material->attr_texId == 6 || (material->attr_texId >= 73 && material->attr_texId <= 82))
			{
				AddTextureAnimation(34, 1, material, false, 4, 73, 82);
			}
			// Texanim 2
			if (material->attr_texId == 57 || (material->attr_texId >= 59 && material->attr_texId <= 72))
			{
				AddTextureAnimation(34, 1, material, false, 4, 59, 72);
			}
			// UVAnim 1
			if ((materialflags & NJD_CUSTOMFLAG_UVANIM1) && !(materialflags & NJD_CUSTOMFLAG_UVANIM2))
			{
				if (!(landtable->Col[j].Flags & ColFlags_UvManipulation)) 
					landtable->Col[j].Flags |= ColFlags_UvManipulation;
				uv = landtable->Col[j].Model->basicdxmodel->meshsets[k].vertuv;
				AddUVAnimation(34, 1, uv, 96, 1, 0, -4);
			}
		}
	}
	landtable = LANDTABLEPAST[2];
	// SADX water
	if (SADXWater_Past)
		landtable->Col[0].Flags = 0;
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			// Texanim 1
			if (material->attr_texId == 0 || (material->attr_texId >= 75 && material->attr_texId <= 84))
			{
				AddTextureAnimation(34, 2, material, false, 4, 75, 84);
			}
			// Texanim 2
			if (material->attr_texId == 1 || (material->attr_texId >= 61 && material->attr_texId <= 74))
			{
				AddTextureAnimation(34, 2, material, false, 4, 61, 74);
			}
			// UVAnim 1
			if ((materialflags & NJD_CUSTOMFLAG_UVANIM1) && !(materialflags & NJD_CUSTOMFLAG_UVANIM2))
			{
				if (!(landtable->Col[j].Flags & ColFlags_UvManipulation)) 
					landtable->Col[j].Flags |= ColFlags_UvManipulation;
				uv = landtable->Col[j].Model->basicdxmodel->meshsets[k].vertuv;
				AddUVAnimation(34, 2, uv, 96, 1, 0, -4);
			}
		}
	}
}

void UnloadLevelFiles_ADV03()
{
	if (PastChaoModel_2) ForceLightType_Object(PastChaoModel_2, 2, true);
	if (PastChaoModel_7) ForceLightType_Object(PastChaoModel_7, 2, true);
	if (PastChaoModel_8) ForceLightType_Object(PastChaoModel_8, 2, true);
	if (PastChaoModel_9) ForceLightType_Object(PastChaoModel_9, 2, true);
	if (PastChaoModel_10) ForceLightType_Object(PastChaoModel_10, 2, true);
	delete PastChaoModel_2_Info;
	delete PastChaoModel_7_Info;
	delete PastChaoModel_8_Info;
	delete PastChaoModel_9_Info;
	delete PastChaoModel_10_Info;
	PastChaoModel_2_Info = nullptr;
	PastChaoModel_7_Info = nullptr;
	PastChaoModel_8_Info = nullptr;
	PastChaoModel_9_Info = nullptr;
	PastChaoModel_10_Info = nullptr;
	PastChaoModel_2 = nullptr;
	PastChaoModel_7 = nullptr;
	PastChaoModel_8 = nullptr;
	PastChaoModel_9 = nullptr;
	PastChaoModel_10 = nullptr;
	delete ADV03_0_Info;
	delete ADV03_1_Info;
	delete ADV03_2_Info;
	ADV03_0_Info = nullptr;
	ADV03_1_Info = nullptr;
	ADV03_2_Info = nullptr;
}

void ADV03_Init()
{
	// This is done every time the function is called
	PastChaoModel_2_Info = new ModelInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV03\\Models\\000DD8A8.sa1mdl"));
	PastChaoModel_7_Info = new ModelInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV03\\Models\\000DD8A8.sa1mdl"));
	PastChaoModel_8_Info = new ModelInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV03\\Models\\000DD8A8.sa1mdl"));
	PastChaoModel_9_Info = new ModelInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV03\\Models\\000DD8A8.sa1mdl"));
	PastChaoModel_10_Info = new ModelInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV03\\Models\\000DD8A8.sa1mdl"));
	PastChaoModel_2 = (NJS_OBJECT*)PastChaoModel_2_Info->getmodel();
	PastChaoModel_7 = (NJS_OBJECT*)PastChaoModel_7_Info->getmodel();
	PastChaoModel_8 = (NJS_OBJECT*)PastChaoModel_8_Info->getmodel();
	PastChaoModel_9 = (NJS_OBJECT*)PastChaoModel_9_Info->getmodel();
	PastChaoModel_10 = (NJS_OBJECT*)PastChaoModel_10_Info->getmodel();
	PastChaoModel_7->child->sibling->child->sibling->sibling->sibling->sibling->sibling->child->basicdxmodel->mats[0].attr_texId = 7;
	PastChaoModel_7->child->sibling->child->sibling->sibling->sibling->sibling->sibling->child->sibling->basicdxmodel->mats[0].attr_texId = 7;
	PastChaoModel_8->child->sibling->child->sibling->sibling->sibling->sibling->sibling->child->basicdxmodel->mats[0].attr_texId = 8;
	PastChaoModel_8->child->sibling->child->sibling->sibling->sibling->sibling->sibling->child->sibling->basicdxmodel->mats[0].attr_texId = 8;
	PastChaoModel_9->child->sibling->child->sibling->sibling->sibling->sibling->sibling->child->basicdxmodel->mats[0].attr_texId = 9;
	PastChaoModel_9->child->sibling->child->sibling->sibling->sibling->sibling->sibling->child->sibling->basicdxmodel->mats[0].attr_texId = 9;
	PastChaoModel_10->child->sibling->child->sibling->sibling->sibling->sibling->sibling->child->basicdxmodel->mats[0].attr_texId = 10;
	PastChaoModel_10->child->sibling->child->sibling->sibling->sibling->sibling->sibling->child->sibling->basicdxmodel->mats[0].attr_texId = 10;
	ADV03_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV03\\0.sa1lvl"));
	ADV03_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV03\\1.sa1lvl"));
	ADV03_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV03\\2.sa1lvl"));
	LandTable* ADV03_0 = ADV03_0_Info->getlandtable(); //&landtable_00000278; // ADV03_0_Info->getlandtable();
	LandTable* ADV03_1 = ADV03_1_Info->getlandtable(); //&landtable_0000029C; // ADV03_1_Info->getlandtable();
	LandTable* ADV03_2 = ADV03_2_Info->getlandtable(); //&landtable_000002C0; // ADV03_2_Info->getlandtable();
	RemoveMaterialColors_Landtable(ADV03_0);
	RemoveMaterialColors_Landtable(ADV03_1);
	RemoveMaterialColors_Landtable(ADV03_2);
	ADV03_0->TexList = &texlist_past00;
	ADV03_1->TexList = &texlist_past01;
	ADV03_2->TexList = &texlist_past02;
	LandTableArray[152] = ADV03_0;
	LandTableArray[153] = ADV03_1;
	LandTableArray[154] = ADV03_2;
	*LANDTABLEPAST[0] = *ADV03_0;
	*LANDTABLEPAST[1] = *ADV03_1;
	*LANDTABLEPAST[2] = *ADV03_2;
	ParsePastMaterials();
	ForceLightType_Object(PastChaoModel_2, 2, false);
	ForceLightType_Object(PastChaoModel_7, 2, false);
	ForceLightType_Object(PastChaoModel_8, 2, false);
	ForceLightType_Object(PastChaoModel_9, 2, false);
	ForceLightType_Object(PastChaoModel_10, 2, false);
	// This is done only once
	if (!ModelsLoaded_ADV03)
	{
		// Texlists
		*ADV03_TEXLISTS[4] = texlist_past00;
		*ADV03_TEXLISTS[5] = texlist_past01;
		*ADV03_TEXLISTS[6] = texlist_past02;
		// SADX water
		WriteJump((void*)0x542850, Past_OceanDraw_r);
		// Make stairs objects in Past Act 1 appear sooner
		WriteData((float**)0x00545349, &PastStairsDistanceFix);
		WriteData((float**)0x00545409, &PastStairsDistanceFix);
		// Material fixes
		ForceLightType_Object(ADV03_OBJECTS[1], 2, false); // Chao
		RemoveVertexColors_Object(ADV03_OBJECTS[0]); // Master Emerald
		RemoveVertexColors_Object(ADV03_OBJECTS[1]); // Chao
		RemoveVertexColors_Object(ADV03_OBJECTS[3]); // Echidna 1
		RemoveVertexColors_Object(ADV03_OBJECTS[5]); // Echidna 2
		RemoveVertexColors_Object(ADV03_OBJECTS[6]); // Echidna 3
		RemoveVertexColors_Object(ADV03_OBJECTS[7]); // Pacman
		RemoveVertexColors_Object(ADV03_OBJECTS[23]); // Emeralds
		RemoveVertexColors_Object(ADV03_OBJECTS[24]); // Emeralds
		RemoveVertexColors_Object(ADV03_OBJECTS[25]); // Emeralds
		RemoveVertexColors_Object(ADV03_OBJECTS[26]); // Emeralds
		RemoveVertexColors_Object(ADV03_OBJECTS[27]); // Emeralds
		RemoveVertexColors_Object(ADV03_OBJECTS[28]); // Emeralds
		RemoveVertexColors_Object(ADV03_OBJECTS[29]); // Emeralds
		RemoveVertexColors_Object(ADV03_ACTIONS[3]->object); // Tikal 1
		RemoveVertexColors_Object((NJS_OBJECT*)0x8D4880); // Tikal 2
		// Event Chao eye fixes
		WriteCall((void*)0x653C40, AllocateEventChao_9);
		WriteCall((void*)0x653C67, AllocateEventChao_9);
		WriteCall((void*)0x653C91, AllocateEventChao_9);
		// 1
		WriteCall((void*)0x66181E, AllocateEventChao_9);
		WriteCall((void*)0x661840, AllocateEventChao_9);
		WriteCall((void*)0x661862, AllocateEventChao_9);
		WriteCall((void*)0x661887, AllocateEventChao_9);
		// 2 - Gamma meets Tikal
		WriteCall((void*)0x67D993, AllocateEventChao_8);
		WriteCall((void*)0x67D9B4, AllocateEventChao_2);
		WriteCall((void*)0x67D9D8, AllocateEventChao_10);
		WriteCall((void*)0x67D9F9, AllocateEventChao_8);
		WriteCall((void*)0x67DA1A, AllocateEventChao_2);
		WriteCall((void*)0x67DA3E, AllocateEventChao_10);
		WriteCall((void*)0x67DA5F, AllocateEventChao_2);
		WriteCall((void*)0x67DA80, AllocateEventChao_7);
		WriteCall((void*)0x67DAA4, AllocateEventChao_2);
		WriteCall((void*)0x67DAC5, AllocateEventChao_8);
		WriteCall((void*)0x67DAE6, AllocateEventChao_8);
		WriteCall((void*)0x67DB0A, AllocateEventChao_2);
		WriteCall((void*)0x67DB2B, AllocateEventChao_10);
		WriteCall((void*)0x67DB4C, AllocateEventChao_8);
		WriteCall((void*)0x67DB70, AllocateEventChao_10);
		WriteCall((void*)0x67DB91, AllocateEventChao_2);
		// 3 - Knuckles meets Tikal
		WriteCall((void*)0x68BF49, AllocateEventChao_2);
		WriteCall((void*)0x68BF6D, AllocateEventChao_2);
		WriteCall((void*)0x68BF8E, AllocateEventChao_2);
		WriteCall((void*)0x68BFAF, AllocateEventChao_2);
		WriteCall((void*)0x68BFD3, AllocateEventChao_2);
		// 4
		WriteCall((void*)0x6A1D94, AllocateEventChao_2);
		WriteCall((void*)0x6A1DB5, AllocateEventChao_2);
		WriteCall((void*)0x6A1DD9, AllocateEventChao_2);
		WriteCall((void*)0x6A1DFA, AllocateEventChao_2);
		WriteCall((void*)0x6A2A09, AllocateEventChao_2);
		// Palm fixes
		*ADV03_ACTIONS[10]->object = *LoadModel("system\\data\\ADV03\\Models\\00012DA8.sa1mdl"); // Palm in Act 3
		PalmBottom = CloneObject(ADV03_ACTIONS[10]->object);
		ADV03_ACTIONS[10]->object->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA; // Hide DA_ONE stuff
		HideMesh_Object(ADV03_ACTIONS[10]->object, 0, 1); // Hide DA_ONE, transparent stuff
		HideMesh_Object(PalmBottom, 2);
		PalmBottom->evalflags |= NJD_EVAL_BREAK;
		PalmBottom->child = NULL;
		*ADV03_OBJECTS[9] = *LoadModel("system\\data\\ADV03\\Models\\0001503C.sa1mdl"); // Palm in Act 2
		PalmBottom2 = CloneObject(ADV03_OBJECTS[9]);
		ADV03_OBJECTS[9]->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA; // Hide DA_ONE stuff
		HideMesh_Object(ADV03_OBJECTS[9], 0, 1); // Hide DA_ONE, transparent stuff
		HideMesh_Object(PalmBottom2, 2, 2, 4);
		WriteCall((void*)0x545C1A, RenderPalm1);
		WriteCall((void*)0x545BFD, RenderPalm2);
		AddWhiteDiffuseMaterial(&ADV03_OBJECTS[12]->basicdxmodel->mats[1]); // OTree 0 second model
		// Tikal cutscene water ripple thing
		WriteData((float*)0x0068BA27, -40.7f); // Ripple 1 X
		WriteData((float*)0x0068BA22, 86.0f); // Ripple 1 Y
		WriteData((float*)0x0068BA1D, 59.43f); // Ripple 1 Z
		WriteData((float*)0x0068BA62, -40.7f); // Ripple 2 X
		WriteData((float*)0x0068BA5D, 86.0f); // Ripple 2 Y
		WriteData((float*)0x0068BA58, 59.43f); // Ripple 2 Z
		WriteData((float*)0x0068BA94, -52.01f); // Ripple 3 X
		WriteData((float*)0x0068BA8F, 86.0f); // Ripple 3 Y
		WriteData((float*)0x0068BA8A, 52.42f); // Ripple 3 Z
		// Other objects
		*ADV03_ACTIONS[9]->object = *LoadModel("system\\data\\ADV03\\Models\\0000F864.sa1mdl"); // OTree 0
		*ADV03_OBJECTS[16] = *LoadModel("system\\data\\ADV03\\Models\\0001EDDC.sa1mdl"); // Tree 16
		*ADV03_OBJECTS[17] = *CloneObject(ADV03_OBJECTS[16]); // Tree 17 (low LOD model in SADX)
		TreeShadow = CloneObject(ADV03_OBJECTS[16]);
		HideMesh_Object(ADV03_OBJECTS[16], 2);
		HideMesh_Object(ADV03_OBJECTS[17], 2);
		HideMesh_Object(TreeShadow, 0, 1);
		WriteCall((void*)0x5455A9, FixTreeShadowFlickering1);
		WriteCall((void*)0x54557C, FixTreeShadowFlickering2);
		*ADV03_OBJECTS[15] = *LoadModel("system\\data\\ADV03\\Models\\00027158.sa1mdl"); // Small tree shadow
		*ADV03_OBJECTS[13] = *LoadModel("system\\data\\ADV03\\Models\\00016CA0.sa1mdl"); // OWell
		*ADV03_OBJECTS[18] = *LoadModel("system\\data\\ADV03\\Models\\00027054.sa1mdl"); // Well shadow
		*ADV03_OBJECTS[21] = *LoadModel("system\\data\\ADV03\\Models\\0001D774.sa1mdl"); // OPyStairs
		*ADV03_OBJECTS[20] = *LoadModel("system\\data\\ADV03\\Models\\0001E498.sa1mdl"); // OBigStairs
		*ADV03_OBJECTS[19] = *LoadModel("system\\data\\ADV03\\Models\\0001E59C.sa1mdl"); // OBigStairs low LOD
		*ADV03_OBJECTS[22] = *LoadModel("system\\data\\ADV03\\Models\\0001D878.sa1mdl"); // OPyStairs low LOD
		// Fog data
		for (int i = 0; i < 3; i++)
		{
			FogData_Past1[i].Layer = -12000.0f;
			FogData_Past1[i].Distance = -12000.0f;
			FogData_Past2[i].Layer = -12000.0f;
			FogData_Past2[i].Distance = -12000.0f;
			FogData_Past3[i].Layer = -12000.0f;
			FogData_Past3[i].Distance = -12000.0f;
			DrawDist_Past1[i].Maximum = -12000.0f;
			DrawDist_Past2[i].Maximum = -16000.0f;
			DrawDist_Past3[i].Maximum = -16000.0f;
		}
		ModelsLoaded_ADV03 = true;
	}
}

void ADV03_OnFrame()
{
	// Rotate the thing above the Chao's head
	if (CurrentLevel == LevelIDs_Past && CurrentAct > 0 && EV_MainThread_ptr != nullptr)
	{
		((NJS_OBJECT*)((size_t)GetModuleHandle(L"ADV03MODELS") + 0x0013CB28))->ang[1] = Camera_Data1->Rotation.y;
		if (PastChaoModel_2_Info) PastChaoModel_2->child->ang[1] = Camera_Data1->Rotation.y;
		if (PastChaoModel_7_Info) PastChaoModel_7->child->ang[1] = Camera_Data1->Rotation.y;
		if (PastChaoModel_8_Info) PastChaoModel_8->child->ang[1] = Camera_Data1->Rotation.y;
		if (PastChaoModel_9_Info) PastChaoModel_9->child->ang[1] = Camera_Data1->Rotation.y;
		if (PastChaoModel_10_Info) PastChaoModel_10->child->ang[1] = Camera_Data1->Rotation.y;
	}
}