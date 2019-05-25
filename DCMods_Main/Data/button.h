#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

enum MROBJTexName
{
	MROBJTexName_mr_032n_hac,
	MROBJTexName_eca_s_gold,
	MROBJTexName_eca_s_gre,
	MROBJTexName_eca_s_whtb,
	MROBJTexName_edb_o_slot02,
	MROBJTexName_edb_o_ten03,
	MROBJTexName_edb_o_ten11,
	MROBJTexName_edb_o_ten12,
	MROBJTexName_edc_f_switch,
	MROBJTexName_edc_k_jsen,
	MROBJTexName_edc_n_hasi,
	MROBJTexName_edc_n_kabe13,
	MROBJTexName_edc_n_kabe15,
	MROBJTexName_edc_n_kabe8,
	MROBJTexName_edc_n_tank10,
	MROBJTexName_edc_n_tank2,
	MROBJTexName_edc_n_tank3,
	MROBJTexName_edc_n_tank6,
	MROBJTexName_edc_n_tobiraa,
	MROBJTexName_edc_n_tobirab,
	MROBJTexName_edc_n_tobirac,
	MROBJTexName_edc_n_tobirad,
	MROBJTexName_edc_n_tobirae,
	MROBJTexName_edc_n_tobiraf,
	MROBJTexName_edc_n_tobirag,
	MROBJTexName_edc_n_uturi,
	MROBJTexName_edv_f_katabc,
	MROBJTexName_edv_f_zenmenb,
	MROBJTexName_era_s_cove,
	MROBJTexName_m128_los003,
	MROBJTexName_m128_los038,
	MROBJTexName_m32_los010,
	MROBJTexName_m64_los013,
	MROBJTexName_m64_los018,
	MROBJTexName_mk_008k_keyeye,
	MROBJTexName_mk_008s_irikuro,
	MROBJTexName_mk_016k_gold,
	MROBJTexName_mk_016k_keyyokodou,
	MROBJTexName_mk_016k_silver,
	MROBJTexName_mk_016k_skeyyokodou,
	MROBJTexName_mk_032k_kaidanue,
	MROBJTexName_mk_032k_keyban,
	MROBJTexName_mk_032k_keydou,
	MROBJTexName_mk_032k_keyyokodou,
	MROBJTexName_mk_032k_skeydou,
	MROBJTexName_mk_032k_skeyyokodou,
	MROBJTexName_mk_064k_irigutihikari,
	MROBJTexName_mra_064s_ext,
	MROBJTexName_mra_064s_tlksa,
	MROBJTexName_mra_064s_tlksb,
	MROBJTexName_mra_064s_tlksc,
	MROBJTexName_mra_128s_doab,
	MROBJTexName_mra_128s_gd,
	MROBJTexName_mra_128s_kianagd,
	MROBJTexName_mra_256s_eikaba,
	MROBJTexName_mra_256s_kabeb,
	MROBJTexName_mra_256s_kianaa,
	MROBJTexName_mra_256s_kianab,
	MROBJTexName_mra_256s_kianac,
	MROBJTexName_mrb_256s_ganpeki,
	MROBJTexName_mrp_064s_emefmust,
	MROBJTexName_mrs_064s_uetuti,
	MROBJTexName_mr_008o_kuro,
	MROBJTexName_mr_016f_kazec,
	MROBJTexName_mr_016f_key,
	MROBJTexName_mr_016f_keyb,
	MROBJTexName_mr_016f_kousenb,
	MROBJTexName_mr_016f_neji,
	MROBJTexName_mr_016f_tesuri,
	MROBJTexName_mr_016f_wakiso,
	MROBJTexName_mr_016k_goldc,
	MROBJTexName_mr_016k_silverc,
	MROBJTexName_mr_016o_doa03,
	MROBJTexName_mr_032f_asi,
	MROBJTexName_mr_032f_beam,
	MROBJTexName_mr_032f_box,
	MROBJTexName_mr_032f_brake,
	MROBJTexName_mr_032f_brakeb,
	MROBJTexName_mr_032f_chb,
	MROBJTexName_mr_032f_chc,
	MROBJTexName_mr_032f_chd,
	MROBJTexName_mr_032f_che,
	MROBJTexName_mr_032f_eye,
	MROBJTexName_mr_032f_eyeb,
	MROBJTexName_mr_032f_hikari,
	MROBJTexName_mr_032f_ita,
	MROBJTexName_mr_032f_jabara,
	MROBJTexName_mr_032f_kannb,
	MROBJTexName_mr_032f_kannc,
	MROBJTexName_mr_032f_kousen,
	MROBJTexName_mr_032f_sabid,
	MROBJTexName_mr_032f_totte,
	MROBJTexName_mr_032f_yoko,
	MROBJTexName_mr_032f_yokopi,
	MROBJTexName_mr_032k_huti,
	MROBJTexName_mr_032k_huti2,
	MROBJTexName_mr_032k_nikaid01,
	MROBJTexName_mr_032k_nikaid02,
	MROBJTexName_mr_032k_sansyoku,
	MROBJTexName_mr_032o_gold,
	MROBJTexName_mr_032o_himo01,
	MROBJTexName_mr_032o_himo02,
	MROBJTexName_mr_032o_kasan,
	MROBJTexName_mr_032o_kdan,
	MROBJTexName_mr_032o_miki02,
	MROBJTexName_mr_064f_center,
	MROBJTexName_mr_064f_kai,
	MROBJTexName_mr_064f_kesshou,
	MROBJTexName_mr_064f_kiri,
	MROBJTexName_mr_064f_kiwaku,
	MROBJTexName_mr_064f_kiwakub,
	MROBJTexName_mr_064f_kiwakuc,
	MROBJTexName_mr_064f_kiwakud,
	MROBJTexName_mr_064f_kuzuf,
	MROBJTexName_mr_064f_kuzum,
	MROBJTexName_mr_064f_mae,
	MROBJTexName_mr_064f_maesita,
	MROBJTexName_mr_064f_mon,
	MROBJTexName_mr_064f_mond,
	MROBJTexName_mr_064f_savi,
	MROBJTexName_mr_064f_tiika,
	MROBJTexName_mr_064f_tiikab,
	MROBJTexName_mr_064f_tower,
	MROBJTexName_mr_064f_towerice,
	MROBJTexName_mr_064f_uroe,
	MROBJTexName_mr_064f_usiro,
	MROBJTexName_mr_064f_yokob,
	MROBJTexName_mr_064f_yokoc,
	MROBJTexName_mr_064f_yokoiwa,
	MROBJTexName_mr_064f_yokoiwac,
	MROBJTexName_mr_064f_yokoiwad,
	MROBJTexName_mr_064f_yokositd,
	MROBJTexName_mr_064f_yuka,
	MROBJTexName_mr_064k_akaren,
	MROBJTexName_mr_064k_akarens,
	MROBJTexName_mr_064k_cudanmen,
	MROBJTexName_mr_064k_cudou,
	MROBJTexName_mr_064k_cudou2,
	MROBJTexName_mr_064k_cueye,
	MROBJTexName_mr_064k_cuface,
	MROBJTexName_mr_064k_kabem,
	MROBJTexName_mr_064k_kata,
	MROBJTexName_mr_064k_mizo,
	MROBJTexName_mr_064n_bighaa,
	MROBJTexName_mr_064n_bighab,
	MROBJTexName_mr_064n_bota,
	MROBJTexName_mr_064n_eggman,
	MROBJTexName_mr_064n_hag,
	MROBJTexName_mr_064n_haj,
	MROBJTexName_mr_064n_has,
	MROBJTexName_mr_064n_iwahada,
	MROBJTexName_mr_064n_maruta,
	MROBJTexName_mr_064n_sidaa,
	MROBJTexName_mr_064n_sidab,
	MROBJTexName_mr_064n_yasia,
	MROBJTexName_mr_064o_asi,
	MROBJTexName_mr_064o_ha03,
	MROBJTexName_mr_064o_kdoa,
	MROBJTexName_mr_064o_kiso04,
	MROBJTexName_mr_064o_kiso09,
	MROBJTexName_mr_064o_kousi,
	MROBJTexName_mr_064o_lamp,
	MROBJTexName_mr_064o_lamp2,
	MROBJTexName_mr_064o_maki01,
	MROBJTexName_mr_064o_maki02,
	MROBJTexName_mr_064o_miki01,
	MROBJTexName_mr_064o_miki02,
	MROBJTexName_mr_064o_miki03,
	MROBJTexName_mr_064o_mrt,
	MROBJTexName_mr_064o_sora,
	MROBJTexName_mr_064o_yozora,
	MROBJTexName_mr_064s_emebl,
	MROBJTexName_mr_064s_emegren,
	MROBJTexName_mr_064s_emegrenb,
	MROBJTexName_mr_064s_emepupl,
	MROBJTexName_mr_064s_emered,
	MROBJTexName_mr_064s_emesky,
	MROBJTexName_mr_064s_emewhit,
	MROBJTexName_mr_064s_emeyelw,
	MROBJTexName_mr_064s_kori,
	MROBJTexName_mr_064s_los031,
	MROBJTexName_mr_128f_en,
	MROBJTexName_mr_128f_happac,
	MROBJTexName_mr_128f_hekic,
	MROBJTexName_mr_128f_hekid,
	MROBJTexName_mr_128f_kah,
	MROBJTexName_mr_128f_snow,
	MROBJTexName_mr_128f_yokoite,
	MROBJTexName_mr_128f_yuka,
	MROBJTexName_mr_128k_hebi,
	MROBJTexName_mr_128k_huti2,
	MROBJTexName_mr_128k_knuckles,
	MROBJTexName_mr_128k_wallna,
	MROBJTexName_mr_128n_busha,
	MROBJTexName_mr_128n_bushb,
	MROBJTexName_mr_128n_iwahada,
	MROBJTexName_mr_128n_jimenb,
	MROBJTexName_mr_128o_doa01,
	MROBJTexName_mr_128o_doa02,
	MROBJTexName_mr_128o_doa03,
	MROBJTexName_mr_128o_doa04,
	MROBJTexName_mr_128o_miki01,
	MROBJTexName_mr_128s_eda,
	MROBJTexName_mr_64n_hikari,
	MROBJTexName_mr_64s_kawa,
	MROBJTexName_edc_n_osoujid,
	MROBJTexName_mr_064f_ue,
	MROBJTexName_mra_256s_kabc,
	MROBJTexName_mra_256s_sitkabc
};

