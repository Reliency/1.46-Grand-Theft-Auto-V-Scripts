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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
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
	unk_0x5341E3E598550C46();
	if (iLocal_20 == 0)
	{
		func_11();
		func_10();
		iLocal_20 = 1;
		settimera(0);
	}
	while (true)
	{
		wait(0);
		if (Global_14513.f_1 != 9)
		{
			switch (Global_14513.f_1)
			{
				case 7:
					if (iLocal_20 == 1 && timera() > 1500)
					{
						func_6();
						settimera(0);
					}
					break;
				
				case 8:
					if (func_5(2, Global_14481, 0))
					{
						func_4();
						Global_14491 = 1;
						if (Global_14513.f_1 > 3)
						{
							Global_14513.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
			{
				func_2();
			}
		}
		else
		{
			Global_14515 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_14513.f_1 == 1 || Global_14513.f_1 == 3) || Global_14513.f_1 == 0) || Global_14457 == 1)
	{
		Global_14500 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0x8F1A9FE6D91AAFEB();
}

int func_3()
{
	if (Global_2989 == 1 || Global_14513.f_1 < 7)
	{
		Global_14500 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0xE11F00B4AC919F45(-1, "Menu_Back", &Global_14502, 1);
	}
}

int func_5(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xDF0ADAD7E584090D(iParam0, iParam1) || (iParam2 == 1 && unk_0x53E955948D35BDB5(iParam0, iParam1)))
	{
		if (unk_0x47C01C0E6F4C1D06())
		{
			if (unk_0xDE59CE76013B1621() == 0 || (unk_0x2B21DC45DEAA4B80() && unk_0x0B9F814BC8D14042(2)))
			{
				return 0;
			}
		}
		if (unk_0xD1ABB20CFF127CCC() || unk_0x4EAEDDFEDE3BEE19())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_6()
{
	func_7();
}

void func_7()
{
	func_9(Global_14494, "SET_DATA_SLOT_EMPTY", 24f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
	unk_0x380580A1A1667F69(24);
	unk_0x380580A1A1667F69(0);
	if (unk_0x05EFB6A616B6FADE(Global_4268330, 23))
	{
		unk_0x233A5B4A35140C6B(false);
		func_8("CELL_EXTBYOU");
		unk_0x380580A1A1667F69(Global_4268331);
		unk_0x380580A1A1667F69(floor(Global_4268547));
		unk_0x380580A1A1667F69(Global_4268332);
		unk_0x380580A1A1667F69(floor(Global_4268547.f_1));
		unk_0x380580A1A1667F69(Global_4268333);
		unk_0x380580A1A1667F69(floor(Global_4268547.f_2));
		func_8("CELL_BODYG");
		unk_0x380580A1A1667F69(Global_4268334);
		unk_0x380580A1A1667F69(floor(Global_4268550));
		unk_0x380580A1A1667F69(Global_4268335);
		unk_0x380580A1A1667F69(floor(Global_4268550.f_1));
		unk_0x380580A1A1667F69(Global_4268336);
		unk_0x380580A1A1667F69(floor(Global_4268550.f_2));
	}
	else
	{
		unk_0x233A5B4A35140C6B(false);
		func_8("CELL_EXTBYOU");
		unk_0x380580A1A1667F69(Global_4268334);
		unk_0x380580A1A1667F69(floor(Global_4268550));
		unk_0x380580A1A1667F69(Global_4268335);
		unk_0x380580A1A1667F69(floor(Global_4268550.f_1));
		unk_0x380580A1A1667F69(Global_4268336);
		unk_0x380580A1A1667F69(floor(Global_4268550.f_2));
		func_8("CELL_EXTBTARG");
		unk_0x380580A1A1667F69(Global_4268331);
		unk_0x380580A1A1667F69(floor(Global_4268547));
		unk_0x380580A1A1667F69(Global_4268332);
		unk_0x380580A1A1667F69(floor(Global_4268547.f_1));
		unk_0x380580A1A1667F69(Global_4268333);
		unk_0x380580A1A1667F69(floor(Global_4268547.f_2));
	}
	unk_0x271C1332F482646C();
	func_9(Global_14494, "DISPLAY_VIEW", 24f, to_float(1), -1082130432, -1082130432, -1082130432);
}

void func_8(char* sParam0)
{
	unk_0x390B339C943A8A54(sParam0);
	unk_0xD481829E3E36543B();
}

void func_9(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x31A9E530D137684F(uParam0, sParam1);
	unk_0x380580A1A1667F69(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam6));
	}
	unk_0x271C1332F482646C();
}

void func_10()
{
	func_7();
}

void func_11()
{
	if (Global_14501)
	{
		func_12(Global_14494, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_12(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_12(Global_14494, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_12(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_12(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xFA57C719261AA55D(&Global_2383, 17);
}

void func_12(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x31A9E530D137684F(uParam0, sParam1);
	unk_0x380580A1A1667F69(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam6));
	}
	if (!unk_0x429D45A6C6520026(sParam7))
	{
		func_8(sParam7);
	}
	if (!unk_0x429D45A6C6520026(sParam8))
	{
		func_8(sParam8);
	}
	if (!unk_0x429D45A6C6520026(sParam9))
	{
		func_8(sParam9);
	}
	if (!unk_0x429D45A6C6520026(sParam10))
	{
		func_8(sParam10);
	}
	if (!unk_0x429D45A6C6520026(sParam11))
	{
		func_8(sParam11);
	}
	unk_0x271C1332F482646C();
}

