#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

NJS_MKEY_A Platform2_action_1_rot[] = {
	{ 0, 0, 0x38E3, 0 },
	{ 1, 0, 0x5554, 0 },
	{ 2, 0, 0x71C6, 0 },
	{ 3, 0, 0x8E38, 0 },
	{ 4, 0, 0xAAA9, 0 },
	{ 5, 0, 0xC71B, 0 },
	{ 6, 0, 0xE38D, 0 },
	{ 7, 0, 0xFFFE, 0 }
};

NJS_MKEY_A Platform2_action_2_rot[] = {
	{ 0, 0, 0x38E3, 0 },
	{ 1, 0, 0x5554, 0 },
	{ 2, 0, 0x71C6, 0 },
	{ 3, 0, 0x8E38, 0 },
	{ 4, 0, 0xAAA9, 0 },
	{ 5, 0, 0xC71B, 0 },
	{ 6, 0, 0xE38D, 0 },
	{ 7, 0, 0xFFFE, 0 }
};

NJS_MKEY_A Platform2_action_3_rot[] = {
	{ 0, 0, 0x38E3, 0 },
	{ 1, 0, 0x5554, 0 },
	{ 2, 0, 0x71C6, 0 },
	{ 3, 0, 0x8E38, 0 },
	{ 4, 0, 0xAAA9, 0 },
	{ 5, 0, 0xC71B, 0 },
	{ 6, 0, 0xE38D, 0 },
	{ 7, 0, 0xFFFE, 0 }
};

NJS_MKEY_A Platform2_action_4_rot[] = {
	{ 0, 0, 0x38E3, 0 },
	{ 1, 0, 0x5554, 0 },
	{ 2, 0, 0x71C6, 0 },
	{ 3, 0, 0x8E38, 0 },
	{ 4, 0, 0xAAA9, 0 },
	{ 5, 0, 0xC71B, 0 },
	{ 6, 0, 0xE38D, 0 },
	{ 7, 0, 0xFFFE, 0 }
};

NJS_MDATA2 Platform2_action_mdat[] = {
	{ NULL, NULL, 0, 0 },
	{ NULL, Platform2_action_1_rot, 0, LengthOfArray(Platform2_action_1_rot) },
	{ NULL, Platform2_action_2_rot, 0, LengthOfArray(Platform2_action_2_rot) },
	{ NULL, Platform2_action_3_rot, 0, LengthOfArray(Platform2_action_3_rot) },
	{ NULL, Platform2_action_4_rot, 0, LengthOfArray(Platform2_action_4_rot) }
};

NJS_MOTION Platform2_action = { Platform2_action_mdat, 8, NJD_MTYPE_POS_0 | NJD_MTYPE_ANG_1, 2 };

#pragma warning(pop)