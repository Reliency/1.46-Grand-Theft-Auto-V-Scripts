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
#endregion

void __EntryFunction__()
{
	var uVar0;
	bool bVar1;
	
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
	if (unk_0x5EBD03AF78E7B4DB(3))
	{
		func_19();
	}
	unk_0xD07EE91CE9B6D4CF(1);
	func_18(0);
	func_17();
	unk_0x9B2456A4A8CA0BC5();
	while (!bVar1)
	{
		uVar0 = unk_0x5E88FC3AC496BD5C();
		if (unk_0x3CAC2741CC1A631F(unk_0xAC80A67402721F85(uVar0), "heist_ctrl_finale"))
		{
			bVar1 = true;
		}
	}
	unk_0x97ADECA58E284B43(uVar0);
	func_16();
	func_1(96.7f, -1288.1f, 28.1f, 104.5f, -1301f, 30f, 2f, 118.3f, -1309.7f, 29f, 120f, 1, 1, 1, 0, 0);
	func_19();
}

void func_1(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	func_2(vParam0, vParam1, fParam2, vParam3, fParam4, 0f, 0f, 0f, bParam5, bParam6, bParam7, bParam8, bParam9);
}

void func_2(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (bParam7)
	{
		bParam7 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = unk_0xC409B91AC4749F88();
	if (unk_0xDC5D81351D6A4DDB(iVar0))
	{
		if (!unk_0x4943BEEC19289B8E(iVar0))
		{
			unk_0x1F7948851FB36E88(iVar0, true, 0);
			iVar3 = 1;
		}
		if (unk_0x1095F403F52B42E1(iVar0, 0))
		{
			if (bParam10)
			{
				func_15(iVar0);
			}
			if (unk_0x54F6F5A823224519(iVar0, vParam0, vParam1, fParam2, 0, true, 0))
			{
				bVar1 = true;
			}
			else
			{
				vVar6 = { unk_0xE2BBD32891C18569(iVar0, true) };
				if ((vVar6.z > vParam0.z && vVar6.z < vParam1.z) || (vVar6.z > vParam1.z && vVar6.z < vParam0.z))
				{
					if (func_12(iVar0, vParam0, vParam1, fParam2))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0x1095F403F52B42E1(iVar0, 0))
			{
				if (unk_0xD3C4AB5E628133C1(iVar0, joaat("taxi")))
				{
					if (unk_0xB0D49A1F9F054602(iVar0, -1, 0) != unk_0xA19140A5C42D8715() && unk_0xB0D49A1F9F054602(iVar0, -1, 0) != 0)
					{
						if (unk_0x499324B3EF19C288(vParam0 + vParam1 / Vector(2f, 2f, 2f), unk_0xE2BBD32891C18569(iVar0, true), true) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam8)
			{
				if (func_4(iVar0, func_6(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_3(vParam5))
				{
					if (unk_0x1095F403F52B42E1(iVar0, 0))
					{
						iVar7 = unk_0x8F474E419F56E48D(iVar0);
						unk_0xE1D1402484966216(iVar0, &vVar4, &vVar5);
						if (unk_0x7C197233F79C2CB8(iVar7))
						{
							vParam5.x = (vParam5.x + 3f);
							vParam5.y = (vParam5.y + 3f);
						}
						if (((iVar7 == joaat("zentorno") || iVar7 == joaat("btype")) || iVar7 == joaat("dubsta3")) || iVar7 == joaat("monster"))
						{
							vParam5 = { vParam5 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar7 == joaat("t20") || iVar7 == joaat("virgo"))
						{
							vParam5 = { vParam5 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((vVar5.x - vVar4.x) > vParam5.x)
						{
							bVar2 = false;
						}
						else if ((vVar5.y - vVar4.y) > vParam5.y)
						{
							bVar2 = false;
						}
						else if ((vVar5.z - vVar4.z) > vParam5.z)
						{
							bVar2 = false;
						}
					}
				}
				if (unk_0x1095F403F52B42E1(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x01AF8CB960828C2B(vParam3, 5f, 0, 0, 0, 0, false, 0);
						unk_0x92DDCF53AA47A63D(iVar0, fParam4);
						unk_0x4299736016AECE26(iVar0, vParam3, 1, false, 0, 1);
						unk_0x99F546A9200EA026(iVar0, 1084227584);
						if (bParam9)
						{
							unk_0xC19EDC1D7179164C(iVar0, false, 1, 0);
							unk_0xC53974682AC939A9(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0x4943BEEC19289B8E(iVar0) || !unk_0x82384F63D814C864(iVar0, 1))
						{
							unk_0x1F7948851FB36E88(iVar0, true, 1);
						}
						if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iVar0, 0))
						{
							unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), unk_0xE2BBD32891C18569(iVar0, true), 1, false, 0, 1);
						}
						unk_0x4C842FAB634AC89E(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				unk_0x982F1A2D170EDD0F(vParam0, vParam1, fParam2, 0, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0xDC5D81351D6A4DDB(iVar0))
				{
					if (unk_0x4943BEEC19289B8E(iVar0))
					{
						unk_0x792676988A48387F(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0x4943BEEC19289B8E(iVar0))
			{
				unk_0x1F7948851FB36E88(iVar0, true, 0);
			}
			iVar8 = unk_0xB0D49A1F9F054602(iVar0, -1, 0);
			if (unk_0xDC5D81351D6A4DDB(iVar8) && !unk_0x4915F4759304D5CF(iVar8))
			{
				unk_0x4299736016AECE26(iVar8, unk_0xE2BBD32891C18569(iVar8, true), 1, false, 0, 1);
			}
			iVar9 = unk_0xE251DF9395C4E1C4(unk_0x8F474E419F56E48D(iVar0));
			if (iVar9 <= 2)
			{
				iVar8 = unk_0xB0D49A1F9F054602(iVar0, 0, 0);
				if (unk_0xDC5D81351D6A4DDB(iVar8) && !unk_0x4915F4759304D5CF(iVar8))
				{
					unk_0x4299736016AECE26(iVar8, unk_0xE2BBD32891C18569(iVar8, true), 1, false, 0, 1);
				}
			}
			if (iVar9 <= 4)
			{
				iVar8 = unk_0xB0D49A1F9F054602(iVar0, 1, 0);
				if (unk_0xDC5D81351D6A4DDB(iVar8) && !unk_0x4915F4759304D5CF(iVar8))
				{
					unk_0x4299736016AECE26(iVar8, unk_0xE2BBD32891C18569(iVar8, true), 1, false, 0, 1);
				}
				iVar8 = unk_0xB0D49A1F9F054602(iVar0, 2, 0);
				if (unk_0xDC5D81351D6A4DDB(iVar8) && !unk_0x4915F4759304D5CF(iVar8))
				{
					unk_0x4299736016AECE26(iVar8, unk_0xE2BBD32891C18569(iVar8, true), 1, false, 0, 1);
				}
			}
			unk_0x4C842FAB634AC89E(&iVar0);
		}
	}
}

int func_3(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_4(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xDC5D81351D6A4DDB(iParam0) || !unk_0x1095F403F52B42E1(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_5(iParam1, iVar0, &sVar1, &iVar2))
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

int func_5(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_6()
{
	func_7();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_7()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_11(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_10(unk_0xA19140A5C42D8715());
			if (func_9(iVar0) && (!func_8(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_9(Global_106070.f_2355.f_539.f_4301))
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

bool func_8(int iParam0)
{
	return Global_36117 == iParam0;
}

bool func_9(int iParam0)
{
	return iParam0 < 3;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_11(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_11(int iParam0)
{
	if (func_9(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_12(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6[4];
	struct<2> Var7;
	struct<2> Var8;
	
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		vParam1.z = vParam2.z;
		vVar0 = { func_14(vParam1 - vParam2) };
		vVar1 = { vVar0 };
		vVar0.x = -vVar1.y;
		vVar0.y = vVar1.x;
		vVar0.z = 0f;
		vVar2 = { vParam1 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar3 = { vParam1 + vVar0 * FtoV((fParam3 / 2f)) };
		vVar4 = { vParam2 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar5 = { vParam2 + vVar0 * FtoV((fParam3 / 2f)) };
		unk_0xDFCF5BB9A4E3B293(unk_0x8F474E419F56E48D(iParam0), &Var7, &Var8);
		vVar6[0 /*3*/] = { unk_0x3201284584C7CD83(iParam0, Var7, Var7.f_1, 0f) };
		vVar6[1 /*3*/] = { unk_0x3201284584C7CD83(iParam0, Var7, Var8.f_1, 0f) };
		vVar6[2 /*3*/] = { unk_0x3201284584C7CD83(iParam0, Var8, Var7.f_1, 0f) };
		vVar6[3 /*3*/] = { unk_0x3201284584C7CD83(iParam0, Var8, Var8.f_1, 0f) };
		if (((((((((((((((func_13(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar3) || func_13(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar3, vVar5)) || func_13(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar4, vVar5)) || func_13(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar4)) || func_13(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar3)) || func_13(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar3, vVar5)) || func_13(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar4, vVar5)) || func_13(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar4)) || func_13(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar3)) || func_13(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar3, vVar5)) || func_13(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar4, vVar5)) || func_13(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar4)) || func_13(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar3)) || func_13(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar3, vVar5)) || func_13(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar4, vVar5)) || func_13(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar4))
		{
			return 1;
		}
	}
	return 0;
}

int func_13(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param2;
	fVar3 = Param2.f_1;
	fVar4 = Param4;
	fVar5 = Param4.f_1;
	fVar6 = Param6;
	fVar7 = Param6.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_14(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

void func_15(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (unk_0x1095F403F52B42E1(iParam0, 0))
		{
			if (unk_0x2F78D19B3446544E(iParam0) <= 200f)
			{
				unk_0x70B1045E099298C1(iParam0, 500f);
			}
			if (unk_0xC9396A3FD9FCE75E(iParam0) <= 700f)
			{
				unk_0x70B1045E099298C1(iParam0, 900f);
			}
			if (unk_0x24A1A7BF4ED94B71(iParam0) < 200)
			{
				unk_0x70B1045E099298C1(iParam0, 500f);
			}
		}
	}
}

void func_16()
{
	Global_105094 = 1;
}

void func_17()
{
	int iVar0;
	
	iVar0 = func_6();
	switch (iVar0)
	{
		case 0:
			unk_0xE319E8535AE1BF59("BS_2A_2B_INT", 12, 8);
			break;
		
		case 1:
			unk_0xE319E8535AE1BF59("BS_2A_2B_INT", 14, 8);
			break;
		
		case 2:
			unk_0x9D7A6D81C3BE2AAE("BS_2A_2B_INT", 8);
			break;
	}
	while (!unk_0x4A3D58F7879393DB("BS_2A_2B_INT"))
	{
		wait(0);
	}
}

void func_18(int iParam0)
{
	Global_70024.f_138 = iParam0;
}

void func_19()
{
	func_24(24, 1);
	func_20(1, 0);
	unk_0x8F1A9FE6D91AAFEB();
}

void func_20(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_56183)
	{
		Global_56183 = iParam1;
	}
	if (bParam0)
	{
		if ((func_23(0) && Global_71451.f_1 == 1) && func_22(Global_71451))
		{
		}
		else
		{
			Global_56181 = 1;
		}
	}
	if (Global_106070.f_9057 || func_23(0))
	{
		iVar0 = func_21();
		iVar1 = Global_84079[iVar0 /*5*/];
		uVar2 = Global_71474.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_106070.f_9057)
			{
			}
			return;
		}
		if (unk_0x05EFB6A616B6FADE(Global_84079[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0x05EFB6A616B6FADE(Global_84079[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x2BCFB39E86340DAA(&(Global_84079[iVar0 /*5*/].f_1), 4);
		unk_0x2BCFB39E86340DAA(&Global_71453, 1);
		Global_71469 = uVar2;
		Global_71470 = unk_0xFD34717937104F1C();
	}
}

int func_21()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0x05EFB6A616B6FADE(Global_84079[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

bool func_23(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

void func_24(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_106070.f_9057.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_106070.f_9057.f_99.f_58[iParam0] = iParam1;
}

