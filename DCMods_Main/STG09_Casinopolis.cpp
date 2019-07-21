#include "stdafx.h"
#include "Casino_UVs.h"

//TODO: Replace whole models instead of just the UVs in "UV fixes", Cowgirl dynamic collision

NJS_TEXNAME textures_casino1[131];
NJS_TEXLIST texlist_casino1 = { arrayptrandlength(textures_casino1) };

NJS_TEXNAME textures_casino2[58];
NJS_TEXLIST texlist_casino2 = { arrayptrandlength(textures_casino2) };

NJS_TEXNAME textures_casino3[26];
NJS_TEXLIST texlist_casino3 = { arrayptrandlength(textures_casino3) };

NJS_TEXNAME textures_casino4[71];
NJS_TEXLIST texlist_casino4 = { arrayptrandlength(textures_casino4) };

/*
#include "Casino1.h"
#include "Casino2.h"
#include "Casino3.h"
#include "Casino4.h"
*/

NJS_OBJECT* OSlX_Base = nullptr;
NJS_OBJECT* OLhtr_Bright = nullptr;
NJS_OBJECT* OLhtr_Dark = nullptr;
NJS_OBJECT* OLhtg_Bright = nullptr;
NJS_OBJECT* OLhtg_Dark = nullptr;
NJS_OBJECT* NeonK_Text = nullptr;
NJS_OBJECT* ODento_1 = nullptr;
NJS_OBJECT* ODento_2 = nullptr;
NJS_OBJECT* ODento_3 = nullptr;
NJS_OBJECT* TikeiAnim_WaterAroundShip = nullptr;
NJS_OBJECT* IdeyaCap1_1 = nullptr;
NJS_OBJECT* IdeyaCap1_2 = nullptr;
NJS_OBJECT* IdeyaCap1_3 = nullptr;
NJS_OBJECT* IdeyaCap2_1 = nullptr;
NJS_OBJECT* IdeyaCap2_2 = nullptr;
NJS_OBJECT* IdeyaCap2_3 = nullptr;
NJS_OBJECT* IdeyaCap3_1 = nullptr;
NJS_OBJECT* IdeyaCap3_2 = nullptr;
NJS_OBJECT* IdeyaCap3_3 = nullptr;
NJS_OBJECT* IdeyaCap4_1 = nullptr;
NJS_OBJECT* IdeyaCap4_2 = nullptr;
NJS_OBJECT* IdeyaCap4_3 = nullptr;

static float GearFrame = 0;
static float SonicWhiteBlendFactor = 0.0f;
static int LoopDelay = 0;
static int CowgirlDelay = 0;
static int RotationAngle1 = 0;
static int RotationAngle2 = 0;
static int SoundPlayed = 0;
static bool WhiteSonic = false;

FunctionPointer(void, sub_5DD900, (int a1, int a2), 0x5DD900);
FunctionPointer(void, sub_5DD920, (ObjectMaster *a1, int a2), 0x5DD920);
FunctionPointer(void, sub_5D04C0, (ObjectMaster *a1), 0x5D04C0);
FunctionPointer(Sint32, sub_5C09D0, (int a1), 0x5C09D0);
FunctionPointer(void, sub_405450, (NJS_ACTION *a1, float frame, float scale), 0x405450);
FunctionPointer(void, sub_407A00, (NJS_MODEL_SADX *model, float a2), 0x407A00);
FunctionPointer(void, sub_405370, (NJS_OBJECT *a1, NJS_MOTION *a2, float animframe, float scale), 0x405370);
FunctionPointer(void, sub_408300, (NJS_OBJECT *a1, NJS_MOTION *a2, float animframe, float scale), 0x408300);

NJS_VECTOR Cowgirl1 = { 457.6972f, 45.06788f, 390 };
NJS_VECTOR Cowgirl2 = { 340.3949f, 51.20071f, 480 };
DataArray(NJS_VECTOR, stru_1E79588, 0x1E79588, 66);
DataArray(NJS_SPRITE*, SonicJackpotSpritesX, 0x1E79570, 6);
DataArray(CollisionData, CollisionData_NeonK, 0x1E763B8, 3);
DataArray(FogData, Casino1Fog, 0x01C46990, 3);
DataArray(FogData, Casino2Fog, 0x01C469C0, 3);
DataArray(DrawDistance, DrawDist_Casino2, 0x01C46948, 3);
DataPointer(int, dword_1E77568, 0x1E77568);
DataPointer(int, InsideMachine, 0x3C7507C);
DataPointer(NJS_OBJECT*, unk_1E050FC, 0x1E050FC);
DataPointer(NJS_OBJECT*, unk_1E06274, 0x1E06274);
DataPointer(NJS_OBJECT*, unk_1E04CDC, 0x1E04CDC);
DataPointer(NJS_OBJECT*, unk_1E05954, 0x1E05954);
DataPointer(NJS_OBJECT*, unk_1E03AB8, 0x1E03AB8);

void RenderCasinoBackgroundWater(ObjectMaster* a1)
{
	if (CurrentAct == 0 && !MissedFrames)
	{
		DisableFog();
		njSetTexture(&texlist_casino1);
		njPushMatrix(0);
		njTranslate(0, 0, 0, 0);
		DrawQueueDepthBias = -47960.0f;
		ProcessModelNode(TikeiAnim_WaterAroundShip, QueuedModelFlagsB_SomeTextureThing, 1.0f);
		DrawQueueDepthBias = 0.0f;
		njPopMatrix(1u);
	}
}

static void OTikeiAnim_Load_r(ObjectMaster* a1);
static Trampoline OTikeiAnim_Load_t(0x5CB160, 0x5CB165, OTikeiAnim_Load_r);
static void __cdecl OTikeiAnim_Load_r(ObjectMaster* a1)
{
	EntityData1* v1; // edi
	v1 = a1->Data1;
	auto original = reinterpret_cast<decltype(OTikeiAnim_Load_r)*>(OTikeiAnim_Load_t.Target());
	original(a1);
	if (EnableCasinopolis) a1->DisplaySub = RenderCasinoBackgroundWater;

}

static void OTikeiAnim_Main_r(ObjectMaster* a1);
static Trampoline OTikeiAnim_Main_t(0x5CB0A0, 0x5CB0A6, OTikeiAnim_Main_r);
static void __cdecl OTikeiAnim_Main_r(ObjectMaster* a1)
{
	auto original = reinterpret_cast<decltype(OTikeiAnim_Main_r)*>(OTikeiAnim_Main_t.Target());
	original(a1);
	if (EnableCasinopolis && CurrentAct == 0)
	{
		RenderCasinoBackgroundWater(a1);
	}
}

void __cdecl Loop_DisplayF(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v2; // eax@2
	Angle v3; // eax@4
	Angle v4; // eax@6
	Angle v5; // edi@8
	double v6; // st7@9
	float v7; // [sp+8h] [bp+4h]@9
	v1 = a1->Data1;
	if (!MissedFrames)
	{
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
		njSetTexture((NJS_TEXLIST*)0x1D8B384 + 1);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.z;
		if (IsPlayerInsideSphere(&v1->Position, 10.0f))
		{
			if (LoopDelay <= 0)
			{
				PlaySound(239, 0, 0, 0);
				LoopDelay = 5;
			}
		}
		if (v2)
		{
			njRotateZ(0, (unsigned __int16)v2);
		}
		v3 = v1->Rotation.x;
		if (v3)
		{
			njRotateX(0, (unsigned __int16)v3);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		v5 = 0;
		do
		{
			v7 = njSin(v5) * *(float *)&v1->CharIndex;
			v6 = njCos(v5) * *(float *)&v1->CharIndex;
			((NJS_SPRITE*)0x3C75098)->p.x = v7;
			((NJS_SPRITE*)0x3C75098)->p.z = 0;
			((NJS_SPRITE*)0x3C75098)->p.y = v6;
			njDrawSprite3D((NJS_SPRITE*)0x3C75098, v1->Action, NJD_SPRITE_ALPHA | NJD_SPRITE_SCALE);
			v5 += 4096;
		} while (v5 < 0x10000);
		njPopMatrix(1u);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
	}
}

void __cdecl Cowgirl_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	int cowgirlthing;
	char v2; // al@3
	Angle v3; // eax@5
	NJS_OBJECT *v4; // edi@7
	NJS_OBJECT *v5; // edi@7
	Sint16 v6; // ax@7
	NJS_OBJECT *v7; // edi@9
	Sint16 v8; // ax@9
	NJS_VECTOR distance_vector;
	v1 = a1->Data1;
	if (!ClipObject(a1, 640010.0) && IsVisible(&v1->Position, 280.0))
	{
		njSetTexture(&OBJ_CASINO9_TEXLIST);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		njRotateXYZ(0, v1->Rotation.x, v1->Rotation.y, v1->Rotation.z);
		DrawQueueDepthBias = 4000.0f;
		njAction_ReallyHard((NJS_ACTION*)0x1E5C414, *(float*)&a1->Data1->CharIndex);
		DrawQueueDepthBias = 0;
		njPopMatrix(1u);
	}
}

