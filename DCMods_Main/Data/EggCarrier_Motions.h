#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

//OEggChair

NJS_MKEY_A _197dbc_4_rot[] = {
	{ 0, 0, 0, 0 },
	{ 1, 0, 0, 0xFFFFFFA5 },
	{ 2, 0, 0, 0xFFFFFF4A },
	{ 3, 0, 0, 0xFFFFFF87 },
	{ 4, 0, 0, 0xFFFFFFC4 },
	{ 5, 0, 0, 0 },
	{ 6, 0, 0, 0xFFFFFFC4 },
	{ 7, 0, 0, 0xFFFFFF87 },
	{ 8, 0, 0, 0xFFFFFF4A },
	{ 9, 0, 0, 0xFFFFFF87 },
	{ 10, 0, 0, 0xFFFFFFC4 },
	{ 11, 0, 0, 0 },
	{ 12, 0, 0, 0xFFFFFFC4 },
	{ 13, 0, 0, 0xFFFFFF87 },
	{ 14, 0, 0, 0xFFFFFF4A }
};

NJS_MKEY_F _197dbc_6_pos[] = {
	{ 0, -17.28465f, 38.44907f, -0.09192999f },
	{ 1, -17.28465f, 38.27728f, -0.09192999f },
	{ 2, -17.28465f, 38.10548f, -0.09192999f },
	{ 3, -17.28465f, 38.22001f, -0.09192999f },
	{ 4, -17.28465f, 38.33454f, -0.09192999f },
	{ 5, -17.28465f, 38.44907f, -0.09192999f },
	{ 6, -17.28465f, 38.33454f, -0.09192999f },
	{ 7, -17.28465f, 38.22001f, -0.09192999f },
	{ 8, -17.28465f, 38.10548f, -0.09192999f },
	{ 9, -17.28465f, 38.22001f, -0.09192999f },
	{ 10, -17.28465f, 38.33454f, -0.09192999f },
	{ 11, -17.28465f, 38.44907f, -0.09192999f },
	{ 12, -17.28465f, 38.33454f, -0.09192999f },
	{ 13, -17.28465f, 38.22001f, -0.09192999f },
	{ 14, -17.28465f, 38.10548f, -0.09192999f }
};

NJS_MKEY_A _197dbc_20_rot[] = {
	{ 0, 0, 0, 0 },
	{ 1, 0, 0, 0xFFFFFFA5 },
	{ 2, 0, 0, 0xFFFFFF4A },
	{ 3, 0, 0, 0xFFFFFF87 },
	{ 4, 0, 0, 0xFFFFFFC4 },
	{ 5, 0, 0, 0 },
	{ 6, 0, 0, 0xFFFFFFC4 },
	{ 7, 0, 0, 0xFFFFFF87 },
	{ 8, 0, 0, 0xFFFFFF4A },
	{ 9, 0, 0, 0xFFFFFF87 },
	{ 10, 0, 0, 0xFFFFFFC4 },
	{ 11, 0, 0, 0 },
	{ 12, 0, 0, 0xFFFFFFC4 },
	{ 13, 0, 0, 0xFFFFFF87 },
	{ 14, 0, 0, 0xFFFFFF4A }
};

NJS_MDATA2 _197dbc_mdat[] = {
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, _197dbc_4_rot, 0, LengthOfArray(_197dbc_4_rot) },
	{ NULL, NULL, 0, 0 },
	{ _197dbc_6_pos, NULL, LengthOfArray(_197dbc_6_pos), 0 },
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
	{ NULL, _197dbc_20_rot, 0, LengthOfArray(_197dbc_20_rot) }
};

NJS_MOTION _197dbc = { _197dbc_mdat, 15, NJD_MTYPE_POS_0 | NJD_MTYPE_ANG_1, 2 };

#pragma warning(pop)