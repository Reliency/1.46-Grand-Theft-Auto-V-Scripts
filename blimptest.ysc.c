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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_41 = joaat("blimp");
	iLocal_44 = joaat("s_m_m_pilot_02");
	iLocal_46 = joaat("buzzard");
	if (unk_0x71364F510A1CB69F())
	{
		unk_0x70C1F5AA59767FE6(500);
	}
	if (unk_0x5EBD03AF78E7B4DB(18))
	{
		func_18();
	}
	unk_0x9BB7BCDF2AC2D6F9(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		unk_0xA6D7328EAA8CB61E(255, 255, 255, 255);
		unk_0xFD5A6B90A46ACED0(0.75f, 0.9f);
		unk_0x8EF82530113D7244(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		unk_0xA6D7328EAA8CB61E(255, 255, 255, 255);
		unk_0xFD5A6B90A46ACED0(0.4f, 0.45f);
		unk_0x8EF82530113D7244(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		wait(0);
	}
}

void func_1()
{
	vector3 vVar0;
	
	if (unk_0xDC5D81351D6A4DDB(iLocal_40))
	{
		if ((unk_0x7112137033807390(iLocal_40, 0) || unk_0x24A1A7BF4ED94B71(iLocal_40) <= 0) || unk_0x2F78D19B3446544E(iLocal_40) <= 0f)
		{
			func_9(&iLocal_42);
			if (unk_0xB2C707E9E3A0E44D(iLocal_40))
			{
				unk_0xF648DB179A6E71BF(iLocal_40);
			}
			if (iLocal_47 == 1)
			{
				vVar0 = { unk_0xE2BBD32891C18569(iLocal_40, 0) };
				func_8(vVar0);
			}
			if (iLocal_47 == 1)
			{
				func_7(&iLocal_43);
				func_4(&iLocal_40);
			}
			else
			{
				func_3(&iLocal_43, 1, 0, 1);
				func_2(&iLocal_40);
			}
		}
		else if (unk_0xB2C707E9E3A0E44D(iLocal_40))
		{
			unk_0xD136D67FFCAC2A13(iLocal_40, 0.25f);
		}
	}
}

void func_2(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(*iParam0))
	{
		unk_0x7112137033807390(*iParam0, 0);
		if (unk_0x4943BEEC19289B8E(*iParam0) && unk_0x82384F63D814C864(*iParam0, 1))
		{
			unk_0x792676988A48387F(iParam0);
		}
	}
}

void func_3(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xDC5D81351D6A4DDB(*iParam0))
	{
		if (!unk_0x4915F4759304D5CF(*iParam0))
		{
			unk_0x98D1B1BD9C3AA456(*iParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0x3F29BBC16DCB8A23(*iParam0);
			}
			unk_0xD738221C247C8B71(*iParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x1F4E5EFBFE503FB3(*iParam0, 0);
			}
		}
		unk_0x7E4E83D33161D01A(iParam0);
	}
}

void func_4(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(*iParam0))
	{
		if (!unk_0x4943BEEC19289B8E(*iParam0))
		{
			unk_0x1F7948851FB36E88(*iParam0, true, 0);
		}
		if (func_6(*iParam0))
		{
			if (unk_0x4943BEEC19289B8E(*iParam0) && unk_0x82384F63D814C864(*iParam0, 1))
			{
				if (func_5(unk_0xA19140A5C42D8715()))
				{
					if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), *iParam0, 0))
					{
						unk_0x792676988A48387F(iParam0);
						return;
					}
				}
				unk_0x4C842FAB634AC89E(iParam0);
			}
		}
		else
		{
			if (func_5(unk_0xA19140A5C42D8715()))
			{
				if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), *iParam0, 0))
				{
					unk_0x792676988A48387F(iParam0);
					return;
				}
			}
			unk_0x4C842FAB634AC89E(iParam0);
		}
	}
}

int func_5(int iParam0)
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

