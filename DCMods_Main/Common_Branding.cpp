#include "stdafx.h"

//TODO: Find a better solution to the file select/options issue

struct FourFloats
{
	float x;
	float y;
	float scale_x;
	float scale_y;
};

struct DemoData
{
	__int16 level;
	__int16 act;
	__int16 character;
	__int16 cutscene;
};

DemoData SA1DemoArray[] = {
	{ 29, 2, 0, 27 },
	{ 4, 0, 0, -1 },
	{ 33, 0, 0, 13 },
	{ 8, 2, 2, -1 },
	{ 33, 0, 0, 40 },
	{ 5, 2, 3, -1 },
	{ 26, 1, 0, 18 },
	{ 12, 0, 5, -1 },
	{ 32, 1, 6, 183 },
	{ 2, 0, 6, -1 },
	{ 1, 2, 7, 212 },
	{ 1, 2, 7, -1 },
};

//Crap that I'll probably delete later
NJS_TEXLIST PauseSelectionTexlist;
FourFloats PauseSelectionBoxFloats = { 0, 0, 0, 0 };
NJS_POINT2COL Pause_Point2Col;
NJS_POINT2 Pause_Points[4];
NJS_COLOR Pause_Colors[4];

/*
NJS_POINT2COL PauseSelect_Point2Col;
NJS_POINT2 PauseSelect_Points[4];
NJS_POINT3COL PauseSelect_Point3Col;
NJS_POINT3 PauseSelect_Points3[4];
NJS_COLOR PauseSelect_Colors[] = { {0xFFFF00FF}, {0xFFE2D80C}, {0xFFD18E07}, {0xFFE2D80C} };
NJS_TEXNAME PauseGradientTexname;
NJS_TEXLIST PauseGradientTexList;
NJS_TEXNAME SelectionGradientTexname;
NJS_TEXLIST SelectionGradientTexList;

NJS_TEXINFO PauseGradientTexinfo = { NULL, 0 };
Uint16 PauseBoxGradientData[] = { 952, 920, 952, 920, 855, 822, 855, 822, 952, 920, 952, 920, 855, 822, 855, 822, 757, 692, 757, 692, 627, 562, 627, 562, 757, 692, 757, 692, 627, 562, 627, 562, 952, 920, 952, 920, 855, 822, 855, 822, 952, 920, 952, 920, 855, 822, 855, 822, 757, 692, 757, 692, 627, 562, 627, 562, 757, 692, 757, 692, 627, 562, 627, 562, 465, 400, 465, 400, 334, 269, 334, 269, 465, 400, 465, 400, 334, 269, 334, 269, 204, 139, 204, 139, 74, 42, 74, 42, 204, 139, 204, 139, 74, 42, 74, 42, 465, 400, 465, 400, 334, 269, 334, 269, 465, 400, 465, 400, 334, 269, 334, 269, 204, 139, 204, 139, 74, 42, 74, 42, 204, 139, 204, 139, 74, 42, 74, 42, 952, 920, 952, 920, 855, 822, 855, 822, 952, 920, 952, 920, 855, 822, 855, 822, 757, 692, 757, 692, 627, 562, 627, 562, 757, 692, 757, 692, 627, 562, 627, 562, 952, 920, 952, 920, 855, 822, 855, 822, 952, 920, 952, 920, 855, 822, 855, 822, 757, 692, 757, 692, 627, 562, 627, 562, 757, 692, 757, 692, 627, 562, 627, 562, 465, 400, 465, 400, 334, 269, 334, 269, 465, 400, 465, 400, 334, 269, 334, 269, 204, 139, 204, 139, 74, 42, 74, 42, 204, 139, 204, 139, 74, 42, 74, 42, 465, 400, 465, 400, 334, 269, 334, 269, 465, 400, 465, 400, 334, 269, 334, 269, 204, 139, 204, 139, 74, 42, 74, 42, 204, 139, 204, 139, 74, 42, 74, 42 };
NJS_TEXINFO SelectionGradientTexinfo = { NULL, 0 };
Uint16 SelectionBoxGradientData[] = { 60800, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64912, 64896, 64912, 64912, 64912, 64912, 64912, 64912, 64912, 64896, 64896, 64896, 64896, 64896, 64896, 64896, 64912, 64896, 64896, 64912, 64896, 64896, 64912, 64912, 64896, 64896, 64896, 64896, 64896, 64912, 64912, 64912, 64912, 64912, 64896, 64912, 64896, 64912, 64896, 64912, 64912, 64896, 64896, 64912, 64912, 64896, 64912, 64896, 64912, 64912, 64912, 64912, 64896, 64896, 64896, 64896, 64912, 64896, 64912, 64912, 64896, 64896, 64896, 64912, 64912, 64912, 8191, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 64912, 64912, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 64912, 64912, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 64912, 64912, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 64912, 64912, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 64912, 64912, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 64928, 64928, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 64928, 64928, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 64928, 64928, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 64928, 64928, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 64928, 64928, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 64944, 64944, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 64944, 64944, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 64944, 64944, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 64944, 64944, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 64944, 64944, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 64960, 64960, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 64960, 64960, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 64960, 64960, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 64960, 64960, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 64960, 65216, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 65232, 65232, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 65232, 65232, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 65232, 65232, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 65232, 65232, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 65232, 65232, 8191, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 61136, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232, 65232 };
NJS_TEXANIM Whatever = { 16, 16, 0, 0, 0, 0, 255, 255, 0, 0 };
NJS_TEXANIM Whatever2 = { 64, 32, 0, 0, 0, 0, 255, 255, 0, 0 };

Sint32 __cdecl GeneratePauseGradient()
{
	njSetTextureInfo((NJS_TEXINFO *)&PauseGradientTexinfo, (Uint16 *)&PauseBoxGradientData, NJD_TEXFMT_RGB_565 | NJD_TEXFMT_TWIDDLED, 16, 16);
	njSetTextureNameEx(&PauseGradientTexname, &PauseGradientTexinfo, (void *)0xD0006D39, NJD_TEXATTR_GLOBALINDEX|NJD_TEXATTR_TYPE_MEMORY);
	PauseGradientTexList.textures = &PauseGradientTexname;
	PauseGradientTexList.nbTexture = 1;
	return njLoadTexture(&PauseGradientTexList);
}

Sint32 __cdecl GenerateSelectionGradient()
{
	njSetTextureInfo((NJS_TEXINFO *)&SelectionGradientTexinfo, (Uint16 *)&SelectionBoxGradientData, NJD_TEXFMT_ARGB_4444 | NJD_TEXFMT_RECTANGLE, 64, 32);
	njSetTextureNameEx(&SelectionGradientTexname, &SelectionGradientTexinfo, (void *)0xD0006D3B, NJD_TEXATTR_GLOBALINDEX|NJD_TEXATTR_TYPE_MEMORY);
	SelectionGradientTexList.textures = &SelectionGradientTexname;
	SelectionGradientTexList.nbTexture = 1;
	return njLoadTexture(&SelectionGradientTexList);
}
*/

NJS_TEXNAME textures_ava_dlg_e[10];
NJS_TEXNAME textures_ava_gtitle0_e[10];
NJS_TEXNAME textures_ava_title_back_e[8];
NJS_TEXNAME textures_ava_title_cmn[184];

struct TutorialScreenItem
{
	char TexID;
	char unknown;
	__int16 XOffset;
	__int16 YOffset;
};

struct TitleScreenData
{
	int f0;
	void *field_4;
	void *field_8;
	float field_C;
	char gap_10[4];
	int field_14;
	int field_18;
	char gap_1c[8];
	_DWORD dword24;
	_DWORD dword28;
	char f2C[4];
	_DWORD dword30;
	float float34;
	char byte38;
	char _padding[3];
	char field_3C[36];
};

FunctionPointer(ObjectMaster*, sub_510390, (int a1), 0x510390);
FunctionPointer(void, sub_505B40, (int a1), 0x505B40);
FunctionPointer(void, sub_432EA0, (), 0x432EA0);
FunctionPointer(int, CreateColorGradient, (int a1, int a2, float a3), 0x4319D0);
FunctionPointer(int, sub_433190, (int a1, int a2, int a3, float a4), 0x433190);
FunctionPointer(void, SetABCTextThingColor, (int a1, int a2, int a3, int a4), 0x420A70);
FunctionPointer(void, DrawModelCallback_QueueFourFloats, (void(__cdecl* function)(FourFloats*), FourFloats* data, float depth, QueuedModelFlagsB queueflags), 0x404840);
DataArray(int, dword_7ECA74, 0x7ECA74, 2);
DataArray(int, dword_7ECA44, 0x7ECA44, 2);
DataArray(char, byte_7ECA20, 0x7ECA20, 4);
DataPointer(CreditsList, MainCredits, 0x2BC2FD0);
DataPointer(ObjectMaster*, CurrentMenuObjectMaster_Maybe, 0x3C5E8D0);
DataPointer(byte, NumberOfSaves_Current, 0x03B290E0);
DataPointer(int, QuitFromPause_Selection, 0x3B22E78);
DataPointer(DemoData, FirstDemo, 0x913AE0);
DataArray(NJS_TEXANIM, PauseMenu_TEXANIMs, 0x009177B8, 15);
DataArray(PVMEntry*, GUIPVMLists, 0x10D7CB0, 5);
//GUI texture arrays
DataArray(PVMEntry, GUITextures_Japanese, 0x007EECF0, 30);
DataArray(PVMEntry, GUITextures_English, 0x007EEDE0, 30);
DataArray(PVMEntry, GUITextures_French, 0x007EEED0, 30);
DataArray(PVMEntry, GUITextures_Spanish, 0x007EEFC0, 30);
DataArray(PVMEntry, GUITextures_German, 0x007EF0B0, 30);
DataArray(int*, GUIPVMIndices, 0x10D7CC4, 14);

//Tutorial screen items
DataArray(TutorialScreenItem, TutorialScreenLayout_Sonic_Page1_E, 0x02BC3ACE, 6);
DataArray(TutorialScreenItem, TutorialScreenLayout_Sonic_Page1_J, 0x02BC3A8E, 5);
DataArray(TutorialScreenItem, TutorialScreenLayout_SharedTailsKnucklesPage1_E, 0x2BC3E90, 4);
DataArray(TutorialScreenItem, TutorialScreenLayout_SharedTailsKnucklesPage1_J, 0x2BC3E74, 3);
DataPointer(TutorialScreenItem, TutorialScreenLayout_Tails_Page1_E, 0x2BC3EB2);
DataPointer(TutorialScreenItem, TutorialScreenLayout_Tails_Page1_J, 0x2BC3EAA);
DataPointer(TutorialScreenItem, TutorialScreenLayout_Knuckles_Page1_E, 0x2BC425E);
DataPointer(TutorialScreenItem, TutorialScreenLayout_Knuckles_Page1_J, 0x2BC4256);
DataArray(TutorialScreenItem, TutorialScreenLayout_AmyGamma_Page1_E, 0x2BC46E6, 4);
DataArray(TutorialScreenItem, TutorialScreenLayout_AmyGamma_Page1_J, 0x2BC46D2, 3);
DataArray(TutorialScreenItem, TutorialScreenLayout_Amy_Page1_E, 0x2BC4712, 2);
DataArray(TutorialScreenItem, TutorialScreenLayout_Amy_Page1_J, 0x2BC4702, 2);
DataArray(TutorialScreenItem, TutorialScreenLayout_BigPage1_E, 0x2BC4E8A, 4);
DataArray(TutorialScreenItem, TutorialScreenLayout_BigPage1Part2_E, 0x2BC4EB6, 2);
DataArray(TutorialScreenItem, TutorialScreenLayout_BigPage1Part2_J, 0x2BC4EA6, 2);
DataArray(TutorialScreenItem, TutorialScreenLayout_BigPage5_E, 0x2BC4F46, 6);
DataArray(TutorialScreenItem, TutorialScreenLayout_Gamma_Page1_E, 0x2BC4A7E, 2);
DataArray(TutorialScreenItem, TutorialScreenLayout_Gamma_Page1_J, 0x2BC4A6E, 2);

//Variables
NJS_TEXANIM PauseBarTexanim = { 16, 16, 0, 0, 0, 0, 0, 0, 8, 32 };

//Resolution scaling
static float ResolutionScaleX = 1.0f;
static float ResolutionScaleY = 1.0f;
static float ResolutionDeltaX = 0.0f;
static float ResolutionDeltaY = 0.0f;
static float HorizontalResolution_float = 640.0f;
static float VerticalResolution_float = 640.0f;
static float f480_Fixed = 0;
static float f640_Fixed = 0;

//PVM IDs for menus
int TitleScreenIndices[] = { 17, 18, 0, 1, 10, 13, 7, 30 }; //0, 1, 10, 13, 7 from the file select screen
int MainMenuIndices[] = { 19, 20, 1, 17, 10, 30 }; //17 is needed to draw the title. Removed: 18 is from the title screen, 0, 13, 7 from the file select screen
int FileSelectIndices[] = { 0, 1, 10, 4, 5, 6, 22, 3, 15, 13, 7, 8, 11, 24, 30 }; //17 and 18 from the title screen

NJS_COLOR TitleBackOverlayColor;
static NJS_COLOR TitleBGTransparency;
static NJS_COLOR SonicTeamTransparency;
static int SonicTeamAlpha;
static NJS_COLOR BlackFadeout;
static int titleframe = 0;
static int titledrawn = -1;
static int logoframe = 0;
static int logodrawn = -1;
static int startframe = 0;
static int startdrawn = -1;
static int transitionmode = 0;
static int PreviousMenuIndex = 0;
static int CurrentMenuIndex = 0;
static bool whiteoverlaydrawn = false;
static bool MainMenuAccessed = false;
static bool EnableFileSelectScreenFade = false;
static bool TitleScreenFadedIntoBlack = false; 
static float LogoScaleX = 1.0f;
static float LogoScaleY = 1.0f;
static float LogoScaleXT = 1.0f;
static float LogoScaleYT = 1.0f;
static Uint32 FileSelectVtxColor = 0xFFFFFFFF;
static char NumberOfSaves = 0;

//Options
static float Options_ArrowScale = 0.0f;
static float Options_ArrowScaleAmount = 0.1f;

//Crap textures
static int PSInt = 0;
static float PSsX = 0;
static float PSsY = 0;
static float PSsZ = 0;
static int BSInt = 0;
static float BSsX = 0;
static float BSsY = 0;
static float BSsZ = 0;

//Ini stuff
static bool RemoveQuitPrompt = false;
static bool RemoveUnlockMessage = false;
static bool RemoveMarketRingCount = false;
static bool RemoveGameGearGames = false;
static bool RipplesOn = true;
static bool EnableTransition = true;
static bool DisableSA1TitleScreen = false;
static bool DrawOverlay = true;
static bool RemoveCream = true;
static bool HUDTweak = true;
bool DemosDone = false;
static int SA1LogoMode = 0;
static int RestoreDemos = 3;

//Tutorial stuff
float PadManuXOffset_F = 175.0f;
float PadManuXOffset_General = 220.0f;
float PadManuXOffset_J = 200.0f;
float PadManuYOffset = 136.0f;
float PadManuYOffset2 = 105.0f;
float PadManuYMultiplier = 1.0f;

//PVM accuracy stuff
float sphe_cursol_scale = 1.0f;
float wins_scaleXmultiplier = 3.96900012f;
float wins_scaleYmultiplier = 1.0f;

//HUD
static float HUDYOffset1 = 80.0f;
static float HUDYOffset2 = 0.0f;

//Quit prompt timer
static int QuitSoundTimer = -1;

