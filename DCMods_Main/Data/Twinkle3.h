#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008DAE0[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008DB1C[] = {
	4, 0, 10, 8, 9
};

extern "C" __declspec(dllexport) Sint16 poly_0008DB26[] = {
	0x8000u | 6, 10, 9, 1, 7, 2, 6
};

extern "C" __declspec(dllexport) Sint16 poly_0008DB34[] = {
	0x8000u | 8, 8, 5, 9, 11, 7, 4, 6, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008DB48[] = {
	{ 0, 255 },
	{ 0 },
	{ 3825, 255 },
	{ 3825, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008DB58[] = {
	{ 510, -1274 },
	{ 0, -418 },
	{ 1348, -1098 },
	{ 856, -251 },
	{ 2040, -422 },
	{ 1631, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008DB70[] = {
	{ 0, 254 },
	{ 0, -510 },
	{ 31, 254 },
	{ 31, -510 },
	{ 510, 254 },
	{ 510, -510 },
	{ 1020, 254 },
	{ 1020, -510 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008DB90[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0008DB1C, NULL, NULL, NULL, uv_0008DB48, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0008DB26, NULL, NULL, NULL, uv_0008DB58, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0008DB34, NULL, NULL, NULL, uv_0008DB70, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008DBD8[] = {
	{ -54.9679f, -50.00001f, 80.73743f },
	{ 36.72327f, -50, 61.07056f },
	{ 107.434f, -50, -9.640137f },
	{ 65.59946f, 50, -80.73743f },
	{ -13.78885f, 50, -27.69189f },
	{ -107.4339f, 50, -9.064696f },
	{ 65.5994f, -50, -80.73743f },
	{ -13.78889f, -50, -27.69191f },
	{ -107.4339f, -50, -9.064696f },
	{ -101.5811f, -50, -10.2289f },
	{ -49.2372f, -50.00001f, 79.50824f },
	{ -101.5811f, 50, -10.2289f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008DC68[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.5555699f, 0, 0.83147f },
	{ 0.382684f, 0, 0.92388f },
	{ 0.195091f, 0, 0.980785f },
	{ 0.400063f, 0.693876f, 0.5987369f },
	{ 0.251477f, 0.753767f, 0.60712f },
	{ 0.153204f, 0.619119f, 0.7702079f },
	{ 0.13795f, 0.7071069f, 0.6935199f },
	{ 0, 1, 0 },
	{ 0.195091f, 0, 0.980785f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008DCF8 = { vertex_0008DBD8, normal_0008DC68, LengthOfArray<Sint32>(vertex_0008DBD8), meshlist_0008DB90, matlist_0008DAE0, LengthOfArray<Uint16>(meshlist_0008DB90), LengthOfArray<Uint16>(matlist_0008DAE0), { 0.000023f, -0.00004f, -0.00008f }, 134.3897f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008DD20 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008DCF8, 397.434f, 150, 533.7708f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008DD54[] = {
	{ { 0x00B2B2B2 }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008DD68[] = {
	0x8000u | 26, 11, 0, 12, 1, 13, 2, 14, 3, 24, 22, 25, 23, 15, 4, 16, 5, 17, 6, 18, 7, 19, 8, 20, 9, 21, 10
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008DDA0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0008DD68, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008DDB8[] = {
	{ -300, 0, -450 },
	{ -299.9999f, 0, -360 },
	{ -310, 0, -350 },
	{ -340, 0, -350 },
	{ -340, 0, -200 },
	{ -310, 0, -200 },
	{ -299.9999f, 0, -190 },
	{ -300, 0, -90.00001f },
	{ -310, 0, -80 },
	{ -340, 0, -80 },
	{ -350, 0, -70 },
	{ -300, 100, -450 },
	{ -299.9999f, 100, -360 },
	{ -310, 100, -350 },
	{ -340, 100, -350 },
	{ -340, 100, -200 },
	{ -310, 100, -200 },
	{ -299.9999f, 100, -190 },
	{ -300, 100, -90.00001f },
	{ -310, 100, -80 },
	{ -340, 100, -80 },
	{ -350, 100, -70 },
	{ -349.9999f, 0, -340 },
	{ -350, 0, -210 },
	{ -350, 100, -340 },
	{ -350, 100, -210 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008DEF0[] = {
	{ 1, 0, -0.00001f },
	{ 0.923879f, 0, 0.382685f },
	{ 0.382682f, 0, 0.92388f },
	{ 0.382684f, 0, 0.923879f },
	{ 0.382683f, 0, -0.92388f },
	{ 0.382682f, 0, -0.92388f },
	{ 0.923879f, 0, -0.382684f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.382684f, 0, 0.923879f },
	{ 0.382683f, 0, 0.92388f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 1, 0, -0.00001f },
	{ 0.923879f, 0, 0.382685f },
	{ 0.382682f, 0, 0.92388f },
	{ 0.382684f, 0, 0.923879f },
	{ 0.382683f, 0, -0.92388f },
	{ 0.382682f, 0, -0.92388f },
	{ 0.923879f, 0, -0.382684f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.382684f, 0, 0.923879f },
	{ 0.382683f, 0, 0.92388f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.92388f, 0, -0.382683f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.92388f, 0, -0.382683f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008E028 = { vertex_0008DDB8, normal_0008DEF0, LengthOfArray<Sint32>(vertex_0008DDB8), meshlist_0008DDA0, matlist_0008DD54, LengthOfArray<Uint16>(meshlist_0008DDA0), LengthOfArray<Uint16>(matlist_0008DD54), { -324.9999f, 50, -260 }, 196.4688f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008E050 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008E028, 170, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008E084[] = {
	{ { 0x00B2B2B2 }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008E098[] = {
	0x8000u | 32, 2, 1, 3, 0, 7, 6, 10, 9, 13, 12, 30, 31, 35, 33, 16, 15, 19, 18, 21, 20, 23, 22, 25, 24, 27, 26, 36, 37, 41, 40, 29, 28,
	0x8000u | 16, 1, 5, 0, 4, 6, 8, 9, 11, 12, 14, 31, 32, 33, 34, 15, 17,
	4, 40, 28, 39, 38
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008E108[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0008E098, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008E120[] = {
	{ -370, 90, 0 },
	{ -370, 90, -40 },
	{ -370, 200, -40 },
	{ -370, 200, 0 },
	{ -370, 10, 0 },
	{ -370, 10, -40 },
	{ -370, 90, 90 },
	{ -370, 200, 90 },
	{ -370, 10, 90 },
	{ -360, 90, 100 },
	{ -360, 200, 100 },
	{ -360, 10, 100 },
	{ -330, 90, 100 },
	{ -330, 200, 100 },
	{ -330, 10, 100 },
	{ -330, 90, 150 },
	{ -330, 200, 150 },
	{ -330, 10, 150 },
	{ -360, 90, 150 },
	{ -360, 200, 150 },
	{ -370, 90, 160 },
	{ -370, 200, 160 },
	{ -370, 90, 290 },
	{ -370, 200, 290 },
	{ -360, 90, 300 },
	{ -360, 200, 300 },
	{ -330, 90, 299.9999f },
	{ -330, 200, 299.9999f },
	{ -320, 90, 440 },
	{ -320, 200, 440 },
	{ -320, 200, 110 },
	{ -320, 90, 110 },
	{ -320, 10, 110 },
	{ -320, 90, 140 },
	{ -320, 10, 140 },
	{ -320, 200, 140 },
	{ -317, 200, 310 },
	{ -317, 90, 310 },
	{ -320, 50, 440 },
	{ -320, 50, 310 },
	{ -320, 90, 310 },
	{ -320, 200, 310 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008E318[] = {
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.92388f, 0, -0.382683f },
	{ 0.92388f, 0, -0.382683f },
	{ 0.92388f, 0, -0.382683f },
	{ 0.382684f, 0, -0.923879f },
	{ 0.382684f, 0, -0.923879f },
	{ 0.382684f, 0, -0.923879f },
	{ 0.382683f, 0, -0.92388f },
	{ 0.382683f, 0, -0.92388f },
	{ 0.382683f, 0, -0.92388f },
	{ 0.505449f, 0, 0.862857f },
	{ 0.382683f, 0, 0.92388f },
	{ 0.707106f, 0, 0.7071069f },
	{ 0.382683f, 0, 0.92388f },
	{ 0.382683f, 0, 0.92388f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.92388f, 0, -0.382683f },
	{ 0.92388f, 0, -0.382683f },
	{ 0.382683f, 0, -0.92388f },
	{ 0.382683f, 0, -0.92388f },
	{ 0.322007f, 0, -0.946737f },
	{ 0.322007f, 0, -0.946737f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.923879f, 0, -0.382684f },
	{ 0.923879f, 0, -0.382684f },
	{ 0.923879f, 0, -0.382684f },
	{ 0.923879f, 0, 0.382684f },
	{ 0.923879f, 0, 0.382684f },
	{ 0.923879f, 0, 0.382684f },
	{ 0.946737f, 0, 0.322008f },
	{ 0.946737f, 0, 0.322008f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.8944269f, 0, 0.447213f },
	{ 0.7071069f, 0, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008E510 = { vertex_0008E120, normal_0008E318, LengthOfArray<Sint32>(vertex_0008E120), meshlist_0008E108, matlist_0008E084, LengthOfArray<Uint16>(meshlist_0008E108), LengthOfArray<Uint16>(matlist_0008E084), { -343.5f, 105, 200 }, 258.1182f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008E538 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008E510, 190, 0, -30, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008E56C[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008E5A8[] = {
	0x8000u | 14, 35, 28, 36, 29, 37, 30, 38, 31, 39, 32, 40, 33, 41, 34
};

extern "C" __declspec(dllexport) Sint16 poly_0008E5C6[] = {
	14, 16, 14, 17, 15, 19, 18, 21, 20, 23, 22, 25, 24, 27, 26,
	0x8000u | 14, 12, 14, 10, 15, 8, 18, 6, 20, 4, 22, 2, 24, 0, 26,
	0x8000u | 14, 16, 13, 17, 11, 19, 9, 21, 7, 23, 5, 25, 3, 27, 1
};

extern "C" __declspec(dllexport) Sint16 poly_0008E620[] = {
	0x8000u | 14, 0, 34, 2, 33, 4, 32, 6, 31, 8, 30, 10, 29, 12, 28,
	0x8000u | 14, 41, 1, 40, 3, 39, 5, 38, 7, 37, 9, 36, 11, 35, 13
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008E65C[] = {
	{ 765, -1275 },
	{ 0, -1274 },
	{ 765, -1020 },
	{ 0, -1020 },
	{ 765, -764 },
	{ 0, -764 },
	{ 765, -508 },
	{ 0, -508 },
	{ 765, -254 },
	{ 0, -254 },
	{ 765, 0 },
	{ 0 },
	{ 765, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008E694[] = {
	{ -1275, 765 },
	{ -1275, 0 },
	{ -1020, 765 },
	{ -1020, 0 },
	{ -764, 765 },
	{ -765, 0 },
	{ -508, 765 },
	{ -508, 0 },
	{ -254, 765 },
	{ -255, 0 },
	{ 0, 765 },
	{ 0 },
	{ 255, 765 },
	{ 254, 0 },
	{ 0, 255 },
	{ 0, -255 },
	{ 338, 255 },
	{ 338, -255 },
	{ 680, 255 },
	{ 680, -255 },
	{ 1020, 255 },
	{ 1020, -255 },
	{ 1360, 255 },
	{ 1360, -255 },
	{ 1699, 255 },
	{ 1699, -255 },
	{ 2040, 255 },
	{ 2040, -255 },
	{ 1275, -255 },
	{ 1275, 255 },
	{ 1061, -255 },
	{ 1061, 255 },
	{ 848, -255 },
	{ 848, 255 },
	{ 637, -255 },
	{ 637, 255 },
	{ 424, -255 },
	{ 424, 255 },
	{ 212, -255 },
	{ 212, 255 },
	{ 0, -255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008E73C[] = {
	{ 3825, 0 },
	{ 3825, 255 },
	{ 3187, 0 },
	{ 3187, 255 },
	{ 2550, 0 },
	{ 2550, 255 },
	{ 1912, 0 },
	{ 1912, 255 },
	{ 1275, 0 },
	{ 1275, 255 },
	{ 637, 0 },
	{ 637, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0 },
	{ 340, 255 },
	{ 340, 0 },
	{ 678, 255 },
	{ 678, 0 },
	{ 1019, 255 },
	{ 1019, 0 },
	{ 1359, 255 },
	{ 1359, 0 },
	{ 1699, 255 },
	{ 1699, 0 },
	{ 2040, 255 },
	{ 2040, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008E7AC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0008E5A8, NULL, NULL, NULL, uv_0008E65C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_0008E5C6, NULL, NULL, NULL, uv_0008E694, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0008E620, NULL, NULL, NULL, uv_0008E73C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008E7F4[] = {
	{ -0.00004f, -15, -100 },
	{ -0.00004f, -15, -50 },
	{ -25.8819f, -15, -96.59258f },
	{ -12.94095f, -15, -48.29626f },
	{ -50, -15, -86.60253f },
	{ -25, -15, -43.30127f },
	{ -70.71067f, -15, -70.71069f },
	{ -35.35534f, -15, -35.35535f },
	{ -86.60253f, -15, -50 },
	{ -43.30127f, -15, -25 },
	{ -96.59258f, -15, -25.8819f },
	{ -48.29629f, -15, -12.94092f },
	{ -100, -15, 0 },
	{ -50, -15, 0 },
	{ -100, 20, 0 },
	{ -96.59258f, 20, -25.8819f },
	{ -50, 20, 0 },
	{ -48.29629f, 20, -12.94092f },
	{ -86.60253f, 20, -50 },
	{ -43.30127f, 20, -25 },
	{ -70.71067f, 20, -70.71069f },
	{ -35.35534f, 20, -35.35535f },
	{ -50, 20, -86.60253f },
	{ -25, 20, -43.30127f },
	{ -25.8819f, 20, -96.59258f },
	{ -12.94095f, 20, -48.29626f },
	{ -0.00004f, 20, -100 },
	{ -0.00004f, 20, -50 },
	{ -100, -20, 0 },
	{ -96.59258f, -20, -25.8819f },
	{ -86.60253f, -20, -50 },
	{ -70.71067f, -20, -70.71069f },
	{ -50, -20, -86.60253f },
	{ -25.8819f, -20, -96.59258f },
	{ -0.00004f, -20, -100 },
	{ -50, -20, 0 },
	{ -48.29629f, -20, -12.94092f },
	{ -43.30127f, -20, -25 },
	{ -35.35534f, -20, -35.35535f },
	{ -25, -20, -43.30127f },
	{ -12.94095f, -20, -48.29626f },
	{ -0.00004f, -20, -50 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008E9EC[] = {
	{ 0.130526f, 0, 0.9914449f },
	{ -0.130528f, 0, -0.9914449f },
	{ 0.258819f, 0, 0.965926f },
	{ -0.258819f, 0, -0.965926f },
	{ 0.5f, 0, 0.866026f },
	{ -0.499999f, 0, -0.866026f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.866026f, 0, 0.5f },
	{ -0.866026f, 0, -0.5f },
	{ 0.965926f, 0, 0.258819f },
	{ -0.965926f, 0, -0.258819f },
	{ 0.9914449f, 0, 0.130526f },
	{ -0.9914449f, 0, -0.130526f },
	{ 0.730848f, -0.675725f, 0.096218f },
	{ 0.709235f, -0.678874f, 0.190039f },
	{ -0.6724769f, -0.734803f, -0.088533f },
	{ -0.652124f, -0.7377f, -0.174736f },
	{ 0.635883f, -0.678874f, 0.367127f },
	{ -0.584678f, -0.7377f, -0.337564f },
	{ 0.519196f, -0.678874f, 0.519196f },
	{ -0.477388f, -0.7377f, -0.477388f },
	{ 0.367127f, -0.678875f, 0.635883f },
	{ -0.337563f, -0.7377f, -0.5846789f },
	{ 0.190039f, -0.678874f, 0.709235f },
	{ -0.174736f, -0.7377f, -0.652124f },
	{ 0.096218f, -0.675725f, 0.730848f },
	{ -0.088535f, -0.734804f, -0.6724769f },
	{ 0.730848f, 0.675725f, 0.096218f },
	{ 0.709235f, 0.678874f, 0.190039f },
	{ 0.635883f, 0.678874f, 0.367127f },
	{ 0.519196f, 0.678874f, 0.519196f },
	{ 0.367127f, 0.678874f, 0.635883f },
	{ 0.190039f, 0.678874f, 0.709235f },
	{ 0.096218f, 0.675725f, 0.730848f },
	{ -0.6724769f, 0.734803f, -0.088533f },
	{ -0.652124f, 0.7377f, -0.174736f },
	{ -0.5846789f, 0.7377f, -0.337564f },
	{ -0.477388f, 0.7377f, -0.477388f },
	{ -0.337563f, 0.7377f, -0.5846789f },
	{ -0.174736f, 0.7377f, -0.652124f },
	{ -0.088535f, 0.734804f, -0.6724769f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008EBE4 = { vertex_0008E7F4, normal_0008E9EC, LengthOfArray<Sint32>(vertex_0008E7F4), meshlist_0008E7AC, matlist_0008E56C, LengthOfArray<Uint16>(meshlist_0008E7AC), LengthOfArray<Uint16>(matlist_0008E56C), { -50, 0, -50 }, 70.71067f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008EC0C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008EBE4, -30, 20, -500, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008EC40[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008EC7C[] = {
	0x8000u | 5, 12, 10, 11, 9, 8
};

extern "C" __declspec(dllexport) Sint16 poly_0008EC88[] = {
	0x8000u | 5, 3, 4, 5, 6, 7,
	0x8000u | 6, 3, 2, 4, 1, 6, 0
};

extern "C" __declspec(dllexport) Sint16 poly_0008ECA2[] = {
	0x8000u | 6, 10, 0, 9, 1, 8, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008ECB0[] = {
	{ 1530, 255 },
	{ 1530, -510 },
	{ 1275, 255 },
	{ 1275, -510 },
	{ 1020, -510 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008ECC4[] = {
	{ -255, 0 },
	{ 0 },
	{ 0, 765 },
	{ 254, 0 },
	{ 255, 765 },
	{ 1360, -255 },
	{ 1360, 255 },
	{ 1699, -255 },
	{ 1699, 255 },
	{ 2040, -255 },
	{ 2040, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008ECF0[] = {
	{ 4590, 255 },
	{ 4590, 0 },
	{ 3825, 255 },
	{ 3825, 0 },
	{ 3060, 255 },
	{ 3060, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008ED08[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0008EC7C, NULL, NULL, NULL, uv_0008ECB0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0008EC88, NULL, NULL, NULL, uv_0008ECC4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0008ECA2, NULL, NULL, NULL, uv_0008ECF0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008ED50[] = {
	{ -0.00004f, -15, 100 },
	{ -25.8819f, -15, 96.59258f },
	{ -48, -15, 87.10253f },
	{ -48, 20, 87.10253f },
	{ -25.8819f, 20, 96.59258f },
	{ -12.94095f, 20, 51.79626f },
	{ -0.00004f, 20, 100 },
	{ -0.00004f, 20, 50 },
	{ -48, -20, 87.10253f },
	{ -25.8819f, -20, 96.59258f },
	{ -0.00004f, -20, 100 },
	{ -12.94095f, -20, 51.79626f },
	{ -0.00004f, -20, 50 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008EDEC[] = {
	{ 0.130526f, 0, -0.9914449f },
	{ 0.264903f, 0, -0.9642749f },
	{ 0.394301f, 0, -0.918981f },
	{ 0.313888f, -0.605216f, -0.731566f },
	{ 0.194823f, -0.677579f, -0.7091759f },
	{ 0, -1, 0 },
	{ 0.096218f, -0.675725f, -0.730848f },
	{ 0, -1, 0 },
	{ 0.313888f, 0.605216f, -0.731566f },
	{ 0.194823f, 0.677579f, -0.7091759f },
	{ 0.096218f, 0.675725f, -0.730848f },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008EE88 = { vertex_0008ED50, normal_0008EDEC, LengthOfArray<Sint32>(vertex_0008ED50), meshlist_0008ED08, matlist_0008EC40, LengthOfArray<Uint16>(meshlist_0008ED08), LengthOfArray<Uint16>(matlist_0008EC40), { -24, 0.000001f, 75 }, 34.65547f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008EEB0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008EE88, 850, 20, -74.5f, 0, 0x7FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008EEE4[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008EF20[] = {
	0x8000u | 14, 28, 35, 29, 36, 30, 37, 31, 38, 32, 39, 33, 40, 34, 41
};

extern "C" __declspec(dllexport) Sint16 poly_0008EF3E[] = {
	0x8000u | 14, 14, 12, 15, 10, 18, 8, 20, 6, 22, 4, 24, 2, 26, 0,
	0x8000u | 14, 13, 16, 11, 17, 9, 19, 7, 21, 5, 23, 3, 25, 1, 27,
	14, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 15, 16, 14
};

extern "C" __declspec(dllexport) Sint16 poly_0008EF98[] = {
	0x8000u | 14, 34, 0, 33, 2, 32, 4, 31, 6, 30, 8, 29, 10, 28, 12,
	0x8000u | 14, 1, 41, 3, 40, 5, 39, 7, 38, 9, 37, 11, 36, 13, 35
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008EFD4[] = {
	{ 0, -510 },
	{ 0, 255 },
	{ 254, -510 },
	{ 254, 255 },
	{ 510, -510 },
	{ 510, 255 },
	{ 765, -510 },
	{ 765, 255 },
	{ 1020, -510 },
	{ 1020, 255 },
	{ 1275, -510 },
	{ 1275, 255 },
	{ 1530, -510 },
	{ 1530, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008F00C[] = {
	{ 0, -255 },
	{ 0, 255 },
	{ 338, -255 },
	{ 338, 255 },
	{ 680, -255 },
	{ 680, 255 },
	{ 1020, -255 },
	{ 1020, 255 },
	{ 1360, -255 },
	{ 1360, 255 },
	{ 1699, -255 },
	{ 1699, 255 },
	{ 2040, -255 },
	{ 2040, 255 },
	{ 1275, 255 },
	{ 1275, -255 },
	{ 1061, 255 },
	{ 1061, -255 },
	{ 848, 255 },
	{ 848, -255 },
	{ 637, 255 },
	{ 637, -255 },
	{ 424, 255 },
	{ 424, -255 },
	{ 212, 255 },
	{ 212, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 255, 765 },
	{ 254, 0 },
	{ 0, 765 },
	{ 0 },
	{ -254, 765 },
	{ -255, 0 },
	{ -508, 765 },
	{ -508, 0 },
	{ -764, 765 },
	{ -765, 0 },
	{ -1020, 765 },
	{ -1020, 0 },
	{ -1275, 765 },
	{ -1275, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008F0B4[] = {
	{ 4590, 255 },
	{ 4590, 0 },
	{ 3825, 255 },
	{ 3825, 0 },
	{ 3060, 255 },
	{ 3060, 0 },
	{ 2295, 255 },
	{ 2295, 0 },
	{ 1530, 255 },
	{ 1530, 0 },
	{ 764, 255 },
	{ 764, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 424, 0 },
	{ 424, 255 },
	{ 848, 0 },
	{ 848, 255 },
	{ 1274, 0 },
	{ 1274, 255 },
	{ 1698, 0 },
	{ 1698, 255 },
	{ 2124, 0 },
	{ 2124, 255 },
	{ 2550, 0 },
	{ 2550, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008F124[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0008EF20, NULL, NULL, NULL, uv_0008EFD4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_0008EF3E, NULL, NULL, NULL, uv_0008F00C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0008EF98, NULL, NULL, NULL, uv_0008F0B4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008F16C[] = {
	{ -0.00004f, -15, 100 },
	{ -0.00004f, -15, 50 },
	{ -25.8819f, -15, 96.59258f },
	{ -12.94095f, -15, 48.29626f },
	{ -50, -15, 86.60253f },
	{ -25, -15, 43.30127f },
	{ -70.71067f, -15, 70.71069f },
	{ -35.35534f, -15, 35.35535f },
	{ -86.60253f, -15, 50 },
	{ -43.30127f, -15, 25 },
	{ -96.59258f, -15, 25.8819f },
	{ -48.29629f, -15, 12.94092f },
	{ -100, -15, 0 },
	{ -50, -15, 0 },
	{ -100, 20, 0 },
	{ -96.59258f, 20, 25.8819f },
	{ -50, 20, 0 },
	{ -48.29629f, 20, 12.94092f },
	{ -86.60253f, 20, 50 },
	{ -43.30127f, 20, 25 },
	{ -70.71067f, 20, 70.71069f },
	{ -35.35534f, 20, 35.35535f },
	{ -50, 20, 86.60253f },
	{ -25, 20, 43.30127f },
	{ -25.8819f, 20, 96.59258f },
	{ -12.94095f, 20, 48.29626f },
	{ -0.00004f, 20, 100 },
	{ -0.00004f, 20, 50 },
	{ -100, -20, 0 },
	{ -96.59258f, -20, 25.8819f },
	{ -86.60253f, -20, 50 },
	{ -70.71067f, -20, 70.71069f },
	{ -50, -20, 86.60253f },
	{ -25.8819f, -20, 96.59258f },
	{ -0.00004f, -20, 100 },
	{ -50, -20, 0 },
	{ -48.29629f, -20, 12.94092f },
	{ -43.30127f, -20, 25 },
	{ -35.35534f, -20, 35.35535f },
	{ -25, -20, 43.30127f },
	{ -12.94095f, -20, 48.29626f },
	{ -0.00004f, -20, 50 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008F364[] = {
	{ 0.130526f, 0, -0.9914449f },
	{ -0.130528f, 0, 0.9914449f },
	{ 0.258819f, 0, -0.965926f },
	{ -0.258819f, 0, 0.965926f },
	{ 0.5f, 0, -0.866026f },
	{ -0.499999f, 0, 0.866026f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.866026f, 0, -0.5f },
	{ -0.866026f, 0, 0.5f },
	{ 0.965926f, 0, -0.258819f },
	{ -0.965926f, 0, 0.258819f },
	{ 0.9914449f, 0, -0.130526f },
	{ -0.9914449f, 0, 0.130526f },
	{ 0.730848f, -0.675725f, -0.096218f },
	{ 0.709235f, -0.678874f, -0.190039f },
	{ -0.6724769f, -0.734803f, 0.088533f },
	{ -0.652124f, -0.7377f, 0.174736f },
	{ 0.635883f, -0.678874f, -0.367127f },
	{ -0.584678f, -0.7377f, 0.337564f },
	{ 0.519196f, -0.678874f, -0.519196f },
	{ -0.477388f, -0.7377f, 0.477388f },
	{ 0.367127f, -0.678875f, -0.635883f },
	{ -0.337563f, -0.7377f, 0.5846789f },
	{ 0.190039f, -0.678874f, -0.709235f },
	{ -0.174736f, -0.7377f, 0.652124f },
	{ 0.096218f, -0.675725f, -0.730848f },
	{ -0.088535f, -0.734804f, 0.6724769f },
	{ 0.730848f, 0.675725f, -0.096218f },
	{ 0.709235f, 0.678874f, -0.190039f },
	{ 0.635883f, 0.678874f, -0.367127f },
	{ 0.519196f, 0.678874f, -0.519196f },
	{ 0.367127f, 0.678874f, -0.635883f },
	{ 0.190039f, 0.678874f, -0.709235f },
	{ 0.096218f, 0.675725f, -0.730848f },
	{ -0.6724769f, 0.734803f, 0.088533f },
	{ -0.652124f, 0.7377f, 0.174736f },
	{ -0.5846789f, 0.7377f, 0.337564f },
	{ -0.477388f, 0.7377f, 0.477388f },
	{ -0.337563f, 0.7377f, 0.5846789f },
	{ -0.174736f, 0.7377f, 0.652124f },
	{ -0.088535f, 0.734804f, 0.6724769f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008F55C = { vertex_0008F16C, normal_0008F364, LengthOfArray<Sint32>(vertex_0008F16C), meshlist_0008F124, matlist_0008EEE4, LengthOfArray<Uint16>(meshlist_0008F124), LengthOfArray<Uint16>(matlist_0008EEE4), { -50, 0, 50 }, 70.71069f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008F584 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F55C, 850, 20, 25.5f, 0, 0x7FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008F5B8[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008F61C[] = {
	4, 10, 11, 4, 3,
	0x8000u | 6, 5, 13, 15, 12, 3, 11
};

extern "C" __declspec(dllexport) Sint16 poly_0008F634[] = {
	6, 8, 10, 7, 4, 17, 0,
	6, 16, 2, 6, 5, 9, 13
};

extern "C" __declspec(dllexport) Sint16 poly_0008F650[] = {
	4, 9, 8, 6, 7,
	4, 6, 7, 16, 17
};

extern "C" __declspec(dllexport) Sint16 poly_0008F664[] = {
	4, 15, 5, 14, 2,
	4, 4, 3, 0, 1
};

extern "C" __declspec(dllexport) Sint16 poly_0008F678[] = {
	4, 3, 15, 1, 14
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008F684[] = {
	{ 2805, 0 },
	{ 0 },
	{ 2805, 255 },
	{ 112, 254 },
	{ 2805, 255 },
	{ 2805, 0 },
	{ 112, 254 },
	{ 0 },
	{ 2692, 254 },
	{ 2805, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008F6AC[] = {
	{ 510, 255 },
	{ 510, 0 },
	{ 382, 255 },
	{ 382, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 382, 255 },
	{ 382, 0 },
	{ 510, 255 },
	{ 510, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008F6DC[] = {
	{ 1785, -255 },
	{ 0, -255 },
	{ 1785, -208 },
	{ 0, -208 },
	{ 1785, -255 },
	{ 0, -255 },
	{ 1785, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008F6FC[] = {
	{ 255, -254 },
	{ 255, 255 },
	{ 0, -254 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, -254 },
	{ 0, 255 },
	{ 0, -254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008F71C[] = {
	{ 255, 254 },
	{ 255, -510 },
	{ 0, 254 },
	{ 0, -510 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008F72C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0008F61C, NULL, NULL, NULL, uv_0008F684, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0008F634, NULL, NULL, NULL, uv_0008F6AC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0008F650, NULL, NULL, NULL, uv_0008F6DC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_0008F664, NULL, NULL, NULL, uv_0008F6FC, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_0008F678, NULL, NULL, NULL, uv_0008F71C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008F7A4[] = {
	{ -20, -35, -22.5f },
	{ -20, -0.999998f, -22.5f },
	{ -20, -35, 23.5f },
	{ 0, -0.999998f, -22.5f },
	{ 0, -35, -22.5f },
	{ 0, -35, 23.5f },
	{ 0, -40, 23.5f },
	{ 0, -40, -22.5f },
	{ 0, -40, -24.5f },
	{ 0, -40, 25.5f },
	{ 0, -35, -24.5f },
	{ 0, 1.000002f, -24.5f },
	{ 0, 1.000002f, 25.5f },
	{ 0, -35, 25.5f },
	{ -20, -0.999999f, 23.5f },
	{ 0, -0.999999f, 23.5f },
	{ -20, -40, 23.5f },
	{ -20, -40, -22.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008F87C[] = {
	{ 0, 0, 1 },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, 0, -1 },
	{ 0.904534f, -0.301511f, 0.301511f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.301511f, 0.904534f, -0.301511f },
	{ 0.301511f, 0.904534f, 0.301511f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0.904534f, -0.301511f, -0.301511f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008F954 = { vertex_0008F7A4, normal_0008F87C, LengthOfArray<Sint32>(vertex_0008F7A4), meshlist_0008F72C, matlist_0008F5B8, LengthOfArray<Uint16>(meshlist_0008F72C), LengthOfArray<Uint16>(matlist_0008F5B8), { -10, -19.5f, 0.5f }, 32.33032f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008F97C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 300, 40, -100, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008F9B0[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008FA14[] = {
	6, 2, 35, 1, 34, 5, 33,
	6, 32, 38, 30, 37, 31, 36
};

extern "C" __declspec(dllexport) Sint16 poly_0008FA30[] = {
	6, 4, 33, 0, 34, 3, 35,
	6, 28, 36, 27, 37, 29, 38
};

extern "C" __declspec(dllexport) Sint16 poly_0008FA4C[] = {
	6, 3, 7, 0, 6, 4, 8,
	6, 25, 28, 24, 27, 26, 29
};

extern "C" __declspec(dllexport) Sint16 poly_0008FA68[] = {
	0x8000u | 14, 6, 8, 9, 11, 12, 14, 15, 17, 18, 20, 21, 23, 24, 26,
	0x8000u | 14, 24, 25, 21, 22, 18, 19, 15, 16, 12, 13, 9, 10, 6, 7
};

extern "C" __declspec(dllexport) Sint16 poly_0008FAA4[] = {
	6, 31, 2, 30, 1, 32, 5
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008FAB4[] = {
	{ 6375, 255 },
	{ 6375, 0 },
	{ 3187, 255 },
	{ 3187, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 3187, 255 },
	{ 3187, 0 },
	{ 6375, 255 },
	{ 6375, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008FAE4[] = {
	{ 0, -255 },
	{ 0, 254 },
	{ 892, -255 },
	{ 892, 254 },
	{ 1785, -255 },
	{ 1785, 254 },
	{ 1785, -254 },
	{ 1785, 254 },
	{ 892, -254 },
	{ 892, 254 },
	{ 0, -254 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008FB14[] = {
	{ 1785, 255 },
	{ 1785, 0 },
	{ 892, 255 },
	{ 892, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1785, 0 },
	{ 1785, 255 },
	{ 892, 0 },
	{ 892, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008FB44[] = {
	{ 382, -255 },
	{ 0, -255 },
	{ 382, -169 },
	{ 0, -169 },
	{ 382, -85 },
	{ 0, -85 },
	{ 382, 0 },
	{ 0 },
	{ 382, 84 },
	{ 0, 84 },
	{ 382, 170 },
	{ 0, 170 },
	{ 382, 255 },
	{ 0, 255 },
	{ 382, 255 },
	{ 765, 255 },
	{ 382, 170 },
	{ 765, 170 },
	{ 382, 84 },
	{ 765, 84 },
	{ 382, 0 },
	{ 765, 0 },
	{ 382, -85 },
	{ 765, -85 },
	{ 382, -169 },
	{ 765, -169 },
	{ 382, -255 },
	{ 765, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008FBB4[] = {
	{ 510, -1020 },
	{ 0, -1020 },
	{ 510, -382 },
	{ 0, -382 },
	{ 510, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008FBCC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0008FA14, NULL, NULL, NULL, uv_0008FAB4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0008FA30, NULL, NULL, NULL, uv_0008FAE4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0008FA4C, NULL, NULL, NULL, uv_0008FB14, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_0008FA68, NULL, NULL, NULL, uv_0008FB44, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_0008FAA4, NULL, NULL, NULL, uv_0008FBB4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008FC44[] = {
	{ 40, 40, 100 },
	{ 40, 0, 100 },
	{ 40, 0, 200 },
	{ 40, 40, 200 },
	{ 40, 40, 0 },
	{ 40, 0, 0 },
	{ 36.95518f, 55.30734f, 100 },
	{ 36.95518f, 55.30734f, 200 },
	{ 36.95518f, 55.30734f, 0 },
	{ 28.28427f, 68.28426f, 100 },
	{ 28.28427f, 68.28426f, 200 },
	{ 28.28427f, 68.28426f, 0 },
	{ 15.30733f, 76.95518f, 100 },
	{ 15.30733f, 76.95518f, 200 },
	{ 15.30733f, 76.95518f, 0 },
	{ 0, 80, 100 },
	{ 0, 80, 200 },
	{ 0, 80, 0 },
	{ -15.30734f, 76.95518f, 100 },
	{ -15.30734f, 76.95518f, 200 },
	{ -15.30734f, 76.95518f, 0 },
	{ -28.28428f, 68.28426f, 100 },
	{ -28.28428f, 68.28426f, 200 },
	{ -28.28428f, 68.28426f, 0 },
	{ -36.95519f, 55.30733f, 100 },
	{ -36.95519f, 55.30733f, 200 },
	{ -36.95519f, 55.30733f, 0 },
	{ -40, 39.99999f, 100 },
	{ -40, 39.99999f, 200 },
	{ -40, 39.99999f, 0 },
	{ -40, 0, 100 },
	{ -40, 0, 200 },
	{ -40, 0, 0 },
	{ 40, 3, 0 },
	{ 40, 3, 100 },
	{ 40, 3, 200 },
	{ -40, 3, 200 },
	{ -40, 3, 100 },
	{ -40, 3, 0 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008FE18[] = {
	{ -0.995185f, -0.098017f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.995185f, -0.098017f, 0 },
	{ -0.995185f, -0.098017f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.92388f, -0.382683f, 0 },
	{ -0.92388f, -0.382683f, 0 },
	{ -0.92388f, -0.382683f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.382683f, -0.92388f, 0 },
	{ -0.382683f, -0.92388f, 0 },
	{ -0.382683f, -0.92388f, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0.382683f, -0.92388f, 0 },
	{ 0.382683f, -0.92388f, 0 },
	{ 0.382683f, -0.92388f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.92388f, -0.382683f, 0 },
	{ 0.92388f, -0.382683f, 0 },
	{ 0.92388f, -0.382683f, 0 },
	{ 0.995185f, -0.098017f, 0 },
	{ 0.995185f, -0.098017f, 0 },
	{ 0.995185f, -0.098017f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008FFEC = { vertex_0008FC44, normal_0008FE18, LengthOfArray<Sint32>(vertex_0008FC44), meshlist_0008FBCC, matlist_0008F9B0, LengthOfArray<Uint16>(meshlist_0008FBCC), LengthOfArray<Uint16>(matlist_0008F9B0), { 0, 40, 100 }, 107.7033f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00090014 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008FFEC, 75, 0, -400, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00090048[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000900AC[] = {
	14, 88, 67, 77, 56, 78, 45, 79, 34, 80, 23, 81, 12, 90, 1,
	14, 83, 9, 82, 20, 84, 31, 85, 42, 86, 53, 87, 64, 89, 75
};

extern "C" __declspec(dllexport) Sint16 poly_000900E8[] = {
	14, 67, 68, 56, 57, 45, 46, 34, 35, 23, 24, 12, 13, 1, 2,
	14, 74, 75, 63, 64, 52, 53, 41, 42, 30, 31, 19, 20, 8, 9
};

extern "C" __declspec(dllexport) Sint16 poly_00090124[] = {
	14, 6, 5, 17, 16, 28, 27, 39, 38, 50, 49, 61, 60, 72, 71,
	14, 7, 6, 18, 17, 29, 28, 40, 39, 51, 50, 62, 61, 73, 72,
	14, 68, 69, 57, 58, 46, 47, 35, 36, 24, 25, 13, 14, 2, 3,
	14, 69, 70, 58, 59, 47, 48, 36, 37, 25, 26, 14, 15, 3, 4,
	14, 70, 71, 59, 60, 48, 49, 37, 38, 26, 27, 15, 16, 4, 5,
	14, 73, 74, 62, 63, 51, 52, 40, 41, 29, 30, 18, 19, 7, 8
};

extern "C" __declspec(dllexport) Sint16 poly_000901D8[] = {
	14, 10, 83, 21, 82, 32, 84, 43, 85, 54, 86, 65, 87, 76, 89,
	14, 66, 88, 55, 77, 44, 78, 33, 79, 22, 80, 11, 81, 0, 90
};

extern "C" __declspec(dllexport) Sint16 poly_00090214[] = {
	6, 0, 10, 11, 21, 22, 32,
	6, 22, 32, 33, 43, 44, 54,
	6, 44, 54, 55, 65, 66, 76
};

extern "C" __declspec(dllexport) NJS_TEX uv_00090240[] = {
	{ 0, 255 },
	{ 0, -255 },
	{ 170, 255 },
	{ 170, -255 },
	{ 338, 255 },
	{ 338, -255 },
	{ 510, 255 },
	{ 510, -255 },
	{ 678, 255 },
	{ 678, -255 },
	{ 848, 255 },
	{ 848, -255 },
	{ 1020, 255 },
	{ 1020, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 296, 255 },
	{ 296, -255 },
	{ 593, 255 },
	{ 593, -255 },
	{ 892, 255 },
	{ 892, -255 },
	{ 1189, 255 },
	{ 1189, -255 },
	{ 1487, 255 },
	{ 1487, -255 },
	{ 1785, 255 },
	{ 1785, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000902B0[] = {
	{ 0, 255 },
	{ 0 },
	{ 212, 255 },
	{ 212, 0 },
	{ 424, 255 },
	{ 424, 0 },
	{ 637, 255 },
	{ 637, 0 },
	{ 848, 255 },
	{ 848, 0 },
	{ 1061, 255 },
	{ 1061, 0 },
	{ 1275, 255 },
	{ 1275, 0 },
	{ 2550, 0 },
	{ 2550, 255 },
	{ 2124, 0 },
	{ 2124, 255 },
	{ 1699, 0 },
	{ 1699, 255 },
	{ 1275, 0 },
	{ 1275, 255 },
	{ 849, 0 },
	{ 849, 255 },
	{ 424, 0 },
	{ 424, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00090320[] = {
	{ 0, 84 },
	{ 0 },
	{ 127, 84 },
	{ 127, 0 },
	{ 255, 84 },
	{ 255, 0 },
	{ 382, 84 },
	{ 382, 0 },
	{ 510, 84 },
	{ 508, 0 },
	{ 637, 84 },
	{ 637, 0 },
	{ 765, 84 },
	{ 764, 0 },
	{ 0, 169 },
	{ 0, 84 },
	{ 127, 170 },
	{ 127, 84 },
	{ 255, 169 },
	{ 255, 84 },
	{ 382, 170 },
	{ 382, 84 },
	{ 510, 169 },
	{ 510, 84 },
	{ 637, 170 },
	{ 637, 84 },
	{ 765, 169 },
	{ 765, 84 },
	{ 765, -254 },
	{ 765, -169 },
	{ 637, -255 },
	{ 637, -170 },
	{ 510, -255 },
	{ 510, -170 },
	{ 382, -255 },
	{ 382, -170 },
	{ 255, -254 },
	{ 255, -169 },
	{ 127, -255 },
	{ 127, -170 },
	{ 0, -254 },
	{ 0, -169 },
	{ 765, -169 },
	{ 765, -85 },
	{ 637, -170 },
	{ 637, -85 },
	{ 510, -170 },
	{ 510, -85 },
	{ 382, -170 },
	{ 382, -85 },
	{ 255, -169 },
	{ 255, -85 },
	{ 127, -170 },
	{ 127, -85 },
	{ 0, -169 },
	{ 0, -85 },
	{ 765, -85 },
	{ 764, 0 },
	{ 637, -85 },
	{ 637, 0 },
	{ 510, -85 },
	{ 508, 0 },
	{ 382, -85 },
	{ 382, 0 },
	{ 255, -85 },
	{ 255, 0 },
	{ 127, -85 },
	{ 127, 0 },
	{ 0, -85 },
	{ 0 },
	{ 765, 169 },
	{ 765, 255 },
	{ 637, 170 },
	{ 637, 255 },
	{ 510, 169 },
	{ 510, 255 },
	{ 382, 170 },
	{ 382, 255 },
	{ 255, 169 },
	{ 255, 255 },
	{ 127, 170 },
	{ 127, 255 },
	{ 0, 169 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00090470[] = {
	{ 0, 255 },
	{ 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 2040, 255 },
	{ 2040, 0 },
	{ 3060, 255 },
	{ 3060, 0 },
	{ 4080, 255 },
	{ 4080, 0 },
	{ 5100, 255 },
	{ 5100, 0 },
	{ 6120, 255 },
	{ 6120, 0 },
	{ 0, 255 },
	{ 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 1019, 255 },
	{ 1019, 0 },
	{ 1530, 255 },
	{ 1530, 0 },
	{ 2039, 255 },
	{ 2039, 0 },
	{ 2550, 255 },
	{ 2550, 0 },
	{ 3060, 255 },
	{ 3060, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000904E0[] = {
	{ 510, 203 },
	{ 0, 255 },
	{ 510, 127 },
	{ 0, 127 },
	{ 510, 50 },
	{ 0 },
	{ 510, 203 },
	{ 0, 255 },
	{ 510, 127 },
	{ 0, 127 },
	{ 510, 50 },
	{ 0 },
	{ 510, 203 },
	{ 0, 255 },
	{ 510, 127 },
	{ 0, 127 },
	{ 510, 50 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00090528[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000900AC, NULL, NULL, NULL, uv_00090240, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000900E8, NULL, NULL, NULL, uv_000902B0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 6, poly_00090124, NULL, NULL, NULL, uv_00090320, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_000901D8, NULL, NULL, NULL, uv_00090470, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 3, poly_00090214, NULL, NULL, NULL, uv_000904E0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000905A0[] = {
	{ 40, 0, 0 },
	{ 40, 40, 0 },
	{ 36.95518f, 55.30734f, 0 },
	{ 28.28427f, 68.28426f, 0 },
	{ 15.30734f, 76.95518f, 0 },
	{ 0, 80, 0 },
	{ -15.30734f, 76.95518f, 0 },
	{ -28.28428f, 68.28426f, 0 },
	{ -36.9552f, 55.30733f, 0 },
	{ -40, 39.99999f, 0 },
	{ -40, 0, 0 },
	{ 42.04445f, 0, 15.52914f },
	{ 42.04445f, 40, 15.52914f },
	{ 39.10339f, 55.30734f, 16.3172f },
	{ 30.72794f, 68.28426f, 18.5614f },
	{ 18.19317f, 76.95518f, 21.92007f },
	{ 3.40741f, 80, 25.8819f },
	{ -11.37833f, 76.95518f, 29.84373f },
	{ -23.9131f, 68.28426f, 33.20242f },
	{ -32.28856f, 55.30733f, 35.44661f },
	{ -35.22961f, 39.99999f, 36.23466f },
	{ -35.22961f, 0, 36.23466f },
	{ 48.03848f, 0, 30 },
	{ 48.03848f, 40, 30 },
	{ 45.40159f, 55.30734f, 31.52241f },
	{ 37.89236f, 68.28426f, 35.85786f },
	{ 26.65401f, 76.95518f, 42.34633f },
	{ 13.39746f, 80, 50 },
	{ 0.140915f, 76.95518f, 57.65367f },
	{ -11.09744f, 68.28426f, 64.14215f },
	{ -18.60669f, 55.30733f, 68.47759f },
	{ -21.24356f, 39.99999f, 70 },
	{ -21.24356f, 0, 70 },
	{ 57.57359f, 0, 42.42641f },
	{ 57.57359f, 40, 42.42641f },
	{ 55.42059f, 55.30734f, 44.57942f },
	{ 49.28932f, 68.28426f, 50.71067f },
	{ 40.11325f, 76.95518f, 59.88676f },
	{ 29.28932f, 80, 70.71067f },
	{ 18.46539f, 76.95518f, 81.53461f },
	{ 9.289307f, 68.28426f, 90.71069f },
	{ 3.158051f, 55.30733f, 96.84194f },
	{ 1.005051f, 39.99999f, 98.99494f },
	{ 1.005051f, 0, 98.99494f },
	{ 70, 0, 51.96153f },
	{ 70, 40, 51.96153f },
	{ 68.47759f, 55.30734f, 54.59842f },
	{ 64.14214f, 68.28426f, 62.10765f },
	{ 57.65367f, 76.95518f, 73.346f },
	{ 50, 80, 86.60253f },
	{ 42.34634f, 76.95518f, 99.85909f },
	{ 35.85786f, 68.28426f, 111.0975f },
	{ 31.5224f, 55.30733f, 118.6067f },
	{ 30, 39.99999f, 121.2436f },
	{ 30, 0, 121.2436f },
	{ 84.47086f, 0, 57.95555f },
	{ 84.47086f, 40, 57.95555f },
	{ 83.68279f, 55.30734f, 60.8966f },
	{ 81.4386f, 68.28426f, 69.27206f },
	{ 78.07993f, 76.95518f, 81.80682f },
	{ 74.11809f, 80, 96.59258f },
	{ 70.15626f, 76.95518f, 111.3783f },
	{ 66.79758f, 68.28426f, 123.9131f },
	{ 64.55338f, 55.30733f, 132.2886f },
	{ 63.76533f, 39.99999f, 135.2296f },
	{ 63.76533f, 0, 135.2296f },
	{ 100, 0, 60 },
	{ 100, 40, 60 },
	{ 100, 55.30734f, 63.04481f },
	{ 100, 68.28426f, 71.71573f },
	{ 100, 76.95518f, 84.69265f },
	{ 100, 80, 100 },
	{ 99.99998f, 76.95518f, 115.3073f },
	{ 99.99998f, 68.28426f, 128.2843f },
	{ 99.99998f, 55.30733f, 136.9552f },
	{ 99.99998f, 39.99999f, 140 },
	{ 99.99998f, 0, 140 },
	{ 84.47086f, 3, 57.95555f },
	{ 70, 3, 51.96153f },
	{ 57.57359f, 3, 42.42641f },
	{ 48.03848f, 3, 30 },
	{ 42.04445f, 3, 15.52914f },
	{ -35.22961f, 3, 36.23466f },
	{ -40, 3, 0 },
	{ -21.24356f, 3, 70 },
	{ 1.005051f, 3, 98.99494f },
	{ 30, 3, 121.2436f },
	{ 63.76533f, 3, 135.2296f },
	{ 100, 3, 60 },
	{ 99.99998f, 3, 140 },
	{ 40, 3, 0 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000909E4[] = {
	{ -0.6724769f, 0.734803f, 0.088533f },
	{ -0.986674f, -0.09798399f, 0.129898f },
	{ -0.914727f, -0.385711f, 0.120427f },
	{ -0.695864f, -0.712306f, 0.09161299f },
	{ -0.36821f, -0.9284779f, 0.048476f },
	{ 0.016254f, -0.9998659f, -0.00214f },
	{ 0.395845f, -0.916838f, -0.052114f },
	{ 0.7118959f, -0.696003f, -0.093723f },
	{ 0.919377f, -0.374293f, -0.121038f },
	{ 0.986827f, -0.096407f, -0.129918f },
	{ 0.730848f, 0.675725f, -0.096218f },
	{ -0.652124f, 0.7377f, 0.174736f },
	{ -0.961198f, -0.098821f, 0.257552f },
	{ -0.890035f, -0.388538f, 0.238485f },
	{ -0.674992f, -0.715314f, 0.180864f },
	{ -0.356082f, -0.929571f, 0.09541199f },
	{ 0.0157f, -0.999868f, -0.004207f },
	{ 0.382877f, -0.918085f, -0.102592f },
	{ 0.690679f, -0.69908f, -0.185067f },
	{ 0.894628f, -0.377066f, -0.239715f },
	{ 0.961349f, -0.09723099f, -0.257593f },
	{ 0.709235f, 0.678874f, -0.190039f },
	{ -0.584678f, 0.7377f, 0.337564f },
	{ -0.8617859f, -0.098821f, 0.497553f },
	{ -0.7979839f, -0.388538f, 0.460716f },
	{ -0.605181f, -0.715314f, 0.349401f },
	{ -0.319254f, -0.929571f, 0.184322f },
	{ 0.014076f, -0.999868f, -0.008126999f },
	{ 0.343278f, -0.918085f, -0.198192f },
	{ 0.6192459f, -0.69908f, -0.357522f },
	{ 0.802101f, -0.377066f, -0.463093f },
	{ 0.861922f, -0.09723099f, -0.497631f },
	{ 0.635883f, 0.678874f, -0.367127f },
	{ -0.477388f, 0.7377f, 0.477388f },
	{ -0.7036459f, -0.098821f, 0.703645f },
	{ -0.6515509f, -0.388539f, 0.6515509f },
	{ -0.494129f, -0.715314f, 0.494128f },
	{ -0.26067f, -0.929571f, 0.26067f },
	{ 0.011493f, -0.999868f, -0.011493f },
	{ 0.280285f, -0.918085f, -0.280285f },
	{ 0.505612f, -0.69908f, -0.505612f },
	{ 0.6549129f, -0.377065f, -0.6549129f },
	{ 0.703756f, -0.09723099f, -0.703756f },
	{ 0.519196f, 0.678874f, -0.519196f },
	{ -0.337564f, 0.7377f, 0.584678f },
	{ -0.497552f, -0.098821f, 0.8617859f },
	{ -0.460716f, -0.388538f, 0.7979839f },
	{ -0.349401f, -0.715314f, 0.605181f },
	{ -0.184322f, -0.929571f, 0.319254f },
	{ 0.008126999f, -0.999868f, -0.014076f },
	{ 0.198191f, -0.918085f, -0.343278f },
	{ 0.357522f, -0.69908f, -0.6192459f },
	{ 0.463093f, -0.377065f, -0.802101f },
	{ 0.497631f, -0.09723099f, -0.861922f },
	{ 0.367127f, 0.678874f, -0.635883f },
	{ -0.174736f, 0.7377f, 0.652124f },
	{ -0.257552f, -0.098821f, 0.961198f },
	{ -0.238484f, -0.388538f, 0.890036f },
	{ -0.180863f, -0.715314f, 0.674992f },
	{ -0.09541199f, -0.929571f, 0.356082f },
	{ 0.004207f, -0.999868f, -0.0157f },
	{ 0.102591f, -0.918085f, -0.382877f },
	{ 0.185067f, -0.69908f, -0.690679f },
	{ 0.239715f, -0.377065f, -0.894628f },
	{ 0.257593f, -0.09723099f, -0.961349f },
	{ 0.190039f, 0.678874f, -0.709235f },
	{ -0.088533f, 0.734803f, 0.6724769f },
	{ -0.129898f, -0.09798399f, 0.986674f },
	{ -0.120427f, -0.385711f, 0.914727f },
	{ -0.09161299f, -0.712306f, 0.695864f },
	{ -0.048476f, -0.9284779f, 0.36821f },
	{ 0.00214f, -0.9998659f, -0.016254f },
	{ 0.052114f, -0.916838f, -0.395845f },
	{ 0.093723f, -0.696003f, -0.7118959f },
	{ 0.121038f, -0.374293f, -0.919377f },
	{ 0.129918f, -0.096407f, -0.986827f },
	{ 0.096218f, 0.675725f, -0.730848f },
	{ -0.258819f, 0, 0.965926f },
	{ -0.5f, 0, 0.866025f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.866025f, 0, 0.5f },
	{ -0.965926f, 0, 0.258819f },
	{ 0.965926f, 0, -0.258819f },
	{ 0.9914449f, 0, -0.130526f },
	{ 0.866025f, 0, -0.5f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.5f, 0, -0.866025f },
	{ 0.258819f, 0, -0.965926f },
	{ -0.130526f, 0, 0.9914449f },
	{ 0.130526f, 0, -0.9914449f },
	{ -0.9914449f, 0, 0.130526f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00090E28 = { vertex_000905A0, normal_000909E4, LengthOfArray<Sint32>(vertex_000905A0), meshlist_00090528, matlist_00090048, LengthOfArray<Uint16>(meshlist_00090528), LengthOfArray<Uint16>(matlist_00090048), { 30, 40, 70 }, 98.99494f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00090E50 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00090E28, 75, 0, -200, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00090E84[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00090E98[] = {
	6, 5, 4, 1, 0, 2, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_00090EA8[] = {
	{ 510, 255 },
	{ 510, -255 },
	{ 255, 255 },
	{ 255, -255 },
	{ 0, 255 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00090EC0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00090E98, NULL, NULL, NULL, uv_00090EA8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00090ED8[] = {
	{ -0.0009199999f, 190, -0.00004f },
	{ -0.0009199999f, 50, 0 },
	{ 50, 50, 0 },
	{ 50, 190, -0.00004f },
	{ -50.00018f, 190, -0.00004f },
	{ -50, 50, 0 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00090F20[] = {
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00090F68 = { vertex_00090ED8, normal_00090F20, LengthOfArray<Sint32>(vertex_00090ED8), meshlist_00090EC0, matlist_00090E84, LengthOfArray<Uint16>(meshlist_00090EC0), LengthOfArray<Uint16>(matlist_00090E84), { -0.0009199999f, 120, -0.00002f }, 70, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00090F90 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00090F68, -80, 95, 410, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00091A94[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00091AA8[] = {
	6, 5, 4, 1, 0, 2, 3,
	6, 2, 7, 1, 6, 5, 8
};

extern "C" __declspec(dllexport) NJS_TEX uv_00091AC4[] = {
	{ 0, -63 },
	{ 0, 255 },
	{ 255, -63 },
	{ 255, 255 },
	{ 510, -63 },
	{ 510, 255 },
	{ 510, -63 },
	{ 510, -510 },
	{ 255, -63 },
	{ 255, -510 },
	{ 0, -63 },
	{ 0, -510 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00091AF4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00091AA8, NULL, NULL, NULL, uv_00091AC4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00091B0C[] = {
	{ 25, 20, 25 },
	{ 25, 120, 25 },
	{ 75, 120, 25 },
	{ 75, 20, 25 },
	{ -25, 20, 25 },
	{ -25, 120, 25 },
	{ 25, 260, 25 },
	{ 75, 260, 25 },
	{ -25, 260, 25 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00091B78[] = {
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00091BE4 = { vertex_00091B0C, normal_00091B78, LengthOfArray<Sint32>(vertex_00091B0C), meshlist_00091AF4, matlist_00091A94, LengthOfArray<Uint16>(meshlist_00091AF4), LengthOfArray<Uint16>(matlist_00091A94), { 25, 140, 25 }, 120, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00091C0C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00091BE4, -105, 25, -475, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009261C[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 21, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00092680[] = {
	0x8000u | 16, 72, 73, 108, 109, 0, 1, 2, 3, 4, 5, 6, 7, 110, 111, 90, 91,
	0x8000u | 16, 95, 94, 119, 117, 23, 19, 22, 18, 21, 17, 20, 16, 118, 116, 77, 76,
	0x8000u | 16, 94, 93, 117, 115, 19, 15, 18, 14, 17, 13, 16, 12, 116, 114, 76, 75,
	0x8000u | 16, 92, 91, 113, 111, 11, 7, 10, 5, 9, 3, 8, 1, 112, 109, 74, 73,
	0x8000u | 16, 93, 92, 115, 113, 15, 11, 14, 10, 13, 9, 12, 8, 114, 112, 75, 74
};

extern "C" __declspec(dllexport) Sint16 poly_0009272A[] = {
	0x8000u | 16, 100, 101, 124, 125, 28, 29, 34, 35, 40, 51, 50, 52, 135, 136, 82, 83,
	0x8000u | 16, 98, 99, 122, 123, 26, 27, 32, 33, 38, 39, 48, 49, 133, 134, 80, 81,
	0x8000u | 16, 105, 104, 140, 139, 58, 57, 64, 63, 70, 69, 44, 43, 129, 128, 87, 86,
	0x8000u | 16, 107, 106, 142, 141, 60, 59, 66, 65, 54, 71, 53, 45, 143, 130, 89, 88
};

extern "C" __declspec(dllexport) Sint16 poly_000927B2[] = {
	0x8000u | 16, 97, 96, 121, 120, 25, 24, 31, 30, 37, 36, 47, 46, 132, 131, 79, 78,
	0x8000u | 16, 102, 103, 137, 138, 55, 56, 61, 62, 67, 68, 41, 42, 126, 127, 84, 85
};

extern "C" __declspec(dllexport) Sint16 poly_000927F6[] = {
	0x8000u | 16, 96, 98, 120, 122, 24, 26, 30, 32, 36, 38, 46, 48, 131, 133, 78, 80,
	0x8000u | 16, 104, 102, 139, 137, 57, 55, 63, 61, 69, 67, 43, 41, 128, 126, 86, 84
};

extern "C" __declspec(dllexport) Sint16 poly_0009283A[] = {
	0x8000u | 16, 99, 100, 123, 124, 27, 28, 33, 34, 39, 40, 49, 50, 134, 135, 81, 82,
	0x8000u | 16, 106, 105, 141, 140, 59, 58, 65, 64, 71, 70, 45, 44, 130, 129, 88, 87
};

extern "C" __declspec(dllexport) NJS_TEX uv_00092880[] = {
{ 0, 255 },
	{ 561, 255 },
	{ 0, -254 },
	{ 561, -254 },
	{ 0, -764 },
	{ 561, -764 },
	{ 0, -1274 },
	{ 561, -1274 },
	{ 0, -1784 },
	{ 561, -1784 },
	{ 0, -2295 },
	{ 561, -2295 },
	{ 0, -2805 },
	{ 561, -2805 },
	{ 0, -3315 },
	{ 561, -3315 },
	{ 2805, -3315 },
	{ 2244, -3315 },
	{ 2805, -2805 },
	{ 2244, -2805 },
	{ 2805, -2295 },
	{ 2244, -2295 },
	{ 2805, -1784 },
	{ 2244, -1784 },
	{ 2805, -1274 },
	{ 2244, -1274 },
	{ 2805, -764 },
	{ 2244, -764 },
	{ 2805, -254 },
	{ 2244, -254 },
	{ 2805, 255 },
	{ 2244, 255 },
	{ 2244, -3315 },
	{ 1682, -3315 },
	{ 2244, -2805 },
	{ 1682, -2805 },
	{ 2244, -2295 },
	{ 1682, -2295 },
	{ 2244, -1784 },
	{ 1682, -1784 },
	{ 2244, -1274 },
	{ 1682, -1274 },
	{ 2244, -764 },
	{ 1682, -764 },
	{ 2244, -254 },
	{ 1682, -254 },
	{ 2244, 255 },
	{ 1682, 255 },
	{ 1122, -3315 },
	{ 561, -3315 },
	{ 1122, -2805 },
	{ 561, -2805 },
	{ 1122, -2295 },
	{ 561, -2295 },
	{ 1122, -1784 },
	{ 561, -1784 },
	{ 1122, -1274 },
	{ 561, -1274 },
	{ 1122, -764 },
	{ 561, -764 },
	{ 1122, -254 },
	{ 561, -254 },
	{ 1122, 255 },
	{ 561, 255 },
	{ 1682, -3315 },
	{ 1122, -3315 },
	{ 1682, -2805 },
	{ 1122, -2805 },
	{ 1682, -2295 },
	{ 1122, -2295 },
	{ 1682, -1784 },
	{ 1122, -1784 },
	{ 1682, -1274 },
	{ 1122, -1274 },
	{ 1682, -764 },
	{ 1122, -764 },
	{ 1682, -254 },
	{ 1122, -254 },
	{ 1682, 255 },
	{ 1122, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000929C0[] = {
	{ 17849, 0 },
	{ 17849, 255 },
	{ 15299, 0 },
	{ 15299, 254 },
	{ 12749, 0 },
	{ 12749, 254 },
	{ 10199, 0 },
	{ 10199, 254 },
	{ 7649, 0 },
	{ 7649, 254 },
	{ 5099, 0 },
	{ 5099, 254 },
	{ 2550, 0 },
	{ 2550, 254 },
	{ 0 },
	{ 0, 254 },
	{ 17849, 255 },
	{ 17849, 0 },
	{ 15299, 254 },
	{ 15299, 0 },
	{ 12749, 254 },
	{ 12749, 0 },
	{ 10199, 254 },
	{ 10199, 0 },
	{ 7649, 254 },
	{ 7649, 0 },
	{ 5099, 254 },
	{ 5099, 0 },
	{ 2550, 254 },
	{ 2550, 0 },
	{ 0, 254 },
	{ 0 },
	{ 17850, 255 },
	{ 17850, 0 },
	{ 15300, 255 },
	{ 15300, 0 },
	{ 12750, 255 },
	{ 12750, 0 },
	{ 10200, 255 },
	{ 10200, 0 },
	{ 7650, 255 },
	{ 7650, 0 },
	{ 5100, 255 },
	{ 5100, 0 },
	{ 2550, 255 },
	{ 2550, 0 },
	{ 0, 254 },
	{ 0 },
	{ 17850, 0 },
	{ 17850, 255 },
	{ 15300, 0 },
	{ 15300, 255 },
	{ 12750, 0 },
	{ 12750, 255 },
	{ 10200, 0 },
	{ 10200, 255 },
	{ 7650, 0 },
	{ 7650, 255 },
	{ 5100, 0 },
	{ 5100, 255 },
	{ 2550, 0 },
	{ 2550, 255 },
	{ 0 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00092AC0[] = {
	{ 1785, -510 },
	{ 1785, 255 },
	{ 1530, -510 },
	{ 1530, 255 },
	{ 1275, -510 },
	{ 1275, 255 },
	{ 1020, -510 },
	{ 1020, 255 },
	{ 765, -510 },
	{ 765, 255 },
	{ 510, -510 },
	{ 510, 255 },
	{ 255, -510 },
	{ 255, 255 },
	{ 0, -510 },
	{ 0, 255 },
	{ 1785, 255 },
	{ 1785, -510 },
	{ 1530, 255 },
	{ 1530, -510 },
	{ 1275, 255 },
	{ 1275, -510 },
	{ 1020, 255 },
	{ 1020, -510 },
	{ 765, 255 },
	{ 765, -510 },
	{ 510, 255 },
	{ 510, -510 },
	{ 255, 255 },
	{ 255, -510 },
	{ 0, 255 },
	{ 0, -510 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00092B40[] = {
	{ 1785, -508 },
	{ 1785, 255 },
	{ 1530, -508 },
	{ 1530, 255 },
	{ 1275, -508 },
	{ 1275, 255 },
	{ 1020, -508 },
	{ 1020, 255 },
	{ 765, -508 },
	{ 765, 255 },
	{ 510, -508 },
	{ 510, 255 },
	{ 255, -508 },
	{ 255, 255 },
	{ 0, -508 },
	{ 0, 255 },
	{ 1785, 255 },
	{ 1785, -508 },
	{ 1530, 255 },
	{ 1530, -508 },
	{ 1275, 255 },
	{ 1275, -508 },
	{ 1020, 255 },
	{ 1020, -508 },
	{ 765, 255 },
	{ 765, -508 },
	{ 510, 255 },
	{ 510, -508 },
	{ 255, 255 },
	{ 255, -508 },
	{ 0, 255 },
	{ 0, -508 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00092BC0[] = {
	{ 7140, 0 },
	{ 7140, 255 },
	{ 6120, 0 },
	{ 6120, 255 },
	{ 5100, 0 },
	{ 5100, 255 },
	{ 4080, 0 },
	{ 4080, 255 },
	{ 3060, 0 },
	{ 3060, 255 },
	{ 2040, 0 },
	{ 2040, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 0 },
	{ 0, 255 },
	{ 7140, 255 },
	{ 7140, 0 },
	{ 6120, 255 },
	{ 6120, 0 },
	{ 5100, 255 },
	{ 5100, 0 },
	{ 4080, 255 },
	{ 4080, 0 },
	{ 3060, 255 },
	{ 3060, 0 },
	{ 2040, 255 },
	{ 2040, 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00092C40[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_00092680, NULL, NULL, NULL, uv_00092880, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_0009272A, NULL, NULL, NULL, uv_000929C0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000927B2, NULL, NULL, NULL, uv_00092AC0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_000927F6, NULL, NULL, NULL, uv_00092B40, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_0009283A, NULL, NULL, NULL, uv_00092BC0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00092CB8[] = {
	{ -250, -157.5f, -75 },
	{ -150, -157.5f, -75 },
	{ -250, -157.5f, -25 },
	{ -150, -157.5f, -25 },
	{ -250, -157.5f, 25 },
	{ -150, -157.5f, 25 },
	{ -250, -157.5f, 75 },
	{ -150, -157.5f, 75 },
	{ -50, -157.5f, -75 },
	{ -50, -157.5f, -25 },
	{ -50, -157.5f, 25 },
	{ -50, -157.5f, 75 },
	{ 50, -157.5f, -75 },
	{ 50, -157.5f, -25 },
	{ 50, -157.5f, 25 },
	{ 50, -157.5f, 75 },
	{ 150, -157.5f, -75 },
	{ 150, -157.5f, -25 },
	{ 150, -157.5f, 25 },
	{ 150, -157.5f, 75 },
	{ 250, -157.5f, -75 },
	{ 250, -157.5f, -25 },
	{ 250, -157.5f, 25 },
	{ 250, -157.5f, 75 },
	{ 250, 2.5f, 75 },
	{ 250, 157.5f, 75 },
	{ 250, -108, 75 },
	{ 248, -108, 75 },
	{ 248, -116.5f, 75 },
	{ 250, -116.5f, 75 },
	{ 250, 2.5f, 25 },
	{ 250, 157.5f, 25 },
	{ 250, -108, 25 },
	{ 248, -108, 25 },
	{ 248, -116.5f, 25 },
	{ 250, -116.5f, 25 },
	{ 250, 2.5f, -25 },
	{ 250, 157.5f, -25 },
	{ 250, -108, -25 },
	{ 248, -108, -25 },
	{ 248, -116.5f, -25 },
	{ -250, 2.5f, -75 },
	{ -250, 157.5f, -75 },
	{ -250, -108, -75 },
	{ -248, -108, -75 },
	{ -248, -116.5f, -75 },
	{ 250, 2.5f, -75 },
	{ 250, 157.5f, -75 },
	{ 250, -108, -75 },
	{ 248, -108, -75 },
	{ 248, -116.5f, -75 },
	{ 250, -116.5f, -25 },
	{ 250, -116.5f, -75 },
	{ -250, -116.5f, -75 },
	{ -250, -116.5f, -25 },
	{ -250, 2.5f, 75 },
	{ -250, 157.5f, 75 },
	{ -250, -108, 75 },
	{ -248, -108, 75 },
	{ -248, -116.5f, 75 },
	{ -250, -116.5f, 75 },
	{ -250, 2.5f, 25 },
	{ -250, 157.5f, 25 },
	{ -250, -108, 25 },
	{ -248, -108, 25 },
	{ -248, -116.5f, 25 },
	{ -250, -116.5f, 25 },
	{ -250, 2.5f, -25 },
	{ -250, 157.5f, -25 },
	{ -250, -108, -25 },
	{ -248, -108, -25 },
	{ -248, -116.5f, -25 },
	{ -250, -157.5f, -175 },
	{ -150, -157.5f, -175 },
	{ -50, -157.5f, -175 },
	{ 50, -157.5f, -175 },
	{ 150, -157.5f, -175 },
	{ 250, -157.5f, -175 },
	{ 250, 2.5f, -175 },
	{ 250, 157.5f, -175 },
	{ 250, -108, -175 },
	{ 248, -108, -175 },
	{ 248, -116.5f, -175 },
	{ 250, -116.5f, -175 },
	{ -250, 2.5f, -175 },
	{ -250, 157.5f, -175 },
	{ -250, -108, -175 },
	{ -248, -108, -175 },
	{ -248, -116.5f, -175 },
	{ -250, -116.5f, -175 },
	{ -250, -157.5f, 175 },
	{ -150, -157.5f, 175 },
	{ -50, -157.5f, 175 },
	{ 50, -157.5f, 175 },
	{ 150, -157.5f, 175 },
	{ 250, -157.5f, 175 },
	{ 250, 2.5f, 175 },
	{ 250, 157.5f, 175 },
	{ 250, -108, 175 },
	{ 248, -108, 175 },
	{ 248, -116.5f, 175 },
	{ 250, -116.5f, 175 },
	{ -250, 2.5f, 175 },
	{ -250, 157.5f, 175 },
	{ -250, -108, 175 },
	{ -248, -108, 175 },
	{ -248, -116.5f, 175 },
	{ -250, -116.5f, 175 },
	{ -250, -157.5f, -125 },
	{ -150, -157.5f, -125 },
	{ -250, -157.5f, 125 },
	{ -150, -157.5f, 125 },
	{ -50, -157.5f, -125 },
	{ -50, -157.5f, 125 },
	{ 50, -157.5f, -125 },
	{ 50, -157.5f, 125 },
	{ 150, -157.5f, -125 },
	{ 150, -157.5f, 125 },
	{ 250, -157.5f, -125 },
	{ 250, -157.5f, 125 },
	{ 250, 2.5f, 125 },
	{ 250, 157.5f, 125 },
	{ 250, -108, 125 },
	{ 248, -108, 125 },
	{ 248, -116.5f, 125 },
	{ 250, -116.5f, 125 },
	{ -250, 2.5f, -125 },
	{ -250, 157.5f, -125 },
	{ -250, -108, -125 },
	{ -248, -108, -125 },
	{ -248, -116.5f, -125 },
	{ 250, 2.5f, -125 },
	{ 250, 157.5f, -125 },
	{ 250, -108, -125 },
	{ 248, -108, -125 },
	{ 248, -116.5f, -125 },
	{ 250, -116.5f, -125 },
	{ -250, 2.5f, 125 },
	{ -250, 157.5f, 125 },
	{ -250, -108, 125 },
	{ -248, -108, 125 },
	{ -248, -116.5f, 125 },
	{ -250, -116.5f, 125 },
	{ -250, -116.5f, -125 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00093378[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0, -1, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0, -1, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0, -1, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0, -1, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0, -1, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0, -1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0, -1, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0, -1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0, -1, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0, -1, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00093A38 = { vertex_00092CB8, normal_00093378, LengthOfArray<Sint32>(vertex_00092CB8), meshlist_00092C40, matlist_0009261C, LengthOfArray<Uint16>(meshlist_00092C40), LengthOfArray<Uint16>(matlist_0009261C), { 0 }, 305.1638f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00093A60 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00093A38, 550, 157.5f, -99.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00093A94[] = {
	{ { 0x4CB2B2B2 }, { 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00093AA8[] = {
	4, 3, 2, 1, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_00093AB4[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00093AC4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00093AA8, NULL, NULL, NULL, uv_00093AB4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00093ADC[] = {
	{ 0.000034f, -70, -24 },
	{ 0.000034f, -70, 36 },
	{ 0.000034f, 35, -24 },
	{ 0.000034f, 35, 36 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00093B0C[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00093B3C = { vertex_00093ADC, normal_00093B0C, LengthOfArray<Sint32>(vertex_00093ADC), meshlist_00093AC4, matlist_00093A94, LengthOfArray<Uint16>(meshlist_00093AC4), LengthOfArray<Uint16>(matlist_00093A94), { 0.000034f, -17.5f, 6 }, 60.46693f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00093B64 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00093B3C, -80, -35, -275, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00093B98[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 24, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00093C4C[] = {
	0x8000u | 5, 0, 18, 2, 17, 1,
	0x8000u | 5, 15, 53, 16, 1, 17,
	0x8000u | 5, 3, 4, 53, 5, 1,
	0x8000u | 5, 0, 2, 6, 1, 5,
	0x8000u | 5, 0, 14, 18, 13, 17,
	6, 13, 17, 12, 16, 11, 15,
	6, 7, 3, 8, 4, 9, 5,
	0x8000u | 5, 0, 6, 10, 5, 9
};

extern "C" __declspec(dllexport) Sint16 poly_00093CB0[] = {
	3, 24, 23, 20,
	0x8000u | 7, 20, 21, 23, 30, 29, 37, 36,
	0x8000u | 7, 25, 26, 22, 27, 28, 38, 35,
	3, 25, 19, 22
};

extern "C" __declspec(dllexport) Sint16 poly_00093CE0[] = {
	3, 24, 25, 26,
	5, 27, 29, 26, 23, 24,
	6, 36, 29, 59, 27, 58, 38
};

extern "C" __declspec(dllexport) Sint16 poly_00093D02[] = {
	3, 20, 21, 7,
	0x8000u | 7, 7, 3, 21, 32, 30, 39, 37,
	0x8000u | 7, 19, 22, 15, 28, 31, 35, 34,
	3, 19, 11, 15
};

extern "C" __declspec(dllexport) Sint16 poly_00093D32[] = {
	3, 3, 32, 53,
	3, 53, 31, 15,
	0x8000u | 6, 31, 34, 53, 33, 32, 39
};

extern "C" __declspec(dllexport) Sint16 poly_00093D50[] = {
	0x8000u | 26, 24, 45, 20, 44, 7, 43, 8, 49, 9, 48, 10, 47, 0, 46, 14, 52, 13, 51, 12, 50, 11, 42, 19, 41, 25, 40
};

extern "C" __declspec(dllexport) Sint16 poly_00093D86[] = {
	4, 45, 40, 24, 25
};

extern "C" __declspec(dllexport) Sint16 poly_00093D90[] = {
	0x8000u | 6, 59, 36, 54, 37, 55, 39,
	0x8000u | 6, 57, 34, 56, 35, 58, 38,
	0x8000u | 6, 34, 57, 33, 60, 39, 55
};

extern "C" __declspec(dllexport) Sint16 poly_00093DBA[] = {
	3, 55, 57, 60
};

extern "C" __declspec(dllexport) NJS_TEX uv_00093DC4[] = {
	{ 127, 0 },
	{ 204, 127 },
	{ 51, 127 },
	{ 254, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 127 },
	{ 255, 127 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0, 127 },
	{ 255, 127 },
	{ 0 },
	{ 255, 0 },
	{ 127, 0 },
	{ 204, 127 },
	{ 51, 127 },
	{ 254, 255 },
	{ 0, 255 },
	{ 127, 0 },
	{ 204, 127 },
	{ 51, 127 },
	{ 254, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 127 },
	{ 0, 127 },
	{ 254, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, 127 },
	{ 255, 127 },
	{ 0 },
	{ 255, 0 },
	{ 127, 0 },
	{ 204, 127 },
	{ 51, 127 },
	{ 254, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00093E6C[] = {
{ 0, 255 },
	{ 800, 255 },
	{ 0 },
	{ 0 },
	{ 800, 0 },
	{ 800, 255 },
	{ 1062, 0 },
	{ 1062, 255 },
	{ 2550, 0 },
	{ 2550, 255 },
	{ 0, 255 },
	{ 800, 255 },
	{ 800, 0 },
	{ 1062, 255 },
	{ 1062, 0 },
	{ 2550, 255 },
	{ 2550, 0 },
	{ 0, 255 },
	{ 0 },
	{ 800, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00093EBC[] = {
	{ 1275, 254 },
	{ 0, 254 },
	{ 186, -124 },
	{ 186, -258 },
	{ 1088, -258 },
	{ 186, -124 },
	{ 1088, -124 },
	{ 1275, 254 },
	{ 1027, -1020 },
	{ 1088, -258 },
	{ 996, -1020 },
	{ 186, -258 },
	{ 262, -1020 },
	{ 231, -1020 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00093EF4[] = {
	{ 1020, 255 },
	{ 698, 255 },
	{ 1020, -255 },
	{ 1020, -255 },
	{ 698, -255 },
	{ 698, 255 },
	{ 593, -255 },
	{ 593, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 1020, 255 },
	{ 698, 255 },
	{ 698, -255 },
	{ 593, 255 },
	{ 593, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 1020, 255 },
	{ 1020, -255 },
	{ 698, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00093F44[] = {
	{ 0, 254 },
	{ 76, 254 },
	{ 76, 0 },
	{ 76, 0 },
	{ 76, -255 },
	{ 0, -255 },
	{ 76, -255 },
	{ 510, -255 },
	{ 76, 0 },
	{ 508, -4 },
	{ 76, 254 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00093F74[] = {
		{ 0, 255 },
	{ 0 },
	{ 155, 255 },
	{ 155, 0 },
	{ 1243, 255 },
	{ 1243, 0 },
	{ 1729, 255 },
	{ 1729, 0 },
	{ 2215, 255 },
	{ 2215, 0 },
	{ 2700, 255 },
	{ 2700, 0 },
	{ 3187, 255 },
	{ 3187, 0 },
	{ 3672, 255 },
	{ 3672, 0 },
	{ 4157, 255 },
	{ 4157, 0 },
	{ 4644, 255 },
	{ 4644, 0 },
	{ 5130, 255 },
	{ 5130, 0 },
	{ 6218, 255 },
	{ 6218, 0 },
	{ 6375, 255 },
	{ 6375, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00093FDC[] = {
	{ 2295, 0 },
	{ 0 },
	{ 2295, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00093FEC[] = {
	{ 0 },
	{ 0, 254 },
	{ 478, 0 },
	{ 478, 254 },
	{ 3729, 0 },
	{ 3825, 255 },
	{ 3729, 0 },
	{ 3825, 255 },
	{ 478, 0 },
	{ 478, 254 },
	{ 0 },
	{ 0, 254 },
	{ 884, 255 },
	{ 1032, 0 },
	{ 3825, 255 },
	{ 3710, 0 },
	{ 884, 255 },
	{ 1032, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00094034[] = {
	{ 0, 254 },
	{ 765, 254 },
	{ 382, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00094040[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, poly_00093C4C, NULL, NULL, NULL, uv_00093DC4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_00093CB0, NULL, NULL, NULL, uv_00093E6C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_00093CE0, NULL, NULL, NULL, uv_00093EBC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, poly_00093D02, NULL, NULL, NULL, uv_00093EF4, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 3, poly_00093D32, NULL, NULL, NULL, uv_00093F44, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_00093D50, NULL, NULL, NULL, uv_00093F74, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 1, poly_00093D86, NULL, NULL, NULL, uv_00093FDC, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 3, poly_00093D90, NULL, NULL, NULL, uv_00093FEC, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 1, poly_00093DBA, NULL, NULL, NULL, uv_00094034, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00094118[] = {
	{ -115, 40, -25.5f },
	{ -86.71573f, 28.28427f, -25.5f },
	{ -99.69266f, 36.95518f, -25.5f },
	{ -86.71573f, 0.000002f, -53.78427f },
	{ -88.86874f, 15.30734f, -51.63125f },
	{ -95, 28.28427f, -45.5f },
	{ -104.1761f, 36.95518f, -36.32392f },
	{ -115, 0.000002f, -65.5f },
	{ -115, 15.30734f, -62.45517f },
	{ -115, 28.28427f, -53.78426f },
	{ -115, 36.95518f, -40.80733f },
	{ -115, 0.000002f, 14.5f },
	{ -115, 15.30734f, 11.45518f },
	{ -115, 28.28427f, 2.784264f },
	{ -115, 36.95518f, -10.19266f },
	{ -86.71573f, 0.000002f, 2.784271f },
	{ -88.86874f, 15.30734f, 0.631256f },
	{ -95, 28.28427f, -5.500004f },
	{ -104.1761f, 36.95518f, -14.67608f },
	{ -115, -35, 14.5f },
	{ -115, -35, -65.5f },
	{ -86.71573f, -35, -53.78427f },
	{ -86.71573f, -35, 2.784271f },
	{ -86.71573f, -40, -53.78427f },
	{ -115, -40, -65.5f },
	{ -115, -40, 14.5f },
	{ -86.71573f, -40, 2.784271f },
	{ -76.71573f, -40, 2.784271f },
	{ -76.71573f, -35, 2.784271f },
	{ -76.71573f, -40, -53.78427f },
	{ -76.71573f, -35, -53.78427f },
	{ -76.71573f, 0.000002f, 2.784271f },
	{ -76.71573f, 0.000002f, -53.78427f },
	{ -20, 15, -25 },
	{ -20, 0.000002f, 0 },
	{ -20, -35, 0 },
	{ -20, -40, -50 },
	{ -20, -35, -50 },
	{ -20, -40, 0 },
	{ -20, 0.000002f, -50 },
	{ -125, -40, 14.5f },
	{ -125, -35, 14.5f },
	{ -125, 0.000002f, 14.5f },
	{ -125, 0.000002f, -65.5f },
	{ -125, -35, -65.5f },
	{ -125, -40, -65.5f },
	{ -125, 40, -25.5f },
	{ -125, 36.95518f, -40.80733f },
	{ -125, 28.28427f, -53.78426f },
	{ -125, 15.30734f, -62.45517f },
	{ -125, 15.30734f, 11.45518f },
	{ -125, 28.28427f, 2.784264f },
	{ -125, 36.95518f, -10.19266f },
	{ -76.71573f, 15, -25.5f },
	{ -20, -35, -48 },
	{ -20, -0.999998f, -48 },
	{ -20, -35, -2 },
	{ -20, -0.999999f, -2 },
	{ -20, -40, -2 },
	{ -20, -40, -48 },
	{ -20, 13, -25 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000943F4[] = {
	{ -0.069326f, -0.997594f, 0 },
	{ -0.7170309f, -0.697033f, 0.003343f },
	{ -0.422583f, -0.906324f, 0 },
	{ -0.3473f, -0.263275f, 0.9000379f },
	{ -0.647121f, -0.367901f, 0.667745f },
	{ -0.512307f, -0.683633f, 0.5197949f },
	{ -0.298811f, -0.906324f, 0.298811f },
	{ -0.192021f, -0.09514499f, 0.976768f },
	{ -0.178925f, -0.369144f, 0.911986f },
	{ -0.143695f, -0.688804f, 0.710564f },
	{ -0.085662f, -0.912111f, 0.400894f },
	{ -0.192021f, -0.09514499f, -0.976768f },
	{ -0.178925f, -0.369144f, -0.911986f },
	{ -0.143695f, -0.688804f, -0.710564f },
	{ -0.085662f, -0.912111f, -0.400894f },
	{ -0.3473f, -0.263275f, -0.9000379f },
	{ -0.64248f, -0.378425f, -0.666344f },
	{ -0.503469f, -0.693813f, -0.51492f },
	{ -0.298811f, -0.906324f, -0.298811f },
	{ -0.19509f, 0, -0.980785f },
	{ -0.19509f, 0, 0.980785f },
	{ -0.19509f, 0, 0.980785f },
	{ -0.19509f, 0, -0.980785f },
	{ -0.128202f, 0.753767f, 0.644515f },
	{ -0.145577f, 0.665719f, 0.731865f },
	{ -0.145577f, 0.665719f, -0.731865f },
	{ -0.128202f, 0.753767f, -0.644515f },
	{ -0.017474f, 0.701628f, -0.712329f },
	{ -0.024524f, 0, -0.999699f },
	{ -0.023796f, 0.699686f, 0.714054f },
	{ -0.033306f, 0, 0.999445f },
	{ -0.013124f, -0.506715f, -0.862014f },
	{ -0.028784f, -0.505358f, 0.86243f },
	{ -0.609682f, -0.792643f, -0.002265f },
	{ -0.621862f, -0.40067f, -0.672868f },
	{ -0.724235f, 0, -0.689553f },
	{ -0.5944f, 0.5809349f, 0.556061f },
	{ -0.730266f, 0, 0.683163f },
	{ -0.589987f, 0.579974f, -0.561734f },
	{ -0.63535f, -0.396987f, 0.662368f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, -0.098017f, -0.995185f },
	{ 0, -0.098017f, 0.995185f },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, -1, 0 },
	{ 0, -0.92388f, 0.382683f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, -0.382684f, 0.92388f },
	{ 0, -0.382684f, -0.923879f },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0, -0.92388f, -0.382683f },
	{ -0.511713f, -0.859148f, 0.003718f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.447214f, 0.8944269f, 0 },
	{ -0.447214f, 0.8944269f, 0 },
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000946D0 = { vertex_00094118, normal_000943F4, LengthOfArray<Sint32>(vertex_00094118), meshlist_00094040, matlist_00093B98, LengthOfArray<Uint16>(meshlist_00094040), LengthOfArray<Uint16>(matlist_00093B98), { -72.5f, 0, -25.5f }, 66.00188f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000946F8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000946D0, 300, 40, -74.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009472C[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 24, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000947A4[] = {
	6, 52, 54, 49, 53, 57, 55
};

extern "C" __declspec(dllexport) Sint16 poly_000947B2[] = {
	6, 21, 17, 20, 16, 22, 18,
	6, 29, 25, 28, 24, 30, 26,
	3, 54, 50, 53,
	0x8000u | 5, 53, 47, 50, 48, 51
};

extern "C" __declspec(dllexport) Sint16 poly_000947E2[] = {
	0x8000u | 10, 0, 1, 4, 5, 8, 9, 12, 13, 16, 17,
	0x8000u | 10, 2, 0, 6, 4, 10, 8, 14, 12, 18, 16,
	6, 33, 29, 32, 28, 34, 30,
	6, 37, 33, 36, 32, 38, 34,
	6, 38, 42, 36, 40, 37, 41
};

extern "C" __declspec(dllexport) Sint16 poly_00094838[] = {
	0x8000u | 24, 3, 2, 7, 6, 11, 10, 15, 14, 19, 18, 23, 22, 27, 26, 31, 30, 35, 34, 39, 38, 43, 42, 46, 56
};

extern "C" __declspec(dllexport) Sint16 poly_0009486A[] = {
	6, 25, 21, 24, 20, 26, 22
};

extern "C" __declspec(dllexport) Sint16 poly_00094878[] = {
	8, 56, 57, 42, 55, 44, 47, 45, 48,
	3, 53, 47, 55,
	0x8000u | 5, 42, 40, 44, 41, 45
};

extern "C" __declspec(dllexport) NJS_TEX uv_000948A0[] = {
	{ 0, 255 },
	{ 0 },
	{ 245, 255 },
	{ 245, 0 },
	{ 765, 255 },
	{ 765, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000948B8[] = {
	{ 0, -4335 },
	{ 255, -4335 },
	{ 0, -2040 },
	{ 255, -2040 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, -4335 },
	{ 0, -4335 },
	{ 255, -2040 },
	{ 0, -2040 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, -2040 },
	{ 255, 255 },
	{ 255, 255 },
	{ 255, -2040 },
	{ 0, -2040 },
	{ 255, -4335 },
	{ 0, -4335 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00094908[] = {
	{ 0, -382 },
	{ 0, -1020 },
	{ 57, -382 },
	{ 57, -1020 },
	{ 513, -382 },
	{ 513, -1020 },
	{ 593, -382 },
	{ 593, -1020 },
	{ 765, -382 },
	{ 765, -1020 },
	{ 0, 255 },
	{ 0, -382 },
	{ 57, 255 },
	{ 57, -382 },
	{ 513, 255 },
	{ 513, -382 },
	{ 593, 255 },
	{ 593, -382 },
	{ 765, 255 },
	{ 765, -382 },
	{ 195, -1020 },
	{ 29, -1020 },
	{ 195, -382 },
	{ 29, -382 },
	{ 195, 255 },
	{ 29, 255 },
	{ 270, -1020 },
	{ 195, -1020 },
	{ 270, -382 },
	{ 195, -382 },
	{ 270, 255 },
	{ 195, 255 },
	{ 270, 255 },
	{ 765, 255 },
	{ 270, -382 },
	{ 765, -382 },
	{ 270, -1020 },
	{ 765, -1020 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000949A0[] = {
	{ 0, 255 },
	{ 0 },
	{ 198, 255 },
	{ 198, 0 },
	{ 1782, 255 },
	{ 1782, 0 },
	{ 2061, 255 },
	{ 2061, 0 },
	{ 2656, 255 },
	{ 2656, 0 },
	{ 2935, 255 },
	{ 2935, 0 },
	{ 5510, 255 },
	{ 5510, 0 },
	{ 5790, 255 },
	{ 5790, 0 },
	{ 6383, 255 },
	{ 6383, 0 },
	{ 6663, 255 },
	{ 6663, 0 },
	{ 8644, 255 },
	{ 8644, 0 },
	{ 8924, 255 },
	{ 8924, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00094A00[] = {
	{ 510, -510 },
	{ 0, -510 },
	{ 510, -127 },
	{ 0, -127 },
	{ 510, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00094A18[] = {
	{ 75, 255 },
	{ 75, 232 },
	{ 0, 255 },
	{ 75, 209 },
	{ 75, -382 },
	{ 255, -382 },
	{ 75, -1020 },
	{ 255, -1020 },
	{ 255, 209 },
	{ 255, -382 },
	{ 75, 209 },
	{ 0, 255 },
	{ 0, -382 },
	{ 75, -382 },
	{ 0, -1020 },
	{ 75, -1020 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00094A58[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000947A4, NULL, NULL, NULL, uv_000948A0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_000947B2, NULL, NULL, NULL, uv_000948B8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 5, poly_000947E2, NULL, NULL, NULL, uv_00094908, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_00094838, NULL, NULL, NULL, uv_000949A0, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_0009486A, NULL, NULL, NULL, uv_00094A00, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 3, poly_00094878, NULL, NULL, NULL, uv_00094A18, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00094AE8[] = {
	{ -150, 145, -450 },
	{ -150, 285, -450 },
	{ -150, 5, -450 },
	{ -150, 0, -450 },
	{ -150, 145, -440 },
	{ -150, 285, -440 },
	{ -150, 5, -440 },
	{ -150, 0, -440 },
	{ -150, 145, -360 },
	{ -150, 285, -360 },
	{ -150, 5, -360 },
	{ -150, 0, -360 },
	{ -140, 145, -350 },
	{ -140, 285, -350 },
	{ -140, 5, -350 },
	{ -140, 0, -350 },
	{ -110, 145, -350 },
	{ -110, 285, -350 },
	{ -110, 5, -350 },
	{ -110, 0, -350 },
	{ -100, 145, -340 },
	{ -100, 285, -340 },
	{ -100, 5, -340 },
	{ -100, 0, -340 },
	{ -100, 145, -210 },
	{ -100, 285, -210 },
	{ -100, 5, -210 },
	{ -100, 0, -210 },
	{ -110, 145, -200 },
	{ -110, 285, -200 },
	{ -110, 5, -200 },
	{ -110, 0, -200 },
	{ -140, 145, -200 },
	{ -140, 285, -200 },
	{ -140, 5, -200 },
	{ -140, 0, -200 },
	{ -150, 145, -190 },
	{ -150, 285, -190 },
	{ -150, 5, -190 },
	{ -150, 0, -190 },
	{ -150, 145, -90 },
	{ -150, 285, -90 },
	{ -150, 5, -90 },
	{ -150, 0, -90 },
	{ -140, 145, -80 },
	{ -140, 285, -80 },
	{ -140, 0, -80 },
	{ -110, 145, -80 },
	{ -110, 285, -80 },
	{ -110, 10, -80 },
	{ -100, 145, -70 },
	{ -100, 285, -70 },
	{ -100, 10, -70 },
	{ -110, 15, -80 },
	{ -100, 15, -70 },
	{ -140, 15, -80 },
	{ -140, 5, -80 },
	{ -140, 10, -80 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00094DA0[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.92388f, 0, 0.382683f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.50545f, 0, 0.862856f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00095058 = { vertex_00094AE8, normal_00094DA0, LengthOfArray<Sint32>(vertex_00094AE8), meshlist_00094A58, matlist_0009472C, LengthOfArray<Uint16>(meshlist_00094A58), LengthOfArray<Uint16>(matlist_0009472C), { -125, 142.5f, -260 }, 237.5f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00095080 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00095058, 120, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000950B4[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00095168[] = {
	10, 21, 119, 23, 118, 105, 117, 25, 116, 27, 115,
	20, 122, 15, 123, 13, 124, 11, 125, 9, 113, 7, 112, 5, 111, 3, 110, 74, 109, 73, 108, 1
};

extern "C" __declspec(dllexport) Sint16 poly_000951A8[] = {
	3, 96, 95, 89,
	3, 104, 22, 103,
	0x8000u | 5, 103, 52, 22, 53, 20,
	0x8000u | 7, 85, 50, 86, 6, 87, 84, 88,
	6, 10, 58, 12, 57, 14, 56,
	6, 75, 71, 2, 49, 4, 50,
	3, 72, 0, 48,
	9, 59, 71, 60, 75, 62, 72, 69, 48, 68,
	3, 69, 63, 62,
	3, 62, 61, 60,
	3, 6, 4, 50,
	4, 6, 84, 8, 79,
	4, 24, 104, 51, 103,
	3, 90, 94, 97,
	3, 24, 51, 91,
	0x8000u | 7, 90, 91, 97, 24, 96, 26, 89
};

extern "C" __declspec(dllexport) Sint16 poly_00095258[] = {
	0x8000u | 10, 93, 106, 107, 89, 28, 26, 114, 115, 29, 27
};

extern "C" __declspec(dllexport) Sint16 poly_0009526E[] = {
	3, 82, 81, 80,
	7, 58, 10, 80, 8, 82, 79, 83
};

extern "C" __declspec(dllexport) Sint16 poly_00095286[] = {
	0x8000u | 8, 53, 54, 20, 18, 119, 120, 21, 19,
	0x8000u | 8, 55, 56, 16, 14, 121, 122, 17, 15
};

extern "C" __declspec(dllexport) Sint16 poly_000952AA[] = {
	0x8000u | 8, 54, 55, 18, 16, 120, 121, 19, 17
};

extern "C" __declspec(dllexport) Sint16 poly_000952BC[] = {
	20, 108, 0, 109, 72, 110, 75, 111, 2, 112, 4, 113, 6, 125, 8, 124, 10, 123, 12, 122, 14,
	10, 26, 115, 24, 116, 104, 117, 22, 118, 20, 119
};

extern "C" __declspec(dllexport) Sint16 poly_000952FC[] = {
	0x8000u | 19, 30, 48, 31, 68, 64, 69, 70, 63, 67, 62, 66, 61, 65, 60, 42, 59, 43, 71, 49,
	3, 85, 50, 47,
	0x8000u | 6, 47, 33, 50, 32, 49, 43,
	5, 52, 102, 103, 41, 51,
	0x8000u | 15, 102, 40, 52, 39, 53, 38, 54, 37, 55, 36, 56, 35, 57, 34, 58,
	0x8000u | 14, 89, 106, 95, 101, 96, 100, 97, 98, 94, 99, 90, 92, 91, 41
};

extern "C" __declspec(dllexport) Sint16 poly_00095384[] = {
	3, 46, 87, 86,
	3, 78, 79, 84,
	3, 34, 58, 80,
	4, 78, 76, 79, 83,
	4, 44, 34, 81, 80,
	4, 81, 82, 44, 77,
	4, 82, 83, 77, 76,
	4, 46, 45, 87, 88,
	4, 84, 88, 78, 45,
	4, 47, 46, 85, 86,
	3, 91, 51, 41
};

extern "C" __declspec(dllexport) NJS_TEX uv_000953EC[] = {
	{ 765, 255 },
	{ 765, -510 },
	{ 629, 255 },
	{ 629, -510 },
	{ 554, 255 },
	{ 554, -510 },
	{ 541, 255 },
	{ 541, -510 },
	{ 0, 255 },
	{ 0, -510 },
	{ 0, -510 },
	{ 0, 255 },
	{ 116, -510 },
	{ 116, 255 },
	{ 171, -510 },
	{ 171, 255 },
	{ 288, -510 },
	{ 288, 255 },
	{ 342, -510 },
	{ 342, 255 },
	{ 458, -510 },
	{ 458, 255 },
	{ 513, -510 },
	{ 513, 255 },
	{ 649, -510 },
	{ 649, 255 },
	{ 883, -510 },
	{ 883, 255 },
	{ 1020, -510 },
	{ 1020, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00095464[] = {
	{ 807, -223 },
	{ 807, 254 },
	{ 1019, 254 },
	{ 510, -765 },
	{ 354, -765 },
	{ 510, -340 },
	{ 510, -340 },
	{ 354, -340 },
	{ 354, -765 },
	{ 0, -340 },
	{ 0, -765 },
	{ 296, 82 },
	{ 0, 82 },
	{ 296, -23 },
	{ 354, -765 },
	{ 354, -23 },
	{ 424, -129 },
	{ 424, -23 },
	{ 474, -765 },
	{ 474, -340 },
	{ 354, -765 },
	{ 354, -340 },
	{ 0, -765 },
	{ 0, -340 },
	{ 844, -1020 },
	{ 844, -170 },
	{ 1156, -1020 },
	{ 1156, -170 },
	{ 1274, -1020 },
	{ 1274, -170 },
	{ 310, -1020 },
	{ 0, -1020 },
	{ 0, 254 },
	{ 844, -63 },
	{ 844, -170 },
	{ 666, -63 },
	{ 844, -1020 },
	{ 488, 42 },
	{ 310, -1020 },
	{ 310, 148 },
	{ 0, 254 },
	{ 310, 254 },
	{ 310, 148 },
	{ 488, 148 },
	{ 488, 42 },
	{ 488, 42 },
	{ 666, 42 },
	{ 666, -63 },
	{ 354, -765 },
	{ 0, -765 },
	{ 0, 82 },
	{ 354, -765 },
	{ 424, -129 },
	{ 474, -765 },
	{ 474, -129 },
	{ 0, -340 },
	{ 19, -340 },
	{ 0, -765 },
	{ 19, -765 },
	{ 42, 254 },
	{ 296, 254 },
	{ 296, -223 },
	{ 0, -510 },
	{ 0, -127 },
	{ 42, -127 },
	{ 42, 254 },
	{ 42, -127 },
	{ 296, -223 },
	{ 0, -510 },
	{ 807, -223 },
	{ 1019, -510 },
	{ 1019, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00095584[] = {
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 200 },
	{ 0, 200 },
	{ 255, -666 },
	{ 0, -666 },
	{ 255, -775 },
	{ 0, -775 },
	{ 255, -2295 },
	{ 0, -2295 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000955AC[] = {
	{ 85, 19 },
	{ 212, 19 },
	{ 212, -86 },
	{ 255, -86 },
	{ 255, -508 },
	{ 212, -86 },
	{ 0, -508 },
	{ 85, 19 },
	{ 0, 124 },
	{ 85, 124 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000955D4[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -388 },
	{ 255, -388 },
	{ 0, -549 },
	{ 255, -549 },
	{ 0, -2805 },
	{ 255, -2805 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, -388 },
	{ 0, -388 },
	{ 255, -549 },
	{ 0, -549 },
	{ 255, -2805 },
	{ 0, -2805 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00095614[] = {
	{ 0, 255 },
	{ 510, 255 },
	{ 0, 147 },
	{ 510, 147 },
	{ 0, 120 },
	{ 510, 120 },
	{ 0, -255 },
	{ 510, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00095634[] = {
	{ 13515, 0 },
	{ 13515, 255 },
	{ 12712, 0 },
	{ 12712, 255 },
	{ 11339, 0 },
	{ 11339, 255 },
	{ 10536, 0 },
	{ 10536, 255 },
	{ 10212, 0 },
	{ 10212, 255 },
	{ 9525, 0 },
	{ 9525, 255 },
	{ 9201, 0 },
	{ 9201, 255 },
	{ 8515, 0 },
	{ 8515, 255 },
	{ 8189, 0 },
	{ 8189, 255 },
	{ 7503, 0 },
	{ 7503, 255 },
	{ 0, 255 },
	{ 0 },
	{ 2747, 255 },
	{ 2747, 0 },
	{ 2816, 255 },
	{ 2816, 0 },
	{ 3191, 255 },
	{ 3191, 0 },
	{ 3878, 255 },
	{ 3878, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000956AC[] = {
{ 0, 255 },
	{ 0 },
	{ 761, 255 },
	{ 681, 0 },
	{ 952, 255 },
	{ 876, 0 },
	{ 1332, 255 },
	{ 1267, 0 },
	{ 1523, 255 },
	{ 1463, 0 },
	{ 1904, 255 },
	{ 1853, 0 },
	{ 2094, 255 },
	{ 2048, 0 },
	{ 2475, 255 },
	{ 2438, 0 },
	{ 2666, 255 },
	{ 2632, 0 },
	{ 3315, 0 },
	{ 4080, 0 },
	{ 3591, 0 },
	{ 4080, 255 },
	{ 4080, 255 },
	{ 3507, 255 },
	{ 3591, 0 },
	{ 3237, 255 },
	{ 3315, 0 },
	{ 2666, 255 },
	{ 4707, 0 },
	{ 5038, 255 },
	{ 5038, 0 },
	{ 5100, 255 },
	{ 5100, 0 },
	{ 5038, 255 },
	{ 4707, 255 },
	{ 4707, 0 },
	{ 4099, 255 },
	{ 4099, 0 },
	{ 3812, 255 },
	{ 3812, 0 },
	{ 1179, 255 },
	{ 1179, 0 },
	{ 892, 255 },
	{ 892, 0 },
	{ 286, 255 },
	{ 286, 0 },
	{ 0, 255 },
	{ 0 },
	{ 5100, 0 },
	{ 5100, 255 },
	{ 4598, 0 },
	{ 4511, 255 },
	{ 3600, 0 },
	{ 3529, 255 },
	{ 2400, 0 },
	{ 2550, 255 },
	{ 1400, 0 },
	{ 1569, 255 },
	{ 800, 0 },
	{ 784, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000957A4[] = {
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00095844[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00095168, NULL, NULL, NULL, uv_000953EC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 16, poly_000951A8, NULL, NULL, NULL, uv_00095464, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00095258, NULL, NULL, NULL, uv_00095584, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_0009526E, NULL, NULL, NULL, uv_000955AC, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_00095286, NULL, NULL, NULL, uv_000955D4, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_000952AA, NULL, NULL, NULL, uv_00095614, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, poly_000952BC, NULL, NULL, NULL, uv_00095634, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 6, poly_000952FC, NULL, NULL, NULL, uv_000956AC, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 11, poly_00095384, NULL, NULL, NULL, uv_000957A4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009591C[] = {
	{ -100, 135, -40 },
	{ -100, 285, -40 },
	{ -100, 135, 90 },
	{ -100, 285, 90 },
	{ -110, 135, 100 },
	{ -110, 285, 100 },
	{ -140, 135, 100 },
	{ -140, 285, 100 },
	{ -150, 135, 110 },
	{ -150, 285, 110 },
	{ -150, 135, 140 },
	{ -150, 285, 140 },
	{ -140, 135, 150 },
	{ -140, 285, 150 },
	{ -110, 135, 150 },
	{ -110, 285, 150 },
	{ -100, 135, 160 },
	{ -100, 285, 160 },
	{ -100, 135, 290 },
	{ -100, 285, 290 },
	{ -110, 135, 300 },
	{ -110, 285, 300 },
	{ -140, 135, 300 },
	{ -140, 285, 300 },
	{ -150, 135, 310 },
	{ -150, 285, 310 },
	{ -150, 135, 430 },
	{ -150, 285, 430 },
	{ -150, 135, 440 },
	{ -150, 285, 440 },
	{ -100, 10, -40 },
	{ -100, 10, 0 },
	{ -100, 50, 90 },
	{ -110, 50, 100 },
	{ -150, 90, 140 },
	{ -140, 90, 150 },
	{ -110, 90, 150 },
	{ -100, 90, 160 },
	{ -100, 90, 290 },
	{ -110, 90, 300 },
	{ -140, 90, 300 },
	{ -150, 90, 310 },
	{ -100, 40, 60 },
	{ -100, 50, 60 },
	{ -150, 80, 140 },
	{ -150, 60, 110 },
	{ -140, 60, 100 },
	{ -140, 50, 100 },
	{ -100, 15, -40 },
	{ -100, 55, 90 },
	{ -110, 55, 100 },
	{ -150, 95, 310 },
	{ -140, 95, 300 },
	{ -110, 95, 300 },
	{ -100, 95, 290 },
	{ -100, 95, 160 },
	{ -110, 95, 150 },
	{ -140, 95, 150 },
	{ -150, 95, 140 },
	{ -100, 45, 55 },
	{ -100, 45, 35 },
	{ -100, 35, 35 },
	{ -100, 35, 15 },
	{ -100, 25, 15 },
	{ -100, 20, 0 },
	{ -100, 40, 40 },
	{ -100, 30, 40 },
	{ -100, 30, 20 },
	{ -100, 15, -5 },
	{ -100, 25, -5 },
	{ -100, 20, 20 },
	{ -100, 55, 55 },
	{ -100, 135, -5 },
	{ -100, 285, -5 },
	{ -100, 285, 55 },
	{ -100, 135, 55 },
	{ -150, 70, 125 },
	{ -150, 80, 125 },
	{ -150, 70, 110 },
	{ -150, 75, 110 },
	{ -150, 95, 135 },
	{ -150, 85, 135 },
	{ -150, 85, 120 },
	{ -150, 75, 120 },
	{ -145.9f, 75, 105.9f },
	{ -135, 55, 100 },
	{ -135, 65, 100 },
	{ -140, 65, 100 },
	{ -145.9f, 65, 105.9f },
	{ -150, 55, 430 },
	{ -150, 55, 315 },
	{ -150, 95, 315 },
	{ -150, 50, 310 },
	{ -150, 50, 440 },
	{ -150, 55, 345 },
	{ -150, 55, 405 },
	{ -150, 105, 405 },
	{ -150, 105, 345 },
	{ -150, 100, 350 },
	{ -150, 50, 350 },
	{ -150, 100, 400 },
	{ -150, 50, 400 },
	{ -153, 90, 310 },
	{ -153, 95, 310 },
	{ -153, 135, 310 },
	{ -153, 285, 310 },
	{ -150, 50, 430 },
	{ -150, 55, 440 },
	{ -100, 145, -40 },
	{ -100, 145, -5 },
	{ -100, 145, 55 },
	{ -100, 145, 90 },
	{ -110, 145, 100 },
	{ -140, 145, 100 },
	{ -150, 145, 440 },
	{ -150, 145, 430 },
	{ -150, 145, 310 },
	{ -153, 145, 310 },
	{ -140, 145, 300 },
	{ -110, 145, 300 },
	{ -100, 145, 290 },
	{ -100, 145, 160 },
	{ -110, 145, 150 },
	{ -140, 145, 150 },
	{ -150, 145, 140 },
	{ -150, 145, 110 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00095F04[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.92388f, 0, -0.382683f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.322006f, 0, -0.9467379f },
	{ -0.322006f, 0, -0.9467379f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.92388f, 0, -0.382683f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.967538f, 0, 0.252725f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.322006f, 0, -0.9467379f },
	{ -0.8944269f, 0, 0.447214f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.707108f, 0, -0.707106f },
	{ -0.252725f, 0, -0.967538f },
	{ 0, 0, -1 },
	{ -1, 0, 0 },
	{ -0.92388f, 0, -0.382683f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.322006f, 0, -0.9467379f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.92388f, 0, 0.382683f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.862857f, 0, -0.505448f },
	{ -0.92388f, 0, -0.382682f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.382683f, 0, -0.92388f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.9467379f, 0, 0.322006f },
	{ -0.9467379f, 0, 0.322006f },
	{ -0.9467379f, 0, 0.322006f },
	{ -0.9467379f, 0, 0.322006f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.92388f, 0, -0.382683f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.382683f, 0, -0.92388f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.9467379f, 0, 0.322006f },
	{ -0.322006f, 0, -0.9467379f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.92388f, 0, -0.382683f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000964EC = { vertex_0009591C, normal_00095F04, LengthOfArray<Sint32>(vertex_0009591C), meshlist_00095844, matlist_000950B4, LengthOfArray<Uint16>(meshlist_00095844), LengthOfArray<Uint16>(matlist_000950B4), { -126.5f, 147.5f, 200 }, 276.5976f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00096514 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000964EC, 120, 0, -30, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00096548[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 21, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00096624[] = {
	4, 43, 38, 44, 40,
	4, 21, 28, 15, 27,
	4, 7, 6, 31, 10,
	4, 33, 36, 34, 35,
	4, 2, 3, 43, 38,
	4, 0, 1, 40, 44,
	4, 30, 24, 33, 36
};

extern "C" __declspec(dllexport) Sint16 poly_0009666A[] = {
	6, 1, 0, 5, 4, 7, 6,
	4, 31, 10, 13, 12,
	6, 24, 30, 26, 29, 27, 15
};

extern "C" __declspec(dllexport) Sint16 poly_00096690[] = {
	4, 9, 10, 8, 6,
	4, 19, 24, 16, 26,
	4, 0, 18, 4, 17,
	4, 20, 27, 22, 28
};

extern "C" __declspec(dllexport) Sint16 poly_000966B8[] = {
	4, 11, 12, 9, 10
};

extern "C" __declspec(dllexport) Sint16 poly_000966C2[] = {
	6, 21, 15, 14, 7, 13, 31
};

extern "C" __declspec(dllexport) Sint16 poly_000966D0[] = {
	3, 20, 22, 23,
	8, 23, 11, 20, 8, 16, 17, 19, 18,
	3, 11, 9, 8
};

extern "C" __declspec(dllexport) Sint16 poly_000966F2[] = {
	3, 36, 41, 35,
	0x8000u | 5, 35, 42, 41, 37, 39,
	4, 39, 40, 37, 38
};

extern "C" __declspec(dllexport) Sint16 poly_00096710[] = {
	4, 27, 20, 26, 16,
	4, 8, 6, 17, 4
};

extern "C" __declspec(dllexport) Sint16 poly_00096724[] = {
	4, 32, 25, 37, 42,
	4, 3, 32, 38, 37,
	4, 18, 0, 39, 40,
	0x8000u | 6, 24, 36, 19, 41, 18, 39
};

extern "C" __declspec(dllexport) Sint16 poly_00096750[] = {
	4, 30, 1, 29, 5
};

extern "C" __declspec(dllexport) Sint16 poly_0009675A[] = {
	4, 7, 15, 5, 29
};

extern "C" __declspec(dllexport) NJS_TEX uv_00096764[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000967D4[] = {
	{ 1275, 254 },
	{ 1275, 0 },
	{ 1147, 254 },
	{ 1147, 0 },
	{ 382, 254 },
	{ 382, 0 },
	{ 382, 254 },
	{ 382, 0 },
	{ 0, 254 },
	{ 0 },
	{ 1275, 0 },
	{ 1275, 254 },
	{ 1147, 0 },
	{ 1147, 254 },
	{ 382, 0 },
	{ 382, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00096814[] = {
	{ 0, 255 },
	{ 1275, 255 },
	{ 0 },
	{ 1275, 0 },
	{ 0, 255 },
	{ 1275, 255 },
	{ 0 },
	{ 1275, 0 },
	{ 1275, 255 },
	{ 0, 255 },
	{ 1275, 0 },
	{ 0 },
	{ 0 },
	{ 1275, 0 },
	{ 0, 255 },
	{ 1275, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00096854[] = {
	{ 0, -254 },
	{ 0, 254 },
	{ 254, -254 },
	{ 254, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00096864[] = {
	{ 749, 0 },
	{ 688, 0 },
	{ 765, 254 },
	{ 76, 0 },
	{ 0, 254 },
	{ 15, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009687C[] = {
	{ 229, 178 },
	{ 229, 239 },
	{ 0, 254 },
	{ 0, 254 },
	{ 0, -510 },
	{ 229, 178 },
	{ 229, -432 },
	{ 688, 178 },
	{ 688, -432 },
	{ 765, 178 },
	{ 765, -432 },
	{ 0, -510 },
	{ 229, -494 },
	{ 229, -432 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000968B4[] = {
	{ 0, 255 },
	{ 1376, 255 },
	{ 0 },
	{ 0 },
	{ 1530, 0 },
	{ 1376, 255 },
	{ 0 },
	{ 153, 255 },
	{ 1376, 255 },
	{ 0, 255 },
	{ 1530, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000968E4[] = {
	{ 0, 254 },
	{ 0, -254 },
	{ 254, 254 },
	{ 254, -254 },
	{ 0, -254 },
	{ 0, 254 },
	{ 254, -254 },
	{ 254, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00096904[] = {
	{ 3059, 254 },
	{ 0, 254 },
	{ 3059, 0 },
	{ 0 },
	{ 3059, 254 },
	{ 0, 254 },
	{ 3059, 0 },
	{ 0 },
	{ 382, 254 },
	{ 3059, 254 },
	{ 382, 0 },
	{ 3059, 0 },
	{ 3059, 254 },
	{ 3059, 0 },
	{ 382, 254 },
	{ 382, 0 },
	{ 3059, 254 },
	{ 3059, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009694C[] = {
	{ 0 },
	{ 1785, 0 },
	{ 0, 255 },
	{ 1785, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009695C[] = {
	{ 0, -255 },
	{ 765, -255 },
	{ 0, 255 },
	{ 765, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009696C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_00096624, NULL, NULL, NULL, uv_00096764, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_0009666A, NULL, NULL, NULL, uv_000967D4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_00096690, NULL, NULL, NULL, uv_00096814, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_000966B8, NULL, NULL, NULL, uv_00096854, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_000966C2, NULL, NULL, NULL, uv_00096864, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 3, poly_000966D0, NULL, NULL, NULL, uv_0009687C, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 3, poly_000966F2, NULL, NULL, NULL, uv_000968B4, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 2, poly_00096710, NULL, NULL, NULL, uv_000968E4, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 4, poly_00096724, NULL, NULL, NULL, uv_00096904, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 1, poly_00096750, NULL, NULL, NULL, uv_0009694C, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 1, poly_0009675A, NULL, NULL, NULL, uv_0009695C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00096A74[] = {
	{ -20, -20, -25 },
	{ -20, -25, -25 },
	{ -25, -25, -25 },
	{ -25, -20, -25 },
	{ -20, -20, -20 },
	{ -20, -25, -20 },
	{ -20, -20, 10 },
	{ -20, -25, 10 },
	{ -20, 15, 10 },
	{ -24, 15, 10 },
	{ -24, -20, 10 },
	{ -25, 15, 25 },
	{ -25, -20, 25 },
	{ -25, -25, 25 },
	{ 24.99953f, -25, 25 },
	{ 20, -25, 10 },
	{ 20, 15, -20 },
	{ -20, 15, -20 },
	{ -20, 15, -25 },
	{ 20, 15, -25 },
	{ 20, 15, 10 },
	{ 24, -25, 10 },
	{ 24, 15, 10 },
	{ 24.99953f, 15, 25 },
	{ 20, -20, -25 },
	{ 25, 20, -25 },
	{ 20, -20, -20 },
	{ 20, -20, 10 },
	{ 24, -20, 10 },
	{ 20, -25, -20 },
	{ 20, -25, -25 },
	{ -24, -25, 10 },
	{ -25, 20, -25 },
	{ 20, -25, -27 },
	{ 25, -25, -27 },
	{ 25, -20, -27 },
	{ 20, -20, -27 },
	{ -25, 20, -27 },
	{ -25, -20, -27 },
	{ -20, 15, -27 },
	{ -20, -20, -27 },
	{ 20, 15, -27 },
	{ 25, 20, -27 },
	{ -25, -25, -27 },
	{ -20, -25, -27 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00096C90[] = {
	{ 1, 0, 0 },
	{ 0.8944269f, 0.447214f, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.301511f, 0.904534f, 0.301511f },
	{ 0.301511f, -0.904534f, 0.301511f },
	{ 0.556079f, -0.580932f, 0.594386f },
	{ 0.683184f, 0, 0.7302459f },
	{ 0.720645f, -0.691637f, 0.048043f },
	{ 0.997785f, 0, 0.066519f },
	{ 0.720645f, 0.691637f, 0.048043f },
	{ 0, 1, 0 },
	{ -0.301511f, 0.904534f, 0.301511f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.301511f, -0.904534f, 0.301511f },
	{ 0, 0.721617f, 0.692293f },
	{ 0, -0.721617f, 0.692293f },
	{ 0, -1, 0 },
	{ -1, 0, 0 },
	{ 0, 1, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.8944269f, 0.447214f, 0 },
	{ 0.556079f, 0.580932f, 0.594386f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.301511f, -0.301511f, -0.904534f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.301511f, -0.301511f, -0.904534f },
	{ 0, 0.7071069f, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00096EAC = { vertex_00096A74, normal_00096C90, LengthOfArray<Sint32>(vertex_00096A74), meshlist_0009696C, matlist_00096548, LengthOfArray<Uint16>(meshlist_0009696C), LengthOfArray<Uint16>(matlist_00096548), { 0, -2.5f, -1 }, 36.06938f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00096ED4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00096EAC, -55, 25, -475, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00096F08[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 21, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00096FE4[] = {
	10, 4, 5, 2, 3, 0, 1, 37, 41, 35, 40,
	14, 21, 29, 32, 31, 33, 30, 19, 27, 22, 26, 23, 10, 24, 16
};

extern "C" __declspec(dllexport) Sint16 poly_00097018[] = {
	0x8000u | 6, 32, 21, 39, 20, 34, 28,
	4, 13, 0, 36, 37,
	0x8000u | 6, 36, 13, 38, 14, 33, 19
};

extern "C" __declspec(dllexport) Sint16 poly_0009703E[] = {
	0x8000u | 5, 8, 5, 9, 10, 16
};

extern "C" __declspec(dllexport) Sint16 poly_0009704A[] = {
	3, 15, 17, 18,
	8, 18, 7, 15, 6, 11, 12, 14, 13
};

extern "C" __declspec(dllexport) Sint16 poly_00097064[] = {
	3, 33, 38, 32,
	0x8000u | 5, 32, 39, 38, 34, 36,
	4, 36, 37, 34, 35
};

extern "C" __declspec(dllexport) Sint16 poly_00097082[] = {
	4, 14, 19, 11, 22,
	4, 0, 13, 2, 12,
	4, 15, 23, 17, 24
};

extern "C" __declspec(dllexport) Sint16 poly_000970A0[] = {
	4, 23, 15, 22, 11,
	4, 6, 4, 12, 2
};

extern "C" __declspec(dllexport) Sint16 poly_000970B4[] = {
	4, 9, 25, 16, 24
};

extern "C" __declspec(dllexport) Sint16 poly_000970BE[] = {
	4, 27, 1, 26, 3
};

extern "C" __declspec(dllexport) Sint16 poly_000970C8[] = {
	4, 5, 10, 3, 26
};

extern "C" __declspec(dllexport) Sint16 poly_000970D2[] = {
	4, 17, 24, 18, 25
};

extern "C" __declspec(dllexport) NJS_TEX uv_000970DC[] = {
	{ 873, 0 },
	{ 873, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 326, 0 },
	{ 326, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 72, 0 },
	{ 72, 255 },
	{ 0 },
	{ 0, 255 },
	{ 72, 0 },
	{ 72, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 326, 0 },
	{ 326, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 873, 0 },
	{ 873, 255 },
	{ 1020, 0 },
	{ 1020, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009713C[] = {
	{ 3059, 0 },
	{ 3059, 254 },
	{ 0 },
	{ 0, 254 },
	{ 3059, 0 },
	{ 3059, 254 },
	{ 382, 254 },
	{ 3059, 254 },
	{ 382, 0 },
	{ 3059, 0 },
	{ 3059, 0 },
	{ 3059, 254 },
	{ 382, 0 },
	{ 382, 254 },
	{ 3059, 0 },
	{ 3059, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009717C[] = {
	{ 0, 254 },
	{ 76, 0 },
	{ 765, 254 },
	{ 688, 0 },
	{ 749, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00097190[] = {
	{ 255, 178 },
	{ 255, 239 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, -510 },
	{ 255, 178 },
	{ 255, -432 },
	{ 424, 178 },
	{ 424, -432 },
	{ 510, 178 },
	{ 510, -432 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000971BC[] = {
	{ 0, 255 },
	{ 1376, 255 },
	{ 0 },
	{ 0 },
	{ 1530, 0 },
	{ 1376, 255 },
	{ 0 },
	{ 153, 255 },
	{ 1376, 255 },
	{ 0, 255 },
	{ 1530, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000971EC[] = {
	{ 0, 255 },
	{ 1275, 255 },
	{ 0 },
	{ 1275, 0 },
	{ 1275, 255 },
	{ 0, 255 },
	{ 1275, 0 },
	{ 0 },
	{ 0 },
	{ 1275, 0 },
	{ 0, 255 },
	{ 1275, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009721C[] = {
	{ 254, 254 },
	{ 254, -764 },
	{ 0, 254 },
	{ 0, -764 },
	{ 254, -764 },
	{ 254, 254 },
	{ 0, -764 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009723C[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009724C[] = {
	{ 0 },
	{ 1785, 0 },
	{ 0, 255 },
	{ 1785, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009725C[] = {
	{ 0 },
	{ 1020, 0 },
	{ 0, 255 },
	{ 1020, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009726C[] = {
	{ 254, -254 },
	{ 254, 254 },
	{ 0, -254 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009727C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00096FE4, NULL, NULL, NULL, uv_000970DC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_00097018, NULL, NULL, NULL, uv_0009713C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0009703E, NULL, NULL, NULL, uv_0009717C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_0009704A, NULL, NULL, NULL, uv_00097190, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 3, poly_00097064, NULL, NULL, NULL, uv_000971BC, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 3, poly_00097082, NULL, NULL, NULL, uv_000971EC, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, poly_000970A0, NULL, NULL, NULL, uv_0009721C, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 1, poly_000970B4, NULL, NULL, NULL, uv_0009723C, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 1, poly_000970BE, NULL, NULL, NULL, uv_0009724C, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 1, poly_000970C8, NULL, NULL, NULL, uv_0009725C, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 1, poly_000970D2, NULL, NULL, NULL, uv_0009726C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00097384[] = {
	{ -20, -20, -25.00004f },
	{ -20, -25, -25.00004f },
	{ -20, -20, -20.00004f },
	{ -20, -25, -20.00004f },
	{ -20, -20, -10.00004f },
	{ -20, -25, -10.00004f },
	{ -20, 15, -10.00004f },
	{ -24.99941f, 15, 4.999977f },
	{ -24.99941f, -25, 4.999964f },
	{ 25, -25, 4.999964f },
	{ 20, -25, -10.00004f },
	{ 20, 15, -20.00004f },
	{ -20, 15, -20.00004f },
	{ -20, 15, -25.00004f },
	{ 20, 15, -25.00004f },
	{ 20, 15, -10.00004f },
	{ 24, -25, -10.00004f },
	{ 24, 15, -10.00004f },
	{ 25, 15, 4.999964f },
	{ 20, -20, -25.00004f },
	{ 25, 20, -25.00004f },
	{ 25, -20, -25.00004f },
	{ 20, -20, -20.00004f },
	{ 20, -20, -10.00004f },
	{ 24, -20, -10.00004f },
	{ 25, -20, 4.999964f },
	{ 20, -25, -20.00004f },
	{ 20, -25, -25.00004f },
	{ -25, 20, -25.00004f },
	{ 25, -25, -25.00004f },
	{ 20, -25, -27.00004f },
	{ 25, -25, -27.00004f },
	{ 25, -20, -27.00004f },
	{ 20, -20, -27.00004f },
	{ -25, 20, -27.00004f },
	{ -25, -20, -27.00004f },
	{ -20, 15, -27.00004f },
	{ -20, -20, -27.00004f },
	{ 20, 15, -27.00004f },
	{ 25, 20, -27.00004f },
	{ -25, -25, -27.00004f },
	{ -20, -25, -27.00004f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009757C[] = {
	{ 1, 0, 0 },
	{ 0.8944269f, 0.447214f, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 1, 0, 0 },
	{ 0.413054f, 0.910706f, 0 },
	{ 0.413054f, -0.910706f, 0 },
	{ 0, -1, 0 },
	{ 0, 1, 0 },
	{ -0.720645f, 0.691637f, 0.048043f },
	{ -0.301511f, 0.904534f, 0.301511f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.301511f, -0.904534f, 0.301511f },
	{ -0.556079f, 0.580932f, 0.594386f },
	{ -0.556079f, -0.580932f, 0.594386f },
	{ -0.720645f, -0.691637f, 0.048043f },
	{ -1, 0, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.683184f, 0, 0.7302459f },
	{ -0.997785f, 0, 0.066519f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.8944269f, 0.447214f, 0 },
	{ 0, 1, 0 },
	{ 1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0.301511f, -0.301511f, -0.904534f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.301511f, -0.301511f, -0.904534f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0, 0, -1 },
	{ 0.7071069f, 0, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00097774 = { vertex_00097384, normal_0009757C, LengthOfArray<Sint32>(vertex_00097384), meshlist_0009727C, matlist_00096F08, LengthOfArray<Uint16>(meshlist_0009727C), LengthOfArray<Uint16>(matlist_00096F08), { 0, -2.5f, -11.00003f }, 29.68164f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009779C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00097774, -55, 125, 437, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000977D0[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00097820[] = {
	0x8000u | 22, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43,
	0x8000u | 12, 10, 22, 9, 24, 8, 26, 7, 28, 6, 30, 5, 32,
	0x8000u | 10, 42, 0, 40, 1, 38, 2, 36, 3, 34, 4
};

extern "C" __declspec(dllexport) Sint16 poly_0009787E[] = {
	0x8000u | 8, 49, 21, 48, 23, 51, 22, 50, 10,
	0x8000u | 8, 44, 0, 47, 42, 46, 43, 45, 11
};

extern "C" __declspec(dllexport) Sint16 poly_000978A2[] = {
	0x8000u | 22, 23, 21, 25, 20, 27, 19, 29, 18, 31, 17, 33, 16, 35, 15, 37, 14, 39, 13, 41, 12, 43, 11
};

extern "C" __declspec(dllexport) Sint16 poly_000978D0[] = {
	4, 5, 4, 32, 34
};

extern "C" __declspec(dllexport) NJS_TEX uv_000978DC[] = {
	{ 0 },
	{ 0, -255 },
	{ 772, 0 },
	{ 824, -255 },
	{ 1145, 2 },
	{ 1192, -255 },
	{ 1528, 2 },
	{ 1559, -254 },
	{ 1911, 2 },
	{ 1927, -255 },
	{ 2295, 2 },
	{ 2295, -255 },
	{ 1911, 2 },
	{ 1927, -255 },
	{ 1528, 2 },
	{ 1559, -254 },
	{ 1145, 2 },
	{ 1192, -255 },
	{ 772, 0 },
	{ 824, -255 },
	{ 0 },
	{ 0, -255 },
	{ 0, 255 },
	{ 0 },
	{ 772, 255 },
	{ 772, 0 },
	{ 1145, 255 },
	{ 1145, 2 },
	{ 1528, 255 },
	{ 1528, 2 },
	{ 1911, 255 },
	{ 1911, 2 },
	{ 2295, 255 },
	{ 2295, 2 },
	{ 0 },
	{ 0, 255 },
	{ 772, 0 },
	{ 772, 255 },
	{ 1145, 2 },
	{ 1145, 255 },
	{ 1528, 2 },
	{ 1528, 255 },
	{ 1911, 2 },
	{ 1911, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009798C[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 765, 255 },
	{ 765, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 765, 255 },
	{ 765, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000979CC[] = {
	{ 9180, 0 },
	{ 9180, 255 },
	{ 7530, 0 },
	{ 7530, 255 },
	{ 6794, 0 },
	{ 6794, 255 },
	{ 6059, 0 },
	{ 6059, 255 },
	{ 5324, 0 },
	{ 5324, 255 },
	{ 4589, 0 },
	{ 4589, 255 },
	{ 3854, 0 },
	{ 3854, 255 },
	{ 3119, 0 },
	{ 3119, 255 },
	{ 2384, 0 },
	{ 2384, 255 },
	{ 1648, 0 },
	{ 1648, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00097A24[] = {
	{ 0, 255 },
	{ 254, 255 },
	{ 0 },
	{ 254, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00097A34[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00097820, NULL, NULL, NULL, uv_000978DC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0009787E, NULL, NULL, NULL, uv_0009798C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000978A2, NULL, NULL, NULL, uv_000979CC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_000978D0, NULL, NULL, NULL, uv_00097A24, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00097A94[] = {
	{ 46, 5, 0 },
	{ 46, 40.49245f, 0 },
	{ 42.66508f, 57.25824f, 0 },
	{ 32.88907f, 71.88907f, 0 },
	{ 18.25824f, 81.66508f, 0 },
	{ 1, 85.09795f, 0 },
	{ -16.25824f, 81.66508f, 0 },
	{ -30.88908f, 71.88907f, 0 },
	{ -40.66509f, 57.25823f, 0 },
	{ -44, 40.49245f, 0 },
	{ -44, 5, 0 },
	{ 41, 5, 0 },
	{ 41, 40, 0 },
	{ 37.95518f, 55.30734f, 0 },
	{ 29.28427f, 68.28426f, 0 },
	{ 16.30733f, 76.95518f, 0 },
	{ 1, 80, 0 },
	{ -14.30734f, 76.95518f, 0 },
	{ -27.28428f, 68.28426f, 0 },
	{ -35.95519f, 55.30733f, 0 },
	{ -39, 39.99999f, 0 },
	{ -39, 5, 0 },
	{ -44, 5, -5 },
	{ -39, 5, -5 },
	{ -44, 40.49245f, -5 },
	{ -39, 39.99999f, -5 },
	{ -40.66509f, 57.25823f, -5 },
	{ -35.95519f, 55.30733f, -5 },
	{ -30.88908f, 71.88907f, -5 },
	{ -27.28428f, 68.28426f, -5 },
	{ -16.25824f, 81.66508f, -5 },
	{ -14.30734f, 76.95518f, -5 },
	{ 1, 85.09795f, -5 },
	{ 1, 80, -5 },
	{ 18.25824f, 81.66508f, -5 },
	{ 16.30733f, 76.95518f, -5 },
	{ 32.88907f, 71.88907f, -5 },
	{ 29.28427f, 68.28426f, -5 },
	{ 42.66508f, 57.25824f, -5 },
	{ 37.95518f, 55.30734f, -5 },
	{ 46, 40.49245f, -5 },
	{ 41, 40, -5 },
	{ 46, 5, -5 },
	{ 41, 5, -5 },
	{ 46, 0, 0 },
	{ 41, 0, 0 },
	{ 41, 0, -5 },
	{ 46, 0, -5 },
	{ -39, 0, -5 },
	{ -39, 0, 0 },
	{ -44, 0, 0 },
	{ -44, 0, -5 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00097D04[] = {
	{ 1, 0, 0 },
	{ 0.995185f, 0.098017f, 0 },
	{ 0.92388f, 0.382683f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.382683f, 0.92388f, 0 },
	{ 0, 1, 0 },
	{ -0.382683f, 0.92388f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.92388f, 0.382683f, 0 },
	{ -0.995185f, 0.098017f, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.995185f, -0.098017f, 0 },
	{ -0.92388f, -0.382683f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.382683f, -0.92388f, 0 },
	{ 0, -1, 0 },
	{ 0.382683f, -0.92388f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.92388f, -0.382683f, 0 },
	{ 0.995185f, -0.098017f, 0 },
	{ 1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.724383f, 0.07134499f, -0.685697f },
	{ 0.680317f, -0.06700499f, -0.729849f },
	{ -0.689402f, 0.285559f, -0.665719f },
	{ 0.607119f, -0.251477f, -0.753767f },
	{ -0.527645f, 0.527645f, -0.665719f },
	{ 0.464669f, -0.464669f, -0.753767f },
	{ -0.285559f, 0.689401f, -0.665719f },
	{ 0.251477f, -0.60712f, -0.753767f },
	{ 0, 0.7462029f, -0.665719f },
	{ 0, -0.657141f, -0.753767f },
	{ 0.285559f, 0.689401f, -0.665719f },
	{ -0.251477f, -0.607119f, -0.753767f },
	{ 0.527645f, 0.527645f, -0.665719f },
	{ -0.464669f, -0.464669f, -0.753767f },
	{ 0.689401f, 0.285559f, -0.665719f },
	{ -0.607119f, -0.251477f, -0.753767f },
	{ 0.724383f, 0.07134499f, -0.6856959f },
	{ -0.680317f, -0.06700499f, -0.729849f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00097F74 = { vertex_00097A94, normal_00097D04, LengthOfArray<Sint32>(vertex_00097A94), meshlist_00097A34, matlist_000977D0, LengthOfArray<Uint16>(meshlist_00097A34), LengthOfArray<Uint16>(matlist_000977D0), { 1, 42.54898f, -2.5f }, 45.06939f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00097F9C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00097F74, 74, 0, -400, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00097FD0[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00098020[] = {
	4, 3, 5, 9, 11,
	4, 8, 10, 2, 4
};

extern "C" __declspec(dllexport) Sint16 poly_00098034[] = {
	4, 7, 11, 1, 5,
	4, 0, 4, 6, 10
};

extern "C" __declspec(dllexport) Sint16 poly_00098048[] = {
	4, 9, 8, 3, 2
};

extern "C" __declspec(dllexport) Sint16 poly_00098052[] = {
	4, 6, 7, 0, 1
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009805C[] = {
	{ 255, -255 },
	{ 255, 255 },
	{ 0, -240 },
	{ 0, 255 },
	{ 0, -240 },
	{ 0, 255 },
	{ 255, -255 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009807C[] = {
	{ 764, 255 },
	{ 764, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 765, 255 },
	{ 765, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009809C[] = {
	{ 255, -510 },
	{ 255, 255 },
	{ 0, -510 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000980AC[] = {
	{ 765, 0 },
	{ 0 },
	{ 765, 254 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000980BC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00098020, NULL, NULL, NULL, uv_0009805C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00098034, NULL, NULL, NULL, uv_0009807C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00098048, NULL, NULL, NULL, uv_0009809C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_00098052, NULL, NULL, NULL, uv_000980AC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009811C[] = {
	{ 25, -25, -25 },
	{ 25, -25, 25 },
	{ 25, 15, -25 },
	{ 25, 15, 25 },
	{ 25, -20, -25 },
	{ 25, -20, 25 },
	{ -5, -25, -23.00001f },
	{ -5, -25, 22.99999f },
	{ -5, 14, -23.00001f },
	{ -5, 14, 22.99999f },
	{ -5, -20, -23.00001f },
	{ -5, -20, 22.99999f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000981AC[] = {
	{ 0.048043f, 0.691637f, 0.720645f },
	{ 0.048043f, 0.691637f, -0.720645f },
	{ 0.07076699f, -0.698166f, 0.712429f },
	{ 0.070768f, -0.698166f, -0.712429f },
	{ 0.066519f, 0, 0.997785f },
	{ 0.066519f, 0, -0.997785f },
	{ 0.04605f, 0.721624f, 0.690752f },
	{ 0.04605f, 0.721624f, -0.690752f },
	{ 0.07026999f, -0.7131439f, 0.697487f },
	{ 0.07027099f, -0.7131439f, -0.697487f },
	{ 0.066519f, 0, 0.997785f },
	{ 0.066519f, 0, -0.997785f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009823C = { vertex_0009811C, normal_000981AC, LengthOfArray<Sint32>(vertex_0009811C), meshlist_000980BC, matlist_00097FD0, LengthOfArray<Uint16>(meshlist_000980BC), LengthOfArray<Uint16>(matlist_00097FD0), { 10, -5, 0 }, 32.01562f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00098264 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009823C, 825, 25, -99.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00098298[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000982E8[] = {
	4, 9, 11, 3, 5,
	4, 2, 4, 8, 10
};

extern "C" __declspec(dllexport) Sint16 poly_000982FC[] = {
	4, 1, 5, 7, 11,
	4, 6, 10, 0, 4
};

extern "C" __declspec(dllexport) Sint16 poly_00098310[] = {
	4, 3, 2, 9, 8
};

extern "C" __declspec(dllexport) Sint16 poly_0009831A[] = {
	4, 0, 1, 6, 7
};

extern "C" __declspec(dllexport) NJS_TEX uv_00098324[] = {
	{ 0, -240 },
	{ 0, 255 },
	{ 255, -255 },
	{ 255, 255 },
	{ 255, -255 },
	{ 255, 255 },
	{ 0, -240 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00098344[] = {
	{ 0, 255 },
	{ 0 },
	{ 764, 255 },
	{ 764, 0 },
	{ 765, 255 },
	{ 765, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00098364[] = {
	{ 0, -510 },
	{ 0, 255 },
	{ 255, -510 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00098374[] = {
	{ 765, 254 },
	{ 0, 255 },
	{ 765, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00098384[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000982E8, NULL, NULL, NULL, uv_00098324, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000982FC, NULL, NULL, NULL, uv_00098344, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00098310, NULL, NULL, NULL, uv_00098364, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_0009831A, NULL, NULL, NULL, uv_00098374, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000983E4[] = {
	{ 25, -25, 25 },
	{ 25, -25, -25 },
	{ 25, 15, 25 },
	{ 25, 15, -25 },
	{ 25, -20, 25 },
	{ 25, -20, -25 },
	{ -5, -25, 23.00001f },
	{ -5, -25, -22.99999f },
	{ -5, 14, 23.00001f },
	{ -5, 14, -22.99999f },
	{ -5, -20, 23.00001f },
	{ -5, -20, -22.99999f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00098474[] = {
	{ 0.048043f, 0.691637f, -0.720645f },
	{ 0.048043f, 0.691637f, 0.720645f },
	{ 0.07076699f, -0.698166f, -0.712429f },
	{ 0.070768f, -0.698166f, 0.712429f },
	{ 0.066519f, 0, -0.997785f },
	{ 0.066519f, 0, 0.997785f },
	{ 0.04605f, 0.721624f, -0.690752f },
	{ 0.04605f, 0.721624f, 0.690752f },
	{ 0.07026999f, -0.7131439f, -0.697487f },
	{ 0.07027099f, -0.7131439f, 0.697487f },
	{ 0.066519f, 0, -0.997785f },
	{ 0.066519f, 0, 0.997785f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00098504 = { vertex_000983E4, normal_00098474, LengthOfArray<Sint32>(vertex_000983E4), meshlist_00098384, matlist_00098298, LengthOfArray<Uint16>(meshlist_00098384), LengthOfArray<Uint16>(matlist_00098298), { 10, -5, 0 }, 32.01562f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009852C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00098504, 825, 25, -149.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00098560[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000985B0[] = {
	4, 9, 11, 3, 5,
	4, 2, 4, 8, 10
};

extern "C" __declspec(dllexport) Sint16 poly_000985C4[] = {
	4, 1, 5, 7, 11,
	4, 6, 10, 0, 4
};

extern "C" __declspec(dllexport) Sint16 poly_000985D8[] = {
	4, 3, 2, 9, 8
};

extern "C" __declspec(dllexport) Sint16 poly_000985E2[] = {
	4, 0, 1, 6, 7
};

extern "C" __declspec(dllexport) NJS_TEX uv_000985EC[] = {
	{ 0, -240 },
	{ 0, 255 },
	{ 255, -255 },
	{ 255, 255 },
	{ 255, -255 },
	{ 255, 255 },
	{ 0, -240 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009860C[] = {
	{ 0, 255 },
	{ 0 },
	{ 764, 255 },
	{ 764, 0 },
	{ 765, 255 },
	{ 765, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009862C[] = {
	{ 0, -510 },
	{ 0, 255 },
	{ 255, -510 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009863C[] = {
	{ 765, 254 },
	{ 0, 255 },
	{ 765, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009864C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000985B0, NULL, NULL, NULL, uv_000985EC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000985C4, NULL, NULL, NULL, uv_0009860C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000985D8, NULL, NULL, NULL, uv_0009862C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_000985E2, NULL, NULL, NULL, uv_0009863C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000986AC[] = {
	{ 25, -25, 25 },
	{ 25, -25, -25 },
	{ 25, 15, 25 },
	{ 25, 15, -25 },
	{ 25, -20, 25 },
	{ 25, -20, -25 },
	{ -5, -25, 23.00001f },
	{ -5, -25, -22.99999f },
	{ -5, 14, 23.00001f },
	{ -5, 14, -22.99999f },
	{ -5, -20, 23.00001f },
	{ -5, -20, -22.99999f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009873C[] = {
	{ 0.048043f, 0.691637f, -0.720645f },
	{ 0.048043f, 0.691637f, 0.720645f },
	{ 0.07076699f, -0.698166f, -0.712429f },
	{ 0.070768f, -0.698166f, 0.712429f },
	{ 0.066519f, 0, -0.997785f },
	{ 0.066519f, 0, 0.997785f },
	{ 0.04605f, 0.721624f, -0.690752f },
	{ 0.04605f, 0.721624f, 0.690752f },
	{ 0.07026999f, -0.7131439f, -0.697487f },
	{ 0.07027099f, -0.7131439f, 0.697487f },
	{ 0.066519f, 0, -0.997785f },
	{ 0.066519f, 0, 0.997785f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000987CC = { vertex_000986AC, normal_0009873C, LengthOfArray<Sint32>(vertex_000986AC), meshlist_0009864C, matlist_00098560, LengthOfArray<Uint16>(meshlist_0009864C), LengthOfArray<Uint16>(matlist_00098560), { 10, -5, 0 }, 32.01562f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000987F4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000987CC, 825, 25, -49.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00098828[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009888C[] = {
	14, 15, 6, 29, 12, 30, 10, 23, 8, 37, 0, 36, 1, 19, 4,
	0x8000u | 14, 4, 5, 1, 2, 0, 3, 8, 9, 10, 11, 12, 13, 6, 7,
	14, 18, 5, 35, 2, 34, 3, 22, 9, 31, 11, 28, 13, 14, 7,
	3, 28, 33, 31,
	3, 23, 21, 30,
	3, 31, 20, 22,
	3, 30, 32, 29,
	4, 37, 27, 23, 24,
	4, 22, 25, 34, 26,
	3, 19, 16, 36,
	3, 35, 17, 18
};

extern "C" __declspec(dllexport) Sint16 poly_0009892A[] = {
	4, 35, 57, 17, 58,
	4, 39, 18, 58, 17,
	3, 19, 41, 16,
	3, 31, 33, 52,
	4, 33, 28, 52, 51,
	10, 24, 27, 61, 37, 55, 36, 54, 16, 59, 41,
	3, 25, 44, 60,
	4, 38, 51, 14, 28,
	0x8000u | 15, 15, 40, 29, 50, 32, 53, 30, 49, 21, 43, 23, 47, 24, 45, 61,
	4, 25, 22, 44, 46,
	0x8000u | 6, 57, 56, 34, 60, 26, 25,
	3, 57, 35, 34,
	0x8000u | 7, 22, 46, 20, 42, 31, 48, 52
};

extern "C" __declspec(dllexport) Sint16 poly_000989D0[] = {
	4, 51, 38, 50, 40,
	4, 48, 52, 49, 53,
	4, 46, 42, 47, 43,
	4, 60, 44, 61, 45,
	4, 39, 58, 41, 59
};

extern "C" __declspec(dllexport) Sint16 poly_00098A02[] = {
	4, 52, 51, 53, 50,
	4, 42, 48, 43, 49,
	4, 44, 46, 45, 47,
	4, 56, 60, 55, 61,
	4, 58, 57, 59, 54
};

extern "C" __declspec(dllexport) Sint16 poly_00098A34[] = {
	4, 57, 56, 54, 55
};

extern "C" __declspec(dllexport) NJS_TEX uv_00098A40[] = {
	{ 1785, -254 },
	{ 1785, -765 },
	{ 1372, -254 },
	{ 1372, -765 },
	{ 1067, -84 },
	{ 1067, -502 },
	{ 761, 84 },
	{ 761, -254 },
	{ 558, 84 },
	{ 558, -254 },
	{ 254, 84 },
	{ 254, -254 },
	{ 0, 255 },
	{ 0, -254 },
	{ 0, 255 },
	{ 0, -510 },
	{ 328, 255 },
	{ 328, -510 },
	{ 724, 255 },
	{ 724, -510 },
	{ 987, 255 },
	{ 987, -510 },
	{ 1501, 255 },
	{ 1501, -510 },
	{ 2016, 255 },
	{ 2016, -510 },
	{ 2550, 255 },
	{ 2550, -510 },
	{ 0, 255 },
	{ 0, -254 },
	{ 254, 84 },
	{ 254, -254 },
	{ 558, 84 },
	{ 558, -254 },
	{ 761, 84 },
	{ 761, -254 },
	{ 1067, -84 },
	{ 1067, -502 },
	{ 1372, -254 },
	{ 1372, -765 },
	{ 1784, -254 },
	{ 1784, -765 },
	{ 1372, -254 },
	{ 1372, -84 },
	{ 1067, -84 },
	{ 761, 84 },
	{ 1067, 84 },
	{ 1067, -84 },
	{ 1067, -84 },
	{ 1067, 84 },
	{ 761, 84 },
	{ 1067, -84 },
	{ 1372, -84 },
	{ 1372, -254 },
	{ 558, 84 },
	{ 558, 255 },
	{ 761, 84 },
	{ 761, 255 },
	{ 761, 84 },
	{ 761, 255 },
	{ 558, 84 },
	{ 558, 255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 254, 84 },
	{ 254, 84 },
	{ 254, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00098B50[] = {
	{ 553, 0 },
	{ 662, 255 },
	{ 773, 0 },
	{ 884, 255 },
	{ 0, 255 },
	{ 0 },
	{ 662, 255 },
	{ 553, 0 },
	{ 0 },
	{ 0, 255 },
	{ 553, 0 },
	{ 3263, 0 },
	{ 3926, 0 },
	{ 4036, 255 },
	{ 4203, 0 },
	{ 3926, 0 },
	{ 4313, 255 },
	{ 4036, 255 },
	{ 2101, 0 },
	{ 1658, 0 },
	{ 1547, 255 },
	{ 1437, 0 },
	{ 1327, 255 },
	{ 773, 0 },
	{ 884, 255 },
	{ 553, 0 },
	{ 662, 255 },
	{ 0, 255 },
	{ 2101, 0 },
	{ 2212, 255 },
	{ 1547, 255 },
	{ 5100, 255 },
	{ 4313, 255 },
	{ 5100, 0 },
	{ 4203, 0 },
	{ 5100, 0 },
	{ 5100, 255 },
	{ 4203, 0 },
	{ 4313, 255 },
	{ 3926, 0 },
	{ 4036, 255 },
	{ 3263, 0 },
	{ 3374, 255 },
	{ 2985, 0 },
	{ 3096, 255 },
	{ 2323, 0 },
	{ 2433, 255 },
	{ 2101, 0 },
	{ 2212, 255 },
	{ 1547, 255 },
	{ 2323, 0 },
	{ 2101, 0 },
	{ 2433, 255 },
	{ 2212, 255 },
	{ 884, 255 },
	{ 1327, 255 },
	{ 1437, 0 },
	{ 1547, 255 },
	{ 1658, 0 },
	{ 2101, 0 },
	{ 884, 255 },
	{ 773, 0 },
	{ 1437, 0 },
	{ 2323, 0 },
	{ 2433, 255 },
	{ 2985, 0 },
	{ 3096, 255 },
	{ 3263, 0 },
	{ 3374, 255 },
	{ 4036, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00098C68[] = {
	{ 765, -255 },
	{ 765, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 765, -255 },
	{ 765, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 765, -255 },
	{ 765, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 765, -255 },
	{ 765, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 765, -255 },
	{ 765, 255 },
	{ 0, -255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00098CB8[] = {
	{ 0, -254 },
	{ 0, -508 },
	{ 1020, -254 },
	{ 1020, -508 },
	{ 0 },
	{ 0, -254 },
	{ 1020, 0 },
	{ 1020, -254 },
	{ 0, 255 },
	{ 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 0 },
	{ 0, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 0, 255 },
	{ 0 },
	{ 1020, 255 },
	{ 1020, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00098D08[] = {
	{ 0 },
	{ 0, 255 },
	{ 1020, 0 },
	{ 1020, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00098D18[] = {
	{ NJD_MESHSET_TRIMESH | 0, 11, poly_0009888C, NULL, NULL, NULL, uv_00098A40, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 13, poly_0009892A, NULL, NULL, NULL, uv_00098B50, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 5, poly_000989D0, NULL, NULL, NULL, uv_00098C68, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 5, poly_00098A02, NULL, NULL, NULL, uv_00098CB8, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_00098A34, NULL, NULL, NULL, uv_00098D08, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00098D90[] = {
	{ 25, 10, -32.5f },
	{ 25, 10, -62.5f },
	{ -25, 10, -62.5f },
	{ -25, 10, -32.5f },
	{ 25, 10, -87.5f },
	{ -25, 10, -87.5f },
	{ 25, 45, 88.00001f },
	{ -25, 45, 88 },
	{ 25, 10, -12.5f },
	{ -25, 10, -12.5f },
	{ 25, 27, 17.5f },
	{ -25, 27, 17.5f },
	{ 25, 45, 47.5f },
	{ -25, 45, 47.5f },
	{ -25, 9.999997f, 88 },
	{ 25, 9.999997f, 88.00001f },
	{ 25, -25, -62.5f },
	{ -25, -25, -62.5f },
	{ -25, -25, -87.5f },
	{ 25, -25, -87.5f },
	{ -25, -13.3f, 17.5f },
	{ 25, -13.3f, 17.5f },
	{ -25, -13.3f, -12.5f },
	{ 25, -13.3f, -12.5f },
	{ 25, -25, -12.5f },
	{ -25, -25, -12.5f },
	{ -25, -25, -32.5f },
	{ 25, -25, -32.5f },
	{ -25, 10, 47.5f },
	{ 25, 10, 47.5f },
	{ 25, -1.7f, 17.5f },
	{ -25, -1.7f, 17.5f },
	{ 25, -1.7f, 47.5f },
	{ -25, -1.7f, 47.5f },
	{ -25, -13.3f, -32.5f },
	{ -25, -13.3f, -62.5f },
	{ 25, -13.3f, -62.5f },
	{ 25, -13.3f, -32.5f },
	{ -25, 4.999998f, 88 },
	{ -25, -30, -87.5f },
	{ 25, 4.999998f, 88.00001f },
	{ 25, -30, -87.5f },
	{ -25, -18.29999f, 22.5f },
	{ 25, -18.29999f, 22.5f },
	{ -25, -30, -7.5f },
	{ 25, -30, -7.5f },
	{ -25, -18.29999f, -7.5f },
	{ 25, -18.29999f, -7.5f },
	{ -25, -6.7f, 22.5f },
	{ 25, -6.7f, 22.5f },
	{ 25, 5, 52.5f },
	{ -25, 5, 52.5f },
	{ -25, -6.7f, 52.5f },
	{ 25, -6.7f, 52.5f },
	{ 25, -18.29999f, -57.5f },
	{ 25, -18.29999f, -37.5f },
	{ -25, -18.29999f, -37.5f },
	{ -25, -18.29999f, -57.5f },
	{ -25, -30, -57.5f },
	{ 25, -30, -57.5f },
	{ -25, -30, -37.5f },
	{ 25, -30, -37.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00099078[] = {
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ -0.769237f, -0.617853f, 0.162891f },
	{ 0.769237f, -0.617853f, 0.162891f },
	{ -0.709916f, -0.6083789f, 0.354814f },
	{ 0.709916f, -0.6083789f, 0.354814f },
	{ -0.65167f, -0.73098f, 0.20247f },
	{ 0.65167f, -0.73098f, 0.20247f },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.904534f, 0.301511f, -0.301511f },
	{ -0.904534f, 0.301511f, -0.301511f },
	{ 0.904534f, 0.301511f, -0.301511f },
	{ -0.904534f, 0.301511f, -0.301511f },
	{ -0.904534f, 0.301511f, -0.301511f },
	{ 0.904534f, 0.301511f, -0.301511f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.904534f, 0.301511f, -0.301511f },
	{ -0.904534f, 0.301511f, 0.301511f },
	{ 0.904534f, 0.301511f, 0.301511f },
	{ 0.904534f, 0.301511f, -0.301511f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00099360 = { vertex_00098D90, normal_00099078, LengthOfArray<Sint32>(vertex_00098D90), meshlist_00098D18, matlist_00098828, LengthOfArray<Uint16>(meshlist_00098D18), LengthOfArray<Uint16>(matlist_00098828), { 0, 7.5f, 0.250008f }, 95.42701f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00099388 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00099360, 925, -5, -262.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000993BC[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009940C[] = {
	6, 22, 23, 3, 2, 7, 6,
	0x8000u | 5, 7, 3, 1, 22, 21,
	3, 7, 5, 1,
	3, 6, 2, 4,
	0x8000u | 5, 4, 0, 2, 19, 23
};

extern "C" __declspec(dllexport) Sint16 poly_00099442[] = {
	8, 13, 15, 10, 8, 11, 9, 20, 18
};

extern "C" __declspec(dllexport) Sint16 poly_00099454[] = {
	3, 20, 21, 11,
	6, 21, 1, 11, 5, 10, 13,
	3, 12, 13, 5,
	3, 15, 14, 8,
	3, 19, 18, 0,
	6, 18, 9, 0, 8, 4, 14
};

extern "C" __declspec(dllexport) Sint16 poly_00099490[] = {
	4, 6, 4, 16, 14,
	4, 7, 6, 17, 16,
	4, 5, 7, 12, 17
};

extern "C" __declspec(dllexport) NJS_TEX uv_000994B0[] = {
	{ 0, 255 },
	{ 0, -510 },
	{ 262, 255 },
	{ 262, -510 },
	{ 2549, 255 },
	{ 2549, -510 },
	{ 1530, -240 },
	{ 163, -765 },
	{ 163, -254 },
	{ 0, -765 },
	{ 0, -254 },
	{ 1530, -240 },
	{ 1530, 255 },
	{ 163, -254 },
	{ 1530, -240 },
	{ 163, -765 },
	{ 1530, 255 },
	{ 1530, 255 },
	{ 163, -254 },
	{ 163, -765 },
	{ 0, -254 },
	{ 0, -765 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00099508[] = {
	{ 765, -1785 },
	{ 0, -1785 },
	{ 765, -1536 },
	{ 0, -1536 },
	{ 765, 69 },
	{ 0, 69 },
	{ 765, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00099528[] = {
	{ 0, 255 },
	{ 0 },
	{ 324, 255 },
	{ 0 },
	{ 324, 0 },
	{ 324, 255 },
	{ 3134, 0 },
	{ 3134, 255 },
	{ 3570, 255 },
	{ 3570, 0 },
	{ 3570, 255 },
	{ 3134, 0 },
	{ 3570, 255 },
	{ 3570, 0 },
	{ 3134, 255 },
	{ 0 },
	{ 0, 255 },
	{ 324, 0 },
	{ 0, 255 },
	{ 324, 255 },
	{ 324, 0 },
	{ 3134, 255 },
	{ 3134, 0 },
	{ 3570, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00099588[] = {
	{ 255, -255 },
	{ 255, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 255, -510 },
	{ 255, 255 },
	{ 0, -510 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, -255 },
	{ 0, 255 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000995B8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0009940C, NULL, NULL, NULL, uv_000994B0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00099442, NULL, NULL, NULL, uv_00099508, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 6, poly_00099454, NULL, NULL, NULL, uv_00099528, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_00099490, NULL, NULL, NULL, uv_00099588, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00099618[] = {
	{ 10, 5, -25 },
	{ 10, 5, 25 },
	{ 10, 40, -25 },
	{ 10, 40, 25 },
	{ 135, -30, -25 },
	{ 135, -30, 25 },
	{ 135, 4.000001f, -25 },
	{ 135, 4.000001f, 25 },
	{ 135, -35, -25 },
	{ 10, 0, -25 },
	{ 135, -35, 25 },
	{ 10, 0, 25 },
	{ 155, -30, 23 },
	{ 155, -35, 23 },
	{ 155, -30, -23 },
	{ 155, -35, -23 },
	{ 155, 4.000002f, -23 },
	{ 155, 4.000001f, 23 },
	{ -5, 0, -25 },
	{ -5, 5, -25 },
	{ -5, 0, 25 },
	{ -5, 5, 25 },
	{ -5, 40, 25 },
	{ -5, 40, -25 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00099738[] = {
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ -0.102856f, -0.728794f, 0.676964f },
	{ -0.102856f, -0.728794f, -0.676964f },
	{ -0.049814f, 0, 0.998758f },
	{ -0.049814f, 0, -0.998758f },
	{ -0.12931f, -0.6521249f, 0.7470019f },
	{ -0.12931f, -0.6521249f, -0.7470019f },
	{ 0.064514f, 0.72032f, 0.690636f },
	{ 0.09167f, 0.667376f, 0.739058f },
	{ 0.064514f, 0.72032f, -0.690636f },
	{ 0.09167f, 0.667376f, -0.739058f },
	{ -0.09950399f, 0, -0.995037f },
	{ -0.068164f, 0.728506f, -0.68164f },
	{ -0.09950399f, 0, 0.995037f },
	{ -0.068164f, 0.728506f, 0.68164f },
	{ -0.068164f, -0.728506f, 0.68164f },
	{ -0.068164f, -0.728506f, -0.68164f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00099858 = { vertex_00099618, normal_00099738, LengthOfArray<Sint32>(vertex_00099618), meshlist_000995B8, matlist_000993BC, LengthOfArray<Uint16>(meshlist_000995B8), LengthOfArray<Uint16>(matlist_000993BC), { 75, 2.5f, 0 }, 83.81526f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00099880 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00099858, -25, 0, -575, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000998B4[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00099904[] = {
	3, 0, 3, 7,
	0x8000u | 5, 7, 6, 3, 12, 11
};

extern "C" __declspec(dllexport) Sint16 poly_00099918[] = {
	6, 9, 7, 8, 6, 10, 12
};

extern "C" __declspec(dllexport) Sint16 poly_00099926[] = {
	4, 13, 11, 4, 3,
	4, 14, 13, 5, 4
};

extern "C" __declspec(dllexport) Sint16 poly_0009993A[] = {
	4, 1, 4, 0, 3,
	4, 5, 4, 2, 1
};

extern "C" __declspec(dllexport) NJS_TEX uv_00099950[] = {
	{ 324, 0 },
	{ 3134, 0 },
	{ 324, 255 },
	{ 324, 255 },
	{ 3134, 255 },
	{ 3134, 0 },
	{ 3570, 255 },
	{ 3570, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00099970[] = {
	{ 765, 69 },
	{ 0, 69 },
	{ 765, -1536 },
	{ 0, -1536 },
	{ 765, -1785 },
	{ 0, -1785 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00099988[] = {
	{ 0, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 255, 255 },
	{ 0, -510 },
	{ 0, 255 },
	{ 255, -510 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000999A8[] = {
	{ 163, -765 },
	{ 1530, -240 },
	{ 163, -254 },
	{ 1530, 255 },
	{ 2549, 255 },
	{ 2549, -510 },
	{ 262, 255 },
	{ 262, -510 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000999C8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00099904, NULL, NULL, NULL, uv_00099950, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00099918, NULL, NULL, NULL, uv_00099970, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00099926, NULL, NULL, NULL, uv_00099988, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_0009993A, NULL, NULL, NULL, uv_000999A8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00099A28[] = {
	{ 10, 5, 25 },
	{ 10, 40, 25 },
	{ 10, 40, -25 },
	{ 135, -30, 25 },
	{ 135, 4.000001f, 25 },
	{ 135, 4.000001f, -25 },
	{ 135, -35, 25 },
	{ 10, 0, 25 },
	{ 135, -35, -25 },
	{ 10, 0, -25 },
	{ 155, -35, -23 },
	{ 155, -30, 23 },
	{ 155, -35, 23 },
	{ 155, 4.000002f, 23 },
	{ 155, 4.000001f, -23 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00099ADC[] = {
	{ 0, 0, -1 },
	{ -0.213847f, -0.742524f, -0.634765f },
	{ -0.276751f, -0.960942f, 0 },
	{ -0.049814f, 0, -0.998758f },
	{ -0.12931f, -0.6521249f, -0.7470019f },
	{ -0.144324f, -0.989531f, 0 },
	{ 0.064514f, 0.72032f, -0.690636f },
	{ 0.174855f, 0.6244839f, -0.7612129f },
	{ 0.140538f, 0.990075f, 0 },
	{ 0.26963f, 0.962964f, 0 },
	{ 0, 1, 0 },
	{ -0.09950399f, 0, -0.995037f },
	{ -0.068164f, 0.728506f, -0.68164f },
	{ -0.068164f, -0.728506f, -0.68164f },
	{ 0, -1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00099B90 = { vertex_00099A28, normal_00099ADC, LengthOfArray<Sint32>(vertex_00099A28), meshlist_000999C8, matlist_000998B4, LengthOfArray<Uint16>(meshlist_000999C8), LengthOfArray<Uint16>(matlist_000998B4), { 82.5f, 2.5f, 0 }, 76.6893f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00099BB8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00099B90, -25, 0, -525, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00099BEC[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00099C3C[] = {
	4, 10, 14, 3, 5,
	4, 14, 13, 5, 4
};

extern "C" __declspec(dllexport) Sint16 poly_00099C50[] = {
	4, 5, 2, 3, 0,
	4, 5, 4, 2, 1
};

extern "C" __declspec(dllexport) Sint16 poly_00099C64[] = {
	0x8000u | 5, 0, 3, 8, 10, 11,
	3, 0, 9, 8
};

extern "C" __declspec(dllexport) Sint16 poly_00099C78[] = {
	6, 9, 7, 8, 6, 11, 12
};

extern "C" __declspec(dllexport) NJS_TEX uv_00099C88[] = {
	{ 0, 255 },
	{ 0, -255 },
	{ 255, 255 },
	{ 255, -255 },
	{ 0, -510 },
	{ 0, 255 },
	{ 255, -510 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00099CA8[] = {
	{ 1530, -240 },
	{ 163, -765 },
	{ 1530, 255 },
	{ 163, -254 },
	{ 2549, 255 },
	{ 2549, -510 },
	{ 262, 255 },
	{ 262, -510 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00099CC8[] = {
	{ 324, 0 },
	{ 3134, 0 },
	{ 3134, 255 },
	{ 3570, 0 },
	{ 3570, 255 },
	{ 324, 0 },
	{ 324, 255 },
	{ 3134, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00099CE8[] = {
	{ 765, 69 },
	{ 0, 69 },
	{ 765, -1536 },
	{ 0, -1536 },
	{ 765, -1785 },
	{ 0, -1785 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00099D00[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00099C3C, NULL, NULL, NULL, uv_00099C88, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00099C50, NULL, NULL, NULL, uv_00099CA8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00099C64, NULL, NULL, NULL, uv_00099CC8, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_00099C78, NULL, NULL, NULL, uv_00099CE8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00099D60[] = {
	{ 10, 5, -25 },
	{ 10, 40, 25 },
	{ 10, 40, -25 },
	{ 135, -30, -25 },
	{ 135, 4.000001f, 25 },
	{ 135, 4.000001f, -25 },
	{ 135, -35, 25 },
	{ 10, 0, 25 },
	{ 135, -35, -25 },
	{ 10, 0, -25 },
	{ 155, -30, -23 },
	{ 155, -35, -23 },
	{ 155, -35, 23 },
	{ 155, 4.000002f, 23 },
	{ 155, 4.000001f, -23 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00099E14[] = {
	{ 0, 0, 1 },
	{ -0.276751f, -0.960942f, 0 },
	{ -0.213847f, -0.742524f, 0.634765f },
	{ -0.049814f, 0, 0.998758f },
	{ -0.144324f, -0.989531f, 0 },
	{ -0.12931f, -0.6521249f, 0.7470019f },
	{ 0.140538f, 0.990075f, 0 },
	{ 0.26963f, 0.962964f, 0 },
	{ 0.064514f, 0.72032f, 0.690636f },
	{ 0.174855f, 0.6244839f, 0.7612129f },
	{ -0.09950399f, 0, 0.995037f },
	{ -0.068164f, 0.728506f, 0.68164f },
	{ 0, 1, 0 },
	{ 0, -1, 0 },
	{ -0.068164f, -0.728506f, 0.68164f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00099EC8 = { vertex_00099D60, normal_00099E14, LengthOfArray<Sint32>(vertex_00099D60), meshlist_00099D00, matlist_00099BEC, LengthOfArray<Uint16>(meshlist_00099D00), LengthOfArray<Uint16>(matlist_00099BEC), { 82.5f, 2.5f, 0 }, 76.6893f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00099EF0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00099EC8, -25, 0, -625, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00099F24[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 21, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009A000[] = {
	4, 45, 41, 44, 39,
	4, 15, 27, 21, 28,
	4, 32, 10, 7, 6,
	4, 35, 36, 34, 37,
	4, 44, 39, 2, 3,
	4, 41, 45, 0, 1,
	4, 34, 37, 31, 24
};

extern "C" __declspec(dllexport) Sint16 poly_0009A046[] = {
	6, 0, 1, 4, 5, 6, 7,
	4, 21, 28, 14, 29,
	4, 13, 12, 32, 10,
	6, 31, 24, 30, 26, 15, 27
};

extern "C" __declspec(dllexport) Sint16 poly_0009A076[] = {
	4, 8, 6, 9, 10,
	4, 16, 26, 19, 24,
	4, 4, 17, 0, 18,
	4, 22, 28, 20, 27
};

extern "C" __declspec(dllexport) Sint16 poly_0009A09E[] = {
	4, 9, 10, 11, 12,
	4, 23, 29, 22, 28
};

extern "C" __declspec(dllexport) Sint16 poly_0009A0B2[] = {
	6, 21, 14, 15, 13, 7, 32
};

extern "C" __declspec(dllexport) Sint16 poly_0009A0C0[] = {
	3, 23, 22, 20,
	8, 11, 23, 8, 20, 17, 16, 18, 19,
	3, 8, 9, 11
};

extern "C" __declspec(dllexport) Sint16 poly_0009A0E2[] = {
	3, 36, 43, 37,
	0x8000u | 5, 37, 42, 43, 40, 38,
	4, 38, 39, 40, 41
};

extern "C" __declspec(dllexport) Sint16 poly_0009A100[] = {
	4, 26, 16, 27, 20,
	4, 17, 4, 8, 6
};

extern "C" __declspec(dllexport) Sint16 poly_0009A114[] = {
	4, 30, 5, 31, 1
};

extern "C" __declspec(dllexport) Sint16 poly_0009A11E[] = {
	4, 5, 30, 7, 15
};

extern "C" __declspec(dllexport) Sint16 poly_0009A128[] = {
	4, 39, 38, 3, 33,
	4, 40, 41, 18, 0,
	0x8000u | 6, 18, 40, 19, 42, 24, 37,
	4, 38, 43, 33, 25
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009A154[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009A1C4[] = {
	{ 1275, 0 },
	{ 1275, 254 },
	{ 1147, 0 },
	{ 1147, 254 },
	{ 382, 0 },
	{ 382, 254 },
	{ 382, 254 },
	{ 382, 0 },
	{ 0, 254 },
	{ 0 },
	{ 0, 254 },
	{ 0 },
	{ 382, 254 },
	{ 382, 0 },
	{ 1275, 254 },
	{ 1275, 0 },
	{ 1147, 254 },
	{ 1147, 0 },
	{ 382, 254 },
	{ 382, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009A214[] = {
	{ 0 },
	{ 1275, 0 },
	{ 0, 255 },
	{ 1275, 255 },
	{ 0 },
	{ 1275, 0 },
	{ 0, 255 },
	{ 1275, 255 },
	{ 1275, 0 },
	{ 0 },
	{ 1275, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 1275, 255 },
	{ 0 },
	{ 1275, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009A254[] = {
	{ 254, -254 },
	{ 254, 254 },
	{ 0, -254 },
	{ 0, 254 },
	{ 0, -254 },
	{ 0, 254 },
	{ 254, -254 },
	{ 254, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009A274[] = {
	{ 749, 0 },
	{ 765, 254 },
	{ 688, 0 },
	{ 0, 254 },
	{ 76, 0 },
	{ 15, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009A28C[] = {
	{ 0, 254 },
	{ 229, 239 },
	{ 229, 178 },
	{ 0, -510 },
	{ 0, 254 },
	{ 229, -432 },
	{ 229, 178 },
	{ 688, -432 },
	{ 688, 178 },
	{ 765, -432 },
	{ 765, 178 },
	{ 229, -432 },
	{ 229, -494 },
	{ 0, -510 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009A2C4[] = {
	{ 0 },
	{ 1530, 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 1376, 255 },
	{ 1530, 0 },
	{ 153, 255 },
	{ 0 },
	{ 1530, 0 },
	{ 0 },
	{ 1376, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009A2F4[] = {
	{ 254, 254 },
	{ 254, -254 },
	{ 0, 254 },
	{ 0, -254 },
	{ 254, -254 },
	{ 254, 254 },
	{ 0, -254 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009A314[] = {
	{ 0, 255 },
	{ 1785, 255 },
	{ 0 },
	{ 1785, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009A324[] = {
	{ 0, 255 },
	{ 765, 255 },
	{ 0, -255 },
	{ 765, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009A334[] = {
	{ 3059, 0 },
	{ 0 },
	{ 3059, 254 },
	{ 0, 254 },
	{ 382, 0 },
	{ 3059, 0 },
	{ 382, 254 },
	{ 3059, 254 },
	{ 3059, 254 },
	{ 3059, 0 },
	{ 382, 254 },
	{ 382, 0 },
	{ 3059, 254 },
	{ 3059, 0 },
	{ 3059, 0 },
	{ 0 },
	{ 3059, 254 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009A37C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_0009A000, NULL, NULL, NULL, uv_0009A154, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_0009A046, NULL, NULL, NULL, uv_0009A1C4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_0009A076, NULL, NULL, NULL, uv_0009A214, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_0009A09E, NULL, NULL, NULL, uv_0009A254, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_0009A0B2, NULL, NULL, NULL, uv_0009A274, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 3, poly_0009A0C0, NULL, NULL, NULL, uv_0009A28C, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 3, poly_0009A0E2, NULL, NULL, NULL, uv_0009A2C4, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 2, poly_0009A100, NULL, NULL, NULL, uv_0009A2F4, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 1, poly_0009A114, NULL, NULL, NULL, uv_0009A314, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 1, poly_0009A11E, NULL, NULL, NULL, uv_0009A324, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 4, poly_0009A128, NULL, NULL, NULL, uv_0009A334, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009A484[] = {
	{ -20, -20, 25 },
	{ -20, -25, 25 },
	{ -25, -25, 25 },
	{ -25, -20, 25 },
	{ -20, -20, 20 },
	{ -20, -25, 20 },
	{ -20, -20, -10 },
	{ -20, -25, -10 },
	{ -20, 15, -10 },
	{ -24, 15, -10 },
	{ -24, -20, -10 },
	{ -25, 15, -25 },
	{ -25, -20, -25 },
	{ -25, -25, -25 },
	{ 25, -25, -25 },
	{ 20, -25, -10 },
	{ 20, 15, 20 },
	{ -20, 15, 20 },
	{ -20, 15, 25 },
	{ 20, 15, 25 },
	{ 20, 15, -10 },
	{ 24, -25, -10 },
	{ 24, 15, -10 },
	{ 25, 15, -25 },
	{ 20, -20, 25 },
	{ 25, 20, 25 },
	{ 20, -20, 20 },
	{ 20, -20, -10 },
	{ 24, -20, -10 },
	{ 25, -20, -25 },
	{ 20, -25, 20 },
	{ 20, -25, 25 },
	{ -24, -25, -10 },
	{ -25, 20, 25 },
	{ 20, -25, 27 },
	{ 25, -25, 27 },
	{ 25, -20, 27 },
	{ 20, -20, 27 },
	{ -25, 20, 27 },
	{ -25, -20, 27 },
	{ -20, 15, 27 },
	{ -20, -20, 27 },
	{ 20, 15, 27 },
	{ 25, 20, 27 },
	{ -25, -25, 27 },
	{ -20, -25, 27 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009A6AC[] = {
	{ 1, 0, 0 },
	{ 0.8944269f, 0.447214f, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.301511f, 0.904534f, -0.301511f },
	{ 0.301511f, -0.904534f, -0.301511f },
	{ 0.556079f, -0.580932f, -0.594386f },
	{ 0.683184f, 0, -0.7302459f },
	{ 0.720645f, -0.691637f, -0.048043f },
	{ 0.997785f, 0, -0.066519f },
	{ 0.720645f, 0.691637f, -0.048043f },
	{ -0.720645f, 0.691637f, -0.048043f },
	{ -0.301511f, 0.904534f, -0.301511f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.301511f, -0.904534f, -0.301511f },
	{ -0.556079f, 0.580932f, -0.594386f },
	{ -0.556079f, -0.580932f, -0.594386f },
	{ -0.720645f, -0.691637f, -0.048043f },
	{ -1, 0, 0 },
	{ 0, 1, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.683184f, 0, -0.7302459f },
	{ -0.997785f, 0, -0.066519f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.8944269f, 0.447214f, 0 },
	{ 0.556079f, 0.580932f, -0.594386f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.301511f, -0.301511f, 0.904534f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.301511f, -0.301511f, 0.904534f },
	{ 0, 0.7071069f, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009A8D4 = { vertex_0009A484, normal_0009A6AC, LengthOfArray<Sint32>(vertex_0009A484), meshlist_0009A37C, matlist_00099F24, LengthOfArray<Uint16>(meshlist_0009A37C), LengthOfArray<Uint16>(matlist_00099F24), { 0, -2.5f, 1 }, 36.06938f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009A8FC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009A8D4, -105, 25, -475, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009A930[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 21, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009AA0C[] = {
	4, 3, 38, 10, 37,
	4, 7, 40, 6, 39
};

extern "C" __declspec(dllexport) Sint16 poly_0009AA20[] = {
	6, 16, 1, 18, 4, 15, 13
};

extern "C" __declspec(dllexport) Sint16 poly_0009AA2E[] = {
	14, 0, 31, 29, 32, 22, 33, 24, 34, 17, 35, 18, 36, 16, 37,
	12, 13, 40, 15, 41, 14, 42, 26, 44, 25, 43, 30, 45
};

extern "C" __declspec(dllexport) Sint16 poly_0009AA66[] = {
	4, 3, 9, 6, 7,
	0x8000u | 10, 10, 3, 12, 9, 11, 8, 20, 27, 19, 28
};

extern "C" __declspec(dllexport) Sint16 poly_0009AA86[] = {
	4, 4, 39, 13, 40,
	4, 16, 37, 1, 38
};

extern "C" __declspec(dllexport) Sint16 poly_0009AA9A[] = {
	4, 8, 42, 9, 41,
	4, 12, 36, 11, 35
};

extern "C" __declspec(dllexport) Sint16 poly_0009AAAE[] = {
	4, 9, 41, 7, 40,
	4, 11, 35, 20, 34,
	4, 27, 44, 8, 42,
	4, 10, 37, 12, 36
};

extern "C" __declspec(dllexport) Sint16 poly_0009AAD6[] = {
	4, 5, 23, 2, 21,
	4, 20, 34, 19, 33,
	4, 28, 43, 27, 44,
	4, 21, 32, 2, 31
};

extern "C" __declspec(dllexport) Sint16 poly_0009AAFE[] = {
	3, 32, 21, 33,
	0x8000u | 6, 33, 19, 21, 28, 23, 45,
	3, 43, 28, 45
};

extern "C" __declspec(dllexport) Sint16 poly_0009AB1C[] = {
	4, 17, 18, 14, 15
};

extern "C" __declspec(dllexport) Sint16 poly_0009AB26[] = {
	4, 14, 26, 17, 24
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009AB30[] = {
	{ 0, -254 },
	{ 0, 254 },
	{ 254, -254 },
	{ 254, 254 },
	{ 254, -254 },
	{ 254, 254 },
	{ 0, -254 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009AB50[] = {
	{ 749, 255 },
	{ 764, 0 },
	{ 688, 255 },
	{ 0 },
	{ 76, 255 },
	{ 15, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009AB68[] = {
	{ 0, 255 },
	{ 0 },
	{ 72, 255 },
	{ 72, 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 328, 255 },
	{ 328, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 873, 255 },
	{ 873, 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 873, 255 },
	{ 873, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 328, 255 },
	{ 328, 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 72, 255 },
	{ 72, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009ABD0[] = {
	{ 0, 254 },
	{ 238, -432 },
	{ 0, -510 },
	{ 238, -494 },
	{ 238, 239 },
	{ 0, 254 },
	{ 238, 178 },
	{ 238, -432 },
	{ 396, 179 },
	{ 398, -432 },
	{ 476, 179 },
	{ 478, -432 },
	{ 508, 179 },
	{ 508, -432 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009AC08[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009AC28[] = {
	{ 0, -764 },
	{ 0, 254 },
	{ 255, -764 },
	{ 255, 254 },
	{ 255, -764 },
	{ 255, 254 },
	{ 2, -764 },
	{ 2, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009AC48[] = {
	{ 0 },
	{ 1274, 0 },
	{ 0, 250 },
	{ 1274, 250 },
	{ 0 },
	{ 1274, 0 },
	{ 0, 250 },
	{ 1274, 250 },
	{ 0, 254 },
	{ 1274, 254 },
	{ 0, 4 },
	{ 1274, 4 },
	{ 0, 250 },
	{ 1274, 250 },
	{ 0 },
	{ 1274, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009AC88[] = {
	{ 0, 255 },
	{ 0 },
	{ 3060, 255 },
	{ 3060, 0 },
	{ 0, 255 },
	{ 3060, 255 },
	{ 0 },
	{ 3060, 0 },
	{ 0 },
	{ 3060, 0 },
	{ 0, 255 },
	{ 3060, 255 },
	{ 0 },
	{ 3060, 0 },
	{ 0, 255 },
	{ 3060, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009ACC8[] = {
	{ 0 },
	{ 1530, 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 1376, 255 },
	{ 1530, 0 },
	{ 152, 255 },
	{ 0 },
	{ 1530, 0 },
	{ 1530, 255 },
	{ 152, 255 },
	{ 1530, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009ACF8[] = {
	{ 0, 255 },
	{ 0 },
	{ 1020, 255 },
	{ 1020, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009AD08[] = {
	{ 0, 255 },
	{ 0 },
	{ 1785, 255 },
	{ 1785, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009AD18[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0009AA0C, NULL, NULL, NULL, uv_0009AB30, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0009AA20, NULL, NULL, NULL, uv_0009AB50, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0009AA2E, NULL, NULL, NULL, uv_0009AB68, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_0009AA66, NULL, NULL, NULL, uv_0009ABD0, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_0009AA86, NULL, NULL, NULL, uv_0009AC08, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, poly_0009AA9A, NULL, NULL, NULL, uv_0009AC28, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 4, poly_0009AAAE, NULL, NULL, NULL, uv_0009AC48, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 4, poly_0009AAD6, NULL, NULL, NULL, uv_0009AC88, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 3, poly_0009AAFE, NULL, NULL, NULL, uv_0009ACC8, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 1, poly_0009AB1C, NULL, NULL, NULL, uv_0009ACF8, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 1, poly_0009AB26, NULL, NULL, NULL, uv_0009AD08, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009AE20[] = {
	{ 25.04995f, -25, 24.94996f },
	{ 24.99998f, -25, -5.000031f },
	{ 25.04995f, 20, 24.94996f },
	{ 24.99998f, 15, -5.000031f },
	{ -25.00001f, -25, -5.000031f },
	{ -24.94996f, 20, 25.04999f },
	{ -25.00001f, 15, -5.000031f },
	{ -24.00001f, 15, 9.999969f },
	{ -19.95997f, 15, 20.03997f },
	{ -20.00001f, 15, 9.999969f },
	{ 23.99998f, 15, 9.999969f },
	{ 20.03995f, 15, 19.95997f },
	{ 19.99998f, 15, 9.999969f },
	{ -24.00001f, -25, 9.999969f },
	{ -19.96001f, -25, 20.04f },
	{ -20.00001f, -25, 9.999969f },
	{ 23.99998f, -25, 9.999969f },
	{ 20.03995f, -25, 19.95997f },
	{ 19.99998f, -25, 9.999969f },
	{ 20.05395f, 15, 26.95995f },
	{ 20.04995f, 15, 24.95996f },
	{ 25.05395f, 20, 26.94995f },
	{ 20.05395f, -25, 26.95995f },
	{ -24.94596f, 20, 27.04998f },
	{ 20.04995f, -25, 24.95996f },
	{ -19.94597f, -25, 27.03995f },
	{ -19.94991f, -25, 25.03996f },
	{ -19.94997f, 15, 25.03996f },
	{ -19.94597f, 15, 27.03995f },
	{ 25.05395f, -25, 26.94995f },
	{ -24.94596f, -25, 27.04998f },
	{ 25.04995f, -20, 24.94996f },
	{ 25.05395f, -20, 26.94995f },
	{ 20.05395f, -20, 26.95995f },
	{ 20.04995f, -20, 24.95996f },
	{ 20.03995f, -20, 19.95997f },
	{ 19.99998f, -20, 9.999969f },
	{ 23.99998f, -20, 9.999969f },
	{ 24.99998f, -20, -5.000031f },
	{ -25.00001f, -20, -5.000031f },
	{ -24.00001f, -20, 9.999969f },
	{ -20.00001f, -20, 9.999969f },
	{ -19.95997f, -20, 20.03997f },
	{ -19.94597f, -20, 27.03995f },
	{ -19.94997f, -20, 25.03996f },
	{ -24.94596f, -20, 27.04998f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009B048[] = {
	{ 0.999998f, 0, -0.002f },
	{ -0.720645f, 0.691637f, -0.048043f },
	{ 0.707106f, 0.7071069f, -0.001414f },
	{ -0.720645f, -0.691637f, -0.048043f },
	{ 0.720645f, 0.691637f, -0.048043f },
	{ 0, 1, 0 },
	{ 0.720645f, -0.691637f, -0.048043f },
	{ 0.556079f, -0.580932f, -0.594386f },
	{ 0.70688f, -0.7073309f, -0.002117f },
	{ 0.301608f, -0.904067f, -0.302814f },
	{ -0.556079f, -0.580932f, -0.594386f },
	{ -0.70733f, -0.70688f, 0.002127f },
	{ -0.301409f, -0.905004f, -0.300202f },
	{ 0.556079f, 0.580932f, -0.594386f },
	{ 0.706883f, 0.7073269f, -0.002122f },
	{ 0.301609f, 0.904067f, -0.302813f },
	{ -0.556079f, 0.580932f, -0.594386f },
	{ -0.70733f, 0.70688f, 0.002127f },
	{ -0.301409f, 0.905004f, -0.300202f },
	{ -0.299701f, -0.301513f, 0.905135f },
	{ -0.707105f, -0.7071069f, 0.001414f },
	{ 0.578504f, 0.57735f, 0.5761949f },
	{ -0.705691f, 0, 0.70852f },
	{ 0.001416f, 0.707106f, 0.707106f },
	{ -0.894425f, 0.447214f, 0.001789f },
	{ 0.7085119f, 0.000004f, 0.705699f },
	{ 0.894422f, 0.447221f, -0.001785f },
	{ 0.707105f, -0.7071069f, -0.001414f },
	{ 0.303322f, -0.301512f, 0.903928f },
	{ 0.70852f, 0, 0.705691f },
	{ 0.002006f, 0, 0.999998f },
	{ 0.999998f, 0, -0.002f },
	{ 0.70852f, 0, 0.705691f },
	{ -0.705691f, 0, 0.70852f },
	{ -0.999998f, 0, 0.002f },
	{ -0.9999959f, 0, 0.003006f },
	{ -0.708524f, 0, -0.705687f },
	{ -0.683184f, 0, -0.7302459f },
	{ -0.997785f, 0, -0.066519f },
	{ 0.997785f, 0, -0.066519f },
	{ 0.683184f, 0, -0.7302459f },
	{ 0.705696f, -0.00002f, -0.708515f },
	{ 0.9999959f, -0.00002f, -0.002998f },
	{ 0.708517f, 0.000002f, 0.705694f },
	{ 0.999998f, 0.000002f, -0.001998f },
	{ 0.002006f, 0, 0.999998f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009B270 = { vertex_0009AE20, normal_0009B048, LengthOfArray<Sint32>(vertex_0009AE20), meshlist_0009AD18, matlist_0009A930, LengthOfArray<Uint16>(meshlist_0009AD18), LengthOfArray<Uint16>(matlist_0009A930), { 0.026967f, -2.5f, 11.02498f }, 29.69933f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009B298 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009B270, -105, 125, 437, 0, 0x7FEB, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009B2CC[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009B308[] = {
	0x8000u | 20, 10, 0, 11, 1, 12, 2, 13, 3, 14, 4, 15, 5, 16, 6, 17, 7, 18, 8, 19, 9,
	0x8000u | 20, 39, 29, 38, 28, 37, 27, 36, 26, 35, 25, 34, 24, 33, 23, 32, 22, 31, 21, 30, 20,
	0x8000u | 20, 29, 9, 28, 8, 27, 7, 26, 6, 25, 5, 24, 4, 23, 3, 22, 2, 21, 1, 20, 0
};

extern "C" __declspec(dllexport) Sint16 poly_0009B386[] = {
	0x8000u | 20, 50, 40, 51, 41, 52, 42, 53, 43, 54, 44, 55, 45, 56, 46, 57, 47, 58, 48, 59, 49
};

extern "C" __declspec(dllexport) Sint16 poly_0009B3B0[] = {
	0x8000u | 20, 40, 10, 41, 11, 42, 12, 43, 13, 44, 14, 45, 15, 46, 16, 47, 17, 48, 18, 49, 19,
	0x8000u | 20, 30, 50, 31, 51, 32, 52, 33, 53, 34, 54, 35, 55, 36, 56, 37, 57, 38, 58, 39, 59
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009B404[] = {
	{ 0, 255 },
	{ 0, -255 },
	{ 149, 255 },
	{ 150, -255 },
	{ 294, 255 },
	{ 294, -255 },
	{ 414, 255 },
	{ 414, -255 },
	{ 538, 255 },
	{ 538, -255 },
	{ 692, 255 },
	{ 692, -255 },
	{ 884, 255 },
	{ 884, -255 },
	{ 1118, 255 },
	{ 1120, -255 },
	{ 1351, 255 },
	{ 1351, -255 },
	{ 1530, 255 },
	{ 1530, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 132, 255 },
	{ 132, -255 },
	{ 209, 255 },
	{ 209, -255 },
	{ 282, 255 },
	{ 282, -255 },
	{ 400, 255 },
	{ 400, -255 },
	{ 560, 255 },
	{ 560, -255 },
	{ 746, 255 },
	{ 746, -255 },
	{ 940, 255 },
	{ 940, -255 },
	{ 1106, 255 },
	{ 1105, -255 },
	{ 1275, 255 },
	{ 1275, -255 },
	{ 1530, -510 },
	{ 1530, 255 },
	{ 1370, -510 },
	{ 1351, 255 },
	{ 1277, -510 },
	{ 1120, 254 },
	{ 1190, -510 },
	{ 884, 255 },
	{ 1049, -510 },
	{ 692, 254 },
	{ 856, -510 },
	{ 538, 255 },
	{ 632, -510 },
	{ 414, 254 },
	{ 400, -510 },
	{ 294, 255 },
	{ 202, -510 },
	{ 150, 255 },
	{ 0, -510 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009B4F4[] = {
	{ 765, -1275 },
	{ 0, -1275 },
	{ 765, -1072 },
	{ 0, -1124 },
	{ 765, -873 },
	{ 0, -980 },
	{ 765, -641 },
	{ 0, -860 },
	{ 765, -416 },
	{ 0, -734 },
	{ 765, -225 },
	{ 0, -581 },
	{ 765, -83 },
	{ 0, -390 },
	{ 765, 3 },
	{ 0, -155 },
	{ 765, 95 },
	{ 0, 76 },
	{ 765, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009B544[] = {
	{ 0, 255 },
	{ 0 },
	{ 249, 255 },
	{ 249, 0 },
	{ 490, 255 },
	{ 490, 0 },
	{ 689, 255 },
	{ 689, 0 },
	{ 899, 255 },
	{ 899, 0 },
	{ 1153, 255 },
	{ 1153, 0 },
	{ 1474, 255 },
	{ 1474, 0 },
	{ 1865, 255 },
	{ 1865, 0 },
	{ 2251, 255 },
	{ 2251, 0 },
	{ 2550, 255 },
	{ 2550, 0 },
	{ 2550, 0 },
	{ 2550, 255 },
	{ 2212, 0 },
	{ 2212, 255 },
	{ 1882, 0 },
	{ 1882, 255 },
	{ 1495, 0 },
	{ 1495, 255 },
	{ 1120, 0 },
	{ 1120, 255 },
	{ 800, 0 },
	{ 800, 255 },
	{ 564, 0 },
	{ 564, 255 },
	{ 418, 0 },
	{ 418, 255 },
	{ 264, 0 },
	{ 264, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009B5E4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0009B308, NULL, NULL, NULL, uv_0009B404, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0009B386, NULL, NULL, NULL, uv_0009B4F4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0009B3B0, NULL, NULL, NULL, uv_0009B544, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009B62C[] = {
	{ 11.14023f, 19, 56.78595f },
	{ 4.831917f, 20, 45.1723f },
	{ -2.987221f, 20, 35.04712f },
	{ -9.17054f, 20, 26.50226f },
	{ -16.86058f, 20, 18.53271f },
	{ -26.76105f, 20, 9.41339f },
	{ -38.50315f, 20, -2.882935f },
	{ -49.12455f, 20, -20.73974f },
	{ -53.18099f, 20, -40.75247f },
	{ -53.19648f, 20, -56.57788f },
	{ 11.14023f, -15, 56.78595f },
	{ 4.831917f, -15, 45.1723f },
	{ -2.987221f, -15, 35.04712f },
	{ -9.17054f, -15, 26.50226f },
	{ -16.86058f, -15, 18.53271f },
	{ -26.76105f, -15, 9.41339f },
	{ -38.50315f, -15, -2.882935f },
	{ -49.12455f, -15, -20.73974f },
	{ -53.18099f, -15, -40.75247f },
	{ -53.19648f, -15, -56.57788f },
	{ 50.85645f, 19, 33.5777f },
	{ 45.67578f, 20, 20.13763f },
	{ 38.93702f, 20, 7.801758f },
	{ 29.1983f, 20, -5.556793f },
	{ 18.15741f, 20, -17.1561f },
	{ 8.12661f, 20, -26.40283f },
	{ 0.998482f, 20, -33.53534f },
	{ -2.459129f, 20, -38.69214f },
	{ -3.380547f, 20, -45.2095f },
	{ -3.196579f, 20, -56.47787f },
	{ 50.85643f, -15, 33.5777f },
	{ 45.67578f, -15, 20.13763f },
	{ 38.93702f, -15, 7.801758f },
	{ 29.1983f, -15, -5.556793f },
	{ 18.15741f, -15, -17.1561f },
	{ 8.12661f, -15, -26.40283f },
	{ 0.998482f, -15, -33.53534f },
	{ -2.459129f, -15, -38.69214f },
	{ -3.380547f, -15, -45.2095f },
	{ -3.196579f, -15, -56.47787f },
	{ 11.14023f, -20, 56.78595f },
	{ 4.831917f, -20, 45.1723f },
	{ -2.987221f, -20, 35.04712f },
	{ -9.17054f, -20, 26.50226f },
	{ -16.86058f, -20, 18.53271f },
	{ -26.76105f, -20, 9.41339f },
	{ -38.50315f, -20, -2.882935f },
	{ -49.12455f, -20, -20.73974f },
	{ -53.18099f, -20, -40.75247f },
	{ -53.19648f, -20, -56.57788f },
	{ 50.85643f, -20, 33.5777f },
	{ 45.67578f, -20, 20.13763f },
	{ 38.93702f, -20, 7.801758f },
	{ 29.1983f, -20, -5.556793f },
	{ 18.15741f, -20, -17.1561f },
	{ 8.12661f, -20, -26.40283f },
	{ 0.998482f, -20, -33.53534f },
	{ -2.459129f, -20, -38.69214f },
	{ -3.380547f, -20, -45.2095f },
	{ -3.196579f, -20, -56.47787f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009B8FC[] = {
	{ 0.617441f, -0.682013f, -0.391949f },
	{ 0.55486f, -0.732473f, -0.394479f },
	{ 0.569105f, -0.703615f, -0.425494f },
	{ 0.529468f, -0.723328f, -0.443239f },
	{ 0.489448f, -0.713794f, -0.500937f },
	{ 0.500435f, -0.6999649f, -0.509523f },
	{ 0.581997f, -0.6826119f, -0.441951f },
	{ 0.691506f, -0.671275f, -0.266849f },
	{ 0.7244779f, -0.685417f, -0.073042f },
	{ 0.707777f, -0.706435f, -0.000693f },
	{ 0.878734f, 0, -0.477312f },
	{ 0.837781f, 0, -0.546007f },
	{ 0.800901f, 0, -0.598797f },
	{ 0.766784f, 0, -0.641905f },
	{ 0.6988569f, 0, -0.715262f },
	{ 0.700716f, 0, -0.7134399f },
	{ 0.7964039f, 0, -0.604765f },
	{ 0.932945f, 0, -0.36002f },
	{ 0.994956f, 0, -0.100312f },
	{ 0.999999f, 0, -0.0009789999f },
	{ -0.664484f, -0.719874f, 0.200604f },
	{ -0.658014f, -0.698881f, 0.280328f },
	{ -0.609091f, -0.6927789f, 0.386091f },
	{ -0.553791f, -0.6926889f, 0.462057f },
	{ -0.501038f, -0.6998309f, 0.509114f },
	{ -0.486579f, -0.711745f, 0.506616f },
	{ -0.528343f, -0.7296219f, 0.434172f },
	{ -0.605926f, -0.760965f, 0.231918f },
	{ -0.68725f, -0.725164f, 0.042707f },
	{ -0.710244f, -0.70386f, -0.011595f },
	{ -0.93308f, 0, 0.359668f },
	{ -0.9073139f, 0, 0.420454f },
	{ -0.84461f, 0, 0.535382f },
	{ -0.767836f, 0, 0.640646f },
	{ -0.701431f, 0, 0.712738f },
	{ -0.692701f, 0, 0.721225f },
	{ -0.7726f, 0, 0.6348929f },
	{ -0.933928f, 0, 0.357461f },
	{ -0.9980749f, 0, 0.062022f },
	{ -0.999867f, 0, -0.016324f },
	{ 0.6275679f, 0.699969f, -0.340883f },
	{ 0.5765409f, 0.725544f, -0.375749f },
	{ 0.569105f, 0.703615f, -0.425494f },
	{ 0.529468f, 0.723328f, -0.443239f },
	{ 0.489448f, 0.713794f, -0.500937f },
	{ 0.500435f, 0.6999649f, -0.509523f },
	{ 0.581997f, 0.6826119f, -0.441951f },
	{ 0.691506f, 0.671275f, -0.266849f },
	{ 0.7244779f, 0.685417f, -0.073042f },
	{ 0.707777f, 0.706435f, -0.000693f },
	{ -0.626894f, 0.740683f, 0.241644f },
	{ -0.654507f, 0.692552f, 0.303302f },
	{ -0.609091f, 0.6927789f, 0.386091f },
	{ -0.553791f, 0.6926889f, 0.462057f },
	{ -0.501038f, 0.6998309f, 0.509114f },
	{ -0.486579f, 0.711745f, 0.506616f },
	{ -0.528343f, 0.7296219f, 0.434172f },
	{ -0.605926f, 0.760965f, 0.231918f },
	{ -0.68725f, 0.725164f, 0.042707f },
	{ -0.710244f, 0.70386f, -0.011595f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009BBCC = { vertex_0009B62C, normal_0009B8FC, LengthOfArray<Sint32>(vertex_0009B62C), meshlist_0009B5E4, matlist_0009B2CC, LengthOfArray<Uint16>(meshlist_0009B5E4), LengthOfArray<Uint16>(matlist_0009B2CC), { -1.170013f, 0, 0.104034f }, 76.93889f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009BBF4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009BBCC, -76.81345f, 120, 498.5279f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009BC28[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009BC8C[] = {
	3, 60, 10, 11,
	8, 17, 63, 62, 46, 65, 75, 71, 51,
	7, 71, 21, 65, 73, 62, 16, 17,
	3, 20, 70, 64,
	6, 41, 74, 49, 50, 42, 43,
	6, 44, 54, 51, 52, 50, 43,
	7, 40, 60, 61, 11, 64, 72, 20,
	3, 63, 47, 46,
	0x8000u | 6, 46, 75, 48, 51, 45, 44,
	7, 70, 50, 64, 74, 61, 41, 40,
	0x8000u | 5, 15, 21, 18, 73, 16,
	7, 13, 22, 20, 24, 21, 14, 15,
	0x8000u | 6, 13, 12, 20, 19, 72, 11
};

extern "C" __declspec(dllexport) Sint16 poly_0009BD3A[] = {
	0x8000u | 24, 17, 9, 16, 8, 18, 7, 15, 6, 14, 5, 24, 25, 22, 23, 13, 4, 12, 3, 19, 2, 11, 1, 10, 0
};

extern "C" __declspec(dllexport) Sint16 poly_0009BD6C[] = {
	4, 26, 27, 29, 28,
	0x8000u | 8, 29, 26, 69, 66, 59, 56, 58, 57,
	0x8000u | 6, 58, 57, 68, 67, 28, 27
};

extern "C" __declspec(dllexport) Sint16 poly_0009BD96[] = {
	6, 26, 66, 70, 56, 50, 57,
	0x8000u | 8, 26, 27, 21, 67, 71, 57, 51, 50,
	4, 21, 26, 20, 70
};

extern "C" __declspec(dllexport) Sint16 poly_0009BDC0[] = {
	0x8000u | 24, 39, 47, 38, 46, 37, 48, 36, 45, 35, 44, 55, 54, 53, 52, 34, 43, 33, 42, 32, 49, 31, 41, 30, 40
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009BDF4[] = {
	{ 765, 255 },
	{ 0, 255 },
	{ 0, -1299 },
	{ 0, -5865 },
	{ 764, -5865 },
	{ 765, -4106 },
	{ 1529, -4106 },
	{ 765, -3886 },
	{ 1529, -3886 },
	{ 765, -3312 },
	{ 1529, -3312 },
	{ 765, -3312 },
	{ 0, -3312 },
	{ 765, -3886 },
	{ 0, -3886 },
	{ 765, -4106 },
	{ 0, -4106 },
	{ 0, -5865 },
	{ 0, -2296 },
	{ 765, -2296 },
	{ 765, -1520 },
	{ 0, -2295 },
	{ 0, -2094 },
	{ 198, -2094 },
	{ 0, -1387 },
	{ 657, -2094 },
	{ 764, -1986 },
	{ 764, -52 },
	{ 765, -466 },
	{ 0, -466 },
	{ 764, -1387 },
	{ 0, -1387 },
	{ 764, -1986 },
	{ 1529, 255 },
	{ 765, 255 },
	{ 765, -1299 },
	{ 0, -1299 },
	{ 765, -1520 },
	{ 0, -1520 },
	{ 0, -2296 },
	{ 764, -5865 },
	{ 1529, -5865 },
	{ 1529, -4106 },
	{ 0, 254 },
	{ 0, 55 },
	{ 198, 55 },
	{ 0, -466 },
	{ 657, 55 },
	{ 764, -52 },
	{ 765, -2296 },
	{ 1529, -2296 },
	{ 765, -1520 },
	{ 1529, -1520 },
	{ 765, -1299 },
	{ 1529, -1299 },
	{ 1529, 255 },
	{ 657, 55 },
	{ 0, -466 },
	{ 198, 55 },
	{ 0, 55 },
	{ 0, 254 },
	{ 764, -1986 },
	{ 764, -1387 },
	{ 0, -1387 },
	{ 765, -466 },
	{ 0, -466 },
	{ 764, -52 },
	{ 657, 55 },
	{ 764, -1986 },
	{ 657, -2094 },
	{ 0, -1387 },
	{ 198, -2094 },
	{ 0, -2094 },
	{ 0, -2295 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009BF1C[] = {
	{ 255, -12495 },
	{ 0, -12495 },
	{ 255, -9471 },
	{ 0, -9573 },
	{ 255, -8936 },
	{ 0, -9161 },
	{ 255, -8064 },
	{ 0, -8285 },
	{ 255, -7777 },
	{ 0, -7872 },
	{ 255, -6991 },
	{ 0, -7024 },
	{ 255, -5247 },
	{ 0, -5272 },
	{ 255, -4113 },
	{ 0, -4075 },
	{ 255, -3825 },
	{ 0, -3662 },
	{ 255, -2953 },
	{ 0, -2786 },
	{ 255, -2419 },
	{ 0, -2373 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009BF7C[] = {
	{ 1019, -508 },
	{ 510, -508 },
	{ 1019, 254 },
	{ 510, 254 },
	{ 0, 254 },
	{ 0, -508 },
	{ 510, 254 },
	{ 510, -508 },
	{ 1019, 254 },
	{ 1019, -508 },
	{ 510, 254 },
	{ 510, -508 },
	{ 1019, 254 },
	{ 1019, -508 },
	{ 510, 254 },
	{ 510, -508 },
	{ 0, 254 },
	{ 0, -508 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009BFC4[] = {
	{ 1764, 255 },
	{ 0, 255 },
	{ 0 },
	{ 1764, 255 },
	{ 1764, 0 },
	{ 4354, 255 },
	{ 1764, 255 },
	{ 4354, 255 },
	{ 4354, 0 },
	{ 6120, 255 },
	{ 6120, 0 },
	{ 4354, 255 },
	{ 4354, 0 },
	{ 1764, 0 },
	{ 4354, 0 },
	{ 1764, 255 },
	{ 1764, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009C00C[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -2664 },
	{ 255, -2768 },
	{ 0, -3077 },
	{ 255, -3301 },
	{ 0, -3953 },
	{ 255, -4175 },
	{ 0, -4366 },
	{ 255, -4462 },
	{ 0, -5214 },
	{ 255, -5247 },
	{ 0, -6966 },
	{ 255, -6991 },
	{ 0, -8163 },
	{ 255, -8125 },
	{ 0, -8577 },
	{ 255, -8413 },
	{ 0, -9452 },
	{ 255, -9285 },
	{ 0, -9866 },
	{ 255, -9819 },
	{ 0, -12495 },
	{ 255, -12495 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009C06C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 13, poly_0009BC8C, NULL, NULL, NULL, uv_0009BDF4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0009BD3A, NULL, NULL, NULL, uv_0009BF1C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_0009BD6C, NULL, NULL, NULL, uv_0009BF7C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_0009BD96, NULL, NULL, NULL, uv_0009BFC4, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_0009BDC0, NULL, NULL, NULL, uv_0009C00C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009C0E4[] = {
	{ -49.99995f, 77.5f, -187.5f },
	{ -49.99995f, 77.5f, -97.5f },
	{ -59.99997f, 77.5f, -87.5f },
	{ -89.99996f, 77.5f, -87.5f },
	{ -99.99996f, 77.5f, -77.5f },
	{ -99.99998f, 77.5f, 52.49998f },
	{ -89.99998f, 77.5f, 62.49998f },
	{ -59.99998f, 77.5f, 62.49998f },
	{ -49.99998f, 77.5f, 72.5f },
	{ -50, 77.5f, 172.5f },
	{ -44.99995f, 77.5f, -187.5f },
	{ -44.99996f, 77.5f, -95.5f },
	{ -87.99996f, 77.5f, -82.5f },
	{ -94.99996f, 77.5f, -75.5f },
	{ -94.99998f, 77.5f, 50.49998f },
	{ -87.99998f, 77.5f, 57.49998f },
	{ -44.99998f, 77.5f, 70.5f },
	{ -45, 77.5f, 174.5f },
	{ -57.99998f, 77.5f, 57.49998f },
	{ -57.99997f, 77.5f, -82.5f },
	{ -44.99997f, 77.5f, -36.5f },
	{ -44.99998f, 77.5f, 23.49998f },
	{ -94.99996f, 77.5f, -36.5f },
	{ -99.99996f, 77.5f, -36.5f },
	{ -94.99998f, 77.5f, 23.49998f },
	{ -99.99998f, 77.5f, 23.49998f },
	{ -44.99997f, 72.5f, -36.5f },
	{ -44.99998f, 72.5f, 23.49998f },
	{ -44.99998f, -27.5f, 23.49998f },
	{ -44.99997f, -27.5f, -36.5f },
	{ 49.99998f, 77.5f, -187.5f },
	{ 49.99998f, 77.5f, -97.5f },
	{ 59.99998f, 77.5f, -87.5f },
	{ 89.99998f, 77.5f, -87.5f },
	{ 99.99998f, 77.5f, -77.5f },
	{ 99.99998f, 77.5f, 52.5f },
	{ 89.99998f, 77.5f, 62.5f },
	{ 59.99998f, 77.5f, 62.5f },
	{ 49.99998f, 77.5f, 72.5f },
	{ 49.99998f, 77.5f, 172.5f },
	{ 44.99998f, 77.5f, -187.5f },
	{ 44.99998f, 77.5f, -95.5f },
	{ 87.99998f, 77.5f, -82.5f },
	{ 94.99998f, 77.5f, -75.5f },
	{ 94.99998f, 77.5f, 50.5f },
	{ 87.99998f, 77.5f, 57.5f },
	{ 44.99998f, 77.5f, 70.5f },
	{ 44.99998f, 77.5f, 174.5f },
	{ 57.99998f, 77.5f, 57.5f },
	{ 57.99998f, 77.5f, -82.5f },
	{ 44.99998f, 77.5f, -36.5f },
	{ 44.99998f, 77.5f, 23.5f },
	{ 94.99998f, 77.5f, -36.5f },
	{ 99.99998f, 77.5f, -36.5f },
	{ 94.99998f, 77.5f, 23.5f },
	{ 99.99998f, 77.5f, 23.5f },
	{ 44.99998f, 72.5f, -36.5f },
	{ 44.99998f, 72.5f, 23.5f },
	{ 44.99998f, -27.5f, 23.5f },
	{ 44.99998f, -27.5f, -36.5f },
	{ 0.000019f, 77.5f, -187.5f },
	{ 0.000011f, 77.5f, -95.5f },
	{ 0, 77.5f, 70.5f },
	{ -0.00008f, 77.5f, 174.5f },
	{ 0.000011f, 77.5f, -82.5f },
	{ 0, 77.5f, 57.5f },
	{ 0.000008f, 72.5f, -36.5f },
	{ 0.000004f, 72.5f, 23.5f },
	{ 0.000004f, -27.5f, 23.5f },
	{ 0.000008f, -27.5f, -36.5f },
	{ 0.000008f, 77.5f, -36.5f },
	{ 0.000004f, 77.5f, 23.5f },
	{ -44.99997f, 77.5f, -82.5f },
	{ -44.99998f, 77.5f, 57.49999f },
	{ 44.99998f, 77.5f, -82.5f },
	{ 44.99998f, 77.5f, 57.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009C474[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.301511f, 0.904534f, 0.301511f },
	{ 0.301511f, 0.904534f, -0.301511f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.301511f, 0.904534f, 0.301511f },
	{ -0.301511f, 0.904534f, -0.301511f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009C804 = { vertex_0009C0E4, normal_0009C474, LengthOfArray<Sint32>(vertex_0009C0E4), meshlist_0009C06C, matlist_0009BC28, LengthOfArray<Uint16>(meshlist_0009C06C), LengthOfArray<Uint16>(matlist_0009BC28), { 0, 25, -6.5f }, 206.7873f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009C82C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009C804, -79.99997f, -77.5f, -262.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009C860[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 24, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009C914[] = {
	3, 3, 4, 90,
	0x8000u | 6, 1, 226, 227, 231, 234, 82,
	0x8000u | 8, 1, 4, 226, 90, 231, 230, 217, 178,
	3, 82, 217, 231
};

extern "C" __declspec(dllexport) Sint16 poly_0009C944[] = {
	3, 90, 225, 3,
	3, 1, 223, 227,
	6, 48, 63, 204, 203, 144, 159,
	0x8000u | 6, 81, 5, 216, 206, 177, 101,
	6, 46, 47, 201, 202, 142, 143,
	6, 45, 56, 212, 211, 141, 152,
	3, 5, 72, 81,
	6, 33, 98, 42, 232, 75, 41,
	4, 67, 53, 65, 49,
	6, 67, 52, 53, 50, 5, 51,
	0x8000u | 5, 72, 70, 5, 69, 51,
	6, 36, 43, 97, 59, 100, 44,
	0x8000u | 6, 53, 49, 207, 208, 149, 145,
	3, 149, 101, 147,
	3, 177, 168, 101,
	6, 140, 155, 196, 139, 193, 132,
	4, 163, 161, 149, 145,
	0x8000u | 5, 163, 148, 149, 146, 147,
	5, 168, 166, 101, 165, 147,
	3, 230, 225, 90,
	6, 141, 195, 212, 186, 45, 99,
	3, 227, 223, 234,
	6, 137, 228, 171, 194, 138, 129
};

extern "C" __declspec(dllexport) Sint16 poly_0009CA4E[] = {
	8, 47, 46, 61, 56, 73, 45, 24, 60,
	12, 51, 50, 29, 52, 55, 67, 66, 65, 57, 49, 30, 62,
	10, 21, 100, 23, 99, 200, 186, 119, 195, 117, 196,
	6, 232, 6, 233, 84, 234, 82,
	16, 6, 98, 10, 92, 12, 95, 16, 91, 14, 93, 18, 96, 20, 94, 21, 97,
	10, 19, 22, 36, 64, 43, 58, 59, 60, 44, 45,
	15, 37, 33, 7, 42, 54, 75, 74, 41, 8, 79, 78, 223, 222, 1, 0,
	0x8000u | 14, 7, 37, 9, 38, 11, 34, 15, 39, 13, 35, 17, 40, 19, 36,
	4, 48, 47, 25, 61,
	6, 25, 26, 48, 62, 63, 49,
	8, 72, 70, 71, 69, 68, 51, 28, 29,
	6, 216, 81, 80, 72, 27, 71,
	3, 80, 205, 216,
	3, 100, 21, 97,
	8, 121, 157, 142, 169, 152, 120, 141, 140,
	12, 124, 125, 146, 151, 148, 162, 163, 153, 161, 126, 145, 159,
	16, 117, 193, 116, 190, 114, 192, 110, 189, 112, 187, 108, 191, 106, 188, 102, 194,
	6, 230, 178, 229, 180, 228, 102,
	10, 136, 132, 118, 139, 160, 155, 154, 140, 156, 120,
	0x8000u | 14, 129, 105, 133, 107, 134, 111, 130, 109, 135, 113, 131, 115, 136, 118,
	15, 105, 103, 129, 150, 138, 170, 171, 104, 137, 174, 175, 224, 225, 2, 3,
	6, 143, 144, 122, 159, 158, 126,
	4, 122, 121, 143, 142,
	8, 123, 167, 166, 164, 165, 124, 147, 146,
	6, 205, 176, 177, 123, 168, 166,
	3, 177, 216, 205,
	3, 228, 102, 194,
	3, 193, 117, 196,
	3, 98, 6, 232
};

extern "C" __declspec(dllexport) Sint16 poly_0009CC64[] = {
	6, 56, 46, 211, 201, 152, 142,
	6, 47, 48, 202, 204, 143, 144,
	6, 21, 23, 199, 200, 117, 119,
	6, 234, 223, 233, 79, 232, 41,
	4, 37, 92, 33, 98,
	4, 34, 91, 38, 95,
	4, 35, 96, 39, 93,
	4, 36, 97, 40, 94,
	4, 45, 99, 44, 100,
	6, 145, 159, 208, 203, 49, 63,
	6, 228, 137, 229, 175, 230, 225,
	4, 129, 194, 133, 188,
	4, 134, 191, 130, 187,
	4, 135, 189, 131, 192,
	4, 136, 190, 132, 193,
	4, 140, 196, 141, 195
};

extern "C" __declspec(dllexport) Sint16 poly_0009CD1C[] = {
	8, 31, 209, 207, 127, 149, 128, 101, 206,
	4, 5, 31, 53, 207,
	10, 82, 84, 83, 85, 197, 215, 179, 181, 178, 180,
	14, 87, 218, 217, 183, 178, 182, 179, 219, 197, 86, 83, 87, 82, 217,
	0x8000u | 6, 128, 206, 210, 5, 32, 31
};

extern "C" __declspec(dllexport) Sint16 poly_0009CD7A[] = {
	4, 87, 86, 89, 88,
	4, 31, 32, 77, 76,
	0x8000u | 8, 77, 31, 214, 209, 173, 127, 172, 128,
	0x8000u | 8, 89, 87, 221, 218, 185, 183, 184, 182,
	0x8000u | 6, 172, 128, 213, 210, 76, 32,
	0x8000u | 6, 184, 182, 220, 219, 88, 86
};

extern "C" __declspec(dllexport) Sint16 poly_0009CDCE[] = {
	6, 215, 85, 198, 20, 199, 21,
	6, 199, 117, 198, 116, 215, 181
};

extern "C" __declspec(dllexport) Sint16 poly_0009CDEA[] = {
	3, 16, 14, 12,
	7, 18, 20, 14, 85, 12, 84, 6,
	3, 6, 10, 12,
	4, 110, 181, 114, 116,
	3, 108, 106, 102,
	6, 102, 180, 108, 181, 112, 110
};

extern "C" __declspec(dllexport) Sint16 poly_0009CE2A[] = {
	4, 38, 95, 37, 92,
	4, 39, 93, 34, 91,
	4, 40, 94, 35, 96,
	4, 133, 188, 134, 191,
	4, 130, 187, 135, 189,
	4, 131, 192, 136, 190
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009CE68[] = {
	{ 0, 254 },
	{ 0, -508 },
	{ 228, 254 },
	{ 0, -1274 },
	{ 228, -508 },
	{ 228, -1274 },
	{ 932, -508 },
	{ 932, -1274 },
	{ 1020, -1274 },
	{ 0, -1274 },
	{ 0, -508 },
	{ 228, -508 },
	{ 228, 254 },
	{ 932, -508 },
	{ 932, 255 },
	{ 1020, -508 },
	{ 1020, 255 },
	{ 1020, -1274 },
	{ 1020, -508 },
	{ 932, -508 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009CEB8[] = {
	{ 510, -255 },
	{ 376, -255 },
	{ 510, -101 },
	{ 510, -101 },
	{ 376, -255 },
	{ 510, -255 },
	{ 536, -540 },
	{ 536, -765 },
	{ 1020, -540 },
	{ 1020, -764 },
	{ 1503, -540 },
	{ 1503, -765 },
	{ 1020, -1275 },
	{ 0, -1275 },
	{ 1020, -510 },
	{ 0, -510 },
	{ 1020, 255 },
	{ 0, 255 },
	{ 536, -340 },
	{ 536, -540 },
	{ 1020, -340 },
	{ 1020, -540 },
	{ 1503, -340 },
	{ 1503, -540 },
	{ 396, -180 },
	{ 536, -340 },
	{ 1020, -180 },
	{ 1020, -340 },
	{ 1641, -180 },
	{ 1503, -340 },
	{ 508, -796 },
	{ 376, -1180 },
	{ 508, -1275 },
	{ 0, -255 },
	{ 458, -255 },
	{ 0, 164 },
	{ 510, -198 },
	{ 81, 254 },
	{ 376, 254 },
	{ 71, 132 },
	{ 510, -233 },
	{ 376, 132 },
	{ 510, 254 },
	{ 71, 132 },
	{ 0, 67 },
	{ 510, -233 },
	{ 0, -233 },
	{ 508, -796 },
	{ 0, -796 },
	{ 376, -1180 },
	{ 71, -1180 },
	{ 508, -796 },
	{ 0, -1115 },
	{ 0, -796 },
	{ 0, 254 },
	{ 0, -93 },
	{ 482, 254 },
	{ 75, -180 },
	{ 536, 192 },
	{ 396, -180 },
	{ 1020, -1275 },
	{ 0, -1275 },
	{ 1020, -510 },
	{ 0, -510 },
	{ 1020, 255 },
	{ 0, 255 },
	{ 510, -233 },
	{ 508, -796 },
	{ 0, -796 },
	{ 508, -1275 },
	{ 376, -1180 },
	{ 508, -796 },
	{ 1641, -180 },
	{ 1963, -180 },
	{ 1503, 192 },
	{ 2040, -93 },
	{ 1555, 254 },
	{ 2040, 254 },
	{ 71, 132 },
	{ 376, 132 },
	{ 510, -233 },
	{ 510, 254 },
	{ 71, 132 },
	{ 0, 67 },
	{ 510, -233 },
	{ 0, -233 },
	{ 0, -796 },
	{ 376, -1180 },
	{ 71, -1180 },
	{ 508, -796 },
	{ 0, -1115 },
	{ 0, -796 },
	{ 510, -198 },
	{ 376, 254 },
	{ 510, 254 },
	{ 1641, -180 },
	{ 1503, 192 },
	{ 1020, -180 },
	{ 1020, 192 },
	{ 396, -180 },
	{ 536, 192 },
	{ 510, 254 },
	{ 376, 254 },
	{ 510, -198 },
	{ 376, 254 },
	{ 510, -198 },
	{ 81, 254 },
	{ 458, -255 },
	{ 0, 164 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009D070[] = {
	{ 255, -7352 },
	{ 255, -7726 },
	{ 0, -7741 },
	{ 255, -7962 },
	{ 0, -7970 },
	{ 255, -8393 },
	{ 0, -8297 },
	{ 0, -8528 },
	{ 255, -2794 },
	{ 255, -4435 },
	{ 0, -4550 },
	{ 255, -5093 },
	{ 0, -5241 },
	{ 255, -5324 },
	{ 0, -5569 },
	{ 255, -6028 },
	{ 0, -6260 },
	{ 255, -6460 },
	{ 0, -6587 },
	{ 0, -6818 },
	{ 0, -1530 },
	{ 255, -1530 },
	{ 0, -1204 },
	{ 255, -1204 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -1204 },
	{ 255, -1204 },
	{ 0, -1530 },
	{ 255, -1530 },
	{ 255, 0 },
	{ 0 },
	{ 255, -191 },
	{ 0, -191 },
	{ 255, -390 },
	{ 0, -390 },
	{ 0, -2295 },
	{ 255, -2295 },
	{ 0, -2040 },
	{ 255, -2040 },
	{ 0, -1530 },
	{ 255, -1530 },
	{ 0, -1275 },
	{ 255, -1275 },
	{ 0, -765 },
	{ 255, -765 },
	{ 0, -510 },
	{ 255, -510 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -10469 },
	{ 0, -10239 },
	{ 255, -10219 },
	{ 0, -9547 },
	{ 255, -9562 },
	{ 0, -9220 },
	{ 255, -9330 },
	{ 0, -8528 },
	{ 255, -8626 },
	{ 255, -8393 },
	{ 255, -12330 },
	{ 255, -12564 },
	{ 0, -12546 },
	{ 255, -13433 },
	{ 0, -13468 },
	{ 255, -13699 },
	{ 0, -13794 },
	{ 255, -14379 },
	{ 0, -14486 },
	{ 255, -14495 },
	{ 0, -14602 },
	{ 255, -14612 },
	{ 0, -14718 },
	{ 255, -15045 },
	{ 0, -15045 },
	{ 0, -12546 },
	{ 255, -12330 },
	{ 0, -12314 },
	{ 255, -11861 },
	{ 0, -11854 },
	{ 255, -11626 },
	{ 0, -11622 },
	{ 255, -11157 },
	{ 0, -11161 },
	{ 255, -10923 },
	{ 0, -10930 },
	{ 255, -10454 },
	{ 0, -10469 },
	{ 255, -10219 },
	{ 255, -7116 },
	{ 255, -7352 },
	{ 0, -7418 },
	{ 0, -7741 },
	{ 0, -7418 },
	{ 0, -7186 },
	{ 255, -7116 },
	{ 0, -6818 },
	{ 255, -6694 },
	{ 255, -6460 },
	{ 255, -1202 },
	{ 255, -1905 },
	{ 0, -1917 },
	{ 255, -2137 },
	{ 0, -2243 },
	{ 255, -2794 },
	{ 0, -2934 },
	{ 0, -4550 },
	{ 255, 255 },
	{ 255, -869 },
	{ 0, -897 },
	{ 255, -1202 },
	{ 0, -1224 },
	{ 0, -1917 },
	{ 0, -897 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, -2167 },
	{ 0, -2295 },
	{ 255, -2295 },
	{ 0, -7370 },
	{ 0, -7047 },
	{ 255, -7062 },
	{ 0, -6818 },
	{ 255, -6826 },
	{ 0, -6491 },
	{ 255, -6396 },
	{ 255, -6161 },
	{ 0, -11854 },
	{ 0, -10239 },
	{ 255, -10352 },
	{ 0, -9547 },
	{ 255, -9695 },
	{ 0, -9220 },
	{ 255, -9463 },
	{ 0, -8528 },
	{ 255, -8759 },
	{ 0, -8202 },
	{ 255, -8329 },
	{ 255, -8094 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, -510 },
	{ 255, -510 },
	{ 0, -765 },
	{ 255, -765 },
	{ 0, -1275 },
	{ 255, -1275 },
	{ 0, -1530 },
	{ 255, -1530 },
	{ 0, -2040 },
	{ 255, -2040 },
	{ 0, -2295 },
	{ 255, -2295 },
	{ 255, -390 },
	{ 0, -390 },
	{ 255, -192 },
	{ 0, -192 },
	{ 255, 0 },
	{ 0 },
	{ 255, -4335 },
	{ 255, -4568 },
	{ 0, -4550 },
	{ 255, -5226 },
	{ 0, -5241 },
	{ 255, -5457 },
	{ 0, -5569 },
	{ 255, -6161 },
	{ 0, -6260 },
	{ 0, -6491 },
	{ 255, -2224 },
	{ 0, -2473 },
	{ 255, -2457 },
	{ 0, -2934 },
	{ 255, -2927 },
	{ 0, -3166 },
	{ 255, -3161 },
	{ 0, -3627 },
	{ 255, -3631 },
	{ 0, -3857 },
	{ 255, -3865 },
	{ 0, -4318 },
	{ 255, -4335 },
	{ 0, -4550 },
	{ 0, -2473 },
	{ 0, -2243 },
	{ 255, -2224 },
	{ 0, -1320 },
	{ 255, -1355 },
	{ 0, -993 },
	{ 255, -1090 },
	{ 0, -302 },
	{ 255, -410 },
	{ 0, -186 },
	{ 255, -292 },
	{ 0, -71 },
	{ 255, -176 },
	{ 0, 255 },
	{ 255, 254 },
	{ 255, -7436 },
	{ 255, -7672 },
	{ 0, -7601 },
	{ 255, -8094 },
	{ 0, -7970 },
	{ 0, -8202 },
	{ 0, -7601 },
	{ 0, -7370 },
	{ 255, -7436 },
	{ 255, -7062 },
	{ 0, -13565 },
	{ 0, -12872 },
	{ 255, -12882 },
	{ 0, -12546 },
	{ 255, -12650 },
	{ 0, -11854 },
	{ 255, -11993 },
	{ 255, -10352 },
	{ 0, -15045 },
	{ 0, -13891 },
	{ 255, -13918 },
	{ 0, -13565 },
	{ 255, -13586 },
	{ 255, -12882 },
	{ 255, -13918 },
	{ 255, -15045 },
	{ 0, -15045 },
	{ 255, 127 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, -2295 },
	{ 0, -2295 },
	{ 255, -2167 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 127 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009D428[] = {
	{ 764, 0 },
	{ 765, -254 },
	{ 0 },
	{ 0, -254 },
	{ 764, 0 },
	{ 765, -254 },
	{ 765, -254 },
	{ 765, -508 },
	{ 0, -254 },
	{ 0, -508 },
	{ 765, -254 },
	{ 765, -508 },
	{ 765, 255 },
	{ 765, 0 },
	{ 0, 255 },
	{ 0 },
	{ 765, 255 },
	{ 765, 0 },
	{ 0, -510 },
	{ 765, -510 },
	{ 0, -637 },
	{ 765, -637 },
	{ 0, -764 },
	{ 765, -764 },
	{ 765, 0 },
	{ 0 },
	{ 765, 255 },
	{ 0, 255 },
	{ 765, -254 },
	{ 0, -254 },
	{ 764, 0 },
	{ 0 },
	{ 765, -508 },
	{ 0, -508 },
	{ 765, -254 },
	{ 0, -254 },
	{ 765, -764 },
	{ 0, -764 },
	{ 765, -508 },
	{ 0, -508 },
	{ 765, 0 },
	{ 0 },
	{ 765, 255 },
	{ 0, 255 },
	{ 765, -764 },
	{ 765, -508 },
	{ 0, -764 },
	{ 0, -508 },
	{ 765, -764 },
	{ 765, -508 },
	{ 0, -764 },
	{ 765, -764 },
	{ 0, -637 },
	{ 765, -637 },
	{ 0, -510 },
	{ 765, -510 },
	{ 765, 255 },
	{ 0, 255 },
	{ 765, 0 },
	{ 0 },
	{ 764, 0 },
	{ 0 },
	{ 765, -254 },
	{ 0, -254 },
	{ 765, -254 },
	{ 0, -254 },
	{ 765, -508 },
	{ 0, -508 },
	{ 765, -508 },
	{ 0, -508 },
	{ 765, -764 },
	{ 0, -764 },
	{ 765, 255 },
	{ 0, 255 },
	{ 765, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009D558[] = {
	{ 2065, 255 },
	{ 0, 255 },
	{ 0 },
	{ 2065, 255 },
	{ 2065, 0 },
	{ 4818, 255 },
	{ 4818, 0 },
	{ 6885, 0 },
	{ 4818, 0 },
	{ 2065, 255 },
	{ 2065, 0 },
	{ 0 },
	{ 2065, 255 },
	{ 2065, 0 },
	{ 4818, 255 },
	{ 4818, 0 },
	{ 6885, 255 },
	{ 6885, 0 },
	{ 4818, 255 },
	{ 4818, 0 },
	{ 2065, 255 },
	{ 2065, 0 },
	{ 2065, 255 },
	{ 0, 255 },
	{ 0 },
	{ 2065, 255 },
	{ 2065, 0 },
	{ 4818, 255 },
	{ 4818, 0 },
	{ 6885, 255 },
	{ 6885, 0 },
	{ 4818, 255 },
	{ 4818, 0 },
	{ 2065, 255 },
	{ 2065, 0 },
	{ 0 },
	{ 4818, 255 },
	{ 6885, 0 },
	{ 6885, 255 },
	{ 4818, 0 },
	{ 4818, 255 },
	{ 2065, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009D600[] = {
	{ 1020, -508 },
	{ 510, -508 },
	{ 1020, 254 },
	{ 510, 254 },
	{ 1020, -508 },
	{ 510, -508 },
	{ 1020, 254 },
	{ 510, 254 },
	{ 0, 254 },
	{ 0, -508 },
	{ 510, 254 },
	{ 510, -508 },
	{ 1020, 254 },
	{ 1020, -508 },
	{ 510, 254 },
	{ 510, -508 },
	{ 0, 254 },
	{ 0, -508 },
	{ 510, 254 },
	{ 510, -508 },
	{ 1020, 254 },
	{ 1020, -508 },
	{ 510, 254 },
	{ 510, -508 },
	{ 1020, 254 },
	{ 1020, -508 },
	{ 510, 254 },
	{ 510, -508 },
	{ 0, 254 },
	{ 0, -508 },
	{ 1020, 254 },
	{ 1020, -508 },
	{ 510, 254 },
	{ 510, -508 },
	{ 0, 254 },
	{ 0, -508 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009D690[] = {
	{ 254, 255 },
	{ 510, 255 },
	{ 254, 56 },
	{ 510, 56 },
	{ 254, 0 },
	{ 510, 0 },
	{ 254, 0 },
	{ 0 },
	{ 254, 56 },
	{ 0, 56 },
	{ 254, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009D6C0[] = {
	{ 255, -508 },
	{ 510, -508 },
	{ 255, -253 },
	{ 510, -764 },
	{ 765, -764 },
	{ 510, -508 },
	{ 765, 129 },
	{ 255, -253 },
	{ 0, 129 },
	{ 0, 1 },
	{ 0, 1 },
	{ 0, -253 },
	{ 255, -253 },
	{ 510, -508 },
	{ 765, 129 },
	{ 510, -764 },
	{ 765, -764 },
	{ 255, -253 },
	{ 0, -253 },
	{ 0, 1 },
	{ 0, 1 },
	{ 0, 129 },
	{ 255, -253 },
	{ 765, 129 },
	{ 255, -508 },
	{ 510, -508 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009D728[] = {
	{ 255, -254 },
	{ 255, 255 },
	{ 0, -254 },
	{ 0, 255 },
	{ 510, -254 },
	{ 510, 255 },
	{ 255, -254 },
	{ 255, 255 },
	{ 765, -254 },
	{ 765, 255 },
	{ 510, -254 },
	{ 510, 255 },
	{ 0, -254 },
	{ 0, 255 },
	{ 255, -254 },
	{ 255, 255 },
	{ 255, -254 },
	{ 255, 255 },
	{ 510, -254 },
	{ 510, 255 },
	{ 510, -254 },
	{ 510, 255 },
	{ 765, -254 },
	{ 765, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009D788[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0009C914, NULL, NULL, NULL, uv_0009CE68, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 23, poly_0009C944, NULL, NULL, NULL, uv_0009CEB8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 29, poly_0009CA4E, NULL, NULL, NULL, uv_0009D070, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 16, poly_0009CC64, NULL, NULL, NULL, uv_0009D428, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 5, poly_0009CD1C, NULL, NULL, NULL, uv_0009D558, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 6, poly_0009CD7A, NULL, NULL, NULL, uv_0009D600, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, poly_0009CDCE, NULL, NULL, NULL, uv_0009D690, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 6, poly_0009CDEA, NULL, NULL, NULL, uv_0009D6C0, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 6, poly_0009CE2A, NULL, NULL, NULL, uv_0009D728, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009D860[] = {
	{ -49.99996f, 32.5f, -185 },
	{ -44.99996f, 32.5f, -183 },
	{ 50.00002f, 32.5f, -185 },
	{ 45.00002f, 32.5f, -183 },
	{ 0.000031f, 32.5f, -183 },
	{ -45.00002f, 122.5f, 129 },
	{ -44.99997f, 42.5f, -125 },
	{ -99.99997f, 42.5f, -125 },
	{ -59.99997f, 42.5f, -175 },
	{ -99.99997f, 52.5f, -125 },
	{ -44.99997f, 52.5f, -125 },
	{ -99.99997f, 52.5f, -105 },
	{ -44.99997f, 52.5f, -105 },
	{ -99.99997f, 62.5f, -85 },
	{ -44.99997f, 62.5f, -84.99998f },
	{ -99.99997f, 62.5f, -105 },
	{ -44.99997f, 62.5f, -105 },
	{ -99.99997f, 72.5f, -85 },
	{ -44.99997f, 72.5f, -84.99998f },
	{ -99.99998f, 72.5f, -65 },
	{ -44.99999f, 72.5f, -64.99998f },
	{ -44.99999f, 82.5f, -64.99998f },
	{ -99.99998f, 82.5f, -65 },
	{ -44.99999f, 92.5f, -64.99998f },
	{ -59.99999f, 92.5f, -24.99999f },
	{ -49.99999f, 102.5f, 0.000008f },
	{ -49.99999f, 112.5f, 0.000008f },
	{ -60.00002f, 122.5f, 175 },
	{ -100, 122.5f, 129 },
	{ -100, 122.5f, 69 },
	{ -49.99999f, 122.5f, 15.00001f },
	{ -45.00001f, 117.5f, 69 },
	{ -45.00002f, 117.5f, 129 },
	{ -94.99997f, 42.5f, -125 },
	{ -94.99997f, 62.5f, -105 },
	{ -94.99997f, 72.5f, -85 },
	{ -94.99998f, 82.5f, -65 },
	{ -94.99997f, 52.5f, -125 },
	{ -94.98164f, 52.5f, -105 },
	{ -94.99997f, 62.5f, -85 },
	{ -94.99998f, 72.5f, -65 },
	{ -57.99997f, 42.5f, -170 },
	{ -94.99997f, 42.5f, -162 },
	{ -94.99998f, 82.5f, -37 },
	{ -57.99999f, 82.5f, -29.99999f },
	{ -57.99999f, 92.5f, -29.99999f },
	{ -44.99999f, 102.5f, -16.99999f },
	{ -44.99999f, 102.5f, 0.000008f },
	{ -44.99999f, 112.5f, 0.000008f },
	{ -45, 122.5f, 17.00001f },
	{ -95.00001f, 122.5f, 69 },
	{ -95.00002f, 122.5f, 129 },
	{ -95.00001f, 122.5f, 37 },
	{ -45.00001f, 122.5f, 69 },
	{ -99.99997f, 42.5f, -165 },
	{ -100, 122.5f, 35 },
	{ -44.99999f, 92.5f, -16.99999f },
	{ -59.99999f, 122.5f, 25.00001f },
	{ -89.99998f, 82.5f, -25 },
	{ -87.99998f, 82.5f, -30 },
	{ -59.99999f, 82.5f, -24.99999f },
	{ -49.99999f, 102.5f, -14.99999f },
	{ -49.99999f, 112.5f, 15.00001f },
	{ -45, 112.5f, 17.01719f },
	{ -99.99998f, 82.5f, -35 },
	{ -58.00001f, 122.5f, 30.00001f },
	{ -89.99998f, 122.5f, 25 },
	{ -88.00001f, 122.5f, 30 },
	{ -100, 122.5f, 165 },
	{ -95.00002f, 122.5f, 163 },
	{ -88.00002f, 122.5f, 170 },
	{ -90.00002f, 122.5f, 175 },
	{ -58.00002f, 122.5f, 170 },
	{ -49.99999f, 92.5f, -14.99999f },
	{ -89.99997f, 42.5f, -175 },
	{ -86.99997f, 42.5f, -170 },
	{ -45.00002f, 17.5f, 129 },
	{ -45.00001f, 17.5f, 69 },
	{ -59.99997f, 37.5f, -175 },
	{ -57.99997f, 37.5f, -170 },
	{ -47.00002f, 122.5f, 185 },
	{ -45.00002f, 122.5f, 180 },
	{ -44.99997f, 32.5f, -125 },
	{ -44.99999f, 32.5f, -64.99998f },
	{ -44.99997f, 37.5f, -125 },
	{ -44.99999f, 37.5f, -64.99998f },
	{ -44.99999f, 27.5f, -64.99998f },
	{ -44.99997f, 27.5f, -125 },
	{ -44.99999f, -72.5f, -64.99998f },
	{ -44.99997f, -72.5f, -125 },
	{ 45.00002f, 32.5f, -170 },
	{ -49.99997f, 62.5f, -105 },
	{ -49.99997f, 52.5f, -125 },
	{ -49.99997f, 62.5f, -84.99998f },
	{ -49.99999f, 72.5f, -64.99998f },
	{ -49.99997f, 52.5f, -105 },
	{ -49.99997f, 72.5f, -84.99998f },
	{ -49.99999f, 82.5f, -64.99998f },
	{ -49.99997f, 42.5f, -125 },
	{ -44.99999f, 92.5f, -59.99999f },
	{ -44.99999f, 82.5f, -59.99999f },
	{ 45.00002f, 122.5f, 129 },
	{ 45.00002f, 42.5f, -125 },
	{ 100, 42.5f, -125 },
	{ 60.00002f, 42.5f, -175 },
	{ 100, 52.5f, -125 },
	{ 45.00002f, 52.5f, -125 },
	{ 100, 52.5f, -105 },
	{ 45.00002f, 52.5f, -105 },
	{ 100, 62.5f, -85.00001f },
	{ 45.00002f, 62.5f, -85.00001f },
	{ 100, 62.5f, -105 },
	{ 45.00002f, 62.5f, -105 },
	{ 100, 72.5f, -85.00001f },
	{ 45.00002f, 72.5f, -85.00001f },
	{ 100, 72.5f, -65.00001f },
	{ 45.00002f, 72.5f, -65.00001f },
	{ 45.00002f, 82.5f, -65.00001f },
	{ 100, 82.5f, -65.00001f },
	{ 45.00002f, 92.5f, -65.00001f },
	{ 60.00002f, 92.5f, -25.00001f },
	{ 50.00002f, 102.5f, -0.00015f },
	{ 50.00002f, 112.5f, -0.00015f },
	{ 60.00002f, 122.5f, 175 },
	{ 100, 122.5f, 129 },
	{ 100, 122.5f, 68.99998f },
	{ 50.00002f, 122.5f, 14.99998f },
	{ 45.00002f, 117.5f, 68.99998f },
	{ 45.00002f, 117.5f, 129 },
	{ 95.00002f, 42.5f, -125 },
	{ 95.00002f, 62.5f, -105 },
	{ 95.00002f, 72.5f, -85.00001f },
	{ 95.00002f, 82.5f, -65.00001f },
	{ 95.00002f, 52.5f, -125 },
	{ 94.98168f, 52.5f, -105 },
	{ 95.00002f, 62.5f, -85.00001f },
	{ 95.00002f, 72.5f, -65.00001f },
	{ 58.00002f, 42.5f, -170 },
	{ 95.00002f, 42.5f, -162 },
	{ 95.00002f, 82.5f, -37.00001f },
	{ 58.00002f, 82.5f, -30.00001f },
	{ 58.00002f, 92.5f, -30.00001f },
	{ 45.00002f, 102.5f, -17.00001f },
	{ 45.00002f, 102.5f, -0.00015f },
	{ 45.00002f, 112.5f, -0.00015f },
	{ 45.00002f, 122.5f, 16.99998f },
	{ 95.00002f, 122.5f, 68.99998f },
	{ 95.00002f, 122.5f, 129 },
	{ 95.00002f, 122.5f, 36.99998f },
	{ 45.00002f, 122.5f, 68.99998f },
	{ 100, 42.5f, -165 },
	{ 100, 122.5f, 34.99998f },
	{ 45.00002f, 92.5f, -17.00001f },
	{ 60.00002f, 122.5f, 24.99998f },
	{ 90.00002f, 82.5f, -25.00001f },
	{ 88.00002f, 82.5f, -30.00001f },
	{ 60.00002f, 82.5f, -25.00001f },
	{ 50.00002f, 102.5f, -15.00001f },
	{ 50.00002f, 112.5f, 14.99998f },
	{ 45.00002f, 112.5f, 17.01716f },
	{ 100, 82.5f, -35.00001f },
	{ 58.00002f, 122.5f, 29.99998f },
	{ 90.00002f, 122.5f, 24.99998f },
	{ 88.00002f, 122.5f, 29.99998f },
	{ 100, 122.5f, 165 },
	{ 95.00002f, 122.5f, 163 },
	{ 88.00002f, 122.5f, 170 },
	{ 90.00002f, 122.5f, 175 },
	{ 58.00002f, 122.5f, 170 },
	{ 50.00002f, 92.5f, -15.00001f },
	{ 90.00002f, 42.5f, -175 },
	{ 87.00002f, 42.5f, -170 },
	{ 45.00002f, 17.5f, 129 },
	{ 45.00002f, 17.5f, 68.99998f },
	{ 60.00002f, 37.5f, -175 },
	{ 58.00002f, 37.5f, -170 },
	{ 47.00002f, 122.5f, 185 },
	{ 45.00002f, 122.5f, 180 },
	{ 45.00002f, 32.5f, -125 },
	{ 45.00002f, 32.5f, -65.00001f },
	{ 45.00002f, 37.5f, -125 },
	{ 45.00002f, 37.5f, -65.00001f },
	{ 45.00002f, 27.5f, -65.00001f },
	{ 45.00002f, 27.5f, -125 },
	{ 45.00002f, -72.5f, -65.00001f },
	{ 45.00002f, -72.5f, -125 },
	{ 0.000019f, 92.5f, -60 },
	{ 50.00002f, 62.5f, -105 },
	{ 50.00002f, 52.5f, -125 },
	{ 50.00002f, 62.5f, -85.00001f },
	{ 50.00002f, 72.5f, -65.00001f },
	{ 50.00002f, 52.5f, -105 },
	{ 50.00002f, 72.5f, -85.00001f },
	{ 50.00002f, 82.5f, -65.00001f },
	{ 50.00002f, 42.5f, -125 },
	{ 45.00002f, 92.5f, -60.00001f },
	{ 45.00002f, 82.5f, -60.00001f },
	{ 0.000023f, 32.5f, -65.00005f },
	{ 0.000023f, 72.5f, -65 },
	{ 0.000023f, 82.5f, -65 },
	{ 0.000023f, 92.5f, -65 },
	{ 0.000015f, 102.5f, -17 },
	{ 0.000015f, 102.5f, 0 },
	{ 0.000008f, 112.5f, 17 },
	{ 0.000015f, 112.5f, 0 },
	{ 0, 122.5f, 185 },
	{ 0.000008f, 122.5f, 129 },
	{ 0.000008f, 122.5f, 69 },
	{ 0.000008f, 122.5f, 17 },
	{ 0.000008f, 117.5f, 69 },
	{ 0.000008f, 117.5f, 129 },
	{ 0.000015f, 92.5f, -17 },
	{ 0.000015f, 92.5f, -30 },
	{ 0.000008f, 17.5f, 129 },
	{ 0.000008f, 17.5f, 69 },
	{ 0.000023f, 37.5f, -65 },
	{ 0, 122.5f, 180 },
	{ 0.000023f, 32.5f, -125 },
	{ 0.000023f, 27.5f, -125 },
	{ 0.000023f, 27.5f, -65 },
	{ 0.000023f, -72.5f, -65 },
	{ 0.000023f, -72.5f, -125 },
	{ -59.99997f, 32.5f, -175 },
	{ -57.99997f, 32.5f, -170 },
	{ 60.00002f, 32.5f, -175 },
	{ 58.00002f, 32.5f, -170 },
	{ 0.000023f, 32.5f, -170 },
	{ -44.99997f, 32.5f, -170 },
	{ 45.00002f, 42.5f, -130 },
	{ 45.00002f, 37.5f, -130 },
	{ 45.00002f, 32.5f, -130 },
	{ 0.000023f, 32.5f, -130 },
	{ -44.99997f, 42.5f, -130 },
	{ -44.99997f, 37.5f, -130 },
	{ -44.99997f, 32.5f, -130 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009E364[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.301511f, 0.904534f, -0.301511f },
	{ 0.904534f, 0.301511f, -0.301511f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.582217f, 0.778966f, -0.232887f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.904534f, 0.301511f, -0.301511f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.904534f, 0.301511f, -0.301511f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.301511f, 0.301512f, -0.904534f },
	{ -0.301511f, 0.301511f, -0.904534f },
	{ 0, 0.7071069f, -0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.577824f, 0.78275f, -0.23113f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.231985f, 0.78275f, -0.577481f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.6717409f, 0.699725f, -0.243204f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.6497599f, 0.710317f, -0.270669f },
	{ -0.655661f, 0.7039239f, -0.273128f },
	{ -0.14091f, 0.666916f, -0.731688f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.125134f, 0.752107f, -0.647052f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.301511f, 0.904534f, 0.301511f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.124598f, 0.752252f, -0.646987f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.582217f, 0.778966f, -0.232887f },
	{ -0.232887f, 0.778966f, -0.582217f },
	{ 0.233534f, 0.77943f, -0.581336f },
	{ 0.141508f, 0.666416f, -0.732029f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.23113f, 0.78275f, -0.577824f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.928477f, 0.000001f, -0.371391f },
	{ 0.940272f, 0.000001f, -0.340425f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.904534f, 0.301511f, 0.301512f },
	{ 0.707106f, 0.000002f, -0.7071069f },
	{ 1, 0, 0 },
	{ 0.7071069f, 0.000002f, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ -0.641178f, 0.755788f, -0.132949f },
	{ -0.7320409f, 0.664136f, -0.15179f },
	{ -0.301511f, 0.904534f, -0.301511f },
	{ -0.904534f, 0.301511f, -0.301511f },
	{ 0, 0.7071069f, -0.7071069f },
	{ -0.582217f, 0.778966f, -0.232887f },
	{ 0, 0.7071069f, -0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0, 0.7071069f, -0.7071069f },
	{ -0.904534f, 0.301511f, -0.301511f },
	{ 0, 0.7071069f, -0.7071069f },
	{ -0.904534f, 0.301511f, -0.301511f },
	{ 0, 0.7071069f, -0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0, 0.7071069f, -0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0, 0.7071069f, -0.7071069f },
	{ -0.301512f, 0.301511f, -0.904534f },
	{ 0.301511f, 0.301511f, -0.904534f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.577824f, 0.78275f, -0.23113f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.231985f, 0.78275f, -0.577482f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ -0.6717409f, 0.699725f, -0.243204f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.6497599f, 0.710317f, -0.270669f },
	{ 0.655661f, 0.703925f, -0.273128f },
	{ 0.14091f, 0.666916f, -0.731688f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ -0.125008f, 0.7521189f, -0.647063f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.301511f, 0.904534f, 0.301511f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.124598f, 0.752252f, -0.646987f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.582217f, 0.778966f, -0.232887f },
	{ 0.232887f, 0.778966f, -0.582217f },
	{ -0.233533f, 0.77943f, -0.581336f },
	{ -0.141366f, 0.666429f, -0.732043f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.23113f, 0.78275f, -0.577824f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.928477f, 0, -0.371391f },
	{ -0.940272f, 0, -0.340425f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.904534f, 0.301511f, 0.301511f },
	{ -0.7071069f, 0.000002f, -0.7071069f },
	{ -1, 0, 0 },
	{ -0.7071069f, 0.000002f, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.641178f, 0.755788f, -0.132949f },
	{ 0.7320409f, 0.664136f, -0.15179f },
	{ 0, 0.000003f, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.000135f, 0.706889f, -0.707324f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.000135f, 0.706803f, -0.70741f },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0.000003f, -1 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0.577824f, 0.782751f, -0.23113f },
	{ 0.657712f, 0.714641f, -0.238125f },
	{ -0.577824f, 0.78275f, -0.23113f },
	{ -0.657712f, 0.714641f, -0.238125f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.730059f, 0.673526f, -0.115657f },
	{ -0.987683f, 0, -0.15647f },
	{ -0.659861f, 0.7440799f, -0.104536f },
	{ 0, 1, 0 },
	{ 0.730059f, 0.673526f, -0.115657f },
	{ 0.987683f, 0, -0.15647f },
	{ 0.659861f, 0.7440799f, -0.104536f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009EE68 = { vertex_0009D860, normal_0009E364, LengthOfArray<Sint32>(vertex_0009D860), meshlist_0009D788, matlist_0009C860, LengthOfArray<Uint16>(meshlist_0009D788), LengthOfArray<Uint16>(matlist_0009C860), { 0, 25, 0 }, 210.2974f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009EE90 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009EE68, -80.00002f, -32.5f, 95.00002f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009EEC4[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009EF28[] = {
	4, 12, 7, 13, 6,
	6, 7, 53, 11, 55, 9, 54,
	6, 24, 16, 44, 40, 36, 28,
	6, 18, 26, 41, 45, 30, 38,
	0x8000u | 6, 48, 58, 4, 50, 47, 59
};

extern "C" __declspec(dllexport) Sint16 poly_0009EF6A[] = {
	6, 15, 8, 9, 10, 11, 7,
	3, 9, 14, 15,
	3, 6, 7, 10,
	4, 22, 23, 21, 20,
	10, 23, 25, 20, 24, 42, 44, 33, 36, 34, 37,
	10, 27, 22, 26, 21, 45, 43, 38, 32, 39, 35,
	4, 34, 35, 33, 32,
	0x8000u | 10, 2, 3, 49, 48, 0, 4, 46, 47, 1, 5
};

extern "C" __declspec(dllexport) Sint16 poly_0009EFDE[] = {
	7, 3, 48, 52, 58, 17, 16, 24,
	0x8000u | 8, 9, 14, 54, 57, 30, 31, 38, 39,
	3, 24, 25, 17,
	0x8000u | 8, 26, 27, 18, 19, 53, 56, 7, 12,
	3, 36, 28, 37,
	0x8000u | 7, 37, 29, 28, 51, 59, 5, 47
};

extern "C" __declspec(dllexport) Sint16 poly_0009F032[] = {
	6, 53, 18, 55, 41, 54, 30,
	0x8000u | 6, 28, 59, 40, 50, 16, 58
};

extern "C" __declspec(dllexport) Sint16 poly_0009F04E[] = {
	6, 21, 20, 43, 42, 32, 33
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009F05C[] = {
	{ 0, 255 },
	{ 25, 255 },
	{ 0, -255 },
	{ 25, -255 },
	{ 510, -141 },
	{ 510, 255 },
	{ 0, -141 },
	{ 0, 255 },
	{ 510, -141 },
	{ 510, 255 },
	{ 510, -255 },
	{ 510, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 510, -255 },
	{ 510, 255 },
	{ 510, 255 },
	{ 510, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 510, 255 },
	{ 510, -255 },
	{ 508, -255 },
	{ 508, 254 },
	{ 0, -255 },
	{ 0, 254 },
	{ 508, -255 },
	{ 508, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009F0CC[] = {
	{ 0 },
	{ 204, 0 },
	{ 204, 255 },
	{ 2039, 0 },
	{ 2039, 255 },
	{ 204, 255 },
	{ 204, 255 },
	{ 0, 255 },
	{ 0 },
	{ 204, 0 },
	{ 204, 255 },
	{ 2039, 0 },
	{ 2550, 255 },
	{ 0, 255 },
	{ 2550, 0 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 204, 0 },
	{ 204, 255 },
	{ 2039, 0 },
	{ 2039, 255 },
	{ 204, 0 },
	{ 204, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0 },
	{ 204, 255 },
	{ 204, 0 },
	{ 2039, 255 },
	{ 2039, 0 },
	{ 204, 255 },
	{ 204, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 2550, 255 },
	{ 0 },
	{ 2550, 0 },
	{ 0 },
	{ 0, 254 },
	{ 203, 0 },
	{ 203, 254 },
	{ 2039, 0 },
	{ 2039, 254 },
	{ 204, 0 },
	{ 204, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009F194[] = {
	{ 3825, 255 },
	{ 3824, 0 },
	{ 2500, 255 },
	{ 2500, 0 },
	{ 1323, 255 },
	{ 1323, 0 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 1323, 0 },
	{ 1323, 255 },
	{ 2500, 0 },
	{ 2500, 255 },
	{ 3824, 0 },
	{ 3825, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1323, 255 },
	{ 3824, 0 },
	{ 3825, 255 },
	{ 2500, 0 },
	{ 2500, 255 },
	{ 1323, 0 },
	{ 1323, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 1323, 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 1323, 255 },
	{ 1323, 0 },
	{ 2500, 255 },
	{ 2500, 0 },
	{ 3825, 255 },
	{ 3824, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009F224[] = {
	{ 0, 255 },
	{ 0, -255 },
	{ 510, 255 },
	{ 508, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 510, 255 },
	{ 508, -255 },
	{ 0, 255 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009F254[] = {
	{ 1020, 255 },
	{ 1020, -255 },
	{ 508, 255 },
	{ 510, -255 },
	{ 0, 255 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009F26C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0009EF28, NULL, NULL, NULL, uv_0009F05C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 8, poly_0009EF6A, NULL, NULL, NULL, uv_0009F0CC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 6, poly_0009EFDE, NULL, NULL, NULL, uv_0009F194, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_0009F032, NULL, NULL, NULL, uv_0009F224, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_0009F04E, NULL, NULL, NULL, uv_0009F254, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009F2E4[] = {
	{ -0.00061f, 25, 65 },
	{ 50.00003f, 25, 65 },
	{ -49.99997f, 25, 65 },
	{ -49.9999f, 20.00001f, 64.99996f },
	{ -0.00061f, 20.00001f, 64.99996f },
	{ 50.00003f, 20.00001f, 65 },
	{ -45.00001f, 15, -64.99996f },
	{ -45.00001f, 10, -64.99996f },
	{ 45.00003f, 15, -65 },
	{ 45.00003f, 10, -65 },
	{ 0.000008f, 15, -65 },
	{ 0.000008f, 10, -65 },
	{ -50.00001f, 10, -64.99996f },
	{ -50.00003f, 15, -64.99996f },
	{ 50.00003f, 10, -65 },
	{ 50.00003f, 15, -65 },
	{ -44.99984f, -25, 24.99997f },
	{ -49.99983f, -25, 24.99997f },
	{ -44.99985f, -25, -25.00003f },
	{ -49.99986f, -25, -25.00003f },
	{ -44.99984f, 25, 24.99997f },
	{ -44.99985f, 25, -25.00003f },
	{ -49.99986f, 25, -25.00003f },
	{ -49.99983f, 25, 24.99997f },
	{ -44.99984f, 20, 24.99997f },
	{ -49.99983f, 20, 24.99997f },
	{ -44.99985f, 20, -25.00003f },
	{ -49.99986f, 20, -25.00003f },
	{ 45.00003f, -25, 25.00003f },
	{ 50.00003f, -25, 25.00003f },
	{ 45.00003f, -25, -24.99997f },
	{ 50.00003f, -25, -24.99997f },
	{ 45.00003f, 25, -24.99997f },
	{ 45.00003f, 25, 25.00003f },
	{ 50.00003f, 25, 25.00003f },
	{ 50.00003f, 25, -24.99997f },
	{ 45.00003f, 20, 25.00003f },
	{ 50.00003f, 20, 25.00003f },
	{ 45.00003f, 20, -24.99997f },
	{ 50.00003f, 20, -24.99997f },
	{ 0.00009199999f, -25, 25 },
	{ 0.00009199999f, -25, -25 },
	{ 0.00009199999f, 25, 25 },
	{ 0.00009199999f, 25, -25 },
	{ 0.00009199999f, 20, 25 },
	{ 0.00009199999f, 20, -25 },
	{ 44.99998f, 25, 65 },
	{ 44.99998f, 20.00001f, 64.99998f },
	{ -44.99998f, 20.00001f, 64.99996f },
	{ -45.00001f, 25, 65 },
	{ 0.000023f, -24.99999f, 64.99998f },
	{ 50.00003f, -24.99999f, 65.00001f },
	{ -49.99983f, -24.99998f, 64.99995f },
	{ -44.99994f, -25, -65 },
	{ 45.00003f, -25, -64.99998f },
	{ 0.000042f, -25, -65 },
	{ -49.99991f, -25, -65.00001f },
	{ 50.00003f, -25, -64.99998f },
	{ -44.99989f, -24.99998f, 64.99996f },
	{ 45.00001f, -24.99999f, 65.00001f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009F5B4[] = {
	{ 0, 0.000006f, -1 },
	{ 0.000002f, 0, -1 },
	{ 0, 0.000006f, -1 },
	{ 0, 0.000003f, -1 },
	{ 0, 0.000003f, -1 },
	{ 0.000002f, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, -0.00001f, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.707106f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ -0.00001f, 0, 1 },
	{ 0.000001f, 0, -1 },
	{ 0.000001f, 0.000003f, -1 },
	{ 0.000001f, 0.000001f, -1 },
	{ 0, 0.000003f, -1 },
	{ 0, 0.000006f, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.000002f, 0.707106f, -0.7071069f },
	{ 0.000001f, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.707105f, 0.707109f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.000001f, 0.7071069f, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009F884 = { vertex_0009F2E4, normal_0009F5B4, LengthOfArray<Sint32>(vertex_0009F2E4), meshlist_0009F26C, matlist_0009EEC4, LengthOfArray<Uint16>(meshlist_0009F26C), LengthOfArray<Uint16>(matlist_0009EEC4), { 0 }, 82.00612f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009F8AC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009F884, -80.00003f, 75, 345, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009F8E0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008EBE4, 700, -15, -500, 0, 0xFFFFC001, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009F914 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008EBE4, 850, -15, -500, 0, 0x3FFF, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009F948 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008EBE4, 850, -15, -350, 0, 0xFFFFC001, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009F97C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008EBE4, 850, 20, -174.5f, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009F9B0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 300, 40, -150, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009F9E4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 800, 40, -149, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FA18 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 800, 40, -199, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FA4C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 800, 40, -249, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FA80 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 150, 5, -575.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FAB4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 150, 5, -525.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FAE8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 150, 5, -475.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FB1C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 150, 5, -425.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FB50 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 150, 5, -625.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FB84 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 150, 5, -675.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FBB8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 300, 40, -200, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FBEC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 150, 5, -725.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FC20 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 650, 5, -724.5f, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FC54 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 650, 5, -674.5f, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FC88 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 650, 5, -624.5f, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FCBC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 650, 5, -574.5f, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FCF0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 650, 5, -524.5f, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FD24 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 650, 5, -474.5f, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FD58 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 650, 5, -424.5f, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FD8C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 800, 40, -99, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FDC0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 300, 40, -250, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FDF4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 300, 40, -50, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FE28 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 300, 40, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FE5C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 300, 40, 50, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FE90 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 800, 40, 51, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FEC4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 800, 40, 1, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FEF8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F954, 800, 40, -49, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FF2C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008FFEC, 316.2f, 100, 569.6f, 0, 0xFFFFD58C, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FF60 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00090E28, 6.7286f, 100, 634.6187f, 0, 0x158B, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00091C40[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00091C8C[] = {
	8, 3, 2, 7, 6, 11, 10, 15, 14
};

extern "C" __declspec(dllexport) NJS_TEX uv_00091CE0[] = {
	{ 0, 255 },
	{ 0 },
	{ 10069, 255 },
	{ 10069, 0 },
	{ 22881, 255 },
	{ 22881, 0 },
	{ -29835, 255 },
	{ -29835, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00091D00[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00091C8C, NULL, NULL, NULL, uv_00091CE0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00091D30[] = {
	{ -0.0004f, 285, -170 },
	{ 0.000004f, 145, -170 },
	{ 0.000048f, 1.5f, -170 },
	{ 0.000044f, 0, -170 },
	{ 0.000004f, 285, -280 },
	{ 0.000048f, 145, -280 },
	{ 0.00009199999f, 1.5f, -280 },
	{ 0.00008799999f, 0, -280 },
	{ 0.000048f, 285, -420 },
	{ 0.00009199999f, 145, -420 },
	{ 0.000136f, 1.5f, -420 },
	{ 0.000132f, 0, -420 },
	{ 0.00009199999f, 285, -560 },
	{ 0.000136f, 145, -560 },
	{ 0.00018f, 1.5f, -560 },
	{ 0.000176f, 0, -560 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00091DF0[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0.000001f, 0 },
	{ -1, 0.000003f, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0.000001f, 0 },
	{ -1, 0.000003f, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0.000001f, 0 },
	{ -1, 0.000003f, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0.000001f, 0 },
	{ -1, 0.000003f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00091EB0 = { vertex_00091D30, normal_00091DF0, LengthOfArray<Sint32>(vertex_00091D30), meshlist_00091D00, matlist_00091C40, LengthOfArray<Uint16>(meshlist_00091D00), LengthOfArray<Uint16>(matlist_00091C40), { 0.00006999999f, 142.5f, -365 }, 241.5186f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00091ED8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00091EB0, -80, 0, 110, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00091F0C[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00091F9C[] = {
	4, 10, 35, 29, 30,
	4, 19, 26, 18, 25,
	4, 25, 36, 18, 43,
	4, 35, 11, 30, 28,
	0x8000u | 22, 11, 28, 17, 27, 22, 24, 16, 31, 15, 32, 14, 34, 13, 33, 12, 23, 20, 38, 21, 39, 41, 40,
	4, 42, 43, 37, 36,
	4, 37, 40, 42, 41
};

extern "C" __declspec(dllexport) NJS_TEX uv_000920B8[] = {
	{ 0, 255 },
	{ 7209, 255 },
	{ 0 },
	{ 7089, 0 },
	{ -9435, 255 },
	{ -9435, 0 },
	{ -12639, 255 },
	{ -12519, 0 },
	{ 118, 0 },
	{ 4080, 0 },
	{ 0, 255 },
	{ 3961, 255 },
	{ 0, 255 },
	{ 3961, 255 },
	{ 118, 0 },
	{ 4080, 0 },
	{ 12021, 255 },
	{ 11901, 0 },
	{ 15868, 255 },
	{ 15746, 0 },
	{ 16669, 255 },
	{ 16549, 0 },
	{ 17952, 255 },
	{ 17831, 0 },
	{ 18750, 255 },
	{ 18630, 0 },
	{ 20192, 255 },
	{ 20072, 0 },
	{ 20997, 255 },
	{ 20877, 0 },
	{ 29652, 255 },
	{ 29652, 0 },
	{ -31075, 255 },
	{ -30955, 0 },
	{ -27869, 255 },
	{ -27749, 0 },
	{ -24661, 255 },
	{ -24781, 0 },
	{ -20655, 255 },
	{ -16649, 255 },
	{ -20777, 0 },
	{ -16529, 0 },
	{ 4080, 0 },
	{ 118, 0 },
	{ 3961, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00092170[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_00091F9C, NULL, NULL, NULL, uv_000920B8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000921A0[] = {
	{ -0.000187f, 285, 330 },
	{ -0.000143f, 145, 330 },
	{ -0.000171f, 285, 280 },
	{ -0.000128f, 145, 280 },
	{ -0.000128f, 285, 140 },
	{ -0.00084f, 145, 140 },
	{ -0.00084f, 285, 0 },
	{ -0.0004f, 145, 0 },
	{ -0.0004f, 285, -140 },
	{ 0.000004f, 145, -140 },
	{ 0.000044f, 0, -140 },
	{ 0.000002f, 60, -49.99998f },
	{ 0.000002f, 90, 140 },
	{ 0.000002f, 90, 32.00007f },
	{ 0.000048f, 80, 31.99993f },
	{ 0.000002f, 80, 15 },
	{ 0.000002f, 70, 15 },
	{ 0.000002f, 60, -1.999998f },
	{ 0.000002f, 50, 290 },
	{ 0.000002f, 50, 330 },
	{ 0.000002f, 90, 200 },
	{ 0.000002f, 50, 200 },
	{ 0.000002f, 70, -1.999998f },
	{ 0.000002f, 91.5f, 140 },
	{ 0.000002f, 71.5f, -3.499998f },
	{ 0.000002f, 51.5f, 291.5f },
	{ 0.000002f, 51.5f, 330 },
	{ 0.000002f, 61.5f, -3.499998f },
	{ 0.000002f, 61.5f, -51.49999f },
	{ 0.000025f, 1.5f, -140 },
	{ 0.000002f, 1.5f, -51.49999f },
	{ 0.000002f, 71.5f, 13.5f },
	{ 0.000002f, 81.5f, 13.5f },
	{ 0.000002f, 91.5f, 30.5f },
	{ 0.000002f, 81.5f, 30.5f },
	{ 0.000025f, 0, -50.00006f },
	{ 0.000002f, 101.5f, 291.5f },
	{ 0.000002f, 101.5f, 238.5f },
	{ 0.000002f, 91.5f, 201.5f },
	{ 0.000002f, 51.5f, 201.5f },
	{ 0.000002f, 51.5f, 238.5f },
	{ 0.000002f, 50, 240 },
	{ 0.000002f, 100, 240 },
	{ 0.000002f, 100, 290 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000923B0[] = {
	{ -1, 0, 0 },
	{ -1, -0.0001f, -0.0001f },
	{ -1, 0, 0 },
	{ -1, -0.0002f, 0 },
	{ -1, 0, 0 },
	{ -1, -0.0001f, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, -0.00012f, 0 },
	{ -1, 0, 0.000008f },
	{ -1, 0, 0 },
	{ -1, -0.0001f, 0.000014f },
	{ -1, -0.00016f, 0.000015f },
	{ -1, -0.00015f, 0.000001f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, -0.0001f, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0.000002f },
	{ -1, -0.0006f, 0 },
	{ -1, -0.0005f, 0.000006f },
	{ -1, 0, 0 },
	{ -1, -0.0004f, 0.000002f },
	{ -1, -0.0001f, 0.000004f },
	{ -1, -0.00012f, 0.000011f },
	{ -1, -0.0006f, 0.000007f },
	{ -1, -0.0002f, -0.0001f },
	{ -1, -0.0001f, 0 },
	{ -1, -0.0001f, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000925C0 = { vertex_000921A0, normal_000923B0, LengthOfArray<Sint32>(vertex_000921A0), meshlist_00092170, matlist_00091F0C, LengthOfArray<Uint16>(meshlist_00092170), LengthOfArray<Uint16>(matlist_00091F0C), { -0.0006899999f, 142.5f, 95 }, 274.8295f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000925E8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000925C0, -80, 0, 80, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000A019C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00093A38, 400, 122.5f, -575, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000A01D0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00093B3C, -80, 55, 195, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000A0204 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00093B3C, -80, -35, 5, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000A0238 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000946D0, -34.3208f, 140, 513.8286f, 0, 0x558B, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000A026C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00097F74, 315.6955f, 100, 568.7365f, 0, 0xFFFFD58C, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000A02A0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009823C, 675, -10, -575, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009152C[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00091568[] = {
	0x8000u | 12, 13, 12, 3, 0, 2, 1, 16, 15, 9, 6, 8, 7
};

extern "C" __declspec(dllexport) Sint16 poly_00091582[] = {
	0x8000u | 12, 8, 11, 9, 10, 16, 17, 2, 5, 3, 4, 13, 14
};

extern "C" __declspec(dllexport) NJS_TEX uv_000915D0[] = {
	{ 25500, -255 },
	{ 25500, 255 },
	{ 20400, -255 },
	{ 20400, 255 },
	{ 15300, -255 },
	{ 15300, 255 },
	{ 10199, -255 },
	{ 10199, 255 },
	{ 5099, -255 },
	{ 5099, 255 },
	{ 0, -255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00091600[] = {
	{ 8925, 0 },
	{ 8925, 255 },
	{ 7140, 0 },
	{ 7140, 255 },
	{ 5355, 0 },
	{ 5355, 255 },
	{ 3570, 0 },
	{ 3570, 255 },
	{ 1785, 0 },
	{ 1785, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00091690[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00091568, NULL, NULL, NULL, uv_000915D0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00091582, NULL, NULL, NULL, uv_00091600, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000916D8[] = {
	{ 150, -152.5f, 1 },
	{ 50, -152.5f, 1 },
	{ 50, -152.5f, -1 },
	{ 150, -152.5f, -1 },
	{ 150, -157.5f, -1 },
	{ 50, -157.5f, -1 },
	{ -150, -152.5f, 1 },
	{ -250, -152.5f, 1 },
	{ -250, -152.5f, -1 },
	{ -150, -152.5f, -1 },
	{ -150, -157.5f, -1 },
	{ -250, -157.5f, -1 },
	{ 250, -152.5f, 1 },
	{ 250, -152.5f, -1 },
	{ 250, -157.5f, -1 },
	{ -50, -152.5f, 1 },
	{ -50, -152.5f, -1 },
	{ -50, -157.5f, -1 },
	{ 150, 2.5f, 0 },
	{ 50, 2.5f, 0 },
	{ 50, 157.5f, 0 },
	{ 150, 157.5f, 0 },
	{ 150, -152.5f, 0 },
	{ 50, -152.5f, 0 },
	{ -150, 2.5f, 0 },
	{ -250, 2.5f, 0 },
	{ -250, 157.5f, 0 },
	{ -150, 157.5f, 0 },
	{ -150, -152.5f, 0 },
	{ -250, -152.5f, 0 },
	{ 250, 2.5f, 0 },
	{ 250, 157.5f, 0 },
	{ 250, -152.5f, 0 },
	{ -50, 2.5f, 0 },
	{ -50, 157.5f, 0 },
	{ -50, -152.5f, 0 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00091888[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00091A38 = { vertex_000916D8, normal_00091888, LengthOfArray<Sint32>(vertex_000916D8), meshlist_00091690, matlist_0009152C, LengthOfArray<Uint16>(meshlist_00091690), LengthOfArray<Uint16>(matlist_0009152C), { 0 }, 250.002f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A00CC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00091A38, 550, 157.5f, 25.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00090FC4[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00091000[] = {
	0x8000u | 12, 12, 13, 0, 3, 1, 2, 15, 16, 6, 9, 7, 8
};

extern "C" __declspec(dllexport) Sint16 poly_0009101A[] = {
	0x8000u | 12, 11, 8, 10, 9, 17, 16, 5, 2, 4, 3, 14, 13
};

extern "C" __declspec(dllexport) NJS_TEX uv_00091068[] = {
	{ 25500, 255 },
	{ 25500, -255 },
	{ 20400, 255 },
	{ 20400, -255 },
	{ 15300, 255 },
	{ 15300, -255 },
	{ 10199, 255 },
	{ 10199, -255 },
	{ 5099, 255 },
	{ 5099, -255 },
	{ 0, 255 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00091098[] = {
	{ 8925, 255 },
	{ 8925, 0 },
	{ 7140, 255 },
	{ 7140, 0 },
	{ 5355, 255 },
	{ 5355, 0 },
	{ 3570, 255 },
	{ 3570, 0 },
	{ 1785, 255 },
	{ 1785, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00091128[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00091000, NULL, NULL, NULL, uv_00091068, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0009101A, NULL, NULL, NULL, uv_00091098, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00091170[] = {
	{ 150, -152.5f, -1 },
	{ 50, -152.5f, -1 },
	{ 50, -152.5f, 1 },
	{ 150, -152.5f, 1 },
	{ 150, -157.5f, 1 },
	{ 50, -157.5f, 1 },
	{ -150, -152.5f, -1 },
	{ -250, -152.5f, -1 },
	{ -250, -152.5f, 1 },
	{ -150, -152.5f, 1 },
	{ -150, -157.5f, 1 },
	{ -250, -157.5f, 1 },
	{ 250, -152.5f, -1 },
	{ 250, -152.5f, 1 },
	{ 250, -157.5f, 1 },
	{ -50, -152.5f, -1 },
	{ -50, -152.5f, 1 },
	{ -50, -157.5f, 1 },
	{ 150, 2.5f, 0 },
	{ 50, 2.5f, 0 },
	{ 50, 157.5f, 0 },
	{ 150, 157.5f, 0 },
	{ 150, -152.5f, 0 },
	{ 50, -152.5f, 0 },
	{ -150, 2.5f, 0 },
	{ -250, 2.5f, 0 },
	{ -250, 157.5f, 0 },
	{ -150, 157.5f, 0 },
	{ -150, -152.5f, 0 },
	{ -250, -152.5f, 0 },
	{ 250, 2.5f, 0 },
	{ 250, 157.5f, 0 },
	{ 250, -152.5f, 0 },
	{ -50, 2.5f, 0 },
	{ -50, 157.5f, 0 },
	{ -50, -152.5f, 0 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00091320[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000914D0 = { vertex_00091170, normal_00091320, LengthOfArray<Sint32>(vertex_00091170), meshlist_00091128, matlist_00090FC4, LengthOfArray<Uint16>(meshlist_00091128), LengthOfArray<Uint16>(matlist_00090FC4), { 0 }, 250.002f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009FFC8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000914D0, 550, 157.5f, -224.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FF94 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000914D0, 550, 157.5f, -174.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000A0098 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00091A38, 550, 157.5f, -24.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00091A60 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00091A38, 550, 157.5f, -74.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000914F8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000914D0, 550, 157.5f, -124.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000A0064 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000914D0, 400, 122.5f, -450, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000A0168 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00091A38, 400, 122.5f, -700, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000A0030 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000914D0, 400, 122.5f, -500, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000A0134 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00091A38, 400, 122.5f, -650, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FFFC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000914D0, 400, 122.5f, -550, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000A0100 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00091A38, 400, 122.5f, -600, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00090FC4_2[] = {
	{ { 0x32B2B2B2 }, { 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00091034[] = {
	0x8000u | 12, 31, 30, 21, 18, 20, 19, 34, 33, 27, 24, 26, 25,
	0x8000u | 12, 29, 25, 28, 24, 35, 33, 23, 19, 22, 18, 32, 30
};

extern "C" __declspec(dllexport) NJS_TEX uv_000910C8[] = {
	{ 255, 0 },
	{ 255, 127 },
	{ 204, 0 },
	{ 204, 127 },
	{ 153, 0 },
	{ 153, 127 },
	{ 102, 0 },
	{ 102, 127 },
	{ 51, 0 },
	{ 51, 127 },
	{ 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 0, 127 },
	{ 51, 255 },
	{ 51, 127 },
	{ 102, 255 },
	{ 102, 127 },
	{ 153, 255 },
	{ 153, 127 },
	{ 204, 255 },
	{ 204, 127 },
	{ 255, 255 },
	{ 255, 127 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00091128_2[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00091034, NULL, NULL, NULL, uv_000910C8, NULL }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000914D0_2 = { vertex_00091170, normal_00091320, LengthOfArray<Sint32>(vertex_00091170), meshlist_00091128_2, matlist_00090FC4_2, LengthOfArray<Uint16>(meshlist_00091128_2), LengthOfArray<Uint16>(matlist_00090FC4_2), { 0 }, 250.002f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009FFC8_2 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000914D0_2, 550, 157.5f, -224.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FF94_2 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000914D0_2, 550, 157.5f, -174.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000914F8_2 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000914D0_2, 550, 157.5f, -124.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009152C_2[] = {
	{ { 0x32B2B2B2 }, { 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009159C[] = {
	0x8000u | 12, 26, 25, 27, 24, 34, 33, 20, 19, 21, 18, 31, 30,
	0x8000u | 12, 25, 29, 24, 28, 33, 35, 19, 23, 18, 22, 30, 32
};

extern "C" __declspec(dllexport) NJS_TEX uv_00091630[] = {
	{ 0 },
	{ 0, 127 },
	{ 51, 0 },
	{ 51, 127 },
	{ 102, 0 },
	{ 102, 127 },
	{ 153, 0 },
	{ 153, 127 },
	{ 204, 0 },
	{ 204, 127 },
	{ 255, 0 },
	{ 255, 127 },
	{ 0, 127 },
	{ 0, 255 },
	{ 51, 127 },
	{ 51, 255 },
	{ 102, 127 },
	{ 102, 255 },
	{ 153, 127 },
	{ 153, 255 },
	{ 204, 127 },
	{ 204, 255 },
	{ 255, 127 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00091690_2[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0009159C, NULL, NULL, NULL, uv_00091630, NULL }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00091A38_2 = { vertex_000916D8, normal_00091888, LengthOfArray<Sint32>(vertex_000916D8), meshlist_00091690_2, matlist_0009152C_2, LengthOfArray<Uint16>(meshlist_00091690_2), LengthOfArray<Uint16>(matlist_0009152C_2), { 0 }, 250.002f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A00CC_2 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00091A38_2, 550, 157.5f, 25.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000A0098_2 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00091A38_2, 550, 157.5f, -24.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00091A60_2 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00091A38_2, 550, 157.5f, -74.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000A0168_2 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00091A38_2, 400, 122.5f, -700, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000A0134_2 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00091A38_2, 400, 122.5f, -650, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000A0100_2 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00091A38_2, 400, 122.5f, -600, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000A0064_2 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000914D0_2, 400, 122.5f, -450, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000A0030_2 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000914D0_2, 400, 122.5f, -500, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0009FFFC_2 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000914D0_2, 400, 122.5f, -550, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00091C40X[] = {
	{ { 0x4CFFFFFF }, { 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00091C68[] = {
	8, 13, 14, 9, 10, 5, 6, 1, 2,
	8, 1, 0, 5, 4, 9, 8, 13, 12
};

extern "C" __declspec(dllexport) NJS_TEX uv_00091CA0[] = {
	{ 0, 125 },
	{ 0, 254 },
	{ 91, 125 },
	{ 91, 254 },
	{ 183, 125 },
	{ 183, 254 },
	{ 255, 125 },
	{ 255, 254 },
	{ 255, 125 },
	{ 255, 0 },
	{ 183, 125 },
	{ 183, 0 },
	{ 91, 125 },
	{ 91, 0 },
	{ 0, 125 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00091D00X[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00091C68, NULL, NULL, NULL, uv_00091CA0, NULL }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00091EB0X = { vertex_00091D30, normal_00091DF0, LengthOfArray<Sint32>(vertex_00091D30), meshlist_00091D00X, matlist_00091C40X, LengthOfArray<Uint16>(meshlist_00091D00X), LengthOfArray<Uint16>(matlist_00091C40X), { 0.00006999999f, 142.5f, -365 }, 241.5186f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00091ED8_2 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00091EB0X, -80, 0, 110, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00091F0CX[] = {
	{ { 0x4CFFFFFF }, { 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00091F34[] = {
	6, 0, 3, 1, 36, 26, 25,
	0x8000u | 7, 39, 38, 37, 5, 3, 2, 0,
	3, 39, 40, 37,
	0x8000u | 7, 2, 5, 4, 7, 6, 9, 8,
	7, 32, 34, 7, 33, 5, 23, 38,
	0x8000u | 7, 32, 31, 7, 24, 9, 27, 28,
	4, 28, 9, 30, 29,
	3, 37, 36, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_00092008[] = {
	{ 255, 0 },
	{ 227, 125 },
	{ 255, 125 },
	{ 234, 165 },
	{ 255, 210 },
	{ 234, 210 },
	{ 185, 210 },
	{ 185, 174 },
	{ 205, 165 },
	{ 151, 125 },
	{ 227, 125 },
	{ 227, 0 },
	{ 255, 0 },
	{ 185, 210 },
	{ 205, 210 },
	{ 205, 165 },
	{ 227, 0 },
	{ 151, 125 },
	{ 151, 0 },
	{ 75, 125 },
	{ 75, 0 },
	{ 0, 125 },
	{ 0 },
	{ 83, 183 },
	{ 92, 183 },
	{ 75, 125 },
	{ 92, 174 },
	{ 151, 125 },
	{ 151, 174 },
	{ 185, 174 },
	{ 83, 183 },
	{ 83, 192 },
	{ 75, 125 },
	{ 74, 192 },
	{ 0, 125 },
	{ 74, 201 },
	{ 48, 201 },
	{ 48, 201 },
	{ 0, 125 },
	{ 48, 254 },
	{ 0, 254 },
	{ 205, 165 },
	{ 234, 165 },
	{ 227, 125 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00092170X[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, poly_00091F34, NULL, NULL, NULL, uv_00092008, NULL }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000925C0X = { vertex_000921A0, normal_000923B0, LengthOfArray<Sint32>(vertex_000921A0), meshlist_00092170X, matlist_00091F0CX, LengthOfArray<Uint16>(meshlist_00092170X), LengthOfArray<Uint16>(matlist_00091F0CX), { -0.0006899999f, 142.5f, 95 }, 274.8295f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000925E8_2 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000925C0X, -80, 0, 80, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) COL collist_00019368[] = {
	{ { 397.434f, 150, 533.7708f }, 143.3896f, 0, 0, &object_0008DD20, 0, 0xA0000001 },
	{ { -155, 50, -260 }, 198.053f, 0, 0, &object_0008E050, 0, 0x20000001 },
	{ { -153.5f, 105, 170 }, 259.4749f, 0, 0, &object_0008E538, 0, 0x20000001 },
	{ { -80, 20, -550 }, 73.48469f, 0, 0, &object_0008EC0C, 0, 0xC0000001 },
	{ { 873.9999f, 20, -149.5f }, 40.0125f, 0, 0, &object_0008EEB0, 0, 0x80000000 },
	{ { 899.9999f, 20, -24.50001f }, 73.48469f, 0, 0, &object_0008F584, 0, 0x80000000 },
	{ { 290, 20.5f, -99.5f }, 33.84154f, 0, 0, &object_0008F97C, 0, 0xC0000001 },
	{ { 75, 40, -300 }, 114.8913f, 0, 0, &object_00090014, 0, 0xA0000001 },
	{ { 105, 40, -130 }, 106.7708f, 0, 0, &object_00090E50, 0, 0xC0000001 },
	{ { -80.00008f, 215, 410 }, 86.0233f, 0, 0, &object_00090F90, 0, 0xA0000001 },
	{ { -80, 165, -450 }, 130, 0, 0, &object_00091C0C, 0, 0xA0000001 },
	{ { 550, 157.5f, -99.5f }, 343.4112f, 0, 0, &object_00093A60, 0, 0xA0000001 },
	{ { -79.99996f, -52.5f, -269 }, 60.46693f, 0, 0, &object_00093B64, 0, 0xA0000001 },
	{ { 227.5f, 40, -100 }, 77.17674f, 0, 0, &object_000946F8, 0, 0xC0000001 },
	{ { -5, 142.5f, -260 }, 238.8122f, 0, 0, &object_00095080, 0, 0x80000000 },
	{ { -6.5f, 147.5f, 170 }, 277.8642f, 0, 0, &object_00096514, 0, 0x80000000 },
	{ { -55, 22.5f, -474 }, 42.51176f, 0, 0, &object_00096ED4, 0, 0x80000000 },
	{ { -55, 122.5f, 426 }, 37.24581f, 0, 0, &object_0009779C, 0, 0x80000000 },
	{ { 75, 42.54898f, -402.5f }, 61.98117f, 0, 0, &object_00097F9C, 0, 0xC0000001 },
	{ { 835, 20, -99.5f }, 35.35534f, 0, 0, &object_00098264, 0, 0xC0000001 },
	{ { 835, 20, -149.5f }, 35.35534f, 0, 0, &object_0009852C, 0, 0x80000000 },
	{ { 835, 20, -49.5f }, 35.35534f, 0, 0, &object_000987F4, 0, 0x80000000 },
	{ { 925, 2.5f, -262.25f }, 98.64742f, 0, 0, &object_00099388, 0, 0xC0000001 },
	{ { 50, 2.5f, -575 }, 91.82183f, 0, 0, &object_00099880, 0, 0xA0000001 },
	{ { 57.5f, 2.5f, -525 }, 85.36685f, 0, 0, &object_00099BB8, 0, 0xA0000001 },
	{ { 57.5f, 2.5f, -625 }, 85.36685f, 0, 0, &object_00099EF0, 0, 0xA0000001 },
	{ { -105, 22.5f, -474 }, 42.51176f, 0, 0, &object_0009A8FC, 0, 0xC0000001 },
	{ { -105.0049f, 122.5f, 425.975f }, 37.27466f, 0, 0, &object_0009B298, 0, 0xC0000001 },
	{ { -77.98347f, 120, 498.6319f }, 79.49586f, 0, 0, &object_0009BBF4, 0, 0xC0000001 },
	{ { -79.99997f, -52.5f, -269 }, 213.3477f, 0, 0, &object_0009C82C, 0, 0xA0000001 },
	{ { -80.00002f, -7.5f, 95.00002f }, 231.8f, 0, 0, &object_0009EE90, 0, 0xA0000001 },
	{ { -80.00003f, 75, 345 }, 85.73217f, 0, 0, &object_0009F8AC, 0, 0xC0000001 },
	{ { 750, -15, -550 }, 73.48469f, 0, 0, &object_0009F8E0, 0, 0xC0000001 },
	{ { 800, -15, -450 }, 73.48469f, 0, 0, &object_0009F914, 0, 0xC0000001 },
	{ { 900, -15, -400 }, 73.48469f, 0, 0, &object_0009F948, 0, 0xC0000001 },
	{ { 900, 20, -124.5f }, 73.48469f, 0, 0, &object_0009F97C, 0, 0xC0000001 },
	{ { 290, 20.5f, -149.5f }, 33.84154f, 0, 0, &object_0009F9B0, 0, 0xC0000001 },
	{ { 809.9999f, 20.5f, -149.5f }, 33.84154f, 0, 0, &object_0009F9E4, 0, 0xC0000001 },
	{ { 809.9999f, 20.5f, -199.5f }, 33.84154f, 0, 0, &object_0009FA18, 0, 0xC0000001 },
	{ { 809.9999f, 20.5f, -249.5f }, 33.84154f, 0, 0, &object_0009FA4C, 0, 0xC0000001 },
	{ { 140, -14.5f, -575 }, 33.84154f, 0, 0, &object_0009FA80, 0, 0xC0000001 },
	{ { 140, -14.5f, -525 }, 33.84154f, 0, 0, &object_0009FAB4, 0, 0xC0000001 },
	{ { 140, -14.5f, -475 }, 33.84154f, 0, 0, &object_0009FAE8, 0, 0xC0000001 },
	{ { 140, -14.5f, -425 }, 33.84154f, 0, 0, &object_0009FB1C, 0, 0xC0000001 },
	{ { 140, -14.5f, -625 }, 33.84154f, 0, 0, &object_0009FB50, 0, 0xC0000001 },
	{ { 140, -14.5f, -675 }, 33.84154f, 0, 0, &object_0009FB84, 0, 0xC0000001 },
	{ { 290, 20.5f, -199.5f }, 33.84154f, 0, 0, &object_0009FBB8, 0, 0xC0000001 },
	{ { 140, -14.5f, -725 }, 33.84154f, 0, 0, &object_0009FBEC, 0, 0xC0000001 },
	{ { 659.9999f, -14.5f, -725 }, 33.84154f, 0, 0, &object_0009FC20, 0, 0xC0000001 },
	{ { 659.9999f, -14.5f, -675 }, 33.84154f, 0, 0, &object_0009FC54, 0, 0xC0000001 },
	{ { 659.9999f, -14.5f, -625 }, 33.84154f, 0, 0, &object_0009FC88, 0, 0xC0000001 },
	{ { 659.9999f, -14.5f, -575 }, 33.84154f, 0, 0, &object_0009FCBC, 0, 0xC0000001 },
	{ { 659.9999f, -14.5f, -525 }, 33.84154f, 0, 0, &object_0009FCF0, 0, 0xC0000001 },
	{ { 659.9999f, -14.5f, -475 }, 33.84154f, 0, 0, &object_0009FD24, 0, 0xC0000001 },
	{ { 659.9999f, -14.5f, -425 }, 33.84154f, 0, 0, &object_0009FD58, 0, 0xC0000001 },
	{ { 809.9999f, 20.5f, -99.5f }, 33.84154f, 0, 0, &object_0009FD8C, 0, 0xC0000001 },
	{ { 290, 20.5f, -249.5f }, 33.84154f, 0, 0, &object_0009FDC0, 0, 0xC0000001 },
	{ { 290, 20.5f, -49.5f }, 33.84154f, 0, 0, &object_0009FDF4, 0, 0xC0000001 },
	{ { 290, 20.5f, 0.5f }, 33.84154f, 0, 0, &object_0009FE28, 0, 0xC0000001 },
	{ { 290, 20.5f, 50.5f }, 33.84154f, 0, 0, &object_0009FE5C, 0, 0xC0000001 },
	{ { 809.9999f, 20.5f, 50.49999f }, 33.84154f, 0, 0, &object_0009FE90, 0, 0xC0000001 },
	{ { 809.9999f, 20.5f, 0.4999927f }, 33.84154f, 0, 0, &object_0009FEC4, 0, 0xC0000001 },
	{ { 809.9999f, 20.5f, -49.5f }, 33.84154f, 0, 0, &object_0009FEF8, 0, 0xC0000001 },
	{ { 229.8604f, 140, 620.0527f }, 114.8913f, 0, 0, &object_0009FF2C, 0, 0xA0000001 },
	{ { 67.9474f, 140, 679.9205f }, 106.7708f, 0, 0, &object_0009FF60, 0, 0xC0000001 },
	{ { -79.99992f, 142.5f, -255 }, 241.5186f, 0, 0, &object_00091ED8, 0, 0xA0000001 },
	{ { -80.00007f, 142.5f, 175 }, 274.8295f, 0, 0, &object_000925E8, 0, 0xA0000001 },
	{ { 400, 122.5f, -575 }, 343.4112f, 0, 0, &object_000A019C, 0, 0xA0000001 },
	{ { -80.00001f, 37.5f, 194 }, 60.46693f, 0, 0, &object_000A01D0, 0, 0xA0000001 },
	{ { -80.00001f, -52.5f, 0 }, 60.46693f, 0, 0, &object_000A0204, 0, 0xA0000001 },
	{ { -19.75912f, 140, 589.2902f }, 77.17674f, 0, 0, &object_000A0238, 0, 0xC0000001 },
	{ { 318.3585f, 142.549f, 568.3386f }, 61.98117f, 0, 0, &object_000A026C, 0, 0xC0000001 },
	{ { 685, -15, -575 }, 35.35534f, 0, 0, &object_000A02A0, 0, 0xC0000001 },
	{ { 550, 157.5f, 25.5f }, 295.478f, 0, 0, &object_000A00CC, 0, 0x80000001 },
	{ { 550, 157.5f, -224.5f }, 295.478f, 0, 0, &object_0009FFC8, 0, 0x80000001 },
	{ { 550, 157.5f, -174.5f }, 295.478f, 0, 0, &object_0009FF94, 0, 0x80000001 },
	{ { 550, 157.5f, -24.5f }, 295.478f, 0, 0, &object_000A0098, 0, 0x80000001 },
	{ { 550, 157.5f, -74.5f }, 295.478f, 0, 0, &object_00091A60, 0, 0x80000001 },
	{ { 550, 157.5f, -124.5f }, 295.478f, 0, 0, &object_000914F8, 0, 0x80000001 },
	{ { 400, 122.5f, -450 }, 295.478f, 0, 0, &object_000A0064, 0, 0x80000001 },
	{ { 400, 122.5f, -700 }, 295.478f, 0, 0, &object_000A0168, 0, 0x80000001 },
	{ { 400, 122.5f, -500 }, 295.478f, 0, 0, &object_000A0030, 0, 0x80000001 },
	{ { 400, 122.5f, -650 }, 295.478f, 0, 0, &object_000A0134, 0, 0x80000001 },
	{ { 400, 122.5f, -550 }, 295.478f, 0, 0, &object_0009FFFC, 0, 0x80000001 },
	{ { 400, 122.5f, -600 }, 295.478f, 0, 0, &object_000A0100, 0, 0x80000001 },
	{ { 550, 157.5f, -224.5f }, 295.478f, 6000.0f, 0, &object_0009FFC8_2, 0, 0x81000001 }, //far right
	{ { 550, 157.5f, 25.5f }, 295.478f, 6000.0f, 0, &object_000A00CC_2, 0, 0x81000001 }, //far left
	{ { 400, 122.5f, -700 }, 295.478f, 6000.0f, 0, &object_000A0168_2, 0, 0x81000001 }, //far right 2
	{ { 400, 122.5f, -450 }, 295.478f, 6000.0f, 0, &object_000A0064_2, 0, 0x81000001 }, //far left 2
	{ { 550, 157.5f, -174.5f }, 295.478f, 5000.0f, 0, &object_0009FF94_2, 0, 0x81000001 }, //mid right
	{ { 550, 157.5f, -24.5f }, 295.478f, 5000.0f, 0, &object_000A0098_2, 0, 0x81000001 }, //mid left
	{ { 400, 122.5f, -650 }, 295.478f, 5000.0f, 0, &object_000A0134_2, 0, 0x81000001 }, //mid right 2
	{ { 400, 122.5f, -500 }, 295.478f, 5000.0f, 0, &object_000A0030_2, 0, 0x81000001 }, //mid left 2
	{ { 550, 157.5f, -124.5f }, 295.478f, 4000.0f, 0, &object_000914F8_2, 0, 0x81000001 }, //end right
	{ { 550, 157.5f, -74.5f }, 295.478f, 4000.0f, 0, &object_00091A60_2, 0, 0x81000001 }, //end left
	{ { 400, 122.5f, -600 }, 295.478f, 4000.0f, 0, &object_000A0100_2, 0, 0x81000001 }, //end right 2
	{ { 400, 122.5f, -550 }, 295.478f, 4000.0f, 0, &object_0009FFFC_2, 0, 0x81000001 }, //end left 2
	{ { -79.99992f, 142.5f, -255 }, 241.5186f, 3000.0f, 0, &object_00091ED8_2, 0, 0x81000001 }, //end 1
	{ { -80.00007f, 142.5f, 175 }, 274.8295f, 3000.0f, 0, &object_000925E8_2, 0, 0x81000001 } //end 2
};

extern "C" __declspec(dllexport) LandTable landtable_00019F5C = { LengthOfArray<int16_t>(collist_00019368), 0, 0xC, 0, 600, collist_00019368, NULL, "TWINKLE03", (NJS_TEXLIST *)0x1151DFA0, 0, 0 };

#pragma warning(pop)