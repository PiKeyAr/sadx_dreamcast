#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0000FE68[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0000FEA4[] = {
	4, 3, 2, 1, 0,
	4, 6, 7, 4, 5,
	4, 11, 10, 9, 8,
	4, 14, 15, 12, 13,
	4, 19, 18, 17, 16,
	4, 22, 23, 20, 21,
	4, 27, 26, 25, 24,
	4, 30, 31, 28, 29,
	4, 35, 34, 33, 32,
	4, 38, 39, 36, 37
};

extern "C" __declspec(dllexport) Sint16 poly_0000FF08[] = {
	4, 2, 6, 0, 4
};

extern "C" __declspec(dllexport) Sint16 poly_0000FF12[] = {
	4, 10, 14, 8, 12,
	4, 18, 22, 16, 20,
	4, 26, 30, 24, 28,
	4, 34, 38, 32, 36
};

extern "C" __declspec(dllexport) NJS_TEX uv_0000FF3C[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 23 },
	{ 0, 23 },
	{ 0 },
	{ 255, 0 },
	{ 0, 23 },
	{ 255, 23 },
	{ 255, 23 },
	{ 0, 23 },
	{ 255, 81 },
	{ 0, 81 },
	{ 0, 23 },
	{ 255, 23 },
	{ 0, 81 },
	{ 255, 81 },
	{ 255, 81 },
	{ 0, 81 },
	{ 255, 139 },
	{ 0, 139 },
	{ 0, 81 },
	{ 255, 81 },
	{ 0, 139 },
	{ 255, 139 },
	{ 255, 139 },
	{ 0, 139 },
	{ 255, 196 },
	{ 0, 196 },
	{ 0, 139 },
	{ 255, 139 },
	{ 0, 196 },
	{ 255, 196 },
	{ 255, 196 },
	{ 0, 196 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, 196 },
	{ 255, 196 },
	{ 0, 254 },
	{ 255, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0000FFDC[] = {
	{ 0, 187 },
	{ 255, 187 },
	{ 0 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0000FFEC[] = {
	{ 0, -1785 },
	{ 2040, -1785 },
	{ 0, 255 },
	{ 2040, 252 },
	{ 0, -1785 },
	{ 2040, -1785 },
	{ 0, 255 },
	{ 2040, 252 },
	{ 0, -1785 },
	{ 2040, -1785 },
	{ 0, 255 },
	{ 2040, 252 },
	{ 0, -1785 },
	{ 2040, -1785 },
	{ 0, 255 },
	{ 2040, 252 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0001002C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 10, poly_0000FEA4, NULL, NULL, NULL, uv_0000FF3C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0000FF08, NULL, NULL, NULL, uv_0000FFDC, NULL },
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0001002C_2[] = {
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_0000FF12, NULL, NULL, NULL, uv_0000FFEC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00010074[] = {
	{ -21.18794f, 90.06205f, -1 },
	{ -21.18794f, 90.06205f, 1 },
	{ -21.18794f, 110.062f, -1 },
	{ -21.18794f, 110.062f, 1 },
	{ 20.81454f, 90.06205f, -1 },
	{ 20.81454f, 90.06205f, 1 },
	{ 20.81454f, 110.062f, -1 },
	{ 20.81454f, 110.062f, 1 },
	{ -21.18794f, 40.06205f, -1 },
	{ -21.18794f, 40.06205f, 1 },
	{ -21.18794f, 90.06205f, -1 },
	{ -21.18794f, 90.06205f, 1 },
	{ 20.81454f, 40.06205f, -1 },
	{ 20.81454f, 40.06205f, 1 },
	{ 20.81454f, 90.06205f, -1 },
	{ 20.81454f, 90.06205f, 1 },
	{ -21.18794f, -9.937943f, -1 },
	{ -21.18794f, -9.937943f, 1 },
	{ -21.18794f, 40.06205f, -1 },
	{ -21.18794f, 40.06205f, 1 },
	{ 20.81454f, -9.937943f, -1 },
	{ 20.81454f, -9.937943f, 1 },
	{ 20.81454f, 40.06205f, -1 },
	{ 20.81454f, 40.06205f, 1 },
	{ -21.18794f, -59.93794f, -1 },
	{ -21.18794f, -59.93794f, 1 },
	{ -21.18794f, -9.937943f, -1 },
	{ -21.18794f, -9.937943f, 1 },
	{ 20.81454f, -59.93794f, -1 },
	{ 20.81454f, -59.93794f, 1 },
	{ 20.81454f, -9.937943f, -1 },
	{ 20.81454f, -9.937943f, 1 },
	{ -21.18794f, -109.9922f, -1 },
	{ -21.18794f, -109.9922f, 1 },
	{ -21.18794f, -59.93794f, -1 },
	{ -21.18794f, -59.93794f, 1 },
	{ 20.81454f, -109.9379f, -1 },
	{ 20.81454f, -109.9379f, 1 },
	{ 20.81454f, -59.93794f, -1 },
	{ 20.81454f, -59.93794f, 1 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00010254[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 1, 0, 0 },
	{ -0.707397f, 0, -0.706816f },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ 0.706816f, 0, -0.707397f },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00010434 = { vertex_00010074, normal_00010254, LengthOfArray<Sint32>(vertex_00010074), meshlist_0001002C, matlist_0000FE68, LengthOfArray<Uint16>(meshlist_0001002C), LengthOfArray<Uint16>(matlist_0000FE68), { -0.186705f, 0.03495f, 0 }, 110.0316f, NULL };

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00010434_2 = { vertex_00010074, normal_00010254, LengthOfArray<Sint32>(vertex_00010074), meshlist_0001002C_2, matlist_0000FE68, LengthOfArray<Uint16>(meshlist_0001002C_2), LengthOfArray<Uint16>(matlist_0000FE68), { -0.186705f, 0.03495f, 0 }, 110.0316f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0001045C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00010434, -80.13022f, 159.9379f, 59.29292f, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0001045C_2 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00010434_2, -80.13022f, 159.9379f, 59.29292f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00010490[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000104E0[] = {
	4, 1, 0, 3, 2,
	4, 9, 8, 11, 10,
	4, 17, 16, 19, 18,
	4, 25, 24, 27, 26
};

extern "C" __declspec(dllexport) Sint16 poly_00010508[] = {
	3, 0, 1, 4,
	3, 6, 7, 2,
	0x8000u | 6, 2, 3, 7, 1, 5, 4,
	3, 8, 9, 12,
	3, 14, 15, 10,
	0x8000u | 6, 10, 11, 15, 9, 13, 12,
	3, 16, 17, 20,
	3, 22, 23, 18,
	0x8000u | 6, 18, 19, 23, 17, 21, 20,
	3, 24, 25, 28,
	3, 30, 31, 26,
	0x8000u | 6, 26, 27, 31, 25, 29, 28
};

extern "C" __declspec(dllexport) Sint16 poly_00010580[] = {
	4, 4, 5, 6, 7,
	4, 12, 13, 14, 15,
	4, 20, 21, 22, 23,
	4, 28, 29, 30, 31
};

extern "C" __declspec(dllexport) Sint16 poly_000105A8[] = {
	4, 0, 4, 2, 6,
	4, 8, 12, 10, 14,
	4, 16, 20, 18, 22,
	4, 24, 28, 26, 30
};

extern "C" __declspec(dllexport) NJS_TEX uv_000105D0[] = {
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -764 },
	{ 0, -764 },
	{ 510, 254 },
	{ 0, 254 },
	{ 510, -765 },
	{ 0, -765 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -765 },
	{ 0, -765 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -765 },
	{ 0, -765 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00010610[] = {
	{ 0, 255 },
	{ 1020, 255 },
	{ 0, -764 },
	{ 1020, -764 },
	{ 0, 254 },
	{ 1020, 254 },
	{ 0, -765 },
	{ 1020, -765 },
	{ 0, 255 },
	{ 1020, 255 },
	{ 0, -765 },
	{ 1020, -765 },
	{ 0, 255 },
	{ 1020, 255 },
	{ 0, -765 },
	{ 1020, -765 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00010650[] = {
	{ 0, -2295 },
	{ 255, -2295 },
	{ 0, -3569 },
	{ 255, -3569 },
	{ 0, -3570 },
	{ 255, -3570 },
	{ 0, -4845 },
	{ 255, -4845 },
	{ 0, -1020 },
	{ 255, -1020 },
	{ 0, -2295 },
	{ 255, -2295 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -1020 },
	{ 255, -1020 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00010690[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000104E0, NULL, NULL, NULL, uv_000105D0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 12, poly_00010508, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_00010580, NULL, NULL, NULL, uv_00010610, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, poly_000105A8, NULL, NULL, NULL, uv_00010650, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000106F0[] = {
	{ 4, 0, -24.99999f },
	{ 4, 0, 25 },
	{ 4, 49.99997f, -24.99999f },
	{ 4, 49.99997f, 25 },
	{ -5.000537f, 0, -16.99999f },
	{ -5.000537f, 0, 25 },
	{ -5.000537f, 49.99997f, -16.99999f },
	{ -5.000537f, 49.99997f, 25 },
	{ 4, 50.00001f, -24.99999f },
	{ 4, 50.00001f, 25 },
	{ 4, 99.99998f, -24.99999f },
	{ 4, 99.99998f, 25 },
	{ -5.000537f, 50.00001f, -16.99999f },
	{ -5.000537f, 50.00001f, 25 },
	{ -5.000537f, 99.99998f, -16.99999f },
	{ -5.000537f, 99.99998f, 25 },
	{ 4, -49.99999f, -24.99999f },
	{ 4, -49.99999f, 25 },
	{ 4, 0, -24.99999f },
	{ 4, 0, 25 },
	{ -5.000537f, -49.99999f, -16.99999f },
	{ -5.000537f, -49.99999f, 25 },
	{ -5.000537f, 0, -16.99999f },
	{ -5.000537f, 0, 25 },
	{ 4, -99.99998f, -24.99999f },
	{ 4, -99.99998f, 25 },
	{ 4, -49.99999f, -24.99999f },
	{ 4, -49.99999f, 25 },
	{ -5.000537f, -99.99998f, -16.99999f },
	{ -5.000537f, -99.99998f, 25 },
	{ -5.000537f, -49.99999f, -16.99999f },
	{ -5.000537f, -49.99999f, 25 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00010870[] = {
	{ 0.342555f, -0.548466f, -0.762785f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.342555f, 0.548466f, -0.762785f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.711764f, -0.625477f, -0.319641f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ -0.711764f, 0.625477f, -0.319641f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.342555f, -0.548466f, -0.762785f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.342555f, 0.548466f, -0.762785f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.711764f, -0.625477f, -0.319641f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ -0.711764f, 0.625477f, -0.319641f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.342555f, -0.548466f, -0.762785f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.342555f, 0.548466f, -0.762785f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.711764f, -0.625477f, -0.319641f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ -0.711764f, 0.625477f, -0.319641f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.342555f, -0.548466f, -0.762785f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.342555f, 0.548466f, -0.762785f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.711764f, -0.625477f, -0.319641f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ -0.711764f, 0.625477f, -0.319641f },
	{ -0.57735f, 0.57735f, 0.57735f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000109F0 = { vertex_000106F0, normal_00010870, LengthOfArray<Sint32>(vertex_000106F0), meshlist_00010690, matlist_00010490, LengthOfArray<Uint16>(meshlist_00010690), LengthOfArray<Uint16>(matlist_00010490), { -0.500268f, 0, 0.000002f }, 103.0776f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00010A18 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000109F0, -55.66586f, 100.0037f, 75.32642f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00010A4C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00010A60[] = {
	4, 1, 0, 3, 2,
	4, 5, 1, 7, 3,
	4, 3, 2, 7, 6,
	4, 0, 4, 2, 6,
	4, 5, 4, 1, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_00010A94[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00010AE4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_00010A60, NULL, NULL, NULL, uv_00010A94, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00010AFC[] = {
	{ -50, -24.2364f, -20.36967f },
	{ -50, -24.2364f, 20 },
	{ -50, 47.41354f, -20.36967f },
	{ -50, 47.41354f, 20 },
	{ 50, -24.2364f, -20.36967f },
	{ 50, -24.2364f, 20 },
	{ 50, 47.41354f, -20.36967f },
	{ 50, 47.41354f, 20 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00010B5C[] = {
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, -0.7071069f, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00010BBC = { vertex_00010AFC, normal_00010B5C, LengthOfArray<Sint32>(vertex_00010AFC), meshlist_00010AE4, matlist_00010A4C, LengthOfArray<Uint16>(meshlist_00010AE4), LengthOfArray<Uint16>(matlist_00010A4C), { 0, 11.58857f, -0.184834f }, 53.92057f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00010BE4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00010BBC, -160.6487f, 132.9615f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00010C18[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00010C2C[] = {
	4, 1, 0, 3, 2,
	4, 5, 1, 7, 3,
	4, 3, 2, 7, 6,
	4, 0, 4, 2, 6,
	4, 5, 4, 1, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_00010C60[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00010CB0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_00010C2C, NULL, NULL, NULL, uv_00010C60, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00010CC8[] = {
	{ -50.03953f, -24.2364f, -125.0206f },
	{ -50, -24.2364f, 20 },
	{ -50, 45.72932f, -125.0206f },
	{ -50, 45.72932f, 20 },
	{ 49.96047f, -24.2364f, -125.0206f },
	{ 50, -24.2364f, 20 },
	{ 50, 45.72932f, -125.0206f },
	{ 50, 45.72932f, 20 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00010D28[] = {
	{ 0.5774789f, 0.577379f, 0.577193f },
	{ 0.577291f, 0.577391f, -0.577369f },
	{ 0.577307f, -0.577307f, 0.577436f },
	{ 0.577324f, -0.577324f, -0.5774029f },
	{ 0, 0.707041f, 0.707173f },
	{ 0, 0.707045f, -0.707168f },
	{ 0, -0.707234f, 0.706979f },
	{ 0, -0.7071069f, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00010D88 = { vertex_00010CC8, normal_00010D28, LengthOfArray<Sint32>(vertex_00010CC8), meshlist_00010CB0, matlist_00010C18, LengthOfArray<Uint16>(meshlist_00010CB0), LengthOfArray<Uint16>(matlist_00010C18), { -0.019764f, 10.74646f, -52.5103f }, 88.08931f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00010DB0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00010D88, -63.00045f, 24.31719f, -150.8499f, 0, 0xFFFFC001, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00010DE4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00010E20[] = {
	4, 3, 2, 1, 0,
	4, 6, 7, 4, 5
};

extern "C" __declspec(dllexport) Sint16 poly_00010E34[] = {
	4, 7, 3, 5, 1
};

extern "C" __declspec(dllexport) Sint16 poly_00010E3E[] = {
	4, 11, 10, 5, 4,
	4, 7, 6, 3, 2,
	0x8000u | 6, 8, 0, 9, 1, 11, 5
};

extern "C" __declspec(dllexport) NJS_TEX uv_00010E60[] = {
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00010E80[] = {
	{ 2549, -510 },
	{ 0, -510 },
	{ 2549, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00010E90[] = {
	{ 510, 254 },
	{ 0, 254 },
	{ 510, 0 },
	{ 0 },
	{ 0 },
	{ 0, 254 },
	{ 2549, 0 },
	{ 2549, 254 },
	{ 510, 254 },
	{ 510, 0 },
	{ 0, 254 },
	{ 0 },
	{ 2549, 254 },
	{ 2549, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00010EC8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00010E20, NULL, NULL, NULL, uv_00010E60, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00010E34, NULL, NULL, NULL, uv_00010E80, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_00010E3E, NULL, NULL, NULL, uv_00010E90, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00010F10[] = {
	{ -69.16576f, 8.003754f, -10.15316f },
	{ -69.16576f, 8.003754f, 8.52037f },
	{ -69.16576f, 26.99449f, -10.15316f },
	{ -69.16576f, 26.99449f, -0.153145f },
	{ 75.70544f, 8.003754f, -10.15316f },
	{ 75.70544f, 8.003754f, 8.52037f },
	{ 75.70544f, 26.99449f, -10.15316f },
	{ 75.70544f, 26.99449f, -0.153145f },
	{ -69.16576f, -2.996246f, -10.15316f },
	{ -69.16576f, -2.996246f, 8.52037f },
	{ 75.70544f, -2.996246f, -10.15316f },
	{ 75.70544f, -2.996246f, 8.52037f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00010FA0[] = {
	{ -1, 0, 0 },
	{ -0.6622429f, 0.159285f, 0.732163f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.603288f, 0.670927f, 0.431163f },
	{ 1, 0, 0 },
	{ 0.6622429f, 0.159285f, 0.732163f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.603288f, 0.670927f, 0.431163f },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00011030 = { vertex_00010F10, normal_00010FA0, LengthOfArray<Sint32>(vertex_00010F10), meshlist_00010EC8, matlist_00010DE4, LengthOfArray<Uint16>(meshlist_00010EC8), LengthOfArray<Uint16>(matlist_00010DE4), { 3.269836f, 11.99912f, -0.816395f }, 73.03487f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00011058 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00011030, -14, 73, -89.52045f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0001108C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 38, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000110F0[] = {
	4, 1, 0, 3, 2
};

extern "C" __declspec(dllexport) Sint16 poly_000110FA[] = {
	4, 5, 1, 7, 3
};

extern "C" __declspec(dllexport) Sint16 poly_00011104[] = {
	4, 4, 5, 6, 7
};

extern "C" __declspec(dllexport) Sint16 poly_0001110E[] = {
	4, 0, 4, 2, 6
};

extern "C" __declspec(dllexport) Sint16 poly_00011118[] = {
	4, 5, 4, 1, 0,
	4, 3, 2, 7, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001112C[] = {
	{ 1530, 255 },
	{ 0, 255 },
	{ 1530, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001113C[] = {
	{ 0, 255 },
	{ 764, 255 },
	{ 0 },
	{ 764, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001114C[] = {
	{ 255, 237 },
	{ 167, 237 },
	{ 255, 165 },
	{ 167, 165 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001115C[] = {
	{ 251, 0 },
	{ 251, 400 },
	{ 470, 0 },
	{ 470, 510 },
	{ 470, 0 },
	{ 470, 510 },
	{ 251, 0 },
	{ 251, 400 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0001117C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000110F0, NULL, NULL, NULL, uv_0001112C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000110FA, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00011104, NULL, NULL, NULL, uv_0001113C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_0001110E, NULL, NULL, NULL, uv_0001114C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_00011118, NULL, NULL, NULL, uv_0001115C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000111F4[] = {
	{ 6.929932f, 96.26137f, -29.14829f },
	{ 6.929932f, 96.26137f, 27.3517f },
	{ 6.929932f, 110.2614f, -29.14829f },
	{ 6.929932f, 110.2614f, 27.3517f },
	{ -3.070068f, 96.26137f, -17.14829f },
	{ -3.070068f, 96.26137f, 27.3517f },
	{ -3.070068f, 110.2614f, -17.14829f },
	{ -3.070068f, 110.2614f, 27.3517f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00011254[] = {
	{ 0.285479f, -0.544756f, -0.788507f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.285479f, 0.544756f, -0.788507f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.7241139f, -0.637909f, -0.262165f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ -0.7241139f, 0.637909f, -0.262165f },
	{ -0.57735f, 0.57735f, 0.57735f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000112B4 = { vertex_000111F4, normal_00011254, LengthOfArray<Sint32>(vertex_000111F4), meshlist_0001117C, matlist_0001108C, LengthOfArray<Uint16>(meshlist_0001117C), LengthOfArray<Uint16>(matlist_0001108C), { 1.929932f, 103.2614f, -0.898298f }, 29.10434f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000112DC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000112B4, -57.59571f, 103.7423f, 72.97471f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00011310[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00011374[] = {
	4, 2, 3, 1, 0,
	4, 10, 11, 9, 8
};

extern "C" __declspec(dllexport) Sint16 poly_00011388[] = {
	4, 6, 7, 5, 4
};

extern "C" __declspec(dllexport) Sint16 poly_00011392[] = {
	4, 14, 15, 13, 12
};

extern "C" __declspec(dllexport) Sint16 poly_0001139C[] = {
	4, 18, 19, 17, 16,
	4, 22, 23, 21, 20
};

extern "C" __declspec(dllexport) Sint16 poly_000113B0[] = {
	0x8000u | 8, 20, 21, 2, 7, 1, 4, 18, 17,
	3, 20, 3, 2,
	0x8000u | 8, 18, 19, 0, 13, 3, 14, 20, 23,
	3, 18, 1, 0,
	4, 22, 21, 6, 7,
	3, 8, 11, 5,
	0x8000u | 8, 5, 6, 11, 22, 10, 23, 15, 14,
	0x8000u | 8, 15, 12, 9, 16, 8, 17, 5, 4,
	3, 15, 10, 9,
	4, 16, 19, 12, 13
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001142C[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001144C[] = {
	{ 0 },
	{ 1019, 0 },
	{ 0, 255 },
	{ 1019, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001145C[] = {
	{ 0, 255 },
	{ 0 },
	{ 508, 255 },
	{ 508, 0 },
	{ 508, 255 },
	{ 508, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001147C[] = {
	{ 65, 67 },
	{ 65, 67 },
	{ 58, 79 },
	{ 65, 79 },
	{ 58, 175 },
	{ 65, 175 },
	{ 65, 187 },
	{ 189, 187 },
	{ 65, 67 },
	{ 58, 79 },
	{ 58, 79 },
	{ 65, 187 },
	{ 65, 187 },
	{ 58, 175 },
	{ 65, 175 },
	{ 58, 79 },
	{ 65, 79 },
	{ 65, 67 },
	{ 189, 67 },
	{ 65, 187 },
	{ 58, 175 },
	{ 58, 175 },
	{ 189, 67 },
	{ 65, 67 },
	{ 189, 79 },
	{ 65, 79 },
	{ 196, 175 },
	{ 196, 79 },
	{ 189, 175 },
	{ 189, 175 },
	{ 189, 79 },
	{ 196, 79 },
	{ 189, 67 },
	{ 196, 79 },
	{ 189, 67 },
	{ 189, 79 },
	{ 65, 79 },
	{ 189, 79 },
	{ 189, 175 },
	{ 196, 175 },
	{ 189, 187 },
	{ 196, 175 },
	{ 189, 187 },
	{ 189, 175 },
	{ 65, 175 },
	{ 189, 79 },
	{ 196, 79 },
	{ 196, 175 },
	{ 189, 187 },
	{ 65, 187 },
	{ 189, 175 },
	{ 65, 175 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0001154C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00011374, NULL, NULL, NULL, uv_0001142C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00011388, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00011392, NULL, NULL, NULL, uv_0001144C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_0001139C, NULL, NULL, NULL, uv_0001145C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 10, poly_000113B0, NULL, NULL, NULL, uv_0001147C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000115C4[] = {
	{ -21.22948f, -2.262573f, -6.173584f },
	{ -21.22948f, -2.262573f, 2.826416f },
	{ -21.22948f, 5.812378f, 2.826416f },
	{ -21.22948f, 5.812378f, -6.173584f },
	{ -19.22955f, -2.262573f, 3.326416f },
	{ 16.77045f, -2.262573f, 3.326416f },
	{ 16.77045f, 5.812378f, 3.326416f },
	{ -19.22955f, 5.812378f, 3.326416f },
	{ 18.77045f, -2.262573f, 2.826416f },
	{ 18.77045f, -2.262573f, -6.173584f },
	{ 18.77045f, 5.812378f, -6.173584f },
	{ 18.77045f, 5.812378f, 2.826416f },
	{ 16.77045f, -2.262573f, -6.673584f },
	{ -19.22955f, -2.262573f, -6.673584f },
	{ -19.22955f, 5.812378f, -6.673584f },
	{ 16.77045f, 5.812378f, -6.673584f },
	{ 16.77045f, -3.266724f, -6.173584f },
	{ 16.77045f, -3.266724f, 2.826416f },
	{ -19.22955f, -3.266724f, 2.826416f },
	{ -19.22955f, -3.266724f, -6.173584f },
	{ -19.22955f, 6.816528f, -6.173584f },
	{ -19.22955f, 6.816528f, 2.826416f },
	{ 16.77045f, 6.816528f, 2.826416f },
	{ 16.77045f, 6.816528f, -6.173584f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000116E4[] = {
	{ -0.733835f, -0.431924f, -0.524336f },
	{ -0.733835f, -0.431924f, 0.524336f },
	{ -0.733835f, 0.431924f, 0.524336f },
	{ -0.733835f, 0.431924f, -0.524336f },
	{ -0.117276f, -0.223757f, 0.967564f },
	{ 0.117273f, -0.223757f, 0.967564f },
	{ 0.117273f, 0.223757f, 0.967564f },
	{ -0.117276f, 0.223757f, 0.967564f },
	{ 0.733831f, -0.431928f, 0.5243379f },
	{ 0.733831f, -0.431928f, -0.5243379f },
	{ 0.733831f, 0.431928f, -0.5243379f },
	{ 0.733831f, 0.431928f, 0.5243379f },
	{ 0.117273f, -0.223757f, -0.967564f },
	{ -0.117276f, -0.223757f, -0.967564f },
	{ -0.117276f, 0.223757f, -0.967564f },
	{ 0.117273f, 0.223757f, -0.967564f },
	{ 0.194587f, -0.849036f, -0.491196f },
	{ 0.194587f, -0.849036f, 0.491196f },
	{ -0.194592f, -0.849035f, 0.491195f },
	{ -0.194592f, -0.849035f, -0.491195f },
	{ -0.194592f, 0.849035f, -0.491195f },
	{ -0.194592f, 0.849035f, 0.491195f },
	{ 0.194587f, 0.849036f, 0.491196f },
	{ 0.194587f, 0.849036f, -0.491196f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00011804 = { vertex_000115C4, normal_000116E4, LengthOfArray<Sint32>(vertex_000115C4), meshlist_0001154C, matlist_00011310, LengthOfArray<Uint16>(meshlist_0001154C), LengthOfArray<Uint16>(matlist_00011310), { -1.229515f, 1.774902f, -1.673584f }, 20.6155f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0001182C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00011804, -79.43623f, 263.2143f, 90, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00011860[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000118C4[] = {
	4, 2, 3, 1, 0,
	4, 6, 7, 5, 4,
	4, 10, 11, 9, 8,
	4, 14, 15, 13, 12
};

extern "C" __declspec(dllexport) Sint16 poly_000118EC[] = {
	4, 18, 19, 17, 16
};

extern "C" __declspec(dllexport) Sint16 poly_000118F6[] = {
	5, 46, 47, 39, 31, 35,
	4, 41, 38, 25, 34,
	0x8000u | 7, 31, 43, 47, 28, 46, 29, 41,
	6, 35, 34, 39, 38, 46, 41
};

extern "C" __declspec(dllexport) Sint16 poly_0001192A[] = {
	4, 3, 2, 20, 21,
	4, 0, 3, 13, 14,
	4, 1, 0, 18, 19,
	4, 2, 1, 7, 4,
	4, 7, 6, 21, 22,
	4, 5, 4, 17, 18,
	4, 6, 5, 11, 8,
	4, 11, 10, 22, 23,
	4, 9, 8, 16, 17,
	4, 10, 9, 15, 12,
	4, 15, 14, 23, 20,
	4, 13, 12, 19, 16,
	3, 0, 13, 19,
	3, 14, 3, 20,
	3, 2, 7, 21,
	4, 41, 25, 40, 24,
	4, 28, 29, 27, 26,
	4, 31, 43, 30, 42,
	4, 34, 35, 33, 32,
	4, 24, 25, 33, 34,
	4, 40, 24, 45, 37,
	4, 41, 40, 29, 26,
	4, 27, 26, 44, 45,
	4, 28, 27, 43, 42,
	4, 30, 42, 36, 44,
	4, 31, 30, 35, 32,
	4, 33, 32, 37, 36,
	3, 24, 33, 37,
	3, 26, 40, 45,
	3, 32, 30, 36,
	3, 42, 27, 44
};

extern "C" __declspec(dllexport) Sint16 poly_00011A52[] = {
	3, 4, 1, 18,
	3, 12, 9, 16,
	3, 8, 5, 17,
	3, 10, 15, 23,
	3, 6, 11, 22
};

extern "C" __declspec(dllexport) NJS_TEX uv_00011A7C[] = {
	{ 510, -254 },
	{ 0, -254 },
	{ 510, 255 },
	{ 0, 255 },
	{ 1020, -254 },
	{ 0, -254 },
	{ 1020, 255 },
	{ 0, 255 },
	{ 0, -254 },
	{ 510, -254 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -254 },
	{ 1020, -254 },
	{ 0, 255 },
	{ 1020, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00011ABC[] = {
	{ 0 },
	{ 0, 254 },
	{ 510, 0 },
	{ 510, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00011ACC[] = {
	{ 33, -202 },
	{ 464, -202 },
	{ 464, 202 },
	{ 510, 202 },
	{ 464, 255 },
	{ 0, -202 },
	{ 33, 202 },
	{ 0, 202 },
	{ 33, 255 },
	{ 510, 202 },
	{ 510, -202 },
	{ 464, -202 },
	{ 464, -255 },
	{ 33, -202 },
	{ 33, -255 },
	{ 0, -202 },
	{ 464, 255 },
	{ 33, 255 },
	{ 464, 202 },
	{ 33, 202 },
	{ 33, -202 },
	{ 0, -202 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00011B24[] = {
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 253 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00011CF8[] = {
	{ 55, 187 },
	{ 48, 187 },
	{ 55, 194 },
	{ 199, 187 },
	{ 206, 187 },
	{ 199, 194 },
	{ 206, 187 },
	{ 199, 187 },
	{ 199, 194 },
	{ 206, 67 },
	{ 199, 67 },
	{ 199, 60 },
	{ 199, 67 },
	{ 206, 67 },
	{ 199, 60 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00011D34[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000118C4, NULL, NULL, NULL, uv_00011A7C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000118EC, NULL, NULL, NULL, uv_00011ABC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_000118F6, NULL, NULL, NULL, uv_00011ACC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 31, poly_0001192A, NULL, NULL, NULL, uv_00011B24, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 5, poly_00011A52, NULL, NULL, NULL, uv_00011CF8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00011DAC[] = {
	{ -23.00006f, -18.00003f, -17.50024f },
	{ -23.00006f, -18.00003f, 17.49976f },
	{ -23.00006f, 14.99997f, 17.49976f },
	{ -23.00006f, 14.99997f, -17.50024f },
	{ -21.00018f, -18.00003f, 19.49976f },
	{ 20.99994f, -18.00003f, 19.49976f },
	{ 20.99994f, 14.99997f, 19.49976f },
	{ -21.00018f, 14.99997f, 19.49976f },
	{ 22.99994f, -18.00003f, 17.49976f },
	{ 22.99994f, -18.00003f, -17.50024f },
	{ 22.99994f, 14.99997f, -17.50024f },
	{ 22.99994f, 14.99997f, 17.49976f },
	{ 20.99994f, -18.00003f, -19.50024f },
	{ -21.00018f, -18.00003f, -19.50024f },
	{ -21.00018f, 14.99997f, -19.50024f },
	{ 20.99994f, 14.99997f, -19.50024f },
	{ 20.99994f, -20.00003f, -17.50024f },
	{ 20.99994f, -20.00003f, 17.49976f },
	{ -21.00018f, -20.00003f, 17.49976f },
	{ -21.00018f, -20.00003f, -17.50024f },
	{ -21.00018f, 16.99997f, -17.50024f },
	{ -21.00018f, 16.99997f, 17.49976f },
	{ 20.99994f, 16.99997f, 17.49976f },
	{ 20.99994f, 16.99997f, -17.50024f },
	{ -22.99994f, 17.00003f, -15.49976f },
	{ -22.99994f, 19.00003f, -15.49976f },
	{ -19.99994f, 17.00003f, 19.50024f },
	{ 19.00006f, 17.00003f, 19.50024f },
	{ 19.00006f, 19.00003f, 19.50024f },
	{ -19.99994f, 19.00003f, 19.50024f },
	{ 23.00006f, 17.00003f, -15.49976f },
	{ 23.00006f, 19.00003f, -15.49976f },
	{ 19.00006f, 17.00003f, -19.49976f },
	{ -19.99994f, 17.00003f, -19.49976f },
	{ -19.99994f, 19.00003f, -19.49976f },
	{ 19.00006f, 19.00003f, -19.49976f },
	{ 19.00006f, 17.00003f, -15.49976f },
	{ -19.99994f, 17.00003f, -15.49976f },
	{ -19.99994f, 20.00003f, -15.49976f },
	{ 19.00006f, 20.00003f, -15.49976f },
	{ -22.99994f, 17.00003f, 15.50024f },
	{ -22.99994f, 19.00003f, 15.50024f },
	{ 23.00006f, 17.00003f, 15.50024f },
	{ 23.00006f, 19.00003f, 15.50024f },
	{ 19.00006f, 17.00003f, 15.50024f },
	{ -19.99994f, 17.00003f, 15.50024f },
	{ -19.99994f, 20.00003f, 15.50024f },
	{ 19.00006f, 20.00003f, 15.50024f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00011FEC[] = {
	{ -0.875587f, -0.341575f, -0.341575f },
	{ -0.875587f, -0.341575f, 0.341575f },
	{ -0.875587f, 0.341575f, 0.341575f },
	{ -0.875587f, 0.341575f, -0.341575f },
	{ -0.341598f, -0.341584f, 0.875574f },
	{ 0.341586f, -0.341586f, 0.875579f },
	{ 0.341586f, 0.341586f, 0.875579f },
	{ -0.341598f, 0.341584f, 0.875574f },
	{ 0.875579f, -0.341586f, 0.341586f },
	{ 0.875579f, -0.341586f, -0.341586f },
	{ 0.875579f, 0.341586f, -0.341586f },
	{ 0.875579f, 0.341586f, 0.341586f },
	{ 0.341586f, -0.341586f, -0.875579f },
	{ -0.341598f, -0.341584f, -0.875574f },
	{ -0.341598f, 0.341584f, -0.875574f },
	{ 0.341586f, 0.341586f, -0.875579f },
	{ 0.341586f, -0.875579f, -0.341586f },
	{ 0.341586f, -0.875579f, 0.341586f },
	{ -0.341598f, -0.875574f, 0.341584f },
	{ -0.341598f, -0.875574f, -0.341584f },
	{ -0.46058f, 0.758782f, -0.460561f },
	{ -0.46058f, 0.758782f, 0.460561f },
	{ 0.460563f, 0.758791f, 0.460563f },
	{ 0.460563f, 0.758791f, -0.460563f },
	{ -0.7270629f, -0.642374f, -0.242354f },
	{ -0.8068849f, 0.530588f, -0.259642f },
	{ -0.351257f, -0.618944f, 0.702514f },
	{ 0.297109f, -0.630262f, 0.717284f },
	{ 0.31104f, 0.5472479f, 0.777029f },
	{ -0.365479f, 0.536719f, 0.7604989f },
	{ 0.717284f, -0.630262f, -0.297109f },
	{ 0.777029f, 0.5472479f, -0.31104f },
	{ 0.297109f, -0.630262f, -0.717284f },
	{ -0.351257f, -0.618944f, -0.702514f },
	{ -0.365479f, 0.536719f, -0.7604989f },
	{ 0.31104f, 0.5472479f, -0.777029f },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ -0.157214f, 0.980333f, -0.119295f },
	{ 0.120218f, 0.985442f, -0.120218f },
	{ -0.7270629f, -0.642374f, 0.242354f },
	{ -0.8068849f, 0.530588f, 0.259642f },
	{ 0.717284f, -0.630262f, 0.297109f },
	{ 0.777029f, 0.5472479f, 0.31104f },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ -0.157214f, 0.980333f, 0.119295f },
	{ 0.120218f, 0.985442f, 0.120218f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0001222C = { vertex_00011DAC, normal_00011FEC, LengthOfArray<Sint32>(vertex_00011DAC), meshlist_00011D34, matlist_00011860, LengthOfArray<Uint16>(meshlist_00011D34), LengthOfArray<Uint16>(matlist_00011860), { 0 }, 30.15397f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00012254 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0001222C, 66.33441f, 221.0141f, -70.17334f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00012288[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000122C4[] = {
	3, 14, 25, 1,
	0x8000u | 6, 1, 2, 25, 0, 26, 35,
	4, 3, 27, 4, 15,
	3, 32, 17, 33,
	3, 30, 6, 38,
	0x8000u | 6, 21, 22, 11, 17, 7, 33,
	3, 21, 10, 11,
	0x8000u | 6, 12, 13, 24, 6, 16, 38,
	3, 12, 23, 24,
	3, 34, 0, 35,
	0x8000u | 6, 39, 42, 20, 5, 27, 3
};

extern "C" __declspec(dllexport) Sint16 poly_00012336[] = {
	4, 12, 9, 23, 19,
	4, 21, 18, 10, 8,
	4, 35, 28, 34, 36,
	4, 31, 32, 37, 33,
	4, 38, 40, 30, 29,
	4, 41, 39, 43, 42
};

extern "C" __declspec(dllexport) Sint16 poly_00012372[] = {
	4, 9, 8, 19, 18,
	4, 28, 31, 36, 37,
	4, 40, 41, 29, 43
};

extern "C" __declspec(dllexport) NJS_TEX uv_00012390[] = {
	{ 0, -765 },
	{ 0, -765 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, -765 },
	{ 60, 255 },
	{ 60, -765 },
	{ 152, -765 },
	{ 0, 255 },
	{ 0, -765 },
	{ 0, 255 },
	{ 0, -765 },
	{ 254, -765 },
	{ 356, -765 },
	{ 254, 255 },
	{ 764, 255 },
	{ 661, 255 },
	{ 764, -765 },
	{ 406, -765 },
	{ 356, -765 },
	{ 356, 255 },
	{ 356, -765 },
	{ 356, 255 },
	{ 254, 255 },
	{ 406, -765 },
	{ 406, 255 },
	{ 356, 255 },
	{ 610, 255 },
	{ 661, 255 },
	{ 661, -765 },
	{ 661, 255 },
	{ 661, -765 },
	{ 764, -765 },
	{ 610, 255 },
	{ 610, -765 },
	{ 661, -765 },
	{ 152, 255 },
	{ 60, 255 },
	{ 152, -765 },
	{ 865, -765 },
	{ 865, 255 },
	{ 959, -765 },
	{ 959, 255 },
	{ 1020, -765 },
	{ 1020, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00012448[] = {
	{ 142, 215 },
	{ 142, 215 },
	{ 142, 39 },
	{ 142, 39 },
	{ 112, 39 },
	{ 112, 39 },
	{ 112, 215 },
	{ 112, 215 },
	{ 73, 39 },
	{ 73, 39 },
	{ 73, 215 },
	{ 73, 215 },
	{ 88, 39 },
	{ 88, 39 },
	{ 88, 215 },
	{ 88, 215 },
	{ 166, 39 },
	{ 166, 39 },
	{ 166, 215 },
	{ 166, 215 },
	{ 181, 39 },
	{ 181, 39 },
	{ 181, 215 },
	{ 181, 215 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000124A8[] = {
	{ 203, 255 },
	{ 115, 255 },
	{ 203, -1275 },
	{ 115, -1275 },
	{ 203, 255 },
	{ 115, 255 },
	{ 203, -1275 },
	{ 115, -1275 },
	{ 203, 255 },
	{ 115, 255 },
	{ 203, -1275 },
	{ 115, -1275 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000124D8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 11, poly_000122C4, NULL, NULL, NULL, uv_00012390, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_00012336, NULL, NULL, NULL, uv_00012448, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_00012372, NULL, NULL, NULL, uv_000124A8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00012520[] = {
	{ -17.51409f, -130.8862f, -4.708611f },
	{ -19.88903f, -130.8862f, 2.291389f },
	{ -19.88903f, -130.8862f, -1.708611f },
	{ 20.11089f, -130.8862f, -2.208611f },
	{ 20.11089f, -130.8862f, 2.291389f },
	{ 17.73589f, -130.8862f, -4.708611f },
	{ 6.110897f, -130.8862f, -4.708611f },
	{ -5.889095f, -130.8862f, -4.708611f },
	{ -3.889095f, -130.8862f, 0.291389f },
	{ 4.110897f, -130.8862f, 0.291389f },
	{ -3.889095f, -130.8862f, -5.708611f },
	{ -5.889095f, -130.8862f, -5.708611f },
	{ 4.110897f, -130.8862f, -5.708611f },
	{ 6.110897f, -130.8862f, -5.708611f },
	{ -19.88903f, -30.88981f, 2.291389f },
	{ 20.11089f, -30.88981f, 2.291389f },
	{ 6.110897f, -30.88981f, -4.708611f },
	{ -5.889095f, -30.88981f, -4.708611f },
	{ -3.889095f, -30.88981f, 0.291389f },
	{ 4.110897f, -30.88981f, 0.291389f },
	{ 17.73589f, -30.88981f, -4.708611f },
	{ -3.889095f, -30.88981f, -5.708611f },
	{ -5.889095f, -30.88981f, -5.708611f },
	{ 4.110897f, -30.88981f, -5.708611f },
	{ 6.110897f, -30.88981f, -5.708611f },
	{ -19.88903f, -30.88981f, -1.708611f },
	{ -17.51409f, -30.88981f, -4.708611f },
	{ 20.11089f, -30.88981f, -2.208611f },
	{ -13.88909f, -30.88981f, -2.708611f },
	{ 10.1109f, -130.8862f, -2.708611f },
	{ 10.1109f, -130.8862f, -4.708611f },
	{ -9.889094f, -30.88981f, -2.708611f },
	{ -9.889094f, -30.88981f, -4.708611f },
	{ -9.889094f, -130.8862f, -4.708611f },
	{ -13.88909f, -130.8862f, -4.708611f },
	{ -13.88909f, -30.88981f, -4.708611f },
	{ -13.88909f, -130.8862f, -2.708611f },
	{ -9.889094f, -130.8862f, -2.708611f },
	{ 10.1109f, -30.88981f, -4.708611f },
	{ 14.11089f, -30.88981f, -4.708611f },
	{ 10.1109f, -30.88981f, -2.708611f },
	{ 14.11089f, -30.88981f, -2.708611f },
	{ 14.11089f, -130.8862f, -4.708611f },
	{ 14.11089f, -130.8862f, -2.708611f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00012730[] = {
	{ -0.435492f, 0, -0.900192f },
	{ -1, 0, 0 },
	{ -0.944472f, 0, -0.328593f },
	{ 0.928709f, 0, -0.37081f },
	{ 1, 0, 0 },
	{ 0.394494f, 0, -0.918899f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.394494f, 0, -0.918899f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.944472f, 0, -0.328593f },
	{ -0.435492f, 0, -0.900192f },
	{ 0.928709f, 0, -0.37081f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00012940 = { vertex_00012520, normal_00012730, LengthOfArray<Sint32>(vertex_00012520), meshlist_000124D8, matlist_00012288, LengthOfArray<Uint16>(meshlist_000124D8), LengthOfArray<Uint16>(matlist_00012288), { 0.110929f, -80.88802f, -1.708611f }, 50.15796f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00012968 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00012940, -80.77665f, 130.89f, 98.03503f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0001299C[] = {
	{ { 0x7FFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000129B0[] = {
	0x8000u | 8, 7, 3, 6, 2, 5, 1, 4, 0,
	0x8000u | 8, 11, 7, 10, 6, 9, 5, 8, 4,
	4, 13, 12, 9, 8,
	0x8000u | 6, 15, 11, 14, 10, 13, 9
};

extern "C" __declspec(dllexport) NJS_TEX uv_000129EC[] = {
	{ 249, 0 },
	{ 237, 255 },
	{ 219, 0 },
	{ 190, 255 },
	{ 36, 0 },
	{ 65, 255 },
	{ 6, 0 },
	{ 18, 255 },
	{ 249, 0 },
	{ 249, 254 },
	{ 219, 0 },
	{ 219, 254 },
	{ 36, 0 },
	{ 36, 254 },
	{ 6, 0 },
	{ 6, 254 },
	{ 25, 0 },
	{ 8, 0 },
	{ 41, 255 },
	{ 13, 255 },
	{ 247, 0 },
	{ 242, 255 },
	{ 230, 0 },
	{ 214, 255 },
	{ 434, 0 },
	{ 41, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00012A54[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000129B0, NULL, NULL, NULL, uv_000129EC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00012A6C[] = {
	{ 0.013702f, -85.42577f, -65.95801f },
	{ -19.98631f, -85.42577f, -15.101f },
	{ -19.98631f, -85.42577f, 34.986f },
	{ 0.044118f, -85.42577f, 85.95797f },
	{ 13.53386f, -38.27248f, -65.95801f },
	{ -6.466155f, -38.27248f, -15.101f },
	{ -6.466155f, -38.27248f, 34.986f },
	{ 13.53742f, -38.27092f, 85.95797f },
	{ 13.53386f, 6.529498f, -65.95801f },
	{ -6.466157f, 6.529498f, -15.101f },
	{ -6.466157f, 6.529498f, 34.986f },
	{ 13.52078f, 6.529498f, 85.95797f },
	{ 20.00001f, 67.20297f, -65.95801f },
	{ 0.000007f, 67.20297f, -15.101f },
	{ 0.000007f, 67.20297f, 34.986f },
	{ 20.00257f, 67.20146f, 85.95797f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00012B2C[] = {
	{ -0.8991629f, 0.257815f, -0.353605f },
	{ -0.946645f, 0.271429f, -0.173753f },
	{ -0.946745f, 0.271202f, 0.173558f },
	{ -0.899444f, 0.257375f, 0.353213f },
	{ -0.923244f, 0.125689f, -0.363075f },
	{ -0.972378f, 0.138956f, -0.187541f },
	{ -0.972471f, 0.138739f, 0.187218f },
	{ -0.923533f, 0.125313f, 0.362468f },
	{ -0.929459f, 0.050011f, -0.365519f },
	{ -0.981393f, 0.051844f, -0.184879f },
	{ -0.981472f, 0.05182f, 0.184465f },
	{ -0.929772f, 0.049976f, 0.364727f },
	{ -0.92608f, 0.098695f, -0.36419f },
	{ -0.976721f, 0.104092f, -0.187564f },
	{ -0.976791f, 0.104224f, 0.18713f },
	{ -0.926367f, 0.09896699f, 0.363387f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00012BEC = { vertex_00012A6C, normal_00012B2C, LengthOfArray<Sint32>(vertex_00012A6C), meshlist_00012A54, matlist_0001299C, LengthOfArray<Uint16>(meshlist_00012A54), LengthOfArray<Uint16>(matlist_0001299C), { 0.00813f, -9.111401f, 9.999985f }, 107.6731f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00012C14 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00012BEC, 95.6129f, 234.2061f, -9.955868f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00012C48[] = {
	{ { 0x7FFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00012C5C[] = {
	0x8000u | 8, 7, 3, 6, 2, 5, 1, 4, 0,
	0x8000u | 8, 11, 7, 10, 6, 9, 5, 8, 4,
	0x8000u | 8, 15, 11, 14, 10, 13, 9, 12, 8
};

extern "C" __declspec(dllexport) NJS_TEX uv_00012C94[] = {
	{ 250, 0 },
	{ 250, 255 },
	{ 213, 0 },
	{ 213, 255 },
	{ 41, 0 },
	{ 41, 255 },
	{ 5, 0 },
	{ 5, 255 },
	{ 250, 0 },
	{ 250, 255 },
	{ 213, 0 },
	{ 213, 255 },
	{ 41, 0 },
	{ 41, 255 },
	{ 5, 0 },
	{ 5, 255 },
	{ 250, 0 },
	{ 250, 255 },
	{ 213, 0 },
	{ 213, 255 },
	{ 41, 0 },
	{ 41, 255 },
	{ 5, 0 },
	{ 5, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00012CF4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00012C5C, NULL, NULL, NULL, uv_00012C94, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00012D0C[] = {
	{ 20.00002f, -67.20296f, -65.95801f },
	{ 0.000013f, -67.20296f, -15.101f },
	{ 0.000013f, -67.20296f, 34.986f },
	{ 20.00001f, -67.20296f, 85.95797f },
	{ 20.00001f, -22.40099f, -65.95801f },
	{ 0.000011f, -22.40099f, -15.101f },
	{ 0.000011f, -22.40099f, 34.986f },
	{ 20.00001f, -22.40099f, 85.95797f },
	{ 20.00001f, 22.40099f, -65.95801f },
	{ 0.000008999999f, 22.40099f, -15.101f },
	{ 0.000008999999f, 22.40099f, 34.986f },
	{ 20.00001f, 22.40099f, 85.95797f },
	{ 20.00001f, 67.20297f, -65.95801f },
	{ 0.000007f, 67.20297f, -15.101f },
	{ 0.000007f, 67.20297f, 34.986f },
	{ 20.00001f, 67.20297f, 85.95797f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00012DCC[] = {
	{ -0.9306239f, 0, -0.365977f },
	{ -0.982503f, 0, -0.186247f },
	{ -0.982574f, 0, 0.18587f },
	{ -0.930905f, 0, 0.365261f },
	{ -0.9306239f, 0, -0.365977f },
	{ -0.982503f, 0, -0.186247f },
	{ -0.982574f, 0, 0.18587f },
	{ -0.930905f, 0, 0.365261f },
	{ -0.9306239f, 0, -0.365977f },
	{ -0.982503f, 0, -0.186247f },
	{ -0.982574f, 0, 0.18587f },
	{ -0.930905f, 0, 0.365261f },
	{ -0.9306239f, 0, -0.365977f },
	{ -0.982503f, 0, -0.186247f },
	{ -0.982574f, 0, 0.18587f },
	{ -0.930905f, 0, 0.365261f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00012E8C = { vertex_00012D0C, normal_00012DCC, LengthOfArray<Sint32>(vertex_00012D0C), meshlist_00012CF4, matlist_00012C48, LengthOfArray<Uint16>(meshlist_00012CF4), LengthOfArray<Uint16>(matlist_00012C48), { 10.00001f, 0.000008f, 9.999985f }, 101.4192f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00012EB4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00012E8C, 75.03879f, 72.73562f, -9.955868f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00012EE8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00012EFC[] = {
	6, 2, 3, 1, 0, 8, 9,
	4, 0, 5, 9, 14,
	4, 11, 13, 8, 15,
	4, 3, 6, 0, 5,
	4, 7, 2, 4, 1,
	4, 10, 11, 9, 8,
	4, 4, 1, 15, 8,
	4, 12, 10, 14, 9
};

extern "C" __declspec(dllexport) NJS_TEX uv_00012F50[] = {
	{ 510, -172 },
	{ 510, 172 },
	{ 0, -172 },
	{ 0, 172 },
	{ 510, -172 },
	{ 510, 172 },
	{ 0, 255 },
	{ 508, 255 },
	{ 0, -254 },
	{ 508, -254 },
	{ 336, -255 },
	{ 510, -255 },
	{ 0, 255 },
	{ 173, 255 },
	{ 336, 255 },
	{ 510, 255 },
	{ 0, -255 },
	{ 173, -255 },
	{ 510, 255 },
	{ 336, 255 },
	{ 173, -255 },
	{ 0, -255 },
	{ 510, 172 },
	{ 510, -172 },
	{ 0, 172 },
	{ 0, -172 },
	{ 508, 255 },
	{ 0, 255 },
	{ 508, -254 },
	{ 0, -254 },
	{ 510, -255 },
	{ 336, -255 },
	{ 173, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00012FD8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, poly_00012EFC, NULL, NULL, NULL, uv_00012F50, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00012FF0[] = {
	{ -24.43673f, -5, -25.05967f },
	{ -24.43673f, 5, -25.05967f },
	{ -5, 5, -75.179f },
	{ -5, -5, -75.179f },
	{ -14.43673f, 7.390699f, -25.05967f },
	{ -14.43673f, -7.390699f, -25.05967f },
	{ 5, -7.390699f, -75.179f },
	{ 5, 7.390699f, -75.179f },
	{ -24.43673f, 5, 25.05967f },
	{ -24.43673f, -5, 25.05967f },
	{ -5, -5, 75.179f },
	{ -5, 5, 75.179f },
	{ 5, -7.390699f, 75.179f },
	{ 5, 7.390699f, 75.179f },
	{ -14.43673f, -7.390699f, 25.05967f },
	{ -14.43673f, 7.390699f, 25.05967f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000130B0[] = {
	{ -0.797509f, -0.58522f, -0.146618f },
	{ -0.797509f, 0.58522f, -0.146618f },
	{ -0.688903f, 0.673822f, -0.267163f },
	{ -0.688903f, -0.673822f, -0.267163f },
	{ -0.232232f, 0.971397f, -0.049563f },
	{ -0.232232f, -0.971397f, -0.049563f },
	{ -0.231578f, -0.968662f, -0.08980799f },
	{ -0.231578f, 0.968662f, -0.08980799f },
	{ -0.797509f, 0.58522f, 0.146618f },
	{ -0.797509f, -0.58522f, 0.146618f },
	{ -0.688903f, -0.673822f, 0.267163f },
	{ -0.688903f, 0.673822f, 0.267163f },
	{ -0.231578f, -0.968662f, 0.08980799f },
	{ -0.231578f, 0.968662f, 0.08980799f },
	{ -0.232232f, -0.971397f, 0.049563f },
	{ -0.232232f, 0.971397f, 0.049563f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00013170 = { vertex_00012FF0, normal_000130B0, LengthOfArray<Sint32>(vertex_00012FF0), meshlist_00012FD8, matlist_00012EE8, LengthOfArray<Uint16>(meshlist_00012FD8), LengthOfArray<Uint16>(matlist_00012EE8), { -9.718365f, 0, 0 }, 76.60621f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00013198 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00013170, 94.69232f, 145.2208f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000131CC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_ONE | NJD_SA_ONE },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000131F4[] = {
	0x8000u | 7, 6, 1, 24, 21, 0, 22, 2,
	0x8000u | 7, 2, 7, 4, 15, 25, 12, 6,
	0x8000u | 6, 2, 4, 0, 25, 24, 6,
	0x8000u | 7, 5, 11, 16, 13, 19, 14, 9,
	0x8000u | 7, 9, 3, 18, 23, 17, 20, 5,
	0x8000u | 6, 9, 18, 19, 17, 16, 5
};

extern "C" __declspec(dllexport) Sint16 poly_00013250[] = {
	0x8000u | 18, 21, 23, 22, 3, 2, 9, 7, 14, 15, 13, 12, 11, 6, 5, 1, 20, 21, 23
};

extern "C" __declspec(dllexport) NJS_TEX uv_00013278[] = {
	{ 121, 222 },
	{ 217, 133 },
	{ 208, 123 },
	{ 208, 123 },
	{ 141, 42 },
	{ 141, 42 },
	{ 133, 32 },
	{ 133, 32 },
	{ 37, 121 },
	{ 46, 131 },
	{ 46, 131 },
	{ 113, 212 },
	{ 113, 212 },
	{ 121, 222 },
	{ 133, 32 },
	{ 46, 131 },
	{ 141, 42 },
	{ 113, 212 },
	{ 208, 123 },
	{ 121, 222 },
	{ 217, 133 },
	{ 121, 222 },
	{ 113, 212 },
	{ 113, 212 },
	{ 46, 131 },
	{ 46, 131 },
	{ 37, 121 },
	{ 37, 121 },
	{ 133, 32 },
	{ 141, 42 },
	{ 141, 42 },
	{ 208, 123 },
	{ 208, 123 },
	{ 217, 133 },
	{ 37, 121 },
	{ 141, 42 },
	{ 46, 131 },
	{ 208, 123 },
	{ 113, 212 },
	{ 217, 133 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00013318[] = {
	{ 2550, -255 },
	{ 0, -458 },
	{ 2550, -458 },
	{ 0, -484 },
	{ 2550, -484 },
	{ 0, -738 },
	{ 2550, -738 },
	{ 0, -765 },
	{ 2550, -765 },
	{ 0, 51 },
	{ 2550, 51 },
	{ 0, 25 },
	{ 2550, 25 },
	{ 0, -229 },
	{ 2550, -229 },
	{ 0, -255 },
	{ 2550, -255 },
	{ 0, -458 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00013360[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_000131F4, NULL, NULL, NULL, uv_00013278, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00013250, NULL, NULL, NULL, uv_00013318, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00013390[] = {
	{ 20, 16.99812f, -27.5f },
	{ 20, 12.49812f, -24.74902f },
	{ 20, 17.49812f, -24.74902f },
	{ 20, 17.49812f, 26.75098f },
	{ 15, 16.99812f, -27.5f },
	{ 20, 12.49812f, 26.75098f },
	{ 15, 12.49812f, -24.74902f },
	{ 15, 17.49812f, -24.74902f },
	{ 15, 12.49812f, -27.5f },
	{ 15, 17.49812f, 26.75098f },
	{ 15.00415f, 17.49427f, -27.5f },
	{ 15, 12.49812f, 26.75098f },
	{ 15, 12.99812f, -24.75f },
	{ 15, 12.99812f, 26.75f },
	{ 15, 16.99812f, 26.75f },
	{ 15, 16.99812f, -24.75f },
	{ 15, 12.99812f, 27.5f },
	{ 20, 12.99812f, 27.5f },
	{ 20, 16.99812f, 27.5f },
	{ 15, 16.99812f, 27.5f },
	{ 20, 12.99812f, 26.75f },
	{ 20, 12.99812f, -24.75f },
	{ 20, 16.99812f, -24.75f },
	{ 20, 16.99812f, 26.75f },
	{ 20, 12.99812f, -27.5f },
	{ 15, 12.99812f, -27.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000134C8[] = {
	{ 0.587398f, 0.518575f, -0.6213239f },
	{ 0.687448f, -0.723301f, -0.065197f },
	{ 0.687448f, 0.723301f, -0.065197f },
	{ 0.6472729f, 0.729485f, 0.22111f },
	{ -0.587398f, 0.518575f, -0.6213239f },
	{ 0.6472729f, -0.729485f, 0.22111f },
	{ -0.687448f, -0.723301f, -0.065197f },
	{ -0.687448f, 0.723301f, -0.065197f },
	{ 0 },
	{ -0.6472729f, 0.729485f, 0.22111f },
	{ 0 },
	{ -0.6472729f, -0.729485f, 0.22111f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.614777f, -0.371946f, 0.6954899f },
	{ 0.614777f, -0.371946f, 0.6954899f },
	{ 0.614777f, 0.371946f, 0.6954899f },
	{ -0.614777f, 0.371946f, 0.6954899f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.587398f, -0.518575f, -0.6213239f },
	{ -0.587398f, -0.518575f, -0.6213239f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00013600 = { vertex_00013390, normal_000134C8, LengthOfArray<Sint32>(vertex_00013390), meshlist_00013360, matlist_000131CC, LengthOfArray<Uint16>(meshlist_00013360), LengthOfArray<Uint16>(matlist_000131CC), { 17.5f, 14.99812f, 0 }, 27.6134f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00013628 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00013600, 42, 17.50187f, -107.1736f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0001365C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000136E8[] = {
	0x8000u | 18, 2, 20, 21, 23, 22, 10, 11, 9, 8, 16, 17, 19, 18, 0, 1, 3, 2, 20
};

extern "C" __declspec(dllexport) Sint16 poly_0001370E[] = {
	0x8000u | 7, 21, 22, 6, 11, 5, 8, 17,
	0x8000u | 6, 21, 6, 7, 5, 4, 17,
	0x8000u | 7, 17, 18, 4, 1, 7, 2, 21,
	0x8000u | 7, 23, 20, 14, 3, 13, 0, 19,
	0x8000u | 6, 23, 14, 15, 13, 12, 19,
	0x8000u | 7, 19, 16, 12, 9, 15, 10, 23
};

extern "C" __declspec(dllexport) Sint16 poly_0001376A[] = {
	4, 27, 26, 25, 24,
	4, 31, 27, 29, 25,
	4, 30, 31, 28, 29
};

extern "C" __declspec(dllexport) Sint16 poly_00013788[] = {
	0x8000u | 5, 41, 40, 36, 46, 44,
	3, 41, 37, 36,
	0x8000u | 5, 39, 38, 42, 45, 47,
	3, 39, 43, 42
};

extern "C" __declspec(dllexport) Sint16 poly_000137B0[] = {
	4, 46, 47, 40, 42,
	4, 33, 32, 26, 24,
	4, 34, 35, 28, 30,
	4, 45, 44, 38, 36
};

extern "C" __declspec(dllexport) Sint16 poly_000137D8[] = {
	4, 31, 30, 27, 26,
	4, 24, 28, 25, 29
};

extern "C" __declspec(dllexport) Sint16 poly_000137EC[] = {
	4, 39, 38, 37, 36,
	4, 43, 39, 41, 37,
	4, 42, 43, 40, 41
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001380C[] = {
	{ 2550, -255 },
	{ 0, -280 },
	{ 2550, -280 },
	{ 0, -534 },
	{ 2550, -534 },
	{ 0, -561 },
	{ 2550, -561 },
	{ 0, -765 },
	{ 2550, -765 },
	{ 0, 229 },
	{ 2550, 229 },
	{ 0, -25 },
	{ 2550, -25 },
	{ 0, -51 },
	{ 2550, -51 },
	{ 0, -255 },
	{ 2550, -255 },
	{ 0, -280 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00013854[] = {
	{ 74, 77 },
	{ 174, 75 },
	{ 174, 86 },
	{ 174, 86 },
	{ 176, 175 },
	{ 176, 175 },
	{ 176, 186 },
	{ 74, 77 },
	{ 174, 86 },
	{ 74, 88 },
	{ 176, 175 },
	{ 76, 178 },
	{ 176, 186 },
	{ 176, 186 },
	{ 76, 189 },
	{ 76, 178 },
	{ 76, 178 },
	{ 74, 88 },
	{ 74, 88 },
	{ 74, 77 },
	{ 174, 75 },
	{ 74, 77 },
	{ 74, 88 },
	{ 74, 88 },
	{ 76, 178 },
	{ 76, 178 },
	{ 76, 189 },
	{ 174, 75 },
	{ 74, 88 },
	{ 174, 86 },
	{ 76, 178 },
	{ 176, 175 },
	{ 76, 189 },
	{ 76, 189 },
	{ 176, 186 },
	{ 176, 175 },
	{ 176, 175 },
	{ 174, 86 },
	{ 174, 86 },
	{ 174, 75 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000138F4[] = {
	{ 0 },
	{ 0, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1020, 0 },
	{ 1020, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00013924[] = {
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -765 },
	{ 510, -765 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -765 },
	{ 510, -765 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -765 },
	{ 510, -765 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -765 },
	{ 510, -765 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00013964[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 254 },
	{ 255, 101 },
	{ 0, 255 },
	{ 0 },
	{ 255, 254 },
	{ 255, 101 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00013984[] = {
	{ 255, -254 },
	{ 0, -254 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, -254 },
	{ 0, -254 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, -254 },
	{ 0, -254 },
	{ 255, 254 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000139B4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000136E8, NULL, NULL, NULL, uv_0001380C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_0001370E, NULL, NULL, NULL, uv_00013854, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_0001376A, NULL, NULL, NULL, uv_000138F4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, poly_00013788, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 4, poly_000137B0, NULL, NULL, NULL, uv_00013924, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, poly_000137D8, NULL, NULL, NULL, uv_00013964, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 3, poly_000137EC, NULL, NULL, NULL, uv_00013984, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00013A5C[] = {
	{ -20, 12.99812f, -24.75f },
	{ -20, 12.99812f, 26.75f },
	{ -20, 16.99812f, 26.75f },
	{ -20, 16.99812f, -24.75f },
	{ -20, 12.99812f, 27.5f },
	{ -15, 12.99812f, 27.5f },
	{ -15, 16.99812f, 27.5f },
	{ -20, 16.99812f, 27.5f },
	{ -15, 12.99812f, 26.75f },
	{ -15, 12.99812f, -24.75f },
	{ -15, 16.99812f, -24.75f },
	{ -15, 16.99812f, 26.75f },
	{ -15, 12.99812f, -27.5f },
	{ -20, 12.99812f, -27.5f },
	{ -20, 16.99812f, -27.5f },
	{ -15, 16.99812f, -27.5f },
	{ -15, 12.49812f, -24.74902f },
	{ -15, 12.49812f, 26.75098f },
	{ -20, 12.49812f, 26.75098f },
	{ -20, 12.49812f, -24.74902f },
	{ -20, 17.49812f, -24.74902f },
	{ -20, 17.49812f, 26.75098f },
	{ -15, 17.49812f, 26.75098f },
	{ -15, 17.49812f, -24.74902f },
	{ 15, 12.49812f, 23.5f },
	{ 15, 12.50543f, 28.62078f },
	{ -15, 12.49812f, 23.5f },
	{ -15, 12.50543f, 28.62078f },
	{ 15, 17.49812f, 23.5f },
	{ 15, 15.50543f, 28.62078f },
	{ -15, 17.49812f, 23.5f },
	{ -15, 15.50543f, 28.62078f },
	{ 15, 12.49812f, -27.5f },
	{ -15, 12.49812f, -27.5f },
	{ 15.00415f, 17.49427f, -27.5f },
	{ -15, 17.49812f, -27.5f },
	{ -20, -17.49812f, 23.5f },
	{ -19, -17.49812f, 26.74543f },
	{ -20, 12.50188f, 23.5f },
	{ -19, 12.50188f, 26.74543f },
	{ -15, -17.49812f, 23.5f },
	{ -16, -17.49812f, 26.74543f },
	{ -15, 12.50188f, 23.5f },
	{ -16, 12.50188f, 26.74543f },
	{ -20, -17.49812f, -27.5f },
	{ -20, 12.50188f, -27.5f },
	{ -15, -17.49812f, -27.5f },
	{ -15, 12.50188f, -27.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00013C9C[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.614777f, -0.371946f, 0.6954899f },
	{ 0.614777f, -0.371946f, 0.6954899f },
	{ 0.614777f, 0.371946f, 0.6954899f },
	{ -0.614777f, 0.371946f, 0.6954899f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.587398f, -0.518575f, -0.6213239f },
	{ -0.587398f, -0.518575f, -0.6213239f },
	{ -0.587398f, 0.518575f, -0.6213239f },
	{ 0.587398f, 0.518575f, -0.6213239f },
	{ 0.687448f, -0.723301f, -0.065197f },
	{ 0.6472729f, -0.729485f, 0.22111f },
	{ -0.6472729f, -0.729485f, 0.22111f },
	{ -0.687448f, -0.723301f, -0.065197f },
	{ -0.687448f, 0.723301f, -0.065197f },
	{ -0.6472729f, 0.729485f, 0.22111f },
	{ 0.6472729f, 0.729485f, 0.22111f },
	{ 0.687448f, 0.723301f, -0.065197f },
	{ 0.446889f, -0.8945889f, 0.000638f },
	{ 0.5774249f, -0.576901f, 0.577725f },
	{ -0.446889f, -0.8945889f, 0.000638f },
	{ -0.5774249f, -0.576901f, 0.577725f },
	{ 0.362186f, 0.916113f, 0.171926f },
	{ 0.599416f, 0.451858f, 0.6607f },
	{ -0.362141f, 0.916129f, 0.171934f },
	{ -0.599416f, 0.451858f, 0.6607f },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0.000064f, 1, -0.00076f },
	{ 0.000064f, 1, -0.00076f },
	{ -0.729522f, -0.6750799f, 0.109844f },
	{ -0.477491f, -0.594718f, 0.646771f },
	{ -0.729522f, 0.6750799f, 0.109844f },
	{ -0.477491f, 0.594718f, 0.646771f },
	{ 0.729522f, -0.6750799f, 0.109844f },
	{ 0.477491f, -0.594718f, 0.646771f },
	{ 0.729522f, 0.6750799f, 0.109844f },
	{ 0.477491f, 0.594718f, 0.646771f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00013EDC = { vertex_00013A5C, normal_00013C9C, LengthOfArray<Sint32>(vertex_00013A5C), meshlist_000139B4, matlist_0001365C, LengthOfArray<Uint16>(meshlist_000139B4), LengthOfArray<Uint16>(matlist_0001365C), { -2.497925f, 0, 0.560392f }, 33.07126f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00013F04 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00013EDC, -63, 17.50187f, -107.1736f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00013F38[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00013F74[] = {
	4, 10, 11, 4, 6,
	4, 9, 8, 2, 0
};

extern "C" __declspec(dllexport) Sint16 poly_00013F88[] = {
	0x8000u | 5, 5, 4, 0, 10, 8,
	3, 5, 1, 0
};

extern "C" __declspec(dllexport) Sint16 poly_00013F9C[] = {
	4, 6, 7, 4, 5,
	4, 7, 3, 5, 1,
	4, 3, 2, 1, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_00013FBC[] = {
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -765 },
	{ 510, -765 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -765 },
	{ 510, -765 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00013FDC[] = {
	{ 254, -255 },
	{ 0, -255 },
	{ 254, 255 },
	{ 0, 255 },
	{ 254, -255 },
	{ 0, -255 },
	{ 254, 255 },
	{ 0, 255 },
	{ 254, -255 },
	{ 0, -255 },
	{ 254, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0001400C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00013F74, NULL, NULL, NULL, uv_00013FBC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00013F88, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_00013F9C, NULL, NULL, NULL, uv_00013FDC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00014054[] = {
	{ -20, -17.49812f, 23.5f },
	{ -19, -17.49812f, 26.74543f },
	{ -20, 12.50188f, 23.5f },
	{ -19, 12.50188f, 26.74543f },
	{ -15, -17.49812f, 23.5f },
	{ -16, -17.49812f, 26.74543f },
	{ -14.99999f, 12.50188f, 23.5f },
	{ -15.99999f, 12.50188f, 26.74543f },
	{ -20, -17.49812f, -27.5f },
	{ -20, 12.50188f, -27.5f },
	{ -15, -17.49812f, -27.5f },
	{ -14.99999f, 12.50188f, -27.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000140E4[] = {
	{ -0.729522f, -0.6750799f, 0.109844f },
	{ -0.477491f, -0.594718f, 0.646771f },
	{ -0.988854f, 0, 0.148892f },
	{ -0.593943f, 0, 0.804507f },
	{ 0.729521f, -0.6750799f, 0.109844f },
	{ 0.477491f, -0.594718f, 0.646771f },
	{ 0.988854f, 0, 0.148892f },
	{ 0.593943f, 0, 0.804507f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -1, 0, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00014174 = { vertex_00014054, normal_000140E4, LengthOfArray<Sint32>(vertex_00014054), meshlist_0001400C, matlist_00013F38, LengthOfArray<Uint16>(meshlist_0001400C), LengthOfArray<Uint16>(matlist_00013F38), { -17.5f, -2.498123f, -0.377284f }, 30.99422f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0001419C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00014174, 77.01244f, 17.51851f, -107.1736f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000141D0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000141F8[] = {
	3, 2, 0, 7,
	0x8000u | 6, 1, 6, 9, 15, 10, 13,
	9, 3, 1, 7, 6, 2, 15, 8, 13, 11
};

extern "C" __declspec(dllexport) Sint16 poly_00014222[] = {
	3, 3, 4, 1,
	7, 4, 5, 1, 14, 9, 12, 10
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001423C[] = {
	{ 0, -2295 },
	{ 0, 255 },
	{ 127, 255 },
	{ 255, -2295 },
	{ 127, -2295 },
	{ 255, -4845 },
	{ 127, -4845 },
	{ 255, -7395 },
	{ 127, -7395 },
	{ 255, 255 },
	{ 255, -2295 },
	{ 127, 255 },
	{ 127, -2295 },
	{ 0, -2295 },
	{ 127, -4845 },
	{ 0, -4845 },
	{ 127, -7395 },
	{ 0, -7395 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00014284[] = {
	{ 0 },
	{ 510, 0 },
	{ 0, 1275 },
	{ 510, 0 },
	{ 510, 1275 },
	{ 0, 1275 },
	{ 510, 2550 },
	{ 0, 2550 },
	{ 510, 3825 },
	{ 0, 3825 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000142AC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000141F8, NULL, NULL, NULL, uv_0001423C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00014222, NULL, NULL, NULL, uv_00014284, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000142DC[] = {
	{ -13.18972f, 0.00375f, -5.643078f },
	{ -8.189719f, 100.0038f, 4.356922f },
	{ -13.18972f, 100.0038f, -5.643078f },
	{ -8.189719f, 0.00375f, 4.356922f },
	{ 14.31025f, 0.00375f, 4.356922f },
	{ 14.31025f, 100.0038f, 4.356922f },
	{ -13.18972f, 100.0038f, -0.643078f },
	{ -13.18972f, 0.00375f, -0.643078f },
	{ -13.18972f, 200.0037f, -5.643078f },
	{ -8.189719f, 200.0037f, 4.356922f },
	{ -8.189719f, 300.0037f, 4.356922f },
	{ -13.18972f, 300.0037f, -5.643078f },
	{ 14.31025f, 300.0037f, 4.356922f },
	{ -13.18972f, 300.0037f, -0.643078f },
	{ 14.31025f, 200.0037f, 4.356922f },
	{ -13.18972f, 200.0037f, -0.643078f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0001439C[] = {
	{ -1, 0, 0 },
	{ -0.382683f, 0, 0.92388f },
	{ -1, 0, 0 },
	{ -0.382683f, 0, 0.92388f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.92388f, 0, 0.382683f },
	{ -0.92388f, 0, 0.382683f },
	{ -1, 0, 0 },
	{ -0.382683f, 0, 0.92388f },
	{ -0.382683f, 0, 0.92388f },
	{ -1, 0, 0 },
	{ 0, 0, 1 },
	{ -0.92388f, 0, 0.382683f },
	{ 0, 0, 1 },
	{ -0.92388f, 0, 0.382683f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0001445C = { vertex_000142DC, normal_0001439C, LengthOfArray<Sint32>(vertex_000142DC), meshlist_000142AC, matlist_000141D0, LengthOfArray<Uint16>(meshlist_000142AC), LengthOfArray<Uint16>(matlist_000141D0), { 0.560266f, 150.0037f, -0.643078f }, 150.0833f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00014484 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0001445C, 75.02407f, 0, -95.03048f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000144B8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000144E0[] = {
	0x8000u | 5, 0, 7, 6, 3, 1,
	0x8000u | 7, 13, 11, 15, 8, 6, 2, 0,
	0x8000u | 6, 6, 1, 15, 9, 13, 10
};

extern "C" __declspec(dllexport) Sint16 poly_0001450A[] = {
	7, 3, 1, 5, 9, 14, 10, 12,
	3, 5, 4, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_00014524[] = {
	{ 255, 255 },
	{ 127, 255 },
	{ 127, -2295 },
	{ 0, 255 },
	{ 0, -2295 },
	{ 127, -7395 },
	{ 255, -7395 },
	{ 127, -4845 },
	{ 255, -4845 },
	{ 127, -2295 },
	{ 255, -2295 },
	{ 255, 255 },
	{ 127, -2295 },
	{ 0, -2295 },
	{ 127, -4845 },
	{ 0, -4845 },
	{ 127, -7395 },
	{ 0, -7395 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001456C[] = {
	{ 0 },
	{ 0, 1275 },
	{ 510, 1275 },
	{ 0, 2550 },
	{ 510, 2550 },
	{ 0, 3825 },
	{ 510, 3825 },
	{ 510, 1275 },
	{ 510, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00014594[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000144E0, NULL, NULL, NULL, uv_00014524, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0001450A, NULL, NULL, NULL, uv_0001456C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000145C4[] = {
	{ -13.18972f, 0.00375f, 5.643078f },
	{ -8.189719f, 100.0038f, -4.356922f },
	{ -13.18972f, 100.0038f, 5.643078f },
	{ -8.189719f, 0.00375f, -4.356922f },
	{ 14.31025f, 0.00375f, -4.356922f },
	{ 14.31025f, 100.0038f, -4.356922f },
	{ -13.18972f, 100.0038f, 0.643078f },
	{ -13.18972f, 0.00375f, 0.643078f },
	{ -13.18972f, 200.0037f, 5.643078f },
	{ -8.189719f, 200.0037f, -4.356922f },
	{ -8.189719f, 300.0037f, -4.356922f },
	{ -13.18972f, 300.0037f, 5.643078f },
	{ 14.31025f, 300.0037f, -4.356922f },
	{ -13.18972f, 300.0037f, 0.643078f },
	{ 14.31025f, 200.0037f, -4.356922f },
	{ -13.18972f, 200.0037f, 0.643078f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00014684[] = {
	{ -1, 0, 0 },
	{ -0.382683f, 0, -0.92388f },
	{ -1, 0, 0 },
	{ -0.382683f, 0, -0.92388f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.92388f, 0, -0.382683f },
	{ -0.92388f, 0, -0.382683f },
	{ -1, 0, 0 },
	{ -0.382683f, 0, -0.92388f },
	{ -0.382683f, 0, -0.92388f },
	{ -1, 0, 0 },
	{ 0, 0, -1 },
	{ -0.92388f, 0, -0.382683f },
	{ 0, 0, -1 },
	{ -0.92388f, 0, -0.382683f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00014744 = { vertex_000145C4, normal_00014684, LengthOfArray<Sint32>(vertex_000145C4), meshlist_00014594, matlist_000144B8, LengthOfArray<Uint16>(meshlist_00014594), LengthOfArray<Uint16>(matlist_000144B8), { 0.560266f, 150.0037f, 0.643078f }, 150.0833f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0001476C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00014744, -96.39598f, 0, -95.03048f, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000147A0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000147F0[] = {
	4, 1, 0, 3, 2,
	4, 4, 5, 6, 7
};

extern "C" __declspec(dllexport) Sint16 poly_00014804[] = {
	4, 5, 1, 7, 3
};

extern "C" __declspec(dllexport) Sint16 poly_0001480E[] = {
	0x8000u | 10, 1, 0, 4, 8, 10, 9, 11, 2, 6, 7,
	3, 1, 5, 4,
	3, 7, 3, 2
};

extern "C" __declspec(dllexport) Sint16 poly_00014834[] = {
	4, 2, 0, 9, 8,
	4, 4, 6, 10, 11
};

extern "C" __declspec(dllexport) NJS_TEX uv_00014848[] = {
	{ 185, 0 },
	{ 185, 255 },
	{ 119, 0 },
	{ 119, 255 },
	{ 185, 255 },
	{ 185, 0 },
	{ 119, 255 },
	{ 119, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00014868[] = {
	{ 255, 255 },
	{ 0, 255 },
	{ 255, -2295 },
	{ 0, -2295 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00014878[] = {
	{ 0, -2295 },
	{ 0, 255 },
	{ 255, -2295 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, -2295 },
	{ 255, 255 },
	{ 255, -2295 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00014898[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000147F0, NULL, NULL, NULL, uv_00014848, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00014804, NULL, NULL, NULL, uv_00014868, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_0001480E, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_00014834, NULL, NULL, NULL, uv_00014878, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000148F8[] = {
	{ -4.695122f, -45.90278f, 94.82641f },
	{ -3.695129f, -45.90278f, 90.82641f },
	{ -4.695122f, 39.91f, 94.82641f },
	{ -3.695129f, 39.91f, 90.82641f },
	{ 5.281059f, -45.90278f, 94.82641f },
	{ 4.281059f, -45.90278f, 90.82641f },
	{ 5.281059f, 39.91f, 94.82641f },
	{ 4.281059f, 39.91f, 90.82641f },
	{ -4.695122f, -45.90278f, 99.82641f },
	{ -4.695122f, 39.91f, 99.82641f },
	{ 5.281059f, -45.90278f, 99.82641f },
	{ 5.281059f, 39.91f, 99.82641f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00014988[] = {
	{ -0.727154f, -0.680613f, -0.089516f },
	{ -0.496284f, -0.591338f, -0.635627f },
	{ -0.727154f, 0.680613f, -0.089516f },
	{ -0.496284f, 0.591338f, -0.635627f },
	{ 0.727154f, -0.680612f, -0.089517f },
	{ 0.496283f, -0.591338f, -0.635628f },
	{ 0.727154f, 0.680612f, -0.089517f },
	{ 0.496283f, 0.591338f, -0.635628f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00014A18 = { vertex_000148F8, normal_00014988, LengthOfArray<Sint32>(vertex_000148F8), meshlist_00014898, matlist_000147A0, LengthOfArray<Uint16>(meshlist_00014898), LengthOfArray<Uint16>(matlist_000147A0), { 0.292969f, -2.996391f, 95.32641f }, 43.14172f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00014A40 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00014A18, -55.97186f, 259.9983f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00014A74[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00014AB0[] = {
	0x8000u | 14, 4, 5, 26, 25, 15, 12, 14, 11, 13, 10, 23, 22, 6, 7,
	0x8000u | 14, 1, 0, 24, 27, 19, 18, 9, 17, 8, 16, 20, 21, 3, 2
};

extern "C" __declspec(dllexport) Sint16 poly_00014AEC[] = {
	4, 6, 23, 2, 21,
	4, 0, 27, 4, 26,
	4, 27, 18, 26, 15,
	4, 18, 17, 15, 14,
	4, 17, 16, 14, 13,
	4, 16, 21, 13, 23
};

extern "C" __declspec(dllexport) Sint16 poly_00014B28[] = {
	4, 6, 2, 7, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_00014B34[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -1021 },
	{ 255, -1021 },
	{ 0, -2298 },
	{ 255, -2298 },
	{ 0, -3575 },
	{ 255, -3575 },
	{ 0, -4852 },
	{ 255, -4852 },
	{ 0, -6129 },
	{ 255, -6129 },
	{ 0, -7395 },
	{ 255, -7395 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, -1021 },
	{ 0, -1021 },
	{ 255, -2298 },
	{ 0, -2298 },
	{ 255, -3575 },
	{ 0, -3575 },
	{ 255, -4852 },
	{ 0, -4852 },
	{ 255, -6129 },
	{ 0, -6129 },
	{ 255, -7395 },
	{ 0, -7395 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00014BA4[] = {
	{ 510, -255 },
	{ 510, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 0, 254 },
	{ 0, -254 },
	{ 510, 254 },
	{ 510, -254 },
	{ 0, 254 },
	{ 0, -255 },
	{ 510, 254 },
	{ 510, -255 },
	{ 0, 254 },
	{ 0, -255 },
	{ 510, 254 },
	{ 510, -255 },
	{ 0, 254 },
	{ 0, -254 },
	{ 510, 254 },
	{ 510, -254 },
	{ 0, 255 },
	{ 0, -254 },
	{ 510, 255 },
	{ 510, -254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00014C04[] = {
	{ 1020, 255 },
	{ 0, 255 },
	{ 1020, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00014C14[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00014AB0, NULL, NULL, NULL, uv_00014B34, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_00014AEC, NULL, NULL, NULL, uv_00014BA4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00014B28, NULL, NULL, NULL, uv_00014C04, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00014C5C[] = {
	{ -15, -15, 5.000005f },
	{ -15, -15, 15 },
	{ -15, 284.5001f, 5.000005f },
	{ -15, 284.5001f, 15 },
	{ 24.99991f, -15, 5.000005f },
	{ 24.99991f, -15, 15 },
	{ 24.99991f, 284.5001f, 5.000005f },
	{ 24.99991f, 284.5001f, 15 },
	{ -15, 185.0001f, 15 },
	{ -15, 135.0002f, 15 },
	{ 24.99991f, 185.0001f, 15 },
	{ 24.99991f, 135.0002f, 15 },
	{ 24.99991f, 84.99982f, 15 },
	{ 24.99991f, 185.0001f, 5.000005f },
	{ 24.99991f, 135.0002f, 5.000005f },
	{ 24.99991f, 84.99982f, 5.000005f },
	{ -15, 185.0001f, 5.000005f },
	{ -15, 135.0002f, 5.000005f },
	{ -15, 84.99982f, 5.000005f },
	{ -15, 84.99982f, 15 },
	{ -15, 235.0001f, 15 },
	{ -15, 235.0001f, 5.000005f },
	{ 24.99991f, 235.0001f, 15 },
	{ 24.99991f, 235.0001f, 5.000005f },
	{ -15, 34.99991f, 15 },
	{ 24.99991f, 34.99991f, 15 },
	{ 24.99991f, 34.99991f, 5.000005f },
	{ -15, 34.99991f, 5.000005f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00014DAC[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 1, 0, 0 },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00014EFC = { vertex_00014C5C, normal_00014DAC, LengthOfArray<Sint32>(vertex_00014C5C), meshlist_00014C14, matlist_00014A74, LengthOfArray<Uint16>(meshlist_00014C14), LengthOfArray<Uint16>(matlist_00014A74), { 4.999958f, 134.75f, 10 }, 149.8335f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00014F24 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00014EFC, 64.33035f, 15.50369f, 85.33029f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00014F58[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00014F80[] = {
	0x8000u | 6, 5, 3, 11, 10, 7, 2
};

extern "C" __declspec(dllexport) Sint16 poly_00014F8E[] = {
	6, 8, 0, 9, 6, 11, 7,
	6, 11, 5, 9, 4, 8, 1
};

extern "C" __declspec(dllexport) NJS_TEX uv_00014FAC[] = {
	{ 510, 0 },
	{ 510, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00014FC4[] = {
	{ 510, 254 },
	{ 0, 254 },
	{ 510, 0 },
	{ 0 },
	{ 510, -255 },
	{ 0, -255 },
	{ 510, -255 },
	{ 1020, -255 },
	{ 510, 0 },
	{ 1020, 0 },
	{ 510, 254 },
	{ 1020, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00014FF4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00014F80, NULL, NULL, NULL, uv_00014FAC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00014F8E, NULL, NULL, NULL, uv_00014FC4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00015024[] = {
	{ 15, -15, -84.99235f },
	{ 15, -15, 15 },
	{ 15, 135.0032f, -84.99235f },
	{ 15, 135.0032f, 15 },
	{ 15, 35.00098f, 15 },
	{ 15, 85.00112f, 15 },
	{ 15, 35.00098f, -84.99235f },
	{ 15, 85.00112f, -84.99235f },
	{ 15, -15, -34.99618f },
	{ 15, 35.00098f, -34.99618f },
	{ 15, 135.0032f, -34.99618f },
	{ 15, 85.00112f, -34.99618f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000150B4[] = {
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00015144 = { vertex_00015024, normal_000150B4, LengthOfArray<Sint32>(vertex_00015024), meshlist_00014FF4, matlist_00014F58, LengthOfArray<Uint16>(meshlist_00014FF4), LengthOfArray<Uint16>(matlist_00014F58), { 15, 60.00158f, -34.99618f }, 90.13798f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0001516C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00015144, -125.6641f, 165.5027f, 35.32666f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000151A0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000151C8[] = {
	0x8000u | 6, 1, 5, 6, 7, 0, 3
};

extern "C" __declspec(dllexport) Sint16 poly_000151D6[] = {
	0x8000u | 6, 5, 4, 7, 8, 3, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_000151E4[] = {
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000151FC[] = {
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00015214[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000151C8, NULL, NULL, NULL, uv_000151E4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000151D6, NULL, NULL, NULL, uv_000151FC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00015244[] = {
	{ 15, 135.0032f, 15 },
	{ 15, 135.0032f, -84.99235f },
	{ 15, 35.00098f, 15 },
	{ 15, 85.00112f, 15 },
	{ 15, 35.00098f, -84.99235f },
	{ 15, 85.00112f, -84.99235f },
	{ 15, 135.0032f, -34.99618f },
	{ 15, 85.00112f, -34.99618f },
	{ 15, 35.00098f, -34.99618f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000152B0[] = {
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0001531C = { vertex_00015244, normal_000152B0, LengthOfArray<Sint32>(vertex_00015244), meshlist_00015214, matlist_000151A0, LengthOfArray<Uint16>(meshlist_00015214), LengthOfArray<Uint16>(matlist_000151A0), { 15, 85.00207f, -34.99618f }, 70.70873f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00015344 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0001531C, -125.6641f, -34.99734f, 35.32666f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00015378[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0001538C[] = {
	4, 1, 3, 0, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_00015398[] = {
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -255 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000153A8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0001538C, NULL, NULL, NULL, uv_00015398, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000153C0[] = {
	{ 15, 135.6011f, 15 },
	{ 15, 85.00112f, 15 },
	{ 15, 135.6011f, -15.32668f },
	{ 15, 85.00112f, -15.32668f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000153F0[] = {
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00015420 = { vertex_000153C0, normal_000153F0, LengthOfArray<Sint32>(vertex_000153C0), meshlist_000153A8, matlist_00015378, LengthOfArray<Uint16>(meshlist_000153A8), LengthOfArray<Uint16>(matlist_00015378), { 15, 110.3011f, -0.163342f }, 29.49603f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00015448 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00015420, -125.6641f, 15.00473f, -35.00002f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0001547C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00015490[] = {
	4, 1, 3, 0, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001549C[] = {
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -255 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000154AC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00015490, NULL, NULL, NULL, uv_0001549C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000154C4[] = {
	{ 15, 135.5527f, 15 },
	{ 15, 85.00112f, 15 },
	{ 15, 135.5527f, -15.32668f },
	{ 15, 85.00112f, -15.32668f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000154F4[] = {
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00015524 = { vertex_000154C4, normal_000154F4, LengthOfArray<Sint32>(vertex_000154C4), meshlist_000154AC, matlist_0001547C, LengthOfArray<Uint16>(meshlist_000154AC), LengthOfArray<Uint16>(matlist_0001547C), { 15, 110.2769f, -0.163342f }, 29.47529f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0001554C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00015524, -125.6641f, 15.00473f, 35.32666f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00015580[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000155BC[] = {
	8, 63, 59, 62, 58, 61, 57, 60, 56,
	0x8000u | 25, 7, 5, 8, 10, 16, 17, 12, 13, 21, 20, 33, 32, 25, 24, 29, 28, 41, 40, 37, 36, 45, 44, 49, 48, 52,
	0x8000u | 17, 12, 14, 16, 18, 8, 9, 7, 6, 2, 0, 3, 1, 5, 4, 10, 11, 17,
	0x8000u | 8, 29, 30, 25, 26, 33, 34, 21, 22,
	0x8000u | 8, 49, 50, 45, 46, 37, 38, 41, 42,
	3, 53, 52, 49,
	3, 55, 54, 51,
	22, 54, 50, 51, 46, 47, 38, 39, 42, 43, 30, 31, 26, 27, 34, 35, 22, 23, 14, 15, 18, 19, 9,
	8, 60, 52, 61, 53, 62, 54, 63, 55
};

extern "C" __declspec(dllexport) Sint16 poly_0001569A[] = {
	4, 2, 7, 3, 5,
	4, 49, 50, 53, 54
};

extern "C" __declspec(dllexport) Sint16 poly_000156AE[] = {
	4, 14, 22, 12, 21,
	4, 30, 42, 29, 41
};

extern "C" __declspec(dllexport) NJS_TEX uv_000156C4[] = {
	{ 251, 0 },
	{ 251, 0 },
	{ 248, 0 },
	{ 248, 0 },
	{ 6, 0 },
	{ 6, 0 },
	{ 3, 0 },
	{ 3, 0 },
	{ 251, 191 },
	{ 3, 191 },
	{ 248, 191 },
	{ 6, 191 },
	{ 6, 191 },
	{ 3, 191 },
	{ 3, 191 },
	{ 0, 191 },
	{ 3, 128 },
	{ 0, 128 },
	{ 6, 128 },
	{ 3, 128 },
	{ 6, 127 },
	{ 3, 127 },
	{ 3, 127 },
	{ 0, 127 },
	{ 3, 64 },
	{ 0, 64 },
	{ 6, 64 },
	{ 3, 64 },
	{ 6, 63 },
	{ 3, 63 },
	{ 3, 63 },
	{ 0, 63 },
	{ 0 },
	{ 3, 191 },
	{ 251, 191 },
	{ 6, 191 },
	{ 248, 191 },
	{ 248, 191 },
	{ 251, 191 },
	{ 251, 191 },
	{ 255, 191 },
	{ 251, 255 },
	{ 254, 255 },
	{ 3, 255 },
	{ 0, 255 },
	{ 3, 191 },
	{ 0, 191 },
	{ 6, 191 },
	{ 3, 191 },
	{ 3, 191 },
	{ 3, 127 },
	{ 251, 127 },
	{ 6, 127 },
	{ 248, 127 },
	{ 6, 128 },
	{ 248, 128 },
	{ 3, 128 },
	{ 251, 128 },
	{ 3, 63 },
	{ 251, 63 },
	{ 6, 63 },
	{ 248, 63 },
	{ 6, 64 },
	{ 248, 64 },
	{ 3, 64 },
	{ 251, 64 },
	{ 3, 0 },
	{ 0 },
	{ 3, 63 },
	{ 255, 0 },
	{ 251, 0 },
	{ 255, 63 },
	{ 251, 0 },
	{ 251, 63 },
	{ 255, 63 },
	{ 248, 63 },
	{ 251, 63 },
	{ 248, 64 },
	{ 251, 64 },
	{ 251, 64 },
	{ 255, 64 },
	{ 251, 127 },
	{ 255, 127 },
	{ 248, 127 },
	{ 251, 127 },
	{ 248, 128 },
	{ 251, 128 },
	{ 251, 128 },
	{ 255, 128 },
	{ 251, 191 },
	{ 255, 191 },
	{ 248, 191 },
	{ 251, 191 },
	{ 251, 191 },
	{ 3, 0 },
	{ 0 },
	{ 6, 0 },
	{ 3, 0 },
	{ 248, 0 },
	{ 251, 0 },
	{ 251, 0 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001585C[] = {
	{ 254, 255 },
	{ 254, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 254, 0 },
	{ 0, 255 },
	{ 254, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001587C[] = {
	{ 510, 254 },
	{ 510, -255 },
	{ 0, 254 },
	{ 0, -255 },
	{ 510, 254 },
	{ 510, -254 },
	{ 0, 254 },
	{ 0, -254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0001589C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 9, poly_000155BC, NULL, NULL, NULL, uv_000156C4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0001569A, NULL, NULL, NULL, uv_0001585C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000156AE, NULL, NULL, NULL, uv_0001587C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000158E4[] = {
	{ 21.28664f, -99.95094f, 0.160522f },
	{ -18.71336f, -99.95094f, 0.160522f },
	{ 20.78664f, -99.95094f, 1.160522f },
	{ -18.21336f, -99.95094f, 1.160522f },
	{ -18.70933f, -50.45094f, 0.160522f },
	{ -18.20933f, -50.45094f, 1.160522f },
	{ 21.29067f, -50.45094f, 0.160522f },
	{ 20.79067f, -50.45094f, 1.160522f },
	{ 20.29067f, -50.45094f, 0.660522f },
	{ 20.79067f, -50.45094f, 0.160522f },
	{ -17.70933f, -50.45094f, 0.660522f },
	{ -18.20933f, -50.45094f, 0.160522f },
	{ -18.20933f, -49.95094f, 1.160522f },
	{ -18.70933f, -49.95094f, 0.160522f },
	{ 20.79067f, -49.95094f, 1.160522f },
	{ 21.29067f, -49.95094f, 0.160522f },
	{ -17.70933f, -49.95094f, 0.660522f },
	{ -18.20933f, -49.95094f, 0.160522f },
	{ 20.29067f, -49.95094f, 0.660522f },
	{ 20.79067f, -49.95094f, 0.160522f },
	{ -18.70933f, -0.450943f, 0.160522f },
	{ -18.20933f, -0.450943f, 1.160522f },
	{ 20.79067f, -0.450943f, 1.160522f },
	{ 21.29067f, -0.450943f, 0.160522f },
	{ -18.20933f, 0.049057f, 0.160522f },
	{ -17.70933f, 0.049057f, 0.660522f },
	{ 20.29067f, 0.049057f, 0.660522f },
	{ 20.79067f, 0.049057f, 0.160522f },
	{ -18.70933f, 0.049057f, 0.160522f },
	{ -18.20933f, 0.049057f, 1.160522f },
	{ 20.79067f, 0.049057f, 1.160522f },
	{ 21.29067f, 0.049057f, 0.160522f },
	{ -18.20933f, -0.450943f, 0.160522f },
	{ -17.70933f, -0.450943f, 0.660522f },
	{ 20.29067f, -0.450943f, 0.660522f },
	{ 20.79067f, -0.450943f, 0.160522f },
	{ -18.20933f, 49.54904f, 0.160522f },
	{ -17.70933f, 49.54904f, 0.660522f },
	{ 20.29067f, 49.54904f, 0.660522f },
	{ 20.79067f, 49.54904f, 0.160522f },
	{ -18.70933f, 49.54904f, 0.160522f },
	{ -18.20933f, 49.54904f, 1.160522f },
	{ 20.79067f, 49.54904f, 1.160522f },
	{ 21.29067f, 49.54904f, 0.160522f },
	{ -18.20933f, 50.04904f, 0.160522f },
	{ -17.70933f, 50.04904f, 0.660522f },
	{ 20.29067f, 50.04904f, 0.660522f },
	{ 20.79067f, 50.04904f, 0.160522f },
	{ -18.70933f, 50.04904f, 0.160522f },
	{ -18.20933f, 50.04904f, 1.160522f },
	{ 20.79067f, 50.04904f, 1.160522f },
	{ 21.29067f, 50.04904f, 0.160522f },
	{ -18.70933f, 99.54904f, 0.160522f },
	{ -18.20933f, 99.54904f, 1.160522f },
	{ 20.79067f, 99.54904f, 1.160522f },
	{ 21.29067f, 99.54904f, 0.160522f },
	{ -18.20933f, 100.049f, 0.160522f },
	{ -17.70933f, 100.049f, 0.660522f },
	{ 20.29067f, 100.049f, 0.660522f },
	{ 20.79067f, 100.049f, 0.160522f },
	{ -18.20933f, 99.54904f, 0.160522f },
	{ -17.70933f, 99.54904f, 0.660522f },
	{ 20.29067f, 99.54904f, 0.660522f },
	{ 20.79067f, 99.54904f, 0.160522f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00015BE4[] = {
	{ 0.73106f, -0.576141f, 0.36553f },
	{ -0.7310989f, -0.57608f, 0.36555f },
	{ 0.418287f, -0.605745f, 0.676838f },
	{ -0.418331f, -0.605713f, 0.676839f },
	{ -0.73106f, 0.576141f, 0.36553f },
	{ -0.418287f, 0.605745f, 0.676838f },
	{ 0.7310989f, 0.57608f, 0.36555f },
	{ 0.418331f, 0.605713f, 0.676839f },
	{ 0.227458f, 0.804186f, 0.5491329f },
	{ 0.392232f, 0.83205f, 0.392232f },
	{ -0.227458f, 0.804186f, 0.5491329f },
	{ -0.392232f, 0.83205f, 0.392232f },
	{ -0.418309f, -0.605729f, 0.676838f },
	{ -0.73108f, -0.5761099f, 0.36554f },
	{ 0.418309f, -0.605729f, 0.676838f },
	{ 0.73108f, -0.5761099f, 0.36554f },
	{ -0.227458f, -0.804186f, 0.5491329f },
	{ -0.392232f, -0.83205f, 0.392232f },
	{ 0.227458f, -0.804186f, 0.5491329f },
	{ 0.392232f, -0.83205f, 0.392232f },
	{ -0.73108f, 0.5761099f, 0.36554f },
	{ -0.418309f, 0.605729f, 0.676838f },
	{ 0.418309f, 0.605729f, 0.676838f },
	{ 0.73108f, 0.5761099f, 0.36554f },
	{ -0.392232f, -0.83205f, 0.392232f },
	{ -0.227458f, -0.804186f, 0.5491329f },
	{ 0.227458f, -0.804186f, 0.5491329f },
	{ 0.392232f, -0.83205f, 0.392232f },
	{ -0.73108f, -0.5761099f, 0.36554f },
	{ -0.418309f, -0.605729f, 0.676838f },
	{ 0.418309f, -0.605729f, 0.676838f },
	{ 0.73108f, -0.5761099f, 0.36554f },
	{ -0.392232f, 0.83205f, 0.392232f },
	{ -0.227458f, 0.804186f, 0.5491329f },
	{ 0.227458f, 0.804186f, 0.5491329f },
	{ 0.392232f, 0.83205f, 0.392232f },
	{ -0.392232f, 0.83205f, 0.392232f },
	{ -0.227458f, 0.804186f, 0.5491329f },
	{ 0.227458f, 0.804186f, 0.5491329f },
	{ 0.392232f, 0.83205f, 0.392232f },
	{ -0.73108f, 0.5761099f, 0.36554f },
	{ -0.418309f, 0.605729f, 0.676838f },
	{ 0.418309f, 0.605729f, 0.676838f },
	{ 0.73108f, 0.5761099f, 0.36554f },
	{ -0.392232f, -0.83205f, 0.392232f },
	{ -0.227458f, -0.804186f, 0.5491329f },
	{ 0.227458f, -0.804186f, 0.5491329f },
	{ 0.392232f, -0.83205f, 0.392232f },
	{ -0.73108f, -0.5761099f, 0.36554f },
	{ -0.418309f, -0.605729f, 0.676838f },
	{ 0.418309f, -0.605729f, 0.676838f },
	{ 0.73108f, -0.5761099f, 0.36554f },
	{ -0.73108f, 0.5761099f, 0.36554f },
	{ -0.418309f, 0.605729f, 0.676838f },
	{ 0.418309f, 0.605729f, 0.676838f },
	{ 0.73108f, 0.5761099f, 0.36554f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.382683f, 0, 0.92388f },
	{ 0.382683f, 0, 0.92388f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.392232f, 0.83205f, 0.392232f },
	{ -0.227458f, 0.804186f, 0.5491329f },
	{ 0.227458f, 0.804186f, 0.5491329f },
	{ 0.392232f, 0.83205f, 0.392232f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00015EE4 = { vertex_000158E4, normal_00015BE4, LengthOfArray<Sint32>(vertex_000158E4), meshlist_0001589C, matlist_00015580, LengthOfArray<Uint16>(meshlist_0001589C), LengthOfArray<Uint16>(matlist_00015580), { 1.288653f, 0.049049f, 0.660522f }, 100.0012f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00015F0C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00015EE4, 40.52383f, 200, -99.83019f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00015F40[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00015F90[] = {
	8, 63, 59, 62, 58, 61, 57, 60, 56,
	4, 1, 0, 3, 2,
	8, 11, 4, 10, 5, 8, 7, 9, 6,
	0x8000u | 8, 11, 17, 10, 16, 8, 18, 9, 19,
	8, 19, 15, 18, 14, 16, 12, 17, 13,
	8, 32, 20, 33, 21, 34, 22, 35, 23,
	8, 27, 31, 26, 30, 25, 29, 24, 28,
	8, 24, 32, 25, 33, 26, 34, 27, 35,
	8, 36, 40, 37, 41, 38, 42, 39, 43,
	8, 39, 47, 38, 46, 37, 45, 36, 44,
	8, 47, 51, 46, 50, 45, 49, 44, 48,
	8, 60, 52, 61, 53, 62, 54, 63, 55
};

extern "C" __declspec(dllexport) Sint16 poly_00016060[] = {
	4, 3, 5, 1, 4,
	4, 0, 6, 2, 7,
	4, 12, 21, 13, 20,
	4, 15, 23, 14, 22,
	4, 29, 41, 28, 40,
	4, 31, 43, 30, 42,
	4, 48, 49, 52, 53,
	4, 50, 51, 54, 55
};

extern "C" __declspec(dllexport) Sint16 poly_000160B0[] = {
	4, 2, 7, 3, 5,
	4, 49, 50, 53, 54
};

extern "C" __declspec(dllexport) Sint16 poly_000160C4[] = {
	4, 14, 22, 12, 21,
	4, 30, 42, 29, 41
};

extern "C" __declspec(dllexport) NJS_TEX uv_000160D8[] = {
	{ 253, 0 },
	{ 253, 0 },
	{ 251, 0 },
	{ 251, 0 },
	{ 3, 0 },
	{ 3, 0 },
	{ 1, 0 },
	{ 1, 0 },
	{ 0, 254 },
	{ 254, 254 },
	{ 1, 254 },
	{ 253, 254 },
	{ 1, 191 },
	{ 0, 191 },
	{ 3, 191 },
	{ 1, 191 },
	{ 251, 191 },
	{ 253, 191 },
	{ 253, 191 },
	{ 255, 191 },
	{ 1, 191 },
	{ 1, 191 },
	{ 3, 191 },
	{ 3, 191 },
	{ 251, 191 },
	{ 251, 191 },
	{ 253, 191 },
	{ 253, 191 },
	{ 253, 191 },
	{ 255, 191 },
	{ 251, 191 },
	{ 253, 191 },
	{ 3, 191 },
	{ 1, 191 },
	{ 1, 191 },
	{ 0, 191 },
	{ 1, 128 },
	{ 0, 128 },
	{ 3, 128 },
	{ 1, 128 },
	{ 251, 128 },
	{ 253, 128 },
	{ 253, 128 },
	{ 255, 128 },
	{ 253, 127 },
	{ 255, 127 },
	{ 251, 127 },
	{ 253, 127 },
	{ 3, 127 },
	{ 1, 127 },
	{ 1, 127 },
	{ 0, 127 },
	{ 1, 127 },
	{ 1, 128 },
	{ 3, 127 },
	{ 3, 128 },
	{ 251, 127 },
	{ 251, 128 },
	{ 253, 127 },
	{ 253, 128 },
	{ 1, 64 },
	{ 0, 64 },
	{ 3, 64 },
	{ 1, 64 },
	{ 251, 64 },
	{ 253, 64 },
	{ 253, 64 },
	{ 255, 64 },
	{ 253, 64 },
	{ 253, 63 },
	{ 251, 64 },
	{ 251, 63 },
	{ 3, 64 },
	{ 3, 63 },
	{ 1, 64 },
	{ 1, 63 },
	{ 253, 63 },
	{ 255, 63 },
	{ 251, 63 },
	{ 253, 63 },
	{ 3, 63 },
	{ 1, 63 },
	{ 1, 63 },
	{ 0, 63 },
	{ 1, 0 },
	{ 0 },
	{ 3, 0 },
	{ 1, 0 },
	{ 251, 0 },
	{ 253, 0 },
	{ 253, 0 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00016248[] = {
	{ 255, 254 },
	{ 255, -1642 },
	{ 0, 254 },
	{ 0, -1642 },
	{ 0, 254 },
	{ 0, -1642 },
	{ 255, 254 },
	{ 255, -1642 },
	{ 255, -1662 },
	{ 255, -3559 },
	{ 0, -1662 },
	{ 0, -3559 },
	{ 0, -1662 },
	{ 0, -3559 },
	{ 255, -1662 },
	{ 255, -3559 },
	{ 255, -3579 },
	{ 255, -5477 },
	{ 0, -3579 },
	{ 0, -5477 },
	{ 0, -3579 },
	{ 0, -5477 },
	{ 255, -3579 },
	{ 255, -5477 },
	{ 0, -5495 },
	{ 255, -5495 },
	{ 0, -7395 },
	{ 255, -7395 },
	{ 255, -5495 },
	{ 0, -5495 },
	{ 255, -7395 },
	{ 0, -7395 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000162C8[] = {
	{ 508, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 508, 0 },
	{ 0, 255 },
	{ 508, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000162E8[] = {
	{ 508, 254 },
	{ 508, -252 },
	{ 0, 254 },
	{ 0, -252 },
	{ 508, -256 },
	{ 508, -765 },
	{ 0, -256 },
	{ 0, -765 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00016308[] = {
	{ NJD_MESHSET_TRIMESH | 0, 12, poly_00015F90, NULL, NULL, NULL, uv_000160D8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 8, poly_00016060, NULL, NULL, NULL, uv_00016248, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000160B0, NULL, NULL, NULL, uv_000162C8, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_000160C4, NULL, NULL, NULL, uv_000162E8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00016368[] = {
	{ 21.94272f, -121.9384f, -3.055279f },
	{ -43.23584f, -121.9384f, -3.055279f },
	{ 21.44272f, -121.9384f, 3.944721f },
	{ -42.73584f, -121.9384f, 3.944721f },
	{ -43.23193f, -72.43837f, -3.055279f },
	{ -42.73193f, -72.43837f, 3.944721f },
	{ 21.94675f, -72.43837f, -3.055279f },
	{ 21.44675f, -72.43837f, 3.944721f },
	{ 20.94675f, -72.43837f, 3.444721f },
	{ 21.44675f, -72.43837f, -3.055279f },
	{ -42.23193f, -72.43837f, 3.444721f },
	{ -42.73193f, -72.43837f, -3.055279f },
	{ -42.73193f, -71.93837f, 3.944721f },
	{ -43.23193f, -71.93837f, -3.055279f },
	{ 21.44675f, -71.93837f, 3.944721f },
	{ 21.94675f, -71.93837f, -3.055279f },
	{ -42.23193f, -71.93837f, 3.444721f },
	{ -42.73193f, -71.93837f, -3.055279f },
	{ 20.94675f, -71.93837f, 3.444721f },
	{ 21.44675f, -71.93837f, -3.055279f },
	{ -43.23193f, -22.43837f, -3.055279f },
	{ -42.73193f, -22.43837f, 3.944721f },
	{ 21.44675f, -22.43837f, 3.944721f },
	{ 21.94675f, -22.43837f, -3.055279f },
	{ -42.73193f, -21.93837f, -3.055279f },
	{ -42.23193f, -21.93837f, 3.444721f },
	{ 20.94675f, -21.93837f, 3.444721f },
	{ 21.44675f, -21.93837f, -3.055279f },
	{ -43.23193f, -21.93837f, -3.055279f },
	{ -42.73193f, -21.93837f, 3.944721f },
	{ 21.44675f, -21.93837f, 3.944721f },
	{ 21.94675f, -21.93837f, -3.055279f },
	{ -42.73193f, -22.43837f, -3.055279f },
	{ -42.23193f, -22.43837f, 3.444721f },
	{ 20.94675f, -22.43837f, 3.444721f },
	{ 21.44675f, -22.43837f, -3.055279f },
	{ -42.73193f, 27.56163f, -3.055279f },
	{ -42.23193f, 27.56163f, 3.444721f },
	{ 20.94675f, 27.56163f, 3.444721f },
	{ 21.44675f, 27.56163f, -3.055279f },
	{ -43.23193f, 27.56163f, -3.055279f },
	{ -42.73193f, 27.56163f, 3.944721f },
	{ 21.44675f, 27.56163f, 3.944721f },
	{ 21.94675f, 27.56163f, -3.055279f },
	{ -42.73193f, 28.06163f, -3.055279f },
	{ -42.23193f, 28.06163f, 3.444721f },
	{ 20.94675f, 28.06163f, 3.444721f },
	{ 21.44675f, 28.06163f, -3.055279f },
	{ -43.23193f, 28.06163f, -3.055279f },
	{ -42.73193f, 28.06163f, 3.944721f },
	{ 21.44675f, 28.06163f, 3.944721f },
	{ 21.94675f, 28.06163f, -3.055279f },
	{ -43.23193f, 77.5616f, -3.055279f },
	{ -42.73193f, 77.5616f, 3.944721f },
	{ 21.44675f, 77.5616f, 3.944721f },
	{ 21.94675f, 77.5616f, -3.055279f },
	{ -42.73193f, 78.0616f, -3.055279f },
	{ -42.23193f, 78.0616f, 3.444721f },
	{ 20.94675f, 78.0616f, 3.444721f },
	{ 21.44675f, 78.0616f, -3.055279f },
	{ -42.73193f, 77.5616f, -3.055279f },
	{ -42.23193f, 77.5616f, 3.444721f },
	{ 20.94675f, 77.5616f, 3.444721f },
	{ 21.44675f, 77.5616f, -3.055279f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00016668[] = {
	{ 0.721468f, -0.690527f, 0.051533f },
	{ -0.721523f, -0.69047f, 0.051537f },
	{ 0.554517f, -0.581214f, 0.595569f },
	{ -0.554567f, -0.5811729f, 0.595562f },
	{ -0.721469f, 0.690527f, 0.051533f },
	{ -0.554518f, 0.581213f, 0.595569f },
	{ 0.7215239f, 0.690469f, 0.051537f },
	{ 0.554568f, 0.581172f, 0.595562f },
	{ 0.302519f, 0.8954099f, 0.326684f },
	{ 0.68801f, 0.723768f, 0.052924f },
	{ -0.302519f, 0.8954099f, 0.326684f },
	{ -0.68801f, 0.723768f, 0.052924f },
	{ -0.5545419f, -0.581193f, 0.595565f },
	{ -0.721496f, -0.690498f, 0.051535f },
	{ 0.5545419f, -0.581193f, 0.595565f },
	{ 0.721496f, -0.690498f, 0.051535f },
	{ -0.302519f, -0.8954099f, 0.326684f },
	{ -0.68801f, -0.723768f, 0.052924f },
	{ 0.302519f, -0.8954099f, 0.326684f },
	{ 0.68801f, -0.723768f, 0.052924f },
	{ -0.721496f, 0.690498f, 0.051535f },
	{ -0.5545419f, 0.581193f, 0.595565f },
	{ 0.5545419f, 0.581193f, 0.595565f },
	{ 0.721496f, 0.690498f, 0.051535f },
	{ -0.68801f, -0.723768f, 0.052924f },
	{ -0.302519f, -0.8954099f, 0.326684f },
	{ 0.302519f, -0.8954099f, 0.326684f },
	{ 0.68801f, -0.723768f, 0.052924f },
	{ -0.721496f, -0.690498f, 0.051535f },
	{ -0.5545419f, -0.581193f, 0.595565f },
	{ 0.5545419f, -0.581193f, 0.595565f },
	{ 0.721496f, -0.690498f, 0.051535f },
	{ -0.68801f, 0.723768f, 0.052924f },
	{ -0.302519f, 0.8954099f, 0.326684f },
	{ 0.302519f, 0.8954099f, 0.326684f },
	{ 0.68801f, 0.723768f, 0.052924f },
	{ -0.68801f, 0.723768f, 0.052924f },
	{ -0.302519f, 0.8954099f, 0.326684f },
	{ 0.302519f, 0.8954099f, 0.326684f },
	{ 0.68801f, 0.723768f, 0.052924f },
	{ -0.721496f, 0.690498f, 0.051535f },
	{ -0.5545419f, 0.581193f, 0.595565f },
	{ 0.5545419f, 0.581193f, 0.595565f },
	{ 0.721496f, 0.690498f, 0.051535f },
	{ -0.68801f, -0.723768f, 0.052924f },
	{ -0.302519f, -0.8954099f, 0.326684f },
	{ 0.302519f, -0.8954099f, 0.326684f },
	{ 0.68801f, -0.723768f, 0.052924f },
	{ -0.721496f, -0.690498f, 0.051535f },
	{ -0.5545419f, -0.581193f, 0.595565f },
	{ 0.5545419f, -0.581193f, 0.595565f },
	{ 0.721496f, -0.690498f, 0.051535f },
	{ -0.721496f, 0.690498f, 0.051535f },
	{ -0.5545419f, 0.581193f, 0.595565f },
	{ 0.5545419f, 0.581193f, 0.595565f },
	{ 0.721496f, 0.690498f, 0.051535f },
	{ -0.997054f, 0, 0.07669599f },
	{ -0.67945f, 0, 0.733722f },
	{ 0.67945f, 0, 0.733722f },
	{ 0.997054f, 0, 0.07669599f },
	{ -0.68801f, 0.723768f, 0.052924f },
	{ -0.302519f, 0.8954099f, 0.326684f },
	{ 0.302519f, 0.8954099f, 0.326684f },
	{ 0.68801f, 0.723768f, 0.052924f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00016968 = { vertex_00016368, normal_00016668, LengthOfArray<Sint32>(vertex_00016368), meshlist_00016308, matlist_00015F40, LengthOfArray<Uint16>(meshlist_00016308), LengthOfArray<Uint16>(matlist_00015F40), { -10.64454f, -21.93839f, 0.444721f }, 100.0612f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00016990 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00016968, -0.137731f, 221.9874f, -96.6144f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000169C4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 21, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00016A50[] = {
	0x8000u | 5, 1, 0, 2, 8, 9,
	3, 3, 7, 6,
	6, 11, 6, 4, 7, 5, 3,
	0x8000u | 11, 11, 10, 4, 0, 5, 1, 3, 2, 6, 9, 11,
	3, 0, 8, 10,
	0x8000u | 5, 13, 12, 14, 20, 21,
	3, 15, 19, 18,
	6, 23, 18, 16, 19, 17, 15,
	0x8000u | 11, 23, 22, 16, 12, 17, 13, 15, 14, 18, 21, 23,
	3, 12, 20, 22,
	4, 25, 27, 26, 30,
	4, 31, 29, 28, 24,
	8, 28, 30, 31, 27, 29, 25, 24, 26,
	0x8000u | 5, 37, 36, 38, 44, 45,
	3, 39, 43, 42,
	6, 47, 42, 40, 43, 41, 39,
	0x8000u | 11, 47, 46, 40, 36, 41, 37, 39, 38, 42, 45, 47,
	3, 36, 44, 46,
	4, 49, 51, 50, 54,
	4, 55, 53, 52, 48,
	8, 52, 54, 55, 51, 53, 49, 48, 50,
	0x8000u | 5, 61, 60, 62, 68, 69,
	3, 63, 67, 66,
	6, 71, 66, 64, 67, 65, 63,
	0x8000u | 11, 71, 70, 64, 60, 65, 61, 63, 62, 66, 69, 71,
	3, 60, 68, 70
};

extern "C" __declspec(dllexport) Sint16 poly_00016BA4[] = {
	4, 9, 11, 8, 10,
	4, 21, 23, 20, 22,
	4, 45, 47, 44, 46,
	4, 69, 71, 68, 70
};

extern "C" __declspec(dllexport) Sint16 poly_00016BCC[] = {
	4, 33, 35, 32, 34
};

extern "C" __declspec(dllexport) Sint16 poly_00016BD6[] = {
	4, 33, 32, 26, 24,
	4, 34, 35, 28, 30
};

extern "C" __declspec(dllexport) Sint16 poly_00016BEA[] = {
	4, 35, 33, 30, 26,
	4, 32, 34, 24, 28
};

extern "C" __declspec(dllexport) Sint16 poly_00016BFE[] = {
	4, 57, 59, 56, 58,
	4, 57, 56, 50, 48,
	4, 58, 59, 52, 54
};

extern "C" __declspec(dllexport) Sint16 poly_00016C1C[] = {
	4, 59, 57, 54, 50,
	4, 56, 58, 48, 52
};

extern "C" __declspec(dllexport) NJS_TEX uv_00016C30[] = {
	{ 0, 255 },
	{ 2, 254 },
	{ 2, 212 },
	{ 2, 254 },
	{ 2, 212 },
	{ 0, 212 },
	{ 255, 212 },
	{ 252, 212 },
	{ 252, 212 },
	{ 252, 212 },
	{ 252, 254 },
	{ 255, 212 },
	{ 255, 255 },
	{ 0, 212 },
	{ 252, 212 },
	{ 252, 254 },
	{ 252, 254 },
	{ 2, 254 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, 212 },
	{ 2, 212 },
	{ 252, 212 },
	{ 2, 212 },
	{ 252, 212 },
	{ 2, 254 },
	{ 2, 254 },
	{ 252, 254 },
	{ 0, 212 },
	{ 2, 212 },
	{ 2, 170 },
	{ 2, 212 },
	{ 2, 170 },
	{ 0, 169 },
	{ 255, 169 },
	{ 252, 170 },
	{ 252, 170 },
	{ 252, 170 },
	{ 252, 212 },
	{ 255, 169 },
	{ 255, 212 },
	{ 0, 169 },
	{ 252, 170 },
	{ 252, 212 },
	{ 252, 212 },
	{ 2, 212 },
	{ 255, 212 },
	{ 0, 212 },
	{ 0, 169 },
	{ 2, 170 },
	{ 252, 170 },
	{ 2, 170 },
	{ 252, 170 },
	{ 2, 212 },
	{ 2, 212 },
	{ 252, 212 },
	{ 0, 169 },
	{ 0, 127 },
	{ 2, 127 },
	{ 252, 127 },
	{ 255, 127 },
	{ 255, 169 },
	{ 252, 169 },
	{ 2, 169 },
	{ 252, 169 },
	{ 252, 127 },
	{ 255, 127 },
	{ 0, 127 },
	{ 255, 169 },
	{ 0, 169 },
	{ 2, 169 },
	{ 2, 127 },
	{ 0, 127 },
	{ 2, 127 },
	{ 2, 85 },
	{ 2, 127 },
	{ 2, 85 },
	{ 0, 84 },
	{ 255, 84 },
	{ 252, 85 },
	{ 252, 85 },
	{ 252, 85 },
	{ 252, 127 },
	{ 255, 84 },
	{ 255, 127 },
	{ 0, 84 },
	{ 252, 85 },
	{ 252, 127 },
	{ 252, 127 },
	{ 2, 127 },
	{ 255, 127 },
	{ 0, 127 },
	{ 0, 84 },
	{ 2, 85 },
	{ 252, 85 },
	{ 2, 85 },
	{ 252, 85 },
	{ 2, 127 },
	{ 2, 127 },
	{ 252, 127 },
	{ 0, 84 },
	{ 0, 42 },
	{ 2, 42 },
	{ 252, 42 },
	{ 255, 42 },
	{ 255, 84 },
	{ 252, 84 },
	{ 2, 84 },
	{ 252, 84 },
	{ 252, 42 },
	{ 255, 42 },
	{ 0, 42 },
	{ 255, 84 },
	{ 0, 84 },
	{ 2, 84 },
	{ 2, 42 },
	{ 0, 42 },
	{ 2, 42 },
	{ 2, 0 },
	{ 2, 42 },
	{ 2, 0 },
	{ 0 },
	{ 255, 0 },
	{ 252, 0 },
	{ 252, 0 },
	{ 252, 0 },
	{ 252, 42 },
	{ 255, 0 },
	{ 255, 42 },
	{ 0 },
	{ 252, 0 },
	{ 252, 42 },
	{ 252, 42 },
	{ 2, 42 },
	{ 255, 42 },
	{ 0, 42 },
	{ 0 },
	{ 2, 0 },
	{ 252, 0 },
	{ 2, 0 },
	{ 252, 0 },
	{ 2, 42 },
	{ 2, 42 },
	{ 252, 42 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00016E70[] = {
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00016EB0[] = {
	{ 0, -255 },
	{ 1020, -255 },
	{ 0, 254 },
	{ 1020, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00016EC0[] = {
	{ 0, -150 },
	{ 0, 161 },
	{ 255, -255 },
	{ 255, 254 },
	{ 0, 161 },
	{ 0, -150 },
	{ 255, 254 },
	{ 255, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00016EE0[] = {
	{ 255, 185 },
	{ 0, 185 },
	{ 255, 119 },
	{ 0, 119 },
	{ 0, 185 },
	{ 255, 185 },
	{ 0, 119 },
	{ 255, 119 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00016F00[] = {
	{ 254, -253 },
	{ 0, -253 },
	{ 254, 253 },
	{ 0, 253 },
	{ 188, -253 },
	{ 188, 253 },
	{ 254, -253 },
	{ 254, 253 },
	{ 254, 253 },
	{ 254, -253 },
	{ 188, 253 },
	{ 188, -253 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00016F30[] = {
	{ 1221, 255 },
	{ 52, 255 },
	{ 1275, 0 },
	{ 0 },
	{ 52, 255 },
	{ 1221, 255 },
	{ 0 },
	{ 1275, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00016F50[] = {
	{ NJD_MESHSET_TRIMESH | 0, 26, poly_00016A50, NULL, NULL, NULL, uv_00016C30, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_00016BA4, NULL, NULL, NULL, uv_00016E70, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00016BCC, NULL, NULL, NULL, uv_00016EB0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_00016BD6, NULL, NULL, NULL, uv_00016EC0, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_00016BEA, NULL, NULL, NULL, uv_00016EE0, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 3, poly_00016BFE, NULL, NULL, NULL, uv_00016F00, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, poly_00016C1C, NULL, NULL, NULL, uv_00016F30, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00016FF8[] = {
	{ -24.5f, -149.5f, 4.75f },
	{ -25, -150, 5.25f },
	{ -24.5f, -100.5f, 4.75f },
	{ -25, -100, 5.25f },
	{ 24.5f, -149.5f, 4.75f },
	{ 25, -150, 5.25f },
	{ 24.5f, -100.5f, 4.75f },
	{ 25, -100, 5.25f },
	{ -24.5f, -149.5f, 4.25f },
	{ -24.5f, -100.5f, 4.25f },
	{ 24.5f, -149.5f, 4.25f },
	{ 24.5f, -100.5f, 4.25f },
	{ -24.5f, -99.5f, 4.75f },
	{ -25, -100, 5.25f },
	{ -24.5f, -50.5f, 4.75f },
	{ -25, -50, 5.25f },
	{ 24.5f, -99.5f, 4.75f },
	{ 25, -100, 5.25f },
	{ 24.5f, -50.5f, 4.75f },
	{ 25, -50, 5.25f },
	{ -24.5f, -99.5f, 4.25f },
	{ -24.5f, -50.5f, 4.25f },
	{ 24.5f, -99.5f, 4.25f },
	{ 24.5f, -50.5f, 4.25f },
	{ -24.5f, -49.5f, 4.75f },
	{ -25, -50, 5.25f },
	{ -24.5f, -0.5f, 4.75f },
	{ -25, 0, 5.25f },
	{ 24.5f, -49.5f, 4.75f },
	{ 25, -50, 5.25f },
	{ 24.5f, -0.5f, 4.75f },
	{ 25, 0, 5.25f },
	{ -24.5f, -40.5f, -0.75f },
	{ -24.5f, -10.5f, -0.75f },
	{ 24.5f, -40.5f, -0.75f },
	{ 24.5f, -10.5f, -0.75f },
	{ -24.5f, 0.5f, 4.75f },
	{ -25, 0, 5.25f },
	{ -24.5f, 49.5f, 4.75f },
	{ -25, 50, 5.25f },
	{ 24.5f, 0.5f, 4.75f },
	{ 25, 0, 5.25f },
	{ 24.5f, 49.5f, 4.75f },
	{ 25, 50, 5.25f },
	{ -24.5f, 0.5f, 4.25f },
	{ -24.5f, 49.5f, 4.25f },
	{ 24.5f, 0.5f, 4.25f },
	{ 24.5f, 49.5f, 4.25f },
	{ -24.5f, 50.5f, 4.75f },
	{ -25, 50, 5.25f },
	{ -24.5f, 99.5f, 4.75f },
	{ -25, 100, 5.25f },
	{ 24.5f, 50.5f, 4.75f },
	{ 25, 50, 5.25f },
	{ 24.5f, 99.5f, 4.75f },
	{ 25, 100, 5.25f },
	{ -22.5f, 50.5f, -3.75f },
	{ -22.5f, 99.5f, -3.75f },
	{ 22.5f, 50.5f, -3.75f },
	{ 22.5f, 99.5f, -3.75f },
	{ -24.5f, 100.5f, 4.75f },
	{ -25, 100, 5.25f },
	{ -24.5f, 149.5f, 4.75f },
	{ -25, 150, 5.25f },
	{ 24.5f, 100.5f, 4.75f },
	{ 25, 100, 5.25f },
	{ 24.5f, 149.5f, 4.75f },
	{ 25, 150, 5.25f },
	{ -24.5f, 100.5f, 4.25f },
	{ -24.5f, 149.5f, 4.25f },
	{ 24.5f, 100.5f, 4.25f },
	{ 24.5f, 149.5f, 4.25f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00017358[] = {
	{ -0.578886f, -0.578886f, -0.574267f },
	{ -0.689106f, -0.689106f, 0.224198f },
	{ -0.578886f, 0.578886f, -0.574267f },
	{ -0.689106f, 0.689106f, 0.224198f },
	{ 0.578886f, -0.578886f, -0.574267f },
	{ 0.689106f, -0.689106f, 0.224198f },
	{ 0.578886f, 0.578886f, -0.574267f },
	{ 0.689106f, 0.689106f, 0.224198f },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.578886f, -0.578886f, -0.574267f },
	{ -0.689106f, -0.689106f, 0.224198f },
	{ -0.578886f, 0.578886f, -0.574267f },
	{ -0.689106f, 0.689106f, 0.224198f },
	{ 0.578886f, -0.578886f, -0.574267f },
	{ 0.689106f, -0.689106f, 0.224198f },
	{ 0.578886f, 0.578886f, -0.574267f },
	{ 0.689106f, 0.689106f, 0.224198f },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.384814f, -0.43452f, -0.814316f },
	{ -0.689106f, -0.689106f, 0.224198f },
	{ -0.377428f, 0.424248f, -0.823141f },
	{ -0.689106f, 0.689106f, 0.224198f },
	{ 0.384814f, -0.43452f, -0.814316f },
	{ 0.689106f, -0.689106f, 0.224198f },
	{ 0.377428f, 0.424248f, -0.823141f },
	{ 0.689106f, 0.689106f, 0.224198f },
	{ -0.6509219f, -0.205613f, -0.730769f },
	{ -0.655163f, 0.187951f, -0.731735f },
	{ 0.6509219f, -0.205613f, -0.730769f },
	{ 0.655163f, 0.187951f, -0.731735f },
	{ -0.578886f, -0.578886f, -0.574267f },
	{ -0.689106f, -0.689106f, 0.224198f },
	{ -0.578886f, 0.578886f, -0.574267f },
	{ -0.689106f, 0.689106f, 0.224198f },
	{ 0.578886f, -0.578886f, -0.574267f },
	{ 0.689106f, -0.689106f, 0.224198f },
	{ 0.578886f, 0.578886f, -0.574267f },
	{ 0.689106f, 0.689106f, 0.224198f },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.564275f, -0.5295309f, -0.633396f },
	{ -0.689106f, -0.689106f, 0.224198f },
	{ -0.564275f, 0.5295309f, -0.633396f },
	{ -0.689106f, 0.689106f, 0.224198f },
	{ 0.564275f, -0.5295309f, -0.633396f },
	{ 0.689106f, -0.689106f, 0.224198f },
	{ 0.564275f, 0.5295309f, -0.633396f },
	{ 0.689106f, 0.689106f, 0.224198f },
	{ -0.5010729f, -0.590486f, -0.632656f },
	{ -0.5010729f, 0.590486f, -0.632656f },
	{ 0.5010729f, -0.590486f, -0.632656f },
	{ 0.5010729f, 0.590486f, -0.632656f },
	{ -0.578886f, -0.578886f, -0.574267f },
	{ -0.689106f, -0.689106f, 0.224198f },
	{ -0.578886f, 0.578886f, -0.574267f },
	{ -0.689106f, 0.689106f, 0.224198f },
	{ 0.578886f, -0.578886f, -0.574267f },
	{ 0.689106f, -0.689106f, 0.224198f },
	{ 0.578886f, 0.578886f, -0.574267f },
	{ 0.689106f, 0.689106f, 0.224198f },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000176B8 = { vertex_00016FF8, normal_00017358, LengthOfArray<Sint32>(vertex_00016FF8), meshlist_00016F50, matlist_000169C4, LengthOfArray<Uint16>(meshlist_00016F50), LengthOfArray<Uint16>(matlist_000169C4), { 0, 0, 0.75f }, 150.0675f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000176E0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000176B8, 24.5f, 150.0976f, 94.76508f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00017714[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0001773C[] = {
	0x8000u | 8, 1, 2, 9, 10, 13, 14, 5, 6,
	0x8000u | 8, 5, 4, 13, 12, 9, 8, 1, 0
};

extern "C" __declspec(dllexport) Sint16 poly_00017760[] = {
	4, 2, 10, 3, 11,
	4, 7, 15, 6, 14,
	4, 15, 11, 14, 10
};

extern "C" __declspec(dllexport) NJS_TEX uv_00017780[] = {
	{ 63, 255 },
	{ 255, 255 },
	{ 63, -2295 },
	{ 255, -2295 },
	{ 63, -4845 },
	{ 255, -4845 },
	{ 63, -7395 },
	{ 255, -7395 },
	{ 63, -7395 },
	{ 0, -7395 },
	{ 63, -4845 },
	{ 0, -4845 },
	{ 63, -2295 },
	{ 0, -2295 },
	{ 63, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000177C0[] = {
	{ 0, 255 },
	{ 0, -1275 },
	{ 1019, 255 },
	{ 1019, -1275 },
	{ 1019, -1275 },
	{ 1019, 255 },
	{ 0, -1275 },
	{ 0, 255 },
	{ 1019, -1274 },
	{ 1019, 255 },
	{ 0, -1274 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000177F0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0001773C, NULL, NULL, NULL, uv_00017780, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_00017760, NULL, NULL, NULL, uv_000177C0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00017820[] = {
	{ -28.50773f, 0.00375f, -28.38782f },
	{ -26.00772f, 0.00375f, -28.38782f },
	{ -18.50772f, 0.00375f, -20.88782f },
	{ -18.50772f, 0.00375f, 21.61218f },
	{ -28.50773f, 300.0038f, -28.38782f },
	{ -26.00772f, 300.0038f, -28.38782f },
	{ -18.50772f, 300.0038f, -20.88782f },
	{ -18.50772f, 300.0038f, 21.61218f },
	{ -28.50773f, 100.0038f, -28.38782f },
	{ -26.00772f, 100.0038f, -28.38782f },
	{ -18.50772f, 100.0038f, -20.88782f },
	{ -18.50772f, 100.0038f, 21.61218f },
	{ -28.50773f, 200.0038f, -28.38782f },
	{ -26.00772f, 200.0038f, -28.38782f },
	{ -18.50772f, 200.0038f, -20.88782f },
	{ -18.50772f, 200.0038f, 21.61218f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000178E0[] = {
	{ 0, 0, -1 },
	{ 0.382683f, 0, -0.92388f },
	{ 0.92388f, 0, -0.382684f },
	{ 1, 0, 0 },
	{ 0, 0, -1 },
	{ 0.382683f, 0, -0.92388f },
	{ 0.92388f, 0, -0.382684f },
	{ 1, 0, 0 },
	{ 0, 0, -1 },
	{ 0.382683f, 0, -0.92388f },
	{ 0.92388f, 0, -0.382684f },
	{ 1, 0, 0 },
	{ 0, 0, -1 },
	{ 0.382683f, 0, -0.92388f },
	{ 0.92388f, 0, -0.382684f },
	{ 1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000179A0 = { vertex_00017820, normal_000178E0, LengthOfArray<Sint32>(vertex_00017820), meshlist_000177F0, matlist_00017714, LengthOfArray<Uint16>(meshlist_000177F0), LengthOfArray<Uint16>(matlist_00017714), { -23.50772f, 150.0038f, -3.387821f }, 152.069f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000179C8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000179A0, -82.15799f, 0, 78.71423f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000179FC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00017A88[] = {
	8, 3, 2, 0, 1, 11, 10, 12, 13
};

extern "C" __declspec(dllexport) Sint16 poly_00017A9A[] = {
	4, 0, 4, 3, 5,
	4, 17, 16, 18, 19,
	4, 7, 6, 8, 9,
	4, 11, 14, 0, 4,
	4, 16, 17, 7, 6,
	4, 14, 11, 15, 12,
	4, 55, 57, 52, 56,
	4, 70, 71, 69, 68,
	4, 60, 61, 59, 58,
	4, 52, 56, 63, 66,
	4, 59, 58, 68, 69,
	4, 67, 64, 66, 63
};

extern "C" __declspec(dllexport) Sint16 poly_00017B12[] = {
	4, 16, 14, 19, 15,
	4, 4, 7, 5, 8,
	4, 14, 16, 4, 7,
	4, 71, 67, 68, 66,
	4, 57, 60, 56, 59,
	4, 56, 59, 66, 68
};

extern "C" __declspec(dllexport) Sint16 poly_00017B4E[] = {
	8, 22, 23, 21, 20, 24, 25, 27, 26,
	8, 31, 22, 28, 21, 33, 24, 34, 27,
	8, 34, 35, 33, 32, 28, 29, 31, 30
};

extern "C" __declspec(dllexport) Sint16 poly_00017B84[] = {
	0x8000u | 8, 42, 41, 43, 40, 38, 37, 39, 36,
	0x8000u | 8, 48, 51, 49, 50, 44, 47, 45, 46
};

extern "C" __declspec(dllexport) Sint16 poly_00017BA8[] = {
	0x8000u | 8, 41, 48, 40, 49, 37, 44, 36, 45
};

extern "C" __declspec(dllexport) Sint16 poly_00017BBA[] = {
	8, 54, 55, 53, 52, 62, 63, 65, 64
};

extern "C" __declspec(dllexport) NJS_TEX uv_00017BCC[] = {
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -2294 },
	{ 510, -2294 },
	{ 0, -4844 },
	{ 510, -4844 },
	{ 0, -7394 },
	{ 510, -7394 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00017BEC[] = {
	{ 255, 254 },
	{ 0, 254 },
	{ 255, 0 },
	{ 0 },
	{ 255, 0 },
	{ 0 },
	{ 255, 254 },
	{ 0, 254 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0 },
	{ 255, 0 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, 0 },
	{ 0 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0 },
	{ 255, 0 },
	{ 0 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 254 },
	{ 255, 0 },
	{ 0 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, 0 },
	{ 0 },
	{ 0 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 254 },
	{ 255, 0 },
	{ 0 },
	{ 255, 254 },
	{ 0, 254 },
	{ 0 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00017CAC[] = {
	{ 255, 254 },
	{ 0, 254 },
	{ 255, 0 },
	{ 0 },
	{ 0 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 254 },
	{ 255, 0 },
	{ 0 },
	{ 255, 254 },
	{ 0, 254 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00017D0C[] = {
	{ 0, -85 },
	{ 0, 255 },
	{ 328, -85 },
	{ 328, 255 },
	{ 657, -85 },
	{ 657, 255 },
	{ 1019, -85 },
	{ 1019, 255 },
	{ 0, -424 },
	{ 0, -85 },
	{ 328, -424 },
	{ 328, -85 },
	{ 657, -424 },
	{ 657, -85 },
	{ 1019, -424 },
	{ 1019, -85 },
	{ 1019, -424 },
	{ 1019, -765 },
	{ 657, -424 },
	{ 657, -765 },
	{ 328, -424 },
	{ 328, -765 },
	{ 0, -424 },
	{ 0, -765 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00017D6C[] = {
	{ 0, -2804 },
	{ 508, -2804 },
	{ 0, -1784 },
	{ 508, -1784 },
	{ 0, -764 },
	{ 508, -764 },
	{ 0, 255 },
	{ 508, 255 },
	{ 0, -2804 },
	{ 510, -2804 },
	{ 0, -1784 },
	{ 510, -1784 },
	{ 0, -764 },
	{ 510, -764 },
	{ 0, 255 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00017DAC[] = {
	{ 0, -1274 },
	{ 510, -1274 },
	{ 0, -764 },
	{ 510, -764 },
	{ 0, -254 },
	{ 510, -254 },
	{ 0, 255 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00017DCC[] = {
	{ 0, 255 },
	{ 508, 255 },
	{ 0, -2294 },
	{ 508, -2294 },
	{ 0, -4844 },
	{ 508, -4844 },
	{ 0, -7394 },
	{ 508, -7394 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00017DEC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00017A88, NULL, NULL, NULL, uv_00017BCC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 12, poly_00017A9A, NULL, NULL, NULL, uv_00017BEC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 6, poly_00017B12, NULL, NULL, NULL, uv_00017CAC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_00017B4E, NULL, NULL, NULL, uv_00017D0C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_00017B84, NULL, NULL, NULL, uv_00017D6C, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_00017BA8, NULL, NULL, NULL, uv_00017DAC, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 1, poly_00017BBA, NULL, NULL, NULL, uv_00017DCC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00017E94[] = {
	{ -75.05902f, -50.00058f, 74.98843f },
	{ -75.05902f, -50.00058f, 100 },
	{ -75.05902f, -150.001f, 100 },
	{ -75.05902f, -150.001f, 74.98843f },
	{ -25.25452f, -50.00058f, 74.98843f },
	{ -25.25452f, -150.001f, 74.98843f },
	{ 74.35446f, -50.00058f, 74.98843f },
	{ 24.54997f, -50.00058f, 74.98843f },
	{ 24.54997f, -150.001f, 74.98843f },
	{ 74.35446f, -150.001f, 74.98843f },
	{ -75.05902f, 49.9998f, 100 },
	{ -75.05902f, 49.9998f, 74.98843f },
	{ -75.05902f, 150.0002f, 74.98843f },
	{ -75.05902f, 150.0002f, 100 },
	{ -25.25452f, 49.9998f, 74.98843f },
	{ -25.25452f, 150.0002f, 74.98843f },
	{ 24.54997f, 49.9998f, 74.98843f },
	{ 74.35446f, 49.9998f, 74.98843f },
	{ 74.35446f, 150.0002f, 74.98843f },
	{ 24.54997f, 150.0002f, 74.98843f },
	{ -26.87703f, 150.0089f, -76.59999f },
	{ -26.87703f, 150.0089f, -25.53333f },
	{ -75.6311f, 150.0089f, -25.53333f },
	{ -75.6311f, 150.0089f, -76.59999f },
	{ 21.87704f, 150.0089f, -25.53333f },
	{ 21.87704f, 150.0089f, -76.59999f },
	{ 75.63112f, 150.0089f, -76.59999f },
	{ 75.63112f, 150.0089f, -25.53333f },
	{ -26.87703f, 150.0089f, 25.53333f },
	{ -26.87703f, 150.0089f, 76.59999f },
	{ -75.6311f, 150.0089f, 76.59999f },
	{ -75.6311f, 150.0089f, 25.53333f },
	{ 21.87704f, 150.0089f, 76.59999f },
	{ 21.87704f, 150.0089f, 25.53333f },
	{ 75.63112f, 150.0089f, 25.53333f },
	{ 75.63112f, 150.0089f, 76.59999f },
	{ 74.35094f, -150.0089f, -33.32902f },
	{ 74.35094f, -50.00481f, -33.32902f },
	{ 74.35094f, -50.00481f, -76.44247f },
	{ 74.35094f, -150.0089f, -76.44247f },
	{ 74.35094f, 49.99931f, -33.32902f },
	{ 74.35094f, 150.0034f, -33.32902f },
	{ 74.35094f, 150.0034f, -76.44247f },
	{ 74.35094f, 49.99931f, -76.44247f },
	{ 74.35094f, -50.00481f, 33.33764f },
	{ 74.35094f, -150.0089f, 33.33764f },
	{ 74.35094f, -150.0089f, 76.4511f },
	{ 74.35094f, -50.00481f, 76.4511f },
	{ 74.35094f, 150.0034f, 33.33764f },
	{ 74.35094f, 49.99931f, 33.33764f },
	{ 74.35094f, 49.99931f, 76.4511f },
	{ 74.35094f, 150.0034f, 76.4511f },
	{ -75.05902f, -50.00058f, -74.98843f },
	{ -75.05902f, -50.00058f, -100 },
	{ -75.05902f, -150.001f, -100 },
	{ -75.05902f, -150.001f, -74.98843f },
	{ -25.25452f, -50.00058f, -74.98843f },
	{ -25.25452f, -150.001f, -74.98843f },
	{ 74.35446f, -50.00058f, -74.98843f },
	{ 24.54997f, -50.00058f, -74.98843f },
	{ 24.54997f, -150.001f, -74.98843f },
	{ 74.35446f, -150.001f, -74.98843f },
	{ -75.05902f, 49.9998f, -100 },
	{ -75.05902f, 49.9998f, -74.98843f },
	{ -75.05902f, 150.0002f, -74.98843f },
	{ -75.05902f, 150.0002f, -100 },
	{ -25.25452f, 49.9998f, -74.98843f },
	{ -25.25452f, 150.0002f, -74.98843f },
	{ 24.54997f, 49.9998f, -74.98843f },
	{ 74.35446f, 49.9998f, -74.98843f },
	{ 74.35446f, 150.0002f, -74.98843f },
	{ 24.54997f, 150.0002f, -74.98843f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000181F4[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
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
	{ -0.7071069f, 0, 0.7071069f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -1, 0, 0 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00018554 = { vertex_00017E94, normal_000181F4, LengthOfArray<Sint32>(vertex_00017E94), meshlist_00017DEC, matlist_000179FC, LengthOfArray<Uint16>(meshlist_00017DEC), LengthOfArray<Uint16>(matlist_000179FC), { 0.000004f, -0.00008f, 0 }, 180.285f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0001857C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00018554, 161.3374f, 149.9999f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000185B0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000185C4[] = {
	0x8000u | 14, 0, 1, 11, 10, 9, 8, 6, 4, 13, 12, 7, 5, 2, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_000185E4[] = {
	{ 0, 255 },
	{ 508, 255 },
	{ 0, -772 },
	{ 508, -772 },
	{ 0, -1791 },
	{ 508, -1791 },
	{ 0, -2809 },
	{ 510, -2809 },
	{ 0, -3827 },
	{ 508, -3827 },
	{ 0, -4845 },
	{ 508, -4845 },
	{ 0, -5865 },
	{ 508, -5865 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0001861C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000185C4, NULL, NULL, NULL, uv_000185E4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00018634[] = {
	{ 15, -15.51267f, -34.99341f },
	{ 15, -15.51267f, 15 },
	{ 15, 284.9932f, -34.99343f },
	{ 15, 284.9932f, 15 },
	{ 15, 134.9921f, 15.00001f },
	{ 15, 234.9912f, 14.99995f },
	{ 15, 134.9921f, -34.9934f },
	{ 15, 234.9912f, -34.99347f },
	{ 15, 84.99122f, 14.99994f },
	{ 15, 84.99122f, -34.99349f },
	{ 15, 34.99111f, 14.99998f },
	{ 15, 34.99111f, -34.99345f },
	{ 15, 184.9909f, 14.99996f },
	{ 15, 184.9909f, -34.99348f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000186DC[] = {
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00018784 = { vertex_00018634, normal_000186DC, LengthOfArray<Sint32>(vertex_00018634), meshlist_0001861C, matlist_000185B0, LengthOfArray<Uint16>(meshlist_0001861C), LengthOfArray<Uint16>(matlist_000185B0), { 15, 134.7403f, -9.996741f }, 152.318f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000187AC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00018784, -125.7673f, 15.51264f, -64.66565f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000187E0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000187F4[] = {
	4, 3, 2, 1, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_00018800[] = {
	{ 510, -255 },
	{ 510, 255 },
	{ 0, -255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00018810[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000187F4, NULL, NULL, NULL, uv_00018800, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00018828[] = {
	{ -20, 0, -20 },
	{ -20, 0, 20 },
	{ 20, 0, -20 },
	{ 20, 0, 20 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00018858[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00018888 = { vertex_00018828, normal_00018858, LengthOfArray<Sint32>(vertex_00018828), meshlist_00018810, matlist_000187E0, LengthOfArray<Uint16>(meshlist_00018810), LengthOfArray<Uint16>(matlist_000187E0), { 0 }, 28.28427f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000188B0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00018888, -41.57392f, 107.037f, -2.190628f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000188E4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000188F8[] = {
	4, 3, 2, 1, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_00018904[] = {
	{ 510, -255 },
	{ 510, 255 },
	{ 0, -255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00018914[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000188F8, NULL, NULL, NULL, uv_00018904, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0001892C[] = {
	{ -20, 0, -20 },
	{ -20, 0, 20 },
	{ 20, 0, -20 },
	{ 20, 0, 20 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0001895C[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0001898C = { vertex_0001892C, normal_0001895C, LengthOfArray<Sint32>(vertex_0001892C), meshlist_00018914, matlist_000188E4, LengthOfArray<Uint16>(meshlist_00018914), LengthOfArray<Uint16>(matlist_000188E4), { 0 }, 28.28427f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000189B4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0001898C, -41.74774f, 91.10913f, -2.555275f, 0, 0, 0x8004, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000189E8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000189FC[] = {
	4, 0, 4, 1, 5,
	4, 1, 5, 2, 6,
	4, 2, 6, 3, 7,
	4, 6, 5, 7, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_00018A24[] = {
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 255, 180 },
	{ 255, 75 },
	{ 255, 255 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00018A64[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000189FC, NULL, NULL, NULL, uv_00018A24, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00018A7C[] = {
	{ -82.49599f, -30.53612f, -24.5377f },
	{ -82.49599f, -35.27995f, -30.32852f },
	{ -82.49599f, -41.82318f, -30.32852f },
	{ -82.49599f, -46.48523f, -24.5377f },
	{ -79.99998f, -30.53612f, -24.5377f },
	{ -79.99998f, -35.27995f, -30.32852f },
	{ -79.99998f, -41.82318f, -30.32852f },
	{ -79.99998f, -46.48523f, -24.5377f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00018ADC[] = {
	{ 0, 0.773571f, -0.633709f },
	{ 0, 0.427955f, -0.9038f },
	{ 0, -0.431797f, -0.901971f },
	{ 0, -0.778936f, -0.627103f },
	{ 0.490634f, 0.674064f, -0.552193f },
	{ 0.622278f, 0.335002f, -0.707492f },
	{ 0.62161f, -0.338238f, -0.706538f },
	{ 0.494206f, -0.677164f, -0.545169f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00018B3C = { vertex_00018A7C, normal_00018ADC, LengthOfArray<Sint32>(vertex_00018A7C), meshlist_00018A64, matlist_000189E8, LengthOfArray<Uint16>(meshlist_00018A64), LengthOfArray<Uint16>(matlist_000189E8), { -81.24799f, -38.51067f, -27.43311f }, 8.483921f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00018B64 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00018B3C, -190.3589f, 149.7331f, -0.608699f, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00018B98[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 24, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00018C38[] = {
	8, 2, 3, 1, 0, 8, 9, 11, 10
};

extern "C" __declspec(dllexport) Sint16 poly_00018C4A[] = {
	3, 19, 22, 21,
	4, 29, 31, 14, 32,
	4, 19, 20, 1, 2,
	3, 23, 24, 25,
	4, 33, 28, 7, 6,
	4, 24, 23, 11, 8,
	4, 12, 13, 25, 26,
	3, 21, 20, 19,
	3, 25, 26, 23,
	4, 22, 5, 21, 4
};

extern "C" __declspec(dllexport) Sint16 poly_00018CA6[] = {
	4, 31, 33, 32, 7
};

extern "C" __declspec(dllexport) Sint16 poly_00018CB0[] = {
	0x8000u | 8, 7, 32, 15, 17, 16, 18, 5, 13,
	6, 5, 16, 4, 15, 6, 7,
	6, 32, 17, 14, 18, 12, 13
};

extern "C" __declspec(dllexport) Sint16 poly_00018CDE[] = {
	4, 23, 19, 8, 1
};

extern "C" __declspec(dllexport) Sint16 poly_00018CE8[] = {
	3, 32, 33, 31
};

extern "C" __declspec(dllexport) Sint16 poly_00018CF0[] = {
	3, 33, 27, 28,
	3, 31, 29, 30
};

extern "C" __declspec(dllexport) Sint16 poly_00018D00[] = {
	4, 22, 19, 26, 23,
	4, 22, 26, 5, 13
};

extern "C" __declspec(dllexport) NJS_TEX uv_00018D14[] = {
	{ 0 },
	{ 0, 254 },
	{ 510, 0 },
	{ 510, 254 },
	{ 1020, 0 },
	{ 1020, 254 },
	{ 1530, 0 },
	{ 1530, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00018D34[] = {
	{ 253, 145 },
	{ 253, 73 },
	{ 185, 1 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 253, 173 },
	{ 1, 1 },
	{ 255, 254 },
	{ 1, 253 },
	{ 253, 169 },
	{ 1, 1 },
	{ 149, 1 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 253 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 173 },
	{ 1, 253 },
	{ 255, 254 },
	{ 253, 1 },
	{ 205, 253 },
	{ 157, 1 },
	{ 137, 253 },
	{ 149, 1 },
	{ 1, 1 },
	{ 253, 169 },
	{ 185, 1 },
	{ 253, 73 },
	{ 253, 145 },
	{ 137, 253 },
	{ 205, 253 },
	{ 157, 1 },
	{ 253, 1 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00018DC4[] = {
	{ 508, -254 },
	{ 0, -254 },
	{ 510, 254 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00018DD4[] = {
	{ 85, 0 },
	{ 170, 0 },
	{ 61, 254 },
	{ 193, 254 },
	{ 61, 254 },
	{ 193, 254 },
	{ 85, 0 },
	{ 170, 0 },
	{ 85, 0 },
	{ 61, 254 },
	{ 0 },
	{ 61, 254 },
	{ 0 },
	{ 85, 0 },
	{ 170, 0 },
	{ 193, 254 },
	{ 255, 0 },
	{ 193, 254 },
	{ 255, 0 },
	{ 170, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00018E24[] = {
	{ 510, 0 },
	{ 0 },
	{ 510, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00018E34[] = {
	{ 253, 15 },
	{ 253, 253 },
	{ 133, 253 },
	{ 1, 13 },
	{ 121, 253 },
	{ 1, 253 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00018E4C[] = {
	{ 0, 184 },
	{ 0, 40 },
	{ 254, 184 },
	{ 254, 40 },
	{ 0 },
	{ 254, 0 },
	{ 0, 38 },
	{ 254, 38 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00018E6C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00018C38, NULL, NULL, NULL, uv_00018D14, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 10, poly_00018C4A, NULL, NULL, NULL, uv_00018D34, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00018CA6, NULL, NULL, NULL, uv_00018DC4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_00018CB0, NULL, NULL, NULL, uv_00018DD4, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_00018CDE, NULL, NULL, NULL, uv_00018E24, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_00018CE8, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, poly_00018CF0, NULL, NULL, NULL, uv_00018E34, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 2, poly_00018D00, NULL, NULL, NULL, uv_00018E4C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00018F2C[] = {
	{ -101.014f, -15.99869f, -25.04098f },
	{ -92.014f, 4.398546f, -25.04098f },
	{ -74.01397f, 4.398546f, -75.12293f },
	{ -83.01396f, -15.99869f, -75.12293f },
	{ -30.00466f, 4.398546f, -75.12293f },
	{ -85.00468f, 4.398546f, -25.04098f },
	{ 23.00466f, 4.398546f, -75.12293f },
	{ 76.01397f, 4.398545f, -25.04093f },
	{ -92.014f, 4.398546f, 25.04098f },
	{ -101.014f, -15.99869f, 25.04098f },
	{ -83.01396f, -15.99869f, 75.12293f },
	{ -74.01397f, 4.398546f, 75.12293f },
	{ -30.00466f, 4.398546f, 75.12293f },
	{ -85.00468f, 4.398546f, 25.04098f },
	{ 23.00466f, 4.398546f, 75.12293f },
	{ 35.17639f, -7.889806f, -38.8135f },
	{ -46.58971f, -7.889806f, -38.8135f },
	{ 35.17639f, -7.889806f, 38.8135f },
	{ -46.58971f, -7.889806f, 38.8135f },
	{ -92.014f, 14.00993f, -25.04098f },
	{ -74.01397f, 46.12683f, -75.12293f },
	{ -30.00466f, 46.12683f, -75.12293f },
	{ -85.00468f, 14.00993f, -25.04098f },
	{ -92.014f, 14.00993f, 25.04098f },
	{ -74.01397f, 46.12683f, 75.12293f },
	{ -30.00466f, 46.12683f, 75.12293f },
	{ -85.00468f, 14.00993f, 25.04098f },
	{ 76.01396f, 53.81127f, -75.12293f },
	{ 23.00466f, 53.81127f, -75.12293f },
	{ 23.00466f, 53.81127f, 75.12293f },
	{ 76.01396f, 53.81127f, 75.12293f },
	{ 76.01376f, 53.81127f, 25.04087f },
	{ 76.01388f, 4.398546f, 25.04099f },
	{ 76.01382f, 53.81127f, -25.04095f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000190C4[] = {
	{ -0.904413f, 0.399059f, -0.150962f },
	{ -0.962956f, 0.207903f, -0.171731f },
	{ -0.924536f, 0.186596f, -0.332289f },
	{ -0.869117f, 0.383485f, -0.31237f },
	{ 0.384217f, 0.688772f, 0.6147929f },
	{ 0.7960179f, 0.511897f, 0.322979f },
	{ -0.397903f, 0.689339f, 0.60538f },
	{ -0.793246f, 0.520488f, 0.315995f },
	{ -0.962956f, 0.207903f, 0.171731f },
	{ -0.904413f, 0.399059f, 0.150962f },
	{ -0.869117f, 0.383485f, 0.31237f },
	{ -0.924536f, 0.186596f, 0.332289f },
	{ 0.384217f, 0.688772f, -0.6147929f },
	{ 0.7960179f, 0.511897f, -0.322979f },
	{ -0.397903f, 0.689339f, -0.605379f },
	{ -0.195632f, 0.957788f, 0.210642f },
	{ 0.217611f, 0.9481429f, 0.231668f },
	{ -0.195632f, 0.957788f, -0.210643f },
	{ 0.217611f, 0.9481429f, -0.231668f },
	{ -0.8026029f, 0.596486f, -0.005768f },
	{ -0.494025f, 0.801672f, 0.336543f },
	{ 0.468127f, 0.414929f, 0.780186f },
	{ 0.546743f, 0.663213f, 0.511097f },
	{ -0.8026029f, 0.596486f, 0.005768f },
	{ -0.494025f, 0.801672f, -0.336543f },
	{ 0.468127f, 0.414929f, -0.780186f },
	{ 0.546743f, 0.663213f, -0.511097f },
	{ 0, 1, 0 },
	{ -0.618657f, 0.434141f, 0.654817f },
	{ -0.618657f, 0.434143f, -0.654816f },
	{ 0, 1, 0 },
	{ -0.609778f, 0.460005f, -0.6454189f },
	{ -0.7064829f, 0.604967f, -0.367283f },
	{ -0.800212f, 0.348072f, 0.488372f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0001925C = { vertex_00018F2C, normal_000190C4, LengthOfArray<Sint32>(vertex_00018F2C), meshlist_00018E6C, matlist_00018B98, LengthOfArray<Uint16>(meshlist_00018E6C), LengthOfArray<Uint16>(matlist_00018B98), { -12.5f, 18.90629f, 0 }, 116.0956f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00019284 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0001925C, 162.6778f, 15.9906f, -0.006981f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000192B8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_ONE },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000192F4[] = {
	4, 3, 2, 1, 0,
	4, 7, 3, 5, 1,
	4, 6, 7, 4, 5,
	4, 2, 6, 0, 4
};

extern "C" __declspec(dllexport) Sint16 poly_0001931C[] = {
	4, 1, 0, 5, 4
};

extern "C" __declspec(dllexport) Sint16 poly_00019326[] = {
	4, 7, 6, 3, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_00019330[] = {
	{ 0, 2550 },
	{ 0 },
	{ 255, 2032 },
	{ 252, 528 },
	{ 0, 2550 },
	{ 0 },
	{ 255, 2006 },
	{ 255, 526 },
	{ 0 },
	{ 0, 2550 },
	{ 252, 528 },
	{ 255, 2032 },
	{ 0 },
	{ 0, 2550 },
	{ 252, 526 },
	{ 252, 2006 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00019370[] = {
	{ 0, 255 },
	{ 0, -254 },
	{ 510, 255 },
	{ 510, -254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00019380[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000192F4, NULL, NULL, NULL, uv_00019330, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0001931C, NULL, NULL, NULL, uv_00019370, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00019326, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000193C8[] = {
	{ -29.79753f, 0.63696f, -29.41437f },
	{ -29.79753f, 0.549103f, 29.55993f },
	{ -50.67365f, 10.5491f, -50.15066f },
	{ -50.67365f, 10.5491f, 49.84934f },
	{ 28.81054f, 0.63696f, -29.41437f },
	{ 28.81054f, 0.549103f, 29.55993f },
	{ 50.32643f, 10.5491f, -50.15066f },
	{ 50.32643f, 10.5491f, 49.84934f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00019428[] = {
	{ -0.168746f, -0.971012f, -0.169292f },
	{ -0.168182f, -0.970397f, 0.173332f },
	{ -0.7050239f, 0.12029f, -0.698907f },
	{ -0.7053019f, 0.120645f, 0.6985649f },
	{ 0.161927f, -0.972042f, -0.17004f },
	{ 0.161387f, -0.971413f, 0.174099f },
	{ 0.704983f, 0.116155f, -0.699648f },
	{ 0.705266f, 0.116496f, 0.699305f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00019488 = { vertex_000193C8, normal_00019428, LengthOfArray<Sint32>(vertex_000193C8), meshlist_00019380, matlist_000192B8, LengthOfArray<Uint16>(meshlist_00019380), LengthOfArray<Uint16>(matlist_000192B8), { -0.173611f, 5.549103f, -0.150658f }, 71.06514f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000194B0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00019488, -9.992093f, 308.4322f, -0.022932f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000194E4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0001950C[] = {
	4, 3, 2, 1, 0,
	4, 7, 3, 5, 1,
	4, 6, 7, 4, 5,
	4, 2, 6, 0, 4,
	4, 9, 8, 3, 2,
	4, 11, 9, 7, 3,
	4, 10, 11, 6, 7,
	4, 8, 10, 2, 6,
	4, 14, 15, 10, 11,
	4, 12, 14, 8, 10,
	4, 13, 12, 9, 8,
	4, 15, 13, 11, 9
};

extern "C" __declspec(dllexport) Sint16 poly_00019584[] = {
	4, 1, 0, 5, 4,
	4, 15, 14, 13, 12
};

extern "C" __declspec(dllexport) NJS_TEX uv_00019598[] = {
	{ 0, 7 },
	{ 0, 239 },
	{ 255, 7 },
	{ 255, 239 },
	{ 0, 7 },
	{ 0, 239 },
	{ 255, 7 },
	{ 255, 239 },
	{ 0, 7 },
	{ 0, 239 },
	{ 255, 7 },
	{ 255, 239 },
	{ 0, 7 },
	{ 0, 239 },
	{ 255, 7 },
	{ 255, 239 },
	{ 0, 7 },
	{ 0, 239 },
	{ 255, 7 },
	{ 255, 239 },
	{ 0, 7 },
	{ 0, 239 },
	{ 255, 7 },
	{ 255, 239 },
	{ 0, 7 },
	{ 0, 239 },
	{ 255, 7 },
	{ 255, 239 },
	{ 0, 7 },
	{ 0, 239 },
	{ 255, 7 },
	{ 255, 239 },
	{ 0, 7 },
	{ 0, 239 },
	{ 255, 7 },
	{ 255, 239 },
	{ 0, 7 },
	{ 0, 239 },
	{ 255, 7 },
	{ 255, 239 },
	{ 0, 7 },
	{ 0, 239 },
	{ 255, 7 },
	{ 255, 239 },
	{ 0, 7 },
	{ 0, 239 },
	{ 255, 7 },
	{ 255, 239 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00019658[] = {
	{ NJD_MESHSET_TRIMESH | 0, 12, poly_0001950C, NULL, NULL, NULL, uv_00019598, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00019584, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00019688[] = {
	{ -3.98494f, -26.49624f, -13.33257f },
	{ -3.98494f, -26.49624f, -9.332568f },
	{ -3.98494f, 2.003754f, -13.33257f },
	{ -3.98494f, -1.496246f, -9.332568f },
	{ 6.015076f, -26.49624f, -13.33257f },
	{ 6.015076f, -26.49624f, -9.332568f },
	{ 6.015076f, 2.003754f, -13.33257f },
	{ 6.015076f, -1.496246f, -9.332568f },
	{ -3.98494f, 17.00375f, 2.667431f },
	{ -3.98494f, 10.50375f, 2.667431f },
	{ 6.015076f, 17.00375f, 2.667431f },
	{ 6.015076f, 10.50375f, 2.667431f },
	{ -3.98494f, 21.50375f, 27.16743f },
	{ -3.98494f, 15.00375f, 27.16743f },
	{ 6.015076f, 21.50375f, 27.16743f },
	{ 6.015076f, 15.00375f, 27.16743f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00019748[] = {
	{ -0.57735f, -0.57735f, -0.57735f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ -0.627621f, 0.309484f, -0.714361f },
	{ -0.804186f, -0.227458f, 0.5491329f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.627621f, 0.309484f, -0.714361f },
	{ 0.804186f, -0.227458f, 0.5491329f },
	{ -0.648823f, 0.679323f, -0.342854f },
	{ -0.7805369f, -0.553448f, 0.290614f },
	{ 0.648823f, 0.679323f, -0.342854f },
	{ 0.7805369f, -0.553448f, 0.290614f },
	{ -0.568395f, 0.632145f, 0.526611f },
	{ -0.587509f, -0.5179459f, 0.621744f },
	{ 0.568395f, 0.632145f, 0.526611f },
	{ 0.587509f, -0.5179459f, 0.621744f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00019808 = { vertex_00019688, normal_00019748, LengthOfArray<Sint32>(vertex_00019688), meshlist_00019658, matlist_000194E4, LengthOfArray<Uint16>(meshlist_00019658), LengthOfArray<Uint16>(matlist_000194E4), { 1.015068f, -2.496246f, 6.917429f }, 31.40163f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00019830 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00019808, -56.18084f, 267, 63.65898f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00019864[] = {
	{ { 0x99FFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00019878[] = {
	0x8000u | 8, 5, 2, 4, 1, 6, 7, 3, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001988C[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 22 },
	{ 0, 22 },
	{ 255, 100 },
	{ 0, 100 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000198AC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00019878, NULL, NULL, NULL, uv_0001988C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000198C4[] = {
	{ 770.7365f, -16.15327f, -1307.835f },
	{ 770.7365f, 24.34672f, -1293.835f },
	{ 770.7365f, 28.34672f, -1261.07f },
	{ 850.7367f, -16.15327f, -1307.835f },
	{ 850.7367f, 24.34672f, -1293.835f },
	{ 850.7367f, 28.34672f, -1261.07f },
	{ 850.7367f, 10.84672f, -1307.835f },
	{ 770.7365f, 10.84672f, -1307.835f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00019924[] = {
	{ 0, 0, -1 },
	{ 0, 0.902891f, -0.42987f },
	{ 0, 0.9926299f, -0.121181f },
	{ 0, 0, -1 },
	{ 0, 0.902891f, -0.42987f },
	{ 0, 0.9926299f, -0.121181f },
	{ 0, 0.391066f, -0.9203629f },
	{ 0, 0.391066f, -0.9203629f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00019984 = { vertex_000198C4, normal_00019924, LengthOfArray<Sint32>(vertex_000198C4), meshlist_000198AC, matlist_00019864, LengthOfArray<Uint16>(meshlist_000198AC), LengthOfArray<Uint16>(matlist_00019864), { 810.7366f, 6.096725f, -1284.453f }, 46.33305f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000199AC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00019984, -821.4025f, 256.6572f, 1360.161f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000199E0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00019A08[] = {
	4, 3, 2, 1, 0,
	4, 7, 3, 5, 1,
	4, 6, 7, 4, 5,
	4, 2, 6, 0, 4,
	4, 9, 8, 3, 2,
	4, 11, 9, 7, 3,
	4, 10, 11, 6, 7,
	4, 8, 10, 2, 6,
	4, 14, 15, 10, 11,
	4, 12, 14, 8, 10,
	4, 13, 12, 9, 8,
	4, 15, 13, 11, 9
};

extern "C" __declspec(dllexport) Sint16 poly_00019A80[] = {
	4, 1, 0, 5, 4,
	4, 15, 14, 13, 12
};

extern "C" __declspec(dllexport) NJS_TEX uv_00019A94[] = {
	{ 0, 11 },
	{ 0, 243 },
	{ 255, 11 },
	{ 255, 243 },
	{ 0, 11 },
	{ 0, 243 },
	{ 255, 11 },
	{ 255, 243 },
	{ 0, 11 },
	{ 0, 243 },
	{ 255, 11 },
	{ 255, 243 },
	{ 0, 11 },
	{ 0, 243 },
	{ 255, 11 },
	{ 255, 243 },
	{ 0, 11 },
	{ 0, 243 },
	{ 255, 11 },
	{ 255, 243 },
	{ 0, 11 },
	{ 0, 243 },
	{ 255, 11 },
	{ 255, 243 },
	{ 0, 11 },
	{ 0, 243 },
	{ 255, 11 },
	{ 255, 243 },
	{ 0, 11 },
	{ 0, 243 },
	{ 255, 11 },
	{ 255, 243 },
	{ 0, 11 },
	{ 0, 243 },
	{ 255, 11 },
	{ 255, 243 },
	{ 0, 11 },
	{ 0, 243 },
	{ 255, 11 },
	{ 255, 243 },
	{ 0, 11 },
	{ 0, 243 },
	{ 255, 11 },
	{ 255, 243 },
	{ 0, 11 },
	{ 0, 243 },
	{ 255, 11 },
	{ 255, 243 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00019B54[] = {
	{ NJD_MESHSET_TRIMESH | 0, 12, poly_00019A08, NULL, NULL, NULL, uv_00019A94, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00019A80, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00019B84[] = {
	{ -3.984932f, -26.49624f, -13.33257f },
	{ -3.984932f, -26.49624f, -9.332568f },
	{ -3.984932f, 2.003754f, -13.33257f },
	{ -3.984932f, -1.496246f, -9.332568f },
	{ 6.015083f, -26.49624f, -13.33257f },
	{ 6.015083f, -26.49624f, -9.332568f },
	{ 6.015083f, 2.003754f, -13.33257f },
	{ 6.015083f, -1.496246f, -9.332568f },
	{ -3.984932f, 17.00375f, 2.667431f },
	{ -3.984932f, 10.50375f, 2.667431f },
	{ 6.015083f, 17.00375f, 2.667431f },
	{ 6.015083f, 10.50375f, 2.667431f },
	{ -3.984932f, 21.50375f, 35.93865f },
	{ -3.984932f, 15.00375f, 35.93865f },
	{ 6.015083f, 21.50375f, 35.93865f },
	{ 6.015083f, 15.00375f, 35.93865f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00019C44[] = {
	{ -0.57735f, -0.57735f, -0.57735f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ -0.627621f, 0.309484f, -0.714361f },
	{ -0.804186f, -0.227458f, 0.5491329f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.627621f, 0.309484f, -0.714361f },
	{ 0.804186f, -0.227458f, 0.5491329f },
	{ -0.6445709f, 0.690483f, -0.328272f },
	{ -0.786642f, -0.5532539f, 0.274052f },
	{ 0.6445709f, 0.690483f, -0.328272f },
	{ 0.786642f, -0.5532539f, 0.274052f },
	{ -0.570608f, 0.6183839f, 0.540377f },
	{ -0.584751f, -0.53379f, 0.610847f },
	{ 0.570608f, 0.6183839f, 0.540377f },
	{ 0.584751f, -0.53379f, 0.610847f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00019D04 = { vertex_00019B84, normal_00019C44, LengthOfArray<Sint32>(vertex_00019B84), meshlist_00019B54, matlist_000199E0, LengthOfArray<Uint16>(meshlist_00019B54), LengthOfArray<Uint16>(matlist_000199E0), { 1.015076f, -2.496246f, 11.30304f }, 34.3935f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00019D2C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00019D04, 32.95586f, 267, 63.65898f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00019D60[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 24, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 36, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00019D88[] = {
	3, 15, 11, 10,
	3, 12, 13, 9,
	4, 2, 6, 3, 7,
	3, 10, 14, 15,
	3, 9, 8, 12,
	4, 4, 5, 0, 1
};

extern "C" __declspec(dllexport) Sint16 poly_00019DBC[] = {
	4, 6, 2, 5, 1,
	4, 5, 4, 9, 8,
	4, 7, 6, 11, 10,
	4, 14, 10, 13, 9
};

extern "C" __declspec(dllexport) NJS_TEX uv_00019DE4[] = {
	{ 117, 253 },
	{ 1, 253 },
	{ 1, 13 },
	{ 1, 253 },
	{ 117, 253 },
	{ 1, 13 },
	{ 1, 253 },
	{ 1, 13 },
	{ 117, 253 },
	{ 1, 253 },
	{ 1, 13 },
	{ 117, 253 },
	{ 1, 253 },
	{ 1, 13 },
	{ 1, 253 },
	{ 117, 253 },
	{ 1, 253 },
	{ 1, 13 },
	{ 117, 253 },
	{ 1, 253 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00019E34[] = {
	{ 510, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 },
	{ 7, 0 },
	{ 0, 255 },
	{ 502, 0 },
	{ 510, 255 },
	{ 0, 255 },
	{ 7, 0 },
	{ 508, 255 },
	{ 502, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00019E74[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_00019D88, NULL, NULL, NULL, uv_00019DE4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_00019DBC, NULL, NULL, NULL, uv_00019E34, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00019EA4[] = {
	{ -100, 0, -106.3534f },
	{ -99.99998f, 0, -56.35353f },
	{ -100, 0, 42.64656f },
	{ -100, 0, 92.64648f },
	{ -50, 0, -106.3534f },
	{ -48.50001f, 18.98649f, -56.35353f },
	{ -48.5f, 18.98649f, 42.64656f },
	{ -50.00001f, 0, 92.64648f },
	{ 50, 0, -106.3534f },
	{ 48.49999f, 18.98649f, -56.35353f },
	{ 48.5f, 18.98649f, 42.64656f },
	{ 49.99999f, 0, 92.64648f },
	{ 100, 0, -106.3534f },
	{ 100, 0, -56.35353f },
	{ 99.99998f, 0, 42.64656f },
	{ 99.99997f, 0, 92.64648f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00019F64[] = {
	{ 0.181544f, -0.966748f, 0.180113f },
	{ 0.345911f, -0.938267f, 0 },
	{ 0.345911f, -0.938267f, 0 },
	{ 0.181544f, -0.966748f, -0.180113f },
	{ 0, -0.934867f, 0.354998f },
	{ 0.177461f, -0.966716f, 0.184306f },
	{ 0.177461f, -0.966716f, -0.184306f },
	{ 0, -0.934867f, -0.354998f },
	{ 0, -0.934867f, 0.354998f },
	{ -0.177461f, -0.966715f, 0.184306f },
	{ -0.177461f, -0.966715f, -0.184306f },
	{ 0, -0.934867f, -0.354998f },
	{ -0.181544f, -0.966748f, 0.180113f },
	{ -0.345911f, -0.938267f, 0 },
	{ -0.345911f, -0.938267f, 0 },
	{ -0.181544f, -0.966748f, -0.180113f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0001A024 = { vertex_00019EA4, normal_00019F64, LengthOfArray<Sint32>(vertex_00019EA4), meshlist_00019E74, matlist_00019D60, LengthOfArray<Uint16>(meshlist_00019E74), LengthOfArray<Uint16>(matlist_00019D60), { -0.00004f, 9.493246f, -6.853485f }, 141.0682f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0001A04C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0001A024, -9.999991f, 299.9741f, 6.353487f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0001A080[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 41, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 37, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0001A0D0[] = {
	0x8000u | 34, 1, 22, 20, 21, 24, 25, 2, 0, 11, 10, 8, 9, 13, 12, 6, 4, 28, 29, 27, 26, 31, 30, 7, 5, 16, 17, 14, 15, 18, 19, 3, 1, 23, 20
};

extern "C" __declspec(dllexport) Sint16 poly_0001A116[] = {
	4, 13, 39, 6, 28,
	4, 8, 36, 13, 39,
	4, 11, 33, 8, 36,
	4, 2, 24, 11, 33
};

extern "C" __declspec(dllexport) Sint16 poly_0001A13E[] = {
	4, 18, 34, 3, 23
};

extern "C" __declspec(dllexport) Sint16 poly_0001A148[] = {
	4, 14, 37, 18, 34,
	4, 16, 40, 14, 37,
	4, 7, 31, 16, 40,
	4, 31, 27, 40, 38,
	4, 40, 38, 37, 35,
	4, 37, 35, 34, 32,
	4, 34, 32, 23, 20,
	4, 32, 33, 20, 24,
	4, 35, 36, 32, 33,
	4, 38, 39, 35, 36,
	4, 27, 28, 38, 39
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001A1B8[] = {
	{ 510, -254 },
	{ 0, -254 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -254 },
	{ 0, -254 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -254 },
	{ 0, -254 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -254 },
	{ 0, -254 },
	{ 510, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001A1F8[] = {
	{ 999, -765 },
	{ 999, 255 },
	{ 0, -765 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001A208[] = {
	{ 1020, -765 },
	{ 1020, 255 },
	{ 0, -765 },
	{ 0, 255 },
	{ 1020, -765 },
	{ 1020, 255 },
	{ 0, -765 },
	{ 0, 255 },
	{ 1020, -765 },
	{ 1020, 255 },
	{ 0, -765 },
	{ 0, 255 },
	{ 1020, -765 },
	{ 1020, 255 },
	{ 0, -765 },
	{ 0, 255 },
	{ 1020, -765 },
	{ 1020, 255 },
	{ 0, -765 },
	{ 0, 255 },
	{ 1020, -765 },
	{ 1020, 255 },
	{ 0, -765 },
	{ 0, 255 },
	{ 1020, -765 },
	{ 1020, 255 },
	{ 0, -765 },
	{ 0, 255 },
	{ 1020, -765 },
	{ 1020, 255 },
	{ 0, -765 },
	{ 0, 255 },
	{ 1020, -765 },
	{ 1020, 255 },
	{ 0, -765 },
	{ 0, 255 },
	{ 1020, -765 },
	{ 1020, 255 },
	{ 0, -765 },
	{ 0, 255 },
	{ 1020, -765 },
	{ 1020, 255 },
	{ 0, -765 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0001A2B8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0001A0D0, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_0001A116, NULL, NULL, NULL, uv_0001A1B8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0001A13E, NULL, NULL, NULL, uv_0001A1F8, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 11, poly_0001A148, NULL, NULL, NULL, uv_0001A208, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0001A318[] = {
	{ -114.6657f, 0.00375f, -100.1736f },
	{ -114.6657f, 0.00375f, 99.82641f },
	{ -113.6657f, 1.00375f, -99.17358f },
	{ -113.6657f, 1.00375f, 98.82641f },
	{ 89.33435f, 0.00375f, -100.1736f },
	{ 89.33435f, 0.00375f, 99.82641f },
	{ 88.33435f, 1.00375f, -99.17358f },
	{ 88.33435f, 1.00375f, 98.82641f },
	{ -13.66577f, 1.00375f, -99.17358f },
	{ -13.66577f, 0.00375f, -100.1736f },
	{ -64.50005f, 0.00375f, -100.1736f },
	{ -64.00005f, 1.00375f, -99.17358f },
	{ 35.83435f, 0.00375f, -100.1736f },
	{ 35.33435f, 1.00375f, -99.17358f },
	{ -13.66577f, 1.00375f, 98.82641f },
	{ -13.66577f, 0.00375f, 99.82641f },
	{ 35.33435f, 1.00375f, 98.82641f },
	{ 35.83435f, 0.00375f, 99.82641f },
	{ -64.00005f, 1.00375f, 98.82641f },
	{ -64.50005f, 0.00375f, 99.82641f },
	{ -113.6657f, 1.00375f, -0.173584f },
	{ -114.6657f, 0.00375f, -0.173584f },
	{ -114.6657f, 0.00375f, 50.32641f },
	{ -113.6657f, 1.00375f, 49.82641f },
	{ -113.6657f, 1.00375f, -50.17358f },
	{ -114.6657f, 0.00375f, -50.67358f },
	{ 89.33435f, 0.00375f, -0.173584f },
	{ 88.33435f, 1.00375f, -0.173584f },
	{ 88.33435f, 1.00375f, -50.17358f },
	{ 89.33435f, 0.00375f, -50.67358f },
	{ 89.33435f, 0.00375f, 50.32641f },
	{ 88.33435f, 1.00375f, 49.82641f },
	{ -64.00005f, 1.00375f, -0.173584f },
	{ -64.00005f, 1.00375f, -50.17358f },
	{ -64.00005f, 1.00375f, 49.82641f },
	{ -13.66577f, 1.00375f, -0.173584f },
	{ -13.66577f, 1.00375f, -50.17358f },
	{ -13.66577f, 1.00375f, 49.82641f },
	{ 35.33435f, 1.00375f, -0.173584f },
	{ 35.33435f, 1.00375f, -50.17358f },
	{ 35.33435f, 1.00375f, 49.82641f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0001A504[] = {
	{ -0.408248f, 0.816497f, -0.408248f },
	{ -0.408248f, 0.816497f, 0.408248f },
	{ -0.300194f, 0.90541f, -0.300194f },
	{ -0.300194f, 0.90541f, 0.300194f },
	{ 0.408248f, 0.816497f, -0.408248f },
	{ 0.408248f, 0.816497f, 0.408248f },
	{ 0.300194f, 0.90541f, -0.300194f },
	{ 0.300194f, 0.90541f, 0.300194f },
	{ 0, 0.92388f, -0.382683f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.92388f, -0.382683f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.92388f, -0.382683f },
	{ 0, 0.92388f, 0.382683f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.92388f, 0.382683f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.92388f, 0.382683f },
	{ 0, 0.7071069f, 0.7071069f },
	{ -0.382683f, 0.92388f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.382683f, 0.92388f, 0 },
	{ -0.382683f, 0.92388f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.382683f, 0.92388f, 0 },
	{ 0.382683f, 0.92388f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.382683f, 0.92388f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0001A6F0 = { vertex_0001A318, normal_0001A504, LengthOfArray<Sint32>(vertex_0001A318), meshlist_0001A2B8, matlist_0001A080, LengthOfArray<Uint16>(meshlist_0001A2B8), LengthOfArray<Uint16>(matlist_0001A080), { -12.66568f, 0.50375f, -0.173584f }, 139.9288f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0001A718 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_BREAK, &attach_0001A6F0, 1.820554f, 0, 1.754601f, 0, 0, 0, 0.979601f, 1, 0.979601f, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0001A74C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0001A788[] = {
	4, 2, 3, 1, 0,
	4, 6, 7, 5, 4,
	4, 10, 11, 9, 8,
	4, 14, 15, 13, 12,
	4, 2, 1, 7, 4,
	4, 6, 5, 11, 8,
	4, 10, 9, 15, 12
};

extern "C" __declspec(dllexport) Sint16 poly_0001A7CE[] = {
	0x8000u | 6, 10, 22, 23, 21, 20, 2,
	0x8000u | 7, 10, 11, 22, 6, 21, 7, 2,
	0x8000u | 6, 8, 16, 17, 19, 18, 0,
	0x8000u | 7, 8, 9, 16, 12, 19, 13, 0,
	7, 8, 5, 17, 4, 18, 1, 0,
	7, 10, 15, 23, 14, 20, 3, 2
};

extern "C" __declspec(dllexport) Sint16 poly_0001A82A[] = {
	4, 0, 3, 13, 14
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001A834[] = {
	{ 0 },
	{ 1019, 0 },
	{ 0, 255 },
	{ 1019, 255 },
	{ 0 },
	{ 1019, 0 },
	{ 0, 255 },
	{ 1019, 255 },
	{ 0 },
	{ 1019, 0 },
	{ 0, 255 },
	{ 1019, 255 },
	{ 0 },
	{ 1019, 0 },
	{ 0, 255 },
	{ 1019, 255 },
	{ 0 },
	{ 1019, 0 },
	{ 0, 255 },
	{ 1019, 255 },
	{ 0 },
	{ 1019, 0 },
	{ 0, 255 },
	{ 1019, 255 },
	{ 0 },
	{ 1019, 0 },
	{ 0, 255 },
	{ 1019, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001A8A4[] = {
	{ 508, 232 },
	{ 486, -232 },
	{ 486, 232 },
	{ 22, -232 },
	{ 22, 232 },
	{ 0, -232 },
	{ 508, 232 },
	{ 508, -232 },
	{ 486, -232 },
	{ 486, -255 },
	{ 22, -232 },
	{ 22, -255 },
	{ 0, -232 },
	{ 508, -232 },
	{ 486, 232 },
	{ 486, -232 },
	{ 22, 232 },
	{ 22, -232 },
	{ 0, 232 },
	{ 508, -232 },
	{ 508, 232 },
	{ 486, 232 },
	{ 486, 254 },
	{ 22, 232 },
	{ 22, 254 },
	{ 0, 232 },
	{ 508, -232 },
	{ 486, -255 },
	{ 486, -232 },
	{ 22, -255 },
	{ 22, -232 },
	{ 0, -232 },
	{ 0, 232 },
	{ 508, 232 },
	{ 486, 254 },
	{ 486, 232 },
	{ 22, 254 },
	{ 22, 232 },
	{ 0, 232 },
	{ 0, -232 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001A944[] = {
	{ 0, 187 },
	{ 0 },
	{ 39, 187 },
	{ 39, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0001A954[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_0001A788, NULL, NULL, NULL, uv_0001A834, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_0001A7CE, NULL, NULL, NULL, uv_0001A8A4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0001A82A, NULL, NULL, NULL, uv_0001A944, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0001A99C[] = {
	{ -23.31323f, -8.246657f, -22.47117f },
	{ -23.31323f, -8.246657f, 19.52881f },
	{ -23.31323f, 11.75334f, 19.52881f },
	{ -23.31323f, 11.75334f, -22.47117f },
	{ -21.31335f, -8.246657f, 21.52881f },
	{ 20.68676f, -8.246657f, 21.52881f },
	{ 20.68676f, 11.75334f, 21.52881f },
	{ -21.31335f, 11.75334f, 21.52881f },
	{ 22.68676f, -8.246657f, 19.52881f },
	{ 22.68676f, -8.246657f, -22.47117f },
	{ 22.68676f, 11.75334f, -22.47117f },
	{ 22.68676f, 11.75334f, 19.52881f },
	{ 20.68676f, -8.246657f, -24.47117f },
	{ -21.31335f, -8.246657f, -24.47117f },
	{ -21.31335f, 11.75334f, -24.47117f },
	{ 20.68676f, 11.75334f, -24.47117f },
	{ 20.68676f, -10.24666f, -22.47117f },
	{ 20.68676f, -10.24666f, 19.52881f },
	{ -21.31335f, -10.24666f, 19.52881f },
	{ -21.31335f, -10.24666f, -22.47117f },
	{ -21.31335f, 13.75334f, -22.47117f },
	{ -21.31335f, 13.75334f, 19.52881f },
	{ 20.68676f, 13.75334f, 19.52881f },
	{ 20.68676f, 13.75334f, -22.47117f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0001AABC[] = {
	{ -0.875587f, -0.341575f, -0.341575f },
	{ -0.875587f, -0.341575f, 0.341575f },
	{ -0.875587f, 0.341575f, 0.341575f },
	{ -0.875587f, 0.341575f, -0.341575f },
	{ -0.341598f, -0.341584f, 0.875574f },
	{ 0.341586f, -0.341586f, 0.875579f },
	{ 0.341586f, 0.341586f, 0.875579f },
	{ -0.341598f, 0.341584f, 0.875574f },
	{ 0.875579f, -0.341586f, 0.341586f },
	{ 0.875579f, -0.341586f, -0.341586f },
	{ 0.875579f, 0.341586f, -0.341586f },
	{ 0.875579f, 0.341586f, 0.341586f },
	{ 0.341586f, -0.341586f, -0.875579f },
	{ -0.341598f, -0.341584f, -0.875574f },
	{ -0.341598f, 0.341584f, -0.875574f },
	{ 0.341586f, 0.341586f, -0.875579f },
	{ 0.341586f, -0.875579f, -0.341586f },
	{ 0.341586f, -0.875579f, 0.341586f },
	{ -0.341598f, -0.875574f, 0.341584f },
	{ -0.341598f, -0.875574f, -0.341584f },
	{ -0.341598f, 0.875574f, -0.341584f },
	{ -0.341598f, 0.875574f, 0.341584f },
	{ 0.341586f, 0.875579f, 0.341586f },
	{ 0.341586f, 0.875579f, -0.341586f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0001ABDC = { vertex_0001A99C, normal_0001AABC, LengthOfArray<Sint32>(vertex_0001A99C), meshlist_0001A954, matlist_0001A74C, LengthOfArray<Uint16>(meshlist_0001A954), LengthOfArray<Uint16>(matlist_0001A74C), { -0.313235f, 1.753342f, -1.471179f }, 32.52691f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0001AC04 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0001ABDC, 66.64758f, 226.3074f, 68.79758f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0001AC38[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0001AC74[] = {
	4, 5, 15, 4, 14,
	16, 15, 5, 22, 23, 21, 9, 11, 1, 10, 0, 20, 8, 19, 18, 14, 4
};

extern "C" __declspec(dllexport) Sint16 poly_0001ACA0[] = {
	4, 13, 3, 12, 2,
	4, 7, 17, 6, 16,
	4, 3, 13, 21, 22,
	4, 12, 2, 19, 20,
	4, 17, 7, 23, 9,
	4, 6, 16, 8, 18
};

extern "C" __declspec(dllexport) Sint16 poly_0001ACDC[] = {
	6, 9, 7, 1, 6, 0, 8,
	6, 21, 11, 3, 10, 2, 20,
	6, 23, 5, 17, 4, 16, 18,
	6, 22, 13, 15, 12, 14, 19
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001AD14[] = {
	{ 255, 0 },
	{ -255, 0 },
	{ 255, 0 },
	{ -255, 0 },
	{ -255, 2040 },
	{ 255, 2040 },
	{ -255, 1960 },
	{ 255, 1960 },
	{ -255, 58 },
	{ 255, 58 },
	{ -255, 0 },
	{ 255, 0 },
	{ -255, 0 },
	{ 255, 0 },
	{ -255, 58 },
	{ 255, 58 },
	{ -255, 1960 },
	{ 255, 1960 },
	{ -255, 2040 },
	{ 255, 2040 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001AD64[] = {
	{ 2024, 213 },
	{ 15, 213 },
	{ 2024, 161 },
	{ 15, 161 },
	{ 15, 161 },
	{ 2024, 161 },
	{ 15, 253 },
	{ 2024, 253 },
	{ 2024, 213 },
	{ 15, 213 },
	{ 2024, 161 },
	{ 15, 161 },
	{ 2024, 213 },
	{ 15, 213 },
	{ 2024, 161 },
	{ 15, 161 },
	{ 2024, 213 },
	{ 15, 213 },
	{ 2024, 161 },
	{ 15, 161 },
	{ 2024, 213 },
	{ 15, 213 },
	{ 2024, 161 },
	{ 15, 161 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001ADC4[] = {
	{ 7, 0 },
	{ 7, 84 },
	{ 0 },
	{ 7, 255 },
	{ 0, 255 },
	{ 7, 255 },
	{ 7, 0 },
	{ 0 },
	{ 7, 84 },
	{ 0, 255 },
	{ 7, 255 },
	{ 7, 255 },
	{ 245, 0 },
	{ 255, 0 },
	{ 245, 84 },
	{ 255, 255 },
	{ 245, 255 },
	{ 245, 255 },
	{ 245, 0 },
	{ 245, 84 },
	{ 255, 0 },
	{ 245, 255 },
	{ 255, 255 },
	{ 245, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0001AE24[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0001AC74, NULL, NULL, NULL, uv_0001AD14, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_0001ACA0, NULL, NULL, NULL, uv_0001AD64, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_0001ACDC, NULL, NULL, NULL, uv_0001ADC4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0001AE6C[] = {
	{ -60.66552f, 2.003723f, 15.83958f },
	{ -60.66552f, 5.003723f, 15.83958f },
	{ -57.66552f, 2.003723f, 56.83957f },
	{ -57.66552f, 4.003723f, 56.83957f },
	{ 43.33447f, 2.003723f, 15.83958f },
	{ 43.33447f, 5.003723f, 15.83958f },
	{ -57.66552f, 2.003723f, 11.83958f },
	{ -57.66552f, 4.003723f, 11.83958f },
	{ -57.66552f, 2.003723f, 15.83958f },
	{ -57.66552f, 5.003723f, 15.83958f },
	{ -60.66552f, 2.003723f, 52.83957f },
	{ -60.66552f, 5.003723f, 52.83957f },
	{ 39.33447f, 2.003723f, 56.83957f },
	{ 39.33447f, 4.003723f, 56.83957f },
	{ 43.33447f, 2.003723f, 52.83957f },
	{ 43.33447f, 5.003723f, 52.83957f },
	{ 39.33447f, 2.003723f, 11.83958f },
	{ 39.33447f, 4.003723f, 11.83958f },
	{ 39.33447f, 2.003723f, 15.83958f },
	{ 39.33447f, 2.003723f, 52.83957f },
	{ -57.66552f, 2.003723f, 52.83957f },
	{ -57.66552f, 5.003723f, 52.83957f },
	{ 39.33447f, 5.003723f, 52.83957f },
	{ 39.33447f, 5.003723f, 15.83958f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0001AF8C[] = {
	{ -0.7270629f, -0.642374f, -0.242354f },
	{ -0.70332f, 0.654564f, -0.277284f },
	{ -0.351257f, -0.618944f, 0.7025149f },
	{ -0.347458f, 0.5242079f, 0.777482f },
	{ 0.717284f, -0.630262f, -0.297109f },
	{ 0.697489f, 0.640129f, -0.322093f },
	{ -0.351257f, -0.618944f, -0.702514f },
	{ -0.347458f, 0.5242079f, -0.777482f },
	{ 0, -1, 0 },
	{ 0, 0.992508f, -0.122183f },
	{ -0.7270629f, -0.642374f, 0.242354f },
	{ -0.70332f, 0.654564f, 0.277284f },
	{ 0.297108f, -0.630262f, 0.717284f },
	{ 0.290483f, 0.534435f, 0.793725f },
	{ 0.717283f, -0.630262f, 0.297109f },
	{ 0.697489f, 0.640129f, 0.322093f },
	{ 0.297109f, -0.630262f, -0.717284f },
	{ 0.290483f, 0.534435f, -0.793725f },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, 0.992508f, 0.122183f },
	{ 0, 0.992508f, 0.122183f },
	{ 0, 0.992508f, -0.122183f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0001B0AC = { vertex_0001AE6C, normal_0001AF8C, LengthOfArray<Sint32>(vertex_0001AE6C), meshlist_0001AE24, matlist_0001AC38, LengthOfArray<Uint16>(meshlist_0001AE24), LengthOfArray<Uint16>(matlist_0001AC38), { -8.665526f, 3.503723f, 34.33958f }, 56.65906f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0001B0D4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0001B0AC, 0, 235, 33.48683f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0001B108[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0001B144[] = {
	4, 7, 6, 3, 2
};

extern "C" __declspec(dllexport) Sint16 poly_0001B14E[] = {
	4, 7, 3, 5, 1,
	0x8000u | 5, 5, 4, 0, 6, 2,
	3, 5, 1, 0
};

extern "C" __declspec(dllexport) Sint16 poly_0001B16C[] = {
	4, 6, 7, 4, 5
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001B178[] = {
	{ 255, -80 },
	{ 255, 254 },
	{ 0, -80 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001B188[] = {
	{ 510, -861 },
	{ 0, -861 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -1131 },
	{ 510, 254 },
	{ 0, 254 },
	{ 510, -861 },
	{ 0, -861 },
	{ 510, -1131 },
	{ 0, -1131 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001B1B8[] = {
	{ 0, -302 },
	{ 693, -302 },
	{ 0, 255 },
	{ 693, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0001B1C8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0001B144, NULL, NULL, NULL, uv_0001B178, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_0001B14E, NULL, NULL, NULL, uv_0001B188, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0001B16C, NULL, NULL, NULL, uv_0001B1B8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0001B210[] = {
	{ -35.01321f, -23, -46.30878f },
	{ -35.01321f, -23, 24.00488f },
	{ -35.01321f, 19, -46.30878f },
	{ -35.01321f, 19, 24.00488f },
	{ 24.74937f, -23, -46.30878f },
	{ 24.74937f, -23, 24.00488f },
	{ 24.74937f, 19, -46.30878f },
	{ 24.74937f, 19, 24.00488f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0001B270[] = {
	{ 0, -0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0001B2D0 = { vertex_0001B210, normal_0001B270, LengthOfArray<Sint32>(vertex_0001B210), meshlist_0001B1C8, matlist_0001B108, LengthOfArray<Uint16>(meshlist_0001B1C8), LengthOfArray<Uint16>(matlist_0001B108), { -5.131922f, -2, -11.15195f }, 46.13995f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0001B2F8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0001B2D0, -75.77994f, 177.0038f, -53.67847f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0001B32C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 40, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0001B37C[] = {
	0x8000u | 5, 3, 0, 1, 8, 4,
	0x8000u | 5, 2, 9, 5, 6, 7
};

extern "C" __declspec(dllexport) Sint16 poly_0001B394[] = {
	4, 0, 8, 6, 9
};

extern "C" __declspec(dllexport) Sint16 poly_0001B39E[] = {
	4, 2, 9, 4, 8
};

extern "C" __declspec(dllexport) Sint16 poly_0001B3A8[] = {
	4, 4, 1, 2, 5
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001B3B4[] = {
	{ 510, -255 },
	{ 510, 255 },
	{ 46, -255 },
	{ 0, 255 },
	{ 0, -188 },
	{ 0, -188 },
	{ 0, 255 },
	{ 46, -255 },
	{ 510, 255 },
	{ 510, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001B3DC[] = {
	{ -510, 0 },
	{ 255, 0 },
	{ -510, 255 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001B3EC[] = {
	{ 255, -255 },
	{ 255, 255 },
	{ 0, -255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001B3FC[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0001B40C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0001B37C, NULL, NULL, NULL, uv_0001B3B4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0001B394, NULL, NULL, NULL, uv_0001B3DC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0001B39E, NULL, NULL, NULL, uv_0001B3EC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_0001B3A8, NULL, NULL, NULL, uv_0001B3FC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0001B46C[] = {
	{ -4.070068f, 110.2614f, -2.648296f },
	{ -4.070068f, 133.2614f, -22.64829f },
	{ 1.616943f, 130.2614f, -24.64829f },
	{ -4.070068f, 133.2614f, -2.648296f },
	{ -4.070068f, 130.2614f, -24.64829f },
	{ 1.616943f, 133.2614f, -22.64829f },
	{ 1.616943f, 110.2614f, -2.648296f },
	{ 1.616943f, 133.2614f, -2.648296f },
	{ -4.070068f, 110.2614f, -24.64829f },
	{ 1.616943f, 110.2614f, -24.64829f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0001B4E4[] = {
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.808601f, 0.326362f, -0.489544f },
	{ 0.6473269f, 0.220877f, -0.729508f },
	{ -1, 0, 0 },
	{ -0.6473269f, 0.220877f, -0.729508f },
	{ 0.808601f, 0.326362f, -0.489544f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 1, 0, 0 },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0001B55C = { vertex_0001B46C, normal_0001B4E4, LengthOfArray<Sint32>(vertex_0001B46C), meshlist_0001B40C, matlist_0001B32C, LengthOfArray<Uint16>(meshlist_0001B40C), LengthOfArray<Uint16>(matlist_0001B32C), { -1.226563f, 121.7614f, -13.6483f }, 15.91383f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0001B584 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0001B55C, -57.59571f, 103.7423f, 72.97471f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0001B5B8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0001B5E0[] = {
	3, 0, 1, 3,
	6, 5, 6, 7, 21, 2, 20,
	0x8000u | 7, 8, 11, 9, 10, 15, 23, 14,
	0x8000u | 5, 14, 13, 15, 12, 9,
	7, 20, 3, 2, 1, 7, 4, 5,
	0x8000u | 12, 8, 5, 11, 6, 22, 21, 23, 20, 14, 3, 13, 0,
	4, 11, 10, 22, 23
};

extern "C" __declspec(dllexport) Sint16 poly_0001B646[] = {
	0x8000u | 6, 1, 18, 0, 19, 13, 12,
	0x8000u | 6, 4, 5, 17, 8, 16, 9,
	0x8000u | 8, 1, 4, 18, 17, 19, 16, 12, 9
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001B674[] = {
	{ 44, 177 },
	{ 44, 177 },
	{ 44, 87 },
	{ 207, 177 },
	{ 207, 87 },
	{ 47, 87 },
	{ 47, 77 },
	{ 44, 87 },
	{ 47, 77 },
	{ 210, 177 },
	{ 210, 87 },
	{ 210, 177 },
	{ 210, 87 },
	{ 207, 87 },
	{ 207, 77 },
	{ 47, 87 },
	{ 47, 87 },
	{ 47, 177 },
	{ 207, 87 },
	{ 207, 177 },
	{ 210, 177 },
	{ 47, 77 },
	{ 44, 87 },
	{ 44, 87 },
	{ 44, 177 },
	{ 47, 87 },
	{ 47, 177 },
	{ 207, 177 },
	{ 210, 177 },
	{ 207, 177 },
	{ 210, 87 },
	{ 207, 87 },
	{ 207, 77 },
	{ 47, 77 },
	{ 207, 77 },
	{ 47, 77 },
	{ 47, 87 },
	{ 44, 87 },
	{ 47, 177 },
	{ 44, 177 },
	{ 210, 87 },
	{ 210, 87 },
	{ 207, 77 },
	{ 207, 77 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001B724[] = {
	{ 0, 25 },
	{ 19, 25 },
	{ 0, 229 },
	{ 19, 229 },
	{ 19, 255 },
	{ 1000, 255 },
	{ 19, 0 },
	{ 1000, 0 },
	{ 1000, 25 },
	{ 1020, 25 },
	{ 1000, 229 },
	{ 1020, 229 },
	{ 0, 25 },
	{ 19, 0 },
	{ 19, 25 },
	{ 1000, 25 },
	{ 19, 229 },
	{ 1000, 229 },
	{ 1000, 255 },
	{ 1020, 229 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0001B774[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_0001B5E0, NULL, NULL, NULL, uv_0001B674, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_0001B646, NULL, NULL, NULL, uv_0001B724, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0001B7A4[] = {
	{ -58.66577f, -9.996245f, 10.27529f },
	{ -58.66577f, -9.996245f, 26.27529f },
	{ -58.66577f, 9.003754f, 26.27529f },
	{ -58.66577f, 9.003754f, 10.27529f },
	{ -56.66577f, -9.996245f, 28.2753f },
	{ 41.33435f, -9.996245f, 28.2753f },
	{ 41.33435f, 9.003754f, 28.2753f },
	{ -56.66577f, 9.003754f, 28.2753f },
	{ 43.33435f, -9.996245f, 26.27529f },
	{ 43.33435f, -9.996245f, 10.27529f },
	{ 43.33435f, 9.003754f, 10.27529f },
	{ 43.33435f, 9.003754f, 26.27529f },
	{ 41.33435f, -9.996245f, 8.275294f },
	{ -56.66577f, -9.996245f, 8.275294f },
	{ -56.66577f, 9.003754f, 8.275294f },
	{ 41.33435f, 9.003754f, 8.275294f },
	{ 41.33435f, -11.99625f, 10.27529f },
	{ 41.33435f, -11.99625f, 26.27529f },
	{ -56.66577f, -11.99625f, 26.27529f },
	{ -56.66577f, -11.99625f, 10.27529f },
	{ -56.66577f, 11.00375f, 10.27529f },
	{ -56.66577f, 11.00375f, 26.27529f },
	{ 41.33435f, 11.00375f, 26.27529f },
	{ 41.33435f, 11.00375f, 10.27529f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0001B8C4[] = {
	{ -0.875579f, -0.341586f, -0.341586f },
	{ -0.875579f, -0.341586f, 0.341585f },
	{ -0.875579f, 0.341586f, 0.341585f },
	{ -0.875579f, 0.341586f, -0.341586f },
	{ -0.341587f, -0.341587f, 0.875578f },
	{ 0.341587f, -0.341587f, 0.875578f },
	{ 0.341587f, 0.341587f, 0.875578f },
	{ -0.341587f, 0.341587f, 0.875578f },
	{ 0.875579f, -0.341586f, 0.341585f },
	{ 0.875579f, -0.341586f, -0.341586f },
	{ 0.875579f, 0.341586f, -0.341586f },
	{ 0.875579f, 0.341586f, 0.341585f },
	{ 0.341586f, -0.341586f, -0.875579f },
	{ -0.341586f, -0.341586f, -0.875579f },
	{ -0.341586f, 0.341586f, -0.875579f },
	{ 0.341586f, 0.341586f, -0.875579f },
	{ 0.341586f, -0.875579f, -0.341586f },
	{ 0.341586f, -0.875579f, 0.341585f },
	{ -0.341586f, -0.875579f, 0.341585f },
	{ -0.341586f, -0.875579f, -0.341586f },
	{ -0.341586f, 0.875579f, -0.341586f },
	{ -0.341586f, 0.875579f, 0.341585f },
	{ 0.341586f, 0.875579f, 0.341585f },
	{ 0.341586f, 0.875579f, -0.341586f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0001B9E4 = { vertex_0001B7A4, normal_0001B8C4, LengthOfArray<Sint32>(vertex_0001B7A4), meshlist_0001B774, matlist_0001B5B8, LengthOfArray<Uint16>(meshlist_0001B774), LengthOfArray<Uint16>(matlist_0001B5B8), { -7.66571f, -0.496246f, 18.2753f }, 51.97121f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0001BA0C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0001B9E4, 0, 226, 62.05111f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0001BA40[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0001BA7C[] = {
	6, 15, 6, 4, 9, 5, 19,
	0x8000u | 5, 17, 0, 16, 1, 3,
	8, 15, 14, 6, 7, 9, 8, 19, 20
};

extern "C" __declspec(dllexport) Sint16 poly_0001BAA8[] = {
	0x8000u | 7, 14, 7, 10, 13, 11, 12, 2,
	0x8000u | 6, 2, 0, 11, 17, 10, 14,
	4, 4, 3, 15, 16,
	0x8000u | 7, 7, 8, 13, 20, 12, 18, 2
};

extern "C" __declspec(dllexport) Sint16 poly_0001BAE0[] = {
	4, 16, 17, 15, 14
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001BAEC[] = {
	{ 504, 255 },
	{ 500, 245 },
	{ 510, 246 },
	{ 500, 7 },
	{ 510, 8 },
	{ 496, 0 },
	{ 86, 255 },
	{ 81, 245 },
	{ 504, 255 },
	{ 500, 245 },
	{ 510, 246 },
	{ 504, 255 },
	{ 86, 255 },
	{ 500, 245 },
	{ 81, 245 },
	{ 500, 7 },
	{ 3, 7 },
	{ 496, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001BB38[] = {
	{ 242, 255 },
	{ 255, 245 },
	{ 242, 246 },
	{ 242, 8 },
	{ 12, 246 },
	{ 12, 8 },
	{ 0, 7 },
	{ 0, 7 },
	{ 0, 245 },
	{ 12, 246 },
	{ 12, 255 },
	{ 242, 246 },
	{ 242, 255 },
	{ 254, 246 },
	{ 0, 246 },
	{ 254, 255 },
	{ 0, 255 },
	{ 255, 245 },
	{ 255, 7 },
	{ 242, 8 },
	{ 242, 0 },
	{ 12, 8 },
	{ 12, 0 },
	{ 0, 7 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001BB98[] = {
	{ 0, -255 },
	{ 0, 254 },
	{ 508, -255 },
	{ 508, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0001BBA8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0001BA7C, NULL, NULL, NULL, uv_0001BAEC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_0001BAA8, NULL, NULL, NULL, uv_0001BB38, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0001BAE0, NULL, NULL, NULL, uv_0001BB98, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0001BBF0[] = {
	{ -21.66572f, -9.675002f, -19.76123f },
	{ -21.66572f, -9.675002f, 29.23877f },
	{ -21.66572f, 18.39989f, -28.88159f },
	{ -19.66578f, -9.84294f, 30.32642f },
	{ 16.33422f, -9.84294f, 30.32642f },
	{ 16.33422f, 18.23198f, 30.32642f },
	{ 18.33422f, -9.675002f, 29.23877f },
	{ 18.33422f, -9.675002f, -19.76123f },
	{ 18.33422f, 18.39989f, -28.88159f },
	{ 18.33422f, 18.39989f, 29.23877f },
	{ 16.33422f, -9.84294f, -20.68042f },
	{ -19.66578f, -9.84294f, -20.68042f },
	{ -19.66578f, 18.23198f, -29.80078f },
	{ 16.33422f, 18.23198f, -29.80078f },
	{ 16.33422f, -10.84709f, -19.17358f },
	{ 16.33422f, -10.84709f, 29.82642f },
	{ -19.66578f, -10.84709f, 29.82642f },
	{ -19.66578f, -10.84709f, -19.17358f },
	{ -19.66578f, 19.23613f, -29.30078f },
	{ 16.33422f, 19.23613f, 28.81958f },
	{ 16.33422f, 19.23613f, -29.30078f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0001BCEC[] = {
	{ -0.484923f, -0.6875539f, -0.540481f },
	{ -0.536117f, -0.824881f, 0.179304f },
	{ -0.422866f, -0.118341f, -0.898432f },
	{ -0.227337f, -0.434062f, 0.871727f },
	{ 0.321635f, -0.294968f, 0.899747f },
	{ 0.420409f, 0.367145f, 0.829735f },
	{ 0.809694f, -0.407114f, 0.422675f },
	{ 0.775176f, -0.496662f, -0.390422f },
	{ 0.7729599f, 0.381991f, -0.506573f },
	{ 0.7531019f, 0.487456f, 0.441842f },
	{ 0.191662f, -0.579825f, -0.791877f },
	{ -0.191668f, -0.579824f, -0.791876f },
	{ -0.20192f, 0.0624f, -0.977412f },
	{ 0.201914f, 0.062401f, -0.977413f },
	{ 0.222299f, -0.9409429f, -0.255362f },
	{ 0.262235f, -0.823194f, 0.503572f },
	{ -0.262241f, -0.823193f, 0.503571f },
	{ -0.222304f, -0.940942f, -0.255362f },
	{ -0.162099f, 0.439838f, -0.8833269f },
	{ 0.334689f, 0.91447f, 0.227439f },
	{ 0.268801f, 0.6829849f, -0.6791739f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0001BDE8 = { vertex_0001BBF0, normal_0001BCEC, LengthOfArray<Sint32>(vertex_0001BBF0), meshlist_0001BBA8, matlist_0001BA40, LengthOfArray<Uint16>(meshlist_0001BBA8), LengthOfArray<Uint16>(matlist_0001BA40), { -1.665747f, 4.194519f, 0.262821f }, 36.10843f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0001BE10 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0001BDE8, -79, 280.8396f, 70, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0001BE44[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 40, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 37, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0001BED0[] = {
	4, 3, 2, 1, 0,
	4, 6, 7, 4, 5,
	4, 1, 0, 5, 4,
	4, 11, 10, 9, 8,
	4, 9, 8, 13, 12
};

extern "C" __declspec(dllexport) Sint16 poly_0001BF02[] = {
	3, 1, 5, 3,
	6, 5, 7, 3, 6, 2, 0,
	3, 4, 0, 6,
	3, 9, 13, 11,
	0x8000u | 7, 12, 13, 15, 11, 14, 10, 8,
	4, 15, 12, 14, 8,
	4, 109, 108, 101, 100,
	3, 41, 45, 43,
	6, 45, 47, 43, 46, 42, 40,
	3, 44, 40, 46,
	6, 49, 51, 55, 50, 54, 52,
	3, 55, 53, 49,
	3, 50, 48, 52,
	4, 64, 66, 56, 58,
	4, 67, 65, 59, 57,
	4, 78, 76, 70, 68,
	4, 77, 79, 69, 71,
	4, 110, 111, 102, 103
};

extern "C" __declspec(dllexport) Sint16 poly_0001BFBA[] = {
	4, 111, 109, 103, 101,
	4, 101, 100, 103, 102,
	4, 111, 110, 109, 108,
	4, 108, 110, 100, 102
};

extern "C" __declspec(dllexport) Sint16 poly_0001BFE2[] = {
	4, 92, 88, 98, 96,
	4, 93, 92, 99, 98,
	4, 89, 93, 97, 99,
	4, 88, 89, 96, 97,
	10, 21, 19, 17, 18, 16, 22, 20, 23, 21, 19,
	4, 25, 24, 27, 26,
	4, 23, 22, 19, 18,
	4, 24, 25, 16, 17,
	4, 25, 27, 17, 21,
	4, 27, 26, 21, 20,
	4, 26, 24, 20, 16,
	10, 33, 31, 29, 30, 28, 34, 32, 35, 33, 31,
	4, 37, 36, 39, 38,
	4, 35, 34, 31, 30,
	4, 36, 37, 28, 29,
	4, 37, 39, 29, 33,
	4, 39, 38, 33, 32,
	4, 38, 36, 32, 28,
	10, 87, 81, 83, 80, 82, 84, 86, 85, 87, 81,
	4, 107, 106, 105, 104,
	4, 83, 82, 87, 86,
	4, 80, 81, 104, 105,
	4, 81, 85, 105, 107,
	4, 85, 84, 107, 106,
	4, 84, 80, 106, 104,
	10, 93, 94, 92, 90, 88, 91, 89, 95, 93, 94,
	4, 99, 98, 97, 96,
	4, 91, 90, 95, 94
};

extern "C" __declspec(dllexport) Sint16 poly_0001C12A[] = {
	4, 43, 42, 41, 40,
	4, 46, 47, 44, 45,
	4, 41, 40, 45, 44,
	4, 49, 48, 51, 50,
	4, 52, 53, 54, 55,
	4, 53, 52, 49, 48
};

extern "C" __declspec(dllexport) Sint16 poly_0001C166[] = {
	4, 67, 66, 65, 64,
	4, 66, 67, 58, 59,
	4, 65, 64, 57, 56,
	4, 77, 76, 79, 78,
	4, 79, 78, 71, 70,
	4, 76, 77, 68, 69
};

extern "C" __declspec(dllexport) Sint16 poly_0001C1A2[] = {
	4, 63, 59, 61, 57,
	4, 62, 63, 60, 61,
	4, 58, 62, 56, 60,
	4, 57, 56, 61, 60,
	4, 63, 62, 59, 58,
	4, 73, 69, 75, 71,
	4, 72, 73, 74, 75,
	4, 68, 72, 70, 74,
	4, 73, 72, 69, 68,
	4, 71, 70, 75, 74
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001C208[] = {
	{ 0 },
	{ 2550, 0 },
	{ 0, 254 },
	{ 2550, 254 },
	{ 0 },
	{ 2550, 0 },
	{ 0, 254 },
	{ 2550, 254 },
	{ 0 },
	{ 2550, 0 },
	{ 0, 254 },
	{ 2550, 254 },
	{ 0 },
	{ 2550, 0 },
	{ 0, 254 },
	{ 2550, 254 },
	{ 0 },
	{ 2550, 0 },
	{ 0, 254 },
	{ 2550, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001C258[] = {
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 1 },
	{ 1, 33 },
	{ 253, 1 },
	{ 253, 33 },
	{ 1, 1 },
	{ 1, 33 },
	{ 253, 1 },
	{ 253, 33 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001C298[] = {
	{ 65, 1 },
	{ 65, 125 },
	{ 1, 1 },
	{ 1, 125 },
	{ 65, 1 },
	{ 65, 125 },
	{ 1, 1 },
	{ 1, 125 },
	{ 65, 1 },
	{ 65, 125 },
	{ 1, 1 },
	{ 1, 125 },
	{ 65, 1 },
	{ 65, 125 },
	{ 1, 1 },
	{ 1, 125 },
	{ 233, 1 },
	{ 1, 125 },
	{ 233, 125 },
	{ 1, 1 },
	{ 233, 1 },
	{ 1, 125 },
	{ 233, 125 },
	{ 1, 1 },
	{ 233, 1 },
	{ 1, 125 },
	{ 85, 93 },
	{ 125, 93 },
	{ 85, 25 },
	{ 125, 25 },
	{ 85, 93 },
	{ 125, 93 },
	{ 85, 25 },
	{ 125, 25 },
	{ 1, 1 },
	{ 1, 125 },
	{ 69, 1 },
	{ 69, 125 },
	{ 1, 1 },
	{ 1, 125 },
	{ 69, 1 },
	{ 69, 125 },
	{ 1, 1 },
	{ 1, 125 },
	{ 69, 1 },
	{ 69, 125 },
	{ 1, 1 },
	{ 1, 125 },
	{ 69, 1 },
	{ 69, 125 },
	{ 237, 125 },
	{ 1, 1 },
	{ 237, 1 },
	{ 1, 125 },
	{ 237, 125 },
	{ 1, 1 },
	{ 237, 1 },
	{ 1, 125 },
	{ 237, 125 },
	{ 1, 1 },
	{ 85, 93 },
	{ 125, 93 },
	{ 85, 25 },
	{ 125, 25 },
	{ 85, 93 },
	{ 125, 93 },
	{ 85, 25 },
	{ 125, 25 },
	{ 1, 1 },
	{ 1, 125 },
	{ 69, 1 },
	{ 69, 125 },
	{ 1, 1 },
	{ 1, 125 },
	{ 69, 1 },
	{ 69, 125 },
	{ 1, 1 },
	{ 1, 125 },
	{ 69, 1 },
	{ 69, 125 },
	{ 1, 1 },
	{ 1, 125 },
	{ 69, 1 },
	{ 69, 125 },
	{ 1, 125 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 125 },
	{ 1, 125 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 125 },
	{ 1, 125 },
	{ 253, 1 },
	{ 69, 1 },
	{ 69, 125 },
	{ 1, 1 },
	{ 1, 125 },
	{ 69, 1 },
	{ 69, 125 },
	{ 1, 1 },
	{ 1, 125 },
	{ 65, 1 },
	{ 65, 125 },
	{ 1, 1 },
	{ 1, 125 },
	{ 65, 1 },
	{ 65, 125 },
	{ 1, 1 },
	{ 1, 125 },
	{ 65, 1 },
	{ 65, 125 },
	{ 1, 1 },
	{ 1, 125 },
	{ 65, 1 },
	{ 65, 125 },
	{ 1, 1 },
	{ 1, 125 },
	{ 253, 125 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 125 },
	{ 253, 125 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 125 },
	{ 253, 125 },
	{ 1, 1 },
	{ 69, 1 },
	{ 69, 125 },
	{ 1, 1 },
	{ 1, 125 },
	{ 1, 1 },
	{ 1, 125 },
	{ 69, 1 },
	{ 69, 125 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001C4B8[] = {
	{ 0 },
	{ 254, 0 },
	{ 0, 84 },
	{ 254, 255 },
	{ 0 },
	{ 254, 0 },
	{ 0, 84 },
	{ 254, 255 },
	{ 0 },
	{ 254, 0 },
	{ 0, 84 },
	{ 254, 255 },
	{ 0 },
	{ 254, 0 },
	{ 0, 84 },
	{ 254, 255 },
	{ 0 },
	{ 254, 0 },
	{ 0, 84 },
	{ 254, 255 },
	{ 0 },
	{ 254, 0 },
	{ 0, 84 },
	{ 254, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001C518[] = {
	{ 52, 0 },
	{ 200, 0 },
	{ 52, 180 },
	{ 200, 180 },
	{ 253, 221 },
	{ 37, 221 },
	{ 253, 253 },
	{ 37, 253 },
	{ 253, 253 },
	{ 41, 253 },
	{ 253, 221 },
	{ 41, 221 },
	{ 52, 180 },
	{ 200, 180 },
	{ 52, 0 },
	{ 200, 0 },
	{ 253, 221 },
	{ 41, 221 },
	{ 253, 253 },
	{ 41, 253 },
	{ 41, 253 },
	{ 253, 253 },
	{ 41, 221 },
	{ 253, 221 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001C578[] = {
	{ 0, 254 },
	{ 254, 255 },
	{ 0 },
	{ 254, 0 },
	{ 0, 254 },
	{ 254, 255 },
	{ 0 },
	{ 254, 0 },
	{ 0, 254 },
	{ 254, 255 },
	{ 0 },
	{ 254, 0 },
	{ 0, 254 },
	{ 254, 255 },
	{ 0 },
	{ 254, 0 },
	{ 0, 254 },
	{ 254, 255 },
	{ 0 },
	{ 254, 0 },
	{ 0, 254 },
	{ 254, 255 },
	{ 0 },
	{ 254, 0 },
	{ 0, 254 },
	{ 254, 255 },
	{ 0 },
	{ 254, 0 },
	{ 0, 254 },
	{ 254, 255 },
	{ 0 },
	{ 254, 0 },
	{ 0, 254 },
	{ 254, 255 },
	{ 0 },
	{ 254, 0 },
	{ 0, 254 },
	{ 254, 255 },
	{ 0 },
	{ 254, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0001C618[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0001BED0, NULL, NULL, NULL, uv_0001C208, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 18, poly_0001BF02, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_0001BFBA, NULL, NULL, NULL, uv_0001C258, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 28, poly_0001BFE2, NULL, NULL, NULL, uv_0001C298, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 6, poly_0001C12A, NULL, NULL, NULL, uv_0001C4B8, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 6, poly_0001C166, NULL, NULL, NULL, uv_0001C518, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 10, poly_0001C1A2, NULL, NULL, NULL, uv_0001C578, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0001C6C0[] = {
	{ 8.014191f, 3.008606f, -34.99994f },
	{ 8.014191f, 3.008606f, 16.00018f },
	{ 8.014191f, 7.00853f, -34.99994f },
	{ 8.014191f, 7.00853f, 16.00018f },
	{ 12.01419f, 3.008606f, -34.99994f },
	{ 12.01419f, 3.008606f, 16.00018f },
	{ 12.01419f, 7.00853f, -34.99994f },
	{ 12.01419f, 7.00853f, 16.00018f },
	{ -11.98575f, 3.008606f, -34.99994f },
	{ -11.98575f, 3.008606f, 16.00018f },
	{ -11.98575f, 7.00853f, -34.99994f },
	{ -11.98575f, 7.00853f, 16.00018f },
	{ -7.985748f, 3.008606f, -34.99994f },
	{ -7.985748f, 3.008606f, 16.00018f },
	{ -7.985748f, 7.00853f, -34.99994f },
	{ -7.985748f, 7.00853f, 16.00018f },
	{ 14.98575f, -3.999969f, 15.01385f },
	{ 14.98575f, -3.999969f, 20.01385f },
	{ 14.98575f, 9.999953f, 15.01385f },
	{ 14.98575f, 9.999953f, 20.01385f },
	{ 19.98575f, -3.999969f, 15.01385f },
	{ 19.98575f, -3.999969f, 20.01385f },
	{ 19.98575f, 7.999954f, 15.01385f },
	{ 19.98575f, 7.999954f, 20.01385f },
	{ 14.98575f, -5.999969f, 16.01385f },
	{ 14.98575f, -5.999969f, 19.01385f },
	{ 18.98575f, -5.999969f, 16.01385f },
	{ 18.98575f, -5.999969f, 19.01385f },
	{ -15.01419f, -3.999969f, 20.01385f },
	{ -15.01419f, -3.999969f, 15.01385f },
	{ -15.01419f, 9.999953f, 20.01385f },
	{ -15.01419f, 9.999953f, 15.01385f },
	{ -20.01419f, -3.999969f, 20.01385f },
	{ -20.01419f, -3.999969f, 15.01385f },
	{ -20.01419f, 7.999954f, 20.01385f },
	{ -20.01419f, 7.999954f, 15.01385f },
	{ -15.01419f, -5.999969f, 19.01385f },
	{ -15.01419f, -5.999969f, 16.01385f },
	{ -19.01419f, -5.999969f, 19.01385f },
	{ -19.01419f, -5.999969f, 16.01385f },
	{ -7.985748f, -5, 32.99994f },
	{ -7.985748f, 3.008539f, 15.99994f },
	{ -7.985748f, 7, 32.99994f },
	{ -7.985748f, 7, 15.99994f },
	{ -11.98575f, -5, 32.99994f },
	{ -11.98575f, 3.008539f, 15.99994f },
	{ -11.98575f, 7, 32.99994f },
	{ -11.98575f, 7, 15.99994f },
	{ 8.014191f, -5, 32.99994f },
	{ 8.014191f, 3.008539f, 15.99994f },
	{ 8.014191f, 7, 32.99994f },
	{ 8.014191f, 7, 15.99994f },
	{ 12.01419f, -5, 32.99994f },
	{ 12.01419f, 3.008539f, 15.99994f },
	{ 12.01419f, 7, 32.99994f },
	{ 12.01419f, 7, 15.99994f },
	{ 17.01419f, -3.993057f, 20.01361f },
	{ 17.01419f, -3.999969f, 29.99994f },
	{ 17.01419f, 9.006897f, 20.01361f },
	{ 17.01419f, 9, 29.99994f },
	{ 18.01419f, -0.993011f, 21.01361f },
	{ 18.01419f, -0.9999239f, 28.99994f },
	{ 18.01419f, 9.006897f, 21.01361f },
	{ 18.01419f, 9, 28.99994f },
	{ 15.01419f, -3.993057f, 20.01361f },
	{ 15.01419f, -3.999969f, 29.99994f },
	{ 15.01419f, 9.006897f, 20.01361f },
	{ 15.01419f, 9, 29.99994f },
	{ -16.98575f, -3.997833f, 20.01263f },
	{ -16.98575f, -3.999969f, 29.99994f },
	{ -16.98575f, 9.002121f, 20.01263f },
	{ -16.98575f, 9, 29.99994f },
	{ -17.98575f, -0.997787f, 21.01263f },
	{ -17.98575f, -0.9999239f, 28.99994f },
	{ -17.98575f, 9.002121f, 21.01263f },
	{ -17.98575f, 9, 28.99994f },
	{ -14.98575f, -3.997833f, 20.01263f },
	{ -14.98575f, -3.999969f, 29.99994f },
	{ -14.98575f, 9.002121f, 20.01263f },
	{ -14.98575f, 9, 29.99994f },
	{ 15.01419f, -7, 36.00067f },
	{ 15.01419f, -7, 29.99994f },
	{ 15.01419f, 9.999953f, 36.00067f },
	{ 15.01419f, 9.999953f, 29.99994f },
	{ 20.01419f, -7, 36.00067f },
	{ 20.01419f, -7, 29.99994f },
	{ 20.01419f, 9.999953f, 36.00067f },
	{ 20.01419f, 9.999953f, 29.99994f },
	{ -19.98575f, -7, 36.00067f },
	{ -19.98575f, -7, 29.99994f },
	{ -19.98575f, 9.999953f, 36.00067f },
	{ -19.98575f, 9.999953f, 29.99994f },
	{ -14.98575f, -7, 36.00067f },
	{ -14.98575f, -7, 29.99994f },
	{ -14.98575f, 9.999953f, 36.00067f },
	{ -14.98575f, 9.999953f, 29.99994f },
	{ -17.98575f, -9.999969f, 36.00067f },
	{ -17.98575f, -9.999969f, 29.99994f },
	{ -14.98575f, -9.999969f, 36.00067f },
	{ -14.98575f, -9.999969f, 29.99994f },
	{ -14.98575f, 9, 36.00067f },
	{ -14.98575f, 9, 32.99994f },
	{ 15.01419f, 9, 36.00067f },
	{ 15.01419f, 9, 32.99994f },
	{ 15.01419f, -9.999969f, 36.00067f },
	{ 15.01419f, -9.999969f, 29.99994f },
	{ 18.01419f, -9.999969f, 36.00067f },
	{ 18.01419f, -9.999969f, 29.99994f },
	{ -14.98575f, -9, 36.00067f },
	{ -14.98575f, -9, 32.99994f },
	{ 15.01419f, -9, 36.00067f },
	{ 15.01419f, -9, 32.99994f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0001CC00[] = {
	{ -0.57735f, -0.57735f, -0.57735f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.658865f, -0.172834f, -0.732137f },
	{ -0.658865f, -0.172834f, 0.732137f },
	{ -0.464501f, 0.686083f, -0.559936f },
	{ -0.464501f, 0.686083f, 0.559936f },
	{ 0.680946f, -0.269491f, -0.680946f },
	{ 0.680946f, -0.269491f, 0.680946f },
	{ 0.6624269f, 0.448485f, -0.600042f },
	{ 0.6624269f, 0.448485f, 0.600042f },
	{ -0.605729f, -0.676838f, -0.418309f },
	{ -0.605729f, -0.676838f, 0.418309f },
	{ 0.424796f, -0.799435f, -0.424796f },
	{ 0.424796f, -0.799435f, 0.424796f },
	{ 0.658865f, -0.172834f, 0.732137f },
	{ 0.658865f, -0.172834f, -0.732137f },
	{ 0.464501f, 0.686083f, 0.559936f },
	{ 0.464501f, 0.686083f, -0.559936f },
	{ -0.680946f, -0.269491f, 0.680946f },
	{ -0.680946f, -0.269491f, -0.680946f },
	{ -0.6624269f, 0.448485f, 0.600042f },
	{ -0.6624269f, 0.448485f, -0.600042f },
	{ 0.605729f, -0.676838f, 0.418309f },
	{ 0.605729f, -0.676838f, -0.418309f },
	{ -0.424796f, -0.799435f, 0.424796f },
	{ -0.424796f, -0.799435f, -0.424796f },
	{ 0.557664f, -0.7009439f, 0.444621f },
	{ 0.604102f, -0.426859f, -0.672943f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.557664f, -0.7009439f, 0.444621f },
	{ -0.604102f, -0.426859f, -0.672943f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.557664f, -0.7009439f, 0.444621f },
	{ -0.604102f, -0.426859f, -0.672943f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.557664f, -0.7009439f, 0.444621f },
	{ 0.604102f, -0.426859f, -0.672943f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.484926f, -0.632246f, -0.6042449f },
	{ 0.484923f, -0.6326309f, 0.603844f },
	{ 0.297352f, 0.6304359f, -0.71703f },
	{ 0.297159f, 0.6300279f, 0.717468f },
	{ 0.93472f, -0.105427f, -0.339388f },
	{ 0.9347579f, -0.105527f, 0.33925f },
	{ 0.717509f, 0.630238f, -0.296614f },
	{ 0.717527f, 0.629849f, 0.297397f },
	{ -0.577387f, -0.577132f, -0.577532f },
	{ -0.577314f, -0.577568f, 0.5771689f },
	{ -0.577314f, 0.577568f, -0.5771689f },
	{ -0.577387f, 0.577133f, 0.577531f },
	{ -0.484936f, -0.632365f, -0.604112f },
	{ -0.484935f, -0.632484f, 0.603988f },
	{ -0.297183f, 0.630316f, -0.7172059f },
	{ -0.297124f, 0.63019f, 0.71734f },
	{ -0.9347349f, -0.105445f, -0.339339f },
	{ -0.934747f, -0.105476f, 0.339297f },
	{ -0.717353f, 0.630255f, -0.296956f },
	{ -0.7173589f, 0.630135f, 0.297197f },
	{ 0.5773619f, -0.577283f, -0.577406f },
	{ 0.577339f, -0.577418f, 0.577294f },
	{ 0.577339f, 0.577417f, -0.5772949f },
	{ 0.577361f, 0.577283f, 0.577406f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.729507f, -0.220879f, 0.647326f },
	{ 0.729507f, -0.220879f, -0.647326f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.729507f, -0.220879f, 0.647326f },
	{ -0.729507f, -0.220879f, -0.647326f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.37217f, -0.695409f, 0.614732f },
	{ -0.37217f, -0.695409f, -0.614732f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ 0.37217f, -0.695409f, 0.614732f },
	{ 0.37217f, -0.695409f, -0.614732f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0001D140 = { vertex_0001C6C0, normal_0001CC00, LengthOfArray<Sint32>(vertex_0001C6C0), meshlist_0001C618, matlist_0001BE44, LengthOfArray<Uint16>(meshlist_0001C618), LengthOfArray<Uint16>(matlist_0001BE44), { 0, -0.00008f, 0.500368f }, 40.7534f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0001D168 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0001D140, 69.31979f, 230.9949f, 8.325745f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0001D19C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 40, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 37, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0001D214[] = {
	4, 51, 47, 49, 45,
	4, 50, 51, 48, 49,
	4, 46, 50, 44, 48,
	4, 7, 3, 5, 1,
	4, 6, 7, 4, 5,
	4, 2, 6, 0, 4,
	4, 1, 0, 5, 4,
	4, 7, 6, 3, 2,
	4, 51, 50, 47, 46,
	4, 45, 44, 49, 48
};

extern "C" __declspec(dllexport) Sint16 poly_0001D278[] = {
	4, 56, 58, 68, 70,
	4, 69, 68, 71, 70,
	4, 59, 57, 71, 69,
	4, 59, 58, 57, 56
};

extern "C" __declspec(dllexport) Sint16 poly_0001D2A0[] = {
	4, 55, 54, 53, 52,
	4, 11, 10, 9, 8,
	4, 10, 11, 2, 3,
	4, 9, 8, 1, 0,
	4, 11, 9, 3, 1,
	4, 53, 52, 45, 44,
	4, 52, 54, 44, 46,
	4, 54, 55, 46, 47
};

extern "C" __declspec(dllexport) Sint16 poly_0001D2F0[] = {
	4, 58, 59, 70, 71,
	4, 8, 10, 0, 2,
	3, 13, 17, 15,
	6, 17, 19, 15, 18, 14, 12,
	3, 16, 12, 18,
	3, 21, 25, 23,
	6, 25, 27, 23, 26, 22, 20,
	3, 24, 20, 26,
	4, 55, 53, 47, 45
};

extern "C" __declspec(dllexport) Sint16 poly_0001D34A[] = {
	4, 57, 56, 69, 68,
	4, 31, 30, 29, 28,
	0x8000u | 8, 30, 28, 34, 32, 35, 33, 31, 29,
	4, 61, 60, 63, 62,
	4, 35, 34, 31, 30,
	4, 60, 61, 28, 29,
	4, 61, 63, 29, 33,
	4, 63, 62, 33, 32,
	4, 62, 60, 32, 28,
	4, 39, 38, 37, 36,
	4, 43, 39, 41, 37,
	0x8000u | 6, 38, 36, 42, 40, 43, 41,
	4, 65, 64, 67, 66,
	4, 43, 42, 39, 38,
	4, 64, 65, 36, 37,
	4, 65, 67, 37, 41,
	4, 67, 66, 41, 40,
	4, 66, 64, 40, 36
};

extern "C" __declspec(dllexport) Sint16 poly_0001D40A[] = {
	4, 15, 14, 13, 12,
	4, 18, 19, 16, 17,
	4, 13, 12, 17, 16,
	4, 23, 22, 21, 20,
	6, 26, 27, 24, 25, 20, 21
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001D440[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 152 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 },
	{ 254, 152 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 },
	{ 254, 152 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 },
	{ 254, 152 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 },
	{ 254, 152 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 },
	{ 254, 152 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 },
	{ 254, 152 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 },
	{ 254, 152 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 },
	{ 254, 152 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 },
	{ 254, 152 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001D4E0[] = {
	{ 0 },
	{ 765, 0 },
	{ 0, 255 },
	{ 765, 255 },
	{ 5, 225 },
	{ 5, 253 },
	{ 758, 225 },
	{ 758, 253 },
	{ 765, 0 },
	{ 0 },
	{ 765, 255 },
	{ 0, 255 },
	{ 758, 1 },
	{ 758, 33 },
	{ 5, 1 },
	{ 5, 33 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001D520[] = {
	{ 49, 5 },
	{ 209, 5 },
	{ 49, 209 },
	{ 209, 133 },
	{ 212, 0 },
	{ 45, 1 },
	{ 212, 134 },
	{ 45, 209 },
	{ 253, 221 },
	{ 41, 221 },
	{ 253, 253 },
	{ 41, 253 },
	{ 41, 221 },
	{ 253, 221 },
	{ 41, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 213 },
	{ 33, 1 },
	{ 33, 213 },
	{ 253, 221 },
	{ 41, 221 },
	{ 253, 253 },
	{ 41, 253 },
	{ 33, 213 },
	{ 33, 1 },
	{ 1, 213 },
	{ 1, 1 },
	{ 253, 221 },
	{ 41, 221 },
	{ 253, 253 },
	{ 41, 253 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001D5A0[] = {
	{ 255, -730 },
	{ 255, -730 },
	{ 255, 220 },
	{ 255, 220 },
	{ 1, -262 },
	{ 1, -757 },
	{ 225, -262 },
	{ 225, -757 },
	{ 1, -757 },
	{ 253, -757 },
	{ 1, -262 },
	{ 253, -262 },
	{ 1, -757 },
	{ 253, -757 },
	{ 1, -262 },
	{ 253, -262 },
	{ 254, 255 },
	{ 254, 255 },
	{ 101, 255 },
	{ 101, 255 },
	{ 5, -278 },
	{ 5, -757 },
	{ 65, -278 },
	{ 65, -757 },
	{ 5, -278 },
	{ 5, -757 },
	{ 61, -278 },
	{ 61, -757 },
	{ 65, -247 },
	{ 65, 247 },
	{ 1, -247 },
	{ 1, 247 },
	{ 65, -247 },
	{ 65, 247 },
	{ 1, -247 },
	{ 1, 247 },
	{ 65, -247 },
	{ 65, 247 },
	{ 1, -247 },
	{ 1, 247 },
	{ 1, -262 },
	{ 1, -757 },
	{ 225, -262 },
	{ 225, -757 },
	{ 1, -757 },
	{ 1, -262 },
	{ 253, -757 },
	{ 253, -262 },
	{ 1, -757 },
	{ 253, -757 },
	{ 1, -262 },
	{ 253, -262 },
	{ 1, -757 },
	{ 253, -741 },
	{ 254, 255 },
	{ 254, 255 },
	{ 101, 255 },
	{ 101, 255 },
	{ 5, -278 },
	{ 5, -757 },
	{ 61, -278 },
	{ 61, -757 },
	{ 5, -278 },
	{ 5, -757 },
	{ 65, -278 },
	{ 65, -757 },
	{ 65, -247 },
	{ 65, 247 },
	{ 1, -247 },
	{ 1, 247 },
	{ 65, -247 },
	{ 65, 247 },
	{ 1, -247 },
	{ 1, 247 },
	{ 65, -247 },
	{ 65, 247 },
	{ 1, -247 },
	{ 1, 247 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001D6D8[] = {
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 253 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0001D730[] = {
	{ NJD_MESHSET_TRIMESH | 0, 10, poly_0001D214, NULL, NULL, NULL, uv_0001D440, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_0001D278, NULL, NULL, NULL, uv_0001D4E0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 8, poly_0001D2A0, NULL, NULL, NULL, uv_0001D520, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 9, poly_0001D2F0, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 18, poly_0001D34A, NULL, NULL, NULL, uv_0001D5A0, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 5, poly_0001D40A, NULL, NULL, NULL, uv_0001D6D8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0001D7C0[] = {
	{ 16.99976f, -9.000258f, -7.500061f },
	{ 16.99976f, 0.999741f, 2.499939f },
	{ 16.99976f, 13.99969f, -7.500061f },
	{ 16.99976f, 13.99969f, 2.499939f },
	{ 17.99976f, -6.000305f, -6.500061f },
	{ 17.99976f, 1.999695f, 1.499939f },
	{ 17.99976f, 13.99969f, -6.500061f },
	{ 17.99976f, 13.99969f, 1.499939f },
	{ 14.99976f, -9.000258f, -7.500061f },
	{ 14.99976f, 0.999741f, 2.499939f },
	{ 14.99976f, 13.99969f, -7.500061f },
	{ 14.99976f, 13.99969f, 2.499939f },
	{ 7.999756f, -9.000258f, -10.50006f },
	{ 7.999756f, 7.999771f, 12.49982f },
	{ 7.999756f, 11.99969f, -10.50006f },
	{ 7.999756f, 11.99969f, 12.49982f },
	{ 11.99976f, -9.000258f, -10.50006f },
	{ 11.99976f, 7.999771f, 12.49982f },
	{ 11.99976f, 11.99969f, -10.50006f },
	{ 11.99976f, 11.99969f, 12.49982f },
	{ -12.00018f, -9.000258f, -10.50006f },
	{ -12.00018f, 7.999771f, 12.49982f },
	{ -12.00018f, 11.99969f, -10.50006f },
	{ -12.00018f, 11.99969f, 12.49982f },
	{ -8.000182f, -9.000258f, -10.50006f },
	{ -8.000182f, 7.999771f, 12.49982f },
	{ -8.000182f, 11.99969f, -10.50006f },
	{ -8.000182f, 11.99969f, 12.49982f },
	{ 15.00012f, -12, -12.49957f },
	{ 15.00012f, -12, -7.499573f },
	{ 15.00012f, 15, -12.49957f },
	{ 15.00012f, 15, -7.499573f },
	{ 20.00012f, -12, -12.49957f },
	{ 20.00012f, -12, -7.499573f },
	{ 20.00012f, 15, -12.49957f },
	{ 20.00012f, 15, -7.499573f },
	{ -15.00012f, -12, -7.499817f },
	{ -15.00012f, -12, -12.49982f },
	{ -15.00012f, 15, -7.499817f },
	{ -15.00012f, 15, -12.49982f },
	{ -20.00012f, -12, -7.499817f },
	{ -20.00012f, -12, -12.49982f },
	{ -20.00012f, 15, -7.499817f },
	{ -20.00012f, 15, -12.49982f },
	{ -17.00018f, 0.999741f, 2.499939f },
	{ -17.00018f, -9.000258f, -7.500061f },
	{ -17.00018f, 13.99969f, 2.499939f },
	{ -17.00018f, 13.99969f, -7.500061f },
	{ -18.00018f, 1.999695f, 1.499939f },
	{ -18.00018f, -6.000305f, -6.500061f },
	{ -18.00018f, 13.99969f, 1.499939f },
	{ -18.00018f, 13.99969f, -6.500061f },
	{ -15.00018f, 0.999741f, 2.499939f },
	{ -15.00018f, -9.000258f, -7.500061f },
	{ -15.00018f, 13.99969f, 2.499939f },
	{ -15.00018f, 13.99969f, -7.500061f },
	{ -14.99988f, 14.00001f, -12.49957f },
	{ -14.99988f, 14.00001f, -10.49957f },
	{ 15.00012f, 14.00001f, -12.49957f },
	{ 15.00012f, 14.00001f, -10.49957f },
	{ 15.00012f, -15, -12.49957f },
	{ 15.00012f, -15, -7.499573f },
	{ 18.00012f, -15, -12.49957f },
	{ 18.00012f, -15, -7.499573f },
	{ -15.00012f, -15, -7.499817f },
	{ -15.00012f, -15, -12.49982f },
	{ -18.00012f, -15, -7.499817f },
	{ -18.00012f, -15, -12.49982f },
	{ -14.99988f, -13.99998f, -12.49957f },
	{ -14.99988f, -13.99998f, -10.49957f },
	{ 15.00012f, -13.99998f, -12.49957f },
	{ 15.00012f, -13.99998f, -10.49957f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0001DB20[] = {
	{ 0.466097f, -0.818627f, -0.335563f },
	{ 0.409261f, -0.366193f, 0.835708f },
	{ 0.297109f, 0.630262f, -0.717284f },
	{ 0.297109f, 0.630262f, 0.717284f },
	{ 0.962385f, -0.211655f, -0.170345f },
	{ 0.9154429f, -0.113231f, 0.38619f },
	{ 0.717284f, 0.630262f, -0.297109f },
	{ 0.717284f, 0.630262f, 0.297109f },
	{ -0.546918f, -0.773459f, -0.320377f },
	{ -0.630262f, -0.297109f, 0.717284f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.551061f, -0.745059f, -0.37579f },
	{ -0.618407f, -0.353901f, 0.70166f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.551061f, -0.745059f, -0.37579f },
	{ 0.618407f, -0.353901f, 0.70166f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.551061f, -0.745059f, -0.37579f },
	{ -0.618407f, -0.353901f, 0.70166f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.551061f, -0.745059f, -0.37579f },
	{ 0.618407f, -0.353901f, 0.70166f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.729508f, -0.220877f, -0.6473269f },
	{ 0.729508f, -0.220877f, 0.6473269f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.729508f, -0.220877f, 0.6473269f },
	{ -0.729508f, -0.220877f, -0.6473269f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.409261f, -0.366193f, 0.835708f },
	{ -0.466097f, -0.818627f, -0.335563f },
	{ -0.297109f, 0.630262f, 0.717284f },
	{ -0.297109f, 0.630262f, -0.717284f },
	{ -0.9154429f, -0.113231f, 0.38619f },
	{ -0.962385f, -0.211655f, -0.170345f },
	{ -0.717284f, 0.630262f, 0.297109f },
	{ -0.717284f, 0.630262f, -0.297109f },
	{ 0.630262f, -0.297109f, 0.717284f },
	{ 0.546918f, -0.773459f, -0.320377f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ 0.372171f, -0.695409f, -0.614732f },
	{ 0.372171f, -0.695409f, 0.614732f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ -0.372171f, -0.695409f, 0.614732f },
	{ -0.372171f, -0.695409f, -0.614732f },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, 0.57735f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0001DE80 = { vertex_0001D7C0, normal_0001DB20, LengthOfArray<Sint32>(vertex_0001D7C0), meshlist_0001D730, matlist_0001D19C, LengthOfArray<Uint16>(meshlist_0001D730), LengthOfArray<Uint16>(matlist_0001D19C), { 0 }, 23.58496f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0001DEA8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0001DE80, 69.33423f, 226.0037f, -39.17401f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0001DEDC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 37, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0001DF2C[] = {
	4, 45, 47, 37, 41,
	4, 44, 45, 36, 37,
	4, 47, 46, 41, 40,
	4, 43, 42, 39, 38,
	4, 45, 44, 47, 46,
	4, 46, 44, 40, 36,
	0x8000u | 6, 31, 29, 27, 25, 26, 24,
	0x8000u | 6, 26, 24, 30, 28, 31, 29,
	4, 33, 32, 35, 34,
	4, 31, 30, 27, 26,
	4, 32, 33, 24, 25,
	4, 33, 35, 25, 29,
	4, 35, 34, 29, 28,
	4, 34, 32, 28, 24,
	0x8000u | 6, 43, 41, 39, 37, 38, 36,
	0x8000u | 6, 38, 36, 42, 40, 43, 41
};

extern "C" __declspec(dllexport) Sint16 poly_0001DFDC[] = {
	4, 8, 0, 9, 1,
	4, 20, 12, 21, 13,
	4, 11, 10, 9, 8,
	4, 11, 9, 3, 1,
	4, 10, 11, 2, 3,
	4, 23, 22, 21, 20,
	4, 22, 23, 14, 15,
	4, 20, 22, 12, 14
};

extern "C" __declspec(dllexport) Sint16 poly_0001E02C[] = {
	4, 4, 5, 0, 1,
	4, 16, 17, 12, 13,
	4, 7, 3, 5, 1,
	4, 6, 7, 4, 5,
	4, 2, 6, 0, 4,
	4, 7, 6, 3, 2,
	4, 19, 15, 17, 13,
	4, 18, 19, 16, 17,
	4, 14, 18, 12, 16,
	4, 19, 18, 15, 14
};

extern "C" __declspec(dllexport) Sint16 poly_0001E090[] = {
	4, 8, 10, 0, 2,
	4, 23, 21, 15, 13
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001E0A4[] = {
	{ 1, 13 },
	{ 1, 123 },
	{ 69, 13 },
	{ 69, 123 },
	{ 1, 13 },
	{ 1, 123 },
	{ 69, 13 },
	{ 69, 123 },
	{ 1, 13 },
	{ 1, 123 },
	{ 69, 13 },
	{ 69, 123 },
	{ 77, 45 },
	{ 77, 98 },
	{ 125, 45 },
	{ 125, 98 },
	{ 77, 45 },
	{ 77, 98 },
	{ 125, 45 },
	{ 125, 98 },
	{ 1, 13 },
	{ 1, 123 },
	{ 69, 13 },
	{ 69, 123 },
	{ 1, 123 },
	{ 233, 123 },
	{ 1, 13 },
	{ 233, 13 },
	{ 1, 123 },
	{ 233, 120 },
	{ 1, 123 },
	{ 233, 123 },
	{ 1, 13 },
	{ 233, 13 },
	{ 1, 123 },
	{ 233, 120 },
	{ 77, 45 },
	{ 77, 98 },
	{ 125, 45 },
	{ 125, 98 },
	{ 77, 45 },
	{ 77, 98 },
	{ 125, 45 },
	{ 125, 98 },
	{ 1, 13 },
	{ 1, 123 },
	{ 69, 13 },
	{ 69, 123 },
	{ 1, 13 },
	{ 1, 123 },
	{ 69, 13 },
	{ 69, 123 },
	{ 1, 13 },
	{ 1, 123 },
	{ 69, 13 },
	{ 69, 123 },
	{ 1, 13 },
	{ 1, 123 },
	{ 69, 13 },
	{ 69, 123 },
	{ 1, 123 },
	{ 233, 123 },
	{ 1, 13 },
	{ 233, 13 },
	{ 1, 123 },
	{ 233, 120 },
	{ 1, 123 },
	{ 233, 123 },
	{ 1, 13 },
	{ 233, 13 },
	{ 1, 123 },
	{ 233, 120 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001E1C4[] = {
	{ 253, 253 },
	{ 253, 221 },
	{ 41, 253 },
	{ 41, 221 },
	{ 253, 253 },
	{ 253, 221 },
	{ 37, 253 },
	{ 37, 221 },
	{ 216, 0 },
	{ 40, 0 },
	{ 216, 168 },
	{ 40, 168 },
	{ 33, 1 },
	{ 33, 217 },
	{ 1, 1 },
	{ 1, 217 },
	{ 253, 221 },
	{ 37, 221 },
	{ 253, 253 },
	{ 37, 253 },
	{ 216, 0 },
	{ 40, 0 },
	{ 216, 168 },
	{ 40, 168 },
	{ 253, 221 },
	{ 41, 221 },
	{ 253, 253 },
	{ 41, 253 },
	{ 1, 217 },
	{ 1, 1 },
	{ 33, 217 },
	{ 33, 1 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001E244[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0001E2E4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 16, poly_0001DF2C, NULL, NULL, NULL, uv_0001E0A4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 8, poly_0001DFDC, NULL, NULL, NULL, uv_0001E1C4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 10, poly_0001E02C, NULL, NULL, NULL, uv_0001E244, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_0001E090, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0001E344[] = {
	{ 17.00034f, -5.99939f, -4.999695f },
	{ 17.00034f, -5.99939f, 5.000305f },
	{ 17.00034f, 7.00061f, -4.999695f },
	{ 17.00034f, 7.00061f, 5.000305f },
	{ 18.00034f, -2.99939f, -3.999695f },
	{ 18.00034f, -2.99939f, 4.000305f },
	{ 18.00034f, 7.00061f, -3.999695f },
	{ 18.00034f, 7.00061f, 4.000305f },
	{ 15.00034f, -5.99939f, -4.999695f },
	{ 15.00034f, -5.99939f, 5.000305f },
	{ 15.00034f, 7.00061f, -4.999695f },
	{ 15.00034f, 7.00061f, 5.000305f },
	{ -16.99997f, -5.999954f, 4.999939f },
	{ -16.99997f, -5.999954f, -4.999939f },
	{ -16.99997f, 7, 4.999939f },
	{ -16.99997f, 7, -4.999939f },
	{ -17.99997f, -2.999924f, 3.999939f },
	{ -17.99997f, -2.999924f, -3.999939f },
	{ -17.99997f, 7, 3.999939f },
	{ -17.99997f, 7, -3.999939f },
	{ -14.99997f, -5.999954f, 4.999939f },
	{ -14.99997f, -5.999954f, -4.999939f },
	{ -14.99997f, 7, 4.999939f },
	{ -14.99997f, 7, -4.999939f },
	{ 14.99997f, -5.999954f, -9.999939f },
	{ 14.99997f, -5.999954f, -4.999939f },
	{ 14.99997f, 7.999954f, -9.999939f },
	{ 14.99997f, 7.999954f, -4.999939f },
	{ 19.99997f, -5.999954f, -9.999939f },
	{ 19.99997f, -5.999954f, -4.999939f },
	{ 19.99997f, 5.999954f, -9.999939f },
	{ 19.99997f, 5.999954f, -4.999939f },
	{ 14.99997f, -7.999954f, -8.999939f },
	{ 14.99997f, -7.999954f, -5.999939f },
	{ 18.99997f, -7.999954f, -8.999939f },
	{ 18.99997f, -7.999954f, -5.999939f },
	{ -14.99997f, -5.999954f, -4.999939f },
	{ -14.99997f, -5.999954f, -9.999939f },
	{ -14.99997f, 7.999954f, -4.999939f },
	{ -14.99997f, 7.999954f, -9.999939f },
	{ -19.99997f, -5.999954f, -4.999939f },
	{ -19.99997f, -5.999954f, -9.999939f },
	{ -19.99997f, 5.999954f, -4.999939f },
	{ -19.99997f, 5.999954f, -9.999939f },
	{ -14.99997f, -7.999954f, -5.999939f },
	{ -14.99997f, -7.999954f, -8.999939f },
	{ -18.99997f, -7.999954f, -5.999939f },
	{ -18.99997f, -7.999954f, -8.999939f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0001E584[] = {
	{ 0.48494f, -0.632418f, -0.604053f },
	{ 0.48494f, -0.632418f, 0.604053f },
	{ 0.297109f, 0.630262f, -0.717284f },
	{ 0.297109f, 0.630262f, 0.717284f },
	{ 0.934743f, -0.105454f, -0.339317f },
	{ 0.934743f, -0.105454f, 0.339317f },
	{ 0.717284f, 0.630262f, -0.297109f },
	{ 0.717284f, 0.630262f, 0.297109f },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.484941f, -0.632418f, 0.604053f },
	{ -0.484941f, -0.632418f, -0.604053f },
	{ -0.297109f, 0.630262f, 0.717284f },
	{ -0.297109f, 0.630262f, -0.717284f },
	{ -0.934743f, -0.105453f, 0.339317f },
	{ -0.934743f, -0.105453f, -0.339317f },
	{ -0.717284f, 0.630262f, 0.297109f },
	{ -0.717284f, 0.630262f, -0.297109f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.658865f, -0.172834f, -0.732137f },
	{ -0.658865f, -0.172834f, 0.732137f },
	{ -0.464501f, 0.686083f, -0.559936f },
	{ -0.464501f, 0.686083f, 0.559936f },
	{ 0.680946f, -0.269491f, -0.680946f },
	{ 0.680946f, -0.269491f, 0.680946f },
	{ 0.6624269f, 0.448485f, -0.600042f },
	{ 0.6624269f, 0.448485f, 0.600042f },
	{ -0.605729f, -0.676838f, -0.418309f },
	{ -0.605729f, -0.676838f, 0.418309f },
	{ 0.424796f, -0.799435f, -0.424796f },
	{ 0.424796f, -0.799435f, 0.424796f },
	{ 0.658865f, -0.172834f, 0.732137f },
	{ 0.658865f, -0.172834f, -0.732137f },
	{ 0.464501f, 0.686083f, 0.559936f },
	{ 0.464501f, 0.686083f, -0.559936f },
	{ -0.680946f, -0.269491f, 0.680946f },
	{ -0.680946f, -0.269491f, -0.680946f },
	{ -0.6624269f, 0.448485f, 0.600042f },
	{ -0.6624269f, 0.448485f, -0.600042f },
	{ 0.605729f, -0.676838f, 0.418309f },
	{ 0.605729f, -0.676838f, -0.418309f },
	{ -0.424796f, -0.799435f, 0.424796f },
	{ -0.424796f, -0.799435f, -0.424796f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0001E7C4 = { vertex_0001E344, normal_0001E584, LengthOfArray<Sint32>(vertex_0001E344), meshlist_0001E2E4, matlist_0001DEDC, LengthOfArray<Uint16>(meshlist_0001E2E4), LengthOfArray<Uint16>(matlist_0001DEDC), { 0, 0, -2.499817f }, 21.36002f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0001E7EC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0001E7C4, 69.334f, 233.0031f, -26.67316f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0001E820[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 41, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0001E85C[] = {
	4, 5, 1, 7, 3
};

extern "C" __declspec(dllexport) Sint16 poly_0001E866[] = {
	4, 6, 2, 4, 0
};

extern "C" __declspec(dllexport) Sint16 poly_0001E870[] = {
	10, 3, 6, 7, 4, 5, 0, 1, 2, 3, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001E888[] = {
	{ 0, 255 },
	{ 0, -2295 },
	{ 508, 255 },
	{ 508, -2295 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001E898[] = {
	{ 508, 255 },
	{ 508, -2295 },
	{ 0, 255 },
	{ 0, -2295 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001E8A8[] = {
	{ 243, 121 },
	{ 243, 214 },
	{ 243, 121 },
	{ 9, 214 },
	{ 9, 121 },
	{ 9, 214 },
	{ 9, 121 },
	{ 243, 214 },
	{ 243, 121 },
	{ 243, 214 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0001E8D0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0001E85C, NULL, NULL, NULL, uv_0001E888, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0001E866, NULL, NULL, NULL, uv_0001E898, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0001E870, NULL, NULL, NULL, uv_0001E8A8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0001E918[] = {
	{ -14.98577f, 7.005035f, 32.99997f },
	{ -14.98577f, 9.005034f, 32.99997f },
	{ 15.0142f, 7.005035f, 32.99997f },
	{ 15.0142f, 9.005034f, 32.99997f },
	{ -14.98577f, 7.005035f, -58.9993f },
	{ -14.98577f, 9.005034f, -58.9993f },
	{ 15.0142f, 7.005035f, -58.9993f },
	{ 15.0142f, 9.005034f, -58.9993f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0001E978[] = {
	{ -0.57735f, -0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0001E9D8 = { vertex_0001E918, normal_0001E978, LengthOfArray<Sint32>(vertex_0001E918), meshlist_0001E8D0, matlist_0001E820, LengthOfArray<Uint16>(meshlist_0001E8D0), LengthOfArray<Uint16>(matlist_0001E820), { 0.014214f, 8.005034f, -12.99966f }, 48.38353f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0001EA00 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0001E9D8, 69.31979f, 230.9949f, 8.325745f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0001EA34[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 35, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 34, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xA8FFFFFF }, { 0xFFFFFFFF }, 11, 33, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0001EA70[] = {
	0x8000u | 5, 218, 213, 216, 198, 212,
	4, 0, 13, 1, 10,
	4, 6, 17, 7, 15,
	4, 4, 21, 5, 19,
	4, 2, 8, 3, 23,
	3, 239, 240, 236,
	4, 237, 238, 243, 235,
	7, 237, 239, 238, 236, 224, 231, 228,
	3, 191, 193, 192,
	4, 29, 37, 28, 38,
	4, 27, 39, 26, 32,
	4, 25, 33, 24, 34,
	4, 31, 35, 30, 36,
	7, 64, 76, 69, 82, 71, 72, 73,
	3, 62, 64, 69,
	3, 63, 67, 94,
	5, 83, 89, 87, 92, 96,
	6, 83, 68, 89, 85, 92, 91,
	4, 61, 105, 66, 97,
	8, 60, 77, 75, 81, 80, 79, 78, 74,
	0x8000u | 12, 77, 62, 60, 64, 74, 76, 79, 82, 88, 72, 84, 73,
	16, 99, 65, 101, 104, 102, 103, 98, 95, 88, 86, 84, 90, 73, 93, 95, 86,
	3, 104, 65, 103,
	5, 70, 67, 66, 63, 61,
	0x8000u | 5, 74, 78, 60, 80, 75,
	0x8000u | 10, 232, 208, 229, 209, 223, 226, 220, 217, 214, 212,
	0x8000u | 32, 209, 224, 226, 238, 234, 235, 204, 243, 199, 237, 203, 239, 242, 240, 241, 236, 233, 231, 211, 228, 222, 224, 210, 209, 211, 208, 233, 232, 241, 201, 203, 199,
	3, 225, 221, 206,
	3, 86, 93, 90,
	0x8000u | 5, 99, 100, 101, 98, 102,
	0x8000u | 5, 88, 98, 79, 100, 81,
	0x8000u | 30, 100, 96, 81, 87, 77, 83, 62, 68, 69, 85, 71, 91, 70, 92, 66, 96, 97, 100, 105, 99, 61, 65, 63, 103, 94, 95, 67, 73, 70, 71,
	3, 180, 171, 190,
	0x8000u | 30, 192, 188, 173, 179, 169, 175, 154, 160, 161, 177, 163, 183, 162, 184, 158, 188, 189, 192, 197, 191, 153, 157, 155, 195, 186, 187, 159, 165, 162, 163,
	0x8000u | 6, 194, 193, 190, 192, 171, 173,
	7, 110, 122, 115, 128, 117, 118, 119,
	3, 108, 110, 115,
	3, 109, 113, 140,
	5, 129, 135, 133, 138, 142,
	6, 129, 114, 135, 131, 138, 137,
	4, 107, 151, 112, 143,
	8, 106, 123, 121, 127, 126, 125, 124, 120,
	0x8000u | 12, 123, 108, 106, 110, 120, 122, 125, 128, 134, 118, 130, 119,
	16, 145, 111, 147, 150, 148, 149, 144, 141, 134, 132, 130, 136, 119, 139, 141, 132,
	3, 242, 203, 241,
	3, 150, 111, 149,
	5, 116, 113, 112, 109, 107,
	0x8000u | 5, 120, 124, 106, 126, 121,
	3, 132, 139, 136,
	3, 211, 210, 222,
	0x8000u | 5, 145, 146, 147, 144, 148,
	0x8000u | 5, 134, 144, 125, 146, 127,
	0x8000u | 30, 146, 142, 127, 133, 123, 129, 108, 114, 115, 131, 117, 137, 116, 138, 112, 142, 143, 146, 151, 145, 107, 111, 109, 149, 140, 141, 113, 119, 116, 117,
	0x8000u | 5, 201, 205, 204, 230, 234,
	3, 201, 199, 204,
	7, 156, 168, 161, 174, 163, 164, 165,
	3, 154, 156, 161,
	3, 155, 159, 186,
	5, 175, 181, 179, 184, 188,
	6, 175, 160, 181, 177, 184, 183,
	4, 153, 197, 158, 189,
	8, 152, 169, 167, 173, 172, 171, 170, 166,
	0x8000u | 12, 169, 154, 152, 156, 166, 168, 171, 174, 180, 164, 176, 165,
	16, 191, 157, 193, 196, 194, 195, 190, 187, 180, 178, 176, 182, 165, 185, 187, 178,
	3, 196, 157, 195,
	5, 162, 159, 158, 155, 153,
	0x8000u | 5, 166, 170, 152, 172, 167,
	0x8000u | 14, 219, 225, 215, 221, 200, 206, 207, 225, 227, 219, 230, 217, 234, 226,
	0x8000u | 11, 207, 202, 200, 198, 215, 213, 219, 218, 217, 216, 212,
	0x8000u | 13, 201, 232, 205, 229, 230, 223, 227, 220, 207, 214, 202, 212, 198,
	3, 178, 185, 182
};

extern "C" __declspec(dllexport) Sint16 poly_0001EEFA[] = {
	7, 4, 244, 3, 247, 2, 246, 1,
	0x8000u | 9, 1, 0, 246, 7, 245, 6, 244, 5, 4,
	4, 7, 15, 0, 13,
	4, 1, 10, 2, 8,
	0x8000u | 18, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 10, 11, 8, 9, 23, 22, 21,
	4, 5, 19, 6, 17,
	4, 3, 23, 4, 21,
	7, 27, 42, 28, 40, 29, 41, 30,
	4, 26, 32, 25, 33,
	4, 30, 36, 29, 37,
	0x8000u | 9, 30, 31, 41, 24, 43, 25, 42, 26, 27,
	4, 28, 38, 27, 39,
	0x8000u | 9, 31, 35, 34, 36, 33, 37, 32, 38, 39,
	3, 31, 24, 34
};

extern "C" __declspec(dllexport) Sint16 poly_0001EFCA[] = {
	4, 244, 245, 247, 246,
	8, 16, 18, 14, 20, 12, 22, 11, 9,
	4, 41, 40, 43, 42,
	4, 58, 56, 59, 57,
	0x8000u | 16, 56, 57, 54, 55, 52, 53, 50, 51, 49, 48, 46, 45, 47, 44, 58, 59
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001F01C[] = {
	{ 40, 255 },
	{ 32, 255 },
	{ 13, 255 },
	{ 18, 255 },
	{ 11, 255 },
	{ 204, 16 },
	{ 204, 68 },
	{ 243, 16 },
	{ 243, 68 },
	{ 11, 16 },
	{ 11, 68 },
	{ 50, 16 },
	{ 50, 68 },
	{ 50, 16 },
	{ 50, 68 },
	{ 11, 16 },
	{ 11, 68 },
	{ 243, 16 },
	{ 243, 68 },
	{ 204, 16 },
	{ 204, 68 },
	{ 40, 255 },
	{ 13, 255 },
	{ 11, 228 },
	{ 32, 255 },
	{ 50, 228 },
	{ 35, 228 },
	{ 35, 117 },
	{ 32, 255 },
	{ 40, 255 },
	{ 50, 228 },
	{ 11, 228 },
	{ 13, 76 },
	{ 13, 117 },
	{ 3, 117 },
	{ 222, 255 },
	{ 214, 255 },
	{ 204, 228 },
	{ 11, 221 },
	{ 11, 110 },
	{ 50, 221 },
	{ 50, 110 },
	{ 204, 221 },
	{ 204, 110 },
	{ 243, 221 },
	{ 243, 110 },
	{ 243, 221 },
	{ 243, 110 },
	{ 204, 221 },
	{ 204, 110 },
	{ 50, 221 },
	{ 50, 110 },
	{ 11, 221 },
	{ 11, 110 },
	{ 11, 24 },
	{ 35, 24 },
	{ 11, 76 },
	{ 35, 76 },
	{ 11, 76 },
	{ 15, 76 },
	{ 15, 117 },
	{ 7, 24 },
	{ 11, 24 },
	{ 11, 76 },
	{ 11, 228 },
	{ 11, 117 },
	{ 35, 117 },
	{ 0, 76 },
	{ 13, 76 },
	{ 11, 76 },
	{ 13, 117 },
	{ 11, 117 },
	{ 0, 76 },
	{ 7, 76 },
	{ 13, 76 },
	{ 4, 76 },
	{ 13, 117 },
	{ 4, 117 },
	{ 7, 228 },
	{ 0, 228 },
	{ 7, 117 },
	{ 0, 117 },
	{ 18, 0 },
	{ 0, 24 },
	{ 11, 0 },
	{ 11, 24 },
	{ 13, 0 },
	{ 50, 24 },
	{ 40, 0 },
	{ 32, 0 },
	{ 0, 24 },
	{ 7, 24 },
	{ 18, 0 },
	{ 11, 24 },
	{ 32, 0 },
	{ 35, 24 },
	{ 50, 24 },
	{ 35, 76 },
	{ 50, 76 },
	{ 15, 76 },
	{ 33, 76 },
	{ 15, 117 },
	{ 11, 255 },
	{ 18, 255 },
	{ 13, 255 },
	{ 32, 255 },
	{ 40, 255 },
	{ 35, 228 },
	{ 50, 228 },
	{ 50, 117 },
	{ 50, 76 },
	{ 48, 76 },
	{ 33, 76 },
	{ 33, 117 },
	{ 15, 117 },
	{ 48, 117 },
	{ 50, 117 },
	{ 48, 76 },
	{ 32, 255 },
	{ 18, 255 },
	{ 35, 228 },
	{ 11, 117 },
	{ 11, 117 },
	{ 7, 117 },
	{ 11, 228 },
	{ 7, 228 },
	{ 32, 255 },
	{ 40, 255 },
	{ 18, 255 },
	{ 13, 255 },
	{ 11, 255 },
	{ 0, 117 },
	{ 15, 117 },
	{ 33, 117 },
	{ 15, 76 },
	{ 33, 76 },
	{ 11, 76 },
	{ 0, 76 },
	{ 11, 24 },
	{ 0, 24 },
	{ 11, 0 },
	{ 15, 76 },
	{ 13, 76 },
	{ 11, 76 },
	{ 50, 228 },
	{ 50, 117 },
	{ 35, 117 },
	{ 11, 117 },
	{ 35, 228 },
	{ 11, 228 },
	{ 32, 255 },
	{ 18, 255 },
	{ 40, 255 },
	{ 11, 255 },
	{ 13, 255 },
	{ 0, 228 },
	{ 11, 228 },
	{ 11, 117 },
	{ 13, 117 },
	{ 11, 117 },
	{ 3, 117 },
	{ 3, 76 },
	{ 13, 76 },
	{ 11, 76 },
	{ 15, 76 },
	{ 11, 117 },
	{ 15, 117 },
	{ 11, 117 },
	{ 0, 117 },
	{ 0, 228 },
	{ 7, 228 },
	{ 18, 255 },
	{ 11, 228 },
	{ 50, 76 },
	{ 35, 76 },
	{ 11, 76 },
	{ 48, 76 },
	{ 48, 117 },
	{ 33, 117 },
	{ 11, 255 },
	{ 11, 228 },
	{ 13, 255 },
	{ 50, 228 },
	{ 40, 255 },
	{ 50, 76 },
	{ 50, 228 },
	{ 50, 24 },
	{ 11, 228 },
	{ 11, 24 },
	{ 11, 228 },
	{ 11, 117 },
	{ 11, 24 },
	{ 11, 76 },
	{ 0, 24 },
	{ 0, 76 },
	{ 7, 24 },
	{ 7, 76 },
	{ 11, 76 },
	{ 4, 76 },
	{ 11, 76 },
	{ 4, 117 },
	{ 11, 117 },
	{ 13, 117 },
	{ 7, 117 },
	{ 11, 117 },
	{ 0, 117 },
	{ 11, 228 },
	{ 0, 228 },
	{ 11, 255 },
	{ 7, 228 },
	{ 18, 255 },
	{ 11, 228 },
	{ 35, 228 },
	{ 35, 117 },
	{ 50, 117 },
	{ 11, 117 },
	{ 15, 117 },
	{ 11, 117 },
	{ 11, 76 },
	{ 243, 76 },
	{ 243, 24 },
	{ 243, 228 },
	{ 204, 228 },
	{ 204, 117 },
	{ 204, 24 },
	{ 204, 76 },
	{ 219, 24 },
	{ 219, 76 },
	{ 243, 24 },
	{ 243, 76 },
	{ 247, 76 },
	{ 221, 76 },
	{ 239, 76 },
	{ 221, 117 },
	{ 239, 117 },
	{ 206, 117 },
	{ 243, 117 },
	{ 204, 117 },
	{ 219, 117 },
	{ 204, 228 },
	{ 219, 228 },
	{ 222, 255 },
	{ 243, 228 },
	{ 236, 255 },
	{ 247, 228 },
	{ 255, 228 },
	{ 255, 117 },
	{ 243, 117 },
	{ 247, 117 },
	{ 243, 117 },
	{ 239, 117 },
	{ 239, 76 },
	{ 241, 255 },
	{ 214, 255 },
	{ 243, 228 },
	{ 204, 228 },
	{ 243, 24 },
	{ 204, 24 },
	{ 243, 24 },
	{ 219, 24 },
	{ 243, 76 },
	{ 219, 76 },
	{ 243, 76 },
	{ 239, 76 },
	{ 239, 117 },
	{ 247, 24 },
	{ 243, 24 },
	{ 243, 76 },
	{ 243, 228 },
	{ 243, 117 },
	{ 219, 117 },
	{ 254, 76 },
	{ 241, 76 },
	{ 243, 76 },
	{ 241, 117 },
	{ 243, 117 },
	{ 254, 76 },
	{ 247, 76 },
	{ 241, 76 },
	{ 250, 76 },
	{ 241, 117 },
	{ 250, 117 },
	{ 247, 228 },
	{ 254, 228 },
	{ 247, 117 },
	{ 254, 117 },
	{ 236, 0 },
	{ 254, 24 },
	{ 243, 0 },
	{ 243, 24 },
	{ 241, 0 },
	{ 204, 24 },
	{ 214, 0 },
	{ 222, 0 },
	{ 254, 24 },
	{ 247, 24 },
	{ 236, 0 },
	{ 243, 24 },
	{ 222, 0 },
	{ 219, 24 },
	{ 204, 24 },
	{ 219, 76 },
	{ 204, 76 },
	{ 239, 76 },
	{ 221, 76 },
	{ 239, 117 },
	{ 243, 255 },
	{ 236, 255 },
	{ 241, 255 },
	{ 222, 255 },
	{ 214, 255 },
	{ 219, 228 },
	{ 204, 228 },
	{ 204, 117 },
	{ 204, 76 },
	{ 206, 76 },
	{ 221, 76 },
	{ 221, 117 },
	{ 239, 117 },
	{ 206, 117 },
	{ 204, 117 },
	{ 206, 76 },
	{ 11, 255 },
	{ 18, 255 },
	{ 0, 228 },
	{ 222, 255 },
	{ 236, 255 },
	{ 219, 228 },
	{ 243, 117 },
	{ 243, 117 },
	{ 247, 117 },
	{ 243, 228 },
	{ 247, 228 },
	{ 222, 255 },
	{ 214, 255 },
	{ 236, 255 },
	{ 241, 255 },
	{ 243, 255 },
	{ 206, 76 },
	{ 206, 117 },
	{ 221, 117 },
	{ 11, 117 },
	{ 11, 76 },
	{ 3, 76 },
	{ 243, 255 },
	{ 243, 228 },
	{ 241, 255 },
	{ 204, 228 },
	{ 214, 255 },
	{ 204, 76 },
	{ 204, 228 },
	{ 204, 24 },
	{ 243, 228 },
	{ 243, 24 },
	{ 243, 228 },
	{ 243, 117 },
	{ 243, 24 },
	{ 243, 76 },
	{ 254, 24 },
	{ 254, 76 },
	{ 247, 24 },
	{ 247, 76 },
	{ 243, 76 },
	{ 250, 76 },
	{ 243, 76 },
	{ 250, 117 },
	{ 243, 117 },
	{ 241, 117 },
	{ 247, 117 },
	{ 243, 117 },
	{ 254, 117 },
	{ 243, 228 },
	{ 254, 228 },
	{ 243, 255 },
	{ 247, 228 },
	{ 236, 255 },
	{ 243, 228 },
	{ 219, 228 },
	{ 219, 117 },
	{ 204, 117 },
	{ 243, 117 },
	{ 239, 117 },
	{ 243, 117 },
	{ 243, 76 },
	{ 7, 228 },
	{ 7, 117 },
	{ 11, 117 },
	{ 48, 117 },
	{ 50, 117 },
	{ 7, 228 },
	{ 11, 228 },
	{ 11, 117 },
	{ 247, 24 },
	{ 255, 24 },
	{ 247, 76 },
	{ 255, 76 },
	{ 239, 76 },
	{ 243, 76 },
	{ 243, 117 },
	{ 243, 24 },
	{ 247, 24 },
	{ 247, 76 },
	{ 247, 228 },
	{ 247, 117 },
	{ 255, 117 },
	{ 219, 76 },
	{ 206, 76 },
	{ 204, 76 },
	{ 206, 117 },
	{ 204, 117 },
	{ 219, 76 },
	{ 243, 76 },
	{ 206, 76 },
	{ 221, 76 },
	{ 206, 117 },
	{ 221, 117 },
	{ 243, 228 },
	{ 219, 228 },
	{ 243, 117 },
	{ 219, 117 },
	{ 236, 0 },
	{ 219, 24 },
	{ 222, 0 },
	{ 204, 24 },
	{ 214, 0 },
	{ 243, 24 },
	{ 241, 0 },
	{ 243, 0 },
	{ 219, 24 },
	{ 243, 24 },
	{ 236, 0 },
	{ 247, 24 },
	{ 243, 0 },
	{ 255, 24 },
	{ 243, 24 },
	{ 255, 76 },
	{ 243, 76 },
	{ 243, 76 },
	{ 251, 76 },
	{ 243, 117 },
	{ 222, 255 },
	{ 236, 255 },
	{ 214, 255 },
	{ 243, 255 },
	{ 241, 255 },
	{ 255, 228 },
	{ 243, 228 },
	{ 243, 117 },
	{ 243, 76 },
	{ 241, 76 },
	{ 251, 76 },
	{ 251, 117 },
	{ 243, 117 },
	{ 241, 117 },
	{ 243, 117 },
	{ 241, 76 },
	{ 243, 255 },
	{ 236, 255 },
	{ 255, 228 },
	{ 239, 117 },
	{ 247, 117 },
	{ 243, 117 },
	{ 247, 228 },
	{ 243, 228 },
	{ 243, 255 },
	{ 241, 255 },
	{ 236, 255 },
	{ 214, 255 },
	{ 222, 255 },
	{ 50, 24 },
	{ 50, 76 },
	{ 35, 24 },
	{ 35, 76 },
	{ 11, 24 },
	{ 11, 76 },
	{ 7, 76 },
	{ 50, 76 },
	{ 48, 76 },
	{ 50, 24 },
	{ 48, 117 },
	{ 11, 24 },
	{ 50, 117 },
	{ 11, 76 },
	{ 7, 76 },
	{ 7, 24 },
	{ 11, 24 },
	{ 18, 0 },
	{ 35, 24 },
	{ 32, 0 },
	{ 50, 24 },
	{ 40, 0 },
	{ 11, 24 },
	{ 13, 0 },
	{ 11, 0 },
	{ 7, 228 },
	{ 0, 117 },
	{ 7, 117 },
	{ 33, 117 },
	{ 48, 117 },
	{ 33, 76 },
	{ 48, 76 },
	{ 0, 76 },
	{ 7, 76 },
	{ 0, 24 },
	{ 7, 24 },
	{ 11, 0 },
	{ 18, 0 },
	{ 241, 76 },
	{ 241, 117 },
	{ 251, 117 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001F814[] = {
	{ 254, 15 },
	{ 222, 0 },
	{ 254, 15 },
	{ 222, 0 },
	{ 203, 15 },
	{ 31, 0 },
	{ 50, 15 },
	{ 50, 15 },
	{ 0, 15 },
	{ 31, 0 },
	{ 0, 15 },
	{ 31, 0 },
	{ 50, 15 },
	{ 222, 0 },
	{ 203, 15 },
	{ 254, 15 },
	{ 0, 15 },
	{ 0, 63 },
	{ 0, 15 },
	{ 0, 63 },
	{ 50, 15 },
	{ 50, 63 },
	{ 203, 15 },
	{ 203, 63 },
	{ 228, 63 },
	{ 254, 63 },
	{ 228, 63 },
	{ 203, 63 },
	{ 178, 63 },
	{ 50, 63 },
	{ 76, 63 },
	{ 0, 63 },
	{ 25, 63 },
	{ 0, 63 },
	{ 25, 63 },
	{ 50, 63 },
	{ 76, 63 },
	{ 203, 63 },
	{ 178, 63 },
	{ 254, 63 },
	{ 228, 63 },
	{ 254, 63 },
	{ 203, 15 },
	{ 203, 63 },
	{ 50, 15 },
	{ 50, 63 },
	{ 254, 15 },
	{ 254, 63 },
	{ 254, 15 },
	{ 254, 63 },
	{ 255, 206 },
	{ 223, 255 },
	{ 255, 206 },
	{ 223, 255 },
	{ 204, 206 },
	{ 32, 255 },
	{ 51, 206 },
	{ 204, 206 },
	{ 204, 102 },
	{ 51, 206 },
	{ 51, 102 },
	{ 51, 206 },
	{ 51, 102 },
	{ 204, 206 },
	{ 204, 102 },
	{ 51, 206 },
	{ 0, 206 },
	{ 32, 255 },
	{ 0, 206 },
	{ 32, 255 },
	{ 51, 206 },
	{ 223, 255 },
	{ 204, 206 },
	{ 255, 206 },
	{ 0, 206 },
	{ 0, 102 },
	{ 0, 206 },
	{ 0, 102 },
	{ 0, 206 },
	{ 0, 102 },
	{ 0, 102 },
	{ 51, 102 },
	{ 51, 102 },
	{ 204, 102 },
	{ 204, 102 },
	{ 255, 102 },
	{ 255, 102 },
	{ 0, 206 },
	{ 0, 206 },
	{ 0, 102 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0001F97C[] = {
	{ 494, 202 },
	{ 15, 202 },
	{ 494, -204 },
	{ 15, -204 },
	{ 127, 253 },
	{ 382, 253 },
	{ 0, 151 },
	{ 510, 151 },
	{ 0, -153 },
	{ 510, -153 },
	{ 127, -255 },
	{ 382, -255 },
	{ 17, 202 },
	{ 494, 202 },
	{ 17, -204 },
	{ 494, -204 },
	{ 0, -151 },
	{ 0, 153 },
	{ 0, -151 },
	{ 0, 153 },
	{ 510, 153 },
	{ 510, 153 },
	{ 382, 254 },
	{ 382, 254 },
	{ 127, 254 },
	{ 127, 254 },
	{ 0, 153 },
	{ 0, 153 },
	{ 0, -151 },
	{ 0, -151 },
	{ 127, -253 },
	{ 127, -253 },
	{ 382, -253 },
	{ 382, -253 },
	{ 510, -151 },
	{ 510, -151 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0001FA0C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 71, poly_0001EA70, NULL, NULL, NULL, uv_0001F01C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 14, poly_0001EEFA, NULL, NULL, NULL, uv_0001F814, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 5, poly_0001EFCA, NULL, NULL, NULL, uv_0001F97C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0001FA54[] = {
	{ -25.11267f, 8.652434f, 19.96387f },
	{ -15.11267f, 8.652434f, 29.96387f },
	{ 14.88732f, 8.652434f, 29.96387f },
	{ 24.88732f, 8.652434f, 19.96387f },
	{ 24.88732f, 8.652434f, -20.03613f },
	{ 14.88732f, 8.652434f, -30.03613f },
	{ -15.11267f, 8.652434f, -30.03613f },
	{ -25.11267f, 8.652434f, -20.03613f },
	{ 14.88732f, 4.893143f, 29.96387f },
	{ 9.887324f, 4.893173f, 24.96387f },
	{ -15.11267f, 4.893143f, 29.96387f },
	{ -10.11267f, 4.893173f, 24.96387f },
	{ -20.11267f, 4.893173f, 14.96387f },
	{ -25.11267f, 4.893143f, 19.96387f },
	{ -20.11267f, 4.893173f, -15.03613f },
	{ -25.11267f, 4.893143f, -20.03613f },
	{ -10.11267f, 4.893173f, -25.03613f },
	{ -15.11267f, 4.893143f, -30.03613f },
	{ 9.887324f, 4.893173f, -25.03613f },
	{ 14.88732f, 4.893143f, -30.03613f },
	{ 19.88732f, 4.893173f, -15.03613f },
	{ 24.88732f, 4.893143f, -20.03613f },
	{ 19.88732f, 4.893173f, 14.96387f },
	{ 24.88732f, 4.893143f, 19.96387f },
	{ -24.99915f, -6.112976f, 19.96387f },
	{ -14.99915f, -6.112976f, 29.96387f },
	{ 15.00085f, -6.112976f, 29.96387f },
	{ 25.00085f, -6.112976f, 19.96387f },
	{ 25.00085f, -6.112976f, -20.03613f },
	{ 15.00085f, -6.112976f, -30.03613f },
	{ -14.99915f, -6.112976f, -30.03613f },
	{ -24.99915f, -6.112976f, -20.03613f },
	{ 15.00085f, 1.885895f, 29.96387f },
	{ -14.99915f, 1.885895f, 29.96387f },
	{ -24.99915f, 1.885895f, 19.96387f },
	{ -24.99915f, 1.885895f, -20.03613f },
	{ -14.99915f, 1.885895f, -30.03613f },
	{ 15.00085f, 1.885895f, -30.03613f },
	{ 25.00085f, 1.885895f, -20.03613f },
	{ 25.00085f, 1.885895f, 19.96387f },
	{ 18.75085f, -9.868697f, -20.03613f },
	{ -18.74915f, -9.868697f, -20.03613f },
	{ 18.75085f, -9.868697f, 19.96387f },
	{ -18.74915f, -9.868697f, 19.96387f },
	{ 9.887324f, 4.893173f, 24.78662f },
	{ -10.11267f, 4.893173f, 24.78662f },
	{ -10.11267f, 1.885956f, 24.78662f },
	{ 9.887324f, 1.885956f, 24.78662f },
	{ -20.11267f, 4.893173f, 14.78662f },
	{ -20.11267f, 1.885956f, 14.78662f },
	{ -20.11267f, 1.885956f, -15.21338f },
	{ -20.11267f, 4.893173f, -15.21338f },
	{ -10.11267f, 1.885956f, -25.21338f },
	{ -10.11267f, 4.893173f, -25.21338f },
	{ 9.887324f, 1.885956f, -25.21338f },
	{ 9.887324f, 4.893173f, -25.21338f },
	{ 19.88732f, 1.885956f, -15.21338f },
	{ 19.88732f, 4.893173f, -15.21338f },
	{ 19.88732f, 1.885956f, 14.78662f },
	{ 19.88732f, 4.893173f, 14.78662f },
	{ 23.3573f, 9.868697f, -28.31079f },
	{ 25.02396f, -6.632767f, -30.97742f },
	{ 25.02396f, 8.133224f, -30.97742f },
	{ 26.02396f, -6.632767f, -29.97742f },
	{ 26.02396f, 8.133224f, -29.97742f },
	{ 23.3573f, -8.527451f, -28.31079f },
	{ 25.02396f, 1.366104f, -30.97742f },
	{ 26.02396f, 1.366104f, -29.97742f },
	{ 25.02396f, 4.373306f, -30.97742f },
	{ 26.02396f, 4.373306f, -29.97742f },
	{ 24.12396f, 1.366119f, -29.97742f },
	{ 24.12396f, 4.373215f, -29.97742f },
	{ 25.02396f, 4.373215f, -29.07739f },
	{ 25.02396f, 1.366119f, -29.07739f },
	{ 25.1073f, 9.868697f, -24.56079f },
	{ 19.6073f, 9.868697f, -30.06079f },
	{ 28.02396f, 8.133224f, -23.72742f },
	{ 18.77396f, 8.133224f, -32.97742f },
	{ 24.52396f, 9.868697f, -22.47742f },
	{ 25.02396f, 8.133224f, -19.97742f },
	{ 17.52396f, 9.868697f, -29.47742f },
	{ 15.02396f, 8.133224f, -29.97742f },
	{ 28.02396f, 4.373306f, -23.72742f },
	{ 18.77396f, 4.373306f, -32.97742f },
	{ 27.02396f, 4.373215f, -24.25244f },
	{ 19.29895f, 4.373215f, -31.97742f },
	{ 24.52396f, 4.373215f, -20.47742f },
	{ 15.02396f, 4.373306f, -29.97742f },
	{ 25.02396f, 4.373306f, -19.97742f },
	{ 15.52396f, 4.373215f, -29.47742f },
	{ 27.02396f, 1.366119f, -24.25244f },
	{ 19.29895f, 1.366119f, -31.97742f },
	{ 15.52396f, 1.366119f, -29.47742f },
	{ 24.52396f, 1.366119f, -20.47742f },
	{ 28.02396f, 1.366104f, -23.72742f },
	{ 25.02396f, 1.366104f, -19.97742f },
	{ 15.02396f, 1.366104f, -29.97742f },
	{ 18.77396f, 1.366104f, -32.97742f },
	{ 25.02396f, -6.632767f, -19.97742f },
	{ 19.6073f, -8.527451f, -30.06079f },
	{ 15.02396f, -6.632767f, -29.97742f },
	{ 17.52396f, -8.527451f, -29.47742f },
	{ 24.52396f, -8.527451f, -22.47742f },
	{ 28.02396f, -6.632767f, -23.72742f },
	{ 25.1073f, -8.527451f, -24.56079f },
	{ 18.77396f, -6.632767f, -32.97742f },
	{ -23.35733f, 9.868697f, 28.31029f },
	{ -25.02396f, -6.632767f, 30.97692f },
	{ -25.02396f, 8.133224f, 30.97692f },
	{ -26.02396f, -6.632767f, 29.97692f },
	{ -26.02396f, 8.133224f, 29.97692f },
	{ -23.35733f, -8.527451f, 28.31029f },
	{ -25.02396f, 1.366104f, 30.97692f },
	{ -26.02396f, 1.366104f, 29.97692f },
	{ -25.02396f, 4.373306f, 30.97692f },
	{ -26.02396f, 4.373306f, 29.97692f },
	{ -24.124f, 1.366119f, 29.97692f },
	{ -24.124f, 4.373215f, 29.97692f },
	{ -25.02396f, 4.373215f, 29.07689f },
	{ -25.02396f, 1.366119f, 29.07689f },
	{ -25.10733f, 9.868697f, 24.56029f },
	{ -19.60733f, 9.868697f, 30.06029f },
	{ -28.02396f, 8.133224f, 23.72692f },
	{ -18.77396f, 8.133224f, 32.97692f },
	{ -24.52396f, 9.868697f, 22.47692f },
	{ -25.02396f, 8.133224f, 19.97692f },
	{ -17.52396f, 9.868697f, 29.47692f },
	{ -15.02396f, 8.133224f, 29.97692f },
	{ -28.02396f, 4.373306f, 23.72692f },
	{ -18.77396f, 4.373306f, 32.97692f },
	{ -27.02396f, 4.373215f, 24.25194f },
	{ -19.29898f, 4.373215f, 31.97692f },
	{ -24.52396f, 4.373215f, 20.47692f },
	{ -15.02396f, 4.373306f, 29.97692f },
	{ -25.02396f, 4.373306f, 19.97692f },
	{ -15.52396f, 4.373215f, 29.47692f },
	{ -27.02396f, 1.366119f, 24.25194f },
	{ -19.29898f, 1.366119f, 31.97692f },
	{ -15.52396f, 1.366119f, 29.47692f },
	{ -24.52396f, 1.366119f, 20.47692f },
	{ -28.02396f, 1.366104f, 23.72692f },
	{ -25.02396f, 1.366104f, 19.97692f },
	{ -15.02396f, 1.366104f, 29.97692f },
	{ -18.77396f, 1.366104f, 32.97692f },
	{ -25.02396f, -6.632767f, 19.97692f },
	{ -19.60733f, -8.527451f, 30.06029f },
	{ -15.02396f, -6.632767f, 29.97692f },
	{ -17.52396f, -8.527451f, 29.47692f },
	{ -24.52396f, -8.527451f, 22.47692f },
	{ -28.02396f, -6.632767f, 23.72692f },
	{ -25.10733f, -8.527451f, 24.56029f },
	{ -18.77396f, -6.632767f, 32.97692f },
	{ 23.31061f, 9.868697f, 28.35766f },
	{ 25.97724f, -6.632767f, 30.02429f },
	{ 25.97724f, 8.133224f, 30.02429f },
	{ 24.97724f, -6.632767f, 31.02429f },
	{ 24.97724f, 8.133224f, 31.02429f },
	{ 23.31061f, -8.527451f, 28.35766f },
	{ 25.97724f, 1.366104f, 30.02429f },
	{ 24.97724f, 1.366104f, 31.02429f },
	{ 25.97724f, 4.373306f, 30.02429f },
	{ 24.97724f, 4.373306f, 31.02429f },
	{ 24.97724f, 1.366119f, 29.12433f },
	{ 24.97724f, 4.373215f, 29.12433f },
	{ 24.07721f, 4.373215f, 30.02429f },
	{ 24.07721f, 1.366119f, 30.02429f },
	{ 19.56061f, 9.868697f, 30.10766f },
	{ 25.06061f, 9.868697f, 24.60766f },
	{ 18.72724f, 8.133224f, 33.02429f },
	{ 27.97724f, 8.133224f, 23.77429f },
	{ 17.47724f, 9.868697f, 29.52429f },
	{ 14.97724f, 8.133224f, 30.02429f },
	{ 24.47724f, 9.868697f, 22.52429f },
	{ 24.97724f, 8.133224f, 20.02429f },
	{ 18.72724f, 4.373306f, 33.02429f },
	{ 27.97724f, 4.373306f, 23.77429f },
	{ 19.25227f, 4.373215f, 32.02429f },
	{ 26.97724f, 4.373215f, 24.29931f },
	{ 15.47724f, 4.373215f, 29.52429f },
	{ 24.97724f, 4.373306f, 20.02429f },
	{ 14.97724f, 4.373306f, 30.02429f },
	{ 24.47724f, 4.373215f, 20.52429f },
	{ 19.25227f, 1.366119f, 32.02429f },
	{ 26.97724f, 1.366119f, 24.29931f },
	{ 24.47724f, 1.366119f, 20.52429f },
	{ 15.47724f, 1.366119f, 29.52429f },
	{ 18.72724f, 1.366104f, 33.02429f },
	{ 14.97724f, 1.366104f, 30.02429f },
	{ 24.97724f, 1.366104f, 20.02429f },
	{ 27.97724f, 1.366104f, 23.77429f },
	{ 14.97724f, -6.632767f, 30.02429f },
	{ 25.06061f, -8.527451f, 24.60766f },
	{ 24.97724f, -6.632767f, 20.02429f },
	{ 24.47724f, -8.527451f, 22.52429f },
	{ 17.47724f, -8.527451f, 29.52429f },
	{ 18.72724f, -6.632767f, 33.02429f },
	{ 19.56061f, -8.527451f, 30.10766f },
	{ 27.97724f, -6.632767f, 23.77429f },
	{ -23.31082f, 9.868697f, -28.35754f },
	{ -25.97744f, -6.632767f, -30.02429f },
	{ -25.97744f, 8.133224f, -30.02429f },
	{ -24.97744f, -6.632767f, -31.02429f },
	{ -24.97744f, 8.133224f, -31.02429f },
	{ -23.31082f, -8.527451f, -28.35754f },
	{ -25.97744f, 1.366104f, -30.02429f },
	{ -24.97744f, 1.366104f, -31.02429f },
	{ -25.97744f, 4.373306f, -30.02429f },
	{ -24.97744f, 4.373306f, -31.02429f },
	{ -24.97744f, 1.366119f, -29.12427f },
	{ -24.97744f, 4.373215f, -29.12427f },
	{ -24.07742f, 4.373215f, -30.02429f },
	{ -24.07742f, 1.366119f, -30.02429f },
	{ -19.56082f, 9.868697f, -30.10754f },
	{ -25.06082f, 9.868697f, -24.60754f },
	{ -18.72744f, 8.133224f, -33.02429f },
	{ -27.97744f, 8.133224f, -23.77429f },
	{ -17.47744f, 9.868697f, -29.52429f },
	{ -14.97744f, 8.133224f, -30.02429f },
	{ -24.47744f, 9.868697f, -22.52429f },
	{ -24.97744f, 8.133224f, -20.02429f },
	{ -18.72744f, 4.373306f, -33.02429f },
	{ -27.97744f, 4.373306f, -23.77429f },
	{ -19.25247f, 4.373215f, -32.02429f },
	{ -26.97744f, 4.373215f, -24.29919f },
	{ -15.47744f, 4.373215f, -29.52429f },
	{ -24.97744f, 4.373306f, -20.02429f },
	{ -14.97744f, 4.373306f, -30.02429f },
	{ -24.47744f, 4.373215f, -20.52429f },
	{ -19.25247f, 1.366119f, -32.02429f },
	{ -26.97744f, 1.366119f, -24.29919f },
	{ -24.47744f, 1.366119f, -20.52429f },
	{ -15.47744f, 1.366119f, -29.52429f },
	{ -18.72744f, 1.366104f, -33.02429f },
	{ -14.97744f, 1.366104f, -30.02429f },
	{ -24.97744f, 1.366104f, -20.02429f },
	{ -27.97744f, 1.366104f, -23.77429f },
	{ -14.97744f, -6.632767f, -30.02429f },
	{ -25.06082f, -8.527451f, -24.60754f },
	{ -24.97744f, -6.632767f, -20.02429f },
	{ -24.47744f, -8.527451f, -22.52429f },
	{ -17.47744f, -8.527451f, -29.52429f },
	{ -18.72744f, -6.632767f, -33.02429f },
	{ -19.56082f, -8.527451f, -30.10754f },
	{ -27.97744f, -6.632767f, -23.77429f },
	{ 18.63732f, 9.810149f, -20.03613f },
	{ -18.86267f, 9.810149f, -20.03613f },
	{ -18.86267f, 9.810149f, 19.96387f },
	{ 18.63732f, 9.810149f, 19.96387f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000205F4[] = {
	{ -0.7627749f, 0.568855f, 0.307537f },
	{ -0.299426f, 0.588948f, 0.7506559f },
	{ 0.299426f, 0.588948f, 0.7506559f },
	{ 0.7627749f, 0.568855f, 0.307537f },
	{ 0.7627749f, 0.568855f, -0.307537f },
	{ 0.299426f, 0.588948f, -0.7506559f },
	{ -0.299426f, 0.588948f, -0.7506559f },
	{ -0.7627749f, 0.568855f, -0.307537f },
	{ 0.297107f, -0.630263f, 0.717284f },
	{ -0.00001f, -1, 0 },
	{ -0.29711f, -0.630262f, 0.717283f },
	{ -0.00001f, -1, 0 },
	{ -0.00001f, -1, 0 },
	{ -0.717284f, -0.630262f, 0.297108f },
	{ -0.00001f, -1, 0 },
	{ -0.717284f, -0.630262f, -0.297108f },
	{ -0.00001f, -1, 0 },
	{ -0.29711f, -0.630262f, -0.717283f },
	{ -0.00001f, -1, 0 },
	{ 0.297107f, -0.630263f, -0.717284f },
	{ -0.00002f, -1, 0 },
	{ 0.717283f, -0.630263f, -0.297109f },
	{ -0.00001f, -1, 0 },
	{ 0.717283f, -0.630263f, 0.297109f },
	{ -0.837048f, -0.438068f, 0.32779f },
	{ -0.306383f, -0.495905f, 0.8125319f },
	{ 0.306383f, -0.495905f, 0.8125319f },
	{ 0.837048f, -0.438068f, 0.32779f },
	{ 0.837048f, -0.438068f, -0.32779f },
	{ 0.306383f, -0.495905f, -0.8125319f },
	{ -0.306383f, -0.495905f, -0.8125319f },
	{ -0.837048f, -0.438068f, -0.32779f },
	{ 0.297109f, 0.630262f, 0.717284f },
	{ -0.297109f, 0.630262f, 0.717284f },
	{ -0.717284f, 0.630262f, 0.297109f },
	{ -0.717284f, 0.630262f, -0.297109f },
	{ -0.297109f, 0.630262f, -0.717284f },
	{ 0.297109f, 0.630262f, -0.717284f },
	{ 0.717284f, 0.630262f, -0.297109f },
	{ 0.717284f, 0.630262f, 0.297109f },
	{ 0.276663f, -0.937534f, -0.210921f },
	{ -0.276663f, -0.937534f, -0.210921f },
	{ 0.276663f, -0.937534f, 0.210921f },
	{ -0.276663f, -0.937534f, 0.210921f },
	{ 0.382683f, 0, 0.92388f },
	{ -0.382683f, 0, 0.92388f },
	{ -0.382683f, 0, 0.92388f },
	{ 0.382683f, 0, 0.92388f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.92388f, 0, 0.382683f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.382683f, 0, -0.92388f },
	{ 0.382683f, 0, -0.92388f },
	{ 0.382683f, 0, -0.92388f },
	{ 0.92388f, 0, -0.382683f },
	{ 0.92388f, 0, -0.382683f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.201031f, 0.958735f, -0.201032f },
	{ 0.467699f, -0.463109f, -0.752853f },
	{ 0.463262f, 0.4779f, -0.7463239f },
	{ 0.752853f, -0.463109f, -0.467698f },
	{ 0.7463239f, 0.4779f, -0.463262f },
	{ 0.215537f, -0.952411f, -0.215538f },
	{ 0.392148f, 0.6577179f, -0.6431389f },
	{ 0.8475929f, 0.120479f, -0.516789f },
	{ 0.392166f, -0.657722f, -0.643123f },
	{ 0.643152f, -0.657716f, -0.392129f },
	{ 0.365181f, 0.753736f, -0.546375f },
	{ 0.41466f, -0.665742f, -0.620358f },
	{ 0.620392f, -0.665741f, -0.414611f },
	{ 0.827833f, -0.092837f, -0.5532399f },
	{ 0.293976f, 0.955188f, 0.034555f },
	{ -0.0074f, 0.958774f, -0.284073f },
	{ 0.876857f, 0.4462f, 0.178961f },
	{ -0.150755f, 0.463126f, -0.873377f },
	{ -0.034542f, 0.899655f, 0.435232f },
	{ 0.042471f, 0.415052f, 0.908806f },
	{ -0.384987f, 0.921739f, 0.046704f },
	{ -0.896668f, 0.441303f, -0.035202f },
	{ 0.775735f, -0.614599f, 0.14319f },
	{ -0.143162f, -0.614616f, -0.775726f },
	{ 0.784826f, -0.61509f, 0.075581f },
	{ -0.075554f, -0.615107f, -0.784816f },
	{ 0.07469299f, -0.665208f, 0.742912f },
	{ -0.819178f, -0.571746f, -0.045321f },
	{ 0.045349f, -0.571731f, 0.819187f },
	{ -0.7429f, -0.665225f, -0.07466f },
	{ 0.7848499f, -0.615062f, 0.075556f },
	{ -0.07557099f, 0.615098f, -0.784821f },
	{ -0.742894f, 0.6652279f, -0.07470699f },
	{ 0.074788f, -0.665229f, 0.742884f },
	{ 0.7757609f, -0.614572f, 0.143163f },
	{ 0.045436f, -0.571752f, 0.819167f },
	{ -0.819172f, 0.571751f, -0.045367f },
	{ -0.143178f, 0.614607f, -0.775731f },
	{ 0.099971f, -0.415284f, 0.904182f },
	{ 0.019587f, -0.934243f, -0.3561f },
	{ -0.904183f, -0.415283f, -0.099969f },
	{ -0.381586f, -0.923001f, -0.049609f },
	{ 0.049612f, -0.923003f, 0.381582f },
	{ 0.9043249f, -0.410286f, 0.117737f },
	{ 0.356098f, -0.934243f, -0.01959f },
	{ -0.11774f, -0.410286f, -0.904324f },
	{ -0.201033f, 0.958734f, 0.201033f },
	{ -0.467699f, -0.463108f, 0.752854f },
	{ -0.463263f, 0.477899f, 0.746325f },
	{ -0.752854f, -0.463108f, 0.467699f },
	{ -0.746325f, 0.477899f, 0.463262f },
	{ -0.215539f, -0.952411f, 0.215539f },
	{ -0.392148f, 0.6577179f, 0.643138f },
	{ -0.8475929f, 0.120479f, 0.516789f },
	{ -0.392166f, -0.657722f, 0.643123f },
	{ -0.643152f, -0.657716f, 0.392129f },
	{ -0.365185f, 0.753738f, 0.54637f },
	{ -0.414666f, -0.665741f, 0.620356f },
	{ -0.620394f, -0.665743f, 0.414605f },
	{ -0.827837f, -0.092842f, 0.553232f },
	{ -0.293979f, 0.955187f, -0.034555f },
	{ 0.007398f, 0.958774f, 0.284073f },
	{ -0.876857f, 0.446199f, -0.178962f },
	{ 0.150754f, 0.463126f, 0.873377f },
	{ 0.034542f, 0.899655f, -0.435232f },
	{ -0.042471f, 0.415051f, -0.908806f },
	{ 0.384987f, 0.92174f, -0.046705f },
	{ 0.8966669f, 0.441303f, 0.035202f },
	{ -0.775735f, -0.614599f, -0.14319f },
	{ 0.143162f, -0.614617f, 0.775726f },
	{ -0.784826f, -0.61509f, -0.075581f },
	{ 0.075553f, -0.615107f, 0.784816f },
	{ -0.07469299f, -0.665208f, -0.742912f },
	{ 0.819178f, -0.571746f, 0.045321f },
	{ -0.045349f, -0.571731f, -0.819187f },
	{ 0.7428989f, -0.665227f, 0.074662f },
	{ -0.7848499f, -0.615062f, -0.075556f },
	{ 0.07556999f, 0.615098f, 0.784821f },
	{ 0.742893f, 0.665229f, 0.074708f },
	{ -0.074788f, -0.665229f, -0.742884f },
	{ -0.7757609f, -0.614572f, -0.143163f },
	{ -0.045435f, -0.571752f, -0.819167f },
	{ 0.819172f, 0.571751f, 0.045367f },
	{ 0.143178f, 0.614607f, 0.775731f },
	{ -0.099969f, -0.415283f, -0.904183f },
	{ -0.019588f, -0.934243f, 0.3561f },
	{ 0.904182f, -0.415283f, 0.09997f },
	{ 0.381585f, -0.9230019f, 0.049609f },
	{ -0.04961f, -0.9230019f, -0.381585f },
	{ -0.9043249f, -0.410286f, -0.11774f },
	{ -0.3561f, -0.934243f, 0.019588f },
	{ 0.117739f, -0.410286f, 0.9043249f },
	{ 0.201033f, 0.958734f, 0.201033f },
	{ 0.752854f, -0.463108f, 0.467699f },
	{ 0.746325f, 0.477899f, 0.463263f },
	{ 0.467699f, -0.463108f, 0.752854f },
	{ 0.463263f, 0.477899f, 0.746325f },
	{ 0.215539f, -0.952411f, 0.215539f },
	{ 0.6431389f, 0.6577179f, 0.392148f },
	{ 0.516789f, 0.120478f, 0.8475929f },
	{ 0.643123f, -0.657722f, 0.392166f },
	{ 0.392129f, -0.657716f, 0.643152f },
	{ 0.54637f, 0.753738f, 0.365184f },
	{ 0.620356f, -0.665741f, 0.414666f },
	{ 0.414606f, -0.665743f, 0.620394f },
	{ 0.553233f, -0.092842f, 0.827837f },
	{ -0.034555f, 0.955187f, 0.293979f },
	{ 0.284073f, 0.958774f, -0.007398f },
	{ -0.178961f, 0.446199f, 0.876858f },
	{ 0.873377f, 0.463126f, -0.150755f },
	{ -0.435232f, 0.899656f, -0.034542f },
	{ -0.908806f, 0.415051f, 0.042472f },
	{ -0.046705f, 0.92174f, -0.384987f },
	{ 0.035201f, 0.441303f, -0.8966669f },
	{ -0.143189f, -0.614599f, 0.775735f },
	{ 0.775726f, -0.614616f, -0.143162f },
	{ -0.07557999f, -0.61509f, 0.784826f },
	{ 0.784815f, -0.615107f, -0.075553f },
	{ -0.742912f, -0.665209f, 0.07469399f },
	{ 0.045321f, -0.571746f, -0.819178f },
	{ -0.819187f, -0.571731f, 0.045349f },
	{ 0.07466099f, -0.665227f, -0.7428989f },
	{ -0.075556f, -0.615062f, 0.7848499f },
	{ 0.784821f, 0.615098f, -0.07556999f },
	{ 0.074708f, 0.665229f, -0.742892f },
	{ -0.742884f, -0.665229f, 0.074789f },
	{ -0.143162f, -0.614572f, 0.7757609f },
	{ -0.819167f, -0.571752f, 0.045436f },
	{ 0.045367f, 0.571751f, -0.819172f },
	{ 0.775731f, 0.614607f, -0.143178f },
	{ -0.904182f, -0.415283f, 0.09997f },
	{ 0.3561f, -0.934243f, 0.019588f },
	{ 0.09997f, -0.415283f, -0.904182f },
	{ 0.049609f, -0.9230019f, -0.381585f },
	{ -0.381585f, -0.9230019f, 0.04961f },
	{ -0.117739f, -0.410286f, 0.9043249f },
	{ 0.019588f, -0.934243f, 0.3561f },
	{ 0.9043249f, -0.410286f, -0.11774f },
	{ -0.201031f, 0.9587359f, -0.201027f },
	{ -0.752852f, -0.463111f, -0.467699f },
	{ -0.746323f, 0.477902f, -0.463262f },
	{ -0.467697f, -0.463113f, -0.752852f },
	{ -0.46326f, 0.477904f, -0.746323f },
	{ -0.215536f, -0.952413f, -0.215533f },
	{ -0.643137f, 0.65772f, -0.392146f },
	{ -0.392146f, 0.65772f, -0.643137f },
	{ -0.643141f, -0.657719f, -0.392143f },
	{ -0.392152f, -0.65772f, -0.643134f },
	{ -0.620376f, 0.665743f, -0.414632f },
	{ -0.62038f, -0.665741f, -0.414629f },
	{ -0.41464f, -0.665743f, -0.620371f },
	{ -0.414635f, 0.6657439f, -0.620374f },
	{ 0.034553f, 0.9551899f, -0.293968f },
	{ -0.284074f, 0.958774f, 0.007404f },
	{ 0.178961f, 0.446203f, -0.876856f },
	{ -0.873377f, 0.463125f, 0.150754f },
	{ 0.435233f, 0.899655f, 0.034542f },
	{ 0.908805f, 0.415053f, -0.04247f },
	{ 0.046703f, 0.921738f, 0.38499f },
	{ -0.035203f, 0.441301f, 0.896669f },
	{ 0.143174f, -0.61461f, -0.7757289f },
	{ -0.775731f, -0.614606f, 0.14318f },
	{ 0.075563f, -0.6151f, -0.7848189f },
	{ -0.784821f, -0.615096f, 0.07557999f },
	{ 0.7429039f, -0.66522f, -0.074673f },
	{ -0.045338f, -0.571737f, 0.8191839f },
	{ 0.819182f, -0.57174f, -0.045331f },
	{ -0.07467499f, -0.665209f, 0.742914f },
	{ 0.075568f, 0.615099f, -0.78482f },
	{ -0.78482f, 0.615099f, 0.075577f },
	{ -0.0747f, 0.6652229f, 0.7428989f },
	{ 0.742892f, 0.665229f, -0.074705f },
	{ 0.143178f, 0.614608f, -0.77573f },
	{ 0.819172f, 0.571751f, -0.045364f },
	{ -0.045364f, 0.571751f, 0.819172f },
	{ -0.77573f, 0.614608f, 0.143178f },
	{ 0.90418f, -0.415287f, -0.099974f },
	{ -0.3561f, -0.934243f, -0.019582f },
	{ -0.099969f, -0.415282f, 0.904183f },
	{ -0.049607f, -0.923f, 0.381588f },
	{ 0.381573f, -0.923006f, -0.04962f },
	{ 0.117731f, -0.410287f, -0.9043249f },
	{ -0.019597f, -0.9342459f, -0.356092f },
	{ -0.904323f, -0.410288f, 0.11774f },
	{ 0.100902f, 0.991887f, -0.077318f },
	{ -0.100902f, 0.991887f, -0.077318f },
	{ -0.100902f, 0.991887f, 0.077318f },
	{ 0.100902f, 0.991887f, 0.077318f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00021194 = { vertex_0001FA54, normal_000205F4, LengthOfArray<Sint32>(vertex_0001FA54), meshlist_0001FA0C, matlist_0001EA34, LengthOfArray<Uint16>(meshlist_0001FA0C), LengthOfArray<Uint16>(matlist_0001EA34), { 0 }, 43.31219f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000211BC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00021194, -41.73162f, 100.0264f, -1.608821f, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000211F0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00021268[] = {
	4, 17, 16, 18, 19,
	4, 13, 12, 15, 14
};

extern "C" __declspec(dllexport) Sint16 poly_0002127C[] = {
	4, 9, 7, 14, 15,
	4, 11, 18, 6, 19
};

extern "C" __declspec(dllexport) Sint16 poly_00021290[] = {
	4, 5, 4, 1, 0
};

extern "C" __declspec(dllexport) Sint16 poly_0002129A[] = {
	4, 3, 13, 7, 15,
	4, 6, 19, 2, 16
};

extern "C" __declspec(dllexport) Sint16 poly_000212AE[] = {
	4, 1, 10, 5, 9,
	4, 4, 11, 0, 8
};

extern "C" __declspec(dllexport) Sint16 poly_000212C2[] = {
	4, 10, 3, 9, 7,
	4, 11, 6, 8, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_000212D8[] = {
	{ 0, 255 },
	{ 0 },
	{ 1019, 255 },
	{ 1019, 0 },
	{ 0 },
	{ 0, 255 },
	{ 1019, 0 },
	{ 1019, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000212F8[] = {
	{ 0, 254 },
	{ 0, -510 },
	{ 255, -1 },
	{ 255, -510 },
	{ 255, 254 },
	{ 0, 83 },
	{ 255, -255 },
	{ 0, -254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00021318[] = {
	{ 254, 254 },
	{ 254, -254 },
	{ 0, 254 },
	{ 0, -254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00021328[] = {
	{ 0, 255 },
	{ 0 },
	{ 2039, 254 },
	{ 2039, 0 },
	{ 2039, 0 },
	{ 2039, 254 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00021348[] = {
	{ 0, 105 },
	{ 0, 255 },
	{ 1019, 105 },
	{ 1019, 254 },
	{ 1019, -610 },
	{ 1019, -765 },
	{ 0, -610 },
	{ 0, -764 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00021368[] = {
	{ 0, 254 },
	{ 0, -254 },
	{ 1019, 254 },
	{ 1019, -255 },
	{ 1019, 254 },
	{ 1019, -255 },
	{ 0, 254 },
	{ 0, -254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00021388[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00021268, NULL, NULL, NULL, uv_000212D8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0002127C, NULL, NULL, NULL, uv_000212F8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00021290, NULL, NULL, NULL, uv_00021318, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_0002129A, NULL, NULL, NULL, uv_00021328, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_000212AE, NULL, NULL, NULL, uv_00021348, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, poly_000212C2, NULL, NULL, NULL, uv_00021368, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00021418[] = {
	{ -26.89945f, -8.689009f, 18.03865f },
	{ -26.89945f, -8.689009f, -16.47434f },
	{ -26.89945f, 12.31106f, 25.41421f },
	{ -26.89944f, 12.31106f, -23.66119f },
	{ 17.00738f, -8.689008f, 18.03867f },
	{ 17.00738f, -8.689008f, -16.47432f },
	{ 17.00738f, 12.31106f, 25.41423f },
	{ 17.00738f, 12.31106f, -23.66117f },
	{ -26.89945f, -6.387267f, 25.41421f },
	{ 17.00739f, -6.38725f, -23.66117f },
	{ -26.89944f, -6.387251f, -23.66119f },
	{ 17.00738f, -6.387249f, 25.41423f },
	{ -26.89945f, -0.111556f, -19.27946f },
	{ -26.89945f, 12.31106f, -19.27946f },
	{ 17.00738f, -0.111556f, -19.27944f },
	{ 17.00738f, 12.31106f, -19.27943f },
	{ -26.89945f, 12.31106f, 21.03248f },
	{ -26.89945f, -0.111558f, 21.03248f },
	{ 17.00738f, -0.111557f, 21.0325f },
	{ 17.00738f, 12.31106f, 21.0325f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00021508[] = {
	{ 0, -0.988584f, 0.150674f },
	{ 0, -0.988015f, -0.154356f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, -0.988584f, 0.150674f },
	{ 0, -0.988015f, -0.154356f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0, -0.592492f, 0.805577f },
	{ 0.233544f, -0.573185f, -0.78544f },
	{ 0, -0.5894859f, -0.8077779f },
	{ 0.234147f, -0.576021f, 0.783183f },
	{ -0.00001f, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.8497649f, 0, 0.5271609f },
	{ 0.57735f, 0.57735f, 0.577351f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.000001f, 0, -1 },
	{ 0.849766f, 0, -0.5271609f },
	{ 0.57735f, 0.57735f, -0.57735f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000215F8 = { vertex_00021418, normal_00021508, LengthOfArray<Sint32>(vertex_00021418), meshlist_00021388, matlist_000211F0, LengthOfArray<Uint16>(meshlist_00021388), LengthOfArray<Uint16>(matlist_000211F0), { -4.946034f, 1.811028f, 0.876521f }, 32.92495f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00021620 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000215F8, -83.73893f, 108.8447f, -1.108699f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00021654[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00021668[] = {
	4, 0, 2, 1, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_00021674[] = {
	{ 255, 0 },
	{ 255, 0 },
	{ 255, 1530 },
	{ 255, 1529 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00021684[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00021668, NULL, NULL, NULL, uv_00021674, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002169C[] = {
	{ -26.89945f, -0.111556f, -19.27946f },
	{ 17.00738f, -0.111556f, -19.27944f },
	{ -26.89945f, -0.111558f, 21.03248f },
	{ 17.00738f, -0.111557f, 21.0325f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000216CC[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000216FC = { vertex_0002169C, normal_000216CC, LengthOfArray<Sint32>(vertex_0002169C), meshlist_00021684, matlist_00021654, LengthOfArray<Uint16>(meshlist_00021684), LengthOfArray<Uint16>(matlist_00021654), { -4.946034f, -0.111557f, 0.8765219f }, 29.80296f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00021724 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000216FC, -83.73893f, 108.8447f, -1.108699f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00021758[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00021820[] = {
	4, 13, 11, 12, 10,
	4, 3, 1, 2, 0,
	4, 11, 9, 10, 8,
	4, 1, 15, 0, 14,
	4, 5, 3, 4, 2,
	4, 9, 7, 8, 6,
	4, 15, 13, 14, 12,
	4, 7, 5, 6, 4,
	4, 29, 27, 28, 26,
	4, 19, 17, 18, 16,
	4, 27, 25, 26, 24,
	4, 17, 31, 16, 30,
	4, 21, 19, 20, 18,
	4, 25, 23, 24, 22,
	4, 31, 29, 30, 28,
	4, 23, 21, 22, 20,
	4, 53, 51, 52, 50,
	4, 43, 41, 42, 40,
	4, 51, 49, 50, 48,
	4, 41, 55, 40, 54,
	4, 45, 43, 44, 42,
	4, 49, 47, 48, 46,
	4, 55, 53, 54, 52,
	4, 47, 45, 46, 44,
	4, 69, 67, 68, 66,
	4, 59, 57, 58, 56,
	4, 67, 65, 66, 64,
	4, 57, 71, 56, 70,
	4, 61, 59, 60, 58,
	4, 65, 63, 64, 62,
	4, 71, 69, 70, 68,
	4, 63, 61, 62, 60,
	4, 115, 117, 111, 113,
	6, 115, 114, 117, 116, 113, 112,
	4, 116, 114, 112, 110,
	3, 101, 105, 103,
	4, 105, 104, 103, 102,
	3, 100, 102, 104
};

extern "C" __declspec(dllexport) Sint16 poly_0002199C[] = {
	4, 109, 108, 107, 106
};

extern "C" __declspec(dllexport) Sint16 poly_000219A6[] = {
	4, 39, 37, 35, 33,
	4, 34, 38, 35, 39,
	4, 94, 92, 98, 96,
	4, 94, 98, 95, 99
};

extern "C" __declspec(dllexport) Sint16 poly_000219CE[] = {
	4, 37, 39, 36, 38,
	3, 76, 72, 80,
	0x8000u | 5, 80, 78, 72, 90, 88,
	0x8000u | 5, 77, 73, 81, 84, 86,
	3, 77, 83, 81,
	4, 97, 99, 96, 98
};

extern "C" __declspec(dllexport) Sint16 poly_00021A0A[] = {
	4, 33, 32, 35, 34,
	4, 93, 92, 95, 94
};

extern "C" __declspec(dllexport) Sint16 poly_00021A1E[] = {
	4, 33, 37, 32, 36
};

extern "C" __declspec(dllexport) Sint16 poly_00021A28[] = {
	3, 81, 83, 82,
	3, 78, 79, 80,
	4, 87, 86, 82, 81,
	4, 85, 87, 75, 82,
	4, 90, 91, 78, 79,
	4, 91, 89, 79, 74,
	4, 88, 89, 90, 91,
	4, 87, 85, 86, 84
};

extern "C" __declspec(dllexport) Sint16 poly_00021A74[] = {
	4, 108, 112, 106, 110,
	4, 107, 106, 111, 110,
	4, 113, 109, 111, 107,
	4, 113, 112, 109, 108
};

extern "C" __declspec(dllexport) Sint16 poly_00021A9C[] = {
	4, 93, 97, 92, 96
};

extern "C" __declspec(dllexport) Sint16 poly_00021AA6[] = {
	4, 103, 102, 101, 100
};

extern "C" __declspec(dllexport) NJS_TEX uv_00021AB0[] = {
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 138, 254 },
	{ 252, 2 },
	{ 2, 3 },
	{ 253, 1 },
	{ 253, 253 },
	{ 1, 1 },
	{ 1, 253 },
	{ 138, 254 },
	{ 0 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00021D10[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00021D20[] = {
	{ 254, 254 },
	{ 254, 40 },
	{ 0, 254 },
	{ 0, 184 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
	{ 0, 254 },
	{ 0, 184 },
	{ 254, 254 },
	{ 254, 40 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00021D60[] = {
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 0 },
	{ 0 },
	{ 508, 255 },
	{ 0, 255 },
	{ 508, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00021D80[] = {
	{ 510, 254 },
	{ 510, -255 },
	{ 0, 254 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00021D90[] = {
	{ 0, 86 },
	{ 0, 36 },
	{ 250, 92 },
	{ 0, 36 },
	{ 250, 92 },
	{ 0, 86 },
	{ 252, 252 },
	{ 0, 252 },
	{ 250, 92 },
	{ 0, 54 },
	{ 0, 254 },
	{ 0, 60 },
	{ 166, 254 },
	{ 166, 58 },
	{ 0, 252 },
	{ 252, 252 },
	{ 0, 54 },
	{ 250, 92 },
	{ 0, 60 },
	{ 0, 254 },
	{ 166, 58 },
	{ 166, 254 },
	{ 252, 252 },
	{ 2, 252 },
	{ 252, 2 },
	{ 2, 62 },
	{ 2, 62 },
	{ 2, 252 },
	{ 252, 2 },
	{ 252, 252 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00021E08[] = {
	{ 254, 255 },
	{ 0, 255 },
	{ 254, 0 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 254, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 0, 255 },
	{ 254, 0 },
	{ 0 },
	{ 254, 0 },
	{ 254, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00021E48[] = {
	{ 508, 254 },
	{ 508, -255 },
	{ 0, 254 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00021E58[] = {
	{ 510, -764 },
	{ 0, -764 },
	{ 510, 254 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00021E68[] = {
	{ NJD_MESHSET_TRIMESH | 0, 38, poly_00021820, NULL, NULL, NULL, uv_00021AB0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0002199C, NULL, NULL, NULL, uv_00021D10, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_000219A6, NULL, NULL, NULL, uv_00021D20, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 6, poly_000219CE, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_00021A0A, NULL, NULL, NULL, uv_00021D60, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_00021A1E, NULL, NULL, NULL, uv_00021D80, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 8, poly_00021A28, NULL, NULL, NULL, uv_00021D90, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 4, poly_00021A74, NULL, NULL, NULL, uv_00021E08, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 1, poly_00021A9C, NULL, NULL, NULL, uv_00021E48, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 1, poly_00021AA6, NULL, NULL, NULL, uv_00021E58, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00021F58[] = {
	{ 2.971252f, 34.6452f, 39 },
	{ 2.971252f, 34.6452f, 47 },
	{ -4.099815f, 31.71625f, 39 },
	{ -4.099815f, 31.71625f, 47 },
	{ -7.028748f, 24.6452f, 39 },
	{ -7.028748f, 24.6452f, 47 },
	{ -4.099815f, 17.57413f, 39 },
	{ -4.099815f, 17.57413f, 47 },
	{ 2.971252f, 14.64519f, 39 },
	{ 2.971252f, 14.64519f, 47 },
	{ 10.04233f, 17.57413f, 39 },
	{ 10.04233f, 17.57413f, 47 },
	{ 12.97125f, 24.6452f, 39 },
	{ 12.97125f, 24.6452f, 47 },
	{ 10.04231f, 31.71625f, 39 },
	{ 10.04231f, 31.71625f, 47 },
	{ 2.971252f, 34.6452f, -48 },
	{ 2.971252f, 34.6452f, -40 },
	{ -4.099815f, 31.71625f, -48 },
	{ -4.099815f, 31.71625f, -40 },
	{ -7.028748f, 24.6452f, -48 },
	{ -7.028748f, 24.6452f, -40 },
	{ -4.099815f, 17.57413f, -48 },
	{ -4.099815f, 17.57413f, -40 },
	{ 2.971252f, 14.64519f, -48 },
	{ 2.971252f, 14.64519f, -40 },
	{ 10.04233f, 17.57413f, -48 },
	{ 10.04233f, 17.57413f, -40 },
	{ 12.97125f, 24.6452f, -48 },
	{ 12.97125f, 24.6452f, -40 },
	{ 10.04231f, 31.71625f, -48 },
	{ 10.04231f, 31.71625f, -40 },
	{ -7.46669f, -42.08244f, -75 },
	{ -7.46669f, -42.08244f, -10 },
	{ -17.57941f, -62.26635f, -75 },
	{ -17.57941f, -62.26635f, -10 },
	{ 46.63444f, 11.6441f, -75 },
	{ 46.63444f, 11.6441f, -10 },
	{ 46.65295f, -41.68516f, -75 },
	{ 46.65295f, -41.68516f, -10 },
	{ 2.971252f, 34.6452f, 5 },
	{ 2.971252f, 34.6452f, 13 },
	{ -4.099815f, 31.71625f, 5 },
	{ -4.099815f, 31.71625f, 13 },
	{ -7.028748f, 24.6452f, 5 },
	{ -7.028748f, 24.6452f, 13 },
	{ -4.099815f, 17.57413f, 5 },
	{ -4.099815f, 17.57413f, 13 },
	{ 2.971252f, 14.64519f, 5 },
	{ 2.971252f, 14.64519f, 13 },
	{ 10.04233f, 17.57413f, 5 },
	{ 10.04233f, 17.57413f, 13 },
	{ 12.97125f, 24.6452f, 5 },
	{ 12.97125f, 24.6452f, 13 },
	{ 10.04231f, 31.71625f, 5 },
	{ 10.04231f, 31.71625f, 13 },
	{ 2.971252f, 34.6452f, -13 },
	{ 2.971252f, 34.6452f, -5 },
	{ -4.099815f, 31.71625f, -13 },
	{ -4.099815f, 31.71625f, -5 },
	{ -7.028748f, 24.6452f, -13 },
	{ -7.028748f, 24.6452f, -5 },
	{ -4.099815f, 17.57413f, -13 },
	{ -4.099815f, 17.57413f, -5 },
	{ 2.971252f, 14.64519f, -13 },
	{ 2.971252f, 14.64519f, -5 },
	{ 10.04233f, 17.57413f, -13 },
	{ 10.04233f, 17.57413f, -5 },
	{ 12.97125f, 24.6452f, -13 },
	{ 12.97125f, 24.6452f, -5 },
	{ 10.04231f, 31.71625f, -13 },
	{ 10.04231f, 31.71625f, -5 },
	{ 28.74567f, -6.276001f, -9.996002f },
	{ 28.74567f, -6.276001f, 9.996002f },
	{ 20.82086f, 19.98941f, -9.996002f },
	{ 20.82086f, 19.98941f, 9.996002f },
	{ 39.34802f, 4.330582f, -9.996002f },
	{ 39.34802f, 4.330582f, 9.996002f },
	{ 28.74567f, -6.276001f, -59.35125f },
	{ 22.23451f, 18.57519f, -47.48101f },
	{ 39.34802f, 4.330582f, -59.35125f },
	{ 28.74567f, -6.276001f, 59.35125f },
	{ 22.23451f, 18.57519f, 47.48101f },
	{ 39.34802f, 4.330582f, 59.35125f },
	{ 5.332489f, -28.79034f, 9.996002f },
	{ 1.406113f, -0.524963f, 9.996002f },
	{ 5.332489f, -28.79034f, 59.35125f },
	{ 2.819748f, -1.939163f, 47.48101f },
	{ 5.332489f, -28.79034f, -9.996002f },
	{ 1.406113f, -0.524963f, -9.996002f },
	{ 5.332489f, -28.79034f, -59.35125f },
	{ 2.819748f, -1.939163f, -47.48101f },
	{ -7.46669f, -42.08244f, 10 },
	{ -7.46669f, -42.08244f, 75 },
	{ -17.57941f, -62.26635f, 10 },
	{ -17.57941f, -62.26635f, 75 },
	{ 46.63444f, 11.6441f, 10 },
	{ 46.63444f, 11.6441f, 75 },
	{ 46.66375f, -41.67567f, 10 },
	{ 46.66375f, -41.67567f, 75 },
	{ 12.45793f, -38.73366f, -10.46457f },
	{ 12.45793f, -38.73366f, 10.11785f },
	{ -20.02875f, 36.26635f, -10.46457f },
	{ -20.02875f, 36.26635f, 10.11785f },
	{ 39.97125f, 36.26635f, -10.46457f },
	{ 39.97125f, 36.26635f, 10.11785f },
	{ -41.68087f, 36.26635f, -13.00112f },
	{ -41.68087f, 36.26635f, 12.99833f },
	{ -46.66375f, 62.26635f, -13.00112f },
	{ -46.66375f, 62.26635f, 12.99833f },
	{ 4.971252f, 36.26635f, -13.00112f },
	{ 4.971252f, 36.26635f, 12.99833f },
	{ 4.971252f, 62.26635f, -13.00112f },
	{ 4.971252f, 62.26635f, 12.99833f },
	{ 14.97125f, 36.26635f, -13.00112f },
	{ 14.97125f, 36.26635f, 12.99833f },
	{ 14.97125f, 44.26635f, -13.00112f },
	{ 14.97125f, 44.26635f, 12.99833f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000224E0[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.7071069f, 0.707106f, 0 },
	{ -0.7071069f, 0.707106f, 0 },
	{ -1, 0.000001f, 0 },
	{ -1, 0.000001f, 0 },
	{ -0.7071069f, -0.707106f, 0 },
	{ -0.7071069f, -0.707106f, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0.7071069f, -0.707106f, 0 },
	{ 0.7071069f, -0.707106f, 0 },
	{ 1, 0.000002f, 0 },
	{ 1, 0.000002f, 0 },
	{ 0.7071069f, 0.707106f, 0 },
	{ 0.7071069f, 0.707106f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.7071069f, 0.707106f, 0 },
	{ -0.7071069f, 0.707106f, 0 },
	{ -1, 0.000001f, 0 },
	{ -1, 0.000001f, 0 },
	{ -0.7071069f, -0.707106f, 0 },
	{ -0.7071069f, -0.707106f, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0.7071069f, -0.707106f, 0 },
	{ 0.7071069f, -0.707106f, 0 },
	{ 1, 0.000002f, 0 },
	{ 1, 0.000002f, 0 },
	{ 0.7071069f, 0.707106f, 0 },
	{ 0.7071069f, 0.707106f, 0 },
	{ -0.809984f, 0.5864519f, 0 },
	{ -0.599466f, 0.434031f, 0.672501f },
	{ -0.759531f, -0.650471f, 0 },
	{ -0.635732f, -0.5444469f, 0.547195f },
	{ 0.384127f, 0.9232799f, 0 },
	{ 0.321562f, 0.772899f, 0.547015f },
	{ 0.807919f, -0.5892929f, 0 },
	{ 0.6490999f, -0.473451f, 0.59541f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.7071069f, 0.707106f, 0 },
	{ -0.7071069f, 0.707106f, 0 },
	{ -1, 0.000001f, 0 },
	{ -1, 0.000001f, 0 },
	{ -0.7071069f, -0.707106f, 0 },
	{ -0.7071069f, -0.707106f, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0.7071069f, -0.707106f, 0 },
	{ 0.7071069f, -0.707106f, 0 },
	{ 1, 0.000002f, 0 },
	{ 1, 0.000002f, 0 },
	{ 0.7071069f, 0.707106f, 0 },
	{ 0.7071069f, 0.707106f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.7071069f, 0.707106f, 0 },
	{ -0.7071069f, 0.707106f, 0 },
	{ -1, 0.000001f, 0 },
	{ -1, 0.000001f, 0 },
	{ -0.7071069f, -0.707106f, 0 },
	{ -0.7071069f, -0.707106f, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0.7071069f, -0.707106f, 0 },
	{ 0.7071069f, -0.707106f, 0 },
	{ 1, 0.000002f, 0 },
	{ 1, 0.000002f, 0 },
	{ 0.7071069f, 0.707106f, 0 },
	{ 0.7071069f, 0.707106f, 0 },
	{ 0.7002259f, -0.713921f, 0 },
	{ 0.7002259f, -0.713921f, 0 },
	{ -0.725274f, 0.686398f, -0.053248f },
	{ -0.725274f, 0.686398f, 0.053248f },
	{ 0.707248f, -0.706966f, 0 },
	{ 0.707248f, -0.706966f, 0 },
	{ 0.362065f, -0.367142f, -0.856805f },
	{ -0.602386f, 0.585544f, -0.542465f },
	{ 0.389607f, -0.389452f, -0.834586f },
	{ 0.348957f, -0.374726f, 0.858959f },
	{ -0.61029f, 0.581109f, 0.538385f },
	{ 0.389607f, -0.389452f, 0.834586f },
	{ -0.327323f, -0.944912f, 0 },
	{ -0.946825f, 0.319754f, 0.035779f },
	{ -0.304501f, -0.6980669f, 0.64806f },
	{ -0.82828f, 0.349973f, 0.437574f },
	{ -0.327323f, -0.944912f, 0 },
	{ -0.946825f, 0.319754f, -0.035779f },
	{ -0.288157f, -0.696732f, -0.656909f },
	{ -0.82239f, 0.355923f, -0.44384f },
	{ -0.599466f, 0.434031f, -0.672501f },
	{ -0.809984f, 0.5864519f, 0 },
	{ -0.6357099f, -0.544475f, -0.547193f },
	{ -0.759504f, -0.650503f, 0 },
	{ 0.321482f, 0.772928f, -0.54702f },
	{ 0.384034f, 0.923319f, 0 },
	{ 0.649173f, -0.473361f, -0.595403f },
	{ 0.808004f, -0.589177f, 0 },
	{ -0.825939f, -0.35776f, -0.435699f },
	{ -0.825939f, -0.35776f, 0.435699f },
	{ -0.693191f, 0.455167f, -0.558847f },
	{ -0.693191f, 0.455167f, 0.558847f },
	{ 0, 0.78997f, -0.6131459f },
	{ 0, 0.78997f, 0.6131459f },
	{ -0.515336f, -0.623478f, -0.587967f },
	{ -0.515336f, -0.623478f, 0.587967f },
	{ -0.634357f, 0.524328f, -0.568041f },
	{ -0.634357f, 0.524328f, 0.568041f },
	{ 0, -0.447214f, -0.8944269f },
	{ 0, -0.447214f, 0.8944269f },
	{ 0.402314f, 0.683738f, -0.608806f },
	{ 0.402314f, 0.683738f, 0.608806f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.731668f, 0.189594f, -0.654765f },
	{ 0.731668f, 0.189594f, 0.654765f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00022A68 = { vertex_00021F58, normal_000224E0, LengthOfArray<Sint32>(vertex_00021F58), meshlist_00021E68, matlist_00021758, LengthOfArray<Uint16>(meshlist_00021E68), LengthOfArray<Uint16>(matlist_00021758), { 0.000004f, 0, 0 }, 97.47871f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00022A90 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00022A68, 131.0509f, 237.7565f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00022AC4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 1, NJD_D_025 | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | 0x1 }
};

extern "C" __declspec(dllexport) Sint16 poly_00022AD8[] = {
	18, 13, 14, 15, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14
};

extern "C" __declspec(dllexport) NJS_TEX uv_00022B00[] = {
	{ 510, -255 },
	{ 434, 255 },
	{ 434, -255 },
	{ 255, 255 },
	{ 255, -255 },
	{ 74, 255 },
	{ 74, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 74, 255 },
	{ 74, -255 },
	{ 255, 255 },
	{ 255, -255 },
	{ 434, 255 },
	{ 434, -255 },
	{ 510, 255 },
	{ 510, -255 },
	{ 434, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00022B48[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00022AD8, NULL, NULL, NULL, uv_00022B00, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00022B60[] = {
	{ 60.59998f, 9.368798f, 0 },
	{ 60.59998f, 29.57634f, 0 },
	{ 42.85065f, 9.368798f, -42.85065f },
	{ 42.85065f, 29.57634f, -42.85065f },
	{ 0, 9.368798f, -60.59998f },
	{ 0, 29.57634f, -60.59998f },
	{ -42.85065f, 9.368798f, -42.85065f },
	{ -42.85065f, 29.57634f, -42.85065f },
	{ -60.59998f, 9.368798f, 0 },
	{ -60.59998f, 29.57634f, 0 },
	{ -42.85065f, 9.368798f, 42.85065f },
	{ -42.85065f, 29.57634f, 42.85065f },
	{ 0, 9.368798f, 60.59998f },
	{ 0, 29.57634f, 60.59998f },
	{ 42.85065f, 9.368798f, 42.85065f },
	{ 42.85065f, 29.57634f, 42.85065f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00022C20[] = {
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00022CE0 = { vertex_00022B60, normal_00022C20, LengthOfArray<Sint32>(vertex_00022B60), meshlist_00022B48, matlist_00022AC4, LengthOfArray<Uint16>(meshlist_00022B48), LengthOfArray<Uint16>(matlist_00022AC4), { 0, 19.47257f, 0 }, 85.7013f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00022D08 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00022CE0, 168.3654f, 74.02424f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00022D3C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00022D64[] = {
	4, 1, 4, 3, 6,
	4, 0, 5, 1, 4,
	4, 2, 7, 0, 5,
	3, 12, 16, 9,
	4, 10, 17, 12, 16,
	4, 12, 9, 10, 13,
	4, 11, 9, 8, 16,
	3, 13, 17, 10,
	4, 17, 13, 14, 15
};

extern "C" __declspec(dllexport) Sint16 poly_00022DBA[] = {
	4, 2, 0, 3, 1,
	4, 8, 16, 14, 17
};

extern "C" __declspec(dllexport) NJS_TEX uv_00022DD0[] = {
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00022E58[] = {
	{ 255, 254 },
	{ 255, -1274 },
	{ 0, 254 },
	{ 0, -1274 },
	{ 255, 254 },
	{ 255, -1274 },
	{ 0, 254 },
	{ 0, -1274 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00022E78[] = {
	{ NJD_MESHSET_TRIMESH | 0, 9, poly_00022D64, NULL, NULL, NULL, uv_00022DD0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00022DBA, NULL, NULL, NULL, uv_00022E58, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00022EA8[] = {
	{ 3.656364f, 11.17191f, -9.000233f },
	{ 3.656364f, 19.17191f, -9.000233f },
	{ 3.656364f, -0.8280939f, 10.99977f },
	{ 3.656364f, 19.17191f, 10.99977f },
	{ 2.656364f, 19.17191f, -9.000233f },
	{ 2.656364f, 11.17191f, -9.000233f },
	{ 2.656364f, 19.17191f, 10.99977f },
	{ 2.656364f, -0.8280939f, 10.99977f },
	{ -5.343636f, -1.828094f, 10.99977f },
	{ -5.343636f, 21.17191f, -8.000233f },
	{ 2.656364f, 19.17191f, -11.00023f },
	{ -5.343636f, 21.17191f, 10.99977f },
	{ -5.343636f, 19.17191f, -11.00023f },
	{ 2.656364f, 21.17191f, -8.000233f },
	{ 2.656364f, -1.828094f, 10.99977f },
	{ 2.656364f, 21.17191f, 10.99977f },
	{ -5.343636f, 11.17191f, -11.00023f },
	{ 2.656364f, 11.17191f, -11.00023f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00022F80[] = {
	{ 0.6112159f, -0.389953f, -0.688732f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.548486f, -0.717001f, -0.430201f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, -0.492699f, -0.8702f },
	{ 0, 1, 0 },
	{ 0, -0.857493f, -0.514496f },
	{ -0.550976f, -0.718461f, -0.424545f },
	{ -0.851754f, 0.435946f, -0.290631f },
	{ 0.614732f, 0.372171f, -0.695409f },
	{ -1, 0, 0 },
	{ -0.614732f, 0.372171f, -0.695409f },
	{ 0.851754f, 0.435946f, -0.290631f },
	{ 0.550976f, -0.718461f, -0.424545f },
	{ 1, 0, 0 },
	{ -0.610727f, -0.392449f, -0.6877469f },
	{ 0.610727f, -0.392449f, -0.6877469f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00023058 = { vertex_00022EA8, normal_00022F80, LengthOfArray<Sint32>(vertex_00022EA8), meshlist_00022E78, matlist_00022D3C, LengthOfArray<Uint16>(meshlist_00022E78), LengthOfArray<Uint16>(matlist_00022D3C), { -0.843636f, 9.671906f, -0.000233f }, 15.91383f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00023080 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023058, -14.65637f, 215.8281f, 59.00023f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000230B4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000230DC[] = {
	4, 3, 6, 1, 4,
	4, 1, 4, 0, 5,
	4, 0, 5, 2, 7,
	3, 9, 16, 12,
	4, 12, 16, 10, 17,
	4, 10, 13, 12, 9,
	4, 8, 16, 11, 9,
	3, 10, 17, 13,
	4, 14, 15, 17, 13
};

extern "C" __declspec(dllexport) Sint16 poly_00023132[] = {
	4, 3, 1, 2, 0,
	4, 14, 17, 8, 16
};

extern "C" __declspec(dllexport) NJS_TEX uv_00023148[] = {
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000231D0[] = {
	{ 0, 254 },
	{ 0, -1274 },
	{ 255, 254 },
	{ 255, -1274 },
	{ 0, 254 },
	{ 0, -1274 },
	{ 255, 254 },
	{ 255, -1274 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000231F0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 9, poly_000230DC, NULL, NULL, NULL, uv_00023148, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00023132, NULL, NULL, NULL, uv_000231D0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00023220[] = {
	{ 4.990364f, 11.17192f, 8.673096f },
	{ 4.990364f, 19.17192f, 8.673096f },
	{ 4.990364f, -16.82808f, -11.3269f },
	{ 4.990021f, 19.05f, -11.00049f },
	{ 2.990364f, 19.05054f, 8.673096f },
	{ 2.990364f, 11.05054f, 8.673096f },
	{ 2.990021f, 19.05f, -11.00049f },
	{ 2.990364f, -16.94946f, -11.3269f },
	{ -5.009636f, -20.94946f, -11.3269f },
	{ -5.009636f, 21.05054f, 7.673096f },
	{ 2.990364f, 19.05054f, 10.6731f },
	{ -5.009636f, 21.05054f, -11.3269f },
	{ -5.009636f, 19.05054f, 10.6731f },
	{ 2.990364f, 21.05054f, 7.673096f },
	{ 2.990364f, -20.94946f, -11.3269f },
	{ 2.990364f, 21.05054f, -11.3269f },
	{ -5.009636f, 11.05054f, 10.6731f },
	{ 2.990364f, 11.05054f, 10.6731f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000232F8[] = {
	{ 0.6510929f, -0.223464f, 0.725356f },
	{ 0.572692f, 0.592587f, 0.566448f },
	{ 0.381522f, -0.5372739f, 0.7521819f },
	{ 0.699869f, 0.714258f, -0.004437f },
	{ -0.021103f, 0.695424f, 0.718289f },
	{ 0.019162f, -0.315723f, 0.948658f },
	{ -0.030331f, 0.999521f, -0.006194f },
	{ 0.035254f, -0.5808769f, 0.813228f },
	{ -0.358013f, -0.528977f, 0.769422f },
	{ -0.851754f, 0.435946f, 0.290631f },
	{ 0.614732f, 0.372171f, 0.695409f },
	{ -1, 0, 0 },
	{ -0.614732f, 0.372171f, 0.695409f },
	{ 0.851754f, 0.435946f, 0.290631f },
	{ 0.358013f, -0.528977f, 0.769422f },
	{ 1, 0, 0 },
	{ -0.64604f, -0.226405f, 0.7289529f },
	{ 0.64604f, -0.226405f, 0.7289529f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000233D0 = { vertex_00023220, normal_000232F8, LengthOfArray<Sint32>(vertex_00023220), meshlist_000231F0, matlist_000230B4, LengthOfArray<Uint16>(meshlist_000231F0), LengthOfArray<Uint16>(matlist_000230B4), { -0.009636f, 0.050537f, -0.326904f }, 23.70654f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000233F8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000233D0, -75.99039f, 174.8281f, -18.4062f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0002342C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00023440[] = {
	4, 0, 4, 1, 5,
	4, 1, 5, 2, 6,
	4, 2, 6, 3, 7,
	4, 6, 5, 7, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_00023468[] = {
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 1, 1 },
	{ 253, 1 },
	{ 1, 253 },
	{ 253, 253 },
	{ 255, 180 },
	{ 255, 75 },
	{ 255, 255 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000234A8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00023440, NULL, NULL, NULL, uv_00023468, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000234C0[] = {
	{ -82.49599f, -30.53612f, -24.5377f },
	{ -82.49599f, -35.27995f, -30.32852f },
	{ -82.49599f, -41.82318f, -30.32852f },
	{ -82.49599f, -46.48523f, -24.5377f },
	{ -79.99998f, -30.53612f, -24.5377f },
	{ -79.99998f, -35.27995f, -30.32852f },
	{ -79.99998f, -41.82318f, -30.32852f },
	{ -79.99998f, -46.48523f, -24.5377f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00023520[] = {
	{ 0, 0.773571f, -0.633709f },
	{ 0, 0.427955f, -0.9038f },
	{ 0, -0.431797f, -0.901971f },
	{ 0, -0.778936f, -0.627103f },
	{ 0.490634f, 0.674064f, -0.552193f },
	{ 0.622278f, 0.335002f, -0.707492f },
	{ 0.62161f, -0.338238f, -0.706538f },
	{ 0.494206f, -0.677164f, -0.545169f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00023580 = { vertex_000234C0, normal_00023520, LengthOfArray<Sint32>(vertex_000234C0), meshlist_000234A8, matlist_0002342C, LengthOfArray<Uint16>(meshlist_000234A8), LengthOfArray<Uint16>(matlist_0002342C), { -81.24799f, -38.51067f, -27.43311f }, 8.483923f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000235A8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023580, -7.858176f, 149.7331f, -0.611411f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000235DC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000235F0[] = {
	4, 1, 6, 0, 7,
	4, 2, 4, 3, 5,
	4, 3, 5, 1, 6,
	4, 6, 5, 7, 4,
	4, 0, 2, 1, 3,
	4, 4, 2, 7, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002362C[] = {
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002368C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_000235F0, NULL, NULL, NULL, uv_0002362C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000236A4[] = {
	{ -89.99998f, -48.61201f, -24.5377f },
	{ -89.99998f, -42.69571f, -32.63514f },
	{ -89.99998f, -28.37202f, -24.5377f },
	{ -89.99998f, -34.39212f, -32.63514f },
	{ -82.49599f, -28.37202f, -24.5377f },
	{ -82.49599f, -34.39212f, -32.63514f },
	{ -82.49599f, -42.69571f, -32.63514f },
	{ -82.49599f, -48.61201f, -24.5377f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00023704[] = {
	{ -0.5512289f, -0.743921f, 0.377794f },
	{ -0.617984f, -0.355985f, -0.700978f },
	{ -0.550977f, 0.745632f, 0.374776f },
	{ -0.618621f, 0.352846f, -0.7020029f },
	{ 0.550977f, 0.745632f, 0.374776f },
	{ 0.618621f, 0.352846f, -0.7020029f },
	{ 0.617984f, -0.355985f, -0.700978f },
	{ 0.5512289f, -0.743921f, 0.377794f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00023764 = { vertex_000236A4, normal_00023704, LengthOfArray<Sint32>(vertex_000236A4), meshlist_0002368C, matlist_000235DC, LengthOfArray<Uint16>(meshlist_0002368C), LengthOfArray<Uint16>(matlist_000235DC), { -86.24799f, -38.49202f, -28.58642f }, 10.89984f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002378C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023764, -180.3589f, 149.7331f, -0.608699f, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000237C0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 15, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 42, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000237FC[] = {
	0x8000u | 7, 4, 5, 22, 17, 14, 1, 10,
	6, 10, 14, 15, 22, 23, 4,
	0x8000u | 7, 10, 11, 15, 7, 23, 19, 4
};

extern "C" __declspec(dllexport) Sint16 poly_0002382A[] = {
	6, 0, 9, 13, 8, 12, 6
};

extern "C" __declspec(dllexport) Sint16 poly_00023838[] = {
	6, 1, 10, 9, 11, 8, 6,
	3, 9, 0, 1,
	3, 13, 21, 0,
	0x8000u | 5, 0, 16, 21, 2, 20,
	3, 5, 17, 16,
	6, 19, 4, 3, 5, 2, 16,
	0x8000u | 6, 6, 12, 18, 20, 3, 2,
	6, 11, 7, 6, 19, 18, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_00023894[] = {
	{ -765, 1920 },
	{ -765, 119 },
	{ -714, 119 },
	{ -714, 0 },
	{ 205, 119 },
	{ 205, 0 },
	{ 254, 119 },
	{ 254, 119 },
	{ 205, 119 },
	{ 205, 1920 },
	{ -714, 119 },
	{ -714, 1920 },
	{ -765, 1920 },
	{ 254, 119 },
	{ 254, 1920 },
	{ 205, 1920 },
	{ 205, 2040 },
	{ -714, 1920 },
	{ -714, 2040 },
	{ -765, 1920 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000238E4[] = {
	{ 140, 124 },
	{ 140, 0 },
	{ 2918, 0 },
	{ 140, 0 },
	{ 2918, 0 },
	{ 2918, 124 },
	{ 2918, 0 },
	{ 2918, 124 },
	{ 140, 124 },
	{ 255, 124 },
	{ 255, 2424 },
	{ 255, 124 },
	{ 255, 124 },
	{ 255, 2424 },
	{ 255, 2424 },
	{ 255, 2549 },
	{ 255, 2424 },
	{ 140, 2549 },
	{ 140, 2424 },
	{ 2918, 2424 },
	{ 140, 2424 },
	{ 140, 2549 },
	{ 2918, 2549 },
	{ 140, 2549 },
	{ 2918, 2549 },
	{ 2918, 2424 },
	{ 255, 124 },
	{ 255, 124 },
	{ 255, 2424 },
	{ 255, 2424 },
	{ 255, 2549 },
	{ 255, 2549 },
	{ 140, 0 },
	{ 140, 124 },
	{ 2918, 124 },
	{ 140, 2424 },
	{ 2918, 2424 },
	{ 2918, 2549 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002397C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000237FC, NULL, NULL, NULL, uv_00023894, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0002382A, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 8, poly_00023838, NULL, NULL, NULL, uv_000238E4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000239C4[] = {
	{ -35.01333f, 19.2f, -41.80878f },
	{ -35.01333f, 22.8f, -41.80878f },
	{ -31.51333f, 19.2f, 45.99511f },
	{ 21.27586f, 19.2f, 45.99511f },
	{ 21.27586f, 22.8f, 45.99511f },
	{ -31.51333f, 22.8f, 45.99511f },
	{ 24.77586f, 19.2f, -41.80878f },
	{ 24.77586f, 22.8f, -41.80878f },
	{ 21.27586f, 19.2f, -46.30878f },
	{ -31.51333f, 19.2f, -46.30878f },
	{ -31.51333f, 22.8f, -46.30878f },
	{ 21.27586f, 22.8f, -46.30878f },
	{ 21.27586f, 19, -41.80878f },
	{ -31.51333f, 19, -41.80878f },
	{ -31.51333f, 23, -41.80878f },
	{ 21.27586f, 23, -41.80878f },
	{ -35.01333f, 19.2f, 41.49511f },
	{ -35.01333f, 22.8f, 41.49511f },
	{ 24.77586f, 19.2f, 41.49511f },
	{ 24.77586f, 22.8f, 41.49511f },
	{ 21.27586f, 19, 41.49511f },
	{ -31.51333f, 19, 41.49511f },
	{ -31.51333f, 23, 41.49511f },
	{ 21.27586f, 23, 41.49511f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00023AE4[] = {
	{ -0.459135f, -0.823212f, -0.33394f },
	{ -0.459135f, 0.823212f, -0.33394f },
	{ -0.34717f, -0.6058969f, 0.715794f },
	{ 0.34717f, -0.6058969f, 0.715794f },
	{ 0.34717f, 0.6058969f, 0.715794f },
	{ -0.34717f, 0.6058969f, 0.715794f },
	{ 0.7413059f, -0.621943f, -0.252294f },
	{ 0.7413059f, 0.621943f, -0.252294f },
	{ 0.34717f, -0.6058969f, -0.715794f },
	{ -0.34717f, -0.6058969f, -0.715794f },
	{ -0.34717f, 0.6058969f, -0.715794f },
	{ 0.34717f, 0.6058969f, -0.715794f },
	{ 0.038026f, -0.998839f, -0.029585f },
	{ -0.038026f, -0.998839f, -0.029585f },
	{ -0.028518f, 0.999347f, -0.022187f },
	{ 0.028518f, 0.999347f, -0.022187f },
	{ -0.459135f, -0.823212f, 0.33394f },
	{ -0.459135f, 0.823212f, 0.33394f },
	{ 0.7413059f, -0.621943f, 0.252294f },
	{ 0.7413059f, 0.621943f, 0.252294f },
	{ 0.038026f, -0.998839f, 0.029585f },
	{ -0.038026f, -0.998839f, 0.029585f },
	{ -0.028518f, 0.999347f, 0.022187f },
	{ 0.028518f, 0.999347f, 0.022187f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00023C04 = { vertex_000239C4, normal_00023AE4, LengthOfArray<Sint32>(vertex_000239C4), meshlist_0002397C, matlist_000237C0, LengthOfArray<Uint16>(meshlist_0002397C), LengthOfArray<Uint16>(matlist_000237C0), { -5.118738f, 21, -0.156836f }, 54.98809f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00023C2C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023C04, -75.77994f, 177.0038f, -53.67847f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00023C60[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00023C9C[] = {
	4, 10, 11, 4, 6,
	4, 9, 8, 2, 0
};

extern "C" __declspec(dllexport) Sint16 poly_00023CB0[] = {
	0x8000u | 5, 5, 4, 0, 10, 8,
	3, 5, 1, 0
};

extern "C" __declspec(dllexport) Sint16 poly_00023CC4[] = {
	4, 6, 7, 4, 5,
	4, 7, 3, 5, 1,
	4, 3, 2, 1, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_00023CE4[] = {
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -765 },
	{ 510, -765 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -765 },
	{ 510, -765 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00023D04[] = {
	{ 254, -255 },
	{ 0, -255 },
	{ 254, 255 },
	{ 0, 255 },
	{ 254, -255 },
	{ 0, -255 },
	{ 254, 255 },
	{ 0, 255 },
	{ 254, -255 },
	{ 0, -255 },
	{ 254, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00023D34[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00023C9C, NULL, NULL, NULL, uv_00023CE4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00023CB0, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_00023CC4, NULL, NULL, NULL, uv_00023D04, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00023D7C[] = {
	{ -20, -17.49812f, 23.5f },
	{ -19, -17.49812f, 26.74543f },
	{ -20, 12.50188f, 23.5f },
	{ -19, 12.50188f, 26.74543f },
	{ -15, -17.49812f, 23.5f },
	{ -16, -17.49812f, 26.74543f },
	{ -14.99999f, 12.50188f, 23.5f },
	{ -15.99999f, 12.50188f, 26.74543f },
	{ -20, -17.49812f, -27.5f },
	{ -20, 12.50188f, -27.5f },
	{ -15, -17.49812f, -27.5f },
	{ -14.99999f, 12.50188f, -27.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00023E0C[] = {
	{ -0.729522f, -0.6750799f, 0.109844f },
	{ -0.477491f, -0.594718f, 0.646771f },
	{ -0.988854f, 0, 0.148892f },
	{ -0.593943f, 0, 0.804507f },
	{ 0.729521f, -0.6750799f, 0.109844f },
	{ 0.477491f, -0.594718f, 0.646771f },
	{ 0.988854f, 0, 0.148892f },
	{ 0.593943f, 0, 0.804507f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -1, 0, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00023E9C = { vertex_00023D7C, normal_00023E0C, LengthOfArray<Sint32>(vertex_00023D7C), meshlist_00023D34, matlist_00023C60, LengthOfArray<Uint16>(meshlist_00023D34), LengthOfArray<Uint16>(matlist_00023C60), { -17.5f, -2.498123f, -0.377284f }, 30.99422f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00023EC4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023E9C, 77.01244f, 52.49826f, -107.1736f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00023EF8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00012940, -80.77665f, 330.8828f, 98.03503f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00023F2C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00012940, -80.77665f, 230.8864f, 98.03503f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00023F60 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00013600, 42, 52.50187f, -107.1736f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00023F94 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00013EDC, -63, 52.52484f, -107.1736f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00023FC8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00013EDC, -28.00129f, 52.52484f, -107.1736f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00023FFC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00013EDC, 6.99959f, 52.52484f, -107.1736f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00024030 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00013EDC, 41.98737f, 52.52484f, -107.1736f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00024064 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00013EDC, 41.98737f, 17.50194f, -107.1736f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00024098 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00013EDC, 6.99959f, 17.50194f, -107.1736f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000240CC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00013EDC, -28.00129f, 17.50194f, -107.1736f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00024100 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00015EE4, -64.56776f, 200, -99.83019f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00024134 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000176B8, -25.5f, 150.0976f, 94.76508f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00024168 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0001E7C4, 69.334f, 233.0031f, -11.6736f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0002419C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0001E7C4, 69.334f, 233.0031f, 3.32754f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000241D0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0001E7C4, 69.334f, 233.0031f, 18.31791f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00024204 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023058, -23.65637f, 215.8281f, 59.00023f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00024238 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023058, -50.65636f, 215.8281f, 59.00023f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0002426C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023058, -32.65636f, 215.8281f, 59.00023f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000242A0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023058, -5.656368f, 215.8281f, 59.00023f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000242D4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023058, 39.34363f, 215.8281f, 59.00023f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00024308 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023058, 3.343632f, 215.8281f, 59.00023f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0002433C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023058, 12.34363f, 215.8281f, 59.00023f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00024370 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023058, 21.34363f, 215.8281f, 59.00023f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000243A4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023058, -41.65636f, 215.8281f, 59.00023f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000243D8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023058, 30.34363f, 215.8281f, 59.00023f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0002440C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000233D0, -95.99039f, 174.8281f, -18.4062f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00024440 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000233D0, -65.99039f, 174.8281f, -18.4062f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00024474 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000233D0, -55.99039f, 174.8281f, -18.4062f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000244A8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000233D0, -85.99039f, 174.8281f, -18.4062f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000244DC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000233D0, -105.9904f, 174.8281f, -18.4062f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00024510 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023580, 2.141088f, 149.7331f, -0.611411f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00024544 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023580, -27.86251f, 149.7331f, -0.611411f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00024578 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023580, -160.3589f, 149.7331f, -0.608699f, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000245AC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023580, -170.3589f, 149.7331f, -0.608699f, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000245E0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023580, -17.85812f, 149.7331f, -0.611411f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00024614 = { NJD_EVAL_BREAK, &attach_00023580, -180.3589f, 149.7331f, -0.608699f, 0, 0x8000, 0, 1, 1, 1.752693f, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00024648 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023764, 12.14108f, 149.7331f, -0.611411f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0002467C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023764, -190.3589f, 149.7331f, -0.608699f, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000246B0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023764, 2.141882f, 149.7331f, -0.611411f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000246E4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023764, -170.3589f, 149.7331f, -0.608699f, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00024718 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023764, -160.3589f, 149.7331f, -0.608699f, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0002474C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023764, -17.86245f, 149.7331f, -0.611411f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_00024780 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00023764, -7.858054f, 149.7331f, -0.611411f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000268CC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000268E0[] = {
	16, 7, 5, 4, 16, 14, 1, 0, 2, 8, 9, 12, 20, 21, 25, 27, 29,
	4, 12, 13, 8, 0,
	5, 17, 6, 12, 11, 13,
	0x8000u | 13, 0, 14, 13, 10, 11, 4, 6, 7, 17, 15, 2, 3, 1,
	3, 10, 4, 14,
	0x8000u | 5, 27, 21, 26, 18, 28,
	8, 12, 21, 17, 18, 2, 19, 9, 20,
	8, 25, 20, 24, 19, 23, 18, 22, 28
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0002696C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, poly_000268E0, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00026984[] = {
	{ -59.83737f, 23.9408f, 16.8885f },
	{ -59.83737f, 23.9408f, 50 },
	{ -59.83737f, 49.94181f, 16.8885f },
	{ -59.83737f, 49.94181f, 50 },
	{ 89.31619f, 23.9408f, 16.8885f },
	{ 89.31619f, 23.9408f, 50 },
	{ 89.31619f, 49.94181f, 16.8885f },
	{ 89.31619f, 49.94181f, 50 },
	{ -59.83737f, 32.43728f, 7.591892f },
	{ -59.83737f, 49.93965f, 3.767276f },
	{ 89.31619f, 32.43728f, 7.591892f },
	{ 89.31619f, 49.93965f, 3.767276f },
	{ 40.84985f, 49.93965f, 3.767276f },
	{ 40.84986f, 32.43728f, 7.591892f },
	{ 40.84985f, 23.9408f, 16.8885f },
	{ 40.84986f, 49.94181f, 50 },
	{ 40.84985f, 23.9408f, 50 },
	{ 40.84986f, 49.94181f, 16.8885f },
	{ -59.83737f, 81.97106f, 16.8885f },
	{ -59.83737f, 81.96888f, 3.767276f },
	{ 40.84985f, 81.96888f, 3.767276f },
	{ 40.84986f, 81.97106f, 16.8885f },
	{ -59.83737f, 115.0961f, 16.8885f },
	{ -59.83737f, 115.094f, 3.767276f },
	{ 40.84985f, 115.094f, 3.767276f },
	{ 40.84986f, 115.0961f, 16.8885f },
	{ -59.83737f, 91.97046f, 60.83851f },
	{ 40.84986f, 91.97046f, 60.83851f },
	{ -59.83737f, 115.3287f, 60.83851f },
	{ 40.84986f, 115.3287f, 60.83851f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00026AEC[] = {
	{ -0.634012f, -0.720926f, -0.279812f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.904534f, 0.301511f, 0.301511f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.634012f, -0.720926f, -0.279812f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.707088f, 0.7071249f, -0.00058f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.6448849f, -0.381569f, -0.662215f },
	{ -0.683722f, -0.078346f, -0.725525f },
	{ 0.6448849f, -0.381569f, -0.662215f },
	{ 0.56688f, 0.516555f, -0.64173f },
	{ 0.315335f, 0.180717f, -0.931615f },
	{ 0, -0.499254f, -0.866456f },
	{ 0, -0.9322439f, -0.36183f },
	{ 0, 1, 0 },
	{ 0, -1, 0 },
	{ 0.301545f, 0.904539f, 0.301463f },
	{ -0.877308f, -0.29936f, 0.37512f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.877308f, -0.29936f, 0.37512f },
	{ -1, 0, 0 },
	{ -0.707144f, 0, -0.70707f },
	{ 0.707144f, 0, -0.70707f },
	{ 1, 0, 0 },
	{ -0.7524509f, -0.642235f, 0.14612f },
	{ 0.7524509f, -0.642235f, 0.14612f },
	{ -1, 0, 0 },
	{ 1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00026C54 = { vertex_00026984, normal_00026AEC, LengthOfArray<Sint32>(vertex_00026984), meshlist_0002696C, matlist_000268CC, LengthOfArray<Uint16>(meshlist_0002696C), LengthOfArray<Uint16>(matlist_000268CC), { 14.73941f, 69.63473f, 32.30289f }, 79.84972f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00026C7C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00026C54, -1.04012f, 190.0558f, 40.45176f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00026CB0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00026CC4[] = {
	11, 4, 6, 7, 3, 11, 9, 10, 8, 5, 1, 0,
	6, 11, 10, 7, 5, 4, 0,
	3, 2, 3, 6
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00026CF4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00026CC4, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00026D0C[] = {
	{ -50, -50, -50 },
	{ -50, -50, 20.80616f },
	{ -50, -3.95703f, -50 },
	{ -50, -3.95703f, 20.80616f },
	{ 9.479392f, -50, -50 },
	{ 9.479392f, -50, 20.80616f },
	{ 9.479392f, -3.95703f, -50 },
	{ 9.479392f, -3.95703f, 20.80616f },
	{ -50, -17.5292f, 43.50419f },
	{ -50, -3.95703f, 43.50419f },
	{ 9.479392f, -17.5292f, 43.50419f },
	{ 9.479392f, -3.95703f, 43.50419f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00026D9C[] = {
	{ 0, -1, 0 },
	{ 0, -0.8868279f, 0.4621f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.616393f, -0.698323f, 0.363875f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0, -0.300328f, 0.953836f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.6453429f, -0.229419f, 0.728629f },
	{ 0.57735f, 0.57735f, 0.57735f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00026E2C = { vertex_00026D0C, normal_00026D9C, LengthOfArray<Sint32>(vertex_00026D0C), meshlist_00026CF4, matlist_00026CB0, LengthOfArray<Uint16>(meshlist_00026CF4), LengthOfArray<Uint16>(matlist_00026CB0), { -20.2603f, -26.97852f, -3.247906f }, 55.40945f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00026E54 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00026E2C, -60.62761f, 203.97f, -50.77562f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00026E88[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00026E9C[] = {
	4, 7, 3, 5, 1,
	4, 2, 6, 0, 4,
	0x8000u | 10, 0, 5, 4, 7, 6, 3, 2, 1, 0, 5,
	16, 17, 19, 13, 15, 11, 19, 18, 17, 16, 23, 22, 21, 20, 14, 10, 8,
	8, 21, 23, 14, 12, 8, 13, 9, 11
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00026EFC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_00026E9C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00026F14[] = {
	{ -4.718121f, -14.55922f, -30.35754f },
	{ -4.718121f, -14.55922f, 28.602f },
	{ -4.718121f, 2.895866f, -30.35754f },
	{ -4.718121f, 2.895866f, 28.602f },
	{ 47.07661f, -14.55922f, -30.35754f },
	{ 47.07661f, -14.55922f, 28.602f },
	{ 47.07661f, 2.895866f, -30.35754f },
	{ 47.07661f, 2.895866f, 28.602f },
	{ -47.07661f, -7.140099f, -32.45085f },
	{ -47.07661f, -7.140099f, 32.45085f },
	{ -47.07661f, 14.55922f, -32.45085f },
	{ -47.07661f, 14.55922f, 32.45085f },
	{ -3.017666f, -7.140099f, -32.45085f },
	{ -3.017666f, -7.140099f, 32.45085f },
	{ -3.017666f, 14.55922f, -32.45085f },
	{ -3.017666f, 14.55922f, 32.45085f },
	{ -47.07661f, 2.895889f, 20.44482f },
	{ -3.017666f, 2.895889f, 20.44482f },
	{ -47.07661f, 14.55922f, 20.33613f },
	{ -3.017666f, 14.55922f, 20.33613f },
	{ -47.07661f, 14.55922f, -19.97658f },
	{ -3.017666f, 14.55922f, -19.97658f },
	{ -47.07661f, 2.895889f, -19.9575f },
	{ -3.017666f, 2.895889f, -19.9575f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00027034[] = {
	{ -0.57735f, -0.57735f, -0.57735f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.373358f, -0.655974f, -0.655974f },
	{ 0.366316f, -0.6579559f, 0.6579559f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0, 0.703804f, -0.710394f },
	{ 0.717322f, 0.49037f, -0.494961f },
	{ 0, 0.703804f, -0.710394f },
	{ 0.576862f, 0.574897f, -0.580279f },
	{ 0, 0.707685f, 0.7065279f },
	{ 0.577436f, 0.577779f, 0.576835f },
	{ 0, 0.707685f, 0.7065279f },
	{ 0.710682f, 0.497865f, 0.497052f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00027154 = { vertex_00026F14, normal_00027034, LengthOfArray<Sint32>(vertex_00026F14), meshlist_00026EFC, matlist_00026E88, LengthOfArray<Uint16>(meshlist_00026EFC), LengthOfArray<Uint16>(matlist_00026E88), { -0.00002f, 0, 0 }, 57.17749f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002717C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00027154, -63.67682f, 106.5762f, -0.465569f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000271B0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000271C4[] = {
	9, 15, 13, 14, 19, 20, 22, 21, 5, 6,
	3, 4, 2, 1,
	12, 7, 9, 4, 11, 2, 3, 1, 0, 5, 10, 6, 8,
	0x8000u | 11, 18, 15, 12, 13, 16, 19, 23, 22, 4, 5, 1,
	0x8000u | 7, 4, 7, 23, 17, 16, 18, 12
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00027224[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_000271C4, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0002723C[] = {
	{ -50, 10.72279f, -50 },
	{ -50, 10.72279f, -11.81028f },
	{ -50, 50, -11.81028f },
	{ -50, 50, -50 },
	{ -43.79302f, 50, -11.81028f },
	{ -43.79302f, 10.72279f, -11.81028f },
	{ -4.675587f, 10.72279f, -11.81028f },
	{ -4.675587f, 50, -11.81028f },
	{ -4.675587f, 10.72279f, -50 },
	{ -4.675587f, 50, -50 },
	{ -43.79302f, 10.72279f, -50 },
	{ -43.79302f, 50, -50 },
	{ -43.79302f, 50, 83.02354f },
	{ -43.79302f, 21.21365f, 83.02354f },
	{ -4.675587f, 21.21365f, 83.02354f },
	{ -4.675587f, 50, 83.02354f },
	{ -43.79302f, 50, 59.31508f },
	{ -4.675587f, 50, 11.89817f },
	{ -4.675587f, 50, 59.31508f },
	{ -43.79302f, 38.94441f, 59.31508f },
	{ -4.675587f, 38.94441f, 59.31508f },
	{ -4.675587f, 38.94441f, 11.89817f },
	{ -43.79302f, 38.94441f, 11.89817f },
	{ -43.79302f, 50, 11.89817f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002735C[] = {
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.301511f, 0.904534f, 0.301511f },
	{ -0.138584f, -0.823515f, 0.5501069f },
	{ 0, -0.906429f, 0.422357f },
	{ 0, 1, 0 },
	{ 0, -1, 0 },
	{ 0, 1, 0 },
	{ 0, -1, 0 },
	{ 0, 1, 0 },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.550891f, -0.746213f, 0.373744f },
	{ 0, -0.894121f, 0.447825f },
	{ 0, 0.7071069f, 0.7071069f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.785498f, -0.58724f, -0.195301f },
	{ 0, -0.948899f, -0.315579f },
	{ 0, -0.906429f, 0.422357f },
	{ -0.815583f, -0.524497f, 0.244393f },
	{ -0.7071069f, 0.7071069f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002747C = { vertex_0002723C, normal_0002735C, LengthOfArray<Sint32>(vertex_0002723C), meshlist_00027224, matlist_000271B0, LengthOfArray<Uint16>(meshlist_00027224), LengthOfArray<Uint16>(matlist_000271B0), { -27.33779f, 30.3614f, 16.51177f }, 70.26656f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000274A4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002747C, 94.08758f, 189.9954f, -38.80447f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000274D8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 13, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00027514[] = {
	6, 22, 13, 20, 11, 21, 12,
	6, 5, 6, 3, 4, 0, 1,
	4, 3, 0, 5, 2,
	0x8000u | 12, 20, 22, 30, 23, 29, 24, 28, 25, 17, 19, 14, 16,
	4, 26, 27, 18, 15,
	0x8000u | 10, 15, 35, 27, 36, 31, 32, 21, 33, 12, 34,
	0x8000u | 12, 21, 20, 31, 30, 27, 29, 26, 28, 18, 17, 15, 14
};

extern "C" __declspec(dllexport) Sint16 poly_0002758E[] = {
	4, 8, 38, 7, 37
};

extern "C" __declspec(dllexport) Sint16 poly_00027598[] = {
	4, 38, 10, 37, 9
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000275A4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_00027514, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0002758E, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00027598, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000275EC[] = {
	{ -29.08065f, 117.7773f, -20.10535f },
	{ -29.08065f, 117.7773f, 29.71297f },
	{ -29.08065f, 148.815f, -30.45749f },
	{ 21.78683f, 117.7773f, -20.10535f },
	{ 21.78683f, 117.7773f, 29.71297f },
	{ 21.78683f, 148.815f, -30.45749f },
	{ 21.78683f, 148.815f, 29.71297f },
	{ -20.06372f, 117.7746f, -11.57601f },
	{ 21.93876f, 117.7746f, -11.57601f },
	{ -20.06372f, -102.2795f, -11.57601f },
	{ 21.93876f, -102.2253f, -11.57601f },
	{ -29.61017f, -52.03249f, -22.64793f },
	{ -29.61017f, 61.65678f, -22.64793f },
	{ -29.61017f, -154.1368f, -22.64793f },
	{ 29.61017f, -52.03249f, 29.64969f },
	{ 29.61017f, 61.65678f, 29.64969f },
	{ 29.61017f, -154.1368f, 29.64969f },
	{ 29.61017f, -52.03249f, -19.55881f },
	{ 29.61017f, 61.65678f, -19.55881f },
	{ 29.61017f, -154.1368f, -19.55881f },
	{ -19.35893f, -52.03249f, -12.16498f },
	{ -19.35893f, 61.65678f, -12.16498f },
	{ -19.35893f, -154.1368f, -12.16498f },
	{ -19.37524f, -154.1368f, 23.22281f },
	{ 20.41636f, -154.1368f, 23.22281f },
	{ 20.37276f, -154.1368f, -11.43562f },
	{ 20.37276f, 61.65678f, -11.43562f },
	{ 20.41636f, 61.65678f, 23.22281f },
	{ 20.37276f, -52.03249f, -11.43562f },
	{ 20.41636f, -52.03249f, 23.22281f },
	{ -19.37524f, -52.03249f, 23.22281f },
	{ -19.37524f, 61.65678f, 23.22281f },
	{ -19.37524f, 154.1368f, 23.22281f },
	{ -19.35893f, 154.1368f, -12.16498f },
	{ -29.61017f, 154.1368f, -22.64793f },
	{ 29.61017f, 154.1368f, 29.64969f },
	{ 20.41636f, 154.1368f, 23.22281f },
	{ -20.06372f, -2.225342f, -11.57601f },
	{ 21.93876f, -2.225342f, -11.57601f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000277C0[] = {
	{ 0, -0.811295f, -0.584637f },
	{ 0, -1, 0 },
	{ 0, -0.3164f, -0.948626f },
	{ 0.596195f, -0.6513399f, -0.469369f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.62233f, -0.247664f, -0.742541f },
	{ 1, 0, 0 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0.714965f, 0, -0.699161f },
	{ 0.714965f, 0, -0.699161f },
	{ 0.714965f, 0, -0.699161f },
	{ 1, 0, 0 },
	{ 0.838385f, 0.325991f, -0.436852f },
	{ 1, 0, 0 },
	{ 0.412089f, 0, -0.911144f },
	{ 0.344538f, 0.548611f, -0.761787f },
	{ 0.412089f, 0, -0.911144f },
	{ 0.9260899f, 0, -0.377302f },
	{ 0.9260899f, 0, -0.377302f },
	{ 0.9260899f, 0, -0.377302f },
	{ 0.70727f, 0, -0.706944f },
	{ -0.7075509f, 0, -0.706662f },
	{ -0.9114029f, 0, -0.411516f },
	{ -0.711499f, 0.6249509f, -0.321255f },
	{ -0.134677f, 0.438092f, -0.888784f },
	{ -0.9114029f, 0, -0.411516f },
	{ -0.7075509f, 0, -0.706662f },
	{ 0.70727f, 0, -0.706944f },
	{ 0.70727f, 0, -0.706944f },
	{ 0.70727f, 0, -0.706944f },
	{ 0.9260899f, 0, -0.377302f },
	{ 0.714965f, 0, -0.699161f },
	{ 0.572937f, 0, -0.8196f },
	{ 0.300333f, 0, -0.953834f },
	{ 0, 0, -1 },
	{ 0, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00027994 = { vertex_000275EC, normal_000277C0, LengthOfArray<Sint32>(vertex_000275EC), meshlist_000275A4, matlist_000274D8, LengthOfArray<Uint16>(meshlist_000275A4), LengthOfArray<Uint16>(matlist_000274D8), { 0.000004f, 0, -0.372257f }, 157.0455f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000279BC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00027994, -81.25443f, 152.2253f, 69.86892f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000279F0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00027A04[] = {
	8, 19, 9, 20, 10, 21, 13, 22, 14,
	0x8000u | 8, 8, 0, 7, 1, 12, 4, 11, 5,
	8, 5, 15, 4, 16, 1, 17, 0, 18,
	6, 16, 6, 17, 2, 18, 3,
	8, 22, 11, 21, 12, 20, 7, 19, 8
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00027A5C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_00027A04, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00027A74[] = {
	{ -75.79254f, -254.9379f, 0.666667f },
	{ -61.28987f, -193.7951f, 0.666667f },
	{ -77.60716f, -193.7951f, -69.0377f },
	{ -93.99702f, -254.9379f, -69.0377f },
	{ -61.28987f, -105.048f, 0.666667f },
	{ -39.88761f, 53.63184f, 0.666667f },
	{ -77.60716f, -41.18811f, -69.0377f },
	{ -61.28987f, -193.7951f, 51.33333f },
	{ -75.79254f, -254.9379f, 51.33333f },
	{ -46.9791f, -254.9379f, 129.721f },
	{ -44.09581f, -193.7951f, 129.721f },
	{ -39.88761f, 53.63184f, 51.33333f },
	{ -61.28987f, -105.048f, 51.33333f },
	{ -44.09581f, -105.048f, 129.721f },
	{ -22.6935f, 53.63184f, 129.721f },
	{ -31.29056f, 53.63184f, -48.17081f },
	{ -52.69284f, -41.18811f, -48.17081f },
	{ -52.69284f, -193.7951f, -48.17081f },
	{ -68.13907f, -254.9379f, -48.17081f },
	{ -57.83149f, -254.9379f, 101.5716f },
	{ -52.69284f, -193.7951f, 101.5716f },
	{ -52.69284f, -105.048f, 101.5716f },
	{ -31.29056f, 53.63184f, 101.5716f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00027B88[] = {
	{ -0.9699439f, 0.230065f, -0.07923599f },
	{ -0.98957f, 0.11656f, -0.08464099f },
	{ -0.635814f, 0.08923499f, 0.766666f },
	{ -0.62599f, 0.167802f, 0.761564f },
	{ -0.995822f, 0.047506f, -0.077984f },
	{ -0.990079f, 0.133539f, -0.043726f },
	{ -0.6420889f, 0, 0.76663f },
	{ -0.987537f, 0.115717f, 0.106678f },
	{ -0.965694f, 0.229056f, 0.122346f },
	{ -0.944249f, 0.044528f, 0.326208f },
	{ -0.950738f, 0.022175f, 0.309201f },
	{ -0.987482f, 0.133189f, 0.08449499f },
	{ -0.99423f, 0.066512f, 0.08415499f },
	{ -0.954376f, 0.06488699f, 0.291473f },
	{ -0.948532f, 0.127935f, 0.289689f },
	{ -0.987292f, 0.133163f, -0.086735f },
	{ -0.975164f, 0.078508f, 0.207102f },
	{ -0.936267f, 0.111096f, 0.333259f },
	{ -0.9015149f, 0.225425f, 0.369396f },
	{ -0.947785f, 0.136333f, 0.288299f },
	{ -0.9630409f, 0.06698199f, 0.260893f },
	{ -0.9710709f, 0.065046f, 0.229761f },
	{ -0.964435f, 0.13008f, 0.230096f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00027C9C = { vertex_00027A74, normal_00027B88, LengthOfArray<Sint32>(vertex_00027A74), meshlist_00027A5C, matlist_000279F0, LengthOfArray<Uint16>(meshlist_00027A5C), LengthOfArray<Uint16>(matlist_000279F0), { -58.34526f, -100.653f, 30.34165f }, 183.5213f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00027CC4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00027C9C, 134.1717f, 251.2051f, -27, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00027CF8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00027D20[] = {
	4, 22, 1, 24, 3,
	8, 23, 24, 2, 3, 0, 1, 21, 22,
	4, 0, 21, 2, 23
};

extern "C" __declspec(dllexport) Sint16 poly_00027D46[] = {
	3, 11, 10, 15,
	3, 24, 23, 8,
	3, 16, 9, 6,
	29, 19, 4, 12, 5, 18, 14, 10, 7, 15, 8, 11, 23, 19, 21, 4, 22, 9, 24, 20, 8, 13, 7, 17, 14, 6, 5, 16, 4, 9,
	5, 18, 10, 12, 11, 19,
	5, 17, 6, 13, 9, 20
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00027DB4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00027D20, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_00027D46, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00027DE4[] = {
	{ -149.5213f, -41.53348f, -18.59558f },
	{ -149.5213f, -41.53348f, 21.03517f },
	{ -149.5213f, 0.11647f, -18.59558f },
	{ -149.5213f, 0.11647f, 21.03517f },
	{ -49.64085f, -150.1883f, -90.17847f },
	{ 149.5213f, -150.1883f, -90.17847f },
	{ 149.5213f, -150.1883f, 90.17847f },
	{ 149.5213f, 150.1883f, 90.17847f },
	{ -49.64085f, 150.1883f, 90.17847f },
	{ -49.64085f, -150.1883f, 90.17847f },
	{ 149.5213f, 150.1883f, -90.17847f },
	{ -49.64085f, 150.1883f, -90.17847f },
	{ 49.94023f, 0, -90.17847f },
	{ 49.94023f, 0, 90.17847f },
	{ 149.5213f, 0, 0 },
	{ 49.94023f, 150.1883f, 0 },
	{ 49.94023f, -150.1883f, 0 },
	{ 149.5213f, 0, 90.17847f },
	{ 149.5213f, 0, -90.17847f },
	{ -49.64085f, 0, -90.17847f },
	{ -49.64085f, 0, 90.17847f },
	{ -49.64085f, -41.52504f, -18.95131f },
	{ -49.64085f, -41.52504f, 20.89037f },
	{ -49.64085f, 0.275406f, -18.96197f },
	{ -49.64085f, 0.275406f, 20.9459f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00027F10[] = {
	{ 0.578282f, 0.577554f, 0.5762129f },
	{ 0.576799f, 0.577759f, -0.577493f },
	{ 0.5787089f, -0.577052f, 0.576287f },
	{ 0.5776809f, -0.576344f, -0.578025f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ -1, 0, 0 },
	{ 0, -1, 0 },
	{ 0, 1, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.904901f, 0.300612f, 0.30131f },
	{ 0.904229f, 0.3023f, -0.301636f },
	{ 0.905102f, -0.300459f, 0.300855f },
	{ 0.904749f, -0.301227f, -0.30115f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002803C = { vertex_00027DE4, normal_00027F10, LengthOfArray<Sint32>(vertex_00027DE4), meshlist_00027DB4, matlist_00027CF8, LengthOfArray<Uint16>(meshlist_00027DB4), LengthOfArray<Uint16>(matlist_00027CF8), { 0 }, 175.1819f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00028064 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002803C, -61.12737f, 150.2586f, -1.035168f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00028098[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000280AC[] = {
	6, 7, 2, 6, 1, 8, 5,
	12, 8, 11, 6, 9, 7, 10, 2, 3, 1, 0, 5, 4
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000280D4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000280AC, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000280EC[] = {
	{ -50, 26.8629f, 28.00615f },
	{ -50, 26.8629f, 50 },
	{ -50, 63.28583f, 50 },
	{ -50, 104.5667f, 28.75118f },
	{ -50, -20.7158f, 28.31227f },
	{ -50, -20.7158f, 50 },
	{ 94.96064f, 26.8629f, 50 },
	{ 94.96064f, 63.28583f, 50 },
	{ 94.96064f, -20.7158f, 50 },
	{ 94.96064f, 26.8629f, 28.00615f },
	{ 94.96064f, 104.5667f, 28.75118f },
	{ 94.96064f, -20.7158f, 28.31227f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002817C[] = {
	{ -1, 0, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.657752f, 0.177351f, 0.732058f },
	{ -0.294994f, 0.437299f, 0.849558f },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.657752f, 0.177351f, 0.732058f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 1, 0, 0 },
	{ 0.294994f, 0.437299f, 0.849558f },
	{ 1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0002820C = { vertex_000280EC, normal_0002817C, LengthOfArray<Sint32>(vertex_000280EC), meshlist_000280D4, matlist_00028098, LengthOfArray<Uint16>(meshlist_000280D4), LengthOfArray<Uint16>(matlist_00028098), { 22.48032f, 41.92546f, 39.00307f }, 73.30981f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00028234 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0002820C, -32.99961f, 19.97637f, -128.3695f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000247B4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 35, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000247C8[] = {
	0x8000u | 5, 1, 7, 5, 6, 4,
	3, 10, 8, 0,
	0x8000u | 38, 9, 1, 11, 13, 33, 32, 31, 30, 10, 12, 0, 14, 16, 22, 24, 23, 25, 15, 17, 1, 3, 5, 29, 28, 27, 26, 2, 4, 0, 6, 8, 18, 20, 19, 21, 7, 9, 1,
	0x8000u | 5, 1, 15, 13, 14, 12,
	3, 2, 16, 0,
	4, 7, 6, 19, 18,
	7, 20, 8, 9, 10, 11, 31, 33,
	3, 9, 21, 20,
	4, 15, 14, 23, 22,
	7, 24, 16, 17, 2, 3, 27, 29,
	3, 17, 25, 24,
	4, 5, 28, 4, 26,
	4, 13, 32, 12, 30
};

extern "C" __declspec(dllexport) NJS_TEX uv_00024898[] = {
	{ 127, 127 },
	{ 126, 20 },
	{ 204, 51 },
	{ 126, 20 },
	{ 204, 51 },
	{ 18, 128 },
	{ 49, 52 },
	{ 127, 127 },
	{ 49, 52 },
	{ 127, 127 },
	{ 18, 128 },
	{ 50, 203 },
	{ 37, 203 },
	{ 37, 203 },
	{ 0, 128 },
	{ 0, 128 },
	{ 18, 128 },
	{ 50, 203 },
	{ 127, 127 },
	{ 128, 234 },
	{ 205, 202 },
	{ 128, 254 },
	{ 205, 217 },
	{ 128, 254 },
	{ 205, 217 },
	{ 128, 234 },
	{ 205, 202 },
	{ 127, 127 },
	{ 236, 126 },
	{ 204, 51 },
	{ 217, 51 },
	{ 217, 51 },
	{ 254, 126 },
	{ 255, 126 },
	{ 236, 126 },
	{ 204, 51 },
	{ 127, 127 },
	{ 126, 20 },
	{ 49, 52 },
	{ 126, 0 },
	{ 49, 37 },
	{ 126, 0 },
	{ 49, 37 },
	{ 126, 20 },
	{ 49, 52 },
	{ 127, 127 },
	{ 127, 127 },
	{ 128, 234 },
	{ 50, 203 },
	{ 128, 234 },
	{ 50, 203 },
	{ 236, 126 },
	{ 205, 202 },
	{ 127, 127 },
	{ 126, 20 },
	{ 126, 20 },
	{ 126, 0 },
	{ 126, 0 },
	{ 49, 37 },
	{ 49, 52 },
	{ 49, 52 },
	{ 18, 128 },
	{ 18, 128 },
	{ 0, 128 },
	{ 37, 203 },
	{ 49, 52 },
	{ 49, 37 },
	{ 49, 37 },
	{ 128, 234 },
	{ 128, 234 },
	{ 128, 254 },
	{ 128, 254 },
	{ 205, 217 },
	{ 205, 202 },
	{ 205, 202 },
	{ 236, 126 },
	{ 236, 126 },
	{ 254, 126 },
	{ 217, 51 },
	{ 205, 202 },
	{ 205, 217 },
	{ 205, 217 },
	{ 204, 51 },
	{ 217, 51 },
	{ 204, 51 },
	{ 255, 126 },
	{ 50, 203 },
	{ 37, 203 },
	{ 50, 203 },
	{ 0, 128 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00024A00[] = {
	{ NJD_MESHSET_TRIMESH | 0, 13, poly_000247C8, NULL, NULL, NULL, uv_00024898, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00024A18[] = {
	{ 0.00344f, -0.006127f, -2.136311f },
	{ 0.003438f, -0.006107f, 24.99999f },
	{ 20.00296f, 0.13255f, -2.200035f },
	{ 20.00295f, 0.132565f, 24.99999f },
	{ 14.04718f, 14.23372f, -2.200039f },
	{ 14.04718f, 14.23375f, 24.99998f },
	{ -0.135237f, 19.99339f, -2.200043f },
	{ -0.135238f, 19.99341f, 24.99998f },
	{ -14.23641f, 14.0376f, -2.200039f },
	{ -14.23641f, 14.03762f, 24.99998f },
	{ -19.99608f, -0.144803f, -2.200035f },
	{ -19.99608f, -0.144785f, 24.99999f },
	{ -14.04029f, -14.24598f, -2.200031f },
	{ -14.0403f, -14.24597f, 24.99999f },
	{ 0.142114f, -20.00564f, -2.200027f },
	{ 0.142114f, -20.00562f, 24.99999f },
	{ 14.24329f, -14.04986f, -2.200031f },
	{ 14.24329f, -14.04985f, 24.99999f },
	{ -0.135237f, 23.79213f, -2.200043f },
	{ -0.135238f, 23.79215f, 24.99998f },
	{ -14.23641f, 16.70474f, -2.200039f },
	{ -14.23641f, 16.70476f, 24.99998f },
	{ 0.142114f, -23.8067f, -2.200027f },
	{ 0.142114f, -23.80668f, 24.99999f },
	{ 14.24329f, -16.71933f, -2.200031f },
	{ 14.24329f, -16.71931f, 24.99999f },
	{ 23.3144f, 0.13255f, -2.200035f },
	{ 23.3144f, 0.132565f, 24.99999f },
	{ 16.37265f, 14.23372f, -2.200039f },
	{ 16.37265f, 14.23375f, 24.99998f },
	{ -23.30638f, -0.144803f, -2.200035f },
	{ -23.30638f, -0.144785f, 24.99999f },
	{ -16.36463f, -14.24598f, -2.200031f },
	{ -16.36463f, -14.24597f, 24.99999f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00024BB0[] = {
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0.286776f, -0.428205f, -0.856971f },
	{ 0.28814f, -0.428012f, 0.8566099f },
	{ 0.125141f, 0.645351f, -0.753566f },
	{ 0.126156f, 0.645925f, 0.752904f },
	{ 0.428205f, 0.286776f, -0.856972f },
	{ 0.428013f, 0.288141f, 0.8566099f },
	{ -0.645351f, 0.125141f, -0.753566f },
	{ -0.645925f, 0.126156f, 0.752905f },
	{ -0.286776f, 0.428205f, -0.856972f },
	{ -0.28814f, 0.428013f, 0.856609f },
	{ -0.125141f, -0.6453519f, -0.753565f },
	{ -0.126156f, -0.645925f, 0.752905f },
	{ -0.428205f, -0.286776f, -0.856971f },
	{ -0.428012f, -0.28814f, 0.8566099f },
	{ 0.6453519f, -0.125141f, -0.753566f },
	{ 0.645925f, -0.126156f, 0.752905f },
	{ 0.435983f, 0.707083f, -0.556733f },
	{ 0.435983f, 0.7070839f, 0.556733f },
	{ -0.67718f, 0.417544f, -0.605875f },
	{ -0.67718f, 0.417545f, 0.605875f },
	{ -0.435984f, -0.707083f, -0.556733f },
	{ -0.435984f, -0.707083f, 0.556733f },
	{ 0.677179f, -0.417545f, -0.605875f },
	{ 0.677179f, -0.417545f, 0.605875f },
	{ 0.705102f, -0.4388f, -0.5570329f },
	{ 0.705102f, -0.4388f, 0.5570329f },
	{ 0.420577f, 0.675819f, -0.605296f },
	{ 0.420577f, 0.67582f, 0.605296f },
	{ -0.705102f, 0.4388f, -0.5570329f },
	{ -0.705102f, 0.438801f, 0.5570329f },
	{ -0.420577f, -0.675819f, -0.605296f },
	{ -0.420577f, -0.675819f, 0.605296f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00024D48 = { vertex_00024A18, normal_00024BB0, LengthOfArray<Sint32>(vertex_00024A18), meshlist_00024A00, matlist_000247B4, LengthOfArray<Uint16>(meshlist_00024A00), LengthOfArray<Uint16>(matlist_000247B4), { 0.004013f, -0.007277f, 11.39998f }, 27.41118f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00024D70 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00024D48, 134.0605f, 262.4768f, -38, 0, 0, 0xFFFF0000, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00024DA4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 87.17501f, 0, 0, 0, 1, 1, 1, &object_00024D70, NULL };
extern "C" __declspec(dllexport) NJS_MKEY_A animation_00016B84_1_rot[] = {
	{ 0, 0, 0, 0 },
	{ 1, 0, 0, 0xFFFFF651 },
	{ 2, 0, 0, 0xFFFFEC97 },
	{ 3, 0, 0, 0xFFFFE2D7 },
	{ 4, 0, 0, 0xFFFFD913 },
	{ 5, 0, 0, 0xFFFFCF4D },
	{ 6, 0, 0, 0xFFFFC58A },
	{ 7, 0, 0, 0xFFFFBBCA },
	{ 8, 0, 0, 0xFFFFB212 },
	{ 9, 0, 0, 0xFFFFA864 },
	{ 10, 0, 0, 0xFFFF9EC3 },
	{ 11, 0, 0, 0xFFFF9531 },
	{ 12, 0, 0, 0xFFFF8BB2 },
	{ 13, 0, 0, 0xFFFF8249 },
	{ 14, 0, 0, 0xFFFF78F7 },
	{ 15, 0, 0, 0xFFFF6FC1 },
	{ 16, 0, 0, 0xFFFF66A8 },
	{ 17, 0, 0, 0xFFFF5DB0 },
	{ 18, 0, 0, 0xFFFF54DC },
	{ 19, 0, 0, 0xFFFF4C2D },
	{ 20, 0, 0, 0xFFFF43A8 },
	{ 21, 0, 0, 0xFFFF3B4F },
	{ 22, 0, 0, 0xFFFF3324 },
	{ 23, 0, 0, 0xFFFF2B2B },
	{ 24, 0, 0, 0xFFFF2366 },
	{ 25, 0, 0, 0xFFFF1BD8 },
	{ 26, 0, 0, 0xFFFF1485 },
	{ 27, 0, 0, 0xFFFF0D6E },
	{ 28, 0, 0, 0xFFFF0696 },
	{ 29, 0, 0, 0xFFFF0002 }
};

extern "C" __declspec(dllexport) NJS_MDATA2 animation_00016B84_mdat[] = {
	{ NULL, NULL, 0, 0 },
	{ NULL, animation_00016B84_1_rot, 0, LengthOfArray<Uint32>(animation_00016B84_1_rot) }
};

extern "C" __declspec(dllexport) NJS_MOTION animation_00016B84 = { animation_00016B84_mdat, 30, NJD_MTYPE_POS_0 | NJD_MTYPE_ANG_1, NJD_MTYPE_LINER | 2 };
extern "C" __declspec(dllexport) NJS_ACTION action_animation_00016B84 = { &object_00024DA4, &animation_00016B84 };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00024FEC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 35, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00025050[] = {
	0x8000u | 8, 3, 1, 2, 0, 6, 4, 7, 5,
	4, 2, 3, 6, 7,
	0x8000u | 8, 11, 9, 10, 8, 14, 12, 15, 13,
	4, 10, 11, 14, 15,
	0x8000u | 8, 19, 17, 18, 16, 22, 20, 23, 21,
	4, 18, 19, 22, 23,
	8, 24, 25, 26, 27, 30, 31, 28, 29,
	4, 26, 30, 24, 28,
	4, 53, 54, 55, 56,
	22, 56, 57, 55, 51, 53, 67, 52, 66, 50, 64, 62, 63, 61, 51, 59, 57, 58, 56, 50, 54, 52, 53,
	4, 62, 60, 50, 58,
	5, 62, 61, 60, 59, 58,
	4, 67, 65, 66, 64,
	5, 67, 51, 65, 63, 64
};

extern "C" __declspec(dllexport) Sint16 poly_00025124[] = {
	0x8000u | 18, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 68, 69
};

extern "C" __declspec(dllexport) Sint16 poly_0002514A[] = {
	4, 1, 0, 5, 4,
	4, 9, 8, 13, 12,
	4, 17, 16, 21, 20,
	4, 25, 24, 29, 28
};

extern "C" __declspec(dllexport) Sint16 poly_00025172[] = {
	3, 36, 34, 32,
	3, 38, 36, 32,
	3, 40, 38, 32,
	3, 42, 40, 32,
	3, 44, 42, 32,
	3, 46, 44, 32,
	3, 48, 46, 32,
	3, 34, 48, 32
};

extern "C" __declspec(dllexport) Sint16 poly_000251B2[] = {
	3, 37, 39, 33,
	18, 40, 39, 38, 37, 36, 35, 34, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39,
	5, 39, 41, 33, 43, 45,
	3, 45, 47, 33,
	5, 47, 49, 33, 35, 37
};

extern "C" __declspec(dllexport) NJS_TEX uv_00025200[] = {
	{ 0 },
	{ 127, 254 },
	{ 160, 21 },
	{ 255, 192 },
	{ 160, 21 },
	{ 255, 192 },
	{ 0 },
	{ 127, 254 },
	{ 160, 21 },
	{ 0 },
	{ 160, 21 },
	{ 0 },
	{ 255, 0 },
	{ 127, 254 },
	{ 94, 21 },
	{ 0, 192 },
	{ 94, 21 },
	{ 0, 192 },
	{ 255, 0 },
	{ 127, 254 },
	{ 94, 21 },
	{ 255, 0 },
	{ 94, 21 },
	{ 255, 0 },
	{ 255, 0 },
	{ 255, 254 },
	{ 209, 21 },
	{ 209, 192 },
	{ 42, 21 },
	{ 42, 192 },
	{ 0 },
	{ 0, 254 },
	{ 209, 21 },
	{ 255, 0 },
	{ 42, 21 },
	{ 0 },
	{ 42, 192 },
	{ 0, 254 },
	{ 42, 21 },
	{ 0 },
	{ 209, 21 },
	{ 255, 0 },
	{ 209, 192 },
	{ 255, 254 },
	{ 42, 21 },
	{ 209, 21 },
	{ 42, 192 },
	{ 209, 192 },
	{ 216, 9 },
	{ 180, 255 },
	{ 164, 9 },
	{ 74, 255 },
	{ 74, 255 },
	{ 90, 9 },
	{ 164, 9 },
	{ 127, 9 },
	{ 216, 9 },
	{ 216, 9 },
	{ 255, 255 },
	{ 255, 255 },
	{ 127, 0 },
	{ 180, 255 },
	{ 74, 255 },
	{ 90, 9 },
	{ 38, 9 },
	{ 127, 9 },
	{ 38, 9 },
	{ 90, 9 },
	{ 0, 255 },
	{ 74, 255 },
	{ 127, 0 },
	{ 180, 255 },
	{ 255, 255 },
	{ 216, 9 },
	{ 74, 255 },
	{ 0, 255 },
	{ 127, 0 },
	{ 0, 255 },
	{ 74, 255 },
	{ 38, 9 },
	{ 0, 255 },
	{ 38, 9 },
	{ 0, 255 },
	{ 216, 9 },
	{ 164, 9 },
	{ 255, 255 },
	{ 180, 255 },
	{ 216, 9 },
	{ 127, 9 },
	{ 164, 9 },
	{ 90, 9 },
	{ 180, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00025370[] = {
	{ 0 },
	{ 0, 255 },
	{ 38, 0 },
	{ 38, 255 },
	{ 76, 0 },
	{ 76, 255 },
	{ 112, 0 },
	{ 112, 255 },
	{ 147, 0 },
	{ 147, 255 },
	{ 182, 0 },
	{ 182, 255 },
	{ 218, 0 },
	{ 218, 255 },
	{ 256, 0 },
	{ 256, 255 },
	{ 292, 0 },
	{ 292, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000253B8[] = {
	{ 254, 254 },
	{ 0 },
	{ 254, 254 },
	{ 0 },
	{ 254, 254 },
	{ 0 },
	{ 254, 254 },
	{ 0 },
	{ 254, 254 },
	{ 0 },
	{ 254, 254 },
	{ 0 },
	{ 254, 254 },
	{ 0 },
	{ 254, 254 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000253F8[] = {
	{ 0, 254 },
	{ 254, 254 },
	{ 128, 0 },
	{ 0, 254 },
	{ 254, 254 },
	{ 128, 0 },
	{ 0, 254 },
	{ 254, 254 },
	{ 128, 0 },
	{ 0, 254 },
	{ 254, 254 },
	{ 128, 0 },
	{ 0, 254 },
	{ 254, 254 },
	{ 128, 0 },
	{ 0, 254 },
	{ 254, 254 },
	{ 128, 0 },
	{ 0, 254 },
	{ 254, 254 },
	{ 128, 0 },
	{ 0, 254 },
	{ 254, 254 },
	{ 128, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00025458[] = {
	{ 162, 47 },
	{ 92, 47 },
	{ 127, 0 },
	{ 0, 255 },
	{ 92, 47 },
	{ 74, 255 },
	{ 162, 47 },
	{ 180, 255 },
	{ 212, 47 },
	{ 254, 255 },
	{ 212, 47 },
	{ 254, 255 },
	{ 162, 47 },
	{ 180, 255 },
	{ 92, 47 },
	{ 74, 255 },
	{ 42, 47 },
	{ 0, 255 },
	{ 42, 47 },
	{ 0, 255 },
	{ 92, 47 },
	{ 92, 47 },
	{ 42, 47 },
	{ 127, 0 },
	{ 42, 47 },
	{ 92, 47 },
	{ 92, 47 },
	{ 162, 47 },
	{ 127, 0 },
	{ 162, 47 },
	{ 212, 47 },
	{ 127, 0 },
	{ 212, 47 },
	{ 162, 47 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000254E0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 14, poly_00025050, NULL, NULL, NULL, uv_00025200, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00025124, NULL, NULL, NULL, uv_00025370, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_0002514A, NULL, NULL, NULL, uv_000253B8, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 8, poly_00025172, NULL, NULL, NULL, uv_000253F8, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 5, poly_000251B2, NULL, NULL, NULL, uv_00025458, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00025558[] = {
	{ 73.96369f, -56.46999f, -8.929276f },
	{ 65.03426f, -63.40818f, -12.71976f },
	{ 67.37826f, -37.38705f, -8.929276f },
	{ 56.11398f, -34.97461f, -12.71976f },
	{ 73.96369f, -56.46999f, 5.960325f },
	{ 65.03426f, -63.40818f, 10.02071f },
	{ 67.37826f, -37.38705f, 5.960325f },
	{ 56.11398f, -34.97461f, 10.02071f },
	{ -73.96369f, -56.34609f, 5.960403f },
	{ -65.03426f, -63.28428f, 10.02079f },
	{ -67.37826f, -37.26316f, 5.960403f },
	{ -56.11398f, -34.85072f, 10.02078f },
	{ -73.96369f, -56.34609f, -8.929196f },
	{ -65.03426f, -63.28428f, -12.71969f },
	{ -67.37826f, -37.26316f, -8.929196f },
	{ -56.11398f, -34.85072f, -12.71969f },
	{ 5.874732f, -57.18296f, 73.69574f },
	{ 9.942902f, -64.12114f, 64.79066f },
	{ 5.874732f, -38.10002f, 67.11029f },
	{ 9.942902f, -35.68759f, 55.87038f },
	{ -9.014856f, -57.18296f, 73.69574f },
	{ -12.79758f, -64.12115f, 64.79066f },
	{ -9.014856f, -38.10002f, 67.11029f },
	{ -12.79758f, -35.68759f, 55.87038f },
	{ -8.842799f, -56.80146f, -73.69574f },
	{ -12.64114f, -63.73965f, -64.79066f },
	{ -8.842799f, -37.71852f, -67.11029f },
	{ -12.64114f, -35.30609f, -55.87038f },
	{ 6.046808f, -56.80146f, -73.69574f },
	{ 10.09933f, -63.73965f, -64.79066f },
	{ 6.046808f, -37.71852f, -67.11029f },
	{ 10.09933f, -35.30609f, -55.87038f },
	{ -0.481659f, -69.69809f, 0.191078f },
	{ -0.481659f, 20.17314f, 0.191078f },
	{ 66.12079f, -69.69809f, -27.39656f },
	{ 43.86916f, 3.301926f, -18.17963f },
	{ 27.10597f, -69.69809f, -66.41136f },
	{ 17.88905f, 3.301926f, -44.15974f },
	{ -28.06929f, -69.69809f, -66.41135f },
	{ -18.85237f, 3.301926f, -44.15975f },
	{ -67.08408f, -69.69809f, -27.39655f },
	{ -44.83247f, 3.301926f, -18.17963f },
	{ -67.08408f, -69.69809f, 27.77871f },
	{ -44.83248f, 3.301926f, 18.56179f },
	{ -28.06929f, -69.69809f, 66.79351f },
	{ -18.85237f, 3.301926f, 44.54189f },
	{ 27.10597f, -69.69809f, 66.7935f },
	{ 17.88905f, 3.301926f, 44.5419f },
	{ 66.12077f, -69.69809f, 27.77871f },
	{ 43.86916f, 3.301926f, 18.56179f },
	{ -0.501251f, 20.16919f, 0.199195f },
	{ -0.501251f, 19.72221f, 0.199195f },
	{ 32.59906f, 7.615143f, -13.51141f },
	{ 22.66896f, 19.72221f, -9.398217f },
	{ 13.20935f, 7.615143f, -32.90113f },
	{ 9.096146f, 19.72221f, -22.97099f },
	{ -14.21185f, 7.615143f, -32.90113f },
	{ -10.09866f, 19.72221f, -22.97101f },
	{ -33.60158f, 7.615143f, -13.51141f },
	{ -23.67145f, 19.72221f, -9.398203f },
	{ -33.60158f, 7.615143f, 13.9098f },
	{ -23.67146f, 19.72221f, 9.796608f },
	{ -14.21185f, 7.615143f, 33.29952f },
	{ -10.09865f, 19.72221f, 23.36938f },
	{ 13.20935f, 7.615143f, 33.29952f },
	{ 9.096161f, 19.72221f, 23.3694f },
	{ 32.59907f, 7.615143f, 13.9098f },
	{ 22.66894f, 19.72221f, 9.796593f },
	{ 7.628876f, 19.6981f, -3.168415f },
	{ 7.628876f, 69.69809f, -3.168415f },
	{ 2.866364f, 19.6981f, -7.93094f },
	{ 2.866364f, 69.69809f, -7.93094f },
	{ -3.868866f, 19.6981f, -7.930941f },
	{ -3.868866f, 69.69809f, -7.930941f },
	{ -8.631392f, 19.6981f, -3.168418f },
	{ -8.631392f, 69.69809f, -3.168418f },
	{ -8.631377f, 19.6981f, 3.566805f },
	{ -8.631377f, 69.69809f, 3.566805f },
	{ -3.868866f, 19.6981f, 8.329329f },
	{ -3.868866f, 69.69809f, 8.329329f },
	{ 2.866364f, 19.6981f, 8.329329f },
	{ 2.866364f, 69.69809f, 8.329329f },
	{ 7.628876f, 19.6981f, 3.566808f },
	{ 7.628876f, 69.69809f, 3.566808f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00025948[] = {
	{ 0.860467f, -0.20785f, -0.465182f },
	{ 0.6308489f, -0.461842f, -0.623484f },
	{ 0.6217149f, 0.623646f, -0.473852f },
	{ 0.34582f, 0.746716f, -0.568176f },
	{ 0.866094f, -0.202639f, 0.456966f },
	{ 0.641654f, -0.445399f, 0.624419f },
	{ 0.624061f, 0.629329f, 0.463133f },
	{ 0.354796f, 0.745131f, 0.564712f },
	{ -0.86544f, -0.207179f, 0.456168f },
	{ -0.640562f, -0.450299f, 0.622021f },
	{ -0.626725f, 0.625744f, 0.464391f },
	{ -0.357666f, 0.741897f, 0.567154f },
	{ -0.861078f, -0.203526f, -0.465964f },
	{ -0.631871f, -0.457324f, -0.625775f },
	{ -0.6191919f, 0.627067f, -0.472639f },
	{ -0.343168f, 0.749687f, -0.5658669f },
	{ 0.455652f, -0.206544f, 0.865864f },
	{ 0.621436f, -0.449295f, 0.641834f },
	{ 0.46382f, 0.62573f, 0.627163f },
	{ 0.5669129f, 0.741601f, 0.358662f },
	{ -0.465987f, -0.20293f, 0.861206f },
	{ -0.625284f, -0.457003f, 0.632588f },
	{ -0.472634f, 0.62693f, 0.619335f },
	{ -0.5656959f, 0.749681f, 0.343462f },
	{ -0.464679f, -0.207214f, -0.860892f },
	{ -0.622918f, -0.460848f, -0.6321329f },
	{ -0.473293f, 0.62363f, -0.622157f },
	{ -0.567949f, 0.746431f, -0.346808f },
	{ 0.456971f, -0.202038f, -0.866232f },
	{ 0.623925f, -0.445065f, -0.6423669f },
	{ 0.46311f, 0.629196f, -0.624213f },
	{ 0.564539f, 0.745116f, -0.355104f },
	{ 0, -1, 0 },
	{ 0, 1, 0 },
	{ 0.796038f, -0.507545f, -0.32973f },
	{ 0.702051f, 0.6500469f, -0.290799f },
	{ 0.32973f, -0.507545f, -0.796038f },
	{ 0.290799f, 0.6500469f, -0.702051f },
	{ -0.32973f, -0.507545f, -0.796038f },
	{ -0.290799f, 0.6500469f, -0.702051f },
	{ -0.796038f, -0.507545f, -0.32973f },
	{ -0.702051f, 0.6500469f, -0.290799f },
	{ -0.796038f, -0.507545f, 0.32973f },
	{ -0.702051f, 0.6500469f, 0.290799f },
	{ -0.32973f, -0.507545f, 0.796038f },
	{ -0.290799f, 0.6500469f, 0.702051f },
	{ 0.32973f, -0.507545f, 0.796038f },
	{ 0.290799f, 0.6500469f, 0.702051f },
	{ 0.796038f, -0.507545f, 0.32973f },
	{ 0.702051f, 0.6500469f, 0.290799f },
	{ 0, -1, 0 },
	{ 0, 1, 0 },
	{ 0.8156199f, -0.46971f, -0.337841f },
	{ 0.450563f, 0.873019f, -0.186629f },
	{ 0.337841f, -0.46971f, -0.8156199f },
	{ 0.186629f, 0.873019f, -0.450563f },
	{ -0.337841f, -0.46971f, -0.8156199f },
	{ -0.186629f, 0.873019f, -0.450563f },
	{ -0.8156199f, -0.46971f, -0.337841f },
	{ -0.450563f, 0.873019f, -0.186629f },
	{ -0.8156199f, -0.46971f, 0.337841f },
	{ -0.450563f, 0.873019f, 0.186629f },
	{ -0.337841f, -0.46971f, 0.8156199f },
	{ -0.186629f, 0.873019f, 0.450563f },
	{ 0.337841f, -0.46971f, 0.8156199f },
	{ 0.186629f, 0.873019f, 0.450563f },
	{ 0.8156199f, -0.46971f, 0.337841f },
	{ 0.450563f, 0.873019f, 0.186629f },
	{ 0.92388f, 0, -0.382683f },
	{ 0.92388f, 0, -0.382683f },
	{ 0.382684f, 0, -0.923879f },
	{ 0.382684f, 0, -0.923879f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.382683f, 0, -0.92388f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.92388f, 0, -0.382683f },
	{ -0.923879f, 0, 0.382684f },
	{ -0.923879f, 0, 0.382684f },
	{ -0.382684f, 0, 0.923879f },
	{ -0.382684f, 0, 0.923879f },
	{ 0.382684f, 0, 0.923879f },
	{ 0.382684f, 0, 0.923879f },
	{ 0.92388f, 0, 0.382683f },
	{ 0.92388f, 0, 0.382683f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00025D38 = { vertex_00025558, normal_00025948, LengthOfArray<Sint32>(vertex_00025558), meshlist_000254E0, matlist_00024FEC, LengthOfArray<Uint16>(meshlist_000254E0), LengthOfArray<Uint16>(matlist_00024FEC), { 0 }, 104.3059f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00025D60 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00025D38, 168.8659f, 172.4046f, -0.191078f, 0, 0xF777, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00025D94 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_00025D60, NULL };
extern "C" __declspec(dllexport) NJS_MKEY_F animation_00017D58_1_pos[] = {
	{ 0, 168.8659f, 171.4224f, -0.191078f },
	{ 1, 168.8659f, 171.1532f, -0.191078f },
	{ 2, 168.8659f, 170.3999f, -0.191078f },
	{ 3, 168.8659f, 169.2435f, -0.191078f },
	{ 4, 168.8659f, 167.7652f, -0.191078f },
	{ 5, 168.8659f, 166.0459f, -0.191078f },
	{ 6, 168.8659f, 164.1668f, -0.191078f },
	{ 7, 168.8659f, 162.2091f, -0.191078f },
	{ 8, 168.8659f, 160.2538f, -0.191078f },
	{ 9, 168.8659f, 158.3819f, -0.191078f },
	{ 10, 168.8659f, 156.6748f, -0.191078f },
	{ 11, 168.8659f, 155.2133f, -0.191078f },
	{ 12, 168.8659f, 154.0787f, -0.191078f },
	{ 13, 168.8659f, 153.3519f, -0.191078f },
	{ 14, 168.8659f, 153.1143f, -0.191078f },
	{ 15, 168.8659f, 153.3889f, -0.191078f },
	{ 16, 168.8659f, 154.1002f, -0.191078f },
	{ 17, 168.8659f, 155.1808f, -0.191078f },
	{ 18, 168.8659f, 156.5632f, -0.191078f },
	{ 19, 168.8659f, 158.18f, -0.191078f },
	{ 20, 168.8659f, 159.9637f, -0.191078f },
	{ 21, 168.8659f, 161.847f, -0.191078f },
	{ 22, 168.8659f, 163.7624f, -0.191078f },
	{ 23, 168.8659f, 165.6424f, -0.191078f },
	{ 24, 168.8659f, 167.4197f, -0.191078f },
	{ 25, 168.8659f, 169.0268f, -0.191078f },
	{ 26, 168.8659f, 170.3962f, -0.191078f },
	{ 27, 168.8659f, 171.4606f, -0.191078f },
	{ 28, 168.8659f, 172.1525f, -0.191078f },
	{ 29, 168.8659f, 172.4046f, -0.191078f }
};

extern "C" __declspec(dllexport) NJS_MKEY_A animation_00017D58_1_rot[] = {
	{ 0, 0, 0, 0 },
	{ 1, 0, 0x6F4, 0 },
	{ 2, 0, 0xE07, 0 },
	{ 3, 0, 0x153B, 0 },
	{ 4, 0, 0x1C8D, 0 },
	{ 5, 0, 0x23FF, 0 },
	{ 6, 0, 0x2B8F, 0 },
	{ 7, 0, 0x333D, 0 },
	{ 8, 0, 0x3B0A, 0 },
	{ 9, 0, 0x42F3, 0 },
	{ 10, 0, 0x4AFA, 0 },
	{ 11, 0, 0x531E, 0 },
	{ 12, 0, 0x5B5F, 0 },
	{ 13, 0, 0x63BB, 0 },
	{ 14, 0, 0x6C34, 0 },
	{ 15, 0, 0x74C8, 0 },
	{ 16, 0, 0x7D78, 0 },
	{ 17, 0, 0x8642, 0 },
	{ 18, 0, 0x8F27, 0 },
	{ 19, 0, 0x9826, 0 },
	{ 20, 0, 0xA13F, 0 },
	{ 21, 0, 0xAA71, 0 },
	{ 22, 0, 0xB3BD, 0 },
	{ 23, 0, 0xBD22, 0 },
	{ 24, 0, 0xC69F, 0 },
	{ 25, 0, 0xD034, 0 },
	{ 26, 0, 0xD9E2, 0 },
	{ 27, 0, 0xE3A7, 0 },
	{ 28, 0, 0xED83, 0 },
	{ 29, 0, 0xF776, 0 }
};

extern "C" __declspec(dllexport) NJS_MDATA2 animation_00017D58_mdat[] = {
	{ NULL, NULL, 0, 0 },
	{ animation_00017D58_1_pos, animation_00017D58_1_rot, LengthOfArray<Uint32>(animation_00017D58_1_pos), LengthOfArray<Uint32>(animation_00017D58_1_rot) }
};

extern "C" __declspec(dllexport) NJS_MOTION animation_00017D58 = { animation_00017D58_mdat, 30, NJD_MTYPE_POS_0 | NJD_MTYPE_ANG_1, NJD_MTYPE_LINER | 2 };
extern "C" __declspec(dllexport) NJS_ACTION action_animation_00017D58 = { &object_00025D94, &animation_00017D58 };

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000261BC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000261E4[] = {
	3, 0, 2, 4,
	3, 1, 5, 3,
	3, 0, 4, 6,
	3, 1, 7, 5,
	3, 0, 6, 8,
	3, 1, 9, 7,
	3, 0, 8, 10,
	3, 1, 11, 9,
	3, 0, 10, 12,
	3, 1, 13, 11,
	3, 0, 12, 14,
	3, 1, 15, 13,
	3, 0, 14, 16,
	3, 1, 17, 15,
	3, 0, 16, 2,
	3, 1, 3, 17
};

extern "C" __declspec(dllexport) Sint16 poly_00026264[] = {
	18, 4, 7, 6, 9, 8, 11, 10, 13, 12, 15, 14, 17, 16, 3, 2, 5, 4, 7
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002628C[] = {
	{ 126, 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 126, 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 126, 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 126, 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 126, 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 126, 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 126, 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 126, 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 126, 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 126, 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 126, 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 126, 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 126, 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 126, 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 126, 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 126, 0 },
	{ 254, 254 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0002634C[] = {
	{ 217, 37 },
	{ 127, 20 },
	{ 127, 0 },
	{ 51, 51 },
	{ 37, 37 },
	{ 20, 127 },
	{ 0, 127 },
	{ 51, 203 },
	{ 37, 217 },
	{ 127, 234 },
	{ 127, 255 },
	{ 203, 203 },
	{ 217, 217 },
	{ 234, 127 },
	{ 255, 127 },
	{ 203, 51 },
	{ 217, 37 },
	{ 127, 20 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00026394[] = {
	{ NJD_MESHSET_TRIMESH | 0, 16, poly_000261E4, NULL, NULL, NULL, uv_0002628C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00026264, NULL, NULL, NULL, uv_0002634C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000263C4[] = {
	{ 0.000001f, -27.39855f, 0.000001f },
	{ 0.000001f, 48.24803f, -0.00002f },
	{ 20, -27.39855f, 0.000001f },
	{ 16.75895f, 48.24803f, -0.00001f },
	{ 14.14214f, -27.39855f, 14.14213f },
	{ 11.85037f, 48.24803f, 11.85037f },
	{ 0.000001f, -27.39855f, 19.99999f },
	{ 0.000001f, 48.24803f, 16.75895f },
	{ -14.14213f, -27.39855f, 14.14213f },
	{ -11.85037f, 48.24803f, 11.85037f },
	{ -20, -27.39855f, 0.000001f },
	{ -16.75895f, 48.24803f, -0.00002f },
	{ -14.14213f, -27.39855f, -14.14214f },
	{ -11.85037f, 48.24803f, -11.85037f },
	{ 0.000002f, -27.39855f, -20.00001f },
	{ 0.000002f, 48.24803f, -16.75896f },
	{ 14.14214f, -27.39855f, -14.14214f },
	{ 11.85037f, 48.24803f, -11.85037f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0002649C[] = {
	{ 0, -1, 0 },
	{ 0, 1, 0 },
	{ 0.789211f, -0.614122f, 0 },
	{ 0.76311f, 0.646269f, 0 },
	{ 0.558056f, -0.614122f, 0.558056f },
	{ 0.5396f, 0.646269f, 0.5396f },
	{ 0, -0.614122f, 0.789211f },
	{ 0, 0.646269f, 0.76311f },
	{ -0.558056f, -0.614122f, 0.558056f },
	{ -0.5396f, 0.646269f, 0.5396f },
	{ -0.789211f, -0.614122f, 0 },
	{ -0.76311f, 0.646269f, 0 },
	{ -0.558056f, -0.614122f, -0.558056f },
	{ -0.5396f, 0.646269f, -0.5396f },
	{ 0, -0.614122f, -0.789211f },
	{ 0, 0.646269f, -0.76311f },
	{ 0.558056f, -0.614122f, -0.558056f },
	{ 0.5396f, 0.646269f, -0.5396f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00026574 = { vertex_000263C4, normal_0002649C, LengthOfArray<Sint32>(vertex_000263C4), meshlist_00026394, matlist_000261BC, LengthOfArray<Uint16>(meshlist_00026394), LengthOfArray<Uint16>(matlist_000261BC), { 0.000002f, 10.42474f, -0.00006f }, 99.72273f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0002659C = { NJD_EVAL_BREAK, &attach_00026574, 168.3842f, 56, 0, 0x8000, 0xFFFF0889, 0, 3.604498f, 1, 3.604498f, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000265D0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_0002659C, NULL };
extern "C" __declspec(dllexport) NJS_MKEY_A animation_000183B4_1_rot[] = {
	{ 0, 0xFFFF8001, 0, 0 },
	{ 1, 0xFFFF8001, 0xFFFFF7D6, 0 },
	{ 2, 0xFFFF8001, 0xFFFFEFA4, 0 },
	{ 3, 0xFFFF8001, 0xFFFFE769, 0 },
	{ 4, 0xFFFF8001, 0xFFFFDF26, 0 },
	{ 5, 0xFFFF8001, 0xFFFFD6DB, 0 },
	{ 6, 0xFFFF8001, 0xFFFFCE89, 0 },
	{ 7, 0xFFFF8001, 0xFFFFC62F, 0 },
	{ 8, 0xFFFF8001, 0xFFFFBDCE, 0 },
	{ 9, 0xFFFF8001, 0xFFFFB566, 0 },
	{ 10, 0xFFFF8001, 0xFFFFACF7, 0 },
	{ 11, 0xFFFF8001, 0xFFFFA481, 0 },
	{ 12, 0xFFFF8001, 0xFFFF9C05, 0 },
	{ 13, 0xFFFF8001, 0xFFFF9382, 0 },
	{ 14, 0xFFFF8001, 0xFFFF8AF9, 0 },
	{ 15, 0xFFFF8001, 0xFFFF826A, 0 },
	{ 16, 0xFFFF8001, 0xFFFF79D5, 0 },
	{ 17, 0xFFFF8001, 0xFFFF713B, 0 },
	{ 18, 0xFFFF8001, 0xFFFF689B, 0 },
	{ 19, 0xFFFF8001, 0xFFFF5FF6, 0 },
	{ 20, 0xFFFF8001, 0xFFFF574C, 0 },
	{ 21, 0xFFFF8001, 0xFFFF4E9D, 0 },
	{ 22, 0xFFFF8001, 0xFFFF45E9, 0 },
	{ 23, 0xFFFF8001, 0xFFFF3D31, 0 },
	{ 24, 0xFFFF8001, 0xFFFF3474, 0 },
	{ 25, 0xFFFF8001, 0xFFFF2BB3, 0 },
	{ 26, 0xFFFF8001, 0xFFFF22EF, 0 },
	{ 27, 0xFFFF8001, 0xFFFF1A26, 0 },
	{ 28, 0xFFFF8001, 0xFFFF115A, 0 },
	{ 29, 0xFFFF8001, 0xFFFF088A, 0 }
};

extern "C" __declspec(dllexport) NJS_MDATA2 animation_000183B4_mdat[] = {
	{ NULL, NULL, 0, 0 },
	{ NULL, animation_000183B4_1_rot, 0, LengthOfArray<Uint32>(animation_000183B4_1_rot) }
};

extern "C" __declspec(dllexport) NJS_MOTION animation_000183B4 = { animation_000183B4_mdat, 30, NJD_MTYPE_POS_0 | NJD_MTYPE_ANG_1, NJD_MTYPE_LINER | 2 };
extern "C" __declspec(dllexport) NJS_ACTION action_animation_000183B4 = { &object_000265D0, &animation_000183B4 };

extern "C" __declspec(dllexport) NJS_OBJECT object_00026818 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 52.9645f, 0, 0, 0, 1, 1, 1, &object_00024D70, NULL };
extern "C" __declspec(dllexport) NJS_MKEY_A animation_000185FC_1_rot[] = {
	{ 0, 0, 0, 0 },
	{ 1, 0, 0, 0xFFFFF651 },
	{ 2, 0, 0, 0xFFFFEC97 },
	{ 3, 0, 0, 0xFFFFE2D7 },
	{ 4, 0, 0, 0xFFFFD913 },
	{ 5, 0, 0, 0xFFFFCF4D },
	{ 6, 0, 0, 0xFFFFC58A },
	{ 7, 0, 0, 0xFFFFBBCA },
	{ 8, 0, 0, 0xFFFFB212 },
	{ 9, 0, 0, 0xFFFFA864 },
	{ 10, 0, 0, 0xFFFF9EC3 },
	{ 11, 0, 0, 0xFFFF9531 },
	{ 12, 0, 0, 0xFFFF8BB2 },
	{ 13, 0, 0, 0xFFFF8249 },
	{ 14, 0, 0, 0xFFFF78F7 },
	{ 15, 0, 0, 0xFFFF6FC1 },
	{ 16, 0, 0, 0xFFFF66A8 },
	{ 17, 0, 0, 0xFFFF5DB0 },
	{ 18, 0, 0, 0xFFFF54DC },
	{ 19, 0, 0, 0xFFFF4C2D },
	{ 20, 0, 0, 0xFFFF43A8 },
	{ 21, 0, 0, 0xFFFF3B4F },
	{ 22, 0, 0, 0xFFFF3324 },
	{ 23, 0, 0, 0xFFFF2B2B },
	{ 24, 0, 0, 0xFFFF2366 },
	{ 25, 0, 0, 0xFFFF1BD8 },
	{ 26, 0, 0, 0xFFFF1485 },
	{ 27, 0, 0, 0xFFFF0D6E },
	{ 28, 0, 0, 0xFFFF0696 },
	{ 29, 0, 0, 0xFFFF0002 }
};

extern "C" __declspec(dllexport) NJS_MDATA2 animation_000185FC_mdat[] = {
	{ NULL, NULL, 0, 0 },
	{ NULL, animation_000185FC_1_rot, 0, LengthOfArray<Uint32>(animation_000185FC_1_rot) }
};

extern "C" __declspec(dllexport) NJS_MOTION animation_000185FC = { animation_000185FC_mdat, 30, NJD_MTYPE_POS_0 | NJD_MTYPE_ANG_1, NJD_MTYPE_LINER | 2 };
extern "C" __declspec(dllexport) NJS_ACTION action_animation_000185FC = { &object_00026818, &animation_000185FC };

extern "C" __declspec(dllexport) NJS_OBJECT object_00026854 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0.000144f, 0, 0, 0, 1, 1, 1, &object_00024D70, NULL };
extern "C" __declspec(dllexport) NJS_MKEY_A animation_00018844_1_rot[] = {
	{ 0, 0, 0, 0 },
	{ 1, 0, 0, 0xFFFFF651 },
	{ 2, 0, 0, 0xFFFFEC97 },
	{ 3, 0, 0, 0xFFFFE2D7 },
	{ 4, 0, 0, 0xFFFFD913 },
	{ 5, 0, 0, 0xFFFFCF4D },
	{ 6, 0, 0, 0xFFFFC58A },
	{ 7, 0, 0, 0xFFFFBBCA },
	{ 8, 0, 0, 0xFFFFB212 },
	{ 9, 0, 0, 0xFFFFA864 },
	{ 10, 0, 0, 0xFFFF9EC3 },
	{ 11, 0, 0, 0xFFFF9531 },
	{ 12, 0, 0, 0xFFFF8BB2 },
	{ 13, 0, 0, 0xFFFF8249 },
	{ 14, 0, 0, 0xFFFF78F7 },
	{ 15, 0, 0, 0xFFFF6FC1 },
	{ 16, 0, 0, 0xFFFF66A8 },
	{ 17, 0, 0, 0xFFFF5DB0 },
	{ 18, 0, 0, 0xFFFF54DC },
	{ 19, 0, 0, 0xFFFF4C2D },
	{ 20, 0, 0, 0xFFFF43A8 },
	{ 21, 0, 0, 0xFFFF3B4F },
	{ 22, 0, 0, 0xFFFF3324 },
	{ 23, 0, 0, 0xFFFF2B2B },
	{ 24, 0, 0, 0xFFFF2366 },
	{ 25, 0, 0, 0xFFFF1BD8 },
	{ 26, 0, 0, 0xFFFF1485 },
	{ 27, 0, 0, 0xFFFF0D6E },
	{ 28, 0, 0, 0xFFFF0696 },
	{ 29, 0, 0, 0xFFFF0002 }
};

extern "C" __declspec(dllexport) NJS_MDATA2 animation_00018844_mdat[] = {
	{ NULL, NULL, 0, 0 },
	{ NULL, animation_00018844_1_rot, 0, LengthOfArray<Uint32>(animation_00018844_1_rot) }
};

extern "C" __declspec(dllexport) NJS_MOTION animation_00018844 = { animation_00018844_mdat, 30, NJD_MTYPE_POS_0 | NJD_MTYPE_ANG_1, NJD_MTYPE_LINER | 2 };
extern "C" __declspec(dllexport) NJS_ACTION action_animation_00018844 = { &object_00026854, &animation_00018844 };

extern "C" __declspec(dllexport) NJS_OBJECT object_00026890 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, -35.01471f, 0, 0, 0, 1, 1, 1, &object_00024D70, NULL };
extern "C" __declspec(dllexport) NJS_MKEY_A animation_00018A8C_1_rot[] = {
	{ 0, 0, 0, 0 },
	{ 1, 0, 0, 0xFFFFF651 },
	{ 2, 0, 0, 0xFFFFEC97 },
	{ 3, 0, 0, 0xFFFFE2D7 },
	{ 4, 0, 0, 0xFFFFD913 },
	{ 5, 0, 0, 0xFFFFCF4D },
	{ 6, 0, 0, 0xFFFFC58A },
	{ 7, 0, 0, 0xFFFFBBCA },
	{ 8, 0, 0, 0xFFFFB212 },
	{ 9, 0, 0, 0xFFFFA864 },
	{ 10, 0, 0, 0xFFFF9EC3 },
	{ 11, 0, 0, 0xFFFF9531 },
	{ 12, 0, 0, 0xFFFF8BB2 },
	{ 13, 0, 0, 0xFFFF8249 },
	{ 14, 0, 0, 0xFFFF78F7 },
	{ 15, 0, 0, 0xFFFF6FC1 },
	{ 16, 0, 0, 0xFFFF66A8 },
	{ 17, 0, 0, 0xFFFF5DB0 },
	{ 18, 0, 0, 0xFFFF54DC },
	{ 19, 0, 0, 0xFFFF4C2D },
	{ 20, 0, 0, 0xFFFF43A8 },
	{ 21, 0, 0, 0xFFFF3B4F },
	{ 22, 0, 0, 0xFFFF3324 },
	{ 23, 0, 0, 0xFFFF2B2B },
	{ 24, 0, 0, 0xFFFF2366 },
	{ 25, 0, 0, 0xFFFF1BD8 },
	{ 26, 0, 0, 0xFFFF1485 },
	{ 27, 0, 0, 0xFFFF0D6E },
	{ 28, 0, 0, 0xFFFF0696 },
	{ 29, 0, 0, 0xFFFF0002 }
};

extern "C" __declspec(dllexport) NJS_MDATA2 animation_00018A8C_mdat[] = {
	{ NULL, NULL, 0, 0 },
	{ NULL, animation_00018A8C_1_rot, 0, LengthOfArray<Uint32>(animation_00018A8C_1_rot) }
};

extern "C" __declspec(dllexport) NJS_MOTION animation_00018A8C = { animation_00018A8C_mdat, 30, NJD_MTYPE_POS_0 | NJD_MTYPE_ANG_1, NJD_MTYPE_LINER | 2 };
extern "C" __declspec(dllexport) NJS_ACTION action_animation_00018A8C = { &object_00026890, &animation_00018A8C };

extern "C" __declspec(dllexport) COL collist_0000B620[] = {
	{ { -56.16613f, 100.0037f, 75.32642f }, 103.1758f, 0, 0, &object_00010A18, 0, 0x80000000 },
	{ { -160.6487f, 144.5501f, -0.1848345f }, 64.73682f, 0, 0, &object_00010BE4, 0, 0x80000000 },
	{ { -10.49014f, 35.06365f, -150.8697f }, 94.78144f, 0, 0, &object_00010DB0, 0, 0x80000000 },
	{ { -10.73016f, 84.99912f, -90.33684f }, 74.55839f, 0, 0, &object_00011058, 0, 0x80000000 },
	{ { -55.66578f, 207.0037f, 72.07642f }, 29.5307f, 0, 0, &object_000112DC, 0, 0x80000000 },
	{ { -80.66575f, 264.9892f, 88.32641f }, 21.22302f, 0, 0, &object_0001182C, 0, 0x80000000 },
	{ { 66.33441f, 221.0141f, -70.17334f }, 36.18375f, 0, 0, &object_00012254, 0, 0x80000000 },
	{ { -80.66573f, 50.00197f, 96.32641f }, 53.99832f, 0, 0, &object_00012968, 0, 0x80000000 },
	{ { 84.97396f, 145.2208f, 0 }, 76.9619f, 0, 0, &object_00013198, 0, 0x80000000 },
	{ { 59.5f, 32.49999f, -107.1736f }, 27.72634f, 0, 0, &object_00013628, 0, 0x80000000 },
	{ { -65.49792f, 17.50187f, -106.6132f }, 37.41513f, 0, 0, &object_00013F04, 0, 0x80000000 },
	{ { 59.51245f, 15.02039f, -107.5509f }, 31.09488f, 0, 0, &object_0001419C, 0, 0x80000000 },
	{ { 75.58434f, 150.0037f, -95.67356f }, 150.7118f, 0, 0, &object_00014484, 0, 0x80000000 },
	{ { -96.95625f, 150.0037f, -95.67356f }, 150.7118f, 0, 0, &object_0001476C, 0, 0x80000000 },
	{ { -55.67889f, 257.0019f, 95.32641f }, 43.42913f, 0, 0, &object_00014A40, 0, 0x80000000 },
	{ { 69.33031f, 150.2537f, 95.3303f }, 151.1624f, 0, 0, &object_00014F24, 0, 0x80000000 },
	{ { -110.6641f, 225.5043f, 0.3304825f }, 90.13797f, 0, 0, &object_0001516C, 0, 0x80000000 },
	{ { -110.6641f, 50.00473f, 0.3304825f }, 70.70874f, 0, 0, &object_00015344, 0, 0x80000000 },
	{ { -110.6641f, 125.3058f, -35.16336f }, 29.49603f, 0, 0, &object_00015448, 0, 0x80000000 },
	{ { -110.6641f, 125.2816f, 35.16331f }, 29.47529f, 0, 0, &object_0001554C, 0, 0x80000000 },
	{ { 41.81248f, 200.049f, -99.16968f }, 101.982f, 0, 0, &object_00015F0C, 0, 0x80000000 },
	{ { -10.78227f, 200.049f, -96.16968f }, 105.2352f, 0, 0, &object_00016990, 0, 0x80000000 },
	{ { 24.5f, 150.0976f, 95.51508f }, 152.1356f, 0, 0, &object_000176E0, 0, 0x80000000 },
	{ { -105.6657f, 150.0037f, 75.32642f }, 152.1512f, 0, 0, &object_000179C8, 0, 0x80000000 },
	{ { 161.3374f, 149.9999f, 0 }, 195.5064f, 0, 0, &object_0001857C, 0, 0x80000000 },
	{ { -110.7673f, 150.2529f, -74.66239f }, 152.318f, 0, 0, &object_000187AC, 0, 0x80000000 },
	{ { -41.57392f, 107.037f, -2.190628f }, 28.28427f, 0, 0, &object_000188B0, 0, 0x80000000 },
	{ { -41.74774f, 91.10913f, -2.555275f }, 28.28427f, 0, 0, &object_000189B4, 0, 0x80000000 },
	{ { -109.1109f, 111.2224f, 26.82435f }, 8.575222f, 0, 0, &object_00018B64, 0, 0x80000000 },
	{ { 150.1778f, 34.89689f, -0.006981f }, 121.2293f, 0, 0, &object_00019284, 0, 0x80000000 },
	{ { -10.1657f, 313.9813f, -0.17359f }, 71.24081f, 0, 0, &object_000194B0, 0, 0x80000000 },
	{ { -55.16577f, 264.5038f, 70.57641f }, 31.79721f, 0, 0, &object_00019830, 0, 0x80000000 },
	{ { 33.97093f, 264.5038f, 74.96202f }, 34.75505f, 0, 0, &object_00019D2C, 0, 0x80000000 },
	{ { -9.999995f, 309.4673f, -0.499998f }, 141.3873f, 0, 0, &object_0001A04C, 0, 0x80000000 },
	{ { -10.84513f, 0.50375f, 1.581017f }, 142.8435f, 0, 0, &object_0001A718, 0, 0x80000000 },
	{ { 66.33434f, 228.0607f, 67.32641f }, 34.66986f, 0, 0, &object_0001AC04, 0, 0x80000000 },
	{ { -8.665526f, 238.5037f, 67.82641f }, 56.67892f, 0, 0, &object_0001B0D4, 0, 0x80000000 },
	{ { -80.91186f, 175.0038f, -64.83042f }, 50.69413f, 0, 0, &object_0001B2F8, 0, 0x80000000 },
	{ { -58.82227f, 225.5037f, 59.32642f }, 16.16587f, 0, 0, &object_0001B584, 0, 0x80000000 },
	{ { -7.66571f, 225.5038f, 80.3264f }, 53.22834f, 0, 0, &object_0001BA0C, 0, 0x80000000 },
	{ { -80.66574f, 285.0341f, 70.26282f }, 39.1161f, 0, 0, &object_0001BE10, 0, 0x80000000 },
	{ { 69.31979f, 230.9949f, 8.826113f }, 41.96235f, 0, 0, &object_0001D168, 0, 0x80000000 },
	{ { 69.33423f, 226.0037f, -39.17401f }, 27.95085f, 0, 0, &object_0001DEA8, 0, 0x80000000 },
	{ { 69.334f, 233.0031f, -29.17298f }, 22.80898f, 0, 0, &object_0001E7EC, 0, 0x80000000 },
	{ { 69.33401f, 238.9999f, -4.673919f }, 48.39386f, 0, 0, &object_0001EA00, 0, 0x80000000 },
	{ { -41.73162f, 100.0264f, -1.608821f }, 44.42226f, 0, 0, &object_000211BC, 0, 0x80000000 },
	{ { -88.68497f, 110.6557f, -0.232178f }, 34.55869f, 0, 0, &object_00021620, 0, 0x80000000 },
	{ { -88.68497f, 108.7331f, -0.232177f }, 29.80296f, 0, 0, &object_00021724, 0, 0x80000000 },
	{ { 131.0509f, 237.7565f, 0 }, 108.0722f, 0, 0, &object_00022A90, 0, 0x80000000 },
	{ { 168.3654f, 93.49681f, 0 }, 86.29485f, 0, 0, &object_00022D08, 0, 0x80000000 },
	{ { -15.50001f, 225.5f, 58.99999f }, 16.53783f, 0, 0, &object_00023080, 0, 0x80000000 },
	{ { -76.00003f, 174.8786f, -18.7331f }, 24.22808f, 0, 0, &object_000233F8, 0, 0x80000000 },
	{ { -89.10615f, 111.2224f, -28.04455f }, 8.575222f, 0, 0, &object_000235A8, 0, 0x80000000 },
	{ { -94.11089f, 111.2411f, 27.97766f }, 11.52753f, 0, 0, &object_0002378C, 0, 0x80000000 },
	{ { -80.89867f, 198.0038f, -53.8353f }, 55.02444f, 0, 0, &object_00023C2C, 0, 0x80000000 },
	{ { 59.51245f, 50.00014f, -107.5509f }, 31.09488f, 0, 0, &object_00023EC4, 0, 0x80000000 },
	{ { -80.66573f, 249.9948f, 96.32641f }, 53.99832f, 0, 0, &object_00023EF8, 0, 0x80000000 },
	{ { -80.66573f, 149.9984f, 96.32641f }, 53.99832f, 0, 0, &object_00023F2C, 0, 0x80000000 },
	{ { 59.5f, 67.49998f, -107.1736f }, 27.72634f, 0, 0, &object_00023F60, 0, 0x80000000 },
	{ { -65.49792f, 52.52484f, -106.6132f }, 37.41513f, 0, 0, &object_00023F94, 0, 0x80000000 },
	{ { -30.49921f, 52.52484f, -106.6132f }, 37.41513f, 0, 0, &object_00023FC8, 0, 0x80000000 },
	{ { 4.501665f, 52.52484f, -106.6132f }, 37.41513f, 0, 0, &object_00023FFC, 0, 0x80000000 },
	{ { 39.48944f, 52.52484f, -106.6132f }, 37.41513f, 0, 0, &object_00024030, 0, 0x80000000 },
	{ { 39.48944f, 17.50194f, -106.6132f }, 37.41513f, 0, 0, &object_00024064, 0, 0x80000000 },
	{ { 4.501665f, 17.50194f, -106.6132f }, 37.41513f, 0, 0, &object_00024098, 0, 0x80000000 },
	{ { -30.49921f, 17.50194f, -106.6132f }, 37.41513f, 0, 0, &object_000240CC, 0, 0x80000000 },
	{ { -63.2791f, 200.049f, -99.16968f }, 101.982f, 0, 0, &object_00024100, 0, 0x80000000 },
	{ { -25.5f, 150.0976f, 95.51508f }, 152.1356f, 0, 0, &object_00024134, 0, 0x80000000 },
	{ { 69.334f, 233.0031f, -14.17342f }, 22.80898f, 0, 0, &object_00024168, 0, 0x80000000 },
	{ { 69.334f, 233.0031f, 0.827723f }, 22.80898f, 0, 0, &object_0002419C, 0, 0x80000000 },
	{ { 69.334f, 233.0031f, 15.81809f }, 22.80898f, 0, 0, &object_000241D0, 0, 0x80000000 },
	{ { -24.50001f, 225.5f, 58.99999f }, 16.53783f, 0, 0, &object_00024204, 0, 0x80000000 },
	{ { -51.5f, 225.5f, 58.99999f }, 16.53783f, 0, 0, &object_00024238, 0, 0x80000000 },
	{ { -33.5f, 225.5f, 58.99999f }, 16.53783f, 0, 0, &object_0002426C, 0, 0x80000000 },
	{ { -6.500004f, 225.5f, 58.99999f }, 16.53783f, 0, 0, &object_000242A0, 0, 0x80000000 },
	{ { 38.49999f, 225.5f, 58.99999f }, 16.53783f, 0, 0, &object_000242D4, 0, 0x80000000 },
	{ { 2.499996f, 225.5f, 58.99999f }, 16.53783f, 0, 0, &object_00024308, 0, 0x80000000 },
	{ { 11.49999f, 225.5f, 58.99999f }, 16.53783f, 0, 0, &object_0002433C, 0, 0x80000000 },
	{ { 20.49999f, 225.5f, 58.99999f }, 16.53783f, 0, 0, &object_00024370, 0, 0x80000000 },
	{ { -42.5f, 225.5f, 58.99999f }, 16.53783f, 0, 0, &object_000243A4, 0, 0x80000000 },
	{ { 29.49999f, 225.5f, 58.99999f }, 16.53783f, 0, 0, &object_000243D8, 0, 0x80000000 },
	{ { -96.00003f, 174.8786f, -18.7331f }, 24.22808f, 0, 0, &object_0002440C, 0, 0x80000000 },
	{ { -66.00003f, 174.8786f, -18.7331f }, 24.22808f, 0, 0, &object_00024440, 0, 0x80000000 },
	{ { -56.00003f, 174.8786f, -18.7331f }, 24.22808f, 0, 0, &object_00024474, 0, 0x80000000 },
	{ { -86.00003f, 174.8786f, -18.7331f }, 24.22808f, 0, 0, &object_000244A8, 0, 0x80000000 },
	{ { -106, 174.8786f, -18.7331f }, 24.22808f, 0, 0, &object_000244DC, 0, 0x80000000 },
	{ { -79.10689f, 111.2224f, -28.04455f }, 8.575222f, 0, 0, &object_00024510, 0, 0x80000000 },
	{ { -109.1105f, 111.2224f, -28.04455f }, 8.575222f, 0, 0, &object_00024544, 0, 0x80000000 },
	{ { -79.11089f, 111.2224f, 26.82435f }, 8.575222f, 0, 0, &object_00024578, 0, 0x80000000 },
	{ { -89.11089f, 111.2224f, 26.82435f }, 8.575222f, 0, 0, &object_000245AC, 0, 0x80000000 },
	{ { -99.10609f, 111.2224f, -28.04455f }, 8.575222f, 0, 0, &object_000245E0, 0, 0x80000000 },
	{ { -99.1109f, 111.2224f, 15.04322f }, 8.238935f, 0, 0, &object_00024614, 0, 0x80000000 },
	{ { -74.1069f, 111.2411f, -29.19786f }, 11.52753f, 0, 0, &object_00024648, 0, 0x80000000 },
	{ { -104.1109f, 111.2411f, 27.97766f }, 11.52753f, 0, 0, &object_0002467C, 0, 0x80000000 },
	{ { -84.10609f, 111.2411f, -29.19786f }, 11.52753f, 0, 0, &object_000246B0, 0, 0x80000000 },
	{ { -84.11089f, 111.2411f, 27.97766f }, 11.52753f, 0, 0, &object_000246E4, 0, 0x80000000 },
	{ { -74.11089f, 111.2411f, 27.97766f }, 11.52753f, 0, 0, &object_00024718, 0, 0x80000000 },
	{ { -104.1104f, 111.2411f, -29.19786f }, 11.52753f, 0, 0, &object_0002474C, 0, 0x80000000 },
	{ { -94.10603f, 111.2411f, -29.19786f }, 11.52753f, 0, 0, &object_00024780, 0, 0x80000000 },
	{ { 13.69929f, 259.6905f, 72.75465f }, 91.99953f, 0, 0, &object_00026C7C, 0, 0x20000001 },
	{ { -80.88791f, 176.9915f, -54.02353f }, 60.00164f, 0, 0, &object_00026E54, 0, 0x40000001 },
	{ { -63.67682f, 106.5762f, -0.465569f }, 59.002f, 0, 0, &object_0002717C, 0, 0x40000001 },
	{ { 66.74978f, 220.3568f, -22.2927f }, 72.95934f, 0, 0, &object_000274A4, 0, 0x40000001 },
	{ { -81.25443f, 152.2253f, 69.49667f }, 159.8125f, 0, 0, &object_000279BC, 0, 0x20000001 },
	{ { 75.82644f, 150.5521f, 3.341652f }, 186.9522f, 0, 0, &object_00027CC4, 0, 0x20000001 },
	{ { -61.12737f, 150.2586f, -1.035168f }, 230.3157f, 0, 0, &object_00028064, 0, 0x20000001 },
	{ { -10.51929f, 61.90183f, -89.36643f }, 96.42747f, 0, 0, &object_00028234, 0, 0x20000001 },
	{ { -80.31692f, 159.9728f, 59.29292f }, 112.0179f, 0, 0, &object_0001045C, 0, 0x80000000 }, //Wall that had grating
	{ { -80.31692f, 159.9728f, 59.29292f }, 112.0179f, 0, 0, &object_0001045C_2, 0, 0x80040000 }, //Grating transparent
	{ { 95.62103f, 225.0947f, 0.0441165f }, 109.5138f, 0, 0, &object_00012C14, 0, 0x80000000 }, //Glass 1
	{ { 85.0388f, 72.73563f, 0.0441165f }, 101.911f, 0, 0, &object_00012EB4, 0, 0x80000000 }, //Glass 2
	{ { -10.66586f, 262.7539f, 75.70837f }, 51.39858f, 0, 0, &object_000199AC, 0, 0x80000000 }, //Glass top
};

extern "C" __declspec(dllexport) GeoAnimData animlist_0000C5BC[] = {
	{ 0x40400000, 0.05f, 30, &object_00024DA4, &action_animation_00016B84, (NJS_TEXLIST *)0 },
	{ 0, 0.06999999f, 30, &object_00025D94, &action_animation_00017D58, (NJS_TEXLIST *)0 },
	{ 0, 0.06999999f, 30, &object_000265D0, &action_animation_000183B4, (NJS_TEXLIST *)0 },
	{ 0, 0.09999999f, 30, &object_00026818, &action_animation_000185FC, (NJS_TEXLIST *)0 },
	{ 0, 0.09999999f, 30, &object_00026854, &action_animation_00018844, (NJS_TEXLIST *)0 },
	{ 0x40400000, 0.05f, 30, &object_00026890, &action_animation_00018A8C, (NJS_TEXLIST *)0 }
};

extern "C" __declspec(dllexport) LandTable landtable_0000C64C = { LengthOfArray<int16_t>(collist_0000B620), LengthOfArray<int16_t>(animlist_0000C5BC), 9, 0, collist_0000B620, animlist_0000C5BC, "ADV_EC30", &texlist_ec30, 0, 0 };

#pragma warning(pop)
