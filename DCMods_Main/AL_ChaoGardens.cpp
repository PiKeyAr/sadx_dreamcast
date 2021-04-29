#include "stdafx.h"
#include "AL_MAIN_Messages.h"

NJS_TEXNAME textures_garden00_object[16];
NJS_TEXLIST texlist_garden00_object = {arrayptrandlength(textures_garden00_object)};

NJS_TEXNAME textures_ecgarden[79];
NJS_TEXLIST texlist_ecgarden = { arrayptrandlength(textures_ecgarden) };

NJS_TEXNAME textures_ecgardensky[5];
NJS_TEXLIST texlist_ecgardensky = { arrayptrandlength(textures_ecgardensky) };

NJS_TEXNAME textures_ssgarden[33];
NJS_TEXLIST texlist_ssgarden = { arrayptrandlength(textures_ssgarden) };

NJS_TEXNAME textures_mrgardensky[5];
NJS_TEXLIST texlist_mrgardensky = { arrayptrandlength(textures_mrgardensky) };

NJS_TEXNAME textures_mrgarden[52];
NJS_TEXLIST texlist_mrgarden = { arrayptrandlength(textures_mrgarden) };

NJS_TEXNAME textures_chaorace[69];
NJS_TEXLIST texlist_ChaoRace = { arrayptrandlength(textures_chaorace) };

NJS_TEXNAME textures_chaoraceentry[23];
NJS_TEXLIST texlist_ChaoRaceEntry = { arrayptrandlength(textures_chaoraceentry) };

NJS_OBJECT* ChaoGardenTransporterEffect = nullptr;
NJS_OBJECT* ChaoFruit_Chaonut = nullptr;
NJS_OBJECT* ChaoFruit_Starnut = nullptr;
NJS_OBJECT* ChaoFruit_Hastnut = nullptr;
NJS_OBJECT* ChaoFruit_Lifenut = nullptr;
NJS_OBJECT* ChaoFruit_Normal_25 = nullptr;
NJS_OBJECT* ChaoFruit_Normal_50 = nullptr;
NJS_OBJECT* ChaoFruit_Normal_75 = nullptr;
NJS_OBJECT* ChaoFruit_Normal_Ripe = nullptr;
NJS_OBJECT* ChaoEgg_BlackTwoTone = nullptr;
NJS_OBJECT* ChaoEgg_Normal = nullptr;
NJS_OBJECT* ChaoEgg_Gold = nullptr;
NJS_OBJECT* ChaoEgg_Silver = nullptr;
NJS_OBJECT* ChaoEgg_Broken_BlackTwoTone = nullptr; // The root object of this is egg top (hat), child is bottom
NJS_OBJECT* ChaoEgg_Broken_Normal = nullptr;
NJS_OBJECT* ChaoEgg_Broken_Gold = nullptr;
NJS_OBJECT* ChaoEgg_Broken_Silver = nullptr;
NJS_OBJECT* ChaoTree = nullptr;
NJS_OBJECT* ChaoVMU = nullptr;
NJS_OBJECT ChaoVMUButton = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, NULL, 0.003933f, 4.179999f, 5.605592f, 0, 0, 0, 1, 1, 1, NULL, NULL };
NJS_OBJECT* ChaoGardenSky_MR_Night = nullptr;
NJS_OBJECT* ChaoGardenSky_MR_Day = nullptr;
NJS_OBJECT* ChaoGardenSky_EC_Sky = nullptr;
NJS_OBJECT* ChaoGardenSky_EC_Water = nullptr;

DataArray(int, dword_33B87E0, 0x33B87E0, 4);
DataArray(int, dword_33B87B4, 0x33B87E0, 11);
DataPointer(NJS_CNK_OBJECT, Fruit_Strong, 0x33B9064);
DataPointer(NJS_CNK_OBJECT, Fruit_Tasty, 0x33B9A44);
DataPointer(NJS_CNK_OBJECT, Fruit_Hero, 0x33B9E5C);
DataPointer(NJS_CNK_OBJECT, Fruit_Dark, 0x33BA304);
DataPointer(NJS_CNK_OBJECT, Fruit_Round, 0x33BAC54);
DataPointer(NJS_CNK_OBJECT, Fruit_Triangular, 0x33BB514);
DataPointer(NJS_CNK_OBJECT, Fruit_Square, 0x33BBFF4);
DataPointer(NJS_CNK_OBJECT, Fruit_Heart, 0x33BC574);
DataPointer(NJS_CNK_OBJECT, Fruit_Chao, 0x33BCBC4);
DataPointer(NJS_CNK_OBJECT, SADXHatEyes, 0x35E2BBC);
DataPointer(NJS_CNK_MODEL, SADXChaoEggTop_Model, 0x3601484);
DataPointer(HintText_Entry, ChaoGardenMessages_English_OriginalTextEntry, 0x8811D8);
DataPointer(HintText_Entry*, ChaoGardenMessages_English_OriginalTextEntryPointer, 0x9BF070);
FunctionPointer(void, ChaoStatPanel_Draw, (ObjectMaster *a1), 0x738260);
FunctionPointer(void, ChaoButtonPrompts_Draw, (ObjectMaster *a1), 0x71B210);

SecondaryEntrance BK_SSGardenStartPoint;
static int ecgardenwater = 54;
static int vmuframe = 0;

struct ChaoTreeEntityData1
{
	EntityData1 entity;
	char gap40[4];
	float field_44;
	int field_48;
	char gap4C[156];
	Rotation3 rotation2;
	char gapF4[8];
	void *somechaosavepointerthing;
	NJS_TEXLIST *texlist;
	char gap104[11];
	Uint8 wonjis;
};

FunctionPointer(void, sub_78AC80, (NJS_CNK_MODEL *a1, int a2), 0x78AC80);
FunctionPointer(void, sub_78ABB0, (NJS_CNK_OBJECT *a1, int *a2, float a3), 0x78ABB0);
FunctionPointer(void, RenderSADXChaoEgg_2, (NJS_CNK_OBJECT *a1, int a2), 0x78AF40);
FunctionPointer(char, sub_436210, (int(__cdecl *a1)(int), char a2, char a3), 0x436210);
FunctionPointer(int, sub_72A6C0, (int a1), 0x72A6C0);
FunctionPointer(void, SetChaoLandTableX, (LandTable *geo), 0x43A4C0);
FunctionPointer(void, sub_715700, (int a1), 0x715700);
FunctionPointer(ObjectMaster*, sub_715730, (int a1, int a2), 0x715730);
FunctionPointer(void, sub_745A20, (NJS_TEX*, int), 0x745A20);
FunctionPointer(void, sub_715640, (int a1), 0x715640);
FunctionPointer(void, sub_72C280, (int a1), 0x72C280);
FunctionPointer(void, sub_72C210, (int a1), 0x72C210);
FunctionPointer(void, sub_72C240, (int a1), 0x72C240);
FunctionPointer(void, sub_46C3D0, (ObjectMaster *a1), 0x46C3D0);
FunctionPointer(int, sub_72CC30, (), 0x72CC30);
FunctionPointer(char, sub_72CD70, (), 0x72CD70);
FunctionPointer(int, sub_72CC00, (NJS_TEXLIST *a1, int a2, int a3, int a4), 0x72CC00);
FunctionPointer(int, sub_72CBC0, (), 0x72CBC0);
FunctionPointer(signed int, sub_717160, (), 0x717160);

FunctionPointer(ObjectMaster *, sub_72CB40, (), 0x72CB40);
FunctionPointer(ObjectMaster *, sub_72C4A0, (), 0x72C4A0);
FunctionPointer(ObjectMaster *, sub_72C3A0, (), 0x72C3A0);
FunctionPointer(ObjectMaster *, sub_72C2E0, (), 0x72C2E0);
FunctionPointer(void, sub_7153F0, (), 0x7153F0);
FunctionPointer(NJS_OBJECT*, sub_49D6C0, (NJS_OBJECT *a1, ObjectMaster *a2, ColFlags surfaceFlags), 0x49D6C0);
DataPointer(SecondaryEntrance, ECGardenStartPoint, 0x0339F8E8);
DataPointer(SecondaryEntrance, MRGardenReturnPoint, 0x0339F928);
DataPointer(SecondaryEntrance, SSGardenStartPoint, 0x0339F888);
DataPointer(int, dword_3CDC6B4, 0x3CDC6B4);
DataPointer(NJS_OBJECT, stru_366C124, 0x366C124);
DataArray(CollisionData, NameMachineCollision, 0x033D0B50, 9);
DataPointer(NJS_TEXLIST*, texlist_garden02mr_daytime, 0x03CA6E84);
DataPointer(LandTable*, objLandTableGarden02_Daytime, 0x03CA6E88);
DataPointer(int, dword_3CA6E8C, 0x3CA6E8C);
DataPointer(NJS_TEXLIST*, texlist_garden02mr_evening, 0x03CA6E84);
DataPointer(LandTable*, objLandTableGarden02_Evening, 0x03CA6E88);
DataPointer(NJS_TEXLIST*, texlist_garden02mr_night, 0x03CA6E84);
DataPointer(LandTable*, objLandTableGarden02_Night, 0x03CA6E88);
DataPointer(D3DMATRIX, stru_389D7E8, 0x0389D7E8);
DataPointer(int, dword_3CA6EB8, 0x3CA6EB8);
DataPointer(int, dword_3B2C660, 0x3B2C660);
DataArray(int, off_389D780, 0x389D780, 4);
DataArray(int, off_389D7B8, 0x389D7B8, 4);
DataArray(int, dword_389D7B8, 0x389D7B8, 6);
DataArray(int, dword_389D828, 0x389D828, 13);

// SS garden
ObjectFunc(OF_SS0, 0x00450370); // RING   
ObjectFunc(OF_SS1, 0x007212A0); // TREE   
ObjectFunc(OF_SS2, 0xC918E36); // FLOWER 
ObjectFunc(OF_SS3, 0xC919760); // VMS 
ObjectFunc(OF_SS4, 0x004D4770); // CYLINDER
ObjectFunc(OF_SS5, 0x004D47E0); // CUBE    
ObjectFunc(OF_SS6, 0x004D4700); // SPHERE 
ObjectFunc(OF_SS7, 0xC918FC8); // WARP EC
ObjectFunc(OF_SS8, 0xC919090); // WARP MR
ObjectFunc(OF_SS9, 0x00639380); //  O AR_ELE
ObjectFunc(OF_SS10, 0xCB80760); //  O AR_FUN
ObjectFunc(OF_SS11, 0x0072AB50); //  O AR_DOOR
ObjectFunc(OF_SS12, 0x007A1AA0); // O TIKAL
ObjectFunc(OF_SS13, 0xC9089B0); // GD GRDUND
ObjectFunc(OF_SS14, 0xC9089E2); // GD_WATER
ObjectFunc(OF_SS15, 0xC908A14); // GD ROAD
ObjectFunc(OF_SS16, 0xC908A46); // GD FLY
ObjectFunc(OF_SS17, 0xC908A78); // GD CLIFF
ObjectFunc(OF_SS18, 0x007A1AA0); // O TIKAL
ObjectFunc(OF_SS19, 0xC902DD2); // CAM COLLI
ObjectFunc(OF_SS20, 0x004D4850); // WALL  
ObjectFunc(OF_SS21, 0x007A9C60); // HINT BOX

// MR Garden

void MRGardenSkybox_Display(ObjectMaster *a1)
{
	EntityData1 *v1;
	v1 = a1->Data1;
	DisableFog();
	njSetTexture(&texlist_mrgardensky);
	njPushMatrix(0);
	njTranslate(0, Camera_Data1->Position.x, 0, Camera_Data1->Position.z);
	njScale(0, 1.0f, 1.0f, 1.0f);
	DrawQueueDepthBias = -47000;
	if (GetTimeOfDay() == 0) lateDrawObject(ChaoGardenSky_MR_Day, QueuedModelFlagsB_EnableZWrite, 1.0f);
	else lateDrawObject(ChaoGardenSky_MR_Night, QueuedModelFlagsB_EnableZWrite, 1.0f);
	njPopMatrix(1u);
	DrawQueueDepthBias = 0;
	ToggleStageFog();
}

void MRGardenSkybox_Main(ObjectMaster *a1)
{
	MRGardenSkybox_Display(a1);
}

void MRGardenSkybox_Load(ObjectMaster *a1)
{
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))MRGardenSkybox_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))MRGardenSkybox_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))CheckThingButThenDeleteObject;
}

