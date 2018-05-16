#include "stdafx.h"
#include "DLCs.h"

#include <random>

// DLC code.
#include "ATT.h"
#include "Christmas98.h"
#include "Christmas99.h"
#include "Halloween.h"
#include "LaunchParty.h"
#include "Reebok.h"
#include "SambaGP.h"

// DLC data.
extern NJS_MATERIAL matlist_00000004[];		// Data/DLC_ATT.h
extern NJS_MATERIAL matlist_00000004_2[];	// Data/DLC_Christmas99.h
#include "Data/DLC_Y2K.h"

static const wchar_t *const OldModDLLs[] = {
	L"SONICADV_000",
	L"SONICADV_002",
	L"SONICADV_003",
	L"SONICADV_501",
	L"SONICADV_502",
	L"SONICADV_503",
	L"SONICADV_504",
	L"SONICADV_505",
	L"SONICADV_506",
	L"SONICADV_507",
	L"SONICADV_508",
	L"SONICADV_509",
	L"SONICADV_510",
	L"SONICADV_511",
};


_SYSTEMTIME CurrentTime;

std::string DLCMode;
std::string LaunchPartyDLCMode = "US";
std::string SegaVoiceLanguage = "English";

int MenuVoiceMode;

// Twinkle Circuit track IDs.
int SonicTrack = 2;
int TailsTrack = 1;
int KnucklesTrack = 3;
int AmyTrack = 4;
int BigTrack = 5;
int GammaTrack = 0;

// Monthly DLCs.
static int MonthlyDLCs[12][2];

HMODULE ADV00MODELS = GetModuleHandle(L"ADV00MODELS");
DataPointer(COL, COL_whatever, ((size_t)ADV00MODELS + 0x001D8144));

// Common
bool EverybodySuperSonicRacing = false;
int CurrentDLC = 0;
bool ObjectsLoaded = false;
bool ObjectsLoaded_SS = false;
bool ObjectsLoaded_MR = false;
bool ForceSADXLayout = false;
bool DisableDuringStory = true;
bool TimerLoaded = false;
int PreviousLevel = 0;
int PreviousAct = 0;
int HintTimer = 0;
int ChallengeTimer = 0;
int CollectedAll = 0;
int MusicMode = 0;
SETObjData setdata_dlc = {};
bool ChallengeOver = false;
bool ChallengeAction = false;

// Famitsu and Reebok stuff
bool Collected1 = false;
bool Collected2 = false;
bool Collected3 = false;
bool Collected4 = false;
bool Collected5 = false;

// AT&T stuff
bool HighwayGoal = false;

//QUO stuff
static bool CollectedSS1 = false;
static bool CollectedSS2 = false;
static bool CollectedSS3 = false;
static bool CollectedMR1 = false;
static bool CollectedMR2 = false;
static bool CollectedMR3 = false;

// MR challenge stuff
bool Treasure1 = false;
bool Treasure2 = false;
bool Treasure3 = false;
bool Treasure4 = false;

// Sand hill challenge stuff
bool Gate1 = false;
bool Gate2 = false;
bool Gate3 = false;
bool Gate4 = false;
bool Gate5 = false;
bool Gate6 = false;
bool Gate7 = false;
bool Gate8 = false;
bool Gate9 = false;
bool Gate10 = false;

#define ReplaceBIN(a,b) helperFunctions.ReplaceFile("system\\" a ".BIN", "system\\" b ".BIN");

static const PVMEntry TimerTextures = { "CON_REGULAR_E", (TexList *)0x00912DF4 };
static const PVMEntry QuoTextures = { "SONICADV_002", (TexList *)&texlist_quo };
static const PVMEntry FamitsuTextures = { "SONICADV_003", (TexList *)&texlist_famitsu };
static const PVMEntry Y2KTextures = { "SONICADV_510", (TexList *)&texlist_y2k };

static int CharacterVoice = 0;
static int VoiceLanguage_sel = 1;
static bool AlternateEggman = false;

// SEGA, Sonic Team
static const int voices[8][2] =
{
	{ 1994, 1995 },	// Sonic
	{ 1996, 1997 },	// Tails
	{ 1998, 1999 },	// Knuckles
	{ 2000, 2001 },	// Amy
	{ 2002, 2003 },	// Big
	{ 2004, 2005 },	// Gamma
	{ 2006, 2008 },	// Eggman
	{ 2010, 2011 }	// Tikal
};

static int GetVoiceNumber(int value)
{
	int result = voices[CharacterVoice][value];
	return (CharacterVoice == 6 && AlternateEggman) ? ++result : result;
}

static void PlaySegaSonicTeamVoice()
{
	if (SegaVoiceLanguage != "Off")
	{
		if (SegaLogo_Frames == 1 && SoundManager_ptr == nullptr)
		{
			SoundManager_Load(LoadObject((LoadObj)0, 1, SoundManager_Load));
		}

		if (SegaLogo_Frames != 30)
		{
			return;
		}

		if (SoundManager_ptr != nullptr)
		{
			switch (SegaLogo_Mode)
			{
			case 1:
				VoiceLanguage = VoiceLanguage_sel;
				PlayVoice(GetVoiceNumber(0));
				SoundManager_ptr->MainSub(SoundManager_ptr);
				break;

			case 16:
				PlayVoice(GetVoiceNumber(1));
				SoundManager_ptr->MainSub(SoundManager_ptr);
				VoiceLanguage = 1;
				break;

			default:
				break;
			}
		}
		else
		{
			PrintDebug("Error initializing Sound Manager.\n");
		}
	}
}

void __declspec(naked) PlaySegaSonicTeamVoice_asm()
{
	__asm
	{
		call DisplayLogoScreen
		add esp, 4
		call PlaySegaSonicTeamVoice
		xor eax, eax
		retn
	}
}

void StopVoicesButMaybeNot_Challenge()
{
	//004B793E
	if (ChallengeAction == false) StopVoices();
}

void StopVoicesButMaybeNot_Christmas()
{
	//004B793E
	if (MusicMode == 0) StopVoices();
}

void FamitsuPoster_Display(ObjectMaster *a1)
{
	EntityData1 *v1;
	Angle v2;
	Angle v3;
	Angle v4;
	v1 = a1->Data1;
	if (!DroppedFrames && GameState != 16)
	{
		njSetTexture(&texlist_famitsu);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.x;
		v3 = v1->Rotation.y;
		v4 = v1->Rotation.z;
		njRotateXYZ(0, v2, v3, v4);
		njScale(0, v1->Scale.z, v1->Scale.y, v1->Scale.x);
		if ((Collected1 == true && v1->CharIndex == 4) || (Collected2 == true && v1->CharIndex == 5) || (Collected3 == true && v1->CharIndex == 6) || (Collected4 == true && v1->CharIndex == 7) || (Collected5 == true && v1->CharIndex == 8))
		{
			matlist_00116FA0X[0].attrflags |= NJD_FLAG_USE_ALPHA;
			matlist_00116FA0X[0].diffuse.argb.a = 255 - v1->InvulnerableTime;
		}
		ProcessModelNode_AB_Wrapper(&poster, v1->Scale.x);
		matlist_00116FA0X[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		matlist_00116FA0X[0].diffuse.argb.a = 255;
		njPopMatrix(1u);
	}
}

void FamitsuPoster_Main(ObjectMaster *a1)
{
	EntityData1 *v1;
	v1 = a1->Data1;
	if (v1->NextAction == CurrentAct)
	{
		if (ChallengeAction == false)
		{
			Collected1 = false;
			Collected2 = false;
			Collected3 = false;
			Collected4 = false;
			Collected5 = false;
		}
		else
		{
			if ((Collected1 == false && v1->CharIndex == 4) || (Collected2 == false && v1->CharIndex == 5) || (Collected3 == false && v1->CharIndex == 6) || (Collected4 == false && v1->CharIndex == 7) || (Collected5 == false && v1->CharIndex == 8))
			{
				v1->InvulnerableTime = 0;
				v1->Scale.x = 1.0f;
				v1->Scale.y = 1.0f;
				v1->Scale.z = 1.0f;
				if (IsPlayerInsideSphere(&v1->Position, 15))
				{
					if (v1->CharIndex == 4)
					{
						Collected1 = true;
						PlaySound(28, 0, 0, 0);
						if (Collected1 == true && Collected2 == true && Collected3 == true && Collected4 == true && Collected5 == true) sub_4B79C0((char *)(&FamitsuMessage1), 180); else sub_4B79C0((char *)(&FamitsuMessage5), 180);
						HintTimer = 60;
					}
					if (v1->CharIndex == 5)
					{
						Collected2 = true;
						PlaySound(28, 0, 0, 0);
						if (Collected1 == true && Collected2 == true && Collected3 == true && Collected4 == true && Collected5 == true) sub_4B79C0((char *)(&FamitsuMessage1), 180); else sub_4B79C0((char *)(&FamitsuMessage6), 180);
						HintTimer = 60;
					}
					if (v1->CharIndex == 6)
					{
						Collected3 = true;
						PlaySound(28, 0, 0, 0);
						if (Collected1 == true && Collected2 == true && Collected3 == true && Collected4 == true && Collected5 == true) sub_4B79C0((char *)(&FamitsuMessage1), 180); else sub_4B79C0((char *)(&FamitsuMessage7), 180);
						HintTimer = 60;
					}
					if (v1->CharIndex == 7)
					{
						Collected4 = true;
						PlaySound(28, 0, 0, 0);
						if (Collected1 == true && Collected2 == true && Collected3 == true && Collected4 == true && Collected5 == true) sub_4B79C0((char *)(&FamitsuMessage1), 180); else sub_4B79C0((char *)(&FamitsuMessage8), 140);
						HintTimer = 60;
					}
					if (v1->CharIndex == 8)
					{
						Collected5 = true;
						PlaySound(28, 0, 0, 0);
						if (Collected1 == true && Collected2 == true && Collected3 == true && Collected4 == true && Collected5 == true) sub_4B79C0((char *)(&FamitsuMessage1), 180); else sub_4B79C0((char *)(&FamitsuMessage9), 180);
						HintTimer = 60;
					}
				}
			}
			if ((Collected1 == true && v1->CharIndex == 4) || (Collected2 == true && v1->CharIndex == 5) || (Collected3 == true && v1->CharIndex == 6) || (Collected4 == true && v1->CharIndex == 7) || (Collected5 == true && v1->CharIndex == 8))
			{
				if (v1->InvulnerableTime < 255) v1->InvulnerableTime = v1->InvulnerableTime + 8;
				if (v1->InvulnerableTime > 255) v1->InvulnerableTime = 255;
				if (v1->Scale.x > 0.05f)
				{
					v1->Scale.x = v1->Scale.x*0.95f;
					v1->Scale.y = v1->Scale.y*0.95f;
					v1->Scale.z = v1->Scale.z*0.95f;
				}
			}
			if (v1->Scale.x > 0.05f) FamitsuPoster_Display(a1);
		}
	}
}

void FamitsuPoster_Load(ObjectMaster *a1)
{
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))FamitsuPoster_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))FamitsuPoster_Display;
}

