#include "stdafx.h"

//The init function here runs right when the mod loads. 
//It fixes/replaces various character and boss-related things that are used across multiple levels and/or load before any level (e.g. character select screen).
//Maybe I should move it to mod.cpp or elsewhere... Also maybe do PVM/BIN replacements in advance too

FunctionPointer(void, sub_4014B0, (), 0x4014B0);

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

void FPSLockHook(int a1)
{
	if (a1 == 1 && CurrentLevel != LevelIDs_TwinkleCircuit) a1 = 2;
	DeltaTime_Multiplier(a1);
}

void InputHookForCutscenes()
{
	sub_4014B0();
	if (CutsceneFadeMode == 1) ControllerPointers[0]->PressedButtons |= Buttons_C;
}

void FixCutsceneTransition()
{
	if (CutsceneID == 134) Cutscene_ResetTransition(); //Knuckles back in Station Square after meeting Pacman
	if (CutsceneID == 380) Cutscene_ResetTransition(); //Gamma after Windy Valley
}

void Init_Global()
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
	//FPS lock
	if (FPSLock) WriteCall((void*)0x411E79, FPSLockHook);
	//Cancel cutscenes with C button
	if (CutsceneSkipMode != 3)
	{
		WriteData<1>((char*)0x431520, 0x01);
		if (CutsceneSkipMode != 2) WriteCall((void*)0x4314F9, InputHookForCutscenes);
	}
	//Fix for cutscene transitions
	if (EnableCutsceneFix)
	{
		WriteCall((void*)0x4311E3, FixCutsceneTransition); //Main thread
		WriteData<5>((void*)0x43131D, 0x90u); //Skipping cutscenes
	}
	//Environment maps
	EnvMap1 = 0.5f;
	EnvMap2 = 0.5f;
	EnvMap3 = 0.5f;
	EnvMap4 = 0.5f;
	//Amy's barrel fix
	AMY_OBJECTS[1]->child->child->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
	AMY_OBJECTS[1]->child->child->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
	//Various material fixes
	RemoveVertexColors_Object((NJS_OBJECT*)0x10D7774); //Question mark from Character Select
	((NJS_OBJECT*)0x10D7774)->basicdxmodel->mats[0].attr_texId = 10; //Fix wrong texture on question mark
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
	RemoveVertexColors_Object((NJS_OBJECT*)0x119E240); //Chaos 4 main/NPC model
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