#include "stdafx.h"
#include "Casino_objects.h"
#include "Casino1.h"
#include "Casino2.h"
#include "Casino3.h"
#include "Casino4.h"
#include "Cowgirl.h"

static short CurrentPlayer = -1;
static float distance_float;
static int anim1 = 75;
static int anim2 = 7;
static int anim1_actual = 0;
static int monitorimage = 0;
static float gearframe1 = 0;
static float SonicWhiteness = 0.0f;
static int anim2_actual = 0;
static int LoopDelay = 0;
static int CowgirlDelay = 0;
static int RotationAngle1 = 0;
static int RotationAngle2 = 0;
static int SoundPlayed = 0;
static int shift1 = 65;
static int shift2 = -10;
static int shift3 = 0;
static int carduvSTG09_reala = 1;
static float cowgirlframe = 0;
static int cowgirl_shift1 = 65;
static int cowgirl_shift2 = 0;
static bool CowgirlOn = true;
static bool WhiteSonic = false;
FunctionPointer(void, sub_5DD900, (int a1, int a2), 0x5DD900);
FunctionPointer(void, sub_5DD920, (int a1, int a2), 0x5DD920);
FunctionPointer(void, sub_5D04C0, (ObjectMaster *a1), 0x5D04C0);
FunctionPointer(Sint32, sub_5C09D0, (int a1), 0x5C09D0);
FunctionPointer(void, sub_405450, (NJS_ACTION *a1, float frame, float scale), 0x405450);
FunctionPointer(int, sub_5D4600, (int a1, int a2, float a3, int a4), 0x5D4600);
FunctionPointer(void, sub_405490, (NJS_ACTION *a1, float a2, int a3, int a4), 0x405490);
FunctionPointer(void, sub_407A00, (NJS_MODEL_SADX *model, float a2), 0x407A00);
FunctionPointer(void, sub_4053A0, (void *a1, int a2, float a3, int a4, int a5), 0x4053A0);
NJS_VECTOR Cowgirl1{ 457.6972f, 45.06788f, 390 };
NJS_VECTOR Cowgirl2{ 340.3949f, 51.20071f, 480 };
DataArray(NJS_VECTOR, stru_1E79588, 0x1E79588, 66);
DataArray(NJS_SPRITE*, SonicJackpotSpritesX, 0x1E79570, 6);
DataArray(CollisionData, stru_1E763B8, 0x1E763B8, 3);
DataArray(NJS_TEX, uvSTG09_01A4BD38, 0x01E4BD38, LengthOfArray(uvSTG09_001C8C9C));
DataArray(NJS_TEX, uvSTG09_01A4BD98, 0x01E4BD98, LengthOfArray(uvSTG09_001C8CFC));
DataArray(NJS_TEX, yajitex, 0x01DDB544, 4);
DataArray(NJS_TEX, bumpertex, 0x01D98418, LengthOfArray(uvSTG09_01998418));
DataArray(NJS_TEX, bumpertex2, 0x01D98EC0, LengthOfArray(uvSTG09_0011B8B4));
DataArray(NJS_TEX, bill1, 0x01E6D7C8, LengthOfArray(uvSTG09_001E9ABC));
DataArray(NJS_TEX, bill2, 0x01E6D900, LengthOfArray(uvSTG09_001E9BF4));
DataArray(NJS_MESHSET_SADX, lionmesh, 0x1DFF0F8, 13);
DataArray(FogData, Casino1Fog, 0x01C46990, 3);
DataArray(FogData, Casino2Fog, 0x01C469C0, 3);
DataArray(DrawDistance, DrawDist_Casino2, 0x01C46948, 3);
DataPointer(NJS_MODEL_SADX, stru_1DF3160, 0x1DF3160);
DataPointer(NJS_OBJECT, stru_1DF2EF8, 0x1DF2EF8);
DataPointer(NJS_MODEL_SADX, stru_1DF2B60, 0x1DF2B60);
DataPointer(NJS_OBJECT, stru_1DF2908, 0x1DF2908);
DataPointer(NJS_MODEL_SADX, stru_1DF2570, 0x01DF2570);
DataPointer(NJS_OBJECT, stru_1DF230C, 0x1DF230C);
DataPointer(NJS_ACTION, off_1E06634, 0x1E06634);
DataPointer(NJS_OBJECT*, stru_1E03AB8, 0x01E03AB8);
DataPointer(CollisionData, stru_1E77574, 0x1E77574);
DataPointer(NJS_OBJECT*, unk_1E050FC, 0x1E050FC);
DataPointer(CollisionData, stru_1E775D4, 0x1E775D4);
DataPointer(NJS_TEXLIST, stru_1D8B384, 0x1D8B384);
DataPointer(NJS_SPRITE, stru_3C75098, 0x3C75098);
DataPointer(ObjectMaster*, off_1E75DC8, 0x01E75DC8);
DataPointer(ObjectMaster*, off_1E75DE0, 0x01E75DE0);
DataPointer(NJS_OBJECT*, unk_1E06274, 0x1E06274);
DataPointer(CollisionData, stru_1E77638, 0x1E77638);
DataPointer(NJS_OBJECT, stru_1E5EC4C, 0x01E5EC4C);
DataPointer(NJS_OBJECT, stru_1E5E7BC, 0x01E5E7BC);
DataPointer(NJS_OBJECT*, unk_1E04CDC, 0x1E04CDC);
DataPointer(CollisionData, stru_1E775A4, 0x1E775A4);
DataPointer(int, dword_1E77568, 0x1E77568);
DataPointer(int, InsideMachine, 0x3C7507C);
DataPointer(NJS_OBJECT*, unk_1E05954, 0x1E05954);
DataPointer(CollisionData, stru_1E77604, 0x1E77604);
DataPointer(NJS_OBJECT, stru_1DF198C, 0x1DF198C);

