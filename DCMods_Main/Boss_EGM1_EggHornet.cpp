#include "stdafx.h"
#include "EggHornet_Water.h"

NJS_TEXNAME textures_egm1land[118];
NJS_TEXLIST texlist_egm1land = { arrayptrandlength(textures_egm1land) };

DataArray(PVMEntry, EggHornetObjectTextures, 0x156F6B0, 15);
DataArray(FogData, EggHornetFog, 0x01556B34, 3);
DataArray(DrawDistance, DrawDist_EggHornet, 0x01556B1C, 3);

FunctionPointer(void, sub_571AD0, (ObjectMaster *a1), 0x571AD0);

static int EggHornetOceanAnimationSA1 = 0;
static int EggHornet_Rotation = 0;
static int EggHornet_RotationDirection = 1;
static bool EggHornet_RotationEnabled = false;

void __cdecl EggHornetWaterFunc()
{
	if (B_EGM1_Info && !DroppedFrames)
	{
		if (EnableEggHornet == true && !SADXWater_MysticRuins && CurrentLevel == 20 && GameState != 16)
		{
			if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2)
			{
				EggHornetOceanAnimationSA1++;
			}
			if (EggHornetOceanAnimationSA1 > 9) EggHornetOceanAnimationSA1 = 0;
			matlist_00057F04[0].attr_texId = EggHornetOceanAnimationSA1;
		}
		DisableFog();
		njSetTexture(&texlist_egm1land);
		njPushMatrix(0);
		njTranslate(0, 0, 0, 0);
		ProcessModelNode_A_Wrapper((NJS_OBJECT*)B_EGM1_Info->getdata("object_00048F9C"), QueuedModelFlagsB_3, 1.0f);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, 0, 0, 0);
		ProcessModelNode_A_Wrapper((NJS_OBJECT*)B_EGM1_Info->getdata("object_00049370"), QueuedModelFlagsB_3, 1.0f);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, 0, 0, 0);
		ProcessModelNode_A_Wrapper((NJS_OBJECT*)B_EGM1_Info->getdata("object_0004EB6C"), QueuedModelFlagsB_3, 1.0f);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, 0, 0, 0);
		ProcessModelNode_A_Wrapper((NJS_OBJECT*)B_EGM1_Info->getdata("object_0004EE14"), QueuedModelFlagsB_3, 1.0f);
		njPopMatrix(1u);
		njSetTexture(&BEACH_SEA_TEXLIST);
		njPushMatrix(0);
		njTranslate(0, Camera_Data1->Position.x, 0, Camera_Data1->Position.z);
		njScale(0, 1.0f, 1.0f, 1.0f);
		DrawQueueDepthBias = -47000;
		ProcessModelNode(&object_00057FD4, QueuedModelFlagsB_EnableZWrite, 1.0f);
		njPopMatrix(1u);
		DrawQueueDepthBias = 0;
	}
}

void UnloadLevelFiles_B_EGM1()
{
	//Also unregister white diffuse in the level
	delete B_EGM1_Info;
	B_EGM1_Info = nullptr;
}

void LoadLevelFiles_B_EGM1()
{
	CheckAndUnloadLevelFiles();
	B_EGM1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_EGM1\\0.sa1lvl"));
	LandTable *B_EGM1 = B_EGM1_Info->getlandtable();
	RemoveMaterialColors_Landtable(B_EGM1);
	B_EGM1->TexList = &texlist_egm1land;
	LandTableArray[40] = B_EGM1;
	//SADX style water
	if (SADXWater_MysticRuins)
	{
		EggHornetObjectTextures[0].TexList = &texlist_sadxwtr_waves;
		EggHornetObjectTextures[0].Name = "SADXWTR_WAVES";
		WriteJump(EggHornet_OceanDraw, MysticRuins_OceanDraw_SADXStyle); //Egg Hornet ocean
		B_EGM1->Col[B_EGM1->COLCount - 1].Flags = 0x81000000;
		B_EGM1->Col[B_EGM1->COLCount - 2].Flags = 0x81000000;
		B_EGM1->Col[B_EGM1->COLCount - 3].Flags = 0x81000000;
		B_EGM1->Col[B_EGM1->COLCount - 4].Flags = 0x81000000;
	}
	else
	{
		EggHornetObjectTextures[0].TexList = &BEACH_SEA_TEXLIST;
		EggHornetObjectTextures[0].Name = "BEACH_SEA";
		WriteJump(EggHornet_OceanDraw, EggHornetWaterFunc); //Egg Hornet water
		B_EGM1->Col[B_EGM1->COLCount - 1].Flags = 0x00000000;
		B_EGM1->Col[B_EGM1->COLCount - 2].Flags = 0x00000000;
		B_EGM1->Col[B_EGM1->COLCount - 3].Flags = 0x00000000;
		B_EGM1->Col[B_EGM1->COLCount - 4].Flags = 0x00000000;
	}
	//WhiteDiffuse_EGM1External[0] = &((NJS_MATERIAL*)B_EGM1_Info->getdata("matlist_0005B834"))[0];
}

