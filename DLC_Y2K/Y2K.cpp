#include "stdafx.h"
#include <SADXModLoader.h>
#include "Y2KRing.h"

FunctionPointer(void, sub_62E980, (), 0x62E980);
FunctionPointer(void, sub_4B79C0, (char *a1, int a2), 0x4B79C0);
FunctionPointer(void, sub_413CB0, (), 0x413CB0);
FunctionPointer(void, sub_425800, (int a1), 0x425800);
FunctionPointer(signed int, sub_4570B0, (), 0x4570B0);
FunctionPointer(NJS_OBJECT*, sub_49D6C0, (NJS_OBJECT *a1, ObjectMaster *a2, ColFlags surfaceFlags), 0x49D6C0);

HMODULE ADV00MODELS = GetModuleHandle(L"ADV00MODELS");

HMODULE SONICADV_000 = GetModuleHandle(L"SONICADV_000");
HMODULE SONICADV_001 = GetModuleHandle(L"SONICADV_001");
HMODULE SONICADV_002 = GetModuleHandle(L"SONICADV_002");
HMODULE SONICADV_003 = GetModuleHandle(L"SONICADV_003");
HMODULE SONICADV_501 = GetModuleHandle(L"SONICADV_501");
HMODULE SONICADV_502 = GetModuleHandle(L"SONICADV_502");
HMODULE SONICADV_503 = GetModuleHandle(L"SONICADV_503");
HMODULE SONICADV_504 = GetModuleHandle(L"SONICADV_504");
HMODULE SONICADV_505 = GetModuleHandle(L"SONICADV_505");
HMODULE SONICADV_506 = GetModuleHandle(L"SONICADV_506");
HMODULE SONICADV_507 = GetModuleHandle(L"SONICADV_507");
HMODULE SONICADV_508 = GetModuleHandle(L"SONICADV_508");
HMODULE SONICADV_509 = GetModuleHandle(L"SONICADV_509");
HMODULE SONICADV_510 = GetModuleHandle(L"SONICADV_510");
HMODULE SONICADV_511 = GetModuleHandle(L"SONICADV_511");

DataPointer(int, DroppedFrames, 0x03B1117C);
DataPointer(int, FramerateSetting, 0x0389D7DC);

static bool SonicCDMusic = false;
static bool ModFailsafe = false;
static bool ObjectsLoaded = false;
static int HintTimer = 0;
static int PreviousLevel = 0;
static int PreviousAct = 0;

SETObjData setdata_dlc = {};

PVMEntry Y2KTextures = { "SONICADV_510", (TexList *)&texlist_y2k };

char *Y2KMessage1[] = {
	"\aTry to find it!\nIt's also in the Action Stage.",
	NULL,
};

char *Y2KMessage2[] = {
	"\aA happy new year in 2K!\nPlease Support Sonic in 2K.",
	NULL,
};

char *Y2KMessage3[] = {
	"\aA happy new year in 2K!\nWish you a good new year!",
	NULL,
};

char *Y2KMessage4[] = {
	"\aA happy new year in 2K!\nSonic runs through 2K!",
	NULL,
};

char *Y2KMessage5[] = {
	"\aA happy new year in 2K!\nTails smiles through 2K!",
	NULL,
};

char *Y2KMessage6[] = {
	"\aA happy new year in 2K!\nKnuckles digs through 2K!",
	NULL,
};

void Poster_Display(ObjectMaster *a1)
{
	Angle v3;
	EntityData1 *v1;
	v1 = a1->Data1;
	v3 = v1->Rotation.y;
	if (!DroppedFrames)
	{
		njSetTexture(&texlist_y2k);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		njRotateY(0, v3+0xC000);
		ProcessModelNode_AB_Wrapper(&poster, 1.0f);
		njPopMatrix(1u);
	}
}

void Poster_Main(ObjectMaster *a1)
{
	EntityData1 *v1;
	v1 = a1->Data1;
	if (!(CurrentLevel == 26 && CurrentAct == 1)) 
	{
		if (IsPlayerInsideSphere(&v1->Position, 10))
		{
			if (HintTimer <= 0)
			{
				PlaySound(6, 0, 0, 0);
				if (v1->CharIndex == 0) sub_4B79C0((char *)(&Y2KMessage1), 180);
				if (v1->CharIndex == 1) sub_4B79C0((char *)(&Y2KMessage2), 180);
				if (v1->CharIndex == 2) sub_4B79C0((char *)(&Y2KMessage3), 180);
				if (v1->CharIndex == 3) sub_4B79C0((char *)(&Y2KMessage4), 180);
				if (v1->CharIndex == 4) sub_4B79C0((char *)(&Y2KMessage5), 180);
				if (v1->CharIndex == 5) sub_4B79C0((char *)(&Y2KMessage6), 180);
				HintTimer = 120;
			}
		}
		Poster_Display(a1);
	}
}

