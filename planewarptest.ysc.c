#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	vector3 vLocal_19[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_20[2] = { 0f, 0f };
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	if (unk_0x5EBD03AF78E7B4DB(3))
	{
		func_1();
	}
	unk_0xD07EE91CE9B6D4CF(1);
	unk_0xCACEBBBEAD8F262E(joaat("cuban800"));
	while (!unk_0x7FC99CCC73354033(joaat("cuban800")))
	{
		wait(0);
	}
	vLocal_19[0 /*3*/] = { 1169.976f, 3592.572f, 32.6481f };
	vLocal_19[1 /*3*/] = { 1215.738f, 3586.608f, 33.5131f };
	fLocal_20[0] = 277.7043f;
	fLocal_20[1] = 77.1113f;
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 1220.202f, 3596.281f, 33.259f, 1, false, 0, 1);
	}
	unk_0x745C10318A2C7CAE(1220.202f, 3596.281f, 33.259f);
	iLocal_18 = unk_0x48CFBECB146FD1A1(joaat("cuban800"), vLocal_19[0 /*3*/], fLocal_20[0], true, true, false);
	unk_0x99F546A9200EA026(iLocal_18, 1084227584);
	unk_0xA5DE74AE39867B03(joaat("cuban800"));
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0x692D5500D82E4F5D(unk_0xA19140A5C42D8715(), iLocal_18, -1);
	}
	while (true)
	{
		func_1();
		wait(0);
	}
}

void func_1()
{
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0x836A6A722DEA63F1(unk_0xA19140A5C42D8715());
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_18))
	{
		unk_0x4C842FAB634AC89E(&iLocal_18);
	}
	unk_0xA5DE74AE39867B03(joaat("cuban800"));
	unk_0x8F1A9FE6D91AAFEB();
}

