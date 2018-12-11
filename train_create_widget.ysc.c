#region Local Var
	int iLocal_0 = 0;
	vector3 vLocal_1 = { 0f, 0f, 0f };
	int iLocal_2 = 0;
	float fLocal_3 = 0f;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	bool bLocal_6 = 0;
	int iLocal_7 = 0;
#endregion

void __EntryFunction__()
{
	vLocal_1 = { 613f, 6438f, 31f };
	fLocal_3 = 5f;
	iLocal_4 = 1;
	unk_0xD07EE91CE9B6D4CF(1);
	if (unk_0x5EBD03AF78E7B4DB(3))
	{
		func_1();
	}
	unk_0x356500C85E11485E(0);
	unk_0x813EA4BD19A19ED8();
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 626.68f, 6442.31f, 30.88f, 1, false, 0, 1);
		unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), -177f);
		unk_0xD87B76260C547F31(0f);
	}
	unk_0xCACEBBBEAD8F262E(joaat("freight"));
	unk_0xCACEBBBEAD8F262E(joaat("freightcar"));
	unk_0xCACEBBBEAD8F262E(joaat("freightgrain"));
	unk_0xCACEBBBEAD8F262E(joaat("freightcont1"));
	unk_0xCACEBBBEAD8F262E(joaat("freightcont2"));
	unk_0xCACEBBBEAD8F262E(joaat("tankercar"));
	unk_0xCACEBBBEAD8F262E(868868440);
	while ((((((!unk_0x7FC99CCC73354033(joaat("freight")) || !unk_0x7FC99CCC73354033(joaat("freightcar"))) || !unk_0x7FC99CCC73354033(joaat("freightgrain"))) || !unk_0x7FC99CCC73354033(joaat("freightcont1"))) || !unk_0x7FC99CCC73354033(joaat("freightcont2"))) || !unk_0x7FC99CCC73354033(joaat("tankercar"))) || !unk_0x7FC99CCC73354033(868868440))
	{
		wait(0);
	}
	while (true)
	{
		wait(0);
		if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			if (iLocal_5)
			{
				if (unk_0xDC5D81351D6A4DDB(iLocal_0))
				{
					unk_0xBEEB0585E7242BCC(&iLocal_0);
				}
				iLocal_0 = unk_0x73D3AC2ACEE773CD(iLocal_2, vLocal_1, iLocal_4);
				iLocal_5 = 0;
			}
			if (iLocal_7)
			{
				vLocal_1 = { unk_0x13C6B72A19970EAD() };
				iLocal_7 = 0;
			}
			if (unk_0x1095F403F52B42E1(iLocal_0, 0) && !unk_0x7112137033807390(iLocal_0, 0))
			{
				unk_0xAEAF3427E1F14498(iLocal_0, fLocal_3);
				unk_0xC81581CC4C64B997(iLocal_0, fLocal_3);
			}
			if (bLocal_6)
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	unk_0x356500C85E11485E(1);
	unk_0x8F1A9FE6D91AAFEB();
}

