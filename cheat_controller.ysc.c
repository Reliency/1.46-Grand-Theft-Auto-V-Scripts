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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
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
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	float fLocal_78 = 0f;
	int iLocal_79 = 0;
	int iLocal_80[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = 1;
	iLocal_47 = 1;
	iLocal_48 = 1;
	iLocal_49 = 1;
	iLocal_50 = 1;
	iLocal_51 = 1;
	iLocal_52 = 1;
	iLocal_53 = 1;
	iLocal_54 = 1;
	iLocal_55 = 1;
	iLocal_56 = 1;
	iLocal_57 = 1;
	iLocal_58 = 1;
	iLocal_59 = 1;
	iLocal_60 = 1;
	iLocal_61 = 1;
	iLocal_62 = 1;
	iLocal_63 = 1;
	iLocal_64 = 1;
	iLocal_65 = 1;
	iLocal_66 = 1;
	iLocal_67 = joaat("bmx");
	iLocal_73 = 300000;
	fLocal_78 = 1f;
	if (unk_0x5EBD03AF78E7B4DB(34))
	{
		func_112();
	}
	Global_25705 = 0;
	Global_25704 = 0;
	Global_25706 = 0;
	Global_25707 = 0;
	Global_25709 = 0;
	Global_25708 = 0;
	func_111();
	while (true)
	{
		func_2();
		if (((unk_0x4C9BACA8D249CB13() && func_1(unk_0xD4E735F4B6A956AC(), 1, 1)) && !Global_1574184) && Global_25459 == 0)
		{
			func_112();
		}
		wait(0);
	}
}

int func_1(int iParam0, bool bParam1, bool bParam2)
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

void func_2()
{
	func_87();
	func_67();
	func_21();
	func_3(iLocal_67);
}

void func_3(int iParam0)
{
	switch (iLocal_46)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (unk_0xC18A2519B717415A())
			{
				func_20("CHEAT_VEHICLE_SPAWN_DENIED");
				iLocal_46 = 1;
			}
			else
			{
				func_19(iParam0);
			}
			break;
		
		case 4:
			func_4(iParam0);
			break;
		
		default:
			break;
	}
}

void func_4(int iParam0)
{
	vector3 vVar0;
	float fVar1;
	bool bVar2;
	
	bVar2 = false;
	if (unk_0x7FC99CCC73354033(iParam0))
	{
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			if (unk_0xDC5D81351D6A4DDB(iLocal_68))
			{
				if (!unk_0x7112137033807390(iLocal_68, 0))
				{
					if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_68, 0))
					{
						vVar0 = { unk_0xE2BBD32891C18569(iLocal_68, true) };
						fVar1 = unk_0x552C823E1D2A019C(iLocal_68);
						unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), vVar0.x, vVar0.y, (vVar0.z + 4f), 1, 0, 0, 1);
						bVar2 = true;
					}
				}
				unk_0x4C842FAB634AC89E(&iLocal_68);
			}
			if (!bVar2)
			{
				if (iParam0 == joaat("duster") || iParam0 == joaat("stunt"))
				{
					vVar0 = { unk_0x3201284584C7CD83(unk_0xA19140A5C42D8715(), -1.5f, 3.5f, 1f) };
				}
				else if (iParam0 == joaat("buzzard"))
				{
					vVar0 = { unk_0x3201284584C7CD83(unk_0xA19140A5C42D8715(), 0f, 6f, 2f) };
				}
				else
				{
					vVar0 = { unk_0x3201284584C7CD83(unk_0xA19140A5C42D8715(), 0f, 3.5f, 1f) };
				}
				fVar1 = (unk_0x552C823E1D2A019C(unk_0xA19140A5C42D8715()) + 90f);
			}
			if (func_17(iParam0, vVar0, fVar1))
			{
				iLocal_68 = unk_0x48CFBECB146FD1A1(iParam0, vVar0, fVar1, 0, 1, 0);
				unk_0x99F546A9200EA026(iLocal_68, 1084227584);
				unk_0xA5DE74AE39867B03(iParam0);
				unk_0x792676988A48387F(&iLocal_68);
				func_15(iLocal_70);
				func_5(20);
			}
			else
			{
				unk_0xA5DE74AE39867B03(iParam0);
				func_20("CHEAT_VEHICLE_SPAWN_DENIED");
			}
			iLocal_46 = 1;
		}
	}
}

void func_5(int iParam0)
{
	if (!func_14(14) && !func_13(""))
	{
		unk_0x2BCFB39E86340DAA(&Global_25706, iParam0);
		Global_25709 = 1;
		func_6();
	}
}

void func_6()
{
	int iVar0;
	
	iVar0 = func_8();
	switch (iVar0)
	{
		case 0:
			func_7(joaat("sp0_times_cheated"), 1);
			break;
		
		case 1:
			func_7(joaat("sp1_times_cheated"), 1);
			break;
		
		case 2:
			func_7(joaat("sp2_times_cheated"), 1);
			break;
	}
}