CreditsEntry SA1Credits[] = {
	{ 1, 0, 0, 0, "SONIC ADVENTURE STAFF" },
{ 3, -1, 0, 0, " " },
{ 2, -1, 0, 0, "Executive producers" },
{ 3, -1, 0, 0, "Hayao Nakayama" },
{ 3, -1, 0, 0, "Shoichiro Irimajiri" },
{ 2, -1, 0, 0, "Project management" },
{ 3, -1, 0, 0, "Syuji Utsumi" },
{ 3, -1, 0, 0, "Youji Ishii" },
{ 0, 0, 0, 0, "" }, //MAIN
{ 2, -1, 0, 0, "Producer" },
{ 3, -1, 0, 0, "Yuji Naka" },
{ 2, -1, 0, 0, "Director" },
{ 3, -1, 0, 0, "Takashi Iizuka" },
{ 2, -1, 0, 0, "Art director" },
{ 3, -1, 0, 0, "Kazuyuki Hoshino" },
{ 2, -1, 0, 0, "Main programmer" },
{ 3, -1, 0, 0, "Tetsu Katano" },
{ 2, -1, 0, 0, "Sound director" },
{ 3, -1, 0, 0, "Jun Senoue" },
{ 3, -1, 0, 0, " " },
{ 2, -1, 0, 0, "Character designer" },
{ 3, -1, 0, 0, "Yuji Uekawa" },
{ 2, -1, 0, 0, "Character game designers" },
{ 3, -1, 0, 0, "Takashi Iizuka" },
{ 3, -1, 0, 0, "Takao Miyoshi" },
{ 3, -1, 0, 0, "Yojiro Ogawa" },
{ 2, -1, 0, 0, "Player character programmers" },
{ 3, -1, 0, 0, "Tetsu Katano" },
{ 3, -1, 0, 0, "Masanobu Yamamoto" },
{ 3, -1, 0, 0, "Kouichi Toya" },
{ 3, -1, 0, 0, "Yasuhiro Takahashi" },
{ 3, -1, 0, 0, "Kazuyuki Mukaida" },
{ 2, -1, 0, 0, "Character motion designers" },
{ 3, -1, 0, 0, "Yuji Uekawa" },
{ 3, -1, 0, 0, "Akikazu Mizuno" },
{ 0, 1, 0, 0, "" }, //FIELD STAFF
{ 2, -1, 0, 0, "Field designers" },
{ 3, -1, 0, 0, "Takao Miyoshi" },
{ 3, -1, 0, 0, "Shiro Maekawa" },
{ 3, -1, 0, 0, "Yojiro Ogawa" },
{ 3, -1, 0, 0, "Yuichiro Suzuki" },
{ 3, -1, 0, 0, "Shun Nakamura" },
{ 3, -1, 0, 0, "Takashi Iizuka" },
{ 2, -1, 0, 0, "Lead field programmers" },
{ 3, -1, 0, 0, "Masahiro Wakayama" },
{ 3, -1, 0, 0, "Takuya Matsumoto" },
{ 3, -1, 0, 0, "Tetsu Katano" },
{ 3, -1, 0, 0, "Akio Setsumasa" },
{ 2, -1, 0, 0, "Field programmers" },
{ 3, -1, 0, 0, "Takeshi Sakakibara" },
{ 3, -1, 0, 0, "Yoshitaka Kawabata" },
{ 3, -1, 0, 0, "Akihiko Shinya" },
{ 3, -1, 0, 0, "Shinya Matsunami" },
{ 3, -1, 0, 0, "Kouji Ogino" },
{ 3, -1, 0, 0, "Masakazu Miura" },
{ 2, -1, 0, 0, "Lead field artists" },
{ 3, -1, 0, 0, "Kazuyuki Hoshino" },
{ 3, -1, 0, 0, "Nobuhiko Honda" },
{ 3, -1, 0, 0, "Hideaki Moriya" },
{ 3, -1, 0, 0, "Michikazu Tamamura" },
{ 3, -1, 0, 0, "Masamichi Harada" },
{ 3, -1, 0, 0, "Satoshi Sakai" },
{ 3, -1, 0, 0, "Hiroshi Nishiyama" },
{ 2, -1, 0, 0, "Field artists" },
{ 3, -1, 0, 0, "Makiko Banju" },
{ 3, -1, 0, 0, "Akira Mikame" },
{ 3, -1, 0, 0, "Satoshi Okano" },
{ 3, -1, 0, 0, "Kensuke Kita" },
{ 3, -1, 0, 0, "Yoshinari Amaike" },
{ 3, -1, 0, 0, "Ai Ikeda" },
{ 3, -1, 0, 0, "Kosei Kitamura" },
{ 3, -1, 0, 0, "Takayuki Hatamura" },
{ 3, -1, 0, 0, "Yoshitaka Miura" },
{ 3, -1, 0, 0, "Kazuko Ito" },
{ 3, -1, 0, 0, "Yuki Takahashi" },
{ 3, -1, 0, 0, "Takanori Fukazawa" },
{ 3, -1, 0, 0, "Yasuhisa Nakagawa" },
{ 2, -1, 0, 0, "Visual effects designer" },
{ 3, -1, 0, 0, "Sachiko Kawamura" },
{ 2, -1, 0, 0, "Field program support" },
{ 3, -1, 0, 0, "Hideto Fujishita" },
{ 3, -1, 0, 0, "Yuhki Hatakeyama" },
{ 2, -1, 0, 0, "Field art support" },
{ 3, -1, 0, 0, "Misaqa Kitamura" },
{ 3, -1, 0, 0, "Yoshihito Takahashi" },
{ 3, -1, 0, 0, "Miho Takayanagi" },
{ 3, -1, 0, 0, "Nanako Yarimizu" },
{ 3, -1, 0, 0, "Katsumi Yokota" },
{ 3, -1, 0, 0, "Wataru Watanabe" },
{ 3, -1, 0, 0, "Chisai Abe" },
{ 3, -1, 0, 0, "Maki Kaneko" },
{ 2, -1, 0, 0, "Visual effects support" },
{ 3, -1, 0, 0, "Naoko Hamada" },
{ 0, 2, 0, 0, "" }, //ENEMY STAFF
{ 2, -1, 0, 0, "\"CHAOS\" game designers" },
{ 3, -1, 0, 0, "Takashi Iizuka" },
{ 3, -1, 0, 0, "Norihito Kato" },
{ 2, -1, 0, 0, "\"CHAOS\" programmer" },
{ 3, -1, 0, 0, "Kouichi Toya" },
{ 2, -1, 0, 0, "\"CHAOS\" character designer" },
{ 3, -1, 0, 0, "Yuji Uekawa" },
{ 2, -1, 0, 0, "Enemy game designers" },
{ 3, -1, 0, 0, "Takao Miyoshi" },
{ 3, -1, 0, 0, "Daisuke Mori" },
{ 3, -1, 0, 0, "Kenjiro Morimoto" },
{ 2, -1, 0, 0, "Enemy programmer" },
{ 3, -1, 0, 0, "Yoshihisa Hashimoto" },
{ 2, -1, 0, 0, "Enemy character designers" },
{ 3, -1, 0, 0, "Kazuyuki Hoshino" },
{ 3, -1, 0, 0, "Tohru Watanuki" },
{ 3, -1, 0, 0, "Satoshi Sakai" },
{ 2, -1, 0, 0, "Enemy program support" },
{ 3, -1, 0, 0, "Mitsuteru Iwaki" },
{ 3, -1, 0, 0, "Tohru Mita" },
{ 3, -1, 0, 0, "Mitsuru Takahashi" },
{ 2, -1, 0, 0, "Enemy art support" },
{ 3, -1, 0, 0, "Satoshi Yokokawa" },
{ 3, -1, 0, 0, "Masami Hayashi" },
{ 3, -1, 0, 0, "Satoshi Arai" },
{ 3, -1, 0, 0, "Takehiko Akabane" },
{ 3, -1, 0, 0, "Haruo Nakano" },
{ 3, -1, 0, 0, "Yuichi Ide" },
{ 0, 3, 0, 0, "" }, //A-LIFE SYSTEM STAFF
{ 2, -1, 0, 0, "A-LIFE system designers" },
{ 3, -1, 0, 0, "Shiro Maekawa" },
{ 3, -1, 0, 0, "Daisuke Mori" },
{ 2, -1, 0, 0, "A-LIFE system programmer" },
{ 3, -1, 0, 0, "Yoshihisa Hashimoto" },
{ 2, -1, 0, 0, "Program advisor" },
{ 3, -1, 0, 0, "Yasuhiro Takahashi" },
{ 2, -1, 0, 0, "Lead A-LIFE artist" },
{ 3, -1, 0, 0, "Tohru Watanuki" },
{ 2, -1, 0, 0, "Artists" },
{ 3, -1, 0, 0, "Sachiko Kawamura" },
{ 3, -1, 0, 0, "Hiroyuki Watanabe" },
{ 2, -1, 0, 0, "Modeling art support" },
{ 3, -1, 0, 0, "Chika Kohjitani" },
{ 3, -1, 0, 0, "Yuichi Higuchi" },
{ 2, -1, 0, 0, "Visual memory game designer" },
{ 3, -1, 0, 0, "Shiro Maekawa" },
{ 2, -1, 0, 0, "Visual memory programmer" },
{ 3, -1, 0, 0, "Jun Fukushima" },
{ 0, 4, 0, 0, "" }, //STORY EVENT STAFF
{ 2, -1, 0, 0, "Story event director" },
{ 3, -1, 0, 0, "Akinori Nishiyama" },
{ 2, -1, 0, 0, "Story event coordinator" },
{ 3, -1, 0, 0, "Naoto Ohshima" },
{ 2, -1, 0, 0, "Scenario writer" },
{ 3, -1, 0, 0, "Akinori Nishiyama" },
{ 2, -1, 0, 0, "Event scene editors" },
{ 3, -1, 0, 0, "Shintaro Hata" },
{ 3, -1, 0, 0, "Kenichi Fujiwara" },
{ 3, -1, 0, 0, "Eitaro Toyoda" },
{ 2, -1, 0, 0, "Story sequence programmer" },
{ 3, -1, 0, 0, "Yoshitaka Kawabata" },
{ 2, -1, 0, 0, "Story event programmers" },
{ 3, -1, 0, 0, "Takaaki Saito" },
{ 3, -1, 0, 0, "Masato Nakazawa" },
{ 2, -1, 0, 0, "Event motion designers" },
{ 3, -1, 0, 0, "Naoto Ohshima" },
{ 3, -1, 0, 0, "Tomonori Dobashi" },
{ 2, -1, 0, 0, "Event scene edit support" },
{ 3, -1, 0, 0, "Hiroyuki Abe" },
{ 2, -1, 0, 0, "Event program support" },
{ 3, -1, 0, 0, "Koh Midoro" },
{ 3, -1, 0, 0, "Kunihiko Mori" },
{ 2, -1, 0, 0, "Modeling art support" },
{ 3, -1, 0, 0, "Toshiyuki Mukaiyama" },
{ 3, -1, 0, 0, "Shinichi Higashi" },
{ 3, -1, 0, 0, "Kazuo Komuro" },
{ 3, -1, 0, 0, "Toshihiro Ito" },
{ 3, -1, 0, 0, "Toshiyuki Takamatsu" },
{ 3, -1, 0, 0, "Satsuki Nagano" },
{ 0, 5, 0, 0, "" }, //CG MOVIE STAFF
{ 2, -1, 0, 0, "CG movie producer" },
{ 3, -1, 0, 0, "Naoto Ohshima" },
{ 2, -1, 0, 0, "CG movie director" },
{ 3, -1, 0, 0, "Manabu Kusunoki" },
{ 2, -1, 0, 0, "Lead CG movie artist" },
{ 3, -1, 0, 0, "Norihiro Nishiyama" },
{ 2, -1, 0, 0, "CG movie artists" },
{ 3, -1, 0, 0, "Masahiro Kumono" },
{ 3, -1, 0, 0, "Motomu Hayashi" },
{ 3, -1, 0, 0, "Tsuyoshi Morimoto" },
{ 3, -1, 0, 0, "Tamotsu Kushibe" },
{ 3, -1, 0, 0, "Kouji Kubo" },
{ 3, -1, 0, 0, "Emiko Hirose" },
{ 3, -1, 0, 0, "Naomi Honda" },
{ 3, -1, 0, 0, "Masashi Yamaguchi" },
{ 3, -1, 0, 0, "Isamu Yamasaki" },
{ 2, -1, 0, 0, "Opening movie editor" },
{ 3, -1, 0, 0, "Naoto Ohshima" },
{ 2, -1, 0, 0, "MA studio" },
{ 3, -1, 0, 0, "Maruni Studio, Tokyo, Japan" },
{ 2, -1, 0, 0, "MA engineer" },
{ 3, -1, 0, 0, "Koji Ito (Maruni Studio)" },
{ 0, 6, 0, 0, "" }, //COORDINATORS
{ 2, -1, 0, 0, "Program coordinator" },
{ 3, -1, 0, 0, "Takahiro Hamano" },
{ 2, -1, 0, 0, "Camera system programmer" },
{ 3, -1, 0, 0, "Takeshi Sakakibara" },
{ 2, -1, 0, 0, "Technical supervisor" },
{ 3, -1, 0, 0, "Takuya Matsumoto" },
{ 2, -1, 0, 0, "Technical staff coordinators" },
{ 3, -1, 0, 0, "Masanobu Yamamoto" },
{ 3, -1, 0, 0, "Osamu Hori" },
{ 3, -1, 0, 0, "Kazuyuki Mukaida" },
{ 2, -1, 0, 0, "Art staff coordinators" },
{ 3, -1, 0, 0, "Minoru Matsuura" },
{ 3, -1, 0, 0, "Atsushi Seimiya" },
{ 3, -1, 0, 0, "Chie Yoshida" },
{ 0, 7, 0, 0, "" }, //SOUND STAFF
{ 2, -1, 0, 0, "Executive sound coordinator" },
{ 3, -1, 0, 0, "Yukifumi Makino" },
{ 2, -1, 0, 0, "Lead music composer" },
{ 3, -1, 0, 0, "Jun Senoue" },
{ 2, -1, 0, 0, "Music composers" },
{ 3, -1, 0, 0, "Kenichi Tokoi" },
{ 3, -1, 0, 0, "Fumie Kumatani" },
{ 2, -1, 0, 0, "Sound effects" },
{ 3, -1, 0, 0, "Masaru Setsumaru" },
{ 3, -1, 0, 0, "Tatsuyuki Maeda" },
{ 3, -1, 0, 0, "Yutaka Minobe" },
{ 3, -1, 0, 0, "Takashi Endo (1991,Inc.)" },
{ 2, -1, 0, 0, "Music produced by" },
{ 3, -1, 0, 0, "Jun Senoue" },
{ 3, -1, 0, 0, "Atsushi \"SUSHI\" Kosugi (Beat On Beat,Inc.)" },
{ 2, -1, 0, 0, "Recording studios" },
{ 3, -1, 0, 0, "A&M Studio, Hollywood, CA." },
{ 3, -1, 0, 0, "Cam-Am Recorders, Tarzana, CA." },
{ 3, -1, 0, 0, "Avatar Studio, N.Y., NY." },
{ 3, -1, 0, 0, "Beat On Beat Studio, N.Y., NY." },
{ 3, -1, 0, 0, "Sound On Sound Studio, N.Y., NY." },
{ 3, -1, 0, 0, "MIT Studio, Tokyo" },
{ 3, -1, 0, 0, "MAGNET Studio, Tokyo" },
{ 3, -1, 0, 0, "SEGA Digital Studio" },
{ 2, -1, 0, 0, "Recording engineers" },
{ 3, -1, 0, 0, "Stan Katayama" },
{ 3, -1, 0, 0, "Roy Hendrickson" },
{ 3, -1, 0, 0, "Justin Luchter" },
{ 3, -1, 0, 0, "Masahiro Fukuhara (MIT Studio) " },
{ 3, -1, 0, 0, "Hirokazu Akashi (SEGA Digital Studio) " },
{ 3, -1, 0, 0, "Yoshitada Miya (SEGA Digital Studio) " },
{ 2, -1, 0, 0, "Recording coordination" },
{ 3, -1, 0, 0, "Atsushi \"SUSHI\" Kosugi (Beat On Beat,Inc.)" },
{ 3, -1, 0, 0, "Emi Akimoto (Global Vision Productions)" },
{ 3, -1, 0, 0, "Makoto Suzuki (Compozila)" },
{ 2, -1, 0, 0, "Mastering studio" },
{ 3, -1, 0, 0, "Master Disk Studio, N.Y., NY." },
{ 3, -1, 0, 0, "WARNER MUSIC JAPAN, Tokyo" },
{ 2, -1, 0, 0, "Mastering engineers" },
{ 3, -1, 0, 0, "Scott Hull (Master Disk Studio)" },
{ 3, -1, 0, 0, "Isao Kikuchi (WARNER MUSIC JAPAN)" },
{ 0, 8, 0, 0, "" }, //Musicians
{ 2, -1, 0, 0, "Vocals" },
{ 3, -1, 0, 0, "Johnny Gioeli" },
{ 3, -1, 0, 0, "Tony Harnell" },
{ 3, -1, 0, 0, "Ted Poley" },
{ 3, -1, 0, 0, "Marlon Saunders" },
{ 3, -1, 0, 0, "Dread Fox" },
{ 3, -1, 0, 0, "Nikki Gregoroff" },
{ 3, -1, 0, 0, "Karen Brake" },
{ 3, -1, 0, 0, "Terry Woods" },
{ 3, -1, 0, 0, "Maxine Waters" },
{ 2, -1, 0, 0, "Guitars" },
{ 3, -1, 0, 0, "Jun Senoue" },
{ 3, -1, 0, 0, "Mike Campbell" },
{ 3, -1, 0, 0, "Jon Paris" },
{ 3, -1, 0, 0, "Rohn Lawrence" },
{ 3, -1, 0, 0, "Kenichi Tokoi" },
{ 2, -1, 0, 0, "Bass" },
{ 3, -1, 0, 0, "Naoto Shibata" },
{ 3, -1, 0, 0, "Will Lee" },
{ 3, -1, 0, 0, "Takeshi Taneda" },
{ 3, -1, 0, 0, "Zev Katz" },
{ 3, -1, 0, 0, "Jun Senoue" },
{ 3, -1, 0, 0, "Kenichi Tokoi" },
{ 2, -1, 0, 0, "Drums" },
{ 3, -1, 0, 0, "Hiro Honma" },
{ 3, -1, 0, 0, "Ricky Wellman" },
{ 2, -1, 0, 0, "Keyboards" },
{ 3, -1, 0, 0, "Philippe Saisse" },
{ 3, -1, 0, 0, "Yutaka Minobe" },
{ 3, -1, 0, 0, "Jun Senoue" },
{ 2, -1, 0, 0, "Percussion" },
{ 3, -1, 0, 0, "Bashiri Johnson" },
{ 2, -1, 0, 0, "Horn section" },
{ 3, -1, 0, 0, "East 4th Horns" },
{ 2, -1, 0, 0, "Voice files operation" },
{ 3, -1, 0, 0, "Hideki Abe" },
{ 2, -1, 0, 0, "Sound technical adviser" },
{ 3, -1, 0, 0, "Tadashi Jyokagi" },
{ 2, -1, 0, 0, "Lyrics translation" },
{ 3, -1, 0, 0, "Takahiro Fukada" },
{ 0, 9, 0, 0, "" }, //JAPANESE VOICE
{ 2, -1, 0, 0, "Japanese character voices" },
{ 3, -1, 0, 0, "Junichi Kanemaru" },
{ 3, -1, 0, 0, "Kazuki Hayashi" },
{ 3, -1, 0, 0, "Nobutoshi Hayashi" },
{ 3, -1, 0, 0, "Taeko Kawada" },
{ 3, -1, 0, 0, "Jyoji Nakata" },
{ 3, -1, 0, 0, "Syun Yashiro" },
{ 3, -1, 0, 0, "Kaori Aso" },
{ 3, -1, 0, 0, "Kaho Kouda" },
{ 3, -1, 0, 0, "Toru Okawa" },
{ 3, -1, 0, 0, "Chikao Otsuka" },
{ 2, -1, 0, 0, "Postrecording producer" },
{ 3, -1, 0, 0, "Hiroyuki Inage" },
{ 3, -1, 0, 0, "(TOHOKUSHINSHA)" },
{ 2, -1, 0, 0, "Postrecording director" },
{ 3, -1, 0, 0, "Eriko Kimura" },
{ 3, -1, 0, 0, "(TOHOKUSHINSHA)" },
{ 2, -1, 0, 0, "Recording" },
{ 3, -1, 0, 0, "OMNIBUS JAPAN" },
{ 0, 10, 0, 0, "" }, //ENGLISH VOICE
{ 2, -1, 0, 0, "English character voices" },
{ 3, -1, 0, 0, "Ryan Drummond" },
{ 3, -1, 0, 0, "Corey Bringas" },
{ 3, -1, 0, 0, "Michael Mcgaharn" },
{ 3, -1, 0, 0, "Jennifer Douillard" },
{ 3, -1, 0, 0, "Jon St. John" },
{ 3, -1, 0, 0, "Elara Distler" },
{ 3, -1, 0, 0, "Deem Bristow" },
{ 3, -1, 0, 0, "Steve Brodie" },
{ 2, -1, 0, 0, "Postrecording director" },
{ 3, -1, 0, 0, "Lani Minella" },
{ 3, -1, 0, 0, "Bobby White" },
{ 2, -1, 0, 0, "Recording Studio" },
{ 3, -1, 0, 0, "Lightspan, San Diego, CA." },
{ 3, -1, 0, 0, "Audio Banks, Santa Monica, CA." },
{ 0, 11, 0, 0, "" }, //LOCALIZATION
{ 2, -1, 0, 0, "Localization staff" },
{ 3, -1, 0, 0, "Keith Palmer (SOA)" },
{ 3, -1, 0, 0, "Osamu Shibamiya (SOA)" },
{ 3, -1, 0, 0, "Shinobu Shindo (SOJ)" },
{ 3, -1, 0, 0, "Monika Hudgins (SOJ)" },
{ 3, -1, 0, 0, "Nulty Dave (SOE)" },
{ 3, -1, 0, 0, "Katsu Sato (SOE)" },
{ 3, -1, 0, 0, "" },
{ 2, -1, 0, 0, "Executive management" },
{ 3, -1, 0, 0, "Sadahiko Hirose" },
{ 3, -1, 0, 0, "Hidekazu Yukawa" },
{ 3, -1, 0, 0, "Hideki Sato" },
{ 3, -1, 0, 0, "Hideki Okamura" },
{ 3, -1, 0, 0, "Okitane Usui" },
{ 3, -1, 0, 0, "" },
{ 3, -1, 0, 0, "Toshiro Kezuka" },
{ 3, -1, 0, 0, "Bernard Stolar" },
{ 3, -1, 0, 0, "Makoto Kaneshiro" },
{ 2, -1, 0, 0, "Executive coordination" },
{ 3, -1, 0, 0, "Shinobu Toyoda" },
{ 3, -1, 0, 0, "Toshinori Asai" },
{ 3, -1, 0, 0, "Noriyoshi Ohba" },
{ 3, -1, 0, 0, "Jin Shimazaki" },
{ 3, -1, 0, 0, "Makoto Oshitani" },
{ 3, -1, 0, 0, "Masanao Maeda" },
{ 2, -1, 0, 0, "Marketing producer" },
{ 3, -1, 0, 0, "Tomoaki Ogawa" },
{ 2, -1, 0, 0, "Promotion management" },
{ 3, -1, 0, 0, "Kunihisa Ueno" },
{ 3, -1, 0, 0, "Kenichi Sato" },
{ 3, -1, 0, 0, "Seijiro Sannabe" },
{ 3, -1, 0, 0, "Hirokazu Kanno" },
{ 3, -1, 0, 0, "Masatoshi Kawaguchi" },
{ 3, -1, 0, 0, "Mitsuru Takahashi" },
{ 3, -1, 0, 0, "Kenji Kato" },
{ 3, -1, 0, 0, "Hiroto Kikuchi" },
{ 2, -1, 0, 0, "Public relations" },
{ 3, -1, 0, 0, "Tadashi Takezaki" },
{ 3, -1, 0, 0, "Junji Yamazaki" },
{ 3, -1, 0, 0, "Masanori Hirano" },
{ 2, -1, 0, 0, "Software support" },
{ 3, -1, 0, 0, "Masaharu Yoshii" },
{ 3, -1, 0, 0, "Takashi Ando" },
{ 3, -1, 0, 0, "Tomoaki Saito" },
{ 3, -1, 0, 0, "Kazuhiro Takase" },
{ 3, -1, 0, 0, "Takashi Shoji" },
{ 3, -1, 0, 0, "Hiroaki Sano" },
{ 3, -1, 0, 0, "Hakuro Matsuda" },
{ 3, -1, 0, 0, "Kenei Unoki" },
{ 3, -1, 0, 0, "Akira Ohe" },
{ 3, -1, 0, 0, "and... " },
{ 3, -1, 0, 0, "Dreamcast LIBRARY STAFF" },
{ 3, -1, 0, 0, "Masao Oshimi (CRI)" },
{ 3, -1, 0, 0, "Tomonori Saguchi (CRI)" },
{ 3, -1, 0, 0, "Yutaka Sugano" },
{ 2, -1, 0, 0, "Hardware support" },
{ 3, -1, 0, 0, "Nobuhisa Yamada" },
{ 3, -1, 0, 0, "Osamu Kaji" },
{ 3, -1, 0, 0, "Shiro Hagiwara" },
{ 3, -1, 0, 0, "Taku Matsubara" },
{ 3, -1, 0, 0, "Shoji Nishikawa" },
{ 3, -1, 0, 0, "Takashi Sekimoto" },
{ 3, -1, 0, 0, "Shuji Hori" },
{ 3, -1, 0, 0, "Osamu Hosokawa" },
{ 3, -1, 0, 0, "Hirokazu Hama" },
{ 3, -1, 0, 0, "Kenji Tosaki" },
{ 3, -1, 0, 0, "Atsunori Himoto" },
{ 3, -1, 0, 0, "and... " },
{ 3, -1, 0, 0, "Dreamcast HARDWARE STAFF" },
{ 2, -1, 0, 0, "Visual material editors" },
{ 3, -1, 0, 0, "Yuji Sawairi" },
{ 3, -1, 0, 0, "Ikuo Ishizaka" },
{ 3, -1, 0, 0, "Takayuki Ohta" },
{ 2, -1, 0, 0, "Manual production" },
{ 3, -1, 0, 0, "Kaoru Ichigozaki" },
{ 3, -1, 0, 0, "Youichi Takahashi" },
{ 3, -1, 0, 0, "Chieko Nakamura" },
{ 3, -1, 0, 0, "Makoto Nishino" },
{ 3, -1, 0, 0, "Monika Hudgins" },
{ 2, -1, 0, 0, "Browser production" },
{ 3, -1, 0, 0, "Tetsuya Kaku" },
{ 3, -1, 0, 0, "Paul Stathacopoulos" },
{ 3, -1, 0, 0, "Hiroaki Ito" },
{ 3, -1, 0, 0, "Takeshi Ito" },
{ 3, -1, 0, 0, "ACCESS CO.,LTD." },
{ 3, -1, 0, 0, "Planetweb,Inc." },
{ 2, -1, 0, 0, "Internet support" },
{ 3, -1, 0, 0, "Keitaro Shigemasa (SNI)" },
{ 3, -1, 0, 0, "Tomoaki Yoshioka" },
{ 3, -1, 0, 0, "Mutsuhiro Fujii" },
{ 3, -1, 0, 0, "Masaya Miyauchi" },
{ 3, -1, 0, 0, "Takamitsu Shoji" },
{ 3, -1, 0, 0, "A.J. Briones" },
{ 3, -1, 0, 0, "Alexander Villagran" },
{ 3, -1, 0, 0, "Masamitsu Uchiyama" },
{ 2, -1, 0, 0, "Special thanks" },
{ 3, -1, 0, 0, "Tomoko Sasaki" },
{ 3, -1, 0, 0, "Naofumi Hataya" },
{ 3, -1, 0, 0, "Sawako Sogabe" },
{ 3, -1, 0, 0, "Yoshiaki Kashima" },
{ 3, -1, 0, 0, "Isao Miyazaki (ESP Guitars)" },
{ 3, -1, 0, 0, "Hiroki Hayashi (ESP Guitars)" },
{ 3, -1, 0, 0, "Yosuke Okunari" },
{ 3, -1, 0, 0, " " },
{ 3, -1, 0, 0, "Yukio Aoyama" },
{ 3, -1, 0, 0, "Yuki Kobayashi" },
{ 3, -1, 0, 0, "Shadow Roldan" },
{ 2, -1, 0, 0, "Executive supervisor" },
{ 3, -1, 0, 0, "Isao Okawa" },
{ 10, -1, 0, 0, " " },
{ 5, 2, 0, 0, "MPEG ROGO" },
{ 5, 0, 0, 0, "ADX ROGO" },
{ 5, 3, 0, 0, "SEGA Digital Studio ROGO" },
{ 3, -1, 0, 0, " " },
{ 5, 1, 0, 0, "SONIC TEAM ROGO" },
{ 3, -1, 0, 0, " " },
{ 6, -1, 0, 0, "presented by" },
{ 7, -1, 0, 0, "SEGA ENTERPRISES,LTD." }
};


