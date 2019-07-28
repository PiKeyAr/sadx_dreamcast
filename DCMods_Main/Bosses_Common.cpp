#include "stdafx.h"

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

void ChaosTimeToEat_DrawModel(NJS_OBJECT* a1)
{
	EnvMap1 = 2.0f;
	EnvMap2 = 1;
	EnvMap3 = 0.5f;
	EnvMap4 = 1.0f;
	Direct3D_EnableZWrite(0);
	DrawModel(a1->basicdxmodel);
	Direct3D_EnableZWrite(1);
	EnvMap1 = 0.5f;
	EnvMap2 = 0.5f;
	EnvMap3 = 0.5f;
	EnvMap4 = 0.5f;
}

void ComeOnChaosTimeToEat(NJS_OBJECT *a1)
{
	DrawModelCallback_QueueObject(ChaosTimeToEat_DrawModel, a1, 2000.0f, (QueuedModelFlagsB)0);
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
	RemoveVertexColors_Object((NJS_OBJECT*)0x991268); //Zero main and cutscene model
	RemoveVertexColors_Object((NJS_OBJECT*)0x3306270); //Egg Hornet cutscene model
	RemoveVertexColors_Object((NJS_OBJECT*)0x330A4D0); //Eggman in Egg Hornet cutscene model
	RemoveVertexColors_Object((NJS_OBJECT*)0x2EEB524); //Eggman in Eggmobile in cutscenes (EV_EGGMOBLE0)
	WriteData<1>((char*)0x568D20, 0xC3u); //Disable SetClip_E101R
	RemoveVertexColors_Object((NJS_OBJECT*)0x02DA8664); //E101R model in cutscenes
	RemoveVertexColors_Object((NJS_OBJECT*)0x269D214); //Eggmobile 2P
	RemoveVertexColors_Object((NJS_OBJECT*)0x269EE24); //Eggman 2P
	RemoveVertexColors_Object((NJS_OBJECT*)0x2C66BAC); //Chaos 0 in cutscenes
	RemoveVertexColors_Object((NJS_OBJECT*)0x1133328); //Chaos 2 (main and cutscenes)
	RemoveVertexColors_Object((NJS_OBJECT*)0x302FD70); //Chaos 4 cutscene model
	RemoveVertexColors_Object((NJS_OBJECT*)0x2D6962C); //Chaos puddle in cutscenes
	RemoveVertexColors_Object((NJS_OBJECT*)0x38DD9BC); //Chaos puddle in cutscenes + Chaos 0
	RemoveVertexColors_Object((NJS_OBJECT*)0x38DEA10); //Chaos 2 small puddles + Chaos 0 when defeated
	WriteCall((void*)0x6EE43F, ComeOnChaosTimeToEat); //Environment mapping effect on Chaos' puddle before Chaos 0 emerges
	((NJS_MATERIAL*)0x02D64FD8)->exponent = 11; //Chaos 1/4 puddle
	((NJS_MATERIAL*)0x038D936C)->attrflags &= ~NJD_FLAG_USE_ENV; //Chaos 0/2/6 puddle
	((NJS_MATERIAL*)0x038D936C)->exponent = 11; //Chaos 0/2/6 puddle
	ICM0001_3_TEXLISTS[0].Name = "ICM0001_5"; //Higher quality background in Sonic story
}