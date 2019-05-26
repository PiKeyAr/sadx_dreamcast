#include "stdafx.h"
#include "textures.h"
#include "SS_Objects.h"

NJS_TEXNAME textures_advss00[220];
NJS_TEXLIST texlist_advss00 = { arrayptrandlength(textures_advss00) };

NJS_TEXNAME textures_advss01[266];
NJS_TEXLIST texlist_advss01 = { arrayptrandlength(textures_advss01) };

NJS_TEXNAME textures_advss02[56];
NJS_TEXLIST texlist_advss02 = { arrayptrandlength(textures_advss02) };

NJS_TEXNAME textures_advss03[264];
NJS_TEXLIST texlist_advss03 = { arrayptrandlength(textures_advss03) };

NJS_TEXNAME textures_advss04[119];
NJS_TEXLIST texlist_advss04 = { arrayptrandlength(textures_advss04) };

NJS_TEXNAME textures_advss05[33];
NJS_TEXLIST texlist_advss05 = { arrayptrandlength(textures_advss05) };

NJS_OBJECT *SS03SeaModel = nullptr;
NJS_OBJECT *SS04SeaModel = nullptr;

/*
#include "SS00_CityHall.h"
#include "SS01_Casino.h"
#include "SS02_Sewers.h"
#include "SS03_MainArea.h"
#include "SS04_Hotel.h"
#include "SS05_Twinkle.h"
*/

static Sint8 PreviousTimeOfDay = -1;

DataArray(FogData, StationSquare1Fog, 0x02AA3D10, 3);
DataArray(FogData, StationSquare2Fog, 0x02AA3D40, 3);
DataArray(FogData, StationSquare3Fog, 0x02AA3D70, 3);
DataArray(FogData, StationSquare4Fog, 0x02AA3DA0, 3);
DataArray(FogData, StationSquare5Fog, 0x02AA3DD0, 3);
DataArray(FogData, StationSquare6Fog, 0x02AA3E00, 3);
DataArray(DrawDistance, StationSquare6DrawDist, 0x02AA3CF8, 3);
FunctionPointer(void, sub_405470, (NJS_ACTION *a1, float a2, int a3), 0x405470);
FunctionPointer(void, sub_405450, (NJS_ACTION *a1, float frame, float scale), 0x405450);
FunctionPointer(void, sub_409E70, (NJS_MODEL_SADX *model, int blend, float scale), 0x409E70);
static NJS_ACTION PoliceCarAction_Rot = { &objectADV00_0019F390_2, (NJS_MOTION*)0x2AFC5F8 };

int __cdecl CheckIfCameraIsInHotel_Lol()
{
	return 0;
}

void __cdecl RenderStationSquareOcean(OceanData *x)
{
	if (CurrentAct == 3 && SS03SeaModel)
	{
		if (!DroppedFrames)
		{
			njSetTexture(&texlist_advss03);
			njPushMatrix(0);
			njTranslate(0, 0, 0, 0);
			ProcessModelNode_AB_Wrapper(SS03SeaModel, 1.0f);
			njPopMatrix(1u);
		}
	}
	if (CurrentAct == 4 && SS04SeaModel)
	{
		if (!DroppedFrames)
		{
			njSetTexture(&texlist_advss04);
			njPushMatrix(0);
			njTranslate(0, 0, 0, 0);
			ProcessModelNode_AB_Wrapper(SS04SeaModel, 1.0f);
			njPopMatrix(1u);
		}
	}
}

