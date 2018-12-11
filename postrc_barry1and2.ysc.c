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
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	char* sLocal_44 = NULL;
	char* sLocal_45 = NULL;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	vector3 vLocal_49 = { 0f, 0f, 0f };
	vector3 vLocal_50 = { 0f, 0f, 0f };
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	sLocal_44 = "RCMBarryLeadInOut";
	sLocal_45 = "idle";
	vLocal_49 = { 189.5964f, -956.0344f, 29.5771f };
	vLocal_50 = { 190.2424f, -956.379f, 28.63f };
	unk_0xD481A812073CCF02(0, 26, 1);
	if (func_24(unk_0xA19140A5C42D8715()))
	{
		if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) != 0)
		{
			unk_0xF10B3BC4F73177E5(unk_0xD4E735F4B6A956AC(), 0, 0);
		}
	}
	if (unk_0x5EBD03AF78E7B4DB(83))
	{
		func_21(0);
	}
	unk_0x6D68030C791111E0(sLocal_44);
	unk_0x6A633E13B2A856AE("BARY1", 7);
	while (!unk_0x39C2D9AB77873F84(sLocal_44) || !unk_0xD744813D9841CA9A(7))
	{
		unk_0xD481A812073CCF02(0, 26, 1);
		wait(0);
	}
	unk_0xD481A812073CCF02(0, 26, 1);
	func_24(unk_0xA19140A5C42D8715());
	iLocal_46 = unk_0xFD34717937104F1C() + 13000;
	iLocal_47 = unk_0x22C775856F4633CA(0, 5);
	func_18();
	while (!func_13(&iLocal_43, 49, vLocal_50, func_17(1.12f), 0))
	{
		unk_0xD481A812073CCF02(0, 26, 1);
		wait(0);
	}
	unk_0xD481A812073CCF02(0, 26, 1);
	func_12();
	iLocal_48 = unk_0xFD34717937104F1C() + 1000;
	unk_0xD481A812073CCF02(0, 26, 1);
	while (true)
	{
		func_24(unk_0xA19140A5C42D8715());
		if (unk_0xFD34717937104F1C() < iLocal_48)
		{
			unk_0xD481A812073CCF02(0, 26, 1);
		}
		func_11();
		if (!func_24(iLocal_43))
		{
			func_21(0);
		}
		if (func_3())
		{
		}
		if (func_2(unk_0xA19140A5C42D8715(), vLocal_50, 1) > 70f)
		{
			func_1(&iLocal_40, 0);
			func_1(&iLocal_41, 0);
			func_1(&iLocal_42, 0);
			func_21(0);
		}
		wait(0);
	}
}

void func_1(int iParam0, bool bParam1)
{
	if (unk_0xDC5D81351D6A4DDB(*iParam0))
	{
		if (unk_0x9298F1014462FC57(*iParam0))
		{
			unk_0xF334C9B245CD323D(*iParam0, 1, true);
		}
		if (!bParam1)
		{
			unk_0xAA1FF14A8DC5C352(iParam0);
		}
		else
		{
			unk_0x0E093EB9C4B28CF5(*iParam0);
		}
	}
}

float func_2(int iParam0, vector3 vParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		vVar0 = { unk_0xE2BBD32891C18569(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0xE2BBD32891C18569(iParam0, false) };
	}
	return unk_0x499324B3EF19C288(vVar0, vParam1, bParam2);
}

int func_3()
{
	var uVar0;
	
	if (((((func_10(unk_0xA19140A5C42D8715()) && func_10(iLocal_43)) && !func_9()) && unk_0xFD34717937104F1C() > iLocal_46) && func_8(unk_0xA19140A5C42D8715(), iLocal_43, 1) < 20f) && !unk_0x356461BAB19FFA77())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, iLocal_43, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(12000, 18000));
		return 1;
	}
	return 0;
}

void func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_5(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0x2BCFB39E86340DAA(&Global_14688, 0);
	Global_15825 = iParam3;
	StringCopy(&Global_15812, sParam2, 24);
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15276 = { *uParam0 };
	Global_1699 = iParam1;
	StringCopy(&Global_15892, sParam2, 24);
	Global_16811 = iParam5;
	if (iParam3 == 0)
	{
		Global_16809 = 1;
		Global_16807 = 0;
	}
	else
	{
		Global_16809 = 0;
		Global_16807 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16810 = 1;
		Global_16808 = 0;
	}
	else
	{
		Global_16810 = 0;
		Global_16808 = 1;
	}
}