void Cowgirl_Main(ObjectMaster* a1)
{
	EntityData1 *v1 = a1->Data1;
	float CowgirlFrame = *(float*)&v1->CharIndex + 0.1f;
	if (CowgirlFrame > 29) CowgirlFrame = 0;
	*(float*)&a1->Data1->CharIndex = CowgirlFrame;
	Cowgirl_Display(a1);
	AddToCollisionList(v1);
	//Cowgirl action
	if (CowgirlDelay < 100) CowgirlDelay++;
	if (CowgirlDelay >= 100 && EntityData1Ptrs[0] != nullptr && EntityData1Ptrs[0]->Status & Status_Attack)
	{
		if (IsPlayerInsideSphere(&Cowgirl1, 180.0f) || IsPlayerInsideSphere(&Cowgirl2, 180.0f))
		{
			PlaySound(278, 0, 0, 0);
			CowgirlDelay = 0;
		}
	}
}

void Cowgirl_Delete(ObjectMaster *a1)
{
	CheckThingButThenDeleteObject(a1);
}

void Cowgirl_Load(ObjectMaster* a1)
{
	//Hardcoded position and rotation to match SA1 JP
	a1->Data1->Position = { 311.62f, 0.0f, 338.93f };
	a1->Data1->Rotation = { 0, 0x1E00, 0 };
	Collision_Init(a1, CollisionData_NeonK, 3, 4u);
	a1->DisplaySub = (void(__cdecl*)(ObjectMaster*))Cowgirl_Display;
	a1->MainSub = (void(__cdecl*)(ObjectMaster*))Cowgirl_Main;
	a1->DeleteSub = (void(__cdecl*)(ObjectMaster*))Cowgirl_Delete;
}

void __cdecl sub_5D0560(ObjectMaster *obj)
{
	EntityData1 *v1; // esi@1
	Angle v2; // eax@3
	Angle v7;
	Sint16 v3; // ax@5
	char *v4; // eax@12
	double v5; // st7@14
	Sint16 v6; // di@15
	v1 = obj->Data1;
	if (v1->Scale.x == 1.0f) v7 = RotationAngle1; else v7 = RotationAngle2;
	v1->Rotation.z = v7;
	if (!ClipObject(obj, 62510.0))
	{
		if (!MissedFrames)
		{
			sub_5C09D0(12);
			njPushMatrix(0);
			njTranslateV(0, &v1->Position);
			v2 = v1->Rotation.y;
			if (v2)
			{
				njRotateY(0, (unsigned __int16)v2);
			}
			v7 = v1->Rotation.z;
			if (v7)
			{
				njRotateZ(0, (unsigned __int16)v7);
			}
			DrawModel((NJS_MODEL_SADX *)v1->Object);
			njPopMatrix(1u);
		}
		if (ObjectSelectedDebug(obj))
		{
			v4 = "RotDir:Migi";
			if (!((unsigned __int64)v1->Scale.x & 1))
			{
				v4 = "RotDir:Hidari";
			}
			DisplayDebugString(1179667, v4);
			DisplayDebugString(1179668, "RotSpd:");
			v5 = fabs(v1->Scale.y);
			PrintDebugNumber(1703956, (unsigned __int64)v5, 4);
		}
		else
		{
			AddToCollisionList(v1);
			v6 = dword_1E77568;
			fabs(v1->Scale.y);
			++v1->InvulnerableTime;
			((short *)&v1->CharIndex)[0] = v6;
		}
	}
}

void __cdecl sub_5D0560_KazB(ObjectMaster *obj)
{
	EntityData1 *v1; // esi@1
	Angle v2; // eax@3
	Angle v7;
	Sint16 v3; // ax@5
	char *v4; // eax@12
	double v5; // st7@14
	Sint16 v6; // di@15
	v1 = obj->Data1;
	if (v1->Scale.x == 0.0f) v7 = RotationAngle1; else v7 = RotationAngle2;
	v1->Rotation.z = v7;
	if (!ClipObject(obj, 62510.0))
	{
		if (!MissedFrames)
		{
			sub_5C09D0(12);
			njPushMatrix(0);
			njTranslateV(0, &v1->Position);
			v2 = v1->Rotation.y;
			if (v2)
			{
				njRotateY(0, (unsigned __int16)v2);
			}
			v7 = v1->Rotation.z;
			if (v7)
			{
				njRotateZ(0, (unsigned __int16)v7);
			}
			DrawModel((NJS_MODEL_SADX *)v1->Object);
			njPopMatrix(1u);
		}
		if (ObjectSelectedDebug(obj))
		{
			v4 = "RotDir:Migi";
			if (!((unsigned __int64)v1->Scale.x & 1))
			{
				v4 = "RotDir:Hidari";
			}
			DisplayDebugString(1179667, v4);
			DisplayDebugString(1179668, "RotSpd:");
			v5 = fabs(v1->Scale.y);
			PrintDebugNumber(1703956, (unsigned __int64)v5, 4);
		}
		else
		{
			AddToCollisionList(v1);
			v6 = dword_1E77568;
			fabs(v1->Scale.y);
			++v1->InvulnerableTime;
			((short *)&v1->CharIndex)[0] = v6;
		}
	}
}

void __cdecl OKazeX(ObjectMaster *a1)
{
	EntityData1 *v4; // esi@1
	signed int result; // eax@1
	v4 = a1->Data1;
	result = ClipObject(a1, 62510.0);
	if (!result)
	{
		if (!ObjectSelectedDebug(a1))
		{
			Collision_Init(a1, (CollisionData*)0x1E77604, 1, 4u);
		}
		a1->DisplaySub = sub_5D04C0;
		a1->MainSub = sub_5D0560;
		v4->Object = unk_1E05954;
		v4->NextAction = 0;
		v4->CharIndex = 0;
		v4->InvulnerableTime = 0;
	}
}

void __cdecl OKazcX(ObjectMaster *a1)
{
	EntityData1 *v4; // esi@1
	signed int result; // eax@1
	v4 = a1->Data1;
	result = ClipObject(a1, 62510.0);
	if (!result)
	{
		if (!ObjectSelectedDebug(a1))
		{
			Collision_Init(a1, (CollisionData*)0x1E775A4, 1, 4u);
		}
		a1->DisplaySub = sub_5D04C0;
		a1->MainSub = sub_5D0560;
		v4->Object = unk_1E04CDC;
		v4->NextAction = 0;
		v4->CharIndex = 0;
		v4->InvulnerableTime = 0;
	}
}

void __cdecl OKazdX(ObjectMaster *a1)
{
	EntityData1 *v4; // esi@1
	signed int result; // eax@1
	v4 = a1->Data1;
	result = ClipObject(a1, 62510.0);
	if (!result)
	{
		if (!ObjectSelectedDebug(a1))
		{
			Collision_Init(a1, (CollisionData*)0x1E775D4, 1, 4u);
		}
		a1->DisplaySub = sub_5D04C0;
		a1->MainSub = sub_5D0560;
		v4->Object = unk_1E050FC;
		v4->NextAction = 0;
		v4->CharIndex = 0;
		v4->InvulnerableTime = 0;
	}
}

void __cdecl OKazbX(ObjectMaster *a1)
{
	EntityData1 *v4; // esi@1
	signed int result; // eax@1

	v4 = a1->Data1;
	result = ClipObject(a1, 62510.0);
	if (!result)
	{
		if (!ObjectSelectedDebug(a1))
		{
			Collision_Init(a1, (CollisionData*)0x1E77574, 1, 4u);
		}
		a1->DisplaySub = sub_5D04C0;
		a1->MainSub = sub_5D0560_KazB;
		v4->Object = unk_1E03AB8;
		v4->NextAction = 0;
		v4->CharIndex = 0;
		v4->InvulnerableTime = 0;
	}
}

void __cdecl OKazfX(ObjectMaster *a1)
{
	EntityData1 *v4; // esi@1
	signed int result; // eax@1
	v4 = a1->Data1;
	result = ClipObject(a1, 62510.0);
	if (!result)
	{
		if (!ObjectSelectedDebug(a1))
		{
			Collision_Init(a1, (CollisionData*)0x1E77638, 1, 4u);
		}
		a1->DisplaySub = sub_5D04C0;
		a1->MainSub = sub_5D0560;
		v4->Object = unk_1E06274;
		v4->NextAction = 0;
		v4->CharIndex = 0;
		v4->InvulnerableTime = 0;
	}
}