NJS_MATERIAL* NPCMaterials[] = {
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021251C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00212158),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021216C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00211EB0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00211A74),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002116B0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002116C4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00211408),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00210988),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00210310),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00210128),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020F95C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020F970),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020F984),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020F6FC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020F710),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020F724),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020F20C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020EE24),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020EE38),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020EBD8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020E784),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020E39C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020E3B0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020E150),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020DF44),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00215000),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00215014),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00214F8C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00214B94),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00214BA8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00214B20),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002140D0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002140E4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002140F8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002138A4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002138B8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002138CC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00213674),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00213688),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002133F8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002131AC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002131C0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00213138),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00212F58),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00212D0C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00212D20),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00212C98),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00212A90),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00217738),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021774C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002176C4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002172CC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002172E0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00217258),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002167C0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002167D4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002167E8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002167FC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00215F94),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00215FA8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00215FBC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00215D64),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00215D78),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00215A74),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00215A88),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00215A00),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002157AC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002157C0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00215738),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021552C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021A764),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021A778),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021A5B4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021A1BC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021A1D0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021A008),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00219498),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002194AC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002194C0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002194D4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002194E8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002194FC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00218C6C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00218C80),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00218C94),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00218A3C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00218A50),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002187C0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00218574),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00218588),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00218408),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00218228),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00217FDC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00217FF0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00217E70),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00217C64),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00203658),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020366C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00202D14),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00202D28),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00202B48),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020270C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00202348),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020235C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002020A0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00201C64),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002018A0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002018B4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002015FC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00200F18),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00200F2C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00200F40),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00200F54),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002009A8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002009BC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00200534),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00200548),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020055C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002002E8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FFE18),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FFE2C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FF9A4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FF9B8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FF9CC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FF75C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FF3C0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020726C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00207280),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002069E4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002069F8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00206A0C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00206434),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00206448),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00206284),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00205E8C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00205EA0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00205CD8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00205638),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020564C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00205660),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00205204),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00205218),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00204F14),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00204F28),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00204F3C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00204944),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00204958),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00204654),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00204668),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020467C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00204080),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020A0D0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020A0E4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00209ACC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00209AE0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00209AF4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00209674),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00209688),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002094C4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002090CC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002090E0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00208F1C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00208B54),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00208B68),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00208B7C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002088C4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002088D8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002085D8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002085EC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00208600),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00208384),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00208398),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00208094),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002080A8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002080BC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00207C98),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020D938),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020D94C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020CFFC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020D010),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020CA4C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020CA60),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020C89C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020C4A4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020C4B8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020C2F0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020BEF8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020BF0C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020BF20),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020BF34),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020B984),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020B998),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020B694),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020B6A8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020B6BC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020AF8C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020AFA0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020AC9C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020ACB0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020ACC4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0020A6C8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F43B4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F4168),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F3EC0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F3A84),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F3838),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F3594),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F2D50),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F2D64),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F24CC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F2300),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F1C50),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F1C64),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F172C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F118C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F11A0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F11B4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F0F40),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F0AEC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F054C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F0560),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F0574),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F0304),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EFD00),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EFD14),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F7A34),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F7880),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F754C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F739C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F6B54),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F6B68),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F5EBC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F5ED0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F5EE4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F5DD4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F5DE8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F5948),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F595C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F56CC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F52AC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F52C0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F506C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F4C48),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F4C5C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F4928),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F493C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FB67C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FB514),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FB364),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FB184),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FB01C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FAE68),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FA664),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FA678),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F9ABC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F9AD0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F9A48),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F99C0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F99D4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F955C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F9570),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F8FBC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F8B9C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F8BB0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F8B28),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F85F4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F8608),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F81D4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F81E8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F8160),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F7EA0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001F7EB4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FF094),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FEF2C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FED7C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FEB9C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FEA34),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FE880),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FDEBC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FD464),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FD478),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FD48C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FD3F0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FCD40),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FCD54),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FC9D8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FC9EC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FC75C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FC338),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FC34C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FC2C4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FC0E4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FBCC4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FBCD8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FBC50),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FB994),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001FB9A8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001ED5D8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001ED5EC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001ED600),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001ECF28),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001ECF3C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E81CC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001ECCD4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001ECCE8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001ECC60),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E76FC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001ECA0C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001ECA20),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EC998),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EC8E8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EC8FC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EC910),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EC924),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EC874),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E6574),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E6054),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E6068),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EC524),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EC538),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EC49C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EC4B0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E551C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E5530),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EC234),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EC248),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EC25C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EC1C0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EC14C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E8B70),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E8B84),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E8634),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E7E08),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E7E1C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E7B64),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E7338),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E734C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E7094),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E6850),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E6864),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E6878),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E688C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E66C8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E5C68),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E5C7C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E59A0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E59B4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E50F8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E510C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E5120),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E4E60),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E4CAC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DDC64),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E0250),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E01DC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DD334),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DFE48),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DFDD4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DC3E8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DF150),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DF164),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DF178),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DB8C0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DE850),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DE864),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DAE58),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DAE6C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DA924),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DA938),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DE500),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DE514),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DA0B8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DA0CC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001D9B84),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001D9B98),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DE24C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DE260),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DE1D8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EADA0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EADB4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EADC8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EA80C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EA820),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EA798),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EA204),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EA218),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EA190),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EA0E0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EA0F4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EA108),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EA11C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E9D2C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E9D40),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E9CA4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E9CB8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E9A3C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E9A50),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E9A64),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E99C8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E9954),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EF308),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EF31C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EF330),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EED74),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EED88),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EED00),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EE76C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EE780),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EE6F8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EE648),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EE65C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EE670),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EE684),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EE5D4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EE284),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EE298),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EE1FC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EE210),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EDF94),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EDFA8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EDFBC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EDF20),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001EDEAC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DDA18),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DD770),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DD0E8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DCE44),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DBAA8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DBABC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DB364),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DA528),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001DA53C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001D9788),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001D979C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001D9504),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E2A7C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E2A08),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E2994),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E2664),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E25F0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E257C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E1B20),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E10D0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E10E4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E10F8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E0EE4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E0EF8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E0E70),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E0DFC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E09A0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E09B4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E0918),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E092C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E06C4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E06D8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E063C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E0650),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E05C8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E4920),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E48AC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E451C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E44A8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E3C64),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E340C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E3420),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E3434),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E30BC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E30D0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E2E08),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E2E1C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x001E2D94),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00221DC0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00221DD4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00221624),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00221638),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021D8E8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021D53C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021D358),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021D128),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021CD7C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021CB98),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021C984),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00220D5C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00220D70),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021BF80),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021BC88),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021B9D0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021B618),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021B320),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021B080),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00220720),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00220734),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021FEA8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021FEBC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021F9C4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021F9D8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021F9EC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021F13C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021F150),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021EB00),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021EB14),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021E288),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021E29C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021DAA4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021DAB8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021C3D4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021C3E8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021ACA8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0021ACBC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022696C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00226980),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00225E60),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00225E74),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00225E88),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00225E9C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00225600),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00225614),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00225628),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002253F0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00224D80),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00224D94),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00224DA8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00224B6C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00224008),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022401C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00224030),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00224044),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00224058),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00223B20),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00223B34),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022379C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002237B0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002237C4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00223180),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00223194),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00222DFC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00222E10),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00222E24),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00222638),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022264C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00222660),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022B17C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022AE68),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022AE7C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022AC38),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022A88C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022A578),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022A58C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022A358),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00229B14),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00229028),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022903C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00229050),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00229064),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00229078),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022908C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00228E98),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00228854),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00228868),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022887C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002285FC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00228610),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00228624),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002281AC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00227E74),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00227E88),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00227C90),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002278CC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x00227594),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002275A8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002273B0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x002271F4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022E43C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022E0E4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022E0F8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022E10C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022DFC4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022DDE4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022DA8C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022DAA0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022DAB4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022D970),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022D11C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022C9B0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022C9C4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022C9D8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022C93C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022BEA0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022BEB4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022BEC8),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022BEDC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022BD28),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022BAAC),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022BA24),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022BA38),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022B9B0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022B7D0),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022B748),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022B75C),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022B6D4),
	(NJS_MATERIAL*)((size_t)GetModuleHandle(L"ADV00MODELS") + 0x0022B660),
};

NJS_MATERIAL* CharacterStuff[] = {
	&matlistADV00_0000DE08[0], //Event helicopter
};

NJS_MATERIAL* WhiteDiffuseADV00_External[] = {
	nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,
};

