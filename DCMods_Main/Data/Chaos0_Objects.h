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

//Police car
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

//Helicopter
NJS_MATERIAL matlist_00054D58[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 24, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00054D6C[] = {
	4, 3, 2, 1, 0
};

NJS_TEX uv_00054D78[] = {
	{ 249, 219 },
	{ 249, 37 },
	{ 0, 219 },
	{ 0, 37 }
};

NJS_MESHSET_SADX meshlist_00054D88[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00054D6C, NULL, NULL, NULL, uv_00054D78, NULL }
};

NJS_VECTOR vertex_00054DA0[] = {
	{ -7.558897f, 1.944014f, -0.088364f },
	{ -7.558897f, -1.944014f, -0.088364f },
	{ 7.558897f, 1.944014f, -0.618551f },
	{ 7.558897f, -1.944014f, -0.618551f }
};

NJS_VECTOR normal_00054DD0[] = {
	{ 0.035049f, 0, 0.999386f },
	{ 0.035049f, 0, 0.999386f },
	{ 0.035049f, 0, 0.999386f },
	{ 0.035049f, 0, 0.999386f }
};

NJS_MODEL_SADX attach_00054E00 = { vertex_00054DA0, normal_00054DD0, LengthOfArray<Sint32>(vertex_00054DA0), meshlist_00054D88, matlist_00054D58, LengthOfArray<Uint16>(meshlist_00054D88), LengthOfArray<Uint16>(matlist_00054D58),{ 0, 0, -0.353458f }, 7.563543f, NULL };

NJS_OBJECT object_00054E28 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00054E00, 33.96023f, -12.00935f, 3.357849f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00054E5C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 24, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00054E70[] = {
	4, 1, 0, 3, 2
};

NJS_TEX uv_00054E7C[] = {
	{ 0, 219 },
	{ 0, 37 },
	{ 249, 219 },
	{ 249, 37 }
};

NJS_MESHSET_SADX meshlist_00054E8C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00054E70, NULL, NULL, NULL, uv_00054E7C, NULL }
};

NJS_VECTOR vertex_00054EA4[] = {
	{ -7.558897f, 1.944014f, 0.088364f },
	{ -7.558897f, -1.944014f, 0.088364f },
	{ 7.558897f, 1.944014f, 0.618551f },
	{ 7.558897f, -1.944014f, 0.618551f }
};

NJS_VECTOR normal_00054ED4[] = {
	{ 0.035049f, 0, -0.999386f },
	{ 0.035049f, 0, -0.999386f },
	{ 0.035049f, 0, -0.999386f },
	{ 0.035049f, 0, -0.999386f }
};

NJS_MODEL_SADX attach_00054F04 = { vertex_00054EA4, normal_00054ED4, LengthOfArray<Sint32>(vertex_00054EA4), meshlist_00054E8C, matlist_00054E5C, LengthOfArray<Uint16>(meshlist_00054E8C), LengthOfArray<Uint16>(matlist_00054E5C),{ 0, 0, 0.353458f }, 7.563543f, NULL };

NJS_OBJECT object_00054F2C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00054F04, 33.96023f, -12.00935f, -3.357849f, 0, 0, 0, 1, 1, 1, NULL, &object_00054E28 };

NJS_MATERIAL matlist_00054F60[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00054F74[] = {
	0x8000u | 5, 1, 2, 0, 3, 4,
	0x8000u | 5, 4, 5, 0, 6, 1
};

NJS_TEX uv_00054F8C[] = {
	{ 244, 132 },
	{ 183, 230 },
	{ 123, 131 },
	{ 65, 230 },
	{ 6, 130 },
	{ 6, 130 },
	{ 60, 23 },
	{ 123, 131 },
	{ 184, 22 },
	{ 244, 132 }
};

NJS_MESHSET_SADX meshlist_00054FB4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00054F74, NULL, NULL, NULL, uv_00054F8C, NULL }
};

NJS_VECTOR vertex_00054FCC[] = {
	{ 0, -1.081385f, 0 },
	{ 2.443154f, -1.608952f, 0 },
	{ 1.221577f, -1.608952f, -2.070816f },
	{ -1.221578f, -1.608952f, -2.070816f },
	{ -2.443155f, -1.608952f, 0 },
	{ -1.221576f, -1.608952f, 2.070816f },
	{ 1.221577f, -1.608952f, 2.070816f }
};

NJS_VECTOR normal_00055020[] = {
	{ 0, -1, 0 },
	{ -0.211072f, -0.977471f, 0 },
	{ -0.106858f, -0.976759f, 0.185806f },
	{ 0.106858f, -0.976759f, 0.185806f },
	{ 0.211072f, -0.977471f, 0 },
	{ 0.106858f, -0.976759f, -0.185806f },
	{ -0.106858f, -0.976759f, -0.185806f }
};

NJS_MODEL_SADX attach_00055074 = { vertex_00054FCC, normal_00055020, LengthOfArray<Sint32>(vertex_00054FCC), meshlist_00054FB4, matlist_00054F60, LengthOfArray<Uint16>(meshlist_00054FB4), LengthOfArray<Uint16>(matlist_00054F60),{ 0, -1.345168f, 0 }, 3.202698f, NULL };

NJS_OBJECT object_0005509C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00055074, 0, -0.519708f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_000550D0[] = {
	{ { 0xB2B2B2B2 },{ 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_ONE }
};

Sint16 poly_000550E4[] = {
	4, 2, 0, 1, 8,
	0x8000u | 5, 8, 7, 0, 6, 5,
	0x8000u | 5, 5, 4, 0, 3, 2
};

NJS_TEX uv_00055108[] = {
	{ 214, 253 },
	{ 125, 33 },
	{ 251, 253 },
	{ 214, 253 },
	{ 214, 253 },
	{ 125, 253 },
	{ 125, 33 },
	{ 36, 253 },
	{ 0, 253 },
	{ 0, 253 },
	{ 36, 253 },
	{ 125, 33 },
	{ 125, 253 },
	{ 214, 253 }
};

NJS_MESHSET_SADX meshlist_00055140[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000550E4, NULL, NULL, NULL, uv_00055108, NULL }
};

NJS_VECTOR vertex_00055158[] = {
	{ 0.004442f, -0.00005f, 0 },
	{ -175.4678f, -55.02111f, 0 },
	{ -175.4678f, -38.9058f, -38.9058f },
	{ -175.4678f, -0.00002f, -55.02111f },
	{ -175.4678f, 38.9058f, -38.9058f },
	{ -175.4678f, 55.0211f, 0 },
	{ -175.4678f, 38.9058f, 38.9058f },
	{ -175.4678f, -0.00002f, 55.0211f },
	{ -175.4678f, -38.9058f, 38.9058f }
};

NJS_VECTOR normal_000551C4[] = {
	{ 1, 0, 0 },
	{ 0.299196f, -0.954192f, 0 },
	{ 0.299196f, -0.674715f, -0.674715f },
	{ 0.299196f, 0, -0.954192f },
	{ 0.299196f, 0.674715f, -0.674715f },
	{ 0.299196f, 0.954192f, 0 },
	{ 0.299196f, 0.674715f, 0.674715f },
	{ 0.299196f, 0, 0.954192f },
	{ 0.299196f, -0.674715f, 0.674715f }
};

NJS_MODEL_SADX attach_00055230 = { vertex_00055158, normal_000551C4, LengthOfArray<Sint32>(vertex_00055158), meshlist_00055140, matlist_000550D0, LengthOfArray<Uint16>(meshlist_00055140), LengthOfArray<Uint16>(matlist_000550D0),{ -87.7317f, -0.00004f, -0.00002f }, 104.5743f, NULL };

NJS_OBJECT object_00055258 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00055230, -0.035196f, 1.580654f, 0.000002f, 0, 0, 0x405F, 1, 1, 1, NULL, &object_0005509C };

NJS_MATERIAL matlist_0005528C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xCCB2B2B2 },{ 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_ONE }
};

Sint16 poly_000552C8[] = {
	5, 8, 5, 0, 2, 17,
	0x8000u | 5, 8, 11, 0, 14, 17
};

Sint16 poly_000552E0[] = {
	14, 9, 11, 12, 14, 15, 17, 18, 2, 3, 5, 6, 8, 9, 11
};

Sint16 poly_000552FE[] = {
	14, 6, 4, 3, 1, 18, 16, 15, 13, 12, 10, 9, 7, 6, 4,
	3, 4, 7, 10,
	3, 10, 13, 16,
	3, 16, 1, 4,
	3, 4, 10, 16
};

NJS_TEX uv_0005533C[] = {
	{ 61, 255 },
	{ 185, 255 },
	{ 123, 131 },
	{ 247, 131 },
	{ 185, 7 },
	{ 61, 255 },
	{ 0, 131 },
	{ 123, 131 },
	{ 61, 7 },
	{ 185, 7 }
};

NJS_TEX uv_00055364[] = {
	{ 61, 182 },
	{ 25, 224 },
	{ 0, 182 },
	{ 74, 224 },
	{ 61, 182 },
	{ 172, 224 },
	{ 185, 182 },
	{ 221, 224 },
	{ 247, 182 },
	{ 172, 224 },
	{ 185, 182 },
	{ 74, 224 },
	{ 61, 182 },
	{ 25, 224 }
};