void FixedGear1()
{
	njAction((NJS_ACTION*)0x1E06634, GearFrame);
}

void __cdecl TutuA_Display(ObjectMaster *a2) //OTutuA
{
	EntityData1 *v1; // esi@1
	unsigned __int16 v2; // ax@3
	v1 = a2->Data1;
	__int16 v3; // ax
	if (!ClipObject((ObjectMaster *)a2, 62510.0) && !MissedFrames)
	{
		sub_5C09D0(12);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = ((unsigned short *)&v1->LoopData)[0];
		if (v2)
		{
			njRotateY(0, v2);
		}
		sub_407A00((NJS_MODEL_SADX*)0x1DF2570, 1.0f);
		v3 = ((unsigned short *)&v1->LoopData)[0];
		if (v1->Rotation.y != v3)
		{
			njRotateY(0, (unsigned __int16)(v1->Rotation.y - v3));
		}
		ProcessModelNode_AB_Wrapper((NJS_OBJECT*)0x1DF230C, 1.0f);
		njPopMatrix(1u);
	}
}

void __cdecl TutuB_Display(ObjectMaster *a2) //TutuB
{
	EntityData1 *v1; // esi@1
	unsigned __int16 v2; // ax@3
	__int16 v3; // ax
	v1 = a2->Data1;
	if (!ClipObject((ObjectMaster *)a2, 62510.0) && !MissedFrames)
	{
		sub_5C09D0(12);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = ((unsigned short *)&v1->LoopData)[0];
		if (v2)
		{
			njRotateY(0, v2);
		}
		sub_407A00((NJS_MODEL_SADX*)0x1DF2B60, 1.0f);
		v3 = ((unsigned short *)&v1->LoopData)[0];
		if (v1->Rotation.y != v3)
		{
			njRotateY(0, (unsigned __int16)(v1->Rotation.y - v3));
		}
		ProcessModelNode_AB_Wrapper((NJS_OBJECT*)0x1DF2908, 1.0f);
		njPopMatrix(1u);
	}
}

void __cdecl TutuC_Display(ObjectMaster *a2) //TutuC
{
	EntityData1 *v1; // esi@1
	unsigned __int16 v2; // ax@3
	__int16 v3; // ax
	v1 = a2->Data1;
	if (!ClipObject((ObjectMaster *)a2, 62510.0) && !MissedFrames)
	{
		sub_5C09D0(12);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = ((unsigned short *)&v1->LoopData)[0];
		if (v2)
		{
			njRotateY(0, v2);
		}
		sub_407A00((NJS_MODEL_SADX*)0x1DF3160, 1.0f);
		v3 = ((unsigned short *)&v1->LoopData)[0];
		if (v1->Rotation.y != v3)
		{
			njRotateY(0, (unsigned __int16)(v1->Rotation.y - v3));
		}
		ProcessModelNode_AB_Wrapper((NJS_OBJECT*)0x1DF2EF8, 1.0f);
		njPopMatrix(1u);
	}
}

void __cdecl FixedGear2(int a2)
{
	EntityData1 *v1; // esi@1
	Angle v2; // eax@3
	Angle v3;
	int GearRotationDirection;
	v1 = *(EntityData1 **)(a2 + 32);
	if (v1->Scale.x == 0) GearRotationDirection = -1; else GearRotationDirection = 1;
	if (GearRotationDirection == 1) v2 = RotationAngle1; else v2 = RotationAngle2;
	if (!MissedFrames && !ClipObject((ObjectMaster *)a2, 62510.0))
	{
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		njRotateY(0, v2);
		sub_5C09D0(12);
		ProcessModelNode_AB_Wrapper((NJS_OBJECT*)0x1DF198C, 1.0);
		v3 = v1->Rotation.y;
		v1->Rotation.y = (v3 + GearRotationDirection*-128) % 65535;
		njPopMatrix(1u);
	}
}

void __cdecl OLhtr_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	int v2; // eax@3
	int v3; // eax@5
	int v4; // eax@7
	int v5;
	v1 = a1->Data1;
	if (!ClipObject(a1, 360010.0) && IsVisible(&v1->Position, 30.0f))
	{
		sub_5DD900(12 * (v1->Action == 0) + 31940064, 1);
		sub_5C09D0(12);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.z;
		if (v2)
		{
			njRotateZ(0, (unsigned __int16)v2);
		}
		v3 = v1->Rotation.x;
		if (v3)
		{
			njRotateX(0, (unsigned __int16)v3);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		ProcessModelNode_AB_Wrapper((NJS_OBJECT*)0x01E5E7BC, 1.0f);
		if (v1->Action == 0) ProcessModelNode_A_Wrapper(OLhtr_Dark, QueuedModelFlagsB_SomeTextureThing, 1.0f);
		else ProcessModelNode_A_Wrapper(OLhtr_Bright, QueuedModelFlagsB_SomeTextureThing, 1.0f);
		njPopMatrix(1u);
		sub_5DD920((ObjectMaster*)0x1E75DE0, 2);
	}
}

void __cdecl OLhtg_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	int v2; // eax@3
	int v3; // eax@5
	int v4; // eax@7
	int v5;
	v1 = a1->Data1;
	if (!ClipObject(a1, 360010.0) && IsVisible(&v1->Position, 105.0f))
	{
		sub_5DD900(12 * (v1->Action == 0) + 31940040, 1);
		sub_5C09D0(12);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.z;
		if (v2)
		{
			njRotateZ(0, (unsigned __int16)v2);
		}
		v3 = v1->Rotation.x;
		if (v3)
		{
			njRotateX(0, (unsigned __int16)v3);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		ProcessModelNode_AB_Wrapper((NJS_OBJECT*)0x1E5EC4C, 1.0f);
		if (v1->Action == 1) ProcessModelNode_A_Wrapper(OLhtg_Bright, QueuedModelFlagsB_SomeTextureThing, 1.0f);
		else ProcessModelNode_A_Wrapper(OLhtg_Dark, QueuedModelFlagsB_SomeTextureThing, 1.0f);
		njPopMatrix(1u);
		sub_5DD920((ObjectMaster*)0x1E75DC8, 2);
	}
}

void OSlxDisplayNew(NJS_ACTION *a1, float a2, int a3, int a4)
{
	NJS_ACTION OSlX_BaseAction;
	OSlX_BaseAction.motion = a1->motion;
	OSlX_BaseAction.object = OSlX_Base;
	//Render main animation
	sub_405450(&OSlX_BaseAction, a2, a4);
	//Render light
	DrawQueueDepthBias = 8000.0f;
	njAction_Queue_407FC0(a1, a2, (QueuedModelFlagsB)0);
	DrawQueueDepthBias = 0;
}

void RenderLightA(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	DrawQueueDepthBias = 8000.0f;
	ProcessModelNode(a1, (QueuedModelFlagsB)4, a3);
	DrawQueueDepthBias = 0;
}

void RenderOKBSText(NJS_OBJECT *obj, float scale)
{
	DrawModel(obj->basicdxmodel);
	DrawQueueDepthBias = 1000.0f;
	ProcessModelNode(obj->child, QueuedModelFlagsB_SomeTextureThing, 1.0f);
	DrawQueueDepthBias = 0;
}

void RenderOKBCText(NJS_ACTION *a1, float frame, float scale)
{
	DrawQueueDepthBias = 1000.0f;
	njAction_Queue_407FC0(a1, frame, scale);
	DrawQueueDepthBias = 2000.0f;
	ProcessModelNode_D(a1->object->child->sibling->sibling->sibling->sibling, QueuedModelFlagsB_SomeTextureThing, 1.0f);
	DrawQueueDepthBias = 0;
}

void RenderNeonK(NJS_MODEL_SADX *model, float scale)
{
	sub_407A00(model, scale);
	DrawQueueDepthBias = 1000.0f;
	DrawModel_Queue(NeonK_Text->child->basicdxmodel, (QueuedModelFlagsB)0);
	DrawQueueDepthBias = 1500.0f;
	DrawModel_Queue(NeonK_Text->basicdxmodel, (QueuedModelFlagsB)0);
	DrawQueueDepthBias = 0;
}

void JackPotFix1(NJS_MODEL_SADX *a1)
{
	DrawQueueDepthBias = 10000.0f;
	DrawModel_Queue(a1, QueuedModelFlagsB_SomeTextureThing);
	DrawQueueDepthBias = 0;
}

void JackPotFix2(NJS_MODEL_SADX *a1)
{
	DrawQueueDepthBias = 20000.0f;
	DrawModel_Queue(a1, QueuedModelFlagsB_SomeTextureThing);
	DrawQueueDepthBias = 0;
}

