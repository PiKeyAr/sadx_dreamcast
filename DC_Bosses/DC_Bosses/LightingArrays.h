#include <SADXModLoader.h>

HMODULE Chaos0 = GetModuleHandle(L"BOSSCHAOS0MODELS");

NJS_MATERIAL* Chaos6Materials[] = {
	//Chaos 2
	//extending arm
	((NJS_MATERIAL*)0x01143380),
	((NJS_MATERIAL*)0x01143118),
	((NJS_MATERIAL*)0x01142C30),
	((NJS_MATERIAL*)0x01142748),
	((NJS_MATERIAL*)0x01142130),
	((NJS_MATERIAL*)0x01141C48),
	((NJS_MATERIAL*)0x01141760),
	((NJS_MATERIAL*)0x01141278),
	((NJS_MATERIAL*)0x01140D90),
	((NJS_MATERIAL*)0x01140BD8),
	((NJS_MATERIAL*)0x01140A24),
	((NJS_MATERIAL*)0x01140118),
	((NJS_MATERIAL*)0x0113FD38),
	((NJS_MATERIAL*)0x0113F850),
	//puddle
	((NJS_MATERIAL*)0x038D936C),
	//everything else
	((NJS_MATERIAL*)0x01143924),
	((NJS_MATERIAL*)0x01139FC8),
	((NJS_MATERIAL*)0x01139900),
	((NJS_MATERIAL*)0x01139780),
	((NJS_MATERIAL*)0x011392A8),
	((NJS_MATERIAL*)0x0113335C),
	((NJS_MATERIAL*)0x01133A20),
	((NJS_MATERIAL*)0x01121BE0),
	((NJS_MATERIAL*)0x011235B8),
	((NJS_MATERIAL*)0x011235CC),
	((NJS_MATERIAL*)0x01122DA0),
	((NJS_MATERIAL*)0x011226D8),
	((NJS_MATERIAL*)0x011224F0),
	((NJS_MATERIAL*)0x01121F18),
	((NJS_MATERIAL*)0x0112F2E0),
	((NJS_MATERIAL*)0x0112ED08),
	((NJS_MATERIAL*)0x0112EAA0),
	((NJS_MATERIAL*)0x0112E5B8),
	((NJS_MATERIAL*)0x0112E0D0),
	((NJS_MATERIAL*)0x0112DAB8),
	((NJS_MATERIAL*)0x0112D5D0),
	((NJS_MATERIAL*)0x0112D0E8),
	((NJS_MATERIAL*)0x0112CC00),
	((NJS_MATERIAL*)0x0112C718),
	((NJS_MATERIAL*)0x0112C560),
	((NJS_MATERIAL*)0x0112C3AC),
	((NJS_MATERIAL*)0x0112BAA0),
	((NJS_MATERIAL*)0x0112B5B8),
	((NJS_MATERIAL*)0x0112B1D8),
	((NJS_MATERIAL*)0x0112ACF4),
	((NJS_MATERIAL*)0x0112A820),
	((NJS_MATERIAL*)0x0112A248),
	((NJS_MATERIAL*)0x01129FE0),
	((NJS_MATERIAL*)0x01129AF8),
	((NJS_MATERIAL*)0x01129610),
	((NJS_MATERIAL*)0x01128FF8),
	((NJS_MATERIAL*)0x01128B10),
	((NJS_MATERIAL*)0x01128628),
	((NJS_MATERIAL*)0x01128140),
	((NJS_MATERIAL*)0x01127C58),
	((NJS_MATERIAL*)0x01127AA0),
	((NJS_MATERIAL*)0x011278EC),
	((NJS_MATERIAL*)0x01126FE0),
	((NJS_MATERIAL*)0x01126AF8),
	((NJS_MATERIAL*)0x01126718),
	((NJS_MATERIAL*)0x01126234),
	((NJS_MATERIAL*)0x01125D64),
	((NJS_MATERIAL*)0x01132B88),
	((NJS_MATERIAL*)0x01132718),
	((NJS_MATERIAL*)0x011324D4),
	((NJS_MATERIAL*)0x011320DC),
	((NJS_MATERIAL*)0x01131EAC),
	((NJS_MATERIAL*)0x01131AB8),
	((NJS_MATERIAL*)0x01131648),
	((NJS_MATERIAL*)0x01131404),
	((NJS_MATERIAL*)0x0113100C),
	((NJS_MATERIAL*)0x01130DDC),
	((NJS_MATERIAL*)0x011309EC),
	//Chaos 6
	((NJS_MATERIAL*)0x01271BCC),
	((NJS_MATERIAL*)0x01271BE0),
	((NJS_MATERIAL*)0x012718D4),
	((NJS_MATERIAL*)0x01270910),
	((NJS_MATERIAL*)0x01270924),
	((NJS_MATERIAL*)0x01270938),
	((NJS_MATERIAL*)0x0127094C),
	((NJS_MATERIAL*)0x01270700),
	((NJS_MATERIAL*)0x012704E0),
	((NJS_MATERIAL*)0x012702C0),
	((NJS_MATERIAL*)0x012700A4),
	((NJS_MATERIAL*)0x0126FE60),
	((NJS_MATERIAL*)0x0126FBE8),
	((NJS_MATERIAL*)0x0126F970),
	((NJS_MATERIAL*)0x0126F6F4),
	((NJS_MATERIAL*)0x0126F174),
	((NJS_MATERIAL*)0x0126EB68),
	((NJS_MATERIAL*)0x0126E6EC),
	((NJS_MATERIAL*)0x0126E20C),
	((NJS_MATERIAL*)0x0126DC00),
	((NJS_MATERIAL*)0x0126D778),
	((NJS_MATERIAL*)0x0126D298),
	((NJS_MATERIAL*)0x0126CA44),
	((NJS_MATERIAL*)0x0126C51C),
	((NJS_MATERIAL*)0x0126C530),
	((NJS_MATERIAL*)0x0126C220),
	((NJS_MATERIAL*)0x0126BDBC),
	((NJS_MATERIAL*)0x0126BAE0),
	((NJS_MATERIAL*)0x0126B684),
	((NJS_MATERIAL*)0x0126B378),
	((NJS_MATERIAL*)0x0126AF14),
	((NJS_MATERIAL*)0x0126AC60),
	((NJS_MATERIAL*)0x0126A7FC),
	((NJS_MATERIAL*)0x0126A51C),
	((NJS_MATERIAL*)0x0126A000),
	((NJS_MATERIAL*)0x01269CF4),
	((NJS_MATERIAL*)0x01269800),
	((NJS_MATERIAL*)0x012694F0),
	((NJS_MATERIAL*)0x01268D80),
	((NJS_MATERIAL*)0x01267EB4),
	((NJS_MATERIAL*)0x012677A0),
	((NJS_MATERIAL*)0x012672E0),
	((NJS_MATERIAL*)0x01266BA4),
	((NJS_MATERIAL*)0x01266968),
	((NJS_MATERIAL*)0x01266488),
	((NJS_MATERIAL*)0x01265F74),
	((NJS_MATERIAL*)0x01265890),
	((NJS_MATERIAL*)0x012653D0),
	((NJS_MATERIAL*)0x01264C9C),
	((NJS_MATERIAL*)0x01264A58),
	((NJS_MATERIAL*)0x012645D0),
	((NJS_MATERIAL*)0x012640B8),
	((NJS_MATERIAL*)0x0126391C),
	((NJS_MATERIAL*)0x012633C4),
	((NJS_MATERIAL*)0x01263064),
	((NJS_MATERIAL*)0x01262B88),
	//Perfect Chaos main
	((NJS_MATERIAL*)0x013974D0),
	((NJS_MATERIAL*)0x01396AB0),
	((NJS_MATERIAL*)0x01396AC4),
	((NJS_MATERIAL*)0x01396AD8),
	((NJS_MATERIAL*)0x01396AEC),
	((NJS_MATERIAL*)0x01395C64),
	((NJS_MATERIAL*)0x01395C78),
	((NJS_MATERIAL*)0x01395920),
	((NJS_MATERIAL*)0x01395934),
	((NJS_MATERIAL*)0x0139557C),
	((NJS_MATERIAL*)0x01395238),
	((NJS_MATERIAL*)0x0139524C),
	((NJS_MATERIAL*)0x01394E5C),
	((NJS_MATERIAL*)0x01393A70),
	((NJS_MATERIAL*)0x01393A84),
	((NJS_MATERIAL*)0x01393A98),
	((NJS_MATERIAL*)0x01393AAC),
	((NJS_MATERIAL*)0x01393158),
	((NJS_MATERIAL*)0x0139316C),
	((NJS_MATERIAL*)0x01392D30),
	((NJS_MATERIAL*)0x01392D44),
	((NJS_MATERIAL*)0x01392908),
	((NJS_MATERIAL*)0x0139291C),
	((NJS_MATERIAL*)0x013924E0),
	((NJS_MATERIAL*)0x013924F4),
	((NJS_MATERIAL*)0x013920B8),
	((NJS_MATERIAL*)0x013920CC),
	((NJS_MATERIAL*)0x013915D0),
	((NJS_MATERIAL*)0x01390EA8),
	((NJS_MATERIAL*)0x0138F6F8),
	((NJS_MATERIAL*)0x0138F330),
	((NJS_MATERIAL*)0x0138F344),
	((NJS_MATERIAL*)0x0138F150),
	((NJS_MATERIAL*)0x0138EF70),
	((NJS_MATERIAL*)0x0138DE90),
	((NJS_MATERIAL*)0x0138DEA4),
	((NJS_MATERIAL*)0x0138DEB8),
	((NJS_MATERIAL*)0x0138D7E8),
	((NJS_MATERIAL*)0x0138CB90),
	((NJS_MATERIAL*)0x0138CBA4),
	((NJS_MATERIAL*)0x0138C250),
	((NJS_MATERIAL*)0x0138BC50),
	((NJS_MATERIAL*)0x0138BC64),
	((NJS_MATERIAL*)0x0138B248),
	((NJS_MATERIAL*)0x0138AFF0),
	((NJS_MATERIAL*)0x0138A080),
	((NJS_MATERIAL*)0x01389D60),
	((NJS_MATERIAL*)0x01389A98),
	((NJS_MATERIAL*)0x01389630),
	((NJS_MATERIAL*)0x01389644),
	((NJS_MATERIAL*)0x01389368),
	((NJS_MATERIAL*)0x013890A0),
	((NJS_MATERIAL*)0x01388E7C),
	((NJS_MATERIAL*)0x01388B0C),
	((NJS_MATERIAL*)0x01388B20),
	((NJS_MATERIAL*)0x013887CC),
	((NJS_MATERIAL*)0x01388458),
	((NJS_MATERIAL*)0x01388098),
	((NJS_MATERIAL*)0x01387E74),
	((NJS_MATERIAL*)0x01387B04),
	((NJS_MATERIAL*)0x01387B18),
	((NJS_MATERIAL*)0x013877D4),
	((NJS_MATERIAL*)0x013874D0),
	((NJS_MATERIAL*)0x01387168),
	//Perfect Chaos sinking/rising
	((NJS_MATERIAL*)0x01398C98),
	((NJS_MATERIAL*)0x01398CAC),
	((NJS_MATERIAL*)0x01398CC0),
	((NJS_MATERIAL*)0x01398CD4),
	((NJS_MATERIAL*)0x01398CE8),
	((NJS_MATERIAL*)0x01398CFC),
	((NJS_MATERIAL*)0x013975B0),
	((NJS_MATERIAL*)0x013975C4),
	((NJS_MATERIAL*)0x013975D8),
		((NJS_MATERIAL*)0x0269E980),
		((NJS_MATERIAL*)0x0269E994),
		((NJS_MATERIAL*)0x0269E9A8),
		((NJS_MATERIAL*)0x0269E9BC),
		((NJS_MATERIAL*)0x0269E2E8),
		((NJS_MATERIAL*)0x0269E2FC),
		((NJS_MATERIAL*)0x0269E310),
		((NJS_MATERIAL*)0x0269E324),
		((NJS_MATERIAL*)0x0269E158),
		((NJS_MATERIAL*)0x0269DF90),
		((NJS_MATERIAL*)0x0269DC70),
		((NJS_MATERIAL*)0x0269DC84),
		((NJS_MATERIAL*)0x0269DC98),
		((NJS_MATERIAL*)0x0269DA98),
		((NJS_MATERIAL*)0x0269DAAC),
		((NJS_MATERIAL*)0x0269DAC0),
		((NJS_MATERIAL*)0x0269D8D0),
		((NJS_MATERIAL*)0x0269D5B0),
		((NJS_MATERIAL*)0x0269D5C4),
		((NJS_MATERIAL*)0x0269D5D8),
		((NJS_MATERIAL*)0x0269D3D8),
		((NJS_MATERIAL*)0x0269D3EC),
		((NJS_MATERIAL*)0x0269D400),
		((NJS_MATERIAL*)0x0269D248),
};

