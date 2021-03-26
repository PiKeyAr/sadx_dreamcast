#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

//SA1 Chao fountain in SS garden at 00014990

//Chao Race door animation
NJS_MKEY_F _12ADC_1_pos[] = {
	{ 0, 20, 0, -0.400024f },
	{ 1, 36, 0, -0.400024f }
};

NJS_MKEY_F _12ADC_2_pos[] = {
	{ 0, -20, 0, -0.400024f },
	{ 1, -37, 0, -0.400024f }
};

NJS_MDATA2 _12ADC_mdat[] = {
	{ NULL, NULL, 0, 0 },
	{ _12ADC_1_pos, NULL, LengthOfArray(_12ADC_1_pos), 0 },
	{ _12ADC_2_pos, NULL, LengthOfArray(_12ADC_2_pos), 0 }
};

NJS_MOTION _12ADC = { _12ADC_mdat, 2, NJD_MTYPE_POS_0 | NJD_MTYPE_ANG_1, 2 };

#pragma warning(pop)