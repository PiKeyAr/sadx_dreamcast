#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

enum CHAOS0_OBJECTTexName
{
	CHAOS0_OBJECTTexName_patlight_a,
	CHAOS0_OBJECTTexName_patlight_b,
	CHAOS0_OBJECTTexName_tokeiyoko,
	CHAOS0_OBJECTTexName_mojiban,
	CHAOS0_OBJECTTexName_tokeihari,
	CHAOS0_OBJECTTexName_ref_crome,
	CHAOS0_OBJECTTexName_alumb_t,
	CHAOS0_OBJECTTexName_plant_02,
	CHAOS0_OBJECTTexName_plant06,
	CHAOS0_OBJECTTexName_plant05,
	CHAOS0_OBJECTTexName_ssha02,
	CHAOS0_OBJECTTexName_ssha,
	CHAOS0_OBJECTTexName_plant2_01,
	CHAOS0_OBJECTTexName_plant02,
	CHAOS0_OBJECTTexName_light1,
	CHAOS0_OBJECTTexName_light2,
	CHAOS0_OBJECTTexName_light3,
	CHAOS0_OBJECTTexName_yakei_ref,
	CHAOS0_OBJECTTexName_yakei_ref_b,
	CHAOS0_OBJECTTexName_yakei_ref_w,
	CHAOS0_OBJECTTexName_yakei_ref_orange,
	CHAOS0_OBJECTTexName_board_ura,
	CHAOS0_OBJECTTexName_rock_panel3,
	CHAOS0_OBJECTTexName_smokelight,
	CHAOS0_OBJECTTexName_sspd,
	CHAOS0_OBJECTTexName_ref_white,
	CHAOS0_OBJECTTexName_ref_black,
	CHAOS0_OBJECTTexName_tyre,
	CHAOS0_OBJECTTexName_tyre1,
	CHAOS0_OBJECTTexName_wheel_a,
	CHAOS0_OBJECTTexName_ref_lblue,
	CHAOS0_OBJECTTexName_ref_red,
	CHAOS0_OBJECTTexName_num_5
};


NJS_MATERIAL matlist_00059C1C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_tyre, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00059C30[] = {
	4, 3, 2, 1, 0
};

NJS_TEX uv_00059C3C[] = {
	{ 510, 15 },
	{ 0, 15 },
	{ 510, 254 },
	{ 0, 254 }
};

NJS_MESHSET_SADX meshlist_00059C4C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00059C30, NULL, NULL, NULL, uv_00059C3C, NULL }
};

NJS_VECTOR vertex_00059C64[] = {
	{ -24.10469f, 4.983223f, -6.5f },
	{ -24.10469f, 4.983223f, 6.5f },
	{ -24.10469f, 6.983223f, -6.5f },
	{ -24.10469f, 6.983224f, 6.5f }
};

NJS_VECTOR normal_00059C94[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 }
};

NJS_MODEL_SADX attach_00059CC4 = { vertex_00059C64, normal_00059C94, LengthOfArray(vertex_00059C64), meshlist_00059C4C, matlist_00059C1C, LengthOfArray(meshlist_00059C4C), LengthOfArray(matlist_00059C1C),{ -24.10469f, 5.983224f, 0 }, 6.576473f, NULL };

NJS_OBJECT object_00059CEC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00059CC4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00059D20[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_light3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_ONE }
};

Sint16 poly_00059D34[] = {
	4, 8, 9, 7, 6,
	4, 10, 11, 6, 7,
	4, 0, 1, 4, 5,
	4, 1, 0, 2, 3
};

NJS_TEX uv_00059D5CC[] = {
	{ 246, 230 },
	{ 246, 15 },
	{ 7, 231 },
	{ 7, 15 },
	{ 7, 15 },
	{ 7, 231 },
	{ 246, 15 },
	{ 246, 230 },
	{ 7, 15 },
	{ 7, 231 },
	{ 246, 15 },
	{ 246, 230 },
	{ 246, 230 },
	{ 246, 15 },
	{ 7, 231 },
	{ 7, 15 }
};

NJS_MESHSET_SADX meshlist_00059D9C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00059D34, NULL, NULL, NULL, uv_00059D5CC, NULL }
};

NJS_VECTOR vertex_00059DB4[] = {
	{ -23, 7, -9.000001f },
	{ -23, 5, -9 },
	{ -21, 5, -10.5f },
	{ -21, 7, -10.5f },
	{ -24, 7, -6.5f },
	{ -24, 5, -6.5f },
	{ -23, 7, 8.999998f },
	{ -23, 5, 9 },
	{ -21, 5, 10.5f },
	{ -21, 7, 10.5f },
	{ -24, 7, 6.5f },
	{ -24, 5, 6.5f }
};

NJS_VECTOR normal_00059E44[] = {
	{ -0.793717f, 0, -0.608287f },
	{ -0.793717f, 0, -0.608287f },
	{ -0.600001f, 0, -0.8f },
	{ -0.600001f, 0, -0.8f },
	{ -0.928476f, 0, -0.371391f },
	{ -0.928477f, 0, -0.371391f },
	{ -0.793717f, 0, 0.608287f },
	{ -0.793717f, 0, 0.608287f },
	{ -0.6f, 0, 0.8f },
	{ -0.6f, 0, 0.8f },
	{ -0.928476f, 0, 0.371391f },
	{ -0.928476f, 0, 0.371391f }
};

NJS_MODEL_SADX attach_00059ED4 = { vertex_00059DB4, normal_00059E44, LengthOfArray(vertex_00059DB4), meshlist_00059D9C, matlist_00059D20, LengthOfArray(meshlist_00059D9C), LengthOfArray(matlist_00059D20),{ -22.5f, 6, 0 }, 10.6066f, NULL };

NJS_OBJECT object_00059EFC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_00059ED4, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_00059CEC, NULL };

NJS_MATERIAL matlist_000583F4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_num_5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00058408[] = {
	4, 3, 2, 1, 0
};

NJS_TEX uv_00058414[] = {
	{ 0, 255 },
	{ 251, 255 },
	{ 0, 3 },
	{ 251, 3 }
};

NJS_MESHSET_SADX meshlist_00058424[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00058408, NULL, NULL, NULL, uv_00058414, NULL }
};

NJS_VECTOR vertex_0005843C[] = {
	{ -3.077229f, 1.100027f, -3 },
	{ -3.077229f, 1.100027f, 3 },
	{ 2.422771f, 1.100026f, -3 },
	{ 2.422771f, 1.100026f, 3 }
};

NJS_VECTOR normal_0005846C[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0005849C = { vertex_0005843C, normal_0005846C, LengthOfArray(vertex_0005843C), meshlist_00058424, matlist_000583F4, LengthOfArray(meshlist_00058424), LengthOfArray(matlist_000583F4),{ -0.327229f, 1.100027f, 0 }, 4.069706f, NULL };

NJS_OBJECT object_000584C4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005849C, 20.07723f, 9.92705f, 0, 0, 0, 0, 1, 1, 1, NULL, &object_00059EFC };

NJS_MATERIAL matlist_000584F8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_sspd, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0005850C[] = {
	4, 3, 2, 1, 0
};

NJS_TEX uv_00058518[] = {
	{ 0, 255 },
	{ 251, 255 },
	{ 0, 3 },
	{ 251, 3 }
};

NJS_MESHSET_SADX meshlist_00058528[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0005850C, NULL, NULL, NULL, uv_00058518, NULL }
};

NJS_VECTOR vertex_00058540[] = {
	{ -1.118029f, -0.003193f, -5.580001f },
	{ -1.118029f, -0.003193f, 5.580001f },
	{ 1.118029f, 0.003183f, -5.580001f },
	{ 1.118029f, 0.003183f, 5.580001f }
};

NJS_VECTOR normal_00058570[] = {
	{ -0.002851f, 0.9999959f, 0 },
	{ -0.002851f, 0.9999959f, 0 },
	{ -0.002851f, 0.9999959f, 0 },
	{ -0.002851f, 0.9999959f, 0 }
};

NJS_MODEL_SADX attach_000585A0 = { vertex_00058540, normal_00058570, LengthOfArray(vertex_00058540), meshlist_00058528, matlist_000584F8, LengthOfArray(meshlist_00058528), LengthOfArray(matlist_000584F8),{ 0, -0.00005f, 0 }, 5.668899f, NULL };

NJS_OBJECT object_000585C8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000585A0, 23.50792f, 10, 0, 0, 0, 0xFFFFD2C7, 1, 1, 1, NULL, &object_000584C4 };

NJS_MATERIAL matlist_000585FC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_yakei_ref_w, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00058610[] = {
	7, 0, 1, 4, 2, 3, 0, 4,
	0x8000u | 7, 8, 5, 9, 6, 8, 7, 5
};

NJS_TEX uv_00058630[] = {
	{ 176, 105 },
	{ 175, 254 },
	{ 251, 3 },
	{ 0, 254 },
	{ 182, 3 },
	{ 176, 105 },
	{ 251, 3 },
	{ 182, 3 },
	{ 176, 105 },
	{ 251, 3 },
	{ 175, 254 },
	{ 182, 3 },
	{ 0, 254 },
	{ 176, 105 }
};

NJS_MESHSET_SADX meshlist_00058668[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00058610, NULL, NULL, NULL, uv_00058630, NULL }
};

NJS_VECTOR vertex_00058680[] = {
	{ 0.203874f, 0.056969f, -9 },
	{ 0.199954f, -0.300626f, -9.52455f },
	{ -0.5034209f, -0.300626f, -9.52455f },
	{ 0.230392f, 0.300626f, -10.35911f },
	{ 0.5034209f, 0.300626f, -10.35911f },
	{ 0.203874f, 0.056969f, 9 },
	{ 0.199954f, -0.300626f, 9.52455f },
	{ -0.5034209f, -0.300626f, 9.52455f },
	{ 0.230392f, 0.300626f, 10.35911f },
	{ 0.5034209f, 0.300626f, 10.35911f }
};

NJS_VECTOR normal_000586F8[] = {
	{ 0.19301f, 0.925187f, 0.326767f },
	{ 0.647968f, -0.709955f, -0.275864f },
	{ -0.812363f, 0.391246f, -0.432426f },
	{ -0.364881f, 0.378608f, -0.850599f },
	{ 0.660638f, 0.289611f, -0.692591f },
	{ 0.19301f, 0.925187f, -0.326767f },
	{ 0.647968f, -0.709955f, 0.275864f },
	{ -0.812363f, 0.391246f, 0.432426f },
	{ -0.364881f, 0.378608f, 0.850599f },
	{ 0.660638f, 0.289611f, 0.692591f }
};

NJS_MODEL_SADX attach_00058770 = { vertex_00058680, normal_000586F8, LengthOfArray(vertex_00058680), meshlist_00058668, matlist_000585FC, LengthOfArray(meshlist_00058668), LengthOfArray(matlist_000585FC),{ 0 }, 10.37133f, NULL };

NJS_OBJECT object_00058798 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00058770, -9.203874f, 9.94303f, 0, 0, 0, 0, 1, 1, 1, NULL, &object_000585C8 };

NJS_MATERIAL matlist_000587CC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_ref_white, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_000587E0[] = {
	4, 1, 0, 3, 2,
	4, 7, 6, 5, 4
};

NJS_TEX uv_000587F4[] = {
	{ 0, 254 },
	{ 125, 227 },
	{ 125, 254 },
	{ 251, 227 },
	{ 125, 3 },
	{ 251, 31 },
	{ 0, 3 },
	{ 125, 31 }
};

NJS_MESHSET_SADX meshlist_00058814[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000587E0, NULL, NULL, NULL, uv_000587F4, NULL }
};

NJS_VECTOR vertex_0005882C[] = {
	{ 5.60271f, 15.5f, -7.07f },
	{ 5.10271f, 10, -9.089999f },
	{ 6.10271f, 15.5f, -7.07f },
	{ 5.60271f, 10, -9.089999f },
	{ 5.60271f, 15.5f, 7.07f },
	{ 5.10271f, 10, 9.089999f },
	{ 6.10271f, 15.5f, 7.07f },
	{ 5.60271f, 10, 9.089999f }
};

NJS_VECTOR normal_0005888C[] = {
	{ 0, 0.344756f, -0.938692f },
	{ 0, 0.344756f, -0.938692f },
	{ 0, 0.344756f, -0.938692f },
	{ 0, 0.344756f, -0.938692f },
	{ 0, 0.344756f, 0.938692f },
	{ 0, 0.344756f, 0.938692f },
	{ 0, 0.344756f, 0.938692f },
	{ 0, 0.344756f, 0.938692f }
};

