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
	var uLocal_60 = 0;
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
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
	struct<48> Local_103 = { 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, -808831384, 588969535, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_104 = 0;
	vector3 vLocal_105[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	struct<8> Local_121[3];
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	struct<21> Local_124 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_110 = 1076369579;
	iLocal_111 = 20;
	if (unk_0x4C9BACA8D249CB13() && func_230(unk_0xD4E735F4B6A956AC(), 0, 1))
	{
		func_221(ScriptParam_124);
	}
	else
	{
		func_217();
	}
	while (true)
	{
		func_216();
		if (func_206() || func_202(17))
		{
			func_217();
		}
		if (unk_0xEB97F9F181CDFD2C())
		{
			func_217();
		}
		switch (func_201(unk_0xD60943E3BE730BF0()))
		{
			case 0:
				if (func_200() == 1)
				{
					func_199();
					func_197();
					if (func_196(60000))
					{
						if (!func_194())
						{
							if (!unk_0x8CE5E4632E631B03(Local_103.f_10))
							{
								func_193("DSV_HELP1", -1);
							}
							else
							{
								func_193("DSV_HELP2", -1);
							}
						}
					}
					vLocal_105[unk_0xD60943E3BE730BF0() /*3*/] = 1;
				}
				else if (func_200() == 4)
				{
					vLocal_105[unk_0xD60943E3BE730BF0() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_200() == 1)
				{
					func_43();
				}
				else if (func_200() == 4)
				{
					vLocal_105[unk_0xD60943E3BE730BF0() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_42(&(Local_103.f_45));
				if (func_41(&(Local_103.f_45)))
				{
					vLocal_105[unk_0xD60943E3BE730BF0() /*3*/] = 4;
				}
				break;
			
			case 2:
				vLocal_105[unk_0xD60943E3BE730BF0() /*3*/] = 4;
			
			case 4:
				func_217();
				break;
		}
		if (unk_0x45F99485D7E1C29A())
		{
			switch (func_200())
			{
				case 0:
					if (func_10())
					{
						func_199();
						func_9(&(Local_103.f_43), 0, 0);
						Local_103 = 1;
					}
					break;
				
				case 1:
					func_8();
					func_7();
					if (func_1())
					{
						Local_103 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	struct<14> Var0;
	struct<14> Var1;
	
	if (Local_103.f_42 == 0)
	{
		if (Local_103 != 4)
		{
			if (unk_0x7112137033807390(unk_0xBEA1D935EBAA95F3(Local_103.f_2), 0))
			{
				if (func_6(&(Local_103.f_47), 3000, 0))
				{
					if (Local_103.f_8 == func_5())
					{
						Var0.f_2 = 1220603816;
						func_3(Var0, func_4(1));
					}
					else
					{
						Var0.f_2 = 1892805918;
						Var0.f_10 = Local_103.f_8;
						func_3(Var0, func_4(1));
					}
					return 1;
				}
			}
			if (func_6(&(Local_103.f_43), Global_262145.f_11018, 0))
			{
				Var1.f_2 = -1446847260;
				func_3(Var1, func_4(1));
				return 1;
			}
		}
	}
	return 0;
}

void func_3(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 713068249;
	Param0.f_1 = unk_0xD4E735F4B6A956AC();
	if (!iParam13 == 0)
	{
		unk_0x04F37AFC39D93909(1, &Param0, 14, iParam13);
	}
}

int func_4(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x48908CAFF1B58FF8())
	{
		if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(iVar1)))
		{
			iVar2 = unk_0x9279C21787650C40(unk_0xDF1881EF65347257(iVar1));
			if (func_230(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xD4E735F4B6A956AC() || iParam0)
				{
					unk_0x2BCFB39E86340DAA(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_5()
{
	return -1;
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_9(uParam0, bParam2, 0);
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

void func_7()
{
	switch (Local_103.f_42)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_8()
{
	struct<14> Var0;
	int iVar1;
	
	if (Local_103 != 4)
	{
		iLocal_108 = 0;
		while (iLocal_108 < unk_0x48908CAFF1B58FF8())
		{
			if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(iLocal_108)))
			{
				iVar1 = unk_0x9279C21787650C40(unk_0xDF1881EF65347257(iLocal_108));
				if (unk_0x05EFB6A616B6FADE(vLocal_105[iLocal_108 /*3*/].f_1, 0))
				{
					Var0.f_2 = 1892805918;
					Var0.f_10 = iVar1;
					Local_103.f_8 = iVar1;
					func_3(Var0, func_4(1));
					Local_103 = 4;
					return;
				}
				if (!unk_0x05EFB6A616B6FADE(Local_103.f_1, 0))
				{
					if (unk_0x05EFB6A616B6FADE(vLocal_105[iLocal_108 /*3*/].f_1, 1))
					{
						unk_0x2BCFB39E86340DAA(&(Local_103.f_1), 0);
					}
					if (unk_0x05EFB6A616B6FADE(vLocal_105[iLocal_108 /*3*/].f_1, 2))
					{
						unk_0x2BCFB39E86340DAA(&(Local_103.f_1), 0);
					}
				}
				else
				{
					if (!unk_0x05EFB6A616B6FADE(Local_103.f_1, 1))
					{
						if (unk_0x05EFB6A616B6FADE(vLocal_105[iLocal_108 /*3*/].f_1, 3))
						{
							unk_0x2BCFB39E86340DAA(&(Local_103.f_1), 1);
						}
					}
					if (!unk_0x05EFB6A616B6FADE(Local_103.f_1, 2))
					{
						if (unk_0x05EFB6A616B6FADE(vLocal_105[iLocal_108 /*3*/].f_1, 4))
						{
							unk_0x2BCFB39E86340DAA(&(Local_103.f_1), 2);
						}
					}
					if (!unk_0x05EFB6A616B6FADE(Local_103.f_1, 3))
					{
						if (unk_0x05EFB6A616B6FADE(vLocal_105[iLocal_108 /*3*/].f_1, 5))
						{
							unk_0x2BCFB39E86340DAA(&(Local_103.f_1), 3);
						}
					}
					if (!unk_0x05EFB6A616B6FADE(Local_103.f_1, 4))
					{
						if (unk_0x05EFB6A616B6FADE(vLocal_105[iLocal_108 /*3*/].f_1, 6))
						{
							unk_0x2BCFB39E86340DAA(&(Local_103.f_1), 4);
						}
					}
				}
			}
			iLocal_108++;
		}
	}
}

void func_9(var uParam0, bool bParam1, bool bParam2)
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

int func_10()
{
	if (func_40(Local_103.f_10) && func_40(Local_103.f_11))
	{
		if ((func_21() && func_19()) && func_11())
		{
			unk_0xA5DE74AE39867B03(Local_103.f_10);
			unk_0xA5DE74AE39867B03(Local_103.f_11);
			return 1;
		}
	}
	return 0;
}

int func_11()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_103.f_14)
	{
		if ((!unk_0x83A1DA4E6C55E952(Local_103.f_4[iVar0]) && func_40(Local_103.f_11)) && unk_0x83A1DA4E6C55E952(Local_103.f_2))
		{
			if (func_17(Local_103.f_2))
			{
				if (Local_103.f_12 == 0)
				{
					if (func_16(&(Local_103.f_4[iVar0]), Local_103.f_2, 22, Local_103.f_11, iVar0, 1, 1, 1))
					{
						func_13(&(Local_103.f_4[iVar0]));
					}
				}
				else if (func_12(&(Local_103.f_4[iVar0]), 22, Local_103.f_11, Local_103.f_28[iVar0 /*3*/], Local_103.f_38[iVar0], 1, 1, 1))
				{
					func_13(&(Local_103.f_4[iVar0]));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_103.f_14)
	{
		if (!unk_0x83A1DA4E6C55E952(Local_103.f_4[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_12(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (!unk_0x94D82D856BD4DE54(1))
	{
		return 0;
	}
	iVar0 = unk_0x35C6E06B120EB2E3(iParam1, iParam2, vParam3, fParam4, iParam6, bParam5);
	*uParam0 = unk_0xADF0D7F44D12DC49(iVar0);
	if (unk_0x83A1DA4E6C55E952(*uParam0))
	{
		unk_0xEAF1F3E17588C851(iVar0, iParam7);
		if (unk_0xCC1BBE3267AB0DC9(iVar0))
		{
			if (bParam5)
			{
				unk_0x2F16A8714FE53E5C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

void func_13(var uParam0)
{
	int iVar0;
	
	unk_0xDFA901280292A2FB(unk_0x8A5B683BACF7B78C(*uParam0), Global_1574983);
	unk_0x8695E04AA104690A(unk_0x8A5B683BACF7B78C(*uParam0), 0);
	unk_0xD738221C247C8B71(unk_0x8A5B683BACF7B78C(*uParam0), 1);
	unk_0xD66FF6E7D7FCE47A(unk_0x8A5B683BACF7B78C(*uParam0), func_15(), 25000, 1);
	iVar0 = unk_0x22C775856F4633CA(0, 10);
	if (iVar0 == 0 || iVar0 == 1)
	{
		unk_0xF19FB7DA7E62392D(unk_0x8A5B683BACF7B78C(*uParam0), 0);
	}
	else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
	{
		unk_0xF19FB7DA7E62392D(unk_0x8A5B683BACF7B78C(*uParam0), 2);
	}
	else
	{
		unk_0xF19FB7DA7E62392D(unk_0x8A5B683BACF7B78C(*uParam0), 1);
	}
	iVar0 = unk_0x22C775856F4633CA(0, 10);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 2)
	{
		unk_0x3B7A32E04BBE59A5(unk_0x8A5B683BACF7B78C(*uParam0), 5, 1);
	}
	else if (iVar0 == 3)
	{
		unk_0x3B7A32E04BBE59A5(unk_0x8A5B683BACF7B78C(*uParam0), 17, 1);
	}
	else if ((iVar0 == 4 || iVar0 == 5) || iVar0 == 6)
	{
		unk_0x3B7A32E04BBE59A5(unk_0x8A5B683BACF7B78C(*uParam0), 13, 1);
	}
	if (func_14())
	{
		unk_0x3B7A32E04BBE59A5(unk_0x8A5B683BACF7B78C(*uParam0), 20, 1);
	}
	unk_0x3B7A32E04BBE59A5(unk_0x8A5B683BACF7B78C(*uParam0), 2, 1);
	iVar0 = unk_0x22C775856F4633CA(0, 4);
	if (iVar0 == 0)
	{
		unk_0x8AA21BBDA4DB2C4F(unk_0x8A5B683BACF7B78C(*uParam0), 2);
	}
	else if (iVar0 == 1)
	{
		unk_0x8AA21BBDA4DB2C4F(unk_0x8A5B683BACF7B78C(*uParam0), 1);
	}
	else if (iVar0 == 2)
	{
		unk_0x8AA21BBDA4DB2C4F(unk_0x8A5B683BACF7B78C(*uParam0), 3);
	}
	unk_0xE95B0C313B33DE26(unk_0x8A5B683BACF7B78C(*uParam0), 1);
	unk_0x6AEE0EBD7CA3D63F(unk_0x8A5B683BACF7B78C(*uParam0), 1);
	unk_0x13E0A8160525AE55(unk_0x8A5B683BACF7B78C(*uParam0), 29, true);
	unk_0x2058F6F3F79110DC(unk_0x8A5B683BACF7B78C(*uParam0), 3);
	unk_0x6259CDB47862A4F3(unk_0x8A5B683BACF7B78C(*uParam0), round((200f * Global_262145.f_153)), 0);
}

int func_14()
{
	if (unk_0x05EFB6A616B6FADE(unk_0x22C775856F4633CA(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_15()
{
	switch (Local_103.f_11)
	{
		case joaat("g_m_y_ballaorig_01"):
		case joaat("g_m_y_ballaeast_01"):
			switch (unk_0x22C775856F4633CA(0, 5))
			{
				case 0:
					return joaat("weapon_combatpistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_y_mexgoon_02"):
		case joaat("g_f_y_vagos_01"):
			switch (unk_0x22C775856F4633CA(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_y_lost_01"):
		case joaat("g_f_y_lost_01"):
			switch (unk_0x22C775856F4633CA(0, 5))
			{
				case 0:
					return joaat("weapon_combatpistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_m_chigoon_02"):
		case joaat("g_m_m_chigoon_01"):
			switch (unk_0x22C775856F4633CA(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_advancedrifle");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_carbinerifle");
				
				default:
			}
			break;
		
		case joaat("g_m_m_armgoon_01"):
		case joaat("g_m_y_armgoon_02"):
			switch (unk_0x22C775856F4633CA(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_carbinerifle");
				
				default:
			}
			break;
		
		case joaat("a_m_m_hillbilly_02"):
		case joaat("a_m_m_hillbilly_01"):
			switch (unk_0x22C775856F4633CA(0, 5))
			{
				case 0:
					return joaat("weapon_combatpistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_combatmg");
				
				default:
			}
			break;
		
		case joaat("g_m_y_salvagoon_01"):
		case joaat("g_m_y_salvagoon_02"):
			switch (unk_0x22C775856F4633CA(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_y_strpunk_01"):
		case joaat("g_m_y_strpunk_02"):
			switch (unk_0x22C775856F4633CA(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		default:
			switch (unk_0x22C775856F4633CA(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_combatmg");
				
				case 4:
					return joaat("weapon_carbinerifle");
				
				default:
			}
			break;
	}
	return joaat("weapon_pistol");
}

int func_16(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x94D82D856BD4DE54(1))
	{
		return 0;
	}
	if (!unk_0x83A1DA4E6C55E952(uParam1))
	{
		return 0;
	}
	if (!unk_0x1095F403F52B42E1(unk_0xBEA1D935EBAA95F3(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xADF0D7F44D12DC49(unk_0x91A7C8CA5E332C03(unk_0xBEA1D935EBAA95F3(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x83A1DA4E6C55E952(*uParam0))
	{
		unk_0xEAF1F3E17588C851(unk_0x8A5B683BACF7B78C(*uParam0), iParam7);
		if (unk_0xCC1BBE3267AB0DC9(unk_0x8A5B683BACF7B78C(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x2F16A8714FE53E5C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_17(var uParam0)
{
	if (unk_0x83A1DA4E6C55E952(uParam0))
	{
		return !func_18(unk_0xBEA1D935EBAA95F3(uParam0));
	}
	return 0;
}

int func_18(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (unk_0x7112137033807390(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x1095F403F52B42E1(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_19()
{
	if ((!unk_0x83A1DA4E6C55E952(Local_103.f_3) && func_40(Local_103.f_11)) && unk_0x83A1DA4E6C55E952(Local_103.f_2))
	{
		if (func_17(Local_103.f_2))
		{
			if (Local_103.f_12 == 1)
			{
				if (func_12(&(Local_103.f_3), 22, Local_103.f_11, Local_103.f_24, Local_103.f_27, 1, 1, 1))
				{
					func_13(&(Local_103.f_3));
					func_20();
				}
			}
			else if (func_16(&(Local_103.f_3), Local_103.f_2, 22, Local_103.f_11, -1, 1, 1, 1))
			{
				func_13(&(Local_103.f_3));
				func_20();
			}
		}
	}
	if (!unk_0x83A1DA4E6C55E952(Local_103.f_3))
	{
		return 0;
	}
	return 1;
}

void func_20()
{
	if (Local_103.f_12 == 0)
	{
		if (func_14())
		{
			unk_0x731722E696597BD1(unk_0x8A5B683BACF7B78C(Local_103.f_3), unk_0xBEA1D935EBAA95F3(Local_103.f_2), unk_0xF59B9063EDAC7451(7f, 18f), 786468);
		}
		else
		{
			unk_0x731722E696597BD1(unk_0x8A5B683BACF7B78C(Local_103.f_3), unk_0xBEA1D935EBAA95F3(Local_103.f_2), unk_0xF59B9063EDAC7451(7f, 18f), 786599);
		}
	}
	else if (Local_103.f_12 == 2)
	{
		func_199();
		unk_0xE1072FA2FECBAD96(unk_0x8A5B683BACF7B78C(Local_103.f_3), uLocal_107);
	}
}

int func_21()
{
	int iVar0;
	
	if (!unk_0x83A1DA4E6C55E952(Local_103.f_2))
	{
		if (func_40(Local_103.f_10))
		{
			if (func_23(&(Local_103.f_16), &(Local_103.f_19)))
			{
				if (func_22(&(Local_103.f_2), Local_103.f_10, Local_103.f_16, Local_103.f_19, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
				{
					unk_0xB29E08C7AB729BAD(unk_0xBEA1D935EBAA95F3(Local_103.f_2), false);
					unk_0x9018100BC4DCB099(unk_0xBEA1D935EBAA95F3(Local_103.f_2), 1);
					unk_0x817FED698F1BED49(unk_0xBEA1D935EBAA95F3(Local_103.f_2));
					unk_0xC19EDC1D7179164C(unk_0xBEA1D935EBAA95F3(Local_103.f_2), 1, 1, 0);
					unk_0xEAF1F3E17588C851(unk_0xBEA1D935EBAA95F3(Local_103.f_2), 0);
					if (unk_0xDE26AC7E7C308E75("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0x6D61CED849FB898E(unk_0xBEA1D935EBAA95F3(Local_103.f_2), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0xDE26AC7E7C308E75("MPBitset", 3))
					{
						if (unk_0xAEAF59799C2F26E4(unk_0xBEA1D935EBAA95F3(Local_103.f_2), "MPBitset"))
						{
							iVar0 = unk_0xBB4F5216F3FCA8EA(unk_0xBEA1D935EBAA95F3(Local_103.f_2), "MPBitset");
						}
						unk_0x2BCFB39E86340DAA(&iVar0, 10);
						unk_0x6D61CED849FB898E(unk_0xBEA1D935EBAA95F3(Local_103.f_2), "MPBitset", iVar0);
					}
					if (Local_103.f_12 == 0)
					{
						if (unk_0xD63FAD81FAF5E0CB(unk_0xBEA1D935EBAA95F3(Local_103.f_2)) < Local_103.f_14)
						{
							Local_103.f_14 = unk_0xD63FAD81FAF5E0CB(unk_0xBEA1D935EBAA95F3(Local_103.f_2));
						}
					}
				}
			}
		}
	}
	if (!unk_0x83A1DA4E6C55E952(Local_103.f_2))
	{
		return 0;
	}
	return 1;
}

int func_22(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x3F0E621C9C312804(iParam1))
	{
		return 0;
	}
	if (!unk_0xA495A83E4287FE76(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x01AF8CB960828C2B(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = unk_0x48CFBECB146FD1A1(iParam1, vParam2, fParam3, iParam5, iParam4, iParam12);
	if (unk_0xDC5D81351D6A4DDB(iVar1))
	{
		*uParam0 = unk_0xC48DA15CF8CAF4F9(iVar1);
		Global_2524719.f_6178 = iVar1;
		if (unk_0x83A1DA4E6C55E952(*uParam0))
		{
			if (bParam13)
			{
				unk_0x3D126A1799B1C84D(iVar1, 1);
			}
			unk_0xEAF1F3E17588C851(iVar1, iParam8);
			if (unk_0xCC1BBE3267AB0DC9(iVar1))
			{
				if (bParam6)
				{
					unk_0x2F16A8714FE53E5C(*uParam0, 1);
				}
				else
				{
					unk_0x2F16A8714FE53E5C(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0x9F5CBEB0A0ADA5A7(*uParam0, unk_0xD4E735F4B6A956AC(), 1);
				}
			}
			unk_0x42B5518F103DB03E(iVar1, bParam7);
			unk_0x1E0A3C6D89CE975D(iVar1, 1);
			if (bParam10)
			{
				unk_0xAEE3221D0EC483AD(iVar1);
				unk_0xBA75315E0F357DD3(iVar1, 5, 5, 1f);
			}
			return 1;
		}
	}
	return 0;
}

bool func_23(var uParam0, float fParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	vector3 vVar3;
	
	vVar3 = { func_39(unk_0xD4E735F4B6A956AC()) };
	if (Local_103.f_12 == 1)
	{
		return 1;
	}
	if (!bVar0)
	{
		if (unk_0xD76E6AC477D93A67(&vVar3, uParam0, &uVar2, 0f, 180f, 150f, 0, 1, 1))
		{
			unk_0xE23D832FD873880A(*uParam0, 1, uParam0, fParam1, &iVar1, 4, 3f, 0f);
			if (iVar1 >= 1)
			{
				if (unk_0x499324B3EF19C288(-1367.557f, -3220.598f, 12.9448f, vVar3, 1) >= 600f && unk_0x499324B3EF19C288(750f, -3200f, 6f, vVar3, 1) >= 700f)
				{
					if (iLocal_112 <= 5)
					{
						if (func_24(*uParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
						{
							bVar0 = true;
						}
					}
					else
					{
						Local_103 = 4;
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_111 += 4;
		if (iLocal_111 >= 80)
		{
			iLocal_111 = 20;
			iLocal_112++;
		}
	}
	return bVar0;
}

int func_24(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2405070.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x85A65397E2224648(vParam0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0x5ACD8081B0AC1F22(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || unk_0x5ACD8081B0AC1F22(vParam0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0xC980951B35C111AE(vParam0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (bParam11)
	{
		if (unk_0x06D718FC71673E5A(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (fParam12 > 0f)
	{
		if (func_33(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_25(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405070.f_2++;
	return 1;
}

int func_25(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_230(unk_0xD4E735F4B6A956AC(), 1, 1))
		{
			if (!unk_0x71364F510A1CB69F())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x499324B3EF19C288(func_30(unk_0xD4E735F4B6A956AC()), vParam0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x317672E799676CA5(vParam0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_230(iVar1, 1, 1))
		{
			if (!func_27(iVar1, 0) && unk_0xBC6A832F36065FDF(unk_0xD4E735F4B6A956AC(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0xD4E735F4B6A956AC()))
				{
					if ((func_26(iVar1) || !bParam8) && !Global_2423801[iVar1 /*413*/].f_259)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0xE46ECB9FD23D3264(iVar1) == -1)
							{
								if (unk_0xE46ECB9FD23D3264(iVar1) == unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0xE46ECB9FD23D3264(iVar1) != unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()))) || unk_0xE46ECB9FD23D3264(iVar1) == -1)
							{
								if (unk_0x499324B3EF19C288(func_30(iVar1), vParam0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0xAB4CCE25F269AC90(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xE46ECB9FD23D3264(iVar1) != iParam6 || unk_0xE46ECB9FD23D3264(iVar1) == -1)
						{
							if (unk_0x499324B3EF19C288(func_30(iVar1), vParam0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0xAB4CCE25F269AC90(iVar1, vParam0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_26(int iParam0)
{
	if (unk_0xD9755B4480864A6A(unk_0xEE978C39384D834F(iParam0)) || Global_2423801[iParam0 /*413*/].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_27(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_28(-1, 0) == 8;
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

int func_28(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
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

int func_29()
{
	return Global_1312736;
}

Vector3 func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_32() && Global_1589747[iVar0 /*790*/].f_761) && !func_31(Global_1589747[iVar0 /*790*/].f_762))
	{
		return Global_1589747[iVar0 /*790*/].f_762;
	}
	return func_39(iParam0);
}

int func_31(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_32()
{
	return Global_2448386.f_16;
}

int func_33(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0xD4E735F4B6A956AC() != iVar1) || iParam6 == 0)
		{
			if (func_230(iVar1, bParam2, bParam3))
			{
				if (unk_0xBC6A832F36065FDF(unk_0xD4E735F4B6A956AC(), iVar1))
				{
					if (!bParam5 || (!unk_0x4915F4759304D5CF(unk_0xEE978C39384D834F(iVar1)) && func_26(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) != unk_0xE46ECB9FD23D3264(iVar1))) || unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) == -1)
						{
							if (((unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) == -1 && uParam7) && bParam4) && func_34(iVar1))
							{
							}
							else if (unk_0xDC5D81351D6A4DDB(unk_0xEE978C39384D834F(iVar1)))
							{
								if (unk_0x499324B3EF19C288(func_39(iVar1), vParam0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0)
{
	if (func_38(unk_0xD4E735F4B6A956AC(), iParam0))
	{
		return 1;
	}
	Global_2503649 = { func_37(iParam0) };
	if (unk_0x6053E2C13442D6D7(&Global_2503649))
	{
		return 1;
	}
	if (func_35(unk_0xD4E735F4B6A956AC(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_35(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_36(iParam0);
	if (!iVar0 == func_5())
	{
		if (iVar0 == func_36(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_36(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_1625435[iParam0 /*560*/].f_11;
	}
	return func_5();
}

struct<13> func_37(int iParam0)
{
	struct<13> Var0;
	
	unk_0xE05C4303C26882C4(iParam0, &Var0, 13);
	return Var0;
}

int func_38(int iParam0, int iParam1)
{
	if (unk_0xD1832FEBE50B1AB1())
	{
		Global_2503649 = { func_37(iParam0) };
		Global_2503662 = { func_37(iParam1) };
		if (unk_0xE0B3F7A8017F6425(&Global_2503649))
		{
			if (unk_0xE0B3F7A8017F6425(&Global_2503662))
			{
				unk_0xE087FDE0E2FA8ADF(&Global_2503579, 35, &Global_2503649);
				unk_0xE087FDE0E2FA8ADF(&Global_2503614, 35, &Global_2503662);
				if (Global_2503579 == Global_2503614)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_39(int iParam0)
{
	return unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iParam0), 0);
}

bool func_40(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xCACEBBBEAD8F262E(iParam0);
	return unk_0x7FC99CCC73354033(iParam0);
}

int func_41(var uParam0)
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

void func_42(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x45F99485D7E1C29A())
		{
			func_9(uParam0, 0, 0);
		}
	}
}

void func_43()
{
	switch (vLocal_105[unk_0xD60943E3BE730BF0() /*3*/].f_2)
	{
		case 0:
			func_197();
			func_49();
			func_44();
			if (Local_103.f_42 > 0)
			{
				vLocal_105[unk_0xD60943E3BE730BF0() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_217();
			break;
	}
}

void func_44()
{
	int iVar0;
	
	func_45(Local_103.f_3, &iLocal_113, -1082130432, 0, 0, 0, 0, -1, -1, 1);
	iVar0 = 0;
	while (iVar0 < Local_103.f_14)
	{
		func_45(Local_103.f_4[iVar0], &(Local_121[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
		iVar0++;
	}
	if (unk_0x05EFB6A616B6FADE(Local_103.f_1, 0))
	{
		if (!unk_0x05EFB6A616B6FADE(Local_103.f_1, 1) && !unk_0x05EFB6A616B6FADE(vLocal_105[unk_0xD60943E3BE730BF0() /*3*/].f_1, 3))
		{
			if (unk_0x83A1DA4E6C55E952(Local_103.f_3))
			{
				if (unk_0xABF0452BE64AD290(Local_103.f_3) || (!unk_0x8F01F94322569B77(Local_103.f_3) && unk_0x45F99485D7E1C29A()))
				{
					unk_0xDFA901280292A2FB(unk_0x8A5B683BACF7B78C(Local_103.f_3), Global_1574984);
					unk_0x2BCFB39E86340DAA(&(vLocal_105[unk_0xD60943E3BE730BF0() /*3*/].f_1), 3);
				}
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!unk_0x05EFB6A616B6FADE(Local_103.f_1, (2 + iVar0)) && !unk_0x05EFB6A616B6FADE(vLocal_105[unk_0xD60943E3BE730BF0() /*3*/].f_1, (4 + iVar0)))
			{
				if (unk_0x83A1DA4E6C55E952(Local_103.f_4[iVar0]))
				{
					if (unk_0xABF0452BE64AD290(Local_103.f_4[iVar0]) || (!unk_0x8F01F94322569B77(Local_103.f_4[iVar0]) && unk_0x45F99485D7E1C29A()))
					{
						unk_0xDFA901280292A2FB(unk_0x8A5B683BACF7B78C(Local_103.f_4[iVar0]), Global_1574984);
						if (!unk_0x4915F4759304D5CF(unk_0x8A5B683BACF7B78C(Local_103.f_4[iVar0])))
						{
							unk_0xB943C83C5BDB3DBB(unk_0x8A5B683BACF7B78C(Local_103.f_4[iVar0]), 100f, 0);
						}
						unk_0x2BCFB39E86340DAA(&(vLocal_105[unk_0xD60943E3BE730BF0() /*3*/].f_1), (4 + iVar0));
					}
				}
			}
			iVar0++;
		}
	}
}

void func_45(var uParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0x83A1DA4E6C55E952(uParam0))
	{
		if (func_48())
		{
			Global_2437022 = unk_0xD4E735F4B6A956AC();
		}
		if (bParam3)
		{
			func_47(unk_0x8A5B683BACF7B78C(uParam0), iParam1, 1, Global_2437022, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_47(unk_0x8A5B683BACF7B78C(uParam0), iParam1, -1, Global_2437022, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0xCE3CB618AFE55EFB(*iParam1))
	{
		func_46(iParam1);
	}
}

void func_46(int iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xCE3CB618AFE55EFB(*iParam0))
	{
		unk_0xE1623437A3194332(iParam0);
		bVar0 = true;
	}
	if (unk_0xCE3CB618AFE55EFB(iParam0->f_1))
	{
		unk_0xE1623437A3194332(&(iParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xDC5D81351D6A4DDB(iParam0->f_7))
	{
		if (!unk_0x7112137033807390(iParam0->f_7, 0))
		{
			if (unk_0x8AB5836B2F907B07(iParam0->f_7))
			{
				unk_0xC5203C09CD1079F8(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_47(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xA6580F898F4E801C();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		if (!unk_0x8AB5836B2F907B07(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xC5203C09CD1079F8(iParam0, 1);
			}
			else
			{
				unk_0xF33CC53A33256EAF(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x8DDE0A393F27D92F(iParam0, iParam2);
			unk_0xB2908AF5E9A0E342(iParam0, fParam6);
			if (unk_0xCE3CB618AFE55EFB(*uParam1))
			{
				unk_0xAD8FB9E563A1FF80(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x76D53541FA44D2BF(iParam0, iParam9);
		}
		unk_0x0FDBA0CC86485F19(iParam0, iParam4);
		unk_0x452FE41DB35A74AC(iParam0, iParam5);
		*uParam1 = unk_0xB29DC5E54F9743D9(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xCE3CB618AFE55EFB(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x570128B7829A8EAA(*uParam1, iParam8);
				}
				if (!unk_0x429D45A6C6520026(sParam7))
				{
					unk_0x33442A50C05ADC38("STRING");
					if (bParam10)
					{
						unk_0xC327C023FDA37F2E(sParam7);
					}
					else
					{
						unk_0x4FDA9E6EF359F8A9(sParam7);
					}
					unk_0x8367CB7109A3AFAA(*uParam1);
				}
				unk_0xAD8FB9E563A1FF80(*uParam1, 7);
			}
		}
		if (!unk_0x05EFB6A616B6FADE(uParam1->f_6, 2))
		{
			if (unk_0xCE3CB618AFE55EFB(*uParam1))
			{
				unk_0x2BCFB39E86340DAA(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x5D7DFE2058701942(iParam0, 0))
		{
			uParam1->f_1 = unk_0xB151F9CBE90FEA24(iParam0);
			if (!unk_0x05EFB6A616B6FADE(uParam1->f_6, 3))
			{
				if (unk_0xCE3CB618AFE55EFB(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x570128B7829A8EAA(uParam1->f_1, iParam8);
					}
					if (!unk_0x429D45A6C6520026(sParam7))
					{
						unk_0x33442A50C05ADC38("STRING");
						if (bParam10)
						{
							unk_0xC327C023FDA37F2E(sParam7);
						}
						else
						{
							unk_0x4FDA9E6EF359F8A9(sParam7);
						}
						unk_0x8367CB7109A3AFAA(uParam1->f_1);
					}
					unk_0xAD8FB9E563A1FF80(uParam1->f_1, 7);
					unk_0x2BCFB39E86340DAA(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xCE3CB618AFE55EFB(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0xFA57C719261AA55D(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xCE3CB618AFE55EFB(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xFA57C719261AA55D(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_48()
{
	return Global_1312834;
}

void func_49()
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (unk_0x83A1DA4E6C55E952(Local_103.f_2))
	{
		if (!unk_0x05EFB6A616B6FADE(vLocal_105[unk_0xD60943E3BE730BF0() /*3*/].f_1, 0))
		{
			if (!unk_0x1095F403F52B42E1(unk_0xBEA1D935EBAA95F3(Local_103.f_2), 0))
			{
			}
			if (unk_0x7112137033807390(unk_0xBEA1D935EBAA95F3(Local_103.f_2), 0))
			{
			}
			if (unk_0x7112137033807390(unk_0xBEA1D935EBAA95F3(Local_103.f_2), 0))
			{
				if (unk_0xD4E735F4B6A956AC() == unk_0xE425570A0FBF8517(Local_103.f_2, &uVar0))
				{
					func_190(2104, 1, -1);
					func_187(68, 1, -1);
					func_138(0, unk_0xA19140A5C42D8715(), "XPT_KAIE", -875716015, 1504756458, Global_262145.f_7990, 1, -1, 0, 0, 0);
					if (func_14())
					{
						func_125(86, "DSV_PASS0", 0, 0, -99);
					}
					else
					{
						func_125(86, "DSV_PASS1", 0, 0, -99);
					}
					iVar1 = Global_262145.f_7991;
					Global_2460387 = iVar1;
					func_74(&iVar1, 1);
					if (iVar1 > 0)
					{
						func_70(iVar1, 1, 1, 1092616192);
						if (func_69())
						{
							func_57(-1922554349, iVar1, &uVar2, 0, 0, 0);
						}
						else
						{
							unk_0x976DC5C4130C36A6(iVar1, "AM_DESTROY_VEH", &uVar3);
						}
					}
					unk_0x2BCFB39E86340DAA(&(vLocal_105[unk_0xD60943E3BE730BF0() /*3*/].f_1), 0);
				}
			}
			else
			{
				if (!unk_0x05EFB6A616B6FADE(Local_103.f_1, 0))
				{
					if (!unk_0x05EFB6A616B6FADE(vLocal_105[unk_0xD60943E3BE730BF0() /*3*/].f_1, 1))
					{
						if (func_56(unk_0xA19140A5C42D8715(), unk_0xBEA1D935EBAA95F3(Local_103.f_2), 1))
						{
							unk_0x2BCFB39E86340DAA(&(vLocal_105[unk_0xD60943E3BE730BF0() /*3*/].f_1), 1);
						}
					}
					if (!unk_0x05EFB6A616B6FADE(vLocal_105[unk_0xD60943E3BE730BF0() /*3*/].f_1, 2))
					{
						if (unk_0xDEAEC99031DCB92A(unk_0xBEA1D935EBAA95F3(Local_103.f_2), unk_0xA19140A5C42D8715(), 1))
						{
							unk_0x2BCFB39E86340DAA(&(vLocal_105[unk_0xD60943E3BE730BF0() /*3*/].f_1), 2);
						}
					}
				}
				if (func_230(unk_0xD4E735F4B6A956AC(), 1, 1) && func_56(unk_0xA19140A5C42D8715(), unk_0xBEA1D935EBAA95F3(Local_103.f_2), 0))
				{
					if (!unk_0x05EFB6A616B6FADE(Global_2524719.f_4578, 1))
					{
						unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4578), 1);
					}
				}
				else if (unk_0x05EFB6A616B6FADE(Global_2524719.f_4578, 1))
				{
					unk_0xFA57C719261AA55D(&(Global_2524719.f_4578), 1);
				}
				func_50();
			}
		}
	}
}

void func_50()
{
	if (!unk_0x05EFB6A616B6FADE(iLocal_106, 0))
	{
		if (func_55(27, -1) == 0)
		{
			if (func_230(unk_0xD4E735F4B6A956AC(), 1, 1))
			{
				if (func_56(unk_0xA19140A5C42D8715(), unk_0xBEA1D935EBAA95F3(Local_103.f_2), 0))
				{
					if (func_6(&uLocal_122, 300000, 0))
					{
						func_53(27, 1, -1);
						unk_0x2BCFB39E86340DAA(&iLocal_106, 0);
					}
				}
				else if (func_52(&uLocal_122))
				{
					func_51(&uLocal_122);
				}
			}
			else if (func_52(&uLocal_122))
			{
				func_51(&uLocal_122);
			}
		}
		else
		{
			unk_0x2BCFB39E86340DAA(&iLocal_106, 0);
		}
	}
}

void func_51(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_52(var uParam0)
{
	return uParam0->f_1;
}

void func_53(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2567854[iParam0 /*3*/][func_54(iParam2)];
	unk_0x0C62A7470B522D80(iVar0, iParam1, 1);
}

int func_54(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_29();
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

int func_55(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2567854[iParam0 /*3*/][func_54(iParam1)];
	if (unk_0x57AA4E7564A22FCD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_56(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0) && !unk_0x7112137033807390(iParam0, 0))
	{
		if (unk_0xDC5D81351D6A4DDB(iParam1) && !unk_0x7112137033807390(iParam1, 0))
		{
			if (unk_0xE0FD180CD24C0B67(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_57(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_69())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0)
			{
				func_58(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_58(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -597978445:
			if (iParam1 > 0)
			{
				func_58(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
			func_58(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_58(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_69())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_29()) || unk_0x64BE694244417BDA())
		{
			Global_4263478 = 1;
			return 0;
		}
		if (Global_2459349)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4263479 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4262927[iVar2 /*80*/].f_61.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0xEC103C948D1D3BEF(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x93EA4BE98F3F425A(iVar4))
		{
			*uParam0 = func_65(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4262927[*uParam0 /*80*/].f_61.f_8 = 1;
					Global_4262927[*uParam0 /*80*/].f_61.f_12 = 1;
				}
			}
			Global_4263464 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4263477 = 1;
			Global_4263480 = iParam4;
			Global_4263482 = iParam3;
			Global_4263483 = 1;
			Global_4263481 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4263480 = iParam4;
			Global_4263482 = iParam3;
			Global_4263483 = 1;
			Global_4263481 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_64(1, iParam4);
			Global_4263477 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_59(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_59(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x2BCFB39E86340DAA(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_60(iParam0);
	}
}

void func_60(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_69())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_63(iParam0))
		{
			if (!bVar0)
			{
				unk_0x220FA7ABD5D740BF();
			}
		}
		else if (!bVar0)
		{
			unk_0xBDAA2C842F5C47BF(Global_4262927[iParam0 /*80*/].f_61);
		}
		func_61(&(Global_4262927[iParam0 /*80*/]));
	}
}

void func_61(var uParam0)
{
	uParam0->f_61 = 0;
	uParam0->f_61 = 2147483647;
	uParam0->f_61.f_1 = 0;
	uParam0->f_61.f_2 = 0;
	uParam0->f_61.f_3 = -1593119440;
	uParam0->f_61.f_4 = -2085313189;
	uParam0->f_61.f_5 = 0;
	uParam0->f_61.f_6 = 1227573907;
	uParam0->f_61.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_62(&(uParam0->f_13));
	func_62(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 16);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_61.f_8 = 0;
	uParam0->f_61.f_9 = 0;
	uParam0->f_61.f_10 = 0;
	uParam0->f_61.f_11 = 0;
	uParam0->f_61.f_13 = 0;
	uParam0->f_61.f_12 = 0;
	uParam0->f_61.f_14 = 0;
	uParam0->f_61.f_15 = 0;
	uParam0->f_61.f_16 = 0;
	uParam0->f_61.f_18 = 0;
}

void func_62(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_63(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_5 == 1;
	}
	return 0;
}

void func_64(int iParam0, int iParam1)
{
	Global_2460521 = iParam1;
	Global_2460520 = iParam0;
}

int func_65(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4262927[iVar0 /*80*/].f_61.f_2 == 0)
		{
			if (!func_69())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4262927[iVar0 /*80*/].f_61.f_2 = 1;
			Global_4262927[iVar0 /*80*/].f_61.f_1 = iParam5;
			Global_4262927[iVar0 /*80*/].f_61.f_3 = iParam1;
			Global_4262927[iVar0 /*80*/].f_61.f_4 = iParam2;
			Global_4262927[iVar0 /*80*/].f_61.f_7 = iParam3;
			Global_4262927[iVar0 /*80*/].f_61.f_5 = 0;
			Global_4262927[iVar0 /*80*/].f_61 = iParam0;
			Global_4262927[iVar0 /*80*/].f_61.f_6 = iParam4;
			Global_4262927[iVar0 /*80*/].f_61.f_11 = uParam8;
			Global_4262927[iVar0 /*80*/].f_61.f_10 = iParam7;
			Global_4262927[iVar0 /*80*/].f_61.f_13 = iParam9;
			Global_4262927[iVar0 /*80*/].f_61.f_12 = 0;
			Global_4262927[iVar0 /*80*/].f_61.f_14 = unk_0x817B152F7462D506();
			Global_4262927[iVar0 /*80*/].f_61.f_18 = 0;
			Global_4263464 = 0;
			if (bParam6)
			{
				Global_4262927[iVar0 /*80*/].f_61.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_66(Global_4262927[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_66(struct<62> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	vector3 vVar0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = -313275313;
	vVar0.y = unk_0xD4E735F4B6A956AC();
	vVar0.f_2 = { Param0.f_61 };
	vVar0.f_2.f_32 = iParam19;
	iVar1 = func_68(vVar0.y);
	if ((Global_262145.f_23427 && !Global_262145.f_23428) && !Global_262145.f_23429)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_67();
		unk_0x04F37AFC39D93909(1, &vVar0, 35, iVar1);
	}
}

void func_67()
{
	unk_0xD75A4240F0AD8613("AM_ARENA_SHP");
}

var func_68(int iParam0)
{
	var uVar0;
	
	unk_0x2BCFB39E86340DAA(&uVar0, iParam0);
	return uVar0;
}

int func_69()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

void func_70(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_71(iParam0, iParam1, iParam2, fParam3);
}

void func_71(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_72(iParam0, iParam1, iParam2, fParam3);
}

void func_72(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = floor((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_4 = iVar1;
	Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_3 = (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_73(iVar1, 0);
	}
}

void func_73(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_74(var uParam0, int iParam1)
{
	int iVar0;
	
	if (*uParam0 > 0)
	{
		if (!func_124())
		{
			if (func_123(0))
			{
				if (!func_119(0))
				{
					if (unk_0xC77FA683E9BB485B(func_118()))
					{
						if (func_117() == 100)
						{
							iVar0 = *uParam0;
							*uParam0 = 0;
						}
						else
						{
							iVar0 = ((*uParam0 / 100) * func_117());
							*uParam0 = (*uParam0 - iVar0);
						}
						func_115(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_79("GB_BCUT_TICK1", func_118(), iVar0, 0, 0, 1, 1);
						}
						func_78(20);
						func_75(func_118(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_75(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_230(iParam0, 0, 1))
	{
		Var0 = 2084031113;
		Var0.f_1 = unk_0xD4E735F4B6A956AC();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_77(iParam0);
		func_76(&(Var0.f_6), &(Var0.f_7));
		unk_0x04F37AFC39D93909(1, &Var0, 8, func_68(iParam0));
	}
}

void func_76(var uParam0, var uParam1)
{
	*uParam0 = Global_1643357.f_9;
	*uParam1 = Global_1643357.f_10;
}

var func_77(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_491;
}

void func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4883.f_7[iVar0]), iVar1);
}

int func_79(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xBC6A832F36065FDF(unk_0xD4E735F4B6A956AC(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xB330C43B9B7B1724(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xB330C43B9B7B1724(iParam1), 64);
		}
		if (unk_0x429D45A6C6520026(&Var1))
		{
		}
		unk_0x59FF6261546DDD52(sParam0);
		unk_0xBA9FB571BCB6C1BD(func_86(iParam1, -2, 1, 0, 0));
		unk_0xC327C023FDA37F2E(func_84(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xBA9FB571BCB6C1BD(iParam3);
		}
		unk_0xCDA87E1DA52C8C9D(iParam2);
		iVar0 = unk_0x42A1DBBDEF9F85FF(0, 1);
		func_80(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_80(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_83() || !unk_0xD8B89B387D170E27()) || !func_27(unk_0xD4E735F4B6A956AC(), 0))
	{
		return;
	}
	iVar0 = func_81(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1663381.f_5[iVar0 /*53*/] = iParam0;
		Global_1663381.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1663381.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1663381.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1663381.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1663381.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1663381.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_81(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1663381 - 1))
	{
		if (iParam0 > Global_1663381.f_5[iVar0 /*53*/].f_1)
		{
			func_82(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1663381++;
	if (Global_1663381 > 5)
	{
		Global_1663381 = 5;
		return Global_1663381;
	}
	return (Global_1663381 - 1);
}

void func_82(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1663381.f_5[iVar0 /*53*/] = { Global_1663381.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_83()
{
	return unk_0x05BEBC245254F6F2(-1762644250);
}

var func_84(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_85(&cVar0);
}

var func_85(char[4] cParam0)
{
	return cParam0;
}

int func_86(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_113(iParam0) && !bParam4)
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
	if (((func_113(unk_0xD4E735F4B6A956AC()) || (func_112() && func_111())) && !unk_0x05EFB6A616B6FADE(Global_2524719.f_4577, 31)) && !bParam4)
	{
		iVar1 = func_110();
		if (unk_0xDC5D81351D6A4DDB(iVar1))
		{
			if (unk_0xC085874FDE5FE33A(iVar1))
			{
				if (unk_0x77065AD41B64E946(iVar1) != -1)
				{
					if (func_230(unk_0x77065AD41B64E946(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xD8B89B387D170E27()) && iParam1 < 4)
						{
							if (Global_4456448.f_125859[iParam1] != -1)
							{
								return func_108(iParam1, iParam0, 0);
							}
							else
							{
								return func_97(iParam0, unk_0x77065AD41B64E946(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_97(iParam0, unk_0x77065AD41B64E946(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xD8B89B387D170E27()) && iParam1 < 4)
			{
				if (Global_4456448.f_125859[iParam1] != -1)
				{
					return func_108(iParam1, iParam0, 0);
				}
				else
				{
					return func_87(0, -1, 0);
				}
			}
			else
			{
				return func_87(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xD8B89B387D170E27()) && iParam1 < 4)
	{
		if (Global_4456448.f_125859[iParam1] != -1)
		{
			return func_108(iParam1, iParam0, 0);
		}
		else
		{
			return func_97(iParam0, unk_0xD4E735F4B6A956AC(), iParam1, bParam2, bParam3);
		}
	}
	return func_97(iParam0, unk_0xD4E735F4B6A956AC(), iParam1, bParam2, bParam3);
}

int func_87(bool bParam0, int iParam1, bool bParam2)
{
	return func_88(unk_0xD4E735F4B6A956AC(), bParam0, iParam1, bParam2);
}

int func_88(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xC77FA683E9BB485B(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0xE46ECB9FD23D3264(iParam0);
	if (func_95() && Global_1378988.f_1)
	{
		if (bParam1)
		{
			return func_94(iParam2, iVar0);
		}
		else
		{
			return func_94(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_93(iVar0, iParam2, 0) && !unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_92(1);
				}
				else
				{
					return func_92(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_4456448.f_4, 20))
			{
				return func_89(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_89(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_92(1);
	}
	return func_92(0);
}

int func_89(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_91(iParam0, iParam1, iParam3);
	if (func_90(Global_4456448.f_130782, 1))
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

int func_90(int iParam0, bool bParam1)
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

int func_91(int iParam0, int iParam1, int iParam2)
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
			if (!func_93(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_92(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_93(int iParam0, int iParam1, int iParam2)
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

int func_94(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_91(iParam1, iParam0, 4);
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

int func_95()
{
	if (func_96() && unk_0xD8B89B387D170E27())
	{
		return 1;
	}
	return 0;
}

bool func_96()
{
	return unk_0x05EFB6A616B6FADE(Global_4456448.f_146776, 12);
}

int func_97(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_105(1))
			{
				iVar3 = func_102(iParam0);
				if (!iVar3 == -1)
				{
					return func_100(iVar3);
				}
			}
			if ((func_99(iParam1, iParam0, iVar0, 0) && !unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 18)) || ((func_93(unk_0xE46ECB9FD23D3264(iParam1), unk_0xE46ECB9FD23D3264(iParam0), 0) && unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 23)) && !unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 18)))
			{
				return func_92(1);
			}
			else if (unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 26))
			{
				return func_98(1);
			}
			else
			{
				return func_88(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574393 || Global_1574384) || Global_1589747[iParam0 /*790*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574393 == 1 && Global_1574403 == 0))
			{
				return func_92(1);
			}
			else
			{
				return func_88(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574388 && Global_1573886.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_102(iParam0);
	if (!iVar4 == -1)
	{
		return func_100(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_98(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_99(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_100(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_101(iParam0);
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

var func_101(int iParam0)
{
	return Global_2417554.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_102(int iParam0)
{
	if (!iParam0 == func_5())
	{
		if (func_103(iParam0, 1))
		{
			return Global_2417554.f_2071.f_11[func_36(iParam0)];
		}
	}
	return -1;
}

bool func_103(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_104(iParam0))
		{
			return 0;
		}
	}
	return Global_1625435[iParam0 /*560*/].f_11 != func_5();
}

int func_104(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_5())
		{
			return Global_1625435[iParam0 /*560*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_105(int iParam0)
{
	if ((func_107() || func_106()) || (func_32() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_106()
{
	return Global_2448386.f_15;
}

var func_107()
{
	return Global_2448386.f_14;
}

int func_108(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969023.f_13[iParam0];
	if (func_105(1))
	{
		iVar2 = func_102(iParam1);
		if (!iVar2 == -1)
		{
			return func_100(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0x05EFB6A616B6FADE(Global_4456448.f_104[iParam0 /*10693*/].f_5532[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_5())
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
			iVar0 = func_88(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0x05EFB6A616B6FADE(Global_4456448.f_21, 13))
		{
			iVar0 = func_109(iParam0);
		}
		if (unk_0x05EFB6A616B6FADE(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 26) && !func_93(iParam0, unk_0xE46ECB9FD23D3264(iParam1), 0))
		{
			iVar0 = func_98(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_109(int iParam0)
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

var func_110()
{
	return Global_2359302.f_2;
}

bool func_111()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 4);
}

bool func_112()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 14);
}

int func_113(int iParam0)
{
	if (func_27(iParam0, 0))
	{
		return 1;
	}
	if (func_114())
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

bool func_114()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

void func_115(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_116(1);
	}
	else
	{
		iVar1 = func_116(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_116(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12277;
}

int func_117()
{
	return Global_262145.f_12276;
}

int func_118()
{
	return Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11;
}

bool func_119(bool bParam0)
{
	return func_120(unk_0xD4E735F4B6A956AC(), bParam0);
}

int func_120(int iParam0, bool bParam1)
{
	return func_121(iParam0, bParam1, 1);
}

int func_121(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_122(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1625435[iParam0 /*560*/].f_11;
	if (iVar0 != func_5() && Global_1625435[iVar0 /*560*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_122(int iParam0, int iParam1)
{
	if (iParam0 != func_5())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_5())
		{
			if (Global_1625435[iParam0 /*560*/].f_11 == iParam0 && Global_1625435[iParam0 /*560*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_123(bool bParam0)
{
	return func_103(unk_0xD4E735F4B6A956AC(), bParam0);
}

bool func_124()
{
	return func_104(unk_0xD4E735F4B6A956AC());
}

void func_125(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	func_126(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_126(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_127(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_127(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x429D45A6C6520026(sParam1))
	{
		return;
	}
	if (unk_0xC5E273061032AD53(sParam1) > 15)
	{
		return;
	}
	if (!unk_0x429D45A6C6520026(sParam4))
	{
		if (unk_0xC5E273061032AD53(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_136();
	if (iVar0 == -1)
	{
		return;
	}
	func_135(iVar0);
	func_134(iVar0, uParam0);
	func_133(iVar0, uParam2, bParam3);
	func_132(iVar0, sParam1);
	if (unk_0x429D45A6C6520026(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_131(iVar0);
	if (!unk_0x429D45A6C6520026(sParam4))
	{
		func_129(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_128(iVar0, iParam6);
	}
}

void func_128(int iParam0, int iParam1)
{
	Global_1361724.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_129(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_1361724.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_130(iParam0);
}

void func_130(int iParam0)
{
	unk_0x2BCFB39E86340DAA(&(Global_1361724.f_59[iParam0 /*16*/]), 5);
}

void func_131(int iParam0)
{
	unk_0x2BCFB39E86340DAA(&(Global_1361724.f_59[iParam0 /*16*/]), 4);
}

void func_132(int iParam0, char* sParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1361724.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_133(int iParam0, var uParam1, bool bParam2)
{
	Global_1361724.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		unk_0x2BCFB39E86340DAA(&(Global_1361724.f_59[iParam0 /*16*/]), 2);
		unk_0xFA57C719261AA55D(&(Global_1361724.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		unk_0x2BCFB39E86340DAA(&(Global_1361724.f_59[iParam0 /*16*/]), 3);
		unk_0xFA57C719261AA55D(&(Global_1361724.f_59[iParam0 /*16*/]), 2);
	}
}

void func_134(int iParam0, var uParam1)
{
	Global_1361724.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_135(int iParam0)
{
	unk_0x2BCFB39E86340DAA(&(Global_1361724.f_59[iParam0 /*16*/]), 0);
}

int func_136()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_137(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_137(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1361724.f_59[iParam0 /*16*/], 0);
}

int func_138(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_139(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_139(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_149(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xDC5D81351D6A4DDB(iParam1))
		{
			if (unk_0x281590680327CDEA(iParam1))
			{
				iVar1 = unk_0xA2EA4BA455370F3C(iParam1);
				func_145(unk_0x505186370955851F(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_140(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_140(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_143(iParam0, 1) };
	if (iParam0 == func_142(unk_0xA19140A5C42D8715()))
	{
		func_141(1);
	}
	func_145(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_141(int iParam0)
{
	Global_2437022.f_1886 = iParam0;
}

int func_142(int iParam0)
{
	return iParam0;
}

Vector3 func_143(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (unk_0x45AEA43E60C1F922())
	{
		vVar1 = { unk_0x087F3F13CDC55984(2) };
	}
	if (iParam0 == func_144(unk_0xA19140A5C42D8715()) && unk_0x1F7BAD75218F1A2C(unk_0x9F302D755A846102()) == 4)
	{
		vVar0 = { unk_0x3201284584C7CD83(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { unk_0xE2BBD32891C18569(iParam0, 0) };
	}
	fVar2 = 0f;
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		fVar2 = unk_0x552C823E1D2A019C(iParam0);
		if (unk_0x1F7BAD75218F1A2C(unk_0x9F302D755A846102()) == 4)
		{
			fVar2 = vVar1.z;
		}
	}
	unk_0xDFCF5BB9A4E3B293(unk_0x8F474E419F56E48D(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0.18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0.18f);
	}
	vVar0 = { unk_0x2F230B37E9FFF23F(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_144(int iParam0)
{
	return iParam0;
}

void func_145(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2437022.f_1285[iVar0 /*30*/].f_6 == 0 || Global_2437022.f_1285[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2437022.f_1285[iVar1 /*30*/] = { vParam0 };
			Global_2437022.f_1285[iVar1 /*30*/].f_6 = 1;
			Global_2437022.f_1285[iVar1 /*30*/].f_4 = func_148(Global_2437022.f_1285[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437022.f_1285[iVar1 /*30*/].f_7 = unk_0xFFCC7EBF88BDEE54();
			Global_2437022.f_1285[iVar1 /*30*/].f_3 = iParam1;
			Global_2437022.f_1285[iVar1 /*30*/].f_8 = iParam2;
			Global_2437022.f_1285[iVar1 /*30*/].f_9 = func_147();
			Global_2437022.f_1285[iVar1 /*30*/].f_10 = func_146();
			StringCopy(&(Global_2437022.f_1285[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2437022.f_1285[iVar1 /*30*/].f_26 = unk_0x8039F92D4B9C6B71(unk_0xFFCC7EBF88BDEE54(), iParam4);
		}
	}
}

int func_146()
{
	if (Global_2437022.f_1886)
	{
		Global_2437022.f_1886 = 0;
		return 1;
	}
	Global_2437022.f_1886 = 0;
	return 0;
}

var func_147()
{
	var uVar0;
	
	uVar0 = Global_2437022.f_1888;
	Global_2437022.f_1888 = 1;
	return uVar0;
}

float func_148(vector3 vParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x499324B3EF19C288(unk_0x1E8E507A99E298E6(), vParam0, 1);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_149(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_150(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_150(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_186(unk_0xD4E735F4B6A956AC()) || func_185(unk_0xD4E735F4B6A956AC()))
	{
		if (Global_262145.f_9522 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9522;
		}
	}
	else if (func_183() || func_179(unk_0xD4E735F4B6A956AC()))
	{
		if (Global_262145.f_22640 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22640;
		}
	}
	else if (Global_262145.f_6524 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_6524;
	}
	if (func_178(sParam2))
	{
	}
	if (func_177())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_175(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_174(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_172(0, &iVar1);
					break;
				
				case 3:
					func_172(1, &iVar1);
					break;
				
				case 1:
					func_170(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1677623)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_190(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_160((func_169(unk_0xD4E735F4B6A956AC()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x300F50ED36AA0A0C(iVar1, iParam8, iParam9);
				if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_2 != -1)
				{
					func_190(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_155(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_151((func_153(unk_0xD4E735F4B6A956AC()) + iVar1));
			}
			else
			{
				func_151((func_153(unk_0xD4E735F4B6A956AC()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_151(int iParam0)
{
	if (func_177())
	{
		Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_5 = iParam0;
		func_152(joaat("mpply_globalxp"), iParam0);
	}
}

void func_152(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, 1);
	}
}

int func_153(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_230(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xD4E735F4B6A956AC())
			{
				return func_154(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589747[iParam0 /*790*/].f_211.f_5;
			}
		}
		else
		{
			return func_154(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_154(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x2AD48F3CEBA882E9(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_155(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_37(unk_0xD4E735F4B6A956AC()) };
	if (unk_0xD1832FEBE50B1AB1())
	{
		if (unk_0xE0B3F7A8017F6425(&Var0))
		{
			iVar1 = func_158(func_159(&Var0));
			if (iVar1 == 0)
			{
				func_157(&Global_1378824, iParam0);
				func_156(joaat("mpply_crew_local_xp_0"), Global_1378824);
			}
			else if (iVar1 == 1)
			{
				func_157(&Global_1378825, iParam0);
				func_156(joaat("mpply_crew_local_xp_1"), Global_1378825);
			}
			else if (iVar1 == 2)
			{
				func_157(&Global_1378826, iParam0);
				func_156(joaat("mpply_crew_local_xp_2"), Global_1378826);
			}
			else if (iVar1 == 3)
			{
				func_157(&Global_1378827, iParam0);
				func_156(joaat("mpply_crew_local_xp_3"), Global_1378827);
			}
			else if (iVar1 == 4)
			{
				func_157(&Global_1378828, iParam0);
				func_156(joaat("mpply_crew_local_xp_4"), Global_1378828);
			}
		}
	}
}

void func_156(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1378819 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1378821 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1378821 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1378822 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1378823 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1378824 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1378825 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1378826 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1378827 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1378828 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1378829 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1378830 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1378831 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1378832 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1378833 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1378834 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1378835 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_157(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_158(int iParam0)
{
	if (iParam0 == Global_1378819)
	{
		return 0;
	}
	else if (iParam0 == Global_1378820)
	{
		return 1;
	}
	else if (iParam0 == Global_1378821)
	{
		return 2;
	}
	else if (iParam0 == Global_1378822)
	{
		return 3;
	}
	else if (iParam0 == Global_1378823)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_159(var uParam0)
{
	if (unk_0xD1832FEBE50B1AB1())
	{
		if (unk_0xE0B3F7A8017F6425(uParam0))
		{
			return Global_2458119;
		}
	}
	return Global_2458119;
}

void func_160(int iParam0, int iParam1, int iParam2)
{
	if (func_177())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9490 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1378945[func_54(-1)])
				{
					unk_0x300F50ED36AA0A0C(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1378945[func_54(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9489 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x300F50ED36AA0A0C(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9489 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x300F50ED36AA0A0C(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_168(unk_0xD4E735F4B6A956AC()))
		{
			Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_1 = iParam0;
			Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_6 = func_166(iParam0, 1);
		}
		func_165(639, iParam0, -1, 1);
		func_164(640, func_166(iParam0, 1), -1, 1, 0);
		Global_1378945[func_54(-1)] = iParam0;
		func_161(7, 0);
	}
}

void func_161(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_163(iParam0, iParam1))
	{
		iVar0 = func_162();
		Global_2458086[iVar0] = iParam0;
	}
}

int func_162()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2458086[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_163(int iParam0, var uParam1)
{
	if (Global_1312845)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312857) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_164(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_54(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
}

void func_165(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2535519[iParam0 /*3*/][func_54(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1378885[func_54(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1378891[func_54(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1378897[func_54(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1378903[func_54(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1378861[func_54(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1378867[func_54(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1378873[func_54(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1378879[func_54(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1378837[func_54(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1378843[func_54(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1378849[func_54(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1378855[func_54(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1378909[func_54(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1378915[func_54(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1378921[func_54(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1378927[func_54(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1378933[func_54(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1378939[func_54(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1378945[func_54(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1378951[func_54(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2568104[0 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2568104[1 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2568104[2 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2568104[3 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_2568229[func_54(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1378957[func_54(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1378963[func_54(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1378969[func_54(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1378975[func_54(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2568165[0 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2568165[1 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2568165[2 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2568165[3 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2568165[4 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2568232[0 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2568232[1 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2568232[2 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2568232[3 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2568232[4 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2568248[0 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2568248[1 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2568248[2 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2568248[3 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2568248[4 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2568165[5 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2568104[4 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2568264[func_54(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2568273[func_54(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2568267[func_54(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2568276[func_54(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2568270[func_54(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2568279[func_54(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2568282[func_54(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2568165[6 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2568104[5 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2568165[7 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2568104[6 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2568165[8 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2568104[7 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2568165[9 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2568104[8 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2568165[10 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2568104[9 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2568165[11 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2568104[10 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2568165[12 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2568104[11 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2568165[13 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2568104[12 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2568165[14 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2568104[13 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2568165[15 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2568104[14 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2568165[16 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2568104[15 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2568165[17 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2568104[16 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2568104[17 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2568104[18 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2568104[19 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_166(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_167(iParam0, 0);
}

int func_167(int iParam0, int iParam1)
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

int func_168(int iParam0)
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

int func_169(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xD4E735F4B6A956AC())
			{
				return Global_1378945[func_54(-1)];
			}
			else if (func_168(iParam0))
			{
				return Global_1589747[iParam0 /*790*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1378945[func_54(-1)];
	}
	return 0;
}

void func_170(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC());
	iVar0 = 0;
	while (iVar0 < unk_0x48908CAFF1B58FF8())
	{
		iVar4 = unk_0xDF1881EF65347257(iVar0);
		if (unk_0xA08F374047C715E8(iVar4))
		{
			iVar5 = unk_0x9279C21787650C40(iVar4);
			if (unk_0xE46ECB9FD23D3264(iVar5) != -1)
			{
				if (unk_0xE46ECB9FD23D3264(iVar5) == iVar1 || func_93(unk_0xE46ECB9FD23D3264(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xD4E735F4B6A956AC())
					{
						if (func_38(unk_0xD4E735F4B6A956AC(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = round((func_171(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_171(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_171(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_172(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x48908CAFF1B58FF8())
		{
			iVar3 = iVar0;
			if (unk_0xA08F374047C715E8(iVar3))
			{
				iVar4 = unk_0x9279C21787650C40(iVar3);
				if (func_230(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xD4E735F4B6A956AC())
					{
						iVar1++;
						if (func_38(unk_0xD4E735F4B6A956AC(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_230(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xD4E735F4B6A956AC())
				{
					if (func_173(unk_0xD4E735F4B6A956AC(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_38(unk_0xD4E735F4B6A956AC(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = round((func_171(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_171(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_173(int iParam0, int iParam1)
{
	return vdist(func_39(iParam0), func_39(iParam1));
	return 0f;
}

int func_174(int iParam0)
{
	int iVar0;
	
	if (unk_0x5140B71AC6379F52() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_171(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_175(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x69E48309C7AE810E(iParam0) > func_169(unk_0xD4E735F4B6A956AC()))
		{
			iParam0 = -func_169(unk_0xD4E735F4B6A956AC());
		}
	}
	if (func_176(8000, 0, 0) > 0)
	{
		if (func_176(8000, 0, 0) < (iParam0 + func_169(unk_0xD4E735F4B6A956AC())))
		{
			iParam0 = (func_176(8000, 0, 0) - func_169(unk_0xD4E735F4B6A956AC()));
		}
	}
	return iParam0;
}

int func_176(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_287850[iParam0];
}

int func_177()
{
	return 1;
}

int func_178(char* sParam0)
{
	if (unk_0x7032042E5696FFD7(sParam0))
	{
		return 1;
	}
	else if (unk_0x3CAC2741CC1A631F(sParam0, "") || unk_0x3CAC2741CC1A631F(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_179(int iParam0)
{
	return func_180(func_181(iParam0));
}

int func_180(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_181(int iParam0)
{
	if (func_182(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_33;
	}
	return -1;
}

int func_182(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_33 != -1 || (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_183()
{
	if (unk_0xD8B89B387D170E27())
	{
		return func_32();
	}
	return func_184(Global_4456448.f_130782);
}

int func_184(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5002[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_185(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 2;
}

bool func_186(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 7;
}

void func_187(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_189(iParam0, func_54(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_188(iParam0, iVar0, iParam2);
}

void func_188(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2567520[iParam0 /*3*/][func_54(uParam2)];
	unk_0x93180BE33E7149EF(iVar0, iParam1, 1);
}

int func_189(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2567520[iParam0 /*3*/][func_54(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_190(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_192(iParam0, func_54(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_191(iParam0))
	{
		func_164(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_165(iParam0, iVar0, iParam2, 1);
	}
}

int func_191(int iParam0)
{
	if (Global_1378818)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 8527:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
				return 1;
				break;
			}
	}
	return 0;
}

int func_192(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_54(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_193(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, 1, iParam1);
}

int func_194()
{
	if (func_195(20))
	{
		return 1;
	}
	if (func_195(0))
	{
		return 1;
	}
	return 0;
}

bool func_195(int iParam0)
{
	int iVar0;
	
	iVar0 = func_192(2480, -1, 0);
	return unk_0x05EFB6A616B6FADE(iVar0, iParam0);
}

bool func_196(int iParam0)
{
	return unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(Global_2413677, unk_0xFFCC7EBF88BDEE54())) > iParam0;
}

void func_197()
{
	if (unk_0xCE3CB618AFE55EFB(iLocal_109))
	{
		if (func_194() || func_198())
		{
			unk_0x3070F458AEF47C98(iLocal_109, 0);
		}
		else
		{
			unk_0x3070F458AEF47C98(iLocal_109, 4);
		}
	}
	else if (unk_0xAABBF7FA3E338B30(Local_103.f_2))
	{
		if (!unk_0x7112137033807390(unk_0xBEA1D935EBAA95F3(Local_103.f_2), 0))
		{
			iLocal_109 = unk_0x6A15DD6A863D5E27(unk_0xBEA1D935EBAA95F3(Local_103.f_2));
			if (!unk_0x8CE5E4632E631B03(Local_103.f_10))
			{
				unk_0x7DB79A42AADE120F(iLocal_109, 225);
			}
			else
			{
				unk_0x7DB79A42AADE120F(iLocal_109, 348);
			}
			unk_0x570128B7829A8EAA(iLocal_109, 1);
			unk_0xE14767EA16F946A4(iLocal_109, 7000);
			unk_0xAD8FB9E563A1FF80(iLocal_109, 6);
			unk_0xC4F12E446CCE89F5(iLocal_109, "DSV_BLIP");
			if (func_194())
			{
				unk_0x3070F458AEF47C98(iLocal_109, 0);
			}
		}
	}
}

var func_198()
{
	return Global_2415861.f_1689;
}

void func_199()
{
	if (Local_103.f_12 == 2)
	{
		if (unk_0xAABBF7FA3E338B30(Local_103.f_2))
		{
			if (unk_0x1095F403F52B42E1(unk_0xBEA1D935EBAA95F3(Local_103.f_2), 0))
			{
				unk_0x2F89329397A277BC(&uLocal_107);
				unk_0x990EEDE7014A4F2F(0, unk_0xBEA1D935EBAA95F3(Local_103.f_2), Local_103.f_20, 7f, iLocal_110, 3f);
				unk_0xCB482EF95FAE4D73(0, 0, 0);
				unk_0x956B3CF461C0C1C9(0, Local_103.f_24, 1f, -1, 1048576000, 0, Local_103.f_27);
				unk_0x301F42EEE3C40328(uLocal_107);
			}
		}
	}
}

int func_200()
{
	return Local_103;
}

int func_201(int iParam0)
{
	return vLocal_105[iParam0 /*3*/];
}

bool func_202(int iParam0)
{
	return !func_203(iParam0);
}

int func_203(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6549)
			{
				return 0;
			}
			if (func_205(unk_0xD4E735F4B6A956AC(), 7))
			{
				return 0;
			}
			if (unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_22, 0) || unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_22, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6550)
			{
				return 0;
			}
			if (func_205(unk_0xD4E735F4B6A956AC(), 7))
			{
				return 0;
			}
			if (unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_22, 0) || unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_22, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6551)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6552)
			{
				return 0;
			}
			if (func_205(unk_0xD4E735F4B6A956AC(), 7))
			{
				return 0;
			}
			if (unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_22, 0) || unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_22, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_204(4))
			{
				return 0;
			}
			if (func_205(unk_0xD4E735F4B6A956AC(), 7))
			{
				return 0;
			}
			if (unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_22, 0) || unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_22, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_204(4))
			{
				return 0;
			}
			if (func_205(unk_0xD4E735F4B6A956AC(), 7))
			{
				return 0;
			}
			if (unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_22, 0) || unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_22, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_204(4))
			{
				return 0;
			}
			if (func_205(unk_0xD4E735F4B6A956AC(), 7))
			{
				return 0;
			}
			if (unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_22, 0) || unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_22, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_204(4))
			{
				return 0;
			}
			if (func_205(unk_0xD4E735F4B6A956AC(), 7))
			{
				return 0;
			}
			if (unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_22, 0) || unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_22, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_204(4))
			{
				return 0;
			}
			if (func_205(unk_0xD4E735F4B6A956AC(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_204(4))
			{
				return 0;
			}
			if (func_205(unk_0xD4E735F4B6A956AC(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_204(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_230(unk_0x1483A8AE554B8B2B(iVar0), 0, 1))
		{
			if (unk_0x05EFB6A616B6FADE(Global_2423801[iVar0 /*413*/].f_208, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_205(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_208, iParam1);
}

int func_206()
{
	var uVar0;
	
	func_213(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			return 1;
		}
	}
	if (func_212())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_211())
	{
		return 1;
	}
	if (func_210(157))
	{
		if (!func_209())
		{
			return 1;
		}
	}
	if (func_210(155))
	{
		return 1;
	}
	if (!unk_0x18F86E07E41D913F())
	{
		return 1;
	}
	if (func_207() != 0)
	{
		if (unk_0x8B1574454E8C2421(func_207()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_207()
{
	switch (func_208())
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

int func_208()
{
	return Global_25459;
}

bool func_209()
{
	return Global_2448386.f_587;
}

int func_210(int iParam0)
{
	if (unk_0xF10AFD11E6EE81BF(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_211()
{
	return Global_2458191;
}

bool func_212()
{
	return Global_2448386.f_582;
}

void func_213(var uParam0)
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
					func_214(iVar0);
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

void func_214(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x8866A4E42CDA3EF1(1, iParam0, &vVar0, 3))
	{
		if (func_230(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xEE978C39384D834F(vVar0.y);
			if (unk_0xDC5D81351D6A4DDB(iVar1))
			{
				if (unk_0x5D7DFE2058701942(iVar1, 0))
				{
					iVar2 = unk_0xCAEB6CE71A2C7212(iVar1, 0);
					if (unk_0xEB1A41F6F719807C(iVar2, vVar0.z) && unk_0xB592B7A61F21E7A5())
					{
						if (func_215(iVar2, &bVar3))
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

int func_215(int iParam0, var uParam1)
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

void func_216()
{
	wait(0);
}

void func_217()
{
	if (unk_0xCE3CB618AFE55EFB(iLocal_109))
	{
		unk_0xE1623437A3194332(&iLocal_109);
	}
	func_220();
	if (func_200() == 4 && Local_103.f_10 != 0)
	{
		unk_0xFC00A668AFC2126D(Local_103.f_10, 0);
	}
	unk_0xFA57C719261AA55D(&(Global_2524719.f_4578), 1);
	func_219(17, 0);
	func_218();
}

void func_218()
{
	unk_0x8F1A9FE6D91AAFEB();
}

void func_219(int iParam0, bool bParam1)
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

void func_220()
{
	if (Local_103.f_12 == 2)
	{
		unk_0x3A95A0A3221D4208(&uLocal_107);
	}
}

void func_221(struct<21> Param0)
{
	func_228(func_229(Param0), Param0);
	unk_0x7F2854D39965C275(4);
	unk_0xA721D9ED3827732A(1);
	func_227(0, -1, 0);
	unk_0xF82A3961787FA0A4(&Local_103, 49);
	unk_0x8BFA7A7AB1D02137(&vLocal_105, 97);
	if (!func_226())
	{
		func_217();
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		unk_0x2F3193E06C2EFF44(0);
		if (unk_0x45F99485D7E1C29A())
		{
			func_222();
			Local_103.f_8 = func_5();
		}
		func_219(17, 1);
		vLocal_105[unk_0xD60943E3BE730BF0() /*3*/] = 0;
	}
	else
	{
		func_217();
	}
}

void func_222()
{
	func_225();
	Local_103.f_12 = unk_0x22C775856F4633CA(0, 3);
	if (Local_103.f_12 == 1 || Local_103.f_12 == 2)
	{
		Local_103.f_15 = unk_0x22C775856F4633CA(0, 5);
		if (Local_103.f_12 == 1)
		{
			func_224(&(Local_103.f_16), &(Local_103.f_19));
		}
		else
		{
			func_224(&(Local_103.f_20), &(Local_103.f_23));
		}
		func_223();
	}
	Local_103.f_14 = unk_0x22C775856F4633CA(0, 3);
	if (Global_262145.f_7994 >= 0 && Global_262145.f_7994 < 5)
	{
		Local_103.f_13 = Global_262145.f_7994;
	}
	else
	{
		Local_103.f_13 = unk_0x22C775856F4633CA(0, 5);
	}
}

void func_223()
{
	switch (Local_103.f_15)
	{
		case 0:
			Local_103.f_24 = { -2195.782f, -420.2502f, 12.0819f };
			Local_103.f_27 = 117.3927f;
			Local_103.f_28[0 /*3*/] = { -2189.975f, -422.8502f, 12.0709f };
			Local_103.f_38[0] = 152.6699f;
			Local_103.f_28[1 /*3*/] = { -2184.031f, -400.948f, 12.2027f };
			Local_103.f_38[1] = 337.9892f;
			Local_103.f_28[2 /*3*/] = { -2175.282f, -426.3756f, 12.128f };
			Local_103.f_38[2] = 12.2947f;
			break;
		
		case 1:
			Local_103.f_24 = { -981.5774f, -1487.319f, 4.5867f };
			Local_103.f_27 = 300.0815f;
			Local_103.f_28[0 /*3*/] = { -977.8269f, -1494.568f, 4.5867f };
			Local_103.f_38[0] = 0.731f;
			Local_103.f_28[1 /*3*/] = { -977.7324f, -1491.717f, 4.5867f };
			Local_103.f_38[1] = 173.7717f;
			Local_103.f_28[2 /*3*/] = { -954.6693f, -1486.713f, 4.16f };
			Local_103.f_38[2] = 304.8721f;
			break;
		
		case 2:
			Local_103.f_24 = { 697.3923f, -1375.27f, 25.196f };
			Local_103.f_27 = 111.1953f;
			Local_103.f_28[0 /*3*/] = { 717.8624f, -1360.491f, 25.0461f };
			Local_103.f_38[0] = 55.1674f;
			Local_103.f_28[1 /*3*/] = { 703.9843f, -1361.094f, 24.6728f };
			Local_103.f_38[1] = 306.7133f;
			Local_103.f_28[2 /*3*/] = { 707.1707f, -1388.706f, 25.2759f };
			Local_103.f_38[2] = 204.5666f;
			break;
		
		case 3:
			Local_103.f_24 = { -258.5791f, 302.4799f, 91.0086f };
			Local_103.f_27 = 180.4109f;
			Local_103.f_28[0 /*3*/] = { -244.9193f, 299.3712f, 91.0424f };
			Local_103.f_38[0] = 43.0354f;
			Local_103.f_28[1 /*3*/] = { -248.7361f, 305.6155f, 91.1444f };
			Local_103.f_38[1] = 191.8736f;
			Local_103.f_28[2 /*3*/] = { -232.4524f, 299.4706f, 91.2088f };
			Local_103.f_38[2] = 199.8353f;
			break;
		
		case 4:
			Local_103.f_24 = { 862.7026f, 2875.148f, 56.9868f };
			Local_103.f_27 = 206.7217f;
			Local_103.f_28[0 /*3*/] = { 880.2893f, 2862.074f, 55.6697f };
			Local_103.f_38[0] = 191.0122f;
			Local_103.f_28[1 /*3*/] = { 865.2399f, 2853.536f, 56.2583f };
			Local_103.f_38[1] = 305.8056f;
			Local_103.f_28[2 /*3*/] = { 867.6559f, 2841.155f, 56.944f };
			Local_103.f_38[2] = 235.4465f;
			break;
	}
}

void func_224(var uParam0, var uParam1)
{
	switch (Local_103.f_15)
	{
		case 0:
			*uParam0 = { -2192.39f, -419.3334f, 12.0959f };
			*uParam1 = 71.2404f;
			break;
		
		case 1:
			*uParam0 = { -977.0366f, -1482.866f, 4.0099f };
			*uParam1 = 124.7807f;
			break;
		
		case 2:
			*uParam0 = { 702.5064f, -1370.477f, 25.0573f };
			*uParam1 = 279.9129f;
			break;
		
		case 3:
			*uParam0 = { -253.3582f, 299.4982f, 90.9592f };
			*uParam1 = 184.8169f;
			break;
		
		case 4:
			*uParam0 = { 868.8133f, 2868.439f, 55.9186f };
			*uParam1 = 200.5778f;
			break;
	}
}

void func_225()
{
	int iVar0;
	
	iVar0 = unk_0x22C775856F4633CA(0, 8);
	if (Global_262145.f_7993 >= 0 && Global_262145.f_7993 < 8)
	{
		iVar0 = Global_262145.f_7993;
	}
	switch (iVar0)
	{
		case 0:
			if (func_14())
			{
				Local_103.f_10 = joaat("baller");
			}
			else
			{
				Local_103.f_10 = joaat("zion");
			}
			if (func_14())
			{
				Local_103.f_11 = joaat("g_m_y_ballaorig_01");
			}
			else
			{
				Local_103.f_11 = joaat("g_m_y_ballaeast_01");
			}
			break;
		
		case 1:
			if (func_14())
			{
				Local_103.f_10 = joaat("emperor");
			}
			else
			{
				Local_103.f_10 = joaat("cavalcade2");
			}
			if (func_14())
			{
				Local_103.f_11 = joaat("g_m_y_mexgoon_02");
			}
			else
			{
				Local_103.f_11 = joaat("g_f_y_vagos_01");
			}
			break;
		
		case 2:
			if (func_14())
			{
				Local_103.f_10 = joaat("daemon");
			}
			else
			{
				Local_103.f_10 = joaat("gburrito");
			}
			if (func_14())
			{
				Local_103.f_11 = joaat("g_m_y_lost_01");
			}
			else
			{
				Local_103.f_11 = joaat("g_f_y_lost_01");
			}
			break;
		
		case 3:
			if (func_14())
			{
				Local_103.f_10 = joaat("pcj");
			}
			else
			{
				Local_103.f_10 = joaat("bjxl");
			}
			if (func_14())
			{
				Local_103.f_11 = joaat("g_m_m_chigoon_02");
			}
			else
			{
				Local_103.f_11 = joaat("g_m_m_chigoon_01");
			}
			break;
		
		case 4:
			if (func_14())
			{
				Local_103.f_10 = joaat("rocoto");
			}
			else
			{
				Local_103.f_10 = joaat("emperor");
			}
			if (func_14())
			{
				Local_103.f_11 = joaat("g_m_m_armgoon_01");
			}
			else
			{
				Local_103.f_11 = joaat("g_m_y_armgoon_02");
			}
			break;
		
		case 5:
			if (func_14())
			{
				Local_103.f_10 = joaat("journey");
			}
			else
			{
				Local_103.f_10 = joaat("sandking");
			}
			if (func_14())
			{
				Local_103.f_11 = joaat("a_m_m_hillbilly_02");
			}
			else
			{
				Local_103.f_11 = joaat("a_m_m_hillbilly_01");
			}
			break;
		
		case 6:
			if (func_14())
			{
				Local_103.f_10 = joaat("habanero");
			}
			else
			{
				Local_103.f_10 = joaat("sanchez2");
			}
			if (func_14())
			{
				Local_103.f_11 = joaat("g_m_y_salvagoon_01");
			}
			else
			{
				Local_103.f_11 = joaat("g_m_y_salvagoon_02");
			}
			break;
		
		case 7:
			if (func_14())
			{
				Local_103.f_10 = joaat("buffalo2");
			}
			else
			{
				Local_103.f_10 = joaat("dubsta");
			}
			if (func_14())
			{
				Local_103.f_11 = joaat("g_m_y_strpunk_01");
			}
			else
			{
				Local_103.f_11 = joaat("g_m_y_strpunk_02");
			}
			break;
	}
}

int func_226()
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
		if (func_212())
		{
			return 0;
		}
		if (func_210(155))
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

int func_227(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBF19BA6420EC428C();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_218();
			}
			else
			{
				return 0;
			}
		}
		if (!func_48())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x4C9BACA8D249CB13())
				{
					if (!bParam2)
					{
						func_218();
					}
					else
					{
						return 0;
					}
				}
				if (func_212())
				{
					if (!bParam2)
					{
						func_218();
					}
					else
					{
						return 0;
					}
				}
				if (func_210(155))
				{
					if (!bParam2)
					{
						func_218();
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
					func_218();
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
				func_218();
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
			func_218();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_228(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		func_218();
	}
	unk_0x1B0D16DC60698F88(iParam0, 0, Param1.f_16);
}

int func_229(int iParam0)
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

int func_230(int iParam0, bool bParam1, bool bParam2)
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

