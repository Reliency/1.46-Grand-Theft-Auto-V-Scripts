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
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 15;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
#endregion

void __EntryFunction__()
{
	vector3 vVar0;
	vector3 vVar1;
	
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
	iLocal_35 = 3;
	func_29(29);
	if (unk_0x5EBD03AF78E7B4DB(210))
	{
		func_28();
	}
	iLocal_37 = 0;
	func_27(&uLocal_38);
	func_26(&uLocal_38, 1701.78f, 3225.148f, 40.0202f);
	func_26(&uLocal_38, 1678.909f, 3287.602f, 39.9648f);
	func_26(&uLocal_38, 1710.438f, 3326.499f, 40.1797f);
	func_26(&uLocal_38, 1738.879f, 3335.25f, 40.1493f);
	func_26(&uLocal_38, 1768.387f, 3312.101f, 40.2875f);
	func_26(&uLocal_38, 1819.241f, 3225.449f, 42.9019f);
	func_25(&uLocal_38);
	while (true)
	{
		switch (iLocal_37)
		{
			case 0:
				if (func_18())
				{
					if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
					{
						vVar0 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
						vVar1 = { 1749.71f, 3267.83f, 40.24f };
						if (func_17(vVar0, vVar1, 75f))
						{
							if (func_16(&uLocal_38, vVar0))
							{
								if (vVar0.z > 39f && vVar0.z < 43f)
								{
									iLocal_37 = 1;
								}
								else
								{
									wait(100);
								}
							}
							else
							{
								wait(100);
							}
						}
						else
						{
							wait(1500);
						}
					}
				}
				else
				{
					wait(1500);
				}
				break;
			
			case 1:
				func_2();
				break;
			
			case 2:
				func_1(29);
				func_28();
				break;
		}
		wait(0);
	}
}

