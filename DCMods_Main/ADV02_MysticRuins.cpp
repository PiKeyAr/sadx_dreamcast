#include "stdafx.h"

NJS_TEXNAME textures_mr00[153];
NJS_TEXLIST texlist_mr00 = { arrayptrandlength(textures_mr00) };

NJS_TEXNAME textures_mr01[90];
NJS_TEXLIST texlist_mr01 = { arrayptrandlength(textures_mr01) };

NJS_TEXNAME textures_mr02[126];
NJS_TEXLIST texlist_mr02 = { arrayptrandlength(textures_mr02) };

NJS_TEXNAME textures_mr03[104];
NJS_TEXLIST texlist_mr03 = { arrayptrandlength(textures_mr03) };

NJS_TEXNAME textures_mrobj[207];
NJS_TEXLIST texlist_mrobj = { arrayptrandlength(textures_mrobj) };

NJS_TEXNAME textures_mrtrain[31];
NJS_TEXLIST texlist_mrtrain = { arrayptrandlength(textures_mrtrain) };

/*
#include "MR00_Station.h"
#include "MR01_Island.h"
#include "MR02_Jungle.h"
#include "MR03_FinalEgg.h"
*/

DataPointer(float, CurrentFogDist, 0x03ABDC64);
DataPointer(float, CurrentFogLayer, 0x03ABDC60);
DataArray(FogData, MR1FogDay, 0x01103448, 3);
DataArray(FogData, MR2FogDay, 0x01103478, 3);
DataArray(FogData, MR3FogDay, 0x011034A8, 3);
DataArray(FogData, MR4FogDay, 0x011034D8, 3);
DataArray(FogData, MR1FogEvening, 0x01103508, 3);
DataArray(FogData, MR2FogEvening, 0x01103538, 3);
DataArray(FogData, MR1FogNight, 0x01103568, 3);
DataArray(FogData, MR3FogNight, 0x01103598, 3);
DataArray(DrawDistance, MR1DrawDist, 0x011033E8, 3);
DataArray(DrawDistance, MR2DrawDist, 0x01103400, 3);
DataArray(DrawDistance, MR3DrawDist, 0x01103418, 3);
DataArray(DrawDistance, MR4DrawDist, 0x01103430, 3);
FunctionPointer(void, sub_405450, (NJS_ACTION *a1, float frame, float scale), 0x405450);
FunctionPointer(void, sub_408350, (NJS_ACTION* a1, float a2, int a3, float a4), 0x408350);
static bool InsideTemple = 0;

NJS_OBJECT* MROcean = nullptr;
NJS_OBJECT* MRWaterObjects[] = { nullptr, nullptr, nullptr, nullptr, nullptr };
NJS_OBJECT* OFinalEggModel_Opaque = nullptr;
NJS_OBJECT* OFinalEggModel_Transparent = nullptr;
NJS_OBJECT* MRJungleObjectAnimations_Propeller[] = { nullptr, nullptr, nullptr, nullptr, nullptr };
NJS_OBJECT* MRJungleObjectAnimations_Lantern[] = { nullptr, nullptr, nullptr, nullptr, nullptr };
NJS_OBJECT* MRJungleObjectsCallback[] = { nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr };
NJS_VECTOR TempleVector = { -515.99f, 90.0f, -1137.45f };

void AddMRWaterObject(NJS_OBJECT *object)
{
	for (int q = 0; q < LengthOfArray(MRWaterObjects); ++q)
	{
		if (MRWaterObjects[q] == object) return;
		else if (MRWaterObjects[q] == nullptr)
		{
			MRWaterObjects[q] = object;
			return;
		}
	}
}

void AddMRLandtableRotation(NJS_OBJECT *object, bool propeller)
{
	if (propeller)
	{
		for (int q = 0; q < LengthOfArray(MRJungleObjectAnimations_Propeller); ++q)
		{
			if (MRJungleObjectAnimations_Propeller[q] == object) return;
			else if (MRJungleObjectAnimations_Propeller[q] == nullptr)
			{
				MRJungleObjectAnimations_Propeller[q] = object;
				return;
			}
		}
	}
	else
	{
		for (int q = 0; q < LengthOfArray(MRJungleObjectAnimations_Lantern); ++q)
		{
			if (MRJungleObjectAnimations_Lantern[q] == object) return;
			else if (MRJungleObjectAnimations_Lantern[q] == nullptr)
			{
				MRJungleObjectAnimations_Lantern[q] = object;
				return;
			}
		}
	}
}

void AddMRJungleCallback(NJS_OBJECT *object)
{
	for (int q = 0; q < LengthOfArray(MRJungleObjectsCallback); ++q)
	{
		if (MRJungleObjectsCallback[q] == object) return;
		else if (MRJungleObjectsCallback[q] == nullptr)
		{
			MRJungleObjectsCallback[q] = object;
			return;
		}
	}
}