ObjectFunc(OF_MR0, 0x00450370); // RING   
ObjectFunc(OF_MR4, 0x004D4770); // CYLINDER
ObjectFunc(OF_MR5, 0x004D47E0); // CUBE    
ObjectFunc(OF_MR6, 0x004D47E0); // CUBE    
ObjectFunc(OF_MR18, 0x004D4850); // WALL  
ObjectFunc(OF_MR10, 0xCB80500); // O MR_TOR
ObjectFunc(OF_MR19, MRGardenSkybox_Load);

// EC Garden
ObjectFunc(EC_OF0, 0x00450370); // RING   
ObjectFunc(EC_OF4, 0x004D4770); // CYLINDER
ObjectFunc(EC_OF5, 0x004D47E0); // CUBE    
ObjectFunc(EC_OF6, 0x004D4700); // SPHERE  
ObjectFunc(EC_OF17, 0x004D4850); // WALL  

SETObjData setdata_ssg = {}; // SS
SETObjData setdata = {}; // MR
SETObjData setdata_ec = {}; // EC

void LoadObjects_SS()
{
	ObjectMaster *obj;
	EntityData1 *ent;
	obj = LoadObject((LoadObj)6, 3, OF_SS9); // O AR_ELE
	obj->SETData.SETData = &setdata_ssg;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -0.03f;
		ent->Position.y = 0;
		ent->Position.z = 240.02f;
		ent->Rotation.y = 0x8000;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -198.53f;
		ent->Position.y = 28.2f;
		ent->Position.z = 143.8f;
		ent->Rotation.y = 0xC378;
		ent->Scale.x = -0.1f;
		ent->Scale.y = 41.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -200;
		ent->Position.y = 22.4f;
		ent->Position.z = -154.68f;
		ent->Rotation.y = 0xA79D;
		ent->Scale.y = 63;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 140.1f;
		ent->Position.y = 27.57f;
		ent->Position.z = -115.15f;
		ent->Rotation.x = 0x210;
		ent->Rotation.y = 0x3DB0;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 9;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 159.97f;
		ent->Position.y = 25.57f;
		ent->Position.z = -94.95f;
		ent->Rotation.x = 0x210;
		ent->Rotation.y = 0x3DB0;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 190.26f;
		ent->Position.y = 25.57f;
		ent->Position.z = -82.9f;
		ent->Rotation.x = 0x210;
		ent->Rotation.y = 0x3DB0;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 127.7f;
		ent->Position.y = 28;
		ent->Position.z = -143.78f;
		ent->Rotation.y = 0xFC9F;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -149.99f;
		ent->Position.y = 19.57f;
		ent->Position.z = -68;
		ent->Rotation.x = 0x210;
		ent->Rotation.y = 0x3DB0;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -150.14f;
		ent->Position.y = 24;
		ent->Position.z = -141.14f;
		ent->Rotation.y = 0xD129;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -188.91f;
		ent->Position.y = 19.1f;
		ent->Position.z = 92.19f;
		ent->Rotation.y = 0xC378;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -161.85f;
		ent->Position.y = 19.1f;
		ent->Position.z = 107.06f;
		ent->Rotation.y = 0xC378;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -146.93f;
		ent->Position.y = 19.1f;
		ent->Position.z = 134.07f;
		ent->Rotation.y = 0xC378;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -30.02f;
		ent->Position.y = 13.89f;
		ent->Position.z = 144.73f;
		ent->Rotation.y = 0xD597;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 16.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -149.4f;
		ent->Position.y = 1.4f;
		ent->Position.z = -104.45f;
		ent->Rotation.y = 0x4D39;
		ent->Scale.x = -6.6f;
		ent->Scale.y = -2.8f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -113.24f;
		ent->Position.y = 19.57f;
		ent->Position.z = -104.18f;
		ent->Rotation.x = 0x210;
		ent->Rotation.y = 0x3DB0;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -187.18f;
		ent->Position.y = 20;
		ent->Position.z = -103.74f;
		ent->Rotation.y = 0xFC9F;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -30;
		ent->Position.y = 17.89f;
		ent->Position.z = -155.12f;
		ent->Rotation.y = 0xD597;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 199.05f;
		ent->Position.y = 37.55f;
		ent->Position.z = -154.36f;
		ent->Rotation.y = 0x1F94;
		ent->Scale.x = -0.1f;
		ent->Scale.y = 30.4f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 2, OF_SS21); // HINT BOX
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -82.32f;
		ent->Position.y = 20;
		ent->Position.z = -46.21f;
		ent->Rotation.y = 0x63ED;
		ent->Scale.x = 40;
		ent->Scale.y = 10;
		ent->Scale.z = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 197.89f;
		ent->Position.y = 32.56f;
		ent->Position.z = 141.83f;
		ent->Rotation.y = 0xD9A;
		ent->Scale.x = -0.1f;
		ent->Scale.y = 40.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -150.39f;
		ent->Position.y = -1.6f;
		ent->Position.z = -104.29f;
		ent->Rotation.y = 0x4D39;
		ent->Scale.x = -2.6f;
		ent->Scale.y = -2.8f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 29.32f;
		ent->Position.y = 17.89f;
		ent->Position.z = -154.32f;
		ent->Rotation.y = 0xD597;
		ent->Scale.x = -5.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 25.32f;
		ent->Position.y = 17.89f;
		ent->Position.z = -154.32f;
		ent->Rotation.y = 0xD597;
		ent->Scale.x = -5.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -27.68f;
		ent->Position.y = 17.89f;
		ent->Position.z = -156.32f;
		ent->Rotation.y = 0xD597;
		ent->Scale.x = -5.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 2, OF_SS12); // O TIKAL
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 3.33f;
		ent->Position.y = -11;
		ent->Position.z = 94.38f;
		ent->Rotation.y = 0xC3ED;
	}
	obj = LoadObject((LoadObj)2, 2, OF_SS12); // O TIKAL
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -174.97f;
		ent->Position.y = -6;
		ent->Position.z = 126.1f;
		ent->Rotation.y = 0xC3ED;
		ent->Scale.z = 1;
	}
	obj = LoadObject((LoadObj)2, 2, OF_SS12); // O TIKAL
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 105.04f;
		ent->Position.y = -6;
		ent->Position.z = 48.67f;
		ent->Rotation.y = 0xC3ED;
		ent->Scale.z = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 30.04f;
		ent->Position.y = 13.89f;
		ent->Position.z = 144.99f;
		ent->Rotation.y = 0xD597;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 16.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 10.14f;
		ent->Position.y = 12.89f;
		ent->Position.z = 260.46f;
		ent->Rotation.y = 0xD597;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 2;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -9.86f;
		ent->Position.y = 12.89f;
		ent->Position.z = 260.46f;
		ent->Rotation.y = 0xD597;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 2;
		ent->Scale.z = -2;
	}
}
void LoadObjects_MR()
{
	ObjectMaster *obj;
	EntityData1 *ent;
	setdata.Distance = 900000.0f;
	//Skybox
	obj = LoadObject((LoadObj)2, 3, OF_MR19);
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 0;
		ent->Position.y = 0;
		ent->Position.z = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF_MR0); // RING   
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -166.84f;
		ent->Position.y = -102.76f;
		ent->Position.z = -727.39f;
		ent->Rotation.y = 0xDFE5;
		ent->Rotation.z = 0x14FD;
	}
	obj = LoadObject((LoadObj)2, 3, OF_MR4); // CYLINDER
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -59.70407f;
		ent->Position.y = 18.73046f;
		ent->Position.z = 27.76984f;
		ent->Rotation.y = 0x7B9B;
		ent->Scale.x = 12;
		ent->Scale.y = 10;
	}
	obj = LoadObject((LoadObj)2, 3, OF_MR5); // CUBE    
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -42.037f;
		ent->Position.y = 31.1112f;
		ent->Position.z = -123.4606f;
		ent->Rotation.x = 0xFFEE;
		ent->Rotation.y = 0xC24E;
		ent->Rotation.z = 0xFFF1;
		ent->Scale.x = 8;
		ent->Scale.y = 3;
		ent->Scale.z = 16;
	}
}
void LoadObjects_EC()
{
	ObjectMaster *obj;
	EntityData1 *ent;
	setdata_ec.Distance = 900000.0f;
	obj = LoadObject((LoadObj)2, 2, EC_OF17); // WALL  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -345.67f;
		ent->Position.y = 127.82f;
		ent->Position.z = -71.72f;
		ent->Rotation.x = 0xFFB1;
		ent->Rotation.y = 0x4000;
		ent->Rotation.z = 0xFFF9;
		ent->Scale.x = 700;
		ent->Scale.y = 400;
	}
	obj = LoadObject((LoadObj)2, 2, EC_OF17); // WALL  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 390.2f;
		ent->Position.y = 127.82f;
		ent->Position.z = -7.15f;
		ent->Rotation.x = 0xFFB1;
		ent->Rotation.y = 0xC000;
		ent->Rotation.z = 0xFFF9;
		ent->Scale.x = 700;
		ent->Scale.y = 400;
	}
	obj = LoadObject((LoadObj)2, 2, EC_OF17); // WALL  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -37.11f;
		ent->Position.y = 127.82f;
		ent->Position.z = 317.58f;
		ent->Rotation.x = 0xFFB1;
		ent->Rotation.y = 0x8000;
		ent->Rotation.z = 0xFFF9;
		ent->Scale.x = 700;
		ent->Scale.y = 400;
	}
	obj = LoadObject((LoadObj)2, 2, EC_OF17); // WALL  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -95.87f;
		ent->Position.y = 131.76f;
		ent->Position.z = -412.96f;
		ent->Rotation.x = 0xF998;
		ent->Rotation.z = 0x39;
		ent->Scale.x = 700;
		ent->Scale.y = 400;
	}
	obj = LoadObject((LoadObj)2, 2, EC_OF17); // WALL  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 346.28f;
		ent->Position.y = 143.29f;
		ent->Position.z = -368.84f;
		ent->Rotation.x = 0xEFE2;
		ent->Rotation.y = 0xE000;
		ent->Rotation.z = 0xF645;
		ent->Scale.x = 100;
		ent->Scale.y = 400;
	}
	obj = LoadObject((LoadObj)2, 2, EC_OF17); // WALL  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -739.39f;
		ent->Position.y = 173.29f;
		ent->Position.z = 582.25f;
		ent->Rotation.x = 0xEFE2;
		ent->Rotation.y = 0xE000;
		ent->Rotation.z = 0xF645;
		ent->Scale.x = 100;
		ent->Scale.y = 400;
	}
	obj = LoadObject((LoadObj)2, 2, EC_OF17); // WALL  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -310.78f;
		ent->Position.y = 123.49f;
		ent->Position.z = 307.03f;
		ent->Rotation.x = 0x2F;
		ent->Rotation.y = 0x6000;
		ent->Rotation.z = 0xD;
		ent->Scale.x = 100;
		ent->Scale.y = 400;
	}
	obj = LoadObject((LoadObj)2, 2, EC_OF17); // WALL  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 282.64f;
		ent->Position.y = 125.94f;
		ent->Position.z = 195.99f;
		ent->Rotation.x = 3;
		ent->Rotation.y = 0xA000;
		ent->Rotation.z = 0xFFFB;
		ent->Scale.x = 200;
		ent->Scale.y = 400;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF5); // CUBE    
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 7.41f;
		ent->Position.y = 37.28f;
		ent->Position.z = -95.28f;
		ent->Rotation.x = 0xFDB2;
		ent->Rotation.y = 0xC84B;
		ent->Rotation.z = 0xF2A3;
		ent->Scale.x = 0.2f;
		ent->Scale.y = 11;
		ent->Scale.z = 16;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 4.5f;
		ent->Position.y = -17.51f;
		ent->Position.z = 291.97f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 6.21f;
		ent->Position.y = -2.51f;
		ent->Position.z = 271.61f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 28;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 12.55f;
		ent->Position.y = -17.51f;
		ent->Position.z = 254.17f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 24.08f;
		ent->Position.y = -17.51f;
		ent->Position.z = 263.49f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 25.72f;
		ent->Position.y = -17.51f;
		ent->Position.z = 282.83f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -11.31f;
		ent->Position.y = -14.51f;
		ent->Position.z = 277.56f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -26.82f;
		ent->Position.y = -34.51f;
		ent->Position.z = 264.2f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -16;
		ent->Position.y = -45.51f;
		ent->Position.z = 284.2f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 0.48f;
		ent->Position.y = -45.51f;
		ent->Position.z = 303.39f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 28.48f;
		ent->Position.y = -45.51f;
		ent->Position.z = 301.81f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 41.81f;
		ent->Position.y = -45.51f;
		ent->Position.z = 287.06f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 24.55f;
		ent->Position.y = -45.51f;
		ent->Position.z = 257.45f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -27.11f;
		ent->Position.y = -10.44f;
		ent->Position.z = 246.73f;
		ent->Rotation.x = 0x2F;
		ent->Rotation.y = 0x310A;
		ent->Rotation.z = 0xC;
		ent->Scale.x = 10;
		ent->Scale.y = 9;
		ent->Scale.z = 25;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -2.56f;
		ent->Position.y = 15.56f;
		ent->Position.z = 252.81f;
		ent->Rotation.x = 0x2F;
		ent->Rotation.y = 0x310A;
		ent->Rotation.z = 0xC;
		ent->Scale.x = 10;
		ent->Scale.y = 9;
		ent->Scale.z = 25;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -5.66f;
		ent->Position.y = 1.56f;
		ent->Position.z = 244.57f;
		ent->Rotation.x = 0x2F;
		ent->Rotation.y = 0x310A;
		ent->Rotation.z = 0xC;
		ent->Scale.x = 10;
		ent->Scale.y = 9;
		ent->Scale.z = 25;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -11.54f;
		ent->Position.y = -18.44f;
		ent->Position.z = 237.08f;
		ent->Rotation.x = 0x2F;
		ent->Rotation.y = 0x310A;
		ent->Rotation.z = 0xC;
		ent->Scale.x = 10;
		ent->Scale.y = 9;
		ent->Scale.z = 25;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -1.48f;
		ent->Position.y = -39.44f;
		ent->Position.z = 236.55f;
		ent->Rotation.x = 0x2F;
		ent->Rotation.y = 0x310A;
		ent->Rotation.z = 0xC;
		ent->Scale.x = 10;
		ent->Scale.y = 9;
		ent->Scale.z = 25;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -23.27f;
		ent->Position.y = -39.44f;
		ent->Position.z = 242.14f;
		ent->Rotation.x = 0x2F;
		ent->Rotation.y = 0x310A;
		ent->Rotation.z = 0xC;
		ent->Scale.x = 10;
		ent->Scale.y = 9;
		ent->Scale.z = 25;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF5); // CUBE    
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -11.23f;
		ent->Position.y = 5.56f;
		ent->Position.z = 270.19f;
		ent->Rotation.x = 0x2F;
		ent->Rotation.y = 0x310A;
		ent->Rotation.z = 0xC;
		ent->Scale.x = 4;
		ent->Scale.y = 20;
		ent->Scale.z = 25;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF4); // CYLINDER
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -61.47f;
		ent->Position.y = 68.49f;
		ent->Position.z = 7.38f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x292A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 35;
		ent->Scale.y = 30;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF4); // CYLINDER
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -329.24f;
		ent->Position.y = -10.51f;
		ent->Position.z = 291.29f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x292A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 70;
		ent->Scale.y = 53;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF4); // CYLINDER
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 233.22f;
		ent->Position.y = -25.39f;
		ent->Position.z = -188.52f;
		ent->Rotation.x = 0xFB2F;
		ent->Rotation.y = 0x3D61;
		ent->Rotation.z = 0xFDEC;
		ent->Scale.x = 55;
		ent->Scale.y = 30;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF4); // CYLINDER
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 288.51f;
		ent->Position.y = -4.39f;
		ent->Position.z = -211.6f;
		ent->Rotation.x = 0xFB2F;
		ent->Rotation.y = 0x3D61;
		ent->Rotation.z = 0xFDEC;
		ent->Scale.x = 45;
		ent->Scale.y = 53;
	}
}