NJS_TEX uv_0005539C[] = {
	{ 188, 254 },
	{ 251, 3 },
	{ 251, 254 },
	{ 188, 81 },
	{ 188, 254 },
	{ 62, 3 },
	{ 62, 254 },
	{ 0, 81 },
	{ 0, 254 },
	{ 62, 3 },
	{ 62, 254 },
	{ 188, 81 },
	{ 188, 254 },
	{ 251, 3 },
	{ 251, 3 },
	{ 188, 81 },
	{ 62, 3 },
	{ 62, 3 },
	{ 0, 81 },
	{ 62, 3 },
	{ 62, 3 },
	{ 188, 81 },
	{ 251, 3 },
	{ 251, 255 },
	{ 62, 255 },
	{ 62, 255 }
};

NJS_MESHSET_SADX meshlist_00055404[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000552E0, NULL, NULL, NULL, uv_00055364, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 5, poly_000552FE, NULL, NULL, NULL, uv_0005539C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000552C8, NULL, NULL, NULL, uv_0005533C, NULL }
};

NJS_VECTOR vertex_0005544C[] = {
	{ 0, -2.703429f, 0 },
	{ 1.546301f, 0.976781f, 2.621286f },
	{ 2.443155f, -2.128659f, 0 },
	{ 3.0926f, -1.32322f, 0 },
	{ 3.0926f, 2.012167f, 0 },
	{ 1.221577f, -2.128659f, -2.070816f },
	{ 1.5463f, -1.32322f, -2.621286f },
	{ 1.5463f, 0.976781f, -2.621286f },
	{ -1.221577f, -2.128659f, -2.070816f },
	{ -1.5463f, -1.32322f, -2.621286f },
	{ -1.5463f, 2.012167f, -2.621286f },
	{ -2.443155f, -2.128659f, 0 },
	{ -3.0926f, -1.32322f, 0 },
	{ -3.0926f, 0.976781f, 0 },
	{ -1.221577f, -2.128659f, 2.070816f },
	{ -1.5463f, -1.32322f, 2.621286f },
	{ -1.5463f, 2.012167f, 2.621286f },
	{ 1.221578f, -2.128659f, 2.070816f },
	{ 1.546301f, -1.32322f, 2.621286f }
};

NJS_VECTOR normal_00055530[] = {
	{ 0, -1, 0 },
	{ 0.465442f, 0.342636f, 0.816067f },
	{ 0.601679f, -0.7987379f, 0 },
	{ 0.952942f, -0.303154f, 0 },
	{ 0.772626f, 0.634861f, 0 },
	{ 0.298458f, -0.796378f, -0.526028f },
	{ 0.473701f, -0.300648f, -0.827779f },
	{ 0.465442f, 0.342636f, -0.816067f },
	{ -0.298458f, -0.796378f, -0.526028f },
	{ -0.473702f, -0.300648f, -0.827779f },
	{ -0.38435f, 0.635985f, -0.669177f },
	{ -0.601679f, -0.7987379f, 0 },
	{ -0.952942f, -0.303154f, 0 },
	{ -0.939144f, 0.343524f, 0 },
	{ -0.298458f, -0.796378f, 0.526028f },
	{ -0.473701f, -0.300648f, 0.827779f },
	{ -0.38435f, 0.635985f, 0.669177f },
	{ 0.298458f, -0.796378f, 0.526028f },
	{ 0.473702f, -0.300648f, 0.827779f }
};

NJS_MODEL_SADX attach_00055614 = { vertex_0005544C, normal_00055530, LengthOfArray<Sint32>(vertex_0005544C), meshlist_00055404, matlist_0005528C, LengthOfArray<Uint16>(meshlist_00055404), LengthOfArray<Uint16>(matlist_0005528C),{ 0, -0.345631f, 0 }, 4.375658f, NULL };

NJS_OBJECT object_0005563C = { NJD_EVAL_UNIT_SCL, &attach_00055614, 0.040581f, -2.612757f, 0, 0, 0, 0xFFFFE8C7, 1, 1, 1, &object_00055258, NULL };

NJS_MATERIAL matlist_00055670[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00055684[] = {
	3, 1, 4, 0,
	3, 2, 5, 3
};

NJS_TEX uv_00055694[] = {
	{ 251, 88 },
	{ 0, 254 },
	{ 22, 3 },
	{ 22, 3 },
	{ 0, 254 },
	{ 251, 88 }
};

NJS_MESHSET_SADX meshlist_000556AC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00055684, NULL, NULL, NULL, uv_00055694, NULL }
};

NJS_VECTOR vertex_000556C4[] = {
	{ 0.455515f, 1.819328f, -3.348385f },
	{ 5.126367f, 0.178602f, -3.91761f },
	{ 0.455515f, 1.819328f, 3.348385f },
	{ 5.126367f, 0.178602f, 3.91761f },
	{ 0, -3.044874f, -2.678708f },
	{ 0, -3.044874f, 2.678708f }
};

NJS_VECTOR normal_0005570C[] = {
	{ -0.161443f, -0.119746f, -0.97959f },
	{ -0.161443f, -0.119746f, -0.97959f },
	{ -0.161443f, -0.119746f, 0.97959f },
	{ -0.161443f, -0.119746f, 0.97959f },
	{ -0.161443f, -0.119746f, -0.97959f },
	{ -0.161443f, -0.119746f, 0.97959f }
};

NJS_MODEL_SADX attach_00055754 = { vertex_000556C4, normal_0005570C, LengthOfArray<Sint32>(vertex_000556C4), meshlist_000556AC, matlist_00055670, LengthOfArray<Uint16>(meshlist_000556AC), LengthOfArray<Uint16>(matlist_00055670),{ 2.563183f, -0.6127729f, 0 }, 4.681621f, NULL };

NJS_OBJECT object_0005577C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_00055754, -28.92546f, -29.18903f, 0, 0, 0, 0, 1, 1, 1, &object_0005563C, &object_00054F2C };

NJS_MATERIAL matlist_000557B0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_000557D8[] = {
	6, 11, 7, 8, 9, 11, 6,
	0x8000u | 6, 3, 0, 2, 5, 3, 1
};

Sint16 poly_000557F4[] = {
	4, 1, 4, 5, 0,
	4, 6, 10, 11, 7
};

NJS_TEX uv_00055808[] = {
	{ 250, 229 },
	{ 140, 134 },
	{ 160, 255 },
	{ 0, 114 },
	{ 250, 229 },
	{ 136, 3 },
	{ 0, 114 },
	{ 136, 3 },
	{ 160, 255 },
	{ 250, 229 },
	{ 0, 114 },
	{ 140, 134 }
};

NJS_TEX uv_00055838[] = {
	{ 7, 149 },
	{ 251, 25 },
	{ 250, 255 },
	{ 0, 3 },
	{ 0, 3 },
	{ 251, 25 },
	{ 250, 255 },
	{ 7, 149 }
};

NJS_MESHSET_SADX meshlist_00055858[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000557D8, NULL, NULL, NULL, uv_00055808, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000557F4, NULL, NULL, NULL, uv_00055838, NULL }
};

NJS_VECTOR vertex_00055888[] = {
	{ -3.769891f, -6.038944f, 10.04609f },
	{ -3.556717f, -8.509648f, 8.635647f },
	{ -2.382802f, -10.79258f, 14.90176f },
	{ -11.79206f, -8.136352f, 8.549542f },
	{ 2.960331f, -6.409732f, 8.092974f },
	{ 2.937348f, -10.31194f, 14.69654f },
	{ -3.769891f, -6.038945f, -10.04609f },
	{ -3.556718f, -8.50965f, -8.635649f },
	{ -2.382802f, -10.79258f, -14.90176f },
	{ -11.79206f, -8.136352f, -8.549544f },
	{ 2.960331f, -6.409733f, -8.092976f },
	{ 2.937349f, -10.31194f, -14.69655f }
};

NJS_VECTOR normal_00055918[] = {
	{ -0.156445f, 0.669284f, 0.7263499f },
	{ 0.113617f, -0.892197f, -0.437121f },
	{ -0.40488f, -0.633166f, 0.659676f },
	{ -0.416326f, -0.581085f, 0.699295f },
	{ 0.999265f, 0.031368f, 0.022014f },
	{ 0.353634f, -0.611058f, 0.708203f },
	{ -0.156445f, 0.669284f, -0.7263499f },
	{ 0.113617f, -0.892197f, 0.437121f },
	{ -0.40488f, -0.633166f, -0.659676f },
	{ -0.416326f, -0.581085f, -0.699295f },
	{ 0.999265f, 0.031368f, -0.022014f },
	{ 0.353636f, -0.611057f, -0.708203f }
};

NJS_MODEL_SADX attach_000559A8 = { vertex_00055888, normal_00055918, LengthOfArray<Sint32>(vertex_00055888), meshlist_00055858, matlist_000557B0, LengthOfArray<Uint16>(meshlist_00055858), LengthOfArray<Uint16>(matlist_000557B0),{ -4.415866f, -8.415764f, 0 }, 16.62741f, NULL };

NJS_OBJECT object_000559D0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000559A8, -0.00002f, -20, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0005577C };

