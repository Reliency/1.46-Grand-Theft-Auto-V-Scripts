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
	int iVar0;
	int iVar1;
	int iVar2[8];
	int iVar3;
	int iVar4;
	int iVar5;
	
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
	if (unk_0x5EBD03AF78E7B4DB(2))
	{
		func_18();
	}
	iVar0 = Global_36078;
	iVar1 = 15;
	while (true)
	{
		if (Global_36117 != 15)
		{
			if (Global_36080 != 0)
			{
				if (Global_36079 != -1)
				{
					if (!unk_0x2BCD0524CDEE1FD2(Global_36080))
					{
						func_17(&Global_36079);
					}
				}
			}
		}
		if (Global_36078 > 0)
		{
			Global_36083 = 1;
			if (Global_36078 == iVar0)
			{
				iVar3 = 0;
				if (Global_36078 > 1)
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < Global_36078)
					{
						if (func_15(Global_36084[iVar4 /*4*/].f_2))
						{
							iVar2[iVar4] = 0;
						}
						else
						{
							iVar2[iVar4] = 1;
						}
						if (Global_36084[iVar4 /*4*/].f_1 == 7)
						{
							iVar2[iVar4] = 1;
						}
						iVar4++;
					}
					iVar5 = 0;
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < (Global_36078 - 1))
					{
						if (!iVar2[iVar4 + 1])
						{
							if (Global_36084[iVar4 + 1 /*4*/].f_1 < Global_36084[iVar5 /*4*/].f_1)
							{
								iVar5 = iVar4 + 1;
							}
						}
						iVar4++;
					}
					iVar3 = iVar5;
					if (Global_36084[iVar3 /*4*/].f_2 == 15)
					{
						iVar3 = -1;
					}
					if (iVar3 != -1)
					{
						if (!func_15(Global_36084[iVar3 /*4*/].f_2))
						{
							iVar3 = -1;
						}
					}
				}
				if (iVar3 > -1)
				{
					Global_36079 = Global_36084[iVar3 /*4*/];
					Global_36080 = Global_36084[iVar3 /*4*/].f_3;
					Global_36117 = Global_36084[iVar3 /*4*/].f_2;
					Global_36078 = 0;
					Global_36083 = 0;
				}
				else
				{
					Global_36078 = 0;
					Global_36083 = 0;
				}
			}
		}
		if (iVar1 != Global_36117)
		{
			if (iVar1 == 15)
			{
				func_14(0);
			}
			if (Global_36117 == 15)
			{
				func_14(1);
			}
			Global_36083 = 0;
			Global_31886 = 1;
			if (Global_36117 != 5 && Global_36117 != 15)
			{
				unk_0xA5DD4141C1E70561(8);
			}
			if (Global_36117 == 15 || Global_36117 == 6)
			{
				func_13(0);
			}
			else
			{
				func_13(1);
			}
			if (func_12(Global_36117))
			{
				if (!iLocal_20)
				{
					unk_0xAF5142A6C16161C7(1);
					iLocal_20 = 1;
				}
			}
			else if (iLocal_20)
			{
				unk_0xAF5142A6C16161C7(0);
				iLocal_20 = 0;
			}
		}
		iVar1 = Global_36117;
		iVar0 = Global_36078;
		Global_104496 = func_1();
		Global_25732 = unk_0xB62414EC7AF2650B();
		wait(0);
	}
	Global_36083 = 0;
}

var func_1()
{
	var uVar0;
	
	func_11(&uVar0, unk_0xC5B07C33AC7BB174());
	func_10(&uVar0, unk_0x65DA628D62901275());
	func_9(&uVar0, unk_0x34CEB9721AC6A0A9());
	func_4(&uVar0, unk_0xC9A0B68BA813CF99());
	func_3(&uVar0, unk_0x897D202BD69186D5());
	func_2(&uVar0, unk_0x56EBDF0E39D83471());
	return uVar0;
}

void func_2(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_3(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_4(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_8(*uParam0);
	iVar1 = func_6(*uParam0);
	if (iParam1 < 1 || iParam1 > func_5(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_5(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_6(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_7(unk_0x05EFB6A616B6FADE(iParam0, 31), -1, 1)) + 2011;
}

int func_7(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_8(var uParam0)
{
	return uParam0 & 15;
}

void func_9(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_10(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_11(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 4:
		case 7:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 17:
		case 18:
			return 1;
			break;
	}
	return 0;
}

void func_13(bool bParam0)
{
	if (!bParam0)
	{
		Global_104712 = unk_0xFD34717937104F1C() + 250;
	}
	Global_104709 = bParam0;
}

void func_14(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53363[iVar0 /*3*/][0] = Global_106070.f_20536[iVar0];
		Global_53363.f_31[iVar0 /*3*/][0] = Global_106070.f_20536.f_11[iVar0];
		Global_53363.f_62[iVar0 /*3*/][0] = Global_106070.f_20536.f_22[iVar0];
		Global_53363.f_93[iVar0 /*3*/][0] = Global_106070.f_20536.f_33[iVar0];
		Global_53363.f_124[iVar0 /*3*/][0] = Global_106070.f_20536.f_44[iVar0];
		Global_53363.f_155[iVar0 /*3*/][0] = Global_106070.f_20536.f_55[iVar0];
		Global_53363.f_186[iVar0 /*3*/][0] = Global_106070.f_20536.f_66[iVar0];
		Global_53363.f_217[iVar0 /*3*/][0] = Global_106070.f_20536.f_77[iVar0];
		Global_53363.f_248[iVar0 /*3*/][0] = Global_106070.f_20536.f_88[iVar0];
		if (!bParam0)
		{
			Global_53363[iVar0 /*3*/][1] = Global_106070.f_20536[iVar0];
			Global_53363.f_31[iVar0 /*3*/][1] = Global_106070.f_20536.f_11[iVar0];
			Global_53363.f_62[iVar0 /*3*/][1] = Global_106070.f_20536.f_22[iVar0];
			Global_53363.f_93[iVar0 /*3*/][1] = Global_106070.f_20536.f_33[iVar0];
			Global_53363.f_124[iVar0 /*3*/][1] = Global_106070.f_20536.f_44[iVar0];
			Global_53363.f_155[iVar0 /*3*/][1] = Global_106070.f_20536.f_55[iVar0];
			Global_53363.f_186[iVar0 /*3*/][1] = Global_106070.f_20536.f_66[iVar0];
			Global_53363.f_217[iVar0 /*3*/][1] = Global_106070.f_20536.f_77[iVar0];
			Global_53363.f_248[iVar0 /*3*/][1] = Global_106070.f_20536.f_88[iVar0];
		}
		iVar0++;
	}
}

bool func_15(int iParam0)
{
	return func_16(iParam0, Global_36117);
}

int func_16(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_17(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_36079)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_36078 = 0;
	Global_36080 = 0;
	Global_36117 = 15;
	Global_56178 = 0;
	Global_56179 = 0;
}

void func_18()
{
	func_17(&Global_36079);
	Global_36083 = 0;
	unk_0x8F1A9FE6D91AAFEB();
}

