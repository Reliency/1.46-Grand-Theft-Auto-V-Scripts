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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (func_87(&iLocal_46))
	{
		while (!func_76())
		{
			func_64(&iLocal_46);
			if (func_54(&iLocal_46))
			{
			}
			else
			{
				func_14(&iLocal_46);
				wait(0);
			}
		}
	}
	func_1();
}

void func_1()
{
	func_13();
	if (func_10())
	{
		unk_0x135C61E339DABBAC(1);
	}
	if (func_8(&iLocal_46))
	{
		func_4(&iLocal_46);
	}
	unk_0x9BB7BCDF2AC2D6F9(5);
	func_3();
	unk_0xC20B85E14C7C84F9(unk_0xD4E735F4B6A956AC(), 0);
	func_2();
}

void func_2()
{
	unk_0x8F1A9FE6D91AAFEB();
}

void func_3()
{
	unk_0xFA57C719261AA55D(&(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_766), 3);
}

void func_4(int iParam0)
{
	func_7(0, 1);
	func_6(0, -1, 1);
	func_5(&(iParam0->f_6), 5);
}

void func_5(int iParam0, int iParam1)
{
	unk_0xFA57C719261AA55D(iParam0, iParam1);
}

void func_6(bool bParam0, int iParam1, bool bParam2)
{
	if ((!unk_0x2BCD0524CDEE1FD2(Global_2415861.f_1474) || Global_2415861.f_1474 == unk_0xFCB3E4B16B4A9EC1()) || bParam2)
	{
		if (bParam0)
		{
			Global_2415861.f_1474 = unk_0xFCB3E4B16B4A9EC1();
			Global_2415861.f_1475 = unk_0xFFCC7EBF88BDEE54();
		}
		else
		{
			Global_2415861.f_1474 = -1;
		}
		Global_2415861.f_1477 = iParam1;
		Global_2415861.f_1479 = bParam0;
	}
	else if (!bParam2)
	{
	}
}

void func_7(bool bParam0, bool bParam1)
{
	if ((!unk_0x2BCD0524CDEE1FD2(Global_2415861.f_1490) || Global_2415861.f_1490 == unk_0xFCB3E4B16B4A9EC1()) || bParam1)
	{
		if (bParam0)
		{
			Global_2415861.f_1490 = unk_0xFCB3E4B16B4A9EC1();
			unk_0x2BCFB39E86340DAA(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_68.f_2), 23);
		}
		else
		{
			Global_2415861.f_1490 = -1;
			unk_0xFA57C719261AA55D(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_68.f_2), 23);
		}
	}
	else if (!bParam1)
	{
	}
}

bool func_8(int iParam0)
{
	return func_9(&(iParam0->f_6), 5);
}

bool func_9(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(*iParam0, iParam1);
}

bool func_10()
{
	return ((((func_12("STEALTH_ON") || func_12("STEALTH_OFF")) || func_12(func_11())) || func_12("STEALTH_ON_P")) || func_12("STEALTH_OFF_P"));
}

char* func_11()
{
	return "STEALTH_WARN";
}

int func_12(char* sParam0)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	return unk_0x3D94488A86ABB03F(0);
}

void func_13()
{
	unk_0xFA57C719261AA55D(&(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_766), 1);
}

void func_14(int iParam0)
{
	func_51(iParam0);
	func_50(iParam0);
	if (func_49(iParam0))
	{
		if (((func_48(iParam0) && !func_47(iParam0)) && unk_0xB540EEBB14C48518(iParam0->f_1)) && !func_46())
		{
			func_45(iParam0, 1, 0);
			func_44(iParam0);
		}
		else if (func_9(&(iParam0->f_6), 6) && func_47(iParam0))
		{
			if (unk_0xB540EEBB14C48518(iParam0->f_1) && !func_46())
			{
				func_45(iParam0, 0, 0);
				func_5(&(iParam0->f_6), 6);
				func_5(&(iParam0->f_6), 2);
			}
		}
	}
	if (func_43(iParam0))
	{
		unk_0xC20B85E14C7C84F9(unk_0xD4E735F4B6A956AC(), 1);
		func_42();
		func_41(iParam0);
	}
	else if (func_40(iParam0))
	{
		unk_0xC20B85E14C7C84F9(unk_0xD4E735F4B6A956AC(), 0);
		func_13();
		func_41(iParam0);
		func_39(iParam0, 5);
	}
	if (func_47(iParam0) && !func_48(iParam0))
	{
		func_37(iParam0);
		func_36();
		func_39(iParam0, 2);
		if (func_33(iParam0))
		{
			func_32();
		}
	}
	else
	{
		func_15(iParam0);
	}
	func_3();
	unk_0xFA57C719261AA55D(&(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_766), 4);
}

