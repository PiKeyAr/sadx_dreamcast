#include "stdafx.h"
#include "FinalEgg_objects.h"
#include "OStandLight.h"

NJS_TEXNAME textures_finalegg1[80];
NJS_TEXLIST texlist_finalegg1 = { arrayptrandlength(textures_finalegg1) };

NJS_TEXNAME textures_finalegg2[68];
NJS_TEXLIST texlist_finalegg2 = { arrayptrandlength(textures_finalegg2) };

NJS_TEXNAME textures_finalegg3[90];
NJS_TEXLIST texlist_finalegg3 = { arrayptrandlength(textures_finalegg3) };

NJS_TEXNAME textures_cylinder[257];
NJS_TEXLIST texlist_cylinder = { arrayptrandlength(textures_cylinder) };

DataPointer(NJS_ACTION, off_1A1F944, 0x1A1F944);
DataArray(FogData, FinalEgg1Fog, 0x019C8FF0, 3);
DataArray(FogData, FinalEgg2Fog, 0x019C9020, 3);
DataArray(FogData, FinalEgg3Fog, 0x019C9050, 3);
FunctionPointer(void, sub_4094D0, (NJS_MODEL_SADX *model, char blend, float radius_scale), 0x4094D0);
FunctionPointer(void, sub_408530, (NJS_OBJECT*), 0x408530);
FunctionPointer(void, sub_407A00, (NJS_MODEL_SADX *model, float a2), 0x407A00);
FunctionPointer(void, sub_405450, (NJS_ACTION *a1, float frame, float scale), 0x405450);
FunctionPointer(void, sub_5ADCF0, (), 0x5ADCF0);

static bool Act2GlassLoaded = false;
static int cylinderframe = 0;
SETObjData setdata_fe = {};

PVMEntry FinalEggObjectTextures[] = {
	{ "OBJ_FINALEGG", (TexList *)0x19CC1C0 },
	{ "E_ROBO", (TexList *)0x94A318 },
	{ "GACHAPON", (TexList *)0x19C929C },
	{ "SUPI_SUPI", (TexList *)0x96F518 },
	{ "EFF_FINALEGG_POM", (TexList *)0x19C91B0 },
	{ "MOGU", (TexList *)0x93ECEC },
	{ "WARA", (TexList *)0x93852C },
	{ "USA", (TexList *)0x93CF74 },
	{ "BANB", (TexList *)0x93A8BC },
	{ "GORI", (TexList *)0x945964 },
	{ "CYLINDER", &texlist_cylinder },
	{ 0 }
};

NJS_MATERIAL* DisableAlphaRejection_FinalEggExternal[] = {
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
};