void Y2KPoster_Load(ObjectMaster *a1)
{
	a1->DeleteSub = DeleteObject_DynamicCOL;
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Poster_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))Poster_Display;
}

void Y2KRing_Display(ObjectMaster *a1)
{
	EntityData1 *v1;
	Angle v2;
	Angle v3;
	Angle v4;
	v1 = a1->Data1;
	if (!DroppedFrames)
	{
		njSetTexture(&texlist_y2k);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		njScale(0, 1.0f, 1.0f, 1.0f);
		v2 = v1->Rotation.x;
		v3 = v1->Rotation.y;
		v4 = v1->Rotation.z;
		njRotateXYZ(0, v2, v3, v4);
		ProcessModelNode_AB_Wrapper(&object_00001514, 1.0f);
		njPopMatrix(1u);
	}
}

void Y2KRing_Main(ObjectMaster *a1)
{
	EntityData1 *v1;
	Angle v2;
	Angle v3;
	Angle v4;
	NJS_OBJECT *v5; // eax@2
	v1 = a1->Data1;
	v2 = v1->Rotation.x;
	v3 = v1->Rotation.y;
	v4 = v1->Rotation.z;
	if (v1->CharID == 2) v3 = (v3 + 528) % 65535;
	v1->Rotation.x = v2;
	v1->Rotation.y = v3;
	v1->Rotation.z = v4;
	if (IsPlayerInsideSphere(&v1->Position, 15))
	{
		if (HintTimer <= 0)
		{
			PlaySound(6, 0, 0, 0);
			if (CurrentLevel == 26) sub_4B79C0((char *)(&Y2KMessage1), 180); else sub_4B79C0((char *)(&Y2KMessage2), 180);
			if (SonicCDMusic == false)
			{
				StopMusic();
				sub_425800(MusicIDs_PalmtreePanic);
				SonicCDMusic = true;
				if (CurrentLevel == 26) WriteData((char*)0x0062EEF9, MusicIDs_PalmtreePanic, 1);
			}
			HintTimer = 120;
		}
	}
	Y2KRing_Display(a1);
}

void Y2KRing_Load(ObjectMaster *a1)
{
	EntityData1* v1;
	NJS_OBJECT* v5;
	v1 = a1->Data1;
		v5 = sub_49D6C0(&object_00001514, a1, (ColFlags)0x20001001);
		v5->scl[0] = 1.0f;
		v5->scl[1] = 1.0f;
		v5->scl[2] = 1.0f;
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Y2KRing_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))Y2KRing_Display;
	a1->DeleteSub = DeleteObject_DynamicCOL;
}

void LoadY2KRings_StationSquare(ObjectMaster *a1)
{
	sub_62E980();
	ObjectMaster *obj;
	EntityData1 *ent;
	ObjectFunc(OF0, Y2KRing_Load);
	ObjectFunc(OF1, Y2KPoster_Load);
	setdata_dlc.Distance = 612800.0f;
	//Station Square
	if (ObjectsLoaded == false)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 103;
			ent->Position.y = 20;
			ent->Position.z = 1436;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x127D;
			ent->Rotation.z = 0;
		}
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 87;
			ent->Position.y = 30.0f;
			ent->Position.z = 1407;
			ent->Rotation.y = 0x0FA4;
			ent->CharIndex = 3;
		}
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 8;
			ent->Position.y = 30.0f;
			ent->Position.z = 1447;
			ent->Rotation.y = 0x0FA4;
			ent->CharIndex = 4;
		}
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -32;
			ent->Position.y = 30.0f;
			ent->Position.z = 1467;
			ent->Rotation.y = 0x0FA4;
			ent->CharIndex = 5;
		}
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 126;
			ent->Position.y = 30.0f;
			ent->Position.z = 1388;
			ent->Rotation.y = 0x0FA4;
			ent->CharIndex = 2;
		}
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 27;
			ent->Position.y = 67;
			ent->Position.z = 1386;
			ent->Rotation.y = 0x0FA4;
			ent->CharIndex = 1;
		}
		ObjectsLoaded = true;
	}
}