NJS_MATERIAL matlist_00055A04[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00055A18[] = {
	0x8000u | 8, 1, 0, 4, 3, 7, 6, 1, 0,
	0x8000u | 8, 4, 5, 1, 2, 7, 8, 4, 5,
	0x8000u | 8, 10, 9, 13, 12, 16, 15, 10, 9,
	0x8000u | 8, 10, 11, 16, 17, 13, 14, 10, 11,
	0x8000u | 7, 19, 20, 58, 21, 18, 22, 59,
	19, 22, 27, 21, 26, 20, 25, 19, 24, 58, 25, 18, 26, 59, 27, 28, 22, 23, 59, 28,
	0x8000u | 8, 30, 29, 36, 35, 33, 32, 30, 29,
	0x8000u | 8, 33, 34, 36, 37, 30, 31, 33, 34,
	0x8000u | 8, 39, 38, 45, 44, 42, 41, 39, 38,
	0x8000u | 8, 39, 40, 42, 43, 45, 46, 39, 40,
	24, 53, 54, 49, 50, 47, 61, 56, 57, 52, 61, 51, 50, 55, 54, 60, 53, 48, 49, 60, 47, 55, 56, 51, 52
};

NJS_TEX uv_00055B14[] = {
	{ 52, 89 },
	{ 44, 254 },
	{ 61, 89 },
	{ 53, 254 },
	{ 60, 109 },
	{ 53, 254 },
	{ 52, 89 },
	{ 44, 254 },
	{ 61, 89 },
	{ 65, 8 },
	{ 52, 89 },
	{ 56, 12 },
	{ 60, 109 },
	{ 64, 36 },
	{ 61, 89 },
	{ 65, 8 },
	{ 142, 106 },
	{ 150, 254 },
	{ 150, 83 },
	{ 159, 254 },
	{ 152, 103 },
	{ 159, 254 },
	{ 142, 106 },
	{ 150, 254 },
	{ 142, 106 },
	{ 137, 29 },
	{ 152, 103 },
	{ 147, 31 },
	{ 150, 83 },
	{ 145, 3 },
	{ 142, 106 },
	{ 137, 29 },
	{ 251, 218 },
	{ 228, 254 },
	{ 226, 230 },
	{ 34, 254 },
	{ 37, 230 },
	{ 10, 196 },
	{ 15, 181 },
	{ 10, 196 },
	{ 10, 196 },
	{ 34, 254 },
	{ 34, 254 },
	{ 228, 254 },
	{ 228, 254 },
	{ 251, 218 },
	{ 251, 218 },
	{ 226, 230 },
	{ 228, 254 },
	{ 37, 230 },
	{ 34, 254 },
	{ 15, 181 },
	{ 10, 196 },
	{ 0, 116 },
	{ 10, 196 },
	{ 0, 116 },
	{ 15, 181 },
	{ 0, 116 },
	{ 52, 89 },
	{ 44, 254 },
	{ 60, 109 },
	{ 53, 254 },
	{ 61, 89 },
	{ 53, 254 },
	{ 52, 89 },
	{ 44, 254 },
	{ 61, 89 },
	{ 65, 8 },
	{ 60, 109 },
	{ 64, 36 },
	{ 52, 89 },
	{ 56, 12 },
	{ 61, 89 },
	{ 65, 8 },
	{ 142, 106 },
	{ 150, 254 },
	{ 152, 103 },
	{ 159, 254 },
	{ 150, 83 },
	{ 159, 254 },
	{ 142, 106 },
	{ 150, 254 },
	{ 142, 106 },
	{ 137, 29 },
	{ 150, 83 },
	{ 145, 3 },
	{ 152, 103 },
	{ 147, 31 },
	{ 142, 106 },
	{ 137, 29 },
	{ 251, 218 },
	{ 228, 254 },
	{ 228, 254 },
	{ 34, 254 },
	{ 37, 230 },
	{ 15, 181 },
	{ 10, 196 },
	{ 0, 116 },
	{ 0, 116 },
	{ 15, 181 },
	{ 10, 196 },
	{ 34, 254 },
	{ 34, 254 },
	{ 228, 254 },
	{ 226, 230 },
	{ 251, 218 },
	{ 251, 218 },
	{ 228, 254 },
	{ 226, 230 },
	{ 37, 230 },
	{ 34, 254 },
	{ 10, 196 },
	{ 10, 196 },
	{ 0, 116 }
};

NJS_MESHSET_SADX meshlist_00055CDC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 11, poly_00055A18, NULL, NULL, NULL, uv_00055B14, NULL }
};

NJS_VECTOR vertex_00055CF4[] = {
	{ -13.36294f, -4.53332f, -11.93848f },
	{ -12.17185f, 1.457086f, -9.450791f },
	{ -11.4574f, 4.255092f, -5.785697f },
	{ -11.86294f, -4.53332f, -12.80451f },
	{ -10.62524f, 1.451125f, -10.22804f },
	{ -9.875693f, 4.386605f, -6.514802f },
	{ -11.86294f, -4.53332f, -11.07246f },
	{ -10.81172f, 0.72084f, -8.673538f },
	{ -10.13237f, 3.381373f, -5.056587f },
	{ 4.189574f, -4.53332f, -11.93848f },
	{ 2.848632f, 0.8505099f, -9.450791f },
	{ 1.995234f, 3.60931f, -5.785697f },
	{ 5.689574f, -4.53332f, -12.80451f },
	{ 4.170266f, 1.653817f, -10.22804f },
	{ 3.274938f, 4.548167f, -6.514803f },
	{ 5.689574f, -4.53332f, -11.07246f },
	{ 4.393004f, 0.9337659f, -8.673539f },
	{ 3.581536f, 3.557019f, -5.056587f },
	{ -14.65798f, -3.664902f, -11.93489f },
	{ 20.79646f, -3.239295f, -11.06886f },
	{ 17.09541f, -4.548167f, -11.06886f },
	{ -15.10999f, -4.548167f, -11.06886f },
	{ -19.06968f, -2.423736f, -11.06886f },
	{ -20.79646f, 0.460065f, -11.06886f },
	{ 20.79646f, -3.239295f, -12.80091f },
	{ 17.09541f, -4.548167f, -12.80091f },
	{ -15.10999f, -4.548167f, -12.80091f },
	{ -19.06968f, -2.423736f, -12.80091f },
	{ -20.79646f, 0.460065f, -12.80091f },
	{ -13.36294f, -4.53332f, 11.93848f },
	{ -12.17185f, 1.457086f, 9.450791f },
	{ -11.4574f, 4.255092f, 5.785697f },
	{ -11.86294f, -4.53332f, 12.80451f },
	{ -10.62524f, 1.451125f, 10.22804f },
	{ -9.875693f, 4.386605f, 6.514802f },
	{ -11.86294f, -4.53332f, 11.07246f },
	{ -10.81172f, 0.72084f, 8.673538f },
	{ -10.13237f, 3.381373f, 5.056587f },
	{ 4.189574f, -4.53332f, 11.93848f },
	{ 2.848632f, 0.8505099f, 9.450791f },
	{ 1.995234f, 3.60931f, 5.785697f },
	{ 5.689574f, -4.53332f, 12.80451f },
	{ 4.170266f, 1.653817f, 10.22804f },
	{ 3.274938f, 4.548167f, 6.514803f },
	{ 5.689574f, -4.53332f, 11.07246f },
	{ 4.393004f, 0.9337659f, 8.673539f },
	{ 3.581536f, 3.557019f, 5.056587f },
	{ -14.65798f, -3.664902f, 11.93489f },
	{ 20.79646f, -3.239295f, 11.06886f },
	{ 17.09541f, -4.548167f, 11.06886f },
	{ -15.10999f, -4.548167f, 11.06886f },
	{ -19.06968f, -2.423736f, 11.06886f },
	{ -20.79646f, 0.460065f, 11.06886f },
	{ 20.79646f, -3.239295f, 12.80091f },
	{ 17.09541f, -4.548167f, 12.80091f },
	{ -15.10999f, -4.548167f, 12.80091f },
	{ -19.06968f, -2.423736f, 12.80091f },
	{ -20.79646f, 0.460065f, 12.80091f },
	{ 16.68426f, -3.664902f, -11.93489f },
	{ -18.16015f, -1.902074f, -11.93489f },
	{ 16.68426f, -3.664902f, 11.93489f },
	{ -18.16015f, -1.902074f, 11.93489f }
};

