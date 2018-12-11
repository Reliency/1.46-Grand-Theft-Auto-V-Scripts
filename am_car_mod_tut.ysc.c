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
	float fLocal_60 = 0f;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 32;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
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
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 32;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	int iLocal_137 = 0;
	vector3 vLocal_138[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	struct<21> Local_151 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_60 = ((0.05f + 0.275f) - 0.01f);
	iLocal_139 = -1;
	func_202(ScriptParam_151);
	while (true)
	{
		func_201();
		if (func_192())
		{
			func_182();
		}
		switch (func_181(unk_0xD60943E3BE730BF0()))
		{
			case 0:
				if (func_180() == 2)
				{
					vLocal_138[unk_0xD60943E3BE730BF0() /*3*/] = 2;
				}
				else if (func_180() == 6)
				{
					vLocal_138[unk_0xD60943E3BE730BF0() /*3*/] = 5;
				}
				break;
			
			case 2:
				if (func_180() == 2)
				{
					if (!func_179(0))
					{
						func_74();
					}
					else if (!unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 1))
					{
						func_8();
					}
				}
				else if (func_180() == 6)
				{
					vLocal_138[unk_0xD60943E3BE730BF0() /*3*/] = 5;
				}
				break;
			
			case 5:
				func_6(&(vLocal_61.f_2));
				if (func_5(&(vLocal_61.f_2)))
				{
					vLocal_138[unk_0xD60943E3BE730BF0() /*3*/] = 6;
				}
				break;
			
			case 3:
				vLocal_138[unk_0xD60943E3BE730BF0() /*3*/] = 6;
			
			case 6:
				func_182();
				break;
		}
		if (unk_0x45F99485D7E1C29A())
		{
			switch (func_180())
			{
				case 0:
					vLocal_61.x = 2;
					break;
				
				case 2:
					func_3();
					func_2();
					if (func_1())
					{
						vLocal_61.x = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()
{
	if (unk_0x05EFB6A616B6FADE(vLocal_61.y, 0))
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	if (unk_0x45F99485D7E1C29A())
	{
	}
}

void func_3()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x45F99485D7E1C29A())
	{
		if (iLocal_137 == 0)
		{
			unk_0xFA57C719261AA55D(&iLocal_140, 0);
			unk_0x2BCFB39E86340DAA(&iLocal_140, 1);
		}
		iVar0 = iLocal_137;
		if (unk_0xA08F374047C715E8(iVar0))
		{
			iVar1 = unk_0x9279C21787650C40(iVar0);
			if (!unk_0x05EFB6A616B6FADE(vLocal_138[iLocal_137 /*3*/].f_2, 0))
			{
				unk_0xFA57C719261AA55D(&iLocal_140, 1);
			}
			if (func_4(iVar1, 0, 1))
			{
				if (!unk_0x05EFB6A616B6FADE(Global_1589747[iLocal_137 /*790*/].f_146, 4))
				{
				}
			}
		}
		iLocal_137++;
		if (iLocal_137 == 32)
		{
			if (unk_0x05EFB6A616B6FADE(iLocal_140, 1))
			{
				unk_0x2BCFB39E86340DAA(&(vLocal_61.f_1), 0);
			}
			unk_0x2BCFB39E86340DAA(&iLocal_140, 0);
			iLocal_137 = 0;
		}
	}
}

int func_4(int iParam0, bool bParam1, bool bParam2)
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

int func_5(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_6(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x45F99485D7E1C29A())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_7(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x4C9BACA8D249CB13() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xFFCC7EBF88BDEE54();
			}
			else
			{
				*uParam0 = unk_0x7546CD2A62C6DBB6();
			}
		}
		else
		{
			*uParam0 = unk_0xFD34717937104F1C();
		}
		uParam0->f_1 = 1;
	}
}

void func_8()
{
	if (iLocal_139 != -1)
	{
		func_72(iLocal_139, 0);
		func_71(iLocal_139, 0);
		iLocal_139 = -1;
	}
	unk_0x2BCFB39E86340DAA(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 0);
	unk_0x2BCFB39E86340DAA(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 1);
	func_70(10, 0);
	func_69(0);
	func_30(1);
	func_23();
	func_9(43, 1, 0);
	func_9(42, 1, 0);
}

void func_9(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_22(iParam0, 0, 0))
		{
			if (iParam2 && Global_93284.f_18[iParam0])
			{
				if (func_21(iParam0) == 3 && !func_20(iParam0))
				{
					func_19(iParam0);
					func_18(iParam0, 0, 0);
					func_11(iParam0, 1, 0);
					func_10(iParam0);
				}
				else
				{
					func_18(iParam0, 1, 0);
					func_10(iParam0);
				}
			}
			else
			{
				func_18(iParam0, 0, 0);
				func_11(iParam0, 1, 0);
				func_10(iParam0);
			}
		}
		else
		{
			func_11(iParam0, 1, 0);
			func_10(iParam0);
		}
	}
	else if (func_22(iParam0, 0, 0))
	{
		func_11(iParam0, 0, 0);
		func_11(iParam0, 1, 0);
		func_10(iParam0);
	}
}

void func_10(int iParam0)
{
	Global_93284.f_172[iParam0] = 1;
	Global_93284.f_171 = 1;
}

void func_11(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xFA57C719261AA55D(&(Global_93284.f_1336[iParam0]), iParam1);
	}
	else if (unk_0x4C9BACA8D249CB13())
	{
		if (func_17() == 0)
		{
			iVar0 = func_15(func_16(iParam0), -1, 0);
			unk_0xFA57C719261AA55D(&iVar0, iParam1);
			func_12(func_16(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_106070.f_668[iParam0]), iParam1);
	}
}

void func_12(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_13(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
}

int func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_14();
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

int func_14()
{
	return Global_1312736;
}

int func_15(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_13(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_16(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 8488;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		default:
			break;
	}
	return 9954;
}

int func_17()
{
	return Global_25459;
}

void func_18(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x2BCFB39E86340DAA(&(Global_93284.f_1336[iParam0]), iParam1);
	}
	else if (unk_0x4C9BACA8D249CB13())
	{
		if (func_17() == 0)
		{
			iVar0 = func_15(func_16(iParam0), -1, 0);
			unk_0x2BCFB39E86340DAA(&iVar0, iParam1);
			func_12(func_16(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x2BCFB39E86340DAA(&(Global_106070.f_668[iParam0]), iParam1);
	}
}

void func_19(int iParam0)
{
	if (Global_93284.f_18[iParam0])
	{
		func_18(iParam0, 10, 1);
		func_18(iParam0, 19, 1);
	}
}

bool func_20(int iParam0)
{
	return func_22(iParam0, 5, 1);
}

int func_21(int iParam0)
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

int func_22(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0x05EFB6A616B6FADE(Global_93284.f_1336[iParam0], iParam1);
	}
	else if (unk_0x4C9BACA8D249CB13())
	{
		if (func_17() == 0)
		{
			return unk_0x05EFB6A616B6FADE(func_15(func_16(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x05EFB6A616B6FADE(Global_106070.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_23()
{
	if (!func_29())
	{
		return;
	}
	if (!unk_0xFEB6EEC0545AF7AA(unk_0x61D2332983ACC05C()) == Global_1312576.f_9)
	{
		return;
	}
	func_24();
}

void func_24()
{
	func_26();
	func_25(0);
}

void func_25(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x4C9BACA8D249CB13();
	Global_1312576 = 20;
	StringCopy(&(Global_1312576.f_1), "", 32);
	Global_1312576.f_9 = 0;
	if (bVar0)
	{
		Global_1312576.f_10 = unk_0xFFCC7EBF88BDEE54();
		Global_1312576.f_11 = unk_0xFFCC7EBF88BDEE54();
	}
	StringCopy(&(Global_1312576.f_12), "", 16);
	StringCopy(&(Global_1312576.f_16), "", 64);
	StringCopy(&(Global_1312576.f_32), "", 64);
	Global_1312576.f_52 = 0;
	Global_1312576.f_53 = 0;
	Global_1312576.f_54 = 0;
	Global_1312576.f_55 = -1;
	Global_1312576.f_56 = 0;
	Global_1312576.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_26()
{
	if (!func_28())
	{
	}
	if (func_29())
	{
		unk_0xA9E97ADD9EE2DB2D(&(Global_1312576.f_12));
		func_27();
		unk_0xA3BC45E3C63A527C();
	}
}

void func_27()
{
	switch (Global_1312576)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xCDA87E1DA52C8C9D(Global_1312576.f_52);
			return;
		
		case 2:
			unk_0xCDA87E1DA52C8C9D(Global_1312576.f_52);
			unk_0xCDA87E1DA52C8C9D(Global_1312576.f_53);
			return;
		
		case 3:
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_16));
			return;
		
		case 4:
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_16));
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_32));
			return;
		
		case 5:
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_16));
			return;
		
		case 6:
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_16));
			return;
		
		case 7:
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_16));
			return;
		
		case 8:
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_16));
			return;
		
		case 9:
			unk_0x42360C300250E797(&(Global_1312576.f_16));
			return;
		
		case 10:
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_16));
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_32));
			return;
		
		case 12:
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_16));
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_32));
			return;
		
		case 13:
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_16));
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_57);
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_32));
			return;
		
		case 11:
			unk_0x42360C300250E797(&(Global_1312576.f_16));
			return;
		
		case 14:
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_16));
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_32));
			return;
		
		case 15:
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_16));
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_57);
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_32));
			return;
		
		case 17:
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_16));
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_32));
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_48));
			return;
		
		case 16:
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_16));
			return;
		
		case 19:
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_16));
			return;
		
		case 18:
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_16));
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_48));
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_32));
			return;
		
		default:
	}
}

int func_28()
{
	if (!func_29())
	{
		return 0;
	}
	unk_0x783C05630CCAF363(&(Global_1312576.f_12));
	func_27();
	return unk_0x0818E99A91733016();
}

int func_29()
{
	if (Global_1312576 == 20)
	{
		return 0;
	}
	return 1;
}

