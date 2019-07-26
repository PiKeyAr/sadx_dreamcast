#include "stdafx.h"

DataPointer(float, E105HitCounter, 0x03C58158);
DataPointer(float, CurrentFogDist, 0x03ABDC64);
DataPointer(float, CurrentFogLayer, 0x03ABDC60);
FunctionPointer(void, sub_405370, (NJS_OBJECT* a1, NJS_MOTION* a2, float a3, float a4), 0x405370);
FunctionPointer(void, sub_4B9540, (NJS_VECTOR* position, NJS_VECTOR* scale_v, float scale), 0x4B9540);
FunctionPointer(void, sub_408530, (NJS_OBJECT* a1), 0x408530);
static bool ReduceHotShelterFog = false;
static bool HotShelterColsLoaded = false;
static Angle E105Angle = 0;
SETObjData setdata_hs = {};

NJS_TEXNAME textures_shelter1[78];
NJS_TEXLIST texlist_hotshelter1 = { arrayptrandlength(textures_shelter1) };

NJS_TEXNAME textures_shelter2[156];
NJS_TEXLIST texlist_hotshelter2 = { arrayptrandlength(textures_shelter2) };

NJS_TEXNAME textures_shelter3[121];
NJS_TEXLIST texlist_hotshelter3 = { arrayptrandlength(textures_shelter3) };

/*
#include "HotShelter1.h"
#include "HotShelter2.h"
#include "HotShelter3.h"
*/

NJS_OBJECT* BrokenGlass = nullptr;
NJS_OBJECT* OEfHikari_Light = nullptr;
NJS_OBJECT* OLight3_1 = nullptr;
NJS_OBJECT* OLight3_2 = nullptr;
NJS_OBJECT* OLight3_3 = nullptr;
NJS_OBJECT* OLight3_4 = nullptr;

int HotShelterCols_Act1[] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
int HotShelterCols_Act2[] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
int HotShelterCols_Act3[] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };

void OLight2_Display(ObjectMaster *a1)
{
	EntityData1* v1; // esi
	Angle v2; // eax
	double v3; // st6
	bool IsUnderwater = true;
	v1 = a1->Data1;
	//Underwater check lol
	if (v1->Position.x > 1050 || (EV_MainThread_ptr == nullptr && (((v1->Position.x > 700 && v1->Position.x < 790) && (v1->Position.y > 1 && v1->Position.y < 3) && (v1->Position.z > -690 && v1->Position.z < -610))))) IsUnderwater = false;
	if (CurrentAct) IsUnderwater = false;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.y;
		if (v2)
		{
			njRotateY(0, v2);
		}
		//Act 1 stuff
		if (!CurrentAct)
		{
			//Draw opaque model first
			DrawModel(((NJS_OBJECT*)0x1829068)->basicdxmodel);
			njControl3D_Backup();
			njControl3D_Add(NJD_CONTROL_3D_CONSTANT_MATERIAL);
			if (IsUnderwater)
			{
				if (!IsCameraUnderwater)
				{
					SetMaterialAndSpriteColor_Float(1.0f, 0.4f, 0.53f, 0.5f);
					DrawQueueDepthBias = 2000.0f;
				}
				else
				{
					DrawQueueDepthBias = 0.0f;
					SetMaterialAndSpriteColor_Float(1.0f, 1.0f, 1.0f, 1.0f);
				}
			}
			else
			{
				DrawQueueDepthBias = 0.0f;
				SetMaterialAndSpriteColor_Float(1.0f, 1.0f, 1.0f, 1.0f);
			}
			if (v1->Position.x > 1050) DrawQueueDepthBias = -20000.0f;
			ProcessModelNode_D_WrapperB((NJS_OBJECT*)0x1828BD4, (QueuedModelFlagsB)0, 1.0f);
			njPopMatrix(1u);
			ClampGlobalColorThing_Thing();
			njControl3D_Restore();
			DrawQueueDepthBias = 0.0f;
		}
		//Acts 2 and 3
		else
		{
			DrawModel(((NJS_OBJECT*)0x1829068)->basicdxmodel);
			DrawQueueDepthBias = -20000.0f;
			ProcessModelNode((NJS_OBJECT*)0x1828BD4, (QueuedModelFlagsB)0, 1.0f);
			njPopMatrix(1u);
			DrawQueueDepthBias = 0.0f;
		}
	}
}