void ParseMRColFlags()
{
	int colflags;
	LandTable *landtable;
	//Station area
	landtable = ___LANDTABLEMR[0];
	for (unsigned int j = 0; j < landtable->COLCount; j++)
	{
		colflags = landtable->Col[j].Flags;
		if (colflags == 0x08000000) AddMRWaterObject(landtable->Col[j].Model);
	}
	//Jungle area
	landtable = ___LANDTABLEMR[2];
	for (unsigned int j = 0; j < landtable->COLCount; j++)
	{
		colflags = landtable->Col[j].Flags;
		if (colflags == 0x88001000 || colflags == 0x88000400) AddMRLandtableRotation(landtable->Col[j].Model, false);
		else if (colflags == 0x88000000) AddMRLandtableRotation(landtable->Col[j].Model, true);
		else if (colflags == 0) AddMRJungleCallback(landtable->Col[j].Model);
	}
	//Add models for MR jungle callback
	___ADV02MR02_OBJECTS[118] = MRJungleObjectsCallback[0];
	___ADV02MR02_OBJECTS[119] = MRJungleObjectsCallback[1];
	___ADV02MR02_OBJECTS[135] = MRJungleObjectsCallback[2];
	___ADV02MR02_OBJECTS[136] = MRJungleObjectsCallback[3];
	___ADV02MR02_OBJECTS[137] = MRJungleObjectsCallback[4];
	___ADV02MR02_OBJECTS[138] = MRJungleObjectsCallback[5];
	___ADV02MR02_OBJECTS[139] = MRJungleObjectsCallback[6];
}

void RemoveMRMaterials(int act)
{
	LandTable* landtable;
	Uint32 materialflags;
	NJS_MATERIAL* material;
	landtable = ___LANDTABLEMR[act];
	for (unsigned int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			material = (NJS_MATERIAL*)& landtable->Col[j].Model->basicdxmodel->mats[k];
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			if (materialflags & NJD_CUSTOMFLAG_WHITE)
			{
				RemoveWhiteDiffuseMaterial(material);
			}
		}
	}
}