NJS_MODEL_SADX attach_000588EC = { vertex_0005882C, normal_0005888C, LengthOfArray(vertex_0005882C), meshlist_00058814, matlist_000587CC, LengthOfArray(meshlist_00058814), LengthOfArray(matlist_000587CC),{ 5.60271f, 12.75f, 0 }, 9.496874f, NULL };

NJS_OBJECT object_00058914 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000588EC, -8.10271f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_00058798 };

NJS_MATERIAL matlist_00058948[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_ref_crome, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_patlight_a, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00058970[] = {
	3, 3, 1, 2,
	3, 0, 5, 4
};

Sint16 poly_00058980[] = {
	4, 4, 5, 3, 1,
	4, 0, 4, 2, 3
};

NJS_TEX uv_00058994[] = {
	{ 123, 49 },
	{ 0, 7 },
	{ 247, 255 },
	{ 247, 255 },
	{ 0, 7 },
	{ 123, 49 }
};

NJS_TEX uv_000589AC[] = {
	{ 27, 227 },
	{ 227, 227 },
	{ 27, 27 },
	{ 227, 27 },
	{ 27, 227 },
	{ 227, 227 },
	{ 27, 27 },
	{ 227, 27 }
};

NJS_MESHSET_SADX meshlist_000589CC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00058970, NULL, NULL, NULL, uv_00058994, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00058980, NULL, NULL, NULL, uv_000589AC, NULL }
};

NJS_VECTOR vertex_000589FC[] = {
	{ -24, 5, 6.5f },
	{ -21, 7, 10.5f },
	{ -24, 7, 6.5f },
	{ -21.5f, 7, 8.5f },
	{ -21.5f, 5, 8.5f },
	{ -21, 5, 10.5f }
};

NJS_VECTOR normal_00058A44[] = {
	{ -0.616774f, 0.158742f, 0.7709669f },
	{ -0.9403509f, -0.245916f, 0.235088f },
	{ -0.616774f, -0.158742f, 0.7709669f },
	{ -0.6454819f, -0.6417069f, 0.414204f },
	{ -0.6454819f, 0.6417069f, 0.414204f },
	{ -0.9403509f, 0.245916f, 0.235088f }
};

NJS_MODEL_SADX attach_00058A8C = { vertex_000589FC, normal_00058A44, LengthOfArray(vertex_000589FC), meshlist_000589CC, matlist_00058948, LengthOfArray(meshlist_000589CC), LengthOfArray(matlist_00058948),{ -22.5f, 6, 8.5f }, 2.5f, NULL };

NJS_OBJECT object_00058AB4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00058A8C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_00058914 };



NJS_MATERIAL matlist_00058AE8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_ref_crome, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_patlight_a, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00058B10[] = {
	3, 2, 1, 3,
	3, 4, 5, 0
};

Sint16 poly_00058B20[] = {
	4, 3, 1, 4, 5,
	4, 2, 3, 0, 4
};

NJS_TEX uv_00058B34[] = {
	{ 0, 255 },
	{ 247, 7 },
	{ 123, 49 },
	{ 123, 49 },
	{ 247, 7 },
	{ 0, 255 }
};

NJS_TEX uv_00058B4C[] = {
	{ 27, 27 },
	{ 227, 27 },
	{ 27, 227 },
	{ 227, 227 },
	{ 27, 27 },
	{ 227, 27 },
	{ 27, 227 },
	{ 227, 227 }
};

NJS_MESHSET_SADX meshlist_00058B6C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00058B10, NULL, NULL, NULL, uv_00058B34, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00058B20, NULL, NULL, NULL, uv_00058B4C, NULL }
};

NJS_VECTOR vertex_00058B9C[] = {
	{ -24, 5, -6.5f },
	{ -21, 7, -10.5f },
	{ -24, 7, -6.5f },
	{ -21.5f, 7, -8.5f },
	{ -21.5f, 5, -8.5f },
	{ -21, 5, -10.5f }
};

NJS_VECTOR normal_00058BE4[] = {
	{ -0.616774f, 0.158742f, -0.7709669f },
	{ -0.9403509f, -0.245916f, -0.235088f },
	{ -0.616774f, -0.158742f, -0.7709669f },
	{ -0.6454819f, -0.6417069f, -0.414204f },
	{ -0.6454819f, 0.6417069f, -0.414204f },
	{ -0.9403509f, 0.245916f, -0.235088f }
};

NJS_MODEL_SADX attach_00058C2C = { vertex_00058B9C, normal_00058BE4, LengthOfArray(vertex_00058B9C), meshlist_00058B6C, matlist_00058AE8, LengthOfArray(meshlist_00058B6C), LengthOfArray(matlist_00058AE8),{ -22.5f, 6, -8.5f }, 2.5f, NULL };

NJS_OBJECT object_00058C54 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00058C2C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_00058AB4 };

NJS_MATERIAL matlist_00058C88[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_ref_black, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_ref_crome, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00058CB0[] = {
	0x8000u | 5, 3, 2, 5, 1, 4
};

Sint16 poly_00058CBC[] = {
	4, 0, 3, 6, 2
};

NJS_TEX uv_00058CC8[] = {
	{ 121, 5 },
	{ 103, 35 },
	{ 121, 133 },
	{ 101, 137 },
	{ 251, 255 }
};

NJS_TEX uv_00058CDC[] = {
	{ 173, 7 },
	{ 0, 7 },
	{ 247, 255 },
	{ 70, 252 }
};

NJS_MESHSET_SADX meshlist_00058CEC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00058CB0, NULL, NULL, NULL, uv_00058CC8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00058CBC, NULL, NULL, NULL, uv_00058CDC, NULL }
};

NJS_VECTOR vertex_00058D1C[] = {
	{ 0.206998f, -0.00002f, 0.001569f },
	{ -0.207002f, 0.139769f, -6.211362f },
	{ -0.381418f, 0.252119f, -2.005524f },
	{ 0.032582f, 0.252119f, -2.005524f },
	{ 0.206998f, -0.00002f, -7.269512f },
	{ 0.206998f, 0.139769f, -6.211362f },
	{ -0.213437f, 0.00225f, 0.002223f }
};

NJS_VECTOR normal_00058D70[] = {
	{ 0.005507f, 0.9923159f, 0.123603f },
	{ 0, 0.9974549f, -0.07129899f },
	{ 0.002723f, 0.9988649f, 0.047554f },
	{ 0.002799f, 0.998764f, 0.049616f },
	{ 0, 0.991389f, -0.130952f },
	{ 0, 0.996824f, -0.079633f },
	{ 0.005507f, 0.9923159f, 0.123603f }
};

NJS_MODEL_SADX attach_00058DC4 = { vertex_00058D1C, normal_00058D70, LengthOfArray(vertex_00058D1C), meshlist_00058CEC, matlist_00058C88, LengthOfArray(meshlist_00058CEC), LengthOfArray(matlist_00058C88),{ -0.08721f, 0.126058f, -3.633645f }, 3.647558f, NULL };

NJS_OBJECT object_00058DEC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00058DC4, -10.06937f, 10.52343f, 1.424916f, 0x1A1, 0xFFFFFD8F, 0x1AE4, 1, 1, 1, NULL, &object_00058C54 };

NJS_MATERIAL matlist_00058E20[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_ref_crome, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00058E34[] = {
	5, 5, 6, 0, 1, 2,
	5, 2, 3, 0, 4, 5
};

NJS_TEX uv_00058E4C[] = {
	{ 61, 7 },
	{ 185, 7 },
	{ 123, 131 },
	{ 247, 131 },
	{ 185, 255 },
	{ 185, 255 },
	{ 61, 255 },
	{ 123, 131 },
	{ 0, 131 },
	{ 61, 7 }
};

NJS_MESHSET_SADX meshlist_00058E74[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00058E34, NULL, NULL, NULL, uv_00058E4C, NULL }
};

NJS_VECTOR vertex_00058E8C[] = {
	{ -0.218995f, 0.27843f, 0 },
	{ 0.800021f, 0.5560769f, 0 },
	{ 0.385556f, 0.276403f, -0.866025f },
	{ -0.443376f, -0.282944f, -0.866025f },
	{ -0.857844f, -0.562618f, 0 },
	{ -0.443376f, -0.282944f, 0.866026f },
	{ 0.385556f, 0.276403f, 0.866025f }
};

NJS_VECTOR normal_00058EE0[] = {
	{ -0.559348f, 0.8289329f, 0 },
	{ -0.262883f, 0.964828f, 0 },
	{ -0.396243f, 0.8748389f, -0.278654f },
	{ -0.662962f, 0.6948619f, -0.278654f },
	{ -0.796321f, 0.604874f, 0 },
	{ -0.662962f, 0.6948619f, 0.278654f },
	{ -0.396243f, 0.8748389f, 0.278654f }
};

NJS_MODEL_SADX attach_00058F34 = { vertex_00058E8C, normal_00058EE0, LengthOfArray(vertex_00058E8C), meshlist_00058E74, matlist_00058E20, LengthOfArray(meshlist_00058E74), LengthOfArray(matlist_00058E20),{ -0.028911f, -0.00327f, 0 }, 1.198803f, NULL };

NJS_OBJECT object_00058F5C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00058F34, -22.50619f, 7.991423f, -0.00001f, 0, 0, 0, 1, 1, 1, NULL, &object_00058DEC };

NJS_MATERIAL matlist_00058F90[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_yakei_ref, NJD_D_100 | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00058FA4[] = {
	5, 10, 12, 0, 2, 4,
	0x8000u | 5, 9, 11, 1, 13, 3,
	0x8000u | 5, 10, 8, 0, 6, 4,
	5, 9, 7, 1, 5, 3
};

NJS_MESHSET_SADX meshlist_00058FD4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00058FA4, NULL, NULL, NULL, NULL, NULL }
};

NJS_VECTOR vertex_00058FEC[] = {
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 1 },
	{ 1, 0, 1 },
	{ -1, 0.866026f, 0.5f },
	{ 1, 0.866025f, 0.5f },
	{ -1, 0.866026f, -0.5f },
	{ 1, 0.866025f, -0.5f },
	{ -1, 0, -1 },
	{ 1, 0, -1 },
	{ -1, -0.866025f, -0.5f },
	{ 1, -0.866026f, -0.5f },
	{ -1, -0.866025f, 0.5f },
	{ 1, -0.866025f, 0.5f }
};

NJS_VECTOR normal_00059094[] = {
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 }
};

NJS_MODEL_SADX attach_0005913C = { vertex_00058FEC, normal_00059094, LengthOfArray(vertex_00058FEC), meshlist_00058FD4, matlist_00058F90, LengthOfArray(meshlist_00058FD4), LengthOfArray(matlist_00058F90),{ 0 }, 1.039471f, NULL };

NJS_OBJECT object_00059164 = { NJD_EVAL_BREAK, &attach_0005913C, 4.212831f, 17.38013f, -4.739301f, 0, 0, 0xFFFF, 0.7399999f, 0.73f, 0.73f, NULL, NULL };

NJS_MATERIAL matlist_00059198[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_yakei_ref, NJD_D_100 | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_000591AC[] = {
	0x8000u | 5, 10, 12, 0, 2, 4,
	5, 9, 11, 1, 13, 3,
	5, 10, 8, 0, 6, 4,
	0x8000u | 5, 9, 7, 1, 5, 3
};

NJS_MESHSET_SADX meshlist_000591DC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000591AC, NULL, NULL, NULL, NULL, NULL }
};

NJS_VECTOR vertex_000591F4[] = {
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, -1 },
	{ 1, 0, -1 },
	{ -1, 0.866026f, -0.5f },
	{ 1, 0.866025f, -0.5f },
	{ -1, 0.866026f, 0.5f },
	{ 1, 0.866025f, 0.5f },
	{ -1, 0, 1 },
	{ 1, 0, 1 },
	{ -1, -0.866025f, 0.5f },
	{ 1, -0.866026f, 0.5f },
	{ -1, -0.866025f, -0.5f },
	{ 1, -0.866025f, -0.5f }
};

NJS_VECTOR normal_0005929C[] = {
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 }
};

NJS_MODEL_SADX attach_00059344 = { vertex_000591F4, normal_0005929C, LengthOfArray(vertex_000591F4), meshlist_000591DC, matlist_00059198, LengthOfArray(meshlist_000591DC), LengthOfArray(matlist_00059198),{ 0 }, 1.039471f, NULL };