//O Tatekan
void __cdecl sub_5B4690(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	int v2; // eax@2
	int v3; // eax@4
	float YDist; // ST04_4@6
	int v5; // eax@6
	float scale; // [sp+10h] [bp+4h]@9
	v1 = a1->Data1;
	if (!DroppedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.y;
		if (v2)
		{
			njRotateY(0, (unsigned __int16)v2);
		}
		njPushMatrix(0);
		v3 = v1->Rotation.x;
		if (v3)
		{
			njRotateY(0, (unsigned __int16)v3);
		}
		sub_408530((NJS_OBJECT*)0x1A45500);
		njPopMatrix(1u);
		njPushMatrix(0);
		YDist = v1->Scale.y * 22.0;
		njTranslate(0, 0.0, YDist, 0.0);
		v5 = v1->Rotation.z;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		ProcessModelNode_AB_Wrapper((NJS_OBJECT*)0x1A44A40, 1.0);
		njPopMatrix(1u);
		njSetTexture(&texlist_cylinder);
		njPushMatrix(0);
		njTranslate(0, 0.0, 4.0, 0.0);
		njScale(0, 1.0, v1->Scale.y, 1.0);
		sub_408530((NJS_OBJECT*)0x01A4425C);
		if (v1->Scale.y >= 1.0)
		{
			scale = v1->Scale.y;
		}
		else
		{
			scale = 1.0;
		}
		if (CurrentCharacter == 5) ProcessModelNode_AB_Wrapper((NJS_OBJECT*)0x01A4583C, scale);
		else ProcessModelNode_A_Wrapper((NJS_OBJECT*)0x01A4583C, QueuedModelFlagsB_3, scale);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

/*Fuck this
void __cdecl sub_5B4690_new(ObjectMaster *a1)
{
EntityData1 *v1; // esi@1
int v2; // eax@2
int v3; // eax@4
float YDist; // ST04_4@6
int v5; // eax@6
float scale; // [sp+10h] [bp+4h]@9
v1 = a1->Data1;
if (!DroppedFrames)
{
SetTextureToLevelObj();
njPushMatrix(0);
njTranslateV(0, &v1->Position);
v2 = v1->Rotation.y;
if (v2)
{
njRotateY(0, (unsigned __int16)v2);
}
njPushMatrix(0);
v3 = v1->Rotation.x;
if (v3)
{
njRotateY(0, (unsigned __int16)v3);
}
DrawQueueDepthBias = 2000.0f;
ProcessModelNode((NJS_OBJECT*)0x1A45500, QueuedModelFlagsB_EnableZWrite, 1.0f);
njPopMatrix(1u);
njPushMatrix(0);
YDist = v1->Scale.y * 22.0;
njTranslate(0, 0.0, YDist, 0.0);
v5 = v1->Rotation.z;
if (v5)
{
njRotateY(0, (unsigned __int16)v5);
}
ProcessModelNode((NJS_OBJECT*)0x1A44A40, QueuedModelFlagsB_EnableZWrite, 1.0f);
njPopMatrix(1u);
njSetTexture(&texlist_cylinder);
njPushMatrix(0);
njTranslate(0, 0.0, 4.0, 0.0);
njScale(0, 1.0, v1->Scale.y, 1.0);
((NJS_OBJECT*)0x01A4425C)->basicdxmodel->mats->attr_texId = 258;
ProcessModelNode((NJS_OBJECT*)0x01A4425C, QueuedModelFlagsB_EnableZWrite, 1.0f);
if (v1->Scale.y >= 1.0)
{
scale = v1->Scale.y;
}
else
{
scale = 1.0;
}
//if (CurrentCharacter == 5) ProcessModelNode_AB_Wrapper((NJS_OBJECT*)0x01A4583C, scale);
//else ProcessModelNode_A_Wrapper((NJS_OBJECT*)0x01A4583C, QueuedModelFlagsB_3, scale);
ProcessModelNode((NJS_OBJECT*)0x01A4583C, QueuedModelFlagsB_SomeTextureThing, 1.0f);
njPopMatrix(1u);
njPopMatrix(1u);
}
}
*/

void __cdecl OStandLight_Display_F(ObjectMaster *a1)
{
	//There are two light beams in the model.
	//At the moment I don't know how the game selects the one to use (if it uses both).
	//So I just disable the vertices for the other beam.
	//Entity Rotation X is beam X rotation 
	//Entity Rotation Y is object Y rotation
	//Entity Rotation Z is ???
	//Entity Scale X is light+beam model Y rotation (in degrees)
	//Entity Scale Y is beam length 
	//Entity Scale Z is beam width
	int v2; // eax@2
	EntityData1 *v1; // esi@1
	v1 = a1->Data1;
	//Stretch beam vertices
	attach_01828538_2.points[19].z = (float)v1->Scale.y; //Beam length
	attach_01828538_2.points[20].z = (float)v1->Scale.y; //Beam length
	attach_01828538_2.points[19].x = (float)(-1.0f*v1->Scale.z); //Beam width
	attach_01828538_2.points[20].x = (float)v1->Scale.z; //Beam width
	//Disable the other beam
	attach_01828538_2.points[23].x = 0;
	attach_01828538_2.points[23].y = 0;
	attach_01828538_2.points[23].z = 0;
	attach_01828538_2.points[24].x = 0;
	attach_01828538_2.points[24].y = 0;
	attach_01828538_2.points[24].z = 0;
	if (!DroppedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		//Rotate the main object
		v2 = v1->Rotation.y;
		if (v2)
		{
			njRotateY(0, (unsigned __int16)v2);
		}
		//Render the main object model
		sub_407A00(&attach_01828C4C, 1.0f);
		//Render the light part without the beam
		njTranslate(0, object_01828564.pos[0], object_01828564.pos[1], object_01828564.pos[2]);
		njRotateXYZ(0, object_01828564.ang[0] + *(Sint32 *)&v1->CharIndex, object_01828564.ang[1], object_01828564.ang[2]);
		sub_4094D0(&attach_01828538, 4, 1.0f);
		//Rotate and render the beam
		njRotateX(0, v1->Rotation.x);
		auto BaseRotation = atan2(Camera_Data1->Position.x - v1->Position.x, Camera_Data1->Position.y - v1->Position.y);
		//This is hardcoded for now until I figure out how to rotate it properly
		if (CurrentAct == 0 && CurrentCharacter != 5) njRotateZ(0, NJM_RAD_ANG(BaseRotation));
		if (CurrentAct == 1) njRotateZ(0, NJM_RAD_ANG(-BaseRotation));
		if (CurrentAct == 2 || CurrentCharacter == 5) njRotateZ(0, 16384);
		/* WIP stuff
		float deltax = Camera_Data1->Position.x - v1->Position.x;
		float deltaz = Camera_Data1->Position.z - v1->Position.z;
		float cosine = cos((NJM_ANG_DEG(v1->Rotation.y)*3.14159265 / 180.0f));
		auto BaseRotation = atan2(deltax, deltaz);
		PrintDebug("Cosine: %f\n", v1->Position.x*cosine);
		PrintDebug("DeltaX: %f\n", deltax);
		PrintDebug("DeltaZ: %f\n", deltaz);
		if (CurrentAct == 0) njRotateZ(0, NJM_RAD_ANG(BaseRotation));
		else njRotateZ(0, NJM_RAD_ANG(-BaseRotation));*/
		sub_4094D0(&attach_01828538_2, 4, 1.0f);
		njPopMatrix(1u);
	}
}

void __cdecl OStandLight_Main_F(ObjectMaster *obj)
{
	EntityData1 *v1; // esi

	v1 = obj->Data1;
	AddToCollisionList(v1);
	if (!ClipSetObject(obj))
	{
		OStandLight_Display_F(obj);
	}
}

void __cdecl OStandLight_F(ObjectMaster *a1)
{
	*(Sint32 *)&a1->Data1->CharIndex = (Sint32)(a1->Data1->Scale.x * 65536.0f* 0.002777777777777778f);
	Collision_Init(a1, (CollisionData*)0x1AC4664, 1, 4u);
	a1->MainSub = OStandLight_Main_F;
	a1->DisplaySub = OStandLight_Display_F;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))CheckThingButThenDeleteObject;
}

//O Texture
void __cdecl sub_5AE330(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	NJS_VECTOR *v2; // esi@2
	float a3; // ST24_4@2
	v1 = a1->Data1;
	if (!DroppedFrames)
	{
		BackupConstantAttr();
		AddConstantAttr(0, NJD_FLAG_USE_ALPHA);
		AddConstantAttr(0, NJD_DA_ONE);
		njColorBlendingMode(0, 8);
		njColorBlendingMode(1, 10);
		njPushMatrix(0);
		njSetTexture(&texlist_cylinder);
		njTranslateV(0, &v1->Position);
		njRotateXYZ(0, v1->Rotation.x, v1->Rotation.y, v1->Rotation.z);
		v2 = &v1->Scale;
		njScaleV(0, v2);
		DrawQueueDepthBias = 38952;
		a3 = VectorMaxAbs(v2);
		ProcessModelNode_A_Wrapper((NJS_OBJECT*)0x1A45620, QueuedModelFlagsB_SomeTextureThing, a3);
		DrawQueueDepthBias = 0;
		njPopMatrix(1u);
		ClampGlobalColorThing_Thing();
		njColorBlendingMode(0, 8);
		njColorBlendingMode(1, 6);
		RestoreConstantAttr();
	}
}