void HotShelterCols_Display(ObjectMaster* a1)
{
	NJS_VECTOR sphere = { 0, 0, 0 };
	float radius = 0.0f;
	if (!MissedFrames && CurrentAct == 0)
	{
		for (int i = 0; i < LengthOfArray(HotShelterCols_Act1); i++)
		{
			if (HotShelterCols_Act1[i] != -1)
			{
				//PrintDebug("Trying COl: %d\n", HotShelterCols[i]);
				radius = 2500.0f + GeoLists[96]->Col[HotShelterCols_Act1[i]].Radius;
				sphere.x = GeoLists[96]->Col[HotShelterCols_Act1[i]].Center.x;
				sphere.y = GeoLists[96]->Col[HotShelterCols_Act1[i]].Center.y;
				sphere.z = GeoLists[96]->Col[HotShelterCols_Act1[i]].Center.z;
				if (radius != 0 && IsPlayerInsideSphere(&sphere, radius))
				{
					//PrintDebug("Radius: %f\n", radius);
					njSetTexture(&texlist_hotshelter1);
					njPushMatrix(0);
					njTranslate(0, 0, 0, 0);
					DrawQueueDepthBias = -1000.0f;
					//General
					if (!(GeoLists[96]->Col[HotShelterCols_Act1[i]].Flags & 0x40000))
					{
						ProcessModelNode(GeoLists[96]->Col[HotShelterCols_Act1[i]].Model, QueuedModelFlagsB_SomeTextureThing, 1.0f);
					}
					//Ladder thing in the drainage room
					else
					{
						ProcessModelNode_D(GeoLists[96]->Col[HotShelterCols_Act1[i]].Model, QueuedModelFlagsB_EnableZWrite, 1.0f);
					}
					njPopMatrix(1u);
					DrawQueueDepthBias = 0;
				}
			}
		}
	}
	if (!MissedFrames && CurrentAct == 1)
	{
		for (int i = 0; i < LengthOfArray(HotShelterCols_Act2); i++)
		{
			if (HotShelterCols_Act2[i] != -1)
			{
				//PrintDebug("Trying COl: %d\n", HotShelterCols_Act2[i]);
				radius = 2500.0f + GeoLists[97]->Col[HotShelterCols_Act2[i]].Radius;
				sphere.x = GeoLists[97]->Col[HotShelterCols_Act2[i]].Center.x;
				sphere.y = GeoLists[97]->Col[HotShelterCols_Act2[i]].Center.y;
				sphere.z = GeoLists[97]->Col[HotShelterCols_Act2[i]].Center.z;
				if (radius != 0 && IsPlayerInsideSphere(&sphere, radius))
				{
					//PrintDebug("Radius: %f\n", radius);
					njSetTexture(&texlist_hotshelter2);
					njPushMatrix(0);
					njTranslate(0, 0, 0, 0);
					//Fence objects with texture 129 that weren't added with the COL flag or texture 136
					if (!(GeoLists[97]->Col[HotShelterCols_Act2[i]].Flags & 0x08000000))
					{
						DrawQueueDepthBias = -3000.0f;
						ProcessModelNode(GeoLists[97]->Col[HotShelterCols_Act2[i]].Model, (QueuedModelFlagsB)1, 1.0f);
						njPopMatrix(1u);
						DrawQueueDepthBias = 0;
					}
					//Glass surface
					else if ((GeoLists[97]->Col[HotShelterCols_Act2[i]].Flags & 0x1000000) && (GeoLists[97]->Col[HotShelterCols_Act2[i]].Flags & 0x40000))
					{
						DrawQueueDepthBias = -1000.0f;
						ProcessModelNode(GeoLists[97]->Col[HotShelterCols_Act2[i]].Model, (QueuedModelFlagsB)1, 1.0f);
						njPopMatrix(1u);
						DrawQueueDepthBias = 0;
					}
					//Fence objects in the gear area
					else if (GeoLists[97]->Col[HotShelterCols_Act2[i]].Flags & 0x1000000)
					{
						DrawQueueDepthBias = 3200.0f;
						ProcessModelNode_D(GeoLists[97]->Col[HotShelterCols_Act2[i]].Model, 0, 1.0f);
						njPopMatrix(1u);
						DrawQueueDepthBias = 0;
					}
					//Lights under the glass surface
					else if (GeoLists[97]->Col[HotShelterCols_Act2[i]].Flags & 0x40000)
					{
						DrawQueueDepthBias = -10000.0f;
						ProcessModelNode_D(GeoLists[97]->Col[HotShelterCols_Act2[i]].Model, 0, 1.0f);
						njPopMatrix(1u);
						DrawQueueDepthBias = 0;
					}
					//Generic
					else
					{
						DrawQueueDepthBias = -15000.0;
						ProcessModelNode_D(GeoLists[97]->Col[HotShelterCols_Act2[i]].Model, 0, 1.0f);
						njPopMatrix(1u);
						DrawQueueDepthBias = 0;
					}
				}
			}
		}
	}
	if (!MissedFrames && CurrentAct == 2)
	{
		for (int i = 0; i < LengthOfArray(HotShelterCols_Act3); i++)
		{
			if (HotShelterCols_Act3[i] != -1)
			{
				//PrintDebug("Trying COl: %d\n", HotShelterCols[i]);
				radius = 2500.0f + GeoLists[98]->Col[HotShelterCols_Act3[i]].Radius;
				sphere.x = GeoLists[98]->Col[HotShelterCols_Act3[i]].Center.x;
				sphere.y = GeoLists[98]->Col[HotShelterCols_Act3[i]].Center.y;
				sphere.z = GeoLists[98]->Col[HotShelterCols_Act3[i]].Center.z;
				if (radius != 0 && IsPlayerInsideSphere(&sphere, radius))
				{
					//PrintDebug("Radius: %f\n", radius);
					njSetTexture(&texlist_hotshelter3);
					njPushMatrix(0);
					njTranslate(0, 0, 0, 0);
					//Fence objects in the gear area
					if (GeoLists[98]->Col[HotShelterCols_Act3[i]].Flags & 0x01000000)
					{
						DrawQueueDepthBias = 3200.0f;
						ProcessModelNode_D(GeoLists[98]->Col[HotShelterCols_Act3[i]].Model, 0, 1.0f);
						njPopMatrix(1u);
						DrawQueueDepthBias = 0;
					}
					//Generic
					else
					{
						DrawQueueDepthBias = -15000.0;
						ProcessModelNode_D(GeoLists[98]->Col[HotShelterCols_Act3[i]].Model, 0, 1.0f);
						njPopMatrix(1u);
						DrawQueueDepthBias = 0;
					}
				}
			}
		}
	}
}