NJS_OBJECT object_0005936C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_BREAK, &attach_00059344, 4.212831f, 17.38013f, 4.739301f, 0, 0, 0, 0.7399999f, 0.73f, 0.73f, NULL, &object_00059164 };

NJS_MATERIAL matlist_000593A0[] = {
	{ { 0xB2B2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_ref_lblue, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_ref_white, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xB2B2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_ref_red, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC }
};

Sint16 poly_000593DC[] = {
	5, 6, 2, 0, 18, 14,
	4, 6, 0, 10, 14,
	0x8000u | 12, 14, 15, 18, 19, 2, 3, 6, 7, 10, 11, 14, 15
};

Sint16 poly_0005940C[] = {
	0x8000u | 12, 8, 7, 4, 3, 20, 19, 16, 15, 12, 11, 8, 7
};

Sint16 poly_00059426[] = {
	0x8000u | 12, 13, 12, 9, 8, 5, 4, 21, 20, 17, 16, 13, 12,
	4, 21, 1, 17, 13,
	5, 21, 5, 1, 9, 13
};

NJS_TEX uv_00059458[] = {
	{ 45, 237 },
	{ 125, 237 },
	{ 125, 255 },
	{ 205, 237 },
	{ 223, 237 },
	{ 45, 237 },
	{ 125, 255 },
	{ 27, 237 },
	{ 223, 237 },
	{ 223, 237 },
	{ 251, 3 },
	{ 205, 237 },
	{ 228, 3 },
	{ 125, 237 },
	{ 125, 3 },
	{ 45, 237 },
	{ 22, 3 },
	{ 27, 237 },
	{ 0, 3 },
	{ 223, 237 },
	{ 251, 3 }
};

NJS_TEX uv_000594AC[] = {
	{ 22, 89 },
	{ 22, 169 },
	{ 125, 89 },
	{ 125, 169 },
	{ 228, 89 },
	{ 228, 169 },
	{ 251, 89 },
	{ 251, 169 },
	{ 0, 89 },
	{ 0, 169 },
	{ 22, 89 },
	{ 22, 169 }
};

NJS_TEX uv_000594DC[] = {
	{ 27, 9 },
	{ 0, 89 },
	{ 45, 9 },
	{ 22, 89 },
	{ 125, 9 },
	{ 125, 89 },
	{ 205, 9 },
	{ 228, 89 },
	{ 223, 9 },
	{ 251, 89 },
	{ 27, 9 },
	{ 0, 89 },
	{ 205, 9 },
	{ 125, 3 },
	{ 223, 9 },
	{ 27, 9 },
	{ 205, 9 },
	{ 125, 9 },
	{ 125, 3 },
	{ 45, 9 },
	{ 27, 9 }
};

NJS_MESHSET_SADX meshlist_00059530[] = {
	//{ NJD_MESHSET_TRIMESH | 0, 3, poly_000593DC, NULL, NULL, NULL, uv_00059458, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0005940C, NULL, NULL, NULL, uv_000594AC, NULL },
	//{ NJD_MESHSET_TRIMESH | 2, 3, poly_00059426, NULL, NULL, NULL, uv_000594DC, NULL }
};

NJS_MESHSET_SADX meshlist_00059530_2[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000593DC, NULL, NULL, NULL, uv_00059458, NULL },
	//{ NJD_MESHSET_TRIMESH | 1, 1, poly_0005940C, NULL, NULL, NULL, uv_000594AC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_00059426, NULL, NULL, NULL, uv_000594DC, NULL }
};

NJS_VECTOR vertex_00059578[] = {
	{ 4.207022f, 17.51236f, -7.840899f },
	{ 4.207022f, 17.51236f, 7.840899f },
	{ 4.207022f, 18.40362f, -7.467522f },
	{ 4.207022f, 18.3118f, -2.489174f },
	{ 4.207022f, 18.3118f, 2.489174f },
	{ 4.207022f, 18.40362f, 7.467522f },
	{ 2.680634f, 17.81173f, -7.467522f },
	{ 2.250115f, 17.55296f, -2.489174f },
	{ 2.250115f, 17.55296f, 2.489174f },
	{ 2.680634f, 17.81173f, 7.467522f },
	{ 2.350093f, 16.72862f, -7.467522f },
	{ 1.826345f, 16.16436f, -2.489174f },
	{ 1.826345f, 16.16436f, 2.489174f },
	{ 2.350094f, 16.72862f, 7.467522f },
	{ 6.063951f, 16.72862f, -7.467522f },
	{ 6.5877f, 16.16436f, -2.489174f },
	{ 6.5877f, 16.16436f, 2.489174f },
	{ 6.063951f, 16.72862f, 7.467522f },
	{ 5.73341f, 17.81173f, -7.467522f },
	{ 6.163929f, 17.55296f, -2.489174f },
	{ 6.163929f, 17.55296f, 2.489174f },
	{ 5.73341f, 17.81173f, 7.467522f }
};

NJS_VECTOR normal_00059680[] = {
	{ 0, 0.018343f, -0.999832f },
	{ 0, 0.018343f, 0.999832f },
	{ 0, 0.869438f, -0.494042f },
	{ 0, 0.999957f, 0.009241f },
	{ 0, 0.999957f, -0.009241f },
	{ 0, 0.869438f, 0.494042f },
	{ -0.6097879f, 0.571273f, -0.549369f },
	{ -0.7415349f, 0.670742f, -0.015208f },
	{ -0.7415349f, 0.670742f, 0.015209f },
	{ -0.6097879f, 0.571273f, 0.549369f },
	{ -0.669771f, -0.473539f, -0.5719849f },
	{ -0.797879f, -0.598409f, -0.07276899f },
	{ -0.797879f, -0.598409f, 0.07277f },
	{ -0.669771f, -0.473539f, 0.5719849f },
	{ 0.669771f, -0.473539f, -0.5719849f },
	{ 0.797879f, -0.598409f, -0.07277f },
	{ 0.797879f, -0.598409f, 0.07276899f },
	{ 0.669771f, -0.473539f, 0.5719849f },
	{ 0.6097879f, 0.571273f, -0.549369f },
	{ 0.741534f, 0.670743f, -0.015209f },
	{ 0.741534f, 0.670743f, 0.015209f },
	{ 0.6097879f, 0.571273f, 0.549369f }
};

NJS_MODEL_SADX attach_00059788 = { vertex_00059578, normal_00059680, LengthOfArray(vertex_00059578), meshlist_00059530, matlist_000593A0, LengthOfArray(meshlist_00059530), LengthOfArray(matlist_000593A0),{ 4.207023f, 17.28399f, 0 }, 8.194346f, NULL };

NJS_MODEL_SADX attach_00059788_2 = { vertex_00059578, normal_00059680, LengthOfArray(vertex_00059578), meshlist_00059530_2, matlist_000593A0, LengthOfArray(meshlist_00059530_2), LengthOfArray(matlist_000593A0),{ 4.207023f, 17.28399f, 0 }, 8.194346f, NULL };

NJS_OBJECT object_000597B0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_00059788, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_00058F5C };

NJS_OBJECT object_000597B0_2 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_00059788_2, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_000597E4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_ref_white, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_tyre, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_light1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00059820[] = {
	6, 2, 3, 1, 0, 5, 4,
	4, 1, 12, 2, 13,
	4, 15, 18, 16, 19,
	0x8000u | 12, 18, 20, 15, 17, 7, 11, 6, 10, 12, 14, 1, 5,
	6, 20, 23, 18, 21, 19, 22
};

Sint16 poly_0005986A[] = {
	4, 8, 9, 7, 6
};

Sint16 poly_00059874[] = {
	4, 9, 13, 6, 12,
	4, 16, 8, 15, 7
};

NJS_TEX uv_00059888[] = {
	{ 125, 3 },
	{ 251, 3 },
	{ 125, 192 },
	{ 251, 192 },
	{ 107, 255 },
	{ 215, 255 },
	{ 125, 192 },
	{ 53, 192 },
	{ 125, 3 },
	{ 53, 3 },
	{ 53, 192 },
	{ 125, 192 },
	{ 53, 3 },
	{ 125, 3 },
	{ 125, 192 },
	{ 107, 255 },
	{ 53, 192 },
	{ 35, 255 },
	{ 17, 192 },
	{ 0, 255 },
	{ 17, 192 },
	{ 0, 255 },
	{ 53, 192 },
	{ 35, 255 },
	{ 125, 192 },
	{ 107, 255 },
	{ 107, 255 },
	{ 215, 255 },
	{ 125, 192 },
	{ 251, 192 },
	{ 125, 3 },
	{ 251, 3 }
};

NJS_TEX uv_00059908[] = {
	{ 244, 255 },
	{ 3, 255 },
	{ 244, 255 },
	{ 3, 255 }
};

NJS_TEX uv_00059918[] = {
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 254 },
	{ 0, 254 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 254 },
	{ 0, 254 }
};

NJS_MESHSET_SADX meshlist_00059938[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_00059820, NULL, NULL, NULL, uv_00059888, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0005986A, NULL, NULL, NULL, uv_00059908, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00059874, NULL, NULL, NULL, uv_00059918, NULL }
};

NJS_VECTOR vertex_00059980[] = {
	{ -17.5f, 1.5f, -10.5f },
	{ -21, 1.5f, -10.5f },
	{ -21, 3, -10.5f },
	{ -17.5f, 3, -10.5f },
	{ -18.5f, 1, -10.5f },
	{ -21.5f, 1, -10.5f },
	{ -24, 1.5f, -6.5f },
	{ -24, 1.5f, 7 },
	{ -24, 3, 7 },
	{ -24, 3, -6.5f },
	{ -24.5f, 1, -6.5f },
	{ -24.5f, 1, 7 },
	{ -23, 1.5f, -9 },
	{ -23, 3, -9 },
	{ -23.5f, 1, -9 },
	{ -23, 1.5f, 9 },
	{ -23, 3, 9 },
	{ -23.5f, 1, 9 },
	{ -21, 1.5f, 10.5f },
	{ -21, 3, 10.5f },
	{ -21.5f, 1, 10.5f },
	{ -17.5f, 1.5f, 10.5f },
	{ -17.5f, 3, 10.5f },
	{ -18.5f, 1, 10.5f }
};

NJS_VECTOR normal_00059AA0[] = {
	{ 0, 0, -1 },
	{ -0.238455f, 0.082527f, -0.967641f },
	{ -0.316228f, 0, -0.948683f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.403374f, 0.403374f, -0.821327f },
	{ -0.900869f, 0.394529f, -0.181061f },
	{ -0.89125f, 0.395353f, 0.222194f },
	{ -0.973249f, 0, 0.229753f },
	{ -0.9819559f, 0, -0.189108f },
	{ -0.701589f, 0.701589f, -0.124681f },
	{ -0.69913f, 0.69913f, 0.149778f },
	{ -0.724221f, 0.329615f, -0.605688f },
	{ -0.793717f, 0, -0.608287f },
	{ -0.63967f, 0.63967f, -0.426198f },
	{ -0.704485f, 0.319685f, 0.633643f },
	{ -0.767752f, 0, 0.640747f },
	{ -0.627226f, 0.627226f, 0.46171f },
	{ -0.238455f, 0.082527f, 0.967641f },
	{ -0.316228f, 0, 0.948683f },
	{ -0.403374f, 0.403374f, 0.821327f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

NJS_MODEL_SADX attach_00059BC0 = { vertex_00059980, normal_00059AA0, LengthOfArray(vertex_00059980), meshlist_00059938, matlist_000597E4, LengthOfArray(meshlist_00059938), LengthOfArray(matlist_000597E4),{ -21, 2, 0 }, 11.06797f, NULL };

NJS_OBJECT object_00059BE8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00059BC0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_000597B0 };

NJS_MATERIAL matlist_00059F30[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_wheel_a, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00059F44_Ñ0[] = {
	5, 6, 5, 0, 4, 3,
	0x8000u | 5, 6, 7, 0, 8, 1,
	4, 3, 2, 0, 1,
	0x8000u | 5, 15, 14, 9, 13, 12,
	5, 15, 16, 9, 17, 10,
	4, 12, 9, 11, 10
};

NJS_TEX uv_00059F88[] = {
	{ 40, 214 },
	{ 3, 127 },
	{ 127, 127 },
	{ 40, 40 },
	{ 127, 3 },
	{ 40, 214 },
	{ 127, 251 },
	{ 127, 127 },
	{ 214, 214 },
	{ 251, 127 },
	{ 127, 3 },
	{ 214, 40 },
	{ 127, 127 },
	{ 251, 127 },
	{ 40, 214 },
	{ 3, 127 },
	{ 127, 127 },
	{ 40, 40 },
	{ 127, 3 },
	{ 40, 214 },
	{ 127, 251 },
	{ 127, 127 },
	{ 214, 214 },
	{ 251, 127 },
	{ 127, 3 },
	{ 127, 127 },
	{ 214, 40 },
	{ 251, 127 }
};

NJS_MESHSET_SADX meshlist_00059FF8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_00059F44_Ñ0, NULL, NULL, NULL, uv_00059F88, NULL }
};