NJS_MATERIAL* WhiteDiffuseADV00[] = {
	//Helicopter
	&matlistADV00_0000E238[0],
	&matlistADV00_0000E238[1],
	//Police car in cutscene
	((NJS_MATERIAL*)0x02DBE574),
	((NJS_MATERIAL*)0x02DBE588),
	((NJS_MATERIAL*)0x02DBE59C),
	&matlistADV00_00190C2C[8], //Train
};

NJS_MATERIAL* WhiteDiffuseADV00_Night[] = {
	nullptr, nullptr, nullptr,
};

NJS_MATERIAL* ObjectSpecularADV00[] = {
	//OTWADoor
	((NJS_MATERIAL*)0x02AB5180),
	((NJS_MATERIAL*)0x02AB5194),
	((NJS_MATERIAL*)0x02AB51A8),
	((NJS_MATERIAL*)0x02AB4F08),
	((NJS_MATERIAL*)0x02AB4F1C),
	((NJS_MATERIAL*)0x02AB4F30),
	((NJS_MATERIAL*)0x02AB4C8C),
	((NJS_MATERIAL*)0x02AB4CA0),
	((NJS_MATERIAL*)0x02AB4CB4),
	//OPoolChair
	((NJS_MATERIAL*)0x02ACAF88),
	((NJS_MATERIAL*)0x02ACAF9C),
	((NJS_MATERIAL*)0x02ACAFB0),
	((NJS_MATERIAL*)0x02ACAFC4),
	((NJS_MATERIAL*)0x02ACAFD8),
	((NJS_MATERIAL*)0x02ACAFEC),
	//Station door
	((NJS_MATERIAL*)0x02AC60D0),
	((NJS_MATERIAL*)0x02AC60E4),
	((NJS_MATERIAL*)0x02AC60F8),
	((NJS_MATERIAL*)0x02AC610C),
	((NJS_MATERIAL*)0x02AC6120),
	((NJS_MATERIAL*)0x02AC6134),
	((NJS_MATERIAL*)0x02AC6AD8),
	((NJS_MATERIAL*)0x02AC6AEC),
	((NJS_MATERIAL*)0x02AC6B00),
	((NJS_MATERIAL*)0x02AC6B14),
	((NJS_MATERIAL*)0x02AC6B28),
	((NJS_MATERIAL*)0x02AC6B3C),
	//Burger shop door
	((NJS_MATERIAL*)0x02AB0310),
	((NJS_MATERIAL*)0x02AB0324),
	((NJS_MATERIAL*)0x02AB0338),
	((NJS_MATERIAL*)0x02AB034C),
	((NJS_MATERIAL*)0x02AAF590),
	((NJS_MATERIAL*)0x02AAF5A4),
	((NJS_MATERIAL*)0x02AAF5B8),
	((NJS_MATERIAL*)0x02AAF5CC),
};

NJS_MATERIAL* LevelSpecularADV00[] = {
	//Burger shop door
	((NJS_MATERIAL*)0x02AB1068),
	((NJS_MATERIAL*)0x02AB107C),
	//Casino stuff
	((NJS_MATERIAL*)0x02B02B18),
	((NJS_MATERIAL*)0x02B02B2C),
	((NJS_MATERIAL*)0x02B02B40),
	((NJS_MATERIAL*)0x02B03358),
	((NJS_MATERIAL*)0x02B0336C),
	((NJS_MATERIAL*)0x02B03380),
	((NJS_MATERIAL*)0x02B03394),
	((NJS_MATERIAL*)0x02B033A8),
	((NJS_MATERIAL*)0x02B00C48),
	((NJS_MATERIAL*)0x02B009B8),
	((NJS_MATERIAL*)0x02B009CC),
	((NJS_MATERIAL*)0x02B009E0),
	((NJS_MATERIAL*)0x02B00728),
	((NJS_MATERIAL*)0x02B0073C),
	((NJS_MATERIAL*)0x02B00750),
	((NJS_MATERIAL*)0x02B00498),
	((NJS_MATERIAL*)0x02B004AC),
	((NJS_MATERIAL*)0x02B004C0),
	((NJS_MATERIAL*)0x02B00208),
	((NJS_MATERIAL*)0x02B0021C),
	((NJS_MATERIAL*)0x02B00230),
	((NJS_MATERIAL*)0x02AFFF78),
	((NJS_MATERIAL*)0x02AFFF8C),
	((NJS_MATERIAL*)0x02AFFFA0),
	((NJS_MATERIAL*)0x02AFFCE8),
	((NJS_MATERIAL*)0x02AFFCFC),
	((NJS_MATERIAL*)0x02AFFD10),
	((NJS_MATERIAL*)0x02AFFA58),
	((NJS_MATERIAL*)0x02AFFA6C),
	((NJS_MATERIAL*)0x02AFFA80),
	((NJS_MATERIAL*)0x02AFF7C8),
	((NJS_MATERIAL*)0x02AFF7DC),
	((NJS_MATERIAL*)0x02AFF7F0),
	((NJS_MATERIAL*)0x02AFF538),
	((NJS_MATERIAL*)0x02AFF54C),
	((NJS_MATERIAL*)0x02AFF560),
	((NJS_MATERIAL*)0x02AFF2A8),
	((NJS_MATERIAL*)0x02AFF2BC),
	((NJS_MATERIAL*)0x02AFF2D0),
};

void FixPoliceCar(NJS_ACTION *a1, float a2, int a3)
{
	sub_405450(a1, a2, a3);
	if (a1->object == ((NJS_OBJECT*)0x2AF4FC0))
	{
		sub_405450(&PoliceCarAction_Rot, a2, a3);
	}
}

void RenderPoliceCarBarricade(NJS_OBJECT *obj, float scale)
{
	ProcessModelNode_AB_Wrapper(obj, scale);
	ProcessModelNode(&objectADV00_0019F390_2, (QueuedModelFlagsB)1, scale);
}

void RenderOfficeDoor(NJS_MODEL_SADX *a1, float scale)
{
	DrawQueueDepthBias = -2000.0f;
	DrawModel_Queue(a1, QueuedModelFlagsB_EnableZWrite);
}