void HotShelterCols_Delete(ObjectMaster* a1)
{
	HotShelterColsLoaded = false;
	CheckThingButThenDeleteObject(a1);
}

void HotShelterCols_Main(ObjectMaster* a1)
{
	if (CurrentLevel == LevelIDs_HotShelter)
	{
		HotShelterCols_Display(a1);
	}
	else HotShelterCols_Delete(a1);
}

void HotShelterCols_Load(ObjectMaster* a1)
{
	a1->MainSub = (void(__cdecl*)(ObjectMaster*))HotShelterCols_Main;
	a1->DisplaySub = (void(__cdecl*)(ObjectMaster*))HotShelterCols_Display;
	a1->DeleteSub = (void(__cdecl*)(ObjectMaster*))HotShelterCols_Delete;
}

void LoadHotShelterCols()
{
	ObjectMaster* obj;
	EntityData1* ent;
	ObjectFunc(OF0, HotShelterCols_Load);
	setdata_hs.Distance = 612800.0f;
	obj = LoadObject((LoadObj)2, 3, OF0);
	obj->SETData.SETData = &setdata_hs;
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
	HotShelterColsLoaded = true;
}

void AddHotShelterTransparentThing(int colnumber, int act)
{
	if (act == 0)
	{
		for (int i = 0; i < LengthOfArray(HotShelterCols_Act1); i++)
		{
			if (HotShelterCols_Act1[i] == colnumber) return;
			else if (HotShelterCols_Act1[i] == -1)
			{
				HotShelterCols_Act1[i] = colnumber;
				//PrintDebug("Added COl: %d in Act %d\n", colnumber, act);
				return;
			}
		}
	}
	if (act == 1)
	{
		for (int i = 0; i < LengthOfArray(HotShelterCols_Act2); i++)
		{
			if (HotShelterCols_Act2[i] == colnumber) return;
			else if (HotShelterCols_Act2[i] == -1)
			{
				HotShelterCols_Act2[i] = colnumber;
				//PrintDebug("Added COl: %d in Act %d\n", colnumber, act);
				return;
			}
		}
	}
	if (act == 2)
	{
		for (int i = 0; i < LengthOfArray(HotShelterCols_Act3); i++)
		{
			if (HotShelterCols_Act3[i] == colnumber) return;
			else if (HotShelterCols_Act3[i] == -1)
			{
				HotShelterCols_Act3[i] = colnumber;
				//PrintDebug("Added COl: %d\n", colnumber);
				return;
			}
		}
	}
	PrintDebug("Error adding COL %d, array size exceeded!\n", colnumber);
}

static void SkyBox_HotShelter_Load_r(ObjectMaster* a1);
static Trampoline SkyBox_HotShelter_Load_t(0x59A2A0, 0x59A2A9, SkyBox_HotShelter_Load_r);
static void __cdecl SkyBox_HotShelter_Load_r(ObjectMaster* a1)
{
	auto original = reinterpret_cast<decltype(SkyBox_HotShelter_Load_r)*>(SkyBox_HotShelter_Load_t.Target());
	original(a1);
	if (EnableHotShelter && !HotShelterColsLoaded) LoadHotShelterCols();
}

void RenderWaterThing(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	DrawQueueDepthBias = 2000.0f;
	ProcessModelNode(a1, (QueuedModelFlagsB)0, a3);
	DrawQueueDepthBias = 0;
}

void AmyHatchFix(ObjectMaster *obj, CollisionData *collisionArray, int count, unsigned __int8 list)
{
	if (CurrentCharacter != 5) Collision_Init(obj, collisionArray, count, list);
}

void njDrawSprite3D_TheyForgotToClampAgain(NJS_SPRITE* _sp, Int n, NJD_SPRITE attr)
{
	njDrawSprite3D(_sp, n, attr);
	ClampGlobalColorThing_Thing();
}

void RenderSuimen(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	SetMaterialAndSpriteColor_Float(0.0f, 0.5f, 0.5f, 0.5f);
	//DrawQueueDepthBias = 000.0f;
	ProcessModelNode_A_Wrapper(a1, a2, a3);
	//DrawQueueDepthBias = 0.0f;
	ClampGlobalColorThing_Thing();
}

void RenderOHikari(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	ProcessModelNode_C_VerifyTexList(a1, a2, a3);
	DrawQueueDepthBias = 1000.0f;
	ProcessModelNode(OEfHikari_Light, QueuedModelFlagsB_SomeTextureThing, 1.0f);
	DrawQueueDepthBias = 0.0f;
}

void RenderFourWaterThings(NJS_OBJECT* a1, QueuedModelFlagsB a2, float a3)
{
	DrawQueueDepthBias = -4000.0f;
	ProcessModelNode_A_Wrapper(a1, a2, a3);
	DrawQueueDepthBias = 0.0f;
}

void KowareSuisou_Display_Fixed(ObjectMaster* a1)
{
	EntityData1* v1; // esi
	Angle v2; // eax
	Angle v3; // eax
	float a4a; // [esp+8h] [ebp+4h]

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);

		njTranslate(0, 0.0f, *(float*)& v1->LoopData, 0.0f);
		v3 = v1->Rotation.x;
		if (v3)
		{
			njRotateY(0, v3);
		}
		njScale(0, v1->Scale.y, 1.0f, v1->Scale.y);
		if (v1->Scale.y <= 1.0f)
		{
			a4a = 1.0f;
		}
		else
		{
			a4a = v1->Scale.y;
		}
		DrawQueueDepthBias = 2900.0f;
		//Thing in the middle
		njAction_Queue_407FC0((NJS_ACTION*)0x186DEF8, *(float*)& v1->CharIndex, (QueuedModelFlagsB)0);
		njPopMatrix(1u);

		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.y;
		if (v2)
		{
			njRotateY(0, v2);
		}
		//Top
		sub_408530((NJS_OBJECT*)0x182A778);
		DrawQueueDepthBias = 3000.0f;
		if (v1->Action)
		{
			//Broken glass
			ProcessModelNode_D((NJS_OBJECT*)0x182C38C, (QueuedModelFlagsB)0, 1.0f);
		}
		else
		{
			//Glass
			ProcessModelNode_D((NJS_OBJECT*)0x1829844, (QueuedModelFlagsB)4, 1.0f);
		}
		njPopMatrix(1u);
	}
}

