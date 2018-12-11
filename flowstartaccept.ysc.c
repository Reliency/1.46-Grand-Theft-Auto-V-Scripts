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
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
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
	if (unk_0x5EBD03AF78E7B4DB(83))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0x47C01C0E6F4C1D06()) && unk_0x00803257AB511F65())
	{
		unk_0x65227735B3827631(true);
		if (!unk_0x71364F510A1CB69F())
		{
			if (!unk_0x607776744A243309())
			{
				unk_0x9662BE461F9FDF9E(800);
			}
		}
		iLocal_20 = unk_0xB00CD6895BDB01A0("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = unk_0xB00CD6895BDB01A0("INSTRUCTIONAL_BUTTONS");
		while (!unk_0x0FA486DE15EB3004(iLocal_20) || !unk_0x0FA486DE15EB3004(iLocal_21))
		{
			wait(0);
		}
		unk_0x31A9E530D137684F(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0x271C1332F482646C();
		unk_0x31A9E530D137684F(iLocal_21, "SET_DATA_SLOT_EMPTY");
		unk_0x271C1332F482646C();
		unk_0x31A9E530D137684F(iLocal_21, "SET_DATA_SLOT");
		unk_0x380580A1A1667F69(0);
		func_4(unk_0x7391BCD755BD8577(2, 201, true));
		func_5("HUD_CONTINUE");
		unk_0x271C1332F482646C();
		unk_0x31A9E530D137684F(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x233A5B4A35140C6B(false);
		unk_0x271C1332F482646C();
		while (!unk_0x71364F510A1CB69F())
		{
			wait(0);
		}
		unk_0x3F79D277EE09D761();
		while (!iLocal_22)
		{
			unk_0xE75DF14D630B12F9();
			unk_0x0A74F1E9CF777638(7);
			unk_0xE9F9BA9108F437C7(iLocal_20, 255, 255, 255, 0, 0);
			unk_0xE9F9BA9108F437C7(iLocal_21, 255, 255, 255, 0, 0);
			if (unk_0xD73B1037F6BD4B90(2, 201))
			{
				iLocal_22 = 1;
			}
			wait(0);
		}
		unk_0x65227735B3827631(false);
		func_3(1, 1);
		func_1();
	}
	Global_71474.f_1 = 0;
	unk_0x2BCFB39E86340DAA(&(Global_106070.f_9988.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_93271.f_8)
	{
		if (Global_93271.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_93271.f_10 > 1)
	{
		return 0;
	}
	Global_93271.f_10++;
	return 1;
}

bool func_2(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_93271.f_7 = iParam0;
	Global_93271.f_8 = iParam1;
}

void func_4(char* sParam0)
{
	unk_0x0BAAED7962F122D5(sParam0);
}

void func_5(char* sParam0)
{
	unk_0x390B339C943A8A54(sParam0);
	unk_0xD481829E3E36543B();
}

void func_6()
{
	if (iLocal_20 != 0)
	{
		unk_0x86795B44CE5FE021(&iLocal_20);
	}
	if (iLocal_21 != 0)
	{
		unk_0x86795B44CE5FE021(&iLocal_21);
	}
	unk_0x0A74F1E9CF777638(4);
	unk_0x65227735B3827631(false);
	unk_0x8F1A9FE6D91AAFEB();
}