void LoadY2KRings()
{
	ObjectMaster *obj;
	EntityData1 *ent;
	ObjectFunc(OF0, Y2KRing_Load);
	ObjectFunc(OF1, Y2KPoster_Load);
	setdata_dlc.Distance = 612800.0f;
	//Emerald Coast Act 1
	if (CurrentLevel == 1 && CurrentAct == 0)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -641;
			ent->Position.y = 130.0f;
			ent->Position.z = 1209;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->CharID = 2;
		}
	}
	//Emerald Coast Act 2
	if (CurrentLevel == 1 && CurrentAct == 1)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 1004;
			ent->Position.y = 515;
			ent->Position.z = -900;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->CharID = 2;
		}
	}
	//Emerald Coast Act 3
	if (CurrentLevel == 1 && CurrentAct == 2)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 5534;
			ent->Position.y = 22;
			ent->Position.z = 1070;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->CharID = 2;
		}
	}
	//Windy Valley Act 1 (Sonic)
	if (CurrentLevel == 2 && CurrentAct == 0 && CurrentCharacter == 0)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 3054;
			ent->Position.y = -482.0f;
			ent->Position.z = -1143;
			ent->Rotation.x = 0xC000;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->CharID = 1;
		}
	}
	//Windy Valley Act 1 (Gamma)
	if (CurrentLevel == 2 && CurrentAct == 0 && CurrentCharacter == 6)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 630;
			ent->Position.y = -125;
			ent->Position.z = 250;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->CharID = 2;
		}
	}
	//Windy Valley Act 2
	if (CurrentLevel == 2 && CurrentAct == 1)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 90;
			ent->Position.y = 714;
			ent->Position.z = 7;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0xC7D2;
			ent->Rotation.z = 0;
			ent->CharID = 0;
		}
	}
	//Windy Valley Act 3
	if (CurrentLevel == 2 && CurrentAct == 2)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 4883;
			ent->Position.y = -4030;
			ent->Position.z = -2129;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->CharID = 2;
		}
	}
	//Twinkle Park Act 1
	if (CurrentLevel == 3 && CurrentAct == 0)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -1998;
			ent->Position.y = 1821;
			ent->Position.z = -388;
			ent->Rotation.x = 0x4000;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->CharID = 1;
		}
	}
	//Twinkle Park Act 2
	if (CurrentLevel == 3 && CurrentAct == 1)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 210;
			ent->Position.y = -116;
			ent->Position.z = -715;
			ent->Rotation.x = 0xC000;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->CharID = 1;
		}
	}
	//Twinkle Park Act 3
	if (CurrentLevel == 3 && CurrentAct == 2)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -145;
			ent->Position.y = 12;
			ent->Position.z = -270;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0xC000;
			ent->Rotation.z = 0;
			ent->CharID = 0;
		}
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -15;
			ent->Position.y = 12;
			ent->Position.z = -270;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0xC000;
			ent->Rotation.z = 0;
			ent->CharID = 0;
		}
	}
	//Speed Highway Act 1
	if (CurrentLevel == 4 && CurrentAct == 0)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 7042;
			ent->Position.y = -1985;
			ent->Position.z = 5915;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0xC000;
			ent->Rotation.z = 0;
			ent->CharID = 2;
		}
	}
	//Speed Highway Act 2
	if (CurrentLevel == 4 && CurrentAct == 1)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 160;
			ent->Position.y = -19170;
			ent->Position.z = 80;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->CharID = 2;
		}
	}
	//Speed Highway Act 3
	if (CurrentLevel == 4 && CurrentAct == 2)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -320;
			ent->Position.y = 203;
			ent->Position.z = -1076;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0xC000;
			ent->Rotation.z = 0;
			ent->CharID = 0;
		}
	}
	//Red Mountain Act 1
	if (CurrentLevel == 5 && CurrentAct == 0)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -3395;
			ent->Position.y = 475;
			ent->Position.z = -1152;
			ent->Rotation.x = 0x0888;
			ent->Rotation.y = 0x7DDD;
			ent->Rotation.z = 0;
			ent->CharID = 0;
		}
	}
	//Red Mountain Act 2 (Sonic)
	if (CurrentLevel == 5 && CurrentAct == 1 && CurrentCharacter == 0)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -1011;
			ent->Position.y = 313;
			ent->Position.z = 611;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->CharID = 2;
		}
	}
	//Red Mountain Act 2 (Gamma)
	if (CurrentLevel == 5 && CurrentAct == 1 && CurrentCharacter == 6)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -1750;
			ent->Position.y = 65;
			ent->Position.z = 2576;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->CharID = 2;
		}
	}
	//Red Mountain Act 3
	if (CurrentLevel == 5 && CurrentAct == 2)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -3618;
			ent->Position.y = 1282;
			ent->Position.z = -2079;
			ent->Rotation.x = 0xEFA4;
			ent->Rotation.y = 0xAFA4;
			ent->Rotation.z = 0;
			ent->CharID = 0;
		}
	}
	//Sky Deck Act 1
	if (CurrentLevel == 6 && CurrentAct == 0)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 0;
			ent->Position.y = -323;
			ent->Position.z = 909;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->CharID = 2;
		}
	}
	//Sky Deck Act 2
	if (CurrentLevel == 6 && CurrentAct == 1)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -790;
			ent->Position.y = 117;
			ent->Position.z = -80;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->CharID = 2;
		}
	}
	//Sky Deck Act 3
	if (CurrentLevel == 6 && CurrentAct == 2)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 156;
			ent->Position.y = 292;
			ent->Position.z = -98;
			ent->Rotation.x = 0xC000;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0xC000;
			ent->CharID = 1;
		}
	}
	//Lost World Act 1
	if (CurrentLevel == 7 && CurrentAct == 0)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 80;
			ent->Position.y = -19;
			ent->Position.z = 195;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->CharID = 2;
		}
	}
	//Lost World Act 2 (Sonic)
	if (CurrentLevel == 7 && CurrentAct == 1 && CurrentCharacter == 0)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 540;
			ent->Position.y = 180;
			ent->Position.z = 762;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x8000;
			ent->Rotation.z = 0;
			ent->CharID = 0;
		}
	}
	//Lost World Act 2 (Knuckles)
	if (CurrentLevel == 7 && CurrentAct == 1 && CurrentCharacter == 3)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 7453;
			ent->Position.y = -2192;
			ent->Position.z = 1275;
			ent->Rotation.x = 0x2000;
			ent->Rotation.y = 0x6FA4;
			ent->Rotation.z = 0;
			ent->CharID = 0;
		} 
	}
	//Ice Cap Act 1
	if (CurrentLevel == 8 && CurrentAct == 0)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 915;
			ent->Position.y = -303;
			ent->Position.z = 1557;
			ent->Rotation.x = 0xCFA4;
			ent->Rotation.y = 0x07D2;
			ent->Rotation.z = 0;
			ent->CharID = 1;
		}
	}
	//Ice Cap Act 3
	if (CurrentLevel == 8 && CurrentAct == 2)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -3503;
			ent->Position.y = -23304;
			ent->Position.z = -5649;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->CharID = 2;
		}
	}
	//Ice Cap Act 4
	if (CurrentLevel == 8 && CurrentAct == 3)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 2200;
			ent->Position.y = 176;
			ent->Position.z = -165;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->CharID = 2;
		}
	}
	//Casino Act 1
	if (CurrentLevel == 9 && CurrentAct == 0)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -373;
			ent->Position.y = 135;
			ent->Position.z = -226;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->CharID = 2;
		}
	}
	//Casino Act 2
	if (CurrentLevel == 9 && CurrentAct == 1)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -1483;
			ent->Position.y = -2189;
			ent->Position.z = 1938;
			ent->Rotation.x = 0xFA4F;
			ent->Rotation.y = 0xCAAA;
			ent->Rotation.z = 0x0222;
			ent->CharID = 0;
		}
	}
	//Final Egg Act 1 (Sonic)
	if (CurrentLevel == 10 && CurrentAct == 0 && CurrentCharacter == 0)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 1967;
			ent->Position.y = 166;
			ent->Position.z = 345;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x4000;
			ent->Rotation.z = 0;
			ent->CharID = 0;
		}
	}
	//Final Egg Act 1 (Amy)
	if (CurrentLevel == 10 && CurrentAct == 0 && CurrentCharacter == 5)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 2663;
			ent->Position.y = 5272;
			ent->Position.z = -2095;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0xC000;
			ent->Rotation.z = 0;
			ent->CharID = 0;
		}
	}
	//Final Egg Act 2
	if (CurrentLevel == 10 && CurrentAct == 1)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 1138;
			ent->Position.y = -836;
			ent->Position.z = -1092;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->CharID = 2;
		}
	}
	//Final Egg Act 3
	if (CurrentLevel == 10 && CurrentAct == 2)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 889;
			ent->Position.y = -3167;
			ent->Position.z = -228;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->CharID = 2;
		}
	}
	//Hot Shelter Act 1
	if (CurrentLevel == 12 && CurrentAct == 0)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 750;
			ent->Position.y = 22;
			ent->Position.z = -650;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->CharID = 2;
		}
	}
	//Hot Shelter Act 2
	if (CurrentLevel == 12 && CurrentAct == 1)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 540;
			ent->Position.y = 180;
			ent->Position.z = -2780;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->CharID = 0;
		}
	}
	//Hot Shelter Act 3
	if (CurrentLevel == 12 && CurrentAct == 2)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -52;
			ent->Position.y = 10030;
			ent->Position.z = 3240;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x8000;
			ent->Rotation.z = 0;
			ent->CharID = 0;
		}
	}
}

