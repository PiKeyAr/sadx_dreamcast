#include "stdafx.h"

#include "ZeroE101R_Water.h"
#include "LightingArrays.h"

FunctionPointer(void, sub_40A280, (NJS_OBJECT *a1), 0x40A280);
FunctionPointer(void, sub_407A00, (NJS_MODEL_SADX *model, float a2), 0x407A00);

static int e101rsea_dc = 4;

void RenderBossECOcean()
{
	if (e101rsea_dc > 13) e101rsea_dc = 4;
	matlist_00007B80[0].attr_texId = e101rsea_dc;
	if (!DroppedFrames)
	{
		DisableFog();
		njSetTexture(&EC_SEA_TEXLIST);
		njPushMatrix(0);
		njTranslate(0, Camera_Data1->Position.x, 0, Camera_Data1->Position.z);
		ProcessModelNode(&object_00007C50, QueuedModelFlagsB_SomeTextureThing, 1.0f);
		njPopMatrix(1u);
	}
	if (GameState != 16)
	{
		if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2) e101rsea_dc++;
	}
}

void LoadBossECOceanPVM(const char *filename, NJS_TEXLIST *texlist)
{
	LoadPVM(filename, texlist);
	if (SADXWater_EggCarrier) LoadPVM("SADXWTR_WAVES", &texlist_sadxwtr_waves);
	else LoadPVM("EC_SEA", &EC_SEA_TEXLIST);
}

void LoadBossECOceanTexlist()
{
	njSetTexture(&EC_SEA_TEXLIST);
}

void ComeOnChaosTimeToEat(NJS_OBJECT *a1)
{
	//This isn't entirely accurate to SA1 but I don't have the patience to find values that would replicate it 100%. 
	//Also this ugly camera workaround is necessary because SADX would be struggling with transparency otherwise.
	if ((Camera_Data1->Position.y > 155 && Camera_Data1->Position.y < 158) || (Camera_Data1->Position.y > 127 && Camera_Data1->Position.y < 130 && Camera_Data1->Position.x > 970 && Camera_Data1->Position.x < 972))
	{
		EnvMap1 = 2.0f;
		EnvMap2 = 1;
		EnvMap3 = 0.5f;
		EnvMap4 = 1.0f;
		sub_407A00((NJS_MODEL_SADX*)0x2D69600, 1.0f);
		EnvMap1 = 0.5f;
		EnvMap2 = 0.5f;
		EnvMap3 = 0.5f;
		EnvMap4 = 0.5f;
	}
	else
	{
		sub_40A280(a1);
	}
}

void __cdecl ZeroE101R_OceanDraw_r(OceanData *a1)
{
	if (!SADXWater_EggCarrier)
	{
		RenderBossECOcean();
	}
	else EggCarrier_OceanDraw_SADXStyle(a1);
}

void Bosses_Init()
{
	ReplacePVM("CHAOS1");
	ReplacePVM("CHAOS_BRAINFRAME");
	ReplacePVM("CHAOS_EFFECT");
	ReplacePVM("CHAOS_SURFACE");
	ReplacePVM("EV_CHAOS1");
	ReplacePVM("EV_E101KAI");
	ReplacePVM("EV_E101_BODY");
	ReplacePVM("EV_E101_FUN");
	ReplacePVM("EV_E103_BODY");
	ReplacePVM("EV_E103_FUN");
	ReplacePVM("EV_E104_BODY");
	ReplacePVM("EV_E104_FUN");
	ReplacePVM("EV_E105_BODY");
	ReplacePVM("EV_E105_FUN");
	ReplacePVM("ICM0001_3");
	ReplacePVM("ICM0001_5");
	//Various Chaos puddle things
	WriteCall((void*)0x6EE43F, ComeOnChaosTimeToEat); //Environment mapping effect on Chaos' puddle before Chaos 0 emerges
	((NJS_MATERIAL*)0x02D64FD8)->exponent = 11; //Chaos 1/4 puddle
	((NJS_MATERIAL*)0x038D936C)->attrflags &= ~NJD_FLAG_USE_ENV; //Chaos 0/2/6 puddle
	((NJS_MATERIAL*)0x038D936C)->exponent = 11; //Chaos 0/2/6 puddle
	ICM0001_3_TEXLISTS[0].Name = "ICM0001_5"; //Higher quality background in Sonic story
	//Generic fixes for Chaos materials
	for (unsigned int i = 0; i < LengthOfArray(ChaosMaterials); i++)
	{
		RemoveMaterialColors(ChaosMaterials[i]);
	}
}