void func_7(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x2AD48F3CEBA882E9(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x93180BE33E7149EF(iParam0, iVar0, 1);
}

int func_8()
{
	func_9();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_9()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_12(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_11(unk_0xA19140A5C42D8715());
			if (func_10(iVar0) && (!func_14(14) || Global_105021))
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

bool func_10(int iParam0)
{
	return iParam0 < 3;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)
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

int func_13(char* sParam0)
{
	if (iLocal_84 != 0)
	{
		if (func_14(14) && unk_0x3A83743561B4F70C())
		{
			if (unk_0x3CAC2741CC1A631F(sParam0, "CHEAT_SUPER_JUMP") && unk_0xC18A2519B717415A())
			{
				return 0;
			}
			if ((unk_0x3CAC2741CC1A631F(sParam0, "CHEAT_GRAVITY_MOON") && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0)) && unk_0x4374EED90C523366(unk_0xA19140A5C42D8715()))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

bool func_14(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_15(int iParam0)
{
	if (func_13(""))
	{
	}
	else
	{
		unk_0x59FF6261546DDD52("CHEAT_ACTIVATED");
		unk_0x4FDA9E6EF359F8A9(iParam0);
		func_16(unk_0x42A1DBBDEF9F85FF(0, 1));
		unk_0xFA13B3FE82352523(iParam0);
	}
}

void func_16(int iParam0)
{
	iLocal_80[iLocal_81] = iParam0;
	iLocal_81++;
	if (iLocal_81 >= 10)
	{
		iLocal_81 = 0;
	}
}

int func_17(int iParam0, vector3 vParam1, float fParam2)
{
	vector3 vVar0[9];
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	
	unk_0xDFCF5BB9A4E3B293(iParam0, &vVar1, &vVar2);
	vVar3.x = (unk_0x69C0BB7D03EE045D((vVar2.x - vVar1.x)) / 2f);
	vVar3.y = (unk_0x69C0BB7D03EE045D((vVar2.y - vVar1.y)) / 2f);
	vVar3.z = (unk_0x69C0BB7D03EE045D((vVar2.z - vVar1.z)) / 2f);
	vVar0[0 /*3*/] = { vParam1 };
	vVar0[1 /*3*/] = { unk_0x2F230B37E9FFF23F(vParam1, fParam2, -vVar3.x, -vVar3.y, -vVar3.z) };
	vVar0[2 /*3*/] = { unk_0x2F230B37E9FFF23F(vParam1, fParam2, vVar3.x, -vVar3.y, -vVar3.z) };
	vVar0[3 /*3*/] = { unk_0x2F230B37E9FFF23F(vParam1, fParam2, vVar3.x, vVar3.y, -vVar3.z) };
	vVar0[4 /*3*/] = { unk_0x2F230B37E9FFF23F(vParam1, fParam2, -vVar3.x, vVar3.y, -vVar3.z) };
	vVar0[5 /*3*/] = { unk_0x2F230B37E9FFF23F(vParam1, fParam2, -vVar3.x, -vVar3.y, vVar3.z) };
	vVar0[6 /*3*/] = { unk_0x2F230B37E9FFF23F(vParam1, fParam2, vVar3.x, -vVar3.y, vVar3.z) };
	vVar0[7 /*3*/] = { unk_0x2F230B37E9FFF23F(vParam1, fParam2, vVar3.x, vVar3.y, vVar3.z) };
	vVar0[8 /*3*/] = { unk_0x2F230B37E9FFF23F(vParam1, fParam2, -vVar3.x, vVar3.y, vVar3.z) };
	if (!unk_0x92270AFB0B51829C(vParam1))
	{
		return 0;
	}
	iVar13 = unk_0x838514B5255EE506(func_18(unk_0xD4E735F4B6A956AC()) + Vector(1f, 0f, 0f), vParam1, 87, unk_0xA19140A5C42D8715(), 0);
	unk_0x7C00B4755E048785(iVar13, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar7 = unk_0x838514B5255EE506(vVar0[1 /*3*/], vVar0[3 /*3*/], 87, unk_0xA19140A5C42D8715(), 0);
	unk_0x7C00B4755E048785(iVar7, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar8 = unk_0x838514B5255EE506(vVar0[2 /*3*/], vVar0[4 /*3*/], 87, unk_0xA19140A5C42D8715(), 0);
	unk_0x7C00B4755E048785(iVar8, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar9 = unk_0x838514B5255EE506(vVar0[5 /*3*/], vVar0[7 /*3*/], 87, unk_0xA19140A5C42D8715(), 0);
	unk_0x7C00B4755E048785(iVar9, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar10 = unk_0x838514B5255EE506(vVar0[6 /*3*/], vVar0[8 /*3*/], 87, unk_0xA19140A5C42D8715(), 0);
	unk_0x7C00B4755E048785(iVar10, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar11 = unk_0x838514B5255EE506(vVar0[1 /*3*/], vVar0[8 /*3*/], 87, unk_0xA19140A5C42D8715(), 0);
	unk_0x7C00B4755E048785(iVar11, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar12 = unk_0x838514B5255EE506(vVar0[2 /*3*/], vVar0[7 /*3*/], 87, unk_0xA19140A5C42D8715(), 0);
	unk_0x7C00B4755E048785(iVar12, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	return 1;
}

Vector3 func_18(int iParam0)
{
	return unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iParam0), false);
}

void func_19(int iParam0)
{
	if (unk_0x891603A00E496EF0(iParam0))
	{
		unk_0xCACEBBBEAD8F262E(iParam0);
		if (unk_0x7FC99CCC73354033(iParam0))
		{
			iLocal_46 = 4;
		}
	}
}

void func_20(int iParam0)
{
	if (!func_14(14))
	{
		unk_0x59FF6261546DDD52("CHEAT_DENIED");
		unk_0x4FDA9E6EF359F8A9(iParam0);
		func_16(unk_0x42A1DBBDEF9F85FF(0, 1));
	}
}

void func_21()
{
	func_64();
	func_63();
	func_44();
	func_43();
	func_42();
	func_38();
	func_35();
	func_31();
	func_22();
}

void func_22()
{
	switch (iLocal_66)
	{
		case 1:
			break;
		
		case 4:
			func_30(19, 1);
			func_29();
			break;
		
		case 5:
			if ((((!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) || func_27()) || func_26(23)) || func_26(21)) || func_26(19))
			{
				iLocal_66 = 9;
				return;
			}
			func_24();
			break;
		
		case 9:
			func_23("CHEAT_AIM_SLOW_MO");
			func_30(19, 0);
			unk_0xDED73F11B8CB95B1(1f);
			iLocal_77 = 0;
			iLocal_66 = 1;
			break;
		
		default:
			break;
	}
}

void func_23(char* sParam0)
{
	if (func_13(sParam0))
	{
	}
	else
	{
		unk_0x59FF6261546DDD52("CHEAT_DEACTIVATED");
		unk_0x4FDA9E6EF359F8A9(sParam0);
		func_16(unk_0x42A1DBBDEF9F85FF(0, 1));
	}
}

void func_24()
{
	if (unk_0x2206F47E5C82D52C(unk_0xA19140A5C42D8715()))
	{
		if (unk_0xD73B1037F6BD4B90(2, 25))
		{
			if (func_25(unk_0xA19140A5C42D8715()) != joaat("weapon_unarmed") && func_25(unk_0xA19140A5C42D8715()) != joaat("object"))
			{
				unk_0xDED73F11B8CB95B1(fLocal_78);
			}
			else
			{
				unk_0xDED73F11B8CB95B1(1f);
			}
		}
		else
		{
			unk_0xDED73F11B8CB95B1(1f);
		}
	}
}

int func_25(int iParam0)
{
	var uVar0;
	
	unk_0xF990CFC0F1D94A39(iParam0, &uVar0, 1);
	return uVar0;
}

int func_26(int iParam0)
{
	if (unk_0x05EFB6A616B6FADE(Global_25704, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_27()
{
	if (((((((func_14(0) || func_14(11)) || func_14(4)) || func_14(9)) || func_14(10)) || func_14(3)) || func_14(2)) || func_28(35))
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106070.f_9057.f_99.f_58[iParam0];
}

void func_29()
{
	iLocal_77++;
	if (iLocal_77 > 3)
	{
		iLocal_77 = 0;
		iLocal_66 = 9;
		return;
	}
	switch (iLocal_77)
	{
		case 1:
			func_15("CHEAT_AIM_SLOW_MO1");
			fLocal_78 = 0.6f;
			break;
		
		case 2:
			func_15("CHEAT_AIM_SLOW_MO2");
			fLocal_78 = 0.4f;
			break;
		
		case 3:
			func_15("CHEAT_AIM_SLOW_MO3");
			fLocal_78 = 0.2f;
			break;
		
		default:
			break;
	}
	iLocal_66 = 5;
}

void func_30(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x2BCFB39E86340DAA(&Global_25705, iParam0);
		func_5(iParam0);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_25705, iParam0);
	}
}

void func_31()
{
	switch (iLocal_63)
	{
		case 1:
			break;
		
		case 4:
			func_30(16, 1);
			func_34();
			break;
		
		case 5:
			unk_0xD481A812073CCF02(2, 37, 1);
			unk_0xD481A812073CCF02(2, 19, 1);
			if ((((((((!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) || func_27()) || func_33()) || func_32(1)) || unk_0x53E955948D35BDB5(2, 37)) || unk_0x53E955948D35BDB5(2, 19)) || func_26(23)) || func_26(21)) || func_26(16))
			{
				iLocal_63 = 9;
			}
			break;
		
		case 9:
			unk_0xD481A812073CCF02(2, 37, 1);
			unk_0xD481A812073CCF02(2, 19, 1);
			func_23("CHEAT_SLOW_MO");
			func_30(16, 0);
			iLocal_76 = 0;
			unk_0xDED73F11B8CB95B1(1f);
			iLocal_63 = 1;
			break;
		
		default:
			break;
	}
}

bool func_32(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17228.f_4 && Global_17228.f_104 == 4);
	}
	return Global_17228.f_4;
}

int func_33()
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		return Global_90805.f_44 == 1;
	}
	return 0;
}

void func_34()
{
	iLocal_76++;
	if (iLocal_76 > 3)
	{
		iLocal_63 = 9;
		return;
	}
	switch (iLocal_76)
	{
		case 1:
			func_15("CHEAT_SLOW_MO1");
			unk_0xDED73F11B8CB95B1(0.6f);
			break;
		
		case 2:
			func_15("CHEAT_SLOW_MO2");
			unk_0xDED73F11B8CB95B1(0.4f);
			break;
		
		case 3:
			func_15("CHEAT_SLOW_MO3");
			unk_0xDED73F11B8CB95B1(0.2f);
			break;
		
		default:
			break;
	}
	iLocal_63 = 5;
}

void func_35()
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	switch (iLocal_64)
	{
		case 1:
			break;
		
		case 2:
			func_30(17, 1);
			unk_0xB29E08C7AB729BAD(unk_0xA19140A5C42D8715(), true);
			unk_0xEF06BE39D11763FC(unk_0xD4E735F4B6A956AC(), 1);
			unk_0xD6CDDEFB0FD5B191(unk_0xA19140A5C42D8715(), true, true, true, true, true, 0, 0, 0);
			unk_0xF0188A1B49D79AF7(unk_0xA19140A5C42D8715(), joaat("gadget_parachute"), 1, false, true);
			vVar0 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) };
			fVar1 = unk_0x552C823E1D2A019C(unk_0xA19140A5C42D8715());
			unk_0x8F7BA8E028ADF980(vVar0, &fVar2, 0, 0);
			fVar2 = (fVar2 + 500f);
			unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), vVar0.x, vVar0.y, fVar2, 1, 0, 0, 1);
			unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), fVar1);
			iLocal_72 = unk_0xFD34717937104F1C();
			unk_0x9662BE461F9FDF9E(0);
			iLocal_64 = 3;
			break;
		
		case 3:
			if (func_37(1000, iLocal_72))
			{
				unk_0xB29E08C7AB729BAD(unk_0xA19140A5C42D8715(), false);
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
				iLocal_72 = unk_0xFD34717937104F1C();
				iLocal_64 = 4;
			}
			break;
		
		case 4:
			if (func_37(1000, iLocal_72))
			{
				unk_0xD481A812073CCF02(0, 144, 1);
				unk_0xD481A812073CCF02(0, 149, 1);
				if (func_8() == 0)
				{
					unk_0x72A0FF8C49CFFC0D(unk_0xA19140A5C42D8715(), 9, 0, 0, 0);
				}
				else
				{
					unk_0x72A0FF8C49CFFC0D(unk_0xA19140A5C42D8715(), 8, 0, 0, 0);
				}
				unk_0x70C1F5AA59767FE6(250);
				iLocal_72 = unk_0xFD34717937104F1C();
				func_15("CHEAT_SKYFALL");
				unk_0x90E641761C692B84(2);
				iLocal_64 = 5;
			}
			break;
		
		case 5:
			if ((((!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) || func_27()) || func_26(23)) || func_26(21)) || func_26(17))
			{
				iLocal_64 = 9;
				break;
			}
			unk_0xD481A812073CCF02(0, 144, 1);
			unk_0xD8C147DA332E7F06(2);
			if (unk_0x3977B7555441B490(unk_0xA19140A5C42D8715()))
			{
				unk_0xFAE5E5AC968944E8(unk_0xA19140A5C42D8715(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 1);
				if (unk_0xFD2A0C4CDE18D862(unk_0xA19140A5C42D8715()))
				{
					iLocal_64 = 9;
				}
			}
			else
			{
				iLocal_64 = 9;
			}
			break;
		
		case 9:
			func_36();
			func_23("CHEAT_SKYFALL");
			func_30(17, 0);
			iLocal_64 = 1;
			break;
		
		default:
			break;
	}
}