// Chao Name Machine load function
void __cdecl ChaoNameMachineCollision(ObjectMaster *obj, CollisionData *collisionArray, int count, unsigned __int8 list)
{
	Collision_Init(obj, collisionArray, count, list);
	EntityData1* v1 = obj->Data1;
	NJS_OBJECT* v5 = DynamicCOL_AddFromEntity(ChaoVMU, obj, (ColFlags)0x20001001);
	v5->scl[0] = 1.0f;
	v5->scl[1] = 1.0f;
	v5->scl[2] = 1.0f;
}

// MR Garden DLL functions
void __cdecl sub_72A790()
{
	HMODULE handle = GetModuleHandle(L"CHAOSTGGARDEN02MR_DAYTIME");
	PrintDebug("547369736F626C7961646920736F736E6F6F6C6579\n");
	dword_3CA6E8C = (int)GetProcAddress(handle, "stg_garden02_mr_objects");
	texlist_garden02mr_daytime = (NJS_TEXLIST *)&texlist_mrgarden;
	objLandTableGarden02_Daytime = AL_GARDEN02_Info->getlandtable();
}

void __cdecl sub_72A820()
{
	HMODULE handle = GetModuleHandle(L"CHAOSTGGARDEN02MR_EVENING");
	PrintDebug("ChaoStgGarden02MR_Evening _prolog\n");
	dword_3CA6E8C = (int)GetProcAddress(handle, "stg_garden02_mr_objects");
	texlist_garden02mr_evening = (NJS_TEXLIST *)&texlist_mrgarden;
	objLandTableGarden02_Evening = AL_GARDEN02_Info->getlandtable();
}

void __cdecl sub_72A8B0()
{
	HMODULE handle = GetModuleHandle(L"CHAOSTGGARDEN02MR_NIGHT");
	PrintDebug("ChaoStgGarden02MR_Night _prolog\n");
	dword_3CA6E8C = (int)GetProcAddress(handle, "stg_garden02_mr_objects");
	texlist_garden02mr_night = (NJS_TEXLIST *)&texlist_mrgarden;
	objLandTableGarden02_Night = AL_GARDEN02_Info->getlandtable();
}

void RenderSA1ChaoFruits_Object(NJS_CNK_OBJECT *a1)
{
	if (a1 == &Fruit_Chao)
	{
		njSetTexture(&CHAO_OBJECT_TEXLIST);
		njTranslate(0, 0, 0, 0);
		njScale(0, 0.7f, 0.7f, 0.7f);
		dsDrawObject(ChaoFruit_Chaonut); // Chaonut
	}
	else if (a1 == &Fruit_Hero)
	{
		njSetTexture(&CHAO_OBJECT_TEXLIST);
		njTranslate(0, 0, 1.0f, 0);
		njScale(0, 0.7f, 0.7f, 0.7f);
		dsDrawObject(ChaoFruit_Starnut); // Starnut
	}
	else if (a1 == &Fruit_Dark)
	{
		njSetTexture(&CHAO_OBJECT_TEXLIST);
		njTranslate(0, 0, 0, 0);
		njScale(0, 0.7f, 0.7f, 0.7f);
		dsDrawObject(ChaoFruit_Hastnut); // Hastnut
	}
	else if (a1 == &Fruit_Heart)
	{
		njSetTexture(&CHAO_OBJECT_TEXLIST);
		njTranslate(0, 0, 0, 0);
		njScale(0, 0.7f, 0.7f, 0.7f);
		dsDrawObject(ChaoFruit_Lifenut); // Lifenut
	}
	else
	{
		njSetTexture(&AL_OBJECT_TEXLIST);
		njCnkDrawObject(a1);
	}
}

void RenderSA1ChaoFruits_Model(NJS_CNK_MODEL *a1)
{
	if (a1 == Fruit_Chao.chunkmodel)
	{
		njSetTexture(&CHAO_OBJECT_TEXLIST);
		njTranslate(0, 0, 0, 0);
		njScale(0, 0.5f, 0.5f, 0.5f);
		dsDrawObject(ChaoFruit_Chaonut); // Chaonut
	}
	else if (a1 == Fruit_Hero.chunkmodel)
	{
		njSetTexture(&CHAO_OBJECT_TEXLIST);
		njTranslate(0, 0, 0, 0);
		njScale(0, 0.5f, 0.5f, 0.5f);
		dsDrawObject(ChaoFruit_Starnut); // Starnut
	}
	else if (a1 == Fruit_Dark.chunkmodel)
	{
		njSetTexture(&CHAO_OBJECT_TEXLIST);
		njTranslate(0, 0, 0, 0);
		njScale(0, 0.5f, 0.5f, 0.5f);
		dsDrawObject(ChaoFruit_Hastnut); // Hastnut
	}
	else if (a1 == Fruit_Heart.chunkmodel)
	{
		njSetTexture(&CHAO_OBJECT_TEXLIST);
		njTranslate(0, 0, 0, 0);
		njScale(0, 0.5f, 0.5f, 0.5f);
		dsDrawObject(ChaoFruit_Lifenut); // Lifenut
	}
	else
	{
		njSetTexture(&AL_OBJECT_TEXLIST);
		DrawCnkModel(a1);
	}
}

void RenderSA1ChaoFruits_Model_BlackMarket(NJS_CNK_MODEL *a1)
{
	if (a1 == Fruit_Chao.chunkmodel)
	{
		njSetTexture(&CHAO_OBJECT_TEXLIST);
		njTranslate(0, 0, -0.7f, 0);
		njScale(0, 0.5f, 0.5f, 0.5f);
		dsDrawObject(ChaoFruit_Chaonut); // Chaonut
	}
	else if (a1 == Fruit_Hero.chunkmodel)
	{
		njSetTexture(&CHAO_OBJECT_TEXLIST);
		njTranslate(0, 0, 0.5f, 0);
		njScale(0, 0.6f, 0.6f, 0.6f);
		dsDrawObject(ChaoFruit_Starnut); // Starnut
	}
	else if (a1 == Fruit_Dark.chunkmodel)
	{
		njSetTexture(&CHAO_OBJECT_TEXLIST);
		njTranslate(0, 0, -0.3f, 0);
		njScale(0, 0.6f, 0.6f, 0.6f);
		dsDrawObject(ChaoFruit_Hastnut); // Hastnut
	}
	else if (a1 == Fruit_Heart.chunkmodel)
	{
		njSetTexture(&CHAO_OBJECT_TEXLIST);
		njTranslate(0, 0, -0.5f, 0);
		njScale(0, 0.5f, 0.5f, 0.5f);
		dsDrawObject(ChaoFruit_Lifenut); // Lifenut
	}
	else 
	{ 
		njSetTexture(&AL_OBJECT_TEXLIST); 
		DrawCnkModel(a1); 
	}
}

// Garden load functions
void __cdecl LoadSSGardenX()
{
	PrintDebug("ChaoStgGarden00SS Prolog begin\n");
	LoadPVM("OBJ_SS", (NJS_TEXLIST*)0x02AA4BF8);
	LoadPVM("GARDEN00_OBJECT", &GARDEN00_OBJECT_TEXLIST);
	SSGardenStartPoint.Position.x = BK_SSGardenStartPoint.Position.x;
	SSGardenStartPoint.Position.y = BK_SSGardenStartPoint.Position.y;
	SSGardenStartPoint.Position.z = BK_SSGardenStartPoint.Position.z;
	SSGardenStartPoint.YRot = BK_SSGardenStartPoint.YRot;
	LoadObject(LoadObj_Data1, 2, ChaoStgGarden00SS_Load);
	LoadObjects_SS();
	SetChaoLandTable((LandTable*)AL_GARDEN00_Info->getdata("landtable_00011DD4"));
	PrintDebug("ChaoStgGarden00SS Prolog end\n");
}

void __cdecl ECGardenWater_Display(ObjectMaster *a1)
{
	if (!DroppedFrames)
	{
		// Skybox
		DisableFog();
		SetGlobalPoint2Col_Colors(0x000029u, 0x000029u, 0x000029u);
		njSetTexture(&texlist_ecgardensky);
		njPushMatrix(0);
		njTranslate(0, 0, 0, 0);
		njScale(0, 1.0f, 1.0f, 1.0f);
		ds_DrawObjectClip(ChaoGardenSky_EC_Sky, 1.0f);
		njPopMatrix(1u);
		// Water
		njSetTexture((NJS_TEXLIST*)&texlist_ecgarden);
		njPushMatrix(0);
		njTranslate(0, 0, -415.8f, 0);
		late_DrawObjectClip(ChaoGardenSky_EC_Water, QueuedModelFlagsB_3, 1.0f); // Water
		njPopMatrix(1u);
		ToggleStageFog();
	}
}

void __cdecl ECGardenWater_Main(ObjectMaster *a1)
{
	ECGardenWater_Display(a1);
}