NJS_MATERIAL matlistADV02_00212FE4[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, MROBJTexName_mr_008o_kuro, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, MROBJTexName_mr_032f_eye, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, MROBJTexName_mr_064f_kuzum, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, MROBJTexName_mr_032f_eyeb, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, MROBJTexName_mr_032k_huti, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_00213048[] = {
	4, 25, 24, 1, 5,
	4, 19, 18, 14, 12
};

Sint16 polyADV02_0021305C[] = {
	0x8000u | 8, 1, 2, 6, 7, 16, 11, 12, 9,
	0x8000u | 8, 12, 9, 13, 10, 0, 3, 1, 2,
	6, 1, 0, 25, 22, 24, 23,
	6, 13, 12, 21, 18, 20, 19
};

Sint16 polyADV02_0021309C[] = {
	0x8000u | 8, 5, 1, 8, 6, 17, 16, 14, 12
};

Sint16 polyADV02_002130AE[] = {
	6, 10, 3, 9, 2, 11, 7
};

Sint16 polyADV02_002130BC[] = {
	3, 13, 21, 20,
	6, 22, 0, 4, 13, 15, 20,
	3, 4, 23, 22
};

NJS_TEX uvADV02_002130DC[] = {
	{ 210, 255 },
	{ 120, -765 },
	{ 289, 255 },
	{ 225, -765 },
	{ 401, 255 },
	{ 382, -765 },
	{ 481, 255 },
	{ 488, -765 },
	{ 0, 255 },
	{ 0, -765 },
	{ 433, 255 },
	{ 308, -765 },
	{ 586, 255 },
	{ 711, -765 },
	{ 1020, 255 },
	{ 1020, -765 },
	{ 0, 254 },
	{ 0, -765 },
	{ 506, 255 },
	{ 490, -765 },
	{ 1749, 254 },
	{ 1940, -765 },
	{ 5100, -765 },
	{ 5100, 255 },
	{ 4591, -765 },
	{ 4571, 255 },
	{ 3142, -765 },
	{ 3328, 255 }
};

NJS_TEX uvADV02_0021314C[] = {
	{ 1020, -255 },
	{ 0, -255 },
	{ 1020, -105 },
	{ 0, -105 },
	{ 1020, 105 },
	{ 0, 105 },
	{ 1020, 255 },
	{ 0, 255 }
};

NJS_TEX uvADV02_0021316C[] = {
	{ 378, -255 },
	{ 131, -255 },
	{ 509, 36 },
	{ 0, 36 },
	{ 378, 254 },
	{ 131, 254 }
};

NJS_TEX uvADV02_00213184[] = {
	{ 588, -764 },
	{ 1019, -765 },
	{ 1019, 254 },
	{ 0, -764 },
	{ 416, -764 },
	{ 416, 254 },
	{ 588, -764 },
	{ 588, 254 },
	{ 1019, 254 },
	{ 416, 254 },
	{ 0, 254 },
	{ 0, -764 }
};

NJS_MESHSET_SADX meshlistADV02_002131B4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, polyADV02_00213048, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, polyADV02_0021305C, NULL, NULL, NULL, uvADV02_002130DC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, polyADV02_0021309C, NULL, NULL, NULL, uvADV02_0021314C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, polyADV02_002130AE, NULL, NULL, NULL, uvADV02_0021316C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 3, polyADV02_002130BC, NULL, NULL, NULL, uvADV02_00213184, NULL }
};