void func_36()
{
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		unk_0x581CF279D6A7E3D6(unk_0xA19140A5C42D8715(), joaat("gadget_parachute"));
	}
	if (iLocal_62 != 5)
	{
		unk_0xEF06BE39D11763FC(unk_0xD4E735F4B6A956AC(), 0);
		unk_0xD6CDDEFB0FD5B191(unk_0xA19140A5C42D8715(), false, false, false, false, false, 0, 0, 0);
	}
	unk_0x90E641761C692B84(0);
}

int func_37(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xFD34717937104F1C();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_38()
{
	vector3 vVar0;
	
	switch (iLocal_62)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_INVINCIBILITY");
			func_30(15, 1);
			iLocal_62 = 5;
			iLocal_74 = unk_0xFD34717937104F1C();
			unk_0xEF06BE39D11763FC(unk_0xD4E735F4B6A956AC(), 1);
			unk_0xD6CDDEFB0FD5B191(unk_0xA19140A5C42D8715(), true, true, true, true, true, 0, 0, 0);
			break;
		
		case 5:
			if (!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) || unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				iLocal_62 = 9;
				return;
			}
			vVar0 = { func_18(unk_0xD4E735F4B6A956AC()) };
			if (((((func_27() || func_33()) || func_26(23)) || func_26(21)) || func_26(15)) || vVar0.z <= -170f)
			{
				iLocal_62 = 9;
				return;
			}
			iLocal_75 = (unk_0xFD34717937104F1C() - iLocal_74);
			if (unk_0x8B1574454E8C2421(joaat("appinternet")) == 0)
			{
				func_39((iLocal_73 - iLocal_75), "CHEAT_INV", 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			if (iLocal_75 >= (iLocal_73 - 1000))
			{
				iLocal_62 = 9;
				return;
			}
			unk_0xEF06BE39D11763FC(unk_0xD4E735F4B6A956AC(), 1);
			unk_0xD6CDDEFB0FD5B191(unk_0xA19140A5C42D8715(), true, true, true, true, true, 0, 0, 0);
			unk_0xDD944FA91A1DC790();
			break;
		
		case 9:
			func_23("CHEAT_INVINCIBILITY_OFF");
			func_30(15, 0);
			iLocal_62 = 1;
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				unk_0xEF06BE39D11763FC(unk_0xD4E735F4B6A956AC(), 0);
				unk_0xD6CDDEFB0FD5B191(unk_0xA19140A5C42D8715(), false, false, false, false, false, 0, 0, 0);
			}
			break;
		
		default:
			break;
	}
}

void func_39(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_41(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1369750.f_1 = 1;
		func_40(7, iVar0);
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

void func_40(int iParam0, int iParam1)
{
	unk_0x2BCFB39E86340DAA(&(Global_1369750.f_6130[iParam0]), iParam1);
}

bool func_41(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_1369750.f_6130[iParam0], iParam1);
}

void func_42()
{
	switch (iLocal_59)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_FLAMING_BULLETS");
			func_30(12, 1);
			iLocal_59 = 5;
			break;
		
		case 5:
			if (((!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) || func_26(23)) || func_26(21)) || func_26(12))
			{
				iLocal_59 = 9;
				return;
			}
			if (func_27())
			{
				iLocal_59 = 9;
				return;
			}
			unk_0xF5812893FA375006(unk_0xD4E735F4B6A956AC());
			break;
		
		case 9:
			func_23("CHEAT_FLAMING_BULLETS");
			func_30(12, 0);
			iLocal_59 = 1;
			break;
		
		default:
			break;
	}
}

void func_43()
{
	switch (iLocal_60)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_EXPLOSIVE_MELEE");
			func_30(13, 1);
			iLocal_60 = 5;
			break;
		
		case 5:
			if ((((!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) || func_26(23)) || func_26(21)) || func_26(13)) || func_27())
			{
				iLocal_60 = 9;
				return;
			}
			unk_0xCC91242A92F83C63(unk_0xD4E735F4B6A956AC());
			break;
		
		case 9:
			func_23("CHEAT_EXPLOSIVE_MELEE");
			func_30(13, 0);
			iLocal_60 = 1;
			break;
		
		default:
			break;
	}
}