void func_30(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1312446)
	{
		if (!func_68())
		{
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				Global_1574618[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_65(unk_0xD4E735F4B6A956AC(), bParam0);
	iVar2 = func_63(iVar1, bParam0);
	if (!func_62(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			Global_1574618[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Global_1574618[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 252)
	{
		iVar3 = func_61(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_59(iVar4))
			{
				func_50(iVar4, 1);
			}
		}
		iVar4++;
	}
	func_44(func_45(59, 0, 0), 0);
	func_40(func_45(135, 0, 0), 1);
	func_38(func_45(22, 0, 0), func_45(73, 0, 0));
	if (func_68())
	{
		if (func_37(77, -1))
		{
			func_36(1);
			func_35(1);
		}
	}
	if (func_34() || func_33())
	{
		func_31(77, 1, -1, 1);
		if (unk_0x4C9BACA8D249CB13())
		{
			func_9(28, 1, 0);
			func_9(29, 1, 0);
			func_9(30, 1, 0);
			func_9(31, 1, 0);
			func_9(32, 1, 0);
			func_9(33, 1, 0);
			func_9(34, 1, 0);
			func_9(35, 1, 0);
			func_9(36, 1, 0);
			func_9(37, 1, 0);
			func_9(38, 1, 0);
		}
	}
	if (func_45(21, 0, 0))
	{
		unk_0x0582A97D971E3044(0);
	}
	Global_968395 = 0;
}

void func_31(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_32())
	{
		iVar0 = Global_2566070[iParam0 /*3*/][func_13(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x0C62A7470B522D80(iVar0, iParam1, iParam3);
		}
	}
}

int func_32()
{
	return 1;
	return 0;
}

bool func_33()
{
	return Global_1312845;
}

bool func_34()
{
	return Global_1312847;
}

void func_35(bool bParam0)
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		return;
	}
	func_9(28, bParam0, 0);
	func_9(30, bParam0, 0);
	func_9(31, bParam0, 0);
	func_9(33, bParam0, 0);
	func_9(34, bParam0, 0);
	func_9(38, bParam0, 0);
}

void func_36(bool bParam0)
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		return;
	}
	func_9(29, bParam0, 0);
	func_9(32, bParam0, 0);
	func_9(36, bParam0, 0);
	func_9(35, bParam0, 0);
	func_9(37, bParam0, 0);
}

int func_37(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2566070[iParam0 /*3*/][func_13(iParam1)];
	if (unk_0x57AA4E7564A22FCD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_38(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x4C9BACA8D249CB13())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_9(0, bParam0, 1);
	func_9(1, bParam0, 1);
	func_9(2, bParam0, 1);
	func_9(3, bParam0, 1);
	func_9(4, bParam0, 1);
	func_9(5, bParam0, 1);
	func_9(6, bParam0, 1);
	func_9(7, bParam0, bVar0);
	func_9(8, bParam0, 1);
	func_9(9, bParam0, 1);
	func_9(10, bParam0, 1);
	func_9(11, bParam0, 1);
	func_9(12, bParam0, bVar0);
	func_9(13, bParam0, 1);
	func_9(21, bParam0, 1);
	func_9(14, bParam0, 1);
	func_9(15, bParam0, 1);
	func_9(16, bParam0, 1);
	func_9(17, bParam0, 1);
	func_9(18, bParam0, 1);
	func_9(19, bParam0, 1);
	func_9(20, bParam0, 1);
	func_9(22, bParam0, 1);
	func_9(23, bParam0, 1);
	func_9(24, bParam0, 1);
	func_9(25, bParam0, 1);
	func_9(26, bParam0, 1);
	func_9(27, bParam0, 1);
	func_39(1, !bParam1);
	if (!bVar0)
	{
		func_19(12);
	}
}

void func_39(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_93284.f_9[iParam0] = 1;
	}
	else
	{
		Global_93284.f_9[iParam0] = 0;
	}
}

void func_40(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x4C9BACA8D249CB13())
	{
		return;
	}
	bVar0 = func_179(0);
	if (Global_262145.f_63 == 1 && func_45(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && bVar0))
	{
		func_9(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_20(44))
		{
			func_19(44);
		}
	}
	if (bParam0)
	{
		if (func_41(0) > 1)
		{
			unk_0x2BCFB39E86340DAA(&(Global_2524719.f_1724), 10);
		}
	}
}

int func_41(int iParam0)
{
	int iVar0;
	
	if (Global_1664208[iParam0 /*8*/] == -1)
	{
		iVar0 = func_15(func_43(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_42(iParam0, 0);
			iVar0 = 0;
		}
		Global_1664208[iParam0 /*8*/] = iVar0;
	}
	return Global_1664208[iParam0 /*8*/];
}

void func_42(int iParam0, int iParam1)
{
	Global_1664208[iParam0 /*8*/] = iParam1;
	func_12(func_43(iParam0), iParam1, -1, 1, 0);
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8489;
		
		default:
	}
	return 8489;
}

void func_44(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x4C9BACA8D249CB13())
	{
		return;
	}
	bVar0 = func_179(0);
	func_9(39, bParam0, 0);
	func_9(40, bParam0, 0);
	func_9(41, bParam0, 0);
	if (!bParam0 || (bParam0 && bVar0))
	{
		func_9(43, bParam0, 0);
		func_9(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_20(39))
		{
			func_19(39);
		}
		if (!func_20(40))
		{
			func_19(40);
		}
		if (!func_20(41))
		{
			func_19(41);
		}
		if (!func_20(42))
		{
			func_19(42);
		}
		if (!func_20(43))
		{
			func_19(43);
		}
	}
}

bool func_45(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_7573 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_47(unk_0xD4E735F4B6A956AC(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4716 == 1)
		{
			return 1;
		}
	}
	if (func_34() || func_33())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_46())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1574618[iVar1], iVar0);
}

int func_46()
{
	int iVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (unk_0x05EFB6A616B6FADE(Global_2524719.f_1720, 23))
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	iVar0 = Global_1378933[func_13(-1)];
	if (unk_0x05EFB6A616B6FADE(iVar0, 7))
	{
		unk_0x2BCFB39E86340DAA(&(Global_2524719.f_1720), 23);
		return 1;
	}
	return 0;
}

bool func_47(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_68())
	{
		return 0;
	}
	if (func_49())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_48(iParam1);
	iVar1 = uVar0;
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_645, iVar1);
}

int func_48(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		default:
	}
	return 1;
}

bool func_49()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_146, 3);
}

void func_50(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_58(-1))
			{
				if (!func_68())
				{
					return;
				}
			}
			if (!func_58(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_57() && !func_56())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_55())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_58(-1))
				{
					if (!func_51())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		unk_0x2BCFB39E86340DAA(&(Global_1574618[iVar1]), iVar0);
	}
}

int func_51()
{
	int iVar0;
	
	if (func_54(unk_0xD4E735F4B6A956AC()))
	{
		return 1;
	}
	iVar0 = Global_1378933[func_13(-1)];
	if (unk_0x05EFB6A616B6FADE(iVar0, 2))
	{
		func_52(1);
		return 1;
	}
	return 0;
}

void func_52(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_142, 25))
		{
			func_53(unk_0xD4E735F4B6A956AC(), 12);
			unk_0x2BCFB39E86340DAA(&(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_142), 25);
		}
	}
	else if (unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_142, 25))
	{
		unk_0xFA57C719261AA55D(&(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_142), 25);
	}
}

void func_53(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_48(iParam1);
	iVar1 = uVar0;
	unk_0x2BCFB39E86340DAA(&(Global_1589747[iParam0 /*790*/].f_645), iVar1);
}

bool func_54(int iParam0)
{
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_142, 25);
}

int func_55()
{
	int iVar0;
	
	if (unk_0x05EFB6A616B6FADE(Global_2524719.f_1720, 6))
	{
		return 1;
	}
	iVar0 = Global_1378933[func_13(-1)];
	if (unk_0x05EFB6A616B6FADE(iVar0, 0))
	{
		if (!unk_0x05EFB6A616B6FADE(Global_2524719.f_1720, 6))
		{
			unk_0x2BCFB39E86340DAA(&(Global_2524719.f_1720), 6);
		}
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	return 0;
}

bool func_56()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_146, 7);
}

int func_57()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	return func_37(121, -1);
}

bool func_58(int iParam0)
{
	return func_37(123, iParam0);
}