void ParseMRMaterials()
{
	Uint32 materialflags;
	NJS_MATERIAL *material;
	NJS_TEX *uv;
	int texid;
	LandTable *landtable;
	//Station area
	landtable = ___LANDTABLEMR[0];
	for (unsigned int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			//Texanim 1
			if (material->attr_texId == 128 || (material->attr_texId >= 130 && material->attr_texId <= 139))
			{
				AddTextureAnimation(33, 0, material, false, 5, 130, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			//Texanim 2
			if (material->attr_texId == 129 || (material->attr_texId >= 140 && material->attr_texId <= 154))
			{
				AddTextureAnimation(33, 0, material, false, 4, 140, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			//UVAnim 1
			if ((materialflags & NJD_CUSTOMFLAG_UVANIM1) && !(materialflags & NJD_CUSTOMFLAG_UVANIM2))
			{
				if (!(landtable->Col[j].Flags & ColFlags_UvManipulation)) landtable->Col[j].Flags |= ColFlags_UvManipulation;
				uv = landtable->Col[j].Model->basicdxmodel->meshsets[k].vertuv;
				AddUVAnimation(33, 0, uv, 32, 1, 0, 1);
			}
			//UVAnim 2
			if ((materialflags & NJD_CUSTOMFLAG_UVANIM2) && !(materialflags & NJD_CUSTOMFLAG_UVANIM1))
			{
				if (!(landtable->Col[j].Flags & ColFlags_UvManipulation)) landtable->Col[j].Flags |= ColFlags_UvManipulation;
				uv = landtable->Col[j].Model->basicdxmodel->meshsets[k].vertuv;
				AddUVAnimation(33, 0, uv, 184, 1, 0, -1);
			}
		}
	}
	//Angel Island
	landtable = ___LANDTABLEMR[1];
	for (unsigned int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			//Texanim 1
			if (material->attr_texId >= 76 && material->attr_texId <= 89)
			{
				AddTextureAnimation(33, 1, material, false, 2, 76, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
	//Jungle
	landtable = ___LANDTABLEMR[2];
	for (unsigned int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			material = (NJS_MATERIAL*)& landtable->Col[j].Model->basicdxmodel->mats[k];
			texid = landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId;
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			//White diffuse
			if (materialflags & NJD_CUSTOMFLAG_WHITE)
			{
				AddWhiteDiffuseMaterial(material);
			}
			//UVAnim 1
			if ((materialflags & NJD_CUSTOMFLAG_UVANIM1) && !(materialflags & NJD_CUSTOMFLAG_UVANIM2))
			{
				if (!(landtable->Col[j].Flags & ColFlags_UvManipulation)) landtable->Col[j].Flags |= ColFlags_UvManipulation;
				uv = landtable->Col[j].Model->basicdxmodel->meshsets[k].vertuv;
				AddUVAnimation(33, 2, uv, 32, 2, 0, 1);
				//PrintDebug("Added UVAnim1\n");
			}
			//UVAnim 2
			if ((materialflags & NJD_CUSTOMFLAG_UVANIM2) && !(materialflags & NJD_CUSTOMFLAG_UVANIM1))
			{
				if (!(landtable->Col[j].Flags & ColFlags_UvManipulation)) landtable->Col[j].Flags |= ColFlags_UvManipulation;
				uv = landtable->Col[j].Model->basicdxmodel->meshsets[k].vertuv;
				AddUVAnimation(33, 2, uv, 14, 2, 0, 1);
				//PrintDebug("Added UVAnim2\n");
			}
			//UVAnim 3
			if ((materialflags & NJD_CUSTOMFLAG_UVANIM2) && (materialflags & NJD_CUSTOMFLAG_UVANIM1))
			{
				if (!(landtable->Col[j].Flags & ColFlags_UvManipulation)) landtable->Col[j].Flags |= ColFlags_UvManipulation;
				uv = landtable->Col[j].Model->basicdxmodel->meshsets[k].vertuv;
				if (texid == 83)
				{
					AddUVAnimation(33, 2, uv, 126, 2, 0, -1);
					//PrintDebug("Added UVAnim4 - 126\n");
				}
				else 
				{
					if (landtable->Col[j].Model->basicdxmodel->meshsets[k].nbMesh == 3)
					{
						AddUVAnimation(33, 2, uv, 48, 2, 0, 1);
						//PrintDebug("Added UVAnim3 - 48\n");
					}
					else
					{
						AddUVAnimation(33, 2, uv, 46, 2, 0, 1);
						//PrintDebug("Added UVAnim3 - 46\n");
					}
				}
			}
		}
	}
	//Final Egg base
	landtable = ___LANDTABLEMR[3];
	for (unsigned int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
			materialflags = material->attrflags;
			//White diffuse
			if (materialflags & NJD_CUSTOMFLAG_WHITE)
			{
				AddWhiteDiffuseMaterial(material);
			}
		}
	}
}

void __cdecl MRWater_Display(void(__cdecl *function)(void *), void *data, float depth, QueuedModelFlagsB queueflags)
{
	if (CurrentAct == 0 && !DroppedFrames)
	{
		if (SADXWater_MysticRuins)
		{
			DrawModelCallback_Queue((void(__cdecl *)(void *))MysticRuins_OceanDraw, OceanDataArray, -7952.0f, QueuedModelFlagsB_EnableZWrite);
		}
		else
		{
			DisableFog();
			njSetTexture(&texlist_mr00);
			njPushMatrix(0);
			njTranslate(0, 0, 0, 0);
			DrawQueueDepthBias = -47952.0f;
			if (MROcean) ProcessModelNode_AB_Wrapper(MROcean, 1.0f);
			DrawQueueDepthBias = 0.0f;
			njPopMatrix(1u);
		}
		for (unsigned int i = 0; i < LengthOfArray(MRWaterObjects); i++)
		{
			if (MRWaterObjects[i])
			{
				njSetTexture(&texlist_mr00);
				njPushMatrix(0);
				njTranslate(0, 0, 0, 0);
				ProcessModelNode_A_Wrapper(MRWaterObjects[i], QueuedModelFlagsB_3, 1.0f);
				njPopMatrix(1u);
			}
		}
	}
}

void SetColor(float a, float r, float g, float b)
{
	SetMaterialAndSpriteColor_Float(a, 0, g, 0);
}

void FixMRBase(ObjectMaster *a1)
{
	NJS_ACTION OpaqueAction = { nullptr, nullptr };
	NJS_ACTION TransAction = { nullptr, nullptr };
	Angle v1; // eax
	EntityData1 *v2; // esi
	v2 = a1->Data1;
	Direct3D_SetNearFarPlanes(-1.0f, -100000.0f);
	DisableFog();
	njSetTexture(___ADV02_TEXLISTS[1]);
	njPushMatrix(0);
	njTranslateV(0, &v2->Position);
	v1 = v2->Rotation.y;
	if (v1)
	{
		njRotateY(0, (unsigned __int16)v1);
	}
	OpaqueAction.object = OFinalEggModel_Opaque;
	OpaqueAction.motion = ___ADV02_ACTIONS[0]->motion;
	TransAction.object = OFinalEggModel_Transparent;
	TransAction.motion = ___ADV02_ACTIONS[0]->motion;
	//Render the FinalWay
	njAction_Queue_407FC0(___ADV02_ACTIONS[30], v2->Scale.y, 1);
	//Render the animation without the lights
	njAction_Queue_407FC0(&OpaqueAction, v2->Scale.x, 1);
	//Render the lights
	njAction_Queue_407FC0(&TransAction, v2->Scale.x, 0);
	//Render the EfHikari thing
	DrawModel_Queue(OFinalEggModel_Opaque->child->sibling->sibling->basicdxmodel, QueuedModelFlagsB_3);
	njPopMatrix(1u);
	ToggleStageFog();
	Direct3D_SetNearFarPlanes(LevelDrawDistance.Minimum, LevelDrawDistance.Maximum);
}

void SetBlockEntryMaterialColor(float a, float r, float g, float b)
{
	ADV02_OBJECTS[50]->basicdxmodel->mats[0].diffuse.argb.a = max(0, min(255, 255 + r * 255));
	ADV02_OBJECTS[50]->basicdxmodel->mats[0].diffuse.argb.r = max(0, min(255, 255 + r * 255));
	ADV02_OBJECTS[50]->basicdxmodel->mats[0].diffuse.argb.g = max(0, min(255, 255 + g * 255));
	ADV02_OBJECTS[50]->basicdxmodel->mats[0].diffuse.argb.b = max(0, min(255, 255 + b * 255));
	SetMaterialAndSpriteColor_Float(0, 0, 0, 0);
}

void UnloadLevelFiles_ADV02()
{
	//Clear all pointers and arrays
	for (int k = 0; k < LengthOfArray(MRWaterObjects); ++k)
	{
		MRWaterObjects[k] = nullptr;
	}
	for (int k = 0; k < LengthOfArray(MRJungleObjectAnimations_Propeller); ++k)
	{
		MRJungleObjectAnimations_Propeller[k] = nullptr;
	}
	for (int k = 0; k < LengthOfArray(MRJungleObjectAnimations_Lantern); ++k)
	{
		MRJungleObjectAnimations_Lantern[k] = nullptr;
	}
	for (int k = 0; k < LengthOfArray(MRJungleObjectsCallback); ++k)
	{
		MRJungleObjectsCallback[k] = nullptr;
	}
	//Unregister white diffuse
	RemoveMRMaterials(0);
	RemoveMRMaterials(1);
	RemoveMRMaterials(2);
	RemoveMRMaterials(3);
	//Finish
	delete ADV02_0_Info;
	delete ADV02_1_Info;
	delete ADV02_2_Info;
	delete ADV02_3_Info;
	ADV02_0_Info = nullptr;
	ADV02_1_Info = nullptr;
	ADV02_2_Info = nullptr;
	ADV02_3_Info = nullptr;
}

void LoadLevelFiles_ADV02()
{
	CheckAndUnloadLevelFiles();
	ADV02_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV02\\0.sa1lvl"));
	ADV02_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV02\\1.sa1lvl"));
	ADV02_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV02\\2.sa1lvl"));
	ADV02_3_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV02\\3.sa1lvl"));
	LandTable *ADV02_0 = ADV02_0_Info->getlandtable(); //&landtable_00017960; //ADV02_0_Info->getlandtable();
	LandTable *ADV02_1 = ADV02_1_Info->getlandtable(); //&landtable_0009E7B0; //ADV02_1_Info->getlandtable();
	LandTable *ADV02_2 = ADV02_2_Info->getlandtable(); //&landtable_00000178; //ADV02_2_Info->getlandtable();
	LandTable *ADV02_3 = ADV02_3_Info->getlandtable(); //&landtable_0000019C; //ADV02_3_Info->getlandtable();
	RemoveMaterialColors_Landtable(ADV02_0);
	RemoveMaterialColors_Landtable(ADV02_1);
	RemoveMaterialColors_Landtable(ADV02_2);
	RemoveMaterialColors_Landtable(ADV02_3);
	ADV02_0->TexList = &texlist_mr00;
	ADV02_1->TexList = &texlist_mr01;
	ADV02_2->TexList = &texlist_mr02;
	ADV02_3->TexList = &texlist_mr03;
	___LANDTABLEMR[0] = ADV02_0;
	___LANDTABLEMR[1] = ADV02_1;
	___LANDTABLEMR[2] = ADV02_2;
	___LANDTABLEMR[3] = ADV02_3;
	LandTableArray[144] = ADV02_0;
	LandTableArray[145] = ADV02_1;
	LandTableArray[146] = ADV02_2;
	LandTableArray[147] = ADV02_3;
	ParseMRColFlags();
	ParseMRMaterials();
	WriteCall((void*)0x52FDC3, MRWater_Display);
}

void GeoAnimFix(NJS_ACTION* a1, float a2, int a3, float a4)
{
	if (CurrentLevel == LevelIDs_MysticRuins && CurrentAct == 2)
	{
		DrawQueueDepthBias = -20952.0f;
		njAction_Queue_407FC0(a1, a2, 1);
		DrawQueueDepthBias = 0.0f;
	}
	else sub_408350(a1, a2, a3, a4);
}

void ADV02_Init()
{
	if (!Use1999SetFiles)
	{
		ReplaceBIN_DC("SETMR00A");
		ReplaceBIN_DC("SETMR00B");
		ReplaceBIN_DC("SETMR00E");
		ReplaceBIN_DC("SETMR00K");
		ReplaceBIN_DC("SETMR00L");
		ReplaceBIN_DC("SETMR00M");
		ReplaceBIN_DC("SETMR00S");
		ReplaceBIN_DC("SETMR01A");
		ReplaceBIN_DC("SETMR01B");
		ReplaceBIN_DC("SETMR01E");
		ReplaceBIN_DC("SETMR01K");
		ReplaceBIN_DC("SETMR01L");
		ReplaceBIN_DC("SETMR01M");
		ReplaceBIN_DC("SETMR01S");
		ReplaceBIN_DC("SETMR02S");
		ReplaceBIN_DC("SETMR03S");
	}
	else
	{
		ReplaceBIN_1999("SETMR00A");
		ReplaceBIN_1999("SETMR00B");
		ReplaceBIN_1999("SETMR00E");
		ReplaceBIN_1999("SETMR00K");
		ReplaceBIN_1999("SETMR00L");
		ReplaceBIN_1999("SETMR00M");
		ReplaceBIN_1999("SETMR00S");
		ReplaceBIN_1999("SETMR01A");
		ReplaceBIN_1999("SETMR01B");
		ReplaceBIN_1999("SETMR01E");
		ReplaceBIN_1999("SETMR01K");
		ReplaceBIN_1999("SETMR01L");
		ReplaceBIN_1999("SETMR01M");
		ReplaceBIN_1999("SETMR01S");
		ReplaceBIN_1999("SETMR02S");
		ReplaceBIN_1999("SETMR03S");
	}
	ReplaceBIN_DC("CAMMR00S");
	ReplaceBIN_DC("CAMMR01S");
	ReplaceBIN_DC("CAMMR02S");
	ReplaceBIN_DC("CAMMR03S");
	ReplacePVM("ADV_MR00");
	ReplacePVM("ADV_MR01");
	ReplacePVM("ADV_MR02");
	ReplacePVM("ADV_MR03");
	ReplacePVM("MROBJ");
	ReplacePVM("MR_SKY00");
	ReplacePVM("MR_SKY01");
	ReplacePVM("MR_SKY02");
	ReplacePVM("MR_TRAIN");
	ReplacePVM("TANKEN");
	ReplacePVM("MROBJ_MAST");
	ReplacePVM("MROBJ_MASTLDAM");
	ReplacePVM("MROBJ_MASTSDAM");
	ReplacePVM("MR_EGG");
	ReplacePVM("MR_PYRAMID");
	ReplacePVM("MR_TORNADO2");
	ReplacePVM("MR_FINALEGG");
	WriteCall((void*)0x43A85F, GeoAnimFix); //Landtable animation hook
	//MR base stuff
	WriteJump((void*)0x538430, FixMRBase);
	___ADV02_ACTIONS[30]->object = LoadModel("system\\data\\ADV02\\Models\\0020DC78.sa1mdl", false); //OFinalWay
	OFinalEggModel_Opaque = LoadModel("system\\data\\ADV02\\Models\\0020C3B0.sa1mdl", false); //Base opaque
	OFinalEggModel_Opaque->child->sibling->sibling->evalflags |= NJD_EVAL_HIDE;
	OFinalEggModel_Opaque->child->sibling->sibling->sibling->child->evalflags |= NJD_EVAL_HIDE;
	OFinalEggModel_Opaque->child->sibling->sibling->sibling->child->sibling->evalflags |= NJD_EVAL_HIDE;
	OFinalEggModel_Opaque->child->sibling->sibling->sibling->sibling->child->evalflags |= NJD_EVAL_HIDE;
	OFinalEggModel_Opaque->child->sibling->sibling->sibling->sibling->child->sibling->evalflags |= NJD_EVAL_HIDE;
	OFinalEggModel_Opaque->child->sibling->sibling->sibling->sibling->sibling->child->evalflags |= NJD_EVAL_HIDE;
	OFinalEggModel_Opaque->child->sibling->sibling->sibling->sibling->sibling->child->sibling->evalflags |= NJD_EVAL_HIDE;
	OFinalEggModel_Opaque->child->sibling->sibling->sibling->sibling->sibling->sibling->child->evalflags |= NJD_EVAL_HIDE;
	OFinalEggModel_Opaque->child->sibling->sibling->sibling->sibling->sibling->sibling->child->sibling->evalflags |= NJD_EVAL_HIDE;
	OFinalEggModel_Transparent = LoadModel("system\\data\\ADV02\\Models\\0020C3B0.sa1mdl", false); //Base transparent
	OFinalEggModel_Transparent->evalflags |= NJD_EVAL_HIDE;
	OFinalEggModel_Transparent->child->evalflags |= NJD_EVAL_HIDE;
	OFinalEggModel_Transparent->child->sibling->evalflags |= NJD_EVAL_HIDE;
	OFinalEggModel_Transparent->child->sibling->sibling->evalflags |= NJD_EVAL_HIDE;
	OFinalEggModel_Transparent->child->sibling->sibling->sibling->evalflags |= NJD_EVAL_HIDE;
	OFinalEggModel_Transparent->child->sibling->sibling->sibling->sibling->evalflags |= NJD_EVAL_HIDE;
	OFinalEggModel_Transparent->child->sibling->sibling->sibling->sibling->sibling->evalflags |= NJD_EVAL_HIDE;
	OFinalEggModel_Transparent->child->sibling->sibling->sibling->sibling->sibling->sibling->evalflags |= NJD_EVAL_HIDE;
	//Code fixes
	WriteData((float*)0x005343BE, 239.0f); //Windows in Tails' workshop
	WriteData((float*)0x005343EF, 239.0f); //Windows in Tails' workshop 
	WriteData<1>((char*)0x005370E0, 0x01); //Fix blending mode on floating bricks in WV entrance
	WriteData<1>((char*)0x00537038, 0x01); //Fix blending mode on floating bricks in WV entrance
	WriteData<1>((char*)0x00537181, 0x01); //Fix blending mode on floating bricks in WV entrance
	WriteData<1>((char*)0x00537354, 0x01); //Fix blending mode on floating bricks in WV entrance
	WriteData<1>((char*)0x006F4DA0, 0x04); //Emerald shard (cutscene) glow blending mode
	WriteData<1>((char*)0x006F4BF1, 0x04); //Emerald shard (cutscene) glow blending mode	
	//OBlockEntry brightness
	WriteCall((void*)0x53B5E8, SetBlockEntryMaterialColor);
	RemoveVertexColors_Object(ADV02_OBJECTS[50]);
	//Cutscene after Lost World
	WriteData((float*)0x006D2537, 16.0f); //Y1
	WriteData((float*)0x006D2507, 16.0f); //Y2
	WriteData((float*)0x006D1CF6, 14.52f); //Y after cutscene
	WriteData((int*)0x006D1D13, 0); //X rotation after cutscene
	WriteData((int*)0x006D1D1D, 0); //Z rotation after cutscene
	ReplaceBIN("SL_X0B", "SL_X0X"); //Day light direction override
	ReplaceBIN("SL_X1B", "SL_X1X"); //Evening light direction override
	ReplaceBIN("SL_X2B", "SL_X2X"); //Night light direction override
	//Enable MR light direction adjustment code
	WriteData<6>((char*)0x00412536, 0x90u);
	WriteData<6>((char*)0x00412544, 0x90u);
	WriteCall((void*)0x0053CD37, SetColor); //Master Emerald glow
	for (int i = 0; i < 3; i++)
	{
		MR1FogDay[i].Distance = -10000.0f;
		MR1FogDay[i].Layer = -2500.0f;
		MR1FogDay[i].Toggle = 1;
		MR1FogDay[i].Color = 0xFFA0A0A0;
		MR1FogEvening[i].Distance = -9000.0f;
		MR1FogEvening[i].Layer = -3500.0f;
		MR1FogNight[i].Color = 0xFF001058;
		MR1FogNight[i].Distance = -10000.0f;
		MR1FogNight[i].Layer = -2000.0f;
		MR2FogDay[i].Layer = -2000.0f;
		MR2FogDay[i].Distance = -16000.0f;
		MR2FogDay[i].Color = 0xFFA0A0A0;
		MR2FogEvening[i].Distance = -12000.0f;
		MR2FogEvening[i].Layer = -5000.0f;
		MR2FogEvening[i].Color = 0xFF907858;
		MR3FogDay[i].Layer = -4000.0f;
		MR3FogDay[i].Distance = -16000.0f;
		MR3FogDay[i].Color = 0xFFA0A0A0;
		MR3FogNight[i].Distance = -12000;
		MR3FogNight[i].Color = 0xFF001058;
		MR3FogNight[i].Layer = -5000;
		MR1DrawDist[i].Maximum = -10000.0f;
		MR2DrawDist[i].Maximum = -10000.0f;
		MR3DrawDist[i].Maximum = -10000.0f;
		MR4DrawDist[i].Maximum = -4000.0f;
	}
	___ADV02_TEXLISTS[38] = &texlist_mr00;
	___ADV02_TEXLISTS[39] = &texlist_mr01;
	___ADV02_TEXLISTS[40] = &texlist_mr02;
	___ADV02_TEXLISTS[41] = &texlist_mr03;
	MROBJ_TEXLISTS[0].TexList = &texlist_mrobj; //MROBJ
	___ADV02_TEXLISTS[21] = &texlist_mrobj; //MROBJ
	___ADV02_TEXLISTS[4] = &texlist_mrtrain;
	*(NJS_OBJECT*)0x1108A18 = *LoadModel("system\\data\\ADV02\\Models\\00226468.sa1mdl", false); //TANKEN
	*(NJS_OBJECT*)0x110CF34 = *LoadModel("system\\data\\ADV02\\Models\\00229334.sa1mdl", false); //TANKEN 2
	*(NJS_OBJECT*)0x11112CC = *LoadModel("system\\data\\ADV02\\Models\\0022DDA4.sa1mdl", false); //TANKEN 3
	//Palm trees near Tails' house
	LoadModel_ReplaceMeshes(___ADV02_OBJECTS[67], "system\\data\\ADV02\\Models\\001DCF78.sa1mdl");
	RemoveVertexColors_Object(___ADV02_OBJECTS[67]);
	AddWhiteDiffuseMaterial(&___ADV02_OBJECTS[67]->child->child->basicdxmodel->mats[1]);
	AddWhiteDiffuseMaterial(&___ADV02_OBJECTS[67]->child->sibling->child->basicdxmodel->mats[1]);
	AddWhiteDiffuseMaterial(&___ADV02_OBJECTS[67]->child->sibling->sibling->child->basicdxmodel->mats[1]);
	AddWhiteDiffuseMaterial(&___ADV02_OBJECTS[67]->child->sibling->sibling->sibling->child->basicdxmodel->mats[1]);
	AddWhiteDiffuseMaterial(&___ADV02_OBJECTS[67]->child->sibling->sibling->sibling->sibling->child->basicdxmodel->mats[1]);
	AddWhiteDiffuseMaterial(&___ADV02_OBJECTS[67]->child->sibling->sibling->sibling->sibling->sibling->child->basicdxmodel->mats[1]);
	___ADV02_OBJECTS[84] = LoadModel("system\\data\\ADV02\\Models\\001F6A04.sa1mdl", true); //Windows and the light above the door of Tails' house
	ForceLevelSpecular_Object(___ADV02_OBJECTS[84]);
	___ADV02_OBJECTS[85] = LoadModel("system\\data\\ADV02\\Models\\001F764C.sa1mdl", true); //Same as above but lit up
	ForceLevelSpecular_Object(___ADV02_OBJECTS[85]);
	//Material fixes
	RemoveVertexColors_Object(___ADV02_OBJECTS[53]); //Diggable place
	___ADV02_OBJECTS[90]->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	___ADV02_OBJECTS[91]->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	//Other objects
	MROcean = LoadModel("system\\data\\ADV02\\Models\\0005FEE0.sa1mdl", false);
	AddTextureAnimation_Permanent(33, 0, &MROcean->basicdxmodel->mats[0], false, 5, 130, 139, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1);
	___ADV02_OBJECTS[23] = LoadModel("system\\data\\ADV02\\Models\\001BACAC.sa1mdl", false); //Ice Cap door full
	___ADV02_OBJECTS[25] = LoadModel("system\\data\\ADV02\\Models\\001B9854.sa1mdl", false); //Ice Cap door 1 
	___ADV02_OBJECTS[26] = LoadModel("system\\data\\ADV02\\Models\\001B9D9C.sa1mdl", false); //Ice Cap door 2
	___ADV02_OBJECTS[86] = LoadModel("system\\data\\ADV02\\Models\\001BF00C.sa1mdl", false); //Ice Cap lock
	___ADV02_OBJECTS[88] = LoadModel("system\\data\\ADV02\\Models\\001BBA04.sa1mdl", false); //Ice Stone
	___ADV02_OBJECTS[76] = LoadModel("system\\data\\ADV02\\Models\\001BCA10.sa1mdl", false); //Wind Stone
	___ADV02_ACTIONS[29]->object = ___ADV02_OBJECTS[88]; //Ice Stone
	___ADV02_OBJECTS[64] = LoadModel("system\\data\\ADV02\\Models\\001E87F0.sa1mdl", false); //Angel Island rock
	___ADV02_OBJECTS[68] = LoadModel("system\\data\\ADV02\\Models\\002145D4.sa1mdl", false); //That thing that pushes the Chao Egg out
	___ADV02_OBJECTS[100] = LoadModel("system\\data\\ADV02\\Models\\001F41C0.sa1mdl", false); //Grass
	___ADV02_ACTIONS[32]->object = ___ADV02_OBJECTS[100]; //Rustling grass
	___ADV02_OBJECTS[20] = LoadModel("system\\data\\ADV02\\Models\\001B5F40.sa1mdl", false); //Torokko 
	___ADV02_ACTIONS[11]->object = ___ADV02_OBJECTS[20]; //Torokko
	___ADV02_ACTIONS[18]->object = LoadModel("system\\data\\ADV02\\Models\\001D76AC.sa1mdl", false); //Wall in Tails' house
	___ADV02_OBJECTS[61] = LoadModel("system\\data\\ADV02\\Models\\001B1A98.sa1mdl", false); //OIslandDoor
	___ADV02_OBJECTS[60] = LoadModel("system\\data\\ADV02\\Models\\001B0FE0.sa1mdl", false); //OIslandDoor right
	___ADV02_OBJECTS[59] = LoadModel("system\\data\\ADV02\\Models\\001B1648.sa1mdl", false); //OIslandDoor left
	___ADV02_OBJECTS[39] = LoadModel("system\\data\\ADV02\\Models\\001AF63C.sa1mdl", false); //Monkey cage (full)
	___ADV02_OBJECTS[38] = LoadModel("system\\data\\ADV02\\Models\\001AF0B0.sa1mdl", false); //Monkey cage (bottom)
	___ADV02_OBJECTS[42] = LoadModel("system\\data\\ADV02\\Models\\001AE9B0.sa1mdl", false); //Monkey cage (bottom)
	___ADV02_OBJECTS[43] = LoadModel("system\\data\\ADV02\\Models\\001AE70C.sa1mdl", false); //Monkey cage (bottom)
	___ADV02_OBJECTS[10] = LoadModel("system\\data\\ADV02\\Models\\001A79D0.sa1mdl", false); //Item stand
	___ADV02_OBJECTS[12] = LoadModel("system\\data\\ADV02\\Models\\001A7370.sa1mdl", false); //Item stand
	___ADV02_OBJECTS[13] = LoadModel("system\\data\\ADV02\\Models\\001A6B1C.sa1mdl", false); //Item stand
	___ADV02_OBJECTS[96] = LoadModel("system\\data\\ADV02\\Models\\001BD918.sa1mdl", false); //OHandKey gold
	___ADV02_OBJECTS[97] = LoadModel("system\\data\\ADV02\\Models\\001BE56C.sa1mdl", false); //OHandKey silver
	___ADV02_OBJECTS[55] = LoadModel("system\\data\\ADV02\\Models\\001A9178.sa1mdl", false); //ODigPlace1
	ADV02_ACTIONS[16]->object = ___ADV02_OBJECTS[55];
	___ADV02_OBJECTS[103] = LoadModel("system\\data\\ADV02\\Models\\001C76EC.sa1mdl", false); //Master Emerald (complete)
	___ADV02_OBJECTS[71] = LoadModel("system\\data\\ADV02\\Models\\001D6AC8.sa1mdl", false); //The gate for Tails' Tornado
	___ADV02_OBJECTS[69] = ___ADV02_OBJECTS[71]->child;
	___ADV02_OBJECTS[70] = ___ADV02_OBJECTS[71]->child->sibling;
	___ADV02_MODELS[15] = LoadModel("system\\data\\ADV02\\Models\\002043D0.sa1mdl", false)->basicdxmodel; //Master Emerald glow
	___ADV02_ACTIONS[10]->object = LoadModel("system\\data\\ADV02\\Models\\00201C18.sa1mdl", false); //Train
	AddWhiteDiffuseMaterial(&___ADV02_ACTIONS[10]->object->child->sibling->sibling->sibling->basicdxmodel->mats[9]);
	___ADV02_ACTIONS[21]->object = LoadModel("system\\data\\ADV02\\Models\\001DDBFC.sa1mdl", false); //Plane platform
	___ADV02_ACTIONS[9]->object = LoadModel("system\\data\\ADV02\\Models\\001B2D5C.sa1mdl", false); //Final Egg base door
	___ADV02_ACTIONS[17]->object = LoadModel("system\\data\\ADV02\\Models\\001CCFBC.sa1mdl", false); //OHiddenGate
	___ADV02_MODELS[9] = LoadModel("system\\data\\ADV02\\Models\\001CDEF0.sa1mdl", false)->basicdxmodel; //OHiddenGate button
	AddWhiteDiffuseMaterial(&___ADV02_MODELS[9]->mats[2]);
	NJS_OBJECT* SandSwitch = LoadModel("system\\data\\ADV02\\Models\\001B42DC.sa1mdl", false);
	___ADV02_MODELS[12] = SandSwitch->basicdxmodel; //OSandSwitch
	___ADV02_MODELS[13] = SandSwitch->child->basicdxmodel; //OSandSwitch
}

void ADV02_OnFrame()
{
	auto entity = EntityData1Ptrs[0];
	if (CurrentLevel == LevelIDs_MysticRuins)
	{
		if (!IsGamePaused())
		{
			//Animate rotating stuff in MR Jungle
			if (CurrentAct == 2)
			{
				for (int q = 0; q < LengthOfArray(MRJungleObjectAnimations_Propeller); ++q)
				{
					if (MRJungleObjectAnimations_Propeller[q])
					{
						MRJungleObjectAnimations_Propeller[q]->ang[0] = (MRJungleObjectAnimations_Propeller[q]->ang[0] + (1024 - 512 * (q % 2)) * FramerateSetting) % 65535;
					}
				}
				for (int q = 0; q < LengthOfArray(MRJungleObjectAnimations_Lantern); ++q)
				{
					if (MRJungleObjectAnimations_Lantern[q])
					{
						MRJungleObjectAnimations_Lantern[q]->ang[1] = (MRJungleObjectAnimations_Lantern[q]->ang[1] + (256 * FramerateSetting)) % 65535;
					}
				}
			}
		}
		//Prevent dynamic direction from being adjusted in Eggman's base
		if (CurrentAct == 3)
		{
			CasinoLightRotation_Y = 0;
			CasinoLightRotation_Z = 0;
		}
		//Dynamic fog in the jungle + cutscene exclusions
		if (!IsGamePaused() && ADV02_2_Info && CurrentAct == 2)
		{
			if (IsPlayerInsideSphere(&TempleVector, 480.0f))
			{
				InsideTemple = 1;
			}
			else InsideTemple = 0;
			if (EV_MainThread_ptr != 0 && CurrentCharacter == 7 && CutsceneID == 208)  InsideTemple = 1;
			if (EV_MainThread_ptr != 0 && CurrentCharacter == 7 && CutsceneID == 226)  InsideTemple = 1;
			if (Camera_Data1 != nullptr && Camera_Data1->Position.y < 300.0f && InsideTemple == 0)
			{
				if (CurrentFogLayer < -65.0f) CurrentFogLayer = CurrentFogLayer + 64.0f;
				if (CurrentFogLayer > -65.0f) CurrentFogLayer = -1.0f;
				if (CurrentFogDist < -3200.0f) CurrentFogDist = CurrentFogDist + 128.0f;
			}
			if (Camera_Data1 != nullptr && Camera_Data1->Position.y > 300.0f)
			{
				if (GetTimeOfDay() != 0)
				{
					if (CurrentFogLayer > -1000.0f) CurrentFogLayer = CurrentFogLayer - 64.0f;
					if (CurrentFogDist > -14000.0f) CurrentFogDist = CurrentFogDist - 128.0f;
				}
				if (GetTimeOfDay() == 0)
				{
					if (CurrentFogLayer > -4000.0f) CurrentFogLayer = CurrentFogLayer - 64.0f;
					if (CurrentFogDist > -16000.0f) CurrentFogDist = CurrentFogDist - 128.0f;
				}
			}
			if (InsideTemple == 1)
			{
				if (GetTimeOfDay() != 0)
				{
					if (CurrentFogLayer > -1000.0f) CurrentFogLayer = CurrentFogLayer - 64.0f;
					if (CurrentFogDist > -14000.0f) CurrentFogDist = CurrentFogDist - 128.0f;
				}
				if (GetTimeOfDay() == 0)
				{
					if (CurrentFogLayer > -4000.0f) CurrentFogLayer = CurrentFogLayer - 64.0f;
					if (CurrentFogDist > -16000.0f) CurrentFogDist = CurrentFogDist - 128.0f;
				}
			}
		}
	}
}