void func_44()
{
	switch (iLocal_65)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_DRUNK");
			func_30(18, 1);
			func_59(unk_0xA19140A5C42D8715());
			func_57(30000, 1050253722, 1065353216, 0);
			iLocal_65 = 5;
			break;
		
		case 5:
			if ((((func_27() || !unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC())) || func_26(23)) || func_26(21)) || func_26(18))
			{
				iLocal_65 = 9;
			}
			break;
		
		case 9:
			func_23("CHEAT_DRUNK");
			func_30(18, 0);
			func_48(unk_0xA19140A5C42D8715());
			func_47(1000);
			iLocal_65 = 1;
			break;
		
		case 10:
			func_45(1);
			func_30(18, 0);
			iLocal_65 = 1;
			break;
		
		default:
			break;
	}
}

void func_45(bool bParam0)
{
	unk_0xBDA379F3B77CF80F(0f);
	unk_0xC4B76E16F851F655(0f);
	unk_0x7FBDB532BD6CB0B7(0f);
	unk_0xC06F936994838086(1);
	unk_0xE2F975E1D0159C25(0f);
	unk_0x1B5E87701C10854A(1);
	unk_0x29F5EC2C1FC86D0C(0);
	if (unk_0x2F8EAF18929E1E59("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x5AD7D03C214BDA88("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x429D45A6C6520026(&Global_37249))
	{
		if (unk_0x2F8EAF18929E1E59(&Global_37249))
		{
			unk_0x5AD7D03C214BDA88(&Global_37249);
		}
	}
	if (unk_0x37B568B777BC65F9(Global_37238))
	{
		if (unk_0x3D3828E711B990EF(Global_37238))
		{
			unk_0x5B4C55F5FAE423BE(Global_37238, 0f);
			unk_0x0F5AD734321B3CBC(Global_37238, 1);
		}
	}
	if (unk_0x5B1F43E517A1588D())
	{
		unk_0xF3D41ED309762C0D(0);
	}
	if (bParam0)
	{
		if (unk_0xDB92474F03E22534() != -1 || unk_0xAB9D24665E5A0F61() != -1)
		{
			unk_0x11E3FD49051E434D();
		}
		else if (unk_0x47C3DC461C758C29())
		{
			unk_0x11E3FD49051E434D();
		}
	}
	Global_37244 = 0f;
	StringCopy(&Global_37245, "", 16);
	StringCopy(&Global_37249, "", 64);
	StringCopy(&Global_37265, "", 16);
	func_46();
}

void func_46()
{
	Global_37237 = 0;
	Global_37238 = 0;
	Global_37239 = 0;
	Global_37240 = 30000;
	Global_37241 = 0f;
	Global_37243 = 0f;
	Global_37242 = 0f;
	Global_37244 = 0f;
	StringCopy(&Global_37245, "", 16);
}

void func_47(int iParam0)
{
	int iVar0;
	
	if (!Global_37237)
	{
		return;
	}
	iVar0 = unk_0xFD34717937104F1C();
	Global_37239 = (iVar0 + iParam0);
	Global_37240 = iParam0;
}

void func_48(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return;
	}
	iVar0 = func_56(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_37058[iVar0 /*5*/];
		func_51(1, iVar1, 1);
		return;
	}
	iVar2 = func_50(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_49(iVar2);
}

void func_49(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_37032[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_37032[iParam0 /*5*/].f_1 == unk_0xA19140A5C42D8715())
		{
			Global_37269 = 0;
		}
	}
	Global_37032[iParam0 /*5*/] = 13;
	Global_37032[iParam0 /*5*/].f_1 = 0;
	Global_37032[iParam0 /*5*/].f_2 = 0;
	Global_37032[iParam0 /*5*/].f_3 = 0;
	Global_37032[iParam0 /*5*/].f_4 = 0;
	Global_37031 = (Global_37031 - 1);
	if (Global_37031 < 0)
	{
		Global_37031 = 0;
	}
}

