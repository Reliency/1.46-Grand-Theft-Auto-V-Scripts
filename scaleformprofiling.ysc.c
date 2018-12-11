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
	int iLocal_18 = 0;
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
	if (unk_0x71364F510A1CB69F())
	{
		unk_0x70C1F5AA59767FE6(500);
	}
	if (unk_0x5EBD03AF78E7B4DB(3))
	{
		func_2();
	}
	iLocal_18 = unk_0xB00CD6895BDB01A0("scaleform_profiling");
	while (!unk_0x0FA486DE15EB3004(iLocal_18))
	{
		wait(0);
	}
	while (true)
	{
		unk_0x84829313FB8AC81C(iLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(iLocal_18);
		wait(0);
	}
}

void func_1(int iParam0)
{
	if (Global_14492 == 0)
	{
		if (((((((unk_0xD73B1037F6BD4B90(2, 189) || unk_0xD73B1037F6BD4B90(2, 190)) || unk_0xD73B1037F6BD4B90(2, 188)) || unk_0xD73B1037F6BD4B90(2, 187)) || unk_0xD73B1037F6BD4B90(2, 205)) || unk_0xD73B1037F6BD4B90(2, 206)) || unk_0xD73B1037F6BD4B90(2, 201)) || unk_0xD73B1037F6BD4B90(2, 202))
		{
			Global_14492 = 1;
			settimera(0);
		}
	}
	else if (timera() > 50)
	{
		Global_14492 = 0;
	}
	if (Global_14492 == 0)
	{
		if (unk_0xD73B1037F6BD4B90(2, 189))
		{
			unk_0x31A9E530D137684F(iParam0, "SET_INPUT_EVENT");
			unk_0x380580A1A1667F69(10);
			unk_0x271C1332F482646C();
		}
		if (unk_0xD73B1037F6BD4B90(2, 190))
		{
			unk_0x31A9E530D137684F(iParam0, "SET_INPUT_EVENT");
			unk_0x380580A1A1667F69(11);
			unk_0x271C1332F482646C();
		}
		if (unk_0xD73B1037F6BD4B90(2, 205))
		{
			unk_0x31A9E530D137684F(iParam0, "SET_INPUT_EVENT");
			unk_0x380580A1A1667F69(4);
			unk_0x271C1332F482646C();
		}
		if (unk_0xD73B1037F6BD4B90(2, 206))
		{
			unk_0x31A9E530D137684F(iParam0, "SET_INPUT_EVENT");
			unk_0x380580A1A1667F69(6);
			unk_0x271C1332F482646C();
		}
		if (unk_0xD73B1037F6BD4B90(2, 188))
		{
			unk_0x31A9E530D137684F(iParam0, "SET_INPUT_EVENT");
			unk_0x380580A1A1667F69(8);
			unk_0x271C1332F482646C();
		}
		if (unk_0xD73B1037F6BD4B90(2, 187))
		{
			unk_0x31A9E530D137684F(iParam0, "SET_INPUT_EVENT");
			unk_0x380580A1A1667F69(9);
			unk_0x271C1332F482646C();
		}
		if (unk_0xD73B1037F6BD4B90(2, 201))
		{
			unk_0x31A9E530D137684F(iParam0, "SET_INPUT_EVENT");
			unk_0x380580A1A1667F69(16);
			unk_0x271C1332F482646C();
		}
		if (unk_0xD73B1037F6BD4B90(2, 202))
		{
			unk_0x31A9E530D137684F(iParam0, "SET_INPUT_EVENT");
			unk_0x380580A1A1667F69(17);
			unk_0x271C1332F482646C();
		}
	}
}

void func_2()
{
	func_3(0);
	unk_0x62BAB49318F4FE6E(0);
	unk_0x86795B44CE5FE021(&iLocal_18);
	unk_0x8F1A9FE6D91AAFEB();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_9();
		if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
		{
			unk_0x2BCFB39E86340DAA(&Global_2384, 16);
		}
		Global_14513.f_1 = 1;
		if (func_8(0))
		{
			func_4(0);
		}
	}
	else if (Global_14513.f_1 == 1)
	{
		if (!Global_14513.f_1 == 0)
		{
			Global_14513.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (func_7())
	{
		return;
	}
	if (Global_14681)
	{
		func_6(0, 0);
	}
	if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
	{
		unk_0x2BCFB39E86340DAA(&Global_2384, 16);
	}
	if (unk_0xB39808C1DCE0DCFA())
	{
		unk_0xA8B97F91CBDE376C(false);
	}
	Global_15822 = 5;
	if (iParam0 == 1)
	{
		unk_0x2BCFB39E86340DAA(&Global_2383, 30);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_2383, 30);
	}
	if (!func_5())
	{
		Global_14513.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_8(0))
		{
			Global_14681 = 1;
			if (bParam1)
			{
				unk_0x75B4B390EE495A3B(&Global_14450);
			}
			Global_14441 = { Global_14459[Global_14458 /*3*/] };
			unk_0xB8927E9A664047D4(Global_14441);
		}
	}
	else if (Global_14681 == 1)
	{
		Global_14681 = 0;
		Global_14441 = { Global_14466[Global_14458 /*3*/] };
		if (bParam1)
		{
			unk_0xB8927E9A664047D4(Global_14450);
		}
		else
		{
			unk_0xB8927E9A664047D4(Global_14441);
		}
	}
}

bool func_7()
{
	return unk_0x05EFB6A616B6FADE(Global_1678593, 19);
}

int func_8(int iParam0)
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

void func_9()
{
	if (Global_14513.f_1 == 9 || Global_14513.f_1 == 10)
	{
		Global_15875 = 0;
		Global_15871 = 1;
	}
}

