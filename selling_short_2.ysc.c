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
	var uLocal_20 = 0;
	vector3 vLocal_21 = { 0f, 0f, 0f };
	struct<18> Local_22 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_41 = 0;
	struct<178> Local_42[27];
	var uLocal_43 = 0;
	struct<24> Local_44[30];
	var uLocal_45 = 0;
	struct<24> Local_46[24];
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	bool bLocal_64 = 0;
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
	iLocal_41 = 29;
	fLocal_49 = 0.075f;
	fLocal_50 = 0.725f;
	iLocal_57 = 1;
	iLocal_58 = 1;
	bLocal_64 = true;
	unk_0xD07EE91CE9B6D4CF(1);
	if (unk_0x5EBD03AF78E7B4DB(3))
	{
		func_40();
	}
	unk_0x9662BE461F9FDF9E(0);
	unk_0x8C094FAE1DF5295C(1);
	func_34(1);
	if (func_33(unk_0xA19140A5C42D8715()))
	{
		unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 689.1f, 586.5f, 130.5f, 1, false, 0, 1);
		unk_0x3521B10FB737CE36(689.1f, 586.5f, 130.5f, 500f, 0);
		unk_0x1C09E70D9D927D95(unk_0xA19140A5C42D8715(), 1);
	}
	unk_0x9D7A6D81C3BE2AAE("les_1b_mcs_2_p2_a1", 8);
	func_16(1);
	while (unk_0x5A64D21C202C9E32(unk_0xA19140A5C42D8715()))
	{
		wait(0);
	}
	func_6(1, 1, 1, 0, 0);
	unk_0x70C1F5AA59767FE6(0);
	while (true)
	{
		unk_0x5FEB5D55B0DE217B(0f);
		unk_0x60C495B6942EC817(0f);
		func_33(unk_0xA19140A5C42D8715());
		if (func_1())
		{
			func_40();
		}
		wait(0);
	}
}

int func_1()
{
	unk_0xF7B6117C03C77578(vLocal_21.x, vLocal_21.y, vLocal_21.z);
	unk_0x51A980E0A9A41672(-1f);
	switch (iLocal_59)
	{
		case 0:
			unk_0x70C1F5AA59767FE6(0);
			func_5();
			unk_0x70C1F5AA59767FE6(500);
			unk_0x80D42964D19AF118(0);
			iLocal_59++;
			break;
		
		case 1:
			if (!unk_0xD246C1DFC9B0EBC2())
			{
				if (bLocal_64)
				{
					func_3();
				}
				unk_0x7AF4A31FB51D0A4D(iLocal_53);
				unk_0x84829313FB8AC81C(iLocal_51, 0.2f, 0.34f, 0.410001f, 0.69f, 100, 100, 100, 255, 0);
				unk_0x7AF4A31FB51D0A4D(iLocal_54);
				if (bLocal_55)
				{
					unk_0x31A9E530D137684F(iLocal_52, "SET_TEXT");
					func_2("KEYNOTE_NAME");
					func_2("KEYNOTE_TITLE");
					unk_0x271C1332F482646C();
					unk_0x84829313FB8AC81C(iLocal_52, 0.5f, 0.5f, 1f, 1f, 100, 100, 100, 255, 0);
				}
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_2(char* sParam0)
{
	unk_0x390B339C943A8A54(sParam0);
	unk_0xD481829E3E36543B();
}

void func_3()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x95BED12E084A8F9A();
	iVar1 = 0;
	while (iVar1 <= (16 - 1))
	{
		if (Local_22[iVar1] != -1)
		{
			if ((!unk_0x05EFB6A616B6FADE(iLocal_39, iVar1) && iVar0 >= Local_22[iVar1]) && iVar0 < Local_22.f_17[iVar1])
			{
				func_4();
				unk_0x2BCFB39E86340DAA(&iLocal_39, iVar1);
			}
		}
		iVar1++;
	}
}

void func_4()
{
}

void func_5()
{
}

void func_6(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		unk_0xC97ACA9456A064F3(unk_0xD4E735F4B6A956AC());
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 1);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 1);
		func_15(1);
		unk_0x158181F81A221D70();
		unk_0xD8EA6395AE60BF4A();
		if (Global_14513.f_1 > 3)
		{
			if (unk_0xB39808C1DCE0DCFA())
			{
				unk_0xA8B97F91CBDE376C(false);
			}
			if (!func_14())
			{
				Global_14513.f_1 = 3;
			}
			Global_15822 = 5;
		}
		func_13(1, iParam3, iParam2, 0);
		Global_56187 = 1;
		Global_68497 = 1;
		Global_71203 = 1;
	}
	else
	{
		func_15(0);
		unk_0x21727E2C492FE1B3();
		Global_56187 = 0;
		if (bParam1)
		{
			unk_0x1A81FD78261DCFCD();
		}
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 0);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 0);
		func_13(0, iParam3, iParam2, 0);
		if (unk_0x4C9BACA8D249CB13())
		{
			if ((((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_11(unk_0xD4E735F4B6A956AC())) && !func_8(unk_0xD4E735F4B6A956AC(), 0)) && !func_7()) && !bParam4)
			{
				unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), false);
			}
		}
		else if ((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_11(unk_0xD4E735F4B6A956AC())) && !bParam4)
		{
			unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), false);
		}
		Global_71203 = 0;
	}
}

bool func_7()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 14);
}