int func_50(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_37032[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_51(int iParam0, int iParam1, int iParam2)
{
	func_52(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_52(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_54(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_53();
	if (iVar0 == -1)
	{
		return;
	}
	Global_37139[iVar0 /*6*/] = iParam0;
	Global_37139[iVar0 /*6*/].f_1 = iParam1;
	Global_37139[iVar0 /*6*/].f_2 = iParam2;
	Global_37139[iVar0 /*6*/].f_3 = iParam3;
	Global_37139[iVar0 /*6*/].f_4 = iParam4;
	Global_37139[iVar0 /*6*/].f_5 = iParam5;
}

int func_53()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_37139[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_54(int iParam0, int iParam1, int iParam2)
{
	if (func_55(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_55(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_37139[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_37139[iVar0 /*6*/])
			{
				if (iParam1 == Global_37139[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_56(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_37058[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_37058[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_57(int iParam0, float fParam1, float fParam2, int iParam3)
{
	func_58(-1, iParam0, fParam1, fParam2, iParam3, 1);
}

void func_58(int iParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5)
{
	int iVar0;
	
	if (Global_3)
	{
		return;
	}
	if (Global_37237)
	{
		return;
	}
	if (!bParam5)
	{
		if (iParam0 < 0)
		{
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f)
	{
		return;
	}
	if (!unk_0x8953BAE844CE9465())
	{
		unk_0x214831C136A00DB2("DRUNK_SHAKE", fParam3);
	}
	if (!unk_0x15F9889D5184886A())
	{
		unk_0x917100201E9806BF("DRUNK_SHAKE", (fParam3 * Global_37236));
	}
	if (unk_0x37B568B777BC65F9(iParam4))
	{
		unk_0xBC1542DDC31676C2(iParam4, "DRUNK_SHAKE", fParam3);
		Global_37238 = iParam4;
	}
	else
	{
		Global_37238 = 0;
	}
	Global_37237 = 1;
	iVar0 = unk_0xFD34717937104F1C();
	Global_37239 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_37239 = -1;
		}
	}
	Global_37240 = uParam1;
	Global_37241 = fParam2;
	Global_37243 = fParam3;
	Global_37242 = fParam3;
}

int func_59(int iParam0)
{
	return func_60(iParam0, -1, 1);
}

int func_60(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 0;
	}
	iVar0 = func_62(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_50(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_61();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_37032[iVar2 /*5*/] = 0;
	Global_37032[iVar2 /*5*/].f_1 = iParam0;
	Global_37032[iVar2 /*5*/].f_2 = iParam1;
	Global_37032[iVar2 /*5*/].f_3 = iParam1;
	Global_37032[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0xA19140A5C42D8715())
	{
		Global_37269 = 1;
	}
	Global_37031++;
	return 1;
}

int func_61()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_37032[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_62(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_37058[iVar0 /*5*/].f_1)
		{
			return Global_37058[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_63()
{
	switch (iLocal_58)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_BANG_BANG");
			func_30(11, 1);
			iLocal_58 = 5;
			break;
		
		case 5:
			if (((!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) || func_26(23)) || func_26(21)) || func_26(11))
			{
				iLocal_58 = 9;
				return;
			}
			if (func_27())
			{
				iLocal_58 = 9;
				return;
			}
			unk_0xB8FE37083085C9BC(unk_0xD4E735F4B6A956AC());
			break;
		
		case 9:
			func_23("CHEAT_BANG_BANG");
			func_30(11, 0);
			iLocal_58 = 1;
			break;
		
		default:
			break;
	}
}

void func_64()
{
	switch (iLocal_61)
	{
		case 1:
			break;
		
		case 4:
			func_5(14);
			func_30(14, 1);
			func_66();
			break;
		
		case 5:
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				if ((((((!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) || func_27()) || func_26(23)) || func_26(21)) || func_26(14)) || func_65(17)) || unk_0x4374EED90C523366(unk_0xA19140A5C42D8715()))
				{
					iLocal_61 = 9;
				}
			}
			else
			{
				iLocal_61 = 9;
			}
			break;
		
		case 9:
			func_23("CHEAT_GRAVITY_MOON");
			func_30(14, 0);
			unk_0xA63BF5D37C8FF6C1(0);
			iLocal_79 = 0;
			iLocal_61 = 1;
			break;
		
		default:
			break;
	}
}

int func_65(int iParam0)
{
	if (unk_0x05EFB6A616B6FADE(Global_25705, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_66()
{
	iLocal_79++;
	if (iLocal_79 > 1)
	{
		iLocal_61 = 9;
		return;
	}
	switch (iLocal_79)
	{
		case 1:
			func_15("CHEAT_GRAVITY_MOON");
			unk_0xA63BF5D37C8FF6C1(1);
			break;
		
		default:
			break;
	}
	iLocal_61 = 5;
}

void func_67()
{
	func_86();
	func_80();
	func_79();
	func_78();
	func_77();
	func_76();
	func_75();
	func_73();
	func_72();
	func_71();
	func_68();
}

void func_68()
{
	if (iLocal_57 == 4)
	{
		iLocal_57 = 1;
		if ((func_26(23) || func_26(22)) || func_26(10))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			func_15("CHEAT_GIVE_PARACHUTE");
			unk_0xF0188A1B49D79AF7(unk_0xA19140A5C42D8715(), joaat("gadget_parachute"), 1, true, true);
			func_5(10);
		}
	}
}

int func_69()
{
	if (iLocal_83)
	{
		iLocal_83 = 0;
		return 0;
	}
	if (func_70(0))
	{
		return 1;
	}
	return 0;
}

int func_70(int iParam0)
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

void func_71()
{
	int iVar0;
	
	if (iLocal_56 == 4)
	{
		iLocal_56 = 1;
		if ((func_26(23) || func_26(22)) || func_26(9))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			if (unk_0x2B70659B2EB224B3() == 0)
			{
				func_20("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC());
			if (iVar0 > 0)
			{
				func_15("CHEAT_WANTED_DOWN");
				unk_0xF10B3BC4F73177E5(unk_0xD4E735F4B6A956AC(), (iVar0 - 1), 0);
				func_5(9);
			}
			else
			{
				func_20("CHEAT_WANTED_DOWN_DENIED");
			}
		}
	}
}

void func_72()
{
	int iVar0;
	
	if (iLocal_55 == 4)
	{
		iLocal_55 = 1;
		if ((func_26(23) || func_26(22)) || func_26(8))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			if (unk_0x2B70659B2EB224B3() == 0)
			{
				func_20("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC());
			if (iVar0 < unk_0x2B70659B2EB224B3())
			{
				unk_0xF10B3BC4F73177E5(unk_0xD4E735F4B6A956AC(), iVar0 + 1, 0);
				unk_0xDF341226C0B8BAC3(unk_0xD4E735F4B6A956AC(), 0);
				func_15("CHEAT_WANTED_UP");
				func_5(8);
			}
			else
			{
				func_20("CHEAT_WANTED_UP_DENIED");
			}
		}
	}
}

void func_73()
{
	if (iLocal_54 == 4)
	{
		iLocal_54 = 1;
		if ((((((func_26(23) || func_26(22)) || func_26(7)) || func_14(9)) || func_14(10)) || !unk_0x0EAEA97013C373C3(func_74())) || !unk_0xDE84299DB1852D63(unk_0xD4E735F4B6A956AC()))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			unk_0x209E9FD79CA91034(unk_0xD4E735F4B6A956AC(), 1);
			func_15("CHEAT_SPECIAL_ABILITY");
			func_5(7);
		}
	}
}

int func_74()
{
	return unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715());
}

void func_75()
{
	int iVar0;
	
	if (iLocal_53 == 4)
	{
		iLocal_53 = 1;
		if ((((func_26(23) || func_26(22)) || func_26(6)) || func_14(9)) || func_14(10))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			func_15("CHEAT_HEALTH_ARMOR");
			func_5(6);
			unk_0x6259CDB47862A4F3(unk_0xA19140A5C42D8715(), unk_0xD91DB46E38B776E5(unk_0xA19140A5C42D8715()), 0);
			unk_0xA71534D0C1D35B8F(unk_0xA19140A5C42D8715(), (unk_0xE3765A1C6753A4C2(unk_0xD4E735F4B6A956AC()) - unk_0xBEE435F0F4CCC194(unk_0xA19140A5C42D8715())));
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				iVar0 = unk_0xD1A189C6C27EE0CA(unk_0xA19140A5C42D8715());
				if (unk_0xDC5D81351D6A4DDB(iVar0))
				{
					if (!unk_0x7112137033807390(iVar0, 0))
					{
						unk_0x9CBCA0C1A4935577(iVar0);
					}
				}
			}
		}
	}
}

void func_76()
{
	if (iLocal_52 == 4)
	{
		iLocal_52 = 1;
		if ((func_26(23) || func_26(22)) || func_26(5))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		func_5(5);
		switch (iLocal_71)
		{
			case 0:
				iLocal_71 = 1;
			
			case 1:
				unk_0x159BBE9A06B1F3AD("EXTRASUNNY");
				unk_0xF0E859E9E316E981();
				func_15("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY");
				iLocal_71 = 2;
				break;
			
			case 2:
				unk_0x159BBE9A06B1F3AD("CLEAR");
				unk_0xF0E859E9E316E981();
				func_15("CHEAT_ADVANCE_WEATHER_CLEAR");
				iLocal_71 = 3;
				break;
			
			case 3:
				unk_0x159BBE9A06B1F3AD("CLOUDS");
				unk_0xF0E859E9E316E981();
				func_15("CHEAT_ADVANCE_WEATHER_CLOUDY");
				iLocal_71 = 4;
				break;
			
			case 4:
				unk_0x159BBE9A06B1F3AD("SMOG");
				unk_0xF0E859E9E316E981();
				func_15("CHEAT_ADVANCE_WEATHER_SMOGGY");
				iLocal_71 = 6;
				break;
			
			case 6:
				unk_0x159BBE9A06B1F3AD("OVERCAST");
				unk_0xF0E859E9E316E981();
				func_15("CHEAT_ADVANCE_WEATHER_OVERCAST");
				iLocal_71 = 7;
				break;
			
			case 7:
				unk_0x159BBE9A06B1F3AD("RAIN");
				unk_0xF0E859E9E316E981();
				func_15("CHEAT_ADVANCE_WEATHER_RAIN");
				func_30(5, 1);
				iLocal_71 = 8;
				break;
			
			case 8:
				unk_0x159BBE9A06B1F3AD("THUNDER");
				unk_0xF0E859E9E316E981();
				func_15("CHEAT_ADVANCE_WEATHER_THUNDER");
				iLocal_71 = 9;
				break;
			
			case 9:
				unk_0x159BBE9A06B1F3AD("CLEARING");
				unk_0xF0E859E9E316E981();
				func_15("CHEAT_ADVANCE_WEATHER_CLEARING");
				iLocal_71 = 11;
				break;
			
			case 11:
				unk_0x159BBE9A06B1F3AD("XMAS");
				unk_0xF0E859E9E316E981();
				func_15("CHEAT_ADVANCE_WEATHER_SNOW");
				iLocal_71 = 0;
				break;
			
			default:
				break;
			}
	}
}

void func_77()
{
	if (iLocal_51 == 4)
	{
		iLocal_51 = 1;
		if ((func_26(23) || func_26(22)) || func_26(4))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		func_15("CHEAT_GIVE_WEAPONS");
		func_5(4);
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			unk_0xD66FF6E7D7FCE47A(unk_0xA19140A5C42D8715(), joaat("weapon_knife"), -1, false);
			unk_0xD66FF6E7D7FCE47A(unk_0xA19140A5C42D8715(), joaat("weapon_smg"), 300, false);
			unk_0xD66FF6E7D7FCE47A(unk_0xA19140A5C42D8715(), joaat("weapon_assaultrifle"), 300, true);
			unk_0xD66FF6E7D7FCE47A(unk_0xA19140A5C42D8715(), joaat("weapon_pumpshotgun"), 150, false);
			unk_0xD66FF6E7D7FCE47A(unk_0xA19140A5C42D8715(), joaat("weapon_sniperrifle"), 30, false);
			unk_0xD66FF6E7D7FCE47A(unk_0xA19140A5C42D8715(), joaat("weapon_grenade"), 5, false);
			unk_0xD66FF6E7D7FCE47A(unk_0xA19140A5C42D8715(), joaat("weapon_rpg"), 5, false);
		}
	}
}

void func_78()
{
	switch (iLocal_50)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_FAST_SWIM");
			func_30(3, 1);
			iLocal_50 = 5;
			break;
		
		case 5:
			if (((!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) || func_26(23)) || func_26(22)) || func_26(3))
			{
				iLocal_50 = 9;
			}
			else
			{
				unk_0xFAE8F6DB4F00D5F1(unk_0xD4E735F4B6A956AC(), 1.49f);
				unk_0xDD944FA91A1DC790();
			}
			break;
		
		case 9:
			unk_0xFAE8F6DB4F00D5F1(unk_0xD4E735F4B6A956AC(), 1f);
			func_23("CHEAT_FAST_SWIM");
			func_30(3, 0);
			iLocal_50 = 1;
			break;
		
		default:
			break;
	}
}

void func_79()
{
	switch (iLocal_49)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_FAST_RUN");
			func_30(2, 1);
			iLocal_49 = 5;
			break;
		
		case 5:
			if ((((!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) || unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715())) || func_26(23)) || func_26(22)) || func_26(2))
			{
				iLocal_49 = 9;
			}
			else
			{
				if (unk_0x9783679EC9491C05(unk_0xA19140A5C42D8715()) || (unk_0x331BE13D31DFA36A(unk_0xA19140A5C42D8715()) && !unk_0x3D77D31E25961596(unk_0xA19140A5C42D8715())))
				{
					unk_0x7322C8B9A5AFD122(unk_0xD4E735F4B6A956AC(), 1.49f);
				}
				else
				{
					unk_0x7322C8B9A5AFD122(unk_0xD4E735F4B6A956AC(), 1f);
				}
				unk_0xDD944FA91A1DC790();
			}
			break;
		
		case 9:
			unk_0x7322C8B9A5AFD122(unk_0xD4E735F4B6A956AC(), 1f);
			func_23("CHEAT_FAST_RUN");
			func_30(2, 0);
			iLocal_49 = 1;
			break;
		
		default:
			break;
	}
}

void func_80()
{
	int iVar0;
	
	switch (iLocal_48)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_SLIDEY_CARS");
			func_30(1, 1);
			iLocal_48 = 5;
			break;
		
		case 5:
			if (((!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) || func_26(23)) || func_26(22)) || func_26(1))
			{
				iLocal_48 = 9;
			}
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
				if (!unk_0x7112137033807390(iVar0, 0))
				{
					if (unk_0xB0D49A1F9F054602(iVar0, -1, 0) == unk_0xA19140A5C42D8715())
					{
						if (iLocal_69 == 0)
						{
							iLocal_69 = iVar0;
							if (!unk_0x7112137033807390(iLocal_69, 0))
							{
								if (func_81(1))
								{
									unk_0xB8C960B41C246BCA(iLocal_69, 1);
								}
								else
								{
									iLocal_69 = 0;
								}
							}
						}
						else if (iLocal_69 != iVar0)
						{
							if (!unk_0x7112137033807390(iLocal_69, 0))
							{
								unk_0xB8C960B41C246BCA(iLocal_69, 0);
							}
							iLocal_69 = 0;
						}
					}
				}
			}
			break;
		
		case 9:
			func_23("CHEAT_SLIDEY_CARS");
			iLocal_48 = 10;
			break;
		
		case 10:
			if (!unk_0x7112137033807390(iLocal_69, 0))
			{
				unk_0xB8C960B41C246BCA(iLocal_69, 0);
				iLocal_69 = 0;
			}
			func_30(1, 0);
			iLocal_48 = 1;
			break;
		
		default:
			break;
	}
}

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	char* sVar4;
	
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		iVar0 = unk_0xC409B91AC4749F88();
		if (unk_0xDC5D81351D6A4DDB(iVar0))
		{
			if (unk_0x1095F403F52B42E1(iVar0, 0))
			{
				iVar1 = unk_0x8F474E419F56E48D(iVar0);
				iVar2 = func_8();
				if (iParam0 & 1 != 0)
				{
					if (!unk_0x425CD7B17352316F(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 2 != 0)
				{
					if (!unk_0x8CE5E4632E631B03(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 4 != 0)
				{
					if (!unk_0x7C197233F79C2CB8(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 8 != 0)
				{
					if (!unk_0x71852D4EBD08275F(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 16 != 0)
				{
					if (unk_0x4F9AEAB2CC029A5C(iVar0, "door_dside_r") != -1 || unk_0x4F9AEAB2CC029A5C(iVar0, "door_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 32 != 0)
				{
					if (unk_0x4F9AEAB2CC029A5C(iVar0, "door_dside_r") == -1 || unk_0x4F9AEAB2CC029A5C(iVar0, "door_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 64 != 0)
				{
					if (unk_0x8CE5E4632E631B03(iVar1))
					{
						if (unk_0x4F9AEAB2CC029A5C(iVar0, "seat_r") == -1)
						{
							return 0;
						}
					}
					else if (unk_0x4F9AEAB2CC029A5C(iVar0, "seat_dside_r") != -1 || unk_0x4F9AEAB2CC029A5C(iVar0, "seat_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 128 != 0)
				{
					if (unk_0x4F9AEAB2CC029A5C(iVar0, "seat_dside_r") == -1 || unk_0x4F9AEAB2CC029A5C(iVar0, "seat_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 256 != 0)
				{
					if (!func_10(iVar2))
					{
						return 0;
					}
					if (func_84(iVar2, 0) != iVar1)
					{
						return 0;
					}
				}
				if (iParam0 & 512 != 0)
				{
					if (!unk_0x425CD7B17352316F(iVar1) && !unk_0x8CE5E4632E631B03(iVar1))
					{
						return 0;
					}
					if (unk_0x05ECE2F25303B711(iVar0))
					{
						return 0;
					}
					sVar4 = unk_0xB2BB3714AD93D7C5(iVar0, &uVar3);
					if (!unk_0x429D45A6C6520026(sVar4))
					{
						if (unk_0xFEB6EEC0545AF7AA(sVar4) == unk_0xFEB6EEC0545AF7AA("taxiService"))
						{
							return 0;
						}
					}
					if (func_82(iVar0, iVar2, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_82(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xDC5D81351D6A4DDB(iParam0) || !unk_0x1095F403F52B42E1(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_83(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0x05EFB6A616B6FADE(Global_106070.f_7201[iVar2], 0))
		{
			if (unk_0xFB166837ACE44C44(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_83(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_84(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_10(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_85(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_85(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_106070.f_9057.f_99.f_58[128] && !Global_106070.f_9057.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_106070.f_9057.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_106070.f_9057.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_86()
{
	switch (iLocal_47)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_SUPER_JUMP");
			func_30(0, 1);
			iLocal_47 = 5;
			break;
		
		case 5:
			if ((((!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) || func_26(23)) || func_26(22)) || func_26(0)) || unk_0xC18A2519B717415A())
			{
				iLocal_47 = 9;
				return;
			}
			unk_0x0A23ECCB42C9940D(unk_0xD4E735F4B6A956AC());
			unk_0xB0D7019224A3A443(unk_0xA19140A5C42D8715(), 217, 1);
			break;
		
		case 9:
			func_23("CHEAT_SUPER_JUMP");
			func_30(0, 0);
			iLocal_47 = 1;
			break;
		
		default:
			break;
	}
}

void func_87()
{
	if ((func_110() || iLocal_84 != 0) || func_14(14))
	{
		unk_0xD481A812073CCF02(2, 243, 1);
	}
	func_109();
	if (unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		return;
	}
	if (unk_0x16F3A5056959BF3A(unk_0xA19140A5C42D8715()))
	{
		return;
	}
	if (!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		return;
	}
	if (!unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
	{
		return;
	}
	if (func_33() || unk_0x47C3DC461C758C29())
	{
		return;
	}
	if (func_108())
	{
		if (!iLocal_82)
		{
			func_107();
			iLocal_82 = 1;
		}
		return;
	}
	iLocal_82 = 0;
	iLocal_83 = 0;
	if ((func_106(988027572, 12) || unk_0x25D3153243DDFE76(joaat("buzzoff"))) || func_105(20, joaat("buzzard")))
	{
		func_102(joaat("buzzard"), "CHEAT_SPAWN_VEH1");
	}
	if ((func_106(-1134279030, 11) || unk_0x25D3153243DDFE76(joaat("bandit"))) || func_105(20, joaat("bmx")))
	{
		func_102(joaat("bmx"), "CHEAT_SPAWN_VEH2");
	}
	if ((func_106(971352167, 10) || unk_0x25D3153243DDFE76(joaat("holein1"))) || func_105(20, joaat("caddy")))
	{
		func_102(joaat("caddy"), "CHEAT_SPAWN_VEH3");
	}
	if ((func_106(-269863225, 10) || unk_0x25D3153243DDFE76(joaat("comet"))) || func_105(20, joaat("comet2")))
	{
		func_102(joaat("comet2"), "CHEAT_SPAWN_VEH4");
	}
	if ((func_106(458579068, 12) || unk_0x25D3153243DDFE76(joaat("flyspray"))) || func_105(20, joaat("duster")))
	{
		func_102(joaat("duster"), "CHEAT_SPAWN_VEH5");
	}
	if ((func_106(-666513193, 12) || unk_0x25D3153243DDFE76(joaat("rocket"))) || func_105(20, joaat("pcj")))
	{
		func_102(joaat("pcj"), "CHEAT_SPAWN_VEH6");
	}
	if ((func_106(-1245984749, 10) || unk_0x25D3153243DDFE76(joaat("rapidgt"))) || func_105(20, joaat("rapidgt")))
	{
		func_102(joaat("rapidgt"), "CHEAT_SPAWN_VEH7");
	}
	if ((func_106(2076774618, 12) || unk_0x25D3153243DDFE76(joaat("offroad"))) || func_105(20, joaat("sanchez")))
	{
		func_102(joaat("sanchez"), "CHEAT_SPAWN_VEH8");
	}
	if ((func_106(855685457, 9) || unk_0x25D3153243DDFE76(joaat("vinewood"))) || func_105(20, joaat("stretch")))
	{
		func_102(joaat("stretch"), "CHEAT_SPAWN_VEH9");
	}
	if ((func_106(-591395876, 12) || unk_0x25D3153243DDFE76(joaat("barnstorm"))) || func_105(20, joaat("stunt")))
	{
		func_102(joaat("stunt"), "CHEAT_SPAWN_VEH10");
	}
	if ((func_106(-1399217582, 10) || unk_0x25D3153243DDFE76(joaat("trashed"))) || func_105(20, joaat("trash")))
	{
		func_102(joaat("trash"), "CHEAT_SPAWN_VEH11");
	}
	if (func_101())
	{
		if ((func_106(-375917581, 10) || unk_0x25D3153243DDFE76(joaat("extinct"))) || func_105(20, joaat("dodo")))
		{
			func_102(joaat("dodo"), "CHEAT_SPAWN_VEH12");
		}
		if ((func_106(-2124307881, 10) || unk_0x25D3153243DDFE76(joaat("deathcar"))) || func_105(20, joaat("dukes2")))
		{
			func_102(joaat("dukes2"), "CHEAT_SPAWN_VEH13");
		}
		if ((func_106(1028964594, 9) || unk_0x25D3153243DDFE76(joaat("bubbles"))) || func_105(20, joaat("submersible2")))
		{
			func_102(joaat("submersible2"), "CHEAT_SPAWN_VEH14");
		}
	}
	if ((func_106(-393416581, 11) || unk_0x25D3153243DDFE76(joaat("hoptoit"))) || func_105(0, 0))
	{
		func_100();
	}
	if ((func_106(-296509791, 8) || unk_0x25D3153243DDFE76(joaat("snowday"))) || func_105(1, 0))
	{
		func_99();
	}
	if ((func_106(1120820643, 7) || unk_0x25D3153243DDFE76(joaat("catchme"))) || func_105(2, 0))
	{
		func_98();
	}
	if ((func_106(-421458016, 9) || unk_0x25D3153243DDFE76(joaat("gotgills"))) || func_105(3, 0))
	{
		func_97();
	}
	if ((func_106(372390926, 12) || unk_0x25D3153243DDFE76(joaat("toolup"))) || func_105(4, 0))
	{
		iLocal_51 = 4;
	}
	if ((func_106(606506837, 8) || unk_0x25D3153243DDFE76(joaat("makeitrain"))) || func_105(5, 0))
	{
		iLocal_52 = 4;
	}
	if ((func_106(453014206, 12) || unk_0x25D3153243DDFE76(joaat("turtle"))) || func_105(6, 0))
	{
		iLocal_53 = 4;
	}
	if ((func_106(1773187142, 9) || unk_0x25D3153243DDFE76(joaat("powerup"))) || func_105(7, 0))
	{
		iLocal_54 = 4;
	}
	if ((func_106(1173296014, 10) || unk_0x25D3153243DDFE76(joaat("fugitive"))) || func_105(8, 0))
	{
		iLocal_55 = 4;
	}
	if ((func_106(-381269753, 10) || unk_0x25D3153243DDFE76(joaat("lawyerup"))) || func_105(9, 0))
	{
		iLocal_56 = 4;
	}
	if ((func_106(-2023988698, 11) || unk_0x25D3153243DDFE76(joaat("skydive"))) || func_105(10, 0))
	{
		iLocal_57 = 4;
	}
	if ((func_106(-835863906, 12) || unk_0x25D3153243DDFE76(joaat("highex"))) || func_105(11, 0))
	{
		func_96();
	}
	if ((func_106(1958387485, 12) || unk_0x25D3153243DDFE76(joaat("incendiary"))) || func_105(12, 0))
	{
		func_95();
	}
	if ((func_106(-903985180, 9) || unk_0x25D3153243DDFE76(joaat("hothands"))) || func_105(13, 0))
	{
		func_94();
	}
	if ((func_106(2087642905, 9) || unk_0x25D3153243DDFE76(joaat("floater"))) || func_105(14, 0))
	{
		func_93();
	}
	if ((func_106(1257820019, 10) || unk_0x25D3153243DDFE76(joaat("painkiller"))) || func_105(15, 0))
	{
		func_92();
	}
	if ((func_106(1540206179, 7) || unk_0x25D3153243DDFE76(joaat("slowmo"))) || func_105(16, 0))
	{
		func_91();
	}
	if ((func_106(115565392, 16) || unk_0x25D3153243DDFE76(joaat("skyfall"))) || func_105(17, 0))
	{
		func_90();
	}
	if ((func_106(-1276513277, 8) || unk_0x25D3153243DDFE76(joaat("liquor"))) || func_105(18, 0))
	{
		func_89();
	}
	if ((func_106(2040433593, 9) || unk_0x25D3153243DDFE76(joaat("deadeye"))) || func_105(19, 0))
	{
		func_88();
	}
}

void func_88()
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(16))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_63 != 1)
	{
		func_20("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_66 = 4;
	}
}

void func_89()
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		iLocal_65 = 1;
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		iLocal_65 = 1;
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(18))
	{
		func_20("CHEAT_NOT_NOW");
		iLocal_65 = 1;
		return;
	}
	if (iLocal_65 == 1)
	{
		iLocal_65 = 4;
	}
	else if (iLocal_65 == 5)
	{
		iLocal_65 = 9;
	}
}

void func_90()
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (unk_0xC18A2519B717415A())
	{
		func_20("CHEAT_NOT_HERE");
		return;
	}
	if (iLocal_64 != 1)
	{
		func_20("CHEAT_ALREADY_ACTIVE");
		return;
	}
	if (((((func_26(23) || func_26(21)) || func_26(17)) || func_65(0)) || unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0)) || !unk_0x45AEA43E60C1F922())
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if ((unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 0)) || unk_0x8B1574454E8C2421(joaat("respawn_controller")) > 0)
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	iLocal_64 = 2;
}

void func_91()
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(16))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_66 != 1)
	{
		func_20("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_63 = 4;
	}
}

void func_92()
{
	vector3 vVar0;
	
	vVar0 = { func_18(unk_0xD4E735F4B6A956AC()) };
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (((func_26(23) || func_26(21)) || func_26(15)) || vVar0.z <= -170f)
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_62 == 1)
	{
		iLocal_62 = 4;
	}
	else if (iLocal_62 == 5)
	{
		iLocal_62 = 9;
	}
}

void func_93()
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if ((((func_26(23) || func_26(21)) || func_26(14)) || func_65(17)) || unk_0x4374EED90C523366(unk_0xA19140A5C42D8715()))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	iLocal_61 = 4;
}

void func_94()
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		iLocal_60 = 1;
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		iLocal_60 = 1;
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(13))
	{
		func_20("CHEAT_NOT_NOW");
		iLocal_60 = 1;
		return;
	}
	if (iLocal_60 == 1)
	{
		iLocal_60 = 4;
	}
	else if (iLocal_60 == 5)
	{
		iLocal_60 = 9;
	}
}

void func_95()
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		iLocal_59 = 1;
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		iLocal_59 = 1;
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(12))
	{
		func_20("CHEAT_NOT_NOW");
		iLocal_59 = 1;
		return;
	}
	if (iLocal_59 == 1)
	{
		iLocal_59 = 4;
	}
	else if (iLocal_59 == 5)
	{
		iLocal_59 = 9;
	}
}

void func_96()
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		iLocal_58 = 1;
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		iLocal_58 = 1;
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(11))
	{
		func_20("CHEAT_NOT_NOW");
		iLocal_58 = 1;
		return;
	}
	if (iLocal_58 == 1)
	{
		iLocal_58 = 4;
	}
	else if (iLocal_58 == 5)
	{
		iLocal_58 = 9;
	}
}

void func_97()
{
	if ((((func_26(23) || func_26(22)) || func_26(3)) || func_14(9)) || func_14(10))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_50 == 1)
	{
		iLocal_50 = 4;
	}
	else if (iLocal_50 == 5)
	{
		iLocal_50 = 9;
	}
}

void func_98()
{
	if ((((func_26(23) || func_26(22)) || func_26(2)) || func_14(9)) || func_14(10))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_49 == 1)
	{
		iLocal_49 = 4;
	}
	else if (iLocal_49 == 5)
	{
		iLocal_49 = 9;
	}
}

void func_99()
{
	if ((func_26(23) || func_26(22)) || func_26(1))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_48 == 1)
	{
		iLocal_48 = 4;
	}
	else if (iLocal_48 == 5)
	{
		iLocal_48 = 9;
	}
}

void func_100()
{
	if (((func_26(23) || func_26(22)) || func_26(0)) || unk_0xC18A2519B717415A())
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_47 == 1)
	{
		iLocal_47 = 4;
	}
	else if (iLocal_47 == 5)
	{
		iLocal_47 = 9;
	}
}

int func_101()
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

void func_102(int iParam0, char* sParam1)
{
	if (iLocal_46 == 1)
	{
		if (((((func_14(9) || unk_0x8B1574454E8C2421(joaat("barry1")) > 0) || unk_0x8B1574454E8C2421(joaat("tennis")) > 0) || func_26(23)) || func_26(22)) || func_26(20))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (!func_103(iParam0))
		{
			func_20("CHEAT_VEHICLE_LOCKED_DENIED");
			return;
		}
		iLocal_67 = iParam0;
		iLocal_70 = sParam1;
		iLocal_46 = 2;
	}
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dodo"):
			if (func_104(66, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("dukes2"):
			if (func_104(64, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("submersible2"):
			if (func_104(63, 0) == 0)
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_104(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_106070.f_32605[iParam0], iParam1);
}

int func_105(int iParam0, int iParam1)
{
	if (unk_0x05EFB6A616B6FADE(Global_25707, iParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_25708)
			{
				unk_0xFA57C719261AA55D(&Global_25707, iParam0);
				iLocal_83 = 1;
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			unk_0xFA57C719261AA55D(&Global_25707, iParam0);
			iLocal_83 = 1;
			return 1;
		}
	}
	return 0;
}

int func_106(int iParam0, int iParam1)
{
	if (!func_14(14))
	{
		return unk_0x6C946FA6AFB5CB74(iParam0, iParam1);
	}
	return 0;
}

void func_107()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_80[iVar0] != -1)
		{
			unk_0xDB2661401914B2FA(iLocal_80[iVar0]);
			iLocal_80[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_108()
{
	if (((Global_93232 == 13 || Global_93232 == 10) || Global_93232 == 11) || Global_93232 == 12)
	{
		return 0;
	}
	return 1;
}

void func_109()
{
	if (func_14(14) || (!unk_0x3A83743561B4F70C() && iLocal_84 != 0))
	{
		iLocal_84 = unk_0xFD34717937104F1C();
	}
	if (iLocal_84 != 0)
	{
		if (!func_14(14))
		{
			if ((unk_0xFD34717937104F1C() - iLocal_84) > 1000)
			{
				iLocal_84 = 0;
			}
		}
	}
}

int func_110()
{
	if (Global_71465)
	{
		return 1;
	}
	else if (Global_56175 && !Global_56181)
	{
		return 1;
	}
	return 0;
}

void func_111()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_80[iVar0] = -1;
		iVar0++;
	}
	iLocal_82 = 0;
	iLocal_81 = 0;
}

void func_112()
{
	unk_0x2893AFE9D291F903(0);
	if (iLocal_64 == 5)
	{
		func_36();
	}
	if (iLocal_65 == 5)
	{
		func_45(1);
	}
	if (iLocal_63 == 5 || iLocal_66 == 5)
	{
		unk_0xDED73F11B8CB95B1(1f);
	}
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (iLocal_62 == 5)
		{
			unk_0xEF06BE39D11763FC(unk_0xD4E735F4B6A956AC(), 0);
			unk_0xD6CDDEFB0FD5B191(unk_0xA19140A5C42D8715(), false, false, false, false, false, 0, 0, 0);
		}
		unk_0x7322C8B9A5AFD122(unk_0xD4E735F4B6A956AC(), 1f);
		unk_0xFAE8F6DB4F00D5F1(unk_0xD4E735F4B6A956AC(), 1f);
	}
	unk_0xA63BF5D37C8FF6C1(0);
	Global_25705 = 0;
	Global_25704 = 0;
	Global_25706 = 0;
	Global_25707 = 0;
	Global_25709 = 0;
	Global_25708 = 0;
	unk_0x8F1A9FE6D91AAFEB();
}