NJS_MATERIAL* LevelSpecular_FinalEgg[] = {
	((NJS_MATERIAL*)0x01A3AD08),
	((NJS_MATERIAL*)0x01A26E18),
	((NJS_MATERIAL*)0x01A26E2C),
	((NJS_MATERIAL*)0x01A26E40),
	((NJS_MATERIAL*)0x01A26E54),
	((NJS_MATERIAL*)0x01A26E68),
	((NJS_MATERIAL*)0x01A26E7C),
	((NJS_MATERIAL*)0x01A26E90),
	((NJS_MATERIAL*)0x01A26EA4),
	((NJS_MATERIAL*)0x01A26EB8),
	((NJS_MATERIAL*)0x01A26ECC),
	//OEggKanban
	((NJS_MATERIAL*)0x01C26FBC),
	//Side_Arm
	((NJS_MATERIAL*)0x019DEB20),
	((NJS_MATERIAL*)0x019DEB34),
	((NJS_MATERIAL*)0x019DEB48),
	((NJS_MATERIAL*)0x019DEB5C),
	((NJS_MATERIAL*)0x019DEB70),
	//Top_Arm
	((NJS_MATERIAL*)0x019DC710),
	((NJS_MATERIAL*)0x019DC724),
};

NJS_MATERIAL* ObjectSpecular_FinalEgg[] = {
	//OTexture
	((NJS_MATERIAL*)0x01A45548),
	//OContainer
	((NJS_MATERIAL*)0x019D7590),
	((NJS_MATERIAL*)0x019D75A4),
	((NJS_MATERIAL*)0x019D75B8),
	//Elevator door
	((NJS_MATERIAL*)0x01A3AA44),
	//Barrier
	((NJS_MATERIAL*)0x01A45BF4),
	((NJS_MATERIAL*)0x01A45C08),
	((NJS_MATERIAL*)0x01A45C1C),
	((NJS_MATERIAL*)0x01A45C44),
	((NJS_MATERIAL*)0x01A45C58),
	//OHammer
	((NJS_MATERIAL*)0x019FA670),
	((NJS_MATERIAL*)0x019FA684),
	((NJS_MATERIAL*)0x019FA698),
	((NJS_MATERIAL*)0x019FA6AC),
	((NJS_MATERIAL*)0x019FA6C0),
	((NJS_MATERIAL*)0x019FA6D4),
	((NJS_MATERIAL*)0x019FA6E8),
	((NJS_MATERIAL*)0x019F8EA8),
	((NJS_MATERIAL*)0x019F8EBC),
	((NJS_MATERIAL*)0x019F8ED0),
	((NJS_MATERIAL*)0x019F8EE4),
	((NJS_MATERIAL*)0x019F8EF8),
	((NJS_MATERIAL*)0x019F8F0C),
	((NJS_MATERIAL*)0x019F8F20),
	//OGshooter
	((NJS_MATERIAL*)0x01A20498),
	((NJS_MATERIAL*)0x01A204AC),
	((NJS_MATERIAL*)0x01A204C0),
	((NJS_MATERIAL*)0x01A204D4),
	((NJS_MATERIAL*)0x01A204E8),
	((NJS_MATERIAL*)0x01A204FC),
	((NJS_MATERIAL*)0x01A1FF94),
	((NJS_MATERIAL*)0x01A1FFA8),
	((NJS_MATERIAL*)0x01A1FFBC),
	((NJS_MATERIAL*)0x01A1FE88),
	((NJS_MATERIAL*)0x01A1FD7C),
	((NJS_MATERIAL*)0x01A1FC70),
	((NJS_MATERIAL*)0x01A1FB64),
	((NJS_MATERIAL*)0x01A1FA58),
	((NJS_MATERIAL*)0x01A1F94C),
	//Rotating spikes
	((NJS_MATERIAL*)0x019D23C4),
	((NJS_MATERIAL*)0x019D23D8),
	((NJS_MATERIAL*)0x019D23EC),
	//OSetStep
	((NJS_MATERIAL*)0x019D6A80),
	((NJS_MATERIAL*)0x019D6A94),
	((NJS_MATERIAL*)0x019D6AA8),
	((NJS_MATERIAL*)0x019D6ABC),
	((NJS_MATERIAL*)0x019D6AD0),
	//Side_Arm
	((NJS_MATERIAL*)0x019E0CA0),
	((NJS_MATERIAL*)0x019E06A8),
	((NJS_MATERIAL*)0x019E06BC),
	((NJS_MATERIAL*)0x019E06D0),
	((NJS_MATERIAL*)0x019E04A8),
	((NJS_MATERIAL*)0x019DFE6C),
	((NJS_MATERIAL*)0x019DFE80),
	((NJS_MATERIAL*)0x019DFE94),
	((NJS_MATERIAL*)0x019DF790),
	((NJS_MATERIAL*)0x019DF7A4),
	((NJS_MATERIAL*)0x019DF7B8),
	((NJS_MATERIAL*)0x019DF7CC),
	((NJS_MATERIAL*)0x019DF398),
	((NJS_MATERIAL*)0x019DF3AC),
	((NJS_MATERIAL*)0x019DF3C0),
	((NJS_MATERIAL*)0x019DE738),
	((NJS_MATERIAL*)0x019DE74C),
	((NJS_MATERIAL*)0x019DE760),
	((NJS_MATERIAL*)0x019DE774),
	((NJS_MATERIAL*)0x019DE318),
	((NJS_MATERIAL*)0x019DE32C),
	((NJS_MATERIAL*)0x019DE340),
	((NJS_MATERIAL*)0x019DE354),
	((NJS_MATERIAL*)0x019DDEF8),
	((NJS_MATERIAL*)0x019DDF0C),
	((NJS_MATERIAL*)0x019DDF20),
	((NJS_MATERIAL*)0x019DDF34),
	((NJS_MATERIAL*)0x019DDB78),
	((NJS_MATERIAL*)0x019DDB8C),
	((NJS_MATERIAL*)0x019DD9EC),
	//Top_Arm
	((NJS_MATERIAL*)0x019DCC80),
	((NJS_MATERIAL*)0x019DCC94),
	((NJS_MATERIAL*)0x019DD1F0),
	((NJS_MATERIAL*)0x019DD204),
	((NJS_MATERIAL*)0x019DC120),
	((NJS_MATERIAL*)0x019DC134),
	((NJS_MATERIAL*)0x019DB890),
	((NJS_MATERIAL*)0x019DB8A4),
	((NJS_MATERIAL*)0x019DB8B8),
	((NJS_MATERIAL*)0x019DB8CC),
	((NJS_MATERIAL*)0x019DB8E0),
	((NJS_MATERIAL*)0x019DB4A8),
	((NJS_MATERIAL*)0x019DB4BC),
	((NJS_MATERIAL*)0x019DB4D0),
	((NJS_MATERIAL*)0x019DB4E4),
	((NJS_MATERIAL*)0x019DB088),
	((NJS_MATERIAL*)0x019DB09C),
	((NJS_MATERIAL*)0x019DB0B0),
	((NJS_MATERIAL*)0x019DB0C4),
	((NJS_MATERIAL*)0x019DAC68),
	((NJS_MATERIAL*)0x019DAC7C),
	((NJS_MATERIAL*)0x019DAC90),
	((NJS_MATERIAL*)0x019DACA4),
};