NJS_VECTOR vertex_0005A010[] = {
	{ 0.000031f, -0.0001f, -11.47446f },
	{ 3.158456f, -0.0001f, -11.02304f },
	{ 2.233376f, 2.233333f, -11.02304f },
	{ 0.000032f, 3.158413f, -11.02304f },
	{ -2.233312f, 2.233333f, -11.02304f },
	{ -3.158393f, -0.0001f, -11.02304f },
	{ -2.233313f, -2.233353f, -11.02304f },
	{ 0.000031f, -3.158434f, -11.02304f },
	{ 2.233375f, -2.233353f, -11.02304f },
	{ 0.000031f, -0.0001f, 11.51811f },
	{ 3.158456f, -0.0001f, 11.06669f },
	{ 2.233376f, 2.233333f, 11.06669f },
	{ 0.000032f, 3.158413f, 11.06669f },
	{ -2.233312f, 2.233333f, 11.06669f },
	{ -3.158393f, -0.0001f, 11.06669f },
	{ -2.233313f, -2.233353f, 11.06669f },
	{ 0.000031f, -3.158434f, 11.06669f },
	{ 2.233375f, -2.233353f, 11.06669f }
};

NJS_VECTOR normal_0005A0E8[] = {
	{ 0, 0, -1 },
	{ 0.141486f, 0, -0.98994f },
	{ 0.100046f, 0.100046f, -0.98994f },
	{ 0, 0.141486f, -0.98994f },
	{ -0.100046f, 0.100046f, -0.98994f },
	{ -0.141486f, 0, -0.98994f },
	{ -0.100046f, -0.100046f, -0.98994f },
	{ 0, -0.141486f, -0.98994f },
	{ 0.100046f, -0.100046f, -0.98994f },
	{ 0, 0, 1 },
	{ 0.141486f, 0, 0.98994f },
	{ 0.100046f, 0.100046f, 0.98994f },
	{ 0, 0.141486f, 0.98994f },
	{ -0.100046f, 0.100046f, 0.98994f },
	{ -0.141486f, 0, 0.98994f },
	{ -0.100046f, -0.100046f, 0.98994f },
	{ 0, -0.141486f, 0.98994f },
	{ 0.100046f, -0.100046f, 0.98994f }
};

NJS_MODEL_SADX attach_0005A1C0 = { vertex_0005A010, normal_0005A0E8, LengthOfArray(vertex_0005A010), meshlist_00059FF8, matlist_00059F30, LengthOfArray(meshlist_00059FF8), LengthOfArray(matlist_00059F30),{ 0.000031f, -0.0001f, 0.021825f }, 11.92226f, NULL };

NJS_OBJECT object_0005A1E8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005A1C0, 17.06072f, 3.711756f, -0.021302f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0005A21C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_wheel_a, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0005A230[] = {
	0x8000u | 5, 6, 7, 0, 8, 1,
	4, 3, 2, 0, 1,
	0x8000u | 5, 3, 4, 0, 5, 6,
	5, 15, 16, 9, 17, 10,
	4, 12, 9, 11, 10,
	5, 12, 13, 9, 14, 15
};

NJS_TEX uv_0005A274[] = {
	{ 40, 214 },
	{ 127, 251 },
	{ 127, 127 },
	{ 214, 214 },
	{ 251, 127 },
	{ 127, 3 },
	{ 214, 40 },
	{ 127, 127 },
	{ 251, 127 },
	{ 127, 3 },
	{ 40, 40 },
	{ 127, 127 },
	{ 3, 127 },
	{ 40, 214 },
	{ 40, 214 },
	{ 127, 251 },
	{ 127, 127 },
	{ 214, 214 },
	{ 251, 127 },
	{ 127, 3 },
	{ 127, 127 },
	{ 214, 40 },
	{ 251, 127 },
	{ 127, 3 },
	{ 40, 40 },
	{ 127, 127 },
	{ 3, 127 },
	{ 40, 214 }
};

NJS_MESHSET_SADX meshlist_0005A2E4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_0005A230, NULL, NULL, NULL, uv_0005A274, NULL }
};

NJS_VECTOR vertex_0005A2FC[] = {
	{ 0.000001f, 0.000004f, -11.4056f },
	{ 3.158425f, 0.000005f, -10.96304f },
	{ 2.233345f, 2.233348f, -10.96304f },
	{ 0.000001f, 3.158428f, -10.96304f },
	{ -2.233343f, 2.233347f, -10.96304f },
	{ -3.158424f, 0.000004f, -10.96304f },
	{ -2.233343f, -2.233339f, -10.96304f },
	{ 0.000001f, -3.158419f, -10.96304f },
	{ 2.233344f, -2.233339f, -10.96304f },
	{ 0.000001f, 0.000004f, 11.56974f },
	{ 3.158425f, 0.000005f, 11.12717f },
	{ 2.233345f, 2.233348f, 11.12717f },
	{ 0.000001f, 3.158428f, 11.12717f },
	{ -2.233343f, 2.233347f, 11.12717f },
	{ -3.158424f, 0.000004f, 11.12717f },
	{ -2.233343f, -2.233339f, 11.12717f },
	{ 0.000001f, -3.158419f, 11.12717f },
	{ 2.233344f, -2.233339f, 11.12717f }
};

NJS_VECTOR normal_0005A3D4[] = {
	{ 0, 0, -1 },
	{ 0.138766f, 0, -0.990325f },
	{ 0.09812199f, 0.09812199f, -0.990325f },
	{ 0, 0.138766f, -0.990325f },
	{ -0.09812199f, 0.09812199f, -0.990325f },
	{ -0.138766f, 0, -0.990325f },
	{ -0.09812199f, -0.09812199f, -0.990325f },
	{ 0, -0.138766f, -0.990325f },
	{ 0.09812199f, -0.09812199f, -0.990325f },
	{ 0, 0, 1 },
	{ 0.138766f, 0, 0.990325f },
	{ 0.09812199f, 0.09812199f, 0.990325f },
	{ 0, 0.138766f, 0.990325f },
	{ -0.09812199f, 0.09812199f, 0.990325f },
	{ -0.138766f, 0, 0.990325f },
	{ -0.09812199f, -0.09812199f, 0.990325f },
	{ 0, -0.138766f, 0.990325f },
	{ 0.09812199f, -0.09812199f, 0.990325f }
};

NJS_MODEL_SADX attach_0005A4AC = { vertex_0005A2FC, normal_0005A3D4, LengthOfArray(vertex_0005A2FC), meshlist_0005A2E4, matlist_0005A21C, LengthOfArray(meshlist_0005A2E4), LengthOfArray(matlist_0005A21C),{ 0.000001f, 0.000004f, 0.082067f }, 11.91395f, NULL };

NJS_OBJECT object_0005A4D4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005A4AC, -12.56907f, 3.711763f, -0.08194599f, 0, 0, 0, 1, 1, 1, NULL, &object_0005A1E8 };

NJS_MATERIAL matlist_0005A508[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_tyre1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_tyre, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0005A530[] = {
	3, 16, 2, 0,
	3, 2, 4, 0,
	3, 4, 6, 0,
	3, 14, 16, 0,
	3, 6, 8, 0,
	3, 8, 10, 0,
	3, 12, 14, 0,
	3, 10, 12, 0,
	3, 17, 19, 33,
	3, 17, 21, 19,
	3, 17, 23, 21,
	3, 17, 33, 31,
	3, 17, 25, 23,
	3, 17, 27, 25,
	3, 17, 31, 29,
	3, 17, 29, 27,
	3, 34, 36, 50,
	3, 34, 38, 36,
	3, 34, 40, 38,
	3, 34, 50, 48,
	3, 34, 42, 40,
	3, 34, 44, 42,
	3, 34, 48, 46,
	3, 34, 46, 44,
	3, 67, 53, 51,
	3, 53, 55, 51,
	3, 55, 57, 51,
	3, 65, 67, 51,
	3, 57, 59, 51,
	3, 59, 61, 51,
	3, 63, 65, 51,
	3, 61, 63, 51
};

Sint16 poly_0005A630[] = {
	4, 4, 2, 3, 1,
	4, 2, 16, 1, 15,
	4, 6, 4, 5, 3,
	4, 8, 6, 7, 5,
	4, 16, 14, 15, 13,
	4, 10, 8, 9, 7,
	4, 12, 10, 11, 9,
	4, 14, 12, 13, 11,
	4, 20, 18, 21, 19,
	4, 18, 32, 19, 33,
	4, 22, 20, 23, 21,
	4, 24, 22, 25, 23,
	4, 32, 30, 33, 31,
	4, 26, 24, 27, 25,
	4, 28, 26, 29, 27,
	4, 30, 28, 31, 29,
	4, 37, 35, 38, 36,
	4, 35, 49, 36, 50,
	4, 39, 37, 40, 38,
	4, 41, 39, 42, 40,
	4, 49, 47, 50, 48,
	4, 43, 41, 44, 42,
	4, 45, 43, 46, 44,
	4, 47, 45, 48, 46,
	4, 55, 53, 54, 52,
	4, 53, 67, 52, 66,
	4, 57, 55, 56, 54,
	4, 59, 57, 58, 56,
	4, 67, 65, 66, 64,
	4, 61, 59, 60, 58,
	4, 63, 61, 62, 60,
	4, 65, 63, 64, 62
};

NJS_TEX uv_0005A770[] = {
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 },
	{ 1, 241 },
	{ 237, 241 },
	{ 123, 17 }
};

NJS_TEX uv_0005A8F0[] = {
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, 15 },
	{ 0, 15 },
	{ 239, 255 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_0005AAF0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 32, poly_0005A530, NULL, NULL, NULL, uv_0005A770, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 32, poly_0005A630, NULL, NULL, NULL, uv_0005A8F0, NULL }
};

NJS_VECTOR vertex_0005AB20[] = {
	{ 17.06082f, 3.711766f, 11.04687f },
	{ 20.79042f, 3.711767f, 7.735197f },
	{ 20.79042f, 3.711766f, 11.04687f },
	{ 19.69804f, 6.348992f, 7.735197f },
	{ 19.69804f, 6.348991f, 11.04687f },
	{ 17.06082f, 7.441366f, 7.735197f },
	{ 17.06082f, 7.441365f, 11.04687f },
	{ 14.4236f, 6.348992f, 7.735197f },
	{ 14.4236f, 6.348991f, 11.04687f },
	{ 13.33122f, 3.711767f, 7.735197f },
	{ 13.33122f, 3.711766f, 11.04687f },
	{ 14.4236f, 1.074543f, 7.735197f },
	{ 14.4236f, 1.074542f, 11.04687f },
	{ 17.06082f, -0.017831f, 7.735197f },
	{ 17.06082f, -0.017832f, 11.04687f },
	{ 19.69804f, 1.074543f, 7.735197f },
	{ 19.69804f, 1.074542f, 11.04687f },
	{ 17.06082f, 3.711766f, -11.04687f },
	{ 20.79042f, 3.711767f, -7.735197f },
	{ 20.79042f, 3.711766f, -11.04687f },
	{ 19.69804f, 6.348992f, -7.735197f },
	{ 19.69804f, 6.348991f, -11.04687f },
	{ 17.06082f, 7.441366f, -7.735197f },
	{ 17.06082f, 7.441365f, -11.04687f },
	{ 14.4236f, 6.348992f, -7.735197f },
	{ 14.4236f, 6.348991f, -11.04687f },
	{ 13.33122f, 3.711767f, -7.735197f },
	{ 13.33122f, 3.711766f, -11.04687f },
	{ 14.4236f, 1.074543f, -7.735197f },
	{ 14.4236f, 1.074542f, -11.04687f },
	{ 17.06082f, -0.017831f, -7.735197f },
	{ 17.06082f, -0.017832f, -11.04687f },
	{ 19.69804f, 1.074543f, -7.735197f },
	{ 19.69804f, 1.074542f, -11.04687f },
	{ -12.56906f, 3.711766f, -11.04687f },
	{ -8.839463f, 3.711767f, -7.735197f },
	{ -8.839463f, 3.711766f, -11.04687f },
	{ -9.931837f, 6.348992f, -7.735197f },
	{ -9.931837f, 6.348991f, -11.04687f },
	{ -12.56906f, 7.441366f, -7.735197f },
	{ -12.56906f, 7.441365f, -11.04687f },
	{ -15.20629f, 6.348992f, -7.735197f },
	{ -15.20629f, 6.348991f, -11.04687f },
	{ -16.29866f, 3.711767f, -7.735197f },
	{ -16.29866f, 3.711766f, -11.04687f },
	{ -15.20629f, 1.074543f, -7.735197f },
	{ -15.20629f, 1.074542f, -11.04687f },
	{ -12.56906f, -0.017831f, -7.735197f },
	{ -12.56906f, -0.017832f, -11.04687f },
	{ -9.931839f, 1.074543f, -7.735197f },
	{ -9.931839f, 1.074542f, -11.04687f },
	{ -12.56906f, 3.711766f, 11.04687f },
	{ -8.839463f, 3.711767f, 7.735197f },
	{ -8.839463f, 3.711766f, 11.04687f },
	{ -9.931837f, 6.348992f, 7.735197f },
	{ -9.931837f, 6.348991f, 11.04687f },
	{ -12.56906f, 7.441366f, 7.735197f },
	{ -12.56906f, 7.441365f, 11.04687f },
	{ -15.20629f, 6.348992f, 7.735197f },
	{ -15.20629f, 6.348991f, 11.04687f },
	{ -16.29866f, 3.711767f, 7.735197f },
	{ -16.29866f, 3.711766f, 11.04687f },
	{ -15.20629f, 1.074543f, 7.735197f },
	{ -15.20629f, 1.074542f, 11.04687f },
	{ -12.56906f, -0.017831f, 7.735197f },
	{ -12.56906f, -0.017832f, 11.04687f },
	{ -9.931839f, 1.074543f, 7.735197f },
	{ -9.931839f, 1.074542f, 11.04687f }
};