char* func_6()
{
	char* sVar0;
	
	switch (iLocal_47)
	{
		case 0:
			sVar0 = "BARY1_RCMLI1";
			break;
		
		case 1:
			sVar0 = "BARY1_RCMLI2";
			break;
		
		case 2:
			sVar0 = "BARY1_RCMLI3";
			break;
		
		case 3:
			sVar0 = "BARY1_RCMLI4";
			break;
		
		case 4:
			sVar0 = "BARY1_RCMLI5";
			break;
	}
	iLocal_47++;
	if (iLocal_47 > 4)
	{
		iLocal_47 = 0;
	}
	return sVar0;
}

void func_7(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_71205)
	{
		if (!unk_0x4915F4759304D5CF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xB583A7C3FEE69710(iParam2, 0);
			}
			else
			{
				unk_0xB583A7C3FEE69710(iParam2, 1);
			}
		}
		if (!unk_0x4915F4759304D5CF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x9D01B1015AD5A3C8(iParam2, 0);
			}
			else
			{
				unk_0x9D01B1015AD5A3C8(iParam2, 1);
			}
		}
	}
}

float func_8(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		vVar0 = { unk_0xE2BBD32891C18569(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0xE2BBD32891C18569(iParam0, false) };
	}
	if (!unk_0x7112137033807390(iParam1, 0))
	{
		vVar1 = { unk_0xE2BBD32891C18569(iParam1, true) };
	}
	else
	{
		vVar1 = { unk_0xE2BBD32891C18569(iParam1, false) };
	}
	return unk_0x499324B3EF19C288(vVar0, vVar1, bParam2);
}

int func_9()
{
	if (Global_15822 != 0 || unk_0x904275961B875DEB())
	{
		return 1;
	}
	return 0;
}