char FindSaveFilesLite()
{
	HANDLE handle; // edi MAPDST
	struct _WIN32_FIND_DATAA fileSearchData; // [esp+18h] [ebp-250h]
	_WIN32_FIND_DATAA _FindFileData; // [esp-140h] [ebp-3A8h]

	handle = FindFirstFileA("./SAVEDATA/SonicDX01.snc", &fileSearchData);
	if (handle == (HANDLE)-1)
	{
		return 0;
	}
	handle = FindFirstFileA("./SAVEDATA/SonicDX02.snc", &fileSearchData);
	if (handle == (HANDLE)-1)
	{
		return 1;
	}
	handle = FindFirstFileA("./SAVEDATA/SonicDX03.snc", &fileSearchData);
	if (handle == (HANDLE)-1)
	{
		return 2;
	}
	else return 3;
}

void GreenRect_Wrapper(float x, float y, float z, float width, float height)
{
	if (!AssumeOIT) njTextureShadingMode(1);
	GreenMenuRect_Draw(x, y, z, width, height);
	if (!AssumeOIT) njTextureShadingMode(2);
}

void DelayTransitionHook(int a1)
{
	//Fade into black
	TitleScreenFadedIntoBlack = true;
	transitionmode = 1;
	sub_505B40(a1);
}

int __cdecl PlayStartSound_EnableTransition()
{
	//Crossfade
	TitleScreenFadedIntoBlack = false;
	EnableFileSelectScreenFade = false;
	transitionmode = 1;
	PlaySound(2, 0, 0, 0);
	return 0;
}

int __cdecl PlayReturnSound_EnableTransition()
{
	//Crossfade back
	PlaySound(3, 0, 0, 0);
	transitionmode = 3;
	EnableFileSelectScreenFade = false;
	SonicTeamAlpha = 0;
	return 0;
}

void __cdecl DrawAVA_TITLE_BACK_E_DC(float depth)
{
	MainMenuAccessed = true;
	EnableFileSelectScreenFade = true;
	float xpos = 0;
	float ypos = 0;
	float ydelta = 0;
	float scaleX = 1.0f;
	float scaleY = 1.0f;
	float scaleX2 = 1.0f;
	float scaleY2 = 1.0f;
	int texturenumber = 0;
	bool is640 = false;
	bool OffsetOn = true;
	float y; // ST08_4@1
	float x; // ST04_4@1
	float v3; // ST08_4@1
	float v4; // ST04_4@1
	float v5; // ST08_4@1
	float v6; // ST04_4@1
	float v7; // ST08_4@1
	float v8; // ST04_4@1
	float v9; // ST08_4@1
	float v10; // ST04_4@1
	float v11; // ST08_4@1
	float v12; // ST04_4@1
	float v13; // ST08_4@1
	float v14; // ST04_4@1
	float v15; // ST08_4@1
	float v16; // ST04_4@1
	float z; // [sp+1Ch] [bp+4h]@1
	if (!AssumeOIT) njTextureShadingMode(1);
	SetVtxColorB(0xFFFFFFFF);
	njSetTexture(&ava_title_back_e_TEXLIST);
	z = depth - 4.0f;
	if (HorizontalStretch == 1.0f) is640 = true;
	else is640 = false;
	//Draw main menu BG
	if (is640)
	{
		OffsetOn = false;
		scaleX = 1.0f;
		scaleY = 1.0f;
		scaleX2 = 1.0f;
		scaleY2 = 1.0f;
		ydelta = 0;
	}
	else
	{
		if (ResolutionScaleX > ResolutionScaleY)
		{
			scaleX = ResolutionScaleX / 2.0f;
			scaleY = ResolutionScaleX / 2.0f;
			scaleX2 = ResolutionScaleX;
			scaleY2 = ResolutionScaleX;
			ydelta = (VerticalResolution_float - (480.0f*ResolutionScaleX)) / 2.0f;
		}
		else
		{
			scaleX = ResolutionScaleY / 2.0f;
			scaleY = ResolutionScaleY / 2.0f;
			scaleX2 = ResolutionScaleY;
			scaleY2 = ResolutionScaleY;
			ydelta = (VerticalResolution_float - (480.0f*ResolutionScaleY)) / 2.0f;
		}
		OffsetOn = RipplesOn;
	}
	//1
	xpos = -16.0f*OffsetOn;
	ypos = 0 - abs(ydelta);
	DrawBG(texturenumber, xpos, ypos, z, scaleX, scaleY);
	//2
	xpos = -16.0f*OffsetOn + 256.0f*scaleX2;
	ypos = 0 - abs(ydelta);
	DrawBG(texturenumber + 1, xpos, ypos, z, scaleX, scaleY);
	//3
	xpos = -16.0f*OffsetOn;
	ypos = 0 - abs(ydelta) + 256.0f*scaleY2;
	DrawBG(texturenumber + 2, xpos, ypos, z, scaleX, scaleY);
	//4
	xpos = -16.0f*OffsetOn + 256.0f*scaleX2;
	ypos = 0 - abs(ydelta) + 256.0f*scaleY2;
	DrawBG(texturenumber + 3, xpos, ypos, z, scaleX, scaleY);
	//5
	xpos = -16.0f*OffsetOn + 512.0f*scaleX2;
	ypos = 0 - abs(ydelta);
	DrawBG(texturenumber + 4, xpos, ypos, z, scaleX, scaleY);
	//6
	xpos = -16.0f*OffsetOn + 512.0f*scaleX2;
	ypos = 0 - abs(ydelta) + 128.0f*scaleY2;
	DrawBG(texturenumber + 5, xpos, ypos, z, scaleX, scaleY);
	//7
	xpos = -16.0f*OffsetOn + 512.0f*scaleX2;
	ypos = 0 - abs(ydelta) + 256.0f*scaleY2;
	DrawBG(texturenumber + 6, xpos, ypos, z, scaleX, scaleY);
	//8
	xpos = -16.0f*OffsetOn + 512.0f*scaleX2;
	ypos = 0 - abs(ydelta) + 384.0f*scaleY2;
	DrawBG(texturenumber + 7, xpos, ypos, z, scaleX, scaleY);
	//Draw logo
	njSetTexture(&ava_gtitle0_e_TEXLIST);
	if (SA1LogoMode < 2)
	{
		if (!TextLanguage) xpos = ResolutionDeltaX + 64 * ResolutionScaleY; //Japanese
		else xpos = ResolutionDeltaX + 69 * ResolutionScaleY;
		ypos = ResolutionDeltaY + 80 * ResolutionScaleY;
	}
	else
	{
		xpos = ResolutionDeltaX + 64 * ResolutionScaleY;
		ypos = ResolutionDeltaY + 109 * ResolutionScaleY;
	}
	if (SA1LogoMode < 2)
	{
		if (!TextLanguage) xpos = ResolutionDeltaX + 64 * ResolutionScaleY; //Japanese
		else xpos = ResolutionDeltaX + 69 * ResolutionScaleY;
		ypos = ResolutionDeltaY + 80 * ResolutionScaleY;
	}
	else
	{
		xpos = ResolutionDeltaX + 64 * ResolutionScaleY;
		ypos = ResolutionDeltaY + 109 * ResolutionScaleY;
	}
	if (is640)
	{
		scaleX = 1.0f;
		scaleY = 1.0f;
	}
	else
	{
		scaleX = ResolutionScaleY / 2.0f;
		scaleY = ResolutionScaleY / 2.0f;
	}
	//Use J logo only in non-International mode
	if (!TextLanguage && SA1LogoMode != 1) texturenumber = 1; else texturenumber = 0;
	//Draw logo shadow
	DrawBG(9, xpos - (4.0f * RipplesOn * ResolutionScaleY), ypos, z, scaleX, scaleY);
	//Draw the actual logo
	DrawBG(texturenumber, xpos, ypos, z, scaleX, scaleY);
	//Draw logo overlay
	texturenumber = 2;
	if (DrawOverlay) DrawBG(texturenumber, xpos, ypos, z, scaleX, scaleY);
	//Draw white overlay
	if (!whiteoverlaydrawn)
	{
		njSetTexture(&ava_title_back_e_TEXLIST);
		SetVtxColorB(0x99FFFFFF);
		xpos = -16.0f*ResolutionScaleX;
		ypos = 0;
		DrawBG(7, xpos, ypos, z, 5* ResolutionScaleX, 4 * ResolutionScaleX);
		SetVtxColorB(0xFFFFFFFF);
		transitionmode = 3;
	}
	if (!AssumeOIT) njTextureShadingMode(2);
	njSetTexture(&ava_title_e_TEXLIST);
}

void BoxBackgroundColor()
{
	SetMaterialAndSpriteColor_Float(0.8f, 1.0f, 1.0f, 1.0f);
}

void __cdecl DrawFuckingFileSelectWindows(float pos_x, float pos_y, float pos_z, float width, float height, float scaleX, float scaleY)
{
	Uint32 v5; // esi
	Uint32 v6; // edi
	double v7; // st7
	float v8; // ST50_4
	float v9; // ST3C_4
	int v10; // ebp
	float v11; // ST3C_4
	int a1; // ST64_4
	float v13; // ST50_4
	float y; // ST54_4
	float centerY; // ST58_4
	float v16; // ST54_4
	float v17; // ST2C_4
	float centerX; // ST38_4
	float v19; // ST2C_4

	njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
	ClampGlobalColorThing_Thing();
	v5 = ScreenTextureVertices[0].col;
	v6 = ScreenTextureVertices[1].col;
	njSetTexture(&adv_window_TEXLIST);
	SetVtxColorB(0xC0808080);
	v7 = 1.0 / height;
	v8 = v7;
	v9 = v7 * 16.0;
	v10 = sub_433190(0, v5, v6, v9);
	v11 = (height - 16.0) * v8;
	a1 = sub_433190(0, v5, v6, v11);
	DoColorGradientThingMaybe(v5, v10, v5, v10);
	DrawBG(0, pos_x, pos_y, pos_z, scaleX, scaleY);
	v13 = pos_x + width;
	DrawBG(0x82000000, v13, pos_y, pos_z, scaleX, scaleY);
	DoColorGradientThingMaybe(a1, v6, a1, v6);
	y = pos_y + height;
	DrawBG(0x46000000, pos_x, y, pos_z, scaleX, scaleY);
	DrawBG(0xC8000000, v13, y, pos_z, scaleX, scaleY);
	DoColorGradientThingMaybe(v10, a1, v10, a1);
	centerY = height - 32.0*scaleX;
	v16 = pos_y + 16.0*scaleY;
	DisplayScreenTextureCenter(1, pos_x, v16, pos_z, 16.0*scaleX, centerY);
	v17 = v13 - 16.0*scaleX;
	DisplayScreenTextureCenter(1, v17, v16, pos_z, 16.0*scaleX, centerY);
	DoColorGradientThingMaybe(v5, v6, v5, v6);
	centerX = width - 32.0*scaleX;
	v19 = pos_x + 16.0*scaleY;
	DisplayScreenTextureCenter(1, v19, pos_y, pos_z, centerX, height);
	njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
	ClampGlobalColorThing_Thing();
}

void DrawFuckingButton(unsigned int n, float x, float y, float z, float sx, float sy)
{
	float scaleY; // ST18_4
	float scaleX; // ST14_4
	njSetTexture(&ava_square_TEXLIST);
	SetVtxColorB(0xFFFFFF0D | n);
	scaleY = sy * 1.1770245f;
	scaleX = sx * 1.0460432f;
	DrawBG(67108865, x, y, z, scaleX, scaleY);
	SetVtxColorB(n);
	DrawBG(0x4000000, x, y, z - 0.30000001f, sx, sy);
}

void DrawFileSelectMockup(float depth_orig, bool use_scaling, int VertexColor)
{
	if (!AssumeOIT) njTextureShadingMode(1);
	SetVtxColorA(VertexColor);
	float xpos;
	float ypos;
	float zpos;
	float ydelta;
	float width;
	float height;
	float depth;
	bool is640 = false;
	float scaleX;
	float scaleY;
	float ScreenScaleX;
	float ScreenScaleY;
	float ScreenDeltaX;
	float ScreenDeltaY;
	float BaseScaleX;
	float BaseScaleY;
	//Set scaling
	if (HorizontalResolution == 640 && VerticalResolution == 480) is640 = true;
	else is640 = false;
	if (is640 || !use_scaling)
	{
		ScreenScaleX = 1.0f;
		ScreenScaleY = 1.0f;
		BaseScaleX = 1.0f;
		BaseScaleY = 1.0f;
		ScreenDeltaY = 0;
		ScreenDeltaX = 0;
	}
	else
	{
		ScreenScaleX = HorizontalResolution_float / 640.0f;
		ScreenScaleY = VerticalResolution_float / 480.0f;
		if (ScreenScaleX > ScreenScaleY)
		{
			BaseScaleX = ScreenScaleY;
			BaseScaleY = ScreenScaleY;
			ScreenDeltaX = (HorizontalResolution_float - ScreenScaleY * 640.0f) / 2.0f;
			ScreenDeltaY = (VerticalResolution_float - ScreenScaleY * 480.0f) / 2.0f;
		}
		else
		{
			BaseScaleX = ScreenScaleX;
			BaseScaleY = ScreenScaleX;
			ScreenDeltaX = (HorizontalResolution_float - ScreenScaleX * 640.0f) / 2.0f;
			ScreenDeltaY = (VerticalResolution_float - ScreenScaleX * 480.0f) / 2.0f;
		}
	}
	//AVA_BACK
	DrawTiledBG_AVA_BACK(depth_orig - 2.0f);
	//Green rectangle (scaled by the Mod Loader so I don't need to fix the coordinates)
	//Draw the green rect when:
	GreenRect_Wrapper(0, 38, depth_orig - 10.0f, 564.0f, 41.0f);
	//"Select a file" texture
	njSetTexture(&ava_vmssel_e_TEXLIST);
	xpos = 42;
	ypos = 46;
	DrawBG(8, ScreenDeltaX + xpos * BaseScaleX, ScreenDeltaY + ypos * BaseScaleY, depth_orig - 14.0f, BaseScaleX, BaseScaleY);
	//File select window
	SetVtxColorB(0x78004FFFu);
	xpos = 47;
	ypos = 84;
	width = 200;
	height = 340;
	DrawFuckingFileSelectWindows(ScreenDeltaX + xpos * BaseScaleX, ScreenDeltaY + ypos * BaseScaleY, depth_orig-6.0f, width * BaseScaleX, height * BaseScaleY, BaseScaleX, BaseScaleY);
	//File buttons
	scaleX = 0.69999999f;
	scaleY = 0.69999999f;
	xpos = 147.0f;
	ypos = 165.0f;
	DrawFuckingButton(0xFF12B4FF, ScreenDeltaX + xpos * BaseScaleX, ScreenDeltaY + ypos * BaseScaleY, depth_orig-6.0f, BaseScaleX * scaleX, BaseScaleY * scaleY);
	ypos = 225;
	if (NumberOfSaves >= 1) DrawFuckingButton(0xFF12B4FF, ScreenDeltaX + xpos * BaseScaleX, ScreenDeltaY + ypos * BaseScaleY, depth_orig-6.0f, BaseScaleX * scaleX, BaseScaleY * scaleY);
	ypos = 285;
	if (NumberOfSaves >= 2) DrawFuckingButton(0xFF12B4FF, ScreenDeltaX + xpos * BaseScaleX, ScreenDeltaY + ypos * BaseScaleY, depth_orig-6.0f, BaseScaleX * scaleX, BaseScaleY * scaleY);
	ypos = 345;
	if (NumberOfSaves >= 3) DrawFuckingButton(0xFF12B4FF, ScreenDeltaX + xpos * BaseScaleX, ScreenDeltaY + ypos * BaseScaleY, depth_orig-6.0f, BaseScaleX * scaleX, BaseScaleY * scaleY);
	//Right side
	DoColorGradientThingMaybe(0x7812B4FFu, 0x7812B4FFu, 0x7812B4FFu, 0x7812B4FFu);
	xpos = 268;
	ypos = 78;
	width = 320;
	height = 360;
	DrawFuckingFileSelectWindows(ScreenDeltaX + xpos * BaseScaleX, ScreenDeltaY + ypos * BaseScaleY, depth_orig-4.0f, width * BaseScaleX, height * BaseScaleY, BaseScaleX, BaseScaleY);
	njSetTexture(&ava_filesel_e_TEXLIST);
	//Yellow thing
	int *v4 = dword_7ECA74;
	do
	{
		//Top left corner
		xpos = 268;
		ypos = 78;
		scaleX = 0.78125f;
		scaleY = 0.78125f;
		int v5 = CreateColorGradient(v4[0], v4[1], 0.069444448f);
		DoColorGradientThingMaybe(v4[0], v5, v4[0], v5);
		depth = depth_orig + (*((float *)v4 - 1));
		DrawBG(*((unsigned __int8 *)v4 + 8), ScreenDeltaX + xpos * BaseScaleX, ScreenDeltaY + ypos * BaseScaleY, depth, BaseScaleX * scaleX, BaseScaleY * scaleY);
		//Top right corner
		xpos = 588;
		DrawBG(*((unsigned __int8 *)v4 + 8) | 0x82000000, ScreenDeltaX + xpos * BaseScaleX, ScreenDeltaY + ypos * BaseScaleY, depth, BaseScaleX * scaleX, BaseScaleY * scaleY); 
		//Top horizonal bar
		xpos = 293;
		ypos = 78;
		width = 270;
		height = 25;
		DisplayScreenTextureCenter(*((unsigned __int8 *)v4 + 9), ScreenDeltaX + xpos * BaseScaleX, ScreenDeltaY + ypos * BaseScaleY, depth, BaseScaleX * width, BaseScaleY * height); 
		//Left vertical bar
		int v15 = CreateColorGradient(v4[0], v4[1], 0.93055558);
		DoColorGradientThingMaybe(v5, v15, v5, v15);
		xpos = 268;
		ypos = 103;
		width = 25;
		height = 310;
		DisplayScreenTextureCenter(*((unsigned __int8 *)v4 + 10), ScreenDeltaX + xpos * BaseScaleX, ScreenDeltaY + ypos * BaseScaleY, depth, BaseScaleX * width, BaseScaleY * height); 
		//Right vertical bar
		xpos = 588;
		DisplayScreenTextureCenter(*((unsigned __int8 *)v4 + 10) | 0x82000000, ScreenDeltaX + xpos * BaseScaleX, ScreenDeltaY + ypos * BaseScaleY, depth, BaseScaleX * width, BaseScaleY * height);
		//Bottom left corner
		DoColorGradientThingMaybe(v15, v4[1], v15, v4[1]);
		xpos = 268;
		ypos = 438;
		DrawBG(*((unsigned __int8 *)v4 + 8) | 0x46000000, ScreenDeltaX + xpos * BaseScaleX, ScreenDeltaY + ypos * BaseScaleY, depth, BaseScaleX * scaleX, BaseScaleY * scaleY);
		//Bottom right corner
		xpos = 588;
		DrawBG(*((unsigned __int8 *)v4 + 8) | 0xC8000000, ScreenDeltaX + xpos * BaseScaleX, ScreenDeltaY + ypos * BaseScaleY, depth, BaseScaleX * scaleX, BaseScaleY * scaleY);
		//Bottom horizontal bar
		xpos = 293;
		ypos = 413;
		width = 270;
		height = 25;
		DisplayScreenTextureCenter(*((unsigned __int8 *)v4 + 9) | 0x40000000, ScreenDeltaX + xpos * BaseScaleX, ScreenDeltaY + ypos * BaseScaleY, depth, BaseScaleX * width, BaseScaleY * height);
		v4 -= 6;
	} 
	while (v4 >= dword_7ECA44);
	//Right pane
	njSetTexture(&ava_filesel_e_TEXLIST);
	SetVtxColorB(0xFFFFFFFF);
	int inc_count = 0;
	int counter = 0;
	do
	{
		float temp_offset = counter * 57.0f + 200.0f;
		njSetTexture(&ava_filesel_e_TEXLIST);
		SetVtxColorB(0xFFFFFFFF);
		float yoffset = temp_offset - 240.0f;
		depth = depth_orig - 8.0f;
		xpos = 20 + 248.0f + 160.0f;
		ypos = 240 + yoffset;
		DrawBG(0x4000000, ScreenDeltaX + xpos * BaseScaleX, ScreenDeltaY + ypos * BaseScaleY, depth, BaseScaleX, BaseScaleY);
		depth = depth_orig - 10.0f;
		ypos = 240.0f + yoffset;
		xpos = 20 + 248.0f + 160.0f;
		DrawBG((unsigned __int8)byte_7ECA20[inc_count] | 0x4000000, ScreenDeltaX + xpos * BaseScaleX, ScreenDeltaY + ypos * BaseScaleY, depth, BaseScaleX, BaseScaleY);
		depth = depth_orig - 6.0f;
		ypos = temp_offset + 28.0f;
		xpos = 20 + 248.0f + 160.0f;
		scaleX = 0.96899998f;
		scaleY = 0.5f;
		DrawFuckingButton(0xFF12B4FF, ScreenDeltaX + xpos * BaseScaleX, ScreenDeltaY + ypos * BaseScaleY, depth, BaseScaleX * scaleX, BaseScaleY * scaleY);
		counter = ++inc_count;
	} 
	while (inc_count < 4);
	//Oval thing
	njSetTexture(&ava_filesel_e_TEXLIST);
	SetVtxColorB(0xFFFFFFFF);
	depth = depth_orig-5.0f;
	ypos = 240.0 - 118.0;
	xpos = 20 + 248.0 + 160.0;
	scaleX = 1.883f;
	scaleY = 1.0f;
	DrawBG(0x4000008, ScreenDeltaX + xpos * BaseScaleX, ScreenDeltaY + ypos * BaseScaleY, depth, scaleX * BaseScaleX, scaleY * BaseScaleY);
	if (!AssumeOIT) njTextureShadingMode(2);
}