bool func_8(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_9(-1, 0) == 8;
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

int func_9(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_10();
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

int func_10()
{
	return Global_1312736;
}

int func_11(int iParam0)
{
	if (func_8(iParam0, 0))
	{
		return 1;
	}
	if (func_12())
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

bool func_12()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

int func_13(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x47C01C0E6F4C1D06())
	{
		if (unk_0xDA9416DF9C88432D() != iParam0 && uParam2)
		{
			unk_0x5126E6F88EF5B7A1(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_14()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_15(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x2BCFB39E86340DAA(&Global_2383, 13);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_2383, 13);
	}
}

void func_16(bool bParam0)
{
	int iVar0;
	
	if (func_33(unk_0xA19140A5C42D8715()))
	{
		unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 689.1f, 586.5f, 130.5f, 1, false, 0, 1);
		unk_0x3521B10FB737CE36(689.1f, 586.5f, 130.5f, 500f, 0);
		unk_0x1C09E70D9D927D95(unk_0xA19140A5C42D8715(), 1);
	}
	func_32(0);
	func_31(&iLocal_63, 0);
	unk_0x543A213BF1AB6832(689.1f, 586.5f, 130.5f, 80f, 0);
	while (!unk_0xD3512CB88BB3513F())
	{
		wait(0);
	}
	unk_0x99D88BBC8B927586();
	if (bParam0)
	{
		unk_0x1639295C71657BCF("LInvader");
		while (!unk_0x471855870C045BD0("LInvader"))
		{
			wait(0);
		}
	}
	unk_0x159BBE9A06B1F3AD("EXTRASUNNY");
	iLocal_40[0] = joaat("a_m_y_hipster_01");
	iLocal_40[1] = joaat("a_m_y_hipster_02");
	iLocal_40[2] = joaat("a_m_y_hipster_03");
	iLocal_40[3] = joaat("a_f_y_hipster_01");
	iLocal_40[4] = joaat("a_f_y_hipster_02");
	iLocal_40[5] = joaat("a_f_y_hipster_03");
	iLocal_40[6] = joaat("a_f_y_hipster_04");
	iLocal_40[7] = joaat("a_f_y_bevhills_01");
	iLocal_40[8] = joaat("a_m_m_business_01");
	iLocal_40[9] = joaat("a_m_m_bevhills_02");
	iLocal_40[10] = joaat("a_m_m_skater_01");
	iLocal_40[11] = joaat("a_m_y_beachvesp_01");
	iLocal_40[12] = joaat("a_m_y_bevhills_01");
	iLocal_40[13] = joaat("a_f_m_bevhills_01");
	iLocal_40[14] = joaat("a_m_m_ktown_01");
	iLocal_40[15] = joaat("a_m_y_busicas_01");
	iLocal_40[16] = joaat("a_m_y_business_02");
	iLocal_40[17] = joaat("a_m_y_gay_01");
	iLocal_40[18] = joaat("a_m_y_ktown_02");
	iLocal_40[19] = joaat("a_m_m_bevhills_02");
	iLocal_40[20] = joaat("a_m_y_business_03");
	iLocal_40[21] = joaat("a_m_y_gay_02");
	iLocal_40[22] = joaat("a_m_m_malibu_01");
	iLocal_40[22] = joaat("a_m_y_gay_02");
	iLocal_40[23] = joaat("a_m_y_eastsa_02");
	iLocal_40[24] = joaat("a_m_y_soucent_02");
	iLocal_40[25] = joaat("a_m_y_vinewood_01");
	iLocal_40[26] = joaat("a_m_y_vinewood_02");
	iLocal_40[27] = joaat("a_m_y_vinewood_03");
	iLocal_40[28] = joaat("a_m_y_vinewood_04");
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		func_29(func_30(iVar0), 1);
		iVar0++;
	}
	func_29("misslester1b_crowdlow@14@", 1);
	func_29("misslester1b_crowdlow@24@", 1);
	func_28("BREAKING_NEWS", &iLocal_52, 1);
	func_28("lifeinvader_presentation", &iLocal_51, 1);
	func_27("LEST1", 0, 1, 0);
	iVar0 = 0;
	while (iVar0 <= 26)
	{
		func_21(&(Local_42[iVar0 /*178*/]), iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_20(&(Local_44[iVar0 /*24*/]), iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		func_19(&(Local_46[iVar0 /*24*/]), iVar0);
		iVar0++;
	}
	unk_0x0A74F1E9CF777638(1);
	unk_0xA998025A612085C5("Big_Disp", 0);
	unk_0xDD449E57001A6C13(joaat("prop_huge_display_01"));
	unk_0xDD449E57001A6C13(joaat("prop_huge_display_02"));
	iLocal_53 = unk_0x88A337F7A8A721B3("Big_Disp");
	iLocal_54 = unk_0x351670D4BE8B10E6();
	while (unk_0x5A64D21C202C9E32(unk_0xA19140A5C42D8715()))
	{
		wait(0);
	}
	while (!unk_0x7974D616EF03E483())
	{
		wait(0);
	}
	wait(2000);
	iLocal_59 = 0;
	vLocal_21.x = 12;
	vLocal_21.y = 0;
	vLocal_21.z = 0;
	iVar0 = 0;
	while (iVar0 <= (16 - 1))
	{
		func_17(iVar0);
		iVar0++;
	}
	if (bLocal_56)
	{
	}
}

void func_17(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_18(iParam0, 0, 10000);
			break;
		
		case 1:
			func_18(iParam0, 9000, 10000);
			break;
		
		case 2:
			func_18(iParam0, 27000, 32000);
			break;
		
		case 3:
			func_18(iParam0, 32000, 42000);
			break;
		
		case 4:
			func_18(iParam0, 51000, 63000);
			break;
		
		case 5:
			func_18(iParam0, 63600, 69000);
			break;
		
		case 6:
			func_18(iParam0, 66000, 70200);
			break;
		
		case 7:
			func_18(iParam0, 69600, 79200);
			break;
		
		case 8:
			func_18(iParam0, 77400, 84000);
			break;
		
		case 12:
			func_18(iParam0, 81000, 93600);
			break;
		
		case 9:
			func_18(iParam0, -1, -1);
			break;
		
		case 11:
			func_18(iParam0, 90000, 154200);
			break;
		
		case 10:
			func_18(iParam0, 129600, 133200);
			break;
		
		case 13:
			func_18(iParam0, 144600, 154200);
			break;
		
		case 14:
			func_18(iParam0, 152700, 154200);
			break;
		
		case 15:
			func_18(iParam0, 154200, 154200);
			break;
	}
}

void func_18(int iParam0, int iParam1, int iParam2)
{
	Local_22[iParam0] = iParam1;
	Local_22.f_17[iParam0] = iParam2;
}

void func_19(var uParam0, int iParam1)
{
	uParam0->f_22 = 0;
	unk_0xFA57C719261AA55D(&uLocal_47, iParam1);
	if (iParam1 == 0 && uParam0->f_22 == 0)
	{
	}
}

void func_20(var uParam0, int iParam1)
{
	uParam0->f_22 = 0;
	unk_0xFA57C719261AA55D(&uLocal_45, iParam1);
	if (iParam1 == 0 && uParam0->f_22 == 0)
	{
	}
}

void func_21(var uParam0, int iParam1)
{
	vector3 vVar0;
	
	func_26(uParam0);
	unk_0xFA57C719261AA55D(&uLocal_43, iParam1);
	switch (iParam1)
	{
		case 0:
			vVar0 = { 0f, 0f, (func_25(-4.29f) + 180f) };
			func_23(uParam0, 82047830, 667.319f, 572.133f, 128.521f, vVar0, 6, 0, 0);
			func_23(uParam0, 83248680, 666.312f, 571.675f, 128.521f, vVar0, 6, 1, 0);
			func_23(uParam0, 71526810, 665.235f, 571.183f, 128.521f, vVar0, 6, 2, 0);
			func_23(uParam0, 49826530, 664.124f, 570.679f, 128.521f, vVar0, 6, 0, 0);
			func_23(uParam0, 78575440, 663.029f, 570.181f, 128.521f, vVar0, 6, 1, 0);
			func_23(uParam0, 12133230, 661.937f, 569.685f, 128.521f, vVar0, 6, 2, 0);
			func_23(uParam0, 89665750, 660.839f, 569.194f, 128.521f, vVar0, 6, 0, 0);
			func_23(uParam0, 65990810, 659.537f, 569.392f, 128.521f, vVar0, 6, 1, 0);
			func_23(uParam0, 21233450, 658.187f, 569.572f, 128.523f, vVar0, 4, 0, 1f);
			func_22(&(uParam0->f_155[0 /*11*/]), 659.867f, 571.539f, 128.531f, vVar0, 0, 0.5f, -1.5f);
			func_22(&(uParam0->f_155[1 /*11*/]), 660.646f, 567.108f, 128.521f, vVar0, 0, 0.5f, -1.5f);
			break;
		
		case 1:
			vVar0 = { 0f, 0f, (func_25(-3.98f) + 180f) };
			func_23(uParam0, 21091970, 670.312f, 568.023f, 128.521f, vVar0, 5, 0, 0.5f);
			func_23(uParam0, 97482490, 669.189f, 567.502f, 128.522f, vVar0, 6, 1, 0);
			func_23(uParam0, 66764240, 668.28f, 566.688f, 128.522f, vVar0, 6, 0, 0);
			func_23(uParam0, 82832850, 667.384f, 565.885f, 128.522f, vVar0, 6, 2, 0);
			func_23(uParam0, 33636100, 666.491f, 565.085f, 128.522f, vVar0, 6, 0, 0);
			func_23(uParam0, 22769640, 665.595f, 564.282f, 128.522f, vVar0, 6, 1, 0);
			break;
		
		case 2:
			vVar0 = { 0f, 0f, (func_25(-3.78f) + 180f) };
			func_23(uParam0, 91480760, 673.7f, 564.799f, 128.521f, vVar0, 6, 0, 0);
			func_23(uParam0, 64996320, 672.996f, 563.847f, 128.521f, vVar0, 6, 1, 0);
			func_23(uParam0, 30855220, 672.271f, 562.865f, 128.521f, vVar0, 6, 2, 0);
			func_23(uParam0, 98921990, 671.557f, 561.897f, 128.521f, vVar0, 6, 0, 0);
			func_23(uParam0, 73357200, 670.258f, 561.366f, 128.522f, vVar0, 6, 1, 0);
			func_22(&(uParam0->f_155[0 /*11*/]), 669.564f, 563.469f, 128.521f, vVar0, 2, -1.5f, -1.5f);
			func_22(&(uParam0->f_155[1 /*11*/]), 672.34f, 559.914f, 128.522f, vVar0, 2, -1.5f, -1.5f);
			break;
		
		case 3:
			vVar0 = { 0f, 0f, (func_25(-3.38f) + 180f) };
			func_23(uParam0, 89689390, 681.517f, 555.801f, 128.522f, vVar0, 6, 0, 0);
			func_23(uParam0, 71057000, 681.796f, 556.967f, 128.522f, vVar0, 6, 1, 0);
			func_23(uParam0, 26206390, 682.076f, 558.137f, 128.522f, vVar0, 6, 2, 0);
			func_23(uParam0, 58207860, 682.36f, 559.342f, 128.522f, vVar0, 6, 0, 0);
			func_23(uParam0, 43622440, 682.635f, 560.475f, 128.522f, vVar0, 6, 1, 0);
			break;
		
		case 4:
			vVar0 = { 0f, 0f, (func_25(-3.17f) + 180f) };
			func_23(uParam0, 78555440, 687.841f, 559.785f, 128.522f, vVar0, 6, 0, 0);
			func_23(uParam0, 12324420, 687.807f, 558.602f, 128.522f, vVar0, 6, 1, 0);
			func_23(uParam0, 4083210, 687.771f, 557.382f, 128.522f, vVar0, 6, 2, 0);
			func_23(uParam0, 2021980, 688.465f, 556.159f, 128.522f, vVar0, 6, 0, 0);
			func_23(uParam0, 21091970, 688.431f, 554.961f, 128.521f, vVar0, 6, 1, 0);
			func_22(&(uParam0->f_155[0 /*11*/]), 685.931f, 556.306f, 128.522f, vVar0, 0, 0.5f, -1.5f);
			func_22(&(uParam0->f_155[1 /*11*/]), 685.897f, 555.108f, 128.521f, vVar0, 1, -1.5f, -1.5f);
			break;
		
		case 5:
			vVar0 = { 0f, 0f, (func_25(-2.97f) + 180f) };
			func_23(uParam0, 31491440, 692.632f, 559.992f, 128.522f, vVar0, 5, 2, -0.5f);
			func_23(uParam0, 34393340, 693.189f, 558.886f, 128.522f, vVar0, 6, 0, 0);
			func_23(uParam0, 94762900, 693.396f, 557.684f, 128.522f, vVar0, 6, 1, 0);
			func_23(uParam0, 95283980, 693.6f, 556.498f, 128.522f, vVar0, 6, 2, 0);
			func_23(uParam0, 92416940, 693.803f, 555.317f, 128.522f, vVar0, 6, 0, 0);
			func_23(uParam0, 53597080, 694.007f, 554.131f, 128.522f, vVar0, 6, 1, 0);
			break;
		
		case 6:
			vVar0 = { 0f, 0f, (func_25(-2.7f) + 180f) };
			func_23(uParam0, 86170110, 697.492f, 561.188f, 128.522f, vVar0, 6, 0, 0);
			func_23(uParam0, 62247860, 697.964f, 560.188f, 128.522f, vVar0, 6, 1, 0);
			func_23(uParam0, 43665230, 698.467f, 559.116f, 128.522f, vVar0, 6, 2, 0);
			func_23(uParam0, 32906070, 698.988f, 558.013f, 128.522f, vVar0, 6, 0, 0);
			func_23(uParam0, 70836820, 699.502f, 556.925f, 128.522f, vVar0, 6, 1, 0);
			func_23(uParam0, 67800350, 700.014f, 555.841f, 128.522f, vVar0, 6, 2, 0);
			func_23(uParam0, 41115560, 701.184f, 555.063f, 128.521f, vVar0, 6, 0, 0);
			func_23(uParam0, 98430790, 701.005f, 553.758f, 128.522f, vVar0, 6, 1, 0);
			func_22(&(uParam0->f_155[0 /*11*/]), 698.861f, 554.048f, 128.521f, vVar0, 0, 0.5f, -1.5f);
			func_22(&(uParam0->f_155[1 /*11*/]), 703.267f, 554.91f, 128.522f, vVar0, 0, 0.5f, -1.5f);
			break;
		
		case 7:
			vVar0 = { 0f, 0f, (func_25(-3.99f) + 180f) };
			func_23(uParam0, 13168530, 652.833f, 570.052f, 128.529f, vVar0, 6, 0, 0);
			func_23(uParam0, 92127780, 652.006f, 569.319f, 128.528f, vVar0, 6, 1, 0);
			func_23(uParam0, 51664260, 651.136f, 568.538f, 128.729f, vVar0, 6, 2, 0);
			func_23(uParam0, 35914010, 650.242f, 567.746f, 128.729f, vVar0, 6, 0, 0);
			func_23(uParam0, 43076060, 649.661f, 566.94f, 128.929f, vVar0, 6, 1, 0);
			func_23(uParam0, 21755390, 648.426f, 566.137f, 128.929f, vVar0, 6, 2, 0);
			break;
		
		case 8:
			vVar0 = { 0f, 0f, (func_25(-3.9f) + 180f) };
			func_23(uParam0, 20501110, 656.955f, 565.868f, 128.53f, vVar0, 6, 0, 0);
			func_23(uParam0, 10114780, 656.193f, 565.067f, 128.53f, vVar0, 6, 1, 0);
			func_23(uParam0, 12664730, 655.358f, 564.19f, 128.73f, vVar0, 6, 2, 0);
			func_23(uParam0, 32956570, 654.534f, 563.324f, 128.73f, vVar0, 6, 0, 0);
			func_23(uParam0, 11862860, 653.696f, 562.443f, 128.93f, vVar0, 6, 1, 0);
			func_23(uParam0, 87809290, 652.862f, 561.566f, 128.93f, vVar0, 6, 2, 0);
			break;
		
		case 9:
			vVar0 = { 0f, 0f, (func_25(-3.76f) + 180f) };
			func_23(uParam0, 75170110, 662.947f, 560.965f, 128.529f, vVar0, 6, 0, 0);
			func_23(uParam0, 62246860, 662.306f, 560.065f, 128.529f, vVar0, 6, 1, 0);
			func_23(uParam0, 83665250, 661.603f, 559.079f, 128.73f, vVar0, 6, 2, 0);
			func_23(uParam0, 22016170, 660.91f, 558.106f, 128.73f, vVar0, 6, 0, 0);
			func_23(uParam0, 41846840, 660.204f, 557.116f, 128.929f, vVar0, 6, 1, 0);
			func_23(uParam0, 10000350, 659.502f, 556.13f, 128.929f, vVar0, 6, 2, 0);
			break;
		
		case 10:
			vVar0 = { 0f, 0f, (func_25(-3.68f) + 180f) };
			func_23(uParam0, 86878180, 667.872f, 557.785f, 128.53f, vVar0, 6, 0, 0);
			func_23(uParam0, 22242820, 667.31f, 556.833f, 128.53f, vVar0, 6, 1, 0);
			func_23(uParam0, 93969290, 666.693f, 555.791f, 128.73f, vVar0, 6, 2, 0);
			func_23(uParam0, 12101010, 666.086f, 554.762f, 128.73f, vVar0, 6, 0, 0);
			func_23(uParam0, 20232220, 665.467f, 553.715f, 128.93f, vVar0, 6, 1, 0);
			func_23(uParam0, 57707370, 664.852f, 552.673f, 128.93f, vVar0, 6, 2, 0);
			break;
		
		case 11:
			vVar0 = { 0f, 0f, (func_25(-3.53f) + 180f) };
			func_23(uParam0, 13130110, 674.882f, 554.326f, 128.529f, vVar0, 6, 0, 0);
			func_23(uParam0, 97845810, 674.46f, 553.305f, 128.529f, vVar0, 6, 1, 0);
			func_23(uParam0, 12345670, 673.997f, 552.186f, 128.73f, vVar0, 6, 2, 0);
			func_23(uParam0, 89101110, 673.541f, 551.081f, 128.73f, vVar0, 6, 0, 0);
			func_23(uParam0, 12131410, 673.076f, 549.958f, 128.929f, vVar0, 6, 1, 0);
			func_23(uParam0, 51617180, 672.613f, 548.839f, 128.929f, vVar0, 6, 2, 0);
			break;
		
		case 12:
			vVar0 = { 0f, 0f, (func_25(-3.45f) + 180f) };
			func_23(uParam0, 60616260, 680.396f, 552.335f, 128.53f, vVar0, 6, 0, 0);
			func_23(uParam0, 36465660, 680.063f, 551.281f, 128.53f, vVar0, 6, 1, 0);
			func_23(uParam0, 67686970, 679.697f, 550.127f, 128.73f, vVar0, 6, 2, 0);
			func_23(uParam0, 71727370, 679.336f, 548.988f, 128.73f, vVar0, 6, 0, 0);
			func_23(uParam0, 47576770, 678.969f, 547.829f, 128.93f, vVar0, 6, 1, 0);
			func_23(uParam0, 78798080, 678.603f, 546.674f, 128.93f, vVar0, 6, 2, 0);
			break;
		
		case 13:
			vVar0 = { 0f, 0f, (func_25(-3.31f) + 180f) };
			func_23(uParam0, 11511610, 688.034f, 550.483f, 128.529f, vVar0, 6, 0, 0);
			func_23(uParam0, 17118110, 687.853f, 549.393f, 128.529f, vVar0, 6, 1, 0);
			func_23(uParam0, 91201210, 687.653f, 548.199f, 128.73f, vVar0, 6, 2, 0);
			func_23(uParam0, 12212310, 687.457f, 547.02f, 128.73f, vVar0, 6, 0, 0);
			func_23(uParam0, 23124120, 687.257f, 545.821f, 128.929f, vVar0, 6, 1, 0);
			func_23(uParam0, 51261270, 687.058f, 544.627f, 128.929f, vVar0, 6, 2, 0);
			break;
		
		case 14:
			vVar0 = { 0f, 0f, (func_25(-3.22f) + 180f) };
			func_23(uParam0, 15515610, 693.855f, 549.783f, 128.53f, vVar0, 6, 0, 0);
			func_23(uParam0, 57158150, 693.767f, 548.682f, 128.53f, vVar0, 6, 1, 0);
			func_23(uParam0, 91601610, 693.67f, 547.474f, 128.73f, vVar0, 6, 2, 0);
			func_23(uParam0, 16216310, 693.575f, 546.283f, 128.73f, vVar0, 6, 0, 0);
			func_23(uParam0, 64165160, 693.478f, 545.071f, 128.93f, vVar0, 6, 1, 0);
			func_23(uParam0, 61671680, 693.381f, 543.865f, 128.93f, vVar0, 6, 2, 0);
			break;
		
		case 15:
			vVar0 = { 0f, 0f, (func_25(-3.08f) + 180f) };
			func_23(uParam0, 19920020, 701.652f, 549.708f, 128.529f, vVar0, 6, 0, 0);
			func_23(uParam0, 1202200, 701.721f, 548.605f, 128.529f, vVar0, 6, 1, 0);
			func_23(uParam0, 32042050, 701.795f, 547.396f, 128.729f, vVar0, 6, 2, 0);
			func_23(uParam0, 20620720, 701.869f, 546.203f, 128.729f, vVar0, 6, 0, 0);
			func_23(uParam0, 8209210, 701.944f, 544.99f, 128.929f, vVar0, 6, 1, 0);
			func_23(uParam0, 2112120, 702.019f, 543.781f, 128.929f, vVar0, 6, 2, 0);
			break;
		
		case 16:
			vVar0 = { 0f, 0f, (func_25(-2.99f) + 180f) };
			func_23(uParam0, 24024120, 707.482f, 550.335f, 128.53f, vVar0, 6, 0, 0);
			func_23(uParam0, 43244240, 707.644f, 549.242f, 128.53f, vVar0, 6, 1, 0);
			func_23(uParam0, 42452460, 707.821f, 548.044f, 128.73f, vVar0, 6, 2, 0);
			func_23(uParam0, 24724820, 707.996f, 546.862f, 128.73f, vVar0, 6, 0, 0);
			func_23(uParam0, 48249250, 708.174f, 545.659f, 128.929f, vVar0, 6, 1, 0);
			func_23(uParam0, 2512520, 708.351f, 544.461f, 128.929f, vVar0, 6, 2, 0);
			break;
		
		case 17:
			vVar0 = { 0f, 0f, (func_25(-3.98f) + 180f) };
			func_23(uParam0, 46779100, 646.434f, 564.522f, 128.927f, vVar0, 6, 0, 0);
			func_23(uParam0, 93643160, 645.612f, 563.784f, 128.927f, vVar0, 6, 1, 0);
			func_23(uParam0, 34729570, 644.71f, 562.975f, 129.127f, vVar0, 6, 2, 0);
			func_23(uParam0, 28556490, 643.821f, 562.177f, 129.127f, vVar0, 6, 0, 0);
			func_23(uParam0, 75335160, 642.916f, 561.365f, 129.327f, vVar0, 6, 1, 0);
			func_23(uParam0, 84872300, 642.015f, 560.557f, 129.327f, vVar0, 6, 2, 0);
			break;
		
		case 18:
			vVar0 = { 0f, 0f, (func_25(-3.91f) + 180f) };
			func_23(uParam0, 65187100, 651.092f, 559.707f, 128.926f, vVar0, 6, 0, 0);
			func_23(uParam0, 87514460, 650.325f, 558.912f, 128.926f, vVar0, 6, 1, 0);
			func_23(uParam0, 46165810, 649.483f, 558.04f, 128.127f, vVar0, 6, 2, 0);
			func_23(uParam0, 12560720, 648.654f, 557.18f, 129.127f, vVar0, 6, 0, 0);
			func_23(uParam0, 27854880, 647.809f, 556.306f, 129.326f, vVar0, 6, 1, 0);
			func_23(uParam0, 97601360, 646.968f, 555.435f, 129.326f, vVar0, 6, 2, 0);
			break;
		
		case 19:
			vVar0 = { 0f, 0f, (func_25(-3.75f) + 180f) };
			func_23(uParam0, 55178130, 657.925f, 554.108f, 128.927f, vVar0, 6, 0, 0);
			func_23(uParam0, 75148880, 657.29f, 553.204f, 128.927f, vVar0, 6, 1, 0);
			func_23(uParam0, 88865540, 656.593f, 552.213f, 129.127f, vVar0, 6, 2, 0);
			func_23(uParam0, 64916770, 655.906f, 551.235f, 129.127f, vVar0, 6, 0, 0);
			func_23(uParam0, 70536220, 655.207f, 550.241f, 129.327f, vVar0, 6, 1, 0);
			func_23(uParam0, 17101310, 654.512f, 549.25f, 129.327f, vVar0, 6, 2, 0);
			break;
		
		case 20:
			vVar0 = { 0f, 0f, (func_25(-3.68f) + 180f) };
			func_23(uParam0, 76870120, 663.545f, 550.463f, 128.926f, vVar0, 6, 0, 0);
			func_23(uParam0, 32147850, 662.977f, 549.515f, 128.926f, vVar0, 6, 1, 0);
			func_23(uParam0, 97662220, 662.353f, 548.477f, 129.127f, vVar0, 6, 2, 0);
			func_23(uParam0, 12107070, 661.738f, 547.453f, 129.127f, vVar0, 6, 0, 0);
			func_23(uParam0, 60841880, 661.111f, 546.411f, 129.326f, vVar0, 6, 1, 0);
			func_23(uParam0, 27803350, 660.489f, 545.373f, 129.326f, vVar0, 6, 2, 0);
			break;
		
		case 21:
			vVar0 = { 0f, 0f, (func_25(-3.53f) + 180f) };
			func_23(uParam0, 19202120, 671.531f, 546.515f, 128.927f, vVar0, 6, 0, 0);
			func_23(uParam0, 22232420, 671.116f, 545.491f, 128.927f, vVar0, 6, 1, 0);
			func_23(uParam0, 52627280, 670.66f, 544.369f, 129.127f, vVar0, 6, 2, 0);
			func_23(uParam0, 29303130, 670.211f, 543.262f, 129.127f, vVar0, 6, 0, 0);
			func_23(uParam0, 23334350, 669.753f, 542.135f, 129.327f, vVar0, 6, 1, 0);
			func_23(uParam0, 36373830, 669.298f, 541.014f, 129.327f, vVar0, 6, 2, 0);
			break;
		
		case 22:
			vVar0 = { 0f, 0f, (func_25(-3.46f) + 180f) };
			func_23(uParam0, 18283840, 677.828f, 544.227f, 128.926f, vVar0, 6, 0, 0);
			func_23(uParam0, 85858680, 677.487f, 543.176f, 128.926f, vVar0, 6, 1, 0);
			func_23(uParam0, 78889900, 677.112f, 542.024f, 129.127f, vVar0, 6, 2, 0);
			func_23(uParam0, 91929390, 676.744f, 540.888f, 129.127f, vVar0, 6, 0, 0);
			func_23(uParam0, 49596970, 676.368f, 539.731f, 129.326f, vVar0, 6, 1, 0);
			func_23(uParam0, 98991000, 675.994f, 538.58f, 129.326f, vVar0, 6, 2, 0);
			break;
		
		case 23:
			vVar0 = { 0f, 0f, (func_25(-3.3f) + 180f) };
			func_23(uParam0, 12812910, 686.526f, 542.118f, 128.927f, vVar0, 6, 0, 0);
			func_23(uParam0, 30131130, 686.352f, 541.027f, 128.927f, vVar0, 6, 1, 0);
			func_23(uParam0, 21331340, 686.16f, 539.831f, 129.127f, vVar0, 6, 1, 0);
			func_23(uParam0, 13513610, 685.972f, 538.652f, 129.127f, vVar0, 6, 0, 0);
			func_23(uParam0, 37138130, 685.779f, 537.451f, 129.327f, vVar0, 6, 1, 0);
			func_23(uParam0, 91401410, 685.588f, 536.256f, 129.327f, vVar0, 6, 2, 0);
			break;
		
		case 24:
			vVar0 = { 0f, 0f, (func_25(-3.23f) + 180f) };
			func_23(uParam0, 16917010, 693.176f, 541.306f, 128.926f, vVar0, 6, 0, 0);
			func_23(uParam0, 71172170, 693.08f, 540.205f, 128.926f, vVar0, 6, 1, 0);
			func_23(uParam0, 31741750, 692.975f, 538.998f, 129.127f, vVar0, 6, 2, 0);
			func_23(uParam0, 17617810, 692.871f, 537.808f, 129.127f, vVar0, 6, 0, 0);
			func_23(uParam0, 79180180, 692.765f, 536.597f, 129.326f, vVar0, 6, 1, 0);
			func_23(uParam0, 21831840, 692.66f, 535.391f, 129.326f, vVar0, 6, 2, 0);
			break;
		
		case 25:
			vVar0 = { 0f, 0f, (func_25(-3.07f) + 180f) };
			func_23(uParam0, 21321420, 702.065f, 541.218f, 128.927f, vVar0, 6, 0, 0);
			func_23(uParam0, 15216210, 702.14f, 540.116f, 128.927f, vVar0, 6, 1, 0);
			func_23(uParam0, 72182190, 702.223f, 538.907f, 129.127f, vVar0, 6, 2, 0);
			func_23(uParam0, 22022120, 702.304f, 537.715f, 129.127f, vVar0, 6, 0, 0);
			func_23(uParam0, 22223220, 702.387f, 536.502f, 129.327f, vVar0, 6, 1, 0);
			func_23(uParam0, 42252260, 703.116f, 526.841f, 129.618f, vVar0, 6, 2, 0);
			break;
		
		case 26:
			vVar0 = { 0f, 0f, (func_25(-3f) + 180f) };
			func_23(uParam0, 25325420, 708.727f, 541.922f, 128.926f, vVar0, 6, 0, 0);
			func_23(uParam0, 55256250, 709.881f, 539.828f, 128.926f, vVar0, 6, 1, 0);
			func_23(uParam0, 72582590, 709.05f, 539.628f, 129.127f, vVar0, 6, 2, 0);
			func_23(uParam0, 26026120, 709.217f, 538.445f, 129.127f, vVar0, 6, 0, 0);
			func_23(uParam0, 62263260, 709.386f, 537.241f, 129.326f, vVar0, 6, 1, 0);
			func_23(uParam0, 42652650, 709.555f, 536.043f, 129.326f, vVar0, 6, 2, 0);
			break;
		
		default:
			break;
	}
}

void func_22(var uParam0, vector3 vParam1, vector3 vParam2, int iParam3, float fParam4, float fParam5)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam2 };
	uParam0->f_7 = iParam3;
	*uParam0 = 1;
	uParam0->f_8 = fParam4;
	uParam0->f_9 = fParam5;
}

void func_23(var uParam0, int iParam1, vector3 vParam2, vector3 vParam3, int iParam4, int iParam5, int iParam6)
{
	if (uParam0->f_154 >= *uParam0)
	{
		return;
	}
	func_24(uParam0[uParam0->f_154 /*17*/], iParam1, vParam2, vParam3, iParam4, iParam5, iParam6);
	uParam0->f_154++;
}

void func_24(var uParam0, var uParam1, vector3 vParam2, vector3 vParam3, var uParam4, var uParam5, var uParam6)
{
	*uParam0 = { vParam2 };
	uParam0->f_3 = { vParam3 };
	uParam0->f_6 = uParam4;
	uParam0->f_7 = uParam1;
	uParam0->f_8 = uParam5;
	uParam0->f_9 = uParam6;
}

float func_25(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_26(var uParam0)
{
	uParam0->f_154 = 0;
	uParam0->f_155[0 /*11*/] = 0;
	uParam0->f_155[1 /*11*/] = 0;
}

int func_27(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0xFD34717937104F1C() + 7500;
	unk_0x6A633E13B2A856AE(sParam0, iParam1);
	if (unk_0xD744813D9841CA9A(iParam1) && !bParam3)
	{
		return 1;
	}
	if (iParam2 == 0)
	{
		return 1;
	}
	while (!unk_0xD744813D9841CA9A(iParam1))
	{
		wait(0);
		if (unk_0xFD34717937104F1C() > iVar0 && !unk_0xD744813D9841CA9A(iParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_28(char* sParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = unk_0xFD34717937104F1C() + 7500;
	if (*uParam1 == 0)
	{
		*uParam1 = unk_0xB00CD6895BDB01A0(sParam0);
	}
	if (unk_0x0FA486DE15EB3004(*uParam1))
	{
		return 1;
	}
	if (iParam2 == 0)
	{
		return 1;
	}
	while (!unk_0x0FA486DE15EB3004(*uParam1))
	{
		wait(0);
		if (unk_0xFD34717937104F1C() > iVar0 && !unk_0x0FA486DE15EB3004(*uParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_29(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xFD34717937104F1C() + 7500;
	unk_0x6D68030C791111E0(sParam0);
	if (unk_0x39C2D9AB77873F84(sParam0))
	{
		return 1;
	}
	if (iParam1 == 0)
	{
		return 1;
	}
	while (!unk_0x39C2D9AB77873F84(sParam0))
	{
		wait(0);
		if (unk_0xFD34717937104F1C() > iVar0 && !unk_0x39C2D9AB77873F84(sParam0))
		{
			return 0;
		}
	}
	return 1;
}

char* func_30(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "misslester1b_crowd@a_";
			break;
		
		case 1:
			sVar0 = "misslester1b_crowd@b_";
			break;
		
		case 2:
			sVar0 = "misslester1b_crowd@c_";
			break;
		
		case 3:
			sVar0 = "misslester1b_crowd@d_";
			break;
		
		case 4:
			sVar0 = "misslester1b_crowd@e_";
			break;
		
		case 5:
			sVar0 = "misslester1b_crowd@f_";
			break;
		
		case 6:
			sVar0 = "misslester1b_crowd@g_";
			break;
		
		case 7:
			sVar0 = "misslester1b_crowd@h_";
			break;
		
		case 8:
			sVar0 = "misslester1b_crowd@i_";
			break;
		
		case 9:
			sVar0 = "misslester1b_crowd@j_";
			break;
		
		case 10:
			sVar0 = "misslester1b_crowd@k_";
			break;
		
		case 11:
			sVar0 = "misslester1b_crowd@l_";
			break;
		
		case 12:
			sVar0 = "misslester1b_crowd@m_";
			break;
	}
	return sVar0;
}

void func_31(int iParam0, int iParam1)
{
	unk_0x56C835FB478F652B(0);
	unk_0xA060F0B60FDD4E58(true);
	unk_0xF2DE32563C8C0849(0);
	unk_0x3D0DDC14BCBDE6AD(true);
	unk_0xE94887E71DB8489F(unk_0xD4E735F4B6A956AC(), 0);
	unk_0xD6A3711FA2CAF3EF(false);
	unk_0x69B46A4170878DA4(1);
	*iParam0 = unk_0xF66A39BBE7B3C278(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0, 1, 1, 1);
	unk_0x66E6A13BAFFFB63C("DRIVE", false);
	unk_0x413F34FCFABEDE4B(-7000f, -7000f, -100f, 7000f, 7000f, 315f, false, 1);
	unk_0xF54514EACB543898(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0);
	if (func_33(unk_0xA19140A5C42D8715()) && iParam1 == 1)
	{
		unk_0x3521B10FB737CE36(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), 500f, 0);
	}
}

void func_32(bool bParam0)
{
	unk_0x60DEFBFF740D4C09(2, bParam0);
	unk_0x60DEFBFF740D4C09(3, bParam0);
	unk_0x60DEFBFF740D4C09(4, bParam0);
	unk_0x60DEFBFF740D4C09(5, bParam0);
	unk_0x60DEFBFF740D4C09(6, bParam0);
	unk_0x60DEFBFF740D4C09(7, bParam0);
	unk_0x60DEFBFF740D4C09(8, bParam0);
	unk_0x60DEFBFF740D4C09(9, bParam0);
	unk_0x60DEFBFF740D4C09(10, bParam0);
	unk_0x60DEFBFF740D4C09(11, bParam0);
	unk_0x60DEFBFF740D4C09(12, bParam0);
}

bool func_33(int iParam0)
{
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 0;
	}
	return !unk_0x7112137033807390(iParam0, 0);
}

void func_34(bool bParam0)
{
	if (bParam0)
	{
		func_39();
		if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
		{
			unk_0x2BCFB39E86340DAA(&Global_2384, 16);
		}
		Global_14513.f_1 = 1;
		if (func_38(0))
		{
			func_35(0);
		}
	}
	else if (Global_14513.f_1 == 1)
	{
		if (!Global_14513.f_1 == 0)
		{
			Global_14513.f_1 = 3;
		}
	}
}

void func_35(int iParam0)
{
	if (func_37())
	{
		return;
	}
	if (Global_14681)
	{
		func_36(0, 0);
	}
	if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
	{
		unk_0x2BCFB39E86340DAA(&Global_2384, 16);
	}
	if (unk_0xB39808C1DCE0DCFA())
	{
		unk_0xA8B97F91CBDE376C(false);
	}
	Global_15822 = 5;
	if (iParam0 == 1)
	{
		unk_0x2BCFB39E86340DAA(&Global_2383, 30);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_2383, 30);
	}
	if (!func_14())
	{
		Global_14513.f_1 = 3;
	}
}

void func_36(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_38(0))
		{
			Global_14681 = 1;
			if (bParam1)
			{
				unk_0x75B4B390EE495A3B(&Global_14450);
			}
			Global_14441 = { Global_14459[Global_14458 /*3*/] };
			unk_0xB8927E9A664047D4(Global_14441);
		}
	}
	else if (Global_14681 == 1)
	{
		Global_14681 = 0;
		Global_14441 = { Global_14466[Global_14458 /*3*/] };
		if (bParam1)
		{
			unk_0xB8927E9A664047D4(Global_14450);
		}
		else
		{
			unk_0xB8927E9A664047D4(Global_14441);
		}
	}
}

bool func_37()
{
	return unk_0x05EFB6A616B6FADE(Global_1678593, 19);
}

int func_38(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14513.f_1 > 3)
		{
			if (unk_0x05EFB6A616B6FADE(Global_2383, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14513.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_39()
{
	if (Global_14513.f_1 == 9 || Global_14513.f_1 == 10)
	{
		Global_15875 = 0;
		Global_15871 = 1;
	}
}

void func_40()
{
	func_41();
	func_6(0, 1, 1, 0, 0);
	unk_0x8F1A9FE6D91AAFEB();
}

void func_41()
{
	int iVar0;
	
	if (unk_0x99E48E2CD778F380())
	{
		if (unk_0x5CA3186381FC012C())
		{
			unk_0x609D4B6E0B7381C9();
		}
		unk_0xFB35B0BAD6F5AD8F();
	}
	func_51(&iLocal_60);
	unk_0x9625FCE863F284BD("Big_Disp");
	unk_0x981516504EAE59E2("LInvader");
	unk_0x86795B44CE5FE021(&iLocal_51);
	unk_0x86795B44CE5FE021(&iLocal_52);
	unk_0xF0E859E9E316E981();
	iVar0 = 0;
	while (iVar0 < Local_42)
	{
		func_48(&(Local_42[iVar0 /*178*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_44)
	{
		func_45(&(Local_44[iVar0 /*24*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_46)
	{
		func_45(&(Local_46[iVar0 /*24*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_40)
	{
		func_44(iLocal_40[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		func_43(func_30(iVar0));
		iVar0++;
	}
	func_42(iLocal_63);
	func_6(0, 1, 1, 0, 0);
}

void func_42(int iParam0)
{
	unk_0xA060F0B60FDD4E58(false);
	unk_0x56C835FB478F652B(3);
	unk_0x3D0DDC14BCBDE6AD(false);
	unk_0xF2DE32563C8C0849(3);
	unk_0xE94887E71DB8489F(unk_0xD4E735F4B6A956AC(), 1);
	unk_0xD6A3711FA2CAF3EF(true);
	unk_0x69B46A4170878DA4(0);
	unk_0xE70AC26DFC59863A(iParam0, 0);
	unk_0x66E6A13BAFFFB63C("DRIVE", true);
	unk_0x413F34FCFABEDE4B(-7000f, -7000f, -100f, 7000f, 7000f, 315f, true, 1);
}

void func_43(char* sParam0)
{
	unk_0x4DC885EA8D6AF7FC(sParam0);
}

void func_44(int iParam0)
{
	if (iParam0 != 0)
	{
		unk_0xA5DE74AE39867B03(iParam0);
	}
}

void func_45(var uParam0)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	
	sVar1 = func_47(uParam0->f_16);
	sVar2 = func_46(uParam0->f_16);
	iVar0 = 0;
	while (iVar0 < uParam0->f_17)
	{
		if (unk_0xDC5D81351D6A4DDB(uParam0->f_17[iVar0]) && !unk_0x7112137033807390(uParam0->f_17[iVar0], 0))
		{
			unk_0x9D03A5503D1FF614(uParam0->f_17[iVar0], sVar2, sVar1, -1000f);
		}
		func_51(&(uParam0->f_17[iVar0]));
		iVar0++;
	}
}

char* func_46(int iParam0)
{
	char* sVar0;
	
	if (iParam0 == 0)
	{
	}
	sVar0 = "001077_01_14";
	return sVar0;
}

char* func_47(int iParam0)
{
	char* sVar0;
	
	if (iParam0 == 0)
	{
	}
	sVar0 = "misslester1b_crowdlow@14@";
	return sVar0;
}

void func_48(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_50(uParam0[iVar0 /*17*/]);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_155)
	{
		func_49(&(uParam0->f_155[iVar0 /*11*/].f_10));
		iVar0++;
	}
}

void func_49(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(*iParam0))
	{
		if (!unk_0x7112137033807390(*iParam0, 0))
		{
			unk_0x98D1B1BD9C3AA456(*iParam0, false, 1);
		}
		if (!unk_0x4943BEEC19289B8E(*iParam0))
		{
			unk_0x1F7948851FB36E88(*iParam0, true, 0);
		}
		unk_0x680F17660351F21B(iParam0);
	}
}

void func_50(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_10)
	{
		func_49(&(uParam0->f_10[iVar0]));
		iVar0++;
	}
}

void func_51(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(*iParam0))
	{
		if (unk_0x9298F1014462FC57(*iParam0))
		{
			unk_0xF334C9B245CD323D(*iParam0, 1, true);
		}
		unk_0xC0AC848E56940C34(iParam0);
	}
}