void __cdecl PinballJackpot_Sprite_MainX(ObjectMaster *a1)
{
	EntityData1 *v1; // esi
	__int16 v2; // ax
	char v3; // edi
	char v4 = 0; // al
	v1 = a1->Data1;
	if ((FramerateSetting == 1 && FrameCounter % 2 == 0) || FramerateSetting >= 2)
	{
		v2 = v1->InvulnerableTime;
		if (v2)
		{
			v1->InvulnerableTime = v2 - 1;
		}
		else
		{
			v3 = a1->Parent->Data1->Action;
			njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
			njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
			SonicJackpotSpritesX[v3]->p.x = (stru_1E79588[11 * v3 + v1->Action].x * 2.8f + 320.0f) * HorizontalStretch;
			SonicJackpotSpritesX[v3]->p.y = (240.0f - stru_1E79588[11 * v3 + v1->Action].y * 2.8f) * VerticalStretch;
			SonicJackpotSpritesX[v3]->sy = (stru_1E79588[11 * v3 + v1->Action].z)*VerticalStretch;
			SonicJackpotSpritesX[v3]->sx = SonicJackpotSpritesX[v3]->sy;
			DrawQueueDepthBias = 10000.0f;
			njDrawSprite2D_Queue(SonicJackpotSpritesX[v3], (unsigned __int8)v1->Index, 22047.0f, NJD_SPRITE_ALPHA, QueuedModelFlagsB_AlwaysShow);
			njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
			njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
			DrawQueueDepthBias = 0;
			v4 = v1->Index + 1;
			v1->Index = v4;
			if (v4 == 8)
			{
				CheckThingButThenDeleteObject(a1);
			}
			if (v1->Index == 3)
			{
				++a1->Parent->Data1->NextAction;
			}
		}
	}
	else
	{
		v2 = v1->InvulnerableTime;
		if (!v2)
		{
			v3 = a1->Parent->Data1->Action;
			njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
			njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
			SonicJackpotSpritesX[v3]->p.x = (stru_1E79588[11 * v3 + v1->Action].x * 2.8f + 320.0f) * HorizontalStretch;
			SonicJackpotSpritesX[v3]->p.y = (240.0f - stru_1E79588[11 * v3 + v1->Action].y * 2.8f) * VerticalStretch;
			SonicJackpotSpritesX[v3]->sy = (stru_1E79588[11 * v3 + v1->Action].z)*VerticalStretch;
			SonicJackpotSpritesX[v3]->sx = SonicJackpotSpritesX[v3]->sy;
			DrawQueueDepthBias = 10000.0f;
			njDrawSprite2D_Queue(SonicJackpotSpritesX[v3], (unsigned __int8)v1->Index, 22047.0f, NJD_SPRITE_ALPHA, QueuedModelFlagsB_AlwaysShow);
			njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
			njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
			DrawQueueDepthBias = 0;
		}
	}
}

void UnloadLevelFiles_STG09()
{
	delete STG09_0_Info;
	delete STG09_1_Info;
	delete STG09_2_Info;
	delete STG09_3_Info;
	STG09_0_Info = nullptr;
	STG09_1_Info = nullptr;
	STG09_2_Info = nullptr;
	STG09_3_Info = nullptr;
}

void ParseCasMaterials(LandTable* landtable, int act)
{
	Uint32 materialflags;
	NJS_MATERIAL* material;
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			material = (NJS_MATERIAL*)& landtable->Col[j].Model->basicdxmodel->mats[k];
			if (act == 0 && (material->attr_texId >= 67 && material->attr_texId <= 80))
			{
				AddTextureAnimation(9, 0, material, true, 3, 75, 68, 69, 70, 71, 72, 73, 74, 67, 76, 77, 78, 79, 80, -1, -1);
			}
			if (act == 1 && (material->attr_texId == 7 || (material->attr_texId >= 9 && material->attr_texId <= 21)))
			{
				AddTextureAnimation(9, 1, material, true, 3, 7, 10, 11, 12, 13, 14, 9, 15, 16, 17, 18, 19, 20, 21, -1, -1);
			}
		}
	}
}

void LoadLevelFiles_STG09()
{
	NJS_MATERIAL* material;
	CheckAndUnloadLevelFiles();
	STG09_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG09\\0.sa1lvl"));
	STG09_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG09\\1.sa1lvl"));
	STG09_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG09\\2.sa1lvl"));
	STG09_3_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG09\\3.sa1lvl"));
	LandTable* STG09_0 = STG09_0_Info->getlandtable(); //&landtable_00025EAC;
	LandTable* STG09_1 = STG09_1_Info->getlandtable(); //&landtable_0006C0B4;
	LandTable* STG09_2 = STG09_2_Info->getlandtable(); //&landtable_000AF120;
	LandTable* STG09_3 = STG09_3_Info->getlandtable(); //&landtable_000D8440;
	RemoveMaterialColors_Landtable(STG09_0);
	RemoveMaterialColors_Landtable(STG09_1);
	RemoveMaterialColors_Landtable(STG09_2);
	RemoveMaterialColors_Landtable(STG09_3);
	STG09_0->TexList = &texlist_casino1;
	STG09_1->TexList = &texlist_casino2;
	STG09_2->TexList = &texlist_casino3;
	STG09_3->TexList = &texlist_casino4;
	WriteData((LandTable**)0x97DB28, STG09_0);
	WriteData((LandTable**)0x97DB2C, STG09_1);
	WriteData((LandTable**)0x97DB30, STG09_2);
	WriteData((LandTable**)0x97DB34, STG09_3);
	ParseCasMaterials(STG09_0, 0);
	ParseCasMaterials(STG09_1, 1);
}

void IdeyaCapFix(NJS_OBJECT *a1, NJS_MOTION *a2, float animframe, float scale)
{
	NJS_OBJECT* Object1 = IdeyaCap1_1;
	NJS_OBJECT* Object2 = IdeyaCap1_2;
	NJS_OBJECT* Object3 = IdeyaCap1_3;
	if (a1 == (NJS_OBJECT*)0x1DC2B74)
	{
		Object1 = IdeyaCap1_1;
		Object2 = IdeyaCap1_2;
		Object3 = IdeyaCap1_3;
	}
	else if (a1 == (NJS_OBJECT*)0x1DC4644)
	{
		Object1 = IdeyaCap2_1;
		Object2 = IdeyaCap2_2;
		Object3 = IdeyaCap2_3;
	}
	else if (a1 == (NJS_OBJECT*)0x1DC6114)
	{
		Object1 = IdeyaCap3_1;
		Object2 = IdeyaCap3_2;
		Object3 = IdeyaCap3_3;
	}
	else if (a1 == (NJS_OBJECT*)0x1DC7BE4)
	{
		Object1 = IdeyaCap4_1;
		Object2 = IdeyaCap4_2;
		Object3 = IdeyaCap4_3;
	}
	//Process non-transparent parts
	sub_405370(Object1, a2, animframe, scale);
	DrawQueueDepthBias = 2000.0f;
	//Process transparent parts
	sub_408300(Object2, a2, animframe, scale);
	sub_408300(Object3, a2, animframe, scale);
	DrawQueueDepthBias = 0.0f;
}

void TDenkiFix(NJS_OBJECT* a1, QueuedModelFlagsB a2, float a3)
{
	ProcessModelNode_A_Wrapper(a1, (QueuedModelFlagsB)0, 1.0f);
}

void MizuAFix(void(__cdecl* function)(ObjectMaster*), ObjectMaster* data, float depth, QueuedModelFlagsB queueflags)
{
	//float finaldepth = depth;
	//PrintDebug("Depth: %f\n", finaldepth);
	DrawModelCallback_QueueObjectMaster(function, data, 2000.0f, QueuedModelFlagsB_EnableZWrite);
}

void TDenkiFix2(void(__cdecl* function)(ObjectMaster*), ObjectMaster* data, float depth, QueuedModelFlagsB queueflags)
{
	//float finaldepth = depth;
	//PrintDebug("Depth: %f\n", finaldepth);
	DrawModelCallback_QueueObjectMaster(function, data, 4000.0f, (QueuedModelFlagsB)0);
}

void ODentoFix(NJS_OBJECT* obj, float scale)
{
	if (obj == (NJS_OBJECT*)0x1E5E1E0)
	{
		ProcessModelNode_AB_Wrapper(ODento_1, scale);
		DrawQueueDepthBias = 4000.0f;
		ProcessModelNode_A_Wrapper(ODento_2, QueuedModelFlagsB_EnableZWrite, scale);
		DrawQueueDepthBias = 6000.0f;
		ProcessModelNode_A_Wrapper(ODento_3, QueuedModelFlagsB_SomeTextureThing, scale);
		DrawQueueDepthBias = 0.0f;
	}
	else ProcessModelNode_AB_Wrapper(obj, scale);
}