void DrawTitleScreen()
{
	//Variables for logo/background
	float xpos;
	float ypos;
	float ydelta;
	bool OffsetOn = true;
	bool is640 = false;
	int texturenumber;
	float scaleX;
	float scaleY;
	float scaleX2;
	float scaleY2;
	//Transition modes:
	//0 - title screen loaded
	//1 - fading out
	//2 - outside of title screen
	//3 - fading in
	if (transitionmode == 0)
	{
		TitleBGTransparency.argb.a = 255;
		if (BlackFadeout.argb.a >= 32) BlackFadeout.argb.a -= 32;
	}
	//Draw file select screen mockup
	if (!TitleScreenFadedIntoBlack && !MainMenuAccessed && transitionmode != -1)
	{
		DrawFileSelectMockup(5800.0f, true, 0xFFFFFFFF);
	}
	//Draw title BG
	if (HorizontalStretch == 1.0f) is640 = true;
	else is640 = false;
	if (RipplesOn) njSetTexture(&ava_title_cmn_TEXLIST);
	else njSetTexture(&ava_title_back_e_TEXLIST);
	if (!AssumeOIT) njTextureShadingMode(1);
	if (!DroppedFrames)
	{
		if (!MainMenuAccessed || TitleScreenFadedIntoBlack) SetVtxColorB(TitleBGTransparency.color); else SetVtxColorB(0xFFFFFFFF);
		if (titledrawn != titleframe)
		{
			if (titleframe > 22) titleframe = 0;
			if (!RipplesOn) texturenumber = 0; else texturenumber = titleframe * 8;
			//Set scaling
			if (is640)
			{
				scaleX = 1.0f;
				scaleY = 1.0f;
				OffsetOn = false;
				ydelta = 0;
				scaleX2 = 1.0f;
				scaleY2 = 1.0f;
			}
			else
			{
				if (ResolutionScaleX > ResolutionScaleY)
				{
					scaleX = ResolutionScaleX / 2.0f;
					scaleY = ResolutionScaleX / 2.0f;
					scaleX2 = ResolutionScaleX;
					scaleY2 = ResolutionScaleX;
					ydelta = (VerticalResolution_float - (480.0f*ResolutionScaleX)) / 2.0f;
				}
				else
				{
					scaleX = ResolutionScaleY / 2.0f;
					scaleY = ResolutionScaleY / 2.0f;
					scaleX2 = ResolutionScaleY;
					scaleY2 = ResolutionScaleY;
					ydelta = (VerticalResolution_float - (480.0f*ResolutionScaleY)) / 2.0f;
				}
				OffsetOn = RipplesOn;
			}
			//1
			xpos = -16.0f*OffsetOn;
			ypos = 0 - abs(ydelta);
			DrawBG(texturenumber, xpos, ypos, 1.2f, scaleX, scaleY);
			//2
			xpos = -16.0f*OffsetOn + 256.0f*scaleX2;
			ypos = 0 - abs(ydelta);
			DrawBG(texturenumber + 1, xpos, ypos, 1.2f, scaleX, scaleY);
			//3
			xpos = -16.0f*OffsetOn;
			ypos = 0 - abs(ydelta) + 256.0f*scaleY2;
			DrawBG(texturenumber + 2, xpos, ypos, 1.2f, scaleX, scaleY);
			//4
			xpos = -16.0f*OffsetOn + 256.0f*scaleX2;
			ypos = 0 - abs(ydelta) + 256.0f*scaleY2;	
			DrawBG(texturenumber + 3, xpos, ypos, 1.2f, scaleX, scaleY);
			//5
			xpos = -16.0f*OffsetOn + 512.0f*scaleX2;
			ypos = 0 - abs(ydelta);
			DrawBG(texturenumber + 4, xpos, ypos, 1.2f, scaleX, scaleY);
			//6
			xpos = -16.0f*OffsetOn + 512.0f*scaleX2;
			ypos = 0 - abs(ydelta) + 128.0f*scaleY2;
			DrawBG(texturenumber + 5, xpos, ypos, 1.2f, scaleX, scaleY);
			//7
			xpos = -16.0f*OffsetOn + 512.0f*scaleX2;
			ypos = 0 - abs(ydelta) + 256.0f*scaleY2;
			DrawBG(texturenumber + 6, xpos, ypos, 1.2f, scaleX, scaleY);
			//8
			xpos = -16.0f*OffsetOn + 512.0f*scaleX2;
			ypos = 0 - abs(ydelta) + 384.0f*scaleY2;
			DrawBG(texturenumber + 7, xpos, ypos, 1.2f, scaleX, scaleY);
			titledrawn = titleframe;
		}
	}
	//Draw logo
	if (logodrawn != logoframe)
	{
		njSetTexture(&ava_gtitle0_e_TEXLIST);
		if (logoframe > 128) logoframe = 0;
		//Draw logo
		if (!MainMenuAccessed || TitleScreenFadedIntoBlack) SetVtxColorB(TitleBGTransparency.color);
		else SetVtxColorB(0xFFFFFFFF);
		if (SA1LogoMode < 2)
		{
			if (!TextLanguage) xpos = ResolutionDeltaX + 64 * ResolutionScaleY; //Japanese
			else xpos = ResolutionDeltaX + 69 * ResolutionScaleY;
			ypos = ResolutionDeltaY + 80 * ResolutionScaleY;
		}
		else
		{
			xpos = ResolutionDeltaX + 64 * ResolutionScaleY;
			ypos = ResolutionDeltaY + 109 * ResolutionScaleY;
		}
		if (is640)
		{
			scaleX = 1.0f;
			scaleY = 1.0f;
		}
		else
		{
			scaleX = ResolutionScaleY / 2.0f;
			scaleY = ResolutionScaleY / 2.0f;
		}
		//Use J logo only in non-International mode
		if (!TextLanguage && SA1LogoMode != 1) texturenumber = 1; else texturenumber = 0;
		//Draw logo shadow
		DrawBG(9, xpos - (4.0f * RipplesOn * ResolutionScaleY), ypos, 1.2f, scaleX, scaleY);
		//Draw the actual logo
		DrawBG(texturenumber, xpos, ypos, 1.2f, scaleX, scaleY);
		//Draw logo overlay
		texturenumber = 2;
		if (DrawOverlay) DrawBG(texturenumber, xpos, ypos, 1.2f, scaleX, scaleY);
		//Sonic Team logo fade-in
		if (transitionmode == 0)
		{
			if (SonicTeamAlpha <= 247) SonicTeamAlpha += 4;
			else SonicTeamAlpha = TitleBGTransparency.argb.a;
		}
		if (transitionmode == 1)
		{
			if (SonicTeamAlpha >= 0) SonicTeamAlpha -= 32;
			else SonicTeamAlpha = 0;
		}
		if (!EnableTransition)
		{
			SonicTeamAlpha = TitleBGTransparency.argb.a;
		}
		if (SonicTeamAlpha >= 0) SonicTeamTransparency.argb.a = SonicTeamAlpha;
		else SonicTeamTransparency.argb.a = 0;
		if (SonicTeamTransparency.argb.a > 0)
		{
			SetVtxColorB(SonicTeamTransparency.color);
			//Draw Sonic Team logo
			texturenumber = 5;
			DrawBG(texturenumber, ResolutionDeltaX + 288 * ResolutionScaleY, ResolutionDeltaY + 33.0f * ResolutionScaleY, 1.2f, scaleX, scaleY);
			//International subtitle
			if (SA1LogoMode == 1)
			{
				if (!TextLanguage) texturenumber = 4; else texturenumber = 3;
				DrawBG(texturenumber, ResolutionDeltaX + 64 * ResolutionScaleY, ResolutionDeltaY + (300 + 8 * TextLanguage)* ResolutionScaleY, 1.2f, scaleX, scaleY);
			}
			//Or SEGA text
			else
			{
				if (!TextLanguage) texturenumber = 7; else texturenumber = 6;
				DrawBG(texturenumber, ResolutionDeltaX + 64 * ResolutionScaleY, ResolutionDeltaY + 400 * ResolutionScaleY, 1.2f, scaleX, scaleY);
			}
		}
		logodrawn = logoframe;
	}
	if (transitionmode != 0)
	{
		//Fade out
		if (transitionmode == 1)
		{
			{
				//Fade out in progress
				if (TitleBGTransparency.argb.a >= 32)
				{
					TitleBGTransparency.argb.a -= 32;
					if (LogoScaleXT < LogoScaleX * 2.0f) LogoScaleXT = LogoScaleXT * 1.05f;
					if (LogoScaleYT < LogoScaleY * 2.0f) LogoScaleYT = LogoScaleYT * 1.05f;
					if (TitleBGTransparency.argb.a > 64)
					{
						if (BlackFadeout.argb.a < 128) BlackFadeout.argb.a += 32;
					}
					else
					{
						if (BlackFadeout.argb.a >= 32) BlackFadeout.argb.a -= 32;
					}
					//PrintDebug("Fade: %d\n", BlackFadeout.argb.a);
				}
				//Fade out complete
				else
				{
					transitionmode = 2;
					TitleBGTransparency.argb.a = 0;
					BlackFadeout.argb.a = 0;
					//PrintDebug("Fade: %d\n", BlackFadeout.argb.a);
					LogoScaleXT = LogoScaleX * 2.0f;
					LogoScaleYT = LogoScaleY * 2.0f;
				}
			}
		}
		//Fade back in
		if (transitionmode == 3)
		{
			if (TitleBGTransparency.argb.a <= 223)
			{
				if (BlackFadeout.argb.a < 128) BlackFadeout.argb.a += 32;
				TitleBGTransparency.argb.a += 32;
				if (LogoScaleXT > LogoScaleX) LogoScaleXT = LogoScaleXT * 0.92f;
				if (LogoScaleYT > LogoScaleY) LogoScaleYT = LogoScaleYT * 0.92f;
				//PrintDebug("Fade1: %d\n", BlackFadeout.argb.a);
			}
			else
			{
				if (BlackFadeout.argb.a >= 32) BlackFadeout.argb.a -= 32;
				transitionmode = 0;
				TitleBGTransparency.argb.a = 255;
				LogoScaleXT = LogoScaleX;
				LogoScaleYT = LogoScaleY;
				//PrintDebug("Fade2: %d\n", BlackFadeout.argb.a);
			}
		}
		if (transitionmode == -1)
		{
			if (TitleBGTransparency.argb.a <= 223)
			{
				if (BlackFadeout.argb.a >= 4) BlackFadeout.argb.a -= 4;
				TitleBGTransparency.argb.a += 32;
				if (LogoScaleXT > LogoScaleX) LogoScaleXT = LogoScaleXT * 0.92f;
				if (LogoScaleYT > LogoScaleY) LogoScaleYT = LogoScaleYT * 0.92f;
			}
			else
			{
				transitionmode = 0;
				TitleBGTransparency.argb.a = 255;
				LogoScaleXT = LogoScaleX;
				LogoScaleYT = LogoScaleY;
			}
		}
		//Draw logo transition
		if (is640)
		{
			scaleX = 1.0f;
			scaleY = 1.0f;
			xpos = (640.0f - LogoScaleXT * 502.0f) / 2.0f;
			if (SA1LogoMode != 2) ypos = (480.0f - LogoScaleYT * 256.0f) / 2.0f - 32.0f / LogoScaleYT;
			else ypos = (480.0f - LogoScaleYT * 262.0f) / 2.0f;
		}
		else 
		{
			scaleX = ResolutionScaleY / 2.0f;
			scaleY = ResolutionScaleY / 2.0f;
			xpos = (HorizontalResolution - LogoScaleXT * 502.0f * ResolutionScaleY) / 2.0f;
			if (SA1LogoMode != 2) ypos = (VerticalResolution - LogoScaleYT * 256.0f * ResolutionScaleY) / 2.0f - (32.0f* ResolutionScaleY) / LogoScaleYT;
			else ypos = (VerticalResolution - LogoScaleYT * 262.0f *ResolutionScaleY) / 2.0f;
		}
		texturenumber = 0;
		SetVtxColorB(TitleBGTransparency.color);
		if (EnableTransition && LogoScaleXT > 1.02f)
		{
			DrawBG(texturenumber, xpos, ypos, 1.2f, LogoScaleXT*scaleX, LogoScaleYT*scaleY);
			if (DrawOverlay) DrawBG(2, xpos, ypos, 1.2f, LogoScaleXT*scaleX, LogoScaleYT*scaleY); //Draw overlay
		}
	}
	if (!AssumeOIT) njTextureShadingMode(2);
	//Draw black/white box if transitioning
	if ((transitionmode >= 1 && transitionmode < 3) || transitionmode == -1)
	{
		if (TitleBackOverlayColor.argb.a < 160) TitleBackOverlayColor.argb.a += 8;
		else TitleBackOverlayColor.argb.a = 153;
	}
	if (transitionmode == 3 || transitionmode < 1)
	{
		if (TitleBackOverlayColor.argb.a >= 8) TitleBackOverlayColor.argb.a -= 8;
		else TitleBackOverlayColor.argb.a = 0;
	}
	if (MainMenuAccessed && !TitleScreenFadedIntoBlack)
	{
		njSetTexture(&ava_title_back_e_TEXLIST);
		SetVtxColorB(TitleBackOverlayColor.color);
		xpos = -16.0f*ResolutionScaleX;
		ypos = 0;
		DrawBG(7, xpos, ypos, 1.2f, 5 * ResolutionScaleX, 4 * ResolutionScaleX);
		SetVtxColorB(0xFFFFFFFF);
		whiteoverlaydrawn = true;
	}
	else DrawRect_Queue(0, 0, HorizontalResolution, VerticalResolution, 1.2f, BlackFadeout.color, QueuedModelFlagsB_SomeTextureThing);
}

void DrawPressStart()
{
	float sourcepos_x = 193.0f;
	float sourcepos_y = 364.0f;
	if (transitionmode < 1)
	{
		if (!AssumeOIT) njTextureShadingMode(1);
		njSetTexture(&ava_gtitle0_e_TEXLIST);
		if (startdrawn != startframe)
		{
			if (HorizontalStretch != 1.0f)
			{
				DrawBG(8, ResolutionDeltaX + sourcepos_x * ResolutionScaleY, ResolutionDeltaY + sourcepos_y * ResolutionScaleY, 1.1f, ResolutionScaleY / 2.0f, ResolutionScaleY / 2.0f);
			}
			else
			{
				DrawBG(8, sourcepos_x, sourcepos_y, 1.1f, 1.0f, 1.0f);
			}
			if (startframe > 128) startframe = 0;
			startdrawn = startframe;
		}
		if (!AssumeOIT) njTextureShadingMode(2);
	}
}

void DrawShadow_Hook(int texnum, float x, float y, float z, float scaleX, float scaleY)
{
	if (!AssumeOIT) njTextureShadingMode(1);
	DrawBG(texnum, x, y, z, scaleX, scaleY);
	if (!AssumeOIT) njTextureShadingMode(2);
}

void DrawMainMenuShadow_Hook(int texnum, float x, float y, float z, float scaleX, float scaleY)
{
	if (!DLLLoaded_HDGUI)
	{
		//This is for original shadow texture
		scaleX = scaleX * 4.0f;
		scaleY = scaleY * 4.0f;
	}
	if (!AssumeOIT) njTextureShadingMode(1);
	DrawBG(texnum, x, y, z, scaleX, scaleY);
	if (!AssumeOIT) njTextureShadingMode(2);
}

void DrawTexture_Hook(int that_cant_be_right, float x, float y, float z)
{
	if (!AssumeOIT) njTextureShadingMode(1);
	DisplayScreenTexture(that_cant_be_right, x, y, z);
	if (!AssumeOIT) njTextureShadingMode(2);
}

void DisplayScreenTexture_AlwaysTop(int that_cant_be_right, float x, float y, float z)
{
	Direct3D_SetZFunc(7u);
	Direct3D_EnableZWrite(0);
	DisplayScreenTexture(that_cant_be_right, x, y, z);
	Direct3D_EnableZWrite(1);
	Direct3D_ResetZFunc();
}

void ScreenFadeFix(float left, float top, float right, float bottom, float depth, int color, QueuedModelFlagsB queueflags)
{
	DrawRect_Queue(-50.0f, -50.0f, HorizontalResolution + 50.0f, VerticalResolution + 50.0f, 32048.0f, color, QueuedModelFlagsB_EnableZWrite);
}

void DrawShittyTextures(int texnum, float x, float y, float z, float scaleX, float scaleY)
{
	DrawBG(texnum, x, y, z, scaleX, scaleY);
	DoColorGradientThingMaybe(0xFF0016FF, 0xFF002EFF, 0xFF0016FF, 0xFF002EFF);
	DisplayScreenTexture(BSInt, BSsX, BSsY, BSsZ);
	DoColorGradientThingMaybe(0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu);
	DisplayScreenTexture(PSInt, PSsX, PSsY, PSsZ);
}

void RetrieveBottomThingStuff(int texnum, float x, float y, float z)
{
	BSInt = texnum;
	BSsX = x;
	BSsY = y;
	BSsZ = z;
}

void RetrievePlayerSelectStuff(int that_cant_be_right, float x, float y, float z)
{
	PSInt = that_cant_be_right;
	PSsX = x;
	PSsY = y;
	PSsZ = z;
}

void FileIcon_Hook(int that_cant_be_right, float Texture_X, float Texture_Y, float Texture_Z)
{
	float Arrow1_X;
	float Arrow1_Y;
	float Arrow2_X;
	float Arrow2_Y;
	float Arrow1Center_X = 251.0f;
	float Arrow1Center_Y = 268.0f;
	float Arrow2Center_X = 218.0f;
	float Arrow2Center_Y = 322.0f;
	float Arrow1Scale = 0.0f + Options_ArrowScale;
	float Arrow2Scale = 0.5f - Options_ArrowScale;
	Arrow1_X = (Arrow1Center_X - 64 * Arrow1Scale) - 320.0f + HorizontalStretch * 320.0f;
	Arrow1_Y = (Arrow1Center_Y - 64 * Arrow1Scale) - 240.0f + VerticalStretch * 240.0f;
	Arrow2_X = (Arrow2Center_X - 64 * Arrow2Scale) - 320.0f + HorizontalStretch * 320.0f;
	Arrow2_Y = (Arrow2Center_Y - 64 * Arrow2Scale) - 240.0f + VerticalStretch * 240.0f;
	if (!AssumeOIT) njTextureShadingMode(1);
	DisplayScreenTexture(44, Texture_X, Texture_Y, Texture_Z);
	DrawBG(45, Arrow1_X, Arrow1_Y, Texture_Z, Arrow1Scale, Arrow1Scale);
	DrawBG(46, Arrow2_X, Arrow2_Y, Texture_Z, Arrow2Scale, Arrow2Scale);
	if (!AssumeOIT) njTextureShadingMode(2);
}

void DrawBG_CreditsLogo(int texnum, float x, float y, float z, float scaleX, float scaleY)
{
	NJS_COLOR vtxcolor;
	int vtx;
	vtxcolor.color = 0xFFFFFFFF;
	if (y < 0.0f)
	{
		vtx = 255 + (int)(y*4.0f);
		if (vtx <= 0) vtxcolor.argb.a = 0;
		else vtxcolor.argb.a = vtx;
	}
	SetVtxColorB(vtxcolor.color);
	Direct3D_SetZFunc(7u);
	Direct3D_EnableZWrite(0);
	DrawBG(texnum, x, y, z, scaleX, scaleX);
	Direct3D_EnableZWrite(1);
	Direct3D_SetZFunc(3u);
}

void __cdecl PauseMenu_ActuallyDrawTheThings_Flip(int n, NJS_POINT2 *pos, NJS_POINT2 *scale, int colorize, int flipmode)
{
	float r;
	float g;
	float b;
	NJD_SPRITE spriteflags = NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR;
	NJS_SPRITE _sp; // [esp+4h] [ebp-20h]
	if (flipmode == 1) spriteflags |= NJD_SPRITE_HFLIP;
	if (flipmode == 2) spriteflags |= NJD_SPRITE_VFLIP;
	if (flipmode == 3) spriteflags |= NJD_SPRITE_VFLIP | NJD_SPRITE_HFLIP;
	_sp.tlist = &PauseMenu_TEXLIST;
	_sp.p.x = pos->x;
	_sp.p.y = pos->y;
	_sp.p.z = -1.0001f;
	_sp.sx = scale->x;
	_sp.sy = scale->y;
	Pause_Points[0].x = pos->x;
	Pause_Points[0].y = pos->y;
	Pause_Points[1].x = pos->x;
	Pause_Points[1].y = pos->y + scale->y * 16;
	Pause_Points[2].x = pos->x + scale->x * 16;
	Pause_Points[2].y = pos->y;
	Pause_Points[3].x = pos->x + scale->x * 16;
	Pause_Points[3].y = pos->y + scale->y * 16;
	Pause_Colors[0].color = 0xE60075C7;
	Pause_Colors[1].color = 0xE6040052;
	Pause_Colors[2].color = 0xE60075C7;
	Pause_Colors[3].color = 0xE6040052;
	Pause_Point2Col.p = Pause_Points;
	Pause_Point2Col.col = Pause_Colors;
	Pause_Point2Col.num = 0;
	//Main box
	if (colorize == 0)
	{
		njSetTexture(&PauseMenu_TEXLIST);
		Draw2DLinesMaybe_Queue((NJS_POINT2COL*)&Pause_Point2Col, 4, 22047.0f, NJD_TRANSPARENT|NJD_FILL, QueuedModelFlagsB_SomeTextureThing);
	}
	//Top corners
	if (colorize == 1)
	{
		_sp.tanim = &PauseMenu_TEXANIM;
		SetMaterialAndSpriteColor_Float(0.9f, 0.0f, 0.458f, 0.78f);
		njDrawSprite2D_Queue(&_sp, n, 22047.0f, spriteflags, QueuedModelFlagsB_SomeTextureThing);
	}
	//Bottom corners
	if (colorize == 2)
	{
		_sp.tanim = &PauseMenu_TEXANIM;
		SetMaterialAndSpriteColor_Float(0.9f, 0.016f, 0, 0.322f);
		njDrawSprite2D_Queue(&_sp, n, 22047.0f, spriteflags, QueuedModelFlagsB_SomeTextureThing);
	}
	//Top bar
	if (colorize == 3)
	{
		_sp.tanim = &PauseBarTexanim;
		SetMaterialAndSpriteColor_Float(0.9f, 0.0f, 0.458f, 0.78f);
		njDrawSprite2D_Queue(&_sp, 0, 22047.0f, spriteflags, QueuedModelFlagsB_SomeTextureThing);
	}
	//Bottom bar
	if (colorize == 4)
	{
		_sp.tanim = &PauseBarTexanim;
		SetMaterialAndSpriteColor_Float(0.9f, 0.016f, 0, 0.322f);
		njDrawSprite2D_Queue(&_sp, 0, 22047.0f, spriteflags, QueuedModelFlagsB_SomeTextureThing);
	}
}