NJS_MATERIAL* NeutralMaterials[] = {
	//OColorDoor in Amy's puzzle
	((NJS_MATERIAL*)0x01A1D52C),
	((NJS_MATERIAL*)0x01A1D744),
	((NJS_MATERIAL*)0x01A1DA68),
	((NJS_MATERIAL*)0x01A1D95C),
	((NJS_MATERIAL*)0x01A1DC80),
	((NJS_MATERIAL*)0x01A1DB74),
	((NJS_MATERIAL*)0x01A1DE98),
	((NJS_MATERIAL*)0x01A1DD8C),
	//Sonic doll shoes
	((NJS_MATERIAL*)0x01C2DB60),
	((NJS_MATERIAL*)0x01C2DB74),
	((NJS_MATERIAL*)0x01C2DB88),
	((NJS_MATERIAL*)0x01C2DB9C),
	((NJS_MATERIAL*)0x01C2DBB0),
	((NJS_MATERIAL*)0x01C2CCC0),
	((NJS_MATERIAL*)0x01C2CCD4),
	((NJS_MATERIAL*)0x01C2CCE8),
	((NJS_MATERIAL*)0x01C2CCFC),
	((NJS_MATERIAL*)0x01C2CD10),
	//Knuckles doll shoes
	((NJS_MATERIAL*)0x01C313D0),
	((NJS_MATERIAL*)0x01C313E4),
	((NJS_MATERIAL*)0x01C313F8),
	((NJS_MATERIAL*)0x01C3140C),
	((NJS_MATERIAL*)0x01C31420),
	((NJS_MATERIAL*)0x01C31434),
	((NJS_MATERIAL*)0x01C30218),
	((NJS_MATERIAL*)0x01C3022C),
	((NJS_MATERIAL*)0x01C30240),
	((NJS_MATERIAL*)0x01C30254),
	((NJS_MATERIAL*)0x01C30268),
	((NJS_MATERIAL*)0x01C3027C),
	//Tails doll gloves
	((NJS_MATERIAL*)0x01C36218),
	((NJS_MATERIAL*)0x01C3622C),
	((NJS_MATERIAL*)0x01C342A8),
	((NJS_MATERIAL*)0x01C342BC),
	//Tails doll shoes
	((NJS_MATERIAL*)0x01C35BA0),
	((NJS_MATERIAL*)0x01C35BB4),
	((NJS_MATERIAL*)0x01C35BC8),
	((NJS_MATERIAL*)0x01C35BDC),
	((NJS_MATERIAL*)0x01C35BF0),
	((NJS_MATERIAL*)0x01C33C40),
	((NJS_MATERIAL*)0x01C33C54),
	((NJS_MATERIAL*)0x01C33C68),
	((NJS_MATERIAL*)0x01C33C7C),
	((NJS_MATERIAL*)0x01C33C90),
};

NJS_MATERIAL* WhiteDiffuse_FinalEggExternal[] = {
	//Level stuff
	//1
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	//2
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	//3
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
};

NJS_MATERIAL* WhiteDiffuse_FinalEgg[] = {
	//0LightCamera
	((NJS_MATERIAL*)0x019FD098),
	((NJS_MATERIAL*)0x019FD0AC),
	((NJS_MATERIAL*)0x019FD0C0),
	((NJS_MATERIAL*)0x019FD0D4),
	((NJS_MATERIAL*)0x019FD0E8),
	((NJS_MATERIAL*)0x019FD0FC),
	((NJS_MATERIAL*)0x019FD110),
	//OHasiGo
	&matlistSTG10_001E7318[2],
	//Egg Keeper
	((NJS_MATERIAL*)0x0094B168),
	//Elevator (glass tube)
	((NJS_MATERIAL*)0x01A3ACB8),
	((NJS_MATERIAL*)0x01A3ACCC),
	((NJS_MATERIAL*)0x01A3ACE0),
	((NJS_MATERIAL*)0x01A3AD58),
	//Cylinder
	((NJS_MATERIAL*)0x01A44088),
	//OLight1
	((NJS_MATERIAL*)0x01A46C10),
	((NJS_MATERIAL*)0x01A46C24),
	//OEggKanban
	((NJS_MATERIAL*)0x01C26FD0),
	((NJS_MATERIAL*)0x01C26FE4),
};