NJS_VECTOR normal_00055FDC[] = {
	{ -0.9377519f, 0.285898f, -0.197189f },
	{ -0.942553f, 0.321203f, -0.091768f },
	{ -0.989808f, 0.10816f, 0.092637f },
	{ 0.356723f, 0.310895f, -0.8809609f },
	{ 0.547621f, 0.418373f, -0.72462f },
	{ 0.703392f, 0.481642f, -0.522744f },
	{ 0.454137f, -0.418543f, 0.786499f },
	{ 0.434854f, -0.618629f, 0.654371f },
	{ 0.239047f, -0.7937199f, 0.559343f },
	{ -0.95885f, -0.175126f, -0.223466f },
	{ -0.976949f, -0.184484f, -0.107405f },
	{ -0.900369f, -0.425151f, 0.092637f },
	{ 0.421711f, 0.428706f, -0.798981f },
	{ 0.30946f, 0.615337f, -0.72498f },
	{ 0.34791f, 0.778265f, -0.522744f },
	{ 0.713848f, -0.151364f, 0.683747f },
	{ 0.7032149f, -0.338183f, 0.625397f },
	{ 0.618661f, -0.551719f, 0.559343f },
	{ 0.209453f, 0.977818f, 0.000883f },
	{ 0.788895f, 0.18259f, 0.5867749f },
	{ 0.065906f, -0.474733f, 0.877659f },
	{ -0.104212f, -0.499722f, 0.859894f },
	{ -0.349811f, -0.403014f, 0.845702f },
	{ -0.50591f, 0.6244259f, 0.595104f },
	{ 0.788895f, 0.182591f, -0.5867749f },
	{ 0.065906f, -0.474734f, -0.8776579f },
	{ -0.114226f, -0.494595f, -0.861585f },
	{ -0.356825f, -0.398247f, -0.84503f },
	{ -0.505909f, 0.6244259f, -0.595104f },
	{ -0.9377519f, 0.285898f, 0.197189f },
	{ -0.942553f, 0.321203f, 0.091768f },
	{ -0.989808f, 0.10816f, -0.092637f },
	{ 0.356723f, 0.310895f, 0.8809609f },
	{ 0.547621f, 0.418373f, 0.72462f },
	{ 0.703392f, 0.481642f, 0.522744f },
	{ 0.454137f, -0.418543f, -0.786499f },
	{ 0.434854f, -0.618629f, -0.654371f },
	{ 0.239047f, -0.7937199f, -0.559343f },
	{ -0.95885f, -0.175126f, 0.223466f },
	{ -0.976949f, -0.184484f, 0.107405f },
	{ -0.900369f, -0.425151f, -0.092637f },
	{ 0.421711f, 0.428706f, 0.798981f },
	{ 0.30946f, 0.615337f, 0.72498f },
	{ 0.34791f, 0.778265f, 0.522744f },
	{ 0.713848f, -0.151364f, -0.683747f },
	{ 0.7032149f, -0.338183f, -0.625397f },
	{ 0.618661f, -0.551719f, -0.559343f },
	{ 0.209453f, 0.977818f, -0.000883f },
	{ 0.788895f, 0.182591f, -0.5867749f },
	{ 0.065906f, -0.474733f, -0.877659f },
	{ -0.104212f, -0.499722f, -0.859894f },
	{ -0.349811f, -0.403014f, -0.845702f },
	{ -0.50591f, 0.6244259f, -0.595104f },
	{ 0.788895f, 0.182591f, 0.5867749f },
	{ 0.065906f, -0.474734f, 0.8776579f },
	{ -0.114226f, -0.494595f, 0.861585f },
	{ -0.356825f, -0.398247f, 0.84503f },
	{ -0.505909f, 0.6244259f, 0.595104f },
	{ -0.124198f, 0.992257f, 0 },
	{ 0.627969f, 0.778237f, 0.001164f },
	{ -0.124198f, 0.992257f, 0 },
	{ 0.627969f, 0.778237f, -0.001164f }
};

NJS_MODEL_SADX attach_000562C4 = { vertex_00055CF4, normal_00055FDC, LengthOfArray<Sint32>(vertex_00055CF4), meshlist_00055CDC, matlist_00055A04, LengthOfArray<Uint16>(meshlist_00055CDC), LengthOfArray<Uint16>(matlist_00055A04),{ 0 }, 24.42229f, NULL };

NJS_OBJECT object_000562EC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000562C4, -5.189579f, -33.93528f, 0, 0, 0, 0, 1, 1, 1, NULL, &object_000559D0 };

NJS_MATERIAL matlist_00056320[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 22, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00056384[] = {
	3, 6, 15, 12,
	3, 6, 5, 15,
	3, 6, 4, 5,
	3, 6, 9, 4,
	3, 18, 17, 16,
	3, 18, 27, 17,
	3, 18, 25, 27,
	3, 18, 16, 21,
	3, 18, 23, 25,
	3, 18, 21, 23,
	3, 41, 44, 35,
	3, 44, 34, 35,
	3, 34, 33, 35,
	3, 33, 38, 35,
	3, 45, 46, 47,
	3, 46, 56, 47,
	3, 56, 54, 47,
	3, 50, 45, 47,
	3, 54, 52, 47,
	3, 52, 50, 47
};

Sint16 poly_00056424[] = {
	0x8000u | 10, 8, 9, 2, 4, 3, 5, 14, 15, 11, 12,
	3, 41, 40, 44,
	3, 31, 37, 38,
	8, 38, 33, 31, 34, 32, 44, 43, 40
};

Sint16 poly_0005645C[] = {
	4, 0, 1, 2, 3,
	4, 13, 10, 14, 11,
	4, 1, 13, 3, 14,
	4, 7, 0, 8, 2,
	4, 31, 32, 29, 30,
	4, 43, 40, 42, 39,
	4, 32, 43, 30, 42,
	4, 37, 31, 36, 29
};

Sint16 poly_000564AC[] = {
	0x8000u | 5, 7, 0, 10, 1, 13,
	0x8000u | 5, 30, 29, 42, 36, 39
};

Sint16 poly_000564C4[] = {
	4, 16, 17, 19, 20,
	4, 27, 25, 28, 26,
	4, 17, 27, 20, 28,
	4, 21, 16, 22, 19,
	4, 25, 23, 26, 24,
	4, 23, 21, 24, 22,
	4, 48, 49, 45, 46,
	4, 57, 55, 56, 54,
	4, 49, 57, 46, 56,
	4, 51, 48, 50, 45,
	4, 55, 53, 54, 52,
	4, 53, 51, 52, 50
};

NJS_TEX uv_0005653C[] = {
	{ 125, 9 },
	{ 226, 253 },
	{ 16, 253 },
	{ 125, 9 },
	{ 226, 253 },
	{ 16, 253 },
	{ 125, 9 },
	{ 226, 253 },
	{ 16, 253 },
	{ 125, 9 },
	{ 226, 253 },
	{ 16, 253 },
	{ 125, 9 },
	{ 226, 253 },
	{ 16, 253 },
	{ 125, 9 },
	{ 226, 253 },
	{ 16, 253 },
	{ 125, 9 },
	{ 226, 253 },
	{ 16, 253 },
	{ 125, 9 },
	{ 226, 253 },
	{ 16, 253 },
	{ 125, 9 },
	{ 226, 253 },
	{ 16, 253 },
	{ 125, 9 },
	{ 226, 253 },
	{ 16, 253 },
	{ 226, 253 },
	{ 16, 253 },
	{ 125, 9 },
	{ 226, 253 },
	{ 16, 253 },
	{ 125, 9 },
	{ 226, 253 },
	{ 16, 253 },
	{ 125, 9 },
	{ 226, 253 },
	{ 16, 253 },
	{ 125, 9 },
	{ 226, 253 },
	{ 16, 253 },
	{ 125, 9 },
	{ 226, 253 },
	{ 16, 253 },
	{ 125, 9 },
	{ 226, 253 },
	{ 16, 253 },
	{ 125, 9 },
	{ 226, 253 },
	{ 16, 253 },
	{ 125, 9 },
	{ 226, 253 },
	{ 16, 253 },
	{ 125, 9 },
	{ 226, 253 },
	{ 16, 253 },
	{ 125, 9 }
};

NJS_TEX uv_0005662C[] = {
	{ 34, 52 },
	{ 0, 81 },
	{ 34, 3 },
	{ 0, 38 },
	{ 34, 3 },
	{ 0, 38 },
	{ 34, 123 },
	{ 0, 123 },
	{ 34, 254 },
	{ 0, 209 },
	{ 0, 209 },
	{ 34, 254 },
	{ 0, 123 },
	{ 34, 3 },
	{ 34, 52 },
	{ 0, 81 },
	{ 0, 81 },
	{ 0, 38 },
	{ 34, 3 },
	{ 0, 38 },
	{ 34, 3 },
	{ 0, 123 },
	{ 34, 123 },
	{ 34, 254 }
};

NJS_TEX uv_0005668C[] = {
	{ 251, 3 },
	{ 251, 255 },
	{ 0, 3 },
	{ 0, 255 },
	{ 251, 3 },
	{ 251, 255 },
	{ 0, 3 },
	{ 0, 255 },
	{ 251, 3 },
	{ 251, 255 },
	{ 0, 3 },
	{ 0, 255 },
	{ 251, 3 },
	{ 251, 255 },
	{ 0, 3 },
	{ 0, 255 },
	{ 0, 3 },
	{ 0, 255 },
	{ 251, 3 },
	{ 251, 255 },
	{ 0, 3 },
	{ 0, 255 },
	{ 251, 3 },
	{ 251, 255 },
	{ 0, 3 },
	{ 0, 255 },
	{ 251, 3 },
	{ 251, 255 },
	{ 0, 3 },
	{ 0, 255 },
	{ 251, 3 },
	{ 251, 255 }
};

NJS_TEX uv_0005670C[] = {
	{ 246, 9 },
	{ 245, 254 },
	{ 0, 8 },
	{ 0, 255 },
	{ 246, 9 },
	{ 245, 254 },
	{ 0, 8 },
	{ 0, 255 },
	{ 246, 9 },
	{ 245, 254 },
	{ 0, 8 },
	{ 0, 255 },
	{ 246, 9 },
	{ 245, 254 },
	{ 0, 8 },
	{ 0, 255 },
	{ 246, 9 },
	{ 245, 254 },
	{ 0, 8 },
	{ 0, 255 },
	{ 246, 9 },
	{ 245, 254 },
	{ 0, 8 },
	{ 0, 255 },
	{ 0, 8 },
	{ 0, 255 },
	{ 246, 9 },
	{ 245, 254 },
	{ 0, 8 },
	{ 0, 255 },
	{ 246, 9 },
	{ 245, 254 },
	{ 0, 8 },
	{ 0, 255 },
	{ 246, 9 },
	{ 245, 254 },
	{ 0, 8 },
	{ 0, 255 },
	{ 246, 9 },
	{ 245, 254 },
	{ 0, 8 },
	{ 0, 255 },
	{ 246, 9 },
	{ 245, 254 },
	{ 0, 8 },
	{ 0, 255 },
	{ 246, 9 },
	{ 245, 254 }
};

NJS_MESHSET_SADX meshlist_000567CC_C0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 20, poly_00056384, NULL, NULL, NULL, uv_0005653C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_00056424, NULL, NULL, NULL, uv_0005662C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 8, poly_0005645C, NULL, NULL, NULL, uv_0005668C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_000564AC, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 12, poly_000564C4, NULL, NULL, NULL, uv_0005670C, NULL }
};