NJS_VECTOR normal_0005AE50[] = {
	{ 0, 0, 1 },
	{ 1, 0, 0 },
	{ 0.776382f, 0, 0.630262f },
	{ 0.707106f, 0.7071069f, 0 },
	{ 0.5489849f, 0.5489849f, 0.630263f },
	{ 0, 1, 0 },
	{ 0, 0.776382f, 0.630262f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.5489849f, 0.5489849f, 0.630263f },
	{ -1, 0, 0 },
	{ -0.776382f, 0, 0.630262f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.5489849f, -0.5489849f, 0.630262f },
	{ 0, -1, 0 },
	{ 0, -0.776382f, 0.630262f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.5489849f, -0.5489849f, 0.630262f },
	{ 0, 0, -1 },
	{ 1, 0, 0 },
	{ 0.776382f, 0, -0.630262f },
	{ 0.707106f, 0.7071069f, 0 },
	{ 0.5489849f, 0.5489849f, -0.630263f },
	{ 0, 1, 0 },
	{ 0, 0.776382f, -0.630262f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.5489849f, 0.5489849f, -0.630263f },
	{ -1, 0, 0 },
	{ -0.776382f, 0, -0.630262f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.5489849f, -0.5489849f, -0.630262f },
	{ 0, -1, 0 },
	{ 0, -0.776382f, -0.630262f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.5489849f, -0.5489849f, -0.630262f },
	{ 0, 0, -1 },
	{ 1, 0, 0 },
	{ 0.776382f, 0, -0.630262f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.5489849f, 0.5489849f, -0.630262f },
	{ 0, 1, 0 },
	{ 0, 0.776382f, -0.630263f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.5489849f, 0.5489849f, -0.630263f },
	{ -1, 0, 0 },
	{ -0.776382f, 0, -0.630262f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.5489849f, -0.5489849f, -0.630262f },
	{ 0, -1, 0 },
	{ 0, -0.776382f, -0.630262f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.5489849f, -0.5489849f, -0.630262f },
	{ 0, 0, 1 },
	{ 1, 0, 0 },
	{ 0.776382f, 0, 0.630262f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.5489849f, 0.5489849f, 0.630262f },
	{ 0, 1, 0 },
	{ 0, 0.776382f, 0.630263f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.5489849f, 0.5489849f, 0.630263f },
	{ -1, 0, 0 },
	{ -0.776382f, 0, 0.630262f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.5489849f, -0.5489849f, 0.630262f },
	{ 0, -1, 0 },
	{ 0, -0.776382f, 0.630262f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.5489849f, -0.5489849f, 0.630262f }
};

NJS_MODEL_SADX attach_0005B180 = { vertex_0005AB20, normal_0005AE50, LengthOfArray(vertex_0005AB20), meshlist_0005AAF0, matlist_0005A508, LengthOfArray(meshlist_0005AAF0), LengthOfArray(matlist_0005A508),{ 2.245877f, 3.711767f, 0 }, 21.58549f, NULL };

NJS_OBJECT object_0005B1A8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_0005B180, -1.317508f, 0, 0, 0, 0, 0, 1, 1, 1, &object_0005A4D4, &object_00059BE8 };

NJS_MATERIAL matlist_0005B1DC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_yakei_ref_w, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0005B1F0[] = {
	0x8000u | 8, 2, 1, 0, 10, 9, 12, 11, 15,
	0x8000u | 8, 3, 5, 4, 14, 13, 8, 6, 7,
	0x8000u | 8, 19, 21, 20, 30, 29, 24, 22, 23,
	0x8000u | 8, 31, 27, 28, 25, 26, 16, 17, 18
};

NJS_TEX uv_0005B238[] = {
	{ 251, 254 },
	{ 244, 64 },
	{ 240, 98 },
	{ 223, 3 },
	{ 223, 44 },
	{ 203, 64 },
	{ 207, 98 },
	{ 196, 254 },
	{ 251, 254 },
	{ 240, 98 },
	{ 244, 64 },
	{ 223, 44 },
	{ 223, 3 },
	{ 207, 98 },
	{ 203, 64 },
	{ 196, 254 },
	{ 54, 254 },
	{ 43, 98 },
	{ 48, 64 },
	{ 27, 44 },
	{ 27, 3 },
	{ 11, 98 },
	{ 7, 64 },
	{ 0, 254 },
	{ 0, 254 },
	{ 11, 98 },
	{ 7, 64 },
	{ 27, 44 },
	{ 27, 3 },
	{ 43, 98 },
	{ 48, 64 },
	{ 54, 254 }
};

NJS_MESHSET_SADX meshlist_0005B2B8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0005B1F0, NULL, NULL, NULL, uv_0005B238, NULL }
};

NJS_VECTOR vertex_0005B2D0[] = {
	{ 16.63601f, 0.522175f, -11.1865f },
	{ 17.35482f, 1.088941f, -10.64148f },
	{ 18.27136f, -2.117231f, -10.64148f },
	{ 18.27136f, -2.117231f, 10.64148f },
	{ 17.35482f, 1.088941f, 10.64148f },
	{ 16.63601f, 0.522175f, 11.1865f },
	{ 11.17261f, 1.088941f, 10.64148f },
	{ 10.03086f, -2.117231f, 10.64148f },
	{ 11.73015f, 0.522175f, 11.1865f },
	{ 14.15328f, 1.43573f, -11.1865f },
	{ 14.15328f, 2.117231f, -10.64148f },
	{ 11.73015f, 0.522175f, -11.1865f },
	{ 11.17261f, 1.088941f, -10.64148f },
	{ 14.15328f, 2.117231f, 10.64148f },
	{ 14.15328f, 1.43573f, 11.1865f },
	{ 10.03086f, -2.117231f, -10.64148f },
	{ -12.98409f, 0.522175f, -11.1865f },
	{ -12.26528f, 1.088941f, -10.64148f },
	{ -11.34873f, -2.117231f, -10.64148f },
	{ -11.34873f, -2.117231f, 10.64148f },
	{ -12.26528f, 1.088941f, 10.64148f },
	{ -12.98409f, 0.522175f, 11.1865f },
	{ -18.44749f, 1.088941f, 10.64148f },
	{ -19.58924f, -2.117231f, 10.64148f },
	{ -17.88995f, 0.522175f, 11.1865f },
	{ -15.46682f, 1.43573f, -11.1865f },
	{ -15.46682f, 2.117231f, -10.64148f },
	{ -17.88995f, 0.522175f, -11.1865f },
	{ -18.44749f, 1.088941f, -10.64148f },
	{ -15.46682f, 2.117231f, 10.64148f },
	{ -15.46682f, 1.43573f, 11.1865f },
	{ -19.58924f, -2.117231f, -10.64148f }
};

NJS_VECTOR normal_0005B450[] = {
	{ 0.345664f, 0.40879f, -0.844634f },
	{ 0.380436f, 0.363869f, -0.850216f },
	{ 0.520317f, 0.148743f, -0.84092f },
	{ 0.520317f, 0.148743f, 0.84092f },
	{ 0.390288f, 0.357267f, 0.8485489f },
	{ 0.358034f, 0.400895f, 0.843264f },
	{ -0.401525f, 0.412396f, 0.817745f },
	{ -0.5709029f, 0.203305f, 0.7954479f },
	{ -0.388048f, 0.42645f, 0.8170429f },
	{ -0.017188f, 0.595859f, -0.802905f },
	{ -0.015558f, 0.595854f, -0.802942f },
	{ -0.396258f, 0.421735f, -0.8155479f },
	{ -0.409105f, 0.407952f, -0.816216f },
	{ 0.004639f, 0.593973f, 0.804471f },
	{ 0.002981f, 0.5940509f, 0.804422f },
	{ -0.5709029f, 0.203305f, -0.7954479f },
	{ 0.345665f, 0.408792f, -0.844633f },
	{ 0.380437f, 0.36387f, -0.850215f },
	{ 0.520319f, 0.148744f, -0.8409179f },
	{ 0.520319f, 0.148744f, 0.8409179f },
	{ 0.390289f, 0.357269f, 0.848548f },
	{ 0.358035f, 0.400896f, 0.843263f },
	{ -0.401526f, 0.412396f, 0.817744f },
	{ -0.570904f, 0.203305f, 0.795447f },
	{ -0.388049f, 0.426451f, 0.817042f },
	{ -0.017188f, 0.595861f, -0.802904f },
	{ -0.015558f, 0.595855f, -0.802941f },
	{ -0.396259f, 0.421736f, -0.815547f },
	{ -0.409106f, 0.407953f, -0.816215f },
	{ 0.004639f, 0.5939749f, 0.8044699f },
	{ 0.002981f, 0.594052f, 0.8044209f },
	{ -0.570904f, 0.203305f, -0.795447f }
};

NJS_MODEL_SADX attach_0005B5D0 = { vertex_0005B2D0, normal_0005B450, LengthOfArray(vertex_0005B2D0), meshlist_0005B2B8, matlist_0005B1DC, LengthOfArray(meshlist_0005B2B8), LengthOfArray(matlist_0005B1DC),{ -0.658937f, 0, 0 }, 21.9885f, NULL };

NJS_OBJECT object_0005B5F8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005B5D0, 1.587872f, 6.094896f, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0005B1A8 };

NJS_MATERIAL matlist_0005B62C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_ref_white, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0005B640[] = {
	4, 1, 0, 3, 2,
	4, 7, 6, 5, 4
};

NJS_TEX uv_0005B654[] = {
	{ 0, 254 },
	{ 0, 227 },
	{ 251, 254 },
	{ 251, 227 },
	{ 251, 3 },
	{ 251, 31 },
	{ 0, 3 },
	{ 0, 31 }
};

NJS_MESHSET_SADX meshlist_0005B674[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0005B640, NULL, NULL, NULL, uv_0005B654, NULL }
};

NJS_VECTOR vertex_0005B68C[] = {
	{ 5.60271f, 15.5f, -7.07f },
	{ 5.60271f, 10.27077f, -9.089999f },
	{ 6.10271f, 15.5f, -7.07f },
	{ 6.10271f, 10.27077f, -9.089999f },
	{ 5.60271f, 15.5f, 7.07f },
	{ 5.60271f, 10.27077f, 9.089999f },
	{ 6.10271f, 15.5f, 7.07f },
	{ 6.10271f, 10.27077f, 9.089999f }
};

NJS_VECTOR normal_0005B6EC[] = {
	{ 0, 0.36034f, -0.932821f },
	{ 0, 0.36034f, -0.932821f },
	{ 0, 0.36034f, -0.932821f },
	{ 0, 0.36034f, -0.932821f },
	{ 0, 0.36034f, 0.932821f },
	{ 0, 0.36034f, 0.932821f },
	{ 0, 0.36034f, 0.932821f },
	{ 0, 0.36034f, 0.932821f }
};

