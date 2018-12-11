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
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	bool bLocal_110 = 0;
	bool bLocal_111 = 0;
	bool bLocal_112 = 0;
	struct<4> Local_113 = { 0, 0, 0, 0 } ;
	struct<16> Local_114 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_118 = -1;
	if (unk_0x8B1574454E8C2421(joaat("context_controller")) > 1)
	{
		unk_0x8F1A9FE6D91AAFEB();
	}
	unk_0x5341E3E598550C46();
	iVar0 = 0;
	iVar1 = iVar0;
	settimera(0);
	Global_37021 = 0;
	func_39();
	StringCopy(&Global_37022, "CC_SUBSTR", 16);
	iVar2 = -1;
	iVar3 = -1;
	bVar4 = false;
	bVar5 = false;
	iVar6 = 0;
	iVar7 = -1;
	iVar8 = Global_71205;
	while (true)
	{
		if (Global_71205)
		{
			func_35();
		}
		else
		{
			func_33();
		}
		func_26();
		if (Global_71205 != iVar8)
		{
			func_25();
			func_39();
			iVar2 = -1;
			iVar8 = Global_71205;
			while (unk_0x47C3DC461C758C29())
			{
				wait(2000);
			}
		}
		if (Global_37027)
		{
			if (Global_37029 > -1)
			{
				if (!Global_36827[Global_37029 /*32*/].f_6)
				{
					if (!func_23(Global_37029, 1))
					{
						Global_37029 = -1;
					}
				}
			}
		}
		if (func_19())
		{
			iVar2 = -1;
			func_25();
		}
		if (iVar2 > -1)
		{
			if (!Global_37027)
			{
				if (Global_37029 != iVar2)
				{
					if (func_18(Global_37029))
					{
						func_25();
						if (!Global_36827[iVar2 /*32*/].f_5 && Global_36827[iVar2 /*32*/])
						{
							if (!func_19())
							{
								if (!Global_36827[iVar2 /*32*/].f_7)
								{
									if (!Global_36827[iVar2 /*32*/].f_6)
									{
										if (!Global_36827[iVar2 /*32*/].f_12)
										{
											func_17(Global_36827[iVar2 /*32*/].f_8, Global_36827[iVar2 /*32*/].f_3);
										}
										else
										{
											func_16(Global_36827[iVar2 /*32*/].f_8, Global_36827[iVar2 /*32*/].f_13, Global_36827[iVar2 /*32*/].f_3, Global_36827[iVar2 /*32*/].f_30);
										}
										Global_37029 = iVar2;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				func_25();
			}
		}
		else
		{
			func_25();
		}
		switch (iVar0)
		{
			case 0:
				iVar2 = func_15();
				if (unk_0xD10B42D4978EFA59(2, 51))
				{
					iVar6 = 1;
				}
				if (!func_19())
				{
					if (iVar2 > -1 && iVar6)
					{
						if (unk_0xDF0ADAD7E584090D(2, 51))
						{
							Global_36827[iVar2 /*32*/].f_4 = 1;
							Global_36827[iVar2 /*32*/].f_29 = 0;
							iVar7 = Global_36827[iVar2 /*32*/].f_1;
							iVar0 = 1;
							Global_37020 = 0;
						}
					}
				}
				else
				{
					iVar2 = -1;
				}
				if (iVar3 != iVar2)
				{
					if (iVar2 != -1)
					{
						if (!unk_0xD61D0CA14AE902DF(unk_0xEE978C39384D834F(unk_0xA6580F898F4E801C()), 1))
						{
							if (unk_0x5D7DFE2058701942(unk_0xEE978C39384D834F(unk_0xA6580F898F4E801C()), 0))
							{
								if (unk_0x4238E197ADF94093(0, 101))
								{
									bVar5 = true;
									unk_0xD481A812073CCF02(0, 101, 1);
								}
								if (unk_0x4238E197ADF94093(0, 74))
								{
									bVar4 = true;
									unk_0xD481A812073CCF02(0, 74, 1);
								}
							}
						}
					}
					else
					{
						if (bVar5)
						{
							unk_0x863EF4AF862F63EC(0, 101, 1);
							bVar5 = false;
						}
						if (bVar4)
						{
							unk_0x863EF4AF862F63EC(0, 74, 1);
							bVar4 = false;
						}
					}
					iVar3 = iVar2;
				}
				break;
			
			case 1:
				if (iVar2 < 0 || func_14() == 0)
				{
					iVar0 = 0;
				}
				else
				{
					if (timera() > 5000)
					{
						Global_36827[iVar2 /*32*/].f_7 = 1;
						iVar0 = 0;
					}
					else if (func_13(iVar2))
					{
						iVar0 = 2;
					}
					if (!iVar7 == Global_36827[iVar2 /*32*/].f_1)
					{
						iVar0 = 0;
					}
					if (Global_36827[iVar2 /*32*/].f_7 || Global_36827[iVar2 /*32*/] == 0)
					{
						iVar0 = 0;
					}
				}
				break;
			
			case 2:
				if (Global_37020)
				{
					func_25();
				}
				if (unk_0xDF0ADAD7E584090D(2, 51))
				{
					if (iVar2 > -1)
					{
						Global_36827[iVar2 /*32*/].f_29 = 0;
					}
				}
				if (Global_37021)
				{
					Global_37021 = 0;
					iVar0 = 0;
				}
				else if (iVar2 > -1)
				{
					if (!(Global_36827[iVar2 /*32*/].f_4 || Global_36827[iVar2 /*32*/].f_7))
					{
						Global_37021 = 0;
						iVar2 = -1;
					}
				}
				if (iVar2 > -1)
				{
					if (Global_36827[iVar2 /*32*/].f_7 || Global_36827[iVar2 /*32*/] == 0)
					{
						iVar2 = -1;
					}
				}
				if (iVar2 == -1)
				{
					iVar0 = 0;
					iVar6 = 0;
				}
				break;
		}
		if (iVar2 > -1)
		{
			unk_0xD481A812073CCF02(0, 46, 1);
			unk_0xD481A812073CCF02(0, 54, 1);
		}
		if (iVar0 != iVar1)
		{
			iVar1 = iVar0;
			settimera(0);
			iVar6 = 0;
		}
		func_12();
		func_10(&iVar2);
		Global_37026 = 0;
		Global_37027 = 0;
		func_1();
		wait(0);
	}
}

void func_1()
{
	bool bVar0;
	
	if (!bLocal_110)
	{
		return;
	}
	bVar0 = true;
	if (iLocal_115 == 1)
	{
		bVar0 = false;
	}
	if (bLocal_111)
	{
		if (bLocal_112)
		{
			unk_0xAA10A03449829D04(0);
		}
		unk_0x143A55A4EA118F24(&Local_113);
		if (bLocal_112)
		{
			unk_0xC327C023FDA37F2E(&Local_114);
		}
		else
		{
			unk_0x4FDA9E6EF359F8A9(&Global_37022);
			unk_0x4FDA9E6EF359F8A9(&Local_114);
		}
		unk_0x9E55AC8543FF8836(0, 0, bVar0, 50);
	}
	else
	{
		unk_0x143A55A4EA118F24(&Local_113);
		unk_0x4FDA9E6EF359F8A9(&Global_37022);
		unk_0x9E55AC8543FF8836(0, 0, bVar0, 50);
	}
	switch (iLocal_115)
	{
		case 0:
			break;
		
		case 1:
			func_9(0);
			break;
		
		case 2:
			func_2(0);
			break;
	}
}

void func_2(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_4(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_3())
	{
		unk_0xE11F00B4AC919F45(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

bool func_3()
{
	return Global_2437022.f_2704[0 /*80*/].f_1 != 0;
}

bool func_4(bool bParam0)
{
	return func_5(unk_0xD4E735F4B6A956AC(), bParam0);
}

int func_5(int iParam0, bool bParam1)
{
	return func_6(iParam0, bParam1, 1);
}

int func_6(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_7(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1625435[iParam0 /*560*/].f_11;
	if (iVar0 != func_8() && Global_1625435[iVar0 /*560*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_7(int iParam0, int iParam1)
{
	if (iParam0 != func_8())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_8())
		{
			if (Global_1625435[iParam0 /*560*/].f_11 == iParam0 && Global_1625435[iParam0 /*560*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_8()
{
	return -1;
}

void func_9(int iParam0)
{
	unk_0xC01188479296013C(3, 21, 200, 0, 0);
	if (iParam0 && !func_3())
	{
		unk_0xE11F00B4AC919F45(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_10(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36827[iVar0 /*32*/] && Global_36827[iVar0 /*32*/].f_4)
		{
			if (Global_36827[iVar0 /*32*/].f_31 != 0)
			{
				if (!unk_0x2BCD0524CDEE1FD2(Global_36827[iVar0 /*32*/].f_31))
				{
					if (*iParam0 > -1)
					{
						func_11();
					}
					Global_36827[iVar0 /*32*/] = 0;
					Global_36827[iVar0 /*32*/].f_31 = 0;
					Global_36827[iVar0 /*32*/] = 0;
					Global_36827[iVar0 /*32*/].f_4 = 0;
					Global_36827[iVar0 /*32*/].f_5 = 0;
					Global_36827[iVar0 /*32*/].f_2 = 0;
					Global_36827[iVar0 /*32*/].f_7 = 0;
					Global_36827[iVar0 /*32*/].f_6 = 0;
					Global_36827[iVar0 /*32*/].f_3 = 0;
					*iParam0 = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_11()
{
	if (Global_37029 != -1 || bLocal_110)
	{
		bLocal_110 = false;
		Global_37029 = -1;
	}
}

void func_12()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36827[iVar0 /*32*/].f_7)
		{
			if (iVar0 == Global_37029)
			{
				func_25();
			}
			Global_36827[iVar0 /*32*/].f_31 = 0;
			Global_36827[iVar0 /*32*/] = 0;
			Global_36827[iVar0 /*32*/].f_4 = 0;
			Global_36827[iVar0 /*32*/].f_5 = 0;
			Global_36827[iVar0 /*32*/].f_2 = 0;
			Global_36827[iVar0 /*32*/].f_7 = 0;
			Global_36827[iVar0 /*32*/].f_6 = 0;
			Global_36827[iVar0 /*32*/].f_1 = -1;
			Global_36827[iVar0 /*32*/].f_3 = 0;
		}
		iVar0++;
	}
}

int func_13(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_36827[iParam0 /*32*/].f_5)
	{
		return 1;
	}
	return 0;
}

int func_14()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36827[iVar0 /*32*/] == 1)
		{
			if (Global_36827[iVar0 /*32*/].f_4 == 0)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		func_25();
	}
	return iVar1;
}

int func_15()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36827[iVar0 /*32*/])
		{
			if (Global_36827[iVar0 /*32*/].f_2 > iVar1)
			{
				iVar2 = iVar0;
				iVar1 = Global_36827[iVar0 /*32*/].f_2;
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_16(struct<4> Param0, struct<16> Param1, var uParam2, var uParam3)
{
	Local_113 = { Param0 };
	Local_114 = { Param1 };
	bLocal_110 = true;
	bLocal_111 = true;
	iLocal_115 = uParam2;
	bLocal_112 = uParam3;
}

void func_17(struct<4> Param0, var uParam1)
{
	Local_113 = { Param0 };
	bLocal_110 = true;
	bLocal_111 = false;
	iLocal_115 = uParam1;
}

int func_18(int iParam0)
{
	int iVar0;
	
	if (Global_90256 && Global_90255)
	{
		return 0;
	}
	if (iParam0 > 0)
	{
		if (func_23(iParam0, 1) || bLocal_110)
		{
			return 1;
		}
	}
	if (unk_0xE06AA0996C4E4E03() && !unk_0x5B5095E066F21C50())
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_23(iVar0, 1))
			{
				return 1;
			}
			iVar0++;
		}
		return 0;
	}
	return 1;
}

int func_19()
{
	if (Global_68494)
	{
		return 1;
	}
	if (!unk_0x58E3CCF930D23BD5(unk_0xA6580F898F4E801C()))
	{
		return 1;
	}
	if (func_22(0))
	{
		return 1;
	}
	if (unk_0x5CA3186381FC012C())
	{
		return 1;
	}
	if (Global_37026)
	{
		return 1;
	}
	if (unk_0xC9A7EEAA81FA9DF2(19))
	{
		return 1;
	}
	if (func_21(1))
	{
		return 1;
	}
	if (unk_0x47C3DC461C758C29())
	{
		return 1;
	}
	if (func_20(8, -1))
	{
		return 1;
	}
	return 0;
}

bool func_20(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1368245.f_203[iParam1];
			}
			break;
	}
	return unk_0x05EFB6A616B6FADE(Global_1368245.f_1048, iParam0);
}

bool func_21(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17228.f_4 && Global_17228.f_104 == 4);
	}
	return Global_17228.f_4;
}

int func_22(int iParam0)
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

int func_23(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_24(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_36827[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_36827[iVar0 /*32*/].f_12)
	{
		unk_0x42FEBE6569FBB03A(&(Global_36827[iVar0 /*32*/].f_8));
		unk_0x4FDA9E6EF359F8A9(&Global_37022);
		iVar1 = unk_0x3D94488A86ABB03F(0);
	}
	else
	{
		unk_0x42FEBE6569FBB03A(&(Global_36827[iVar0 /*32*/].f_8));
		unk_0x4FDA9E6EF359F8A9(&Global_37022);
		if (Global_36827[iVar0 /*32*/].f_30)
		{
			unk_0xC327C023FDA37F2E(&(Global_36827[iVar0 /*32*/].f_13));
		}
		else
		{
			unk_0x4FDA9E6EF359F8A9(&(Global_36827[iVar0 /*32*/].f_13));
		}
		iVar1 = unk_0x3D94488A86ABB03F(0);
	}
	return iVar1;
}

int func_24(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36827[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25()
{
	func_11();
	Global_37029 = -1;
}

void func_26()
{
	if (!unk_0x47C3DC461C758C29() && !func_32())
	{
		if (func_31(0))
		{
			if (!unk_0x429D45A6C6520026(&(Global_2448386.f_673.f_12)))
			{
				func_30();
				func_27(6, 0, 0);
			}
		}
	}
}

int func_27(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Global_68607 = iParam0;
	bVar0 = iParam2 == true;
	bVar1 = iParam2 == 2;
	bVar2 = iParam2 == 3;
	switch (Global_68607)
	{
		case 3:
			Global_68605 = 0;
			break;
		
		case 4:
			Global_68605 = 3;
			break;
	}
	if (unk_0x8B1574454E8C2421(joaat("appsecuroserv")) > 0)
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (unk_0x8B1574454E8C2421(1476056117) > 0)
	{
		if (bVar1)
		{
		}
		return 0;
	}
	if (unk_0x8B1574454E8C2421(290327540) > 0)
	{
		if (bVar2)
		{
		}
		return 0;
	}
	if (unk_0x8B1574454E8C2421(joaat("appinternet")) > 0)
	{
		if ((bVar0 || bVar1) || bVar2)
		{
		}
		return 0;
	}
	if (Global_71205 && func_29())
	{
		return 0;
	}
	if (!Global_71205 && func_28())
	{
		return 0;
	}
	if (bVar0)
	{
		if (!unk_0xB1FDFCECA75CE4A7("appSecuroServ"))
		{
			unk_0xD75A4240F0AD8613("appSecuroServ");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0xB1FDFCECA75CE4A7("appSecuroServ"))
		{
			wait(0);
		}
		start_new_script("appSecuroServ", 4592);
		unk_0x4659F4154D948B01("appSecuroServ");
		return 1;
	}
	if (bVar1)
	{
		if (!unk_0xB1FDFCECA75CE4A7("appBikerBusiness"))
		{
			unk_0xD75A4240F0AD8613("appBikerBusiness");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0xB1FDFCECA75CE4A7("appBikerBusiness"))
		{
			wait(0);
		}
		start_new_script("appBikerBusiness", 4592);
		unk_0x4659F4154D948B01("appBikerBusiness");
		return 1;
	}
	if (bVar2)
	{
		if (!unk_0xB1FDFCECA75CE4A7("appImportExport"))
		{
			unk_0xD75A4240F0AD8613("appImportExport");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0xB1FDFCECA75CE4A7("appImportExport"))
		{
			wait(0);
		}
		start_new_script("appImportExport", 4592);
		unk_0x4659F4154D948B01("appImportExport");
		return 1;
	}
	if (!unk_0xB1FDFCECA75CE4A7("appInternet"))
	{
		unk_0xD75A4240F0AD8613("appInternet");
		if (bParam1)
		{
			return 0;
		}
	}
	while (!unk_0xB1FDFCECA75CE4A7("appInternet"))
	{
		wait(0);
	}
	start_new_script("appInternet", 4592);
	unk_0x4659F4154D948B01("appInternet");
	return 1;
}

var func_28()
{
	return Global_68495;
}

var func_29()
{
	return Global_1655011;
}

void func_30()
{
	Global_2448386.f_673.f_28 = 0;
}

bool func_31(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2448386.f_673.f_28 && unk_0xFEB6EEC0545AF7AA(unk_0x61D2332983ACC05C()) == Global_2448386.f_673.f_31);
	}
	return Global_2448386.f_673.f_28;
}

bool func_32()
{
	return Global_68494;
}

void func_33()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_53355[iVar1] < 0)
		{
			Global_53355[iVar1] = 0;
			bVar0 = true;
		}
		iVar1++;
	}
	if (bVar0)
	{
		func_34(0);
		func_34(1);
		func_34(2);
	}
}