NJS_VECTOR vertexADV02_0021322C[] = {
	{ -1.794805f, 9.731574f, 22.83509f },
	{ -5.321391f, -9.193779f, 22.5053f },
	{ -5.320894f, -10.26772f, 29.14387f },
	{ -2.646321f, -6.586983f, 30.00336f },
	{ -1.794476f, 9.731574f, -28.54713f },
	{ -5.320927f, -9.193779f, -28.87691f },
	{ -2.646391f, -14.28743f, 22.83508f },
	{ -2.646147f, -13.02243f, 28.47236f },
	{ -2.645927f, -14.28743f, -28.54713f },
	{ 5.02911f, -10.26772f, 29.14387f },
	{ 2.353683f, -6.586983f, 30.00336f },
	{ 2.353858f, -13.02243f, 28.47236f },
	{ 5.028614f, -9.193779f, 22.5053f },
	{ 1.502229f, 9.731574f, 22.83509f },
	{ 5.029078f, -9.193779f, -28.8769f },
	{ 1.502559f, 9.731574f, -28.54712f },
	{ 2.353613f, -14.28743f, 22.83508f },
	{ 2.354077f, -14.28743f, -28.54712f },
	{ 15.07112f, -9.046969f, 22.50836f },
	{ 15.07158f, -9.046969f, -28.87384f },
	{ 9.793724f, 9.878386f, -28.54377f },
	{ 9.7934f, 9.878386f, 22.83843f },
	{ -9.80022f, 9.714259f, 22.83192f },
	{ -9.799913f, 9.714259f, -28.55025f },
	{ -14.94286f, -9.211098f, -28.87973f },
	{ -14.94333f, -9.211098f, 22.50245f }
};

NJS_VECTOR normalADV02_00213364[] = {
	{ -0.089927f, 0.799642f, 0.593706f },
	{ -0.782847f, -0.498498f, 0.372359f },
	{ -0.793696f, -0.236159f, 0.560603f },
	{ -0.517716f, 0.167527f, 0.838991f },
	{ -0.001082f, 0.999999f, 0 },
	{ -0.506754f, -0.8620909f, -0.00005f },
	{ -0.475674f, -0.873984f, 0.099428f },
	{ -0.343326f, -0.69728f, 0.629228f },
	{ -0.526455f, -0.850203f, -0.00005f },
	{ 0.745447f, -0.247038f, 0.619097f },
	{ 0.416304f, 0.127618f, 0.900225f },
	{ 0.366597f, -0.735793f, 0.569399f },
	{ 0.754392f, -0.502748f, 0.422063f },
	{ 0.075003f, 0.781453f, 0.61944f },
	{ 0.514085f, -0.857739f, 0.000005f },
	{ -0.008850999f, 0.999961f, 0 },
	{ 0.479711f, -0.8764769f, 0.040804f },
	{ 0.526459f, -0.850201f, 0.000005f },
	{ 0.662118f, -0.497729f, 0.5602379f },
	{ 0.796565f, -0.604552f, 0.000007f },
	{ 0.600862f, 0.7993529f, 0.000005f },
	{ 0.481373f, 0.640885f, 0.597951f },
	{ -0.489677f, 0.633999f, 0.59855f },
	{ -0.611502f, 0.791243f, -0.00004f },
	{ -0.789655f, -0.613552f, -0.00005f },
	{ -0.656742f, -0.505476f, 0.559629f }
};

NJS_MODEL_SADX attachADV02_0021349C = { vertexADV02_0021322C, normalADV02_00213364, LengthOfArray(vertexADV02_0021322C), meshlistADV02_002131B4, matlistADV02_00212FE4, LengthOfArray(meshlistADV02_002131B4), LengthOfArray(matlistADV02_00212FE4),{ 0.06412899f, -2.204523f, 0.561811f }, 33.04585f, NULL };