NJS_MODEL_SADX attach_0005B74C = { vertex_0005B68C, normal_0005B6EC, LengthOfArray(vertex_0005B68C), meshlist_0005B674, matlist_0005B62C, LengthOfArray(meshlist_0005B674), LengthOfArray(matlist_0005B62C),{ 5.85271f, 12.88538f, 0 }, 9.458557f, NULL };

NJS_OBJECT object_0005B774 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005B74C, -0.6027099f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0005B5F8 };

NJS_MATERIAL matlist_0005B7A8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_light1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0005B7BC[] = {
	4, 2, 3, 1, 0,
	4, 6, 7, 5, 4
};

NJS_TEX uv_0005B7D0[] = {
	{ 0, 254 },
	{ 0, 15 },
	{ 239, 254 },
	{ 239, 15 },
	{ 239, 15 },
	{ 239, 254 },
	{ 0, 15 },
	{ 0, 254 }
};

NJS_MESHSET_SADX meshlist_0005B7F0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0005B7BC, NULL, NULL, NULL, uv_0005B7D0, NULL }
};

NJS_VECTOR vertex_0005B808[] = {
	{ 23.02564f, -2.442276f, -6.109995f },
	{ 23.02564f, -3.432462f, -6.109995f },
	{ 23.02604f, -3.432462f, -8.592521f },
	{ 23.02604f, -2.442276f, -8.592521f },
	{ 23.02564f, -3.432462f, 6.109995f },
	{ 23.02564f, -2.442276f, 6.109995f },
	{ 23.02604f, -2.442276f, 8.592521f },
	{ 23.02604f, -3.432462f, 8.592521f }
};

NJS_VECTOR normal_0005B868[] = {
	{ 1, 0, 0.000161f },
	{ 1, 0, 0.000161f },
	{ 1, 0, 0.000161f },
	{ 1, 0, 0.000161f },
	{ 1, 0, -0.000161f },
	{ 1, 0, -0.000161f },
	{ 1, 0, -0.000161f },
	{ 1, 0, -0.000161f }
};

NJS_MODEL_SADX attach_0005B8C8 = { vertex_0005B808, normal_0005B868, LengthOfArray(vertex_0005B808), meshlist_0005B7F0, matlist_0005B7A8, LengthOfArray(meshlist_0005B7F0), LengthOfArray(matlist_0005B7A8),{ 23.02584f, -2.937369f, 0 }, 6.678729f, NULL };

NJS_OBJECT object_0005B8F0 = { NJD_EVAL_BREAK, &attach_0005B8C8, 0.436343f, 9.127414f, 0, 0, 0x7FFF, 0, 1, 1, 0.775134f, NULL, NULL };

NJS_MATERIAL matlist_0005B924[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_light2, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0005B938[] = {
	4, 6, 7, 5, 4,
	4, 2, 3, 1, 0
};

NJS_TEX uv_0005B94C[] = {
	{ 0, 9 },
	{ 245, 8 },
	{ 1, 253 },
	{ 244, 252 },
	{ 0, 9 },
	{ 245, 8 },
	{ 1, 253 },
	{ 244, 252 }
};

NJS_MESHSET_SADX meshlist_0005B96C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0005B938, NULL, NULL, NULL, uv_0005B94C, NULL }
};

NJS_VECTOR vertex_0005B984[] = {
	{ 23.02564f, -2.328815f, 8.605262f },
	{ 23.02564f, -2.328815f, 6.092566f },
	{ 23.02564f, -0.481996f, 6.092566f },
	{ 23.02564f, -0.481996f, 8.605262f },
	{ 23.02564f, -2.328815f, -6.092566f },
	{ 23.02564f, -2.328815f, -8.605262f },
	{ 23.02564f, -0.481996f, -8.605262f },
	{ 23.02564f, -0.481996f, -6.092566f }
};

NJS_VECTOR normal_0005B9E4[] = {
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 }
};

NJS_MODEL_SADX attach_0005BA44 = { vertex_0005B984, normal_0005B9E4, LengthOfArray(vertex_0005B984), meshlist_0005B96C, matlist_0005B924, LengthOfArray(meshlist_0005B96C), LengthOfArray(matlist_0005B924),{ 23.02564f, -1.405406f, 0 }, 8.654663f, NULL };

NJS_OBJECT object_0005BA6C = { NJD_EVAL_BREAK, &attach_0005BA44, 0.437443f, 9.127414f, 0, 0, 0x7FFF, 0, 1, 1, 0.775134f, NULL, &object_0005B8F0 };

NJS_MATERIAL matlist_0005BAA0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_ref_crome, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_tyre, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0005BAC8[] = {
	4, 2, 3, 1, 0,
	4, 6, 7, 5, 4
};

Sint16 poly_0005BADC[] = {
	4, 1, 0, 4, 5
};

NJS_TEX uv_0005BAE8[] = {
	{ 0, 7 },
	{ 0, 254 },
	{ 247, 7 },
	{ 247, 254 },
	{ 247, 254 },
	{ 247, 7 },
	{ 0, 254 },
	{ 0, 7 }
};

NJS_TEX uv_0005BB08[] = {
	{ 0, -255 },
	{ 0, 254 },
	{ 510, -255 },
	{ 510, 254 }
};

NJS_MESHSET_SADX meshlist_0005BB18[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0005BAC8, NULL, NULL, NULL, uv_0005BAE8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0005BADC, NULL, NULL, NULL, uv_0005BB08, NULL }
};

NJS_VECTOR vertex_0005BB48[] = {
	{ -22.51556f, 5.549734f, -4.576173f },
	{ -22.51556f, 8.736253f, -4.576173f },
	{ -22.51556f, 8.736253f, -6.752841f },
	{ -22.51556f, 5.549734f, -6.752841f },
	{ -22.51556f, 8.736253f, 4.576172f },
	{ -22.51556f, 5.549734f, 4.576172f },
	{ -22.51556f, 5.549734f, 6.752841f },
	{ -22.51556f, 8.736253f, 6.752841f }
};

NJS_VECTOR normal_0005BBA8[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 }
};

NJS_MODEL_SADX attach_0005BC08 = { vertex_0005BB48, normal_0005BBA8, LengthOfArray(vertex_0005BB48), meshlist_0005BB18, matlist_0005BAA0, LengthOfArray(meshlist_0005BB18), LengthOfArray(matlist_0005BAA0),{ -22.51556f, 7.142993f, 0 }, 8.856332f, NULL };

NJS_OBJECT object_0005BC30 = { 0, &attach_0005BC08, 1.571951f, 0.244718f, 0, 0, 0x7FFF, 0, 1, 1, 1.2901f, &object_0005BA6C, &object_0005B774 };

NJS_MATERIAL matlist_0005BC64[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_light1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0005BC78[] = {
	4, 1, 0, 2, 3,
	4, 6, 7, 5, 4
};

NJS_TEX uv_0005BC8C[] = {
	{ 0, 255 },
	{ 0, 15 },
	{ 239, 255 },
	{ 239, 15 },
	{ 239, 255 },
	{ 239, 15 },
	{ 0, 255 },
	{ 0, 15 }
};

NJS_MESHSET_SADX meshlist_0005BCAC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0005BC78, NULL, NULL, NULL, uv_0005BC8C, NULL }
};

NJS_VECTOR vertex_0005BCC4[] = {
	{ -21, 7, -10.53554f },
	{ -21, 6, -10.53554f },
	{ -19.5f, 6, -10.53554f },
	{ -19.5f, 7, -10.53554f },
	{ -21, 7, 10.56697f },
	{ -21, 6, 10.56697f },
	{ -19.5f, 6, 10.56697f },
	{ -19.5f, 7, 10.56697f }
};

NJS_VECTOR normal_0005BD24[] = {
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

NJS_MODEL_SADX attach_0005BD84 = { vertex_0005BCC4, normal_0005BD24, LengthOfArray(vertex_0005BCC4), meshlist_0005BCAC, matlist_0005BC64, LengthOfArray(meshlist_0005BCAC), LengthOfArray(matlist_0005BC64),{ -20.25f, 6.5f, 0.015714f }, 10.57788f, NULL };

NJS_OBJECT object_0005BDAC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005BD84, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_0005936C, &object_0005BC30 };

NJS_MATERIAL matlist_0005BDE0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_ref_black, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_ref_crome, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0005BE08[] = {
	0x8000u | 7, 3, 0, 2, 1, 4, 6, 5,
	3, 17, 16, 7,
	10, 5, 3, 7, 0, 17, 1, 16, 6, 7, 5,
	0x8000u | 7, 10, 9, 11, 8, 13, 15, 12,
	3, 14, 18, 19,
	10, 12, 10, 14, 9, 18, 8, 19, 15, 14, 12
};

Sint16 poly_0005BE64[] = {
	4, 4, 2, 5, 3,
	4, 13, 11, 12, 10
};

NJS_TEX uv_0005BE78[] = {
	{ 251, 254 },
	{ 131, 253 },
	{ 251, 254 },
	{ 131, 253 },
	{ 251, 228 },
	{ 131, 230 },
	{ 251, 228 },
	{ 0, 239 },
	{ 30, 239 },
	{ 131, 230 },
	{ 251, 228 },
	{ 251, 254 },
	{ 131, 230 },
	{ 131, 253 },
	{ 0, 239 },
	{ 131, 253 },
	{ 30, 239 },
	{ 131, 230 },
	{ 131, 230 },
	{ 251, 228 },
	{ 251, 3 },
	{ 131, 5 },
	{ 251, 3 },
	{ 131, 5 },
	{ 251, 30 },
	{ 131, 28 },
	{ 251, 30 },
	{ 131, 28 },
	{ 30, 19 },
	{ 0, 19 },
	{ 251, 30 },
	{ 251, 3 },
	{ 131, 28 },
	{ 131, 5 },
	{ 30, 19 },
	{ 131, 5 },
	{ 0, 19 },
	{ 131, 28 },
	{ 131, 28 },
	{ 251, 30 }
};

NJS_TEX uv_0005BF18[] = {
	{ 246, 254 },
	{ 0, 255 },
	{ 246, 7 },
	{ 0, 7 },
	{ 0, 8 },
	{ 247, 8 },
	{ 0, 255 },
	{ 247, 255 }
};

NJS_MESHSET_SADX meshlist_0005BF38[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_0005BE08, NULL, NULL, NULL, uv_0005BE78, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0005BE64, NULL, NULL, NULL, uv_0005BF18, NULL }
};

NJS_VECTOR vertex_0005BF68[] = {
	{ 0.20687f, 0.648459f, -12.16838f },
	{ 0.20687f, -0.648459f, -12.16838f },
	{ 1.29362f, -0.68985f, -12.32495f },
	{ 1.29362f, 0.68985f, -12.32495f },
	{ 1.29362f, -0.68985f, -9.715357f },
	{ 1.29362f, 0.68985f, -9.715357f },
	{ 0.20687f, -0.648459f, -9.871933f },
	{ 0.20687f, 0.648459f, -9.871933f },
	{ 0.20687f, 0.648459f, 12.16838f },
	{ 0.20687f, -0.648459f, 12.16838f },
	{ 1.29362f, -0.68985f, 12.32495f },
	{ 1.29362f, 0.68985f, 12.32495f },
	{ 1.29362f, -0.68985f, 9.715357f },
	{ 1.29362f, 0.68985f, 9.715357f },
	{ 0.20687f, -0.648459f, 9.871933f },
	{ 0.20687f, 0.648459f, 9.871933f },
	{ -0.709981f, -0.432155f, -10.81794f },
	{ -0.983151f, 0.108664f, -10.81794f },
	{ -0.709981f, -0.432155f, 10.81794f },
	{ -0.983151f, 0.108664f, 10.81794f }
};

NJS_VECTOR normal_0005C058[] = {
	{ -0.41706f, 0.616628f, -0.667706f },
	{ -0.383172f, -0.638443f, -0.667509f },
	{ 0.528837f, -0.581379f, -0.618328f },
	{ 0.528837f, 0.581379f, -0.618328f },
	{ 0.528837f, -0.581379f, 0.618328f },
	{ 0.528837f, 0.581379f, 0.618328f },
	{ -0.378567f, -0.664355f, 0.644453f },
	{ -0.416701f, 0.6444629f, 0.641115f },
	{ -0.41706f, 0.616628f, 0.667706f },
	{ -0.383172f, -0.638443f, 0.667509f },
	{ 0.528837f, -0.581379f, 0.618328f },
	{ 0.528837f, 0.581379f, 0.618328f },
	{ 0.528837f, -0.581379f, -0.618328f },
	{ 0.528837f, 0.581379f, -0.618328f },
	{ -0.378567f, -0.664355f, -0.644453f },
	{ -0.416701f, 0.6444629f, -0.641115f },
	{ -0.83943f, -0.5432529f, 0.015267f },
	{ -0.945804f, 0.324731f, -0.002187f },
	{ -0.83943f, -0.5432529f, -0.015267f },
	{ -0.945804f, 0.324731f, 0.002187f }
};