void func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53355[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x93180BE33E7149EF(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x93180BE33E7149EF(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x93180BE33E7149EF(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_35()
{
	struct<13> Var0[1];
	struct<16> Var1[1];
	int iVar2;
	
	if (Global_1573306 != -1)
	{
		Var0[0 /*13*/] = Global_1573307[0];
		Var0[0 /*13*/].f_1 = Global_1573307[1];
		Var0[0 /*13*/].f_2 = Global_1573307[2];
		Var0[0 /*13*/].f_3 = Global_1573307[3];
		Var0[0 /*13*/].f_4 = Global_1573307[4];
		Var0[0 /*13*/].f_5 = Global_1573307[5];
		Var0[0 /*13*/].f_6 = Global_1573307[6];
		Var0[0 /*13*/].f_7 = Global_1573307[7];
		Var0[0 /*13*/].f_8 = Global_1573307[8];
		Var0[0 /*13*/].f_9 = Global_1573307[9];
		Var0[0 /*13*/].f_10 = Global_1573307[10];
		Var0[0 /*13*/].f_11 = Global_1573307[11];
		Var0[0 /*13*/].f_12 = Global_1573307[12];
		if (unk_0x365C4466BC171A2D() || unk_0x29A02C184A66D25E())
		{
			if (!iLocal_116)
			{
				if (unk_0x96CFABF92FD41A94(&(Var0[0 /*13*/])))
				{
					iLocal_116 = 1;
				}
			}
			if (iLocal_116)
			{
				if (unk_0x1FE0D8BBA2A97FDF())
				{
				}
				else
				{
					if (unk_0x2FABB060BC2FF8FA())
					{
						StringCopy(&(Global_2097152[func_38() /*12745*/].f_12568.f_18[Global_1573306 /*6*/]), unk_0xA788DB0DF5938ECF(&(Var0[0 /*13*/])), 24);
					}
					func_37();
				}
			}
		}
		else if (unk_0x332D85764ED0503F() || unk_0x7DD04831D0FC44CA())
		{
			if (func_36(Var0[0 /*13*/]))
			{
				switch (iLocal_117)
				{
					case 0:
						iLocal_118 = unk_0x195FF700EC376BED(&Var0, 1);
						if (iLocal_118 >= 0)
						{
							iLocal_117++;
						}
						break;
					
					case 1:
						iVar2 = unk_0xA8BCB82D2AC8A3F5(iLocal_118, &Var1, 1);
						switch (iVar2)
						{
							case -1:
								func_37();
								break;
							
							case 0:
								MemCopy(&(Global_2097152[func_38() /*12745*/].f_12568.f_18[Global_1573306 /*6*/]), {Var1[0 /*16*/]}, 6);
								func_37();
								break;
							
							case 1:
								break;
						}
						break;
				}
			}
			else
			{
				func_37();
			}
		}
		else
		{
			if (func_36(Var0[0 /*13*/]))
			{
				StringCopy(&(Global_2097152[func_38() /*12745*/].f_12568.f_18[Global_1573306 /*6*/]), unk_0x1B8DC95AF10585B3(&(Var0[0 /*13*/])), 24);
			}
			func_37();
		}
	}
}

bool func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x09BF290B57B95740(&uParam0, 13);
}

void func_37()
{
	Global_1573306 = -1;
	iLocal_116 = 0;
	iLocal_118 = -1;
	iLocal_117 = 0;
}

int func_38()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_39()
{
	int iVar0;
	
	Global_37020 = 0;
	Global_37026 = 0;
	Global_37027 = 0;
	Global_37028 = 1;
	Global_37029 = -1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_36827[iVar0 /*32*/] = 0;
		iVar0++;
	}
}