void DrawPauseBox_DC(int n, NJS_POINT2 *pos, NJS_POINT2 *scale)
{
	NJS_POINT2 tempps;
	NJS_POINT2 newpos;
	NJS_POINT2 scaleorig;
	scaleorig.x = scale->x;
	scaleorig.y = scale->y - 1.5f;
	newpos.x = pos->x;
	newpos.y = pos->y + 12.0f;
	NJS_POINT2 scale2;
	//Main
	PauseMenu_ActuallyDrawTheThings_Flip(8, &newpos, &scaleorig, 0, 0);
	//Top left to right
	tempps.x = newpos.x;
	tempps.y = newpos.y - 16;
	scale2.x = scale->x;
	scale2.y = 1.0f;
	PauseMenu_ActuallyDrawTheThings_Flip(8, &tempps, &scale2, 3, 0);
	//Top left
	tempps.x = newpos.x - 16;
	tempps.y = newpos.y - 16;
	scale2.x = 1.0f;
	scale2.y = 1.0f;
	PauseMenu_ActuallyDrawTheThings_Flip(7, &tempps, &scale2, 1, 0);
	//Top right
	tempps.x = newpos.x + scale->x*16.0f;
	tempps.y = newpos.y - 16;
	scale2.x = 1.0f;
	scale2.y = 1.0f;
	PauseMenu_ActuallyDrawTheThings_Flip(7, &tempps, &scale2, 1, 1);
	//Bottom left to right
	tempps.x = newpos.x;
	tempps.y = newpos.y + scaleorig.y * 16;
	scale2.x = scale->x;
	scale2.y = 1.0f;
	PauseMenu_ActuallyDrawTheThings_Flip(8, &tempps, &scale2, 4, 0);
	//Top to bottom left
	tempps.x = newpos.x - 16;
	tempps.y = newpos.y;
	scale2.x = 1.0f;
	scale2.y = scaleorig.y;
	PauseMenu_ActuallyDrawTheThings_Flip(8, &tempps, &scale2, 0, 0);
	//Top to bottom right
	tempps.x = newpos.x + scale->x*16.0f;
	tempps.y = newpos.y;
	scale2.x = 1.0f;
	scale2.y = scaleorig.y;
	PauseMenu_ActuallyDrawTheThings_Flip(8, &tempps, &scale2, 0, 0);
	//Bottom left
	tempps.x = newpos.x - 16;
	tempps.y = newpos.y + scaleorig.y * 16.0f;
	scale2.x = 1.0f;
	scale2.y = 1.0f;
	PauseMenu_ActuallyDrawTheThings_Flip(7, &tempps, &scale2, 2, 2);
	//Bottom right
	tempps.x = newpos.x + scale->x*16.0f;
	tempps.y = newpos.y + scaleorig.y * 16.0f;
	scale2.x = 1.0f;
	scale2.y = 1.0f;
	PauseMenu_ActuallyDrawTheThings_Flip(7, &tempps, &scale2, 2, 3);
}

void DrawPauseSelectionBox_Callback(FourFloats *a)
{
	float ScreenScaleX;
	float ScreenScaleY;
	float ScreenDeltaX;
	float ScreenDeltaY;
	float BaseScaleX;
	float BaseScaleY;
	bool is640 = false;
	//Set scaling
	if (HorizontalResolution == 640 && VerticalResolution == 480) is640 = true;
	else is640 = false;
	if (is640)
	{
		ScreenScaleX = 1.0f;
		ScreenScaleY = 1.0f;
		BaseScaleX = 1.0f;
		BaseScaleY = 1.0f;
		ScreenDeltaY = 0;
		ScreenDeltaX = 0;
	}
	else
	{
		ScreenScaleX = HorizontalResolution_float / 640.0f;
		ScreenScaleY = VerticalResolution_float / 480.0f;
		if (ScreenScaleX > ScreenScaleY)
		{
			BaseScaleX = ScreenScaleY;
			BaseScaleY = ScreenScaleY;
			ScreenDeltaX = (HorizontalResolution_float - ScreenScaleY * 640.0f) / 2.0f;
			ScreenDeltaY = (VerticalResolution_float - ScreenScaleY * 480.0f) / 2.0f;
		}
		else
		{
			BaseScaleX = ScreenScaleX;
			BaseScaleY = ScreenScaleX;
			ScreenDeltaX = (HorizontalResolution_float - ScreenScaleX * 640.0f) / 2.0f;
			ScreenDeltaY = (VerticalResolution_float - ScreenScaleX * 480.0f) / 2.0f;
		}
	}
	njSetTexture(&PauseMenu_TEXLIST);
	DrawBG(2, ScreenDeltaX + a->x * BaseScaleX, ScreenDeltaY + a->y * BaseScaleY, 1.0f, BaseScaleX*a->scale_x, BaseScaleY*a->scale_y);
}

void DrawPauseSelectionBox_DC(int n, NJS_POINT2 *pos, NJS_POINT2 *scale)
{
	//This stuff is disabled until I find a way to properly draw a textured quad with vertex colors
	/*
	PauseSelect_Points[0].x = pos->x;
	PauseSelect_Points[0].y = pos->y;
	PauseSelect_Points[1].x = pos->x;
	PauseSelect_Points[1].y = pos->y + scale->y * 32;
	PauseSelect_Points[2].x = pos->x + scale->x * 128;
	PauseSelect_Points[2].y = pos->y;
	PauseSelect_Points[3].x = pos->x + scale->x * 128;
	PauseSelect_Points[3].y = pos->y + scale->y * 32;
	PauseSelect_Point2Col.p = (NJS_POINT2*)&PauseSelect_Points;
	PauseSelect_Point2Col.col = (NJS_COLOR*)&PauseSelect_Colors;
	PauseSelect_Point2Col.tex = (NJS_TEX*)&PauseSelectionUVs;
	PauseSelect_Point2Col.num = 4;
	*/
	PauseSelectionTexlist.nbTexture = 1;
	PauseSelectionTexlist.textures = (NJS_TEXNAME*)&CON_REGULAR_TEXNAMES[37];
	DoColorGradientThingMaybe(0xFFED9700, 0xFFFFEA00, 0xFFED9700, 0xFFFFEA00);
	PauseSelectionBoxFloats.x = pos->x;
	PauseSelectionBoxFloats.y = pos->y;
	PauseSelectionBoxFloats.scale_x = scale->x;
	PauseSelectionBoxFloats.scale_y = scale->y;
	DrawModelCallback_QueueFourFloats(DrawPauseSelectionBox_Callback, &PauseSelectionBoxFloats, 48059.0f, QueuedModelFlagsB_SomeTextureThing);
	//Draw2DLinesMaybe_Queue((NJS_POINT2COL*)&PauseSelect_Point2Col, 4, 24000.0f, NJD_TRANSPARENT|NJD_FILL|NJD_USE_TEXTURE, QueuedModelFlagsB_SomeTextureThing);
	//Draw3DLinesMaybe_Queue((NJS_POINT3COL*)&PauseSelect_Point3Col, 4, NJD_TRANSPARENT|NJD_FILL|NJD_USE_TEXTURE, QueuedModelFlagsB_SomeTextureThing);
	//njDrawTriangle2D((NJS_POINT2COL*)&PauseSelect_Point2Col, 1, 1.0f, NJD_TRANSPARENT|NJD_FILL|NJD_USE_TEXTURE);
}

void DrawSprite_Hook(NJS_SPRITE *sp, Int n, Float pri, NJD_SPRITE attr, QueuedModelFlagsB queue_flags)
{
	if (!AssumeOIT) njTextureShadingMode(1);
	njDrawSprite2D_Queue(sp, n, pri, attr, queue_flags);
	if (!AssumeOIT) njTextureShadingMode(2);
}

void __cdecl BossHUDHack(void *a1)
{
	float x; // ST0C_4
	float y; // ST10_4
	float scale;
	sub_432EA0();
	njSetTexture(&Hud_RingTimeLife_TEXLIST);
	njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
	x = (HorizontalResolution_float/640.0f) * *(float *)a1;
	y = (*((float *)a1 + 1) - 20.0f) * (VerticalResolution_float / 480.0f);
	scale = (VerticalResolution_float / 480.0f); //1x for original PVM
	if (DLLLoaded_HDGUI) scale = scale / 4.0f;
	DrawBG(*((_DWORD *)a1 + 3), x, y, *((float *)a1 + 2), scale, scale);
}

void FileSelectVtxColorHook(Uint32 a1)
{
	FileSelectVtxColor = a1;
	if (!EnableFileSelectScreenFade) 
		SetVtxColorA(0xFFFFFFFF);
	else SetVtxColorA(a1);
}

void FileSelect_AVA_BACK_Hook(float depth)
{
	SetVtxColorA(0xFFFFFFFF);
	DrawTiledBG_AVA_BACK(depth);
}

void FileSelect_VtxColorB_Hook(Uint32 a1)
{
	if (CurrentMenuIndex == 2) SetVtxColorB(FileSelectVtxColor);
	else SetVtxColorB(a1);
}

void CharacterName_VtxColorB_Hook(Uint32 a1)
{
	if (CurrentMenuIndex == 2) SetVtxColorB(FileSelectVtxColor);
	else
	{
		if (!DLLLoaded_HDGUI && a1 == 0xFFFFFFFF) a1 = 0xF0FFFFFF;
		SetVtxColorB(a1);
	}
}

void DrawStringHook(const char *text, float x, float y, float scale)
{
	SetABCTextThingColor(FileSelectVtxColor, FileSelectVtxColor, FileSelectVtxColor, FileSelectVtxColor);
	DrawString(text, x, y, scale);
}

void FileSelectGreenRectHook(float x, float y, float z, float width, float height)
{
	//Avoid drawing the green rectangle in the transition between file select and options because it draws on top of everything for whatever reason
	if (FileSelectVtxColor == 0xFFFFFFFF || (CurrentMenuIndex != 7 && CurrentMenuIndex != 2) || (CurrentMenuIndex == 2 && PreviousMenuIndex != 7)) GreenRect_Wrapper(x, y, z, width, height);
}

void MainMenuVtxColorHook(Uint32 a1)
{
	if (CurrentMenuIndex == 5) SetVtxColorA(0xFFFFFFFF);
	else SetVtxColorA(a1);
}

static void __cdecl SwitchMenu_r(int a1);
static Trampoline SwitchMenu_t(0x505B40, 0x505B45, SwitchMenu_r);
static void __cdecl SwitchMenu_r(int a1)
{
	auto original = reinterpret_cast<decltype(SwitchMenu_r)*>(SwitchMenu_t.Target());
	if (!DisableSA1TitleScreen || !EnableDCBranding)
	{
		//PrintDebug("Menu index: %d\n", a1);
		PreviousMenuIndex = CurrentMenuIndex;
		CurrentMenuIndex = a1;
	}
	original(a1);
}

static void __cdecl OptionsDisplay_r(ObjectMaster *a1);
static Trampoline OptionsDisplay_t(0x509810, 0x509815, OptionsDisplay_r);
static void __cdecl OptionsDisplay_r(ObjectMaster *a1)
{
	auto original = reinterpret_cast<decltype(OptionsDisplay_r)*>(OptionsDisplay_t.Target());
	if (!DisableSA1TitleScreen || !EnableDCBranding)
	{
		//Don't draw the options screen if the current menu has nothing to do with it
		if (CurrentMenuIndex != 7 && CurrentMenuIndex != 2 && CurrentMenuIndex != 6 && CurrentMenuIndex != 4) return;
		//Dont' draw the options screen if the file select overlay obscures it completely
		if (FileSelectVtxColor == 0xFFFFFFFF) return;
		//Draw file select overlay when going from options to file select
		if (CurrentMenuIndex == 7 && PreviousMenuIndex == 2)
		{
			DrawFileSelectMockup(5800.0f, true, 0xFFFFFFFF);
		}
		original(a1);
		//Draw file select overlay when going from file select to options
		if (CurrentMenuIndex == 2 && PreviousMenuIndex == 7)
		{
			DrawFileSelectMockup(1000.0f, true, FileSelectVtxColor);
		}
	}
	else original(a1);
}

static void __cdecl TitleScreenDisplay_r(ObjectMaster *a1);
static Trampoline TitleScreenDisplay_t(0x510350, 0x510355, TitleScreenDisplay_r);
static void __cdecl TitleScreenDisplay_r(ObjectMaster *a1)
{
	NJS_COLOR StartColor = { 0x00FFFFFF };
	TitleScreenData *v1; // esi
	auto original = reinterpret_cast<decltype(TitleScreenDisplay_r)*>(TitleScreenDisplay_t.Target());
	if (DisableSA1TitleScreen || !EnableDCBranding)
	{
		original(a1);
	}
	else
	{
		v1 = (TitleScreenData *)a1->UnknownB_ptr;
		if (v1->field_14)
		{
			if (v1->field_18 >= 0)
			{
				SetDefaultAlphaBlend();
				if (transitionmode != 0 && transitionmode != 3) SetVtxColorA(0xFFFFFFFF);
				else if (!TitleScreenFadedIntoBlack && PreviousMenuIndex == 6) SetVtxColorA(0xFFFFFFFF);
				else SetVtxColorA(v1->field_14);
				DrawTitleScreen();
				//Draw Press Start
				unsigned char PressStartTransparency = v1->dword28;
				if ((v1->dword28 & 0x1FFu) >= 0x100)
				{
					PressStartTransparency = -1 - v1->dword28;
				}
				StartColor.argb.a = PressStartTransparency;
				SetVtxColorB(StartColor.color);
				DrawPressStart();
			}
		}
	}
}

/*
static void __cdecl LoadPVM_r(const char *filename, NJS_TEXLIST *texlist);
static Trampoline LoadPVM_t(0x421180, 0x421185, LoadPVM_r);
static void __cdecl LoadPVM_r(const char *filename, NJS_TEXLIST *texlist)
{
	auto original = reinterpret_cast<decltype(LoadPVM_r)*>(LoadPVM_t.Target());
	PrintDebug("Loading PVM: %s result:", filename);
	PrintDebug("%d\n", VerifyTexList(texlist));
	original(filename, texlist);
}
*/

static Uint8 __cdecl GetPauseDisplayOptions_r(Uint8 *a1);
static Trampoline GetPauseDisplayOptions_t(0x4582E0, 0x4582E8, GetPauseDisplayOptions_r);
static Uint8 __cdecl GetPauseDisplayOptions_r(Uint8 *a1)
{
	Uint8 options;
	auto original = reinterpret_cast<decltype(GetPauseDisplayOptions_r)*>(GetPauseDisplayOptions_t.Target());
	//Pause Hide by SF94
	if ((ControllerPointers[0]->HeldButtons & (Buttons_X | Buttons_Y)) == (Buttons_X | Buttons_Y))
	{
		*a1 = 0;
		return 0;
	}
	//Other stuff
	if (!EnableDCBranding)
	{
		return original(a1);
	}
	Uint8 result = original(a1);
	options = *a1;
	if (RemoveMap && options & PauseOptions_Map) 
	{
		options &= ~PauseOptions_Map;
		result--;
	}
	if (RemoveCamera && options & PauseOptions_Camera) 
	{
		options &= ~PauseOptions_Camera;
		result--;
	}
	if (RemoveSetUpPad && options & PauseOptions_Controls)
	{
		options &= ~PauseOptions_Controls;
		result--;
	}
	//PrintDebug("Opts: %d\n", options);
	*a1 = options;
	return result;
}

static int __cdecl UnlockMiniGamesCollection_r();
static Trampoline UnlockMiniGamesCollection_t(0x506460, 0x506465, UnlockMiniGamesCollection_r);
static int __cdecl UnlockMiniGamesCollection_r()
{
	auto original = reinterpret_cast<decltype(UnlockMiniGamesCollection_r)*>(UnlockMiniGamesCollection_t.Target());
	if (EnableDCBranding && RemoveGameGearGames)
	{
		return 0;
	}
	else
	{
		return original();
	}
}

void __cdecl DrawBlackMarketRingCount_cdecl(ObjectMaster *a1, EntityData1 *a2, signed int a3)
{
	if (a1->Data1->Action == 10 && a1->Data1->CharIndex > 0) a1->Data1->CharIndex = 0;
	return;
}

static void __declspec(naked) DrawBlackMarketRingCount_asm()
{
	__asm
	{
		push edi // int a3
		push ebp // a2
		push esi // a1

				 // Call your __cdecl function here:
				 call DrawBlackMarketRingCount_cdecl

				 pop esi // a1
				 pop ebp // a2
				 pop edi // int a3
				 retn
	}
}

void __cdecl MenuConfirmationPrompt_DontDisplay(void *arg_0)
{ 
	if (QuitSoundTimer == -1)
	{
		if (GameMode == GameModes_Trial || GameMode == GameModes_Adventure_Field || GameMode == GameModes_Adventure_Story) QuitSoundTimer = 30;
		else QuitSoundTimer = 0;
	}
}

void Branding_SetUpVariables()
{
	//Set up variables
	HorizontalResolution_float = static_cast<float>(HorizontalResolution);
	VerticalResolution_float = static_cast<float>(VerticalResolution);
	if (RipplesOn) ResolutionScaleX = 1.05f*(HorizontalResolution_float / 640.0f);
	else ResolutionScaleX = HorizontalResolution_float / 640.0f;
	ResolutionScaleY = VerticalResolution_float / 480.0f;
	ResolutionDeltaX = (HorizontalResolution_float - ResolutionScaleY * 640.0f) / 2.0f;
	ResolutionDeltaY = (VerticalResolution_float - ResolutionScaleY * 480.0f) / 2.0f;
}

void CheckAndRestoreDemos()
{
	if (FirstDemo.level != 29 || FirstDemo.cutscene != 27)
	{
		DemosDone = true; 
		return;
	}
	WriteData((__int16**)0x42C82A, &SA1DemoArray->act);
	WriteData((__int16**)0x42C833, &SA1DemoArray->character);
	WriteData((__int16**)0x42C83C, &SA1DemoArray->level);
	WriteData((__int16**)0x42C844, &SA1DemoArray->cutscene);
	WriteData<1>((char*)0x42C8A3, 0x0Cu); //12 demos instead of 6
	DemosDone = true;
}