void __cdecl Loop_Display(ObjectMaster *a1)
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
		njSetTexture(&stru_1D8B384 + 1);
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
			stru_3C75098.p.x = v7;
			stru_3C75098.p.z = 0;
			stru_3C75098.p.y = v6;
			njDrawSprite3D(&stru_3C75098, v1->Action, NJD_SPRITE_ALPHA | NJD_SPRITE_SCALE);
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
		njSetTexture((NJS_TEXLIST*)0x01DF0920); //OBJ_CASINO9
		njPushMatrix(0);
		njTranslate(0, 311.62f, 0, 338.93f);
		njRotateXYZ(0, 0, 0x1E00, 0);
		sub_405450(&action_cowgirl_anim, cowgirlframe, 1.0f);
		njPopMatrix(1u);
	}
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
			Collision_Init(a1, &stru_1E77604, 1, 4u);
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
			Collision_Init(a1, &stru_1E775A4, 1, 4u);
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
			Collision_Init(a1, &stru_1E775D4, 1, 4u);
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
			Collision_Init(a1, &stru_1E77574, 1, 4u);
		}
		a1->DisplaySub = sub_5D04C0;
		a1->MainSub = sub_5D0560_KazB;
		v4->Object = stru_1E03AB8;
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
			Collision_Init(a1, &stru_1E77638, 1, 4u);
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
	njAction(&off_1E06634, gearframe1);
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
		sub_407A00(&stru_1DF2570, 1.0f);
		v3 = ((unsigned short *)&v1->LoopData)[0];
		if (v1->Rotation.y != v3)
		{
			njRotateY(0, (unsigned __int16)(v1->Rotation.y - v3));
		}
		ProcessModelNode_AB_Wrapper(&stru_1DF230C, 1.0f);
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
		sub_407A00(&stru_1DF2B60, 1.0f);
		v3 = ((unsigned short *)&v1->LoopData)[0];
		if (v1->Rotation.y != v3)
		{
			njRotateY(0, (unsigned __int16)(v1->Rotation.y - v3));
		}
		ProcessModelNode_AB_Wrapper(&stru_1DF2908, 1.0f);
		njPopMatrix(1u);
	}
}

void __cdecl TutuC_Display(ObjectMaster *a2) //TutuC
{
	EntityData1 *v1; // esi@1
	unsigned __int16 v2; // ax@3
	__int16 v3; // ax
	v1 = a2->Data1;;
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
		sub_407A00(&stru_1DF3160, 1.0f);
		v3 = ((unsigned short *)&v1->LoopData)[0];
		if (v1->Rotation.y != v3)
		{
			njRotateY(0, (unsigned __int16)(v1->Rotation.y - v3));
		}
		ProcessModelNode_AB_Wrapper(&stru_1DF2EF8, 1.0f);
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
		ProcessModelNode_AB_Wrapper(&stru_1DF198C, 1.0);
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
		ProcessModelNode_AB_Wrapper(&objectSTG09_01A5E7BC, 1.0f);
		if (v1->Action == 0) ProcessModelNode_A_Wrapper(&objectSTG09_01A5E7BC_dark, QueuedModelFlagsB_SomeTextureThing, 1.0f);
		else ProcessModelNode_A_Wrapper(&objectSTG09_01A5E7BC_light, QueuedModelFlagsB_SomeTextureThing, 1.0f);
		njPopMatrix(1u);
		sub_5DD920((int)&off_1E75DE0, 2);
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
		ProcessModelNode_AB_Wrapper(&objectSTG09_01A5EC4C_main, 1.0f);
		if (v1->Action == 1) ProcessModelNode_A_Wrapper(&objectSTG09_01A5EC4C_light, QueuedModelFlagsB_SomeTextureThing, 1.0f);
		else ProcessModelNode_A_Wrapper(&objectSTG09_01A5EC4C_dark, QueuedModelFlagsB_SomeTextureThing, 1.0f);
		njPopMatrix(1u);
		sub_5DD920((int)&off_1E75DC8, 2);
	}
}

NJS_MATERIAL* WhiteDiffuse_Casino[] = {
	//OSlotkan
	((NJS_MATERIAL*)0x01E4D6B4),
	//OCardkan
	((NJS_MATERIAL*)0x01E4D144),
	((NJS_MATERIAL*)0x01E4D16C),
	((NJS_MATERIAL*)0x01E4D194),
};

NJS_MATERIAL* ObjectSpecular_Casino[] = {
	//OFanfan
	((NJS_MATERIAL*)0x01E4FDC8),
	((NJS_MATERIAL*)0x01E4FDDC),
	((NJS_MATERIAL*)0x01E4FDF0),
	((NJS_MATERIAL*)0x01E4FE04),
	((NJS_MATERIAL*)0x01E4FE18),
	//Slot machine red
	((NJS_MATERIAL*)0x01DF5198),
	((NJS_MATERIAL*)0x01DF51C0),
	//Slot machine blue
	((NJS_MATERIAL*)0x01DF31C0),
	((NJS_MATERIAL*)0x01DF31E8),
	//Rotating medal
	((NJS_MATERIAL*)0x01E0CA7C),
	((NJS_MATERIAL*)0x01E0CA90),
	//Slot machine
	((NJS_MATERIAL*)0x01E49898),
	((NJS_MATERIAL*)0x01E498AC),
	((NJS_MATERIAL*)0x01E498C0),
	((NJS_MATERIAL*)0x01E498D4),
	((NJS_MATERIAL*)0x01E498E8),
	//Card machine
	((NJS_MATERIAL*)0x01E47CD8),
	((NJS_MATERIAL*)0x01E47CEC),
	((NJS_MATERIAL*)0x01E47D00),
	((NJS_MATERIAL*)0x01E47D14),
	((NJS_MATERIAL*)0x01E47D28),
	//OLion
	((NJS_MATERIAL*)0x01E01270),
	((NJS_MATERIAL*)0x01E01284),
	((NJS_MATERIAL*)0x01E01298),
	((NJS_MATERIAL*)0x01E012AC),
	((NJS_MATERIAL*)0x01E00364),
	((NJS_MATERIAL*)0x01E00378),
	((NJS_MATERIAL*)0x01E0038C),
	((NJS_MATERIAL*)0x01DFCF7C),
	((NJS_MATERIAL*)0x01DFCF90),
	((NJS_MATERIAL*)0x01DFCFA4),
	((NJS_MATERIAL*)0x01DF9718),
	((NJS_MATERIAL*)0x01DF972C),
	((NJS_MATERIAL*)0x01DF9740),
	((NJS_MATERIAL*)0x01DF9754),
	((NJS_MATERIAL*)0x01DF9768),
	((NJS_MATERIAL*)0x01DF977C),
};

