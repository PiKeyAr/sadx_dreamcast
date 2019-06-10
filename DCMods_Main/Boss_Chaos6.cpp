#include "stdafx.h"
#include "Chaos6_Motion.h"

NJS_TEXNAME textures_chaos6[77];
NJS_TEXLIST texlist_chaos6 = { arrayptrandlength(textures_chaos6) };

NJS_TEXNAME textures_chaos6_2[79];
NJS_TEXLIST texlist_chaos6_2 = { arrayptrandlength(textures_chaos6_2) };

DataArray(FogData, Chaos6SFog, 0x011EF0E8, 3);
DataArray(FogData, Chaos6KFog, 0x011EF118, 3);
DataArray(NJS_VECTOR, SkyBoxScale_Chaos6S, 0x011EF040, 3);
DataArray(NJS_VECTOR, SkyBoxScale_Chaos6K, 0x011EF064, 3);
DataArray(DrawDistance, DrawDist_Chaso6S, 0x011EF0B8, 3);
DataArray(DrawDistance, DrawDist_Chaso6K, 0x011EF0D0, 3);

void __cdecl Chaos6SkyboxBottom(EntityData1 *a1)
{
	Sint16 v1; // cx
	NJS_TEX *v2; // eax

	if (!MissedFrames)
	{
		v1 = *(Sint16*)&a1->LoopData;
		v2 = ((NJS_OBJECT*)0x11EDF38)->basicdxmodel->meshsets->vertuv;
		v2->v = v1 + 2040;
		v2[2].v = v1 + 2040;
		v2[1].v = v1;
		v2[3].v = v1;
		DisableFog();
		njSetTexture(&CHAOS6_BG_TEXLIST);
		njPushMatrix(0);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		SetMaterialAndSpriteColor_Float(0.5, 0.0, 0.0, 0.0);
		njTranslate(0, Camera_Data1->Position.x, 0, Camera_Data1->Position.z);
		njScale(0, 3.0, 1.0, 3.0);
		DrawQueueDepthBias = -32000.0f;
		ProcessModelNode((NJS_OBJECT*)0x11EDF38, QueuedModelFlagsB_SomeTextureThing, 3.0f);
		DrawQueueDepthBias = 0;
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
		njPopMatrix(1u);
		ToggleStageFog();
	}
}

void __cdecl Chaos6SkyboxMain()
{
	if (!MissedFrames)
	{
		DisableFog();
		njSetTexture(&CHAOS6_BG_TEXLIST);
		njPushMatrix(0);
		njTranslate(0, Camera_Data1->Position.x, 0.0, Camera_Data1->Position.z);
		njRotateY(0, 57344);
		njScaleV(0, &Skybox_Scale);
		DrawQueueDepthBias = -30000.0f;
		ProcessModelNode((NJS_OBJECT*)0x11EEED8, QueuedModelFlagsB_SomeTextureThing, 3.0f);
		DrawQueueDepthBias = 0;
		njPopMatrix(1u);
		ToggleStageFog();
	}
}

void UnloadLevelFiles_B_CHAOS6()
{
	delete B_CHAOS6_0_Info;
	delete B_CHAOS6_1_Info;
	B_CHAOS6_0_Info = nullptr;
	B_CHAOS6_1_Info = nullptr;
}

void LoadLevelFiles_B_CHAOS6()
{
	CheckAndUnloadLevelFiles();
	B_CHAOS6_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_CHAOS6\\0.sa1lvl"));
	B_CHAOS6_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_CHAOS6\\1.sa1lvl"));
	LandTable *B_CHAOS6_0 = B_CHAOS6_0_Info->getlandtable();
	LandTable *B_CHAOS6_1 = B_CHAOS6_1_Info->getlandtable();
	RemoveMaterialColors_Landtable(B_CHAOS6_0);
	RemoveMaterialColors_Landtable(B_CHAOS6_1);
	B_CHAOS6_0->TexList = &texlist_chaos6;
	B_CHAOS6_1->TexList = &texlist_chaos6_2;
	LandTableArray[24] = B_CHAOS6_0; //Chaos 6S
	LandTableArray[25] = B_CHAOS6_1; //Chaos 6K
}

void Chaos6_Init()
{
	ReplaceBIN_DC("SET1800B");
	ReplaceBIN_DC("SET1800S");
	ReplaceBIN_DC("SET1801K");
	ReplacePVM("LM_CHAOS6");
	ReplacePVM("LM_CHAOS6_2");
	ReplacePVM("CHAOS6");
	ReplacePVM("CHAOS6_BG");
	ReplacePVM("CHAOS6_EFFECT");
	ReplacePVM("CHAOS6_EGGMAN");
	ReplacePVM("CHAOS6_EISEI");
	ReplacePVM("CHAOS6_OBJECT");
	RemoveVertexColors_Object((NJS_OBJECT*)0x1272FF4); //Main model
	RemoveVertexColors_Object((NJS_OBJECT*)0x128A6DC); //Transforming
	RemoveVertexColors_Object((NJS_OBJECT*)0x12941B0); //Transformed
	ResizeTextureList((NJS_TEXLIST*)0x121FF28, textures_chaos6);
	ResizeTextureList((NJS_TEXLIST*)0x11F04A0, textures_chaos6_2);
	WriteJump((void*)0x556FD0, Chaos6SkyboxBottom);
	WriteJump((void*)0x556F20, Chaos6SkyboxMain);
	((NJS_ACTION*)0x134C56C)->motion = &Chaos6Animation3; //Fix flickering stuff in Chaos 6' walking animation
	WriteData<1>((char*)0x556E40, 0xC3u); //Disable SetClip_Chaos6S
	WriteData<1>((char*)0x556D60, 0xC3u); //Disable SetClip_Chaos6K
	for (unsigned int i = 0; i < 3; i++)
	{
		Chaos6SFog[i].Distance = 12000.0f;
		Chaos6KFog[i].Distance = 12000.0f;
		SkyBoxScale_Chaos6S[i].x = 1.0f;
		SkyBoxScale_Chaos6S[i].y = 1.0f;
		SkyBoxScale_Chaos6S[i].z = 1.0f;
		SkyBoxScale_Chaos6K[i].x = 1.0f;
		SkyBoxScale_Chaos6K[i].y = 1.0f;
		SkyBoxScale_Chaos6K[i].z = 1.0f;
		DrawDist_Chaso6S[i].Maximum = -18000.0f;
		DrawDist_Chaso6K[i].Maximum = -18000.0f;
	}
}