NJS_MATERIAL* CharacterMaterials[] = {
	//Eggman
	((NJS_MATERIAL*)0x02EE8418),
	((NJS_MATERIAL*)0x02EE842C),
	((NJS_MATERIAL*)0x02EE8440),
	((NJS_MATERIAL*)0x02EE8454),
	((NJS_MATERIAL*)0x02EE8468),
	((NJS_MATERIAL*)0x02EE847C),
	((NJS_MATERIAL*)0x02EE8490),
	((NJS_MATERIAL*)0x02EE84A4),
	((NJS_MATERIAL*)0x02EE84B8),
	((NJS_MATERIAL*)0x02EE84CC),
	((NJS_MATERIAL*)0x02EE84E0),
	((NJS_MATERIAL*)0x02EE84F4),
	((NJS_MATERIAL*)0x02EE8508),
	((NJS_MATERIAL*)0x02EE851C),
	((NJS_MATERIAL*)0x02EE8530),
	((NJS_MATERIAL*)0x02EE8544),
	((NJS_MATERIAL*)0x02EE8558),
	((NJS_MATERIAL*)0x02EE856C),
	((NJS_MATERIAL*)0x02EE8580),
	((NJS_MATERIAL*)0x02EE8594),
	((NJS_MATERIAL*)0x02EE85A8),
	((NJS_MATERIAL*)0x02EE85BC),
	((NJS_MATERIAL*)0x02EE85D0),
	((NJS_MATERIAL*)0x02EE85E4),
	((NJS_MATERIAL*)0x02EE7840),
	((NJS_MATERIAL*)0x02EE7854),
	((NJS_MATERIAL*)0x02EE7868),
	((NJS_MATERIAL*)0x02EE787C),
	((NJS_MATERIAL*)0x02EE7890),
	((NJS_MATERIAL*)0x02EE58C0),
	((NJS_MATERIAL*)0x02EE58D4),
	((NJS_MATERIAL*)0x02EE58E8),
	((NJS_MATERIAL*)0x02EE58FC),
	((NJS_MATERIAL*)0x02EE5910),
	((NJS_MATERIAL*)0x02EE5924),
	((NJS_MATERIAL*)0x02EE5014),
	((NJS_MATERIAL*)0x02EE4B30),
	((NJS_MATERIAL*)0x02EE4410),
	((NJS_MATERIAL*)0x02EE4424),
	((NJS_MATERIAL*)0x02EE4438),
	((NJS_MATERIAL*)0x02EE444C),
	((NJS_MATERIAL*)0x02EE4460),
	((NJS_MATERIAL*)0x02EE41C8),
	((NJS_MATERIAL*)0x02EE3ECC),
	((NJS_MATERIAL*)0x02EE342C),
	((NJS_MATERIAL*)0x02EE2F48),
	((NJS_MATERIAL*)0x02EE2828),
	((NJS_MATERIAL*)0x02EE283C),
	((NJS_MATERIAL*)0x02EE2850),
	((NJS_MATERIAL*)0x02EE2864),
	((NJS_MATERIAL*)0x02EE2878),
	((NJS_MATERIAL*)0x02EE25E0),
	((NJS_MATERIAL*)0x02EE22F4),
	((NJS_MATERIAL*)0x02EE1838),
	((NJS_MATERIAL*)0x02EE15B8),
	((NJS_MATERIAL*)0x02EE12FC),
	((NJS_MATERIAL*)0x02EE1210),
	((NJS_MATERIAL*)0x02EE1110),
	((NJS_MATERIAL*)0x02EE1124),
	((NJS_MATERIAL*)0x02EE0FE8),
	((NJS_MATERIAL*)0x02EE0FFC),
	((NJS_MATERIAL*)0x02EE1010),
	((NJS_MATERIAL*)0x02EE1024),
	((NJS_MATERIAL*)0x02EE0ED4),
	((NJS_MATERIAL*)0x02EE0EE8),
	((NJS_MATERIAL*)0x02EE0EFC),
	((NJS_MATERIAL*)0x02EE0DE8),
	((NJS_MATERIAL*)0x02EE0CE8),
	((NJS_MATERIAL*)0x02EE0CFC),
	((NJS_MATERIAL*)0x02EE0BC0),
	((NJS_MATERIAL*)0x02EE0BD4),
	((NJS_MATERIAL*)0x02EE0BE8),
	((NJS_MATERIAL*)0x02EE0BFC),
	((NJS_MATERIAL*)0x02EE0AAC),
	((NJS_MATERIAL*)0x02EE0AC0),
	((NJS_MATERIAL*)0x02EE0AD4),
};