void SetUpIdeyaCapModels(NJS_OBJECT* Object1, NJS_OBJECT* Object2, NJS_OBJECT* Object3)
{
	//Hide transparent meshes in the first object
	Object1->evalflags |= NJD_EVAL_HIDE; //Root node (transparent base)
	Object1->child->sibling->evalflags |= NJD_EVAL_HIDE; //Transparent sphere
	//Hide everything but the first transparent mesh (root node) in the second object
	Object2->child->evalflags |= NJD_EVAL_HIDE; //Non-transparent base
	Object2->child->sibling->evalflags |= NJD_EVAL_HIDE; //Transparent sphere
	Object2->child->child->evalflags |= NJD_EVAL_HIDE; //Horns
	Object2->child->child->sibling->evalflags |= NJD_EVAL_HIDE; //Horns
	Object2->child->child->sibling->sibling->evalflags |= NJD_EVAL_HIDE; //Horns
	Object2->child->sibling->sibling->evalflags |= NJD_EVAL_HIDE; //Wings
	Object2->child->sibling->sibling->sibling->evalflags |= NJD_EVAL_HIDE; //Wings
	Object2->child->sibling->sibling->sibling->sibling->evalflags |= NJD_EVAL_HIDE; //Wings
	//Hide everything but the second transparent mesh (sphere) in the third object
	Object3->evalflags |= NJD_EVAL_HIDE; //Root node(transparent base)
	Object3->child->evalflags |= NJD_EVAL_HIDE; //Non-transparent base
	Object3->child->child->evalflags |= NJD_EVAL_HIDE; //Horns
	Object3->child->child->sibling->evalflags |= NJD_EVAL_HIDE; //Horns
	Object3->child->child->sibling->sibling->evalflags |= NJD_EVAL_HIDE; //Horns
	Object3->child->sibling->sibling->evalflags |= NJD_EVAL_HIDE; //Wings
	Object3->child->sibling->sibling->sibling->evalflags |= NJD_EVAL_HIDE; //Wings
	Object3->child->sibling->sibling->sibling->sibling->evalflags |= NJD_EVAL_HIDE; //Wings
}

