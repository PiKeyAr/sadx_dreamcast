
NJS_MATERIAL matlist_000D38DC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 73, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_000D3918[] = {
	0x8000u | 5, 2, 21, 3, 7, 0,
	0x8000u | 5, 0, 12, 10, 18, 9,
	5, 16, 7, 15, 0, 12,
	5, 12, 17, 15, 14, 16,
	0x8000u | 5, 9, 19, 10, 5, 0,
	5, 2, 20, 3, 5, 0
};

Sint16 poly_000D3960[] = {
	8, 21, 7, 6, 16, 25, 14, 13, 26,
	0x8000u | 8, 19, 9, 8, 18, 27, 12, 11, 26,
	0x8000u | 6, 20, 5, 4, 19, 22, 8,
	4, 12, 26, 17, 14,
	0x8000u | 5, 4, 23, 20, 1, 2,
	0x8000u | 5, 6, 21, 24, 2, 1
};

Sint16 poly_000D39B4[] = {
	7, 51, 36, 37, 50, 41, 38, 39,
	8, 30, 46, 43, 34, 35, 51, 42, 37,
	12, 43, 31, 30, 44, 47, 29, 28, 45, 48, 33, 32, 49,
	0x8000u | 5, 38, 39, 49, 40, 33
};

NJS_TEX uv_000D39FC[] = {
	{ 269, 219 },
	{ 476, 126 },
	{ 233, -30 },
	{ 510, -91 },
	{ 233, -219 },
	{ 270, -208 },
	{ 13, -130 },
	{ 268, 30 },
	{ 62, 130 },
	{ 259, 208 },
	{ 70, 141 },
	{ 19, -77 },
	{ 262, -12 },
	{ 269, -235 },
	{ 490, -58 },
	{ 490, -58 },
	{ 419, 126 },
	{ 262, -12 },
	{ 281, 235 },
	{ 70, 141 },
	{ 259, 208 },
	{ 425, 126 },
	{ 268, 30 },
	{ 496, -75 },
	{ 270, -208 },
	{ 269, 219 },
	{ 86, 116 },
	{ 233, -30 },
	{ 0, -70 },
	{ 233, -219 }
};

NJS_TEX uv_000D3A74[] = {
	{ 2100, 123 },
	{ 1893, 123 },
	{ 1895, 255 },
	{ 1683, 123 },
	{ 1700, 255 },
	{ 1481, 123 },
	{ 1478, 255 },
	{ 1297, 255 },
	{ 550, 123 },
	{ 722, 123 },
	{ 731, 255 },
	{ 920, 123 },
	{ 933, 255 },
	{ 1141, 123 },
	{ 1148, 255 },
	{ 1297, 255 },
	{ 181, 123 },
	{ 371, 123 },
	{ 381, 255 },
	{ 550, 123 },
	{ 522, 255 },
	{ 731, 255 },
	{ 1141, 123 },
	{ 1297, 255 },
	{ 1323, 123 },
	{ 1481, 123 },
	{ 381, 255 },
	{ 204, 255 },
	{ 181, 123 },
	{ 0, 255 },
	{ 0, 123 },
	{ 1895, 255 },
	{ 2100, 123 },
	{ 2093, 254 },
	{ 2295, 123 },
	{ 2295, 255 }
};

NJS_TEX uv_000D3B04[] = {
	{ 1967, 255 },
	{ 2181, 255 },
	{ 2172, 0 },
	{ 2353, 255 },
	{ 2375, 0 },
	{ 2550, 255 },
	{ 2550, 0 },
	{ 1339, 255 },
	{ 1494, 255 },
	{ 1515, 0 },
	{ 1730, 255 },
	{ 1705, 0 },
	{ 1967, 255 },
	{ 1927, 0 },
	{ 2172, 0 },
	{ 1515, 0 },
	{ 1315, 0 },
	{ 1339, 255 },
	{ 1105, 0 },
	{ 1144, 255 },
	{ 903, 0 },
	{ 912, 255 },
	{ 687, 0 },
	{ 684, 255 },
	{ 458, 0 },
	{ 468, 255 },
	{ 260, 255 },
	{ 0, 255 },
	{ 0 },
	{ 260, 255 },
	{ 224, 0 },
	{ 458, 0 }
};