int func_1(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x05EFB6A616B6FADE(Global_106070.f_9057.f_99.f_219[iVar0], iVar1))
	{
		unk_0xFA57C719261AA55D(&(Global_106070.f_9057.f_99.f_219[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

void func_2()
{
	func_6(-815326385);
	func_3("SHI_T_SANDY_2", 0, 0, -1, 10000, 7, 0, 0, 0);
	wait(0);
	func_3("SHI_T_SANDY_3", 0, 0, -1, 10000, 7, 0, 0, 0);
	iLocal_37 = 2;
}

void func_3(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_4(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_4(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x3CAC2741CC1A631F(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_106070.f_20382.f_145)
	{
		if (unk_0x3CAC2741CC1A631F(&(Global_106070.f_20382[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_106070.f_20382.f_145 < 9)
	{
		StringCopy(&(Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_4), sParam1, 16);
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_8 = (unk_0xFD34717937104F1C() + iParam3);
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_9 = iParam5;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_11 = iParam6;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_12 = uParam2;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_13 = iParam7;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_14 = iParam8;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_10 = ((unk_0xFD34717937104F1C() + iParam3) + iParam4);
		}
		else
		{
			Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_10 = -1;
		}
		Global_106070.f_20382.f_145++;
		func_5();
	}
}

void func_5()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_106070.f_20382.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_106070.f_20382.f_145)
	{
		if (unk_0x05EFB6A616B6FADE(Global_106070.f_20382[iVar0 /*16*/].f_11, 0))
		{
			if (Global_106070.f_20382[iVar0 /*16*/].f_12 > Global_106070.f_20382.f_146[0])
			{
				Global_106070.f_20382.f_146[0] = Global_106070.f_20382[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x05EFB6A616B6FADE(Global_106070.f_20382[iVar0 /*16*/].f_11, 1))
		{
			if (Global_106070.f_20382[iVar0 /*16*/].f_12 > Global_106070.f_20382.f_146[1])
			{
				Global_106070.f_20382.f_146[1] = Global_106070.f_20382[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x05EFB6A616B6FADE(Global_106070.f_20382[iVar0 /*16*/].f_11, 2))
		{
			if (Global_106070.f_20382[iVar0 /*16*/].f_12 > Global_106070.f_20382.f_146[2])
			{
				Global_106070.f_20382.f_146[2] = Global_106070.f_20382[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_6(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_106070.f_7660.f_136)
	{
		if (Global_106070.f_7660[iVar0 /*15*/] == iParam0)
		{
			if (Global_36664 != iVar0)
			{
				func_15(iVar0);
				func_12(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_106070.f_7660.f_198)
	{
		if (Global_106070.f_7660.f_137[iVar0 /*15*/] == iParam0)
		{
			func_12(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_106070.f_7660.f_650)
	{
		if (Global_106070.f_7660.f_199[iVar0 /*15*/] == iParam0)
		{
			func_11(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_106070.f_7660.f_764)
	{
		if (Global_106070.f_7660.f_651[iVar0 /*14*/] == iParam0)
		{
			func_8(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_106070.f_7660.f_866)
	{
		if (Global_106070.f_7660.f_765[iVar0 /*10*/] == iParam0)
		{
			func_7(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_7(int iParam0)
{
	int iVar0;
	struct<10> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_106070.f_7660.f_866)
	{
		return;
	}
	if (Global_106070.f_7660.f_866 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_106070.f_7660.f_866 - 2))
		{
			Global_106070.f_7660.f_765[iVar0 /*10*/] = { Global_106070.f_7660.f_765[iVar0 + 1 /*10*/] };
			iVar0++;
		}
	}
	if (Global_106070.f_7660.f_866 > 0)
	{
		Global_106070.f_7660.f_765[(Global_106070.f_7660.f_866 - 1) /*10*/] = { Var1 };
		Global_106070.f_7660.f_866 = (Global_106070.f_7660.f_866 - 1);
	}
}

void func_8(int iParam0)
{
	int iVar0;
	struct<14> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_106070.f_7660.f_764)
	{
		return;
	}
	if (Global_106070.f_7660.f_764 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_106070.f_7660.f_764 - 2))
		{
			Global_106070.f_7660.f_651[iVar0 /*14*/] = { Global_106070.f_7660.f_651[iVar0 + 1 /*14*/] };
			iVar0++;
		}
	}
	if (Global_106070.f_7660.f_764 > 0)
	{
		Global_106070.f_7660.f_651[(Global_106070.f_7660.f_764 - 1) /*14*/] = { Var1 };
		Global_106070.f_7660.f_764 = (Global_106070.f_7660.f_764 - 1);
	}
	func_9(0);
	func_9(1);
	func_9(2);
}

void func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_10(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_106070.f_7660.f_136)
	{
		if (unk_0x05EFB6A616B6FADE(Global_106070.f_7660[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_106070.f_7660[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_106070.f_7660[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_106070.f_7660.f_764)
	{
		if (unk_0x05EFB6A616B6FADE(Global_106070.f_7660.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_106070.f_7660.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_106070.f_7660.f_919[iParam0] = iVar1;
}

bool func_10(int iParam0)
{
	return iParam0 < 3;
}

void func_11(int iParam0)
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < Global_106070.f_7660.f_650)
	{
		if (Global_106070.f_7660.f_199[iVar1 /*15*/] == iParam0)
		{
			iVar2 = iVar1;
			while (iVar2 <= (Global_106070.f_7660.f_650 - 2))
			{
				Global_106070.f_7660.f_199[iVar2 /*15*/] = { Global_106070.f_7660.f_199[iVar2 + 1 /*15*/] };
				iVar2++;
			}
			Global_106070.f_7660.f_199[(Global_106070.f_7660.f_650 - 1) /*15*/] = { Var0 };
			Global_106070.f_7660.f_650 = (Global_106070.f_7660.f_650 - 1);
			return;
		}
		iVar1++;
	}
}

void func_12(int iParam0)
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < Global_106070.f_7660.f_198)
	{
		if (Global_106070.f_7660.f_137[iVar1 /*15*/] == iParam0)
		{
			func_13(Global_106070.f_7660.f_137[iVar1 /*15*/].f_6);
			iVar2 = iVar1;
			while (iVar2 <= (Global_106070.f_7660.f_198 - 2))
			{
				Global_106070.f_7660.f_137[iVar2 /*15*/] = { Global_106070.f_7660.f_137[iVar2 + 1 /*15*/] };
				iVar2++;
			}
			Global_106070.f_7660.f_137[(Global_106070.f_7660.f_198 - 1) /*15*/] = { Var0 };
			Global_106070.f_7660.f_198 = (Global_106070.f_7660.f_198 - 1);
			return;
		}
		iVar1++;
	}
}

int func_13(int iParam0)
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 145)
	{
		if (Global_106070.f_28022[iParam0 /*29*/].f_19[Global_14513] == 1)
		{
			Global_106070.f_28022[iParam0 /*29*/].f_19[Global_14513] = 0;
			if (Global_106070.f_28022[iParam0 /*29*/].f_24[Global_14513] == 0)
			{
				iVar0 = Global_14513;
				func_14(iParam0, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_14(int iParam0, int iParam1)
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

void func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<15> Var2;
	
	if (iParam0 < 0 || iParam0 >= Global_106070.f_7660.f_136)
	{
		return;
	}
	iVar1 = Global_106070.f_7660[iParam0 /*15*/].f_2;
	if (Global_106070.f_7660.f_136 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_106070.f_7660.f_136 - 2))
		{
			Global_106070.f_7660[iVar0 /*15*/] = { Global_106070.f_7660[iVar0 + 1 /*15*/] };
			iVar0++;
		}
	}
	if (Global_106070.f_7660.f_136 > 0)
	{
		Global_106070.f_7660[(Global_106070.f_7660.f_136 - 1) /*15*/] = { Var2 };
		Global_106070.f_7660.f_136 = (Global_106070.f_7660.f_136 - 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x05EFB6A616B6FADE(iVar1, iVar0))
		{
			func_9(iVar0);
		}
		iVar0++;
	}
}

bool func_16(var uParam0, struct<2> Param1, var uParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_46 < 3)
	{
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = (uParam0->f_46 - 1);
	while (iVar1 < uParam0->f_46)
	{
		if (((uParam0[iVar1 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar2 /*3*/])->f_1 >= Param1.f_1) || ((uParam0[iVar2 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar1 /*3*/])->f_1 >= Param1.f_1))
		{
			if (((*uParam0)[iVar1 /*3*/] + (((Param1.f_1 - (uParam0[iVar1 /*3*/])->f_1) / ((uParam0[iVar2 /*3*/])->f_1 - (uParam0[iVar1 /*3*/])->f_1)) * ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]))) < Param1)
			{
				bVar0 = !bVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return bVar0;
}

bool func_17(vector3 vParam0, vector3 vParam1, float fParam2)
{
	vector3 vVar0;
	
	vVar0 = { vParam1 - vParam0 };
	return ((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= (fParam2 * fParam2);
}

int func_18()
{
	if (!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	if (func_20() != 2)
	{
		return 0;
	}
	if (Global_25461)
	{
		return 0;
	}
	if (Global_56175)
	{
		return 0;
	}
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0)
		{
			return 0;
		}
	}
	if (unk_0x5CA3186381FC012C())
	{
		return 0;
	}
	if (unk_0x47C3DC461C758C29())
	{
		return 0;
	}
	if (func_19())
	{
		return 0;
	}
	return 1;
}

int func_19()
{
	if (unk_0x8B1574454E8C2421(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_20()
{
	func_21();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_21()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_24(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_23(unk_0xA19140A5C42D8715());
			if (func_10(iVar0) && (!func_22(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_10(Global_106070.f_2355.f_539.f_4301))
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

bool func_22(int iParam0)
{
	return Global_36117 == iParam0;
}

int func_23(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_24(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_24(int iParam0)
{
	if (func_10(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_25(var uParam0)
{
	int iVar0;
	float fVar1;
	
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 < 3)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		uParam0->f_47 = { uParam0->f_47 + *(uParam0[iVar0 /*3*/]) };
		iVar0++;
	}
	uParam0->f_47 = { uParam0->f_47 / FtoV(to_float(iVar0)) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		fVar1 = vdist2(uParam0->f_47, *(uParam0[iVar0 /*3*/]));
		if (fVar1 > uParam0->f_50)
		{
			uParam0->f_50 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_50 = sqrt(uParam0->f_50);
	uParam0->f_51 = 0;
}

void func_26(var uParam0, vector3 vParam1)
{
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 >= 15)
	{
	}
	*(uParam0[uParam0->f_46 /*3*/]) = { vParam1 };
	uParam0->f_46++;
}

void func_27(var uParam0)
{
	if (uParam0->f_51)
	{
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

void func_28()
{
	unk_0xA4529AC14CA515CF();
	unk_0x462DE328A1933E34();
	unk_0x8F1A9FE6D91AAFEB();
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x05EFB6A616B6FADE(Global_106070.f_9057.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0x2BCFB39E86340DAA(&(Global_106070.f_9057.f_99.f_219[iVar0]), iVar1);
	return 1;
}