void RotateEggHornet(ObjectMaster *a1)
{
	sub_571AD0(a1);
	njRotateY(0, EggHornet_Rotation);
}

static void EggHornetRotationObject_r(ObjectMaster *a1);
static Trampoline EggHornetRotationObject_t(0x574CB0, 0x574CB6, EggHornetRotationObject_r);
static void __cdecl EggHornetRotationObject_r(ObjectMaster *a1)
{
	auto original = reinterpret_cast<decltype(EggHornetRotationObject_r)*>(EggHornetRotationObject_t.Target());
	original(a1);
	if (EnableEggHornet) EggHornet_RotationEnabled = true;
}

void EggHornet_RotationDisable(ObjectMaster *a1)
{
	if (EnableEggHornet) EggHornet_RotationEnabled = false;
	CheckThingButThenDeleteObject(a1);
}

void EggHornet_Init()
{
	ReplaceBIN_DC("SETEGM1S");
	ReplacePVM("EGM1");
	ReplacePVM("EGM1LAND");
	ReplacePVM("EGM1BARRIER");
	ReplacePVM("EGM1EGGMAN");
	ReplacePVM("EGM1JET");
	ReplacePVM("EGM1JETB");
	ReplacePVM("EGM1MIS");
	ReplacePVM("EGM1SORA");
	ReplacePVM("EGM1TSUCHI");
	ResizeTextureList((NJS_TEXLIST*)0x1557064, 118); //Egg Hornet level texlist
	RemoveVertexColors_Object((NJS_OBJECT*)0x1561A70); //Egg Hornet eggmobile part
	RemoveVertexColors_Object((NJS_OBJECT*)0x3306270); //Egg Hornet cutscene model
	//Egg Hornet model stuff
	((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[4].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[5].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[6].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[4].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[5].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[6].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[7].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[4].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[5].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[6].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[7].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x0155D5D0)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT; //drills
	((NJS_OBJECT*)0x0155B9E8)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //drills
	((NJS_OBJECT*)0x01561A70)->basicdxmodel->mats[18].attrflags |= NJD_FLAG_IGNORE_LIGHT; //front light
	((NJS_OBJECT*)0x01561A70)->basicdxmodel->mats[8].attrflags |= NJD_FLAG_IGNORE_LIGHT; //computer
	((NJS_MATERIAL*)0x015570AC)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	for (int m = 0; m < 20; m++)
	{
		((NJS_OBJECT*)0x01561A70)->basicdxmodel->mats[m].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	}
	//*(NJS_OBJECT*)0x1561A70 = object_000104E8; //Egg Hornet model
	for (unsigned int i = 0; i < 3; i++)
	{
		DrawDist_EggHornet[i].Maximum = -12500.0;
		EggHornetFog[i].Distance = -9000.0f;
		EggHornetFog[i].Layer = -1500.0f;
		EggHornetFog[i].Toggle = 1;
		EggHornetFog[i].Color = 0xFFA0A0A0;
	}
	//Rotation stuff
	WriteCall((void*)0x574BC3, EggHornet_RotationDisable);
	WriteCall((void*)0x571F79, RotateEggHornet);
	WriteCall((void*)0x5728C4, RotateEggHornet);
}

void EggHornet_OnFrame()
{
	//Egg Hornet rotation
	if (EnableEggHornet && CurrentLevel == LevelIDs_EggHornet && !IsGamePaused())
	{
		if (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21)
		{
			EggHornet_Rotation = 0;
			EggHornet_RotationDirection = 1;
			EggHornet_RotationEnabled = false;
		}
		if (EggHornet_RotationEnabled)
		{
			if (EggHornet_RotationDirection == 1) EggHornet_Rotation = EggHornet_Rotation + 546 * FramerateSetting;
			if (EggHornet_RotationDirection == -1) EggHornet_Rotation = EggHornet_Rotation - 546 * FramerateSetting;
			if (EggHornet_Rotation > 1820) EggHornet_RotationDirection = -1;
			if (EggHornet_Rotation < -1820) EggHornet_RotationDirection = 1;
		}
	}
}