NJS_MESHSET_SADX meshlist_000D3B84[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000D39B4, NULL, NULL, NULL, uv_000D3B04, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_000D3960, NULL, NULL, NULL, uv_000D3A74, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 6, poly_000D3918, NULL, NULL, NULL, uv_000D39FC, NULL }
};

NJS_VECTOR vertex_000D3BCC[] = {
	{ -0.397924f, 3.317922f, -0.7545879f },
	{ 12.69004f, 1.304852f, 7.818695f },
	{ 10.77017f, 2.947915f, 6.742528f },
	{ 4.689705f, 4.811618f, 2.118f },
	{ 8.436237f, 1.139475f, -5.183758f },
	{ 6.794819f, 3.172009f, -4.112101f },
	{ -0.423853f, 1.479809f, 10.13221f },
	{ -0.709222f, 3.054481f, 7.632543f },
	{ -0.618575f, 1.211039f, -13.78408f },
	{ -0.355359f, 2.905876f, -12.05956f },
	{ -0.248674f, 3.911243f, -7.226575f },
	{ -10.1957f, 1.150171f, -3.497458f },
	{ -8.112288f, 2.668582f, -2.931042f },
	{ -14.62348f, 1.221999f, 7.710023f },
	{ -12.67833f, 3.023385f, 6.560122f },
	{ -6.10057f, 4.272399f, 3.090997f },
	{ -6.986539f, 3.026158f, 9.899295f },
	{ -11.70062f, 2.809808f, 1.782123f },
	{ -6.361082f, 2.909803f, -9.867357f },
	{ 4.623877f, 3.042018f, -9.504189f },
	{ 10.47656f, 3.217939f, 0.769814f },
	{ 5.512908f, 2.892463f, 10.05464f },
	{ 6.23278f, 1.364558f, -10.00548f },
	{ 12.37553f, 1.387764f, 0.154052f },
	{ 6.669745f, 1.098323f, 12.37073f },
	{ -7.47601f, 1.177622f, 12.02228f },
	{ -13.49873f, 1.176829f, 1.033847f },
	{ -7.763919f, 1.061708f, -11.16783f },
	{ 13.33322f, -0.075f, 8.186867f },
	{ 10.91451f, 2.548193f, 6.754457f },
	{ 9.024457f, -0.075f, -5.382761f },
	{ 6.794818f, 2.477223f, -4.1121f },
	{ -0.401443f, -0.075f, 10.2515f },
	{ -0.7141089f, 2.600549f, 7.824024f },
	{ -0.562313f, -0.075f, -14.26842f },
	{ -0.327453f, 2.356806f, -12.13723f },
	{ -10.46734f, -0.075f, -3.934211f },
	{ -8.356683f, 2.143915f, -3.128651f },
	{ -15.02538f, -0.075f, 7.742508f },
	{ -12.8472f, 2.662577f, 6.694764f },
	{ -7.206973f, 2.531537f, 10.21635f },
	{ -12.08411f, 2.227916f, 1.596671f },
	{ -6.581013f, 2.434438f, -10.15085f },
	{ 4.73291f, 2.655276f, -9.63331f },
	{ 10.62091f, 2.818217f, 0.781746f },
	{ 5.601264f, 2.380492f, 10.33259f },
	{ 6.608237f, -0.066107f, -10.21977f },
	{ 12.99537f, -0.075f, 0.09254999f },
	{ 6.760695f, -0.075f, 12.61888f },
	{ -7.282261f, -0.075f, 12.4737f },
	{ -13.84347f, -0.075f, 0.985317f },
	{ -8.149316f, -0.075f, -11.00793f }
};