void FamitsuBalloons_Display(ObjectMaster *a1)
{
	EntityData1 *v1;
	Angle v2;
	Angle v3;
	Angle v4;
	v1 = a1->Data1;
	if (!DroppedFrames)
	{
		njSetTexture(&texlist_famitsu);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		njScale(0, v1->Scale.x, v1->Scale.y, v1->Scale.z);
		v2 = v1->Rotation.x;
		v3 = v1->Rotation.y;
		v4 = v1->Rotation.z;
		njRotateXYZ(0, v2, v3, v4);
		if (v1->CharIndex == 9) ProcessModelNode_AB_Wrapper(&balloon_start, v1->Scale.x);
		else ProcessModelNode_AB_Wrapper(&balloon_finish, v1->Scale.x);
		njPopMatrix(1u);
	}
}

void FamitsuBalloons_Main(ObjectMaster *a1)
{
	EntityData1 *v1;
	int SpeedY;
	Angle v2;
	Angle v3;
	Angle v4;
	NJS_OBJECT *v5; // eax@2
	v1 = a1->Data1;
	if (v1->NextAction == CurrentAct)
	{
		SpeedY = (v1->CharID) * 16;
		v2 = v1->Rotation.x;
		v3 = v1->Rotation.y;
		v4 = v1->Rotation.z;
		v3 = (v3 + int(SpeedY)) % 65535;
		v1->Rotation.y = v3;
		if (v1->CharIndex == 9)
		{
			if (ChallengeAction == true)
			{
				matlist_balloon[0].attrflags |= NJD_FLAG_USE_ALPHA;
				if (matlist_balloon[0].diffuse.argb.a > 8) matlist_balloon[0].diffuse.argb.a = matlist_balloon[0].diffuse.argb.a - 8;
				if (matlist_balloon[0].diffuse.argb.a < 8) matlist_balloon[0].diffuse.argb.a = 0;
				if (v1->Scale.x > 0.05f)
				{
					v1->Scale.x = v1->Scale.x*0.95f;
					v1->Scale.y = v1->Scale.y*0.95f;
					v1->Scale.z = v1->Scale.z*0.95f;
				}
			}
			if (ChallengeAction == false)
			{
				matlist_balloon[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
				matlist_balloon[0].diffuse.argb.a = 255;
				if (v1->Scale.x < 1.5f)
				{

					v1->Scale.x = v1->Scale.x*1.05f;
					v1->Scale.y = v1->Scale.y*1.05f;
					v1->Scale.z = v1->Scale.z*1.05f;
					if (v1->Scale.y >= 1.5f)
					{
						v1->Scale.x = 1.5f;
						v1->Scale.y = 1.5f;
						v1->Scale.z = 1.5f;
					}
				}
			}
			if (ChallengeAction == false && IsPlayerInsideSphere(&v1->Position, 15))
			{
				if (HintTimer <= 0)
				{
					PlaySound(12, 0, 0, 0);
					sub_4B79C0((char *)(&FamitsuMessage4), 180);
					Collected1 = false;
					Collected2 = false;
					Collected3 = false;
					Collected4 = false;
					Collected5 = false;
					CollectedAll = 0;
					ChallengeAction = true;
					HintTimer = 60;
				}
			}
		}
		else
		{
			if (ChallengeAction == false)
			{
				matlist_balloon_2[0].attrflags |= NJD_FLAG_USE_ALPHA;
				if (matlist_balloon_2[0].diffuse.argb.a > 8) matlist_balloon_2[0].diffuse.argb.a = matlist_balloon_2[0].diffuse.argb.a - 8;
				if (matlist_balloon_2[0].diffuse.argb.a < 8) matlist_balloon_2[0].diffuse.argb.a = 0;
				if (v1->Scale.x > 0.05f)
				{
					v1->Scale.x = v1->Scale.x*0.95f;
					v1->Scale.y = v1->Scale.y*0.95f;
					v1->Scale.z = v1->Scale.z*0.95f;
				}
			}
			if (ChallengeAction == true)
			{
				matlist_balloon_2[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
				matlist_balloon_2[0].diffuse.argb.a = 255;
				if (v1->Scale.x < 1.5f)
				{
					v1->Scale.x = v1->Scale.x*1.05f;
					v1->Scale.y = v1->Scale.y*1.05f;
					v1->Scale.z = v1->Scale.z*1.05f;
					if (v1->Scale.y >= 1.5f)
					{
						v1->Scale.x = 1.5f;
						v1->Scale.y = 1.5f;
						v1->Scale.z = 1.5f;
					}
				}
			}
			if (ChallengeAction == true && IsPlayerInsideSphere(&v1->Position, 15))
			{
				if (CollectedAll >= 5)
				{
					if (HintTimer <= 0)
					{
						PlaySound(12, 0, 0, 0);
						snprintf(ResultText, 100, "Your result is:         .");
						snprintf(ResultText + 16, 100 - 16, "%d", TimerTenMinutesTexanim.texid);
						snprintf(ResultText + 17, 100 - 17, "%d", TimerMinutesTexanim.texid);
						snprintf(ResultText + 18, 100 - 18, ":");
						snprintf(ResultText + 19, 100 - 19, "%d", TimerTenSecondsTexanim.texid);
						snprintf(ResultText + 20, 100 - 20, "%d", TimerSecondsTexanim.texid);
						snprintf(ResultText + 21, 100 - 21, ":");
						snprintf(ResultText + 22, 100 - 22, "%d", TimerMTenSecondsTexanim.texid);
						snprintf(ResultText + 23, 100 - 23, "%d", TimerMSecondsTexanim.texid);
						snprintf(ResultText + 24, 100 - 24, ".");
						sub_4B79C0((char *)(&FamitsuMessage10), 180);
						Collected1 = false;
						Collected2 = false;
						Collected3 = false;
						Collected4 = false;
						Collected5 = false;
						CollectedAll = 0;
						ChallengeAction = false;
						ChallengeTimer = 0;
						HintTimer = 60;
					}
				}
				else
				{
					if (HintTimer <= 0)
					{
						PlaySound(6, 0, 0, 0);
						sub_4B79C0((char *)(&FamitsuMessage2), 180);
						HintTimer = 120;
					}
				}
			}
		}
		if (v1->Scale.x > 0.05f) FamitsuBalloons_Display(a1);
	}
}

void FamitsuBalloons_Load(ObjectMaster *a1)
{
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))FamitsuBalloons_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))FamitsuBalloons_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void TimerFamitsu_Display(ObjectMaster *a1)
{
	HedgehogCountTexanim.sx = 16 * HorizontalStretch;
	HedgehogCountTexanim.sy = 16 * HorizontalStretch;
	HedgehogCountSlashTexanim.sx = 16 * HorizontalStretch;
	HedgehogCountSlashTexanim.sy = 16 * HorizontalStretch;
	HedgehogCountTotalTexanim.sx = 16 * HorizontalStretch;
	HedgehogCountTotalTexanim.sy = 16 * HorizontalStretch;
	TimerTenMinutesTexanim.sx = 16 * HorizontalStretch;
	TimerTenMinutesTexanim.sy = 16 * HorizontalStretch;
	TimerMinutesTexanim.sx = 16 * HorizontalStretch;
	TimerMinutesTexanim.sy = 16 * HorizontalStretch;
	TimerColon1Texanim.sx = 16 * HorizontalStretch;
	TimerColon1Texanim.sy = 16 * HorizontalStretch;
	TimerTenSecondsTexanim.sx = 16 * HorizontalStretch;
	TimerTenSecondsTexanim.sy = 16 * HorizontalStretch;
	TimerSecondsTexanim.sx = 16 * HorizontalStretch;
	TimerSecondsTexanim.sy = 16 * HorizontalStretch;
	TimerColon2Texanim.sx = 16 * HorizontalStretch;
	TimerColon2Texanim.sy = 16 * HorizontalStretch;
	TimerMTenSecondsTexanim.sx = 16 * HorizontalStretch;
	TimerMTenSecondsTexanim.sy = 16 * HorizontalStretch;
	TimerMSecondsTexanim.sx = 16 * HorizontalStretch;
	TimerMSecondsTexanim.sy = 16 * HorizontalStretch;
	njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
	njSetTexture((NJS_TEXLIST*)0x00912DF4);
	SetMaterialAndSpriteColor_Float(1.0f, 1.0f, 1.0f, 1.0f);
	//Draw count
	HedgehogCountTexanim.texid = CollectedAll;
	njDrawSprite2D_ForcePriority(&HedgehogCount, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw slash
	HedgehogCountSlashTexanim.texid = 73;
	njDrawSprite2D_ForcePriority(&HedgehogCountSlash, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw total
	HedgehogCountTotalTexanim.texid = 5;
	njDrawSprite2D_ForcePriority(&HedgehogCountTotal, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw timer tenminutes
	TimerTenMinutesTexanim.texid = (((ChallengeTimer / 3600) % 60) / 10) % 10;
	njDrawSprite2D_ForcePriority(&TimerTenMinutes, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw timer minutes
	TimerMinutesTexanim.texid = ((ChallengeTimer / 3600) % 60) % 10;
	njDrawSprite2D_ForcePriority(&TimerMinutes, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw minute colon
	TimerColon1Texanim.texid = 10;
	njDrawSprite2D_ForcePriority(&TimerColon1, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw timer tenseconds
	TimerTenSecondsTexanim.texid = (((ChallengeTimer / 60) % 60) / 10) % 10;
	njDrawSprite2D_ForcePriority(&TimerTenSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw timer seconds
	TimerSecondsTexanim.texid = ((ChallengeTimer / 60) % 60) % 10;
	njDrawSprite2D_ForcePriority(&TimerSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw minute colon
	TimerColon2Texanim.texid = 10;
	njDrawSprite2D_ForcePriority(&TimerColon2, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw timer militenseconds
	TimerMTenSecondsTexanim.texid = (((ChallengeTimer * 5 / 3) % 1000) / 10) % 10;
	njDrawSprite2D_ForcePriority(&TimerMTenSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw timer miliseconds
	TimerMSecondsTexanim.texid = ((ChallengeTimer * 5 / 3) % 1000) % 10;
	njDrawSprite2D_ForcePriority(&TimerMSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
	ClampGlobalColorThing_Thing();
}

void TimerFamitsu_Main(ObjectMaster *a1)
{
	if (((ChallengeTimer / 3600) % 60) / 10 < 1)
	{
		if (ChallengeAction == true)
		{
			CollectedAll = Collected1 + Collected2 + Collected3 + Collected4 + Collected5;
			ChallengeTimer++;
			TimerFamitsu_Display(a1);
		}
	}
	if (((ChallengeTimer / 3600) % 60) / 10 >= 1)
	{
		ChallengeAction = false;
		ChallengeTimer = 0;
		sub_4B79C0((char *)(&FamitsuMessage3), 180);
	}
}

void TimerFamitsu_Load(ObjectMaster *a1)
{
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))TimerFamitsu_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))TimerFamitsu_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void Famitsu_LoadStuff()
{
	ObjectMaster *obj;
	EntityData1 *ent;
	ObjectFunc(OF0, FamitsuBalloons_Load);
	ObjectFunc(OF1, FamitsuPoster_Load);
	ObjectFunc(OF2, TimerFamitsu_Load);
	setdata_dlc.Distance = 612800.0f;
	if (GameMode == GameModes_Adventure_Field || GameMode == GameModes_Mission)
	{
		if (ObjectsLoaded == false)
		{
			//Timer
			obj = LoadObject((LoadObj)2, 3, OF2);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = 64;
				ent->Position.y = 64;
				ent->Scale.x = 1.0f;
				ent->Scale.y = 1.0f;
				ent->Scale.z = 1.0f;
			}
			//Balloons
			obj = LoadObject((LoadObj)2, 3, OF0);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = 102;
				ent->Position.y = 30;
				ent->Position.z = 1495;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0;
				ent->Rotation.z = 0;
				if (ChallengeAction == false)
				{
					ent->Scale.x = 1.5f;
					ent->Scale.y = 1.5f;
					ent->Scale.z = 1.5f;
				}
				else
				{
					ent->Scale.x = 0.05f;
					ent->Scale.y = 0.05f;
					ent->Scale.z = 0.05f;
				}
				ent->CharIndex = 9;
				ent->CharID = 10;
				ent->NextAction = 3;
			}
			obj = LoadObject((LoadObj)2, 3, OF0);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = -15;
				ent->Position.y = 105;
				ent->Position.z = 1305;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0;
				ent->CharIndex = 1;
				ent->Rotation.z = 0;
				if (ChallengeAction == true)
				{
					ent->Scale.x = 1.5f;
					ent->Scale.y = 1.5f;
					ent->Scale.z = 1.5f;
				}
				else
				{
					ent->Scale.x = 0.05f;
					ent->Scale.y = 0.05f;
					ent->Scale.z = 0.05f;
				}
				ent->CharID = 10;
				ent->NextAction = 1;
			}
			obj = LoadObject((LoadObj)2, 3, OF1);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = 435;
				ent->Position.y = 26;
				ent->Position.z = 652;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0x4000;
				ent->Rotation.z = 0;
				ent->CharIndex = 5;
				ent->Scale.x = 1.0f;
				ent->Scale.y = 1.0f;
				ent->Scale.z = 1.0f;
				ent->NextAction = 0;
			}
			obj = LoadObject((LoadObj)2, 3, OF1);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = -275;
				ent->Position.y = -10;
				ent->Position.z = 1938;
				ent->Rotation.x = 0x4000;
				ent->Rotation.y = 0x4000;
				ent->Rotation.z = 0;
				ent->Scale.x = 1.0f;
				ent->Scale.y = 1.0f;
				ent->Scale.z = 1.0f;
				ent->CharIndex = 6;
				ent->NextAction = 4;
			}
			obj = LoadObject((LoadObj)2, 3, OF1);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = -535;
				ent->Position.y = 27;
				ent->Position.z = 1458;
				ent->Rotation.x = 0x4000;
				ent->Rotation.y = 0x4000;
				ent->Rotation.z = 0;
				ent->CharIndex = 7;
				ent->Scale.x = 1.0f;
				ent->Scale.y = 1.0f;
				ent->Scale.z = 1.0f;
				ent->NextAction = 1;
			}
			obj = LoadObject((LoadObj)2, 3, OF1);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = -66;
				ent->Position.y = 229;
				ent->Position.z = 1205;
				ent->Rotation.x = 0x4000;
				ent->Rotation.y = 0x93E9;
				ent->Rotation.z = 0;
				ent->CharIndex = 8;
				ent->Scale.x = 1.0f;
				ent->Scale.y = 1.0f;
				ent->Scale.z = 1.0f;
				ent->NextAction = 1;
			}
			obj = LoadObject((LoadObj)2, 3, OF1);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = 236;
				ent->Position.y = 18;
				ent->Position.z = 1033;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0;
				ent->Rotation.z = 0;
				ent->Scale.x = 1.0f;
				ent->Scale.y = 1.0f;
				ent->Scale.z = 1.0f;
				ent->CharIndex = 4;
				ent->NextAction = 3;
			}
			ObjectsLoaded = true;
		}
	}
}