NJS_OBJECT objectADV02_002134C4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachADV02_0021349C, -150.4131f, 68.57377f, -212.0925f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlistADV02_002134F8[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, MROBJTexName_mr_032k_huti, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, MROBJTexName_mr_064f_mon, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, MROBJTexName_mr_064f_kuzum, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, MROBJTexName_mr_032f_eye, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_00213548[] = {
	8, 8, 2, 6, 1, 19, 10, 17, 13
};

Sint16 polyADV02_0021355A[] = {
	8, 3, 5, 0, 4, 11, 14, 12, 15
};

Sint16 polyADV02_0021356C[] = {
	4, 15, 18, 12, 16,
	4, 9, 5, 7, 3
};

Sint16 polyADV02_00213580[] = {
	3, 7, 3, 8,
	0x8000u | 10, 8, 2, 3, 1, 0, 10, 11, 13, 12, 16,
	3, 16, 17, 13
};

NJS_TEX uvADV02_002135A8[] = {
	{ 1005, 254 },
	{ 4, 236 },
	{ 1009, 170 },
	{ 0, 89 },
	{ 1016, -613 },
	{ 7, -695 },
	{ 1020, -746 },
	{ 18, -765 }
};

NJS_TEX uvADV02_002135C8[] = {
	{ 0, 255 },
	{ 0 },
	{ 265, 255 },
	{ 265, 0 },
	{ 802, 255 },
	{ 802, 0 },
	{ 1020, 255 },
	{ 1020, 0 }
};

NJS_TEX uvADV02_002135E8[] = {
	{ 24, 254 },
	{ 1020, 254 },
	{ 24, -254 },
	{ 1020, -254 },
	{ 995, 254 },
	{ 0, 254 },
	{ 995, -254 },
	{ 0, -254 }
};

NJS_TEX uvADV02_00213608[] = {
	{ 0, 255 },
	{ 1457, 255 },
	{ 0, -255 },
	{ 0, -255 },
	{ 1785, -255 },
	{ 1457, 255 },
	{ 2010, -255 },
	{ 2026, 254 },
	{ 3206, -255 },
	{ 3177, 255 },
	{ 3314, -255 },
	{ 3642, 254 },
	{ 5100, 255 },
	{ 5100, 255 },
	{ 5100, -255 },
	{ 3314, -255 }
};

NJS_MESHSET_SADX meshlistADV02_00213648[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyADV02_00213548, NULL, NULL, NULL, uvADV02_002135A8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, polyADV02_0021355A, NULL, NULL, NULL, uvADV02_002135C8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polyADV02_0021356C, NULL, NULL, NULL, uvADV02_002135E8, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, polyADV02_00213580, NULL, NULL, NULL, uvADV02_00213608, NULL }
};

NJS_VECTOR vertexADV02_002136A8[] = {
	{ -20.84716f, 4.231301f, -14.35032f },
	{ -24.35608f, 11.17486f, -14.48653f },
	{ -24.16429f, 11.17486f, -20.32339f },
	{ -16.99869f, 4.231301f, -28.93957f },
	{ -20.84716f, -7.184998f, -14.35032f },
	{ -16.99869f, -7.184998f, -28.93957f },
	{ 20.52767f, 11.17486f, -17.72513f },
	{ 20.2203f, 4.231301f, -29.55006f },
	{ 20.35966f, 11.17486f, -21.05371f },
	{ 20.2203f, -7.184998f, -29.55006f },
	{ -24.04175f, 11.17486f, 16.55914f },
	{ -20.53748f, 4.231301f, 16.23657f },
	{ -16.06961f, 4.231301f, 27.7028f },
	{ -23.51394f, 11.17486f, 19.32627f },
	{ -20.53748f, -7.184998f, 16.23657f },
	{ -16.06961f, -7.184998f, 27.7028f },
	{ 21.14937f, 4.231301f, 27.09231f },
	{ 21.01001f, 11.17486f, 18.59596f },
	{ 21.14937f, -7.184998f, 27.09231f },
	{ 20.842f, 11.17486f, 13.32052f }
};

NJS_VECTOR normalADV02_00213798[] = {
	{ -0.957229f, -0.281271f, -0.06781799f },
	{ -0.875495f, 0.483143f, -0.009075f },
	{ -0.837543f, 0.451191f, -0.308136f },
	{ -0.50926f, 0.302006f, -0.805882f },
	{ -0.992335f, 0, -0.123577f },
	{ -0.616778f, 0, -0.787137f },
	{ 0, 1, 0 },
	{ -0.014818f, 0.428515f, -0.903413f },
	{ -0.00545f, 0.943178f, -0.332243f },
	{ -0.0164f, 0, -0.999865f },
	{ -0.84815f, 0.5040939f, 0.162881f },
	{ -0.951512f, -0.245145f, 0.185818f },
	{ -0.441922f, 0.31044f, 0.841624f },
	{ -0.705583f, 0.501979f, 0.50017f },
	{ -0.981845f, 0, 0.189684f },
	{ -0.55754f, 0, 0.8301499f },
	{ 0.014818f, 0.428515f, 0.903413f },
	{ 0.005536f, 0.941308f, 0.337502f },
	{ 0.016401f, 0, 0.999865f },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attachADV02_00213888 = { vertexADV02_002136A8, normalADV02_00213798, LengthOfArray(vertexADV02_002136A8), meshlistADV02_00213648, matlistADV02_002134F8, LengthOfArray(meshlistADV02_00213648), LengthOfArray(matlistADV02_002134F8),{ -1.603354f, 1.994932f, -0.923628f }, 42.01084f, NULL };

NJS_OBJECT objectADV02_002138B0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachADV02_00213888, 143.8542f, 8.998885f, 5.340828f, 0, 0x909, 0, 1, 1, 1, NULL, &objectADV02_002134C4 };