int func_59(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 23:
		case 12:
		case 13:
		case 11:
		case 14:
		case 15:
		case 30:
		case 8:
		case 32:
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 20:
		case 27:
		case 29:
		case 19:
		case 31:
		case 59:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 81:
		case 88:
		case 89:
		case 90:
		case 93:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 119:
		case 121:
		case 122:
		case 124:
		case 125:
		case 126:
		case 127:
		case 78:
		case 128:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 156:
		case 136:
		case 138:
		case 137:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 148:
		case 135:
		case 130:
			iVar1 = iParam0;
			iVar1 = (iVar1 % 32);
			iVar0 = func_15(func_60(iParam0), -1, 0);
			if (unk_0x05EFB6A616B6FADE(iVar0, iVar1))
			{
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int func_60(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1200;
		
		case 1:
			return 1201;
		
		case 2:
			return 1202;
		
		case 3:
			return 1203;
		
		case 4:
			return 1204;
		
		case 5:
			return 1206;
		
		case 6:
			return 3815;
		
		case 7:
			return 4018;
		
		case 8:
			return 5472;
		
		default:
	}
	return 1200;
}

int func_61(int iParam0)
{
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
		case 236:
			if (!func_58(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
		case 156:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
		case 121:
		case 96:
		case 128:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 78:
		case 103:
		case 124:
		case 126:
		case 127:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
		case 130:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

int func_62(int iParam0)
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	return func_37(119, iParam0);
}

int func_63(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_64(iParam0, 0);
}

int func_64(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_287850[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_287850[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_65(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_66(iParam0);
}

int func_66(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xD4E735F4B6A956AC())
			{
				return Global_1378945[func_13(-1)];
			}
			else if (func_67(iParam0))
			{
				return Global_1589747[iParam0 /*790*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1378945[func_13(-1)];
	}
	return 0;
}

int func_67(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x05EFB6A616B6FADE(Global_2437022.f_1, iParam0);
	}
	return 1;
}

int func_68()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	return func_37(120, -1);
}

void func_69(bool bParam0)
{
	if (bParam0)
	{
		unk_0x2BCFB39E86340DAA(&(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_146), 18);
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_146), 18);
	}
}

void func_70(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_208, iParam0))
		{
			unk_0x2BCFB39E86340DAA(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_208), iParam0);
		}
	}
	else if (unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_208, iParam0))
	{
		unk_0xFA57C719261AA55D(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_208), iParam0);
	}
}

void func_71(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	if (unk_0xCE3CB618AFE55EFB(Global_93284.f_223[iParam0]))
	{
	}
}

void func_72(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 39:
			func_73(39, bParam1);
			break;
		
		case 40:
			func_73(40, bParam1);
			break;
		
		case 41:
			func_73(41, bParam1);
			break;
		
		case 42:
			func_73(42, bParam1);
			break;
		
		case 43:
			func_73(43, bParam1);
			break;
		
		case 44:
			func_73(44, bParam1);
			break;
		
		default:
			break;
	}
}

void func_73(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_22(iParam0, 8, 0))
		{
			func_18(iParam0, 8, 0);
			func_10(iParam0);
		}
	}
	else if (func_22(iParam0, 8, 0))
	{
		func_11(iParam0, 8, 0);
		func_10(iParam0);
	}
}

void func_74()
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	
	switch (vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_1)
	{
		case 0:
			if (!unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 0))
			{
				if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
				{
					if (!unk_0x05EFB6A616B6FADE(iLocal_140, 5))
					{
						if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 0)
						{
							if (unk_0x05EFB6A616B6FADE(iLocal_140, 3))
							{
								unk_0xFA57C719261AA55D(&iLocal_140, 10);
							}
							if (!unk_0x8A29BBDF4603E52B(unk_0xA19140A5C42D8715()))
							{
								if (unk_0x05EFB6A616B6FADE(iLocal_140, 3))
								{
									unk_0xFA57C719261AA55D(&iLocal_140, 3);
								}
								if (unk_0x05EFB6A616B6FADE(iLocal_140, 7))
								{
									unk_0xFA57C719261AA55D(&iLocal_140, 7);
								}
								if (unk_0x05EFB6A616B6FADE(iLocal_140, 8))
								{
									unk_0xFA57C719261AA55D(&iLocal_140, 8);
								}
								if (unk_0x05EFB6A616B6FADE(iLocal_140, 11))
								{
									unk_0xFA57C719261AA55D(&iLocal_140, 11);
								}
								if (!unk_0x05EFB6A616B6FADE(iLocal_140, 2))
								{
									if (iLocal_139 != -1)
									{
										func_72(iLocal_139, 0);
										func_71(iLocal_139, 0);
										iLocal_139 = -1;
									}
									unk_0xFA57C719261AA55D(&iLocal_140, 3);
									func_175("FM_CTUT_CAR", 0);
									unk_0x2BCFB39E86340DAA(&iLocal_140, 2);
								}
							}
							else
							{
								if (unk_0x05EFB6A616B6FADE(iLocal_140, 2))
								{
									unk_0xFA57C719261AA55D(&iLocal_140, 2);
								}
								iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
								if ((!func_148(iVar0, 0, &uVar1) || !func_147(iVar0)) || func_146(unk_0x8F474E419F56E48D(iVar0)))
								{
									if (func_145())
									{
										func_144(0);
									}
									if (unk_0x05EFB6A616B6FADE(iLocal_140, 3))
									{
										unk_0xFA57C719261AA55D(&iLocal_140, 3);
									}
									if (!unk_0x05EFB6A616B6FADE(iLocal_140, 7))
									{
										func_175("FM_CTUT_ANO", 0);
										unk_0x2BCFB39E86340DAA(&iLocal_140, 7);
									}
									if (!unk_0x05EFB6A616B6FADE(iLocal_140, 8))
									{
										if (func_139())
										{
											if (unk_0x1095F403F52B42E1(iVar0, 0))
											{
												if (iLocal_148 > 0)
												{
													if (func_146(unk_0x8F474E419F56E48D(iVar0)))
													{
														func_138("FM_CTUT_PRM", -1);
														unk_0x2BCFB39E86340DAA(&iLocal_140, 8);
														unk_0x2BCFB39E86340DAA(&iLocal_140, 11);
														func_7(&uLocal_145, 0, 0);
													}
													else if (!func_147(iVar0))
													{
														unk_0x2BCFB39E86340DAA(&iLocal_140, 8);
														func_138("FM_CTUT_DRI", -1);
													}
													else if (!func_148(iVar0, 0, &uVar1))
													{
														unk_0x2BCFB39E86340DAA(&iLocal_140, 8);
														func_138("FM_CTUT_HMD", -1);
													}
												}
											}
										}
									}
									else if (unk_0x05EFB6A616B6FADE(iLocal_140, 11))
									{
										if (func_137(&uLocal_145, 30000, 0))
										{
											if (func_146(unk_0x8F474E419F56E48D(iVar0)))
											{
												if (func_139())
												{
													func_138("FM_CTUT_PRM", -1);
													func_136(&uLocal_145);
													func_7(&uLocal_145, 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x05EFB6A616B6FADE(iLocal_140, 7))
									{
										unk_0xFA57C719261AA55D(&iLocal_140, 7);
									}
									if (!func_145())
									{
										func_144(1);
									}
									if (func_135("FM_CTUT_HMD"))
									{
										unk_0x135C61E339DABBAC(1);
									}
									if (!func_134() || (func_134() && unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC())))
									{
										if (!unk_0x05EFB6A616B6FADE(iLocal_140, 3))
										{
											func_175("FM_CTUT_MOD", 0);
											unk_0x2BCFB39E86340DAA(&iLocal_140, 3);
											func_136(&uLocal_141);
											func_7(&uLocal_141, 0, 0);
											if (!func_133(unk_0xD4E735F4B6A956AC()))
											{
												func_69(1);
											}
											if (iLocal_139 == -1)
											{
												iLocal_139 = func_117(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), 4, -1);
												if (iLocal_139 != -1)
												{
													func_72(iLocal_139, 1);
													func_71(iLocal_139, 1);
												}
											}
										}
									}
									else if (func_134() && !unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
									{
										if (!unk_0x05EFB6A616B6FADE(iLocal_140, 3))
										{
											unk_0x2BCFB39E86340DAA(&iLocal_140, 3);
										}
									}
								}
							}
							if (!unk_0x05EFB6A616B6FADE(iLocal_140, 4))
							{
								if (unk_0x05EFB6A616B6FADE(iLocal_140, 3))
								{
									if (func_137(&uLocal_141, 10000, 0))
									{
										if (!unk_0xD1ABB20CFF127CCC())
										{
											if (!func_116())
											{
												if (func_139())
												{
													unk_0x2BCFB39E86340DAA(&iLocal_140, 4);
												}
											}
										}
									}
								}
							}
						}
						else
						{
							if (!unk_0x05EFB6A616B6FADE(iLocal_140, 10))
							{
								if (!unk_0x05EFB6A616B6FADE(iLocal_140, 9))
								{
									func_175("FM_IHELP_LCP", 0);
									if (iLocal_139 != -1)
									{
										func_72(iLocal_139, 0);
										func_71(iLocal_139, 0);
										iLocal_139 = -1;
									}
									unk_0xFA57C719261AA55D(&iLocal_140, 3);
									unk_0xFA57C719261AA55D(&iLocal_140, 2);
									unk_0xFA57C719261AA55D(&iLocal_140, 7);
									unk_0xFA57C719261AA55D(&iLocal_140, 8);
									unk_0x2BCFB39E86340DAA(&iLocal_140, 10);
								}
							}
							if (func_145())
							{
								if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
								{
									if (unk_0x8A29BBDF4603E52B(unk_0xA19140A5C42D8715()))
									{
										iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
										if ((!func_148(iVar0, 0, &uVar2) || !func_147(iVar0)) || func_146(unk_0x8F474E419F56E48D(iVar0)))
										{
											func_144(0);
										}
									}
									else
									{
										func_144(0);
									}
								}
							}
						}
					}
					if (unk_0x05EFB6A616B6FADE(iLocal_140, 3) || (func_134() && unk_0x05EFB6A616B6FADE(iLocal_140, 10)))
					{
						if (func_134())
						{
							if (((func_135("FM_IHELP_CAR") || func_135("FM_IHELP_MOD")) || func_135("FM_CMOD_GPS")) || func_135("FM_CMOD_STOL"))
							{
								unk_0x135C61E339DABBAC(1);
							}
							if (func_113("FM_IHELP_LCP"))
							{
								func_23();
							}
							if (!unk_0x05EFB6A616B6FADE(iLocal_140, 9))
							{
								if (func_111())
								{
									unk_0x2BCFB39E86340DAA(&iLocal_140, 9);
									unk_0x2BCFB39E86340DAA(&(Global_2524719.f_1718), 25);
									if (func_113("FM_CTUT_MOD"))
									{
										func_23();
									}
								}
							}
							if (func_110())
							{
								if (!unk_0x05EFB6A616B6FADE(Global_2524719.f_1718, 25))
								{
									unk_0x2BCFB39E86340DAA(&(Global_2524719.f_1718), 25);
								}
								if (!func_109(unk_0xD4E735F4B6A956AC()))
								{
									if (!func_108(unk_0xD4E735F4B6A956AC()))
									{
										func_107(1);
										iLocal_147 = 1;
										func_30(1);
									}
								}
								if ((func_113("FM_CTUT_RSP") || func_113("FM_IHELP_PTRK")) || func_113("FM_IHELP_PINS"))
								{
									func_23();
								}
							}
							else if (unk_0x05EFB6A616B6FADE(iLocal_140, 9))
							{
								if (func_106(unk_0xD4E735F4B6A956AC()) || (!func_104() && func_103()))
								{
									iVar3 = func_100(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0));
									if (iVar3 > 0)
									{
										if (!func_113("FM_CTUT_REP"))
										{
											func_175("FM_CTUT_REP", 0);
										}
									}
									else if (!func_98())
									{
										if (!func_113("FM_CTUT_RSP"))
										{
											func_175("FM_CTUT_RSP", 0);
										}
									}
									else if (!func_96())
									{
										if (!func_113("FM_IHELP_PTRK"))
										{
											func_175("FM_IHELP_PTRK", 0);
										}
									}
									else if (!func_93())
									{
										if (!func_113("FM_IHELP_PINS"))
										{
											func_175("FM_IHELP_PINS", 0);
										}
									}
								}
							}
						}
						else if (unk_0x05EFB6A616B6FADE(iLocal_140, 9))
						{
							if (!func_110())
							{
								if (unk_0x3A83743561B4F70C())
								{
									unk_0xFA57C719261AA55D(&iLocal_140, 9);
									unk_0xFA57C719261AA55D(&iLocal_140, 3);
									unk_0xFA57C719261AA55D(&iLocal_140, 10);
									func_23();
									iLocal_139 = -1;
									func_85(unk_0xD4E735F4B6A956AC(), 1, 0);
								}
							}
							else if (!unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 0))
							{
								unk_0x2BCFB39E86340DAA(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 0);
							}
						}
					}
					else if (unk_0x05EFB6A616B6FADE(iLocal_140, 9))
					{
						unk_0xFA57C719261AA55D(&iLocal_140, 9);
						unk_0xFA57C719261AA55D(&iLocal_140, 3);
						unk_0xFA57C719261AA55D(&iLocal_140, 10);
						func_23();
						iLocal_139 = -1;
					}
					if (!unk_0x05EFB6A616B6FADE(iLocal_140, 5))
					{
						if (((func_82(unk_0xD4E735F4B6A956AC(), 1) || func_81()) || func_80() > 0) || (!func_78() && !func_134()))
						{
							unk_0x2BCFB39E86340DAA(&iLocal_140, 5);
							func_23();
						}
					}
					else if (unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()) || func_134())
					{
						if (unk_0x3A83743561B4F70C())
						{
							if ((((!func_82(unk_0xD4E735F4B6A956AC(), 1) && !func_81()) && func_80() == 0) && func_78()) || func_134())
							{
								if (!func_77(&uLocal_143))
								{
									func_7(&uLocal_143, 0, 0);
								}
								else if (func_137(&uLocal_143, 7000, 0) || func_134())
								{
									unk_0xFA57C719261AA55D(&iLocal_140, 5);
									unk_0xFA57C719261AA55D(&iLocal_140, 2);
									unk_0xFA57C719261AA55D(&iLocal_140, 3);
									unk_0xFA57C719261AA55D(&iLocal_140, 7);
									unk_0xFA57C719261AA55D(&iLocal_140, 10);
									func_136(&uLocal_143);
									if (iLocal_139 != -1)
									{
										func_72(iLocal_139, 0);
										func_71(iLocal_139, 0);
										iLocal_139 = -1;
									}
								}
							}
						}
					}
				}
			}
			break;
	}
	if (!unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 1))
	{
		if (func_76())
		{
			func_8();
		}
		else
		{
			func_75();
		}
	}
}

void func_75()
{
	if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) != 0)
	{
		return;
	}
	if (func_134())
	{
		return;
	}
	switch (iLocal_148)
	{
		case 0:
			if (!unk_0xE06AA0996C4E4E03())
			{
				func_138("FM_IHELP_CAR", -1);
				iLocal_148++;
			}
			break;
		
		case 1:
			if (unk_0x05EFB6A616B6FADE(iLocal_140, 3))
			{
				if (!unk_0xE06AA0996C4E4E03())
				{
					func_138("FM_IHELP_MOD", -1);
					iLocal_148++;
				}
			}
			break;
		
		case 2:
			if (unk_0x05EFB6A616B6FADE(iLocal_140, 3))
			{
				if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
				{
					if (unk_0x8A29BBDF4603E52B(unk_0xA19140A5C42D8715()))
					{
						if (!unk_0xE06AA0996C4E4E03())
						{
							if (!func_77(&uLocal_149))
							{
								func_7(&uLocal_149, 0, 0);
							}
							else if (func_137(&uLocal_149, 1000, 0))
							{
								func_138("FM_CMOD_GPS", -1);
								iLocal_148++;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (unk_0x05EFB6A616B6FADE(iLocal_140, 3))
			{
				if (!unk_0xE06AA0996C4E4E03())
				{
					if (!func_77(&uLocal_149))
					{
						func_7(&uLocal_149, 0, 0);
					}
					else if (func_137(&uLocal_149, 1000, 0))
					{
						func_138("FM_CMOD_STOL", -1);
						iLocal_148++;
					}
				}
			}
			break;
		
		case 4:
			if (unk_0x05EFB6A616B6FADE(iLocal_140, 3))
			{
				if (!unk_0xE06AA0996C4E4E03())
				{
					if (!func_77(&uLocal_149))
					{
						func_7(&uLocal_149, 0, 0);
					}
					else if (func_137(&uLocal_149, 5000, 0))
					{
						func_138("FM_IHELP_BLP", -1);
						iLocal_148++;
					}
				}
			}
			break;
		
		case 5:
			if (unk_0x05EFB6A616B6FADE(iLocal_140, 3))
			{
				if (!unk_0xE06AA0996C4E4E03())
				{
					iLocal_148++;
				}
			}
			break;
	}
}

int func_76()
{
	if (unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 0))
	{
		return 1;
	}
	return 0;
}

bool func_77(var uParam0)
{
	return uParam0->f_1;
}

int func_78()
{
	if (func_79() == 0)
	{
		return 1;
	}
	return 0;
}

int func_79()
{
	return Global_1312466.f_18;
}

int func_80()
{
	return Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_197;
}

bool func_81()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 0);
}

int func_82(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_83(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589747[iParam0 /*790*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_83(int iParam0)
{
	return func_84(iParam0);
}

bool func_84(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_13.f_1, 0);
}

void func_85(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0x7627C34551D75293())
		{
			unk_0x65227735B3827631(0);
		}
	}
	if (!unk_0x4C9BACA8D249CB13())
	{
		iVar0 = iParam2;
		unk_0x962CF6A9EA6FDCAC(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_78())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0xC77FA683E9BB485B(iParam0) && unk_0x58E3CCF930D23BD5(iParam0))
		{
			iVar25 = unk_0xEE978C39384D834F(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x4C9BACA8D249CB13())
				{
					unk_0xB4F8FDD2A8432441(1);
				}
				else if (bVar13 || (!func_91(unk_0xD4E735F4B6A956AC(), 0) && !func_90()))
				{
					unk_0x7C73A424F1117528(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x4C9BACA8D249CB13() && !bVar18)
					{
						unk_0xB4F8FDD2A8432441(0);
					}
					Global_2423801[iParam0 /*413*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_89(iVar25) && !unk_0xA118174015ACCF05(iVar25))
				{
					if (!bVar21)
					{
						unk_0xDCFB67537602326F(iVar25, true, 0);
					}
				}
				if (!unk_0xF797E4DD45066C88(iVar25))
				{
					if (!bVar20)
					{
						unk_0xB29E08C7AB729BAD(iVar25, false);
					}
					unk_0xEAF1F3E17588C851(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xB29E08C7AB729BAD(iVar25, false);
				}
				unk_0x96BFF0680C7B6FD5(iVar25, true);
				unk_0xEF06BE39D11763FC(iParam0, 0);
				unk_0x052E058A2C50C7D6(iParam0, 0);
				if (unk_0x07E3832452A79D33(iVar25) && unk_0x7434BD0C92483685(iVar25))
				{
					unk_0xE7BD42D7C76057DE(iVar25);
				}
				unk_0x2D2E827C6C3D6D26(iVar25, 1);
				if (unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()) == 0)
				{
					func_88();
					func_87();
				}
				if (unk_0x17A40E4EAE8629CE())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0xE6F861B0A4D50CE0())
				{
				}
				Global_2423801[iParam0 /*413*/].f_245 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
				if (Global_2405070.f_2663)
				{
					Global_2405070.f_2663 = 0;
				}
			}
			else
			{
				if (!func_89(iVar25) && !unk_0xA118174015ACCF05(iVar25))
				{
					if (!bVar21)
					{
						unk_0xDCFB67537602326F(iVar25, !bVar14, 0);
					}
					if (!unk_0xF797E4DD45066C88(iVar25))
					{
						if (!bVar20)
						{
							unk_0xB29E08C7AB729BAD(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xEAF1F3E17588C851(iVar25, 1);
						}
					}
					if (func_86(Global_4456448.f_152990))
					{
						unk_0xB29E08C7AB729BAD(iVar25, true);
					}
				}
				if (Global_1312834)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					unk_0xEF06BE39D11763FC(iParam0, 0);
				}
				else
				{
					unk_0xEF06BE39D11763FC(iParam0, 1);
				}
				unk_0x96BFF0680C7B6FD5(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x8C432EAAB21379FE(iVar25) && !unk_0x5D7DFE2058701942(iVar25, 0))
					{
						unk_0x836A6A722DEA63F1(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			unk_0x962CF6A9EA6FDCAC(iParam0, bParam1, iVar26);
		}
	}
}

bool func_86(int iParam0)
{
	return iParam0 == 17;
}

void func_87()
{
	vector3 vVar0;
	
	Global_2437022.f_1228 = 0;
	Global_2437022.f_1229 = 0;
	Global_2437022.f_1230 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437022.f_1235 = -1;
	Global_2437022.f_1236 = 0;
	Global_2405070.f_2674 = { vVar0 };
}

void func_88()
{
	Global_2405070.f_691 = 0;
	Global_2405070.f_2717 = 0;
	Global_2405070.f_509 = 0;
	Global_2405070.f_597 = 0;
	Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_207 = 0;
	Global_2405070.f_2672 = 0;
}

int func_89(int iParam0)
{
	int iVar0;
	
	if (unk_0x5D7DFE2058701942(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xF9D4EF1338E38AFB(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_90()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

bool func_91(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_92(-1, 0) == 8;
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

int func_92(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_14();
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

int func_93()
{
	if (Global_93284.f_1399)
	{
		return 1;
	}
	if (func_94() >= 0)
	{
		if (unk_0x05EFB6A616B6FADE(Global_1321304[func_94() /*141*/].f_102, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_94()
{
	if (Global_2097152[func_95() /*12745*/].f_8178.f_2 >= 261)
	{
		Global_2097152[func_95() /*12745*/].f_8178.f_2 = -1;
		return -1;
	}
	return Global_2097152[func_95() /*12745*/].f_8178.f_2;
}

int func_95()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_96()
{
	int iVar0;
	
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
		if (func_97(iVar0, 1) || Global_93284.f_1398)
		{
			return 1;
		}
	}
	return 0;
}

int func_97(int iParam0, bool bParam1)
{
	if (Global_71205)
	{
		if (unk_0xDC5D81351D6A4DDB(iParam0) && (!bParam1 || unk_0x1095F403F52B42E1(iParam0, 0)))
		{
			if (unk_0xAEAF59799C2F26E4(iParam0, "Player_Vehicle"))
			{
				if (unk_0xBB4F5216F3FCA8EA(iParam0, "Player_Vehicle") == unk_0xC6D801902FA540DB(unk_0xD4E735F4B6A956AC()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_98()
{
	int iVar0;
	
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
		if (func_99(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_99(int iParam0)
{
	return unk_0xAEAF59799C2F26E4(iParam0, "Sprayed_Vehicle_Decorator");
}

int func_100(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	fVar3 = unk_0x0ADBC1ED02016D2A(iParam0);
	if (fVar3 > 10f)
	{
		iVar9 = 8;
	}
	else if (fVar3 > 5f)
	{
		iVar9 = 4;
	}
	fVar3 = (unk_0x2F78D19B3446544E(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar5 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar5 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar5 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar5 = 80;
	}
	else
	{
		iVar5 = 100;
	}
	fVar3 = (unk_0xC9396A3FD9FCE75E(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar6 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar6 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar6 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar6 = 60;
	}
	else
	{
		iVar6 = 75;
	}
	fVar3 = (to_float(unk_0x24A1A7BF4ED94B71(iParam0)) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar8 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar8 = 40;
	}
	else if (fVar3 > 0.6f)
	{
		iVar8 = 80;
	}
	else if (fVar3 > 0.4f)
	{
		iVar8 = 150;
	}
	else
	{
		iVar8 = 200;
	}
	if (unk_0x1FEA0C52745291C9(iParam0))
	{
		iVar8 += 50;
	}
	if (unk_0xB935197B4C4FBAA5(iParam0, 1))
	{
		iVar8 += 50;
	}
	else if (unk_0xD1AA04FA2BA19AAF(iParam0, 1))
	{
		iVar8 += 25;
	}
	if (unk_0xB935197B4C4FBAA5(iParam0, 0))
	{
		iVar8 += 50;
	}
	else if (unk_0xD1AA04FA2BA19AAF(iParam0, 0))
	{
		iVar8 += 25;
	}
	if (!unk_0xEE7E2878CDBA6E58(iParam0))
	{
		iVar10 += 20;
		if (!unk_0xEB1A41F6F719807C(iParam0, 6))
		{
			iVar10 += 40;
		}
		if (!unk_0xEB1A41F6F719807C(iParam0, 7))
		{
			iVar10 += 40;
		}
	}
	if (unk_0x425CD7B17352316F(unk_0x8F474E419F56E48D(iParam0)))
	{
		iVar1 = 0;
		if (unk_0x39FC9AD10285F177(iParam0, 0))
		{
			iVar1++;
		}
		if (unk_0x39FC9AD10285F177(iParam0, 1))
		{
			iVar1++;
		}
		if (unk_0x39FC9AD10285F177(iParam0, 2))
		{
			iVar1++;
		}
		if (unk_0x39FC9AD10285F177(iParam0, 3))
		{
			iVar1++;
		}
		if (unk_0x39FC9AD10285F177(iParam0, 4))
		{
			iVar1++;
		}
		if (unk_0x39FC9AD10285F177(iParam0, 5))
		{
			iVar1++;
		}
		iVar8 = (iVar8 + iVar1 * 25);
	}
	if (unk_0xBE1F0302C8FE3660(iParam0))
	{
		iVar8 += 15;
	}
	if (unk_0x1F550954BD1A482E(iParam0))
	{
		iVar8 += 15;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (unk_0xB7223494EA10AF2F(iParam0, iVar2, 0))
		{
			iVar1++;
		}
		iVar2++;
	}
	iVar7 = iVar1 * 25;
	if (unk_0x9D5AB05CA5C0F36B(iParam0))
	{
		iVar11 = 50;
	}
	iVar0 = (((((((iVar4 + iVar5) + iVar6) + iVar8) + iVar7) + iVar9) + iVar10) + iVar11);
	if (func_102(unk_0x8F474E419F56E48D(iParam0), 0))
	{
		iVar0 = floor((to_float(iVar0) * Global_262145.f_11438));
		if (iVar0 > floor((4f * Global_262145.f_11438)))
		{
			iVar4 = Global_262145.f_11436;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_262145.f_11437)
		{
			iVar0 = Global_262145.f_11437;
		}
	}
	else if (func_101(iParam0))
	{
		iVar0 = floor((to_float(iVar0) * Global_262145.f_11441));
		if (iVar0 > floor((4f * Global_262145.f_11441)))
		{
			iVar4 = Global_262145.f_11439;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_262145.f_11440)
		{
			iVar0 = Global_262145.f_11440;
		}
	}
	else
	{
		if (iVar0 > 0)
		{
			iVar4 = 50;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > 1250)
		{
			iVar0 = 1250;
		}
	}
	return iVar0;
}

int func_101(int iParam0)
{
	switch (unk_0x8F474E419F56E48D(iParam0))
	{
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
			return 1;
			break;
	}
	return 0;
}

int func_102(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14092)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14093)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14091)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14094)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14096)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14095)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18538)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18540)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18544)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18541)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18548)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18546)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18551)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1356124575:
			if (Global_262145.f_20493)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -1924433270:
			if (Global_262145.f_20494)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -2061049099:
		case 373261600:
		case 1742022738:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 628003514:
		case 1537277726:
		case 1239571361:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1009171724:
		case -1924800695:
		case -1744505657:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -27326686:
		case -1812949672:
		case -1374500452:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1721676810:
		case 840387324:
		case -715746948:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -688189648:
		case -1375060657:
		case -1293924613:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 668439077:
		case -1694081890:
		case -2042350822:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

bool func_103()
{
	return unk_0xFD34717937104F1C() <= Global_17367.f_5873 + 100;
}

int func_104()
{
	if (((((func_105(39) || func_105(40)) || func_105(41)) || func_105(42)) || func_105(43)) || func_105(44))
	{
		return 1;
	}
	return 0;
}

int func_105(int iParam0)
{
	return func_22(iParam0, 20, 1);
}

bool func_106(int iParam0)
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_146, 19);
}

void func_107(bool bParam0)
{
	if (bParam0)
	{
		unk_0x2BCFB39E86340DAA(&(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_146), 20);
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_146), 20);
	}
}

bool func_108(int iParam0)
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_146, 20);
}

bool func_109(int iParam0)
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_146, 21);
}

int func_110()
{
	if (!func_96())
	{
		return 0;
	}
	if (!func_93())
	{
		return 0;
	}
	if (!func_98())
	{
		return 0;
	}
	return 1;
}

int func_111()
{
	if (((((func_112(39) || func_112(40)) || func_112(41)) || func_112(42)) || func_112(43)) || func_112(44))
	{
		return 1;
	}
	return 0;
}

int func_112(int iParam0)
{
	return func_22(iParam0, 6, 1);
}

int func_113(char* sParam0)
{
	if (unk_0x429D45A6C6520026(sParam0))
	{
		return 0;
	}
	if (!func_29())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		if (unk_0xC5E273061032AD53(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0xC5E273061032AD53(sParam0) > 23)
	{
		return 0;
	}
	return func_114(sParam0);
}

bool func_114(char* sParam0)
{
	if (!func_29())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		return func_115(sParam0);
	}
	if (unk_0x429D45A6C6520026(sParam0))
	{
		return 0;
	}
	return unk_0xFEB6EEC0545AF7AA(sParam0) == unk_0xFEB6EEC0545AF7AA(&(Global_1312576.f_12));
}

bool func_115(char* sParam0)
{
	if (!func_29())
	{
		return 0;
	}
	if (unk_0x429D45A6C6520026(sParam0))
	{
		return 0;
	}
	return unk_0xFEB6EEC0545AF7AA(sParam0) == unk_0xFEB6EEC0545AF7AA(&(Global_1312576.f_16));
}

bool func_116()
{
	return Global_1312857;
}

int func_117(vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (iParam1 == 6 || iParam1 == func_21(iVar0))
		{
			iVar4 = iVar0;
			if (func_132(iVar4))
			{
				fVar1 = unk_0x499324B3EF19C288(vParam0, func_118(iVar0, 0), 1);
				if (fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1))
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_118(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_129(Global_95303);
			break;
		
		case 46:
			if (Global_1589591 != func_128())
			{
				if (func_127(Global_1589591))
				{
					return func_120(2, 2);
				}
				else if (func_119(Global_1589591))
				{
					return func_120(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_119(int iParam0)
{
	if (iParam0 != func_128())
	{
		if ((unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_250, 0) || unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_250, 1)) || unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_250, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_120(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1589591 != func_128())
	{
		if (iParam1 == 3)
		{
			if (func_121(iParam0, 1, &vVar0, 0, 0))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0x05EFB6A616B6FADE(Global_1589747[Global_1589591 /*790*/].f_273.f_250, 4))
			{
				if (func_121(iParam0, 1, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0x05EFB6A616B6FADE(Global_1589747[Global_1589591 /*790*/].f_273.f_250, 5))
			{
				if (func_121(iParam0, 2, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_121(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_126(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_126(iParam1, &vVar1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_124(iParam0) };
	}
	else
	{
		Var2 = { func_123(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_122(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_122(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0x2F230B37E9FFF23F(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_122(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = sin(fParam1);
	fVar2 = cos(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_123(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_124(int iParam0)
{
	return func_125(iParam0);
}

struct<6> func_125(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_126(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_127(int iParam0)
{
	if (iParam0 != func_128())
	{
		if ((unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_250, 3) || unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_250, 4)) || unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_250, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_128()
{
	return -1;
}

Vector3 func_129(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_130() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_130()
{
	return func_131(unk_0xD4E735F4B6A956AC());
}

var func_131(int iParam0)
{
	return unk_0x493DDADBC14A1274(Global_2423801[iParam0 /*413*/].f_309.f_3, 28, 31);
}

bool func_132(int iParam0)
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 39:
			bVar0 = unk_0xCE3CB618AFE55EFB(Global_93284.f_223[39]);
			break;
		
		case 40:
			bVar0 = unk_0xCE3CB618AFE55EFB(Global_93284.f_223[40]);
			break;
		
		case 41:
			bVar0 = unk_0xCE3CB618AFE55EFB(Global_93284.f_223[41]);
			break;
		
		case 42:
			bVar0 = unk_0xCE3CB618AFE55EFB(Global_93284.f_223[42]);
			break;
		
		case 43:
			bVar0 = unk_0xCE3CB618AFE55EFB(Global_93284.f_223[43]);
			break;
		
		case 44:
			bVar0 = unk_0xCE3CB618AFE55EFB(Global_93284.f_223[44]);
			break;
	}
	return bVar0;
}

bool func_133(int iParam0)
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_146, 18);
}

int func_134()
{
	if (((((func_20(39) || func_20(40)) || func_20(41)) || func_20(42)) || func_20(43)) || func_20(44))
	{
		return 1;
	}
	return 0;
}

bool func_135(char* sParam0)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	return unk_0x3D94488A86ABB03F(0);
}

void func_136(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_137(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_7(uParam0, bParam2, 0);
	if (unk_0x4C9BACA8D249CB13() && !bParam2)
	{
		if (unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(unk_0xFD34717937104F1C(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_138(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, 1, iParam1);
}

int func_139()
{
	if (((((((((((((!func_4(unk_0xD4E735F4B6A956AC(), 1, 1) || unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715())) || !unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC())) || func_143(8, -1)) || func_143(15, -1)) || func_142()) || func_143(3, -1)) || unk_0xE06AA0996C4E4E03()) || func_82(unk_0xD4E735F4B6A956AC(), 1)) || func_81()) || func_103()) || func_141()) || func_140()) || unk_0xD1ABB20CFF127CCC())
	{
		return 0;
	}
	return 1;
}

var func_140()
{
	return Global_2437022.f_3028.f_578;
}

bool func_141()
{
	return Global_93284.f_328 > 0;
}

var func_142()
{
	return Global_2394809;
}

bool func_143(int iParam0, int iParam1)
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

void func_144(bool bParam0)
{
	if (bParam0)
	{
		unk_0x2BCFB39E86340DAA(&(Global_2524719.f_1721), 4);
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_2524719.f_1721), 4);
	}
}

bool func_145()
{
	return unk_0x05EFB6A616B6FADE(Global_2524719.f_1721, 4);
}

int func_146(int iParam0)
{
	switch (iParam0)
	{
		case joaat("adder"):
		case joaat("bullet"):
		case joaat("carbonizzare"):
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("coquette"):
		case joaat("entityxf"):
		case joaat("exemplar"):
		case joaat("feltzer2"):
		case joaat("infernus"):
		case joaat("jb700"):
		case joaat("monroe"):
		case joaat("ninef"):
		case joaat("ninef2"):
		case joaat("rapidgt2"):
		case joaat("rapidgt"):
		case joaat("stinger"):
		case joaat("stingergt"):
		case joaat("superd"):
		case joaat("vacca"):
		case joaat("ztype"):
		case joaat("akuma"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("double"):
		case joaat("hexer"):
		case joaat("elegy2"):
		case joaat("khamelion"):
		case joaat("hotknife"):
		case joaat("carbonrs"):
		case joaat("voltic"):
		case joaat("comet2"):
		case joaat("surano"):
		case joaat("banshee"):
		case joaat("blazer3"):
		case joaat("jester"):
		case joaat("massacro"):
		case joaat("turismor"):
		case joaat("zentorno"):
		case joaat("huntley"):
		case joaat("alpha"):
		case joaat("paradise"):
		case joaat("bifta"):
		case joaat("kalahari"):
		case joaat("btype"):
		case joaat("thrust"):
		case joaat("dubsta3"):
		case joaat("blade"):
		case joaat("glendale"):
		case joaat("rhapsody"):
		case joaat("warrener"):
		case joaat("panto"):
		case joaat("pigalle"):
		case joaat("coquette2"):
		case joaat("monster"):
		case joaat("sovereign"):
		case joaat("innovation"):
		case joaat("hakuchou"):
		case joaat("furoregt"):
		case joaat("boxville4"):
		case joaat("casco"):
		case joaat("dinghy3"):
		case joaat("enduro"):
		case joaat("gburrito2"):
		case joaat("guardian"):
		case joaat("hydra"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kuruma"):
		case joaat("kuruma2"):
		case joaat("lectro"):
		case joaat("mule3"):
		case joaat("savage"):
		case joaat("technical"):
		case joaat("valkyrie"):
		case joaat("velum2"):
		case joaat("blista2"):
		case joaat("dodo"):
		case joaat("dukes"):
		case joaat("marshall"):
		case joaat("stalion"):
		case joaat("submersible2"):
		case joaat("blista3"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("buffalo3"):
		case joaat("dominator2"):
		case joaat("dukes2"):
		case joaat("gauntlet2"):
		case joaat("stalion2"):
		case joaat("blimp2"):
		case joaat("jester2"):
		case joaat("massacro2"):
		case joaat("ratloader2"):
		case joaat("slamvan"):
		case joaat("barracks3"):
		case joaat("slamvan2"):
		case joaat("brawler"):
		case joaat("chino"):
		case joaat("coquette3"):
		case joaat("feltzer3"):
		case joaat("luxor2"):
		case joaat("osiris"):
		case joaat("swift2"):
		case joaat("t20"):
		case joaat("toro"):
		case joaat("vindicator"):
		case joaat("virgo"):
		case joaat("windsor"):
		case joaat("faction"):
		case joaat("moonbeam"):
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
		case joaat("btype2"):
		case joaat("lurcher"):
		case joaat("faction3"):
		case joaat("minivan2"):
		case joaat("sabregt2"):
		case joaat("slamvan3"):
		case joaat("tornado5"):
		case joaat("virgo2"):
		case joaat("virgo3"):
		case joaat("baller3"):
		case joaat("baller4"):
		case joaat("baller5"):
		case joaat("baller6"):
		case joaat("cog55"):
		case joaat("cog552"):
		case joaat("cognoscenti"):
		case joaat("cognoscenti2"):
		case joaat("mamba"):
		case joaat("nightshade"):
		case joaat("schafter3"):
		case joaat("schafter5"):
		case joaat("schafter4"):
		case joaat("schafter6"):
		case joaat("verlierer2"):
		case joaat("tampa"):
		case joaat("banshee2"):
		case joaat("sultanrs"):
		case joaat("btype3"):
		case joaat("bestiagts"):
		case joaat("brickade"):
		case joaat("fmj"):
		case joaat("nimbus"):
		case joaat("pfister811"):
		case joaat("prototipo"):
		case joaat("rumpo3"):
		case joaat("seven70"):
		case joaat("tug"):
		case joaat("volatus"):
		case joaat("windsor2"):
		case joaat("xls"):
		case joaat("xls2"):
		case joaat("reaper"):
		case joaat("le7b"):
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("contender"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("tyrus"):
		case joaat("sheava"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("lynx"):
		case joaat("avarus"):
		case joaat("blazer4"):
		case joaat("chimera"):
		case joaat("daemon2"):
		case joaat("defiler"):
		case joaat("esskey"):
		case joaat("faggio3"):
		case joaat("faggio"):
		case joaat("hakuchou2"):
		case joaat("manchez"):
		case joaat("nightblade"):
		case joaat("raptor"):
		case joaat("ratbike"):
		case joaat("sanctus"):
		case joaat("shotaro"):
		case joaat("tornado6"):
		case joaat("vortex"):
		case joaat("wolfsbane"):
		case joaat("youga2"):
		case joaat("zombiea"):
		case joaat("zombieb"):
		case joaat("comet2"):
		case joaat("comet3"):
		case joaat("diablous"):
		case joaat("diablous2"):
		case joaat("elegy2"):
		case joaat("elegy"):
		case joaat("fcr"):
		case joaat("fcr2"):
		case joaat("italigtb"):
		case joaat("italigtb2"):
		case joaat("nero"):
		case joaat("nero2"):
		case joaat("penetrator"):
		case joaat("specter"):
		case joaat("specter2"):
		case joaat("tempesta"):
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("phantom2"):
		case joaat("ruiner2"):
		case joaat("ruiner3"):
		case joaat("technical2"):
		case joaat("voltic2"):
		case joaat("wastelander"):
		case 1234311532:
		case -1405937764:
		case 719660200:
		case -982130927:
		case 159274291:
		case 1939284556:
		case 223240013:
		case 433954513:
		case 1504306544:
		case 917809321:
		case 562680400:
		case -32236122:
		case 1897744184:
		case -1881846085:
		case -1924433270:
		case 1356124575:
		case 884483972:
		case -1210451983:
		case 1392481335:
		case 2049897956:
		case 1841130506:
		case -998177792:
		case -1242608589:
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 1483171323:
		case 886810209:
		case -1693015116:
		case -692292317:
		case -1435527158:
		case 1181327175:
		case 1489874736:
		case -212993243:
		case 447548909:
		case 1561920505:
		case -1848994066:
		case 1741861769:
		case 1104234922:
		case 1871995513:
		case 1352136073:
		case -313185164:
		case -2079788230:
		case 600450546:
		case -410205223:
		case 867799010:
		case -1529242755:
		case 903794909:
		case -1532697517:
		case 15219735:
		case 661493923:
		case 838982985:
		case -391595372:
		case -121446169:
		case 1909189272:
		case 1617472902:
		case -1267543371:
		case 931280609:
		case 1046206681:
		case -1259134696:
		case 1115909093:
		case 1031562256:
		case -376434238:
		case -986944621:
		case -1134706562:
		case -2120700196:
		case -214906006:
		case -988501280:
		case 1254014755:
		case -726768679:
		case 1945374990:
		case 1653666139:
		case 219613597:
		case 2069146067:
		case -638562243:
		case -54332285:
		case 2044532910:
		case -420911112:
		case 321186144:
		case 500482303:
		case -1988428699:
		case 1692272545:
		case 345756458:
		case -307958377:
		case -1566607184:
		case 1591739866:
		case 1279262537:
		case -2096690334:
		case -1146969353:
		case -507495760:
		case -1168952148:
		case -49115651:
		case 1456744817:
		case 1721676810:
		case 1009171724:
		case 668439077:
		case -801550069:
		case -688189648:
		case 444994115:
		case 628003514:
		case -331467772:
		case -27326686:
		case -2061049099:
		case 2139203625:
		case 1637620610:
		case -755532233:
		case -1374500452:
		case -1812949672:
		case -1924800695:
		case -1890996696:
		case -1694081890:
		case 373261600:
		case 1537277726:
		case 840387324:
		case 1542143200:
		case 679453769:
		case -1375060657:
		case -1106120762:
		case -1744505657:
		case 2038858402:
		case -2042350822:
		case 1742022738:
		case 1239571361:
		case -715746948:
		case -579747861:
		case 1909700336:
		case -1293924613:
		case -1478704292:
		case -286046740:
		case 540101442:
			return 1;
			break;
	}
	return 0;
}

int func_147(int iParam0)
{
	int iVar0;
	
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		iVar0 = unk_0xB0D49A1F9F054602(iParam0, -1, 0);
		if (iVar0 == unk_0xA19140A5C42D8715())
		{
			return 1;
		}
	}
	return 0;
}

int func_148(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0;
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 0;
	}
	if (!unk_0x1095F403F52B42E1(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x671704836D893828(unk_0x8F474E419F56E48D(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0x8F474E419F56E48D(iParam0);
	if ((!func_173(iVar0, bParam1, uParam2) && !func_172(unk_0xD4E735F4B6A956AC())) && !func_157(iParam0))
	{
		return 0;
	}
	if (func_172(unk_0xD4E735F4B6A956AC()))
	{
		if (func_156(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_155(unk_0xD4E735F4B6A956AC()) && (unk_0x7C197233F79C2CB8(iVar0) || unk_0xCA8C103FCD316F89(iVar0)))
	{
		bVar1 = true;
	}
	if (((unk_0x05ECE2F25303B711(iParam0) && !func_153(iParam0)) && !bVar1) && !(func_152(unk_0x8F474E419F56E48D(iParam0)) && func_150(unk_0xD4E735F4B6A956AC())))
	{
		switch (unk_0x8F474E419F56E48D(iParam0))
		{
			case -801550069:
			case 679453769:
			case 1909700336:
			case 1721676810:
			case 840387324:
			case -715746948:
				*uParam2 = 16;
				break;
			
			default:
				*uParam2 = 2;
				break;
		}
		return 0;
	}
	if (!unk_0x4C9BACA8D249CB13())
	{
		if ((func_149(iParam0) && unk_0x8F474E419F56E48D(iParam0) != joaat("sentinel2")) && unk_0x8F474E419F56E48D(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_149(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xDC5D81351D6A4DDB(Global_90688[iVar0]))
		{
			if (Global_90688[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_150(int iParam0)
{
	if (iParam0 != func_128())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_151(Global_2423801[iParam0 /*413*/].f_309.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_151(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
	}
	return -1;
}

int func_152(int iParam0)
{
	if (((iParam0 == 1945374990 || iParam0 == 1653666139) || iParam0 == 219613597) || iParam0 == -1988428699)
	{
		return 1;
	}
	return 0;
}

int func_153(int iParam0)
{
	switch (unk_0x8F474E419F56E48D(iParam0))
	{
		case -32236122:
		case 177270108:
		case 387748548:
		case 1502869817:
		case -1881846085:
		case 668439077:
		case -1146969353:
		case 1542143200:
		case -579747861:
		case -1694081890:
		case -2042350822:
			return 1;
			break;
		
		case -801550069:
		case 679453769:
		case 1909700336:
		case 1721676810:
		case 840387324:
		case -715746948:
			if (func_154(unk_0xD4E735F4B6A956AC()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_154(int iParam0)
{
	if (iParam0 != func_128())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_151(Global_2423801[iParam0 /*413*/].f_309.f_4) == 13;
			}
		}
	}
	return 0;
}

int func_155(int iParam0)
{
	if (iParam0 != func_128())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_151(Global_2423801[iParam0 /*413*/].f_309.f_4) == 7;
			}
		}
	}
	return 0;
}

int func_156(int iParam0)
{
	switch (iParam0)
	{
		case -2118308144:
		case 1489874736:
		case -1693015116:
		case -692292317:
		case -1435527158:
			return 1;
			break;
	}
	return 0;
}

int func_157(int iParam0)
{
	if (func_171(unk_0xD4E735F4B6A956AC()) || func_170(unk_0xD4E735F4B6A956AC()))
	{
		if (func_158(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_158(int iParam0)
{
	if ((!unk_0xDC5D81351D6A4DDB(iParam0) || !unk_0x1095F403F52B42E1(iParam0, 0)) || unk_0x7112137033807390(iParam0, 0))
	{
		return 0;
	}
	if (func_161(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xAEAF59799C2F26E4(iParam0, "Player_Vehicle"))
	{
		if (unk_0xBB4F5216F3FCA8EA(iParam0, "Player_Vehicle") == unk_0xC6D801902FA540DB(unk_0xD4E735F4B6A956AC()))
		{
			if (func_159(iParam0))
			{
				return 1;
			}
			switch (unk_0x8F474E419F56E48D(iParam0))
			{
				case 159274291:
				case 433954513:
				case 1483171323:
				case 886810209:
				case 1561920505:
				case -410205223:
				case 903794909:
				case -391595372:
				case 1254014755:
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_159(int iParam0)
{
	if (!unk_0xDC5D81351D6A4DDB(iParam0) || !unk_0x1095F403F52B42E1(iParam0, 0))
	{
		return 0;
	}
	if (func_160(unk_0x8F474E419F56E48D(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_160(int iParam0)
{
	switch (iParam0)
	{
		case 562680400:
		case 1897744184:
		case -32236122:
		case 884483972:
		case -1210451983:
		case 1356124575:
		case -1924433270:
		case -1242608589:
		case -212993243:
		case 2044532910:
		case -638562243:
			return 1;
			break;
	}
	return 0;
}

int func_161(int iParam0, bool bParam1)
{
	switch (unk_0x8F474E419F56E48D(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_163(unk_0x8F474E419F56E48D(iParam0), 0))
			{
				if (Global_2524719.f_290 == iParam0)
				{
					return 1;
				}
				else if (func_162(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_162(int iParam0)
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2437022.f_623[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_163(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_102(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case joaat("faction"):
		case joaat("buccaneer"):
		case joaat("chino"):
		case joaat("moonbeam"):
		case joaat("primo"):
		case joaat("voodoo2"):
			return func_169();
			break;
		
		case joaat("sabregt"):
			if (Global_262145.f_14092)
			{
				return func_168();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_262145.f_14093)
			{
				return func_168();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_262145.f_14091)
			{
				return func_168();
			}
			break;
		
		case joaat("minivan"):
			if (Global_262145.f_14094)
			{
				return func_168();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_262145.f_14096)
			{
				return func_168();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_167();
			break;
		
		case joaat("comet2"):
			if (Global_262145.f_18538)
			{
				return func_166();
			}
			break;
		
		case joaat("diablous"):
			if (Global_262145.f_18540)
			{
				return func_166();
			}
			break;
		
		case joaat("fcr"):
			if (Global_262145.f_18544)
			{
				return func_166();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_262145.f_18541)
			{
				return func_166();
			}
			break;
		
		case joaat("nero"):
			if (Global_262145.f_18548)
			{
				return func_166();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_262145.f_18546)
			{
				return func_166();
			}
			break;
		
		case joaat("specter"):
			if (Global_262145.f_18551)
			{
				return func_166();
			}
			break;
		
		case joaat("technical"):
			if (Global_262145.f_20493)
			{
				return func_165();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_262145.f_20494)
			{
				return func_165();
			}
			break;
		
		case joaat("ratloader"):
		case joaat("ratloader2"):
			return func_164();
			break;
		
		case joaat("glendale"):
			return func_164();
			break;
		
		case -2096690334:
			return func_164();
			break;
		
		case 931280609:
			return func_164();
			break;
		
		case joaat("gargoyle"):
			return func_164();
			break;
		
		case joaat("dominator"):
			return func_164();
			break;
		
		case joaat("dominator2"):
			return func_164();
			break;
		
		case 444994115:
			return func_164();
			break;
		
		case 1637620610:
			return func_164();
			break;
		
		case -755532233:
			return func_164();
			break;
		
		case -27326686:
			return func_164();
			break;
		
		case -1812949672:
			return func_164();
			break;
		
		case -1374500452:
			return func_164();
			break;
		
		case 1009171724:
		case 2139203625:
		case 668439077:
		case -2061049099:
		case 628003514:
		case 1721676810:
		case -1146969353:
		case -801550069:
		case -688189648:
		case 540101442:
		case -1924800695:
		case -1890996696:
		case -1694081890:
		case 373261600:
		case 1537277726:
		case 840387324:
		case 1542143200:
		case 679453769:
		case -1375060657:
		case -1106120762:
		case -1744505657:
		case 2038858402:
		case -2042350822:
		case 1742022738:
		case 1239571361:
		case -715746948:
		case -579747861:
		case 1909700336:
		case -1293924613:
		case -1478704292:
			return func_164();
			break;
	}
	return 0;
}

bool func_164()
{
	return unk_0x05BEBC245254F6F2(1927191088);
}

bool func_165()
{
	return unk_0x05BEBC245254F6F2(2067165443);
}

bool func_166()
{
	return unk_0x05BEBC245254F6F2(-957277403);
}

bool func_167()
{
	return unk_0x05BEBC245254F6F2(210122941);
}

bool func_168()
{
	return unk_0x05BEBC245254F6F2(-1894522408);
}

bool func_169()
{
	return unk_0x05BEBC245254F6F2(1630677557);
}

int func_170(int iParam0)
{
	if (iParam0 != func_128())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1 && Global_2423801[iParam0 /*413*/].f_309.f_7 != func_128())
			{
				return func_151(Global_2423801[iParam0 /*413*/].f_309.f_4) == 5;
			}
		}
	}
	return 0;
}

int func_171(int iParam0)
{
	if (iParam0 != func_128())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1 && Global_2423801[iParam0 /*413*/].f_309.f_7 != func_128())
			{
				return func_151(Global_2423801[iParam0 /*413*/].f_309.f_4) == 8;
			}
		}
	}
	return 0;
}

int func_172(int iParam0)
{
	if (iParam0 != func_128())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_151(Global_2423801[iParam0 /*413*/].f_309.f_4) == 9;
			}
		}
	}
	return 0;
}

int func_173(int iParam0, bool bParam1, var uParam2)
{
	bool bVar0;
	
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == 1938952078) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_155(unk_0xD4E735F4B6A956AC()) && (unk_0x7C197233F79C2CB8(iParam0) || unk_0xCA8C103FCD316F89(iParam0)))
	{
		bVar0 = true;
	}
	if (((((((((!unk_0x425CD7B17352316F(iParam0) && !unk_0x8CE5E4632E631B03(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != 1502869817) && iParam0 != -1881846085) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		if (func_174(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x4C9BACA8D249CB13())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_174(int iParam0)
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

void func_175(char* sParam0, bool bParam1)
{
	if (unk_0x429D45A6C6520026(sParam0))
	{
		return;
	}
	if (unk_0xC5E273061032AD53(sParam0) > 23)
	{
		return;
	}
	if (func_114(sParam0))
	{
		return;
	}
	func_24();
	Global_1312576 = 0;
	StringCopy(&(Global_1312576.f_1), unk_0x61D2332983ACC05C(), 32);
	Global_1312576.f_9 = unk_0xFEB6EEC0545AF7AA(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	func_178();
	func_177(bParam1);
	func_176();
}

void func_176()
{
	unk_0x2BCFB39E86340DAA(&(Global_1312576.f_59), 1);
}

void func_177(bool bParam0)
{
	if (bParam0)
	{
		unk_0x2BCFB39E86340DAA(&(Global_1312576.f_59), 0);
		return;
	}
	unk_0xFA57C719261AA55D(&(Global_1312576.f_59), 0);
}

void func_178()
{
	Global_1312576.f_10 = unk_0x8039F92D4B9C6B71(unk_0xFFCC7EBF88BDEE54(), 86400000);
	Global_1312576.f_11 = unk_0xFFCC7EBF88BDEE54();
}

int func_179(bool bParam0)
{
	int iVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!unk_0x05EFB6A616B6FADE(Global_2524719.f_1715, 26))
		{
			iVar0 = func_15(1191, -1, 0);
			if (!unk_0x05EFB6A616B6FADE(iVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_37(122, -1);
}

int func_180()
{
	return vLocal_61.x;
}

int func_181(int iParam0)
{
	return vLocal_138[iParam0 /*3*/];
}

void func_182()
{
	func_23();
	func_70(10, 0);
	if (func_55())
	{
		func_184();
	}
	if (iLocal_139 != -1)
	{
		func_72(iLocal_139, 0);
		func_71(iLocal_139, 0);
	}
	if (!func_179(0))
	{
		if (func_108(unk_0xD4E735F4B6A956AC()) || iLocal_147)
		{
			func_31(122, 1, -1, 1);
		}
	}
	func_69(0);
	func_183();
}

void func_183()
{
	unk_0x8F1A9FE6D91AAFEB();
}

void func_184()
{
	if (!func_191(1, -1))
	{
		func_189(1, -1);
	}
	if (func_116() && func_17() == 0)
	{
	}
	else
	{
		unk_0x4C0FDE9586BA992F(0);
	}
	if (func_188(1))
	{
		unk_0xE641B0D33D2D0306(1);
	}
	else
	{
		unk_0xE641B0D33D2D0306(0);
	}
	Global_2448386.f_632 = 0;
	if (func_185())
	{
		if (!func_37(133, -1))
		{
			func_31(133, 1, -1, 1);
		}
	}
}

int func_185()
{
	if (func_187() && func_186(0))
	{
		return 1;
	}
	return 0;
}

var func_186(int iParam0)
{
	return Global_1312373[iParam0];
}

var func_187()
{
	return func_186(func_14() + 1);
}

bool func_188(int iParam0)
{
	return Global_1654691.f_16[iParam0 /*44*/].f_3;
}

void func_189(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	Global_1378818 = 0;
	if (unk_0x63141F5FDACF3D9B() == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			unk_0x2C7DC959BFE19B01(0, iParam1);
			iVar1 = func_190(iParam1);
			iVar0 = unk_0x3278E95F94254201(iVar1);
			break;
		
		default:
			iVar1 = func_190(iParam1);
			iVar0 = unk_0x3278E95F94254201(iVar1);
			if (!unk_0x05EFB6A616B6FADE(iVar0, iParam0))
			{
				unk_0x2BCFB39E86340DAA(&iVar0, iParam0);
				unk_0x2C7DC959BFE19B01(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			func_31(120, 0, iParam1, 1);
			func_31(124, 0, iParam1, 1);
			func_31(115, 0, iParam1, 1);
			func_31(119, 0, iParam1, 1);
			func_31(121, 0, iParam1, 1);
			func_31(122, 0, iParam1, 1);
			func_31(125, 0, iParam1, 1);
			func_12(1303, 0, iParam1, 1, 0);
			func_12(7233, 0, iParam1, 1, 0);
			break;
	}
}

int func_190(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_14();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

bool func_191(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	iVar0 = func_190(iParam1);
	iVar1 = unk_0x3278E95F94254201(iVar0);
	return unk_0x05EFB6A616B6FADE(iVar1, iParam0);
}

int func_192()
{
	var uVar0;
	
	func_198(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			return 1;
		}
	}
	if (func_197())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_196())
	{
		return 1;
	}
	if (func_195(157))
	{
		if (!func_194())
		{
			return 1;
		}
	}
	if (func_195(155))
	{
		return 1;
	}
	if (!unk_0x18F86E07E41D913F())
	{
		return 1;
	}
	if (func_193() != 0)
	{
		if (unk_0x8B1574454E8C2421(func_193()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_193()
{
	switch (func_17())
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

bool func_194()
{
	return Global_2448386.f_587;
}

int func_195(int iParam0)
{
	if (unk_0xF10AFD11E6EE81BF(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_196()
{
	return Global_2458191;
}

bool func_197()
{
	return Global_2448386.f_582;
}

void func_198(var uParam0)
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
					func_199(iVar0);
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

void func_199(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x8866A4E42CDA3EF1(1, iParam0, &vVar0, 3))
	{
		if (func_4(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xEE978C39384D834F(vVar0.y);
			if (unk_0xDC5D81351D6A4DDB(iVar1))
			{
				if (unk_0x5D7DFE2058701942(iVar1, 0))
				{
					iVar2 = unk_0xCAEB6CE71A2C7212(iVar1, 0);
					if (unk_0xEB1A41F6F719807C(iVar2, vVar0.z) && unk_0xB592B7A61F21E7A5())
					{
						if (func_200(iVar2, &bVar3))
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

int func_200(int iParam0, var uParam1)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (!unk_0x4943BEEC19289B8E(iParam0))
		{
			if (unk_0xCC01DCC72D8B9E39(iParam0))
			{
				if (!unk_0x289FBFAD3E416C48(unk_0x8F474E419F56E48D(iParam0)))
				{
					unk_0x1F7948851FB36E88(iParam0, 0, 1);
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

void func_201()
{
	wait(0);
}

void func_202(struct<21> Param0)
{
	func_208(func_209(Param0), Param0);
	func_206(0, -1, 0);
	unk_0xF82A3961787FA0A4(&vLocal_61, 78);
	unk_0x8BFA7A7AB1D02137(&vLocal_138, 97);
	unk_0x2F3193E06C2EFF44(0);
	if (!func_205())
	{
		func_182();
	}
	func_70(10, 1);
	func_203();
}

void func_203()
{
	unk_0x4C0FDE9586BA992F(1);
	func_204(1, -1);
	unk_0xE641B0D33D2D0306(1);
	if (func_37(133, -1))
	{
		func_31(133, 0, -1, 1);
	}
	Global_2448386.f_632 = 1;
}

void func_204(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	switch (iParam0)
	{
		case 0:
			unk_0x2C7DC959BFE19B01(0, iParam1);
			break;
		
		default:
			iVar1 = func_190(iParam1);
			iVar0 = unk_0x3278E95F94254201(iVar1);
			if (unk_0x05EFB6A616B6FADE(iVar0, iParam0))
			{
				unk_0xFA57C719261AA55D(&iVar0, iParam0);
				unk_0x2C7DC959BFE19B01(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			func_31(120, 0, iParam1, 1);
			func_31(124, 0, iParam1, 1);
			func_31(115, 0, iParam1, 1);
			func_31(119, 0, iParam1, 1);
			break;
	}
}

int func_205()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x4C9BACA8D249CB13())
		{
			return 0;
		}
		if (unk_0x9657A511FBAA9216())
		{
			return 1;
		}
		if (func_197())
		{
			return 0;
		}
		if (func_195(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

int func_206(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBF19BA6420EC428C();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_183();
			}
			else
			{
				return 0;
			}
		}
		if (!func_207())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x4C9BACA8D249CB13())
				{
					if (!bParam2)
					{
						func_183();
					}
					else
					{
						return 0;
					}
				}
				if (func_197())
				{
					if (!bParam2)
					{
						func_183();
					}
					else
					{
						return 0;
					}
				}
				if (func_195(155))
				{
					if (!bParam2)
					{
						func_183();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xB3ADBAEA60664F46())
			{
				if (!bParam2)
				{
					func_183();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = unk_0xBF19BA6420EC428C();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			if (!bParam2)
			{
				func_183();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xB3ADBAEA60664F46())
	{
		if (!bParam2)
		{
			func_183();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_207()
{
	return Global_1312834;
}

void func_208(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		func_183();
	}
	unk_0x1B0D16DC60698F88(iParam0, 0, Param1.f_16);
}

int func_209(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 131:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 2;
		
		case 147:
			return 1;
		
		case 143:
			return 2;
		
		case 144:
			return 4;
		
		case 145:
			return 2;
		
		case 146:
			return 2;
		
		case 128:
			return 1;
		
		case 148:
			return 2;
		
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
			return 0;
		
		case 158:
			return 1;
		
		case 155:
			return 4;
		
		case 156:
			return 16;
		
		case 157:
			return 32;
		
		default:
	}
	return 0;
}