NJS_MATERIAL* LevelSpecular_Casino[] = {
	//OLion
	((NJS_MATERIAL*)0x01DFDE88),
	((NJS_MATERIAL*)0x01DFDE9C),
	((NJS_MATERIAL*)0x01DFDEB0),
	((NJS_MATERIAL*)0x01DFDEC4),
	((NJS_MATERIAL*)0x01DFDED8),
	((NJS_MATERIAL*)0x01DFDEEC),
	((NJS_MATERIAL*)0x01DFDF00),
	((NJS_MATERIAL*)0x01DFDF14),
	((NJS_MATERIAL*)0x01DFDF28),
	((NJS_MATERIAL*)0x01DFDF3C),
	((NJS_MATERIAL*)0x01DFDF50),
	((NJS_MATERIAL*)0x01DFDF64),
	((NJS_MATERIAL*)0x01DFDF78),
};

void OSlxDisplayNew(NJS_ACTION *a1, float a2, int a3, int a4)
{
	NJS_ACTION OSlX_MainAction;
	OSlX_MainAction.motion = (NJS_MOTION*)0x1E42078;
	OSlX_MainAction.object = &OSlX_MainObject;
	//Render main animation
	sub_405450(&OSlX_MainAction, a2, a4);
	//Render light
	DrawQueueDepthBias = 8000.0f;
	sub_405490(a1, a2, a3, a4);
	DrawQueueDepthBias = 0;
}

void RenderLightA(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	DrawQueueDepthBias = 9000.0f;
	ProcessModelNode(a1, (QueuedModelFlagsB)4, a3);
	DrawQueueDepthBias = 0;
}

void RenderOKBSText(NJS_OBJECT *obj, float scale)
{
	ProcessModelNode_AB_Wrapper(obj, scale);
	DrawQueueDepthBias = 1000.0f;
	ProcessModelNode(&objectSTG09_01A3FD04, QueuedModelFlagsB_SomeTextureThing, 1.0f);
	DrawQueueDepthBias = 0;
}

void RenderOKBCText(NJS_ACTION *a1, float frame, float scale)
{
	sub_405450(a1, frame, scale);
	DrawQueueDepthBias = 1000.0f;
	ProcessModelNode(&objectSTG09_01A3D734, QueuedModelFlagsB_SomeTextureThing, 1.0f);
	DrawQueueDepthBias = 0;
}