void RenderOfficeDoor_Child(NJS_MODEL_SADX *a1, float scale)
{
	DrawQueueDepthBias = -3000.0f;
	DrawModel_Queue(a1, QueuedModelFlagsB_EnableZWrite);
}

void RenderPoolChair(NJS_MODEL_SADX *a1, int a2, float a3)
{
	sub_409E70(&attach_00182AB0, a2, a3);
	DrawQueueDepthBias = 1000.0f;
	ProcessModelNode(&object_00182AD8_2, QueuedModelFlagsB_EnableZWrite, 1.0f);
	DrawQueueDepthBias = 1100.0f;
	ProcessModelNode(&object_00182AD8_3, QueuedModelFlagsB_EnableZWrite, 1.0f);
	DrawQueueDepthBias = 1200.0f;
	ProcessModelNode(&object_00182AD8_4, QueuedModelFlagsB_EnableZWrite, 1.0f);
	DrawQueueDepthBias = 0.0f;
}

void ParseSSColFlags()
{
	int colflags;
	LandTable *landtable;
	//Sewers
	landtable = ___LANDTABLESS[2];
	if (SADXWater_StationSquare)
	{
		for (unsigned int j = 0; j < landtable->COLCount; j++)
		{
			colflags = landtable->Col[j].Flags;
			if ((colflags & ColFlags_Visible) && (colflags & ColFlags_Water)) landtable->Col[j].Model->basicdxmodel->mats[0].diffuse.argb.a = 0xD2; //Make the water less transparent
		}
	}
	//Main area
	landtable = ___LANDTABLESS[3];
	for (unsigned int j = 0; j < landtable->COLCount; j++)
	{
		colflags = landtable->Col[j].Flags;
		if (!SADXWater_StationSquare)
		{
			if (colflags == 0x8000000) SS03SeaModel = landtable->Col[j].Model;
		}
		else
		{
			if (colflags == 0) landtable->Col[j].Flags = 0x80000000; //Show SADX sea bottom
			if ((colflags & ColFlags_Visible) && (colflags & ColFlags_Water)) landtable->Col[j].Flags = 0x00000002; //Hide sewers water

		}
	}
	//Hotel area
	landtable = ___LANDTABLESS[4];
	for (unsigned int j = 0; j < landtable->COLCount; j++)
	{
		colflags = landtable->Col[j].Flags;
		if (!SADXWater_StationSquare)
		{
			if (colflags & 0x8000000) SS04SeaModel = landtable->Col[j].Model;
		}
		else
		{
			if (colflags == 0) landtable->Col[j].Flags = 0x80000000; //Show SADX sea bottom
			if ((colflags & ColFlags_Visible) && (colflags & ColFlags_Water)) landtable->Col[j].Flags &= ~ColFlags_Visible; //Hide SA1 pool water
		}
	}
}

void AddWhiteDiffuseMaterial_SS_Night(NJS_MATERIAL *material)
{
	for (int q = 0; q < LengthOfArray(WhiteDiffuseADV00_Night); ++q)
	{
		if (WhiteDiffuseADV00_Night[q] == material) return;
		else if (WhiteDiffuseADV00_Night[q] == nullptr)
		{
			WhiteDiffuseADV00_Night[q] = material;
			return;
		}
	}
}

void AddWhiteDiffuseMaterial_SS(NJS_MATERIAL *material)
{
	for (int q = 0; q < LengthOfArray(WhiteDiffuseADV00_External); ++q)
	{
		if (WhiteDiffuseADV00_External[q] == material) return;
		else if (WhiteDiffuseADV00_External[q] == nullptr)
		{
			WhiteDiffuseADV00_External[q] = material;
			return;
		}
	}
}