void SetGachaponEnvMaps1()
{
	EnvMap1 = 1.0f;
	EnvMap2 = 1.0f;
	EnvMap3 = 0.5f;
	EnvMap4 = 0.5f;
	sub_407A00((NJS_MODEL_SADX*)0x19CA3F0, 1.5f);
	EnvMap1 = 0.5f;
	EnvMap2 = 0.5f;
	EnvMap3 = 0.5f;
	EnvMap4 = 0.5f;
}

void __cdecl SetGachaponEnvMaps2(int a1, EntityData1 *a2)
{
	EnvMap1 = 1.0f;
	EnvMap2 = 1.0f;
	EnvMap3 = 0.5f;
	EnvMap4 = 0.5f;
	sub_405450(&off_1A1F944, *(float *)&a2->LoopData, 1.5f);
	EnvMap1 = 0.5f;
	EnvMap2 = 0.5f;
	EnvMap3 = 0.5f;
	EnvMap4 = 0.5f;
}

static void __declspec(naked) sub_5B36E0X()
{
	__asm
	{
		push esi // a2
		push ecx // a1

				 // Call your __cdecl function here:
				 call SetGachaponEnvMaps2
				 pop ecx // a1
				 pop esi // a2
				 retn
	}
}

void Glass_Delete(ObjectMaster *a1)
{
	Act2GlassLoaded = false;
	CheckThingButThenDeleteObject(a1);
}

void Glass_Display(ObjectMaster *a1)
{
	EntityData1 *v1;
	v1 = a1->Data1;
	if (CurrentAct == 1 && !DroppedFrames)
	{
		njSetTexture(&texlist_finalegg2);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		njScale(0, 1.0f, 1.0f, 1.0f);
		njRotateXYZ(0, 0, 0, 0);
		DrawQueueDepthBias = 6000.0f;  
		ProcessModelNode((NJS_OBJECT*)STG10_1_Info->getdata("objectSTG10_000C1350"), (QueuedModelFlagsB)0, 1.0f); //tube 1
		ProcessModelNode((NJS_OBJECT*)STG10_1_Info->getdata("objectSTG10_000C0E68"), (QueuedModelFlagsB)0, 1.0f); //tube 2 
		ProcessModelNode((NJS_OBJECT*)STG10_1_Info->getdata("objectSTG10_000C1A48"), (QueuedModelFlagsB)0, 1.0f); //tube 3 
		ProcessModelNode((NJS_OBJECT*)STG10_1_Info->getdata("objectSTG10_000B9E54_2"), (QueuedModelFlagsB)0, 1.0f); //elevator glass 
		ProcessModelNode((NJS_OBJECT*)STG10_1_Info->getdata("objectSTG10_00089114_2"), (QueuedModelFlagsB)0, 1.0f); //big glass inner layer 
		njPopMatrix(1u);
		DrawQueueDepthBias = 0;
	}
}

void Glass_Main(ObjectMaster *a1)
{
	if (CurrentLevel == 10)
	{
		if (CurrentAct == 1) Glass_Display(a1);
	}
	else Glass_Delete(a1);
}

void Glass_Load(ObjectMaster *a1)
{
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Glass_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))Glass_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))Glass_Delete;
}

void LoadGlass()
{
	ObjectMaster *obj;
	EntityData1 *ent;
	ObjectFunc(OF0, Glass_Load);
	setdata_fe.Distance = 612800.0f;
	obj = LoadObject((LoadObj)2, 3, OF0);
	obj->SETData.SETData = &setdata_fe;
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
	Act2GlassLoaded = true;
}

static void SkyBox_FinalEgg_Load_r(ObjectMaster *a1);
static Trampoline SkyBox_FinalEgg_Load_t(0x5ADFE0, 0x5ADFE9, SkyBox_FinalEgg_Load_r);
static void __cdecl SkyBox_FinalEgg_Load_r(ObjectMaster *a1)
{
	auto original = reinterpret_cast<decltype(SkyBox_FinalEgg_Load_r)*>(SkyBox_FinalEgg_Load_t.Target());
	original(a1);
	if (EnableFinalEgg && !Act2GlassLoaded) LoadGlass();
}

void GachaponExplosionFix(NJS_MODEL_SADX *a1)
{
	DrawQueueDepthBias = 10000.0f;
	DrawModel_Queue(a1, QueuedModelFlagsB_SomeTextureThing);
	DrawQueueDepthBias = 0;
}

void UnloadLevelFiles_STG10()
{
	if (DLLLoaded_Lantern)
	{
		material_unregister_ptr(WhiteDiffuse_FinalEggExternal, LengthOfArray(WhiteDiffuse_FinalEggExternal), &ForceWhiteDiffuse1);
		if (set_alpha_reject_ptr != nullptr) material_unregister_ptr(DisableAlphaRejection_FinalEggExternal, LengthOfArray(DisableAlphaRejection_FinalEggExternal), &DisableAlphaRejection);
	}
	delete STG10_0_Info;
	delete STG10_1_Info;
	delete STG10_2_Info;
	STG10_0_Info = nullptr;
	STG10_1_Info = nullptr;
	STG10_2_Info = nullptr;
}