NJS_MATERIAL matlistADV02_002138E4[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, MROBJTexName_mra_256s_kabeb, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, MROBJTexName_mr_008o_kuro, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, MROBJTexName_mra_256s_kabeb, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, MROBJTexName_mr_064f_kuzuf, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, MROBJTexName_mr_064f_mond, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, MROBJTexName_mr_032k_nikaid02, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, MROBJTexName_mr_064f_kuzuf, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, MROBJTexName_mr_032f_eye, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, MROBJTexName_mr_064f_kuzum, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, MROBJTexName_mr_032k_huti, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, MROBJTexName_mr_032f_eyeb, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, MROBJTexName_mr_032f_eye, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_002139D4[] = {
	4, 2, 30, 0, 28,
	0x8000u | 8, 27, 1, 31, 3, 26, 2, 29, 30
};

Sint16 polyADV02_002139F0[] = {
	0x8000u | 6, 22, 29, 25, 30, 23, 28,
	0x8000u | 6, 6, 7, 16, 18, 8, 9,
	0x8000u | 10, 28, 27, 23, 21, 25, 24, 22, 20, 29, 26,
	0x8000u | 6, 26, 20, 31, 24, 27, 21
};

Sint16 polyADV02_00213A30[] = {
	0x8000u | 9, 17, 15, 5, 12, 11, 19, 10, 13, 14,
	0x8000u | 5, 10, 14, 4, 17, 5
};

Sint16 polyADV02_00213A50[] = {
	6, 9, 32, 18, 37, 7, 36,
	6, 6, 35, 16, 34, 8, 33
};

Sint16 polyADV02_00213A6C[] = {
	4, 7, 36, 6, 35
};

Sint16 polyADV02_00213A76[] = {
	8, 14, 35, 13, 36, 19, 37, 12, 32,
	8, 12, 32, 15, 33, 17, 34, 14, 35
};

Sint16 polyADV02_00213A9A[] = {
	4, 8, 33, 9, 32
};

Sint16 polyADV02_00213AA4[] = {
	3, 38, 39, 41,
	0x8000u | 5, 41, 40, 39, 43, 42,
	0x8000u | 5, 55, 53, 54, 52, 51,
	3, 55, 56, 54,
	8, 52, 51, 48, 49, 45, 46, 42, 43
};

Sint16 polyADV02_00213ADE[] = {
	8, 51, 57, 49, 50, 46, 47, 43, 44
};

Sint16 polyADV02_00213AF0[] = {
	4, 54, 56, 51, 57,
	4, 41, 40, 44, 43
};

Sint16 polyADV02_00213B04[] = {
	0x8000u | 5, 64, 59, 61, 60, 59,
	5, 64, 70, 61, 63, 67,
	4, 67, 58, 61, 59
};

Sint16 polyADV02_00213B26[] = {
	0x8000u | 8, 65, 59, 66, 64, 71, 70, 69, 63,
	0x8000u | 8, 59, 65, 58, 68, 67, 62, 63, 69
};

NJS_TEX uvADV02_00213B4C[] = {
	{ 255, 123 },
	{ 227, 219 },
	{ 251, 253 },
	{ 228, 254 },
	{ 129, 254 },
	{ 93, 255 },
	{ 129, 218 },
	{ 91, 123 },
	{ 144, 195 },
	{ 255, 123 },
	{ 213, 195 },
	{ 227, 219 }
};

NJS_TEX uvADV02_00213B7C[] = {
	{ 217, 5 },
	{ 218, 0 },
	{ 252, 103 },
	{ 254, 102 },
	{ 251, 250 },
	{ 255, 252 },
	{ 214, 254 },
	{ 29, 254 },
	{ 255, 121 },
	{ 0, 134 },
	{ 217, 5 },
	{ 40, 0 },
	{ 255, 252 },
	{ 2, 255 },
	{ 251, 250 },
	{ 0, 249 },
	{ 252, 103 },
	{ 0, 100 },
	{ 217, 5 },
	{ 37, 8 },
	{ 218, 0 },
	{ 41, 0 },
	{ 41, 0 },
	{ 37, 8 },
	{ 3, 99 },
	{ 0, 100 },
	{ 2, 255 },
	{ 0, 249 }
};

NJS_TEX uvADV02_00213BEC[] = {
	{ 239, 63 },
	{ 228, 13 },
	{ 253, 2 },
	{ 137, 12 },
	{ 116, 0 },
	{ 126, 63 },
	{ 106, 127 },
	{ 134, 108 },
	{ 229, 109 },
	{ 106, 127 },
	{ 229, 109 },
	{ 255, 127 },
	{ 239, 63 },
	{ 253, 2 }
};

NJS_TEX uvADV02_00213C24[] = {
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -12 },
	{ 510, -16 },
	{ 0, -255 },
	{ 510, -255 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -17 },
	{ 510, -3 },
	{ 0, -255 },
	{ 510, -255 }
};

NJS_TEX uvADV02_00213C54[] = {
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 }
};

NJS_TEX uvADV02_00213C64[] = {
	{ 0, 255 },
	{ 0 },
	{ 731, 255 },
	{ 652, 0 },
	{ 984, 255 },
	{ 943, 0 },
	{ 1275, 255 },
	{ 1275, 0 },
	{ 0, 255 },
	{ 0 },
	{ 716, 255 },
	{ 640, 0 },
	{ 1005, 255 },
	{ 953, 0 },
	{ 1274, 255 },
	{ 1275, 0 }
};

NJS_TEX uvADV02_00213CA4[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -255 },
	{ 255, -255 }
};

NJS_TEX uvADV02_00213CB4[] = {
	{ 2040, 255 },
	{ 445, 254 },
	{ 2040, -255 },
	{ 2040, -255 },
	{ 475, -255 },
	{ 445, 254 },
	{ 0, -255 },
	{ 0, 255 },
	{ 2040, -255 },
	{ 445, -255 },
	{ 475, 254 },
	{ 0, -255 },
	{ 0, 255 },
	{ 2040, -255 },
	{ 2040, 255 },
	{ 475, 254 },
	{ 0, 255 },
	{ 0, -255 },
	{ 263, 255 },
	{ 261, -255 },
	{ 506, 255 },
	{ 509, -255 },
	{ 765, 255 },
	{ 765, -255 }
};