void func_15(int iParam0)
{
	int iVar0;
	
	if (((((((!func_9(&(iParam0->f_6), 0) && !func_9(&(iParam0->f_6), 2)) && !unk_0xE06AA0996C4E4E03()) && func_31(iParam0)) && !func_30(0)) && !func_29()) && func_27()) && unk_0xDC5D81351D6A4DDB(unk_0xB0D49A1F9F054602(iParam0->f_1, -1, 0)))
	{
		func_21(iParam0, 1);
		func_20(&(iParam0->f_6), 3);
		iVar0 = func_19(iParam0->f_6.f_2, 3333, 10000);
		iParam0->f_6.f_2 = 0;
		func_17(func_18(iParam0), iVar0);
		func_16(iParam0);
		func_20(&(iParam0->f_6), 0);
	}
}

void func_16(int iParam0)
{
	func_20(&(iParam0->f_6), 2);
}

void func_17(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, true, iParam1);
}

char* func_18(int iParam0)
{
	if (func_49(iParam0))
	{
		return "STEALTH_OFF";
	}
	return "STEALTH_OFF_P";
}

int func_19(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_20(int iParam0, int iParam1)
{
	unk_0x2BCFB39E86340DAA(iParam0, iParam1);
}

void func_21(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_49(iParam0))
	{
		switch (iParam0->f_2)
		{
			case 1181327175:
				iVar0 = (func_24(19004, -1, -1) + iParam1);
				if (iVar0 >= 0)
				{
					func_22(19004, iVar0, -1, 1);
				}
				break;
			}
	}
}