void LoadLevelFiles_STG10()
{
	CheckAndUnloadLevelFiles();
	STG10_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG10\\0.sa1lvl"));
	STG10_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG10\\1.sa1lvl"));
	STG10_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\STG10\\2.sa1lvl"));
	LandTable *STG10_0 = STG10_0_Info->getlandtable();
	LandTable *STG10_1 = STG10_1_Info->getlandtable();
	LandTable *STG10_2 = STG10_2_Info->getlandtable();
	STG10_0->TexList = &texlist_finalegg1;
	STG10_1->TexList = &texlist_finalegg2;
	STG10_2->TexList = &texlist_finalegg3;
	WriteData((LandTable**)0x97DB48, STG10_0); //Act 1
	WriteData((LandTable**)0x97DB4C, STG10_1); //Act 2
	WriteData((LandTable**)0x97DB50, STG10_2); //Act 3
	if (DLLLoaded_Lantern)
	{
		//1
		WhiteDiffuse_FinalEggExternal[0] = &((NJS_MATERIAL*)STG10_0_Info->getdata("matlistSTG10_0002CF50"))[0];
		WhiteDiffuse_FinalEggExternal[1] = &((NJS_MATERIAL*)STG10_0_Info->getdata("matlistSTG10_0002CF50"))[1];
		WhiteDiffuse_FinalEggExternal[2] = &((NJS_MATERIAL*)STG10_0_Info->getdata("matlistSTG10_0002CF50"))[2];
		WhiteDiffuse_FinalEggExternal[3] = &((NJS_MATERIAL*)STG10_0_Info->getdata("matlistSTG10_0002CF50"))[3];
		WhiteDiffuse_FinalEggExternal[4] = &((NJS_MATERIAL*)STG10_0_Info->getdata("matlistSTG10_0002CF50"))[4];
		WhiteDiffuse_FinalEggExternal[5] = &((NJS_MATERIAL*)STG10_0_Info->getdata("matlistSTG10_0002CF50"))[5];
		//2
		WhiteDiffuse_FinalEggExternal[6] = &((NJS_MATERIAL*)STG10_1_Info->getdata("matlistSTG10_000DA1C4"))[7];
		WhiteDiffuse_FinalEggExternal[7] = &((NJS_MATERIAL*)STG10_1_Info->getdata("matlistSTG10_000D61B8"))[8];
		WhiteDiffuse_FinalEggExternal[8] = &((NJS_MATERIAL*)STG10_1_Info->getdata("matlistSTG10_000D8E98"))[8];
		WhiteDiffuse_FinalEggExternal[9] = &((NJS_MATERIAL*)STG10_1_Info->getdata("matlistSTG10_000D2870"))[9];
		WhiteDiffuse_FinalEggExternal[10] = &((NJS_MATERIAL*)STG10_1_Info->getdata("matlistSTG10_000D0E5C"))[2];
		WhiteDiffuse_FinalEggExternal[11] = &((NJS_MATERIAL*)STG10_1_Info->getdata("matlistSTG10_000D0E5C"))[3];
		WhiteDiffuse_FinalEggExternal[12] = &((NJS_MATERIAL*)STG10_1_Info->getdata("matlistSTG10_000D0E5C"))[5];
		WhiteDiffuse_FinalEggExternal[13] = &((NJS_MATERIAL*)STG10_1_Info->getdata("matlistSTG10_000D0E5C"))[6];
		WhiteDiffuse_FinalEggExternal[14] = &((NJS_MATERIAL*)STG10_1_Info->getdata("matlistSTG10_000D0E5C"))[7];
		WhiteDiffuse_FinalEggExternal[15] = &((NJS_MATERIAL*)STG10_1_Info->getdata("matlistSTG10_000D0E5C"))[8];
		WhiteDiffuse_FinalEggExternal[16] = &((NJS_MATERIAL*)STG10_1_Info->getdata("matlistSTG10_0009A5FC"))[1];
		WhiteDiffuse_FinalEggExternal[17] = &((NJS_MATERIAL*)STG10_1_Info->getdata("matlistSTG10_00085FB4"))[8];
		//3
		WhiteDiffuse_FinalEggExternal[18] = &((NJS_MATERIAL*)STG10_2_Info->getdata("matlistSTG10_001357BC"))[0];
		WhiteDiffuse_FinalEggExternal[19] = &((NJS_MATERIAL*)STG10_2_Info->getdata("matlistSTG10_001357BC"))[1];
		WhiteDiffuse_FinalEggExternal[20] = &((NJS_MATERIAL*)STG10_2_Info->getdata("matlistSTG10_001357BC"))[2];
		WhiteDiffuse_FinalEggExternal[21] = &((NJS_MATERIAL*)STG10_2_Info->getdata("matlistSTG10_001357BC"))[3];
		WhiteDiffuse_FinalEggExternal[22] = &((NJS_MATERIAL*)STG10_2_Info->getdata("matlistSTG10_00148C90_2"))[0];
		WhiteDiffuse_FinalEggExternal[23] = &((NJS_MATERIAL*)STG10_2_Info->getdata("matlistSTG10_00146E8C_2"))[0];
		WhiteDiffuse_FinalEggExternal[24] = &((NJS_MATERIAL*)STG10_2_Info->getdata("matlistSTG10_00146E8C_2"))[0];
		WhiteDiffuse_FinalEggExternal[25] = &((NJS_MATERIAL*)STG10_2_Info->getdata("matlistSTG10_001228E4"))[3];
		material_register_ptr(WhiteDiffuse_FinalEggExternal, LengthOfArray(WhiteDiffuse_FinalEggExternal), &ForceWhiteDiffuse1);
		if (set_alpha_reject_ptr != nullptr)
		{
			DisableAlphaRejection_FinalEggExternal[0] = &((NJS_MATERIAL*)STG10_2_Info->getdata("matlistSTG10_00153094"))[0]; //Blue light in Act 3
			DisableAlphaRejection_FinalEggExternal[1] = &((NJS_MATERIAL*)STG10_2_Info->getdata("matlistSTG10_00145448"))[0]; //Lights around the tube you fall through in Act 3
			DisableAlphaRejection_FinalEggExternal[2] = &((NJS_MATERIAL*)STG10_2_Info->getdata("matlistSTG10_00145448"))[1]; //Lights around the tube you fall through in Act 3
			DisableAlphaRejection_FinalEggExternal[3] = &((NJS_MATERIAL*)STG10_2_Info->getdata("matlistSTG10_00152708"))[0]; //Probably same as above
			DisableAlphaRejection_FinalEggExternal[4] = &((NJS_MATERIAL*)STG10_2_Info->getdata("matlistSTG10_00152708"))[1]; //Probably same as above
			DisableAlphaRejection_FinalEggExternal[5] = &((NJS_MATERIAL*)STG10_2_Info->getdata("matlistSTG10_0015329C"))[0]; //Not DA_ONE but better include this too
			DisableAlphaRejection_FinalEggExternal[6] = &((NJS_MATERIAL*)STG10_2_Info->getdata("matlistSTG10_00153514"))[0]; //Not DA_ONE but better include this too
			DisableAlphaRejection_FinalEggExternal[7] = &((NJS_MATERIAL*)STG10_2_Info->getdata("matlistSTG10_00153780"))[0]; //Not DA_ONE but better include this too
			DisableAlphaRejection_FinalEggExternal[8] = &((NJS_MATERIAL*)STG10_2_Info->getdata("matlistSTG10_0014DB7C"))[0]; //Not DA_ONE but better include this too
			DisableAlphaRejection_FinalEggExternal[9] = &matlistSTG10_001AEB58[0]; //Light object
			material_register_ptr(DisableAlphaRejection_FinalEggExternal, LengthOfArray(DisableAlphaRejection_FinalEggExternal), &DisableAlphaRejection);
		}
	}
}