DataPointer(NJS_MATERIAL, m00, (Chaos0 + 0x00013AF0));
DataPointer(NJS_MATERIAL, m01, (Chaos0 + 0x00014018));
DataPointer(NJS_MATERIAL, m02, (Chaos0 + 0x00014280));
DataPointer(NJS_MATERIAL, m03, (Chaos0 + 0x00013870));
DataPointer(NJS_MATERIAL, m04, (Chaos0 + 0x000135F0));
DataPointer(NJS_MATERIAL, m05, (Chaos0 + 0x0000A75C));
DataPointer(NJS_MATERIAL, m06, (Chaos0 + 0x0000F518));
DataPointer(NJS_MATERIAL, m07, (Chaos0 + 0x0000F52C));
DataPointer(NJS_MATERIAL, m08, (Chaos0 + 0x0000EDE0));
DataPointer(NJS_MATERIAL, m09, (Chaos0 + 0x0000EDF4));
DataPointer(NJS_MATERIAL, m10, (Chaos0 + 0x0000E718));
DataPointer(NJS_MATERIAL, m11, (Chaos0 + 0x0000DFCC));
DataPointer(NJS_MATERIAL, m12, (Chaos0 + 0x0000DFE0));
DataPointer(NJS_MATERIAL, m13, (Chaos0 + 0x0000DFF4));
DataPointer(NJS_MATERIAL, m14, (Chaos0 + 0x00012A0C));
DataPointer(NJS_MATERIAL, m15, (Chaos0 + 0x0000DBF0));
DataPointer(NJS_MATERIAL, m16, (Chaos0 + 0x0000D8E0));
DataPointer(NJS_MATERIAL, m17, (Chaos0 + 0x0000D20C));
DataPointer(NJS_MATERIAL, m18, (Chaos0 + 0x0000CF6C));
DataPointer(NJS_MATERIAL, m19, (Chaos0 + 0x0000CB84));
DataPointer(NJS_MATERIAL, m20, (Chaos0 + 0x0000C810));
DataPointer(NJS_MATERIAL, m21, (Chaos0 + 0x0000C500));
DataPointer(NJS_MATERIAL, m22, (Chaos0 + 0x0000BE2C));
DataPointer(NJS_MATERIAL, m23, (Chaos0 + 0x0000BB8C));
DataPointer(NJS_MATERIAL, m24, (Chaos0 + 0x0000B7A4));
DataPointer(NJS_MATERIAL, m25, (Chaos0 + 0x0000A1C0));
DataPointer(NJS_MATERIAL, m26, (Chaos0 + 0x00009F0C));
DataPointer(NJS_MATERIAL, m27, (Chaos0 + 0x000099C4));
DataPointer(NJS_MATERIAL, m28, (Chaos0 + 0x00009720));
DataPointer(NJS_MATERIAL, m29, (Chaos0 + 0x000094B0));
DataPointer(NJS_MATERIAL, m30, (Chaos0 + 0x00008D40));
DataPointer(NJS_MATERIAL, m31, (Chaos0 + 0x00008A8C));
DataPointer(NJS_MATERIAL, m32, (Chaos0 + 0x00008544));
DataPointer(NJS_MATERIAL, m33, (Chaos0 + 0x000082A0));
DataPointer(NJS_MATERIAL, m34, (Chaos0 + 0x00008030));

