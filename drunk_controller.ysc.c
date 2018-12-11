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
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	float fLocal_16 = 0f;
	float fLocal_17[8] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_18 = 0f;
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
	fLocal_16 = -99f;
	fLocal_18 = -1f;
	unk_0x5341E3E598550C46();
	if (unk_0x5EBD03AF78E7B4DB(32))
	{
		func_31();
	}
	while (true)
	{
		wait(0);
		func_30(0);
		func_29();
		func_22();
		func_19();
		func_14();
		func_2();
		iLocal_13++;
		if (iLocal_13 >= 16)
		{
			iLocal_13 = 0;
		}
		iLocal_14++;
		if (iLocal_14 >= 16)
		{
			iLocal_14 = 0;
		}
		iLocal_15++;
		if (iLocal_15 >= 5)
		{
			iLocal_15 = 0;
		}
		if (!func_1())
		{
			func_31();
		}
	}
}

int func_1()
{
	if (Global_37237)
	{
		return 1;
	}
	if (unk_0x37B568B777BC65F9(Global_37238))
	{
		return 1;
	}
	if (unk_0x8B1574454E8C2421(joaat("drunk")) > 0)
	{
		return 1;
	}
	if (Global_37031 > 0)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	
	if (!Global_37237)
	{
		return;
	}
	iVar1 = unk_0xFD34717937104F1C();
	if (Global_37239 > iVar1 || Global_37239 == -1)
	{
		if (unk_0x47C3DC461C758C29())
		{
			return;
		}
		iVar2 = func_13();
		iVar0 = (fLocal_17 - 1);
		while (iVar0 >= 1)
		{
			fLocal_17[iVar0] = fLocal_17[(iVar0 - 1)];
			iVar0 = (iVar0 + -1);
		}
		fLocal_17[0] = iVar2;
		iVar4 = 0;
		iVar0 = 0;
		while (iVar0 < fLocal_17)
		{
			fVar3 = (fVar3 + fLocal_17[iVar0]);
			iVar4++;
			iVar0++;
		}
		fVar3 = (fVar3 / IntToFloat(iVar4));
		fVar5 = func_8();
		if (Global_37242 != Global_37243)
		{
			fVar6 = (Global_37243 - Global_37242);
			Global_37242 = (Global_37242 + (fVar6 * 0.1f));
			if (unk_0x69C0BB7D03EE045D((Global_37242 - Global_37243)) < 0.01f)
			{
				Global_37242 = Global_37243;
			}
		}
		if (!unk_0x8953BAE844CE9465())
		{
			unk_0x214831C136A00DB2("DRUNK_SHAKE", ((Global_37242 * fVar3) * fVar5));
		}
		if ((unk_0xFD34717937104F1C() % 100) == 0)
		{
			if (Global_37239 == -1)
			{
			}
			else
			{
				if (fLocal_18 == -1f)
				{
					fLocal_18 = fVar3;
				}
				unk_0x7FBDB532BD6CB0B7(((Global_37242 * fVar3) * fVar5));
				unk_0xBDA379F3B77CF80F(((Global_37241 * fVar3) * fVar5));
				fLocal_18 = fVar3;
			}
		}
		if (((Global_37241 * fVar3) * fVar5) < 1f)
		{
			unk_0xC4B76E16F851F655(((Global_37241 * fVar3) * fVar5));
		}
		else
		{
			unk_0xC4B76E16F851F655(1f);
		}
		if (!unk_0x15F9889D5184886A())
		{
			unk_0x917100201E9806BF("DRUNK_SHAKE", (((Global_37242 * Global_37236) * fVar3) * fVar5));
		}
		unk_0xE2F975E1D0159C25((((Global_37242 * Global_37236) * fVar3) * fVar5));
		if (unk_0x37B568B777BC65F9(Global_37238))
		{
			if (unk_0x3D3828E711B990EF(Global_37238))
			{
				unk_0x5B4C55F5FAE423BE(Global_37238, ((Global_37242 * fVar3) * fVar5));
			}
		}
		if (!unk_0x429D45A6C6520026(&Global_37265) && !unk_0x429D45A6C6520026(&Global_37249))
		{
			unk_0x8969D02DEDC106D2(&Global_37249);
			StringCopy(&Global_37265, "", 16);
		}
		unk_0x7A6D6D6C201AC0E3();
		if (Global_37244 > 0f)
		{
			if (fLocal_16 != Global_37244)
			{
				if (unk_0xAB9D24665E5A0F61() != -1)
				{
				}
				else if (!unk_0xB2D5505186AFADA7())
				{
					unk_0x0AF89BB8284ECD21(&Global_37245, 15f);
					fLocal_16 = Global_37244;
				}
			}
			else
			{
				if (unk_0xAB9D24665E5A0F61() != -1 && unk_0xDB92474F03E22534() != -1)
				{
					fLocal_16 = -99f;
				}
				unk_0x29F5EC2C1FC86D0C(2);
				iVar7 = (Global_37239 - iVar1);
				if (iVar7 <= (Global_37240 / 2))
				{
					bVar8 = false;
					if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
					{
						if (unk_0x958D2327555FAEA5(unk_0xA19140A5C42D8715()))
						{
							bVar8 = true;
						}
					}
					if (func_6(unk_0xA19140A5C42D8715()))
					{
						Global_37239 += 1000;
					}
					else if (bVar8)
					{
						Global_37239 += 1000;
					}
					else if (unk_0xAB9D24665E5A0F61() != -1)
					{
						Global_37239 += 1000;
					}
					else if (func_5())
					{
						Global_37239 += 1000;
					}
					else
					{
						if (unk_0xDB92474F03E22534() != -1)
						{
							unk_0x0F368087AF8AE47A((to_float((Global_37240 / 2)) / 1000f));
						}
						fLocal_16 = -99f;
						Global_37244 = 0f;
						StringCopy(&Global_37245, "", 16);
					}
				}
			}
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < fLocal_17)
	{
		fLocal_17[iVar0] = 0f;
		iVar0++;
	}
	fLocal_18 = -1f;
	fLocal_16 = -99f;
	func_3(1);
	iLocal_12 = 1;
}

void func_3(bool bParam0)
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
	func_4();
}