void __cdecl ECGardenWater_Load(ObjectMaster *a1)
{
	EntityData1 *v1; // eax@1

	v1 = a1->Data1;
	a1->MainSub = ECGardenWater_Main;
	a1->DisplaySub = ECGardenWater_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl LoadECGardenX()
{
	PrintDebug("ChaoStgGarden01EC Prolog begin\n");
	LoadPVM("GARDEN01_SKY", &texlist_ecgardensky);
	LoadObject(LoadObj_Data1, 2, ChaoStgGarden01EC_Load);
	LoadObject(LoadObj_Data1, 2, ECGardenWater_Load);
	LoadObjects_EC();
	SetChaoLandTable(AL_GARDEN01_Info->getlandtable());
	PrintDebug("ChaoStgGarden01EC Prolog end\n");
}

void __cdecl LoadMRGardenX()
{
	int v0; // eax@1
	int v1; // eax@2
	PrintDebug("ChaoStgGarden02MR Prolog\n");
	LoadObject(LoadObj_Data1, 2, ChaoStgGarden02MR_Load);
	LoadObjects_MR();
	v0 = GetTimeOfDay();
	if (v0)
	{
		v1 = v0 - 1;
		if (!v1)
		{
			LoadPVM("GARDEN_MR_SKY_YUU", &texlist_mrgardensky);
			LoadGameDLL("ChaoStgGarden02MR_Evening", 2);
			ChaoGardenMR_SetLandTable_Evening();
			ModuleDestructors[1] = Print_ChaoStgGarden02MR_Evening_epilog;
			SetChaoLandTable(LandTable_ChaoGardenMR);
			return;
		}
		if (v1 == 1)
		{
			LoadPVM("GARDEN_MR_SKY_YORU", &texlist_mrgardensky);
			LoadGameDLL("ChaoStgGarden02MR_Night", 2);
			ChaoGardenMR_SetLandTable_Night();
			ModuleDestructors[1] = Print_ChaoStgGarden02MR_Night_epilog;
			SetChaoLandTable(LandTable_ChaoGardenMR);
			return;
		}
	}
	LoadPVM("GARDEN_MR_SKY_HIRU", &texlist_mrgardensky);
	LoadGameDLL("ChaoStgGarden02MR_Daytime", 2);
	ChaoGardenMR_SetLandTable_Day();
	ModuleDestructors[1] = Print_ChaoStgGarden02MR_Daytime_epilog;
	SetChaoLandTable(LandTable_ChaoGardenMR);
}

// Elevator
void __cdecl sub_4145D0(unsigned __int8 a1, unsigned __int8 a2)
{
	if (CurrentChaoStage == SADXChaoStage_StationSquare)
	{
		SetLevelEntrance(4);
		sub_715730(26, 4);
		NextLevel = 26;
		NextAct = 4;
		CutsceneMode = 3;
	}
	else
	{
		CutsceneMode = 3;
		NextLevel = a1;
		NextAct = a2;
	}
}

void __cdecl SetElevatorTexlist()
{
	if (CurrentChaoStage == SADXChaoStage_StationSquare)
	{
		njSetTexture((NJS_TEXLIST*)0x02AA4BF8); // OBJ_SS
	}
	else SetTextureToLevelObj();
}

// Name machine
void cdecl NameMachineTexlist()
{
	njSetTexture(&CHAO_OBJECT_TEXLIST);
}

void __cdecl LoadChaoNameMachineX(NJS_VECTOR *position, int yrotation)
{
	EntityData1 *ent; // eax@1
	ent = LoadObject(LoadObj_Data1, 2, Chao_Name_Machine_Load)->Data1;
	switch (CurrentChaoStage)
	{
	case SADXChaoStage_StationSquare:
		ent->Position.x = 178.03f;
		ent->Position.y = 8.56f;
		ent->Position.z = -128.44f;
		ent->Rotation.y = 0xD7B8;
		break;
	case SADXChaoStage_EggCarrier:
		if (EnabledLevels[LevelIDs_ECGarden])
		{
			ent->Position.x = 131.67f;
			ent->Position.y = 2.6f;
			ent->Position.z = -204.28f;
			ent->Rotation.x = 0xFFB0;
			ent->Rotation.y = 0xAFD6;
			ent->Rotation.z = 0xFFDE;
		}
		else
		{
			ent->Position.x = 131.67f;
			ent->Position.y = 0;
			ent->Position.z = -204.28f;
			ent->Rotation.x = 0xFFB0;
			ent->Rotation.y = 0xAFD6;
			ent->Rotation.z = 0xFFDE;
		}
		break;
	case SADXChaoStage_MysticRuins:
		ent->Position.x = 239.4137f;
		ent->Position.y = 15.10273f;
		ent->Position.z = -45.98477f;
		ent->Rotation.x = 0xFFDC;
		ent->Rotation.y = 0xC1A8;
		ent->Rotation.z = 0xFFF2;
		break;
	default:
		break;
	}
}

void RenderChaoNormalFruitWithScale()
{
	njScale(0, 0.7f, 0.7f, 0.7f);
	njSetTexture(&CHAO_OBJECT_TEXLIST);
	dsDrawObject(ChaoFruit_Normal_Ripe);
}

void SetChaoObjectTexlist()
{
	njSetTexture(&CHAO_OBJECT_TEXLIST);
}

void __cdecl RenderChaoTreeWithFruit(ChaoTreeEntityData1 *a1, NJS_OBJECT *a2)
{
	NJS_OBJECT *v2; // edi
	unsigned __int64 v3; // rax
	int v4; // ecx
	float *v5; // ebx
	double v6; // st7
	NJS_VECTOR v; // [esp+Ch] [ebp-Ch]
	float sx; // [esp+20h] [ebp+8h]

	v2 = a2;
	do
	{
		njPushMatrixEx();
		njTranslateV(0, (NJS_VECTOR *)v2->pos);
		njRotateXYZ(0, v2->ang[0], v2->ang[1], v2->ang[2]);
		if (!v2->model)
		{
			v4 = *(_DWORD *)&a1->gap4C[140];
			v5 = (float *)&a1->gap4C[32 * *(_DWORD *)&a1->gap4C[140] + 8];
			v.x = 0.0f;
			v.y = -1.8f;
			v.z = 0.0f;
			sx = *v5;
			if (*v5 <= 1.0f)
			{
				if (sx <= 0.0f)
				{
				LABEL_18:
					++*(_DWORD *)&a1->gap4C[140];
					goto LABEL_19;
				}
			}
			else
			{
				sx = 1.0;
			}
			if (*v5 <= 0.89999998)
			{
				if (!(unsigned int)(unsigned __int64)(njSin(*(_DWORD *)&a1->gap4C[132] + dword_33B87E0[v4])
					* *(float *)&a1->gap4C[136]
					* 0.2
					* 65536.0
					* 0.002777777777777778))
				{
					goto LABEL_15;
				}
				v6 = njSin(*(_DWORD *)&a1->gap4C[132] + dword_33B87E0[*(_DWORD *)&a1->gap4C[140]])
					* *(float *)&a1->gap4C[136]
					* 0.2;
			}
			else
			{
				njPushMatrixEx();
				njGetTranslation(0, (NJS_VECTOR *)v5 + 1);
				njPopMatrixEx();
				if (!(unsigned int)(unsigned __int64)(njSin(*(_DWORD *)&a1->gap4C[132] + dword_33B87E0[*(_DWORD *)&a1->gap4C[140]])
					* *(float *)&a1->gap4C[136]
					* 65536.0
					* 0.002777777777777778))
				{
					goto LABEL_15;
				}
				v6 = njSin(*(_DWORD *)&a1->gap4C[132] + dword_33B87E0[*(_DWORD *)&a1->gap4C[140]]) * *(float *)&a1->gap4C[136];
			}
			njRotateX(0, (unsigned __int16)(unsigned __int64)(v6 * 65536.0 * 0.002777777777777778));
		LABEL_15:
			njScale(0, sx, sx, sx);
			njTranslateEx(&v);
			njSetTexture(&CHAO_OBJECT_TEXLIST);
			if (sx < 0.5f) dsDrawObject(ChaoFruit_Normal_25);
			if (sx >= 0.5f && sx < 0.75f) dsDrawObject(ChaoFruit_Normal_50);
			if (sx >= 0.75f  && sx < 1.0f) dsDrawObject(ChaoFruit_Normal_75);
			if (sx >= 1.0f) dsDrawObject(ChaoFruit_Normal_Ripe);
			goto LABEL_18;
		}
		if ((unsigned int)(unsigned __int64)(njSin(*(_DWORD *)&a1->gap4C[120] + dword_33B87B4[*(_DWORD *)&a1->gap4C[128]])
			* *(float *)&a1->gap4C[124]
			* 65536.0
			* 0.002777777777777778))
		{
			v3 = (unsigned __int64)(njSin(*(_DWORD *)&a1->gap4C[120] + dword_33B87B4[*(_DWORD *)&a1->gap4C[128]])
				* *(float *)&a1->gap4C[124]
				* 65536.0
				* 0.002777777777777778);
			njRotateX(0, (unsigned __int16)v3);
		}
		DrawModel(v2->basicdxmodel);
		++*(_DWORD *)&a1->gap4C[128];
	LABEL_19:
		if (v2->child)
		{
			RenderChaoTreeWithFruit(a1, v2->child);
		}
		njPopMatrixEx();
		v2 = v2->sibling;
	} while (v2);
}

void RenderChaoNormalFruit_Whatever(NJS_MODEL_SADX *a1)
{
	njSetTexture(&CHAO_OBJECT_TEXLIST);
	DrawModel(ChaoFruit_Normal_Ripe->basicdxmodel);
}

void RenderChaoTransporterLabel_Fix(NJS_OBJECT *a1)
{
	DrawQueueDepthBias = -1000.0f;
	lateDrawObject(a1, QueuedModelFlagsB_SomeTextureThing, 1.0f);
	DrawQueueDepthBias = 0;
}

void ChaoEggHook_BlackMarket(NJS_CNK_MODEL *a1, int a2)
{
	// Black/Chakron
	if (a2 == SADXEggColour_Black_TwoTone)
	{
		njSetTexture(&CHAO_TEXLIST);
		dsDrawModel(ChaoEgg_BlackTwoTone->basicdxmodel);
	}
	// Generic egg
	else if (a2 == SADXEggColour_Normal)
	{
		njSetTexture(&CHAO_TEXLIST);
		dsDrawModel(ChaoEgg_Normal->basicdxmodel);
	}
	// Gold egg
	else if (a2 == SADXEggColour_YellowJewel)
	{
		njSetTexture(&CHAO_TEXLIST);
		dsDrawModel(ChaoEgg_Gold->basicdxmodel);
	}
	// Silver egg
	else if (a2 == SADXEggColour_WhiteJewel)
	{
		njSetTexture(&CHAO_TEXLIST);
		dsDrawModel(ChaoEgg_Silver->basicdxmodel);
	}
	else GetChaoHatModel(a1, a2);
}

void __cdecl RenderChaoEgg_DC_1(NJS_CNK_OBJECT *a1, int a2)
{
	NJS_CNK_MODEL *v2; // eax
	if (a1 == &SADXChaoEgg)
	{
		// Black/Chakron
		if (a2 == SADXEggColour_Black_TwoTone)
		{
			njScale(0, 0.9f, 0.9f, 0.9f);
			njSetTexture(&CHAO_TEXLIST);
			lateDrawObject(ChaoEgg_BlackTwoTone, QueuedModelFlagsB_EnableZWrite, 1.0f);
			return;
		}
		// Generic egg
		else if (a2 == SADXEggColour_Normal)
		{
			njScale(0, 0.9f, 0.9f, 0.9f);
			njSetTexture(&CHAO_TEXLIST);
			lateDrawObject(ChaoEgg_Normal, QueuedModelFlagsB_EnableZWrite, 1.0f);
			return;
		}
		// Gold egg
		else if (a2 == SADXEggColour_YellowJewel)
		{
			njScale(0, 0.9f, 0.9f, 0.9f);
			njSetTexture(&CHAO_TEXLIST);
			lateDrawObject(ChaoEgg_Gold, QueuedModelFlagsB_EnableZWrite, 1.0f);
			return;
		}
		// Silver egg
		else if (a2 == SADXEggColour_WhiteJewel)
		{
			njScale(0, 0.9f, 0.9f, 0.9f);
			njSetTexture(&CHAO_TEXLIST);
			lateDrawObject(ChaoEgg_Silver, QueuedModelFlagsB_EnableZWrite, 1.0f);
			return;
		}
		else goto SADXShit;
	}
	if (a1 == &SADXChaoEggBroken)
	{
		// Black/Chakron
		if (a2 == SADXEggColour_Black_TwoTone)
		{
			njScale(0, 0.9f, 0.9f, 0.9f);
			njSetTexture(&CHAO_TEXLIST);
			lateDrawObject(ChaoEgg_Broken_BlackTwoTone, QueuedModelFlagsB_EnableZWrite, 1.0f);
			return;
		}
		// Generic egg
		else if (a2 == SADXEggColour_Normal)
		{
			njScale(0, 0.9f, 0.9f, 0.9f);
			njSetTexture(&CHAO_TEXLIST);
			lateDrawObject(ChaoEgg_Broken_Normal, QueuedModelFlagsB_EnableZWrite, 1.0f);
			return;
		}
		// Gold egg
		else if (a2 == SADXEggColour_YellowJewel)
		{
			njScale(0, 0.9f, 0.9f, 0.9f);
			njSetTexture(&CHAO_TEXLIST);
			lateDrawObject(ChaoEgg_Broken_Gold, QueuedModelFlagsB_EnableZWrite, 1.0f);
			return;
		}
		// Silver egg
		else if (a2 == SADXEggColour_WhiteJewel)
		{
			njScale(0, 0.9f, 0.9f, 0.9f);
			njSetTexture(&CHAO_TEXLIST);
			lateDrawObject(ChaoEgg_Broken_Silver, QueuedModelFlagsB_EnableZWrite, 1.0f);
			return;
		}
		else goto SADXShit;
	}
	if (a1 == &SADXChaoEggBottom)
	{
		// Black/Chakron
		if (a2 == SADXEggColour_Black_TwoTone)
		{
			njScale(0, 0.9f, 0.9f, 0.9f);
			njSetTexture(&CHAO_TEXLIST);
			lateDrawObject(ChaoEgg_Broken_BlackTwoTone->child, QueuedModelFlagsB_EnableZWrite, 1.0f);
			return;
		}
		// Generic egg
		else if (a2 == SADXEggColour_Normal)
		{
			njScale(0, 0.9f, 0.9f, 0.9f);
			njSetTexture(&CHAO_TEXLIST);
			lateDrawObject(ChaoEgg_Broken_Normal->child, QueuedModelFlagsB_EnableZWrite, 1.0f);
			return;
		}
		// Gold egg
		else if (a2 == SADXEggColour_YellowJewel)
		{
			njScale(0, 0.9f, 0.9f, 0.9f);
			njSetTexture(&CHAO_TEXLIST);
			lateDrawObject(ChaoEgg_Broken_Gold->child, QueuedModelFlagsB_EnableZWrite, 1.0f);
			return;
		}
		// Silver egg
		else if (a2 == SADXEggColour_WhiteJewel)
		{
			njScale(0, 0.9f, 0.9f, 0.9f);
			njSetTexture(&CHAO_TEXLIST);
			lateDrawObject(ChaoEgg_Broken_Silver->child, QueuedModelFlagsB_EnableZWrite, 1.0f);
			return;
		}
		else goto SADXShit;
	}
SADXShit:
	v2 = a1->chunkmodel;
	if (v2)
	{
		sub_78AC80(v2, a2);
		njCnkDrawObject(a1);
		SetChunkMaterialFlags(0);
		DisableChunkMaterialFlags();
	}
	else
	{
		njCnkDrawObject(a1);
	}
}

void __cdecl RenderChaoEgg_DC_2(NJS_CNK_OBJECT *a1, int a2, int *a3, float a4)
{
	NJS_CNK_MODEL *v4; // eax
	NJS_CNK_OBJECT *v5; // eax

	if (a1 == &SADXChaoEgg)
	{
		// Black/Chakron
		if (a2 == SADXEggColour_Black_TwoTone)
		{
			njScale(0, 0.9f, 0.9f, 0.9f);
			njSetTexture(&CHAO_TEXLIST);
			lateDrawObject(ChaoEgg_BlackTwoTone, QueuedModelFlagsB_EnableZWrite, 1.0f);
			return;
		}
		// Generic egg
		else if (a2 == SADXEggColour_Normal)
		{
			njScale(0, 0.9f, 0.9f, 0.9f);
			njSetTexture(&CHAO_TEXLIST);
			lateDrawObject(ChaoEgg_Normal, QueuedModelFlagsB_EnableZWrite, 1.0f);
			return;
		}
		// Gold egg
		else if (a2 == SADXEggColour_YellowJewel)
		{
			njScale(0, 0.9f, 0.9f, 0.9f);
			njSetTexture(&CHAO_TEXLIST);
			lateDrawObject(ChaoEgg_Gold, QueuedModelFlagsB_EnableZWrite, 1.0f);
			return;
		}
		// Silver egg
		else if (a2 == SADXEggColour_WhiteJewel)
		{
			njScale(0, 0.9f, 0.9f, 0.9f);
			njSetTexture(&CHAO_TEXLIST);
			lateDrawObject(ChaoEgg_Silver, QueuedModelFlagsB_EnableZWrite, 1.0f);
			return;
		}
		else goto SADXShit;
	}
	if (a1 == &SADXChaoEggBroken)
	{
		// Black/Chakron
		if (a2 == SADXEggColour_Black_TwoTone)
		{
			njScale(0, 0.9f, 0.9f, 0.9f);
			njSetTexture(&CHAO_TEXLIST);
			lateDrawObject(ChaoEgg_Broken_BlackTwoTone, QueuedModelFlagsB_EnableZWrite, 1.0f);
			return;
		}
		// Generic egg
		else if (a2 == SADXEggColour_Normal)
		{
			njScale(0, 0.9f, 0.9f, 0.9f);
			njSetTexture(&CHAO_TEXLIST);
			lateDrawObject(ChaoEgg_Broken_Normal, QueuedModelFlagsB_EnableZWrite, 1.0f);
			return;
		}
		// Gold egg
		else if (a2 == SADXEggColour_YellowJewel)
		{
			njScale(0, 0.9f, 0.9f, 0.9f);
			njSetTexture(&CHAO_TEXLIST);
			lateDrawObject(ChaoEgg_Broken_Gold, QueuedModelFlagsB_EnableZWrite, 1.0f);
			return;
		}
		// Silver egg
		else if (a2 == SADXEggColour_WhiteJewel)
		{
			njScale(0, 0.9f, 0.9f, 0.9f);
			njSetTexture(&CHAO_TEXLIST);
			lateDrawObject(ChaoEgg_Broken_Silver, QueuedModelFlagsB_EnableZWrite, 1.0f);
			return;
		}
		else goto SADXShit;
	}
	if (a1 == &SADXChaoEggBottom)
	{
		// Black/Chakron
		if (a2 == SADXEggColour_Black_TwoTone)
		{
			njScale(0, 0.9f, 0.9f, 0.9f);
			njSetTexture(&CHAO_TEXLIST);
			lateDrawObject(ChaoEgg_Broken_BlackTwoTone->child, QueuedModelFlagsB_EnableZWrite, 1.0f);
			return;
		}
		// Generic egg
		else if (a2 == SADXEggColour_Normal)
		{
			njScale(0, 0.9f, 0.9f, 0.9f);
			njSetTexture(&CHAO_TEXLIST);
			lateDrawObject(ChaoEgg_Broken_Normal->child, QueuedModelFlagsB_EnableZWrite, 1.0f);
			return;
		}
		// Gold egg
		else if (a2 == SADXEggColour_YellowJewel)
		{
			njScale(0, 0.9f, 0.9f, 0.9f);
			njSetTexture(&CHAO_TEXLIST);
			lateDrawObject(ChaoEgg_Broken_Gold->child, QueuedModelFlagsB_EnableZWrite, 1.0f);
			return;
		}
		// Silver egg
		else if (a2 == SADXEggColour_WhiteJewel)
		{
			njScale(0, 0.9f, 0.9f, 0.9f);
			njSetTexture(&CHAO_TEXLIST);
			lateDrawObject(ChaoEgg_Broken_Silver->child, QueuedModelFlagsB_EnableZWrite, 1.0f);
			return;
		}
		else goto SADXShit;
	}
	SADXShit:
	v4 = a1->chunkmodel;
	if (v4 || (v5 = a1->child) != 0 && (v4 = v5->chunkmodel) != 0)
	{
		sub_78AC80(v4, a2);
		sub_78ABB0(a1, a3, a4);
		SetChunkMaterialFlags(0);
		DisableChunkMaterialFlags();
	}
	else
	{
		sub_78ABB0(a1, a3, a4);
	}
}

void RenderChaoHatEyes(NJS_CNK_OBJECT *a1)
{
	njTranslate(0, 0, 0, 0.5f);
	njCnkDrawObject(a1);
	njTranslate(0, 0, 0, -0.5f);
}

void ChaoEggshellHatHook(NJS_CNK_MODEL *a1, int a2)
{
	// Black/Chakron
	if (a2 == SADXEggColour_Black_TwoTone)
	{
		njTranslate(0, 0, -2.5f, 0);
		njScale(0, 0.9f, 0.9f, 0.9f);
		njSetTexture(&CHAO_TEXLIST);
		DrawModel(ChaoEgg_Broken_BlackTwoTone->basicdxmodel);
		njSetTexture(ChaoTexLists);
	}
	// Generic egg
	else if (a2 == SADXEggColour_Normal)
	{
		njTranslate(0, 0, -2.5f, 0);
		njScale(0, 0.9f, 0.9f, 0.9f);
		njSetTexture(&CHAO_TEXLIST);
		DrawModel(ChaoEgg_Broken_Normal->basicdxmodel);
		njSetTexture(ChaoTexLists);
	}
	// Gold egg
	else if (a2 == SADXEggColour_YellowJewel)
	{
		njTranslate(0, 0, -2.5f, 0);
		njScale(0, 0.9f, 0.9f, 0.9f);
		njSetTexture(&CHAO_TEXLIST);
		DrawModel(ChaoEgg_Broken_Gold->basicdxmodel);
		njSetTexture(ChaoTexLists);
	}
	// Silver egg
	else if (a2 == SADXEggColour_WhiteJewel)
	{
		njTranslate(0, 0, -2.5f, 0);
		njScale(0, 0.9f, 0.9f, 0.9f);
		njSetTexture(&CHAO_TEXLIST);
		DrawModel(ChaoEgg_Broken_Silver->basicdxmodel);
		njSetTexture(ChaoTexLists);
	}
	else
	{
		GetChaoHatModel(a1, a2);
	}
}

void ChaoEggshellHatHook_Empty(NJS_CNK_MODEL* a1, int a2)
{
	if (a2 != SADXEggColour_Black_TwoTone && a2 != SADXEggColour_Normal && a2 == SADXEggColour_YellowJewel && a2 == SADXEggColour_WhiteJewel)
	{
		GetChaoHatModel(a1, a2);
	}
}

void ChaoGardenTransporterEffect_Display(ObjectMaster *a2)
{
	EntityData1 *a1 = a2->Data1;
	float a; // ST18_4
	Angle v2; // eax
	float sx; // [esp+0h] [ebp-Ch]
	float sy; // [esp+4h] [ebp-8h]

	sx = a1->Scale.x * 0.69999999f;
	a = a1->Scale.z;
	sy = a1->Scale.y * 4.5f;
	njSetTexture(&CHAO_OBJECT_TEXLIST);
	AddConstantAttr(0, NJD_FLAG_USE_ALPHA);
	njPushMatrix(0);
	SetMaterialAndSpriteColor_Float(a, a, a, a);
	njTranslateV(0, &a1->Position);
	v2 = a1->Rotation.y;
	if ( v2 )
	{
		njRotateY(0, (unsigned __int16)v2);
	}
	njScale(0, sx, sy, sx);
	if ( sx > (double)sy )
	{
		sy = sx;
	}
	DrawQueueDepthBias = 3000.0f;
	DrawModelMesh(ChaoGardenTransporterEffect->basicdxmodel, QueuedModelFlagsB_SomeTextureThing);
	DrawQueueDepthBias = 0;
	njPopMatrix(1u);
	RemoveConstantAttr(0, NJD_FLAG_USE_ALPHA);
	ClampGlobalColorThing_Thing();
}

void __cdecl ChaoGardenTransporterEffect_Main(ObjectMaster *a1)
{
	EntityData1 *v1; // esi
	float v2; // st7
	Angle v3; // ecx
	float v4; // st7
	Angle v5; // edx
	float v6; // st6

	v1 = a1->Data1;
	if ( !v1->Action )
	{
		v2 = v1->Scale.x - 0.0020000001f;
		v3 = v1->Rotation.x;
		v1->Rotation.y += 384;
		v1->Scale.x = v2;
		v4 = njSin(v3);
		v5 = v1->Rotation.x;
		v1->Scale.y = v4;
		v6 = v1->Scale.z - 0.018181818f;
		v1->Rotation.x = v5 + 546;
		v1->Scale.z = v6;
		if ( v5 + 546 >= 0x4000 )
		{
			v1->Position.y = (2.0f - v4) * 9.0f + *(float*)&v1->CharIndex;
		}
		else
		{
			v1->Position.y = v4 * 9.0f + *(float*)&v1->CharIndex;
		}
		ChaoGardenTransporterEffect_Display(a1);
	}
	if ( v1->Rotation.x > 0x8000 )
	{
		CheckThingButThenDeleteObject(a1);
	}
}

void __cdecl ChaoGardenTransporterEffect_Load(ObjectMaster *a1)
{
	EntityData1 *v1; // eax

	v1 = a1->Data1;
	v1->Scale.x = 1.0f;
	v1->Scale.y = 0.0f;
	v1->Scale.z = 0.0f;
	v1->Rotation.x = 0;
	v1->Rotation.z = 0;
	a1->MainSub = ChaoGardenTransporterEffect_Main;
	a1->DeleteSub = (void (__cdecl *)(ObjectMaster *))nullsub;
	a1->DisplaySub = ChaoGardenTransporterEffect_Display;
}

void LoadChaoGardenHintMessages()
{
	WriteData((HintText_Entry**)0x9BF06C, (HintText_Entry*)&ChaoGardenMessages_Japanese);
	WriteData((HintText_Entry**)0x9BF080, (HintText_Entry*)&ChaoGardenMessages_Japanese);
	WriteData((HintText_Entry**)0x9BF094, (HintText_Entry*)&ChaoGardenMessages_Japanese);
	WriteData((HintText_Entry**)0x9BF0A8, (HintText_Entry*)&ChaoGardenMessages_Japanese);
	if (ChaoGardenMessages_English_OriginalTextEntryPointer == &ChaoGardenMessages_English_OriginalTextEntry) // Check for translation mods
	{
		WriteData((HintText_Entry **)0x9BF070, (HintText_Entry*)&ChaoGardenMessages_English);
		WriteData((HintText_Entry **)0x9BF084, (HintText_Entry*)&ChaoGardenMessages_English);
		WriteData((HintText_Entry **)0x9BF098, (HintText_Entry*)&ChaoGardenMessages_English);
		WriteData((HintText_Entry **)0x9BF0AC, (HintText_Entry*)&ChaoGardenMessages_English);
	}
	WriteData((HintText_Entry**)0x9BF074, (HintText_Entry*)&ChaoGardenMessages_French);
	WriteData((HintText_Entry**)0x9BF088, (HintText_Entry*)&ChaoGardenMessages_French);
	WriteData((HintText_Entry**)0x9BF09C, (HintText_Entry*)&ChaoGardenMessages_French);
	WriteData((HintText_Entry**)0x9BF0B0, (HintText_Entry*)&ChaoGardenMessages_French);

	WriteData((HintText_Entry**)0x9BF078, (HintText_Entry*)&ChaoGardenMessages_Spanish);
	WriteData((HintText_Entry**)0x9BF08C, (HintText_Entry*)&ChaoGardenMessages_Spanish);
	WriteData((HintText_Entry**)0x9BF0A0, (HintText_Entry*)&ChaoGardenMessages_Spanish);
	WriteData((HintText_Entry**)0x9BF0B4, (HintText_Entry*)&ChaoGardenMessages_Spanish);

	WriteData((HintText_Entry**)0x9BF07C, (HintText_Entry*)&ChaoGardenMessages_German);
	WriteData((HintText_Entry**)0x9BF090, (HintText_Entry*)&ChaoGardenMessages_German);
	WriteData((HintText_Entry**)0x9BF0A4, (HintText_Entry*)&ChaoGardenMessages_German);
	WriteData((HintText_Entry**)0x9BF0B8, (HintText_Entry*)&ChaoGardenMessages_German);
}

// Chao Race door
void __cdecl LoadChaoRaceDoorX(ObjectMaster *a1)
{
	ObjectMaster *v1; // eax@1
	EntityData1 *v2; // ecx@2
	ObjectMaster *v1x; // eax@1
	EntityData1 *v2x; // ecx@2
	v1 = LoadChildObject(LoadObj_Data1, OF_SS11, a1);
	if (v1)
	{
		v2 = v1->Data1;
		v2->Position.x = 0;
		v2->Position.y = 0;
		v2->Position.z = -157;
	}
	v1x = LoadChildObject(LoadObj_Data1, OF_SS11, a1);
	if (v1x)
	{
		v2x = v1x->Data1;
		v2x->Position.x = 0;
		v2x->Position.y = 0;
		v2x->Position.z = -247;
	}
}

void PlayElevatorSound(int ID, void *a2, int a3, void *a4)
{
	if (CurrentLevel == 26) PlaySound(ID, a2, a3, a4);
	else PlaySound(685, a2, a3, a4);
}

void FixChaoButtonPrompts(ObjectMaster *a1)
{
	DrawModelCallback_QueueObjectMaster(ChaoButtonPrompts_Draw, a1, 22952.0f, QueuedModelFlagsB_SomeTextureThing);
}

void FixChaoStatPanel(ObjectMaster *a1)
{
	DrawModelCallback_QueueObjectMaster(ChaoStatPanel_Draw, a1, 22952.0f, QueuedModelFlagsB_SomeTextureThing);
}

void ProcessChaoGardenMaterials(LandTable *landtable, int garden)
{
	NJS_MATERIAL* material;
	for (int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
			if (garden == 0) // SS
			{
				if (material->attr_texId >= 0 && material->attr_texId <= 9) AddTextureAnimation(LevelIDs_SSGarden, 0, material, false, 4, 0, 9, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1);
			}
			if (garden == 1) // EC
			{
				if (material->attr_texId >= 64 && material->attr_texId <= 78) AddTextureAnimation(LevelIDs_ECGarden, 0, material, false, 4, 64, 78, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1);
				// Below isn't needed at the moment because the landtable pieces are made invisible in the current version
				//if (material->attr_texId >= 54 && material->attr_texId <= 63) AddTextureAnimation(LevelIDs_ECGarden, 0, material, false, 4, 54, 63, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1);
			}
			if (garden == 2) // MR
			{
				if (material->attr_texId == 23) AddUVAnimation(LevelIDs_MRGarden, 0, &landtable->Col[j].Model->basicdxmodel->meshsets[k], 0, 0, -1);
				if (material->attr_texId == 24) AddUVAnimation(LevelIDs_MRGarden, 0, &landtable->Col[j].Model->basicdxmodel->meshsets[k], 0, 0, -6);
				if (material->attr_texId >= 36 && material->attr_texId <= 45) AddTextureAnimation(LevelIDs_MRGarden, 0, material, false, 4, 36, 45, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1);
			}
			if (garden == 3) // Race
			{
				if (material->attr_texId >= 55 && material->attr_texId <= 68) AddTextureAnimation(LevelIDs_ChaoRace, 0, material, false, 4, 55, 68, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1);
			}
		}
	}
}