NJS_VECTOR normal_000D3E3C[] = {
	{ -0.054597f, 0.997814f, -0.037221f },
	{ 0.531585f, 0.797358f, 0.285724f },
	{ 0.4153f, 0.8813829f, 0.225145f },
	{ -0.005284f, 0.999744f, -0.02202f },
	{ 0.6183659f, 0.698986f, -0.359225f },
	{ 0.352763f, 0.9026729f, -0.246455f },
	{ -0.016977f, 0.8239999f, 0.566335f },
	{ -0.005023f, 0.954075f, 0.299526f },
	{ 0.011544f, 0.702801f, -0.711292f },
	{ 0.045432f, 0.847555f, -0.5287589f },
	{ -0.009218f, 0.998499f, -0.053982f },
	{ -0.514661f, 0.810495f, -0.279681f },
	{ -0.321286f, 0.929107f, -0.183129f },
	{ -0.56243f, 0.780867f, 0.27188f },
	{ -0.444997f, 0.878863f, 0.171981f },
	{ -0.027901f, 0.99915f, -0.030351f },
	{ -0.058863f, 0.881517f, 0.468469f },
	{ -0.429902f, 0.874014f, -0.22646f },
	{ -0.393843f, 0.861199f, -0.321286f },
	{ 0.370328f, 0.84063f, -0.39522f },
	{ 0.48334f, 0.859144f, -0.168091f },
	{ 0.030154f, 0.884765f, 0.465061f },
	{ 0.569294f, 0.682849f, -0.457845f },
	{ 0.634603f, 0.736863f, -0.233048f },
	{ 0.128496f, 0.805959f, 0.577857f },
	{ -0.113516f, 0.761228f, 0.6384709f },
	{ -0.585727f, 0.761603f, -0.277282f },
	{ -0.506449f, 0.73699f, -0.447611f },
	{ 0.600939f, 0.730832f, 0.323661f },
	{ 0.614924f, 0.729942f, 0.298419f },
	{ 0.642317f, 0.682553f, -0.348641f },
	{ 0.642555f, 0.682471f, -0.348363f },
	{ -0.011099f, 0.662192f, 0.749252f },
	{ 0.021856f, 0.663027f, 0.748276f },
	{ 0.027423f, 0.657345f, -0.753091f },
	{ 0.07842f, 0.652768f, -0.7534879f },
	{ -0.666425f, 0.680463f, -0.304707f },
	{ -0.674697f, 0.677716f, -0.292376f },
	{ -0.6842189f, 0.661726f, 0.306535f },
	{ -0.684883f, 0.6617039f, 0.305096f },
	{ -0.094046f, 0.659706f, 0.745616f },
	{ -0.698769f, 0.6512319f, -0.296006f },
	{ -0.525169f, 0.693438f, -0.493296f },
	{ 0.5457219f, 0.6444989f, -0.535545f },
	{ 0.663628f, 0.707727f, -0.242322f },
	{ 0.031106f, 0.69881f, 0.714631f },
	{ 0.601729f, 0.652976f, -0.45994f },
	{ 0.668229f, 0.706902f, -0.231863f },
	{ 0.136329f, 0.707885f, 0.693047f },
	{ -0.07064299f, 0.661485f, 0.746624f },
	{ -0.701883f, 0.649577f, -0.292249f },
	{ -0.5709f, 0.692436f, -0.441141f }
};

NJS_MODEL_SADX attach_000D40AC = { vertex_000D3BCC, normal_000D3E3C, LengthOfArray(vertex_000D3BCC), meshlist_000D3B84, matlist_000D38DC, LengthOfArray(meshlist_000D3B84), LengthOfArray(matlist_000D38DC),{ -0.846082f, 2.368309f, -0.8247679f }, 19.5393f, NULL };

NJS_OBJECT object_000D40D4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000D40AC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };