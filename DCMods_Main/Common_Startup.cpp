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
	//General stuff
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
	WriteData<1>((char*)0x00480080, 0x0i8); //Light type for Gamma's upgrades
	//Gamma's chest stuff
	//Actual code in General_OnFrame
	RemoveVertexColors_Object(E102_OBJECTS[0]);
	RemoveVertexColors_Object(E102_OBJECTS[1]);
	RemoveVertexColors_Object(E102_OBJECTS[2]);
	RemoveVertexColors_Object(E102_OBJECTS[4]);
	RemoveVertexColors_Object(E102_OBJECTS[5]);
	RemoveVertexColors_Object(E102_OBJECTS[6]);
	RemoveVertexColors_Object(E102_OBJECTS[13]);
	RemoveVertexColors_Object(E102_OBJECTS[14]);
	RemoveVertexColors_Object(E102_OBJECTS[16]);
	RemoveVertexColors_Object(E102_OBJECTS[18]);
	RemoveVertexColors_Object(E102_OBJECTS[20]);
	RemoveVertexColors_Object(E102_ACTIONS[50]->object);
	E102_OBJECTS[0]->child->child->sibling->sibling->sibling->child->child->sibling->child->sibling->sibling->child->child->sibling->basicdxmodel->mats[8].attrflags &= ~NJD_FLAG_USE_ALPHA; //E102 unnecessary alpha
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
	RemoveVertexColors_Object((NJS_OBJECT*)0x2DA8664); //E101R model in cutscenes
	((NJS_OBJECT*)0x2DA770C)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //E101R model in cutscenes
	((NJS_OBJECT*)0x2DA770C)->basicdxmodel->mats[5].attrflags |= NJD_FLAG_IGNORE_LIGHT; //E101R model in cutscenes
	((NJS_OBJECT*)0x2DA3064)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //E101R model in cutscenes
	((NJS_OBJECT*)0x2DA6364)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //E101R model in cutscenes
	((NJS_OBJECT*)0x2DA2A2C)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_LIGHT; //E101R model in cutscenes
	((NJS_OBJECT*)0x2DA1014)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_LIGHT; //E101R model in cutscenes
	((NJS_OBJECT*)0x2DA3064)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //E101R model in cutscenes
	((NJS_OBJECT*)0x2DA1444)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //E101R model in cutscenes
	((NJS_OBJECT*)0x2DA3CEC)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //E101R model in cutscenes
	((NJS_OBJECT*)0x2DA39EC)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //E101R model in cutscenes
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
	//Stage-specific stuff
	if (EnableStationSquare)
	{
		ResizeTextureList((NJS_TEXLIST*)0x2AEE920, 22); //SSCAR 
		ResizeTextureList((NJS_TEXLIST*)0x2AD9F58, 31); //SS_TRAIN
		ResizeTextureList(&OBJ_SS_TEXLIST, 177);
	}
	if (EnableEggCarrier)
	{
		ResizeTextureList(&OBJ_EC00_TEXLIST, 206);
		ReplaceBIN("PL_W1B", "PL_W1X");
	}
	if (EnableMysticRuins)
	{
		ReplaceBIN("SL_X0B", "SL_X0X"); //Day light direction override
		ReplaceBIN("SL_X1B", "SL_X1X"); //Evening light direction override
		ReplaceBIN("SL_X2B", "SL_X2X"); //Night light direction override
	}
	if (EnableEmeraldCoast)
	{
		ResizeTextureList((NJS_TEXLIST*)0x010C0508, 10); //BEACH_SEA
		ResizeTextureList((NJS_TEXLIST*)0xF812AC, 97);
		ResizeTextureList((NJS_TEXLIST*)0xEF553C, 86);
		ResizeTextureList((NJS_TEXLIST*)0xE9A4CC, 94);
	}
	if (EnableWindyValley)
	{
		ResizeTextureList((NJS_TEXLIST*)0xB98BF8, 20);
		ResizeTextureList((NJS_TEXLIST*)0xB81304, 17);
		ResizeTextureList((NJS_TEXLIST*)0xAFEC30, 28);
	}
	if (EnableTwinklePark)
	{
		ResizeTextureList(&OBJ_TWINKLE_TEXLIST, 96);
		ResizeTextureList((NJS_TEXLIST*)0x26B9960, 35);
		ResizeTextureList((NJS_TEXLIST*)0x2721A8C, 88);
		ResizeTextureList((NJS_TEXLIST*)0x26FEA54, 30);
	}
	if (EnableSpeedHighway)
	{
		ResizeTextureList(&HIGHWAY_CAR_TEXLIST, 16);
		ResizeTextureList(&OBJ_HIGHWAY_TEXLIST, 118);
		ResizeTextureList((NJS_TEXLIST*)0x2592E8C, 89);
		ResizeTextureList((NJS_TEXLIST*)0x2581310, 32);
		ResizeTextureList((NJS_TEXLIST*)0x24CAC94, 107);
		ReplaceBIN("PL_40B", "PL_40X");
		ReplaceBIN("PL_41B", "PL_41X");
	}
	if (EnableRedMountain)
	{
		ResizeTextureList((NJS_TEXLIST*)0x230FDF4, 45);
		ResizeTextureList((NJS_TEXLIST*)0x229B8CC, 43);
		ResizeTextureList((NJS_TEXLIST*)0x224096C, 27);
		ReplaceBIN("PL_51B", "PL_51X");
	}
	if (EnableSkyDeck)
	{
		ResizeTextureList((NJS_TEXLIST*)0x20E0BB0, 76);
		ResizeTextureList((NJS_TEXLIST*)0x20AA63C, 58);
		ResizeTextureList((NJS_TEXLIST*)0x203ACE0, 65);
		ResizeTextureList(&OBJ_SKYDECK_TEXLIST, 213);
	}
	if (EnableLostWorld)
	{
		ResizeTextureList((NJS_TEXLIST*)0x1F6F02C, 58);
		ResizeTextureList((NJS_TEXLIST*)0x1E9B9AC, 95);
		ResizeTextureList((NJS_TEXLIST*)0x1E79D80, 30);
		ResizeTextureList(&OBJ_RUIN_TEXLIST, 127);
	}
	if (EnableIceCap)
	{
		ResizeTextureList((NJS_TEXLIST*)0xDE3A74, 34);
		ResizeTextureList((NJS_TEXLIST*)0xD39744, 55);
		ResizeTextureList((NJS_TEXLIST*)0xC68408, 40);
		ResizeTextureList(&OBJ_ICECAP_TEXLIST, 100);
	}
	if (EnableCasinopolis)
	{
		ResizeTextureList((NJS_TEXLIST*)0x1D1B050, 131);
		ResizeTextureList((NJS_TEXLIST*)0x1CBD1C4, 58);
		ResizeTextureList((NJS_TEXLIST*)0x1C8AF04, 26);
		ResizeTextureList((NJS_TEXLIST*)0x1C47004, 71);
		ResizeTextureList(&OBJ_CASINO9_TEXLIST, 203);
		ReplaceBIN("PL_90B", "PL_90X");
	}
	if (EnableFinalEgg)
	{
		ResizeTextureList((NJS_TEXLIST*)0x1B98518, 80);
		ResizeTextureList((NJS_TEXLIST*)0x1A60488, 68);
		ResizeTextureList((NJS_TEXLIST*)0x1AC5780, 90);
		ResizeTextureList(&OBJ_FINALEGG_TEXLIST, 169);
		ReplaceBIN("PL_A2B", "PL_A2X");
	}
	if (EnableHotShelter)
	{
		ResizeTextureList((NJS_TEXLIST*)0x180DFF4, 78);
		ResizeTextureList((NJS_TEXLIST*)0x17F56F4, 156);
		ResizeTextureList((NJS_TEXLIST*)0x17F4F74, 121);
	}
	if (EnableChaos2)
	{
		ResizeTextureList((NJS_TEXLIST*)0x117C76C, 15);
	}
	if (EnableChaos4)
	{
		ResizeTextureList((NJS_TEXLIST*)0x118FF08, 13);
		ResizeTextureList(&CHAOS4_OBJECT_TEXLIST, 6);
	}
	if (EnableChaos6)
	{
		ResizeTextureList((NJS_TEXLIST*)0x121FF28, 77);
		ResizeTextureList((NJS_TEXLIST*)0x11F04A0, 79);
	}
	if (EnablePerfectChaos)
	{
		ResizeTextureList((NJS_TEXLIST*)0x1494FBC, 168);
	}
	if (EnableEggHornet)
	{
		ResizeTextureList((NJS_TEXLIST*)0x1557064, 118); //Egg Hornet level texlist
	}
	if (EnableEggWalker)
	{
		ResizeTextureList((NJS_TEXLIST*)0x15E99F8, 231);
	}
	if (EnableEggViper)
	{
		ResizeTextureList((NJS_TEXLIST*)0x167E5CC, 45);
		ReplaceBIN("PL_M0B", "PL_M0X");
	}
	if (EnableE101)
	{
		ResizeTextureList((NJS_TEXLIST*)0x14FBFB4, 77);
	}
	if (EnableZeroE101R)
	{
		ResizeTextureList((NJS_TEXLIST*)0x16B460C, 76); //Zero/E101R texlist
	}
	if (EnableSSGarden) ResizeTextureList(&GARDEN00_OBJECT_TEXLIST, 16);
}