NJS_TEX uvADV02_00213D14[] = {
	{ 0, 254 },
	{ 1020, 254 },
	{ 0, 80 },
	{ 1020, 76 },
	{ 0, -84 },
	{ 1020, -80 },
	{ 0, -255 },
	{ 1020, -255 }
};

NJS_TEX uvADV02_00213D34[] = {
	{ 1020, -1275 },
	{ 0, -1275 },
	{ 1020, -859 },
	{ 0, -869 },
	{ 0, 255 },
	{ 1020, 255 },
	{ 0, -150 },
	{ 1020, -160 }
};

NJS_TEX uvADV02_00213D54[] = {
	{ 382, 254 },
	{ 510, 0 },
	{ 255, 0 },
	{ 439, 0 },
	{ 510, 0 },
	{ 382, 254 },
	{ 127, 254 },
	{ 255, 0 },
	{ 0 },
	{ 127, -255 },
	{ 127, -255 },
	{ 382, -255 },
	{ 255, 0 },
	{ 510, 0 }
};

NJS_TEX uvADV02_00213D8C[] = {
	{ 0, 255 },
	{ 0 },
	{ 254, 255 },
	{ 254, 0 },
	{ 510, 255 },
	{ 509, 0 },
	{ 765, 255 },
	{ 765, 0 },
	{ 764, 0 },
	{ 765, 255 },
	{ 509, 0 },
	{ 508, 255 },
	{ 254, 0 },
	{ 251, 255 },
	{ 0 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlistADV02_00213DCC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, polyADV02_002139D4, NULL, NULL, NULL, uvADV02_00213B4C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, polyADV02_002139F0, NULL, NULL, NULL, uvADV02_00213B7C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, polyADV02_00213A30, NULL, NULL, NULL, uvADV02_00213BEC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, polyADV02_00213A50, NULL, NULL, NULL, uvADV02_00213C24, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, polyADV02_00213A6C, NULL, NULL, NULL, uvADV02_00213C54, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, polyADV02_00213A76, NULL, NULL, NULL, uvADV02_00213C64, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 1, polyADV02_00213A9A, NULL, NULL, NULL, uvADV02_00213CA4, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 5, polyADV02_00213AA4, NULL, NULL, NULL, uvADV02_00213CB4, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 1, polyADV02_00213ADE, NULL, NULL, NULL, uvADV02_00213D14, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 2, polyADV02_00213AF0, NULL, NULL, NULL, uvADV02_00213D34, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 3, polyADV02_00213B04, NULL, NULL, NULL, uvADV02_00213D54, NULL },
	{ NJD_MESHSET_TRIMESH | 11, 2, polyADV02_00213B26, NULL, NULL, NULL, uvADV02_00213D8C, NULL }
};

NJS_VECTOR vertexADV02_00213EEC[] = {
	{ 145.7687f, 1.706118f, 46.90804f },
	{ 120.9604f, 1.334503f, -40.27f },
	{ 151.6489f, 45.06743f, 47.50871f },
	{ 125.3269f, 45.06743f, -42.46082f },
	{ -117.4104f, 45.06743f, -174.0998f },
	{ -118.1903f, 84.10707f, -172.0086f },
	{ -140.7216f, 51.15273f, -210.0139f },
	{ -161.7278f, 51.15273f, -210.4143f },
	{ -140.3849f, 78.15266f, -210.3776f },
	{ -160.483f, 78.74626f, -211.3272f },
	{ -182.6235f, 45.06743f, -173.5908f },
	{ -178.2536f, 84.81578f, -171.4827f },
	{ -169.054f, 80.82381f, -171.6972f },
	{ -170.4809f, 50.97755f, -172.9327f },
	{ -128.7834f, 50.68076f, -173.4014f },
	{ -128.8786f, 80.52702f, -171.9653f },
	{ -136.1253f, 65.62675f, -213.9087f },
	{ -124.1661f, 65.0195f, -172.4302f },
	{ -165.1004f, 64.20329f, -214.718f },
	{ -173.9318f, 65.0195f, -172.5615f },
	{ 159.1125f, 20.33247f, -20.10918f },
	{ 157.0479f, 1.794643f, -28.26325f },
	{ 168.621f, 20.60317f, 19.13532f },
	{ 170.398f, 1.709362f, 26.498f },
	{ 157.0891f, 13.24969f, -28.37536f },
	{ 170.506f, 13.04565f, 26.75841f },
	{ 133.5521f, 20.99448f, -13.37898f },
	{ 126.4258f, 1.358271f, -20.7124f },
	{ 142.1122f, 1.543743f, 33.92163f },
	{ 144.9357f, 20.99449f, 24.73263f },
	{ 146.6758f, 13.12137f, 32.65045f },
	{ 131.6204f, 13.34383f, -21.54081f },
	{ -164.7687f, 79.78504f, -181.6616f },
	{ -134.632f, 79.33984f, -181.3209f },
	{ -130.1459f, 65.32313f, -181.1774f },
	{ -134.7527f, 50.91674f, -182.0712f },
	{ -166.1045f, 51.06514f, -182.037f },
	{ -169.5164f, 64.6114f, -181.6478f },
	{ -165.5962f, 50.82362f, -211.8625f },
	{ -165.5953f, 50.82362f, -177.4678f },
	{ -165.5951f, 58.87362f, -182.5794f },
	{ -165.5961f, 58.87362f, -214.1709f },
	{ -155.9909f, 50.82362f, -177.4678f },
	{ -155.9908f, 58.87362f, -182.5794f },
	{ -155.9914f, 58.87362f, -214.1709f },
	{ -153.4198f, 50.89446f, -182.3878f },
	{ -153.4198f, 54.12155f, -182.3878f },
	{ -153.4203f, 54.12155f, -211.962f },
	{ -148.1785f, 50.89446f, -182.3878f },
	{ -148.1785f, 54.12155f, -182.3878f },
	{ -148.179f, 54.12155f, -211.962f },
	{ -145.3664f, 58.87362f, -182.5794f },
	{ -145.3666f, 50.82362f, -177.4678f },
	{ -135.7622f, 50.82362f, -177.4678f },
	{ -135.762f, 58.87362f, -182.5794f },
	{ -135.7631f, 50.82362f, -211.8625f },
	{ -135.763f, 58.87362f, -214.1709f },
	{ -145.3671f, 58.87362f, -214.1709f },
	{ -148.8804f, 54.07154f, -174.3392f },
	{ -146.9764f, 54.07154f, -177.6371f },
	{ -148.0236f, 54.07154f, -177.6371f },
	{ -150.7844f, 52.39709f, -177.6371f },
	{ -153.3604f, 50.84829f, -173.1753f },
	{ -154.5924f, 54.07154f, -177.6371f },
	{ -148.8804f, 54.07154f, -180.9349f },
	{ -145.3666f, 50.82362f, -177.4678f },
	{ -148.1785f, 50.89446f, -182.3878f },
	{ -152.6884f, 54.07154f, -174.3393f },
	{ -148.2084f, 50.84829f, -173.1753f },
	{ -155.9909f, 50.82362f, -177.4678f },
	{ -152.6884f, 54.07154f, -180.9349f },
	{ -153.4198f, 50.89446f, -182.3878f }
};