void Casinopolis_Init()
{
	ReplaceBIN_DC("CAM0900K");
	ReplaceBIN_DC("CAM0900S");
	ReplaceBIN_DC("CAM0901M");
	ReplaceBIN_DC("CAM0901S");
	ReplaceBIN_DC("CAM0902S");
	ReplaceBIN_DC("CAM0903S");
	if (!Use1999SetFiles)
	{
		ReplaceBIN_DC("SET0900K");
		ReplaceBIN_DC("SET0900S");
		ReplaceBIN_DC("SET0901M");
		ReplaceBIN_DC("SET0901S");
		ReplaceBIN_DC("SET0902S");
		ReplaceBIN_DC("SET0903S");
	}
	else
	{
		ReplaceBIN_1999("SET0900K");
		ReplaceBIN_1999("SET0900S");
		ReplaceBIN_1999("SET0901M");
		ReplaceBIN_1999("SET0901S");
		ReplaceBIN_1999("SET0902S");
		ReplaceBIN_1999("SET0903S");
	}
	ReplaceBIN_DC("SETMI0900K"); //I forgot what this is for
	ReplacePVM("CASINO01");
	ReplacePVM("CASINO02");
	ReplacePVM("CASINO03");
	ReplacePVM("CASINO04");
	ReplacePVM("OBJ_CASINO2");
	ReplacePVM("OBJ_CASINO8");
	ReplacePVM("OBJ_CASINO9");
	ReplacePVM("OBJ_CASINO_E");
	ReplaceBIN("PL_90B", "PL_90X");
	ResizeTextureList((NJS_TEXLIST*)0x1D1B050, textures_casino1);
	ResizeTextureList((NJS_TEXLIST*)0x1CBD1C4, textures_casino2);
	ResizeTextureList((NJS_TEXLIST*)0x1C8AF04, textures_casino3);
	ResizeTextureList((NJS_TEXLIST*)0x1C47004, textures_casino4);
	ResizeTextureList(&OBJ_CASINO9_TEXLIST, 203);
	//Code fixes
	TikeiAnim_WaterAroundShip = LoadModel("system\\data\\STG09\\Models\\00066F28.sa1mdl", false);
	AddTextureAnimation_Permanent(9, 0, &TikeiAnim_WaterAroundShip->basicdxmodel->mats[0], true, 3, 75, 68, 69, 70, 71, 72, 73, 74, 67, 76, 77, 78, 79, 80, -1, -1);
	WriteData((NJS_OBJECT **)0x005CB1B7, TikeiAnim_WaterAroundShip);
	//OKBS
	WriteCall((void*)0x5CE84B, RenderOKBSText);
	AddAlphaRejectMaterial(&((NJS_OBJECT*)0x1E40344)->child->basicdxmodel->mats[0]);
	AddAlphaRejectMaterial(&((NJS_OBJECT*)0x1E40344)->child->basicdxmodel->mats[1]);
	//OKBC
	WriteCall((void*)0x5CEA2A, RenderOKBCText);
	AddAlphaRejectMaterial(&((NJS_OBJECT*)0x1E3EE0C)->child->sibling->sibling->sibling->sibling->basicdxmodel->mats[0]);
	AddAlphaRejectMaterial(&((NJS_OBJECT*)0x1E3EE0C)->child->sibling->sibling->sibling->sibling->basicdxmodel->mats[1]);
	//TDenki
	WriteCall((void*)0x5DF170, TDenkiFix2);
	WriteCall((void*)0x5DF08A, TDenkiFix); //TDenki blending
	WriteData<5>((void*)0x5DF073, 0x90u); //Disable ZFunc set in TDenki
	WriteData<5>((void*)0x5DF092, 0x90u); //Disable ZFunc set in TDeinki
	WriteCall((void*)0x5DE7A0, MizuAFix); //To make TDenki fix work
	WriteData<1>((char*)0x8135F2, 0x0i8); //Reala thing UV fix
	//Ideya cap fixes
	WriteCall((void*)0x5D79A9, IdeyaCapFix);
	IdeyaCap1_1 = LoadModel("system\\data\\STG09\\Models\\00144F38.sa1mdl", false);
	IdeyaCap1_2 = LoadModel("system\\data\\STG09\\Models\\00144F38.sa1mdl", false);
	IdeyaCap1_3 = LoadModel("system\\data\\STG09\\Models\\00144F38.sa1mdl", false);
	SetUpIdeyaCapModels(IdeyaCap1_1, IdeyaCap1_2, IdeyaCap1_3);
	IdeyaCap2_1 = LoadModel("system\\data\\STG09\\Models\\00146978.sa1mdl", false);
	IdeyaCap2_2 = LoadModel("system\\data\\STG09\\Models\\00146978.sa1mdl", false);
	IdeyaCap2_3 = LoadModel("system\\data\\STG09\\Models\\00146978.sa1mdl", false);
	SetUpIdeyaCapModels(IdeyaCap2_1, IdeyaCap2_2, IdeyaCap2_3);
	IdeyaCap3_1 = LoadModel("system\\data\\STG09\\Models\\001483B8.sa1mdl", false);
	IdeyaCap3_2 = LoadModel("system\\data\\STG09\\Models\\001483B8.sa1mdl", false);
	IdeyaCap3_3 = LoadModel("system\\data\\STG09\\Models\\001483B8.sa1mdl", false);
	SetUpIdeyaCapModels(IdeyaCap3_1, IdeyaCap3_2, IdeyaCap3_3);
	IdeyaCap4_1 = LoadModel("system\\data\\STG09\\Models\\00149DF8.sa1mdl", false);
	IdeyaCap4_2 = LoadModel("system\\data\\STG09\\Models\\00149DF8.sa1mdl", false);
	IdeyaCap4_3 = LoadModel("system\\data\\STG09\\Models\\00149DF8.sa1mdl", false);
	SetUpIdeyaCapModels(IdeyaCap4_1, IdeyaCap4_2, IdeyaCap4_3);
	//Jackpot sprite fixes
	WriteCall((void*)0x05E1144, JackPotFix1);
	WriteCall((void*)0x05E1187, JackPotFix2);
	WriteJump(PinballJackpot_Sprite_Main, PinballJackpot_Sprite_MainX);
	//Act 2 lights
	WriteJump((void*)0x5C9980, OLhtg_Display);
	WriteJump((void*)0x5C9BA0, OLhtr_Display);
	//OLightA stuff
	*(NJS_OBJECT*)0x01E5E39C = *LoadModel("system\\data\\STG09\\Models\\001DAA78.sa1mdl", false);
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x01E5E39C)->basicdxmodel->mats[1]);
	WriteCall((void*)0x5DDBE4, RenderLightA); //OLightA
	WriteCall((void*)0x5CE630, OSlxDisplayNew); //OSlX lights
	WriteJump((void*)0x5D5E50, Loop_DisplayF); //Add sound to rings
	//Fixed gears
	WriteCall((void*)0x5D09C7, FixedGear1);
	WriteJump((void*)0x5D3A90, FixedGear2); //Gears main
	WriteJump((void*)0x5D0C60, OKazeX);
	WriteJump((void*)0x5D0C20, OKazcX);
	WriteJump((void*)0x5D0C40, OKazdX);
	WriteJump((void*)0x5D0C00, OKazbX);
	WriteJump((void*)0x5D0C80, OKazfX);
	WriteJump((void*)0x5D43F0, TutuA_Display); //OTutuA display
	WriteJump((void*)0x5D44A0, TutuB_Display); //OTutuB display
	WriteJump((void*)0x5D4550, TutuC_Display); //OTutuC display
	WriteData((int*)0x1E77E58, 128); //Gear rotation speed
	if (CowgirlOn)
	{
		*(NJS_OBJECT*)0x1E5B870 = *LoadModel("system\\data\\STG09\\Models\\001D7FE0.sa1mdl", false);
		AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E5B870)->basicdxmodel->meshsets[1].vertuv, 92, 16, 100, 0);
		AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E5B870)->basicdxmodel->meshsets[7].vertuv, 130, 16, 100, 0);
		AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E5B870)->basicdxmodel->meshsets[8].vertuv, 32, 16, 100, 0);
		AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E5B870)->basicdxmodel->meshsets[9].vertuv, 92, 16, 100, 0);
		AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E5B870)->child->basicdxmodel->meshsets[0].vertuv, 24, 16, 100, 0);
		AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E5B870)->child->sibling->basicdxmodel->meshsets[2].vertuv, 10, 16, 100, 0);
		AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E5B870)->child->sibling->sibling->basicdxmodel->meshsets[0].vertuv, 14, 16, 100, 0);
		AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E5B870)->child->sibling->sibling->basicdxmodel->meshsets[2].vertuv, 10, 16, 100, 0);
		AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E5B870)->child->sibling->sibling->basicdxmodel->meshsets[9].vertuv, 20, 16, 100, 0);
		AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E5B870)->child->sibling->sibling->sibling->basicdxmodel->meshsets[1].vertuv, 6, 16, 100, 0);
		AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E5B870)->child->sibling->sibling->sibling->basicdxmodel->meshsets[2].vertuv, 21, 16, 100, 0);
		AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E5B870)->child->sibling->sibling->sibling->sibling->basicdxmodel->meshsets[0].vertuv, 7, 16, 100, 0);
		AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E5B870)->child->sibling->sibling->sibling->sibling->child->basicdxmodel->meshsets[7].vertuv, 4, 16, 100, 0);
		AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E5B870)->child->sibling->sibling->sibling->sibling->child->basicdxmodel->meshsets[11].vertuv, 30, 16, 100, 0);
		AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E5B870)->child->sibling->sibling->sibling->sibling->sibling->basicdxmodel->meshsets[0].vertuv, 10, 16, 65, 0);
		CollisionData_NeonK[0].scale.y = CollisionData_NeonK[0].scale.y * 6;
		CollisionData_NeonK[1].scale.y = CollisionData_NeonK[1].scale.y * 6;
		CollisionData_NeonK[2].scale.y = CollisionData_NeonK[2].scale.y * 6;
		CollisionData_NeonK[0].origin.y = CollisionData_NeonK[0].origin.y + 20;
		CollisionData_NeonK[1].origin.y = CollisionData_NeonK[1].origin.y + 20;
		CollisionData_NeonK[2].origin.y = CollisionData_NeonK[2].origin.y + 20;
		CollisionData_NeonK[0].origin.z = CollisionData_NeonK[0].origin.z - 14;
		CollisionData_NeonK[1].origin.z = CollisionData_NeonK[1].origin.z - 14;
		CollisionData_NeonK[2].origin.z = CollisionData_NeonK[2].origin.z - 14;
		WriteJump(ONeonk, Cowgirl_Load);
	}
	else
	{
		*(NJS_OBJECT*)0x1E74A94 = *LoadModel("system\\data\\STG09\\Models\\001F0CCC.sa1mdl", false); //NeonK
		AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E74A94)->child->basicdxmodel->meshsets[0].vertuv, 28, 16, 100, 0);
		AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E74A94)->child->basicdxmodel->meshsets[2].vertuv, 200, 16, -100, 0);
		AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E74A94)->child->basicdxmodel->meshsets[3].vertuv, 28, 16, 100, 0);
		AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E74A94)->child->basicdxmodel->meshsets[4].vertuv, 144, 16, 100, 0);
		AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E74A94)->child->basicdxmodel->meshsets[5].vertuv, 188, 16, -100, 0);
		AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E74A94)->child->basicdxmodel->meshsets[7].vertuv, 44, 16, -100, 0);
		AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E74A94)->child->basicdxmodel->meshsets[9].vertuv, 12, 16, 100, 0);
		AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E74A94)->child->basicdxmodel->meshsets[10].vertuv, 18, 16, -100, 0);
		AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E74A94)->child->sibling->basicdxmodel->meshsets[1].vertuv, 20, 32, 100, 0);
		AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E74A94)->child->sibling->sibling->basicdxmodel->meshsets[0].vertuv, 20, 32, 100, 0);
		((NJS_OBJECT*)0x1E74A94)->basicdxmodel->meshsets[16].nbMesh = 0; //Hide NeonK text
		((NJS_OBJECT*)0x1E74A94)->child->basicdxmodel->meshsets[6].nbMesh = 0; //Hide NeonK decoration
		NeonK_Text = LoadModel("system\\data\\STG09\\Models\\001F0CCC.sa1mdl", false);
		AddUVAnimation_Permanent(9, 0, NeonK_Text->child->basicdxmodel->meshsets[6].vertuv, 78, 16, 0, 100);
		AddAlphaRejectMaterial(&NeonK_Text->basicdxmodel->mats[16]);
		WriteCall((void*)0x5CAB34, RenderNeonK);
		for (int i = 0; i < NeonK_Text->basicdxmodel->nbMeshset; i++)
		{
			if (i != 16) NeonK_Text->basicdxmodel->meshsets[i].nbMesh = 0;
		}
		for (int i = 0; i < NeonK_Text->child->basicdxmodel->nbMeshset; i++)
		{
			if (i != 6) NeonK_Text->child->basicdxmodel->meshsets[i].nbMesh = 0;
		}
	}
	//Models
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x01E4B760)->basicdxmodel->mats[2]); //OShwrl
	//ODento
	ODento_1 = LoadModel("system\\data\\STG09\\Models\\001DA8C8.sa1mdl", false);
	ODento_1->basicdxmodel->meshsets[1].nbMesh = 0;
	ODento_1->basicdxmodel->meshsets[2].nbMesh = 0;
	ODento_1->basicdxmodel->meshsets[4].nbMesh = 0;
	ODento_2 = LoadModel("system\\data\\STG09\\Models\\001DA8C8.sa1mdl", false);
	ODento_2->basicdxmodel->meshsets[0].nbMesh = 0;
	ODento_2->basicdxmodel->meshsets[3].nbMesh = 0;
	ODento_2->basicdxmodel->meshsets[4].nbMesh = 0;
	ODento_3 = LoadModel("system\\data\\STG09\\Models\\001DA8C8.sa1mdl", false);
	ODento_3->basicdxmodel->meshsets[0].nbMesh = 0;
	ODento_3->basicdxmodel->meshsets[1].nbMesh = 0;
	ODento_3->basicdxmodel->meshsets[2].nbMesh = 0;
	ODento_3->basicdxmodel->meshsets[3].nbMesh = 0;
	AddAlphaRejectMaterial(&ODento_3->basicdxmodel->mats[4]);
	WriteCall((void*)0x5DDADF, ODentoFix);
	*(NJS_OBJECT*)0x1E4D66C = *LoadModel("system\\data\\STG09\\Models\\001CA53C.sa1mdl", true); //OCardKan
	AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E4D66C)->basicdxmodel->meshsets[1].vertuv, 4, 8, 65, 0); //Meshset order changed after sorting
	AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E4D66C)->child->basicdxmodel->meshsets[0].vertuv, 16, 8, 65, 0);
	AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E4D66C)->child->sibling->basicdxmodel->meshsets[0].vertuv, 16, 8, 65, 0);
	ForceLevelSpecular_Object((NJS_OBJECT*)0x1E4D66C);
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x1E4D66C)->basicdxmodel->mats[0]); //Material order changed after sorting
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x1E4D66C)->basicdxmodel->mats[2]); //Material order changed after sorting
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x1E4D66C)->basicdxmodel->mats[3]); //Material order changed after sorting
	*(NJS_OBJECT*)0x1E4E3F0 = *LoadModel("system\\data\\STG09\\Models\\001CB278.sa1mdl", true); //OSlotKan
	AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E4E3F0)->basicdxmodel->meshsets[2].vertuv, 6, 8, 65, 0);
	AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E4E3F0)->child->basicdxmodel->meshsets[1].vertuv, 28, 8, 65, 0);
	AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E4E3F0)->child->sibling->basicdxmodel->meshsets[2].vertuv, 8, 8, 65, 0); //Meshset order changed after sorting
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x1E4E3F0)->basicdxmodel->mats[3]); //Material order changed after sorting
	AddWhiteDiffuseMaterial(&((NJS_OBJECT*)0x1E4E3F0)->child->sibling->basicdxmodel->mats[0]); //Material order changed after sorting
	*(NJS_MODEL_SADX*)0x1D98CE8 = *LoadModel("system\\data\\STG09\\Models\\0011B708.sa1mdl", false)->basicdxmodel; //Bumper1 pressed
	*(NJS_MODEL_SADX*)0x1D99790 = *LoadModel("system\\data\\STG09\\Models\\0011C1A4.sa1mdl", false)->basicdxmodel; //Bumper1
	*(NJS_MODEL_SADX*)0x1DD2094 = *LoadModel("system\\data\\STG09\\Models\\00153F34.sa1mdl", false)->basicdxmodel; //Piantama top
	*(NJS_MODEL_SADX*)0x1DD23FC = *LoadModel("system\\data\\STG09\\Models\\0015428C.sa1mdl", false)->basicdxmodel; //Piantama bottom
	*(NJS_MODEL_SADX*)0x1DD1D18 = *LoadModel("system\\data\\STG09\\Models\\00153BCC.sa1mdl", false)->basicdxmodel; //Piantama full
	*(NJS_MODEL_SADX*)0x1D8BC10 = *LoadModel("system\\data\\STG09\\Models\\0010E9AC.sa1mdl", false)->basicdxmodel; //FlipperL
	*(NJS_MODEL_SADX*)0x1D8BED8 = *LoadModel("system\\data\\STG09\\Models\\0010EC64.sa1mdl", false)->basicdxmodel; //FlipperR
	*(NJS_MODEL_SADX*)0x1DDE898 = *LoadModel("system\\data\\STG09\\Models\\00160380.sa1mdl", false)->basicdxmodel; //BanjuDoor
	*(NJS_MODEL_SADX*)0x1D8E1B8 = *LoadModel("system\\data\\STG09\\Models\\00110EC4.sa1mdl", false)->basicdxmodel; //Dtarget
	*(NJS_MODEL_SADX*)0x1DCF690 = *LoadModel("system\\data\\STG09\\Models\\00151638.sa1mdl", true)->basicdxmodel; //Kazariyaji
	*(NJS_MODEL_SADX*)0x1DCF970 = *LoadModel("system\\data\\STG09\\Models\\001518FC.sa1mdl", true)->basicdxmodel; //Kazariyaji2
	*(NJS_MODEL_SADX*)0x1DCFC50 = *LoadModel("system\\data\\STG09\\Models\\00151BC0.sa1mdl", true)->basicdxmodel; //Kazariyaji green 2
	*(NJS_MODEL_SADX*)0x1DCFF30 = *LoadModel("system\\data\\STG09\\Models\\00151E84.sa1mdl", true)->basicdxmodel; //Kazariyaji pink 2
	*(NJS_MODEL_SADX*)0x1D9C72C = *LoadModel("system\\data\\STG09\\Models\\0011F078.sa1mdl", false)->basicdxmodel; //Bottom decoration in Act 3 (bright)
	*(NJS_MODEL_SADX*)0x1D9CB7C = *LoadModel("system\\data\\STG09\\Models\\0011F4B8.sa1mdl", false)->basicdxmodel; //Bottom decoration in Act 3 (dark)
	*(NJS_MODEL_SADX*)0x1DDF318 = *LoadModel("system\\data\\STG09\\Models\\00160DCC.sa1mdl", false)->basicdxmodel; //CardUV 1
	*(NJS_MODEL_SADX*)0x1E5DBC8 = *LoadModel("system\\data\\STG09\\Models\\001DA308.sa1mdl", false)->basicdxmodel; //OKDAnm
	*(NJS_MODEL_SADX*)0x1E0D048 = *LoadModel("system\\data\\STG09\\Models\\0018C0F8.sa1mdl", false)->basicdxmodel; //Sonic token
	*(NJS_MODEL_SADX*)0x1E5D8D8 = *LoadModel("system\\data\\STG09\\Models\\001DA034.sa1mdl", false)->basicdxmodel; //That brick thing in Act 1
	*(NJS_MODEL_SADX*)0x1E46F30 = *LoadModel("system\\data\\STG09\\Models\\001C4DF4.sa1mdl", false)->basicdxmodel; //OCfO rotating thing
	AddTextureAnimation_Permanent(9, 0, &((NJS_MODEL_SADX*)0x1E46F30)->mats[3], false, 120, 140, 147, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1);
	*(NJS_OBJECT*)0x1E510A8 = *LoadModel("system\\data\\STG09\\Models\\001CD9D0.sa1mdl", false); //OFanFan
	*(NJS_OBJECT*)0x1DF716C = *LoadModel("system\\data\\STG09\\Models\\001771B0.sa1mdl", false); //Slot red
	AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1DF716C)->basicdxmodel->meshsets[8].vertuv, 14, 16, 65, 0);
	*(NJS_OBJECT*)0x1DF5164 = *LoadModel("system\\data\\STG09\\Models\\00175E6C.sa1mdl", false); //Slot blue
	AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1DF5164)->basicdxmodel->meshsets[8].vertuv, 14, 16, 65, 0);
	*(NJS_OBJECT*)0x1E49864 = *LoadModel("system\\data\\STG09\\Models\\001C6E9C.sa1mdl", false); //Card pinball entrance
	AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E49864)->basicdxmodel->meshsets[0].vertuv, 67, 12, 65, 0);
	AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E49864)->basicdxmodel->meshsets[5].vertuv, 8, 12, 65, 0);
	*(NJS_OBJECT*)0x1E4B1A8 = *LoadModel("system\\data\\STG09\\Models\\001C8150.sa1mdl", false); //Slot pinball entrance
	AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E4B1A8)->basicdxmodel->meshsets[0].vertuv, 28, 12, 65, 0);
	AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E4B1A8)->basicdxmodel->meshsets[11].vertuv, 24, 12, 65, 0);
	OSlX_Base = LoadModel("system\\data\\STG09\\Models\\001BF300.sa1mdl", false); //OSl Base
	OSlX_Base->child->basicdxmodel->meshsets[0].nbMesh = 0; //Hide light start
	OSlX_Base->child->basicdxmodel->meshsets[2].nbMesh = 0; //Hide light
	((NJS_OBJECT*)0x01E5E7BC)->basicdxmodel->meshsets[2].nbMesh = 0; //OLhtr base
	OLhtr_Bright = LoadModel("system\\data\\STG09\\Models\\001DAE74.sa1mdl", false); //OLhtr bright
	OLhtr_Bright->basicdxmodel->meshsets[0].nbMesh = 0;
	OLhtr_Bright->basicdxmodel->meshsets[1].nbMesh = 0;
	OLhtr_Dark = LoadModel("system\\data\\STG09\\Models\\001DAE74.sa1mdl", false); //OLhtr dark
	OLhtr_Dark->basicdxmodel->meshsets[0].nbMesh = 0;
	OLhtr_Dark->basicdxmodel->meshsets[1].nbMesh = 0;
	OLhtr_Dark->basicdxmodel->mats[2].diffuse.color = 0xFF4F4F4F;
	((NJS_OBJECT*)0x1E5EC4C)->basicdxmodel->meshsets[3].nbMesh = 0; //OLhtg base
	OLhtg_Bright = LoadModel("system\\data\\STG09\\Models\\001DB2E4.sa1mdl", false); //OLhtg bright
	OLhtg_Bright->basicdxmodel->meshsets[0].nbMesh = 0;
	OLhtg_Bright->basicdxmodel->meshsets[1].nbMesh = 0;
	OLhtg_Bright->basicdxmodel->meshsets[2].nbMesh = 0;
	OLhtg_Dark = LoadModel("system\\data\\STG09\\Models\\001DB2E4.sa1mdl", false); //OLhtg dark
	OLhtg_Dark->basicdxmodel->meshsets[0].nbMesh = 0;
	OLhtg_Dark->basicdxmodel->meshsets[1].nbMesh = 0;
	OLhtg_Dark->basicdxmodel->meshsets[2].nbMesh = 0;
	OLhtg_Dark->basicdxmodel->mats[4].diffuse.color = 0xFF4F4F4F;
	*(NJS_OBJECT*)0x1E40FB8 = *LoadModel("system\\data\\STG09\\Models\\001BF300.sa1mdl", false); //OSl G
	((NJS_OBJECT*)0x1E40FB8)->evalflags |= NJD_EVAL_HIDE;
	((NJS_OBJECT*)0x1E40FB8)->child->basicdxmodel->meshsets[1].nbMesh = 0;
	*(NJS_OBJECT*)0x1E40980 = *LoadModel("system\\data\\STG09\\Models\\001BECF4.sa1mdl", false); //OSl B
	((NJS_OBJECT*)0x1E40980)->evalflags |= NJD_EVAL_HIDE;
	((NJS_OBJECT*)0x1E40980)->child->basicdxmodel->meshsets[1].nbMesh = 0;
	*(NJS_OBJECT*)0x1E415F0 = *LoadModel("system\\data\\STG09\\Models\\001BF90C.sa1mdl", false); //OSl R
	((NJS_OBJECT*)0x1E415F0)->evalflags |= NJD_EVAL_HIDE;
	((NJS_OBJECT*)0x1E415F0)->child->basicdxmodel->meshsets[1].nbMesh = 0;
	*(NJS_OBJECT*)0x1E41C28 = *LoadModel("system\\data\\STG09\\Models\\001BFF18.sa1mdl", false); //OSl Y
	((NJS_OBJECT*)0x1E41C28)->evalflags |= NJD_EVAL_HIDE;
	((NJS_OBJECT*)0x1E41C28)->child->basicdxmodel->meshsets[1].nbMesh = 0;
	*(NJS_OBJECT*)0x1E47B1C = *LoadModel("system\\data\\STG09\\Models\\001C5990.sa1mdl", false); //MizuA (fountain)
	AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E47B1C)->basicdxmodel->meshsets[0].vertuv, 36, 0, 0, -16);
	AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E47B1C)->basicdxmodel->meshsets[1].vertuv, 80, 0, 0, -16);
	*(NJS_OBJECT*)0x1E47CA4 = *LoadModel("system\\data\\STG09\\Models\\001C5B0C.sa1mdl", false); //MizuB (waterfall)
	AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E47CA4)->basicdxmodel->meshsets[0].vertuv, 8, 0, 0, -16);
	*(NJS_OBJECT*)0x1E01EB4 = *LoadModel("system\\data\\STG09\\Models\\0018141C.sa1mdl", false); //Lion
	AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E01EB4)->child->sibling->sibling->basicdxmodel->meshsets[5].vertuv, 36, 8, -127, 0);
	AddUVAnimation_Permanent(9, 0, ((NJS_OBJECT*)0x1E01EB4)->child->sibling->sibling->basicdxmodel->meshsets[10].vertuv, 20, 8, -127, 0);
	((NJS_ACTION*)0x1DE120C)->object = LoadModel("system\\data\\STG09\\Models\\00155E04.sa1mdl", false); //Pianpach
	((NJS_ACTION*)0x1DE223C)->object = LoadModel("system\\data\\STG09\\Models\\001594F4.sa1mdl", false); //Pianwalk
	((NJS_ACTION*)0x1DE23C4)->object = LoadModel("system\\data\\STG09\\Models\\0015B34C.sa1mdl", false); //Pianfish
	((NJS_ACTION*)0x1DE2A5C)->object = LoadModel("system\\data\\STG09\\Models\\0015CEC4.sa1mdl", false); //Pianslee
	((NJS_ACTION*)0x1DE18A4)->object = LoadModel("system\\data\\STG09\\Models\\0015797C.sa1mdl", false); //Piantama
	((NJS_ACTION*)0x1DE084C)->object = LoadModel("system\\data\\STG09\\Models\\00153688.sa1mdl", false); //Flying clock
	//UV fixes
	((NJS_TEX*)0x01DDB544)->u = 509; //Yaji
	((NJS_TEX*)0x01DDB548)->u = 510; //Yaji
	((NJS_MODEL_SADX*)0x01DDB5D0)->mats[0].attrflags |= NJD_FLAG_FLIP_U; //Yaji
	memcpy((void*)0x1E3C3C8, uv_001BA8B0, sizeof(uv_001BA8B0)); //O KBB
	memcpy((void*)0x1E3C868, uv_001BA8B0, sizeof(uv_001BA8B0)); //O KBR
	memcpy((void*)0x1E46FF8, uv_001C4E90, sizeof(uv_001C4E90)); //SDFUTIR
	memcpy((void*)0x1E471C8, uv_001C4E90, sizeof(uv_001C4E90)); //SDFUTIB
	memcpy((void*)0x1E4BD38, uv_001C8C9C, sizeof(uv_001C8C9C)); //Wall marquee
	memcpy((void*)0x1E4BD98, uv_001C8CFC, sizeof(uv_001C8CFC)); //Wall marquee
	memcpy((void*)0x1E3BAC8, uv_001B9FC4, sizeof(uv_001B9FC4)); //ORlti
	memcpy((void*)0x1E3BBC8, uv_001BA0C4, sizeof(uv_001BA0C4)); //ORlti
	memcpy((void*)0x1E3BC08, uv_001BA104, sizeof(uv_001BA104)); //ORlti
	//Fog and draw distance stuff 
	for (int i = 0; i < 3; i++)
	{
		Casino1Fog[i].Color = 0xFF000000;
		Casino1Fog[i].Layer = 800.0f;
		Casino1Fog[i].Toggle = 1;
		Casino1Fog[i].Distance = 2000.0f;
		Casino2Fog[i].Color = 0xFF707000;
		Casino2Fog[i].Layer = 1.0f;
		Casino2Fog[i].Distance = 4000.0f;
		Casino2Fog[i].Toggle = 1;
		DrawDist_Casino2[i].Maximum = -2000.0;
	}
}