void FinalEgg_Init()
{
	ReplaceBIN_DC("CAM1000A");
	ReplaceBIN_DC("CAM1000S");
	ReplaceBIN_DC("CAM1001S");
	ReplaceBIN_DC("CAM1002E");
	ReplaceBIN_DC("CAM1002S");
	ReplaceBIN_DC("CAM1003S");
	ReplaceBIN_DC("SET1000A");
	ReplaceBIN_DC("SET1000S");
	ReplaceBIN_DC("SET1001S");
	ReplaceBIN_DC("SET1002E");
	ReplaceBIN_DC("SET1002S");
	ReplaceBIN_DC("SET1003S");
	switch (EnableSETFixes)
	{
	case SETFixes_Normal:
		AddSETFix("SET1000A");
		AddSETFix("SET1000S");
		AddSETFix("SET1001S");
		AddSETFix("SET1002E");
		AddSETFix("SET1002S");
		AddSETFix("SET1003S");
		break;
	case SETFixes_Extra:
		AddSETFix_Extra("SET1000A");
		AddSETFix_Extra("SET1000S");
		AddSETFix_Extra("SET1001S");
		AddSETFix_Extra("SET1002E");
		AddSETFix_Extra("SET1002S");
		AddSETFix_Extra("SET1003S");
		break;
	default:
		break;
	}
	ReplacePVM("EFF_FINALEGG_POM");
	ReplacePVM("FINALEGG1");
	ReplacePVM("FINALEGG2");
	ReplacePVM("FINALEGG3");
	ReplacePVM("FINALEGG4");
	ReplaceBIN("PL_A0B", "PL_A0X");
	ReplaceBIN("PL_A2B", "PL_A2X");
	if (DLLLoaded_Lantern)
	{
		if (set_alpha_reject_ptr != nullptr)
		{
			ReplacePVM("OBJ_FINALEGG");
		}
		else
		{
			ReplaceGeneric("OBJ_FINALEGG.PVM", "OBJ_FINALEGG_DC_OLD.PVM");
		}
	}
	else ReplaceGeneric("OBJ_FINALEGG.PVM", "OBJ_FINALEGG_DC_OLD.PVM");
	TexLists_Obj[10] = FinalEggObjectTextures;
	WriteCall((void*)0x005AEF29, GachaponExplosionFix);
	WriteData<1>((void*)0x005ADC40, 0xC3u); //Kill the SetClip function
	for (unsigned int i = 0; i < LengthOfArray(NeutralMaterials); i++)
	{
		RemoveMaterialColors(NeutralMaterials[i]);
	}
	if (DLLLoaded_Lantern)
	{
		material_register_ptr(LevelSpecular_FinalEgg, LengthOfArray(LevelSpecular_FinalEgg), &ForceDiffuse0Specular0);
		material_register_ptr(ObjectSpecular_FinalEgg, LengthOfArray(ObjectSpecular_FinalEgg), &ForceDiffuse0Specular1);
	}
	//Environment maps thing
	WriteCall((void*)0x005B3785, SetGachaponEnvMaps1);
	WriteCall((void*)0x005B3744, sub_5B36E0X);
	//OTexture lighting
	((NJS_MATERIAL*)0x01A45548)->attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
	//OPinLight material fixes
	((NJS_OBJECT*)0x1C2A588)->basicdxmodel->mats[1].diffuse.color = 0xFFB2B2B2;
	((NJS_OBJECT*)0x1C29D4C)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2;
	//0LightCamera lighting
	((NJS_MATERIAL*)0x019FD098)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x019FD0AC)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x019FD0C0)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x019FD0D4)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x019FD0E8)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x019FD0FC)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x019FD110)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	//OUkishima lighting
	((NJS_MATERIAL*)0x01A27EC8)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x01A27EDC)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	*(NJS_OBJECT*)0x1A37A6C = objectSTG10_001E1EF8; //Elevator
	*(NJS_OBJECT*)0x19D228C = objectSTG10_0018E284; //OConvStop
	memcpy((void*)0x019CDCD0, uvSTG10_0018AD48, sizeof(uvSTG10_0018AD48)); //Conveyour belt UVs
	memcpy((void*)0x019CDD98, uvSTG10_0018AE10, sizeof(uvSTG10_0018AE10)); //Conveyour belt UVs
	memcpy((void*)0x019CDF08, uvSTG10_0018AF80, sizeof(uvSTG10_0018AF80)); //Conveyour belt UVs
	memcpy((void*)0x01C271F0, uvSTG10_0021DA1C, sizeof(uvSTG10_0021DA1C)); //Egg Kanban UVs
	*(NJS_MODEL_SADX*)0x01C2A55C = attachSTG10_0021D538; //Some light thing material fix
	*(NJS_MODEL_SADX*)0x01A1F7F8 = attachSTG10_001CE570; //Gachapon thing
	*(NJS_MODEL_SADX*)0x01A1ED18 = attachSTG10_001CE0D0; //Gachapon thing lid
	*(NJS_MODEL_SADX*)0x01A1E758 = attachSTG10_001CDD00; //Gachapon thing left
	*(NJS_MODEL_SADX*)0x01A1E458 = attachSTG10_001CDA74; //Gachapon thing right
	*(NJS_MODEL_SADX*)0x01A44028 = attachSTG10_001EC828; //OHasiGo
	*(NJS_MODEL_SADX*)0x01A301AC = attachSTG10_001DD1C0; //OFun
	*(NJS_MODEL_SADX*)0x01A2EA10 = attachSTG10_001DC16C; //OFun
	((NJS_MATERIAL*)0x01C26FD0)->attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Egg Kanban stuff
	((NJS_MATERIAL*)0x01C26FE4)->attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Egg Kanban stuff
	((NJS_OBJECT*)0x1C26F74)->basicdxmodel->mats[0].diffuse.argb.g = 178; //Egg Kanban stuff
	((NJS_OBJECT*)0x1C26F74)->basicdxmodel->mats[0].diffuse.argb.r = 152; //Egg Kanban stuff
	((NJS_OBJECT*)0x1C26F74)->basicdxmodel->mats[0].diffuse.argb.b = 152; //Egg Kanban stuff
	((NJS_OBJECT*)0x1A462EC)->basicdxmodel->mats[4].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Barrier
	*(NJS_OBJECT*)0x19FEFE4 = objectSTG10_001AEDFC; // Light
	*(NJS_MODEL_SADX*)0x19D8BC0 = attachSTG10_015D8BC0; // Laser
	ObjList_FEgg[59].UseDistance = 1; // O Suikomi 
	ObjList_FEgg[59].Distance = 1600000.0f; // O Suikomi
	WriteJump((void*)0x5AE330, sub_5AE330); //O Texture function
	WriteJump(OStandLight, OStandLight_F);
	WriteJump(OStandLight_Main, OStandLight_Main_F);
	WriteJump(OStandLight_Display, OStandLight_Display_F); //O Stand Light function
	WriteJump((void*)0x005B4690, sub_5B4690); //Cylinder function
	((NJS_OBJECT*)0x01A4425C)->basicdxmodel->mats->attr_texId = 256; //Cylinder pivot
	((NJS_OBJECT*)0x01A4583C)->basicdxmodel->mats->diffuse.color = 0xFFFFFFFF; //Cylinder texture
	ResizeTextureList((NJS_TEXLIST*)0x1B98518, textures_finalegg1);
	ResizeTextureList((NJS_TEXLIST*)0x1A60488, textures_finalegg2);
	ResizeTextureList((NJS_TEXLIST*)0x1AC5780, textures_finalegg3);
	ResizeTextureList(&OBJ_FINALEGG_TEXLIST, 169);
	for (unsigned int i = 0; i < 3; i++)
	{
		FinalEgg1Fog[i].Color = 0xFF000000;
		FinalEgg1Fog[i].Layer = 1200.0f;
		FinalEgg1Fog[i].Distance = 3000.0f;
		FinalEgg2Fog[i].Color = 0xFF000000;
		FinalEgg2Fog[i].Layer = 650.0f;
		FinalEgg2Fog[i].Distance = 2000.0f;
		FinalEgg2Fog[i].Toggle = 1;
		FinalEgg3Fog[i].Color = 0xFF000000;
		FinalEgg3Fog[i].Layer = 650.0f;
		FinalEgg3Fog[i].Distance = 2000.0f;
		DrawDist_FinalEgg2[i].Maximum = -2400.0f;
	}
}