NJS_VECTOR normalADV02_0021424C[] = {
	{ -0.9589019f, 0.248115f, 0.137645f },
	{ -0.901584f, 0.213546f, 0.376223f },
	{ -0.976367f, 0.047612f, 0.210808f },
	{ -0.9407859f, 0.040461f, 0.336578f },
	{ 0.033075f, -0.08312f, 0.995991f },
	{ 0.028334f, -0.030842f, 0.999123f },
	{ -0.416024f, 0.737225f, 0.532376f },
	{ 0.449159f, 0.723496f, 0.524223f },
	{ -0.4402f, -0.714194f, 0.544198f },
	{ 0.403259f, -0.722957f, 0.560995f },
	{ -0.014471f, -0.064774f, 0.997795f },
	{ 0.002674f, -0.047087f, 0.9988869f },
	{ 0.239021f, -0.311088f, 0.919834f },
	{ 0.265178f, 0.197205f, 0.943817f },
	{ -0.240359f, 0.164184f, 0.9566979f },
	{ -0.217217f, -0.270148f, 0.937996f },
	{ -0.66379f, -0.000151f, 0.747919f },
	{ -0.351157f, -0.04563f, 0.935204f },
	{ 0.650382f, 0.004136f, 0.759596f },
	{ 0.459374f, -0.061092f, 0.886139f },
	{ -0.562247f, -0.7131709f, 0.418647f },
	{ -0.427547f, 0.56761f, 0.703578f },
	{ -0.6867689f, -0.71503f, -0.130693f },
	{ -0.705079f, 0.578023f, -0.410795f },
	{ -0.436086f, -0.326116f, 0.838736f },
	{ -0.783492f, -0.297563f, -0.545523f },
	{ -0.7206179f, -0.5532219f, 0.417917f },
	{ -0.404542f, 0.74892f, 0.524847f },
	{ -0.592189f, 0.762716f, -0.259954f },
	{ -0.834435f, -0.551105f, 0.00156f },
	{ -0.8832729f, -0.09749699f, -0.458609f },
	{ -0.557533f, -0.139827f, 0.818294f },
	{ 0.521461f, -0.825443f, 0.216152f },
	{ -0.5059749f, -0.823384f, 0.256959f },
	{ -0.913846f, -0.018766f, 0.405627f },
	{ -0.500819f, 0.83899f, 0.212783f },
	{ 0.551447f, 0.816728f, 0.169888f },
	{ 0.95315f, -0.031948f, 0.300808f },
	{ -1, 0.00004f, 0.00003f },
	{ -0.538951f, 0.451535f, 0.71109f },
	{ -0.613055f, 0.692365f, 0.380519f },
	{ -0.635096f, 0.772433f, 0.000019f },
	{ 0.241574f, 0.478526f, 0.844189f },
	{ 0.423219f, 0.796331f, 0.432137f },
	{ 0.438229f, 0.898863f, -0.00008f },
	{ 0.306534f, 0.182032f, 0.934292f },
	{ 0.513681f, 0.574378f, 0.637356f },
	{ 0.5670069f, 0.8237129f, -0.00011f },
	{ -0.28635f, 0.185986f, 0.939901f },
	{ -0.49006f, 0.587533f, 0.643931f },
	{ -0.5478269f, 0.836592f, 0.00001f },
	{ -0.40847f, 0.802587f, 0.434749f },
	{ -0.22712f, 0.479204f, 0.847809f },
	{ 0.5389619f, 0.451525f, 0.7110879f },
	{ 0.613091f, 0.692346f, 0.380495f },
	{ 1, -0.00016f, -0.0003f },
	{ 0.635097f, 0.772432f, -0.00019f },
	{ -0.42577f, 0.904831f, 0.000008f },
	{ 0.327489f, 0.737088f, 0.591145f },
	{ 0.612614f, 0.772335f, 0.167935f },
	{ -0.163843f, 0.9310279f, 0.326102f },
	{ 0.08737499f, 0.989494f, 0.115187f },
	{ -0.45245f, 0.399432f, 0.797335f },
	{ -0.517393f, 0.855718f, 0.007208f },
	{ 0.28046f, 0.8543659f, -0.437494f },
	{ 0.9115289f, 0.409786f, 0.034502f },
	{ 0.44566f, 0.446379f, -0.7759719f },
	{ -0.259019f, 0.847029f, 0.464167f },
	{ 0.451392f, 0.38483f, 0.805078f },
	{ -0.904722f, 0.424649f, 0.033934f },
	{ -0.267066f, 0.8647299f, -0.425345f },
	{ -0.450492f, 0.454993f, -0.7681389f }
};