void RenderRoboTVBrokenGlass(NJS_MODEL_SADX* model, QueuedModelFlagsB blend, float scale)
{
	DrawModel_Queue(BrokenGlass->basicdxmodel, (QueuedModelFlagsB)0);
	DrawModel_Queue(model, (QueuedModelFlagsB)0);
}

void RenderOLight3(NJS_OBJECT* a1, QueuedModelFlagsB a2, float a3)
{
	ProcessModelNode_C_VerifyTexList(OLight3_1, a2, a3);
	ProcessModelNode_C_VerifyTexList(OLight3_2, a2, a3);
	ProcessModelNode(OLight3_3, (QueuedModelFlagsB)0, a3);
	ProcessModelNode(OLight3_4, (QueuedModelFlagsB)0, a3);
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

void PlayMusicHook_ReduceE105Fog(MusicIDs song)
{
	PlayMusic(song);
	ReduceHotShelterFog = true;
}

void ParseHotShelterMaterials(LandTable* landtable, int act, bool remove)
{
	Uint32 materialflags;
	NJS_MATERIAL* material;
	for (int j = 0; j < landtable->COLCount; j++)
	{
		if (!remove && landtable->Col[j].Flags & 0x08000000)
		{
			if (landtable->Col[j].Flags & ColFlags_Visible)
			{
				landtable->Col[j].Flags &= ~ColFlags_Visible;
				AddHotShelterTransparentThing(j, act);
			}
		}
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			material = (NJS_MATERIAL*)& landtable->Col[j].Model->basicdxmodel->mats[k];
			if (material->attrflags & NJD_CUSTOMFLAG_WHITE)
			{
				if (remove) RemoveWhiteDiffuseMaterial(material);
				else AddWhiteDiffuseMaterial(material);
			}
			if (act == 0 && material->attr_texId == 46)
			{
				if (remove) RemoveAlphaRejectMaterial(material);
				else AddAlphaRejectMaterial(material);
			}
			if (act == 1 && (material->attr_texId == 104 || material->attr_texId == 98 || material->attr_texId == 18))
			{
				if (remove) RemoveAlphaRejectMaterial(material);
				else AddAlphaRejectMaterial(material);
			}
			if (act == 2 && material->attr_texId == 18)
			{
				if (remove) RemoveAlphaRejectMaterial(material);
				else AddAlphaRejectMaterial(material);
			}
			if (!remove && act == 1 && material->attr_texId == 129 && !(landtable->Col[j].Flags & 0x8000000))
			{
				if (landtable->Col[j].Flags & ColFlags_Visible)
				{
					landtable->Col[j].Flags &= ~ColFlags_Visible;
					AddHotShelterTransparentThing(j, 1);
				}
			}
			if (!remove && (material->attr_texId == 136) && !(landtable->Col[j].Flags & 0x8000000))
			{
				if (landtable->Col[j].Flags & ColFlags_Visible)
				{
					landtable->Col[j].Flags &= ~ColFlags_Visible;
					landtable->Col[j].Flags |= 0x8000000;
					AddHotShelterTransparentThing(j, 1);
				}
			}
		}
	}
}

void UnloadLevelFiles_STG12()
{
	ParseHotShelterMaterials(STG12_0_Info->getlandtable(), 0, true);
	ParseHotShelterMaterials(STG12_1_Info->getlandtable(), 1, true);
	ParseHotShelterMaterials(STG12_2_Info->getlandtable(), 2, true);
	for (int i = 0; i < LengthOfArray(HotShelterCols_Act1); i++)
	{
		HotShelterCols_Act1[i] = -1;
		HotShelterCols_Act2[i] = -1;
		HotShelterCols_Act3[i] = -1;
	}
	delete STG12_0_Info;
	delete STG12_1_Info;
	delete STG12_2_Info;
	STG12_0_Info = nullptr;
	STG12_1_Info = nullptr;
	STG12_2_Info = nullptr;
}