int func_6(int iParam0)
{
	if (func_5(iParam0))
	{
		if (unk_0x1095F403F52B42E1(iParam0, 0))
		{
			if (!unk_0x463E3A48A46C9195(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(*iParam0))
	{
		if (!unk_0x7112137033807390(*iParam0, 0))
		{
			unk_0x98D1B1BD9C3AA456(*iParam0, 0, 1);
		}
		if (!unk_0x4943BEEC19289B8E(*iParam0))
		{
			unk_0x1F7948851FB36E88(*iParam0, true, 0);
		}
		unk_0x680F17660351F21B(iParam0);
	}
}

void func_8(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[12];
	
	iVar1 = 12;
	vVar2[0 /*3*/] = { 5f, 0f, 0f };
	vVar2[1 /*3*/] = { 0f, 5f, 0f };
	vVar2[2 /*3*/] = { 0f, 0f, 5f };
	vVar2[3 /*3*/] = { 5f, 5f, 0f };
	vVar2[4 /*3*/] = { 5f, 0f, 5f };
	vVar2[5 /*3*/] = { 0f, 5f, 5f };
	vVar2[6 /*3*/] = { 20f, 0f, 0f };
	vVar2[7 /*3*/] = { 0f, 20f, 0f };
	vVar2[8 /*3*/] = { 0f, 0f, 20f };
	vVar2[9 /*3*/] = { 20f, 20f, 0f };
	vVar2[10 /*3*/] = { 20f, 0f, 20f };
	vVar2[11 /*3*/] = { 0f, 20f, 20f };
	unk_0x2033075E51297032(vParam0, 8, 1f, 1, 0, 1f, 0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		unk_0x2033075E51297032(vParam0 + vVar2[iVar0 /*3*/], 8, 1f, 1, 0, 1f, 0);
		iVar0++;
	}
}

void func_9(int iParam0)
{
	if (unk_0xCE3CB618AFE55EFB(*iParam0))
	{
		unk_0x3E46F0AAE4B470FB(*iParam0, 0);
		unk_0xE1623437A3194332(iParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x7C25BC565D364568(sParam2);
	unk_0xB435CE12BEF0DBF7(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&iLocal_45);
	unk_0xCACEBBBEAD8F262E(iLocal_46);
	while (!unk_0x7FC99CCC73354033(iLocal_46))
	{
		wait(0);
	}
	if (func_6(iLocal_40))
	{
		iLocal_45 = unk_0x48CFBECB146FD1A1(iLocal_46, unk_0x3201284584C7CD83(iLocal_40, 50f, 0f, 15f), 0f, 1, 1, 0);
		unk_0xA7E7312A2DC89797(iLocal_45);
		func_12(iLocal_45, iLocal_40);
		if (func_5(unk_0xA19140A5C42D8715()))
		{
			unk_0x692D5500D82E4F5D(unk_0xA19140A5C42D8715(), iLocal_45, -1);
			unk_0xAA32DD4848CF93E0(0f, 1065353216);
			unk_0xD87B76260C547F31(0f);
			unk_0xFDD15D670AD33E10(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), 500f, 1, 0, 0, false);
		}
	}
	unk_0xA5DE74AE39867B03(iLocal_46);
}

void func_12(int iParam0, int iParam1)
{
	float fVar0;
	
	fVar0 = func_13(unk_0xE2BBD32891C18569(iParam0, 1), unk_0xE2BBD32891C18569(iParam1, 1), 1);
	unk_0x92DDCF53AA47A63D(iParam0, fVar0);
}

float func_13(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0xA0844D842FD4B009(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_14()
{
	func_9(&iLocal_42);
	if (func_6(iLocal_40))
	{
		iLocal_42 = func_15(iLocal_40, 1, 5);
	}
}

int func_15(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_5(iParam0))
	{
		iVar0 = unk_0x6A15DD6A863D5E27(iParam0);
		unk_0xF46EDCACB3804F87(iVar0, bParam1);
		unk_0xAD8FB9E563A1FF80(iVar0, iParam2);
		unk_0x575CF00E129E0CE1(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	unk_0xCACEBBBEAD8F262E(iLocal_44);
	while (!unk_0x7FC99CCC73354033(iLocal_44))
	{
		wait(0);
	}
	if (func_6(iLocal_40))
	{
		iLocal_43 = unk_0x91A7C8CA5E332C03(iLocal_40, 26, iLocal_44, -1, 1, true);
		if (func_5(iLocal_43))
		{
			unk_0x1F4E5EFBFE503FB3(iLocal_43, 1);
			unk_0x13E0A8160525AE55(iLocal_43, 118, false);
			unk_0x13E0A8160525AE55(iLocal_43, 29, false);
			unk_0x13E0A8160525AE55(iLocal_43, 116, false);
		}
	}
	if (func_6(iLocal_40))
	{
		unk_0x4ABEB615D66A01A9(iLocal_40, 1, "Blimp_City", 1);
	}
	unk_0xA5DE74AE39867B03(iLocal_44);
}

void func_17()
{
	vector3 vVar0;
	
	if (func_6(iLocal_40) && unk_0xB2C707E9E3A0E44D(iLocal_40))
	{
		unk_0xF648DB179A6E71BF(iLocal_40);
	}
	func_9(&iLocal_42);
	func_7(&iLocal_43);
	func_4(&iLocal_40);
	unk_0xCACEBBBEAD8F262E(iLocal_41);
	unk_0x5C2A13372076C38C(1, "Blimp_City");
	while (!unk_0x7FC99CCC73354033(iLocal_41) || !unk_0x6F4A062113883115(1, "Blimp_City"))
	{
		wait(0);
	}
	vVar0 = { unk_0x21DE34B4D1F34C71(unk_0x79758BBCB7EA8139(1, "Blimp_City"), 0f) };
	iLocal_40 = unk_0x48CFBECB146FD1A1(iLocal_41, unk_0x0FCF8F11A1DAD1F0(unk_0x79758BBCB7EA8139(1, "Blimp_City"), 0f), vVar0.z, 1, 1, 0);
	unk_0xA5DE74AE39867B03(iLocal_41);
}

void func_18()
{
	if (func_6(iLocal_40) && unk_0xB2C707E9E3A0E44D(iLocal_40))
	{
		unk_0xF648DB179A6E71BF(iLocal_40);
	}
	unk_0xD2BB05DE6C584878(1, "Blimp_city");
	func_9(&iLocal_42);
	func_3(&iLocal_43, 1, 0, 1);
	func_2(&iLocal_40);
	func_2(&iLocal_45);
	unk_0xA5DE74AE39867B03(iLocal_44);
	unk_0xA5DE74AE39867B03(iLocal_41);
	unk_0xA5DE74AE39867B03(iLocal_46);
	unk_0x9BB7BCDF2AC2D6F9(6);
	unk_0x8F1A9FE6D91AAFEB();
}