NJS_MODEL_SADX attachADV02_002145AC = { vertexADV02_00213EEC, normalADV02_0021424C, LengthOfArray(vertexADV02_00213EEC), meshlistADV02_00213DCC, matlistADV02_002138E4, LengthOfArray(meshlistADV02_00213DCC), LengthOfArray(matlistADV02_002138E4),{ -6.058754f, 43.07514f, -83.60467f }, 219.9223f, NULL };

NJS_OBJECT objectADV02_002145D4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attachADV02_002145AC, 0, 0, 0, 0, 0, 0, 1, 1, 1, &objectADV02_002138B0, NULL };

NJS_MATERIAL matlistADV02_00114FA8[] = {
	{ { 0xFFFFFFFF },{ 0x00FFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_00114FBC[] = {
	4, 2, 0, 3, 1,
	0x8000u | 11, 16, 17, 14, 15, 12, 13, 10, 11, 8, 9, 6,
	7, 9, 6, 7, 4, 5, 2, 3
};

NJS_COLOR vcolor_00114FF0[] = {
	{ 0xFF7D7568 },
	{ 0xFF7D7568 },
	{ 0xFF7D7568 },
	{ 0xFF7D7568 },
	{ 0xFF7D7568 },
	{ 0xFF575B53 },
	{ 0xFF575B53 },
	{ 0xFF575B53 },
	{ 0xFF575B53 },
	{ 0xFF575B53 },
	{ 0xFF575B53 },
	{ 0xFF575B53 },
	{ 0xFF575B53 },
	{ 0xFF575B53 },
	{ 0xFF7D7568 },
	{ 0xFF575B53 },
	{ 0xFF7D7568 },
	{ 0xFF7D7568 },
	{ 0xFF7D7568 },
	{ 0xFF7D7568 },
	{ 0xFF7D7568 },
	{ 0xFF7D7568 }
};

NJS_TEX uvADV02_00115048[] = {
	{ 2097, 250 },
	{ 1999, 255 },
	{ 2120, 90 },
	{ 2021, 94 },
	{ 1195, 218 },
	{ 1179, 92 },
	{ 1105, 216 },
	{ 1083, 91 },
	{ 983, 219 },
	{ 963, 82 },
	{ 807, 215 },
	{ 788, 0 },
	{ 612, 228 },
	{ 601, 12 },
	{ 388, 229 },
	{ 601, 12 },
	{ 388, 229 },
	{ 400, 69 },
	{ 188, 245 },
	{ 214, 84 },
	{ 57, 250 },
	{ 82, 90 }
};

NJS_MESHSET_SADX meshlistADV02_001150A0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, polyADV02_00114FBC, NULL, NULL, vcolor_00114FF0, uvADV02_00115048, NULL }
};

NJS_VECTOR vertexADV02_001150C0[] = {
	{ 312.7324f, -16.31214f, -80.51093f },
	{ 312.7324f, 107.3294f, -101.8893f },
	{ 266.2204f, -13.19758f, -174.7326f },
	{ 266.2204f, 110.4439f, -196.1109f },
	{ 179.1791f, -8.726415f, -244.184f },
	{ 179.1791f, 114.9151f, -265.5623f },
	{ 63.45935f, 3.056559f, -286.2917f },
	{ 63.45935f, 126.698f, -307.67f },
	{ -51.43462f, 4.386477f, -289.6632f },
	{ -51.43462f, 170.3014f, -311.0416f },
	{ -168.3954f, 13.89997f, -259.5771f },
	{ -168.3954f, 179.8148f, -275.7555f },
	{ -264.4909f, 11.3096f, -160.5345f },
	{ -264.4909f, 115.9831f, -176.7128f },
	{ -311.6331f, 12.98073f, -48.19267f },
	{ -311.6331f, 109.5564f, -69.57101f },
	{ -312.7321f, 12.02307f, 56.45493f },
	{ -312.7321f, 108.5987f, 35.07658f }
};

NJS_VECTOR normalADV02_00115198[] = {
	{ -0.893048f, 0.076663f, 0.443382f },
	{ -0.893048f, 0.076663f, 0.443382f },
	{ -0.786919f, 0.105133f, 0.608034f },
	{ -0.756922f, 0.111343f, 0.64395f },
	{ -0.488879f, 0.148629f, 0.859597f },
	{ -0.460844f, 0.151207f, 0.874505f },
	{ -0.174054f, 0.147348f, 0.97365f },
	{ -0.140889f, 0.143831f, 0.979522f },
	{ 0.134044f, 0.112021f, 0.984623f },
	{ 0.156973f, 0.109162f, 0.981551f },
	{ 0.502144f, 0.104828f, 0.858407f },
	{ 0.461646f, 0.103149f, 0.881047f },
	{ 0.829078f, 0.099571f, 0.550196f },
	{ 0.795731f, 0.102846f, 0.596854f },
	{ 0.982608f, 0.040134f, 0.181305f },
	{ 0.97021f, 0.052361f, 0.236539f },
	{ 0.999942f, 0.002329f, 0.010522f },
	{ 0.999942f, 0.002329f, 0.010522f }
};

NJS_MODEL_SADX attachADV02_00115270 = { vertexADV02_001150C0, normalADV02_00115198, LengthOfArray(vertexADV02_001150C0), meshlistADV02_001150A0, matlistADV02_00114FA8, LengthOfArray(meshlistADV02_001150A0), LengthOfArray(matlistADV02_00114FA8),{ 0.000153f, 81.75136f, -127.2933f }, 362.7187f, NULL };

NJS_OBJECT objectADV02_0011529C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachADV02_00115270, 99.90008f, -57.9514f, -33.35566f, 0, 0, 0, 1, 1, 1, NULL, NULL };

#pragma warning(pop)
