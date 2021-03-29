#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

extern "C" __declspec(dllexport) NJS_MKEY_F _0016B4B4_1_pos[] = {
	{ 0, 0, 14, -13.75f },
{ 7, 1.5f, 14, -27.7f }
};

extern "C" __declspec(dllexport) NJS_MKEY_F _0016B4B4_2_pos[] = {
	{ 0, 0, 14, 13.75f },
{ 7, 1.5f, 14, 27.7f }
};

extern "C" __declspec(dllexport) NJS_MDATA2 _0016B4B4_mdat[] = {
	{ NULL, NULL, 0, 0 },
{ _0016B4B4_1_pos, NULL, LengthOfArray<Uint32>(_0016B4B4_1_pos), 0 },
{ _0016B4B4_2_pos, NULL, LengthOfArray<Uint32>(_0016B4B4_2_pos), 0 }
};

extern "C" __declspec(dllexport) NJS_MOTION _0016B4B4 = { _0016B4B4_mdat, 8, NJD_MTYPE_POS_0 | NJD_MTYPE_ANG_1, 2 };

#pragma warning(pop)