void Branding_Init(const IniFile *config, const HelperFunctions &helperFunctions)
{
	//Load configuration settings
	RemoveMarketRingCount = config->getBool("Branding", "RemoveMarketRingCount", false);
	RemoveGameGearGames = config->getBool("Branding", "RemoveGameGearGames", false);
	RemoveUnlockMessage = config->getBool("Branding", "RemoveUnlockMessage", false);
	RemoveQuitPrompt = config->getBool("Branding", "RemoveQuitPrompt", false);
	RipplesOn = config->getBool("Branding", "RippleEffect", true);
	EnableTransition = config->getBool("Branding", "EnableTransition", true);
	DisableSA1TitleScreen = config->getBool("Branding", "DisableSA1TitleScreen", false);
	DrawOverlay = config->getBool("Branding", "DrawOverlay", true);
	RestoreDemos = config->getInt("Branding", "RestoreDemos", 3);
	RemoveCream = config->getBool("Branding", "RemoveCream", true);
	HUDTweak = config->getBool("Branding", "HUDTweak", true);
	SA1LogoMode = config->getInt("Branding", "SA1LogoMode", 0);
	LogoScaleXT = LogoScaleX;
	LogoScaleYT = LogoScaleY;
	WriteJump((void*)0x4B62B0, BossHUDHack); //HUD hack for Knuckles/Gamma boss fight
	if (RemoveUnlockMessage) WriteData<1>((char*)0x4B5800, 0xC3u);
	if (RemoveMarketRingCount) WriteJump((void*)0x4297E0, DrawBlackMarketRingCount_asm); //Don't draw Black Market ring count after clearing a stage
	if (RemoveQuitPrompt)
	{
		WriteData<5>((char*)0x414F28, 0x90u); //Don't show subtitle
		WriteCall((void*)0x414EE3, MenuConfirmationPrompt_DontDisplay); //Set a delay to play the sound if needed, otherwise skip the menu
	}
	Branding_SetUpVariables();
	//Credits
	WriteData((float*)0x6415DA, 1.5f); //EngBG X scale
	WriteData((float*)0x6415DF, 1.5f); //EngBG Y scale
	WriteCall((void*)0x640ACC, DrawBG_CreditsLogo);
	MainCredits.Count = 449;
	MainCredits.Entries = (CreditsEntry*)&SA1Credits;
	f480_Fixed = 1.0f + VerticalResolution;
	f640_Fixed = 1.0f + HorizontalResolution;
	//HUD position
	if (HUDTweak)
	{
		WriteData((float**)0x425E51, &HUDYOffset1);
		WriteData((float**)0x425EA4, &HUDYOffset2);
		((NJS_SPRITE*)0x91312C)->p.y = 49.0f;
	}
	//Set PVM names
	ReplacePVM("ENDBG_LAST_AMY");
	ReplacePVM("ENDBG_LAST_BIG");
	ReplacePVM("ENDBG_LAST_E102");
	ReplacePVM("ENDBG_LAST_KNUCKLES");
	ReplacePVM("ENDBG_LAST_SONIC");
	ReplacePVM("ENDBG_LAST_SUPERSONIC");
	ReplacePVM("ENDBG_LAST_TAILS");
	ReplacePVM("TUTOBG_AMY");
	ReplacePVM("TUTOBG_BIG");
	ReplacePVM("TUTOBG_E102");
	ReplacePVM("TUTOBG_KNUCKLES");
	ReplacePVM("TUTOBG_SONIC");
	ReplacePVM("TUTOBG_TAILS");
	if (!DLLLoaded_HDGUI)
	{
		WriteData((float**)0x431B46, &sphe_cursol_scale); //AVA_CSR
		WriteData((float**)0x431B57, &sphe_cursol_scale); //AVA_CSR
		//AVA_NEW16NO fixes
		WriteData((float*)0x5079F7, 1.125f); //sub_5079E0
		WriteData((float*)0x5079FC, 1.125f); //sub_5079E0
		WriteData((float*)0x507A1F, 1.125f); //sub_5079E0
		WriteData((float*)0x507A24, 1.125f); //sub_5079E0
		WriteData((float*)0x507A4A, 1.125f); //sub_5079E0
		WriteData((float*)0x507A4F, 1.125f); //sub_5079E0
		WriteData((float*)0x507A82, 1.125f); //sub_5079E0
		WriteData((float*)0x507A87, 1.125f); //sub_5079E0
		WriteData((float*)0x507AE2, 1.125f); //sub_5079E0
		WriteData((float*)0x507AE7, 1.125f); //sub_5079E0
		WriteData((float*)0x507897, 1.125f); //sub_507880
		WriteData((float*)0x50789C, 1.125f); //sub_507880
		WriteData((float*)0x5078BF, 1.125f); //sub_507880
		WriteData((float*)0x5078C4, 1.125f); //sub_507880
		WriteData((float*)0x5078EA, 1.125f); //sub_507880
		WriteData((float*)0x5078EF, 1.125f); //sub_507880
		WriteData((float*)0x507935, 1.125f); //sub_507880
		WriteData((float*)0x50793A, 1.125f); //sub_507880
		WriteData((float*)0x507989, 1.125f); //sub_507880
		WriteData((float*)0x50798E, 1.125f); //sub_507880
		WriteData((float*)0x50AEA1, 1.125f); //sub_50AE30
		WriteData((float*)0x50AEA6, 1.125f); //sub_50AE30
		WriteData((float*)0x50AEE0, 1.125f); //sub_50AE30
		WriteData((float*)0x50AEE5, 1.125f); //sub_50AE30
		WriteData((float*)0x510DE9, 1.75f); //Sound test
		WriteData((float*)0x510DEE, 1.375f); //Sound test
		WriteData((float*)0x510E0B, 1.75f); //Sound test
		WriteData((float*)0x510E10, 1.375f); //Sound test
		WriteData((float*)0x510E32, 1.75f); //Sound test
		WriteData((float*)0x510E37, 1.375f); //Sound test
		WriteData((float*)0x510E5C, 1.75f); //Sound test
		WriteData((float*)0x510E61, 1.375f); //Sound test
		WriteData((float*)0x510E79, 1.75f); //Sound test
		WriteData((float*)0x510E7E, 1.375f); //Sound test
		WriteData((float*)0x50A058, 1.125f); //sub_50A010
		WriteData((float*)0x50A06A, 1.125f); //sub_50A010
		WriteData((float*)0x50AE0A, 1.125f); //sub_50ADE0
		WriteData((float*)0x50AE0F, 1.125f); //sub_50ADE0
		WriteData((float*)0x50AEA1, 1.125f); //sub_50AE30
		WriteData((float*)0x50AEA6, 1.125f); //sub_50AE30
		WriteData((float*)0x50AEE0, 1.125f); //sub_50AE30
		WriteData((float*)0x50AEE5, 1.125f); //sub_50AE30
		WriteData((float*)0x50AF5A, 1.125f); //sub_50AF30
		WriteData((float*)0x50AF5F, 1.125f); //sub_50AF30
		WriteCall((void*)0x64393E, GreenRect_Wrapper); //Fix alpha rejection on green rectangle in tutorials
		WriteCall((void*)0x50959A, GreenRect_Wrapper); //Fix alpha rejection on green rectangle in the options screen
		//Tutorial stuff
		//PVMs
		ReplacePVM("TUTO_CMN");
		ReplacePVM("TUTO_CMN_E");
		ReplacePVM("TUTOMSG_AMY_E");
		ReplacePVM("TUTOMSG_BIG_E");
		ReplacePVM("TUTOMSG_E102_E");
		ReplacePVM("TUTOMSG_KNUCKLES_E");
		ReplacePVM("TUTOMSG_SONIC_E");
		ReplacePVM("TUTOMSG_TAILS_E");
		ReplacePVM("TUTOMSG_AMY");
		ReplacePVM("TUTOMSG_AMY_F");
		ReplacePVM("TUTOMSG_AMY_G");
		ReplacePVM("TUTOMSG_AMY_S");
		ReplacePVM("TUTOMSG_BIG");
		ReplacePVM("TUTOMSG_BIG_F");
		ReplacePVM("TUTOMSG_BIG_G");
		ReplacePVM("TUTOMSG_BIG_S");
		ReplacePVM("TUTOMSG_E102");
		ReplacePVM("TUTOMSG_E102_F");
		ReplacePVM("TUTOMSG_E102_G");
		ReplacePVM("TUTOMSG_E102_S");
		ReplacePVM("TUTOMSG_KNUCKLES");
		ReplacePVM("TUTOMSG_KNUCKLES_F");
		ReplacePVM("TUTOMSG_KNUCKLES_G");
		ReplacePVM("TUTOMSG_KNUCKLES_S");
		ReplacePVM("TUTOMSG_SONIC");
		ReplacePVM("TUTOMSG_SONIC_F");
		ReplacePVM("TUTOMSG_SONIC_G");
		ReplacePVM("TUTOMSG_SONIC_S");
		ReplacePVM("TUTOMSG_TAILS");
		ReplacePVM("TUTOMSG_TAILS_F");
		ReplacePVM("TUTOMSG_TAILS_G");
		ReplacePVM("TUTOMSG_TAILS_S");
		WriteData((float**)0x64328D, &PadManuXOffset_F);
		WriteData((float**)0x643295, &PadManuXOffset_General);
		WriteData((float**)0x643280, &PadManuXOffset_J);
		WriteData((float**)0x6432C6, &PadManuYOffset);
		WriteData((float**)0x6432E4, &PadManuYOffset2);
		WriteData((float**)0x6432D4, &PadManuYMultiplier);
		//Sonic
		//English
		TutoScreenSonic_E[0].BoxScaleX = 390;
		TutoScreenSonic_E[0].BoxScaleY = 144;
		TutoScreenSonic_E[0].BoxX = 210;
		TutoScreenSonic_E[4].BoxScaleY = 160;
		TutorialScreenLayout_Sonic_Page1_E[1].XOffset = 136; //Rotate camera
		TutorialScreenLayout_Sonic_Page1_E[1].YOffset = 0; //Rotate camera
		TutorialScreenLayout_Sonic_Page1_E[2].XOffset = 136; //Maneuver character
		TutorialScreenLayout_Sonic_Page1_E[2].YOffset = 24; //Maneuver character
		TutorialScreenLayout_Sonic_Page1_E[4].XOffset = 136; //A button
		TutorialScreenLayout_Sonic_Page1_E[4].YOffset = 64; //A button
		TutorialScreenLayout_Sonic_Page1_E[4].TexID = 3;
		TutorialScreenLayout_Sonic_Page1_E[5].TexID = 4;
		TutorialScreenLayout_Sonic_Page1_E[5].XOffset = 136;
		TutorialScreenLayout_Sonic_Page1_E[5].YOffset = 96;
		WriteData((__int16*)0x2BC3AE2, (__int16)2000); //Hide an extra item in controls page (all langs)
		//Japanese
		TutoScreenSonic_J[0].BoxScaleX = 400;
		TutoScreenSonic_J[0].BoxScaleY = 144;
		TutoScreenSonic_J[0].BoxX = 200;
		TutoScreenSonic_J[4].BoxScaleY = 160;
		TutorialScreenLayout_Sonic_Page1_J[1].XOffset = 136; //Rotate camera
		TutorialScreenLayout_Sonic_Page1_J[1].YOffset = 0; //Rotate camera
		TutorialScreenLayout_Sonic_Page1_J[2].XOffset = 136; //Maneuver character
		TutorialScreenLayout_Sonic_Page1_J[2].YOffset = 24; //Maneuver character
		TutorialScreenLayout_Sonic_Page1_J[3].XOffset = 136; //A button
		TutorialScreenLayout_Sonic_Page1_J[3].YOffset = 64; //A button
		TutorialScreenLayout_Sonic_Page1_J[3].TexID = 3;
		TutorialScreenLayout_Sonic_Page1_J[4].TexID = 4;
		TutorialScreenLayout_Sonic_Page1_J[4].XOffset = 136;
		TutorialScreenLayout_Sonic_Page1_J[4].YOffset = 96;
		//German
		TutoScreenSonic_G[0].BoxScaleX = 380;
		TutoScreenSonic_G[0].BoxScaleY = 144;
		TutoScreenSonic_G[0].BoxX = 220;
		TutoScreenSonic_G[3].BoxScaleY = 160;
		TutoScreenSonic_G[4].BoxScaleY = 160;
		//French
		TutoScreenSonic_F[4].BoxScaleY = 192;
		TutoScreenSonic_F[0].BoxScaleX = 425;
		TutoScreenSonic_F[0].BoxScaleY = 144;
		TutoScreenSonic_F[0].BoxX = 175;
		//Spanish
		TutoScreenSonic_S[0].BoxScaleX = 370;
		TutoScreenSonic_S[0].BoxScaleY = 144;
		TutoScreenSonic_S[0].BoxX = 230;
		TutoScreenSonic_S[4].BoxScaleY = 192;
		//Tails
		//English
		TutoScreenTails_E[0].BoxScaleX = 390;
		TutoScreenTails_E[0].BoxScaleY = 144;
		TutoScreenTails_E[0].BoxX = 210;
		TutoScreenTails_E[4].BoxScaleY = 160;
		TutorialScreenLayout_SharedTailsKnucklesPage1_E[0].XOffset = 136; //Rotate camera
		TutorialScreenLayout_SharedTailsKnucklesPage1_E[0].YOffset = 0; //Rotate camera
		TutorialScreenLayout_SharedTailsKnucklesPage1_E[1].XOffset = 136; //Maneuver character
		TutorialScreenLayout_SharedTailsKnucklesPage1_E[1].YOffset = 24; //Maneuver character
		TutorialScreenLayout_SharedTailsKnucklesPage1_E[3].XOffset = 136; //A button
		TutorialScreenLayout_SharedTailsKnucklesPage1_E[3].YOffset = 96; //A button
		TutorialScreenLayout_Tails_Page1_E.XOffset = 136; //Tail attack
		TutorialScreenLayout_Tails_Page1_E.YOffset = 64; //Tail attack
		//Japanese
		TutoScreenTails_J[0].BoxScaleX = 400;
		TutoScreenTails_J[0].BoxScaleY = 144;
		TutoScreenTails_J[0].BoxX = 200;
		TutoScreenTails_J[4].BoxScaleY = 160;
		TutorialScreenLayout_SharedTailsKnucklesPage1_J[0].XOffset = 136; //Rotate camera
		TutorialScreenLayout_SharedTailsKnucklesPage1_J[0].YOffset = 0; //Rotate camera
		TutorialScreenLayout_SharedTailsKnucklesPage1_J[1].XOffset = 136; //Maneuver character
		TutorialScreenLayout_SharedTailsKnucklesPage1_J[1].YOffset = 24; //Maneuver character
		TutorialScreenLayout_SharedTailsKnucklesPage1_J[2].XOffset = 136; //A button
		TutorialScreenLayout_SharedTailsKnucklesPage1_J[2].YOffset = 96; //A button
		TutorialScreenLayout_Tails_Page1_J.XOffset = 136; //Tail attack
		TutorialScreenLayout_Tails_Page1_J.YOffset = 64; //Tail attack
		//French
		TutoScreenTails_F[4].BoxScaleY = 192;
		TutoScreenTails_F[0].BoxScaleX = 425;
		TutoScreenTails_F[0].BoxScaleY = 144;
		TutoScreenTails_F[0].BoxX = 175;
		//German
		TutoScreenTails_G[0].BoxScaleX = 390;
		TutoScreenTails_G[0].BoxScaleY = 144;
		TutoScreenTails_G[0].BoxX = 210;
		TutoScreenTails_G[3].BoxScaleY = 128;
		TutoScreenTails_G[4].BoxScaleY = 160;
		TutoScreenTails_G[0].BoxScaleX = 380;
		TutoScreenTails_G[0].BoxScaleY = 144;
		TutoScreenTails_G[0].BoxX = 220;
		WriteData((__int16*)0x2BC3E9E, (__int16)2000); //Hide an extra item in controls page
		//Spanish
		TutoScreenTails_S[0].BoxScaleX = 370;
		TutoScreenTails_S[0].BoxScaleY = 144;
		TutoScreenTails_S[0].BoxX = 230;
		TutoScreenTails_S[4].BoxScaleY = 192;
		//Knuckles
		//English
		TutoScreenKnuckles_E[0].BoxScaleX = 390;
		TutoScreenKnuckles_E[0].BoxScaleY = 144;
		TutoScreenKnuckles_E[0].BoxX = 210;
		TutoScreenKnuckles_E[4].BoxX = 180;
		TutoScreenKnuckles_E[4].BoxScaleY = 128;
		TutoScreenKnuckles_E[4].BoxScaleX = 425;
		TutoScreenKnuckles_E[5].BoxScaleY = 160;
		TutorialScreenLayout_Knuckles_Page1_E.XOffset = 136; //Punch attack
		TutorialScreenLayout_Knuckles_Page1_E.YOffset = 64; //Punch attack
		WriteData<1>((char*)0x2BC4308, 0x03); //Number of items in Maximum Heat screen, remove unnecessary line
		//Japanese
		TutoScreenKnuckles_J[0].BoxScaleX = 400;
		TutoScreenKnuckles_J[0].BoxScaleY = 144;
		TutoScreenKnuckles_J[0].BoxX = 200;
		TutoScreenKnuckles_J[4].BoxX = 180;
		TutoScreenKnuckles_J[4].BoxScaleY = 128;
		TutoScreenKnuckles_J[4].BoxScaleX = 425;
		TutoScreenKnuckles_J[5].BoxScaleY = 160;
		TutorialScreenLayout_Knuckles_Page1_J.XOffset = 136; //Punch attack
		TutorialScreenLayout_Knuckles_Page1_J.YOffset = 64; //Punch attack
		//German
		TutoScreenKnuckles_G[0].BoxScaleX = 380;
		TutoScreenKnuckles_G[0].BoxScaleY = 144;
		TutoScreenKnuckles_G[0].BoxX = 220;
		TutoScreenKnuckles_G[2].BoxScaleY = 128;
		TutoScreenKnuckles_G[4].BoxX = 180;
		TutoScreenKnuckles_G[4].BoxScaleX = 420;
		TutoScreenKnuckles_G[4].BoxScaleY = 128;
		TutoScreenKnuckles_G[5].BoxScaleY = 160;
		WriteData((__int16*)0x2BC42E0, (__int16)2000); //Hide an extra item in Climbing page
		//French
		TutoScreenKnuckles_F[0].BoxScaleX = 430;
		TutoScreenKnuckles_F[0].BoxScaleY = 144;
		TutoScreenKnuckles_F[0].BoxX = 170;
		TutoScreenKnuckles_F[1].BoxScaleX = 455;
		TutoScreenKnuckles_F[1].BoxX = 145;
		TutoScreenKnuckles_F[4].BoxScaleX = 475;
		TutoScreenKnuckles_F[4].BoxX = 125;
		TutoScreenKnuckles_F[4].BoxScaleY = 128;
		TutoScreenKnuckles_F[5].BoxScaleY = 192;
		WriteData((__int16*)0x2BC3E9E, (__int16)2000); //Hide an extra item in Controls page
		WriteData((__int16*)0x2BC433A, (__int16)2000); //Hide an extra item in Maximum Heat page
		WriteData((__int16*)0x2BC4340, (__int16)2000); //Hide an extra item in Maximum Heat page
		//Spanish
		TutoScreenKnuckles_S[0].BoxScaleX = 370;
		TutoScreenKnuckles_S[0].BoxScaleY = 144;
		TutoScreenKnuckles_S[0].BoxX = 230;
		TutoScreenKnuckles_S[4].BoxScaleX = 415;
		TutoScreenKnuckles_S[4].BoxX = 190;
		TutoScreenKnuckles_S[4].BoxScaleY = 128;
		TutoScreenKnuckles_S[5].BoxScaleY = 192;
		//Amy
		//English
		TutoScreenAmy_E[0].BoxScaleX = 390;
		TutoScreenAmy_E[0].BoxScaleY = 144;
		TutoScreenAmy_E[0].BoxX = 210;
		TutoScreenAmy_E[4].BoxScaleY = 160;
		TutorialScreenLayout_AmyGamma_Page1_E[1].XOffset = 136; //Rotate camera
		TutorialScreenLayout_AmyGamma_Page1_E[1].YOffset = 0; //Rotate camera
		TutorialScreenLayout_AmyGamma_Page1_E[2].XOffset = 136; //Maneuver character
		TutorialScreenLayout_AmyGamma_Page1_E[2].YOffset = 24; //Maneuver character
		TutorialScreenLayout_Amy_Page1_E[0].XOffset = 136; //A
		TutorialScreenLayout_Amy_Page1_E[0].YOffset = 96; //A
		TutorialScreenLayout_Amy_Page1_E[1].XOffset = 136; //B
		TutorialScreenLayout_Amy_Page1_E[1].YOffset = 64; //B
		//Japanese
		TutoScreenAmy_J[0].BoxScaleX = 400;
		TutoScreenAmy_J[0].BoxScaleY = 144;
		TutoScreenAmy_J[0].BoxX = 200;
		TutoScreenAmy_J[4].BoxScaleY = 160;
		TutorialScreenLayout_AmyGamma_Page1_J[1].XOffset = 136; //Rotate camera
		TutorialScreenLayout_AmyGamma_Page1_J[1].YOffset = 0; //Rotate camera
		TutorialScreenLayout_AmyGamma_Page1_J[2].XOffset = 136; //Maneuver character
		TutorialScreenLayout_AmyGamma_Page1_J[2].YOffset = 24; //Maneuver character
		TutorialScreenLayout_Amy_Page1_J[0].XOffset = 136; //A
		TutorialScreenLayout_Amy_Page1_J[0].YOffset = 96; //A
		TutorialScreenLayout_Amy_Page1_J[1].XOffset = 136; //B
		TutorialScreenLayout_Amy_Page1_J[1].YOffset = 64; //B
		//German
		TutoScreenAmy_G[0].BoxScaleX = 380;
		TutoScreenAmy_G[0].BoxScaleY = 144;
		TutoScreenAmy_G[0].BoxX = 220;
		TutoScreenAmy_G[4].BoxScaleY = 160;
		WriteData((__int16*)0x2BC46FA, (__int16)2000); //Hide an extra item in controls page
		//French
		TutoScreenAmy_F[0].BoxScaleX = 425;
		TutoScreenAmy_F[0].BoxScaleY = 144;
		TutoScreenAmy_F[0].BoxX = 175;
		TutoScreenAmy_F[4].BoxScaleY = 192;
		//Spanish
		TutoScreenAmy_S[0].BoxScaleX = 370;
		TutoScreenAmy_S[0].BoxScaleY = 144;
		TutoScreenAmy_S[0].BoxX = 230;
		TutoScreenAmy_S[4].BoxScaleY = 192;
		//Big
		//English
		TutoScreenBig_E[0].BoxScaleX = 390;
		TutoScreenBig_E[0].BoxScaleY = 144;
		TutoScreenBig_E[0].BoxX = 210;
		TutoScreenBig_E[4].BoxScaleY = 128;
		TutoScreenBig_E[7].BoxScaleX = 420;
		TutoScreenBig_E[7].BoxX = 180;
		TutorialScreenLayout_BigPage1_E[1].XOffset = 136; //Rotate camera
		TutorialScreenLayout_BigPage1_E[1].YOffset = 0; //Rotate camera
		TutorialScreenLayout_BigPage1_E[2].XOffset = 136; //Maneuver character
		TutorialScreenLayout_BigPage1_E[2].YOffset = 24; //Maneuver character
		TutorialScreenLayout_BigPage1Part2_E[0].XOffset = 136; //A
		TutorialScreenLayout_BigPage1Part2_E[0].YOffset = 96; //A
		TutorialScreenLayout_BigPage1Part2_E[1].XOffset = 136; //B
		TutorialScreenLayout_BigPage1Part2_E[1].YOffset = 64; //B
		TutorialScreenLayout_BigPage5_E[2].TexID = 32; //Hide "Tugging the rod"
		TutorialScreenLayout_BigPage5_E[3].YOffset = 64; //Move A up
		TutorialScreenLayout_BigPage5_E[4].YOffset = 96; //Move B up
		//Japanese
		TutoScreenBig_J[0].BoxScaleX = 400;
		TutoScreenBig_J[0].BoxScaleY = 144;
		TutoScreenBig_J[0].BoxX = 200;
		TutoScreenBig_J[4].BoxScaleY = 160;
		TutoScreenBig_J[7].BoxScaleX = 400;
		TutoScreenBig_J[7].BoxX = 200;
		TutorialScreenLayout_BigPage1Part2_J[0].XOffset = 136; //A
		TutorialScreenLayout_BigPage1Part2_J[0].YOffset = 96; //A
		TutorialScreenLayout_BigPage1Part2_J[1].XOffset = 136; //B
		TutorialScreenLayout_BigPage1Part2_J[1].YOffset = 64; //B
		//German
		TutoScreenBig_G[0].BoxScaleX = 395;
		TutoScreenBig_G[0].BoxScaleY = 144;
		TutoScreenBig_G[0].BoxX = 205;
		TutoScreenBig_G[4].BoxScaleY = 128;
		WriteData((__int16*)0x2BC4E9E, (__int16)2000); //Hide an extra item in controls page
		//French
		TutoScreenBig_F[0].BoxScaleX = 425;
		TutoScreenBig_F[0].BoxScaleY = 144;
		TutoScreenBig_F[0].BoxX = 175;
		TutoScreenBig_F[4].BoxScaleY = 128;
		TutoScreenBig_F[7].BoxScaleX = 445;
		TutoScreenBig_F[7].BoxX = 155;
		//Spanish
		TutoScreenBig_S[0].BoxScaleX = 370;
		TutoScreenBig_S[0].BoxScaleY = 144;
		TutoScreenBig_S[0].BoxX = 230;
		TutoScreenBig_S[4].BoxScaleX = 275;
		TutoScreenBig_S[4].BoxX = 325;
		TutoScreenBig_S[4].BoxScaleY = 128;
		TutoScreenBig_S[7].BoxScaleX = 420;
		TutoScreenBig_S[7].BoxX = 180;
		TutoScreenBig_S[7].BoxScaleX = 475;
		TutoScreenBig_S[7].BoxX = 125;
		//Gamma
		//English
		TutoScreenGamma_E[0].BoxScaleX = 390;
		TutoScreenGamma_E[0].BoxScaleY = 144;
		TutoScreenGamma_E[0].BoxX = 210;
		TutoScreenGamma_E[4].BoxScaleY = 160;
		TutorialScreenLayout_Gamma_Page1_E[0].XOffset = 136; //A
		TutorialScreenLayout_Gamma_Page1_E[0].YOffset = 96; //A
		TutorialScreenLayout_Gamma_Page1_E[1].XOffset = 136; //B
		TutorialScreenLayout_Gamma_Page1_E[1].YOffset = 64; //B
		//Japanese
		TutoScreenGamma_J[0].BoxScaleX = 400;
		TutoScreenGamma_J[0].BoxScaleY = 144;
		TutoScreenGamma_J[0].BoxX = 200;
		TutoScreenGamma_J[4].BoxScaleY = 160;
		TutorialScreenLayout_Gamma_Page1_J[0].XOffset = 136; //A
		TutorialScreenLayout_Gamma_Page1_J[0].YOffset = 96; //A
		TutorialScreenLayout_Gamma_Page1_J[1].XOffset = 136; //B
		TutorialScreenLayout_Gamma_Page1_J[1].YOffset = 64; //B
		//German
		TutoScreenGamma_G[4].BoxScaleY = 160;
		TutoScreenGamma_G[0].BoxScaleX = 380;
		TutoScreenGamma_G[0].BoxScaleY = 144;
		TutoScreenGamma_G[0].BoxX = 220;
		//French
		TutoScreenGamma_F[0].BoxScaleX = 425;
		TutoScreenGamma_F[0].BoxScaleY = 144;
		TutoScreenGamma_F[0].BoxX = 175;
		TutoScreenGamma_F[1].BoxScaleY = 192;
		TutoScreenGamma_F[4].BoxScaleY = 192;
		WriteData((__int16*)0x2BC4AE4, (__int16)2000); //Hide an extra item in the second page
		//Spanish
		TutoScreenGamma_S[0].BoxScaleX = 370;
		TutoScreenGamma_S[0].BoxScaleY = 144;
		TutoScreenGamma_S[0].BoxX = 230;
		TutoScreenGamma_S[4].BoxScaleY = 192;	
		ReplacePVM("CHAOS_LIFEGAUGE");
		ReplacePVM("E102TIME");
		ReplacePVM("EXTRA");
		ReplacePVM("FISHING");
		ReplacePVM("ENDBG_AMY_0");
		ReplacePVM("ENDBG_AMY_1");
		ReplacePVM("ENDBG_AMY_2");
		ReplacePVM("ENDBG_BIG_0");
		ReplacePVM("ENDBG_BIG_1");
		ReplacePVM("ENDBG_BIG_2");
		ReplacePVM("ENDBG_E102_0");
		ReplacePVM("ENDBG_E102_1");
		ReplacePVM("ENDBG_E102_2");
		ReplacePVM("ENDBG_KNUCKLES_0");
		ReplacePVM("ENDBG_KNUCKLES_1");
		ReplacePVM("ENDBG_KNUCKLES_2");
		ReplacePVM("ENDBG_SONIC_0");
		ReplacePVM("ENDBG_SONIC_1");
		ReplacePVM("ENDBG_SONIC_2");
		ReplacePVM("ENDBG_SUPERSONIC_0");
		ReplacePVM("ENDBG_SUPERSONIC_1");
		ReplacePVM("ENDBG_SUPERSONIC_2");
		ReplacePVM("ENDBG_SUPERSONIC_3");
		ReplacePVM("ENDBG_TAILS_0");
		ReplacePVM("ENDBG_TAILS_1");
		ReplacePVM("ENDBG_TAILS_2");
		ReplacePVM("ENDBG_LOGO");
		ReplacePVM("AVA_NEW16NO");
		ReplacePVM("CON_REGULAR");
		ReplacePVM("CON_REGULAR_E");
		ReplacePVM("PRESSSTART");
		ReplacePVM("AVA_BACK");
		ReplacePVM("AVA_CHSEL");
		ReplacePVM("AVA_CHSEL_E");
		ReplacePVM("AVA_CSR");
		ReplacePVM("AVA_DLG");
		ReplacePVM("AVA_DLG_E");
		ResizeTextureList(&ava_dlg_e_TEXLIST, textures_ava_dlg_e);
		ReplacePVM("AVA_EMBLEM");
		ReplacePVM("AVA_EMBLEMVIEW");
		ReplacePVM("AVA_EMBLEMVIEW_E");
		ReplacePVM("AVA_FILESEL");
		ReplacePVM("AVA_FILESEL_E");
		ReplacePVM("AVA_FSCMN");
		ReplacePVM("AVA_FSCMN_E");
		ReplacePVM("AVA_FSDLG");
		ReplacePVM("AVA_FSDLG_E");
		ReplacePVM("AVA_OPTION");
		ReplacePVM("AVA_OPTION_E");
		ReplacePVM("AVA_SAN");
		ReplacePVM("ADV_WINDOW");
		ReplacePVM("AVA_SNDTEST");
		ReplacePVM("AVA_SNDTEST_E");
		ReplacePVM("AVA_SQUARE");
		ReplacePVM("AVA_STNAM");
		ReplacePVM("AVA_STNAM_E");
		ReplacePVM("AVA_SUUJI");
		ReplacePVM("AVA_TITLE");
		ReplacePVM("AVA_TITLE_E");
		ReplacePVM("AVA_TRIALACTSEL");
		ReplacePVM("AVA_TRIALACTSEL_E");
		ReplacePVM("AVA_VMSSEL");
		ReplacePVM("AVA_VMSSEL_E");
		ReplacePVM("GAMEOVER");
		ReplacePVM("GAMEOVER_E");
		ReplacePVM("BOARD_SCORE");
		ReplacePVM("B_CHNAM");
		ReplacePVM("B_CHNAM_E");
		ReplacePVM("EMBLEM");
		ReplacePVM("M_CHNAM");
		ReplacePVM("MILESRACE");
		ReplacePVM("PRESSSTART");
		ReplacePVM("SCORE_BACK");
		ReplacePVM("SCORE_ACT");
		ReplacePVM("SCORE_ACT_E");
		ReplacePVM("SCORE_BOARD");
		ReplacePVM("SCORE_BOARD_E");
		ReplacePVM("SCORE_BOSS");
		ReplacePVM("SCORE_BOSS_E");
		ReplacePVM("SCORE_CART");
		ReplacePVM("SCORE_CART_E");
		ReplacePVM("SCORE_MOLE");
		ReplacePVM("SCORE_MOLE_E");
		ReplacePVM("SCORE_RESULT");
		ReplacePVM("SCORE_RESULT_E");
		ReplacePVM("SCORE_SHOOT");
		ReplacePVM("SCORE_SHOOT_E");
		ReplacePVM("SMRYBG_AMY");
		ReplacePVM("SMRYBG_BIG");
		ReplacePVM("SMRYBG_E102");
		ReplacePVM("SMRYBG_KNUCKLES");
		ReplacePVM("SMRYBG_SONIC");
		ReplacePVM("SMRYBG_SUPERSONIC");
		ReplacePVM("SMRYBG_TAILS");
		ReplacePVM("TX_CHNAM");
		ReplacePVM("TX_CHNAM_E");
		ReplacePVR("ABC_TXT");
		ReplacePVR("ACTION_0");
		ReplacePVR("ACTION_1");
		ReplacePVR("ACTION_10");
		ReplacePVR("ACTION_11");
		ReplacePVR("ACTION_12");
		ReplacePVR("ACTION_13");
		ReplacePVR("ACTION_15");
		ReplacePVR("ACTION_16");
		ReplacePVR("ACTION_2");
		ReplacePVR("ACTION_3");
		ReplacePVR("ACTION_4");
		ReplacePVR("ACTION_5");
		ReplacePVR("ACTION_6");
		ReplacePVR("ACTION_7");
		ReplacePVR("ACTION_8");
		ReplacePVR("ACTION_9");
		ReplacePVR("A_STAGE01");
		ReplacePVR("A_STAGE01_E");
		ReplacePVR("A_STAGE02");
		ReplacePVR("A_STAGE02_E");
		ReplacePVR("A_STAGE03");
		ReplacePVR("A_STAGE03_E");
		ReplacePVR("B32ASCII");
		ReplacePVR("B32ASCII_J");
		ReplacePVR("BOSS_0");
		ReplacePVR("BOSS_1");
		ReplacePVR("BOSS_2");
		ReplacePVR("BOSS_3");
		ReplacePVR("BOSS_4");
		ReplacePVR("BOSS__0");
		ReplacePVR("BOSS__1");
		ReplacePVR("BOSS__2");
		ReplacePVR("BOSS__3");
		ReplacePVR("BOSS__4");
		ReplacePVR("B_STAGE01");
		ReplacePVR("B_STAGE01_E");
		ReplacePVR("B_STAGE02");
		ReplacePVR("B_STAGE02_E");
		ReplacePVR("B_STAGE03");
		ReplacePVR("B_STAGE03_E");
		ReplacePVR("B_STAGE04");
		ReplacePVR("B_STAGE04_E");
		ReplacePVR("E_STAGE01");
		ReplacePVR("E_STAGE01_E");
		ReplacePVR("E_STAGE02");
		ReplacePVR("E_STAGE02_E");
		ReplacePVR("E_STAGE03");
		ReplacePVR("E_STAGE03_E");
		ReplacePVR("E_STAGE04");
		ReplacePVR("E_STAGE04_E");
		ReplacePVR("E_STAGE05");
		ReplacePVR("E_STAGE05_E");
		ReplacePVR("HYOJI_BALLS_E");
		ReplacePVR("HYOJI_EMBLEM0");
		ReplacePVR("HYOJI_EMBLEM1");
		ReplacePVR("K_STAGE01");
		ReplacePVR("K_STAGE01_E");
		ReplacePVR("K_STAGE02");
		ReplacePVR("K_STAGE02_E");
		ReplacePVR("K_STAGE03");
		ReplacePVR("K_STAGE03_E");
		ReplacePVR("K_STAGE04");
		ReplacePVR("K_STAGE04_E");
		ReplacePVR("K_STAGE05");
		ReplacePVR("K_STAGE05_E");
		ReplacePVR("M128_SEA001");
		ReplacePVR("MINIGAME_0");
		ReplacePVR("MINIGAME_1");
		ReplacePVR("MINIGAME_2");
		ReplacePVR("MINIGAME_3");
		ReplacePVR("MINIGAME_4");
		ReplacePVR("MINIGAME_5");
		ReplacePVR("MINIGAME_6");
		ReplacePVR("MINIGAME_7");
		ReplacePVR("MINIGAME_8");
		ReplacePVR("MINIPRF01");
		ReplacePVR("MINIPRF02");
		ReplacePVR("MINIPRF03");
		ReplacePVR("MINIPRF04");
		ReplacePVR("MINIPRF05");
		ReplacePVR("MINIPRF06");
		ReplacePVR("MINIPRF07");
		ReplacePVR("MINIPRF08");
		ReplacePVR("MINIPRF09");
		ReplacePVR("MISSION_A_AFIN");
		ReplacePVR("MISSION_A_AHOT");
		ReplacePVR("MISSION_A_ATWI");
		ReplacePVR("MISSION_A_BALMIN");
		ReplacePVR("MISSION_A_BALRING");
		ReplacePVR("MISSION_A_BALRING_E");
		ReplacePVR("MISSION_A_BALRING_F");
		ReplacePVR("MISSION_A_BALRING_G");
		ReplacePVR("MISSION_A_BALRING_S");
		ReplacePVR("MISSION_A_BALZERO");
		ReplacePVR("MISSION_A_BALZERO_E");
		ReplacePVR("MISSION_A_BALZERO_F");
		ReplacePVR("MISSION_A_BALZERO_G");
		ReplacePVR("MISSION_A_BALZERO_S");
		ReplacePVR("MISSION_A_FIN_E");
		ReplacePVR("MISSION_A_FIN_F");
		ReplacePVR("MISSION_A_FIN_G");
		ReplacePVR("MISSION_A_FIN_S");
		ReplacePVR("MISSION_A_HOT_E");
		ReplacePVR("MISSION_A_HOT_F");
		ReplacePVR("MISSION_A_HOT_G");
		ReplacePVR("MISSION_A_HOT_S");
		ReplacePVR("MISSION_A_TWIN_E");
		ReplacePVR("MISSION_A_TWIN_F");
		ReplacePVR("MISSION_A_TWIN_G");
		ReplacePVR("MISSION_A_TWIN_S");
		ReplacePVR("MISSION_BIG_1K");
		ReplacePVR("MISSION_BIG_1K_E");
		ReplacePVR("MISSION_BIG_1K_F");
		ReplacePVR("MISSION_BIG_1K_G");
		ReplacePVR("MISSION_BIG_1K_S");
		ReplacePVR("MISSION_BIG_2K");
		ReplacePVR("MISSION_BIG_2K_E");
		ReplacePVR("MISSION_BIG_2K_F");
		ReplacePVR("MISSION_BIG_2K_G");
		ReplacePVR("MISSION_BIG_2K_S");
		ReplacePVR("MISSION_BIG_FROG");
		ReplacePVR("MISSION_BIG_FROG_E");
		ReplacePVR("MISSION_BIG_FROG_F");
		ReplacePVR("MISSION_BIG_FROG_G");
		ReplacePVR("MISSION_BIG_FROG_S");
		ReplacePVR("MISSION_G_103");
		ReplacePVR("MISSION_G_103RING");
		ReplacePVR("MISSION_G_103RING_E");
		ReplacePVR("MISSION_G_103RING_F");
		ReplacePVR("MISSION_G_103RING_G");
		ReplacePVR("MISSION_G_103RING_S");
		ReplacePVR("MISSION_G_103SEC");
		ReplacePVR("MISSION_G_103_E");
		ReplacePVR("MISSION_G_103_F");
		ReplacePVR("MISSION_G_103_G");
		ReplacePVR("MISSION_G_103_S");
		ReplacePVR("MISSION_G_104");
		ReplacePVR("MISSION_G_104RING");
		ReplacePVR("MISSION_G_104RING_E");
		ReplacePVR("MISSION_G_104RING_F");
		ReplacePVR("MISSION_G_104RING_G");
		ReplacePVR("MISSION_G_104RING_S");
		ReplacePVR("MISSION_G_104SEC");
		ReplacePVR("MISSION_G_104_E");
		ReplacePVR("MISSION_G_104_F");
		ReplacePVR("MISSION_G_104_G");
		ReplacePVR("MISSION_G_104_S");
		ReplacePVR("MISSION_G_105");
		ReplacePVR("MISSION_G_105RING");
		ReplacePVR("MISSION_G_105RING_E");
		ReplacePVR("MISSION_G_105RING_F");
		ReplacePVR("MISSION_G_105RING_G");
		ReplacePVR("MISSION_G_105RING_S");
		ReplacePVR("MISSION_G_105SEC");
		ReplacePVR("MISSION_G_105_E");
		ReplacePVR("MISSION_G_105_F");
		ReplacePVR("MISSION_G_105_G");
		ReplacePVR("MISSION_G_105_S");
		ReplacePVR("MISSION_G_AEME");
		ReplacePVR("MISSION_G_AFIN");
		ReplacePVR("MISSION_G_AHOT");
		ReplacePVR("MISSION_G_ARED");
		ReplacePVR("MISSION_G_AWIN");
		ReplacePVR("MISSION_G_BEME");
		ReplacePVR("MISSION_G_BFIN");
		ReplacePVR("MISSION_G_BHOT");
		ReplacePVR("MISSION_G_BRED");
		ReplacePVR("MISSION_G_BWIN");
		ReplacePVR("MISSION_G_EME_E");
		ReplacePVR("MISSION_G_EME_F");
		ReplacePVR("MISSION_G_EME_G");
		ReplacePVR("MISSION_G_EME_S");
		ReplacePVR("MISSION_G_FIN_E");
		ReplacePVR("MISSION_G_FIN_F");
		ReplacePVR("MISSION_G_FIN_G");
		ReplacePVR("MISSION_G_FIN_S");
		ReplacePVR("MISSION_G_FROG");
		ReplacePVR("MISSION_G_FROGRING");
		ReplacePVR("MISSION_G_FROGRING_E");
		ReplacePVR("MISSION_G_FROGRING_F");
		ReplacePVR("MISSION_G_FROGRING_G");
		ReplacePVR("MISSION_G_FROGRING_S");
		ReplacePVR("MISSION_G_FROGSEC");
		ReplacePVR("MISSION_G_FROG_E");
		ReplacePVR("MISSION_G_FROG_F");
		ReplacePVR("MISSION_G_FROG_G");
		ReplacePVR("MISSION_G_FROG_S");
		ReplacePVR("MISSION_G_HOT_E");
		ReplacePVR("MISSION_G_HOT_F");
		ReplacePVR("MISSION_G_HOT_G");
		ReplacePVR("MISSION_G_HOT_S");
		ReplacePVR("MISSION_G_RED_E");
		ReplacePVR("MISSION_G_RED_F");
		ReplacePVR("MISSION_G_RED_G");
		ReplacePVR("MISSION_G_RED_S");
		ReplacePVR("MISSION_G_SONICD");
		ReplacePVR("MISSION_G_SONICDRING");
		ReplacePVR("MISSION_G_SONICDRING_E");
		ReplacePVR("MISSION_G_SONICDRING_F");
		ReplacePVR("MISSION_G_SONICDRING_G");
		ReplacePVR("MISSION_G_SONICDRING_S");
		ReplacePVR("MISSION_G_SONICDSEC");
		ReplacePVR("MISSION_G_SONICD_E");
		ReplacePVR("MISSION_G_SONICD_F");
		ReplacePVR("MISSION_G_SONICD_G");
		ReplacePVR("MISSION_G_SONICD_S");
		ReplacePVR("MISSION_G_WIN_E");
		ReplacePVR("MISSION_G_WIN_F");
		ReplacePVR("MISSION_G_WIN_G");
		ReplacePVR("MISSION_G_WIN_S");
		ReplacePVR("MISSION_K_1MIN");
		ReplacePVR("MISSION_K_1MIN_E");
		ReplacePVR("MISSION_K_1MIN_F");
		ReplacePVR("MISSION_K_1MIN_G");
		ReplacePVR("MISSION_K_1MIN_S");
		ReplacePVR("MISSION_K_2MIN");
		ReplacePVR("MISSION_K_2MIN_E");
		ReplacePVR("MISSION_K_2MIN_F");
		ReplacePVR("MISSION_K_2MIN_G");
		ReplacePVR("MISSION_K_2MIN_S");
		ReplacePVR("MISSION_K_3EME");
		ReplacePVR("MISSION_K_3EME_E");
		ReplacePVR("MISSION_K_3EME_F");
		ReplacePVR("MISSION_K_3EME_G");
		ReplacePVR("MISSION_K_3EME_S");
		ReplacePVR("MISSION_K_NOHINT");
		ReplacePVR("MISSION_K_NOHINT_E");
		ReplacePVR("MISSION_K_NOHINT_F");
		ReplacePVR("MISSION_K_NOHINT_G");
		ReplacePVR("MISSION_K_NOHINT_S");
		ReplacePVR("MISSION_S_2MIN");
		ReplacePVR("MISSION_S_2MINH");
		ReplacePVR("MISSION_S_3MIN");
		ReplacePVR("MISSION_S_4MIN");
		ReplacePVR("MISSION_S_4MINH");
		ReplacePVR("MISSION_S_5MIN");
		ReplacePVR("MISSION_S_BOX");
		ReplacePVR("MISSION_S_BOX25MIN_E");
		ReplacePVR("MISSION_S_BOX25MIN_F");
		ReplacePVR("MISSION_S_BOX25MIN_G");
		ReplacePVR("MISSION_S_BOX25MIN_S");
		ReplacePVR("MISSION_S_BOX2MIN_E");
		ReplacePVR("MISSION_S_BOX2MIN_F");
		ReplacePVR("MISSION_S_BOX2MIN_G");
		ReplacePVR("MISSION_S_BOX2MIN_S");
		ReplacePVR("MISSION_S_BOX3MIN_E");
		ReplacePVR("MISSION_S_BOX3MIN_F");
		ReplacePVR("MISSION_S_BOX3MIN_G");
		ReplacePVR("MISSION_S_BOX3MIN_S");
		ReplacePVR("MISSION_S_BOX45MIN_E");
		ReplacePVR("MISSION_S_BOX45MIN_F");
		ReplacePVR("MISSION_S_BOX45MIN_G");
		ReplacePVR("MISSION_S_BOX45MIN_S");
		ReplacePVR("MISSION_S_BOX4MIN_E");
		ReplacePVR("MISSION_S_BOX4MIN_F");
		ReplacePVR("MISSION_S_BOX4MIN_G");
		ReplacePVR("MISSION_S_BOX4MIN_S");
		ReplacePVR("MISSION_S_BOX5MIN_E");
		ReplacePVR("MISSION_S_BOX5MIN_F");
		ReplacePVR("MISSION_S_BOX5MIN_G");
		ReplacePVR("MISSION_S_BOX5MIN_S");
		ReplacePVR("MISSION_S_BOXMIN");
		ReplacePVR("MISSION_S_BOX_E");
		ReplacePVR("MISSION_S_BOX_F");
		ReplacePVR("MISSION_S_BOX_G");
		ReplacePVR("MISSION_S_BOX_S");
		ReplacePVR("MISSION_S_EGGC");
		ReplacePVR("MISSION_S_EGGC_E");
		ReplacePVR("MISSION_S_EGGC_F");
		ReplacePVR("MISSION_S_EGGC_G");
		ReplacePVR("MISSION_S_EGGC_S");
		ReplacePVR("MISSION_S_EMECASINO");
		ReplacePVR("MISSION_S_EMECASINO_E");
		ReplacePVR("MISSION_S_EMECASINO_F");
		ReplacePVR("MISSION_S_EMECASINO_G");
		ReplacePVR("MISSION_S_EMECASINO_S");
		ReplacePVR("MISSION_S_EMESNOW");
		ReplacePVR("MISSION_S_EMESNOW_E");
		ReplacePVR("MISSION_S_EMESNOW_F");
		ReplacePVR("MISSION_S_EMESNOW_G");
		ReplacePVR("MISSION_S_EMESNOW_S");
		ReplacePVR("MISSION_S_EMEWIND");
		ReplacePVR("MISSION_S_EMEWIND_E");
		ReplacePVR("MISSION_S_EMEWIND_F");
		ReplacePVR("MISSION_S_EMEWIND_G");
		ReplacePVR("MISSION_S_EMEWIND_S");
		ReplacePVR("MISSION_S_FEGG");
		ReplacePVR("MISSION_S_FEGG_E");
		ReplacePVR("MISSION_S_FEGG_F");
		ReplacePVR("MISSION_S_FEGG_G");
		ReplacePVR("MISSION_S_FEGG_S");
		ReplacePVR("MISSION_S_ISEKI");
		ReplacePVR("MISSION_S_ISEKI_E");
		ReplacePVR("MISSION_S_ISEKI_F");
		ReplacePVR("MISSION_S_ISEKI_G");
		ReplacePVR("MISSION_S_ISEKI_S");
		ReplacePVR("MISSION_S_RINGBOX");
		ReplacePVR("MISSION_S_RINGBOX_E");
		ReplacePVR("MISSION_S_RINGBOX_F");
		ReplacePVR("MISSION_S_RINGBOX_G");
		ReplacePVR("MISSION_S_RINGBOX_S");
		ReplacePVR("MISSION_S_TAILS");
		ReplacePVR("MISSION_S_TAILS_E");
		ReplacePVR("MISSION_S_TAILS_F");
		ReplacePVR("MISSION_S_TAILS_G");
		ReplacePVR("MISSION_S_TAILS_S");
		ReplacePVR("MISSION_T_BOX");
		ReplacePVR("MISSION_T_BOX_E");
		ReplacePVR("MISSION_T_BOX_F");
		ReplacePVR("MISSION_T_BOX_G");
		ReplacePVR("MISSION_T_BOX_S");
		ReplacePVR("MISSION_T_EMECASINO");
		ReplacePVR("MISSION_T_EMECASINO_E");
		ReplacePVR("MISSION_T_EMECASINO_F");
		ReplacePVR("MISSION_T_EMECASINO_G");
		ReplacePVR("MISSION_T_EMECASINO_S");
		ReplacePVR("MISSION_T_EMESNOW");
		ReplacePVR("MISSION_T_EMESNOW_E");
		ReplacePVR("MISSION_T_EMESNOW_F");
		ReplacePVR("MISSION_T_EMESNOW_G");
		ReplacePVR("MISSION_T_EMESNOW_S");
		ReplacePVR("MISSION_T_EMEWIND");
		ReplacePVR("MISSION_T_EMEWIND_E");
		ReplacePVR("MISSION_T_EMEWIND_F");
		ReplacePVR("MISSION_T_EMEWIND_G");
		ReplacePVR("MISSION_T_EMEWIND_S");
		ReplacePVR("MISSION_T_FASTEGG");
		ReplacePVR("MISSION_T_FASTEGG_E");
		ReplacePVR("MISSION_T_FASTEGG_F");
		ReplacePVR("MISSION_T_FASTEGG_G");
		ReplacePVR("MISSION_T_FASTEGG_S");
		ReplacePVR("MISSION_T_FASTSONIC");
		ReplacePVR("MISSION_T_FASTSONIC_E");
		ReplacePVR("MISSION_T_FASTSONIC_F");
		ReplacePVR("MISSION_T_FASTSONIC_G");
		ReplacePVR("MISSION_T_FASTSONIC_S");
		ReplacePVR("MISSION_T_MISS");
		ReplacePVR("MISSION_T_MISS_E");
		ReplacePVR("MISSION_T_MISS_F");
		ReplacePVR("MISSION_T_MISS_G");
		ReplacePVR("MISSION_T_MISS_S");
		ReplacePVR("MISSION_T_RINGEGG");
		ReplacePVR("MISSION_T_RINGEGG_E");
		ReplacePVR("MISSION_T_RINGEGG_F");
		ReplacePVR("MISSION_T_RINGEGG_G");
		ReplacePVR("MISSION_T_RINGEGG_S");
		ReplacePVR("MISSION_T_RINGSONIC");
		ReplacePVR("MISSION_T_RINGSONIC_E");
		ReplacePVR("MISSION_T_RINGSONIC_F");
		ReplacePVR("MISSION_T_RINGSONIC_G");
		ReplacePVR("MISSION_T_RINGSONIC_S");
		ReplacePVR("M_STAGE01");
		ReplacePVR("M_STAGE01_E");
		ReplacePVR("M_STAGE02");
		ReplacePVR("M_STAGE02_E");
		ReplacePVR("M_STAGE03");
		ReplacePVR("M_STAGE03_E");
		ReplacePVR("M_STAGE04");
		ReplacePVR("M_STAGE04_E");
		ReplacePVR("M_STAGE05");
		ReplacePVR("M_STAGE05_E");
		ReplacePVR("SCORE_BACK");
		ReplacePVR("SCORE_BACK0");
		ReplacePVR("SCORE_BACK1");
		ReplacePVR("SONIC_EMBLM01");
		ReplacePVR("SONIC_EMBLM03");
		ReplacePVR("SONIC_EMBLM04");
		ReplacePVR("SONIC_EMBLM05");
		ReplacePVR("STAFFROLL_TXT");
		ReplacePVR("ST_016S_HPBAR");
		ReplacePVR("ST_064S_SCORE");
		ReplacePVR("ST_128S_HPGEJI");
		ReplacePVR("ST_STAGE01");
		ReplacePVR("ST_STAGE01_E");
		ReplacePVR("ST_STAGE02");
		ReplacePVR("ST_STAGE02_E");
		ReplacePVR("ST_STAGE03");
		ReplacePVR("ST_STAGE03_E");
		ReplacePVR("ST_STAGE04");
		ReplacePVR("ST_STAGE04_E");
		ReplacePVR("ST_STAGE05");
		ReplacePVR("ST_STAGE05_E");
		ReplacePVR("S_STAGE01");
		ReplacePVR("S_STAGE01_E");
		ReplacePVR("S_STAGE02");
		ReplacePVR("S_STAGE02_E");
		ReplacePVR("S_STAGE03");
		ReplacePVR("S_STAGE03_E");
		ReplacePVR("S_STAGE04");
		ReplacePVR("S_STAGE04_E");
		ReplacePVR("S_STAGE05");
		ReplacePVR("S_STAGE05_E");
		ReplacePVR("S_STAGE06");
		ReplacePVR("S_STAGE06_E");
		ReplacePVR("S_STAGE07");
		ReplacePVR("S_STAGE07_E");
		ReplacePVR("S_STAGE08");
		ReplacePVR("S_STAGE08_E");
		ReplacePVR("S_STAGE09");
		ReplacePVR("S_STAGE09_E");
		ReplacePVR("S_STAGE10");
		ReplacePVR("S_STAGE10_E");
		ReplacePVR("T_EGGCARRIER");
		ReplacePVR("T_EGGCARRIER_E");
		ReplacePVR("T_MISTICRUIN");
		ReplacePVR("T_MISTICRUIN_E");
		ReplacePVR("T_STATIONSQUARE");
		ReplacePVR("T_STATIONSQUARE_E");
	}
	//File icon
	if (!DLLLoaded_HDGUI) WriteCall((void*)0x5092A1, DrawTexture_Hook); 
	else WriteCall((void*)0x5092A1, FileIcon_Hook);
	//Various fixes already included in HD GUI
	if (!DLLLoaded_HDGUI)
	{
		//Screen fade fixes
		WriteData((float**)0x433385, &f480_Fixed); //Screen fade resolution
		WriteData((float**)0x4333A6, &f640_Fixed); //Screen fade resolution
		WriteData((float*)0x4333A0, -1.0f); //Screen fade for tutorials
		WriteData((float*)0x4333AE, -1.0f); //Screen fade for tutorials
		WriteCall((void*)0x42BF52, ScreenFadeFix);
		WriteData<1>((char*)0x40BE40, 0xC3); //Disable "Now saving..."
		WriteData<5>((char*)0x40BE0D, 0x90); //Disable "Now loading..."
		WriteData<5>((char*)0x503438, 0x90); //Disable "Now loading..."
		WriteData<5>((char*)0x50346D, 0x90); //Disable "Now loading..."
		//Character select screen fixes
		if (!AssumeOIT)
		{
			WriteCall((void*)0x511AD0, RetrievePlayerSelectStuff); //Player select text in character select screen
			WriteCall((void*)0x511C76, RetrieveBottomThingStuff); //Bottom thing in character select screen
			WriteCall((void*)0x511B3B, DrawShittyTextures); //Render stuff that refuses to render properly otherwise
		}
		WriteCall((void*)0x511A8B, DisplayScreenTexture_AlwaysTop); //Move the "Select your character" text to top
		WriteData<5>((void*)0x511C18, 0x90); //Disable ZFunc stuff to prevent character model overlap issues
		//Shadow blending fixes
		WriteCall((void*)0x457F2F, DrawSprite_Hook);
		WriteCall((void*)0x431D37, DrawShadow_Hook);
		WriteCall((void*)0x506EFF, DrawShadow_Hook);
		WriteCall((void*)0x50D8B3, DrawShadow_Hook);
		WriteCall((void*)0x50B584, DrawMainMenuShadow_Hook); //Main menu shadow
		WriteCall((void*)0x50B61A, DrawMainMenuShadow_Hook); //Main menu (trial) shadow
		WriteCall((void*)0x508FFD, DrawTexture_Hook); //Sound test icon
		WriteCall((void*)0x509130, DrawTexture_Hook); //Sonic icon background
		WriteCall((void*)0x509191, DrawTexture_Hook); //Sonic icon
		WriteCall((void*)0x509439, DrawTexture_Hook); //Languages icon
		WriteCall((void*)0x50952F, DrawTexture_Hook); //Rumble icon
		WriteCall((void*)0x50782A, DrawTexture_Hook); //AVA_SAN triangle shadow
	}
	//Main code
	//Kill Cream
	if (RemoveCream) WriteData<1>((void*)0x6353A0, 0xC3u);
	//Title screen stuff
	if (!DisableSA1TitleScreen)
	{
		NumberOfSaves = FindSaveFilesLite();
		PrintDebug("Number of saves: %d\n", NumberOfSaves);
		TitleBackOverlayColor.color = 0x99FFFFFF;
		//Disable native PVMs
		//AVA_GTITLE_0_E texlist is always 10 textures
		ResizeTextureList(&ava_gtitle0_e_TEXLIST, textures_ava_gtitle0_e);
		//Title screen BG texlist is always 8 textures
		ResizeTextureList(&ava_title_back_e_TEXLIST, textures_ava_title_back_e);
		if (HorizontalStretch == 1.0f)
		{
			//AVA_TITLE_CMN_SMALLS is loaded in place of AVA_TITLE_BACK_E (Main menu background)
			GUITextures_Japanese[20].Name = "AVA_TITLE_CMN_SMALLS";
			GUITextures_English[20].Name = "AVA_TITLE_CMN_SMALLS";
			GUITextures_French[20].Name = "AVA_TITLE_CMN_SMALLS";
			GUITextures_Spanish[20].Name = "AVA_TITLE_CMN_SMALLS";
			GUITextures_German[20].Name = "AVA_TITLE_CMN_SMALLS";
			//AVA_GTITLE0_ES_640 is loaded in place of AVA_GTITLE0_E (Logo)
			GUITextures_Japanese[17].Name = "AVA_GTITLE0_ES_640";
			GUITextures_English[17].Name = "AVA_GTITLE0_ES_640";
			GUITextures_French[17].Name = "AVA_GTITLE0_ES_640";
			GUITextures_Spanish[17].Name = "AVA_GTITLE0_ES_640";
			GUITextures_German[17].Name = "AVA_GTITLE0_ES_640";
			if (RipplesOn)
			{
				//AVA_TITLE_CMN_SMALLX is loaded in place of AVA_TITLE_CMN_E (only when ripples are enabled)
				GUITextures_Japanese[18].Name = "AVA_TITLE_CMN_SMALLX";
				GUITextures_English[18].Name = "AVA_TITLE_CMN_SMALLX";
				GUITextures_French[18].Name = "AVA_TITLE_CMN_SMALLX";
				GUITextures_Spanish[18].Name = "AVA_TITLE_CMN_SMALLX";
				GUITextures_German[18].Name = "AVA_TITLE_CMN_SMALLX";
				
				ResizeTextureList(&ava_title_cmn_TEXLIST, textures_ava_title_cmn);
				TitleScreenIndices[1] = 18;
			}
			else
			{
				//Otherwise it's not loaded and AVA_TITLE_CMNS is loaded instead
				TitleScreenIndices[1] = 20;
			}
		}
		else
		{
			//AVA_TITLE_CMNS is loaded in place of AVA_TITLE_BACK_E (Main menu background)
			//AVA_GTITLE0_ES is loaded in place of AVA_GTITLE0_E (Logo)
			GUITextures_Japanese[20].Name = "AVA_TITLE_CMNS";
			GUITextures_English[20].Name = "AVA_TITLE_CMNS";
			GUITextures_French[20].Name = "AVA_TITLE_CMNS";
			GUITextures_Spanish[20].Name = "AVA_TITLE_CMNS";
			GUITextures_German[20].Name = "AVA_TITLE_CMNS";
			GUITextures_Japanese[17].Name = "AVA_GTITLE0_ES";
			GUITextures_English[17].Name = "AVA_GTITLE0_ES";
			GUITextures_French[17].Name = "AVA_GTITLE0_ES";
			GUITextures_Spanish[17].Name = "AVA_GTITLE0_ES";
			GUITextures_German[17].Name = "AVA_GTITLE0_ES";
			if (RipplesOn)
			{
				//AVA_TITLE_CMNX is loaded in place of AVA_TITLE_CMN_E (only when ripples are enabled)
				GUITextures_Japanese[18].Name = "AVA_TITLE_CMNX";
				GUITextures_English[18].Name = "AVA_TITLE_CMNX";
				GUITextures_French[18].Name = "AVA_TITLE_CMNX";
				GUITextures_Spanish[18].Name = "AVA_TITLE_CMNX";
				GUITextures_German[18].Name = "AVA_TITLE_CMNX";
				ResizeTextureList(&ava_title_cmn_TEXLIST, textures_ava_title_cmn);
				TitleScreenIndices[1] = 18;
			}
			else
			{
				//Otherwise it's not loaded and AVA_TITLE_CMNS is loaded instead
				TitleScreenIndices[1] = 20;
			}
		}
		//Main menu background
		WriteJump((void*)0x50BA90, DrawAVA_TITLE_BACK_E_DC);
		//Various transition stuff
		BlackFadeout.color = 0x00000000;
		TitleBGTransparency.argb.r = 255;
		TitleBGTransparency.argb.g = 255;
		TitleBGTransparency.argb.b = 255;
		SonicTeamTransparency.argb.r = 255;
		SonicTeamTransparency.argb.g = 255;
		SonicTeamTransparency.argb.b = 255;
		transitionmode = -1;
		LogoScaleXT = LogoScaleX * 2.0f;
		LogoScaleYT = LogoScaleY * 2.0f;
		TitleBGTransparency.argb.a = 0;
		SonicTeamTransparency.argb.a = 0;
		SonicTeamAlpha = -256;
		BlackFadeout.argb.a = 0;
		WriteCall((void*)0x503DD8, PlayReturnSound_EnableTransition);
		WriteCall((void*)0x50E386, PlayStartSound_EnableTransition);
		WriteCall((void*)0x50E3E2, DelayTransitionHook);
		//Transitions and other fixes
		WriteCall((void*)0x504F9C, FileSelectGreenRectHook);
		WriteCall((void*)0x504C38, DrawStringHook);
		WriteCall((void*)0x504D2C, DrawStringHook);
		WriteCall((void*)0x504B5F, DrawStringHook);
		WriteCall((void*)0x5077D1, FileSelect_VtxColorB_Hook); //AVA_SAN
		WriteCall((void*)0x504830, FileSelect_VtxColorB_Hook); //Character spheres
		WriteCall((void*)0x504143, FileSelect_VtxColorB_Hook); //Emblem count 1
		WriteCall((void*)0x507454, FileSelect_VtxColorB_Hook); //Emblem count 2
		WriteCall((void*)0x5076DC, FileSelect_VtxColorB_Hook); //Emblem count 3
		WriteCall((void*)0x507261, CharacterName_VtxColorB_Hook); //Character name 1
		WriteCall((void*)0x5071F2, FileSelect_VtxColorB_Hook); //Character name 2
		WriteCall((void*)0x503E69, FileSelect_VtxColorB_Hook); //Last Adventure Field
		WriteCall((void*)0x503F09, FileSelect_VtxColorB_Hook); //Stage Completed
		WriteCall((void*)0x50400B, FileSelect_VtxColorB_Hook); //Play Time 1
		WriteCall((void*)0x507454, FileSelect_VtxColorB_Hook); //Play Time 2
		WriteCall((void*)0x50557D, FileSelect_AVA_BACK_Hook);
		WriteCall((void*)0x50558D, FileSelectVtxColorHook); //FileSelect_Display
		WriteCall((void*)0x50BCC8, MainMenuVtxColorHook); //MainMenu_Display
		//PVM indices to load in different menus
		GUIPVMIndices[2] = (int*)&FileSelectIndices;
		GUIPVMIndices[5] = (int*)&TitleScreenIndices;
		GUIPVMIndices[6] = (int*)&MainMenuIndices;
	}
	//Pause box stuff
	WriteCall((void*)0x458232, DrawPauseSelectionBox_DC);
	WriteCall((void*)0x4585DA, DrawPauseBox_DC); //Main pause
	WriteCall((void*)0x459085, DrawPauseBox_DC); //Camera
	WriteCall((void*)0x458DBB, DrawPauseBox_DC); //Key remap
	WriteData((float*)0x458125, 1.0f); //Selection box B
	WriteData((float*)0x45812A, 0.7f); //Selection box G
	WriteData((float*)0x45812F, 0.0f); //Selection box R
	//Demos
	if (RestoreDemos == 1)
	{
		ReplaceGeneric("K_AMY.BIN", "K_AMY_DC.BIN");
		ReplaceGeneric("K_BIG.BIN", "K_BIG_DC.BIN");
		ReplaceGeneric("K_BIG_PAL.BIN", "K_BIG_PAL_DC.BIN");
		ReplaceGeneric("K_E102.BIN", "K_E102_DC.BIN");
		ReplaceGeneric("K_KNUCK.BIN", "K_KNUCK_DC.BIN");
		ReplaceGeneric("K_MILES.BIN", "K_MILES_DC.BIN");
		ReplaceGeneric("K_SONIC.BIN", "K_SONIC_DC.BIN");
		ReplaceGeneric("K_SONIC_PAL.BIN", "K_SONIC_PAL_DC.BIN");
	}
	else if (RestoreDemos == 2)
	{
		ReplaceGeneric("K_AMY.BIN", "K_AMY_JP.BIN");
		ReplaceGeneric("K_BIG.BIN", "K_BIG_JP.BIN");
		ReplaceGeneric("K_E102.BIN", "K_E102_JP.BIN");
		ReplaceGeneric("K_KNUCK.BIN", "K_KNUCK_JP.BIN");
		ReplaceGeneric("K_MILES.BIN", "K_MILES_JP.BIN");
		ReplaceGeneric("K_SONIC.BIN", "K_SONIC_JP.BIN");
	}
	else if (RestoreDemos == 3)
	{
		ReplaceGeneric("K_AMY.BIN", "K_AMY_GC.BIN");
		ReplaceGeneric("K_BIG.BIN", "K_BIG_GC.BIN");
		ReplaceGeneric("K_BIG_PAL.BIN", "K_BIG_PAL_GC.BIN");
		ReplaceGeneric("K_E102.BIN", "K_E102_GC.BIN");
		ReplaceGeneric("K_KNUCK.BIN", "K_KNUCK_GC.BIN");
		ReplaceGeneric("K_MILES.BIN", "K_MILES_GC.BIN");
		ReplaceGeneric("K_SONIC.BIN", "K_SONIC_GC.BIN");
		ReplaceGeneric("K_SONIC_PAL.BIN", "K_SONIC_PAL_GC.BIN");
	}
}