void ChaoGardenSSMRWater_Display_()
{
	float v0; // ST18_4
	Float v1; // ST10_4
	Float v2; // ST08_4
	Float v3; // ST18_4
	unsigned int v4; // esi
	// Stop right there if DC gardens are enabled
	if (CurrentChaoStage == SADXChaoStage_StationSquare && EnabledLevels[LevelIDs_SSGarden]) return;
	else if (CurrentChaoStage == SADXChaoStage_MysticRuins && EnabledLevels[LevelIDs_MRGarden]) return;
	Direct3D_SetZFunc(3u);
	Direct3D_EnableZWrite(0);
	njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
	if (CurrentChaoStage == SADXChaoStage_StationSquare)
	{
		njSetTexture(&Garden00SSObj_TEXLIST);
		njSetTextureNum(0xBu);
	}
	else
	{
		njSetTexture(TEXLIST_ChaoGardenMR);
		njSetTextureNum(0x2Bu);
	}
	SetOceanAlphaModeAndFVF(1);
	njPushMatrix(0);
	v0 = njSin(FrameCounterUnpaused << 6) * OceanDataArray[0].Offset.y;
	v1 = OceanDataArray[0].Position.z + v0;
	v2 = OceanDataArray[0].Position.x + v0;
	njTranslate(0, v2, OceanDataArray[0].Position.y, v1);
	njPushMatrix(0);
	v3 = v0 * 0.5f;
	njTranslate(0, v3, -1.0f, v3);
	v4 = 0;
	if (OceanDataArray[0].PlaneCount)
	{
		do
		{
			Direct3D_DrawFVF_H(
				OceanGarbageArray[35 * (unsigned __int8)OceanDataArray[0].VBuffIndex].points,
				4 * (unsigned __int8)OceanDataArray[0].PrimitiveCount);
			njTranslate(0, OceanDataArray[0].Offset.x, 0.0, 0.0);
			++v4;
		} while (v4 < (unsigned __int8)OceanDataArray[0].PlaneCount);
	}
	njPopMatrix(1u);
	njPopMatrix(1u);
	Direct3D_ResetZFunc();
	Direct3D_EnableZWrite(1u);
}

