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
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	var uLocal_124[4] = { 0, 0, 0, 0 };
	var uLocal_125 = 0;
	bool bLocal_126 = 0;
	bool bLocal_127 = 0;
	vector3 vLocal_128 = { 0f, 0f, 0f };
	int iLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	struct<22> Local_137 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_138[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<21> Local_139 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0x4C9BACA8D249CB13())
	{
		if (!func_880(ScriptParam_139))
		{
			func_832();
		}
	}
	while (true)
	{
		func_831();
		if (func_824())
		{
			func_832();
		}
		if (func_818(1))
		{
			func_832();
		}
		switch (func_817(unk_0xD60943E3BE730BF0()))
		{
			case 0:
				if (func_816() == 1)
				{
					func_815(1);
					func_799();
				}
				break;
			
			case 1:
				if (func_816() == 1)
				{
					func_32();
				}
				else if (func_816() == 3)
				{
					func_815(3);
				}
				break;
			
			case 3:
				func_832();
				break;
		}
		if (unk_0x45F99485D7E1C29A())
		{
			if (func_816() != 3 && func_31())
			{
				func_30(3);
			}
			switch (func_816())
			{
				case 0:
					if (func_23())
					{
						func_30(1);
					}
					break;
				
				case 1:
					if (func_1())
					{
						func_30(3);
					}
					break;
				
				case 3:
					func_832();
					break;
				}
		}
	}
}

int func_1()
{
	var uVar0;
	bool bVar1;
	
	func_22();
	switch (Local_137.f_1)
	{
		case 0:
			if (!func_21(&(Local_137.f_10)))
			{
				func_20(&(Local_137.f_10), 0, 0);
			}
			else if (func_19(&(Local_137.f_10), Global_262145.f_12376, 0))
			{
				unk_0x2BCFB39E86340DAA(&(Local_137.f_2), 4);
				func_18(2);
			}
			if (!func_17(Local_137.f_7))
			{
				if (func_13((Global_262145.f_12381 - 1), &uVar0, 1123024896, 0))
				{
					func_18(1);
				}
			}
			if (unk_0x05EFB6A616B6FADE(Local_137.f_2, 1))
			{
				func_18(2);
			}
			if (func_12(Local_137.f_5) || func_10(Local_137.f_5, 1, 0))
			{
				unk_0x2BCFB39E86340DAA(&(Local_137.f_2), 2);
				func_18(2);
			}
			break;
		
		case 1:
			if (!func_21(&(Local_137.f_12)))
			{
				func_20(&(Local_137.f_12), 0, 0);
			}
			else
			{
				if (!func_21(&(Local_137.f_16)))
				{
					if (!func_13(Global_262145.f_12381, &uVar0, 1123024896, 0))
					{
						func_9(&(Local_137.f_16), 0, 0);
						unk_0x2BCFB39E86340DAA(&(Local_137.f_2), 6);
					}
				}
				else if (!func_13(Global_262145.f_12381, &uVar0, 1123024896, 0))
				{
					if (func_19(&(Local_137.f_16), 20000, 0))
					{
						unk_0x2BCFB39E86340DAA(&(Local_137.f_2), 2);
					}
				}
				else
				{
					func_8(&(Local_137.f_16));
					func_9(&(Local_137.f_18), 0, 0);
					unk_0xFA57C719261AA55D(&(Local_137.f_2), 6);
				}
				if (func_21(&(Local_137.f_18)))
				{
					if (func_19(&(Local_137.f_18), 5000, 0))
					{
						func_8(&(Local_137.f_18));
					}
				}
				bVar1 = func_7();
				if (func_19(&(Local_137.f_12), Global_262145.f_12377, 0) || bVar1)
				{
					func_18(2);
					if (!bVar1)
					{
						unk_0x2BCFB39E86340DAA(&(Local_137.f_2), 0);
					}
					else
					{
						func_2();
					}
				}
			}
			if (func_12(Local_137.f_5) || func_10(Local_137.f_5, 1, 0))
			{
				unk_0x2BCFB39E86340DAA(&(Local_137.f_2), 2);
				func_18(2);
			}
			break;
		
		case 2:
			if (!func_21(&(Local_137.f_14)))
			{
				func_20(&(Local_137.f_14), 0, 0);
			}
			else if (func_19(&(Local_137.f_14), 15000, 0))
			{
				func_18(3);
			}
			break;
		
		case 3:
			return 1;
	}
	return 0;
}

void func_2()
{
	struct<14> Var0;
	struct<14> Var1;
	struct<14> Var2;
	
	if (!unk_0x05EFB6A616B6FADE(Local_137.f_2, 5))
	{
		if (unk_0x05EFB6A616B6FADE(Local_137.f_2, 3))
		{
			Var0 = 713068249;
			Var0.f_1 = unk_0xD4E735F4B6A956AC();
			Var0.f_2 = 1128583433;
			Var0.f_10 = func_6();
			func_3(Var0, func_4());
			unk_0x2BCFB39E86340DAA(&(Local_137.f_2), 5);
		}
		else if (unk_0x05EFB6A616B6FADE(Local_137.f_2, 0))
		{
			Var1 = 713068249;
			Var1.f_1 = unk_0xD4E735F4B6A956AC();
			Var1.f_2 = -101215037;
			func_3(Var1, func_4());
			unk_0x2BCFB39E86340DAA(&(Local_137.f_2), 5);
		}
		else if (unk_0x05EFB6A616B6FADE(Local_137.f_2, 2) || unk_0x05EFB6A616B6FADE(Local_137.f_2, 1))
		{
			Var2 = 713068249;
			Var2.f_1 = unk_0xD4E735F4B6A956AC();
			Var2.f_2 = 2128648125;
			func_3(Var2, func_4());
			unk_0x2BCFB39E86340DAA(&(Local_137.f_2), 5);
		}
	}
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

int func_4()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x1483A8AE554B8B2B(iVar1);
		if (func_5(iVar2, 0, 0))
		{
			if (!unk_0x05EFB6A616B6FADE(vLocal_138[iVar1 /*3*/].f_2, 0))
			{
				unk_0x2BCFB39E86340DAA(&uVar0, iVar2);
			}
		}
		iVar1++;
	}
	return uVar0;
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
	return Local_137.f_6;
}

int func_7()
{
	if ((((unk_0x05EFB6A616B6FADE(Local_137.f_2, 0) || unk_0x05EFB6A616B6FADE(Local_137.f_2, 1)) || unk_0x05EFB6A616B6FADE(Local_137.f_2, 2)) || unk_0x05EFB6A616B6FADE(Local_137.f_2, 3)) || unk_0x05EFB6A616B6FADE(Local_137.f_2, 4))
	{
		return 1;
	}
	return 0;
}

void func_8(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_9(var uParam0, bool bParam1, bool bParam2)
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

int func_10(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_11())
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

int func_11()
{
	return -1;
}

bool func_12(int iParam0)
{
	return Global_1589747[iParam0 /*790*/].f_196 != 0;
}

int func_13(int iParam0, var uParam1, float fParam2, bool bParam3)
{
	int iVar0;
	float fVar1;
	
	iVar0 = unk_0xEE978C39384D834F(func_16());
	if (!unk_0xDC5D81351D6A4DDB(iVar0))
	{
		return 0;
	}
	*uParam1 = func_15(iVar0, Local_137.f_7, 0);
	if (*uParam1 > IntToFloat(iParam0))
	{
		return 0;
	}
	fVar1 = unk_0xDB684DA32A9BAB5E(iVar0);
	*uParam1 = func_14(*uParam1, fVar1);
	if (fVar1 > fParam2 && !bParam3)
	{
		return 0;
	}
	return 1;
}

float func_14(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_15(int iParam0, vector3 vParam1, bool bParam2)
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

int func_16()
{
	return Local_137.f_5;
}

int func_17(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_18(int iParam0)
{
	Local_137.f_1 = iParam0;
}

int func_19(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_20(uParam0, bParam2, 0);
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

void func_20(var uParam0, bool bParam1, bool bParam2)
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

bool func_21(var uParam0)
{
	return uParam0->f_1;
}

void func_22()
{
	int iVar0;
	
	if (!unk_0x05EFB6A616B6FADE(Local_137.f_2, 1))
	{
		if (!unk_0xC77FA683E9BB485B(func_16()))
		{
			unk_0x2BCFB39E86340DAA(&(Local_137.f_2), 1);
		}
	}
	if (!unk_0x05EFB6A616B6FADE(Local_137.f_2, 1) && !unk_0x05EFB6A616B6FADE(Local_137.f_2, 2))
	{
		iVar0 = unk_0x679C4D4E80CF78DB(func_16());
		if (iVar0 >= 0 && iVar0 < 32)
		{
			if (unk_0x05EFB6A616B6FADE(vLocal_138[iVar0 /*3*/].f_2, 11))
			{
				unk_0x2BCFB39E86340DAA(&(Local_137.f_2), 2);
				if (Local_137.f_1 == 0)
				{
					func_18(3);
				}
			}
		}
	}
}

int func_23()
{
	vector3 vVar0[4];
	var uVar1[4];
	float fVar2;
	int iVar3;
	int iVar4;
	
	Local_137.f_5 = func_29();
	Local_137.f_6 = func_11();
	unk_0xC493ACDF92E249C7(&(Local_137.f_20), &(Local_137.f_21));
	vVar0[0 /*3*/] = { -1976.481f, -638.13f, 4.6219f };
	vVar0[1 /*3*/] = { 2306.744f, -400.686f, 86.3213f };
	vVar0[2 /*3*/] = { 3505.623f, 3787.041f, 28.9708f };
	vVar0[3 /*3*/] = { -1976.225f, 4546.3f, 56.0401f };
	iVar3 = 0;
	while (iVar3 <= 3)
	{
		uVar1[iVar3] = func_15(unk_0xA19140A5C42D8715(), vVar0[iVar3 /*3*/], 1);
		iVar3++;
	}
	fVar2 = uVar1[0];
	iVar4 = 1;
	iVar3 = 0;
	while (iVar3 <= 3)
	{
		if (uVar1[iVar3] < fVar2)
		{
			fVar2 = uVar1[iVar3];
			iVar4 = iVar3 + 1;
		}
		iVar3++;
	}
	Local_137.f_3 = iVar4;
	Local_137.f_7 = { func_24(Local_137.f_3) };
	return 1;
}

Vector3 func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x5E0F2F352218B916();
	switch (iParam0)
	{
		case 1:
			iVar1 = 6;
			iVar4 = 0;
			iVar5 = 7;
			break;
		
		case 2:
			iVar1 = 6;
			iVar4 = 8;
			iVar5 = 7;
			break;
		
		case 3:
			iVar1 = 5;
			iVar4 = 16;
			iVar5 = 6;
			break;
		
		case 4:
			iVar1 = 4;
			iVar4 = 24;
			iVar5 = 5;
			break;
	}
	unk_0xA270EEE5C9D0E760(iVar0);
	iVar2 = unk_0x7D0FAB1E21639B27(0, iVar1);
	iVar3 = func_28(2951, -1, 0);
	if (iVar5 > 1)
	{
		if (unk_0x05EFB6A616B6FADE(iVar3, iVar4))
		{
			iVar6 = iVar4 + 1;
			while (iVar6 <= (iVar4 + 1 + (iVar5 - 1)))
			{
				if (unk_0x05EFB6A616B6FADE(iVar3, iVar6))
				{
					if (iVar6 - iVar4 + 1) >= (iVar5 - 1)
					{
						iVar2 = 0;
					}
					else
					{
						iVar2 = (iVar6 - iVar4 + 1) + 1;
					}
					iVar6 = (iVar4 + 1 + (iVar5 - 1));
				}
				iVar6++;
			}
		}
	}
	iVar3 = 0;
	unk_0x2BCFB39E86340DAA(&iVar3, (iVar4 + 1 + iVar2));
	unk_0x2BCFB39E86340DAA(&iVar3, iVar4);
	func_25(2951, iVar3, -1, 1, 0);
	Local_137.f_4 = iVar3;
	switch (iParam0)
	{
		case 1:
			switch (iVar2)
			{
				case 0:
					return -472.415f, -1689.474f, 17.9477f;
				
				case 1:
					return -1654.092f, 213.143f, 59.6413f;
				
				case 2:
					return -1008.389f, -1020.496f, 1.1503f;
				
				case 3:
					return -604.266f, -142.684f, 38.0086f;
				
				case 4:
					return -1700.562f, -322.726f, 49.0851f;
				
				case 5:
					return -1158.28f, -383.876f, 50.7161f;
				
				case 6:
					return -1191.066f, -1491.259f, 3.3797f;
				
				default:
			}
			break;
		
		case 2:
			switch (iVar2)
			{
				case 0:
					return 160.142f, -1761.704f, 28.0984f;
				
				case 1:
					return 1097.841f, -554.319f, 54.7365f;
				
				case 2:
					return 191.932f, 124.653f, 96.9401f;
				
				case 3:
					return 323.693f, -867.527f, 28.1726f;
				
				case 4:
					return 1386.79f, -1689.002f, 61.0964f;
				
				case 5:
					return 968.623f, -3067.462f, 4.9008f;
				
				case 6:
					return 928.85f, -2270.156f, 29.5096f;
				
				default:
			}
			break;
		
		case 3:
			switch (iVar2)
			{
				case 0:
					return 1667.876f, 3710.527f, 33.0008f;
				
				case 1:
					return 2459.918f, 4827.391f, 34.4214f;
				
				case 2:
					return 1506.714f, 6513.564f, 19.8804f;
				
				case 3:
					return 2501.049f, 2639.483f, 42.5508f;
				
				case 4:
					return 2658.239f, 1542.729f, 23.4847f;
				
				case 5:
					return 1415.427f, 1819.726f, 102.3258f;
				
				default:
			}
			break;
		
		case 4:
			switch (iVar2)
			{
				case 0:
					return -194.476f, 6316.824f, 30.5625f;
				
				case 1:
					return -660.505f, 5677.562f, 30.7898f;
				
				case 2:
					return -1557.125f, 4561.964f, 18.5454f;
				
				case 3:
					return -159.803f, 2713.044f, 54.3232f;
				
				case 4:
					return -3240.385f, 1106.345f, 1.5823f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_25(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_26(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
}

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

int func_27()
{
	return Global_1312736;
}

int func_28(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_26(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_29()
{
	return Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_35;
}

void func_30(int iParam0)
{
	Local_137 = iParam0;
}

int func_31()
{
	if (Global_2524719.f_4883.f_34)
	{
		Global_2524719.f_4883.f_34 = 0;
		return 1;
	}
	return 0;
}

void func_32()
{
	bLocal_126 = func_5(func_16(), 0, 1);
	func_795();
	func_732();
	func_731();
	func_728();
	func_709();
	func_704();
	func_683();
	func_665();
	func_655();
	switch (vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_1)
	{
		case 0:
			if (func_654())
			{
				func_647(0);
			}
			else if (func_645(unk_0xD4E735F4B6A956AC(), func_16(), 0))
			{
				func_647(6);
			}
			break;
		
		case 1:
			if (func_654())
			{
				func_647(5);
				func_615(2);
				if (bLocal_126)
				{
					if (!unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 8))
					{
						func_613();
						unk_0x2BCFB39E86340DAA(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 8);
					}
				}
				if (!func_612(unk_0xD4E735F4B6A956AC(), 0))
				{
					func_611(unk_0xD4E735F4B6A956AC(), 0);
				}
				if (unk_0x05EFB6A616B6FADE(Local_137.f_2, 6))
				{
					func_647(4);
				}
			}
			else if (bLocal_126)
			{
				if (func_645(unk_0xD4E735F4B6A956AC(), func_16(), 0))
				{
					func_647(3);
					func_615(1);
				}
				else
				{
					func_615(0);
					if (unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 0))
					{
						func_647(8);
					}
					else
					{
						func_647(1);
					}
					if (func_610(unk_0xD60943E3BE730BF0()))
					{
						func_607();
						func_575();
					}
				}
			}
			if (!unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 7))
			{
				func_550(-1, 0, 0, -1, 0, 0);
				unk_0x2BCFB39E86340DAA(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 7);
			}
			func_428(&(Global_1358108.f_534), &Global_1358108, 27, &(Global_1358108.f_1), &(Global_1358108.f_117), -1, 0, 0);
			break;
		
		case 2:
			if (!func_645(unk_0xD4E735F4B6A956AC(), func_16(), 1))
			{
				if (!func_427(unk_0xD4E735F4B6A956AC(), 19))
				{
					func_317();
					return;
				}
			}
			if (func_654())
			{
				if (func_612(unk_0xD4E735F4B6A956AC(), 0))
				{
					func_316(unk_0xD4E735F4B6A956AC(), 0);
				}
				if (unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 11))
				{
					func_832();
					return;
				}
			}
			func_86();
			func_317();
			if (unk_0x05EFB6A616B6FADE(Local_137.f_2, 0))
			{
				if (func_654())
				{
					func_615(10);
				}
				else if (func_645(unk_0xD4E735F4B6A956AC(), func_16(), 0))
				{
					func_615(11);
				}
				else
				{
					func_615(6);
				}
				func_82(Local_137.f_5);
			}
			else if (unk_0x05EFB6A616B6FADE(Local_137.f_2, 1))
			{
				if (func_610(unk_0xD60943E3BE730BF0()))
				{
					if (!func_645(unk_0xD4E735F4B6A956AC(), Local_137.f_5, 1))
					{
						func_615(7);
					}
				}
				func_82(0);
			}
			else if (unk_0x05EFB6A616B6FADE(Local_137.f_2, 2))
			{
				if (func_654())
				{
					func_615(12);
				}
				else if (func_645(unk_0xD4E735F4B6A956AC(), func_16(), 0))
				{
					func_615(13);
				}
				else if (func_610(unk_0xD60943E3BE730BF0()))
				{
					func_615(14);
				}
				func_82(0);
			}
			else if (unk_0x05EFB6A616B6FADE(Local_137.f_2, 3))
			{
				if (func_654())
				{
					if (func_81())
					{
						func_615(9);
					}
					else
					{
						func_615(8);
					}
				}
				else if (Local_137.f_6 == unk_0xD4E735F4B6A956AC())
				{
					if (func_645(unk_0xD4E735F4B6A956AC(), func_16(), 0))
					{
						func_615(15);
					}
					else
					{
						func_615(3);
					}
				}
				else if (func_610(unk_0xD60943E3BE730BF0()))
				{
					if (func_81())
					{
						func_615(17);
					}
					else
					{
						func_615(4);
					}
				}
				func_82(Local_137.f_6);
			}
			else if (unk_0x05EFB6A616B6FADE(Local_137.f_2, 4))
			{
				if (func_654())
				{
					func_615(16);
				}
				func_82(0);
			}
			if (func_33(&uLocal_112, 1, 0))
			{
				func_815(3);
			}
			break;
		
		case 3:
			break;
	}
}

int func_33(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_80(29);
	if ((*uParam0 > 0 && !func_79()) && func_63(unk_0xD4E735F4B6A956AC()) != 0)
	{
		if (!func_60())
		{
			func_59();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_21(&(uParam0->f_3)))
			{
				func_20(&(uParam0->f_3), 0, 0);
			}
			else if (func_19(&(uParam0->f_3), 1000, 0))
			{
				unk_0x2BCFB39E86340DAA(&(Global_1666797.f_3), 2);
				if (bParam1)
				{
					unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4574), 0);
					func_20(&(uParam0->f_5), 0, 0);
				}
				func_20(&(uParam0->f_1), 0, 0);
				func_58(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_21(&(uParam0->f_5)))
			{
				if (func_19(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_48(iParam2);
				func_58(uParam0, 2);
			}
			break;
		
		case 2:
			func_48(0);
			if (func_19(&(uParam0->f_1), 15000, 0))
			{
				if (func_34(func_35(0)))
				{
					unk_0x135C61E339DABBAC(1);
				}
				func_58(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_19(&(uParam0->f_1), 23500, 0))
			{
				unk_0xFA57C719261AA55D(&(Global_2524719.f_4574), 1);
				unk_0xFA57C719261AA55D(&(Global_1666797.f_3), 2);
				func_58(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xFA57C719261AA55D(&(Global_2524719.f_4574), 1);
			unk_0xFA57C719261AA55D(&(Global_1666797.f_3), 2);
			return 1;
	}
	return 0;
}

int func_34(char* sParam0)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	return unk_0x3D94488A86ABB03F(0);
}

char* func_35(int iParam0)
{
	if (((func_46(unk_0xD4E735F4B6A956AC()) || func_43(unk_0xD4E735F4B6A956AC())) || func_39()) || iParam0)
	{
		if (func_43(unk_0xD4E735F4B6A956AC()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_36(func_38()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_37(iParam0, 0);
	return 0;
}

int func_37(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_38()
{
	return Global_1643357;
}

bool func_39()
{
	return (func_42() && func_40(func_29()));
}

bool func_40(int iParam0)
{
	return func_41(iParam0, 1);
}

int func_41(int iParam0, int iParam1)
{
	if (iParam0 != func_11())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_11())
		{
			if (Global_1625435[iParam0 /*560*/].f_11 == iParam0 && Global_1625435[iParam0 /*560*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_42()
{
	return Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/] == 148;
}

bool func_43(int iParam0)
{
	return func_37(func_44(iParam0), 0);
}

int func_44(int iParam0)
{
	if (func_45(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_33;
	}
	return -1;
}

int func_45(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_33 != -1 || (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_46(int iParam0)
{
	return func_47(func_44(iParam0));
}

int func_47(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/] == 148 && func_41(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_48(int iParam0)
{
	if (unk_0x05EFB6A616B6FADE(Global_2524719.f_4574, 0))
	{
		if (((((((((((!unk_0x49B680F5AF4359D0() && !unk_0x05EFB6A616B6FADE(Global_2524719.f_784, 2)) && func_5(unk_0xD4E735F4B6A956AC(), 1, 1)) && !Global_68494) && !Global_53362) && !unk_0x71364F510A1CB69F()) && !func_427(unk_0xD4E735F4B6A956AC(), 22)) && func_63(unk_0xD4E735F4B6A956AC()) != 0) && !func_56(func_57())) && !func_46(unk_0xD4E735F4B6A956AC())) && !func_55(func_44(unk_0xD4E735F4B6A956AC()))) && !func_54(func_44(unk_0xD4E735F4B6A956AC())))
		{
			unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4574), 1);
			func_53(func_35(iParam0), -1);
			func_49(1);
			unk_0xFA57C719261AA55D(&(Global_2524719.f_4574), 0);
		}
	}
}

void func_49(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_50(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_79())
	{
		unk_0xE11F00B4AC919F45(-1, "Boss_Message_Orange", sVar0, false);
	}
}

bool func_50(bool bParam0)
{
	return func_51(unk_0xD4E735F4B6A956AC(), bParam0);
}

bool func_51(int iParam0, bool bParam1)
{
	return func_52(iParam0, bParam1, 1);
}

int func_52(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_41(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1625435[iParam0 /*560*/].f_11;
	if (iVar0 != func_11() && Global_1625435[iVar0 /*560*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

void func_53(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, false, iParam1);
}

int func_54(int iParam0)
{
	switch (iParam0)
	{
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_57()
{
	char* sVar0;
	
	sVar0 = unk_0x61D2332983ACC05C();
	if (unk_0x3CAC2741CC1A631F(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "FMMC_TYPE_FMBB_SELL"))
	{
		return 237;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "FMMC_TYPE_FMBB_DEFEND"))
	{
		return 238;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "FMMC_TYPE_FMBB_SECURITY_VAN"))
	{
		return 239;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "FMMC_TYPE_FMBB_TARGET_PURSUIT"))
	{
		return 240;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "FMMC_TYPE_FMBB_JEWEL_STORE_GRAB"))
	{
		return 241;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "FMMC_TYPE_FMBB_BANK_JOB"))
	{
		return 242;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "FMMC_TYPE_FMBB_DATA_HACK"))
	{
		return 244;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "FMMC_TYPE_FMBB_INFILTRATION"))
	{
		return 248;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "FMMC_TYPE_FMBB_PHONECALL"))
	{
		return 249;
	}
	else if (unk_0x3CAC2741CC1A631F(sVar0, "FMMC_TYPE_FMBB_CLUB_MANAGEMENT"))
	{
		return 250;
	}
	return 0;
}

void func_58(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_59()
{
	Global_2459730 = 1;
}

int func_60()
{
	if (((((((func_44(unk_0xD4E735F4B6A956AC()) == 170 || func_44(unk_0xD4E735F4B6A956AC()) == 219) || func_44(unk_0xD4E735F4B6A956AC()) == 221) || func_44(unk_0xD4E735F4B6A956AC()) == 220) || func_44(unk_0xD4E735F4B6A956AC()) == 216) || func_44(unk_0xD4E735F4B6A956AC()) == 215) || func_44(unk_0xD4E735F4B6A956AC()) == 214) || func_44(unk_0xD4E735F4B6A956AC()) == 218)
	{
		return 1;
	}
	if (func_61(unk_0xD4E735F4B6A956AC()))
	{
		return 1;
	}
	return 0;
}

int func_61(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_62(Global_2423801[iParam0 /*413*/].f_309.f_4) == 2;
			}
		}
	}
	return 0;
}

int func_62(int iParam0)
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

int func_63(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_78(iParam0) && !func_77(iParam0)) && !unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_1, 8));
	bVar2 = func_76(iParam0);
	uVar3 = func_75();
	uVar4 = func_68();
	if ((bVar1 && (func_67(iParam0) || func_66(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_65(iParam0)) && !func_64(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2524719.f_4883.f_210 != iVar0)
	{
		Global_2524719.f_4883.f_210 = iVar0;
	}
	return iVar0;
}

bool func_64(int iParam0)
{
	return func_427(iParam0, 19);
}

int func_65(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_427(iParam0, 9);
	}
	return 0;
}

int func_66(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_1625435[iVar0 /*560*/].f_1, 0);
	}
	return 0;
}

int func_67(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_1625435[iVar0 /*560*/].f_1, 7);
	}
	return 0;
}

int func_68()
{
	if ((func_427(unk_0xD4E735F4B6A956AC(), 21) || func_427(unk_0xD4E735F4B6A956AC(), 22)) || func_73())
	{
		return 1;
	}
	if (func_69())
	{
		func_80(22);
		return 1;
	}
	return 0;
}

int func_69()
{
	if (func_45(unk_0xD4E735F4B6A956AC(), 0))
	{
		if ((func_75() && !func_72()) || func_71(unk_0xD4E735F4B6A956AC(), 21))
		{
			return 1;
		}
		else
		{
			func_70(27);
		}
	}
	return 0;
}

void func_70(int iParam0)
{
	unk_0xFA57C719261AA55D(&(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_4), iParam0);
}

bool func_71(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_208, iParam1);
}

bool func_72()
{
	return Global_1312416.f_1;
}

bool func_73()
{
	return func_74(306, -1);
}

int func_74(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2566070[iParam0 /*3*/][func_26(iParam1)];
	if (unk_0x57AA4E7564A22FCD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_75()
{
	return Global_1312416;
}

bool func_76(int iParam0)
{
	return func_427(iParam0, 20);
}

bool func_77(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_1, 2);
}

int func_78(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1625435[iVar0 /*560*/] != -1;
	}
	return 0;
}

bool func_79()
{
	return Global_2437022.f_2704[0 /*80*/].f_1 != 0;
}

void func_80(int iParam0)
{
	unk_0x2BCFB39E86340DAA(&(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_4), iParam0);
}

int func_81()
{
	if (Local_137.f_6 == func_11() || Local_137.f_5 == func_11())
	{
		return 0;
	}
	if (!func_645(Local_137.f_6, Local_137.f_5, 0))
	{
		return 0;
	}
	return 1;
}

void func_82(int iParam0)
{
	if (!unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 6))
	{
		if (iParam0 != func_11())
		{
			func_83(0, iParam0);
		}
		else
		{
			func_83(0, func_11());
		}
		unk_0x2BCFB39E86340DAA(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 6);
	}
}

void func_83(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_11())
	{
		if (unk_0xC77FA683E9BB485B(iParam1))
		{
			if (iParam1 == unk_0xD4E735F4B6A956AC())
			{
				iVar0 = 1;
			}
			else if (func_84(iParam1, unk_0xD4E735F4B6A956AC()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_5(unk_0xD4E735F4B6A956AC(), 1, 1))
		{
			unk_0xF10B3BC4F73177E5(unk_0xD4E735F4B6A956AC(), 0, 0);
			unk_0xDF341226C0B8BAC3(unk_0xD4E735F4B6A956AC(), 0);
			Global_2524719.f_4883.f_374 = unk_0x5E0F2F352218B916();
		}
	}
}

int func_84(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_11() && iParam1 != func_11())
	{
		iVar0 = func_85(iParam0);
		if (iVar0 != func_11())
		{
			return iVar0 == func_85(iParam1);
		}
	}
	return 0;
}

int func_85(int iParam0)
{
	if (iParam0 != func_11())
	{
		return Global_1625435[iParam0 /*560*/].f_11;
	}
	return func_11();
}

void func_86()
{
	struct<20> Var0;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	if (!unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 5))
	{
		if (unk_0x05EFB6A616B6FADE(Local_137.f_2, 3))
		{
			if (unk_0xD4E735F4B6A956AC() == func_6())
			{
				if (func_645(unk_0xD4E735F4B6A956AC(), func_16(), 0))
				{
					func_87(164, 0, &Var0, 0);
				}
				else
				{
					func_87(164, 1, &Var0, 0);
				}
			}
			else
			{
				func_87(164, 0, &Var0, 0);
			}
			unk_0x2BCFB39E86340DAA(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 5);
		}
		else if (unk_0x05EFB6A616B6FADE(Local_137.f_2, 0))
		{
			if (func_645(unk_0xD4E735F4B6A956AC(), func_16(), 1))
			{
				func_87(164, 1, &Var0, 0);
			}
			else
			{
				func_87(164, 0, &Var0, 0);
			}
			unk_0x2BCFB39E86340DAA(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 5);
		}
		else if (unk_0x05EFB6A616B6FADE(Local_137.f_2, 2) || unk_0x05EFB6A616B6FADE(Local_137.f_2, 1))
		{
			func_87(164, 0, &Var0, 0);
			unk_0x2BCFB39E86340DAA(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 5);
		}
	}
}

void func_87(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	bool bVar14;
	struct<2> Var15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	func_314(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (bParam3)
		{
			iVar1 = (iVar1 + Global_262145.f_18151);
		}
		else
		{
			iVar1 = (iVar1 + func_313(iParam0, uParam2->f_13));
		}
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = round((to_float(iVar1) / to_float(uParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_312(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_262145.f_18150);
		}
		iVar0 = round((to_float(iVar0) / to_float(uParam2->f_4)));
		iVar0 = round((IntToFloat(iVar0) * fVar2));
		iVar0 = round((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = round((to_float(iVar1) / to_float(uParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = round((to_float(iVar0) / to_float(uParam2->f_4)));
		iVar0 = round((IntToFloat(iVar0) * fVar2));
		iVar0 = round((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_310(iParam0))
	{
		if (bParam1)
		{
			if (func_309(unk_0xD4E735F4B6A956AC()) > 0)
			{
				func_308();
			}
			else
			{
				func_307();
			}
		}
		else
		{
			func_306();
		}
	}
	func_290(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_288(iParam0, uParam2, &iVar0, &iVar5);
	func_266(iParam0, uParam2, &iVar0, &iVar5);
	func_252(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_235(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2524719.f_4883.f_373 = iVar4;
	}
	else
	{
		Global_2524719.f_4883.f_373 = iVar5;
	}
	iVar8 = func_29();
	if (iVar8 != func_11() && iParam0 != 148)
	{
		if (func_234(unk_0xD4E735F4B6A956AC(), 0))
		{
			if (!func_645(unk_0xD4E735F4B6A956AC(), iVar8, 1))
			{
				func_191(&iVar0, 1);
			}
		}
	}
	func_186(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1666806.f_10 = iVar1;
		func_185();
		func_135(0, unk_0xA19140A5C42D8715(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1666806.f_9 = iVar0;
		iVar13 = func_134();
		if (iVar13 != func_11())
		{
			func_133(iVar13, &uVar11, &uVar12);
		}
		bVar14 = !func_132(1);
		if (iParam0 == 168)
		{
			if (!func_131())
			{
				unk_0x0EA92EE1DC50588F(iVar0, iVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_130())
			{
				if (!func_131())
				{
					Var15 = { func_129() };
					unk_0x488ED098B35F9C0C(iVar0, unk_0xFEB6EEC0545AF7AA(func_128(Var15)), func_127(Var15), iVar5);
				}
			}
			else if (func_131())
			{
				func_115(-856006867, iVar0, &iVar16, 0, 1, 0);
				Global_4262927[iVar16 /*80*/].f_6 = uVar11;
				Global_4262927[iVar16 /*80*/].f_7 = uVar12;
				Global_4262927[iVar16 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0x0EA92EE1DC50588F(iVar0, iVar5);
			}
		}
		else if (iParam0 == 226)
		{
			if (func_113())
			{
				if (!func_131())
				{
					unk_0x488ED098B35F9C0C(iVar0, unk_0xFEB6EEC0545AF7AA(func_128(func_112(unk_0xD4E735F4B6A956AC()))), 5, iVar5);
				}
			}
			else if (func_131())
			{
				func_115(-856006867, iVar0, &iVar17, 0, 1, 0);
				Global_4262927[iVar17 /*80*/].f_6 = uVar11;
				Global_4262927[iVar17 /*80*/].f_7 = uVar12;
				Global_4262927[iVar17 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0x0EA92EE1DC50588F(iVar0, iVar5);
			}
		}
		else if (iParam0 == 230)
		{
			if (func_113())
			{
				if (!func_131())
				{
					iVar18 = func_108(uParam2->f_16, iVar5);
					iVar19 = iVar0;
					if (iVar18 > 0)
					{
						iVar19 = (iVar19 - iVar18);
					}
					if (iVar7 > 0)
					{
						iVar19 = (iVar19 - iVar7);
					}
					unk_0xAB7C948D93FDB2B8(iVar19, iVar5, iVar7, iVar18, uParam2->f_16);
				}
			}
			else if (func_131())
			{
				func_115(463142405, iVar0, &iVar20, 0, 1, 0);
				Global_4262927[iVar20 /*80*/].f_6 = uVar11;
				Global_4262927[iVar20 /*80*/].f_7 = uVar12;
				Global_4262927[iVar20 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0x9238E1CFDB3AF306(uVar11, uVar12, iVar0, bVar14);
			}
		}
		else if (iParam0 == 233)
		{
			if (func_131())
			{
				func_115(1407278493, iVar0, &iVar21, 0, 1, 0);
				Global_4262927[iVar21 /*80*/].f_6 = uVar11;
				Global_4262927[iVar21 /*80*/].f_7 = uVar12;
				Global_4262927[iVar21 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xA131A1DA1516A78D(iVar0);
			}
		}
		else if (iParam0 == 237)
		{
			if (func_113())
			{
				if (!func_131())
				{
					unk_0x7C5AFBDB4A63099E(iVar0, uParam2->f_20, iVar5);
				}
			}
			else if (func_131())
			{
				func_115(-856006867, iVar0, &iVar22, 0, 1, 0);
				Global_4262927[iVar22 /*80*/].f_6 = uVar11;
				Global_4262927[iVar22 /*80*/].f_7 = uVar12;
				Global_4262927[iVar22 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0x0EA92EE1DC50588F(iVar0, iVar5);
			}
		}
		else if (iParam0 == 250)
		{
			if (func_131())
			{
				func_115(-961034881, iVar0, &iVar23, 0, 1, 0);
				Global_4262927[iVar23 /*80*/].f_6 = uVar11;
				Global_4262927[iVar23 /*80*/].f_7 = uVar12;
				Global_4262927[iVar23 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0x70275A5DEC872CA2(iVar0);
			}
		}
		else if (iParam0 == 249)
		{
			if (func_131())
			{
				func_115(1135468152, iVar0, &iVar24, 0, 1, 0);
				Global_4262927[iVar24 /*80*/].f_6 = uVar11;
				Global_4262927[iVar24 /*80*/].f_7 = uVar12;
				Global_4262927[iVar24 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xF03B782EEA848691(iVar0);
			}
		}
		else if (((((iParam0 == 242 || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240)
		{
			if (func_131())
			{
				func_115(-634726636, iVar0, &iVar25, 0, 1, 0);
				Global_4262927[iVar25 /*80*/].f_6 = uVar11;
				Global_4262927[iVar25 /*80*/].f_7 = uVar12;
				Global_4262927[iVar25 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xB509D8DC0549312F(iVar0);
			}
		}
		else if (func_131())
		{
			func_115(-856006867, iVar0, &iVar26, 0, 1, 0);
			Global_4262927[iVar26 /*80*/].f_6 = uVar11;
			Global_4262927[iVar26 /*80*/].f_7 = uVar12;
			Global_4262927[iVar26 /*80*/].f_8 = bVar14;
		}
		else
		{
			unk_0x77E6DB4DFEEE4518(uVar11, uVar12, iVar0, bVar14);
		}
		func_107(iParam0, iVar0);
		if (func_106(iParam0))
		{
			if (func_105(iParam0) > -1)
			{
				func_104(func_105(iParam0), iVar0);
			}
		}
		Global_2460387 = iVar0;
		func_9(&Global_2458654, 0, 0);
	}
	if (func_65(unk_0xD4E735F4B6A956AC()) || func_76(unk_0xD4E735F4B6A956AC()))
	{
		func_96(iParam0);
	}
	if (func_47(iParam0))
	{
		Global_1666824.f_13 = iVar0;
		Global_1666824.f_14 = iVar1;
	}
	if (func_55(iParam0))
	{
		Global_1666878.f_13 = iVar0;
		Global_1666878.f_14 = iVar1;
	}
	if (func_95(iParam0))
	{
		Global_1666941.f_12 = iVar0;
		Global_1666941.f_13 = iVar1;
	}
	if (func_94(iParam0))
	{
		Global_1666985.f_12 = iVar0;
		Global_1666985.f_13 = iVar1;
	}
	if (func_93(iParam0))
	{
		Global_1667039.f_12 = iVar0;
		Global_1667039.f_13 = iVar1;
	}
	if (func_54(iParam0))
	{
		if (func_92(iParam0))
		{
			Global_1667120.f_12 = iVar0;
			Global_1667120.f_13 = iVar1;
		}
		else if (func_88(iParam0))
		{
			Global_1667173.f_12 = iVar0;
			Global_1667173.f_13 = iVar1;
		}
	}
}

int func_88(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_89(func_90(unk_0xD4E735F4B6A956AC()))))
	{
		return 1;
	}
	return 0;
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_90(int iParam0)
{
	if (func_44(iParam0) == 237 || func_44(iParam0) == 250)
	{
		return func_91(iParam0);
	}
	return -1;
}

int func_91(int iParam0)
{
	if (func_45(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_176;
	}
	return -1;
}

int func_92(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

void func_96(int iParam0)
{
	if (func_103(unk_0xD4E735F4B6A956AC()) && func_130())
	{
		if (func_102(iParam0))
		{
			func_99(8657, -1);
		}
		else if (func_98(iParam0))
		{
			func_99(8659, -1);
		}
		else if (func_37(iParam0, 1))
		{
			func_99(8660, -1);
		}
		else if (func_97(iParam0))
		{
			func_99(8661, -1);
		}
	}
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_99(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_28(iParam0, func_26(iParam1), 0);
	iVar0++;
	if (!func_101(iParam0))
	{
		func_25(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_100(iParam0, iVar0, iParam1, 1);
	}
}

void func_100(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2535519[iParam0 /*3*/][func_26(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1378885[func_26(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1378891[func_26(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1378897[func_26(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1378903[func_26(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1378861[func_26(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1378867[func_26(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1378873[func_26(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1378879[func_26(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1378837[func_26(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1378843[func_26(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1378849[func_26(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1378855[func_26(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1378909[func_26(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1378915[func_26(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1378921[func_26(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1378927[func_26(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1378933[func_26(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1378939[func_26(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1378945[func_26(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1378951[func_26(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2568104[0 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2568104[1 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2568104[2 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2568104[3 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_2568229[func_26(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1378957[func_26(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1378963[func_26(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1378969[func_26(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1378975[func_26(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2568165[0 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2568165[1 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2568165[2 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2568165[3 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2568165[4 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2568232[0 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2568232[1 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2568232[2 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2568232[3 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2568232[4 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2568248[0 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2568248[1 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2568248[2 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2568248[3 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2568248[4 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2568165[5 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2568104[4 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2568264[func_26(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2568273[func_26(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2568267[func_26(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2568276[func_26(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2568270[func_26(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2568279[func_26(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2568282[func_26(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2568165[6 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2568104[5 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2568165[7 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2568104[6 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2568165[8 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2568104[7 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2568165[9 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2568104[8 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2568165[10 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2568104[9 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2568165[11 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2568104[10 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2568165[12 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2568104[11 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2568165[13 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2568104[12 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2568165[14 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2568104[13 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2568165[15 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2568104[14 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2568165[16 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2568104[15 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2568165[17 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2568104[16 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2568104[17 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2568104[18 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2568104[19 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_101(int iParam0)
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

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

bool func_103(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_115, 14);
}

void func_104(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23348 == 0 || Global_262145.f_23348 == 1)
		{
			if (!unk_0x47C01C0E6F4C1D06() || Global_262145.f_23348 == 1)
			{
				Global_2524719.f_272 = iParam0;
				if (iParam1 > Global_262145.f_6473)
				{
					iParam1 = Global_262145.f_6473;
				}
				Global_2524719.f_273 = iParam1;
				Global_2524719.f_274 = 0;
			}
		}
	}
}

int func_105(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_106(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_107(int iParam0, int iParam1)
{
	if (func_103(unk_0xD4E735F4B6A956AC()) && func_130())
	{
		if (func_102(iParam0) && iParam1 > 0)
		{
			func_25(8658, (func_28(8658, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

int func_108(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_111(iParam0, iParam1);
	fVar1 = (to_float(func_109(iParam0, iParam1)) * fVar0);
	return round(fVar1);
}

int func_109(int iParam0, int iParam1)
{
	return (func_110(iParam0) * iParam1);
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22174;
		
		case 0:
			return Global_262145.f_22175;
		
		case 1:
			return Global_262145.f_22176;
		
		case 2:
			return Global_262145.f_22177;
		
		case 3:
			return Global_262145.f_22178;
		
		case 4:
			return Global_262145.f_22179;
		
		case 5:
			return Global_262145.f_22180;
		
		case 6:
			return Global_262145.f_22181;
		
		case 7:
			return Global_262145.f_22182;
		
		default:
	}
	return 0;
}

float func_111(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = to_float(Global_262145.f_22184);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22186;
			fVar1 = to_float(Global_262145.f_22183);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22186;
			fVar1 = to_float(Global_262145.f_22183);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22187;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22187;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22187;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22188;
			fVar1 = to_float(Global_262145.f_22185);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22188;
			fVar1 = to_float(Global_262145.f_22185);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22188;
			fVar1 = to_float(Global_262145.f_22185);
			break;
	}
	iVar2 = floor((to_float(iParam1) / fVar1));
	return (to_float(iVar2) * fVar0);
}

int func_112(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return Global_1589747[iParam0 /*790*/].f_273.f_174[5 /*12*/];
}

bool func_113()
{
	return func_114(unk_0xD4E735F4B6A956AC());
}

int func_114(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_11())
		{
			return Global_1625435[iParam0 /*560*/].f_11 == iParam0;
		}
	}
	return 0;
}

void func_115(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_131())
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
				func_116(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_116(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -597978445:
			if (iParam1 > 0)
			{
				func_116(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
			func_116(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_116(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_131())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_27()) || unk_0x64BE694244417BDA())
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
			*uParam0 = func_123(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_122(1, iParam4);
			Global_4263477 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_117(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_117(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x2BCFB39E86340DAA(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_118(iParam0);
	}
}

void func_118(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_131())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_121(iParam0))
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
		func_119(&(Global_4262927[iParam0 /*80*/]));
	}
}

void func_119(var uParam0)
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
	func_120(&(uParam0->f_13));
	func_120(&(uParam0->f_13.f_13));
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

void func_120(var uParam0)
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

int func_121(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_5 == 1;
	}
	return 0;
}

void func_122(int iParam0, int iParam1)
{
	Global_2460521 = iParam1;
	Global_2460520 = iParam0;
}

int func_123(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4262927[iVar0 /*80*/].f_61.f_2 == 0)
		{
			if (!func_131())
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
				func_124(Global_4262927[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_124(struct<62> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_126(vVar0.y);
	if ((Global_262145.f_23427 && !Global_262145.f_23428) && !Global_262145.f_23429)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_125();
		unk_0x04F37AFC39D93909(1, &vVar0, 35, iVar1);
	}
}

void func_125()
{
	unk_0xD75A4240F0AD8613("AM_ARENA_SHP");
}

var func_126(int iParam0)
{
	var uVar0;
	
	unk_0x2BCFB39E86340DAA(&uVar0, iParam0);
	return uVar0;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

char* func_128(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_129()
{
	return Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_188;
}

bool func_130()
{
	return func_40(unk_0xD4E735F4B6A956AC());
}

int func_131()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

bool func_132(bool bParam0)
{
	return func_234(unk_0xD4E735F4B6A956AC(), bParam0);
}

void func_133(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1625435[iParam0 /*560*/].f_11.f_8[0];
	*uParam2 = Global_1625435[iParam0 /*560*/].f_11.f_8[1];
}

int func_134()
{
	return Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11;
}

int func_135(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_136(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_136(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_146(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xDC5D81351D6A4DDB(iParam1))
		{
			if (unk_0x281590680327CDEA(iParam1))
			{
				iVar1 = unk_0xA2EA4BA455370F3C(iParam1);
				func_142(unk_0x505186370955851F(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_137(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_137(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_140(iParam0, 1) };
	if (iParam0 == func_139(unk_0xA19140A5C42D8715()))
	{
		func_138(1);
	}
	func_142(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_138(int iParam0)
{
	Global_2437022.f_1886 = iParam0;
}

int func_139(int iParam0)
{
	return iParam0;
}

Vector3 func_140(int iParam0, bool bParam1)
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
	if (iParam0 == func_141(unk_0xA19140A5C42D8715()) && unk_0x1F7BAD75218F1A2C(unk_0x9F302D755A846102()) == 4)
	{
		vVar0 = { unk_0x3201284584C7CD83(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { unk_0xE2BBD32891C18569(iParam0, false) };
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

int func_141(int iParam0)
{
	return iParam0;
}

void func_142(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
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
			Global_2437022.f_1285[iVar1 /*30*/].f_4 = func_145(Global_2437022.f_1285[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437022.f_1285[iVar1 /*30*/].f_7 = unk_0xFFCC7EBF88BDEE54();
			Global_2437022.f_1285[iVar1 /*30*/].f_3 = iParam1;
			Global_2437022.f_1285[iVar1 /*30*/].f_8 = iParam2;
			Global_2437022.f_1285[iVar1 /*30*/].f_9 = func_144();
			Global_2437022.f_1285[iVar1 /*30*/].f_10 = func_143();
			StringCopy(&(Global_2437022.f_1285[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2437022.f_1285[iVar1 /*30*/].f_26 = unk_0x8039F92D4B9C6B71(unk_0xFFCC7EBF88BDEE54(), iParam4);
		}
	}
}

int func_143()
{
	if (Global_2437022.f_1886)
	{
		Global_2437022.f_1886 = 0;
		return 1;
	}
	Global_2437022.f_1886 = 0;
	return 0;
}

var func_144()
{
	var uVar0;
	
	uVar0 = Global_2437022.f_1888;
	Global_2437022.f_1888 = 1;
	return uVar0;
}

float func_145(vector3 vParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x499324B3EF19C288(unk_0x1E8E507A99E298E6(), vParam0, true);
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

var func_146(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_147(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_147(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_184(unk_0xD4E735F4B6A956AC()) || func_183(unk_0xD4E735F4B6A956AC()))
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
	else if (func_180() || func_179(unk_0xD4E735F4B6A956AC()))
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
					func_171(0, &iVar1);
					break;
				
				case 3:
					func_171(1, &iVar1);
					break;
				
				case 1:
					func_167(&iVar1);
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
			func_166(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_158((func_165(unk_0xD4E735F4B6A956AC()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x300F50ED36AA0A0C(iVar1, iParam8, iParam9);
				if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_2 != -1)
				{
					func_166(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_152(iVar1);
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
				func_148((func_150(unk_0xD4E735F4B6A956AC()) + iVar1));
			}
			else
			{
				func_148((func_150(unk_0xD4E735F4B6A956AC()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_148(int iParam0)
{
	if (func_177())
	{
		Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_5 = iParam0;
		func_149(joaat("mpply_globalxp"), iParam0);
	}
}

void func_149(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, 1);
	}
}

int func_150(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_5(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xD4E735F4B6A956AC())
			{
				return func_151(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589747[iParam0 /*790*/].f_211.f_5;
			}
		}
		else
		{
			return func_151(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_151(int iParam0)
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

void func_152(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_157(unk_0xD4E735F4B6A956AC()) };
	if (unk_0xD1832FEBE50B1AB1())
	{
		if (unk_0xE0B3F7A8017F6425(&Var0))
		{
			iVar1 = func_155(func_156(&Var0));
			if (iVar1 == 0)
			{
				func_154(&Global_1378824, iParam0);
				func_153(joaat("mpply_crew_local_xp_0"), Global_1378824);
			}
			else if (iVar1 == 1)
			{
				func_154(&Global_1378825, iParam0);
				func_153(joaat("mpply_crew_local_xp_1"), Global_1378825);
			}
			else if (iVar1 == 2)
			{
				func_154(&Global_1378826, iParam0);
				func_153(joaat("mpply_crew_local_xp_2"), Global_1378826);
			}
			else if (iVar1 == 3)
			{
				func_154(&Global_1378827, iParam0);
				func_153(joaat("mpply_crew_local_xp_3"), Global_1378827);
			}
			else if (iVar1 == 4)
			{
				func_154(&Global_1378828, iParam0);
				func_153(joaat("mpply_crew_local_xp_4"), Global_1378828);
			}
		}
	}
}

void func_153(int iParam0, int iParam1)
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

void func_154(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_155(int iParam0)
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

int func_156(var uParam0)
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

struct<13> func_157(int iParam0)
{
	struct<13> Var0;
	
	unk_0xE05C4303C26882C4(iParam0, &Var0, 13);
	return Var0;
}

void func_158(int iParam0, int iParam1, int iParam2)
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
				if (iParam0 < Global_1378945[func_26(-1)])
				{
					unk_0x300F50ED36AA0A0C(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1378945[func_26(-1)])
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
		if (func_164(unk_0xD4E735F4B6A956AC()))
		{
			Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_1 = iParam0;
			Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_6 = func_162(iParam0, 1);
		}
		func_100(639, iParam0, -1, 1);
		func_25(640, func_162(iParam0, 1), -1, 1, 0);
		Global_1378945[func_26(-1)] = iParam0;
		func_159(7, 0);
	}
}

void func_159(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_161(iParam0, iParam1))
	{
		iVar0 = func_160();
		Global_2458086[iVar0] = iParam0;
	}
}

int func_160()
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

int func_161(int iParam0, var uParam1)
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

int func_162(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_163(iParam0, 0);
}

int func_163(int iParam0, int iParam1)
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

int func_164(int iParam0)
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

int func_165(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xD4E735F4B6A956AC())
			{
				return Global_1378945[func_26(-1)];
			}
			else if (func_164(iParam0))
			{
				return Global_1589747[iParam0 /*790*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1378945[func_26(-1)];
	}
	return 0;
}

void func_166(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_28(iParam0, func_26(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_101(iParam0))
	{
		func_25(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_100(iParam0, iVar0, iParam2, 1);
	}
}

void func_167(int iParam0)
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
				if (unk_0xE46ECB9FD23D3264(iVar5) == iVar1 || func_170(unk_0xE46ECB9FD23D3264(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xD4E735F4B6A956AC())
					{
						if (func_169(unk_0xD4E735F4B6A956AC(), iVar5))
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
		iVar6 = round((func_168(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_168(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_168(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_169(int iParam0, int iParam1)
{
	if (unk_0xD1832FEBE50B1AB1())
	{
		Global_2503649 = { func_157(iParam0) };
		Global_2503662 = { func_157(iParam1) };
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

int func_170(int iParam0, int iParam1, int iParam2)
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

void func_171(bool bParam0, int iParam1)
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
				if (func_5(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xD4E735F4B6A956AC())
					{
						iVar1++;
						if (func_169(unk_0xD4E735F4B6A956AC(), iVar4))
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
			if (func_5(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xD4E735F4B6A956AC())
				{
					if (func_172(unk_0xD4E735F4B6A956AC(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_169(unk_0xD4E735F4B6A956AC(), iVar4))
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
		iVar5 = round((func_168(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_168(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_172(int iParam0, int iParam1)
{
	return vdist(func_173(iParam0), func_173(iParam1));
	return 0f;
}

Vector3 func_173(int iParam0)
{
	return unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iParam0), false);
}

int func_174(int iParam0)
{
	int iVar0;
	
	if (unk_0x5140B71AC6379F52() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_168(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_175(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x69E48309C7AE810E(iParam0) > func_165(unk_0xD4E735F4B6A956AC()))
		{
			iParam0 = -func_165(unk_0xD4E735F4B6A956AC());
		}
	}
	if (func_176(8000, 0, 0) > 0)
	{
		if (func_176(8000, 0, 0) < (iParam0 + func_165(unk_0xD4E735F4B6A956AC())))
		{
			iParam0 = (func_176(8000, 0, 0) - func_165(unk_0xD4E735F4B6A956AC()));
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
	return func_93(func_44(iParam0));
}

bool func_180()
{
	if (unk_0xD8B89B387D170E27())
	{
		return func_182();
	}
	return func_181(Global_4456448.f_130782);
}

int func_181(int iParam0)
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

bool func_182()
{
	return Global_2448386.f_16;
}

bool func_183(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 2;
}

bool func_184(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 7;
}

void func_185()
{
	Global_2459729 = 1;
}

void func_186(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_190(7))
	{
		return;
	}
	iVar0 = func_189(iParam0);
	iVar1 = func_188(iParam0);
	iVar2 = unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(Global_2524719.f_4883.f_259, unk_0xFFCC7EBF88BDEE54()));
	if (func_187(iParam0) != -1)
	{
		if (iVar2 > func_187(iParam0))
		{
			iVar2 = func_187(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12282)
	{
		iVar2 = Global_262145.f_12282;
	}
	iVar3 = floor((to_float(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_187(int iParam0)
{
	if (func_37(iParam0, 0) || func_98(iParam0))
	{
		return Global_262145.f_18356;
	}
	if (func_102(iParam0))
	{
		return Global_262145.f_18355;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18352;
		
		case 191:
			return Global_262145.f_18354;
		
		case 190:
			return Global_262145.f_18353;
		
		case 227:
			return Global_262145.f_20911;
		
		case 226:
			return Global_262145.f_20899;
		
		case 225:
			return Global_262145.f_20919;
		
		case 230:
			return Global_262145.f_22171;
		
		case 229:
			return Global_262145.f_22075;
		
		case 233:
			return Global_262145.f_22645;
		
		case 237:
			return Global_262145.f_23801;
		
		case 238:
			return Global_262145.f_23912;
		
		case 249:
			return Global_262145.f_23928;
		
		default:
	}
	return -1;
}

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12373;
		
		case 152:
			return Global_262145.f_12408;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12396;
		
		case 157:
			return Global_262145.f_12363;
		
		case 159:
			return Global_262145.f_12346;
		
		case 164:
			return Global_262145.f_12386;
		
		case 160:
			return Global_262145.f_12436;
		
		case 162:
			return Global_262145.f_12456;
		
		case 163:
			return Global_262145.f_12421;
		
		case 154:
			return Global_262145.f_12491;
		
		case 155:
			return Global_262145.f_12481;
		
		case 153:
			return Global_262145.f_12445;
		
		case 170:
			return Global_262145.f_14868;
		
		case 171:
			return Global_262145.f_14927;
		
		case 172:
			return Global_262145.f_14945;
		
		case 173:
			return Global_262145.f_14886;
		
		case 166:
			return Global_262145.f_14901;
		
		case 167:
			return Global_262145.f_14992;
		
		case 169:
			return Global_262145.f_14964;
		
		case 168:
			return Global_262145.f_14957;
		
		case 179:
			return Global_262145.f_18235;
		
		case 180:
			return Global_262145.f_18014;
		
		case 182:
			return Global_262145.f_18014;
		
		case 183:
			return Global_262145.f_18014;
		
		case 185:
			return Global_262145.f_18014;
		
		case 186:
			return Global_262145.f_18014;
		
		case 189:
			return Global_262145.f_18235;
		
		case 190:
			return Global_262145.f_17890;
		
		case 191:
			return Global_262145.f_17981;
		
		case 192:
			return Global_262145.f_17775;
		
		case 193:
			return Global_262145.f_18235;
		
		case 194:
			return Global_262145.f_18235;
		
		case 195:
			return Global_262145.f_18014;
		
		case 197:
			return Global_262145.f_18014;
		
		case 198:
			return Global_262145.f_18014;
		
		case 199:
			return Global_262145.f_18235;
		
		case 200:
			return Global_262145.f_18235;
		
		case 201:
			return Global_262145.f_18235;
		
		case 205:
			return Global_262145.f_18235;
		
		case 207:
			return Global_262145.f_18014;
		
		case 208:
			return Global_262145.f_18014;
		
		case 209:
			return Global_262145.f_18014;
		
		case 210:
			return Global_262145.f_18235;
		
		case 211:
			return Global_262145.f_18235;
		
		case 214:
			return Global_262145.f_19084;
		
		case 215:
			return Global_262145.f_19086;
		
		case 216:
			return Global_262145.f_19088;
		
		case 217:
			return Global_262145.f_19090;
		
		case 218:
			return Global_262145.f_19092;
		
		case 219:
			return Global_262145.f_19094;
		
		case 220:
			return Global_262145.f_19096;
		
		case 221:
			return Global_262145.f_19098;
		
		case 225:
			if (func_132(0) || func_50(0))
			{
				return Global_262145.f_20921;
			}
			break;
		
		case 226:
			if (func_132(0) || func_50(0))
			{
				return Global_262145.f_20901;
			}
			break;
		
		case 227:
			if (func_132(0) || func_50(0))
			{
				return Global_262145.f_20913;
			}
			break;
		
		case 229:
			if (func_132(0) || func_50(0))
			{
				return Global_262145.f_22077;
			}
			break;
		
		case 230:
			if (func_132(0) || func_50(0))
			{
				return Global_262145.f_22173;
			}
			break;
		
		case 233:
			if (func_132(0) || func_50(0))
			{
				return Global_262145.f_22644;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (func_132(0) || func_50(0))
			{
				return Global_262145.f_23803;
			}
			break;
		
		case 238:
			if (func_132(0) || func_50(0))
			{
				return Global_262145.f_23914;
			}
			break;
		
		case 249:
			if (func_132(0) || func_50(0))
			{
				return Global_262145.f_23930;
			}
			break;
	}
	return 0;
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12372;
		
		case 152:
			return Global_262145.f_12407;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12395;
		
		case 157:
			return Global_262145.f_12362;
		
		case 159:
			return Global_262145.f_12345;
		
		case 164:
			return Global_262145.f_12385;
		
		case 160:
			return Global_262145.f_12435;
		
		case 162:
			return Global_262145.f_12455;
		
		case 163:
			return Global_262145.f_12420;
		
		case 154:
			return Global_262145.f_12490;
		
		case 155:
			return Global_262145.f_12480;
		
		case 153:
			return Global_262145.f_12444;
		
		case 170:
			return Global_262145.f_14867;
		
		case 171:
			return Global_262145.f_14926;
		
		case 172:
			return Global_262145.f_14944;
		
		case 173:
			return Global_262145.f_14885;
		
		case 166:
			return Global_262145.f_14900;
		
		case 179:
			return Global_262145.f_18234;
		
		case 180:
			return Global_262145.f_18013;
		
		case 182:
			return Global_262145.f_18013;
		
		case 183:
			return Global_262145.f_18013;
		
		case 185:
			return Global_262145.f_18013;
		
		case 186:
			return Global_262145.f_18013;
		
		case 189:
			return Global_262145.f_18234;
		
		case 193:
			return Global_262145.f_18234;
		
		case 194:
			return Global_262145.f_18234;
		
		case 195:
			return Global_262145.f_18013;
		
		case 197:
			return Global_262145.f_18013;
		
		case 198:
			return Global_262145.f_18013;
		
		case 199:
			return Global_262145.f_18234;
		
		case 200:
			return Global_262145.f_18234;
		
		case 201:
			return Global_262145.f_18234;
		
		case 205:
			return Global_262145.f_18234;
		
		case 207:
			return Global_262145.f_18013;
		
		case 208:
			return Global_262145.f_18013;
		
		case 209:
			return Global_262145.f_18013;
		
		case 210:
			return Global_262145.f_18234;
		
		case 211:
			return Global_262145.f_18234;
		
		case 190:
			if (!func_113())
			{
				return Global_262145.f_17889;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_113())
			{
				return Global_262145.f_17980;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_113())
			{
				return Global_262145.f_17774;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19083;
		
		case 215:
			return Global_262145.f_19085;
		
		case 216:
			return Global_262145.f_19087;
		
		case 217:
			return Global_262145.f_19089;
		
		case 218:
			return Global_262145.f_19091;
		
		case 219:
			return Global_262145.f_19093;
		
		case 220:
			return Global_262145.f_19095;
		
		case 221:
			return Global_262145.f_19097;
		
		case 225:
			if (func_50(0))
			{
				return Global_262145.f_20920;
			}
			break;
		
		case 226:
			if (func_50(0))
			{
				return Global_262145.f_20900;
			}
			break;
		
		case 227:
			if (func_50(0))
			{
				return Global_262145.f_20912;
			}
			break;
		
		case 229:
			if (func_50(0))
			{
				return Global_262145.f_22076;
			}
			break;
		
		case 230:
			if (func_50(0))
			{
				return Global_262145.f_22172;
			}
			break;
		
		case 233:
			if (func_50(0))
			{
				return Global_262145.f_22646;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_50(0))
			{
				return Global_262145.f_23802;
			}
			break;
		
		case 238:
			if (func_50(0))
			{
				return Global_262145.f_23913;
			}
			break;
		
		case 249:
			if (func_50(0))
			{
				return Global_262145.f_23929;
			}
			break;
	}
	return 0;
}

bool func_190(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_2524719.f_4883.f_39, iParam0);
}

void func_191(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_113())
		{
			if (func_132(0))
			{
				if (!func_50(0))
				{
					if (unk_0xC77FA683E9BB485B(func_134()))
					{
						if (func_233() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_233());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_231(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_196("GB_BCUT_TICK1", func_134(), iVar0, 0, 0, 1, 1);
						}
						func_195(20);
						func_192(func_134(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_192(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_5(iParam0, 0, 1))
	{
		Var0 = 2084031113;
		Var0.f_1 = unk_0xD4E735F4B6A956AC();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_194(iParam0);
		func_193(&(Var0.f_6), &(Var0.f_7));
		unk_0x04F37AFC39D93909(1, &Var0, 8, func_126(iParam0));
	}
}

void func_193(var uParam0, var uParam1)
{
	*uParam0 = Global_1643357.f_9;
	*uParam1 = Global_1643357.f_10;
}

var func_194(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_491;
}

void func_195(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4883.f_7[iVar0]), iVar1);
}

int func_196(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
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
		unk_0xBA9FB571BCB6C1BD(func_205(iParam1, -2, 1, 0, 0));
		unk_0xC327C023FDA37F2E(func_203(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xBA9FB571BCB6C1BD(iParam3);
		}
		unk_0xCDA87E1DA52C8C9D(iParam2);
		iVar0 = unk_0x42A1DBBDEF9F85FF(0, 1);
		func_197(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_197(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_202() || !unk_0xD8B89B387D170E27()) || !func_200(unk_0xD4E735F4B6A956AC(), 0))
	{
		return;
	}
	iVar0 = func_198(iParam2);
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

int func_198(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1663381 - 1))
	{
		if (iParam0 > Global_1663381.f_5[iVar0 /*53*/].f_1)
		{
			func_199(iVar0);
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

void func_199(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1663381.f_5[iVar0 /*53*/] = { Global_1663381.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_200(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_201(-1, 0) == 8;
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

int func_201(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
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

bool func_202()
{
	return unk_0x05BEBC245254F6F2(-1762644250);
}

var func_203(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_204(&cVar0);
}

var func_204(char[4] cParam0)
{
	return cParam0;
}

int func_205(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_229(iParam0) && !bParam4)
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
	if (((func_229(unk_0xD4E735F4B6A956AC()) || (func_228() && func_227())) && !unk_0x05EFB6A616B6FADE(Global_2524719.f_4577, 31)) && !bParam4)
	{
		iVar1 = func_226();
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
								return func_224(iParam1, iParam0, 0);
							}
							else
							{
								return func_215(iParam0, unk_0x77065AD41B64E946(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_215(iParam0, unk_0x77065AD41B64E946(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xD8B89B387D170E27()) && iParam1 < 4)
			{
				if (Global_4456448.f_125859[iParam1] != -1)
				{
					return func_224(iParam1, iParam0, 0);
				}
				else
				{
					return func_206(0, -1, 0);
				}
			}
			else
			{
				return func_206(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xD8B89B387D170E27()) && iParam1 < 4)
	{
		if (Global_4456448.f_125859[iParam1] != -1)
		{
			return func_224(iParam1, iParam0, 0);
		}
		else
		{
			return func_215(iParam0, unk_0xD4E735F4B6A956AC(), iParam1, bParam2, bParam3);
		}
	}
	return func_215(iParam0, unk_0xD4E735F4B6A956AC(), iParam1, bParam2, bParam3);
}

int func_206(bool bParam0, int iParam1, bool bParam2)
{
	return func_207(unk_0xD4E735F4B6A956AC(), bParam0, iParam1, bParam2);
}

int func_207(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xC77FA683E9BB485B(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0xE46ECB9FD23D3264(iParam0);
	if (func_213() && Global_1378988.f_1)
	{
		if (bParam1)
		{
			return func_212(iParam2, iVar0);
		}
		else
		{
			return func_212(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_170(iVar0, iParam2, 0) && !unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_211(1);
				}
				else
				{
					return func_211(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_4456448.f_4, 20))
			{
				return func_208(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_208(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_211(1);
	}
	return func_211(0);
}

int func_208(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_210(iParam0, iParam1, iParam3);
	if (func_209(Global_4456448.f_130782, 1))
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

int func_209(int iParam0, bool bParam1)
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

int func_210(int iParam0, int iParam1, int iParam2)
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
			if (!func_170(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_211(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_212(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_210(iParam1, iParam0, 4);
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

int func_213()
{
	if (func_214() && unk_0xD8B89B387D170E27())
	{
		return 1;
	}
	return 0;
}

bool func_214()
{
	return unk_0x05EFB6A616B6FADE(Global_4456448.f_146776, 12);
}

int func_215(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_221(1))
			{
				iVar3 = func_220(iParam0);
				if (!iVar3 == -1)
				{
					return func_218(iVar3);
				}
			}
			if ((func_217(iParam1, iParam0, iVar0, 0) && !unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 18)) || ((func_170(unk_0xE46ECB9FD23D3264(iParam1), unk_0xE46ECB9FD23D3264(iParam0), 0) && unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 23)) && !unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 18)))
			{
				return func_211(1);
			}
			else if (unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 26))
			{
				return func_216(1);
			}
			else
			{
				return func_207(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574393 || Global_1574384) || Global_1589747[iParam0 /*790*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574393 == 1 && Global_1574403 == 0))
			{
				return func_211(1);
			}
			else
			{
				return func_207(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574388 && Global_1573886.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_220(iParam0);
	if (!iVar4 == -1)
	{
		return func_218(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_216(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_217(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_218(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_219(iParam0);
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

var func_219(int iParam0)
{
	return Global_2417554.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_220(int iParam0)
{
	if (!iParam0 == func_11())
	{
		if (func_234(iParam0, 1))
		{
			return Global_2417554.f_2071.f_11[func_85(iParam0)];
		}
	}
	return -1;
}

int func_221(int iParam0)
{
	if ((func_223() || func_222()) || (func_182() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_222()
{
	return Global_2448386.f_15;
}

var func_223()
{
	return Global_2448386.f_14;
}

int func_224(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969023.f_13[iParam0];
	if (func_221(1))
	{
		iVar2 = func_220(iParam1);
		if (!iVar2 == -1)
		{
			return func_218(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0x05EFB6A616B6FADE(Global_4456448.f_104[iParam0 /*10693*/].f_5532[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_11())
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
			iVar0 = func_207(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0x05EFB6A616B6FADE(Global_4456448.f_21, 13))
		{
			iVar0 = func_225(iParam0);
		}
		if (unk_0x05EFB6A616B6FADE(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 26) && !func_170(iParam0, unk_0xE46ECB9FD23D3264(iParam1), 0))
		{
			iVar0 = func_216(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_225(int iParam0)
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

var func_226()
{
	return Global_2359302.f_2;
}

bool func_227()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 4);
}

bool func_228()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 14);
}

int func_229(int iParam0)
{
	if (func_200(iParam0, 0))
	{
		return 1;
	}
	if (func_230())
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

bool func_230()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

void func_231(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_232(1);
	}
	else
	{
		iVar1 = func_232(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_232(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12277;
}

int func_233()
{
	return Global_262145.f_12276;
}

bool func_234(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_114(iParam0))
		{
			return 0;
		}
	}
	return Global_1625435[iParam0 /*560*/].f_11 != func_11();
}

void func_235(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_50(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_113())
		{
			iVar17 = unk_0xD4E735F4B6A956AC();
		}
		else
		{
			iVar17 = func_134();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1589747[iVar11 /*790*/].f_768.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = to_float(uParam1->f_10);
				fVar13 = to_float(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = ceil(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1589747[iVar11 /*790*/].f_768.f_2;
			}
			else
			{
				iVar2 = func_251(Global_1589747[iVar11 /*790*/].f_768, *uParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - ceil((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_250(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == unk_0xD4E735F4B6A956AC())
				{
					func_249("TICK_TCUT", iVar10, 1);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1667120.f_49 = *uParam3;
			if (iVar17 == unk_0xD4E735F4B6A956AC())
			{
				if (iVar2 > 0)
				{
					func_248(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_246(*uParam3);
				}
				iVar6 = func_245(&uVar5);
				iVar7 = Global_262145.f_23832;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = ceil((IntToFloat(iVar6) * Global_262145.f_23831));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_195(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < unk_0x48908CAFF1B58FF8())
						{
							iVar22 = iVar21;
							if (unk_0xA08F374047C715E8(iVar22))
							{
								iVar23 = unk_0x9279C21787650C40(iVar22);
								if (func_244(iVar23))
								{
									func_236(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2524719.f_4883.f_372 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23804;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_23805;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1677631 = *iParam2;
					func_195(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_236(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_238(iParam0);
	func_237(iParam0, uVar0, iParam1, iParam2);
}

void func_237(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = -1854838991;
	Var0.f_1 = unk_0xD4E735F4B6A956AC();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_194(iParam0);
	func_193(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_11())
	{
		if (unk_0xC77FA683E9BB485B(iParam0))
		{
			unk_0x04F37AFC39D93909(1, &Var0, 8, func_126(iParam0));
		}
	}
}

int func_238(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_243();
	iVar0 = func_241(iParam0, iVar0);
	iVar1 = Global_1625435[func_134() /*560*/].f_11.f_408;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14828));
	if (iVar0 < func_240())
	{
		iVar0 = func_240();
	}
	if (iVar0 > func_239())
	{
		iVar0 = func_239();
	}
	return iVar0;
}

int func_239()
{
	return Global_262145.f_14829;
}

int func_240()
{
	return Global_262145.f_16004;
}

int func_241(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_309(iParam0) * func_242());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_242()
{
	return Global_262145.f_16003;
}

var func_243()
{
	return Global_262145.f_12268;
}

int func_244(int iParam0)
{
	if (unk_0xC77FA683E9BB485B(iParam0))
	{
		if (iParam0 != unk_0xD4E735F4B6A956AC())
		{
			if (func_645(iParam0, unk_0xD4E735F4B6A956AC(), 0))
			{
				if (!func_427(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_245(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xC77FA683E9BB485B(unk_0x1483A8AE554B8B2B(iVar0)))
		{
			iVar2 = unk_0x1483A8AE554B8B2B(iVar0);
			if (!func_200(iVar2, 0) && !func_645(iVar2, unk_0xD4E735F4B6A956AC(), 1))
			{
				iVar1++;
			}
			else if (func_200(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_246(int iParam0)
{
	func_247(iParam0, 7236);
}

void func_247(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_28(iParam1, -1, 0);
	func_25(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_248(int iParam0)
{
	func_247(iParam0, 7231);
}

int func_249(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x59FF6261546DDD52(sParam0);
	unk_0xCDA87E1DA52C8C9D(iParam1);
	iVar0 = unk_0x42A1DBBDEF9F85FF(0, 1);
	func_197(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_250(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_23833);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return round(fVar1);
}

int func_251(struct<5> Param0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam1 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (to_float(iParam1) / to_float(Param0.f_1));
	fVar2 = to_float(iVar0);
	return floor((fVar2 * fVar1));
}

void func_252(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_50(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_113())
		{
			iVar15 = unk_0xD4E735F4B6A956AC();
		}
		else
		{
			iVar15 = func_134();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_264(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_255(uParam1->f_16) + uParam1->f_8);
			}
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = to_float(uParam1->f_10);
				fVar11 = to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_109(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_108(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_254(*iParam2) > 0)
			{
				if (iVar15 == unk_0xD4E735F4B6A956AC())
				{
					func_249("SMTICK_RONCUT", func_254(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_254(*iParam2));
			}
			if (iVar15 == unk_0xD4E735F4B6A956AC())
			{
				func_253(iVar2, iVar9);
				iVar6 = func_245(&uVar5);
				iVar7 = Global_262145.f_22190;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_22189));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_195(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x48908CAFF1B58FF8())
						{
							iVar19 = iVar18;
							if (unk_0xA08F374047C715E8(iVar19))
							{
								iVar20 = unk_0x9279C21787650C40(iVar19);
								if (func_244(iVar20))
								{
									func_236(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2524719.f_4883.f_372 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22123;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22124;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1677631 = *iParam2;
					func_195(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_253(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_247(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_247(iParam1, 6117);
	}
}

int func_254(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22157);
	if (fVar1 > to_float(Global_262145.f_22158))
	{
		fVar1 = to_float(Global_262145.f_22158);
	}
	return round(fVar1);
}

int func_255(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_262())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_264(unk_0xD4E735F4B6A956AC());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_257(func_258(func_261(iVar0), -1, -1));
		if (func_256(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_256(int iParam0)
{
	switch (iParam0)
	{
		case -508960047:
			return 5;
		
		case -1996578712:
			return 5;
		
		case -324063008:
			return 7;
		
		case -1537242760:
			return 7;
		
		case 167523060:
			return 1;
		
		case 440723308:
			return 1;
		
		case -1821684485:
			return 6;
		
		case 1075487129:
			return 6;
		
		case 1339867730:
			return 4;
		
		case 1158536477:
			return 4;
		
		case -1222709082:
			return 0;
		
		case -260422691:
			return 0;
		
		case -1117639471:
			return 3;
		
		case -1434473216:
			return 3;
		
		case 690570889:
			return 2;
		
		case 320416020:
			return 2;
		
		default:
	}
	return -1;
}

int func_257(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -508960047;
		
		case 2:
			return -1996578712;
		
		case 3:
			return -324063008;
		
		case 4:
			return -1537242760;
		
		case 5:
			return 167523060;
		
		case 6:
			return 440723308;
		
		case 7:
			return -1821684485;
		
		case 8:
			return 1075487129;
		
		case 9:
			return 1339867730;
		
		case 10:
			return 1158536477;
		
		case 11:
			return -1222709082;
		
		case 12:
			return -260422691;
		
		case 13:
			return -1117639471;
		
		case 14:
			return -1434473216;
		
		case 15:
			return 690570889;
		
		case 16:
			return 320416020;
		
		default:
	}
	return 0;
}

int func_258(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar0 = 0;
	iVar1 = func_260(iParam0, iParam1);
	iVar2 = func_259(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x8107725D56824351(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_259(int iParam0)
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

int func_260(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_27();
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

int func_261(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

bool func_262()
{
	return func_263() != 0;
}

int func_263()
{
	return Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_255;
}

int func_264(int iParam0)
{
	if (iParam0 != func_11() && func_265(iParam0))
	{
		return Global_1589747[iParam0 /*790*/].f_273.f_255.f_3;
	}
	return 0;
}

int func_265(int iParam0)
{
	if (iParam0 != func_11())
	{
		return Global_1589747[iParam0 /*790*/].f_273.f_255 != 0;
	}
	return 0;
}

void func_266(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_50(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_113())
		{
			iVar15 = unk_0xD4E735F4B6A956AC();
		}
		else
		{
			iVar15 = func_134();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_112(iVar15);
			iVar0 = (func_287(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = to_float(uParam1->f_10);
				fVar11 = to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_283(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_20903));
			}
			else
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_20902));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0xD4E735F4B6A956AC())
			{
				func_280(iVar16, iVar2);
				if (func_276(iVar16) >= Global_262145.f_20451 || iVar2 >= Global_262145.f_20451)
				{
					func_267(5);
				}
				iVar6 = func_245(&uVar5);
				iVar7 = round(Global_262145.f_20905);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_20904));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_195(108);
					}
					else
					{
						func_195(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x48908CAFF1B58FF8())
						{
							iVar19 = iVar18;
							if (unk_0xA08F374047C715E8(iVar19))
							{
								iVar20 = unk_0x9279C21787650C40(iVar19);
								if (func_244(iVar20))
								{
									func_236(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2524719.f_4883.f_372 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_20906;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_20907;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1677631 = *iParam2;
					func_195(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_267(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20439)
			{
				if (func_269(Global_262145.f_20440))
				{
					func_268("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20441)
			{
				if (func_269(Global_262145.f_20442))
				{
					func_268("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20443)
			{
				if (func_269(Global_262145.f_20444))
				{
					func_268("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20445)
			{
				if (func_269(Global_262145.f_20446))
				{
					func_268("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20447)
			{
				if (func_269(Global_262145.f_20448))
				{
					func_268("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20449)
			{
				if (func_269(Global_262145.f_20450))
				{
					func_249("CLOTHAWDSTRAP3", Global_262145.f_20451, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20452)
			{
				if (func_269(Global_262145.f_20453))
				{
					func_249("CLOTHAWDSTRAP5", Global_262145.f_20585, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20455)
			{
				if (func_269(Global_262145.f_20456))
				{
					func_268("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20457)
			{
				if (func_269(Global_262145.f_20458))
				{
					func_268("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20459)
			{
				if (func_269(Global_262145.f_20460))
				{
					func_268("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20461)
			{
				if (func_269(Global_262145.f_20462))
				{
					func_268("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20463)
			{
				if (func_269(Global_262145.f_20464))
				{
					func_268("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20465)
			{
				if (func_269(Global_262145.f_20466))
				{
					func_268("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20467)
			{
				if (func_269(Global_262145.f_20468))
				{
					func_268("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20469)
			{
				if (func_269(Global_262145.f_20470))
				{
					func_268("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_268(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0x59FF6261546DDD52(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xBA9FB571BCB6C1BD(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0xBA9FB571BCB6C1BD(iParam3);
	}
	unk_0x4FDA9E6EF359F8A9(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0x42A1DBBDEF9F85FF(0, 1);
	}
	else
	{
		Global_2503649 = { func_157(unk_0xD4E735F4B6A956AC()) };
		if (unk_0xE087FDE0E2FA8ADF(&Global_2503579, 35, &Global_2503649))
		{
			iVar1 = 0;
			if (unk_0x3CAC2741CC1A631F(&(Global_2503579.f_22), "Leader") && Global_2503579.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2503579.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0x6CA5B2BD422CA926(iVar2, unk_0x634D48A84780E8DD(&Global_2503579, 35), &(Global_2503579.f_17), Global_2503579.f_30, iVar1, 0, Global_2503579, unk_0xB330C43B9B7B1724(unk_0xD4E735F4B6A956AC()), Global_1314014, Global_1314015, Global_1314016);
		}
		else
		{
			iVar0 = unk_0x42A1DBBDEF9F85FF(0, 1);
		}
	}
	func_197(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_269(int iParam0)
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case -1191485992:
		case -1735342207:
			if (!func_273(15417, -1, -1))
			{
				func_272(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case -120911428:
		case -1407302654:
		case -2039798986:
			if (!func_273(15418, -1, -1))
			{
				func_272(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case -1359197372:
		case -140996548:
		case -1850642937:
			if (!func_273(15425, -1, -1))
			{
				func_272(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -695364761:
		case 1263491585:
		case -1307315235:
		case 258618816:
			if (!func_273(15405, -1, -1))
			{
				func_272(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case -571324979:
		case 1374601256:
			if (!func_273(15393, -1, -1))
			{
				func_272(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case -660288110:
			if (!func_273(15409, -1, -1))
			{
				func_272(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case -1802539904:
		case -1005186539:
		case -426022529:
			if (!func_273(15396, -1, -1))
			{
				func_272(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2098369500:
		case -1196968784:
		case -1314656979:
		case -1132522169:
			if (!func_273(15412, -1, -1))
			{
				func_272(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1172743557:
		case -1502212019:
		case 1110085176:
		case -889671110:
			if (!func_74(209, -1))
			{
				func_270(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1883175477:
		case -584614481:
		case -1736983851:
		case -182614393:
			if (!func_273(15403, -1, -1))
			{
				func_272(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case -890709710:
		case -1496983695:
		case 48701978:
			if (!func_74(209, -1))
			{
				func_270(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -869990766:
		case -581140963:
		case 1827333048:
		case -646852824:
			if (!func_273(15389, -1, -1))
			{
				func_272(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case -542628448:
		case -870458464:
		case 420690954:
		case -408392811:
			if (!func_74(209, -1))
			{
				func_270(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_273(15398, -1, -1))
			{
				func_272(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -1361097493:
		case -73647644:
		case -1036580403:
		case -1765816422:
		case -1991379993:
		case -1731611121:
			if (!func_273(15400, -1, -1))
			{
				func_272(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1167465472:
		case -313418417:
		case -203035350:
		case -1533320367:
		case 2065127290:
		case -390081030:
			if (!func_74(209, -1))
			{
				func_270(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2105609173:
		case -698486936:
		case 917598912:
		case 939297301:
		case -56403312:
		case -1368923829:
			if (!func_273(15408, -1, -1))
			{
				func_272(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1864920868:
		case -1072905530:
		case 682284723:
		case 1186965403:
		case -292700571:
		case -2068738593:
			if (!func_74(209, -1))
			{
				func_270(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case -648899601:
		case -612123774:
			if (!func_273(15411, -1, -1))
			{
				func_272(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case -889194678:
		case 801334272:
			if (!func_273(15397, -1, -1))
			{
				func_272(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case -146705667:
			if (!func_273(15413, -1, -1))
			{
				func_272(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case -1997689882:
		case 627387411:
		case -847831191:
			if (!func_273(15391, -1, -1))
			{
				func_272(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case -1563654102:
		case 1932815241:
		case -1617209023:
		case 308545041:
		case 1682427144:
			if (!func_273(15388, -1, -1))
			{
				func_272(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case -720081735:
		case 1626031863:
		case -1391954917:
		case 35480964:
		case 2029975158:
			if (!func_74(209, -1))
			{
				func_270(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1124704392:
		case -850093035:
		case 926585800:
		case -1832969872:
		case 1539395388:
		case 1377465778:
			if (!func_273(15401, -1, -1))
			{
				func_272(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 1029334921:
		case -322091380:
		case -1604737223:
		case -836382797:
			if (!func_273(15394, -1, -1))
			{
				func_272(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case -534855486:
		case -1168575065:
		case -1367129204:
		case -1006027910:
			if (!func_74(209, -1))
			{
				func_270(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -516333262:
		case 756873456:
		case 87453937:
		case -1438775324:
			if (!func_273(15406, -1, -1))
			{
				func_272(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case -730037708:
		case -1686659723:
		case -1094274807:
			if (!func_273(15395, -1, -1))
			{
				func_272(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case -970458486:
		case 1992217604:
		case -1348726092:
			if (!func_74(209, -1))
			{
				func_270(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1490658501:
		case 975601953:
		case -1934557208:
		case 1786218600:
			if (!func_273(15410, -1, -1))
			{
				func_272(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1735635238:
		case 1614208560:
		case -1034032319:
		case -1858021894:
			if (!func_273(15407, -1, -1))
			{
				func_272(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case -726032561:
		case 1747334867:
		case 1237632771:
			if (!func_74(209, -1))
			{
				func_270(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1931617488:
		case -1824987162:
		case 236389050:
		case 1987485798:
			if (!func_74(209, -1))
			{
				func_270(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1726332301:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_273(15414, -1, -1))
			{
				func_272(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1382922530:
		case 734151492:
		case -357636850:
		case -1021993708:
			if (!func_273(15415, -1, -1))
			{
				func_272(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case -1766862320:
		case 479676642:
		case -1654828636:
			if (!func_273(15399, -1, -1))
			{
				func_272(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1776790350:
		case 579562906:
		case 242920617:
		case -1365707749:
			if (!func_273(15404, -1, -1))
			{
				func_272(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1988057295:
		case -619754931:
		case -1219723702:
		case -388208479:
			if (!func_74(209, -1))
			{
				func_270(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case -1576971340:
		case 2087194554:
			if (!func_273(15392, -1, -1))
			{
				func_272(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case -1405036369:
		case -622901905:
		case 981732339:
			if (!func_273(15390, -1, -1))
			{
				func_272(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case -981132613:
		case 1271443068:
			if (!func_273(15402, -1, -1))
			{
				func_272(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case -292922355:
		case -34538790:
		case -1908986844:
		case -1785118184:
			if (!func_273(15416, -1, -1))
			{
				func_272(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1495432685:
		case 1898518287:
		case 2029126042:
		case -1521032813:
			if (!func_74(209, -1))
			{
				func_270(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -2123485438:
		case 1457900554:
		case -14316613:
		case 619771057:
			if (!func_273(15426, -1, -1))
			{
				func_272(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case -815706791:
		case -1066127505:
		case 1281631799:
		case -1519028808:
			if (!func_273(15422, -1, -1))
			{
				func_272(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1318802347:
		case -1366750043:
		case 447234752:
		case 1996626130:
			if (!func_273(15423, -1, -1))
			{
				func_272(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case -1981759857:
			if (!func_273(15421, -1, -1))
			{
				func_272(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case -1639289459:
		case -562607521:
		case -879279621:
			if (!func_273(15427, -1, -1))
			{
				func_272(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case -919314748:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_273(15419, -1, -1))
			{
				func_272(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case -884280700:
		case -85982412:
		case 1573086793:
			if (!func_273(15420, -1, -1))
			{
				func_272(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_270(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_271())
	{
		iVar0 = Global_2566070[iParam0 /*3*/][func_26(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x0C62A7470B522D80(iVar0, iParam1, iParam3);
		}
	}
}

int func_271()
{
	return 1;
	return 0;
}

int func_272(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xF84B918DCDA549C0((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x12FA763CEA4960B5((iParam0 - 0)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xF84B918DCDA549C0((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x12FA763CEA4960B5((iParam0 - 192)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xF84B918DCDA549C0((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x12FA763CEA4960B5((iParam0 - 513)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xF84B918DCDA549C0((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x12FA763CEA4960B5((iParam0 - 705)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x7D93C2914375D70B((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x12FA763CEA4960B5((iParam0 - 3111)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x7D93C2914375D70B((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x12FA763CEA4960B5((iParam0 - 2919)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0xD7C999E88C211597((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x12FA763CEA4960B5((iParam0 - 4207)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0xD7C999E88C211597((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x12FA763CEA4960B5((iParam0 - 4335)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0xD7C999E88C211597((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x12FA763CEA4960B5((iParam0 - 6029)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0xD7C999E88C211597((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x12FA763CEA4960B5((iParam0 - 7385)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0xD7C999E88C211597((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x12FA763CEA4960B5((iParam0 - 7321)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0xD7C999E88C211597((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x12FA763CEA4960B5((iParam0 - 9361)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0xD7C999E88C211597((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x12FA763CEA4960B5((iParam0 - 15369)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0xD7C999E88C211597((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x12FA763CEA4960B5((iParam0 - 15562)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0xD7C999E88C211597((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x12FA763CEA4960B5((iParam0 - 15946)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0xD7C999E88C211597((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x12FA763CEA4960B5((iParam0 - 18098)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0xD7C999E88C211597((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x12FA763CEA4960B5((iParam0 - 22066)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0xD7C999E88C211597((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x12FA763CEA4960B5((iParam0 - 24962)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar19, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_273(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar1 = func_275(iParam0, iParam1);
	uVar2 = func_274(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x07EEB31CF063DAB7(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_274(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x12FA763CEA4960B5((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x12FA763CEA4960B5((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x12FA763CEA4960B5((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x12FA763CEA4960B5((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x12FA763CEA4960B5((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x12FA763CEA4960B5((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x12FA763CEA4960B5((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x12FA763CEA4960B5((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x12FA763CEA4960B5((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x12FA763CEA4960B5((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x12FA763CEA4960B5((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x12FA763CEA4960B5((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x12FA763CEA4960B5((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x12FA763CEA4960B5((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x12FA763CEA4960B5((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x12FA763CEA4960B5((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x12FA763CEA4960B5((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x12FA763CEA4960B5((iParam0 - 24962)) * 64);
	}
	return iVar0;
}

int func_275(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x7D93C2914375D70B((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x7D93C2914375D70B((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	return iVar0;
}

int func_276(int iParam0)
{
	int iVar0;
	
	iVar0 = func_278(iParam0);
	return func_28(func_277(iVar0), -1, 0);
}

int func_277(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3951;
		
		case 1:
			return 3952;
		
		case 2:
			return 3953;
		
		case 3:
			return 3954;
		
		case 4:
			return 3955;
		
		case 5:
			return 5456;
		
		default:
	}
	return 3951;
}

int func_278(int iParam0)
{
	int iVar0;
	
	if (func_279(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_174[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_279(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_280(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_278(iParam0);
	iVar1 = func_277(iVar0);
	iVar2 = (func_28(iVar1, -1, 0) + iParam1);
	func_25(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_258(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_174[iVar0 /*12*/] != 0)
			{
				iVar1 = func_277(iVar0);
				iVar3 = (iVar3 + func_28(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_282(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_281(9357, iVar5, -1, 1);
	}
}

var func_281(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_27();
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

int func_282(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_283(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_127(iParam1);
	if (func_279(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16834;
				if (func_284(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16839);
				}
				if (func_284(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16844);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16833;
				if (func_284(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16838);
				}
				if (func_284(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16843);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16832;
				if (func_284(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16837);
				}
				if (func_284(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16842);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16830;
				if (func_284(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16835);
				}
				if (func_284(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16840);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16831;
				if (func_284(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16836);
				}
				if (func_284(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16841);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_20928;
				if (func_284(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_20930);
				}
				if (func_284(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_20929);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_284(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_286(iParam0, iParam1))
	{
		iVar0 = func_285(iParam0, iParam1);
		return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_285(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_279(iParam1) && iParam0 != func_11())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_286(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_279(iParam1) && iParam0 != func_11())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_287(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (func_279(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/] == iParam1)
			{
				return Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_288(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_130())
			{
				Var0 = { func_129() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar1 = to_float(uParam1->f_10);
					fVar2 = to_float(uParam1->f_11);
					fVar3 = ((fVar1 / fVar2) * 100f);
					iVar4 = (uParam1->f_15 + uParam1->f_8);
					fVar5 = ((IntToFloat(iVar4) / 100f) * fVar3);
					*uParam3 = ceil(fVar5);
				}
				iVar6 = func_283(unk_0xD4E735F4B6A956AC(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar7 = (to_float(iVar6) * Global_262145.f_18464);
					iVar6 = round(fVar7);
				}
				else
				{
					fVar8 = (to_float(iVar6) * Global_262145.f_18463);
					iVar6 = round(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = func_245(&uVar9);
				iVar11 = round(Global_262145.f_18454);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = ceil((IntToFloat(iVar10) * Global_262145.f_18453));
				iVar13 = ((*iParam2 / 100) * iVar12);
				*iParam2 = (*iParam2 + iVar13);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar10 > 0)
				{
					func_195(86);
				}
				Global_2524719.f_4883.f_372 = *iParam2;
			}
			else if (func_50(0))
			{
				Var14 = { func_289(func_134()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar15 = to_float(uParam1->f_10);
					fVar16 = to_float(uParam1->f_11);
					fVar17 = ((fVar15 / fVar16) * 100f);
					iVar18 = (uParam1->f_15 + uParam1->f_8);
					fVar19 = ((IntToFloat(iVar18) / 100f) * fVar17);
					*uParam3 = ceil(fVar19);
				}
				iVar20 = func_283(func_134(), Var14, *uParam3);
				if (Var14.f_1 == 1)
				{
					iVar20 = ceil((IntToFloat(iVar20) * Global_262145.f_18464));
				}
				else if (Var14.f_1 == 0)
				{
					iVar20 = ceil((IntToFloat(iVar20) * Global_262145.f_18463));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_262145.f_18503;
				iVar22 = ceil((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_262145.f_18504;
				if (*iParam2 > iVar23)
				{
					*iParam2 = iVar23;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_289(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_11.f_188;
}

void func_290(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_114(unk_0xD4E735F4B6A956AC()))
		{
			if (bParam1)
			{
				func_305();
			}
			func_304();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_114(unk_0xD4E735F4B6A956AC()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_296(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_177));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_295(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_245(&uVar2);
					iVar4 = Global_262145.f_16014;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = ceil((IntToFloat(iVar3) * Global_262145.f_15223));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_195(44);
					}
				}
				func_293(*iParam3);
				func_292();
				Global_2524719.f_4883.f_372 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0x48908CAFF1B58FF8())
				{
					iVar8 = iVar7;
					if (unk_0xA08F374047C715E8(iVar8))
					{
						iVar9 = unk_0x9279C21787650C40(iVar8);
						if (func_244(iVar9))
						{
							func_236(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_114(unk_0xD4E735F4B6A956AC()))
		{
			func_291();
		}
	}
}

void func_291()
{
	int iVar0;
	
	iVar0 = Global_2568270[func_27()];
	iVar0++;
	func_100(3667, iVar0, -1, 1);
}

void func_292()
{
	int iVar0;
	
	iVar0 = Global_2568276[func_27()];
	iVar0++;
	func_100(3666, iVar0, -1, 1);
}

void func_293(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2568279[func_27()];
	iVar0 = (iVar0 + iParam0);
	func_100(3668, iVar0, -1, 1);
	if (func_258(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_294(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_281(7666, iVar2, -1, 1);
	}
}

int func_294(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16147;
			break;
		
		case 2:
			return Global_262145.f_16148;
			break;
		
		case 3:
			return Global_262145.f_16149;
			break;
		
		case 4:
			return Global_262145.f_16150;
			break;
		
		case 5:
			return Global_262145.f_16151;
			break;
		
		case 6:
			return Global_262145.f_16152;
			break;
		
		case 7:
			return Global_262145.f_16153;
			break;
		
		case 8:
			return Global_262145.f_16154;
			break;
		
		case 9:
			return Global_262145.f_16155;
			break;
		
		case 10:
			return Global_262145.f_16156;
			break;
		
		case 11:
			return Global_262145.f_16157;
			break;
		
		case 12:
			return Global_262145.f_16158;
			break;
		
		case 13:
			return Global_262145.f_16159;
			break;
		
		case 14:
			return Global_262145.f_16160;
			break;
		
		case 15:
			return Global_262145.f_16161;
			break;
		
		case 16:
			return Global_262145.f_16162;
			break;
		
		case 17:
			return Global_262145.f_16163;
			break;
		
		case 18:
			return Global_262145.f_16164;
			break;
		
		case 19:
			return Global_262145.f_16165;
			break;
		
		case 20:
			return Global_262145.f_16166;
			break;
		
		case 21:
			return Global_262145.f_16167;
			break;
		
		case 22:
			return Global_262145.f_16168;
			break;
		
		case 23:
			return Global_262145.f_16169;
			break;
		
		case 24:
			return Global_262145.f_16170;
			break;
	}
	return 0;
}

var func_295(int iParam0)
{
	if (iParam0 >= Global_262145.f_15201)
	{
		return Global_262145.f_15222;
	}
	else if (iParam0 >= Global_262145.f_15200)
	{
		return Global_262145.f_15221;
	}
	else if (iParam0 >= Global_262145.f_15199)
	{
		return Global_262145.f_15220;
	}
	else if (iParam0 >= Global_262145.f_15198)
	{
		return Global_262145.f_15219;
	}
	else if (iParam0 >= Global_262145.f_15197)
	{
		return Global_262145.f_15218;
	}
	else if (iParam0 >= Global_262145.f_15196)
	{
		return Global_262145.f_15217;
	}
	else if (iParam0 >= Global_262145.f_15195)
	{
		return Global_262145.f_15216;
	}
	else if (iParam0 >= Global_262145.f_15194)
	{
		return Global_262145.f_15215;
	}
	else if (iParam0 >= Global_262145.f_15193)
	{
		return Global_262145.f_15214;
	}
	else if (iParam0 >= Global_262145.f_15192)
	{
		return Global_262145.f_15213;
	}
	else if (iParam0 >= Global_262145.f_15191)
	{
		return Global_262145.f_15212;
	}
	else if (iParam0 >= Global_262145.f_15190)
	{
		return Global_262145.f_15211;
	}
	else if (iParam0 >= Global_262145.f_15189)
	{
		return Global_262145.f_15210;
	}
	else if (iParam0 >= Global_262145.f_15188)
	{
		return Global_262145.f_15209;
	}
	else if (iParam0 >= Global_262145.f_15187)
	{
		return Global_262145.f_15208;
	}
	else if (iParam0 >= Global_262145.f_15186)
	{
		return Global_262145.f_15207;
	}
	else if (iParam0 >= Global_262145.f_15185)
	{
		return Global_262145.f_15206;
	}
	else if (iParam0 >= Global_262145.f_15184)
	{
		return Global_262145.f_15205;
	}
	else if (iParam0 >= Global_262145.f_15183)
	{
		return Global_262145.f_15204;
	}
	else if (iParam0 >= Global_262145.f_15182)
	{
		return Global_262145.f_15203;
	}
	return Global_262145.f_15202;
}

int func_296(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_303(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_302(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_301(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_297(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_297(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_301(unk_0x22C775856F4633CA(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_297(int iParam0)
{
	int iVar0;
	
	if (func_300(iParam0))
	{
		iVar0 = func_298(func_299(iParam0));
		return func_28(iVar0, -1, 0);
	}
	return 0;
}

int func_298(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3646;
	}
	else if (iParam0 == 1)
	{
		return 3647;
	}
	else if (iParam0 == 2)
	{
		return 3648;
	}
	else if (iParam0 == 3)
	{
		return 3649;
	}
	else if (iParam0 == 4)
	{
		return 3650;
	}
	return 3646;
}

int func_299(int iParam0)
{
	int iVar0;
	
	if (func_300(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_98[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_300(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_301(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15401;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15399;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15403;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15397;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15395;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15405;
	}
	return 0;
}

int func_302(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_300(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1668370[iVar0] == iParam1 && Global_1668377[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_303(int iParam0)
{
	int iVar0;
	
	if (func_300(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_98[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_304()
{
	int iVar0;
	
	iVar0 = Global_2568267[func_27()];
	iVar0++;
	Global_2568267[func_27()] = iVar0;
	func_100(3665, iVar0, -1, 1);
}

void func_305()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2568264[func_27()];
	iVar1 = Global_2568273[func_27()];
	iVar0++;
	iVar1++;
	Global_2568264[func_27()] = iVar0;
	Global_2568273[func_27()] = iVar1;
	Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_120 = iVar1;
	func_100(3663, iVar0, -1, 1);
	func_100(3664, iVar1, -1, 1);
}

void func_306()
{
	if (func_113())
	{
		Global_2449169.f_3068.f_134 = 0;
		Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_408 = Global_2449169.f_3068.f_134;
	}
}

void func_307()
{
	if (func_113())
	{
		if (Global_2449169.f_3068.f_134 < 10)
		{
			Global_2449169.f_3068.f_134++;
			Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_408 = Global_2449169.f_3068.f_134;
		}
	}
}

void func_308()
{
	if (func_113())
	{
		if (Global_2449169.f_3068.f_134 > 0)
		{
			Global_2449169.f_3068.f_134 = (Global_2449169.f_3068.f_134 - 1);
			Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_408 = Global_2449169.f_3068.f_134;
		}
	}
}

int func_309(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_11.f_28;
}

int func_310(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
			if (func_132(1) && !func_50(1))
			{
				if (func_311(func_134()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_311(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_22, 26);
}

int func_312(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12393) * Global_262145.f_12398));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12343) * Global_262145.f_12348));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12370) * Global_262145.f_12374));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12383) * Global_262145.f_12387));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12405) * Global_262145.f_12410));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12567) * Global_262145.f_12568));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12573) * Global_262145.f_12574));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12571) * Global_262145.f_12572));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12565) * Global_262145.f_12566));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12569) * Global_262145.f_12570));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12563) * Global_262145.f_12564));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_14924;
		
		case 172:
			return Global_262145.f_14940;
		
		case 173:
			return Global_262145.f_14883;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18158;
		
		case 180:
			return Global_262145.f_18034;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18042;
		
		case 185:
			return Global_262145.f_18051;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18246;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18263;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18111;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18294;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18172;
		
		case 205:
			return Global_262145.f_18281;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18139;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18276;
		
		case 211:
			return Global_262145.f_18240;
		
		case 214:
			return Global_262145.f_18833;
		
		case 215:
			return Global_262145.f_18843;
		
		case 216:
			return Global_262145.f_18853;
		
		case 217:
			return Global_262145.f_18862;
		
		case 218:
			return Global_262145.f_18871;
		
		case 219:
			return Global_262145.f_18887;
		
		case 241:
			return Global_262145.f_23949;
		
		case 242:
			return Global_262145.f_23945;
		
		case 248:
			return Global_262145.f_23948;
		
		case 244:
			return Global_262145.f_23946;
		
		case 239:
			return Global_262145.f_23950;
		
		case 240:
			return Global_262145.f_23951;
		
		default:
	}
	return 0;
}

int func_313(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12394) * Global_262145.f_12399));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12344) * Global_262145.f_12349));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12371) * Global_262145.f_12375));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12384) * Global_262145.f_12388));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12406) * Global_262145.f_12411));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12443) * Global_262145.f_12446));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12489) * Global_262145.f_12492));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12479) * Global_262145.f_12482));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12434) * Global_262145.f_12437));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12454) * Global_262145.f_12459));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12419) * Global_262145.f_12422));
		
		case 170:
			return Global_262145.f_14866;
		
		case 171:
			return Global_262145.f_14925;
		
		case 172:
			return Global_262145.f_14941;
		
		case 173:
			return Global_262145.f_14884;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_16962;
		
		case 168:
			return Global_262145.f_16961;
		
		case 179:
			return Global_262145.f_18159;
		
		case 180:
			return Global_262145.f_18035;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18043;
		
		case 185:
			return Global_262145.f_18052;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18247;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18264;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18112;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18295;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18173;
		
		case 205:
			return Global_262145.f_18282;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18140;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18277;
		
		case 211:
			return Global_262145.f_18241;
		
		case 214:
			return Global_262145.f_18834;
		
		case 215:
			return Global_262145.f_18844;
		
		case 216:
			return Global_262145.f_18854;
		
		case 217:
			return Global_262145.f_18863;
		
		case 218:
			return Global_262145.f_18872;
		
		case 219:
			return Global_262145.f_18888;
		
		case 178:
			if (func_113())
			{
				return Global_262145.f_18711;
			}
			else if (bParam1)
			{
				return Global_262145.f_18712;
			}
			break;
		
		case 188:
			if (func_113())
			{
				return Global_262145.f_18795;
			}
			else if (bParam1)
			{
				return Global_262145.f_18796;
			}
			break;
		
		case 225:
			if (func_113() && !func_130())
			{
				if (func_311(unk_0xD4E735F4B6A956AC()))
				{
					return Global_262145.f_20916;
				}
				else
				{
					return Global_262145.f_20917;
				}
			}
			else if (func_130())
			{
				return Global_262145.f_20918;
			}
			break;
		
		case 226:
			if (func_113() && !func_130())
			{
				if (func_311(unk_0xD4E735F4B6A956AC()))
				{
					return Global_262145.f_20896;
				}
				else
				{
					return Global_262145.f_20897;
				}
			}
			else if (func_130())
			{
				return Global_262145.f_20898;
			}
			break;
		
		case 227:
			if (func_113() && !func_130())
			{
				if (func_311(unk_0xD4E735F4B6A956AC()))
				{
					return Global_262145.f_20908;
				}
				else
				{
					return Global_262145.f_20909;
				}
			}
			else if (func_130())
			{
				return Global_262145.f_20910;
			}
			break;
		
		case 229:
			if (func_113() && !func_130())
			{
				if (func_311(unk_0xD4E735F4B6A956AC()))
				{
					return Global_262145.f_22072;
				}
				else
				{
					return Global_262145.f_22073;
				}
			}
			else if (func_130())
			{
				return Global_262145.f_22074;
			}
			break;
		
		case 230:
			if (func_113() && !func_130())
			{
				if (func_311(unk_0xD4E735F4B6A956AC()))
				{
					return Global_262145.f_22168;
				}
				else
				{
					return Global_262145.f_22169;
				}
			}
			else if (func_130())
			{
				return Global_262145.f_22170;
			}
			break;
		
		case 233:
			if (func_113() && !func_130())
			{
				if (func_311(unk_0xD4E735F4B6A956AC()))
				{
					return Global_262145.f_22642;
				}
				else
				{
					return Global_262145.f_22643;
				}
			}
			else if (func_130())
			{
				return Global_262145.f_22641;
			}
			break;
		
		case 241:
			return Global_262145.f_23956;
		
		case 242:
			return Global_262145.f_23952;
		
		case 244:
			return Global_262145.f_23953;
		
		case 248:
			return Global_262145.f_23955;
		
		case 239:
			return Global_262145.f_23957;
		
		case 240:
			return Global_262145.f_23958;
		
		case 237:
			if (func_113() && !func_130())
			{
				if (func_311(unk_0xD4E735F4B6A956AC()))
				{
					return Global_262145.f_23798;
				}
				else
				{
					return Global_262145.f_23799;
				}
			}
			else if (func_130())
			{
				return Global_262145.f_23800;
			}
			break;
		
		case 238:
			if (func_113() && !func_130())
			{
				if (func_311(unk_0xD4E735F4B6A956AC()))
				{
					return Global_262145.f_23909;
				}
				else
				{
					return Global_262145.f_23910;
				}
			}
			else if (func_130())
			{
				return Global_262145.f_23911;
			}
			break;
		
		case 249:
			if (func_113() && !func_130())
			{
				if (func_311(unk_0xD4E735F4B6A956AC()))
				{
					return Global_262145.f_23925;
				}
				else
				{
					return Global_262145.f_23926;
				}
			}
			else if (func_130())
			{
				return Global_262145.f_23927;
			}
			break;
	}
	return 0;
}

void func_314(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_315(iParam0))
	{
		if (!func_113())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12287;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_234(unk_0xD4E735F4B6A956AC(), 1))
	{
		if (func_47(iParam0))
		{
			*uParam1 = (Global_262145.f_18011 / 100f);
			*uParam2 = (Global_262145.f_18011 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_23959;
			*uParam2 = Global_262145.f_23959;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_23960;
			*uParam2 = Global_262145.f_23960;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_23962;
			*uParam2 = Global_262145.f_23962;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_23963;
			*uParam2 = Global_262145.f_23963;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_23964;
			*uParam2 = Global_262145.f_23964;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_23965;
			*uParam2 = Global_262145.f_23965;
		}
		else
		{
			*uParam1 = Global_262145.f_12284;
			*uParam2 = Global_262145.f_12283;
		}
	}
	else if (func_47(iParam0))
	{
		*uParam1 = (Global_262145.f_18012 / 100f);
		*uParam2 = (Global_262145.f_18012 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_23966;
		*uParam2 = Global_262145.f_23966;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_23967;
		*uParam2 = Global_262145.f_23967;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_23969;
		*uParam2 = Global_262145.f_23969;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_23970;
		*uParam2 = Global_262145.f_23970;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_23971;
		*uParam2 = Global_262145.f_23971;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_23972;
		*uParam2 = Global_262145.f_23972;
	}
	else
	{
		*uParam1 = Global_262145.f_12286;
		*uParam2 = Global_262145.f_12285;
	}
	iVar0 = func_29();
	if (iVar0 != func_11())
	{
		if (func_645(unk_0xD4E735F4B6A956AC(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_315(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_316(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xAEAF59799C2F26E4(unk_0xC75DB7A64F3796EC(iParam0), "MPBitset"))
	{
		iVar0 = unk_0xBB4F5216F3FCA8EA(unk_0xC75DB7A64F3796EC(iParam0), "MPBitset");
	}
	unk_0xFA57C719261AA55D(&iVar0, iParam1);
	unk_0x6D61CED849FB898E(unk_0xC75DB7A64F3796EC(iParam0), "MPBitset", iVar0);
}

void func_317()
{
	if (unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 7))
	{
		if (unk_0x05EFB6A616B6FADE(Local_137.f_2, 0))
		{
			if (func_645(unk_0xD4E735F4B6A956AC(), func_16(), 1))
			{
				func_318(1, 7, 0, 0, -1, -1, -1, -1, -1, 0);
			}
			else
			{
				func_318(0, 7, 0, 0, -1, -1, -1, -1, -1, 0);
			}
		}
		else if (unk_0x05EFB6A616B6FADE(Local_137.f_2, 1))
		{
			func_318(0, 8, 0, 0, -1, -1, -1, -1, -1, 0);
		}
		else if (unk_0x05EFB6A616B6FADE(Local_137.f_2, 2))
		{
			func_318(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
		}
		else if (unk_0x05EFB6A616B6FADE(Local_137.f_2, 3))
		{
			if (!func_654())
			{
				if (unk_0xD4E735F4B6A956AC() == func_6())
				{
					if (func_645(unk_0xD4E735F4B6A956AC(), func_16(), 0))
					{
						func_318(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
					}
					else
					{
						func_318(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
					}
				}
				else
				{
					func_318(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
				}
			}
			else
			{
				func_318(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
			}
		}
		else if (unk_0x05EFB6A616B6FADE(Local_137.f_2, 4))
		{
			func_318(0, 7, 0, 0, -1, -1, -1, -1, -1, 0);
		}
		else
		{
			func_318(0, 0, 0, 0, -1, -1, -1, -1, -1, 0);
		}
		unk_0xFA57C719261AA55D(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 7);
	}
}

void func_318(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x4C9BACA8D249CB13())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_426(unk_0xD4E735F4B6A956AC());
		Global_1667085.f_4 = func_425();
		Global_1667085.f_5 = func_424();
		if (func_66(unk_0xD4E735F4B6A956AC()) || func_67(unk_0xD4E735F4B6A956AC()))
		{
			Global_1667085.f_6 = 1;
		}
		else
		{
			Global_1667085.f_6 = 0;
		}
		Global_1667085.f_1 = func_420(bParam9);
		Global_1667085.f_8 = unk_0x5E0F2F352218B916();
		Global_1667085.f_9 = func_419(bParam0);
		Global_1667085.f_10 = iParam1;
		Global_1667085.f_17 = Global_1667085.f_2;
		Global_1667085.f_18 = Global_1667085.f_2;
		Global_1667085.f_19 = func_418();
		Global_1667085.f_21 = (Global_1667085.f_8 - Global_1667085.f_7);
		if (func_234(unk_0xD4E735F4B6A956AC(), 1))
		{
			Global_1667085.f_23 = func_419(func_50(1));
		}
		Global_1667085.f_24 = func_417(unk_0xD4E735F4B6A956AC());
		Global_1667085.f_28 = func_416(unk_0xD4E735F4B6A956AC());
		if (Global_1667085.f_24 > 2)
		{
			Global_1667085.f_24 = 2;
		}
		func_414(iVar0);
	}
	else
	{
		iVar0 = func_44(unk_0xD4E735F4B6A956AC());
	}
	if (func_47(iVar0))
	{
		Global_1666824.f_2 = func_425();
		Global_1666824.f_3 = func_424();
		Global_1666824.f_50 = iParam4;
		Global_1666824.f_51 = iParam5;
		Global_1666824.f_10 = unk_0x5E0F2F352218B916();
		Global_1666824.f_20 = (Global_1666824.f_10 - Global_1666824.f_9);
		Global_1666824.f_12 = iParam1;
		Global_1666824.f_19 = func_407(iVar0, bParam0, func_413(bParam3));
		if (bParam0)
		{
			Global_1666824.f_11 = 1;
		}
		else
		{
			Global_1666824.f_11 = 0;
		}
		if ((func_65(unk_0xD4E735F4B6A956AC()) || func_64(unk_0xD4E735F4B6A956AC())) || func_76(unk_0xD4E735F4B6A956AC()))
		{
			Global_1666824.f_8 = 1;
		}
		else
		{
			Global_1666824.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1666824.f_43 = 0;
			Global_1666824.f_45 = func_406(func_134(), iParam2);
			Global_1666824.f_47 = iParam7;
			Global_1666824.f_46 = iParam6;
			Global_1666824.f_52 = func_405(func_134(), iParam2);
		}
		func_403(iVar0);
	}
	else if (func_55(iVar0))
	{
		Global_1666878.f_2 = func_425();
		Global_1666878.f_3 = func_424();
		Global_1666878.f_10 = unk_0x5E0F2F352218B916();
		Global_1666878.f_19 = (Global_1666878.f_10 - Global_1666878.f_9);
		Global_1666878.f_12 = iParam1;
		if (bParam0)
		{
			Global_1666878.f_11 = 1;
		}
		else
		{
			Global_1666878.f_11 = 0;
		}
		if ((func_65(unk_0xD4E735F4B6A956AC()) || func_64(unk_0xD4E735F4B6A956AC())) || func_76(unk_0xD4E735F4B6A956AC()))
		{
			Global_1666878.f_8 = 1;
		}
		else
		{
			Global_1666878.f_8 = 0;
		}
		func_401(iVar0);
	}
	else if (func_95(iVar0))
	{
		Global_1666941.f_2 = func_425();
		Global_1666941.f_3 = func_424();
		Global_1666941.f_9 = unk_0x5E0F2F352218B916();
		Global_1666941.f_18 = (Global_1666941.f_9 - Global_1666941.f_8);
		Global_1666941.f_11 = iParam1;
		Global_1666941.f_7 = func_418();
		Global_1666941.f_42 = func_399(func_27(), 5);
		iVar1 = unk_0xD4E735F4B6A956AC();
		iVar2 = func_112(iVar1);
		Global_1666941.f_28 = iVar2;
		Global_1666941.f_29 = func_419((func_398(iVar1) || func_397(iVar1)));
		Global_1666941.f_30 = func_419(func_396(iVar1));
		Global_1666941.f_32 = func_419(func_395(iVar1));
		Global_1666941.f_33 = func_419(func_394(iVar1));
		Global_1666941.f_34 = func_419(func_393(iVar1));
		Global_1666941.f_35 = func_419(func_392(0, iVar1) == 1);
		Global_1666941.f_36 = func_419(func_391(iVar1));
		Global_1666941.f_37 = func_419(func_390(iVar1));
		Global_1666941.f_38 = func_419(func_389(iVar1));
		Global_1666941.f_39 = func_419(func_284(iVar1, iVar2, 0));
		Global_1666941.f_40 = func_419(func_284(iVar1, iVar2, 2));
		Global_1666941.f_41 = func_419(func_284(iVar1, iVar2, 1));
		if (func_388(iVar1))
		{
			Global_1666941.f_31 = 2;
		}
		else if (func_387(iVar1))
		{
			Global_1666941.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1666941.f_10 = 1;
		}
		else
		{
			Global_1666941.f_10 = 0;
		}
		if ((func_65(unk_0xD4E735F4B6A956AC()) || func_64(unk_0xD4E735F4B6A956AC())) || func_76(unk_0xD4E735F4B6A956AC()))
		{
			Global_1666941.f_6 = 1;
		}
		else
		{
			Global_1666941.f_6 = 0;
		}
		Global_1666941.f_21 = -2;
		Global_1666941.f_22 = -2;
		func_385(iVar0);
	}
	else if (func_94(iVar0))
	{
		Global_1666985.f_2 = func_425();
		Global_1666985.f_3 = func_424();
		if ((func_65(unk_0xD4E735F4B6A956AC()) || func_64(unk_0xD4E735F4B6A956AC())) || func_76(unk_0xD4E735F4B6A956AC()))
		{
			Global_1666985.f_6 = 1;
		}
		else
		{
			Global_1666985.f_6 = 0;
		}
		Global_1666985.f_9 = unk_0x5E0F2F352218B916();
		Global_1666985.f_10 = func_419(bParam0);
		Global_1666985.f_11 = iParam1;
		Global_1666985.f_17 = func_384(func_29());
		Global_1666985.f_18 = (Global_1666985.f_9 - Global_1666985.f_8);
		Global_1666985.f_20 = iParam8;
		Global_1666985.f_21 = -2;
		Global_1666985.f_22 = -2;
		Global_1666985.f_27 = func_383();
		Global_1666985.f_29 = func_28(6107, -1, 0);
		Global_1666985.f_30 = func_28(6103, -1, 0);
		Global_1666985.f_31 = func_28(6104, -1, 0);
		Global_1666985.f_32 = func_28(6106, -1, 0);
		Global_1666985.f_33 = func_28(6105, -1, 0);
		Global_1666985.f_34 = func_28(6108, -1, 0);
		Global_1666985.f_36 = func_419(func_50(1));
		Global_1666985.f_37 = func_381();
		func_360();
		func_358(iVar0);
	}
	else if (func_93(iVar0))
	{
		Global_1667039.f_2 = func_425();
		Global_1667039.f_3 = func_424();
		if ((func_65(unk_0xD4E735F4B6A956AC()) || func_64(unk_0xD4E735F4B6A956AC())) || func_76(unk_0xD4E735F4B6A956AC()))
		{
			Global_1667039.f_6 = 1;
		}
		else
		{
			Global_1667039.f_6 = 0;
		}
		Global_1667039.f_9 = unk_0x5E0F2F352218B916();
		Global_1667039.f_10 = func_419(bParam0);
		Global_1667039.f_11 = iParam1;
		Global_1667039.f_18 = (Global_1667039.f_9 - Global_1667039.f_8);
		Global_1667039.f_20 = iParam8;
		Global_1667039.f_23 = Global_786547;
		Global_1667039.f_36 = Global_786547.f_1;
		Global_1667039.f_24 = func_28(6157, -1, 0);
		Global_1667039.f_25 = func_28(6162, -1, 0);
		Global_1667039.f_26 = func_28(6163, -1, 0);
		Global_1667039.f_27 = func_419((((func_357() || func_356()) || func_355()) || func_354(unk_0xD4E735F4B6A956AC())));
		Global_1667039.f_28 = func_28(6164, -1, 0);
		Global_1667039.f_29 = func_419(func_353());
		Global_1667039.f_35 = -1;
		Global_1667039.f_38 = -1;
		Global_1667039.f_39 = Global_1667039.f_4;
		Global_1667039.f_40 = Global_1667039.f_5;
		Global_1667039.f_41 = func_425();
		Global_1667039.f_42 = func_419(func_50(1));
		Global_1667039.f_44 = Global_1667039.f_18;
		func_351(iVar0);
	}
	else if (func_88(iVar0))
	{
		if (Global_1667173.f_2 == -1)
		{
			Global_1667173.f_2 = func_425();
		}
		if (Global_1667173.f_3 == -1)
		{
			Global_1667173.f_3 = func_424();
		}
		if ((func_65(unk_0xD4E735F4B6A956AC()) || func_64(unk_0xD4E735F4B6A956AC())) || func_76(unk_0xD4E735F4B6A956AC()))
		{
			Global_1667173.f_6 = 1;
		}
		else
		{
			Global_1667173.f_6 = 0;
		}
		Global_1667173.f_1 = func_420(0);
		Global_1667173.f_7 = func_418();
		Global_1667173.f_9 = unk_0x5E0F2F352218B916();
		Global_1667173.f_10 = func_419(bParam0);
		Global_1667173.f_11 = iParam1;
		if (func_134() != -1)
		{
			Global_1667173.f_17 = func_350(func_134());
		}
		Global_1667173.f_18 = (Global_1667173.f_9 - Global_1667173.f_8);
		Global_1667173.f_19 = Global_2524719.f_6236;
		Global_1667173.f_28 = func_416(unk_0xD4E735F4B6A956AC());
		Global_1667173.f_29 = func_419(func_349(unk_0xD4E735F4B6A956AC()));
		Global_1667173.f_30 = func_419(func_348(unk_0xD4E735F4B6A956AC()));
		Global_1667173.f_31 = func_347(unk_0xD4E735F4B6A956AC());
		if (func_234(unk_0xD4E735F4B6A956AC(), 1))
		{
			Global_1667173.f_33 = func_419(func_50(1));
		}
		if (Global_1667173.f_34 > 2)
		{
			Global_1667173.f_34 = 2;
		}
		func_345(iVar0);
	}
	else if (func_92(iVar0))
	{
		Global_1667120.f_2 = func_425();
		Global_1667120.f_3 = func_424();
		if ((func_65(unk_0xD4E735F4B6A956AC()) || func_64(unk_0xD4E735F4B6A956AC())) || func_76(unk_0xD4E735F4B6A956AC()))
		{
			Global_1667120.f_6 = 1;
		}
		else
		{
			Global_1667120.f_6 = 0;
		}
		Global_1667120.f_1 = func_420(0);
		Global_1667120.f_9 = unk_0x5E0F2F352218B916();
		Global_1667120.f_10 = func_419(bParam0);
		Global_1667120.f_11 = iParam1;
		Global_1667120.f_18 = (Global_1667120.f_9 - Global_1667120.f_8);
		Global_1667120.f_28 = func_416(unk_0xD4E735F4B6A956AC());
		if (Global_1667120.f_28)
		{
			Global_1667120.f_29 = func_344(unk_0xD4E735F4B6A956AC());
		}
		else
		{
			Global_1667120.f_29 = 0;
		}
		Global_1667120.f_30 = func_328(unk_0xD4E735F4B6A956AC(), 4, -1);
		Global_1667120.f_31 = func_347(unk_0xD4E735F4B6A956AC());
		Global_1667120.f_32 = func_419(func_327(unk_0xD4E735F4B6A956AC()));
		Global_1667120.f_33 = func_419(func_326(unk_0xD4E735F4B6A956AC()));
		Global_1667120.f_34 = func_419(func_325(unk_0xD4E735F4B6A956AC()));
		Global_1667120.f_35 = func_419(func_324(unk_0xD4E735F4B6A956AC()));
		Global_1667120.f_36 = func_323(unk_0xD4E735F4B6A956AC());
		Global_1667120.f_37 = func_322(unk_0xD4E735F4B6A956AC());
		Global_1667120.f_39 = func_321(unk_0xD4E735F4B6A956AC());
		if (func_234(unk_0xD4E735F4B6A956AC(), 1))
		{
			Global_1667120.f_41 = func_419(func_50(1));
		}
		if (Global_1667120.f_42 > 2)
		{
			Global_1667120.f_42 = 2;
		}
		func_319(iVar0);
	}
	else
	{
		Global_1666806.f_6 = unk_0x5E0F2F352218B916();
		if (bParam0)
		{
			Global_1666806.f_7 = 1;
		}
		else
		{
			Global_1666806.f_7 = 0;
		}
		Global_1666806.f_8 = iParam1;
		if (Global_1666806.f_4 == 0)
		{
			if ((func_65(unk_0xD4E735F4B6A956AC()) || func_64(unk_0xD4E735F4B6A956AC())) || func_76(unk_0xD4E735F4B6A956AC()))
			{
				Global_1666806.f_4 = 1;
			}
		}
	}
}

void func_319(int iParam0)
{
	unk_0x9A604EC32EF4FB0D(&Global_1667120);
	func_320();
}

void func_320()
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1667120 = { Var0 };
}

int func_321(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_325, 12);
	}
	return 0;
}

int func_322(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_325, 10);
	}
	return 0;
}

int func_323(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_325, 11);
	}
	return 0;
}

bool func_324(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 4);
}

bool func_325(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 3);
}

bool func_326(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 2);
}

bool func_327(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 1);
}

int func_328(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_11() || !func_343(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_338(iParam0, iParam2);
		
		case 1:
			return func_336(iParam0, iParam2);
		
		case 3:
			return func_335(iParam0);
		
		case 2:
			return func_330(iParam0, iParam2);
		
		case 4:
			return func_329(iParam0);
		
		default:
	}
	return 0;
}

bool func_329(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 6);
}

int func_330(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_334(iParam0);
		
		case 11:
			return func_333(iParam0);
		
		case 12:
			return func_332(iParam0);
		
		case 13:
			return func_331(iParam0);
		
		default:
	}
	return 0;
}

bool func_331(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 15);
}

bool func_332(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 14);
}

bool func_333(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 13);
}

bool func_334(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 12);
}

bool func_335(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 5);
}

int func_336(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_337(iParam0);
		
		case 6:
			return func_327(iParam0);
		
		case 7:
			return func_326(iParam0);
		
		case 8:
			return func_325(iParam0);
		
		case 9:
			return func_324(iParam0);
		
		default:
	}
	return 0;
}

bool func_337(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 0);
}

int func_338(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_342(iParam0);
		
		case 1:
			return func_341(iParam0);
		
		case 2:
			return func_340(iParam0);
		
		case 3:
			return func_339(iParam0);
		
		case 4:
			return func_347(iParam0);
		
		default:
	}
	return 0;
}

bool func_339(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 10);
}

bool func_340(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 9);
}

bool func_341(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 8);
}

bool func_342(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 7);
}

bool func_343(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_344(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_328(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_328(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_328(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_328(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_345(int iParam0)
{
	unk_0x6481F441CE5CA40E(&Global_1667173);
	func_346();
}

void func_346()
{
	struct<39> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1667173 = { Var0 };
}

bool func_347(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_341, 31);
}

bool func_348(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_313.f_1, 0);
}

bool func_349(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_313.f_1, 19);
}

var func_350(int iParam0)
{
	return Global_1589747[iParam0 /*790*/].f_211.f_6;
}

void func_351(int iParam0)
{
	unk_0x0360568A8CE21561(&Global_1667039);
	func_352();
}

void func_352()
{
	struct<46> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1667039 = { Var0 };
	Global_1667039.f_16 = 0;
}

bool func_353()
{
	return func_28(6156, -1, 0) != 0;
}

int func_354(int iParam0)
{
	if (iParam0 != func_11())
	{
		return Global_1589747[iParam0 /*790*/].f_273.f_262 != 0;
	}
	return 0;
}

bool func_355()
{
	return func_28(6164, -1, 0) == 3;
}

bool func_356()
{
	return func_28(6164, -1, 0) == 2;
}

bool func_357()
{
	return func_28(6164, -1, 0) == 1;
}

void func_358(int iParam0)
{
	unk_0x04824802BBD52BB4(&Global_1666985);
	func_359();
}

void func_359()
{
	struct<54> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1666985 = { Var0 };
	Global_1666985.f_23 = 0;
	Global_1666985.f_24 = 0;
	Global_1666985.f_16 = 0;
}

void func_360()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_371(12));
		func_370(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1321304[iVar1 /*141*/].f_66 != 0 && func_362(Global_1321304[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2524719.f_885 != iVar1)
				{
					if (func_361(Global_1321304[iVar1 /*141*/].f_66))
					{
						if (Global_1321304[iVar1 /*141*/].f_66 != 0)
						{
							iVar3 = Global_1321304[iVar1 /*141*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1666985.f_38 = iVar3;
								break;
							
							case 1:
								Global_1666985.f_39 = iVar3;
								break;
							
							case 2:
								Global_1666985.f_40 = iVar3;
								break;
							
							case 3:
								Global_1666985.f_41 = iVar3;
								break;
							
							case 4:
								Global_1666985.f_42 = iVar3;
								break;
							
							case 5:
								Global_1666985.f_43 = iVar3;
								break;
							
							case 6:
								Global_1666985.f_44 = iVar3;
								break;
							
							case 7:
								Global_1666985.f_45 = iVar3;
								break;
							
							case 8:
								Global_1666985.f_46 = iVar3;
								break;
							
							case 9:
								Global_1666985.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_361(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case -1984275979:
		case -42959138:
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case -749299473:
		case -975345305:
		case -1700874274:
		case -392675425:
		case -1763555241:
		case 1043222410:
		case joaat("lazer"):
		case -1386191424:
		case 1565978651:
		case 1036591958:
		case -1007528109:
		case -32878452:
		case -1523619738:
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case 1181327175:
		case 447548909:
		case -726768679:
			return 1;
		
		default:
	}
	if (iParam0 == 1692272545)
	{
		return 1;
	}
	return 0;
}

int func_362(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x671704836D893828(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x4C9BACA8D249CB13()) || (iParam0 == joaat("buffalo3") && !unk_0x4C9BACA8D249CB13())) || (iParam0 == joaat("gauntlet2") && !unk_0x4C9BACA8D249CB13())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x4C9BACA8D249CB13()))
	{
		if (!func_369())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x730B2D99EC02BFBB())
		{
			if (unk_0xED2E7B72F90BB7CF(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x3B61940560400F58(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_368() && !func_367()) && !func_366()) && !func_365()) && !func_369())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x29A02C184A66D25E() || unk_0x47C01C0E6F4C1D06()) || unk_0x7DD04831D0FC44CA())
		{
		}
		else if (!func_366())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_364(iParam0))
		{
			return 0;
		}
	}
	if (!func_363(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_363(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_131())
	{
		return 1;
	}
	unk_0x0B2954993B98F51D(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x3B6DCE62F381F366(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_364(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2503689)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x5E0F2F352218B916();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6488 && !Global_262145.f_12797) && iVar1 < Global_262145.f_12798)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14095 && iVar1 < Global_262145.f_14107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14091 && iVar1 < Global_262145.f_14103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14092 && iVar1 < Global_262145.f_14104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14093 && iVar1 < Global_262145.f_14105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14094 && iVar1 < Global_262145.f_14106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14096 && iVar1 < Global_262145.f_14108)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14097 && iVar1 < Global_262145.f_14100)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14098 && iVar1 < Global_262145.f_14101)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14099 && iVar1 < Global_262145.f_14102)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16727 && iVar1 < Global_262145.f_16691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16722 && iVar1 < Global_262145.f_16686)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16726 && iVar1 < Global_262145.f_16690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16725 && iVar1 < Global_262145.f_16689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16719 && iVar1 < Global_262145.f_16683)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16720 && iVar1 < Global_262145.f_16684)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16723 && iVar1 < Global_262145.f_16687)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16724 && iVar1 < Global_262145.f_16688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16721 && iVar1 < Global_262145.f_16685)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16729 && iVar1 < Global_262145.f_16693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16730 && iVar1 < Global_262145.f_16694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16718 && iVar1 < Global_262145.f_16682)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16717 && iVar1 < Global_262145.f_16681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16716 && iVar1 < Global_262145.f_16680)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16728 && iVar1 < Global_262145.f_16692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16731 && iVar1 < Global_262145.f_16695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16732 && iVar1 < Global_262145.f_16696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16733 && iVar1 < Global_262145.f_16697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16734 && iVar1 < Global_262145.f_16698)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16879 && iVar1 < Global_262145.f_16901)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16880 && iVar1 < Global_262145.f_16902)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16881 && iVar1 < Global_262145.f_16903)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16882 && iVar1 < Global_262145.f_16904)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16883 && iVar1 < Global_262145.f_16905)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16884 && iVar1 < Global_262145.f_16906)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16886 && iVar1 < Global_262145.f_16907)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16887 && iVar1 < Global_262145.f_16908)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16888 && iVar1 < Global_262145.f_16909)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16889 && iVar1 < Global_262145.f_16910)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16890 && iVar1 < Global_262145.f_16911)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16891 && iVar1 < Global_262145.f_16912)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16892 && iVar1 < Global_262145.f_16913)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16898 && iVar1 < Global_262145.f_16920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16895 && iVar1 < Global_262145.f_16916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16896 && iVar1 < Global_262145.f_16917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16897 && iVar1 < Global_262145.f_16918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16885 && iVar1 < Global_262145.f_16919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16899 && iVar1 < Global_262145.f_16921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16893 && iVar1 < Global_262145.f_16914)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16894 && iVar1 < Global_262145.f_16915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16900 && iVar1 < Global_262145.f_16922)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18528 && iVar1 < Global_262145.f_18625)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18529 && iVar1 < Global_262145.f_18626)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18530 && iVar1 < Global_262145.f_18627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18531 && iVar1 < Global_262145.f_18628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18532 && iVar1 < Global_262145.f_18629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18533 && iVar1 < Global_262145.f_18630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18534 && iVar1 < Global_262145.f_18631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18535 && iVar1 < Global_262145.f_18632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18536 && iVar1 < Global_262145.f_18633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18537 && iVar1 < Global_262145.f_18634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18538 && iVar1 < Global_262145.f_18635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18539 && iVar1 < Global_262145.f_18636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18540 && iVar1 < Global_262145.f_18637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18541 && iVar1 < Global_262145.f_18638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18542 && iVar1 < Global_262145.f_18639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18543 && iVar1 < Global_262145.f_18640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18544 && iVar1 < Global_262145.f_18641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18545 && iVar1 < Global_262145.f_18642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18546 && iVar1 < Global_262145.f_18643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18547 && iVar1 < Global_262145.f_18644)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18548 && iVar1 < Global_262145.f_18645)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18549 && iVar1 < Global_262145.f_18646)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18550 && iVar1 < Global_262145.f_18647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18551 && iVar1 < Global_262145.f_18648)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18552 && iVar1 < Global_262145.f_18649)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19608 && iVar1 < Global_262145.f_19604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19609 && iVar1 < Global_262145.f_19605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19610 && iVar1 < Global_262145.f_19606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19611 && iVar1 < Global_262145.f_19607)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_20487 && iVar1 < Global_262145.f_20495)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_20488 && iVar1 < Global_262145.f_20496)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_20489 && iVar1 < Global_262145.f_20497)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_20490 && iVar1 < Global_262145.f_20498)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_20491 && iVar1 < Global_262145.f_20499)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_20492 && iVar1 < Global_262145.f_20500)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_21264 && iVar1 < Global_262145.f_21284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_21276 && iVar1 < Global_262145.f_21296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_21267 && iVar1 < Global_262145.f_21287)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_21277 && iVar1 < Global_262145.f_21297)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_21265 && iVar1 < Global_262145.f_21285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_21281 && iVar1 < Global_262145.f_21301)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_21279 && iVar1 < Global_262145.f_21299)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_21280 && iVar1 < Global_262145.f_21300)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_21275 && iVar1 < Global_262145.f_21295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_21282 && iVar1 < Global_262145.f_21302)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_21278 && iVar1 < Global_262145.f_21298)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_21274 && iVar1 < Global_262145.f_21294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_21266 && iVar1 < Global_262145.f_21286)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_21268 && iVar1 < Global_262145.f_21288)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_21269 && iVar1 < Global_262145.f_21289)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_21270 && iVar1 < Global_262145.f_21290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_21271 && iVar1 < Global_262145.f_21291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_21272 && iVar1 < Global_262145.f_21292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_21273 && iVar1 < Global_262145.f_21293)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_22225 && iVar1 < Global_262145.f_22253)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_22226 && iVar1 < Global_262145.f_22254)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_22227 && iVar1 < Global_262145.f_22255)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_22228 && iVar1 < Global_262145.f_22256)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_22229 && iVar1 < Global_262145.f_22257)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_22230 && iVar1 < Global_262145.f_22258)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_22231 && iVar1 < Global_262145.f_22259)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_22232 && iVar1 < Global_262145.f_22260)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_22233 && iVar1 < Global_262145.f_22261)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_22234 && iVar1 < Global_262145.f_22262)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_22235 && iVar1 < Global_262145.f_22263)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_22236 && iVar1 < Global_262145.f_22264)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_22237 && iVar1 < Global_262145.f_22265)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_22238 && iVar1 < Global_262145.f_22266)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_22239 && iVar1 < Global_262145.f_22267)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_22240 && iVar1 < Global_262145.f_22268)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_22241 && iVar1 < Global_262145.f_22269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_22242 && iVar1 < Global_262145.f_22270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_22243 && iVar1 < Global_262145.f_22271)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_22244 && iVar1 < Global_262145.f_22272)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_22245 && iVar1 < Global_262145.f_22273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_22246 && iVar1 < Global_262145.f_22274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_22247 && iVar1 < Global_262145.f_22275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_22248 && iVar1 < Global_262145.f_22276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_22249 && iVar1 < Global_262145.f_22277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_22250 && iVar1 < Global_262145.f_22278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_22251 && iVar1 < Global_262145.f_22279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_22252 && iVar1 < Global_262145.f_22280)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_23432 && iVar1 < Global_262145.f_23448)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_23433 && iVar1 < Global_262145.f_23449)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_23437 && iVar1 < Global_262145.f_23453)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_23440 && iVar1 < Global_262145.f_23456)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_23445 && iVar1 < Global_262145.f_23461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_23439 && iVar1 < Global_262145.f_23455)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_23431 && iVar1 < Global_262145.f_23447)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_23438 && iVar1 < Global_262145.f_23454)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_23444 && iVar1 < Global_262145.f_23460)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_23443 && iVar1 < Global_262145.f_23459)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_23434 && iVar1 < Global_262145.f_23450)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_23436 && iVar1 < Global_262145.f_23452)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_23446 && iVar1 < Global_262145.f_23462)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_23442 && iVar1 < Global_262145.f_23458)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_23435 && iVar1 < Global_262145.f_23451)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_23441 && iVar1 < Global_262145.f_23457)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_262145.f_23522 && iVar1 < Global_262145.f_23509)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_262145.f_23523 && iVar1 < Global_262145.f_23510)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_262145.f_23528 && iVar1 < Global_262145.f_23515)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_262145.f_23527 && iVar1 < Global_262145.f_23514)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_262145.f_23525 && iVar1 < Global_262145.f_23512)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_262145.f_23531 && iVar1 < Global_262145.f_23518)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_262145.f_23533 && iVar1 < Global_262145.f_23520)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_262145.f_23534 && iVar1 < Global_262145.f_23521)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_262145.f_23532 && iVar1 < Global_262145.f_23519)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_262145.f_23524 && iVar1 < Global_262145.f_23511)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_262145.f_23526 && iVar1 < Global_262145.f_23513)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_262145.f_23530 && iVar1 < Global_262145.f_23517)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_262145.f_23529 && iVar1 < Global_262145.f_23516)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1721676810)
	{
	}
	else if (iParam0 == -801550069)
	{
	}
	else if (iParam0 == 679453769)
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == 2139203625)
	{
	}
	else if (iParam0 == -1890996696)
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == -1146969353)
	{
	}
	else if (iParam0 == 1542143200)
	{
	}
	else if (iParam0 == -579747861)
	{
	}
	else if (iParam0 == 444994115)
	{
	}
	else if (iParam0 == 1637620610)
	{
	}
	else if (iParam0 == -755532233)
	{
	}
	else if (iParam0 == 540101442)
	{
	}
	else if (iParam0 == -1106120762)
	{
	}
	else if (iParam0 == -1478704292)
	{
	}
	else if (iParam0 == -2096690334)
	{
	}
	else if (iParam0 == 1591739866)
	{
		if (!Global_262145.f_25628 && iVar1 < Global_262145.f_25630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1168952148)
	{
		if (!Global_262145.f_24683 && iVar1 < Global_262145.f_24676)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1566607184)
	{
		if (!Global_262145.f_24684 && iVar1 < Global_262145.f_24677)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -331467772)
	{
		if (!Global_262145.f_24685 && iVar1 < Global_262145.f_24678)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1279262537)
	{
		if (!Global_262145.f_24686 && iVar1 < Global_262145.f_24679)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -49115651)
	{
		if (!Global_262145.f_25629 && iVar1 < Global_262145.f_25631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456744817)
	{
		if (!Global_262145.f_24687 && iVar1 < Global_262145.f_24680)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -507495760)
	{
		if (!Global_262145.f_24688 && iVar1 < Global_262145.f_24681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -286046740)
	{
		if (!Global_262145.f_24689 && iVar1 < Global_262145.f_24682)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_365()
{
	return 0;
}

int func_366()
{
	return 1;
}

int func_367()
{
	return 1;
}

int func_368()
{
	if (unk_0x05BEBC245254F6F2(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_369()
{
	int iVar0;
	
	if (unk_0xC29B8FF8374918FD())
	{
		if (unk_0x0A68AE586CCE49F6())
		{
			if (unk_0x3750826756EA2005())
			{
				unk_0x2AD48F3CEBA882E9(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0x2BCFB39E86340DAA(&iVar0, 2);
				unk_0x2BCFB39E86340DAA(&iVar0, 4);
				unk_0x2BCFB39E86340DAA(&iVar0, 6);
				unk_0x2BCFB39E86340DAA(&Global_25, 2);
				unk_0x2BCFB39E86340DAA(&Global_25, 4);
				unk_0x2BCFB39E86340DAA(&Global_25, 6);
				unk_0x93180BE33E7149EF(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x63141F5FDACF3D9B())
				{
					iVar0 = unk_0x3278E95F94254201(866);
					unk_0x2BCFB39E86340DAA(&iVar0, 0);
					unk_0xF8B43D25409B2964(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_144765 == 2)
	{
		return 1;
	}
	else if (Global_144765 == 3)
	{
		return 0;
	}
	if (unk_0x63141F5FDACF3D9B())
	{
		if (unk_0x05EFB6A616B6FADE(unk_0x3278E95F94254201(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_370(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10050)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1663734[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0x817B152F7462D506() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_371(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_380(iParam0);
		return func_379(iVar0);
	}
	return (func_372(iParam0, -1) * iParam0);
}

int func_372(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_375(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_374(iParam1))
			{
				return 0;
			}
			else if (func_373(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 <= 124 && iParam1 > 0)
			{
				if (Global_1049778[iParam1 /*1951*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049778[iParam1 /*1951*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049778[iParam1 /*1951*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
	}
	return 0;
}

int func_373(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_374(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_375(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_376(unk_0xD4E735F4B6A956AC(), 0);
	}
	if (bParam1)
	{
		if (func_376(unk_0xD4E735F4B6A956AC(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_376(int iParam0, bool bParam1)
{
	if (Global_1589590 != func_11())
	{
		if (!func_378(Global_1589590))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0xD4E735F4B6A956AC() != Global_1589590)
			{
				if (unk_0x05EFB6A616B6FADE(Global_2423801[Global_1589590 /*413*/].f_195, 24) || func_377(Global_1589590))
				{
					return 1;
				}
			}
		}
	}
	return unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_195, 24);
}

int func_377(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_195, 9);
	}
	return 0;
}

int func_378(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_341, 2);
	}
	return 0;
}

int func_379(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		default:
	}
	return -1;
}

int func_380(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

var func_381()
{
	var uVar0;
	
	uVar0 = func_382();
	if (!func_113())
	{
		if (func_134() != func_11())
		{
			uVar0 = func_417(func_134()) + 1;
		}
	}
	return uVar0;
}

int func_382()
{
	return func_417(unk_0xD4E735F4B6A956AC()) + 1;
}

int func_383()
{
	return func_28(6113, -1, 0);
}

int func_384(int iParam0)
{
	if (func_234(iParam0, 1))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_410;
	}
	return -1;
}

void func_385(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xF5E156DAD876D58B(&Global_1666941);
	func_386();
}

void func_386()
{
	struct<44> Var0;
	
	Global_1666941 = { Var0 };
	Global_1666941.f_23 = 0;
	Global_1666941.f_24 = 0;
	Global_1666941.f_16 = 0;
}

bool func_387(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_341, 12);
}

bool func_388(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_341, 13);
}

int func_389(int iParam0)
{
	if (iParam0 != func_11())
	{
		if ((unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_250, 12) || unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_250, 13)) || unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_250, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_390(int iParam0)
{
	if (iParam0 != func_11())
	{
		if ((unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_250, 0) || unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_250, 1)) || unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_250, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_391(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (((((unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_250, 3) || unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_250, 4)) || unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_250, 5)) || unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_250, 0)) || unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_250, 1)) || unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_250, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_392(int iParam0, int iParam1)
{
	if (iParam1 == func_11())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam1 /*790*/].f_273.f_250, 0))
			{
				return 3;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam1 /*790*/].f_273.f_250, 3))
			{
				return 2;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam1 /*790*/].f_273.f_250, 6))
			{
				return 4;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam1 /*790*/].f_273.f_250, 9))
			{
				return 1;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam1 /*790*/].f_273.f_250, 12))
			{
				return 7;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam1 /*790*/].f_273.f_250, 15))
			{
				return 5;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam1 /*790*/].f_273.f_250, 18))
			{
				return 6;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam1 /*790*/].f_273.f_250, 21))
			{
				return 0;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam1 /*790*/].f_273.f_250, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam1 /*790*/].f_273.f_250, 1))
			{
				return 3;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam1 /*790*/].f_273.f_250, 4))
			{
				return 2;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam1 /*790*/].f_273.f_250, 7))
			{
				return 4;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam1 /*790*/].f_273.f_250, 10))
			{
				return 1;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam1 /*790*/].f_273.f_250, 13))
			{
				return 7;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam1 /*790*/].f_273.f_250, 16))
			{
				return 5;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam1 /*790*/].f_273.f_250, 19))
			{
				return 6;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam1 /*790*/].f_273.f_250, 22))
			{
				return 0;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam1 /*790*/].f_273.f_250, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam1 /*790*/].f_273.f_250, 2))
			{
				return 3;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam1 /*790*/].f_273.f_250, 5))
			{
				return 2;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam1 /*790*/].f_273.f_250, 8))
			{
				return 4;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam1 /*790*/].f_273.f_250, 11))
			{
				return 1;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam1 /*790*/].f_273.f_250, 14))
			{
				return 7;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam1 /*790*/].f_273.f_250, 17))
			{
				return 5;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam1 /*790*/].f_273.f_250, 20))
			{
				return 6;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam1 /*790*/].f_273.f_250, 23))
			{
				return 0;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam1 /*790*/].f_273.f_250, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_393(int iParam0)
{
	if (iParam0 != func_11())
	{
		if ((unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_250, 6) || unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_250, 7)) || unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_250, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_394(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_341, 8);
}

bool func_395(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_341, 7);
}

bool func_396(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_341, 9);
}

bool func_397(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_341, 11);
}

bool func_398(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_341, 10);
}

int func_399(int iParam0, int iParam1)
{
	return func_28(func_400(iParam1), iParam0, 0);
}

int func_400(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3898;
		
		case 1:
			return 3927;
		
		case 2:
			return 3931;
		
		case 3:
			return 3935;
		
		case 4:
			return 3939;
		
		case 5:
			return 5450;
		
		default:
	}
	return 3898;
}

void func_401(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x4C513EAABEC3B689(&Global_1666878);
	func_402();
}

void func_402()
{
	struct<63> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1666878 = { Var0 };
	Global_1666878.f_24 = 0;
	Global_1666878.f_25 = 0;
	Global_1666878.f_17 = 0;
}

void func_403(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xB0C7A02288AD6DC0(&Global_1666824);
	func_404();
}

void func_404()
{
	struct<54> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1666824 = { Var0 };
	Global_1666824.f_29 = 0;
	Global_1666824.f_30 = 0;
	Global_1666824.f_17 = 0;
}

int func_405(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_284(iParam0, iParam1, 2);
	bVar1 = func_284(iParam0, iParam1, 1);
	bVar2 = func_284(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_406(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (func_279(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/] == iParam1)
			{
				return Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_407(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_102(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17569;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17568;
		}
		else
		{
			iVar0 = Global_262145.f_17550;
		}
		iVar1 = 19;
	}
	else if (func_412(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_37(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17549;
			iVar1 = 20;
		}
	}
	else if (func_47(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17569;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17568;
		}
		else
		{
			iVar0 = Global_262145.f_17550;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x96A237505F2C30D0(func_411(func_134()), func_410(func_134()), func_425(), func_424(), iVar1, iVar0);
	}
	func_409(iVar0);
	func_408(iVar0);
	return iVar0;
}

void func_408(int iParam0)
{
	int iVar0;
	
	iVar0 = func_28(3968, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_449 = iVar0;
	func_25(3968, iVar0, -1, 1, 0);
}

void func_409(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xD4E735F4B6A956AC();
	Global_1625435[iVar0 /*560*/].f_11.f_448 = (Global_1625435[iVar0 /*560*/].f_11.f_448 + iParam0);
	if (Global_1625435[iVar0 /*560*/].f_11.f_448 < -9999)
	{
		Global_1625435[iVar0 /*560*/].f_11.f_448 = 9999;
	}
	else if (Global_1625435[iVar0 /*560*/].f_11.f_448 > 9999)
	{
		Global_1625435[iVar0 /*560*/].f_11.f_448 = 9999;
	}
}

int func_410(int iParam0)
{
	if (iParam0 == func_11())
	{
		return -1;
	}
	return Global_1625435[iParam0 /*560*/].f_11.f_8[1];
}

int func_411(int iParam0)
{
	if (iParam0 == func_11())
	{
		return -1;
	}
	return Global_1625435[iParam0 /*560*/].f_11.f_8[0];
}

int func_412(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_413(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_65(unk_0xD4E735F4B6A956AC()) || func_76(unk_0xD4E735F4B6A956AC()))
	{
		return 1;
	}
	return 0;
}

void func_414(var uParam0)
{
	unk_0x2905CF64A0DAFE9F(&Global_1667085);
	func_415();
}

void func_415()
{
	struct<35> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1667085 = { Var0 };
}

int func_416(int iParam0)
{
	if (iParam0 != func_11())
	{
		return Global_1589747[iParam0 /*790*/].f_273.f_313 != 0;
	}
	return 0;
}

int func_417(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_11.f_19;
}

int func_418()
{
	int iVar0;
	
	if (func_130())
	{
		return 4;
	}
	else if (func_113())
	{
		if (func_311(unk_0xD4E735F4B6A956AC()))
		{
			return 8;
		}
		return 6;
	}
	if (func_50(1))
	{
		iVar0 = func_384(unk_0xD4E735F4B6A956AC());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_132(1))
	{
		if (func_311(func_134()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_419(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_420(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_426(unk_0xD4E735F4B6A956AC());
	}
	else
	{
		iVar0 = func_44(unk_0xD4E735F4B6A956AC());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_423(unk_0xD4E735F4B6A956AC());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_422(unk_0xD4E735F4B6A956AC());
			if (func_89(func_90(unk_0xD4E735F4B6A956AC())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_422(unk_0xD4E735F4B6A956AC());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_421(unk_0xD4E735F4B6A956AC());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_421(unk_0xD4E735F4B6A956AC());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_421(int iParam0)
{
	if (func_44(unk_0xD4E735F4B6A956AC()) == 238 || func_44(unk_0xD4E735F4B6A956AC()) == 249)
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_457;
	}
	return -1;
}

int func_422(int iParam0)
{
	if (func_44(unk_0xD4E735F4B6A956AC()) == 237 || func_44(unk_0xD4E735F4B6A956AC()) == 250)
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_456;
	}
	return -1;
}

int func_423(int iParam0)
{
	if (func_426(iParam0) == 236)
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_455;
	}
	return -1;
}

int func_424()
{
	if (Global_1666806.f_3 != 0)
	{
		return Global_1666806.f_3;
	}
	return -1;
}

int func_425()
{
	if (Global_1666806.f_2 != 0)
	{
		return Global_1666806.f_2;
	}
	return -1;
}

int func_426(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1625435[iVar0 /*560*/];
	}
	return -1;
}

bool func_427(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_11.f_4, iParam1);
}

void func_428(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<2> Var22;
	
	if (func_549(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_547() || iParam2 == 27)
	{
		if (func_498(iParam1, iParam2, uParam3, Global_1574168, 0, func_545(), sParam7))
		{
			func_497(1);
			if ((!func_495() && !func_493()) || unk_0x05EFB6A616B6FADE(Global_2524719.f_4574, 1))
			{
				if (func_492())
				{
					func_490();
				}
				else
				{
					unk_0xCD282E433560A509(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_489(1);
						Global_1574168 = 0;
						iVar19 = -1;
						if (Global_1574389 != 1)
						{
							func_488(iParam1, 0, 0);
							if (unk_0x05EFB6A616B6FADE(uParam3->f_33, 7))
							{
								unk_0xFA57C719261AA55D(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = -1;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_5(unk_0x1483A8AE554B8B2B(iVar17), 0, 1))
								{
									iVar3 = unk_0x1483A8AE554B8B2B(iVar17);
									if (!func_200(iVar3, 0))
									{
										if ((func_487(iVar3) || Global_2423801[iVar3 /*413*/].f_236 != -1) || func_12(iVar3))
										{
											iVar9 = iVar3;
											if (func_114(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_486(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_485(unk_0xD4E735F4B6A956AC(), 0) && func_44(unk_0xD4E735F4B6A956AC()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_484())
							{
								if (func_5(unk_0x1483A8AE554B8B2B(iVar17), 0, 1))
								{
									iVar3 = unk_0x1483A8AE554B8B2B(iVar17);
								}
								else
								{
									iVar3 = func_11();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_483(iVar3) && func_479(iVar3, iParam2)) && func_5(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1589747[iVar9 /*790*/].f_211.f_6;
								Var6 = { func_474(iVar3) };
								if (iVar3 == unk_0xD4E735F4B6A956AC())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0xB330C43B9B7B1724(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_157(iVar3) };
								iVar5 = func_468(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = unk_0x18167C9C4C1E9195(iVar5);
								}
								Global_1574168++;
								if ((uParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_22;
								}
								if ((uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_31;
								}
								if ((uParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != -1 || (uParam0[iVar17 /*42*/])->f_22 != -1f) || (uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_484())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_463(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_462(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								iVar16 = func_460(iVar3, 0);
								if (bVar2)
								{
									if (func_234(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_459(iParam5))
								{
									func_458(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_458(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								unk_0x2BCFB39E86340DAA(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = unk_0x1483A8AE554B8B2B(iVar17);
							if (func_5(iVar3, 0, 1) && !unk_0x05EFB6A616B6FADE(iVar14, iVar3))
							{
								iVar3 = unk_0x1483A8AE554B8B2B(iVar17);
							}
							else
							{
								iVar3 = func_11();
							}
							if (func_483(iVar3))
							{
								if (func_5(unk_0x1483A8AE554B8B2B(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1589747[iVar9 /*790*/].f_211.f_6;
									Var6 = { func_474(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_157(iVar3) };
									iVar5 = func_468(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0x18167C9C4C1E9195(iVar5);
									}
									Global_1574168++;
									iVar16 = func_460(iVar3, 1);
									if (bVar2)
									{
										if (func_234(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
									func_441(iVar3, unk_0xB330C43B9B7B1724(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0x05EFB6A616B6FADE(uParam3->f_33, 11))
						{
							func_438(uParam3, iParam1);
						}
						func_8(&(uParam3->f_21));
						func_437();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x05EFB6A616B6FADE(uParam3->f_33, 7))
						{
							func_436(uParam3, iParam1);
							func_435(iParam1, 0, 1);
							unk_0x2BCFB39E86340DAA(&(uParam3->f_33), 7);
						}
						func_436(uParam3, iParam1);
						if (!unk_0x05EFB6A616B6FADE(uParam3->f_33, 11))
						{
							unk_0x2BCFB39E86340DAA(&(uParam3->f_33), 11);
						}
						if (func_431(uParam3))
						{
							Global_1574389 = 1;
						}
						func_429(uParam3);
						if (Global_1574389 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574389 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x0FA486DE15EB3004(*iParam1))
					{
						unk_0x0A74F1E9CF777638(7);
						unk_0x84829313FB8AC81C(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x0A74F1E9CF777638(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_437();
			func_489(0);
			if (unk_0x05EFB6A616B6FADE(uParam3->f_33, 7))
			{
				unk_0xFA57C719261AA55D(&(uParam3->f_33), 7);
			}
			if (unk_0x05EFB6A616B6FADE(uParam3->f_33, 10))
			{
				unk_0xFA57C719261AA55D(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x0DA2C67B1175034B();
}

void func_429(var uParam0)
{
	if (!func_21(&(uParam0->f_21)))
	{
		func_20(&(uParam0->f_21), 0, 0);
	}
	else if (func_19(&(uParam0->f_21), 250, 0))
	{
		func_8(&(uParam0->f_21));
		func_430(0);
	}
}

void func_430(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574389 != 2)
		{
			Global_1574389 = 2;
		}
	}
	else
	{
		switch (Global_1574389)
		{
			case 0:
				Global_1574389 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_431(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = unk_0x1483A8AE554B8B2B(uParam0->f_37);
	if (iVar3 != func_11() && func_5(iVar3, 0, 1))
	{
		Var2 = { func_157(iVar3) };
		iVar1 = func_434(uParam0, uParam0->f_37);
		if (func_433(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x8BD51077CCC26171(&Var2))
					{
						if (unk_0x086B54395A0B9AE6(&Var2))
						{
							iVar4 = 1;
							func_432(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x91EBA8E99A43BD36(&Var2))
					{
						iVar4 = 1;
						func_432(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x8BD51077CCC26171(&Var2))
					{
						if (!unk_0x086B54395A0B9AE6(&Var2))
						{
							iVar4 = 1;
							func_432(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_432(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x8BD51077CCC26171(&Var2))
					{
						if (!unk_0x91EBA8E99A43BD36(&Var2))
						{
							iVar4 = 1;
							func_432(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x91EBA8E99A43BD36(&Var2))
					{
						iVar4 = 1;
						func_432(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_432(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_433(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x09BF290B57B95740(&uParam0, 13);
}

var func_434(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_435(int iParam0, bool bParam1, int iParam2)
{
	if (unk_0x31A9E530D137684F(*iParam0, "COLLAPSE"))
	{
		unk_0x233A5B4A35140C6B(bParam1);
		unk_0x271C1332F482646C();
	}
	if (iParam2 == 1)
	{
		if (unk_0x31A9E530D137684F(*iParam0, "DISPLAY_VIEW"))
		{
			unk_0x271C1332F482646C();
		}
	}
}

void func_436(var uParam0, int iParam1)
{
	if (!unk_0x05EFB6A616B6FADE(uParam0->f_33, 10))
	{
		unk_0x31A9E530D137684F(*iParam1, "SET_HIGHLIGHT");
		unk_0x380580A1A1667F69(uParam0->f_35);
		unk_0x271C1332F482646C();
		unk_0x2BCFB39E86340DAA(&(uParam0->f_33), 10);
	}
}

void func_437()
{
	if (Global_1574389 != 0)
	{
		Global_1574389 = 0;
	}
}

void func_438(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x1483A8AE554B8B2B(iVar0);
		if (iVar2 != func_11())
		{
			if (func_5(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_440(uParam0->f_38[iVar0 /*2*/], 0);
					func_439(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1589747[iVar0 /*790*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_439(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x0FA486DE15EB3004(*uParam0))
	{
		if (unk_0x31A9E530D137684F(*uParam0, "SET_ICON"))
		{
			unk_0x380580A1A1667F69(iParam1);
			unk_0x380580A1A1667F69(iParam2);
			if (iParam2 == 65)
			{
				unk_0x380580A1A1667F69(iParam3);
			}
			unk_0x271C1332F482646C();
		}
	}
}

int func_440(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_441(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_457() && iParam4 < func_456())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574170)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574389 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x31A9E530D137684F(*iParam2, sVar1))
		{
			unk_0x380580A1A1667F69(iParam4);
			if (unk_0x05EFB6A616B6FADE(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_455("");
			}
			else
			{
				unk_0x380580A1A1667F69(iParam10);
			}
			func_455(sParam1);
			unk_0x380580A1A1667F69(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_455("");
			}
			else
			{
				unk_0x380580A1A1667F69(65);
			}
			unk_0x380580A1A1667F69(-1);
			func_455("");
			if (uParam3->f_108 == 6)
			{
				func_455("");
			}
			else
			{
				func_455(&sParam5);
			}
			func_446(uParam3, iParam0);
			unk_0x528BE75B327CACFC(sParam9);
			unk_0x528BE75B327CACFC(sParam9);
			if (func_445(uParam3))
			{
				func_444("DPAD_FRIEND");
			}
			else if (func_443(uParam3))
			{
				func_444("DPAD_FRIEND");
			}
			else if (func_442(uParam3))
			{
				func_444("DPAD_CREW");
			}
			else
			{
				func_444("");
			}
			unk_0x271C1332F482646C();
		}
	}
}

bool func_442(var uParam0)
{
	return unk_0x05EFB6A616B6FADE(uParam0->f_33, 6);
}

bool func_443(var uParam0)
{
	return unk_0x05EFB6A616B6FADE(uParam0->f_33, 5);
}

void func_444(char* sParam0)
{
	unk_0x390B339C943A8A54(sParam0);
	unk_0xD481829E3E36543B();
}

int func_445(var uParam0)
{
	if (func_443(uParam0) && func_442(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_446(var uParam0, int iParam1)
{
	if (func_454(iParam1))
	{
		unk_0x380580A1A1667F69(121);
	}
	else if (func_450(iParam1))
	{
		unk_0x380580A1A1667F69(122);
	}
	else if (((unk_0x05EFB6A616B6FADE(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0x05EFB6A616B6FADE(Global_2423801[iParam1 /*413*/].f_410, 0))
	{
		unk_0x380580A1A1667F69(123);
	}
	else
	{
		if (func_447())
		{
			uParam0->f_36 = 0;
		}
		unk_0x233A5B4A35140C6B(uParam0->f_36);
	}
}

int func_447()
{
	if (unk_0xD8B89B387D170E27())
	{
		if (func_448() || func_223())
		{
			return 1;
		}
	}
	return 0;
}

int func_448()
{
	if (unk_0xD8B89B387D170E27())
	{
		return func_223();
	}
	return func_449(Global_4456448.f_130782);
}

int func_449(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4984[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_450(int iParam0)
{
	if ((func_5(iParam0, 0, 1) && func_451()) && func_51(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_451()
{
	if (func_78(unk_0xD4E735F4B6A956AC()) || func_453())
	{
		if (!func_452(unk_0xD4E735F4B6A956AC(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_452(int iParam0, int iParam1)
{
	if (func_426(iParam0) == iParam1)
	{
		return func_67(iParam0);
	}
	return 0;
}

int func_453()
{
	switch (func_44(unk_0xD4E735F4B6A956AC()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_454(int iParam0)
{
	if (func_447())
	{
		if (func_5(iParam0, 0, 1))
		{
			return func_114(iParam0);
		}
	}
	if ((func_5(iParam0, 0, 1) && func_451()) && func_41(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_455(char* sParam0)
{
	unk_0x0BAAED7962F122D5(sParam0);
}

int func_456()
{
	int iVar0;
	
	if (Global_1574170)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_457()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574170)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_458(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_457() && iParam3 < func_456())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574170)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574389 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x0FA486DE15EB3004(*iParam1))
		{
			if (unk_0x31A9E530D137684F(*iParam1, sVar1))
			{
				unk_0x380580A1A1667F69(iParam3);
				if (unk_0x05EFB6A616B6FADE(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_455("");
				}
				else
				{
					unk_0x380580A1A1667F69(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x429D45A6C6520026(sParam16))
				{
					func_444(sParam16);
				}
				else
				{
					func_455(&(uParam2->f_1));
				}
				unk_0x380580A1A1667F69(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_455("");
				}
				else
				{
					unk_0x380580A1A1667F69(65);
				}
				if (iParam12 == 1)
				{
					unk_0x380580A1A1667F69(iVar0);
				}
				else
				{
					unk_0x380580A1A1667F69(-1);
				}
				if (func_484())
				{
					func_455("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x429D45A6C6520026(sParam16))
				{
					unk_0x390B339C943A8A54("FM_AE_ONE_INT");
					unk_0x4FDA9E6EF359F8A9(sParam16);
					unk_0xCDA87E1DA52C8C9D(iParam17);
					unk_0xD481829E3E36543B();
				}
				else if (uParam2->f_108 == 5 && !unk_0x429D45A6C6520026(sParam16))
				{
					unk_0x390B339C943A8A54("FM_AE_ONE_INT");
					unk_0x4FDA9E6EF359F8A9(sParam16);
					unk_0xCDA87E1DA52C8C9D(iParam17);
					unk_0xD481829E3E36543B();
				}
				else if (uParam2->f_108 == 7 && !unk_0x429D45A6C6520026(sParam16))
				{
					unk_0x390B339C943A8A54("FM_AE_TWO_INT");
					unk_0x4FDA9E6EF359F8A9(sParam16);
					unk_0xCDA87E1DA52C8C9D(iParam17);
					unk_0xD481829E3E36543B();
				}
				else if (uParam2->f_108 == 8 && !unk_0x429D45A6C6520026(&(uParam2->f_104)))
				{
					unk_0x390B339C943A8A54("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x1757EE80C206FA5E(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0xCDA87E1DA52C8C9D(iParam10);
					}
					unk_0x4FDA9E6EF359F8A9(&(uParam2->f_104));
					unk_0xD481829E3E36543B();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x390B339C943A8A54("FM_AE_CASH");
					unk_0x976BD422410BF38A(iParam10, 1);
					unk_0xD481829E3E36543B();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x390B339C943A8A54("FM_AE_CASH");
						unk_0x976BD422410BF38A(iParam10, 1);
						unk_0xD481829E3E36543B();
					}
					else
					{
						unk_0x390B339C943A8A54("FM_NG_CASH");
						unk_0x976BD422410BF38A(iParam10, 1);
						unk_0xD481829E3E36543B();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x429D45A6C6520026(&(uParam2->f_104)))
					{
						func_444(&(uParam2->f_104));
					}
					else
					{
						func_455("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x390B339C943A8A54("STRING");
					unk_0x90182C5171067861(iParam14, 6);
					unk_0xD481829E3E36543B();
				}
				else if (fParam13 != -1f)
				{
					unk_0x390B339C943A8A54("NUMBER");
					unk_0x1757EE80C206FA5E(fParam13, 1);
					unk_0xD481829E3E36543B();
				}
				else if (iParam10 != -1)
				{
					unk_0x380580A1A1667F69(iParam10);
				}
				else
				{
					func_455("");
				}
				if (uParam2->f_108 == 6)
				{
					func_455("");
				}
				else
				{
					func_455(&sParam4);
				}
				func_446(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x429D45A6C6520026(sParam8))
				{
					func_455("");
					func_455("");
				}
				else
				{
					unk_0x528BE75B327CACFC(sParam8);
					unk_0x528BE75B327CACFC(sParam8);
				}
				if (func_445(uParam2))
				{
					func_444("DPAD_FRIEND");
				}
				else if (func_443(uParam2))
				{
					func_444("DPAD_FRIEND");
				}
				else if (func_442(uParam2))
				{
					func_444("DPAD_CREW");
				}
				else
				{
					func_444("");
				}
				unk_0x271C1332F482646C();
			}
		}
	}
}

int func_459(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_460(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_78(iParam0)) && !func_76(iParam0))
	{
		iVar0 = func_461();
	}
	iVar1 = func_220(iParam0);
	if (!iVar1 == -1)
	{
		return func_218(iVar1);
	}
	return iVar0;
}

int func_461()
{
	return 21;
}

char* func_462(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0xED306E4067508929())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0xED306E4067508929())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_463(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_467(iParam3))
	{
		*fParam1 = (func_464(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_459(iParam3))
	{
		*fParam1 = (func_464(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_464(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0xED306E4067508929())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_466(to_float(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xED306E4067508929())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_465(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_465(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_466(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_467(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_468(int iParam0)
{
	int iVar0;
	
	iVar0 = func_471(iParam0);
	if (iVar0 == -1)
	{
		func_469(iParam0, 1);
		return 0;
	}
	Global_1379953[iVar0 /*5*/].f_4 = 1;
	return Global_1379953[iVar0 /*5*/].f_2;
}

void func_469(int iParam0, bool bParam1)
{
	if (!func_5(iParam0, 0, 1))
	{
		return;
	}
	if (func_471(iParam0) != -1)
	{
		return;
	}
	if (Global_1380116)
	{
		if (iParam0 == Global_1380116.f_1)
		{
			return;
		}
	}
	if (func_470(iParam0))
	{
		return;
	}
	if (Global_1380154 >= 32)
	{
		return;
	}
	Global_1380121[Global_1380154] = iParam0;
	Global_1380154++;
	if (bParam1)
	{
	}
}

int func_470(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1380154)
	{
		if (Global_1380121[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_471(int iParam0)
{
	int iVar0;
	
	if (!func_5(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1380114 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1380114)
	{
		if (Global_1379953[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x07D08EE9B44B4EE9(Global_1379953[iVar0 /*5*/].f_2) && unk_0x2C58CFA8E806E25E(Global_1379953[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_472(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_472(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1380114)
	{
		return;
	}
	if (unk_0x07D08EE9B44B4EE9(Global_1379953[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1379953[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0x18167C9C4C1E9195(Global_1379953[iParam0 /*5*/].f_2), 64);
			unk_0x422B7FAC2AC425AD(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0xAAA14DE52F34B110(Global_1379953[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1380114)
	{
		Global_1379953[iVar2 /*5*/] = { Global_1379953[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_473(&(Global_1379953[iVar2 /*5*/]));
	Global_1380114 = (Global_1380114 - 1);
}

void func_473(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_11();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x4C9BACA8D249CB13())
	{
		uParam0->f_3 = unk_0xFFCC7EBF88BDEE54();
	}
}

struct<4> func_474(int iParam0)
{
	char cVar0[32];
	
	if (func_5(iParam0, 0, 1))
	{
		Global_2503649 = { func_157(iParam0) };
		if (unk_0x29A02C184A66D25E())
		{
			if (func_433(Global_2503649))
			{
				if (!unk_0xDD2275BE82C4DA3E(&Global_2503649))
				{
					return cVar0;
				}
			}
		}
		else if (!unk_0x804C0CBA285C7A35(0))
		{
			return cVar0;
		}
		if (func_478(&Global_2503649))
		{
			Global_2503579 = { func_476(iParam0) };
			func_475(&Global_2503579, &cVar0);
		}
	}
	return cVar0;
}

void func_475(var uParam0, char* sParam1)
{
	unk_0x728192F7FED00EAE(uParam0, 35, sParam1);
}

struct<35> func_476(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_477(iParam0))
	{
		return Global_1312889[unk_0xD4E735F4B6A956AC() /*35*/];
	}
	Var0 = { func_157(iParam0) };
	unk_0xE087FDE0E2FA8ADF(&Var1, 35, &Var0);
	return Var1;
}

int func_477(int iParam0)
{
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		return 1;
	}
	return 0;
}

int func_478(var uParam0)
{
	if (unk_0x65A878D380D59179())
	{
		if (unk_0xD1832FEBE50B1AB1() && unk_0xE0B3F7A8017F6425(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_479(int iParam0, int iParam1)
{
	if (iParam1 == 26)
	{
		if ((func_77(iParam0) || func_482(iParam0)) || func_481(iParam0))
		{
			return 0;
		}
	}
	if (!func_480(iParam0))
	{
		return 0;
	}
	if ((!func_487(iParam0) && Global_2423801[iParam0 /*413*/].f_236 == -1) && !func_12(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_480(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_142, 22);
}

bool func_481(int iParam0)
{
	if (func_77(iParam0))
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_1, 8);
}

int func_482(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_1, 10) || unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_1, 9));
	}
	return 0;
}

int func_483(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (func_200(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x05EFB6A616B6FADE(Global_1589747[iVar0 /*790*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_484()
{
	switch (func_44(unk_0xD4E735F4B6A956AC()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_426(unk_0xD4E735F4B6A956AC()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_76(unk_0xD4E735F4B6A956AC()))
	{
		switch (func_44(unk_0xD4E735F4B6A956AC()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_452(unk_0xD4E735F4B6A956AC(), 236))
	{
		return 1;
	}
	return 0;
}

int func_485(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_33 != -1 && func_36(Global_1625435[iParam0 /*560*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_32 != -1)
	{
		if (func_36(Global_1625435[iParam0 /*560*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

void func_486(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_5(unk_0x1483A8AE554B8B2B(iVar0), 0, 1))
		{
			iVar1 = unk_0x1483A8AE554B8B2B(iVar0);
			if (!func_200(iVar1, 0))
			{
				if ((func_487(iVar1) || Global_2423801[iVar1 /*413*/].f_236 != -1) || func_12(iVar1))
				{
					if (func_645(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_487(int iParam0)
{
	if (func_5(iParam0, 0, 1))
	{
		if (func_5(unk_0xD4E735F4B6A956AC(), 0, 1))
		{
			if (unk_0xBC6A832F36065FDF(iParam0, unk_0xD4E735F4B6A956AC()) || func_44(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_488(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x0FA486DE15EB3004(*iParam0))
	{
		unk_0x31A9E530D137684F(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x380580A1A1667F69(iParam1);
		unk_0x380580A1A1667F69(iParam2);
		unk_0x271C1332F482646C();
	}
}

void func_489(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1368242.f_2 == 0)
		{
			Global_1368242.f_2 = 1;
		}
	}
	else if (Global_1368242.f_2 == 1)
	{
		Global_1368242.f_2 = 0;
	}
}

void func_490()
{
	if (unk_0x05EFB6A616B6FADE(Global_2524719.f_4574, 1))
	{
		if (func_79())
		{
			func_491();
		}
	}
}

void func_491()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437022.f_2704[iVar0 /*80*/].f_2 != 0)
		{
			Global_2437022.f_2704[iVar0 /*80*/].f_2 = 5;
			unk_0x2BCFB39E86340DAA(&(Global_2437022.f_2704[iVar0 /*80*/].f_69), 0);
		}
		iVar0++;
	}
}

int func_492()
{
	if (unk_0x05EFB6A616B6FADE(Global_2524719.f_4574, 0) && func_79())
	{
		return 1;
	}
	if (unk_0x05EFB6A616B6FADE(Global_2524719.f_4574, 1) && func_79())
	{
		return 1;
	}
	return 0;
}

int func_493()
{
	if (func_79())
	{
		if (func_494(Global_2437022.f_2704[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_494(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

int func_495()
{
	if (func_79())
	{
		if (func_496(Global_2437022.f_2704[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_496(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_497(int iParam0)
{
	if (Global_1368242.f_1 != Global_1368242)
	{
		Global_1368242.f_1 = Global_1368242;
	}
	if (Global_1368242 != iParam0)
	{
		Global_1368242 = iParam0;
	}
}

int func_498(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	char* sVar5;
	int iVar6;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_544(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_543();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_542())
		{
			if (func_541() > 0 && Global_1574170)
			{
				unk_0xACB14342D115775D();
				unk_0x332297B49C4256C3(fVar4);
				unk_0xD8C147DA332E7F06(18);
				if (unk_0xE06AA0996C4E4E03())
				{
					unk_0x657F3224D1A882F4();
				}
				unk_0xD8C147DA332E7F06(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_525())
		{
			func_524(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x05EFB6A616B6FADE(Global_2524719.f_4577, 26))
	{
		func_524(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_21(&(uParam2->f_19)))
	{
		if (func_541() == 1)
		{
			func_523(bVar3, iParam0, 0);
			func_20(&(uParam2->f_19), 0, 0);
			func_524(iParam0, uParam2, 0);
			unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4578), 5);
		}
	}
	if (func_21(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xE06AA0996C4E4E03())
		{
			unk_0x657F3224D1A882F4();
		}
		unk_0xD8C147DA332E7F06(10);
		if (func_19(&(uParam2->f_19), 10000, 0) || (func_541() == 0 && !bParam5))
		{
			func_524(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_522();
				if (iParam1 == 26 || iParam1 == 27)
				{
					unk_0xACB14342D115775D();
				}
				unk_0xD8C147DA332E7F06(18);
			}
			if (!unk_0x05EFB6A616B6FADE(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_522();
					if (iParam1 == 26 || iParam1 == 27)
					{
						unk_0xACB14342D115775D();
					}
					unk_0xD8C147DA332E7F06(18);
				}
				unk_0x332297B49C4256C3(fVar4);
				if (func_523(bVar3, iParam0, 0))
				{
					func_488(iParam0, 0, 0);
					sVar1 = func_520(iParam1, &(Global_4456448.f_130789), bParam4);
					Var0 = { func_518(iParam1) };
					if (bParam4)
					{
						func_515(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_508(iParam0, func_512(uParam2), func_509(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar5 = func_506(uParam2);
						if (!unk_0x429D45A6C6520026(sParam6))
						{
							sVar5 = sParam6;
						}
						func_504(iParam0, sVar5, func_505(), -1);
					}
					else if (func_447())
					{
						uParam2->f_34 = Global_1574169;
						func_515(iParam0, sVar1, &Var0, 1, -1, Global_1574169, 1);
					}
					else if (bVar2)
					{
						uParam2->f_34 = Global_1574169;
						func_515(iParam0, sVar1, "", 0, -1, Global_1574169, 1);
					}
					else
					{
						iVar6 = func_499(iParam1);
						func_515(iParam0, sVar1, &Var0, 1, iVar6, -1, 1);
					}
					unk_0x2BCFB39E86340DAA(&(uParam2->f_33), 0);
				}
			}
			if (unk_0x05EFB6A616B6FADE(uParam2->f_33, 0))
			{
				Global_1574168 = uParam3;
				Global_1574167 = 1;
				unk_0x332297B49C4256C3(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1574169)
					{
						unk_0xFA57C719261AA55D(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_499(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_503())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
		case 30:
		case 29:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 25:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_502(unk_0xD4E735F4B6A956AC()))
			{
				iVar0 = 20;
			}
			if (func_501(unk_0xD4E735F4B6A956AC()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_500(unk_0xD4E735F4B6A956AC()))
	{
		iVar0 = 2;
	}
	if (func_180())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_500(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 4;
}

bool func_501(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 7;
}

bool func_502(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 2;
}

bool func_503()
{
	return Global_4456448.f_1 == 0;
}

void func_504(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x0FA486DE15EB3004(*iParam0))
	{
		unk_0x31A9E530D137684F(*iParam0, "SET_TITLE");
		if (unk_0x429D45A6C6520026(sParam2))
		{
			func_444(sParam1);
		}
		else
		{
			unk_0x390B339C943A8A54("FM_AE_BRACKT");
			unk_0x4FDA9E6EF359F8A9(sParam1);
			unk_0x4FDA9E6EF359F8A9(sParam2);
			unk_0xD481829E3E36543B();
		}
		func_444("");
		if (iParam3 != -1)
		{
			unk_0x380580A1A1667F69(iParam3);
		}
		unk_0x271C1332F482646C();
	}
}

char* func_505()
{
	switch (func_44(unk_0xD4E735F4B6A956AC()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_506(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_44(unk_0xD4E735F4B6A956AC()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_39())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_50(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_50(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_507(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_176))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_507(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

void func_508(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x0FA486DE15EB3004(*iParam0))
	{
		unk_0x31A9E530D137684F(*iParam0, "SET_TITLE");
		if (unk_0x429D45A6C6520026(sParam2))
		{
			func_444(sParam1);
		}
		else if (func_426(unk_0xD4E735F4B6A956AC()) == 133)
		{
			unk_0x390B339C943A8A54("FM_AE_BRACKT_C");
			unk_0x4FDA9E6EF359F8A9(sParam1);
			unk_0x4FDA9E6EF359F8A9(sParam2);
			unk_0xD481829E3E36543B();
		}
		else
		{
			unk_0x390B339C943A8A54("FM_AE_BRACKT");
			unk_0x4FDA9E6EF359F8A9(sParam1);
			unk_0x4FDA9E6EF359F8A9(sParam2);
			unk_0xD481829E3E36543B();
		}
		func_444("");
		if (iParam3 != -1)
		{
			unk_0x380580A1A1667F69(iParam3);
		}
		unk_0x271C1332F482646C();
	}
}

char* func_509(var uParam0)
{
	int iVar0;
	
	iVar0 = func_426(unk_0xD4E735F4B6A956AC());
	if (func_511())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_510())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_510()
{
	if (func_426(unk_0xD4E735F4B6A956AC()) == 133)
	{
		return Global_2524719.f_4804;
	}
	return -1;
}

bool func_511()
{
	return Global_1589620;
}

char* func_512(var uParam0)
{
	int iVar0;
	
	iVar0 = func_426(unk_0xD4E735F4B6A956AC());
	if (func_511())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_514() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_514() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_510())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_513() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_513()
{
	return Global_2524719.f_4807;
}

int func_514()
{
	if (func_426(unk_0xD4E735F4B6A956AC()) == 132)
	{
		return Global_2524719.f_4802;
	}
	return -1;
}

void func_515(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x0FA486DE15EB3004(*iParam0))
	{
		unk_0x31A9E530D137684F(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_455(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x390B339C943A8A54(sParam1);
			unk_0xCDA87E1DA52C8C9D(iParam5);
			unk_0xD481829E3E36543B();
		}
		else
		{
			func_444(sParam1);
		}
		if (func_542() && iParam6)
		{
			if (func_517())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x390B339C943A8A54("LBD_DPD_CNT");
			unk_0xCDA87E1DA52C8C9D(iVar0);
			unk_0xCDA87E1DA52C8C9D(iVar1);
			unk_0xD481829E3E36543B();
		}
		else
		{
			func_444(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x380580A1A1667F69(iParam4);
			if (func_516(unk_0xD4E735F4B6A956AC()))
			{
				unk_0x380580A1A1667F69(166);
			}
			else if (func_182())
			{
				unk_0x380580A1A1667F69(220);
			}
		}
		unk_0x271C1332F482646C();
	}
}

int func_516(int iParam0)
{
	if (func_502(iParam0) || func_501(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_517()
{
	return Global_1574170;
}

struct<4> func_518(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_519(unk_0xD4E735F4B6A956AC()) || func_500(unk_0xD4E735F4B6A956AC()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_38, 16);
			break;
	}
	if (func_447() && unk_0xD8B89B387D170E27())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_38, 16);
	}
	return Var0;
}

bool func_519(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 5;
}

char* func_520(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_447() || unk_0x429D45A6C6520026(sParam1)))
	{
		uVar0 = func_521();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1574407 == 0)
		{
			Global_1574407 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x429D45A6C6520026(sParam1))
	{
		if (Global_1574407 == 1)
		{
			Global_1574407 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574407 == 0)
		{
			Global_1574407 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 30:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 25:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 21:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_521()
{
	if (unk_0x1C551925B29CEB48())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0xB823EE3B9045D1D9())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x141A6691F21DAFF6())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x48B7FA68F0588F26())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_522()
{
	Global_37027 = 1;
}

bool func_523(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = unk_0xB00CD6895BDB01A0("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = unk_0xB00CD6895BDB01A0("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0xB00CD6895BDB01A0("mp_matchmaking_card");
	}
	return unk_0x0FA486DE15EB3004(*iParam1);
}

void func_524(int iParam0, var uParam1, bool bParam2)
{
	unk_0xFA57C719261AA55D(&(uParam1->f_33), 7);
	Global_1574168 = 0;
	func_437();
	Global_1574167 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_21(&(uParam1->f_19)))
		{
			func_8(&(uParam1->f_19));
			unk_0xFA57C719261AA55D(&(Global_2524719.f_4578), 5);
		}
	}
	if (unk_0x0FA486DE15EB3004(*iParam0))
	{
		unk_0x86795B44CE5FE021(iParam0);
	}
	if (unk_0x05EFB6A616B6FADE(uParam1->f_33, 0))
	{
		unk_0xFA57C719261AA55D(&(uParam1->f_33), 0);
	}
	unk_0x332297B49C4256C3(0f);
}

int func_525()
{
	if (func_540())
	{
		return 0;
	}
	if (func_539())
	{
		return 0;
	}
	if (!func_537())
	{
		return 0;
	}
	if (!func_535())
	{
		return 0;
	}
	if (func_534(8, -1))
	{
		return 0;
	}
	if (func_541() == 2)
	{
		return 0;
	}
	if (Global_2524719.f_4530)
	{
		return 0;
	}
	if (func_533())
	{
		return 0;
	}
	else if (!func_530(unk_0xD4E735F4B6A956AC(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_529(1) || func_527(1)) || Global_17228.f_124) || Global_17228)
	{
		return 0;
	}
	if (unk_0xD1ABB20CFF127CCC())
	{
		return 0;
	}
	if (func_526() && Global_1686218 == 2)
	{
		return 0;
	}
	if (func_229(unk_0xD4E735F4B6A956AC()) && !func_526())
	{
		return 0;
	}
	if (Global_1654543)
	{
		return 0;
	}
	if (Global_1654549)
	{
		return 0;
	}
	if (func_190(0))
	{
		return 0;
	}
	if (unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_22, 4))
	{
		return 0;
	}
	if (Global_1361433)
	{
		return 0;
	}
	if ((Global_1679581.f_705.f_5 || Global_1682392.f_705.f_5) || Global_1678624.f_705.f_5)
	{
		return 0;
	}
	return 1;
}

bool func_526()
{
	return (unk_0x05EFB6A616B6FADE(Global_4456448.f_30, 12) && unk_0x05EFB6A616B6FADE(Global_1686219, 0));
}

int func_527(bool bParam0)
{
	if (unk_0x1BA113A80E25DF34())
	{
		if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			if (func_528(unk_0xA19140A5C42D8715()))
			{
				if (unk_0xD73B1037F6BD4B90(0, 25) || unk_0xD73B1037F6BD4B90(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17228.f_130)
	{
		return 0;
	}
	if (unk_0xD73B1037F6BD4B90(0, 19) || (!bParam0 && unk_0x1190AB7024CBD8CB(0, 19)))
	{
		return 1;
	}
	if (unk_0x47C01C0E6F4C1D06())
	{
		if (((unk_0xD73B1037F6BD4B90(0, 166) || unk_0xD73B1037F6BD4B90(0, 167)) || unk_0xD73B1037F6BD4B90(0, 168)) || unk_0xD73B1037F6BD4B90(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x1190AB7024CBD8CB(0, 166) || unk_0x1190AB7024CBD8CB(0, 167)) || unk_0x1190AB7024CBD8CB(0, 168)) || unk_0x1190AB7024CBD8CB(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_528(int iParam0)
{
	int iVar0;
	
	if (unk_0x965BA0E75ABD2A72())
	{
		if (!unk_0x4915F4759304D5CF(iParam0))
		{
			unk_0xF990CFC0F1D94A39(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_529(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17228.f_4 && Global_17228.f_104 == 4);
	}
	return Global_17228.f_4;
}

int func_530(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_531(iParam0))
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

bool func_531(int iParam0)
{
	return func_532(iParam0);
}

bool func_532(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_13.f_1, 0);
}

bool func_533()
{
	return Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_196 != 0;
}

bool func_534(int iParam0, int iParam1)
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

int func_535()
{
	if (func_536() == 0)
	{
		return 1;
	}
	return 0;
}

int func_536()
{
	return Global_1312466.f_18;
}

int func_537()
{
	if (func_538())
	{
		return 1;
	}
	if (unk_0x71364F510A1CB69F())
	{
		return 0;
	}
	if (unk_0x607776744A243309() || unk_0x3BE8B7AEED1A3971())
	{
		return 0;
	}
	if (unk_0x35ADB0B156EC2F45())
	{
		return 0;
	}
	return 1;
}

bool func_538()
{
	return Global_1312438;
}

bool func_539()
{
	return Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/] == 5;
}

bool func_540()
{
	return unk_0xFD34717937104F1C() <= Global_17367.f_5873 + 100;
}

int func_541()
{
	return Global_1368245.f_68;
}

int func_542()
{
	if (Global_1574169 > 16)
	{
		return 1;
	}
	return 0;
}

float func_543()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x79A3348EEC2E5FE7()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_544(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 26:
		case 27:
			return 1;
			break;
	}
	return 0;
}

int func_545()
{
	if (func_546(unk_0xD4E735F4B6A956AC()))
	{
		return Global_1316740;
	}
	return 0;
}

int func_546(int iParam0)
{
	if (unk_0x4C9BACA8D249CB13())
	{
		if (func_200(iParam0, 0))
		{
			return unk_0xC2E5A92865328A63(iParam0);
		}
	}
	return 0;
}

int func_547()
{
	if (func_545())
	{
		return 1;
	}
	if (func_481(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	if (func_511())
	{
		return 1;
	}
	if (func_78(unk_0xD4E735F4B6A956AC()))
	{
		switch (func_426(unk_0xD4E735F4B6A956AC()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_548(unk_0xD4E735F4B6A956AC()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_548(unk_0xD4E735F4B6A956AC()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_548(unk_0xD4E735F4B6A956AC()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_548(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_1, 4);
}

int func_549(int iParam0)
{
	if (iParam0 == 27)
	{
		if ((func_78(unk_0xD4E735F4B6A956AC()) && !func_76(unk_0xD4E735F4B6A956AC())) && !func_452(unk_0xD4E735F4B6A956AC(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_45(unk_0xD4E735F4B6A956AC(), 0) && func_76(unk_0xD4E735F4B6A956AC()))
		{
			return 1;
		}
		if (func_63(unk_0xD4E735F4B6A956AC()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_550(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_426(unk_0xD4E735F4B6A956AC());
		Global_1667085 = iVar0;
		Global_1667085.f_1 = iParam0;
		if (func_134() != func_11())
		{
			Global_1667085.f_2 = func_411(func_134());
			Global_1667085.f_3 = func_410(func_134());
		}
		if (func_29() != func_11())
		{
			func_133(func_29(), &(Global_1667085.f_2), &(Global_1667085.f_3));
		}
		Global_1667085.f_7 = unk_0x5E0F2F352218B916();
		Global_1667085.f_28 = func_416(unk_0xD4E735F4B6A956AC());
		Global_1667085.f_13 = 0;
		Global_1667085.f_14 = 0;
		if (func_234(unk_0xD4E735F4B6A956AC(), 1))
		{
			Global_1667085.f_23 = func_419(func_50(1));
		}
	}
	else
	{
		iVar0 = func_44(unk_0xD4E735F4B6A956AC());
	}
	if (iParam2 || func_47(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1666824 = iVar0;
		if (func_102(iVar0))
		{
			Global_1666824.f_1 = 4;
		}
		else if (func_412(iVar0))
		{
			Global_1666824.f_1 = 5;
		}
		else if (func_37(iVar0, 0))
		{
			Global_1666824.f_1 = 2;
			if (func_97(iVar0))
			{
				Global_1666824.f_1 = 3;
			}
		}
		else
		{
			Global_1666824.f_1 = 1;
		}
		if (func_134() != func_11())
		{
			Global_1666824.f_4 = func_411(func_134());
			Global_1666824.f_5 = func_410(func_134());
		}
		if (func_29() != func_11())
		{
			func_133(func_29(), &(Global_1666824.f_6), &(Global_1666824.f_7));
		}
		Global_1666824.f_9 = unk_0x5E0F2F352218B916();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1666824.f_27 = 1;
			Global_1666824.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1666824.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1666824.f_40 = func_127(iParam1);
			Global_1666824.f_41 = func_574();
			Global_1666824.f_42 = func_287(unk_0xD4E735F4B6A956AC(), iParam1);
			Global_1666824.f_44 = func_406(unk_0xD4E735F4B6A956AC(), iParam1);
		}
		if (!func_113() || iVar0 != 192)
		{
			Global_1666824.f_53 = 0;
		}
	}
	else if (func_95(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1666941 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1666941 = iParam0 + 1;
		}
		else
		{
			Global_1666941 = func_573(unk_0xD4E735F4B6A956AC());
		}
		switch (iVar0)
		{
			case 225:
				if (func_91(unk_0xD4E735F4B6A956AC()) == 0)
				{
					Global_1666941.f_1 = 0;
				}
				else
				{
					Global_1666941.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1666941.f_1 = 2;
				break;
			
			case 227:
				Global_1666941.f_1 = 3;
				break;
		}
		Global_1666941.f_21 = 1;
		Global_1666941.f_22 = 1;
		if (func_134() != func_11())
		{
			Global_1666941.f_4 = func_411(func_134());
			Global_1666941.f_5 = func_410(func_134());
		}
		if (func_29() != func_11())
		{
			func_133(func_29(), &(Global_1666941.f_4), &(Global_1666941.f_5));
		}
		Global_1666941.f_8 = unk_0x5E0F2F352218B916();
		if (iParam0 != -1)
		{
			Global_1666941.f_20 = iParam0;
		}
	}
	else if (func_55(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1666878 = iVar0;
		Global_1666824.f_1 = 1;
		if (func_134() != func_11())
		{
			Global_1666878.f_4 = func_411(func_134());
			Global_1666878.f_5 = func_410(func_134());
		}
		if (func_29() != func_11())
		{
			func_133(func_29(), &(Global_1666878.f_6), &(Global_1666878.f_7));
		}
		Global_1666878.f_9 = unk_0x5E0F2F352218B916();
		if (iParam0 != -1)
		{
			Global_1666878.f_21 = iParam0;
		}
	}
	else if (func_94(iVar0))
	{
		Global_1666985 = iVar0;
		Global_1666985.f_1 = iParam0;
		Global_1666985.f_21 = 1;
		Global_1666985.f_22 = 1;
		if (func_134() != func_11())
		{
			Global_1666985.f_4 = func_411(func_134());
			Global_1666985.f_5 = func_410(func_134());
		}
		if (func_29() != func_11())
		{
			func_133(func_29(), &(Global_1666985.f_4), &(Global_1666985.f_5));
		}
		Global_1666985.f_8 = unk_0x5E0F2F352218B916();
		if (iParam0 != -1)
		{
			Global_1666985.f_20 = iParam0;
		}
		Global_1666985.f_27 = func_399(func_27(), 5);
		Global_1666985.f_28 = func_419(func_265(unk_0xD4E735F4B6A956AC()));
		Global_1666985.f_29 = func_28(6107, -1, 0);
		Global_1666985.f_30 = func_28(6103, -1, 0);
		Global_1666985.f_31 = func_28(6104, -1, 0);
		Global_1666985.f_32 = func_28(6106, -1, 0);
		Global_1666985.f_33 = func_28(6105, -1, 0);
		Global_1666985.f_34 = func_28(6108, -1, 0);
		Global_1666985.f_7 = func_418();
		Global_1666985.f_51 = func_419(bParam4);
	}
	else if (func_93(iVar0))
	{
		Global_1667039 = iVar0;
		Global_1667039.f_1 = iParam0;
		Global_1667039.f_21 = 1;
		Global_1667039.f_22 = 1;
		if (func_134() != func_11())
		{
			Global_1667039.f_4 = func_411(func_134());
			Global_1667039.f_5 = func_410(func_134());
		}
		if (func_29() != func_11())
		{
			func_133(func_29(), &(Global_1667039.f_4), &(Global_1667039.f_5));
		}
		Global_1667039.f_8 = unk_0x5E0F2F352218B916();
		if (iParam0 != -1)
		{
			Global_1667039.f_20 = iParam0;
		}
		Global_1667039.f_24 = func_28(6157, -1, 0);
		Global_1667039.f_25 = func_28(6162, -1, 0);
		Global_1667039.f_26 = func_28(6163, -1, 0);
		Global_1667039.f_27 = func_419((((func_357() || func_356()) || func_355()) || func_354(unk_0xD4E735F4B6A956AC())));
		Global_1667039.f_28 = func_28(6164, -1, 0);
		Global_1667039.f_29 = func_419(func_353());
		Global_1667039.f_31 = 0;
		Global_1667039.f_30 = 0;
		Global_1667039.f_32 = 0;
		Global_1667039.f_33 = 0;
		Global_1667039.f_34 = 0;
		Global_1667039.f_16 = 0;
		Global_1667039.f_7 = func_418();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_89(func_90(unk_0xD4E735F4B6A956AC()))))
	{
		Global_1667173 = iVar0;
		Global_1667173.f_1 = iParam0;
		Global_1667173.f_21 = 1;
		Global_1667173.f_22 = 1;
		Global_1667173.f_7 = func_418();
		if (func_134() != func_11())
		{
			Global_1667173.f_4 = func_411(func_134());
			Global_1667173.f_5 = func_410(func_134());
		}
		if (func_29() != func_11())
		{
			func_133(func_29(), &(Global_1667173.f_4), &(Global_1667173.f_5));
		}
		if (func_134() != -1)
		{
			Global_1667173.f_17 = func_350(func_134());
		}
		Global_1667173.f_8 = unk_0x5E0F2F352218B916();
		Global_1667173.f_28 = func_416(unk_0xD4E735F4B6A956AC());
		Global_1667173.f_16 = 0;
		Global_1667173.f_24 = 0;
		Global_1667173.f_23 = 0;
		if (func_234(unk_0xD4E735F4B6A956AC(), 1))
		{
			Global_1667173.f_33 = func_419(func_50(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1667120 = iVar0;
		Global_1667120.f_1 = iParam0;
		Global_1667120.f_21 = 1;
		Global_1667120.f_22 = 1;
		Global_1667120.f_7 = func_418();
		Global_1667120.f_24 = 0;
		Global_1667120.f_23 = 0;
		Global_1667120.f_16 = 0;
		if (func_134() != func_11())
		{
			Global_1667120.f_4 = func_411(func_134());
			Global_1667120.f_5 = func_410(func_134());
		}
		Global_1667120.f_28 = func_416(unk_0xD4E735F4B6A956AC());
		if (Global_1667120.f_28)
		{
			Global_1667120.f_29 = func_344(unk_0xD4E735F4B6A956AC());
		}
		else
		{
			Global_1667120.f_29 = 0;
		}
		Global_1667120.f_30 = func_328(unk_0xD4E735F4B6A956AC(), 4, -1);
		Global_1667120.f_31 = func_347(unk_0xD4E735F4B6A956AC());
		Global_1667120.f_32 = func_419(func_327(unk_0xD4E735F4B6A956AC()));
		Global_1667120.f_33 = func_419(func_326(unk_0xD4E735F4B6A956AC()));
		Global_1667120.f_34 = func_419(func_325(unk_0xD4E735F4B6A956AC()));
		Global_1667120.f_35 = func_419(func_324(unk_0xD4E735F4B6A956AC()));
		Global_1667120.f_36 = func_323(unk_0xD4E735F4B6A956AC());
		Global_1667120.f_37 = func_322(unk_0xD4E735F4B6A956AC());
		Global_1667120.f_39 = func_321(unk_0xD4E735F4B6A956AC());
		if (func_234(unk_0xD4E735F4B6A956AC(), 1))
		{
			Global_1667120.f_41 = func_419(func_50(1));
		}
		if (func_29() != func_11())
		{
			func_133(func_29(), &(Global_1667120.f_4), &(Global_1667120.f_5));
		}
		Global_1667120.f_8 = unk_0x5E0F2F352218B916();
		Global_1667120.f_28 = func_416(unk_0xD4E735F4B6A956AC());
	}
	else
	{
		if (func_134() != func_11())
		{
			Global_1666806 = func_411(func_134());
			Global_1666806.f_1 = func_410(func_134());
		}
		Global_1666806.f_5 = unk_0x5E0F2F352218B916();
		Global_1666806.f_13 = func_572();
		Global_1666806.f_15 = 0;
		if (func_132(1))
		{
			if (func_29() == func_134())
			{
				Global_1666806.f_15 = 1;
			}
		}
		if (func_571())
		{
			Global_1666941.f_28 = 1;
		}
		if (((((func_570() || func_569()) || func_568()) || func_567()) || func_565()) || func_564(unk_0xD4E735F4B6A956AC()))
		{
			Global_1666941.f_30 = 1;
		}
		if (func_562(func_563(-1881846085)))
		{
			Global_1666941.f_32 = 1;
		}
		if (func_554(func_561(joaat("caddy"))))
		{
			Global_1666941.f_31 = 1;
		}
		if (func_398(unk_0xD4E735F4B6A956AC()) || func_397(unk_0xD4E735F4B6A956AC()))
		{
			Global_1666941.f_29 = 1;
		}
		if (func_394(unk_0xD4E735F4B6A956AC()))
		{
			Global_1666941.f_33 = 1;
			Global_1666941.f_34 = 1;
		}
		if (func_395(unk_0xD4E735F4B6A956AC()))
		{
			Global_1666941.f_36 = 1;
		}
		if (func_392(0, unk_0xD4E735F4B6A956AC()) == 1)
		{
			Global_1666941.f_35 = 1;
		}
		if (func_553(unk_0xD4E735F4B6A956AC(), 3, &uVar1))
		{
			Global_1666941.f_37 = 1;
		}
		if (func_553(unk_0xD4E735F4B6A956AC(), 7, &uVar1))
		{
			Global_1666941.f_38 = 1;
		}
		if (func_552(unk_0xD4E735F4B6A956AC()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_551(unk_0xD4E735F4B6A956AC(), iVar2);
				if (func_284(unk_0xD4E735F4B6A956AC(), iVar3, 0))
				{
					Global_1666941.f_39 = 1;
				}
				if (func_284(unk_0xD4E735F4B6A956AC(), iVar3, 2))
				{
					Global_1666941.f_40 = 1;
				}
				if (func_284(unk_0xD4E735F4B6A956AC(), iVar3, 1))
				{
					Global_1666941.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_551(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_279(Global_1589747[iParam0 /*790*/].f_273.f_174[iParam1 /*12*/]))
	{
		uVar0 = Global_1589747[iParam0 /*790*/].f_273.f_174[iParam1 /*12*/];
	}
	return uVar0;
}

int func_552(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_553(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_11())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_392(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_554(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_559(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_371(11));
		func_370(iVar1, &iVar0, 1);
		iVar2 = func_559(func_556(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_28(func_555(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_555(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2828;
				
				case 40:
					return 2835;
				
				case 41:
					return 2842;
				
				case 42:
					return 2849;
				
				case 43:
					return 2856;
				
				case 44:
					return 2863;
				
				case 45:
					return 2870;
				
				case 46:
					return 2877;
				
				case 47:
					return 2884;
				
				case 48:
					return 2891;
				
				case 49:
					return 2898;
				
				case 50:
					return 2904;
				
				case 51:
					return 2910;
				
				case 52:
					return 2952;
				
				case 53:
					return 2959;
				
				case 54:
					return 2966;
				
				case 55:
					return 2973;
				
				case 56:
					return 2980;
				
				case 57:
					return 2987;
				
				case 58:
					return 2994;
				
				case 59:
					return 3001;
				
				case 60:
					return 3008;
				
				case 61:
					return 3015;
				
				case 62:
					return 3022;
				
				case 63:
					return 3028;
				
				case 64:
					return 3034;
				
				case 65:
					return 3235;
				
				case 66:
					return 3243;
				
				case 67:
					return 3251;
				
				case 68:
					return 3259;
				
				case 69:
					return 3267;
				
				case 70:
					return 3275;
				
				case 71:
					return 3283;
				
				case 72:
					return 3291;
				
				case 73:
					return 3299;
				
				case 74:
					return 3307;
				
				case 75:
					return 3315;
				
				case 76:
					return 3323;
				
				case 77:
					return 3331;
				
				case 78:
					return 3339;
				
				case 79:
					return 3347;
				
				case 80:
					return 3355;
				
				case 81:
					return 3363;
				
				case 82:
					return 3371;
				
				case 83:
					return 3379;
				
				case 84:
					return 3387;
				
				case 85:
					return 3395;
				
				case 86:
					return 3402;
				
				case 87:
					return 3409;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				
				case 89:
					return 4039;
				
				case 90:
					return 4047;
				
				case 91:
					return 4055;
				
				case 92:
					return 4063;
				
				case 93:
					return 4071;
				
				case 94:
					return 4079;
				
				case 95:
					return 4087;
				
				case 96:
					return 4095;
				
				case 97:
					return 4103;
				
				case 98:
					return 4111;
				
				case 99:
					return 4119;
				
				case 100:
					return 4127;
				
				case 101:
					return 4135;
				
				case 102:
					return 4143;
				
				case 103:
					return 4151;
				
				case 104:
					return 4159;
				
				case 105:
					return 4167;
				
				case 106:
					return 4175;
				
				case 107:
					return 4183;
				
				case 108:
					return 4191;
				
				case 109:
					return 4199;
				
				case 110:
					return 4207;
				
				case 111:
					return 4215;
				
				case 112:
					return 4223;
				
				case 113:
					return 4231;
				
				case 114:
					return 4239;
				
				case 115:
					return 4247;
				
				case 116:
					return 4255;
				
				case 117:
					return 4263;
				
				case 118:
					return 4271;
				
				case 119:
					return 4279;
				
				case 120:
					return 4287;
				
				case 121:
					return 4295;
				
				case 122:
					return 4303;
				
				case 123:
					return 4311;
				
				case 124:
					return 4319;
				
				case 125:
					return 4327;
				
				case 126:
					return 4335;
				
				case 127:
					return 4343;
				
				case 128:
					return 4351;
				
				case 129:
					return 4359;
				
				case 130:
					return 4367;
				
				case 131:
					return 4375;
				
				case 132:
					return 4383;
				
				case 133:
					return 4391;
				
				case 134:
					return 4399;
				
				case 135:
					return 4407;
				
				case 136:
					return 4415;
				
				case 137:
					return 4423;
				
				case 138:
					return 4431;
				
				case 139:
					return 4439;
				
				case 140:
					return 4447;
				
				case 141:
					return 4455;
				
				case 142:
					return 4463;
				
				case 143:
					return 4471;
				
				case 144:
					return 4479;
				
				case 145:
					return 4487;
				
				case 146:
					return 4495;
				
				case 147:
					return 4503;
				
				case 148:
					return 4511;
				
				case 149:
					return 4519;
				
				case 150:
					return 4527;
				
				case 151:
					return 4535;
				
				case 152:
					return 4543;
				
				case 153:
					return 4551;
				
				case 154:
					return 4559;
				
				case 155:
					return 4567;
				
				case 156:
					return 4575;
				
				case 157:
					return 4583;
				
				case 158:
					return 5476;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				
				case 160:
					return 5932;
				
				case 161:
					return 5939;
				
				case 162:
					return 5946;
				
				case 163:
					return 5953;
				
				case 164:
					return 5960;
				
				case 165:
					return 5967;
				
				case 166:
					return 5974;
				
				case 167:
					return 5981;
				
				case 168:
					return 5988;
				
				case 169:
					return 5995;
				
				case 170:
					return 6002;
				
				case 171:
					return 6009;
				
				case 172:
					return 6016;
				
				case 173:
					return 6023;
				
				case 174:
					return 6030;
				
				case 175:
					return 6037;
				
				case 176:
					return 6044;
				
				case 177:
					return 6051;
				
				case 178:
					return 6058;
				
				case 179:
					return 6065;
				
				case 180:
					return 6072;
				
				case 181:
					return 6079;
				
				case 182:
					return 6086;
				
				case 183:
					return 6093;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				
				case 185:
					return 6177;
				
				case 186:
					return 6184;
				
				case 187:
					return 6191;
				
				case 188:
					return 6198;
				
				case 189:
					return 6205;
				
				case 190:
					return 6212;
				
				case 191:
					return 6219;
				
				case 192:
					return 6226;
				
				case 193:
					return 6233;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				
				case 195:
					return 6574;
				
				case 196:
					return 6581;
				
				case 197:
					return 6588;
				
				case 198:
					return 6595;
				
				case 199:
					return 6602;
				
				case 200:
					return 6609;
				
				case 201:
					return 6616;
				
				case 202:
					return 6623;
				
				case 203:
					return 6630;
				
				case 204:
					return 6637;
				
				case 205:
					return 6644;
				
				case 206:
					return 6651;
				
				case 207:
					return 6658;
				
				case 208:
					return 6665;
				
				case 209:
					return 6672;
				
				case 210:
					return 6679;
				
				case 211:
					return 6686;
				
				case 212:
					return 6693;
				
				case 213:
					return 6700;
				
				case 214:
					return 6707;
				
				case 215:
					return 6714;
				
				case 216:
					return 6721;
				
				case 217:
					return 6728;
				
				case 218:
					return 6735;
				
				case 219:
					return 6742;
				
				case 220:
					return 6749;
				
				case 221:
					return 6756;
				
				case 222:
					return 6763;
				
				case 223:
					return 6770;
				
				case 224:
					return 6777;
				
				case 225:
					return 6784;
				
				case 226:
					return 6791;
				
				case 227:
					return 6798;
				
				case 228:
					return 6805;
				
				case 229:
					return 6812;
				
				case 230:
					return 6819;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				
				case 232:
					return 7296;
				
				case 233:
					return 7303;
				
				case 234:
					return 7310;
				
				case 235:
					return 7317;
				
				case 236:
					return 7324;
				
				case 237:
					return 7331;
				
				case 238:
					return 7338;
				
				case 239:
					return 7345;
				
				case 240:
					return 7352;
				
				case 241:
					return 7359;
				
				case 242:
					return 7366;
				
				case 243:
					return 7373;
				
				case 244:
					return 7380;
				
				case 245:
					return 7387;
				
				case 246:
					return 7394;
				
				case 247:
					return 7401;
				
				case 248:
					return 7408;
				
				case 249:
					return 7415;
				
				case 250:
					return 7422;
				
				case 251:
					return 7429;
				
				case 252:
					return 7436;
				
				case 253:
					return 7443;
				
				case 254:
					return 7450;
				
				case 255:
					return 7457;
				
				case 256:
					return 7464;
				
				case 257:
					return 7471;
				
				case 258:
					return 7478;
				
				case 259:
					return 7485;
				
				case 260:
					return 7492;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3332;
				
				case 78:
					return 3340;
				
				case 79:
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4128;
				
				case 101:
					return 4136;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4288;
				
				case 121:
					return 4296;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4448;
				
				case 141:
					return 4456;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case 79:
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case 79:
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case 79:
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case 79:
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case 79:
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			break;
			break;
	}
	return 1629;
}

int func_556(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 261)
	{
		iVar0 = 0;
		while (iVar0 < 21)
		{
			if (iParam0 >= func_371(iVar0) && iParam0 < func_557(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_557(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_380(iParam0);
		return func_558(iVar0);
	}
	return (func_372(iParam0, -1) * iParam0 + 1);
}

int func_558(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		default:
	}
	return -1;
}

int func_559(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_27();
	}
	if (iParam0 == 7 && !Global_262145.f_16856)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_380(iParam0);
		if (iVar1 == 0 && func_28(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_560(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_416(unk_0xD4E735F4B6A956AC()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1378951[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2568229[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 21)
		{
			return 0;
		}
		return Global_2568104[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_560(int iParam0)
{
	if (!Global_262145.f_23522)
	{
		return 0;
	}
	return func_28(7207, iParam0, 0) != 0;
}

int func_561(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_562(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_370(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_28(func_555(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_563(int iParam0)
{
	switch (iParam0)
	{
		case -1881846085:
			return 0;
			break;
	}
	return -1;
}

int func_564(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (Global_1589747[iParam0 /*790*/].f_273.f_330 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_565()
{
	return func_28(func_566(3), -1, 0) != 0;
}

int func_566(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6538;
			break;
		
		case 1:
			return 6540;
			break;
		
		case 2:
			return 6541;
			break;
		
		case 3:
			return 6542;
			break;
		
		case 4:
			return 6543;
			break;
		
		case 5:
			return 6544;
			break;
	}
	return 9954;
}

bool func_567()
{
	return func_28(6163, -1, 0) != 0;
}

bool func_568()
{
	return func_28(5380, -1, 0) != 0;
}

bool func_569()
{
	return func_28(3828, -1, 0) != 0;
}

bool func_570()
{
	return func_28(3223, -1, 0) != 0;
}

bool func_571()
{
	return func_28(5379, -1, 0) != 0;
}

int func_572()
{
	int iVar0;
	
	iVar0 = func_134();
	if (iVar0 != func_11())
	{
		return Global_1625435[iVar0 /*560*/].f_11.f_93;
	}
	return 0;
}

int func_573(int iParam0)
{
	if (func_44(iParam0) == 225 || func_44(iParam0) == 226)
	{
		return func_91(iParam0);
	}
	return -1;
}

var func_574()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_286(unk_0xD4E735F4B6A956AC(), iVar0))
		{
			unk_0x2BCFB39E86340DAA(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_575()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_576())
	{
		return;
	}
	if (func_645(unk_0xD4E735F4B6A956AC(), func_16(), 1))
	{
		return;
	}
	if (!unk_0xDC5D81351D6A4DDB(unk_0xEE978C39384D834F(func_16())))
	{
		return;
	}
	vVar0 = { unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(func_16()), false) };
	vVar1 = { unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(unk_0xD4E735F4B6A956AC()), false) };
	fVar2 = vdist(vVar0, vVar1);
	if (fVar2 < 25f)
	{
		unk_0xC0BA7F3D0AB2E224(2, vVar0 + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uLocal_124[0], uLocal_124[1], uLocal_124[2], 100, 1, 1, 2, 0, 0, 0, false);
	}
}

int func_576()
{
	if (((func_606(164) || func_68()) || !func_577(1, 1, 1)) || iLocal_110 == 0)
	{
		return 1;
	}
	return 0;
}

int func_577(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_605(unk_0xD4E735F4B6A956AC(), 29))
	{
		return 0;
	}
	if (func_71(unk_0xD4E735F4B6A956AC(), 21))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0xEB97F9F181CDFD2C())
		{
			return 0;
		}
	}
	if (!func_480(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x3DF0D4C48D463CA8())
		{
			return 0;
		}
	}
	if (func_604(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	if (func_603())
	{
		return 0;
	}
	if (func_539())
	{
		return 0;
	}
	if (func_602())
	{
		return 0;
	}
	if (func_533())
	{
		return 0;
	}
	if (unk_0xD8B89B387D170E27())
	{
		return 0;
	}
	if (func_531(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	if (!func_535())
	{
		return 0;
	}
	if (func_71(unk_0xD4E735F4B6A956AC(), 0) || func_71(unk_0xD4E735F4B6A956AC(), 3))
	{
		return 0;
	}
	if ((func_71(unk_0xD4E735F4B6A956AC(), 12) || func_71(unk_0xD4E735F4B6A956AC(), 14)) || func_71(unk_0xD4E735F4B6A956AC(), 13))
	{
		return 0;
	}
	if (func_598(unk_0xD4E735F4B6A956AC(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_584())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_583())
		{
			return 0;
		}
	}
	if (Global_1654543)
	{
		return 0;
	}
	if (func_582(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	if (func_581())
	{
		return 0;
	}
	if (func_580(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	if (func_579())
	{
		return 0;
	}
	if (unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_22, 4))
	{
		return 0;
	}
	if (func_578(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	return 1;
}

int func_578(int iParam0)
{
	if (Global_2423801[iParam0 /*413*/].f_261.f_4 != 0 || Global_2423801[iParam0 /*413*/].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_579()
{
	return Global_1668658.f_3359 != -1;
}

int func_580(int iParam0)
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

int func_581()
{
	if (Global_4254407.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_582(int iParam0)
{
	if (!func_5(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1589747[iParam0 /*790*/].f_35;
}

bool func_583()
{
	return Global_93284.f_328 > 0;
}

int func_584()
{
	int iVar0;
	
	iVar0 = func_44(unk_0xD4E735F4B6A956AC());
	if (((func_374(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_24) || func_597(unk_0xD4E735F4B6A956AC())) || func_596(unk_0xD4E735F4B6A956AC())) || func_595(unk_0xD4E735F4B6A956AC()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_594(unk_0xD4E735F4B6A956AC()))
	{
		if (func_102(iVar0) || func_412(iVar0))
		{
			return 1;
		}
	}
	if (func_61(unk_0xD4E735F4B6A956AC()))
	{
		if (func_412(iVar0))
		{
			return 1;
		}
	}
	if (func_593(unk_0xD4E735F4B6A956AC()))
	{
		if (func_95(iVar0))
		{
			return 1;
		}
	}
	if (func_592(unk_0xD4E735F4B6A956AC()))
	{
		if (func_94(iVar0))
		{
			return 1;
		}
	}
	if (func_591(unk_0xD4E735F4B6A956AC()))
	{
		if (func_93(iVar0))
		{
			return 1;
		}
	}
	if (func_590(unk_0xD4E735F4B6A956AC()))
	{
		if (func_589(iVar0))
		{
			return 1;
		}
	}
	if (func_588(unk_0xD4E735F4B6A956AC(), 0))
	{
		if (func_587(iVar0))
		{
			if (func_585(unk_0xD4E735F4B6A956AC()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_585(int iParam0)
{
	if (func_586(iParam0) != func_11())
	{
		return func_586(iParam0) == func_85(iParam0);
	}
	return 0;
}

int func_586(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_11.f_35;
}

int func_587(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_588(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
			if (unk_0x8F474E419F56E48D(iVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1 && Global_2423801[iParam0 /*413*/].f_309.f_7 != func_11())
			{
				return func_62(Global_2423801[iParam0 /*413*/].f_309.f_4) == 12;
			}
		}
	}
	return 0;
}

int func_589(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_590(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_62(Global_2423801[iParam0 /*413*/].f_309.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_591(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_62(Global_2423801[iParam0 /*413*/].f_309.f_4) == 9;
			}
		}
	}
	return 0;
}

int func_592(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_62(Global_2423801[iParam0 /*413*/].f_309.f_4) == 7;
			}
		}
	}
	return 0;
}

int func_593(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_62(Global_2423801[iParam0 /*413*/].f_309.f_4) == 4;
			}
		}
	}
	return 0;
}

int func_594(int iParam0)
{
	if (func_373(Global_1589747[iParam0 /*790*/].f_273.f_24, -1))
	{
		return 1;
	}
	return 0;
}

int func_595(int iParam0)
{
	if (func_375(Global_1589747[iParam0 /*790*/].f_273.f_24, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_596(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_62(Global_2423801[iParam0 /*413*/].f_309.f_4) == 1;
			}
		}
	}
	return 0;
}

int func_597(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_62(Global_2423801[iParam0 /*413*/].f_309.f_4) == 0;
			}
		}
	}
	return 0;
}

int func_598(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	if (Global_1589747[iParam0 /*790*/].f_273.f_24 > 0)
	{
		if (bParam1)
		{
			if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_22, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_597(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_61(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_596(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_593(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_592(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_591(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_601(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_590(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_600(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_588(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_599(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_599(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_62(Global_2423801[iParam0 /*413*/].f_309.f_4) == 13;
			}
		}
	}
	return 0;
}

int func_600(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_62(Global_2423801[iParam0 /*413*/].f_309.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_601(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1 && Global_2423801[iParam0 /*413*/].f_309.f_7 != func_11())
			{
				return func_62(Global_2423801[iParam0 /*413*/].f_309.f_4) == 8;
			}
		}
	}
	return 0;
}

bool func_602()
{
	return Global_1312857;
}

bool func_603()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 0);
}

int func_604(int iParam0)
{
	if (func_530(iParam0, 1))
	{
		if (Global_1589747[iParam0 /*790*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_605(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_11.f_5, iParam1);
}

int func_606(int iParam0)
{
	if (!func_113() && !func_234(unk_0xD4E735F4B6A956AC(), 1))
	{
		if (!func_65(unk_0xD4E735F4B6A956AC()))
		{
			if (func_68())
			{
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return 0;
}

void func_607()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (func_645(unk_0xD4E735F4B6A956AC(), func_16(), 0))
	{
		return;
	}
	vVar0 = { unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(func_16()), false) };
	vVar1 = { unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(unk_0xD4E735F4B6A956AC()), false) };
	fVar2 = vdist(vVar0, vVar1);
	if (fVar2 < 25f)
	{
		if (fVar2 < 5f)
		{
			fVar4 = 175f;
		}
		else
		{
			fVar3 = (1f - (func_609(fVar2, 5f, 25f) / 25f));
			fVar4 = func_608(26f, 175f, fVar3);
		}
		unk_0xB0E737394929E89F(0, 1000, round(fVar4));
	}
}

float func_608(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_609(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_610(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 31)
	{
		return 0;
	}
	if (!unk_0x05EFB6A616B6FADE(vLocal_138[iParam0 /*3*/].f_2, 0))
	{
		return 0;
	}
	return 1;
}

void func_611(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xAEAF59799C2F26E4(unk_0xC75DB7A64F3796EC(iParam0), "MPBitset"))
	{
		iVar0 = unk_0xBB4F5216F3FCA8EA(unk_0xC75DB7A64F3796EC(iParam0), "MPBitset");
	}
	unk_0x2BCFB39E86340DAA(&iVar0, iParam1);
	unk_0x6D61CED849FB898E(unk_0xC75DB7A64F3796EC(iParam0), "MPBitset", iVar0);
}

int func_612(int iParam0, int iParam1)
{
	if (unk_0xDE26AC7E7C308E75("MPBitset", 3))
	{
		if (unk_0xAEAF59799C2F26E4(unk_0xC75DB7A64F3796EC(iParam0), "MPBitset"))
		{
			if (unk_0x05EFB6A616B6FADE(unk_0xBB4F5216F3FCA8EA(unk_0xC75DB7A64F3796EC(iParam0), "MPBitset"), iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_613()
{
	if (!func_614(unk_0xD4E735F4B6A956AC()))
	{
		func_80(25);
	}
}

bool func_614(int iParam0)
{
	return func_427(iParam0, 25);
}

void func_615(int iParam0)
{
	if (iLocal_110 != 2 && iLocal_110 != 3)
	{
		func_491();
		return;
	}
	if (func_576())
	{
		func_491();
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (!unk_0x05EFB6A616B6FADE(iLocal_121, iParam0))
			{
				if (func_644())
				{
					func_639();
					func_637(86, "GB_HTB_BMT0", "GB_HTB_BMS0", func_638(func_16()), iLocal_111, 0, -1, -1, -1, 2, -1);
					unk_0x2BCFB39E86340DAA(&iLocal_121, iParam0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x05EFB6A616B6FADE(iLocal_121, iParam0))
			{
				if (func_644())
				{
					func_639();
					func_636(86, "GB_HTB_BMT0", "GB_HTB_BMS1", 1, -1, 2, 1);
					unk_0x2BCFB39E86340DAA(&iLocal_121, iParam0);
				}
			}
			break;
		
		case 2:
			if (!unk_0x05EFB6A616B6FADE(iLocal_121, iParam0))
			{
				if (func_644())
				{
					func_639();
					func_636(86, "GB_HTB_BMT0", "GB_HTB_BMS2", 1, -1, 2, 1);
					unk_0x2BCFB39E86340DAA(&iLocal_121, iParam0);
				}
			}
			break;
		
		case 3:
			if (!unk_0x05EFB6A616B6FADE(iLocal_121, iParam0))
			{
				if (func_644())
				{
					func_639();
					func_635(87, Local_137.f_5, -1, "GB_HTB_BMS3", "GB_WINNER", 1, -1, 2, -1);
					unk_0x2BCFB39E86340DAA(&iLocal_121, iParam0);
				}
			}
			break;
		
		case 4:
			if (!unk_0x05EFB6A616B6FADE(iLocal_121, iParam0))
			{
				if (func_644())
				{
					func_639();
					func_635(88, func_6(), -1, "GB_HTB_BMS4", "GB_WORK_OVER", 1, -1, 2, -1);
					unk_0x2BCFB39E86340DAA(&iLocal_121, iParam0);
				}
			}
			break;
		
		case 5:
			if (!unk_0x05EFB6A616B6FADE(iLocal_121, iParam0))
			{
				if (func_644())
				{
					func_639();
					func_636(87, "GB_WINNER", "GB_HTB_BMS5", 1, -1, 2, 1);
					unk_0x2BCFB39E86340DAA(&iLocal_121, iParam0);
				}
			}
			break;
		
		case 6:
			if (!unk_0x05EFB6A616B6FADE(iLocal_121, iParam0))
			{
				if (func_644())
				{
					func_639();
					func_636(88, "GB_WORK_OVER", "GB_HTB_BMS5", 1, -1, 2, 1);
					unk_0x2BCFB39E86340DAA(&iLocal_121, iParam0);
				}
			}
			break;
		
		case 7:
			if (!unk_0x05EFB6A616B6FADE(iLocal_121, iParam0))
			{
				if (func_644())
				{
					func_639();
					func_636(88, "GB_WORK_OVER", "GB_HTB_BMS6", 1, -1, 2, 1);
					unk_0x2BCFB39E86340DAA(&iLocal_121, iParam0);
				}
			}
			break;
		
		case 8:
			if (!unk_0x05EFB6A616B6FADE(iLocal_121, iParam0))
			{
				if (func_644())
				{
					func_639();
					func_635(88, func_6(), -1, "GB_HTB_BMS7", "GB_WORK_OVER", 1, -1, 2, -1);
					unk_0x2BCFB39E86340DAA(&iLocal_121, iParam0);
				}
			}
			break;
		
		case 9:
			if (!unk_0x05EFB6A616B6FADE(iLocal_121, iParam0))
			{
				if (func_644())
				{
					func_639();
					func_616(88, "GB_WORK_OVER", "GB_HTB_BMS8", func_629(), iLocal_111, func_6(), 0, 0, 0, -1, -1, -1, 2, -1, 2);
					unk_0x2BCFB39E86340DAA(&iLocal_121, iParam0);
				}
			}
			break;
		
		case 10:
			if (!unk_0x05EFB6A616B6FADE(iLocal_121, iParam0))
			{
				if (func_644())
				{
					func_639();
					func_636(87, "GB_WINNER", "GB_HTB_BMS9", 1, -1, 2, 1);
					unk_0x2BCFB39E86340DAA(&iLocal_121, iParam0);
				}
			}
			break;
		
		case 11:
			if (!unk_0x05EFB6A616B6FADE(iLocal_121, iParam0))
			{
				if (func_644())
				{
					func_639();
					func_636(87, "GB_WINNER", "GB_HTB_BMS10", 1, -1, 2, 1);
					unk_0x2BCFB39E86340DAA(&iLocal_121, iParam0);
				}
			}
			break;
		
		case 12:
			if (!unk_0x05EFB6A616B6FADE(iLocal_121, iParam0))
			{
				if (func_644())
				{
					func_639();
					func_636(88, "GB_WORK_OVER", "GB_HTB_BMS11", 1, -1, 2, 1);
					unk_0x2BCFB39E86340DAA(&iLocal_121, iParam0);
				}
			}
			break;
		
		case 13:
			if (!unk_0x05EFB6A616B6FADE(iLocal_121, iParam0))
			{
				if (func_644())
				{
					func_639();
					func_636(88, "GB_WORK_OVER", "GB_HTB_BMS12", 1, -1, 2, 1);
					unk_0x2BCFB39E86340DAA(&iLocal_121, iParam0);
				}
			}
			break;
		
		case 14:
			if (!unk_0x05EFB6A616B6FADE(iLocal_121, iParam0))
			{
				if (func_644())
				{
					func_639();
					func_636(88, "GB_WORK_OVER", "GB_HTB_BMS13", 1, -1, 2, 1);
					unk_0x2BCFB39E86340DAA(&iLocal_121, iParam0);
				}
			}
			break;
		
		case 15:
			if (!unk_0x05EFB6A616B6FADE(iLocal_121, iParam0))
			{
				if (func_644())
				{
					func_639();
					func_636(88, "GB_WORK_OVER", "GB_HTB_BMS14", 1, -1, 2, 1);
					unk_0x2BCFB39E86340DAA(&iLocal_121, iParam0);
				}
			}
			break;
		
		case 16:
			if (!unk_0x05EFB6A616B6FADE(iLocal_121, iParam0))
			{
				if (func_644())
				{
					func_639();
					func_636(88, "GB_WORK_OVER", "GB_HTB_BMS15", 1, -1, 2, 1);
					unk_0x2BCFB39E86340DAA(&iLocal_121, iParam0);
				}
			}
			break;
		
		case 17:
			if (!unk_0x05EFB6A616B6FADE(iLocal_121, iParam0))
			{
				if (func_644())
				{
					func_639();
					func_635(88, func_6(), -1, "GB_HTB_BMS16", "GB_WORK_OVER", 1, -1, 2, -1);
					unk_0x2BCFB39E86340DAA(&iLocal_121, iParam0);
				}
			}
			break;
	}
}

int func_616(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_628(iParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = iParam10;
	Var0.f_5 = iParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = iParam4;
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam13;
	Var0.f_72 = iParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	unk_0x2BCFB39E86340DAA(&(Var0.f_69), 2);
	return func_617(&Var0);
}

int func_617(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2437022.f_3026)
		{
			return 0;
		}
	}
	func_627(uParam0, uParam0->f_17);
	func_626(uParam0);
	if (func_182())
	{
		func_626(uParam0);
	}
	if (func_625(uParam0->f_1))
	{
		func_618();
		if (Global_2437022.f_2704[0 /*80*/].f_2 == 0)
		{
			Global_2437022.f_2704[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2437022.f_2704[0 /*80*/].f_1 == 13 || Global_2437022.f_2704[0 /*80*/].f_1 == 53) || Global_2437022.f_2704[0 /*80*/].f_1 == 54) || Global_2437022.f_2704[0 /*80*/].f_1 == 58)
		{
			Global_2437022.f_2704[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2437022.f_2704[iVar0 + 1 /*80*/] = { Global_2437022.f_2704[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2437022.f_2704[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2437022.f_2704[iVar0 /*80*/].f_2 == 0)
		{
			Global_2437022.f_2704[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_618();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_2437022.f_2704[iVar0 /*80*/].f_69), 1);
				Global_2437022.f_2704[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !unk_0x05EFB6A616B6FADE(uParam0->f_69, 7))
			{
				if (func_494(Global_2437022.f_2704[iVar0 /*80*/].f_1))
				{
					Global_2437022.f_2704[iVar0 /*80*/].f_2 = 5;
					unk_0x2BCFB39E86340DAA(&(Global_2437022.f_2704[iVar0 /*80*/].f_69), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_618()
{
	bool bVar0;
	
	if (Global_2437022.f_3027)
	{
		return;
	}
	if (!Global_71473)
	{
		Global_71473 = 1;
		bVar0 = true;
	}
	func_619();
	if (bVar0)
	{
		Global_71473 = 0;
	}
}

void func_619()
{
	Global_2437022.f_3028 = 0;
	Global_2437022.f_3028.f_578 = 0;
	func_623(&(Global_2437022.f_3028.f_1));
	Global_2437022.f_3028.f_1.f_1 = 0;
	func_620(&(Global_2437022.f_3028.f_1));
}

void func_620(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x86795B44CE5FE021(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x47C01C0E6F4C1D06())
		{
			unk_0x31A9E530D137684F(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x233A5B4A35140C6B(false);
			unk_0x271C1332F482646C();
		}
		unk_0x86795B44CE5FE021(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x65227735B3827631(false);
		uParam0->f_564 = 0;
	}
	if (!Global_71473)
	{
		if (!unk_0xD32647D293B05ADD(unk_0xA6580F898F4E801C()))
		{
			if (!Global_71474)
			{
				if (unk_0x71364F510A1CB69F() && !func_622(0))
				{
					unk_0x70C1F5AA59767FE6(800);
				}
			}
		}
	}
	func_621(0);
}

void func_621(int iParam0)
{
	Global_71465 = iParam0;
	Global_71466 = iParam0;
}

bool func_622(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

void func_623(var uParam0)
{
	func_624(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_624(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_625(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_626(var uParam0)
{
	if (func_496(uParam0->f_1))
	{
		uParam0->f_72 = func_461();
	}
}

void func_627(var uParam0, int iParam1)
{
	if (func_496(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_11() || !func_5(iParam1, 0, 1))
	{
		return;
	}
	if (func_494(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_205(iParam1, -2, 0, 0, 0);
		}
	}
}

void func_628(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_11();
	uParam1->f_18 = func_11();
	uParam1->f_19 = func_11();
	uParam1->f_20 = func_11();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

char* func_629()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_85(unk_0xD4E735F4B6A956AC());
	if (iVar0 != func_11())
	{
		if (iVar0 != unk_0xD4E735F4B6A956AC())
		{
			if (((func_427(iVar0, 28) || func_427(unk_0xD4E735F4B6A956AC(), 28)) || func_634(iVar0)) && !func_633(iVar0))
			{
				return func_631(iVar0, 0);
			}
			if (!unk_0x29A02C184A66D25E() && !unk_0xFB0CCF9A0D35587C(0, -1, 1))
			{
				return func_631(iVar0, 0);
			}
		}
		sVar1 = func_630(&(Global_1625435[iVar0 /*560*/].f_11.f_99));
		if (unk_0x429D45A6C6520026(sVar1))
		{
			return func_631(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_630(var uParam0)
{
	return uParam0;
}

char* func_631(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_51(iParam0, 1))
		{
			return func_632();
		}
	}
	return unk_0x08791BD93D5986C6("GB_REST_ACC");
}

char* func_632()
{
	return unk_0x08791BD93D5986C6("GB_REST_ACCM");
}

int func_633(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_157(iParam0) };
	if (unk_0x29A02C184A66D25E())
	{
		if (unk_0x804C0CBA285C7A35(0))
		{
			if (unk_0xDD2275BE82C4DA3E(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_634(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_11())
	{
		Var0 = { func_157(iParam0) };
		if (unk_0x7DD04831D0FC44CA() || unk_0x47C01C0E6F4C1D06())
		{
			if (unk_0x804C0CBA285C7A35(0))
			{
				return 0;
			}
		}
		else if (unk_0x29A02C184A66D25E())
		{
			if (unk_0x804C0CBA285C7A35(0))
			{
				if (unk_0xDD2275BE82C4DA3E(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_635(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_628(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_17 = iParam1;
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != -1)
	{
		unk_0x2BCFB39E86340DAA(&(Var0.f_69), iParam8);
	}
	return func_617(&Var0);
}

int func_636(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_628(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	return func_617(&Var0);
}

int func_637(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_11();
	iVar1 = func_11();
	iVar2 = func_11();
	return func_616(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

char* func_638(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		sVar0 = func_630(&(Global_1625435[iParam0 /*560*/].f_11.f_99));
		return sVar0;
	}
	if (Global_1625435[iParam0 /*560*/].f_11.f_115 != Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_115)
	{
		sVar0 = func_631(iParam0, 0);
		return sVar0;
	}
	if (((func_427(iParam0, 28) || func_427(unk_0xD4E735F4B6A956AC(), 28)) || func_634(iParam0)) && !func_633(iParam0))
	{
		return func_631(iParam0, 0);
	}
	iVar1 = func_85(iParam0);
	if (iVar1 != func_11())
	{
		if (iVar1 != unk_0xD4E735F4B6A956AC())
		{
			if (!unk_0x29A02C184A66D25E() && !unk_0xFB0CCF9A0D35587C(0, -1, 1))
			{
				return func_631(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_11())
	{
		sVar0 = func_630(&(Global_1625435[iVar1 /*560*/].f_11.f_99));
		if (unk_0x429D45A6C6520026(sVar0))
		{
			return func_631(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

void func_639()
{
	if (((((((func_642("GB_HTB_HR1", func_638(func_16()), func_643(func_16())) || func_641("GB_HTB_HR0", func_638(func_16()), func_643(func_16()), "GB_HTB_BLP", func_643(func_16()))) || func_640("GB_HTB_HG0", "GB_HTB_BLP", func_643(func_16()))) || func_34("GB_HTB_HELP2")) || func_34("GB_HTB_HELP3")) || func_34("GB_HTB_HELP4")) || func_34("GB_HTB_HELP5")) || func_34("GB_HTB_HELP7"))
	{
		unk_0x135C61E339DABBAC(1);
	}
}

int func_640(char* sParam0, int iParam1, int iParam2)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xBA9FB571BCB6C1BD(iParam2);
	}
	unk_0x4FDA9E6EF359F8A9(iParam1);
	return unk_0x3D94488A86ABB03F(0);
}

int func_641(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xBA9FB571BCB6C1BD(iParam2);
	}
	unk_0xC327C023FDA37F2E(sParam1);
	if (!iParam4 == 0)
	{
		unk_0xBA9FB571BCB6C1BD(iParam4);
	}
	unk_0x4FDA9E6EF359F8A9(iParam3);
	return unk_0x3D94488A86ABB03F(0);
}

int func_642(char* sParam0, char* sParam1, int iParam2)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xBA9FB571BCB6C1BD(iParam2);
	}
	unk_0xC327C023FDA37F2E(sParam1);
	return unk_0x3D94488A86ABB03F(0);
}

int func_643(int iParam0)
{
	int iVar0;
	
	iVar0 = func_220(iParam0);
	if (iVar0 != -1)
	{
		return func_218(iVar0);
	}
	return 1;
}

int func_644()
{
	if ((func_5(unk_0xD4E735F4B6A956AC(), 1, 1) && !unk_0xD1ABB20CFF127CCC()) && !func_540())
	{
		return 1;
	}
	return 0;
}

int func_645(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_11())
	{
		if (!bParam2)
		{
			if (func_646(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1625435[iParam0 /*560*/].f_11 != func_11())
		{
			return iParam1 == Global_1625435[iParam0 /*560*/].f_11;
		}
	}
	return 0;
}

int func_646(int iParam0, int iParam1)
{
	if (iParam1 != func_11())
	{
		if (iParam0 != func_11())
		{
			if (Global_1625435[iParam0 /*560*/].f_11 != func_11())
			{
				if (Global_1625435[iParam0 /*560*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_647(int iParam0)
{
	if (func_576())
	{
		func_639();
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (!unk_0x05EFB6A616B6FADE(iLocal_122, iParam0))
			{
				if (func_653(0))
				{
					func_652("GB_HTB_HB0", "GB_HTB_BLP", func_643(func_16()), -1);
					func_49(1);
					unk_0x2BCFB39E86340DAA(&iLocal_122, iParam0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x05EFB6A616B6FADE(iLocal_122, iParam0))
			{
				if (func_653(0))
				{
					func_651("GB_HTB_HR0", func_638(func_16()), func_643(func_16()), "GB_HTB_BLP", func_643(func_16()), -1);
					func_49(1);
					unk_0x2BCFB39E86340DAA(&iLocal_122, iParam0);
				}
			}
			break;
		
		case 2:
			if (!unk_0x05EFB6A616B6FADE(iLocal_122, iParam0))
			{
				if (func_653(0))
				{
					func_53("GB_HTB_HELP2", -1);
					func_49(1);
					unk_0x2BCFB39E86340DAA(&iLocal_122, iParam0);
				}
			}
			break;
		
		case 3:
			if (!unk_0x05EFB6A616B6FADE(iLocal_122, iParam0))
			{
				if (func_653(0))
				{
					func_53("GB_HTB_HELP3", -1);
					func_49(1);
					unk_0x2BCFB39E86340DAA(&iLocal_122, iParam0);
				}
			}
			break;
		
		case 4:
			if (func_653(0))
			{
				func_53("GB_HTB_HELP4", -1);
				func_49(0);
			}
			break;
		
		case 5:
			if (!unk_0x05EFB6A616B6FADE(iLocal_122, iParam0))
			{
				if (func_653(0))
				{
					func_53("GB_HTB_HELP5", -1);
					func_49(1);
					unk_0x2BCFB39E86340DAA(&iLocal_122, iParam0);
				}
			}
			break;
		
		case 6:
			if (!unk_0x05EFB6A616B6FADE(iLocal_122, iParam0))
			{
				if (func_653(0))
				{
					func_652("GB_HTB_HG0", "GB_HTB_BLP", func_643(func_16()), -1);
					func_49(1);
					unk_0x2BCFB39E86340DAA(&iLocal_122, iParam0);
				}
			}
			break;
		
		case 7:
			if (!unk_0x05EFB6A616B6FADE(iLocal_122, iParam0))
			{
				if (func_653(0))
				{
					func_53("GB_HTB_HELP7", -1);
					func_49(1);
					unk_0x2BCFB39E86340DAA(&iLocal_122, iParam0);
					func_649(174677746, func_650(0));
				}
			}
			break;
		
		case 8:
			if (!unk_0x05EFB6A616B6FADE(iLocal_122, iParam0))
			{
				if (func_653(0))
				{
					func_648("GB_HTB_HR1", func_638(func_16()), func_643(func_16()), -1);
					func_49(1);
					unk_0x2BCFB39E86340DAA(&iLocal_122, iParam0);
					func_649(174677746, func_650(0));
				}
			}
			break;
	}
}

void func_648(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x143A55A4EA118F24(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xBA9FB571BCB6C1BD(iParam2);
	}
	unk_0xC327C023FDA37F2E(sParam1);
	unk_0x9E55AC8543FF8836(0, 0, false, iParam3);
}

void func_649(int iParam0, int iParam1)
{
	struct<4> Var0;
	
	Var0 = 566035618;
	Var0.f_1 = unk_0xD4E735F4B6A956AC();
	Var0.f_2 = iParam0;
	Var0.f_3 = unk_0x22C775856F4633CA(0, 9999);
	if (!iParam1 == 0)
	{
		if (unk_0x4C9BACA8D249CB13())
		{
			unk_0x04F37AFC39D93909(1, &Var0, 4, iParam1);
		}
	}
}

int func_650(bool bParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x1483A8AE554B8B2B(iVar1);
		if (func_5(iVar2, 0, 0))
		{
			if (bParam0)
			{
				if (unk_0x05EFB6A616B6FADE(vLocal_138[iVar1 /*3*/].f_2, 0))
				{
					unk_0x2BCFB39E86340DAA(&uVar0, iVar2);
				}
			}
			else if (iVar2 != Local_137.f_5)
			{
				if (unk_0x05EFB6A616B6FADE(vLocal_138[iVar1 /*3*/].f_2, 0))
				{
					unk_0x2BCFB39E86340DAA(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_651(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0x143A55A4EA118F24(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xBA9FB571BCB6C1BD(iParam2);
	}
	unk_0xC327C023FDA37F2E(sParam1);
	if (!iParam4 == 0)
	{
		unk_0xBA9FB571BCB6C1BD(iParam4);
	}
	unk_0x4FDA9E6EF359F8A9(iParam3);
	unk_0x9E55AC8543FF8836(0, 0, false, iParam5);
}

void func_652(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x143A55A4EA118F24(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xBA9FB571BCB6C1BD(iParam2);
	}
	unk_0x4FDA9E6EF359F8A9(iParam1);
	unk_0x9E55AC8543FF8836(0, 0, false, iParam3);
}

int func_653(bool bParam0)
{
	if ((((!func_540() && !unk_0xD1ABB20CFF127CCC()) && !unk_0x49B680F5AF4359D0()) && func_5(unk_0xD4E735F4B6A956AC(), 1, 1)) && !func_79())
	{
		if (bParam0)
		{
			if (!unk_0xE06AA0996C4E4E03())
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_654()
{
	if (unk_0xD4E735F4B6A956AC() == func_16())
	{
		return 1;
	}
	return 0;
}

void func_655()
{
	int iVar0;
	var uVar1;
	char* sVar2;
	
	iVar0 = 1;
	iLocal_136 = iLocal_136;
	if (func_21(&(Local_137.f_12)))
	{
		if (func_664(Local_137.f_12, (Global_262145.f_12377 - 35000), 0))
		{
			func_663(&iLocal_135, 3, 1);
		}
		if (func_664(Local_137.f_12, (Global_262145.f_12377 - 30000), 0))
		{
			func_663(&iLocal_135, 4, 1);
		}
		if (func_664(Local_137.f_12, (Global_262145.f_12377 - 27000), 0))
		{
			func_663(&iLocal_135, 5, 1);
		}
		if (func_664(Local_137.f_12, Global_262145.f_12377, 0))
		{
			func_663(&iLocal_135, 2, 1);
		}
	}
	if (func_661(unk_0xD4E735F4B6A956AC(), Global_262145.f_12381, &uVar1, func_663(&iLocal_135, 13, -1), 1123024896, 0))
	{
		func_663(&iLocal_135, 13, 1);
	}
	else
	{
		func_663(&iLocal_135, 13, 0);
	}
	if (bLocal_127 || (!func_659() && !func_663(&iLocal_135, 13, -1)))
	{
		iVar0 = 0;
	}
	switch (func_658(unk_0xD60943E3BE730BF0()))
	{
		case 0:
			break;
		
		case 1:
			if (!func_663(&iLocal_135, 12, 1))
			{
				iLocal_136 = unk_0xFFCC7EBF88BDEE54();
			}
			if (iVar0 && !func_663(&iLocal_135, 3, -1))
			{
				if (!func_663(&iLocal_135, 1, -1))
				{
					sVar2 = func_657(func_659(), "BG_HUNT_BOSS_DEFEND_START", "BG_HUNT_BOSS_ATTACK_START");
					if (unk_0x7B5129A25EE58E36(sVar2) && func_663(&iLocal_135, 11, -1))
					{
						unk_0x9444470D6D9ADB88(sVar2);
						func_663(&iLocal_135, 1, 1);
					}
					if (!func_663(&iLocal_135, 11, -1))
					{
						func_656(1);
					}
				}
			}
			else if (func_663(&iLocal_135, 1, -1) && !func_663(&iLocal_135, 3, -1))
			{
				if (unk_0x7B5129A25EE58E36("BG_HUNT_STOP"))
				{
					unk_0x9444470D6D9ADB88("BG_HUNT_STOP");
					func_656(0);
					func_663(&iLocal_135, 1, 0);
				}
			}
			if (func_663(&iLocal_135, 3, -1))
			{
				if (func_663(&iLocal_135, 1, -1))
				{
					if (unk_0x7B5129A25EE58E36("APT_PRE_COUNTDOWN_STOP"))
					{
						unk_0x9444470D6D9ADB88("APT_PRE_COUNTDOWN_STOP");
						func_663(&iLocal_135, 1, 0);
					}
				}
			}
			if (func_663(&iLocal_135, 4, -1))
			{
				if ((!func_663(&iLocal_135, 7, -1) && !func_663(&iLocal_135, 5, -1)) && !(func_576() || iLocal_110 != 3))
				{
					if (unk_0x7B5129A25EE58E36("APT_COUNTDOWN_30S"))
					{
						unk_0x0B756FF7161B9AB0("AllowScoreAndRadio", 1);
						unk_0x9444470D6D9ADB88("APT_COUNTDOWN_30S");
						func_663(&iLocal_135, 7, 1);
					}
				}
				if ((!func_663(&iLocal_135, 6, -1) && !func_663(&iLocal_135, 5, -1)) && func_663(&iLocal_135, 7, -1))
				{
					unk_0x2A22FF5D4ECD503A(0);
					func_663(&iLocal_135, 6, 1);
				}
			}
			break;
		
		case 2:
			if (!func_663(&iLocal_135, 8, -1) && func_663(&iLocal_135, 7, -1))
			{
				if (unk_0x7B5129A25EE58E36("APT_FADE_IN_RADIO"))
				{
					unk_0x9444470D6D9ADB88("APT_FADE_IN_RADIO");
					func_663(&iLocal_135, 8, 1);
				}
			}
			if (func_663(&iLocal_135, 1, -1))
			{
				if (unk_0x7B5129A25EE58E36("BG_HUNT_STOP"))
				{
					unk_0xEEF61BF551977B0E("APT_COUNTDOWN_30S_KILL");
					unk_0x9444470D6D9ADB88("BG_HUNT_STOP");
					func_663(&iLocal_135, 1, 0);
				}
			}
			if (func_663(&iLocal_135, 7, -1) && !func_663(&iLocal_135, 2, -1))
			{
				if (unk_0x7B5129A25EE58E36("APT_COUNTDOWN_30S_KILL"))
				{
					func_663(&iLocal_135, 7, 0);
					unk_0x9444470D6D9ADB88("APT_COUNTDOWN_30S_KILL");
				}
			}
			if (func_663(&iLocal_135, 11, -1))
			{
				func_656(0);
			}
			break;
	}
	if (func_663(&iLocal_135, 6, -1) && (func_663(&iLocal_135, 5, -1) || func_658(unk_0xD60943E3BE730BF0()) == 2))
	{
		unk_0x2A22FF5D4ECD503A(1);
		unk_0x0B756FF7161B9AB0("AllowScoreAndRadio", 0);
		func_663(&iLocal_135, 6, 0);
	}
	if (func_21(&(Local_137.f_16)) && func_664(Local_137.f_16, 10000, 0))
	{
		if (!func_663(&iLocal_135, 10, -1))
		{
			iLocal_134 = unk_0x7A3ECD08D6D1D554();
			unk_0xE11F00B4AC919F45(iLocal_134, "10s", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
			func_663(&iLocal_135, 10, 1);
		}
	}
	else if (func_663(&iLocal_135, 10, -1))
	{
		unk_0x5DE59A67B5F326CF(iLocal_134);
		iLocal_134 = -1;
		func_663(&iLocal_135, 10, 0);
	}
}

void func_656(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B756FF7161B9AB0("DisableFlightMusic", 1);
		unk_0x0B756FF7161B9AB0("WantedMusicDisabled", 1);
		func_663(&iLocal_135, 11, 1);
	}
	else
	{
		unk_0x0B756FF7161B9AB0("DisableFlightMusic", 0);
		unk_0x0B756FF7161B9AB0("WantedMusicDisabled", 0);
		func_663(&iLocal_135, 11, 0);
	}
}

char* func_657(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_658(int iParam0)
{
	return vLocal_138[iParam0 /*3*/].f_1;
}

bool func_659()
{
	return func_660(func_16(), 1);
}

int func_660(int iParam0, bool bParam1)
{
	return func_645(unk_0xD4E735F4B6A956AC(), iParam0, bParam1);
}

int func_661(int iParam0, int iParam1, var uParam2, bool bParam3, float fParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = unk_0xEE978C39384D834F(iParam0);
	fVar1 = func_662(bParam3, 30f, 0f);
	fVar2 = 4f;
	if (!unk_0xDC5D81351D6A4DDB(iVar0))
	{
		return 0;
	}
	*uParam2 = func_15(iVar0, Local_137.f_7, 0);
	if (*uParam2 > (IntToFloat(iParam1) + (fVar1 * fVar2)))
	{
		return 0;
	}
	fVar3 = unk_0xDB684DA32A9BAB5E(iVar0);
	*uParam2 = func_14(*uParam2, fVar3);
	if (fVar3 > (fParam4 + fVar1) && !bParam5)
	{
		return 0;
	}
	return 1;
}

float func_662(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_663(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = unk_0x05EFB6A616B6FADE(*iParam0, iParam1);
	if (iParam2 == 0)
	{
		unk_0xFA57C719261AA55D(iParam0, iParam1);
	}
	else if (iParam2 == 1)
	{
		unk_0x2BCFB39E86340DAA(iParam0, iParam1);
	}
	return bVar0;
}

int func_664(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (unk_0x4C9BACA8D249CB13() && !bParam3)
	{
		if (unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), iParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(unk_0xFD34717937104F1C(), iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

void func_665()
{
	switch (vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_1)
	{
		case 1:
			if (func_654())
			{
				if (!unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 3))
				{
					if (func_666(82, "GB_INTTXT_HBB", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						unk_0x2BCFB39E86340DAA(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 3);
					}
				}
			}
			else if (func_645(unk_0xD4E735F4B6A956AC(), func_16(), 0))
			{
				if (!unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 3))
				{
					if (func_666(82, "GB_INTTXT_HBG", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						unk_0x2BCFB39E86340DAA(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 3);
					}
				}
			}
			break;
	}
}

int func_666(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xFA57C719261AA55D(&Global_2383, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_667(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3090 = iParam6;
			Global_2993[3 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
			Global_3070 = iParam0;
			unk_0x2BCFB39E86340DAA(&Global_2383, 1);
			unk_0x2BCFB39E86340DAA(&Global_2383, 7);
		}
		return 1;
	}
	return 0;
}

int func_667(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x3CAC2741CC1A631F(sParam14, sParam15))
	{
	}
	func_677();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14513 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14513 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14513 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			if (unk_0xFF12F654A8561928(unk_0xA19140A5C42D8715()))
			{
				return 0;
			}
		}
		if (Global_106070.f_14023[Global_14513 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x8B1574454E8C2421(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x8B1574454E8C2421(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_676() == 0)
	{
		func_674();
		return 0;
	}
	func_673(Global_16889);
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/]), sParam1, 64);
	Global_106070.f_14113[Global_16889 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_106070.f_14113[Global_16889 /*104*/].f_24 = iParam2;
	}
	Global_106070.f_14113[Global_16889 /*104*/].f_25 = iParam7;
	Global_106070.f_14113[Global_16889 /*104*/].f_26 = uParam8;
	Global_106070.f_14113[Global_16889 /*104*/].f_29 = uParam9;
	Global_106070.f_14113[Global_16889 /*104*/].f_30 = uParam12;
	Global_106070.f_14113[Global_16889 /*104*/].f_31 = uParam11;
	Global_106070.f_14113[Global_16889 /*104*/].f_28 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_33), sParam4, 64);
	Global_106070.f_14113[Global_16889 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_50), sParam5, 64);
	Global_106070.f_14113[Global_16889 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_83), sParam15, 64);
	if (unk_0x05EFB6A616B6FADE(Global_2383, 10))
	{
		Global_106070.f_14113[Global_16889 /*104*/].f_99[0] = 1;
		Global_106070.f_14113[Global_16889 /*104*/].f_99[1] = 1;
		Global_106070.f_14113[Global_16889 /*104*/].f_99[2] = 1;
		Global_3089 = 4;
		func_672(0);
		func_672(2);
		func_672(1);
	}
	else
	{
		func_677();
		switch (iParam16)
		{
			case 3:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[Global_14513] = 1;
				break;
			
			case 0:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14513)
			{
				case 0:
					func_672(0);
					Global_3089 = 0;
					break;
				
				case 1:
					func_672(1);
					Global_3089 = 1;
					break;
				
				case 2:
					func_672(2);
					Global_3089 = 2;
					break;
				
				case 3:
					func_672(3);
					Global_3089 = 3;
					break;
				
				default:
					Global_3089 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x05EFB6A616B6FADE(Global_2383, 10))
		{
			Global_106070.f_14023[0 /*20*/].f_17 = 1;
			Global_106070.f_14023[1 /*20*/].f_17 = 1;
			Global_106070.f_14023[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_106070.f_14023[Global_14513 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_106070.f_14023[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_106070.f_14023[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_106070.f_14023[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16891[Global_16889] = 0;
	if (bParam10)
	{
		func_677();
		if (Global_14456)
		{
			StringCopy(&Global_14502, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14513)
			{
				case 0:
					StringCopy(&Global_14502, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14502, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14502, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14502, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_602())
			{
				unk_0xE11F00B4AC919F45(-1, "Text_Arrive_Tone", &Global_14502, true);
			}
		}
	}
	if (!Global_14682)
	{
		if (Global_14513.f_1 == 6)
		{
			func_671(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_668(1);
			func_671(Global_14494, "DISPLAY_VIEW", 1f, to_float(Global_14493), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_668(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_16890 = 0;
	Global_2988 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2952[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_670(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2390[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2390[iVar1 /*15*/].f_4)
					{
						if (Global_2952[iVar0] == 0)
						{
							Global_2916[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x05EFB6A616B6FADE(Global_2384, 3))
								{
									iVar2 = 42;
									Global_14685 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14685 = 0;
								}
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_444(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(iVar2);
								unk_0x271C1332F482646C();
							}
							if (Global_2458186)
							{
								if (iVar1 == 14)
								{
									func_669(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2952[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2390[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2390[iVar1 /*15*/].f_4)
					{
						if (Global_2952[iVar0] == 0)
						{
							Global_2916[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_106070.f_14113[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_106070.f_14113[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_106070.f_14113[iVar3 /*104*/].f_99[Global_14513] == 1)
											{
												Global_16890++;
											}
										}
									}
									iVar3++;
								}
								func_669(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(Global_16890), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_71205)
								{
									iVar4 = 0;
									iVar4 = Global_4267064;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4267065[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4267065[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4267065[iVar5 /*104*/].f_99[Global_14513] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_669(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14513)
									{
										case 0:
											iVar6 = Global_37276;
											break;
										
										case 1:
											iVar6 = Global_37277;
											break;
										
										case 2:
											iVar6 = Global_37278;
											break;
										
										default:
											break;
									}
									func_669(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_669(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_444(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(Global_2389);
								unk_0x271C1332F482646C();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x05EFB6A616B6FADE(Global_2384, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_444(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(iVar7);
								unk_0x271C1332F482646C();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x05EFB6A616B6FADE(Global_2384, 3))
								{
									iVar8 = 42;
									Global_14685 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14685 = 0;
								}
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_444(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(iVar8);
								unk_0x271C1332F482646C();
							}
							else if (iVar1 == 8)
							{
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_444(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(42);
								unk_0x271C1332F482646C();
							}
							else if ((iVar1 == 23 && unk_0x3CAC2741CC1A631F(&(Global_2390[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x05EFB6A616B6FADE(Global_2384, 6))
							{
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_444(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(42);
								unk_0x271C1332F482646C();
							}
							else if (Global_2390[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1624079.f_1;
								func_669(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_669(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2952[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_669(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_444(sParam7);
	}
	if (!unk_0x429D45A6C6520026(sParam8))
	{
		func_444(sParam8);
	}
	if (!unk_0x429D45A6C6520026(sParam9))
	{
		func_444(sParam9);
	}
	if (!unk_0x429D45A6C6520026(sParam10))
	{
		func_444(sParam10);
	}
	if (!unk_0x429D45A6C6520026(sParam11))
	{
		func_444(sParam11);
	}
	unk_0x271C1332F482646C();
}

bool func_670(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_671(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_672(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_106070.f_14023[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_673(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0xC5B07C33AC7BB174();
	iVar1 = unk_0x65DA628D62901275();
	iVar2 = unk_0x34CEB9721AC6A0A9();
	iVar3 = unk_0xC9A0B68BA813CF99();
	uVar4 = unk_0x897D202BD69186D5() + 1;
	iVar5 = unk_0x56EBDF0E39D83471();
	Global_106070.f_14113[iParam0 /*104*/].f_18 = iVar0;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_674()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71205)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16889 = 34;
	Global_106070.f_14113[Global_16889 /*104*/].f_18 = -1;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_1 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_2 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_3 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_675(Global_106070.f_14113[iVar2 /*104*/].f_18, Global_106070.f_14113[Global_16889 /*104*/].f_18))
		{
			Global_16889 = iVar2;
		}
		iVar2++;
	}
	Global_106070.f_14113[Global_16889 /*104*/].f_24 = 1;
}

int func_675(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_676()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71205)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_106070.f_14113[iVar2 /*104*/].f_24 == 0)
		{
			Global_16889 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16889 = 34;
	Global_106070.f_14113[Global_16889 /*104*/].f_18 = -1;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_1 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_2 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_3 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_106070.f_14113[iVar2 /*104*/].f_24 == 0 || Global_106070.f_14113[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_675(Global_106070.f_14113[iVar2 /*104*/].f_18, Global_106070.f_14113[Global_16889 /*104*/].f_18))
			{
				Global_16889 = iVar2;
			}
		}
		if (Global_106070.f_14113[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_16889 == 34)
	{
		return 0;
	}
	Global_106070.f_14113[Global_16889 /*104*/].f_99[0] = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_99[1] = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_99[2] = 0;
	return 1;
}

void func_677()
{
	if (func_670(14))
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
		Global_14513 = func_678();
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

var func_678()
{
	func_679();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_679()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_682(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_681(unk_0xA19140A5C42D8715());
			if (func_680(iVar0) && (!func_670(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_680(Global_106070.f_2355.f_539.f_4301))
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

bool func_680(int iParam0)
{
	return iParam0 < 3;
}

int func_681(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_682(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_682(int iParam0)
{
	if (func_680(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_683()
{
	if (func_576())
	{
		if (func_703())
		{
			func_702();
		}
		return;
	}
	if (iLocal_110 != 3)
	{
		if (func_703())
		{
			func_702();
		}
		return;
	}
	switch (func_658(unk_0xD60943E3BE730BF0()))
	{
		case 0:
			break;
		
		case 1:
			if (func_654())
			{
				if (func_21(&(Local_137.f_16)))
				{
					if (!func_700("GB_HTB_OT4"))
					{
						func_699("GB_HTB_OT4", 0);
					}
				}
				else if (!func_700("GB_HTB_OT1"))
				{
					func_699("GB_HTB_OT1", 0);
				}
			}
			else if (func_645(unk_0xD4E735F4B6A956AC(), func_16(), 0))
			{
				if (iLocal_110 == 3)
				{
					if (!func_700("GB_HTB_OT2"))
					{
						func_696("GB_HTB_OT2", "GB_BOSS_LC", iLocal_111, 0);
					}
				}
			}
			else if (func_610(unk_0xD60943E3BE730BF0()))
			{
				if (!func_700("GB_HTB_OT3"))
				{
					if (func_5(Local_137.f_5, 0, 1))
					{
						func_684("GB_HTB_OT3", Local_137.f_5, "GB_BOSS_LC", iLocal_111, 0);
					}
				}
			}
			break;
		
		case 2:
			if (func_703())
			{
				func_702();
			}
			break;
		
		case 3:
			if (func_703())
			{
				func_702();
			}
			break;
	}
}

void func_684(char* sParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if (func_685(sParam0, unk_0xB330C43B9B7B1724(iParam1), sParam2, bParam4, iParam3))
	{
		Global_1312576 = 14;
		Global_1312576.f_56 = iParam3;
		Global_1312576.f_54 = iParam1;
	}
}

int func_685(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)
{
	if (unk_0x429D45A6C6520026(sParam0))
	{
		return 0;
	}
	if (unk_0xC5E273061032AD53(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x429D45A6C6520026(sParam1))
	{
		return 0;
	}
	if (unk_0xC5E273061032AD53(sParam1) > 63)
	{
		return 0;
	}
	if (unk_0x429D45A6C6520026(sParam2))
	{
		return 0;
	}
	if (unk_0xC5E273061032AD53(sParam2) > 63)
	{
		return 0;
	}
	if (func_695(sParam0, sParam1, sParam2) && Global_1312576.f_56 == Global_1312576.f_58)
	{
		return 0;
	}
	func_689();
	Global_1312576 = 10;
	StringCopy(&(Global_1312576.f_1), unk_0x61D2332983ACC05C(), 32);
	Global_1312576.f_9 = unk_0xFEB6EEC0545AF7AA(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	StringCopy(&(Global_1312576.f_16), sParam1, 64);
	StringCopy(&(Global_1312576.f_32), sParam2, 64);
	Global_1312576.f_58 = uParam4;
	Global_1312576.f_56 = uParam4;
	func_688();
	func_687(bParam3);
	func_686();
	return 1;
}

void func_686()
{
	unk_0x2BCFB39E86340DAA(&(Global_1312576.f_59), 1);
}

void func_687(bool bParam0)
{
	if (bParam0)
	{
		unk_0x2BCFB39E86340DAA(&(Global_1312576.f_59), 0);
		return;
	}
	unk_0xFA57C719261AA55D(&(Global_1312576.f_59), 0);
}

void func_688()
{
	Global_1312576.f_10 = unk_0x8039F92D4B9C6B71(unk_0xFFCC7EBF88BDEE54(), 86400000);
	Global_1312576.f_11 = unk_0xFFCC7EBF88BDEE54();
}

void func_689()
{
	func_691();
	func_690(0);
}

void func_690(bool bParam0)
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

void func_691()
{
	if (!func_694())
	{
	}
	if (func_693())
	{
		unk_0xA9E97ADD9EE2DB2D(&(Global_1312576.f_12));
		func_692();
		unk_0xA3BC45E3C63A527C();
	}
}

void func_692()
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

int func_693()
{
	if (Global_1312576 == 20)
	{
		return 0;
	}
	return 1;
}

int func_694()
{
	if (!func_693())
	{
		return 0;
	}
	unk_0x783C05630CCAF363(&(Global_1312576.f_12));
	func_692();
	return unk_0x0818E99A91733016();
}

bool func_695(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_693())
	{
		return 0;
	}
	if (unk_0x429D45A6C6520026(sParam0))
	{
		return 0;
	}
	if (unk_0x429D45A6C6520026(sParam1))
	{
		return 0;
	}
	if (unk_0x429D45A6C6520026(sParam2))
	{
		return 0;
	}
	if (!unk_0xFEB6EEC0545AF7AA(sParam0) == unk_0xFEB6EEC0545AF7AA(&(Global_1312576.f_12)))
	{
		return 0;
	}
	if (!unk_0xFEB6EEC0545AF7AA(sParam1) == unk_0xFEB6EEC0545AF7AA(&(Global_1312576.f_16)))
	{
		return 0;
	}
	return unk_0xFEB6EEC0545AF7AA(sParam2) == unk_0xFEB6EEC0545AF7AA(&(Global_1312576.f_32));
}

void func_696(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_697(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312576 = 19;
		Global_1312576.f_56 = iParam2;
	}
}

int func_697(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (unk_0x429D45A6C6520026(sParam0))
	{
		return 0;
	}
	if (unk_0xC5E273061032AD53(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x429D45A6C6520026(sParam1))
	{
		return 0;
	}
	if (func_698(sParam0, sParam1) && Global_1312576.f_56 == Global_1312576.f_58)
	{
		return 0;
	}
	func_689();
	Global_1312576 = 3;
	StringCopy(&(Global_1312576.f_1), unk_0x61D2332983ACC05C(), 32);
	Global_1312576.f_9 = unk_0xFEB6EEC0545AF7AA(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	StringCopy(&(Global_1312576.f_16), sParam1, 64);
	Global_1312576.f_58 = uParam3;
	Global_1312576.f_56 = uParam3;
	func_688();
	func_687(bParam2);
	func_686();
	return 1;
}

bool func_698(char* sParam0, char* sParam1)
{
	if (!func_693())
	{
		return 0;
	}
	if (unk_0x429D45A6C6520026(sParam0))
	{
		return 0;
	}
	if (unk_0x429D45A6C6520026(sParam1))
	{
		return 0;
	}
	if (!unk_0xFEB6EEC0545AF7AA(sParam0) == unk_0xFEB6EEC0545AF7AA(&(Global_1312576.f_12)))
	{
		return 0;
	}
	return unk_0xFEB6EEC0545AF7AA(sParam1) == unk_0xFEB6EEC0545AF7AA(&(Global_1312576.f_16));
}

void func_699(char* sParam0, bool bParam1)
{
	if (unk_0x429D45A6C6520026(sParam0))
	{
		return;
	}
	if (unk_0xC5E273061032AD53(sParam0) > 23)
	{
		return;
	}
	if (func_700(sParam0))
	{
		return;
	}
	func_689();
	Global_1312576 = 0;
	StringCopy(&(Global_1312576.f_1), unk_0x61D2332983ACC05C(), 32);
	Global_1312576.f_9 = unk_0xFEB6EEC0545AF7AA(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	func_688();
	func_687(bParam1);
	func_686();
}

bool func_700(char* sParam0)
{
	if (!func_693())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		return func_701(sParam0);
	}
	if (unk_0x429D45A6C6520026(sParam0))
	{
		return 0;
	}
	return unk_0xFEB6EEC0545AF7AA(sParam0) == unk_0xFEB6EEC0545AF7AA(&(Global_1312576.f_12));
}

bool func_701(char* sParam0)
{
	if (!func_693())
	{
		return 0;
	}
	if (unk_0x429D45A6C6520026(sParam0))
	{
		return 0;
	}
	return unk_0xFEB6EEC0545AF7AA(sParam0) == unk_0xFEB6EEC0545AF7AA(&(Global_1312576.f_16));
}

void func_702()
{
	if (!func_693())
	{
		return;
	}
	if (!unk_0xFEB6EEC0545AF7AA(unk_0x61D2332983ACC05C()) == Global_1312576.f_9)
	{
		return;
	}
	func_689();
}

int func_703()
{
	if (!func_693())
	{
		return 0;
	}
	if (!unk_0xFEB6EEC0545AF7AA(unk_0x61D2332983ACC05C()) == Global_1312576.f_9)
	{
		return 0;
	}
	return 1;
}

void func_704()
{
	int iVar0;
	
	if (func_576())
	{
		return;
	}
	if (iLocal_110 != 3)
	{
		return;
	}
	switch (func_658(unk_0xD60943E3BE730BF0()))
	{
		case 0:
			break;
		
		case 1:
			if (func_654())
			{
				if (func_21(&(Local_137.f_16)))
				{
					iVar0 = (20000 - func_708(&(Local_137.f_16), 0, 0));
					if (iVar0 > 0)
					{
						func_705(iVar0, "GB_HTB_TM2", 0, 0, 20000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_705(0, "GB_HTB_TM2", 0, 0, 0, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					return;
				}
			}
			if (func_21(&(Local_137.f_12)))
			{
				iVar0 = (Global_262145.f_12377 - func_708(&(Local_137.f_12), 0, 0));
				if (iVar0 > 0)
				{
					func_705(iVar0, "GB_WORK_END", 0, 0, 0, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				else
				{
					func_705(0, "GB_WORK_END", 0, 0, 0, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 2:
			if (iLocal_110 == 2 || iLocal_110 == 3)
			{
				if (func_21(&(Local_137.f_14)))
				{
					func_705(0, "GB_WORK_END", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
	}
}

void func_705(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_707(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1369750.f_1 = 1;
		func_706(7, iVar0);
		Global_1369750.f_4399[iVar0] = iParam0;
		StringCopy(&(Global_1369750.f_4399.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1369750.f_4399.f_172[iVar0] = iParam2;
		Global_1369750.f_4399.f_216[iVar0] = iParam3;
		Global_1369750.f_4399.f_183[iVar0] = iParam4;
		Global_1369750.f_4399.f_194[iVar0] = iParam5;
		Global_1369750.f_4399.f_249[iVar0] = iParam6;
		Global_1369750.f_4399.f_260[iVar0] = iParam7;
		Global_1369750.f_4399.f_205[iVar0] = iParam8;
		Global_1369750.f_4399.f_314[iVar0] = iParam9;
		Global_1369750.f_4399.f_325[iVar0] = iParam10;
		Global_1369750.f_4399.f_357[iVar0] = iParam11;
		Global_1369750.f_4399.f_238[iVar0] = iParam12;
		Global_1369750.f_4399.f_271[iVar0] = iParam13;
		Global_1369750.f_4399.f_368[iVar0] = iParam14;
		Global_1369750.f_4399.f_379[iVar0] = iParam15;
		Global_1369750.f_4399.f_390[iVar0] = iParam16;
	}
}

void func_706(int iParam0, int iParam1)
{
	unk_0x2BCFB39E86340DAA(&(Global_1369750.f_6130[iParam0]), iParam1);
}

bool func_707(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_1369750.f_6130[iParam0], iParam1);
}

int func_708(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x4C9BACA8D249CB13() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), *uParam0);
		}
		else
		{
			return unk_0x1893BEC593409B02(unk_0x7546CD2A62C6DBB6(), *uParam0);
		}
	}
	return unk_0x1893BEC593409B02(unk_0xFD34717937104F1C(), *uParam0);
}

void func_709()
{
	var uVar0;
	int iVar1;
	
	if (func_576())
	{
		func_727();
		return;
	}
	switch (vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_1)
	{
		case 0:
			if (!func_17(Local_137.f_7))
			{
				if (func_645(unk_0xD4E735F4B6A956AC(), func_16(), 1))
				{
					if (func_726(unk_0xD4E735F4B6A956AC(), Global_262145.f_12381, &uVar0, 1123024896, 0))
					{
						if (unk_0xCE3CB618AFE55EFB(iLocal_120))
						{
							unk_0xE1623437A3194332(&iLocal_120);
						}
					}
					else if (!unk_0xCE3CB618AFE55EFB(iLocal_120))
					{
						iLocal_120 = unk_0xA70969818F182A36(Local_137.f_7);
						unk_0x264E87C905AE790B(iLocal_120, true);
						unk_0xC4F12E446CCE89F5(iLocal_120, "GB_HTB_BLIP1");
						unk_0x0798CD089167D3C1(iLocal_120, 1);
						unk_0xE14767EA16F946A4(iLocal_120, 7000);
						unk_0x7DB79A42AADE120F(iLocal_120, 458);
						unk_0xAD8FB9E563A1FF80(iLocal_120, 12);
						unk_0x575CF00E129E0CE1(iLocal_120, Global_262145.f_12242);
						func_725(&iLocal_120, iLocal_111);
					}
					if (!unk_0xCE3CB618AFE55EFB(iLocal_119))
					{
						iLocal_119 = unk_0x3841F2F038129676(Local_137.f_7, to_float((Global_262145.f_12381 - 1)));
						func_725(&iLocal_119, iLocal_111);
						unk_0x264E87C905AE790B(iLocal_119, true);
						unk_0x6124E42D4423DCB2(iLocal_119, 1);
						unk_0xC4F12E446CCE89F5(iLocal_119, "GB_HTB_BLIP0");
					}
					if (func_724(Local_137.f_5) != iLocal_123)
					{
						iLocal_123 = func_724(Local_137.f_5);
						unk_0xE8C2974337833D20(iLocal_119, iLocal_123);
					}
				}
			}
			break;
		
		case 1:
			if (func_654())
			{
				func_722();
				if (!unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 4))
				{
					if (!func_21(&(Local_137.f_16)) && !func_21(&(Local_137.f_18)))
					{
						if (!unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 2))
						{
							func_721(1, 0);
							unk_0x2BCFB39E86340DAA(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 2);
						}
					}
					else if (unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 2))
					{
						func_721(0, 0);
						unk_0xFA57C719261AA55D(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 2);
					}
				}
			}
			else
			{
				func_720();
				if (!func_645(unk_0xD4E735F4B6A956AC(), func_16(), 0))
				{
					if (bLocal_126)
					{
						if (vLocal_138[unk_0x679C4D4E80CF78DB(Local_137.f_5) /*3*/].f_1 == 1 && !unk_0x05EFB6A616B6FADE(vLocal_138[unk_0x679C4D4E80CF78DB(Local_137.f_5) /*3*/].f_2, 2))
						{
							if (!unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 10))
							{
								func_718(Local_137.f_5, 432, 1, 0);
								func_716(Local_137.f_5, func_717(iLocal_111), 1, 0);
								if (func_5(func_16(), 1, 1))
								{
									func_710(Local_137.f_5, 1, 0, 0);
								}
								unk_0x2BCFB39E86340DAA(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 10);
							}
						}
						else if (unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 10))
						{
							func_718(Local_137.f_5, 432, 0, 0);
							func_716(Local_137.f_5, func_717(iLocal_111), 0, 0);
							if (func_5(func_16(), 1, 1))
							{
								func_710(Local_137.f_5, 0, 0, 0);
							}
							unk_0xFA57C719261AA55D(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 10);
						}
					}
				}
			}
			if (!func_17(Local_137.f_7))
			{
				if (func_726(unk_0xD4E735F4B6A956AC(), Global_262145.f_12381, &uVar0, 1123024896, 0))
				{
					if (unk_0xCE3CB618AFE55EFB(iLocal_120))
					{
						unk_0xE1623437A3194332(&iLocal_120);
					}
				}
				else if (!unk_0xCE3CB618AFE55EFB(iLocal_120))
				{
					iLocal_120 = unk_0xA70969818F182A36(Local_137.f_7);
					unk_0x264E87C905AE790B(iLocal_120, true);
					unk_0xC4F12E446CCE89F5(iLocal_120, "GB_HTB_BLIP1");
					unk_0x0798CD089167D3C1(iLocal_120, 1);
					unk_0xE14767EA16F946A4(iLocal_120, 7000);
					unk_0x7DB79A42AADE120F(iLocal_120, 458);
					unk_0xAD8FB9E563A1FF80(iLocal_120, 12);
					unk_0x575CF00E129E0CE1(iLocal_120, Global_262145.f_12242);
					func_725(&iLocal_120, iLocal_111);
				}
				if (!unk_0xCE3CB618AFE55EFB(iLocal_119))
				{
					iLocal_119 = unk_0x3841F2F038129676(Local_137.f_7, to_float((Global_262145.f_12381 - 1)));
					func_725(&iLocal_119, iLocal_111);
					unk_0x264E87C905AE790B(iLocal_119, true);
					unk_0x6124E42D4423DCB2(iLocal_119, 1);
					unk_0xC4F12E446CCE89F5(iLocal_119, "GB_HTB_BLIP0");
					unk_0xE8C2974337833D20(iLocal_119, Global_262145.f_12126);
				}
				if (func_645(unk_0xD4E735F4B6A956AC(), func_16(), 1) || func_234(unk_0xD4E735F4B6A956AC(), 1))
				{
					if (func_234(unk_0xD4E735F4B6A956AC(), 1))
					{
						iVar1 = func_85(unk_0xD4E735F4B6A956AC());
					}
					else
					{
						iVar1 = Local_137.f_5;
					}
					if (func_724(iVar1) != iLocal_123)
					{
						iLocal_123 = func_724(iVar1);
						unk_0xE8C2974337833D20(iLocal_119, iLocal_123);
					}
				}
			}
			break;
		
		case 2:
		case 3:
			func_727();
			break;
	}
}

void func_710(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_713(iParam0))
	{
		return;
	}
	if (func_712(&(Global_2415861.f_812[iParam0]), &(Global_2415861.f_1175[iParam0]), &(Global_2415861.f_364), bParam1, iParam0, bParam3, &uVar0))
	{
		func_711(iParam0, bParam2);
	}
}

void func_711(int iParam0, bool bParam1)
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

int func_712(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
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

int func_713(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 1;
	}
	if (unk_0xFEB6EEC0545AF7AA(unk_0x61D2332983ACC05C()) == func_714())
	{
		return 1;
	}
	return 0;
}

int func_714()
{
	switch (func_715())
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

int func_715()
{
	return Global_25459;
}

void func_716(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_713(iParam0))
	{
		return;
	}
	if (func_712(&(Global_2415861.f_614[iParam0]), &(Global_2415861.f_977[iParam0]), &(Global_2415861.f_386), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2415861.f_449[iParam0] = uParam1;
		}
	}
}

int func_717(int iParam0)
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

void func_718(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_713(iParam0))
	{
		return;
	}
	if (func_712(&(Global_2415861.f_581[iParam0]), &(Global_2415861.f_944[iParam0]), &(Global_2415861.f_385), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2415861.f_416[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_719();
		}
	}
}

void func_719()
{
	Global_2415861.f_1508 = 1;
}

void func_720()
{
	if (unk_0x05EFB6A616B6FADE(vLocal_138[func_16() /*3*/].f_2, 4))
	{
		if (!unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 9))
		{
			if (func_16() != func_134())
			{
				unk_0xE11F00B4AC919F45(-1, "Boss_Blipped", "GTAO_Magnate_Hunt_Boss_SoundSet", false);
				unk_0x2BCFB39E86340DAA(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 9);
			}
		}
	}
	else if (unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 9))
	{
		unk_0xFA57C719261AA55D(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 9);
	}
}

void func_721(bool bParam0, bool bParam1)
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

void func_722()
{
	if (!func_654())
	{
		return;
	}
	if (func_21(&(Local_137.f_16)) && func_21(&(Local_137.f_18)))
	{
		if (func_21(&uLocal_132))
		{
			func_8(&uLocal_132);
		}
		return;
	}
	if (!func_21(&uLocal_130) && !func_21(&uLocal_132))
	{
		vLocal_128 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) };
		func_20(&uLocal_130, 0, 0);
		iLocal_129 = 0;
	}
	else if (func_21(&uLocal_132))
	{
		if (unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 2))
		{
			func_721(0, 0);
			unk_0xFA57C719261AA55D(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 2);
		}
		if (func_19(&uLocal_132, round(Global_262145.f_12380), 0))
		{
			func_8(&uLocal_132);
			unk_0xFA57C719261AA55D(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 4);
			func_723(0, -1, 500, 500, 0);
			if (!unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 2))
			{
				func_721(1, 0);
				unk_0x2BCFB39E86340DAA(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 2);
			}
		}
	}
	else if (func_708(&uLocal_130, 0, 0) > (500 * iLocal_129))
	{
		if (vdist(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vLocal_128) > IntToFloat(Global_262145.f_12378))
		{
			func_8(&uLocal_130);
			if (unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 4))
			{
				func_20(&uLocal_132, 0, 0);
			}
		}
		else if (IntToFloat(func_708(&uLocal_130, 0, 0)) > Global_262145.f_12379)
		{
			if (unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 2))
			{
				func_721(0, 0);
				unk_0xFA57C719261AA55D(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 2);
				func_647(7);
				func_723(1, -1, 2147483647, 0, 0);
			}
			if (!unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 4))
			{
				unk_0x2BCFB39E86340DAA(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 4);
			}
		}
		iLocal_129++;
	}
}

void func_723(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if ((!unk_0x2BCD0524CDEE1FD2(Global_2415861.f_1468) || Global_2415861.f_1468 == unk_0xFCB3E4B16B4A9EC1()) || bParam4)
	{
		if (bParam0)
		{
			Global_2415861.f_1468 = unk_0xFCB3E4B16B4A9EC1();
			unk_0x2BCFB39E86340DAA(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_68.f_2), 19);
			Global_2415861.f_1469 = unk_0xFFCC7EBF88BDEE54();
		}
		else
		{
			Global_2415861.f_1468 = -1;
			unk_0xFA57C719261AA55D(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_68.f_2), 19);
		}
		Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_68.f_4 = iParam2;
		Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_68.f_5 = iParam3;
		Global_2415861.f_1471 = iParam1;
	}
	else if (!bParam4)
	{
	}
}

int func_724(int iParam0)
{
	var uVar0;
	
	if (iParam0 != func_11())
	{
		if (!func_17(Local_137.f_7))
		{
			if (func_726(iParam0, Global_262145.f_12381, &uVar0, 1123024896, 0))
			{
				return 70;
			}
		}
	}
	return Global_262145.f_12126;
}

void func_725(int iParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xCE3CB618AFE55EFB(*iParam0))
	{
		iVar0 = func_717(iParam1);
		unk_0x570128B7829A8EAA(*iParam0, iVar0);
	}
}

int func_726(int iParam0, int iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;
	float fVar1;
	
	iVar0 = unk_0xEE978C39384D834F(iParam0);
	if (!unk_0xDC5D81351D6A4DDB(iVar0))
	{
		return 0;
	}
	*uParam2 = func_15(iVar0, Local_137.f_7, 0);
	if (*uParam2 > IntToFloat(iParam1))
	{
		return 0;
	}
	fVar1 = unk_0xDB684DA32A9BAB5E(iVar0);
	*uParam2 = func_14(*uParam2, fVar1);
	if (fVar1 > fParam3 && !bParam4)
	{
		return 0;
	}
	return 1;
}

void func_727()
{
	if (unk_0xCE3CB618AFE55EFB(iLocal_119))
	{
		unk_0xE1623437A3194332(&iLocal_119);
	}
	if (unk_0xCE3CB618AFE55EFB(iLocal_120))
	{
		unk_0xE1623437A3194332(&iLocal_120);
	}
	if (unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 10))
	{
		func_718(Local_137.f_5, 432, 0, 0);
		func_716(Local_137.f_5, func_717(iLocal_111), 0, 0);
		func_710(Local_137.f_5, 0, 0, 0);
		unk_0xFA57C719261AA55D(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 10);
	}
}

void func_728()
{
	int iVar0;
	int iVar1;
	
	switch (func_658(unk_0xD60943E3BE730BF0()))
	{
		case 1:
			iVar0 = 0;
			while (iVar0 < unk_0x5D7B2A77420FF19E(1))
			{
				iVar1 = unk_0x5712B9353A8F6573(1, iVar0);
				if (iVar1 == 182)
				{
					func_729(iVar0);
				}
				iVar0++;
			}
			break;
	}
}

void func_729(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	int iVar5;
	
	iVar2 = func_11();
	iVar3 = func_11();
	unk_0x8866A4E42CDA3EF1(1, iParam0, &Var4, 11);
	if (unk_0xDC5D81351D6A4DDB(Var4))
	{
		if (unk_0x281590680327CDEA(Var4))
		{
			iVar0 = unk_0xA2EA4BA455370F3C(Var4);
			if (unk_0xC085874FDE5FE33A(iVar0))
			{
				iVar2 = unk_0x77065AD41B64E946(iVar0);
				if (unk_0xD45A1B3AD5CB295F(iVar2))
				{
					if (iVar2 != func_11())
					{
						if (func_5(iVar2, 0, 0))
						{
						}
					}
				}
			}
		}
	}
	if (iVar2 == func_16())
	{
		if (unk_0xDC5D81351D6A4DDB(Var4.f_1))
		{
			if (unk_0x281590680327CDEA(Var4.f_1))
			{
				iVar1 = unk_0xA2EA4BA455370F3C(Var4.f_1);
				if (unk_0xC085874FDE5FE33A(iVar1))
				{
					iVar3 = unk_0x77065AD41B64E946(iVar1);
					if (unk_0xD45A1B3AD5CB295F(iVar3))
					{
						if (unk_0x05EFB6A616B6FADE(vLocal_138[unk_0x679C4D4E80CF78DB(iVar3) /*3*/].f_2, 0))
						{
							if (iVar3 != func_11())
							{
								if (func_5(iVar3, 0, 0))
								{
								}
							}
						}
						else
						{
							return;
						}
					}
					else
					{
						return;
					}
				}
			}
		}
		if (iVar3 == unk_0xD4E735F4B6A956AC())
		{
			if (!func_645(unk_0xD4E735F4B6A956AC(), func_16(), 1))
			{
				if (!unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 8))
				{
					func_613();
					unk_0x2BCFB39E86340DAA(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 8);
				}
			}
		}
		if (!Var4.f_3)
		{
			if (unk_0xD4E735F4B6A956AC() == iVar3)
			{
				if (!func_427(unk_0xD4E735F4B6A956AC(), 20))
				{
					func_730(0);
				}
			}
		}
		else
		{
			if (!unk_0x45F99485D7E1C29A())
			{
				return;
			}
			if (iVar3 == iVar2)
			{
				return;
			}
			if (iVar3 != func_11())
			{
				Local_137.f_6 = iVar3;
				unk_0x2BCFB39E86340DAA(&(Local_137.f_2), 3);
				func_18(2);
			}
		}
	}
	else if (iVar2 != func_11() && func_234(iVar2, 0))
	{
		iVar5 = func_85(iVar2);
		if (iVar5 == Local_137.f_5)
		{
			if (unk_0xDC5D81351D6A4DDB(Var4.f_1))
			{
				if (unk_0x281590680327CDEA(Var4.f_1))
				{
					iVar1 = unk_0xA2EA4BA455370F3C(Var4.f_1);
					if (unk_0xC085874FDE5FE33A(iVar1))
					{
						iVar3 = unk_0x77065AD41B64E946(iVar1);
						if (unk_0xD45A1B3AD5CB295F(iVar3))
						{
							if (iVar3 != func_11())
							{
								if (func_5(iVar3, 0, 0))
								{
								}
							}
						}
					}
				}
			}
			if (iVar3 == unk_0xD4E735F4B6A956AC())
			{
				if (!func_645(unk_0xD4E735F4B6A956AC(), func_16(), 1))
				{
					if (!unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 8))
					{
						func_613();
						unk_0x2BCFB39E86340DAA(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 8);
					}
				}
			}
		}
	}
}

void func_730(int iParam0)
{
	if (!func_76(unk_0xD4E735F4B6A956AC()))
	{
		if (iParam0 || func_63(unk_0xD4E735F4B6A956AC()) != 0)
		{
			func_80(20);
			if (func_78(unk_0xD4E735F4B6A956AC()))
			{
				if (!unk_0x05EFB6A616B6FADE(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_1, 8))
				{
					unk_0x2BCFB39E86340DAA(&(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_1), 8);
				}
			}
		}
	}
}

void func_731()
{
	var uVar0;
	
	switch (vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_1)
	{
		case 1:
			if (func_726(unk_0xD4E735F4B6A956AC(), (Global_262145.f_12381 - 1), &uVar0, 1123024896, 0))
			{
				if (!unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 8))
				{
					func_613();
					unk_0x2BCFB39E86340DAA(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 8);
				}
			}
			break;
	}
}

void func_732()
{
	var uVar0;
	
	if (!func_17(Local_137.f_7))
	{
		if (Local_137.f_1 >= 1 || func_134() == Local_137.f_5)
		{
			func_757(164, Local_137.f_7, &uLocal_125, 1140457472, 1144750080, 0);
		}
		if (iLocal_110 != func_63(unk_0xD4E735F4B6A956AC()))
		{
			iLocal_110 = func_63(unk_0xD4E735F4B6A956AC());
		}
	}
	if (func_654())
	{
		if (func_747())
		{
			if (!unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 11))
			{
				unk_0x2BCFB39E86340DAA(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 11);
			}
		}
	}
	switch (func_658(unk_0xD60943E3BE730BF0()))
	{
		case 1:
			bLocal_127 = (func_68() || func_742(func_654()));
			if (bLocal_127)
			{
				if (unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 0))
				{
					unk_0xFA57C719261AA55D(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 0);
					if (func_654())
					{
						func_736(0, 0);
						func_735(2);
					}
				}
			}
			else if (func_726(unk_0xD4E735F4B6A956AC(), 500, &uVar0, 1123024896, 0))
			{
				if (!unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 0))
				{
					unk_0x2BCFB39E86340DAA(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 0);
					if (func_654())
					{
						func_736(1, 0);
						func_735(2);
					}
				}
			}
			else if (unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 0))
			{
				unk_0xFA57C719261AA55D(&(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2), 0);
				if (func_654())
				{
					func_736(0, 0);
					func_734(2);
				}
			}
			if (!func_733())
			{
				if (func_726(unk_0xD4E735F4B6A956AC(), Global_262145.f_12381, &uVar0, 1123024896, 0))
				{
					if (!func_427(unk_0xD4E735F4B6A956AC(), 20))
					{
						func_730(0);
					}
				}
			}
			break;
	}
}

int func_733()
{
	if (func_645(unk_0xD4E735F4B6A956AC(), func_16(), 1))
	{
		return 1;
	}
	return 0;
}

void func_734(int iParam0)
{
	unk_0xFA57C719261AA55D(&Global_1573342, iParam0);
}

void func_735(int iParam0)
{
	unk_0x2BCFB39E86340DAA(&Global_1573342, iParam0);
}

void func_736(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		func_737(iVar0, bParam0, bParam1);
		iVar0++;
	}
}

void func_737(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_741(iParam0, 8, 1))
		{
			func_740(iParam0, 8, 1);
		}
		if (bParam2)
		{
			if (!func_741(iParam0, 30, 1))
			{
				func_740(iParam0, 30, 1);
			}
		}
		else if (func_741(iParam0, 30, 1))
		{
			func_738(iParam0, 30, 1);
		}
	}
	else
	{
		if (func_741(iParam0, 8, 1))
		{
			func_738(iParam0, 8, 1);
		}
		if (func_741(iParam0, 30, 1))
		{
			func_738(iParam0, 30, 1);
		}
	}
}

void func_738(int iParam0, int iParam1, bool bParam2)
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
		if (func_715() == 0)
		{
			iVar0 = func_28(func_739(iParam0), -1, 0);
			unk_0xFA57C719261AA55D(&iVar0, iParam1);
			func_25(func_739(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_106070.f_668[iParam0]), iParam1);
	}
}

int func_739(int iParam0)
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

void func_740(int iParam0, int iParam1, bool bParam2)
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
		if (func_715() == 0)
		{
			iVar0 = func_28(func_739(iParam0), -1, 0);
			unk_0x2BCFB39E86340DAA(&iVar0, iParam1);
			func_25(func_739(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x2BCFB39E86340DAA(&(Global_106070.f_668[iParam0]), iParam1);
	}
}

int func_741(int iParam0, int iParam1, bool bParam2)
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
		if (func_715() == 0)
		{
			return unk_0x05EFB6A616B6FADE(func_28(func_739(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x05EFB6A616B6FADE(Global_106070.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_742(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_598(unk_0xD4E735F4B6A956AC(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		return 1;
	}
	if (func_743(4))
	{
		return 1;
	}
	if (func_533())
	{
		return 1;
	}
	if (func_71(unk_0xD4E735F4B6A956AC(), 0))
	{
		return 1;
	}
	if (func_583())
	{
		return 1;
	}
	if (unk_0x3DF0D4C48D463CA8())
	{
		return 1;
	}
	return 0;
}

int func_743(int iParam0)
{
	int iVar0;
	
	if (func_746())
	{
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (func_745(iVar0) == iParam0)
			{
				if (func_744(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_744(int iParam0)
{
	return func_741(iParam0, 5, 1);
}

int func_745(int iParam0)
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

bool func_746()
{
	return Global_93284.f_327 > 0;
}

int func_747()
{
	if (((((((((func_756() || func_755()) || func_754()) || func_533()) || (func_753() && !unk_0xD8B89B387D170E27())) || (func_750() && !func_749())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_748() == 2 && !unk_0xD8B89B387D170E27()))
	{
		return 1;
	}
	return 0;
}

int func_748()
{
	return Global_968393;
}

bool func_749()
{
	return unk_0x05EFB6A616B6FADE(Global_2448386.f_2, 27);
}

int func_750()
{
	if (func_752() || func_751())
	{
		return Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_98 == 8;
	}
	return 0;
}

var func_751()
{
	return Global_2448386.f_624;
}

bool func_752()
{
	return unk_0x05EFB6A616B6FADE(Global_2448386.f_2, 11);
}

bool func_753()
{
	return unk_0x05EFB6A616B6FADE(Global_2448386, 5);
}

bool func_754()
{
	return unk_0x05EFB6A616B6FADE(Global_2448386, 2);
}

bool func_755()
{
	return unk_0x05EFB6A616B6FADE(Global_2448386, 20);
}

bool func_756()
{
	return Global_2448386.f_587;
}

void func_757(int iParam0, vector3 vParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	
	if ((((func_78(unk_0xD4E735F4B6A956AC()) && !func_77(unk_0xD4E735F4B6A956AC())) && !unk_0x05EFB6A616B6FADE(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_1, 8)) && (func_67(unk_0xD4E735F4B6A956AC()) || func_66(unk_0xD4E735F4B6A956AC()))) || func_17(vParam1))
	{
		return;
	}
	Global_1666797 = { vParam1 };
	fVar0 = vdist(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), false), vParam1);
	func_793(iParam0, fVar0);
	if (unk_0xD1ABB20CFF127CCC() && unk_0x05724BB62A634BD8() == 15)
	{
		if (func_65(unk_0xD4E735F4B6A956AC()) || func_792(unk_0xD4E735F4B6A956AC()))
		{
			if (!unk_0x63EB1B015C63D30D(1344549371))
			{
				unk_0x63104F063F241EC1(1344549371);
			}
		}
		else if (unk_0x63EB1B015C63D30D(1344549371))
		{
			unk_0x6ED276A25E7CC2CC(1344549371);
		}
	}
	if (fVar0 < fParam3)
	{
		if (!func_71(unk_0xD4E735F4B6A956AC(), 21))
		{
			func_791(vParam1, 1, 0);
		}
		if (!*uParam2 && func_5(unk_0xD4E735F4B6A956AC(), 1, 1))
		{
			*uParam2 = 1;
			if (func_790(iParam0))
			{
				unk_0xBF6EED5D6E0CD9BF(func_789(iParam0));
				if (func_788(iParam0, -1))
				{
					unk_0x9BB7BCDF2AC2D6F9(0);
					if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0)
					{
						unk_0xF10B3BC4F73177E5(unk_0xD4E735F4B6A956AC(), 0, 1);
						unk_0xDF341226C0B8BAC3(unk_0xD4E735F4B6A956AC(), 1);
					}
					unk_0x2BCFB39E86340DAA(&(Global_1666797.f_3), 0);
				}
			}
			if (func_787(iParam0))
			{
				fVar1 = func_786(iParam0);
				if (fVar1 != 1f)
				{
					func_785(fVar1);
					unk_0x2BCFB39E86340DAA(&(Global_1666797.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_784(iParam0) && func_65(unk_0xD4E735F4B6A956AC()))
				{
					func_782(1);
					func_781(2);
				}
			}
			func_80(19);
		}
	}
	else
	{
		if (fVar0 > fParam4)
		{
			if (func_427(unk_0xD4E735F4B6A956AC(), 19))
			{
				func_70(19);
			}
		}
		if (*uParam2 && func_5(unk_0xD4E735F4B6A956AC(), 1, 1))
		{
			*uParam2 = 0;
			if (func_790(iParam0))
			{
				if (unk_0x05EFB6A616B6FADE(Global_1666797.f_3, 0))
				{
					unk_0xBF6EED5D6E0CD9BF(1f);
					unk_0x9BB7BCDF2AC2D6F9(5);
					unk_0xFA57C719261AA55D(&(Global_1666797.f_3), 0);
				}
			}
			if (func_787(iParam0))
			{
				func_780();
				unk_0xFA57C719261AA55D(&(Global_1666797.f_3), 1);
			}
			if (iParam5 && !func_78(unk_0xD4E735F4B6A956AC()))
			{
				if (func_44(unk_0xD4E735F4B6A956AC()) != 152)
				{
					func_759();
				}
			}
			if (func_190(2))
			{
				func_782(0);
				func_758(2);
			}
		}
	}
}

void func_758(int iParam0)
{
	unk_0xFA57C719261AA55D(&(Global_2524719.f_4883.f_39), iParam0);
}

void func_759()
{
	unk_0x599F595830DD4367(&(Global_2405070.f_24), &Global_2409288, 2);
	unk_0x599F595830DD4367(&(Global_2405070.f_26), &Global_2409290, 18);
	func_778();
	func_762(1, 1, 0);
	func_760();
}

void func_760()
{
	func_761(0, 0);
}

void func_761(int iParam0, int iParam1)
{
	Global_2405070.f_22 = iParam0;
	Global_2405070.f_23 = iParam1;
}

void func_762(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x599F595830DD4367(&(Global_2405070.f_44), &Global_2409308, 318);
	}
	else
	{
		Global_2405070.f_44 = { Global_2409308 };
		Global_2405070.f_44.f_49 = { Global_2409308.f_49 };
		Global_2405070.f_44.f_52 = Global_2409308.f_52;
		Global_2405070.f_44.f_53 = Global_2409308.f_53;
	}
	if (bParam0)
	{
		func_777();
	}
	if (!bParam2)
	{
		func_765(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_764(0);
	func_763();
}

void func_763()
{
	struct<6> Var0;
	
	if (Global_2405070.f_484.f_1 == unk_0xFCB3E4B16B4A9EC1())
	{
		Global_2405070.f_484 = { Var0 };
	}
}

void func_764(bool bParam0)
{
	if (bParam0)
	{
		Global_2405070.f_702 = 0;
	}
	else
	{
		Global_2405070.f_702 = 1;
	}
}

void func_765(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_776())
		{
			func_775();
		}
		Global_2405070.f_703.f_515 = unk_0xFCB3E4B16B4A9EC1();
		Global_2405070.f_703.f_504 = iParam1;
		Global_2405070.f_703.f_505 = iParam2;
		Global_2405070.f_703.f_506 = iParam10;
		func_773();
		func_769(8, 0, 0, 0, 0);
		Global_2405070.f_703.f_507 = iParam11;
		Global_2405070.f_703.f_510 = iParam3;
		Global_2405070.f_703.f_511 = iParam4;
		Global_2405070.f_703.f_508 = iParam5;
		Global_2405070.f_703.f_509 = iParam6;
		Global_2405070.f_703.f_512 = iParam7;
		Global_2405070.f_703.f_513 = iParam8;
		Global_2405070.f_703.f_514 = iParam9;
		Global_2405070.f_1736 = 1;
	}
	else
	{
		func_766();
	}
}

void func_766()
{
	if (func_776() && !func_768())
	{
		func_775();
	}
	if (func_768())
	{
		func_767();
	}
	else
	{
		func_773();
		func_769(0, 0, 0, 0, 0);
		Global_2405070.f_1736 = 0;
		Global_2405070.f_1735 = 0;
	}
}

void func_767()
{
	unk_0x599F595830DD4367(&(Global_2405070.f_703), &(Global_2405070.f_1219), 516);
	Global_2405070.f_484 = { Global_2405070.f_490 };
	if (unk_0xFCB3E4B16B4A9EC1() == Global_2405070.f_703.f_515)
	{
		Global_2405070.f_1735 = 0;
	}
}

int func_768()
{
	if ((Global_2405070.f_1735 && !unk_0xFCB3E4B16B4A9EC1() == Global_2405070.f_1219.f_515) && unk_0x2BCD0524CDEE1FD2(Global_2405070.f_1219.f_515))
	{
		return 1;
	}
	return 0;
}

void func_769(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2437022.f_1889.f_690.f_16 != func_11())
	{
		if (unk_0x05EFB6A616B6FADE(Global_2423801[Global_2437022.f_1889.f_690.f_16 /*413*/].f_401, 0) && func_770())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412440 = 0;
	}
	Global_2405070.f_484 = iParam0;
	Global_2405070.f_484.f_1 = unk_0xFCB3E4B16B4A9EC1();
	Global_2405070.f_484.f_2 = iParam1;
	Global_2405070.f_484.f_3 = iParam2;
	Global_2405070.f_484.f_4 = iParam3;
	Global_2405070.f_484.f_5 = iParam4;
}

int func_770()
{
	if (((func_44(unk_0xD4E735F4B6A956AC()) == 229 || func_44(unk_0xD4E735F4B6A956AC()) == 191) || func_772()) || func_771())
	{
		return 0;
	}
	return 1;
}

var func_771()
{
	return Global_1574388;
}

int func_772()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_773()
{
	if (func_776() && !func_768())
	{
		func_775();
	}
	func_774();
	Global_2405070.f_703 = 0;
}

void func_774()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405070.f_703.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_775()
{
	if (func_768())
	{
		if (Global_2405070.f_703.f_515 == Global_2405070.f_1219.f_515)
		{
			return;
		}
	}
	if (!unk_0xFCB3E4B16B4A9EC1() == Global_2405070.f_703.f_515)
	{
		unk_0x599F595830DD4367(&(Global_2405070.f_1219), &(Global_2405070.f_703), 516);
		Global_2405070.f_490 = { Global_2405070.f_484 };
		Global_2405070.f_1735 = 1;
	}
}

int func_776()
{
	if ((Global_2405070.f_1736 && !unk_0xFCB3E4B16B4A9EC1() == Global_2405070.f_703.f_515) && unk_0x2BCD0524CDEE1FD2(Global_2405070.f_703.f_515))
	{
		return 1;
	}
	return 0;
}

void func_777()
{
	unk_0x599F595830DD4367(&(Global_2405070.f_362), &Global_2409626, 121);
}

void func_778()
{
	func_779();
	Global_2405070.f_2245 = 0;
}

void func_779()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405070.f_2246[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_780()
{
	if (unk_0x2BCD0524CDEE1FD2(Global_2524719.f_4879))
	{
		if (!Global_2524719.f_4879 == unk_0xFCB3E4B16B4A9EC1() && Global_2524719.f_4878 < 1f)
		{
			return;
		}
	}
	Global_2524719.f_4879 = -1;
	Global_2524719.f_4878 = 1f;
}

void func_781(int iParam0)
{
	unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4883.f_39), iParam0);
}

void func_782(int iParam0)
{
	if (func_783() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_783()
{
	if ((((Global_968393 != -1 && Global_968393 != 33) && Global_968393 != 35) && Global_968393 != 37) && Global_968393 != 21)
	{
		return 1;
	}
	return 0;
}

int func_784(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_785(float fParam0)
{
	float fVar0;
	
	if (unk_0xFEB6EEC0545AF7AA(unk_0x61D2332983ACC05C()) == func_714())
	{
		return;
	}
	fVar0 = (Global_2524719.f_4878 - fParam0);
	if (unk_0x2BCD0524CDEE1FD2(Global_2524719.f_4879))
	{
		if (!Global_2524719.f_4879 == unk_0xFCB3E4B16B4A9EC1() && unk_0x69C0BB7D03EE045D(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2524719.f_4878 = fParam0;
	Global_2524719.f_4879 = unk_0xFCB3E4B16B4A9EC1();
}

float func_786(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_787(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_788(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_789(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_790(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

void func_791(vector3 vParam0, int iParam1, int iParam2)
{
	Global_2405070.f_44.f_49 = { vParam0 };
	Global_2405070.f_44.f_52 = iParam1;
	Global_2405070.f_44.f_53 = iParam2;
}

int func_792(int iParam0)
{
	if (func_114(iParam0))
	{
		if (func_65(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_793(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_794(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_613();
	}
}

int func_794(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12409;
		
		case 142:
			return Global_262145.f_12397;
		
		case 157:
			return Global_262145.f_12364;
		
		case 159:
			return Global_262145.f_12347;
		
		case 162:
			return Global_262145.f_12458;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

void func_795()
{
	switch (func_798())
	{
		case 1:
			if (func_658(unk_0xD60943E3BE730BF0()) != 1)
			{
				func_797(func_733());
				func_796(1);
			}
			break;
		
		case 2:
			if (func_658(unk_0xD60943E3BE730BF0()) != 2)
			{
				func_797(func_733());
				func_796(2);
			}
			break;
		
		case 3:
			if (func_658(unk_0xD60943E3BE730BF0()) != 3)
			{
				func_797(func_733());
				func_796(3);
			}
			break;
	}
}

void func_796(int iParam0)
{
	vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_1 = iParam0;
}

void func_797(bool bParam0)
{
	if (bParam0)
	{
		if (!func_427(unk_0xD4E735F4B6A956AC(), 9))
		{
			if (func_63(unk_0xD4E735F4B6A956AC()) != 0)
			{
				func_80(9);
			}
		}
	}
	else if (func_427(unk_0xD4E735F4B6A956AC(), 9))
	{
		func_70(9);
	}
}

int func_798()
{
	return Local_137.f_1;
}

void func_799()
{
	iLocal_110 = func_63(unk_0xD4E735F4B6A956AC());
	func_800(164, 1, -1, 0);
	iLocal_111 = func_205(Local_137.f_5, -2, 0, 0, 0);
	unk_0x1C828C4226A9FADF(iLocal_111, &(uLocal_124[0]), &(uLocal_124[1]), &(uLocal_124[2]), &(uLocal_124[3]));
}

void func_800(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_33 != iParam0)
	{
		func_814(-1);
		Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_33 = iParam0;
		if (func_813() != -1)
		{
			func_812(-1);
		}
		if (func_811() != -1)
		{
			func_810(-1);
		}
		func_809(iParam2);
		func_807(iParam0);
		if (!func_787(iParam0))
		{
			fVar0 = func_786(iParam0);
			if (fVar0 != 1f)
			{
				func_785(fVar0);
				unk_0x2BCFB39E86340DAA(&(Global_1666797.f_3), 1);
			}
		}
		if (!func_790(iParam0) || iParam3)
		{
			if (func_788(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0x9BB7BCDF2AC2D6F9(0);
				if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
				{
					unk_0xF10B3BC4F73177E5(unk_0xD4E735F4B6A956AC(), 0, 0);
					unk_0xDF341226C0B8BAC3(unk_0xD4E735F4B6A956AC(), 0);
				}
				unk_0x2BCFB39E86340DAA(&(Global_1666797.f_3), 0);
			}
			else if (unk_0x2B70659B2EB224B3() < 5)
			{
				unk_0xBF6EED5D6E0CD9BF(1f);
				unk_0x9BB7BCDF2AC2D6F9(5);
			}
		}
		if (func_75())
		{
			func_80(27);
		}
		if (bParam1)
		{
			if (!func_68())
			{
				func_782(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0x05EFB6A616B6FADE(Global_2524719.f_4542, 1) || unk_0x05EFB6A616B6FADE(Global_2524719.f_4542, 4)) || unk_0x05EFB6A616B6FADE(Global_2524719.f_4542, 0))
			{
				func_195(6);
			}
			func_806();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			unk_0x60DEFBFF740D4C09(3, false);
			unk_0x60DEFBFF740D4C09(5, false);
		}
		if (func_78(unk_0xD4E735F4B6A956AC()) && func_65(unk_0xD4E735F4B6A956AC()))
		{
			unk_0x2BCFB39E86340DAA(&(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_1), 8);
		}
		func_802();
		if (func_801(iParam0))
		{
			unk_0x60DEFBFF740D4C09(3, false);
			unk_0x60DEFBFF740D4C09(5, false);
			unk_0x2BCFB39E86340DAA(&(Global_1666797.f_3), 6);
		}
		Global_2524719.f_6236 = 0;
	}
}

int func_801(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_802()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = func_805();
	iVar2 = func_85(unk_0xD4E735F4B6A956AC());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x1483A8AE554B8B2B(iVar0);
		if (unk_0xC77FA683E9BB485B(iVar1))
		{
			if (func_645(iVar1, iVar2, 1) || func_803(iVar1, unk_0xD4E735F4B6A956AC()))
			{
				unk_0xFC1E7C7B43B41F78(unk_0xD4E735F4B6A956AC(), iVar1, bVar3);
				unk_0xFC1E7C7B43B41F78(iVar1, unk_0xD4E735F4B6A956AC(), bVar3);
			}
		}
		iVar0++;
	}
}

int func_803(int iParam0, int iParam1)
{
	if (func_234(iParam0, 1) && func_234(iParam1, 1))
	{
		return (func_804(iParam0) == func_85(iParam1) || func_804(iParam1) == func_85(iParam0));
	}
	return 0;
}

int func_804(int iParam0)
{
	if (func_234(iParam0, 1))
	{
		return Global_1625435[func_85(iParam0) /*560*/].f_11.f_443;
	}
	return func_11();
}

int func_805()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_134();
	if (iVar0 != func_11())
	{
		if (func_5(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0x05EFB6A616B6FADE(Global_1625435[iVar1 /*560*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_806()
{
	if (unk_0x05EFB6A616B6FADE(Global_2524719.f_4542, 1))
	{
		unk_0xFA57C719261AA55D(&(Global_2524719.f_4542), 1);
	}
	if (unk_0x05EFB6A616B6FADE(Global_2524719.f_4542, 4))
	{
		unk_0xFA57C719261AA55D(&(Global_2524719.f_4542), 4);
	}
	if (unk_0x05EFB6A616B6FADE(Global_2524719.f_4542, 6))
	{
		unk_0xFA57C719261AA55D(&(Global_2524719.f_4542), 6);
	}
	unk_0xFA57C719261AA55D(&(Global_2524719.f_4542), 0);
	unk_0xFA57C719261AA55D(&(Global_2524719.f_4542), 2);
	Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_666 = 0;
	if (Global_2524719.f_4544 > 0)
	{
		unk_0x9BB7BCDF2AC2D6F9(Global_2524719.f_4544);
	}
	Global_2524719.f_4543 = 0;
}

void func_807(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_28(3791, -1, 0);
	iVar1 = func_808(iParam0);
	if (iVar1 != -1)
	{
		unk_0x2BCFB39E86340DAA(&iVar0, iVar1);
		func_25(3791, iVar0, -1, 1, 0);
	}
}

int func_808(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_809(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xD4E735F4B6A956AC();
	if (Global_1625435[iVar0 /*560*/].f_11.f_176 != iParam0)
	{
		Global_1625435[iVar0 /*560*/].f_11.f_176 = iParam0;
	}
}

void func_810(int iParam0)
{
	if (Global_2524719.f_4883.f_331 != iParam0)
	{
		Global_2524719.f_4883.f_331 = iParam0;
	}
}

int func_811()
{
	return Global_2524719.f_4883.f_331;
}

void func_812(int iParam0)
{
	if (Global_2524719.f_4883.f_330 != iParam0)
	{
		Global_2524719.f_4883.f_330 = iParam0;
	}
}

int func_813()
{
	return Global_2524719.f_4883.f_330;
}

void func_814(int iParam0)
{
	Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_32 = iParam0;
}

void func_815(int iParam0)
{
	vLocal_138[unk_0xD60943E3BE730BF0() /*3*/] = iParam0;
}

int func_816()
{
	return Local_137;
}

int func_817(int iParam0)
{
	return vLocal_138[iParam0 /*3*/];
}

int func_818(bool bParam0)
{
	if (func_822(1))
	{
		return 1;
	}
	if (Global_2524719.f_4883.f_35)
	{
		Global_2524719.f_4883.f_35 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_29() == func_11() || !func_5(func_29(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_585(unk_0xD4E735F4B6A956AC()))
	{
		if (func_821(unk_0xD4E735F4B6A956AC()) && func_819(func_820(unk_0xD4E735F4B6A956AC()), 11))
		{
			return 1;
		}
	}
	return 0;
}

bool func_819(int iParam0, int iParam1)
{
	return func_62(iParam0) == iParam1;
}

int func_820(int iParam0)
{
	if (iParam0 != func_11() && func_5(iParam0, 1, 1))
	{
		return Global_2423801[iParam0 /*413*/].f_309.f_13;
	}
	return -1;
}

int func_821(int iParam0)
{
	if (iParam0 != func_11() && func_5(iParam0, 1, 1))
	{
		return unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_309, 4);
	}
	return 0;
}

int func_822(bool bParam0)
{
	bool bVar0;
	
	if (!func_132(1))
	{
		bVar0 = false;
		if (Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_57 != func_11())
		{
			if (func_5(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_57, 0, 1))
			{
				if ((Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_24 == 4 || Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_24 == 8) || Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_823(func_44(unk_0xD4E735F4B6A956AC())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_195(31);
				if (func_47(func_44(unk_0xD4E735F4B6A956AC())))
				{
					func_195(81);
				}
				if (Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_57 != func_11() && unk_0xC77FA683E9BB485B(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_57))
				{
					Global_1623923 = func_205(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_40(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_57))
					{
						func_195(88);
					}
				}
				else
				{
					Global_1623923 = 1;
				}
				Global_1623907 = { Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_99 };
			}
			return 1;
		}
	}
	return 0;
}

int func_823(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_824()
{
	var uVar0;
	
	func_828(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			return 1;
		}
	}
	if (func_827())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_826())
	{
		return 1;
	}
	if (func_825(157))
	{
		if (!func_756())
		{
			return 1;
		}
	}
	if (func_825(155))
	{
		return 1;
	}
	if (!unk_0x18F86E07E41D913F())
	{
		return 1;
	}
	if (func_714() != 0)
	{
		if (unk_0x8B1574454E8C2421(func_714()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_825(int iParam0)
{
	if (unk_0xF10AFD11E6EE81BF(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_826()
{
	return Global_2458191;
}

bool func_827()
{
	return Global_2448386.f_582;
}

void func_828(var uParam0)
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
					func_829(iVar0);
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

void func_829(int iParam0)
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
						if (func_830(iVar2, &bVar3))
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

int func_830(int iParam0, var uParam1)
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

void func_831()
{
	wait(0);
}

void func_832()
{
	if (func_654())
	{
		if (func_612(unk_0xD4E735F4B6A956AC(), 0))
		{
			func_316(unk_0xD4E735F4B6A956AC(), 0);
		}
	}
	if (unk_0xD60943E3BE730BF0() != -1)
	{
		if (unk_0x05EFB6A616B6FADE(vLocal_138[unk_0xD60943E3BE730BF0() /*3*/].f_2, 7))
		{
			func_318(0, 4, 0, 0, -1, -1, -1, -1, -1, 0);
		}
	}
	if (func_879(2))
	{
		func_734(2);
	}
	if (func_663(&iLocal_135, 10, -1))
	{
		unk_0x5DE59A67B5F326CF(iLocal_134);
		iLocal_134 = -1;
		func_663(&iLocal_135, 10, 0);
	}
	if (func_663(&iLocal_135, 11, -1))
	{
		func_656(0);
	}
	Global_1666806.f_2 = Local_137.f_20;
	Global_1666806.f_3 = Local_137.f_21;
	func_877(Local_137.f_4, -1, -1, -1082130432);
	func_736(0, 0);
	func_833(0, 0);
	unk_0x8F1A9FE6D91AAFEB();
}

void func_833(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1358108.f_1.f_108 != 0)
	{
		Global_1358108.f_1.f_108 = 0;
	}
	Global_1358108.f_1.f_109 = -1;
	Global_1358108.f_1.f_110 = -1;
	if (Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_33 == 167 || Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_33 == 168)
	{
		func_875();
		unk_0xFA57C719261AA55D(&(Global_1666797.f_3), 4);
	}
	if ((func_130() && iParam1 != 0) && Global_262145.f_16853)
	{
		if (Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_33 == 190 || Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_33 == 192)
		{
			func_857(unk_0xD4E735F4B6A956AC(), iParam1, 1, 0);
		}
	}
	if (((Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_33 == 164 || Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_33 == 208) || Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_33 == 250) || Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_33 == 237)
	{
		unk_0x60DEFBFF740D4C09(3, true);
		unk_0x60DEFBFF740D4C09(5, true);
	}
	if (Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_33 != -1)
	{
		Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_33 = -1;
		if (!unk_0x05EFB6A616B6FADE(Global_1574631.f_1, 14) && !func_78(unk_0xD4E735F4B6A956AC()))
		{
			func_782(0);
		}
	}
	else if (func_855(unk_0xD4E735F4B6A956AC()) != -1)
	{
		func_814(-1);
	}
	func_854(func_11());
	if (func_190(16))
	{
		func_758(16);
	}
	func_851(0);
	func_809(-1);
	func_850();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_849(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_846(iVar1);
		iVar1++;
	}
	if (unk_0x05EFB6A616B6FADE(Global_1666797.f_3, 0))
	{
		unk_0xBF6EED5D6E0CD9BF(1f);
		unk_0x9BB7BCDF2AC2D6F9(5);
		unk_0xFA57C719261AA55D(&(Global_1666797.f_3), 0);
	}
	if (unk_0x05EFB6A616B6FADE(Global_1666797.f_3, 5))
	{
		unk_0xFA57C719261AA55D(&(Global_1666797.f_3), 5);
	}
	iVar2 = func_57();
	if ((func_36(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_845(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_102(iVar2))
	{
		func_842(-1, 1);
	}
	else if (((((func_56(iVar2) || func_841(iVar2)) || func_840(iVar2)) || func_95(iVar2)) || func_94(iVar2)) || func_93(iVar2))
	{
	}
	else
	{
		func_842(-1, 1);
	}
	func_70(19);
	func_70(20);
	func_70(21);
	func_70(22);
	func_70(27);
	func_758(3);
	func_758(4);
	func_758(7);
	func_839();
	if (func_65(unk_0xD4E735F4B6A956AC()))
	{
		func_797(0);
	}
	func_70(29);
	Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_57 = func_11();
	if (Global_2524719.f_4883.f_35 != 0)
	{
		Global_2524719.f_4883.f_35 = 0;
	}
	if (bParam0)
	{
		func_759();
	}
	if (!func_78(unk_0xD4E735F4B6A956AC()))
	{
		func_780();
		unk_0xFA57C719261AA55D(&(Global_1666797.f_3), 1);
	}
	if (unk_0x05EFB6A616B6FADE(Global_1666797.f_3, 6))
	{
		unk_0x60DEFBFF740D4C09(3, true);
		unk_0x60DEFBFF740D4C09(5, true);
		unk_0xFA57C719261AA55D(&(Global_1666797.f_3), 6);
	}
	if (unk_0x05EFB6A616B6FADE(Global_1666797.f_3, 7))
	{
		unk_0xFA57C719261AA55D(&(Global_1666797.f_3), 7);
	}
	if (unk_0x05EFB6A616B6FADE(Global_1666797.f_3, 8))
	{
		func_838("IMPEXP_SELFDES", 0);
		func_836("IMPEXP_SELFDES");
		unk_0xFA57C719261AA55D(&(Global_1666797.f_3), 8);
	}
	func_834(iVar2, 0);
}

void func_834(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x05EFB6A616B6FADE(Global_1666797.f_3, 9))
		{
			unk_0x8969D02DEDC106D2(func_835(iParam0));
			unk_0x2BCFB39E86340DAA(&(Global_1666797.f_3), 9);
		}
	}
	else if (unk_0x05EFB6A616B6FADE(Global_1666797.f_3, 9))
	{
		unk_0x5AD7D03C214BDA88(func_835(iParam0));
		unk_0xFA57C719261AA55D(&(Global_1666797.f_3), 9);
	}
}

char* func_835(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_836(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x7032042E5696FFD7(&(Global_106070.f_14113[iVar0 /*104*/])))
		{
			if (unk_0x3CAC2741CC1A631F(&(Global_106070.f_14113[iVar0 /*104*/]), sParam0))
			{
				if (Global_106070.f_14113[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_677();
					Global_106070.f_14113[iVar0 /*104*/].f_99[Global_14513] = 0;
					if (func_837(iVar0))
					{
					}
					else
					{
						Global_106070.f_14113[iVar0 /*104*/].f_24 = 0;
						Global_106070.f_14113[iVar0 /*104*/].f_28 = 0;
						Global_106070.f_14113[iVar0 /*104*/].f_29 = 0;
					}
					unk_0xDB2661401914B2FA(Global_106070.f_14113[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_837(int iParam0)
{
	if ((Global_106070.f_14113[iParam0 /*104*/].f_99[0] == 1 || Global_106070.f_14113[iParam0 /*104*/].f_99[1] == 1) || Global_106070.f_14113[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_838(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x7032042E5696FFD7(&(Global_106070.f_14113[iVar0 /*104*/])))
		{
			if (unk_0x3CAC2741CC1A631F(&(Global_106070.f_14113[iVar0 /*104*/]), sParam0))
			{
				if (Global_106070.f_14113[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_106070.f_14113[iVar0 /*104*/].f_24 = 1;
				if (Global_106070.f_14113[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_106070.f_14113[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_106070.f_14023[0 /*20*/].f_17 = 0;
					}
					if (Global_106070.f_14113[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_106070.f_14023[1 /*20*/].f_17 = 0;
					}
					if (Global_106070.f_14113[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_106070.f_14023[2 /*20*/].f_17 = 0;
					}
					if (Global_106070.f_14113[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_106070.f_14023[3 /*20*/].f_17 = 0;
					}
					Global_106070.f_14113[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_106070.f_14113[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_839()
{
	if (func_614(unk_0xD4E735F4B6A956AC()))
	{
		func_70(25);
	}
}

int func_840(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_841(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_842(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_57();
	}
	if (iParam0 > 0)
	{
		if (func_134() != func_11())
		{
			if (func_586(unk_0xD4E735F4B6A956AC()) == unk_0xD4E735F4B6A956AC())
			{
				Global_2504301.f_93[func_844(iParam0)] = 1;
			}
		}
		iVar0 = func_844(159);
		if (func_843(iVar0, Global_262145.f_12493, bParam1))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(157);
		if (func_843(iVar0, Global_262145.f_12493, bParam1))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(148);
		if (func_843(iVar0, Global_262145.f_12493, bParam1))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(164);
		if (func_843(iVar0, Global_262145.f_12493, bParam1))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(142);
		if (func_843(iVar0, Global_262145.f_12493, bParam1))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(152);
		if (func_843(iVar0, Global_262145.f_12493, bParam1))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(166);
		if (func_843(iVar0, Global_262145.f_12493, bParam1))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(170);
		if (func_843(iVar0, Global_262145.f_12493, bParam1))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(173);
		if (func_843(iVar0, Global_262145.f_12493, bParam1))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(179);
		if (func_843(iVar0, Global_262145.f_12493, bParam1))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(200);
		if (func_843(iVar0, Global_262145.f_12493, bParam1))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(201);
		if (func_843(iVar0, Global_262145.f_12493, bParam1))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(182);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(183);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(185);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(186);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(180);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(195);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(197);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(198);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(207);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(208);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(209);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(214);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(215);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(216);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(217);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(218);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(219);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(220);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(221);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_843(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_427(unk_0xD4E735F4B6A956AC(), 19) && !func_427(unk_0xD4E735F4B6A956AC(), 20)) && !func_427(unk_0xD4E735F4B6A956AC(), 9))
		{
			return 0;
		}
	}
	if (Global_2504301.f_93[iParam0] == 1 && func_21(&(Global_2504301[iParam0 /*2*/])))
	{
		if (func_708(&(Global_2504301[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2504301.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_844(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

void func_845(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_57();
	}
	if (iParam0 > 0)
	{
		if (func_134() != func_11())
		{
			Global_2504301.f_93[func_844(iParam0)] = 1;
		}
		iVar0 = func_844(155);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(163);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(160);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(153);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(162);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(154);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(171);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(172);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(199);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(194);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(193);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(210);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(205);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(189);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_844(211);
		if (func_843(iVar0, Global_262145.f_12494, 0))
		{
			func_8(&(Global_2504301[iVar0 /*2*/]));
			func_20(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_846(int iParam0)
{
	if (!func_847(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_303[iParam0 /*3*/], func_848(), 0))
	{
		Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_303[iParam0 /*3*/] = { func_848() };
	}
	if (!func_847(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_290[iParam0 /*3*/], func_848(), 0))
	{
		Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_290[iParam0 /*3*/] = { func_848() };
	}
}

bool func_847(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_848()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_849(int iParam0)
{
	if (!func_847(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_145[iParam0 /*3*/], func_848(), 0))
	{
		Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_145[iParam0 /*3*/] = { func_848() };
	}
	if (!func_847(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_120[iParam0 /*3*/], func_848(), 0))
	{
		Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_120[iParam0 /*3*/] = { func_848() };
	}
}

void func_850()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573886 = { Var0 };
	Global_1573886.f_13 = func_11();
	if (unk_0x05EFB6A616B6FADE(Global_1573342, 3))
	{
		unk_0xFA57C719261AA55D(&Global_1573342, 3);
	}
}

void func_851(bool bParam0)
{
	if (bParam0)
	{
		if (!func_605(unk_0xD4E735F4B6A956AC(), 14))
		{
			func_853(14);
		}
	}
	else if (func_605(unk_0xD4E735F4B6A956AC(), 14))
	{
		func_852(14);
	}
}

void func_852(int iParam0)
{
	unk_0xFA57C719261AA55D(&(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_5), iParam0);
}

void func_853(int iParam0)
{
	unk_0x2BCFB39E86340DAA(&(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_5), iParam0);
}

void func_854(int iParam0)
{
	if (func_114(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0xD4E735F4B6A956AC() != iParam0)
		{
			if (Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_443 != iParam0)
			{
				Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_443 = iParam0;
				if (iParam0 != func_11())
				{
				}
			}
		}
	}
}

int func_855(int iParam0)
{
	if (func_856(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_32;
	}
	return -1;
}

int func_856(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_32 != -1 || (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_857(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_286(iParam0, iParam1) && func_874(iParam0, iParam1))
	{
		iVar0 = func_285(iParam0, iParam1);
		func_861(iVar0, bParam2, bParam3);
		func_858(iVar0, 1);
	}
}

void func_858(int iParam0, bool bParam1)
{
	if (!func_860(iParam0))
	{
		return;
	}
	func_272(func_859(iParam0), bParam1, -1, 1);
	Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_174[iParam0 /*12*/].f_6 = bParam1;
}

int func_859(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_860(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_861(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_551(unk_0xD4E735F4B6A956AC(), iParam0);
	if (!bParam1)
	{
		func_873(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2503901[iParam0];
		iVar0 = func_872(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1668516 = -1;
		}
		func_871(iParam0, 0, bParam2);
	}
	else if (func_869(iParam0, bParam2))
	{
		iVar0 = func_868(iVar2, 0);
		iVar3 = func_406(unk_0xD4E735F4B6A956AC(), iVar2);
		iVar4 = func_867(iVar2, bParam2);
		iVar5 = func_868(iVar2, bParam2);
		fVar6 = (to_float(iVar5) / to_float(iVar4));
		iVar0 = (iVar0 - round((to_float(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_866(iVar2) && func_865(unk_0xD4E735F4B6A956AC(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_873(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_864(unk_0xD4E735F4B6A956AC(), iVar2) > 0)
		{
			func_863(iParam0, (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_174[iParam0 /*12*/].f_2 - (func_867(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_868(iVar2, bParam2) / func_864(unk_0xD4E735F4B6A956AC(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_866(iVar2) && func_865(unk_0xD4E735F4B6A956AC(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_862(unk_0xD4E735F4B6A956AC(), iVar2, iVar0, bParam2);
}

void func_862(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return;
	}
	if (func_279(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1589747[iParam0 /*790*/].f_273.f_248 = iParam2;
				}
				else
				{
					Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_863(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_174[iParam0 /*12*/].f_2)
	{
		Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_174[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_864(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (func_279(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/] == iParam1)
			{
				return Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_865(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (func_279(iParam1) && func_866(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/] == iParam1)
			{
				return Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_866(int iParam0)
{
	return func_127(iParam0) == 5;
}

int func_867(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_127(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16824;
			if (func_284(unk_0xD4E735F4B6A956AC(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16829;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16823;
			if (func_284(unk_0xD4E735F4B6A956AC(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16828;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16822;
			if (func_284(unk_0xD4E735F4B6A956AC(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16827;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16820;
			if (func_284(unk_0xD4E735F4B6A956AC(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16825;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16821;
			if (func_284(unk_0xD4E735F4B6A956AC(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16826;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_20942;
				if (func_284(unk_0xD4E735F4B6A956AC(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20943;
				}
			}
			else
			{
				uVar0 = Global_262145.f_20926;
				if (func_284(unk_0xD4E735F4B6A956AC(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20927;
				}
			}
			break;
	}
	return uVar0;
}

int func_868(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_127(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16805;
			if (func_284(unk_0xD4E735F4B6A956AC(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16814);
			}
			if (func_284(unk_0xD4E735F4B6A956AC(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16819);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16806;
			if (func_284(unk_0xD4E735F4B6A956AC(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16813);
			}
			if (func_284(unk_0xD4E735F4B6A956AC(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16818);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16807;
			if (func_284(unk_0xD4E735F4B6A956AC(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16812);
			}
			if (func_284(unk_0xD4E735F4B6A956AC(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16817);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16808;
			if (func_284(unk_0xD4E735F4B6A956AC(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16810);
			}
			if (func_284(unk_0xD4E735F4B6A956AC(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16815);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16809;
			if (func_284(unk_0xD4E735F4B6A956AC(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16811);
			}
			if (func_284(unk_0xD4E735F4B6A956AC(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16816);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_20939;
			}
			else
			{
				iVar0 = Global_262145.f_20923;
			}
			if (func_284(unk_0xD4E735F4B6A956AC(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20940);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20924);
				}
			}
			if (func_284(unk_0xD4E735F4B6A956AC(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20941);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20925);
				}
			}
			if (func_865(unk_0xD4E735F4B6A956AC(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_869(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_273(15384, -1, -1);
	}
	return func_273(func_870(iParam0), -1, -1);
}

int func_870(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_871(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_272(15384, bParam1, -1, 1);
		return;
	}
	func_272(func_870(iParam0), bParam1, -1, 1);
}

int func_872(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2503901[iParam0];
	iVar1 = func_551(unk_0xD4E735F4B6A956AC(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2503908;
	}
	if (func_866(iVar1))
	{
		if (func_865(unk_0xD4E735F4B6A956AC(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_873(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2503908 = iParam1;
		return;
	}
	Global_2503901[iParam0] = iParam1;
}

int func_874(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_286(iParam0, iParam1))
	{
		iVar0 = func_285(iParam0, iParam1);
		if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_4 > 0 && Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_875()
{
	unk_0xFA57C719261AA55D(&(Global_2524719.f_1725), 28);
	unk_0xFA57C719261AA55D(&(Global_2524719.f_1725), 29);
	func_876(24);
}

void func_876(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xFA57C719261AA55D(&(Global_2524719.f_4883.f_7[iVar0]), iVar1);
}

void func_877(var uParam0, int iParam1, int iParam2, int iParam3)
{
	char* sVar0;
	struct<14> Var1;
	struct<17> Var2;
	struct<17> Var3;
	struct<16> Var4;
	struct<17> Var5;
	struct<16> Var6;
	struct<18> Var7;
	struct<18> Var8;
	struct<19> Var9;
	struct<18> Var10;
	
	sVar0 = unk_0x61D2332983ACC05C();
	Var1 = Global_1666806;
	Var1.f_1 = Global_1666806.f_1;
	Var1.f_2 = Global_1666806.f_2;
	Var1.f_3 = Global_1666806.f_3;
	Var1.f_4 = Global_1666806.f_4;
	Var1.f_5 = Global_1666806.f_5;
	Var1.f_6 = Global_1666806.f_6;
	Var1.f_7 = Global_1666806.f_7;
	Var1.f_8 = Global_1666806.f_8;
	Var1.f_9 = Global_1666806.f_9;
	Var1.f_10 = Global_1666806.f_10;
	Var1.f_11 = Global_1666806.f_11;
	Var1.f_12 = Global_1666806.f_12;
	Var1.f_13 = Global_1666806.f_14;
	if (unk_0x4C9BACA8D249CB13())
	{
		if (unk_0x3CAC2741CC1A631F(sVar0, "GB_DEATHMATCH"))
		{
			Var2 = { Var1 };
			Var2.f_14 = Global_1666806.f_15;
			Var2.f_15 = Global_1666806.f_16;
			Var2.f_16 = Global_1666806.f_17;
			unk_0x95FF4B3163B3283F(&Var2);
		}
		else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_YACHT_ROB"))
		{
			Var3 = { Var1 };
			Var3.f_14 = Global_1666806.f_15;
			Var3.f_15 = uParam0;
			Var3.f_16 = iParam1;
			unk_0x9F753097899D2104(&Var3);
		}
		else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var4 = { Var1 };
			Var4.f_14 = Global_1666806.f_15;
			Var4.f_15 = uParam0;
			unk_0x6E94FDEF188CF6F3(&Var4);
		}
		else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_SIGHTSEER"))
		{
			Var5 = { Var1 };
			Var5.f_14 = Global_1666806.f_15;
			Var5.f_15 = uParam0;
			Var5.f_16 = iParam1;
			unk_0xA657BBB7BB572524(&Var5);
		}
		else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_ASSAULT"))
		{
			Var6 = { Var1 };
			Var6.f_14 = Global_1666806.f_15;
			Var6.f_15 = uParam0;
			unk_0xB3E11C8C06D221D0(&Var6);
		}
		else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_BELLYBEAST"))
		{
			Var7 = { Var1 };
			Var7.f_14 = Global_1666806.f_15;
			Var7.f_15 = uParam0;
			Var7.f_16 = iParam1;
			Var7.f_17 = iParam2;
			unk_0x9FEFB58C29A23615(&Var7);
		}
		else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_HEADHUNTER"))
		{
			Var8 = { Var1 };
			Var8.f_14 = uParam0;
			Var8.f_15 = iParam1;
			Var8.f_16 = iParam2;
			Var8.f_17 = Global_1666806.f_15;
			unk_0x8CC2B00BEB5EF0F6(&Var8);
		}
		else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var9 = { Var1 };
			Var9.f_15 = uParam0;
			Var9.f_16 = iParam1;
			Var9.f_17 = iParam2;
			Var9.f_14 = iParam3;
			Var9.f_18 = Global_1666806.f_15;
			unk_0x581E22C2B57FBBC1(&Var9);
		}
		else if (unk_0x3CAC2741CC1A631F(sVar0, "GB_AIRFREIGHT"))
		{
			Var10 = { Var1 };
			Var10.f_14 = uParam0;
			Var10.f_15 = iParam1;
			Var10.f_16 = iParam2;
			Var10.f_17 = Global_1666806.f_15;
			unk_0x12DC71B6C9AF6989(&Var10);
		}
	}
	func_878();
}

void func_878()
{
	struct<18> Var0;
	
	Global_1666806 = { Var0 };
}

bool func_879(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1573342, iParam0);
}

int func_880(struct<21> Param0)
{
	func_914(func_915(Param0), Param0);
	func_884(164, 0);
	unk_0xC0E0EC37CC7BA185(0);
	func_881(0, -1, 0);
	unk_0xF82A3961787FA0A4(&Local_137, 22);
	unk_0x8BFA7A7AB1D02137(&vLocal_138, 97);
	unk_0x2F3193E06C2EFF44(0);
	return 1;
}

int func_881(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBF19BA6420EC428C();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_883();
			}
			else
			{
				return 0;
			}
		}
		if (!func_882())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x4C9BACA8D249CB13())
				{
					if (!bParam2)
					{
						func_883();
					}
					else
					{
						return 0;
					}
				}
				if (func_827())
				{
					if (!bParam2)
					{
						func_883();
					}
					else
					{
						return 0;
					}
				}
				if (func_825(155))
				{
					if (!bParam2)
					{
						func_883();
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
					func_883();
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
				func_883();
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
			func_883();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_882()
{
	return Global_1312834;
}

void func_883()
{
	unk_0x8F1A9FE6D91AAFEB();
}

void func_884(int iParam0, int iParam1)
{
	func_913();
	if (func_585(unk_0xD4E735F4B6A956AC()))
	{
		func_886(1);
	}
	if ((iParam0 != 0 && unk_0xC77FA683E9BB485B(iParam1)) && func_660(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0x2BCFB39E86340DAA(&Global_1666792, 0);
				break;
			}
	}
	if (!func_113() && !func_234(unk_0xD4E735F4B6A956AC(), 1))
	{
		if (func_73())
		{
			func_781(3);
		}
	}
	func_781(4);
	if (func_132(0))
	{
		Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_57 = func_134();
	}
	if (func_47(iParam0))
	{
		func_404();
		Global_1666824.f_18 = func_384(func_29());
	}
	else if (func_55(func_855(unk_0xD4E735F4B6A956AC())))
	{
		func_402();
		Global_1666878.f_18 = func_384(func_29());
	}
	func_885();
}

void func_885()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1358108.f_534[iVar0 /*42*/].f_1 = func_11();
		Global_1358108.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

void func_886(bool bParam0)
{
	int iVar0;
	
	func_876(33);
	func_876(34);
	func_876(35);
	func_876(36);
	func_876(37);
	func_876(38);
	func_876(39);
	func_876(40);
	func_876(43);
	func_876(41);
	func_876(54);
	func_876(42);
	func_876(47);
	func_912(23);
	func_912(24);
	func_876(92);
	unk_0xFA57C719261AA55D(&(Global_2524719.f_1725), 2);
	func_911();
	func_906();
	func_901();
	func_896();
	func_888();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2524719.f_4883.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_887(3))
	{
		func_912(3);
	}
	else if (func_887(4))
	{
		func_912(4);
	}
	else if (func_887(5))
	{
		func_912(5);
	}
	else if (func_887(6))
	{
		func_912(6);
	}
	else if (func_887(7))
	{
		func_912(7);
	}
	else if (((((((((((((((((func_887(0) || func_887(1)) || func_887(2)) || func_887(8)) || func_887(9)) || func_887(10)) || func_887(11)) || func_887(12)) || func_887(13)) || func_887(14)) || func_887(15)) || func_887(16)) || func_887(17)) || func_887(18)) || func_887(19)) || func_887(20)) || func_887(21)) || func_887(22))
	{
		func_912(8);
		func_912(0);
		func_912(1);
		func_912(2);
		func_912(9);
		func_912(10);
		func_912(11);
		func_912(12);
		func_912(13);
		func_912(14);
		func_912(15);
		func_912(16);
		func_912(17);
		func_912(18);
		func_912(19);
		func_912(20);
		func_912(21);
		func_912(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2524719.f_4883.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_887(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x05EFB6A616B6FADE(Global_2524719.f_4883.f_14[iVar0], iVar1);
}

void func_888()
{
	int iVar0;
	
	if (func_895())
	{
		func_894(8);
		func_894(9);
		func_894(10);
		func_894(12);
		func_894(13);
		func_894(14);
		func_894(19);
		func_894(20);
		func_894(21);
		func_894(22);
		func_894(23);
		func_894(24);
		func_894(25);
		func_894(26);
		func_894(15);
		func_894(16);
		func_894(17);
		func_894(18);
		func_894(35);
		func_894(45);
		func_894(46);
		if (func_893(11))
		{
			func_894(11);
			iVar0 = func_28(7226, -1, 0);
			unk_0x2BCFB39E86340DAA(&iVar0, 2);
			func_25(7226, iVar0, -1, 1, 0);
		}
	}
	if (func_893(48))
	{
		if (func_892(151, 3))
		{
			func_891(151, 3);
		}
		func_894(48);
	}
	if (func_893(49))
	{
		if (func_892(152, 3))
		{
			func_891(152, 3);
		}
		func_894(49);
	}
	if (func_893(50))
	{
		if (func_892(153, 3))
		{
			func_891(153, 3);
		}
		func_894(50);
	}
	if (func_893(51))
	{
		if (func_892(func_889(), 3))
		{
			func_891(func_889(), 3);
		}
		func_894(51);
	}
}

int func_889()
{
	if (func_890())
	{
		Global_106070.f_28022[154 /*29*/].f_24[Global_14513] = 1;
	}
	return 154;
}

int func_890()
{
	int iVar0;
	
	iVar0 = func_85(unk_0xD4E735F4B6A956AC());
	if (((iVar0 != unk_0xD4E735F4B6A956AC() && iVar0 != func_11()) && unk_0xC77FA683E9BB485B(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_891(int iParam0, int iParam1)
{
	if (Global_117[iParam0 /*10*/].f_8 != 145)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_106070.f_28022[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_106070.f_28022[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

int func_892(int iParam0, int iParam1)
{
	if (Global_106070.f_28022[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

bool func_893(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x05EFB6A616B6FADE(Global_2524719.f_4883.f_26[iVar0], iVar1);
}

void func_894(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xFA57C719261AA55D(&(Global_2524719.f_4883.f_26[iVar0]), iVar1);
}

int func_895()
{
	if (((((((((((((((((((((func_893(8) || func_893(9)) || func_893(10)) || func_893(12)) || func_893(11)) || func_893(13)) || func_893(14)) || func_893(19)) || func_893(20)) || func_893(21)) || func_893(22)) || func_893(23)) || func_893(24)) || func_893(25)) || func_893(26)) || func_893(15)) || func_893(16)) || func_893(17)) || func_893(18)) || func_893(35)) || func_893(45)) || func_893(46))
	{
		return 1;
	}
	return 0;
}

void func_896()
{
	if (func_900())
	{
		func_899(0);
		func_899(1);
		func_899(2);
		func_899(3);
		func_899(4);
		func_899(5);
		if (func_898(32))
		{
			if (func_892(func_897(), 3))
			{
				func_891(func_897(), 3);
			}
			func_899(32);
		}
	}
}

int func_897()
{
	if (func_890())
	{
		Global_106070.f_28022[12 /*29*/].f_24[Global_14513] = 1;
	}
	return 12;
}

bool func_898(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x05EFB6A616B6FADE(Global_2524719.f_4883.f_23[iVar0], iVar1);
}

void func_899(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xFA57C719261AA55D(&(Global_2524719.f_4883.f_23[iVar0]), iVar1);
}

int func_900()
{
	if ((((func_898(1) || func_898(0)) || func_898(2)) || func_898(4)) || func_898(5))
	{
		return 1;
	}
	return 0;
}

void func_901()
{
	if (func_905())
	{
		func_904(0);
		func_904(1);
		func_904(2);
		func_904(3);
		func_904(4);
		func_904(5);
		func_904(6);
		func_904(7);
		if (func_903(8))
		{
			func_904(8);
		}
		if (func_903(15))
		{
			if (func_892(func_902(), 3))
			{
				func_891(func_902(), 3);
			}
			func_904(15);
		}
	}
}

int func_902()
{
	if (func_890())
	{
		Global_106070.f_28022[20 /*29*/].f_24[Global_14513] = 1;
	}
	return 20;
}

bool func_903(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x05EFB6A616B6FADE(Global_2524719.f_4883.f_21[iVar0], iVar1);
}

void func_904(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xFA57C719261AA55D(&(Global_2524719.f_4883.f_21[iVar0]), iVar1);
}

int func_905()
{
	if ((((((((func_903(0) || func_903(1)) || func_903(2)) || func_903(3)) || func_903(4)) || func_903(5)) || func_903(6)) || func_903(7)) || func_903(8))
	{
		return 1;
	}
	return 0;
}

void func_906()
{
	if (func_910())
	{
		func_909(0);
		func_909(1);
		func_909(2);
		func_909(3);
		func_909(4);
		func_909(5);
		func_909(6);
		func_909(7);
		func_909(8);
		func_909(9);
		func_909(10);
		func_909(11);
		func_909(12);
		if (func_908(13))
		{
			if (func_892(func_907(), 3))
			{
				func_891(func_907(), 3);
			}
			func_909(13);
		}
	}
}

int func_907()
{
	if (func_890())
	{
		Global_106070.f_28022[76 /*29*/].f_24[Global_14513] = 1;
	}
	return 76;
}

bool func_908(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x05EFB6A616B6FADE(Global_2524719.f_4883.f_19[iVar0], iVar1);
}

void func_909(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xFA57C719261AA55D(&(Global_2524719.f_4883.f_19[iVar0]), iVar1);
}

int func_910()
{
	if ((((((((((((func_908(0) || func_908(1)) || func_908(2)) || func_908(3)) || func_908(4)) || func_908(5)) || func_908(6)) || func_908(7)) || func_908(8)) || func_908(9)) || func_908(10)) || func_908(11)) || func_908(12))
	{
		return 1;
	}
	return 0;
}

void func_911()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2524719.f_4883.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_912(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xFA57C719261AA55D(&(Global_2524719.f_4883.f_14[iVar0]), iVar1);
}

void func_913()
{
	struct<14> Var0;
	
	Global_1666806 = { Var0 };
	Global_1666806.f_14 = 0;
	Global_1666806.f_15 = 0;
}

void func_914(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		func_883();
	}
	unk_0x1B0D16DC60698F88(iParam0, 0, Param1.f_16);
}

int func_915(int iParam0)
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