void QUOPoster_Display(ObjectMaster *a1)
{
	EntityData1 *v1;
	Angle v2;
	Angle v3;
	Angle v4;
	int RotationSpeed;
	v1 = a1->Data1;
	if (!DroppedFrames && GameState != 16)
	{
		njSetTexture(&texlist_quo);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.x;
		v3 = v1->Rotation.y;
		v4 = v1->Rotation.z;
		njRotateXYZ(0, v2, v3, v4);
		njScale(0, v1->Scale.z, v1->Scale.y, v1->Scale.x);
		if ((CollectedSS1 == true && v1->Index == 0) || (CollectedSS2 == true && v1->Index == 1) || (CollectedSS3 == true && v1->Index == 2) || (CollectedMR1 == true && v1->Index == 3) || (CollectedMR2 == true && v1->Index == 4) || (CollectedMR3 == true && v1->Index == 5))
		{
			matlist_00116FA0X[0].attrflags |= NJD_FLAG_USE_ALPHA;
			matlist_00116FA0X[0].diffuse.argb.a = 255 - v1->InvulnerableTime;
		}
		ProcessModelNode_AB_Wrapper(&poster, v1->Scale.x);
		matlist_00116FA0X[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		matlist_00116FA0X[0].diffuse.argb.a = 255;
		njPopMatrix(1u);
	}
}

void QUOPoster_Main(ObjectMaster *a1)
{
	EntityData1 *v1;
	Angle v3;
	int SpeedY;
	v1 = a1->Data1;
	if (v1->Action == CurrentLevel && v1->NextAction == CurrentAct)
	{
		if (ChallengeAction == false)
		{
			CollectedSS1 = false;
			CollectedSS2 = false;
			CollectedSS3 = false;
			CollectedMR1 = false;
			CollectedMR2 = false;
			CollectedMR3 = false;
		}
		else
		{
			if ((CollectedSS1 == false && v1->Index == 0) || (CollectedSS2 == false && v1->Index == 1) || (CollectedSS3 == false && v1->Index == 2) || (CollectedMR1 == false && v1->Index == 3) || (CollectedMR2 == false && v1->Index == 4) || (CollectedMR3 == false && v1->Index == 5))
			{
				v1->InvulnerableTime = 0;
				v1->Scale.x = 1.0f;
				v1->Scale.y = 1.0f;
				v1->Scale.z = 1.0f;
				if (IsPlayerInsideSphere(&v1->Position, 15))
				{
					if (v1->Index == 0)
					{
						CollectedSS1 = true;
						PlaySound(30, 0, 0, 0);
						if (CollectedSS1 == true && CollectedSS2 == true && CollectedSS3 == true && CollectedMR1 == true && CollectedMR2 == true && CollectedMR3 == true) sub_4B79C0((char *)(&QuoMessage1), 180); else sub_4B79C0((char *)(&QuoMessage5), 180);
						HintTimer = 60;
					}
					if (v1->Index == 1)
					{
						CollectedSS2 = true;
						PlaySound(30, 0, 0, 0);
						if (CollectedSS1 == true && CollectedSS2 == true && CollectedSS3 == true && CollectedMR1 == true && CollectedMR2 == true && CollectedMR3 == true) sub_4B79C0((char *)(&QuoMessage1), 180); else sub_4B79C0((char *)(&QuoMessage6), 180);
						HintTimer = 60;
					}
					if (v1->Index == 2)
					{
						CollectedSS3 = true;
						PlaySound(30, 0, 0, 0);
						if (CollectedSS1 == true && CollectedSS2 == true && CollectedSS3 == true && CollectedMR1 == true && CollectedMR2 == true && CollectedMR3 == true) sub_4B79C0((char *)(&QuoMessage1), 180); else sub_4B79C0((char *)(&QuoMessage7), 180);
						HintTimer = 60;
					}
					if (v1->Index == 3)
					{
						CollectedMR1 = true;
						PlaySound(30, 0, 0, 0);
						if (CollectedSS1 == true && CollectedSS2 == true && CollectedSS3 == true && CollectedMR1 == true && CollectedMR2 == true && CollectedMR3 == true) sub_4B79C0((char *)(&QuoMessage1), 180); else sub_4B79C0((char *)(&QuoMessage10), 180);
						HintTimer = 60;
					}
					if (v1->Index == 4)
					{
						CollectedMR2 = true;
						PlaySound(30, 0, 0, 0);
						if (CollectedSS1 == true && CollectedSS2 == true && CollectedSS3 == true && CollectedMR1 == true && CollectedMR2 == true && CollectedMR3 == true) sub_4B79C0((char *)(&QuoMessage1), 180); else sub_4B79C0((char *)(&QuoMessage8), 180);
						HintTimer = 60;
					}
					if (v1->Index == 5)
					{
						CollectedMR3 = true;
						PlaySound(30, 0, 0, 0);
						if (CollectedSS1 == true && CollectedSS2 == true && CollectedSS3 == true && CollectedMR1 == true && CollectedMR2 == true && CollectedMR3 == true) sub_4B79C0((char *)(&QuoMessage1), 180); else sub_4B79C0((char *)(&QuoMessage9), 180);
						HintTimer = 60;
					}
				}
			}
			if ((CollectedSS1 == true && v1->Index == 0) || (CollectedSS2 == true && v1->Index == 1) || (CollectedSS3 == true && v1->Index == 2) || (CollectedMR1 == true && v1->Index == 3) || (CollectedMR2 == true && v1->Index == 4) || (CollectedMR3 == true && v1->Index == 5))
			{
				if (v1->InvulnerableTime < 255) v1->InvulnerableTime = v1->InvulnerableTime + 8;
				if (v1->InvulnerableTime > 255) v1->InvulnerableTime = 255;
				if (v1->Scale.x > 0.05f)
				{
					v1->Scale.x = v1->Scale.x*0.95f;
					v1->Scale.y = v1->Scale.y*0.95f;
					v1->Scale.z = v1->Scale.z*0.95f;
				}
			}
			SpeedY = v1->CharID;
			v3 = v1->Rotation.y;
			v3 = (v3 + SpeedY * 16) % 65535;
			v1->Rotation.y = v3;
			if (v1->Scale.x > 0.05f) QUOPoster_Display(a1);
		}
	}
}

void QUOPoster_Load(ObjectMaster *a1)
{
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))QUOPoster_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))QUOPoster_Display;
}