void UnloadLevelFiles_Chao()
{
	delete AL_GARDEN00_Info;
	AL_GARDEN00_Info = nullptr;
	delete AL_GARDEN01_Info;
	AL_GARDEN01_Info = nullptr;
	delete AL_GARDEN02_Info;
	AL_GARDEN02_Info = nullptr;
	delete AL_RACE_0_Info;
	delete AL_RACE_1_Info;
	AL_RACE_0_Info = nullptr;
	AL_RACE_1_Info = nullptr;
}

void ChaoGardens_Init()
{
	// This stuff is done every time the function is called
	AL_GARDEN00_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\AL_GARDEN00\\0.sa1lvl"));
	AL_GARDEN01_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\AL_GARDEN01\\0.sa1lvl"));
	AL_GARDEN02_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\AL_GARDEN02\\0.sa1lvl"));
	AL_RACE_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\AL_RACE\\0.sa1lvl"));
	AL_RACE_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\AL_RACE\\1.sa1lvl"));
	LandTable* AL_GARDEN00 = AL_GARDEN00_Info->getlandtable();
	LandTable* AL_GARDEN01 = AL_GARDEN01_Info->getlandtable();
	LandTable* AL_GARDEN02 = AL_GARDEN02_Info->getlandtable();
	LandTable* AL_RACE_0 = AL_RACE_0_Info->getlandtable();
	LandTable* AL_RACE_1 = AL_RACE_1_Info->getlandtable();
	RemoveMaterialColors_Landtable(AL_GARDEN00);
	RemoveMaterialColors_Landtable(AL_GARDEN01);
	RemoveMaterialColors_Landtable(AL_GARDEN02);
	RemoveMaterialColors_Landtable(AL_RACE_0);
	RemoveMaterialColors_Landtable(AL_RACE_1);
	ProcessChaoGardenMaterials(AL_GARDEN00, 0);
	ProcessChaoGardenMaterials(AL_GARDEN01, 1);
	ProcessChaoGardenMaterials(AL_GARDEN02, 2);
	ProcessChaoGardenMaterials(AL_RACE_1, 3);
	AL_GARDEN00->TexList = &texlist_ssgarden;
	AL_GARDEN01->TexList = &texlist_ecgarden;
	AL_GARDEN02->TexList = &texlist_mrgarden;
	AL_RACE_0->TexList = &texlist_ChaoRaceEntry;
	AL_RACE_1->TexList = &texlist_ChaoRace;
	// This stuff is done only once
	if (!ModelsLoaded_Chao)
	{
		if (DisableChaoButtonPrompts)
		{
			WriteData<5>((void*)0x007195AE, 0x90); // Don't load SADX button prompts in SS garden
			WriteData<5>((void*)0x00718E20, 0x90); // Don't load SADX button prompts in MR garden
			WriteData<5>((void*)0x00719181, 0x90); // Don't load SADX button prompts in EC garden
		}
		else WriteData((ObjectFuncPtr*)0x0071B3D3, FixChaoButtonPrompts);
		WriteData((ObjectFuncPtr*)0x007382A4, FixChaoStatPanel);
		GARDEN00_OBJECT_TEXLIST = texlist_garden00_object;
		LoadChaoGardenHintMessages();
		WriteJump((void*)0x728E20, ChaoGardenSSMRWater_Display_); // Ocean/water function for DX water in SS and MR gardens
		// Load models
		ChaoGardenTransporterEffect = LoadModel("system\\data\\AL_MAIN\\Models\\00180744.sa1mdl");
		ChaoFruit_Chaonut = LoadModel("system\\data\\AL_MAIN\\Models\\0017D068.sa1mdl");
		ChaoFruit_Starnut = LoadModel("system\\data\\AL_MAIN\\Models\\0017D55C.sa1mdl");
		ChaoFruit_Hastnut = LoadModel("system\\data\\AL_MAIN\\Models\\0017DA88.sa1mdl");
		ChaoFruit_Lifenut = LoadModel("system\\data\\AL_MAIN\\Models\\0017F384.sa1mdl");
		ChaoFruit_Normal_25 = LoadModel("system\\data\\AL_MAIN\\Models\\0017C72C.sa1mdl");
		ChaoFruit_Normal_25->pos[0] = 0;
		ChaoFruit_Normal_25->pos[1] = 0;
		ChaoFruit_Normal_25->pos[2] = 0;
		ChaoFruit_Normal_50 = LoadModel("system\\data\\AL_MAIN\\Models\\0017C3F4.sa1mdl");
		ChaoFruit_Normal_50->pos[0] = 0;
		ChaoFruit_Normal_50->pos[1] = 0;
		ChaoFruit_Normal_50->pos[2] = 0;
		ChaoFruit_Normal_75 = LoadModel("system\\data\\AL_MAIN\\Models\\0017CA64.sa1mdl");
		ChaoFruit_Normal_75->pos[0] = 0;
		ChaoFruit_Normal_75->pos[1] = 0;
		ChaoFruit_Normal_75->pos[2] = 0;
		ChaoFruit_Normal_Ripe = LoadModel("system\\data\\AL_MAIN\\Models\\0017C0BC.sa1mdl");
		ChaoFruit_Normal_Ripe->pos[0] = 0;
		ChaoFruit_Normal_Ripe->pos[1] = 0;
		ChaoFruit_Normal_Ripe->pos[2] = 0;
		ChaoEgg_BlackTwoTone = LoadModel("system\\data\\AL_MAIN\\Models\\00149CB8.sa1mdl");
		ChaoEgg_Normal = LoadModel("system\\data\\AL_MAIN\\Models\\00146E90.sa1mdl");
		ChaoEgg_Gold = LoadModel("system\\data\\AL_MAIN\\Models\\00147E18.sa1mdl");
		ChaoEgg_Silver = LoadModel("system\\data\\AL_MAIN\\Models\\00148D60.sa1mdl");
		ChaoEgg_Broken_BlackTwoTone = LoadModel("system\\data\\AL_MAIN\\Models\\0014A540.sa1mdl");
		ChaoEgg_Broken_Normal = LoadModel("system\\data\\AL_MAIN\\Models\\00147718.sa1mdl"); // Added child object (egg shell bottom) like in other 3 models
		ChaoEgg_Broken_Gold = LoadModel("system\\data\\AL_MAIN\\Models\\00148660.sa1mdl");
		ChaoEgg_Broken_Silver = LoadModel("system\\data\\AL_MAIN\\Models\\001495A8.sa1mdl");
		ChaoTree = LoadModel("system\\data\\AL_MAIN\\Models\\0017BB20.sa1mdl");
		ChaoVMU = LoadModel("system\\data\\AL_MAIN\\Models\\001834CC.sa1mdl");
		ChaoVMU->child->sibling->basicdxmodel->nbMeshset = 0; // Disable the button because it needs to be excluded from collision
		SwapMeshsets(ChaoVMU->child, 0, 3);
		ChaoVMUButton.basicdxmodel = LoadModel("system\\data\\AL_MAIN\\Models\\001834CC.sa1mdl")->child->sibling->basicdxmodel; // Button model
		// Garden transporters stuff
		WriteData((NJS_TEXLIST**)0x07290FB, &CHAO_OBJECT_TEXLIST);
		*(NJS_OBJECT*)0x036065B4 = *LoadModel("system\\data\\AL_MAIN\\Models\\00182198.sa1mdl"); // EC garden to EC transporter
		*(NJS_OBJECT*)0x03604540 = *LoadModel("system\\data\\AL_MAIN\\Models\\00180454.sa1mdl"); // All other transporters
		NJS_OBJECT* TransporterLabel_MR = LoadModel("system\\data\\AL_MAIN\\Models\\00181010.sa1mdl");
		NJS_OBJECT* TransporterLight_MR = LoadModel("system\\data\\AL_MAIN\\Models\\00181178.sa1mdl");
		NJS_OBJECT* TransporterLabel_EC = LoadModel("system\\data\\AL_MAIN\\Models\\00180DA4.sa1mdl");
		NJS_OBJECT* TransporterLight_EC = LoadModel("system\\data\\AL_MAIN\\Models\\00180F0C.sa1mdl");
		NJS_OBJECT* TransporterLabel_SS = LoadModel("system\\data\\AL_MAIN\\Models\\00180B38.sa1mdl");
		NJS_OBJECT* TransporterLight_SS = LoadModel("system\\data\\AL_MAIN\\Models\\00180CA0.sa1mdl");
		WriteData((NJS_OBJECT**)0x007295A9, TransporterLabel_MR); // MR green label
		WriteData((NJS_OBJECT**)0x007295B0, TransporterLight_MR); // MR green
		WriteData((NJS_OBJECT**)0x007295B9, TransporterLabel_EC); // EC red label
		WriteData((NJS_OBJECT**)0x007295C0, TransporterLight_EC); // EC red
		WriteData((NJS_OBJECT**)0x007295C9, TransporterLabel_SS); // SS blue label
		WriteData((NJS_OBJECT**)0x007295D0, TransporterLight_SS); // SS blue
		WriteCall((void*)0x007291B1, RenderChaoTransporterLabel_Fix); // Label transparency fix
		WriteCall((void*)0x007291E0, RenderChaoTransporterLabel_Fix); // Label transparency fix
		WriteCall((void*)0x00729217, RenderChaoTransporterLabel_Fix); // Label transparency fix
		WriteData<1>((char*)0x00729576, 0x90); // Collision struct pointer
		WriteData<1>((char*)0x00729577, 0x8B); // Collision struct pointer
		WriteData<1>((char*)0x00729578, 0x7F); // Collision struct pointer
		WriteData<1>((char*)0x00729574, 0x04); // Collision parameter for InitCollision
		WriteJump((void*)0x7293A0, ChaoGardenTransporterEffect_Load); // Garden transporter effects
		// Fruits
		if (ReplaceFruits == 0)
		{
			WriteCall((void*)0x00722D3B, RenderSA1ChaoFruits_Object);
			WriteCall((void*)0x00726106, RenderSA1ChaoFruits_Model);
			WriteCall((void*)0x00726138, RenderSA1ChaoFruits_Model_BlackMarket); // Black Market preview
			WriteCall((void*)0x00727722, RenderSA1ChaoFruits_Model_BlackMarket); // Black Market item list
		}
		if (ReplaceFruits <= 1)
		{
			WriteCall((void*)0x007260D9, RenderChaoNormalFruit_Whatever);
			WriteJump((void*)0x720DF0, RenderChaoTreeWithFruit);
			WriteCall((void*)0x00722D59, RenderChaoNormalFruitWithScale); // Scale normal fruit in garden
		}
		// Chao eggs
		if (ReplaceEggs)
		{
			WriteCall((void*)0x73EA48, RenderChaoHatEyes);
			WriteCall((void*)0x7264C3, ChaoEggshellHatHook_Empty); // Avoid rendering stuff twice
			WriteCall((void*)0x7264D7, ChaoEggshellHatHook); // Black Market preview
			WriteCall((void*)0x73EA2F, ChaoEggshellHatHook); // In DrawChao
			WriteCall((void*)0x7235D9, ChaoEggshellHatHook); // In the garden
			WriteJump((void*)0x78AF40, RenderChaoEgg_DC_1);
			WriteJump((void*)0x78AF80, RenderChaoEgg_DC_2);
			WriteCall((void*)0x7277C9, ChaoEggHook_BlackMarket); // Item list
			WriteCall((void*)0x725EAE, ChaoEggHook_BlackMarket); // Preview
		}
		// Trees
		WriteCall((void*)0x0072110F, SetChaoObjectTexlist);
		WriteCall((void*)0x0072109C, SetChaoObjectTexlist);
		*(NJS_MODEL_SADX*)0x036087C0 = *ChaoTree->basicdxmodel; // Tree trunk
		*(NJS_MODEL_SADX*)0x03608064 = *ChaoTree->child->basicdxmodel; // Tree leaves 1
		*(NJS_MODEL_SADX*)0x036076E4 = *ChaoTree->child->sibling->basicdxmodel; // Tree leaves 2
		// Misc
		WriteData<1>((char*)0x007151D3, 0x1A); // The secret EC egg is a two-tone black egg
		// Name Machine stuff
		ECGardenStartPoint.Position.y = 71.0f; // Prevent endless jumping in EC garden with the DC model for the Name Machine
		MRGardenReturnPoint.Position.x = 219; // Same for MR garden
		MRGardenReturnPoint.Position.y = 15.45f; // Same for MR garden
		MRGardenReturnPoint.Position.z = -48.5f; // Same for MR garden
		WriteData((NJS_OBJECT**)0x33D0D0C, ChaoVMU);
		WriteData((NJS_OBJECT**)0x33D0D10, ChaoVMU);
		WriteData((NJS_OBJECT**)0x33D0D14, ChaoVMU);
		WriteData((NJS_OBJECT**)0x33D0D18, &ChaoVMUButton);
		WriteData((NJS_OBJECT**)0x33D0D1C, &ChaoVMUButton);
		WriteData((NJS_OBJECT**)0x33D0D20, &ChaoVMUButton);
		WriteCall((void*)0x00729EEF, ChaoNameMachineCollision);
		WriteCall((void*)0x00729DE9, NameMachineTexlist);
		WriteData<5>((void*)0x00729EBB, 0x90); // Kill SADX Name Machine screen thing
		WriteJump((void*)0x00729F40, LoadChaoNameMachineX);
		NameMachineCollision[0].center.z = 5;
		for (int i = 1; i < 9; i++)
		{
			NameMachineCollision[i].a = 0;
			NameMachineCollision[i].b = 0;
			NameMachineCollision[i].c = 0;
		}
		// Station Square garden stuff
		BK_SSGardenStartPoint.Position.x = SSGardenStartPoint.Position.x;
		BK_SSGardenStartPoint.Position.y = SSGardenStartPoint.Position.y;
		BK_SSGardenStartPoint.Position.z = SSGardenStartPoint.Position.z;
		BK_SSGardenStartPoint.YRot = SSGardenStartPoint.YRot;
		if (EnabledLevels[LevelIDs_SSGarden])
		{
			WriteData<5>((void*)0x0071957E, 0x90); // Disable the Sonic Team homepage prompt
			WriteJump((void*)0x4145D0, sub_4145D0); // Elevator function
			WriteJump((void*)0x0072AB80, LoadChaoRaceDoorX);
			WriteData((NJS_TEXLIST**)0x0072A963, &GARDEN00_OBJECT_TEXLIST); // Chao Race door texlist
			WriteCall((void*)0x00638DD7, SetElevatorTexlist);
			WriteCall((void*)0x638FAA, PlayElevatorSound);
			WriteCall((void*)0x639038, PlayElevatorSound);
			WriteCall((void*)0x6390B2, PlayElevatorSound);
			WriteData<5>((void*)0x007195A3, 0x90); // SADX SS Garden Exit
			*(NJS_OBJECT*)0x0340C5A4 = *LoadModel("system\\data\\AL_GARDEN00\\Models\\00012A2C.sa1mdl"); // Chao Race door
			*(NJS_MOTION*)0x0340D978 = *LoadAnimation("system\\data\\AL_GARDEN00\\Models\\00012ADC.saanim"); // Chao Race door animation
			WriteData<1>((void*)0x00719265, 0x7D); // Exit 1
			WriteData<1>((void*)0x00719264, 0xF2); // Exit 2
			WriteData<1>((void*)0x00719263, 0xF0); // Exit 2
			WriteJump((void*)0x00719600, LoadSSGardenX);
			Chao_SSChaoSpawnPoints[0] = { 190.375f, 2.875f, 58.4f };
			Chao_SSChaoSpawnPoints[1] = { 116.25f, 4, 38 };
			Chao_SSChaoSpawnPoints[2] = { 76, 2.875f, 36 };
			Chao_SSChaoSpawnPoints[3] = { 103, 3.375f, 56 };
			Chao_SSChaoSpawnPoints[4] = { 141, 1.075f, 80 };
			Chao_SSChaoSpawnPoints[5] = { 55, 0, -104 };
			Chao_SSChaoSpawnPoints[6] = { 47,  0, -58 };
			Chao_SSChaoSpawnPoints[7] = { -4, 0, 4.36f };
			Chao_SSChaoSpawnPoints[8] = { -34, 0, 52 };
			Chao_SSChaoSpawnPoints[9] = { -100, 0, 100 };
			Chao_SSChaoSpawnPoints[10] = { -47, 0, -109 };
			Chao_SSChaoSpawnPoints[11] = { -100, 0, -88 };
			Chao_SSChaoSpawnPoints[12] = { -100, 0, -67 };
			Chao_SSChaoSpawnPoints[13] = { -165, -0.5f, -6.3f };
			Chao_SSChaoSpawnPoints[14] = { -179.625f, -1.125f, 76 };
			Chao_SSChaoSpawnPoints[15] = { -172.625f, 0.125f, 100 };
			ChaoTreeSpawns[0].a.x = 129.32f; // Palm tree 1
			ChaoTreeSpawns[0].a.y = 4.0f;  // Palm tree 1
			ChaoTreeSpawns[0].a.z = 124.78f;  // Palm tree 1
			ChaoTreeSpawns[0].b.x = 177.62f; // Palm tree 1
			ChaoTreeSpawns[0].b.y = 4.0f; // Palm tree 1
			ChaoTreeSpawns[0].b.z = 62.64f;  // Palm tree 1
			ChaoTreeSpawns[0].c.x = 109.29f; // Palm tree 1
			ChaoTreeSpawns[0].c.y = 4.0f;  // Palm tree 1
			ChaoTreeSpawns[0].c.z = 2.2f;  // Palm tree 1
			ChaoTreeSpawns[0].d.x = 80.24f; // Palm tree 1
			ChaoTreeSpawns[0].d.y = 4.0f;  // Palm tree 1
			ChaoTreeSpawns[0].d.z = 52.08f;  // Palm tree 1
			ChaoTreeSpawns[0].e.x = 107.19f; // Palm tree 1
			ChaoTreeSpawns[0].e.y = 4.0f;  // Palm tree 1
			ChaoTreeSpawns[0].e.z = 28.25f;  // Palm tree 1
			WriteData((float*)0x00719461, 184.88f); // EC Transporter X
			WriteData((float*)0x0071945C, 3.0f); // EC Transporter Y
			WriteData((float*)0x00719457, 107.09f); // EC Transporter Z
			WriteData((float*)0x00719442, 161.91f); // MR Transporter X
			WriteData((float*)0x0071943D, 3.0f); // MR Transporter Y
			WriteData((float*)0x00719438, 127.91f); // MR Transporter Z
			WriteData((float*)0x0072AFF0, 59.5f); // Black market door X (collision)
			WriteData((float*)0x0072AE8E, 59.5f); // Black market door X
			WriteData((float*)0x0072AE87, 145.0f); // Black market door Z
			WriteData((float*)0x0072AFFA, 145.0f); // Black market door Z (collision)
			WriteData<5>((void*)0x007195D1, 0x90); // Kill SADX water
			WriteData<5>((void*)0x0071946E, 0x90); // Kill SADX fountain
			WriteData((float*)0x0071949E, -1000.0f); // Kill hintbox
			WriteData((float*)0x00719496, -1000.0f); // Kill hintbox
		}
		// Mystic Ruins garden stuff
		if (EnabledLevels[LevelIDs_MRGarden])
		{
			ChaoGardenSky_MR_Day = LoadModel("system\\data\\AL_GARDEN02\\Models\\00013A78.sa1mdl");
			ChaoGardenSky_MR_Night = LoadModel("system\\data\\AL_GARDEN02\\Models\\0001BC88.sa1mdl");
			WriteJump((void*)0x00718E90, LoadMRGardenX);
			WriteJump((void*)0x0072A790, sub_72A790); // Mystic Ruins garden function 1
			WriteJump((void*)0x0072A820, sub_72A820); // Mystic Ruins garden function 2
			WriteJump((void*)0x0072A8B0, sub_72A8B0); // Mystic Ruins garden function 3
			WriteData<5>((void*)0x00718E43, 0x90); // Kill SADX water
			WriteData<1>((void*)0x00718E7F, 0xC6); // Draw distance
			WriteData<1>((void*)0x00718E7E, 0x3B); // Draw distance
			WriteData<1>((void*)0x00718E7D, 0x80); // Draw distance
			Chao_MRChaoSpawnPoints[0] = { 264, 15.4f, -65.375f };
			Chao_MRChaoSpawnPoints[1] = { 138.125f, 3.4f, 26.75f };
			Chao_MRChaoSpawnPoints[2] = { 235, 15.525f, -24 };
			Chao_MRChaoSpawnPoints[3] = { 131.875f, 5.05f, 90.3f };
			Chao_MRChaoSpawnPoints[4] = { 80, 9.2f, -35 };
			Chao_MRChaoSpawnPoints[5] = { -12, 2.25f, 33.75f };
			Chao_MRChaoSpawnPoints[6] = { 18.5f, 19.2f, -11.875f };
			Chao_MRChaoSpawnPoints[7] = { -53.75f, 46.25f, -74 };
			Chao_MRChaoSpawnPoints[8] = { -139, 25.125f, 3.875f };
			Chao_MRChaoSpawnPoints[9] = { -200.625f, 10.875f, 18 };
			Chao_MRChaoSpawnPoints[10] = { -199.375f, 7.65f, 56.5f };
			Chao_MRChaoSpawnPoints[11] = { -207, 2, 154.375f };
			Chao_MRChaoSpawnPoints[12] = { -85.25f, 1.575f, 141.75f };
			Chao_MRChaoSpawnPoints[13] = { -164.75f, 1.8f, 152.5f };
			Chao_MRChaoSpawnPoints[14] = { -36, 4.6f, 148.875f };
			Chao_MRChaoSpawnPoints[15] = { 6.7f, 2, 68.5f };
			ChaoTreeSpawns[2].a.x = 126.8847f; // Palm tree 1
			ChaoTreeSpawns[2].a.y = 3.2116146f;  // Palm tree 1
			ChaoTreeSpawns[2].a.z = 129.4048f;  // Palm tree 1
			ChaoTreeSpawns[2].b.x = -45.25877f; // Palm tree 2
			ChaoTreeSpawns[2].b.y = 3.0f;  // Palm tree 2
			ChaoTreeSpawns[2].b.z = 108.8823f;  // Palm tree 2
			ChaoTreeSpawns[2].c.x = -157.6473f; // Palm tree 3
			ChaoTreeSpawns[2].c.y = 2.8f;  // Palm tree 3
			ChaoTreeSpawns[2].c.z = 122.3606f;  // Palm tree 3
			ChaoTreeSpawns[2].d.x = -55.71612f; // Palm tree 4
			ChaoTreeSpawns[2].d.y = 47.5f;  // Palm tree 4
			ChaoTreeSpawns[2].d.z = 20.53316f;  // Palm tree 4
			ChaoTreeSpawns[2].e.x = 83.6948f; // Palm tree 5
			ChaoTreeSpawns[2].e.y = 7.5f;  // Palm tree 5
			ChaoTreeSpawns[2].e.z = -47.53315f;  // Palm tree 5
		}
		// Egg Carrier garden stuff
		if (EnabledLevels[LevelIDs_ECGarden])
		{
			ChaoGardenSky_EC_Sky = LoadModel("system\\data\\AL_GARDEN01\\Models\\000105E4.sa1mdl"); // Modified model with different UVs
			ChaoGardenSky_EC_Water = LoadModel("system\\data\\AL_GARDEN01\\Models\\0000F01C.sa1mdl");
			ChaoGardenSky_EC_Water->basicdxmodel->mats[0].attrflags &= ~NJD_DA_ONE;
			ChaoGardenSky_EC_Water->basicdxmodel->mats[0].attrflags &= ~NJD_SA_ONE;
			ChaoGardenSky_EC_Water->basicdxmodel->mats[0].attrflags |= NJD_SA_SRC;
			ChaoGardenSky_EC_Water->basicdxmodel->mats[0].attrflags |= NJD_DA_INV_SRC;
			ChaoGardenSky_EC_Water->basicdxmodel->mats[0].diffuse.argb.a = 127;
			WriteCall((void*)0x00729289, NameMachineTexlist);
			WriteJump((void*)0x007191D0, LoadECGardenX);
			WriteData((float*)0x007191BF, -12000.0f); // Draw distance
			WriteData<1>((void*)0x00718FE8, 0xC4); // Disable Y check
			WriteData((float*)0x007190FE, 131.67f); // Name machine
			WriteData((float*)0x00719106, 2.6f); // Name machine
			WriteData((float*)0x0071910E, -204.28f); // Name machine
			WriteData((float*)0x00719147, 92.5f); // SS transporter
			WriteData((float*)0x00719142, 70.86f);  // SS transporter
			WriteData((float*)0x0071913D, -10.77f);  // SS transporter
			WriteData((float*)0x0071912B, 80.47f); // MR transporter
			WriteData((float*)0x00719126, 70.86f);  // MR transporter
			WriteData((float*)0x00719121, -41.76f);  // MR transporter
			Chao_ECChaoSpawnPoints[0] = { 102.0f, 78.375f, 29.5f };
			Chao_ECChaoSpawnPoints[1] = { 129.625f, 10.125f, 113.0f };
			Chao_ECChaoSpawnPoints[2] = { 203.625f, 11.625f, -61.975f };
			Chao_ECChaoSpawnPoints[3] = { 132.0f, 12.375f, 107.0f };
			Chao_ECChaoSpawnPoints[4] = { -37.0f, 42.95f, 135.0f };
			Chao_ECChaoSpawnPoints[5] = { -145.0f, 13.475f, 129.0f };
			Chao_ECChaoSpawnPoints[6] = { -202.875f, 13.5f, 83.0f };
			Chao_ECChaoSpawnPoints[7] = { -120.0f, 78.375f, -102.0f };
			Chao_ECChaoSpawnPoints[8] = { -83.0f, 15.55f, -232.5f };
			Chao_ECChaoSpawnPoints[9] = { 71.0f, 11.25f, -254.0f };
			Chao_ECChaoSpawnPoints[10] = { 103.0f, 41.075f, -137.0f };
			Chao_ECChaoSpawnPoints[11] = { 2.875f, 41.625f, -147.625f };
			Chao_ECChaoSpawnPoints[12] = { 202.625f, 11.25f, -76.0f };
			Chao_ECChaoSpawnPoints[13] = { 31.0f, 11.25f, 164.5f };
			Chao_ECChaoSpawnPoints[14] = { -272.0f, 12.375f, -61.0f };
			Chao_ECChaoSpawnPoints[15] = { -195.0f, 10.125f, -207.0f };
			ChaoTreeSpawns[1].a.x = -181; // Palm tree 1
			ChaoTreeSpawns[1].a.y = 4.0f;  // Palm tree 1
			ChaoTreeSpawns[1].a.z = -151.19f;  // Palm tree 1
			ChaoTreeSpawns[1].b.x = -102.76f; // Palm tree 2
			ChaoTreeSpawns[1].b.y = 4.0f;  // Palm tree 2
			ChaoTreeSpawns[1].b.z = -193.18f;  // Palm tree 2
			ChaoTreeSpawns[1].c.x = -8.89f; // Palm tree 3
			ChaoTreeSpawns[1].c.y = 4.0f;  // Palm tree 3
			ChaoTreeSpawns[1].c.z = -219.26f;  // Palm tree 3
			ChaoTreeSpawns[1].d.x = 46.81f; // Palm tree 4
			ChaoTreeSpawns[1].d.y = 4.0f;  // Palm tree 4
			ChaoTreeSpawns[1].d.z = -220.62f;  // Palm tree 4
			ChaoTreeSpawns[1].e.x = 100.89f; // Palm tree 5
			ChaoTreeSpawns[1].e.y = 72.0f;  // Palm tree 5
			ChaoTreeSpawns[1].e.z = -65.27f;  // Palm tree 5
		}
		ChaoRace_Init();
		ModelsLoaded_Chao = true;
	}
}

