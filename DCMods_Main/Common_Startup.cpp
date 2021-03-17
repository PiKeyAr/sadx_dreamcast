#include "stdafx.h"

// The init function here runs right when the mod loads.
// It fixes/replaces various character and boss-related things that are used across multiple levels and/or load before any level (e.g. character select screen)

FunctionPointer(void, sub_4014B0, (), 0x4014B0);

NJS_TEXNAME textures_obj_regular[100];
NJS_TEXLIST texlist_obj_regular = {arrayptrandlength(textures_obj_regular)};

NJS_TEXNAME textures_e101r_tikei[76];
NJS_TEXLIST texlist_e101r_tikei = {arrayptrandlength(textures_e101r_tikei)};

void ResizeE101RTexlist()
{
	*(NJS_TEXLIST*)0x16B460C = texlist_e101r_tikei;
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
	if (a1 == 1 && GameState != 21 && CurrentLevel != LevelIDs_TwinkleCircuit) a1 = 2;
	DeltaTime_Multiplier(a1);
}

void InputHookForCutscenes()
{
	sub_4014B0();
	if (CutsceneFadeMode == 1) ControllerPointers[0]->PressedButtons |= Buttons_Down;
}

void FixCutsceneTransition()
{
	if (CutsceneID == 134) Cutscene_ResetTransition(); // Knuckles back in Station Square after meeting Pacman
	if (CutsceneID == 380) Cutscene_ResetTransition(); // Gamma after Windy Valley
}