void QUOBalloons_Display(ObjectMaster *a1)
{
	EntityData1 *v1;
	Angle v2;
	Angle v3;
	Angle v4;
	v1 = a1->Data1;
	if (!DroppedFrames)
	{
		njSetTexture(&texlist_quo);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		njScale(0, v1->Scale.x, v1->Scale.y, v1->Scale.z);
		v2 = v1->Rotation.x;
		v3 = v1->Rotation.y;
		v4 = v1->Rotation.z;
		njRotateXYZ(0, v2, v3, v4);
		if (v1->CharIndex == 3) ProcessModelNode_AB_Wrapper(&balloon_start, v1->Scale.x);
		else ProcessModelNode_AB_Wrapper(&balloon_finish, v1->Scale.x);
		njPopMatrix(1u);
	}
}

void QUOBalloons_Main(ObjectMaster *a1)
{
	EntityData1 *v1;
	int SpeedY;
	Angle v2;
	Angle v3;
	Angle v4;
	NJS_OBJECT *v5; // eax@2
	v1 = a1->Data1;
	if (v1->Action == CurrentLevel && v1->NextAction == CurrentAct)
	{
		SpeedY = (v1->CharID) * 16;
		v2 = v1->Rotation.x;
		v3 = v1->Rotation.y;
		v4 = v1->Rotation.z;
		v3 = (v3 + int(SpeedY)) % 65535;
		v1->Rotation.y = v3;
		if (v1->CharIndex == 3)
		{
			if (ChallengeAction == true)
			{
				matlist_balloon[0].attrflags |= NJD_FLAG_USE_ALPHA;
				if (matlist_balloon[0].diffuse.argb.a > 8) matlist_balloon[0].diffuse.argb.a = matlist_balloon[0].diffuse.argb.a - 8;
				if (matlist_balloon[0].diffuse.argb.a < 8) matlist_balloon[0].diffuse.argb.a = 0;
				if (v1->Scale.x > 0.05f)
				{
					v1->Scale.x = v1->Scale.x*0.95f;
					v1->Scale.y = v1->Scale.y*0.95f;
					v1->Scale.z = v1->Scale.z*0.95f;
				}
			}
			if (ChallengeAction == false)
			{
				matlist_balloon[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
				matlist_balloon[0].diffuse.argb.a = 255;
				if (v1->Scale.x < 1.5f)
				{

					v1->Scale.x = v1->Scale.x*1.05f;
					v1->Scale.y = v1->Scale.y*1.05f;
					v1->Scale.z = v1->Scale.z*1.05f;
					if (v1->Scale.y >= 1.5f)
					{
						v1->Scale.x = 1.5f;
						v1->Scale.y = 1.5f;
						v1->Scale.z = 1.5f;
					}
				}
			}
			if (ChallengeAction == false && IsPlayerInsideSphere(&v1->Position, 15))
			{
				if (HintTimer <= 0)
				{
					PlaySound(12, 0, 0, 0);
					sub_4B79C0((char *)(&QuoMessage4), 180);
					CollectedSS1 = false;
					CollectedSS2 = false;
					CollectedSS3 = false;
					CollectedMR1 = false;
					CollectedMR2 = false;
					CollectedMR3 = false;
					CollectedAll = 0;
					ChallengeAction = true;
					HintTimer = 60;
				}
			}
		}
		else
		{
			if (ChallengeAction == false)
			{
				matlist_balloon_2[0].attrflags |= NJD_FLAG_USE_ALPHA;
				if (matlist_balloon_2[0].diffuse.argb.a > 8) matlist_balloon_2[0].diffuse.argb.a = matlist_balloon_2[0].diffuse.argb.a - 8;
				if (matlist_balloon_2[0].diffuse.argb.a < 8) matlist_balloon_2[0].diffuse.argb.a = 0;
				if (v1->Scale.x > 0.05f)
				{
					v1->Scale.x = v1->Scale.x*0.95f;
					v1->Scale.y = v1->Scale.y*0.95f;
					v1->Scale.z = v1->Scale.z*0.95f;
				}
			}
			if (ChallengeAction == true)
			{
				matlist_balloon_2[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
				matlist_balloon_2[0].diffuse.argb.a = 255;
				if (v1->Scale.x < 1.5f)
				{
					v1->Scale.x = v1->Scale.x*1.05f;
					v1->Scale.y = v1->Scale.y*1.05f;
					v1->Scale.z = v1->Scale.z*1.05f;
					if (v1->Scale.y >= 1.5f)
					{
						v1->Scale.x = 1.5f;
						v1->Scale.y = 1.5f;
						v1->Scale.z = 1.5f;
					}
				}
			}
			if (ChallengeAction == true && IsPlayerInsideSphere(&v1->Position, 15))
			{
				if (CollectedAll >= 6)
				{
					if (HintTimer <= 0)
					{
						PlaySound(12, 0, 0, 0);
						snprintf(ResultText, 100, "Your result is:         .");
						snprintf(ResultText + 16, 100 - 16, "%d", TimerTenMinutesTexanim.texid);
						snprintf(ResultText + 17, 100 - 17, "%d", TimerMinutesTexanim.texid);
						snprintf(ResultText + 18, 100 - 18, ":");
						snprintf(ResultText + 19, 100 - 19, "%d", TimerTenSecondsTexanim.texid);
						snprintf(ResultText + 20, 100 - 20, "%d", TimerSecondsTexanim.texid);
						snprintf(ResultText + 21, 100 - 21, ":");
						snprintf(ResultText + 22, 100 - 22, "%d", TimerMTenSecondsTexanim.texid);
						snprintf(ResultText + 23, 100 - 23, "%d", TimerMSecondsTexanim.texid);
						snprintf(ResultText + 24, 100 - 24, ".");
						sub_4B79C0((char *)(&QuoMessage11), 180);
						CollectedSS1 = false;
						CollectedSS2 = false;
						CollectedSS3 = false;
						CollectedMR1 = false;
						CollectedMR2 = false;
						CollectedMR3 = false;
						CollectedAll = 0;
						ChallengeAction = false;
						ChallengeTimer = 0;
						HintTimer = 180;
					}
				}
				else
				{
					if (HintTimer <= 0)
					{
						PlaySound(6, 0, 0, 0);
						sub_4B79C0((char *)(&QuoMessage2), 180);
						HintTimer = 120;
					}
				}
			}
		}
		if (v1->Scale.x > 0.05f) QUOBalloons_Display(a1);
	}
}

void QUOTimer_Display(ObjectMaster *a1)
{
	CardCountTexanim.sx = 16 * HorizontalStretch;
	CardCountTexanim.sy = 16 * HorizontalStretch;
	CardCountSlashTexanim.sx = 16 * HorizontalStretch;
	CardCountSlashTexanim.sy = 16 * HorizontalStretch;
	CardCountTotalTexanim.sx = 16 * HorizontalStretch;
	CardCountTotalTexanim.sy = 16 * HorizontalStretch;
	TimerTenMinutesTexanim.sx = 16 * HorizontalStretch;
	TimerTenMinutesTexanim.sy = 16 * HorizontalStretch;
	TimerMinutesTexanim.sx = 16 * HorizontalStretch;
	TimerMinutesTexanim.sy = 16 * HorizontalStretch;
	TimerColon1Texanim.sx = 16 * HorizontalStretch;
	TimerColon1Texanim.sy = 16 * HorizontalStretch;
	TimerTenSecondsTexanim.sx = 16 * HorizontalStretch;
	TimerTenSecondsTexanim.sy = 16 * HorizontalStretch;
	TimerSecondsTexanim.sx = 16 * HorizontalStretch;
	TimerSecondsTexanim.sy = 16 * HorizontalStretch;
	TimerColon2Texanim.sx = 16 * HorizontalStretch;
	TimerColon2Texanim.sy = 16 * HorizontalStretch;
	TimerMTenSecondsTexanim.sx = 16 * HorizontalStretch;
	TimerMTenSecondsTexanim.sy = 16 * HorizontalStretch;
	TimerMSecondsTexanim.sx = 16 * HorizontalStretch;
	TimerMSecondsTexanim.sy = 16 * HorizontalStretch;
	njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
	njSetTexture((NJS_TEXLIST*)0x00912DF4);
	SetMaterialAndSpriteColor_Float(1.0f, 1.0f, 1.0f, 1.0f);
	//Draw count
	CardCountTexanim.texid = CollectedAll;
	njDrawSprite2D_ForcePriority(&CardCount, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw slash
	CardCountSlashTexanim.texid = 73;
	njDrawSprite2D_ForcePriority(&CardCountSlash, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw total
	CardCountTotalTexanim.texid = 6;
	njDrawSprite2D_ForcePriority(&CardCountTotal, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw timer tenminutes
	TimerTenMinutesTexanim.texid = (((ChallengeTimer / 3600) % 60) / 10) % 10;
	njDrawSprite2D_ForcePriority(&TimerTenMinutes, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw timer minutes
	TimerMinutesTexanim.texid = ((ChallengeTimer / 3600) % 60) % 10;
	njDrawSprite2D_ForcePriority(&TimerMinutes, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw minute colon
	TimerColon1Texanim.texid = 10;
	njDrawSprite2D_ForcePriority(&TimerColon1, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw timer tenseconds
	TimerTenSecondsTexanim.texid = (((ChallengeTimer / 60) % 60) / 10) % 10;
	njDrawSprite2D_ForcePriority(&TimerTenSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw timer seconds
	TimerSecondsTexanim.texid = ((ChallengeTimer / 60) % 60) % 10;
	njDrawSprite2D_ForcePriority(&TimerSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw minute colon
	TimerColon2Texanim.texid = 10;
	njDrawSprite2D_ForcePriority(&TimerColon2, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw timer militenseconds
	TimerMTenSecondsTexanim.texid = (((ChallengeTimer * 5 / 3) % 1000) / 10) % 10;
	njDrawSprite2D_ForcePriority(&TimerMTenSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw timer miliseconds
	TimerMSecondsTexanim.texid = ((ChallengeTimer * 5 / 3) % 1000) % 10;
	njDrawSprite2D_ForcePriority(&TimerMSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
	ClampGlobalColorThing_Thing();
}

void QUOTimer_Main(ObjectMaster *a1)
{
	if (((ChallengeTimer / 3600) % 60) / 10 < 1)
	{
		if (ChallengeAction == true)
		{
			CollectedAll = CollectedSS1 + CollectedSS2 + CollectedSS3 + CollectedMR1 + CollectedMR2 + CollectedMR3;
			ChallengeTimer++;
			QUOTimer_Display(a1);
		}
	}
	if (((ChallengeTimer / 3600) % 60) / 10 >= 1)
	{
		ChallengeAction = false;
		ChallengeTimer = 0;
		sub_4B79C0((char *)(&QuoMessage3), 180);
	}
}

void QUOTimer_Load(ObjectMaster *a1)
{
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))QUOTimer_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))QUOTimer_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void QUOBalloons_Load(ObjectMaster *a1)
{
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))QUOBalloons_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))QUOBalloons_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void LoadQUOStuff()
{
	ObjectMaster *obj;
	EntityData1 *ent;
	ObjectFunc(OF0, QUOBalloons_Load);
	ObjectFunc(OF1, QUOPoster_Load);
	ObjectFunc(OF2, QUOTimer_Load);
	setdata_dlc.Distance = 612800.0f;
	if (GameMode == GameModes_Adventure_Field || GameMode == GameModes_Mission)
	{
		if (TimerLoaded == false)
		{
			//QUOTimer
			obj = LoadObject((LoadObj)2, 3, OF2);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = 64;
				ent->Position.y = 64;
				ent->Scale.x = 1.0f;
				ent->Scale.y = 1.0f;
				ent->Scale.z = 1.0f;
			}
			TimerLoaded = true;
		}
		//Station Square objects
		if (CurrentLevel == 26 && ObjectsLoaded_SS == false)
		{
			//Balloon
			obj = LoadObject((LoadObj)2, 3, OF0);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = 44;
				ent->Position.y = 50;
				ent->Position.z = 1418;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0;
				ent->Rotation.z = 0;
				if (ChallengeAction == false)
				{
					ent->Scale.x = 1.5f;
					ent->Scale.y = 1.5f;
					ent->Scale.z = 1.5f;
				}
				else
				{
					ent->Scale.x = 0.05f;
					ent->Scale.y = 0.05f;
					ent->Scale.z = 0.05f;
				}
				ent->CharIndex = 3;
				ent->CharID = 10;
				ent->Action = 26;
				ent->NextAction = 3;
			}
			//Cards
			obj = LoadObject((LoadObj)2, 3, OF1);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = -163;
				ent->Position.y = 60;
				ent->Position.z = 1788;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0x6000;
				ent->Rotation.z = 0;
				ent->CharIndex = 4;
				//ent->CharID = 10;
				ent->Scale.x = 1.0f;
				ent->Scale.y = 1.0f;
				ent->Scale.z = 1.0f;
				ent->Action = 26;
				ent->NextAction = 3;
				ent->Index = 0;
			}
			obj = LoadObject((LoadObj)2, 3, OF1);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = 540;
				ent->Position.y = -14;
				ent->Position.z = 1377;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0;
				ent->Rotation.z = 0;
				ent->Scale.x = 1.0f;
				ent->Scale.y = 1.0f;
				ent->Scale.z = 1.0f;
				ent->CharIndex = 5;
				ent->Action = 26;
				ent->NextAction = 3;
				ent->CharID = 10;
				ent->Index = 1;
			}
			obj = LoadObject((LoadObj)2, 3, OF1);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = 161;
				ent->Position.y = 23;
				ent->Position.z = 1260;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0x4000;
				ent->Rotation.z = 0;
				ent->CharIndex = 6;
				ent->Scale.x = 1.0f;
				ent->Scale.y = 1.0f;
				ent->Scale.z = 1.0f;
				//ent->CharID = 0;
				ent->Action = 26;
				ent->NextAction = 3;
				ent->Index = 2;
			}
			ObjectsLoaded_SS = true;
		}
		//Mystic Ruins objects
		if (CurrentLevel == 33 && ObjectsLoaded_MR == false)
		{
			//Balloon
			obj = LoadObject((LoadObj)2, 3, OF0);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = -97;
				ent->Position.y = 107;
				ent->Position.z = 1106;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0;
				ent->Rotation.z = 0;
				ent->CharIndex = 10;
				if (ChallengeAction == true)
				{
					ent->Scale.x = 1.5f;
					ent->Scale.y = 1.5f;
					ent->Scale.z = 1.5f;
				}
				else
				{
					ent->Scale.x = 0.05f;
					ent->Scale.y = 0.05f;
					ent->Scale.z = 0.05f;
				}
				ent->CharID = 10;
				ent->Action = 33;
				ent->NextAction = 0;
			}
			//Cards
			obj = LoadObject((LoadObj)2, 3, OF1);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = 175;
				ent->Position.y = -8;
				ent->Position.z = 72;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0;
				ent->Rotation.z = 0;
				ent->CharIndex = 9;
				ent->Scale.x = 1.0f;
				ent->Scale.y = 1.0f;
				ent->Scale.z = 1.0f;
				ent->Action = 33;
				ent->NextAction = 0;
				ent->Index = 3;
				ent->CharID = 10;
			}
			obj = LoadObject((LoadObj)2, 3, OF1);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = 1574;
				ent->Position.y = 12;
				ent->Position.z = 528;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0;
				ent->Rotation.z = 0;
				ent->CharIndex = 5;
				ent->Scale.x = 1.0f;
				ent->Scale.y = 1.0f;
				ent->Scale.z = 1.0f;
				ent->Action = 33;
				ent->NextAction = 0;
				ent->Index = 4;
				ent->CharID = 10;
			}
			obj = LoadObject((LoadObj)2, 3, OF1);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = 496;
				ent->Position.y = 214;
				ent->Position.z = 502;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0;
				ent->Rotation.z = 0;
				ent->CharIndex = 7;
				ent->Scale.x = 1.0f;
				ent->Scale.y = 1.0f;
				ent->Scale.z = 1.0f;
				ent->Action = 33;
				ent->NextAction = 0;
				ent->Index = 5;
				ent->CharID = 10;
			}
			ObjectsLoaded_MR = true;
		}
	}
}