NJS_MATERIAL* Chaos0Materials[] = {
	&m00,
	&m01,
	&m02,
	&m03,
	&m04,
	&m05,
	&m06,
	&m07,
	&m08,
	&m09,
	&m10,
	&m11,
	&m12,
	&m13,
	&m14,
	&m15,
	&m16,
	&m17,
	&m18,
	&m19,
	&m20,
	&m21,
	&m22,
	&m23,
	&m24,
	&m25,
	&m26,
	&m27,
	&m28,
	&m29,
	&m30,
	&m31,
	&m32,
	&m33,
	&m34,
};

NJS_MATERIAL* ForceObjectSpecular[] = {
	((NJS_MATERIAL*)0x01383718),
	((NJS_MATERIAL*)0x0138372C),
	((NJS_MATERIAL*)0x01383740),
	((NJS_MATERIAL*)0x01383754),
	((NJS_MATERIAL*)0x01383768),
	((NJS_MATERIAL*)0x0138377C),
	((NJS_MATERIAL*)0x01383498),
	((NJS_MATERIAL*)0x01383008),
	((NJS_MATERIAL*)0x0138301C),
	((NJS_MATERIAL*)0x01383030),
	((NJS_MATERIAL*)0x01382B60),
	((NJS_MATERIAL*)0x01382B74),
	((NJS_MATERIAL*)0x01382B88),
	((NJS_MATERIAL*)0x01382A24),
	((NJS_MATERIAL*)0x01382808),
	((NJS_MATERIAL*)0x013826CC),
	((NJS_MATERIAL*)0x013824B0),
	((NJS_MATERIAL*)0x013821C0),
};