void ChaoGardens_OnFrame()
{
	// All gardens VMU
	if (CurrentChaoStage >= SADXChaoStage_StationSquare && CurrentChaoStage <= SADXChaoStage_MysticRuins)
	{
		if (!IsGamePaused())
		{
			if (vmuframe > 4) vmuframe = 0;
			ChaoVMU->child->basicdxmodel->mats[3].attr_texId = vmuframe;
			if (FrameCounter % 120 == 0) vmuframe++;
		}
	}
	// Station Square garden
	if (AL_GARDEN00_Info && CurrentChaoStage == SADXChaoStage_StationSquare && !IsGamePaused() && EnabledLevels[LevelIDs_SSGarden])
	{
		auto entity = EntityData1Ptrs[0];
		if (entity != nullptr)
		{
			if (entity->Position.z > 150 && entity->Position.x > 30.0f)
			{
				sub_715700(7);
			}
		}
	}
	// Egg Carrier garden
	if (AL_GARDEN01_Info && CurrentChaoStage == SADXChaoStage_EggCarrier && !IsGamePaused() && EnabledLevels[LevelIDs_ECGarden])
	{
		if (ecgardenwater > 63) ecgardenwater = 54;
		ChaoGardenSky_EC_Water->basicdxmodel->mats[0].attr_texId = ecgardenwater;
		if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2)
		{
			ecgardenwater++;
		}
	}
}