void ParseSSMaterials()
{
	Uint32 materialflags;
	NJS_MATERIAL *material;
	LandTable *landtable;
	//Casino
	landtable = ___LANDTABLESS[1];
	for (unsigned int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			//White diffuse night
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			if (materialflags & NJD_CUSTOMFLAG_WHITE)
			{
				material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
				AddWhiteDiffuseMaterial_SS(material);
			}
		}
	}
	//Sewers
	landtable = ___LANDTABLESS[2];
	for (unsigned int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			//White diffuse night
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			if (materialflags & NJD_CUSTOMFLAG_WHITE)
			{
				material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
				AddWhiteDiffuseMaterial_SS(material);
			}
			//Texanim 1
			if (materialflags & NJD_CUSTOMFLAG_TEXANIM1)
			{
				material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
				AddTextureAnimation(2, material, false, 4, 46, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
	}
	landtable = ___LANDTABLESS[3];
	for (unsigned int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			//White diffuse night
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			if ((materialflags & NJD_CUSTOMFLAG_NIGHT) && (materialflags & NJD_CUSTOMFLAG_WHITE))
			{
				material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
				AddWhiteDiffuseMaterial_SS_Night(material);
			}
			//Texanim 1
			if ((materialflags & NJD_CUSTOMFLAG_TEXANIM1) && !(materialflags & NJD_CUSTOMFLAG_TEXANIM2))
			{
				material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
				AddTextureAnimation(3, material, true, 4, 183, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, -1);
			}
			//Texanim 2
			if ((materialflags & NJD_CUSTOMFLAG_TEXANIM2) && !(materialflags & NJD_CUSTOMFLAG_TEXANIM1))
			{
				material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
				AddTextureAnimation(3, material, true, 4, 29, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, -1);
			}
			//Texanim 3
			if ((materialflags & NJD_CUSTOMFLAG_TEXANIM1) && (materialflags & NJD_CUSTOMFLAG_TEXANIM2))
			{
				material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
				AddTextureAnimation(3, material, true, 4, 142, 219, 220, 221, 222, 223, 224, 225, 226, 227, -1, -1, -1, -1, -1, -1);
			}
		}
	}
	landtable = ___LANDTABLESS[4];
	for (unsigned int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			//White diffuse night
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			if ((materialflags & NJD_CUSTOMFLAG_NIGHT) && (materialflags & NJD_CUSTOMFLAG_WHITE))
			{
				material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
				AddWhiteDiffuseMaterial_SS_Night(material);
			}
			//Texanim 1
			if ((materialflags & NJD_CUSTOMFLAG_TEXANIM1) && !(materialflags & NJD_CUSTOMFLAG_TEXANIM2))
			{
				material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
				AddTextureAnimation(4, material, false, 4, 101, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			//Texanim 2
			if ((materialflags & NJD_CUSTOMFLAG_TEXANIM2) && !(materialflags & NJD_CUSTOMFLAG_TEXANIM1))
			{
				material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
				AddTextureAnimation(4, material, false, 4, 87, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			//Texanim 3
			if ((materialflags & NJD_CUSTOMFLAG_TEXANIM1) && (materialflags & NJD_CUSTOMFLAG_TEXANIM2))
			{
				material = (NJS_MATERIAL*)&landtable->Col[j].Model->basicdxmodel->mats[k];
				AddTextureAnimation(4, material, true, 4, 65, 78, 79, 80, 81, 82, 83, 84, 85, 86, -1, 0, 0, 0, 0, 0);
			}
		}
	}
}

void SwitchLighting_TimeOfDay(int act)
{
	Sint8 TimeOfDay = GetTimeOfDay();
	Uint32 materialflags;
	int texid;
	LandTable *landtable;
	if (act == 0) landtable = ___LANDTABLESS[0];
	else if (act == 1) landtable = ___LANDTABLESS[1];
	else if (act == 2) landtable = ___LANDTABLESS[2];
	else if (act == 3) landtable = ___LANDTABLESS[3];
	else if (act == 4) landtable = ___LANDTABLESS[4];
	else landtable = ___LANDTABLESS[5];
	//Add or remove "ignore light"
	for (unsigned int j = 0; j < landtable->COLCount; j++)
	{
		for (int k = 0; k < landtable->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			materialflags = landtable->Col[j].Model->basicdxmodel->mats[k].attrflags;
			texid = landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId;
			if (materialflags & NJD_CUSTOMFLAG_NIGHT && !(materialflags & NJD_CUSTOMFLAG_WHITE))
			{
				if (TimeOfDay == 2)
				{
					if (!(materialflags & NJD_FLAG_IGNORE_LIGHT)) landtable->Col[j].Model->basicdxmodel->mats[k].attrflags |= NJD_FLAG_IGNORE_LIGHT;
				}
				else
				{
					if (materialflags & NJD_FLAG_IGNORE_LIGHT) landtable->Col[j].Model->basicdxmodel->mats[k].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
				}
			}
			//Day textures
			if (TimeOfDay == 0)
			{
				if (act == 0)
				{
					if (texid == 207 || texid == 206) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 124;
					if (texid == 209 || texid == 208) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 145;
					if (texid == 211 || texid == 210) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 69;
					if (texid == 213 || texid == 212) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 184;
					if (texid == 215 || texid == 214) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 36;
					if (texid == 217 || texid == 216) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 39;
					if (texid == 219 || texid == 218) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 185;
				}
				if (act == 1)
				{
					if (texid == 265 || texid == 264) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 240;
				}
				if (act == 3)
				{
					if ((landtable->Col[j].Model->pos[1] == 45) && (texid == 259 || texid == 258)) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 52;
					if (texid == 258 || texid == 259) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 60;
					if (texid == 262 || texid == 263) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 89;
					if (texid == 260 || texid == 261) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 94;
					if (texid == 256 || texid == 257) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 165;
				}
				if (act == 4)
				{
					if (texid == 116 || texid == 118) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 69;
					if (texid == 115 || texid == 117) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 70;
				}
			}
			//Evening textures
			else if (TimeOfDay == 1)
			{
				if (act == 0)
				{
					if (texid == 124 || texid == 207) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 206;
					if (texid == 145 || texid == 209) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 208;
					if (texid == 69 || texid == 211) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 210;
					if (texid == 184 || texid == 213) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 212;
					if (texid == 36 || texid == 215) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 214;
					if (texid == 39 || texid == 217) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 216;
					if (texid == 185 || texid == 219) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 218;
				}
				if (act == 1)
				{
					if (texid == 240 || texid == 265) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 264;
				}
				if (act == 3)
				{
					if ((landtable->Col[j].Model->pos[1] == 45) && (texid == 52 || texid == 259)) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 258;
					if (texid == 60 || texid == 259) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 258;
					if (texid == 89 || texid == 263) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 262;
					if (texid == 94 || texid == 261) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 260;
					if (texid == 165 || texid == 257) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 256;
				}
				if (act == 4)
				{
					if (texid == 69 || texid == 118) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 116;
					if (texid == 70 || texid == 117) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 115;
				}
			}
			//Night textures
			else
			{
				if (act == 0)
				{
					if (texid == 124 || texid == 206) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 207;
					if (texid == 145 || texid == 208) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 209;
					if (texid == 69 || texid == 210) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 211;
					if (texid == 184 || texid == 212) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 213;
					if (texid == 36 || texid == 214) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 215;
					if (texid == 39 || texid == 216) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 217;
					if (texid == 185 || texid == 218) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 219;
				}
				if (act == 1)
				{
					if (texid == 240 || texid == 264) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 265;
				}
				if (act == 3)
				{
					if ((landtable->Col[j].Model->pos[1] == 45) && (texid == 52 || texid == 258)) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 259;
					if (texid == 60 || texid == 258) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 259;
					if (texid == 89 || texid == 262) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 263;
					if (texid == 94 || texid == 260) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 261;
					if (texid == 165 || texid == 256) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 257;
				}
				if (act == 4)
				{
					if (texid == 69 || texid == 116) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 118;
					if (texid == 70 || texid == 115) landtable->Col[j].Model->basicdxmodel->mats[k].attr_texId = 117;
				}
			}
		}
	}
}

void UnloadLevelFiles_ADV00()
{
	if (DLLLoaded_Lantern) 
	{
		material_unregister_ptr(WhiteDiffuseADV00_Night, LengthOfArray(WhiteDiffuseADV00_Night), &ForceWhiteDiffuse3_Night);
		material_unregister_ptr(WhiteDiffuseADV00_External, LengthOfArray(WhiteDiffuseADV00_External), &ForceWhiteDiffuse);
		for (int k = 0; k < LengthOfArray(WhiteDiffuseADV00_Night); ++k)
		{
			WhiteDiffuseADV00_Night[k] = nullptr;
		}
		for (int l = 0; l < LengthOfArray(WhiteDiffuseADV00_External); ++l)
		{
			WhiteDiffuseADV00_External[l] = nullptr;
		}
	}
	SS03SeaModel = nullptr;
	SS04SeaModel = nullptr;
	delete ADV00_0_Info;
	delete ADV00_1_Info;
	delete ADV00_2_Info;
	delete ADV00_3_Info;
	delete ADV00_4_Info;
	delete ADV00_5_Info;
	ADV00_0_Info = nullptr;
	ADV00_1_Info = nullptr;
	ADV00_2_Info = nullptr;
	ADV00_3_Info = nullptr;
	ADV00_4_Info = nullptr;
	ADV00_5_Info = nullptr;
	PreviousTimeOfDay = -1;
}

void LoadLevelFiles_ADV00()
{
	CheckAndUnloadLevelFiles();
	ADV00_0_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV00\\0.sa1lvl"));
	ADV00_1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV00\\1.sa1lvl"));
	ADV00_2_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV00\\2.sa1lvl"));
	ADV00_3_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV00\\3.sa1lvl"));
	ADV00_4_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV00\\4.sa1lvl"));
	ADV00_5_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\ADV00\\5.sa1lvl"));
	LandTable *ADV00_0 = ADV00_0_Info->getlandtable(); // &landtable_000157F4; // 
	LandTable *ADV00_1 = ADV00_1_Info->getlandtable(); // &landtable_000738F4; // 
	LandTable *ADV00_2 = ADV00_2_Info->getlandtable(); // &landtable_000C21F0; // 
	LandTable *ADV00_3 = ADV00_3_Info->getlandtable(); // &landtable_000DCEBC; // 
	LandTable *ADV00_4 = ADV00_4_Info->getlandtable(); // &landtable_00135A90; // 
	LandTable *ADV00_5 = ADV00_5_Info->getlandtable(); // &landtable_001573CC; // 
	RemoveMaterialColors_Landtable(ADV00_0);
	RemoveMaterialColors_Landtable(ADV00_1);
	RemoveMaterialColors_Landtable(ADV00_2);
	RemoveMaterialColors_Landtable(ADV00_3);
	RemoveMaterialColors_Landtable(ADV00_4);
	RemoveMaterialColors_Landtable(ADV00_5);
	ADV00_0->TexList = &texlist_advss00;
	ADV00_1->TexList = &texlist_advss01;
	ADV00_2->TexList = &texlist_advss02;
	ADV00_3->TexList = &texlist_advss03;
	ADV00_4->TexList = &texlist_advss04;
	ADV00_5->TexList = &texlist_advss05;
	LandTableArray[88] = ADV00_0;
	LandTableArray[89] = ADV00_1;
	LandTableArray[90] = ADV00_2;
	LandTableArray[91] = ADV00_3;
	LandTableArray[92] = ADV00_4;
	LandTableArray[93] = ADV00_5;
	LandTableArray[96] = ADV00_0;
	LandTableArray[97] = ADV00_1;
	LandTableArray[98] = ADV00_2;
	LandTableArray[99] = ADV00_3;
	LandTableArray[100] = ADV00_4;
	LandTableArray[101] = ADV00_5;
	LandTableArray[104] = ADV00_0;
	LandTableArray[105] = ADV00_1;
	LandTableArray[106] = ADV00_2;
	LandTableArray[107] = ADV00_3;
	LandTableArray[108] = ADV00_4;
	LandTableArray[109] = ADV00_5;
	___LANDTABLESS[0] = ADV00_0;
	___LANDTABLESS[1] = ADV00_1;
	___LANDTABLESS[2] = ADV00_2;
	___LANDTABLESS[3] = ADV00_3;
	___LANDTABLESS[4] = ADV00_4;
	___LANDTABLESS[5] = ADV00_5;
	ParseSSColFlags();
	ParseSSMaterials();
	PreviousTimeOfDay = -1;
	if (!SADXWater_StationSquare) WriteJump((void*)0x631140, RenderStationSquareOcean); //Render SS ocean separately
	if (DLLLoaded_Lantern)
	{
		material_register_ptr(WhiteDiffuseADV00_Night, LengthOfArray(WhiteDiffuseADV00_Night), &ForceWhiteDiffuse3_Night);
		material_register_ptr(WhiteDiffuseADV00_External, LengthOfArray(WhiteDiffuseADV00_External), &ForceWhiteDiffuse);
	}
}

void LSCutsceneRotationFix()
{
	DisableControl();
	EntityData1Ptrs[0]->Rotation.x = 0;
	EntityData1Ptrs[0]->Rotation.z = 0;
	EntityData1Ptrs[0]->Rotation.y = 49072;
}

void ADV00_Init()
{
	ReplaceBIN_DC("SETSS00A");
	ReplaceBIN_DC("SETSS00B");
	ReplaceBIN_DC("SETSS00E");
	ReplaceBIN_DC("SETSS00K");
	ReplaceBIN_DC("SETSS00L");
	ReplaceBIN_DC("SETSS00M");
	ReplaceBIN_DC("SETSS00S");
	ReplaceBIN_DC("SETSS01A");
	ReplaceBIN_DC("SETSS01B");
	ReplaceBIN_DC("SETSS01E");
	ReplaceBIN_DC("SETSS01K");
	ReplaceBIN_DC("SETSS01L");
	ReplaceBIN_DC("SETSS01M");
	ReplaceBIN_DC("SETSS01S");
	ReplaceBIN_DC("SETSS02S");
	ReplaceBIN_DC("SETSS02B");
	ReplaceBIN_DC("SETSS03A");
	ReplaceBIN_DC("SETSS03B");
	ReplaceBIN_DC("SETSS03E");
	ReplaceBIN_DC("SETSS03K");
	ReplaceBIN_DC("SETSS03L");
	ReplaceBIN_DC("SETSS03M");
	ReplaceBIN_DC("SETSS03S");
	ReplaceBIN_DC("SETSS04A");
	ReplaceBIN_DC("SETSS04B");
	ReplaceBIN_DC("SETSS04E");
	ReplaceBIN_DC("SETSS04K");
	ReplaceBIN_DC("SETSS04L");
	ReplaceBIN_DC("SETSS04M");
	ReplaceBIN_DC("SETSS04S");
	ReplaceBIN_DC("SETSS05S");
	switch (EnableSETFixes)
	{
		case SETFixes_Normal:
			AddSETFix("SETSS00A");
			AddSETFix("SETSS00B");
			AddSETFix("SETSS00E");
			AddSETFix("SETSS00K");
			AddSETFix("SETSS00L");
			AddSETFix("SETSS00M");
			AddSETFix("SETSS00S");
			AddSETFix("SETSS01A");
			AddSETFix("SETSS01B");
			AddSETFix("SETSS01E");
			AddSETFix("SETSS01K");
			AddSETFix("SETSS01L");
			AddSETFix("SETSS01M");
			AddSETFix("SETSS01S");
			AddSETFix("SETSS02S");
			AddSETFix("SETSS03A");
			AddSETFix("SETSS03B");
			AddSETFix("SETSS03E");
			AddSETFix("SETSS03K");
			AddSETFix("SETSS03L");
			AddSETFix("SETSS03M");
			AddSETFix("SETSS03S");
			AddSETFix("SETSS04A");
			AddSETFix("SETSS04B");
			AddSETFix("SETSS04E");
			AddSETFix("SETSS04K");
			AddSETFix("SETSS04L");
			AddSETFix("SETSS04M");
			AddSETFix("SETSS04S");
			AddSETFix("SETSS05S");
			break;
		case SETFixes_Extra:
			AddSETFix_Extra("SETSS00A");
			AddSETFix_Extra("SETSS00B");
			AddSETFix_Extra("SETSS00E");
			AddSETFix_Extra("SETSS00K");
			AddSETFix_Extra("SETSS00L");
			AddSETFix_Extra("SETSS00M");
			AddSETFix_Extra("SETSS00S");
			AddSETFix_Extra("SETSS01A");
			AddSETFix_Extra("SETSS01B");
			AddSETFix_Extra("SETSS01E");
			AddSETFix_Extra("SETSS01K");
			AddSETFix_Extra("SETSS01L");
			AddSETFix_Extra("SETSS01M");
			AddSETFix_Extra("SETSS01S");
			AddSETFix_Extra("SETSS02S");
			AddSETFix_Extra("SETSS03A");
			AddSETFix_Extra("SETSS03B");
			AddSETFix_Extra("SETSS03E");
			AddSETFix_Extra("SETSS03K");
			AddSETFix_Extra("SETSS03L");
			AddSETFix_Extra("SETSS03M");
			AddSETFix_Extra("SETSS03S");
			AddSETFix_Extra("SETSS04A");
			AddSETFix_Extra("SETSS04B");
			AddSETFix_Extra("SETSS04E");
			AddSETFix_Extra("SETSS04K");
			AddSETFix_Extra("SETSS04L");
			AddSETFix_Extra("SETSS04M");
			AddSETFix_Extra("SETSS04S");
			AddSETFix_Extra("SETSS05S");
			break;
		default:
			break;
	}
	if (!DLLLoaded_DLCs)
	{
		ReplaceBIN_DC("CAMSS00S");
		ReplaceBIN_DC("CAMSS01S");
		ReplaceBIN_DC("CAMSS02S");
		ReplaceBIN_DC("CAMSS03S");
		ReplaceBIN_DC("CAMSS04S");
		ReplaceBIN_DC("CAMSS05S");
	}
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
	___ADV00_TEXLISTS[0] = &texlist_advss00;
	___ADV00_TEXLISTS[1] = &texlist_advss01;
	___ADV00_TEXLISTS[2] = &texlist_advss02;
	___ADV00_TEXLISTS[3] = &texlist_advss03;
	___ADV00_TEXLISTS[4] = &texlist_advss04;
	___ADV00_TEXLISTS[5] = &texlist_advss05;
	ResizeTextureList((NJS_TEXLIST*)0x2AEE920, 22); //SSCAR 
	ResizeTextureList((NJS_TEXLIST*)0x2AD9F58, 31); //SS_TRAIN
	ResizeTextureList(&OBJ_SS_TEXLIST, 177);
	WriteData<1>((char*)0x02BBE9EC, 0x0B); //Texture ID for extra car type
	WriteCall((void*)0x00636DE9, RenderOfficeDoor);
	WriteCall((void*)0x00636E99, RenderOfficeDoor);
	WriteCall((void*)0x00636F0B, RenderOfficeDoor);
	WriteCall((void*)0x00636E1A, RenderOfficeDoor_Child);
	WriteCall((void*)0x00636E52, RenderOfficeDoor_Child);
	WriteCall((void*)0x00636EC0, RenderOfficeDoor_Child);
	WriteCall((void*)0x00636F32, RenderOfficeDoor_Child);
	WriteCall((void*)0x00638B2E, RenderPoliceCarBarricade);
	WriteCall((void*)0x00638B50, RenderPoliceCarBarricade);
	WriteCall((void*)0x00632773, FixPoliceCar);
	WriteData<1>((char*)0x0063A906, 0x01u); //Street light blending
	WriteData((float*)0x00634EB9, 0.601f); //Prevent Z fighting with SS NPC shadow when overlapping transparent stuff
	//Fix camera in Light Speed Shoes cutscene
	WriteData((float*)0x00652F74, 800.0f); //X1
	WriteData((float*)0x00652F79, -92.6f); //Y1
	WriteData((float*)0x006532BB, 509.9f); //X2
	WriteData((float*)0x006532B6, -89.4f); //Y2
	WriteData((float*)0x006532B1, 812.3f); //Z2
	WriteCall((void*)0x652F4F, LSCutsceneRotationFix); //Fix Sonic's rotation after getting the Light Speed Shoes
	//Fix NPC materials
	for (unsigned int i = 0; i < LengthOfArray(NPCMaterials); i++)
	{
		RemoveMaterialColors(NPCMaterials[i]);
	}
	WriteData<5>((void*)0x630ADA, 0x90); //Hotel door fix 1
	WriteData<5>((void*)0x630AE6, 0x90); //Hotel door fix 2
	WriteData<5>((void*)0x630B03, 0x90); //Hotel door fix 3
	WriteJump((void*)0x0062EA30, CheckIfCameraIsInHotel_Lol); //Disable hotel lighting check
	//Material stuff
	((NJS_OBJECT*)0x02AB757C)->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_USE_ALPHA; //Speed Highway elevator door
	((NJS_OBJECT*)0x02AB6E4C)->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_USE_ALPHA; //Speed Highway elevator door
	//Objects
	*(NJS_OBJECT*)0x2AB2CCC = objectADV00_001689C4; //Shop 2 door
	((NJS_ACTION*)0x2AB2D9C)->object = &objectADV00_001689C4; //Shop 2 door
	WriteCall((void*)0x0063A6A4, RenderPoolChair); //Pool chair
	*(NJS_OBJECT*)0x02DBD6D0 = objectADV00_00011208; //Event helicopter
	*(NJS_OBJECT*)0x02AD4EA4 = objectADV00_00186E88; //Hidden door 1
	*(NJS_OBJECT*)0x02AD4CD4 = objectADV00_00186CC4; //Hidden door 2
	*(NJS_OBJECT*)0x02AEE7B0 = objectADV00_0019AF04; //Boat
	*(NJS_OBJECT*)0x02AAB0E4 = object_026AB0E4; //Hotel door 1
	*(NJS_OBJECT*)0x02AAE0BC = object_026AB0E4; //Hotel door 2
	*(NJS_MODEL_SADX*)0x02AC9EE4 = attachADV00_0017DDC0; //Lamp pole
	*(NJS_MODEL_SADX*)0x02AC9840 = attachADV00_0017D7A8; //Lamp pole
	*(NJS_OBJECT*)0x02ABDF0C = objectADV00_00172BD4; //Box in the sewers
	*(NJS_OBJECT*)0x02AE8674 = objectADV00_00195DC0; //SS train
	*(NJS_OBJECT*)0x02AF4FC0 = objectADV00_0019F390; //SS Police
	*(NJS_OBJECT*)0x02AF1974 = objectADV00_0019CBD8; //SS Red Car
	*(NJS_OBJECT*)0x02AF8400 = objectADV00_001A17C4; //SS Blue Car
	*(NJS_OBJECT*)0x02AFBA64 = objectADV00_001A4268; //SS Taxi
	*(NJS_OBJECT*)0x02AD362C = objectADV00_00185A20; //SS Twinkle Park Ball
	*(NJS_OBJECT*)0x02AB6900 = objectADV00_0016C3FC; //SS Twinkle Park Elevator
	*(NJS_OBJECT*)0x02AD14C8 = objectADV00_00183B8C; //Gamma's target (O M Saku)
	*(NJS_MODEL_SADX*)0x02AC95BC = attachADV00_0017D540; //Fire hydrant
	*(NJS_OBJECT*)0x02AD484C = objectADV00_0018684C; //Ice Key 1
	if (DLLLoaded_Lantern)
	{
		material_register_ptr(CharacterStuff, LengthOfArray(CharacterStuff), &ForceDiffuse2Specular2);
		material_register_ptr(LevelSpecularADV00, LengthOfArray(LevelSpecularADV00), &ForceDiffuse0Specular0);
		material_register_ptr(ObjectSpecularADV00, LengthOfArray(ObjectSpecularADV00), &ForceDiffuse0Specular1);
	}
	//Fog data
	for (unsigned int i = 0; i < 3; i++)
	{
		StationSquare1Fog[i].Toggle = 1;
		StationSquare2Fog[i].Toggle = 1;
		StationSquare3Fog[i].Toggle = 1;
		StationSquare4Fog[i].Toggle = 1;
		StationSquare5Fog[i].Toggle = 1;
		StationSquare6Fog[i].Toggle = 1;
		StationSquare1Fog[i].Distance = -12000.0f;
		StationSquare2Fog[i].Distance = -12000.0f;
		StationSquare3Fog[i].Distance = -12000.0f;
		StationSquare4Fog[i].Distance = -12000.0f;
		StationSquare5Fog[i].Distance = -12000.0f;
		StationSquare6Fog[i].Distance = -12000.0f;
		StationSquare1Fog[i].Layer = -12000.0f;
		StationSquare2Fog[i].Layer = -12000.0f;
		StationSquare3Fog[i].Layer = -12000.0f;
		StationSquare4Fog[i].Layer = -12000.0f;
		StationSquare5Fog[i].Layer = -12000.0f;
		StationSquare6Fog[i].Layer = -12000.0f;
		StationSquare6DrawDist[i].Maximum = -600.0f;
	}
}

void ADV00_OnFrame()
{
	//Switch textures/lighting depending on time of day
	if (ADV00_0_Info && ADV00_1_Info && ADV00_3_Info && ADV00_4_Info && PreviousTimeOfDay != GetTimeOfDay())
	{
		SwitchLighting_TimeOfDay(0);
		SwitchLighting_TimeOfDay(1);
		SwitchLighting_TimeOfDay(3);
		SwitchLighting_TimeOfDay(4);
		PreviousTimeOfDay = GetTimeOfDay();
	}
}