void Y2KPoster_Display(ObjectMaster *a1)
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
		njRotateY(0, v3 + 0xC000);
		ProcessModelNode_AB_Wrapper(&y2kposter, 1.0f);
		njPopMatrix(1u);
	}
}

void Y2KPoster_Main(ObjectMaster *a1)
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
				switch (v1->CharIndex)
				{
					case 0:
						sub_4B79C0((char *)(&Y2KMessage1), 180);
						break;
					case 1:
						sub_4B79C0((char *)(&Y2KMessage2), 180);
						break;
					case 2:
						sub_4B79C0((char *)(&Y2KMessage3), 180);
						break;
					case 3:
						sub_4B79C0((char *)(&Y2KMessage4), 180);
						break;
					case 4:
						sub_4B79C0((char *)(&Y2KMessage5), 180);
						break;
					case 5:
						sub_4B79C0((char *)(&Y2KMessage6), 180);
						break;
					default:
						break;
				}
				HintTimer = 120;
			}
		}
		Y2KPoster_Display(a1);
	}
}

void Y2KPoster_Load(ObjectMaster *a1)
{
	a1->DeleteSub = DeleteObject_DynamicCOL;
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Y2KPoster_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))Y2KPoster_Display;
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
			if (MusicMode == 0)
			{
				StopMusic();
				sub_425800(MusicIDs_PalmtreePanic);
				MusicMode = 1;
				if (CurrentLevel == 26) WriteData<1>((char*)0x0062EEF9, MusicIDs_PalmtreePanic);
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
	if (v1->CharID == 1) //Only add collision for rings that are horizontal
	{
		v5 = sub_49D6C0(&object_00001514, a1, (ColFlags)0x20001001);
		v5->scl[0] = 1.0f;
		v5->scl[1] = 1.0f;
		v5->scl[2] = 1.0f;
	}
	else v5 = nullptr;
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Y2KRing_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))Y2KRing_Display;
	a1->DeleteSub = DeleteObject_DynamicCOL;
}