void Branding_OnFrame()
{
	if (GameMode != 0 && !DemosDone) CheckAndRestoreDemos();
	//Demo player
	if (GameState == 15 && ControlMode == 1 && Demo_Enabled && Demo_Cutscene == -1) DemoFrame++;
	//Skip pause menu confirmation prompt
	if (RemoveQuitPrompt && QuitFromPause_Selection == 2)
	{
		if (QuitSoundTimer == 0)
		{
			QuitSoundTimer = -1;
			QuitFromPause_Selection = 3;
		}
		else QuitSoundTimer--;
	}
	//Update the save file count for the options/file select transition
	if (NumberOfSaves_Current != 0) NumberOfSaves = NumberOfSaves_Current;
	whiteoverlaydrawn = false;
	//This game is a hardcoded piece of shit
	if (!DLLLoaded_HDGUI)
	{
		if (TextLanguage == 3) PadManuXOffset_General = 230;
		if (TextLanguage == 4 && GetCharacterSelection() != 4) PadManuXOffset_General = 220;
		if (TextLanguage == 4 && GetCharacterSelection() == 4) PadManuXOffset_General = 205;
		if (TextLanguage != 3 && TextLanguage != 4) PadManuXOffset_General = 205;
		if (GetCharacterSelection() == 2) PadManuXOffset_F = 170; else PadManuXOffset_F = 175;
	}
	if (GameMode != GameModes_Menu && transitionmode == 2)
	{
		transitionmode = 3;
	}
	if (GameMode == GameModes_Menu && DLLLoaded_HDGUI)
	{
		if (Options_ArrowScale > 0.5f) Options_ArrowScaleAmount = -0.02f;
		if (Options_ArrowScale < 0.0f) Options_ArrowScaleAmount = 0.02f;
		Options_ArrowScale = Options_ArrowScale + Options_ArrowScaleAmount;
	}
	if (!DisableSA1TitleScreen && GameState == 21)
	{
		if (titleframe == titledrawn) titleframe++;
		if (logoframe == logodrawn) logoframe++;
		if (startframe == startdrawn) startframe++;
	}
}