var func_22(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_23();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xB3BA69AF3BAB6907((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x255504F58AF9B890((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xB3BA69AF3BAB6907((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x255504F58AF9B890((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xB3BA69AF3BAB6907((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x255504F58AF9B890((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xB3BA69AF3BAB6907((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x255504F58AF9B890((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x931785B1D4E0FF39((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x255504F58AF9B890((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x931785B1D4E0FF39((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x255504F58AF9B890((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x255504F58AF9B890((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x255504F58AF9B890((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x255504F58AF9B890((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x255504F58AF9B890((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x255504F58AF9B890((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x255504F58AF9B890((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x255504F58AF9B890((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x255504F58AF9B890((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x255504F58AF9B890((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x255504F58AF9B890((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0x255504F58AF9B890((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0x255504F58AF9B890((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x255504F58AF9B890((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x255504F58AF9B890((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x440E9EB086F84471(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_23()
{
	return Global_1312736;
}

int func_24(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_23();
	}
	iVar0 = 0;
	iVar1 = func_26(iParam0, iParam1);
	iVar2 = func_25(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x8107725D56824351(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_25(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x255504F58AF9B890((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x255504F58AF9B890((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x255504F58AF9B890((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x255504F58AF9B890((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x255504F58AF9B890((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x255504F58AF9B890((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x255504F58AF9B890((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x255504F58AF9B890((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x255504F58AF9B890((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x255504F58AF9B890((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x255504F58AF9B890((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x255504F58AF9B890((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x255504F58AF9B890((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x255504F58AF9B890((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x255504F58AF9B890((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x255504F58AF9B890((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x255504F58AF9B890((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x255504F58AF9B890((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0x255504F58AF9B890((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0x255504F58AF9B890((iParam0 - 22194)) * 8) * 8;
	}
	return iVar0;
}

int func_26(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_23();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xB3BA69AF3BAB6907((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xB3BA69AF3BAB6907((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xB3BA69AF3BAB6907((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xB3BA69AF3BAB6907((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x931785B1D4E0FF39((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x931785B1D4E0FF39((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	return iVar0;
}

bool func_27()
{
	return (!unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_766, 4) && !func_28());
}

bool func_28()
{
	return ((Global_4456448.f_53220 == 6 || Global_4456448.f_53220 == 7) && Global_4456448.f_2 == 20);
}

bool func_29()
{
	return Global_68494;
}

int func_30(int iParam0)
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

int func_31(int iParam0)
{
	if (func_49(iParam0))
	{
		switch (iParam0->f_2)
		{
			case 1181327175:
				return func_24(19004, -1, -1) < 3;
			}
		
		default:
	}
	return 1;
}

void func_32()
{
	if (!unk_0xE06AA0996C4E4E03())
	{
		func_17("STEALTH_WARN", 3000);
	}
}

int func_33(int iParam0)
{
	int iVar0;
	
	if (func_30(0) || func_29())
	{
		return 0;
	}
	iVar0 = func_34(iParam0);
	switch (iVar0)
	{
		case 1:
			if ((unk_0x53E955948D35BDB5(0, 114) || unk_0x53E955948D35BDB5(0, 99)) || unk_0x53E955948D35BDB5(0, 100))
			{
				return 1;
			}
			break;
		
		case 0:
			if (unk_0x53E955948D35BDB5(0, 114))
			{
				return 1;
			}
			break;
		
		case 2:
			if (unk_0x53E955948D35BDB5(0, 92))
			{
				return 1;
			}
			break;
		
		case 3:
			if (unk_0x53E955948D35BDB5(0, 68))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_34(int iParam0)
{
	if (!func_35(iParam0))
	{
		return 4;
	}
	switch (iParam0->f_2)
	{
		case 1181327175:
			switch (iParam0->f_4)
			{
				case -1:
					return 1;
				
				case 0:
					return 2;
				
				default:
			}
			return 4;
		
		default:
	}
	return 4;
}

bool func_35(int iParam0)
{
	return (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0));
}

void func_36()
{
	unk_0xD481A812073CCF02(0, 24, 1);
	unk_0xD481A812073CCF02(0, 66, 1);
	unk_0xD481A812073CCF02(0, 67, 1);
	unk_0xD481A812073CCF02(0, 68, 1);
	unk_0xD481A812073CCF02(0, 114, 1);
	unk_0xD481A812073CCF02(0, 69, 1);
	unk_0xD481A812073CCF02(0, 70, 1);
	unk_0xD481A812073CCF02(0, 91, 1);
	unk_0xD481A812073CCF02(0, 92, 1);
	unk_0xD481A812073CCF02(0, 99, 1);
	unk_0xD481A812073CCF02(0, 100, 1);
	unk_0xD481A812073CCF02(0, 37, 1);
}

void func_37(int iParam0)
{
	int iVar0;
	
	if (((((((!func_9(&(iParam0->f_6), 0) && !func_9(&(iParam0->f_6), 1)) && !unk_0xE06AA0996C4E4E03()) && func_9(&(iParam0->f_6), 3)) && !func_30(0)) && !func_29()) && func_27()) && unk_0xDC5D81351D6A4DDB(unk_0xB0D49A1F9F054602(iParam0->f_1, -1, 0)))
	{
		iVar0 = func_19(iParam0->f_6.f_2, 3333, 10000);
		iParam0->f_6.f_2 = 0;
		func_17(func_38(iParam0), iVar0);
		func_44(iParam0);
		func_20(&(iParam0->f_6), 0);
	}
}

char* func_38(int iParam0)
{
	if (func_49(iParam0))
	{
		return "STEALTH_ON";
	}
	return "STEALTH_ON_P";
}

void func_39(int iParam0, int iParam1)
{
	if (func_48(iParam0))
	{
		return;
	}
	if (unk_0x2B70659B2EB224B3() != iParam1)
	{
		unk_0x9BB7BCDF2AC2D6F9(iParam1);
	}
	if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > iParam1)
	{
		unk_0xF10B3BC4F73177E5(unk_0xD4E735F4B6A956AC(), iParam1, 0);
	}
}

bool func_40(int iParam0)
{
	return (!func_9(iParam0, 0) && func_9(iParam0, 1));
}

void func_41(int iParam0)
{
	func_5(&(iParam0->f_6), 0);
	if (func_10())
	{
		unk_0x135C61E339DABBAC(1);
	}
	if (!func_49(iParam0))
	{
		if (func_47(iParam0))
		{
			func_5(&(iParam0->f_6), 1);
		}
		else
		{
			func_5(&(iParam0->f_6), 2);
		}
	}
}

void func_42()
{
	unk_0x2BCFB39E86340DAA(&(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_766), 1);
}

bool func_43(int iParam0)
{
	return (func_9(iParam0, 0) && !func_9(iParam0, 1));
}

void func_44(int iParam0)
{
	func_20(&(iParam0->f_6), 1);
}

void func_45(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0->f_2)
	{
		case 1181327175:
			unk_0x6B79579139BF487B(iParam0->f_1, !bParam1, iParam2);
			break;
	}
}

bool func_46()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_766, 3);
}

bool func_47(int iParam0)
{
	return func_9(iParam0, 0);
}

bool func_48(int iParam0)
{
	return func_9(iParam0, 2);
}

bool func_49(int iParam0)
{
	return ((func_35(iParam0) && iParam0->f_3 == unk_0xA19140A5C42D8715()) || unk_0xB0D49A1F9F054602(iParam0->f_1, -1, 0) == unk_0xA19140A5C42D8715());
}

void func_50(int iParam0)
{
	if (func_10() && (func_30(0) || func_29()))
	{
		iParam0->f_6.f_2 = 1;
		unk_0x135C61E339DABBAC(1);
		func_5(&(iParam0->f_6), 0);
		if (func_47(iParam0))
		{
			func_5(&(iParam0->f_6), 1);
		}
		else
		{
			func_5(&(iParam0->f_6), 2);
			if (func_49(iParam0))
			{
				func_21(iParam0, -1);
			}
		}
	}
}

void func_51(int iParam0)
{
	if (func_47(iParam0))
	{
		if (func_8(iParam0))
		{
			if (func_53())
			{
				func_4(iParam0);
			}
		}
		else if (!func_53())
		{
			func_52(iParam0);
		}
	}
	else if (func_8(iParam0))
	{
		func_4(iParam0);
	}
	unk_0xFA57C719261AA55D(&(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_766), 2);
}

void func_52(int iParam0)
{
	func_7(1, 1);
	func_6(1, -1, 1);
	func_20(&(iParam0->f_6), 5);
}

bool func_53()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_766, 2);
}

int func_54(int iParam0)
{
	if (!func_35(iParam0))
	{
		return 1;
	}
	if (!func_63(iParam0))
	{
		return 1;
	}
	if (!func_62(iParam0->f_2))
	{
		return 1;
	}
	if (func_61(unk_0xD4E735F4B6A956AC(), 1, 1))
	{
		return 1;
	}
	if (func_60(unk_0xD4E735F4B6A956AC()))
	{
		return 1;
	}
	if (func_57(unk_0xD4E735F4B6A956AC()))
	{
		return 1;
	}
	if (func_55(unk_0xD4E735F4B6A956AC()))
	{
		return 1;
	}
	return 0;
}

int func_55(int iParam0)
{
	if (iParam0 > -1)
	{
		if (Global_2423801[iParam0 /*413*/].f_236 > -1)
		{
			if (func_56(Global_2423801[iParam0 /*413*/].f_236) == 4)
			{
				return 1;
			}
		}
		if (unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_195, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
	}
	return 6;
}

int func_57(int iParam0)
{
	if (iParam0 != func_59() && func_58(iParam0, 1, 1))
	{
		return unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_309, 3);
	}
	return 0;
}

int func_58(int iParam0, bool bParam1, bool bParam2)
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

int func_59()
{
	return -1;
}

int func_60(int iParam0)
{
	if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_22, 14))
	{
		return 1;
	}
	if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_22, 11))
	{
		return 1;
	}
	return 0;
}

int func_61(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_59())
	{
		return 0;
	}
	if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_22, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_22, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_62(int iParam0)
{
	switch (iParam0)
	{
		case 1181327175:
			return 1;
		
		default:
	}
	return 0;
}

bool func_63(int iParam0)
{
	return (unk_0xDC5D81351D6A4DDB(iParam0->f_1) && unk_0x1095F403F52B42E1(iParam0->f_1, 0));
}

void func_64(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = func_9(iParam0, 4);
	bVar1 = func_9(iParam0, 0);
	func_75(iParam0);
	if (bVar0)
	{
		func_20(iParam0, 3);
	}
	else
	{
		func_5(iParam0, 3);
	}
	if (bVar1)
	{
		func_20(iParam0, 1);
	}
	else
	{
		func_5(iParam0, 1);
	}
	if (func_35(iParam0))
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			iParam0->f_1 = unk_0xD1A189C6C27EE0CA(unk_0xA19140A5C42D8715());
			if (func_63(iParam0))
			{
				iParam0->f_2 = unk_0x8F474E419F56E48D(iParam0->f_1);
				if (unk_0x335966F23521FB8D(unk_0xA19140A5C42D8715(), 2))
				{
					func_20(iParam0, 2);
				}
			}
		}
	}
	if (func_63(iParam0))
	{
		if (!unk_0x588F5E48C78F1C73(iParam0->f_1, -1, 0))
		{
			iVar2 = unk_0xB0D49A1F9F054602(iParam0->f_1, -1, 0);
			if ((unk_0xDC5D81351D6A4DDB(iVar2) && !unk_0x7112137033807390(iVar2, 0)) && unk_0xC085874FDE5FE33A(iVar2))
			{
				iParam0->f_3 = iVar2;
				if (iVar2 == unk_0xA19140A5C42D8715())
				{
					func_20(iParam0, 4);
					if (!func_9(iParam0, 3))
					{
						func_20(&(iParam0->f_6), 6);
					}
				}
			}
		}
		if (func_35(iParam0))
		{
			iParam0->f_4 = func_74(unk_0xA19140A5C42D8715(), 0);
		}
		if (func_49(iParam0))
		{
			if (func_73() && func_67(iParam0))
			{
				func_20(iParam0, 0);
			}
		}
		else
		{
			func_65(iParam0);
		}
	}
	if (func_43(iParam0))
	{
		iParam0->f_6.f_3 = unk_0xFFCC7EBF88BDEE54();
	}
}

void func_65(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0->f_3) && func_66(unk_0x77065AD41B64E946(iParam0->f_3)))
	{
		func_20(iParam0, 0);
	}
	else
	{
		func_5(iParam0, 0);
	}
}

bool func_66(int iParam0)
{
	return (iParam0 != -1 && unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_766, 1));
}

bool func_67(int iParam0)
{
	bool bVar0;
	
	bVar0 = func_72();
	if (unk_0xB540EEBB14C48518(iParam0->f_1))
	{
		func_71(iParam0);
		switch (iParam0->f_2)
		{
			case 1181327175:
				bVar0 = !unk_0x0A537B120DE46FE9(iParam0->f_1);
				break;
		}
	}
	else if (func_70(iParam0))
	{
		if (func_69(iParam0))
		{
			unk_0x39926DD5354848E1(iParam0->f_1);
		}
	}
	else
	{
		func_68(iParam0);
	}
	return bVar0;
}

void func_68(var uParam0)
{
	func_20(&(uParam0->f_6), 4);
	uParam0->f_6.f_1 = unk_0xFD34717937104F1C();
}

bool func_69(var uParam0)
{
	return (unk_0xFD34717937104F1C() - uParam0->f_6.f_1) >= 200;
}

bool func_70(var uParam0)
{
	return func_9(&(uParam0->f_6), 4);
}

void func_71(var uParam0)
{
	func_5(&(uParam0->f_6), 4);
}

bool func_72()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_766, 1);
}

bool func_73()
{
	return !func_28();
}

int func_74(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		if (unk_0x5D7DFE2058701942(iParam0, iParam1))
		{
			iVar0 = unk_0xCAEB6CE71A2C7212(iParam0, iParam1);
			if (unk_0xDC5D81351D6A4DDB(iVar0))
			{
				iVar1 = unk_0xE251DF9395C4E1C4(unk_0x8F474E419F56E48D(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x588F5E48C78F1C73(iVar0, iVar3, 0))
					{
						if (unk_0xB0D49A1F9F054602(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_75(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_76()
{
	if (func_77())
	{
		return 1;
	}
	return 0;
}

int func_77()
{
	var uVar0;
	
	func_84(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			return 1;
		}
	}
	if (func_83())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_82())
	{
		return 1;
	}
	if (func_81(157))
	{
		if (!func_80())
		{
			return 1;
		}
	}
	if (func_81(155))
	{
		return 1;
	}
	if (!unk_0x18F86E07E41D913F())
	{
		return 1;
	}
	if (func_78() != 0)
	{
		if (unk_0x8B1574454E8C2421(func_78()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_78()
{
	switch (func_79())
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

int func_79()
{
	return Global_25459;
}

bool func_80()
{
	return Global_2448386.f_587;
}

int func_81(int iParam0)
{
	if (unk_0xF10AFD11E6EE81BF(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_82()
{
	return Global_2458191;
}

bool func_83()
{
	return Global_2448386.f_582;
}

void func_84(var uParam0)
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
					func_85(iVar0);
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

void func_85(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x8866A4E42CDA3EF1(1, iParam0, &vVar0, 3))
	{
		if (func_58(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xEE978C39384D834F(vVar0.y);
			if (unk_0xDC5D81351D6A4DDB(iVar1))
			{
				if (unk_0x5D7DFE2058701942(iVar1, 0))
				{
					iVar2 = unk_0xCAEB6CE71A2C7212(iVar1, 0);
					if (unk_0xEB1A41F6F719807C(iVar2, vVar0.z) && unk_0xB592B7A61F21E7A5())
					{
						if (func_86(iVar2, &bVar3))
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

int func_86(int iParam0, var uParam1)
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

int func_87(int iParam0)
{
	func_64(iParam0);
	if (func_63(iParam0))
	{
		if (func_49(iParam0))
		{
			if (unk_0xB540EEBB14C48518(iParam0->f_1))
			{
				if (!func_46())
				{
					func_45(iParam0, 0, 0);
				}
				else
				{
					func_20(&(iParam0->f_6), 3);
				}
			}
		}
		else
		{
			func_20(&(iParam0->f_6), 3);
		}
	}
	return 1;
}