NJS_VECTOR vertex_00056844[] = {
	{ 7.302187f, 15.22347f, -3.096573f },
	{ 7.291634f, 15.22347f, -7.259633f },
	{ -3.371593f, 15.22347f, -3.096572f },
	{ -3.371594f, 15.22347f, -7.259633f },
	{ -5.773996f, 14.19891f, -3.688102f },
	{ -5.773996f, 14.19891f, -6.668103f },
	{ -4.465473f, 11.61815f, -5.178102f },
	{ 6.495928f, 13.82994f, 0 },
	{ -3.330559f, 13.7528f, 0.000001f },
	{ -5.773996f, 12.87742f, -2.198102f },
	{ 6.719154f, 7.674181f, -7.67485f },
	{ -3.371593f, 7.674181f, -7.67485f },
	{ -5.773996f, 9.037398f, -6.668104f },
	{ 6.719154f, 11.61816f, -9.341164f },
	{ -3.371593f, 11.61816f, -9.341164f },
	{ -5.773996f, 11.61815f, -8.158104f },
	{ 11.68574f, 13.76071f, -5.91406f },
	{ 11.03182f, 14.81207f, -7.768325f },
	{ 8.354136f, 12.45926f, -6.817547f },
	{ 6.367556f, 13.30381f, -4.549334f },
	{ 5.836431f, 14.15774f, -6.055386f },
	{ 11.79905f, 11.53429f, -5.875893f },
	{ 6.459581f, 11.49549f, -4.518334f },
	{ 11.25842f, 10.35922f, -7.691991f },
	{ 6.020481f, 10.54109f, -5.993387f },
	{ 10.6045f, 11.41058f, -9.546254f },
	{ 5.489355f, 11.39501f, -7.499438f },
	{ 10.49119f, 13.637f, -9.584422f },
	{ 5.39733f, 13.20334f, -7.530437f },
	{ 7.302187f, 15.22347f, 3.096572f },
	{ 7.291634f, 15.22347f, 7.259633f },
	{ -3.371593f, 15.22347f, 3.096572f },
	{ -3.371594f, 15.22347f, 7.259633f },
	{ -5.773996f, 14.19891f, 3.688102f },
	{ -5.773996f, 14.19891f, 6.668102f },
	{ -4.465473f, 11.61815f, 5.178102f },
	{ 6.495928f, 13.82994f, 0 },
	{ -3.330559f, 13.7528f, -0.00001f },
	{ -5.773996f, 12.87742f, 2.198102f },
	{ 6.719154f, 7.674181f, 7.67485f },
	{ -3.371593f, 7.674181f, 7.67485f },
	{ -5.773996f, 9.037398f, 6.668104f },
	{ 6.719154f, 11.61816f, 9.341162f },
	{ -3.371593f, 11.61816f, 9.341162f },
	{ -5.773996f, 11.61815f, 8.158101f },
	{ 11.68574f, 13.76071f, 5.914061f },
	{ 11.03182f, 14.81207f, 7.768325f },
	{ 8.354136f, 12.45926f, 6.817548f },
	{ 6.367557f, 13.30381f, 4.549334f },
	{ 5.836431f, 14.15774f, 6.055386f },
	{ 11.79905f, 11.53429f, 5.875894f },
	{ 6.459582f, 11.49549f, 4.518335f },
	{ 11.25842f, 10.35922f, 7.691992f },
	{ 6.020481f, 10.54109f, 5.993387f },
	{ 10.6045f, 11.41058f, 9.546259f },
	{ 5.489355f, 11.39501f, 7.499439f },
	{ 10.49119f, 13.63701f, 9.584422f },
	{ 5.39733f, 13.20334f, 7.530438f }
};

NJS_VECTOR normal_00056AFC[] = {
	{ 0.737479f, 0.6324289f, 0.23698f },
	{ 0.693351f, 0.6283489f, -0.352762f },
	{ -0.244534f, 0.939245f, 0.240876f },
	{ -0.212296f, 0.846285f, -0.488603f },
	{ -0.883059f, 0.445223f, 0.148265f },
	{ -0.859401f, 0.442801f, -0.255651f },
	{ -0.96449f, -0.191239f, 0.182172f },
	{ 0.5415649f, 0.714658f, 0.442685f },
	{ -0.250165f, 0.87626f, 0.411808f },
	{ -0.87102f, 0.424985f, 0.246399f },
	{ 0.620239f, -0.439514f, -0.649716f },
	{ -0.246521f, -0.395568f, -0.884734f },
	{ -0.881231f, -0.190873f, -0.432434f },
	{ 0.62051f, -0.067977f, -0.781247f },
	{ -0.248066f, 0.05427f, -0.967222f },
	{ -0.879979f, 0.039612f, -0.473359f },
	{ 0.919047f, 0.33501f, 0.207655f },
	{ 0.7523f, 0.6030999f, -0.26517f },
	{ 0.949599f, 0.043002f, -0.310505f },
	{ 0.169604f, 0.522231f, 0.835769f },
	{ -0.122837f, 0.992405f, 0.006529f },
	{ 0.947938f, -0.232714f, 0.217387f },
	{ 0.220274f, -0.473443f, 0.852837f },
	{ 0.810082f, -0.532349f, -0.245706f },
	{ -0.021497f, -0.998942f, 0.040666f },
	{ 0.643336f, -0.264259f, -0.71853f },
	{ -0.313938f, -0.528767f, -0.788574f },
	{ 0.614445f, 0.303465f, -0.728263f },
	{ -0.364607f, 0.466907f, -0.8056419f },
	{ 0.737479f, 0.6324289f, -0.23698f },
	{ 0.693351f, 0.6283489f, 0.352762f },
	{ -0.244534f, 0.939245f, -0.240876f },
	{ -0.212296f, 0.846285f, 0.488603f },
	{ -0.883059f, 0.445224f, -0.148265f },
	{ -0.859401f, 0.442801f, 0.255651f },
	{ -0.96449f, -0.191239f, -0.182172f },
	{ 0.5415649f, 0.714658f, -0.442685f },
	{ -0.250165f, 0.87626f, -0.411808f },
	{ -0.87102f, 0.424985f, -0.246399f },
	{ 0.620239f, -0.439514f, 0.649717f },
	{ -0.215974f, -0.380001f, 0.899419f },
	{ -0.855343f, -0.174847f, 0.487665f },
	{ 0.62051f, -0.067977f, 0.781247f },
	{ -0.229134f, 0.060661f, 0.971503f },
	{ -0.863683f, 0.051412f, 0.501406f },
	{ 0.919047f, 0.33501f, -0.207655f },
	{ 0.7523f, 0.6030999f, 0.26517f },
	{ 0.949599f, 0.043002f, 0.310505f },
	{ 0.169604f, 0.522231f, -0.835769f },
	{ -0.122836f, 0.992405f, -0.006529f },
	{ 0.947938f, -0.232714f, -0.217387f },
	{ 0.220274f, -0.473443f, -0.852837f },
	{ 0.810083f, -0.532348f, 0.245706f },
	{ -0.021497f, -0.998942f, -0.040666f },
	{ 0.643336f, -0.264259f, 0.718531f },
	{ -0.313938f, -0.528766f, 0.788574f },
	{ 0.614445f, 0.303465f, 0.7282619f },
	{ -0.364607f, 0.466907f, 0.8056419f }
};

NJS_MODEL_SADX attach_00056DB4 = { vertex_00056844, normal_00056AFC, LengthOfArray<Sint32>(vertex_00056844), meshlist_000567CC_C0, matlist_00056320, LengthOfArray<Uint16>(meshlist_000567CC_C0), LengthOfArray<Uint16>(matlist_00056320),{ 3.012526f, 11.44883f, 0 }, 13.00247f, NULL };

NJS_OBJECT object_00056DDC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00056DB4, -0.00002f, -20, 0, 0, 0, 0, 1, 1, 1, NULL, &object_000562EC };

