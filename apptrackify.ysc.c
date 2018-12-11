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
	vector3 vLocal_20 = { 0f, 0f, 0f };
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	int iLocal_29 = 0;
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
	fLocal_25 = 9.99f;
	fLocal_26 = 0f;
	fLocal_27 = 0f;
	fLocal_28 = 0f;
	unk_0x5341E3E598550C46();
	func_10();
	func_7();
	settimera(0);
	settimerb(0);
	while (true)
	{
		wait(0);
		if (Global_14513.f_1 != 9)
		{
			switch (Global_14513.f_1)
			{
				case 7:
					if (timera() > 125)
					{
						func_10();
						settimera(0);
					}
					if (timerb() > floor(fLocal_27) * 30 && timerb() > 150)
					{
						unk_0x31A9E530D137684F(Global_14494, "APP_FUNCTION");
						unk_0x380580A1A1667F69(1);
						unk_0x271C1332F482646C();
						settimerb(0);
					}
					if (timerb() > 2000)
					{
						unk_0x31A9E530D137684F(Global_14494, "APP_FUNCTION");
						unk_0x380580A1A1667F69(1);
						unk_0x271C1332F482646C();
						settimerb(0);
					}
					break;
				
				case 8:
					if (func_6(2, Global_14481, 0))
					{
						func_5();
						Global_14491 = 1;
						func_10();
						func_7();
						if (Global_14513.f_1 > 3)
						{
							Global_14513.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_4())
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
	func_3(0, 0);
	func_3(1, 0);
	func_3(2, 0);
	func_3(3, 0);
	func_3(4, 0);
	unk_0xFA57C719261AA55D(&Global_2384, 22);
	unk_0x8F1A9FE6D91AAFEB();
}

void func_3(int iParam0, int iParam1)
{
	Global_4268535[iParam0] = iParam1;
}

int func_4()
{
	if (Global_2989 == 1 || Global_14513.f_1 < 7)
	{
		Global_14500 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0xE11F00B4AC919F45(-1, "Menu_Back", &Global_14502, 1);
	}
}

int func_6(int iParam0, int iParam1, int iParam2)
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

void func_7()
{
	if (Global_14501)
	{
		func_8(Global_14494, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_8(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_8(Global_14494, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_8(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_8(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xFA57C719261AA55D(&Global_2383, 17);
}

void func_8(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x31A9E530D137684F(iParam0, sParam1);
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
		func_9(sParam7);
	}
	if (!unk_0x429D45A6C6520026(sParam8))
	{
		func_9(sParam8);
	}
	if (!unk_0x429D45A6C6520026(sParam9))
	{
		func_9(sParam9);
	}
	if (!unk_0x429D45A6C6520026(sParam10))
	{
		func_9(sParam10);
	}
	if (!unk_0x429D45A6C6520026(sParam11))
	{
		func_9(sParam11);
	}
	unk_0x271C1332F482646C();
}

void func_9(char* sParam0)
{
	unk_0x390B339C943A8A54(sParam0);
	unk_0xD481829E3E36543B();
}

void func_10()
{
	int iVar0;
	bool bVar1;
	
	if (func_18() == 0)
	{
		if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			vLocal_20 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
			fLocal_21 = unk_0x552C823E1D2A019C(unk_0xA19140A5C42D8715());
			func_17();
			func_16();
			func_15();
			fLocal_22 = (360f - fLocal_21);
			fLocal_25 = (fLocal_25 - fLocal_22);
			if (fLocal_25 < 0f)
			{
				fLocal_25 = (fLocal_25 + 360f);
			}
			if (iLocal_29 == 0)
			{
				unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
				unk_0x380580A1A1667F69(23);
				unk_0x380580A1A1667F69(0);
				if (unk_0x05EFB6A616B6FADE(Global_2384, 30))
				{
					unk_0x380580A1A1667F69(-99);
					unk_0x380580A1A1667F69(0);
				}
				else
				{
					unk_0x380580A1A1667F69(floor(fLocal_25));
					unk_0x380580A1A1667F69(floor(fLocal_26));
				}
				unk_0x380580A1A1667F69(100);
				if (unk_0x05EFB6A616B6FADE(Global_2384, 22))
				{
					unk_0x380580A1A1667F69(1);
				}
				else
				{
					unk_0x380580A1A1667F69(0);
				}
				if (unk_0x05EFB6A616B6FADE(Global_2384, 29))
				{
					unk_0x233A5B4A35140C6B(false);
				}
				else
				{
					unk_0x233A5B4A35140C6B(true);
				}
				if (unk_0x05EFB6A616B6FADE(Global_2385, 1))
				{
					unk_0xD8B5988E85F72BE5(fLocal_28);
				}
				unk_0x271C1332F482646C();
			}
			if (fLocal_21 == fLocal_21)
			{
			}
			func_14(Global_14494, "DISPLAY_VIEW", 23f, to_float(1), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		vLocal_20 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
		fLocal_21 = unk_0x552C823E1D2A019C(unk_0xA19140A5C42D8715());
		if (Global_4268541 > 5)
		{
		}
		iVar0 = 0;
		while (iVar0 < Global_4268541)
		{
			func_13(iVar0);
			func_12(iVar0);
			func_11(iVar0);
			fLocal_22 = (360f - fLocal_21);
			fLocal_25 = (fLocal_25 - fLocal_22);
			if (fLocal_25 < 0f)
			{
				fLocal_25 = (fLocal_25 + 360f);
			}
			if (iLocal_29 == 0)
			{
				unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
				unk_0x380580A1A1667F69(23);
				unk_0x380580A1A1667F69(iVar0);
				bVar1 = false;
				switch (iVar0)
				{
					case 0:
						if (unk_0x05EFB6A616B6FADE(Global_4268330, 5))
						{
							bVar1 = true;
						}
						break;
					
					case 1:
						if (unk_0x05EFB6A616B6FADE(Global_4268330, 6))
						{
							bVar1 = true;
						}
						break;
					
					case 2:
						if (unk_0x05EFB6A616B6FADE(Global_4268330, 7))
						{
							bVar1 = true;
						}
						break;
					
					case 3:
						if (unk_0x05EFB6A616B6FADE(Global_4268330, 8))
						{
							bVar1 = true;
						}
						break;
				}
				if (bVar1)
				{
					unk_0x380580A1A1667F69(-99);
					unk_0x380580A1A1667F69(0);
				}
				else
				{
					unk_0x380580A1A1667F69(floor(fLocal_25));
					unk_0x380580A1A1667F69(floor(fLocal_26));
				}
				unk_0x380580A1A1667F69(100);
				if (unk_0x05EFB6A616B6FADE(Global_2384, 22))
				{
					unk_0x233A5B4A35140C6B(true);
				}
				else
				{
					unk_0x233A5B4A35140C6B(true);
				}
				if (unk_0x05EFB6A616B6FADE(Global_2384, 29))
				{
					unk_0x233A5B4A35140C6B(false);
				}
				else
				{
					unk_0x233A5B4A35140C6B(true);
				}
				unk_0xD8B5988E85F72BE5(fLocal_28);
				unk_0x380580A1A1667F69(Global_4268535[iVar0]);
				unk_0x271C1332F482646C();
			}
			if (fLocal_21 == fLocal_21)
			{
			}
			func_14(Global_14494, "DISPLAY_VIEW", 23f, to_float(1), -1082130432, -1082130432, -1082130432);
			iVar0++;
		}
	}
}

float func_11(int iParam0)
{
	fLocal_23 = (Global_4268519[iParam0 /*3*/] - vLocal_20.x);
	fLocal_24 = (cos(((3.14159f / 180f) * vLocal_20.x)) * (Global_4268519[iParam0 /*3*/].f_1 - vLocal_20.y));
	fLocal_25 = unk_0xA0844D842FD4B009(fLocal_23, fLocal_24);
	if (fLocal_25 < 0f)
	{
		fLocal_25 = (fLocal_25 + 360f);
	}
	return fLocal_25;
}

float func_12(int iParam0)
{
	fLocal_27 = sqrt(vdist2(Global_4268519[iParam0 /*3*/], vLocal_20));
	fLocal_28 = (Global_4268519[iParam0 /*3*/].f_2 - vLocal_20.z);
	return fLocal_27;
}

float func_13(int iParam0)
{
	fLocal_26 = sqrt((((Global_4268519[iParam0 /*3*/] - vLocal_20.x) * (Global_4268519[iParam0 /*3*/] - vLocal_20.x)) + ((Global_4268519[iParam0 /*3*/].f_1 - vLocal_20.y) * (Global_4268519[iParam0 /*3*/].f_1 - vLocal_20.y))));
	return fLocal_26;
}

void func_14(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x31A9E530D137684F(iParam0, sParam1);
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

float func_15()
{
	fLocal_23 = (Global_16928 - vLocal_20.x);
	fLocal_24 = (cos(((3.14159f / 180f) * vLocal_20.x)) * (Global_16928.f_1 - vLocal_20.y));
	fLocal_25 = unk_0xA0844D842FD4B009(fLocal_23, fLocal_24);
	if (fLocal_25 < 0f)
	{
		fLocal_25 = (fLocal_25 + 360f);
	}
	return fLocal_25;
}

float func_16()
{
	fLocal_27 = sqrt(vdist2(Global_16928, vLocal_20));
	fLocal_28 = (Global_16928.f_2 - vLocal_20.z);
	return fLocal_27;
}

float func_17()
{
	fLocal_26 = sqrt((((Global_16928 - vLocal_20.x) * (Global_16928 - vLocal_20.x)) + ((Global_16928.f_1 - vLocal_20.y) * (Global_16928.f_1 - vLocal_20.y))));
	return fLocal_26;
}

int func_18()
{
	if (Global_71205 == 1)
	{
		return 1;
	}
	return 0;
}