void FinalEgg_OnFrame()
{
	auto entity = EntityData1Ptrs[0];
	if (CurrentLevel == 10 && GameState != 16)
	{
		if (CurrentAct == 0 && entity != nullptr)
		{
			if (entity->Position.z >= 0)
			{
				if (LevelFogData.Layer < 1400) LevelFogData.Layer = LevelFogData.Layer + 8; else LevelFogData.Layer = 1400;
				if (LevelFogData.Distance < 3400) LevelFogData.Distance = LevelFogData.Distance + 16; else LevelFogData.Distance = 3400;
			}
			else
			{
				if (LevelFogData.Layer > FinalEgg1Fog[0].Layer) LevelFogData.Layer = LevelFogData.Layer - 16; else LevelFogData.Layer = FinalEgg1Fog[0].Layer;
				if (LevelFogData.Distance > FinalEgg1Fog[0].Distance) LevelFogData.Distance = LevelFogData.Distance - 8; else LevelFogData.Distance = FinalEgg1Fog[0].Distance;
			}
		}
		if (CurrentAct == 1 && entity != nullptr)
		{
			if (entity->Position.x >= 900 && entity->Position.x <= 1250 && entity->Position.z >= -1050 && entity->Position.z <= -605 && entity->Position.y > -700)
			{
				if (LevelFogData.Layer > 500) LevelFogData.Layer = LevelFogData.Layer - 8; else LevelFogData.Layer = 500;
				if (LevelFogData.Distance > 1500) LevelFogData.Distance = LevelFogData.Distance - 16; else LevelFogData.Distance = 1500;
			}
			else
			{
				if (entity->Status & Status_Ground)
				{
					if (LevelFogData.Layer < FinalEgg2Fog[0].Layer) LevelFogData.Layer = LevelFogData.Layer + 8; else LevelFogData.Layer = FinalEgg2Fog[0].Layer;
					if (LevelFogData.Distance < FinalEgg2Fog[0].Distance) LevelFogData.Distance = LevelFogData.Distance + 16; else LevelFogData.Distance = FinalEgg2Fog[0].Distance;
				}
			}
		}
		if (FramerateSetting < 2 && FrameCounter % 2 == 0 || FramerateSetting >= 2) cylinderframe++;
		if (cylinderframe > 255) cylinderframe = 0;
		((NJS_OBJECT*)0x1A4583C)->basicdxmodel->mats[0].attr_texId = cylinderframe;
		((NJS_OBJECT*)0x1A45620)->basicdxmodel->mats->attr_texId = cylinderframe;
	}
}