NJS_MATERIAL matlist_00056E10[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 21, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFF000000 },{ 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00056E4C[] = {
	4, 2, 1, 0, 4,
	4, 5, 2, 3, 0,
	4, 1, 5, 4, 3
};

Sint16 poly_00056E6A[] = {
	8, 8, 9, 7, 6, 11, 10, 13, 12,
	8, 18, 19, 17, 16, 21, 20, 23, 22,
	8, 32, 33, 30, 31, 26, 27, 29, 28
};

Sint16 poly_00056EA0[] = {
	4, 14, 15, 12, 13,
	4, 24, 25, 22, 23,
	4, 34, 35, 32, 33
};

NJS_TEX uv_00056EC0[] = {
	{ 247, 7 },
	{ 0, 7 },
	{ 247, 255 },
	{ 0, 255 },
	{ 247, 7 },
	{ 0, 7 },
	{ 247, 255 },
	{ 0, 255 },
	{ 247, 7 },
	{ 0, 7 },
	{ 247, 255 },
	{ 0, 255 }
};

NJS_TEX uv_00056EF0[] = {
	{ 127, 140 },
	{ 125, 140 },
	{ 144, 84 },
	{ 142, 128 },
	{ 163, 3 },
	{ 158, 48 },
	{ 244, 83 },
	{ 239, 127 },
	{ 125, 140 },
	{ 123, 140 },
	{ 108, 84 },
	{ 106, 128 },
	{ 92, 3 },
	{ 87, 48 },
	{ 11, 83 },
	{ 6, 127 },
	{ 130, 127 },
	{ 120, 83 },
	{ 130, 48 },
	{ 120, 3 },
	{ 127, 128 },
	{ 123, 84 },
	{ 127, 140 },
	{ 123, 140 }
};

NJS_MESHSET_SADX meshlist_00056F50[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00056E4C, NULL, NULL, NULL, uv_00056EC0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_00056E6A, NULL, NULL, NULL, uv_00056EF0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_00056EA0, NULL, NULL, NULL, NULL, NULL }
};

NJS_VECTOR vertex_00056F98[] = {
	{ 0.987081f, 17.88075f, -0.569891f },
	{ -0.00002f, 21.33589f, 1.139785f },
	{ 0.987081f, 21.33589f, -0.569891f },
	{ -0.987084f, 17.88075f, -0.569892f },
	{ -0.00002f, 17.88075f, 1.139785f },
	{ -0.987084f, 21.33589f, -0.569892f },
	{ 8.72943f, 19.97432f, 6.516031f },
	{ 10.00776f, 20.71098f, 4.301901f },
	{ 0.9870819f, 19.78177f, -0.569891f },
	{ -0.00001f, 19.78177f, 1.139785f },
	{ 17.34489f, 21.31147f, 12.78884f },
	{ 19.74789f, 22.04813f, 8.626718f },
	{ 59.56483f, 19.99869f, 37.16454f },
	{ 61.96782f, 20.73535f, 33.00242f },
	{ 64.33558f, 20.56131f, 38.45964f },
	{ 65.47478f, 21.29797f, 36.48648f },
	{ -10.00776f, 19.97432f, 4.301894f },
	{ -8.729435f, 20.71098f, 6.516027f },
	{ -0.00001f, 19.78177f, 1.139785f },
	{ -0.987083f, 19.78177f, -0.569892f },
	{ -19.7479f, 21.31147f, 8.626703f },
	{ -17.3449f, 22.04813f, 12.78882f },
	{ -61.96785f, 19.99869f, 33.00238f },
	{ -59.56485f, 20.73535f, 37.16449f },
	{ -65.47481f, 20.56131f, 36.48643f },
	{ -64.3356f, 21.29797f, 38.45958f },
	{ 1.278334f, 19.97432f, -10.81792f },
	{ -1.278327f, 20.71098f, -10.81792f },
	{ -0.987083f, 19.78177f, -0.569892f },
	{ 0.9870819f, 19.78177f, -0.569891f },
	{ 2.403006f, 21.31147f, -21.41554f },
	{ -2.402992f, 22.04813f, -21.41554f },
	{ 2.403025f, 19.99869f, -70.1669f },
	{ -2.402975f, 20.73535f, -70.1669f },
	{ 1.139227f, 20.56131f, -74.94604f },
	{ -1.139173f, 21.29797f, -74.94604f }
};

NJS_VECTOR normal_00057148[] = {
	{ 0.866026f, 0, -0.5f },
	{ 0, 0, 1 },
	{ 0.866026f, 0, -0.5f },
	{ -0.866025f, 0, -0.5f },
	{ 0, 0, 1 },
	{ -0.866025f, 0, -0.5f },
	{ -0.18817f, 0.977387f, 0.09647299f },
	{ -0.189203f, 0.977187f, 0.09648f },
	{ -0.153246f, 0.983498f, 0.096166f },
	{ -0.153246f, 0.983498f, 0.096166f },
	{ -0.134918f, 0.983351f, 0.121725f },
	{ -0.134046f, 0.98344f, 0.121973f },
	{ -0.099062f, 0.9844519f, 0.145058f },
	{ -0.099612f, 0.984395f, 0.145063f },
	{ -0.154701f, 0.977211f, 0.14535f },
	{ -0.154701f, 0.977211f, 0.14535f },
	{ 0.010537f, 0.977387f, -0.211196f },
	{ 0.011047f, 0.977187f, -0.212094f },
	{ -0.006659f, 0.983498f, -0.180798f },
	{ -0.006659f, 0.983498f, -0.180798f },
	{ -0.037958f, 0.983351f, -0.177705f },
	{ -0.038608f, 0.98344f, -0.177074f },
	{ -0.076093f, 0.9844519f, -0.158319f },
	{ -0.075822f, 0.984395f, -0.158798f },
	{ -0.048527f, 0.977211f, -0.20665f },
	{ -0.048527f, 0.977211f, -0.20665f },
	{ 0.177633f, 0.977387f, 0.114723f },
	{ 0.178156f, 0.977187f, 0.115614f },
	{ 0.159905f, 0.983498f, 0.08463199f },
	{ 0.159905f, 0.983498f, 0.08463199f },
	{ 0.172876f, 0.983351f, 0.05598f },
	{ 0.172654f, 0.98344f, 0.055101f },
	{ 0.175155f, 0.9844519f, 0.013261f },
	{ 0.175434f, 0.984395f, 0.013735f },
	{ 0.203227f, 0.977211f, 0.061299f },
	{ 0.203227f, 0.977211f, 0.061299f }
};

NJS_MODEL_SADX attach_000572F8 = { vertex_00056F98, normal_00057148, LengthOfArray<Sint32>(vertex_00056F98), meshlist_00056F50, matlist_00056E10, LengthOfArray<Uint16>(meshlist_00056F50), LengthOfArray<Uint16>(matlist_00056E10),{ -0.00011f, 19.96444f, -18.2432f }, 89.44022f, NULL };

NJS_OBJECT object_00057320 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000572F8, 0, 0, 0, 0, 0x4AAA, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00057354[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00057368[] = {
	8, 0, 1, 2, 4, 0, 3, 1, 4
};

NJS_TEX uv_0005737C[] = {
	{ 251, 255 },
	{ 83, 3 },
	{ 58, 255 },
	{ 0, 255 },
	{ 251, 255 },
	{ 58, 255 },
	{ 83, 3 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_0005739C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00057368, NULL, NULL, NULL, uv_0005737C, NULL }
};

NJS_VECTOR vertex_000573B4[] = {
	{ 8.595401f, 21.24386f, -0.00001f },
	{ -0.00002f, 23.83391f, 0 },
	{ -1.302589f, 21.24386f, 1.552643f },
	{ -1.302589f, 21.24386f, -1.552643f },
	{ -4.297699f, 21.24386f, 0 }
};

NJS_VECTOR normal_000573F0[] = {
	{ 0.99519f, -0.09796599f, 0.000004f },
	{ -0.023715f, 0.999719f, 0 },
	{ -0.196165f, -0.4036f, 0.893659f },
	{ -0.196165f, -0.4036f, -0.893659f },
	{ -0.982355f, -0.187026f, 0 }
};

NJS_MODEL_SADX attach_0005742C = { vertex_000573B4, normal_000573F0, LengthOfArray<Sint32>(vertex_000573B4), meshlist_0005739C, matlist_00057354, LengthOfArray<Uint16>(meshlist_0005739C), LengthOfArray<Uint16>(matlist_00057354),{ 2.148851f, 22.53888f, 0 }, 6.63089f, NULL };

NJS_OBJECT object_00057454 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_0005742C, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_00057320, NULL };

NJS_MATERIAL matlist_00057488[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0005749C[] = {
	12, 10, 0, 3, 1, 2, 4, 11, 9, 8, 7, 6, 5,
	0x8000u | 5, 2, 3, 11, 10, 8,
	0x8000u | 5, 9, 7, 4, 5, 1
};

NJS_TEX uv_000574D0[] = {
	{ 79, 254 },
	{ 0, 249 },
	{ 19, 110 },
	{ 0, 249 },
	{ 19, 110 },
	{ 79, 3 },
	{ 79, 3 },
	{ 236, 137 },
	{ 251, 254 },
	{ 236, 137 },
	{ 251, 254 },
	{ 79, 254 },
	{ 19, 110 },
	{ 19, 110 },
	{ 79, 3 },
	{ 79, 254 },
	{ 251, 254 },
	{ 236, 137 },
	{ 236, 137 },
	{ 79, 3 },
	{ 79, 254 },
	{ 0, 249 }
};

NJS_MESHSET_SADX meshlist_00057528[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0005749C, NULL, NULL, NULL, uv_000574D0, NULL }
};