void RenderNeonK(NJS_MODEL_SADX *model, float scale)
{
	sub_407A00(model, scale);
	DrawQueueDepthBias = 1000.0f;
	ProcessModelNode(&objectSTG09_01A74A94Z, QueuedModelFlagsB_SomeTextureThing, 1.0f);
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

void IdeyaCapFix(void *a1, int a2, float a3, int a4, int a5)
{
	DrawQueueDepthBias = 1000.0f;
	sub_4053A0(a1, a2, a3, a4, a5);
	DrawQueueDepthBias = 0;
}

void Casinopolis_Init(const IniFile *config, const HelperFunctions &helperFunctions)
{
	ReplaceBIN_DC("CAM0900K");
	ReplaceBIN_DC("CAM0900S");
	ReplaceBIN_DC("CAM0901M");
	ReplaceBIN_DC("CAM0901S");
	ReplaceBIN_DC("CAM0902S");
	ReplaceBIN_DC("CAM0903S");
	ReplaceBIN_DC("SET0900K");
	ReplaceBIN_DC("SET0900S");
	ReplaceBIN_DC("SET0901M");
	ReplaceBIN_DC("SET0901S");
	ReplaceBIN_DC("SET0902S");
	ReplaceBIN_DC("SET0903S");
	ReplaceBIN_DC("SETMI0900K");
	switch (EnableSETFixes)
	{
		case SETFixes_Normal:
			AddSETFix("SET0900K");
			AddSETFix("SET0900S");
			AddSETFix("SET0901M");
			AddSETFix("SET0901S");
			AddSETFix("SET0902S");
			AddSETFix("SET0903S");
			break;
		case SETFixes_Extra:
			AddSETFix_Extra("SET0900K");
			AddSETFix_Extra("SET0900S");
			AddSETFix_Extra("SET0901M");
			AddSETFix_Extra("SET0901S");
			AddSETFix_Extra("SET0902S");
			AddSETFix_Extra("SET0903S");
			break;
		default:
			break;
	}
	ReplacePVM("CASINO01");
	ReplacePVM("CASINO02");
	ReplacePVM("CASINO03");
	ReplacePVM("CASINO04");
	ReplacePVM("OBJ_CASINO2");
	ReplacePVM("OBJ_CASINO8");
	ReplacePVM("OBJ_CASINO9");
	ReplacePVM("OBJ_CASINO_E");
	WriteData((LandTable**)0x97DB28, &landtable_00025EAC);
	WriteData((LandTable**)0x97DB2C, &landtable_0006C0B4);
	WriteData((LandTable**)0x97DB30, &landtable_000AF120);
	WriteData((LandTable**)0x97DB34, &landtable_000D8440);
	//Lantern stuff
	ReplaceBIN("PL_90B", "PL_90X");
	if (DLLLoaded_Lantern)
	{
		material_register(LevelSpecular_Casino, LengthOfArray(LevelSpecular_Casino), &ForceDiffuse0Specular0);
		material_register(ObjectSpecular_Casino, LengthOfArray(ObjectSpecular_Casino), &ForceDiffuse0Specular1);
		material_register(WhiteDiffuse_Casino, LengthOfArray(WhiteDiffuse_Casino), &ForceWhiteDiffuse1);
	}
	//Ideya cap fix
	WriteCall((void*)0x5D79A9, IdeyaCapFix);
	//Jackpot fixes
	WriteCall((void*)0x05E1144, JackPotFix1);
	WriteCall((void*)0x05E1187, JackPotFix2);
	WriteJump(PinballJackpot_Sprite_Main, PinballJackpot_Sprite_MainX);
	//MizuA
	((NJS_OBJECT*)0x01E47B1C)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
	((NJS_OBJECT*)0x01E47B1C)->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
	((NJS_OBJECT*)0x01E47B1C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
	((NJS_OBJECT*)0x01E47B1C)->basicdxmodel->mats[1].diffuse.color = 0x7FB2B2B2;
	//MizuB
	((NJS_OBJECT*)0x01E47CA4)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
	((NJS_OBJECT*)0x01E47CA4)->basicdxmodel->mats[0].diffuse.color = 0x99B2B2B2;
	//Act 2 lights
	WriteJump((void*)0x5C9980, OLhtg_Display);
	WriteJump((void*)0x5C9BA0, OLhtr_Display);
	//OLightA stuff
	((NJS_OBJECT*)0x01E5E39C)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
	WriteCall((void*)0x005DDBE4, RenderLightA); //OLightA
	//OSlX lights
	WriteCall((void*)0x005CE630, OSlxDisplayNew);
	*(NJS_OBJECT*)0x01E40FB8 = OSlX_Green; //OSlG light
	*(NJS_OBJECT*)0x01E40980 = OSlX_Blue; //OSlB light
	*(NJS_OBJECT*)0x01E415F0 = OSlX_Red; //OSlR light
	*(NJS_OBJECT*)0x01E41C28 = OSlX_Yellow; //OSlY light
	WriteJump((void*)0x5D5E50, Loop_Display); //Add sound
	//Fixed gears
	WriteCall((void*)0x005D09C7, FixedGear1);
	WriteJump((void*)0x5D3A90, FixedGear2); //Gears main
	WriteJump((void*)0x005D0C60, OKazeX);
	WriteJump((void*)0x005D0C20, OKazcX);
	WriteJump((void*)0x005D0C40, OKazdX);
	WriteJump((void*)0x005D0C00, OKazbX);
	WriteJump((void*)0x005D0C80, OKazfX);
	WriteJump((void*)0x5D43F0, TutuA_Display); //OTutuA display
	WriteJump((void*)0x5D44A0, TutuB_Display); //OTutuB display
	WriteJump((void*)0x5D4550, TutuC_Display); //OTutuC display
	WriteData((int*)0x1E77E58, 128); //Gear rotation speed
	//Load configuration settings
	CowgirlOn = config->getBool("Miscellaneous", "EnableCasinopolisCowgirl", true);
	if (CowgirlOn)
	{
		stru_1E763B8[0].scale.y = stru_1E763B8[0].scale.y * 4;
		stru_1E763B8[1].scale.y = stru_1E763B8[1].scale.y * 4;
		stru_1E763B8[2].scale.y = stru_1E763B8[2].scale.y * 4;
		stru_1E763B8[0].origin.y = stru_1E763B8[0].origin.y + 20;
		stru_1E763B8[1].origin.y = stru_1E763B8[1].origin.y + 20;
		stru_1E763B8[2].origin.y = stru_1E763B8[2].origin.y + 20;
		stru_1E763B8[0].origin.z = stru_1E763B8[0].origin.z - 14;
		stru_1E763B8[1].origin.z = stru_1E763B8[1].origin.z - 14;
		stru_1E763B8[2].origin.z = stru_1E763B8[2].origin.z - 14;
		WriteJump((void*)0x5CAA90, Cowgirl_Display);
	}
	*(NJS_MODEL_SADX*)0x01DF7140 = attachSTG09_00177188; //Slot red
	*(NJS_MODEL_SADX*)0x01DF5138 = attachSTG09_00175E44; //Slot blue
	*(NJS_MODEL_SADX*)0x01D8BC10 = attachSTG09_0010E984; //FlipperL
	*(NJS_MODEL_SADX*)0x01D8BED8 = attachSTG09_0010EC3C; //FlipperR
	*(NJS_MODEL_SADX*)0x01DDE898 = attachSTG09_00160358; //BanjuDoor
	*(NJS_MODEL_SADX*)0x01D8E1B8 = attachSTG09_00110E9C; //Dtarget
	*(NJS_MODEL_SADX*)0x01DCF690 = attachSTG09_00151610; //Kazariyaji
	*(NJS_MODEL_SADX*)0x01DCF970 = attachSTG09_001518D4; //Kazariyaji2
	*(NJS_MODEL_SADX*)0x01DCFC50 = attachSTG09_00151B98; //Kazariyaji green 2
	*(NJS_MODEL_SADX*)0x01DCFF30 = attachSTG09_00151E5C; //Kazariyaji pink 2
	*(NJS_MODEL_SADX*)0x01D9C72C = attachSTG09_0011F050; //Bottom decoration in Act 3 (bright)
	*(NJS_MODEL_SADX*)0x01D9CB7C = attachSTG09_0011F490; //Bottom decoration in Act 3 (dark)
	*(NJS_MODEL_SADX*)0x01DDF318 = attachSTG09_00160DA4; //CardUV 1
	*(NJS_MODEL_SADX*)0x01DDF180 = attachSTG09_00160C14_2; //CardUV 2
	*(NJS_MODEL_SADX*)0x01E5DBC8 = attachSTG09_001DA2E0; //OKDAnm
	*(NJS_MODEL_SADX*)0x01E0D048 = attach_0018C0D0; //Sonic token
	//UV fixes
	memcpy((void*)0x1E3C3C8, uvSTG09_001BA8B0, sizeof(uvSTG09_001BA8B0)); //O KBB
	memcpy((void*)0x1E3C868, uvSTG09_001BAD3C, sizeof(uvSTG09_001BAD3C)); //O KBR
	memcpy((void*)0x1E46FF8, uvSTG09_001C4E90, sizeof(uvSTG09_001C4E90)); //SDFUTIR
	memcpy((void*)0x1E471C8, uvSTG09_001C5054, sizeof(uvSTG09_001C5054)); //SDFUTIB
	memcpy((void*)0x1E4BD38, uvSTG09_001C8C9C, sizeof(uvSTG09_001C8C9C)); //Wall marquee
	memcpy((void*)0x1E4BD98, uvSTG09_001C8CFC, sizeof(uvSTG09_001C8CFC)); //Wall marquee
	memcpy((void*)0x1E3BAC8, uvSTG09_001B9FC4, sizeof(uvSTG09_001B9FC4)); //ORlti
	memcpy((void*)0x1E3BBC8, uvSTG09_001BA0C4, sizeof(uvSTG09_001BA0C4)); //ORlti
	memcpy((void*)0x1E3BC08, uvSTG09_001BA104, sizeof(uvSTG09_001BA104)); //ORlti
	*(NJS_MODEL_SADX*)0x01E49838 = attachSTG09_001C6E74; //Card pinball machine
	*(NJS_MODEL_SADX*)0x01E4B17C = attachSTG09_001C8128; //Slot pinball machine
	memcpy((void*)0x01E4D298, uvSTG09_001CA184, sizeof(uvSTG09_001CA184)); //Card pinball spinning ad
	memcpy((void*)0x1E4DFD8, uvSTG09_001CAE80, sizeof(uvSTG09_001CAE80)); //Slot pinball spinning ad
	((NJS_ACTION*)0x01DE120C)->object = &objectSTG09_00155E04; //Pianpach
	((NJS_ACTION*)0x01DE223C)->object = &objectSTG09_001594F4; //Pianwalk
	((NJS_ACTION*)0x01DE23C4)->object = &objectSTG09_0015B34C; //Pianfish
	((NJS_ACTION*)0x01DE2A5C)->object = &objectSTG09_0015CEC4; //Pianwhatever
	((NJS_ACTION*)0x01DE084C)->object = &objectSTG09_00153688; //Flying clock
	*(NJS_MODEL_SADX*)0x1E5D8D8 = attachSTG09_001DA00C; //Wht
	*(NJS_OBJECT*)0x1DC2B74 = objectSTG09_00144F38; //Reala thing 1
	*(NJS_OBJECT*)0x1DC4644 = objectSTG09_00146978; //Reala thing 2
	*(NJS_OBJECT*)0x1DC6114 = objectSTG09_001483B8; //Reala thing 3
	*(NJS_OBJECT*)0x1DC7BE4 = objectSTG09_00149DF8; //Reala thing 4
	//Yaji (arrow object) fixes
	yajitex[0].u = 509;
	yajitex[1].u = 510;
	((NJS_MODEL_SADX*)0x01DDB5D0)->mats[0].attrflags |= NJD_FLAG_FLIP_U;
	//Bumper1 fixes
	((NJS_MODEL_SADX*)0x01D98CE8)->mats[0].attrflags |= NJD_FLAG_FLIP_U;
	((NJS_MODEL_SADX*)0x01D99790)->mats[0].attrflags |= NJD_FLAG_FLIP_U;
	for (unsigned int uvSTG09_bill1 = 0; uvSTG09_bill1 < LengthOfArray(uvSTG09_001E9ABC); uvSTG09_bill1++)
	{
		bill1[uvSTG09_bill1].u = uvSTG09_001E9ABC[uvSTG09_bill1].u;
		bill1[uvSTG09_bill1].v = uvSTG09_001E9ABC[uvSTG09_bill1].v;
	}
	for (unsigned int uvSTG09_bill2 = 0; uvSTG09_bill2 < LengthOfArray(uvSTG09_001E9BF4); uvSTG09_bill2++)
	{
		bill2[uvSTG09_bill2].u = uvSTG09_001E9BF4[uvSTG09_bill2].u;
		bill2[uvSTG09_bill2].v = uvSTG09_001E9BF4[uvSTG09_bill2].v;
	}
	for (unsigned int uvSTG09_bump = 0; uvSTG09_bump < LengthOfArray(uvSTG09_01998418); uvSTG09_bump++)
	{
		bumpertex[uvSTG09_bump].u = uvSTG09_01998418[uvSTG09_bump].u;
		bumpertex[uvSTG09_bump].v = uvSTG09_01998418[uvSTG09_bump].v;
	}
	for (unsigned int uvSTG09_bump = 0; uvSTG09_bump < LengthOfArray(uvSTG09_01998418); uvSTG09_bump++)
	{
		bumpertex[uvSTG09_bump].u = uvSTG09_01998418[uvSTG09_bump].u;
		bumpertex[uvSTG09_bump].v = uvSTG09_01998418[uvSTG09_bump].v;
	}
	for (unsigned int uvSTG09_bump2 = 0; uvSTG09_bump2 < LengthOfArray(uvSTG09_0011B8B4); uvSTG09_bump2++)
	{
		bumpertex2[uvSTG09_bump2].u = uvSTG09_01998418[uvSTG09_bump2].u;
		bumpertex2[uvSTG09_bump2].v = uvSTG09_01998418[uvSTG09_bump2].v;
	}
	//Lion top animation
	lionmesh[0].vertuv = uv_lion;
	((NJS_OBJECT*)0x01E3FD04)->evalflags |= NJD_EVAL_HIDE; //Hide OKbS
	((NJS_OBJECT*)0x01E3D734)->evalflags |= NJD_EVAL_HIDE; //Hide OKbC
	WriteCall((void*)0x5CE84B, RenderOKBSText);
	WriteCall((void*)0x5CEA2A, RenderOKBCText);
	ResizeTextureList((NJS_TEXLIST*)0x1D1B050, textures_casino1);
	ResizeTextureList((NJS_TEXLIST*)0x1CBD1C4, textures_casino2);
	ResizeTextureList((NJS_TEXLIST*)0x1C8AF04, textures_casino3);
	ResizeTextureList((NJS_TEXLIST*)0x1C47004, textures_casino4);
	ResizeTextureList(&OBJ_CASINO9_TEXLIST, 203);
	*(NJS_MODEL_SADX*)0x01E74A68 = attachSTG09_01A74A68; //NeonK
	WriteCall((void*)0x5CAB34, RenderNeonK);
	*(NJS_MODEL_SADX*)0x01E46F30 = attachSTG09_001C4DCC; //OCfa rotating thing
	//Fog and draw distance stuff
	for (unsigned int i = 0; i < 3; i++)
	{
		Casino1Fog[i].Color = 0xFF000000;
		Casino1Fog[i].Layer = 600.0f;
		Casino1Fog[i].Toggle = 1;
		Casino1Fog[i].Distance = 1700.0f;
		Casino2Fog[i].Color = 0xFF646400;
		Casino2Fog[i].Layer = 1.0f;
		Casino2Fog[i].Distance = 4000.0f;
		Casino2Fog[i].Toggle = 1;
		DrawDist_Casino2[i].Maximum = -2000.0;
	}
}

void Casinopolis_OnFrame()
{
	if (DLLLoaded_Lantern)
	{
		//Failsafe stuff for palette blending
		if (WhiteSonic && (InsideMachine == 0 || CurrentLevel != 9 || CurrentAct != 0 || GameMode == GameModes_Menu || GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21))
		{
			WhiteSonic = false;
			set_blend_factor(0.0f);
			set_specular_blend(2, -1);
			set_specular_blend(3, -1);
			set_shader_flags(ShaderFlags_Blend, false);
			SonicWhiteness = 0;
		}
		if (CurrentLevel == 9 && CurrentAct == 0 && GameState != 16)
		{
			//Make Sonic white
			if (!WhiteSonic && InsideMachine != 0)
			{
				WhiteSonic = true;
				set_shader_flags(ShaderFlags_Blend, true);
				set_specular_blend(2, 4);
				set_specular_blend(3, 4);
			}
			//Make Sonic normal
			if (WhiteSonic && SonicWhiteness <= 0.75f)
			{
				set_blend_factor(SonicWhiteness);
				SonicWhiteness += (0.01f * FramerateSetting);
			}
		}
	}
	//Loop sound
	if (CurrentLevel == 9 && CurrentAct == 3 && GameState != 16)
	{
		if (LoopDelay > 0) LoopDelay = LoopDelay - FramerateSetting;
	}
	//Gears
	if (CurrentLevel == 9 && CurrentCharacter == 3 && GameState != 16)
	{
		gearframe1 = gearframe1 + 0.1f;
		if (gearframe1 > 15) gearframe1 = 0;
		RotationAngle1 = (RotationAngle1 + 128) % 65536;
		RotationAngle2 = (RotationAngle2 - 128) % 65536;
	}
	//Cowgirl
	if (CurrentLevel == 9 && CurrentCharacter == 3 && CowgirlOn && GameState != 16)
	{
		if (cowgirlframe > 30) cowgirlframe = 0;
		cowgirlframe = cowgirlframe + 0.08f;
		//Cowgirl UVs
		if (FrameCounter % 16 == 0)
		{
			cowgirl_shift1 = (cowgirl_shift1 + 65) % 255;
			cowgirl_shift2 = (cowgirl_shift2 + 100) % 510;

			for (unsigned int slot_cow1 = 0; slot_cow1 < LengthOfArray(uvSTG09_001CF84C); slot_cow1++)
			{
				uvSTG09_001CF84C[slot_cow1].u = uvSTG09_001CF84C_0[slot_cow1].u + cowgirl_shift1;
			}
			for (unsigned int slot_cow2 = 0; slot_cow2 < LengthOfArray(uvSTG09_001D6728); slot_cow2++)
			{
				uvSTG09_001D6728[slot_cow2].u = uvSTG09_001D6728_0[slot_cow2].u + cowgirl_shift2;
			}
			for (unsigned int slot_cow3 = 0; slot_cow3 < LengthOfArray(uvSTG09_001D6040); slot_cow3++)
			{
				uvSTG09_001D6040[slot_cow3].u = uvSTG09_001D6040_0[slot_cow3].u + cowgirl_shift2;
			}
			for (unsigned int slot_cow4 = 0; slot_cow4 < LengthOfArray(uvSTG09_001D6794); slot_cow4++)
			{
				uvSTG09_001D6794[slot_cow4].u = uvSTG09_001D6794_0[slot_cow4].u + cowgirl_shift2;
			}
			for (unsigned int slot_cow5 = 0; slot_cow5 < LengthOfArray(uvSTG09_001D67BC); slot_cow5++)
			{
				uvSTG09_001D67BC[slot_cow5].u = uvSTG09_001D67BC_0[slot_cow5].u + cowgirl_shift2;
			}
			for (unsigned int slot_cow6 = 0; slot_cow6 < LengthOfArray(uvSTG09_001D2F74); slot_cow6++)
			{
				uvSTG09_001D2F74[slot_cow6].u = uvSTG09_001D2F74_0[slot_cow6].u + cowgirl_shift2;
			}
			for (unsigned int slot_cow7 = 0; slot_cow7 < LengthOfArray(uvSTG09_001D308C); slot_cow7++)
			{
				uvSTG09_001D308C[slot_cow7].u = uvSTG09_001D308C_0[slot_cow7].u + cowgirl_shift2;
			}
			for (unsigned int slot_cow8 = 0; slot_cow8 < LengthOfArray(uvSTG09_001D333C); slot_cow8++)
			{
				uvSTG09_001D333C[slot_cow8].u = uvSTG09_001D333C_0[slot_cow8].u + cowgirl_shift2;
			}
			for (unsigned int slot_cow9 = 0; slot_cow9 < LengthOfArray(uvSTG09_001D4868); slot_cow9++)
			{
				uvSTG09_001D4868[slot_cow9].u = uvSTG09_001D4868_0[slot_cow9].u + cowgirl_shift2;
			}
			for (unsigned int slot_cow10 = 0; slot_cow10 < LengthOfArray(uvSTG09_001D16E4); slot_cow10++)
			{
				uvSTG09_001D16E4[slot_cow10].u = uvSTG09_001D16E4_0[slot_cow10].u + cowgirl_shift2;
			}
			for (unsigned int slot_cow11 = 0; slot_cow11 < LengthOfArray(uvSTG09_001D02D0); slot_cow11++)
			{
				uvSTG09_001D02D0[slot_cow11].u = uvSTG09_001D02D0_0[slot_cow11].u + cowgirl_shift2;
			}
			for (unsigned int slot_cow12 = 0; slot_cow12 < LengthOfArray(uvSTG09_001D043C); slot_cow12++)
			{
				uvSTG09_001D043C[slot_cow12].u = uvSTG09_001D043C_0[slot_cow12].u + cowgirl_shift2;
			}
			for (unsigned int slot_cow13 = 0; slot_cow13 < LengthOfArray(uvSTG09_001D1F60); slot_cow13++)
			{
				uvSTG09_001D1F60[slot_cow13].u = uvSTG09_001D1F60_0[slot_cow13].u + cowgirl_shift2;
			}
			for (unsigned int slot_cow14 = 0; slot_cow14 < LengthOfArray(uvSTG09_001D1F78); slot_cow14++)
			{
				uvSTG09_001D1F78[slot_cow14].u = uvSTG09_001D1F78_0[slot_cow14].u + cowgirl_shift2;
			}
		}
		//Cowgirl action
		if (CowgirlDelay < 100) CowgirlDelay++;
		auto entity = EntityData1Ptrs[0];
		if (CowgirlDelay >= 100 && entity != nullptr && entity->Status & Status_Attack)
		{
			if (IsPlayerInsideSphere(&Cowgirl1, 180.0f) || IsPlayerInsideSphere(&Cowgirl2, 180.0f))
			{
				PlaySound(278, 0, 0, 0);
				CowgirlDelay = 0;
			}
		}
	}
	if (CurrentLevel == 9 && GameState != 16)
	{
		if (CurrentAct != 1) SoundPlayed = 0;
		if (CurrentAct == 1)
		{
			auto entity = EntityData1Ptrs[0];
			if (SoundPlayed == 0 && entity != nullptr && entity->Position.y > -1698)
			{
				PlaySound(249, 0, 0, 0);
				SoundPlayed = 1;
			}
		}
	}
	if (CurrentLevel == 9 && CurrentAct == 0 && GameState != 16)
	{
		//Rotating thing
		matlistSTG09_001C448C[3].attr_texId = monitorimage + 140;
		if (FrameCounter % (240 / FramerateSetting) == 0)
		{
			monitorimage++;
			if (monitorimage > 7) monitorimage = 0;
		}
		//Water
		if (anim1_actual == 0) anim1 = 75;
		if (anim1_actual == 1) anim1 = 68;
		if (anim1_actual == 2) anim1 = 69;
		if (anim1_actual == 3) anim1 = 70;
		if (anim1_actual == 4) anim1 = 71;
		if (anim1_actual == 5) anim1 = 72;
		if (anim1_actual == 6) anim1 = 73;
		if (anim1_actual == 7) anim1 = 74;
		if (anim1_actual == 8) anim1 = 67;
		if (anim1_actual == 9) anim1 = 76;
		if (anim1_actual == 10) anim1 = 77;
		if (anim1_actual == 11) anim1 = 78;
		if (anim1_actual == 12) anim1 = 79;
		if (anim1_actual == 13) anim1 = 80;
		if (anim1_actual > 13) anim1_actual = 0;
		matlistSTG09_00066F5C[1].attr_texId = anim1;
		matlistSTG09_01979784[0].attr_texId = anim1;
		if (FramerateSetting < 2 && FrameCounter % 3 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2) anim1_actual++;
		//Card machine and lion top animation
		if (FrameCounter % 8 == 0)
		{
			shift3 = (shift3 + 127) % 255;
		}
		for (unsigned int xz2 = 0; xz2 < LengthOfArray(uv_lion); xz2++)
		{
			uv_lion[xz2].u = (uv_lion_0[xz2].u - shift3);
		}
		if (FrameCounter % 12 == 0)
		{
			shift1 = (shift1 + 65) % 255;
			for (unsigned int slot_uv1 = 0; slot_uv1 < LengthOfArray(uvSTG09_001C7570); slot_uv1++)
			{
				uvSTG09_001C7570[slot_uv1].u = uvSTG09_001C7570_0[slot_uv1].u + shift1;
			}
			for (unsigned int slot_uv2 = 0; slot_uv2 < LengthOfArray(uvSTG09_001C75E0); slot_uv2++)
			{
				uvSTG09_001C75E0[slot_uv2].u = uvSTG09_001C75E0_0[slot_uv2].u + shift1;
			}
			for (unsigned int slot_uv3 = 0; slot_uv3 < LengthOfArray(uvSTG09_001C7748); slot_uv3++)
			{
				uvSTG09_001C7748[slot_uv3].u = uvSTG09_001C7748_0[slot_uv3].u + shift1;
			}
			for (unsigned int slotmachine1 = 0; slotmachine1 < LengthOfArray(uvSTG09_001767D8); slotmachine1++)
			{
				uvSTG09_001767D8[slotmachine1].u = uvSTG09_001767D8_0[slotmachine1].u + shift1;
			}
			for (unsigned int slotmachine2 = 0; slotmachine2 < LengthOfArray(uvSTG09_00175494); slotmachine2++)
			{
				uvSTG09_00175494[slotmachine2].u = uvSTG09_00175494_0[slotmachine2].u + shift1;
			}

			for (unsigned int card_uv1 = 0; card_uv1 < LengthOfArray(uvSTG09_001C6200); card_uv1++)
			{
				uvSTG09_001C6200[card_uv1].u = uvSTG09_001C6200_0[card_uv1].u + shift1;
			}
			for (unsigned int card_uv1 = 0; card_uv1 < LengthOfArray(uvSTG09_001C6200); card_uv1++)
			{
				uvSTG09_001C6200[card_uv1].u = uvSTG09_001C6200_0[card_uv1].u + shift1;
			}
			for (unsigned int card_uv2 = 0; card_uv2 < LengthOfArray(uvSTG09_001C63EC); card_uv2++)
			{
				uvSTG09_001C63EC[card_uv2].u = uvSTG09_001C63EC_0[card_uv2].u + shift1;
			}
			for (unsigned int card_uv3 = 0; card_uv3 < LengthOfArray(uvSTG09_001C646C); card_uv3++)
			{
				uvSTG09_001C646C[card_uv3].u = uvSTG09_001C646C_0[card_uv3].u + shift1;
			}
			for (unsigned int xz = 0; xz < LengthOfArray(uvSTG09_01A48AD8); xz++)
			{
				uvSTG09_01A48AD8[xz].u = (uvSTG09_01A48AD8_0[xz].u + shift1);
			}
		}
		//Waterfalls
		shift2 = (shift2 - 10) % 255;
		for (unsigned int q = 0; q < LengthOfArray(uvSTG09_01A47B78); q++)
		{
			uvSTG09_01A47B78[q].v = uvSTG09_01A47B78_0[q].v + shift2;
		}

		for (unsigned int q2 = 0; q2 < LengthOfArray(uvSTG09_01A47468); q2++)
		{
			uvSTG09_01A47468[q2].v = uvSTG09_01A47468_0[q2].v + shift2;
		}

		for (unsigned int q3 = 0; q3 < LengthOfArray(uvSTG09_01A474F8); q3++)
		{
			uvSTG09_01A474F8[q3].v = uvSTG09_01A474F8_0[q3].v + shift2;
		}

	}
	if (CurrentLevel == 9 && CurrentAct == 1 && GameState != 16)
	{
		if (anim2_actual == 0) anim2 = 7;
		if (anim2_actual == 1) anim2 = 10;
		if (anim2_actual == 2) anim2 = 11;
		if (anim2_actual == 3) anim2 = 12;
		if (anim2_actual == 4) anim2 = 13;
		if (anim2_actual == 5) anim2 = 14;
		if (anim2_actual == 6) anim2 = 9;
		if (anim2_actual == 7) anim2 = 15;
		if (anim2_actual == 8) anim2 = 16;
		if (anim2_actual == 9) anim2 = 17;
		if (anim2_actual == 10) anim2 = 18;
		if (anim2_actual == 11) anim2 = 19;
		if (anim2_actual == 12) anim2 = 20;
		if (anim2_actual == 13) anim2 = 21;
		if (anim2_actual > 13) anim2_actual = 0;
		matlistSTG09_000ACC44[0].attr_texId = anim2;
		matlistSTG09_000ACB40[0].attr_texId = anim2;
		if (FramerateSetting < 2 && FrameCounter % 3 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2) anim2_actual++;
	}
	if (CurrentLevel == 9 && CurrentAct == 3 && GameState != 16)
	{
		carduvSTG09_reala = (carduvSTG09_reala + 4) % 255;
		for (unsigned int rl = 0; rl < LengthOfArray(uvSTG09_00160A9C); rl++)
		{
			uvSTG09_00160A9C[rl].v = uvSTG09_00160A9C_0[rl].v + carduvSTG09_reala;
		}
	}
}