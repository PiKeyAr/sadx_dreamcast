#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007B1CC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007B1E0[] = {
	0x8000u | 6, 10, 11, 1, 4, 0, 3,
	4, 6, 12, 21, 24,
	4, 26, 22, 2, 23,
	0x8000u | 5, 13, 20, 9, 19, 25,
	0x8000u | 9, 5, 3, 6, 4, 21, 11, 26, 10, 2,
	11, 5, 7, 8, 17, 13, 16, 9, 15, 25, 14, 18,
	7, 5, 8, 6, 13, 12, 20, 24
};

extern "C" __declspec(dllexport) NJS_TEX uv_0007B24C[] = {
	{ 1601, -1575 },
	{ 1601, -2062 },
	{ 861, -1575 },
	{ 861, -2062 },
	{ 154, -1575 },
	{ 160, -2062 },
	{ 861, -2525 },
	{ 1601, -2525 },
	{ 1601, -2295 },
	{ 1687, -2525 },
	{ 1686, -2062 },
	{ 1744, -1905 },
	{ 1744, -1575 },
	{ 2144, -1575 },
	{ 1601, -3013 },
	{ 1744, -2683 },
	{ 1744, -3013 },
	{ 2148, -3013 },
	{ 2587, -3172 },
	{ 276, -2525 },
	{ 160, -2062 },
	{ 861, -2525 },
	{ 861, -2062 },
	{ 1601, -2295 },
	{ 1601, -2062 },
	{ 1686, -2062 },
	{ 1601, -1575 },
	{ 1744, -1575 },
	{ 276, -2525 },
	{ 573, -2986 },
	{ 861, -3013 },
	{ 875, -3230 },
	{ 1601, -3013 },
	{ 1601, -3230 },
	{ 1744, -3013 },
	{ 1744, -3230 },
	{ 2587, -3172 },
	{ 2587, -3230 },
	{ 2738, -3230 },
	{ 276, -2525 },
	{ 861, -3013 },
	{ 861, -2525 },
	{ 1601, -3013 },
	{ 1601, -2525 },
	{ 1744, -2683 },
	{ 1687, -2525 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007B304[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_0007B1E0, NULL, NULL, NULL, uv_0007B24C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007B31C[] = {
	{ -395, 0, -4061.546f },
	{ -280, 0, -4061.546f },
	{ -137, 0, -4061.546f },
	{ -394, 0, -3918.182f },
	{ -280, 0, -3918.182f },
	{ -375, 0, -3781.819f },
	{ -280, 0, -3781.819f },
	{ -327, 0, -3646.455f },
	{ -280, 0, -3638.455f },
	{ -137, 0, -3638.455f },
	{ -160, 0, -4061.546f },
	{ -160, 0, -3918.182f },
	{ -160, 0, -3781.819f },
	{ -160, 0, -3638.455f },
	{ 0, 0, -3574.773f },
	{ -137, 0, -3574.773f },
	{ -160, 0, -3574.773f },
	{ -278, 0, -3574.773f },
	{ 24.37882f, 0, -3574.773f },
	{ -71.36657f, 0, -3638.455f },
	{ -137, 0, -3735.316f },
	{ -160, 0, -3849.792f },
	{ -137, 0, -3964.358f },
	{ -72.06312f, 0, -4061.546f },
	{ -146.1908f, 0, -3781.819f },
	{ 0, 0, -3591.552f },
	{ -146.4032f, 0, -3918.182f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007B460[] = {
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
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007B5A4 = { vertex_0007B31C, normal_0007B460, LengthOfArray<Sint32>(vertex_0007B31C), meshlist_0007B304, matlist_0007B1CC, LengthOfArray<Uint16>(meshlist_0007B304), LengthOfArray<Uint16>(matlist_0007B1CC), { -185.3106f, 0, -3818.16f }, 321.2577f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007B5CC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007B5A4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007B600[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007B614[] = {
	0x8000u | 10, 14, 8, 13, 6, 12, 4, 11, 2, 10, 0,
	0x8000u | 10, 1, 0, 3, 2, 5, 4, 7, 6, 9, 8,
	0x8000u | 10, 19, 14, 18, 13, 17, 12, 16, 11, 15, 10
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007B658[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0007B614, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007B670[] = {
	{ -155, -140, -1078.261f },
	{ -155, -280, -1078.261f },
	{ -155, -140, -943.4781f },
	{ -155, -280, -943.4781f },
	{ -155, -140, -808.6956f },
	{ -155, -280, -808.6956f },
	{ -155, -140, -673.9129f },
	{ -155, -280, -673.9129f },
	{ -155, -140, -539.1302f },
	{ -155, -280, -539.1302f },
	{ -155, 0, -1078.261f },
	{ -155, 0, -943.4781f },
	{ -155, 0, -808.6956f },
	{ -155, 0, -673.9129f },
	{ -155, 0, -539.1302f },
	{ -155, 140, -1078.261f },
	{ -155, 140, -943.4781f },
	{ -155, 140, -808.6956f },
	{ -155, 140, -673.9129f },
	{ -155, 140, -539.1302f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007B760[] = {
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
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007B850 = { vertex_0007B670, normal_0007B760, LengthOfArray<Sint32>(vertex_0007B670), meshlist_0007B658, matlist_0007B600, LengthOfArray<Uint16>(meshlist_0007B658), LengthOfArray<Uint16>(matlist_0007B600), { -155, -70, -808.6956f }, 341.7095f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007B878 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007B850, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007B8AC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007B8C0[] = {
	0x8000u | 10, 14, 8, 13, 6, 12, 4, 11, 2, 10, 0,
	0x8000u | 10, 8, 9, 6, 7, 4, 5, 2, 3, 0, 1,
	0x8000u | 10, 19, 14, 18, 13, 17, 12, 16, 11, 15, 10
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007B904[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0007B8C0, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007B91C[] = {
	{ -155, -140, -2156.521f },
	{ -155, -280, -2156.521f },
	{ -155, -140, -2021.739f },
	{ -155, -280, -2021.739f },
	{ -155, -140, -1886.956f },
	{ -155, -280, -1886.956f },
	{ -155, -140, -1752.174f },
	{ -155, -280, -1752.174f },
	{ -155, -140, -1617.391f },
	{ -155, -280, -1617.391f },
	{ -155, 0, -2156.521f },
	{ -155, 0, -2021.739f },
	{ -155, 0, -1886.956f },
	{ -155, 0, -1752.174f },
	{ -155, 0, -1617.391f },
	{ -155, 140, -2156.521f },
	{ -155, 140, -2021.739f },
	{ -155, 140, -1886.956f },
	{ -155, 140, -1752.174f },
	{ -155, 140, -1617.391f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007BA0C[] = {
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
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007BAFC = { vertex_0007B91C, normal_0007BA0C, LengthOfArray<Sint32>(vertex_0007B91C), meshlist_0007B904, matlist_0007B8AC, LengthOfArray<Uint16>(meshlist_0007B904), LengthOfArray<Uint16>(matlist_0007B8AC), { -155, -70, -1886.956f }, 341.7095f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007BB24 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007BAFC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007BB58[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007BB6C[] = {
	0x8000u | 10, 8, 9, 6, 7, 4, 5, 2, 3, 0, 1,
	0x8000u | 10, 14, 8, 13, 6, 12, 4, 11, 2, 10, 0,
	0x8000u | 10, 19, 14, 18, 13, 17, 12, 16, 11, 15, 10
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007BBB0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0007BB6C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007BBC8[] = {
	{ -155, -140, -2695.652f },
	{ -155, -280, -2695.652f },
	{ -155, -140, -2560.869f },
	{ -155, -280, -2560.869f },
	{ -155, -140, -2426.087f },
	{ -155, -280, -2426.087f },
	{ -155, -140, -2291.304f },
	{ -155, -280, -2291.304f },
	{ -155, -140, -2156.521f },
	{ -155, -280, -2156.521f },
	{ -155, 0, -2695.652f },
	{ -155, 0, -2560.869f },
	{ -155, 0, -2426.087f },
	{ -155, 0, -2291.304f },
	{ -155, 0, -2156.521f },
	{ -155, 140, -2695.652f },
	{ -155, 140, -2560.869f },
	{ -155, 140, -2426.087f },
	{ -155, 140, -2291.304f },
	{ -155, 140, -2156.521f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007BCB8[] = {
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
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007BDA8 = { vertex_0007BBC8, normal_0007BCB8, LengthOfArray<Sint32>(vertex_0007BBC8), meshlist_0007BBB0, matlist_0007BB58, LengthOfArray<Uint16>(meshlist_0007BBB0), LengthOfArray<Uint16>(matlist_0007BB58), { -155, -70, -2426.087f }, 341.7095f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007BDD0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007BDA8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007BE04[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007BE18[] = {
	8, 2, 5, 1, 4, 9, 10, 13, 14,
	8, 5, 7, 4, 6, 10, 11, 14, 15,
	8, 13, 12, 9, 8, 1, 0, 2, 3
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007BE50[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0007BE18, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007BE68[] = {
	{ -155, -140, -3100 },
	{ -155, -140, -2965.217f },
	{ -155, -280, -2965.217f },
	{ -155, -280, -3100 },
	{ -155, -140, -2830.434f },
	{ -155, -280, -2830.434f },
	{ -155, -140, -2695.652f },
	{ -155, -280, -2695.652f },
	{ -155, 0, -3100 },
	{ -155, 0, -2965.217f },
	{ -155, 0, -2830.434f },
	{ -155, 0, -2695.652f },
	{ -155, 140, -3100 },
	{ -155, 140, -2965.217f },
	{ -155, 140, -2830.434f },
	{ -155, 140, -2695.652f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007BF28[] = {
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
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007BFE8 = { vertex_0007BE68, normal_0007BF28, LengthOfArray<Sint32>(vertex_0007BE68), meshlist_0007BE50, matlist_0007BE04, LengthOfArray<Uint16>(meshlist_0007BE50), LengthOfArray<Uint16>(matlist_0007BE04), { -155, -70, -2897.826f }, 291.5035f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007C010 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007BFE8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007C044[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007C058[] = {
	0x8000u | 10, 5, 10, 6, 12, 7, 14, 8, 17, 9, 16,
	0x8000u | 10, 10, 11, 12, 13, 14, 15, 17, 18, 16, 19,
	0x8000u | 10, 0, 5, 1, 6, 2, 7, 3, 8, 4, 9
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007C09C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0007C058, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007C0B4[] = {
	{ -155, 140, -539.1302f },
	{ -155, 140, -404.3477f },
	{ -155, 140, -269.5651f },
	{ -155, 140, -134.7825f },
	{ -155, 140, 0.000127f },
	{ -155, 280, -539.1302f },
	{ -155, 280, -404.3477f },
	{ -155, 280, -269.5651f },
	{ -155, 280, -134.7825f },
	{ -155, 280, 0.000127f },
	{ -155, 420, -539.1302f },
	{ -155, 560, -539.1302f },
	{ -155, 420, -404.3477f },
	{ -155, 560, -404.3477f },
	{ -155, 420, -269.5651f },
	{ -155, 560, -269.5651f },
	{ -155, 420, 0.000127f },
	{ -155, 420, -134.7825f },
	{ -155, 560, -134.7825f },
	{ -155, 560, 0.000127f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007C1A4[] = {
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
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007C294 = { vertex_0007C0B4, normal_0007C1A4, LengthOfArray<Sint32>(vertex_0007C0B4), meshlist_0007C09C, matlist_0007C044, LengthOfArray<Uint16>(meshlist_0007C09C), LengthOfArray<Uint16>(matlist_0007C044), { -155, 350, -269.5651f }, 341.7095f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007C2BC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007C294, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007C2F0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007C304[] = {
	8, 7, 6, 5, 4, 3, 2, 1, 0
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007C318[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0007C304, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007C330[] = {
	{ 217.3333f, 100, -3100 },
	{ 217.3333f, 240, -3100 },
	{ 341.4444f, 100, -3100 },
	{ 341.4444f, 240, -3100 },
	{ 465.5555f, 94, -3100 },
	{ 465.5555f, 234, -3100 },
	{ 589.6666f, 83, -3100 },
	{ 589.6666f, 223, -3100 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007C390[] = {
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007C3F0 = { vertex_0007C330, normal_0007C390, LengthOfArray<Sint32>(vertex_0007C330), meshlist_0007C318, matlist_0007C2F0, LengthOfArray<Uint16>(meshlist_0007C318), LengthOfArray<Uint16>(matlist_0007C2F0), { 403.5f, 161.5f, -3100 }, 186.1667f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007C418 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007C3F0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007C44C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007C460[] = {
	0x8000u | 10, 1, 0, 3, 2, 5, 4, 9, 6, 8, 7,
	0x8000u | 10, 14, 7, 13, 6, 12, 4, 11, 2, 10, 0,
	0x8000u | 10, 10, 15, 11, 16, 12, 17, 13, 18, 14, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007C4A4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0007C460, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007C4BC[] = {
	{ -155, -140, -539.1302f },
	{ -155, -280, -539.1302f },
	{ -155, -140, -404.3477f },
	{ -155, -280, -404.3477f },
	{ -155, -140, -269.5651f },
	{ -155, -280, -269.5651f },
	{ -155, -140, -134.7825f },
	{ -155, -140, 0.000127f },
	{ -155, -280, 0.000127f },
	{ -155, -280, -134.7825f },
	{ -155, 0, -539.1302f },
	{ -155, 0, -404.3477f },
	{ -155, 0, -269.5651f },
	{ -155, 0, -134.7825f },
	{ -155, 0, 0.000127f },
	{ -155, 140, -539.1302f },
	{ -155, 140, -404.3477f },
	{ -155, 140, -269.5651f },
	{ -155, 140, -134.7825f },
	{ -155, 140, 0.000127f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007C5AC[] = {
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
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007C69C = { vertex_0007C4BC, normal_0007C5AC, LengthOfArray<Sint32>(vertex_0007C4BC), meshlist_0007C4A4, matlist_0007C44C, LengthOfArray<Uint16>(meshlist_0007C4A4), LengthOfArray<Uint16>(matlist_0007C44C), { -155, -70, -269.5651f }, 341.7095f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007C6C4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007C69C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007C6F8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007C70C[] = {
	8, 7, 6, 4, 5, 3, 2, 1, 0
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007C720[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0007C70C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007C738[] = {
	{ 589.6666f, 83, -3100 },
	{ 589.6666f, 223, -3100 },
	{ 713.7778f, 72, -3100 },
	{ 713.7778f, 212, -3100 },
	{ 837.8889f, 202, -3100 },
	{ 837.8889f, 62, -3100 },
	{ 962, 53, -3100 },
	{ 962, 193, -3100 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007C798[] = {
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007C7F8 = { vertex_0007C738, normal_0007C798, LengthOfArray<Sint32>(vertex_0007C738), meshlist_0007C720, matlist_0007C6F8, LengthOfArray<Uint16>(meshlist_0007C720), LengthOfArray<Uint16>(matlist_0007C6F8), { 775.8333f, 138, -3100 }, 186.1666f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007C820 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007C7F8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007C854[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007C868[] = {
	0x8000u | 10, 9, 4, 8, 3, 7, 2, 6, 1, 5, 0,
	0x8000u | 10, 5, 10, 6, 12, 7, 14, 8, 16, 9, 18,
	0x8000u | 10, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007C8AC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0007C868, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007C8C4[] = {
	{ -155, 140, -2695.652f },
	{ -155, 140, -2560.869f },
	{ -155, 140, -2426.087f },
	{ -155, 140, -2291.304f },
	{ -155, 140, -2156.521f },
	{ -155, 280, -2695.652f },
	{ -155, 280, -2560.869f },
	{ -155, 280, -2426.087f },
	{ -155, 280, -2291.304f },
	{ -155, 280, -2156.521f },
	{ -155, 420, -2695.652f },
	{ -155, 560, -2695.652f },
	{ -155, 420, -2560.869f },
	{ -155, 560, -2560.869f },
	{ -155, 420, -2426.087f },
	{ -155, 560, -2426.087f },
	{ -155, 420, -2291.304f },
	{ -155, 560, -2291.304f },
	{ -155, 420, -2156.521f },
	{ -155, 560, -2156.521f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007C9B4[] = {
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
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007CAA4 = { vertex_0007C8C4, normal_0007C9B4, LengthOfArray<Sint32>(vertex_0007C8C4), meshlist_0007C8AC, matlist_0007C854, LengthOfArray<Uint16>(meshlist_0007C8AC), LengthOfArray<Uint16>(matlist_0007C854), { -155, 350, -2426.087f }, 341.7095f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007CACC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007CAA4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007CB00[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007CB14[] = {
	8, 3, 2, 0, 1, 4, 5, 6, 7
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007CB28[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0007CB14, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007CB40[] = {
	{ -30.88889f, 100, -3100 },
	{ -30.88889f, 240, -3100 },
	{ -155, 240, -3100 },
	{ -155, 100, -3100 },
	{ 93.22221f, 100, -3100 },
	{ 93.22221f, 240, -3100 },
	{ 217.3333f, 100, -3100 },
	{ 217.3333f, 240, -3100 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007CBA0[] = {
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007CC00 = { vertex_0007CB40, normal_0007CBA0, LengthOfArray<Sint32>(vertex_0007CB40), meshlist_0007CB28, matlist_0007CB00, LengthOfArray<Uint16>(meshlist_0007CB28), LengthOfArray<Uint16>(matlist_0007CB00), { 31.16666f, 170, -3100 }, 186.1666f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007CC28 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007CC00, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007CC5C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007CC70[] = {
	0x8000u | 10, 5, 10, 6, 12, 7, 14, 8, 16, 9, 18,
	0x8000u | 10, 9, 4, 8, 3, 7, 2, 6, 1, 5, 0,
	0x8000u | 10, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007CCB4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0007CC70, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007CCCC[] = {
	{ -155, 140, -2156.521f },
	{ -155, 140, -2021.739f },
	{ -155, 140, -1886.956f },
	{ -155, 140, -1752.174f },
	{ -155, 140, -1617.391f },
	{ -155, 280, -2156.521f },
	{ -155, 280, -2021.739f },
	{ -155, 280, -1886.956f },
	{ -155, 280, -1752.174f },
	{ -155, 280, -1617.391f },
	{ -155, 420, -2156.521f },
	{ -155, 560, -2156.521f },
	{ -155, 420, -2021.739f },
	{ -155, 560, -2021.739f },
	{ -155, 420, -1886.956f },
	{ -155, 560, -1886.956f },
	{ -155, 420, -1752.174f },
	{ -155, 560, -1752.174f },
	{ -155, 420, -1617.391f },
	{ -155, 560, -1617.391f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007CDBC[] = {
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
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007CEAC = { vertex_0007CCCC, normal_0007CDBC, LengthOfArray<Sint32>(vertex_0007CCCC), meshlist_0007CCB4, matlist_0007CC5C, LengthOfArray<Uint16>(meshlist_0007CCB4), LengthOfArray<Uint16>(matlist_0007CC5C), { -155, 350, -1886.956f }, 341.7095f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007CED4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007CEAC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007CF08[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007CF1C[] = {
	0x8000u | 10, 5, 10, 6, 12, 7, 14, 8, 16, 9, 18,
	0x8000u | 10, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
	0x8000u | 10, 0, 5, 1, 6, 2, 7, 3, 8, 4, 9
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007CF60[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0007CF1C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007CF78[] = {
	{ -155, 140, -1617.391f },
	{ -155, 140, -1482.609f },
	{ -155, 140, -1347.826f },
	{ -155, 140, -1213.043f },
	{ -155, 140, -1078.261f },
	{ -155, 280, -1617.391f },
	{ -155, 280, -1482.609f },
	{ -155, 280, -1347.826f },
	{ -155, 280, -1213.043f },
	{ -155, 280, -1078.261f },
	{ -155, 420, -1617.391f },
	{ -155, 560, -1617.391f },
	{ -155, 420, -1482.609f },
	{ -155, 560, -1482.609f },
	{ -155, 420, -1347.826f },
	{ -155, 560, -1347.826f },
	{ -155, 420, -1213.043f },
	{ -155, 560, -1213.043f },
	{ -155, 420, -1078.261f },
	{ -155, 560, -1078.261f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007D068[] = {
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
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007D158 = { vertex_0007CF78, normal_0007D068, LengthOfArray<Sint32>(vertex_0007CF78), meshlist_0007CF60, matlist_0007CF08, LengthOfArray<Uint16>(meshlist_0007CF60), LengthOfArray<Uint16>(matlist_0007CF08), { -155, 350, -1347.826f }, 341.7095f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007D180 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007D158, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007D1B4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007D1C8[] = {
	8, 2, 3, 6, 7, 12, 14, 13, 15,
	8, 13, 11, 12, 8, 6, 5, 2, 1,
	8, 11, 10, 8, 9, 5, 4, 1, 0
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007D200[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0007D1C8, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007D218[] = {
	{ -155, 140, -3100 },
	{ -155, 140, -2965.217f },
	{ -155, 140, -2830.434f },
	{ -155, 140, -2695.652f },
	{ -155, 280, -3100 },
	{ -155, 280, -2965.217f },
	{ -155, 280, -2830.434f },
	{ -155, 280, -2695.652f },
	{ -155, 420, -2965.217f },
	{ -155, 420, -3100 },
	{ -155, 560, -3100 },
	{ -155, 560, -2965.217f },
	{ -155, 420, -2830.434f },
	{ -155, 560, -2830.434f },
	{ -155, 420, -2695.652f },
	{ -155, 560, -2695.652f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007D2D8[] = {
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
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007D398 = { vertex_0007D218, normal_0007D2D8, LengthOfArray<Sint32>(vertex_0007D218), meshlist_0007D200, matlist_0007D1B4, LengthOfArray<Uint16>(meshlist_0007D200), LengthOfArray<Uint16>(matlist_0007D1B4), { -155, 350, -2897.826f }, 291.5035f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007D3C0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007D398, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007D3F4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007D408[] = {
	0x8000u | 10, 5, 10, 6, 12, 7, 14, 8, 16, 9, 18,
	0x8000u | 10, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
	0x8000u | 10, 0, 5, 1, 6, 2, 7, 3, 8, 4, 9
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007D44C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0007D408, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007D464[] = {
	{ -155, 140, -1078.261f },
	{ -155, 140, -943.4781f },
	{ -155, 140, -808.6956f },
	{ -155, 140, -673.9129f },
	{ -155, 140, -539.1302f },
	{ -155, 280, -1078.261f },
	{ -155, 280, -943.4781f },
	{ -155, 280, -808.6956f },
	{ -155, 280, -673.9129f },
	{ -155, 280, -539.1302f },
	{ -155, 420, -1078.261f },
	{ -155, 560, -1078.261f },
	{ -155, 420, -943.4781f },
	{ -155, 560, -943.4781f },
	{ -155, 420, -808.6956f },
	{ -155, 560, -808.6956f },
	{ -155, 420, -673.9129f },
	{ -155, 560, -673.9129f },
	{ -155, 420, -539.1302f },
	{ -155, 560, -539.1302f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007D554[] = {
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
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007D644 = { vertex_0007D464, normal_0007D554, LengthOfArray<Sint32>(vertex_0007D464), meshlist_0007D44C, matlist_0007D3F4, LengthOfArray<Uint16>(meshlist_0007D44C), LengthOfArray<Uint16>(matlist_0007D3F4), { -155, 350, -808.6956f }, 341.7095f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007D66C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007D644, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007D6A0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007D6B4[] = {
	8, 3, 5, 0, 4, 9, 12, 10, 13,
	8, 5, 7, 4, 6, 12, 14, 13, 15,
	8, 10, 11, 9, 8, 0, 1, 3, 2
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007D6EC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0007D6B4, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007D704[] = {
	{ -840, 39.66667f, -4600 },
	{ -980, 39.66667f, -4600 },
	{ -980, -75, -4600 },
	{ -840, -75, -4600 },
	{ -700, 39.66667f, -4600 },
	{ -700, -75, -4600 },
	{ -560, 39.66667f, -4600 },
	{ -560, -75, -4600 },
	{ -980, 131.3333f, -4637 },
	{ -840, 131.3333f, -4637 },
	{ -840, 251, -4637 },
	{ -980, 251, -4637 },
	{ -700, 131.3333f, -4637 },
	{ -700, 251, -4637 },
	{ -560, 131.3333f, -4637 },
	{ -560, 251, -4637 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007D7C4[] = {
	{ 0, 0.190645f, 0.981659f },
	{ 0, 0.190644f, 0.981659f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0.190645f, 0.981659f },
	{ 0, 0, 1 },
	{ 0, 0.190644f, 0.981659f },
	{ 0, 0, 1 },
	{ 0, 0.190644f, 0.981659f },
	{ 0, 0.190645f, 0.981659f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0.190645f, 0.981659f },
	{ 0, 0, 1 },
	{ 0, 0.190644f, 0.981659f },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007D884 = { vertex_0007D704, normal_0007D7C4, LengthOfArray<Sint32>(vertex_0007D704), meshlist_0007D6EC, matlist_0007D6A0, LengthOfArray<Uint16>(meshlist_0007D6EC), LengthOfArray<Uint16>(matlist_0007D6A0), { -770, 88, -4618.5f }, 210.8133f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007D8AC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007D884, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007D8E0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007D8F4[] = {
	0x8000u | 6, 4, 3, 0, 5, 1, 2
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007D904[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0007D8F4, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007D91C[] = {
	{ -245, 186.1f, -99.99986f },
	{ -245, 160.8818f, -144.748f },
	{ -245, 100, -163.2834f },
	{ -245, 100, -36.71638f },
	{ -245, 160.8819f, -55.2517f },
	{ -245, 100, -99.99986f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007D964[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007D9AC = { vertex_0007D91C, normal_0007D964, LengthOfArray<Sint32>(vertex_0007D91C), meshlist_0007D904, matlist_0007D8E0, LengthOfArray<Uint16>(meshlist_0007D904), LengthOfArray<Uint16>(matlist_0007D8E0), { -245, 143.05f, -99.99988f }, 76.53824f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007D9D4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007D9AC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007DA08[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007DA1C[] = {
	0x8000u | 6, 4, 3, 0, 5, 1, 2
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007DA2C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0007DA1C, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007DA44[] = {
	{ -245, 186.1f, -3000 },
	{ -245, 160.8818f, -3044.748f },
	{ -245, 100, -3063.283f },
	{ -245, 100, -2936.717f },
	{ -245, 160.8819f, -2955.252f },
	{ -245, 100, -3000 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007DA8C[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007DAD4 = { vertex_0007DA44, normal_0007DA8C, LengthOfArray<Sint32>(vertex_0007DA44), meshlist_0007DA2C, matlist_0007DA08, LengthOfArray<Uint16>(meshlist_0007DA2C), LengthOfArray<Uint16>(matlist_0007DA08), { -245, 143.05f, -3000 }, 76.53819f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007DAFC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007DAD4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007DB30[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007DB44[] = {
	10, 12, 13, 11, 10, 8, 9, 4, 5, 1, 2,
	0x8000u | 22, 17, 5, 7, 2, 3, 1, 0, 4, 6, 8, 16, 11, 19, 12, 14, 13, 15, 10, 18, 9, 17, 5
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007DB88[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0007DB44, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007DBA0[] = {
	{ -467, -1.1f, -1 },
	{ -467, 10.7f, -1 },
	{ -467, 10.7f, -3 },
	{ -467, -1.1f, -3 },
	{ -394.6666f, 42.35356f, -1 },
	{ -394.6666f, 42.35356f, -3 },
	{ -394.6666f, 30.22401f, -1 },
	{ -394.6666f, 30.22401f, -3 },
	{ -350, 61.9f, -1 },
	{ -350, 61.9f, -3 },
	{ -322.3333f, 61.9f, -3 },
	{ -322.3333f, 61.9f, -1 },
	{ -250, 61.9f, -1 },
	{ -250, 61.9f, -3 },
	{ -250, 50, -1 },
	{ -250, 50, -3 },
	{ -349, 50, -1 },
	{ -349, 50, -3 },
	{ -322.3333f, 50, -3 },
	{ -322.3333f, 50, -1 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007DC90[] = {
	{ -0.803906f, 0, 0.5947559f },
	{ -0.6681589f, 0.436944f, 0.602199f },
	{ -0.6681589f, 0.436944f, -0.602199f },
	{ -0.803906f, 0, -0.5947559f },
	{ -0.28348f, 0.647796f, 0.7071069f },
	{ -0.28348f, 0.647796f, -0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ -0.153168f, 0.732071f, 0.663786f },
	{ -0.153168f, 0.732071f, -0.663786f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007DD80 = { vertex_0007DBA0, normal_0007DC90, LengthOfArray<Sint32>(vertex_0007DBA0), meshlist_0007DB88, matlist_0007DB30, LengthOfArray<Uint16>(meshlist_0007DB88), LengthOfArray<Uint16>(matlist_0007DB30), { -358.5f, 30.4f, -2 }, 108.5046f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007DDA8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007DD80, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007DDDC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007DDF0[] = {
	4, 1, 9, 8, 10,
	0x8000u | 5, 12, 5, 4, 2, 3,
	0x8000u | 15, 6, 13, 14, 10, 15, 8, 0, 1, 7, 2, 6, 5, 13, 12, 11,
	0x8000u | 5, 6, 14, 7, 15, 0,
	3, 10, 11, 13
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007DE3C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0007DDF0, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007DE54[] = {
	{ -71, 94, -3360.4f },
	{ -80, 61, -3364.4f },
	{ -80, 61, -3374 },
	{ -80, 17.5f, -3374 },
	{ -80, 17.5f, -3406.5f },
	{ -80, 61, -3398 },
	{ -71, 85, -3391 },
	{ -71, 93, -3378 },
	{ -12.12502f, 94, -3360.4f },
	{ -3.125035f, 61, -3364.4f },
	{ -3.125035f, 61, -3374 },
	{ -3.125035f, 17.5f, -3374 },
	{ -3.125035f, 17.5f, -3406.5f },
	{ -3.125035f, 61, -3398 },
	{ -12.12502f, 85, -3391 },
	{ -12.12502f, 93, -3378 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007DF14[] = {
	{ -0.485616f, 0.617783f, 0.6184829f },
	{ -0.7783239f, 0.138027f, 0.612503f },
	{ -0.976945f, 0.211577f, -0.028514f },
	{ -1, 0, 0 },
	{ -0.65942f, 0.144172f, -0.737821f },
	{ -0.699007f, 0.265271f, -0.664093f },
	{ -0.480695f, 0.607923f, -0.631951f },
	{ -0.546514f, 0.807851f, -0.220679f },
	{ 0.485616f, 0.617783f, 0.6184829f },
	{ 0.7783239f, 0.138027f, 0.612503f },
	{ 0.979234f, 0.192697f, -0.062999f },
	{ 1, 0, 0 },
	{ 0.65942f, 0.144172f, -0.737821f },
	{ 0.687524f, 0.241923f, -0.684678f },
	{ 0.474145f, 0.564761f, -0.675449f },
	{ 0.550738f, 0.796477f, -0.249625f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007DFD4 = { vertex_0007DE54, normal_0007DF14, LengthOfArray<Sint32>(vertex_0007DE54), meshlist_0007DE3C, matlist_0007DDDC, LengthOfArray<Uint16>(meshlist_0007DE3C), LengthOfArray<Uint16>(matlist_0007DDDC), { -41.56252f, 55.75f, -3383.45f }, 44.81895f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007DFFC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007DFD4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007E030[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007E044[] = {
	0x8000u | 5, 12, 5, 4, 2, 3,
	0x8000u | 15, 6, 13, 14, 10, 15, 8, 0, 1, 7, 2, 6, 5, 13, 12, 11,
	0x8000u | 5, 6, 14, 7, 15, 0,
	3, 10, 11, 13,
	4, 10, 8, 9, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007E090[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0007E044, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007E0A8[] = {
	{ 297, 94, -3360.4f },
	{ 288, 61, -3364.4f },
	{ 288, 61, -3374 },
	{ 288, 17.5f, -3374 },
	{ 288, 17.5f, -3406.5f },
	{ 288, 61, -3398 },
	{ 297, 85, -3391 },
	{ 297, 93, -3378 },
	{ 355.8749f, 94, -3360.4f },
	{ 364.8749f, 61, -3364.4f },
	{ 364.8749f, 61, -3374 },
	{ 364.8749f, 17.5f, -3374 },
	{ 364.8749f, 17.5f, -3406.5f },
	{ 364.8749f, 61, -3398 },
	{ 355.8749f, 85, -3391 },
	{ 355.8749f, 93, -3378 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007E168[] = {
	{ -0.485616f, 0.617783f, 0.6184829f },
	{ -0.7783239f, 0.138027f, 0.612503f },
	{ -0.976945f, 0.211577f, -0.028514f },
	{ -1, 0, 0 },
	{ -0.65942f, 0.144172f, -0.737821f },
	{ -0.699007f, 0.265271f, -0.664093f },
	{ -0.480695f, 0.607923f, -0.631951f },
	{ -0.546514f, 0.807851f, -0.220679f },
	{ 0.485616f, 0.617783f, 0.6184829f },
	{ 0.7783239f, 0.138027f, 0.612503f },
	{ 0.979234f, 0.192698f, -0.062999f },
	{ 1, 0, 0 },
	{ 0.65942f, 0.144172f, -0.737821f },
	{ 0.687524f, 0.241924f, -0.684678f },
	{ 0.474145f, 0.564761f, -0.675449f },
	{ 0.550738f, 0.796477f, -0.249625f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007E228 = { vertex_0007E0A8, normal_0007E168, LengthOfArray<Sint32>(vertex_0007E0A8), meshlist_0007E090, matlist_0007E030, LengthOfArray<Uint16>(meshlist_0007E090), LengthOfArray<Uint16>(matlist_0007E030), { 326.4375f, 55.75f, -3383.45f }, 44.81896f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007E250 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007E228, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007E284[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007E298[] = {
	0x8000u | 5, 12, 5, 4, 2, 3,
	0x8000u | 15, 6, 13, 14, 10, 15, 8, 0, 1, 7, 2, 6, 5, 13, 12, 11,
	0x8000u | 5, 6, 14, 7, 15, 0,
	3, 10, 11, 13,
	4, 10, 8, 9, 1
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007E2E4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0007E298, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007E2FC[] = {
	{ -362.2002f, 94, -3728.367f },
	{ -361.1833f, 61, -3738.163f },
	{ -345.9697f, 61, -3743.117f },
	{ -345.9697f, 17.5f, -3743.117f },
	{ -315.0667f, 17.5f, -3753.18f },
	{ -323.149f, 61, -3750.549f },
	{ -327.0184f, 85, -3739.823f },
	{ -339.3796f, 93, -3735.798f },
	{ -343.971f, 94, -3672.385f },
	{ -337.381f, 61, -3665.066f },
	{ -322.1672f, 61, -3670.02f },
	{ -322.1672f, 17.5f, -3670.02f },
	{ -291.2643f, 17.5f, -3680.083f },
	{ -299.3466f, 61, -3677.451f },
	{ -308.7892f, 85, -3683.842f },
	{ -321.1504f, 93, -3679.816f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007E3BC[] = {
	{ -0.742376f, 0.613441f, -0.269384f },
	{ -0.824511f, 0.13753f, -0.548878f },
	{ -0.27647f, 0.211453f, -0.937471f },
	{ -0.30963f, 0, -0.950857f },
	{ 0.497388f, 0.144172f, -0.855464f },
	{ 0.415026f, 0.265271f, -0.8702779f },
	{ 0.452059f, 0.607923f, -0.652742f },
	{ 0.035812f, 0.8100269f, -0.585297f },
	{ -0.44142f, 0.613439f, 0.65486f },
	{ -0.343235f, 0.137529f, 0.929126f },
	{ 0.362051f, 0.19258f, 0.912048f },
	{ 0.30963f, 0, 0.950857f },
	{ 0.905737f, 0.144172f, 0.398565f },
	{ 0.863906f, 0.241924f, 0.441746f },
	{ 0.78906f, 0.564762f, 0.241718f },
	{ 0.402559f, 0.798773f, 0.447111f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007E47C = { vertex_0007E2FC, normal_0007E3BC, LengthOfArray<Sint32>(vertex_0007E2FC), meshlist_0007E2E4, matlist_0007E284, LengthOfArray<Uint16>(meshlist_0007E2E4), LengthOfArray<Uint16>(matlist_0007E284), { -326.7322f, 55.75f, -3709.123f }, 58.34451f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007E4A4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007E47C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007E4D8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007E4EC[] = {
	0x8000u | 6, 5, 6, 2, 7, 1, 0,
	0x8000u | 6, 15, 14, 10, 13, 11, 12,
	0x8000u | 12, 4, 12, 5, 13, 6, 14, 7, 15, 0, 8, 1, 9,
	4, 5, 4, 2, 3,
	4, 15, 8, 10, 9
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007E538[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0007E4EC, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007E550[] = {
	{ 638.2153f, 94, -3690.318f },
	{ 632.6948f, 61, -3682.162f },
	{ 616.9443f, 61, -3684.976f },
	{ 616.9443f, 17.5f, -3684.976f },
	{ 584.9509f, 17.5f, -3690.692f },
	{ 593.3183f, 61, -3689.197f },
	{ 601.7921f, 85, -3696.825f },
	{ 614.5895f, 93, -3694.539f },
	{ 648.5703f, 94, -3748.275f },
	{ 646.2155f, 61, -3757.838f },
	{ 630.465f, 61, -3760.653f },
	{ 630.465f, 17.5f, -3760.653f },
	{ 598.4716f, 17.5f, -3766.368f },
	{ 606.8391f, 61, -3764.873f },
	{ 612.1471f, 85, -3754.783f },
	{ 624.9444f, 93, -3752.496f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007E610[] = {
	{ 0.527307f, 0.613439f, 0.587912f },
	{ 0.467785f, 0.137527f, 0.873077f },
	{ -0.198789f, 0.211452f, 0.9569589f },
	{ -0.175879f, 0.000001f, 0.984412f },
	{ -0.842297f, 0.144173f, 0.519374f },
	{ -0.776683f, 0.265271f, 0.57131f },
	{ -0.706644f, 0.6079209f, 0.362058f },
	{ -0.307852f, 0.8100269f, 0.499083f },
	{ 0.6982639f, 0.61344f, -0.368941f },
	{ 0.7411709f, 0.137531f, -0.657078f },
	{ 0.11134f, 0.192583f, -0.974944f },
	{ 0.175879f, 0.000002f, -0.984412f },
	{ -0.61034f, 0.144173f, -0.778909f },
	{ -0.553085f, 0.241924f, -0.797226f },
	{ -0.5815279f, 0.564761f, -0.58555f },
	{ -0.143836f, 0.798772f, -0.584188f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007E6D0 = { vertex_0007E550, normal_0007E610, LengthOfArray<Sint32>(vertex_0007E550), meshlist_0007E538, matlist_0007E4D8, LengthOfArray<Uint16>(meshlist_0007E538), LengthOfArray<Uint16>(matlist_0007E4D8), { 616.7606f, 55.75f, -3724.265f }, 56.88372f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007E6F8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007E6D0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007E72C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007E754[] = {
	6, 3, 2, 1, 0, 9, 8,
	6, 7, 3, 5, 1, 11, 9,
	6, 2, 6, 0, 4, 8, 10
};

extern "C" __declspec(dllexport) Sint16 poly_0007E77E[] = {
	4, 7, 6, 3, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_0007E788[] = {
	{ 254, 60 },
	{ 254, 194 },
	{ 173, 51 },
	{ 173, 203 },
	{ 0, 30 },
	{ 0, 224 },
	{ 254, 0 },
	{ 254, 60 },
	{ 173, 0 },
	{ 173, 51 },
	{ 0 },
	{ 0, 30 },
	{ 254, 194 },
	{ 254, 255 },
	{ 173, 203 },
	{ 173, 255 },
	{ 0, 224 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0007E7D0[] = {
	{ 0, 255 },
	{ 0, -255 },
	{ 254, 255 },
	{ 254, -255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007E7E0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0007E754, NULL, NULL, NULL, uv_0007E788, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0007E77E, NULL, NULL, NULL, uv_0007E7D0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007E810[] = {
	{ -858, -14, -3429 },
	{ -858, -14, -3370 },
	{ -851, 0, -3429 },
	{ -851, 0, -3370 },
	{ -832, -14, -3429 },
	{ -832, -14, -3370 },
	{ -828, 0, -3429 },
	{ -828, 0, -3370 },
	{ -858, -63, -3429 },
	{ -858, -63, -3370 },
	{ -842, -71, -3429 },
	{ -842, -71, -3370 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007E8A0[] = {
	{ -0.732137f, 0.172834f, -0.658865f },
	{ -0.732137f, 0.172834f, 0.658865f },
	{ -0.418309f, 0.676838f, -0.605729f },
	{ -0.418309f, 0.676838f, 0.605729f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0.772196f, -0.635385f },
	{ 0, 0.772196f, 0.635385f },
	{ -0.611137f, 0, -0.7915249f },
	{ -0.611137f, 0, 0.7915249f },
	{ 0, 0, -1 },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007E930 = { vertex_0007E810, normal_0007E8A0, LengthOfArray<Sint32>(vertex_0007E810), meshlist_0007E7E0, matlist_0007E72C, LengthOfArray<Uint16>(meshlist_0007E7E0), LengthOfArray<Uint16>(matlist_0007E72C), { -843, -35.5f, -3399.5f }, 46.15734f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007E958 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007E930, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007E98C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007E9A0[] = {
	8, 16, 17, 24, 25, 38, 40, 39, 41,
	12, 5, 7, 4, 6, 13, 14, 21, 22, 32, 34, 33, 35,
	12, 7, 9, 6, 8, 14, 15, 22, 23, 34, 36, 35, 37,
	12, 33, 31, 32, 30, 21, 20, 13, 12, 4, 2, 5, 3,
	6, 25, 18, 40, 26, 41, 27,
	12, 31, 29, 30, 28, 20, 19, 12, 11, 2, 0, 3, 1,
	10, 8, 10, 15, 16, 23, 24, 36, 38, 37, 39
};

extern "C" __declspec(dllexport) NJS_TEX uv_0007EA40[] = {
	{ 4998, -153 },
	{ 5193, -153 },
	{ 4966, -356 },
	{ 5168, -356 },
	{ 4957, -561 },
	{ 5161, -561 },
	{ 4957, -765 },
	{ 5161, -765 },
	{ 4689, 254 },
	{ 4869, 254 },
	{ 4518, 50 },
	{ 4735, 50 },
	{ 4422, -153 },
	{ 4651, -153 },
	{ 4376, -356 },
	{ 4608, -356 },
	{ 4367, -560 },
	{ 4598, -560 },
	{ 4367, -764 },
	{ 4598, -764 },
	{ 4869, 254 },
	{ 5013, 254 },
	{ 4735, 50 },
	{ 4899, 50 },
	{ 4651, -153 },
	{ 4821, -153 },
	{ 4608, -356 },
	{ 4781, -356 },
	{ 4598, -560 },
	{ 4773, -561 },
	{ 4598, -764 },
	{ 4773, -765 },
	{ 4367, -764 },
	{ 4043, -764 },
	{ 4367, -560 },
	{ 4043, -560 },
	{ 4376, -356 },
	{ 4048, -356 },
	{ 4422, -153 },
	{ 4079, -153 },
	{ 4518, 50 },
	{ 4151, 50 },
	{ 4689, 254 },
	{ 4326, 254 },
	{ 69, -356 },
	{ 346, -356 },
	{ 61, -561 },
	{ 346, -561 },
	{ 61, -765 },
	{ 346, -765 },
	{ 4043, -764 },
	{ 3481, -764 },
	{ 4043, -560 },
	{ 3481, -560 },
	{ 4048, -356 },
	{ 3476, -356 },
	{ 4079, -153 },
	{ 3448, -153 },
	{ 4151, 50 },
	{ 3380, 50 },
	{ 4326, 254 },
	{ 3214, 254 },
	{ 4899, 50 },
	{ 5056, 50 },
	{ 4821, -153 },
	{ 4998, -153 },
	{ 4781, -356 },
	{ 4966, -356 },
	{ 4773, -561 },
	{ 4957, -561 },
	{ 4773, -765 },
	{ 4957, -765 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007EB60[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_0007E9A0, NULL, NULL, NULL, uv_0007EA40, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007EB78[] = {
	{ 1005, 50.00002f, -3884 },
	{ 905, -14.99998f, -3884 },
	{ 1005, 50.00002f, -3745 },
	{ 905, -14.99998f, -3745 },
	{ 1005, 40.00003f, -3610 },
	{ 905, -24.99997f, -3610 },
	{ 1005, 10.00003f, -3475 },
	{ 905, -54.99997f, -3475 },
	{ 1005, -54.99997f, -3385 },
	{ 905, -120, -3385 },
	{ 1005, -145, -3345 },
	{ 1105, 95.00002f, -3884 },
	{ 1105, 95.00002f, -3745 },
	{ 1105, 85.00002f, -3610 },
	{ 1105, 55.00003f, -3475 },
	{ 1105, -9.999969f, -3385 },
	{ 1105, -110, -3345 },
	{ 1105, -230, -3345 },
	{ 1205, -344.9999f, -3385 },
	{ 1205, 120, -3884 },
	{ 1205, 120, -3745 },
	{ 1205, 110, -3610 },
	{ 1205, 80.00003f, -3475 },
	{ 1205, 15.00003f, -3385 },
	{ 1205, -89.99996f, -3345 },
	{ 1205, -215, -3345 },
	{ 1305, -344.9999f, -3385 },
	{ 1405, -344.9999f, -3385 },
	{ 1305, 125, -3884 },
	{ 1405, 125, -3884 },
	{ 1305, 125, -3745 },
	{ 1405, 125, -3745 },
	{ 1305, 115, -3610 },
	{ 1405, 115, -3610 },
	{ 1305, 85.00003f, -3475 },
	{ 1405, 85.00003f, -3475 },
	{ 1305, 20.00003f, -3385 },
	{ 1405, 20.00003f, -3385 },
	{ 1305, -84.99996f, -3345 },
	{ 1405, -84.99996f, -3345 },
	{ 1305, -210, -3345 },
	{ 1405, -210, -3345 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007ED70[] = {
	{ -0.479087f, 0.877767f, 0 },
	{ -0.544988f, 0.838444f, 0 },
	{ -0.478082f, 0.8777159f, 0.032437f },
	{ -0.54472f, 0.83803f, 0.031401f },
	{ -0.473746f, 0.871272f, 0.128256f },
	{ -0.540659f, 0.831783f, 0.1258f },
	{ -0.442819f, 0.817612f, 0.367997f },
	{ -0.504384f, 0.7759759f, 0.378758f },
	{ -0.337111f, 0.627543f, 0.701816f },
	{ -0.46618f, 0.7172f, 0.517978f },
	{ -0.172023f, 0.382272f, 0.907897f },
	{ -0.327746f, 0.944766f, 0 },
	{ -0.326905f, 0.9444129f, 0.034875f },
	{ -0.323466f, 0.936188f, 0.137556f },
	{ -0.299879f, 0.8711759f, 0.388747f },
	{ -0.21341f, 0.607519f, 0.765099f },
	{ -0.09099f, 0.247406f, 0.9646299f },
	{ 0, 0, 1 },
	{ 0.014449f, -0.288974f, 0.9572279f },
	{ -0.146935f, 0.989146f, 0 },
	{ -0.146508f, 0.988537f, 0.036483f },
	{ -0.144818f, 0.978976f, 0.143646f },
	{ -0.133536f, 0.905926f, 0.401828f },
	{ -0.09304f, 0.617713f, 0.78088f },
	{ -0.030178f, 0.19113f, 0.981101f },
	{ 0.004859f, -0.09718499f, 0.995254f },
	{ 0.007225f, -0.28654f, 0.958041f },
	{ 0, -0.284088f, 0.958798f },
	{ -0.024977f, 0.999688f, 0 },
	{ 0, 1, 0 },
	{ -0.024945f, 0.999007f, 0.036928f },
	{ 0, 0.999317f, 0.036961f },
	{ -0.024683f, 0.98904f, 0.145573f },
	{ 0, 0.989317f, 0.145783f },
	{ -0.022748f, 0.912536f, 0.408364f },
	{ 0, 0.91224f, 0.409656f },
	{ -0.015316f, 0.6116379f, 0.79099f },
	{ 0, 0.608878f, 0.793264f },
	{ -0.004661f, 0.183762f, 0.98296f },
	{ 0, 0.180987f, 0.983486f },
	{ 0.003538f, -0.142521f, 0.989785f },
	{ 0, -0.14353f, 0.989646f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007EF68 = { vertex_0007EB78, normal_0007ED70, LengthOfArray<Sint32>(vertex_0007EB78), meshlist_0007EB60, matlist_0007E98C, LengthOfArray<Uint16>(meshlist_0007EB60), LengthOfArray<Uint16>(matlist_0007E98C), { 1155, -110, -3614.5f }, 367.6006f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007EF90 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007EF68, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007EFC4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007EFD8[] = {
	12, 31, 29, 30, 28, 19, 18, 12, 11, 3, 1, 4, 2,
	10, 29, 27, 28, 26, 18, 17, 11, 10, 1, 0,
	12, 6, 8, 5, 7, 13, 14, 20, 21, 32, 34, 33, 35,
	8, 27, 25, 26, 24, 17, 16, 10, 9,
	6, 25, 23, 24, 22, 16, 15,
	12, 33, 31, 32, 30, 20, 19, 13, 12, 5, 3, 6, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_0007F05C[] = {
	{ 2886, -764 },
	{ 2709, -764 },
	{ 2886, -560 },
	{ 2709, -560 },
	{ 2879, -356 },
	{ 2702, -356 },
	{ 2836, -152 },
	{ 2661, -152 },
	{ 2753, 51 },
	{ 2585, 51 },
	{ 2623, 255 },
	{ 2472, 255 },
	{ 2709, -764 },
	{ 2531, -764 },
	{ 2709, -560 },
	{ 2531, -560 },
	{ 2702, -356 },
	{ 2522, -356 },
	{ 2661, -152 },
	{ 2489, -152 },
	{ 2585, 51 },
	{ 2432, 51 },
	{ 2785, 254 },
	{ 3214, 254 },
	{ 2958, 51 },
	{ 3380, 50 },
	{ 3055, -152 },
	{ 3448, -153 },
	{ 3102, -356 },
	{ 3476, -356 },
	{ 3109, -560 },
	{ 3481, -560 },
	{ 3109, -764 },
	{ 3481, -764 },
	{ 2531, -764 },
	{ 2326, -764 },
	{ 2531, -560 },
	{ 2326, -560 },
	{ 2522, -356 },
	{ 2319, -356 },
	{ 2489, -152 },
	{ 2295, -152 },
	{ 2326, -764 },
	{ 2054, -764 },
	{ 2326, -560 },
	{ 2054, -560 },
	{ 2319, -356 },
	{ 2054, -356 },
	{ 3109, -764 },
	{ 2886, -764 },
	{ 3109, -560 },
	{ 2886, -560 },
	{ 3102, -356 },
	{ 2879, -356 },
	{ 3055, -152 },
	{ 2836, -152 },
	{ 2958, 51 },
	{ 2753, 51 },
	{ 2785, 254 },
	{ 2623, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007F14C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_0007EFD8, NULL, NULL, NULL, uv_0007F05C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007F164[] = {
	{ 1005, -150, -4289 },
	{ 1005, -60, -4264 },
	{ 905, -125, -4264 },
	{ 1005, 9.999997f, -4174 },
	{ 905, -55, -4174 },
	{ 1005, 35, -4034 },
	{ 905, -30, -4034 },
	{ 1005, 50, -3884 },
	{ 905, -14.99999f, -3884 },
	{ 1105, -215, -4294 },
	{ 1105, -115, -4289 },
	{ 1105, -15, -4264 },
	{ 1105, 54.99999f, -4174 },
	{ 1105, 80, -4034 },
	{ 1105, 95.00001f, -3884 },
	{ 1205, -335, -4239 },
	{ 1205, -200, -4294 },
	{ 1205, -95.00001f, -4289 },
	{ 1205, 9.999995f, -4264 },
	{ 1205, 80, -4174 },
	{ 1205, 105, -4034 },
	{ 1205, 120, -3884 },
	{ 1305, -335, -4239 },
	{ 1405, -335, -4239 },
	{ 1305, -195, -4294 },
	{ 1405, -195, -4294 },
	{ 1305, -90.00001f, -4289 },
	{ 1405, -90.00001f, -4289 },
	{ 1305, 15, -4264 },
	{ 1405, 15, -4264 },
	{ 1305, 85, -4174 },
	{ 1405, 85, -4174 },
	{ 1305, 110, -4034 },
	{ 1405, 110, -4034 },
	{ 1305, 125, -3884 },
	{ 1405, 125, -3884 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007F314[] = {
	{ -0.088721f, 0.25349f, -0.9632609f },
	{ -0.304192f, 0.5768f, -0.758135f },
	{ -0.456499f, 0.702306f, -0.5462379f },
	{ -0.442585f, 0.818554f, -0.366181f },
	{ -0.503781f, 0.7750469f, -0.381454f },
	{ -0.474835f, 0.871699f, -0.12113f },
	{ -0.5412199f, 0.832646f, -0.117396f },
	{ -0.475223f, 0.875499f, -0.08755f },
	{ -0.543083f, 0.835512f, -0.083551f },
	{ -0.007308f, 0.048721f, -0.998786f },
	{ -0.049128f, 0.178057f, -0.982793f },
	{ -0.183856f, 0.544114f, -0.818619f },
	{ -0.299794f, 0.872467f, -0.385907f },
	{ -0.324354f, 0.9369479f, -0.130088f },
	{ -0.324569f, 0.941168f, -0.09411699f },
	{ 0, -0.371391f, -0.928477f },
	{ -0.003401f, -0.093393f, -0.9956239f },
	{ -0.018393f, 0.146197f, -0.9890839f },
	{ -0.081301f, 0.553394f, -0.8289419f },
	{ -0.133525f, 0.9075029f, -0.398258f },
	{ -0.145262f, 0.980004f, -0.135982f },
	{ -0.145337f, 0.984472f, -0.098447f },
	{ 0, -0.368523f, -0.9296179f },
	{ 0, -0.365652f, -0.930751f },
	{ -0.0006269999f, -0.160885f, -0.986973f },
	{ 0, -0.162649f, -0.986684f },
	{ -0.003577f, 0.141646f, -0.989911f },
	{ 0, 0.1402f, -0.990123f },
	{ -0.013669f, 0.544733f, -0.838498f },
	{ 0, 0.5411029f, -0.840956f },
	{ -0.022773f, 0.91393f, -0.405232f },
	{ 0, 0.913547f, -0.406734f },
	{ -0.024725f, 0.990176f, -0.137624f },
	{ 0, 0.990467f, -0.137749f },
	{ -0.024814f, 0.9947309f, -0.099473f },
	{ 0, 0.995037f, -0.09950399f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007F4C4 = { vertex_0007F164, normal_0007F314, LengthOfArray<Sint32>(vertex_0007F164), meshlist_0007F14C, matlist_0007EFC4, LengthOfArray<Uint16>(meshlist_0007F14C), LengthOfArray<Uint16>(matlist_0007EFC4), { 1155, -105, -4089 }, 323.3032f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007F4EC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007F4C4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007F520[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 44, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007F548[] = {
	4, 9, 8, 1, 0,
	4, 1, 0, 5, 4,
	6, 7, 6, 3, 2, 11, 10,
	4, 21, 20, 13, 12,
	4, 13, 12, 17, 16,
	6, 19, 18, 15, 14, 23, 22
};

extern "C" __declspec(dllexport) Sint16 poly_0007F58C[] = {
	0x8000u | 5, 5, 1, 3, 9, 11,
	3, 5, 7, 3,
	3, 4, 0, 6,
	0x8000u | 5, 6, 2, 0, 10, 8,
	0x8000u | 5, 17, 13, 15, 21, 23,
	3, 17, 19, 15,
	3, 16, 12, 18,
	0x8000u | 5, 18, 14, 12, 22, 20
};

extern "C" __declspec(dllexport) NJS_TEX uv_0007F5DC[] = {
	{ 209, -593 },
	{ 109, -593 },
	{ 209, 243 },
	{ 109, 243 },
	{ 209, -1262 },
	{ 109, -1262 },
	{ 209, -593 },
	{ 109, -593 },
	{ 209, -1262 },
	{ 109, -1262 },
	{ 209, -593 },
	{ 109, -593 },
	{ 209, 243 },
	{ 109, 243 },
	{ 209, -593 },
	{ 109, -593 },
	{ 209, 243 },
	{ 109, 243 },
	{ 209, -1262 },
	{ 109, -1262 },
	{ 209, -593 },
	{ 109, -593 },
	{ 209, -1262 },
	{ 109, -1262 },
	{ 209, -593 },
	{ 109, -593 },
	{ 209, 243 },
	{ 109, 243 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0007F64C[] = {
	{ 6120, 255 },
	{ 3400, 255 },
	{ 3431, 0 },
	{ 0, 255 },
	{ 0 },
	{ 6120, 255 },
	{ 6120, 0 },
	{ 3431, 0 },
	{ 6120, 255 },
	{ 3400, 255 },
	{ 6120, 0 },
	{ 6120, 0 },
	{ 3431, 0 },
	{ 3400, 255 },
	{ 0 },
	{ 0, 255 },
	{ 6120, 255 },
	{ 3400, 255 },
	{ 3431, 0 },
	{ 0, 255 },
	{ 0 },
	{ 6120, 255 },
	{ 6120, 0 },
	{ 3431, 0 },
	{ 6120, 255 },
	{ 3400, 255 },
	{ 6120, 0 },
	{ 6120, 0 },
	{ 3431, 0 },
	{ 3400, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007F6CC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_0007F548, NULL, NULL, NULL, uv_0007F5DC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 8, poly_0007F58C, NULL, NULL, NULL, uv_0007F64C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007F6FC[] = {
	{ -752, 47, -3450 },
	{ -752, 47, -3440 },
	{ -753, 51, -3450 },
	{ -753, 51, -3440 },
	{ -699, 54, -3450 },
	{ -699, 54, -3440 },
	{ -700, 58, -3450 },
	{ -700, 58, -3440 },
	{ -809, 12, -3450 },
	{ -809, 12, -3440 },
	{ -811, 15, -3450 },
	{ -811, 15, -3440 },
	{ -752, 47, -3360 },
	{ -752, 47, -3350 },
	{ -753, 51, -3360 },
	{ -753, 51, -3350 },
	{ -699, 54, -3360 },
	{ -699, 54, -3350 },
	{ -700, 58, -3360 },
	{ -700, 58, -3350 },
	{ -809, 12, -3360 },
	{ -809, 12, -3350 },
	{ -811, 15, -3360 },
	{ -811, 15, -3350 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007F81C[] = {
	{ 0.218482f, -0.615689f, -0.757095f },
	{ 0.218482f, -0.615689f, 0.757095f },
	{ -0.252159f, 0.7051989f, -0.662654f },
	{ -0.252159f, 0.7051989f, 0.662654f },
	{ 0.09599499f, -0.726822f, -0.680084f },
	{ 0.09599499f, -0.726822f, 0.680084f },
	{ -0.0893f, 0.67613f, -0.731351f },
	{ -0.0893f, 0.67613f, 0.731351f },
	{ 0.365633f, -0.59546f, -0.71536f },
	{ 0.365633f, -0.59546f, 0.71536f },
	{ -0.37678f, 0.607035f, -0.699675f },
	{ -0.37678f, 0.607035f, 0.699675f },
	{ 0.218482f, -0.615689f, -0.757095f },
	{ 0.218482f, -0.615689f, 0.757095f },
	{ -0.252159f, 0.7051989f, -0.662654f },
	{ -0.252159f, 0.7051989f, 0.662654f },
	{ 0.09599499f, -0.726822f, -0.680084f },
	{ 0.09599499f, -0.726822f, 0.680084f },
	{ -0.0893f, 0.67613f, -0.731351f },
	{ -0.0893f, 0.67613f, 0.731351f },
	{ 0.365633f, -0.59546f, -0.71536f },
	{ 0.365633f, -0.59546f, 0.71536f },
	{ -0.37678f, 0.607035f, -0.699675f },
	{ -0.37678f, 0.607035f, 0.699675f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007F93C = { vertex_0007F6FC, normal_0007F81C, LengthOfArray<Sint32>(vertex_0007F6FC), meshlist_0007F6CC, matlist_0007F520, LengthOfArray<Uint16>(meshlist_0007F6CC), LengthOfArray<Uint16>(matlist_0007F520), { -755, 35, -3400 }, 75.0733f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007F964 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007F93C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007F998[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007F9FC[] = {
	0x8000u | 12, 5, 13, 6, 14, 7, 15, 0, 8, 1, 9, 2, 10,
	0x8000u | 12, 18, 24, 17, 25, 16, 31, 23, 30, 22, 29, 21, 28
};

extern "C" __declspec(dllexport) Sint16 poly_0007FA30[] = {
	4, 11, 10, 3, 2,
	4, 13, 12, 5, 4
};

extern "C" __declspec(dllexport) Sint16 poly_0007FA44[] = {
	4, 27, 28, 20, 21,
	4, 24, 26, 18, 19
};

extern "C" __declspec(dllexport) Sint16 poly_0007FA58[] = {
	0x8000u | 12, 21, 10, 22, 9, 23, 8, 16, 15, 17, 14, 18, 13
};

extern "C" __declspec(dllexport) Sint16 poly_0007FA72[] = {
	4, 18, 19, 13, 12,
	4, 20, 21, 11, 10
};

extern "C" __declspec(dllexport) NJS_TEX uv_0007FA88[] = {
	{ 0, 255 },
	{ 0 },
	{ 31, 255 },
	{ 34, 0 },
	{ 60, 255 },
	{ 63, 0 },
	{ 452, 255 },
	{ 450, 0 },
	{ 478, 255 },
	{ 476, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 0, 255 },
	{ 0 },
	{ 30, 255 },
	{ 27, 0 },
	{ 60, 255 },
	{ 57, 0 },
	{ 452, 255 },
	{ 456, 0 },
	{ 480, 255 },
	{ 482, 0 },
	{ 510, 255 },
	{ 510, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0007FAE8[] = {
	{ 205, 255 },
	{ 145, 180 },
	{ 0, 255 },
	{ 0, 180 },
	{ 145, 180 },
	{ 205, 255 },
	{ 0, 180 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0007FB08[] = {
	{ 13, 155 },
	{ 10, 231 },
	{ 201, 155 },
	{ 148, 231 },
	{ 10, 231 },
	{ 13, 155 },
	{ 148, 231 },
	{ 201, 155 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0007FB28[] = {
	{ 73, -136 },
	{ 42, -160 },
	{ 90, -189 },
	{ 62, -232 },
	{ 122, -209 },
	{ 97, -255 },
	{ 629, -209 },
	{ 654, -255 },
	{ 665, -189 },
	{ 693, -232 },
	{ 688, -136 },
	{ 717, -160 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0007FB58[] = {
	{ 916, 54 },
	{ 915, 254 },
	{ 956, 39 },
	{ 1020, 255 },
	{ 99, 254 },
	{ 97, 54 },
	{ 0, 254 },
	{ 56, 39 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0007FB78[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0007F9FC, NULL, NULL, NULL, uv_0007FA88, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0007FA30, NULL, NULL, NULL, uv_0007FAE8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0007FA44, NULL, NULL, NULL, uv_0007FB08, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_0007FA58, NULL, NULL, NULL, uv_0007FB28, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_0007FA72, NULL, NULL, NULL, uv_0007FB58, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0007FBF0[] = {
	{ 631.9989f, 17.22f, -3763.553f },
	{ 632.9135f, 16.428f, -3768.672f },
	{ 633.4236f, 13.904f, -3771.527f },
	{ 634.5316f, -0.600018f, -3777.729f },
	{ 614.622f, -0.600018f, -3666.293f },
	{ 615.8356f, 13.904f, -3673.085f },
	{ 616.4512f, 16.428f, -3676.531f },
	{ 617.4713f, 17.22f, -3682.241f },
	{ 582.7783f, 17.22f, -3772.347f },
	{ 582.5467f, 16.428f, -3777.671f },
	{ 580.1273f, 13.904f, -3781.049f },
	{ 559.5195f, -0.600018f, -3791.13f },
	{ 539.6099f, -0.600018f, -3679.695f },
	{ 562.5394f, 13.904f, -3682.608f },
	{ 566.0844f, 16.428f, -3685.53f },
	{ 568.2507f, 17.22f, -3691.035f },
	{ 566.614f, 15.64504f, -3695.039f },
	{ 564.6425f, 14.92431f, -3690.03f },
	{ 561.4165f, 13.08245f, -3687.37f },
	{ 541.6942f, -0.57103f, -3691.119f },
	{ 557.6134f, -0.571012f, -3780.22f },
	{ 577.4219f, 13.08269f, -3776.952f },
	{ 579.6235f, 14.92451f, -3773.878f },
	{ 579.8344f, 15.64523f, -3769.033f },
	{ 612.8713f, 13.08245f, -3678.177f },
	{ 613.6128f, 14.92431f, -3681.281f },
	{ 611.5664f, -0.57103f, -3678.635f },
	{ 627.4857f, -0.571012f, -3767.736f },
	{ 628.8764f, 13.08269f, -3767.759f },
	{ 628.5936f, 14.92451f, -3765.128f },
	{ 627.8322f, 15.64523f, -3760.458f },
	{ 614.612f, 15.64504f, -3686.463f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0007FD70[] = {
	{ 0.013279f, 0.997146f, -0.074323f },
	{ 0.07390399f, 0.907435f, -0.413642f },
	{ 0.141888f, 0.590917f, -0.794156f },
	{ 0.16132f, 0.398395f, -0.902916f },
	{ -0.158824f, 0.429597f, 0.888944f },
	{ -0.135083f, 0.640404f, 0.756066f },
	{ -0.065279f, 0.928571f, 0.36537f },
	{ -0.011925f, 0.997699f, 0.066746f },
	{ -0.259806f, 0.961229f, -0.09240799f },
	{ -0.186448f, 0.912432f, -0.364287f },
	{ -0.183432f, 0.759999f, -0.6235009f },
	{ -0.381613f, 0.823263f, -0.42025f },
	{ -0.488561f, 0.811101f, 0.321595f },
	{ -0.382736f, 0.771267f, 0.5085869f },
	{ -0.307222f, 0.926627f, 0.216742f },
	{ -0.27696f, 0.960842f, -0.008703999f },
	{ -0.920559f, -0.265265f, -0.286714f },
	{ -0.7536139f, -0.096035f, -0.650265f },
	{ -0.391552f, 0.564517f, -0.726641f },
	{ -0.462691f, 0.804375f, -0.372691f },
	{ -0.570631f, 0.779505f, 0.258366f },
	{ -0.593215f, 0.574685f, 0.563767f },
	{ -0.91969f, -0.031344f, 0.391392f },
	{ -0.964712f, -0.260857f, -0.035829f },
	{ 0.150527f, -0.517216f, -0.842514f },
	{ 0.056323f, -0.947338f, -0.315245f },
	{ 0.175856f, 0.016185f, -0.984283f },
	{ -0.175849f, 0.019544f, 0.9842229f },
	{ -0.154522f, -0.477633f, 0.864864f },
	{ -0.06439f, -0.930575f, 0.360395f },
	{ -0.013215f, -0.997173f, 0.073964f },
	{ 0.011875f, -0.997718f, -0.066462f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0007FEF0 = { vertex_0007FBF0, normal_0007FD70, LengthOfArray<Sint32>(vertex_0007FBF0), meshlist_0007FB78, matlist_0007F998, LengthOfArray<Uint16>(meshlist_0007FB78), LengthOfArray<Uint16>(matlist_0007F998), { 587.0708f, 8.309991f, -3728.712f }, 78.41319f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0007FF18 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007FEF0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0007FF4C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0007FFB0[] = {
	0x8000u | 12, 10, 2, 9, 1, 8, 0, 15, 7, 14, 6, 13, 5,
	0x8000u | 12, 28, 21, 29, 22, 30, 23, 31, 16, 25, 17, 24, 18
};

extern "C" __declspec(dllexport) Sint16 poly_0007FFE4[] = {
	4, 11, 10, 3, 2,
	4, 13, 12, 5, 4
};

extern "C" __declspec(dllexport) Sint16 poly_0007FFF8[] = {
	4, 27, 28, 20, 21,
	4, 24, 26, 18, 19
};

extern "C" __declspec(dllexport) Sint16 poly_0008000C[] = {
	0x8000u | 12, 21, 10, 22, 9, 23, 8, 16, 15, 17, 14, 18, 13
};

extern "C" __declspec(dllexport) Sint16 poly_00080026[] = {
	4, 18, 19, 13, 12,
	4, 20, 21, 11, 10
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008003C[] = {
	{ 510, 0 },
	{ 510, 255 },
	{ 476, 0 },
	{ 478, 255 },
	{ 450, 0 },
	{ 452, 255 },
	{ 63, 0 },
	{ 60, 255 },
	{ 34, 0 },
	{ 31, 255 },
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 482, 0 },
	{ 480, 255 },
	{ 456, 0 },
	{ 452, 255 },
	{ 57, 0 },
	{ 60, 255 },
	{ 27, 0 },
	{ 30, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008009C[] = {
	{ 205, 255 },
	{ 145, 180 },
	{ 0, 255 },
	{ 0, 180 },
	{ 145, 180 },
	{ 205, 255 },
	{ 0, 180 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000800BC[] = {
	{ 13, 155 },
	{ 10, 231 },
	{ 201, 155 },
	{ 148, 231 },
	{ 10, 231 },
	{ 13, 155 },
	{ 148, 231 },
	{ 201, 155 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000800DC[] = {
	{ 73, -136 },
	{ 42, -160 },
	{ 90, -189 },
	{ 62, -232 },
	{ 122, -209 },
	{ 97, -255 },
	{ 629, -209 },
	{ 654, -255 },
	{ 665, -189 },
	{ 693, -232 },
	{ 688, -136 },
	{ 717, -160 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008010C[] = {
	{ 916, 54 },
	{ 915, 254 },
	{ 956, 39 },
	{ 1020, 255 },
	{ 99, 254 },
	{ 97, 54 },
	{ 0, 255 },
	{ 56, 39 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008012C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0007FFB0, NULL, NULL, NULL, uv_0008003C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0007FFE4, NULL, NULL, NULL, uv_0008009C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0007FFF8, NULL, NULL, NULL, uv_000800BC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_0008000C, NULL, NULL, NULL, uv_000800DC, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_00080026, NULL, NULL, NULL, uv_0008010C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000801A4[] = {
	{ 368, 17.22f, -3373 },
	{ 373.2f, 16.428f, -3373 },
	{ 376.1f, 13.904f, -3373 },
	{ 382.4f, -0.600018f, -3373 },
	{ 269.2f, -0.600018f, -3373 },
	{ 276.1f, 13.904f, -3373 },
	{ 279.6f, 16.428f, -3373 },
	{ 285.4f, 17.22f, -3373 },
	{ 367.9999f, 17.22f, -3423 },
	{ 373.2f, 16.428f, -3424.165f },
	{ 376.1f, 13.904f, -3427.14f },
	{ 382.3999f, -0.600018f, -3449.2f },
	{ 269.2f, -0.600018f, -3449.2f },
	{ 276.1f, 13.904f, -3427.14f },
	{ 279.6f, 16.428f, -3424.165f },
	{ 285.4f, 17.22f, -3423 },
	{ 289.054f, 15.64504f, -3425.316f },
	{ 283.776f, 14.92431f, -3426.375f },
	{ 280.591f, 13.08245f, -3429.083f },
	{ 280.8121f, -0.57103f, -3449.157f },
	{ 371.324f, -0.571012f, -3449.157f },
	{ 371.591f, 13.08269f, -3429.083f },
	{ 368.9521f, 14.92451f, -3426.375f },
	{ 364.22f, 15.64523f, -3425.315f },
	{ 280.5911f, 13.08245f, -3376.814f },
	{ 283.7761f, 14.92431f, -3376.629f },
	{ 280.8121f, -0.57103f, -3378.179f },
	{ 371.3241f, -0.571012f, -3378.179f },
	{ 371.5911f, 13.08269f, -3376.814f },
	{ 368.9521f, 14.92451f, -3376.629f },
	{ 364.2201f, 15.64523f, -3376.557f },
	{ 289.0541f, 15.64504f, -3376.557f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00080324[] = {
	{ 0.07550099f, 0.997146f, 0 },
	{ 0.420201f, 0.9074309f, 0 },
	{ 0.806735f, 0.590913f, 0 },
	{ 0.917211f, 0.398402f, 0 },
	{ -0.903022f, 0.429594f, 0.000001f },
	{ -0.768033f, 0.6404099f, 0 },
	{ -0.371147f, 0.928574f, 0 },
	{ -0.06780399f, 0.997699f, 0 },
	{ 0.045273f, 0.96123f, -0.272005f },
	{ 0.325822f, 0.91243f, -0.247613f },
	{ 0.581521f, 0.76f, -0.290232f },
	{ 0.346585f, 0.823262f, -0.449576f },
	{ -0.402513f, 0.8110999f, -0.424381f },
	{ -0.567979f, 0.771265f, -0.287316f },
	{ -0.267386f, 0.926627f, -0.264323f },
	{ -0.040146f, 0.960845f, -0.274163f },
	{ 0.120336f, -0.265253f, -0.9566399f },
	{ 0.507588f, -0.096026f, -0.856232f },
	{ 0.646449f, 0.564512f, -0.513254f },
	{ 0.285497f, 0.804378f, -0.521026f },
	{ -0.354699f, 0.779506f, -0.516293f },
	{ -0.6593069f, 0.574694f, -0.484811f },
	{ -0.547038f, -0.03136f, -0.83652f },
	{ -0.134409f, -0.260847f, -0.955977f },
	{ 0.855854f, -0.517218f, -0.00001f },
	{ 0.320238f, -0.947337f, 0 },
	{ 0.999869f, 0.016185f, -0.00001f },
	{ -0.999809f, 0.019551f, 0 },
	{ -0.8785509f, -0.477648f, 0 },
	{ -0.366088f, -0.93058f, 0 },
	{ -0.075136f, -0.997173f, 0 },
	{ 0.067513f, -0.997718f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000804A4 = { vertex_000801A4, normal_00080324, LengthOfArray<Sint32>(vertex_000801A4), meshlist_0008012C, matlist_0007FF4C, LengthOfArray<Uint16>(meshlist_0008012C), LengthOfArray<Uint16>(matlist_0007FF4C), { 325.8f, 8.309991f, -3411.1f }, 68.2288f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000804CC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000804A4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00080500[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00080564[] = {
	0x8000u | 12, 10, 2, 9, 1, 8, 0, 15, 7, 14, 6, 13, 5,
	0x8000u | 12, 18, 24, 17, 25, 16, 31, 23, 30, 22, 29, 21, 28
};

extern "C" __declspec(dllexport) Sint16 poly_00080598[] = {
	4, 11, 10, 3, 2,
	4, 13, 12, 5, 4
};

extern "C" __declspec(dllexport) Sint16 poly_000805AC[] = {
	4, 27, 28, 20, 21,
	4, 24, 26, 18, 19
};

extern "C" __declspec(dllexport) Sint16 poly_000805C0[] = {
	0x8000u | 12, 13, 18, 14, 17, 15, 16, 8, 23, 9, 22, 10, 21
};

extern "C" __declspec(dllexport) Sint16 poly_000805DA[] = {
	4, 18, 19, 13, 12,
	4, 20, 21, 11, 10
};

extern "C" __declspec(dllexport) NJS_TEX uv_000805F0[] = {
	{ 510, 0 },
	{ 510, 255 },
	{ 476, 0 },
	{ 478, 255 },
	{ 450, 0 },
	{ 452, 255 },
	{ 63, 0 },
	{ 60, 255 },
	{ 34, 0 },
	{ 31, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0 },
	{ 30, 255 },
	{ 27, 0 },
	{ 60, 255 },
	{ 57, 0 },
	{ 452, 255 },
	{ 456, 0 },
	{ 480, 255 },
	{ 482, 0 },
	{ 510, 255 },
	{ 510, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00080650[] = {
	{ 205, 255 },
	{ 145, 180 },
	{ 0, 255 },
	{ 0, 180 },
	{ 145, 180 },
	{ 205, 255 },
	{ 0, 180 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00080670[] = {
	{ 13, 155 },
	{ 10, 231 },
	{ 201, 155 },
	{ 148, 231 },
	{ 10, 231 },
	{ 13, 155 },
	{ 148, 231 },
	{ 201, 155 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00080690[] = {
	{ 717, -160 },
	{ 688, -136 },
	{ 693, -232 },
	{ 665, -189 },
	{ 654, -255 },
	{ 629, -209 },
	{ 97, -255 },
	{ 122, -209 },
	{ 62, -232 },
	{ 90, -189 },
	{ 42, -160 },
	{ 73, -136 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000806C0[] = {
	{ 916, 54 },
	{ 915, 254 },
	{ 956, 39 },
	{ 1020, 255 },
	{ 99, 254 },
	{ 97, 54 },
	{ 0, 255 },
	{ 56, 39 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000806E0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00080564, NULL, NULL, NULL, uv_000805F0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00080598, NULL, NULL, NULL, uv_00080650, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000805AC, NULL, NULL, NULL, uv_00080670, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_000805C0, NULL, NULL, NULL, uv_00080690, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_000805DA, NULL, NULL, NULL, uv_000806C0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00080758[] = {
	{ -322.1505f, 17.22f, -3666.739f },
	{ -320.5404f, 16.428f, -3661.795f },
	{ -319.6425f, 13.904f, -3659.037f },
	{ -317.6919f, -0.600018f, -3653.047f },
	{ -352.7415f, -0.600018f, -3760.684f },
	{ -350.6051f, 13.904f, -3754.123f },
	{ -349.5214f, 16.428f, -3750.795f },
	{ -347.7256f, 17.22f, -3745.28f },
	{ -274.6076f, 17.22f, -3682.22f },
	{ -271.8903f, 16.428f, -3677.637f },
	{ -268.1628f, 13.904f, -3675.8f },
	{ -245.2365f, -0.600018f, -3676.64f },
	{ -280.2861f, -0.600018f, -3784.278f },
	{ -299.1254f, 13.904f, -3770.886f },
	{ -300.8713f, 16.428f, -3766.637f },
	{ -300.1826f, 17.22f, -3760.761f },
	{ -296.8495f, 15.64504f, -3758.004f },
	{ -297.4761f, 14.92431f, -3763.351f },
	{ -295.8873f, 13.08245f, -3767.217f },
	{ -276.7312f, -0.57103f, -3773.223f },
	{ -248.7064f, -0.571012f, -3687.158f },
	{ -267.7117f, 13.08269f, -3680.689f },
	{ -271.1037f, 14.92451f, -3682.36f },
	{ -273.5764f, 15.64523f, -3686.531f },
	{ -345.5883f, 13.08245f, -3751.033f },
	{ -344.7772f, 14.92431f, -3747.948f },
	{ -344.2219f, -0.57103f, -3751.246f },
	{ -316.1971f, -0.571012f, -3665.182f },
	{ -317.4124f, 13.08269f, -3664.505f },
	{ -318.4046f, 14.92451f, -3666.958f },
	{ -319.9383f, 15.64523f, -3671.435f },
	{ -343.2115f, 15.64504f, -3742.907f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000808D8[] = {
	{ 0.023378f, 0.997146f, 0.07179099f },
	{ 0.130106f, 0.907429f, 0.399555f },
	{ 0.249786f, 0.590913f, 0.767091f },
	{ 0.283992f, 0.398404f, 0.872137f },
	{ -0.279597f, 0.429602f, -0.858643f },
	{ -0.237803f, 0.640407f, -0.730294f },
	{ -0.114919f, 0.928571f, -0.352917f },
	{ -0.020994f, 0.997699f, -0.064473f },
	{ 0.272658f, 0.96123f, -0.041172f },
	{ 0.33633f, 0.912429f, 0.233144f },
	{ 0.456022f, 0.759999f, 0.463083f },
	{ 0.534794f, 0.8232639f, 0.190347f },
	{ 0.278899f, 0.811101f, -0.51413f },
	{ 0.097339f, 0.771268f, -0.629024f },
	{ 0.168536f, 0.926626f, -0.336094f },
	{ 0.248269f, 0.960842f, -0.123063f },
	{ 0.946885f, -0.265264f, -0.181778f },
	{ 0.9713179f, -0.09602699f, 0.217533f },
	{ 0.6881869f, 0.564513f, 0.455768f },
	{ 0.583822f, 0.804375f, 0.110148f },
	{ 0.381097f, 0.779503f, -0.497131f },
	{ 0.256845f, 0.574689f, -0.7770219f },
	{ 0.626032f, -0.03135f, -0.779167f },
	{ 0.867381f, -0.260857f, -0.423797f },
	{ 0.264996f, -0.517211f, 0.813799f },
	{ 0.099156f, -0.947336f, 0.304505f },
	{ 0.309586f, 0.016179f, 0.950734f },
	{ -0.309566f, 0.019544f, -0.950677f },
	{ -0.272025f, -0.477637f, -0.835383f },
	{ -0.113353f, -0.930577f, -0.348106f },
	{ -0.023264f, -0.997173f, -0.071445f },
	{ 0.020904f, -0.997718f, 0.064195f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00080A58 = { vertex_00080758, normal_000808D8, LengthOfArray<Sint32>(vertex_00080758), meshlist_000806E0, matlist_00080500, LengthOfArray<Uint16>(meshlist_000806E0), LengthOfArray<Uint16>(matlist_00080500), { -298.989f, 8.309991f, -3718.662f }, 84.82161f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00080A80 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00080A58, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00080AB4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00080B18[] = {
	0x8000u | 12, 10, 2, 9, 1, 8, 0, 15, 7, 14, 6, 13, 5,
	0x8000u | 12, 28, 21, 29, 22, 30, 23, 31, 16, 25, 17, 24, 18
};

extern "C" __declspec(dllexport) Sint16 poly_00080B4C[] = {
	4, 11, 10, 3, 2,
	4, 13, 12, 5, 4
};

extern "C" __declspec(dllexport) Sint16 poly_00080B60[] = {
	4, 27, 28, 20, 21,
	4, 24, 26, 18, 19
};

extern "C" __declspec(dllexport) Sint16 poly_00080B74[] = {
	0x8000u | 12, 13, 18, 14, 17, 15, 16, 8, 23, 9, 22, 10, 21
};

extern "C" __declspec(dllexport) Sint16 poly_00080B8E[] = {
	4, 18, 19, 13, 12,
	4, 20, 21, 11, 10
};

extern "C" __declspec(dllexport) NJS_TEX uv_00080BA4[] = {
	{ 510, 0 },
	{ 510, 255 },
	{ 476, 0 },
	{ 478, 255 },
	{ 450, 0 },
	{ 452, 255 },
	{ 63, 0 },
	{ 60, 255 },
	{ 34, 0 },
	{ 31, 255 },
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 482, 0 },
	{ 480, 255 },
	{ 456, 0 },
	{ 452, 255 },
	{ 57, 0 },
	{ 60, 255 },
	{ 27, 0 },
	{ 30, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00080C04[] = {
	{ 205, 255 },
	{ 145, 180 },
	{ 0, 255 },
	{ 0, 180 },
	{ 145, 180 },
	{ 205, 255 },
	{ 0, 180 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00080C24[] = {
	{ 13, 155 },
	{ 10, 231 },
	{ 201, 155 },
	{ 148, 231 },
	{ 10, 231 },
	{ 13, 155 },
	{ 148, 231 },
	{ 201, 155 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00080C44[] = {
	{ 717, -160 },
	{ 688, -136 },
	{ 693, -232 },
	{ 665, -189 },
	{ 654, -255 },
	{ 629, -209 },
	{ 97, -255 },
	{ 122, -209 },
	{ 62, -232 },
	{ 90, -189 },
	{ 42, -160 },
	{ 73, -136 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00080C74[] = {
	{ 916, 54 },
	{ 915, 254 },
	{ 956, 39 },
	{ 1019, 255 },
	{ 99, 254 },
	{ 97, 54 },
	{ 0, 255 },
	{ 56, 39 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00080C94[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00080B18, NULL, NULL, NULL, uv_00080BA4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00080B4C, NULL, NULL, NULL, uv_00080C04, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00080B60, NULL, NULL, NULL, uv_00080C24, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_00080B74, NULL, NULL, NULL, uv_00080C44, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_00080B8E, NULL, NULL, NULL, uv_00080C74, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00080D0C[] = {
	{ 0, 17.22f, -3373 },
	{ 5.200001f, 16.428f, -3373 },
	{ 8.099998f, 13.904f, -3373 },
	{ 14.4f, -0.600018f, -3373 },
	{ -98.8f, -0.600018f, -3373 },
	{ -91.9f, 13.904f, -3373 },
	{ -88.4f, 16.428f, -3373 },
	{ -82.59999f, 17.22f, -3373 },
	{ -0.00016f, 17.22f, -3423 },
	{ 5.199984f, 16.428f, -3424.165f },
	{ 8.09998f, 13.904f, -3427.14f },
	{ 14.39997f, -0.600018f, -3449.2f },
	{ -98.80003f, -0.600018f, -3449.2f },
	{ -91.90002f, 13.904f, -3427.14f },
	{ -88.40002f, 16.428f, -3424.165f },
	{ -82.60001f, 17.22f, -3423 },
	{ -78.94592f, 15.64504f, -3425.316f },
	{ -84.22392f, 14.92431f, -3426.375f },
	{ -87.40894f, 13.08245f, -3429.083f },
	{ -87.18792f, -0.57103f, -3449.157f },
	{ 3.324076f, -0.571012f, -3449.157f },
	{ 3.591065f, 13.08269f, -3429.083f },
	{ 0.952074f, 14.92451f, -3426.375f },
	{ -3.779932f, 15.64523f, -3425.315f },
	{ -87.40891f, 13.08245f, -3376.814f },
	{ -84.22391f, 14.92431f, -3376.629f },
	{ -87.1879f, -0.57103f, -3378.179f },
	{ 3.324099f, -0.571012f, -3378.179f },
	{ 3.591082f, 13.08269f, -3376.814f },
	{ 0.95209f, 14.92451f, -3376.629f },
	{ -3.779916f, 15.64523f, -3376.557f },
	{ -78.94591f, 15.64504f, -3376.557f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00080E8C[] = {
	{ 0.07550099f, 0.997146f, 0 },
	{ 0.420201f, 0.9074309f, 0 },
	{ 0.806735f, 0.590914f, 0 },
	{ 0.917211f, 0.398402f, 0 },
	{ -0.903022f, 0.429595f, 0 },
	{ -0.768033f, 0.6404099f, 0 },
	{ -0.371147f, 0.928574f, 0 },
	{ -0.06780399f, 0.997699f, 0 },
	{ 0.045273f, 0.96123f, -0.272005f },
	{ 0.325821f, 0.91243f, -0.247613f },
	{ 0.58152f, 0.76f, -0.290232f },
	{ 0.346584f, 0.823262f, -0.449576f },
	{ -0.402513f, 0.8110999f, -0.424381f },
	{ -0.567979f, 0.771265f, -0.287316f },
	{ -0.267386f, 0.926627f, -0.264323f },
	{ -0.040146f, 0.960845f, -0.274163f },
	{ 0.120336f, -0.265253f, -0.9566399f },
	{ 0.507588f, -0.09602699f, -0.856232f },
	{ 0.646449f, 0.564512f, -0.513254f },
	{ 0.285497f, 0.804378f, -0.5210249f },
	{ -0.354699f, 0.779506f, -0.5162939f },
	{ -0.6593069f, 0.574693f, -0.484811f },
	{ -0.547038f, -0.03136f, -0.83652f },
	{ -0.134409f, -0.260847f, -0.955977f },
	{ 0.855854f, -0.517218f, 0 },
	{ 0.320238f, -0.947337f, 0 },
	{ 0.999869f, 0.016185f, 0 },
	{ -0.999809f, 0.01955f, 0 },
	{ -0.8785509f, -0.477648f, 0 },
	{ -0.366088f, -0.93058f, 0 },
	{ -0.075136f, -0.997173f, 0 },
	{ 0.067513f, -0.997718f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008100C = { vertex_00080D0C, normal_00080E8C, LengthOfArray<Sint32>(vertex_00080D0C), meshlist_00080C94, matlist_00080AB4, LengthOfArray<Uint16>(meshlist_00080C94), LengthOfArray<Uint16>(matlist_00080AB4), { -42.20001f, 8.309991f, -3411.1f }, 68.22881f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00081034 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008100C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00081068[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008107C[] = {
	4, 1, 0, 3, 2,
	4, 5, 4, 7, 6,
	4, 9, 8, 11, 10,
	4, 13, 12, 15, 14,
	4, 17, 16, 19, 18
};

extern "C" __declspec(dllexport) NJS_TEX uv_000810B0[] = {
	{ 0, 255 },
	{ 0 },
	{ 1270, 255 },
	{ 1270, 0 },
	{ 0, -255 },
	{ 0, -510 },
	{ 1273, -255 },
	{ 1273, -510 },
	{ 0, -510 },
	{ 0, -765 },
	{ 1273, -510 },
	{ 1273, -765 },
	{ 0 },
	{ 0, -255 },
	{ 1270, 0 },
	{ 1270, -255 },
	{ 0, -765 },
	{ 0, -1020 },
	{ 1275, -765 },
	{ 1275, -1020 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00081100[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0008107C, NULL, NULL, NULL, uv_000810B0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00081118[] = {
	{ -301.8546f, 3.5f, -3765.896f },
	{ -299.9529f, 0.5f, -3766.515f },
	{ -273.3691f, 3.5f, -3678.417f },
	{ -271.4674f, 0.5f, -3679.036f },
	{ -301.8546f, 9.5f, -3765.896f },
	{ -299.9529f, 6.5f, -3766.515f },
	{ -273.3287f, 9.5f, -3678.293f },
	{ -271.427f, 6.5f, -3678.912f },
	{ -301.8546f, 12.5f, -3765.896f },
	{ -299.9529f, 9.5f, -3766.515f },
	{ -273.3287f, 12.5f, -3678.293f },
	{ -271.427f, 9.5f, -3678.912f },
	{ -301.8546f, 6.5f, -3765.896f },
	{ -299.9529f, 3.5f, -3766.515f },
	{ -273.3691f, 6.5f, -3678.417f },
	{ -271.4674f, 3.5f, -3679.036f },
	{ -301.8546f, 15.5f, -3765.896f },
	{ -299.9529f, 12.5f, -3766.515f },
	{ -273.3006f, 15.5f, -3678.207f },
	{ -271.3989f, 12.5f, -3678.826f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00081208[] = {
	{ 0.7911569f, 0.5547079f, -0.257622f },
	{ 0.7911569f, 0.5547079f, -0.257622f },
	{ 0.7911569f, 0.5547079f, -0.257622f },
	{ 0.7911569f, 0.5547079f, -0.257622f },
	{ 0.791162f, 0.554701f, -0.257623f },
	{ 0.791162f, 0.554701f, -0.257623f },
	{ 0.791162f, 0.554701f, -0.257623f },
	{ 0.791162f, 0.554701f, -0.257623f },
	{ 0.791162f, 0.554701f, -0.257623f },
	{ 0.791162f, 0.554701f, -0.257623f },
	{ 0.791162f, 0.554701f, -0.257623f },
	{ 0.791162f, 0.554701f, -0.257623f },
	{ 0.7911569f, 0.5547079f, -0.257622f },
	{ 0.7911569f, 0.5547079f, -0.257622f },
	{ 0.7911569f, 0.5547079f, -0.257622f },
	{ 0.7911569f, 0.5547079f, -0.257622f },
	{ 0.791162f, 0.554701f, -0.257623f },
	{ 0.791162f, 0.554701f, -0.257623f },
	{ 0.791162f, 0.554701f, -0.257623f },
	{ 0.791162f, 0.554701f, -0.257623f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000812F8 = { vertex_00081118, normal_00081208, LengthOfArray<Sint32>(vertex_00081118), meshlist_00081100, matlist_00081068, LengthOfArray<Uint16>(meshlist_00081100), LengthOfArray<Uint16>(matlist_00081068), { -286.6268f, 8, -3722.361f }, 46.7063f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00081320 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000812F8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00081354[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00081368[] = {
	4, 1, 0, 3, 2,
	4, 5, 4, 7, 6,
	4, 9, 8, 11, 10,
	4, 13, 12, 15, 14,
	4, 17, 16, 19, 18
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008139C[] = {
	{ 0, 255 },
	{ 0 },
	{ 1270, 255 },
	{ 1270, 0 },
	{ 0, -255 },
	{ 0, -510 },
	{ 1273, -255 },
	{ 1273, -510 },
	{ 0, -510 },
	{ 0, -765 },
	{ 1273, -510 },
	{ 1273, -765 },
	{ 0 },
	{ 0, -255 },
	{ 1270, 0 },
	{ 1270, -255 },
	{ 0, -765 },
	{ 0, -1020 },
	{ 1275, -765 },
	{ 1275, -1020 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000813EC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_00081368, NULL, NULL, NULL, uv_0008139C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00081404[] = {
	{ 280, 3.5f, -3423 },
	{ 280, 0.5f, -3425 },
	{ 372, 3.5f, -3423 },
	{ 372, 0.5f, -3425 },
	{ 280, 9.5f, -3423 },
	{ 280, 6.5f, -3425 },
	{ 372.1303f, 9.5f, -3423 },
	{ 372.1303f, 6.5f, -3425 },
	{ 280, 12.5f, -3423 },
	{ 280, 9.5f, -3425 },
	{ 372.1303f, 12.5f, -3423 },
	{ 372.1303f, 9.5f, -3425 },
	{ 280, 6.5f, -3423 },
	{ 280, 3.5f, -3425 },
	{ 372, 6.5f, -3423 },
	{ 372, 3.5f, -3425 },
	{ 280, 15.5f, -3423 },
	{ 280, 12.5f, -3425 },
	{ 372.221f, 15.5f, -3423 },
	{ 372.221f, 12.5f, -3425 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000814F4[] = {
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000815E4 = { vertex_00081404, normal_000814F4, LengthOfArray<Sint32>(vertex_00081404), meshlist_000813EC, matlist_00081354, LengthOfArray<Uint16>(meshlist_000813EC), LengthOfArray<Uint16>(matlist_00081354), { 326.1105f, 8, -3424 }, 46.12136f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008160C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000815E4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00081640[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00081654[] = {
	4, 1, 0, 3, 2,
	4, 5, 4, 7, 6,
	4, 9, 8, 11, 10,
	4, 13, 12, 15, 14,
	4, 17, 16, 19, 18
};

extern "C" __declspec(dllexport) NJS_TEX uv_00081688[] = {
	{ 0, 255 },
	{ 0 },
	{ 1270, 255 },
	{ 1270, 0 },
	{ 0, -255 },
	{ 0, -510 },
	{ 1273, -255 },
	{ 1273, -510 },
	{ 0, -510 },
	{ 0, -765 },
	{ 1273, -510 },
	{ 1273, -765 },
	{ 0 },
	{ 0, -255 },
	{ 1270, 0 },
	{ 1270, -255 },
	{ 0, -765 },
	{ 0, -1020 },
	{ 1275, -765 },
	{ 1275, -1020 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000816D8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_00081654, NULL, NULL, NULL, uv_00081688, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000816F0[] = {
	{ 567.301f, 3.5f, -3685.719f },
	{ 565.3322f, 0.5f, -3686.071f },
	{ 583.482f, 3.5f, -3776.285f },
	{ 581.5131f, 0.5f, -3776.636f },
	{ 567.301f, 9.5f, -3685.719f },
	{ 565.3322f, 6.5f, -3686.071f },
	{ 583.5049f, 9.5f, -3776.413f },
	{ 581.5361f, 6.5f, -3776.764f },
	{ 567.301f, 12.5f, -3685.719f },
	{ 565.3322f, 9.5f, -3686.071f },
	{ 583.5049f, 12.5f, -3776.413f },
	{ 581.5361f, 9.5f, -3776.764f },
	{ 567.301f, 6.5f, -3685.719f },
	{ 565.3322f, 3.5f, -3686.071f },
	{ 583.482f, 6.5f, -3776.285f },
	{ 581.5131f, 3.5f, -3776.636f },
	{ 567.301f, 15.5f, -3685.719f },
	{ 565.3322f, 12.5f, -3686.071f },
	{ 583.5208f, 15.5f, -3776.502f },
	{ 581.552f, 12.5f, -3776.854f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000817E0[] = {
	{ -0.819079f, 0.554701f, -0.146341f },
	{ -0.819079f, 0.554701f, -0.146341f },
	{ -0.819079f, 0.554701f, -0.146341f },
	{ -0.819079f, 0.554701f, -0.146341f },
	{ -0.81908f, 0.5546989f, -0.146341f },
	{ -0.81908f, 0.5546989f, -0.146341f },
	{ -0.81908f, 0.5546989f, -0.146341f },
	{ -0.81908f, 0.5546989f, -0.146341f },
	{ -0.81908f, 0.5546989f, -0.146341f },
	{ -0.81908f, 0.5546989f, -0.146341f },
	{ -0.81908f, 0.5546989f, -0.146341f },
	{ -0.81908f, 0.5546989f, -0.146341f },
	{ -0.819079f, 0.554701f, -0.146341f },
	{ -0.819079f, 0.554701f, -0.146341f },
	{ -0.819079f, 0.554701f, -0.146341f },
	{ -0.819079f, 0.554701f, -0.146341f },
	{ -0.819077f, 0.554705f, -0.14634f },
	{ -0.819077f, 0.554705f, -0.14634f },
	{ -0.819077f, 0.554705f, -0.14634f },
	{ -0.819077f, 0.554705f, -0.14634f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000818D0 = { vertex_000816F0, normal_000817E0, LengthOfArray<Sint32>(vertex_000816F0), meshlist_000816D8, matlist_00081640, LengthOfArray<Uint16>(meshlist_000816D8), LengthOfArray<Uint16>(matlist_00081640), { 574.4265f, 8, -3731.286f }, 46.46628f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000818F8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000818D0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008192C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00081940[] = {
	4, 1, 0, 3, 2,
	4, 5, 4, 7, 6,
	4, 9, 8, 11, 10,
	4, 13, 12, 15, 14,
	4, 17, 16, 19, 18
};

extern "C" __declspec(dllexport) NJS_TEX uv_00081974[] = {
	{ 0, 255 },
	{ 0 },
	{ 1270, 255 },
	{ 1270, 0 },
	{ 0, -255 },
	{ 0, -510 },
	{ 1273, -255 },
	{ 1273, -510 },
	{ 0, -510 },
	{ 0, -765 },
	{ 1273, -510 },
	{ 1273, -765 },
	{ 0 },
	{ 0, -255 },
	{ 1270, 0 },
	{ 1270, -255 },
	{ 0, -765 },
	{ 0, -1020 },
	{ 1274, -765 },
	{ 1274, -1020 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000819C4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_00081940, NULL, NULL, NULL, uv_00081974, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000819DC[] = {
	{ -88, 3.5f, -3423 },
	{ -88, 0.5f, -3425 },
	{ 3.999996f, 3.5f, -3423 },
	{ 3.999996f, 0.5f, -3425 },
	{ -88, 9.5f, -3423 },
	{ -88, 6.5f, -3425 },
	{ 4.130352f, 9.5f, -3423 },
	{ 4.130352f, 6.5f, -3425 },
	{ -88, 12.5f, -3423 },
	{ -88, 9.5f, -3425 },
	{ 4.130352f, 12.5f, -3423 },
	{ 4.130352f, 9.5f, -3425 },
	{ -88, 6.5f, -3423 },
	{ -88, 3.5f, -3425 },
	{ 3.999996f, 6.5f, -3423 },
	{ 3.999996f, 3.5f, -3425 },
	{ -88, 15.5f, -3423 },
	{ -88, 12.5f, -3425 },
	{ 4.22105f, 15.5f, -3423 },
	{ 4.22105f, 12.5f, -3425 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00081ACC[] = {
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f },
	{ 0, 0.5547f, -0.83205f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00081BBC = { vertex_000819DC, normal_00081ACC, LengthOfArray<Sint32>(vertex_000819DC), meshlist_000819C4, matlist_0008192C, LengthOfArray<Uint16>(meshlist_000819C4), LengthOfArray<Uint16>(matlist_0008192C), { -41.88947f, 8, -3424 }, 46.12136f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00081BE4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00081BBC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00081C18[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00081C2C[] = {
	3, 26, 20, 25,
	12, 4, 24, 3, 25, 2, 20, 1, 21, 12, 22, 0, 23,
	0x8000u | 8, 16, 14, 17, 5, 18, 4, 19, 24,
	0x8000u | 17, 16, 6, 14, 15, 5, 11, 4, 10, 3, 9, 2, 8, 1, 7, 12, 13, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_00081C84[] = {
	{ 2738, -3230 },
	{ 2587, -3230 },
	{ 3451, -3312 },
	{ 4344, -3454 },
	{ 4157, -3230 },
	{ 3451, -3454 },
	{ 3451, -3312 },
	{ 2587, -3454 },
	{ 2587, -3230 },
	{ 1744, -3454 },
	{ 1744, -3230 },
	{ 1601, -3454 },
	{ 1601, -3230 },
	{ 1152, -3454 },
	{ 875, -3230 },
	{ 6057, -3230 },
	{ 5296, -3454 },
	{ 5296, -3231 },
	{ 5152, -3454 },
	{ 5152, -3231 },
	{ 4344, -3454 },
	{ 4344, -3230 },
	{ 4157, -3230 },
	{ 6057, -3230 },
	{ 5762, -3454 },
	{ 5296, -3454 },
	{ 4964, -3917 },
	{ 5152, -3454 },
	{ 4807, -3917 },
	{ 4344, -3454 },
	{ 4344, -3917 },
	{ 3451, -3454 },
	{ 3451, -3917 },
	{ 2587, -3454 },
	{ 2587, -3917 },
	{ 1744, -3454 },
	{ 2083, -3917 },
	{ 1601, -3454 },
	{ 1941, -3917 },
	{ 1152, -3454 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00081D24[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00081C2C, NULL, NULL, NULL, uv_00081C84, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00081D3C[] = {
	{ -233, 0, -3509.092f },
	{ -137, 0, -3509.092f },
	{ 0, 0, -3509.092f },
	{ 140, 0, -3509.092f },
	{ 285, 0, -3509.092f },
	{ 416, 0, -3509.092f },
	{ 515, 0, -3509.092f },
	{ -82, 0, -3372.728f },
	{ 0, 0, -3372.728f },
	{ 140, 0, -3372.728f },
	{ 285, 0, -3372.728f },
	{ 360, 0, -3372.728f },
	{ -160, 0, -3509.092f },
	{ -105, 0, -3372.728f },
	{ 439.5f, 0, -3509.092f },
	{ 385.5f, 0, -3372.728f },
	{ 563, 0, -3574.773f },
	{ 439.5f, 0, -3574.66f },
	{ 416, 0, -3574.545f },
	{ 285, 0, -3574.773f },
	{ 0, 0, -3574.773f },
	{ -137, 0, -3574.773f },
	{ -160, 0, -3574.773f },
	{ -278, 0, -3574.773f },
	{ 254.725f, 0, -3574.773f },
	{ 140, 0, -3550.735f },
	{ 24.37882f, 0, -3574.773f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00081E80[] = {
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
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00081FC4 = { vertex_00081D3C, normal_00081E80, LengthOfArray<Sint32>(vertex_00081D3C), meshlist_00081D24, matlist_00081C18, LengthOfArray<Uint16>(meshlist_00081D24), LengthOfArray<Uint16>(matlist_00081C18), { 142.5f, 0, -3473.75f }, 432.4648f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00081FEC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00081FC4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00082020[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00082034[] = {
	3, 3, 1, 10,
	4, 19, 26, 11, 20,
	0x8000u | 10, 20, 12, 25, 13, 7, 16, 22, 17, 24, 23,
	13, 16, 15, 13, 8, 12, 5, 20, 3, 11, 10, 19, 0, 18,
	4, 22, 7, 21, 25,
	10, 15, 14, 8, 9, 5, 6, 3, 4, 1, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_00082098[] = {
	{ 6069, -2062 },
	{ 6069, -1575 },
	{ 5296, -1575 },
	{ 5152, -1905 },
	{ 5212, -2062 },
	{ 5296, -2062 },
	{ 5296, -2293 },
	{ 5296, -2293 },
	{ 5296, -2525 },
	{ 5212, -2525 },
	{ 5296, -3014 },
	{ 5152, -3014 },
	{ 5152, -3231 },
	{ 4755, -3013 },
	{ 4344, -3230 },
	{ 4344, -3166 },
	{ 4157, -3230 },
	{ 5152, -3231 },
	{ 5296, -3231 },
	{ 5296, -3014 },
	{ 6069, -3013 },
	{ 5296, -2525 },
	{ 6069, -2525 },
	{ 5296, -2293 },
	{ 6069, -2062 },
	{ 5296, -2062 },
	{ 5296, -1575 },
	{ 5152, -1905 },
	{ 5152, -1575 },
	{ 4757, -1575 },
	{ 4755, -3013 },
	{ 5152, -3014 },
	{ 5152, -2683 },
	{ 5212, -2525 },
	{ 5296, -3231 },
	{ 6057, -3230 },
	{ 6069, -3013 },
	{ 6384, -2986 },
	{ 6069, -2525 },
	{ 6538, -2525 },
	{ 6069, -2062 },
	{ 6711, -2062 },
	{ 6069, -1575 },
	{ 6772, -1575 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00082148[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_00082034, NULL, NULL, NULL, uv_00082098, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00082160[] = {
	{ 416, 0, -4061.546f },
	{ 565, 0, -4061.546f },
	{ 679, 0, -4061.546f },
	{ 565, 0, -3918.182f },
	{ 669, 0, -3918.182f },
	{ 565, 0, -3781.819f },
	{ 641, 0, -3781.819f },
	{ 416, 0, -3638 },
	{ 565, 0, -3638.455f },
	{ 616, 0, -3646.455f },
	{ 439.5f, 0, -4061.546f },
	{ 439.5f, 0, -3918.182f },
	{ 439.5f, 0, -3781.819f },
	{ 439.5f, 0, -3638.227f },
	{ 563, 0, -3574.773f },
	{ 439.5f, 0, -3574.66f },
	{ 416, 0, -3574.545f },
	{ 285, 0, -3574.773f },
	{ 352.0773f, 0, -4061.546f },
	{ 416, 0, -3964.269f },
	{ 439.5f, 0, -3850.488f },
	{ 416, 0, -3735.405f },
	{ 351.7712f, 0, -3638.24f },
	{ 254.725f, 0, -3574.773f },
	{ 285, 0, -3593.566f },
	{ 425.7003f, 0, -3781.819f },
	{ 425.7711f, 0, -3918.182f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000822A4[] = {
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
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000823E8 = { vertex_00082160, normal_000822A4, LengthOfArray<Sint32>(vertex_00082160), meshlist_00082148, matlist_00082020, LengthOfArray<Uint16>(meshlist_00082148), LengthOfArray<Uint16>(matlist_00082020), { 466.8625f, 0, -3818.046f }, 322.9467f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00082410 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000823E8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00082444[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 6, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00082458[] = {
	0x8000u | 10, 14, 8, 13, 6, 12, 4, 11, 2, 10, 0,
	0x8000u | 10, 19, 14, 18, 13, 17, 12, 16, 11, 15, 10,
	0x8000u | 10, 1, 0, 3, 2, 5, 4, 7, 6, 9, 8
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008249C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00082458, NULL, NULL, NULL, NULL, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000824B4[] = {
	{ -155, -140, -1617.391f },
	{ -155, -280, -1617.391f },
	{ -155, -140, -1482.609f },
	{ -155, -280, -1482.609f },
	{ -155, -140, -1347.826f },
	{ -155, -280, -1347.826f },
	{ -155, -140, -1213.043f },
	{ -155, -280, -1213.043f },
	{ -155, -140, -1078.261f },
	{ -155, -280, -1078.261f },
	{ -155, 0, -1617.391f },
	{ -155, 0, -1482.609f },
	{ -155, 0, -1347.826f },
	{ -155, 0, -1213.043f },
	{ -155, 0, -1078.261f },
	{ -155, 140, -1617.391f },
	{ -155, 140, -1482.609f },
	{ -155, 140, -1347.826f },
	{ -155, 140, -1213.043f },
	{ -155, 140, -1078.261f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000825A4[] = {
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
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00082694 = { vertex_000824B4, normal_000825A4, LengthOfArray<Sint32>(vertex_000824B4), meshlist_0008249C, matlist_00082444, LengthOfArray<Uint16>(meshlist_0008249C), LengthOfArray<Uint16>(matlist_00082444), { -155, -70, -1347.826f }, 341.7095f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000826BC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00082694, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000826F0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00082704[] = {
	12, 18, 29, 19, 28, 20, 27, 21, 26, 22, 25, 23, 24,
	8, 4, 3, 10, 9, 16, 15, 22, 21,
	6, 12, 13, 6, 7, 0, 1,
	6, 13, 14, 7, 8, 1, 2,
	6, 14, 15, 8, 9, 2, 3,
	0x8000u | 8, 15, 21, 14, 20, 13, 19, 12, 18,
	8, 22, 23, 16, 17, 10, 11, 4, 5
};

extern "C" __declspec(dllexport) NJS_TEX uv_00082780[] = {
	{ 36, -3013 },
	{ 36, -3230 },
	{ 0, -3013 },
	{ 0, -3230 },
	{ 61, -3013 },
	{ 61, -3230 },
	{ 172, -3013 },
	{ 172, -3230 },
	{ 408, -3013 },
	{ 408, -3230 },
	{ 665, -3013 },
	{ 665, -3230 },
	{ 408, -1575 },
	{ 172, -1575 },
	{ 408, -2062 },
	{ 172, -2062 },
	{ 408, -2525 },
	{ 172, -2525 },
	{ 408, -3013 },
	{ 172, -3013 },
	{ 36, -2525 },
	{ 0, -2525 },
	{ 36, -2062 },
	{ 0, -2062 },
	{ 36, -1575 },
	{ 0, -1575 },
	{ 0, -2525 },
	{ 61, -2525 },
	{ 0, -2062 },
	{ 61, -2062 },
	{ 0, -1575 },
	{ 61, -1575 },
	{ 61, -2525 },
	{ 172, -2525 },
	{ 61, -2062 },
	{ 172, -2062 },
	{ 61, -1575 },
	{ 172, -1575 },
	{ 172, -2525 },
	{ 172, -3013 },
	{ 61, -2525 },
	{ 61, -3013 },
	{ 0, -2525 },
	{ 0, -3013 },
	{ 36, -2525 },
	{ 36, -3013 },
	{ 408, -3013 },
	{ 665, -3013 },
	{ 408, -2525 },
	{ 665, -2525 },
	{ 408, -2062 },
	{ 665, -2062 },
	{ 408, -1575 },
	{ 689, -1575 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00082858[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_00082704, NULL, NULL, NULL, uv_00082780, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00082870[] = {
	{ -815, -190, -4061.546f },
	{ -830, -115, -4061.546f },
	{ -805, -50, -4061.546f },
	{ -760, -15, -4061.546f },
	{ -664, 0, -4061.546f },
	{ -550, 0, -4061.546f },
	{ -815, -190, -3918.182f },
	{ -830, -115, -3918.182f },
	{ -805, -50, -3918.182f },
	{ -760, -15, -3918.182f },
	{ -664, 0, -3918.182f },
	{ -560, 0, -3918.182f },
	{ -815, -190, -3781.819f },
	{ -830, -115, -3781.819f },
	{ -805, -50, -3781.819f },
	{ -760, -15, -3781.819f },
	{ -664, 0, -3781.819f },
	{ -560, 0, -3781.819f },
	{ -815, -190, -3638.455f },
	{ -830, -115, -3638.455f },
	{ -805, -50, -3638.455f },
	{ -760, -15, -3638.455f },
	{ -664, 0, -3638.455f },
	{ -560, 0, -3638.455f },
	{ -560, 0, -3574.773f },
	{ -664, 0, -3574.773f },
	{ -760, -15, -3574.773f },
	{ -805, -50, -3574.773f },
	{ -830, -115, -3574.773f },
	{ -815, -190, -3574.773f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000829D8[] = {
	{ -0.980581f, -0.196116f, 0 },
	{ -0.996399f, 0.084787f, 0 },
	{ -0.803012f, 0.595962f, 0 },
	{ -0.396793f, 0.917908f, 0 },
	{ -0.07742099f, 0.996998f, 0 },
	{ 0, 1, 0 },
	{ -0.980581f, -0.196116f, 0 },
	{ -0.996399f, 0.084787f, 0 },
	{ -0.803012f, 0.595962f, 0 },
	{ -0.396793f, 0.917908f, 0 },
	{ -0.07742099f, 0.996998f, 0 },
	{ 0, 1, 0 },
	{ -0.980581f, -0.196116f, 0 },
	{ -0.996399f, 0.084787f, 0 },
	{ -0.803012f, 0.595962f, 0 },
	{ -0.396793f, 0.917908f, 0 },
	{ -0.07742099f, 0.996998f, 0 },
	{ 0, 1, 0 },
	{ -0.980581f, -0.196116f, 0 },
	{ -0.996399f, 0.084787f, 0 },
	{ -0.803012f, 0.595962f, 0 },
	{ -0.396793f, 0.917908f, 0 },
	{ -0.07742099f, 0.996998f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.07742099f, 0.996998f, 0 },
	{ -0.396793f, 0.917908f, 0 },
	{ -0.803012f, 0.595962f, 0 },
	{ -0.996399f, 0.084787f, 0 },
	{ -0.980581f, -0.196116f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00082B40 = { vertex_00082870, normal_000829D8, LengthOfArray<Sint32>(vertex_00082870), meshlist_00082858, matlist_000826F0, LengthOfArray<Uint16>(meshlist_00082858), LengthOfArray<Uint16>(matlist_000826F0), { -690, -95, -3818.16f }, 280.779f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00082B68 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00082B40, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00082B9C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00082BB0[] = {
	4, 4, 5, 1, 2,
	0x8000u | 5, 13, 9, 12, 10, 11,
	0x8000u | 9, 13, 8, 9, 6, 7, 3, 4, 0, 1
};

extern "C" __declspec(dllexport) NJS_TEX uv_00082BDC[] = {
	{ 8442, -2062 },
	{ 9058, -2062 },
	{ 8351, -1575 },
	{ 9058, -1575 },
	{ 7765, -3230 },
	{ 8351, -3013 },
	{ 8351, -3230 },
	{ 9058, -3013 },
	{ 9058, -3230 },
	{ 7765, -3230 },
	{ 7765, -3013 },
	{ 8351, -3013 },
	{ 7765, -2525 },
	{ 8351, -2525 },
	{ 7765, -2062 },
	{ 8442, -2062 },
	{ 7690, -1575 },
	{ 8351, -1575 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00082C24[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00082BB0, NULL, NULL, NULL, uv_00082BDC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00082C3C[] = {
	{ 828, 0, -4061.546f },
	{ 935, -15, -4061.546f },
	{ 1050, -50, -4061.546f },
	{ 840, 0, -3918.182f },
	{ 950, -15, -3918.182f },
	{ 1050, -50, -3918.182f },
	{ 840, 0, -3781.819f },
	{ 935, -15, -3781.819f },
	{ 840, 0, -3638.455f },
	{ 935, -15, -3638.455f },
	{ 1050, -50, -3638.455f },
	{ 1050, -50, -3574.773f },
	{ 935, -15, -3574.773f },
	{ 840, 0, -3574.773f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00082CE4[] = {
	{ 0.136932f, 0.990477f, -0.014327f },
	{ 0.218549f, 0.975796f, -0.007656f },
	{ 0.309586f, 0.950871f, 0 },
	{ 0.140773f, 0.990042f, 0.000411f },
	{ 0.202813f, 0.979217f, 0.000494f },
	{ 0.309586f, 0.950871f, 0 },
	{ 0.150379f, 0.988596f, 0.007963f },
	{ 0.150193f, 0.988622f, 0.008227999f },
	{ 0.155963f, 0.987763f, 0 },
	{ 0.20146f, 0.979497f, 0 },
	{ 0.291162f, 0.956674f, 0 },
	{ 0.291162f, 0.956674f, 0 },
	{ 0.224102f, 0.974566f, 0 },
	{ 0.155963f, 0.987763f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00082D8C = { vertex_00082C3C, normal_00082CE4, LengthOfArray<Sint32>(vertex_00082C3C), meshlist_00082C24, matlist_00082B9C, LengthOfArray<Uint16>(meshlist_00082C24), LengthOfArray<Uint16>(matlist_00082B9C), { 939, -25, -3818.16f }, 267.503f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00082DB4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00082D8C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00082DE8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00082DFC[] = {
	9, 24, 16, 25, 17, 26, 23, 27, 18, 29,
	9, 3, 1, 2, 0, 9, 8, 13, 12, 24,
	0x8000u | 8, 7, 6, 5, 4, 19, 20, 3, 2,
	0x8000u | 7, 24, 13, 25, 22, 26, 14, 27,
	0x8000u | 6, 30, 29, 28, 27, 15, 14,
	0x8000u | 8, 11, 15, 10, 14, 21, 22, 9, 13,
	0x8000u | 8, 6, 11, 4, 10, 20, 21, 2, 9
};

extern "C" __declspec(dllexport) NJS_TEX uv_00082E78[] = {
	{ 141, -1354 },
	{ 154, -1575 },
	{ 861, -1354 },
	{ 861, -1575 },
	{ 1601, -1354 },
	{ 1601, -1575 },
	{ 1744, -1354 },
	{ 1744, -1575 },
	{ 2144, -1575 },
	{ 861, 255 },
	{ 0, 255 },
	{ 861, -208 },
	{ 0, -208 },
	{ 861, -672 },
	{ 0, -672 },
	{ 861, -1134 },
	{ 24, -1134 },
	{ 141, -1354 },
	{ 2587, 255 },
	{ 2587, -208 },
	{ 1744, 255 },
	{ 1744, -208 },
	{ 1601, 255 },
	{ 1601, -208 },
	{ 861, 255 },
	{ 861, -208 },
	{ 141, -1354 },
	{ 861, -1134 },
	{ 861, -1354 },
	{ 1601, -1134 },
	{ 1601, -1354 },
	{ 1744, -1134 },
	{ 1744, -1354 },
	{ 2587, -1410 },
	{ 2144, -1575 },
	{ 2587, -1354 },
	{ 1744, -1354 },
	{ 2587, -1134 },
	{ 1744, -1134 },
	{ 2587, -672 },
	{ 2587, -1134 },
	{ 1744, -672 },
	{ 1744, -1134 },
	{ 1601, -672 },
	{ 1601, -1134 },
	{ 861, -672 },
	{ 861, -1134 },
	{ 2587, -208 },
	{ 2587, -672 },
	{ 1744, -208 },
	{ 1744, -672 },
	{ 1601, -208 },
	{ 1601, -672 },
	{ 861, -208 },
	{ 861, -672 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00082F54[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_00082DFC, NULL, NULL, NULL, uv_00082E78, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00082F6C[] = {
	{ -420, 0, -4463.636f },
	{ -420, 0, -4600 },
	{ -280, 0, -4463.636f },
	{ -280, 0, -4600 },
	{ -137, 0, -4463.636f },
	{ -137, 0, -4600 },
	{ 0, 0, -4463.636f },
	{ 0, 0, -4600 },
	{ -420, 0, -4327.272f },
	{ -280, 0, -4327.272f },
	{ -137, 0, -4327.272f },
	{ 0, 0, -4327.272f },
	{ -416, 0, -4190.909f },
	{ -280, 0, -4190.909f },
	{ -137, 0, -4190.909f },
	{ 0, 0, -4190.909f },
	{ -395, 0, -4061.546f },
	{ -280, 0, -4061.546f },
	{ -137, 0, -4061.546f },
	{ -160, 0, -4600 },
	{ -160, 0, -4463.636f },
	{ -160, 0, -4327.272f },
	{ -160, 0, -4190.909f },
	{ -160, 0, -4061.546f },
	{ -397, 0, -4126.227f },
	{ -280, 0, -4126.227f },
	{ -160, 0, -4126.227f },
	{ -137, 0, -4126.227f },
	{ 0, 0, -4126.227f },
	{ -72.06312f, 0, -4061.546f },
	{ 0, 0, -4109.864f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000830E0[] = {
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
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00083254 = { vertex_00082F6C, normal_000830E0, LengthOfArray<Sint32>(vertex_00082F6C), meshlist_00082F54, matlist_00082DE8, LengthOfArray<Uint16>(meshlist_00082F54), LengthOfArray<Uint16>(matlist_00082DE8), { -210, 0, -4330.772f }, 341.4428f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008327C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00083254, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000832B0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000832C4[] = {
	12, 5, 24, 4, 25, 3, 26, 2, 27, 1, 28, 0, 29,
	0x8000u | 6, 2, 8, 1, 7, 0, 6,
	0x8000u | 12, 11, 22, 10, 20, 9, 18, 8, 16, 7, 14, 6, 12,
	0x8000u | 12, 22, 23, 20, 21, 18, 19, 16, 17, 14, 15, 12, 13
};

extern "C" __declspec(dllexport) NJS_TEX uv_00083320[] = {
	{ 665, -3454 },
	{ 665, -3230 },
	{ 408, -3454 },
	{ 408, -3230 },
	{ 172, -3454 },
	{ 172, -3230 },
	{ 61, -3454 },
	{ 61, -3230 },
	{ 0, -3454 },
	{ 0, -3230 },
	{ 36, -3454 },
	{ 36, -3230 },
	{ 61, -3454 },
	{ 61, -3917 },
	{ 0, -3454 },
	{ 0, -3917 },
	{ 36, -3454 },
	{ 36, -3917 },
	{ 665, -3917 },
	{ 665, -4380 },
	{ 408, -3917 },
	{ 408, -4380 },
	{ 172, -3917 },
	{ 172, -4380 },
	{ 61, -3917 },
	{ 61, -4380 },
	{ 0, -3917 },
	{ 0, -4380 },
	{ 36, -3917 },
	{ 36, -4380 },
	{ 665, -4380 },
	{ 665, -4845 },
	{ 408, -4380 },
	{ 408, -4845 },
	{ 172, -4380 },
	{ 172, -4845 },
	{ 61, -4380 },
	{ 61, -4845 },
	{ 0, -4380 },
	{ 0, -4845 },
	{ 36, -4380 },
	{ 36, -4845 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000833C8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000832C4, NULL, NULL, NULL, uv_00083320, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000833E0[] = {
	{ -815, -190, -3464.092f },
	{ -830, -115, -3464.092f },
	{ -805, -50, -3464.092f },
	{ -760, -15, -3464.092f },
	{ -664, 0, -3464.092f },
	{ -560, 0, -3464.092f },
	{ -815, -190, -3338.728f },
	{ -830, -115, -3338.728f },
	{ -805, -50, -3338.728f },
	{ -760, -15, -3338.728f },
	{ -664, 0, -3338.728f },
	{ -560, 0, -3338.728f },
	{ -815, -190, -3236.365f },
	{ -815, -190, -3100.001f },
	{ -830, -115, -3236.365f },
	{ -830, -115, -3100.001f },
	{ -805, -50, -3236.365f },
	{ -805, -50, -3100.001f },
	{ -760, -15, -3236.365f },
	{ -760, -15, -3100.001f },
	{ -664, 0, -3236.365f },
	{ -664, 0, -3100.001f },
	{ -560, 0, -3236.365f },
	{ -560, 0, -3100.001f },
	{ -560, 0, -3574.773f },
	{ -664, 0, -3574.773f },
	{ -760, -15, -3574.773f },
	{ -805, -50, -3574.773f },
	{ -830, -115, -3574.773f },
	{ -815, -190, -3574.773f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00083548[] = {
	{ -0.980581f, -0.196116f, 0 },
	{ -0.996399f, 0.084787f, 0 },
	{ -0.854602f, 0.519283f, 0 },
	{ -0.396793f, 0.917908f, 0 },
	{ -0.07742099f, 0.996998f, 0 },
	{ 0, 1, 0 },
	{ -0.980581f, -0.196116f, 0 },
	{ -0.996399f, 0.084787f, 0 },
	{ -0.854602f, 0.519283f, 0 },
	{ -0.396793f, 0.917908f, 0 },
	{ -0.07742099f, 0.996998f, 0 },
	{ 0, 1, 0 },
	{ -0.980581f, -0.196116f, 0 },
	{ -0.980581f, -0.196116f, 0 },
	{ -0.996399f, 0.084787f, 0 },
	{ -0.996399f, 0.084787f, 0 },
	{ -0.803012f, 0.595962f, 0 },
	{ -0.803012f, 0.595962f, 0 },
	{ -0.396793f, 0.917908f, 0 },
	{ -0.396793f, 0.917908f, 0 },
	{ -0.07742099f, 0.996998f, 0 },
	{ -0.07742099f, 0.996998f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.07742099f, 0.996998f, 0 },
	{ -0.396793f, 0.917908f, 0 },
	{ -0.803012f, 0.595962f, 0 },
	{ -0.996399f, 0.084787f, 0 },
	{ -0.980581f, -0.196116f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000836B0 = { vertex_000833E0, normal_00083548, LengthOfArray<Sint32>(vertex_000833E0), meshlist_000833C8, matlist_000832B0, LengthOfArray<Uint16>(meshlist_000833C8), LengthOfArray<Uint16>(matlist_000832B0), { -695, -95, -3337.387f }, 273.0883f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000836D8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000836B0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008370C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00083720[] = {
	3, 21, 0, 20,
	0x8000u | 5, 20, 1, 0, 5, 4,
	0x8000u | 6, 7, 6, 2, 1, 19, 20,
	3, 7, 3, 2,
	0x8000u | 10, 8, 17, 7, 15, 6, 13, 5, 11, 4, 9,
	0x8000u | 10, 17, 18, 15, 16, 13, 14, 11, 12, 9, 10,
	3, 5, 6, 1
};

extern "C" __declspec(dllexport) NJS_TEX uv_00083780[] = {
	{ 7765, -3230 },
	{ 7765, -3454 },
	{ 8351, -3230 },
	{ 8351, -3230 },
	{ 8351, -3454 },
	{ 7765, -3454 },
	{ 8351, -3917 },
	{ 7765, -3917 },
	{ 9644, -3917 },
	{ 9058, -3917 },
	{ 9058, -3454 },
	{ 8351, -3454 },
	{ 9058, -3230 },
	{ 8351, -3230 },
	{ 9644, -3917 },
	{ 9644, -3454 },
	{ 9058, -3454 },
	{ 10200, -3917 },
	{ 10200, -4380 },
	{ 9644, -3917 },
	{ 9644, -4380 },
	{ 9058, -3917 },
	{ 9058, -4380 },
	{ 8351, -3917 },
	{ 8351, -4380 },
	{ 7765, -3917 },
	{ 7765, -4380 },
	{ 10200, -4380 },
	{ 10200, -4845 },
	{ 9644, -4380 },
	{ 9644, -4845 },
	{ 9058, -4380 },
	{ 9058, -4845 },
	{ 8351, -4380 },
	{ 8351, -4845 },
	{ 7765, -4380 },
	{ 7765, -4845 },
	{ 8351, -3917 },
	{ 9058, -3917 },
	{ 8351, -3454 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00083820[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_00083720, NULL, NULL, NULL, uv_00083780, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00083838[] = {
	{ 840, 0, -3509.092f },
	{ 935, -15, -3509.092f },
	{ 1050, -50, -3509.092f },
	{ 1145, -105, -3509.092f },
	{ 840, 0, -3372.728f },
	{ 935, -15, -3372.728f },
	{ 1050, -50, -3372.728f },
	{ 1145, -105, -3372.728f },
	{ 1235, -175, -3372.728f },
	{ 840, 0, -3236.365f },
	{ 840, 0, -3100.001f },
	{ 935, -15, -3236.365f },
	{ 935, -15, -3100.001f },
	{ 1050, -50, -3236.365f },
	{ 1050, -50, -3100.001f },
	{ 1145, -105, -3236.365f },
	{ 1145, -105, -3100.001f },
	{ 1235, -175, -3236.365f },
	{ 1235, -175, -3100.001f },
	{ 1050, -50, -3574.773f },
	{ 935, -15, -3574.773f },
	{ 840, 0, -3574.773f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00083940[] = {
	{ 0.155963f, 0.987763f, 0 },
	{ 0.224102f, 0.974566f, 0 },
	{ 0.36324f, 0.931696f, 0 },
	{ 0.501036f, 0.8654259f, 0 },
	{ 0.155963f, 0.987763f, 0 },
	{ 0.224102f, 0.974566f, 0 },
	{ 0.398718f, 0.917074f, 0 },
	{ 0.539784f, 0.841804f, 0 },
	{ 0.613941f, 0.789352f, 0 },
	{ 0.155963f, 0.987763f, 0 },
	{ 0.155963f, 0.987763f, 0 },
	{ 0.224102f, 0.974566f, 0 },
	{ 0.224102f, 0.974566f, 0 },
	{ 0.398718f, 0.917074f, 0 },
	{ 0.398718f, 0.917074f, 0 },
	{ 0.558785f, 0.829313f, 0 },
	{ 0.558785f, 0.829313f, 0 },
	{ 0.613941f, 0.789352f, 0 },
	{ 0.613941f, 0.789352f, 0 },
	{ 0.291162f, 0.956674f, 0 },
	{ 0.224102f, 0.974566f, 0 },
	{ 0.155963f, 0.987763f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00083A48 = { vertex_00083838, normal_00083940, LengthOfArray<Sint32>(vertex_00083838), meshlist_00083820, matlist_0008370C, LengthOfArray<Uint16>(meshlist_00083820), LengthOfArray<Uint16>(matlist_0008370C), { 1037.5f, -87.5f, -3337.387f }, 308.8016f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00083A70 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00083A48, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00083AA4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00083AB8[] = {
	8, 7, 5, 6, 4, 13, 12, 18, 17,
	0x8000u | 5, 20, 24, 21, 25, 22,
	11, 5, 3, 4, 2, 12, 11, 17, 16, 24, 23, 20,
	9, 3, 1, 2, 0, 11, 10, 16, 15, 23,
	3, 25, 17, 24,
	8, 18, 19, 13, 14, 6, 8, 7, 9
};

extern "C" __declspec(dllexport) NJS_TEX uv_00083B1C[] = {
	{ 9644, 255 },
	{ 9058, 255 },
	{ 9644, -208 },
	{ 9058, -208 },
	{ 9644, -672 },
	{ 9058, -672 },
	{ 9644, -1134 },
	{ 9058, -1134 },
	{ 7690, -1575 },
	{ 8351, -1354 },
	{ 8351, -1575 },
	{ 9058, -1354 },
	{ 9058, -1575 },
	{ 9058, 255 },
	{ 8351, 255 },
	{ 9058, -208 },
	{ 8351, -208 },
	{ 9058, -672 },
	{ 8351, -672 },
	{ 9058, -1134 },
	{ 8351, -1134 },
	{ 8351, -1354 },
	{ 7653, -1354 },
	{ 7690, -1575 },
	{ 8351, 255 },
	{ 7765, 255 },
	{ 8351, -208 },
	{ 7765, -208 },
	{ 8351, -672 },
	{ 7765, -672 },
	{ 8351, -1134 },
	{ 7543, -1134 },
	{ 7653, -1354 },
	{ 9058, -1354 },
	{ 9058, -1134 },
	{ 8351, -1354 },
	{ 9644, -1134 },
	{ 10200, -1134 },
	{ 9644, -672 },
	{ 10200, -672 },
	{ 9644, -208 },
	{ 10200, -208 },
	{ 9644, 255 },
	{ 10200, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00083BCC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_00083AB8, NULL, NULL, NULL, uv_00083B1C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00083BE4[] = {
	{ 840, 0, -4463.636f },
	{ 840, 0, -4600 },
	{ 935, -15, -4463.636f },
	{ 935, -15, -4600 },
	{ 1050, -50, -4463.636f },
	{ 1050, -50, -4600 },
	{ 1145, -105, -4463.636f },
	{ 1145, -105, -4600 },
	{ 1235, -175, -4463.636f },
	{ 1235, -175, -4600 },
	{ 840, 0, -4327.272f },
	{ 935, -15, -4327.272f },
	{ 1050, -50, -4327.272f },
	{ 1145, -105, -4327.272f },
	{ 1235, -175, -4327.272f },
	{ 804, 0, -4190.909f },
	{ 935, -15, -4190.909f },
	{ 1050, -50, -4190.909f },
	{ 1145, -105, -4190.909f },
	{ 1235, -175, -4190.909f },
	{ 828, 0, -4061.546f },
	{ 935, -15, -4061.546f },
	{ 1050, -50, -4061.546f },
	{ 822, 0, -4126.227f },
	{ 935, -15, -4126.227f },
	{ 1050, -50, -4126.227f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00083D1C[] = {
	{ 0.155963f, 0.987763f, 0 },
	{ 0.155963f, 0.987763f, 0 },
	{ 0.224102f, 0.974566f, 0 },
	{ 0.224102f, 0.974566f, 0 },
	{ 0.398718f, 0.917074f, 0 },
	{ 0.398718f, 0.917074f, 0 },
	{ 0.558785f, 0.829313f, 0 },
	{ 0.558785f, 0.829313f, 0 },
	{ 0.613941f, 0.789352f, 0 },
	{ 0.613941f, 0.789352f, 0 },
	{ 0.142872f, 0.989741f, 0 },
	{ 0.2181f, 0.975927f, 0 },
	{ 0.398718f, 0.917074f, 0 },
	{ 0.558785f, 0.829313f, 0 },
	{ 0.613941f, 0.789352f, 0 },
	{ 0.122722f, 0.9924099f, -0.007874f },
	{ 0.207695f, 0.978186f, -0.003972f },
	{ 0.36324f, 0.931696f, 0 },
	{ 0.558785f, 0.829313f, 0 },
	{ 0.613941f, 0.789352f, 0 },
	{ 0.138827f, 0.9902959f, -0.006439f },
	{ 0.215652f, 0.976465f, -0.003229f },
	{ 0.291162f, 0.956674f, 0 },
	{ 0.124935f, 0.992097f, -0.011644f },
	{ 0.209482f, 0.977796f, -0.005587f },
	{ 0.291162f, 0.956674f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00083E54 = { vertex_00083BE4, normal_00083D1C, LengthOfArray<Sint32>(vertex_00083BE4), meshlist_00083BCC, matlist_00083AA4, LengthOfArray<Uint16>(meshlist_00083BCC), LengthOfArray<Uint16>(matlist_00083AA4), { 1019.5f, -87.5f, -4330.772f }, 344.8528f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00083E7C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00083E54, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00083EB0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00083EC4[] = {
	0x8000u | 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0,
	10, 34, 28, 35, 29, 36, 30, 37, 31, 38, 32,
	0x8000u | 6, 16, 23, 15, 22, 14, 21,
	10, 38, 25, 37, 24, 36, 23, 35, 22, 34, 21,
	4, 20, 19, 27, 26,
	0x8000u | 14, 14, 0, 15, 2, 16, 4, 17, 6, 18, 8, 19, 10, 20, 12,
	0x8000u | 8, 18, 19, 25, 26, 38, 39, 32, 33
};

extern "C" __declspec(dllexport) NJS_TEX uv_00083F58[] = {
	{ 1009, 255 },
	{ 1009, -208 },
	{ 665, 255 },
	{ 665, -208 },
	{ 408, 255 },
	{ 408, -208 },
	{ 172, 255 },
	{ 172, -208 },
	{ 61, 255 },
	{ 61, -208 },
	{ 0, 255 },
	{ 0, -208 },
	{ 36, 255 },
	{ 36, -208 },
	{ 36, -1354 },
	{ 36, -1575 },
	{ 0, -1354 },
	{ 0, -1575 },
	{ 61, -1354 },
	{ 61, -1575 },
	{ 172, -1354 },
	{ 172, -1575 },
	{ 408, -1354 },
	{ 408, -1575 },
	{ 61, -672 },
	{ 61, -1134 },
	{ 0, -672 },
	{ 0, -1134 },
	{ 36, -672 },
	{ 36, -1134 },
	{ 408, -1354 },
	{ 408, -1134 },
	{ 172, -1354 },
	{ 172, -1134 },
	{ 61, -1354 },
	{ 61, -1134 },
	{ 0, -1354 },
	{ 0, -1134 },
	{ 36, -1354 },
	{ 36, -1134 },
	{ 1009, -672 },
	{ 722, -685 },
	{ 1020, -1134 },
	{ 753, -1134 },
	{ 36, -672 },
	{ 36, -208 },
	{ 0, -672 },
	{ 0, -208 },
	{ 61, -672 },
	{ 61, -208 },
	{ 172, -672 },
	{ 172, -208 },
	{ 408, -672 },
	{ 408, -208 },
	{ 722, -685 },
	{ 665, -208 },
	{ 1009, -672 },
	{ 1009, -208 },
	{ 408, -672 },
	{ 722, -685 },
	{ 408, -1134 },
	{ 753, -1134 },
	{ 408, -1354 },
	{ 701, -1354 },
	{ 408, -1575 },
	{ 689, -1575 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00084060[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_00083EC4, NULL, NULL, NULL, uv_00083F58, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00084078[] = {
	{ -815, -190, -4463.636f },
	{ -815, -190, -4600 },
	{ -830, -115, -4463.636f },
	{ -830, -115, -4600 },
	{ -805, -50, -4463.636f },
	{ -805, -50, -4600 },
	{ -760, -15, -4463.636f },
	{ -760, -15, -4600 },
	{ -664, 0, -4463.636f },
	{ -664, 0, -4600 },
	{ -560, 0, -4463.636f },
	{ -560, 0, -4600 },
	{ -420, 0, -4463.636f },
	{ -420, 0, -4600 },
	{ -815, -190, -4362.272f },
	{ -830, -115, -4362.272f },
	{ -805, -50, -4362.272f },
	{ -760, -15, -4362.272f },
	{ -664, 0, -4362.272f },
	{ -537, 0, -4334.272f },
	{ -420, 0, -4327.272f },
	{ -815, -190, -4231.909f },
	{ -830, -115, -4231.909f },
	{ -805, -50, -4231.909f },
	{ -760, -15, -4230.909f },
	{ -664, 0, -4225.909f },
	{ -524, 0, -4190.909f },
	{ -416, 0, -4190.909f },
	{ -815, -190, -4061.546f },
	{ -830, -115, -4061.546f },
	{ -805, -50, -4061.546f },
	{ -760, -15, -4061.546f },
	{ -664, 0, -4061.546f },
	{ -550, 0, -4061.546f },
	{ -815, -190, -4126.227f },
	{ -830, -115, -4126.227f },
	{ -805, -50, -4126.227f },
	{ -760, -15, -4126.227f },
	{ -664, 0, -4126.227f },
	{ -545, 0, -4126.227f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00084258[] = {
	{ -0.980581f, -0.196116f, 0 },
	{ -0.980581f, -0.196116f, 0 },
	{ -0.996399f, 0.084787f, 0 },
	{ -0.996399f, 0.084787f, 0 },
	{ -0.803012f, 0.595962f, 0 },
	{ -0.803012f, 0.595962f, 0 },
	{ -0.396793f, 0.917908f, 0 },
	{ -0.396793f, 0.917908f, 0 },
	{ -0.07742099f, 0.996998f, 0 },
	{ -0.07742099f, 0.996998f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.980581f, -0.196116f, 0 },
	{ -0.996399f, 0.084787f, 0 },
	{ -0.854602f, 0.519283f, 0 },
	{ -0.396793f, 0.917908f, 0 },
	{ -0.051597f, 0.998668f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.980581f, -0.196116f, 0 },
	{ -0.996399f, 0.084787f, 0 },
	{ -0.855315f, 0.518109f, 0 },
	{ -0.402052f, 0.915617f, 0 },
	{ -0.052712f, 0.99861f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.980581f, -0.196116f, 0 },
	{ -0.996399f, 0.084787f, 0 },
	{ -0.803012f, 0.595962f, 0 },
	{ -0.396793f, 0.917908f, 0 },
	{ -0.07742099f, 0.996998f, 0 },
	{ 0, 1, 0 },
	{ -0.980581f, -0.196116f, 0 },
	{ -0.996399f, 0.084787f, 0 },
	{ -0.803012f, 0.595962f, 0 },
	{ -0.396793f, 0.917908f, 0 },
	{ -0.07742099f, 0.996998f, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00084438 = { vertex_00084078, normal_00084258, LengthOfArray<Sint32>(vertex_00084078), meshlist_00084060, matlist_00083EB0, LengthOfArray<Uint16>(meshlist_00084060), LengthOfArray<Uint16>(matlist_00083EB0), { -623, -95, -4330.772f }, 339.6059f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00084460 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00084438, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00084494[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000844A8[] = {
	0x8000u | 5, 18, 20, 12, 21, 13,
	3, 21, 10, 20,
	8, 10, 11, 7, 8, 2, 4, 3, 5,
	11, 3, 1, 2, 0, 7, 6, 10, 9, 20, 19, 18,
	9, 1, 14, 0, 15, 6, 16, 9, 17, 19
};

extern "C" __declspec(dllexport) NJS_TEX uv_000844FC[] = {
	{ 5296, -1575 },
	{ 6069, -1354 },
	{ 6069, -1575 },
	{ 6803, -1354 },
	{ 6772, -1575 },
	{ 6803, -1354 },
	{ 6933, -1134 },
	{ 6069, -1354 },
	{ 6933, -1134 },
	{ 7543, -1134 },
	{ 6933, -672 },
	{ 7765, -672 },
	{ 6933, -208 },
	{ 7765, -208 },
	{ 6933, 255 },
	{ 7765, 255 },
	{ 6933, 255 },
	{ 6069, 255 },
	{ 6933, -208 },
	{ 6069, -208 },
	{ 6933, -672 },
	{ 6069, -672 },
	{ 6933, -1134 },
	{ 6069, -1134 },
	{ 6069, -1354 },
	{ 5296, -1354 },
	{ 5296, -1575 },
	{ 6069, 255 },
	{ 5296, 255 },
	{ 6069, -208 },
	{ 5296, -208 },
	{ 6069, -672 },
	{ 5296, -672 },
	{ 6069, -1134 },
	{ 5296, -1134 },
	{ 5296, -1354 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008458C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_000844A8, NULL, NULL, NULL, uv_000844FC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000845A4[] = {
	{ 565, 0, -4463.636f },
	{ 565, 0, -4600 },
	{ 705, 0, -4463.636f },
	{ 705, 0, -4600 },
	{ 840, 0, -4463.636f },
	{ 840, 0, -4600 },
	{ 565, 0, -4327.272f },
	{ 705, 0, -4327.272f },
	{ 840, 0, -4327.272f },
	{ 565, 0, -4190.909f },
	{ 705, 0, -4190.909f },
	{ 804, 0, -4190.909f },
	{ 565, 0, -4061.546f },
	{ 679, 0, -4061.546f },
	{ 439.5f, 0, -4600 },
	{ 439.5f, 0, -4463.636f },
	{ 439.5f, 0, -4327.272f },
	{ 439.5f, 0, -4190.909f },
	{ 439.5f, 0, -4061.546f },
	{ 439.5f, 0, -4126.227f },
	{ 565, 0, -4126.227f },
	{ 684, 0, -4126.227f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000846AC[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000847B4 = { vertex_000845A4, normal_000846AC, LengthOfArray<Sint32>(vertex_000845A4), meshlist_0008458C, matlist_00084494, LengthOfArray<Uint16>(meshlist_0008458C), LengthOfArray<Uint16>(matlist_00084494), { 639.75f, 0, -4330.772f }, 335.5343f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000847DC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000847B4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00084810[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00084824[] = {
	3, 30, 23, 27,
	0x8000u | 7, 20, 11, 19, 6, 18, 7, 17,
	0x8000u | 7, 21, 16, 25, 24, 20, 15, 11,
	6, 15, 23, 24, 30, 16, 28,
	10, 3, 1, 2, 0, 9, 8, 13, 12, 29, 22,
	10, 5, 3, 4, 2, 10, 9, 14, 13, 26, 29,
	11, 7, 5, 6, 4, 11, 10, 15, 14, 23, 26, 27
};

extern "C" __declspec(dllexport) NJS_TEX uv_000848A0[] = {
	{ 4344, -1420 },
	{ 4344, -1354 },
	{ 4152, -1355 },
	{ 5296, -1134 },
	{ 5152, -672 },
	{ 5296, -672 },
	{ 5152, -208 },
	{ 5296, -208 },
	{ 5152, 255 },
	{ 5296, 255 },
	{ 5296, -1575 },
	{ 5152, -1575 },
	{ 5296, -1354 },
	{ 5152, -1354 },
	{ 5296, -1134 },
	{ 5152, -1134 },
	{ 5152, -672 },
	{ 5152, -1134 },
	{ 4344, -1354 },
	{ 5152, -1354 },
	{ 4344, -1420 },
	{ 5152, -1575 },
	{ 4757, -1575 },
	{ 3451, 255 },
	{ 2587, 255 },
	{ 3451, -208 },
	{ 2587, -208 },
	{ 3451, -672 },
	{ 2587, -672 },
	{ 3451, -1134 },
	{ 2587, -1134 },
	{ 2747, -1354 },
	{ 2587, -1354 },
	{ 4344, 255 },
	{ 3451, 255 },
	{ 4344, -208 },
	{ 3451, -208 },
	{ 4344, -672 },
	{ 3451, -672 },
	{ 4344, -1134 },
	{ 3451, -1134 },
	{ 3451, -1275 },
	{ 2747, -1354 },
	{ 5152, 255 },
	{ 4344, 255 },
	{ 5152, -208 },
	{ 4344, -208 },
	{ 5152, -672 },
	{ 4344, -672 },
	{ 5152, -1134 },
	{ 4344, -1134 },
	{ 4344, -1354 },
	{ 3451, -1275 },
	{ 4152, -1355 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00084978[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_00084824, NULL, NULL, NULL, uv_000848A0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00084990[] = {
	{ 0, 0, -4463.636f },
	{ 0, 0, -4600 },
	{ 140, 0, -4463.636f },
	{ 140, 0, -4600 },
	{ 285, 0, -4463.636f },
	{ 285, 0, -4600 },
	{ 416, 0, -4463.636f },
	{ 416, 0, -4600 },
	{ 0, 0, -4327.272f },
	{ 140, 0, -4327.272f },
	{ 285, 0, -4327.272f },
	{ 416, 0, -4327.272f },
	{ 0, 0, -4190.909f },
	{ 140, 0, -4190.909f },
	{ 285, 0, -4190.909f },
	{ 416, 0, -4190.909f },
	{ 416, 0, -4061.546f },
	{ 439.5f, 0, -4600 },
	{ 439.5f, 0, -4463.636f },
	{ 439.5f, 0, -4327.272f },
	{ 439.5f, 0, -4190.909f },
	{ 439.5f, 0, -4061.546f },
	{ 0, 0, -4126.227f },
	{ 285, 0, -4126.227f },
	{ 416, 0, -4126.227f },
	{ 439.5f, 0, -4126.227f },
	{ 140, 0, -4150 },
	{ 254, 0, -4126 },
	{ 352.0773f, 0, -4061.546f },
	{ 25.98575f, 0, -4126.227f },
	{ 285, 0, -4106.955f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00084B04[] = {
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
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00084C78 = { vertex_00084990, normal_00084B04, LengthOfArray<Sint32>(vertex_00084990), meshlist_00084978, matlist_00084810, LengthOfArray<Uint16>(meshlist_00084978), LengthOfArray<Uint16>(matlist_00084810), { 219.75f, 0, -4330.772f }, 347.5244f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00084CA0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00084C78, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00084CD4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 56, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00084CFC[] = {
	3, 34, 38, 49,
	3, 58, 36, 57,
	0x8000u | 6, 8, 29, 11, 34, 14, 38,
	0x8000u | 10, 33, 32, 28, 27, 42, 40, 23, 22, 18, 17,
	8, 32, 27, 56, 55, 39, 20, 41, 21,
	5, 26, 31, 25, 30, 57,
	0x8000u | 7, 48, 52, 29, 51, 34, 50, 49,
	3, 27, 40, 55,
	0x8000u | 10, 18, 1, 23, 4, 42, 44, 28, 7, 33, 10,
	7, 21, 20, 15, 54, 53, 22, 17,
	3, 15, 16, 21,
	0x8000u | 8, 1, 0, 4, 3, 44, 46, 7, 6,
	4, 29, 48, 8, 47,
	14, 41, 26, 39, 25, 56, 57, 32, 36, 33, 37, 10, 13, 9, 12,
	5, 20, 55, 54, 40, 22,
	0x8000u | 8, 35, 49, 31, 50, 26, 51, 41, 52,
	4, 9, 6, 10, 7
};

extern "C" __declspec(dllexport) Sint16 poly_00084DF6[] = {
	6, 5, 45, 24, 43, 21, 41,
	6, 21, 16, 24, 19, 5, 2,
	0x8000u | 6, 41, 52, 43, 48, 45, 47
};

extern "C" __declspec(dllexport) NJS_TEX uv_00084E20[] = {
	{ -2951, 2693 },
	{ -3397, 2693 },
	{ -3420, 2190 },
	{ -3420, 1727 },
	{ -3420, 1679 },
	{ -2948, 1727 },
	{ -2505, 3235 },
	{ -2505, 2693 },
	{ -2951, 3235 },
	{ -2951, 2693 },
	{ -3397, 3235 },
	{ -3397, 2693 },
	{ -2951, 1195 },
	{ -2948, 1679 },
	{ -2505, 1195 },
	{ -2476, 1679 },
	{ -2393, 1195 },
	{ -2401, 1679 },
	{ -2003, 1195 },
	{ -2005, 1679 },
	{ -1501, 1195 },
	{ -1497, 1679 },
	{ -2948, 1679 },
	{ -2476, 1679 },
	{ -2476, 1727 },
	{ -2401, 1727 },
	{ -2401, 1935 },
	{ -2005, 1935 },
	{ -2401, 2144 },
	{ -2005, 2144 },
	{ -2476, 2144 },
	{ -2948, 2144 },
	{ -2476, 1935 },
	{ -2948, 1935 },
	{ -2948, 1727 },
	{ -2450, 2693 },
	{ -2450, 2183 },
	{ -2505, 2693 },
	{ -2505, 2183 },
	{ -2951, 2693 },
	{ -2948, 2190 },
	{ -3420, 2190 },
	{ -2476, 1679 },
	{ -2401, 1679 },
	{ -2401, 1727 },
	{ -1501, 1195 },
	{ -1501, 717 },
	{ -2003, 1195 },
	{ -2003, 717 },
	{ -2393, 1195 },
	{ -2393, 717 },
	{ -2505, 1195 },
	{ -2393, 717 },
	{ -2951, 1195 },
	{ -2951, 717 },
	{ -2005, 2144 },
	{ -2005, 1935 },
	{ -1497, 1935 },
	{ -2005, 1727 },
	{ -1497, 1727 },
	{ -2005, 1679 },
	{ -1497, 1679 },
	{ -1497, 1935 },
	{ -1497, 2144 },
	{ -2005, 2144 },
	{ -1501, 717 },
	{ -1501, 239 },
	{ -2003, 717 },
	{ -2003, 239 },
	{ -2393, 717 },
	{ -2393, 239 },
	{ -2505, 749 },
	{ -2505, 239 },
	{ -2450, 2693 },
	{ -2505, 2693 },
	{ -2450, 3235 },
	{ -2505, 3235 },
	{ -2401, 2144 },
	{ -2476, 2144 },
	{ -2401, 1935 },
	{ -2476, 1935 },
	{ -2476, 1727 },
	{ -2948, 1727 },
	{ -2948, 1679 },
	{ -3420, 1679 },
	{ -2951, 1195 },
	{ -3397, 1195 },
	{ -2951, 717 },
	{ -3397, 717 },
	{ -2951, 239 },
	{ -3397, 239 },
	{ -2005, 1935 },
	{ -2401, 1727 },
	{ -2005, 1727 },
	{ -2401, 1679 },
	{ -2005, 1679 },
	{ -3420, 2144 },
	{ -3420, 2190 },
	{ -2948, 2144 },
	{ -2948, 2190 },
	{ -2476, 2144 },
	{ -2476, 2190 },
	{ -2401, 2144 },
	{ -2401, 2190 },
	{ -2951, 239 },
	{ -2505, 239 },
	{ -2951, 717 },
	{ -2393, 717 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00084FD0[] = {
	{ 569, 253 },
	{ 1019, 255 },
	{ 569, -255 },
	{ 1019, -256 },
	{ 569, -765 },
	{ 1019, -765 },
	{ 569, -765 },
	{ 0, -765 },
	{ 569, -255 },
	{ 0, -255 },
	{ 569, 253 },
	{ 0, 253 },
	{ 3, -761 },
	{ 131, -761 },
	{ 3, -258 },
	{ 131, -258 },
	{ 3, 251 },
	{ 131, 251 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00085018[] = {
	{ NJD_MESHSET_TRIMESH | 0, 17, poly_00084CFC, NULL, NULL, NULL, uv_00084E20, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_00084DF6, NULL, NULL, NULL, uv_00084FD0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00085048[] = {
	{ -499.9231f, -240, -200 },
	{ -499.9231f, -126.6667f, -200 },
	{ -499.9231f, -126.6667f, -20 },
	{ -360.3846f, -240, -200 },
	{ -360.3846f, -126.6667f, -200 },
	{ -360.3846f, -126.6667f, -20 },
	{ -228.8462f, -240, -200 },
	{ -228.8462f, -126.6667f, -200 },
	{ -228.8462f, -126.6667f, 0 },
	{ -97.30769f, -240, -200 },
	{ -97.30769f, -126.6667f, -200 },
	{ -97.30769f, -126.6667f, 0 },
	{ 34.23077f, -240, -200 },
	{ 34.23077f, -126.6667f, -200 },
	{ 34.23077f, -126.6667f, 0 },
	{ -499.9231f, 100, -100 },
	{ -499.9231f, 100, -20 },
	{ -499.9231f, 100, -200 },
	{ -499.9231f, -13.33334f, -200 },
	{ -499.9231f, -13.33334f, -20 },
	{ -360.3846f, 100, -100 },
	{ -360.3846f, 100, -20 },
	{ -360.3846f, 100, -200 },
	{ -360.3846f, -13.33334f, -200 },
	{ -360.3846f, -13.33334f, -20 },
	{ -228.8462f, 100, -100 },
	{ -228.8462f, 100, -20 },
	{ -228.8462f, 100, -200 },
	{ -228.8462f, -13.33334f, -200 },
	{ -228.8462f, -13.33334f, 0 },
	{ -97.30769f, 100, -100 },
	{ -97.30769f, 100, -20 },
	{ -97.30769f, 100, -200 },
	{ -97.30769f, -13.33334f, -200 },
	{ -97.30769f, -13.33334f, 0 },
	{ 34.23077f, 100, -20 },
	{ 34.23077f, 100, -200 },
	{ 34.23077f, -13.33334f, -200 },
	{ 34.23077f, -13.33334f, 0 },
	{ -250, 100, -100 },
	{ -250, 100, -200 },
	{ -250, 100, -20 },
	{ -250, -13, -200 },
	{ -250, -13, -20 },
	{ -250, -127, -200 },
	{ -250, -127, -20 },
	{ -250, -240, -200 },
	{ -250, -127, 0 },
	{ -250, -13, 0 },
	{ 34.23077f, 100, 0 },
	{ -97.30769f, 100, 0 },
	{ -228.8462f, 100, 0 },
	{ -250, 100, 0 },
	{ -499.9231f, 100, -180 },
	{ -360.3846f, 100, -180 },
	{ -250, 100, -180 },
	{ -228.8462f, 100, -180 },
	{ -97.30769f, 100, -180 },
	{ 34.23077f, 100, -180 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008530C[] = {
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ -0.301511f, 0.904534f, 0.301511f },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 0, -1 },
	{ -0.707787f, 0, 0.706426f },
	{ 0, 0, -1 },
	{ -0.7106619f, 0, 0.7035339f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000855D0 = { vertex_00085048, normal_0008530C, LengthOfArray<Sint32>(vertex_00085048), meshlist_00085018, matlist_00084CD4, LengthOfArray<Uint16>(meshlist_00085018), LengthOfArray<Uint16>(matlist_00084CD4), { -232.8462f, -70, -100 }, 285.1843f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000855F8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000855D0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008562C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00085640[] = {
	11, 26, 44, 42, 30, 25, 43, 41, 34, 27, 28, 23,
	15, 7, 29, 24, 21, 16, 40, 38, 20, 15, 39, 37, 22, 17, 18, 13,
	13, 29, 26, 21, 42, 40, 25, 20, 41, 39, 27, 22, 23, 18,
	3, 32, 28, 34,
	0x8000u | 5, 19, 5, 3, 4, 2,
	0x8000u | 7, 11, 19, 14, 3, 1, 2, 0,
	16, 6, 7, 5, 24, 19, 16, 11, 38, 35, 15, 10, 37, 36, 17, 12, 13,
	3, 5, 4, 6,
	9, 6, 8, 7, 9, 29, 33, 26, 31, 44
};

extern "C" __declspec(dllexport) NJS_TEX uv_000856F8[] = {
	{ 2951, -1657 },
	{ 2877, -2295 },
	{ 2877, -1657 },
	{ 2518, -2295 },
	{ 2518, -1657 },
	{ 2160, -2295 },
	{ 2160, -1657 },
	{ 2086, -2295 },
	{ 2086, -1657 },
	{ 1658, -1657 },
	{ 1658, -1020 },
	{ 4218, -1657 },
	{ 3378, -1657 },
	{ 3378, -1020 },
	{ 2951, -1020 },
	{ 2951, -382 },
	{ 2877, -1020 },
	{ 2877, -382 },
	{ 2518, -1020 },
	{ 2518, -382 },
	{ 2160, -1020 },
	{ 2160, -382 },
	{ 2086, -1020 },
	{ 2086, -382 },
	{ 1658, -382 },
	{ 1658, 254 },
	{ 3378, -1657 },
	{ 2951, -1657 },
	{ 2951, -1020 },
	{ 2877, -1657 },
	{ 2877, -1020 },
	{ 2518, -1657 },
	{ 2518, -1020 },
	{ 2160, -1657 },
	{ 2160, -1020 },
	{ 2086, -1657 },
	{ 2086, -1020 },
	{ 1658, -1020 },
	{ 1658, -382 },
	{ 1658, -2295 },
	{ 1658, -1657 },
	{ 2086, -2295 },
	{ 3378, -382 },
	{ 4218, -1019 },
	{ 4218, -382 },
	{ 4646, -1019 },
	{ 4646, -382 },
	{ 2951, 254 },
	{ 3378, -382 },
	{ 3378, 254 },
	{ 4218, -382 },
	{ 4218, 254 },
	{ 4646, -382 },
	{ 4646, 255 },
	{ 4646, -1657 },
	{ 4218, -1657 },
	{ 4218, -1019 },
	{ 3378, -1020 },
	{ 3378, -382 },
	{ 2951, -382 },
	{ 2951, 254 },
	{ 2877, -382 },
	{ 2877, 254 },
	{ 2518, -382 },
	{ 2518, 254 },
	{ 2160, -382 },
	{ 2160, 254 },
	{ 2086, -382 },
	{ 2086, 254 },
	{ 1658, 254 },
	{ 4218, -1019 },
	{ 4646, -1019 },
	{ 4646, -1657 },
	{ 4646, -1657 },
	{ 4646, -2294 },
	{ 4218, -1657 },
	{ 4218, -2294 },
	{ 3378, -1657 },
	{ 3378, -2295 },
	{ 2951, -1657 },
	{ 2951, -2295 },
	{ 2877, -2295 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00085840[] = {
	{ NJD_MESHSET_TRIMESH | 0, 9, poly_00085640, NULL, NULL, NULL, uv_000856F8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00085858[] = {
	{ -491.923f, -240, -2900 },
	{ -491.923f, -126.6667f, -2900 },
	{ -360.3846f, -240, -2900 },
	{ -360.3846f, -126.6667f, -2900 },
	{ -228.8462f, -240, -2900 },
	{ -228.8462f, -126.6667f, -2900 },
	{ -97.30769f, -240, -2900 },
	{ -97.30769f, -126.6667f, -2900 },
	{ 34.23077f, -240, -2900 },
	{ 34.23077f, -126.6667f, -2900 },
	{ -491.923f, 100, -3000 },
	{ -491.923f, 100, -2900 },
	{ -491.923f, 100, -3100 },
	{ -491.923f, -13.33334f, -3100 },
	{ -491.923f, -13.33334f, -2900 },
	{ -360.3846f, 100, -3000 },
	{ -360.3846f, 100, -2900 },
	{ -360.3846f, 100, -3100 },
	{ -360.3846f, -13.33334f, -3100 },
	{ -360.3846f, -13.33334f, -2900 },
	{ -228.8462f, 100, -3000 },
	{ -228.8462f, 100, -2900 },
	{ -228.8462f, 100, -3100 },
	{ -228.8462f, -13.33334f, -3100 },
	{ -228.8462f, -13.33334f, -2900 },
	{ -97.30769f, 100, -3000 },
	{ -97.30769f, 100, -2900 },
	{ -97.30769f, 100, -3100 },
	{ -97.30769f, -13.33334f, -3100 },
	{ -97.30769f, -13.33334f, -2900 },
	{ 34.23077f, 100, -3000 },
	{ 34.23077f, 100, -2900 },
	{ 34.23077f, -13.33334f, -3100 },
	{ 34.23077f, -13.33334f, -2900 },
	{ 34.23077f, 100, -3100 },
	{ -491.923f, 100, -2920 },
	{ -491.923f, 100, -3080 },
	{ -360.3846f, 100, -3080 },
	{ -360.3846f, 100, -2920 },
	{ -228.8462f, 100, -3080 },
	{ -228.8462f, 100, -2920 },
	{ -97.30769f, 100, -3080 },
	{ -97.30769f, 100, -2920 },
	{ 34.23077f, 100, -3080 },
	{ 34.23077f, 100, -2920 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00085A74[] = {
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
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, -0.7071069f },
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00085C90 = { vertex_00085858, normal_00085A74, LengthOfArray<Sint32>(vertex_00085858), meshlist_00085840, matlist_0008562C, LengthOfArray<Uint16>(meshlist_00085840), LengthOfArray<Uint16>(matlist_0008562C), { -228.8461f, -70, -3000 }, 281.4417f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00085CB8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00085C90, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00085CEC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00085D00[] = {
	0x8000u | 10, 20, 18, 35, 34, 21, 19, 17, 16, 14, 13,
	8, 30, 24, 31, 0, 32, 3, 33, 28,
	8, 33, 29, 32, 27, 31, 23, 30, 22,
	6, 24, 26, 0, 1, 3, 2,
	0x8000u | 10, 9, 10, 37, 36, 11, 12, 7, 8, 4, 5,
	6, 26, 25, 1, 15, 2, 6,
	0x8000u | 10, 10, 20, 36, 35, 12, 21, 8, 17, 5, 14
};

extern "C" __declspec(dllexport) NJS_TEX uv_00085D84[] = {
	{ -5840, 1195 },
	{ -5840, 1641 },
	{ -5602, 1195 },
	{ -5602, 1641 },
	{ -5361, 1195 },
	{ -5361, 1641 },
	{ -4883, 1195 },
	{ -4883, 1641 },
	{ -4501, 1195 },
	{ -4501, 1641 },
	{ -5602, 2215 },
	{ -5361, 2215 },
	{ -5602, 2693 },
	{ -5361, 2693 },
	{ -5602, 3235 },
	{ -5361, 3235 },
	{ -5602, 3809 },
	{ -5361, 3809 },
	{ -5602, 3809 },
	{ -5840, 3809 },
	{ -5602, 3235 },
	{ -5840, 3235 },
	{ -5602, 2693 },
	{ -5840, 2693 },
	{ -5602, 2215 },
	{ -5840, 2215 },
	{ -5361, 2215 },
	{ -4932, 2215 },
	{ -5361, 2693 },
	{ -4932, 2693 },
	{ -5361, 3235 },
	{ -4932, 3235 },
	{ -5840, 239 },
	{ -5840, 717 },
	{ -5602, 239 },
	{ -5602, 717 },
	{ -5361, 239 },
	{ -5361, 717 },
	{ -4883, 239 },
	{ -4883, 717 },
	{ -4501, 239 },
	{ -4501, 717 },
	{ -4932, 2215 },
	{ -4501, 2215 },
	{ -4932, 2693 },
	{ -4501, 2693 },
	{ -4932, 3235 },
	{ -4501, 3235 },
	{ -5840, 717 },
	{ -5840, 1195 },
	{ -5602, 717 },
	{ -5602, 1195 },
	{ -5361, 717 },
	{ -5361, 1195 },
	{ -4883, 717 },
	{ -4883, 1195 },
	{ -4501, 717 },
	{ -4501, 1195 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00085E6C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_00085D00, NULL, NULL, NULL, uv_00085D84, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00085E84[] = {
	{ 823.4615f, -13.33334f, 0 },
	{ 691.9231f, -13.33334f, 0 },
	{ 691.9231f, -126.6667f, 0 },
	{ 823.4615f, -126.6667f, 0 },
	{ 560.3846f, -240, -200 },
	{ 560.3846f, -126.6667f, -200 },
	{ 560.3846f, -126.6667f, 0 },
	{ 691.9231f, -240, -200 },
	{ 691.9231f, -126.6667f, -200 },
	{ 1000, -240, -200 },
	{ 983, -126.6667f, -200 },
	{ 823.4615f, -240, -200 },
	{ 823.4615f, -126.6667f, -200 },
	{ 560.3846f, 88.5f, -200 },
	{ 560.3846f, -13.33334f, -200 },
	{ 560.3846f, -13.33334f, 0 },
	{ 691.9231f, 77, -200 },
	{ 691.9231f, -13.33334f, -200 },
	{ 955, 56, -200 },
	{ 823.5f, 66, -200 },
	{ 966, -13.5f, -200 },
	{ 823.4615f, -13.33334f, -200 },
	{ 955, 56, 0 },
	{ 966, -13.5f, 0 },
	{ 823.5f, 66, 0 },
	{ 560.3846f, 88.5f, 0 },
	{ 691.9231f, 77, 0 },
	{ 983, -126.6667f, 0 },
	{ 823.4615f, -240, 0 },
	{ 1000, -240, 0 },
	{ 892.1608f, 60.77864f, 0 },
	{ 895.6663f, -13.41776f, 0 },
	{ 901.5938f, -126.6667f, 0 },
	{ 915.1078f, -240, 0 },
	{ 890.8159f, 60.88091f, -200 },
	{ 893.6686f, -13.41543f, -200 },
	{ 903.0887f, -126.6667f, -200 },
	{ 908.3656f, -240, -200 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008604C[] = {
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
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
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00086214 = { vertex_00085E84, normal_0008604C, LengthOfArray<Sint32>(vertex_00085E84), meshlist_00085E6C, matlist_00085CEC, LengthOfArray<Uint16>(meshlist_00085E6C), LengthOfArray<Uint16>(matlist_00085CEC), { 780.1923f, -75.75f, -100 }, 241.4858f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008623C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00086214, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00086270[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00086284[] = {
	0x8000u | 8, 6, 59, 9, 57, 0, 56, 14, 54,
	5, 16, 55, 53, 12, 15,
	8, 37, 34, 47, 68, 66, 33, 46, 67,
	0x8000u | 15, 50, 44, 26, 43, 23, 48, 3, 63, 61, 4, 7, 60, 58, 11, 13,
	5, 52, 19, 14, 17, 54,
	3, 20, 21, 13,
	18, 21, 49, 13, 24, 11, 8, 60, 62, 4, 1, 63, 65, 48, 35, 43, 36, 44, 28,
	20, 22, 52, 50, 14, 26, 0, 23, 9, 3, 6, 61, 59, 7, 10, 58, 55, 13, 16, 20, 18,
	8, 40, 67, 70, 33, 38, 68, 69, 34,
	8, 27, 29, 45, 51, 25, 2, 5, 64,
	0x8000u | 19, 27, 49, 45, 24, 25, 8, 5, 62, 64, 1, 46, 65, 67, 35, 40, 36, 41, 28, 31,
	0x8000u | 5, 59, 10, 57, 12, 56,
	9, 27, 30, 29, 32, 37, 42, 34, 39, 69,
	4, 54, 15, 56, 12,
	8, 29, 37, 51, 47, 2, 66, 64, 46,
	3, 10, 12, 55
};

extern "C" __declspec(dllexport) NJS_TEX uv_000863C8[] = {
	{ 2124, -278 },
	{ 2059, 70 },
	{ 1975, -62 },
	{ 1372, -218 },
	{ 1346, -350 },
	{ 510, -394 },
	{ 600, -526 },
	{ 282, 139 },
	{ 4685, 6 },
	{ 4527, -394 },
	{ 4754, 139 },
	{ 5059, -278 },
	{ 5059, 255 },
	{ 3062, -1622 },
	{ 2839, -1622 },
	{ 2839, -1082 },
	{ 2780, -1622 },
	{ 2780, -948 },
	{ 2518, -1622 },
	{ 2518, -833 },
	{ 2257, -1622 },
	{ 600, -1082 },
	{ 1349, -1082 },
	{ 1349, -529 },
	{ 1975, -1082 },
	{ 1975, -528 },
	{ 2197, -1082 },
	{ 2171, -529 },
	{ 2234, -396 },
	{ 2195, -146 },
	{ 2518, -31 },
	{ 2518, 185 },
	{ 2978, 70 },
	{ 3665, -218 },
	{ 3692, -350 },
	{ 4437, -526 },
	{ 280, -554 },
	{ 306, -95 },
	{ 600, -526 },
	{ 352, 6 },
	{ 282, 139 },
	{ 4757, -554 },
	{ 4757, -1082 },
	{ 4437, -526 },
	{ 4757, -1082 },
	{ 4437, -1082 },
	{ 4437, -526 },
	{ 3687, -529 },
	{ 3692, -350 },
	{ 3062, -62 },
	{ 2978, 70 },
	{ 2842, -146 },
	{ 2518, -31 },
	{ 2518, -282 },
	{ 2234, -396 },
	{ 2257, -948 },
	{ 2197, -1082 },
	{ 2197, -1622 },
	{ 1975, -1082 },
	{ 1975, -1622 },
	{ 1349, -1082 },
	{ 1348, -1622 },
	{ 280, -1082 },
	{ 280, -554 },
	{ 600, -1082 },
	{ 600, -526 },
	{ 1349, -529 },
	{ 1346, -350 },
	{ 1975, -528 },
	{ 1975, -62 },
	{ 2171, -529 },
	{ 2124, -278 },
	{ 2195, -146 },
	{ 2059, 70 },
	{ 2518, 185 },
	{ 2518, -103 },
	{ 3665, -218 },
	{ 4527, -394 },
	{ 4437, -526 },
	{ 4685, 6 },
	{ 4757, -554 },
	{ 4731, -95 },
	{ 2197, -2295 },
	{ 2257, -1622 },
	{ 2257, -2295 },
	{ 2518, -1622 },
	{ 2518, -2295 },
	{ 2780, -1622 },
	{ 2780, -2295 },
	{ 2839, -1622 },
	{ 4437, -1622 },
	{ 3688, -1622 },
	{ 3687, -1082 },
	{ 3062, -1082 },
	{ 3061, -528 },
	{ 2866, -529 },
	{ 2913, -278 },
	{ 2803, -396 },
	{ 4437, -1622 },
	{ 4437, -1082 },
	{ 3687, -1082 },
	{ 3687, -529 },
	{ 3061, -528 },
	{ 3062, -62 },
	{ 2913, -278 },
	{ 2842, -146 },
	{ 2803, -396 },
	{ 2518, -282 },
	{ 2518, -833 },
	{ 2257, -948 },
	{ 2257, -1622 },
	{ 2197, -1622 },
	{ 2197, -2295 },
	{ 1975, -1622 },
	{ 1975, -2295 },
	{ 1348, -1622 },
	{ 1348, -2295 },
	{ 2059, 70 },
	{ 2518, -103 },
	{ 1372, -218 },
	{ 5059, -278 },
	{ 510, -394 },
	{ 4437, -1622 },
	{ 4437, -2294 },
	{ 3688, -1622 },
	{ 3688, -2295 },
	{ 3062, -1622 },
	{ 3062, -2295 },
	{ 2839, -1622 },
	{ 2839, -2295 },
	{ 2780, -2295 },
	{ 282, 139 },
	{ -40, 255 },
	{ 510, -394 },
	{ -40, -278 },
	{ 3688, -1622 },
	{ 3062, -1622 },
	{ 3062, -1082 },
	{ 2839, -1082 },
	{ 2866, -529 },
	{ 2780, -948 },
	{ 2803, -396 },
	{ 2518, -833 },
	{ 2518, -103 },
	{ 5059, -278 },
	{ 4527, -394 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00086610[] = {
	{ NJD_MESHSET_TRIMESH | 0, 16, poly_00086284, NULL, NULL, NULL, uv_000863C8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00086628[] = {
	{ -872, -127, -3100 },
	{ -885.5f, 80, -3000 },
	{ -837, 80, -2900 },
	{ -837, 80, -3100 },
	{ -934.5f, 50, -3000 },
	{ -886, 50, -2900 },
	{ -886, 50, -3100 },
	{ -977, -13.5f, -3000 },
	{ -928.5f, -13.5f, -2900 },
	{ -928.5f, -13.5f, -3100 },
	{ -920.5f, -127, -3000 },
	{ -872, -127, -2900 },
	{ -886, -240, -3000 },
	{ -837.5f, -240, -2900 },
	{ -837.5f, -240, -3100 },
	{ -990.5f, -330.5f, -3000 },
	{ -942, -330.5f, -2900 },
	{ -942, -330.5f, -3100 },
	{ -922, -360.5f, -2900 },
	{ -922, -360.5f, -3100 },
	{ -832, -380.5f, -2900 },
	{ -729, -380.5f, -2900 },
	{ -729, -380.5f, -3100 },
	{ -837.25f, -13.25f, -3100 },
	{ -837, -126.5f, -2900 },
	{ -837.25f, -13.25f, -2900 },
	{ -837, -126.5f, -3100 },
	{ -623.4615f, -240, -2900 },
	{ -623.4615f, -126.6667f, -3100 },
	{ -623.4615f, -126.6667f, -2900 },
	{ -491.923f, -240, -2900 },
	{ -491.923f, -126.6667f, -3100 },
	{ -491.923f, -126.6667f, -2900 },
	{ -623.4615f, 100, -3000 },
	{ -623.4615f, 100, -2900 },
	{ -623.4615f, 100, -3100 },
	{ -623.4615f, -13.33334f, -3100 },
	{ -623.4615f, -13.33334f, -2900 },
	{ -491.923f, 100, -3000 },
	{ -491.923f, 100, -2900 },
	{ -491.923f, 100, -3100 },
	{ -491.923f, -13.33334f, -3100 },
	{ -491.923f, -13.33334f, -2900 },
	{ -729, -13.5f, -3100 },
	{ -729, -126.5f, -3100 },
	{ -729, -126.5f, -2900 },
	{ -777.5f, 100, -3000 },
	{ -729, 100, -2900 },
	{ -729, 100, -3100 },
	{ -729, -240, -2900 },
	{ -729, -240, -3100 },
	{ -729, -13.5f, -2900 },
	{ -832, -380.5f, -3100 },
	{ -968, -330.5f, -2920 },
	{ -968, -330.5f, -3080 },
	{ -863.5f, -240, -2920 },
	{ -863.5f, -240, -3080 },
	{ -898, -127, -3080 },
	{ -898, -127, -2920 },
	{ -954.5f, -13.5f, -3080 },
	{ -954.5f, -13.5f, -2920 },
	{ -912, 50, -3080 },
	{ -912, 50, -2920 },
	{ -863, 80, -3080 },
	{ -863, 80, -2920 },
	{ -755, 100, -3080 },
	{ -755, 100, -2920 },
	{ -623.4615f, 100, -3080 },
	{ -623.4615f, 100, -2920 },
	{ -491.923f, 100, -2920 },
	{ -491.923f, 100, -3080 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008697C[] = {
	{ -0.300561f, -0.114611f, -0.946851f },
	{ -0.385141f, 0.922858f, 0 },
	{ -0.162899f, 0.603269f, 0.780724f },
	{ -0.162899f, 0.603269f, -0.780724f },
	{ -0.7110389f, 0.7031519f, 0 },
	{ -0.296474f, 0.373835f, 0.878835f },
	{ -0.296474f, 0.373835f, -0.878835f },
	{ -0.998257f, 0.059021f, 0 },
	{ -0.41042f, 0.037027f, 0.911144f },
	{ -0.41042f, 0.037027f, -0.911144f },
	{ -0.926989f, -0.375087f, 0 },
	{ -0.300561f, -0.114611f, 0.946851f },
	{ -0.952213f, 0.305436f, 0 },
	{ -0.208001f, 0.047658f, 0.976967f },
	{ -0.208001f, 0.047658f, -0.976967f },
	{ -0.654655f, 0.755928f, 0 },
	{ -0.310313f, 0.358318f, 0.880519f },
	{ -0.310313f, 0.358318f, -0.880519f },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ -0.107201f, 0.9942369f, 0 },
	{ -0.027146f, 0.709031f, 0.704654f },
	{ -0.027146f, 0.709031f, -0.704654f },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ -0.612727f, 0.707514f, 0.352122f },
	{ -0.612727f, 0.707514f, -0.352122f },
	{ -0.759822f, 0.263094f, 0.594519f },
	{ -0.759822f, 0.263094f, -0.594519f },
	{ -0.778531f, -0.313581f, -0.54365f },
	{ -0.778531f, -0.313581f, 0.54365f },
	{ -0.854197f, 0.055193f, -0.517013f },
	{ -0.854197f, 0.055193f, 0.517013f },
	{ -0.628105f, 0.638353f, -0.44496f },
	{ -0.628105f, 0.638353f, 0.44496f },
	{ -0.363368f, 0.883588f, -0.295358f },
	{ -0.363368f, 0.883588f, 0.295358f },
	{ -0.108497f, 0.988829f, -0.102199f },
	{ -0.108497f, 0.988829f, 0.102199f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00086CD0 = { vertex_00086628, normal_0008697C, LengthOfArray<Sint32>(vertex_00086628), meshlist_00086610, matlist_00086270, LengthOfArray<Uint16>(meshlist_00086610), LengthOfArray<Uint16>(matlist_00086270), { -741.2115f, -140.25f, -3000 }, 268.5977f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00086CF8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00086CD0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00086D2C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00086D40[] = {
	0x8000u | 7, 27, 5, 28, 8, 29, 11, 30,
	0x8000u | 11, 31, 30, 13, 11, 24, 8, 25, 5, 2, 27, 60,
	0x8000u | 5, 32, 31, 16, 13, 20,
	6, 50, 55, 42, 59, 35, 53,
	3, 38, 54, 39,
	0x8000u | 15, 39, 60, 54, 27, 1, 28, 4, 29, 7, 30, 10, 31, 12, 32, 15,
	7, 6, 3, 9, 23, 0, 26, 14,
	3, 16, 18, 20,
	4, 17, 14, 19, 61,
	3, 14, 58, 61,
	0x8000u | 5, 61, 22, 58, 62, 33,
	6, 10, 65, 12, 64, 15, 63,
	7, 14, 26, 58, 52, 33, 34, 37,
	0x8000u | 8, 46, 45, 41, 40, 51, 56, 23, 3,
	0x8000u | 13, 39, 50, 60, 55, 2, 59, 25, 53, 24, 57, 13, 21, 20,
	3, 37, 36, 33,
	0x8000u | 8, 37, 46, 34, 41, 52, 51, 26, 23,
	0x8000u | 13, 71, 38, 70, 54, 69, 1, 67, 4, 68, 7, 66, 10, 65,
	18, 71, 45, 70, 40, 69, 56, 67, 3, 68, 6, 66, 9, 65, 0, 64, 14, 63, 17,
	11, 35, 47, 42, 48, 50, 49, 39, 44, 38, 43, 71
};

extern "C" __declspec(dllexport) NJS_TEX uv_00086EA0[] = {
	{ -202, 2161 },
	{ -119, 2248 },
	{ -26, 2193 },
	{ 32, 2368 },
	{ 125, 2299 },
	{ -170, 2868 },
	{ -76, 2846 },
	{ -200, 3535 },
	{ -76, 2846 },
	{ -292, 3462 },
	{ -170, 2868 },
	{ -294, 2865 },
	{ 32, 2368 },
	{ -294, 2368 },
	{ -119, 2248 },
	{ -294, 2212 },
	{ -202, 2161 },
	{ -589, 2144 },
	{ 174, 3715 },
	{ -200, 3535 },
	{ 81, 3660 },
	{ -292, 3462 },
	{ -312, 3718 },
	{ -1060, 2190 },
	{ -682, 2190 },
	{ -1054, 2693 },
	{ -721, 2693 },
	{ -1054, 3235 },
	{ -721, 3235 },
	{ -1060, 1935 },
	{ -508, 1935 },
	{ -1060, 2144 },
	{ -1060, 2144 },
	{ -589, 2144 },
	{ -508, 1935 },
	{ -202, 2161 },
	{ -121, 1935 },
	{ -26, 2193 },
	{ 54, 1935 },
	{ 125, 2299 },
	{ 206, 1935 },
	{ -76, 2846 },
	{ 3, 1935 },
	{ -200, 3535 },
	{ -119, 3974 },
	{ 174, 3715 },
	{ 255, 3974 },
	{ -119, 1620 },
	{ -294, 1658 },
	{ 32, 1501 },
	{ -294, 1503 },
	{ -170, 1001 },
	{ -294, 1004 },
	{ -292, 406 },
	{ 81, 3660 },
	{ 9, 3697 },
	{ -312, 3718 },
	{ 81, 210 },
	{ -292, 406 },
	{ 9, 172 },
	{ -312, 151 },
	{ -274, 239 },
	{ -721, 239 },
	{ -274, 15 },
	{ -274, 15 },
	{ -721, 15 },
	{ -721, 239 },
	{ -1054, 15 },
	{ -1054, 239 },
	{ 3, 6015 },
	{ -76, 5103 },
	{ -119, 3974 },
	{ -200, 4415 },
	{ 255, 3974 },
	{ 174, 4234 },
	{ -274, 239 },
	{ -274, 717 },
	{ -721, 239 },
	{ -721, 717 },
	{ -1054, 239 },
	{ -1054, 717 },
	{ -1501, 717 },
	{ -1501, 1195 },
	{ -1497, 1679 },
	{ -1054, 1195 },
	{ -1060, 1679 },
	{ -721, 1195 },
	{ -682, 1679 },
	{ -274, 1195 },
	{ -294, 1658 },
	{ -1060, 2144 },
	{ -1060, 2190 },
	{ -589, 2144 },
	{ -682, 2190 },
	{ -294, 2212 },
	{ -721, 2693 },
	{ -274, 2693 },
	{ -721, 3235 },
	{ -274, 3235 },
	{ -721, 3809 },
	{ -274, 3809 },
	{ -721, 4064 },
	{ -274, 4064 },
	{ -1501, 717 },
	{ -1501, 239 },
	{ -1054, 239 },
	{ -1501, 717 },
	{ -1501, 1195 },
	{ -1054, 717 },
	{ -1054, 1195 },
	{ -721, 717 },
	{ -721, 1195 },
	{ -274, 717 },
	{ -274, 1195 },
	{ -1497, 1727 },
	{ -1060, 1935 },
	{ -1060, 1727 },
	{ -508, 1935 },
	{ -589, 1727 },
	{ -121, 1935 },
	{ -202, 1708 },
	{ 54, 1935 },
	{ -26, 1676 },
	{ 206, 1935 },
	{ 125, 1569 },
	{ 3, 1935 },
	{ -76, 1024 },
	{ -1497, 1727 },
	{ -1497, 1679 },
	{ -1060, 1727 },
	{ -1060, 1679 },
	{ -589, 1727 },
	{ -682, 1679 },
	{ -202, 1708 },
	{ -294, 1658 },
	{ -26, 1676 },
	{ -119, 1620 },
	{ 125, 1569 },
	{ 32, 1501 },
	{ -76, 1024 },
	{ -170, 1001 },
	{ -200, 334 },
	{ -292, 406 },
	{ 174, 154 },
	{ 81, 210 },
	{ -1054, 3235 },
	{ -1501, 3235 },
	{ -1054, 2693 },
	{ -1501, 2693 },
	{ -1060, 2190 },
	{ -1497, 2190 },
	{ -1054, 2151 },
	{ -1501, 2151 },
	{ -1060, 1935 },
	{ -1497, 1935 },
	{ -1497, 1727 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00087110[] = {
	{ NJD_MESHSET_TRIMESH | 0, 20, poly_00086D40, NULL, NULL, NULL, uv_00086EA0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00087128[] = {
	{ -872, -127, -200 },
	{ -885.5f, 80, -100 },
	{ -837, 80, 0 },
	{ -837, 80, -200 },
	{ -934.5f, 50, -100 },
	{ -886, 50, 0 },
	{ -886, 50, -200 },
	{ -977, -13.5f, -100 },
	{ -928.5f, -13.5f, 0 },
	{ -928.5f, -13.5f, -200 },
	{ -920.5f, -127, -100 },
	{ -872, -127, 0 },
	{ -886, -240, -100 },
	{ -837.5f, -240, 0 },
	{ -837.5f, -240, -200 },
	{ -990.5f, -330.5f, -100 },
	{ -942, -330.5f, 0 },
	{ -942, -330.5f, -200 },
	{ -922, -360.5f, 0 },
	{ -922, -360.5f, -200 },
	{ -832, -380.5f, 0 },
	{ -729, -380.5f, 0 },
	{ -729, -380.5f, -200 },
	{ -837.25f, -13.25f, -200 },
	{ -837, -126.5f, 0 },
	{ -837.25f, -13.25f, 0 },
	{ -837, -126.5f, -200 },
	{ -863, 80, -20 },
	{ -912, 50, -20 },
	{ -954.5f, -13.5f, -20 },
	{ -898, -127, -20 },
	{ -863.5f, -240, -20 },
	{ -968, -330.5f, -20 },
	{ -623.4615f, -240, -200 },
	{ -623.4615f, -126.6667f, -200 },
	{ -623.4615f, -126.6667f, 0 },
	{ -499.9231f, -240, -200 },
	{ -499.9231f, -126.6667f, -200 },
	{ -623.4615f, 100, -100 },
	{ -623.4615f, 100, -20 },
	{ -623.4615f, 100, -200 },
	{ -623.4615f, -13.33334f, -200 },
	{ -623.4615f, -13.33334f, 0 },
	{ -499.9231f, 100, -100 },
	{ -499.9231f, 100, -20 },
	{ -499.9231f, 100, -200 },
	{ -499.9231f, -13.33334f, -200 },
	{ -499.9231f, -126.6667f, 0 },
	{ -499.9231f, -13.33334f, 0 },
	{ -499.9231f, 100, 0 },
	{ -623.4615f, 100, 0 },
	{ -729, -13.5f, -200 },
	{ -729, -126.5f, -200 },
	{ -729, -126.5f, 0 },
	{ -777.5f, 100, -100 },
	{ -729, 100, 0 },
	{ -729, 100, -200 },
	{ -729, -240, 0 },
	{ -729, -240, -200 },
	{ -729, -13.5f, 0 },
	{ -755, 100, -20 },
	{ -832, -380.5f, -200 },
	{ -623.5f, -381, -200 },
	{ -968, -330.5f, -180 },
	{ -863.5f, -240, -180 },
	{ -898, -127, -180 },
	{ -954.5f, -13.5f, -180 },
	{ -863, 80, -180 },
	{ -912, 50, -180 },
	{ -755, 100, -180 },
	{ -623.4615f, 100, -180 },
	{ -499.9231f, 100, -180 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00087488[] = {
	{ -0.300561f, -0.114611f, -0.946851f },
	{ -0.385141f, 0.922858f, 0 },
	{ -0.162899f, 0.603269f, 0.780724f },
	{ -0.162899f, 0.603269f, -0.780724f },
	{ -0.7110389f, 0.7031519f, 0 },
	{ -0.296474f, 0.373835f, 0.878835f },
	{ -0.296474f, 0.373835f, -0.878835f },
	{ -0.998257f, 0.059021f, 0 },
	{ -0.41042f, 0.037027f, 0.911144f },
	{ -0.41042f, 0.037027f, -0.911144f },
	{ -0.926989f, -0.375087f, 0 },
	{ -0.300561f, -0.114611f, 0.946851f },
	{ -0.952213f, 0.305436f, 0 },
	{ -0.208001f, 0.047658f, 0.976967f },
	{ -0.208001f, 0.047658f, -0.976967f },
	{ -0.654655f, 0.755928f, 0 },
	{ -0.310313f, 0.358318f, 0.880519f },
	{ -0.310313f, 0.358318f, -0.880519f },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ -0.363368f, 0.883588f, 0.295358f },
	{ -0.628105f, 0.638353f, 0.44496f },
	{ -0.854197f, 0.055193f, 0.517013f },
	{ -0.778531f, -0.313581f, 0.54365f },
	{ -0.759822f, 0.263094f, 0.594519f },
	{ -0.612727f, 0.707514f, 0.352122f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ -0.107201f, 0.9942369f, 0 },
	{ -0.027146f, 0.709031f, 0.704654f },
	{ -0.027146f, 0.709031f, -0.704654f },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ -0.108497f, 0.988829f, 0.102199f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.612727f, 0.707514f, -0.352122f },
	{ -0.759822f, 0.263094f, -0.594519f },
	{ -0.778531f, -0.313581f, -0.54365f },
	{ -0.854197f, 0.055193f, -0.517013f },
	{ -0.363368f, 0.883588f, -0.295358f },
	{ -0.628105f, 0.638353f, -0.44496f },
	{ -0.108497f, 0.988829f, -0.102199f },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000877E8 = { vertex_00087128, normal_00087488, LengthOfArray<Sint32>(vertex_00087128), meshlist_00087110, matlist_00086D2C, LengthOfArray<Uint16>(meshlist_00087110), LengthOfArray<Uint16>(matlist_00086D2C), { -745.2115f, -140.5f, -100 }, 264.8894f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00087810 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000877E8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00087844[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00087858[] = {
	6, 29, 25, 11, 8, 9, 6,
	0x8000u | 10, 32, 31, 28, 27, 24, 23, 20, 19, 16, 34,
	6, 25, 21, 8, 5, 6, 3,
	6, 9, 12, 11, 14, 29, 33,
	0x8000u | 10, 16, 1, 20, 4, 24, 7, 28, 10, 32, 13,
	0x8000u | 8, 21, 18, 25, 22, 29, 26, 33, 30,
	8, 18, 15, 21, 17, 5, 2, 3, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_000878D4[] = {
	{ 3378, -1657 },
	{ 3378, -1019 },
	{ 4218, -1657 },
	{ 4218, -1019 },
	{ 4646, -1657 },
	{ 4646, -1019 },
	{ 1658, -2295 },
	{ 2059, -2295 },
	{ 1658, -1657 },
	{ 2086, -1657 },
	{ 1658, -1019 },
	{ 2086, -1019 },
	{ 1658, -382 },
	{ 2086, -382 },
	{ 1658, 255 },
	{ 2086, 254 },
	{ 3378, -1019 },
	{ 3378, -382 },
	{ 4218, -1019 },
	{ 4218, -382 },
	{ 4646, -1019 },
	{ 4646, -382 },
	{ 4646, -1657 },
	{ 4646, -2295 },
	{ 4218, -1657 },
	{ 4218, -2295 },
	{ 3378, -1657 },
	{ 3378, -2295 },
	{ 1658, 255 },
	{ 819, 255 },
	{ 1658, -382 },
	{ 819, -382 },
	{ 1658, -1019 },
	{ 819, -1019 },
	{ 1658, -1657 },
	{ 819, -1657 },
	{ 1658, -2295 },
	{ 819, -2295 },
	{ 3378, -382 },
	{ 2951, -382 },
	{ 3378, -1019 },
	{ 2951, -1019 },
	{ 3378, -1657 },
	{ 2951, -1657 },
	{ 3378, -2295 },
	{ 2978, -2295 },
	{ 2951, -382 },
	{ 2951, 254 },
	{ 3378, -382 },
	{ 3378, 255 },
	{ 4218, -382 },
	{ 4218, 255 },
	{ 4646, -382 },
	{ 4646, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000879AC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_00087858, NULL, NULL, NULL, uv_000878D4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000879C4[] = {
	{ 34.23077f, -240, -2900 },
	{ 34.23077f, -126.6667f, -3100 },
	{ 34.23077f, -126.6667f, -2900 },
	{ 165.7692f, -240, -2900 },
	{ 165.7692f, -126.6667f, -3100 },
	{ 165.7692f, -126.6667f, -2900 },
	{ 297.3076f, -240, -2900 },
	{ 297.3076f, -126.6667f, -3100 },
	{ 297.3076f, -126.6667f, -2900 },
	{ 428.8462f, -240, -2900 },
	{ 428.8462f, -126.6667f, -3100 },
	{ 428.8462f, -126.6667f, -2900 },
	{ 560.3846f, -240, -2900 },
	{ 560.3846f, -126.6667f, -3100 },
	{ 560.3846f, -126.6667f, -2900 },
	{ 34.23077f, 100, -2900 },
	{ 34.23077f, -13.33334f, -3100 },
	{ 34.23077f, -13.33334f, -2900 },
	{ 165.7692f, 100, -2900 },
	{ 165.7692f, 100, -3100 },
	{ 165.7692f, -13.33334f, -3100 },
	{ 165.7692f, -13.33334f, -2900 },
	{ 297.3076f, 100, -2900 },
	{ 297.3076f, 100, -3100 },
	{ 297.3076f, -13.33334f, -3100 },
	{ 297.3076f, -13.33334f, -2900 },
	{ 428.8462f, 100, -2900 },
	{ 428.8462f, 100, -3100 },
	{ 428.8462f, -13.33334f, -3100 },
	{ 428.8462f, -13.33334f, -2900 },
	{ 560.3846f, 88.5f, -2900 },
	{ 560.3846f, 88.5f, -3100 },
	{ 560.3846f, -13.33334f, -3100 },
	{ 560.3846f, -13.33334f, -2900 },
	{ 34.23077f, 100, -3100 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00087B68[] = {
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00087D0C = { vertex_000879C4, normal_00087B68, LengthOfArray<Sint32>(vertex_000879C4), meshlist_000879AC, matlist_00087844, LengthOfArray<Uint16>(meshlist_000879AC), LengthOfArray<Uint16>(matlist_00087844), { 297.3077f, -70, -3000 }, 281.4417f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00087D34 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00087D0C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00087D68[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00087D7C[] = {
	0x8000u | 8, 5, 20, 8, 23, 11, 26, 14, 29,
	0x8000u | 10, 16, 1, 19, 4, 22, 7, 25, 10, 28, 13,
	0x8000u | 10, 15, 16, 18, 19, 21, 22, 24, 25, 27, 28,
	0x8000u | 11, 30, 29, 31, 26, 32, 23, 33, 20, 17, 5, 2,
	3, 34, 17, 33,
	0x8000u | 10, 1, 0, 4, 3, 7, 6, 10, 9, 13, 12
};

extern "C" __declspec(dllexport) NJS_TEX uv_00087DF0[] = {
	{ -3306, 3235 },
	{ -3306, 2693 },
	{ -3688, 3235 },
	{ -3688, 2693 },
	{ -4118, 3235 },
	{ -4118, 2693 },
	{ -4501, 3235 },
	{ -4501, 2693 },
	{ -2875, 1195 },
	{ -2875, 717 },
	{ -3306, 1195 },
	{ -3306, 717 },
	{ -3688, 1195 },
	{ -3688, 717 },
	{ -4118, 1195 },
	{ -4118, 717 },
	{ -4501, 1195 },
	{ -4501, 717 },
	{ -2895, 1679 },
	{ -2875, 1195 },
	{ -3299, 1679 },
	{ -3306, 1195 },
	{ -3703, 1679 },
	{ -3688, 1195 },
	{ -4108, 1679 },
	{ -4118, 1195 },
	{ -4513, 1667 },
	{ -4501, 1195 },
	{ -4501, 2215 },
	{ -4501, 2693 },
	{ -4108, 2190 },
	{ -4118, 2693 },
	{ -3703, 2190 },
	{ -3688, 2693 },
	{ -3299, 2190 },
	{ -3306, 2693 },
	{ -2875, 2693 },
	{ -3306, 3235 },
	{ -2875, 3235 },
	{ -2895, 2190 },
	{ -2875, 2693 },
	{ -3299, 2190 },
	{ -2875, 717 },
	{ -2875, 239 },
	{ -3306, 717 },
	{ -3306, 239 },
	{ -3688, 717 },
	{ -3688, 239 },
	{ -4118, 717 },
	{ -4118, 239 },
	{ -4501, 717 },
	{ -4501, 239 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00087EC0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_00087D7C, NULL, NULL, NULL, uv_00087DF0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00087ED8[] = {
	{ 34.23077f, -240, -200 },
	{ 34.23077f, -126.6667f, -200 },
	{ 34.23077f, -126.6667f, 0 },
	{ 165.7692f, -240, -200 },
	{ 165.7692f, -126.6667f, -200 },
	{ 165.7692f, -126.6667f, 0 },
	{ 297.3076f, -240, -200 },
	{ 297.3076f, -126.6667f, -200 },
	{ 297.3076f, -126.6667f, 0 },
	{ 428.8462f, -240, -200 },
	{ 428.8462f, -126.6667f, -200 },
	{ 428.8462f, -126.6667f, 0 },
	{ 560.3846f, -240, -200 },
	{ 560.3846f, -126.6667f, -200 },
	{ 560.3846f, -126.6667f, 0 },
	{ 34.23077f, 100, -200 },
	{ 34.23077f, -13.33334f, -200 },
	{ 34.23077f, -13.33334f, 0 },
	{ 165.7692f, 100, -200 },
	{ 165.7692f, -13.33334f, -200 },
	{ 165.7692f, -13.33334f, 0 },
	{ 297.3076f, 100, -200 },
	{ 297.3076f, -13.33334f, -200 },
	{ 297.3076f, -13.33334f, 0 },
	{ 428.8462f, 100, -200 },
	{ 428.8462f, -13.33334f, -200 },
	{ 428.8462f, -13.33334f, 0 },
	{ 560.3846f, 88.5f, -200 },
	{ 560.3846f, -13.33334f, -200 },
	{ 560.3846f, -13.33334f, 0 },
	{ 560.3846f, 88.5f, 0 },
	{ 428.8462f, 100, 0 },
	{ 297.3076f, 100, 0 },
	{ 165.7692f, 100, 0 },
	{ 34.23077f, 100, 0 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008807C[] = {
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00088220 = { vertex_00087ED8, normal_0008807C, LengthOfArray<Sint32>(vertex_00087ED8), meshlist_00087EC0, matlist_00087D68, LengthOfArray<Uint16>(meshlist_00087EC0), LengthOfArray<Uint16>(matlist_00087D68), { 297.3077f, -70, -100 }, 281.4417f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00088248 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00088220, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008827C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00088290[] = {
	0x8000u | 10, 26, 24, 33, 34, 27, 25, 22, 21, 19, 18,
	8, 31, 10, 30, 9, 29, 16, 28, 23,
	8, 14, 15, 0, 1, 3, 2, 12, 7,
	8, 12, 31, 3, 30, 0, 29, 14, 28,
	8, 15, 17, 1, 20, 2, 6, 7, 4,
	0x8000u | 10, 11, 26, 32, 33, 13, 27, 8, 22, 5, 19
};

extern "C" __declspec(dllexport) NJS_TEX uv_00088304[] = {
	{ 1694, -2097 },
	{ 1990, -2032 },
	{ 1694, -1681 },
	{ 2003, -1642 },
	{ 1694, -1269 },
	{ 2016, -1269 },
	{ 1694, -506 },
	{ 2045, -506 },
	{ 1694, 255 },
	{ 2072, 255 },
	{ 4632, -1837 },
	{ 4632, -2295 },
	{ 4182, -1759 },
	{ 4182, -2196 },
	{ 3344, -1708 },
	{ 3344, -2097 },
	{ 3033, -1652 },
	{ 3047, -2032 },
	{ 3021, -1269 },
	{ 2991, -506 },
	{ 3344, -1269 },
	{ 3344, -506 },
	{ 4182, -1269 },
	{ 4182, -506 },
	{ 4632, -1269 },
	{ 4632, -506 },
	{ 4632, -1269 },
	{ 4632, -1837 },
	{ 4182, -1269 },
	{ 4182, -1759 },
	{ 3344, -1269 },
	{ 3344, -1708 },
	{ 3021, -1269 },
	{ 3033, -1652 },
	{ 2991, -506 },
	{ 2964, 255 },
	{ 3344, -506 },
	{ 3344, 255 },
	{ 4182, -506 },
	{ 4182, 255 },
	{ 4632, -506 },
	{ 4632, 255 },
	{ 855, -2196 },
	{ 1694, -2097 },
	{ 855, -1792 },
	{ 1694, -1681 },
	{ 855, -1269 },
	{ 1694, -1269 },
	{ 855, -506 },
	{ 1694, -506 },
	{ 855, 255 },
	{ 1694, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000883D4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_00088290, NULL, NULL, NULL, uv_00088304, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000883EC[] = {
	{ 823.4615f, -13.33334f, -2900 },
	{ 691.9231f, -13.33334f, -2900 },
	{ 691.9231f, -126.6667f, -2900 },
	{ 823.4615f, -126.6667f, -2900 },
	{ 560.3846f, -240, -2900 },
	{ 560.3846f, -126.6667f, -3100 },
	{ 560.3846f, -126.6667f, -2900 },
	{ 691.9231f, -240, -2900 },
	{ 691.9231f, -126.6667f, -3100 },
	{ 983, -126.6667f, -2900 },
	{ 1000, -240, -2900 },
	{ 983, -126.6667f, -3100 },
	{ 823.4615f, -240, -2900 },
	{ 823.4615f, -126.6667f, -3100 },
	{ 823.4615f, 65.5f, -2900 },
	{ 691.9231f, 77, -2900 },
	{ 966, -13.33334f, -2900 },
	{ 560.3846f, 88.5f, -2900 },
	{ 560.3846f, 88.5f, -3100 },
	{ 560.3846f, -13.33334f, -3100 },
	{ 560.3846f, -13.33334f, -2900 },
	{ 691.9231f, 77, -3100 },
	{ 691.9231f, -13.33334f, -3100 },
	{ 955, 56, -2900 },
	{ 955, 56, -3100 },
	{ 823.4615f, 65.5f, -3100 },
	{ 966, -13.33334f, -3100 },
	{ 823.4615f, -13.33334f, -3100 },
	{ 889.4487f, 60.73426f, -2900 },
	{ 899.0369f, -13.33334f, -2900 },
	{ 907.6195f, -126.6667f, -2900 },
	{ 921.1926f, -240, -2900 },
	{ 913.3163f, -126.6667f, -3100 },
	{ 894.4332f, -13.33334f, -3100 },
	{ 887.6198f, 60.86634f, -3100 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00088590[] = {
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00088734 = { vertex_000883EC, normal_00088590, LengthOfArray<Sint32>(vertex_000883EC), meshlist_000883D4, matlist_0008827C, LengthOfArray<Uint16>(meshlist_000883D4), LengthOfArray<Uint16>(matlist_0008827C), { 780.1923f, -75.75f, -3000 }, 241.4858f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008875C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00088734, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00088790[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 24, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 51, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000887F4[] = {
	10, 19, 20, 15, 16, 10, 11, 5, 6, 0, 1
};

extern "C" __declspec(dllexport) Sint16 poly_0008880A[] = {
	10, 20, 21, 16, 17, 11, 12, 6, 7, 1, 2
};

extern "C" __declspec(dllexport) Sint16 poly_00088820[] = {
	10, 21, 22, 17, 18, 12, 13, 7, 8, 2, 3
};

extern "C" __declspec(dllexport) Sint16 poly_00088836[] = {
	4, 23, 24, 14, 9,
	3, 24, 4, 9
};

extern "C" __declspec(dllexport) Sint16 poly_00088848[] = {
	0x8000u | 10, 19, 23, 15, 24, 10, 4, 5, 9, 0, 14
};

extern "C" __declspec(dllexport) NJS_TEX uv_00088860[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -450 },
	{ 254, -450 },
	{ 0, -1020 },
	{ 255, -1020 },
	{ 0, -1588 },
	{ 255, -1588 },
	{ 0, -2295 },
	{ 254, -2294 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00088888[] = {
	{ 0 },
	{ 0, 255 },
	{ 705, 0 },
	{ 705, 254 },
	{ 1275, 0 },
	{ 1275, 255 },
	{ 1843, 0 },
	{ 1843, 255 },
	{ 2549, 0 },
	{ 2550, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000888B0[] = {
	{ 2032, -143 },
	{ 2032, -653 },
	{ 1537, -143 },
	{ 1537, -653 },
	{ 1027, -143 },
	{ 1027, -653 },
	{ 517, -143 },
	{ 517, -653 },
	{ 7, -143 },
	{ 7, -653 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000888D8[] = {
	{ 0, 255 },
	{ 0, 14 },
	{ 255, 255 },
	{ 254, 14 },
	{ 0, 238 },
	{ 120, 150 },
	{ 254, 238 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000888F4[] = {
	{ 510, -1785 },
	{ 0, -1785 },
	{ 510, -1219 },
	{ 0, -1219 },
	{ 510, -764 },
	{ 0, -765 },
	{ 510, -308 },
	{ 0, -310 },
	{ 510, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008891C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000887F4, NULL, NULL, NULL, uv_00088860, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0008880A, NULL, NULL, NULL, uv_00088888, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00088820, NULL, NULL, NULL, uv_000888B0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_00088836, NULL, NULL, NULL, uv_000888D8, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_00088848, NULL, NULL, NULL, uv_000888F4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00088994[] = {
	{ -245, 100, -3063.283f },
	{ -215, 99.99998f, -3084.525f },
	{ -170, 99.99998f, -3091.875f },
	{ -39, 100, -3100 },
	{ -186.4018f, 167.2608f, -3000 },
	{ -245, 160.8818f, -3044.748f },
	{ -215, 181.3173f, -3059.768f },
	{ -170, 188.3883f, -3064.965f },
	{ -39, 191.9239f, -3067.564f },
	{ -185.8202f, 147.7839f, -3034.456f },
	{ -245, 186.1f, -3000 },
	{ -215, 215, -3000 },
	{ -170, 225, -3000 },
	{ -39, 230, -3000 },
	{ -184.4164f, 100.7624f, -3048.728f },
	{ -245, 160.8819f, -2955.252f },
	{ -215, 181.3173f, -2940.232f },
	{ -170, 188.3883f, -2935.035f },
	{ -39, 191.9239f, -2932.436f },
	{ -245, 100, -2936.717f },
	{ -215, 99.99998f, -2915.475f },
	{ -170, 99.99998f, -2908.125f },
	{ -39, 100, -2900 },
	{ -184.4164f, 100.7629f, -2951.272f },
	{ -185.8202f, 147.784f, -2965.544f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00088AC0[] = {
	{ -0.999941f, -0.005682f, 0.009299999f },
	{ -0.351495f, 0.272663f, -0.895604f },
	{ -0.097702f, 0.289854f, -0.952071f },
	{ -0.043046f, 0.290977f, -0.955761f },
	{ -0.71487f, -0.699257f, 0.000113f },
	{ -0.998081f, -0.039909f, -0.047347f },
	{ -0.402413f, 0.5769719f, -0.710751f },
	{ -0.11188f, 0.62551f, -0.772153f },
	{ -0.041057f, 0.627132f, -0.7778299f },
	{ -0.721768f, -0.432823f, 0.540107f },
	{ -0.998523f, 0.054329f, 0.00012f },
	{ -0.440714f, 0.897648f, 0.000001f },
	{ -0.124617f, 0.992205f, 0.000001f },
	{ -0.03814f, 0.999272f, 0.000001f },
	{ -0.7156039f, -0.220266f, 0.662868f },
	{ -0.998076f, -0.039404f, 0.04786f },
	{ -0.402413f, 0.576971f, 0.710751f },
	{ -0.111881f, 0.62551f, 0.772153f },
	{ -0.041057f, 0.627133f, 0.7778299f },
	{ -0.999954f, -0.005345f, -0.008006999f },
	{ -0.351496f, 0.272664f, 0.8956029f },
	{ -0.09770399f, 0.289856f, 0.95207f },
	{ -0.043046f, 0.290979f, 0.9557599f },
	{ -0.717686f, -0.219654f, -0.660817f },
	{ -0.72331f, -0.431909f, -0.5387729f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00088BEC = { vertex_00088994, normal_00088AC0, LengthOfArray<Sint32>(vertex_00088994), meshlist_0008891C, matlist_00088790, LengthOfArray<Uint16>(meshlist_0008891C), LengthOfArray<Uint16>(matlist_00088790), { -142, 165, -3000 }, 143.5583f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00088C14 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00088BEC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00088C48[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00088C70[] = {
	4, 11, 10, 4, 5,
	3, 10, 9, 12,
	4, 5, 10, 6, 12,
	0x8000u | 6, 8, 9, 13, 12, 7, 6
};

extern "C" __declspec(dllexport) Sint16 poly_00088C9A[] = {
	0x8000u | 8, 3, 7, 2, 6, 1, 5, 0, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_00088CAC[] = {
	{ 160, 103 },
	{ 0, 103 },
	{ 160, 0 },
	{ 0 },
	{ 508, 214 },
	{ 0, 214 },
	{ 0, 103 },
	{ 508, 0 },
	{ 508, 103 },
	{ 0 },
	{ 0, 103 },
	{ 0, 214 },
	{ 508, 214 },
	{ 0, 103 },
	{ 508, 103 },
	{ 0 },
	{ 508, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00088CF0[] = {
	{ 0 },
	{ 508, 0 },
	{ 0, 1530 },
	{ 508, 1530 },
	{ 0, 3288 },
	{ 508, 3288 },
	{ 0, 3825 },
	{ 508, 3825 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00088D10[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00088C70, NULL, NULL, NULL, uv_00088CAC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00088C9A, NULL, NULL, NULL, uv_00088CF0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00088D40[] = {
	{ -500, 0, -19.99987f },
	{ -465, 0, -19.99987f },
	{ -350, 50, -19.99987f },
	{ -250, 50, -19.99987f },
	{ -500, 0, 0.000127f },
	{ -465, 0, 0.000127f },
	{ -350, 50, 0.000127f },
	{ -250, 50, 0 },
	{ -250, -25, 0.000127f },
	{ -350, -24.88525f, 0.000127f },
	{ -465, -24.7705f, 0.000127f },
	{ -500, -24.7705f, 0.000127f },
	{ -350, 32.15064f, 0.000127f },
	{ -250, 31.7292f, 0.000011f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00088DE8[] = {
	{ 0, 1, 0 },
	{ -0.203629f, 0.979048f, 0 },
	{ -0.203629f, 0.979048f, 0 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ -0.133304f, 0.640924f, 0.75594f },
	{ -0.152257f, 0.732051f, 0.664017f },
	{ 0.000001f, 0.7071069f, 0.707106f },
	{ 0, 0.000001f, 1 },
	{ 0, 0.000001f, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.000001f, 0.000001f, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00088E90 = { vertex_00088D40, normal_00088DE8, LengthOfArray<Sint32>(vertex_00088D40), meshlist_00088D10, matlist_00088C48, LengthOfArray<Uint16>(meshlist_00088D10), LengthOfArray<Uint16>(matlist_00088C48), { -375, 12.5f, -9.999871f }, 125.3994f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00088EB8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00088E90, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00088EEC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0x7FFFFFFF }, { 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 44, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00088F28[] = {
	8, 20, 26, 5, 0, 11, 6, 12, 18,
	3, 50, 13, 48,
	11, 19, 20, 4, 5, 10, 11, 13, 12, 48, 18, 46,
	8, 22, 23, 2, 3, 8, 9, 15, 14,
	0x8000u | 14, 29, 38, 23, 24, 22, 1, 2, 7, 8, 16, 15, 37, 14, 27,
	6, 19, 49, 20, 47, 26, 45,
	24, 49, 36, 47, 31, 45, 29, 44, 38, 41, 24, 40, 1, 39, 7, 42, 16, 43, 37, 46, 27, 48, 33, 50, 35
};

extern "C" __declspec(dllexport) Sint16 poly_00088FCA[] = {
	4, 56, 55, 53, 52,
	4, 55, 58, 52, 51,
	4, 30, 54, 28, 53,
	4, 54, 30, 17, 25,
	4, 53, 54, 56, 57,
	4, 34, 51, 21, 59,
	3, 58, 59, 51,
	4, 32, 52, 34, 51,
	4, 28, 53, 32, 52,
	3, 54, 17, 57
};

extern "C" __declspec(dllexport) Sint16 poly_0008902A[] = {
	4, 28, 32, 0, 6,
	0x8000u | 6, 6, 18, 34, 46, 21, 59,
	3, 6, 32, 34,
	0x8000u | 5, 0, 28, 26, 30, 25,
	16, 46, 59, 43, 58, 42, 55, 39, 56, 40, 57, 41, 17, 44, 25, 45, 26
};

extern "C" __declspec(dllexport) NJS_TEX uv_00089078[] = {
	{ 963, 243 },
	{ 706, 243 },
	{ 1075, 56 },
	{ 685, 57 },
	{ 1075, -568 },
	{ 684, -569 },
	{ 963, -756 },
	{ 706, -756 },
	{ 1186, -756 },
	{ 1227, -756 },
	{ 940, -756 },
	{ 1227, 243 },
	{ 963, 243 },
	{ 1434, 56 },
	{ 1075, 56 },
	{ 1434, -568 },
	{ 1075, -568 },
	{ 1227, -756 },
	{ 963, -756 },
	{ 940, -756 },
	{ 706, -756 },
	{ 689, -756 },
	{ 223, 243 },
	{ 342, 243 },
	{ 95, 56 },
	{ 286, 56 },
	{ 95, -568 },
	{ 286, -568 },
	{ 223, -756 },
	{ 342, -756 },
	{ 657, 243 },
	{ 408, 243 },
	{ 342, 243 },
	{ 278, 243 },
	{ 223, 243 },
	{ 151, 56 },
	{ 95, 56 },
	{ 151, -568 },
	{ 95, -568 },
	{ 278, -756 },
	{ 223, -756 },
	{ 408, -756 },
	{ 342, -756 },
	{ 657, -756 },
	{ 1227, 243 },
	{ 1186, 243 },
	{ 963, 243 },
	{ 940, 243 },
	{ 706, 243 },
	{ 689, 243 },
	{ 1186, 243 },
	{ 1144, 243 },
	{ 940, 243 },
	{ 928, 243 },
	{ 689, 243 },
	{ 657, 243 },
	{ 456, 243 },
	{ 408, 243 },
	{ 354, 212 },
	{ 278, 243 },
	{ 255, 56 },
	{ 151, 56 },
	{ 255, -568 },
	{ 151, -568 },
	{ 354, -737 },
	{ 278, -756 },
	{ 456, -756 },
	{ 408, -756 },
	{ 689, -756 },
	{ 657, -756 },
	{ 940, -756 },
	{ 928, -756 },
	{ 1186, -756 },
	{ 1144, -756 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000891A0[] = {
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 0 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00089238[] = {
	{ 3968, 0 },
	{ 6218, 0 },
	{ 4063, 255 },
	{ 6160, 255 },
	{ 0, 255 },
	{ 859, 255 },
	{ 795, 0 },
	{ 1379, 255 },
	{ 1301, 0 },
	{ 2649, 0 },
	{ 0, 255 },
	{ 0 },
	{ 795, 0 },
	{ 10200, 255 },
	{ 10200, 0 },
	{ 9342, 255 },
	{ 9384, 0 },
	{ 8877, 0 },
	{ 1379, 255 },
	{ 2649, 0 },
	{ 2677, 255 },
	{ 3213, 0 },
	{ 3244, 255 },
	{ 3968, 0 },
	{ 4063, 255 },
	{ 6218, 0 },
	{ 6160, 255 },
	{ 6959, 0 },
	{ 6950, 255 },
	{ 7529, 0 },
	{ 7522, 255 },
	{ 8877, 0 },
	{ 8821, 255 },
	{ 9342, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000892C0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_00088F28, NULL, NULL, NULL, uv_00089078, NULL },
	//{ NJD_MESHSET_TRIMESH | 1, 10, poly_00088FCA, NULL, NULL, NULL, uv_000891A0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 5, poly_0008902A, NULL, NULL, NULL, uv_00089238, NULL }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000892C0_2[] = {
	{ NJD_MESHSET_TRIMESH | 1, 10, poly_00088FCA, NULL, NULL, NULL, uv_000891A0, NULL },
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00089308[] = {
	{ -698.6309f, 60.3476f, -3450.214f },
	{ -840, -10, -3450 },
	{ -855, -71, -3450 },
	{ -804, -140, -3450 },
	{ -500, 0, -3450 },
	{ -595, 40, -3450 },
	{ -698.7482f, 60.37824f, -3349.899f },
	{ -840, -10, -3350 },
	{ -855, -71, -3350 },
	{ -804, -140, -3350 },
	{ -500, 0, -3350 },
	{ -595, 40, -3350 },
	{ -624.9913f, 18.23391f, -3320 },
	{ -554.6885f, -11.36609f, -3320 },
	{ -789.2914f, -99.56528f, -3320 },
	{ -821.0912f, -70.56527f, -3320 },
	{ -806.2914f, -18.76578f, -3320 },
	{ -759.2228f, 3.645801f, -3476 },
	{ -692.6911f, 33.03422f, -3320 },
	{ -554.6916f, -11.3667f, -3480 },
	{ -624.9915f, 18.2333f, -3480 },
	{ -700.5661f, 8.721888f, -3325 },
	{ -821.0917f, -70.56673f, -3480 },
	{ -789.2916f, -99.5667f, -3480 },
	{ -806.2916f, -18.7667f, -3480 },
	{ -700.5667f, 8.720779f, -3476 },
	{ -692.6917f, 33.03329f, -3480 },
	{ -705.8911f, -28.66552f, -3320 },
	{ -700.0131f, 55.71701f, -3450.08f },
	{ -705.8917f, -28.66671f, -3480 },
	{ -695.6917f, 31.0333f, -3476 },
	{ -634.2415f, -33.3667f, -3480 },
	{ -700.0283f, 55.70863f, -3349.979f },
	{ -634.2413f, -33.36589f, -3320 },
	{ -695.6911f, 31.03422f, -3325 },
	{ -576.8891f, -37.26598f, -3320 },
	{ -576.8917f, -37.26671f, -3480 },
	{ -771.8538f, -23.9406f, -3320 },
	{ -771.8541f, -23.94169f, -3480 },
	{ -812.5f, 15, -3350 },
	{ -812.5f, 15, -3450 },
	{ -785.9416f, 5.733309f, -3475 },
	{ -785.9412f, 5.734215f, -3323 },
	{ -759.2224f, 3.646808f, -3320 },
	{ -759.2228f, 3.645801f, -3480 },
	{ -697.5667f, 8.720779f, -3480 },
	{ -697.5661f, 8.721888f, -3320 },
	{ -630.7728f, -2.3917f, -3480 },
	{ -630.7725f, -2.390964f, -3320 },
	{ -565.7916f, -24.31669f, -3480 },
	{ -565.7888f, -24.31603f, -3320 },
	{ -745.8455f, 29.51711f, -3335 },
	{ -752.5f, 49, -3350 },
	{ -752.5f, 49, -3450 },
	{ -745.8458f, 29.51665f, -3466 },
	{ -807.5f, 15, -3350 },
	{ -807.5f, 15, -3450 },
	{ -783.9416f, 5.733309f, -3471 },
	{ -783.9412f, 5.734215f, -3328 },
	{ -759.2224f, 3.646808f, -3325 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000895D8[] = {
	{ -0.185333f, 0.878458f, -0.440412f },
	{ -0.941417f, 0.172704f, -0.289667f },
	{ -0.949062f, -0.166763f, -0.267341f },
	{ -0.748795f, -0.593052f, -0.295966f },
	{ 0.940865f, 0.211023f, -0.265032f },
	{ 0.658925f, 0.637447f, -0.399348f },
	{ -0.186364f, 0.878736f, 0.439421f },
	{ -0.941417f, 0.172704f, 0.289667f },
	{ -0.949062f, -0.166763f, 0.267341f },
	{ -0.748795f, -0.593052f, 0.295966f },
	{ 0.940865f, 0.211023f, 0.265032f },
	{ 0.658925f, 0.637447f, 0.399348f },
	{ 0.469158f, 0.518622f, 0.714788f },
	{ 0.822558f, 0.190516f, 0.535818f },
	{ -0.7458079f, -0.398647f, 0.533714f },
	{ -0.85867f, -0.18391f, 0.478397f },
	{ -0.8413939f, 0.137488f, 0.52264f },
	{ -0.682373f, 0.362856f, -0.6345879f },
	{ -0.13904f, 0.666729f, 0.7322159f },
	{ 0.822552f, 0.190515f, -0.535828f },
	{ 0.469157f, 0.518618f, -0.714791f },
	{ -0.250004f, 0.526026f, 0.812893f },
	{ -0.858669f, -0.183918f, -0.478395f },
	{ -0.745806f, -0.398655f, -0.533711f },
	{ -0.841396f, 0.137482f, -0.52264f },
	{ -0.247824f, 0.521412f, -0.816525f },
	{ -0.139046f, 0.666724f, -0.732219f },
	{ -0.331607f, 0.130177f, 0.934393f },
	{ -0.204323f, 0.866987f, -0.454517f },
	{ -0.331613f, 0.130163f, -0.934393f },
	{ -0.172467f, 0.6716419f, -0.720522f },
	{ 0.474457f, 0.07068f, -0.877437f },
	{ -0.204519f, 0.8671539f, 0.45411f },
	{ 0.474459f, 0.07068799f, 0.877435f },
	{ -0.173644f, 0.6762519f, 0.715913f },
	{ 0.782566f, 0.019795f, 0.622252f },
	{ 0.782559f, 0.019789f, -0.6222619f },
	{ -0.756539f, 0.12725f, 0.641449f },
	{ -0.756541f, 0.127241f, -0.641448f },
	{ -0.876379f, 0.355816f, 0.324585f },
	{ -0.876379f, 0.355816f, -0.324585f },
	{ -0.777387f, 0.326493f, -0.537654f },
	{ -0.771382f, 0.323979f, 0.547729f },
	{ -0.6679929f, 0.35522f, 0.653914f },
	{ -0.6679969f, 0.355212f, -0.653914f },
	{ -0.20969f, 0.5071369f, -0.835968f },
	{ -0.209682f, 0.5071459f, 0.835964f },
	{ 0.467655f, 0.374499f, -0.800656f },
	{ 0.467656f, 0.374504f, 0.800653f },
	{ 0.8078949f, 0.112057f, -0.578575f },
	{ 0.807902f, 0.11206f, 0.5785649f },
	{ -0.583863f, 0.592255f, 0.555282f },
	{ -0.592698f, 0.70184f, 0.395132f },
	{ -0.592698f, 0.70184f, -0.395132f },
	{ -0.581094f, 0.5894409f, -0.5611489f },
	{ -0.868517f, 0.366186f, 0.334045f },
	{ -0.868517f, 0.366186f, -0.334045f },
	{ -0.783738f, 0.335346f, -0.522779f },
	{ -0.780715f, 0.33406f, 0.5280989f },
	{ -0.68599f, 0.36479f, 0.62956f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000898A8 = { vertex_00089308, normal_000895D8, LengthOfArray<Sint32>(vertex_00089308), meshlist_000892C0, matlist_00088EEC, LengthOfArray<Uint16>(meshlist_000892C0), LengthOfArray<Uint16>(matlist_00088EEC), { -677.5f, -39.81088f, -3400 }, 194.6953f, NULL };

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000898A8_2 = { vertex_00089308, normal_000895D8, LengthOfArray<Sint32>(vertex_00089308), meshlist_000892C0_2, matlist_00088EEC, LengthOfArray<Uint16>(meshlist_000892C0_2), LengthOfArray<Uint16>(matlist_00088EEC), { -677.5f, -39.81088f, -3400 }, 194.6953f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000898D0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000898A8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000898D0_2 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000898A8_2, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00089904[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00089954[] = {
	0x8000u | 5, 3, 1, 4, 0, 2,
	3, 3, 2, 4,
	0x8000u | 5, 28, 26, 29, 25, 27,
	3, 28, 27, 29
};

extern "C" __declspec(dllexport) Sint16 poly_0008997C[] = {
	10, 10, 8, 6, 7, 5, 11, 9, 12, 10, 8,
	4, 12, 11, 8, 7,
	10, 35, 33, 31, 32, 30, 36, 34, 37, 35, 33,
	4, 37, 36, 33, 32
};

extern "C" __declspec(dllexport) Sint16 poly_000899BC[] = {
	4, 24, 23, 22, 21,
	4, 19, 20, 17, 18
};

extern "C" __declspec(dllexport) Sint16 poly_000899D0[] = {
	5, 14, 18, 16, 20, 19,
	0x8000u | 8, 14, 22, 16, 24, 15, 23, 13, 21,
	0x8000u | 5, 16, 15, 19, 13, 17
};

extern "C" __declspec(dllexport) NJS_TEX uv_000899FC[] = {
	{ 219, 3 },
	{ 3, 251 },
	{ 3, 3 },
	{ 219, 3 },
	{ 3, 251 },
	{ 3, 3 },
	{ 219, 3 },
	{ 3, 251 },
	{ 219, 3 },
	{ 3, 251 },
	{ 3, 3 },
	{ 219, 3 },
	{ 3, 251 },
	{ 3, 3 },
	{ 219, 3 },
	{ 3, 251 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00089A3C[] = {
	{ 127, 0 },
	{ 191, 255 },
	{ 191, 0 },
	{ 254, 255 },
	{ 254, 0 },
	{ 63, 255 },
	{ 63, 0 },
	{ 127, 255 },
	{ 127, 0 },
	{ 191, 255 },
	{ 65, 109 },
	{ 161, 109 },
	{ 65, 1 },
	{ 161, 1 },
	{ 127, 0 },
	{ 191, 255 },
	{ 191, 0 },
	{ 254, 255 },
	{ 254, 0 },
	{ 63, 255 },
	{ 63, 0 },
	{ 127, 255 },
	{ 127, 0 },
	{ 191, 255 },
	{ 65, 109 },
	{ 161, 109 },
	{ 65, 1 },
	{ 161, 1 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00089AAC[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00089ACC[] = {
	{ 124, 0 },
	{ 254, 0 },
	{ 120, 60 },
	{ 255, 65 },
	{ 255, 189 },
	{ 124, 0 },
	{ 0 },
	{ 120, 60 },
	{ 0, 64 },
	{ 120, 194 },
	{ 0, 186 },
	{ 124, 254 },
	{ 0, 254 },
	{ 120, 60 },
	{ 120, 194 },
	{ 255, 189 },
	{ 124, 254 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00089B14[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00089954, NULL, NULL, NULL, uv_000899FC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_0008997C, NULL, NULL, NULL, uv_00089A3C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000899BC, NULL, NULL, NULL, uv_00089AAC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_000899D0, NULL, NULL, NULL, uv_00089ACC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00089B74[] = {
	{ -627.3067f, 82.63673f, -3374 },
	{ -627.3067f, 82.63673f, -3372 },
	{ -625.3425f, 82.25893f, -3374 },
	{ -625.3425f, 82.25893f, -3372 },
	{ -599.5065f, 221.8923f, -3373 },
	{ -633.8968f, 53.21699f, -3374.5f },
	{ -633.8968f, 53.21699f, -3371.5f },
	{ -627.7975f, 82.73106f, -3374.5f },
	{ -627.7975f, 82.73106f, -3371.5f },
	{ -630.9508f, 52.65045f, -3374.5f },
	{ -630.9508f, 52.65045f, -3371.5f },
	{ -624.8516f, 82.16453f, -3374.5f },
	{ -624.8516f, 82.16453f, -3371.5f },
	{ -643, 47.5f, -3392 },
	{ -643, 47.5f, -3354 },
	{ -642, 60, -3386 },
	{ -642, 60, -3360 },
	{ -619, 42.5f, -3392 },
	{ -619, 42.5f, -3354 },
	{ -626, 55, -3386 },
	{ -626, 55, -3360 },
	{ -666, 51.5f, -3392 },
	{ -666, 51.5f, -3354 },
	{ -657, 61, -3386 },
	{ -657, 61, -3360 },
	{ -646.3067f, 86.63673f, -3374 },
	{ -646.3067f, 86.63673f, -3372 },
	{ -644.3425f, 86.25893f, -3374 },
	{ -644.3425f, 86.25893f, -3372 },
	{ -618.5065f, 225.8923f, -3373 },
	{ -652.8968f, 57.21699f, -3374.5f },
	{ -652.8968f, 57.21699f, -3371.5f },
	{ -646.7975f, 86.73106f, -3374.5f },
	{ -646.7975f, 86.73106f, -3371.5f },
	{ -649.9508f, 56.65045f, -3374.5f },
	{ -649.9508f, 56.65045f, -3371.5f },
	{ -643.8516f, 86.16453f, -3374.5f },
	{ -643.8516f, 86.16453f, -3371.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00089D3C[] = {
	{ -0.6924599f, 0.143316f, -0.707078f },
	{ -0.6924599f, 0.143316f, 0.707078f },
	{ 0.6962349f, -0.123759f, -0.707065f },
	{ 0.6962349f, -0.123759f, 0.707065f },
	{ 0.157359f, 0.987541f, 0 },
	{ -0.695522f, 0.143733f, -0.703981f },
	{ -0.695522f, 0.143733f, 0.703981f },
	{ -0.452969f, 0.678708f, -0.578079f },
	{ -0.452969f, 0.678708f, 0.578079f },
	{ 0.689441f, -0.142477f, -0.710192f },
	{ 0.689441f, -0.142477f, 0.710192f },
	{ 0.679561f, 0.453538f, -0.576628f },
	{ 0.679561f, 0.453538f, 0.576628f },
	{ 0.09290799f, 0.435846f, -0.8952129f },
	{ 0.07892799f, 0.476734f, 0.875497f },
	{ 0.163259f, 0.845056f, -0.509142f },
	{ 0.151312f, 0.8568529f, 0.492857f },
	{ 0.661893f, 0.568425f, -0.488662f },
	{ 0.659586f, 0.591794f, 0.463386f },
	{ 0.5177349f, 0.732475f, -0.442076f },
	{ 0.515443f, 0.748053f, 0.418014f },
	{ -0.431554f, 0.724937f, -0.536868f },
	{ -0.451662f, 0.722506f, 0.523437f },
	{ -0.259202f, 0.865267f, -0.429101f },
	{ -0.278475f, 0.863319f, 0.420871f },
	{ -0.6924599f, 0.143316f, -0.707078f },
	{ -0.6924599f, 0.143316f, 0.707078f },
	{ 0.6962349f, -0.123759f, -0.707065f },
	{ 0.6962349f, -0.123759f, 0.707065f },
	{ 0.157359f, 0.987541f, 0 },
	{ -0.695522f, 0.143733f, -0.703981f },
	{ -0.695522f, 0.143733f, 0.703981f },
	{ -0.452969f, 0.678708f, -0.578079f },
	{ -0.452969f, 0.678708f, 0.578079f },
	{ 0.689441f, -0.142477f, -0.710192f },
	{ 0.689441f, -0.142477f, 0.710192f },
	{ 0.679561f, 0.453538f, -0.576628f },
	{ 0.679561f, 0.453538f, 0.576628f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00089F04 = { vertex_00089B74, normal_00089D3C, LengthOfArray<Sint32>(vertex_00089B74), meshlist_00089B14, matlist_00089904, LengthOfArray<Uint16>(meshlist_00089B14), LengthOfArray<Uint16>(matlist_00089904), { -632.7533f, 134.1962f, -3373 }, 93.64393f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00089F2C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00089F04, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00089F60[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 55, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00089F74[] = {
	4, 4, 5, 3, 2,
	4, 6, 7, 1, 0,
	4, 7, 4, 0, 3,
	4, 12, 13, 11, 10,
	4, 15, 8, 9, 14,
	4, 8, 12, 14, 11,
	4, 20, 21, 19, 18,
	4, 16, 23, 17, 22,
	4, 23, 20, 22, 19,
	4, 28, 29, 27, 26,
	4, 24, 31, 25, 30,
	4, 31, 28, 30, 27
};

extern "C" __declspec(dllexport) NJS_TEX uv_00089FEC[] = {
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008A0AC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 12, poly_00089F74, NULL, NULL, NULL, uv_00089FEC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008A0C4[] = {
	{ -229.3873f, 101.7701f, -2940 },
	{ -215, 123.0586f, -2940 },
	{ -213.2465f, 119.9786f, -2940 },
	{ -228.4489f, 100.2683f, -2940 },
	{ -228.4489f, 100.2683f, -3060 },
	{ -213.2465f, 119.9786f, -3060 },
	{ -215, 123.0586f, -3060 },
	{ -229.3873f, 101.7701f, -3060 },
	{ -229.3873f, 119.8534f, -3060 },
	{ -215, 141.1419f, -2940 },
	{ -213.2465f, 138.0619f, -2940 },
	{ -228.4489f, 118.3517f, -2940 },
	{ -228.4489f, 118.3517f, -3060 },
	{ -213.2465f, 138.0619f, -3060 },
	{ -229.3873f, 119.8534f, -2940 },
	{ -215, 141.1419f, -3060 },
	{ -215, 159.61f, -3054 },
	{ -215, 159.61f, -2946.588f },
	{ -213.2465f, 156.5299f, -2946.588f },
	{ -228.4489f, 136.8197f, -2946.588f },
	{ -228.4489f, 136.8197f, -3054 },
	{ -213.2465f, 156.5299f, -3054 },
	{ -229.3873f, 138.3215f, -2946.588f },
	{ -229.3873f, 138.3215f, -3054 },
	{ -215, 175, -3050 },
	{ -215, 175, -2949.672f },
	{ -213.2465f, 171.92f, -2949.672f },
	{ -228.4489f, 152.2098f, -2949.672f },
	{ -228.4489f, 152.2098f, -3050 },
	{ -213.2465f, 171.92f, -3050 },
	{ -229.3873f, 153.7115f, -2949.672f },
	{ -229.3873f, 153.7115f, -3050 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008A244[] = {
	{ -0.99984f, 0.017897f, 0 },
	{ -0.828531f, 0.559944f, 0 },
	{ 0.791832f, -0.610739f, 0 },
	{ -0.049216f, -0.998788f, 0 },
	{ -0.049216f, -0.998788f, 0 },
	{ 0.791832f, -0.610739f, 0 },
	{ -0.828531f, 0.559944f, 0 },
	{ -0.99984f, 0.017897f, 0 },
	{ -0.99984f, 0.017897f, 0 },
	{ -0.828531f, 0.559944f, 0 },
	{ 0.791832f, -0.610739f, 0 },
	{ -0.049216f, -0.998788f, 0 },
	{ -0.049216f, -0.998788f, 0 },
	{ 0.791832f, -0.610739f, 0 },
	{ -0.99984f, 0.017897f, 0 },
	{ -0.828531f, 0.559944f, 0 },
	{ -0.828531f, 0.559944f, 0 },
	{ -0.828531f, 0.559944f, 0 },
	{ 0.791832f, -0.610739f, 0 },
	{ -0.049216f, -0.998788f, 0 },
	{ -0.049216f, -0.998788f, 0 },
	{ 0.791832f, -0.610739f, 0 },
	{ -0.99984f, 0.017897f, 0 },
	{ -0.99984f, 0.017897f, 0 },
	{ -0.828531f, 0.559944f, 0 },
	{ -0.828531f, 0.559944f, 0 },
	{ 0.791832f, -0.610739f, 0 },
	{ -0.049216f, -0.998788f, 0 },
	{ -0.049216f, -0.998788f, 0 },
	{ 0.791832f, -0.610739f, 0 },
	{ -0.99984f, 0.017897f, 0 },
	{ -0.99984f, 0.017897f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008A3C4 = { vertex_0008A0C4, normal_0008A244, LengthOfArray<Sint32>(vertex_0008A0C4), meshlist_0008A0AC, matlist_00089F60, LengthOfArray<Uint16>(meshlist_0008A0AC), LengthOfArray<Uint16>(matlist_00089F60), { -221.3169f, 137.6342f, -3000 }, 70.68385f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008A3EC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008A3C4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008A420[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 34, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008A448[] = {
	4, 1, 0, 3, 2,
	4, 3, 2, 7, 6,
	6, 15, 14, 11, 10, 9, 8
};

extern "C" __declspec(dllexport) Sint16 poly_0008A46A[] = {
	4, 5, 1, 7, 3,
	4, 0, 4, 2, 6,
	4, 15, 11, 13, 9,
	4, 10, 14, 8, 12
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008A494[] = {
	{ 1259, 255 },
	{ 1259, -255 },
	{ 1530, 255 },
	{ 1530, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 1259, 255 },
	{ 1259, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 1259, 255 },
	{ 1259, -255 },
	{ 1530, 255 },
	{ 1530, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008A4CC[] = {
	{ 765, 255 },
	{ 0, 255 },
	{ 765, -510 },
	{ 0, 22 },
	{ 0, 255 },
	{ 765, 255 },
	{ 0, 22 },
	{ 765, -510 },
	{ 765, -510 },
	{ 0, 22 },
	{ 765, 255 },
	{ 0, 255 },
	{ 0, 22 },
	{ 765, -510 },
	{ 0, 255 },
	{ 765, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008A50C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0008A448, NULL, NULL, NULL, uv_0008A494, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_0008A46A, NULL, NULL, NULL, uv_0008A4CC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008A53C[] = {
	{ -729, -12, -3458 },
	{ -729, -12, -3476 },
	{ -729, 2, -3458 },
	{ -729, 2, -3476 },
	{ -672, -12, -3458 },
	{ -672, -12, -3476 },
	{ -672, 34, -3458 },
	{ -672, 34, -3476 },
	{ -729, -12, -3343 },
	{ -729, -12, -3325 },
	{ -729, 2, -3343 },
	{ -729, 2, -3325 },
	{ -672, -12, -3343 },
	{ -672, -12, -3325 },
	{ -672, 34, -3343 },
	{ -672, 34, -3325 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008A5FC[] = {
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.6844209f, 0.400665f, 0.609126f },
	{ -0.6844209f, 0.400665f, -0.609126f },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ -0.405876f, 0.722966f, 0.559093f },
	{ -0.405876f, 0.722966f, -0.559093f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.6844209f, 0.400665f, -0.609126f },
	{ -0.6844209f, 0.400665f, 0.609126f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ -0.405876f, 0.722966f, -0.559093f },
	{ -0.405876f, 0.722966f, 0.559093f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008A6BC = { vertex_0008A53C, normal_0008A5FC, LengthOfArray<Sint32>(vertex_0008A53C), meshlist_0008A50C, matlist_0008A420, LengthOfArray<Uint16>(meshlist_0008A50C), LengthOfArray<Uint16>(matlist_0008A420), { -700.5f, 11, -3400.5f }, 80.70007f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008A6E4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008A6BC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008A718[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 21, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008A740[] = {
	4, 5, 4, 2, 1,
	4, 5, 2, 3, 0,
	4, 18, 17, 15, 14,
	4, 14, 17, 13, 16
};

extern "C" __declspec(dllexport) Sint16 poly_0008A768[] = {
	4, 12, 11, 8, 7,
	4, 12, 8, 10, 6,
	4, 11, 12, 9, 10,
	4, 25, 24, 21, 20,
	4, 20, 24, 19, 22,
	4, 24, 25, 22, 23
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008A7A4[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008A7E4[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -255 },
	{ 255, -255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 255, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 255, 255 },
	{ 255, -255 },
	{ 0, -255 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 255, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008A844[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0008A740, NULL, NULL, NULL, uv_0008A7A4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_0008A768, NULL, NULL, NULL, uv_0008A7E4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008A874[] = {
	{ -748, -12, -3458 },
	{ -748, 0, -3476 },
	{ -748, -3, -3458 },
	{ -729, -12, -3458 },
	{ -729, 0, -3476 },
	{ -729, -3, -3458 },
	{ -786, -12, -3458 },
	{ -786, 3, -3476 },
	{ -786, 3, -3458 },
	{ -748, -12, -3476 },
	{ -748, -12, -3458 },
	{ -748, 3, -3476 },
	{ -748, 3, -3458 },
	{ -748, -12, -3343 },
	{ -748, -3, -3343 },
	{ -748, 0, -3325 },
	{ -729, -12, -3343 },
	{ -729, -3, -3343 },
	{ -729, 0, -3325 },
	{ -786, -12, -3343 },
	{ -786, 3, -3343 },
	{ -786, 3, -3325 },
	{ -748, -12, -3343 },
	{ -748, -12, -3325 },
	{ -748, 3, -3343 },
	{ -748, 3, -3325 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008A9AC[] = {
	{ 0, 0, 1 },
	{ 0, 0.986394f, 0.164399f },
	{ 0, 0.6463749f, 0.76302f },
	{ 0, 0, 1 },
	{ 0, 0.986394f, 0.164399f },
	{ 0, 0.6463749f, 0.76302f },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0, 0, -1 },
	{ 0, 0.6463749f, -0.76302f },
	{ 0, 0.986394f, -0.164399f },
	{ 0, 0, -1 },
	{ 0, 0.6463749f, -0.76302f },
	{ 0, 0.986394f, -0.164399f },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 1, 0, 0 },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.7071069f, 0.7071069f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008AAE4 = { vertex_0008A874, normal_0008A9AC, LengthOfArray<Sint32>(vertex_0008A874), meshlist_0008A844, matlist_0008A718, LengthOfArray<Uint16>(meshlist_0008A844), LengthOfArray<Uint16>(matlist_0008A718), { -757.5f, -4.5f, -3400.5f }, 80.70007f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008AB0C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008AAE4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008AB40[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008ABA4[] = {
	4, 8, 6, 1, 2,
	4, 7, 9, 5, 4,
	4, 23, 25, 21, 19,
	4, 24, 22, 17, 18
};

extern "C" __declspec(dllexport) Sint16 poly_0008ABCC[] = {
	4, 6, 7, 2, 5,
	4, 9, 8, 3, 0,
	4, 22, 23, 18, 21,
	4, 25, 24, 20, 16
};

extern "C" __declspec(dllexport) Sint16 poly_0008ABF4[] = {
	4, 6, 8, 7, 9,
	4, 22, 24, 23, 25
};

extern "C" __declspec(dllexport) Sint16 poly_0008AC08[] = {
	4, 12, 11, 15, 14,
	4, 29, 30, 26, 31,
	4, 37, 34, 36, 33
};

extern "C" __declspec(dllexport) Sint16 poly_0008AC26[] = {
	4, 11, 10, 14, 13,
	4, 28, 29, 27, 26,
	4, 34, 35, 33, 32
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008AC44[] = {
	{ 9, 0 },
	{ 191, 255 },
	{ 67, 0 },
	{ 246, 255 },
	{ 191, 255 },
	{ 9, 0 },
	{ 246, 255 },
	{ 67, 0 },
	{ 191, 255 },
	{ 9, 0 },
	{ 246, 255 },
	{ 67, 0 },
	{ 9, 0 },
	{ 191, 255 },
	{ 67, 0 },
	{ 246, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008AC84[] = {
	{ 194, 203 },
	{ 500, 203 },
	{ 194, 255 },
	{ 500, 255 },
	{ 500, 35 },
	{ 194, 35 },
	{ 500, -255 },
	{ 194, -255 },
	{ 1032, 203 },
	{ 1324, 203 },
	{ 1032, 255 },
	{ 1324, 255 },
	{ 1324, 35 },
	{ 1032, 35 },
	{ 1324, -255 },
	{ 1032, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008ACC4[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008ACE4[] = {
	{ 344, 0 },
	{ 344, 255 },
	{ 700, 0 },
	{ 700, 255 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 895, 255 },
	{ 895, 0 },
	{ 0 },
	{ 0, 255 },
	{ 141, 0 },
	{ 141, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008AD14[] = {
	{ 344, 253 },
	{ 344, 1 },
	{ 700, 253 },
	{ 700, 1 },
	{ 1020, 1 },
	{ 1020, 253 },
	{ 895, 1 },
	{ 895, 253 },
	{ 0, 253 },
	{ 0, 1 },
	{ 141, 253 },
	{ 141, 1 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008AD44[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0008ABA4, NULL, NULL, NULL, uv_0008AC44, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_0008ABCC, NULL, NULL, NULL, uv_0008AC84, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0008ABF4, NULL, NULL, NULL, uv_0008ACC4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_0008AC08, NULL, NULL, NULL, uv_0008ACE4, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 3, poly_0008AC26, NULL, NULL, NULL, uv_0008AD14, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008ADBC[] = {
	{ -784, 0, -3442 },
	{ -757, 0, -3442 },
	{ -744, -12, -3442 },
	{ -784, 0, -3419 },
	{ -757, 0, -3419 },
	{ -744, -12, -3419 },
	{ -748, -12, -3442 },
	{ -748, -12, -3419 },
	{ -761.2188f, 0, -3442 },
	{ -761.2188f, 0, -3419 },
	{ -784, 0, -3419 },
	{ -757, 0, -3419 },
	{ -744, -12, -3419 },
	{ -784, 0, -3379 },
	{ -757, 0, -3379 },
	{ -744, -12, -3379 },
	{ -784, 0, -3379 },
	{ -757, 0, -3379 },
	{ -744, -12, -3379 },
	{ -757, 0, -3357 },
	{ -784, 0, -3357 },
	{ -744, -12, -3357 },
	{ -748, -12, -3379 },
	{ -748, -12, -3357 },
	{ -761.2188f, 0, -3379 },
	{ -761.2188f, 0, -3357 },
	{ -757, 0, -3357 },
	{ -784, 0, -3357 },
	{ -784, 0, -3343 },
	{ -757, 0, -3343 },
	{ -744, -12, -3343 },
	{ -744, -12, -3357 },
	{ -784, 0, -3442 },
	{ -757, 0, -3442 },
	{ -757, 0, -3458 },
	{ -784, 0, -3458 },
	{ -744, -12, -3442 },
	{ -744, -12, -3458 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008AF84[] = {
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0, 0.903435f, 0.428724f },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ 0, 0.903435f, -0.428724f },
	{ 0.278519f, 0.721177f, 0.634295f },
	{ 0.278519f, 0.721177f, -0.634295f },
	{ 0.349385f, 0.904672f, 0.243922f },
	{ 0.349385f, 0.904672f, -0.243922f },
	{ 0, 1, 0 },
	{ 0.36414f, 0.931344f, 0 },
	{ 0.67828f, 0.734803f, 0 },
	{ 0, 1, 0 },
	{ 0.36414f, 0.931344f, 0 },
	{ 0.67828f, 0.734803f, 0 },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0, 0.903435f, 0.428724f },
	{ 0, 0, -1 },
	{ 0, 1, 0 },
	{ 0, 0.903435f, -0.428724f },
	{ 0.278519f, 0.721177f, 0.634295f },
	{ 0.278519f, 0.721177f, -0.634295f },
	{ 0.349385f, 0.904672f, 0.243922f },
	{ 0.349385f, 0.904672f, -0.243922f },
	{ 0.36414f, 0.931344f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.36414f, 0.931344f, 0 },
	{ 0.67828f, 0.734803f, 0 },
	{ 0.67828f, 0.734803f, 0 },
	{ 0, 1, 0 },
	{ 0.36414f, 0.931344f, 0 },
	{ 0.36414f, 0.931344f, 0 },
	{ 0, 1, 0 },
	{ 0.67828f, 0.734803f, 0 },
	{ 0.67828f, 0.734803f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008B14C = { vertex_0008ADBC, normal_0008AF84, LengthOfArray<Sint32>(vertex_0008ADBC), meshlist_0008AD44, matlist_0008AB40, LengthOfArray<Uint16>(meshlist_0008AD44), LengthOfArray<Uint16>(matlist_0008AB40), { -764, -6, -3400.5f }, 60.87898f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008B174 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008B14C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008B1A8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008B220[] = {
	6, 11, 5, 1, 4, 0, 6,
	3, 1, 9, 11,
	3, 4, 8, 6,
	3, 16, 20, 18,
	6, 24, 17, 13, 16, 12, 18,
	3, 13, 22, 24
};

extern "C" __declspec(dllexport) Sint16 poly_0008B25C[] = {
	3, 5, 11, 10,
	6, 8, 4, 2, 5, 3, 10,
	3, 2, 7, 8,
	3, 14, 19, 20,
	4, 24, 22, 23, 21,
	6, 23, 15, 17, 14, 16, 20,
	3, 17, 24, 23
};

extern "C" __declspec(dllexport) Sint16 poly_0008B2A2[] = {
	4, 36, 34, 29, 25,
	4, 35, 36, 27, 29,
	4, 31, 33, 26, 30,
	4, 33, 32, 30, 28
};

extern "C" __declspec(dllexport) Sint16 poly_0008B2CA[] = {
	4, 29, 30, 27, 28,
	4, 30, 29, 26, 25
};

extern "C" __declspec(dllexport) Sint16 poly_0008B2DE[] = {
	4, 44, 43, 40, 39,
	4, 44, 40, 42, 38,
	4, 39, 43, 37, 41,
	4, 52, 51, 48, 47,
	4, 52, 48, 50, 46,
	4, 47, 51, 45, 49
};

extern "C" __declspec(dllexport) Sint16 poly_0008B31A[] = {
	4, 43, 44, 41, 42,
	4, 51, 52, 49, 50
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008B330[] = {
	{ 0 },
	{ 142, 0 },
	{ 142, 255 },
	{ 378, 0 },
	{ 378, 255 },
	{ 510, 255 },
	{ 142, 255 },
	{ 0, 255 },
	{ 0 },
	{ 378, 0 },
	{ 510, 0 },
	{ 510, 255 },
	{ 378, 0 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0 },
	{ 142, 0 },
	{ 142, 255 },
	{ 378, 0 },
	{ 378, 255 },
	{ 510, 255 },
	{ 142, 255 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008B390[] = {
	{ 142, 255 },
	{ 0, 255 },
	{ 0 },
	{ 510, 255 },
	{ 378, 255 },
	{ 378, 0 },
	{ 142, 255 },
	{ 142, 0 },
	{ 0 },
	{ 378, 0 },
	{ 510, 0 },
	{ 510, 255 },
	{ 378, 0 },
	{ 510, 0 },
	{ 510, 255 },
	{ 142, 255 },
	{ 0, 255 },
	{ 142, 0 },
	{ 0 },
	{ 0 },
	{ 142, 0 },
	{ 142, 255 },
	{ 378, 0 },
	{ 378, 255 },
	{ 510, 255 },
	{ 142, 255 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008B400[] = {
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0, 255 },
	{ 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 0, 255 },
	{ 0 },
	{ 510, 255 },
	{ 510, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008B440[] = {
	{ 0, 255 },
	{ 1020, 255 },
	{ 0 },
	{ 1020, 0 },
	{ 0, 255 },
	{ 1020, 255 },
	{ 0 },
	{ 1020, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008B460[] = {
	{ 0, 255 },
	{ 510, 255 },
	{ 0 },
	{ 510, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0 },
	{ 510, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008B4C0[] = {
	{ 0, 255 },
	{ 510, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0 },
	{ 510, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008B4E0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_0008B220, NULL, NULL, NULL, uv_0008B330, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 7, poly_0008B25C, NULL, NULL, NULL, uv_0008B390, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_0008B2A2, NULL, NULL, NULL, uv_0008B400, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_0008B2CA, NULL, NULL, NULL, uv_0008B440, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 6, poly_0008B2DE, NULL, NULL, NULL, uv_0008B460, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, poly_0008B31A, NULL, NULL, NULL, uv_0008B4C0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008B570[] = {
	{ -786, 11, -3384 },
	{ -786, 11, -3372 },
	{ -779, 0, -3384 },
	{ -779, 0, -3372 },
	{ -775, 8, -3384 },
	{ -775, 8, -3372 },
	{ -780, 10, -3389 },
	{ -773, 0, -3389 },
	{ -769, 8, -3389 },
	{ -780, 10, -3367 },
	{ -773, 0, -3367 },
	{ -769, 8, -3367 },
	{ -786, 11, -3363 },
	{ -786, 11, -3350 },
	{ -779, 0, -3363 },
	{ -779, 0, -3350 },
	{ -775, 8, -3363 },
	{ -775, 8, -3350 },
	{ -780, 10, -3367 },
	{ -773, 0, -3367 },
	{ -769, 8, -3367 },
	{ -780, 0, -3345 },
	{ -780, 10, -3345 },
	{ -773, 0, -3345 },
	{ -769, 8, -3345 },
	{ -807, 13, -3450 },
	{ -807, 13, -3350 },
	{ -786, -12, -3450 },
	{ -786, -12, -3350 },
	{ -786, 11, -3450 },
	{ -786, 11, -3350 },
	{ -783.9412f, 5.734215f, -3328 },
	{ -759, -12, -3325 },
	{ -759, 4, -3325 },
	{ -783.9416f, 5.733311f, -3471 },
	{ -758, -12, -3476 },
	{ -758, 4, -3476 },
	{ -786, 0, -3445 },
	{ -786, 0, -3418 },
	{ -786, 10, -3445 },
	{ -786, 10, -3418 },
	{ -775, 0, -3445 },
	{ -775, 0, -3418 },
	{ -775, 17, -3445 },
	{ -775, 17, -3418 },
	{ -800, 8.799999f, -3381 },
	{ -800, 8.799999f, -3355 },
	{ -800, 12.3f, -3381 },
	{ -800, 12.3f, -3355 },
	{ -786, 8.799999f, -3381 },
	{ -786, 8.799999f, -3355 },
	{ -786, 17.99999f, -3381 },
	{ -786, 17.99999f, -3355 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008B7EC[] = {
	{ 0.249956f, 0.965f, 0.07935499f },
	{ 0.250411f, 0.967896f, -0.021697f },
	{ 0.8384219f, -0.419211f, 0.348298f },
	{ 0.8384219f, -0.419211f, -0.348298f },
	{ 0.7372389f, 0.524611f, 0.425749f },
	{ 0.759924f, 0.553944f, -0.340092f },
	{ 0.214176f, 0.942376f, 0.257012f },
	{ 0.609711f, -0.304855f, 0.731653f },
	{ 0.625918f, 0.209934f, 0.751102f },
	{ 0.221066f, 0.97269f, -0.070741f },
	{ 0.609711f, -0.304855f, -0.731653f },
	{ 0.670862f, 0.239881f, -0.701713f },
	{ 0.25131f, 0.963991f, 0.08697399f },
	{ 0.250411f, 0.967897f, -0.021697f },
	{ 0.825234f, -0.412617f, 0.385663f },
	{ 0.8384219f, -0.419211f, -0.348298f },
	{ 0.694188f, 0.534176f, 0.482451f },
	{ 0.759924f, 0.553944f, -0.340092f },
	{ 0.210305f, 0.925342f, 0.315458f },
	{ 0.534523f, -0.267261f, 0.801784f },
	{ 0.5459189f, 0.177232f, 0.818878f },
	{ 0, 0, 1 },
	{ 0.198427f, 0.873078f, 0.445378f },
	{ 0.806383f, -0.403192f, 0.432646f },
	{ 0.886226f, 0.316889f, 0.337911f },
	{ 0.082817f, 0.994427f, -0.06524f },
	{ 0.084671f, 0.992898f, 0.083574f },
	{ 0.916638f, 0, 0.399718f },
	{ 0.9163539f, 0, -0.40037f },
	{ 0.579044f, 0.807822f, 0.110143f },
	{ 0.584386f, 0.807064f, -0.08450899f },
	{ 0.061875f, 0.965241f, 0.253931f },
	{ 0.679408f, 0, -0.733761f },
	{ 0.692848f, 0.342931f, -0.634318f },
	{ 0.056158f, 0.977623f, -0.202729f },
	{ 0.680451f, 0, 0.732794f },
	{ 0.6873569f, 0.310356f, 0.656673f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ -0.31792f, 0.499588f, -0.805815f },
	{ -0.31792f, 0.499588f, 0.805815f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.400852f, 0.730221f, -0.553259f },
	{ 0.400852f, 0.730221f, 0.553259f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ -0.236007f, 0.579667f, -0.779927f },
	{ -0.236007f, 0.579667f, 0.779927f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.462482f, 0.687641f, -0.559697f },
	{ 0.462482f, 0.687641f, 0.559697f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008BA68 = { vertex_0008B570, normal_0008B7EC, LengthOfArray<Sint32>(vertex_0008B570), meshlist_0008B4E0, matlist_0008B1A8, LengthOfArray<Uint16>(meshlist_0008B4E0), LengthOfArray<Uint16>(matlist_0008B1A8), { -782.5f, 2.999998f, -3400.5f }, 79.37569f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008BA90 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008BA68, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008BAC4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008BAEC[] = {
	4, 3, 2, 1, 0,
	4, 7, 3, 5, 1,
	4, 6, 7, 4, 5,
	4, 2, 6, 0, 4
};

extern "C" __declspec(dllexport) Sint16 poly_0008BB14[] = {
	4, 7, 6, 3, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008BB20[] = {
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

extern "C" __declspec(dllexport) NJS_TEX uv_0008BB60[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008BB70[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0008BAEC, NULL, NULL, NULL, uv_0008BB20, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0008BB14, NULL, NULL, NULL, uv_0008BB60, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008BBA0[] = {
	{ -777.284f, 15.32079f, -3403 },
	{ -777.284f, 15.32079f, -3396 },
	{ -772.4111f, 18.22437f, -3402 },
	{ -772.4111f, 18.22437f, -3397 },
	{ -757.2505f, 4.182649f, -3403 },
	{ -757.2505f, 4.182649f, -3396 },
	{ -757.3776f, 10.08622f, -3402 },
	{ -757.3776f, 10.08622f, -3397 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008BC00[] = {
	{ -0.880094f, 0.361755f, -0.307519f },
	{ -0.880094f, 0.361755f, 0.307519f },
	{ -0.568034f, 0.775319f, -0.276077f },
	{ -0.568034f, 0.775319f, 0.276077f },
	{ 0.787286f, -0.55182f, -0.27509f },
	{ 0.787286f, -0.55182f, 0.27509f },
	{ 0.963739f, -0.108879f, -0.243623f },
	{ 0.963739f, -0.108879f, 0.243623f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008BC60 = { vertex_0008BBA0, normal_0008BC00, LengthOfArray<Sint32>(vertex_0008BBA0), meshlist_0008BB70, matlist_0008BAC4, LengthOfArray<Uint16>(meshlist_0008BB70), LengthOfArray<Uint16>(matlist_0008BAC4), { -767.2673f, 11.20351f, -3399.5f }, 10.6106f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008BC88 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008BC60, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008BCBC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008BCE4[] = {
	6, 0, 1, 2, 3, 6, 7
};

extern "C" __declspec(dllexport) Sint16 poly_0008BCF2[] = {
	4, 7, 3, 5, 1,
	4, 2, 6, 0, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008BD08[] = {
	{ 510, 0 },
	{ 510, 255 },
	{ 406, 0 },
	{ 406, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008BD20[] = {
	{ 510, -255 },
	{ 0, 42 },
	{ 510, 255 },
	{ 0, 255 },
	{ 0, 42 },
	{ 510, -255 },
	{ 0, 255 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008BD40[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0008BCE4, NULL, NULL, NULL, uv_0008BD08, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0008BCF2, NULL, NULL, NULL, uv_0008BD20, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008BD70[] = {
	{ -715, 22, -3410 },
	{ -715, 22, -3395.5f },
	{ -715, 32, -3409 },
	{ -715, 32, -3396.5f },
	{ -678, 22, -3410 },
	{ -678, 22, -3395.5f },
	{ -678, 46, -3409 },
	{ -678, 46, -3396.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008BDD0[] = {
	{ -0.690852f, 0.071941f, -0.719408f },
	{ -0.686627f, 0.030266f, 0.726379f },
	{ -0.665251f, 0.488411f, -0.5647089f },
	{ -0.671406f, 0.46412f, 0.57776f },
	{ -0.018822f, 0.09948599f, -0.9948609f },
	{ -0.007875999f, 0.041629f, 0.999102f },
	{ -0.278765f, 0.765717f, -0.579627f },
	{ -0.27963f, 0.751472f, 0.597576f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008BE30 = { vertex_0008BD70, normal_0008BDD0, LengthOfArray<Sint32>(vertex_0008BD70), meshlist_0008BD40, matlist_0008BCBC, LengthOfArray<Uint16>(meshlist_0008BD40), LengthOfArray<Uint16>(matlist_0008BCBC), { -696.5f, 34, -3402.75f }, 19.86989f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008BE58 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008BE30, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008BE8C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008BEC8[] = {
	4, 7, 6, 3, 2,
	4, 15, 14, 11, 10
};

extern "C" __declspec(dllexport) Sint16 poly_0008BEDC[] = {
	3, 1, 5, 3,
	0x8000u | 7, 3, 7, 5, 11, 9, 15, 13,
	7, 14, 12, 10, 8, 6, 4, 0,
	3, 0, 2, 6
};

extern "C" __declspec(dllexport) Sint16 poly_0008BF0C[] = {
	4, 11, 10, 7, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008BF18[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008BF38[] = {
	{ 0, 255 },
	{ 278, 255 },
	{ 0, -169 },
	{ 0, -169 },
	{ 278, -255 },
	{ 278, 255 },
	{ 809, 101 },
	{ 809, 255 },
	{ 1020, 101 },
	{ 1020, 255 },
	{ 1020, 101 },
	{ 1020, 255 },
	{ 809, 101 },
	{ 809, 255 },
	{ 278, -255 },
	{ 278, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, -169 },
	{ 278, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008BF88[] = {
	{ 0, 255 },
	{ 0 },
	{ 510, 255 },
	{ 510, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008BF98[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0008BEC8, NULL, NULL, NULL, uv_0008BF18, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_0008BEDC, NULL, NULL, NULL, uv_0008BF38, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0008BF0C, NULL, NULL, NULL, uv_0008BF88, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008BFE0[] = {
	{ -802, -12, -3411 },
	{ -802, -12, -3389 },
	{ -802, 13, -3411 },
	{ -802, 13, -3389 },
	{ -782, -12, -3411 },
	{ -782, -12, -3389 },
	{ -782, 18, -3411 },
	{ -782, 18, -3389 },
	{ -744, -12, -3411 },
	{ -744, -12, -3389 },
	{ -744, -3, -3411 },
	{ -744, -3, -3389 },
	{ -729, -12, -3411 },
	{ -729, -12, -3389 },
	{ -729, -3, -3411 },
	{ -729, -3, -3389 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008C0A0[] = {
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ -0.158678f, 0.634712f, -0.756282f },
	{ -0.158678f, 0.634712f, 0.756282f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0.100288f, 0.767444f, -0.633223f },
	{ 0.100288f, 0.767444f, 0.633223f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0.159994f, 0.620295f, -0.767878f },
	{ 0.159994f, 0.620295f, 0.767878f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008C160 = { vertex_0008BFE0, normal_0008C0A0, LengthOfArray<Sint32>(vertex_0008BFE0), meshlist_0008BF98, matlist_0008BE8C, LengthOfArray<Uint16>(meshlist_0008BF98), LengthOfArray<Uint16>(matlist_0008BE8C), { -765.5f, 3, -3400 }, 38.12151f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008C188 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008C160, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008C1BC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 36, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 35, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 47, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008C1F8[] = {
	4, 3, 2, 1, 0
};

extern "C" __declspec(dllexport) Sint16 poly_0008C202[] = {
	4, 7, 3, 5, 1,
	4, 2, 6, 0, 4
};

extern "C" __declspec(dllexport) Sint16 poly_0008C216[] = {
	4, 7, 6, 3, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008C220[] = {
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008C230[] = {
	{ 510, 0 },
	{ 0 },
	{ 510, 255 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008C250[] = {
	{ 510, -255 },
	{ 510, 255 },
	{ 0, -255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008C260[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0008C1F8, NULL, NULL, NULL, uv_0008C220, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0008C202, NULL, NULL, NULL, uv_0008C230, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0008C216, NULL, NULL, NULL, uv_0008C250, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008C2A8[] = {
	{ -729, -12, -3416 },
	{ -729, -12, -3388 },
	{ -729, 22, -3416 },
	{ -729, 22, -3388 },
	{ -677, -12, -3416 },
	{ -677, -12, -3388 },
	{ -677, 22, -3416 },
	{ -677, 22, -3388 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008C308[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008C368 = { vertex_0008C2A8, normal_0008C308, LengthOfArray<Sint32>(vertex_0008C2A8), meshlist_0008C260, matlist_0008C1BC, LengthOfArray<Uint16>(meshlist_0008C260), LengthOfArray<Uint16>(matlist_0008C1BC), { -703, 5, -3402 }, 29.52965f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008C390 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008C368, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008C3C4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 55, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008C3D8[] = {
	4, 23, 21, 22, 20,
	4, 4, 5, 1, 0,
	4, 5, 3, 0, 2,
	4, 18, 23, 19, 22,
	4, 11, 6, 7, 10,
	4, 6, 9, 10, 8,
	4, 17, 15, 16, 14,
	4, 12, 17, 13, 16
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008C428[] = {
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008C4A8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, poly_0008C3D8, NULL, NULL, NULL, uv_0008C428, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008C4C0[] = {
	{ -229.3873f, 101.7701f, -40 },
	{ -215, 123.0586f, -40 },
	{ -228.4489f, 100.2683f, -40 },
	{ -228.4489f, 100.2683f, -160 },
	{ -215, 123.0586f, -160 },
	{ -229.3873f, 101.7701f, -160 },
	{ -229.3873f, 119.8534f, -160 },
	{ -215, 141.1419f, -40 },
	{ -228.4489f, 118.3517f, -40 },
	{ -228.4489f, 118.3517f, -160 },
	{ -229.3873f, 119.8534f, -40 },
	{ -215, 141.1419f, -160 },
	{ -215, 159.61f, -154 },
	{ -215, 159.61f, -46.58838f },
	{ -228.4489f, 136.8197f, -46.58838f },
	{ -228.4489f, 136.8197f, -154 },
	{ -229.3873f, 138.3215f, -46.58838f },
	{ -229.3873f, 138.3215f, -154 },
	{ -215, 175, -150 },
	{ -215, 175, -49.67163f },
	{ -228.4489f, 152.2098f, -49.67163f },
	{ -228.4489f, 152.2098f, -150 },
	{ -229.3873f, 153.7115f, -49.67163f },
	{ -229.3873f, 153.7115f, -150 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008C5E0[] = {
	{ -0.99984f, 0.017897f, 0 },
	{ -0.828531f, 0.559944f, 0 },
	{ -0.848039f, -0.529933f, 0 },
	{ -0.848039f, -0.529933f, 0 },
	{ -0.828531f, 0.559944f, 0 },
	{ -0.99984f, 0.017897f, 0 },
	{ -0.99984f, 0.017897f, 0 },
	{ -0.828531f, 0.559944f, 0 },
	{ -0.848039f, -0.529933f, 0 },
	{ -0.848039f, -0.529933f, 0 },
	{ -0.99984f, 0.017897f, 0 },
	{ -0.828531f, 0.559944f, 0 },
	{ -0.828531f, 0.559944f, 0 },
	{ -0.828531f, 0.559944f, 0 },
	{ -0.848039f, -0.529933f, 0 },
	{ -0.848039f, -0.529933f, 0 },
	{ -0.99984f, 0.017897f, 0 },
	{ -0.99984f, 0.017897f, 0 },
	{ -0.828531f, 0.559944f, 0 },
	{ -0.828531f, 0.559944f, 0 },
	{ -0.848039f, -0.529933f, 0 },
	{ -0.848039f, -0.529933f, 0 },
	{ -0.99984f, 0.017897f, 0 },
	{ -0.99984f, 0.017897f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008C700 = { vertex_0008C4C0, normal_0008C5E0, LengthOfArray<Sint32>(vertex_0008C4C0), meshlist_0008C4A8, matlist_0008C3C4, LengthOfArray<Uint16>(meshlist_0008C4A8), LengthOfArray<Uint16>(matlist_0008C3C4), { -222.1936f, 137.6342f, -100 }, 70.68385f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008C728 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008C700, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008C75C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008C7AC[] = {
	4, 15, 5, 14, 0,
	4, 14, 0, 13, 12,
	4, 11, 13, 6, 12,
	4, 22, 27, 6, 11,
	4, 30, 16, 31, 21,
	4, 29, 28, 30, 16,
	4, 22, 28, 27, 29
};

extern "C" __declspec(dllexport) Sint16 poly_0008C7F2[] = {
	0x8000u | 6, 1, 2, 0, 3, 5, 4,
	0x8000u | 6, 21, 20, 16, 19, 17, 18
};

extern "C" __declspec(dllexport) Sint16 poly_0008C80E[] = {
	8, 2, 3, 7, 8, 23, 24, 18, 19,
	8, 4, 5, 9, 10, 25, 26, 20, 21,
	8, 18, 17, 23, 22, 7, 6, 2, 1,
	8, 20, 19, 25, 24, 9, 8, 4, 3
};

extern "C" __declspec(dllexport) Sint16 poly_0008C856[] = {
	4, 6, 12, 1, 0,
	4, 17, 16, 22, 28
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008C86C[] = {
	{ 158, 183 },
	{ 197, 0 },
	{ 77, 183 },
	{ 113, 0 },
	{ 0, 184 },
	{ 0 },
	{ 59, 184 },
	{ 59, 0 },
	{ 9, 183 },
	{ 77, 183 },
	{ 45, 0 },
	{ 113, 0 },
	{ 195, 0 },
	{ 195, 184 },
	{ 59, 0 },
	{ 59, 184 },
	{ 83, 183 },
	{ 119, 0 },
	{ 163, 183 },
	{ 201, 0 },
	{ 195, 184 },
	{ 195, 0 },
	{ 255, 184 },
	{ 255, 0 },
	{ 52, 0 },
	{ 119, 0 },
	{ 16, 183 },
	{ 83, 183 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008C8DC[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 95 },
	{ 0, 99 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 95 },
	{ 0, 99 },
	{ 255, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008C90C[] = {
	{ 59, 199 },
	{ 59, -30 },
	{ 118, 199 },
	{ 118, -30 },
	{ 390, 199 },
	{ 390, -30 },
	{ 450, 199 },
	{ 450, -30 },
	{ 59, -254 },
	{ 0, 256 },
	{ 118, -254 },
	{ 118, 256 },
	{ 390, -254 },
	{ 390, 256 },
	{ 450, -254 },
	{ 510, 256 },
	{ 450, -254 },
	{ 510, 83 },
	{ 390, -254 },
	{ 390, 83 },
	{ 118, -254 },
	{ 118, 83 },
	{ 59, -254 },
	{ 0, 83 },
	{ 450, -255 },
	{ 450, -58 },
	{ 390, -255 },
	{ 390, -58 },
	{ 118, -255 },
	{ 118, -58 },
	{ 59, -255 },
	{ 59, -58 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008C98C[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008C9AC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_0008C7AC, NULL, NULL, NULL, uv_0008C86C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0008C7F2, NULL, NULL, NULL, uv_0008C8DC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_0008C80E, NULL, NULL, NULL, uv_0008C90C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_0008C856, NULL, NULL, NULL, uv_0008C98C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008CA0C[] = {
	{ 288.25f, 61, -3383 },
	{ 288.25f, 61, -3398 },
	{ 297.13f, 85, -3391 },
	{ 297.13f, 93, -3378 },
	{ 297.1299f, 94, -3360.4f },
	{ 288.25f, 61, -3364.4f },
	{ 306.01f, 61, -3398 },
	{ 306.01f, 85, -3391 },
	{ 306.01f, 93, -3378 },
	{ 306.0099f, 94, -3360.4f },
	{ 306.0099f, 61, -3364.4f },
	{ 306.01f, 17, -3406 },
	{ 306.01f, 61, -3383 },
	{ 306.01f, 17, -3391 },
	{ 288.25f, 17, -3391 },
	{ 288.25f, 17, -3373 },
	{ 364.75f, 61, -3383 },
	{ 364.75f, 61, -3398 },
	{ 355.87f, 85, -3391 },
	{ 355.87f, 93, -3378 },
	{ 355.87f, 94, -3360.4f },
	{ 364.75f, 61, -3364.4f },
	{ 346.99f, 61, -3398 },
	{ 346.99f, 85, -3391 },
	{ 346.99f, 93, -3378 },
	{ 346.99f, 94, -3360.4f },
	{ 346.99f, 61, -3364.4f },
	{ 346.99f, 17, -3406 },
	{ 346.99f, 61, -3383 },
	{ 346.99f, 17, -3391 },
	{ 364.75f, 17, -3391 },
	{ 364.75f, 17, -3373 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008CB8C[] = {
	{ -0.936655f, -0.055514f, -0.345825f },
	{ -0.622091f, -0.383608f, -0.682531f },
	{ -0.475494f, 0.603936f, -0.639662f },
	{ -0.5514309f, 0.804231f, -0.221667f },
	{ -0.486432f, 0.616601f, 0.619021f },
	{ -0.915799f, 0.085954f, 0.392331f },
	{ -0.357058f, -0.083655f, -0.930329f },
	{ 0, 0.606354f, -0.795195f },
	{ 0, 0.954085f, -0.299536f },
	{ 0, 0.6841699f, 0.729322f },
	{ 0, -0.120331f, 0.992734f },
	{ -0.662946f, 0.133926f, -0.736591f },
	{ -0.568478f, -0.527142f, -0.631628f },
	{ -0.744306f, 0.119467f, -0.6570669f },
	{ -0.662946f, 0.133926f, -0.736591f },
	{ -1, 0, 0 },
	{ 0.936655f, -0.055514f, -0.345825f },
	{ 0.622091f, -0.383608f, -0.682531f },
	{ 0.475494f, 0.603936f, -0.639662f },
	{ 0.5514309f, 0.804231f, -0.221666f },
	{ 0.486431f, 0.6166019f, 0.619021f },
	{ 0.915799f, 0.085954f, 0.392332f },
	{ 0.357058f, -0.083655f, -0.930329f },
	{ 0, 0.606354f, -0.795195f },
	{ 0, 0.954085f, -0.299536f },
	{ 0, 0.6841699f, 0.729323f },
	{ 0, -0.120331f, 0.992734f },
	{ 0.662946f, 0.133926f, -0.736591f },
	{ 0.568478f, -0.527142f, -0.631628f },
	{ 0.744306f, 0.119467f, -0.6570669f },
	{ 0.662946f, 0.133926f, -0.736591f },
	{ 1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008CD0C = { vertex_0008CA0C, normal_0008CB8C, LengthOfArray<Sint32>(vertex_0008CA0C), meshlist_0008C9AC, matlist_0008C75C, LengthOfArray<Uint16>(meshlist_0008C9AC), LengthOfArray<Uint16>(matlist_0008C75C), { 326.5f, 55.5f, -3383.2f }, 44.74468f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008CD34 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008CD0C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008CD68[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008CDB8[] = {
	4, 15, 5, 14, 0,
	4, 14, 0, 13, 12,
	4, 11, 13, 6, 12,
	4, 22, 27, 6, 11,
	4, 30, 16, 31, 21,
	4, 29, 28, 30, 16,
	4, 22, 28, 27, 29
};

extern "C" __declspec(dllexport) Sint16 poly_0008CDFE[] = {
	0x8000u | 6, 4, 5, 3, 0, 2, 1,
	0x8000u | 6, 21, 20, 16, 19, 17, 18
};

extern "C" __declspec(dllexport) Sint16 poly_0008CE1A[] = {
	8, 1, 2, 6, 7, 22, 23, 17, 18,
	8, 2, 3, 7, 8, 23, 24, 18, 19,
	8, 3, 4, 8, 9, 24, 25, 19, 20,
	8, 4, 5, 9, 10, 25, 26, 20, 21
};

extern "C" __declspec(dllexport) Sint16 poly_0008CE62[] = {
	4, 6, 12, 1, 0,
	4, 17, 16, 22, 28
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008CE78[] = {
	{ 140, 183 },
	{ 199, 0 },
	{ 68, 183 },
	{ 100, 0 },
	{ 0, 184 },
	{ 0 },
	{ 59, 184 },
	{ 59, 0 },
	{ 9, 183 },
	{ 68, 183 },
	{ 41, 0 },
	{ 100, 0 },
	{ 195, 0 },
	{ 195, 184 },
	{ 59, 0 },
	{ 59, 184 },
	{ 75, 183 },
	{ 106, 0 },
	{ 145, 183 },
	{ 203, 0 },
	{ 195, 184 },
	{ 195, 0 },
	{ 254, 184 },
	{ 255, 0 },
	{ 48, 0 },
	{ 106, 0 },
	{ 16, 183 },
	{ 75, 183 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008CEE8[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 99 },
	{ 255, 95 },
	{ 0 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 95 },
	{ 0, 99 },
	{ 255, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008CF18[] = {
	{ 0, 83 },
	{ 59, -254 },
	{ 118, 83 },
	{ 118, -254 },
	{ 390, 83 },
	{ 390, -254 },
	{ 508, 83 },
	{ 450, -254 },
	{ 59, 246 },
	{ 59, 31 },
	{ 118, 246 },
	{ 118, 31 },
	{ 390, 246 },
	{ 390, 31 },
	{ 450, 246 },
	{ 450, 31 },
	{ 59, -19 },
	{ 59, -255 },
	{ 118, -19 },
	{ 118, -255 },
	{ 390, -19 },
	{ 390, -255 },
	{ 450, -19 },
	{ 450, -255 },
	{ 59, -254 },
	{ 0, 256 },
	{ 118, -254 },
	{ 118, 256 },
	{ 390, -254 },
	{ 390, 256 },
	{ 450, -254 },
	{ 508, 256 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008CF98[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008CFB8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_0008CDB8, NULL, NULL, NULL, uv_0008CE78, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0008CDFE, NULL, NULL, NULL, uv_0008CEE8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_0008CE1A, NULL, NULL, NULL, uv_0008CF18, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_0008CE62, NULL, NULL, NULL, uv_0008CF98, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008D018[] = {
	{ -337.3345f, 61, -3745.667f },
	{ -323.0717f, 61, -3750.311f },
	{ -326.9782f, 85, -3739.7f },
	{ -339.3394f, 93, -3735.675f },
	{ -362.16f, 94, -3728.244f },
	{ -361.106f, 61, -3737.926f },
	{ -317.5728f, 61, -3733.424f },
	{ -324.2288f, 85, -3731.256f },
	{ -336.5899f, 93, -3727.231f },
	{ -359.4106f, 94, -3719.8f },
	{ -355.6071f, 61, -3721.038f },
	{ -309.9659f, 17, -3735.901f },
	{ -331.8356f, 61, -3728.779f },
	{ -324.2288f, 17, -3731.256f },
	{ -329.7277f, 17, -3748.144f },
	{ -346.8431f, 17, -3742.57f },
	{ -313.6482f, 61, -3672.926f },
	{ -299.3854f, 61, -3677.57f },
	{ -308.7908f, 85, -3683.846f },
	{ -321.152f, 93, -3679.821f },
	{ -343.9726f, 94, -3672.39f },
	{ -337.4197f, 61, -3665.185f },
	{ -304.8843f, 61, -3694.458f },
	{ -311.5403f, 85, -3692.29f },
	{ -323.9015f, 93, -3688.265f },
	{ -346.722f, 94, -3680.834f },
	{ -342.9186f, 61, -3682.073f },
	{ -297.2774f, 17, -3696.934f },
	{ -319.1472f, 61, -3689.813f },
	{ -311.5403f, 17, -3692.29f },
	{ -306.0414f, 17, -3675.403f },
	{ -323.1568f, 17, -3669.83f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008D198[] = {
	{ 0.038311f, -0.055583f, -0.997719f },
	{ 0.456374f, -0.383604f, -0.802852f },
	{ 0.461001f, 0.603937f, -0.650183f },
	{ 0.035492f, 0.80639f, -0.590318f },
	{ -0.742811f, 0.612532f, -0.270253f },
	{ -0.669697f, 0.089168f, -0.737262f },
	{ 0.774057f, -0.083653f, -0.627565f },
	{ 0.756118f, 0.606354f, -0.246212f },
	{ 0.277952f, 0.956322f, -0.090508f },
	{ -0.698379f, 0.678639f, 0.22741f },
	{ -0.94395f, -0.12033f, 0.307374f },
	{ 0.495131f, 0.133927f, -0.858434f },
	{ 0.424576f, -0.527142f, -0.736109f },
	{ 0.394324f, 0.119468f, -0.911173f },
	{ 0.495128f, 0.133925f, -0.858436f },
	{ -0.309625f, 0, -0.950859f },
	{ 0.618442f, -0.055582f, 0.783862f },
	{ 0.8416049f, -0.383612f, 0.380188f },
	{ 0.7554539f, 0.6039349f, 0.254071f },
	{ 0.376277f, 0.806388f, 0.456238f },
	{ -0.441262f, 0.6125309f, 0.655816f },
	{ -0.107184f, 0.08916599f, 0.9902329f },
	{ 0.9951659f, -0.083652f, 0.051457f },
	{ 0.756117f, 0.606355f, -0.246213f },
	{ 0.277952f, 0.956322f, -0.090509f },
	{ -0.698379f, 0.678639f, 0.227412f },
	{ -0.943949f, -0.120331f, 0.307376f },
	{ 0.905661f, 0.133926f, 0.402296f },
	{ 0.776606f, -0.527142f, 0.34497f },
	{ 0.855236f, 0.119467f, 0.504281f },
	{ 0.905659f, 0.133926f, 0.402301f },
	{ 0.309625f, 0, 0.950859f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008D318 = { vertex_0008D018, normal_0008D198, LengthOfArray<Sint32>(vertex_0008D018), meshlist_0008CFB8, matlist_0008CD68, LengthOfArray<Uint16>(meshlist_0008CFB8), LengthOfArray<Uint16>(matlist_0008CD68), { -329.7187f, 55.5f, -3707.748f }, 57.39205f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008D340 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008D318, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008D374[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008D388[] = {
	4, 1, 9, 0, 8,
	4, 3, 1, 2, 0,
	4, 7, 5, 6, 4,
	4, 5, 3, 4, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008D3B0[] = {
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008D3F0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0008D388, NULL, NULL, NULL, uv_0008D3B0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008D408[] = {
	{ -299.1873f, 17, -3678.576f },
	{ -306.7941f, 61, -3676.099f },
	{ -293.838f, 17, -3684.525f },
	{ -301.4449f, 61, -3682.048f },
	{ -296.315f, 17, -3692.132f },
	{ -303.9219f, 61, -3689.655f },
	{ -304.1412f, 17, -3693.79f },
	{ -311.7481f, 61, -3691.313f },
	{ -307.0135f, 17, -3680.235f },
	{ -314.6203f, 61, -3677.758f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008D480[] = {
	{ 0.363373f, 0.010376f, 0.931586f },
	{ 0.254829f, -0.010379f, 0.96693f },
	{ 0.97112f, 0.157815f, 0.178945f },
	{ 0.960048f, 0.152777f, 0.234449f },
	{ 0.679552f, 0.157816f, -0.7164519f },
	{ 0.63792f, 0.152777f, -0.754796f },
	{ 0.206439f, 0.090538f, -0.974262f },
	{ 0.206439f, 0.090538f, -0.974262f },
	{ -0.206453f, -0.09054f, 0.9742579f },
	{ -0.206453f, -0.09054f, 0.9742579f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008D4F8 = { vertex_0008D408, normal_0008D480, LengthOfArray<Sint32>(vertex_0008D408), meshlist_0008D3F0, matlist_0008D374, LengthOfArray<Uint16>(meshlist_0008D3F0), LengthOfArray<Uint16>(matlist_0008D374), { -304.2292f, 39, -3684.945f }, 23.71164f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008D520 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008D4F8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008D554[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008D568[] = {
	4, 1, 9, 0, 8,
	4, 3, 1, 2, 0,
	4, 7, 5, 6, 4,
	4, 5, 3, 4, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008D590[] = {
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008D5D0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0008D568, NULL, NULL, NULL, uv_0008D590, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008D5E8[] = {
	{ 363.8544f, 17, -3398.5f },
	{ 363.8544f, 61, -3390.5f },
	{ 359.8544f, 17, -3405.428f },
	{ 359.8544f, 61, -3397.428f },
	{ 351.8544f, 17, -3405.428f },
	{ 351.8544f, 61, -3397.428f },
	{ 347.8544f, 17, -3398.5f },
	{ 347.8544f, 61, -3390.5f },
	{ 359.8544f, 17, -3391.572f },
	{ 359.8544f, 61, -3383.572f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008D660[] = {
	{ 0.998316f, 0.010377f, -0.057075f },
	{ 0.998316f, -0.010377f, 0.057075f },
	{ 0.470841f, 0.157816f, -0.867988f },
	{ 0.5201899f, 0.152777f, -0.840275f },
	{ -0.470841f, 0.157816f, -0.867988f },
	{ -0.5201899f, 0.152777f, -0.840275f },
	{ -0.862469f, 0.090536f, -0.497946f },
	{ -0.862469f, 0.090536f, -0.497946f },
	{ 0.862469f, -0.090536f, 0.497946f },
	{ 0.862469f, -0.090536f, 0.497946f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008D6D8 = { vertex_0008D5E8, normal_0008D660, LengthOfArray<Sint32>(vertex_0008D5E8), meshlist_0008D5D0, matlist_0008D554, LengthOfArray<Uint16>(meshlist_0008D5D0), LengthOfArray<Uint16>(matlist_0008D554), { 355.8544f, 39, -3394.5f }, 24.56473f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008D700 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008D6D8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008D734[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008D748[] = {
	4, 0, 8, 1, 9,
	4, 2, 0, 3, 1,
	4, 6, 4, 7, 5,
	4, 4, 2, 5, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008D770[] = {
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008D7B0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0008D748, NULL, NULL, NULL, uv_0008D770, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008D7C8[] = {
	{ -322.3189f, 17, -3749.614f },
	{ -329.9258f, 61, -3747.137f },
	{ -314.4927f, 17, -3747.956f },
	{ -322.0996f, 61, -3745.479f },
	{ -312.0157f, 17, -3740.349f },
	{ -319.6226f, 61, -3737.872f },
	{ -317.365f, 17, -3734.4f },
	{ -324.9718f, 61, -3731.923f },
	{ -327.6682f, 17, -3743.665f },
	{ -335.2751f, 61, -3741.189f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008D840[] = {
	{ -0.254832f, 0.010375f, -0.96693f },
	{ -0.363373f, -0.010379f, -0.931586f },
	{ 0.679552f, 0.157814f, -0.7164519f },
	{ 0.63792f, 0.152775f, -0.754796f },
	{ 0.971119f, 0.157816f, 0.178946f },
	{ 0.960048f, 0.152778f, 0.23445f },
	{ 0.740527f, 0.090537f, 0.6659f },
	{ 0.740527f, 0.090537f, 0.6659f },
	{ -0.7405199f, -0.090535f, -0.665908f },
	{ -0.7405199f, -0.090535f, -0.665908f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008D8B8 = { vertex_0008D7C8, normal_0008D840, LengthOfArray<Sint32>(vertex_0008D7C8), meshlist_0008D7B0, matlist_0008D734, LengthOfArray<Uint16>(meshlist_0008D7B0), LengthOfArray<Uint16>(matlist_0008D734), { -323.6454f, 39, -3740.769f }, 23.71164f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008D8E0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008D8B8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008D914[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008D928[] = {
	4, 0, 8, 1, 9,
	4, 2, 0, 3, 1,
	4, 6, 4, 7, 5,
	4, 4, 2, 5, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008D950[] = {
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008D990[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0008D928, NULL, NULL, NULL, uv_0008D950, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008D9A8[] = {
	{ 593.0276f, 17, -3690.413f },
	{ 600.9029f, 61, -3689.006f },
	{ 586.9109f, 17, -3695.569f },
	{ 594.7863f, 61, -3694.162f },
	{ 588.3179f, 17, -3703.444f },
	{ 596.1932f, 61, -3702.037f },
	{ 595.8417f, 17, -3706.163f },
	{ 603.717f, 61, -3704.756f },
	{ 600.5514f, 17, -3693.132f },
	{ 608.4267f, 61, -3691.725f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008DA20[] = {
	{ -0.231766f, 0.010378f, 0.972716f },
	{ -0.119399f, -0.010376f, 0.992792f },
	{ -0.937266f, 0.157817f, 0.310847f },
	{ -0.918664f, 0.152778f, 0.364302f },
	{ -0.771646f, 0.157816f, -0.616163f },
	{ -0.735687f, 0.152777f, -0.659867f },
	{ -0.338493f, 0.090535f, -0.936603f },
	{ -0.338493f, 0.090535f, -0.936603f },
	{ 0.33848f, -0.090532f, 0.936608f },
	{ 0.33848f, -0.090532f, 0.936608f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008DA98 = { vertex_0008D9A8, normal_0008DA20, LengthOfArray<Sint32>(vertex_0008D9A8), meshlist_0008D990, matlist_0008D914, LengthOfArray<Uint16>(meshlist_0008D990), LengthOfArray<Uint16>(matlist_0008D914), { 597.6688f, 39, -3697.584f }, 23.61344f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008DAC0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008DA98, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008DAF4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008DB08[] = {
	4, 0, 8, 1, 9,
	4, 2, 0, 3, 1,
	4, 6, 4, 7, 5,
	4, 4, 2, 5, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008DB30[] = {
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008DB70[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0008DB08, NULL, NULL, NULL, uv_0008DB30, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008DB88[] = {
	{ 289.1456f, 17, -3398.5f },
	{ 289.1456f, 61, -3390.5f },
	{ 293.1456f, 17, -3405.428f },
	{ 293.1456f, 61, -3397.428f },
	{ 301.1456f, 17, -3405.428f },
	{ 301.1456f, 61, -3397.428f },
	{ 305.1456f, 17, -3398.5f },
	{ 305.1456f, 61, -3390.5f },
	{ 293.1456f, 17, -3391.572f },
	{ 293.1456f, 61, -3383.572f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008DC00[] = {
	{ -0.998316f, 0.010377f, -0.057075f },
	{ -0.998316f, -0.010377f, 0.057075f },
	{ -0.470841f, 0.157816f, -0.867988f },
	{ -0.5201899f, 0.152777f, -0.840275f },
	{ 0.470841f, 0.157816f, -0.867988f },
	{ 0.5201899f, 0.152777f, -0.840275f },
	{ 0.862469f, 0.090536f, -0.497946f },
	{ 0.862469f, 0.090536f, -0.497946f },
	{ -0.862469f, -0.090536f, 0.497946f },
	{ -0.862469f, -0.090536f, 0.497946f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008DC78 = { vertex_0008DB88, normal_0008DC00, LengthOfArray<Sint32>(vertex_0008DB88), meshlist_0008DB70, matlist_0008DAF4, LengthOfArray<Uint16>(meshlist_0008DB70), LengthOfArray<Uint16>(matlist_0008DAF4), { 297.1456f, 39, -3394.5f }, 24.56473f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008DCA0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008DC78, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008DCD4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008DCE8[] = {
	4, 0, 8, 1, 9,
	4, 2, 0, 3, 1,
	4, 6, 4, 7, 5,
	4, 4, 2, 5, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008DD10[] = {
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008DD50[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0008DCE8, NULL, NULL, NULL, uv_0008DD10, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008DD68[] = {
	{ -78.85438f, 17, -3398.5f },
	{ -78.85438f, 61, -3390.5f },
	{ -74.85438f, 17, -3405.428f },
	{ -74.85438f, 61, -3397.428f },
	{ -66.85438f, 17, -3405.428f },
	{ -66.85438f, 61, -3397.428f },
	{ -62.85438f, 17, -3398.5f },
	{ -62.85438f, 61, -3390.5f },
	{ -74.85439f, 17, -3391.572f },
	{ -74.85439f, 61, -3383.572f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008DDE0[] = {
	{ -0.998316f, 0.010377f, -0.057075f },
	{ -0.998316f, -0.010377f, 0.057074f },
	{ -0.470841f, 0.157816f, -0.867988f },
	{ -0.5201899f, 0.152777f, -0.840275f },
	{ 0.470841f, 0.157816f, -0.867988f },
	{ 0.5201899f, 0.152777f, -0.840275f },
	{ 0.862469f, 0.090536f, -0.497946f },
	{ 0.862469f, 0.090536f, -0.497946f },
	{ -0.86247f, -0.090535f, 0.497945f },
	{ -0.86247f, -0.090535f, 0.497945f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008DE58 = { vertex_0008DD68, normal_0008DDE0, LengthOfArray<Sint32>(vertex_0008DD68), meshlist_0008DD50, matlist_0008DCD4, LengthOfArray<Uint16>(meshlist_0008DD50), LengthOfArray<Uint16>(matlist_0008DCD4), { -70.85438f, 39, -3394.5f }, 24.56473f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008DE80 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008DE58, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008DEB4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008DEDC[] = {
	0x8000u | 8, 3, 7, 0, 4, 9, 8, 1, 5
};

extern "C" __declspec(dllexport) Sint16 poly_0008DEEE[] = {
	0x8000u | 5, 8, 4, 5, 7, 6,
	0x8000u | 5, 0, 9, 3, 1, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008DF08[] = {
	{ 0, 255 },
	{ 0 },
	{ 166, 255 },
	{ 166, 0 },
	{ 262, 255 },
	{ 262, 0 },
	{ 510, 255 },
	{ 510, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008DF28[] = {
	{ 52, 26 },
	{ 15, 98 },
	{ 243, 26 },
	{ 15, 243 },
	{ 243, 243 },
	{ 15, 84 },
	{ 52, 11 },
	{ 15, 228 },
	{ 243, 11 },
	{ 243, 228 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008DF50[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0008DEDC, NULL, NULL, NULL, uv_0008DF08, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0008DEEE, NULL, NULL, NULL, uv_0008DF28, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008DF80[] = {
	{ -3.249992f, 33.5f, -3398 },
	{ -21.00999f, 33.5f, -3403 },
	{ -21.00999f, 33.5f, -3388 },
	{ -3.249994f, 33.5f, -3388 },
	{ -3.249993f, 39, -3397 },
	{ -21.00999f, 39, -3402 },
	{ -21.00999f, 39, -3387 },
	{ -3.249994f, 39, -3387 },
	{ -6.129993f, 39, -3402 },
	{ -6.129993f, 33.5f, -3403 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008DFF8[] = {
	{ 0.741314f, -0.6337889f, -0.220831f },
	{ 0, -0.640747f, -0.767752f },
	{ 0, -1, 0 },
	{ 0.744306f, -0.667839f, 0 },
	{ 0.723511f, 0.6687329f, -0.171254f },
	{ 0, 0.767752f, -0.640747f },
	{ 0, 1, 0 },
	{ 0.662946f, 0.7486669f, 0 },
	{ 0.392617f, 0.6668169f, -0.633409f },
	{ 0.398616f, -0.549813f, -0.734037f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008E070 = { vertex_0008DF80, normal_0008DFF8, LengthOfArray<Sint32>(vertex_0008DF80), meshlist_0008DF50, matlist_0008DEB4, LengthOfArray<Uint16>(meshlist_0008DF50), LengthOfArray<Uint16>(matlist_0008DEB4), { -12.12999f, 36.25f, -3395 }, 11.95217f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008E098 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008E070, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008E0CC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008E0F4[] = {
	0x8000u | 8, 3, 7, 0, 4, 9, 8, 1, 5
};

extern "C" __declspec(dllexport) Sint16 poly_0008E106[] = {
	0x8000u | 5, 8, 4, 5, 7, 6,
	0x8000u | 5, 0, 9, 3, 1, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008E120[] = {
	{ 0, 255 },
	{ 0 },
	{ 166, 255 },
	{ 166, 0 },
	{ 262, 255 },
	{ 262, 0 },
	{ 510, 255 },
	{ 510, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008E140[] = {
	{ 52, 26 },
	{ 15, 98 },
	{ 243, 26 },
	{ 15, 243 },
	{ 243, 243 },
	{ 15, 84 },
	{ 52, 11 },
	{ 15, 228 },
	{ 243, 11 },
	{ 243, 228 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008E168[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0008E0F4, NULL, NULL, NULL, uv_0008E120, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0008E106, NULL, NULL, NULL, uv_0008E140, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008E198[] = {
	{ 606.8171f, 33.5f, -3764.75f },
	{ 598.7714f, 33.5f, -3748.147f },
	{ 613.5376f, 33.5f, -3745.509f },
	{ 616.6613f, 33.5f, -3762.992f },
	{ 607.8015f, 39, -3764.574f },
	{ 599.7558f, 39, -3747.971f },
	{ 614.522f, 39, -3745.333f },
	{ 617.6456f, 39, -3762.816f },
	{ 602.3729f, 39, -3762.619f },
	{ 601.3885f, 33.5f, -3762.795f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008E210[] = {
	{ -0.087005f, -0.633777f, -0.768607f },
	{ -0.755793f, -0.640736f, -0.135034f },
	{ 0, -1, 0 },
	{ 0.13091f, -0.667828f, -0.732713f },
	{ -0.041333f, 0.668746f, -0.742341f },
	{ -0.6307499f, 0.767759f, -0.112693f },
	{ 0, 1, 0 },
	{ 0.116597f, 0.748675f, -0.652603f },
	{ -0.554476f, 0.666822f, -0.4979f },
	{ -0.652491f, -0.549806f, -0.521507f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008E288 = { vertex_0008E198, normal_0008E210, LengthOfArray<Sint32>(vertex_0008E198), meshlist_0008E168, matlist_0008E0CC, LengthOfArray<Uint16>(meshlist_0008E168), LengthOfArray<Uint16>(matlist_0008E0CC), { 608.2084f, 36.25f, -3755.042f }, 13.53969f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008E2B0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008E288, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008E2E4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008E30C[] = {
	0x8000u | 8, 3, 7, 0, 4, 9, 8, 1, 5
};

extern "C" __declspec(dllexport) Sint16 poly_0008E31E[] = {
	0x8000u | 5, 8, 4, 5, 7, 6,
	0x8000u | 5, 0, 9, 3, 1, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008E338[] = {
	{ 0, 255 },
	{ 0 },
	{ 166, 255 },
	{ 166, 0 },
	{ 262, 255 },
	{ 262, 0 },
	{ 510, 255 },
	{ 510, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008E358[] = {
	{ 52, 26 },
	{ 15, 98 },
	{ 243, 26 },
	{ 15, 243 },
	{ 243, 243 },
	{ 15, 84 },
	{ 52, 11 },
	{ 15, 228 },
	{ 243, 11 },
	{ 243, 228 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008E380[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0008E30C, NULL, NULL, NULL, uv_0008E338, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0008E31E, NULL, NULL, NULL, uv_0008E358, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008E3B0[] = {
	{ -299.3853f, 33.5f, -3677.57f },
	{ -300.13f, 33.5f, -3696.005f },
	{ -314.3929f, 33.5f, -3691.361f },
	{ -308.8939f, 33.5f, -3674.474f },
	{ -300.3362f, 39, -3677.26f },
	{ -301.0809f, 39, -3695.696f },
	{ -315.3438f, 39, -3691.052f },
	{ -309.8448f, 39, -3674.164f },
	{ -296.4736f, 39, -3681.547f },
	{ -295.5228f, 33.5f, -3681.856f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008E428[] = {
	{ 0.439501f, -0.633804f, 0.636499f },
	{ 0.730029f, -0.640741f, -0.237715f },
	{ 0, -1, 0 },
	{ 0.230457f, -0.667848f, 0.70772f },
	{ 0.386858f, 0.668721f, 0.634944f },
	{ 0.609262f, 0.767751f, -0.19839f },
	{ 0, 1, 0 },
	{ 0.205271f, 0.748659f, 0.630376f },
	{ 0.723851f, 0.666811f, 0.177208f },
	{ 0.821383f, -0.549817f, 0.151759f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008E4A0 = { vertex_0008E3B0, normal_0008E428, LengthOfArray<Sint32>(vertex_0008E3B0), meshlist_0008E380, matlist_0008E2E4, LengthOfArray<Uint16>(meshlist_0008E380), LengthOfArray<Uint16>(matlist_0008E2E4), { -305.4333f, 36.25f, -3685.085f }, 14.74714f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008E4C8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008E4A0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008E4FC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008E54C[] = {
	4, 15, 5, 14, 0,
	4, 14, 0, 13, 12,
	4, 11, 13, 6, 12,
	4, 22, 27, 6, 11,
	4, 30, 16, 31, 21,
	4, 29, 28, 30, 16,
	4, 22, 28, 27, 29
};

extern "C" __declspec(dllexport) Sint16 poly_0008E592[] = {
	0x8000u | 6, 4, 5, 3, 0, 2, 1,
	0x8000u | 6, 21, 20, 16, 19, 17, 18
};

extern "C" __declspec(dllexport) Sint16 poly_0008E5AE[] = {
	8, 1, 2, 6, 7, 22, 23, 17, 18,
	8, 4, 5, 9, 10, 25, 26, 20, 21,
	8, 19, 18, 24, 23, 8, 7, 3, 2,
	8, 20, 19, 25, 24, 9, 8, 4, 3
};

extern "C" __declspec(dllexport) Sint16 poly_0008E5F6[] = {
	4, 6, 12, 1, 0,
	4, 17, 16, 22, 28
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008E60C[] = {
	{ 140, 183 },
	{ 199, 0 },
	{ 68, 183 },
	{ 100, 0 },
	{ 0, 184 },
	{ 0 },
	{ 59, 184 },
	{ 59, 0 },
	{ 9, 183 },
	{ 68, 183 },
	{ 41, 0 },
	{ 100, 0 },
	{ 195, 0 },
	{ 195, 184 },
	{ 59, 0 },
	{ 59, 184 },
	{ 75, 183 },
	{ 106, 0 },
	{ 145, 183 },
	{ 203, 0 },
	{ 195, 184 },
	{ 195, 0 },
	{ 254, 184 },
	{ 255, 0 },
	{ 48, 0 },
	{ 106, 0 },
	{ 16, 183 },
	{ 75, 183 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008E67C[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 99 },
	{ 255, 95 },
	{ 0 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 95 },
	{ 0, 99 },
	{ 255, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008E6AC[] = {
	{ 0, 83 },
	{ 59, -254 },
	{ 118, 83 },
	{ 118, -254 },
	{ 390, 83 },
	{ 390, -254 },
	{ 510, 83 },
	{ 450, -254 },
	{ 59, -254 },
	{ 0, 256 },
	{ 118, -254 },
	{ 118, 256 },
	{ 390, -254 },
	{ 390, 256 },
	{ 450, -254 },
	{ 510, 256 },
	{ 450, 31 },
	{ 450, 246 },
	{ 390, 31 },
	{ 390, 246 },
	{ 118, 31 },
	{ 118, 246 },
	{ 59, 31 },
	{ 59, 246 },
	{ 450, -254 },
	{ 450, -19 },
	{ 390, -255 },
	{ 390, -19 },
	{ 118, -254 },
	{ 118, -19 },
	{ 59, -254 },
	{ 59, -19 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008E72C[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008E74C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_0008E54C, NULL, NULL, NULL, uv_0008E60C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0008E592, NULL, NULL, NULL, uv_0008E67C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_0008E5AE, NULL, NULL, NULL, uv_0008E6AC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_0008E5F6, NULL, NULL, NULL, uv_0008E72C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008E7AC[] = {
	{ 608.1284f, 61, -3686.805f },
	{ 593.3623f, 61, -3689.443f },
	{ 601.8149f, 85, -3696.953f },
	{ 614.6124f, 93, -3694.667f },
	{ 638.2382f, 94, -3690.446f },
	{ 632.7388f, 61, -3682.408f },
	{ 596.486f, 61, -3706.926f },
	{ 603.3768f, 85, -3705.695f },
	{ 616.1741f, 93, -3703.408f },
	{ 639.8f, 94, -3699.188f },
	{ 635.8624f, 61, -3699.891f },
	{ 588.6107f, 17, -3708.333f },
	{ 611.2521f, 61, -3704.288f },
	{ 603.3768f, 17, -3705.695f },
	{ 600.2532f, 17, -3688.212f },
	{ 617.9725f, 17, -3685.046f },
	{ 621.5833f, 61, -3762.113f },
	{ 606.8171f, 61, -3764.75f },
	{ 612.1461f, 85, -3754.778f },
	{ 624.9435f, 93, -3752.491f },
	{ 648.5694f, 94, -3748.271f },
	{ 646.1936f, 61, -3757.715f },
	{ 603.6934f, 61, -3747.267f },
	{ 610.5844f, 85, -3746.036f },
	{ 623.3817f, 93, -3743.75f },
	{ 647.0076f, 94, -3739.529f },
	{ 643.0699f, 61, -3740.232f },
	{ 595.8181f, 17, -3748.675f },
	{ 618.4597f, 61, -3744.629f },
	{ 610.5844f, 17, -3746.036f },
	{ 613.708f, 17, -3763.519f },
	{ 631.4274f, 17, -3760.354f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008E92C[] = {
	{ -0.5047359f, -0.055582f, 0.861483f },
	{ -0.781305f, -0.383608f, 0.49235f },
	{ -0.71332f, 0.603937f, 0.355576f },
	{ -0.30994f, 0.80639f, 0.503659f },
	{ 0.52728f, 0.6125309f, 0.588882f },
	{ 0.242377f, 0.089169f, 0.966076f },
	{ -0.978626f, -0.083656f, 0.187865f },
	{ -0.7827989f, 0.606354f, -0.13986f },
	{ -0.28776f, 0.956322f, -0.051413f },
	{ 0.723023f, 0.678639f, 0.129179f },
	{ 0.977259f, -0.120331f, 0.174602f },
	{ -0.84171f, 0.133924f, 0.523057f },
	{ -0.721768f, -0.527142f, 0.448522f },
	{ -0.777737f, 0.119465f, 0.617134f },
	{ -0.841712f, 0.133926f, 0.5230539f },
	{ -0.175889f, 0.000001f, 0.98441f },
	{ -0.175195f, -0.055583f, -0.982964f },
	{ -0.562474f, -0.383612f, -0.732437f },
	{ -0.546058f, 0.6039349f, -0.580589f },
	{ -0.116359f, 0.80639f, -0.579824f },
	{ 0.698573f, 0.612532f, -0.369864f },
	{ 0.5619119f, 0.089167f, -0.822377f },
	{ -0.853028f, -0.083655f, -0.515117f },
	{ -0.7827989f, 0.606354f, -0.139859f },
	{ -0.28776f, 0.9563209f, -0.051413f },
	{ 0.723024f, 0.678638f, 0.129179f },
	{ 0.977259f, -0.120332f, 0.174602f },
	{ -0.608511f, 0.133925f, -0.782162f },
	{ -0.521798f, -0.5271429f, -0.670706f },
	{ -0.515915f, 0.119466f, -0.848268f },
	{ -0.608511f, 0.133925f, -0.782163f },
	{ 0.175876f, 0, -0.984412f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008EAAC = { vertex_0008E7AC, normal_0008E92C, LengthOfArray<Sint32>(vertex_0008E7AC), meshlist_0008E74C, matlist_0008E4FC, LengthOfArray<Uint16>(meshlist_0008E74C), LengthOfArray<Uint16>(matlist_0008E4FC), { 618.59f, 55.5f, -3723.579f }, 56.36784f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008EAD4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008EAAC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008EB08[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008EB30[] = {
	0x8000u | 8, 3, 7, 0, 4, 9, 8, 1, 5
};

extern "C" __declspec(dllexport) Sint16 poly_0008EB42[] = {
	0x8000u | 5, 8, 4, 5, 7, 6,
	0x8000u | 5, 0, 9, 3, 1, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008EB5C[] = {
	{ 0, 255 },
	{ 0 },
	{ 166, 255 },
	{ 166, 0 },
	{ 262, 255 },
	{ 262, 0 },
	{ 510, 255 },
	{ 510, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008EB7C[] = {
	{ 52, 26 },
	{ 15, 98 },
	{ 243, 26 },
	{ 15, 243 },
	{ 243, 243 },
	{ 15, 84 },
	{ 52, 11 },
	{ 15, 228 },
	{ 243, 11 },
	{ 243, 228 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008EBA4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0008EB30, NULL, NULL, NULL, uv_0008EB5C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0008EB42, NULL, NULL, NULL, uv_0008EB7C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008EBD4[] = {
	{ 364.75f, 33.5f, -3398 },
	{ 346.99f, 33.5f, -3403 },
	{ 346.99f, 33.5f, -3388 },
	{ 364.75f, 33.5f, -3388 },
	{ 364.75f, 39, -3397 },
	{ 346.99f, 39, -3402 },
	{ 346.99f, 39, -3387 },
	{ 364.75f, 39, -3387 },
	{ 361.87f, 39, -3402 },
	{ 361.87f, 33.5f, -3403 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008EC4C[] = {
	{ 0.741314f, -0.633788f, -0.220831f },
	{ 0, -0.640747f, -0.767752f },
	{ 0, -1, 0 },
	{ 0.744306f, -0.667839f, 0 },
	{ 0.723511f, 0.6687329f, -0.171254f },
	{ 0, 0.767752f, -0.640747f },
	{ 0, 1, 0 },
	{ 0.662946f, 0.7486669f, 0 },
	{ 0.392617f, 0.6668169f, -0.633409f },
	{ 0.398616f, -0.549813f, -0.734037f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008ECC4 = { vertex_0008EBD4, normal_0008EC4C, LengthOfArray<Sint32>(vertex_0008EBD4), meshlist_0008EBA4, matlist_0008EB08, LengthOfArray<Uint16>(meshlist_0008EBA4), LengthOfArray<Uint16>(matlist_0008EB08), { 355.87f, 36.25f, -3395 }, 11.95217f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008ECEC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008ECC4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008ED20[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008ED48[] = {
	0x8000u | 8, 7, 3, 4, 0, 8, 9, 5, 1
};

extern "C" __declspec(dllexport) Sint16 poly_0008ED5A[] = {
	0x8000u | 5, 4, 8, 7, 5, 6,
	0x8000u | 5, 9, 0, 1, 3, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008ED74[] = {
	{ 0 },
	{ 0, 255 },
	{ 166, 0 },
	{ 166, 255 },
	{ 262, 0 },
	{ 262, 255 },
	{ 510, 0 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008ED94[] = {
	{ 15, 156 },
	{ 52, 228 },
	{ 15, 11 },
	{ 243, 228 },
	{ 243, 11 },
	{ 52, 243 },
	{ 15, 170 },
	{ 243, 243 },
	{ 15, 26 },
	{ 243, 26 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008EDBC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0008ED48, NULL, NULL, NULL, uv_0008ED74, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0008ED5A, NULL, NULL, NULL, uv_0008ED94, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008EDEC[] = {
	{ -79.75001f, 33.5f, -3398 },
	{ -61.99f, 33.5f, -3403 },
	{ -61.99f, 33.5f, -3388 },
	{ -79.75001f, 33.5f, -3388 },
	{ -79.75001f, 39, -3397 },
	{ -61.99f, 39, -3402 },
	{ -61.99f, 39, -3387 },
	{ -79.75001f, 39, -3387 },
	{ -76.87f, 39, -3402 },
	{ -76.87f, 33.5f, -3403 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008EE64[] = {
	{ -0.741314f, -0.6337889f, -0.220831f },
	{ 0, -0.640747f, -0.767752f },
	{ 0, -1, 0 },
	{ -0.744306f, -0.667839f, 0 },
	{ -0.723511f, 0.6687329f, -0.171254f },
	{ 0, 0.767752f, -0.640747f },
	{ 0, 1, 0 },
	{ -0.662946f, 0.7486669f, 0 },
	{ -0.392617f, 0.666816f, -0.633409f },
	{ -0.398617f, -0.549813f, -0.734037f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008EEDC = { vertex_0008EDEC, normal_0008EE64, LengthOfArray<Sint32>(vertex_0008EDEC), meshlist_0008EDBC, matlist_0008ED20, LengthOfArray<Uint16>(meshlist_0008EDBC), LengthOfArray<Uint16>(matlist_0008ED20), { -70.87f, 36.25f, -3395 }, 11.95217f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008EF04 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008EEDC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008EF38[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008EF60[] = {
	0x8000u | 8, 7, 3, 4, 0, 8, 9, 5, 1
};

extern "C" __declspec(dllexport) Sint16 poly_0008EF72[] = {
	0x8000u | 5, 4, 8, 7, 5, 6,
	0x8000u | 5, 9, 0, 1, 3, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008EF8C[] = {
	{ 0 },
	{ 0, 255 },
	{ 166, 0 },
	{ 166, 255 },
	{ 262, 0 },
	{ 262, 255 },
	{ 510, 0 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008EFAC[] = {
	{ 15, 156 },
	{ 52, 228 },
	{ 15, 11 },
	{ 243, 228 },
	{ 243, 11 },
	{ 52, 243 },
	{ 15, 170 },
	{ 243, 243 },
	{ 15, 26 },
	{ 243, 26 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008EFD4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0008EF60, NULL, NULL, NULL, uv_0008EF8C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0008EF72, NULL, NULL, NULL, uv_0008EFAC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008F004[] = {
	{ 288.25f, 33.5f, -3398 },
	{ 306.0099f, 33.5f, -3403 },
	{ 306.0099f, 33.5f, -3388 },
	{ 288.25f, 33.5f, -3388 },
	{ 288.25f, 39, -3397 },
	{ 306.0099f, 39, -3402 },
	{ 306.01f, 39, -3387 },
	{ 288.25f, 39, -3387 },
	{ 291.13f, 39, -3402 },
	{ 291.13f, 33.5f, -3403 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008F07C[] = {
	{ -0.741314f, -0.633788f, -0.220831f },
	{ 0, -0.640747f, -0.767752f },
	{ 0, -1, 0 },
	{ -0.744306f, -0.667839f, 0 },
	{ -0.723511f, 0.6687329f, -0.171254f },
	{ 0, 0.767752f, -0.640747f },
	{ 0, 1, 0 },
	{ -0.662946f, 0.7486669f, 0 },
	{ -0.392617f, 0.6668169f, -0.633409f },
	{ -0.398616f, -0.549813f, -0.734037f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008F0F4 = { vertex_0008F004, normal_0008F07C, LengthOfArray<Sint32>(vertex_0008F004), meshlist_0008EFD4, matlist_0008EF38, LengthOfArray<Uint16>(meshlist_0008EFD4), LengthOfArray<Uint16>(matlist_0008EF38), { 297.13f, 36.25f, -3395 }, 11.95217f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008F11C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F0F4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008F150[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008F178[] = {
	0x8000u | 8, 1, 5, 9, 8, 0, 4, 3, 7
};

extern "C" __declspec(dllexport) Sint16 poly_0008F18A[] = {
	0x8000u | 5, 4, 8, 7, 5, 6,
	0x8000u | 5, 9, 0, 1, 3, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008F1A4[] = {
	{ 510, 255 },
	{ 510, 0 },
	{ 262, 255 },
	{ 262, 0 },
	{ 166, 255 },
	{ 166, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008F1C4[] = {
	{ 15, 156 },
	{ 52, 228 },
	{ 15, 11 },
	{ 243, 228 },
	{ 243, 11 },
	{ 52, 243 },
	{ 15, 170 },
	{ 243, 243 },
	{ 15, 26 },
	{ 243, 26 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008F1EC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0008F178, NULL, NULL, NULL, uv_0008F1A4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0008F18A, NULL, NULL, NULL, uv_0008F1C4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008F21C[] = {
	{ -323.0717f, 33.5f, -3750.311f },
	{ -312.8185f, 33.5f, -3734.972f },
	{ -327.0813f, 33.5f, -3730.327f },
	{ -332.5803f, 33.5f, -3747.215f },
	{ -324.0225f, 39, -3750.001f },
	{ -313.7693f, 39, -3734.662f },
	{ -328.0322f, 39, -3730.018f },
	{ -333.5311f, 39, -3746.905f },
	{ -318.3765f, 39, -3748.811f },
	{ -317.4257f, 33.5f, -3749.12f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008F294[] = {
	{ -0.019559f, -0.633796f, -0.773253f },
	{ 0.730022f, -0.64075f, -0.237713f },
	{ 0, -1, 0 },
	{ -0.230451f, -0.667842f, -0.707728f },
	{ -0.061186f, 0.668732f, -0.740982f },
	{ 0.609264f, 0.767749f, -0.198391f },
	{ 0, 1, 0 },
	{ -0.205263f, 0.748662f, -0.630375f },
	{ 0.480712f, 0.666811f, -0.569454f },
	{ 0.574538f, -0.549814f, -0.606309f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008F30C = { vertex_0008F21C, normal_0008F294, LengthOfArray<Sint32>(vertex_0008F21C), meshlist_0008F1EC, matlist_0008F150, LengthOfArray<Uint16>(meshlist_0008F1EC), LengthOfArray<Uint16>(matlist_0008F150), { -323.1748f, 36.25f, -3740.164f }, 14.49844f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008F334 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F30C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008F368[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008F390[] = {
	0x8000u | 8, 7, 3, 4, 0, 8, 9, 5, 1
};

extern "C" __declspec(dllexport) Sint16 poly_0008F3A2[] = {
	0x8000u | 5, 4, 8, 7, 5, 6,
	0x8000u | 5, 9, 0, 1, 3, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008F3BC[] = {
	{ 0 },
	{ 0, 255 },
	{ 166, 0 },
	{ 166, 255 },
	{ 262, 0 },
	{ 262, 255 },
	{ 510, 0 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008F3DC[] = {
	{ 15, 156 },
	{ 52, 228 },
	{ 15, 11 },
	{ 243, 228 },
	{ 243, 11 },
	{ 52, 243 },
	{ 15, 170 },
	{ 243, 243 },
	{ 15, 26 },
	{ 243, 26 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008F404[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0008F390, NULL, NULL, NULL, uv_0008F3BC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0008F3A2, NULL, NULL, NULL, uv_0008F3DC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008F434[] = {
	{ 593.3623f, 33.5f, -3689.443f },
	{ 591.5639f, 33.5f, -3707.805f },
	{ 606.33f, 33.5f, -3705.167f },
	{ 603.2064f, 33.5f, -3687.684f },
	{ 594.3467f, 39, -3689.267f },
	{ 592.5483f, 39, -3707.63f },
	{ 607.3144f, 39, -3704.991f },
	{ 604.1909f, 39, -3687.509f },
	{ 589.9312f, 39, -3692.982f },
	{ 588.9467f, 33.5f, -3693.158f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008F4AC[] = {
	{ -0.347778f, -0.6337799f, 0.690922f },
	{ -0.755784f, -0.640747f, -0.135033f },
	{ 0, -1, 0 },
	{ -0.130909f, -0.667832f, 0.7327099f },
	{ -0.295837f, 0.668739f, 0.682106f },
	{ -0.6307589f, 0.767752f, -0.112695f },
	{ 0, 1, 0 },
	{ -0.116597f, 0.748673f, 0.652606f },
	{ -0.69259f, 0.666819f, 0.275083f },
	{ -0.792704f, -0.549813f, 0.263299f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008F524 = { vertex_0008F434, normal_0008F4AC, LengthOfArray<Sint32>(vertex_0008F434), meshlist_0008F404, matlist_0008F368, LengthOfArray<Uint16>(meshlist_0008F404), LengthOfArray<Uint16>(matlist_0008F368), { 598.1306f, 36.25f, -3697.657f }, 13.68708f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008F54C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008F524, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008F580[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008F5D0[] = {
	4, 15, 5, 14, 0,
	4, 14, 0, 13, 12,
	4, 11, 13, 6, 12,
	4, 22, 27, 6, 11,
	4, 30, 16, 31, 21,
	4, 29, 28, 30, 16,
	4, 22, 28, 27, 29
};

extern "C" __declspec(dllexport) Sint16 poly_0008F616[] = {
	0x8000u | 6, 4, 5, 3, 0, 2, 1,
	0x8000u | 6, 21, 20, 16, 19, 17, 18
};

extern "C" __declspec(dllexport) Sint16 poly_0008F632[] = {
	8, 2, 3, 7, 8, 23, 24, 18, 19,
	8, 4, 5, 9, 10, 25, 26, 20, 21,
	8, 18, 17, 23, 22, 7, 6, 2, 1,
	8, 20, 19, 25, 24, 9, 8, 4, 3
};

extern "C" __declspec(dllexport) Sint16 poly_0008F67A[] = {
	4, 6, 12, 1, 0,
	4, 17, 16, 22, 28
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008F690[] = {
	{ 158, 183 },
	{ 197, 0 },
	{ 77, 183 },
	{ 113, 0 },
	{ 0, 184 },
	{ 0 },
	{ 59, 184 },
	{ 59, 0 },
	{ 9, 183 },
	{ 77, 183 },
	{ 45, 0 },
	{ 113, 0 },
	{ 195, 0 },
	{ 195, 184 },
	{ 59, 0 },
	{ 59, 184 },
	{ 83, 183 },
	{ 119, 0 },
	{ 163, 183 },
	{ 201, 0 },
	{ 195, 184 },
	{ 195, 0 },
	{ 255, 184 },
	{ 255, 0 },
	{ 52, 0 },
	{ 119, 0 },
	{ 16, 183 },
	{ 83, 183 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008F700[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 99 },
	{ 255, 95 },
	{ 0 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 95 },
	{ 0, 99 },
	{ 255, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008F730[] = {
	{ 59, 199 },
	{ 59, -30 },
	{ 118, 199 },
	{ 118, -30 },
	{ 390, 199 },
	{ 390, -30 },
	{ 450, 199 },
	{ 450, -30 },
	{ 59, -254 },
	{ 0, 256 },
	{ 118, -254 },
	{ 118, 256 },
	{ 390, -254 },
	{ 390, 256 },
	{ 450, -254 },
	{ 510, 256 },
	{ 450, -254 },
	{ 510, 83 },
	{ 390, -254 },
	{ 390, 83 },
	{ 118, -254 },
	{ 118, 83 },
	{ 59, -254 },
	{ 0, 83 },
	{ 450, -255 },
	{ 450, -58 },
	{ 390, -255 },
	{ 390, -58 },
	{ 118, -255 },
	{ 118, -58 },
	{ 59, -255 },
	{ 59, -58 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008F7B0[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008F7D0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_0008F5D0, NULL, NULL, NULL, uv_0008F690, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0008F616, NULL, NULL, NULL, uv_0008F700, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_0008F632, NULL, NULL, NULL, uv_0008F730, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_0008F67A, NULL, NULL, NULL, uv_0008F7B0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008F830[] = {
	{ -79.75f, 61, -3383 },
	{ -79.75f, 61, -3398 },
	{ -70.87f, 85, -3391 },
	{ -70.87f, 93, -3378 },
	{ -70.87f, 94, -3360.4f },
	{ -79.75001f, 61, -3364.4f },
	{ -61.99f, 61, -3398 },
	{ -61.99f, 85, -3391 },
	{ -61.99f, 93, -3378 },
	{ -61.99001f, 94, -3360.4f },
	{ -61.99001f, 61, -3364.4f },
	{ -61.99f, 17, -3406 },
	{ -61.99f, 61, -3383 },
	{ -61.99f, 17, -3391 },
	{ -79.75f, 17, -3391 },
	{ -79.75001f, 17, -3373 },
	{ -3.249989f, 61, -3383 },
	{ -3.249989f, 61, -3398 },
	{ -12.12999f, 85, -3391 },
	{ -12.12999f, 93, -3378 },
	{ -12.12999f, 94, -3360.4f },
	{ -3.249989f, 61, -3364.4f },
	{ -21.00999f, 61, -3398 },
	{ -21.00999f, 85, -3391 },
	{ -21.00999f, 93, -3378 },
	{ -21.00999f, 94, -3360.4f },
	{ -21.00999f, 61, -3364.4f },
	{ -21.00999f, 17, -3406 },
	{ -21.00999f, 61, -3383 },
	{ -21.00999f, 17, -3391 },
	{ -3.249989f, 17, -3391 },
	{ -3.249989f, 17, -3373 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008F9B0[] = {
	{ -0.936655f, -0.055514f, -0.345825f },
	{ -0.62209f, -0.383608f, -0.682531f },
	{ -0.475493f, 0.603936f, -0.639662f },
	{ -0.5514309f, 0.804231f, -0.221666f },
	{ -0.486431f, 0.6166019f, 0.619021f },
	{ -0.915799f, 0.085954f, 0.392331f },
	{ -0.357058f, -0.083655f, -0.930329f },
	{ 0, 0.606354f, -0.795195f },
	{ 0, 0.954085f, -0.299536f },
	{ 0, 0.6841699f, 0.729322f },
	{ 0, -0.120331f, 0.992734f },
	{ -0.662946f, 0.133926f, -0.736591f },
	{ -0.568477f, -0.527142f, -0.631628f },
	{ -0.744305f, 0.119467f, -0.6570669f },
	{ -0.662946f, 0.133926f, -0.736591f },
	{ -1, 0, 0 },
	{ 0.936655f, -0.055514f, -0.345825f },
	{ 0.62209f, -0.383608f, -0.682531f },
	{ 0.475494f, 0.603936f, -0.639662f },
	{ 0.5514309f, 0.804231f, -0.221666f },
	{ 0.486431f, 0.6166019f, 0.619021f },
	{ 0.915799f, 0.085954f, 0.392332f },
	{ 0.357058f, -0.083655f, -0.930329f },
	{ 0, 0.606354f, -0.795195f },
	{ 0, 0.954085f, -0.299536f },
	{ 0, 0.6841699f, 0.729323f },
	{ 0, -0.120331f, 0.992734f },
	{ 0.662946f, 0.133926f, -0.736591f },
	{ 0.568478f, -0.527142f, -0.631628f },
	{ 0.744306f, 0.119467f, -0.6570669f },
	{ 0.662946f, 0.133926f, -0.736591f },
	{ 1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008FB30 = { vertex_0008F830, normal_0008F9B0, LengthOfArray<Sint32>(vertex_0008F830), meshlist_0008F7D0, matlist_0008F580, LengthOfArray<Uint16>(meshlist_0008F7D0), LengthOfArray<Uint16>(matlist_0008F580), { -41.5f, 55.5f, -3383.2f }, 44.74468f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008FB58 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008FB30, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008FB8C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008FBA0[] = {
	4, 1, 9, 0, 8,
	4, 3, 1, 2, 0,
	4, 7, 5, 6, 4,
	4, 5, 3, 4, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008FBC8[] = {
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008FC08[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0008FBA0, NULL, NULL, NULL, uv_0008FBC8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008FC20[] = {
	{ -4.14561f, 17, -3398.5f },
	{ -4.14561f, 61, -3390.5f },
	{ -8.145611f, 17, -3405.428f },
	{ -8.145611f, 61, -3397.428f },
	{ -16.14561f, 17, -3405.428f },
	{ -16.14561f, 61, -3397.428f },
	{ -20.14561f, 17, -3398.5f },
	{ -20.14561f, 61, -3390.5f },
	{ -8.145608f, 17, -3391.572f },
	{ -8.145608f, 61, -3383.572f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008FC98[] = {
	{ 0.998316f, 0.010377f, -0.057075f },
	{ 0.998316f, -0.010377f, 0.057075f },
	{ 0.470841f, 0.157816f, -0.867988f },
	{ 0.5201899f, 0.152777f, -0.840275f },
	{ -0.470841f, 0.157816f, -0.867988f },
	{ -0.5201899f, 0.152777f, -0.840275f },
	{ -0.862469f, 0.090536f, -0.497946f },
	{ -0.862469f, 0.090536f, -0.497946f },
	{ 0.862469f, -0.090536f, 0.497945f },
	{ 0.86247f, -0.090536f, 0.497945f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008FD10 = { vertex_0008FC20, normal_0008FC98, LengthOfArray<Sint32>(vertex_0008FC20), meshlist_0008FC08, matlist_0008FB8C, LengthOfArray<Uint16>(meshlist_0008FC08), LengthOfArray<Uint16>(matlist_0008FB8C), { -12.14561f, 39, -3394.5f }, 24.56473f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008FD38 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008FD10, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008FD6C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008FD80[] = {
	4, 1, 9, 0, 8,
	4, 3, 1, 2, 0,
	4, 7, 5, 6, 4,
	4, 5, 3, 4, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008FDA8[] = {
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008FDE8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0008FD80, NULL, NULL, NULL, uv_0008FDA8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008FE00[] = {
	{ 606.1674f, 17, -3763.957f },
	{ 614.0427f, 61, -3762.55f },
	{ 598.6437f, 17, -3761.238f },
	{ 606.519f, 61, -3759.831f },
	{ 597.2366f, 17, -3753.363f },
	{ 605.1119f, 61, -3751.955f },
	{ 603.3533f, 17, -3748.207f },
	{ 611.2286f, 61, -3746.8f },
	{ 612.2841f, 17, -3758.801f },
	{ 620.1594f, 61, -3757.394f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0008FE78[] = {
	{ 0.119397f, 0.01038f, -0.992792f },
	{ 0.231767f, -0.010376f, -0.972716f },
	{ -0.771646f, 0.157818f, -0.6161619f },
	{ -0.7356859f, 0.15278f, -0.659866f },
	{ -0.937266f, 0.157816f, 0.310847f },
	{ -0.918664f, 0.152777f, 0.364302f },
	{ -0.641862f, 0.09053399f, 0.761457f },
	{ -0.641862f, 0.09053399f, 0.761457f },
	{ 0.6418729f, -0.090536f, -0.761448f },
	{ 0.6418729f, -0.090536f, -0.761448f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0008FEF0 = { vertex_0008FE00, normal_0008FE78, LengthOfArray<Sint32>(vertex_0008FE00), meshlist_0008FDE8, matlist_0008FD6C, LengthOfArray<Uint16>(meshlist_0008FDE8), LengthOfArray<Uint16>(matlist_0008FD6C), { 608.6979f, 39, -3755.378f }, 23.61344f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0008FF18 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008FEF0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0008FF4C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0008FF74[] = {
	4, 5, 6, 3, 1
};

extern "C" __declspec(dllexport) Sint16 poly_0008FF7E[] = {
	0x8000u | 6, 0, 1, 2, 3, 4, 5
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008FF8C[] = {
	{ 0 },
	{ 0, 94 },
	{ 254, 0 },
	{ 254, 94 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0008FF9C[] = {
	{ 240, -1869 },
	{ 240, -2295 },
	{ 19, -1870 },
	{ 19, -2295 },
	{ 0, -1870 },
	{ 0, -2295 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0008FFB4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0008FF74, NULL, NULL, NULL, uv_0008FF8C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0008FF7E, NULL, NULL, NULL, uv_0008FF9C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0008FFE4[] = {
	{ 570, 50, -2426.667f },
	{ 570, 50, -2872 },
	{ 1020, -80, -2426.667f },
	{ 1020, -80, -2872 },
	{ 1060, -120, -2426.667f },
	{ 1060, -120, -2872 },
	{ 580, -80, -2872 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00090038[] = {
	{ 0.27754f, 0.960714f, 0 },
	{ 0.219681f, 0.760434f, -0.61113f },
	{ 0.508391f, 0.8611259f, 0 },
	{ 0.384138f, 0.650663f, -0.655039f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.645532f, 0.645532f, -0.40814f },
	{ 0, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009008C = { vertex_0008FFE4, normal_00090038, LengthOfArray<Sint32>(vertex_0008FFE4), meshlist_0008FFB4, matlist_0008FF4C, LengthOfArray<Uint16>(meshlist_0008FFB4), LengthOfArray<Uint16>(matlist_0008FF4C), { 815, -35, -2649.333f }, 331.0671f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000900B4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009008C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000900E8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000900FC[] = {
	0x8000u | 6, 3, 0, 4, 1, 5, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009010C[] = {
	{ 240, -1444 },
	{ 240, -1869 },
	{ 19, -1444 },
	{ 19, -1870 },
	{ 0, -1444 },
	{ 0, -1870 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00090124[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000900FC, NULL, NULL, NULL, uv_0009010C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009013C[] = {
	{ 570, 50, -2426.667f },
	{ 1020, -80, -2426.667f },
	{ 1060, -120, -2426.667f },
	{ 570, 50, -1981.333f },
	{ 1020, -80, -1981.333f },
	{ 1060, -120, -1981.333f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00090184[] = {
	{ 0.27754f, 0.960714f, 0 },
	{ 0.508391f, 0.8611259f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.27754f, 0.960714f, 0 },
	{ 0.508391f, 0.8611259f, 0 },
	{ 0.7071069f, 0.7071069f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000901CC = { vertex_0009013C, normal_00090184, LengthOfArray<Sint32>(vertex_0009013C), meshlist_00090124, matlist_000900E8, LengthOfArray<Uint16>(meshlist_00090124), LengthOfArray<Uint16>(matlist_000900E8), { 815, -35, -2204 }, 331.0671f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000901F4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000901CC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00090228[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009023C[] = {
	0x8000u | 6, 3, 0, 4, 1, 5, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009024C[] = {
	{ 240, -1020 },
	{ 240, -1444 },
	{ 19, -1020 },
	{ 19, -1444 },
	{ 0, -1020 },
	{ 0, -1444 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00090264[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0009023C, NULL, NULL, NULL, uv_0009024C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009027C[] = {
	{ 570, 50, -1981.333f },
	{ 1020, -80, -1981.333f },
	{ 1060, -120, -1981.333f },
	{ 570, 50, -1536 },
	{ 1020, -80, -1536 },
	{ 1060, -120, -1536 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000902C4[] = {
	{ 0.27754f, 0.960714f, 0 },
	{ 0.508391f, 0.8611259f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.27754f, 0.960714f, 0 },
	{ 0.508391f, 0.8611259f, 0 },
	{ 0.7071069f, 0.7071069f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009030C = { vertex_0009027C, normal_000902C4, LengthOfArray<Sint32>(vertex_0009027C), meshlist_00090264, matlist_00090228, LengthOfArray<Uint16>(meshlist_00090264), LengthOfArray<Uint16>(matlist_00090228), { 815, -35, -1758.667f }, 331.0671f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00090334 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009030C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00090368[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009037C[] = {
	0x8000u | 6, 3, 0, 4, 1, 5, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009038C[] = {
	{ 240, -594 },
	{ 240, -1020 },
	{ 19, -594 },
	{ 19, -1020 },
	{ 0, -594 },
	{ 0, -1020 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000903A4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0009037C, NULL, NULL, NULL, uv_0009038C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000903BC[] = {
	{ 570, 50, -1536 },
	{ 1020, -80, -1536 },
	{ 1060, -120, -1536 },
	{ 570, 50, -1090.667f },
	{ 1020, -80, -1090.667f },
	{ 1060, -120, -1090.667f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00090404[] = {
	{ 0.27754f, 0.960714f, 0 },
	{ 0.508391f, 0.8611259f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.27754f, 0.960714f, 0 },
	{ 0.508391f, 0.8611259f, 0 },
	{ 0.7071069f, 0.7071069f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009044C = { vertex_000903BC, normal_00090404, LengthOfArray<Sint32>(vertex_000903BC), meshlist_000903A4, matlist_00090368, LengthOfArray<Uint16>(meshlist_000903A4), LengthOfArray<Uint16>(matlist_00090368), { 815, -35, -1313.333f }, 331.0671f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00090474 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009044C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000904A8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000904BC[] = {
	0x8000u | 6, 3, 0, 4, 1, 5, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_000904CC[] = {
	{ 240, -170 },
	{ 240, -594 },
	{ 19, -170 },
	{ 19, -594 },
	{ 0, -170 },
	{ 0, -594 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000904E4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000904BC, NULL, NULL, NULL, uv_000904CC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000904FC[] = {
	{ 570, 50, -1090.667f },
	{ 1020, -80, -1090.667f },
	{ 1060, -120, -1090.667f },
	{ 570, 50, -645.3331f },
	{ 1020, -80, -645.3331f },
	{ 1060, -120, -645.3331f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00090544[] = {
	{ 0.27754f, 0.960714f, 0 },
	{ 0.508391f, 0.8611259f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.27754f, 0.960714f, 0 },
	{ 0.508391f, 0.8611259f, 0 },
	{ 0.7071069f, 0.7071069f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009058C = { vertex_000904FC, normal_00090544, LengthOfArray<Sint32>(vertex_000904FC), meshlist_000904E4, matlist_000904A8, LengthOfArray<Uint16>(meshlist_000904E4), LengthOfArray<Uint16>(matlist_000904A8), { 815, -35, -867.9998f }, 331.0671f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000905B4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009058C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000905E8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00090610[] = {
	0x8000u | 6, 1, 0, 3, 2, 5, 4
};

extern "C" __declspec(dllexport) Sint16 poly_0009061E[] = {
	4, 3, 1, 5, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_00090628[] = {
	{ 240, 255 },
	{ 240, -170 },
	{ 19, 254 },
	{ 19, -170 },
	{ 0, 254 },
	{ 0, -170 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00090640[] = {
	{ 254, 0 },
	{ 254, 94 },
	{ 0 },
	{ 0, 94 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00090650[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00090610, NULL, NULL, NULL, uv_00090628, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0009061E, NULL, NULL, NULL, uv_00090640, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00090680[] = {
	{ 570, 50, -645.3331f },
	{ 570, 50, -199.9998f },
	{ 1020, -80, -645.3331f },
	{ 1020, -80, -199.9998f },
	{ 1060, -120, -645.3331f },
	{ 1060, -120, -199.9998f },
	{ 580, -80, -199.9998f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000906D4[] = {
	{ 0.27754f, 0.960714f, 0 },
	{ 0.219681f, 0.760434f, 0.61113f },
	{ 0.508391f, 0.8611259f, 0 },
	{ 0.384138f, 0.650663f, 0.655039f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.645532f, 0.645532f, 0.40814f },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00090728 = { vertex_00090680, normal_000906D4, LengthOfArray<Sint32>(vertex_00090680), meshlist_00090650, matlist_000905E8, LengthOfArray<Uint16>(meshlist_00090650), LengthOfArray<Uint16>(matlist_000905E8), { 815, -35, -422.6664f }, 331.0671f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00090750 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00090728, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00090784[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000907AC[] = {
	4, 2, 3, 1, 0,
	0x8000u | 6, 7, 6, 5, 4, 2, 1
};

extern "C" __declspec(dllexport) Sint16 poly_000907C4[] = {
	0x8000u | 6, 2, 3, 5, 9, 7, 8
};

extern "C" __declspec(dllexport) NJS_TEX uv_000907D4[] = {
	{ 386, -2295 },
	{ 508, -2295 },
	{ 386, -1869 },
	{ 508, -1869 },
	{ 240, -2295 },
	{ 240, -1869 },
	{ 386, -2295 },
	{ 386, -1869 },
	{ 508, -2295 },
	{ 508, -1869 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000907FC[] = {
	{ 254, 254 },
	{ 0, 254 },
	{ 254, 174 },
	{ 0, 174 },
	{ 254, 94 },
	{ 0, 94 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00090814[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000907AC, NULL, NULL, NULL, uv_000907D4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000907C4, NULL, NULL, NULL, uv_000907FC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00090844[] = {
	{ 20, -80, -2426.667f },
	{ 20, 160, -2426.667f },
	{ 20, 160, -2872 },
	{ 20, -80, -2872 },
	{ 270, 110, -2426.667f },
	{ 270, 110, -2872 },
	{ 570, 50, -2426.667f },
	{ 570, 50, -2872 },
	{ 580, -80, -2872 },
	{ 260, -70, -2872 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000908BC[] = {
	{ -1, 0, 0 },
	{ -0.633989f, 0.773342f, 0 },
	{ -0.521933f, 0.636656f, -0.567674f },
	{ -0.716541f, 0, -0.697545f },
	{ 0.196116f, 0.980581f, 0 },
	{ 0.138675f, 0.693375f, -0.7071069f },
	{ 0.196116f, 0.980581f, 0 },
	{ 0.127135f, 0.635677f, -0.761414f },
	{ 0, 0, -1 },
	{ 0, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00090934 = { vertex_00090844, normal_000908BC, LengthOfArray<Sint32>(vertex_00090844), meshlist_00090814, matlist_00090784, LengthOfArray<Uint16>(meshlist_00090814), LengthOfArray<Uint16>(matlist_00090784), { 300, 40, -2649.333f }, 357.7435f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009095C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00090934, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00090990[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000909A4[] = {
	0x8000u | 6, 5, 1, 6, 2, 7, 3,
	4, 1, 0, 5, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_000909BC[] = {
	{ 508, -1444 },
	{ 508, -1869 },
	{ 386, -1444 },
	{ 386, -1869 },
	{ 240, -1444 },
	{ 240, -1869 },
	{ 386, -1869 },
	{ 508, -1869 },
	{ 386, -1444 },
	{ 508, -1444 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000909E4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000909A4, NULL, NULL, NULL, uv_000909BC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000909FC[] = {
	{ 20, -80, -2426.667f },
	{ 20, 160, -2426.667f },
	{ 270, 110, -2426.667f },
	{ 570, 50, -2426.667f },
	{ 20, -80, -1981.333f },
	{ 20, 160, -1981.333f },
	{ 270, 110, -1981.333f },
	{ 570, 50, -1981.333f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00090A5C[] = {
	{ -1, 0, 0 },
	{ -0.633989f, 0.773342f, 0 },
	{ 0.196116f, 0.980581f, 0 },
	{ 0.196116f, 0.980581f, 0 },
	{ -1, 0, 0 },
	{ -0.633989f, 0.773342f, 0 },
	{ 0.196116f, 0.980581f, 0 },
	{ 0.196116f, 0.980581f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00090ABC = { vertex_000909FC, normal_00090A5C, LengthOfArray<Sint32>(vertex_000909FC), meshlist_000909E4, matlist_00090990, LengthOfArray<Uint16>(meshlist_000909E4), LengthOfArray<Uint16>(matlist_00090990), { 295, 40, -2204 }, 353.8438f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00090AE4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00090ABC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00090B18[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00090B2C[] = {
	0x8000u | 6, 5, 1, 6, 2, 7, 3,
	4, 1, 0, 5, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_00090B44[] = {
	{ 508, -1020 },
	{ 508, -1444 },
	{ 386, -1020 },
	{ 386, -1444 },
	{ 240, -1020 },
	{ 240, -1444 },
	{ 386, -1444 },
	{ 508, -1444 },
	{ 386, -1020 },
	{ 508, -1020 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00090B6C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00090B2C, NULL, NULL, NULL, uv_00090B44, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00090B84[] = {
	{ 20, -80, -1981.333f },
	{ 20, 160, -1981.333f },
	{ 270, 110, -1981.333f },
	{ 570, 50, -1981.333f },
	{ 20, -80, -1536 },
	{ 20, 160, -1536 },
	{ 270, 110, -1536 },
	{ 570, 50, -1536 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00090BE4[] = {
	{ -1, 0, 0 },
	{ -0.633989f, 0.773342f, 0 },
	{ 0.196116f, 0.980581f, 0 },
	{ 0.196116f, 0.980581f, 0 },
	{ -1, 0, 0 },
	{ -0.633989f, 0.773342f, 0 },
	{ 0.196116f, 0.980581f, 0 },
	{ 0.196116f, 0.980581f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00090C44 = { vertex_00090B84, normal_00090BE4, LengthOfArray<Sint32>(vertex_00090B84), meshlist_00090B6C, matlist_00090B18, LengthOfArray<Uint16>(meshlist_00090B6C), LengthOfArray<Uint16>(matlist_00090B18), { 295, 40, -1758.667f }, 353.8438f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00090C6C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00090C44, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00090CA0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00090CB4[] = {
	4, 1, 0, 5, 4,
	0x8000u | 6, 3, 7, 2, 6, 1, 5
};

extern "C" __declspec(dllexport) NJS_TEX uv_00090CCC[] = {
	{ 386, -1020 },
	{ 508, -1020 },
	{ 386, -593 },
	{ 508, -593 },
	{ 240, -1020 },
	{ 240, -594 },
	{ 386, -1020 },
	{ 386, -593 },
	{ 508, -1020 },
	{ 508, -593 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00090CF4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00090CB4, NULL, NULL, NULL, uv_00090CCC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00090D0C[] = {
	{ 20, -80, -1536 },
	{ 20, 160, -1536 },
	{ 270, 110, -1536 },
	{ 570, 50, -1536 },
	{ 20, -80, -1090.667f },
	{ 20, 160, -1090.667f },
	{ 270, 110, -1090.667f },
	{ 570, 50, -1090.667f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00090D6C[] = {
	{ -1, 0, 0 },
	{ -0.633989f, 0.773342f, 0 },
	{ 0.196116f, 0.980581f, 0 },
	{ 0.196116f, 0.980581f, 0 },
	{ -1, 0, 0 },
	{ -0.633989f, 0.773342f, 0 },
	{ 0.196116f, 0.980581f, 0 },
	{ 0.196116f, 0.980581f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00090DCC = { vertex_00090D0C, normal_00090D6C, LengthOfArray<Sint32>(vertex_00090D0C), meshlist_00090CF4, matlist_00090CA0, LengthOfArray<Uint16>(meshlist_00090CF4), LengthOfArray<Uint16>(matlist_00090CA0), { 295, 40, -1313.333f }, 353.8438f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00090DF4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00090DCC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00090E28[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00090E3C[] = {
	4, 1, 0, 4, 5,
	0x8000u | 6, 3, 7, 2, 6, 1, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_00090E54[] = {
	{ 386, -593 },
	{ 508, -593 },
	{ 386, -170 },
	{ 508, -170 },
	{ 240, -594 },
	{ 240, -170 },
	{ 386, -593 },
	{ 386, -170 },
	{ 508, -593 },
	{ 508, -170 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00090E7C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00090E3C, NULL, NULL, NULL, uv_00090E54, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00090E94[] = {
	{ 20, -80, -1090.667f },
	{ 20, 160, -1090.667f },
	{ 270, 110, -1090.667f },
	{ 570, 50, -1090.667f },
	{ 20, 160, -645.3331f },
	{ 20, -80, -645.3331f },
	{ 270, 110, -645.3331f },
	{ 570, 50, -645.3331f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00090EF4[] = {
	{ -1, 0, 0 },
	{ -0.633989f, 0.773342f, 0 },
	{ 0.196116f, 0.980581f, 0 },
	{ 0.196116f, 0.980581f, 0 },
	{ -0.633989f, 0.773342f, 0 },
	{ -1, 0, 0 },
	{ 0.196116f, 0.980581f, 0 },
	{ 0.196116f, 0.980581f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00090F54 = { vertex_00090E94, normal_00090EF4, LengthOfArray<Sint32>(vertex_00090E94), meshlist_00090E7C, matlist_00090E28, LengthOfArray<Uint16>(meshlist_00090E7C), LengthOfArray<Uint16>(matlist_00090E28), { 295, 40, -867.9998f }, 353.8438f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00090F7C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00090F54, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00090FB0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00090FD8[] = {
	0x8000u | 6, 2, 3, 9, 5, 8, 7
};

extern "C" __declspec(dllexport) Sint16 poly_00090FE6[] = {
	4, 2, 3, 1, 0,
	0x8000u | 6, 3, 0, 5, 4, 7, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_00091000[] = {
	{ 0, 254 },
	{ 254, 254 },
	{ 0, 174 },
	{ 254, 174 },
	{ 0, 94 },
	{ 254, 94 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00091018[] = {
	{ 508, 255 },
	{ 386, 255 },
	{ 508, -170 },
	{ 386, -170 },
	{ 508, 255 },
	{ 508, -170 },
	{ 386, 255 },
	{ 386, -170 },
	{ 240, 255 },
	{ 240, -170 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00091040[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00090FD8, NULL, NULL, NULL, uv_00091000, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00090FE6, NULL, NULL, NULL, uv_00091018, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00091070[] = {
	{ 20, 160, -645.3331f },
	{ 20, -80, -645.3331f },
	{ 20, -80, -199.9998f },
	{ 20, 160, -199.9998f },
	{ 270, 110, -645.3331f },
	{ 270, 110, -199.9998f },
	{ 570, 50, -645.3331f },
	{ 570, 50, -199.9998f },
	{ 580, -80, -199.9998f },
	{ 260, -70, -199.9998f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000910E8[] = {
	{ -0.633989f, 0.773342f, 0 },
	{ -1, 0, 0 },
	{ -0.716541f, 0, 0.697545f },
	{ -0.521933f, 0.636656f, 0.567674f },
	{ 0.196116f, 0.980581f, 0 },
	{ 0.138675f, 0.693375f, 0.7071069f },
	{ 0.196116f, 0.980581f, 0 },
	{ 0.127135f, 0.635677f, 0.761414f },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00091160 = { vertex_00091070, normal_000910E8, LengthOfArray<Sint32>(vertex_00091070), meshlist_00091040, matlist_00090FB0, LengthOfArray<Uint16>(meshlist_00091040), LengthOfArray<Uint16>(matlist_00090FB0), { 300, 40, -422.6664f }, 357.7436f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00091188 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00091160, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000911BC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000911D0[] = {
	0x8000u | 12, 29, 28, 14, 19, 13, 18, 12, 17, 11, 16, 10, 15,
	3, 24, 25, 27,
	0x8000u | 11, 5, 0, 6, 1, 7, 2, 8, 3, 9, 4, 26,
	0x8000u | 12, 26, 29, 9, 14, 8, 13, 7, 12, 6, 11, 5, 10,
	4, 16, 15, 21, 20,
	4, 21, 22, 16, 17,
	0x8000u | 8, 22, 17, 23, 18, 24, 19, 27, 28
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009124C[] = {
	{ 517, -3809 },
	{ 1027, -3809 },
	{ 1027, -3075 },
	{ 1537, -3075 },
	{ 1027, -2438 },
	{ 1537, -2438 },
	{ 1027, -1800 },
	{ 1537, -1800 },
	{ 1027, -1163 },
	{ 1537, -1163 },
	{ 1027, -653 },
	{ 1537, -653 },
	{ 2032, -3075 },
	{ 2032, -3809 },
	{ 1537, -3809 },
	{ 517, -653 },
	{ 7, -653 },
	{ 517, -1163 },
	{ 7, -1163 },
	{ 517, -1800 },
	{ 7, -1800 },
	{ 517, -2438 },
	{ 7, -2438 },
	{ 517, -3075 },
	{ 7, -3075 },
	{ 7, -3809 },
	{ 7, -3809 },
	{ 517, -3809 },
	{ 517, -3075 },
	{ 1027, -3075 },
	{ 517, -2438 },
	{ 1027, -2438 },
	{ 517, -1800 },
	{ 1027, -1800 },
	{ 517, -1163 },
	{ 1027, -1163 },
	{ 517, -653 },
	{ 1027, -653 },
	{ 1537, -1163 },
	{ 1537, -653 },
	{ 2032, -1163 },
	{ 2032, -653 },
	{ 2032, -1800 },
	{ 2032, -1163 },
	{ 1537, -1800 },
	{ 1537, -1163 },
	{ 2032, -1800 },
	{ 1537, -1800 },
	{ 2032, -2438 },
	{ 1537, -2438 },
	{ 2032, -3075 },
	{ 1537, -3075 },
	{ 1537, -3809 },
	{ 1027, -3809 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00091324[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_000911D0, NULL, NULL, NULL, uv_0009124C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009133C[] = {
	{ -39, 100, -200 },
	{ 220, 100, -200 },
	{ 429.5f, 100, -200 },
	{ 655, 80, -200 },
	{ 890, 60.5f, -200 },
	{ -39, 191.9239f, -167.5641f },
	{ 220, 184.8528f, -166.7325f },
	{ 430, 170.7107f, -166.6924f },
	{ 655, 148.033f, -165.4603f },
	{ 890, 119.7487f, -161.4887f },
	{ -39, 230, -100 },
	{ 220, 220, -100 },
	{ 430, 200, -100 },
	{ 655, 170, -100 },
	{ 890, 140, -100 },
	{ -39, 191.9239f, -32.436f },
	{ 220, 184.8528f, -33.26759f },
	{ 430, 170.7107f, -33.30766f },
	{ 655, 148.033f, -34.53985f },
	{ 890, 119.7487f, -38.51141f },
	{ -39, 100, -0.00027f },
	{ 220, 100, -0.00027f },
	{ 430, 100, 0.021977f },
	{ 655, 80, -0.00005f },
	{ 890, 60.5f, -0.00005f },
	{ 1145, 42, -0.00005f },
	{ 1145, 42, -200 },
	{ 1145, 94.74873f, -41.51449f },
	{ 1145, 110, -100 },
	{ 1145, 94.74873f, -158.4856f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000914A4[] = {
	{ 0.006056f, 0.332743f, -0.942998f },
	{ 0.009226f, 0.348916f, -0.937108f },
	{ 0.027923f, 0.396133f, -0.917769f },
	{ 0.048398f, 0.43947f, -0.896952f },
	{ 0.060398f, 0.520201f, -0.851905f },
	{ 0.019124f, 0.6460609f, -0.763046f },
	{ 0.03228f, 0.656977f, -0.75322f },
	{ 0.062723f, 0.691308f, -0.719833f },
	{ 0.086815f, 0.733501f, -0.674121f },
	{ 0.093778f, 0.7809229f, -0.617548f },
	{ 0.033841f, 0.999427f, 0 },
	{ 0.057192f, 0.998363f, 0 },
	{ 0.09906f, 0.9950809f, 0 },
	{ 0.121605f, 0.992579f, 0 },
	{ 0.117544f, 0.993068f, 0.000116f },
	{ 0.019124f, 0.646062f, 0.763046f },
	{ 0.032263f, 0.656977f, 0.75322f },
	{ 0.06270599f, 0.691351f, 0.719793f },
	{ 0.086849f, 0.7335939f, 0.674016f },
	{ 0.083505f, 0.781682f, 0.6180609f },
	{ 0.006056f, 0.332743f, 0.942998f },
	{ 0.009194f, 0.348917f, 0.937109f },
	{ 0.028023f, 0.396503f, 0.917606f },
	{ 0.048463f, 0.439695f, 0.8968379f },
	{ 0.047712f, 0.520602f, 0.852465f },
	{ 0.04214f, 0.580855f, 0.812916f },
	{ 0.066432f, 0.580086f, -0.811841f },
	{ 0.07277f, 0.806704f, 0.586459f },
	{ 0.108927f, 0.99405f, 0.000236f },
	{ 0.093753f, 0.805257f, -0.585467f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009160C = { vertex_0009133C, normal_000914A4, LengthOfArray<Sint32>(vertex_0009133C), meshlist_00091324, matlist_000911BC, LengthOfArray<Uint16>(meshlist_00091324), LengthOfArray<Uint16>(matlist_000911BC), { 553, 136, -99.98904f }, 600.3884f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00091634 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009160C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00091668[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009167C[] = {
	0x8000u | 10, 25, 24, 27, 19, 28, 14, 29, 9, 26, 4,
	10, 1, 0, 6, 5, 11, 10, 16, 15, 21, 20,
	10, 3, 2, 8, 7, 13, 12, 18, 17, 23, 22,
	10, 4, 3, 9, 8, 14, 13, 19, 18, 24, 23,
	4, 21, 22, 16, 17,
	8, 16, 17, 11, 12, 6, 7, 1, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_000916F0[] = {
	{ 2032, -3809 },
	{ 2032, -3075 },
	{ 1537, -3809 },
	{ 1537, -3075 },
	{ 1027, -3809 },
	{ 1027, -3075 },
	{ 517, -3809 },
	{ 517, -3075 },
	{ 7, -3809 },
	{ 7, -3075 },
	{ 7, -1163 },
	{ 7, -653 },
	{ 517, -1163 },
	{ 517, -653 },
	{ 1027, -1163 },
	{ 1027, -653 },
	{ 1537, -1163 },
	{ 1537, -653 },
	{ 2032, -1163 },
	{ 2032, -653 },
	{ 7, -2438 },
	{ 7, -1800 },
	{ 517, -2438 },
	{ 517, -1800 },
	{ 1027, -2438 },
	{ 1027, -1800 },
	{ 1537, -2438 },
	{ 1537, -1800 },
	{ 2032, -2438 },
	{ 2032, -1800 },
	{ 7, -3075 },
	{ 7, -2438 },
	{ 517, -3075 },
	{ 517, -2438 },
	{ 1027, -3075 },
	{ 1027, -2438 },
	{ 1537, -3075 },
	{ 1537, -2438 },
	{ 2032, -3075 },
	{ 2032, -2438 },
	{ 2032, -1800 },
	{ 2032, -1163 },
	{ 1537, -1800 },
	{ 1537, -1163 },
	{ 1537, -1163 },
	{ 1537, -1800 },
	{ 1027, -1163 },
	{ 1027, -1800 },
	{ 517, -1163 },
	{ 517, -1800 },
	{ 7, -1163 },
	{ 7, -1800 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000917C0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_0009167C, NULL, NULL, NULL, uv_000916F0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000917D8[] = {
	{ -39, 100, -3100 },
	{ 220, 100, -3100 },
	{ 429.5f, 100, -3100 },
	{ 655, 80, -3100 },
	{ 890, 60.5f, -3100 },
	{ -39, 191.9239f, -3067.564f },
	{ 220, 184.8528f, -3066.732f },
	{ 430, 170.7107f, -3066.692f },
	{ 655, 148.033f, -3065.46f },
	{ 890, 119.7487f, -3061.489f },
	{ -39, 230, -3000 },
	{ 220, 220, -3000 },
	{ 430, 200, -3000 },
	{ 655, 170, -3000 },
	{ 890, 140, -3000 },
	{ -39, 191.9239f, -2932.436f },
	{ 220, 184.8528f, -2933.267f },
	{ 430, 170.7107f, -2933.307f },
	{ 655, 148.033f, -2934.54f },
	{ 890, 119.7487f, -2938.511f },
	{ -39, 100, -2900 },
	{ 220, 100, -2900 },
	{ 430, 100, -2899.978f },
	{ 655, 80, -2900 },
	{ 890, 60.5f, -2900 },
	{ 1145, 42, -2900 },
	{ 1145, 42, -3100 },
	{ 1145, 94.74873f, -2941.514f },
	{ 1145, 110, -3000 },
	{ 1145, 94.74873f, -3058.486f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00091940[] = {
	{ 0.006056f, 0.332742f, -0.9429989f },
	{ 0.009226f, 0.348916f, -0.937109f },
	{ 0.027923f, 0.396133f, -0.9177679f },
	{ 0.048398f, 0.43947f, -0.896952f },
	{ 0.060398f, 0.520201f, -0.851905f },
	{ 0.019125f, 0.6460609f, -0.763046f },
	{ 0.03228f, 0.656977f, -0.75322f },
	{ 0.062723f, 0.691308f, -0.719833f },
	{ 0.086815f, 0.733502f, -0.674121f },
	{ 0.093778f, 0.7809229f, -0.617548f },
	{ 0.033841f, 0.999427f, 0.000001f },
	{ 0.057192f, 0.998363f, 0 },
	{ 0.09906f, 0.9950809f, 0 },
	{ 0.121605f, 0.992579f, 0 },
	{ 0.117544f, 0.993068f, 0.000116f },
	{ 0.019124f, 0.646062f, 0.763046f },
	{ 0.032263f, 0.656977f, 0.75322f },
	{ 0.06270599f, 0.691351f, 0.719793f },
	{ 0.086849f, 0.7335939f, 0.674016f },
	{ 0.083505f, 0.781682f, 0.6180609f },
	{ 0.006056f, 0.332744f, 0.942998f },
	{ 0.009194f, 0.348917f, 0.937108f },
	{ 0.028023f, 0.396503f, 0.917606f },
	{ 0.048463f, 0.439695f, 0.896839f },
	{ 0.047712f, 0.520602f, 0.852465f },
	{ 0.04214f, 0.580855f, 0.812916f },
	{ 0.066432f, 0.580086f, -0.811842f },
	{ 0.07277f, 0.806704f, 0.586459f },
	{ 0.108927f, 0.99405f, 0.000237f },
	{ 0.093753f, 0.805257f, -0.585467f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00091AA8 = { vertex_000917D8, normal_00091940, LengthOfArray<Sint32>(vertex_000917D8), meshlist_000917C0, matlist_00091668, LengthOfArray<Uint16>(meshlist_000917C0), LengthOfArray<Uint16>(matlist_00091668), { 553, 136, -2999.989f }, 600.3884f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00091AD0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00091AA8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00091B04[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 24, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00091B40[] = {
	4, 5, 36, 29, 35,
	4, 14, 15, 2, 3,
	4, 4, 3, 16, 15,
	4, 5, 29, 4, 3,
	4, 7, 35, 6, 36,
	0x8000u | 6, 28, 17, 38, 39, 19, 18,
	0x8000u | 7, 19, 20, 38, 37, 28, 24, 14,
	4, 2, 3, 26, 29,
	5, 14, 28, 15, 17, 16,
	0x8000u | 6, 29, 26, 35, 33, 7, 8
};

extern "C" __declspec(dllexport) Sint16 poly_00091BB4[] = {
	6, 13, 14, 1, 2, 27, 26,
	6, 32, 22, 34, 21, 37, 20,
	6, 27, 11, 1, 0, 13, 12,
	3, 14, 13, 24,
	6, 26, 33, 27, 31, 11, 30,
	0x8000u | 6, 37, 34, 24, 25, 13, 12,
	0x8000u | 5, 34, 32, 25, 23, 12,
	6, 33, 8, 31, 9, 30, 10
};

extern "C" __declspec(dllexport) Sint16 poly_00091C1C[] = {
	4, 41, 43, 32, 22,
	4, 42, 40, 10, 30
};

extern "C" __declspec(dllexport) NJS_TEX uv_00091C30[] = {
	{ 917, 79 },
	{ 360, 79 },
	{ 917, 0 },
	{ 360, 0 },
	{ 2, 254 },
	{ 2, 79 },
	{ 1272, 254 },
	{ 1272, 79 },
	{ 2, 0 },
	{ 0, 78 },
	{ 1272, 0 },
	{ 1272, 79 },
	{ 360, 0 },
	{ 360, 79 },
	{ 2, 0 },
	{ 2, 79 },
	{ 917, 0 },
	{ 1272, 0 },
	{ 917, 79 },
	{ 1272, 79 },
	{ 360, 79 },
	{ 360, 0 },
	{ 917, 79 },
	{ 917, 0 },
	{ 1272, 79 },
	{ 1272, 0 },
	{ 1272, 79 },
	{ 1272, 254 },
	{ 917, 79 },
	{ 917, 254 },
	{ 360, 79 },
	{ 360, 254 },
	{ 2, 254 },
	{ 360, 254 },
	{ 360, 79 },
	{ 2, 254 },
	{ 2, 79 },
	{ 2, 254 },
	{ 360, 79 },
	{ 2, 79 },
	{ 360, 0 },
	{ 2, 0 },
	{ 360, 79 },
	{ 360, 254 },
	{ 917, 79 },
	{ 917, 254 },
	{ 1272, 79 },
	{ 1272, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00091CF0[] = {
	{ 262, 235 },
	{ 1012, 235 },
	{ 262, -2275 },
	{ 1012, -2275 },
	{ 262, -1676 },
	{ 1012, -1676 },
	{ 7, -402 },
	{ 7, 235 },
	{ 262, -402 },
	{ 262, 235 },
	{ 1012, -402 },
	{ 1020, 254 },
	{ 262, -1676 },
	{ 7, -1676 },
	{ 262, -2275 },
	{ 7, -2275 },
	{ 262, 235 },
	{ 7, 235 },
	{ 1012, -2275 },
	{ 262, -2275 },
	{ 1012, -1676 },
	{ 1012, -1676 },
	{ 1012, -402 },
	{ 262, -1676 },
	{ 262, -402 },
	{ 7, -1676 },
	{ 7, -402 },
	{ 1012, -402 },
	{ 262, -402 },
	{ 1012, -1676 },
	{ 262, -1676 },
	{ 262, -2275 },
	{ 7, -2275 },
	{ 262, -402 },
	{ 7, -402 },
	{ 262, -1676 },
	{ 7, -1676 },
	{ 7, -2275 },
	{ 1012, -402 },
	{ 1020, 254 },
	{ 262, -402 },
	{ 262, 235 },
	{ 7, -402 },
	{ 7, 235 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00091DA0[] = {
	{ 0, -255 },
	{ 0, 255 },
	{ 1020, -255 },
	{ 1020, 255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 1020, 255 },
	{ 1020, -255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00091DC0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 10, poly_00091B40, NULL, NULL, NULL, uv_00091C30, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 8, poly_00091BB4, NULL, NULL, NULL, uv_00091CF0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00091C1C, NULL, NULL, NULL, uv_00091DA0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00091E08[] = {
	{ 955, 56, -200 },
	{ 993, 90, -200 },
	{ 1090, 115, -192.2984f },
	{ 1305, 135, -185.1984f },
	{ 1340, 110, -178.0983f },
	{ 1280, -12.5f, -219.9977f },
	{ 1401.5f, -372.5f, -180.5232f },
	{ 1299.5f, -389.5f, -200 },
	{ 1144, -385.5f, -200 },
	{ 1051.5f, -370.5f, -200 },
	{ 1016, -360.5f, -200 },
	{ 966, -13.5f, -200 },
	{ 955, 56, 0.000001f },
	{ 993, 90, 0.000001f },
	{ 1090, 115, -7.698674f },
	{ 1305, 135, -14.7987f },
	{ 1340, 110, -21.89846f },
	{ 1280, -12.5f, 20.00178f },
	{ 1401.5f, -372.5f, -19.47231f },
	{ 1299, -389.5f, 0.000001f },
	{ 1145.5f, -385.5f, 0.000001f },
	{ 1051.5f, -370.5f, 0.000001f },
	{ 1015.5f, -360.5f, 0.000001f },
	{ 966, -13.5f, 0.000001f },
	{ 1100, -12, 30.05205f },
	{ 1001, -13.375f, 30.05205f },
	{ 1100, -12, -230.0481f },
	{ 1001, -13.375f, -230.0481f },
	{ 1225, -12.5f, 30.05205f },
	{ 1225, -12.5f, -230.0481f },
	{ 1000, -240, -200 },
	{ 1034, -240, -229.5f },
	{ 1000, -240, 0.000001f },
	{ 1124, -240, -229.5f },
	{ 1034, -240, 29.99997f },
	{ 1284.5f, -240, -229.5f },
	{ 1372.5f, -240, -185.5256f },
	{ 1124, -240, 29.99997f },
	{ 1284.5f, -240, 29.99997f },
	{ 1372.5f, -240, -14.47451f },
	{ 680, -240, -200 },
	{ 680, -240, 0.000001f },
	{ 696, -360.5f, -200 },
	{ 697, -360.5f, 0.000001f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00092018[] = {
	{ -0.626278f, 0.362428f, -0.690233f },
	{ -0.402933f, 0.699938f, -0.5896879f },
	{ -0.111329f, 0.8065929f, -0.580529f },
	{ 0.243973f, 0.790418f, -0.561886f },
	{ 0.510353f, 0.637767f, -0.5768819f },
	{ 0.211148f, 0.098974f, -0.97243f },
	{ 0.200965f, -0.08801199f, -0.975637f },
	{ 0.10196f, -0.141566f, -0.984664f },
	{ -0.017625f, -0.20383f, -0.978848f },
	{ -0.034457f, -0.177881f, -0.983449f },
	{ -0.019792f, -0.070262f, -0.997332f },
	{ -0.499617f, -0.07632799f, -0.862877f },
	{ -0.626303f, 0.362419f, 0.690215f },
	{ -0.402945f, 0.699945f, 0.589672f },
	{ -0.111333f, 0.806596f, 0.580524f },
	{ 0.243972f, 0.7904209f, 0.561883f },
	{ 0.51035f, 0.63777f, 0.576881f },
	{ 0.211135f, 0.099496f, 0.97238f },
	{ 0.200291f, -0.090179f, 0.975577f },
	{ 0.101364f, -0.144356f, 0.98432f },
	{ -0.017635f, -0.207149f, 0.97815f },
	{ -0.034487f, -0.180696f, 0.982934f },
	{ -0.019766f, -0.07115699f, 0.997269f },
	{ -0.499685f, -0.075949f, 0.862871f },
	{ 0.001008f, 0.143297f, 0.989679f },
	{ -0.272486f, 0.038128f, 0.961404f },
	{ 0.001019f, 0.142215f, -0.989835f },
	{ -0.272346f, 0.037369f, -0.961473f },
	{ 0.080363f, 0.126989f, 0.988643f },
	{ 0.080363f, 0.126133f, -0.988753f },
	{ -0.248563f, -0.074295f, -0.965762f },
	{ -0.178902f, -0.108672f, -0.977847f },
	{ -0.248591f, -0.074705f, 0.965723f },
	{ -0.010598f, -0.104649f, -0.994453f },
	{ -0.179039f, -0.109206f, 0.977762f },
	{ 0.09714f, -0.078683f, -0.992156f },
	{ 0.192704f, -0.059448f, -0.979455f },
	{ -0.010691f, -0.105324f, 0.994381f },
	{ 0.097013f, -0.079239f, 0.992124f },
	{ 0.192305f, -0.060335f, 0.979479f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00092228 = { vertex_00091E08, normal_00092018, LengthOfArray<Sint32>(vertex_00091E08), meshlist_00091DC0, matlist_00091B04, LengthOfArray<Uint16>(meshlist_00091DC0), LengthOfArray<Uint16>(matlist_00091B04), { 1040.75f, -127.25f, -99.99802f }, 383.4756f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00092250 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00092228, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00092284[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 24, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000922AC[] = {
	4, 5, 32, 25, 31,
	9, 2, 12, 13, 24, 15, 34, 35, 17, 16,
	3, 13, 3, 2,
	4, 4, 3, 14, 13,
	4, 5, 25, 4, 3,
	4, 7, 31, 6, 32,
	3, 15, 14, 13,
	0x8000u | 7, 17, 18, 34, 33, 24, 20, 12,
	4, 2, 3, 22, 25,
	0x8000u | 6, 25, 22, 31, 29, 7, 8
};

extern "C" __declspec(dllexport) Sint16 poly_00092320[] = {
	6, 28, 30, 21, 20, 11, 12,
	0x8000u | 5, 28, 19, 21, 10, 11,
	3, 33, 20, 30,
	3, 26, 9, 27,
	8, 29, 27, 23, 9, 1, 0, 11, 10,
	0x8000u | 7, 29, 22, 23, 2, 1, 12, 11
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009236C[] = {
	{ 917, 79 },
	{ 360, 79 },
	{ 917, 0 },
	{ 360, 0 },
	{ 1272, 254 },
	{ 2, 254 },
	{ 2, 79 },
	{ 360, 79 },
	{ 360, 0 },
	{ 917, 79 },
	{ 917, 0 },
	{ 1272, 79 },
	{ 1272, 0 },
	{ 2, 79 },
	{ 1272, 79 },
	{ 1272, 254 },
	{ 2, 0 },
	{ 0, 78 },
	{ 1272, 0 },
	{ 1272, 79 },
	{ 360, 0 },
	{ 360, 79 },
	{ 2, 0 },
	{ 2, 79 },
	{ 917, 0 },
	{ 1272, 0 },
	{ 917, 79 },
	{ 1272, 79 },
	{ 360, 0 },
	{ 2, 0 },
	{ 2, 79 },
	{ 1272, 79 },
	{ 1272, 254 },
	{ 917, 79 },
	{ 917, 254 },
	{ 360, 79 },
	{ 360, 254 },
	{ 2, 254 },
	{ 360, 254 },
	{ 360, 79 },
	{ 2, 254 },
	{ 2, 79 },
	{ 360, 79 },
	{ 360, 254 },
	{ 917, 79 },
	{ 917, 254 },
	{ 1272, 79 },
	{ 1272, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009242C[] = {
	{ 7, -402 },
	{ 262, -402 },
	{ 262, -1676 },
	{ 1012, -1676 },
	{ 262, -2275 },
	{ 1012, -2275 },
	{ 7, -402 },
	{ 7, -1676 },
	{ 262, -1676 },
	{ 7, -2275 },
	{ 262, -2275 },
	{ 1012, -402 },
	{ 1012, -1676 },
	{ 262, -402 },
	{ 7, -402 },
	{ 7, -1676 },
	{ 262, -402 },
	{ 1012, -402 },
	{ 262, -402 },
	{ 262, -1676 },
	{ 7, -1676 },
	{ 262, -2275 },
	{ 7, -2275 },
	{ 262, 235 },
	{ 7, 235 },
	{ 1012, -402 },
	{ 1012, -1676 },
	{ 262, -1676 },
	{ 1012, -2275 },
	{ 262, -2275 },
	{ 1012, 235 },
	{ 262, 235 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000924AC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 10, poly_000922AC, NULL, NULL, NULL, uv_0009236C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_00092320, NULL, NULL, NULL, uv_0009242C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000924DC[] = {
	{ 955, 56, -3100 },
	{ 993, 90, -3100 },
	{ 1090, 115, -3092.298f },
	{ 1305, 135, -3085.198f },
	{ 1340, 110, -3078.098f },
	{ 1280, -12.5f, -3119.998f },
	{ 1401.5f, -372.5f, -3080.523f },
	{ 1299.5f, -389.5f, -3100 },
	{ 1144, -385.5f, -3100 },
	{ 966, -13.5f, -3100 },
	{ 955, 56, -2900 },
	{ 993, 90, -2900 },
	{ 1090, 115, -2907.698f },
	{ 1305, 135, -2914.799f },
	{ 1340, 110, -2921.898f },
	{ 1280, -12.5f, -2879.998f },
	{ 1401.5f, -372.5f, -2919.472f },
	{ 1299, -389.5f, -2900 },
	{ 1145.5f, -385.5f, -2900 },
	{ 966, -13.5f, -2900 },
	{ 1100, -12, -2869.948f },
	{ 1001, -13.375f, -2869.948f },
	{ 1100, -12, -3130.048f },
	{ 1001, -13.375f, -3130.048f },
	{ 1225, -12.5f, -2869.948f },
	{ 1225, -12.5f, -3130.048f },
	{ 1000, -240, -3100 },
	{ 1034, -240, -3129.5f },
	{ 1000, -240, -2900 },
	{ 1124, -240, -3129.5f },
	{ 1034, -240, -2870 },
	{ 1284.5f, -240, -3129.5f },
	{ 1372.5f, -240, -3085.526f },
	{ 1124, -240, -2870 },
	{ 1284.5f, -240, -2870 },
	{ 1372.5f, -240, -2914.474f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009268C[] = {
	{ -0.626279f, 0.362427f, -0.690233f },
	{ -0.402933f, 0.699938f, -0.5896879f },
	{ -0.111329f, 0.8065929f, -0.580528f },
	{ 0.243973f, 0.790418f, -0.561887f },
	{ 0.510353f, 0.637768f, -0.576881f },
	{ 0.211148f, 0.098974f, -0.97243f },
	{ 0.200966f, -0.08801199f, -0.975637f },
	{ 0.101961f, -0.141566f, -0.984664f },
	{ -0.00506f, -0.196691f, -0.980453f },
	{ -0.499617f, -0.07632799f, -0.862877f },
	{ -0.626303f, 0.362419f, 0.690215f },
	{ -0.402945f, 0.699944f, 0.589672f },
	{ -0.111333f, 0.806596f, 0.580524f },
	{ 0.243972f, 0.79042f, 0.561884f },
	{ 0.5103509f, 0.63777f, 0.576881f },
	{ 0.211136f, 0.099496f, 0.97238f },
	{ 0.200291f, -0.090179f, 0.975577f },
	{ 0.101364f, -0.144357f, 0.98432f },
	{ -0.00521f, -0.199917f, 0.979799f },
	{ -0.499685f, -0.075949f, 0.862871f },
	{ 0.001008f, 0.143297f, 0.989679f },
	{ -0.272485f, 0.038128f, 0.961404f },
	{ 0.001019f, 0.142215f, -0.989835f },
	{ -0.272346f, 0.037369f, -0.961473f },
	{ 0.080363f, 0.126989f, 0.988643f },
	{ 0.080363f, 0.126133f, -0.988753f },
	{ -0.648137f, -0.09674899f, -0.755353f },
	{ -0.318307f, -0.048903f, -0.946726f },
	{ -0.648239f, -0.095937f, 0.7553689f },
	{ -0.001587f, -0.063642f, -0.997972f },
	{ -0.318314f, -0.047241f, 0.946807f },
	{ 0.09714f, -0.078683f, -0.992156f },
	{ 0.192704f, -0.059448f, -0.979455f },
	{ -0.001634f, -0.06287599f, 0.99802f },
	{ 0.097013f, -0.079239f, 0.992124f },
	{ 0.192306f, -0.060335f, 0.979479f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009283C = { vertex_000924DC, normal_0009268C, LengthOfArray<Sint32>(vertex_000924DC), meshlist_000924AC, matlist_00092284, LengthOfArray<Uint16>(meshlist_000924AC), LengthOfArray<Uint16>(matlist_00092284), { 1178.25f, -127.25f, -2999.998f }, 292.7252f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00092864 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009283C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00092898[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 54, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 21, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000928D4[] = {
	4, 1, 0, 5, 4,
	4, 15, 14, 11, 10,
	4, 17, 16, 21, 20,
	4, 31, 30, 27, 26,
	4, 33, 32, 37, 36,
	4, 47, 46, 43, 42
};

extern "C" __declspec(dllexport) Sint16 poly_00092910[] = {
	4, 3, 1, 7, 5,
	4, 2, 3, 6, 7,
	4, 0, 2, 4, 6,
	4, 3, 2, 1, 0,
	4, 19, 17, 23, 21,
	4, 18, 19, 22, 23,
	4, 16, 18, 20, 22,
	4, 19, 18, 17, 16,
	4, 35, 33, 39, 37,
	4, 34, 35, 38, 39,
	4, 32, 34, 36, 38,
	4, 35, 34, 33, 32
};

extern "C" __declspec(dllexport) Sint16 poly_00092988[] = {
	4, 10, 14, 8, 12,
	4, 15, 11, 13, 9,
	4, 14, 15, 12, 13,
	4, 26, 30, 24, 28,
	4, 31, 27, 29, 25,
	4, 30, 31, 28, 29,
	4, 42, 46, 40, 44,
	4, 47, 43, 45, 41,
	4, 46, 47, 44, 45
};

extern "C" __declspec(dllexport) NJS_TEX uv_000929E4[] = {
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
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00092A44[] = {
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
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
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
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
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
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00092B04[] = {
	{ 193, 1 },
	{ 193, 253 },
	{ 1, 41 },
	{ 1, 225 },
	{ 193, 1 },
	{ 193, 253 },
	{ 1, 41 },
	{ 1, 225 },
	{ 193, 1 },
	{ 193, 253 },
	{ 1, 41 },
	{ 1, 225 },
	{ 193, 1 },
	{ 193, 253 },
	{ 1, 41 },
	{ 1, 225 },
	{ 193, 1 },
	{ 193, 253 },
	{ 1, 41 },
	{ 1, 225 },
	{ 193, 1 },
	{ 193, 253 },
	{ 1, 41 },
	{ 1, 225 },
	{ 193, 1 },
	{ 193, 253 },
	{ 1, 41 },
	{ 1, 225 },
	{ 193, 1 },
	{ 193, 253 },
	{ 1, 41 },
	{ 1, 225 },
	{ 193, 1 },
	{ 193, 253 },
	{ 1, 41 },
	{ 1, 225 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00092B94[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_000928D4, NULL, NULL, NULL, uv_000929E4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 12, poly_00092910, NULL, NULL, NULL, uv_00092A44, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 9, poly_00092988, NULL, NULL, NULL, uv_00092B04, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00092BDC[] = {
	{ -762, 13, -3434 },
	{ -762, 13, -3429 },
	{ -761, 13, -3434 },
	{ -761, 13, -3429 },
	{ -765, 5, -3435 },
	{ -765, 5, -3428 },
	{ -762, 5, -3435 },
	{ -762, 5, -3428 },
	{ -769, 0, -3436 },
	{ -769, 0, -3427 },
	{ -771, 5, -3436 },
	{ -771, 5, -3427 },
	{ -764, 0, -3436 },
	{ -764, 0, -3427 },
	{ -762, 5, -3436 },
	{ -762, 5, -3427 },
	{ -762, 13, -3381 },
	{ -762, 13, -3376 },
	{ -761, 13, -3381 },
	{ -761, 13, -3376 },
	{ -765, 5, -3382 },
	{ -765, 5, -3375 },
	{ -762, 5, -3382 },
	{ -762, 5, -3375 },
	{ -769, 0, -3383 },
	{ -769, 0, -3374 },
	{ -771, 5, -3383 },
	{ -771, 5, -3374 },
	{ -764, 0, -3383 },
	{ -764, 0, -3374 },
	{ -762, 5, -3383 },
	{ -762, 5, -3374 },
	{ -762, 13, -3359 },
	{ -762, 13, -3354 },
	{ -761, 13, -3359 },
	{ -761, 13, -3354 },
	{ -765, 5, -3360 },
	{ -765, 5, -3353 },
	{ -762, 5, -3360 },
	{ -762, 5, -3353 },
	{ -769, 0, -3361 },
	{ -769, 0, -3352 },
	{ -771, 5, -3361 },
	{ -771, 5, -3352 },
	{ -764, 0, -3361 },
	{ -764, 0, -3352 },
	{ -762, 5, -3361 },
	{ -762, 5, -3352 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00092E1C[] = {
	{ -0.457537f, 0.695705f, -0.553764f },
	{ -0.457537f, 0.695705f, 0.553764f },
	{ 0.623877f, 0.571575f, -0.532991f },
	{ 0.623877f, 0.571575f, 0.532991f },
	{ -0.7037399f, 0.34176f, -0.622857f },
	{ -0.7037399f, 0.34176f, 0.622857f },
	{ 0.649492f, 0.013844f, -0.760243f },
	{ 0.649492f, 0.013844f, 0.760243f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0.797021f, -0.603952f },
	{ 0, 0.797021f, 0.603952f },
	{ 0.582217f, -0.232887f, -0.778966f },
	{ 0.582217f, -0.232887f, 0.778966f },
	{ 0.686083f, 0.464501f, -0.559936f },
	{ 0.686083f, 0.464501f, 0.559936f },
	{ -0.457537f, 0.695705f, -0.553764f },
	{ -0.457537f, 0.695705f, 0.553764f },
	{ 0.623877f, 0.571575f, -0.532991f },
	{ 0.623877f, 0.571575f, 0.532991f },
	{ -0.7037399f, 0.34176f, -0.622857f },
	{ -0.7037399f, 0.34176f, 0.622857f },
	{ 0.649492f, 0.013844f, -0.760243f },
	{ 0.649492f, 0.013844f, 0.760243f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0.797021f, -0.603952f },
	{ 0, 0.797021f, 0.603952f },
	{ 0.582217f, -0.232887f, -0.778966f },
	{ 0.582217f, -0.232887f, 0.778966f },
	{ 0.686083f, 0.464501f, -0.559936f },
	{ 0.686083f, 0.464501f, 0.559936f },
	{ -0.457537f, 0.695705f, -0.553764f },
	{ -0.457537f, 0.695705f, 0.553764f },
	{ 0.623877f, 0.571575f, -0.532991f },
	{ 0.623877f, 0.571575f, 0.532991f },
	{ -0.7037399f, 0.34176f, -0.622857f },
	{ -0.7037399f, 0.34176f, 0.622857f },
	{ 0.649492f, 0.013844f, -0.760243f },
	{ 0.649492f, 0.013844f, 0.760243f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0.797021f, -0.603952f },
	{ 0, 0.797021f, 0.603952f },
	{ 0.582217f, -0.232887f, -0.778966f },
	{ 0.582217f, -0.232887f, 0.778966f },
	{ 0.686083f, 0.464501f, -0.559936f },
	{ 0.686083f, 0.464501f, 0.559936f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009305C = { vertex_00092BDC, normal_00092E1C, LengthOfArray<Sint32>(vertex_00092BDC), meshlist_00092B94, matlist_00092898, LengthOfArray<Uint16>(meshlist_00092B94), LengthOfArray<Uint16>(matlist_00092898), { -766, 6.5f, -3394 }, 42.5f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00093084 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009305C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000930B8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000930CC[] = {
	8, 44, 45, 47, 33, 0, 1, 29, 31,
	3, 24, 51, 49,
	0x8000u | 9, 42, 41, 40, 39, 38, 37, 36, 35, 34,
	16, 32, 42, 43, 41, 2, 4, 25, 23, 22, 21, 20, 19, 17, 16, 9, 8,
	3, 19, 18, 16,
	8, 25, 31, 2, 1, 43, 33, 32, 45,
	0x8000u | 8, 41, 4, 39, 6, 37, 5, 35, 7,
	3, 26, 27, 28,
	0x8000u | 9, 26, 13, 28, 12, 30, 15, 24, 11, 49,
	0x8000u | 8, 18, 7, 19, 5, 21, 6, 23, 4,
	15, 50, 51, 22, 24, 25, 30, 31, 28, 29, 27, 0, 3, 47, 46, 44,
	7, 50, 22, 10, 20, 14, 17, 9,
	3, 10, 48, 50
};

extern "C" __declspec(dllexport) NJS_TEX uv_000931B0[] = {
	{ 0, 161 },
	{ 10, 231 },
	{ 10, -590 },
	{ 68, -502 },
	{ 46, -685 },
	{ 87, -618 },
	{ 46, -1882 },
	{ 88, -1835 },
	{ 494, -1976 },
	{ 500, -2103 },
	{ 494, -919 },
	{ 494, 100 },
	{ 569, -614 },
	{ 569, 72 },
	{ 947, -760 },
	{ 947, -81 },
	{ 1001, -885 },
	{ 1001, -161 },
	{ 1020, -1050 },
	{ 1020, -250 },
	{ 68, 255 },
	{ 494, 100 },
	{ 494, -596 },
	{ 569, -614 },
	{ 494, -708 },
	{ 569, -726 },
	{ 494, -1920 },
	{ 569, -1934 },
	{ 569, -1985 },
	{ 927, -2041 },
	{ 907, -2088 },
	{ 977, -2167 },
	{ 947, -2167 },
	{ 964, -2279 },
	{ 947, -1003 },
	{ 964, -1180 },
	{ 977, -2167 },
	{ 997, -2295 },
	{ 964, -2279 },
	{ 494, -1920 },
	{ 88, -1835 },
	{ 494, -708 },
	{ 87, -618 },
	{ 494, -596 },
	{ 68, -502 },
	{ 68, 255 },
	{ 10, 231 },
	{ 569, -614 },
	{ 569, -726 },
	{ 947, -760 },
	{ 927, -867 },
	{ 1001, -885 },
	{ 977, -980 },
	{ 1020, -1050 },
	{ 997, -1142 },
	{ 61, -2037 },
	{ 28, -2023 },
	{ 76, -1896 },
	{ 61, -2037 },
	{ 61, -848 },
	{ 76, -1896 },
	{ 76, -708 },
	{ 109, -1891 },
	{ 109, -704 },
	{ 494, -1976 },
	{ 494, -788 },
	{ 494, -919 },
	{ 997, -2295 },
	{ 997, -1142 },
	{ 977, -2167 },
	{ 977, -980 },
	{ 927, -2041 },
	{ 927, -867 },
	{ 569, -1934 },
	{ 569, -726 },
	{ 564, -2117 },
	{ 500, -2103 },
	{ 569, -1985 },
	{ 494, -1976 },
	{ 494, -1920 },
	{ 109, -1891 },
	{ 88, -1835 },
	{ 76, -1896 },
	{ 46, -1882 },
	{ 28, -2023 },
	{ 46, -685 },
	{ 28, -824 },
	{ 10, -590 },
	{ 0, -732 },
	{ 0, 161 },
	{ 564, -2117 },
	{ 569, -1985 },
	{ 569, -807 },
	{ 907, -2088 },
	{ 907, -941 },
	{ 947, -2167 },
	{ 947, -1003 },
	{ 569, -807 },
	{ 569, -937 },
	{ 564, -2117 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00093340[] = {
	{ NJD_MESHSET_TRIMESH | 0, 13, poly_000930CC, NULL, NULL, NULL, uv_000931B0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00093358[] = {
	{ 1182, -236, 46 },
	{ 1189, -226.5f, 57.5f },
	{ 1179.5f, -134, 65 },
	{ 1167, -240, 29 },
	{ 1177.5f, -117, 65 },
	{ 1150.5f, -24, 46 },
	{ 1162.5f, -35.5f, 57.5f },
	{ 1133, -19.5f, 29.5f },
	{ 1129, -27, 29.5f },
	{ 1148, -31, 46 },
	{ 1169, -117, 59.5f },
	{ 1171, -134, 59.5f },
	{ 1179.5f, -229, 46 },
	{ 1164.5f, -232.5f, 29 },
	{ 1154.5f, -40, 53.5f },
	{ 1180, -221.5f, 53.5f },
	{ 1011.5f, -27, 29.5f },
	{ 1023.5f, -31, 46 },
	{ 1010, -19.5f, 29.5f },
	{ 1023.5f, -24, 46 },
	{ 1032, -40, 53.5f },
	{ 1037, -35.49453f, 57.5f },
	{ 1043, -117, 59.5f },
	{ 1048.5f, -117, 65 },
	{ 1044, -134, 59.5f },
	{ 1050, -134, 65 },
	{ 1037.5f, -232.5f, 29 },
	{ 1039, -240, 29 },
	{ 1052.5f, -229, 46 },
	{ 1054, -236, 46 },
	{ 1053, -221.5f, 53.5f },
	{ 1059, -226.4371f, 57.5f },
	{ 1282.5f, -231, 62 },
	{ 1201.5f, -231, 62 },
	{ 1228.5f, -14.5f, 29.5f },
	{ 1143, -14.5f, 29.5f },
	{ 1238, -18.5f, 46 },
	{ 1160.5f, -18.5f, 46 },
	{ 1246.5f, -31, 61.5f },
	{ 1174, -31, 61.5f },
	{ 1263, -117, 70.5f },
	{ 1189.5f, -117, 70.5f },
	{ 1266, -134, 70.5f },
	{ 1191.5f, -134, 70.5f },
	{ 1272.5f, -246.5f, 27.5f },
	{ 1280, -244, 46 },
	{ 1177, -246.5f, 27.5f },
	{ 1192, -244, 46 },
	{ 1155, -117, 29.5f },
	{ 1157, -134, 29.5f },
	{ 1029, -118, 29.5f },
	{ 1030.5f, -132.5f, 29.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000935C8[] = {
	{ -0.248899f, -0.773203f, 0.583272f },
	{ -0.263756f, -0.3791f, 0.88697f },
	{ -0.204276f, -0.06359f, 0.976846f },
	{ -0.150533f, -0.93116f, 0.332086f },
	{ -0.218769f, 0.012964f, 0.975691f },
	{ -0.229848f, 0.711759f, 0.663754f },
	{ -0.268521f, 0.283082f, 0.9207399f },
	{ -0.117582f, 0.920543f, 0.372526f },
	{ 0, -0.97185f, -0.2356f },
	{ 0, -0.755528f, -0.655116f },
	{ -0.002618f, 0.597146f, -0.802128f },
	{ -0.00335f, -0.508886f, -0.860828f },
	{ 0, 0.833198f, -0.552974f },
	{ 0, 0.979457f, -0.201653f },
	{ 0, -0.303361f, -0.952876f },
	{ 0, 0.420355f, -0.90736f },
	{ -0.7166989f, -0.527391f, 0.456291f },
	{ -0.630916f, -0.7046919f, 0.324585f },
	{ -0.608498f, 0.483045f, 0.6296009f },
	{ -0.450993f, 0.5823849f, 0.6763369f },
	{ -0.852161f, -0.515546f, -0.089632f },
	{ -0.299097f, 0.321198f, 0.8985389f },
	{ -0.874465f, 0.378506f, 0.303387f },
	{ -0.368067f, 0.000148f, 0.929799f },
	{ -0.797048f, -0.5180219f, 0.31043f },
	{ -0.363538f, -0.0699f, 0.928953f },
	{ -0.72878f, 0.380843f, 0.5690669f },
	{ -0.562383f, -0.542652f, 0.623903f },
	{ -0.763669f, 0.634297f, 0.120323f },
	{ -0.409379f, -0.718009f, 0.562914f },
	{ -0.954621f, 0.23529f, -0.182587f },
	{ -0.371722f, -0.398147f, 0.838631f },
	{ 0, -0.474983f, 0.879995f },
	{ -0.171107f, -0.447782f, 0.877618f },
	{ 0, 0.97185f, 0.2356f },
	{ -0.296715f, 0.802626f, 0.5174479f },
	{ 0, 0.865026f, 0.501727f },
	{ -0.208862f, 0.799105f, 0.5637439f },
	{ 0, 0.402569f, 0.91539f },
	{ -0.191234f, 0.41842f, 0.887893f },
	{ 0, 0.04606f, 0.998939f },
	{ -0.208024f, 0.019458f, 0.9779299f },
	{ 0, -0.048462f, 0.998825f },
	{ -0.19903f, -0.063609f, 0.977927f },
	{ 0, -0.990992f, 0.133918f },
	{ 0, -0.8972329f, 0.441558f },
	{ -0.299979f, -0.867514f, 0.396776f },
	{ -0.204579f, -0.855731f, 0.47526f },
	{ -0.003968f, 0.99999f, 0.001852f },
	{ -0.00591f, -0.998864f, -0.047284f },
	{ -0.756871f, 0.548615f, 0.355202f },
	{ -0.726715f, -0.611335f, 0.313297f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00093838 = { vertex_00093358, normal_000935C8, LengthOfArray<Sint32>(vertex_00093358), meshlist_00093340, matlist_000930B8, LengthOfArray<Uint16>(meshlist_00093340), LengthOfArray<Uint16>(matlist_000930B8), { 1146.25f, -130.5f, 49 }, 137.9359f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00093860 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00093838, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00093894[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000938A8[] = {
	0x8000u | 6, 2, 10, 6, 8, 1, 0,
	0x8000u | 6, 4, 5, 7, 9, 3, 11
};

extern "C" __declspec(dllexport) NJS_TEX uv_000938C4[] = {
	{ 253, 251 },
	{ 1, 251 },
	{ 253, -195 },
	{ 1, -195 },
	{ 253, -251 },
	{ 1, -251 },
	{ 1, -251 },
	{ 253, -251 },
	{ 1, -195 },
	{ 253, -195 },
	{ 1, 251 },
	{ 253, 251 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000938F4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000938A8, NULL, NULL, NULL, uv_000938C4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009390C[] = {
	{ 1030, -27, 29.5f },
	{ 1049, -31, 46 },
	{ 1068, -117, 59.5f },
	{ 1070, -134, 59.5f },
	{ 1071, -229, 46 },
	{ 1056, -232.5f, 29 },
	{ 1055.5f, -40, 53.5f },
	{ 1072.5f, -221.5f, 53.5f },
	{ 1032.296f, -40.29062f, 29.46766f },
	{ 1055.136f, -221.7082f, 29.02626f },
	{ 1043.513f, -116.801f, 29.28151f },
	{ 1046.457f, -133.8409f, 29.24005f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009399C[] = {
	{ -0.6564299f, -0.006307f, 0.75436f },
	{ -0.6564299f, -0.006307f, 0.75436f },
	{ -0.716315f, -0.084437f, 0.6926489f },
	{ -0.813149f, -0.072299f, 0.577549f },
	{ -0.699632f, -0.250942f, 0.668987f },
	{ -0.699632f, -0.250942f, 0.668987f },
	{ -0.699246f, -0.060956f, 0.7122779f },
	{ -0.778608f, -0.134858f, 0.612848f },
	{ -0.685643f, -0.042988f, 0.7266679f },
	{ -0.76301f, -0.160271f, 0.626202f },
	{ -0.716315f, -0.084437f, 0.6926489f },
	{ -0.813149f, -0.072299f, 0.577549f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00093A2C = { vertex_0009390C, normal_0009399C, LengthOfArray<Sint32>(vertex_0009390C), meshlist_000938F4, matlist_00093894, LengthOfArray<Uint16>(meshlist_000938F4), LengthOfArray<Uint16>(matlist_00093894), { 1051.25f, -129.75f, 44.25f }, 103.8755f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00093A54 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00093A2C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00093A88[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 33, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00093A9C[] = {
	10, 4, 2, 5, 1, 3, 0, 9, 6, 8, 7
};

extern "C" __declspec(dllexport) NJS_TEX uv_00093AB4[] = {
	{ 53, -255 },
	{ 53, 255 },
	{ 236, -255 },
	{ 236, 255 },
	{ 398, -255 },
	{ 398, 255 },
	{ 520, -255 },
	{ 520, 255 },
	{ 617, -255 },
	{ 617, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00093ADC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00093A9C, NULL, NULL, NULL, uv_00093AB4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00093AF4[] = {
	{ -691, 8, -3416 },
	{ -698, 4, -3416 },
	{ -700, -7, -3416 },
	{ -691, 8, -3458 },
	{ -700, -7, -3458 },
	{ -698, 4, -3458 },
	{ -684, 8, -3416 },
	{ -677, 4, -3416 },
	{ -677, 4, -3458 },
	{ -684, 8, -3458 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00093B6C[] = {
	{ -0.256668f, 0.9665f, 0 },
	{ -0.816339f, 0.577572f, 0 },
	{ -0.98387f, 0.178885f, 0 },
	{ -0.256668f, 0.9665f, 0 },
	{ -0.98387f, 0.178885f, 0 },
	{ -0.816339f, 0.577572f, 0 },
	{ 0.256668f, 0.9665f, 0 },
	{ 0.496139f, 0.868243f, 0 },
	{ 0.496139f, 0.868243f, 0 },
	{ 0.256668f, 0.9665f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00093BE4 = { vertex_00093AF4, normal_00093B6C, LengthOfArray<Sint32>(vertex_00093AF4), meshlist_00093ADC, matlist_00093A88, LengthOfArray<Uint16>(meshlist_00093ADC), LengthOfArray<Uint16>(matlist_00093A88), { -688.5f, 0.5f, -3437 }, 23.94264f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00093C0C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00093BE4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00093C40[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 33, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00093C54[] = {
	10, 4, 2, 5, 1, 3, 0, 9, 6, 8, 7
};

extern "C" __declspec(dllexport) NJS_TEX uv_00093C6C[] = {
	{ 53, -255 },
	{ 53, 255 },
	{ 236, -255 },
	{ 236, 255 },
	{ 398, -255 },
	{ 398, 255 },
	{ 520, -255 },
	{ 520, 255 },
	{ 617, -255 },
	{ 617, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00093C94[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00093C54, NULL, NULL, NULL, uv_00093C6C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00093CAC[] = {
	{ -718, 3, -3416 },
	{ -725, -1, -3416 },
	{ -727, -12, -3416 },
	{ -718, 3, -3458 },
	{ -727, -12, -3458 },
	{ -725, -1, -3458 },
	{ -711, 3, -3416 },
	{ -704, -1, -3416 },
	{ -704, -1, -3458 },
	{ -711, 3, -3458 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00093D24[] = {
	{ -0.256668f, 0.9665f, 0 },
	{ -0.816339f, 0.577572f, 0 },
	{ -0.98387f, 0.178885f, 0 },
	{ -0.256668f, 0.9665f, 0 },
	{ -0.98387f, 0.178885f, 0 },
	{ -0.816339f, 0.577572f, 0 },
	{ 0.256668f, 0.9665f, 0 },
	{ 0.496139f, 0.868243f, 0 },
	{ 0.496139f, 0.868243f, 0 },
	{ 0.256668f, 0.9665f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00093D9C = { vertex_00093CAC, normal_00093D24, LengthOfArray<Sint32>(vertex_00093CAC), meshlist_00093C94, matlist_00093C40, LengthOfArray<Uint16>(meshlist_00093C94), LengthOfArray<Uint16>(matlist_00093C40), { -715.5f, -4.5f, -3437 }, 23.94264f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00093DC4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00093D9C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00093DF8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 33, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00093E0C[] = {
	10, 4, 2, 5, 1, 3, 0, 9, 6, 8, 7
};

extern "C" __declspec(dllexport) NJS_TEX uv_00093E24[] = {
	{ 53, -255 },
	{ 53, 255 },
	{ 236, -255 },
	{ 236, 255 },
	{ 398, -255 },
	{ 398, 255 },
	{ 520, -255 },
	{ 520, 255 },
	{ 617, -255 },
	{ 617, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00093E4C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00093E0C, NULL, NULL, NULL, uv_00093E24, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00093E64[] = {
	{ -718, 3, -3346 },
	{ -725, -1, -3346 },
	{ -727, -12, -3346 },
	{ -718, 3, -3388 },
	{ -727, -12, -3388 },
	{ -725, -1, -3388 },
	{ -711, 3, -3346 },
	{ -704, -1, -3346 },
	{ -704, -1, -3388 },
	{ -711, 3, -3388 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00093EDC[] = {
	{ -0.256668f, 0.9665f, 0 },
	{ -0.816339f, 0.577572f, 0 },
	{ -0.98387f, 0.178885f, 0 },
	{ -0.256668f, 0.9665f, 0 },
	{ -0.98387f, 0.178885f, 0 },
	{ -0.816339f, 0.577572f, 0 },
	{ 0.256668f, 0.9665f, 0 },
	{ 0.496139f, 0.868243f, 0 },
	{ 0.496139f, 0.868243f, 0 },
	{ 0.256668f, 0.9665f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00093F54 = { vertex_00093E64, normal_00093EDC, LengthOfArray<Sint32>(vertex_00093E64), meshlist_00093E4C, matlist_00093DF8, LengthOfArray<Uint16>(meshlist_00093E4C), LengthOfArray<Uint16>(matlist_00093DF8), { -715.5f, -4.5f, -3367 }, 23.94264f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00093F7C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00093F54, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00093FB0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 33, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00093FC4[] = {
	10, 4, 2, 5, 1, 3, 0, 9, 6, 8, 7
};

extern "C" __declspec(dllexport) NJS_TEX uv_00093FDC[] = {
	{ 53, -255 },
	{ 53, 255 },
	{ 236, -255 },
	{ 236, 255 },
	{ 398, -255 },
	{ 398, 255 },
	{ 520, -255 },
	{ 520, 255 },
	{ 617, -255 },
	{ 617, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00094004[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00093FC4, NULL, NULL, NULL, uv_00093FDC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009401C[] = {
	{ -691, 8, -3346 },
	{ -698, 4, -3346 },
	{ -700, -7, -3346 },
	{ -691, 8, -3388 },
	{ -700, -7, -3388 },
	{ -698, 4, -3388 },
	{ -684, 8, -3346 },
	{ -677, 4, -3346 },
	{ -677, 4, -3388 },
	{ -684, 8, -3388 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00094094[] = {
	{ -0.256668f, 0.9665f, 0 },
	{ -0.816339f, 0.577572f, 0 },
	{ -0.98387f, 0.178885f, 0 },
	{ -0.256668f, 0.9665f, 0 },
	{ -0.98387f, 0.178885f, 0 },
	{ -0.816339f, 0.577572f, 0 },
	{ 0.256668f, 0.9665f, 0 },
	{ 0.496139f, 0.868243f, 0 },
	{ 0.496139f, 0.868243f, 0 },
	{ 0.256668f, 0.9665f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009410C = { vertex_0009401C, normal_00094094, LengthOfArray<Sint32>(vertex_0009401C), meshlist_00094004, matlist_00093FB0, LengthOfArray<Uint16>(meshlist_00094004), LengthOfArray<Uint16>(matlist_00093FB0), { -688.5f, 0.5f, -3367 }, 23.94264f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00094134 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009410C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00094168[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 24, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 21, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000941B8[] = {
	8, 6, 7, 5, 4, 27, 26, 23, 22
};

extern "C" __declspec(dllexport) Sint16 poly_000941CA[] = {
	0x8000u | 16, 21, 23, 25, 27, 1, 5, 2, 6, 3, 7, 0, 4, 24, 26, 17, 22
};

extern "C" __declspec(dllexport) Sint16 poly_000941EC[] = {
	9, 22, 17, 21, 15, 20, 16, 19, 14, 18,
	3, 21, 23, 22
};

extern "C" __declspec(dllexport) Sint16 poly_00094208[] = {
	0x8000u | 16, 21, 25, 20, 13, 19, 12, 18, 11, 14, 8, 16, 10, 15, 9, 17, 24
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009422C[] = {
	{ 1702, -764 },
	{ 350, -765 },
	{ 2040, -394 },
	{ 0, -394 },
	{ 2040, -60 },
	{ 0, -60 },
	{ 2040, 253 },
	{ 0, 253 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009424C[] = {
	{ 0, -1785 },
	{ 255, -1785 },
	{ 0, -1618 },
	{ 255, -1619 },
	{ 0, -1439 },
	{ 255, -1442 },
	{ 0, -1161 },
	{ 255, -1157 },
	{ 0, -372 },
	{ 255, -376 },
	{ 0, -90 },
	{ 255, -87 },
	{ 0, 89 },
	{ 255, 90 },
	{ 0, 255 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009428C[] = {
	{ 1474, 255 },
	{ 1203, 255 },
	{ 1203, -1275 },
	{ 542, 255 },
	{ 542, -1275 },
	{ 264, 204 },
	{ 264, -1243 },
	{ 0, -8 },
	{ 2, -1020 },
	{ 1203, -1275 },
	{ 1474, -1275 },
	{ 1474, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000942BC[] = {
	{ 0, 255 },
	{ 0 },
	{ 533, 255 },
	{ 538, 0 },
	{ 760, 255 },
	{ 767, 0 },
	{ 1074, 255 },
	{ 1072, 0 },
	{ 1984, 255 },
	{ 1987, 0 },
	{ 2295, 255 },
	{ 2289, 0 },
	{ 2525, 255 },
	{ 2519, 0 },
	{ 3060, 255 },
	{ 3059, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000942FC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000941B8, NULL, NULL, NULL, uv_0009422C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000941CA, NULL, NULL, NULL, uv_0009424C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000941EC, NULL, NULL, NULL, uv_0009428C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_00094208, NULL, NULL, NULL, uv_000942BC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009435C[] = {
	{ -695.6917f, 31.0333f, -3476 },
	{ -695.6911f, 31.03422f, -3325 },
	{ -700.0283f, 55.70863f, -3349.979f },
	{ -700.0131f, 55.71701f, -3450.08f },
	{ -671.6917f, 31.0333f, -3476 },
	{ -671.6911f, 31.03422f, -3325 },
	{ -680.9891f, 55.70863f, -3349.979f },
	{ -681.0131f, 55.71701f, -3450.08f },
	{ -807.5f, 15, -3450 },
	{ -759.2228f, 3.645802f, -3476 },
	{ -783.9416f, 5.733311f, -3471 },
	{ -807.2447f, 14.63538f, -3349.979f },
	{ -783.9412f, 5.734215f, -3328 },
	{ -759.2224f, 3.646809f, -3325 },
	{ -807.5f, 1, -3450 },
	{ -759.2228f, -12.3542f, -3476 },
	{ -783.9416f, -12.26669f, -3471 },
	{ -700.5667f, -12.27922f, -3476 },
	{ -807.2447f, 0.63538f, -3349.979f },
	{ -783.9412f, -12.26578f, -3328 },
	{ -759.2224f, -12.35319f, -3325 },
	{ -700.5661f, -12.27811f, -3325 },
	{ -676.5667f, -12.27922f, -3476 },
	{ -676.5661f, -12.27811f, -3325 },
	{ -700.5667f, 8.720778f, -3476 },
	{ -700.5661f, 8.721889f, -3325 },
	{ -676.5667f, 8.720778f, -3476 },
	{ -676.5661f, 8.721889f, -3325 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000944AC[] = {
	{ 0, -0.38315f, 0.923686f },
	{ 0, -0.375273f, -0.926915f },
	{ 0, -0.931244f, -0.364395f },
	{ 0, -0.934294f, 0.356503f },
	{ -0.683174f, -0.269249f, 0.6788059f },
	{ -0.684622f, -0.263861f, -0.679463f },
	{ -0.486847f, -0.82493f, -0.287178f },
	{ -0.488075f, -0.8267469f, 0.279771f },
	{ 0.930262f, 0, 0.366896f },
	{ 0.09951399f, 0, 0.9950359f },
	{ 0.47379f, 0, 0.8806379f },
	{ 0.933217f, 0, -0.359314f },
	{ 0.455989f, 0, -0.889986f },
	{ 0.060302f, 0, -0.99818f },
	{ 0.852194f, 0.417394f, 0.315512f },
	{ 0.073106f, 0.685873f, 0.72404f },
	{ 0.400747f, 0.666402f, 0.628737f },
	{ -0.000452f, 0.706965f, 0.707248f },
	{ 0.8548599f, 0.421355f, -0.302777f },
	{ 0.384748f, 0.657381f, -0.647934f },
	{ 0.044117f, 0.6942959f, -0.718336f },
	{ -0.000452f, 0.70696f, -0.707253f },
	{ -0.5773489f, 0.5773529f, 0.5773489f },
	{ -0.577352f, 0.577348f, -0.577351f },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ -0.6772749f, 0.073126f, 0.732087f },
	{ -0.677277f, 0.07312699f, -0.732085f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000945FC = { vertex_0009435C, normal_000944AC, LengthOfArray<Sint32>(vertex_0009435C), meshlist_000942FC, matlist_00094168, LengthOfArray<Uint16>(meshlist_000942FC), LengthOfArray<Uint16>(matlist_00094168), { -739.5955f, 21.68141f, -3400.5f }, 101.5444f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00094624 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000945FC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00094658[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00094680[] = {
	4, 22, 25, 31, 21,
	4, 31, 21, 23, 16,
	4, 27, 24, 16, 23,
	4, 29, 26, 32, 17,
	4, 28, 19, 17, 32,
	4, 22, 18, 25, 20,
	4, 9, 20, 8, 18
};

extern "C" __declspec(dllexport) Sint16 poly_000946C6[] = {
	3, 30, 20, 9,
	4, 23, 6, 31, 1,
	4, 16, 3, 27, 2,
	4, 26, 10, 17, 11,
	4, 25, 20, 4, 30,
	4, 24, 5, 23, 6,
	4, 31, 1, 22, 7,
	3, 15, 8, 18,
	4, 22, 7, 18, 15,
	4, 25, 4, 21, 0,
	4, 19, 14, 32, 13,
	4, 17, 11, 28, 12,
	4, 21, 0, 16, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_00094744[] = {
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -254 },
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -254 },
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -254 },
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -254 },
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -254 },
	{ 0, -255 },
	{ 1293, -251 },
	{ 19, 251 },
	{ 1293, 251 },
	{ 1293, -251 },
	{ 2530, -251 },
	{ 1293, 251 },
	{ 2530, 251 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000947B4[] = {
	{ 0, 255 },
	{ 510, 255 },
	{ 510, -2295 },
	{ 510, -2295 },
	{ 0, -2295 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -2295 },
	{ 0, -2295 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -2295 },
	{ 0, -2295 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 255 },
	{ 510, -2295 },
	{ 0, 255 },
	{ 0, -2295 },
	{ 510, -2295 },
	{ 0, -2295 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -2295 },
	{ 0, -2295 },
	{ 510, 255 },
	{ 0, 255 },
	{ 3, -2275 },
	{ 0, 255 },
	{ 510, 255 },
	{ 510, -2295 },
	{ 0, -2295 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -2295 },
	{ 0, -2295 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -2295 },
	{ 0, -2295 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -2295 },
	{ 0, -2295 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -2295 },
	{ 0, -2295 },
	{ 510, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009487C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_00094680, NULL, NULL, NULL, uv_00094744, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 13, poly_000946C6, NULL, NULL, NULL, uv_000947B4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000948AC[] = {
	{ -354.8928f, 61, -3595 },
	{ -315.3571f, 61, -3612 },
	{ 141.0143f, 61, -3324 },
	{ -139.7143f, 61, -3324 },
	{ -438.8928f, 61, -3917 },
	{ 141.0143f, 61, -3364 },
	{ -113.7143f, 61, -3364 },
	{ -398.7857f, 61, -3917 },
	{ -398.7857f, 0, -4191 },
	{ -438.8928f, 0, -4191 },
	{ 141.0143f, 61, -3145 },
	{ -229.6429f, 61, -3145 },
	{ -562, 61, -3511 },
	{ -249.6429f, 61, -3100 },
	{ -562, 61, -3449 },
	{ -398.7857f, 30.5f, -4054 },
	{ -139.7143f, 29.7f, -3324 },
	{ -229.6429f, 29.7f, -3145 },
	{ -398.7857f, -0.800002f, -4054 },
	{ -562, 29.7f, -3449 },
	{ -438.8928f, -0.800002f, -4054 },
	{ -354.8928f, 29.7f, -3595 },
	{ -398.7857f, 29.7f, -3917 },
	{ -113.7143f, 29.7f, -3364 },
	{ 141.0143f, 29.7f, -3364 },
	{ -438.8928f, 29.7f, -3917 },
	{ 141.0143f, 29.7f, -3145 },
	{ 141.0143f, 29.7f, -3324 },
	{ -562, 29.7f, -3511 },
	{ 141.0143f, 29.7f, -3100 },
	{ -438.8928f, 30.5f, -4054 },
	{ -315.3571f, 29.7f, -3612 },
	{ -249.6429f, 29.7f, -3100 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00094A38[] = {
	{ 0.894658f, 0, -0.446752f },
	{ -0.889369f, 0, 0.457191f },
	{ 0, 0, -1 },
	{ 0.434837f, 0, -0.900509f },
	{ 0.990602f, 0, -0.136776f },
	{ 0, 0, 1 },
	{ -0.429615f, 0, 0.903012f },
	{ -0.989712f, 0, 0.143076f },
	{ -0.141727f, 0.989889f, 0.00578f },
	{ 0.141727f, 0.989889f, 0.00578f },
	{ 0, 0, 1 },
	{ -0.404807f, 0, 0.9144019f },
	{ -0.740313f, 0, 0.672263f },
	{ 0.745142f, 0, -0.666906f },
	{ 0.745142f, 0, -0.666906f },
	{ -1, 0, 0 },
	{ 0.340802f, 0.6210819f, -0.70577f },
	{ -0.237106f, 0.810509f, 0.535589f },
	{ -0.682701f, 0.726549f, -0.077751f },
	{ 0.406693f, 0.83792f, -0.363992f },
	{ 0.682701f, 0.726549f, -0.077751f },
	{ 0.669396f, 0.663456f, -0.334267f },
	{ -0.69999f, 0.713984f, 0.015482f },
	{ -0.247308f, 0.817695f, 0.51982f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.747315f, 0.643246f, -0.166599f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ -0.670167f, 0.424883f, 0.608565f },
	{ 0, 1, 0 },
	{ 1, 0, 0 },
	{ -0.581506f, 0.756632f, 0.29893f },
	{ 0.420138f, 0.825887f, -0.376026f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00094BC4 = { vertex_000948AC, normal_00094A38, LengthOfArray<Sint32>(vertex_000948AC), meshlist_0009487C, matlist_00094658, LengthOfArray<Uint16>(meshlist_0009487C), LengthOfArray<Uint16>(matlist_00094658), { -210.4929f, 30.1f, -3645.5f }, 648.9433f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00094BEC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00094BC4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00094C20[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00094C48[] = {
	4, 31, 21, 22, 25,
	4, 23, 16, 31, 21,
	4, 16, 23, 27, 24,
	4, 32, 17, 29, 26,
	4, 17, 32, 28, 19,
	4, 25, 20, 22, 18,
	4, 8, 18, 9, 20
};

extern "C" __declspec(dllexport) Sint16 poly_00094C8E[] = {
	3, 9, 20, 30,
	4, 31, 1, 23, 6,
	4, 27, 2, 16, 3,
	4, 17, 11, 26, 10,
	4, 4, 30, 25, 20,
	4, 23, 6, 24, 5,
	4, 22, 7, 31, 1,
	3, 18, 8, 15,
	4, 18, 15, 22, 7,
	4, 21, 0, 25, 4,
	4, 32, 13, 19, 14,
	4, 28, 12, 17, 11,
	4, 16, 3, 21, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_00094D0C[] = {
	{ 2550, 255 },
	{ 2550, -254 },
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -254 },
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -254 },
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -254 },
	{ 0, 255 },
	{ 0, -255 },
	{ 2550, 255 },
	{ 2550, -254 },
	{ 0, 255 },
	{ 0, -255 },
	{ 19, 251 },
	{ 1293, 251 },
	{ 0, -255 },
	{ 1293, -251 },
	{ 1293, 251 },
	{ 2530, 251 },
	{ 1293, -251 },
	{ 2530, -251 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00094D7C[] = {
	{ 510, -2295 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -2295 },
	{ 0, -2295 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -2295 },
	{ 0, -2295 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -2295 },
	{ 0, -2295 },
	{ 0, 255 },
	{ 0, -2295 },
	{ 510, 255 },
	{ 510, -2295 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -2295 },
	{ 0, -2295 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -2295 },
	{ 0, -2295 },
	{ 510, 255 },
	{ 0, 255 },
	{ 3, -2275 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -2295 },
	{ 0, -2295 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -2295 },
	{ 0, -2295 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -2295 },
	{ 0, -2295 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -2295 },
	{ 0, -2295 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -2295 },
	{ 0, -2295 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00094E44[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_00094C48, NULL, NULL, NULL, uv_00094D0C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 13, poly_00094C8E, NULL, NULL, NULL, uv_00094D7C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00094E74[] = {
	{ 636.8931f, 61, -3595 },
	{ 597.3575f, 61, -3612 },
	{ 140.986f, 61, -3324 },
	{ 421.7146f, 61, -3324 },
	{ 720.8932f, 61, -3917 },
	{ 140.986f, 61, -3364 },
	{ 395.7147f, 61, -3364 },
	{ 680.7861f, 61, -3917 },
	{ 680.7862f, 0, -4191 },
	{ 720.8933f, 0, -4191 },
	{ 140.986f, 61, -3145 },
	{ 511.6432f, 61, -3145 },
	{ 844.0003f, 61, -3511 },
	{ 531.6431f, 61, -3100 },
	{ 844.0003f, 61, -3449 },
	{ 680.7862f, 30.5f, -4054 },
	{ 421.7146f, 29.7f, -3324 },
	{ 511.6432f, 29.7f, -3145 },
	{ 680.7862f, -0.800002f, -4054 },
	{ 844.0003f, 29.7f, -3449 },
	{ 720.8933f, -0.800002f, -4054 },
	{ 636.8931f, 29.7f, -3595 },
	{ 680.7861f, 29.7f, -3917 },
	{ 395.7147f, 29.7f, -3364 },
	{ 140.986f, 29.7f, -3364 },
	{ 720.8932f, 29.7f, -3917 },
	{ 140.986f, 29.7f, -3145 },
	{ 140.986f, 29.7f, -3324 },
	{ 844.0003f, 29.7f, -3511 },
	{ 140.986f, 29.7f, -3100 },
	{ 720.8933f, 30.5f, -4054 },
	{ 597.3575f, 29.7f, -3612 },
	{ 531.6431f, 29.7f, -3100 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00095000[] = {
	{ -0.894658f, 0, -0.446753f },
	{ 0.889368f, 0, 0.457191f },
	{ 0, 0, -1 },
	{ -0.434837f, 0, -0.900509f },
	{ -0.990602f, 0, -0.136777f },
	{ 0, 0, 1 },
	{ 0.429615f, 0, 0.903012f },
	{ 0.989712f, 0, 0.143076f },
	{ 0.141727f, 0.989889f, 0.00578f },
	{ -0.141727f, 0.989889f, 0.00578f },
	{ 0, 0, 1 },
	{ 0.404807f, 0, 0.9144019f },
	{ 0.740313f, 0, 0.672263f },
	{ -0.745142f, 0, -0.666906f },
	{ -0.745142f, 0, -0.666906f },
	{ 1, 0, 0 },
	{ -0.340801f, 0.6210819f, -0.70577f },
	{ 0.237106f, 0.810509f, 0.535589f },
	{ 0.682701f, 0.726549f, -0.077751f },
	{ -0.406693f, 0.83792f, -0.363992f },
	{ -0.682701f, 0.726549f, -0.077751f },
	{ -0.669396f, 0.663456f, -0.334267f },
	{ 0.69999f, 0.713984f, 0.015482f },
	{ 0.247308f, 0.817695f, 0.51982f },
	{ 0, 0.7071069f, 0.7071069f },
	{ -0.747315f, 0.643246f, -0.166599f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0.670167f, 0.424883f, 0.608565f },
	{ 0, 1, 0 },
	{ -1, 0, 0 },
	{ 0.581506f, 0.756632f, 0.29893f },
	{ -0.420138f, 0.825887f, -0.376026f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009518C = { vertex_00094E74, normal_00095000, LengthOfArray<Sint32>(vertex_00094E74), meshlist_00094E44, matlist_00094C20, LengthOfArray<Uint16>(meshlist_00094E44), LengthOfArray<Uint16>(matlist_00094C20), { 492.4932f, 30.1f, -3645.5f }, 648.9434f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000951B4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009518C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000951E8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 56, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000951FC[] = {
	6, 2, 3, 1, 0, 5, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009520C[] = {
	{ 0, -765 },
	{ 254, -765 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 254 },
	{ 255, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00095224[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000951FC, NULL, NULL, NULL, uv_0009520C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009523C[] = {
	{ -499.9615f, -13.33232f, 0.000064f },
	{ -499.9615f, -13.33232f, -19.99993f },
	{ -499.9231f, 100, -20 },
	{ -499.9231f, 100, 0 },
	{ -500, -126.6646f, 0.000127f },
	{ -500, -126.6646f, -19.99987f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00095284[] = {
	{ 1, -0.000339f, 0 },
	{ 1, -0.000339f, 0 },
	{ 1, -0.000339f, 0 },
	{ 1, -0.000339f, 0 },
	{ 1, -0.000339f, 0 },
	{ 1, -0.000339f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000952CC = { vertex_0009523C, normal_00095284, LengthOfArray<Sint32>(vertex_0009523C), meshlist_00095224, matlist_000951E8, LengthOfArray<Uint16>(meshlist_00095224), LengthOfArray<Uint16>(matlist_000951E8), { -499.9615f, -13.33232f, -9.999935f }, 113.7727f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000952F4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000952CC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00095328[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00095350[] = {
	0x8000u | 7, 26, 15, 28, 29, 25, 14, 13,
	13, 20, 17, 13, 18, 12, 21, 11, 24, 23, 19, 10, 8, 9,
	0x8000u | 7, 16, 26, 27, 28, 20, 25, 13
};

extern "C" __declspec(dllexport) Sint16 poly_0009538C[] = {
	4, 9, 8, 1, 0,
	4, 10, 9, 2, 1,
	4, 11, 23, 3, 22,
	0x8000u | 6, 13, 5, 12, 4, 11, 3,
	4, 14, 13, 6, 5,
	0x8000u | 6, 15, 7, 29, 30, 14, 6,
	4, 2, 22, 10, 23
};

extern "C" __declspec(dllexport) NJS_TEX uv_000953DC[] = {
	{ 2550, -165 },
	{ 2550, -1020 },
	{ 2195, -165 },
	{ 2201, -948 },
	{ 1897, -165 },
	{ 1897, -888 },
	{ 1713, -165 },
	{ 1897, 255 },
	{ 1713, 255 },
	{ 1713, -165 },
	{ 1585, 255 },
	{ 1585, -165 },
	{ 1429, 255 },
	{ 1427, -394 },
	{ 827, 255 },
	{ 825, -394 },
	{ 225, 255 },
	{ 225, -394 },
	{ 0, 255 },
	{ 55, -191 },
	{ 2550, 255 },
	{ 2550, -165 },
	{ 2201, 255 },
	{ 2195, -165 },
	{ 1897, 255 },
	{ 1897, -165 },
	{ 1713, -165 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00095448[] = {
	{ 762, 0 },
	{ 1, 0 },
	{ 762, 254 },
	{ 1, 254 },
	{ 762, 0 },
	{ 1, 0 },
	{ 762, 254 },
	{ 1, 254 },
	{ 762, 0 },
	{ 1, 0 },
	{ 762, 254 },
	{ 1, 254 },
	{ 762, 0 },
	{ 762, 254 },
	{ 382, 0 },
	{ 382, 254 },
	{ 1, 0 },
	{ 1, 254 },
	{ 762, 0 },
	{ 1, 0 },
	{ 762, 254 },
	{ 1, 254 },
	{ 765, 0 },
	{ 765, 255 },
	{ 356, 0 },
	{ 376, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1, 254 },
	{ 762, 254 },
	{ 1, 0 },
	{ 762, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000954C8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00095350, NULL, NULL, NULL, uv_000953DC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 7, poly_0009538C, NULL, NULL, NULL, uv_00095448, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000954F8[] = {
	{ -506, 0, -4600 },
	{ -492, 0, -4532 },
	{ -449, 0, -4501 },
	{ -144, 0, -4501 },
	{ -104, 0, -4536 },
	{ -72, 0, -4536 },
	{ -25, 0, -4426 },
	{ 140, 0, -4406 },
	{ -506, 25, -4600 },
	{ -492, 25, -4532 },
	{ -449, 25, -4501 },
	{ -144, 25, -4501 },
	{ -104, 25, -4536 },
	{ -72, 40, -4536 },
	{ -25, 40, -4426 },
	{ 140, 40, -4406 },
	{ 140, 40, -4600 },
	{ -72, 40, -4600 },
	{ -104, 25, -4600 },
	{ -449, 25, -4600 },
	{ -25.12402f, 40, -4600 },
	{ -143.7238f, 25, -4600 },
	{ -296.5f, 0, -4501 },
	{ -296.5f, 25, -4501 },
	{ -296.3619f, 25, -4600 },
	{ -25.06201f, 40, -4536 },
	{ 140, 40, -4536 },
	{ 51.84172f, 40, -4600 },
	{ 50.24902f, 40, -4536 },
	{ 51.96106f, 40, -4416.671f },
	{ 56.18677f, 0, -4416.159f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009566C[] = {
	{ -0.979457f, 0, 0.201653f },
	{ -0.839408f, 0, 0.543502f },
	{ -0.307265f, 0, 0.951624f },
	{ 0.351727f, 0, 0.936103f },
	{ 0.351727f, 0, 0.936103f },
	{ -0.550949f, 0, 0.834539f },
	{ -0.600249f, 0, 0.799813f },
	{ -0.120331f, 0, 0.992734f },
	{ -0.738675f, 0.656682f, 0.15208f },
	{ -0.649288f, 0.633788f, 0.420402f },
	{ -0.235054f, 0.644044f, 0.727981f },
	{ 0.271468f, 0.6358449f, 0.7225f },
	{ 0.074899f, 0.756153f, 0.650094f },
	{ -0.423722f, 0.834952f, 0.351162f },
	{ -0.475614f, 0.6100529f, 0.6337399f },
	{ -0.088414f, 0.678332f, 0.729416f },
	{ 0, 1, 0 },
	{ -0.217418f, 0.976079f, 0 },
	{ -0.217418f, 0.976079f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.08508699f, 0.7071069f, 0.701969f },
	{ -0.120331f, 0, 0.992734f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000957E0 = { vertex_000954F8, normal_0009566C, LengthOfArray<Sint32>(vertex_000954F8), meshlist_000954C8, matlist_00095328, LengthOfArray<Uint16>(meshlist_000954C8), LengthOfArray<Uint16>(matlist_00095328), { -183, 20, -4503 }, 337.2506f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00095808 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000957E0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009583C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 57, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009588C[] = {
	0x8000u | 9, 1, 0, 19, 20, 13, 14, 21, 22, 8,
	0x8000u | 9, 4, 2, 15, 17, 9, 10, 26, 25, 27
};

extern "C" __declspec(dllexport) Sint16 poly_000958B4[] = {
	0x8000u | 10, 8, 7, 21, 23, 13, 12, 19, 18, 1, 3
};

extern "C" __declspec(dllexport) Sint16 poly_000958CA[] = {
	0x8000u | 10, 5, 3, 16, 18, 11, 12, 24, 23, 6, 7
};

extern "C" __declspec(dllexport) Sint16 poly_000958E0[] = {
	4, 10, 25, 11, 24,
	4, 6, 24, 27, 25,
	4, 11, 16, 10, 17,
	4, 2, 17, 5, 16
};

extern "C" __declspec(dllexport) NJS_TEX uv_00095908[] = {
	{ 6375, 0 },
	{ 6375, 255 },
	{ 4781, 63 },
	{ 4781, 255 },
	{ 3187, 127 },
	{ 3187, 255 },
	{ 1593, 191 },
	{ 1593, 255 },
	{ 0, 255 },
	{ 2294, 255 },
	{ 2294, 0 },
	{ 1724, 206 },
	{ 1721, 0 },
	{ 1150, 142 },
	{ 1147, 0 },
	{ 577, 79 },
	{ 573, 0 },
	{ 4, 15 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00095950[] = {
	{ 769, -1268 },
	{ 5, -1268 },
	{ 769, -897 },
	{ 5, -897 },
	{ 769, -514 },
	{ 0, -521 },
	{ 769, -133 },
	{ 5, -133 },
	{ 769, 249 },
	{ 5, 249 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00095978[] = {
	{ 19, 95 },
	{ 1254, 95 },
	{ 19, -2454 },
	{ 1254, -2454 },
	{ 19, -5004 },
	{ 1254, -5004 },
	{ 19, -7554 },
	{ 1254, -7554 },
	{ 19, -9784 },
	{ 1254, -9784 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000959A0[] = {
	{ 2040, 0 },
	{ 0 },
	{ 2040, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 2040, 255 },
	{ 0 },
	{ 2040, 0 },
	{ 0, 255 },
	{ 2040, 255 },
	{ 0 },
	{ 2040, 0 },
	{ 2040, 0 },
	{ 0 },
	{ 2040, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000959E0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0009588C, NULL, NULL, NULL, uv_00095908, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000958B4, NULL, NULL, NULL, uv_00095950, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000958CA, NULL, NULL, NULL, uv_00095978, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, poly_000958E0, NULL, NULL, NULL, uv_000959A0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00095A40[] = {
	{ -562, 0, -3917 },
	{ -562, 61, -3917 },
	{ -388.5714f, 61, -3917 },
	{ -438.8928f, 61, -3917 },
	{ -388.5714f, 2, -3917 },
	{ -398.7857f, 61, -3917 },
	{ -398.7857f, 0, -4191 },
	{ -438.8928f, 0, -4191 },
	{ -562, 0, -4191 },
	{ -388.5714f, 2, -4054 },
	{ -388.5714f, 30.5f, -4054 },
	{ -398.7857f, 30.5f, -4054 },
	{ -438.8928f, 30.5f, -4054 },
	{ -562, 30.5f, -4054 },
	{ -562, 0, -4054 },
	{ -388.5714f, 2, -3985.5f },
	{ -398.7857f, 45.75f, -3985.5f },
	{ -388.5714f, 45.75f, -3985.5f },
	{ -438.8928f, 45.75f, -3985.5f },
	{ -562, 45.75f, -3985.5f },
	{ -562, 0, -3985.5f },
	{ -562, 15.25f, -4122.5f },
	{ -562, 0, -4122.5f },
	{ -438.8928f, 15.25f, -4122.5f },
	{ -398.7857f, 15.25f, -4122.5f },
	{ -388.5714f, 15.25f, -4122.5f },
	{ -388.5714f, 2, -4122.5f },
	{ -388.5714f, 0, -4191 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00095B90[] = {
	{ -1, 0, 0 },
	{ -0.652277f, 0.739868f, -0.164715f },
	{ 0.652277f, 0.739868f, -0.164715f },
	{ 0, 0.9761029f, -0.217308f },
	{ 1, 0, 0 },
	{ 0, 0.9761029f, -0.217308f },
	{ 0, 0.9761029f, -0.217308f },
	{ 0, 0.9761029f, -0.217308f },
	{ -0.138119f, 0.966748f, -0.215225f },
	{ 1, 0, 0 },
	{ 0.7071069f, 0.690209f, -0.15366f },
	{ 0, 0.9761029f, -0.217308f },
	{ 0, 0.9761029f, -0.217308f },
	{ -0.7071069f, 0.690209f, -0.15366f },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, 0.9761029f, -0.217308f },
	{ 0.7071069f, 0.690209f, -0.15366f },
	{ 0, 0.9761029f, -0.217308f },
	{ -0.7071069f, 0.690209f, -0.15366f },
	{ -1, 0, 0 },
	{ -0.7071069f, 0.690209f, -0.15366f },
	{ -1, 0, 0 },
	{ 0, 0.9761029f, -0.217308f },
	{ 0, 0.9761029f, -0.217308f },
	{ 0.7071069f, 0.690209f, -0.15366f },
	{ 1, 0, 0 },
	{ 0.119999f, 0.96905f, -0.215737f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00095CE0 = { vertex_00095A40, normal_00095B90, LengthOfArray<Sint32>(vertex_00095A40), meshlist_000959E0, matlist_0009583C, LengthOfArray<Uint16>(meshlist_000959E0), LengthOfArray<Uint16>(matlist_0009583C), { -475.2857f, 30.5f, -4054 }, 162.1369f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00095D08 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00095CE0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00095D3C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 57, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00095D8C[] = {
	0x8000u | 9, 0, 1, 20, 19, 14, 13, 22, 21, 8,
	0x8000u | 9, 2, 4, 17, 15, 10, 9, 25, 26, 27
};

extern "C" __declspec(dllexport) Sint16 poly_00095DB4[] = {
	0x8000u | 10, 7, 8, 23, 21, 12, 13, 18, 19, 3, 1
};

extern "C" __declspec(dllexport) Sint16 poly_00095DCA[] = {
	0x8000u | 10, 3, 5, 18, 16, 12, 11, 23, 24, 7, 6
};

extern "C" __declspec(dllexport) Sint16 poly_00095DE0[] = {
	4, 11, 24, 10, 25,
	4, 27, 25, 6, 24,
	4, 10, 17, 11, 16,
	4, 5, 16, 2, 17
};

extern "C" __declspec(dllexport) NJS_TEX uv_00095E08[] = {
	{ 0, 255 },
	{ 0 },
	{ 1593, 255 },
	{ 1593, 63 },
	{ 3187, 255 },
	{ 3187, 127 },
	{ 4781, 255 },
	{ 4781, 191 },
	{ 6375, 255 },
	{ 2294, 0 },
	{ 2294, 255 },
	{ 1721, 0 },
	{ 1724, 206 },
	{ 1147, 0 },
	{ 1150, 142 },
	{ 573, 0 },
	{ 577, 79 },
	{ 4, 15 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00095E50[] = {
	{ 5, -1268 },
	{ 769, -1268 },
	{ 5, -897 },
	{ 769, -897 },
	{ 0, -521 },
	{ 769, -514 },
	{ 5, -133 },
	{ 769, -133 },
	{ 5, 249 },
	{ 769, 249 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00095E78[] = {
	{ 1254, 95 },
	{ 19, 95 },
	{ 1254, -2454 },
	{ 19, -2454 },
	{ 1254, -5004 },
	{ 19, -5004 },
	{ 1254, -7554 },
	{ 19, -7554 },
	{ 1254, -9784 },
	{ 19, -9784 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00095EA0[] = {
	{ 2040, 255 },
	{ 0, 255 },
	{ 2040, 0 },
	{ 0 },
	{ 0 },
	{ 2040, 0 },
	{ 0, 255 },
	{ 2040, 255 },
	{ 0 },
	{ 2040, 0 },
	{ 0, 255 },
	{ 2040, 255 },
	{ 2040, 255 },
	{ 0, 255 },
	{ 2040, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00095EE0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00095D8C, NULL, NULL, NULL, uv_00095E08, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00095DB4, NULL, NULL, NULL, uv_00095E50, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00095DCA, NULL, NULL, NULL, uv_00095E78, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, poly_00095DE0, NULL, NULL, NULL, uv_00095EA0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00095F40[] = {
	{ 844.0004f, 0, -3917 },
	{ 844.0004f, 61, -3917 },
	{ 670.5718f, 61, -3917 },
	{ 720.8932f, 61, -3917 },
	{ 670.5718f, 2, -3917 },
	{ 680.7861f, 61, -3917 },
	{ 680.7862f, 0, -4191 },
	{ 720.8933f, 0, -4191 },
	{ 844.0004f, 0, -4191 },
	{ 670.5718f, 2, -4054 },
	{ 670.5718f, 30.5f, -4054 },
	{ 680.7862f, 30.5f, -4054 },
	{ 720.8933f, 30.5f, -4054 },
	{ 844.0004f, 30.5f, -4054 },
	{ 844.0004f, 0, -4054 },
	{ 670.5718f, 2, -3985.5f },
	{ 680.7861f, 45.75f, -3985.5f },
	{ 670.5718f, 45.75f, -3985.5f },
	{ 720.8932f, 45.75f, -3985.5f },
	{ 844.0004f, 45.75f, -3985.5f },
	{ 844.0004f, 0, -3985.5f },
	{ 844.0004f, 15.25f, -4122.5f },
	{ 844.0004f, 0, -4122.5f },
	{ 720.8933f, 15.25f, -4122.5f },
	{ 680.7862f, 15.25f, -4122.5f },
	{ 670.5718f, 15.25f, -4122.5f },
	{ 670.5718f, 2, -4122.5f },
	{ 670.5718f, 0, -4191 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00096090[] = {
	{ 1, 0, 0 },
	{ 0.652277f, 0.739868f, -0.164715f },
	{ -0.652277f, 0.739868f, -0.164715f },
	{ 0, 0.9761029f, -0.217308f },
	{ -1, 0, 0 },
	{ 0, 0.9761029f, -0.217308f },
	{ 0, 0.9761029f, -0.217308f },
	{ 0, 0.9761029f, -0.217308f },
	{ 0.138119f, 0.966748f, -0.215225f },
	{ -1, 0, 0 },
	{ -0.7071069f, 0.690209f, -0.15366f },
	{ 0, 0.9761029f, -0.217308f },
	{ 0, 0.9761029f, -0.217308f },
	{ 0.7071069f, 0.690209f, -0.153659f },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, 0.9761029f, -0.217308f },
	{ -0.7071069f, 0.690209f, -0.15366f },
	{ 0, 0.9761029f, -0.217308f },
	{ 0.7071069f, 0.690209f, -0.153659f },
	{ 1, 0, 0 },
	{ 0.7071069f, 0.690209f, -0.15366f },
	{ 1, 0, 0 },
	{ 0, 0.9761029f, -0.217308f },
	{ 0, 0.9761029f, -0.217308f },
	{ -0.7071069f, 0.690209f, -0.15366f },
	{ -1, 0, 0 },
	{ -0.119999f, 0.96905f, -0.215737f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000961E0 = { vertex_00095F40, normal_00096090, LengthOfArray<Sint32>(vertex_00095F40), meshlist_00095EE0, matlist_00095D3C, LengthOfArray<Uint16>(meshlist_00095EE0), LengthOfArray<Uint16>(matlist_00095D3C), { 757.2861f, 30.5f, -4054 }, 162.1369f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00096208 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000961E0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009623C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 57, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009628C[] = {
	0x8000u | 10, 4, 7, 32, 33, 14, 13, 21, 20, 5, 8,
	0x8000u | 10, 2, 3, 29, 27, 17, 18, 26, 25, 11, 10
};

extern "C" __declspec(dllexport) Sint16 poly_000962B8[] = {
	4, 9, 31, 4, 32,
	4, 14, 32, 15, 31,
	4, 15, 22, 14, 21,
	4, 5, 21, 1, 22
};

extern "C" __declspec(dllexport) Sint16 poly_000962E0[] = {
	0x8000u | 9, 12, 10, 24, 25, 19, 18, 28, 27, 3,
	0x8000u | 10, 0, 12, 23, 24, 16, 19, 30, 28, 6, 3
};

extern "C" __declspec(dllexport) Sint16 poly_0009630A[] = {
	0x8000u | 10, 1, 0, 22, 23, 15, 16, 31, 30, 9, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_00096320[] = {
	{ 0 },
	{ 0, 255 },
	{ 573, 0 },
	{ 573, 255 },
	{ 1147, 0 },
	{ 1147, 255 },
	{ 1721, 0 },
	{ 1721, 255 },
	{ 2294, 0 },
	{ 2294, 255 },
	{ 0, 255 },
	{ 0 },
	{ 1593, 255 },
	{ 1593, 0 },
	{ 3187, 255 },
	{ 3187, 0 },
	{ 4781, 255 },
	{ 4781, 0 },
	{ 6375, 255 },
	{ 6375, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00096370[] = {
	{ 0, 255 },
	{ 2040, 255 },
	{ 0 },
	{ 2040, 0 },
	{ 2040, 0 },
	{ 0 },
	{ 2040, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 2040, 255 },
	{ 0 },
	{ 2040, 0 },
	{ 2040, 0 },
	{ 0 },
	{ 2040, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000963B0[] = {
	{ 769, 249 },
	{ 1523, 249 },
	{ 769, -133 },
	{ 1344, -133 },
	{ 769, -514 },
	{ 1153, -514 },
	{ 769, -897 },
	{ 961, -897 },
	{ 769, -1268 },
	{ 5, 249 },
	{ 769, 249 },
	{ 5, -133 },
	{ 769, -133 },
	{ 0, -521 },
	{ 769, -514 },
	{ 5, -897 },
	{ 769, -897 },
	{ 5, -1268 },
	{ 769, -1268 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000963FC[] = {
	{ 19, 95 },
	{ 1254, 95 },
	{ 19, -2454 },
	{ 1254, -2454 },
	{ 19, -5004 },
	{ 1254, -5004 },
	{ 19, -7554 },
	{ 1254, -7554 },
	{ 19, -9784 },
	{ 1254, -9784 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00096424[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0009628C, NULL, NULL, NULL, uv_00096320, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_000962B8, NULL, NULL, NULL, uv_00096370, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000962E0, NULL, NULL, NULL, uv_000963B0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_0009630A, NULL, NULL, NULL, uv_000963FC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00096484[] = {
	{ -354.8928f, 61, -3595 },
	{ -315.3571f, 61, -3612 },
	{ -562, 0, -3917 },
	{ -562, 61, -3917 },
	{ -388.5714f, 61, -3917 },
	{ -303.1429f, 61, -3617 },
	{ -438.8928f, 61, -3917 },
	{ -388.5714f, 2, -3917 },
	{ -303.1429f, 2, -3617 },
	{ -398.7857f, 61, -3917 },
	{ -562, 61, -3511 },
	{ -562, 0, -3511 },
	{ -458.4464f, 61, -3553 },
	{ -345.8571f, 2, -3767 },
	{ -345.8571f, 61, -3767 },
	{ -357.0714f, 61, -3764.5f },
	{ -396.8928f, 61, -3756 },
	{ -562, 0, -3714 },
	{ -562, 61, -3714 },
	{ -510.2232f, 61, -3735 },
	{ -324.5f, 2, -3692 },
	{ -324.5f, 61, -3692 },
	{ -336.2143f, 61, -3688.25f },
	{ -375.8928f, 61, -3675.5f },
	{ -484.3348f, 61, -3644 },
	{ -562, 61, -3612.5f },
	{ -562, 0, -3612.5f },
	{ -562, 61, -3815.5f },
	{ -536.1115f, 61, -3826 },
	{ -562, 0, -3815.5f },
	{ -417.8928f, 61, -3836.5f },
	{ -377.9286f, 61, -3840.75f },
	{ -367.2143f, 61, -3842 },
	{ -367.2143f, 2, -3842 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009661C[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.622843f, 0.761977f, -0.177362f },
	{ 0.656453f, 0.7308379f, -0.186933f },
	{ 0, 1, 0 },
	{ 0.9617659f, 0, -0.273874f },
	{ 0.9617659f, 0, -0.273874f },
	{ 0, 1, 0 },
	{ -0.7981949f, 0.602399f, 0 },
	{ -1, 0, 0 },
	{ 0, 1, 0 },
	{ 0.9617659f, 0, -0.273874f },
	{ 0.680071f, 0.7071069f, -0.193658f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0, 1, 0 },
	{ 0.9617659f, 0, -0.273874f },
	{ 0.680071f, 0.7071069f, -0.193658f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0, 1, 0 },
	{ -1, 0, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.680071f, 0.7071069f, -0.193658f },
	{ 0.9617659f, 0, -0.273874f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000967B4 = { vertex_00096484, normal_0009661C, LengthOfArray<Sint32>(vertex_00096484), meshlist_00096424, matlist_0009623C, LengthOfArray<Uint16>(meshlist_00096424), LengthOfArray<Uint16>(matlist_0009623C), { -432.5714f, 30.5f, -3714 }, 240.7504f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000967DC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000967B4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00096810[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 57, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00096860[] = {
	0x8000u | 10, 3, 2, 27, 29, 18, 17, 25, 26, 10, 11,
	0x8000u | 10, 5, 8, 21, 20, 14, 13, 32, 33, 4, 7
};

extern "C" __declspec(dllexport) Sint16 poly_0009688C[] = {
	4, 4, 32, 9, 31,
	4, 15, 31, 14, 32,
	4, 14, 21, 15, 22,
	4, 1, 22, 5, 21
};

extern "C" __declspec(dllexport) Sint16 poly_000968B4[] = {
	0x8000u | 11, 10, 12, 25, 24, 18, 19, 27, 28, 3, 30, 6,
	0x8000u | 8, 12, 0, 24, 23, 19, 16, 28, 30
};

extern "C" __declspec(dllexport) Sint16 poly_000968DE[] = {
	0x8000u | 10, 0, 1, 23, 22, 16, 15, 30, 31, 6, 9
};

extern "C" __declspec(dllexport) NJS_TEX uv_000968F4[] = {
	{ 6375, 0 },
	{ 6375, 255 },
	{ 4781, 0 },
	{ 4781, 255 },
	{ 3187, 0 },
	{ 3187, 255 },
	{ 1593, 0 },
	{ 1593, 255 },
	{ 0 },
	{ 0, 255 },
	{ 2294, 0 },
	{ 2294, 255 },
	{ 1721, 0 },
	{ 1721, 255 },
	{ 1147, 0 },
	{ 1147, 255 },
	{ 573, 0 },
	{ 573, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00096944[] = {
	{ 0 },
	{ 2040, 0 },
	{ 0, 255 },
	{ 2040, 255 },
	{ 2040, 255 },
	{ 0, 255 },
	{ 2040, 0 },
	{ 0 },
	{ 0 },
	{ 2040, 0 },
	{ 0, 255 },
	{ 2040, 255 },
	{ 2040, 255 },
	{ 0, 255 },
	{ 2040, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00096984[] = {
	{ 1523, 249 },
	{ 769, 249 },
	{ 1344, -133 },
	{ 769, -133 },
	{ 1153, -514 },
	{ 769, -514 },
	{ 961, -897 },
	{ 769, -897 },
	{ 769, -1268 },
	{ 5, -897 },
	{ 5, -1268 },
	{ 769, 249 },
	{ 5, 249 },
	{ 769, -133 },
	{ 5, -133 },
	{ 769, -514 },
	{ 0, -521 },
	{ 769, -897 },
	{ 5, -897 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000969D0[] = {
	{ 1254, 95 },
	{ 19, 95 },
	{ 1254, -2454 },
	{ 19, -2454 },
	{ 1254, -5004 },
	{ 19, -5004 },
	{ 1254, -7554 },
	{ 19, -7554 },
	{ 1254, -9784 },
	{ 19, -9784 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000969F8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00096860, NULL, NULL, NULL, uv_000968F4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_0009688C, NULL, NULL, NULL, uv_00096944, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000968B4, NULL, NULL, NULL, uv_00096984, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_000968DE, NULL, NULL, NULL, uv_000969D0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00096A58[] = {
	{ 636.8931f, 61, -3595 },
	{ 597.3575f, 61, -3612 },
	{ 844.0004f, 0, -3917 },
	{ 844.0004f, 61, -3917 },
	{ 670.5718f, 61, -3917 },
	{ 585.1432f, 61, -3617 },
	{ 720.8932f, 61, -3917 },
	{ 670.5718f, 2, -3917 },
	{ 585.1432f, 2, -3617 },
	{ 680.7861f, 61, -3917 },
	{ 844.0003f, 61, -3511 },
	{ 844.0003f, 0, -3511 },
	{ 740.4467f, 61, -3553 },
	{ 627.8575f, 2, -3767 },
	{ 627.8575f, 61, -3767 },
	{ 639.0718f, 61, -3764.5f },
	{ 678.8932f, 61, -3756 },
	{ 844.0004f, 0, -3714 },
	{ 844.0004f, 61, -3714 },
	{ 792.2236f, 61, -3735 },
	{ 606.5004f, 2, -3692 },
	{ 606.5004f, 61, -3692 },
	{ 618.2147f, 61, -3688.25f },
	{ 657.8932f, 61, -3675.5f },
	{ 766.3352f, 61, -3644 },
	{ 844.0003f, 61, -3612.5f },
	{ 844.0003f, 0, -3612.5f },
	{ 844.0004f, 61, -3815.5f },
	{ 818.112f, 61, -3826 },
	{ 844.0004f, 0, -3815.5f },
	{ 699.8932f, 61, -3836.5f },
	{ 659.929f, 61, -3840.75f },
	{ 649.2147f, 61, -3842 },
	{ 649.2147f, 2, -3842 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00096BF0[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.622843f, 0.761977f, -0.177362f },
	{ -0.656453f, 0.730839f, -0.186933f },
	{ 0, 1, 0 },
	{ -0.9617659f, 0, -0.273874f },
	{ -0.961765f, 0, -0.273875f },
	{ 0, 1, 0 },
	{ 0.7981949f, 0.602399f, 0 },
	{ 1, 0, 0 },
	{ 0, 1, 0 },
	{ -0.9617659f, 0, -0.273874f },
	{ -0.680071f, 0.7071069f, -0.193658f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0, 1, 0 },
	{ -0.9617659f, 0, -0.273874f },
	{ -0.680071f, 0.7071069f, -0.193658f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0, 1, 0 },
	{ 1, 0, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.680071f, 0.7071069f, -0.193658f },
	{ -0.9617659f, 0, -0.273874f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00096D88 = { vertex_00096A58, normal_00096BF0, LengthOfArray<Sint32>(vertex_00096A58), meshlist_000969F8, matlist_00096810, LengthOfArray<Uint16>(meshlist_000969F8), LengthOfArray<Uint16>(matlist_00096810), { 714.5718f, 30.5f, -3714 }, 240.7504f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00096DB0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00096D88, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00096DE4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 57, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 56, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00096E48[] = {
	6, 23, 34, 22, 35, 21, 36,
	6, 21, 29, 22, 28, 23, 27,
	0x8000u | 8, 12, 32, 33, 42, 24, 25, 26, 14,
	5, 25, 43, 42, 0, 32
};

extern "C" __declspec(dllexport) Sint16 poly_00096E82[] = {
	0x8000u | 10, 9, 12, 34, 33, 23, 24, 27, 26, 11, 14,
	0x8000u | 10, 8, 3, 37, 36, 19, 21, 30, 29, 2, 1
};

extern "C" __declspec(dllexport) Sint16 poly_00096EAE[] = {
	0x8000u | 10, 7, 5, 39, 38, 18, 20, 40, 31, 6, 4,
	0x8000u | 10, 13, 11, 15, 14, 41, 25, 44, 43, 10, 0
};

extern "C" __declspec(dllexport) Sint16 poly_00096EDA[] = {
	4, 2, 30, 4, 31,
	4, 20, 31, 19, 30,
	4, 19, 37, 20, 38,
	4, 5, 38, 8, 37
};

extern "C" __declspec(dllexport) Sint16 poly_00096F02[] = {
	4, 17, 28, 1, 29,
	4, 16, 35, 9, 34,
	4, 11, 27, 17, 28,
	4, 3, 36, 16, 35
};

extern "C" __declspec(dllexport) NJS_TEX uv_00096F2C[] = {
	{ 1483, -963 },
	{ 1524, -1567 },
	{ 2010, -868 },
	{ 2034, -1403 },
	{ 2541, -785 },
	{ 2547, -1248 },
	{ 2541, -785 },
	{ 2550, -224 },
	{ 2010, -868 },
	{ 1976, -114 },
	{ 1483, -963 },
	{ 1421, -14 },
	{ 1329, -2295 },
	{ 664, -1766 },
	{ 1290, -1649 },
	{ 625, -1120 },
	{ 1251, -1004 },
	{ 654, -404 },
	{ 1192, 10 },
	{ 1176, 255 },
	{ 654, -404 },
	{ 326, -820 },
	{ 625, -1120 },
	{ 0, -1236 },
	{ 664, -1766 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00096F90[] = {
	{ 19, 95 },
	{ 1254, 95 },
	{ 19, -2454 },
	{ 1254, -2454 },
	{ 19, -5004 },
	{ 1254, -5004 },
	{ 19, -7554 },
	{ 1254, -7554 },
	{ 19, -9784 },
	{ 1254, -9784 },
	{ 19, 95 },
	{ 1254, 95 },
	{ 19, -2454 },
	{ 1254, -2454 },
	{ 19, -5004 },
	{ 1254, -5004 },
	{ 19, -7554 },
	{ 1254, -7554 },
	{ 19, -9784 },
	{ 1254, -9784 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00096FE0[] = {
	{ 2294, 255 },
	{ 2294, 0 },
	{ 1721, 255 },
	{ 1721, 0 },
	{ 1147, 255 },
	{ 1147, 0 },
	{ 573, 255 },
	{ 573, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1306, 255 },
	{ 1306, 0 },
	{ 2071, 255 },
	{ 2071, 0 },
	{ 3977, 255 },
	{ 3977, 0 },
	{ 5175, 255 },
	{ 5175, 0 },
	{ 6375, 255 },
	{ 6375, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00097030[] = {
	{ 0, 255 },
	{ 2040, 255 },
	{ 0 },
	{ 2040, 0 },
	{ 2040, 0 },
	{ 0 },
	{ 2040, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 2040, 255 },
	{ 0 },
	{ 2040, 0 },
	{ 2040, 0 },
	{ 0 },
	{ 2040, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00097070[] = {
	{ 1020, 255 },
	{ 1019, -765 },
	{ 0, 255 },
	{ 0, -765 },
	{ 0, -765 },
	{ 0, 255 },
	{ 1019, -765 },
	{ 1020, 255 },
	{ 1020, 255 },
	{ 1019, -765 },
	{ 0, 255 },
	{ 0, -765 },
	{ 0, -765 },
	{ 0, 255 },
	{ 1019, -765 },
	{ 1020, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000970B0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00096E48, NULL, NULL, NULL, uv_00096F2C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00096E82, NULL, NULL, NULL, uv_00096F90, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00096EAE, NULL, NULL, NULL, uv_00096FE0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, poly_00096EDA, NULL, NULL, NULL, uv_00097030, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 4, poly_00096F02, NULL, NULL, NULL, uv_00097070, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00097128[] = {
	{ -562, 61, -3100 },
	{ -354.8928f, 61, -3595 },
	{ -315.3571f, 61, -3612 },
	{ -139.7143f, 61, -3324 },
	{ -303.1429f, 61, -3617 },
	{ -102.7143f, 61, -3374 },
	{ -303.1429f, 2, -3617 },
	{ -102.7143f, 2, -3374 },
	{ -113.7143f, 61, -3364 },
	{ -229.6429f, 61, -3145 },
	{ -562, 0, -3100 },
	{ -562, 61, -3511 },
	{ -249.6429f, 61, -3100 },
	{ -562, 0, -3511 },
	{ -562, 61, -3449 },
	{ -562, 0, -3449 },
	{ -184.6786f, 61, -3234.5f },
	{ -458.4464f, 61, -3553 },
	{ -202.9286f, 2, -3495.5f },
	{ -214.5357f, 61, -3488 },
	{ -202.9286f, 61, -3495.5f },
	{ -246.3035f, 61, -3455.5f },
	{ -313.5625f, 61, -3382.75f },
	{ -378.8214f, 61, -3309 },
	{ -407.8214f, 61, -3276.5f },
	{ -562, 61, -3294.403f },
	{ -531.9103f, 61, -3415.753f },
	{ -495.9108f, 61, -3438.301f },
	{ -404.3046f, 61, -3487.477f },
	{ -309.1982f, 61, -3537.05f },
	{ -271.6464f, 61, -3556.7f },
	{ -259.3356f, 61, -3562.549f },
	{ -405.8214f, 61, -3100 },
	{ -328.7321f, 61, -3188.25f },
	{ -304.2321f, 61, -3227 },
	{ -249.1205f, 61, -3308.625f },
	{ -193.0089f, 61, -3389.75f },
	{ -164.125f, 61, -3426 },
	{ -152.8214f, 61, -3434.75f },
	{ -152.8214f, 2, -3434.75f },
	{ -259.3356f, 2, -3562.549f },
	{ -562, 0, -3294.403f },
	{ -484.9107f, 61, -3188.25f },
	{ -562, 61, -3197.201f },
	{ -562, 0, -3197.201f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00097344[] = {
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.502753f, 0.7639599f, -0.40448f },
	{ 0.5372019f, 0.717694f, -0.443089f },
	{ 0.779144f, 0, -0.6268449f },
	{ 0.771446f, 0, -0.636295f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -1, 0, 0 },
	{ -0.62613f, 0.779719f, 0 },
	{ 0, 1, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -1, 0, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.768344f, 0, -0.640038f },
	{ 0, 1, 0 },
	{ 0.544139f, 0.706014f, -0.453273f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.544132f, 0.709581f, -0.447678f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.545494f, 0.7071069f, -0.449929f },
	{ 0.771446f, 0, -0.636295f },
	{ 0.77223f, 0, -0.635343f },
	{ -1, 0, 0 },
	{ 0, 1, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00097560 = { vertex_00097128, normal_00097344, LengthOfArray<Sint32>(vertex_00097128), meshlist_000970B0, matlist_00096DE4, LengthOfArray<Uint16>(meshlist_000970B0), LengthOfArray<Uint16>(matlist_00096DE4), { -332.3571f, 30.5f, -3358.5f }, 345.7717f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00097588 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00097560, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000975BC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 57, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 56, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00097620[] = {
	4, 24, 25, 26, 14,
	4, 32, 0, 42, 43,
	6, 21, 36, 22, 35, 23, 34,
	6, 23, 27, 22, 28, 21, 29,
	7, 43, 25, 42, 24, 32, 33, 12
};

extern "C" __declspec(dllexport) Sint16 poly_00097660[] = {
	0x8000u | 10, 12, 9, 33, 34, 24, 23, 26, 27, 14, 11,
	0x8000u | 10, 3, 8, 36, 37, 21, 19, 29, 30, 1, 2
};

extern "C" __declspec(dllexport) Sint16 poly_0009768C[] = {
	0x8000u | 10, 5, 7, 38, 39, 20, 18, 31, 40, 4, 6,
	0x8000u | 10, 11, 13, 14, 15, 25, 41, 43, 44, 0, 10
};

extern "C" __declspec(dllexport) Sint16 poly_000976B8[] = {
	4, 4, 31, 2, 30,
	4, 19, 30, 20, 31,
	4, 20, 38, 19, 37,
	4, 8, 37, 5, 38
};

extern "C" __declspec(dllexport) Sint16 poly_000976E0[] = {
	4, 1, 29, 17, 28,
	4, 9, 34, 16, 35,
	4, 17, 28, 11, 27,
	4, 16, 35, 3, 36
};

extern "C" __declspec(dllexport) NJS_TEX uv_00097708[] = {
	{ 1259, -939 },
	{ 529, -521 },
	{ 244, -1102 },
	{ 0, -1140 },
	{ 1872, -240 },
	{ 1196, 255 },
	{ 1227, -342 },
	{ 863, -133 },
	{ 1344, -2167 },
	{ 1800, -2072 },
	{ 1303, -1663 },
	{ 1835, -1570 },
	{ 1273, -1161 },
	{ 1877, -1069 },
	{ 1273, -1161 },
	{ 322, -1307 },
	{ 1303, -1663 },
	{ 549, -1794 },
	{ 1344, -2167 },
	{ 792, -2294 },
	{ 863, -133 },
	{ 529, -521 },
	{ 1227, -342 },
	{ 1259, -939 },
	{ 1872, -240 },
	{ 1904, -836 },
	{ 2550, -734 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00097774[] = {
	{ 1254, 95 },
	{ 19, 95 },
	{ 1254, -2454 },
	{ 19, -2454 },
	{ 1254, -5004 },
	{ 19, -5004 },
	{ 1254, -7554 },
	{ 19, -7554 },
	{ 1254, -9784 },
	{ 19, -9784 },
	{ 1254, 95 },
	{ 19, 95 },
	{ 1254, -2454 },
	{ 19, -2454 },
	{ 1254, -5004 },
	{ 19, -5004 },
	{ 1254, -7554 },
	{ 19, -7554 },
	{ 1254, -9784 },
	{ 19, -9784 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000977C4[] = {
	{ 2294, 0 },
	{ 2294, 255 },
	{ 1721, 0 },
	{ 1721, 255 },
	{ 1147, 0 },
	{ 1147, 255 },
	{ 573, 0 },
	{ 573, 255 },
	{ 0 },
	{ 0, 255 },
	{ 5067, 0 },
	{ 5067, 255 },
	{ 4303, 0 },
	{ 4303, 255 },
	{ 2396, 0 },
	{ 2396, 255 },
	{ 1197, 0 },
	{ 1197, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00097814[] = {
	{ 0 },
	{ 2040, 0 },
	{ 0, 255 },
	{ 2040, 255 },
	{ 2040, 255 },
	{ 0, 255 },
	{ 2040, 0 },
	{ 0 },
	{ 0 },
	{ 2040, 0 },
	{ 0, 255 },
	{ 2040, 255 },
	{ 2040, 255 },
	{ 0, 255 },
	{ 2040, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00097854[] = {
	{ 0, 255 },
	{ 0, -765 },
	{ 1020, 255 },
	{ 1019, -765 },
	{ 1019, -765 },
	{ 1020, 255 },
	{ 0, -765 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, -765 },
	{ 1020, 255 },
	{ 1019, -765 },
	{ 1019, -765 },
	{ 1020, 255 },
	{ 0, -765 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00097894[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_00097620, NULL, NULL, NULL, uv_00097708, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00097660, NULL, NULL, NULL, uv_00097774, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0009768C, NULL, NULL, NULL, uv_000977C4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, poly_000976B8, NULL, NULL, NULL, uv_00097814, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 4, poly_000976E0, NULL, NULL, NULL, uv_00097854, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009790C[] = {
	{ 844.0002f, 61, -3100 },
	{ 636.8931f, 61, -3595 },
	{ 597.3575f, 61, -3612 },
	{ 421.7146f, 61, -3324 },
	{ 585.1432f, 61, -3617 },
	{ 384.7147f, 61, -3374 },
	{ 585.1432f, 2, -3617 },
	{ 384.7147f, 2, -3374 },
	{ 395.7147f, 61, -3364 },
	{ 511.6432f, 61, -3145 },
	{ 844.0002f, 0, -3100 },
	{ 844.0003f, 61, -3511 },
	{ 531.6431f, 61, -3100 },
	{ 844.0003f, 0, -3511 },
	{ 844.0003f, 61, -3449 },
	{ 844.0003f, 0, -3449 },
	{ 466.6789f, 61, -3234.5f },
	{ 740.4467f, 61, -3553 },
	{ 484.9289f, 2, -3495.5f },
	{ 496.5361f, 61, -3488 },
	{ 484.9289f, 61, -3495.5f },
	{ 528.3039f, 61, -3455.5f },
	{ 595.5628f, 61, -3382.75f },
	{ 660.8217f, 61, -3309 },
	{ 689.8217f, 61, -3276.5f },
	{ 844.0003f, 61, -3294.403f },
	{ 813.9108f, 61, -3415.753f },
	{ 777.9112f, 61, -3438.301f },
	{ 686.305f, 61, -3487.477f },
	{ 591.1985f, 61, -3537.05f },
	{ 553.6468f, 61, -3556.7f },
	{ 541.336f, 61, -3562.549f },
	{ 687.8217f, 61, -3100 },
	{ 610.7324f, 61, -3188.25f },
	{ 586.2324f, 61, -3227 },
	{ 531.1209f, 61, -3308.625f },
	{ 475.0092f, 61, -3389.75f },
	{ 446.1253f, 61, -3426 },
	{ 434.8218f, 61, -3434.75f },
	{ 434.8218f, 2, -3434.75f },
	{ 541.336f, 2, -3562.549f },
	{ 844.0003f, 0, -3294.403f },
	{ 766.911f, 61, -3188.25f },
	{ 844.0003f, 61, -3197.201f },
	{ 844.0003f, 0, -3197.201f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00097B28[] = {
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.502753f, 0.7639599f, -0.40448f },
	{ -0.5372019f, 0.717694f, -0.443089f },
	{ -0.779144f, 0, -0.6268449f },
	{ -0.771446f, 0, -0.636295f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 1, 0, 0.000001f },
	{ 0.62613f, 0.779719f, 0 },
	{ 0, 1, 0 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 1, 0, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.768344f, 0, -0.640038f },
	{ 0, 1, 0 },
	{ -0.544139f, 0.706014f, -0.453273f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.544132f, 0.709581f, -0.447678f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.545494f, 0.7071069f, -0.449929f },
	{ -0.771446f, 0, -0.636295f },
	{ -0.77223f, 0, -0.635343f },
	{ 1, 0, 0 },
	{ 0, 1, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 1, 0, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00097D44 = { vertex_0009790C, normal_00097B28, LengthOfArray<Sint32>(vertex_0009790C), meshlist_00097894, matlist_000975BC, LengthOfArray<Uint16>(meshlist_00097894), LengthOfArray<Uint16>(matlist_000975BC), { 614.3575f, 30.5f, -3358.5f }, 345.7717f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00097D6C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00097D44, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00097DA0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 57, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00097DF0[] = {
	0x8000u | 8, 7, 0, 23, 24, 15, 17, 8, 1,
	0x8000u | 8, 9, 3, 26, 27, 18, 19, 10, 11
};

extern "C" __declspec(dllexport) Sint16 poly_00097E14[] = {
	0x8000u | 6, 6, 4, 21, 22, 14, 16,
	4, 2, 16, 5, 14
};

extern "C" __declspec(dllexport) Sint16 poly_00097E2C[] = {
	4, 15, 23, 16, 22,
	4, 8, 15, 2, 16,
	4, 4, 22, 7, 23
};

extern "C" __declspec(dllexport) Sint16 poly_00097E4A[] = {
	6, 24, 17, 25, 20, 26, 18,
	6, 26, 9, 25, 12, 24, 0,
	6, 17, 1, 20, 13, 18, 10
};

extern "C" __declspec(dllexport) NJS_TEX uv_00097E74[] = {
	{ 19, 95 },
	{ 1254, 95 },
	{ 19, -3091 },
	{ 1254, -3091 },
	{ 19, -6279 },
	{ 1254, -6279 },
	{ 19, -9784 },
	{ 1254, -9784 },
	{ 19, 95 },
	{ 1254, 95 },
	{ 19, -3091 },
	{ 1254, -3091 },
	{ 19, -6279 },
	{ 1254, -6279 },
	{ 19, -9784 },
	{ 1254, -9784 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00097EB4[] = {
	{ 1529, 255 },
	{ 1529, 255 },
	{ 566, 255 },
	{ 566, 255 },
	{ -392, 255 },
	{ -392, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00097EDC[] = {
	{ 0, 255 },
	{ 2040, 255 },
	{ 0 },
	{ 2040, 0 },
	{ 0, 255 },
	{ 2040, 255 },
	{ 0 },
	{ 2040, 0 },
	{ 2040, 0 },
	{ 0 },
	{ 2040, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00097F0C[] = {
	{ 0, -133 },
	{ 0, -521 },
	{ 764, -180 },
	{ 764, -614 },
	{ 1529, -226 },
	{ 1529, -708 },
	{ 1529, -226 },
	{ 1529, 255 },
	{ 764, -180 },
	{ 764, 255 },
	{ 0, -133 },
	{ 0, 255 },
	{ 0, -521 },
	{ 0, -903 },
	{ 764, -614 },
	{ 764, -1089 },
	{ 1529, -708 },
	{ 1529, -1274 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00097F54[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00097DF0, NULL, NULL, NULL, uv_00097E74, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00097E14, NULL, NULL, NULL, uv_00097EB4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_00097E2C, NULL, NULL, NULL, uv_00097EDC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_00097E4A, NULL, NULL, NULL, uv_00097F0C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00097FB4[] = {
	{ 141.0143f, 61, -3324 },
	{ -139.7143f, 61, -3324 },
	{ -102.7143f, 61, -3374 },
	{ 141.0143f, 61, -3100 },
	{ 141.0143f, 61, -3374 },
	{ -102.7143f, 2, -3374 },
	{ 141.0143f, 2, -3374 },
	{ 141.0143f, 61, -3364 },
	{ -113.7143f, 61, -3364 },
	{ 141.0143f, 61, -3145 },
	{ -229.6429f, 61, -3145 },
	{ -249.6429f, 61, -3100 },
	{ 141.0143f, 61, -3234.5f },
	{ -184.6786f, 61, -3234.5f },
	{ -29, 2, -3374 },
	{ -34.5f, 61, -3364 },
	{ -29, 61, -3374 },
	{ -47.5f, 61, -3324 },
	{ -92.46427f, 61, -3145 },
	{ -102.4643f, 61, -3100 },
	{ -69.98214f, 61, -3234.5f },
	{ 55.85714f, 2, -3374 },
	{ 55.85714f, 61, -3374 },
	{ 53.10714f, 61, -3364 },
	{ 46.60714f, 61, -3324 },
	{ 35.36607f, 61, -3234.5f },
	{ 24.12501f, 61, -3145 },
	{ 19.12501f, 61, -3100 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00098104[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0.837114f, -0.547029f },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00098254 = { vertex_00097FB4, normal_00098104, LengthOfArray<Sint32>(vertex_00097FB4), meshlist_00097F54, matlist_00097DA0, LengthOfArray<Uint16>(meshlist_00097F54), LengthOfArray<Uint16>(matlist_00097DA0), { -54.31428f, 31.5f, -3237 }, 238.5838f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009827C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00098254, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000982B0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 57, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00098300[] = {
	0x8000u | 8, 0, 7, 24, 23, 17, 15, 1, 8,
	0x8000u | 8, 3, 9, 27, 26, 19, 18, 11, 10
};

extern "C" __declspec(dllexport) Sint16 poly_00098324[] = {
	0x8000u | 6, 4, 6, 22, 21, 16, 14,
	4, 5, 14, 2, 16
};

extern "C" __declspec(dllexport) Sint16 poly_0009833C[] = {
	4, 16, 22, 15, 23,
	4, 2, 16, 8, 15,
	4, 7, 23, 4, 22
};

extern "C" __declspec(dllexport) Sint16 poly_0009835A[] = {
	6, 17, 24, 20, 25, 18, 26,
	6, 18, 10, 20, 13, 17, 1,
	6, 24, 0, 25, 12, 26, 9
};

extern "C" __declspec(dllexport) NJS_TEX uv_00098384[] = {
	{ 1254, 95 },
	{ 19, 95 },
	{ 1254, -3091 },
	{ 19, -3091 },
	{ 1254, -6279 },
	{ 19, -6279 },
	{ 1254, -9784 },
	{ 19, -9784 },
	{ 1254, 95 },
	{ 19, 95 },
	{ 1254, -3091 },
	{ 19, -3091 },
	{ 1254, -6279 },
	{ 19, -6279 },
	{ 1254, -9784 },
	{ 19, -9784 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000983C4[] = {
	{ 1529, 255 },
	{ 1529, 255 },
	{ 566, 255 },
	{ 566, 255 },
	{ -392, 255 },
	{ -392, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000983EC[] = {
	{ 0 },
	{ 2040, 0 },
	{ 0, 255 },
	{ 2040, 255 },
	{ 0 },
	{ 2040, 0 },
	{ 0, 255 },
	{ 2040, 255 },
	{ 2040, 255 },
	{ 0, 255 },
	{ 2040, 0 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009841C[] = {
	{ 0, -521 },
	{ 0, -133 },
	{ 764, -614 },
	{ 764, -180 },
	{ 1529, -708 },
	{ 1529, -226 },
	{ 1529, -708 },
	{ 1529, -1274 },
	{ 764, -614 },
	{ 764, -1089 },
	{ 0, -521 },
	{ 0, -903 },
	{ 0, -133 },
	{ 0, 255 },
	{ 764, -180 },
	{ 764, 255 },
	{ 1529, -226 },
	{ 1529, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00098464[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00098300, NULL, NULL, NULL, uv_00098384, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00098324, NULL, NULL, NULL, uv_000983C4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_0009833C, NULL, NULL, NULL, uv_000983EC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_0009835A, NULL, NULL, NULL, uv_0009841C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000984C4[] = {
	{ 140.986f, 61, -3324 },
	{ 421.7146f, 61, -3324 },
	{ 384.7147f, 61, -3374 },
	{ 140.986f, 61, -3100 },
	{ 140.986f, 61, -3374 },
	{ 384.7147f, 2, -3374 },
	{ 140.986f, 2, -3374 },
	{ 140.986f, 61, -3364 },
	{ 395.7147f, 61, -3364 },
	{ 140.986f, 61, -3145 },
	{ 511.6432f, 61, -3145 },
	{ 531.6431f, 61, -3100 },
	{ 140.986f, 61, -3234.5f },
	{ 466.6789f, 61, -3234.5f },
	{ 311.0003f, 2, -3374 },
	{ 316.5003f, 61, -3364 },
	{ 311.0003f, 61, -3374 },
	{ 329.5003f, 61, -3324 },
	{ 374.4646f, 61, -3145 },
	{ 384.4646f, 61, -3100 },
	{ 351.9825f, 61, -3234.5f },
	{ 226.1432f, 2, -3374 },
	{ 226.1432f, 61, -3374 },
	{ 228.8932f, 61, -3364 },
	{ 235.3932f, 61, -3324 },
	{ 246.6342f, 61, -3234.5f },
	{ 257.8753f, 61, -3145 },
	{ 262.8753f, 61, -3100 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00098614[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0.837114f, -0.547029f },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00098764 = { vertex_000984C4, normal_00098614, LengthOfArray<Sint32>(vertex_000984C4), meshlist_00098464, matlist_000982B0, LengthOfArray<Uint16>(meshlist_00098464), LengthOfArray<Uint16>(matlist_000982B0), { 336.3146f, 31.5f, -3237 }, 238.5838f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009878C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00098764, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000987C0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000987E8[] = {
	0x8000u | 7, 26, 16, 28, 27, 25, 20, 17,
	0x8000u | 18, 15, 26, 30, 28, 14, 25, 13, 17, 12, 18, 11, 21, 23, 24, 10, 19, 9, 8
};

extern "C" __declspec(dllexport) Sint16 poly_0009881E[] = {
	4, 1, 0, 9, 8,
	4, 2, 1, 10, 9,
	4, 3, 22, 11, 23,
	0x8000u | 6, 5, 13, 4, 12, 3, 11,
	4, 6, 5, 14, 13,
	0x8000u | 6, 7, 15, 29, 30, 6, 14,
	4, 10, 23, 2, 22
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009886C[] = {
	{ 2549, 853 },
	{ 2549, 1275 },
	{ 2240, 853 },
	{ 2232, 1275 },
	{ 1897, 853 },
	{ 1897, 1275 },
	{ 1713, 1275 },
	{ 2549, 0 },
	{ 2549, 853 },
	{ 2265, 57 },
	{ 2240, 853 },
	{ 1897, 131 },
	{ 1897, 853 },
	{ 1713, 853 },
	{ 1713, 1275 },
	{ 1585, 853 },
	{ 1585, 1275 },
	{ 1427, 624 },
	{ 1429, 1275 },
	{ 825, 624 },
	{ 827, 1275 },
	{ 224, 624 },
	{ 225, 1274 },
	{ 55, 828 },
	{ 0, 1274 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000988D0[] = {
	{ 0, 255 },
	{ 765, 255 },
	{ 0 },
	{ 765, 0 },
	{ 0, 255 },
	{ 765, 255 },
	{ 0 },
	{ 765, 0 },
	{ 0, 255 },
	{ 765, 255 },
	{ 0 },
	{ 765, 0 },
	{ 0, 255 },
	{ 0 },
	{ 382, 254 },
	{ 382, 0 },
	{ 765, 255 },
	{ 765, 0 },
	{ 0, 255 },
	{ 765, 255 },
	{ 0 },
	{ 765, 0 },
	{ 0, 255 },
	{ 0 },
	{ 356, 255 },
	{ 332, 0 },
	{ 765, 255 },
	{ 765, 0 },
	{ 765, 0 },
	{ 0 },
	{ 765, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00098950[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000987E8, NULL, NULL, NULL, uv_0009886C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 7, poly_0009881E, NULL, NULL, NULL, uv_000988D0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00098980[] = {
	{ 785.9984f, 0, -4600 },
	{ 771.9985f, 0, -4532 },
	{ 728.9985f, 0, -4501 },
	{ 423.9985f, 0, -4501 },
	{ 383.9985f, 0, -4536 },
	{ 351.9985f, 0, -4536 },
	{ 304.9986f, 0, -4426 },
	{ 139.9986f, 0, -4406 },
	{ 785.9984f, 25, -4600 },
	{ 771.9985f, 25, -4532 },
	{ 728.9985f, 25, -4501 },
	{ 423.9985f, 25, -4501 },
	{ 383.9985f, 25, -4536 },
	{ 351.9985f, 40, -4536 },
	{ 304.9986f, 40, -4426 },
	{ 139.9986f, 40, -4406 },
	{ 139.9985f, 40, -4600 },
	{ 351.9985f, 40, -4600 },
	{ 383.9985f, 25, -4600 },
	{ 728.9984f, 25, -4600 },
	{ 305.1225f, 40, -4600 },
	{ 423.7223f, 25, -4600 },
	{ 576.4985f, 0, -4501 },
	{ 576.4985f, 25, -4501 },
	{ 576.3604f, 25, -4600 },
	{ 305.0605f, 40, -4536 },
	{ 139.9985f, 40, -4536 },
	{ 220.1114f, 40, -4600 },
	{ 218.5187f, 40, -4536 },
	{ 217.1262f, 0, -4415.349f },
	{ 211.9095f, 40, -4414.716f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00098AF4[] = {
	{ 0.979457f, 0, 0.201652f },
	{ 0.839408f, 0, 0.543501f },
	{ 0.307265f, 0, 0.951624f },
	{ -0.351727f, 0, 0.936103f },
	{ -0.351727f, 0, 0.936103f },
	{ 0.550949f, 0, 0.834539f },
	{ 0.6002499f, 0, 0.799812f },
	{ 0.120329f, 0, 0.992734f },
	{ 0.738675f, 0.656682f, 0.152079f },
	{ 0.649288f, 0.633788f, 0.420402f },
	{ 0.235054f, 0.644044f, 0.727981f },
	{ -0.271468f, 0.6358449f, 0.722499f },
	{ -0.074899f, 0.756153f, 0.650094f },
	{ 0.423722f, 0.834952f, 0.351162f },
	{ 0.475614f, 0.610054f, 0.633739f },
	{ 0.08841199f, 0.678333f, 0.729416f },
	{ 0, 1, 0 },
	{ 0.217418f, 0.976079f, 0 },
	{ 0.217418f, 0.976079f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.120331f, 0, 0.992734f },
	{ 0.08508699f, 0.707106f, 0.701969f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00098C68 = { vertex_00098980, normal_00098AF4, LengthOfArray<Sint32>(vertex_00098980), meshlist_00098950, matlist_000987C0, LengthOfArray<Uint16>(meshlist_00098950), LengthOfArray<Uint16>(matlist_000987C0), { 462.9984f, 20, -4503 }, 337.2506f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00098C90 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00098C68, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00098CC4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00098CEC[] = {
	6, 3, 2, 1, 0, 9, 8,
	6, 7, 3, 5, 1, 11, 9,
	6, 2, 6, 0, 4, 8, 10
};

extern "C" __declspec(dllexport) Sint16 poly_00098D16[] = {
	4, 7, 6, 3, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_00098D20[] = {
	{ 254, 60 },
	{ 254, 194 },
	{ 173, 51 },
	{ 173, 203 },
	{ 0, 30 },
	{ 0, 224 },
	{ 254, 0 },
	{ 254, 60 },
	{ 173, 0 },
	{ 173, 51 },
	{ 0 },
	{ 0, 30 },
	{ 254, 194 },
	{ 254, 255 },
	{ 173, 203 },
	{ 173, 255 },
	{ 0, 224 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00098D68[] = {
	{ 0, 255 },
	{ 0, -255 },
	{ 254, 255 },
	{ 254, -255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00098D78[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00098CEC, NULL, NULL, NULL, uv_00098D20, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00098D16, NULL, NULL, NULL, uv_00098D68, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00098DA8[] = {
	{ -858, -14, 1207 },
	{ -858, -14, 1266 },
	{ -851, 0, 1207 },
	{ -851, 0, 1266 },
	{ -832, -14, 1207 },
	{ -832, -14, 1266 },
	{ -828, 0, 1207 },
	{ -828, 0, 1266 },
	{ -858, -63, 1207 },
	{ -858, -63, 1266 },
	{ -842, -71, 1207 },
	{ -842, -71, 1266 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00098E38[] = {
	{ -0.732137f, 0.172834f, -0.658865f },
	{ -0.732137f, 0.172834f, 0.658865f },
	{ -0.418309f, 0.676838f, -0.605729f },
	{ -0.418309f, 0.676838f, 0.605729f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0.772196f, -0.635385f },
	{ 0, 0.772196f, 0.635385f },
	{ -0.611137f, 0, -0.7915249f },
	{ -0.611137f, 0, 0.7915249f },
	{ 0, 0, -1 },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00098EC8 = { vertex_00098DA8, normal_00098E38, LengthOfArray<Sint32>(vertex_00098DA8), meshlist_00098D78, matlist_00098CC4, LengthOfArray<Uint16>(meshlist_00098D78), LengthOfArray<Uint16>(matlist_00098CC4), { -843, -35.5f, 1236.5f }, 46.15734f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00098EF0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00098EC8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00098F24[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 44, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00098F4C[] = {
	4, 9, 8, 1, 0,
	4, 1, 0, 5, 4,
	6, 7, 6, 3, 2, 11, 10,
	4, 21, 20, 13, 12,
	4, 13, 12, 17, 16,
	6, 19, 18, 15, 14, 23, 22
};

extern "C" __declspec(dllexport) Sint16 poly_00098F90[] = {
	0x8000u | 5, 5, 1, 3, 9, 11,
	3, 5, 7, 3,
	3, 4, 0, 6,
	0x8000u | 5, 6, 2, 0, 10, 8,
	0x8000u | 5, 17, 13, 15, 21, 23,
	3, 17, 19, 15,
	3, 16, 12, 18,
	0x8000u | 5, 18, 14, 12, 22, 20
};

extern "C" __declspec(dllexport) NJS_TEX uv_00098FE0[] = {
	{ 209, -593 },
	{ 109, -593 },
	{ 209, 243 },
	{ 109, 243 },
	{ 209, -1262 },
	{ 109, -1262 },
	{ 209, -593 },
	{ 109, -593 },
	{ 209, -1262 },
	{ 109, -1262 },
	{ 209, -593 },
	{ 109, -593 },
	{ 209, 243 },
	{ 109, 243 },
	{ 209, -593 },
	{ 109, -593 },
	{ 209, 243 },
	{ 109, 243 },
	{ 209, -1262 },
	{ 109, -1262 },
	{ 209, -593 },
	{ 109, -593 },
	{ 209, -1262 },
	{ 109, -1262 },
	{ 209, -593 },
	{ 109, -593 },
	{ 209, 243 },
	{ 109, 243 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00099050[] = {
	{ 6120, 255 },
	{ 3400, 255 },
	{ 3431, 0 },
	{ 0, 255 },
	{ 0 },
	{ 6120, 255 },
	{ 6120, 0 },
	{ 3431, 0 },
	{ 6120, 255 },
	{ 3400, 255 },
	{ 6120, 0 },
	{ 6120, 0 },
	{ 3431, 0 },
	{ 3400, 255 },
	{ 0 },
	{ 0, 255 },
	{ 6120, 255 },
	{ 3400, 255 },
	{ 3431, 0 },
	{ 0, 255 },
	{ 0 },
	{ 6120, 255 },
	{ 6120, 0 },
	{ 3431, 0 },
	{ 6120, 255 },
	{ 3400, 255 },
	{ 6120, 0 },
	{ 6120, 0 },
	{ 3431, 0 },
	{ 3400, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000990D0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_00098F4C, NULL, NULL, NULL, uv_00098FE0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 8, poly_00098F90, NULL, NULL, NULL, uv_00099050, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00099100[] = {
	{ -752, 47, 1186 },
	{ -752, 47, 1196 },
	{ -753, 51, 1186 },
	{ -753, 51, 1196 },
	{ -699, 54, 1186 },
	{ -699, 54, 1196 },
	{ -700, 58, 1186 },
	{ -700, 58, 1196 },
	{ -809, 12, 1186 },
	{ -809, 12, 1196 },
	{ -811, 15, 1186 },
	{ -811, 15, 1196 },
	{ -752, 47, 1276 },
	{ -752, 47, 1286 },
	{ -753, 51, 1276 },
	{ -753, 51, 1286 },
	{ -699, 54, 1276 },
	{ -699, 54, 1286 },
	{ -700, 58, 1276 },
	{ -700, 58, 1286 },
	{ -809, 12, 1276 },
	{ -809, 12, 1286 },
	{ -811, 15, 1276 },
	{ -811, 15, 1286 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00099220[] = {
	{ 0.218482f, -0.615689f, -0.757095f },
	{ 0.218482f, -0.615689f, 0.757095f },
	{ -0.252159f, 0.7051989f, -0.662654f },
	{ -0.252159f, 0.7051989f, 0.662654f },
	{ 0.09599499f, -0.726822f, -0.680084f },
	{ 0.09599499f, -0.726822f, 0.680084f },
	{ -0.0893f, 0.67613f, -0.731351f },
	{ -0.0893f, 0.67613f, 0.731351f },
	{ 0.365633f, -0.59546f, -0.71536f },
	{ 0.365633f, -0.59546f, 0.71536f },
	{ -0.37678f, 0.607035f, -0.699675f },
	{ -0.37678f, 0.607035f, 0.699675f },
	{ 0.218482f, -0.615689f, -0.757095f },
	{ 0.218482f, -0.615689f, 0.757095f },
	{ -0.252159f, 0.7051989f, -0.662654f },
	{ -0.252159f, 0.7051989f, 0.662654f },
	{ 0.09599499f, -0.726822f, -0.680084f },
	{ 0.09599499f, -0.726822f, 0.680084f },
	{ -0.0893f, 0.67613f, -0.731351f },
	{ -0.0893f, 0.67613f, 0.731351f },
	{ 0.365633f, -0.59546f, -0.71536f },
	{ 0.365633f, -0.59546f, 0.71536f },
	{ -0.37678f, 0.607035f, -0.699675f },
	{ -0.37678f, 0.607035f, 0.699675f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00099340 = { vertex_00099100, normal_00099220, LengthOfArray<Sint32>(vertex_00099100), meshlist_000990D0, matlist_00098F24, LengthOfArray<Uint16>(meshlist_000990D0), LengthOfArray<Uint16>(matlist_00098F24), { -755, 35, 1236 }, 75.0733f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00099368 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00099340, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009939C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000993C4[] = {
	0x8000u | 10, 0, 9, 1, 8, 2, 7, 3, 6, 4, 5,
	0x8000u | 10, 19, 10, 18, 11, 17, 12, 16, 13, 15, 14
};

extern "C" __declspec(dllexport) Sint16 poly_000993F0[] = {
	0x8000u | 14, 10, 0, 11, 1, 12, 2, 13, 3, 14, 4, 15, 5, 16, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_00099410[] = {
	{ 132, -43 },
	{ 132, 125 },
	{ 320, -123 },
	{ 320, 194 },
	{ 1026, -195 },
	{ 983, 251 },
	{ 1323, -133 },
	{ 1201, 198 },
	{ 1396, -43 },
	{ 1330, 151 },
	{ 132, 125 },
	{ 132, -43 },
	{ 320, 194 },
	{ 320, -123 },
	{ 983, 251 },
	{ 1026, -195 },
	{ 1201, 198 },
	{ 1323, -133 },
	{ 1330, 151 },
	{ 1396, -43 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00099460[] = {
	{ 255, -255 },
	{ 0, -255 },
	{ 255, -193 },
	{ 0, -193 },
	{ 255, -18 },
	{ 0, -18 },
	{ 255, 60 },
	{ 0, 60 },
	{ 255, 110 },
	{ 0, 110 },
	{ 255, 215 },
	{ 0, 215 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00099498[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000993C4, NULL, NULL, NULL, uv_00099410, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000993F0, NULL, NULL, NULL, uv_00099460, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000994C8[] = {
	{ 559.5f, -100.5013f, 1146.5f },
	{ 572.5f, -88.50137f, 1146.5f },
	{ 621, -77.50147f, 1146.5f },
	{ 641.5f, -87.00153f, 1146.5f },
	{ 646.5f, -100.5015f, 1146.5f },
	{ 641.9999f, -130.0015f, 1146.5f },
	{ 632.9999f, -137.0015f, 1146.5f },
	{ 617.9999f, -145.0015f, 1146.5f },
	{ 572.4999f, -136.5014f, 1146.5f },
	{ 559.5f, -126.0013f, 1146.5f },
	{ 559.5f, -100.5013f, 1196.5f },
	{ 572.5f, -88.50137f, 1196.5f },
	{ 621, -77.50147f, 1196.5f },
	{ 641.5f, -87.00153f, 1196.5f },
	{ 646.5f, -100.5015f, 1196.5f },
	{ 641.9999f, -130.0015f, 1196.5f },
	{ 632.9999f, -137.0015f, 1196.5f },
	{ 617.9999f, -145.0015f, 1196.5f },
	{ 572.4999f, -136.5014f, 1196.5f },
	{ 559.5f, -126.0013f, 1196.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000995B8[] = {
	{ -0.380701f, 0.412429f, -0.827628f },
	{ -0.352429f, 0.670031f, -0.653339f },
	{ 0.080781f, 0.763119f, -0.641189f },
	{ 0.570142f, 0.526657f, -0.630532f },
	{ 0.751848f, 0.076699f, -0.65486f },
	{ 0.6680689f, -0.391941f, -0.632508f },
	{ 0.286994f, -0.368994f, -0.884012f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.380701f, 0.412429f, 0.827628f },
	{ -0.352429f, 0.670031f, 0.653339f },
	{ 0.080781f, 0.763119f, 0.641189f },
	{ 0.570142f, 0.526657f, 0.630532f },
	{ 0.751848f, 0.076699f, 0.65486f },
	{ 0.6680689f, -0.391941f, 0.632508f },
	{ 0.286994f, -0.368994f, 0.884012f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000996A8 = { vertex_000994C8, normal_000995B8, LengthOfArray<Sint32>(vertex_000994C8), meshlist_00099498, matlist_0009939C, LengthOfArray<Uint16>(meshlist_00099498), LengthOfArray<Uint16>(matlist_0009939C), { 603, -111.2515f, 1171.5f }, 50.1722f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000996D0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000996A8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00099704[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009972C[] = {
	6, 2, 3, 1, 0, 5, 4,
	6, 8, 4, 6, 0, 7, 3,
	6, 11, 8, 9, 6, 10, 7,
	6, 10, 13, 9, 12, 11, 14
};

extern "C" __declspec(dllexport) Sint16 poly_00099764[] = {
	0x8000u | 6, 10, 13, 7, 15, 3, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_00099774[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 87 },
	{ 0, 87 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 87 },
	{ 255, 87 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 87 },
	{ 255, 87 },
	{ 0 },
	{ 255, 0 },
	{ 255, 0 },
	{ 0 },
	{ 255, 87 },
	{ 0, 87 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000997D4[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 123 },
	{ 255, 123 },
	{ 0 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000997EC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0009972C, NULL, NULL, NULL, uv_00099774, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00099764, NULL, NULL, NULL, uv_000997D4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009981C[] = {
	{ 610.6734f, -94.2948f, 1135.529f },
	{ 610.6734f, -107.7048f, 1135.529f },
	{ 607.6561f, -105.8945f, 1130.698f },
	{ 607.6561f, -96.10516f, 1130.698f },
	{ 610.6734f, -94.2948f, 1146.86f },
	{ 610.6734f, -107.7048f, 1146.86f },
	{ 600.2433f, -89.0798f, 1135.529f },
	{ 600.0422f, -92.2982f, 1130.698f },
	{ 600.2433f, -89.0798f, 1146.86f },
	{ 589.0684f, -94.2948f, 1135.529f },
	{ 591.8845f, -96.10516f, 1130.698f },
	{ 589.0684f, -94.2948f, 1146.86f },
	{ 589.0684f, -107.7048f, 1135.529f },
	{ 591.8845f, -105.8945f, 1130.698f },
	{ 589.0684f, -107.7048f, 1146.86f },
	{ 600.0422f, -109.7014f, 1130.698f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000998DC[] = {
	{ 0.816361f, 0.503619f, -0.282707f },
	{ 0.9694f, 0, -0.245486f },
	{ 0.465477f, 0, -0.88506f },
	{ 0.476421f, 0.296863f, -0.827584f },
	{ 0.850651f, 0.525731f, 0 },
	{ 1, 0, 0 },
	{ 0.015494f, 0.962811f, -0.26973f },
	{ 0.002127f, 0.563444f, -0.826152f },
	{ 0.01351f, 0.999909f, 0 },
	{ -0.8113509f, 0.5170209f, -0.272763f },
	{ -0.484774f, 0.307941f, -0.818637f },
	{ -0.843471f, 0.537175f, 0 },
	{ -0.972752f, 0, -0.23185f },
	{ -0.482304f, 0, -0.876004f },
	{ -1, 0, 0 },
	{ 0, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009999C = { vertex_0009981C, normal_000998DC, LengthOfArray<Sint32>(vertex_0009981C), meshlist_000997EC, matlist_00099704, LengthOfArray<Uint16>(meshlist_000997EC), LengthOfArray<Uint16>(matlist_00099704), { 599.8709f, -99.39061f, 1138.779f }, 13.49071f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000999C4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009999C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000999F8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00099A20[] = {
	6, 2, 3, 1, 0, 5, 4,
	6, 8, 4, 6, 0, 7, 3,
	6, 7, 10, 6, 9, 8, 11,
	6, 10, 13, 9, 12, 11, 14
};

extern "C" __declspec(dllexport) Sint16 poly_00099A58[] = {
	0x8000u | 6, 10, 13, 7, 15, 3, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_00099A68[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 87 },
	{ 0, 87 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 87 },
	{ 255, 87 },
	{ 0 },
	{ 255, 0 },
	{ 255, 0 },
	{ 0 },
	{ 255, 87 },
	{ 0, 87 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 87 },
	{ 0, 87 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00099AC8[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 123 },
	{ 255, 123 },
	{ 0 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00099AE0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00099A20, NULL, NULL, NULL, uv_00099A68, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00099A58, NULL, NULL, NULL, uv_00099AC8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00099B10[] = {
	{ 610.6745f, -94.2948f, 358.0288f },
	{ 610.6745f, -107.7048f, 358.0288f },
	{ 607.6572f, -105.8945f, 353.1976f },
	{ 607.6572f, -96.10516f, 353.1976f },
	{ 610.6745f, -94.2948f, 369.36f },
	{ 610.6745f, -107.7048f, 369.36f },
	{ 600.2445f, -89.0798f, 358.0288f },
	{ 600.0433f, -92.2982f, 353.1976f },
	{ 600.2445f, -89.0798f, 369.36f },
	{ 589.0695f, -94.2948f, 358.0288f },
	{ 591.8856f, -96.10516f, 353.1976f },
	{ 589.0695f, -94.2948f, 369.36f },
	{ 589.0695f, -107.7048f, 358.0288f },
	{ 591.8856f, -105.8945f, 353.1976f },
	{ 589.0695f, -107.7048f, 369.36f },
	{ 600.0433f, -109.7014f, 353.1976f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00099BD0[] = {
	{ 0.816361f, 0.503619f, -0.282706f },
	{ 0.9694f, 0, -0.245485f },
	{ 0.465478f, 0, -0.885059f },
	{ 0.476423f, 0.296864f, -0.827583f },
	{ 0.850651f, 0.525731f, 0 },
	{ 1, 0, 0 },
	{ 0.015494f, 0.9628119f, -0.269729f },
	{ 0.002127f, 0.563445f, -0.826151f },
	{ 0.01351f, 0.999909f, 0 },
	{ -0.8113509f, 0.5170209f, -0.272761f },
	{ -0.484775f, 0.307942f, -0.8186359f },
	{ -0.843471f, 0.537175f, 0 },
	{ -0.972752f, 0, -0.231849f },
	{ -0.482305f, 0, -0.876004f },
	{ -1, 0, 0 },
	{ 0, 0, -1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00099C90 = { vertex_00099B10, normal_00099BD0, LengthOfArray<Sint32>(vertex_00099B10), meshlist_00099AE0, matlist_000999F8, LengthOfArray<Uint16>(meshlist_00099AE0), LengthOfArray<Uint16>(matlist_000999F8), { 599.8719f, -99.39061f, 361.2788f }, 13.49073f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_00099CB8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00099C90, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_00099CEC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_00099D14[] = {
	0x8000u | 10, 0, 9, 1, 8, 2, 7, 3, 6, 4, 5,
	0x8000u | 10, 19, 10, 18, 11, 17, 12, 16, 13, 15, 14
};

extern "C" __declspec(dllexport) Sint16 poly_00099D40[] = {
	0x8000u | 14, 10, 0, 11, 1, 12, 2, 13, 3, 14, 4, 15, 5, 16, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_00099D60[] = {
	{ 132, -43 },
	{ 132, 125 },
	{ 320, -123 },
	{ 320, 194 },
	{ 1026, -195 },
	{ 983, 251 },
	{ 1323, -133 },
	{ 1201, 198 },
	{ 1396, -43 },
	{ 1330, 151 },
	{ 132, 125 },
	{ 132, -43 },
	{ 320, 194 },
	{ 320, -123 },
	{ 983, 251 },
	{ 1026, -195 },
	{ 1201, 198 },
	{ 1323, -133 },
	{ 1330, 151 },
	{ 1396, -43 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_00099DB0[] = {
	{ 255, -255 },
	{ 0, -255 },
	{ 255, -193 },
	{ 0, -193 },
	{ 255, -18 },
	{ 0, -18 },
	{ 255, 60 },
	{ 0, 60 },
	{ 255, 110 },
	{ 0, 110 },
	{ 255, 215 },
	{ 0, 215 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_00099DE8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00099D14, NULL, NULL, NULL, uv_00099D60, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00099D40, NULL, NULL, NULL, uv_00099DB0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_00099E18[] = {
	{ 559.5001f, -100.5012f, 369 },
	{ 572.5001f, -88.5012f, 369 },
	{ 621.0001f, -77.50128f, 369 },
	{ 641.5001f, -87.00133f, 369 },
	{ 646.5001f, -100.5013f, 369 },
	{ 642, -130.0013f, 369 },
	{ 633, -137.0013f, 369 },
	{ 618, -145.0013f, 369 },
	{ 572.5f, -136.5012f, 369 },
	{ 559.5f, -126.0012f, 369 },
	{ 559.5001f, -100.5012f, 419 },
	{ 572.5001f, -88.5012f, 419 },
	{ 621.0001f, -77.50128f, 419 },
	{ 641.5001f, -87.00133f, 419 },
	{ 646.5001f, -100.5013f, 419 },
	{ 642, -130.0013f, 419 },
	{ 633, -137.0013f, 419 },
	{ 618, -145.0013f, 419 },
	{ 572.5f, -136.5012f, 419 },
	{ 559.5f, -126.0012f, 419 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_00099F08[] = {
	{ -0.380702f, 0.412428f, -0.827629f },
	{ -0.35243f, 0.670031f, -0.653339f },
	{ 0.080781f, 0.76312f, -0.641189f },
	{ 0.570141f, 0.526657f, -0.630532f },
	{ 0.751848f, 0.07669999f, -0.65486f },
	{ 0.6680689f, -0.391941f, -0.632508f },
	{ 0.286995f, -0.368994f, -0.884012f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.380702f, 0.412428f, 0.827629f },
	{ -0.35243f, 0.670031f, 0.653339f },
	{ 0.080781f, 0.76312f, 0.641189f },
	{ 0.570141f, 0.526657f, 0.630532f },
	{ 0.751848f, 0.07669999f, 0.65486f },
	{ 0.6680689f, -0.391941f, 0.632508f },
	{ 0.286995f, -0.368994f, 0.884012f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_00099FF8 = { vertex_00099E18, normal_00099F08, LengthOfArray<Sint32>(vertex_00099E18), meshlist_00099DE8, matlist_00099CEC, LengthOfArray<Uint16>(meshlist_00099DE8), LengthOfArray<Uint16>(matlist_00099CEC), { 603.0001f, -111.2513f, 394 }, 50.17223f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009A020 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00099FF8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009A054[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009A07C[] = {
	6, 2, 3, 1, 0, 5, 4,
	6, 3, 7, 0, 6, 4, 8,
	6, 11, 8, 9, 6, 10, 7,
	6, 10, 13, 9, 12, 11, 14
};

extern "C" __declspec(dllexport) Sint16 poly_0009A0B4[] = {
	0x8000u | 6, 10, 13, 7, 15, 3, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009A0C4[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 87 },
	{ 0, 87 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 87 },
	{ 0, 87 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 87 },
	{ 255, 87 },
	{ 0 },
	{ 255, 0 },
	{ 255, 0 },
	{ 0 },
	{ 255, 87 },
	{ 0, 87 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009A124[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 123 },
	{ 255, 123 },
	{ 0 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009A13C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0009A07C, NULL, NULL, NULL, uv_0009A0C4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0009A0B4, NULL, NULL, NULL, uv_0009A124, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009A16C[] = {
	{ 589.3245f, -94.2948f, 668.4711f },
	{ 589.3245f, -107.7048f, 668.4711f },
	{ 592.3418f, -105.8945f, 673.3023f },
	{ 592.3418f, -96.10516f, 673.3023f },
	{ 589.3245f, -94.2948f, 657.14f },
	{ 589.3245f, -107.7048f, 657.14f },
	{ 599.7545f, -89.0798f, 668.4711f },
	{ 599.9556f, -92.2982f, 673.3023f },
	{ 599.7545f, -89.0798f, 657.14f },
	{ 610.9294f, -94.2948f, 668.4711f },
	{ 608.1133f, -96.10516f, 673.3023f },
	{ 610.9294f, -94.2948f, 657.14f },
	{ 610.9294f, -107.7048f, 668.4711f },
	{ 608.1133f, -105.8945f, 673.3023f },
	{ 610.9294f, -107.7048f, 657.14f },
	{ 599.9556f, -109.7014f, 673.3023f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009A22C[] = {
	{ -0.816361f, 0.503619f, 0.282704f },
	{ -0.9694009f, 0, 0.245484f },
	{ -0.465479f, 0, 0.885059f },
	{ -0.476424f, 0.296865f, 0.8275819f },
	{ -0.850651f, 0.525731f, 0 },
	{ -1, 0, 0 },
	{ -0.015494f, 0.9628119f, 0.269728f },
	{ -0.002127f, 0.563446f, 0.8261499f },
	{ -0.01351f, 0.999909f, 0 },
	{ 0.8113509f, 0.5170209f, 0.27276f },
	{ 0.484777f, 0.307943f, 0.818635f },
	{ 0.843471f, 0.537175f, 0 },
	{ 0.972752f, 0, 0.231848f },
	{ 0.482306f, 0, 0.876003f },
	{ 1, 0, 0 },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009A2EC = { vertex_0009A16C, normal_0009A22C, LengthOfArray<Sint32>(vertex_0009A16C), meshlist_0009A13C, matlist_0009A054, LengthOfArray<Uint16>(meshlist_0009A13C), LengthOfArray<Uint16>(matlist_0009A054), { 600.127f, -99.39061f, 665.2211f }, 13.49073f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009A314 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009A2EC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009A348[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009A35C[] = {
	4, 0, 5, 6, 11,
	4, 1, 0, 7, 6,
	4, 2, 1, 8, 7,
	4, 3, 2, 9, 8,
	4, 4, 3, 10, 9,
	4, 5, 4, 11, 10
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009A398[] = {
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -2804 },
	{ 254, -2804 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -2804 },
	{ 254, -2804 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -2804 },
	{ 254, -2804 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -2804 },
	{ 254, -2804 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -2804 },
	{ 254, -2804 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -2804 },
	{ 254, -2804 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009A3F8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_0009A35C, NULL, NULL, NULL, uv_0009A398, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009A410[] = {
	{ 592.9995f, -96.49978f, 418.4998f },
	{ 599.9995f, -92.9998f, 418.4998f },
	{ 607.4995f, -96.49982f, 418.4998f },
	{ 607.4995f, -105.4998f, 418.4998f },
	{ 599.9995f, -108.9998f, 418.4998f },
	{ 592.9995f, -105.4998f, 418.4998f },
	{ 592.9995f, -96.49978f, 607.3528f },
	{ 599.9995f, -92.9998f, 607.3528f },
	{ 607.4995f, -96.49982f, 607.3528f },
	{ 607.4995f, -105.4998f, 607.3528f },
	{ 599.9995f, -108.9998f, 607.3528f },
	{ 592.9995f, -105.4998f, 607.3528f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009A4A0[] = {
	{ -0.85065f, 0.525732f, 0 },
	{ -0.013508f, 0.999909f, 0 },
	{ 0.843471f, 0.537175f, 0 },
	{ 0.84347f, -0.537176f, 0 },
	{ -0.013512f, -0.999909f, 0 },
	{ -0.850651f, -0.52573f, 0 },
	{ -0.85065f, 0.525732f, 0 },
	{ -0.013508f, 0.999909f, 0 },
	{ 0.843471f, 0.537175f, 0 },
	{ 0.84347f, -0.537176f, 0 },
	{ -0.013512f, -0.999909f, 0 },
	{ -0.850651f, -0.52573f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009A530 = { vertex_0009A410, normal_0009A4A0, LengthOfArray<Sint32>(vertex_0009A410), meshlist_0009A3F8, matlist_0009A348, LengthOfArray<Uint16>(meshlist_0009A3F8), LengthOfArray<Uint16>(matlist_0009A348), { 600.2495f, -100.9998f, 512.9263f }, 94.76485f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009A558 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009A530, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009A58C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009A5B4[] = {
	0x8000u | 10, 0, 9, 1, 8, 2, 7, 3, 6, 4, 5,
	0x8000u | 10, 19, 10, 18, 11, 17, 12, 16, 13, 15, 14
};

extern "C" __declspec(dllexport) Sint16 poly_0009A5E0[] = {
	0x8000u | 14, 10, 0, 11, 1, 12, 2, 13, 3, 14, 4, 15, 5, 16, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009A600[] = {
	{ 132, -43 },
	{ 132, 125 },
	{ 320, -123 },
	{ 320, 194 },
	{ 1026, -195 },
	{ 983, 251 },
	{ 1323, -133 },
	{ 1201, 198 },
	{ 1396, -43 },
	{ 1330, 151 },
	{ 132, 125 },
	{ 132, -43 },
	{ 320, 194 },
	{ 320, -123 },
	{ 983, 251 },
	{ 1026, -195 },
	{ 1201, 198 },
	{ 1323, -133 },
	{ 1330, 151 },
	{ 1396, -43 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009A650[] = {
	{ 255, -255 },
	{ 0, -255 },
	{ 255, -193 },
	{ 0, -193 },
	{ 255, -18 },
	{ 0, -18 },
	{ 255, 60 },
	{ 0, 60 },
	{ 255, 110 },
	{ 0, 110 },
	{ 255, 215 },
	{ 0, 215 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009A688[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0009A5B4, NULL, NULL, NULL, uv_0009A600, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0009A5E0, NULL, NULL, NULL, uv_0009A650, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009A6B8[] = {
	{ 559.5001f, -100.5012f, 607.5f },
	{ 572.5001f, -88.5012f, 607.5f },
	{ 621.0001f, -77.50128f, 607.5f },
	{ 641.5001f, -87.00133f, 607.5f },
	{ 646.5001f, -100.5013f, 607.5f },
	{ 642, -130.0013f, 607.5f },
	{ 633, -137.0013f, 607.5f },
	{ 618, -145.0013f, 607.5f },
	{ 572.5f, -136.5012f, 607.5f },
	{ 559.5f, -126.0012f, 607.5f },
	{ 559.5001f, -100.5012f, 657.5f },
	{ 572.5001f, -88.5012f, 657.5f },
	{ 621.0001f, -77.50128f, 657.5f },
	{ 641.5001f, -87.00133f, 657.5f },
	{ 646.5001f, -100.5013f, 657.5f },
	{ 642, -130.0013f, 657.5f },
	{ 633, -137.0013f, 657.5f },
	{ 618, -145.0013f, 657.5f },
	{ 572.5f, -136.5012f, 657.5f },
	{ 559.5f, -126.0012f, 657.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009A7A8[] = {
	{ -0.380702f, 0.412428f, -0.827629f },
	{ -0.35243f, 0.670031f, -0.653339f },
	{ 0.080781f, 0.76312f, -0.641189f },
	{ 0.570141f, 0.526657f, -0.630532f },
	{ 0.751848f, 0.07669999f, -0.65486f },
	{ 0.6680689f, -0.391941f, -0.632508f },
	{ 0.286995f, -0.368994f, -0.884012f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.380702f, 0.412428f, 0.827629f },
	{ -0.35243f, 0.670031f, 0.653339f },
	{ 0.080781f, 0.76312f, 0.641189f },
	{ 0.570141f, 0.526657f, 0.630532f },
	{ 0.751848f, 0.07669999f, 0.65486f },
	{ 0.6680689f, -0.391941f, 0.632508f },
	{ 0.286995f, -0.368994f, 0.884012f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009A898 = { vertex_0009A6B8, normal_0009A7A8, LengthOfArray<Sint32>(vertex_0009A6B8), meshlist_0009A688, matlist_0009A58C, LengthOfArray<Uint16>(meshlist_0009A688), LengthOfArray<Uint16>(matlist_0009A58C), { 603.0001f, -111.2513f, 632.5f }, 50.17223f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009A8C0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009A898, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009A8F4[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009A91C[] = {
	0x8000u | 10, 0, 9, 1, 8, 2, 7, 3, 6, 4, 5,
	0x8000u | 10, 19, 10, 18, 11, 17, 12, 16, 13, 15, 14
};

extern "C" __declspec(dllexport) Sint16 poly_0009A948[] = {
	0x8000u | 14, 10, 0, 11, 1, 12, 2, 13, 3, 14, 4, 15, 5, 16, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009A968[] = {
	{ 132, -43 },
	{ 132, 125 },
	{ 320, -123 },
	{ 320, 194 },
	{ 1026, -195 },
	{ 983, 251 },
	{ 1323, -133 },
	{ 1201, 198 },
	{ 1396, -43 },
	{ 1330, 151 },
	{ 132, 125 },
	{ 132, -43 },
	{ 320, 194 },
	{ 320, -123 },
	{ 983, 251 },
	{ 1026, -195 },
	{ 1201, 198 },
	{ 1323, -133 },
	{ 1330, 151 },
	{ 1396, -43 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009A9B8[] = {
	{ 255, -255 },
	{ 0, -255 },
	{ 255, -193 },
	{ 0, -193 },
	{ 255, -18 },
	{ 0, -18 },
	{ 255, 60 },
	{ 0, 60 },
	{ 255, 110 },
	{ 0, 110 },
	{ 255, 215 },
	{ 0, 215 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009A9F0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0009A91C, NULL, NULL, NULL, uv_0009A968, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0009A948, NULL, NULL, NULL, uv_0009A9B8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009AA20[] = {
	{ 559.5f, -100.5013f, 1385 },
	{ 572.5f, -88.50137f, 1385 },
	{ 621, -77.50147f, 1385 },
	{ 641.5f, -87.00153f, 1385 },
	{ 646.5f, -100.5015f, 1385 },
	{ 641.9999f, -130.0015f, 1385 },
	{ 632.9999f, -137.0015f, 1385 },
	{ 617.9999f, -145.0015f, 1385 },
	{ 572.4999f, -136.5014f, 1385 },
	{ 559.5f, -126.0013f, 1385 },
	{ 559.5f, -100.5013f, 1435 },
	{ 572.5f, -88.50137f, 1435 },
	{ 621, -77.50147f, 1435 },
	{ 641.5f, -87.00153f, 1435 },
	{ 646.5f, -100.5015f, 1435 },
	{ 641.9999f, -130.0015f, 1435 },
	{ 632.9999f, -137.0015f, 1435 },
	{ 617.9999f, -145.0015f, 1435 },
	{ 572.4999f, -136.5014f, 1435 },
	{ 559.5f, -126.0013f, 1435 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009AB10[] = {
	{ -0.380701f, 0.412429f, -0.827628f },
	{ -0.352429f, 0.670031f, -0.653339f },
	{ 0.080781f, 0.763119f, -0.641189f },
	{ 0.570142f, 0.526657f, -0.630532f },
	{ 0.751848f, 0.076699f, -0.65486f },
	{ 0.6680689f, -0.391941f, -0.632508f },
	{ 0.286994f, -0.368994f, -0.884012f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.380701f, 0.412429f, 0.827628f },
	{ -0.352429f, 0.670031f, 0.653339f },
	{ 0.080781f, 0.763119f, 0.641189f },
	{ 0.570142f, 0.526657f, 0.630532f },
	{ 0.751848f, 0.076699f, 0.65486f },
	{ 0.6680689f, -0.391941f, 0.632508f },
	{ 0.286994f, -0.368994f, 0.884012f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009AC00 = { vertex_0009AA20, normal_0009AB10, LengthOfArray<Sint32>(vertex_0009AA20), meshlist_0009A9F0, matlist_0009A8F4, LengthOfArray<Uint16>(meshlist_0009A9F0), LengthOfArray<Uint16>(matlist_0009A8F4), { 603, -111.2515f, 1410 }, 50.1722f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009AC28 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009AC00, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009AC5C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009AC70[] = {
	4, 0, 5, 6, 11,
	4, 1, 0, 7, 6,
	4, 2, 1, 8, 7,
	4, 3, 2, 9, 8,
	4, 4, 3, 10, 9,
	4, 5, 4, 11, 10
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009ACAC[] = {
	{ 0, 247 },
	{ 128, 247 },
	{ 0, -1777 },
	{ 128, -1777 },
	{ 0, 247 },
	{ 128, 247 },
	{ 0, -1777 },
	{ 128, -1777 },
	{ 0, 247 },
	{ 128, 247 },
	{ 0, -1777 },
	{ 128, -1777 },
	{ 0, 247 },
	{ 128, 247 },
	{ 0, -1777 },
	{ 128, -1777 },
	{ 0, 247 },
	{ 128, 247 },
	{ 0, -1777 },
	{ 128, -1777 },
	{ 0, 247 },
	{ 128, 247 },
	{ 0, -1777 },
	{ 128, -1777 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009AD0C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_0009AC70, NULL, NULL, NULL, uv_0009ACAC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009AD24[] = {
	{ 592.9984f, -96.49978f, 1196 },
	{ 599.9984f, -92.9998f, 1196 },
	{ 607.4984f, -96.49982f, 1196 },
	{ 607.4984f, -105.4998f, 1196 },
	{ 599.9984f, -108.9998f, 1196 },
	{ 592.9984f, -105.4998f, 1196 },
	{ 592.9984f, -96.49978f, 1384.853f },
	{ 599.9984f, -92.9998f, 1384.853f },
	{ 607.4984f, -96.49982f, 1384.853f },
	{ 607.4984f, -105.4998f, 1384.853f },
	{ 599.9984f, -108.9998f, 1384.853f },
	{ 592.9984f, -105.4998f, 1384.853f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009ADB4[] = {
	{ -0.85065f, 0.525732f, 0 },
	{ -0.013508f, 0.999909f, 0 },
	{ 0.843471f, 0.537175f, 0 },
	{ 0.84347f, -0.537176f, 0 },
	{ -0.013512f, -0.999909f, 0 },
	{ -0.850651f, -0.52573f, 0 },
	{ -0.85065f, 0.525732f, 0 },
	{ -0.013508f, 0.999909f, 0 },
	{ 0.843471f, 0.537175f, 0 },
	{ 0.84347f, -0.537176f, 0 },
	{ -0.013512f, -0.999909f, 0 },
	{ -0.850651f, -0.52573f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009AE44 = { vertex_0009AD24, normal_0009ADB4, LengthOfArray<Sint32>(vertex_0009AD24), meshlist_0009AD0C, matlist_0009AC5C, LengthOfArray<Uint16>(meshlist_0009AD0C), LengthOfArray<Uint16>(matlist_0009AC5C), { 600.2484f, -100.9998f, 1290.426f }, 94.76485f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009AE6C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009AE44, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009AEA0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009AEC8[] = {
	6, 2, 3, 1, 0, 5, 4,
	6, 8, 4, 6, 0, 7, 3,
	6, 11, 8, 9, 6, 10, 7,
	6, 10, 13, 9, 12, 11, 14
};

extern "C" __declspec(dllexport) Sint16 poly_0009AF00[] = {
	0x8000u | 6, 10, 13, 7, 15, 3, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009AF10[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 87 },
	{ 0, 87 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 87 },
	{ 255, 87 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 87 },
	{ 255, 87 },
	{ 0 },
	{ 255, 0 },
	{ 255, 0 },
	{ 0 },
	{ 255, 87 },
	{ 0, 87 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009AF70[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 123 },
	{ 255, 123 },
	{ 0 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009AF88[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0009AEC8, NULL, NULL, NULL, uv_0009AF10, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0009AF00, NULL, NULL, NULL, uv_0009AF70, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009AFB8[] = {
	{ 589.3234f, -94.2948f, 1445.971f },
	{ 589.3234f, -107.7048f, 1445.971f },
	{ 592.3406f, -105.8945f, 1450.802f },
	{ 592.3406f, -96.10516f, 1450.802f },
	{ 589.3234f, -94.2948f, 1434.64f },
	{ 589.3234f, -107.7048f, 1434.64f },
	{ 599.7534f, -89.0798f, 1445.971f },
	{ 599.9546f, -92.2982f, 1450.802f },
	{ 599.7534f, -89.0798f, 1434.64f },
	{ 610.9284f, -94.2948f, 1445.971f },
	{ 608.1123f, -96.10516f, 1450.802f },
	{ 610.9284f, -94.2948f, 1434.64f },
	{ 610.9284f, -107.7048f, 1445.971f },
	{ 608.1123f, -105.8945f, 1450.802f },
	{ 610.9284f, -107.7048f, 1434.64f },
	{ 599.9546f, -109.7014f, 1450.802f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009B078[] = {
	{ -0.816361f, 0.503619f, 0.282707f },
	{ -0.9694f, 0, 0.245486f },
	{ -0.465477f, 0, 0.88506f },
	{ -0.476421f, 0.296863f, 0.827584f },
	{ -0.850651f, 0.525731f, 0 },
	{ -1, 0, 0 },
	{ -0.015494f, 0.962811f, 0.26973f },
	{ -0.002127f, 0.563444f, 0.826152f },
	{ -0.01351f, 0.999909f, 0 },
	{ 0.8113509f, 0.5170209f, 0.272763f },
	{ 0.484774f, 0.307941f, 0.818637f },
	{ 0.843471f, 0.537175f, 0 },
	{ 0.972752f, 0, 0.23185f },
	{ 0.482304f, 0, 0.876004f },
	{ 1, 0, 0 },
	{ 0, 0, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009B138 = { vertex_0009AFB8, normal_0009B078, LengthOfArray<Sint32>(vertex_0009AFB8), meshlist_0009AF88, matlist_0009AEA0, LengthOfArray<Uint16>(meshlist_0009AF88), LengthOfArray<Uint16>(matlist_0009AEA0), { 600.1259f, -99.39061f, 1442.721f }, 13.49071f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009B160 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009B138, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009B194[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009B1A8[] = {
	0x8000u | 10, 0, 9, 1, 8, 2, 7, 3, 6, 4, 5
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009B1C0[] = {
	{ 0 },
	{ 0, 207 },
	{ 474, 0 },
	{ 474, 200 },
	{ 817, 24 },
	{ 817, 207 },
	{ 1068, 74 },
	{ 1068, 207 },
	{ 1275, 198 },
	{ 1240, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009B1E8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0009B1A8, NULL, NULL, NULL, uv_0009B1C0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009B200[] = {
	{ 600, -100, 1567.5f },
	{ 704, -100, 1567.5f },
	{ 779, -105, 1567.5f },
	{ 834, -115, 1567.5f },
	{ 879, -140, 1567.5f },
	{ 871.5f, -151.5f, 1567.5f },
	{ 834, -142, 1567.5f },
	{ 779, -142, 1567.5f },
	{ 704, -140.5f, 1567.5f },
	{ 600, -142, 1567.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009B278[] = {
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

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009B2F0 = { vertex_0009B200, normal_0009B278, LengthOfArray<Sint32>(vertex_0009B200), meshlist_0009B1E8, matlist_0009B194, LengthOfArray<Uint16>(meshlist_0009B1E8), LengthOfArray<Uint16>(matlist_0009B194), { 739.5f, -125.75f, 1567.5f }, 139.5f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009B318 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009B2F0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009B34C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009B360[] = {
	0x8000u | 10, 9, 0, 8, 1, 7, 2, 6, 3, 5, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009B378[] = {
	{ 0, 207 },
	{ 0 },
	{ 512, 200 },
	{ 517, 0 },
	{ 840, 207 },
	{ 841, 24 },
	{ 1080, 207 },
	{ 1080, 74 },
	{ 1242, 255 },
	{ 1275, 198 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009B3A0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0009B360, NULL, NULL, NULL, uv_0009B378, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009B3B8[] = {
	{ 584, -100, 1567 },
	{ 704, -100, 1567 },
	{ 779, -105, 1567 },
	{ 834, -115, 1567 },
	{ 879, -140, 1567 },
	{ 871.5f, -151.5f, 1567 },
	{ 834, -142, 1567 },
	{ 778.5f, -142, 1567 },
	{ 702.5f, -140.5f, 1567 },
	{ 584, -142, 1567 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009B430[] = {
	{ 0, -0.00006f, 1 },
	{ 0, -0.00006f, 1 },
	{ 0, -0.00006f, 1 },
	{ -0.00003f, -0.0001f, 1 },
	{ -0.00007f, -0.00017f, 1 },
	{ -0.00007f, -0.00017f, 1 },
	{ -0.00004f, -0.00012f, 1 },
	{ 0, -0.00006f, 1 },
	{ 0, -0.00006f, 1 },
	{ 0, -0.00006f, 1 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009B4A8 = { vertex_0009B3B8, normal_0009B430, LengthOfArray<Sint32>(vertex_0009B3B8), meshlist_0009B3A0, matlist_0009B34C, LengthOfArray<Uint16>(meshlist_0009B3A0), LengthOfArray<Uint16>(matlist_0009B34C), { 731.5f, -125.75f, 1567 }, 147.5f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009B4D0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009B4A8, 16, 0, -530.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009B504[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009B518[] = {
	0x8000u | 10, 0, 9, 1, 8, 2, 7, 3, 6, 4, 5
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009B530[] = {
	{ 0 },
	{ 0, 207 },
	{ 517, 0 },
	{ 512, 200 },
	{ 841, 24 },
	{ 840, 207 },
	{ 1080, 74 },
	{ 1080, 207 },
	{ 1275, 198 },
	{ 1242, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009B558[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0009B518, NULL, NULL, NULL, uv_0009B530, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009B570[] = {
	{ 600, -100, 1567.1f },
	{ 720, -100, 1567.1f },
	{ 795, -105, 1567.1f },
	{ 850, -115, 1567.1f },
	{ 895, -140, 1567.1f },
	{ 887.5f, -151.5f, 1567 },
	{ 850, -142, 1567 },
	{ 794.5f, -142, 1567 },
	{ 718.5f, -140.5f, 1567 },
	{ 600, -142, 1567 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009B5E8[] = {
	{ -0.00015f, 0.002383f, -0.999997f },
	{ 0.000046f, 0.002426f, -0.999997f },
	{ 0.00017f, 0.002576f, -0.999997f },
	{ 0.001233f, 0.004266f, -0.99999f },
	{ 0.00286f, 0.006839f, -0.999973f },
	{ 0.00286f, 0.006839f, -0.999973f },
	{ 0.001648f, 0.004922f, -0.9999869f },
	{ 0.000175f, 0.002585f, -0.999997f },
	{ 0.000044f, 0.002425f, -0.999997f },
	{ -0.00015f, 0.002383f, -0.999997f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009B660 = { vertex_0009B570, normal_0009B5E8, LengthOfArray<Sint32>(vertex_0009B570), meshlist_0009B558, matlist_0009B504, LengthOfArray<Uint16>(meshlist_0009B558), LengthOfArray<Uint16>(matlist_0009B504), { 747.5f, -125.75f, 1567.05f }, 147.5f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009B688 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009B660, 0, 0, -796, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009B6BC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009B6D0[] = {
	0x8000u | 10, 9, 0, 8, 1, 7, 2, 6, 3, 5, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009B6E8[] = {
	{ 0, 207 },
	{ 0 },
	{ 512, 200 },
	{ 517, 0 },
	{ 840, 207 },
	{ 841, 24 },
	{ 1080, 207 },
	{ 1080, 74 },
	{ 1242, 255 },
	{ 1275, 198 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009B710[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0009B6D0, NULL, NULL, NULL, uv_0009B6E8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009B728[] = {
	{ 584, -100, 1567.125f },
	{ 704, -100, 1567.125f },
	{ 779, -105, 1567.125f },
	{ 834, -115, 1567.125f },
	{ 879, -140, 1567.125f },
	{ 871.5f, -151.5f, 1567 },
	{ 834, -142, 1567 },
	{ 778.5f, -142, 1567 },
	{ 702.5f, -140.5f, 1567 },
	{ 584, -142, 1567 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009B7A0[] = {
	{ 0.000018f, -0.002976f, 0.9999959f },
	{ -0.00057f, -0.00303f, 0.999995f },
	{ -0.000213f, -0.00322f, 0.999995f },
	{ -0.001541f, -0.005332f, 0.999985f },
	{ -0.003575f, -0.008548f, 0.999957f },
	{ -0.003575f, -0.008548f, 0.999957f },
	{ -0.00206f, -0.006152f, 0.999979f },
	{ -0.000219f, -0.003231f, 0.999995f },
	{ -0.00056f, -0.003029f, 0.999995f },
	{ 0.000018f, -0.002976f, 0.9999959f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009B818 = { vertex_0009B728, normal_0009B7A0, LengthOfArray<Sint32>(vertex_0009B728), meshlist_0009B710, matlist_0009B6BC, LengthOfArray<Uint16>(meshlist_0009B710), LengthOfArray<Uint16>(matlist_0009B6BC), { 731.5f, -125.75f, 1567.063f }, 147.5f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009B840 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009B818, 16, 0, -1308, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009B874[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009B8B0[] = {
	0x8000u | 8, 3, 2, 5, 4, 7, 6, 9, 8,
	8, 8, 23, 6, 20, 4, 17, 2, 14,
	0x8000u | 6, 23, 20, 22, 19, 24, 21
};

extern "C" __declspec(dllexport) Sint16 poly_0009B8E2[] = {
	3, 0, 1, 3,
	0x8000u | 9, 12, 15, 10, 13, 11, 14, 0, 2, 3
};

extern "C" __declspec(dllexport) Sint16 poly_0009B8FE[] = {
	6, 19, 21, 16, 18, 13, 15,
	6, 13, 14, 16, 17, 19, 20
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009B91C[] = {
	{ 1348, 255 },
	{ 1348, -129 },
	{ 892, 255 },
	{ 892, -129 },
	{ 420, 255 },
	{ 420, -129 },
	{ 0, 255 },
	{ 0, -129 },
	{ 0, -129 },
	{ 4, -506 },
	{ 420, -129 },
	{ 420, -510 },
	{ 892, -129 },
	{ 892, -494 },
	{ 1348, -129 },
	{ 1348, -510 },
	{ 4, 10 },
	{ 424, 13 },
	{ 8, 376 },
	{ 424, 384 },
	{ 6, 745 },
	{ 424, 754 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009B974[] = {
	{ 2586, -83 },
	{ 2586, 255 },
	{ 2274, 255 },
	{ 2586, -1051 },
	{ 2274, -1093 },
	{ 2586, -729 },
	{ 2274, -757 },
	{ 2586, -406 },
	{ 2274, -420 },
	{ 2586, -83 },
	{ 2274, -83 },
	{ 2274, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009B9A4[] = {
	{ 150, -1657 },
	{ 150, -2295 },
	{ 1020, -1604 },
	{ 1020, -2215 },
	{ 1862, -1657 },
	{ 1862, -2295 },
	{ 1862, -1657 },
	{ 1862, -1020 },
	{ 1020, -1604 },
	{ 1020, -995 },
	{ 150, -1657 },
	{ 150, -1020 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009B9D4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0009B8B0, NULL, NULL, NULL, uv_0009B91C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0009B8E2, NULL, NULL, NULL, uv_0009B974, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0009B8FE, NULL, NULL, NULL, uv_0009B9A4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009BA1C[] = {
	{ 50, -55, 132.7001f },
	{ 50, -55, 0.000122f },
	{ -55, -45, 132.7001f },
	{ -55, -45, 0.000122f },
	{ -165, -35, 132.7001f },
	{ -165, -35, 0.000122f },
	{ -278.5f, -20, 132.7001f },
	{ -278.5f, -20, 0.000122f },
	{ -380, -10, 132.7001f },
	{ -380, -10, 0.000122f },
	{ 50, -55, 385.5501f },
	{ 50, -55, 259.1251f },
	{ 50, -55, 511.975f },
	{ -55, -45, 396.5501f },
	{ -55, -45, 264.6251f },
	{ -55, -45, 528.475f },
	{ -165, -35, 385.5501f },
	{ -165, -35, 259.1251f },
	{ -165, -35, 511.975f },
	{ -278.5f, -20, 396.55f },
	{ -278.5f, -20, 264.6251f },
	{ -278.5f, -20, 528.475f },
	{ -378, -10, 394.0501f },
	{ -379, -10, 263.375f },
	{ -378.5f, -10, 524.725f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009BB48[] = {
	{ 0.094809f, 0.995495f, 0 },
	{ 0.094809f, 0.995495f, 0 },
	{ 0.092673f, 0.995697f, 0 },
	{ 0.092673f, 0.995697f, 0 },
	{ 0.110801f, 0.993843f, 0 },
	{ 0.110801f, 0.993843f, 0 },
	{ 0.114549f, 0.993418f, -0.00093f },
	{ 0.114549f, 0.993418f, 0 },
	{ 0.098047f, 0.995182f, -0.000186f },
	{ 0.098047f, 0.995182f, 0 },
	{ 0.094809f, 0.995495f, 0 },
	{ 0.094809f, 0.995495f, 0 },
	{ 0.094809f, 0.995495f, 0 },
	{ 0.092673f, 0.995697f, 0 },
	{ 0.092673f, 0.995697f, 0 },
	{ 0.092667f, 0.995697f, 0 },
	{ 0.110801f, 0.993843f, 0 },
	{ 0.110801f, 0.993843f, 0 },
	{ 0.11077f, 0.993846f, 0 },
	{ 0.115398f, 0.993319f, -0.00046f },
	{ 0.115042f, 0.993361f, -0.000189f },
	{ 0.114709f, 0.993399f, 0.000098f },
	{ 0.09975699f, 0.995012f, -0.000101f },
	{ 0.099015f, 0.995086f, -0.000377f },
	{ 0.099497f, 0.995038f, 0.000189f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009BC74 = { vertex_0009BA1C, normal_0009BB48, LengthOfArray<Sint32>(vertex_0009BA1C), meshlist_0009B9D4, matlist_0009B874, LengthOfArray<Uint16>(meshlist_0009B9D4), LengthOfArray<Uint16>(matlist_0009B874), { -165, -32.5f, 264.2375f }, 340.6559f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009BC9C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009BC74, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009BCD0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009BD20[] = {
	3, 15, 0, 18,
	0x8000u | 5, 18, 2, 0, 3, 1
};

extern "C" __declspec(dllexport) Sint16 poly_0009BD34[] = {
	3, 2, 3, 5,
	0x8000u | 9, 19, 22, 17, 20, 18, 21, 2, 4, 5
};

extern "C" __declspec(dllexport) Sint16 poly_0009BD50[] = {
	0x8000u | 10, 5, 4, 7, 6, 9, 8, 11, 10, 13, 12,
	10, 12, 30, 10, 28, 8, 26, 6, 24, 4, 21,
	10, 30, 29, 28, 27, 26, 25, 24, 23, 21, 20
};

extern "C" __declspec(dllexport) Sint16 poly_0009BD92[] = {
	0x8000u | 6, 16, 19, 14, 17, 15, 18
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009BDA0[] = {
	{ 1016, -512 },
	{ 1015, -131 },
	{ 737, -500 },
	{ 737, -500 },
	{ 737, -131 },
	{ 1015, -131 },
	{ 737, 254 },
	{ 1015, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009BDC0[] = {
	{ 951, -83 },
	{ 951, 255 },
	{ 728, 255 },
	{ 951, -1051 },
	{ 728, -1051 },
	{ 951, -729 },
	{ 728, -729 },
	{ 951, -406 },
	{ 728, -406 },
	{ 951, -83 },
	{ 728, -83 },
	{ 728, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009BDF0[] = {
	{ 0, -765 },
	{ 0, -412 },
	{ 426, -765 },
	{ 426, -412 },
	{ 637, -765 },
	{ 637, -412 },
	{ 820, -765 },
	{ 820, -412 },
	{ 1020, -765 },
	{ 1020, -412 },
	{ 1020, -412 },
	{ 1020, -79 },
	{ 820, -412 },
	{ 820, -79 },
	{ 637, -412 },
	{ 637, -79 },
	{ 426, -412 },
	{ 426, -79 },
	{ 0, -412 },
	{ 0, -79 },
	{ 1020, -79 },
	{ 1020, 255 },
	{ 820, -79 },
	{ 820, 255 },
	{ 637, -79 },
	{ 637, 255 },
	{ 426, -79 },
	{ 426, 255 },
	{ 0, -79 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009BE68[] = {
	{ 1036, -2423 },
	{ 0, -2358 },
	{ 1028, -1755 },
	{ 0, -1713 },
	{ 1020, -1089 },
	{ 0, -1067 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009BE80[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0009BD20, NULL, NULL, NULL, uv_0009BDA0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0009BD34, NULL, NULL, NULL, uv_0009BDC0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_0009BD50, NULL, NULL, NULL, uv_0009BDF0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_0009BD92, NULL, NULL, NULL, uv_0009BE68, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009BEE0[] = {
	{ -380, -10, 132.7001f },
	{ -380, -10, 0.000122f },
	{ -500, 0, 132.7001f },
	{ -500, 0, 0.000127f },
	{ -575, 0, 132.7001f },
	{ -575, 0, 0.000122f },
	{ -700, 0, 132.7001f },
	{ -700, 0, 0.000122f },
	{ -760, -15, 132.7001f },
	{ -760, -15, 0.000122f },
	{ -800, -50, 132.7001f },
	{ -800, -50, 0.000122f },
	{ -820, -105, 132.7001f },
	{ -820, -105, 0.000122f },
	{ -378, -10, 394.0501f },
	{ -379, -10, 263.375f },
	{ -378.5f, -10, 524.725f },
	{ -500, 0, 385.5501f },
	{ -500, 0, 259.1251f },
	{ -500, 0, 511.975f },
	{ -575, 0, 385.5501f },
	{ -575, 0, 259.1251f },
	{ -575, 0, 511.975f },
	{ -700, 0, 385.5501f },
	{ -700, 0, 259.1251f },
	{ -760, -15, 385.5501f },
	{ -760, -15, 259.1251f },
	{ -800, -50, 385.5501f },
	{ -800, -50, 259.1251f },
	{ -820, -105, 385.5501f },
	{ -820, -105, 259.1251f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009C054[] = {
	{ 0.083045f, 0.996546f, -0.000162f },
	{ 0.083045f, 0.996546f, 0 },
	{ 0.041559f, 0.999136f, -0.00081f },
	{ 0.041559f, 0.999136f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.122183f, 0.992508f, 0 },
	{ -0.122183f, 0.992508f, 0 },
	{ -0.463467f, 0.8861139f, 0 },
	{ -0.463467f, 0.8861139f, 0 },
	{ -0.8251269f, 0.5649469f, 0 },
	{ -0.8251269f, 0.5649469f, 0 },
	{ -0.939793f, 0.341743f, 0 },
	{ -0.939793f, 0.341743f, 0 },
	{ 0.08187f, 0.9966429f, -0.0006799999f },
	{ 0.082362f, 0.996602f, -0.00032f },
	{ 0.082011f, 0.996632f, 0.000159f },
	{ 0.040963f, 0.9991609f, -0.00045f },
	{ 0.041233f, 0.99915f, -0.00016f },
	{ 0.042357f, 0.999103f, 0.000082f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.122183f, 0.992508f, 0 },
	{ -0.122183f, 0.992508f, 0 },
	{ -0.463467f, 0.8861139f, 0 },
	{ -0.463467f, 0.8861139f, 0 },
	{ -0.8251269f, 0.5649469f, 0 },
	{ -0.8251269f, 0.5649469f, 0 },
	{ -0.939793f, 0.341743f, 0 },
	{ -0.939793f, 0.341743f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009C1C8 = { vertex_0009BEE0, normal_0009C054, LengthOfArray<Sint32>(vertex_0009BEE0), meshlist_0009BE80, matlist_0009BCD0, LengthOfArray<Uint16>(meshlist_0009BE80), LengthOfArray<Uint16>(matlist_0009BCD0), { -599, -52.5f, 262.3625f }, 343.038f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009C1F0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009C1C8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009C224[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009C260[] = {
	3, 29, 1, 28,
	0x8000u | 9, 28, 0, 1, 7, 8, 14, 15, 21, 22
};

extern "C" __declspec(dllexport) Sint16 poly_0009C27C[] = {
	3, 30, 2, 29,
	0x8000u | 9, 29, 1, 2, 8, 9, 15, 16, 22, 23
};

extern "C" __declspec(dllexport) Sint16 poly_0009C298[] = {
	10, 30, 31, 3, 4, 10, 11, 17, 18, 24, 25,
	10, 31, 32, 4, 5, 11, 12, 18, 19, 25, 26,
	10, 32, 33, 5, 6, 12, 13, 19, 20, 26, 27,
	3, 34, 6, 33,
	9, 24, 23, 17, 16, 10, 9, 3, 2, 30
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009C2F8[] = {
	{ 0, -2358 },
	{ 0, -3003 },
	{ 1036, -2423 },
	{ 1036, -2423 },
	{ 1045, -3091 },
	{ 0, -3003 },
	{ 1012, -3681 },
	{ 0, -3681 },
	{ 1012, -4359 },
	{ 0, -4359 },
	{ 1012, -5036 },
	{ 0, -5036 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009C328[] = {
	{ 728, -1051 },
	{ 728, -1373 },
	{ 951, -1051 },
	{ 951, -1051 },
	{ 951, -1373 },
	{ 728, -1373 },
	{ 951, -1713 },
	{ 728, -1713 },
	{ 951, -2052 },
	{ 728, -2052 },
	{ 951, -2390 },
	{ 728, -2390 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009C358[] = {
	{ 0, 255 },
	{ 426, 255 },
	{ 426, -113 },
	{ 637, -113 },
	{ 426, -500 },
	{ 637, -500 },
	{ 426, -887 },
	{ 637, -887 },
	{ 426, -1275 },
	{ 637, -1275 },
	{ 426, 255 },
	{ 637, 255 },
	{ 637, -113 },
	{ 820, -113 },
	{ 637, -500 },
	{ 820, -500 },
	{ 637, -887 },
	{ 820, -887 },
	{ 637, -1275 },
	{ 820, -1275 },
	{ 637, 255 },
	{ 820, 255 },
	{ 820, -113 },
	{ 1020, -113 },
	{ 820, -500 },
	{ 1020, -500 },
	{ 820, -887 },
	{ 1020, -887 },
	{ 820, -1275 },
	{ 1020, -1275 },
	{ 1020, 255 },
	{ 1020, -113 },
	{ 820, 255 },
	{ 426, -1275 },
	{ 0, -1275 },
	{ 426, -887 },
	{ 0, -887 },
	{ 426, -500 },
	{ 0, -500 },
	{ 426, -113 },
	{ 0, -113 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009C400[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0009C260, NULL, NULL, NULL, uv_0009C2F8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0009C27C, NULL, NULL, NULL, uv_0009C328, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 5, poly_0009C298, NULL, NULL, NULL, uv_0009C358, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009C448[] = {
	{ -377.5f, -10, 655.3999f },
	{ -500, 0, 638.4f },
	{ -575, 0, 638.4f },
	{ -700, 0, 638.4f },
	{ -760, -15, 638.4f },
	{ -800, -50, 638.4f },
	{ -820, -105, 638.4f },
	{ -380, -10, 771.1001f },
	{ -500, 0, 771.1001f },
	{ -575, 0, 771.1001f },
	{ -700, 0, 771.1001f },
	{ -760, -15, 771.1001f },
	{ -800, -50, 771.1001f },
	{ -820, -105, 771.1001f },
	{ -380, -10, 903.8001f },
	{ -500, 0, 903.8001f },
	{ -575, 0, 903.8001f },
	{ -700, 0, 903.8001f },
	{ -760, -15, 903.8001f },
	{ -800, -50, 903.8001f },
	{ -820, -105, 903.8001f },
	{ -380, -10, 1036.5f },
	{ -500, 0, 1036.5f },
	{ -575, 0, 1036.5f },
	{ -700, 0, 1036.5f },
	{ -760, -15, 1036.5f },
	{ -800, -50, 1036.5f },
	{ -820, -105, 1036.5f },
	{ -378.5f, -10, 524.725f },
	{ -500, 0, 511.975f },
	{ -575, 0, 511.975f },
	{ -700, 0, 511.975f },
	{ -760, -15, 511.975f },
	{ -800, -50, 511.975f },
	{ -820, -105, 511.975f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009C5EC[] = {
	{ 0.08176699f, 0.996651f, 0.000816f },
	{ 0.040889f, 0.999164f, 0.000319f },
	{ 0, 1, 0 },
	{ -0.122183f, 0.992508f, 0 },
	{ -0.463467f, 0.8861139f, 0 },
	{ -0.8251269f, 0.5649469f, 0 },
	{ -0.939793f, 0.341743f, 0 },
	{ 0.082555f, 0.996586f, 0.000893f },
	{ 0.041315f, 0.999146f, 0.000444f },
	{ 0, 1, 0 },
	{ -0.122183f, 0.992508f, 0 },
	{ -0.463467f, 0.8861139f, 0 },
	{ -0.8251269f, 0.5649469f, 0 },
	{ -0.939793f, 0.341743f, 0 },
	{ 0.083045f, 0.996546f, 0 },
	{ 0.041559f, 0.999136f, 0 },
	{ 0, 1, 0 },
	{ -0.122183f, 0.992508f, 0 },
	{ -0.463467f, 0.8861139f, 0 },
	{ -0.8251269f, 0.5649469f, 0 },
	{ -0.939793f, 0.341743f, 0 },
	{ 0.083045f, 0.996546f, 0 },
	{ 0.041559f, 0.999136f, 0 },
	{ 0, 1, 0 },
	{ -0.122183f, 0.992508f, 0 },
	{ -0.463467f, 0.8861139f, 0 },
	{ -0.8251269f, 0.5649469f, 0 },
	{ -0.939793f, 0.341743f, 0 },
	{ 0.081406f, 0.996681f, -0.000317f },
	{ 0.039339f, 0.999226f, -0.000153f },
	{ 0, 1, 0 },
	{ -0.122183f, 0.992508f, 0 },
	{ -0.463468f, 0.8861139f, 0 },
	{ -0.8251269f, 0.5649469f, 0 },
	{ -0.939793f, 0.341743f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009C790 = { vertex_0009C448, normal_0009C5EC, LengthOfArray<Sint32>(vertex_0009C448), meshlist_0009C400, matlist_0009C224, LengthOfArray<Uint16>(meshlist_0009C400), LengthOfArray<Uint16>(matlist_0009C224), { -598.75f, -52.5f, 774.2377f }, 343.1227f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009C7B8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009C790, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009C7EC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009C828[] = {
	10, 0, 1, 7, 8, 14, 15, 21, 22, 28, 29
};

extern "C" __declspec(dllexport) Sint16 poly_0009C83E[] = {
	10, 1, 2, 8, 9, 15, 16, 22, 23, 29, 30
};

extern "C" __declspec(dllexport) Sint16 poly_0009C854[] = {
	0x8000u | 10, 2, 9, 3, 10, 4, 11, 5, 12, 6, 13,
	6, 31, 30, 24, 23, 17, 16,
	6, 32, 31, 25, 24, 18, 17,
	0x8000u | 6, 25, 32, 26, 33, 27, 34,
	0x8000u | 6, 18, 25, 19, 26, 20, 27
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009C8A4[] = {
	{ 1012, -5036 },
	{ 0, -5036 },
	{ 1012, -5713 },
	{ 0, -5713 },
	{ 1012, -6392 },
	{ 0, -6392 },
	{ 1020, -7064 },
	{ 0, -7069 },
	{ 1012, -7746 },
	{ 0, -7746 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009C8CC[] = {
	{ 951, -2390 },
	{ 728, -2390 },
	{ 951, -2728 },
	{ 728, -2728 },
	{ 951, -3068 },
	{ 728, -3068 },
	{ 951, -3407 },
	{ 728, -3407 },
	{ 951, -3745 },
	{ 728, -3745 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009C8F4[] = {
	{ 0, 255 },
	{ 0, -255 },
	{ 426, 255 },
	{ 426, -255 },
	{ 637, 255 },
	{ 637, -255 },
	{ 820, 255 },
	{ 820, -255 },
	{ 1020, 255 },
	{ 1020, -255 },
	{ 384, -765 },
	{ 0, -765 },
	{ 426, -252 },
	{ 0, -255 },
	{ 426, 255 },
	{ 0, 255 },
	{ 610, -765 },
	{ 384, -765 },
	{ 637, -252 },
	{ 426, -252 },
	{ 637, 255 },
	{ 426, 255 },
	{ 637, -252 },
	{ 610, -765 },
	{ 820, -252 },
	{ 804, -765 },
	{ 1020, -252 },
	{ 1020, -765 },
	{ 637, 255 },
	{ 637, -252 },
	{ 820, 255 },
	{ 820, -252 },
	{ 1020, 255 },
	{ 1020, -252 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009C97C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0009C828, NULL, NULL, NULL, uv_0009C8A4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0009C83E, NULL, NULL, NULL, uv_0009C8CC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 5, poly_0009C854, NULL, NULL, NULL, uv_0009C8F4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009C9C4[] = {
	{ -380, -10, 1036.5f },
	{ -500, 0, 1036.5f },
	{ -575, 0, 1036.5f },
	{ -700, 0, 1036.5f },
	{ -760, -15, 1036.5f },
	{ -800, -50, 1036.5f },
	{ -820, -105, 1036.5f },
	{ -380, -10, 1169.2f },
	{ -500, 0, 1169.2f },
	{ -575, 0, 1169.2f },
	{ -700, 0, 1169.2f },
	{ -760, -15, 1169.2f },
	{ -800, -50, 1169.2f },
	{ -820, -105, 1169.2f },
	{ -380, -10, 1301.9f },
	{ -500, 0, 1301.9f },
	{ -575, 0, 1301.9f },
	{ -700, 0, 1301.9f },
	{ -760, -15, 1301.9f },
	{ -800, -50, 1301.9f },
	{ -820, -105, 1301.9f },
	{ -379, -10, 1433.6f },
	{ -500, 0, 1434.6f },
	{ -575, 0, 1434.6f },
	{ -700, 0, 1434.6f },
	{ -760, -15, 1434.6f },
	{ -800, -50, 1434.6f },
	{ -820, -105, 1434.6f },
	{ -380, -10, 1539.3f },
	{ -500, 0, 1539.3f },
	{ -575, 0, 1539.3f },
	{ -680, 0, 1539.3f },
	{ -740, -15, 1539.3f },
	{ -780, -50, 1539.3f },
	{ -800, -105, 1539.3f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009CB68[] = {
	{ 0.083045f, 0.996546f, 0 },
	{ 0.041559f, 0.999136f, 0 },
	{ 0, 1, 0 },
	{ -0.122183f, 0.992508f, 0 },
	{ -0.463467f, 0.8861139f, 0 },
	{ -0.8251269f, 0.5649469f, 0 },
	{ -0.939793f, 0.341743f, 0 },
	{ 0.083045f, 0.996546f, 0 },
	{ 0.041559f, 0.999136f, 0 },
	{ 0, 1, 0 },
	{ -0.122183f, 0.992508f, 0 },
	{ -0.463467f, 0.8861139f, 0 },
	{ -0.8251269f, 0.5649469f, 0 },
	{ -0.939793f, 0.341743f, 0 },
	{ 0.08287299f, 0.99656f, -0.000315f },
	{ 0.041472f, 0.99914f, -0.000157f },
	{ 0, 1, 0 },
	{ -0.122183f, 0.992508f, 0 },
	{ -0.463467f, 0.8861139f, 0 },
	{ -0.8251269f, 0.5649469f, 0 },
	{ -0.939793f, 0.341743f, 0 },
	{ 0.08270399f, 0.996574f, 0.000073f },
	{ 0.041387f, 0.9991429f, 0.000041f },
	{ 0, 1, 0 },
	{ -0.129371f, 0.991511f, 0.01303f },
	{ -0.473682f, 0.879501f, 0.045868f },
	{ -0.827079f, 0.5566519f, 0.077967f },
	{ -0.936242f, 0.340452f, 0.086848f },
	{ 0.082706f, 0.996574f, 0.000782f },
	{ 0.041389f, 0.9991429f, 0.000392f },
	{ 0, 1, 0 },
	{ -0.107651f, 0.993976f, 0.020564f },
	{ -0.439225f, 0.894451f, 0.08390199f },
	{ -0.805433f, 0.572369f, 0.153855f },
	{ -0.925006f, 0.336366f, 0.176697f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009CD0C = { vertex_0009C9C4, normal_0009CB68, LengthOfArray<Sint32>(vertex_0009C9C4), meshlist_0009C97C, matlist_0009C7EC, LengthOfArray<Uint16>(meshlist_0009C97C), LengthOfArray<Uint16>(matlist_0009C7EC), { -599.5f, -52.5f, 1287.9f }, 334.3982f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009CD34 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009CD0C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009CD68[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009CD90[] = {
	0x8000u | 7, 42, 15, 14, 8, 7, 1, 0,
	3, 2, 3, 9,
	13, 4, 11, 10, 17, 16, 44, 43, 35, 32, 30, 36, 25, 26,
	0x8000u | 9, 24, 23, 33, 31, 34, 37, 45, 46, 18,
	0x8000u | 14, 27, 26, 29, 36, 28, 32, 42, 43, 15, 16, 9, 10, 3, 4,
	0x8000u | 5, 15, 9, 8, 2, 1,
	11, 11, 18, 17, 45, 44, 34, 35, 33, 30, 24, 25
};

extern "C" __declspec(dllexport) Sint16 poly_0009CE1A[] = {
	0x8000u | 9, 22, 21, 39, 41, 38, 40, 47, 48, 20,
	0x8000u | 11, 23, 22, 31, 39, 37, 38, 46, 47, 19, 20, 13,
	0x8000u | 5, 19, 13, 12, 6, 5,
	0x8000u | 7, 46, 19, 18, 12, 11, 5, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009CE64[] = {
	{ 0, -1020 },
	{ 222, -899 },
	{ 0, -1078 },
	{ 223, -1059 },
	{ 0, -1158 },
	{ 226, -1275 },
	{ 0, -1275 },
	{ 414, -1275 },
	{ 617, -1274 },
	{ 410, -1009 },
	{ 1019, -1275 },
	{ 1020, -992 },
	{ 613, -991 },
	{ 613, -776 },
	{ 410, -812 },
	{ 408, -677 },
	{ 220, -789 },
	{ 408, -444 },
	{ 219, -529 },
	{ 408, -94 },
	{ 216, -137 },
	{ 408, 255 },
	{ 214, 255 },
	{ 634, 255 },
	{ 1020, 255 },
	{ 625, -78 },
	{ 1019, -78 },
	{ 617, -410 },
	{ 1020, -412 },
	{ 612, -633 },
	{ 1020, -634 },
	{ 1019, -777 },
	{ 0, 255 },
	{ 214, 255 },
	{ 0, -223 },
	{ 216, -137 },
	{ 0, -701 },
	{ 219, -529 },
	{ 0, -1020 },
	{ 220, -789 },
	{ 222, -899 },
	{ 410, -812 },
	{ 410, -1009 },
	{ 613, -991 },
	{ 617, -1274 },
	{ 1019, -1275 },
	{ 222, -899 },
	{ 410, -1009 },
	{ 223, -1059 },
	{ 414, -1275 },
	{ 226, -1275 },
	{ 1020, -992 },
	{ 1019, -777 },
	{ 613, -776 },
	{ 612, -633 },
	{ 408, -677 },
	{ 617, -410 },
	{ 408, -444 },
	{ 625, -78 },
	{ 408, -94 },
	{ 634, 255 },
	{ 408, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009CF5C[] = {
	{ 1112, 231 },
	{ 1548, 231 },
	{ 1213, -216 },
	{ 1626, -216 },
	{ 1316, -572 },
	{ 1705, -572 },
	{ 1386, -809 },
	{ 1756, -809 },
	{ 1756, -955 },
	{ 839, 231 },
	{ 1112, 231 },
	{ 956, -216 },
	{ 1213, -216 },
	{ 1075, -572 },
	{ 1316, -572 },
	{ 1153, -809 },
	{ 1386, -809 },
	{ 1401, -967 },
	{ 1756, -955 },
	{ 1779, -1136 },
	{ 1401, -967 },
	{ 1779, -1136 },
	{ 1416, -1161 },
	{ 1803, -1235 },
	{ 1448, -1267 },
	{ 1153, -809 },
	{ 1401, -967 },
	{ 1171, -967 },
	{ 1416, -1161 },
	{ 1188, -1161 },
	{ 1448, -1267 },
	{ 1226, -1267 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009CFDC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_0009CD90, NULL, NULL, NULL, uv_0009CE64, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_0009CE1A, NULL, NULL, NULL, uv_0009CF5C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009D00C[] = {
	{ -668.4918f, -140.0219f, 1892.778f },
	{ -652.1869f, -140.0219f, 1947.778f },
	{ -619.5782f, -140.0219f, 1982.778f },
	{ -570.6642f, -140.0219f, 1997.778f },
	{ -468.7592f, -140.0219f, 1997.778f },
	{ -407.617f, -140.0219f, 1997.778f },
	{ -309.7891f, -140.0219f, 1987.778f },
	{ -682.8925f, -117.5192f, 1884.604f },
	{ -666.2365f, -82.16585f, 1926.736f },
	{ -632.9252f, -59.66828f, 1953.548f },
	{ -582.9576f, -50.02647f, 1965.038f },
	{ -478.8575f, -50.02647f, 1965.038f },
	{ -416.3981f, -50.02647f, 1965.038f },
	{ -316.4626f, -56.45435f, 1957.378f },
	{ -689.7905f, -107.1182f, 1869.769f },
	{ -672.9662f, -55.43514f, 1888.581f },
	{ -639.3184f, -22.5459f, 1900.551f },
	{ -588.8461f, -8.450507f, 1905.682f },
	{ -483.6944f, -8.450507f, 1905.682f },
	{ -420.6041f, -8.450507f, 1905.682f },
	{ -322.8881f, -17.84743f, 1902.261f },
	{ -380, -10, 1539.3f },
	{ -500, 0, 1539.3f },
	{ -575, 0, 1539.3f },
	{ -680, 0, 1539.3f },
	{ -740, -15, 1539.3f },
	{ -780, -50, 1539.3f },
	{ -800, -105, 1539.3f },
	{ -722.5686f, -105, 1785.175f },
	{ -761.2843f, -105, 1676.238f },
	{ -704.6661f, -15, 1676.238f },
	{ -542.5926f, 0, 1676.238f },
	{ -704.8229f, -50, 1785.175f },
	{ -648.0477f, 0, 1676.238f },
	{ -616.0955f, 0, 1785.175f },
	{ -669.3322f, -15, 1785.175f },
	{ -742.4114f, -50, 1676.238f },
	{ -510.1852f, 0, 1785.175f },
	{ -443.6395f, 0, 1785.175f },
	{ -471.8197f, 0, 1676.238f },
	{ -337.1661f, -10, 1785.175f },
	{ -358.583f, -10, 1676.238f },
	{ -696.7582f, -105, 1857.8f },
	{ -679.7639f, -50, 1857.8f },
	{ -645.7762f, -15, 1857.8f },
	{ -594.7939f, 0, 1857.8f },
	{ -488.5802f, 0, 1857.8f },
	{ -424.8527f, 0, 1857.8f },
	{ -322.8881f, -10, 1857.8f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009D258[] = {
	{ -0.930969f, -0.09818199f, 0.35165f },
	{ -0.809458f, 0.050917f, 0.5849659f },
	{ -0.459304f, 0.239858f, 0.8552819f },
	{ -0.12241f, 0.324493f, 0.937934f },
	{ 0, 0.341874f, 0.939746f },
	{ 0.049606f, 0.344943f, 0.9373119f },
	{ 0.09460299f, 0.346992f, 0.933085f },
	{ -0.947136f, 0.041688f, 0.318113f },
	{ -0.843946f, 0.224133f, 0.48736f },
	{ -0.507588f, 0.482511f, 0.713819f },
	{ -0.143963f, 0.592277f, 0.792769f },
	{ 0, 0.608638f, 0.793448f },
	{ 0.049372f, 0.611357f, 0.789813f },
	{ 0.100489f, 0.598035f, 0.795145f },
	{ -0.940502f, 0.211024f, 0.266318f },
	{ -0.837146f, 0.44626f, 0.316289f },
	{ -0.499647f, 0.778666f, 0.379516f },
	{ -0.139067f, 0.910063f, 0.390442f },
	{ 0, 0.92382f, 0.382828f },
	{ 0.050203f, 0.923595f, 0.380067f },
	{ 0.099948f, 0.918357f, 0.382924f },
	{ 0.083036f, 0.996433f, -0.015037f },
	{ 0.036196f, 0.999323f, -0.006555f },
	{ 0, 1, 0 },
	{ -0.139572f, 0.9896179f, 0.03429f },
	{ -0.48787f, 0.863526f, 0.127697f },
	{ -0.816339f, 0.53249f, 0.223706f },
	{ -0.909145f, 0.330598f, 0.253297f },
	{ -0.901797f, 0.294984f, 0.315827f },
	{ -0.904362f, 0.320235f, 0.282097f },
	{ -0.47009f, 0.871543f, 0.139386f },
	{ 0, 1, 0 },
	{ -0.8131509f, 0.5106249f, 0.279368f },
	{ -0.128161f, 0.99109f, 0.036267f },
	{ -0.136665f, 0.989718f, 0.042206f },
	{ -0.49099f, 0.856201f, 0.160775f },
	{ -0.805143f, 0.5387779f, 0.24792f },
	{ 0, 1, 0 },
	{ 0.046048f, 0.998884f, -0.010482f },
	{ 0.041927f, 0.9990849f, -0.008452999f },
	{ 0.09335899f, 0.995406f, -0.021252f },
	{ 0.085763f, 0.996157f, -0.017802f },
	{ -0.920582f, 0.266634f, 0.285367f },
	{ -0.8277259f, 0.496015f, 0.262374f },
	{ -0.494151f, 0.849227f, 0.186088f },
	{ -0.133631f, 0.9846179f, 0.112558f },
	{ 0, 0.996188f, 0.087234f },
	{ 0.051663f, 0.995416f, 0.080484f },
	{ 0.098362f, 0.991709f, 0.082692f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009D4A4 = { vertex_0009D00C, normal_0009D258, LengthOfArray<Sint32>(vertex_0009D00C), meshlist_0009CFDC, matlist_0009CD68, LengthOfArray<Uint16>(meshlist_0009CFDC), LengthOfArray<Uint16>(matlist_0009CD68), { -554.8945f, -70.01092f, 1768.539f }, 335.5998f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009D4CC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009D4A4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009D500[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009D514[] = {
	0x8000u | 14, 12, 13, 10, 11, 8, 9, 6, 7, 4, 5, 0, 3, 1, 2,
	6, 24, 25, 21, 22, 18, 20,
	14, 12, 26, 10, 23, 8, 19, 6, 17, 4, 16, 0, 15, 1, 14,
	6, 26, 24, 23, 21, 19, 18
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009D56C[] = {
	{ 3791, -83 },
	{ 3791, 255 },
	{ 3939, -83 },
	{ 3939, 255 },
	{ 4221, -83 },
	{ 4221, 255 },
	{ 4579, -83 },
	{ 4579, 255 },
	{ 4802, -83 },
	{ 4802, 255 },
	{ 4966, -83 },
	{ 4966, 255 },
	{ 5100, -83 },
	{ 5100, 255 },
	{ 3777, -749 },
	{ 3771, -1083 },
	{ 3939, -757 },
	{ 3939, -1093 },
	{ 4221, -761 },
	{ 4221, -1100 },
	{ 3791, -83 },
	{ 3783, -416 },
	{ 3939, -83 },
	{ 3939, -414 },
	{ 4221, -83 },
	{ 4221, -406 },
	{ 4579, -83 },
	{ 4579, -406 },
	{ 4802, -83 },
	{ 4802, -406 },
	{ 4966, -83 },
	{ 4966, -406 },
	{ 5100, -83 },
	{ 5100, -406 },
	{ 3783, -416 },
	{ 3777, -749 },
	{ 3939, -414 },
	{ 3939, -757 },
	{ 4221, -406 },
	{ 4221, -761 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009D60C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0009D514, NULL, NULL, NULL, uv_0009D56C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009D624[] = {
	{ 850, -115, 132.7001f },
	{ 895, -140, 132.7001f },
	{ 895, -140, 0.000122f },
	{ 850, -115, 0.000122f },
	{ 795, -105, 132.7001f },
	{ 795, -105, 0.000122f },
	{ 720, -100, 132.7001f },
	{ 720, -100, 0.000122f },
	{ 600, -100, 132.7001f },
	{ 600, -100, 0.000122f },
	{ 505, -100, 132.7001f },
	{ 505, -100, 0.000122f },
	{ 455, -95, 132.7001f },
	{ 455, -95, 0.000122f },
	{ 895, -140, 259.1251f },
	{ 850, -115, 259.1251f },
	{ 795, -105, 259.1251f },
	{ 720, -100, 259.1251f },
	{ 600, -100, 398.55f },
	{ 600, -100, 259.125f },
	{ 600, -100, 531.475f },
	{ 505, -100, 396.5501f },
	{ 505, -100, 528.475f },
	{ 505, -100, 262.1251f },
	{ 450.5f, -95, 394.0501f },
	{ 448.25f, -95, 524.725f },
	{ 452.75f, -95, 263.375f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009D768[] = {
	{ 0.336762f, 0.94159f, 0 },
	{ 0.485643f, 0.874157f, 0 },
	{ 0.485643f, 0.874157f, 0 },
	{ 0.336762f, 0.94159f, 0 },
	{ 0.122899f, 0.9924189f, 0 },
	{ 0.122899f, 0.9924189f, 0 },
	{ 0.033278f, 0.999446f, 0 },
	{ 0.033278f, 0.999446f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.049814f, 0.998758f, 0.000215f },
	{ 0.049814f, 0.998758f, 0 },
	{ 0.09950399f, 0.995037f, 0.000433f },
	{ 0.09950399f, 0.995037f, 0 },
	{ 0.485643f, 0.874157f, 0 },
	{ 0.336762f, 0.94159f, 0 },
	{ 0.122899f, 0.9924189f, 0 },
	{ 0.033278f, 0.999446f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.044779f, 0.998997f, 0.000382f },
	{ 0.042526f, 0.999095f, 0.000364f },
	{ 0.047793f, 0.998857f, 0.00041f },
	{ 0.089553f, 0.995982f, 0.000764f },
	{ 0.087716f, 0.996145f, 0.000752f },
	{ 0.095308f, 0.995448f, 0.000817f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009D8AC = { vertex_0009D624, normal_0009D768, LengthOfArray<Sint32>(vertex_0009D624), meshlist_0009D60C, matlist_0009D500, LengthOfArray<Uint16>(meshlist_0009D60C), LengthOfArray<Uint16>(matlist_0009D500), { 671.625f, -117.5f, 265.7375f }, 347.1495f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009D8D4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009D8AC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009D908[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009D944[] = {
	0x8000u | 10, 0, 26, 3, 31, 6, 25, 11, 30, 10, 24,
	7, 0, 1, 3, 4, 6, 7, 11,
	4, 11, 29, 10, 28,
	8, 19, 28, 17, 29, 16, 11, 12, 7,
	3, 12, 14, 16,
	0x8000u | 7, 19, 20, 17, 18, 16, 32, 14
};

extern "C" __declspec(dllexport) Sint16 poly_0009D99E[] = {
	3, 14, 12, 15,
	0x8000u | 9, 15, 13, 12, 8, 7, 5, 4, 2, 1
};

extern "C" __declspec(dllexport) Sint16 poly_0009D9BA[] = {
	8, 24, 10, 9, 28, 27, 19, 22, 21,
	3, 9, 23, 24,
	3, 20, 21, 19
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009D9DC[] = {
	{ 701, 242 },
	{ 1283, 255 },
	{ 593, -426 },
	{ 1022, -410 },
	{ 916, -1091 },
	{ 1345, -1076 },
	{ 1000, -1711 },
	{ 1529, -1455 },
	{ 1829, -1695 },
	{ 1760, -1553 },
	{ 701, 242 },
	{ 134, 242 },
	{ 593, -426 },
	{ 134, -426 },
	{ 916, -1091 },
	{ 134, -1096 },
	{ 1000, -1711 },
	{ 1000, -1711 },
	{ 1000, -1711 },
	{ 1829, -1695 },
	{ 1829, -1695 },
	{ 1829, -1915 },
	{ 1829, -1695 },
	{ 1076, -1880 },
	{ 1000, -1711 },
	{ 176, -1918 },
	{ 1000, -1711 },
	{ 134, -1655 },
	{ 134, -1096 },
	{ 134, -1655 },
	{ 149, -2283 },
	{ 176, -1918 },
	{ 1829, -1915 },
	{ 1874, -2279 },
	{ 1076, -1880 },
	{ 1061, -2148 },
	{ 176, -1918 },
	{ 230, -2128 },
	{ 149, -2283 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009DA78[] = {
	{ 428, -1267 },
	{ 418, -891 },
	{ 0, -1275 },
	{ 0, -1275 },
	{ 4, -953 },
	{ 418, -891 },
	{ 0, -556 },
	{ 418, -556 },
	{ 0, -154 },
	{ 418, -154 },
	{ 0, 247 },
	{ 418, 247 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009DAA8[] = {
	{ 2238, -3299 },
	{ 2265, -3371 },
	{ 2578, -3391 },
	{ 2265, -3371 },
	{ 2578, -3391 },
	{ 2265, -3483 },
	{ 2578, -3503 },
	{ 2596, -3600 },
	{ 2578, -3391 },
	{ 2550, -3319 },
	{ 2238, -3299 },
	{ 2282, -3665 },
	{ 2596, -3600 },
	{ 2265, -3483 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009DAE0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_0009D944, NULL, NULL, NULL, uv_0009D9DC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0009D99E, NULL, NULL, NULL, uv_0009DA78, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_0009D9BA, NULL, NULL, NULL, uv_0009DAA8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009DB28[] = {
	{ -205, -65, 1036.5f },
	{ -279, -20, 1036.5f },
	{ -380, -10, 1036.5f },
	{ -219, -85, 1169 },
	{ -279, -20, 1169.2f },
	{ -380, -10, 1169.2f },
	{ -177, -85, 1301 },
	{ -279, -20, 1301.9f },
	{ -380, -10, 1301.9f },
	{ 47, -85, 1428.6f },
	{ -58, -85, 1420.6f },
	{ -166, -65, 1423.6f },
	{ -279, -20, 1412.6f },
	{ -379, -10, 1433.6f },
	{ -277, -20, 1537.3f },
	{ -380, -10, 1539.3f },
	{ -273.5f, -10, 1464.6f },
	{ -156, -10, 1457.337f },
	{ -158, -24.1693f, 1510.3f },
	{ -58, 25, 1464.337f },
	{ -52, -19.1693f, 1536.3f },
	{ 53, -34.1693f, 1510.3f },
	{ 47, -10, 1472.337f },
	{ 38, -160, 1400.6f },
	{ -67, -165, 1392.6f },
	{ -121, -170, 1298 },
	{ -129, -170, 1034 },
	{ 47, -69.19008f, 1428.6f },
	{ -58, -69.28255f, 1420.6f },
	{ -166, -48.75f, 1423.6f },
	{ -97, -170, 1373 },
	{ -163, -170, 1166 },
	{ -266.5f, -10, 1506.3f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009DCB4[] = {
	{ 0.730924f, 0.656243f, 0.187335f },
	{ 0.37904f, 0.920516f, 0.09475899f },
	{ 0.098528f, 0.995134f, 0 },
	{ 0.735836f, 0.6768309f, -0.021103f },
	{ 0.377716f, 0.925913f, -0.003928f },
	{ 0.098528f, 0.995134f, 0 },
	{ 0.681826f, 0.699671f, -0.213478f },
	{ 0.327519f, 0.9397579f, -0.09790999f },
	{ 0.09876999f, 0.99511f, 0 },
	{ 0.07099099f, 0.165832f, -0.983595f },
	{ 0.069318f, 0.176635f, -0.981833f },
	{ 0.391099f, 0.610847f, -0.688409f },
	{ 0.237742f, 0.959066f, -0.153855f },
	{ 0.09924f, 0.9950629f, -0.000244f },
	{ -0.066985f, 0.997724f, 0.007683f },
	{ 0.099414f, 0.995046f, -0.000431f },
	{ -0.255182f, 0.963562f, -0.08019f },
	{ -0.12243f, 0.940932f, -0.315685f },
	{ -0.102782f, 0.906639f, 0.409196f },
	{ 0.022957f, 0.978802f, -0.203518f },
	{ 0.014809f, 0.8524579f, 0.522586f },
	{ 0.241242f, 0.835461f, 0.493768f },
	{ 0.323779f, 0.9231499f, -0.207272f },
	{ 0.06327f, 0.342381f, -0.937429f },
	{ 0.112365f, 0.32489f, -0.939053f },
	{ 0.787402f, 0.574142f, -0.224407f },
	{ 0.8229409f, 0.535473f, 0.189832f },
	{ 0.157292f, 0.253727f, -0.954401f },
	{ 0.041808f, 0.241071f, -0.969607f },
	{ 0.07514399f, 0.573823f, -0.815525f },
	{ 0.542386f, 0.534872f, -0.647866f },
	{ 0.8341179f, 0.550663f, -0.031895f },
	{ -0.376538f, 0.916327f, 0.136252f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009DE40 = { vertex_0009DB28, normal_0009DCB4, LengthOfArray<Sint32>(vertex_0009DB28), meshlist_0009DAE0, matlist_0009D908, LengthOfArray<Uint16>(meshlist_0009DAE0), LengthOfArray<Uint16>(matlist_0009D908), { -163.5f, -72.5f, 1286.65f }, 332.7226f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009DE68 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009DE40, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009DE9C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009DEB0[] = {
	8, 0, 1, 2, 3, 4, 5, 6, 7,
	10, 16, 6, 22, 7, 27, 8, 26, 9, 30, 10,
	10, 15, 16, 13, 22, 20, 27, 12, 26, 18, 30,
	0x8000u | 14, 10, 23, 9, 24, 8, 28, 7, 31, 5, 32, 3, 29, 1, 25,
	0x8000u | 10, 15, 14, 13, 21, 20, 19, 12, 11, 18, 17
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009DF24[] = {
	{ 3781, -2390 },
	{ 3642, -2390 },
	{ 3791, -2728 },
	{ 3681, -2716 },
	{ 3701, -3068 },
	{ 3433, -3068 },
	{ 3690, -3362 },
	{ 3393, -3362 },
	{ 3690, -3362 },
	{ 3690, -3362 },
	{ 3393, -3362 },
	{ 3393, -3362 },
	{ 3164, -3356 },
	{ 3164, -3356 },
	{ 2866, -3383 },
	{ 2866, -3383 },
	{ 2578, -3391 },
	{ 2578, -3391 },
	{ 3713, -3518 },
	{ 3690, -3362 },
	{ 3393, -3449 },
	{ 3393, -3362 },
	{ 3164, -3467 },
	{ 3164, -3356 },
	{ 2866, -3494 },
	{ 2866, -3383 },
	{ 2578, -3503 },
	{ 2578, -3391 },
	{ 2578, -3391 },
	{ 2550, -3319 },
	{ 2866, -3383 },
	{ 2838, -3312 },
	{ 3164, -3356 },
	{ 3137, -3283 },
	{ 3393, -3362 },
	{ 3347, -3220 },
	{ 3433, -3068 },
	{ 3360, -2996 },
	{ 3681, -2716 },
	{ 3535, -2764 },
	{ 3642, -2390 },
	{ 3496, -2439 },
	{ 3713, -3518 },
	{ 3656, -3610 },
	{ 3393, -3449 },
	{ 3473, -3665 },
	{ 3164, -3467 },
	{ 3177, -3699 },
	{ 2866, -3494 },
	{ 2878, -3665 },
	{ 2578, -3503 },
	{ 2596, -3600 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009DFF4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0009DEB0, NULL, NULL, NULL, uv_0009DF24, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009E00C[] = {
	{ 452, -95, 1036.5f },
	{ 405, -65, 1036.5f },
	{ 455, -95, 1169.2f },
	{ 418, -95, 1164.2f },
	{ 425, -95, 1301.9f },
	{ 335, -85, 1301.9f },
	{ 421, -95, 1417.6f },
	{ 321, -55, 1417.6f },
	{ 244, -85, 1414.6f },
	{ 144, -85, 1425.6f },
	{ 47, -85, 1428.6f },
	{ 148, -9.169299f, 1536.3f },
	{ 144, 25, 1469.337f },
	{ 321, 55, 1451.337f },
	{ 410, 5.8307f, 1528.3f },
	{ 429, 40, 1478.337f },
	{ 421, -69.5599f, 1417.6f },
	{ 53, -34.1693f, 1510.3f },
	{ 47, -10, 1472.337f },
	{ 249, -24.1693f, 1549.3f },
	{ 244, 40, 1458.337f },
	{ 348, 0.8307f, 1536.3f },
	{ 321, -39.10873f, 1417.6f },
	{ 38, -160, 1400.6f },
	{ 135, -160, 1397.6f },
	{ 356, -160, 1056 },
	{ 144, -68.75f, 1425.6f },
	{ 244, -69.54881f, 1414.6f },
	{ 235, -160, 1386.6f },
	{ 369, -160, 1183 },
	{ 47, -69.19008f, 1428.6f },
	{ 306, -160, 1362 },
	{ 310, -160, 1273.9f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009E198[] = {
	{ 0.336728f, 0.941571f, -0.007613f },
	{ -0.309637f, 0.9470339f, 0.085153f },
	{ 0.206011f, 0.978535f, 0.005335f },
	{ -0.325113f, 0.944569f, -0.045729f },
	{ 0.160005f, 0.987023f, 0.013585f },
	{ -0.514074f, 0.8359039f, -0.192335f },
	{ 0.205177f, 0.779671f, -0.591621f },
	{ -0.113865f, 0.399057f, -0.909829f },
	{ -0.11928f, 0.248285f, -0.961315f },
	{ -0.070047f, 0.180221f, -0.981129f },
	{ -0.030381f, 0.184813f, -0.982304f },
	{ -0.143228f, 0.837748f, 0.526938f },
	{ -0.240455f, 0.941036f, -0.237976f },
	{ -0.004253f, 0.9450409f, -0.326925f },
	{ -0.013984f, 0.8278199f, 0.560819f },
	{ 0.199078f, 0.952097f, -0.232121f },
	{ 0.12001f, 0.173298f, -0.9775299f },
	{ -0.315197f, 0.837579f, 0.44622f },
	{ -0.345587f, 0.88291f, -0.317868f },
	{ -0.064845f, 0.819311f, 0.569671f },
	{ -0.178675f, 0.942103f, -0.283756f },
	{ -0.06607199f, 0.824704f, 0.561692f },
	{ 0.042625f, 0.233396f, -0.971447f },
	{ -0.028927f, 0.352653f, -0.935307f },
	{ -0.063529f, 0.35573f, -0.932427f },
	{ -0.866983f, 0.476876f, 0.144671f },
	{ -0.129059f, 0.227183f, -0.965262f },
	{ -0.085304f, 0.16648f, -0.982348f },
	{ -0.161197f, 0.420398f, -0.892906f },
	{ -0.845271f, 0.473066f, -0.248447f },
	{ -0.121046f, 0.253202f, -0.959811f },
	{ -0.718666f, 0.474174f, -0.508604f },
	{ -0.845215f, 0.407495f, -0.345775f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009E324 = { vertex_0009E00C, normal_0009E198, LengthOfArray<Sint32>(vertex_0009E00C), meshlist_0009DFF4, matlist_0009DE9C, LengthOfArray<Uint16>(meshlist_0009DFF4), LengthOfArray<Uint16>(matlist_0009DE9C), { 246.5f, -52.5f, 1292.9f }, 330.4742f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009E34C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009E324, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009E380[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009E3BC[] = {
	0x8000u | 13, 20, 21, 23, 24, 17, 16, 31, 33, 32, 34, 39, 40, 13,
	0x8000u | 6, 8, 3, 7, 2, 6, 1,
	3, 11, 12, 38,
	5, 8, 12, 7, 11, 6,
	13, 8, 13, 12, 39, 38, 32, 30, 31, 29, 17, 18, 23, 26
};

extern "C" __declspec(dllexport) Sint16 poly_0009E416[] = {
	0x8000u | 13, 21, 22, 24, 25, 16, 15, 33, 35, 34, 36, 40, 41, 14,
	0x8000u | 7, 40, 14, 13, 9, 8, 4, 3
};

extern "C" __declspec(dllexport) Sint16 poly_0009E442[] = {
	0x8000u | 7, 19, 18, 28, 29, 27, 30, 37,
	0x8000u | 9, 30, 38, 37, 11, 10, 6, 5, 1, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009E468[] = {
	{ 1060, 233 },
	{ 1867, 96 },
	{ 1060, 233 },
	{ 1845, -68 },
	{ 1038, 69 },
	{ 1845, -68 },
	{ 1098, -557 },
	{ 1867, -645 },
	{ 1156, -1187 },
	{ 1891, -1220 },
	{ 1196, -1606 },
	{ 1907, -1606 },
	{ 1907, -1777 },
	{ 1907, -1991 },
	{ 1907, -2108 },
	{ 1196, -2032 },
	{ 1196, -2162 },
	{ 518, -2092 },
	{ 518, -2242 },
	{ 517, -1823 },
	{ 1196, -1795 },
	{ 517, -1606 },
	{ 1907, -1991 },
	{ 1196, -1795 },
	{ 1196, -2032 },
	{ 517, -1823 },
	{ 518, -2092 },
	{ 1907, -1991 },
	{ 1907, -1777 },
	{ 1196, -1795 },
	{ 1196, -1606 },
	{ 517, -1606 },
	{ 1156, -1187 },
	{ 466, -1181 },
	{ 1098, -557 },
	{ 330, -545 },
	{ 1038, 69 },
	{ 156, 90 },
	{ 1060, 233 },
	{ 236, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009E508[] = {
	{ 2282, -3665 },
	{ 2596, -3600 },
	{ 2274, -3745 },
	{ 2586, -3679 },
	{ 2274, -3745 },
	{ 2586, -3679 },
	{ 2283, -4023 },
	{ 2578, -3982 },
	{ 2293, -4302 },
	{ 2569, -4284 },
	{ 2298, -4487 },
	{ 2564, -4487 },
	{ 2564, -4560 },
	{ 2298, -4487 },
	{ 2564, -4560 },
	{ 2298, -4569 },
	{ 2564, -4653 },
	{ 2298, -4673 },
	{ 2564, -4704 },
	{ 2298, -4729 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009E558[] = {
	{ 11, 231 },
	{ 424, 238 },
	{ 97, -216 },
	{ 516, -155 },
	{ 183, -573 },
	{ 588, -548 },
	{ 240, -809 },
	{ 588, -548 },
	{ 614, -809 },
	{ 240, -809 },
	{ 614, -944 },
	{ 240, -956 },
	{ 614, -1110 },
	{ 266, -1136 },
	{ 614, -1203 },
	{ 292, -1235 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009E598[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0009E3BC, NULL, NULL, NULL, uv_0009E468, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0009E416, NULL, NULL, NULL, uv_0009E508, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0009E442, NULL, NULL, NULL, uv_0009E558, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009E5E0[] = {
	{ -309.7891f, -140.0219f, 1987.778f },
	{ -229.2845f, -140.0219f, 1977.778f },
	{ -140.1183f, -140.0219f, 1962.778f },
	{ -46.7061f, -140.0219f, 1952.778f },
	{ 42.48524f, -140.0219f, 1942.778f },
	{ -316.4626f, -56.45435f, 1957.378f },
	{ -229.2845f, -62.88222f, 1949.718f },
	{ -140.1183f, -72.52403f, 1938.227f },
	{ -46.70612f, -78.95191f, 1930.566f },
	{ 42.48524f, -85.37978f, 1922.906f },
	{ -322.8881f, -17.84743f, 1902.261f },
	{ -229.4203f, -27.24436f, 1898.841f },
	{ -140.2013f, -41.33974f, 1893.711f },
	{ -46.73379f, -50.73667f, 1890.291f },
	{ 42.48524f, -60.1336f, 1886.87f },
	{ 50, -55, 1541.3f },
	{ -55, -45, 1567.3f },
	{ -161, -35, 1541.3f },
	{ -277, -20, 1537.3f },
	{ -380, -10, 1539.3f },
	{ -158, -24.1693f, 1510.3f },
	{ -52, -19.1693f, 1536.3f },
	{ 53, -34.1693f, 1510.3f },
	{ -158, -23.75f, 1510.3f },
	{ -55, -32.5f, 1567.3f },
	{ 50, -40.625f, 1541.3f },
	{ -266.5f, -10, 1506.3f },
	{ -337.1661f, -10, 1785.175f },
	{ -358.583f, -10, 1676.238f },
	{ -254.0326f, -20, 1657.488f },
	{ -236.0652f, -20, 1777.675f },
	{ -153.2005f, -35, 1659.988f },
	{ -145.401f, -35, 1778.675f },
	{ -51.90017f, -45, 1676.238f },
	{ -48.80034f, -45, 1785.175f },
	{ 47.18197f, -55, 1659.988f },
	{ 44.36393f, -55, 1778.675f },
	{ -322.8881f, -10, 1857.8f },
	{ -229.4203f, -20, 1857.8f },
	{ -140.2013f, -35, 1857.8f },
	{ -46.73379f, -45, 1857.8f },
	{ 42.48524f, -55, 1857.8f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009E7D8[] = {
	{ 0.111383f, 0.339722f, 0.933907f },
	{ 0.133088f, 0.338796f, 0.931399f },
	{ 0.128993f, 0.338959f, 0.931916f },
	{ 0.102379f, 0.339996f, 0.934838f },
	{ 0.104777f, 0.339898f, 0.934608f },
	{ 0.113908f, 0.619069f, 0.777032f },
	{ 0.13929f, 0.602931f, 0.785539f },
	{ 0.136849f, 0.602672f, 0.786167f },
	{ 0.108767f, 0.604949f, 0.7887999f },
	{ 0.111302f, 0.604014f, 0.789163f },
	{ 0.108059f, 0.92134f, 0.373437f },
	{ 0.136384f, 0.915279f, 0.379031f },
	{ 0.136613f, 0.915083f, 0.379421f },
	{ 0.108756f, 0.918309f, 0.380632f },
	{ 0.111287f, 0.917781f, 0.381175f },
	{ 0.240225f, 0.651589f, 0.71953f },
	{ 0.117078f, 0.880404f, 0.459546f },
	{ 0.063658f, 0.963586f, 0.259713f },
	{ 0.111566f, 0.989373f, 0.093246f },
	{ 0.0963f, 0.995214f, -0.016623f },
	{ -0.1341f, 0.919334f, 0.369922f },
	{ 0.04557f, 0.936748f, 0.347026f },
	{ 0.21034f, 0.925271f, 0.315642f },
	{ -0.027805f, 0.902423f, 0.429954f },
	{ 0.073018f, 0.7347389f, 0.674408f },
	{ 0.272049f, 0.59916f, 0.752992f },
	{ 0.108787f, 0.932861f, 0.343418f },
	{ 0.098845f, 0.994986f, -0.015275f },
	{ 0.094336f, 0.995408f, -0.01625f },
	{ 0.115989f, 0.993117f, -0.016276f },
	{ 0.128389f, 0.991614f, -0.01473f },
	{ 0.117736f, 0.99299f, -0.010434f },
	{ 0.129786f, 0.991497f, -0.009471999f },
	{ 0.097536f, 0.9952289f, -0.002389f },
	{ 0.104474f, 0.9945239f, -0.002529f },
	{ 0.097257f, 0.995259f, -0.00012f },
	{ 0.105568f, 0.9944119f, -0.000131f },
	{ 0.106095f, 0.991636f, 0.073497f },
	{ 0.136281f, 0.987463f, 0.07964499f },
	{ 0.135298f, 0.9873779f, 0.082339f },
	{ 0.108496f, 0.990415f, 0.08547699f },
	{ 0.110971f, 0.990046f, 0.086569f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009E9D0 = { vertex_0009E5E0, normal_0009E7D8, LengthOfArray<Sint32>(vertex_0009E5E0), meshlist_0009E598, matlist_0009E380, LengthOfArray<Uint16>(meshlist_0009E598), LengthOfArray<Uint16>(matlist_0009E380), { -163.5f, -75.01092f, 1747.039f }, 323.7708f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009E9F8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009E9D0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009EA2C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 22, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009EA68[] = {
	3, 11, 21, 22,
	6, 24, 31, 32, 11, 10, 22,
	7, 28, 35, 25, 0, 1, 37, 38,
	0x8000u | 8, 35, 27, 28, 5, 6, 24, 20, 31
};

extern "C" __declspec(dllexport) Sint16 poly_0009EAA0[] = {
	4, 29, 7, 6, 20,
	0x8000u | 9, 39, 38, 2, 1, 36, 25, 29, 28, 6,
	4, 2, 39, 3, 40,
	8, 21, 11, 12, 31, 34, 20, 23, 7,
	3, 12, 26, 21,
	13, 33, 26, 15, 12, 13, 34, 18, 23, 19, 7, 30, 29, 36,
	0x8000u | 5, 18, 13, 19, 8, 30,
	5, 36, 2, 30, 3, 8,
	3, 13, 16, 15
};

extern "C" __declspec(dllexport) Sint16 poly_0009EB1E[] = {
	3, 41, 4, 40,
	0x8000u | 9, 40, 3, 4, 8, 9, 13, 14, 16, 17
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009EB3C[] = {
	{ 2279, -2125 },
	{ 2279, -2235 },
	{ 2586, -2171 },
	{ 2586, -1963 },
	{ 2279, -2125 },
	{ 2586, -2061 },
	{ 2279, -2125 },
	{ 2586, -2061 },
	{ 2586, -2171 },
	{ 2274, -1509 },
	{ 2586, -1373 },
	{ 2274, -1429 },
	{ 2586, -1373 },
	{ 2274, -1429 },
	{ 2586, -1051 },
	{ 2274, -1093 },
	{ 2586, -1373 },
	{ 2586, -1452 },
	{ 2274, -1509 },
	{ 2586, -1713 },
	{ 2274, -1713 },
	{ 2586, -1963 },
	{ 2279, -2027 },
	{ 2279, -2125 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009EB9C[] = {
	{ 1005, -510 },
	{ 1005, -1004 },
	{ 1848, -1004 },
	{ 1864, -1603 },
	{ 1005, 255 },
	{ 1848, 174 },
	{ 1005, -358 },
	{ 1848, -466 },
	{ 1005, -358 },
	{ 1848, -466 },
	{ 1005, -510 },
	{ 1848, -617 },
	{ 1848, -1004 },
	{ 1005, -358 },
	{ 1005, 255 },
	{ 137, -466 },
	{ 137, 174 },
	{ 1864, -1999 },
	{ 1864, -1790 },
	{ 1144, -1713 },
	{ 1864, -1790 },
	{ 1144, -1713 },
	{ 1864, -1603 },
	{ 1220, -1575 },
	{ 1005, -1004 },
	{ 1144, -1713 },
	{ 1649, -1966 },
	{ 1864, -1999 },
	{ 1282, -2281 },
	{ 1649, -1966 },
	{ 700, -2295 },
	{ 1144, -1713 },
	{ 133, -1688 },
	{ 1144, -1713 },
	{ 700, -1537 },
	{ 1220, -1575 },
	{ 332, -1052 },
	{ 1005, -1004 },
	{ 462, -494 },
	{ 1005, -510 },
	{ 1005, -358 },
	{ 700, -1537 },
	{ 133, -1688 },
	{ 332, -1052 },
	{ 133, -1024 },
	{ 462, -494 },
	{ 1005, -358 },
	{ 1005, -358 },
	{ 462, -494 },
	{ 137, -466 },
	{ 133, -1024 },
	{ 133, -1688 },
	{ 133, -2295 },
	{ 700, -2295 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009EC74[] = {
	{ 6, 217 },
	{ 10, -163 },
	{ 424, 206 },
	{ 424, 206 },
	{ 424, -177 },
	{ 10, -163 },
	{ 422, -512 },
	{ 0, -500 },
	{ 422, -911 },
	{ 0, -887 },
	{ 422, -1275 },
	{ 0, -1275 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009ECA4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0009EA68, NULL, NULL, NULL, uv_0009EB3C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 9, poly_0009EAA0, NULL, NULL, NULL, uv_0009EB9C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0009EB1E, NULL, NULL, NULL, uv_0009EC74, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009ECEC[] = {
	{ 50, -55, 638.4f },
	{ -55, -45, 660.4f },
	{ -165, -35, 638.4f },
	{ -278.5f, -20, 660.4f },
	{ -377.5f, -10, 655.3999f },
	{ 50, 40, 771.1001f },
	{ -55, 5, 771.1001f },
	{ -165, 10, 771.1001f },
	{ -279, -20, 775.1f },
	{ -380, -10, 771.1001f },
	{ 50, -85, 907.8001f },
	{ -53, -85, 932.8f },
	{ -147, -55, 916.8f },
	{ -279, -20, 911.8f },
	{ -380, -10, 903.8001f },
	{ -205, -65, 1036.5f },
	{ -279, -20, 1036.5f },
	{ -380, -10, 1036.5f },
	{ -205, -10, 880.8f },
	{ -253, -10, 781.1f },
	{ -53, 24.13481f, 894.5305f },
	{ -53, -165, 975.8f },
	{ 50, -160, 950.8001f },
	{ -137, 29.13481f, 888.5305f },
	{ 50, 59.13481f, 869.5306f },
	{ -55, -32.5f, 660.4f },
	{ -81, -170, 969 },
	{ 50, 14.03133f, 669.4f },
	{ -55, -20.96867f, 691.4f },
	{ -165, -15.96867f, 669.4f },
	{ -236, -10, 666.4f },
	{ -53, -69.28255f, 932.8f },
	{ 50, -69.19008f, 907.8001f },
	{ -129, -170, 1034 },
	{ -147, -38.75f, 916.8f },
	{ 50, -40.625f, 638.4f },
	{ -165, -23.75f, 638.4f },
	{ 50, -55, 511.975f },
	{ -55, -45, 528.475f },
	{ -165, -35, 511.975f },
	{ -278.5f, -20, 528.475f },
	{ -378.5f, -10, 524.725f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009EEE4[] = {
	{ -0.058832f, 0.772714f, -0.632023f },
	{ 0.049337f, 0.661988f, -0.747889f },
	{ 0.109432f, 0.817045f, -0.566093f },
	{ -0.010966f, 0.996999f, -0.076637f },
	{ 0.100015f, 0.994986f, 0.000014f },
	{ -0.331471f, 0.9207799f, -0.205649f },
	{ -0.136534f, 0.9648049f, -0.224746f },
	{ -0.094001f, 0.975953f, -0.196672f },
	{ -0.078743f, 0.996893f, -0.002144f },
	{ 0.099015f, 0.995086f, 0.000221f },
	{ 0.224298f, 0.229645f, 0.947076f },
	{ 0.048906f, 0.238869f, 0.9698189f },
	{ 0.199258f, 0.534858f, 0.821111f },
	{ 0.127765f, 0.985638f, 0.110424f },
	{ 0.098528f, 0.995134f, 0 },
	{ 0.555551f, 0.790703f, 0.257201f },
	{ 0.316962f, 0.948438f, 0 },
	{ 0.098528f, 0.995134f, 0 },
	{ -0.173664f, 0.888117f, 0.425545f },
	{ -0.221477f, 0.973081f, -0.063727f },
	{ -0.045908f, 0.814226f, 0.57873f },
	{ 0.040883f, 0.416069f, 0.908413f },
	{ 0.198283f, 0.464043f, 0.863335f },
	{ -0.160051f, 0.882657f, 0.441928f },
	{ -0.198627f, 0.907366f, 0.37045f },
	{ -0.079549f, 0.499262f, -0.862792f },
	{ 0.309514f, 0.493547f, 0.812781f },
	{ -0.3549f, 0.808441f, -0.469542f },
	{ -0.134392f, 0.9094819f, -0.393423f },
	{ 0.043333f, 0.9607379f, -0.274053f },
	{ -0.172555f, 0.8482569f, -0.500684f },
	{ 0.029591f, 0.158578f, 0.986903f },
	{ 0.178223f, 0.168037f, 0.9695359f },
	{ 0.729729f, 0.517545f, 0.446814f },
	{ -0.069509f, 0.389148f, 0.9185489f },
	{ -0.294072f, 0.315002f, -0.902383f },
	{ 0.071234f, 0.660814f, -0.747162f },
	{ 0.094809f, 0.995495f, 0 },
	{ 0.092677f, 0.9956959f, 0 },
	{ 0.110837f, 0.993839f, 0 },
	{ 0.116268f, 0.9932179f, -0.000185f },
	{ 0.100518f, 0.994935f, -0.000383f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009F0DC = { vertex_0009ECEC, normal_0009EEE4, LengthOfArray<Sint32>(vertex_0009ECEC), meshlist_0009ECA4, matlist_0009EA2C, LengthOfArray<Uint16>(meshlist_0009ECA4), LengthOfArray<Uint16>(matlist_0009EA2C), { -165, -55.43259f, 774.2377f }, 339.1263f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009F104 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009F0DC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009F138[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009F14C[] = {
	0x8000u | 17, 20, 23, 26, 27, 18, 17, 32, 34, 33, 35, 41, 42, 12, 13, 8, 9, 4,
	0x8000u | 15, 23, 24, 27, 28, 17, 16, 34, 36, 35, 37, 42, 43, 13, 14, 9,
	0x8000u | 13, 24, 21, 28, 29, 16, 15, 36, 38, 37, 39, 43, 44, 14,
	3, 2, 3, 7,
	0x8000u | 18, 4, 3, 8, 7, 12, 11, 41, 40, 33, 31, 32, 30, 18, 19, 26, 25, 20, 22,
	0x8000u | 7, 40, 11, 10, 6, 5, 1, 0,
	0x8000u | 5, 11, 7, 6, 2, 1
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009F1F8[] = {
	{ 2878, -3665 },
	{ 3177, -3699 },
	{ 2868, -3745 },
	{ 3170, -3778 },
	{ 2868, -3745 },
	{ 3170, -3778 },
	{ 2845, -4023 },
	{ 3132, -4044 },
	{ 2820, -4302 },
	{ 3094, -4309 },
	{ 2804, -4487 },
	{ 3070, -4487 },
	{ 3070, -4544 },
	{ 3310, -4534 },
	{ 3310, -4594 },
	{ 3587, -4575 },
	{ 3587, -4601 },
	{ 3177, -3699 },
	{ 3473, -3665 },
	{ 3170, -3778 },
	{ 3463, -3745 },
	{ 3170, -3778 },
	{ 3463, -3745 },
	{ 3132, -4044 },
	{ 3406, -4023 },
	{ 3094, -4309 },
	{ 3347, -4302 },
	{ 3070, -4487 },
	{ 3310, -4487 },
	{ 3310, -4534 },
	{ 3587, -4526 },
	{ 3587, -4575 },
	{ 3473, -3665 },
	{ 3656, -3610 },
	{ 3463, -3745 },
	{ 3648, -3688 },
	{ 3463, -3745 },
	{ 3648, -3688 },
	{ 3406, -4023 },
	{ 3626, -3988 },
	{ 3347, -4302 },
	{ 3602, -4288 },
	{ 3310, -4487 },
	{ 3587, -4487 },
	{ 3587, -4526 },
	{ 3070, -4653 },
	{ 3310, -4627 },
	{ 3070, -4614 },
	{ 3587, -4601 },
	{ 3310, -4627 },
	{ 3310, -4594 },
	{ 3070, -4614 },
	{ 3070, -4544 },
	{ 2804, -4553 },
	{ 2804, -4487 },
	{ 2564, -4487 },
	{ 2820, -4302 },
	{ 2569, -4284 },
	{ 2845, -4023 },
	{ 2578, -3982 },
	{ 2868, -3745 },
	{ 2586, -3679 },
	{ 2868, -3745 },
	{ 2586, -3679 },
	{ 2878, -3665 },
	{ 2596, -3600 },
	{ 2564, -4487 },
	{ 2804, -4553 },
	{ 2564, -4560 },
	{ 2804, -4633 },
	{ 2564, -4653 },
	{ 2804, -4679 },
	{ 2564, -4704 },
	{ 2804, -4553 },
	{ 3070, -4614 },
	{ 2804, -4633 },
	{ 3070, -4653 },
	{ 2804, -4679 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009F330[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_0009F14C, NULL, NULL, NULL, uv_0009F1F8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009F348[] = {
	{ 42.48524f, -140.0219f, 1942.778f },
	{ 123.2072f, -140.0219f, 1932.778f },
	{ 212.4263f, -140.0219f, 1922.778f },
	{ 293.1483f, -140.0219f, 1912.778f },
	{ 386.6158f, -140.0219f, 1902.778f },
	{ 42.48524f, -85.37978f, 1922.906f },
	{ 123.2072f, -91.80766f, 1915.246f },
	{ 212.4263f, -98.23553f, 1907.585f },
	{ 293.1483f, -104.6634f, 1899.925f },
	{ 386.6158f, -111.0913f, 1892.264f },
	{ 42.48524f, -60.1336f, 1886.87f },
	{ 123.2072f, -69.53052f, 1883.45f },
	{ 212.4263f, -78.92744f, 1880.03f },
	{ 293.1483f, -88.32438f, 1876.61f },
	{ 386.6158f, -97.72131f, 1873.19f },
	{ 407, -95, 1559.3f },
	{ 345, -85, 1567.3f },
	{ 246, -75, 1580.3f },
	{ 145, -65, 1567.3f },
	{ 50, -55, 1541.3f },
	{ 148, -9.169299f, 1536.3f },
	{ 410, 5.8307f, 1528.3f },
	{ 53, -34.1693f, 1510.3f },
	{ 249, -24.1693f, 1549.3f },
	{ 348, 0.8307f, 1536.3f },
	{ 50, -40.625f, 1541.3f },
	{ 145, -48.75f, 1567.3f },
	{ 246, -56.875f, 1580.3f },
	{ 345, -65, 1567.3f },
	{ 407, -73.125f, 1559.3f },
	{ 47.18197f, -55, 1659.988f },
	{ 44.36393f, -55, 1778.675f },
	{ 136.8277f, -65, 1676.238f },
	{ 128.6554f, -65, 1785.175f },
	{ 233.4099f, -75, 1684.363f },
	{ 220.8197f, -75, 1788.425f },
	{ 325.5556f, -85, 1676.238f },
	{ 306.1112f, -85, 1785.175f },
	{ 399.3559f, -95, 1662.488f },
	{ 391.7119f, -95, 1779.675f },
	{ 42.48524f, -55, 1857.8f },
	{ 123.2072f, -65, 1857.8f },
	{ 212.4263f, -75, 1857.8f },
	{ 293.1483f, -85, 1857.8f },
	{ 386.6158f, -95, 1857.8f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009F564[] = {
	{ 0.11563f, 0.339454f, 0.933489f },
	{ 0.110328f, 0.33964f, 0.9340619f },
	{ 0.11005f, 0.339601f, 0.934109f },
	{ 0.108029f, 0.339607f, 0.934343f },
	{ 0.100032f, 0.339849f, 0.935145f },
	{ 0.122832f, 0.604709f, 0.786918f },
	{ 0.117185f, 0.6042399f, 0.788138f },
	{ 0.116927f, 0.604293f, 0.7881359f },
	{ 0.114739f, 0.604298f, 0.788454f },
	{ 0.106277f, 0.604199f, 0.789714f },
	{ 0.122831f, 0.917049f, 0.379387f },
	{ 0.117149f, 0.917375f, 0.380393f },
	{ 0.116963f, 0.917401f, 0.380387f },
	{ 0.114688f, 0.917586f, 0.380633f },
	{ 0.106279f, 0.91821f, 0.381569f },
	{ 0.200435f, 0.67354f, 0.7114559f },
	{ 0.18535f, 0.680822f, 0.708609f },
	{ 0.079614f, 0.7282799f, 0.68064f },
	{ -0.060177f, 0.724172f, 0.6869889f },
	{ -0.143963f, 0.625691f, 0.766672f },
	{ -0.181793f, 0.727464f, 0.661625f },
	{ 0.08695199f, 0.389106f, 0.91708f },
	{ -0.349038f, 0.768231f, 0.536651f },
	{ -0.013022f, 0.59052f, 0.806918f },
	{ 0.040815f, 0.451649f, 0.891262f },
	{ -0.34525f, 0.462864f, 0.816431f },
	{ -0.198496f, 0.382355f, 0.902443f },
	{ -0.009218f, 0.304769f, 0.952382f },
	{ 0.082325f, 0.241846f, 0.9668159f },
	{ 0.110739f, 0.188198f, 0.975868f },
	{ 0.106299f, 0.994321f, 0.005132f },
	{ 0.116209f, 0.9932089f, 0.005611f },
	{ 0.103281f, 0.994624f, 0.00744f },
	{ 0.111662f, 0.993714f, 0.00802f },
	{ 0.103015f, 0.994597f, 0.012856f },
	{ 0.111662f, 0.993648f, 0.013975f },
	{ 0.126066f, 0.991877f, 0.016961f },
	{ 0.117338f, 0.992966f, 0.015819f },
	{ 0.1515f, 0.988277f, 0.018891f },
	{ 0.123096f, 0.992285f, 0.014746f },
	{ 0.12245f, 0.988416f, 0.089669f },
	{ 0.116859f, 0.988982f, 0.090875f },
	{ 0.116394f, 0.9887559f, 0.093885f },
	{ 0.11467f, 0.988871f, 0.09478699f },
	{ 0.105934f, 0.990098f, 0.092104f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009F780 = { vertex_0009F348, normal_0009F564, LengthOfArray<Sint32>(vertex_0009F348), meshlist_0009F330, matlist_0009F138, LengthOfArray<Uint16>(meshlist_0009F330), LengthOfArray<Uint16>(matlist_0009F138), { 226.2426f, -67.09557f, 1726.539f }, 283.7711f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009F7A8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009F780, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009F7DC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009F7F0[] = {
	0x8000u | 10, 9, 28, 8, 29, 7, 37, 6, 38, 5, 39,
	10, 0, 42, 1, 43, 2, 44, 3, 45, 4, 46,
	10, 39, 26, 38, 35, 37, 36, 29, 40, 28, 41,
	0x8000u | 10, 5, 30, 6, 31, 7, 32, 8, 33, 9, 23,
	4, 16, 15, 11, 10,
	0x8000u | 10, 16, 27, 11, 22, 12, 21, 13, 20, 14, 19,
	10, 23, 34, 33, 24, 32, 25, 31, 17, 30, 18,
	10, 10, 18, 11, 17, 12, 25, 13, 24, 14, 34,
	10, 26, 0, 35, 1, 36, 2, 40, 3, 41, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009F8AC[] = {
	{ 2586, -1713 },
	{ 2586, -1452 },
	{ 2868, -1713 },
	{ 2841, -1497 },
	{ 3181, -1713 },
	{ 3181, -1410 },
	{ 3463, -1713 },
	{ 3463, -1452 },
	{ 3791, -1713 },
	{ 3690, -1489 },
	{ 3763, -1418 },
	{ 3771, -1083 },
	{ 3463, -1373 },
	{ 3463, -1051 },
	{ 3181, -1330 },
	{ 3181, -1019 },
	{ 2841, -1418 },
	{ 2849, -1083 },
	{ 2586, -1373 },
	{ 2586, -1051 },
	{ 3690, -1489 },
	{ 3763, -1418 },
	{ 3463, -1452 },
	{ 3463, -1373 },
	{ 3181, -1410 },
	{ 3181, -1330 },
	{ 2841, -1497 },
	{ 2841, -1418 },
	{ 2586, -1452 },
	{ 2586, -1373 },
	{ 3791, -1713 },
	{ 3701, -1963 },
	{ 3463, -1713 },
	{ 3419, -1986 },
	{ 3181, -1713 },
	{ 3181, -1976 },
	{ 2868, -1713 },
	{ 2856, -1895 },
	{ 2586, -1713 },
	{ 2586, -1963 },
	{ 3642, -2390 },
	{ 3781, -2390 },
	{ 3448, -2058 },
	{ 3701, -2061 },
	{ 3642, -2390 },
	{ 3496, -2439 },
	{ 3448, -2058 },
	{ 3362, -2244 },
	{ 3181, -2074 },
	{ 3181, -2184 },
	{ 2856, -1992 },
	{ 2856, -2103 },
	{ 2586, -2061 },
	{ 2586, -2171 },
	{ 2586, -1963 },
	{ 2586, -2061 },
	{ 2856, -1895 },
	{ 2856, -1992 },
	{ 3181, -1976 },
	{ 3181, -2074 },
	{ 3419, -1986 },
	{ 3448, -2058 },
	{ 3701, -1963 },
	{ 3701, -2061 },
	{ 3701, -2061 },
	{ 3701, -2061 },
	{ 3448, -2058 },
	{ 3448, -2058 },
	{ 3181, -2074 },
	{ 3181, -2074 },
	{ 2856, -1992 },
	{ 2856, -1992 },
	{ 2586, -2061 },
	{ 2586, -2061 },
	{ 3763, -1418 },
	{ 3763, -1418 },
	{ 3463, -1373 },
	{ 3463, -1373 },
	{ 3181, -1330 },
	{ 3181, -1330 },
	{ 2841, -1418 },
	{ 2841, -1418 },
	{ 2586, -1373 },
	{ 2586, -1373 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_0009F9FC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 9, poly_0009F7F0, NULL, NULL, NULL, uv_0009F8AC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_0009FA14[] = {
	{ 446, -95, 655.3999f },
	{ 345, -85, 638.4f },
	{ 250, -75, 621.4f },
	{ 136, -65, 655.4f },
	{ 50, -55, 638.4f },
	{ 455, 40, 771.1001f },
	{ 345, 35, 771.1001f },
	{ 250, 10, 771.1001f },
	{ 145, 25, 771.1001f },
	{ 50, 40, 771.1001f },
	{ 425, -95, 907.8001f },
	{ 340, -45, 906.8f },
	{ 250, -85, 912.8f },
	{ 141, -85, 880.8001f },
	{ 50, -85, 907.8001f },
	{ 452, -95, 1036.5f },
	{ 405, -65, 1036.5f },
	{ 340, -29.10873f, 906.8f },
	{ 425, -69.5599f, 907.8001f },
	{ 50, -160, 950.8001f },
	{ 141, -160, 923.8001f },
	{ 250, -160, 955.8f },
	{ 311, -160, 979 },
	{ 50, 59.13481f, 869.5306f },
	{ 141, -68.75f, 880.8001f },
	{ 250, -69.54881f, 912.8f },
	{ 446, -73.125f, 655.3999f },
	{ 356, -160, 1056 },
	{ 50, 14.03133f, 669.4f },
	{ 136, -0.96867f, 686.4f },
	{ 425, 59.1348f, 869.5306f },
	{ 330, 64.13479f, 878.5306f },
	{ 250, 29.1348f, 874.5306f },
	{ 141, 44.1348f, 842.5306f },
	{ 50, -69.19008f, 907.8001f },
	{ 345, -65, 638.4f },
	{ 250, -56.875f, 621.4f },
	{ 250, -15.96867f, 652.4f },
	{ 345, 9.031329f, 669.4f },
	{ 421, 14.03133f, 683.3999f },
	{ 136, -48.75f, 655.4f },
	{ 50, -40.625f, 638.4f },
	{ 448.25f, -95, 524.725f },
	{ 345, -85, 511.975f },
	{ 250, -75, 499.2251f },
	{ 138.25f, -65, 524.7251f },
	{ 50, -55, 511.975f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_0009FC48[] = {
	{ 0.18632f, 0.685767f, -0.703568f },
	{ 0.190723f, 0.6971689f, -0.691071f },
	{ 0.045512f, 0.758908f, -0.649606f },
	{ 0.020507f, 0.659548f, -0.751382f },
	{ 0.21502f, 0.711001f, -0.669511f },
	{ -0.019455f, 0.972567f, -0.23181f },
	{ -0.138747f, 0.958303f, -0.24981f },
	{ -0.068339f, 0.969519f, -0.235293f },
	{ 0.141429f, 0.9614649f, -0.235762f },
	{ 0.15051f, 0.948716f, -0.278003f },
	{ 0.461877f, 0.771278f, 0.43795f },
	{ -0.06393699f, 0.339436f, 0.938454f },
	{ -0.199925f, 0.288902f, 0.936251f },
	{ 0.001344f, 0.246514f, 0.969138f },
	{ 0.274712f, 0.259385f, 0.92588f },
	{ 0.515857f, 0.849811f, -0.108222f },
	{ -0.07786699f, 0.976193f, 0.202447f },
	{ -0.010216f, 0.195301f, 0.9806899f },
	{ 0.030993f, 0.106173f, 0.993864f },
	{ 0.249274f, 0.481683f, 0.840145f },
	{ 0.001376f, 0.497384f, 0.86753f },
	{ -0.234651f, 0.483497f, 0.843309f },
	{ -0.548037f, 0.506831f, 0.6654159f },
	{ 0.30528f, 0.803994f, 0.510292f },
	{ 0.025841f, 0.168321f, 0.985393f },
	{ -0.140906f, 0.140257f, 0.980037f },
	{ 0.159926f, 0.160196f, -0.974044f },
	{ -0.757931f, 0.473103f, 0.449126f },
	{ 0.232287f, 0.756203f, -0.611719f },
	{ 0.115666f, 0.82557f, -0.552318f },
	{ 0.0571f, 0.901523f, 0.428948f },
	{ -0.140323f, 0.874479f, 0.464322f },
	{ -0.212856f, 0.80832f, 0.5489179f },
	{ 0.147502f, 0.909777f, 0.388006f },
	{ 0.30287f, 0.140777f, 0.9425769f },
	{ 0.133936f, 0.213717f, -0.967671f },
	{ -0.067011f, 0.26159f, -0.96285f },
	{ -0.073259f, 0.7625549f, -0.6427619f },
	{ -0.029392f, 0.771382f, -0.635694f },
	{ 0.053879f, 0.774694f, -0.630037f },
	{ -0.000493f, 0.29607f, -0.955166f },
	{ 0.231424f, 0.266409f, -0.935665f },
	{ 0.098385f, 0.9951479f, 0.000861f },
	{ 0.10179f, 0.994806f, 0.000396f },
	{ 0.096857f, 0.995298f, 0.000395f },
	{ 0.101976f, 0.994786f, 0.001284f },
	{ 0.115304f, 0.9933299f, 0.001009f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_0009FE7C = { vertex_0009FA14, normal_0009FC48, LengthOfArray<Sint32>(vertex_0009FA14), meshlist_0009F9FC, matlist_0009F7DC, LengthOfArray<Uint16>(meshlist_0009F9FC), LengthOfArray<Uint16>(matlist_0009F7DC), { 252.5f, -47.9326f, 777.6125f }, 344.2467f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_0009FEA4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009FE7C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_0009FED8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_0009FEEC[] = {
	0x8000u | 12, 21, 20, 35, 37, 36, 38, 46, 47, 16, 17, 11, 49,
	0x8000u | 8, 18, 19, 39, 41, 40, 42, 48, 49,
	0x8000u | 10, 20, 18, 37, 39, 38, 40, 47, 48, 17, 49,
	0x8000u | 14, 22, 21, 33, 35, 34, 36, 45, 46, 15, 16, 10, 11, 5, 49,
	0x8000u | 18, 25, 26, 28, 27, 24, 23, 29, 31, 30, 32, 43, 44, 13, 14, 8, 9, 3, 4,
	3, 2, 3, 8,
	0x8000u | 14, 5, 4, 10, 9, 15, 14, 45, 44, 34, 32, 33, 31, 22, 23,
	0x8000u | 7, 43, 13, 12, 7, 6, 1, 0,
	0x8000u | 5, 13, 8, 7, 2, 1
};

extern "C" __declspec(dllexport) NJS_TEX uv_0009FFB4[] = {
	{ 4531, -3745 },
	{ 4754, -3745 },
	{ 4429, -4023 },
	{ 4639, -4023 },
	{ 4326, -4302 },
	{ 4524, -4302 },
	{ 4257, -4487 },
	{ 4447, -4487 },
	{ 4447, -4518 },
	{ 4586, -4508 },
	{ 4586, -4535 },
	{ 4698, -4487 },
	{ 4917, -3745 },
	{ 5051, -3745 },
	{ 4792, -4023 },
	{ 4919, -4023 },
	{ 4668, -4302 },
	{ 4787, -4302 },
	{ 4586, -4487 },
	{ 4698, -4487 },
	{ 4754, -3745 },
	{ 4917, -3745 },
	{ 4639, -4023 },
	{ 4792, -4023 },
	{ 4524, -4302 },
	{ 4668, -4302 },
	{ 4447, -4487 },
	{ 4586, -4487 },
	{ 4586, -4508 },
	{ 4698, -4487 },
	{ 4221, -3745 },
	{ 4531, -3745 },
	{ 4121, -4023 },
	{ 4429, -4023 },
	{ 4020, -4302 },
	{ 4326, -4302 },
	{ 3953, -4487 },
	{ 4257, -4487 },
	{ 4257, -4522 },
	{ 4447, -4518 },
	{ 4447, -4556 },
	{ 4586, -4535 },
	{ 4586, -4551 },
	{ 4698, -4487 },
	{ 3656, -3610 },
	{ 3847, -3633 },
	{ 3648, -3688 },
	{ 3839, -3712 },
	{ 3648, -3688 },
	{ 3839, -3712 },
	{ 3626, -3988 },
	{ 3792, -4002 },
	{ 3602, -4288 },
	{ 3745, -4293 },
	{ 3587, -4487 },
	{ 3713, -4487 },
	{ 3713, -4522 },
	{ 3953, -4522 },
	{ 3953, -4564 },
	{ 4257, -4564 },
	{ 4257, -4589 },
	{ 4447, -4576 },
	{ 3953, -4589 },
	{ 4257, -4589 },
	{ 3953, -4564 },
	{ 4586, -4551 },
	{ 4447, -4576 },
	{ 4447, -4556 },
	{ 4257, -4564 },
	{ 4257, -4522 },
	{ 3953, -4522 },
	{ 3953, -4487 },
	{ 3713, -4487 },
	{ 4020, -4302 },
	{ 3745, -4293 },
	{ 4121, -4023 },
	{ 3792, -4002 },
	{ 4221, -3745 },
	{ 3839, -3712 },
	{ 3587, -4487 },
	{ 3713, -4522 },
	{ 3587, -4526 },
	{ 3713, -4564 },
	{ 3587, -4575 },
	{ 3713, -4589 },
	{ 3587, -4601 },
	{ 3713, -4522 },
	{ 3953, -4564 },
	{ 3713, -4564 },
	{ 3953, -4589 },
	{ 3713, -4589 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A0120[] = {
	{ NJD_MESHSET_TRIMESH | 0, 9, poly_0009FEEC, NULL, NULL, NULL, uv_0009FFB4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A0138[] = {
	{ 386.6158f, -140.0219f, 1902.778f },
	{ 429.1011f, -140.0219f, 1897.778f },
	{ 509.8232f, -140.0219f, 1897.778f },
	{ 611.7875f, -140.0219f, 1897.778f },
	{ 675.5151f, -140.0219f, 1892.778f },
	{ 722.2491f, -140.0219f, 1882.778f },
	{ 386.6158f, -111.0913f, 1892.264f },
	{ 429.1011f, -114.3052f, 1888.434f },
	{ 509.8232f, -114.3052f, 1888.434f },
	{ 611.7875f, -114.3052f, 1888.434f },
	{ 675.5151f, -117.5192f, 1884.604f },
	{ 722.2491f, -123.947f, 1876.943f },
	{ 386.6158f, -97.72131f, 1873.19f },
	{ 429.1011f, -102.4198f, 1871.479f },
	{ 509.8232f, -102.4198f, 1871.479f },
	{ 611.7875f, -102.4198f, 1871.479f },
	{ 675.5151f, -107.1182f, 1869.769f },
	{ 722.2491f, -116.5152f, 1866.349f },
	{ 834, -115, 1567.5f },
	{ 879, -140, 1567.5f },
	{ 779, -105, 1567.5f },
	{ 704, -100, 1567.5f },
	{ 600, -100, 1567.5f },
	{ 471, -100, 1566.3f },
	{ 407, -95, 1559.3f },
	{ 410, 5.8307f, 1528.3f },
	{ 474, -19.1693f, 1535.3f },
	{ 471, -76.875f, 1566.3f },
	{ 407, -73.125f, 1559.3f },
	{ 399.3559f, -95, 1662.488f },
	{ 391.7119f, -95, 1779.675f },
	{ 455.2879f, -100, 1668.113f },
	{ 439.5759f, -100, 1781.925f },
	{ 566.1837f, -100, 1676.238f },
	{ 532.3674f, -100, 1785.175f },
	{ 669.4202f, -100, 1676.238f },
	{ 634.8405f, -100, 1785.175f },
	{ 740.1931f, -105, 1676.238f },
	{ 701.3864f, -105, 1785.175f },
	{ 792.0934f, -115, 1676.238f },
	{ 750.1869f, -115, 1785.175f },
	{ 834.5572f, -140, 1676.238f },
	{ 790.1144f, -140, 1785.175f },
	{ 386.6158f, -95, 1857.8f },
	{ 429.1011f, -100, 1857.8f },
	{ 509.8232f, -100, 1857.8f },
	{ 611.7875f, -100, 1857.8f },
	{ 675.5151f, -105, 1857.8f },
	{ 722.2491f, -115, 1857.8f },
	{ 760.4858f, -140, 1857.8f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A0390[] = {
	{ 0.10992f, 0.339435f, 0.934185f },
	{ 0.055734f, 0.340974f, 0.938419f },
	{ 0, 0.341505f, 0.93988f },
	{ 0.036474f, 0.341243f, 0.939267f },
	{ 0.133628f, 0.33826f, 0.9315169f },
	{ 0.351543f, 0.31942f, 0.879993f },
	{ 0.116776f, 0.60492f, 0.787677f },
	{ 0.059148f, 0.606855f, 0.792608f },
	{ 0, 0.608328f, 0.793685f },
	{ 0.038814f, 0.608094f, 0.792916f },
	{ 0.142147f, 0.602354f, 0.785471f },
	{ 0.37242f, 0.564791f, 0.73642f },
	{ 0.116775f, 0.917615f, 0.379929f },
	{ 0.05896f, 0.921924f, 0.382858f },
	{ 0, 0.9236709f, 0.383187f },
	{ 0.038894f, 0.923046f, 0.382719f },
	{ 0.142635f, 0.914281f, 0.379137f },
	{ 0.375727f, 0.856077f, 0.354911f },
	{ 0.365702f, 0.919623f, 0.143373f },
	{ 0.476859f, 0.858345f, 0.189339f },
	{ 0.134856f, 0.989644f, 0.049171f },
	{ 0.039786f, 0.999118f, 0.013426f },
	{ 0, 1, 0 },
	{ -0.012589f, 0.907469f, 0.419931f },
	{ -0.027093f, 0.679558f, 0.733122f },
	{ 0.060696f, 0.410174f, 0.9099849f },
	{ 0.060696f, 0.410174f, 0.9099849f },
	{ -0.02784f, 0.202795f, 0.978825f },
	{ -0.021416f, 0.218349f, 0.9756359f },
	{ 0.082431f, 0.996558f, 0.008837f },
	{ 0.102686f, 0.99466f, 0.010382f },
	{ 0.041435f, 0.999131f, 0.004445f },
	{ 0.050914f, 0.9986899f, 0.005148f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.034449f, 0.999339f, 0.011612f },
	{ 0.037568f, 0.999214f, 0.012654f },
	{ 0.126622f, 0.9908929f, 0.045798f },
	{ 0.137471f, 0.9892589f, 0.049688f },
	{ 0.341264f, 0.9305159f, 0.132962f },
	{ 0.364803f, 0.920194f, 0.141993f },
	{ 0.484993f, 0.853085f, 0.192425f },
	{ 0.512357f, 0.83442f, 0.20306f },
	{ 0.11637f, 0.988757f, 0.0939f },
	{ 0.061039f, 0.9939989f, 0.090771f },
	{ 0, 0.996171f, 0.087428f },
	{ 0.035043f, 0.995098f, 0.09247699f },
	{ 0.135552f, 0.984702f, 0.109483f },
	{ 0.358207f, 0.921955f, 0.147264f },
	{ 0.555472f, 0.763393f, 0.329671f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A05E8 = { vertex_000A0138, normal_000A0390, LengthOfArray<Sint32>(vertex_000A0138), meshlist_000A0120, matlist_0009FED8, LengthOfArray<Uint16>(meshlist_000A0120), LengthOfArray<Uint16>(matlist_0009FED8), { 632.8079f, -67.09557f, 1715.539f }, 309.304f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A0610 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A05E8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A0644[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A066C[] = {
	0x8000u | 6, 10, 13, 16, 20, 18, 19
};

extern "C" __declspec(dllexport) Sint16 poly_000A067A[] = {
	6, 10, 17, 16, 15, 18, 19,
	9, 1, 2, 4, 5, 7, 8, 10, 11, 17,
	10, 13, 12, 10, 9, 7, 6, 4, 3, 1, 0,
	3, 14, 19, 15
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A06BC[] = {
	{ 51, 255 },
	{ 496, 255 },
	{ 51, 170 },
	{ 496, 170 },
	{ 199, -127 },
	{ 392, -39 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A06D4[] = {
	{ 3901, -3407 },
	{ 3690, -3362 },
	{ 3901, -3407 },
	{ 3713, -3518 },
	{ 3901, -3518 },
	{ 3847, -3633 },
	{ 3939, -2390 },
	{ 3781, -2390 },
	{ 3939, -2728 },
	{ 3791, -2728 },
	{ 3939, -3068 },
	{ 3701, -3068 },
	{ 3901, -3407 },
	{ 3690, -3362 },
	{ 3690, -3362 },
	{ 3839, -3712 },
	{ 4221, -3745 },
	{ 3901, -3407 },
	{ 4221, -3407 },
	{ 3939, -3068 },
	{ 4221, -3068 },
	{ 3939, -2728 },
	{ 4221, -2728 },
	{ 3939, -2390 },
	{ 4221, -2390 },
	{ 3656, -3610 },
	{ 3847, -3633 },
	{ 3713, -3518 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A0744[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000A066C, NULL, NULL, NULL, uv_000A06BC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_000A067A, NULL, NULL, NULL, uv_000A06D4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A0774[] = {
	{ 600, -100, 1036.5f },
	{ 505, -100, 1036.5f },
	{ 452, -95, 1036.5f },
	{ 600, -100, 1169.2f },
	{ 505, -100, 1169.2f },
	{ 455, -95, 1169.2f },
	{ 600, -100, 1301.9f },
	{ 505, -100, 1301.9f },
	{ 425, -95, 1301.9f },
	{ 600, -100, 1434.6f },
	{ 492, -100, 1434.6f },
	{ 421, -95, 1417.6f },
	{ 600, -100, 1567.5f },
	{ 471, -100, 1566.3f },
	{ 410, 5.8307f, 1528.3f },
	{ 429, 40, 1478.337f },
	{ 492, -76.875f, 1434.6f },
	{ 421, -69.5599f, 1417.6f },
	{ 492, 5, 1478.337f },
	{ 474, -19.1693f, 1535.3f },
	{ 471, -76.875f, 1566.3f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A0870[] = {
	{ 0, 1, 0 },
	{ 0.048373f, 0.9988289f, 0 },
	{ 0.09663299f, 0.99532f, 0 },
	{ 0, 1, 0 },
	{ 0.043374f, 0.999059f, 0 },
	{ 0.08608399f, 0.9962879f, 0 },
	{ 0, 1, 0 },
	{ 0.034522f, 0.999403f, 0.001502f },
	{ 0.070539f, 0.997503f, 0.00348f },
	{ 0, 1, 0 },
	{ 0.384659f, 0.893353f, -0.232288f },
	{ 0.205228f, 0.729004f, -0.653019f },
	{ 0, 1, 0 },
	{ 0.7321039f, 0.671115f, 0.116737f },
	{ 0.358867f, 0.813078f, 0.458387f },
	{ 0.424747f, 0.893355f, -0.146652f },
	{ 0.801968f, 0.159822f, -0.575591f },
	{ 0.249973f, 0.235268f, -0.939235f },
	{ 0.776471f, 0.608338f, -0.164368f },
	{ 0.842849f, 0.345235f, 0.412817f },
	{ 0.977731f, -0.018922f, 0.209008f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A096C = { vertex_000A0774, normal_000A0870, LengthOfArray<Sint32>(vertex_000A0774), meshlist_000A0744, matlist_000A0644, LengthOfArray<Uint16>(meshlist_000A0744), LengthOfArray<Uint16>(matlist_000A0644), { 505, -30, 1302 }, 281.9844f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A0994 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A096C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A09C8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A09F0[] = {
	0x8000u | 5, 34, 1, 35, 2, 36,
	0x8000u | 5, 34, 0, 1, 7, 8,
	0x8000u | 6, 32, 29, 9, 30, 31, 24,
	0x8000u | 12, 15, 8, 14, 7, 13, 6, 12, 5, 10, 3, 11, 4,
	0x8000u | 14, 11, 18, 10, 17, 12, 19, 13, 20, 14, 21, 15, 22, 16, 23,
	0x8000u | 7, 2, 1, 28, 27, 32, 33, 29,
	0x8000u | 5, 15, 16, 25, 24, 30
};

extern "C" __declspec(dllexport) Sint16 poly_000A0A6A[] = {
	6, 27, 33, 26, 29, 25, 30,
	6, 25, 15, 26, 8, 27, 1
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A0A88[] = {
	{ 4221, -1100 },
	{ 3939, -1429 },
	{ 3939, -1093 },
	{ 3763, -1418 },
	{ 3771, -1083 },
	{ 4221, -1100 },
	{ 4221, -1441 },
	{ 3939, -1429 },
	{ 4221, -1713 },
	{ 3939, -1713 },
	{ 3690, -1489 },
	{ 3939, -1713 },
	{ 3791, -1713 },
	{ 3901, -1911 },
	{ 3701, -1963 },
	{ 3701, -2061 },
	{ 3901, -2061 },
	{ 3939, -1713 },
	{ 4221, -2052 },
	{ 4221, -1713 },
	{ 4579, -2052 },
	{ 4579, -1713 },
	{ 4802, -2052 },
	{ 4802, -1713 },
	{ 4966, -2052 },
	{ 4966, -1713 },
	{ 5100, -2052 },
	{ 5100, -1713 },
	{ 5100, -2052 },
	{ 5100, -2390 },
	{ 4966, -2052 },
	{ 4966, -2390 },
	{ 4802, -2052 },
	{ 4802, -2390 },
	{ 4579, -2052 },
	{ 4579, -2390 },
	{ 4221, -2052 },
	{ 4221, -2390 },
	{ 3901, -2061 },
	{ 3939, -2390 },
	{ 3701, -2061 },
	{ 3781, -2390 },
	{ 3763, -1418 },
	{ 3939, -1429 },
	{ 3763, -1418 },
	{ 3939, -1429 },
	{ 3690, -1489 },
	{ 3865, -1501 },
	{ 3939, -1713 },
	{ 3901, -2061 },
	{ 3701, -2061 },
	{ 3901, -2061 },
	{ 3701, -2061 },
	{ 3901, -1911 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A0B60[] = {
	{ 82, 93 },
	{ 181, -152 },
	{ 476, 93 },
	{ 476, -65 },
	{ 961, 93 },
	{ 750, -165 },
	{ 961, 93 },
	{ 961, 152 },
	{ 476, 93 },
	{ 476, 152 },
	{ 82, 93 },
	{ 82, 152 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A0B90[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_000A09F0, NULL, NULL, NULL, uv_000A0A88, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000A0A6A, NULL, NULL, NULL, uv_000A0B60, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A0BC0[] = {
	{ 600, -100, 664.3999f },
	{ 505, -100, 660.4f },
	{ 446, -95, 655.3999f },
	{ 850, -115, 771.1001f },
	{ 895, -140, 771.1001f },
	{ 795, -105, 771.1001f },
	{ 720, -100, 771.1001f },
	{ 600, -100, 771.1001f },
	{ 505, -100, 771.1001f },
	{ 455, 40, 771.1001f },
	{ 850, -115, 903.8001f },
	{ 895, -140, 903.8001f },
	{ 795, -105, 903.8001f },
	{ 720, -100, 903.8001f },
	{ 600, -100, 903.8001f },
	{ 492, -100, 907.8001f },
	{ 425, -95, 907.8001f },
	{ 850, -115, 1036.5f },
	{ 895, -140, 1036.5f },
	{ 795, -105, 1036.5f },
	{ 720, -100, 1036.5f },
	{ 600, -100, 1036.5f },
	{ 505, -100, 1036.5f },
	{ 452, -95, 1036.5f },
	{ 425, -69.5599f, 907.8001f },
	{ 492, -76.875f, 907.8001f },
	{ 505, -76.875f, 771.1001f },
	{ 505, -76.875f, 660.4f },
	{ 446, -73.125f, 655.3999f },
	{ 505, -15, 771.1001f },
	{ 492, 24.1348f, 848.5306f },
	{ 425, 59.1348f, 869.5306f },
	{ 421, 14.03133f, 683.3999f },
	{ 480, 19.03133f, 688.4f },
	{ 600, -100, 531.475f },
	{ 505, -100, 528.475f },
	{ 448.25f, -95, 524.725f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A0D7C[] = {
	{ 0, 1, 0 },
	{ 0.351378f, 0.891643f, -0.285492f },
	{ 0.118997f, 0.698671f, -0.705478f },
	{ 0.336762f, 0.94159f, 0 },
	{ 0.485643f, 0.874157f, 0 },
	{ 0.122899f, 0.9924189f, 0 },
	{ 0.033278f, 0.999446f, 0 },
	{ 0, 1, 0 },
	{ 0.6953329f, 0.71793f, 0.032988f },
	{ 0.498109f, 0.865404f, -0.054437f },
	{ 0.336762f, 0.94159f, 0 },
	{ 0.485643f, 0.874157f, 0 },
	{ 0.122899f, 0.9924189f, 0 },
	{ 0.033278f, 0.999446f, 0 },
	{ 0, 1, 0 },
	{ 0.328721f, 0.890378f, 0.314912f },
	{ 0.053234f, 0.6388029f, 0.767526f },
	{ 0.336762f, 0.94159f, 0 },
	{ 0.485643f, 0.874157f, 0 },
	{ 0.122899f, 0.9924189f, 0 },
	{ 0.033278f, 0.999446f, 0 },
	{ 0, 1, 0 },
	{ 0.0389f, 0.999235f, -0.003929f },
	{ 0.08304299f, 0.996511f, -0.008388f },
	{ 0.246931f, 0.195896f, 0.949026f },
	{ 0.707426f, 0.124396f, 0.695754f },
	{ 0.998128f, 0.060887f, 0.005835f },
	{ 0.687262f, 0.145535f, -0.711682f },
	{ 0.068772f, 0.171328f, -0.982811f },
	{ 0.903574f, 0.426882f, -0.036427f },
	{ 0.806269f, 0.540224f, 0.241017f },
	{ 0.610994f, 0.6764309f, 0.411251f },
	{ 0.279308f, 0.766152f, -0.5787899f },
	{ 0.607063f, 0.683194f, -0.405858f },
	{ 0, 1, 0 },
	{ 0.043523f, 0.999052f, 0.000373f },
	{ 0.084382f, 0.996433f, 0.000723f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A0F38 = { vertex_000A0BC0, normal_000A0D7C, LengthOfArray<Sint32>(vertex_000A0BC0), meshlist_000A0B90, matlist_000A09C8, LengthOfArray<Uint16>(meshlist_000A0B90), LengthOfArray<Uint16>(matlist_000A09C8), { 658, -40.4326f, 780.6126f }, 348.78f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A0F60 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A0F38, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A0F94[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A0FA8[] = {
	0x8000u | 7, 21, 24, 19, 22, 20, 23, 8,
	0x8000u | 10, 8, 9, 6, 7, 4, 5, 2, 3, 0, 1,
	0x8000u | 8, 2, 0, 15, 12, 13, 10, 14, 11,
	0x8000u | 8, 4, 2, 17, 15, 16, 13, 18, 14,
	3, 20, 6, 8,
	0x8000u | 8, 18, 21, 16, 19, 17, 20, 4, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A100C[] = {
	{ 2849, -1083 },
	{ 2586, -1051 },
	{ 2855, -749 },
	{ 2586, -729 },
	{ 2862, -416 },
	{ 2586, -406 },
	{ 2586, -83 },
	{ 2586, -83 },
	{ 2586, 255 },
	{ 2868, -83 },
	{ 2868, 255 },
	{ 3181, -83 },
	{ 3181, 255 },
	{ 3463, -83 },
	{ 3463, 255 },
	{ 3791, -83 },
	{ 3791, 255 },
	{ 3463, -83 },
	{ 3791, -83 },
	{ 3463, -406 },
	{ 3783, -416 },
	{ 3463, -729 },
	{ 3777, -749 },
	{ 3463, -1051 },
	{ 3771, -1083 },
	{ 3181, -83 },
	{ 3463, -83 },
	{ 3181, -394 },
	{ 3463, -406 },
	{ 3181, -706 },
	{ 3463, -729 },
	{ 3181, -1019 },
	{ 3463, -1051 },
	{ 2862, -416 },
	{ 2868, -83 },
	{ 2586, -83 },
	{ 3181, -1019 },
	{ 2849, -1083 },
	{ 3181, -706 },
	{ 2855, -749 },
	{ 3181, -394 },
	{ 2862, -416 },
	{ 3181, -83 },
	{ 2868, -83 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A10BC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_000A0FA8, NULL, NULL, NULL, uv_000A100C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A10D4[] = {
	{ 455, -95, 132.7001f },
	{ 455, -95, 0.000122f },
	{ 345, -85, 132.7001f },
	{ 345, -85, 0.000122f },
	{ 250, -75, 132.7001f },
	{ 250, -75, 0.000122f },
	{ 145, -65, 132.7001f },
	{ 145, -65, 0.000122f },
	{ 50, -55, 132.7001f },
	{ 50, -55, 0.000122f },
	{ 450.5f, -95, 394.0501f },
	{ 448.25f, -95, 524.725f },
	{ 452.75f, -95, 263.375f },
	{ 345, -85, 385.5501f },
	{ 345, -85, 511.975f },
	{ 345, -85, 259.1251f },
	{ 250, -75, 377.0501f },
	{ 250, -75, 254.8751f },
	{ 250, -75, 499.2251f },
	{ 140.5f, -65, 394.0501f },
	{ 142.75f, -65, 263.3752f },
	{ 138.25f, -65, 524.7251f },
	{ 50, -55, 385.5501f },
	{ 50, -55, 259.1251f },
	{ 50, -55, 511.975f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A1200[] = {
	{ 0.090536f, 0.9958929f, 0.000394f },
	{ 0.090536f, 0.9958929f, 0 },
	{ 0.097613f, 0.995224f, 0.000198f },
	{ 0.097613f, 0.995224f, 0 },
	{ 0.09974799f, 0.995013f, 0.000211f },
	{ 0.09974799f, 0.995013f, 0 },
	{ 0.099721f, 0.995015f, 0.000659f },
	{ 0.09974799f, 0.995013f, 0 },
	{ 0.10518f, 0.994453f, 0.000546f },
	{ 0.104685f, 0.994505f, 0 },
	{ 0.09533799f, 0.995445f, 0.0008339999f },
	{ 0.09629799f, 0.995352f, 0.000843f },
	{ 0.092443f, 0.9957179f, 0.000809f },
	{ 0.099967f, 0.9949909f, 0.000417f },
	{ 0.100151f, 0.994972f, 0.000456f },
	{ 0.098529f, 0.995134f, 0.000404f },
	{ 0.09769399f, 0.995216f, 0.000414f },
	{ 0.09886099f, 0.995101f, 0.000414f },
	{ 0.096708f, 0.995313f, 0 },
	{ 0.101154f, 0.9948699f, 0.001102f },
	{ 0.100407f, 0.9949459f, 0.00084f },
	{ 0.101751f, 0.99481f, 0.00087f },
	{ 0.111016f, 0.993818f, 0.000972f },
	{ 0.108431f, 0.994104f, 0.000466f },
	{ 0.112453f, 0.993657f, 0.0009839999f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A132C = { vertex_000A10D4, normal_000A1200, LengthOfArray<Sint32>(vertex_000A10D4), meshlist_000A10BC, matlist_000A0F94, LengthOfArray<Uint16>(meshlist_000A10BC), LengthOfArray<Uint16>(matlist_000A0F94), { 252.5f, -75, 262.3626f }, 331.4216f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A1354 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A132C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A1388[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0x7FFFFFFF }, { 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 44, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A13C4[] = {
	8, 20, 26, 5, 0, 11, 6, 12, 18,
	3, 50, 13, 48,
	11, 19, 20, 4, 5, 10, 11, 13, 12, 48, 18, 46,
	8, 22, 23, 2, 3, 8, 9, 15, 14,
	0x8000u | 14, 29, 38, 23, 24, 22, 1, 2, 7, 8, 16, 15, 37, 14, 27,
	6, 19, 49, 20, 47, 26, 45,
	24, 49, 36, 47, 31, 45, 29, 44, 38, 41, 24, 40, 1, 39, 7, 42, 16, 43, 37, 46, 27, 48, 33, 50, 35
};

extern "C" __declspec(dllexport) Sint16 poly_000A1466[] = {
	4, 56, 55, 53, 52,
	4, 55, 58, 52, 51,
	4, 30, 54, 28, 53,
	4, 54, 30, 17, 25,
	4, 53, 54, 56, 57,
	4, 34, 51, 21, 59,
	3, 58, 59, 51,
	4, 32, 52, 34, 51,
	4, 28, 53, 32, 52,
	3, 54, 17, 57
};

extern "C" __declspec(dllexport) Sint16 poly_000A14C6[] = {
	4, 28, 32, 0, 6,
	0x8000u | 5, 0, 28, 26, 30, 25,
	5, 46, 18, 34, 6, 32,
	18, 34, 21, 46, 59, 43, 58, 42, 55, 39, 56, 40, 57, 41, 17, 44, 25, 45, 26
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A1510[] = {
	{ 991, 242 },
	{ 698, 242 },
	{ 1120, 55 },
	{ 673, 57 },
	{ 1120, -565 },
	{ 673, -565 },
	{ 991, -752 },
	{ 698, -752 },
	{ 1245, -752 },
	{ 1293, -752 },
	{ 965, -752 },
	{ 1293, 242 },
	{ 991, 242 },
	{ 1530, 55 },
	{ 1120, 55 },
	{ 1530, -565 },
	{ 1120, -565 },
	{ 1293, -752 },
	{ 991, -752 },
	{ 965, -752 },
	{ 698, -752 },
	{ 677, -752 },
	{ 146, 242 },
	{ 282, 242 },
	{ 0, 55 },
	{ 219, 55 },
	{ 0, -565 },
	{ 219, -565 },
	{ 146, -752 },
	{ 282, -752 },
	{ 641, 242 },
	{ 358, 242 },
	{ 282, 242 },
	{ 209, 242 },
	{ 146, 242 },
	{ 64, 55 },
	{ 0, 55 },
	{ 64, -565 },
	{ 0, -565 },
	{ 209, -752 },
	{ 146, -752 },
	{ 358, -752 },
	{ 282, -752 },
	{ 641, -752 },
	{ 1293, 242 },
	{ 1245, 242 },
	{ 991, 242 },
	{ 965, 242 },
	{ 698, 242 },
	{ 677, 242 },
	{ 1245, 242 },
	{ 1197, 242 },
	{ 965, 242 },
	{ 951, 242 },
	{ 677, 242 },
	{ 641, 242 },
	{ 412, 242 },
	{ 358, 242 },
	{ 296, 211 },
	{ 209, 242 },
	{ 183, 55 },
	{ 64, 55 },
	{ 183, -565 },
	{ 64, -565 },
	{ 296, -733 },
	{ 209, -752 },
	{ 412, -752 },
	{ 358, -752 },
	{ 677, -752 },
	{ 641, -752 },
	{ 965, -752 },
	{ 951, -752 },
	{ 1245, -752 },
	{ 1197, -752 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A1638[] = {
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 0 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A16D0[] = {
	{ 3968, 0 },
	{ 6218, 0 },
	{ 4063, 255 },
	{ 6160, 255 },
	{ 10200, 255 },
	{ 10200, 0 },
	{ 9342, 255 },
	{ 9384, 0 },
	{ 8877, 0 },
	{ 1379, 255 },
	{ 859, 255 },
	{ 795, 0 },
	{ 0, 255 },
	{ 0 },
	{ 795, 0 },
	{ 1301, 0 },
	{ 1379, 255 },
	{ 2649, 0 },
	{ 2677, 255 },
	{ 3213, 0 },
	{ 3244, 255 },
	{ 3968, 0 },
	{ 4063, 255 },
	{ 6218, 0 },
	{ 6160, 255 },
	{ 6959, 0 },
	{ 6950, 255 },
	{ 7529, 0 },
	{ 7522, 255 },
	{ 8877, 0 },
	{ 8821, 255 },
	{ 9342, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A1750[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_000A13C4, NULL, NULL, NULL, uv_000A1510, NULL },
	//{ NJD_MESHSET_TRIMESH | 1, 10, poly_000A1466, NULL, NULL, NULL, uv_000A1638, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_000A14C6, NULL, NULL, NULL, uv_000A16D0, NULL }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A1750_2[] = {
	{ NJD_MESHSET_TRIMESH | 1, 10, poly_000A1466, NULL, NULL, NULL, uv_000A1638, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A1798[] = {
	{ -698.6309f, 60.3476f, 1185.786f },
	{ -840, -10, 1186 },
	{ -855, -71, 1186 },
	{ -804, -140, 1186 },
	{ -500, 0, 1186 },
	{ -595, 40, 1186 },
	{ -698.7482f, 60.37824f, 1286.1f },
	{ -840, -10, 1286 },
	{ -855, -71, 1286 },
	{ -804, -140, 1286 },
	{ -500, 0, 1286 },
	{ -595, 40, 1286 },
	{ -624.9913f, 18.23391f, 1316 },
	{ -554.6885f, -11.36609f, 1316 },
	{ -789.2914f, -99.56528f, 1316 },
	{ -821.0912f, -70.56527f, 1316 },
	{ -806.2914f, -18.76578f, 1316 },
	{ -759.2228f, 3.645801f, 1160 },
	{ -692.6911f, 33.03422f, 1316 },
	{ -554.6916f, -11.3667f, 1156 },
	{ -624.9915f, 18.2333f, 1156 },
	{ -700.5661f, 8.721888f, 1311 },
	{ -821.0917f, -70.56673f, 1156 },
	{ -789.2916f, -99.5667f, 1156 },
	{ -806.2916f, -18.7667f, 1156 },
	{ -700.5667f, 8.720779f, 1160 },
	{ -692.6917f, 33.03329f, 1156 },
	{ -705.8911f, -28.66552f, 1316 },
	{ -700.0131f, 55.71701f, 1185.92f },
	{ -705.8917f, -28.66671f, 1156 },
	{ -695.6917f, 31.0333f, 1160 },
	{ -634.2415f, -33.3667f, 1156 },
	{ -700.0283f, 55.70863f, 1286.021f },
	{ -634.2413f, -33.36589f, 1316 },
	{ -695.6911f, 31.03422f, 1311 },
	{ -576.8891f, -37.26598f, 1316 },
	{ -576.8917f, -37.26671f, 1156 },
	{ -771.8538f, -23.9406f, 1316 },
	{ -771.8541f, -23.94169f, 1156 },
	{ -812.5f, 15, 1286 },
	{ -812.5f, 15, 1186 },
	{ -785.9416f, 5.733309f, 1161 },
	{ -785.9412f, 5.734215f, 1313 },
	{ -759.2224f, 3.646808f, 1316 },
	{ -759.2228f, 3.645801f, 1156 },
	{ -697.5667f, 8.720779f, 1156 },
	{ -697.5661f, 8.721888f, 1316 },
	{ -630.7728f, -2.3917f, 1156 },
	{ -630.7725f, -2.390964f, 1316 },
	{ -565.7916f, -24.31669f, 1156 },
	{ -565.7888f, -24.31603f, 1316 },
	{ -745.8455f, 29.51711f, 1301 },
	{ -752.5f, 49, 1286 },
	{ -752.5f, 49, 1186 },
	{ -745.8458f, 29.51665f, 1170 },
	{ -807.5f, 15, 1286 },
	{ -807.5f, 15, 1186 },
	{ -783.9416f, 5.733309f, 1165 },
	{ -783.9412f, 5.734215f, 1308 },
	{ -759.2224f, 3.646808f, 1311 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A1A68[] = {
	{ -0.185333f, 0.878458f, -0.440412f },
	{ -0.941417f, 0.172704f, -0.289667f },
	{ -0.949062f, -0.166763f, -0.267341f },
	{ -0.748795f, -0.593052f, -0.295966f },
	{ 0.940865f, 0.211023f, -0.265032f },
	{ 0.658925f, 0.637447f, -0.399348f },
	{ -0.186364f, 0.878737f, 0.43942f },
	{ -0.941417f, 0.172704f, 0.289667f },
	{ -0.949062f, -0.166763f, 0.267341f },
	{ -0.748795f, -0.593052f, 0.295966f },
	{ 0.940865f, 0.211023f, 0.265032f },
	{ 0.658925f, 0.637447f, 0.399348f },
	{ 0.469157f, 0.518621f, 0.714789f },
	{ 0.822558f, 0.190515f, 0.535819f },
	{ -0.7458079f, -0.398647f, 0.533715f },
	{ -0.858669f, -0.18391f, 0.478397f },
	{ -0.8413939f, 0.137488f, 0.5226409f },
	{ -0.682373f, 0.362856f, -0.6345879f },
	{ -0.13904f, 0.666729f, 0.7322159f },
	{ 0.822552f, 0.190515f, -0.535828f },
	{ 0.469157f, 0.518618f, -0.714791f },
	{ -0.250004f, 0.526025f, 0.812893f },
	{ -0.858669f, -0.183918f, -0.478395f },
	{ -0.745806f, -0.398655f, -0.533711f },
	{ -0.841396f, 0.137482f, -0.52264f },
	{ -0.247824f, 0.521412f, -0.816525f },
	{ -0.139046f, 0.666724f, -0.732219f },
	{ -0.331606f, 0.130177f, 0.9343939f },
	{ -0.204323f, 0.866987f, -0.454517f },
	{ -0.331613f, 0.130163f, -0.934393f },
	{ -0.172467f, 0.6716419f, -0.720522f },
	{ 0.474457f, 0.07068f, -0.877437f },
	{ -0.204519f, 0.8671539f, 0.45411f },
	{ 0.474458f, 0.07068799f, 0.877435f },
	{ -0.173644f, 0.6762519f, 0.715913f },
	{ 0.782566f, 0.019795f, 0.6222529f },
	{ 0.782559f, 0.019789f, -0.6222619f },
	{ -0.756538f, 0.12725f, 0.641449f },
	{ -0.756541f, 0.127241f, -0.641448f },
	{ -0.876379f, 0.355816f, 0.324585f },
	{ -0.876379f, 0.355816f, -0.324585f },
	{ -0.777387f, 0.326493f, -0.537654f },
	{ -0.771382f, 0.323979f, 0.54773f },
	{ -0.6679929f, 0.35522f, 0.653915f },
	{ -0.6679969f, 0.355212f, -0.653914f },
	{ -0.20969f, 0.5071369f, -0.835968f },
	{ -0.209682f, 0.507145f, 0.835965f },
	{ 0.467655f, 0.374499f, -0.800656f },
	{ 0.467655f, 0.374504f, 0.800653f },
	{ 0.8078949f, 0.112057f, -0.578575f },
	{ 0.807902f, 0.11206f, 0.5785649f },
	{ -0.583863f, 0.592255f, 0.555282f },
	{ -0.592698f, 0.70184f, 0.395132f },
	{ -0.592698f, 0.70184f, -0.395132f },
	{ -0.581094f, 0.5894409f, -0.5611489f },
	{ -0.868517f, 0.366186f, 0.334045f },
	{ -0.868517f, 0.366186f, -0.334045f },
	{ -0.783738f, 0.335346f, -0.522779f },
	{ -0.780715f, 0.33406f, 0.5280989f },
	{ -0.685989f, 0.36479f, 0.6295609f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A1D38 = { vertex_000A1798, normal_000A1A68, LengthOfArray<Sint32>(vertex_000A1798), meshlist_000A1750, matlist_000A1388, LengthOfArray<Uint16>(meshlist_000A1750), LengthOfArray<Uint16>(matlist_000A1388), { -677.5f, -39.81088f, 1236 }, 194.6953f, NULL };

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A1D38_2 = { vertex_000A1798, normal_000A1A68, LengthOfArray<Sint32>(vertex_000A1798), meshlist_000A1750_2, matlist_000A1388, LengthOfArray<Uint16>(meshlist_000A1750_2), LengthOfArray<Uint16>(matlist_000A1388), { -677.5f, -39.81088f, 1236 }, 194.6953f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A1D60 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A1D38, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A1D60_2 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A1D38_2, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A1D94[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 41, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 42, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 37, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 40, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 45, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 37, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 42, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 46, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 38, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A1E5C[] = {
	4, 0, 2, 3, 5,
	4, 1, 0, 4, 3,
	4, 2, 1, 5, 4,
	4, 6, 8, 9, 11,
	4, 7, 6, 10, 9,
	4, 8, 7, 11, 10,
	4, 12, 14, 15, 17,
	4, 13, 12, 16, 15,
	4, 14, 13, 17, 16,
	4, 18, 20, 21, 23,
	4, 19, 18, 22, 21,
	4, 20, 19, 23, 22,
	4, 24, 26, 27, 29,
	4, 25, 24, 28, 27,
	4, 26, 25, 29, 28,
	4, 27, 29, 30, 32,
	4, 28, 27, 31, 30,
	4, 29, 28, 32, 31,
	4, 33, 35, 36, 38,
	4, 34, 33, 37, 36,
	4, 35, 34, 38, 37,
	4, 39, 41, 42, 44,
	4, 40, 39, 43, 42,
	4, 41, 40, 44, 43,
	4, 42, 44, 45, 47,
	4, 43, 42, 46, 45,
	4, 44, 43, 47, 46,
	4, 48, 50, 51, 53,
	4, 49, 48, 52, 51,
	4, 50, 49, 53, 52,
	4, 51, 53, 54, 56,
	4, 52, 51, 55, 54,
	4, 53, 52, 56, 55,
	4, 54, 56, 57, 59,
	4, 55, 54, 58, 57,
	4, 56, 55, 59, 58,
	4, 57, 59, 60, 62,
	4, 58, 57, 61, 60,
	4, 59, 58, 62, 61
};

extern "C" __declspec(dllexport) Sint16 poly_000A1FE2[] = {
	3, 5, 4, 3,
	3, 11, 10, 9,
	3, 23, 22, 21,
	3, 32, 31, 30,
	3, 38, 37, 36,
	3, 39, 40, 41,
	3, 62, 61, 60,
	3, 68, 67, 66,
	3, 74, 73, 72,
	3, 80, 79, 78,
	3, 86, 85, 84,
	3, 92, 91, 90,
	3, 98, 97, 96,
	3, 107, 106, 105,
	3, 116, 115, 114,
	3, 125, 124, 123,
	3, 134, 133, 132
};

extern "C" __declspec(dllexport) Sint16 poly_000A206A[] = {
	3, 17, 16, 15
};

extern "C" __declspec(dllexport) Sint16 poly_000A2072[] = {
	4, 63, 65, 66, 68,
	4, 64, 63, 67, 66,
	4, 65, 64, 68, 67,
	4, 69, 71, 72, 74,
	4, 70, 69, 73, 72,
	4, 71, 70, 74, 73,
	4, 75, 77, 78, 80,
	4, 76, 75, 79, 78,
	4, 77, 76, 80, 79,
	4, 81, 83, 84, 86,
	4, 82, 81, 85, 84,
	4, 83, 82, 86, 85,
	4, 87, 89, 90, 92,
	4, 88, 87, 91, 90,
	4, 89, 88, 92, 91,
	4, 93, 95, 96, 98,
	4, 94, 93, 97, 96,
	4, 95, 94, 98, 97,
	4, 99, 101, 102, 104,
	4, 100, 99, 103, 102,
	4, 101, 100, 104, 103,
	4, 102, 104, 105, 107,
	4, 103, 102, 106, 105,
	4, 104, 103, 107, 106,
	4, 108, 110, 111, 113,
	4, 109, 108, 112, 111,
	4, 110, 109, 113, 112,
	4, 111, 113, 114, 116,
	4, 112, 111, 115, 114,
	4, 113, 112, 116, 115,
	4, 117, 119, 120, 122,
	4, 118, 117, 121, 120,
	4, 119, 118, 122, 121,
	4, 120, 122, 123, 125,
	4, 121, 120, 124, 123,
	4, 122, 121, 125, 124,
	4, 126, 128, 129, 131,
	4, 127, 126, 130, 129,
	4, 128, 127, 131, 130,
	4, 129, 131, 132, 134,
	4, 130, 129, 133, 132,
	4, 131, 130, 134, 133
};

extern "C" __declspec(dllexport) Sint16 poly_000A2216[] = {
	4, 209, 206, 210, 207,
	4, 175, 212, 176, 213,
	4, 201, 198, 202, 199,
	4, 180, 178, 181, 179,
	4, 206, 204, 207, 205,
	4, 212, 209, 213, 210,
	4, 190, 187, 191, 188,
	4, 192, 190, 193, 191,
	4, 187, 184, 188, 185,
	4, 195, 192, 196, 193,
	4, 135, 136, 172, 173,
	4, 169, 172, 170, 173,
	4, 166, 169, 167, 170,
	4, 155, 156, 152, 153,
	4, 150, 152, 151, 153,
	4, 147, 150, 148, 151,
	4, 144, 147, 145, 148,
	4, 141, 139, 140, 138,
	4, 164, 166, 165, 167,
	4, 161, 162, 158, 159
};

extern "C" __declspec(dllexport) Sint16 poly_000A22DE[] = {
	4, 185, 287, 186, 289,
	4, 202, 199, 203, 200,
	4, 210, 207, 211, 208,
	4, 188, 185, 189, 186,
	4, 176, 213, 177, 214,
	4, 196, 193, 197, 194,
	4, 142, 288, 143, 290,
	4, 146, 145, 149, 148,
	4, 174, 173, 137, 136,
	4, 154, 153, 157, 156,
	4, 160, 159, 163, 162,
	4, 168, 167, 171, 170,
	4, 146, 290, 145, 288,
	4, 183, 289, 182, 287
};

extern "C" __declspec(dllexport) Sint16 poly_000A236A[] = {
	4, 145, 288, 185, 287,
	4, 136, 135, 176, 175,
	4, 138, 139, 178, 179,
	4, 137, 136, 177, 176,
	4, 160, 163, 200, 203,
	4, 153, 154, 193, 194,
	4, 159, 160, 199, 200,
	4, 168, 171, 208, 211,
	4, 167, 168, 207, 208,
	4, 171, 170, 211, 210,
	4, 139, 141, 179, 181,
	4, 141, 140, 181, 180,
	4, 146, 149, 186, 189,
	4, 165, 167, 205, 207,
	4, 148, 151, 188, 191,
	4, 163, 162, 203, 202,
	4, 158, 159, 198, 199,
	4, 157, 156, 197, 196,
	4, 156, 155, 196, 195,
	4, 174, 137, 214, 177,
	4, 151, 153, 191, 193,
	4, 144, 145, 184, 185,
	4, 143, 290, 183, 289,
	4, 162, 161, 202, 201,
	4, 154, 157, 194, 197,
	4, 170, 173, 210, 213,
	4, 173, 174, 213, 214,
	4, 164, 165, 204, 205,
	4, 149, 148, 189, 188,
	4, 142, 143, 182, 183,
	4, 182, 287, 142, 288,
	4, 186, 289, 146, 290
};

extern "C" __declspec(dllexport) Sint16 poly_000A24AA[] = {
	4, 250, 264, 247, 263,
	4, 247, 263, 244, 266,
	4, 244, 266, 241, 267,
	4, 241, 267, 238, 268,
	4, 238, 268, 235, 269,
	4, 235, 269, 232, 270,
	4, 270, 283, 232, 286,
	4, 229, 271, 226, 272,
	4, 226, 272, 223, 273,
	4, 223, 273, 220, 274,
	4, 220, 274, 217, 275,
	4, 217, 275, 262, 276,
	4, 262, 276, 259, 277,
	4, 259, 277, 256, 278,
	4, 256, 278, 253, 265,
	4, 265, 280, 253, 282,
	4, 250, 282, 264, 280,
	4, 229, 286, 271, 283
};

extern "C" __declspec(dllexport) Sint16 poly_000A255E[] = {
	4, 246, 243, 245, 242,
	4, 219, 216, 218, 215,
	4, 216, 261, 215, 260,
	4, 222, 219, 221, 218,
	4, 261, 258, 260, 257,
	4, 243, 240, 242, 239,
	4, 225, 222, 224, 221,
	4, 249, 246, 248, 245,
	4, 228, 225, 227, 224,
	4, 258, 255, 257, 254,
	4, 240, 237, 239, 236,
	4, 231, 285, 230, 284,
	4, 255, 252, 254, 251,
	4, 252, 281, 251, 279,
	4, 234, 231, 233, 230,
	4, 237, 234, 236, 233,
	4, 248, 279, 249, 281,
	4, 227, 284, 228, 285
};

extern "C" __declspec(dllexport) Sint16 poly_000A2612[] = {
	4, 246, 247, 243, 244,
	4, 249, 250, 246, 247,
	4, 243, 244, 240, 241,
	4, 240, 241, 237, 238,
	4, 237, 238, 234, 235,
	4, 234, 235, 231, 232,
	4, 232, 286, 231, 285,
	4, 228, 229, 225, 226,
	4, 225, 226, 222, 223,
	4, 222, 223, 219, 220,
	4, 219, 220, 216, 217,
	4, 216, 217, 261, 262,
	4, 261, 262, 258, 259,
	4, 258, 259, 255, 256,
	4, 255, 256, 252, 253,
	4, 253, 282, 252, 281,
	4, 249, 281, 250, 282,
	4, 228, 285, 229, 286
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A26C8[] = {
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A2938[] = {
	{ 251, 43 },
	{ 3, 139 },
	{ 251, 219 },
	{ 251, 43 },
	{ 3, 139 },
	{ 251, 219 },
	{ 251, 43 },
	{ 3, 139 },
	{ 251, 219 },
	{ 251, 43 },
	{ 3, 139 },
	{ 251, 219 },
	{ 251, 43 },
	{ 3, 139 },
	{ 251, 219 },
	{ 251, 43 },
	{ 3, 139 },
	{ 251, 219 },
	{ 251, 43 },
	{ 3, 139 },
	{ 251, 219 },
	{ 251, 43 },
	{ 3, 139 },
	{ 251, 219 },
	{ 251, 43 },
	{ 3, 139 },
	{ 251, 219 },
	{ 251, 43 },
	{ 3, 139 },
	{ 251, 219 },
	{ 251, 43 },
	{ 3, 139 },
	{ 251, 219 },
	{ 251, 43 },
	{ 3, 139 },
	{ 251, 219 },
	{ 251, 43 },
	{ 3, 139 },
	{ 251, 219 },
	{ 251, 43 },
	{ 3, 139 },
	{ 251, 219 },
	{ 251, 43 },
	{ 3, 139 },
	{ 251, 219 },
	{ 251, 43 },
	{ 3, 139 },
	{ 251, 219 },
	{ 251, 43 },
	{ 3, 139 },
	{ 251, 219 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A2A04[] = {
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 },
	{ 39, 251 },
	{ 39, 3 },
	{ 2509, 251 },
	{ 2509, 3 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A2CA4[] = {
	{ 7, 251 },
	{ 1012, 251 },
	{ 7, -251 },
	{ 1012, -251 },
	{ 7, 251 },
	{ 1012, 251 },
	{ 7, -251 },
	{ 1012, -251 },
	{ 7, 251 },
	{ 1012, 251 },
	{ 7, -251 },
	{ 1012, -251 },
	{ 7, 251 },
	{ 1012, 251 },
	{ 7, -251 },
	{ 1012, -251 },
	{ 7, 251 },
	{ 1012, 251 },
	{ 7, -251 },
	{ 1012, -251 },
	{ 7, 251 },
	{ 1012, 251 },
	{ 7, -251 },
	{ 1012, -251 },
	{ 7, 251 },
	{ 1012, 251 },
	{ 7, -251 },
	{ 1012, -251 },
	{ 7, 251 },
	{ 1012, 251 },
	{ 7, -251 },
	{ 1012, -251 },
	{ 7, 251 },
	{ 1012, 251 },
	{ 7, -251 },
	{ 1012, -251 },
	{ 7, 251 },
	{ 1012, 251 },
	{ 7, -251 },
	{ 1012, -251 },
	{ 1012, 251 },
	{ 1012, -251 },
	{ 7, 251 },
	{ 7, -251 },
	{ 7, 251 },
	{ 1012, 251 },
	{ 7, -251 },
	{ 1012, -251 },
	{ 7, 251 },
	{ 1012, 251 },
	{ 7, -251 },
	{ 1012, -251 },
	{ 1012, 251 },
	{ 1012, -251 },
	{ 7, 251 },
	{ 7, -251 },
	{ 7, 251 },
	{ 1012, 251 },
	{ 7, -251 },
	{ 1012, -251 },
	{ 7, 251 },
	{ 1012, 251 },
	{ 7, -251 },
	{ 1012, -251 },
	{ 7, 251 },
	{ 1012, 251 },
	{ 7, -251 },
	{ 1012, -251 },
	{ 1012, -251 },
	{ 7, -251 },
	{ 1012, 251 },
	{ 7, 251 },
	{ 7, 251 },
	{ 1012, 251 },
	{ 7, -251 },
	{ 1012, -251 },
	{ 1012, 251 },
	{ 1012, -251 },
	{ 7, 251 },
	{ 7, -251 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A2DE4[] = {
	{ 254, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 },
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 },
	{ 0 },
	{ 254, 0 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0 },
	{ 254, 0 },
	{ 0, 254 },
	{ 254, 254 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A2EC4[] = {
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 },
	{ 1004, -247 },
	{ 15, -247 },
	{ 1004, 247 },
	{ 15, 247 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A30C4[] = {
	{ 0, -1275 },
	{ 0, 255 },
	{ 1020, -1275 },
	{ 1020, 255 },
	{ 0, -1275 },
	{ 0, 255 },
	{ 1020, -1275 },
	{ 1020, 255 },
	{ 0, -1275 },
	{ 0, 255 },
	{ 1020, -1275 },
	{ 1020, 255 },
	{ 0, -1275 },
	{ 0, 255 },
	{ 1020, -1275 },
	{ 1020, 255 },
	{ 0, -1275 },
	{ 0, 255 },
	{ 1020, -1275 },
	{ 1020, 255 },
	{ 0, -1275 },
	{ 0, 255 },
	{ 1020, -1275 },
	{ 1020, 255 },
	{ 0, 255 },
	{ 1020, 255 },
	{ 0, -1275 },
	{ 1020, -1275 },
	{ 0, -1275 },
	{ 0, 255 },
	{ 1020, -1275 },
	{ 1020, 255 },
	{ 0, -1275 },
	{ 0, 255 },
	{ 1020, -1275 },
	{ 1020, 255 },
	{ 0, -1275 },
	{ 0, 255 },
	{ 1020, -1275 },
	{ 1020, 255 },
	{ 0, -1275 },
	{ 0, 255 },
	{ 1020, -1275 },
	{ 1020, 255 },
	{ 0, -1275 },
	{ 0, 255 },
	{ 1020, -1275 },
	{ 1020, 255 },
	{ 0, -1275 },
	{ 0, 255 },
	{ 1020, -1275 },
	{ 1020, 255 },
	{ 0, -1275 },
	{ 0, 255 },
	{ 1020, -1275 },
	{ 1020, 255 },
	{ 0, -1275 },
	{ 0, 255 },
	{ 1020, -1275 },
	{ 1020, 255 },
	{ 0, 255 },
	{ 1020, 255 },
	{ 0, -1275 },
	{ 1020, -1275 },
	{ 1020, -1275 },
	{ 0, -1275 },
	{ 1020, 255 },
	{ 0, 255 },
	{ 1020, -1275 },
	{ 0, -1275 },
	{ 1020, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A31E4[] = {
	{ 508, 0 },
	{ 1, 0 },
	{ 508, 254 },
	{ 1, 254 },
	{ 508, 0 },
	{ 1, 0 },
	{ 508, 254 },
	{ 1, 254 },
	{ 508, 0 },
	{ 1, 0 },
	{ 508, 254 },
	{ 1, 254 },
	{ 508, 0 },
	{ 1, 0 },
	{ 508, 254 },
	{ 1, 254 },
	{ 508, 0 },
	{ 1, 0 },
	{ 508, 254 },
	{ 1, 254 },
	{ 508, 0 },
	{ 1, 0 },
	{ 508, 254 },
	{ 1, 254 },
	{ 508, 0 },
	{ 1, 0 },
	{ 508, 254 },
	{ 1, 254 },
	{ 508, 0 },
	{ 1, 0 },
	{ 508, 254 },
	{ 1, 254 },
	{ 508, 0 },
	{ 1, 0 },
	{ 508, 254 },
	{ 1, 254 },
	{ 508, 0 },
	{ 1, 0 },
	{ 508, 254 },
	{ 1, 254 },
	{ 508, 0 },
	{ 1, 0 },
	{ 508, 254 },
	{ 1, 254 },
	{ 508, 0 },
	{ 1, 0 },
	{ 508, 254 },
	{ 1, 254 },
	{ 508, 0 },
	{ 1, 0 },
	{ 508, 254 },
	{ 1, 254 },
	{ 508, 0 },
	{ 1, 0 },
	{ 508, 254 },
	{ 1, 254 },
	{ 508, 0 },
	{ 1, 0 },
	{ 508, 254 },
	{ 1, 254 },
	{ 508, 0 },
	{ 1, 0 },
	{ 508, 254 },
	{ 1, 254 },
	{ 1, 254 },
	{ 508, 254 },
	{ 1, 0 },
	{ 508, 0 },
	{ 1, 254 },
	{ 508, 254 },
	{ 1, 0 },
	{ 508, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A3304[] = {
	{ 510, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 0 },
	{ 0 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 0 },
	{ 0 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A3424[] = {
	{ NJD_MESHSET_TRIMESH | 0, 39, poly_000A1E5C, NULL, NULL, NULL, uv_000A26C8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 17, poly_000A1FE2, NULL, NULL, NULL, uv_000A2938, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000A206A, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 42, poly_000A2072, NULL, NULL, NULL, uv_000A2A04, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 20, poly_000A2216, NULL, NULL, NULL, uv_000A2CA4, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 14, poly_000A22DE, NULL, NULL, NULL, uv_000A2DE4, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 32, poly_000A236A, NULL, NULL, NULL, uv_000A2EC4, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 18, poly_000A24AA, NULL, NULL, NULL, uv_000A30C4, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 18, poly_000A255E, NULL, NULL, NULL, uv_000A31E4, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 18, poly_000A2612, NULL, NULL, NULL, uv_000A3304, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A3514[] = {
	{ -17.00389f, -33.6573f, 1345.898f },
	{ -20.27293f, -25.36193f, 1351.236f },
	{ -19.72319f, -24.98076f, 1340.866f },
	{ 73.99612f, -1.657305f, 1351.898f },
	{ 70.72706f, 6.638067f, 1357.236f },
	{ 71.27681f, 7.019238f, 1346.866f },
	{ 16.27402f, -11.55191f, 1295.928f },
	{ 11.50135f, -3.846014f, 1301.012f },
	{ 14.22462f, -2.602078f, 1291.06f },
	{ 53.27402f, 3.448093f, 1307.928f },
	{ 48.50134f, 11.15399f, 1313.012f },
	{ 51.22462f, 12.39792f, 1303.06f },
	{ -89.10697f, -42.25634f, 1252.036f },
	{ -97.59895f, -36.64249f, 1254.127f },
	{ -89.29404f, -32.10117f, 1249.837f },
	{ -56.52457f, -23.7533f, 1334.697f },
	{ -65.01654f, -18.13944f, 1336.788f },
	{ -56.71164f, -13.59813f, 1332.497f },
	{ -39.53611f, -21.47444f, 1228.152f },
	{ -49.48508f, -21.43569f, 1231.154f },
	{ -45.9788f, -14.08987f, 1224.694f },
	{ -27.42295f, 7.713146f, 1267.91f },
	{ -37.37192f, 7.75189f, 1270.913f },
	{ -33.86564f, 15.09772f, 1264.452f },
	{ -15.80614f, 1.000443f, 1025.146f },
	{ -21.46388f, -7.328154f, 1027.719f },
	{ -25.72996f, 0.327713f, 1022.135f },
	{ -33.07392f, 28.42574f, 1075.933f },
	{ -37.99665f, 18.92977f, 1076.345f },
	{ -42.92942f, 27.64449f, 1072.721f },
	{ -58.19093f, 23.83755f, 1148.418f },
	{ -62.27549f, 14.49468f, 1146.411f },
	{ -67.96851f, 23.07053f, 1144.981f },
	{ 325.8125f, -19.68724f, 1066.634f },
	{ 321.5616f, -28.91997f, 1068.799f },
	{ 315.6259f, -20.39278f, 1068.567f },
	{ 336.8506f, -10.32508f, 1128.235f },
	{ 332.5997f, -19.55781f, 1130.4f },
	{ 326.664f, -11.03062f, 1130.168f },
	{ 166.4735f, -23.80723f, 958.676f },
	{ 164.3322f, -15.36834f, 964.3506f },
	{ 164.1943f, -14.82443f, 953.9734f },
	{ 231.9953f, -7.18229f, 958.676f },
	{ 231.2384f, 1.607849f, 964.3506f },
	{ 232.7663f, 2.57444f, 953.9734f },
	{ 290.5856f, -23.78287f, 976.2531f },
	{ 291.1489f, -15.3668f, 982.3237f },
	{ 294.2654f, -14.85033f, 972.4232f },
	{ 118.1095f, -6.43504f, 1001.865f },
	{ 123.6728f, -7.646963f, 993.1709f },
	{ 121.2177f, -15.918f, 998.9642f },
	{ 177.2724f, 1.725361f, 1038.587f },
	{ 180.1123f, 0.137806f, 1028.202f },
	{ 179.6153f, -7.863165f, 1035.211f },
	{ 233.8874f, 11.40861f, 1034.75f },
	{ 240.8083f, 10.70005f, 1024.049f },
	{ 236.3042f, 1.89134f, 1031.202f },
	{ 256.7857f, 0.538696f, 1097.401f },
	{ 267.137f, -0.308825f, 1095.46f },
	{ 262.0773f, -9.22987f, 1098.139f },
	{ 257.7474f, 24.58319f, 1140.682f },
	{ 268.1358f, 24.66186f, 1140.407f },
	{ 263.1167f, 16.75495f, 1144.911f },
	{ 274.3927f, -3.650992f, 993.3991f },
	{ 273.2029f, -11.01009f, 997.8069f },
	{ 268.4043f, -9.338914f, 990.7939f },
	{ 223.3927f, 30.34901f, 1036.399f },
	{ 222.203f, 22.9899f, 1040.807f },
	{ 217.4043f, 24.66109f, 1033.794f },
	{ 313.6212f, -13.79703f, 1058.318f },
	{ 311.642f, -20.69996f, 1063.159f },
	{ 307.7368f, -19.50301f, 1055.522f },
	{ 233.6212f, 44.20297f, 1108.318f },
	{ 231.642f, 37.30004f, 1113.159f },
	{ 227.7369f, 38.49699f, 1105.522f },
	{ 231.6637f, -7.792f, 1217.555f },
	{ 226.429f, -12.90009f, 1222.193f },
	{ 228.9073f, -15.30791f, 1214.252f },
	{ 188.6637f, 17.208f, 1196.555f },
	{ 183.429f, 12.09991f, 1201.193f },
	{ 185.9073f, 9.692091f, 1193.252f },
	{ 123.9681f, -25.52023f, 1350.224f },
	{ 120.2504f, -18.01165f, 1352.415f },
	{ 115.4182f, -24.49169f, 1349.307f },
	{ 132.0892f, -5.845708f, 1296.575f },
	{ 128.3715f, 1.662876f, 1298.766f },
	{ 123.5393f, -4.817169f, 1295.658f },
	{ -33.92048f, -13.93886f, 1222.042f },
	{ -36.89005f, -6.700107f, 1225.755f },
	{ -40.18949f, -9.361031f, 1218.203f },
	{ -2.920464f, 10.06114f, 1200.042f },
	{ -5.890053f, 17.29989f, 1203.755f },
	{ -9.189484f, 14.63897f, 1196.203f },
	{ 23.22791f, -6.187793f, 1046.736f },
	{ 15.91314f, -2.678963f, 1049.766f },
	{ 20.70983f, 1.627604f, 1043.983f },
	{ 49.00295f, 15.27801f, 1084.099f },
	{ 41.68817f, 18.78683f, 1087.129f },
	{ 46.48486f, 23.0934f, 1081.346f },
	{ 219.1568f, -42.15647f, 955.4879f },
	{ 217.0344f, -49.67104f, 959.2332f },
	{ 211.8089f, -46.17248f, 953.2789f },
	{ 165.7178f, 12.23961f, 1034.347f },
	{ 163.1498f, 5.178661f, 1038.749f },
	{ 157.878f, 8.724356f, 1032.863f },
	{ 153.9095f, 38.51524f, 1061.389f },
	{ 151.0681f, 32.06261f, 1066.418f },
	{ 145.7679f, 35.67153f, 1060.597f },
	{ 197.7073f, -18.67846f, 1340.527f },
	{ 189.8444f, -20.7703f, 1343.494f },
	{ 194.4483f, -26.55123f, 1338.979f },
	{ 169.5736f, 4.431362f, 1282.25f },
	{ 162.3467f, 1.817089f, 1286.534f },
	{ 166.0797f, -3.248454f, 1280.215f },
	{ 145.3463f, 22.60183f, 1265.089f },
	{ 139.2006f, 19.17666f, 1270.139f },
	{ 141.4531f, 15.22151f, 1262.771f },
	{ 49.63031f, -46.87368f, 1378.777f },
	{ 44.21826f, -40.50291f, 1381.041f },
	{ 41.15142f, -47.6234f, 1377.182f },
	{ 63.7552f, -0.463326f, 1281.921f },
	{ 58.18842f, 5.399038f, 1285.245f },
	{ 55.05637f, -1.935713f, 1281.833f },
	{ 53.50606f, 16.96021f, 1248.099f },
	{ 48.24795f, 22.29783f, 1252.442f },
	{ 45.24599f, 14.74195f, 1249.459f },
	{ -107.2758f, -25.96906f, 1086.234f },
	{ -110.9407f, -19.25108f, 1090.288f },
	{ -108.394f, -18.47067f, 1082.048f },
	{ -37.50544f, -2.274512f, 1110.04f },
	{ -43.04832f, 3.805672f, 1113.454f },
	{ -40.96466f, 4.428833f, 1105.055f },
	{ -10.08363f, 34.98289f, 1116.748f },
	{ -16.84927f, 39.40177f, 1119.862f },
	{ -15.06708f, 39.61534f, 1111.39f },
	{ 359.4f, -56, 1164.36f },
	{ 320.49f, -27.6f, 1163.706f },
	{ 255.64f, -3.600001f, 1162.616f },
	{ 349, -32, 1062.2f },
	{ 311.65f, -7.200004f, 1076.87f },
	{ 297, -16, 958.44f },
	{ 267.45f, 6.4f, 988.674f },
	{ 132.13f, -9.750006f, 970.9941f },
	{ 122.68f, 8.999995f, 1026.584f },
	{ -17.4f, -35.42604f, 979.2399f },
	{ 0.209999f, -10.11213f, 1006.354f },
	{ 29.56f, 8.744376f, 1051.544f },
	{ -92.60001f, -24, 966.4399f },
	{ -63.71f, -0.4f, 995.4739f },
	{ -15.56f, 15.6f, 1043.864f },
	{ -139, -32, 1062.2f },
	{ -103.15f, -7.200004f, 1076.87f },
	{ -150.2f, -48, 1168.2f },
	{ -112.67f, -20.8f, 1166.97f },
	{ -50.12f, 1.199999f, 1164.92f },
	{ -116.6f, -48, 1273.8f },
	{ -84.11002f, -20.8f, 1256.73f },
	{ -29.96f, 1.199999f, 1228.28f },
	{ -107.8f, -32, 1371.88f },
	{ -76.63001f, -7.200004f, 1340.098f },
	{ -24.68f, 10.8f, 1287.128f },
	{ -21.4f, -35.42604f, 1369.48f },
	{ -3.190002f, -10.11214f, 1338.058f },
	{ 27.15999f, 8.744372f, 1285.688f },
	{ 112.6f, -35.35206f, 1380.88f },
	{ 110.71f, -10.04925f, 1347.748f },
	{ 220.2f, -35.63905f, 1364.68f },
	{ 202.17f, -10.2932f, 1333.978f },
	{ 172.12f, 8.616566f, 1282.808f },
	{ 281.8f, -24, 1367.08f },
	{ 254.53f, -0.400001f, 1336.018f },
	{ 209.08f, 15.6f, 1284.248f },
	{ 293, -48, 1274.52f },
	{ 264.05f, -20.8f, 1257.342f },
	{ 215.8f, 1.199999f, 1228.712f },
	{ 359.4f, -76, 1164.36f },
	{ 320.49f, -47.6f, 1163.706f },
	{ 255.64f, -23.6f, 1162.616f },
	{ 349, -52, 1062.2f },
	{ 311.65f, -27.2f, 1076.87f },
	{ 297, -36, 958.44f },
	{ 267.45f, -13.6f, 988.674f },
	{ 132.13f, -29.75001f, 970.9941f },
	{ 122.68f, -11, 1026.584f },
	{ -17.4f, -55.42604f, 979.2399f },
	{ 0.209999f, -30.11213f, 1006.354f },
	{ 29.56f, -11.25562f, 1051.544f },
	{ -92.60001f, -44, 966.4399f },
	{ -63.71f, -20.4f, 995.4739f },
	{ -15.56f, -4.4f, 1043.864f },
	{ -139, -52, 1062.2f },
	{ -103.15f, -27.2f, 1076.87f },
	{ -150.2f, -68, 1168.2f },
	{ -112.67f, -40.8f, 1166.97f },
	{ -50.12f, -18.8f, 1164.92f },
	{ -116.6f, -68, 1273.8f },
	{ -84.11002f, -40.8f, 1256.73f },
	{ -29.96f, -18.8f, 1228.28f },
	{ -107.8f, -52, 1371.88f },
	{ -76.63001f, -27.2f, 1340.098f },
	{ -24.68f, -9.200003f, 1287.128f },
	{ -21.4f, -55.42604f, 1369.48f },
	{ -3.190002f, -30.11214f, 1338.058f },
	{ 27.15999f, -11.25563f, 1285.688f },
	{ 112.6f, -55.35206f, 1380.88f },
	{ 110.71f, -30.04925f, 1347.748f },
	{ 220.2f, -55.63905f, 1364.68f },
	{ 202.17f, -30.2932f, 1333.978f },
	{ 172.12f, -11.38343f, 1282.808f },
	{ 281.8f, -44, 1367.08f },
	{ 254.53f, -20.4f, 1336.018f },
	{ 209.08f, -4.4f, 1284.248f },
	{ 293, -68, 1274.52f },
	{ 264.05f, -40.8f, 1257.342f },
	{ 215.8f, -18.8f, 1228.712f },
	{ 418, -95, 1164.2f },
	{ 388.7f, -65.5f, 1164.28f },
	{ 359.4f, -56, 1164.36f },
	{ 405, -65, 1036.5f },
	{ 377, -38.5f, 1049.35f },
	{ 349, -32, 1062.2f },
	{ 340, -45, 906.8f },
	{ 318.5f, -20.5f, 932.62f },
	{ 297, -16, 958.44f },
	{ 250, -69.54881f, 912.8f },
	{ 237.5f, -42.59392f, 938.02f },
	{ 225, -35.63905f, 963.24f },
	{ 141, -68.75f, 880.8001f },
	{ 139.4f, -41.875f, 909.2201f },
	{ 137.8f, -35, 937.6401f },
	{ -53, -69.28255f, 932.8f },
	{ -35.2f, -42.35429f, 956.02f },
	{ -17.4f, -35.42604f, 979.2399f },
	{ -147, -55, 916.8f },
	{ -119.8f, -29.5f, 941.6199f },
	{ -92.6f, -24, 966.4399f },
	{ -205, -65, 1036.5f },
	{ -172, -38.5f, 1049.35f },
	{ -139, -32, 1062.2f },
	{ -219, -85, 1169 },
	{ -184.6f, -56.5f, 1168.6f },
	{ -150.2f, -48, 1168.2f },
	{ -177, -85, 1301 },
	{ -146.8f, -56.49999f, 1287.4f },
	{ -116.6f, -48, 1273.8f },
	{ -166, -65, 1423.6f },
	{ -136.9f, -38.5f, 1397.74f },
	{ -107.8f, -32, 1371.88f },
	{ -58, -69.28255f, 1420.6f },
	{ -39.7f, -42.35429f, 1395.04f },
	{ -21.4f, -35.42604f, 1369.48f },
	{ 144, -68.75f, 1425.6f },
	{ 129.8f, -42.27107f, 1407.24f },
	{ 112.6f, -35.35206f, 1380.88f },
	{ 244, -69.54881f, 1414.6f },
	{ 232.1f, -42.59393f, 1389.64f },
	{ 220.2f, -35.63905f, 1364.68f },
	{ 321, -55, 1417.6f },
	{ 301.4f, -29.5f, 1392.34f },
	{ 281.8f, -24, 1367.08f },
	{ 335, -85, 1301.9f },
	{ 314, -56.49999f, 1288.21f },
	{ 293, -48, 1274.52f },
	{ -107.8f, -162, 1371.88f },
	{ -21.4f, -165.426f, 1369.48f },
	{ 112.6f, -165.3521f, 1380.88f },
	{ -116.6f, -178, 1273.8f },
	{ -150.2f, -178, 1168.2f },
	{ -139, -162, 1062.2f },
	{ -92.6f, -154, 966.4399f },
	{ -17.4f, -165.426f, 979.2399f },
	{ 137.8f, -165, 937.6401f },
	{ 225, -165.639f, 963.24f },
	{ 297, -146, 958.44f },
	{ 349, -162, 1062.2f },
	{ 359.4f, -186, 1164.36f },
	{ 293, -178, 1274.52f },
	{ 281.8f, -154, 1367.08f },
	{ 220.2f, -165.639f, 1364.68f },
	{ 47, -69.19008f, 1428.6f },
	{ 45.59999f, -165.389f, 1375.18f },
	{ 52.55f, -42.31268f, 1401.14f },
	{ 45.59999f, -35.38905f, 1375.18f },
	{ 60.19999f, -165.213f, 958.44f },
	{ 50, -69.19008f, 907.8001f },
	{ 52.09999f, -42.11465f, 932.62f },
	{ 60.2f, -35.21302f, 958.44f },
	{ 66.16998f, -29.93107f, 988.674f },
	{ 66.16999f, -9.931068f, 988.674f },
	{ 76.11999f, -11.12781f, 1039.064f },
	{ 76.11999f, 8.872187f, 1039.064f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A42B8[] = {
	{ 0.332686f, -0.942884f, -0.017027f },
	{ -0.212154f, 0.439675f, 0.872741f },
	{ -0.120532f, 0.503209f, -0.855718f },
	{ 0.799091f, -0.600868f, 0.020269f },
	{ 0.345756f, 0.549491f, 0.7606f },
	{ 0.421992f, 0.602354f, -0.677564f },
	{ 0.379003f, -0.9253179f, -0.011946f },
	{ -0.416442f, 0.358999f, 0.835282f },
	{ 0.03744f, 0.566318f, -0.8233359f },
	{ 0.807656f, -0.570327f, 0.149729f },
	{ 0.145806f, 0.498288f, 0.854663f },
	{ 0.523456f, 0.670788f, -0.525392f },
	{ 0.482172f, -0.876056f, 0.006041f },
	{ -0.933161f, 0.059586f, 0.354486f },
	{ 0.450993f, 0.81647f, -0.36053f },
	{ 0.600332f, -0.615833f, 0.510246f },
	{ -0.577292f, 0.162668f, 0.800171f },
	{ 0.57439f, 0.7924359f, 0.205237f },
	{ 0.910647f, -0.412408f, 0.025312f },
	{ -0.7475139f, -0.40595f, 0.525763f },
	{ -0.163136f, 0.818355f, -0.551073f },
	{ 0.890005f, -0.024357f, 0.455299f },
	{ -0.489672f, -0.018985f, 0.8717f },
	{ -0.003435f, 0.999699f, -0.024278f },
	{ 0.865643f, 0.500073f, 0.02428f },
	{ -0.07731099f, -0.888025f, 0.453248f },
	{ -0.788328f, 0.387953f, -0.477526f },
	{ 0.760252f, 0.638501f, 0.119719f },
	{ 0.016498f, -0.975007f, 0.22156f },
	{ -0.757183f, 0.532716f, -0.378006f },
	{ 0.459486f, 0.434213f, 0.774811f },
	{ -0.106944f, -0.8614089f, 0.496526f },
	{ -0.896422f, 0.327847f, 0.298234f },
	{ 0.802086f, 0.552124f, -0.227635f },
	{ 0.093608f, -0.986661f, 0.13318f },
	{ -0.895688f, 0.434537f, 0.094454f },
	{ 0.7641349f, 0.541466f, 0.350588f },
	{ 0.174643f, -0.738884f, 0.650807f },
	{ -0.648495f, 0.443623f, 0.618589f },
	{ -0.333328f, -0.94174f, -0.044927f },
	{ -0.6302609f, 0.228523f, 0.741989f },
	{ -0.649399f, 0.30395f, -0.697062f },
	{ 0.016254f, -0.985693f, -0.167763f },
	{ -0.114028f, 0.572912f, 0.811646f },
	{ 0.11925f, 0.615783f, -0.778839f },
	{ -0.235736f, -0.963812f, -0.124481f },
	{ -0.141841f, 0.438865f, 0.887287f },
	{ 0.377575f, 0.524943f, -0.762805f },
	{ -0.481752f, 0.594158f, 0.64412f },
	{ 0.445462f, 0.392172f, -0.8048379f },
	{ 0.036291f, -0.986333f, 0.160717f },
	{ -0.283307f, 0.532382f, 0.7976879f },
	{ 0.160178f, 0.404197f, -0.900538f },
	{ 0.061584f, -0.94104f, 0.332643f },
	{ -0.346931f, 0.812447f, 0.468581f },
	{ 0.488599f, 0.36869f, -0.7907839f },
	{ 0.133339f, -0.977009f, -0.166356f },
	{ -0.883665f, 0.459135f, 0.091277f },
	{ 0.93625f, 0.24292f, -0.253821f },
	{ 0.038852f, -0.984867f, 0.168899f },
	{ -0.717621f, 0.62756f, 0.301975f },
	{ 0.722989f, 0.638469f, 0.263903f },
	{ 0.026951f, -0.458022f, 0.888532f },
	{ 0.478541f, 0.869802f, -0.120177f },
	{ 0.240595f, -0.602019f, 0.761372f },
	{ -0.719139f, -0.267781f, -0.641196f },
	{ 0.020337f, 0.975608f, 0.218574f },
	{ -0.177648f, -0.24902f, 0.9520659f },
	{ -0.976194f, 0.029081f, -0.21494f },
	{ 0.524231f, 0.840594f, -0.13632f },
	{ 0.128393f, -0.539992f, 0.83182f },
	{ -0.652624f, -0.300602f, -0.6955f },
	{ 0.035475f, 0.989933f, 0.13702f },
	{ -0.293882f, -0.158784f, 0.942561f },
	{ -0.943728f, 0.0404f, -0.328245f },
	{ 0.53273f, 0.8415999f, -0.088924f },
	{ -0.514195f, -0.180019f, 0.838568f },
	{ -0.018536f, -0.661582f, -0.749643f },
	{ 0.001477f, 0.957103f, -0.289743f },
	{ -0.869618f, 0.107065f, 0.481977f },
	{ -0.457204f, -0.29362f, -0.8394949f },
	{ 0.817845f, -0.569138f, -0.08491699f },
	{ 0.074302f, 0.932575f, 0.353247f },
	{ -0.89214f, -0.363437f, -0.268328f },
	{ 0.7585379f, -0.28447f, -0.586257f },
	{ 0.139869f, 0.965035f, -0.221685f },
	{ -0.664254f, -0.11331f, -0.738869f },
	{ 0.615907f, -0.787773f, 0.008478999f },
	{ 0.02199f, 0.659979f, 0.750962f },
	{ -0.637898f, 0.127795f, -0.759444f },
	{ 0.89497f, -0.359334f, -0.264399f },
	{ 0.400802f, 0.845268f, 0.353383f },
	{ -0.148259f, 0.402464f, -0.90335f },
	{ 0.655521f, -0.7549509f, -0.018479f },
	{ -0.807431f, -0.053183f, 0.58756f },
	{ 0.151904f, 0.8081329f, -0.5690759f },
	{ 0.830175f, -0.391015f, 0.397389f },
	{ -0.387081f, 0.19289f, 0.901644f },
	{ 0.411141f, 0.909547f, -0.06073f },
	{ 0.6313519f, 0.768705f, -0.102408f },
	{ 0.206874f, -0.734207f, 0.6466399f },
	{ -0.838226f, -0.034498f, -0.544231f },
	{ 0.683927f, 0.702215f, -0.197835f },
	{ 0.126292f, -0.728452f, 0.673355f },
	{ -0.885657f, -0.040494f, -0.46257f },
	{ 0.443452f, 0.8845519f, 0.144628f },
	{ -0.029386f, -0.18923f, 0.981493f },
	{ -0.911396f, 0.411331f, 0.012831f },
	{ 0.741458f, 0.664309f, -0.09451199f },
	{ -0.831116f, 0.245942f, 0.498757f },
	{ 0.08966099f, -0.910246f, -0.404244f },
	{ 0.756679f, 0.6109819f, -0.232674f },
	{ -0.728418f, 0.11672f, 0.675118f },
	{ 0.077483f, -0.809513f, -0.581967f },
	{ 0.170779f, 0.888941f, -0.424992f },
	{ -0.851925f, 0.318958f, 0.415319f },
	{ -0.477097f, -0.339215f, -0.810748f },
	{ 0.926064f, -0.374732f, -0.044508f },
	{ -0.156342f, 0.899418f, 0.408171f },
	{ -0.769715f, -0.524681f, -0.363659f },
	{ 0.942313f, -0.26672f, -0.202255f },
	{ -0.052336f, 0.892797f, 0.447409f },
	{ -0.722656f, -0.638853f, -0.263885f },
	{ 0.605568f, 0.072252f, -0.792507f },
	{ -0.269433f, 0.9604869f, -0.06978299f },
	{ -0.768993f, -0.29689f, -0.566133f },
	{ 0.318867f, -0.947759f, 0.008788f },
	{ -0.414103f, 0.395837f, 0.819653f },
	{ 0.095236f, 0.55192f, -0.828441f },
	{ 0.567584f, -0.814531f, 0.119946f },
	{ -0.433198f, 0.227748f, 0.87205f },
	{ 0.010347f, 0.366404f, -0.930398f },
	{ 0.977125f, -0.05996f, 0.204036f },
	{ -0.148743f, 0.675388f, 0.722306f },
	{ 0.147832f, 0.710928f, -0.687552f },
	{ 0.30453f, 0.397291f, -0.8656909f },
	{ 0.420997f, 0.694981f, -0.5828919f },
	{ -0.245913f, 0.71551f, -0.65389f },
	{ 0.5714f, 0.457558f, 0.68128f },
	{ -0.129045f, 0.69271f, 0.709577f },
	{ -0.367359f, 0.538717f, -0.758176f },
	{ -0.5882069f, 0.789035f, -0.177303f },
	{ 0.574803f, 0.464747f, -0.673507f },
	{ 0.56263f, 0.716619f, 0.412195f },
	{ 0.612304f, 0.33906f, -0.714229f },
	{ 0.16319f, 0.6463619f, -0.745376f },
	{ 0.044616f, 0.767276f, 0.639763f },
	{ -0.241205f, 0.856549f, -0.456228f },
	{ -0.057546f, 0.991788f, -0.114212f },
	{ -0.276347f, 0.835742f, 0.474518f },
	{ -0.550805f, 0.832392f, -0.061142f },
	{ 0.339633f, 0.914141f, 0.221349f },
	{ -0.5799159f, 0.80563f, 0.121067f },
	{ -0.194196f, 0.944026f, -0.26665f },
	{ 0.350442f, 0.7020479f, -0.619935f },
	{ 0.08306f, 0.456661f, 0.8857549f },
	{ -0.028735f, 0.6694289f, 0.7423199f },
	{ 0.637565f, 0.693442f, 0.335632f },
	{ -0.791062f, 0.384391f, -0.475882f },
	{ -0.610546f, 0.786692f, -0.091369f },
	{ -0.310523f, 0.761968f, -0.568314f },
	{ 0.5750329f, 0.441397f, 0.688844f },
	{ 0.540661f, 0.584478f, 0.605038f },
	{ 0.692443f, 0.6192369f, -0.370228f },
	{ -0.797739f, 0.456419f, 0.394073f },
	{ -0.580764f, 0.7579409f, -0.297049f },
	{ -0.060576f, 0.751995f, 0.656379f },
	{ -0.429214f, 0.794496f, 0.429594f },
	{ -0.724103f, 0.577288f, -0.377377f },
	{ 0.354917f, 0.867815f, 0.347751f },
	{ 0.254973f, 0.964132f, 0.07374199f },
	{ 0.26628f, 0.804963f, -0.530216f },
	{ 0.653052f, 0.75194f, 0.09005199f },
	{ -0.09209999f, 0.876938f, 0.471697f },
	{ -0.674484f, 0.702374f, 0.227469f },
	{ -0.371852f, -0.527061f, -0.764155f },
	{ -0.284652f, -0.504262f, -0.815287f },
	{ -0.484044f, -0.475585f, -0.734521f },
	{ -0.212358f, -0.714287f, 0.6668569f },
	{ -0.399021f, -0.419269f, 0.8154719f },
	{ -0.752212f, -0.586219f, -0.300872f },
	{ -0.926965f, -0.360006f, -0.105503f },
	{ 0.545479f, -0.64033f, -0.540769f },
	{ 0.619584f, -0.468623f, 0.629689f },
	{ 0.187117f, -0.775723f, 0.602695f },
	{ 0.224336f, -0.96888f, -0.104616f },
	{ 0.028989f, -0.537807f, 0.8425699f },
	{ 0.241206f, -0.856549f, 0.456228f },
	{ 0.148949f, -0.6589299f, 0.73731f },
	{ -0.409578f, -0.403122f, 0.818375f },
	{ 0.550805f, -0.832391f, 0.061142f },
	{ 0.855215f, -0.486714f, 0.178092f },
	{ 0.5799159f, -0.80563f, -0.121067f },
	{ 0.658421f, -0.697962f, -0.281657f },
	{ 0.548881f, -0.464183f, -0.695172f },
	{ 0.701145f, -0.639079f, 0.316184f },
	{ 0.631797f, -0.5590219f, 0.536961f },
	{ 0.836818f, -0.46168f, 0.294259f },
	{ -0.470399f, -0.410118f, -0.781363f },
	{ -0.474309f, -0.450992f, -0.756067f },
	{ -0.318137f, -0.477642f, -0.818931f },
	{ 0.394012f, -0.813769f, -0.42724f },
	{ 0.7075289f, -0.704255f, 0.058545f },
	{ 0.7404169f, -0.477876f, -0.47267f },
	{ -0.585917f, -0.6598139f, -0.470475f },
	{ -0.688235f, -0.344535f, -0.638458f },
	{ 0.060576f, -0.751996f, -0.656379f },
	{ -0.161797f, -0.732071f, -0.661736f },
	{ -0.714761f, -0.511031f, -0.477455f },
	{ -0.354917f, -0.867815f, -0.347752f },
	{ -0.353195f, -0.752361f, -0.556063f },
	{ 0.385521f, -0.415304f, -0.823952f },
	{ -0.653052f, -0.75194f, -0.09005199f },
	{ -0.762329f, -0.644209f, 0.062043f },
	{ -0.881876f, -0.433178f, 0.18615f },
	{ 0.6932459f, 0.687964f, 0.214746f },
	{ 0.553408f, 0.80653f, 0.207964f },
	{ -0.487779f, 0.8727019f, -0.021499f },
	{ 0.673974f, 0.736975f, -0.051251f },
	{ 0.503126f, 0.863998f, 0.019268f },
	{ -0.475367f, 0.818854f, 0.321721f },
	{ 0.266448f, 0.800147f, -0.5373729f },
	{ 0.148278f, 0.8926809f, -0.4256f },
	{ -0.310929f, 0.911f, 0.270927f },
	{ -0.028635f, 0.675824f, -0.736507f },
	{ -0.063263f, 0.844546f, -0.531733f },
	{ -0.133914f, 0.726964f, 0.6734909f },
	{ 0.009381999f, 0.7268119f, -0.686772f },
	{ 0.002538f, 0.860396f, -0.509619f },
	{ -0.006117f, 0.855446f, 0.5178559f },
	{ 0.06941599f, 0.6247489f, -0.777734f },
	{ 0.051465f, 0.829421f, -0.5562479f },
	{ 0.045182f, 0.738091f, 0.6731859f },
	{ -0.28591f, 0.807364f, -0.516157f },
	{ -0.120474f, 0.8720509f, -0.474355f },
	{ 0.294078f, 0.928417f, 0.227069f },
	{ -0.605103f, 0.792152f, -0.07965799f },
	{ -0.437082f, 0.899213f, -0.019389f },
	{ 0.520236f, 0.814118f, 0.258002f },
	{ -0.632298f, 0.76492f, 0.122871f },
	{ -0.472879f, 0.873364f, 0.116707f },
	{ 0.563375f, 0.826106f, 0.012547f },
	{ -0.669567f, 0.739998f, 0.063897f },
	{ -0.480583f, 0.876686f, 0.021486f },
	{ 0.635877f, 0.7515489f, -0.1756f },
	{ -0.440259f, 0.826286f, 0.351315f },
	{ -0.308092f, 0.894935f, 0.322755f },
	{ 0.171128f, 0.9483899f, -0.266969f },
	{ 0.011245f, 0.6843669f, 0.729051f },
	{ 0.005421f, 0.858691f, 0.512466f },
	{ 0.024504f, 0.7769099f, -0.629135f },
	{ 0.058596f, 0.652039f, 0.755918f },
	{ 0.027867f, 0.82711f, 0.561349f },
	{ -0.025131f, 0.8222229f, -0.56861f },
	{ -0.041373f, 0.6689579f, 0.742148f },
	{ -0.054448f, 0.844189f, 0.533273f },
	{ -0.079413f, 0.7556919f, -0.650095f },
	{ 0.427646f, 0.780467f, 0.456059f },
	{ 0.337365f, 0.8773029f, 0.341356f },
	{ -0.147923f, 0.949508f, -0.276681f },
	{ 0.760126f, 0.632199f, 0.15011f },
	{ 0.582575f, 0.8110189f, 0.053428f },
	{ -0.593186f, 0.748103f, -0.297444f },
	{ 0.689589f, 0, -0.724201f },
	{ 0.029256f, 0, -0.999572f },
	{ -0.032355f, 0, -0.999476f },
	{ 0.979123f, 0, -0.203271f },
	{ 0.993754f, 0, -0.111596f },
	{ 0.964813f, 0, 0.262938f },
	{ 0.443111f, 0, 0.896467f },
	{ 0.057289f, 0, 0.998358f },
	{ -0.012225f, 0, 0.999925f },
	{ -0.125205f, 0, 0.992131f },
	{ -0.475651f, 0, 0.879634f },
	{ -0.96582f, 0, 0.259212f },
	{ -0.971315f, 0, -0.237797f },
	{ -0.9379179f, 0, -0.346857f },
	{ -0.66129f, 0, -0.75013f },
	{ -0.061094f, 0, -0.998132f },
	{ -0.035247f, 0.643508f, 0.764628f },
	{ 0.084768f, 0, -0.996401f },
	{ -0.028203f, 0.840488f, 0.541095f },
	{ 0.052894f, 0.792771f, -0.6072209f },
	{ 0.258901f, 0, 0.965904f },
	{ -0.185897f, 0.707063f, -0.682279f },
	{ -0.130108f, 0.868982f, -0.477433f },
	{ 0.156814f, 0.789692f, 0.593124f },
	{ -0.146108f, -0.819936f, -0.553495f },
	{ -0.213749f, 0.572449f, -0.791589f },
	{ 0.21375f, -0.572449f, 0.791589f },
	{ 0.146109f, 0.819936f, 0.553495f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A505C = { vertex_000A3514, normal_000A42B8, LengthOfArray<Sint32>(vertex_000A3514), meshlist_000A3424, matlist_000A1D94, LengthOfArray<Uint16>(meshlist_000A3424), LengthOfArray<Uint16>(matlist_000A1D94), { 99.5f, -70.89851f, 1154.7f }, 420.0756f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A5084 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A505C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A50B8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A5108[] = {
	0x8000u | 5, 3, 1, 4, 0, 2,
	3, 3, 2, 4,
	0x8000u | 5, 28, 26, 29, 25, 27,
	3, 28, 27, 29
};

extern "C" __declspec(dllexport) Sint16 poly_000A5130[] = {
	10, 10, 8, 6, 7, 5, 11, 9, 12, 10, 8,
	4, 12, 11, 8, 7,
	10, 35, 33, 31, 32, 30, 36, 34, 37, 35, 33,
	4, 37, 36, 33, 32
};

extern "C" __declspec(dllexport) Sint16 poly_000A5170[] = {
	4, 24, 23, 22, 21,
	4, 19, 20, 17, 18
};

extern "C" __declspec(dllexport) Sint16 poly_000A5184[] = {
	5, 14, 18, 16, 20, 19,
	0x8000u | 8, 14, 22, 16, 24, 15, 23, 13, 21,
	0x8000u | 5, 16, 15, 19, 13, 17
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A51B0[] = {
	{ 219, 3 },
	{ 3, 251 },
	{ 3, 3 },
	{ 219, 3 },
	{ 3, 251 },
	{ 3, 3 },
	{ 219, 3 },
	{ 3, 251 },
	{ 219, 3 },
	{ 3, 251 },
	{ 3, 3 },
	{ 219, 3 },
	{ 3, 251 },
	{ 3, 3 },
	{ 219, 3 },
	{ 3, 251 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A51F0[] = {
	{ 127, 0 },
	{ 191, 255 },
	{ 191, 0 },
	{ 254, 255 },
	{ 254, 0 },
	{ 63, 255 },
	{ 63, 0 },
	{ 127, 255 },
	{ 127, 0 },
	{ 191, 255 },
	{ 65, 109 },
	{ 161, 109 },
	{ 65, 1 },
	{ 161, 1 },
	{ 127, 0 },
	{ 191, 255 },
	{ 191, 0 },
	{ 254, 255 },
	{ 254, 0 },
	{ 63, 255 },
	{ 63, 0 },
	{ 127, 255 },
	{ 127, 0 },
	{ 191, 255 },
	{ 65, 109 },
	{ 161, 109 },
	{ 65, 1 },
	{ 161, 1 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A5260[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A5280[] = {
	{ 124, 0 },
	{ 254, 0 },
	{ 120, 60 },
	{ 255, 65 },
	{ 255, 189 },
	{ 124, 0 },
	{ 0 },
	{ 120, 60 },
	{ 0, 64 },
	{ 120, 194 },
	{ 0, 186 },
	{ 124, 254 },
	{ 0, 254 },
	{ 120, 60 },
	{ 120, 194 },
	{ 255, 189 },
	{ 124, 254 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A52C8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000A5108, NULL, NULL, NULL, uv_000A51B0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_000A5130, NULL, NULL, NULL, uv_000A51F0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000A5170, NULL, NULL, NULL, uv_000A5260, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_000A5184, NULL, NULL, NULL, uv_000A5280, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A5328[] = {
	{ -627.3067f, 82.63673f, 1262 },
	{ -627.3067f, 82.63673f, 1264 },
	{ -625.3425f, 82.25893f, 1262 },
	{ -625.3425f, 82.25893f, 1264 },
	{ -599.5065f, 221.8923f, 1263 },
	{ -633.8968f, 53.21699f, 1261.5f },
	{ -633.8968f, 53.21699f, 1264.5f },
	{ -627.7975f, 82.73106f, 1261.5f },
	{ -627.7975f, 82.73106f, 1264.5f },
	{ -630.9508f, 52.65045f, 1261.5f },
	{ -630.9508f, 52.65045f, 1264.5f },
	{ -624.8516f, 82.16453f, 1261.5f },
	{ -624.8516f, 82.16453f, 1264.5f },
	{ -643, 47.5f, 1244 },
	{ -643, 47.5f, 1282 },
	{ -642, 60, 1250 },
	{ -642, 60, 1276 },
	{ -619, 42.5f, 1244 },
	{ -619, 42.5f, 1282 },
	{ -626, 55, 1250 },
	{ -626, 55, 1276 },
	{ -666, 51.5f, 1244 },
	{ -666, 51.5f, 1282 },
	{ -657, 61, 1250 },
	{ -657, 61, 1276 },
	{ -646.3067f, 86.63673f, 1262 },
	{ -646.3067f, 86.63673f, 1264 },
	{ -644.3425f, 86.25893f, 1262 },
	{ -644.3425f, 86.25893f, 1264 },
	{ -618.5065f, 225.8923f, 1263 },
	{ -652.8968f, 57.21699f, 1261.5f },
	{ -652.8968f, 57.21699f, 1264.5f },
	{ -646.7975f, 86.73106f, 1261.5f },
	{ -646.7975f, 86.73106f, 1264.5f },
	{ -649.9508f, 56.65045f, 1261.5f },
	{ -649.9508f, 56.65045f, 1264.5f },
	{ -643.8516f, 86.16453f, 1261.5f },
	{ -643.8516f, 86.16453f, 1264.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A54F0[] = {
	{ -0.6924599f, 0.143316f, -0.707078f },
	{ -0.6924599f, 0.143316f, 0.707078f },
	{ 0.6962349f, -0.123759f, -0.707065f },
	{ 0.6962349f, -0.123759f, 0.707065f },
	{ 0.157359f, 0.987541f, 0 },
	{ -0.695522f, 0.143733f, -0.703981f },
	{ -0.695522f, 0.143733f, 0.703981f },
	{ -0.452969f, 0.678708f, -0.578079f },
	{ -0.452969f, 0.678708f, 0.578079f },
	{ 0.689441f, -0.142477f, -0.710192f },
	{ 0.689441f, -0.142477f, 0.710192f },
	{ 0.679561f, 0.453538f, -0.576628f },
	{ 0.679561f, 0.453538f, 0.576628f },
	{ 0.09290799f, 0.435846f, -0.8952129f },
	{ 0.07892799f, 0.476734f, 0.875497f },
	{ 0.163259f, 0.845056f, -0.509142f },
	{ 0.151312f, 0.8568529f, 0.492857f },
	{ 0.661893f, 0.568425f, -0.488662f },
	{ 0.659586f, 0.591794f, 0.463386f },
	{ 0.5177349f, 0.732475f, -0.442076f },
	{ 0.515443f, 0.748053f, 0.418014f },
	{ -0.431554f, 0.724937f, -0.536868f },
	{ -0.451662f, 0.722506f, 0.523437f },
	{ -0.259202f, 0.865267f, -0.429101f },
	{ -0.278475f, 0.863319f, 0.420871f },
	{ -0.6924599f, 0.143316f, -0.707078f },
	{ -0.6924599f, 0.143316f, 0.707078f },
	{ 0.6962349f, -0.123759f, -0.707065f },
	{ 0.6962349f, -0.123759f, 0.707065f },
	{ 0.157359f, 0.987541f, 0 },
	{ -0.695522f, 0.143733f, -0.703981f },
	{ -0.695522f, 0.143733f, 0.703981f },
	{ -0.452969f, 0.678708f, -0.578079f },
	{ -0.452969f, 0.678708f, 0.578079f },
	{ 0.689441f, -0.142477f, -0.710192f },
	{ 0.689441f, -0.142477f, 0.710192f },
	{ 0.679561f, 0.453538f, -0.576628f },
	{ 0.679561f, 0.453538f, 0.576628f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A56B8 = { vertex_000A5328, normal_000A54F0, LengthOfArray<Sint32>(vertex_000A5328), meshlist_000A52C8, matlist_000A50B8, LengthOfArray<Uint16>(meshlist_000A52C8), LengthOfArray<Uint16>(matlist_000A50B8), { -632.7533f, 134.1962f, 1263 }, 93.64393f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A56E0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A56B8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A5714[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 34, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A573C[] = {
	4, 1, 0, 3, 2,
	4, 3, 2, 7, 6,
	6, 15, 14, 11, 10, 9, 8
};

extern "C" __declspec(dllexport) Sint16 poly_000A575E[] = {
	4, 5, 1, 7, 3,
	4, 0, 4, 2, 6,
	4, 15, 11, 13, 9,
	4, 10, 14, 8, 12
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A5788[] = {
	{ 1259, 255 },
	{ 1259, -255 },
	{ 1530, 255 },
	{ 1530, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 1259, 255 },
	{ 1259, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 1259, 255 },
	{ 1259, -255 },
	{ 1530, 255 },
	{ 1530, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A57C0[] = {
	{ 765, 255 },
	{ 0, 255 },
	{ 765, -510 },
	{ 0, 22 },
	{ 0, 255 },
	{ 765, 255 },
	{ 0, 22 },
	{ 765, -510 },
	{ 765, -510 },
	{ 0, 22 },
	{ 765, 255 },
	{ 0, 255 },
	{ 0, 22 },
	{ 765, -510 },
	{ 0, 255 },
	{ 765, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A5800[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000A573C, NULL, NULL, NULL, uv_000A5788, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_000A575E, NULL, NULL, NULL, uv_000A57C0, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A5830[] = {
	{ -729, -12, 1178 },
	{ -729, -12, 1160 },
	{ -729, 2, 1178 },
	{ -729, 2, 1160 },
	{ -672, -12, 1178 },
	{ -672, -12, 1160 },
	{ -672, 34, 1178 },
	{ -672, 34, 1160 },
	{ -729, -12, 1293 },
	{ -729, -12, 1311 },
	{ -729, 2, 1293 },
	{ -729, 2, 1311 },
	{ -672, -12, 1293 },
	{ -672, -12, 1311 },
	{ -672, 34, 1293 },
	{ -672, 34, 1311 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A58F0[] = {
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.6844209f, 0.400665f, 0.609126f },
	{ -0.6844209f, 0.400665f, -0.609126f },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ -0.405876f, 0.722966f, 0.559093f },
	{ -0.405876f, 0.722966f, -0.559093f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.6844209f, 0.400665f, -0.609126f },
	{ -0.6844209f, 0.400665f, 0.609126f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ -0.405876f, 0.722966f, -0.559093f },
	{ -0.405876f, 0.722966f, 0.559093f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A59B0 = { vertex_000A5830, normal_000A58F0, LengthOfArray<Sint32>(vertex_000A5830), meshlist_000A5800, matlist_000A5714, LengthOfArray<Uint16>(meshlist_000A5800), LengthOfArray<Uint16>(matlist_000A5714), { -700.5f, 11, 1235.5f }, 80.70007f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A59D8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A59B0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A5A0C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 21, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A5A34[] = {
	4, 5, 4, 2, 1,
	4, 5, 2, 3, 0,
	4, 18, 17, 15, 14,
	4, 14, 17, 13, 16
};

extern "C" __declspec(dllexport) Sint16 poly_000A5A5C[] = {
	4, 12, 11, 8, 7,
	4, 12, 8, 10, 6,
	4, 11, 12, 9, 10,
	4, 25, 24, 21, 20,
	4, 20, 24, 19, 22,
	4, 24, 25, 22, 23
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A5A98[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A5AD8[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -255 },
	{ 255, -255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 255, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 255, 255 },
	{ 255, -255 },
	{ 0, -255 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 255, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A5B38[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000A5A34, NULL, NULL, NULL, uv_000A5A98, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_000A5A5C, NULL, NULL, NULL, uv_000A5AD8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A5B68[] = {
	{ -748, -12, 1178 },
	{ -748, 0, 1160 },
	{ -748, -3, 1178 },
	{ -729, -12, 1178 },
	{ -729, 0, 1160 },
	{ -729, -3, 1178 },
	{ -786, -12, 1178 },
	{ -786, 3, 1160 },
	{ -786, 3, 1178 },
	{ -748, -12, 1160 },
	{ -748, -12, 1178 },
	{ -748, 3, 1160 },
	{ -748, 3, 1178 },
	{ -748, -12, 1293 },
	{ -748, -3, 1293 },
	{ -748, 0, 1311 },
	{ -729, -12, 1293 },
	{ -729, -3, 1293 },
	{ -729, 0, 1311 },
	{ -786, -12, 1293 },
	{ -786, 3, 1293 },
	{ -786, 3, 1311 },
	{ -748, -12, 1293 },
	{ -748, -12, 1311 },
	{ -748, 3, 1293 },
	{ -748, 3, 1311 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A5CA0[] = {
	{ 0, 0, 1 },
	{ 0, 0.986394f, 0.164399f },
	{ 0, 0.6463749f, 0.76302f },
	{ 0, 0, 1 },
	{ 0, 0.986394f, 0.164399f },
	{ 0, 0.6463749f, 0.76302f },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0, 0, -1 },
	{ 0, 0.6463749f, -0.76302f },
	{ 0, 0.986394f, -0.164399f },
	{ 0, 0, -1 },
	{ 0, 0.6463749f, -0.76302f },
	{ 0, 0.986394f, -0.164399f },
	{ 0, 0, -1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 1, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 1, 0, 0 },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.7071069f, 0.7071069f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A5DD8 = { vertex_000A5B68, normal_000A5CA0, LengthOfArray<Sint32>(vertex_000A5B68), meshlist_000A5B38, matlist_000A5A0C, LengthOfArray<Uint16>(meshlist_000A5B38), LengthOfArray<Uint16>(matlist_000A5A0C), { -757.5f, -4.5f, 1235.5f }, 80.70007f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A5E00 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A5DD8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A5E34[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A5E98[] = {
	4, 8, 6, 1, 2,
	4, 7, 9, 5, 4,
	4, 23, 25, 21, 19,
	4, 24, 22, 17, 18
};

extern "C" __declspec(dllexport) Sint16 poly_000A5EC0[] = {
	4, 6, 7, 2, 5,
	4, 9, 8, 3, 0,
	4, 22, 23, 18, 21,
	4, 25, 24, 20, 16
};

extern "C" __declspec(dllexport) Sint16 poly_000A5EE8[] = {
	4, 6, 8, 7, 9,
	4, 22, 24, 23, 25
};

extern "C" __declspec(dllexport) Sint16 poly_000A5EFC[] = {
	4, 12, 11, 15, 14,
	4, 29, 30, 26, 31,
	4, 37, 34, 36, 33
};

extern "C" __declspec(dllexport) Sint16 poly_000A5F1A[] = {
	4, 11, 10, 14, 13,
	4, 28, 29, 27, 26,
	4, 34, 35, 33, 32
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A5F38[] = {
	{ 9, 0 },
	{ 191, 255 },
	{ 67, 0 },
	{ 246, 255 },
	{ 191, 255 },
	{ 9, 0 },
	{ 246, 255 },
	{ 67, 0 },
	{ 191, 255 },
	{ 9, 0 },
	{ 246, 255 },
	{ 67, 0 },
	{ 9, 0 },
	{ 191, 255 },
	{ 67, 0 },
	{ 246, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A5F78[] = {
	{ 194, 204 },
	{ 500, 203 },
	{ 194, 255 },
	{ 500, 254 },
	{ 500, 35 },
	{ 194, 35 },
	{ 500, -255 },
	{ 194, -254 },
	{ 1032, 203 },
	{ 1324, 203 },
	{ 1032, 254 },
	{ 1324, 254 },
	{ 1324, 35 },
	{ 1032, 35 },
	{ 1324, -255 },
	{ 1032, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A5FB8[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A5FD8[] = {
	{ 344, 0 },
	{ 344, 255 },
	{ 700, 0 },
	{ 700, 255 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 895, 255 },
	{ 895, 0 },
	{ 0 },
	{ 0, 255 },
	{ 141, 0 },
	{ 141, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A6008[] = {
	{ 344, 253 },
	{ 344, 1 },
	{ 700, 253 },
	{ 700, 1 },
	{ 1020, 1 },
	{ 1020, 253 },
	{ 895, 1 },
	{ 895, 253 },
	{ 0, 253 },
	{ 0, 1 },
	{ 141, 253 },
	{ 141, 1 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A6038[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000A5E98, NULL, NULL, NULL, uv_000A5F38, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_000A5EC0, NULL, NULL, NULL, uv_000A5F78, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000A5EE8, NULL, NULL, NULL, uv_000A5FB8, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_000A5EFC, NULL, NULL, NULL, uv_000A5FD8, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 3, poly_000A5F1A, NULL, NULL, NULL, uv_000A6008, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A60B0[] = {
	{ -784, 0, 1194 },
	{ -757, 0, 1194 },
	{ -744, -12, 1194 },
	{ -784, 0, 1217 },
	{ -757, 0, 1217 },
	{ -744, -12, 1217 },
	{ -748, -12, 1194 },
	{ -748, -12, 1217 },
	{ -761.2188f, 0, 1194 },
	{ -761.2188f, 0, 1217 },
	{ -784, 0, 1217 },
	{ -757, 0, 1217 },
	{ -744, -12, 1217 },
	{ -784, 0, 1257 },
	{ -757, 0, 1257 },
	{ -744, -12, 1257 },
	{ -784, 0, 1257 },
	{ -757, 0, 1257 },
	{ -744, -12, 1257 },
	{ -757, 0, 1279 },
	{ -784, 0, 1279 },
	{ -744, -12, 1279 },
	{ -748, -12, 1257 },
	{ -748, -12, 1279 },
	{ -761.2188f, 0, 1257 },
	{ -761.2188f, 0, 1279 },
	{ -757, 0, 1279 },
	{ -784, 0, 1279 },
	{ -784, 0, 1293 },
	{ -757, 0, 1293 },
	{ -744, -12, 1293 },
	{ -744, -12, 1279 },
	{ -784, 0, 1194 },
	{ -757, 0, 1194 },
	{ -757, 0, 1178 },
	{ -784, 0, 1178 },
	{ -744, -12, 1194 },
	{ -744, -12, 1178 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A6278[] = {
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0, 0.903435f, 0.428724f },
	{ 0, 1, 0 },
	{ 0, 0, -1 },
	{ 0, 0.903435f, -0.428724f },
	{ 0.278519f, 0.721177f, 0.634295f },
	{ 0.278519f, 0.721177f, -0.634295f },
	{ 0.349385f, 0.904672f, 0.243922f },
	{ 0.349385f, 0.904672f, -0.243922f },
	{ 0, 1, 0 },
	{ 0.36414f, 0.931344f, 0 },
	{ 0.67828f, 0.734803f, 0 },
	{ 0, 1, 0 },
	{ 0.36414f, 0.931344f, 0 },
	{ 0.67828f, 0.734803f, 0 },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0, 0.903435f, 0.428724f },
	{ 0, 0, -1 },
	{ 0, 1, 0 },
	{ 0, 0.903435f, -0.428724f },
	{ 0.278519f, 0.721177f, 0.634295f },
	{ 0.278519f, 0.721177f, -0.634295f },
	{ 0.349385f, 0.904672f, 0.243922f },
	{ 0.349385f, 0.904672f, -0.243922f },
	{ 0.36414f, 0.931344f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.36414f, 0.931344f, 0 },
	{ 0.67828f, 0.734803f, 0 },
	{ 0.67828f, 0.734803f, 0 },
	{ 0, 1, 0 },
	{ 0.36414f, 0.931344f, 0 },
	{ 0.36414f, 0.931344f, 0 },
	{ 0, 1, 0 },
	{ 0.67828f, 0.734803f, 0 },
	{ 0.67828f, 0.734803f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A6440 = { vertex_000A60B0, normal_000A6278, LengthOfArray<Sint32>(vertex_000A60B0), meshlist_000A6038, matlist_000A5E34, LengthOfArray<Uint16>(meshlist_000A6038), LengthOfArray<Uint16>(matlist_000A5E34), { -764, -6, 1235.5f }, 60.87898f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A6468 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A6440, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A649C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A6514[] = {
	6, 11, 5, 1, 4, 0, 6,
	3, 1, 9, 11,
	3, 4, 8, 6,
	3, 16, 20, 18,
	6, 24, 17, 13, 16, 12, 18,
	3, 13, 22, 24
};

extern "C" __declspec(dllexport) Sint16 poly_000A6550[] = {
	3, 5, 11, 10,
	6, 8, 4, 2, 5, 3, 10,
	3, 2, 7, 8,
	3, 14, 19, 20,
	4, 24, 22, 23, 21,
	6, 23, 15, 17, 14, 16, 20,
	3, 17, 24, 23
};

extern "C" __declspec(dllexport) Sint16 poly_000A6596[] = {
	4, 36, 34, 29, 25,
	4, 35, 36, 27, 29,
	4, 31, 33, 26, 30,
	4, 33, 32, 30, 28
};

extern "C" __declspec(dllexport) Sint16 poly_000A65BE[] = {
	4, 29, 30, 27, 28,
	4, 30, 29, 26, 25
};

extern "C" __declspec(dllexport) Sint16 poly_000A65D2[] = {
	4, 44, 43, 40, 39,
	4, 44, 40, 42, 38,
	4, 39, 43, 37, 41,
	4, 52, 51, 48, 47,
	4, 52, 48, 50, 46,
	4, 47, 51, 45, 49
};

extern "C" __declspec(dllexport) Sint16 poly_000A660E[] = {
	4, 43, 44, 41, 42,
	4, 51, 52, 49, 50
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A6624[] = {
	{ 0 },
	{ 142, 0 },
	{ 142, 255 },
	{ 378, 0 },
	{ 378, 255 },
	{ 510, 255 },
	{ 142, 255 },
	{ 0, 255 },
	{ 0 },
	{ 378, 0 },
	{ 510, 0 },
	{ 510, 255 },
	{ 378, 0 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0 },
	{ 142, 0 },
	{ 142, 255 },
	{ 378, 0 },
	{ 378, 255 },
	{ 510, 255 },
	{ 142, 255 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A6684[] = {
	{ 142, 255 },
	{ 0, 255 },
	{ 0 },
	{ 510, 255 },
	{ 378, 255 },
	{ 378, 0 },
	{ 142, 255 },
	{ 142, 0 },
	{ 0 },
	{ 378, 0 },
	{ 510, 0 },
	{ 510, 255 },
	{ 378, 0 },
	{ 510, 0 },
	{ 510, 255 },
	{ 142, 255 },
	{ 0, 255 },
	{ 142, 0 },
	{ 0 },
	{ 0 },
	{ 142, 0 },
	{ 142, 255 },
	{ 378, 0 },
	{ 378, 255 },
	{ 510, 255 },
	{ 142, 255 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A66F4[] = {
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0, 255 },
	{ 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 0, 255 },
	{ 0 },
	{ 510, 255 },
	{ 510, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A6734[] = {
	{ 0, 255 },
	{ 1020, 255 },
	{ 0 },
	{ 1020, 0 },
	{ 0, 255 },
	{ 1020, 255 },
	{ 0 },
	{ 1020, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A6754[] = {
	{ 0, 255 },
	{ 510, 255 },
	{ 0 },
	{ 510, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0 },
	{ 510, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A67B4[] = {
	{ 0, 255 },
	{ 510, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0 },
	{ 510, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A67D4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_000A6514, NULL, NULL, NULL, uv_000A6624, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 7, poly_000A6550, NULL, NULL, NULL, uv_000A6684, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_000A6596, NULL, NULL, NULL, uv_000A66F4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_000A65BE, NULL, NULL, NULL, uv_000A6734, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 6, poly_000A65D2, NULL, NULL, NULL, uv_000A6754, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, poly_000A660E, NULL, NULL, NULL, uv_000A67B4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A6864[] = {
	{ -786, 11, 1252 },
	{ -786, 11, 1264 },
	{ -779, 0, 1252 },
	{ -779, 0, 1264 },
	{ -775, 8, 1252 },
	{ -775, 8, 1264 },
	{ -780, 10, 1247 },
	{ -773, 0, 1247 },
	{ -769, 8, 1247 },
	{ -780, 10, 1269 },
	{ -773, 0, 1269 },
	{ -769, 8, 1269 },
	{ -786, 11, 1273 },
	{ -786, 11, 1286 },
	{ -779, 0, 1273 },
	{ -779, 0, 1286 },
	{ -775, 8, 1273 },
	{ -775, 8, 1286 },
	{ -780, 10, 1269 },
	{ -773, 0, 1269 },
	{ -769, 8, 1269 },
	{ -780, 0, 1291 },
	{ -780, 10, 1291 },
	{ -773, 0, 1291 },
	{ -769, 8, 1291 },
	{ -807, 13, 1186 },
	{ -807, 13, 1286 },
	{ -786, -12, 1186 },
	{ -786, -12, 1286 },
	{ -786, 11, 1186 },
	{ -786, 11, 1286 },
	{ -783.9412f, 5.734215f, 1308 },
	{ -759, -12, 1311 },
	{ -759, 4, 1311 },
	{ -783.9416f, 5.733311f, 1165 },
	{ -758, -12, 1160 },
	{ -758, 4, 1160 },
	{ -786, 0, 1191 },
	{ -786, 0, 1218 },
	{ -786, 10, 1191 },
	{ -786, 10, 1218 },
	{ -775, 0, 1191 },
	{ -775, 0, 1218 },
	{ -775, 17, 1191 },
	{ -775, 17, 1218 },
	{ -800, 8.799999f, 1255 },
	{ -800, 8.799999f, 1281 },
	{ -800, 12.3f, 1255 },
	{ -800, 12.3f, 1281 },
	{ -786, 8.799999f, 1255 },
	{ -786, 8.799999f, 1281 },
	{ -786, 17.99999f, 1255 },
	{ -786, 17.99999f, 1281 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A6AE0[] = {
	{ 0.249956f, 0.965f, 0.07935499f },
	{ 0.250411f, 0.967896f, -0.021697f },
	{ 0.8384219f, -0.419211f, 0.348298f },
	{ 0.8384219f, -0.419211f, -0.348298f },
	{ 0.7372389f, 0.524611f, 0.425749f },
	{ 0.759924f, 0.553944f, -0.340092f },
	{ 0.214176f, 0.942376f, 0.257012f },
	{ 0.609711f, -0.304855f, 0.731653f },
	{ 0.625918f, 0.209934f, 0.751102f },
	{ 0.221066f, 0.97269f, -0.070741f },
	{ 0.609711f, -0.304855f, -0.731653f },
	{ 0.670862f, 0.239881f, -0.701713f },
	{ 0.25131f, 0.963991f, 0.08697399f },
	{ 0.250411f, 0.967897f, -0.021697f },
	{ 0.825234f, -0.412617f, 0.385663f },
	{ 0.8384219f, -0.419211f, -0.348298f },
	{ 0.694188f, 0.534176f, 0.482451f },
	{ 0.759924f, 0.553944f, -0.340092f },
	{ 0.210305f, 0.925342f, 0.315458f },
	{ 0.534523f, -0.267261f, 0.801784f },
	{ 0.5459189f, 0.177232f, 0.818878f },
	{ 0, 0, 1 },
	{ 0.198427f, 0.873078f, 0.445378f },
	{ 0.806383f, -0.403192f, 0.432646f },
	{ 0.886226f, 0.316889f, 0.337911f },
	{ 0.082817f, 0.994427f, -0.06524f },
	{ 0.084671f, 0.992898f, 0.083573f },
	{ 0.916638f, 0, 0.399718f },
	{ 0.9163539f, 0, -0.40037f },
	{ 0.579044f, 0.807822f, 0.110143f },
	{ 0.584386f, 0.807063f, -0.08451f },
	{ 0.061876f, 0.965242f, 0.253928f },
	{ 0.679408f, 0, -0.733761f },
	{ 0.692848f, 0.342934f, -0.634317f },
	{ 0.056158f, 0.977623f, -0.202729f },
	{ 0.680451f, 0, 0.732794f },
	{ 0.6873569f, 0.310356f, 0.656673f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ -0.31792f, 0.499588f, -0.805815f },
	{ -0.31792f, 0.499588f, 0.805815f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.400852f, 0.730221f, -0.553259f },
	{ 0.400852f, 0.730221f, 0.553259f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ -0.236007f, 0.579667f, -0.779927f },
	{ -0.236007f, 0.579667f, 0.779927f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.462482f, 0.687641f, -0.559697f },
	{ 0.462482f, 0.687641f, 0.559697f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A6D5C = { vertex_000A6864, normal_000A6AE0, LengthOfArray<Sint32>(vertex_000A6864), meshlist_000A67D4, matlist_000A649C, LengthOfArray<Uint16>(meshlist_000A67D4), LengthOfArray<Uint16>(matlist_000A649C), { -782.5f, 2.999998f, 1235.5f }, 79.37569f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A6D84 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A6D5C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A6DB8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A6DE0[] = {
	4, 3, 2, 1, 0,
	4, 7, 3, 5, 1,
	4, 6, 7, 4, 5,
	4, 2, 6, 0, 4
};

extern "C" __declspec(dllexport) Sint16 poly_000A6E08[] = {
	4, 7, 6, 3, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A6E14[] = {
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

extern "C" __declspec(dllexport) NJS_TEX uv_000A6E54[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A6E64[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000A6DE0, NULL, NULL, NULL, uv_000A6E14, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000A6E08, NULL, NULL, NULL, uv_000A6E54, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A6E94[] = {
	{ -777.284f, 15.32079f, 1233 },
	{ -777.284f, 15.32079f, 1240 },
	{ -772.4111f, 18.22437f, 1234 },
	{ -772.4111f, 18.22437f, 1239 },
	{ -757.2505f, 4.182649f, 1233 },
	{ -757.2505f, 4.182649f, 1240 },
	{ -757.3776f, 10.08622f, 1234 },
	{ -757.3776f, 10.08622f, 1239 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A6EF4[] = {
	{ -0.880094f, 0.361755f, -0.307519f },
	{ -0.880094f, 0.361755f, 0.307519f },
	{ -0.568034f, 0.775319f, -0.276077f },
	{ -0.568034f, 0.775319f, 0.276077f },
	{ 0.787286f, -0.55182f, -0.27509f },
	{ 0.787286f, -0.55182f, 0.27509f },
	{ 0.963739f, -0.108879f, -0.243623f },
	{ 0.963739f, -0.108879f, 0.243623f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A6F54 = { vertex_000A6E94, normal_000A6EF4, LengthOfArray<Sint32>(vertex_000A6E94), meshlist_000A6E64, matlist_000A6DB8, LengthOfArray<Uint16>(meshlist_000A6E64), LengthOfArray<Uint16>(matlist_000A6DB8), { -767.2673f, 11.20351f, 1236.5f }, 10.6106f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A6F7C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A6F54, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A6FB0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A6FD8[] = {
	6, 0, 1, 2, 3, 6, 7
};

extern "C" __declspec(dllexport) Sint16 poly_000A6FE6[] = {
	4, 7, 3, 5, 1,
	4, 2, 6, 0, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A6FFC[] = {
	{ 510, 0 },
	{ 510, 255 },
	{ 406, 0 },
	{ 406, 255 },
	{ 0 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A7014[] = {
	{ 510, -255 },
	{ 0, 42 },
	{ 510, 255 },
	{ 0, 255 },
	{ 0, 42 },
	{ 510, -255 },
	{ 0, 255 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A7034[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000A6FD8, NULL, NULL, NULL, uv_000A6FFC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000A6FE6, NULL, NULL, NULL, uv_000A7014, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A7064[] = {
	{ -715, 22, 1226 },
	{ -715, 22, 1240.5f },
	{ -715, 32, 1227 },
	{ -715, 32, 1239.5f },
	{ -678, 22, 1226 },
	{ -678, 22, 1240.5f },
	{ -678, 46, 1227 },
	{ -678, 46, 1239.5f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A70C4[] = {
	{ -0.690852f, 0.071941f, -0.719408f },
	{ -0.686627f, 0.030266f, 0.726379f },
	{ -0.665251f, 0.488411f, -0.5647089f },
	{ -0.671406f, 0.46412f, 0.57776f },
	{ -0.018822f, 0.09948599f, -0.9948609f },
	{ -0.007875999f, 0.041629f, 0.999102f },
	{ -0.278765f, 0.765717f, -0.579627f },
	{ -0.27963f, 0.751472f, 0.597576f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A7124 = { vertex_000A7064, normal_000A70C4, LengthOfArray<Sint32>(vertex_000A7064), meshlist_000A7034, matlist_000A6FB0, LengthOfArray<Uint16>(meshlist_000A7034), LengthOfArray<Uint16>(matlist_000A6FB0), { -696.5f, 34, 1233.25f }, 19.86989f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A714C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A7124, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A7180[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A71BC[] = {
	4, 7, 6, 3, 2,
	4, 15, 14, 11, 10
};

extern "C" __declspec(dllexport) Sint16 poly_000A71D0[] = {
	3, 1, 5, 3,
	0x8000u | 7, 3, 7, 5, 11, 9, 15, 13,
	7, 14, 12, 10, 8, 6, 4, 0,
	3, 0, 2, 6
};

extern "C" __declspec(dllexport) Sint16 poly_000A7200[] = {
	4, 11, 10, 7, 6
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A720C[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A722C[] = {
	{ 0, 255 },
	{ 278, 255 },
	{ 0, -169 },
	{ 0, -169 },
	{ 278, -255 },
	{ 278, 255 },
	{ 809, 101 },
	{ 809, 255 },
	{ 1020, 101 },
	{ 1020, 255 },
	{ 1020, 101 },
	{ 1020, 255 },
	{ 809, 101 },
	{ 809, 255 },
	{ 278, -255 },
	{ 278, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, -169 },
	{ 278, -255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A727C[] = {
	{ 0, 255 },
	{ 0 },
	{ 510, 255 },
	{ 510, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A728C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000A71BC, NULL, NULL, NULL, uv_000A720C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_000A71D0, NULL, NULL, NULL, uv_000A722C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000A7200, NULL, NULL, NULL, uv_000A727C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A72D4[] = {
	{ -802, -12, 1225 },
	{ -802, -12, 1247 },
	{ -802, 13, 1225 },
	{ -802, 13, 1247 },
	{ -782, -12, 1225 },
	{ -782, -12, 1247 },
	{ -782, 18, 1225 },
	{ -782, 18, 1247 },
	{ -744, -12, 1225 },
	{ -744, -12, 1247 },
	{ -744, -3, 1225 },
	{ -744, -3, 1247 },
	{ -729, -12, 1225 },
	{ -729, -12, 1247 },
	{ -729, -3, 1225 },
	{ -729, -3, 1247 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A7394[] = {
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ -0.158678f, 0.634712f, -0.756282f },
	{ -0.158678f, 0.634712f, 0.756282f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0.100288f, 0.767444f, -0.633223f },
	{ 0.100288f, 0.767444f, 0.633223f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0.159994f, 0.620295f, -0.767878f },
	{ 0.159994f, 0.620295f, 0.767878f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A7454 = { vertex_000A72D4, normal_000A7394, LengthOfArray<Sint32>(vertex_000A72D4), meshlist_000A728C, matlist_000A7180, LengthOfArray<Uint16>(meshlist_000A728C), LengthOfArray<Uint16>(matlist_000A7180), { -765.5f, 3, 1236 }, 38.12151f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A747C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A7454, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A74B0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 36, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 35, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 47, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A74EC[] = {
	4, 3, 2, 1, 0
};

extern "C" __declspec(dllexport) Sint16 poly_000A74F6[] = {
	4, 7, 3, 5, 1,
	4, 2, 6, 0, 4
};

extern "C" __declspec(dllexport) Sint16 poly_000A750A[] = {
	4, 7, 6, 3, 2
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A7514[] = {
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A7524[] = {
	{ 510, 0 },
	{ 0 },
	{ 510, 255 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A7544[] = {
	{ 510, -255 },
	{ 510, 255 },
	{ 0, -255 },
	{ 0, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A7554[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000A74EC, NULL, NULL, NULL, uv_000A7514, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000A74F6, NULL, NULL, NULL, uv_000A7524, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000A750A, NULL, NULL, NULL, uv_000A7544, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A759C[] = {
	{ -729, -12, 1220 },
	{ -729, -12, 1248 },
	{ -729, 22, 1220 },
	{ -729, 22, 1248 },
	{ -677, -12, 1220 },
	{ -677, -12, 1248 },
	{ -677, 22, 1220 },
	{ -677, 22, 1248 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A75FC[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A765C = { vertex_000A759C, normal_000A75FC, LengthOfArray<Sint32>(vertex_000A759C), meshlist_000A7554, matlist_000A74B0, LengthOfArray<Uint16>(meshlist_000A7554), LengthOfArray<Uint16>(matlist_000A74B0), { -703, 5, 1234 }, 29.52965f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A7684 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A765C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A76B8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A76CC[] = {
	4, 2, 3, 0, 1
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A76D8[] = {
	{ 0 },
	{ 765, 0 },
	{ 0, 255 },
	{ 765, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A76E8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000A76CC, NULL, NULL, NULL, uv_000A76D8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A7700[] = {
	{ 600, -99.92999f, 1567.5f },
	{ 471, -99.92999f, 1566.3f },
	{ 600, -99.92999f, 1534.969f },
	{ 473.6188f, -99.92999f, 1534.153f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A7730[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A7760 = { vertex_000A7700, normal_000A7730, LengthOfArray<Sint32>(vertex_000A7700), meshlist_000A76E8, matlist_000A76B8, LengthOfArray<Uint16>(meshlist_000A76E8), LengthOfArray<Uint16>(matlist_000A76B8), { 535.5f, -99.92999f, 1550.827f }, 66.62019f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A7788 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A7760, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A77BC[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A77D0[] = {
	3, 3, 0, 5,
	7, 0, 1, 5, 6, 7, 2, 4
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A77E8[] = {
	{ 0 },
	{ 0, 255 },
	{ 617, 0 },
	{ 0, 255 },
	{ 593, 255 },
	{ 617, 0 },
	{ 920, 255 },
	{ 953, 0 },
	{ 1275, 255 },
	{ 1275, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A7810[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000A77D0, NULL, NULL, NULL, uv_000A77E8, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A7828[] = {
	{ 600, -99.66f, 1036.5f },
	{ 505.0034f, -99.66009f, 1036.5f },
	{ 405.0064f, -64.58031f, 1036.5f },
	{ 600, -99.66f, 1062.969f },
	{ 409.2441f, -72.14032f, 1062.969f },
	{ 505.0034f, -99.66009f, 1062.969f },
	{ 453.255f, -94.71019f, 1036.5f },
	{ 453.7238f, -94.71019f, 1062.969f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A7888[] = {
	{ -0.00001f, 1, 0 },
	{ 0.047878f, 0.998853f, 0 },
	{ 0.487177f, 0.857218f, 0.166842f },
	{ -0.00001f, 1, 0 },
	{ 0.487177f, 0.857218f, 0.166842f },
	{ 0.047878f, 0.998853f, 0 },
	{ 0.30108f, 0.9496689f, 0.086481f },
	{ 0.296856f, 0.95116f, 0.08468f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A78E8 = { vertex_000A7828, normal_000A7888, LengthOfArray<Sint32>(vertex_000A7828), meshlist_000A7810, matlist_000A77BC, LengthOfArray<Uint16>(meshlist_000A7810), LengthOfArray<Uint16>(matlist_000A77BC), { 502.5032f, -82.12019f, 1049.734f }, 98.39091f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A7910 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A78E8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A7944[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A7958[] = {
	4, 0, 2, 1, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A7964[] = {
	{ 0, 255 },
	{ 0 },
	{ 765, 255 },
	{ 765, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A7974[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000A7958, NULL, NULL, NULL, uv_000A7964, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A798C[] = {
	{ 600, -99.92999f, 771.1001f },
	{ 505, -99.92999f, 771.1001f },
	{ 600, -99.92999f, 744.1563f },
	{ 505, -99.92999f, 742.9063f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A79BC[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A79EC = { vertex_000A798C, normal_000A79BC, LengthOfArray<Sint32>(vertex_000A798C), meshlist_000A7974, matlist_000A7944, LengthOfArray<Uint16>(meshlist_000A7974), LengthOfArray<Uint16>(matlist_000A7944), { 552.5f, -99.92999f, 757.0032f }, 49.54766f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A7A14 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A79EC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A7A48[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A7A5C[] = {
	14, 0, 1, 2, 3, 10, 11, 4, 5, 6, 7, 8, 9, 12, 13
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A7A7C[] = {
	{ 1514, 0 },
	{ 1514, 254 },
	{ 1987, 0 },
	{ 1977, 255 },
	{ 2379, 0 },
	{ 2379, 255 },
	{ 2835, 0 },
	{ 2835, 255 },
	{ 3311, 0 },
	{ 3311, 255 },
	{ 3767, 0 },
	{ 3767, 255 },
	{ 4236, 0 },
	{ 4239, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A7AB4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000A7A5C, NULL, NULL, NULL, uv_000A7A7C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A7ACC[] = {
	{ 250.0068f, -74.93034f, 285.2502f },
	{ 250.0069f, -74.93034f, 258.8752f },
	{ 140.507f, -64.43034f, 285.3502f },
	{ 142.757f, -64.93034f, 258.8753f },
	{ -54.99351f, -44.9303f, 285.1501f },
	{ -54.99351f, -44.9303f, 258.4251f },
	{ -164.9919f, -34.93047f, 285.1501f },
	{ -164.9919f, -34.93047f, 259.1252f },
	{ -269.9918f, -19.93048f, 285.55f },
	{ -269.9919f, -19.93048f, 259.0251f },
	{ 50.00716f, -54.45037f, 285.2502f },
	{ 50.00707f, -54.93036f, 259.1252f },
	{ -377.9939f, -9.930266f, 285.4501f },
	{ -378.9939f, -9.930266f, 258.875f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A7B74[] = {
	{ 0.095446f, 0.99542f, -0.005354f },
	{ 0.095446f, 0.99542f, -0.005354f },
	{ 0.102924f, 0.9946409f, -0.009823999f },
	{ 0.10214f, 0.9947259f, -0.009354999f },
	{ 0.09041899f, 0.995894f, -0.004524f },
	{ 0.09041899f, 0.995894f, -0.004522f },
	{ 0.116047f, 0.993244f, 0 },
	{ 0.115973f, 0.993252f, 0 },
	{ 0.116824f, 0.993152f, -0.000869f },
	{ 0.116828f, 0.993152f, -0.000869f },
	{ 0.09995899f, 0.994926f, -0.011436f },
	{ 0.09996299f, 0.994925f, -0.011437f },
	{ 0.0922f, 0.995739f, -0.001736f },
	{ 0.0922f, 0.995739f, -0.001736f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A7C1C = { vertex_000A7ACC, normal_000A7B74, LengthOfArray<Sint32>(vertex_000A7ACC), meshlist_000A7AB4, matlist_000A7A48, LengthOfArray<Uint16>(meshlist_000A7AB4), LengthOfArray<Uint16>(matlist_000A7A48), { -64.4935f, -42.4303f, 271.9876f }, 314.7927f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A7C44 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A7C1C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A7C78[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A7C8C[] = {
	10, 4, 9, 5, 6, 7, 8, 0, 1, 2, 3
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A7CA4[] = {
	{ 0 },
	{ 0, 255 },
	{ 408, 0 },
	{ 408, 255 },
	{ 645, 0 },
	{ 634, 255 },
	{ 1101, 0 },
	{ 1101, 255 },
	{ 1514, 0 },
	{ 1514, 254 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A7CCC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000A7C8C, NULL, NULL, NULL, uv_000A7CA4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A7CE4[] = {
	{ 345.0069f, -84.93034f, 285.3502f },
	{ 345.0069f, -84.93034f, 259.1252f },
	{ 250.0068f, -74.93034f, 285.2502f },
	{ 250.0069f, -74.93034f, 258.8752f },
	{ 600, -99.92999f, 285.45f },
	{ 505.0032f, -99.93008f, 285.2502f },
	{ 505.0033f, -99.93008f, 258.7252f },
	{ 450.5065f, -94.2503f, 285.4502f },
	{ 452.7565f, -94.93031f, 258.8752f },
	{ 600, -99.92999f, 259.1251f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A7D5C[] = {
	{ 0.096343f, 0.995338f, -0.004542f },
	{ 0.09634899f, 0.9953369f, -0.004539f },
	{ 0.104685f, 0.994505f, 0 },
	{ 0.104685f, 0.994505f, 0 },
	{ -0.00001f, 1, 0 },
	{ 0.051909f, 0.998643f, -0.00418f },
	{ 0.051906f, 0.998643f, -0.00418f },
	{ 0.09537999f, 0.995403f, -0.008733f },
	{ 0.09626099f, 0.995318f, -0.008691f },
	{ -0.00001f, 1, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A7DD4 = { vertex_000A7CE4, normal_000A7D5C, LengthOfArray<Sint32>(vertex_000A7CE4), meshlist_000A7CCC, matlist_000A7C78, LengthOfArray<Uint16>(meshlist_000A7CCC), LengthOfArray<Uint16>(matlist_000A7C78), { 425.0034f, -87.4302f, 272.0877f }, 175.506f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A7DFC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A7DD4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A7E30[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A7E44[] = {
	14, 12, 13, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A7E64[] = {
	{ 4236, 0 },
	{ 4239, 255 },
	{ 4763, 0 },
	{ 4763, 255 },
	{ 5087, 0 },
	{ 5087, 255 },
	{ 5626, 0 },
	{ 5626, 255 },
	{ 5893, 0 },
	{ 5893, 255 },
	{ 6121, 0 },
	{ 6121, 255 },
	{ 6375, 0 },
	{ 6375, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A7E9C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000A7E44, NULL, NULL, NULL, uv_000A7E64, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A7EB4[] = {
	{ -499.9971f, 0.06993899f, 285.2502f },
	{ -499.997f, 0.06993899f, 259.1252f },
	{ -575, 0.06999999f, 285.2502f },
	{ -575, 0.06999999f, 259.1252f },
	{ -700.0085f, 0.069473f, 285.2502f },
	{ -700.0085f, 0.069473f, 259.1252f },
	{ -760.0325f, -14.93797f, 285.2502f },
	{ -760.0325f, -14.93797f, 259.1252f },
	{ -800.0577f, -49.96045f, 285.2502f },
	{ -800.0577f, -49.96045f, 259.1252f },
	{ -820.0658f, -104.9761f, 285.2502f },
	{ -820.0658f, -104.9761f, 259.1252f },
	{ -377.9939f, -9.930266f, 285.4501f },
	{ -378.9939f, -9.930266f, 258.875f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A7F5C[] = {
	{ 0.040903f, 0.999163f, -0.000776f },
	{ 0.040909f, 0.999163f, -0.000776f },
	{ -0.00002f, 1, 0 },
	{ -0.00002f, 1, 0 },
	{ -0.122197f, 0.992506f, 0 },
	{ -0.122197f, 0.992506f, 0 },
	{ -0.46348f, 0.886107f, 0 },
	{ -0.46348f, 0.886107f, 0 },
	{ -0.8251179f, 0.5649599f, 0 },
	{ -0.8251179f, 0.5649599f, 0 },
	{ -0.93978f, 0.341779f, 0 },
	{ -0.93978f, 0.341779f, 0 },
	{ 0.081695f, 0.9966559f, -0.00155f },
	{ 0.081695f, 0.9966559f, -0.00155f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A8004 = { vertex_000A7EB4, normal_000A7F5C, LengthOfArray<Sint32>(vertex_000A7EB4), meshlist_000A7E9C, matlist_000A7E30, LengthOfArray<Uint16>(meshlist_000A7E9C), LengthOfArray<Uint16>(matlist_000A7E30), { -599.0298f, -52.45304f, 272.1626f }, 221.435f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A802C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A8004, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A8060[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A8074[] = {
	18, 14, 7, 16, 6, 17, 5, 13, 4, 10, 3, 12, 2, 9, 8, 11, 1, 15, 0
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A809C[] = {
	{ 2550, 255 },
	{ 2550, 0 },
	{ 2336, 255 },
	{ 2330, 0 },
	{ 2141, 255 },
	{ 2132, 0 },
	{ 1915, 255 },
	{ 1899, 0 },
	{ 1459, 255 },
	{ 1433, 0 },
	{ 1187, 255 },
	{ 1153, 0 },
	{ 748, 254 },
	{ 701, 0 },
	{ 334, 255 },
	{ 322, 0 },
	{ 0, 255 },
	{ 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A80E4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000A8074, NULL, NULL, NULL, uv_000A809C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A80FC[] = {
	{ -204.9597f, -63.23737f, 1036.523f },
	{ -278.9825f, -18.72256f, 1036.507f },
	{ -499.9971f, 0.069942f, 1036.5f },
	{ -575, 0.07000399f, 1036.5f },
	{ -700.0085f, 0.069477f, 1036.5f },
	{ -760.0325f, -14.93797f, 1036.5f },
	{ -800.0577f, -49.96045f, 1036.5f },
	{ -820.0658f, -104.9761f, 1036.5f },
	{ -379.9941f, -8.930243f, 1036.5f },
	{ -379.9941f, -8.280247f, 1001.032f },
	{ -575, 0.07000399f, 1001.031f },
	{ -267.4984f, -19.17234f, 1001.041f },
	{ -499.9971f, 0.069942f, 1001.031f },
	{ -700.0085f, 0.069477f, 1001.031f },
	{ -820.0658f, -104.9761f, 1001.031f },
	{ -187.5424f, -60.17558f, 1001.126f },
	{ -800.0577f, -49.96045f, 1001.031f },
	{ -760.0325f, -14.93797f, 1001.031f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A81D4[] = {
	{ 0.5008889f, 0.8329999f, 0.234992f },
	{ 0.269228f, 0.95678f, 0.109944f },
	{ 0.03742f, 0.999289f, 0.004572f },
	{ -0.00002f, 1, 0 },
	{ -0.122197f, 0.992506f, 0 },
	{ -0.46348f, 0.886107f, 0 },
	{ -0.8251179f, 0.5649599f, 0 },
	{ -0.93978f, 0.341779f, 0 },
	{ 0.08564699f, 0.9962299f, 0.013788f },
	{ 0.08562499f, 0.996232f, 0.013779f },
	{ -0.00002f, 1, 0 },
	{ 0.347414f, 0.925341f, 0.151816f },
	{ 0.03742f, 0.999289f, 0.004572f },
	{ -0.122197f, 0.992506f, 0 },
	{ -0.93978f, 0.341779f, 0 },
	{ 0.5008889f, 0.8329999f, 0.234992f },
	{ -0.8251179f, 0.5649599f, 0 },
	{ -0.46348f, 0.886107f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A82AC = { vertex_000A80FC, normal_000A81D4, LengthOfArray<Sint32>(vertex_000A80FC), meshlist_000A80E4, matlist_000A8060, LengthOfArray<Uint16>(meshlist_000A80E4), LengthOfArray<Uint16>(matlist_000A8060), { -503.804f, -52.45303f, 1018.777f }, 316.7592f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A82D4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A82AC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A8308[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A831C[] = {
	16, 0, 10, 7, 12, 1, 14, 2, 15, 3, 13, 4, 8, 5, 11, 6, 9
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A8340[] = {
	{ 0, 255 },
	{ 0 },
	{ 406, 255 },
	{ 422, 0 },
	{ 928, 255 },
	{ 944, 0 },
	{ 1253, 255 },
	{ 1267, 0 },
	{ 1795, 255 },
	{ 1803, 0 },
	{ 2065, 255 },
	{ 2070, 0 },
	{ 2295, 255 },
	{ 2297, 0 },
	{ 2550, 255 },
	{ 2550, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A8380[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000A831C, NULL, NULL, NULL, uv_000A8340, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A8398[] = {
	{ -278.0055f, -19.93022f, 773.1006f },
	{ -499.9971f, 0.069942f, 771.1001f },
	{ -575, 0.07000399f, 771.1001f },
	{ -700.0085f, 0.069477f, 771.1001f },
	{ -760.0325f, -14.93797f, 771.1001f },
	{ -800.0577f, -49.96045f, 771.1001f },
	{ -820.0658f, -104.9761f, 771.1001f },
	{ -379.9938f, -9.93027f, 771.1f },
	{ -760.0325f, -14.93797f, 739.1313f },
	{ -820.0658f, -104.9761f, 739.1313f },
	{ -277.1291f, -19.40064f, 739.5828f },
	{ -800.0577f, -49.96045f, 739.1313f },
	{ -378.5563f, -9.400271f, 739.0204f },
	{ -700.0085f, 0.069477f, 739.1313f },
	{ -499.9971f, 0.599941f, 739.1313f },
	{ -575, 0.07000399f, 739.1313f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A8458[] = {
	{ 0.09718499f, 0.995075f, 0.019501f },
	{ 0.041571f, 0.999047f, 0.013335f },
	{ -0.00002f, 0.999991f, 0.004145f },
	{ -0.122197f, 0.992506f, 0 },
	{ -0.46348f, 0.886107f, 0 },
	{ -0.8251179f, 0.5649599f, 0 },
	{ -0.93978f, 0.341779f, 0 },
	{ 0.089961f, 0.995766f, 0.018916f },
	{ -0.46348f, 0.886107f, 0 },
	{ -0.93978f, 0.341779f, 0 },
	{ 0.09718499f, 0.995075f, 0.019501f },
	{ -0.8251179f, 0.5649599f, 0 },
	{ 0.090294f, 0.995735f, 0.018943f },
	{ -0.122197f, 0.992506f, 0 },
	{ 0.041548f, 0.999048f, 0.013332f },
	{ -0.00002f, 0.999991f, 0.004145f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A8518 = { vertex_000A8398, normal_000A8458, LengthOfArray<Sint32>(vertex_000A8398), meshlist_000A8380, matlist_000A8308, LengthOfArray<Uint16>(meshlist_000A8380), LengthOfArray<Uint16>(matlist_000A8308), { -548.5974f, -52.18806f, 756.0605f }, 272.0026f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A8540 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A8518, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A8574[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A8588[] = {
	16, 0, 15, 7, 14, 1, 13, 2, 12, 3, 11, 4, 10, 5, 9, 6, 8
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A85AC[] = {
	{ 0, 255 },
	{ 0 },
	{ 580, 255 },
	{ 545, 0 },
	{ 1080, 255 },
	{ 1051, 0 },
	{ 1392, 255 },
	{ 1363, 0 },
	{ 1827, 255 },
	{ 1824, 0 },
	{ 2085, 255 },
	{ 2083, 0 },
	{ 2306, 255 },
	{ 2305, 0 },
	{ 2549, 255 },
	{ 2549, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A85EC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000A8588, NULL, NULL, NULL, uv_000A85AC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A8604[] = {
	{ -276.4948f, -19.93019f, 1537.3f },
	{ -499.9971f, 0.06993899f, 1539.3f },
	{ -575, 0.06999999f, 1539.3f },
	{ -680.0085f, 0.569466f, 1539.301f },
	{ -740.0323f, -14.93811f, 1539.305f },
	{ -780.0573f, -49.96072f, 1539.309f },
	{ -800.0651f, -104.9763f, 1539.31f },
	{ -379.9945f, -9.430218f, 1539.3f },
	{ -808.0651f, -104.9763f, 1506.135f },
	{ -788.0573f, -49.96072f, 1506.134f },
	{ -748.0323f, -14.93811f, 1506.13f },
	{ -686.0085f, 0.06946599f, 1506.126f },
	{ -575, 0.06999999f, 1506.125f },
	{ -499.9971f, 0.06993899f, 1506.125f },
	{ -379.7443f, -9.930228f, 1505.875f },
	{ -277.2444f, -18.76022f, 1506.124f }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A86C4[] = {
	{ 0.101109f, 0.99483f, 0.009536f },
	{ 0.03949f, 0.999213f, -0.003597f },
	{ 0.002379f, 0.999989f, -0.003983f },
	{ -0.109087f, 0.993906f, 0.01585f },
	{ -0.436792f, 0.894346f, 0.09673899f },
	{ -0.797309f, 0.572129f, 0.192268f },
	{ -0.916539f, 0.333327f, 0.22102f },
	{ 0.08989099f, 0.995951f, 0.001075f },
	{ -0.916539f, 0.333327f, 0.22102f },
	{ -0.819813f, 0.537423f, 0.197695f },
	{ -0.490118f, 0.864486f, 0.111572f },
	{ -0.138184f, 0.990163f, 0.021952f },
	{ 0.002378f, 0.999989f, -0.003983f },
	{ 0.039516f, 0.999212f, -0.003599f },
	{ 0.090082f, 0.9959339f, 0.00122f },
	{ 0.101109f, 0.99483f, 0.009536f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A8784 = { vertex_000A8604, normal_000A86C4, LengthOfArray<Sint32>(vertex_000A8604), meshlist_000A85EC, matlist_000A8574, LengthOfArray<Uint16>(meshlist_000A85EC), LengthOfArray<Uint16>(matlist_000A8574), { -542.2799f, -52.20342f, 1522.592f }, 266.3104f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A87AC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A8784, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A87E0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 54, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 21, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A881C[] = {
	4, 1, 0, 5, 4,
	4, 15, 14, 11, 10,
	4, 17, 16, 21, 20,
	4, 31, 30, 27, 26,
	4, 33, 32, 37, 36,
	4, 47, 46, 43, 42
};

extern "C" __declspec(dllexport) Sint16 poly_000A8858[] = {
	4, 3, 1, 7, 5,
	4, 2, 3, 6, 7,
	4, 0, 2, 4, 6,
	4, 3, 2, 1, 0,
	4, 19, 17, 23, 21,
	4, 18, 19, 22, 23,
	4, 16, 18, 20, 22,
	4, 19, 18, 17, 16,
	4, 35, 33, 39, 37,
	4, 34, 35, 38, 39,
	4, 32, 34, 36, 38,
	4, 35, 34, 33, 32
};

extern "C" __declspec(dllexport) Sint16 poly_000A88D0[] = {
	4, 10, 14, 8, 12,
	4, 15, 11, 13, 9,
	4, 14, 15, 12, 13,
	4, 26, 30, 24, 28,
	4, 31, 27, 29, 25,
	4, 30, 31, 28, 29,
	4, 42, 46, 40, 44,
	4, 47, 43, 45, 41,
	4, 46, 47, 44, 45
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A892C[] = {
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
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A898C[] = {
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
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
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
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
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
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A8A4C[] = {
	{ 193, 1 },
	{ 193, 253 },
	{ 1, 41 },
	{ 1, 225 },
	{ 193, 1 },
	{ 193, 253 },
	{ 1, 41 },
	{ 1, 225 },
	{ 193, 1 },
	{ 193, 253 },
	{ 1, 41 },
	{ 1, 225 },
	{ 193, 1 },
	{ 193, 253 },
	{ 1, 41 },
	{ 1, 225 },
	{ 193, 1 },
	{ 193, 253 },
	{ 1, 41 },
	{ 1, 225 },
	{ 193, 1 },
	{ 193, 253 },
	{ 1, 41 },
	{ 1, 225 },
	{ 193, 1 },
	{ 193, 253 },
	{ 1, 41 },
	{ 1, 225 },
	{ 193, 1 },
	{ 193, 253 },
	{ 1, 41 },
	{ 1, 225 },
	{ 193, 1 },
	{ 193, 253 },
	{ 1, 41 },
	{ 1, 225 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A8ADC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_000A881C, NULL, NULL, NULL, uv_000A892C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 12, poly_000A8858, NULL, NULL, NULL, uv_000A898C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 9, poly_000A88D0, NULL, NULL, NULL, uv_000A8A4C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A8B24[] = {
	{ -762, 13, 1202 },
	{ -762, 13, 1207 },
	{ -761, 13, 1202 },
	{ -761, 13, 1207 },
	{ -765, 5, 1201 },
	{ -765, 5, 1208 },
	{ -762, 5, 1201 },
	{ -762, 5, 1208 },
	{ -769, 0, 1200 },
	{ -769, 0, 1209 },
	{ -771, 5, 1200 },
	{ -771, 5, 1209 },
	{ -764, 0, 1200 },
	{ -764, 0, 1209 },
	{ -762, 5, 1200 },
	{ -762, 5, 1209 },
	{ -762, 13, 1255 },
	{ -762, 13, 1260 },
	{ -761, 13, 1255 },
	{ -761, 13, 1260 },
	{ -765, 5, 1254 },
	{ -765, 5, 1261 },
	{ -762, 5, 1254 },
	{ -762, 5, 1261 },
	{ -769, 0, 1253 },
	{ -769, 0, 1262 },
	{ -771, 5, 1253 },
	{ -771, 5, 1262 },
	{ -764, 0, 1253 },
	{ -764, 0, 1262 },
	{ -762, 5, 1253 },
	{ -762, 5, 1262 },
	{ -762, 13, 1277 },
	{ -762, 13, 1282 },
	{ -761, 13, 1277 },
	{ -761, 13, 1282 },
	{ -765, 5, 1276 },
	{ -765, 5, 1283 },
	{ -762, 5, 1276 },
	{ -762, 5, 1283 },
	{ -769, 0, 1275 },
	{ -769, 0, 1284 },
	{ -771, 5, 1275 },
	{ -771, 5, 1284 },
	{ -764, 0, 1275 },
	{ -764, 0, 1284 },
	{ -762, 5, 1275 },
	{ -762, 5, 1284 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A8D64[] = {
	{ -0.457537f, 0.695705f, -0.553764f },
	{ -0.457537f, 0.695705f, 0.553764f },
	{ 0.623877f, 0.571575f, -0.532991f },
	{ 0.623877f, 0.571575f, 0.532991f },
	{ -0.7037399f, 0.34176f, -0.622857f },
	{ -0.7037399f, 0.34176f, 0.622857f },
	{ 0.649492f, 0.013844f, -0.760243f },
	{ 0.649492f, 0.013844f, 0.760243f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0.797021f, -0.603952f },
	{ 0, 0.797021f, 0.603952f },
	{ 0.582217f, -0.232887f, -0.778966f },
	{ 0.582217f, -0.232887f, 0.778966f },
	{ 0.686083f, 0.464501f, -0.559936f },
	{ 0.686083f, 0.464501f, 0.559936f },
	{ -0.457537f, 0.695705f, -0.553764f },
	{ -0.457537f, 0.695705f, 0.553764f },
	{ 0.623877f, 0.571575f, -0.532991f },
	{ 0.623877f, 0.571575f, 0.532991f },
	{ -0.7037399f, 0.34176f, -0.622857f },
	{ -0.7037399f, 0.34176f, 0.622857f },
	{ 0.649492f, 0.013844f, -0.760243f },
	{ 0.649492f, 0.013844f, 0.760243f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0.797021f, -0.603952f },
	{ 0, 0.797021f, 0.603952f },
	{ 0.582217f, -0.232887f, -0.778966f },
	{ 0.582217f, -0.232887f, 0.778966f },
	{ 0.686083f, 0.464501f, -0.559936f },
	{ 0.686083f, 0.464501f, 0.559936f },
	{ -0.457537f, 0.695705f, -0.553764f },
	{ -0.457537f, 0.695705f, 0.553764f },
	{ 0.623877f, 0.571575f, -0.532991f },
	{ 0.623877f, 0.571575f, 0.532991f },
	{ -0.7037399f, 0.34176f, -0.622857f },
	{ -0.7037399f, 0.34176f, 0.622857f },
	{ 0.649492f, 0.013844f, -0.760243f },
	{ 0.649492f, 0.013844f, 0.760243f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0.797021f, -0.603952f },
	{ 0, 0.797021f, 0.603952f },
	{ 0.582217f, -0.232887f, -0.778966f },
	{ 0.582217f, -0.232887f, 0.778966f },
	{ 0.686083f, 0.464501f, -0.559936f },
	{ 0.686083f, 0.464501f, 0.559936f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A8FA4 = { vertex_000A8B24, normal_000A8D64, LengthOfArray<Sint32>(vertex_000A8B24), meshlist_000A8ADC, matlist_000A87E0, LengthOfArray<Uint16>(meshlist_000A8ADC), LengthOfArray<Uint16>(matlist_000A87E0), { -766, 6.5f, 1242 }, 42.5f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A8FCC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A8FA4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A9000[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 33, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A9014[] = {
	10, 4, 2, 5, 1, 3, 0, 9, 6, 8, 7
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A902C[] = {
	{ 53, -255 },
	{ 53, 255 },
	{ 236, -255 },
	{ 236, 255 },
	{ 398, -255 },
	{ 398, 255 },
	{ 520, -255 },
	{ 520, 255 },
	{ 617, -255 },
	{ 617, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A9054[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000A9014, NULL, NULL, NULL, uv_000A902C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A906C[] = {
	{ -691, 8, 1220 },
	{ -698, 4, 1220 },
	{ -700, -7, 1220 },
	{ -691, 8, 1178 },
	{ -700, -7, 1178 },
	{ -698, 4, 1178 },
	{ -684, 8, 1220 },
	{ -677, 4, 1220 },
	{ -677, 4, 1178 },
	{ -684, 8, 1178 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A90E4[] = {
	{ -0.256668f, 0.9665f, 0 },
	{ -0.816339f, 0.577572f, 0 },
	{ -0.98387f, 0.178885f, 0 },
	{ -0.256668f, 0.9665f, 0 },
	{ -0.98387f, 0.178885f, 0 },
	{ -0.816339f, 0.577572f, 0 },
	{ 0.256668f, 0.9665f, 0 },
	{ 0.496139f, 0.868243f, 0 },
	{ 0.496139f, 0.868243f, 0 },
	{ 0.256668f, 0.9665f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A915C = { vertex_000A906C, normal_000A90E4, LengthOfArray<Sint32>(vertex_000A906C), meshlist_000A9054, matlist_000A9000, LengthOfArray<Uint16>(meshlist_000A9054), LengthOfArray<Uint16>(matlist_000A9000), { -688.5f, 0.5f, 1199 }, 23.94264f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A9184 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A915C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A91B8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 33, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A91CC[] = {
	10, 4, 2, 5, 1, 3, 0, 9, 6, 8, 7
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A91E4[] = {
	{ 53, -255 },
	{ 53, 255 },
	{ 236, -255 },
	{ 236, 255 },
	{ 398, -255 },
	{ 398, 255 },
	{ 520, -255 },
	{ 520, 255 },
	{ 617, -255 },
	{ 617, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A920C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000A91CC, NULL, NULL, NULL, uv_000A91E4, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A9224[] = {
	{ -718, 3, 1220 },
	{ -725, -1, 1220 },
	{ -727, -12, 1220 },
	{ -718, 3, 1178 },
	{ -727, -12, 1178 },
	{ -725, -1, 1178 },
	{ -711, 3, 1220 },
	{ -704, -1, 1220 },
	{ -704, -1, 1178 },
	{ -711, 3, 1178 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A929C[] = {
	{ -0.256668f, 0.9665f, 0 },
	{ -0.816339f, 0.577572f, 0 },
	{ -0.98387f, 0.178885f, 0 },
	{ -0.256668f, 0.9665f, 0 },
	{ -0.98387f, 0.178885f, 0 },
	{ -0.816339f, 0.577572f, 0 },
	{ 0.256668f, 0.9665f, 0 },
	{ 0.496139f, 0.868243f, 0 },
	{ 0.496139f, 0.868243f, 0 },
	{ 0.256668f, 0.9665f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A9314 = { vertex_000A9224, normal_000A929C, LengthOfArray<Sint32>(vertex_000A9224), meshlist_000A920C, matlist_000A91B8, LengthOfArray<Uint16>(meshlist_000A920C), LengthOfArray<Uint16>(matlist_000A91B8), { -715.5f, -4.5f, 1199 }, 23.94264f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A933C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A9314, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A9370[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 33, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A9384[] = {
	10, 4, 2, 5, 1, 3, 0, 9, 6, 8, 7
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A939C[] = {
	{ 53, -255 },
	{ 53, 255 },
	{ 236, -255 },
	{ 236, 255 },
	{ 398, -255 },
	{ 398, 255 },
	{ 520, -255 },
	{ 520, 255 },
	{ 617, -255 },
	{ 617, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A93C4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000A9384, NULL, NULL, NULL, uv_000A939C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A93DC[] = {
	{ -718, 3, 1290 },
	{ -725, -1, 1290 },
	{ -727, -12, 1290 },
	{ -718, 3, 1248 },
	{ -727, -12, 1248 },
	{ -725, -1, 1248 },
	{ -711, 3, 1290 },
	{ -704, -1, 1290 },
	{ -704, -1, 1248 },
	{ -711, 3, 1248 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A9454[] = {
	{ -0.256668f, 0.9665f, 0 },
	{ -0.816339f, 0.577572f, 0 },
	{ -0.98387f, 0.178885f, 0 },
	{ -0.256668f, 0.9665f, 0 },
	{ -0.98387f, 0.178885f, 0 },
	{ -0.816339f, 0.577572f, 0 },
	{ 0.256668f, 0.9665f, 0 },
	{ 0.496139f, 0.868243f, 0 },
	{ 0.496139f, 0.868243f, 0 },
	{ 0.256668f, 0.9665f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A94CC = { vertex_000A93DC, normal_000A9454, LengthOfArray<Sint32>(vertex_000A93DC), meshlist_000A93C4, matlist_000A9370, LengthOfArray<Uint16>(meshlist_000A93C4), LengthOfArray<Uint16>(matlist_000A9370), { -715.5f, -4.5f, 1269 }, 23.94264f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A94F4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A94CC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A9528[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 33, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A953C[] = {
	10, 4, 2, 5, 1, 3, 0, 9, 6, 8, 7
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A9554[] = {
	{ 53, -255 },
	{ 53, 255 },
	{ 236, -255 },
	{ 236, 255 },
	{ 398, -255 },
	{ 398, 255 },
	{ 520, -255 },
	{ 520, 255 },
	{ 617, -255 },
	{ 617, 255 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A957C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000A953C, NULL, NULL, NULL, uv_000A9554, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A9594[] = {
	{ -691, 8, 1290 },
	{ -698, 4, 1290 },
	{ -700, -7, 1290 },
	{ -691, 8, 1248 },
	{ -700, -7, 1248 },
	{ -698, 4, 1248 },
	{ -684, 8, 1290 },
	{ -677, 4, 1290 },
	{ -677, 4, 1248 },
	{ -684, 8, 1248 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A960C[] = {
	{ -0.256668f, 0.9665f, 0 },
	{ -0.816339f, 0.577572f, 0 },
	{ -0.98387f, 0.178885f, 0 },
	{ -0.256668f, 0.9665f, 0 },
	{ -0.98387f, 0.178885f, 0 },
	{ -0.816339f, 0.577572f, 0 },
	{ 0.256668f, 0.9665f, 0 },
	{ 0.496139f, 0.868243f, 0 },
	{ 0.496139f, 0.868243f, 0 },
	{ 0.256668f, 0.9665f, 0 }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A9684 = { vertex_000A9594, normal_000A960C, LengthOfArray<Sint32>(vertex_000A9594), meshlist_000A957C, matlist_000A9528, LengthOfArray<Uint16>(meshlist_000A957C), LengthOfArray<Uint16>(matlist_000A9528), { -688.5f, 0.5f, 1269 }, 23.94264f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A96AC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A9684, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A96E0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 24, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 21, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A9730[] = {
	8, 6, 7, 5, 4, 27, 26, 23, 22
};

extern "C" __declspec(dllexport) Sint16 poly_000A9742[] = {
	0x8000u | 16, 21, 23, 25, 27, 1, 5, 2, 6, 3, 7, 0, 4, 24, 26, 17, 22
};

extern "C" __declspec(dllexport) Sint16 poly_000A9764[] = {
	9, 22, 17, 21, 15, 20, 16, 19, 14, 18,
	3, 21, 23, 22
};

extern "C" __declspec(dllexport) Sint16 poly_000A9780[] = {
	0x8000u | 16, 21, 25, 20, 13, 19, 12, 18, 11, 14, 8, 16, 10, 15, 9, 17, 24
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A97A4[] = {
	{ 1702, -764 },
	{ 350, -765 },
	{ 2040, -394 },
	{ 0, -394 },
	{ 2040, -60 },
	{ 0, -60 },
	{ 2040, 253 },
	{ 0, 253 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A97C4[] = {
	{ 0, -1785 },
	{ 255, -1785 },
	{ 0, -1618 },
	{ 255, -1619 },
	{ 0, -1439 },
	{ 255, -1442 },
	{ 0, -1161 },
	{ 255, -1157 },
	{ 0, -372 },
	{ 255, -376 },
	{ 0, -90 },
	{ 255, -87 },
	{ 0, 89 },
	{ 255, 90 },
	{ 0, 255 },
	{ 255, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A9804[] = {
	{ 1474, 255 },
	{ 1203, 255 },
	{ 1203, -1275 },
	{ 542, 255 },
	{ 542, -1275 },
	{ 264, 204 },
	{ 264, -1243 },
	{ 0, -8 },
	{ 2, -1020 },
	{ 1203, -1275 },
	{ 1474, -1275 },
	{ 1474, 255 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A9834[] = {
	{ 0, 255 },
	{ 0 },
	{ 533, 255 },
	{ 538, 0 },
	{ 760, 255 },
	{ 767, 0 },
	{ 1074, 255 },
	{ 1072, 0 },
	{ 1984, 255 },
	{ 1987, 0 },
	{ 2295, 255 },
	{ 2289, 0 },
	{ 2525, 255 },
	{ 2519, 0 },
	{ 3060, 255 },
	{ 3059, 0 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000A9874[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000A9730, NULL, NULL, NULL, uv_000A97A4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000A9742, NULL, NULL, NULL, uv_000A97C4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000A9764, NULL, NULL, NULL, uv_000A9804, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_000A9780, NULL, NULL, NULL, uv_000A9834, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000A98D4[] = {
	{ -695.6917f, 31.0333f, 1160 },
	{ -695.6911f, 31.03422f, 1311 },
	{ -700.0283f, 55.70863f, 1286.021f },
	{ -700.0131f, 55.71701f, 1185.92f },
	{ -671.6917f, 31.0333f, 1160 },
	{ -671.6911f, 31.03422f, 1311 },
	{ -680.9891f, 55.70863f, 1286.021f },
	{ -681.0131f, 55.71701f, 1185.92f },
	{ -807.5f, 15, 1186 },
	{ -759.2228f, 3.645802f, 1160 },
	{ -783.9416f, 5.733311f, 1165 },
	{ -807.2447f, 14.63538f, 1286.021f },
	{ -783.9412f, 5.734215f, 1308 },
	{ -759.2224f, 3.646809f, 1311 },
	{ -807.5f, 1, 1186 },
	{ -759.2228f, -12.3542f, 1160 },
	{ -783.9416f, -12.26669f, 1165 },
	{ -700.5667f, -12.27922f, 1160 },
	{ -807.2447f, 0.63538f, 1286.021f },
	{ -783.9412f, -12.26578f, 1308 },
	{ -759.2224f, -12.35319f, 1311 },
	{ -700.5661f, -12.27811f, 1311 },
	{ -676.5667f, -12.27922f, 1160 },
	{ -676.5661f, -12.27811f, 1311 },
	{ -700.5667f, 8.720778f, 1160 },
	{ -700.5661f, 8.721889f, 1311 },
	{ -676.5667f, 8.720778f, 1160 },
	{ -676.5661f, 8.721889f, 1311 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000A9A24[] = {
	{ 0, -0.38315f, 0.923686f },
	{ 0, -0.375274f, -0.926914f },
	{ 0, -0.931245f, -0.364394f },
	{ 0, -0.934294f, 0.356503f },
	{ -0.683174f, -0.269249f, 0.6788059f },
	{ -0.684622f, -0.263861f, -0.679463f },
	{ -0.486847f, -0.82493f, -0.287177f },
	{ -0.488075f, -0.8267469f, 0.279771f },
	{ 0.930262f, 0, 0.366896f },
	{ 0.09951399f, 0, 0.9950359f },
	{ 0.47379f, 0, 0.8806379f },
	{ 0.933217f, 0, -0.359313f },
	{ 0.45599f, 0, -0.889985f },
	{ 0.060302f, 0, -0.99818f },
	{ 0.852194f, 0.417394f, 0.315512f },
	{ 0.073106f, 0.685873f, 0.72404f },
	{ 0.400747f, 0.666402f, 0.628737f },
	{ -0.000452f, 0.706965f, 0.707248f },
	{ 0.854861f, 0.421355f, -0.302776f },
	{ 0.384749f, 0.657381f, -0.647934f },
	{ 0.044117f, 0.6942959f, -0.718336f },
	{ -0.000452f, 0.70696f, -0.707253f },
	{ -0.5773489f, 0.5773529f, 0.5773489f },
	{ -0.577352f, 0.577348f, -0.577351f },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ -0.6772749f, 0.073126f, 0.732087f },
	{ -0.677277f, 0.07312699f, -0.732085f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000A9B74 = { vertex_000A98D4, normal_000A9A24, LengthOfArray<Sint32>(vertex_000A98D4), meshlist_000A9874, matlist_000A96E0, LengthOfArray<Uint16>(meshlist_000A9874), LengthOfArray<Uint16>(matlist_000A96E0), { -739.5955f, 21.68141f, 1235.5f }, 101.5444f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000A9B9C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A9B74, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000A9BD0[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000A9C0C[] = {
	4, 2, 3, 1, 0,
	4, 5, 46, 4, 49,
	4, 6, 7, 4, 5,
	4, 9, 2, 8, 1,
	4, 7, 11, 5, 10,
	4, 13, 9, 12, 8,
	4, 11, 15, 10, 14,
	4, 17, 13, 16, 12,
	4, 15, 19, 14, 18,
	4, 21, 17, 20, 16,
	4, 19, 23, 18, 22,
	4, 0, 48, 1, 47,
	4, 47, 37, 1, 8,
	4, 34, 46, 10, 5,
	4, 37, 30, 8, 12,
	4, 32, 34, 14, 10,
	4, 30, 26, 12, 16,
	4, 28, 32, 18, 14,
	4, 26, 25, 16, 20,
	4, 24, 28, 22, 18
};

extern "C" __declspec(dllexport) Sint16 poly_000A9CD4[] = {
	4, 46, 34, 47, 37,
	4, 34, 32, 37, 30,
	4, 32, 28, 30, 26,
	4, 28, 24, 26, 25,
	4, 48, 49, 47, 46
};

extern "C" __declspec(dllexport) Sint16 poly_000A9D06[] = {
	4, 19, 45, 23, 29,
	4, 15, 42, 19, 45,
	4, 11, 41, 15, 42,
	4, 7, 6, 11, 41,
	3, 40, 38, 3,
	4, 38, 40, 35, 43,
	4, 35, 43, 31, 44,
	4, 21, 27, 17, 44,
	4, 9, 40, 2, 3,
	3, 6, 39, 41,
	4, 36, 42, 39, 41,
	4, 13, 43, 9, 40,
	4, 17, 44, 13, 43,
	4, 33, 45, 36, 42,
	3, 45, 33, 29,
	3, 27, 31, 44
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A9DA0[] = {
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 0 },
	{ 3, 254 },
	{ 2035, 0 },
	{ 2035, 254 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 0 },
	{ 3, 254 },
	{ 2035, 0 },
	{ 2035, 254 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A9EE0[] = {
	{ 5, -1268 },
	{ 5, 249 },
	{ 1523, -1268 },
	{ 1523, 249 },
	{ 5, -1268 },
	{ 5, 249 },
	{ 1523, -1268 },
	{ 1523, 249 },
	{ 5, -1268 },
	{ 5, 249 },
	{ 1523, -1268 },
	{ 1523, 249 },
	{ 5, -1268 },
	{ 5, 249 },
	{ 1523, -1268 },
	{ 1523, 249 },
	{ 1523, -1268 },
	{ 5, -1268 },
	{ 1523, 249 },
	{ 5, 249 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000A9F30[] = {
	{ 11, -1262 },
	{ 11, 243 },
	{ 1517, -1262 },
	{ 1517, 243 },
	{ 11, -1262 },
	{ 11, 243 },
	{ 1517, -1262 },
	{ 1517, 243 },
	{ 11, -1262 },
	{ 11, 243 },
	{ 1517, -1262 },
	{ 1517, 243 },
	{ 11, -1262 },
	{ 11, 243 },
	{ 1517, -1262 },
	{ 1517, 243 },
	{ 11, -1262 },
	{ 11, 243 },
	{ 1517, -1262 },
	{ 1517, 243 },
	{ 1517, -1262 },
	{ 11, 243 },
	{ 11, -1262 },
	{ 1517, 243 },
	{ 1517, -1262 },
	{ 11, 243 },
	{ 11, -1262 },
	{ 11, -1262 },
	{ 11, 243 },
	{ 1517, -1262 },
	{ 1517, 243 },
	{ 11, -1262 },
	{ 11, 243 },
	{ 1517, -1262 },
	{ 1517, 243 },
	{ 11, -1262 },
	{ 1517, 243 },
	{ 1517, -1262 },
	{ 1517, 243 },
	{ 1517, -1262 },
	{ 11, 243 },
	{ 11, -1262 },
	{ 11, -1262 },
	{ 11, 243 },
	{ 1517, -1262 },
	{ 1517, 243 },
	{ 11, -1262 },
	{ 11, 243 },
	{ 1517, -1262 },
	{ 1517, 243 },
	{ 1517, 243 },
	{ 1517, -1262 },
	{ 11, 243 },
	{ 11, -1262 },
	{ 11, -1262 },
	{ 11, 243 },
	{ 1517, -1262 },
	{ 11, -1262 },
	{ 1517, 243 },
	{ 1517, -1262 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000AA020[] = {
	{ NJD_MESHSET_TRIMESH | 0, 20, poly_000A9C0C, NULL, NULL, NULL, uv_000A9DA0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 5, poly_000A9CD4, NULL, NULL, NULL, uv_000A9EE0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 16, poly_000A9D06, NULL, NULL, NULL, uv_000A9F30, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000AA068[] = {
	{ 386.0001f, -126.5f, 1710 },
	{ 386.0001f, -46.5f, 1750 },
	{ 421.2091f, -46.5f, 1750 },
	{ 421.2091f, -126.5f, 1710 },
	{ 268.0001f, -126.5f, 1710 },
	{ 268.0001f, -46.5f, 1750 },
	{ 228.791f, -126.5f, 1710 },
	{ 228.791f, -46.5f, 1750 },
	{ 386.0001f, -26.5f, 1830 },
	{ 421.2091f, -26.5f, 1830 },
	{ 268.0001f, -26.5f, 1830 },
	{ 228.791f, -26.5f, 1830 },
	{ 386.0001f, -16.5f, 1960 },
	{ 421.2091f, -16.5f, 1960 },
	{ 268.0001f, -16.5f, 1960 },
	{ 228.791f, -16.5f, 1960 },
	{ 386.0001f, -26.5f, 2080 },
	{ 421.2091f, -26.5f, 2080 },
	{ 268.0001f, -26.5f, 2080 },
	{ 228.791f, -26.5f, 2080 },
	{ 386.0001f, -46.5f, 2210 },
	{ 421.2091f, -46.5f, 2210 },
	{ 268.0001f, -46.5f, 2210 },
	{ 228.791f, -46.5f, 2210 },
	{ 268.0001f, -60.5f, 2210 },
	{ 386.0001f, -60.5f, 2210 },
	{ 386.0001f, -40.5f, 2080 },
	{ 421.2091f, -176.5f, 2210 },
	{ 268.0001f, -40.5f, 2080 },
	{ 228.791f, -176.5f, 2210 },
	{ 386.0001f, -30.5f, 1960 },
	{ 421.2091f, -236.5f, 2080 },
	{ 268.0001f, -30.5f, 1960 },
	{ 228.791f, -236.5f, 2080 },
	{ 268.0001f, -40.5f, 1830 },
	{ 421.2091f, -267.5f, 1950 },
	{ 228.791f, -267.5f, 1950 },
	{ 386.0001f, -40.5f, 1830 },
	{ 421.2091f, -246.5f, 1800 },
	{ 228.791f, -246.5f, 1800 },
	{ 421.2091f, -136.5f, 1815 },
	{ 228.791f, -136.5f, 1815 },
	{ 228.791f, -151.5f, 1955 },
	{ 421.2091f, -151.5f, 1955 },
	{ 421.2091f, -161.5f, 2085 },
	{ 228.791f, -161.5f, 2085 },
	{ 268.0001f, -60.5f, 1750 },
	{ 386.0001f, -60.5f, 1750 },
	{ 386.0001f, -126.5f, 1717 },
	{ 268.0001f, -126.5f, 1717 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000AA2C0[] = {
	{ -0.5761099f, 0.36554f, -0.73108f },
	{ -0.624041f, 0.609518f, -0.488938f },
	{ 0.624041f, 0.609518f, -0.488938f },
	{ 0.7915249f, 0.273309f, -0.546618f },
	{ 0.5761099f, 0.36554f, -0.73108f },
	{ 0.624041f, 0.609518f, -0.488938f },
	{ -0.7915249f, 0.273309f, -0.546618f },
	{ -0.624041f, 0.609518f, -0.488938f },
	{ -0.688679f, 0.715704f, -0.116143f },
	{ 0.688679f, 0.715704f, -0.116143f },
	{ 0.688679f, 0.715704f, -0.116143f },
	{ -0.688679f, 0.715704f, -0.116143f },
	{ -0.689564f, 0.724221f, 0.002306f },
	{ 0.689564f, 0.724221f, 0.002306f },
	{ 0.689564f, 0.724221f, 0.002306f },
	{ -0.689564f, 0.724221f, 0.002306f },
	{ -0.699369f, 0.709799f, 0.08407199f },
	{ 0.699369f, 0.709799f, 0.08407199f },
	{ 0.699369f, 0.709799f, 0.08407199f },
	{ -0.699369f, 0.709799f, 0.08407199f },
	{ -0.73908f, 0.665785f, 0.102428f },
	{ 0.73908f, 0.665785f, 0.102428f },
	{ 0.73908f, 0.665785f, 0.102428f },
	{ -0.73908f, 0.665785f, 0.102428f },
	{ 0.670121f, 0.7336209f, 0.112865f },
	{ -0.670121f, 0.7336209f, 0.112865f },
	{ -0.715012f, 0.694259f, 0.08223099f },
	{ 1, 0, 0 },
	{ 0.715012f, 0.694259f, 0.08223099f },
	{ -1, 0, 0 },
	{ -0.725534f, 0.688183f, 0.002192f },
	{ 1, 0, 0 },
	{ 0.725534f, 0.688183f, 0.002192f },
	{ -1, 0, 0 },
	{ 0.726513f, 0.67828f, -0.11007f },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.726513f, 0.67828f, -0.11007f },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 0.814277f, 0.452797f, -0.36322f },
	{ -0.814277f, 0.452797f, -0.36322f },
	{ -0.7915249f, 0.273309f, -0.546617f },
	{ 0.7915249f, 0.273309f, -0.546617f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000AA518 = { vertex_000AA068, normal_000AA2C0, LengthOfArray<Sint32>(vertex_000AA068), meshlist_000AA020, matlist_000A9BD0, LengthOfArray<Uint16>(meshlist_000AA020), LengthOfArray<Uint16>(matlist_000A9BD0), { 325.0001f, -142, 1960 }, 279.7325f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000AA540 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000AA518, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000AA574[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000AA5B0[] = {
	4, 18, 24, 20, 22,
	4, 30, 28, 32, 26,
	4, 28, 22, 26, 24,
	4, 18, 20, 12, 14,
	4, 37, 36, 14, 12
};

extern "C" __declspec(dllexport) Sint16 poly_000AA5E2[] = {
	4, 32, 26, 0, 4,
	4, 28, 30, 6, 2,
	4, 26, 24, 4, 8,
	4, 22, 28, 10, 6,
	4, 24, 18, 8, 12,
	4, 20, 22, 14, 10,
	4, 5, 1, 4, 0,
	4, 3, 7, 2, 6,
	4, 9, 5, 8, 4,
	4, 7, 11, 6, 10,
	4, 13, 9, 12, 8,
	4, 11, 15, 10, 14,
	4, 17, 37, 15, 14,
	4, 13, 12, 16, 36
};

extern "C" __declspec(dllexport) Sint16 poly_000AA66E[] = {
	4, 9, 13, 27, 23,
	4, 29, 25, 11, 15,
	4, 5, 9, 31, 27,
	4, 33, 29, 7, 11,
	4, 1, 5, 34, 31,
	4, 35, 33, 3, 7,
	4, 19, 23, 16, 13,
	4, 17, 15, 21, 25,
	6, 17, 21, 37, 19, 36, 16
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AA6CC[] = {
	{ 1523, 249 },
	{ 1523, -1268 },
	{ 5, 249 },
	{ 5, -1268 },
	{ 5, -1268 },
	{ 5, 249 },
	{ 1523, -1268 },
	{ 1523, 249 },
	{ 5, -1268 },
	{ 5, 249 },
	{ 1523, -1268 },
	{ 1523, 249 },
	{ 1523, -229 },
	{ 5, -229 },
	{ 1523, 249 },
	{ 5, 249 },
	{ 5, 249 },
	{ 1523, 249 },
	{ 5, -1268 },
	{ 1523, -1268 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AA71C[] = {
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 2035, 254 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 3, 0 },
	{ 2035, 254 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 3, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AA7FC[] = {
	{ 1517, -1262 },
	{ 11, -1262 },
	{ 1517, 243 },
	{ 11, 243 },
	{ 11, 243 },
	{ 1517, 243 },
	{ 11, -1262 },
	{ 1517, -1262 },
	{ 1517, -1262 },
	{ 11, -1262 },
	{ 1517, 243 },
	{ 11, 243 },
	{ 11, 243 },
	{ 1517, 243 },
	{ 11, -1262 },
	{ 1517, -1262 },
	{ 1517, -1262 },
	{ 11, -1262 },
	{ 1517, 243 },
	{ 11, 243 },
	{ 11, 243 },
	{ 1517, 243 },
	{ 11, -1262 },
	{ 1517, -1262 },
	{ 11, 243 },
	{ 1517, 243 },
	{ 11, -1262 },
	{ 1517, -1262 },
	{ 1517, -1262 },
	{ 11, -1262 },
	{ 1517, 243 },
	{ 11, 243 },
	{ 11, -1262 },
	{ 11, 243 },
	{ 394, -1262 },
	{ 1517, 243 },
	{ 1158, -1262 },
	{ 1517, -1262 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000AA894[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_000AA5B0, NULL, NULL, NULL, uv_000AA6CC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 14, poly_000AA5E2, NULL, NULL, NULL, uv_000AA71C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 9, poly_000AA66E, NULL, NULL, NULL, uv_000AA7FC, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000AA8DC[] = {
	{ -238.9999f, 28.5f, 2210 },
	{ -203.7908f, 28.5f, 2210 },
	{ -356.9999f, 28.5f, 2210 },
	{ -396.209f, 28.5f, 2210 },
	{ -238.9999f, 8.5f, 2340 },
	{ -203.7908f, 8.5f, 2340 },
	{ -356.9999f, 8.5f, 2340 },
	{ -396.209f, 8.5f, 2340 },
	{ -238.9999f, -11.5f, 2480 },
	{ -203.7908f, -11.5f, 2480 },
	{ -356.9999f, -11.5f, 2480 },
	{ -396.209f, -11.5f, 2480 },
	{ -238.9999f, -31.5f, 2590 },
	{ -203.7908f, -31.5f, 2590 },
	{ -356.9999f, -31.5f, 2590 },
	{ -396.209f, -31.5f, 2590 },
	{ -203.7908f, -61.5f, 2690 },
	{ -396.209f, -61.5f, 2690 },
	{ -238.9999f, -45.5f, 2590 },
	{ -203.7908f, -121.5f, 2650 },
	{ -356.9999f, -45.5f, 2590 },
	{ -396.209f, -121.5f, 2650 },
	{ -356.9999f, -25.5f, 2480 },
	{ -203.7908f, -101.5f, 2580 },
	{ -238.9999f, -25.5f, 2480 },
	{ -396.209f, -101.5f, 2580 },
	{ -238.9999f, -5.5f, 2340 },
	{ -203.7908f, -81.5f, 2470 },
	{ -356.9999f, -5.5f, 2340 },
	{ -396.209f, -81.5f, 2470 },
	{ -356.9999f, 14.5f, 2210 },
	{ -203.7908f, -81.5f, 2330 },
	{ -238.9999f, 14.5f, 2210 },
	{ -396.209f, -81.5f, 2330 },
	{ -203.7908f, -101.5f, 2210 },
	{ -396.209f, -101.5f, 2210 },
	{ -251.8954f, -61.5f, 2690 },
	{ -348.1044f, -61.5f, 2690 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000AAAA4[] = {
	{ -0.670121f, 0.7336209f, 0.112865f },
	{ 0.670121f, 0.7336209f, 0.112865f },
	{ 0.670121f, 0.7336209f, 0.112865f },
	{ -0.670121f, 0.7336209f, 0.112865f },
	{ -0.7083189f, 0.6982509f, 0.103584f },
	{ 0.7083189f, 0.6982509f, 0.103584f },
	{ 0.7083189f, 0.6982509f, 0.103584f },
	{ -0.7083189f, 0.6982509f, 0.103584f },
	{ -0.70286f, 0.702143f, 0.113942f },
	{ 0.70286f, 0.702143f, 0.113942f },
	{ 0.70286f, 0.702143f, 0.113942f },
	{ -0.70286f, 0.702143f, 0.113942f },
	{ -0.357658f, 0.9304979f, -0.07907899f },
	{ 0.694766f, 0.699357f, 0.167927f },
	{ 0.357658f, 0.9304979f, -0.07907899f },
	{ -0.694766f, 0.699357f, 0.167927f },
	{ 0.563338f, 0.279947f, 0.7773539f },
	{ -0.563338f, 0.279947f, 0.7773539f },
	{ -0.568478f, 0.631628f, -0.527142f },
	{ 0.7674749f, -0.355606f, 0.533409f },
	{ 0.568478f, 0.631628f, -0.527142f },
	{ -0.7674749f, -0.355606f, 0.533409f },
	{ 0.711403f, 0.693709f, 0.112574f },
	{ 1, 0, 0 },
	{ -0.711403f, 0.693709f, 0.112574f },
	{ -1, 0, 0 },
	{ -0.7058989f, 0.700645f, 0.103939f },
	{ 1, 0, 0 },
	{ 0.7058989f, 0.700645f, 0.103939f },
	{ -1, 0, 0 },
	{ 0.73908f, 0.665785f, 0.102428f },
	{ 1, 0, 0 },
	{ -0.73908f, 0.665785f, 0.102428f },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, 0.338826f, 0.9408489f },
	{ 0, 0.338826f, 0.9408489f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000AAC6C = { vertex_000AA8DC, normal_000AAAA4, LengthOfArray<Sint32>(vertex_000AA8DC), meshlist_000AA894, matlist_000AA574, LengthOfArray<Uint16>(meshlist_000AA894), LengthOfArray<Uint16>(matlist_000AA574), { -299.9999f, -46.5f, 2450 }, 258.5656f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000AAC94 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000AAC6C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000AACC8[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000AAD04[] = {
	4, 18, 24, 20, 22,
	4, 30, 28, 32, 26,
	4, 28, 22, 26, 24,
	4, 18, 20, 12, 14,
	4, 37, 36, 14, 12
};

extern "C" __declspec(dllexport) Sint16 poly_000AAD36[] = {
	4, 32, 26, 0, 4,
	4, 28, 30, 6, 2,
	4, 26, 24, 4, 8,
	4, 22, 28, 10, 6,
	4, 24, 18, 8, 12,
	4, 20, 22, 14, 10,
	4, 5, 1, 4, 0,
	4, 3, 7, 2, 6,
	4, 9, 5, 8, 4,
	4, 7, 11, 6, 10,
	4, 13, 9, 12, 8,
	4, 11, 15, 10, 14,
	4, 17, 37, 15, 14,
	4, 13, 12, 16, 36
};

extern "C" __declspec(dllexport) Sint16 poly_000AADC2[] = {
	4, 9, 13, 27, 23,
	4, 29, 25, 11, 15,
	4, 5, 9, 31, 27,
	4, 33, 29, 7, 11,
	4, 1, 5, 34, 31,
	4, 35, 33, 3, 7,
	4, 19, 23, 16, 13,
	4, 17, 15, 21, 25,
	6, 16, 36, 19, 37, 21, 17
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AAE20[] = {
	{ 1523, 249 },
	{ 1523, -1268 },
	{ 5, 249 },
	{ 5, -1268 },
	{ 5, -1268 },
	{ 5, 249 },
	{ 1523, -1268 },
	{ 1523, 249 },
	{ 5, -1268 },
	{ 5, 249 },
	{ 1523, -1268 },
	{ 1523, 249 },
	{ 1523, -229 },
	{ 5, -229 },
	{ 1523, 249 },
	{ 5, 249 },
	{ 5, 249 },
	{ 1523, 249 },
	{ 5, -1268 },
	{ 1523, -1268 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AAE70[] = {
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 2035, 254 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 3, 0 },
	{ 2035, 254 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 3, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AAF50[] = {
	{ 1517, -1262 },
	{ 11, -1262 },
	{ 1517, 243 },
	{ 11, 243 },
	{ 11, 243 },
	{ 1517, 243 },
	{ 11, -1262 },
	{ 1517, -1262 },
	{ 1517, -1262 },
	{ 11, -1262 },
	{ 1517, 243 },
	{ 11, 243 },
	{ 11, 243 },
	{ 1517, 243 },
	{ 11, -1262 },
	{ 1517, -1262 },
	{ 1517, -1262 },
	{ 11, -1262 },
	{ 1517, 243 },
	{ 11, 243 },
	{ 11, 243 },
	{ 1517, 243 },
	{ 11, -1262 },
	{ 1517, -1262 },
	{ 11, 243 },
	{ 1517, 243 },
	{ 11, -1262 },
	{ 1517, -1262 },
	{ 1517, -1262 },
	{ 11, -1262 },
	{ 1517, 243 },
	{ 11, 243 },
	{ 1517, -1262 },
	{ 1158, -1262 },
	{ 1517, 243 },
	{ 394, -1262 },
	{ 11, 243 },
	{ 11, -1262 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000AAFE8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_000AAD04, NULL, NULL, NULL, uv_000AAE20, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 14, poly_000AAD36, NULL, NULL, NULL, uv_000AAE70, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 9, poly_000AADC2, NULL, NULL, NULL, uv_000AAF50, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000AB030[] = {
	{ 386.0001f, -46.5f, 2210 },
	{ 421.2091f, -46.5f, 2210 },
	{ 268.0001f, -46.5f, 2210 },
	{ 228.791f, -46.5f, 2210 },
	{ 386.0001f, -66.5f, 2340 },
	{ 421.2091f, -66.5f, 2340 },
	{ 268.0001f, -66.5f, 2340 },
	{ 228.791f, -66.5f, 2340 },
	{ 386.0001f, -86.5f, 2480 },
	{ 421.2091f, -86.5f, 2480 },
	{ 268.0001f, -86.5f, 2480 },
	{ 228.791f, -86.5f, 2480 },
	{ 386.0001f, -106.5f, 2590 },
	{ 421.2091f, -106.5f, 2590 },
	{ 268.0001f, -106.5f, 2590 },
	{ 228.791f, -106.5f, 2590 },
	{ 421.2091f, -136.5f, 2690 },
	{ 228.791f, -136.5f, 2690 },
	{ 386.0001f, -120.5f, 2590 },
	{ 421.2091f, -196.5f, 2650 },
	{ 268.0001f, -120.5f, 2590 },
	{ 228.791f, -196.5f, 2650 },
	{ 268.0001f, -100.5f, 2480 },
	{ 421.2091f, -176.5f, 2580 },
	{ 386.0001f, -100.5f, 2480 },
	{ 228.791f, -176.5f, 2580 },
	{ 386.0001f, -80.5f, 2340 },
	{ 421.2091f, -156.5f, 2470 },
	{ 268.0001f, -80.5f, 2340 },
	{ 228.791f, -156.5f, 2470 },
	{ 268.0001f, -60.5f, 2210 },
	{ 421.2091f, -156.5f, 2330 },
	{ 386.0001f, -60.5f, 2210 },
	{ 228.791f, -156.5f, 2330 },
	{ 421.2091f, -176.5f, 2210 },
	{ 228.791f, -176.5f, 2210 },
	{ 373.1046f, -136.5f, 2690 },
	{ 276.8956f, -136.5f, 2690 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000AB1F8[] = {
	{ -0.670121f, 0.7336209f, 0.112865f },
	{ 0.670121f, 0.7336209f, 0.112865f },
	{ 0.670121f, 0.7336209f, 0.112865f },
	{ -0.670121f, 0.7336209f, 0.112865f },
	{ -0.7083189f, 0.6982509f, 0.103584f },
	{ 0.7083189f, 0.6982509f, 0.103584f },
	{ 0.7083189f, 0.6982509f, 0.103584f },
	{ -0.7083189f, 0.6982509f, 0.103584f },
	{ -0.70286f, 0.702143f, 0.113942f },
	{ 0.70286f, 0.702143f, 0.113942f },
	{ 0.70286f, 0.702143f, 0.113942f },
	{ -0.70286f, 0.702143f, 0.113942f },
	{ -0.357658f, 0.9304979f, -0.07907899f },
	{ 0.694766f, 0.699357f, 0.167927f },
	{ 0.357658f, 0.9304979f, -0.07907899f },
	{ -0.694766f, 0.699357f, 0.167927f },
	{ 0.563338f, 0.279947f, 0.7773539f },
	{ -0.563338f, 0.279947f, 0.7773539f },
	{ -0.568478f, 0.631628f, -0.527142f },
	{ 0.7674749f, -0.355606f, 0.533409f },
	{ 0.568478f, 0.631628f, -0.527142f },
	{ -0.7674749f, -0.355606f, 0.533409f },
	{ 0.711403f, 0.693709f, 0.112574f },
	{ 1, 0, 0 },
	{ -0.711403f, 0.693709f, 0.112574f },
	{ -1, 0, 0 },
	{ -0.7058989f, 0.700645f, 0.103939f },
	{ 1, 0, 0 },
	{ 0.7058989f, 0.700645f, 0.103939f },
	{ -1, 0, 0 },
	{ 0.73908f, 0.665785f, 0.102428f },
	{ 1, 0, 0 },
	{ -0.73908f, 0.665785f, 0.102428f },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, 0.338826f, 0.9408489f },
	{ 0, 0.338826f, 0.9408489f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000AB3C0 = { vertex_000AB030, normal_000AB1F8, LengthOfArray<Sint32>(vertex_000AB030), meshlist_000AAFE8, matlist_000AACC8, LengthOfArray<Uint16>(meshlist_000AAFE8), LengthOfArray<Uint16>(matlist_000AACC8), { 325.0001f, -121.5f, 2450 }, 258.5656f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000AB3E8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000AB3C0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_MATERIAL matlist_000AB41C[] = {
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

extern "C" __declspec(dllexport) Sint16 poly_000AB458[] = {
	4, 2, 3, 1, 0,
	4, 5, 46, 4, 49,
	4, 6, 7, 4, 5,
	4, 9, 2, 8, 1,
	4, 7, 11, 5, 10,
	4, 13, 9, 12, 8,
	4, 11, 15, 10, 14,
	4, 17, 13, 16, 12,
	4, 15, 19, 14, 18,
	4, 21, 17, 20, 16,
	4, 19, 23, 18, 22,
	4, 0, 48, 1, 47,
	4, 47, 37, 1, 8,
	4, 34, 46, 10, 5,
	4, 37, 30, 8, 12,
	4, 32, 34, 14, 10,
	4, 30, 26, 12, 16,
	4, 28, 32, 18, 14,
	4, 26, 25, 16, 20,
	4, 24, 28, 22, 18
};

extern "C" __declspec(dllexport) Sint16 poly_000AB520[] = {
	4, 46, 34, 47, 37,
	4, 34, 32, 37, 30,
	4, 32, 28, 30, 26,
	4, 28, 24, 26, 25,
	4, 48, 49, 47, 46
};

extern "C" __declspec(dllexport) Sint16 poly_000AB552[] = {
	4, 19, 45, 23, 29,
	4, 15, 42, 19, 45,
	4, 11, 41, 15, 42,
	4, 7, 6, 11, 41,
	3, 40, 38, 3,
	4, 38, 40, 35, 43,
	4, 35, 43, 31, 44,
	4, 21, 27, 17, 44,
	4, 9, 40, 2, 3,
	3, 6, 39, 41,
	4, 36, 42, 39, 41,
	4, 13, 43, 9, 40,
	4, 17, 44, 13, 43,
	4, 33, 45, 36, 42,
	3, 45, 33, 29,
	3, 27, 31, 44
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AB5EC[] = {
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 0 },
	{ 3, 254 },
	{ 2035, 0 },
	{ 2035, 254 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 0 },
	{ 3, 254 },
	{ 2035, 0 },
	{ 2035, 254 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 },
	{ 3, 254 },
	{ 2035, 254 },
	{ 3, 0 },
	{ 2035, 0 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AB72C[] = {
	{ 5, -1268 },
	{ 5, 249 },
	{ 1523, -1268 },
	{ 1523, 249 },
	{ 5, -1268 },
	{ 5, 249 },
	{ 1523, -1268 },
	{ 1523, 249 },
	{ 5, -1268 },
	{ 5, 249 },
	{ 1523, -1268 },
	{ 1523, 249 },
	{ 5, -1268 },
	{ 5, 249 },
	{ 1523, -1268 },
	{ 1523, 249 },
	{ 1523, -1268 },
	{ 5, -1268 },
	{ 1523, 249 },
	{ 5, 249 }
};

extern "C" __declspec(dllexport) NJS_TEX uv_000AB77C[] = {
	{ 11, -1262 },
	{ 11, 243 },
	{ 1517, -1262 },
	{ 1517, 243 },
	{ 11, -1262 },
	{ 11, 243 },
	{ 1517, -1262 },
	{ 1517, 243 },
	{ 11, -1262 },
	{ 11, 243 },
	{ 1517, -1262 },
	{ 1517, 243 },
	{ 11, -1262 },
	{ 11, 243 },
	{ 1517, -1262 },
	{ 1517, 243 },
	{ 11, -1262 },
	{ 11, 243 },
	{ 1517, -1262 },
	{ 1517, 243 },
	{ 1517, -1262 },
	{ 11, 243 },
	{ 11, -1262 },
	{ 1517, 243 },
	{ 1517, -1262 },
	{ 11, 243 },
	{ 11, -1262 },
	{ 11, -1262 },
	{ 11, 243 },
	{ 1517, -1262 },
	{ 1517, 243 },
	{ 11, -1262 },
	{ 11, 243 },
	{ 1517, -1262 },
	{ 1517, 243 },
	{ 11, -1262 },
	{ 1517, 243 },
	{ 1517, -1262 },
	{ 1517, 243 },
	{ 1517, -1262 },
	{ 11, 243 },
	{ 11, -1262 },
	{ 11, -1262 },
	{ 11, 243 },
	{ 1517, -1262 },
	{ 1517, 243 },
	{ 11, -1262 },
	{ 11, 243 },
	{ 1517, -1262 },
	{ 1517, 243 },
	{ 1517, 243 },
	{ 1517, -1262 },
	{ 11, 243 },
	{ 11, -1262 },
	{ 11, -1262 },
	{ 11, 243 },
	{ 1517, -1262 },
	{ 11, -1262 },
	{ 1517, 243 },
	{ 1517, -1262 }
};

extern "C" __declspec(dllexport) NJS_MESHSET_SADX meshlist_000AB86C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 20, poly_000AB458, NULL, NULL, NULL, uv_000AB5EC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 5, poly_000AB520, NULL, NULL, NULL, uv_000AB72C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 16, poly_000AB552, NULL, NULL, NULL, uv_000AB77C, NULL }
};

extern "C" __declspec(dllexport) NJS_VECTOR vertex_000AB8B4[] = {
	{ -238.9999f, -51.5f, 1710 },
	{ -238.9999f, 28.5f, 1750 },
	{ -203.7908f, 28.5f, 1750 },
	{ -203.7908f, -51.5f, 1710 },
	{ -356.9999f, -51.5f, 1710 },
	{ -356.9999f, 28.5f, 1750 },
	{ -396.209f, -51.5f, 1710 },
	{ -396.209f, 28.5f, 1750 },
	{ -238.9999f, 48.5f, 1830 },
	{ -203.7908f, 48.5f, 1830 },
	{ -356.9999f, 48.5f, 1830 },
	{ -396.209f, 48.5f, 1830 },
	{ -238.9999f, 58.5f, 1960 },
	{ -203.7908f, 58.5f, 1960 },
	{ -356.9999f, 58.5f, 1960 },
	{ -396.209f, 58.5f, 1960 },
	{ -238.9999f, 48.5f, 2080 },
	{ -203.7908f, 48.5f, 2080 },
	{ -356.9999f, 48.5f, 2080 },
	{ -396.209f, 48.5f, 2080 },
	{ -238.9999f, 28.5f, 2210 },
	{ -203.7908f, 28.5f, 2210 },
	{ -356.9999f, 28.5f, 2210 },
	{ -396.209f, 28.5f, 2210 },
	{ -356.9999f, 14.5f, 2210 },
	{ -238.9999f, 14.5f, 2210 },
	{ -238.9999f, 34.5f, 2080 },
	{ -203.7908f, -101.5f, 2210 },
	{ -356.9999f, 34.5f, 2080 },
	{ -396.209f, -101.5f, 2210 },
	{ -238.9999f, 44.5f, 1960 },
	{ -203.7908f, -161.5f, 2080 },
	{ -356.9999f, 44.5f, 1960 },
	{ -396.209f, -161.5f, 2080 },
	{ -356.9999f, 34.5f, 1830 },
	{ -203.7908f, -188.5f, 1950 },
	{ -396.209f, -188.5f, 1950 },
	{ -238.9999f, 34.5f, 1830 },
	{ -203.7908f, -171.5f, 1800 },
	{ -396.209f, -171.5f, 1800 },
	{ -203.7908f, -61.5f, 1815 },
	{ -396.209f, -61.5f, 1815 },
	{ -396.209f, -76.5f, 1955 },
	{ -203.7908f, -76.5f, 1955 },
	{ -203.7908f, -86.5f, 2085 },
	{ -396.209f, -86.5f, 2085 },
	{ -356.9999f, 14.5f, 1750 },
	{ -238.9999f, 14.5f, 1750 },
	{ -238.9999f, -51.5f, 1717 },
	{ -356.9999f, -51.5f, 1717 }
};

extern "C" __declspec(dllexport) NJS_VECTOR normal_000ABB0C[] = {
	{ -0.5761099f, 0.36554f, -0.73108f },
	{ -0.624041f, 0.609518f, -0.488938f },
	{ 0.624041f, 0.609518f, -0.488938f },
	{ 0.7915249f, 0.273309f, -0.546618f },
	{ 0.5761099f, 0.36554f, -0.73108f },
	{ 0.624041f, 0.609518f, -0.488938f },
	{ -0.7915249f, 0.273309f, -0.546618f },
	{ -0.624041f, 0.609518f, -0.488938f },
	{ -0.688679f, 0.715704f, -0.116143f },
	{ 0.688679f, 0.715704f, -0.116143f },
	{ 0.688679f, 0.715704f, -0.116143f },
	{ -0.688679f, 0.715704f, -0.116143f },
	{ -0.689564f, 0.724221f, 0.002306f },
	{ 0.689564f, 0.724221f, 0.002306f },
	{ 0.689564f, 0.724221f, 0.002306f },
	{ -0.689564f, 0.724221f, 0.002306f },
	{ -0.699369f, 0.709799f, 0.08407199f },
	{ 0.699369f, 0.709799f, 0.08407199f },
	{ 0.699369f, 0.709799f, 0.08407199f },
	{ -0.699369f, 0.709799f, 0.08407199f },
	{ -0.73908f, 0.665785f, 0.102428f },
	{ 0.73908f, 0.665785f, 0.102428f },
	{ 0.73908f, 0.665785f, 0.102428f },
	{ -0.73908f, 0.665785f, 0.102428f },
	{ 0.670121f, 0.7336209f, 0.112865f },
	{ -0.670121f, 0.7336209f, 0.112865f },
	{ -0.715012f, 0.694259f, 0.08223099f },
	{ 1, 0, 0 },
	{ 0.715012f, 0.694259f, 0.08223099f },
	{ -1, 0, 0 },
	{ -0.725534f, 0.688183f, 0.002192f },
	{ 1, 0, 0 },
	{ 0.725534f, 0.688183f, 0.002192f },
	{ -1, 0, 0 },
	{ 0.726513f, 0.67828f, -0.11007f },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.726513f, 0.67828f, -0.11007f },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 0.814277f, 0.452797f, -0.36322f },
	{ -0.814276f, 0.452797f, -0.36322f },
	{ -0.791524f, 0.27331f, -0.546618f },
	{ 0.7915249f, 0.273309f, -0.546617f }
};

extern "C" __declspec(dllexport) NJS_MODEL_SADX attach_000ABD64 = { vertex_000AB8B4, normal_000ABB0C, LengthOfArray<Sint32>(vertex_000AB8B4), meshlist_000AB86C, matlist_000AB41C, LengthOfArray<Uint16>(meshlist_000AB86C), LengthOfArray<Uint16>(matlist_000AB41C), { -299.9999f, -65, 1960 }, 278.841f, NULL };

extern "C" __declspec(dllexport) NJS_OBJECT object_000ABD8C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000ABD64, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000ABDC0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007D884, 420, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000ABDF4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007D884, 840, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000ABE28 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007D884, 1260, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000ABE5C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007D884, 1680, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000ABE90 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007D884, 2100, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000ABEC4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007E930, 0, 0, -900, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000ABEF8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0007F93C, 0, 0, -900, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000ABF2C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00088BEC, 0, 0, 2900, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000ABF60 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000898A8, 0, 0, -900, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000ABF60_2 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000898A8_2, 0, 0, -900, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000ABF94 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00089F04, 0, 0, -900, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000ABFC8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008A6BC, 0, 0, -900, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000ABFFC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008AAE4, 0, 0, -900, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC030 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008B14C, 0, 0, -900, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC064 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008BA68, 0, 0, -900, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC098 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008BC60, 0, 0, -900, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC0CC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008BE30, 0, 0, -900, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC100 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008C160, 0, 0, -900, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC134 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0008C368, 0, 0, -900, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC168 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009305C, 0, 0, -900, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC19C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00093BE4, 0, 0, -900, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC1D0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00093D9C, 0, 0, -900, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC204 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00093F54, 0, 0, -900, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC238 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0009410C, 0, 0, -900, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC26C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000945FC, 0, 0, -900, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC2A0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00098EC8, 0, 0, -788, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC2D4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00099340, 0, 0, -788, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC308 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A1D38, 0, 0, -788, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC308_2 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A1D38_2, 0, 0, -788, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC33C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A56B8, 0, 0, -798, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC370 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A59B0, 0, 0, -788, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC3A4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A5DD8, 0, 0, -788, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC3D8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A6440, 0, 0, -788, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC40C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A6D5C, 0, 0, -788, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC440 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A6F54, 0, 0, -788, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC474 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A7124, 0, 0, -788, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC4A8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A7454, 0, 0, -788, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC4DC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A765C, 0, 0, -788, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC510 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A8FA4, 0, 0, -788, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC544 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A915C, 0, 0, -788, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC578 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A9314, 0, 0, -788, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC5AC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A94CC, 0, 0, -788, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC5E0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A9684, 0, 0, -788, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) NJS_OBJECT object_000AC614 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000A9B74, 0, 0, -788, 0, 0, 0, 1, 1, 1, NULL, NULL };
extern "C" __declspec(dllexport) COL collist_0001F03C[] = {
	{ { -185.3106f, 0, -3818.16f }, 321.2577f, 0, 0, &object_0007B5CC, 0, 0xA0000001 },
	{ { -155, -70, -808.6955f }, 341.7095f, 0, 0, &object_0007B878, 0, 0x20000001 },
	{ { -155, -70, -1886.956f }, 341.7094f, 0, 0, &object_0007BB24, 0, 0x20000001 },
	{ { -155, -70, -2426.086f }, 341.7095f, 0, 0, &object_0007BDD0, 0, 0x20000001 },
	{ { -155, -70, -2897.826f }, 291.5035f, 0, 0, &object_0007C010, 0, 0x20000001 },
	{ { -155, 350, -269.5651f }, 341.7095f, 0, 0, &object_0007C2BC, 0, 0x20000001 },
	{ { 403.5f, 161.5f, -3100 }, 202.0403f, 0, 0, &object_0007C418, 0, 0x20000001 },
	{ { -155, -70, -269.5651f }, 341.7095f, 0, 0, &object_0007C6C4, 0, 0x20000001 },
	{ { 775.8333f, 138, -3100 }, 204.6534f, 0, 0, &object_0007C820, 0, 0x20000001 },
	{ { -155, 350, -2426.086f }, 341.7095f, 0, 0, &object_0007CACC, 0, 0x20000001 },
	{ { 31.16666f, 170, -3100 }, 198.892f, 0, 0, &object_0007CC28, 0, 0x20000001 },
	{ { -155, 350, -1886.956f }, 341.7094f, 0, 0, &object_0007CED4, 0, 0x20000001 },
	{ { -155, 350, -1347.826f }, 341.7095f, 0, 0, &object_0007D180, 0, 0x20000001 },
	{ { -155, 350, -2897.826f }, 291.5035f, 0, 0, &object_0007D3C0, 0, 0x20000001 },
	{ { -155, 350, -808.6955f }, 341.7095f, 0, 0, &object_0007D66C, 0, 0x20000001 },
	{ { -770, 88, -4618.5f }, 266.4793f, 0, 0, &object_0007D8AC, 0, 0x20000001 },
	{ { -245, 143.05f, -99.99988f }, 76.53823f, 0, 0, &object_0007D9D4, 0, 0x20000001 },
	{ { -245, 143.05f, -3000 }, 76.5382f, 0, 0, &object_0007DAFC, 0, 0x20000001 },
	{ { -358.5f, 30.4f, -2 }, 112.9845f, 0, 0, &object_0007DDA8, 0, 0x40000001 },
	{ { -41.56252f, 55.75f, -3383.45f }, 58.92199f, 0, 0, &object_0007DFFC, 0, 0x40000001 },
	{ { 326.4375f, 55.75f, -3383.45f }, 58.922f, 0, 0, &object_0007E250, 0, 0x40000001 },
	{ { -326.7322f, 55.75f, -3709.123f }, 68.27926f, 0, 0, &object_0007E4A4, 0, 0x40000001 },
	{ { 616.7606f, 55.75f, -3724.265f }, 65.17374f, 0, 0, &object_0007E6F8, 0, 0x40000001 },
	{ { -843, -35.5f, -3399.5f }, 48.53349f, 0, 0, &object_0007E958, 0, 0xC0000001 },
	{ { 1155, -110, -3614.5f }, 436.2972f, 0, 0, &object_0007EF90, 0, 0xA0000001 },
	{ { 1155, -105, -4089 }, 396.7682f, 0, 0, &object_0007F4EC, 0, 0xA0000001 },
	{ { -755, 35, -3400 }, 78.51751f, 0, 0, &object_0007F964, 0, 0xC0000001 },
	{ { 587.0707f, 8.30999f, -3728.712f }, 78.91779f, 0, 0, &object_0007FF18, 0, 0xC0000001 },
	{ { 325.8f, 8.30999f, -3411.1f }, 68.80811f, 0, 0, &object_000804CC, 0, 0xC0000001 },
	{ { -298.989f, 8.30999f, -3718.662f }, 85.28831f, 0, 0, &object_00080A80, 0, 0xC0000001 },
	{ { -42.20001f, 8.30999f, -3411.1f }, 68.80812f, 0, 0, &object_00081034, 0, 0xC0000001 },
	{ { -286.6268f, 8, -3722.361f }, 47.30463f, 0, 0, &object_00081320, 0, 0xC0000001 },
	{ { 326.1105f, 8, -3424 }, 46.72718f, 0, 0, &object_0008160C, 0, 0xC0000001 },
	{ { 574.4265f, 8, -3731.286f }, 47.06767f, 0, 0, &object_000818F8, 0, 0xC0000001 },
	{ { -41.88947f, 8, -3424 }, 46.72719f, 0, 0, &object_00081BE4, 0, 0xC0000001 },
	{ { 142.5f, 0, -3473.751f }, 432.4648f, 0, 0, &object_00081FEC, 0, 0xA0000001 },
	{ { 466.8625f, 0, -3818.046f }, 322.9467f, 0, 0, &object_00082410, 0, 0xA0000001 },
	{ { -155, -70, -1347.826f }, 341.7095f, 0, 0, &object_000826BC, 0, 0x20000001 },
	{ { -690, -95, -3818.16f }, 296.415f, 0, 0, &object_00082B68, 0, 0xA0000001 },
	{ { 939, -25, -3818.16f }, 268.6687f, 0, 0, &object_00082DB4, 0, 0xA0000001 },
	{ { -210, 0, -4330.772f }, 341.4428f, 0, 0, &object_0008327C, 0, 0xA0000001 },
	{ { -695, -95, -3337.387f }, 289.1405f, 0, 0, &object_000836D8, 0, 0xA0000001 },
	{ { 1037.5f, -87.5f, -3337.387f }, 320.959f, 0, 0, &object_00083A70, 0, 0xA0000001 },
	{ { 1019.5f, -87.5f, -4330.772f }, 355.7804f, 0, 0, &object_00083E7C, 0, 0xA0000001 },
	{ { -623, -95, -4330.772f }, 352.6432f, 0, 0, &object_00084460, 0, 0xA0000001 },
	{ { 639.75f, 0, -4330.772f }, 335.5343f, 0, 0, &object_000847DC, 0, 0xA0000001 },
	{ { 219.75f, 0, -4330.772f }, 347.5245f, 0, 0, &object_00084CA0, 0, 0xA0000001 },
	{ { -232.8462f, -70, -100 }, 332.0092f, 0, 0, &object_000855F8, 0, 0xA0000001 },
	{ { -228.8461f, -70, -3000 }, 328.8f, 0, 0, &object_00085CB8, 0, 0xA0000001 },
	{ { 780.1923f, -75.75f, -100 }, 292.0504f, 0, 0, &object_0008623C, 0, 0xA0000001 },
	{ { -741.2115f, -140.25f, -3000 }, 360.3676f, 0, 0, &object_00086CF8, 0, 0xA0000001 },
	{ { -745.2115f, -140.5f, -100 }, 357.7802f, 0, 0, &object_00087810, 0, 0xA0000001 },
	{ { 297.3077f, -70, -3000 }, 328.8f, 0, 0, &object_00087D34, 0, 0xA0000001 },
	{ { 297.3077f, -70, -100 }, 328.8f, 0, 0, &object_00088248, 0, 0xA0000001 },
	{ { 780.1923f, -75.75f, -3000 }, 292.0504f, 0, 0, &object_0008875C, 0, 0xA0000001 },
	{ { -142, 165, -3000 }, 157.5881f, 0, 0, &object_00088C14, 0, 0xA0000001 },
	{ { -375, 12.5f, -9.999872f }, 130.8864f, 0, 0, &object_00088EB8, 0, 0xA0000001 },
	{ { -677.5f, -39.81088f, -3400 }, 218.9614f, 0, 0, &object_000898D0, 0, 0xA0000001 },
	{ { -632.7532f, 134.1962f, -3373 }, 99.37068f, 0, 0, &object_00089F2C, 0, 0x80000000 },
	{ { -221.3169f, 137.6342f, -3000 }, 71.14308f, 0, 0, &object_0008A3EC, 0, 0x80000000 },
	{ { -700.5f, 11, -3400.5f }, 83.91364f, 0, 0, &object_0008A6E4, 0, 0x80000000 },
	{ { -757.5f, -4.5f, -3400.5f }, 81.04782f, 0, 0, &object_0008AB0C, 0, 0x80000000 },
	{ { -764, -6, -3400.5f }, 61.17393f, 0, 0, &object_0008B174, 0, 0x80000000 },
	{ { -782.5f, 2.999998f, -3400.5f }, 80.78056f, 0, 0, &object_0008BA90, 0, 0x80000000 },
	{ { -767.2673f, 11.20351f, -3399.5f }, 12.7231f, 0, 0, &object_0008BC88, 0, 0x80000000 },
	{ { -696.5f, 34, -3402.75f }, 23.21233f, 0, 0, &object_0008BE58, 0, 0x80000000 },
	{ { -765.5f, 3, -3400 }, 40.96645f, 0, 0, &object_0008C188, 0, 0x80000000 },
	{ { -703, 5, -3402 }, 34.07345f, 0, 0, &object_0008C390, 0, 0x80000000 },
	{ { -222.1936f, 137.6342f, -100 }, 71.04896f, 0, 0, &object_0008C728, 0, 0x80000000 },
	{ { 326.5f, 55.5f, -3383.2f }, 58.86552f, 0, 0, &object_0008CD34, 0, 0x80000000 },
	{ { -329.7187f, 55.5f, -3707.748f }, 65.92635f, 0, 0, &object_0008D340, 0, 0x80000000 },
	{ { -304.2292f, 39, -3684.945f }, 25.88858f, 0, 0, &object_0008D520, 0, 0x80000000 },
	{ { 355.8544f, 39, -3394.5f }, 25.83459f, 0, 0, &object_0008D700, 0, 0x80000000 },
	{ { -323.6454f, 39, -3740.769f }, 26.41006f, 0, 0, &object_0008D8E0, 0, 0x80000000 },
	{ { 597.6688f, 39, -3697.584f }, 25.94853f, 0, 0, &object_0008DAC0, 0, 0x80000000 },
	{ { 297.1456f, 39, -3394.5f }, 25.83459f, 0, 0, &object_0008DCA0, 0, 0x80000000 },
	{ { -70.85438f, 39, -3394.5f }, 25.83459f, 0, 0, &object_0008DE80, 0, 0x80000000 },
	{ { -12.12999f, 36.25f, -3395 }, 12.26446f, 0, 0, &object_0008E098, 0, 0x80000000 },
	{ { 608.2085f, 36.25f, -3755.042f }, 13.81614f, 0, 0, &object_0008E2B0, 0, 0x80000000 },
	{ { -305.4333f, 36.25f, -3685.085f }, 15.00136f, 0, 0, &object_0008E4C8, 0, 0x80000000 },
	{ { 618.59f, 55.5f, -3723.579f }, 63.84431f, 0, 0, &object_0008EAD4, 0, 0x80000000 },
	{ { 355.87f, 36.25f, -3395 }, 12.26446f, 0, 0, &object_0008ECEC, 0, 0x80000000 },
	{ { -70.87f, 36.25f, -3395 }, 12.26446f, 0, 0, &object_0008EF04, 0, 0x80000000 },
	{ { 297.13f, 36.25f, -3395 }, 12.26446f, 0, 0, &object_0008F11C, 0, 0x80000000 },
	{ { -323.1748f, 36.25f, -3740.164f }, 14.75694f, 0, 0, &object_0008F334, 0, 0x80000000 },
	{ { 598.1306f, 36.25f, -3697.657f }, 13.96061f, 0, 0, &object_0008F54C, 0, 0x80000000 },
	{ { -41.5f, 55.5f, -3383.2f }, 58.86552f, 0, 0, &object_0008FB58, 0, 0x80000000 },
	{ { -12.14561f, 39, -3394.5f }, 25.83459f, 0, 0, &object_0008FD38, 0, 0x80000000 },
	{ { 608.6979f, 39, -3755.378f }, 26.248f, 0, 0, &object_0008FF18, 0, 0x80000000 },
	{ { 815, -35, -2649.333f }, 341.8047f, 0, 0, &object_000900B4, 0, 0x80000000 },
	{ { 815, -35, -2204 }, 341.8047f, 0, 0, &object_000901F4, 0, 0x80000000 },
	{ { 815, -35, -1758.666f }, 341.8047f, 0, 0, &object_00090334, 0, 0x80000000 },
	{ { 815, -35, -1313.333f }, 341.8047f, 0, 0, &object_00090474, 0, 0x80000000 },
	{ { 815, -35, -867.9998f }, 341.8047f, 0, 0, &object_000905B4, 0, 0x80000000 },
	{ { 815, -35, -422.6664f }, 341.8047f, 0, 0, &object_00090750, 0, 0x80000000 },
	{ { 300, 40, -2649.333f }, 377.3333f, 0, 0, &object_0009095C, 0, 0x80000000 },
	{ { 295, 40, -2204 }, 373.6381f, 0, 0, &object_00090AE4, 0, 0x80000000 },
	{ { 295, 40, -1758.666f }, 373.6381f, 0, 0, &object_00090C6C, 0, 0x80000000 },
	{ { 295, 40, -1313.333f }, 373.6381f, 0, 0, &object_00090DF4, 0, 0x80000000 },
	{ { 295, 40, -867.9998f }, 373.6381f, 0, 0, &object_00090F7C, 0, 0x80000000 },
	{ { 300, 40, -422.6664f }, 377.3333f, 0, 0, &object_00091188, 0, 0x80000000 },
	{ { 553, 136, -99.98903f }, 607.7024f, 0, 0, &object_00091634, 0, 0x80000000 },
	{ { 553, 136, -2999.989f }, 607.7023f, 0, 0, &object_00091AD0, 0, 0x80000000 },
	{ { 1040.75f, -127.25f, -99.99802f }, 464.5736f, 0, 0, &object_00092250, 0, 0x80000000 },
	{ { 1178.25f, -127.25f, -2999.998f }, 368.1421f, 0, 0, &object_00092864, 0, 0x80000000 },
	{ { -766, 6.5f, -3394 }, 42.79311f, 0, 0, &object_00093084, 0, 0x80000000 },
	{ { 1146.25f, -130.5f, 49 }, 180.2285f, 0, 0, &object_00093860, 0, 0x80000000 },
	{ { 1051.25f, -129.75f, 44.25f }, 106.0268f, 0, 0, &object_00093A54, 0, 0x80000000 },
	{ { -688.5f, 0.5f, -3437 }, 25.08984f, 0, 0, &object_00093C0C, 0, 0x80000000 },
	{ { -715.5f, -4.5f, -3437 }, 25.08984f, 0, 0, &object_00093DC4, 0, 0x80000000 },
	{ { -715.5f, -4.5f, -3367 }, 25.08984f, 0, 0, &object_00093F7C, 0, 0x80000000 },
	{ { -688.5f, 0.5f, -3367 }, 25.08984f, 0, 0, &object_00094134, 0, 0x80000000 },
	{ { -739.5955f, 21.68141f, -3400.5f }, 107.0966f, 0, 0, &object_00094624, 0, 0x80000000 },
	{ { -210.4928f, 30.1f, -3645.5f }, 649.6786f, 0, 0, &object_00094BEC, 0, 0x80000000 },
	{ { 492.4932f, 30.1f, -3645.5f }, 649.6786f, 0, 0, &object_000951B4, 0, 0x80000000 },
	{ { -499.9615f, -13.33232f, -9.999936f }, 113.7727f, 0, 0, &object_000952F4, 0, 0xA0000001 },
	{ { -183, 20, -4503 }, 337.8431f, 0, 0, &object_00095808, 0, 0xA0000001 },
	{ { -475.2857f, 30.5f, -4054 }, 164.9807f, 0, 0, &object_00095D08, 0, 0xA0000001 },
	{ { 757.2861f, 30.5f, -4054 }, 164.9807f, 0, 0, &object_00096208, 0, 0xA0000001 },
	{ { -432.5714f, 30.5f, -3714 }, 242.6747f, 0, 0, &object_000967DC, 0, 0xA0000001 },
	{ { 714.5718f, 30.5f, -3714 }, 242.6747f, 0, 0, &object_00096DB0, 0, 0xA0000001 },
	{ { -332.3571f, 30.5f, -3358.5f }, 347.1143f, 0, 0, &object_00097588, 0, 0xA0000001 },
	{ { 614.3575f, 30.5f, -3358.5f }, 347.1143f, 0, 0, &object_00097D6C, 0, 0xA0000001 },
	{ { -54.31428f, 31.5f, -3237 }, 240.4007f, 0, 0, &object_0009827C, 0, 0xA0000001 },
	{ { 336.3146f, 31.5f, -3237 }, 240.4007f, 0, 0, &object_0009878C, 0, 0xA0000001 },
	{ { 462.9985f, 20, -4503 }, 337.8431f, 0, 0, &object_00098C90, 0, 0xA0000001 },
	{ { -843, -35.5f, 1236.5f }, 48.53349f, 0, 0, &object_00098EF0, 6, 0xC0000001 },
	{ { -755, 35, 1236 }, 78.51751f, 0, 0, &object_00099368, 6, 0xC0000001 },
	{ { 603, -111.2515f, 1171.5f }, 60.46745f, 0, 0, &object_000996D0, 6, 0xC0000001 },
	{ { 599.8708f, -99.3906f, 1138.779f }, 16.97974f, 0, 0, &object_000999C4, 6, 0xE0000001 },
	{ { 599.872f, -99.3906f, 361.2788f }, 16.97976f, 0, 0, &object_00099CB8, 6, 0xE0000001 },
	{ { 603.0001f, -111.2513f, 394 }, 60.46747f, 0, 0, &object_0009A020, 6, 0xC0000001 },
	{ { 600.127f, -99.3906f, 665.2211f }, 16.97976f, 0, 0, &object_0009A314, 6, 0xE0000001 },
	{ { 600.2495f, -100.9998f, 512.9263f }, 95.04178f, 0, 0, &object_0009A558, 6, 0xA0000001 },
	{ { 603.0001f, -111.2513f, 632.5f }, 60.46747f, 0, 0, &object_0009A8C0, 6, 0xC0000001 },
	{ { 603, -111.2515f, 1410 }, 60.46745f, 0, 0, &object_0009AC28, 6, 0xC0000001 },
	{ { 600.2484f, -100.9998f, 1290.426f }, 95.04178f, 0, 0, &object_0009AE6C, 6, 0xA0000001 },
	{ { 600.1259f, -99.3906f, 1442.721f }, 16.97975f, 0, 0, &object_0009B160, 6, 0xE0000001 },
	{ { 739.5f, -125.75f, 1567.5f }, 141.8567f, 0, 0, &object_0009B318, 6, 0xA0000001 },
	{ { 747.5f, -125.75f, 1036.5f }, 149.7308f, 0, 0, &object_0009B4D0, 6, 0xA0000001 },
	{ { 747.5f, -125.75f, 771.05f }, 149.7308f, 0, 0, &object_0009B688, 6, 0xA0000001 },
	{ { 747.5f, -125.75f, 259.0625f }, 149.7308f, 0, 0, &object_0009B840, 6, 0xA0000001 },
	{ { -165, -32.5f, 264.2376f }, 341.3981f, 0, 0, &object_0009BC9C, 6, 0xA0000001 },
	{ { -599, -52.5f, 262.3625f }, 347.0321f, 0, 0, &object_0009C1F0, 6, 0xA0000001 },
	{ { -598.75f, -52.5f, 774.2376f }, 347.1159f, 0, 0, &object_0009C7B8, 6, 0xA0000001 },
	{ { -599.5f, -52.5f, 1287.9f }, 338.4944f, 0, 0, &object_0009CD34, 6, 0xA0000001 },
	{ { -554.8945f, -70.01093f, 1768.539f }, 342.8246f, 0, 0, &object_0009D4CC, 6, 0xA0000001 },
	{ { 671.625f, -117.5f, 265.7376f }, 347.8779f, 0, 0, &object_0009D8D4, 6, 0xA0000001 },
	{ { -163.5f, -72.49999f, 1286.65f }, 346.7139f, 0, 0, &object_0009DE68, 6, 0xA0000001 },
	{ { 246.5f, -52.5f, 1292.9f }, 347.5189f, 0, 0, &object_0009E34C, 6, 0xA0000001 },
	{ { -163.5f, -75.01093f, 1747.039f }, 330.2332f, 0, 0, &object_0009E9F8, 6, 0xA0000001 },
	{ { -165, -55.43259f, 774.2376f }, 357.9558f, 0, 0, &object_0009F104, 6, 0xA0000001 },
	{ { 226.2426f, -67.09557f, 1726.539f }, 292.992f, 0, 0, &object_0009F7A8, 6, 0xA0000001 },
	{ { 252.5f, -47.9326f, 777.6125f }, 362.0289f, 0, 0, &object_0009FEA4, 6, 0xA0000001 },
	{ { 632.8079f, -67.09557f, 1715.539f }, 317.7849f, 0, 0, &object_000A0610, 6, 0xA0000001 },
	{ { 505, -30, 1302 }, 290.5429f, 0, 0, &object_000A0994, 6, 0xA0000001 },
	{ { 658, -40.4326f, 780.6126f }, 362.7136f, 0, 0, &object_000A0F60, 6, 0xA0000001 },
	{ { 252.5f, -75, 262.3626f }, 332.0246f, 0, 0, &object_000A1354, 6, 0xA0000001 },
	{ { -677.5f, -39.81088f, 1236 }, 218.9615f, 0, 0, &object_000A1D60, 6, 0xA0000001 },
	{ { 99.5f, -70.89851f, 1154.7f }, 435.5592f, 0, 0, &object_000A5084, 6, 0xA0000001 },
	{ { -632.7532f, 134.1962f, 1263 }, 99.37068f, 0, 0, &object_000A56E0, 2, 0x80000000 },
	{ { -700.5f, 11, 1235.5f }, 83.91364f, 0, 0, &object_000A59D8, 2, 0x80000000 },
	{ { -757.5f, -4.5f, 1235.5f }, 81.04782f, 0, 0, &object_000A5E00, 2, 0x80000000 },
	{ { -764, -6, 1235.5f }, 61.17393f, 0, 0, &object_000A6468, 2, 0x80000000 },
	{ { -782.5f, 2.999998f, 1235.5f }, 80.78056f, 0, 0, &object_000A6D84, 2, 0x80000000 },
	{ { -767.2673f, 11.20351f, 1236.5f }, 12.7231f, 0, 0, &object_000A6F7C, 2, 0x80000000 },
	{ { -696.5f, 34, 1233.25f }, 23.21233f, 0, 0, &object_000A714C, 2, 0x80000000 },
	{ { -765.5f, 3, 1236 }, 40.96645f, 0, 0, &object_000A747C, 2, 0x80000000 },
	{ { -703, 5, 1234 }, 34.07345f, 0, 0, &object_000A7684, 2, 0x80000000 },
	{ { 535.5f, -99.92999f, 1550.827f }, 66.62019f, 0, 0, &object_000A7788, 2, 0x80000000 },
	{ { 502.5032f, -82.1202f, 1049.734f }, 99.94208f, 0, 0, &object_000A7910, 2, 0x80000000 },
	{ { 552.5f, -99.92999f, 757.0032f }, 49.54767f, 0, 0, &object_000A7A14, 2, 0x80000000 },
	{ { -64.49351f, -42.43031f, 271.9876f }, 316.4659f, 0, 0, &object_000A7C44, 2, 0x80000000 },
	{ { 425.0034f, -87.43021f, 272.0877f }, 175.9506f, 0, 0, &object_000A7DFC, 2, 0x80000000 },
	{ { -599.0298f, -52.45304f, 272.1626f }, 227.5788f, 0, 0, &object_000A802C, 2, 0x80000000 },
	{ { -503.8041f, -52.45303f, 1018.777f }, 321.0842f, 0, 0, &object_000A82D4, 2, 0x80000000 },
	{ { -548.5974f, -52.18806f, 756.0605f }, 277.0776f, 0, 0, &object_000A8540, 2, 0x80000000 },
	{ { -542.28f, -52.20342f, 1522.592f }, 271.4888f, 0, 0, &object_000A87AC, 2, 0x80000000 },
	{ { -766, 6.5f, 1242 }, 42.79311f, 0, 0, &object_000A8FCC, 2, 0x80000000 },
	{ { -688.5f, 0.5f, 1199 }, 25.08984f, 0, 0, &object_000A9184, 2, 0x80000000 },
	{ { -715.5f, -4.5f, 1199 }, 25.08984f, 0, 0, &object_000A933C, 2, 0x80000000 },
	{ { -715.5f, -4.5f, 1269 }, 25.08984f, 0, 0, &object_000A94F4, 2, 0x80000000 },
	{ { -688.5f, 0.5f, 1269 }, 25.08984f, 0, 0, &object_000A96AC, 2, 0x80000000 },
	{ { -739.5955f, 21.68141f, 1235.5f }, 107.0966f, 0, 0, &object_000A9B9C, 2, 0x80000000 },
	{ { 325.0001f, -142, 1960 }, 295.8149f, 0, 0, &object_000AA540, 6, 0xA0000001 },
	{ { -299.9999f, -46.5f, 2450 }, 269.2233f, 0, 0, &object_000AAC94, 6, 0xA0000001 },
	{ { 325.0001f, -121.5f, 2450 }, 269.2233f, 0, 0, &object_000AB3E8, 6, 0xA0000001 },
	{ { -299.9999f, -65, 1960 }, 294.972f, 0, 0, &object_000ABD8C, 6, 0xA0000001 },
	{ { -350, 88, -4618.5f }, 266.4793f, 0, 0, &object_000ABDC0, 0, 0x20000001 },
	{ { 70, 88, -4618.5f }, 266.4793f, 0, 0, &object_000ABDF4, 0, 0x20000001 },
	{ { 490, 88, -4618.5f }, 266.4793f, 0, 0, &object_000ABE28, 0, 0x20000001 },
	{ { 910, 88, -4618.5f }, 266.4793f, 0, 0, &object_000ABE5C, 0, 0x20000001 },
	{ { 1330, 88, -4618.5f }, 266.4793f, 0, 0, &object_000ABE90, 0, 0x20000001 },
	{ { -843, -35.5f, -4299.5f }, 48.53349f, 0, 0, &object_000ABEC4, 0, 0xC0000001 },
	{ { -755, 35, -4300 }, 78.51751f, 0, 0, &object_000ABEF8, 0, 0xC0000001 },
	{ { -142, 165, -100 }, 157.5881f, 0, 0, &object_000ABF2C, 0, 0xA0000001 },
	{ { -677.5f, -39.81088f, -4300 }, 218.9614f, 0, 0, &object_000ABF60, 0, 0xA0000001 },
	{ { -632.7532f, 134.1962f, -4273 }, 99.37068f, 0, 0, &object_000ABF94, 0, 0x80000000 },
	{ { -700.5f, 11, -4300.5f }, 83.91364f, 0, 0, &object_000ABFC8, 0, 0x80000000 },
	{ { -757.5f, -4.5f, -4300.5f }, 81.04782f, 0, 0, &object_000ABFFC, 0, 0x80000000 },
	{ { -764, -6, -4300.5f }, 61.17393f, 0, 0, &object_000AC030, 0, 0x80000000 },
	{ { -782.5f, 2.999998f, -4300.5f }, 80.78056f, 0, 0, &object_000AC064, 0, 0x80000000 },
	{ { -767.2673f, 11.20351f, -4299.5f }, 12.7231f, 0, 0, &object_000AC098, 0, 0x80000000 },
	{ { -696.5f, 34, -4302.75f }, 23.21233f, 0, 0, &object_000AC0CC, 0, 0x80000000 },
	{ { -765.5f, 3, -4300 }, 40.96645f, 0, 0, &object_000AC100, 0, 0x80000000 },
	{ { -703, 5, -4302 }, 34.07345f, 0, 0, &object_000AC134, 0, 0x80000000 },
	{ { -766, 6.5f, -4294 }, 42.79311f, 0, 0, &object_000AC168, 0, 0x80000000 },
	{ { -688.5f, 0.5f, -4337 }, 25.08984f, 0, 0, &object_000AC19C, 0, 0x80000000 },
	{ { -715.5f, -4.5f, -4337 }, 25.08984f, 0, 0, &object_000AC1D0, 0, 0x80000000 },
	{ { -715.5f, -4.5f, -4267 }, 25.08984f, 0, 0, &object_000AC204, 0, 0x80000000 },
	{ { -688.5f, 0.5f, -4267 }, 25.08984f, 0, 0, &object_000AC238, 0, 0x80000000 },
	{ { -739.5955f, 21.68141f, -4300.5f }, 107.0966f, 0, 0, &object_000AC26C, 0, 0x80000000 },
	{ { -843, -35.5f, 448.5f }, 48.53349f, 0, 0, &object_000AC2A0, 6, 0xC0000001 },
	{ { -755, 35, 448 }, 78.51751f, 0, 0, &object_000AC2D4, 6, 0xC0000001 },
	{ { -677.5f, -39.81088f, 448 }, 218.9615f, 0, 0, &object_000AC308, 6, 0xA0000001 },
	{ { -632.7532f, 134.1962f, 465 }, 99.37068f, 0, 0, &object_000AC33C, 2, 0x80000000 },
	{ { -700.5f, 11, 447.5f }, 83.91364f, 0, 0, &object_000AC370, 2, 0x80000000 },
	{ { -757.5f, -4.5f, 447.5f }, 81.04782f, 0, 0, &object_000AC3A4, 2, 0x80000000 },
	{ { -764, -6, 447.5f }, 61.17393f, 0, 0, &object_000AC3D8, 2, 0x80000000 },
	{ { -782.5f, 2.999998f, 447.5f }, 80.78056f, 0, 0, &object_000AC40C, 2, 0x80000000 },
	{ { -767.2673f, 11.20351f, 448.5f }, 12.7231f, 0, 0, &object_000AC440, 2, 0x80000000 },
	{ { -696.5f, 34, 445.25f }, 23.21233f, 0, 0, &object_000AC474, 2, 0x80000000 },
	{ { -765.5f, 3, 448 }, 40.96645f, 0, 0, &object_000AC4A8, 2, 0x80000000 },
	{ { -703, 5, 446 }, 34.07345f, 0, 0, &object_000AC4DC, 2, 0x80000000 },
	{ { -766, 6.5f, 454 }, 42.79311f, 0, 0, &object_000AC510, 2, 0x80000000 },
	{ { -688.5f, 0.5f, 411 }, 25.08984f, 0, 0, &object_000AC544, 2, 0x80000000 },
	{ { -715.5f, -4.5f, 411 }, 25.08984f, 0, 0, &object_000AC578, 2, 0x80000000 },
	{ { -715.5f, -4.5f, 481 }, 25.08984f, 0, 0, &object_000AC5AC, 2, 0x80000000 },
	{ { -688.5f, 0.5f, 481 }, 25.08984f, 0, 0, &object_000AC5E0, 2, 0x80000000 },
	{ { -739.5955f, 21.68141f, 447.5f }, 107.0966f, 0, 0, &object_000AC614, 2, 0x80000000 },
	{ { -677.5f, -39.81088f, 1236 }, 218.9615f, 0, 0, &object_000A1D60_2, 6, 0x80000001 }, //Glass 1
	{ { -677.5f, -39.81088f, -3400 }, 218.9614f, 0, 0, &object_000898D0_2, 0, 0xA0000001 }, //Glass 2
	{ { -677.5f, -39.81088f, -4300 }, 218.9614f, 0, 0, &object_000ABF60_2, 0, 0xA0000001 }, //Glass 3
	{ { -677.5f, -39.81088f, 448 }, 218.9615f, 0, 0, &object_000AC308_2, 6, 0xA0000001 }, //Glass 4
};

extern "C" __declspec(dllexport) LandTable landtable_00021094 = { LengthOfArray(collist_0001F03C), 0, 0xC, 1400, collist_0001F03C, NULL, "SKYDECK02", &texlist_skydeck2, 0, 0 };

#pragma warning(pop)