NJS_VECTOR vertex_00057540[] = {
	{ -6.267371f, 13.33249f, 0.000254f },
	{ -6.267371f, 13.33249f, 0.000254f },
	{ -4.893852f, 16.4736f, 0.000254f },
	{ -4.893851f, 16.4736f, 0.000254f },
	{ -0.731725f, 18.86023f, 1.098002f },
	{ -0.731725f, 13.21054f, 1.800003f },
	{ 11.14554f, 13.21054f, 0.000254f },
	{ 10.13789f, 15.86384f, 0.000254f },
	{ 11.14554f, 13.21054f, 0.000254f },
	{ 10.13789f, 15.86383f, 0.000254f },
	{ -0.731725f, 13.21054f, -1.800003f },
	{ -0.731725f, 18.86023f, -1.098002f }
};

NJS_VECTOR normal_000575D0[] = {
	{ -0.229083f, 0.092545f, -0.968998f },
	{ -0.2319f, 0.09069999f, -0.968502f },
	{ -0.548784f, 0.624654f, 0.555557f },
	{ -0.253718f, 0.251872f, -0.93391f },
	{ -0.116545f, 0.770013f, 0.6272939f },
	{ -0.08444899f, 0.116197f, 0.98963f },
	{ -0.02397f, 0.025307f, -0.999392f },
	{ 0.282001f, 0.71007f, 0.6451949f },
	{ 0.079524f, 0.069258f, -0.994424f },
	{ 0.07895599f, 0.269839f, -0.959663f },
	{ -0.087997f, 0.113474f, -0.9896359f },
	{ -0.119832f, 0.7677889f, -0.629396f }
};

NJS_MODEL_SADX attach_00057660 = { vertex_00057540, normal_000575D0, LengthOfArray<Sint32>(vertex_00057540), meshlist_00057528, matlist_00057488, LengthOfArray<Uint16>(meshlist_00057528), LengthOfArray<Uint16>(matlist_00057488),{ 2.439087f, 16.03538f, 0 }, 8.890579f, NULL };

NJS_OBJECT object_00057688 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_00057660, -0.00002f, -20, 0, 0, 0, 0, 1, 1, 1, &object_00057454, &object_00056DDC };

NJS_MATERIAL matlist_000576BC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 14, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00057734X[] = {
	4, 21, 61, 25, 8,
	6, 25, 66, 21, 9, 20, 18,
	6, 9, 65, 18, 22, 60, 10
};

Sint16 poly_0005775A[] = {
	6, 5, 6, 62, 4, 65, 22,
	0x8000u | 6, 2, 14, 13, 36, 63, 64,
	3, 18, 19, 20,
	0x8000u | 9, 20, 21, 19, 61, 7, 8, 0, 3, 1,
	6, 25, 5, 66, 62, 9, 65,
	10, 31, 1, 12, 0, 11, 7, 10, 19, 60, 18,
	0x8000u | 8, 64, 29, 63, 31, 13, 1, 2, 3
};

Sint16 poly_000577C8[] = {
	0x8000u | 6, 28, 27, 15, 17, 6, 5,
	0x8000u | 8, 58, 35, 57, 37, 40, 38, 41, 42,
	0x8000u | 6, 41, 32, 40, 30, 57, 58,
	11, 32, 33, 41, 34, 42, 24, 28, 16, 15, 4, 6,
	3, 42, 39, 38,
	8, 5, 25, 17, 26, 27, 39, 28, 42,
	6, 4, 16, 22, 24, 23, 34,
	6, 59, 51, 53, 57, 59, 52
};

Sint16 poly_00057844[] = {
	4, 59, 54, 56, 55,
	3, 64, 0, 63,
	3, 59, 56, 55
};

Sint16 poly_0005785E[] = {
	0x8000u | 6, 33, 34, 11, 23, 10, 22,
	8, 14, 38, 2, 39, 3, 26, 8, 25,
	0x8000u | 14, 38, 37, 14, 35, 36, 58, 64, 30, 29, 32, 31, 33, 12, 11,
	4, 52, 58, 59, 51
};

Sint16 poly_000578A6[] = {
	4, 46, 45, 44, 43,
	4, 48, 47, 50, 49
};

NJS_TEX uv_000578BC[] = {
	{ 122, 33 },
	{ 153, 26 },
	{ 152, 255 },
	{ 251, 3 },
	{ 152, 255 },
	{ 16, 255 },
	{ 122, 33 },
	{ 0, 241 },
	{ 92, 33 },
	{ 122, 33 },
	{ 0, 241 },
	{ 16, 255 },
	{ 122, 33 },
	{ 152, 255 },
	{ 153, 26 },
	{ 251, 3 }
};

NJS_TEX uv_000578FC[] = {
	{ 4, 212 },
	{ 4, 255 },
	{ 0, 201 },
	{ 4, 212 },
	{ 8, 167 },
	{ 40, 167 },
	{ 111, 38 },
	{ 131, 42 },
	{ 131, 25 },
	{ 219, 34 },
	{ 219, 24 },
	{ 251, 30 },
	{ 33, 59 },
	{ 40, 16 },
	{ 26, 59 },
	{ 26, 59 },
	{ 33, 59 },
	{ 40, 16 },
	{ 41, 56 },
	{ 64, 4 },
	{ 64, 45 },
	{ 94, 3 },
	{ 94, 36 },
	{ 111, 10 },
	{ 40, 167 },
	{ 4, 212 },
	{ 8, 167 },
	{ 0, 201 },
	{ 4, 161 },
	{ 8, 167 },
	{ 131, 42 },
	{ 111, 10 },
	{ 111, 38 },
	{ 94, 3 },
	{ 94, 36 },
	{ 64, 4 },
	{ 64, 45 },
	{ 40, 16 },
	{ 41, 56 },
	{ 33, 59 },
	{ 251, 30 },
	{ 219, 34 },
	{ 219, 24 },
	{ 131, 42 },
	{ 131, 25 },
	{ 111, 10 },
	{ 111, 38 },
	{ 94, 36 }
};

NJS_TEX uv_000579BC[] = {
	{ 69, 254 },
	{ 69, 209 },
	{ 36, 241 },
	{ 36, 195 },
	{ 0, 191 },
	{ 0, 155 },
	{ 245, 30 },
	{ 214, 43 },
	{ 214, 58 },
	{ 126, 77 },
	{ 126, 102 },
	{ 106, 125 },
	{ 106, 158 },
	{ 89, 217 },
	{ 106, 158 },
	{ 126, 77 },
	{ 126, 102 },
	{ 214, 43 },
	{ 214, 58 },
	{ 245, 30 },
	{ 126, 77 },
	{ 106, 125 },
	{ 106, 158 },
	{ 89, 173 },
	{ 89, 217 },
	{ 69, 209 },
	{ 69, 254 },
	{ 36, 195 },
	{ 36, 241 },
	{ 0, 155 },
	{ 0, 191 },
	{ 89, 217 },
	{ 89, 173 },
	{ 106, 125 },
	{ 0, 155 },
	{ 36, 118 },
	{ 36, 195 },
	{ 69, 118 },
	{ 69, 209 },
	{ 89, 173 },
	{ 69, 254 },
	{ 89, 217 },
	{ 0, 155 },
	{ 36, 195 },
	{ 36, 118 },
	{ 69, 209 },
	{ 69, 118 },
	{ 89, 173 },
	{ 251, 214 },
	{ 231, 36 },
	{ 240, 226 },
	{ 214, 58 },
	{ 251, 214 },
	{ 231, 36 }
};

NJS_TEX uv_00057A94[] = {
	{ 5, 237 },
	{ 6, 34 },
	{ 265, 240 },
	{ 6, 34 },
	{ 329, -1459 },
	{ -2454, -4527 },
	{ -222, -2074 },
	{ 1, 209 },
	{ 238, 61 },
	{ 1, 18 }
};

NJS_TEX uv_00057ABC[] = {
	{ 82, 148 },
	{ 62, 206 },
	{ 62, 9 },
	{ 38, 140 },
	{ 27, 18 },
	{ 0, 140 },
	{ 105, 16 },
	{ 82, 148 },
	{ 82, 12 },
	{ 62, 206 },
	{ 62, 9 },
	{ 38, 140 },
	{ 27, 18 },
	{ 0, 140 },
	{ 82, 148 },
	{ 105, 91 },
	{ 105, 16 },
	{ 208, 51 },
	{ 208, 7 },
	{ 244, 35 },
	{ 244, 3 },
	{ 208, 51 },
	{ 208, 7 },
	{ 105, 91 },
	{ 105, 16 },
	{ 82, 148 },
	{ 82, 12 },
	{ 62, 9 },
	{ 228, 42 },
	{ 244, 35 },
	{ 251, 254 },
	{ 228, 42 }
};

NJS_TEX uv_00057B3C[] = {
	{ 251, 3 },
	{ 232, 255 },
	{ 97, 3 },
	{ 0, 255 },
	{ 97, 3 },
	{ 0, 255 },
	{ 251, 3 },
	{ 232, 255 }
};