void LoadY2KRings_StationSquare()
{
	ObjectMaster *obj;
	EntityData1 *ent;
	ObjectFunc(OF0, Y2KRing_Load);
	ObjectFunc(OF1, Y2KPoster_Load);
	setdata_dlc.Distance = 612800.0f;
	//Station Square
	if ((GameMode == GameModes_Adventure_Field || GameMode == GameModes_Mission) && ObjectsLoaded == false)
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

void DLCHook_LoadLevelIncrementAct(ObjectMaster *a1)
{
	sub_4570B0();
	if (IsAdventureComplete(GetCharacterSelection()) || DisableDuringStory == false)
	{
		if (CurrentDLC == 0)
		{
			if (CurrentLevel == 4 && CurrentAct == 0)
			{
				if (ChallengeAction && !ChallengeOver && CurrentLevel == 4 && CurrentAct == 0 && CurrentCharacter == 0) LoadATT1Stuff();
			}
			if (CurrentLevel == 38 && CurrentCharacter == 2) LoadATT3Stuff(); //Challenge 3
		}
		//Halloween
		if (CurrentDLC == 4)
		{
			if (CurrentLevel == 3 && CurrentAct == 0) LoadHalloweenStuff_Twinkle1();
			if (CurrentLevel == 3 && CurrentAct == 1) LoadHalloweenStuff_Twinkle2();
			if (CurrentLevel == 3 && CurrentAct == 2) LoadHalloweenStuff_Twinkle3();
		}
		//Reebok challenge
		if (CurrentDLC == 7 && GetEventFlag(EventFlags_Sonic_EmeraldCoastClear))
		{
			if (ChallengeAction && !ChallengeOver && CurrentLevel == 1 && CurrentAct == 0 && CurrentCharacter == 0) LoadReebokStuffInEmeraldCoast();
		}
		//Y2K Rings
		if (CurrentDLC == 9)
		{
			if (CurrentLevel != 26 && CurrentLevel != 33 && CurrentLevel != 29 && CurrentLevel != 32 && CurrentLevel != 34) LoadY2KRings();
		}
	}
}

void DLCHook_StationSquare()
{
	sub_62E980();
	if (IsAdventureComplete(GetCharacterSelection()) || DisableDuringStory == false)
	{
		if (CurrentDLC == 0)
		{
			//Challenge 1 (Sonic)
			if (CurrentLevel == 26 && CurrentCharacter == 0 && (GetEventFlag(EventFlags_Sonic_SpeedHighwayClear) || !GetEventFlag(EventFlags_Sonic_SpeedHighwayOpen))) LoadATT1Stuff_SS();
			//Challenge 2 (Knuckles)
			if ((CurrentLevel == 26 || CurrentLevel == 33) && CurrentCharacter == 3) LoadATT2Stuff_SSorMR();
			//Challenge 3 (Tails)
			if (CurrentLevel == 26 && CurrentCharacter == 2) LoadATT3Stuff_SS(); //Challenge 3
		}
		if (CurrentDLC == 1)
		{
			if (CurrentLevel == 26) Christmas98_LoadStuff();
		}
		//Christmas 99
		if (CurrentDLC == 2)
		{
			if (CurrentLevel == 26) Christmas99_LoadStuff();
		}
		//Famitsu
		if (CurrentDLC == 3)
		{
			if (CurrentLevel == 26) Famitsu_LoadStuff();
		}
		//Halloween
		if (CurrentDLC == 4)
		{
			if (CurrentLevel == 26) LoadHalloweenStuff_StationSquare();
		}
		//Launch Party
		if (CurrentDLC == 5)
		{
			if (CurrentLevel == 26) LoadLaunchPartyStuff_SS();
		}
		//QUO challenge
		if (CurrentDLC == 6)
		{
			if (CurrentLevel == 26 || CurrentLevel == 33) LoadQUOStuff();
		}
		//Reebok challenge
		if (CurrentDLC == 7)
		{
			if (CurrentLevel == 26 && GetEventFlag(EventFlags_Sonic_EmeraldCoastClear)) LoadReebokStuffInStationSquare();
		}
		//Samba GP
		if (CurrentDLC == 8)
		{
			if (CurrentLevel == 26) LoadSambaGateEntry();
		}
		//Y2K
		if (CurrentDLC == 9)
		{
			if (CurrentLevel == 26) LoadY2KRings_StationSquare(); else LoadY2KRings();
		}
	}
}

void DLCHook_MysticRuins()
{
	sub_52F240();
	if (IsAdventureComplete(GetCharacterSelection()) || DisableDuringStory == false)
	{
		//ATT challenges
		if (CurrentDLC == 0)
		{
			//Challenge 2 (Knuckles)
			if ((CurrentLevel == 26 || CurrentLevel == 33) && CurrentCharacter == 3) LoadATT2Stuff_SSorMR();
		}
		//QUO challenge
		if (CurrentDLC == 6)
		{
			if (CurrentLevel == 26 || CurrentLevel == 33) LoadQUOStuff();
		}
	}
}

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init(const char* path, const HelperFunctions& helperFunctions)
	{
		WriteJump((void*)0x0042CCC7, PlaySegaSonicTeamVoice_asm);
		WriteJump((void*)0x0042CD2F, PlaySegaSonicTeamVoice_asm);
		GetLocalTime(&CurrentTime);
		srand(CurrentTime.wSecond);
		if (helperFunctions.Version < 6)
		{
			MessageBox(WindowHandle,
				L"Mod Loader out of date. Dreamcast DLCs mod requires API version 6 or newer.",
				L"Dreamcast DLCs mod error: Mod Loader out of date", MB_OK | MB_ICONERROR);
			return;
		}

		// Check for old mod DLLs.
		std::wstring OldModsMessage = L"Old/incompatible mods detected!\n\n"
			L"It appears that you are running the Dreamcast DLCs "
			L"mod with older individual DLC mods. The individual "
			L"mods are outdated and will cause problems if you "
			L"leave them enabled. These mods are no longer needed "
			L"because they are built into the Dreamcast DLCs mod, "
			L"which you are also running.\n\n"
			L"Please uninstall the individual DLC mods in the Mod Manager.\n\n";

		bool OldModsFound = false;
		for (unsigned int i = 0; i < LengthOfArray(OldModDLLs); i++)
		{
			if (GetModuleHandle(OldModDLLs[i]) != nullptr)
			{
				// Found a known incompatible mod.
				OldModsMessage += OldModDLLs[i];
				OldModsMessage += '\n';
				OldModsFound = true;
			}
		}

		if (OldModsFound)
		{
			MessageBox(WindowHandle, OldModsMessage.c_str(),
				L"Dreamcast DLCs mod error: incompatible mods detected",
				MB_OK | MB_ICONERROR);
			return;
		}

		//Config stuff
		const IniFile *config = new IniFile(std::string(path) + "\\config.ini");
		MenuVoiceMode = config->getInt("General settings", "MenuVoiceThing", -1);
		if (MenuVoiceMode == 9) MenuVoiceMode = rand() % 8 + 1;
		DisableDuringStory = config->getBool("General settings", "DisableDuringStory", true);
		ForceSADXLayout = config->getBool("General settings", "ForceSADXMode", false);
		DLCMode = config->getString("General settings", "DLCMode", "Random");
		CurrentDLC = config->getInt("General settings", "DLCSingle", 0);
		SegaVoiceLanguage = config->getString("General settings", "SegaVoiceLanguage", "English");
		EverybodySuperSonicRacing = config->getBool("Samba GP settings", "SuperSonicRacing", false);
		SonicTrack = config->getInt("Samba GP settings", "SonicTrack", 2);
		TailsTrack = config->getInt("Samba GP settings", "TailsTrack", 1);
		KnucklesTrack = config->getInt("Samba GP settings", "KnucklesTrack", 3);
		AmyTrack = config->getInt("Samba GP settings", "AmyTrack", 4);
		BigTrack = config->getInt("Samba GP settings", "BigTrack", 5);
		GammaTrack = config->getInt("Samba GP settings", "GammaTrack", 0);

		// Monthly DLCs.
		struct dlcKeyInfo
		{
			const char *dlc1name;
			const char *dlc2name;
			int dlc1id;
			int dlc2id;
		};
		static const dlcKeyInfo dlcKeyNames[12] =
		{
			{"Jan1DLC", "Jan2DLC", 9, 9},
			{"Feb1DLC", "Feb2DLC", 3, 3},
			{"Mar1DLC", "Mar2DLC", 6, 6},
			{"Apr1DLC", "Apr2DLC", 0, 0},
			{"May1DLC", "May2DLC", 0, 0},
			{"Jun1DLC", "Jun2DLC", 8, 8},
			{"Jul1DLC", "Jul2DLC", 7, 7},
			{"Aug1DLC", "Aug2DLC", -1, -1},
			{"Sep1DLC", "Sep2DLC", 5, 5},
			{"Oct1DLC", "Oct2DLC", 4, 4},
			{"Nov1DLC", "Nov2DLC", 8, 8},
			{"Dec1DLC", "Dec2DLC", 2, 1},
		};

		for (unsigned int i = 0; i < 12; i++)
		{
			MonthlyDLCs[i][0] = config->getInt("Seasonal DLC settings",
				dlcKeyNames[i].dlc1name, dlcKeyNames[i].dlc1id);
			MonthlyDLCs[i][1] = config->getInt("Seasonal DLC settings",
				dlcKeyNames[i].dlc2name, dlcKeyNames[i].dlc2id);
		}

		delete config;

		if (ForceSADXLayout == false)
		{
			ReplaceBIN("CAMSS00S", "CAMSS00S_DC");
			ReplaceBIN("CAMSS01S", "CAMSS01S_DC");
			ReplaceBIN("CAMSS02S", "CAMSS02S_DC");
			ReplaceBIN("CAMSS03S", "CAMSS03S_DC");
			ReplaceBIN("CAMSS04S", "CAMSS04S_DC");
			ReplaceBIN("CAMSS05S", "CAMSS05S_DC");
		}

		// DLCs.
		if (DLCMode == "Random")
		{
			// Randomly select a DLC.
			CurrentDLC = rand() % 10;
		}
		else if (DLCMode == "Seasonal")
		{
			// Select a DLC based on the current month.
			// NOTE: wMonth is 1-12. Subtract 1 for the array index.
			if (CurrentTime.wDay <= 15)
			{
				// First half of the month.
				CurrentDLC = MonthlyDLCs[CurrentTime.wMonth-1][0];
			}
			else
			{
				// Second half of the month.
				CurrentDLC = MonthlyDLCs[CurrentTime.wMonth-1][1];
			}
		}
		WriteCall((void*)0x00415A6D, DLCHook_LoadLevelIncrementAct); //LoadLevel
		WriteCall((void*)0x004147B6, DLCHook_LoadLevelIncrementAct); //IncrementAct
		WriteCall((void*)0x0062F098, DLCHook_StationSquare); 
		WriteCall((void*)0x0062F102, DLCHook_StationSquare);
		WriteCall((void*)0x0052FB82, DLCHook_MysticRuins);

		// DLC-specific handling.
		PrintDebug("Current DLC ID: %02X\n", CurrentDLC);
		switch (CurrentDLC)
		{
			case 51:
				LaunchPartyDLCMode = "Japan";
				CurrentDLC = 5;
				break;
			case 52:
				LaunchPartyDLCMode = "Europe";
				CurrentDLC = 5;
				break;
			case 0:
				// AT&T challenges
				WriteCall((void*)0x004B793E, StopVoicesButMaybeNot_Challenge);
				helperFunctions.RegisterCommonObjectPVM(ATT1Textures);
				helperFunctions.RegisterCommonObjectPVM(ATT2Textures);
				helperFunctions.RegisterCommonObjectPVM(ATT3Textures);
				helperFunctions.RegisterCommonObjectPVM(TimerTextures);
				break;
			case 1:
				// Christmas 98
				MusicList[68].Name = "Xmas98_1";
				MusicList[69].Name = "Xmas98_2";
				MusicList[70].Name = "Xmas98_3";
				helperFunctions.RegisterCommonObjectPVM(Christmas98Textures);
				WriteCall((void*)0x004B793E, StopVoicesButMaybeNot_Christmas);
				break;
			case 2:
				// Christmas 99
				helperFunctions.RegisterCommonObjectPVM(Christmas99Textures);
				WriteCall((void*)0x004B793E, StopVoicesButMaybeNot_Christmas);
				break;
			case 3:
				// Famitsu
				WriteCall((void*)0x004B793E, StopVoicesButMaybeNot_Challenge);
				helperFunctions.RegisterCommonObjectPVM(FamitsuTextures);
				helperFunctions.RegisterCommonObjectPVM(TimerTextures);
				ReplaceBIN("CAMSS00S", "CAMSS00S_F");
				ReplaceBIN("CAMSS01S", "CAMSS01S_F");
				ReplaceBIN("CAMSS02S", "CAMSS02S_F");
				ReplaceBIN("CAMSS03S", "CAMSS03S_F");
				ReplaceBIN("CAMSS04S", "CAMSS04S_F");
				ReplaceBIN("CAMSS05S", "CAMSS05S_F");
				break;
			case 4:
				// Halloween
				helperFunctions.RegisterCommonObjectPVM(HalloweenTextures);
				break;
			case 5:
				// Launch party
				if (LaunchPartyDLCMode == "US")
					helperFunctions.RegisterCommonObjectPVM(LaunchPartyUSTextures);
				else if (LaunchPartyDLCMode == "Europe")
					helperFunctions.RegisterCommonObjectPVM(LaunchPartyEUTextures);
				else if (LaunchPartyDLCMode == "Japan")
					helperFunctions.RegisterCommonObjectPVM(LaunchPartyJPTextures);
				break;
			case 6:
				// QUO challenge
				ReplaceBIN("CAMSS00S", "CAMSS00S_F");
				ReplaceBIN("CAMSS01S", "CAMSS01S_F");
				ReplaceBIN("CAMSS02S", "CAMSS02S_F");
				ReplaceBIN("CAMSS03S", "CAMSS03S_F");
				ReplaceBIN("CAMSS04S", "CAMSS04S_F");
				ReplaceBIN("CAMSS05S", "CAMSS05S_F");
				WriteCall((void*)0x004B793E, StopVoicesButMaybeNot_Challenge);
				helperFunctions.RegisterCommonObjectPVM(QuoTextures);
				helperFunctions.RegisterCommonObjectPVM(TimerTextures);
				break;
			case 7:
				// Reebok challenge
				helperFunctions.RegisterCommonObjectPVM(ReebokTextures);
				helperFunctions.RegisterCommonObjectPVM(TimerTextures);
				break;
			case 8:
				// Samba GP
				helperFunctions.RegisterCommonObjectPVM(SambaGPTextures);
				WriteCall((void*)0x004DB126, QuitTwinkleCircuit);
				WriteCall((void*)0x00640684, CallSambaCircuit);
				break;
			case 9:
				// Y2K Rings
				helperFunctions.RegisterCommonObjectPVM(Y2KTextures);
				break;
			default:
				break;
		}

		if (SegaVoiceLanguage != "Off")
		{
			std::random_device r;
			std::mt19937 mt(r());
			std::uniform_int_distribution<int> voice(0, 7);
			std::uniform_int_distribution<int> eggman(0, 1);
			if (MenuVoiceMode != -1) CharacterVoice = MenuVoiceMode - 1;
			else CharacterVoice = voice(mt);
			AlternateEggman = eggman(mt) == 1;
			if (SegaVoiceLanguage == "Japanese")
			{
				VoiceLanguage_sel = 0;
				if (CharacterVoice == 5)
				{
					WriteData<1>((char*)0x0042CC9C, 0xFF);
					WriteData<1>((char*)0x0042CD0E, 0xFF);
				}
			}
		}
	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (MenuVoiceMode != -1 && MenuVoiceMode != 9)
		{
			if (MenuVoice != MenuVoiceMode) MenuVoice = MenuVoiceMode;
		}
		if (HintTimer > 0) HintTimer--;
		if (IsAdventureComplete(GetCharacterSelection()) || DisableDuringStory == false)
		{
			if (CurrentDLC == 0)
			{
				if (CurrentCharacter == 0)
				{
					if (GameState != 16)
					{
						if (GameState == 6 || CurrentLevel != 26 || (GameMode != GameModes_Adventure_Field && GameMode != GameModes_Mission))
						{
							ObjectsLoaded = false;
						}
						if (GameMode != GameModes_Adventure_Field && GameMode != GameModes_Adventure_ActionStg && GameMode != GameModes_Mission)
						{
							HighwayGoal = false;
							ChallengeAction = false;
							ChallengeOver = false;
							ChallengeTimer = 0;
							ObjectsLoaded = false;
						}
						if (CurrentLevel == 4 && GameState == 9 && HighwayGoal == false)
						{
							ChallengeAction = false;
							ChallengeOver = false;
							ChallengeTimer = 0;
							ObjectsLoaded = false;
						}
					}
				}
				if (CurrentCharacter == 3)
				{
					if (GameState != 16)
					{
						if (GameMode != GameModes_Adventure_Field && GameMode != GameModes_Mission)
						{
							ChallengeAction = false;
							ChallengeOver = false;
							Treasure1 = false;
							Treasure2 = false;
							Treasure3 = false;
							Treasure4 = false;
							ChallengeTimer = 0;
							ObjectsLoaded = false;
						}
						if (PreviousLevel != CurrentLevel)
						{
							ObjectsLoaded = false;
							PreviousLevel = CurrentLevel;
							PreviousAct = CurrentAct;
						}
						if (GameState == 6)
						{
							ObjectsLoaded = false;
						}
					}
				}
				if (CurrentCharacter == 2)
				{
					if (GameState != 16)
					{
						if (CurrentLevel != 38 || GameState == 21)
						{
							ChallengeAction = false;
							ChallengeOver = false;
							Gate1 = false;
							Gate2 = false;
							Gate3 = false;
							Gate4 = false;
							Gate5 = false;
							Gate6 = false;
							Gate7 = false;
							Gate8 = false;
							Gate9 = false;
							Gate10 = false;
							ChallengeTimer = 0;
						}
						if (CurrentLevel != 26 || GameState == 6)
						{
							ObjectsLoaded = false;
						}
						if (CurrentLevel == 33 && CollectedAll == 10 && ChallengeOver == false && Camera_Data1 != nullptr)
						{
							sub_4B79C0((char *)(&ATT3_Message4), 360);
							Gate1 = false;
							Gate2 = false;
							Gate3 = false;
							Gate4 = false;
							Gate5 = false;
							Gate6 = false;
							Gate7 = false;
							Gate8 = false;
							Gate9 = false;
							Gate10 = false;
							CollectedAll = 0;
							ChallengeTimer = 0;
							ChallengeOver = false;
							ChallengeAction = false;
						}
					}
				}
			}
			if (CurrentDLC == 1)
			{
				if (CurrentLevel != 26 || GameState == 6 || GameState == 21 || (GameMode != GameModes_Adventure_Field && GameMode != GameModes_Mission))
				{
					ObjectsLoaded = false;
					MusicMode = 0;
					WriteData<1>((char*)0x0062EEF9, MusicIDs_StationSquare);
				}
			}
			if (CurrentDLC == 2)
			{
				if (CurrentLevel != 26 || GameState == 6 || GameState == 21 || (GameMode != GameModes_Adventure_Field && GameMode != GameModes_Mission))
				{
					ObjectsLoaded = false;
					MusicMode = 0;
					WriteData<1>((char*)0x0062EEF9, MusicIDs_StationSquare);
				}
			}
			if (CurrentDLC == 3)
			{
				HMODULE ADV00MODELS = GetModuleHandle(L"ADV00MODELS");
				NJS_OBJECT **___ADV00SS01_OBJECTS = (NJS_OBJECT **)GetProcAddress(ADV00MODELS, "___ADV00SS01_OBJECTS");
				if (GameState != 16)
				{
					if (GameState == 6)
					{
						ObjectsLoaded = false;
						Collected1 = false;
						Collected2 = false;
						Collected3 = false;
						Collected4 = false;
						Collected5 = false;
						CollectedAll = 0;
						ChallengeAction = false;
						ChallengeTimer = 0;
					}
					if (ForceSADXLayout == true && ChallengeAction == true && ADV00MODELS != nullptr)
					{
						COL_whatever.Flags = 0x80040000;
						___ADV00SS01_OBJECTS[28]->pos[1] = 20;
					}
					if (CurrentLevel != 26 || (GameMode != GameModes_Adventure_Field && GameMode != GameModes_Mission))
					{
						ObjectsLoaded = false;
						Collected1 = false;
						Collected2 = false;
						Collected3 = false;
						Collected4 = false;
						Collected5 = false;
						CollectedAll = 0;
						ChallengeAction = false;
						ChallengeTimer = 0;
					}
				}
			}
			if (CurrentDLC == 4)
			{
				if (CurrentLevel != 26 || GameState == 6 || GameState == 21)
				{
					ObjectsLoaded = false;
				}
			}
			if (CurrentDLC == 5)
			{
				if (CurrentLevel != 26 || GameState == 6 || GameState == 21)
				{
					ObjectsLoaded = false;
				}
			}
			if (CurrentDLC == 6)
			{
				if (GameState != 16)
				{
					if (GameMode != GameModes_Adventure_Field && GameMode != GameModes_Mission)
					{
						CollectedAll = 0;
						CollectedSS1 = false;
						CollectedSS2 = false;
						CollectedSS3 = false;
						CollectedMR1 = false;
						CollectedMR2 = false;
						CollectedMR3 = false;
						ChallengeTimer = 0;
						ChallengeAction = false;
						ObjectsLoaded_SS = false;
						ObjectsLoaded_MR = false;
						TimerLoaded = false;
					}
					if (GameState == 6)
					{
						ObjectsLoaded_SS = false;
						ObjectsLoaded_MR = false;
						TimerLoaded = false;
					}
					if (PreviousLevel != CurrentLevel)
					{
						if (PreviousLevel == 26) ObjectsLoaded_SS = false;
						if (PreviousLevel == 33) ObjectsLoaded_MR = false;
						TimerLoaded = false;
						PreviousLevel = CurrentLevel;
					}
				}
			}
			if (CurrentDLC == 7)
			{
				if (GameState != 16)
				{
					if (GameState == 6)
					{
						ObjectsLoaded = false;
					}
					if (CurrentLevel != 26 || (GameMode != GameModes_Adventure_Field && GameMode != GameModes_Mission))
					{
						ObjectsLoaded = false;
					}
					if (ChallengeAction == true && (CurrentLevel != 1 || CurrentAct != 0))
					{
						ChallengeTimer = 0;
						Collected1 = false;
						Collected2 = false;
						Collected3 = false;
						Collected4 = false;
						Collected5 = false;
						CollectedAll = 0;
					}
				}
			}
			if (CurrentDLC == 8)
			{
				if (CurrentLevel != 26 || GameState == 6 || GameState == 21 || (GameMode != GameModes_Adventure_Field && GameMode != GameModes_Mission))
				{
					ObjectsLoaded = false;
				}
			}
			if (CurrentDLC == 9)
			{
				if (GameState != 16)
				{
					if (CurrentLevel != 26)
					{
						ObjectsLoaded = false;
						WriteData<1>((char*)0x0062EEF9, MusicIDs_s_square);
					}
					if (GameState == 6 || GameState == 7 || GameState == 21)
					{
						MusicMode = 0;
						ObjectsLoaded = false;
						WriteData<1>((char*)0x0062EEF9, MusicIDs_s_square);
					}
					if (PreviousLevel != CurrentLevel)
					{
						MusicMode = 0;
						PreviousLevel = CurrentLevel;
						PreviousAct = CurrentAct;
					}
					if (CurrentLevel != 26 && PreviousAct != CurrentAct)
					{
						MusicMode = 0;
						PreviousLevel = CurrentLevel;
						PreviousAct = CurrentAct;
					}
				}
			}
		}
	}

	__declspec(dllexport) void __cdecl OnInput()
	{
		if (IsAdventureComplete(GetCharacterSelection()) || DisableDuringStory == false)
		{
			if (CurrentDLC == 0)
			{
				if (CurrentCharacter == 3 && GameState == 16)
				{
					if (ChallengeAction == true && (ControllerPointersShit[0]->PressedButtons & Buttons_Y) == Buttons_Y)
					{
						CollectedAll = 0;
						Treasure1 = false;
						Treasure2 = false;
						Treasure3 = false;
						Treasure4 = false;
						ChallengeTimer = 0;
						ChallengeAction = false;
						ChallengeOver = false;
					}
				}
				if (CurrentCharacter == 2 && GameState == 16)
				{
					if (ChallengeAction == true && (ControllerPointersShit[0]->PressedButtons & Buttons_Y) == Buttons_Y)
					{
						ChallengeAction = false;
						ChallengeOver = false;
						Gate1 = false;
						Gate2 = false;
						Gate3 = false;
						Gate4 = false;
						Gate5 = false;
						Gate6 = false;
						Gate7 = false;
						Gate8 = false;
						Gate9 = false;
						Gate10 = false;
						ChallengeTimer = 0;
					}
				}
			}
			if (CurrentDLC == 3 && GameState == 16)
			{
				if (ChallengeAction == true && (ControllerPointersShit[0]->PressedButtons & Buttons_Y) == Buttons_Y)
				{
					CollectedAll = 0;
					Collected1 = false;
					Collected2 = false;
					Collected3 = false;
					Collected4 = false;
					Collected5 = false;
					ChallengeTimer = 0;
					ChallengeAction = false;
				}
			}
			if (CurrentDLC == 6 && GameState == 16)
			{
				if (ChallengeAction == true && (ControllerPointersShit[0]->PressedButtons & Buttons_Y) == Buttons_Y)
				{
					CollectedAll = 0;
					CollectedSS1 = false;
					CollectedSS2 = false;
					CollectedSS3 = false;
					CollectedMR1 = false;
					CollectedMR2 = false;
					CollectedMR3 = false;
					ChallengeTimer = 0;
					ChallengeAction = false;
				}
			}
		}
	}
}