void HotShelter_Init()
{
	CheckAndUnloadLevelFiles();
	STG12_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG12\\0.sa1lvl"));
	STG12_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG12\\1.sa1lvl"));
	STG12_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG12\\2.sa1lvl"));
	LandTable* STG12_0 = STG12_0_Info->getlandtable(); //&landtable_0001970C;
	LandTable* STG12_1 = STG12_1_Info->getlandtable(); //&landtable_0005277C;
	LandTable* STG12_2 = STG12_2_Info->getlandtable(); //&landtable_000B0DA4;
	RemoveMaterialColors_Landtable(STG12_0);
	RemoveMaterialColors_Landtable(STG12_1);
	RemoveMaterialColors_Landtable(STG12_2);
	STG12_0->TexList = &texlist_hotshelter1;
	STG12_1->TexList = &texlist_hotshelter2;
	STG12_2->TexList = &texlist_hotshelter3;
	ParseHotShelterMaterials(STG12_0, 0, false);
	ParseHotShelterMaterials(STG12_1, 1, false);
	ParseHotShelterMaterials(STG12_2, 2, false);
	WriteData((LandTable**)0x97DB88, STG12_0);
	WriteData((LandTable**)0x97DB8C, STG12_1);
	WriteData((LandTable**)0x97DB90, STG12_2);
	if (!ModelsLoaded_STG12)
	{
		if (!Use1999SetFiles)
		{
			ReplaceBIN_DC("SET1200A");
			ReplaceBIN_DC("SET1200B");
			ReplaceBIN_DC("SET1200S");
			ReplaceBIN_DC("SET1201A");
			ReplaceBIN_DC("SET1201S");
			ReplaceBIN_DC("SET1202E");
			ReplaceBIN_DC("SET1202S");
			ReplaceBIN_DC("SET1203S");
		}
		else
		{
			ReplaceBIN_1999("SET1200A");
			ReplaceBIN_1999("SET1200B");
			ReplaceBIN_1999("SET1200S");
			ReplaceBIN_1999("SET1201A");
			ReplaceBIN_1999("SET1201S");
			ReplaceBIN_1999("SET1202E");
			ReplaceBIN_1999("SET1202S");
			ReplaceBIN_1999("SET1203S");
		}
		ReplaceBIN_DC("CAM1200A");
		ReplaceBIN_DC("CAM1200B");
		ReplaceBIN_DC("CAM1200S");
		ReplaceBIN_DC("CAM1201A");
		ReplaceBIN_DC("CAM1201S");
		ReplaceBIN_DC("CAM1202E");
		ReplaceBIN_DC("CAM1202S");
		ReplaceBIN_DC("CAM1203S");
		ReplacePVM("HOTSHELTER0");
		ReplacePVM("HOTSHELTER1");
		ReplacePVM("HOTSHELTER2");
		ReplacePVM("HOTSHELTER3");
		ReplacePVM("HOTSHELTER4");
		ReplacePVM("SHELTER_COLUMN");
		ReplacePVM("SHELTER_SUIMEN");
		//Code fixes
		WriteData((float*)0x005AB2F0, -1000.0f); //Four glass things in drainage room (depth bias)
		WriteCall((void*)0x5A93BF, njDrawSprite3D_TheyForgotToClampAgain);
		WriteJump((void*)0x5A91E0, KowareSuisou_Display_Fixed);
		WriteJump((void*)0x5A30F0, OLight2_Display);
		WriteCall((void*)0x5A5D6C, RenderRoboTVBrokenGlass);
		WriteCall((void*)0x5A3A03, PlayMusicHook_ReduceE105Fog); //Hook to disable fog in E105 room
		WriteCall((void*)0x5A3C99, E105Animation); //Add missing E105 Zeta animation
		WriteCall((void*)0x59F75C, AmyHatchFix); //Don't make the ventilation hatch solid when playing as Amy
		WriteCall((void*)0x5ADAFE, RenderFourWaterThings); //Four aquariums in drainage room
		//Fix the water splashes created by the water thing
		WriteCall((void*)0x5AD478, RenderWaterThing);
		WriteCall((void*)0x5AD4BF, RenderWaterThing);
		WriteCall((void*)0x5AD506, RenderWaterThing);
		WriteCall((void*)0x5AD54D, RenderWaterThing);
		//Texlists
		ResizeTextureList((NJS_TEXLIST*)0x180DFF4, textures_shelter1);
		ResizeTextureList((NJS_TEXLIST*)0x17F56F4, textures_shelter2);
		ResizeTextureList((NJS_TEXLIST*)0x17F4F74, textures_shelter3);
		//Material colors
		AddWhiteDiffuseMaterial((NJS_MATERIAL*)0x0181751C); //OKazari2
		AddWhiteDiffuseMaterial((NJS_MATERIAL*)0x01800E34);	//OBoxAna
		RemoveVertexColors_Object((NJS_OBJECT*)0x17FF884); //OSubTV
		RemoveVertexColors_Object((NJS_OBJECT*)0x18289D4); //OLight3 (but actually I'm loading my own model)
		//Model replacements
		//OEfHikari
		*(NJS_OBJECT*)0x187201C = *LoadModel("system\\data\\STG12\\Models\\0015CC48.sa1mdl", false); //OEfHikari
		((NJS_OBJECT*)0x187201C)->basicdxmodel->meshsets[0].nbMesh = 0; //Hide light 1
		((NJS_OBJECT*)0x187201C)->basicdxmodel->meshsets[7].nbMesh = 0; //Hide light 2
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x187201C)->basicdxmodel->mats[2]);
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x187201C)->basicdxmodel->mats[3]);
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x187201C)->basicdxmodel->mats[4]);
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x187201C)->basicdxmodel->mats[5]);
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x187201C)->basicdxmodel->mats[6]);
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x187201C)->basicdxmodel->mats[7]);
		OEfHikari_Light = LoadModel("system\\data\\STG12\\Models\\0015CC48.sa1mdl", false);
		OEfHikari_Light->basicdxmodel->meshsets[1].nbMesh = 0;
		OEfHikari_Light->basicdxmodel->meshsets[2].nbMesh = 0;
		OEfHikari_Light->basicdxmodel->meshsets[3].nbMesh = 0;
		OEfHikari_Light->basicdxmodel->meshsets[4].nbMesh = 0;
		OEfHikari_Light->basicdxmodel->meshsets[5].nbMesh = 0;
		OEfHikari_Light->basicdxmodel->meshsets[6].nbMesh = 0;
		OEfHikari_Light->basicdxmodel->meshsets[8].nbMesh = 0;
		WriteCall((void*)0x59D444, RenderOHikari); //Add back OHikari green light
		//E105 boss missile
		*(NJS_OBJECT*)0x17DF53C = *LoadModel("system\\data\\STG12\\Models\\0019F8E4.sa1mdl", false);
		((NJS_OBJECT*)0x17DF53C)->child->basicdxmodel->mats[0].diffuse.color = 0xFF000000;
		((NJS_OBJECT*)0x17DF53C)->child->basicdxmodel->mats[0].attrflags |= NJD_FLAG_USE_TEXTURE;
		((NJS_OBJECT*)0x17DF53C)->child->basicdxmodel->mats[0].attr_texId = 3;
		((NJS_OBJECT*)0x17DF53C)->child->sibling->basicdxmodel->mats[0].diffuse.color = 0xFF000000;
		((NJS_OBJECT*)0x17DF53C)->child->sibling->basicdxmodel->mats[0].attrflags |= NJD_FLAG_USE_TEXTURE;
		((NJS_OBJECT*)0x17DF53C)->child->sibling->basicdxmodel->mats[0].attr_texId = 3;
		((NJS_OBJECT*)0x17DF53C)->child->sibling->sibling->basicdxmodel->mats[0].diffuse.color = 0xFF000000;
		((NJS_OBJECT*)0x17DF53C)->child->sibling->sibling->basicdxmodel->mats[0].attrflags |= NJD_FLAG_USE_TEXTURE;
		((NJS_OBJECT*)0x17DF53C)->child->sibling->sibling->basicdxmodel->mats[0].attr_texId = 3;
		((NJS_OBJECT*)0x17DF53C)->child->sibling->sibling->sibling->basicdxmodel->mats[0].diffuse.color = 0xFF000000;
		((NJS_OBJECT*)0x17DF53C)->child->sibling->sibling->sibling->basicdxmodel->mats[0].attrflags |= NJD_FLAG_USE_TEXTURE;
		((NJS_OBJECT*)0x17DF53C)->child->sibling->sibling->sibling->basicdxmodel->mats[0].attr_texId = 3;
		//OLight3
		OLight3_1 = LoadModel("system\\data\\STG12\\Models\\0011E380.sa1mdl", false);
		OLight3_2 = LoadModel("system\\data\\STG12\\Models\\0011E380.sa1mdl", false);
		OLight3_3 = LoadModel("system\\data\\STG12\\Models\\0011E380.sa1mdl", false);
		OLight3_4 = LoadModel("system\\data\\STG12\\Models\\0011E380.sa1mdl", false);
		OLight3_1->child->basicdxmodel->meshsets[3].nbMesh = 0;
		OLight3_1->child->basicdxmodel->meshsets[4].nbMesh = 0;
		OLight3_1->child->basicdxmodel->meshsets[5].nbMesh = 0;
		OLight3_2->evalflags |= NJD_EVAL_HIDE;
		OLight3_2->child->basicdxmodel->meshsets[0].nbMesh = 0;
		OLight3_2->child->basicdxmodel->meshsets[1].nbMesh = 0;
		OLight3_2->child->basicdxmodel->meshsets[2].nbMesh = 0;
		OLight3_2->child->basicdxmodel->meshsets[4].nbMesh = 0;
		OLight3_2->child->basicdxmodel->meshsets[5].nbMesh = 0;
		OLight3_3->evalflags |= NJD_EVAL_HIDE;
		OLight3_3->child->basicdxmodel->meshsets[0].nbMesh = 0;
		OLight3_3->child->basicdxmodel->meshsets[1].nbMesh = 0;
		OLight3_3->child->basicdxmodel->meshsets[2].nbMesh = 0;
		OLight3_3->child->basicdxmodel->meshsets[3].nbMesh = 0;
		OLight3_3->child->basicdxmodel->meshsets[5].nbMesh = 0;
		OLight3_4->evalflags |= NJD_EVAL_HIDE;
		OLight3_4->child->basicdxmodel->meshsets[0].nbMesh = 0;
		OLight3_4->child->basicdxmodel->meshsets[1].nbMesh = 0;
		OLight3_4->child->basicdxmodel->meshsets[2].nbMesh = 0;
		OLight3_4->child->basicdxmodel->meshsets[3].nbMesh = 0;
		OLight3_4->child->basicdxmodel->meshsets[4].nbMesh = 0;
		WriteCall((void*)0x5A2EF4, RenderOLight3);
		//OBridge
		NJS_OBJECT* OBridge = LoadModel("system\\data\\STG12\\Models\\0012B71C.sa1mdl", false);
		*(NJS_MODEL_SADX*)0x183C594 = *OBridge->child->sibling->basicdxmodel; //OBridge moving bit
		*(NJS_MODEL_SADX*)0x183CC10 = *OBridge->child->basicdxmodel; //OBridge static bit 1 (support)
		*(NJS_MODEL_SADX*)0x183D2A0 = *OBridge->basicdxmodel; //OBridge static bit 2 (round thing)
		//OSuimen0
		*(NJS_OBJECT*)0x180F7F0 = *LoadModel("system\\data\\STG12\\Models\\0015EC18.sa1mdl", false); //OSuimen0 1
		*(NJS_OBJECT*)0x180FA2C = *LoadModel("system\\data\\STG12\\Models\\0015EE48.sa1mdl", false); //OSuimen0 2
		*(NJS_OBJECT*)0x180FBB4 = *LoadModel("system\\data\\STG12\\Models\\0015EFC4.sa1mdl", false); //OSuimen0 3
		*(NJS_OBJECT*)0x180FCC0 = *LoadModel("system\\data\\STG12\\Models\\0015F0C8.sa1mdl", false); //OSuimen0 4
		WriteCall((void*)0x5A8FE1, RenderSuimen); //Fix OSuimen0 flickering
		//Other models
		*(NJS_MODEL_SADX*)0x182DFF8 = *LoadModel("system\\data\\STG12\\Models\\00122168.sa1mdl", false)->basicdxmodel; //OKaitenKey
		*(NJS_MODEL_SADX*)0x182D6F4 = *LoadModel("system\\data\\STG12\\Models\\001227C8.sa1mdl", false)->basicdxmodel; //OKaitenKey handle
		BrokenGlass = LoadModel("system\\data\\STG12\\Models\\001781FC.sa1mdl", false); //ORoboTV broken glass
		*(NJS_MODEL_SADX*)0x180DC54 = *LoadModel("system\\data\\STG12\\Models\\001781FC.sa1mdl", false)->basicdxmodel; //ORoboTV broken glass
		((NJS_MODEL_SADX*)0x180DC54)->meshsets[2].nbMesh = 0; //Hide the black part to render separately
		*(NJS_OBJECT*)0x185D200 = *LoadModel("system\\data\\STG12\\Models\\0014A8F4.sa1mdl", false); //OCarne
		ForceLevelSpecular_Object(((NJS_OBJECT*)0x185D200)->child->sibling->child);
		ForceLevelSpecular_Object(((NJS_OBJECT*)0x185D200)->child->sibling->child->sibling);
		((NJS_ACTION*)0x17F1CBC)->object = LoadModel("system\\data\\STG12\\Models\\0017B464.sa1mdl", false); //OCargoTop
		((NJS_ACTION*)0x17F1E94)->object = LoadModel("system\\data\\STG12\\Models\\001818D4.sa1mdl", false); //OEnemyContainer
		ForceLevelSpecular_Object(((NJS_ACTION*)0x17F1E94)->object);
		*(NJS_OBJECT*)0x17F7094 = *LoadModel("system\\data\\STG12\\Models\\001633F8.sa1mdl", false); //OBanji 1
		*(NJS_OBJECT*)0x17F68E4 = *LoadModel("system\\data\\STG12\\Models\\00162C68.sa1mdl", false); //OBanji 2
		*(NJS_OBJECT*)0x17E8DE4 = *LoadModel("system\\data\\STG12\\Models\\0017EC28.sa1mdl", false); //Gamma train tracks 1
		*(NJS_OBJECT*)0x17EAE84 = *LoadModel("system\\data\\STG12\\Models\\001801AC.sa1mdl", false); //Gamma train tracks 2
		*(NJS_OBJECT*)0x17F36A4 = *LoadModel("system\\data\\STG12\\Models\\00187714.sa1mdl", false); //Gamma train chain
		*(NJS_OBJECT*)0x17E4AD4 = *LoadModel("system\\data\\STG12\\Models\\0017BDCC.sa1mdl", false); //OCargoContainer related
		*(NJS_OBJECT*)0x17F42FC = *LoadModel("system\\data\\STG12\\Models\\0018832C.sa1mdl", false); //OCargoContainer related
		*(NJS_OBJECT*)0x1868C74 = *LoadModel("system\\data\\STG12\\Models\\001547C4.sa1mdl", true); //OFens
		*(NJS_OBJECT*)0x1863304 = *LoadModel("system\\data\\STG12\\Models\\0014ECBC.sa1mdl", false); //OBiriBiri
		*(NJS_OBJECT*)0x17E6284 = *LoadModel("system\\data\\STG12\\Models\\0017CF8C.sa1mdl", false); //OCargoStart 1, OCargo, Gamma train platform
		*(NJS_OBJECT*)0x17E6D44 = *LoadModel("system\\data\\STG12\\Models\\0017D6A4.sa1mdl", false); //OCargoStart 2
		*(NJS_OBJECT*)0x184AFDC = *LoadModel("system\\data\\STG12\\Models\\0013BCC8.sa1mdl", false); //OGateSide
		*(NJS_OBJECT*)0x184F358 = *LoadModel("system\\data\\STG12\\Models\\0013EF94.sa1mdl", false); //OSasae1A
		*(NJS_OBJECT*)0x184E8B0 = *LoadModel("system\\data\\STG12\\Models\\0013E824.sa1mdl", false); //OSasae1B
		*(NJS_OBJECT*)0x184DE58 = *LoadModel("system\\data\\STG12\\Models\\0013E0B4.sa1mdl", false); //OSasae1C
		*(NJS_OBJECT*)0x184D694 = *LoadModel("system\\data\\STG12\\Models\\0013DB04.sa1mdl", false); //OSasae1D
		*(NJS_OBJECT*)0x181DBFC = *LoadModel("system\\data\\STG12\\Models\\001139D8.sa1mdl", false); //OEntotsu
		*(NJS_OBJECT*)0x1852F4C = *LoadModel("system\\data\\STG12\\Models\\00141B68.sa1mdl", false); //ODrumcan
		*(NJS_OBJECT*)0x18320D4 = *LoadModel("system\\data\\STG12\\Models\\00126010.sa1mdl", false); //OKaidan
		*(NJS_OBJECT*)0x18146D4 = *LoadModel("system\\data\\STG12\\Models\\0010B55C.sa1mdl", false); //Floodgates
		*(NJS_OBJECT*)0x1851CA4 = *LoadModel("system\\data\\STG12\\Models\\00140EBC.sa1mdl", false); //OElevator inside
		*(NJS_OBJECT*)0x1851EA4 = *LoadModel("system\\data\\STG12\\Models\\00141080.sa1mdl", false); //OElevator door 1
		*(NJS_OBJECT*)0x18520A4 = *LoadModel("system\\data\\STG12\\Models\\00141244.sa1mdl", false); //OElevator door 2
		*(NJS_OBJECT*)0x1815678 = *LoadModel("system\\data\\STG12\\Models\\0010BEFC.sa1mdl", false); //OSyoumei
		*(NJS_OBJECT*)0x1810D60 = *LoadModel("system\\data\\STG12\\Models\\0015FEAC.sa1mdl", false); //Waterfall thing
		*(NJS_OBJECT*)0x1810690 = *LoadModel("system\\data\\STG12\\Models\\0015F7EC.sa1mdl", false); //No idea but this is some water thing
		*(NJS_OBJECT*)0x181011C = *LoadModel("system\\data\\STG12\\Models\\0015F518.sa1mdl", false); //Water objects behind glass in drainage room
		((NJS_OBJECT*)0x180F5D4)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT; //Water surface in drainage room
		((NJS_OBJECT*)0x180F5D4)->basicdxmodel->mats[0].diffuse.color = 0x7FFFFFFF; //Water surface in drainage room
		*(NJS_OBJECT*)0x182ECEC = *LoadModel("system\\data\\STG12\\Models\\001236A4.sa1mdl", false); //OKaitenmeter
		*(NJS_OBJECT*)0x180391C = *LoadModel("system\\data\\STG12\\Models\\0016F268.sa1mdl", false); //Colored cube 1
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x180391C)->basicdxmodel->mats[8]);
		*(NJS_OBJECT*)0x1804CD4 = *LoadModel("system\\data\\STG12\\Models\\00170054.sa1mdl", false); //Colored cube 2
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x1804CD4)->basicdxmodel->mats[8]);
		*(NJS_OBJECT*)0x180608C = *LoadModel("system\\data\\STG12\\Models\\00170E40.sa1mdl", false); //Colored cube 3
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x180608C)->basicdxmodel->mats[8]);
		*(NJS_OBJECT*)0x1807444 = *LoadModel("system\\data\\STG12\\Models\\00171C2C.sa1mdl", false); //Colored cube 4
		AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x1807444)->basicdxmodel->mats[8]);
		*(NJS_OBJECT*)0x18136AC = *LoadModel("system\\data\\STG12\\Models\\0010A8AC.sa1mdl", false); //Bathroom door
		*(NJS_OBJECT*)0x185A974 = *LoadModel("system\\data\\STG12\\Models\\00148A44.sa1mdl", false); //OComputer
		*(NJS_OBJECT*)0x18608A4 = *LoadModel("system\\data\\STG12\\Models\\0014D13C.sa1mdl", false); //Broken wall (full)
		*(NJS_OBJECT*)0x1862834 = *LoadModel("system\\data\\STG12\\Models\\0014E514.sa1mdl", false); //Broken wall (broken)
		*(NJS_OBJECT*)0x185F280 = *LoadModel("system\\data\\STG12\\Models\\0014C23C.sa1mdl", false); //Broken wall (pieces)
		*(NJS_OBJECT*)0x1812D34 = *LoadModel("system\\data\\STG12\\Models\\00109F58.sa1mdl", false); //Egghead door 1
		((NJS_OBJECT*)0x184C22C)->basicdxmodel = LoadModel("system\\data\\STG12\\Models\\0013CDD4.sa1mdl", true)->basicdxmodel; //Egghead door 2 part 1 (has sibling)
		((NJS_OBJECT*)0x184C22C)->sibling = NULL;
		((NJS_OBJECT*)0x184C22C)->evalflags |= NJD_EVAL_BREAK;
		((NJS_OBJECT*)0x184BA64)->basicdxmodel = LoadModel("system\\data\\STG12\\Models\\0013C6AC.sa1mdl", true)->basicdxmodel; //Egghead door 2 part 2 (has sibling)
		((NJS_OBJECT*)0x184BA64)->sibling = NULL;
		((NJS_OBJECT*)0x184BA64)->evalflags |= NJD_EVAL_BREAK;
		*(NJS_OBJECT*)0x186FC1C = *LoadModel("system\\data\\STG12\\Models\\0015ACB0.sa1mdl", false); //OKaitenashiba
		*(NJS_OBJECT*)0x1853D7C = *LoadModel("system\\data\\STG12\\Models\\00142958.sa1mdl", false); //Daruma (unused lightning box)
		*(NJS_OBJECT*)0x181406C = *LoadModel("system\\data\\STG12\\Models\\0010AFB8.sa1mdl", false); //OUkijima
		//Fog/draw distance data
		for (int i = 0; i < 3; i++)
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
		ModelsLoaded_STG12 = true;
	}
}

void HotShelter_OnFrame()
{
	{
		//Fog in E105 room
		if (CurrentLevel == LevelIDs_HotShelter && CurrentAct == 2 && !IsGamePaused())
		{
			if (ReduceHotShelterFog)
			{
				if (CurrentFogDist < 6000) CurrentFogDist += 32.0f;
				if (CurrentFogLayer < 2000) CurrentFogLayer += 16.0f;
			}
		}
		//Reset if leaving the level
		if (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21)
		{
			ReduceHotShelterFog = false;
		}
	}
}