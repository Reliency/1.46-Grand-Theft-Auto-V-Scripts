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
	int iLocal_18[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	var uLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = 0;
	int iLocal_37 = 0;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	int iLocal_42 = 0;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	fLocal_38 = 0.82f;
	fLocal_39 = 0.42f;
	fLocal_40 = 0f;
	fLocal_41 = 0f;
	unk_0x5341E3E598550C46();
	func_45(Global_14494, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_44();
	if (Global_14458 == 0)
	{
		fLocal_43 = 0.75f;
		fLocal_44 = 0.8f;
	}
	else
	{
		fLocal_43 = 0.65f;
		fLocal_44 = 0.77f;
	}
	Global_3188[Global_14513 /*2811*/][2 /*281*/].f_259 = Global_106070.f_14023[Global_14513 /*20*/].f_6;
	Global_3188[Global_14513 /*2811*/][4 /*281*/].f_259 = Global_106070.f_14023[Global_14513 /*20*/].f_9;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (Global_71205)
		{
			Global_3188[Global_14513 /*2811*/][1 /*281*/].f_259 = func_43(1198, -1, 0);
			Global_3188[Global_14513 /*2811*/][2 /*281*/].f_259 = func_43(2028, -1, 0);
			Global_3188[Global_14513 /*2811*/][4 /*281*/].f_259 = func_43(2027, -1, 0);
		}
		else if (unk_0x3CAC2741CC1A631F(&(Global_106070.f_14023[Global_14513 /*20*/].f_11), &(Global_3188[Global_14513 /*2811*/][1 /*281*/].f_144[iVar0 /*6*/])))
		{
			Global_3188[Global_14513 /*2811*/][1 /*281*/].f_259 = iVar0;
		}
		iVar0++;
	}
	if (Global_71205)
	{
		Global_106070.f_14023[3 /*20*/].f_10 = func_43(1197, -1, 0);
	}
	Global_3188[Global_14513 /*2811*/][3 /*281*/].f_259 = Global_106070.f_14023[Global_14513 /*20*/].f_10;
	func_42();
	if (Global_71205)
	{
		Global_3188[3 /*2811*/][0 /*281*/] = 190;
		Global_3188[3 /*2811*/][0 /*281*/].f_1 = 190;
		StringCopy(&(Global_3188[3 /*2811*/][0 /*281*/].f_2), "CELL_701", 16);
		Global_3188[3 /*2811*/][0 /*281*/].f_6 = 19;
		Global_3188[3 /*2811*/][0 /*281*/].f_280 = 1;
		StringCopy(&(Global_3188[3 /*2811*/][0 /*281*/].f_7[0 /*4*/]), "CELL_704", 16);
		Global_3188[3 /*2811*/][0 /*281*/].f_124[0] = 1;
		Global_3188[3 /*2811*/][0 /*281*/].f_84[0] = 170;
		Global_3188[3 /*2811*/][0 /*281*/].f_104[0] = 19;
		StringCopy(&(Global_3188[3 /*2811*/][0 /*281*/].f_7[1 /*4*/]), "CELL_703", 16);
		Global_3188[3 /*2811*/][0 /*281*/].f_124[1] = 1;
		Global_3188[3 /*2811*/][0 /*281*/].f_84[1] = 175;
		Global_3188[3 /*2811*/][0 /*281*/].f_104[1] = 19;
		StringCopy(&(Global_3188[3 /*2811*/][0 /*281*/].f_7[2 /*4*/]), "CELL_801", 16);
		Global_3188[3 /*2811*/][0 /*281*/].f_124[2] = 0;
		Global_3188[3 /*2811*/][0 /*281*/].f_84[2] = 190;
		Global_3188[3 /*2811*/][0 /*281*/].f_104[2] = 26;
		if (func_43(2090, -1, 0) == 0)
		{
			Global_3188[3 /*2811*/][0 /*281*/].f_259 = 0;
		}
		else
		{
			Global_3188[3 /*2811*/][0 /*281*/].f_259 = 1;
		}
	}
	func_33();
	while (true)
	{
		wait(0);
		if (iLocal_30)
		{
			if (timerb() > 3500)
			{
				if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
				{
					unk_0x866A4A18F288ACEA(unk_0xA19140A5C42D8715());
				}
				iLocal_30 = 0;
			}
		}
		if (Global_14513.f_1 != 9)
		{
			switch (Global_14513.f_1)
			{
				case 7:
					func_28();
					func_26();
					break;
				
				case 8:
					if (bLocal_36 || iLocal_37)
					{
						if (bLocal_36)
						{
							bLocal_36 = false;
							settimerb(0);
							Global_106070.f_14023.f_82 = 1;
							iLocal_37 = 1;
						}
						else if (timerb() > 7500)
						{
							iLocal_37 = 0;
							unk_0x135C61E339DABBAC(1);
						}
					}
					else
					{
						func_28();
						func_12();
						if (iLocal_33)
						{
							func_11();
						}
						if (func_10(2, Global_14481, 0))
						{
							if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
							{
								unk_0x866A4A18F288ACEA(unk_0xA19140A5C42D8715());
							}
							iLocal_33 = 0;
							func_9();
							Global_14491 = 1;
							func_45(Global_14494, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_33();
							if (Global_14513.f_1 > 3)
							{
								Global_14513.f_1 = 7;
							}
						}
					}
					break;
				
				default:
					break;
			}
			if (func_8())
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
	func_7();
	if (func_4(0))
	{
		func_3();
	}
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0x866A4A18F288ACEA(unk_0xA19140A5C42D8715());
	}
	if (bLocal_36)
	{
		unk_0x135C61E339DABBAC(1);
	}
	if (Global_106070.f_14023.f_83 == 0 || Global_106070.f_14023.f_82 == 0)
	{
		func_3();
	}
	unk_0x62BAB49318F4FE6E(0);
	unk_0x8F1A9FE6D91AAFEB();
}

void func_3()
{
	if (Global_3188[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3188[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3188[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3188[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3188[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3188[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0xFA57C719261AA55D(&Global_2383, 25);
	unk_0x2BCFB39E86340DAA(&Global_2384, 11);
}

int func_4(int iParam0)
{
	if (Global_36117 == 15)
	{
		return 0;
	}
	if (func_5(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_5(int iParam0)
{
	return func_6(iParam0, Global_36117);
}

int func_6(int iParam0, int iParam1)
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

void func_7()
{
	func_44();
	Global_3188[Global_14513 /*2811*/][0 /*281*/].f_124[2] = 1;
}

int func_8()
{
	if (Global_2989 == 1 || Global_14513.f_1 < 7)
	{
		Global_14500 = 1;
		return 1;
	}
	return 0;
}

void func_9()
{
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0xE11F00B4AC919F45(-1, "Menu_Back", &Global_14502, 1);
	}
}

int func_10(int iParam0, int iParam1, int iParam2)
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

void func_11()
{
	int iVar0;
	
	iLocal_34 = unk_0xFD34717937104F1C();
	iVar0 = (iLocal_34 - iLocal_35);
	if ((iVar0 % 600) <= 300 && iVar0 < 3000)
	{
		unk_0xB0E737394929E89F(0, 100, 100);
	}
}

void func_12()
{
	int iVar0;
	var uVar1;
	struct<13> Var2;
	int iVar3;
	
	if (iLocal_23 == 1)
	{
		if (iLocal_32)
		{
			iLocal_34 = unk_0xFD34717937104F1C();
			if ((iLocal_34 - iLocal_35) > 1000)
			{
				iLocal_31 = 1;
				iLocal_32 = 0;
			}
		}
		if (unk_0x0B9F814BC8D14042(2))
		{
			if (unk_0xDF0ADAD7E584090D(2, 180))
			{
				iLocal_45 = 1;
				iLocal_46 = 0;
			}
			if (unk_0xDF0ADAD7E584090D(2, 181))
			{
				iLocal_45 = 0;
				iLocal_46 = 1;
			}
		}
		if ((((func_10(2, Global_14489, 0) || func_10(2, Global_14490, 0)) || iLocal_31) || iLocal_45 == 1) || iLocal_46 == 1)
		{
			iLocal_45 = 0;
			iLocal_46 = 0;
			iLocal_31 = 0;
			iLocal_32 = 0;
			settimerb(0);
			iLocal_30 = 1;
			unk_0x31A9E530D137684F(Global_14494, "GET_CURRENT_SELECTION");
			iLocal_21 = unk_0xD8015A504E3ED13A();
			while (!unk_0x5BFB8B9A58F76839(iLocal_21))
			{
				wait(0);
			}
			iLocal_27 = iLocal_18[unk_0x7C261B004A9EEB72(iLocal_21)];
			if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
			{
				unk_0x866A4A18F288ACEA(unk_0xA19140A5C42D8715());
				wait(100);
				if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
				{
					if (!unk_0x5478521AC20DB43C(unk_0xA19140A5C42D8715()))
					{
						if (unk_0x3CAC2741CC1A631F(&(Global_3188[Global_14513 /*2811*/][1 /*281*/].f_144[iLocal_27 /*6*/]), "Silent Ringtone Dummy"))
						{
						}
						else
						{
							unk_0xE03F95BCE7BE67AD(&(Global_3188[Global_14513 /*2811*/][1 /*281*/].f_144[iLocal_27 /*6*/]), unk_0xA19140A5C42D8715(), 1);
						}
					}
				}
			}
		}
	}
	if (Global_14491 == 0)
	{
		if (func_10(2, Global_14482, 0))
		{
			func_23();
			Global_14491 = 1;
			unk_0x31A9E530D137684F(Global_14494, "GET_CURRENT_SELECTION");
			iLocal_21 = unk_0xD8015A504E3ED13A();
			while (!unk_0x5BFB8B9A58F76839(iLocal_21))
			{
				wait(0);
			}
			iLocal_26 = unk_0x7C261B004A9EEB72(iLocal_21);
			if (iLocal_26 < 0)
			{
				iLocal_26 = 0;
			}
			Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[iLocal_26];
			if (iLocal_23 == 2)
			{
				iVar0 = Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_259;
				Global_106070.f_14023[Global_14513 /*20*/].f_6 = Global_3188[Global_14513 /*2811*/][2 /*281*/].f_260[iVar0];
				func_45(Global_14494, "SET_THEME", to_float(Global_106070.f_14023[Global_14513 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_71205)
				{
					Global_4268542 = Global_3188[3 /*2811*/][2 /*281*/].f_259;
					func_20(2028, Global_3188[3 /*2811*/][2 /*281*/].f_259, -1, 1, 0);
					func_45(Global_14494, "SET_THEME", to_float(Global_4268542), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_45(Global_14494, "SET_THEME", to_float(Global_106070.f_14023[Global_14513 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_19();
				func_18(Global_14494, "SET_DATA_SLOT", to_float(22), to_float(iLocal_25), to_float(23), -1f, -1f, &(Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
				func_18(Global_14494, "SET_DATA_SLOT", to_float(22), to_float(iLocal_26), to_float(48), -1f, -1f, &(Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iLocal_26;
				func_45(Global_14494, "DISPLAY_VIEW", 22f, to_float(iLocal_26), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_23 == 4)
			{
				Global_106070.f_14023[Global_14513 /*20*/].f_9 = Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_259;
				if (Global_71205)
				{
					Global_4268543 = Global_3188[3 /*2811*/][4 /*281*/].f_259;
					func_20(2027, Global_3188[3 /*2811*/][4 /*281*/].f_259, -1, 1, 0);
					if (Global_4268543 == 0)
					{
						Var2 = { func_17(unk_0xD4E735F4B6A956AC()) };
						iVar3 = 0;
						if (unk_0x804C0CBA285C7A35(0) == 0)
						{
						}
						if ((unk_0xE0B3F7A8017F6425(&Var2) && unk_0x804C0CBA285C7A35(0)) && Global_4268546 == 0)
						{
							settimera(0);
							while (!unk_0x686DAB3ED67144AB(&Var2, &uVar1) && timera() < 3000)
							{
								wait(0);
								if (timera() > 2999)
								{
									iVar3 = 1;
								}
							}
							if (iVar3 == 0)
							{
								unk_0x31A9E530D137684F(Global_14494, "SET_BACKGROUND_CREW_IMAGE");
								unk_0x390B339C943A8A54("CELL_2000");
								unk_0xC327C023FDA37F2E(&uVar1);
								unk_0xD481829E3E36543B();
								unk_0x271C1332F482646C();
							}
						}
						else
						{
							func_45(Global_14494, "SET_BACKGROUND_IMAGE", to_float(0), -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
					else
					{
						func_45(Global_14494, "SET_BACKGROUND_IMAGE", to_float(Global_4268543), -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					func_45(Global_14494, "SET_BACKGROUND_IMAGE", to_float(Global_106070.f_14023[Global_14513 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_18(Global_14494, "SET_DATA_SLOT", to_float(22), to_float(iLocal_25), to_float(23), -1f, -1f, &(Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
				func_18(Global_14494, "SET_DATA_SLOT", to_float(22), to_float(iLocal_26), to_float(48), -1f, -1f, &(Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iLocal_26;
				func_45(Global_14494, "DISPLAY_VIEW", 22f, to_float(iLocal_26), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_23 == 1)
			{
				Global_106070.f_14023[Global_14513 /*20*/].f_11 = { Global_3188[Global_14513 /*2811*/][1 /*281*/].f_144[Global_3188[Global_14513 /*2811*/][1 /*281*/].f_259 /*6*/] };
				if (Global_71205)
				{
					func_20(1198, Global_3188[3 /*2811*/][1 /*281*/].f_259, -1, 1, 0);
				}
				func_18(Global_14494, "SET_DATA_SLOT", to_float(22), to_float(iLocal_25), to_float(18), -1f, -1f, &(Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
				func_18(Global_14494, "SET_DATA_SLOT", to_float(22), to_float(iLocal_26), to_float(48), -1f, -1f, &(Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iLocal_26;
				func_45(Global_14494, "DISPLAY_VIEW", 22f, to_float(iLocal_26), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_23 == 3)
			{
				Global_106070.f_14023[Global_14513 /*20*/].f_10 = Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_259;
				if (Global_71205)
				{
					func_20(1197, Global_106070.f_14023[3 /*20*/].f_10, -1, 1, 0);
				}
				if (Global_106070.f_14023[Global_14513 /*20*/].f_10 == 1)
				{
					iLocal_33 = 1;
					iLocal_35 = unk_0xFD34717937104F1C();
				}
				else
				{
					iLocal_33 = 0;
				}
			}
			if (iLocal_23 == 0)
			{
				if (Global_71205 == 1)
				{
					Global_3188[3 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[iLocal_26];
					func_18(Global_14494, "SET_DATA_SLOT", to_float(22), to_float(iLocal_25), to_float(19), -1f, -1f, &(Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
					func_18(Global_14494, "SET_DATA_SLOT", to_float(22), to_float(iLocal_26), to_float(48), -1f, -1f, &(Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
					iLocal_25 = iLocal_26;
					func_45(Global_14494, "DISPLAY_VIEW", 22f, to_float(iLocal_26), -1082130432, -1082130432, -1082130432);
					func_20(2090, Global_3188[3 /*2811*/][iLocal_23 /*281*/].f_259, -1, 1, 0);
				}
				else
				{
					Global_3188[0 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[iLocal_26];
					Global_3188[1 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[iLocal_26];
					Global_3188[2 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[iLocal_26];
					if (Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 2)
					{
						if (Global_36117 == 15)
						{
							if (Global_106070.f_14023.f_82 == 0)
							{
								unk_0x135C61E339DABBAC(1);
								func_16("CELL_7050");
								if (fLocal_43 == fLocal_44)
								{
								}
								bLocal_36 = true;
							}
							else
							{
								func_45(Global_14494, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								unk_0x2BCFB39E86340DAA(&Global_2383, 25);
								unk_0x2BCFB39E86340DAA(&Global_2384, 11);
								if (Global_106070.f_14023.f_83 == 0)
								{
									unk_0x135C61E339DABBAC(1);
									func_15("CELL_7051", -1);
									Global_106070.f_14023.f_83 = 1;
								}
							}
						}
					}
					else
					{
						func_45(Global_14494, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
						unk_0xFA57C719261AA55D(&Global_2383, 25);
						unk_0x2BCFB39E86340DAA(&Global_2384, 11);
					}
				}
			}
			func_13(Global_14494, "SET_HEADER", &(Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_7[Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
			if (func_4(0))
			{
				func_3();
			}
		}
	}
}

void func_13(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x31A9E530D137684F(iParam0, sParam1);
	func_14(sParam2);
	if (!unk_0x429D45A6C6520026(sParam3))
	{
		func_14(sParam3);
	}
	if (!unk_0x429D45A6C6520026(sParam4))
	{
		func_14(sParam4);
	}
	if (!unk_0x429D45A6C6520026(sParam5))
	{
		func_14(sParam5);
	}
	if (!unk_0x429D45A6C6520026(sParam6))
	{
		func_14(sParam6);
	}
	unk_0x271C1332F482646C();
}

void func_14(char* sParam0)
{
	unk_0x390B339C943A8A54(sParam0);
	unk_0xD481829E3E36543B();
}

void func_15(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, true, iParam1);
}

void func_16(char* sParam0)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 1, true, -1);
}

struct<13> func_17(int iParam0)
{
	struct<13> Var0;
	
	unk_0xE05C4303C26882C4(iParam0, &Var0, 13);
	return Var0;
}

void func_18(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_14(sParam7);
	}
	if (!unk_0x429D45A6C6520026(sParam8))
	{
		func_14(sParam8);
	}
	if (!unk_0x429D45A6C6520026(sParam9))
	{
		func_14(sParam9);
	}
	if (!unk_0x429D45A6C6520026(sParam10))
	{
		func_14(sParam10);
	}
	if (!unk_0x429D45A6C6520026(sParam11))
	{
		func_14(sParam11);
	}
	unk_0x271C1332F482646C();
}

void func_19()
{
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		if (Global_14513 == 0)
		{
			switch (Global_106070.f_14023[Global_14513 /*20*/].f_6)
			{
				case 1:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 0);
					break;
				
				case 2:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 1);
					break;
				
				case 3:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 2);
					break;
				
				case 4:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 3);
					break;
				
				case 5:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 4);
					break;
				
				case 6:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 5);
					break;
				
				case 7:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14513 == 1)
		{
			switch (Global_106070.f_14023[Global_14513 /*20*/].f_6)
			{
				case 1:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 6);
					break;
				
				case 2:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 0);
					break;
				
				case 3:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 1);
					break;
				
				case 4:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 2);
					break;
				
				case 5:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 3);
					break;
				
				case 6:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 4);
					break;
				
				case 7:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14513 == 2)
		{
			switch (Global_106070.f_14023[Global_14513 /*20*/].f_6)
			{
				case 1:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 5);
					break;
				
				case 2:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 6);
					break;
				
				case 3:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 1);
					break;
				
				case 4:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 0);
					break;
				
				case 5:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 2);
					break;
				
				case 6:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 3);
					break;
				
				case 7:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14513 == 3)
		{
			switch (Global_4268542)
			{
				case 1:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 0);
					break;
				
				case 2:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 1);
					break;
				
				case 3:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 2);
					break;
				
				case 4:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 3);
					break;
				
				case 5:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 4);
					break;
				
				case 6:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 5);
					break;
				
				case 7:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_20(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_21(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
}

int func_21(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_22();
		if (iVar1 > -1)
		{
			Global_2535232 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2535232 = 1;
		}
	}
	return iVar0;
}

var func_22()
{
	return Global_1312736;
}

void func_23()
{
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0xE11F00B4AC919F45(-1, "Menu_Accept", &Global_14502, 1);
		func_24();
	}
}

void func_24()
{
	if (func_25())
	{
		unk_0xD1DF8842C4808642(5);
	}
}

int func_25()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71205)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x9F302D755A846102();
	iVar1 = unk_0x1F7BAD75218F1A2C(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4268544 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_26()
{
	if (Global_14491 == 0)
	{
		if (func_10(2, Global_14482, 0))
		{
			func_23();
			Global_14491 = 1;
			unk_0x31A9E530D137684F(Global_14494, "GET_CURRENT_SELECTION");
			iLocal_21 = unk_0xD8015A504E3ED13A();
			while (!unk_0x5BFB8B9A58F76839(iLocal_21))
			{
				wait(0);
			}
			iLocal_24 = unk_0x7C261B004A9EEB72(iLocal_21);
			iLocal_23 = iLocal_18[iLocal_24];
			switch (iLocal_23)
			{
				case 0:
					if (Global_71205 == 0)
					{
						if (Global_36117 == 15)
						{
							if (Global_106070.f_14023.f_82 == 0)
							{
								unk_0x135C61E339DABBAC(1);
								func_16("CELL_7050");
								if (fLocal_43 == fLocal_44)
								{
								}
								bLocal_36 = true;
							}
						}
					}
					break;
				
				case 1:
					break;
				
				case 2:
					break;
				
				case 3:
					break;
			}
			if (Global_14513.f_1 > 3)
			{
				Global_14513.f_1 = 8;
			}
			func_27();
			iLocal_32 = 1;
			iLocal_35 = unk_0xFD34717937104F1C();
		}
	}
}

void func_27()
{
	int iVar0[19];
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	func_45(Global_14494, "SET_DATA_SLOT_EMPTY", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_19 = 0;
	iVar1 = 0;
	if (Global_71205)
	{
		StringCopy(&(Global_3188[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_CREWEMB", 16);
		Var2 = { func_17(unk_0xD4E735F4B6A956AC()) };
		if (!unk_0xE0B3F7A8017F6425(&Var2))
		{
			StringCopy(&(Global_3188[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_840", 16);
		}
	}
	while (iVar1 < 19)
	{
		iVar3 = 0;
		iVar4 = 18;
		Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_84[iVar4] = 5000;
		while (iVar3 < 19)
		{
			if (Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_124[iVar3] == 1)
			{
				if (iVar0[iVar3] == 0)
				{
					if (Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_84[iVar3] < Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_84[iVar4])
					{
						iVar4 = iVar3;
						func_18(Global_14494, "SET_DATA_SLOT", to_float(22), to_float(iVar1), to_float(Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_104[iVar4]), -1f, -1f, &(Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar3++;
		}
		iLocal_18[iVar1] = iVar4;
		iVar0[iVar4] = 1;
		if (unk_0x3CAC2741CC1A631F(&(Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_7[Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_259 /*4*/]), &(Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/])))
		{
			iLocal_28 = iVar1;
			if (iLocal_28 < 0)
			{
				iLocal_28 = 0;
			}
			if ((iLocal_23 == 1 || iLocal_23 == 4) || iLocal_23 == 2)
			{
				func_18(Global_14494, "SET_DATA_SLOT", to_float(22), to_float(iVar1), to_float(48), -1f, -1f, &(Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iVar1;
			}
			if (iLocal_23 == 0 && Global_71205 == 1)
			{
				func_18(Global_14494, "SET_DATA_SLOT", to_float(22), to_float(iVar1), to_float(48), -1f, -1f, &(Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iVar1;
			}
		}
		if (Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_124[iVar1] == 1)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	func_45(Global_14494, "DISPLAY_VIEW", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_14494, "SET_HEADER", &(Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_7[Global_3188[Global_14513 /*2811*/][iLocal_23 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
	if (Global_14501)
	{
		func_18(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xFA57C719261AA55D(&Global_2383, 17);
}

void func_28()
{
	if (iLocal_42)
	{
		if (timera() > 50)
		{
			iLocal_42 = 0;
		}
	}
	if (unk_0x0B9F814BC8D14042(2))
	{
		if (func_10(2, 181, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
			func_31();
		}
		if (func_10(2, 180, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
			func_29();
		}
	}
	if (iLocal_42 == 0)
	{
		if (func_10(2, Global_14489, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
			func_31();
			iLocal_42 = 1;
			settimera(0);
		}
		if (func_10(2, Global_14490, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
			func_29();
			iLocal_42 = 1;
			settimera(0);
		}
	}
}

void func_29()
{
	func_45(Global_14494, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xE11F00B4AC919F45(-1, "Menu_Navigate", &Global_14502, 1);
	func_30();
}

void func_30()
{
	if (func_25())
	{
		if (Global_14686 == 0)
		{
			unk_0xD1DF8842C4808642(2);
		}
		else
		{
			unk_0xD1DF8842C4808642(1);
		}
	}
}

void func_31()
{
	func_45(Global_14494, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xE11F00B4AC919F45(-1, "Menu_Navigate", &Global_14502, 1);
	func_32();
}

void func_32()
{
	if (func_25())
	{
		if (Global_14686 == 0)
		{
			unk_0xD1DF8842C4808642(1);
		}
		else
		{
			unk_0xD1DF8842C4808642(2);
		}
	}
}

void func_33()
{
	int iVar0[20];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_19 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		iVar2 = 0;
		iVar3 = 9;
		Global_3188[Global_14513 /*2811*/][iVar3 /*281*/] = 5000;
		if (unk_0x3278E95F94254201(2) == 0)
		{
			Global_3188[Global_14513 /*2811*/][3 /*281*/].f_280 = 0;
		}
		else
		{
			Global_3188[Global_14513 /*2811*/][3 /*281*/].f_280 = 1;
		}
		while (iVar2 < 9)
		{
			if (Global_3188[Global_14513 /*2811*/][iVar2 /*281*/].f_280 == 1)
			{
				if (iVar0[iVar2] == 0)
				{
					if (Global_3188[Global_14513 /*2811*/][iVar2 /*281*/] < Global_3188[Global_14513 /*2811*/][iVar3 /*281*/])
					{
						if (Global_71205)
						{
							if (iVar2 == 0)
							{
								iVar3 = iVar2;
								func_41(iVar2, iVar3);
								func_18(Global_14494, "SET_DATA_SLOT", to_float(13), to_float(iVar1), to_float(iLocal_29), -1f, -1f, &(Global_3188[Global_14513 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
							}
							else
							{
								iVar3 = iVar2;
								func_41(iVar2, iVar3);
								func_18(Global_14494, "SET_DATA_SLOT", to_float(13), to_float(iVar1), to_float(iLocal_29), -1f, -1f, &(Global_3188[Global_14513 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (func_34() == 2)
						{
							if (iVar2 == 4 || iVar2 == 5)
							{
							}
							else
							{
								iVar3 = iVar2;
								func_41(iVar2, iVar3);
								func_18(Global_14494, "SET_DATA_SLOT", to_float(13), to_float(iVar1), to_float(iLocal_29), -1f, -1f, &(Global_3188[Global_14513 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (iVar2 == 5)
						{
						}
						else
						{
							iVar3 = iVar2;
							func_41(iVar2, iVar3);
							func_18(Global_14494, "SET_DATA_SLOT", to_float(13), to_float(iVar1), to_float(iLocal_29), -1f, -1f, &(Global_3188[Global_14513 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar2++;
		}
		iLocal_18[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_3188[Global_14513 /*2811*/][iVar1 /*281*/].f_280 == 1)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	func_45(Global_14494, "DISPLAY_VIEW", 13f, to_float(iLocal_24), -1082130432, -1082130432, -1082130432);
	func_13(Global_14494, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_14501)
	{
		func_18(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xFA57C719261AA55D(&Global_2383, 17);
}

int func_34()
{
	if (Global_71205)
	{
		Global_14513 = 3;
	}
	else
	{
		Global_14513 = func_35();
	}
	if (Global_14513 > 3)
	{
		Global_14513 = 3;
	}
	return Global_106070.f_14023[Global_14513 /*20*/].f_7;
}

var func_35()
{
	func_36();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_36()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_40(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_39(unk_0xA19140A5C42D8715());
			if (func_38(iVar0) && (!func_37(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_38(Global_106070.f_2355.f_539.f_4301))
				{
					Global_106070.f_2355.f_539.f_4302 = Global_106070.f_2355.f_539.f_4301;
				}
				Global_106070.f_2355.f_539.f_4303 = iVar0;
				Global_106070.f_2355.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106070.f_2355.f_539.f_4301 != 145)
			{
				Global_106070.f_2355.f_539.f_4303 = Global_106070.f_2355.f_539.f_4301;
			}
			return;
		}
	}
	Global_106070.f_2355.f_539.f_4301 = 145;
}

bool func_37(int iParam0)
{
	return Global_36117 == iParam0;
}

bool func_38(int iParam0)
{
	return iParam0 < 3;
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_40(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_40(int iParam0)
{
	if (func_38(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_41(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (Global_71205)
			{
				iLocal_29 = 19;
			}
			else if (Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 2)
			{
				iLocal_29 = 26;
			}
			else
			{
				iLocal_29 = 25;
			}
			break;
		
		case 3:
			if (Global_3188[Global_14513 /*2811*/][3 /*281*/].f_259 == 1)
			{
				iLocal_29 = 20;
			}
			else
			{
				iLocal_29 = 21;
			}
			break;
		
		default:
			iLocal_29 = Global_3188[Global_14513 /*2811*/][iParam1 /*281*/].f_6;
			break;
	}
}

void func_42()
{
	if (Global_36117 != 15)
	{
		func_44();
		Global_3188[Global_14513 /*2811*/][0 /*281*/].f_124[2] = 0;
	}
}

int func_43(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_21(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_44()
{
	if (func_37(14))
	{
		if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[0 /*29*/])
			{
				Global_14513 = 0;
			}
			else if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[1 /*29*/])
			{
				Global_14513 = 1;
			}
			else if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[2 /*29*/])
			{
				Global_14513 = 2;
			}
			else
			{
				Global_14513 = 0;
			}
		}
	}
	else
	{
		Global_14513 = func_35();
		if (Global_14513 == 145)
		{
			Global_14513 = 3;
		}
		if (Global_71205)
		{
			Global_14513 = 3;
		}
		if (Global_14513 > 3)
		{
			Global_14513 = 3;
		}
	}
}

void func_45(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