NJS_MODEL_SADX attach_0005C148 = { vertex_0005BF68, normal_0005C058, LengthOfArray(vertex_0005BF68), meshlist_0005BF38, matlist_0005BDE0, LengthOfArray(meshlist_0005BF38), LengthOfArray(matlist_0005BDE0),{ 0.155235f, 0, 0 }, 12.37742f, NULL };

NJS_OBJECT object_0005C170 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0005C148, -9.25332f, 10.89482f, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0005BDAC };

NJS_MATERIAL matlist_0005C1A4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_yakei_ref, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_yakei_ref_w, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS0_OBJECTTexName_ref_white, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0005C1E0[] = {
	8, 2, 0, 1, 45, 10, 77, 78, 44,
	3, 8, 2, 1,
	0x8000u | 5, 25, 24, 14, 11, 7,
	4, 21, 12, 79, 23,
	3, 82, 83, 41,
	7, 60, 64, 85, 65, 86, 90, 87,
	4, 31, 19, 28, 18,
	3, 85, 84, 60,
	0x8000u | 5, 61, 62, 57, 58, 56,
	0x8000u | 7, 80, 89, 81, 16, 82, 27, 41,
	4, 77, 45, 76, 50,
	0x8000u | 31, 3, 80, 2, 92, 8, 93, 15, 94, 26, 95, 40, 96, 33, 98, 32, 99, 71, 97, 66, 100, 68, 101, 63, 102, 59, 103, 55, 43, 44, 42, 77,
	18, 100, 87, 97, 67, 99, 72, 98, 34, 96, 35, 95, 83, 94, 82, 93, 81, 92, 80,
	8, 87, 100, 86, 101, 85, 102, 84, 103,
	4, 43, 47, 103, 84
};

Sint16 poly_0005C2E2[] = {
	0x8000u | 7, 10, 1, 7, 8, 14, 15, 25,
	4, 23, 12, 7, 11,
	0x8000u | 7, 24, 20, 11, 13, 12, 22, 21,
	4, 30, 31, 29, 28,
	0x8000u | 5, 58, 55, 56, 44, 78,
	4, 20, 13, 17, 22,
	4, 62, 28, 61, 18,
	0x8000u | 17, 25, 31, 24, 19, 20, 18, 17, 61, 22, 57, 21, 56, 79, 78, 23, 10, 7,
	7, 30, 33, 31, 40, 25, 26, 15,
	13, 55, 59, 58, 63, 62, 68, 28, 66, 29, 71, 30, 32, 33
};

Sint16 poly_0005C386[] = {
	16, 89, 9, 80, 5, 3, 6, 4, 51, 50, 75, 76, 48, 46, 49, 47, 84,
	3, 52, 53, 49,
	3, 84, 49, 53,
	10, 87, 69, 67, 73, 72, 36, 34, 37, 35, 83,
	3, 87, 90, 70,
	0x8000u | 9, 69, 73, 91, 36, 38, 37, 39, 83, 41,
	3, 69, 70, 91,
	3, 70, 69, 87,
	3, 53, 60, 84,
	11, 49, 48, 52, 75, 74, 51, 54, 6, 88, 5, 9
};

NJS_TEX uv_0005C41C[] = {
	{ 20, 249 },
	{ 10, 232 },
	{ 25, 232 },
	{ 5, 203 },
	{ 20, 209 },
	{ 5, 55 },
	{ 20, 49 },
	{ 25, 26 },
	{ 70, 249 },
	{ 20, 249 },
	{ 25, 232 },
	{ 207, 243 },
	{ 197, 218 },
	{ 71, 243 },
	{ 76, 218 },
	{ 15, 243 },
	{ 66, 45 },
	{ 66, 213 },
	{ 6, 22 },
	{ 6, 236 },
	{ 175, 249 },
	{ 205, 254 },
	{ 205, 237 },
	{ 70, 21 },
	{ 110, 21 },
	{ 110, 3 },
	{ 175, 21 },
	{ 175, 3 },
	{ 205, 21 },
	{ 205, 3 },
	{ 249, 243 },
	{ 211, 211 },
	{ 249, 15 },
	{ 211, 47 },
	{ 110, 3 },
	{ 70, 3 },
	{ 70, 21 },
	{ 197, 40 },
	{ 207, 15 },
	{ 76, 40 },
	{ 71, 15 },
	{ 15, 15 },
	{ 70, 254 },
	{ 70, 237 },
	{ 110, 249 },
	{ 110, 237 },
	{ 175, 249 },
	{ 175, 237 },
	{ 205, 237 },
	{ 5, 55 },
	{ 5, 203 },
	{ 5, 55 },
	{ 5, 203 },
	{ 20, 249 },
	{ 70, 254 },
	{ 20, 249 },
	{ 70, 254 },
	{ 70, 249 },
	{ 110, 254 },
	{ 110, 249 },
	{ 175, 254 },
	{ 175, 249 },
	{ 205, 254 },
	{ 205, 249 },
	{ 240, 249 },
	{ 240, 249 },
	{ 245, 232 },
	{ 245, 232 },
	{ 245, 26 },
	{ 245, 26 },
	{ 240, 9 },
	{ 240, 9 },
	{ 205, 3 },
	{ 205, 9 },
	{ 175, 3 },
	{ 175, 9 },
	{ 110, 3 },
	{ 110, 9 },
	{ 70, 3 },
	{ 70, 9 },
	{ 20, 9 },
	{ 25, 26 },
	{ 10, 26 },
	{ 5, 55 },
	{ 205, 3 },
	{ 205, 3 },
	{ 240, 9 },
	{ 240, 9 },
	{ 245, 26 },
	{ 245, 26 },
	{ 245, 232 },
	{ 245, 232 },
	{ 240, 249 },
	{ 240, 249 },
	{ 205, 254 },
	{ 205, 254 },
	{ 175, 254 },
	{ 175, 249 },
	{ 110, 254 },
	{ 110, 249 },
	{ 70, 254 },
	{ 70, 254 },
	{ 205, 255 },
	{ 205, 255 },
	{ 175, 255 },
	{ 175, 255 },
	{ 110, 255 },
	{ 110, 255 },
	{ 70, 255 },
	{ 70, 255 },
	{ 20, 9 },
	{ 20, 9 },
	{ 70, 3 },
	{ 70, 3 }
};

NJS_TEX uv_0005C5E4[] = {
	{ 20, 209 },
	{ 25, 232 },
	{ 80, 232 },
	{ 70, 249 },
	{ 110, 232 },
	{ 110, 249 },
	{ 183, 232 },
	{ 75, 226 },
	{ 107, 205 },
	{ 80, 232 },
	{ 112, 209 },
	{ 178, 209 },
	{ 178, 197 },
	{ 112, 209 },
	{ 115, 197 },
	{ 107, 205 },
	{ 115, 61 },
	{ 107, 53 },
	{ 240, 232 },
	{ 205, 232 },
	{ 240, 26 },
	{ 205, 26 },
	{ 110, 26 },
	{ 70, 9 },
	{ 80, 26 },
	{ 25, 26 },
	{ 20, 49 },
	{ 178, 197 },
	{ 115, 197 },
	{ 178, 61 },
	{ 115, 61 },
	{ 183, 26 },
	{ 205, 26 },
	{ 178, 49 },
	{ 185, 55 },
	{ 183, 232 },
	{ 205, 232 },
	{ 178, 209 },
	{ 185, 203 },
	{ 178, 197 },
	{ 185, 55 },
	{ 178, 61 },
	{ 178, 49 },
	{ 115, 61 },
	{ 112, 49 },
	{ 107, 53 },
	{ 80, 26 },
	{ 75, 33 },
	{ 20, 49 },
	{ 75, 226 },
	{ 20, 209 },
	{ 80, 232 },
	{ 240, 232 },
	{ 240, 249 },
	{ 205, 232 },
	{ 205, 249 },
	{ 183, 232 },
	{ 175, 249 },
	{ 110, 249 },
	{ 70, 9 },
	{ 110, 9 },
	{ 110, 26 },
	{ 175, 9 },
	{ 183, 26 },
	{ 205, 9 },
	{ 205, 26 },
	{ 240, 9 },
	{ 240, 26 },
	{ 245, 26 },
	{ 240, 232 },
	{ 245, 232 },
	{ 240, 249 }
};

NJS_TEX uv_0005C704[] = {
	{ 70, 237 },
	{ 17, 254 },
	{ 70, 254 },
	{ 17, 254 },
	{ 20, 249 },
	{ 5, 232 },
	{ 10, 232 },
	{ 0, 203 },
	{ 5, 203 },
	{ 0, 55 },
	{ 5, 55 },
	{ 5, 26 },
	{ 10, 26 },
	{ 17, 3 },
	{ 20, 9 },
	{ 70, 3 },
	{ 5, 26 },
	{ 17, 3 },
	{ 17, 3 },
	{ 70, 255 },
	{ 17, 255 },
	{ 17, 255 },
	{ 205, 3 },
	{ 240, 3 },
	{ 240, 9 },
	{ 251, 26 },
	{ 245, 26 },
	{ 251, 232 },
	{ 245, 232 },
	{ 240, 254 },
	{ 240, 249 },
	{ 205, 254 },
	{ 205, 3 },
	{ 205, 21 },
	{ 240, 3 },
	{ 240, 3 },
	{ 251, 26 },
	{ 248, 26 },
	{ 251, 232 },
	{ 248, 232 },
	{ 240, 254 },
	{ 240, 254 },
	{ 205, 254 },
	{ 205, 237 },
	{ 240, 3 },
	{ 240, 3 },
	{ 248, 26 },
	{ 240, 255 },
	{ 240, 255 },
	{ 205, 255 },
	{ 17, 3 },
	{ 70, 21 },
	{ 70, 3 },
	{ 17, 3 },
	{ 5, 26 },
	{ 5, 26 },
	{ 0, 55 },
	{ 0, 55 },
	{ 0, 203 },
	{ 0, 203 },
	{ 5, 232 },
	{ 5, 232 },
	{ 17, 254 },
	{ 17, 254 }
};

NJS_MESHSET_SADX meshlist_0005C804[] = {
	{ NJD_MESHSET_TRIMESH | 0, 15, poly_0005C1E0, NULL, NULL, NULL, uv_0005C41C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 10, poly_0005C2E2, NULL, NULL, NULL, uv_0005C5E4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 10, poly_0005C386, NULL, NULL, NULL, uv_0005C704, NULL }
};