int func_10(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (!unk_0x7112137033807390(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	if (unk_0x6D7FFF527E125F24(-1, vLocal_50, 5f))
	{
		if (func_10(iLocal_43))
		{
			unk_0xB29E08C7AB729BAD(iLocal_43, false);
			unk_0xA20E2C99B8F1EB38(iLocal_43, 1000, 1, 0);
		}
		if (func_10(iLocal_41))
		{
			unk_0xB29E08C7AB729BAD(iLocal_41, false);
		}
		if (func_10(iLocal_40))
		{
			unk_0xB29E08C7AB729BAD(iLocal_40, false);
		}
	}
}

void func_12()
{
	if (func_10(iLocal_43))
	{
		if (!unk_0x4943BEEC19289B8E(iLocal_43))
		{
			unk_0x1F7948851FB36E88(iLocal_43, true, 0);
		}
		unk_0x73774776D23F43BA(iLocal_43, 1, 0, 0, false);
		unk_0x1F4E5EFBFE503FB3(iLocal_43, true);
		unk_0x8C26EBB3525646D4(iLocal_43, 0);
		unk_0x96BFF0680C7B6FD5(iLocal_43, false);
		unk_0xC4C22DDB26872744(iLocal_43, "POSTBARRY");
		unk_0xDFA901280292A2FB(iLocal_43, 1862763509);
		unk_0xDCFB67537602326F(iLocal_43, false, 0);
		unk_0xB29E08C7AB729BAD(iLocal_43, true);
		unk_0x4299736016AECE26(iLocal_43, vLocal_50, 1, false, 0, 1);
		unk_0x92DDCF53AA47A63D(iLocal_43, func_17(1.12f));
		unk_0xB29E08C7AB729BAD(iLocal_43, true);
		unk_0x3F01127ECD227890(iLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0x22DD1D053CFF9707(iLocal_43, unk_0xA19140A5C42D8715(), -1, 0, 2);
	}
}

int func_13(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_16(iParam1))
	{
		iVar0 = func_15(iParam1);
		unk_0xCACEBBBEAD8F262E(iVar0);
		if (unk_0x7FC99CCC73354033(iVar0))
		{
			if (unk_0xDC5D81351D6A4DDB(*iParam0))
			{
				unk_0x680F17660351F21B(iParam0);
			}
			*iParam0 = unk_0x35C6E06B120EB2E3(26, iVar0, vParam2, fParam3, 0, false);
			unk_0xA0DEC6E1399EE624(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x774CB20D17C3FF03(*iParam0, 3) == 0)
				{
					unk_0x72A0FF8C49CFFC0D(*iParam0, 5, 2, 0, 0);
				}
			}
			func_14(*iParam0, iParam1);
			if (bParam4)
			{
				unk_0xA5DE74AE39867B03(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_14(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_89161[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)
{
	if (!func_16(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return iParam0 < 3;
}

float func_17(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_18()
{
	if (unk_0x37A8EF89184DBA23(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		iLocal_41 = unk_0x78CED56884DEF3D7(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_24(iLocal_41))
		{
			if (!unk_0x4943BEEC19289B8E(iLocal_41))
			{
				unk_0x1F7948851FB36E88(iLocal_41, true, 0);
			}
			vLocal_49 = { 189.5964f, -956.0344f, 29.54f };
			unk_0x4299736016AECE26(iLocal_41, vLocal_49, 1, false, 0, 1);
			unk_0x92DDCF53AA47A63D(iLocal_41, func_17(-2.01f));
			unk_0xB29E08C7AB729BAD(iLocal_41, true);
		}
	}
	if (unk_0x37A8EF89184DBA23(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		iLocal_40 = unk_0x78CED56884DEF3D7(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_24(iLocal_40))
		{
			if (!unk_0x4943BEEC19289B8E(iLocal_40))
			{
				unk_0x1F7948851FB36E88(iLocal_40, true, 0);
			}
			vLocal_49 = { 190.2574f, -956.3513f, 29.621f };
			unk_0x4299736016AECE26(iLocal_40, vLocal_49, 1, false, 0, 1);
			unk_0x92DDCF53AA47A63D(iLocal_40, func_17(-1.68f));
			unk_0xB29E08C7AB729BAD(iLocal_40, true);
		}
	}
	else
	{
		vLocal_49 = { 190.2574f, -956.3513f, 29.621f };
		func_19(&iLocal_40, joaat("prop_chair_08"), vLocal_49, func_17(-1.68f));
		unk_0x4299736016AECE26(iLocal_40, vLocal_49, 1, false, 0, 1);
		unk_0x92DDCF53AA47A63D(iLocal_40, func_17(-1.68f));
		unk_0xB29E08C7AB729BAD(iLocal_40, true);
	}
	vLocal_49 = { 192.4462f, -953.5946f, 29.0919f };
	if (unk_0x37A8EF89184DBA23(vLocal_49, 25f, joaat("prop_protest_sign_01"), 0))
	{
		iLocal_42 = unk_0x78CED56884DEF3D7(vLocal_49, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_24(iLocal_42))
		{
			if (!unk_0x4943BEEC19289B8E(iLocal_42))
			{
				unk_0x1F7948851FB36E88(iLocal_42, true, 0);
			}
			vLocal_49.z = 29.603f;
			unk_0x4299736016AECE26(iLocal_42, vLocal_49, 1, false, 0, 1);
			unk_0x92DDCF53AA47A63D(iLocal_42, 23.45f);
		}
	}
	else
	{
		func_19(&iLocal_42, joaat("prop_protest_sign_01"), vLocal_49, 23.45f);
		unk_0x4299736016AECE26(iLocal_42, vLocal_49, 1, false, 0, 1);
		unk_0x92DDCF53AA47A63D(iLocal_42, 23.45f);
	}
}

void func_19(int iParam0, int iParam1, vector3 vParam2, float fParam3)
{
	func_20(iParam0);
	*iParam0 = unk_0xFCFC8CC5FF74580D(iParam1, vParam2, true, true, false);
	unk_0x92DDCF53AA47A63D(*iParam0, fParam3);
}

void func_20(int iParam0)
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

void func_21(bool bParam0)
{
	if (bParam0)
	{
		func_23(&iLocal_43);
	}
	else
	{
		func_22(&iLocal_43, 1, 0, 1);
	}
	if (func_10(iLocal_41))
	{
		unk_0xB29E08C7AB729BAD(iLocal_41, false);
	}
	if (func_10(iLocal_40))
	{
		unk_0xB29E08C7AB729BAD(iLocal_40, false);
	}
	if (bParam0)
	{
		func_20(&iLocal_40);
		func_20(&iLocal_41);
		func_20(&iLocal_42);
	}
	else
	{
		func_1(&iLocal_40, 0);
		func_1(&iLocal_41, 0);
		func_1(&iLocal_42, 0);
	}
	unk_0x4DC885EA8D6AF7FC(sLocal_44);
	unk_0x93DA13E8C75A3B00(7, false);
	unk_0x8F1A9FE6D91AAFEB();
}

void func_22(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (unk_0xDC5D81351D6A4DDB(*iParam0))
	{
		if (!unk_0x4915F4759304D5CF(*iParam0))
		{
			unk_0x98D1B1BD9C3AA456(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				unk_0x3F29BBC16DCB8A23(*iParam0);
			}
			unk_0xD738221C247C8B71(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x1F4E5EFBFE503FB3(*iParam0, false);
			}
		}
		unk_0x7E4E83D33161D01A(iParam0);
	}
}

void func_23(int iParam0)
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

bool func_24(int iParam0)
{
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 0;
	}
	return !unk_0x7112137033807390(iParam0, 0);
}