NJS_MESHSET_SADX meshlist_00057B5C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00057734X, NULL, NULL, NULL, uv_000578BC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 7, poly_0005775A, NULL, NULL, NULL, uv_000578FC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 8, poly_000577C8, NULL, NULL, NULL, uv_000579BC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_00057844, NULL, NULL, NULL, uv_00057A94, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 4, poly_0005785E, NULL, NULL, NULL, uv_00057ABC, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, poly_000578A6, NULL, NULL, NULL, uv_00057B3C, NULL }
};

NJS_VECTOR vertex_00057BEC[] = {
	{ 6.495926f, -6.170057f, 0 },
	{ 14.69649f, -6.705995f, 0 },
	{ 14.69649f, -9.096137f, -4.382812f },
	{ 6.495926f, -8.90127f, -6.309654f },
	{ -36.11885f, -23.72055f, 3.065975f },
	{ -36.11885f, -23.72055f, -3.065975f },
	{ -36.11885f, -27.30264f, 0 },
	{ -7.822972f, -6.247198f, 0 },
	{ -7.822972f, -9.658257f, -6.74471f },
	{ -36.11885f, -19.41955f, 0 },
	{ -7.822972f, -9.658257f, 6.74471f },
	{ 6.495926f, -8.90127f, 6.309654f },
	{ 14.69649f, -9.096137f, 4.382812f },
	{ 23.8381f, -7.988233f, 0 },
	{ 23.8381f, -9.443676f, -3.059937f },
	{ -18.91099f, -32.40081f, 0 },
	{ -18.91099f, -27.74111f, 8.244302f },
	{ -18.91099f, -27.74111f, -8.244302f },
	{ -22.31239f, -10.86022f, 4.57419f },
	{ -18.911f, -7.189386f, 0 },
	{ -25.74441f, -10.85834f, 0 },
	{ -22.31239f, -10.86022f, -4.57419f },
	{ -18.91099f, -19.95688f, 9.596133f },
	{ -3.33056f, -19.95688f, 11.59713f },
	{ -3.33056f, -29.15799f, 9.624486f },
	{ -18.91099f, -19.95688f, -9.596133f },
	{ -3.33056f, -19.95688f, -11.59713f },
	{ -3.33056f, -29.15799f, -9.624486f },
	{ -3.33056f, -33.74369f, 0 },
	{ 65.86221f, -8.732312f, 1.758663f },
	{ 65.86221f, -12.41416f, 1.787508f },
	{ 23.8381f, -9.443676f, 3.059937f },
	{ 23.8381f, -15.85367f, 3.252275f },
	{ 14.69649f, -20.64238f, 5.236606f },
	{ 6.495926f, -25.50686f, 8.194353f },
	{ 65.86221f, -12.41416f, -1.787508f },
	{ 65.86221f, -8.732312f, -1.758663f },
	{ 23.8381f, -15.85367f, -3.252275f },
	{ 14.69649f, -20.64238f, -5.236606f },
	{ 6.495926f, -25.50686f, -8.194353f },
	{ 23.8381f, -18.30832f, 0 },
	{ 14.69649f, -24.04347f, 0 },
	{ 6.495926f, -29.97098f, 0 },
	{ 57.3181f, -10.98741f, 1.882647f },
	{ 59.62392f, -6.506132f, 12.83068f },
	{ 62.78763f, -10.98741f, 1.882647f },
	{ 63.22684f, -6.506132f, 12.83068f },
	{ 57.31811f, -10.98741f, -1.882647f },
	{ 59.62393f, -6.506132f, -12.83068f },
	{ 62.78763f, -10.98741f, -1.882647f },
	{ 63.22684f, -6.506132f, -12.83068f },
	{ 73.98642f, -11.68931f, 0.788691f },
	{ 73.98642f, -11.68931f, -0.788691f },
	{ 77.94543f, -30.8964f, -0.002536f },
	{ 82.07035f, -27.50758f, -0.105381f },
	{ 82.07035f, -27.50758f, 0.105381f },
	{ 88.52879f, -26.88119f, 0 },
	{ 65.86221f, -13.94766f, 0 },
	{ 80.58047f, -11.10098f, -0.00023f },
	{ 83.16161f, -29.64057f, -0.002536f },
	{ -18.7692f, -10.5663f, 5.10496f },
	{ -18.77819f, -10.56704f, -5.103613f },
	{ -38.27953f, -22.7758f, 0 },
	{ 65.86221f, -7.895254f, 0 },
	{ 80.5805f, -8.409352f, 0 },
	{ -34.24254f, -19.95688f, 3.055269f },
	{ -34.24254f, -19.95688f, -3.055269f }
};

NJS_VECTOR normal_00057F10[] = {
	{ 0.039058f, 0.9992099f, -0.007376f },
	{ 0.112783f, 0.9935679f, -0.010079f },
	{ 0.183898f, 0.546487f, -0.817027f },
	{ 0.148206f, 0.598702f, -0.787141f },
	{ -0.641289f, -0.231297f, 0.731608f },
	{ -0.606777f, -0.155404f, -0.779533f },
	{ -0.5803159f, -0.806129f, -0.115715f },
	{ -0.07048199f, 0.9973969f, 0.015241f },
	{ -0.077687f, 0.692804f, -0.716929f },
	{ -0.763465f, 0.6458369f, -0.003975f },
	{ -0.076841f, 0.6823069f, 0.727016f },
	{ 0.142928f, 0.609894f, 0.779488f },
	{ 0.171087f, 0.570391f, 0.8033569f },
	{ 0.06232f, 0.99796f, 0.013892f },
	{ 0.093493f, 0.545887f, -0.832626f },
	{ -0.222133f, -0.9706039f, -0.09265199f },
	{ -0.222285f, -0.576727f, 0.786114f },
	{ -0.210102f, -0.504439f, -0.837495f },
	{ -0.360116f, 0.652914f, 0.666349f },
	{ -0.234486f, 0.97212f, 0.000029f },
	{ -0.5879599f, 0.808868f, -0.005986f },
	{ -0.359818f, 0.650682f, -0.668689f },
	{ -0.232872f, 0.122747f, 0.96473f },
	{ 0.069685f, 0.095907f, 0.992948f },
	{ 0.09612899f, -0.618363f, 0.779991f },
	{ -0.233856f, 0.11272f, -0.965715f },
	{ 0.069643f, 0.085809f, -0.993875f },
	{ 0.096723f, -0.622477f, -0.776639f },
	{ 0.132736f, -0.9911349f, -0.00572f },
	{ 0.053475f, 0.532385f, 0.844812f },
	{ 0.104204f, -0.413697f, 0.904431f },
	{ 0.084492f, 0.5394239f, 0.8377849f },
	{ 0.205068f, -0.370813f, 0.905784f },
	{ 0.422149f, -0.359254f, 0.832302f },
	{ 0.421575f, -0.431661f, 0.79746f },
	{ 0.103288f, -0.413767f, -0.904505f },
	{ 0.053713f, 0.532363f, -0.8448099f },
	{ 0.205869f, -0.381385f, -0.901201f },
	{ 0.425205f, -0.38986f, -0.816829f },
	{ 0.432402f, -0.458701f, -0.776287f },
	{ 0.370947f, -0.92865f, -0.002792f },
	{ 0.583573f, -0.811866f, 0.017774f },
	{ 0.482336f, -0.8755209f, 0.028547f },
	{ 0, 0.925472f, -0.378816f },
	{ 0, 0.925472f, -0.378817f },
	{ 0, 0.925472f, -0.378816f },
	{ 0, 0.925472f, -0.378816f },
	{ 0, 0.925472f, 0.378816f },
	{ 0, 0.925472f, 0.378816f },
	{ 0, 0.925472f, 0.378816f },
	{ 0, 0.925472f, 0.378816f },
	{ 0.0009f, -0.035373f, 0.999374f },
	{ 0.049993f, -0.005117f, -0.998737f },
	{ -0.6298929f, -0.775358f, -0.045332f },
	{ -0.065651f, 0.7813179f, -0.620671f },
	{ -0.06558999f, 0.780805f, 0.621322f },
	{ 0.975168f, 0.221468f, 0.000132f },
	{ 0.123865f, -0.9922979f, -0.00138f },
	{ 0.979513f, -0.201383f, -0.000349f },
	{ 0.192217f, -0.980882f, -0.030379f },
	{ -0.155047f, 0.672112f, 0.724034f },
	{ -0.15506f, 0.67209f, -0.724052f },
	{ -0.9958839f, 0.090637f, 0 },
	{ 0.014224f, 0.874034f, -0.485656f },
	{ 0.832361f, 0.554124f, -0.011f },
	{ -0.553479f, 0.446797f, 0.702875f },
	{ -0.552121f, 0.44229f, -0.706783f }
};

NJS_MODEL_SADX attach_00058234 = { vertex_00057BEC, normal_00057F10, LengthOfArray<Sint32>(vertex_00057BEC), meshlist_00057B5C, matlist_000576BC, LengthOfArray<Uint16>(meshlist_00057B5C), LengthOfArray<Uint16>(matlist_000576BC),{ 25.12462f, -19.95688f, 0 }, 64.68936f, NULL };

NJS_OBJECT object_0005825C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_00058234, 0, 20, 0, 0, 0, 0, 1, 1, 1, &object_00057688, NULL };

#pragma warning(pop)