NJS_VECTOR vertex_0005C84C[] = {
	{ -23, 7, -9 },
	{ -20, 9, -9 },
	{ -21, 7, -10.5f },
	{ -21, 5, -10.5f },
	{ -23, 5, -9 },
	{ -21.5f, 4.5f, -11 },
	{ -24, 4.5f, -9 },
	{ -9, 10, -9 },
	{ -11, 9, -10.5f },
	{ -21.5f, 2.5f, -11 },
	{ -21, 9, -7 },
	{ -2.5f, 15.5f, -7.011719f },
	{ -3.5f, 15.5f, -6.652344f },
	{ -2, 16, -5.945312f },
	{ -3, 10, -9 },
	{ -3, 9, -10.5f },
	{ -3, 2, -9.5f },
	{ 10.5f, 16, 5.945312f },
	{ 12, 15.5f, 6.519531f },
	{ 12, 15.5f, -6.519531f },
	{ 10.5f, 16, -5.945312f },
	{ -3.5f, 15.5f, 6.652344f },
	{ -2, 16, 5.945312f },
	{ -10, 10.5f, -8.5f },
	{ 10.5f, 15.5f, -7.011719f },
	{ 11.5f, 10.5f, -9 },
	{ 10, 9, -10.5f },
	{ 10, 2, -9.5f },
	{ 16, 11, 9 },
	{ 23, 11, 9 },
	{ 23, 11, -9 },
	{ 16, 11, -9 },
	{ 24, 9, -9 },
	{ 23, 9, -10.5f },
	{ 24, 5.5f, -9 },
	{ 23, 5.5f, -10.5f },
	{ 25, 5, -9 },
	{ 23, 5, -11 },
	{ 24.5f, 3, -9 },
	{ 23, 3, -11 },
	{ 16, 9, -10.5f },
	{ 16, 2.5f, -9.5f },
	{ -23, 7, 9 },
	{ -21, 7, 10.5f },
	{ -20, 9, 9 },
	{ -24, 7, -6.5f },
	{ -23, 5, 9 },
	{ -21, 5, 10.5f },
	{ -24, 4.5f, 9 },
	{ -21.5f, 4.5f, 11 },
	{ -24, 5, -6.5f },
	{ -25, 4.5f, -6.5f },
	{ -24, 2.5f, 9 },
	{ -21.5f, 2.5f, 11 },
	{ -25, 2.5f, -6.5f },
	{ -11, 9, 10.5f },
	{ -9, 10, 9 },
	{ -2.5f, 15.5f, 7.011719f },
	{ -3, 10, 9 },
	{ -3, 9, 10.5f },
	{ -11, 2, 9.5f },
	{ 10.5f, 15.5f, 7.011719f },
	{ 11.5f, 10.5f, 9 },
	{ 10, 9, 10.5f },
	{ -3, 2, 9.5f },
	{ 10, 2, 9.5f },
	{ 23, 9, 10.5f },
	{ 23, 5.5f, 10.5f },
	{ 16, 9, 10.5f },
	{ 23, 5, 11 },
	{ 23, 3, 11 },
	{ 24, 9, 9 },
	{ 24, 5.5f, 9 },
	{ 25, 5, 9 },
	{ -25, 2.5f, 6.5f },
	{ -25, 4.5f, 6.5f },
	{ -24, 5, 6.5f },
	{ -24, 7, 6.5f },
	{ -21, 9, 7 },
	{ -10, 10.5f, 8.429688f },
	{ -11, 5, -11 },
	{ -3, 5, -10.5f },
	{ 10, 5, -10.5f },
	{ 16, 5, -11 },
	{ -11, 5, 11 },
	{ -3, 5, 11 },
	{ 10, 5, 11 },
	{ 16, 5, 11 },
	{ -24, 2.5f, -9 },
	{ -11, 2, -9.5f },
	{ 16, 2.5f, 9.5f },
	{ 24.5f, 3, 9 },
	{ -11, 7, -11 },
	{ -3, 7, -11 },
	{ 10, 7, -11 },
	{ 16, 7, -11 },
	{ 23, 7, -10.5f },
	{ 23, 7, 10.5f },
	{ 24, 7, -9 },
	{ 24, 7, 9 },
	{ 16, 7, 11 },
	{ 10, 7, 11 },
	{ -3, 7, 11 },
	{ -11, 7, 11 }
};

NJS_VECTOR normal_0005CD2C[] = {
	{ -0.521716f, 0.782574f, -0.339693f },
	{ -0.258716f, 0.86828f, -0.423269f },
	{ -0.227077f, 0.435398f, -0.871128f },
	{ -0.143755f, 0.587319f, -0.796487f },
	{ -0.389018f, 0.845691f, -0.365337f },
	{ -0.323271f, 0.406905f, -0.854356f },
	{ -0.720933f, 0.471395f, -0.507978f },
	{ -0.078454f, 0.69454f, -0.7151639f },
	{ -0.048855f, 0.606343f, -0.793701f },
	{ -0.31598f, -0.046567f, -0.9476219f },
	{ -0.38489f, 0.9158649f, -0.114241f },
	{ -0.08351f, 0.700041f, -0.7092029f },
	{ -0.394783f, 0.84012f, -0.371946f },
	{ -0.11964f, 0.976322f, -0.180226f },
	{ -0.005026f, 0.586083f, -0.810236f },
	{ -0.003426f, 0.53633f, -0.844001f },
	{ 0, -0.316228f, -0.948683f },
	{ 0.127392f, 0.973411f, 0.190374f },
	{ 0.457233f, 0.821151f, 0.341538f },
	{ 0.457233f, 0.821152f, -0.341538f },
	{ 0.127392f, 0.973411f, -0.190374f },
	{ -0.394931f, 0.840027f, 0.372001f },
	{ -0.11964f, 0.976322f, 0.180226f },
	{ -0.295865f, 0.770789f, -0.5642239f },
	{ 0.061972f, 0.697329f, -0.714067f },
	{ -0.02f, 0.54237f, -0.839902f },
	{ -0.004688f, 0.49546f, -0.868618f },
	{ 0.012834f, -0.316202f, -0.9486049f },
	{ 0.138388f, 0.800398f, 0.583277f },
	{ 0.457809f, 0.804462f, 0.378487f },
	{ 0.457809f, 0.804462f, -0.378487f },
	{ 0.138388f, 0.800398f, -0.583277f },
	{ 0.937619f, 0.214107f, -0.273913f },
	{ 0.425249f, 0.310034f, -0.850319f },
	{ 0.782593f, 0.553672f, -0.284598f },
	{ 0.41051f, 0.504119f, -0.759833f },
	{ 0.872989f, 0.371819f, -0.315659f },
	{ 0.342436f, 0.391313f, -0.8541729f },
	{ 0.910356f, -0.183697f, -0.370819f },
	{ 0.420024f, -0.07246f, -0.904616f },
	{ -0.012382f, 0.411528f, -0.911313f },
	{ -0.08979999f, -0.481526f, -0.871819f },
	{ -0.521716f, 0.782574f, 0.339693f },
	{ -0.227077f, 0.435398f, 0.871128f },
	{ -0.258716f, 0.86828f, 0.423269f },
	{ -0.802014f, 0.593335f, -0.068761f },
	{ -0.411157f, 0.822314f, 0.393383f },
	{ -0.152859f, 0.572596f, 0.805461f },
	{ -0.723077f, 0.463233f, 0.51242f },
	{ -0.330535f, 0.390032f, 0.859431f },
	{ -0.7081839f, 0.701874f, -0.076469f },
	{ -0.852987f, 0.496892f, -0.159725f },
	{ -0.803121f, 0, 0.595816f },
	{ -0.31598f, -0.046567f, 0.9476219f },
	{ -0.9819559f, 0, -0.189108f },
	{ -0.048855f, 0.606344f, 0.793701f },
	{ -0.087593f, 0.706273f, 0.7025f },
	{ -0.08365399f, 0.6943409f, 0.714767f },
	{ -0.005548f, 0.619141f, 0.78526f },
	{ -0.004054f, 0.576035f, 0.817415f },
	{ 0.051173f, -0.446628f, 0.893255f },
	{ 0.062349f, 0.691314f, 0.71986f },
	{ -0.020415f, 0.559505f, 0.828576f },
	{ -0.005593f, 0.550675f, 0.8347009f },
	{ 0, -0.447214f, 0.8944269f },
	{ 0.018173f, -0.44714f, 0.8942789f },
	{ 0.425249f, 0.310034f, 0.850319f },
	{ 0.473694f, 0.37566f, 0.796551f },
	{ -0.012382f, 0.411528f, 0.911313f },
	{ 0.379003f, 0.318041f, 0.8690259f },
	{ 0.420024f, -0.07246f, 0.904616f },
	{ 0.937619f, 0.214107f, 0.273913f },
	{ 0.834374f, 0.43245f, 0.34177f },
	{ 0.889954f, 0.298826f, 0.344507f },
	{ -0.9819559f, 0, 0.189108f },
	{ -0.852987f, 0.496892f, 0.159725f },
	{ -0.7081839f, 0.701874f, 0.076469f },
	{ -0.802014f, 0.593335f, 0.068761f },
	{ -0.384842f, 0.915884f, 0.11425f },
	{ -0.298156f, 0.794777f, 0.528614f },
	{ 0.040291f, -0.235003f, -0.971159f },
	{ 0.018947f, -0.2598f, -0.965477f },
	{ -0.020805f, -0.266579f, -0.963588f },
	{ -0.053721f, -0.2618f, -0.963626f },
	{ 0.010359f, -0.205576f, 0.978586f },
	{ 0, -0.229753f, 0.973249f },
	{ 0.00683f, -0.2351f, 0.971947f },
	{ -0.014354f, -0.233498f, 0.972251f },
	{ -0.803121f, 0, -0.595816f },
	{ 0.073162f, -0.430256f, -0.8997369f },
	{ -0.060763f, -0.5021279f, 0.862656f },
	{ 0.910356f, -0.183697f, 0.370819f },
	{ -0.009172999f, 0.091208f, -0.9957899f },
	{ 0.015859f, 0.030422f, -0.999411f },
	{ -0.021119f, 0.030477f, -0.999312f },
	{ -0.002829f, 0.061236f, -0.998119f },
	{ 0.48827f, 0.034899f, -0.871995f },
	{ 0.48827f, 0.034899f, 0.871995f },
	{ 0.957092f, 0, -0.289784f },
	{ 0.957092f, 0, 0.289784f },
	{ 0.017962f, 0.092074f, 0.99559f },
	{ 0, 0.122183f, 0.992508f },
	{ 0, 0.122183f, 0.992508f },
	{ -0.024744f, 0.121912f, 0.992232f }
};

NJS_MODEL_SADX attach_0005D20C = { vertex_0005C84C, normal_0005CD2C, LengthOfArray(vertex_0005C84C), meshlist_0005C804, matlist_0005C1A4, LengthOfArray(meshlist_0005C804), LengthOfArray(matlist_0005C1A4),{ 0, 9, 0 }, 27.313f, NULL };

NJS_OBJECT object_0005D234 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_0005D20C, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_0005C170, NULL };

NJS_MKEY_A animation_0004CEA0_15_rot[] = {
	{ 0, 0, 0, 0 },
	{ 1, 0, 0x1FFF, 0 },
	{ 2, 0, 0x3FFF, 0 },
	{ 3, 0, 0x5FFF, 0 },
	{ 4, 0, 0x7FFF, 0 },
	{ 5, 0, 0x9FFF, 0 },
	{ 6, 0, 0xBFFF, 0 },
	{ 7, 0, 0xDFFF, 0 }
};

NJS_MKEY_A animation_0004CEA0_16_rot[] = {
	{ 0, 0, 0, 0xFFFF },
	{ 1, 0, 0x1FFF, 0xFFFF },
	{ 2, 0, 0x3FFF, 0xFFFF },
	{ 3, 0, 0x5FFF, 0xFFFF },
	{ 4, 0, 0x7FFF, 0xFFFF },
	{ 5, 0, 0x9FFF, 0xFFFF },
	{ 6, 0, 0xBFFF, 0xFFFF },
	{ 7, 0, 0xDFFF, 0xFFFF }
};

NJS_MDATA2 animation_0004CEA0_mdat[] = {
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, animation_0004CEA0_15_rot, 0, LengthOfArray(animation_0004CEA0_15_rot) },
	{ NULL, animation_0004CEA0_16_rot, 0, LengthOfArray(animation_0004CEA0_16_rot) },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 }
};

NJS_MOTION animation_0004CEA0 = { animation_0004CEA0_mdat, 8, NJD_MTYPE_POS_0 | NJD_MTYPE_ANG_1, 2 };

//Spotlight

NJS_MATERIAL matlist_01DFDD9C[] = {
	{ { 0x6FFFFFFF },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_INV_SRC }
};

Sint16 poly_01DFDDB0[] = {
	4, 3, 2, 1, 0
};

NJS_TEX uv_01DFDDBC[] = {
	{ 251, 4 },
	{ 251, 251 },
	{ 3, 4 },
	{ 3, 251 }
};

NJS_MESHSET_SADX meshlist_01DFDDCC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_01DFDDB0, NULL, NULL, NULL, uv_01DFDDBC, NULL }
};

NJS_VECTOR vertex_01DFDDE8[] = {
	{ -22, 22, 0 },
	{ -22, -22, 0 },
	{ 22, 22, 0 },
	{ 22, -22, 0 }
};

NJS_VECTOR normal_01DFDE18[] = {
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

NJS_MODEL_SADX attach_01DFDE48 = { vertex_01DFDDE8, normal_01DFDE18, LengthOfArray<Sint32>(vertex_01DFDDE8), meshlist_01DFDDCC, matlist_01DFDD9C, LengthOfArray<Uint16>(meshlist_01DFDDCC), LengthOfArray<Uint16>(matlist_01DFDD9C),{ 0, -0.00001f, 0.000004f }, 5, NULL };

NJS_OBJECT spotlight = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_01DFDE48, 291.83f, 0.1f, 385.525f, 0x4000, 0, 0, 1, 1, 1, NULL, NULL };

#pragma warning(pop)