void Casinopolis_OnFrame()
{
	auto entity = EntityData1Ptrs[0];
	//Palette effect
	if (DLLLoaded_Lantern)
	{
		//Failsafe stuff for palette blending
		if (WhiteSonic && (InsideMachine == 0 || CurrentLevel != LevelIDs_Casinopolis || CurrentAct != 0 || GameMode == GameModes_Menu || GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21))
		{
			WhiteSonic = false;
			set_blend_factor_ptr(0.0f);
			set_specular_blend_ptr(2, -1);
			set_specular_blend_ptr(3, -1);
			set_shader_flags_ptr(ShaderFlags_Blend, false);
			SonicWhiteBlendFactor = 0;
		}
		if (CurrentLevel == LevelIDs_Casinopolis && CurrentAct == 0 && !IsGamePaused())
		{
			//Make Sonic white
			if (!WhiteSonic && InsideMachine != 0)
			{
				WhiteSonic = true;
				set_shader_flags_ptr(ShaderFlags_Blend, true);
				set_specular_blend_ptr(2, 4);
				set_specular_blend_ptr(3, 4);
			}
			//Make Sonic normal
			if (WhiteSonic && SonicWhiteBlendFactor <= 0.75f)
			{
				set_blend_factor_ptr(SonicWhiteBlendFactor);
				SonicWhiteBlendFactor += (0.01f * FramerateSetting);
			}
		}
	}
	//Other things
	if (CurrentLevel == LevelIDs_Casinopolis && !IsGamePaused())
	{
		//Loop sound
		if (CurrentAct == 3)
		{
			if (LoopDelay > 0) LoopDelay = LoopDelay - FramerateSetting;
		}
		//Knuckles stuff
		if (CurrentAct == 0 && CurrentCharacter == 3)
		{
			//Gears
			GearFrame += 0.1f;
			if (GearFrame > 15) GearFrame = 0;
			RotationAngle1 = (RotationAngle1 + 128) % 65536;
			RotationAngle2 = (RotationAngle2 - 128) % 65536;
		}
		//Tails' sound thing
		if (CurrentAct != 1) SoundPlayed = 0;
		else
		{
			if (SoundPlayed == 0 && entity != nullptr && entity->Position.y > -1698)
			{
				PlaySound(249, 0, 0, 0);
				SoundPlayed = 1;
			}
		}
	}
}