void LoadY2KRingsHook()
{
	LoadY2KRings();
	sub_4570B0();
}

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init(const char* path, const HelperFunctions& helperFunctions)
	{
		HMODULE SONICADV_000 = GetModuleHandle(L"SONICADV_000");
		HMODULE SONICADV_001 = GetModuleHandle(L"SONICADV_001");
		HMODULE SONICADV_002 = GetModuleHandle(L"SONICADV_002");
		HMODULE SONICADV_003 = GetModuleHandle(L"SONICADV_003");
		HMODULE SONICADV_501 = GetModuleHandle(L"SONICADV_501");
		HMODULE SONICADV_502 = GetModuleHandle(L"SONICADV_502");
		HMODULE SONICADV_503 = GetModuleHandle(L"SONICADV_503");
		HMODULE SONICADV_504 = GetModuleHandle(L"SONICADV_504");
		HMODULE SONICADV_505 = GetModuleHandle(L"SONICADV_505");
		HMODULE SONICADV_506 = GetModuleHandle(L"SONICADV_506");
		HMODULE SONICADV_507 = GetModuleHandle(L"SONICADV_507");
		HMODULE SONICADV_508 = GetModuleHandle(L"SONICADV_508");
		HMODULE SONICADV_509 = GetModuleHandle(L"SONICADV_509");
		HMODULE SONICADV_510 = GetModuleHandle(L"SONICADV_510");
		HMODULE SONICADV_511 = GetModuleHandle(L"SONICADV_511");
		if (SONICADV_000 != nullptr) ModFailsafe = true;
		if (SONICADV_001 != nullptr) ModFailsafe = true;
		if (SONICADV_002 != nullptr) ModFailsafe = true;
		if (SONICADV_003 != nullptr) ModFailsafe = true;
		if (SONICADV_501 != nullptr) ModFailsafe = true;
		if (SONICADV_502 != nullptr) ModFailsafe = true;
		if (SONICADV_503 != nullptr) ModFailsafe = true;
		if (SONICADV_504 != nullptr) ModFailsafe = true;
		if (SONICADV_505 != nullptr) ModFailsafe = true;
		if (SONICADV_506 != nullptr) ModFailsafe = true;
		if (SONICADV_507 != nullptr) ModFailsafe = true;
		if (SONICADV_508 != nullptr) ModFailsafe = true;
		if (SONICADV_509 != nullptr) ModFailsafe = true;
		if (SONICADV_511 != nullptr) ModFailsafe = true;
		if (ModFailsafe == false)
		{
			helperFunctions.RegisterCommonObjectPVM(Y2KTextures);
			WriteCall((void*)0x004147B6, LoadY2KRingsHook);
			WriteCall((void*)0x00415A6D, LoadY2KRingsHook);
			WriteCall((void*)0x0062F098, LoadY2KRings_StationSquare);
			WriteCall((void*)0x0062F102, LoadY2KRings_StationSquare);
		}
	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (ModFailsafe == false && GameState != 16)
		{
			if (HintTimer > 0) HintTimer--;
			if (CurrentLevel != 26)
			{
				ObjectsLoaded = false;
				WriteData((char*)0x0062EEF9, MusicIDs_s_square, 1);
			}
			if (GameState == 6 || GameState == 7 || GameState == 21)
			{
				SonicCDMusic = false;
				ObjectsLoaded = false;
				WriteData((char*)0x0062EEF9, MusicIDs_s_square, 1);
			}
			if (PreviousLevel != CurrentLevel)
			{
				SonicCDMusic = false;
				PreviousLevel = CurrentLevel;
				PreviousAct = CurrentAct;
			}
			if (CurrentLevel != 26 && PreviousAct != CurrentAct)
			{
				SonicCDMusic = false;
				PreviousLevel = CurrentLevel;
				PreviousAct = CurrentAct;
			}
		}
	}
}