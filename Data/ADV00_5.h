#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00157584[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00157598[] = {
	4, 3, 2, 1, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_001575A4[] = {
	{ 0, -2295 },
	{ 4590, -2295 },
	{ 0, 255 },
	{ 4590, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_001575B4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00157598, NULL, NULL, NULL, uv_001575A4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_001575CC[] = {
	{ 89.92419f, 0, -37.74805f },
	{ -44.07581f, 0, -37.74805f },
	{ 89.92419f, 0, 39.25195f },
	{ -44.07581f, 0, 39.25195f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_001575FC[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0015762C = { vertex_001575CC, normal_001575FC, LengthOfArray<Sint32>(vertex_001575CC), meshlist_001575B4, matlist_00157584, LengthOfArray<Uint16>(meshlist_001575B4), LengthOfArray<Uint16>(matlist_00157584), { 22.92419f, 0, 0.7519529f }, 77.27386f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00157654 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0015762C, 716.8258f, 47, 1770.748f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00157688[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0015769C[] = {
	3, 2, 29, 0,
	0x8000u | 6, 8, 30, 6, 32, 17, 16,
	3, 8, 7, 6,
	3, 4, 5, 23,
	17, 33, 32, 26, 15, 27, 16, 28, 19, 25, 18, 11, 7, 10, 8, 9, 30, 29,
	3, 15, 32, 16,
	3, 11, 10, 25,
	0x8000u | 7, 11, 5, 24, 23, 25, 22, 10,
	0x8000u | 17, 9, 3, 29, 4, 2, 5, 0, 24, 21, 28, 20, 27, 13, 26, 14, 33, 31,
	4, 28, 25, 24, 11,
	0x8000u | 6, 14, 31, 12, 29, 1, 0,
	3, 14, 13, 12
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0015774C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 12, poly_0015769C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00157764[] = {
	{ -64.25f, -21, -14.16667f },
	{ -64.25f, 13, -14.16663f },
	{ -64.25f, -21, -38.5f },
	{ 6.25f, 11, -38.5f },
	{ 6.25f, -21, -38.5f },
	{ 5.416668f, -21, -14.16667f },
	{ 69.75f, 11, -14.25f },
	{ 69.75f, -21, -14.16667f },
	{ 69.75f, -21, -38.5f },
	{ 33.75f, 11, -38.5f },
	{ 33.75f, -21, -38.5f },
	{ 35.08334f, -21, -14.16667f },
	{ -64.25f, 13, 13.16663f },
	{ -64.25f, -21, 13.16667f },
	{ -64.25f, -21, 37.5f },
	{ 69.75f, -21, 37.5f },
	{ 69.75f, -21, 13.16667f },
	{ 69.75f, 11, 13.25f },
	{ 69.75f, -18, -14.16663f },
	{ 69.75f, -18, 13.16663f },
	{ -64.25f, -18, 13.16667f },
	{ -64.25f, -18, -14.16667f },
	{ 33.75f, -18, -38.5f },
	{ 6.25f, -18, -38.5f },
	{ 5.416687f, -18, -14.16663f },
	{ 35.08334f, -18, -14.16667f },
	{ 20.25f, -21, 37.5f },
	{ 20.25f, -21, 13.16664f },
	{ 20.25f, -18, 13.16664f },
	{ -64.25f, 30.66666f, -38.5f },
	{ 69.75f, 30.66666f, -38.5f },
	{ -64.25f, 30.66666f, 37.5f },
	{ 69.75f, 30.66666f, 37.5f },
	{ 20.25f, 30.66666f, 37.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_001578FC[] = {
	{ 0.577351f, 0.57735f, -0.57735f },
	{ 1, 0, 0 },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0, 0, 1 },
	{ -0.588048f, 0.575574f, 0.5682549f },
	{ -0.699034f, 0.714687f, -0.023945f },
	{ -1, 0, 0 },
	{ -0.576711f, 0.577669f, -0.577669f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0, 0, 1 },
	{ 0.5943789f, 0.574526f, 0.5627019f },
	{ 0.693855f, 0.719111f, -0.038019f },
	{ 1, 0, 0 },
	{ 0.577351f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.576709f, 0.577675f, 0.577667f },
	{ -1, 0, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.707112f, 0.7071019f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.693854f, 0.719111f, -0.038019f },
	{ -0.6990319f, 0.714689f, -0.023939f },
	{ -0.318118f, 0.947988f, -0.010892f },
	{ 0.319088f, 0.9475639f, -0.017484f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.707109f, 0.707104f },
	{ 0, 0.707109f, 0.707104f },
	{ 0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00157A94 = { vertex_00157764, normal_001578FC, LengthOfArray<Sint32>(vertex_00157764), meshlist_0015774C, matlist_00157688, LengthOfArray<Uint16>(meshlist_0015774C), LengthOfArray<Uint16>(matlist_00157688), { 2.75f, 4.833332f, -0.5f }, 77.02596f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00157ABC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00157A94, 737, 68, 1772, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00157AF0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00157B04[] = {
	4, 1, 0, 3, 2
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00157B10[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00157B04, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00157B28[] = {
	{ -72.24998f, -0.083336f, -39.49997f },
	{ -72.24998f, -0.083336f, 36.49994f },
	{ 61.75003f, -0.083336f, -39.49997f },
	{ 61.75003f, -0.083336f, 36.49994f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00157B58[] = {
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00157B88 = { vertex_00157B28, normal_00157B58, LengthOfArray<Sint32>(vertex_00157B28), meshlist_00157B10, matlist_00157AF0, LengthOfArray<Uint16>(meshlist_00157B10), LengthOfArray<Uint16>(matlist_00157AF0), { -5.249977f, -0.083336f, -1.500015f }, 77.02596f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00157BB0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00157B88, 745, 98.75f, 1773, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00157BE4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00157BF8[] = {
	3, 3, 1, 2,
	10, 6, 10, 7, 8, 2, 9, 3, 5, 1, 4,
	0x8000u | 5, 7, 6, 2, 0, 1,
	0x8000u | 6, 10, 8, 11, 9, 4, 5
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00157C30[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00157BF8, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00157C48[] = {
	{ 47.09851f, 0, -13.75f },
	{ 47.09851f, 0, 13.75f },
	{ -42.02649f, 0, -13.75f },
	{ -42.02649f, 0, 13.75f },
	{ 47.09851f, 25, 13.75f },
	{ -42.02649f, 25, 13.75f },
	{ 47.09851f, 25, -13.75f },
	{ -42.02649f, 25, -13.75f },
	{ -42.02649f, 31, -5 },
	{ -42.02636f, 31, 5 },
	{ 47.09851f, 31, -5 },
	{ 47.09851f, 31, 5 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00157CD8[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.577352f, 0.5773489f, 0.57735f },
	{ 0.577351f, 0.5773489f, -0.577351f },
	{ 0, -0.466086f, -0.88474f },
	{ 0.6157179f, -0.367262f, -0.697144f },
	{ 0, -0.466086f, 0.88474f },
	{ 0.6157129f, -0.367262f, 0.697149f },
	{ 0.64615f, -0.729002f, 0.225934f },
	{ 0.646146f, -0.729006f, -0.225935f },
	{ 0, -0.955178f, 0.296033f },
	{ 0, -0.955178f, -0.296033f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00157D68 = { vertex_00157C48, normal_00157CD8, LengthOfArray<Sint32>(vertex_00157C48), meshlist_00157C30, matlist_00157BE4, LengthOfArray<Uint16>(meshlist_00157C30), LengthOfArray<Uint16>(matlist_00157BE4), { 2.536011f, 15.5f, 0 }, 46.63559f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00157D90 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00157D68, 625.6514f, 50, 1771.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00157DC4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00157DD8[] = {
	0x8000u | 10, 7, 2, 3, 0, 1, 4, 5, 6, 7, 2,
	4, 0, 4, 2, 6
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00157DF8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00157DD8, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00157E10[] = {
	{ -13.74999f, 0, -116 },
	{ -13.75f, 0, 0 },
	{ -13.74999f, 29, -116 },
	{ -13.75f, 29, 0 },
	{ 13.75f, 0, -116 },
	{ 13.75f, 0, 0 },
	{ 13.75f, 29, -116 },
	{ 13.75f, 29, 0 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00157E70[] = {
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ -0.7071069f, -0.7071069f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00157ED0 = { vertex_00157E10, normal_00157E70, LengthOfArray<Sint32>(vertex_00157E10), meshlist_00157DF8, matlist_00157DC4, LengthOfArray<Uint16>(meshlist_00157DF8), LengthOfArray<Uint16>(matlist_00157DC4), { 0.000002f, 14.5f, -58 }, 59.60757f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00157EF8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00157ED0, 806.75f, 50, 1771.5f, 0, 0xFFFFC001, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00157F2C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00157F54[] = {
	4, 6, 3, 5, 0
};

extern "C" __declspec(dllexport) Sint16 poly_00157F5E[] = {
	4, 4, 6, 2, 5,
	4, 1, 0, 7, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_00157F74[] = {
	{ 5100, -226 },
	{ 5100, 226 },
	{ 0, -226 },
	{ 0, 226 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00157F84[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -255 },
	{ 255, -255 },
	{ 255, -255 },
	{ 0, -255 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00157FA4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00157F54, NULL, NULL, NULL, uv_00157F74, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00157F5E, NULL, NULL, NULL, uv_00157F84, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00157FD4[] = {
	{ 0.75f, 28.25f, -120 },
	{ 11.75f, 28.25f, -120 },
	{ -11.75f, 28.25f, -120 },
	{ 0.75f, 0, -120 },
	{ -11.75f, 0, -120 },
	{ -0.75f, 28.25f, -120 },
	{ -0.75f, 0, -120 },
	{ 11.75f, 0, -120 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00158034[] = {
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00158094 = { vertex_00157FD4, normal_00158034, LengthOfArray<Sint32>(vertex_00157FD4), meshlist_00157FA4, matlist_00157F2C, LengthOfArray<Uint16>(meshlist_00157FA4), LengthOfArray<Uint16>(matlist_00157F2C), { 0, 14.125f, -120 }, 14.125f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_001580BC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00158094, 757, 50, 1731.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_001580F0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00158104[] = {
	3, 12, 13, 15,
	9, 4, 0, 17, 11, 10, 8, 9, 6, 7,
	4, 17, 14, 4, 2,
	8, 3, 2, 13, 14, 15, 17, 16, 10,
	0x8000u | 6, 0, 11, 1, 8, 5, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_0015814C[] = {
	{ 4080, 255 },
	{ 4080, 84 },
	{ 2704, 255 },
	{ 2307, 0 },
	{ 1771, 0 },
	{ 2307, 61 },
	{ 1771, 61 },
	{ 1730, 255 },
	{ 1391, 55 },
	{ 1375, 255 },
	{ 0, 84 },
	{ 0, 255 },
	{ 2307, 61 },
	{ 2688, 55 },
	{ 2307, 0 },
	{ 2688, 0 },
	{ 4080, 0 },
	{ 2688, 0 },
	{ 4080, 84 },
	{ 2688, 55 },
	{ 2704, 255 },
	{ 2307, 61 },
	{ 2347, 255 },
	{ 1730, 255 },
	{ 1771, 0 },
	{ 1771, 61 },
	{ 1391, 0 },
	{ 1391, 55 },
	{ 0 },
	{ 0, 84 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_001581C4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_00158104, NULL, NULL, NULL, uv_0015814C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_001581DC[] = {
	{ 5, 28.25f, -120 },
	{ 11.75f, 26, -120 },
	{ -11.75f, 26, -120 },
	{ -11.75f, 0, -120 },
	{ -5, 28.25f, -120 },
	{ 11.75f, 0, -120 },
	{ 11.75f, 0, -119 },
	{ 13.75f, 0, -119 },
	{ 11.75f, 26, -119 },
	{ 13.75f, 29, -119 },
	{ 6.5f, 31, -119 },
	{ 5, 28.25f, -119 },
	{ -13.75f, 0, -119 },
	{ -11.75f, 0, -119 },
	{ -11.75f, 26, -119 },
	{ -13.75f, 29, -119 },
	{ -6.5f, 31, -119 },
	{ -5, 28.25f, -119 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_001582B4[] = {
	{ -0.160182f, -0.987087f, 0 },
	{ -0.811242f, -0.5847099f, 0 },
	{ 0.811242f, -0.5847099f, 0 },
	{ 1, 0, 0 },
	{ 0.160182f, -0.987087f, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ -0.407257f, -0.293534f, 0.864858f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.106852f, -0.6584499f, 0.745001f },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.407257f, -0.293534f, 0.864858f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.106852f, -0.6584499f, 0.745001f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0015838C = { vertex_001581DC, normal_001582B4, LengthOfArray<Sint32>(vertex_001581DC), meshlist_001581C4, matlist_001580F0, LengthOfArray<Uint16>(meshlist_001581C4), LengthOfArray<Uint16>(matlist_001580F0), { 0, 15.5f, -119.5f }, 15.50806f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_001583B4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0015838C, 757, 50, 1731.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_001583E8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00158474[] = {
	4, 1, 0, 2, 3,
	4, 50, 49, 63, 62,
	4, 55, 54, 58, 57,
	4, 12, 10, 13, 11,
	4, 23, 22, 26, 25,
	4, 21, 20, 31, 30,
	4, 39, 38, 42, 41,
	4, 34, 33, 47, 46
};

extern "C" __declspec(dllexport) Sint16 poly_001584C4[] = {
	4, 48, 53, 61, 59,
	4, 15, 8, 6, 5,
	4, 19, 18, 29, 27,
	4, 32, 37, 45, 43
};

extern "C" __declspec(dllexport) Sint16 poly_001584EC[] = {
	0x8000u | 15, 1, 0, 7, 22, 17, 25, 24, 38, 36, 41, 40, 54, 52, 57, 56,
	3, 1, 4, 7
};

extern "C" __declspec(dllexport) Sint16 poly_00158514[] = {
	4, 6, 5, 3, 2,
	4, 49, 48, 62, 61,
	4, 8, 15, 11, 13,
	4, 18, 23, 27, 26,
	4, 20, 19, 30, 29,
	4, 37, 39, 43, 42,
	4, 33, 32, 46, 45,
	4, 53, 55, 59, 58
};

extern "C" __declspec(dllexport) Sint16 poly_00158564[] = {
	0x8000u | 15, 4, 7, 14, 17, 16, 24, 28, 36, 35, 40, 44, 52, 51, 56, 60,
	3, 4, 9, 14
};

extern "C" __declspec(dllexport) Sint16 poly_0015858C[] = {
	3, 10, 12, 9,
	0x8000u | 15, 9, 14, 12, 16, 21, 28, 31, 35, 34, 44, 47, 51, 50, 60, 63
};

extern "C" __declspec(dllexport) Sint16 poly_001585B4[] = {
	0x8000u | 12, 12, 21, 13, 20, 15, 19, 6, 18, 3, 23, 0, 22,
	0x8000u | 12, 38, 25, 39, 26, 37, 27, 32, 29, 33, 30, 34, 31,
	0x8000u | 12, 54, 41, 55, 42, 53, 43, 48, 45, 49, 46, 50, 47
};

extern "C" __declspec(dllexport) NJS_TEX uv_00158604[] = {
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -508 },
	{ 0, -508 },
	{ 510, 255 },
	{ 510, -508 },
	{ 0, 255 },
	{ 0, -508 },
	{ 510, -508 },
	{ 510, 255 },
	{ 0, -508 },
	{ 0, 255 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -508 },
	{ 510, -508 },
	{ 508, -508 },
	{ 508, 255 },
	{ 0, -508 },
	{ 0, 255 },
	{ 508, 255 },
	{ 508, -508 },
	{ 0, 255 },
	{ 0, -508 },
	{ 510, -508 },
	{ 510, 255 },
	{ 0, -508 },
	{ 0, 255 },
	{ 510, 255 },
	{ 510, -508 },
	{ 0, 255 },
	{ 0, -508 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00158684[] = {
	{ 255, -255 },
	{ 0, -255 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 255, -254 },
	{ 0, -254 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 0, -255 },
	{ 255, 254 },
	{ 0, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001586C4[] = {
	{ 0, -6375 },
	{ 0, -4882 },
	{ 254, -4882 },
	{ 0, -4661 },
	{ 254, -4661 },
	{ 0, -3170 },
	{ 254, -3170 },
	{ 0, -2948 },
	{ 254, -2948 },
	{ 0, -1457 },
	{ 254, -1457 },
	{ 0, -1235 },
	{ 254, -1235 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -6375 },
	{ 254, -6375 },
	{ 254, -4882 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0015870C[] = {
	{ 508, 0 },
	{ 0 },
	{ 508, 255 },
	{ 0, 255 },
	{ 508, 255 },
	{ 508, 0 },
	{ 0, 255 },
	{ 0 },
	{ 508, 0 },
	{ 0 },
	{ 508, 255 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 508, 0 },
	{ 508, 255 },
	{ 508, 255 },
	{ 508, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 508, 0 },
	{ 508, 255 },
	{ 508, 255 },
	{ 508, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 508, 0 },
	{ 508, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0015878C[] = {
	{ 0, -255 },
	{ 573, -255 },
	{ 573, 254 },
	{ 657, -255 },
	{ 657, 254 },
	{ 1232, -255 },
	{ 1232, 254 },
	{ 1316, -255 },
	{ 1316, 254 },
	{ 1890, -255 },
	{ 1890, 254 },
	{ 1976, -255 },
	{ 1976, 254 },
	{ 2550, -255 },
	{ 2550, 254 },
	{ 0, -255 },
	{ 0, 254 },
	{ 573, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001587D4[] = {
	{ 0, -6375 },
	{ 0, -4882 },
	{ 255, -6375 },
	{ 255, -6375 },
	{ 255, -4882 },
	{ 0, -4882 },
	{ 255, -4661 },
	{ 0, -4661 },
	{ 255, -3170 },
	{ 0, -3170 },
	{ 255, -2948 },
	{ 0, -2948 },
	{ 255, -1457 },
	{ 0, -1457 },
	{ 255, -1235 },
	{ 0, -1235 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0015881C[] = {
	{ 0, 255 },
	{ 0 },
	{ 1662, 255 },
	{ 1662, 0 },
	{ 2177, 255 },
	{ 2177, 0 },
	{ 2921, 255 },
	{ 2921, 0 },
	{ 3437, 255 },
	{ 3437, 0 },
	{ 5100, 255 },
	{ 5100, 0 },
	{ 5100, 0 },
	{ 5100, 255 },
	{ 3437, 0 },
	{ 3437, 255 },
	{ 2921, 0 },
	{ 2921, 255 },
	{ 2177, 0 },
	{ 2177, 255 },
	{ 1662, 0 },
	{ 1662, 255 },
	{ 0 },
	{ 0, 255 },
	{ 5100, 0 },
	{ 5100, 255 },
	{ 3437, 0 },
	{ 3437, 255 },
	{ 2921, 0 },
	{ 2921, 255 },
	{ 2177, 0 },
	{ 2177, 255 },
	{ 1662, 0 },
	{ 1662, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_001588AC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, poly_00158474, NULL, NULL, NULL, uv_00158604, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_001584C4, NULL, NULL, NULL, uv_00158684, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_001584EC, NULL, NULL, NULL, uv_001586C4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 8, poly_00158514, NULL, NULL, NULL, uv_0015870C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_00158564, NULL, NULL, NULL, uv_0015878C, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, poly_0015858C, NULL, NULL, NULL, uv_001587D4, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 3, poly_001585B4, NULL, NULL, NULL, uv_0015881C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00158954[] = {
	{ -13.76f, 0, -19 },
	{ -13.76f, 0, 8 },
	{ -13.76f, 29, 8 },
	{ -13.76f, 29, -19 },
	{ -11.75f, 0, 8 },
	{ -6.5f, 31, 8 },
	{ -6.499999f, 31, -19 },
	{ -11.75f, 0, -19 },
	{ 6.5f, 31, 8 },
	{ 11.75f, 0, 8 },
	{ 13.75f, 0, 8 },
	{ 13.75f, 29, 8 },
	{ 13.75f, 0, -19 },
	{ 13.75f, 29, -19 },
	{ 11.75f, 0, -19 },
	{ 6.500001f, 31, -19 },
	{ 11.75f, 0, -23 },
	{ -11.75f, 0, -23 },
	{ -6.499999f, 31, -23 },
	{ 6.500001f, 31, -23 },
	{ 13.75f, 29, -23 },
	{ 13.75f, 0, -23 },
	{ -13.76f, 0, -23 },
	{ -13.76f, 29, -23 },
	{ -11.75f, 0, -50 },
	{ -13.76f, 0, -50 },
	{ -13.76f, 29, -50 },
	{ -6.499997f, 31, -50 },
	{ 11.75f, 0, -50 },
	{ 6.500003f, 31, -50 },
	{ 13.75f, 29, -50 },
	{ 13.75f, 0, -50 },
	{ 6.500003f, 31, -54 },
	{ 13.75f, 29, -54 },
	{ 13.75f, 0, -54 },
	{ 11.75f, 0, -54 },
	{ -11.75f, 0, -54 },
	{ -6.499997f, 31, -54 },
	{ -13.76f, 0, -54 },
	{ -13.76f, 29, -54 },
	{ -11.74999f, 0, -81 },
	{ -13.76f, 0, -81 },
	{ -13.76f, 29, -81 },
	{ -6.499996f, 31, -81 },
	{ 11.75001f, 0, -81 },
	{ 6.500004f, 31, -81 },
	{ 13.75f, 29, -81 },
	{ 13.75f, 0, -81 },
	{ 6.500004f, 31, -85 },
	{ 13.75f, 29, -85 },
	{ 13.75f, 0, -85 },
	{ 11.75001f, 0, -85 },
	{ -11.74999f, 0, -85 },
	{ -6.499996f, 31, -85 },
	{ -13.76f, 0, -85 },
	{ -13.76f, 29, -85 },
	{ -11.74999f, 0, -112 },
	{ -13.76f, 0, -112 },
	{ -13.76f, 29, -112 },
	{ -6.499994f, 31, -112 },
	{ 11.75001f, 0, -112 },
	{ 6.500006f, 31, -112 },
	{ 13.75f, 29, -112 },
	{ 13.75f, 0, -112 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00158C54[] = {
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7954839f, -0.605975f, 0 },
	{ 0.7954839f, -0.605975f, 0 },
	{ 0, 1, 0 },
	{ 0.134003f, -0.990981f, 0 },
	{ 0.134003f, -0.990981f, 0 },
	{ 0, 1, 0 },
	{ -0.134178f, -0.990957f, 0 },
	{ 0, 1, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.795591f, -0.605835f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.795591f, -0.605835f, 0 },
	{ 0, 1, 0 },
	{ -0.134178f, -0.990957f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.134003f, -0.990981f, 0 },
	{ -0.134178f, -0.990957f, 0 },
	{ -0.795591f, -0.6058339f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7954839f, -0.605975f, 0 },
	{ 0, 1, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7954839f, -0.605975f, 0 },
	{ 0.134003f, -0.990981f, 0 },
	{ 0, 1, 0 },
	{ -0.134178f, -0.990957f, 0 },
	{ -0.795591f, -0.6058339f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.134178f, -0.990957f, 0 },
	{ -0.795591f, -0.6058339f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.134003f, -0.990981f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7954839f, -0.605975f, 0 },
	{ 0, 1, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7954839f, -0.605975f, 0 },
	{ 0.134003f, -0.990981f, 0 },
	{ 0, 1, 0 },
	{ -0.134178f, -0.990957f, 0 },
	{ -0.795591f, -0.6058339f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.134178f, -0.990957f, 0 },
	{ -0.795591f, -0.6058339f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.134003f, -0.990981f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7954839f, -0.605975f, 0 },
	{ 0, 1, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7954839f, -0.605975f, 0 },
	{ 0.134003f, -0.990981f, 0 },
	{ 0, 1, 0 },
	{ -0.134178f, -0.990957f, 0 },
	{ -0.795591f, -0.6058339f, 0 },
	{ -0.7071069f, 0.7071069f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00158F54 = { vertex_00158954, normal_00158C54, LengthOfArray<Sint32>(vertex_00158954), meshlist_001588AC, matlist_001583E8, LengthOfArray<Uint16>(meshlist_001588AC), LengthOfArray<Uint16>(matlist_001583E8), { -0.005f, 15.5f, -52 }, 61.96975f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00158F7C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00158F54, 757, 50, 1723.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00158FB0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0015903C[] = {
	4, 34, 33, 47, 46,
	4, 3, 6, 2, 7,
	4, 12, 10, 13, 11,
	4, 39, 38, 42, 41,
	4, 23, 22, 26, 25,
	4, 21, 20, 31, 30
};

extern "C" __declspec(dllexport) Sint16 poly_00159078[] = {
	3, 5, 0, 14,
	0x8000u | 11, 14, 9, 0, 19, 18, 29, 27, 32, 37, 45, 43
};

extern "C" __declspec(dllexport) Sint16 poly_00159098[] = {
	3, 6, 3, 5,
	0x8000u | 11, 5, 0, 3, 18, 23, 27, 26, 37, 39, 43, 42,
	0x8000u | 11, 12, 10, 9, 20, 19, 30, 29, 33, 32, 46, 45,
	3, 12, 14, 9
};

extern "C" __declspec(dllexport) Sint16 poly_001590D8[] = {
	4, 4, 1, 7, 2,
	4, 22, 17, 25, 24,
	4, 38, 36, 41, 40
};

extern "C" __declspec(dllexport) Sint16 poly_001590F6[] = {
	4, 35, 34, 44, 47,
	4, 8, 15, 11, 13,
	4, 16, 21, 28, 31
};

extern "C" __declspec(dllexport) Sint16 poly_00159114[] = {
	4, 36, 35, 40, 44,
	4, 15, 8, 4, 1,
	4, 17, 16, 24, 28
};

extern "C" __declspec(dllexport) Sint16 poly_00159132[] = {
	0x8000u | 12, 20, 10, 21, 11, 16, 8, 17, 1, 22, 2, 23, 3,
	0x8000u | 12, 33, 30, 34, 31, 35, 28, 36, 24, 38, 25, 39, 26
};

extern "C" __declspec(dllexport) NJS_TEX uv_00159168[] = {
	{ 508, -508 },
	{ 508, 255 },
	{ 0, -508 },
	{ 0, 255 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -508 },
	{ 510, -508 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -508 },
	{ 0, -508 },
	{ 508, 255 },
	{ 508, -508 },
	{ 0, 255 },
	{ 0, -508 },
	{ 508, 255 },
	{ 508, -508 },
	{ 0, 255 },
	{ 0, -508 },
	{ 508, -508 },
	{ 508, 255 },
	{ 0, -508 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001591C8[] = {
	{ 3315, 255 },
	{ 2324, 255 },
	{ 3315, -508 },
	{ 3315, -508 },
	{ 2324, -508 },
	{ 2324, 255 },
	{ 2177, -508 },
	{ 2177, 255 },
	{ 1169, -508 },
	{ 1169, 255 },
	{ 1021, -508 },
	{ 1021, 255 },
	{ 0, -508 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00159200[] = {
	{ 0 },
	{ 1370, 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 1370, 255 },
	{ 1370, 0 },
	{ 1574, 255 },
	{ 1572, 0 },
	{ 2970, 255 },
	{ 2969, 0 },
	{ 3173, 255 },
	{ 3172, 0 },
	{ 4590, 255 },
	{ 4590, 0 },
	{ 0 },
	{ 1370, 0 },
	{ 1370, 255 },
	{ 1574, 0 },
	{ 1574, 255 },
	{ 2970, 0 },
	{ 2970, 255 },
	{ 3173, 0 },
	{ 3173, 255 },
	{ 4590, 0 },
	{ 4590, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1370, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00159270[] = {
	{ 765, 0 },
	{ 0 },
	{ 765, 255 },
	{ 0, 255 },
	{ 764, 255 },
	{ 764, 0 },
	{ 0, 255 },
	{ 0 },
	{ 765, 255 },
	{ 765, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001592A0[] = {
	{ 765, 254 },
	{ 765, 0 },
	{ 0, 254 },
	{ 0 },
	{ 0, 254 },
	{ 765, 254 },
	{ 0 },
	{ 765, 0 },
	{ 764, 254 },
	{ 764, 0 },
	{ 0, 254 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_001592D0[] = {
	{ 255, 255 },
	{ 0, 255 },
	{ 255, -510 },
	{ 0, -510 },
	{ 0, 255 },
	{ 0, -510 },
	{ 255, 255 },
	{ 255, -510 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, -508 },
	{ 0, -508 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00159300[] = {
	{ 3570, 0 },
	{ 3570, 255 },
	{ 2364, 0 },
	{ 2364, 255 },
	{ 1992, 0 },
	{ 1992, 255 },
	{ 1577, 0 },
	{ 1577, 255 },
	{ 1203, 0 },
	{ 1203, 255 },
	{ 0 },
	{ 0, 255 },
	{ 3570, 0 },
	{ 3570, 255 },
	{ 2364, 0 },
	{ 2364, 255 },
	{ 1992, 0 },
	{ 1992, 255 },
	{ 1577, 0 },
	{ 1577, 255 },
	{ 1203, 0 },
	{ 1203, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00159360[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_0015903C, NULL, NULL, NULL, uv_00159168, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00159078, NULL, NULL, NULL, uv_001591C8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_00159098, NULL, NULL, NULL, uv_00159200, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_001590D8, NULL, NULL, NULL, uv_00159270, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 3, poly_001590F6, NULL, NULL, NULL, uv_001592A0, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 3, poly_00159114, NULL, NULL, NULL, uv_001592D0, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, poly_00159132, NULL, NULL, NULL, uv_00159300, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00159408[] = {
	{ 9.5f, 0, -11.75f },
	{ 9.5f, 31, -5 },
	{ 9.5f, 25, -13.75f },
	{ 9.525023f, 0, -13.75f },
	{ 36.5f, 31, -5 },
	{ 36.5f, 0, -11.75f },
	{ 36.5f, 0, -13.75f },
	{ 36.5f, 25, -13.75f },
	{ 9.5f, 31, 5 },
	{ 9.5f, 0, 11.75f },
	{ 9.5f, 0, 13.75f },
	{ 9.5f, 25, 13.75f },
	{ 36.5f, 0, 13.75f },
	{ 36.5f, 25, 13.75f },
	{ 36.5f, 0, 11.75f },
	{ 36.5f, 31, 5 },
	{ 5.5f, 31, 5 },
	{ 5.5f, 31, -5 },
	{ 5.5f, 0, -11.75f },
	{ 5.5f, 0, 11.75f },
	{ 5.5f, 0, 13.75f },
	{ 5.5f, 25, 13.75f },
	{ 5.5f, 25, -13.75f },
	{ 5.525024f, 0, -13.75f },
	{ -22, 31, -5 },
	{ -22, 25, -13.75f },
	{ -21.97498f, 0, -13.75f },
	{ -22, 0, -11.75f },
	{ -22, 31, 5 },
	{ -22, 0, 11.75f },
	{ -22, 0, 13.75f },
	{ -22, 25, 13.75f },
	{ -26, 0, 11.75f },
	{ -26, 0, 13.75f },
	{ -26, 25, 13.75f },
	{ -26, 31, 5 },
	{ -26, 31, -5 },
	{ -26, 0, -11.75f },
	{ -26, 25, -13.75f },
	{ -25.97498f, 0, -13.75f },
	{ -53.875f, 31, -5 },
	{ -53.875f, 25, -13.75f },
	{ -53.84998f, 0, -13.75f },
	{ -53.875f, 0, -11.75f },
	{ -53.875f, 31, 5 },
	{ -53.875f, 0, 11.75f },
	{ -53.875f, 0, 13.75f },
	{ -53.875f, 25, 13.75f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00159648[] = {
	{ 0, 1, 0 },
	{ 0, -0.955178f, 0.296033f },
	{ 0, -0.466086f, 0.88474f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, -0.955178f, 0.296033f },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, -0.466086f, 0.88474f },
	{ 0, -0.955178f, -0.296033f },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, -0.466086f, -0.88474f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, -0.466086f, -0.88474f },
	{ 0, 1, 0 },
	{ 0, -0.955178f, -0.296033f },
	{ 0, -0.955178f, -0.296033f },
	{ 0, -0.955178f, 0.296033f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, -0.466086f, -0.88474f },
	{ 0, -0.466086f, 0.88474f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, -0.955178f, 0.296033f },
	{ 0, -0.466086f, 0.88474f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, -0.955178f, -0.296033f },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, -0.466086f, -0.88474f },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, -0.466086f, -0.88474f },
	{ 0, -0.955178f, -0.296033f },
	{ 0, -0.955178f, 0.296033f },
	{ 0, 1, 0 },
	{ 0, -0.466086f, 0.88474f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, -0.955178f, 0.296033f },
	{ 0, -0.466234f, 0.884661f },
	{ 0, 0.709682f, 0.704522f },
	{ 0, 1, 0 },
	{ 0, -0.955178f, -0.296033f },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, -0.466086f, -0.88474f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00159888 = { vertex_00159408, normal_00159648, LengthOfArray<Sint32>(vertex_00159408), meshlist_00159360, matlist_00158FB0, LengthOfArray<Uint16>(meshlist_00159360), LengthOfArray<Uint16>(matlist_00158FB0), { -8.6875f, 15.5f, 0 }, 47.23317f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_001598B0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00159888, 636, 50, 1771.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_001598E4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0015990C[] = {
	4, 8, 9, 1, 0,
	4, 9, 8, 5, 4
};

extern "C" __declspec(dllexport) Sint16 poly_00159920[] = {
	4, 2, 3, 0, 1,
	4, 6, 7, 4, 5
};

extern "C" __declspec(dllexport) NJS_TEX uv_00159934[] = {
	{ 1, 255 },
	{ 0, -2283 },
	{ 255, 255 },
	{ 255, -2295 },
	{ 1, 255 },
	{ 0, -2283 },
	{ 255, 255 },
	{ 255, -2295 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00159954[] = {
	{ 0, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 255, 255 },
	{ 255, -255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00159974[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0015990C, NULL, NULL, NULL, uv_00159934, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00159920, NULL, NULL, NULL, uv_00159954, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_001599A4[] = {
	{ 0, 28, 1 },
	{ 0, 0, 1 },
	{ 0, 28, 11.75f },
	{ 0, 0, 11.75f },
	{ 0, 0, -1 },
	{ 0, 28, -1 },
	{ 0, 0, -11.75f },
	{ 0, 28, -11.75f },
	{ 0 },
	{ 0, 28, 0 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00159A1C[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00159A94 = { vertex_001599A4, normal_00159A1C, LengthOfArray<Sint32>(vertex_001599A4), meshlist_00159974, matlist_001598E4, LengthOfArray<Uint16>(meshlist_00159974), LengthOfArray<Uint16>(matlist_001598E4), { 0, 14, 0 }, 18.27737f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00159ABC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00159A94, 582.125f, 50, 1771.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00159AF0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00159B68[] = {
	4, 73, 75, 3, 0,
	4, 2, 1, 74, 76,
	4, 35, 33, 12, 13,
	4, 16, 17, 31, 30
};

extern "C" __declspec(dllexport) Sint16 poly_00159B90[] = {
	4, 74, 78, 2, 6,
	4, 6, 7, 2, 3,
	4, 11, 13, 29, 33,
	4, 33, 70, 29, 71,
	4, 19, 78, 39, 74,
	4, 62, 63, 58, 61,
	4, 9, 23, 37, 43,
	0x8000u | 5, 51, 79, 73, 7, 3,
	3, 51, 50, 73,
	4, 66, 54, 67, 55,
	4, 47, 30, 27, 34,
	4, 17, 15, 30, 34,
	4, 11, 15, 13, 17,
	4, 41, 45, 21, 25
};

extern "C" __declspec(dllexport) Sint16 poly_00159C1C[] = {
	4, 75, 77, 0, 5,
	4, 72, 76, 4, 1,
	4, 1, 0, 4, 5,
	4, 14, 16, 32, 31,
	4, 12, 10, 35, 28,
	4, 12, 16, 10, 14
};

extern "C" __declspec(dllexport) Sint16 poly_00159C58[] = {
	4, 35, 69, 33, 70,
	4, 39, 74, 38, 76,
	4, 37, 43, 36, 42,
	4, 46, 31, 47, 30,
	4, 49, 75, 50, 73,
	4, 65, 53, 66, 54,
	4, 40, 44, 41, 45
};

extern "C" __declspec(dllexport) Sint16 poly_00159C9E[] = {
	8, 67, 62, 66, 58, 65, 57, 64, 56,
	8, 63, 71, 61, 70, 60, 69, 59, 68
};

extern "C" __declspec(dllexport) Sint16 poly_00159CC2[] = {
	4, 38, 76, 18, 72,
	4, 57, 60, 56, 59,
	4, 28, 68, 35, 69,
	4, 20, 24, 40, 44,
	4, 64, 52, 65, 53,
	4, 26, 32, 46, 31,
	4, 48, 77, 49, 75,
	4, 36, 42, 8, 22
};

extern "C" __declspec(dllexport) NJS_TEX uv_00159D14[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00159D54[] = {
	{ 1275, 0 },
	{ 1267, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1530, 255 },
	{ 0, 255 },
	{ 1530, 0 },
	{ 0 },
	{ 1275, 255 },
	{ 1275, 0 },
	{ 3, 255 },
	{ 0 },
	{ 1530, 0 },
	{ 0 },
	{ 1530, 255 },
	{ 0, 255 },
	{ 1529, 255 },
	{ 0, 255 },
	{ 1529, 0 },
	{ 0 },
	{ 0, 255 },
	{ 1529, 255 },
	{ 0 },
	{ 1529, 0 },
	{ 1529, 255 },
	{ 0, 255 },
	{ 1529, 0 },
	{ 0 },
	{ 1529, 255 },
	{ 0, 255 },
	{ 0 },
	{ 1275, 255 },
	{ 1275, 0 },
	{ 1529, 255 },
	{ 1529, 0 },
	{ 0 },
	{ 1530, 0 },
	{ 0 },
	{ 1530, 255 },
	{ 0, 255 },
	{ 0 },
	{ 1530, 0 },
	{ 0, 255 },
	{ 1530, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1275, 0 },
	{ 1267, 255 },
	{ 0, 255 },
	{ 1530, 255 },
	{ 0 },
	{ 1530, 0 },
	{ 0 },
	{ 1530, 0 },
	{ 0, 255 },
	{ 1530, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00159E34[] = {
	{ 0, 255 },
	{ 82, 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 936, 0 },
	{ 1020, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1275, 255 },
	{ 0, 255 },
	{ 1275, 0 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 936, 0 },
	{ 1020, 255 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 0, 255 },
	{ 82, 0 },
	{ 0, 255 },
	{ 1275, 255 },
	{ 0 },
	{ 1275, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00159E94[] = {
	{ 253, 0 },
	{ 0 },
	{ 254, 256 },
	{ 0, 255 },
	{ -1, 254 },
	{ 253, 254 },
	{ 0, 1 },
	{ 253, 1 },
	{ -1, 254 },
	{ 253, 254 },
	{ 0, 1 },
	{ 253, 1 },
	{ 254, 0 },
	{ 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 253, 1 },
	{ 0, 1 },
	{ 253, 254 },
	{ 0, 254 },
	{ 253, 0 },
	{ 0 },
	{ 254, 256 },
	{ 0, 255 },
	{ 253, 0 },
	{ 0 },
	{ 254, 256 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00159F04[] = {
	{ 0, -2295 },
	{ 255, -2295 },
	{ 0, -2083 },
	{ 255, -2083 },
	{ 0, -128 },
	{ 255, -128 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 59 },
	{ 255, 59 },
	{ 0, -1858 },
	{ 255, -1858 },
	{ 0, -2295 },
	{ 255, -2295 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00159F44[] = {
	{ 1333, 255 },
	{ 0, 255 },
	{ 1333, 0 },
	{ 0 },
	{ 3019, 255 },
	{ 4354, 255 },
	{ 3019, 0 },
	{ 4354, 0 },
	{ 5865, 0 },
	{ 4529, 0 },
	{ 5865, 255 },
	{ 4529, 255 },
	{ 1509, 0 },
	{ 2843, 0 },
	{ 1509, 255 },
	{ 2843, 255 },
	{ 2843, 0 },
	{ 1509, 0 },
	{ 2843, 255 },
	{ 1509, 255 },
	{ 4529, 0 },
	{ 5865, 0 },
	{ 4529, 255 },
	{ 5865, 255 },
	{ 1333, 0 },
	{ 0 },
	{ 1333, 255 },
	{ 0, 255 },
	{ 4354, 255 },
	{ 3019, 255 },
	{ 4354, 0 },
	{ 3019, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00159FC4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00159B68, NULL, NULL, NULL, uv_00159D14, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 14, poly_00159B90, NULL, NULL, NULL, uv_00159D54, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 6, poly_00159C1C, NULL, NULL, NULL, uv_00159E34, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 7, poly_00159C58, NULL, NULL, NULL, uv_00159E94, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_00159C9E, NULL, NULL, NULL, uv_00159F04, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 8, poly_00159CC2, NULL, NULL, NULL, uv_00159F44, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0015A054[] = {
	{ -84.57568f, 34, -14.49805f },
	{ -84.57593f, 34, 16.00195f },
	{ -84.57568f, 3, 16.00195f },
	{ -84.57562f, 3, -14.49805f },
	{ -84.57568f, 39.75f, 16.00195f },
	{ -84.57568f, 39.75f, -14.49805f },
	{ -84.57568f, 0, 16.00195f },
	{ -84.57568f, 0, -14.49805f },
	{ 14.92419f, 39.75f, 38.75195f },
	{ 14.92419f, 0, 39.25195f },
	{ 49.42419f, 39.75f, -14.49805f },
	{ 49.42419f, 0, -14.49805f },
	{ 49.42419f, 34, -14.49805f },
	{ 49.42419f, 3, -14.49805f },
	{ 49.42419f, 39.75f, 16.00195f },
	{ 49.42419f, 0, 16.00195f },
	{ 49.42419f, 34, 16.00195f },
	{ 49.42419f, 3, 16.00195f },
	{ -54.07581f, 39.75f, 38.75195f },
	{ -54.07581f, 0, 39.25195f },
	{ -50.07581f, 39.75f, 38.75195f },
	{ -50.07581f, 0, 39.25195f },
	{ -15.57581f, 39.75f, 38.75195f },
	{ -15.57581f, 0, 39.25195f },
	{ -19.57581f, 39.75f, 38.75195f },
	{ -19.57581f, 0, 39.25195f },
	{ 18.92419f, 39.75f, 38.75195f },
	{ 18.92419f, 0, 39.25195f },
	{ 49.42419f, 39.75f, -37.24805f },
	{ 49.42419f, 0, -37.74805f },
	{ 49.42419f, 3, 40.75195f },
	{ 49.42419f, 34, 40.75195f },
	{ 49.42419f, 39.75f, 38.75195f },
	{ 49.42419f, 3, -39.24805f },
	{ 49.42419f, 0, 39.25195f },
	{ 49.42419f, 34, -39.24805f },
	{ 14.92419f, 34, 40.75195f },
	{ 14.92419f, 3, 40.75195f },
	{ -54.07581f, 34, 40.75195f },
	{ -54.07581f, 3, 40.75195f },
	{ -50.07581f, 34, 40.75195f },
	{ -50.07581f, 3, 40.75195f },
	{ -15.57581f, 34, 40.75195f },
	{ -15.57581f, 3, 40.75195f },
	{ -19.57581f, 34, 40.75195f },
	{ -19.57581f, 3, 40.75195f },
	{ 18.92419f, 34, 40.75195f },
	{ 18.92419f, 3, 40.75195f },
	{ -54.07581f, 39.75f, -37.24805f },
	{ -54.07581f, 34, -39.24805f },
	{ -54.07581f, 3, -39.24805f },
	{ -54.07581f, 0, -37.74805f },
	{ -50.07581f, 39.75f, -37.24805f },
	{ -50.07581f, 34, -39.24805f },
	{ -50.07581f, 3, -39.24792f },
	{ -50.07581f, 0, -37.74805f },
	{ -15.57581f, 39.75f, -37.24805f },
	{ -15.57581f, 34, -39.24805f },
	{ -15.57581f, 3, -39.24792f },
	{ 14.92419f, 39.75f, -37.24805f },
	{ 14.92419f, 34, -39.24805f },
	{ 14.92419f, 3, -39.24805f },
	{ -15.57581f, 0, -37.74805f },
	{ 14.92419f, 0, -37.74805f },
	{ -19.57581f, 39.75f, -37.24805f },
	{ -19.57581f, 34, -39.24805f },
	{ -19.57581f, 3, -39.24792f },
	{ -19.57581f, 0, -37.74805f },
	{ 18.92419f, 39.75f, -37.24805f },
	{ 18.92419f, 34, -39.24805f },
	{ 18.92419f, 3, -39.24805f },
	{ 18.92419f, 0, -37.74805f },
	{ -84.57581f, 39.75f, 38.75195f },
	{ -84.57581f, 3, -39.24805f },
	{ -84.57581f, 3, 40.75195f },
	{ -84.57581f, 34, -39.24805f },
	{ -84.57581f, 34, 40.75195f },
	{ -84.57581f, 39.75f, -37.24805f },
	{ -84.57581f, 0, 39.25195f },
	{ -84.57581f, 0, -37.74805f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0015A414[] = {
	{ 1, -0.00014f, -0.00003f },
	{ 1, -0.0002f, 0.000005f },
	{ 1, 0.000001f, 0.000004f },
	{ 1, -0.00004f, -0.00004f },
	{ 1, -0.00031f, 0.000005f },
	{ 1, -0.00021f, 0 },
	{ 1, -0.00001f, 0.000003f },
	{ 1, -0.00006f, -0.00002f },
	{ 0, -0.328521f, -0.944497f },
	{ 0, 0.447214f, -0.8944269f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, -0.328521f, -0.944497f },
	{ 0, 0.447214f, -0.8944269f },
	{ 0, -0.328521f, -0.944497f },
	{ 0, 0.447214f, -0.8944269f },
	{ 0, -0.328521f, -0.944497f },
	{ 0, 0.447214f, -0.8944269f },
	{ 0, -0.328521f, -0.944497f },
	{ 0, 0.447214f, -0.8944269f },
	{ 0, -0.328521f, -0.944497f },
	{ 0, 0.447214f, -0.8944269f },
	{ -0.771625f, -0.208964f, 0.600773f },
	{ -0.7915249f, 0.273309f, 0.546618f },
	{ -0.658865f, 0.172834f, -0.732137f },
	{ -0.671463f, -0.123448f, -0.730683f },
	{ -0.771625f, -0.208964f, -0.600773f },
	{ -0.658865f, 0.172834f, 0.732137f },
	{ -0.7915249f, 0.273309f, -0.546618f },
	{ -0.671463f, -0.123448f, 0.730683f },
	{ 0, -0.166588f, -0.9860269f },
	{ 0, 0.229753f, -0.973249f },
	{ 0, -0.166588f, -0.9860269f },
	{ 0, 0.229753f, -0.973249f },
	{ 0, -0.166588f, -0.9860269f },
	{ 0, 0.229753f, -0.973249f },
	{ 0, -0.166588f, -0.9860269f },
	{ 0, 0.229753f, -0.973249f },
	{ 0, -0.166588f, -0.9860269f },
	{ 0, 0.229753f, -0.973249f },
	{ 0, -0.166588f, -0.9860269f },
	{ 0, 0.229753f, -0.973249f },
	{ 0, -0.328521f, 0.944497f },
	{ 0, -0.166588f, 0.9860269f },
	{ 0, 0.229753f, 0.973249f },
	{ 0, 0.447214f, 0.8944269f },
	{ 0, -0.328521f, 0.944497f },
	{ 0, -0.166586f, 0.9860269f },
	{ 0, 0.229739f, 0.973252f },
	{ 0, 0.447184f, 0.894442f },
	{ 0, -0.328521f, 0.944497f },
	{ 0, -0.221765f, 0.9751f },
	{ 0.000001f, 0.305374f, 0.952233f },
	{ 0, -0.328521f, 0.944497f },
	{ 0, -0.221766f, 0.9751f },
	{ 0.000001f, 0.305383f, 0.95223f },
	{ 0.000001f, 0.447185f, 0.894442f },
	{ 0.000001f, 0.447199f, 0.894435f },
	{ 0, -0.328521f, 0.944497f },
	{ 0, -0.166586f, 0.9860269f },
	{ 0, 0.229739f, 0.973252f },
	{ 0, 0.447185f, 0.894442f },
	{ 0, -0.328521f, 0.944497f },
	{ 0, -0.166588f, 0.9860269f },
	{ 0, 0.229753f, 0.973249f },
	{ 0, 0.447214f, 0.8944269f },
	{ 0.771625f, -0.20898f, -0.600768f },
	{ 0.6588669f, 0.172832f, 0.732136f },
	{ 0.658866f, 0.172836f, -0.732136f },
	{ 0.671465f, -0.123448f, 0.7306809f },
	{ 0.671464f, -0.123453f, -0.7306809f },
	{ 0.7716269f, -0.208964f, 0.600771f },
	{ 0.791527f, 0.273308f, -0.5466149f },
	{ 0.791528f, 0.273301f, 0.546616f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0015A7D4 = { vertex_0015A054, normal_0015A414, LengthOfArray<Sint32>(vertex_0015A054), meshlist_00159FC4, matlist_00159AF0, LengthOfArray<Uint16>(meshlist_00159FC4), LengthOfArray<Uint16>(matlist_00159AF0), { -17.57587f, 19.875f, 0.7519529f }, 78.0321f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0015A7FC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0015A7D4, 757.3258f, 47, 1770.748f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0015A830[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0015A86C[] = {
	4, 2, 3, 1, 0,
	4, 6, 2, 5, 4,
	4, 11, 8, 10, 7,
	4, 8, 13, 9, 12,
	4, 16, 17, 15, 14,
	4, 21, 23, 19, 22
};

extern "C" __declspec(dllexport) Sint16 poly_0015A8A8[] = {
	3, 7, 8, 9,
	3, 14, 17, 18,
	3, 4, 2, 1,
	3, 20, 21, 19,
	0x8000u | 8, 20, 18, 19, 14, 7, 1, 9, 4
};

extern "C" __declspec(dllexport) Sint16 poly_0015A8DA[] = {
	4, 5, 4, 12, 9,
	4, 1, 0, 14, 15,
	4, 10, 7, 22, 19
};

extern "C" __declspec(dllexport) NJS_TEX uv_0015A8F8[] = {
	{ 0, 1 },
	{ 0, 255 },
	{ 126, 1 },
	{ 91, 255 },
	{ 0, 1 },
	{ 0, 255 },
	{ 106, 1 },
	{ 107, 255 },
	{ 0, 1 },
	{ 0, 255 },
	{ 93, 1 },
	{ 157, 255 },
	{ 0, 255 },
	{ 0, 1 },
	{ 107, 255 },
	{ 106, 1 },
	{ 0, 255 },
	{ 0, 1 },
	{ 107, 255 },
	{ 106, 1 },
	{ 0, 255 },
	{ 0, 1 },
	{ 107, 255 },
	{ 106, 1 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0015A958[] = {
	{ 255, 212 },
	{ 255, 254 },
	{ 233, 254 },
	{ 0, 14 },
	{ 0 },
	{ 26, 0 },
	{ 21, 254 },
	{ 0, 254 },
	{ 0, 212 },
	{ 228, 0 },
	{ 255, 0 },
	{ 255, 14 },
	{ 228, 0 },
	{ 26, 0 },
	{ 255, 14 },
	{ 0, 14 },
	{ 255, 212 },
	{ 0, 212 },
	{ 233, 254 },
	{ 21, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0015A9A8[] = {
	{ 255, -1020 },
	{ 0, -1020 },
	{ 255, 255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, 196 },
	{ 254, -1019 },
	{ 0, -1019 },
	{ 255, 196 },
	{ 0, 255 },
	{ 255, -1019 },
	{ 0, -1019 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0015A9D8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_0015A86C, NULL, NULL, NULL, uv_0015A8F8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 5, poly_0015A8A8, NULL, NULL, NULL, uv_0015A958, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_0015A8DA, NULL, NULL, NULL, uv_0015A9A8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0015AA20[] = {
	{ -18.57581f, 5, -9.248047f },
	{ -13.07581f, 5, -10.24805f },
	{ -13.07581f, 5, -13.74805f },
	{ -18.57581f, 5, -10.49805f },
	{ -10.90914f, 5, -13.74805f },
	{ -10.90914f, 5, -18.74805f },
	{ -12.07581f, 5, -18.74805f },
	{ 12.42419f, 5, -10.24805f },
	{ 12.42419f, 5, -13.74805f },
	{ 10.25753f, 5, -13.74805f },
	{ 17.92419f, 5, -9.248047f },
	{ 17.92419f, 5, -10.49805f },
	{ 10.25753f, 5, -18.74805f },
	{ 11.42419f, 5, -18.74805f },
	{ -13.07581f, 5, 11.50195f },
	{ -18.57581f, 5, 11.50195f },
	{ -18.57581f, 5, 13.00195f },
	{ -13.07581f, 5, 13.00195f },
	{ -10.40914f, 5, 13.00195f },
	{ 12.42419f, 5, 11.50195f },
	{ 9.757527f, 5, 13.00195f },
	{ 12.42419f, 5, 13.00195f },
	{ 17.92419f, 5, 11.50195f },
	{ 17.92419f, 5, 13.00195f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0015AB40[] = {
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
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0015AC60 = { vertex_0015AA20, normal_0015AB40, LengthOfArray<Sint32>(vertex_0015AA20), meshlist_0015A9D8, matlist_0015A830, LengthOfArray<Uint16>(meshlist_0015A9D8), LengthOfArray<Uint16>(matlist_0015A830), { -0.325806f, 5, -2.873047f }, 24.18839f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0015AC88 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0015AC60, 757.3258f, 45, 1770.248f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0015ACBC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0015ACD0[] = {
	4, 6, 7, 10, 11,
	4, 9, 8, 3, 2,
	4, 4, 5, 0, 1
};

extern "C" __declspec(dllexport) NJS_TEX uv_0015ACF0[] = {
	{ 0, 254 },
	{ 0, -255 },
	{ 765, 254 },
	{ 765, -255 },
	{ 0, 254 },
	{ 0, -255 },
	{ 1530, 254 },
	{ 1530, -255 },
	{ 0, -254 },
	{ 0, 255 },
	{ 510, -254 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0015AD20[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0015ACD0, NULL, NULL, NULL, uv_0015ACF0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0015AD38[] = {
	{ -12.07581f, 5, -38.74805f },
	{ 11.42419f, 5, -38.74805f },
	{ -18.57581f, 5, 13.00195f },
	{ -18.57581f, 5, -10.49805f },
	{ -12.07581f, 5, -18.74805f },
	{ 11.42419f, 5, -18.74805f },
	{ 17.92419f, 5, -10.49805f },
	{ 17.92419f, 5, 13.00195f },
	{ -84.82581f, 5, 13.00195f },
	{ -84.82581f, 5, -10.49805f },
	{ 49.42419f, 5, -10.49805f },
	{ 49.42419f, 5, 13.00195f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0015ADC8[] = {
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
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0015AE58 = { vertex_0015AD38, normal_0015ADC8, LengthOfArray<Sint32>(vertex_0015AD38), meshlist_0015AD20, matlist_0015ACBC, LengthOfArray<Uint16>(meshlist_0015AD20), LengthOfArray<Uint16>(matlist_0015ACBC), { -17.70081f, 5, -12.87305f }, 71.93942f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0015AE80 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0015AE58, 757.3258f, 45, 1770.248f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0015AEB4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 24, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0015AEDC[] = {
	3, 31, 10, 32,
	10, 29, 28, 9, 20, 8, 14, 13, 21, 15, 17,
	4, 35, 33, 25, 26,
	9, 16, 18, 12, 22, 11, 19, 10, 23, 32
};

extern "C" __declspec(dllexport) Sint16 poly_0015AF18[] = {
	4, 34, 35, 24, 25,
	0x8000u | 10, 16, 1, 12, 2, 11, 7, 10, 6, 31, 30,
	0x8000u | 9, 0, 15, 5, 13, 4, 8, 3, 9, 29,
	3, 27, 29, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_0015AF54[] = {
	{ 0, 255 },
	{ 0, -1219 },
	{ 255, 255 },
	{ 0, -6885 },
	{ 255, -6885 },
	{ 0, -1896 },
	{ 255, -2010 },
	{ 0, -1576 },
	{ 255, -1591 },
	{ 0, -1251 },
	{ 255, -1216 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -7395 },
	{ 255, -7395 },
	{ 0, -2550 },
	{ 255, -2550 },
	{ 0, -1614 },
	{ 255, -1649 },
	{ 0, -1423 },
	{ 255, -1419 },
	{ 0, -1219 },
	{ 255, -1163 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0015AFBC[] = {
	{ 7650, 255 },
	{ 7650, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 849, 0 },
	{ 872, 255 },
	{ 1022, 0 },
	{ 1029, 255 },
	{ 1209, 0 },
	{ 1172, 255 },
	{ 2550, 0 },
	{ 2550, 255 },
	{ 0, 255 },
	{ 0 },
	{ 1424, 255 },
	{ 1397, 0 },
	{ 1679, 255 },
	{ 1699, 0 },
	{ 1911, 255 },
	{ 1997, 0 },
	{ 6630, 0 },
	{ 6630, 255 },
	{ 6630, 0 },
	{ 1911, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0015B024[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0015AEDC, NULL, NULL, NULL, uv_0015AF54, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_0015AF18, NULL, NULL, NULL, uv_0015AFBC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0015B054[] = {
	{ -15.07581f, 2, -38.74805f },
	{ 14.42419f, 2, -38.74805f },
	{ 14.42419f, 2, -18.74805f },
	{ -18.57581f, 2, -13.49805f },
	{ -15.83618f, 2, -15.24805f },
	{ -15.07581f, 2, -18.74805f },
	{ 17.92419f, 2, -13.49805f },
	{ 15.15192f, 2, -15.24805f },
	{ -14.82581f, 5, -14.49805f },
	{ -18.57581f, 5, -12.49805f },
	{ 17.92419f, 5, -12.49805f },
	{ 14.17419f, 5, -14.74805f },
	{ 13.42419f, 5, -18.74805f },
	{ -14.07581f, 5, -18.74805f },
	{ -13.07581f, 5, -13.74805f },
	{ -14.07581f, 5, -38.74805f },
	{ 13.42419f, 5, -38.74805f },
	{ -12.07581f, 5, -38.74805f },
	{ 11.42419f, 5, -38.74805f },
	{ 12.42419f, 5, -13.74805f },
	{ -18.57581f, 5, -10.49805f },
	{ -12.07581f, 5, -18.74805f },
	{ 11.42419f, 5, -18.74805f },
	{ 17.92419f, 5, -10.49805f },
	{ -84.82581f, 2, 16.00195f },
	{ -84.82581f, 5, 15.00195f },
	{ -84.82581f, 5, 13.00195f },
	{ -84.82581f, 2, -13.49805f },
	{ -84.82581f, 5, -10.49805f },
	{ -84.82581f, 5, -12.49805f },
	{ 49.42419f, 2, -13.49805f },
	{ 49.42419f, 5, -12.49805f },
	{ 49.42419f, 5, -10.49805f },
	{ 49.42419f, 5, 13.00195f },
	{ 49.42419f, 2, 16.00195f },
	{ 49.42419f, 5, 15.00195f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0015B204[] = {
	{ -0.948683f, 0.316228f, 0 },
	{ 0.948683f, 0.316228f, 0 },
	{ 0.944472f, 0.314824f, -0.094115f },
	{ -0.260898f, 0.305276f, -0.915827f },
	{ -0.7627079f, 0.34377f, -0.547812f },
	{ -0.937058f, 0.336911f, -0.091722f },
	{ 0.271496f, 0.317548f, -0.9085439f },
	{ 0.7687449f, 0.329404f, -0.5482f },
	{ -0.356413f, 0.8979329f, -0.258238f },
	{ -0.128985f, 0.85371f, -0.504523f },
	{ 0.131357f, 0.860106f, -0.492913f },
	{ 0.378311f, 0.889489f, -0.256301f },
	{ 0.558975f, 0.827453f, -0.053553f },
	{ -0.551576f, 0.832508f, -0.051908f },
	{ 0, 1, 0 },
	{ -0.5847099f, 0.811242f, 0 },
	{ 0.5847099f, 0.811242f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.811242f, 0.5847099f },
	{ 0, 1, 0 },
	{ 0, 0.316228f, -0.948683f },
	{ 0, 1, 0 },
	{ 0, 0.811242f, -0.5847099f },
	{ 0, 0.316228f, -0.948683f },
	{ 0, 0.811242f, -0.5847099f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.811242f, 0.5847099f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0015B3B4 = { vertex_0015B054, normal_0015B204, LengthOfArray<Sint32>(vertex_0015B054), meshlist_0015B024, matlist_0015AEB4, LengthOfArray<Uint16>(meshlist_0015B024), LengthOfArray<Uint16>(matlist_0015AEB4), { -17.70081f, 3.5f, -11.37305f }, 72.49245f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0015B3DC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0015B3B4, 757.3258f, 45, 1770.248f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0015B410[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0015B49C[] = {
	20, 9, 15, 7, 14, 21, 23, 29, 36, 43, 44, 86, 87, 84, 85, 83, 52, 90, 51, 91, 68,
	20, 6, 8, 0, 1, 3, 2, 10, 28, 38, 37, 73, 74, 76, 75, 79, 80, 78, 88, 77, 89,
	20, 16, 45, 13, 42, 22, 39, 32, 33, 31, 30, 66, 67, 64, 65, 53, 63, 50, 62, 61, 60
};

extern "C" __declspec(dllexport) Sint16 poly_0015B51A[] = {
	3, 0, 4, 6,
	0x8000u | 10, 6, 5, 4, 35, 34, 69, 70, 72, 71, 78,
	4, 8, 9, 1, 7,
	4, 15, 16, 14, 13,
	3, 45, 20, 42,
	0x8000u | 10, 42, 19, 20, 18, 17, 46, 47, 49, 48, 60,
	4, 51, 50, 68, 61,
	3, 62, 49, 60,
	3, 77, 72, 78,
	4, 91, 89, 90, 88
};

extern "C" __declspec(dllexport) Sint16 poly_0015B58E[] = {
	3, 10, 11, 3,
	0x8000u | 10, 3, 12, 11, 27, 26, 56, 57, 59, 58, 76,
	4, 29, 28, 21, 2,
	3, 39, 25, 33,
	0x8000u | 10, 33, 41, 25, 40, 24, 81, 54, 82, 55, 63,
	4, 23, 22, 36, 32,
	4, 85, 64, 52, 53,
	4, 75, 84, 80, 83,
	3, 65, 82, 63,
	3, 79, 59, 76
};

extern "C" __declspec(dllexport) Sint16 poly_0015B602[] = {
	4, 4, 0, 12, 3,
	4, 1, 7, 2, 21,
	4, 14, 13, 23, 22,
	4, 25, 39, 19, 42,
	4, 52, 53, 51, 50,
	4, 59, 79, 71, 78,
	4, 90, 88, 83, 80,
	4, 49, 62, 55, 63
};

extern "C" __declspec(dllexport) Sint16 poly_0015B652[] = {
	8, 25, 19, 24, 18, 54, 46, 55, 49,
	8, 4, 12, 34, 27, 70, 56, 71, 59
};

extern "C" __declspec(dllexport) Sint16 poly_0015B676[] = {
	4, 11, 10, 26, 38,
	4, 28, 29, 37, 43,
	4, 36, 32, 44, 31,
	4, 33, 41, 30, 40,
	4, 76, 58, 73, 57,
	4, 84, 75, 86, 74,
	4, 64, 85, 66, 87,
	4, 82, 65, 81, 67
};

extern "C" __declspec(dllexport) Sint16 poly_0015B6C6[] = {
	4, 26, 38, 57, 73,
	4, 37, 43, 74, 86,
	4, 44, 31, 87, 66,
	4, 30, 40, 67, 81
};

extern "C" __declspec(dllexport) NJS_TEX uv_0015B6F0[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -1 },
	{ 255, -1 },
	{ 0, -833 },
	{ 255, -833 },
	{ 0, -1099 },
	{ 255, -1099 },
	{ 0, -1863 },
	{ 255, -1863 },
	{ 0, -4000 },
	{ 255, -4000 },
	{ 0, -4763 },
	{ 255, -4763 },
	{ 0, -5030 },
	{ 255, -5030 },
	{ 0, -5863 },
	{ 255, -5863 },
	{ 0, -6120 },
	{ 255, -6120 },
	{ 0, -4845 },
	{ 255, -4845 },
	{ 0, -4639 },
	{ 255, -4639 },
	{ 0, -3972 },
	{ 255, -3972 },
	{ 0, -3760 },
	{ 255, -3760 },
	{ 0, -3149 },
	{ 255, -3149 },
	{ 0, -1440 },
	{ 255, -1440 },
	{ 0, -828 },
	{ 255, -828 },
	{ 0, -616 },
	{ 255, -616 },
	{ 0, 49 },
	{ 255, 49 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -1 },
	{ 255, -1 },
	{ 0, -833 },
	{ 255, -833 },
	{ 0, -1099 },
	{ 255, -1099 },
	{ 0, -2040 },
	{ 255, -2040 },
	{ 0, -3824 },
	{ 255, -3824 },
	{ 0, -4763 },
	{ 255, -4763 },
	{ 0, -5030 },
	{ 255, -5030 },
	{ 0, -5863 },
	{ 255, -5863 },
	{ 0, -6120 },
	{ 255, -6120 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0015B7E0[] = {
	{ 0 },
	{ 2073, 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 2042, 255 },
	{ 2073, 0 },
	{ 3572, 255 },
	{ 3557, 0 },
	{ 5606, 255 },
	{ 5620, 0 },
	{ 7136, 255 },
	{ 7106, 0 },
	{ 9180, 0 },
	{ 0, 255 },
	{ 2039, 255 },
	{ 0 },
	{ 2039, 0 },
	{ 0, 255 },
	{ 2040, 255 },
	{ 0 },
	{ 2040, 0 },
	{ 0, 255 },
	{ 2042, 255 },
	{ 0 },
	{ 0 },
	{ 2073, 0 },
	{ 2042, 255 },
	{ 3557, 0 },
	{ 3572, 255 },
	{ 5620, 0 },
	{ 5606, 255 },
	{ 7106, 0 },
	{ 7136, 255 },
	{ 9180, 255 },
	{ 0 },
	{ 2040, 0 },
	{ 0, 255 },
	{ 2040, 255 },
	{ 9180, 0 },
	{ 7106, 0 },
	{ 9180, 255 },
	{ 9180, 255 },
	{ 7136, 255 },
	{ 9180, 0 },
	{ 2039, 255 },
	{ 0, 255 },
	{ 2039, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0015B8A0[] = {
	{ 0 },
	{ 2064, 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 1960, 255 },
	{ 2064, 0 },
	{ 2850, 255 },
	{ 2798, 0 },
	{ 4800, 255 },
	{ 4850, 0 },
	{ 5688, 255 },
	{ 5584, 0 },
	{ 7650, 0 },
	{ 2039, 0 },
	{ 0 },
	{ 2039, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 1960, 255 },
	{ 0 },
	{ 0 },
	{ 2064, 0 },
	{ 1960, 255 },
	{ 2798, 0 },
	{ 2850, 255 },
	{ 4850, 0 },
	{ 4800, 255 },
	{ 5584, 0 },
	{ 5688, 255 },
	{ 7650, 255 },
	{ 0, 255 },
	{ 2040, 255 },
	{ 0 },
	{ 2040, 0 },
	{ 0 },
	{ 2040, 0 },
	{ 0, 255 },
	{ 2040, 255 },
	{ 0 },
	{ 2039, 0 },
	{ 0, 255 },
	{ 2039, 255 },
	{ 7650, 0 },
	{ 5584, 0 },
	{ 7650, 255 },
	{ 7650, 255 },
	{ 5688, 255 },
	{ 7650, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0015B960[] = {
	{ 0, 254 },
	{ 348, 254 },
	{ 0 },
	{ 348, 0 },
	{ 392, 254 },
	{ 741, 254 },
	{ 392, 0 },
	{ 741, 0 },
	{ 787, 254 },
	{ 1136, 254 },
	{ 787, 0 },
	{ 1136, 0 },
	{ 1530, 0 },
	{ 1180, 0 },
	{ 1530, 254 },
	{ 1180, 254 },
	{ 787, 0 },
	{ 1136, 0 },
	{ 787, 254 },
	{ 1136, 254 },
	{ 0 },
	{ 348, 0 },
	{ 0, 254 },
	{ 348, 254 },
	{ 741, 254 },
	{ 392, 254 },
	{ 741, 0 },
	{ 392, 0 },
	{ 1530, 254 },
	{ 1180, 254 },
	{ 1530, 0 },
	{ 1180, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0015B9E0[] = {
	{ 274, 0 },
	{ 0, 254 },
	{ 752, 0 },
	{ 752, 254 },
	{ 1797, 0 },
	{ 1797, 254 },
	{ 2274, 0 },
	{ 2550, 254 },
	{ 0, 254 },
	{ 274, 0 },
	{ 752, 254 },
	{ 752, 0 },
	{ 1797, 254 },
	{ 1797, 0 },
	{ 2550, 254 },
	{ 2274, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0015BA20[] = {
	{ 0, -255 },
	{ 0, 254 },
	{ 255, -255 },
	{ 255, 254 },
	{ 0, -255 },
	{ 0, 254 },
	{ 255, -255 },
	{ 255, 254 },
	{ 0, -255 },
	{ 0, 254 },
	{ 255, -255 },
	{ 255, 254 },
	{ 0, -255 },
	{ 0, 254 },
	{ 255, -255 },
	{ 255, 254 },
	{ 255, 254 },
	{ 255, -255 },
	{ 0, 254 },
	{ 0, -255 },
	{ 255, 254 },
	{ 255, -255 },
	{ 0, 254 },
	{ 0, -255 },
	{ 255, 254 },
	{ 255, -255 },
	{ 0, 254 },
	{ 0, -255 },
	{ 255, 254 },
	{ 255, -255 },
	{ 0, 254 },
	{ 0, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0015BAA0[] = {
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
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0015BAE0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0015B49C, NULL, NULL, NULL, uv_0015B6F0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 10, poly_0015B51A, NULL, NULL, NULL, uv_0015B7E0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 10, poly_0015B58E, NULL, NULL, NULL, uv_0015B8A0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 8, poly_0015B602, NULL, NULL, NULL, uv_0015B960, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_0015B652, NULL, NULL, NULL, uv_0015B9E0, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 8, poly_0015B676, NULL, NULL, NULL, uv_0015BA20, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 4, poly_0015B6C6, NULL, NULL, NULL, uv_0015BAA0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0015BB88[] = {
	{ -31.05127f, 44, -36.5f },
	{ -27.05127f, 44, -36.5f },
	{ -27.05127f, 52.7f, -28.5f },
	{ -31.05127f, 52.7f, -28.5f },
	{ -61.55127f, 44, -36.5f },
	{ -61.55127f, 40.5f, -37.5f },
	{ -31.05127f, 40.5f, -37.5f },
	{ 3.44873f, 44, -36.5f },
	{ -27.05127f, 40.5f, -37.5f },
	{ 3.44873f, 40.5f, -37.5f },
	{ -31.05127f, 55, -25.5f },
	{ -61.55127f, 55, -25.5f },
	{ -61.55127f, 52.7f, -28.5f },
	{ 37.94873f, 44, -36.5f },
	{ 7.44873f, 44, -36.5f },
	{ 7.44873f, 40.5f, -37.5f },
	{ 37.94873f, 40.5f, -37.5f },
	{ 72.44872f, 40.5f, -14.66667f },
	{ 72.44872f, 44, -14.66667f },
	{ 72.44872f, 44, -36.5f },
	{ 72.44872f, 40.5f, -37.49982f },
	{ 3.44873f, 52.7f, -28.5f },
	{ 37.94873f, 52.7f, -28.5f },
	{ 7.44873f, 52.7f, -28.5f },
	{ 72.44872f, 52.7f, -14.66667f },
	{ 72.44872f, 52.7f, -28.5f },
	{ -61.55127f, 55, -14.66667f },
	{ -61.55127f, 52.7f, -14.66667f },
	{ -27.05127f, 55, -25.5f },
	{ 3.44873f, 55, -25.5f },
	{ 41.94873f, 55, -14.66667f },
	{ 37.94873f, 55, -14.66667f },
	{ 37.94873f, 55, -25.5f },
	{ 41.94873f, 55, -25.5f },
	{ -61.55127f, 44, -14.66667f },
	{ -61.55127f, 40.5f, -14.66667f },
	{ 7.44873f, 55, -25.5f },
	{ -27.05127f, 55, -14.66667f },
	{ -31.05127f, 55, -14.66667f },
	{ 41.94873f, 52.7f, -28.5f },
	{ 72.44872f, 55, -14.66667f },
	{ 72.44872f, 55, -25.5f },
	{ 41.94873f, 44, -36.5f },
	{ 3.44873f, 55, -14.66667f },
	{ 7.44873f, 55, -14.66667f },
	{ 41.9487f, 40.5f, -37.49988f },
	{ 72.44872f, 44, 15.66667f },
	{ 72.44872f, 40.5f, 15.66667f },
	{ 72.44872f, 40.5f, 38.5f },
	{ 72.44872f, 44, 37.5f },
	{ 37.94873f, 44, 37.5f },
	{ 7.44873f, 44, 37.5f },
	{ 7.44873f, 52.7f, 29.5f },
	{ 37.94873f, 52.7f, 29.5f },
	{ 72.44872f, 52.7f, 15.66667f },
	{ 72.44872f, 52.7f, 29.5f },
	{ -61.55127f, 52.7f, 15.66667f },
	{ -61.55127f, 55, 15.66667f },
	{ -61.55127f, 55, 26.5f },
	{ -61.55127f, 52.7f, 29.5f },
	{ 41.94873f, 40.5f, 38.5f },
	{ 37.94873f, 40.5f, 38.5f },
	{ 41.94873f, 44, 37.5f },
	{ 41.94873f, 52.7f, 29.5f },
	{ 37.94873f, 55, 26.5f },
	{ 41.94873f, 55, 26.5f },
	{ 37.94873f, 55, 15.66667f },
	{ 41.94873f, 55, 15.66667f },
	{ 7.44873f, 40.5f, 38.5f },
	{ -61.55127f, 40.5f, 15.66667f },
	{ -61.55127f, 44, 15.66667f },
	{ -61.55127f, 44, 37.5f },
	{ -61.55127f, 40.5f, 38.5f },
	{ -31.05127f, 55, 15.66667f },
	{ -27.05127f, 55, 15.66667f },
	{ -27.05127f, 55, 26.5f },
	{ -31.05127f, 55, 26.5f },
	{ -31.05127f, 40.5f, 38.5f },
	{ -31.05127f, 44, 37.5f },
	{ -31.05127f, 52.7f, 29.5f },
	{ -27.05127f, 52.7f, 29.5f },
	{ 72.44872f, 55, 15.66667f },
	{ 72.44872f, 55, 26.5f },
	{ 3.44873f, 52.7f, 29.5f },
	{ 3.44873f, 55, 26.5f },
	{ 7.44873f, 55, 26.5f },
	{ 3.44873f, 55, 15.66667f },
	{ 7.44873f, 55, 15.66667f },
	{ -27.05127f, 44, 37.5f },
	{ -27.05127f, 40.5f, 38.5f },
	{ 3.44873f, 44, 37.5f },
	{ 3.44873f, 40.5f, 38.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0015BFD8[] = {
	{ 0, -0.488965f, 0.8723029f },
	{ 0, -0.488965f, 0.8723029f },
	{ 0, -0.738005f, 0.674795f },
	{ 0, -0.738005f, 0.674795f },
	{ 0.658717f, -0.367893f, 0.6563129f },
	{ 0.635385f, -0.212138f, 0.742485f },
	{ 0, -0.274721f, 0.961524f },
	{ 0, -0.488965f, 0.8723029f },
	{ 0, -0.274721f, 0.961524f },
	{ 0, -0.274721f, 0.961524f },
	{ 0, -0.946997f, 0.321243f },
	{ 0.641443f, -0.726508f, 0.246448f },
	{ 0.6881469f, -0.535475f, 0.489612f },
	{ -0.00004f, -0.488965f, 0.8723029f },
	{ 0, -0.488965f, 0.8723029f },
	{ 0, -0.274721f, 0.961524f },
	{ -0.00007f, -0.274721f, 0.961524f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.658712f, -0.367879f, 0.656325f },
	{ -0.635399f, -0.212099f, 0.742483f },
	{ 0, -0.738005f, 0.674795f },
	{ 0, -0.738005f, 0.674795f },
	{ 0, -0.738005f, 0.674795f },
	{ -1, 0, 0 },
	{ -0.6881469f, -0.535475f, 0.489612f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 1, 0, 0 },
	{ 0, -0.946997f, 0.321243f },
	{ 0, -0.946997f, 0.321243f },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -0.946997f, 0.321243f },
	{ 0, -0.946997f, 0.321243f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, -0.946997f, 0.321243f },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -0.738005f, 0.674795f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.641443f, -0.726508f, 0.246448f },
	{ -0.00004f, -0.488955f, 0.872309f },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ -0.00008f, -0.274698f, 0.961531f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.635385f, -0.212138f, -0.742485f },
	{ -0.658717f, -0.367893f, -0.6563129f },
	{ 0, -0.488965f, -0.8723029f },
	{ 0, -0.488965f, -0.8723029f },
	{ 0, -0.738005f, -0.674795f },
	{ 0, -0.738005f, -0.674795f },
	{ -1, 0, 0 },
	{ -0.6881469f, -0.535475f, -0.489612f },
	{ 1, 0, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.641443f, -0.726508f, -0.246448f },
	{ 0.6881469f, -0.535475f, -0.489612f },
	{ 0, -0.274721f, -0.961524f },
	{ 0, -0.274721f, -0.961524f },
	{ 0, -0.488965f, -0.8723029f },
	{ 0, -0.738005f, -0.674795f },
	{ 0, -0.946997f, -0.321243f },
	{ 0, -0.946997f, -0.321243f },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -0.274721f, -0.961524f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.658717f, -0.367893f, -0.6563129f },
	{ 0.635385f, -0.212138f, -0.742485f },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -0.946997f, -0.321243f },
	{ 0, -0.946997f, -0.321243f },
	{ 0, -0.274721f, -0.961524f },
	{ 0, -0.488965f, -0.8723029f },
	{ 0, -0.738005f, -0.674795f },
	{ 0, -0.738005f, -0.674795f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.641443f, -0.726508f, -0.246448f },
	{ 0, -0.738005f, -0.674795f },
	{ 0, -0.946997f, -0.321243f },
	{ 0, -0.946997f, -0.321243f },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -0.488965f, -0.8723029f },
	{ 0, -0.274721f, -0.961524f },
	{ 0, -0.488965f, -0.8723029f },
	{ 0, -0.274721f, -0.961524f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0015C428 = { vertex_0015BB88, normal_0015BFD8, LengthOfArray<Sint32>(vertex_0015BB88), meshlist_0015BAE0, matlist_0015B410, LengthOfArray<Uint16>(meshlist_0015BAE0), LengthOfArray<Uint16>(matlist_0015B410), { 5.44873f, 47.75f, 0.5f }, 77.02596f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0015C450 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0015C428, 734.3013f, 46.25f, 1771, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0015C484[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0015C498[] = {
	0x8000u | 10, 7, 2, 3, 0, 1, 4, 5, 6, 7, 2,
	4, 0, 4, 2, 6
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0015C4B8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0015C498, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0015C4D0[] = {
	{ -13.75f, 0, -117 },
	{ -13.75f, 0, 2 },
	{ -13.75f, 29, -117 },
	{ -13.75f, 29, 2 },
	{ 13.75f, 0, -117 },
	{ 13.75f, 0, 2 },
	{ 13.75f, 29, -117 },
	{ 13.75f, 29, 2 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0015C530[] = {
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ -0.7071069f, -0.7071069f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0015C590 = { vertex_0015C4D0, normal_0015C530, LengthOfArray<Sint32>(vertex_0015C4D0), meshlist_0015C4B8, matlist_0015C484, LengthOfArray<Uint16>(meshlist_0015C4B8), LengthOfArray<Uint16>(matlist_0015C484), { 0, 14.5f, -57.5f }, 61.24132f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0015C5B8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0015C590, 757, 50, 1731.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0015C5EC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 21, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0015C614[] = {
	4, 6, 3, 5, 0
};

extern "C" __declspec(dllexport) Sint16 poly_0015C61E[] = {
	4, 4, 6, 2, 5,
	4, 1, 0, 7, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_0015C634[] = {
	{ 5100, -226 },
	{ 5100, 226 },
	{ 0, -226 },
	{ 0, 226 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0015C644[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -255 },
	{ 255, -255 },
	{ 255, -255 },
	{ 0, -255 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0015C664[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0015C614, NULL, NULL, NULL, uv_0015C634, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0015C61E, NULL, NULL, NULL, uv_0015C644, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0015C694[] = {
	{ 0.75f, 28.25f, -120 },
	{ 11.75f, 28.25f, -120 },
	{ -11.75f, 28.25f, -120 },
	{ 0.75f, 0, -120 },
	{ -11.75f, 0, -120 },
	{ -0.75f, 28.25f, -120 },
	{ -0.75f, 0, -120 },
	{ 11.75f, 0, -120 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0015C6F4[] = {
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0015C754 = { vertex_0015C694, normal_0015C6F4, LengthOfArray<Sint32>(vertex_0015C694), meshlist_0015C664, matlist_0015C5EC, LengthOfArray<Uint16>(meshlist_0015C664), LengthOfArray<Uint16>(matlist_0015C5EC), { 0, 14.125f, -120 }, 18.3733f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0015C77C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0015C754, 806.75f, 50, 1771.5f, 0, 0xFFFFC001, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0015C7B0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0015C7C4[] = {
	3, 12, 13, 15,
	9, 4, 0, 17, 11, 10, 8, 9, 6, 7,
	4, 17, 14, 4, 2,
	8, 3, 2, 13, 14, 15, 17, 16, 10,
	0x8000u | 6, 0, 11, 1, 8, 5, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_0015C80C[] = {
	{ 4080, 255 },
	{ 4080, 84 },
	{ 2704, 255 },
	{ 2307, 0 },
	{ 1771, 0 },
	{ 2307, 61 },
	{ 1771, 61 },
	{ 1730, 255 },
	{ 1391, 55 },
	{ 1375, 255 },
	{ 0, 84 },
	{ 0, 255 },
	{ 2307, 61 },
	{ 2688, 55 },
	{ 2307, 0 },
	{ 2688, 0 },
	{ 4080, 0 },
	{ 2688, 0 },
	{ 4080, 84 },
	{ 2688, 55 },
	{ 2704, 255 },
	{ 2307, 61 },
	{ 2347, 255 },
	{ 1730, 255 },
	{ 1771, 0 },
	{ 1771, 61 },
	{ 1391, 0 },
	{ 1391, 55 },
	{ 0 },
	{ 0, 84 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0015C884[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0015C7C4, NULL, NULL, NULL, uv_0015C80C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0015C89C[] = {
	{ 5, 28.25f, -120 },
	{ 11.75f, 26, -120 },
	{ -11.75f, 26, -120 },
	{ -11.75f, 0, -120 },
	{ -5, 28.25f, -120 },
	{ 11.75f, 0, -120 },
	{ 11.75f, 0, -119 },
	{ 13.75f, 0, -119 },
	{ 11.75f, 26, -119 },
	{ 13.75f, 29, -119 },
	{ 6.5f, 31, -119 },
	{ 5, 28.25f, -119 },
	{ -13.75f, 0, -119 },
	{ -11.75f, 0, -119 },
	{ -11.75f, 26, -119 },
	{ -13.75f, 29, -119 },
	{ -6.5f, 31, -119 },
	{ -5, 28.25f, -119 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0015C974[] = {
	{ -0.160182f, -0.987087f, 0 },
	{ -0.811242f, -0.5847099f, 0 },
	{ 0.811242f, -0.5847099f, 0 },
	{ 1, 0, 0 },
	{ 0.160182f, -0.987087f, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ -0.407257f, -0.293534f, 0.864858f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.106852f, -0.6584499f, 0.745001f },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.407257f, -0.293534f, 0.864858f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.106852f, -0.6584499f, 0.745001f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0015CA4C = { vertex_0015C89C, normal_0015C974, LengthOfArray<Sint32>(vertex_0015C89C), meshlist_0015C884, matlist_0015C7B0, LengthOfArray<Uint16>(meshlist_0015C884), LengthOfArray<Uint16>(matlist_0015C7B0), { 0, 15.5f, -119.5f }, 20.71986f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0015CA74 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0015CA4C, 806.75f, 50, 1771.5f, 0, 0xFFFFC001, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0015CAA8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0015CABC[] = {
	12, 7, 12, 17, 8, 1, 0, 3, 4, 16, 10, 6, 13,
	12, 12, 14, 8, 9, 0, 2, 4, 5, 10, 11, 13, 15
};

extern "C" __declspec(dllexport) NJS_TEX uv_0015CAF0[] = {
	{ 0, 255 },
	{ 0 },
	{ 1555, 255 },
	{ 1679, 0 },
	{ 2237, 255 },
	{ 2198, 0 },
	{ 2861, 255 },
	{ 2913, 0 },
	{ 3542, 255 },
	{ 3420, 0 },
	{ 5100, 255 },
	{ 5100, 0 },
	{ 5100, 0 },
	{ 5100, 255 },
	{ 3420, 0 },
	{ 3420, 255 },
	{ 2900, 0 },
	{ 2900, 255 },
	{ 2185, 0 },
	{ 2185, 255 },
	{ 1679, 0 },
	{ 1679, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0015CB50[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0015CABC, NULL, NULL, NULL, uv_0015CAF0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0015CB68[] = {
	{ 1.875f, 27.25f, 5 },
	{ 1.875f, 31.25f, 5 },
	{ -0.125f, 27.25f, 5 },
	{ 1.875f, 31.25f, -5 },
	{ 1.875f, 27.25f, -5 },
	{ -0.125f, 27.25f, -5 },
	{ 1.874999f, 0, -14 },
	{ 1.875001f, 0, 14 },
	{ 1.875f, 23.25f, 11.75f },
	{ -0.125f, 23.25f, 11.75f },
	{ 1.875f, 23.25f, -11.75f },
	{ -0.125f, 23.25f, -11.75f },
	{ 1.875f, 0, 11.75f },
	{ 1.875f, 0, -11.75f },
	{ -0.125f, 0, 11.75f },
	{ -0.125f, 0, -11.75f },
	{ 1.875f, 25, -14 },
	{ 1.875f, 25, 14 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0015CC40[] = {
	{ 0.77171f, -0.613359f, -0.168088f },
	{ 1, 0, 0 },
	{ 0, -0.9644409f, -0.2643f },
	{ 1, 0, 0 },
	{ 0.77171f, -0.613359f, 0.168088f },
	{ 0, -0.9644409f, 0.2643f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.837137f, -0.270802f, -0.475255f },
	{ 0, -0.495075f, -0.86885f },
	{ 0.837137f, -0.270802f, 0.475255f },
	{ 0, -0.495075f, 0.86885f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 1, 0, 0 },
	{ 1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0015CD18 = { vertex_0015CB68, normal_0015CC40, LengthOfArray<Sint32>(vertex_0015CB68), meshlist_0015CB50, matlist_0015CAA8, LengthOfArray<Uint16>(meshlist_0015CB50), LengthOfArray<Uint16>(matlist_0015CAA8), { 0.875f, 15.625f, 0 }, 20.97953f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0015CD40 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0015CD18, 581.875f, 50, 1771.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0015CD74[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 24, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0015CDC4[] = {
	4, 2, 3, 1, 0,
	4, 8, 9, 7, 6,
	4, 20, 21, 19, 18,
	4, 32, 33, 31, 30
};

extern "C" __declspec(dllexport) Sint16 poly_0015CDEC[] = {
	0x8000u | 12, 16, 12, 17, 13, 4, 0, 5, 1, 46, 42, 47, 43,
	0x8000u | 12, 40, 36, 41, 37, 22, 18, 23, 19, 28, 24, 29, 25,
	0x8000u | 12, 52, 48, 53, 49, 10, 6, 11, 7, 58, 54, 59, 55,
	0x8000u | 12, 70, 66, 71, 67, 34, 30, 35, 31, 64, 60, 65, 61
};

extern "C" __declspec(dllexport) Sint16 poly_0015CE54[] = {
	4, 14, 15, 13, 12,
	4, 26, 27, 25, 24,
	4, 38, 39, 37, 36,
	4, 44, 45, 43, 42,
	4, 50, 51, 49, 48,
	4, 56, 57, 55, 54,
	4, 62, 63, 61, 60,
	4, 68, 69, 67, 66
};

extern "C" __declspec(dllexport) Sint16 poly_0015CEA4[] = {
	4, 63, 32, 60, 31,
	4, 27, 20, 24, 19,
	4, 33, 68, 30, 67,
	4, 45, 2, 42, 1,
	4, 57, 8, 54, 7,
	4, 21, 38, 18, 37,
	4, 9, 50, 6, 49,
	4, 3, 14, 0, 13
};

extern "C" __declspec(dllexport) NJS_TEX uv_0015CEF4[] = {
	{ 254, -2295 },
	{ 0, -2295 },
	{ 254, 255 },
	{ 0, 255 },
	{ 254, -2295 },
	{ 0, -2295 },
	{ 254, 255 },
	{ 0, 255 },
	{ 254, -2295 },
	{ 0, -2295 },
	{ 254, 255 },
	{ 0, 255 },
	{ 254, -2295 },
	{ 0, -2295 },
	{ 254, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0015CF34[] = {
	{ 0, 255 },
	{ 0 },
	{ 1205, 255 },
	{ 1205, 0 },
	{ 1272, 255 },
	{ 1272, 0 },
	{ 1531, 255 },
	{ 1531, 0 },
	{ 1598, 255 },
	{ 1598, 0 },
	{ 2805, 255 },
	{ 2805, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1196, 255 },
	{ 1188, 0 },
	{ 1265, 255 },
	{ 1259, 0 },
	{ 1538, 255 },
	{ 1544, 0 },
	{ 1607, 255 },
	{ 1615, 0 },
	{ 2805, 255 },
	{ 2805, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1205, 255 },
	{ 1205, 0 },
	{ 1272, 255 },
	{ 1272, 0 },
	{ 1531, 255 },
	{ 1531, 0 },
	{ 1598, 255 },
	{ 1598, 0 },
	{ 2805, 255 },
	{ 2805, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1205, 255 },
	{ 1205, 0 },
	{ 1272, 255 },
	{ 1272, 0 },
	{ 1531, 255 },
	{ 1531, 0 },
	{ 1598, 255 },
	{ 1598, 0 },
	{ 2805, 255 },
	{ 2805, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0015CFF4[] = {
	{ 364, -510 },
	{ 510, -510 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -510 },
	{ 145, -510 },
	{ 0, 255 },
	{ 510, 255 },
	{ 145, -510 },
	{ 0, -510 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -510 },
	{ 364, -510 },
	{ 510, 255 },
	{ 0, 255 },
	{ 364, -510 },
	{ 510, -510 },
	{ 0, 255 },
	{ 510, 255 },
	{ 510, -510 },
	{ 364, -510 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -510 },
	{ 364, -510 },
	{ 510, 255 },
	{ 0, 255 },
	{ 364, -510 },
	{ 510, -510 },
	{ 0, 255 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0015D074[] = {
	{ 0 },
	{ -2, 255 },
	{ 2534, 1 },
	{ 2550, 253 },
	{ 0 },
	{ -2, 255 },
	{ 2534, 1 },
	{ 2550, 253 },
	{ 2550, 253 },
	{ 2534, 1 },
	{ -2, 255 },
	{ 0 },
	{ 0 },
	{ -2, 255 },
	{ 2534, 1 },
	{ 2550, 253 },
	{ 0 },
	{ -2, 255 },
	{ 2534, 1 },
	{ 2550, 253 },
	{ 2550, 253 },
	{ 2534, 1 },
	{ -2, 255 },
	{ 0 },
	{ 2550, 253 },
	{ 2534, 1 },
	{ -2, 255 },
	{ 0 },
	{ 2550, 253 },
	{ 2534, 1 },
	{ -2, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0015D0F4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0015CDC4, NULL, NULL, NULL, uv_0015CEF4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_0015CDEC, NULL, NULL, NULL, uv_0015CF34, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 8, poly_0015CE54, NULL, NULL, NULL, uv_0015CFF4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 8, poly_0015CEA4, NULL, NULL, NULL, uv_0015D074, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0015D154[] = {
	{ -15.25f, 3, 22.25195f },
	{ -19.25f, 3, 22.25195f },
	{ -19.25f, 47.5f, 34.75195f },
	{ -15.25f, 47.5f, 34.75195f },
	{ -15.25f, 0, 21.25195f },
	{ -19.25f, 0, 21.25195f },
	{ -49.75f, 3, 22.25195f },
	{ -53.75f, 3, 22.25195f },
	{ -53.75f, 47.5f, 34.75195f },
	{ -49.75f, 47.5f, 34.75195f },
	{ -49.75f, 0, 21.25195f },
	{ -53.75f, 0, 21.25195f },
	{ -15.25f, 3, 40.75195f },
	{ -15.25f, 3, 23.25195f },
	{ -15.25f, 47.5f, 35.75195f },
	{ -15.25f, 47.5f, 40.75195f },
	{ -15.25f, 0, 39.25195f },
	{ -15.25f, 0, 22.25195f },
	{ -53.75f, 3, -20.74805f },
	{ -49.75f, 3, -20.74805f },
	{ -49.75f, 47.5f, -33.24805f },
	{ -53.75f, 47.5f, -33.24805f },
	{ -53.75f, 0, -19.74805f },
	{ -49.75f, 0, -19.74805f },
	{ -49.75f, 3, -21.74805f },
	{ -49.75f, 3, -39.24805f },
	{ -49.75f, 47.5f, -39.24805f },
	{ -49.75f, 47.5f, -34.24805f },
	{ -49.75f, 0, -20.74805f },
	{ -49.75f, 0, -37.74805f },
	{ 19.25f, 3, 22.25195f },
	{ 15.25f, 3, 22.25195f },
	{ 15.25f, 47.5f, 34.75195f },
	{ 19.25f, 47.5f, 34.75195f },
	{ 19.25f, 0, 21.25195f },
	{ 15.25f, 0, 21.25195f },
	{ -53.75f, 3, -39.24805f },
	{ -53.75f, 3, -21.74805f },
	{ -53.75f, 47.5f, -34.24805f },
	{ -53.75f, 47.5f, -39.24805f },
	{ -53.75f, 0, -37.74805f },
	{ -53.75f, 0, -20.74805f },
	{ -19.25f, 3, 23.25195f },
	{ -19.25f, 3, 40.75195f },
	{ -19.25f, 47.5f, 40.75195f },
	{ -19.25f, 47.5f, 35.75195f },
	{ -19.25f, 0, 22.25195f },
	{ -19.25f, 0, 39.25195f },
	{ -49.75f, 3, 40.75195f },
	{ -49.75f, 3, 23.25195f },
	{ -49.75f, 47.5f, 35.75195f },
	{ -49.75f, 47.5f, 40.75195f },
	{ -49.75f, 0, 39.25195f },
	{ -49.75f, 0, 22.25195f },
	{ -53.75f, 3, 23.25195f },
	{ -53.75f, 3, 40.75195f },
	{ -53.75f, 47.5f, 40.75195f },
	{ -53.75f, 47.5f, 35.75195f },
	{ -53.75f, 0, 22.25195f },
	{ -53.75f, 0, 39.25195f },
	{ 15.25f, 3, 23.25195f },
	{ 15.25f, 3, 40.75195f },
	{ 15.25f, 47.5f, 40.75195f },
	{ 15.25f, 47.5f, 35.75195f },
	{ 15.25f, 0, 22.25195f },
	{ 15.25f, 0, 39.25195f },
	{ 19.25f, 3, 40.75195f },
	{ 19.25f, 3, 23.25195f },
	{ 19.25f, 47.5f, 35.75195f },
	{ 19.25f, 47.5f, 40.75195f },
	{ 19.25f, 0, 39.25195f },
	{ 19.25f, 0, 22.25195f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0015D4B4[] = {
	{ 0.7125379f, 0.205869f, -0.670752f },
	{ -0.7125379f, 0.205869f, -0.670752f },
	{ -0.761358f, 0.17533f, -0.624174f },
	{ 0.761358f, 0.17533f, -0.624174f },
	{ 0.622386f, 0.247515f, -0.742544f },
	{ -0.622386f, 0.247515f, -0.742544f },
	{ 0.7125379f, 0.205869f, -0.670752f },
	{ -0.7125379f, 0.205869f, -0.670752f },
	{ -0.761358f, 0.17533f, -0.624174f },
	{ 0.761358f, 0.17533f, -0.624174f },
	{ 0.622386f, 0.247515f, -0.742544f },
	{ -0.622386f, 0.247515f, -0.742544f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ -0.7125379f, 0.205869f, 0.670752f },
	{ 0.7125379f, 0.205869f, 0.670752f },
	{ 0.761358f, 0.17533f, 0.624174f },
	{ -0.761358f, 0.17533f, 0.624174f },
	{ -0.622386f, 0.247515f, 0.742544f },
	{ 0.622386f, 0.247515f, 0.742544f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.7125379f, 0.205869f, -0.670752f },
	{ -0.7125379f, 0.205869f, -0.670752f },
	{ -0.761358f, 0.17533f, -0.624174f },
	{ 0.761358f, 0.17533f, -0.624174f },
	{ 0.622386f, 0.247515f, -0.742544f },
	{ -0.622386f, 0.247515f, -0.742544f },
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
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
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
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0015D814 = { vertex_0015D154, normal_0015D4B4, LengthOfArray<Sint32>(vertex_0015D154), meshlist_0015D0F4, matlist_0015CD74, LengthOfArray<Uint16>(meshlist_0015D0F4), LengthOfArray<Uint16>(matlist_0015CD74), { -17.25f, 23.75f, 0.7519529f }, 54.15025f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0015D83C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0015D814, 757, 47, 1770.748f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_0015D870 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00158F54, 814.75f, 50, 1771.5f, 0, 0xFFFFC000, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) COL collist_001570D8[] = {
	{ { 739.75f, 47, 1771.5f }, 77.27386f, 0, 0, &object_00157654, 0, 0x80000000 },
	{ { 739.75f, 72.83333f, 1771.5f }, 81.2426f, 0, 0, &object_00157ABC, 0, 0x20000001 },
	{ { 739.75f, 98.66666f, 1771.5f }, 77.02595f, 0, 0, &object_00157BB0, 0, 0x20000001 },
	{ { 628.1875f, 65.5f, 1771.5f }, 49.14396f, 0, 0, &object_00157D90, 0, 0x40000001 },
	{ { 864.75f, 64.5f, 1771.5f }, 61.34584f, 0, 0, &object_00157EF8, 0, 0x20000001 },
	{ { 757, 64.125f, 1611.5f }, 18.3733f, 0, 0, &object_001580BC, 0, 0x80000000 },
	{ { 757, 65.5f, 1612 }, 20.72589f, 0, 0, &object_001583B4, 0, 0x80000000 },
	{ { 756.995f, 65.5f, 1671.5f }, 63.47795f, 0, 0, &object_00158F7C, 0, 0x80000000 },
	{ { 627.3125f, 65.5f, 1771.5f }, 49.71139f, 0, 0, &object_001598B0, 0, 0x80000000 },
	{ { 582.125f, 64, 1771.5f }, 18.27738f, 0, 0, &object_00159ABC, 0, 0x80000000 },
	{ { 739.7499f, 66.875f, 1771.5f }, 80.52343f, 0, 0, &object_0015A7FC, 0, 0x80000000 },
	{ { 757, 50, 1767.375f }, 24.18839f, 0, 0, &object_0015AC88, 0, 0x80000000 },
	{ { 739.625f, 50, 1757.375f }, 71.93942f, 0, 0, &object_0015AE80, 0, 0x80000000 },
	{ { 739.625f, 48.5f, 1758.875f }, 72.50797f, 0, 0, &object_0015B3DC, 0, 0x80000000 },
	{ { 739.75f, 94, 1771.5f }, 77.36642f, 0, 0, &object_0015C450, 0, 0x80000000 },
	{ { 757, 64.5f, 1674 }, 62.76593f, 0, 0, &object_0015C5B8, 0, 0x20000001 },
	{ { 926.75f, 64.125f, 1771.5f }, 18.3733f, 0, 0, &object_0015C77C, 0, 0x80000000 },
	{ { 926.25f, 65.5f, 1771.5f }, 20.72589f, 0, 0, &object_0015CA74, 0, 0x80000000 },
	{ { 582.75f, 65.625f, 1771.5f }, 21.00335f, 0, 0, &object_0015CD40, 0, 0x80000000 },
	{ { 739.75f, 70.75f, 1771.5f }, 59.12962f, 0, 0, &object_0015D83C, 0, 0xC0000001 },
	{ { 866.75f, 65.5f, 1771.495f }, 63.47795f, 0, 0, &object_0015D870, 0, 0x80000000 }
};

extern "C" __declspec(dllexport) LandTable landtable_001573CC = { LengthOfArray(collist_001570D8), 0, 0xC, 0, 1700, collist_001570D8, NULL, "ADVSS05", (NJS_TEXLIST *)&texlist_advss05 , 0, 0 };

#pragma warning(pop)