void func_4()
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

bool func_5()
{
	return Global_2504480;
}

int func_6(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_7(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_7(int iParam0)
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

float func_8()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 0.1f;
	iVar1 = func_12(unk_0xA19140A5C42D8715());
	iVar2 = func_9(unk_0xA19140A5C42D8715());
	if (iVar2 == 0)
	{
		if (iVar1 == 0)
		{
			fVar0 = 0.1f;
		}
		else
		{
			fVar0 = (to_float(iVar1) / to_float(10));
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
	}
	else if (iVar2 == 0)
	{
		fVar0 = 0.1f;
	}
	else
	{
		fVar0 = (to_float(iVar2) / to_float(5));
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
	}
	return fVar0;
}

int func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 0;
	}
	iVar0 = func_11(iParam0);
	iVar1 = func_10(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_37058[iVar1 /*5*/].f_4;
}

int func_10(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_37058[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_11(int iParam0)
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

int func_12(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 0;
	}
	iVar0 = func_11(iParam0);
	iVar1 = func_10(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_37058[iVar1 /*5*/].f_3;
}

float func_13()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0xFD34717937104F1C();
	fVar1 = 1f;
	iVar2 = (Global_37239 - iVar0);
	if (iVar2 <= Global_37240)
	{
		if (Global_37239 != -1)
		{
			fVar1 = (to_float(iVar2) / to_float(Global_37240));
		}
	}
	return fVar1;
}

void func_14()
{
	if (Global_37032[iLocal_15 /*5*/] == 0)
	{
		func_15(iLocal_15);
	}
}

void func_15(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (unk_0x7112137033807390(Global_37032[iParam0 /*5*/].f_1, 0))
	{
		func_18(iParam0);
		return;
	}
	if (func_6(Global_37032[iParam0 /*5*/].f_1))
	{
		func_18(iParam0);
		return;
	}
	if (!unk_0xB1FDFCECA75CE4A7("drunk"))
	{
		unk_0xD75A4240F0AD8613("drunk");
		return;
	}
	iVar0 = func_17();
	if (iVar0 == -1)
	{
		func_18(iParam0);
		return;
	}
	Global_37058[iVar0 /*5*/] = func_16();
	Global_37058[iVar0 /*5*/].f_1 = Global_37032[iParam0 /*5*/].f_1;
	Global_37058[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_37032[iParam0 /*5*/] };
	start_new_script_with_args("drunk", &Var1, 5, 1424);
	unk_0x4659F4154D948B01("drunk");
	func_18(iParam0);
}

var func_16()
{
	var uVar0;
	
	uVar0 = Global_37030;
	Global_37030++;
	return uVar0;
}

int func_17()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_37058[iVar0 /*5*/] == -1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_18(int iParam0)
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

void func_19()
{
	if (!Global_37139[iLocal_13 /*6*/].f_2 == 6)
	{
		if (Global_37139[iLocal_13 /*6*/].f_1 == 0)
		{
			func_21(iLocal_13);
			func_20(iLocal_13);
		}
	}
}

void func_20(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_37139[iParam0 /*6*/] = -1;
	Global_37139[iParam0 /*6*/].f_1 = -1;
	Global_37139[iParam0 /*6*/].f_2 = 6;
	Global_37139[iParam0 /*6*/].f_3 = 0;
	Global_37139[iParam0 /*6*/].f_4 = 0;
}

void func_21(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_37139[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			break;
		
		default:
			break;
	}
}

void func_22()
{
	int iVar0;
	
	iVar0 = -1;
	if (!Global_37058[iLocal_14 /*5*/] == -1)
	{
		iVar0 = func_28(Global_37058[iLocal_14 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_23(Global_37058[iLocal_14 /*5*/]);
		}
		else
		{
			func_20(iVar0);
		}
	}
}

void func_23(int iParam0)
{
	int iVar0;
	
	func_26(iParam0);
	iVar0 = func_25(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_24(iVar0);
}

void func_24(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_37058[iParam0 /*5*/] = -1;
	Global_37058[iParam0 /*5*/].f_1 = 0;
	Global_37058[iParam0 /*5*/].f_2 = -1;
	Global_37058[iParam0 /*5*/].f_3 = 0;
	Global_37058[iParam0 /*5*/].f_4 = 0;
}

int func_25(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_37058[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_26(int iParam0)
{
	func_30(iParam0);
	func_27(iParam0);
}

void func_27(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_37139[iVar0 /*6*/].f_1)
		{
			func_20(iVar0);
		}
		iVar0++;
	}
}

int func_28(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam1 == Global_37139[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_37139[iVar0 /*6*/])
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_29()
{
	if (Global_37139[iLocal_13 /*6*/] == 1)
	{
		Global_37139[iLocal_13 /*6*/] = 0;
	}
}

void func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_37139[iVar0 /*6*/])
		{
			func_20(iVar0);
		}
		iVar0++;
	}
}

void func_31()
{
	func_32();
	if (!iLocal_12)
	{
		func_3(1);
	}
	unk_0x8F1A9FE6D91AAFEB();
}

void func_32()
{
	func_35();
	func_34();
	func_33();
	func_4();
	Global_37270 = 0;
	Global_37269 = 0;
	Global_37031 = 0;
	unk_0xE38A3C362F1CFBF3("drunk");
}

void func_33()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_20(iVar0);
		iVar0++;
	}
}

void func_34()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_24(iVar0);
		iVar0++;
	}
}

void func_35()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_18(iVar0);
		iVar0++;
	}
}

