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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	func_80();
	while (true)
	{
		func_79();
		if (func_71())
		{
			func_70();
		}
		if (Global_2524719.f_4883.f_740 == 0)
		{
			func_70();
		}
		switch (iLocal_35)
		{
			case 0:
				iLocal_35 = 1;
				break;
			
			case 1:
				if (func_11())
				{
					iLocal_35 = 2;
				}
				break;
			
			case 2:
				if (!func_1())
				{
					iLocal_35 = 4;
				}
				break;
			
			case 4:
				func_70();
				break;
		}
	}
}

int func_1()
{
	int iVar0;
	
	if (func_7(1))
	{
		iVar0 = Global_2524719.f_4883.f_739;
		if (iVar0 != func_6())
		{
			if (func_4(iVar0))
			{
				func_2(iVar0);
				return 0;
			}
		}
		else
		{
			func_2(iVar0);
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_2(int iParam0)
{
	if (iParam0 != func_6())
	{
		func_3(iParam0);
	}
	Global_2524719.f_4883.f_739 = func_6();
}

void func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	unk_0xFA57C719261AA55D(&(Global_2415861.f_385), iVar0);
	unk_0xFA57C719261AA55D(&(Global_2415861.f_386), iVar0);
	unk_0xFA57C719261AA55D(&(Global_2415861.f_387), iVar0);
	unk_0xFA57C719261AA55D(&(Global_2415861.f_389), iVar0);
	unk_0xFA57C719261AA55D(&(Global_2415861.f_393), iVar0);
	unk_0xFA57C719261AA55D(&(Global_2415861.f_388), iVar0);
}

int func_4(int iParam0)
{
	if (!func_5(iParam0, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xC77FA683E9BB485B(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x58E3CCF930D23BD5(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437022.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_6()
{
	return -1;
}

bool func_7(bool bParam0)
{
	return func_8(unk_0xD4E735F4B6A956AC(), bParam0);
}

int func_8(int iParam0, bool bParam1)
{
	return func_9(iParam0, bParam1, 1);
}

int func_9(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_10(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1625435[iParam0 /*560*/].f_11;
	if (iVar0 != func_6() && Global_1625435[iVar0 /*560*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_10(int iParam0, int iParam1)
{
	if (iParam0 != func_6())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_6())
		{
			if (Global_1625435[iParam0 /*560*/].f_11 == iParam0 && Global_1625435[iParam0 /*560*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_11()
{
	int iVar0;
	
	if (func_7(1))
	{
		iVar0 = Global_2524719.f_4883.f_739;
		if (iVar0 != func_6())
		{
			if (func_12(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_12(int iParam0)
{
	if (func_5(iParam0, 0, 1))
	{
		func_68(iParam0, 432, 1, 0);
		if (func_67(iParam0))
		{
			func_64(iParam0, func_65(func_66(unk_0xD4E735F4B6A956AC())), 1, 0);
		}
		if (func_62(iParam0))
		{
			func_60(iParam0, 1, 1, 0);
		}
		func_55(iParam0, 1, 0);
		func_13(iParam0, 1, 5000);
		return 1;
	}
	return 0;
}

void func_13(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return;
	}
	if (iParam2 > 200000)
	{
		iParam2 = 200000;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (iParam0 == Global_2437022)
		{
		}
		else if (unk_0xCE3CB618AFE55EFB(Global_2415861[iVar0]))
		{
			unk_0x2BCFB39E86340DAA(&(Global_2415861.f_367), iVar0);
			unk_0xFA57C719261AA55D(&(Global_2415861.f_372), iVar0);
			unk_0x0798CD089167D3C1(Global_2415861[iVar0], 1);
			unk_0xB951092EA72637CD(Global_2415861[iVar0], 250);
			func_14(iParam0);
			if (iParam2 < 0)
			{
				unk_0x2BCFB39E86340DAA(&(Global_2415861.f_372), iVar0);
			}
			else
			{
				Global_2415861.f_198[iVar0] = unk_0x8039F92D4B9C6B71(unk_0xFFCC7EBF88BDEE54(), iParam2);
			}
		}
		else
		{
			unk_0x2BCFB39E86340DAA(&(Global_2415861.f_367), iVar0);
			unk_0xFA57C719261AA55D(&(Global_2415861.f_372), iVar0);
			if (iParam2 < 0)
			{
				unk_0x2BCFB39E86340DAA(&(Global_2415861.f_372), iVar0);
			}
			else
			{
				Global_2415861.f_198[iVar0] = unk_0x8039F92D4B9C6B71(unk_0xFFCC7EBF88BDEE54(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		unk_0xFA57C719261AA55D(&(Global_2415861.f_367), iVar0);
		unk_0xFA57C719261AA55D(&(Global_2415861.f_372), iVar0);
		if (unk_0xCE3CB618AFE55EFB(Global_2415861[iVar0]))
		{
			func_14(iParam0);
			unk_0x0798CD089167D3C1(Global_2415861[iVar0], 0);
		}
	}
}

void func_14(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (func_5(iParam0, 0, 1))
	{
		if (unk_0xCE3CB618AFE55EFB(Global_2415861[iVar0]))
		{
			Global_2415861.f_1397[iVar0] = func_15(iParam0);
			unk_0xAD8FB9E563A1FF80(Global_2415861[iVar0], Global_2415861.f_1397[iVar0]);
		}
	}
}

int func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (func_5(iParam0, 0, 1))
	{
		if (unk_0xCE3CB618AFE55EFB(Global_2415861[iVar0]))
		{
			iVar1 = unk_0x2A3262E0744CC26E(Global_2415861[iVar0]);
			if (unk_0x05EFB6A616B6FADE(Global_2415861.f_383, iVar0) || unk_0x05EFB6A616B6FADE(Global_2415861.f_382, iVar0))
			{
				return 1;
			}
			else if ((unk_0x05EFB6A616B6FADE(Global_2415861.f_368, iVar0) || unk_0x05EFB6A616B6FADE(Global_2415861.f_367, iVar0)) || unk_0x05EFB6A616B6FADE(Global_2415861.f_385, iVar0))
			{
				return func_52(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						return func_52(7);
						break;
					
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_52(11);
						break;
					
					case 254:
						if (unk_0xE46ECB9FD23D3264(iParam0) == unk_0xE46ECB9FD23D3264(Global_2437022))
						{
							return func_52(6);
						}
						else
						{
							return func_52(5);
						}
						break;
					
					case 271:
						if (unk_0xE46ECB9FD23D3264(iParam0) == unk_0xE46ECB9FD23D3264(Global_2437022))
						{
							return func_52(6);
						}
						else
						{
							return func_52(5);
						}
						break;
					
					case 163:
					case 164:
						if (func_51(Global_2437022, iParam0, -2, 0))
						{
							return func_52(6);
						}
						else
						{
							return func_52(5);
						}
						break;
					
					case 303:
					case 418:
						return func_52(10);
						break;
					
					case 364:
						if (func_16(Global_2437022, iParam0, 1))
						{
							return func_52(10);
						}
						else
						{
							return func_52(5);
						}
						break;
					
					case 478:
					case 501:
					case 523:
					case 556:
						return func_52(10);
						break;
					
					case 417:
						if (func_16(Global_2437022, iParam0, 1))
						{
							return func_52(6);
						}
						else
						{
							return func_52(5);
						}
						break;
					
					case 256:
					case 268:
					default:
						if (func_16(Global_2437022, iParam0, 1))
						{
							return func_52(6);
						}
						else
						{
							return func_52(5);
						}
						break;
					}
				}
			}
	}
	return 1;
}

int func_16(int iParam0, int iParam1, bool bParam2)
{
	if (func_19(iParam0, -2, 0, 0, 0) == func_19(iParam1, -2, 0, 0, 0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (func_17(func_19(iParam0, -2, 0, 0, 0)) && func_17(func_19(iParam1, -2, 0, 0, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_17(int iParam0)
{
	if (iParam0 == func_18(1) || iParam0 == func_18(0))
	{
		return 1;
	}
	return 0;
}

int func_18(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_19(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_46(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0xE46ECB9FD23D3264(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_125859[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_46(unk_0xD4E735F4B6A956AC()) || (func_45() && func_44())) && !unk_0x05EFB6A616B6FADE(Global_2524719.f_4577, 31)) && !bParam4)
	{
		iVar1 = func_43();
		if (unk_0xDC5D81351D6A4DDB(iVar1))
		{
			if (unk_0xC085874FDE5FE33A(iVar1))
			{
				if (unk_0x77065AD41B64E946(iVar1) != -1)
				{
					if (func_5(unk_0x77065AD41B64E946(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xD8B89B387D170E27()) && iParam1 < 4)
						{
							if (Global_4456448.f_125859[iParam1] != -1)
							{
								return func_41(iParam1, iParam0, 0);
							}
							else
							{
								return func_29(iParam0, unk_0x77065AD41B64E946(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_29(iParam0, unk_0x77065AD41B64E946(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xD8B89B387D170E27()) && iParam1 < 4)
			{
				if (Global_4456448.f_125859[iParam1] != -1)
				{
					return func_41(iParam1, iParam0, 0);
				}
				else
				{
					return func_20(0, -1, 0);
				}
			}
			else
			{
				return func_20(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xD8B89B387D170E27()) && iParam1 < 4)
	{
		if (Global_4456448.f_125859[iParam1] != -1)
		{
			return func_41(iParam1, iParam0, 0);
		}
		else
		{
			return func_29(iParam0, unk_0xD4E735F4B6A956AC(), iParam1, bParam2, bParam3);
		}
	}
	return func_29(iParam0, unk_0xD4E735F4B6A956AC(), iParam1, bParam2, bParam3);
}

int func_20(bool bParam0, int iParam1, bool bParam2)
{
	return func_21(unk_0xD4E735F4B6A956AC(), bParam0, iParam1, bParam2);
}

int func_21(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xC77FA683E9BB485B(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0xE46ECB9FD23D3264(iParam0);
	if (func_27() && Global_1378988.f_1)
	{
		if (bParam1)
		{
			return func_26(iParam2, iVar0);
		}
		else
		{
			return func_26(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_25(iVar0, iParam2, 0) && !unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_18(1);
				}
				else
				{
					return func_18(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_4456448.f_4, 20))
			{
				return func_22(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_22(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_18(1);
	}
	return func_18(0);
}

int func_22(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_24(iParam0, iParam1, iParam3);
	if (func_23(Global_4456448.f_130782, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_23(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_152990 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8906[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_24(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_25(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_25(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 0);
				
				case 1:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 1);
				
				case 2:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 2);
				
				case 3:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 4);
				
				case 1:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 5);
				
				case 2:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 6);
				
				case 3:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 8);
				
				case 1:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 9);
				
				case 2:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 10);
				
				case 3:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 12);
				
				case 1:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 13);
				
				case 2:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 14);
				
				case 3:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_26(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_24(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_27()
{
	if (func_28() && unk_0xD8B89B387D170E27())
	{
		return 1;
	}
	return 0;
}

bool func_28()
{
	return unk_0x05EFB6A616B6FADE(Global_4456448.f_146776, 12);
}

int func_29(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xE46ECB9FD23D3264(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1589747[iVar2 /*790*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_37(1))
			{
				iVar3 = func_33(iParam0);
				if (!iVar3 == -1)
				{
					return func_31(iVar3);
				}
			}
			if ((func_51(iParam1, iParam0, iVar0, 0) && !unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 18)) || ((func_25(unk_0xE46ECB9FD23D3264(iParam1), unk_0xE46ECB9FD23D3264(iParam0), 0) && unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 23)) && !unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 18)))
			{
				return func_18(1);
			}
			else if (unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 26))
			{
				return func_30(1);
			}
			else
			{
				return func_21(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574393 || Global_1574384) || Global_1589747[iParam0 /*790*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574393 == 1 && Global_1574403 == 0))
			{
				return func_18(1);
			}
			else
			{
				return func_21(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574388 && Global_1573886.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_33(iParam0);
	if (!iVar4 == -1)
	{
		return func_31(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_30(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_31(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_32(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_32(int iParam0)
{
	return Global_2417554.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_33(int iParam0)
{
	if (!iParam0 == func_6())
	{
		if (func_35(iParam0, 1))
		{
			return Global_2417554.f_2071.f_11[func_34(iParam0)];
		}
	}
	return -1;
}

int func_34(int iParam0)
{
	if (iParam0 != func_6())
	{
		return Global_1625435[iParam0 /*560*/].f_11;
	}
	return func_6();
}

bool func_35(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_36(iParam0))
		{
			return 0;
		}
	}
	return Global_1625435[iParam0 /*560*/].f_11 != func_6();
}

int func_36(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_6())
		{
			return Global_1625435[iParam0 /*560*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_37(int iParam0)
{
	if ((func_40() || func_39()) || (func_38() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_38()
{
	return Global_2448386.f_16;
}

var func_39()
{
	return Global_2448386.f_15;
}

var func_40()
{
	return Global_2448386.f_14;
}

int func_41(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969023.f_13[iParam0];
	if (func_37(1))
	{
		iVar2 = func_33(iParam1);
		if (!iVar2 == -1)
		{
			return func_31(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0x05EFB6A616B6FADE(Global_4456448.f_104[iParam0 /*10693*/].f_5532[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_6())
	{
		if (Global_4456448.f_125859[iParam0] != -1 && Global_4456448.f_125859[iParam0] <= 4)
		{
			if (Global_4456448.f_125859[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_125859[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_125859[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_125859[iParam0] == 4)
			{
				if (unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_125859[iParam0];
			}
		}
		else
		{
			iVar0 = func_21(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0x05EFB6A616B6FADE(Global_4456448.f_21, 13))
		{
			iVar0 = func_42(iParam0);
		}
		if (unk_0x05EFB6A616B6FADE(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 26) && !func_25(iParam0, unk_0xE46ECB9FD23D3264(iParam1), 0))
		{
			iVar0 = func_30(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_42(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_153033;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_153034;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_153035;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_153036;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_43()
{
	return Global_2359302.f_2;
}

bool func_44()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 4);
}

bool func_45()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 14);
}

int func_46(int iParam0)
{
	if (func_48(iParam0, 0))
	{
		return 1;
	}
	if (func_47())
	{
		if (iParam0 == unk_0xD4E735F4B6A956AC())
		{
			return 1;
		}
	}
	if (unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_47()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

bool func_48(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_49(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589747[iParam0 /*790*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xC77FA683E9BB485B(iParam0))
		{
			bVar0 = unk_0xE46ECB9FD23D3264(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_49(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_50();
	}
	if (Global_1312837[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_50()
{
	return Global_1312736;
}

bool func_51(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xE46ECB9FD23D3264(iParam0) == -1 && unk_0xE46ECB9FD23D3264(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xE46ECB9FD23D3264(iParam0) == unk_0xE46ECB9FD23D3264(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xE46ECB9FD23D3264(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xE46ECB9FD23D3264(iParam0) == iParam2;
	}
	return unk_0xE46ECB9FD23D3264(iParam0) == iParam2;
}

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_54())
			{
				if (iParam0 == 5)
				{
					iParam0 = 6;
				}
				else
				{
					iParam0 = 5;
				}
			}
			break;
	}
	return func_53(iParam0);
}

int func_53(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 9;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 7;
			break;
		
		case 8:
			return 6;
			break;
		
		case 7:
			return 4;
			break;
		
		case 4:
		case 11:
			return 2;
			break;
		
		case 0:
		case 2:
		case 3:
		case 9:
		case 1:
			return 1;
			break;
	}
	return 1;
}

int func_54()
{
	int iVar0;
	
	iVar0 = unk_0xE46ECB9FD23D3264(Global_2437022);
	if (iVar0 > -1 && iVar0 < 4)
	{
		return unk_0x05EFB6A616B6FADE(Global_4456448.f_104[iVar0 /*10693*/].f_5605, 4);
	}
	return 0;
}

void func_55(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (func_57(iParam0))
	{
		return;
	}
	func_56(&(Global_2415861.f_713[iParam0]), &(Global_2415861.f_1076[iParam0]), &(Global_2415861.f_390), bParam1, iParam0, bParam2, &uVar0);
}

int func_56(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!unk_0x2BCD0524CDEE1FD2(*uParam1) || *uParam1 == unk_0xFCB3E4B16B4A9EC1())
		{
			*uParam1 = unk_0xFCB3E4B16B4A9EC1();
			*uParam0 = unk_0xFCB3E4B16B4A9EC1();
		}
	}
	if (!unk_0x2BCD0524CDEE1FD2(*uParam0) || *uParam0 == unk_0xFCB3E4B16B4A9EC1())
	{
		if (bParam3)
		{
			if (!unk_0x05EFB6A616B6FADE(*iParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0x2BCFB39E86340DAA(iParam2, iParam4);
			}
			*uParam0 = unk_0xFCB3E4B16B4A9EC1();
		}
		else
		{
			if (unk_0x05EFB6A616B6FADE(*iParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0xFA57C719261AA55D(iParam2, iParam4);
			}
			if (*uParam1 == unk_0xFCB3E4B16B4A9EC1())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (unk_0x2BCD0524CDEE1FD2(*uParam1) && !*uParam1 == unk_0xFCB3E4B16B4A9EC1())
	{
	}
	return 0;
}

int func_57(int iParam0)
{
	if (iParam0 == func_6())
	{
		return 1;
	}
	if (unk_0xFEB6EEC0545AF7AA(unk_0x61D2332983ACC05C()) == func_58())
	{
		return 1;
	}
	return 0;
}

int func_58()
{
	switch (func_59())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_59()
{
	return Global_25459;
}

void func_60(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_57(iParam0))
	{
		return;
	}
	if (func_56(&(Global_2415861.f_812[iParam0]), &(Global_2415861.f_1175[iParam0]), &(Global_2415861.f_364), bParam1, iParam0, bParam3, &uVar0))
	{
		func_61(iParam0, bParam2);
	}
}

void func_61(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x2BCFB39E86340DAA(&(Global_2415861.f_365), iParam0);
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_2415861.f_365), iParam0);
	}
	if (unk_0xCE3CB618AFE55EFB(Global_2415861[iParam0]))
	{
		if (bParam1)
		{
			unk_0x0D31A3B4644EC204(Global_2415861[iParam0], false);
		}
		else
		{
			unk_0x0D31A3B4644EC204(Global_2415861[iParam0], true);
		}
	}
}

bool func_62(int iParam0)
{
	return func_63(&(Global_2415861.f_812[iParam0]));
}

int func_63(var uParam0)
{
	if (unk_0x2BCD0524CDEE1FD2(*uParam0))
	{
		if (!*uParam0 == unk_0xFCB3E4B16B4A9EC1())
		{
			return 0;
		}
	}
	return 1;
}

void func_64(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_57(iParam0))
	{
		return;
	}
	if (func_56(&(Global_2415861.f_614[iParam0]), &(Global_2415861.f_977[iParam0]), &(Global_2415861.f_386), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2415861.f_449[iParam0] = uParam1;
		}
	}
}

int func_65(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0x1C828C4226A9FADF(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_66(int iParam0)
{
	int iVar0;
	
	iVar0 = func_33(iParam0);
	if (iVar0 != -1)
	{
		return func_31(iVar0);
	}
	return 1;
}

bool func_67(int iParam0)
{
	return func_63(&(Global_2415861.f_614[iParam0]));
}

void func_68(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_57(iParam0))
	{
		return;
	}
	if (func_56(&(Global_2415861.f_581[iParam0]), &(Global_2415861.f_944[iParam0]), &(Global_2415861.f_385), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2415861.f_416[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_69();
		}
	}
}

void func_69()
{
	Global_2415861.f_1508 = 1;
}

void func_70()
{
	func_2(Global_2524719.f_4883.f_739);
	unk_0x8F1A9FE6D91AAFEB();
}

int func_71()
{
	var uVar0;
	
	func_76(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			return 1;
		}
	}
	if (func_75())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_74())
	{
		return 1;
	}
	if (func_73(157))
	{
		if (!func_72())
		{
			return 1;
		}
	}
	if (func_73(155))
	{
		return 1;
	}
	if (!unk_0x18F86E07E41D913F())
	{
		return 1;
	}
	if (func_58() != 0)
	{
		if (unk_0x8B1574454E8C2421(func_58()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_72()
{
	return Global_2448386.f_587;
}

int func_73(int iParam0)
{
	if (unk_0xF10AFD11E6EE81BF(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_74()
{
	return Global_2458191;
}

bool func_75()
{
	return Global_2448386.f_582;
}

void func_76(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5D7B2A77420FF19E(1))
	{
		iVar1 = unk_0x5712B9353A8F6573(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x8866A4E42CDA3EF1(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -563286670:
					func_77(iVar0);
					break;
				
				case 566035618:
					unk_0x8866A4E42CDA3EF1(1, iVar0, &vVar3, 4);
					if (vVar3.z == -1989728150)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_77(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x8866A4E42CDA3EF1(1, iParam0, &vVar0, 3))
	{
		if (func_5(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xEE978C39384D834F(vVar0.y);
			if (unk_0xDC5D81351D6A4DDB(iVar1))
			{
				if (unk_0x5D7DFE2058701942(iVar1, 0))
				{
					iVar2 = unk_0xCAEB6CE71A2C7212(iVar1, 0);
					if (unk_0xEB1A41F6F719807C(iVar2, vVar0.z) && unk_0xB592B7A61F21E7A5())
					{
						if (func_78(iVar2, &bVar3))
						{
							unk_0x3D2495030621765B(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x792676988A48387F(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_78(int iParam0, var uParam1)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (!unk_0x4943BEEC19289B8E(iParam0))
		{
			if (unk_0xCC01DCC72D8B9E39(iParam0))
			{
				if (!unk_0x289FBFAD3E416C48(unk_0x8F474E419F56E48D(iParam0)))
				{
					unk_0x1F7948851FB36E88(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x82384F63D814C864(iParam0, 0))
		{
			if (unk_0xB540EEBB14C48518(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_79()
{
	wait(0);
}

int func_80()
{
	unk_0x2F3193E06C2EFF44(0);
	return 1;
}