void Init_Global()
{
	// General stuff
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
	// Replacements from DC_General
	if (DLLLoaded_HDGUI == false)
	{
		ReplacePVM("OBJ_REGULAR");
		OBJ_REGULAR_TEXLIST = texlist_obj_regular; // Added DC ripple texture
	}
	ReplacePVR("AL_BARRIA");
	ReplacePVR("AM_SEA124_8");
	ReplacePVR("BELT2");
	ReplacePVR("CAPTUREBEAM");
	ReplacePVR("SORA60");
	ReplacePVR("SSTX_BODY");
	ReplacePVR("SW_NBG2");
	ReplacePVR("S_WT28");
	ReplacePVR("S_WT32");
	ReplacePVR("TM32KURAGE");
	ReplacePVR("SEA");
	ReplacePVR("SKY_H_BAL01");
	ReplacePVR("STX_ICE0");
	ReplacePVR("MRASC_016S_HIRUUMI");
	ReplacePVR("MRASC_256S_HIRUSORAA");
	ReplacePVR("WATERCOLUMN01");
	ReplacePVR("WINDSEA001");
	ReplacePVR("WINDY2_NBG1");
	ReplacePVR("WINDY2_NBG2");
	ReplacePVR("WINDY2_NBG5");
	ReplacePVR("WINDY3_NBG2");
	ReplacePVM("AIR_SIGNAL");
	ReplacePVM("ANCIENT_LIGHT");
	ReplacePVM("ANKO");
	ReplacePVM("ANKO_T");
	ReplacePVM("A_MASTER");
	ReplacePVM("BANB");
	ReplacePVM("BIG_KAERU");
	ReplacePVM("BO1_MODEL");
	ReplacePVM("BULLET");
	ReplacePVM("CAPTUREBEAM");
	ReplacePVM("CHAOS_EMERALD");
	ReplacePVM("COERA");
	ReplacePVM("E102");
	ReplacePVM("E102BEAM");
	ReplacePVM("E102EFFECT");
	ReplacePVM("E102HIT");
	ReplacePVM("E103OLD");
	ReplacePVM("E104OLD");
	ReplacePVM("E105");
	ReplacePVM("E105OLD");
	ReplacePVM("EDV_K_HLIFT");
	ReplacePVM("EDV_S_STDOOR");
	ReplacePVM("EFF_C7_BUBBLE");
	ReplacePVM("EFF_CANDLE");
	ReplacePVM("EFF_REGULAR");
	ReplacePVM("EFF_TWINKLE");
	ReplacePVM("EFF_WT_COLUMN");
	ReplacePVM("EGGROB");
	ReplacePVM("EGG_MISSILE");
	ReplacePVM("EME_KIRAN");
	ReplacePVM("ER_9000_EGGMANROBO");
	ReplacePVM("EV_EGGMAN_BODY");
	ReplacePVM("EV_EGGMOBILE1");
	ReplacePVM("EV_EGGMOBLE0DM");
	ReplacePVM("EV_EGGMOBLE1");
	ReplacePVM("EV_EGGMOBLE2");
	ReplacePVM("EV_HELI");
	ReplacePVM("EV_K_PATYA");
	ReplacePVM("EV_SPOTLIGHT");
	ReplacePVM("EV_S_MSBODY");
	ReplacePVM("EV_S_T2C_BODY");
	ReplacePVM("EV_TR1");
	ReplacePVM("EV_TR2_BIG");
	ReplacePVM("E_AMENBO");
	ReplacePVM("E_BOMB");
	ReplacePVM("E_BUYON");
	ReplacePVM("E_CART");
	ReplacePVM("E_LEON");
	ReplacePVM("E_ROBO");
	ReplacePVM("E_SAI");
	ReplacePVM("E_SARU");
	ReplacePVM("E_SNAKE");
	ReplacePVM("E_SNOWMAN");
	ReplacePVM("F0000_FROG");
	ReplacePVM("FAT_B");
	ReplacePVM("FPACK");
	ReplacePVM("FROG");
	ReplacePVM("FROG1");
	ReplacePVM("FROG2");
	ReplacePVM("FROG3");
	ReplacePVM("F_EGG_ZANGAI");
	ReplacePVM("GACHAPON");
	ReplacePVM("GOMA");
	ReplacePVM("GORI");
	ReplacePVM("GR1_MODEL");
	ReplacePVM("GR_10000_GIRL1");
	ReplacePVM("HAMMER");
	ReplacePVM("HINT");
	ReplacePVM("HOT_E105");
	ReplacePVM("ICM0060");
	ReplacePVM("ICM006D");
	ReplacePVM("ICM00C3");
	ReplacePVM("ICM00C5");
	ReplacePVM("ICM00C7");
	ReplacePVM("ICM0142");
	ReplacePVM("ISHIDAI");
	ReplacePVM("KAJIKI");
	ReplacePVM("KAOS_EME");
	ReplacePVM("KNU_EFF");
	ReplacePVM("KOAR");
	ReplacePVM("KUJA");
	ReplacePVM("LAST1A_HIGHWAY_A");
	ReplacePVM("LIGHTNING");
	ReplacePVM("LION");
	ReplacePVM("LOCKET");
	ReplacePVM("L_SIBUKI");
	ReplacePVM("MECHA");
	ReplacePVM("MGHAND");
	ReplacePVM("MIZUBASIRA");
	ReplacePVM("MOGU");
	ReplacePVM("MOGURATATAKI");
	ReplacePVM("MP_10000_POLICE");
	ReplacePVM("MRACE_EGGMOBLE");
	ReplacePVM("M_EM_BLACK");
	ReplacePVM("M_EM_BLUE");
	ReplacePVM("M_EM_GREEN");
	ReplacePVM("M_EM_PURPLE");
	ReplacePVM("M_EM_RED");
	ReplacePVM("M_EM_SKY");
	ReplacePVM("M_EM_WHITE");
	ReplacePVM("M_EM_YELLOW");
	ReplacePVM("M_TR_S");
	ReplacePVM("NEW_BB");
	ReplacePVM("NISEPAT");
	ReplacePVM("OL_10000");
	ReplacePVM("OUM");
	ReplacePVM("OY_10000");
	ReplacePVM("PEN");
	ReplacePVM("PIRANIA");
	ReplacePVM("RAKO");
	ReplacePVM("ROBOTV");
	ReplacePVM("RYUGU");
	ReplacePVM("SAKE");
	ReplacePVM("SAME");
	ReplacePVM("SEA_BASS");
	ReplacePVM("SHAPE_FROG");
	ReplacePVM("SHAPE_FROG_2");
	ReplacePVM("SUKA");
	ReplacePVM("SUPI_SUPI");
	ReplacePVM("TAI");
	ReplacePVM("TOGEBALL_TOGEBALL");
	ReplacePVM("TR2CRASH");
	ReplacePVM("TUBA");
	ReplacePVM("UNAGI");
	ReplacePVM("UNI_A_UNIBODY");
	ReplacePVM("UNI_C_UNIBODY");
	ReplacePVM("USA");
	ReplacePVM("UTSUBO");
	ReplacePVM("VER1_WING");
	ReplacePVM("VER2_WING");
	ReplacePVM("VER3_WING");
	ReplacePVM("VER4_WING");
	ReplacePVM("WARA");
	ReplacePVM("WAVE7_WA");
	ReplacePVM("WINDY_E103");
	ReplacePVM("WING_P");
	ReplacePVM("WING_T");
	ReplacePVM("ZOU");
	WriteData<1>((char*)0x00480080, 0x0i8); // Light type for Gamma's upgrades
	// Gamma's chest stuff
	// Actual code in General_OnFrame
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
	E102_OBJECTS[0]->child->child->sibling->sibling->sibling->child->child->sibling->child->sibling->sibling->child->child->sibling->basicdxmodel->mats[8].attrflags &= ~NJD_FLAG_USE_ALPHA; // E102 unnecessary alpha
	// FPS lock
	if (FPSLock) WriteCall((void*)0x411E79, FPSLockHook);
	// Cancel cutscenes with C button
	if (CutsceneSkipMode != 3)
	{
		WriteData<1>((char*)0x431520, 0x20); // Use D-Pad Down instead of A or Start
		if (CutsceneSkipMode != 2) WriteCall((void*)0x4314F9, InputHookForCutscenes);
	}
	// Fix for cutscene transitions
	if (EnableCutsceneFix)
	{
		WriteCall((void*)0x4311E3, FixCutsceneTransition); // Main thread
		WriteData<5>((void*)0x43131D, 0x90u); // Skipping cutscenes
	}
	// Environment maps
	EnvMap1 = 0.5f;
	EnvMap2 = 0.5f;
	EnvMap3 = 0.5f;
	EnvMap4 = 0.5f;
	// Amy's barrel fix
	AMY_OBJECTS[1]->child->child->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
	AMY_OBJECTS[1]->child->child->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
	// Various material fixes
	RemoveVertexColors_Object((NJS_OBJECT*)0x10D7774); // Question mark from Character Select
	((NJS_OBJECT*)0x10D7774)->basicdxmodel->mats[0].attr_texId = 10; // Fix wrong texture on question mark
	RemoveVertexColors_Object((NJS_OBJECT*)0x991268); // Zero main and cutscene model
	RemoveVertexColors_Object((NJS_OBJECT*)0x3306270); // Egg Hornet cutscene model
	RemoveVertexColors_Object((NJS_OBJECT*)0x330A4D0); // Eggman in Egg Hornet cutscene model
	RemoveVertexColors_Object((NJS_OBJECT*)0x2EEB524); // Eggman in Eggmobile in cutscenes (EV_EGGMOBLE0)
	WriteData<1>((char*)0x568D20, 0xC3u); // Disable SetClip_E101R
	RemoveVertexColors_Object((NJS_OBJECT*)0x2DA8664); // E101R model in cutscenes
	((NJS_OBJECT*)0x2DA770C)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; // E101R model in cutscenes
	((NJS_OBJECT*)0x2DA770C)->basicdxmodel->mats[5].attrflags |= NJD_FLAG_IGNORE_LIGHT; // E101R model in cutscenes
	((NJS_OBJECT*)0x2DA3064)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; // E101R model in cutscenes
	((NJS_OBJECT*)0x2DA6364)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; // E101R model in cutscenes
	((NJS_OBJECT*)0x2DA2A2C)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_LIGHT; // E101R model in cutscenes
	((NJS_OBJECT*)0x2DA1014)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_LIGHT; // E101R model in cutscenes
	((NJS_OBJECT*)0x2DA3064)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; // E101R model in cutscenes
	((NJS_OBJECT*)0x2DA1444)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; // E101R model in cutscenes
	((NJS_OBJECT*)0x2DA3CEC)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; // E101R model in cutscenes
	((NJS_OBJECT*)0x2DA39EC)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; // E101R model in cutscenes
	RemoveVertexColors_Object((NJS_OBJECT*)0x269D214); // Eggmobile 2P
	RemoveVertexColors_Object((NJS_OBJECT*)0x269EE24); // Eggman 2P
	RemoveVertexColors_Object((NJS_OBJECT*)0x2C66BAC); // Chaos 0 in cutscenes
	RemoveVertexColors_Object((NJS_OBJECT*)0x1133328); // Chaos 2 (main and cutscenes)
	RemoveVertexColors_Object((NJS_OBJECT*)0x119E240); // Chaos 4 main/NPC model
	RemoveVertexColors_Object((NJS_OBJECT*)0x302FD70); // Chaos 4 cutscene model
	RemoveVertexColors_Object((NJS_OBJECT*)0x2D6962C); // Chaos puddle in cutscenes
	RemoveVertexColors_Object((NJS_OBJECT*)0x38DD9BC); // Chaos puddle in cutscenes + Chaos 0
	RemoveVertexColors_Object((NJS_OBJECT*)0x38DEA10); // Chaos 2 small puddles + Chaos 0 when defeated
	WriteCall((void*)0x6EE43F, ComeOnChaosTimeToEat); // Environment mapping effect on Chaos' puddle before Chaos 0 emerges
	((NJS_MATERIAL*)0x02D64FD8)->exponent = 11; // Chaos 1/4 puddle
	((NJS_MATERIAL*)0x038D936C)->attrflags &= ~NJD_FLAG_USE_ENV; // Chaos 0/2/6 puddle
	((NJS_MATERIAL*)0x038D936C)->exponent = 11; // Chaos 0/2/6 puddle
	ICM0001_3_TEXLISTS[0].Name = "ICM0001_5"; // Higher quality background in Sonic story
	// Stage-specific stuff
	if (EnableStationSquare)
	{
		ReplaceSET("SETSS00A");
		ReplaceSET("SETSS00B");
		ReplaceSET("SETSS00E");
		ReplaceSET("SETSS00K");
		ReplaceSET("SETSS00L");
		ReplaceSET("SETSS00M");
		ReplaceSET("SETSS00S");
		ReplaceSET("SETSS01A");
		ReplaceSET("SETSS01B");
		ReplaceSET("SETSS01E");
		ReplaceSET("SETSS01K");
		ReplaceSET("SETSS01L");
		ReplaceSET("SETSS01M");
		ReplaceSET("SETSS01S");
		ReplaceSET("SETSS02S");
		ReplaceSET("SETSS02B");
		ReplaceSET("SETSS03A");
		ReplaceSET("SETSS03B");
		ReplaceSET("SETSS03E");
		ReplaceSET("SETSS03K");
		ReplaceSET("SETSS03L");
		ReplaceSET("SETSS03M");
		ReplaceSET("SETSS03S");
		ReplaceSET("SETSS04A");
		ReplaceSET("SETSS04B");
		ReplaceSET("SETSS04E");
		ReplaceSET("SETSS04K");
		ReplaceSET("SETSS04L");
		ReplaceSET("SETSS04M");
		ReplaceSET("SETSS04S");
		ReplaceSET("SETSS05S");
		ReplaceCAM("CAMSS00S");
		ReplaceCAM("CAMSS01S");
		ReplaceCAM("CAMSS02S");
		ReplaceCAM("CAMSS03S");
		ReplaceCAM("CAMSS04S");
		ReplaceCAM("CAMSS05S");
		ReplacePVM("ADVSS00");
		ReplacePVM("ADVSS01");
		ReplacePVM("ADVSS02");
		ReplacePVM("ADVSS03");
		ReplacePVM("ADVSS04");
		ReplacePVM("ADVSS05");
		ReplacePVM("OBJ_SS");
		ReplacePVM("SS_BG");
		ReplacePVM("SS_BOAT");
		ReplacePVM("SS_BURGER");
		ReplacePVM("SS_CASINO");
		ReplacePVM("SS_DENTOU");
		ReplacePVM("SS_EKIIN");
		ReplacePVM("SS_KANBAN");
		ReplacePVM("SS_MIZUGI");
		ReplacePVM("SS_PEOPLE");
		ReplacePVM("SS_TRAIN");
		ReplacePVM("SS_TWINS");
		ReplacePVM("SSCAR");
		ReplacePVM("SSPATCAR_BODY");
		ReplacePVR("SS_FINESKY");
		ReplacePVR("SS_NIGHTSKY");
		ReplacePVR("SS_NIGHTSKYB");
		ReplacePVR("SS_YUSKAY_MINI");
	}
	if (EnableEggCarrier)
	{
		// Outside
		ReplaceSET("SETEC00S");
		ReplaceSET("SETEC00M");
		ReplaceSET("SETEC00K");
		ReplaceSET("SETEC00A");
		ReplaceSET("SETEC00E");
		ReplaceSET("SETEC00B");
		ReplaceSET("SETEC01S");
		ReplaceSET("SETEC01M");
		ReplaceSET("SETEC01K");
		ReplaceSET("SETEC01A");
		ReplaceSET("SETEC01E");
		ReplaceSET("SETEC01B");
		ReplaceSET("SETEC02S");
		ReplaceSET("SETEC02M");
		ReplaceSET("SETEC02K");
		ReplaceSET("SETEC02A");
		ReplaceSET("SETEC02E");
		ReplaceSET("SETEC02B");
		ReplaceSET("SETEC03S");
		ReplaceSET("SETEC03M");
		ReplaceSET("SETEC04S");
		ReplaceSET("SETEC04M");
		ReplaceSET("SETEC04K");
		ReplaceSET("SETEC04A");
		ReplaceSET("SETEC04E");
		ReplaceSET("SETEC04B");
		ReplaceSET("SETEC05S");
		ReplaceSET("SETEC05M");
		ReplaceCAM("CAMEC00S");
		ReplaceCAM("CAMEC01S");
		ReplaceCAM("CAMEC02S");
		ReplaceCAM("CAMEC03S");
		ReplaceCAM("CAMEC04S");
		ReplaceCAM("CAMEC05S");
		ReplacePVM("ADV_EC00");
		ReplacePVM("ADV_EC01");
		ReplacePVM("ADV_EC02");
		ReplacePVM("ADV_EC03");
		ReplacePVM("ADV_EC04");
		ReplacePVM("ADV_EC05");
		ReplacePVM("BG_EC00");
		ReplacePVM("EC_ACTDOOR");
		ReplacePVM("EC_BG");
		ReplacePVM("EC_BOAT");
		ReplacePVM("EC_CLOUDS");
		ReplacePVM("EC_IKADA");
		ReplacePVM("EC_LIGHT");
		ReplacePVM("EC_SKY");
		ReplacePVM("EC_TORNADO");
		ReplacePVM("EC_TRANSFORM");
		ReplacePVM("EC_WATER");
		ReplacePVM("EV_ECCLOUD");
		ReplacePVM("EC_SEA");
		ReplacePVM("OBJ_EC00");
		// Inside
		ReplaceSET("SETEC30S");
		ReplaceSET("SETEC31S");
		ReplaceSET("SETEC31B");
		ReplaceSET("SETEC32S");
		ReplaceSET("SETEC33S");
		ReplaceSET("SETEC34S");
		ReplaceSET("SETEC35S");
		ReplaceCAM("CAMEC30S");
		ReplaceCAM("CAMEC31S");
		ReplaceCAM("CAMEC32S");
		ReplaceCAM("CAMEC33S");
		ReplaceCAM("CAMEC34S");
		ReplaceCAM("CAMEC35S");
		ReplacePVM("ADV_EC30");
		ReplacePVM("ADV_EC31");
		ReplacePVM("ADV_EC32");
		ReplacePVM("ADV_EC33");
		ReplacePVM("ADV_EC34");
		ReplacePVM("ADV_EC35");
		ReplacePVM("ADV_EC36");
		ReplacePVM("OBJ_EC30");
		ReplacePVM("EC_ACTDOOR");
		ReplacePVM("EC_ALIFE");
		ReplacePVM("EC_EGGLIFT");
		ReplacePVM("EC_TARAI");
		ReplacePVM("PVME101FACTORY");
	}
	if (EnableMysticRuins)
	{
		ReplaceSET("SETMR00A");
		ReplaceSET("SETMR00B");
		ReplaceSET("SETMR00E");
		ReplaceSET("SETMR00K");
		ReplaceSET("SETMR00L");
		ReplaceSET("SETMR00M");
		ReplaceSET("SETMR00S");
		ReplaceSET("SETMR01A");
		ReplaceSET("SETMR01B");
		ReplaceSET("SETMR01E");
		ReplaceSET("SETMR01K");
		ReplaceSET("SETMR01L");
		ReplaceSET("SETMR01M");
		ReplaceSET("SETMR01S");
		ReplaceSET("SETMR02S");
		ReplaceSET("SETMR03S");
		ReplaceCAM("CAMMR00S");
		ReplaceCAM("CAMMR01S");
		ReplaceCAM("CAMMR02S");
		ReplaceCAM("CAMMR03S");
		ReplacePVM("ADV_MR00");
		ReplacePVM("ADV_MR01");
		ReplacePVM("ADV_MR02");
		ReplacePVM("ADV_MR03");
		ReplacePVM("MROBJ");
		ReplacePVM("MR_SKY00");
		ReplacePVM("MR_SKY01");
		ReplacePVM("MR_SKY02");
		ReplacePVM("MR_TRAIN");
		ReplacePVM("TANKEN");
		ReplacePVM("MROBJ_MAST");
		ReplacePVM("MROBJ_MASTLDAM");
		ReplacePVM("MROBJ_MASTSDAM");
		ReplacePVM("MR_EGG");
		ReplacePVM("MR_PYRAMID");
		ReplacePVM("MR_TORNADO2");
		ReplacePVM("MR_FINALEGG");
		ReplaceBIN("SL_X0B"); // Day light direction override
		ReplaceBIN("SL_X1B"); // Evening light direction override
		ReplaceBIN("SL_X2B"); // Night light direction override
	}
	if (EnablePast)
	{
		ReplaceCAM("CAMPAST00S");
		ReplaceCAM("CAMPAST01S");
		ReplaceCAM("CAMPAST02S");
		ReplaceSET("SETPAST00S");
		ReplaceSET("SETPAST01S");
		ReplaceSET("SETPAST02S");
		ReplacePVM("EFF_PAST");
		ReplacePVM("EV_ALIFE");
		ReplacePVM("K_PATYA");
		ReplacePVM("OBJ_PAST");
		ReplacePVM("PAST00");
		ReplacePVM("PAST01");
		ReplacePVM("PAST02");
		ReplacePVM("PAST_KN_FAM");
		ReplacePVM("KNUCKLES_NORMAL");
		ReplacePVM("KNUCKLES_DEBU");
		ReplacePVM("KNUCKLES_LONG");
	}
	if (EnableEmeraldCoast)
	{
		if (!IamStupidAndIWantFuckedUpOcean)
		{
			ReplaceCAM("CAM0100E");
			ReplaceCAM("CAM0100S");
			ReplaceCAM("CAM0101S");
			ReplaceCAM("CAM0102B");
			ReplaceCAM("CAM0102S");
		}
		else
		{
			ReplaceGeneric("CAM0100E.BIN", "CAM0100E_R.BIN");
			ReplaceGeneric("CAM0100S.BIN", "CAM0100S_R.BIN");
			ReplaceGeneric("CAM0101S.BIN", "CAM0101S_R.BIN");
			ReplaceGeneric("CAM0102S.BIN", "CAM0102S_R.BIN");
			ReplaceGeneric("CAM0102B.BIN", "CAM0102B_R.BIN");
		}
		ReplaceSET("SET0100E");
		ReplaceSET("SET0100S");
		ReplaceSET("SET0101M");
		ReplaceSET("SET0101S");
		ReplaceSET("SET0102B");
		ReplaceSET("SET0102S");
		ReplacePVM("BEACH01");
		ReplacePVM("BEACH02");
		ReplacePVM("BEACH03");
		ReplacePVM("BG_BEACH");
		ReplacePVM("OBJ_BEACH");
		ReplacePVM("BEACH_SEA");
		WriteData<1>((char*)0x4F68E0, 0xC3u); // Disable SetClip_ECoast1
	}
	if (EnableWindyValley)
	{
		ReplaceSET("SET0200S");
		ReplaceSET("SET0200E");
		ReplaceSET("SET0201S");
		ReplaceSET("SET0202M");
		ReplaceSET("SET0202S");
		ReplaceCAM("CAM0200E");
		ReplaceCAM("CAM0200S");
		ReplaceCAM("CAM0201S");
		ReplaceCAM("CAM0202M");
		ReplaceCAM("CAM0202S");
		ReplacePVM("OBJ_WINDY");
		ReplacePVM("WINDY01");
		ReplacePVM("WINDY02");
		ReplacePVM("WINDY03");
		ReplacePVM("WINDY_BACK");
		ReplacePVM("WINDY_BACK2");
		ReplacePVM("WINDY_BACK3");
	}
	if (EnableTwinklePark)
	{
		ReplaceCAM("CAM0300S");
		ReplaceCAM("CAM0301A");
		ReplaceCAM("CAM0301B");
		ReplaceCAM("CAM0301S");
		ReplaceCAM("CAM0302A");
		ReplaceCAM("CAM0302S");
		ReplaceSET("SET0300S");
		ReplaceSET("SET0301A");
		ReplaceSET("SET0301B");
		ReplaceSET("SET0301S");
		ReplaceSET("SET0302A");
		ReplaceSET("SET0302S");
		ReplacePVM("OBJ_TWINKLE");
		ReplacePVM("TWINKLE01");
		ReplacePVM("TWINKLE02");
		ReplacePVM("TWINKLE03");
	}
	if (EnableTwinklePark || EnableTwinkleCircuit)
	{
		ReplacePVM("BG_SHAREOBJ");
		ReplacePVM("OBJ_SHAREOBJ");
	}
	if (EnableSpeedHighway)
	{
		ReplaceCAM("CAM0400M");
		ReplaceCAM("CAM0400S");
		ReplaceCAM("CAM0401S");
		ReplaceCAM("CAM0402K");
		ReplaceCAM("CAM0402S");
		ReplaceSET("SET0400M");
		ReplaceSET("SET0400S");
		ReplaceSET("SET0401S");
		ReplaceSET("SET0402K");
		ReplaceSET("SET0402S");
		ReplacePVM("BG_HIGHWAY");
		ReplacePVM("BG_HIGHWAY01");
		ReplacePVM("BG_HIGHWAY02");
		ReplacePVM("BG_HIGHWAY03");
		ReplacePVM("HIGHWAY01");
		ReplacePVM("HIGHWAY02");
		ReplacePVM("HIGHWAY03");
		ReplacePVM("HIGHWAY_CAR");
		ReplacePVM("OBJ_HIGHWAY");
		ReplacePVM("OBJ_HIGHWAY2");
	}
	if (EnableRedMountain)
	{
		ReplaceCAM("CAM0500S");
		ReplaceCAM("CAM0501E");
		ReplaceCAM("CAM0501S");
		ReplaceCAM("CAM0502K");
		ReplaceSET("SET0500S");
		ReplaceSET("SET0501E");
		ReplaceSET("SET0501S");
		ReplaceSET("SET0502K");
		ReplacePVM("MOUNTAIN01");
		ReplacePVM("MOUNTAIN02");
		ReplacePVM("MOUNTAIN03");
		ReplacePVM("MOUNTAIN_CARRIER");
		ReplacePVM("MOUNTAIN_E104");
		ReplacePVM("MOUNTAIN_MEXPLOSION");
		ReplacePVM("MOUNTAIN_STEAM");
		ReplacePVM("OBJ_MOUNTAIN");
		ReplacePVM("YOUGAN_ANIM");
		WriteData<1>((char*)0x600700, 0xC3u); // Disable SetClip_RedMountain
	}
	if (EnableSkyDeck)
	{
		ReplaceSET("SET0600M");
		ReplaceSET("SET0600S");
		ReplaceSET("SET0601M");
		ReplaceSET("SET0601S");
		ReplaceSET("SET0602K");
		ReplaceSET("SET0602M");
		ReplaceSET("SET0602S");
		ReplaceCAM("CAM0600M");
		ReplaceCAM("CAM0600S");
		ReplaceCAM("CAM0601S");
		ReplaceCAM("CAM0602K");
		ReplaceCAM("CAM0602S");
		ReplacePVM("E_AIRCRAFT");
		ReplacePVM("OBJ_SKYDECK");
		ReplacePVM("SKYDECK01");
		ReplacePVM("SKYDECK02");
		ReplacePVM("SKYDECK03");
	}
	if (EnableLostWorld)
	{
		ReplaceCAM("CAM0700S");
		ReplaceCAM("CAM0701K");
		ReplaceCAM("CAM0701S");
		ReplaceCAM("CAM0702S");
		ReplaceSET("SET0700S");
		ReplaceSET("SET0701K");
		ReplaceSET("SET0701S");
		ReplaceSET("SET0702S");
		ReplacePVM("BG_RUIN");
		ReplacePVM("RUIN01");
		ReplacePVM("RUIN02");
		ReplacePVM("RUIN03");
		ReplacePVM("OBJ_RUIN");
		ReplacePVM("OBJ_RUIN2");
	}
	if (EnableIceCap)
	{
		ReplaceCAM("CAM0800S");
		ReplaceCAM("CAM0801S");
		ReplaceCAM("CAM0802S");
		ReplaceCAM("CAM0803B");
		ReplaceSET("SET0800S");
		ReplaceSET("SET0801S");
		ReplaceSET("SET0802M");
		ReplaceSET("SET0802S");
		ReplaceSET("SET0803B");
		ReplacePVM("BG_ICECAP");
		ReplacePVM("ICECAP01");
		ReplacePVM("ICECAP02");
		ReplacePVM("ICECAP03");
		ReplacePVM("OBJ_ICECAP");
		ReplacePVM("OBJ_ICECAP2");
		ReplacePVR("MIW_B001");
		ReplacePVR("MTX_BOARD0");
		ReplacePVR("SB_BOARD1");
	}
	if (EnableCasinopolis)
	{
		ReplaceCAM("CAM0900K");
		ReplaceCAM("CAM0900S");
		ReplaceCAM("CAM0901M");
		ReplaceCAM("CAM0901S");
		ReplaceCAM("CAM0902S");
		ReplaceCAM("CAM0903S");
		ReplaceSET("SET0900K");
		ReplaceSET("SET0900S");
		ReplaceSET("SET0901M");
		ReplaceSET("SET0901S");
		ReplaceSET("SET0902S");
		ReplaceSET("SET0903S");
		ReplaceBIN("SETMI0900K"); // Fixed Casino mission objects not spawning
		ReplacePVM("CASINO01");
		ReplacePVM("CASINO02");
		ReplacePVM("CASINO03");
		ReplacePVM("CASINO04");
		ReplacePVM("OBJ_CASINO2");
		ReplacePVM("OBJ_CASINO8");
		ReplacePVM("OBJ_CASINO9");
		ReplacePVM("OBJ_CASINO_E");
	}
	if (EnableFinalEgg)
	{
		ReplaceCAM("CAM1000A");
		ReplaceCAM("CAM1000S");
		ReplaceCAM("CAM1001S");
		ReplaceCAM("CAM1002E");
		ReplaceCAM("CAM1002S");
		ReplaceCAM("CAM1003S");
		ReplaceSET("SET1000A");
		ReplaceSET("SET1000S");
		ReplaceSET("SET1001S");
		ReplaceSET("SET1002E");
		ReplaceSET("SET1002S");
		ReplaceSET("SET1003S");
		ReplacePVM("EFF_FINALEGG_POM");
		ReplacePVM("FINALEGG1");
		ReplacePVM("FINALEGG2");
		ReplacePVM("FINALEGG3");
		ReplacePVM("FINALEGG4");
		ReplacePVM("OBJ_FINALEGG");
	}
	if (EnableHotShelter)
	{
		ReplaceSET("SET1200A");
		ReplaceSET("SET1200B");
		ReplaceSET("SET1200S");
		ReplaceSET("SET1201A");
		ReplaceSET("SET1201S");
		ReplaceSET("SET1202E");
		ReplaceSET("SET1202S");
		ReplaceSET("SET1203S");
		ReplaceCAM("CAM1200A");
		ReplaceCAM("CAM1200B");
		ReplaceCAM("CAM1200S");
		ReplaceCAM("CAM1201A");
		ReplaceCAM("CAM1201S");
		ReplaceCAM("CAM1202E");
		ReplaceCAM("CAM1202S");
		ReplaceCAM("CAM1203S");
		ReplacePVM("HOTSHELTER0");
		ReplacePVM("HOTSHELTER1");
		ReplacePVM("HOTSHELTER2");
		ReplacePVM("HOTSHELTER3");
		ReplacePVM("HOTSHELTER4");
		ReplacePVM("SHELTER_COLUMN");
		ReplacePVM("SHELTER_SUIMEN");
	}
	if (EnableChaos0)
	{
		ReplaceSET("SET1500S");
		ReplacePVM("LM_CHAOS0");
		ReplacePVM("CHAOS0");
		ReplacePVM("CHAOS0_EFFECT");
		ReplacePVM("CHAOS0_OBJECT");
		ReplacePVM("EV_CHAOS0_MANJU");
	}
	if (EnableChaos2)
	{
		ReplaceSET("SET1600S");
		ReplacePVM("CHAOS2");
		ReplacePVM("LM_CHAOS2");
		ReplacePVM("CHAOS2_BARRIER");
		ReplacePVM("CHAOS2_EFFECT");
		ReplacePVM("CHAOS2_OBJECT");
	}
	if (EnableChaos4)
	{
		ReplaceSET("SET1700S");
		ReplacePVM("CHAOS4_COMMON");
		ReplacePVM("CHAOS4_HASHIRA");
		ReplacePVM("CHAOS4_KAMA");
		ReplacePVM("CHAOS4_NUMA");
		ReplacePVM("CHAOS4_OBJECT");
		ReplacePVM("CHAOS4_SHIBUKI");
		ReplacePVM("CHAOS4_TIKEI");
		ReplacePVM("CHAOS4_WAVE");
	}
	if (EnableChaos6)
	{
		ReplaceSET("SET1800B");
		ReplaceSET("SET1800S");
		ReplaceSET("SET1801K");
		ReplacePVM("LM_CHAOS6");
		ReplacePVM("LM_CHAOS6_2");
		ReplacePVM("CHAOS6");
		ReplacePVM("CHAOS6_BG");
		ReplacePVM("CHAOS6_EFFECT");
		ReplacePVM("CHAOS6_EGGMAN");
		ReplacePVM("CHAOS6_EISEI");
		ReplacePVM("CHAOS6_OBJECT");
	}
	if (EnablePerfectChaos)
	{
		ReplaceSET("SET1900S");
		ReplaceCAM("CAM1900S");
		ReplacePVM("CHAOS7_0");
		ReplacePVM("CHAOS7_0BREATH");
		ReplacePVM("CHAOS7_0BREATH2ND");
		ReplacePVM("CHAOS7_0DAMAGE");
		ReplacePVM("CHAOS7_0DEAD_PTCHG");
		ReplacePVM("CHAOS7_0SURFACE");
		ReplacePVM("CHAOS7_0WATEREXP");
		ReplacePVM("CHAOS7_0WEXP_PTCHG");
		ReplacePVM("LM_CHAOS7_0");
		ReplacePVM("OBJ_CHAOS7");
	}
	if (EnableEggHornet)
	{
		ReplaceSET("SETEGM1S");
		ReplacePVM("EGM1");
		ReplacePVM("EGM1LAND");
		ReplacePVM("EGM1BARRIER");
		ReplacePVM("EGM1EGGMAN");
		ReplacePVM("EGM1JET");
		ReplacePVM("EGM1JETB");
		ReplacePVM("EGM1MIS");
		ReplacePVM("EGM1SORA");
		ReplacePVM("EGM1TSUCHI");
	}
	if (EnableEggWalker)
	{
		ReplaceSET("SETEGM2S");
		ReplacePVM("EGM2");
		ReplacePVM("EGM2_BAKU");
		ReplacePVM("EGM2_CAR");
		ReplacePVM("EGM2_COMMON");
		ReplacePVM("EGM2_EFFECT");
		ReplacePVM("EGM2_FIRE");
		ReplacePVM("EGM2_HAMON");
		ReplacePVM("EGM2_MINE");
		ReplacePVM("EGM2_MISSILE");
		ReplacePVM("EGM2_SKY");
		ReplacePVM("EGM2_TIKEI");
	}
	if (EnableEggViper)
	{
		ReplaceSET("SETEGM3S");
		ReplacePVM("EGM3CHIKEI");
		ReplacePVM("EGM3MDL");
		ReplacePVM("EGM3SPR");
	}
	if (EnableE101)
	{
		ReplaceSET("SETE101E");
		ReplacePVM("E101");
		ReplacePVM("E101_TIKEI");
	}
	if (EnableZeroE101R)
	{
		// Zero
		ReplaceSET("SETZEROA");
		ReplaceSET("SETZEROS");
		ReplacePVM("EROBO");
		ReplaceGeneric("EROBO_GC.NB", "EROBO_DC.NB");
		// E101R
		ReplaceGeneric("E101R_GC.NB", "E101R_DC.NB");
		ReplaceSET("SETE101RE");
		ReplacePVM("E101R");
		ReplacePVM("E101R_BG");
		ReplacePVM("E101R_TIKEI"); // Shared with Zero
	}
	ReplacePVM("CHAO");
	ReplacePVM("CHAO_OBJECT");
	ReplacePVM("CHAO_HYOUJI");
	ReplacePVM("CHAO_HYOUJI_E");
	ReplacePVM("CHAO_HYOUJI_F");
	ReplacePVM("CHAO_HYOUJI_G");
	ReplacePVM("CHAO_HYOUJI_S");
	ReplacePVM("EC_ALIFE");
	if (EnableSSGarden)
	{
		ReplacePVM("GARDEN00");
		ReplaceCAM("SETMI3900M");
		ReplacePVM("GARDEN00_OBJECT");
	}
	if (EnableMRGarden)
	{
		ReplacePVM("GARDEN_MR_SKY_HIRU");
		ReplacePVM("GARDEN_MR_SKY_YORU");
		ReplacePVM("GARDEN_MR_SKY_YUU");
		ReplacePVM("GARDEN02");
		ReplacePVM("GARDEN02_OBJECT");
	}
	if (EnableECGarden)
	{
		ReplacePVM("GARDEN01");
		ReplacePVM("GARDEN01_SKY");
	}
	if (EnableTwinkleCircuit)
	{
		ReplaceSET("SETMCART00S");
		ReplaceSET("SETMCART01S");
		ReplaceSET("SETMCART02S");
		ReplaceSET("SETMCART03S");
		ReplaceSET("SETMCART04S");
		ReplaceSET("SETMCART05S");
		ReplaceCAM("CAMMCART00S");
		ReplaceCAM("CAMMCART01S");
		ReplaceCAM("CAMMCART02S");
		ReplaceCAM("CAMMCART03S");
		ReplaceCAM("CAMMCART04S");
		ReplaceCAM("CAMMCART05S");
		ReplacePVM("MINI_CART01");
		ReplacePVM("MINI_CART02");
		ReplacePVM("MINI_CART03");
		ReplacePVM("MINI_CART04");
		ReplacePVM("MINI_CART05");
		ReplacePVM("MINI_CART06");
		if (!DLLLoaded_HDGUI) ReplacePVM("OBJ_MINI_CART");
	}
	if (EnableSandHill)
	{
		ReplaceCAM("CAMSBOARD00S");
		ReplaceCAM("CAMSBOARD01S");
		ReplaceSET("SETSBOARD00M");
		ReplaceSET("SETSBOARD00S");
		ReplaceSET("SETSBOARD01S");
		ReplacePVM("BG_SANDBOARD");
		ReplacePVM("EFF_SANDBOARD");
		ReplacePVM("OBJ_SANDBOARD");
		ReplacePVM("SANDBOARD");
	}
	if (!DLLLoaded_HDGUI)
	{
		ReplacePVR("ST_064S_LOCKA");
		ReplacePVR("ST_064S_LOCKB");
		ReplacePVR("ST_064S_LOCKC");
		ReplacePVR("STG_S_LOCKMK");
	}
	ReplaceSET("SETSHT1S");
	ReplaceSET("SETSHT2S");
	ReplaceCAM("CAMSHT1S");
	ReplaceCAM("CAMSHT2S");
	if (EnableSkyChaseEnemyModels)
	{
		if (!DLLLoaded_SA1Chars)
		{
			ReplacePVM("SHOOTING1");
			ReplacePVM("SHOOTING2");
		}
		if (!DLLLoaded_HDGUI)
		{
			ReplacePVM("SHOOTING0");
		}
	}
	ReplacePVM("AL_RACE02");
	ReplacePVM("BG_AL_RACE02");
	ReplacePVM("OBJ_AL_RACE");
	ReplacePVM("OBJ_AL_RACE_E");
	ReplaceSET("SETAL_RACE00S");
	ReplaceSET("SETAL_RACE01S");
	ReplaceCAM("CAMAL_RACE01S");
	if (EnableLobby)
	{
		ReplaceCAM("CAMAL_RACE00S");
		ReplacePVM("AL_RACE01");
	}
	ReplaceSET("SET0000A");
	ReplaceSET("SET0000S");
	ReplaceSET("SET0001S");
}