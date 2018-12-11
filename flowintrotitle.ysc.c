#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x5EBD03AF78E7B4DB(83))
	{
		func_10();
	}
	unk_0x27DB513390B59BFA(0);
	unk_0xFA57C719261AA55D(&(Global_106070.f_9988.f_25), 1);
	func_7();
	unk_0x65227735B3827631(true);
	if (!unk_0x71364F510A1CB69F())
	{
		unk_0x9662BE461F9FDF9E(0);
	}
	iLocal_0 = unk_0xB00CD6895BDB01A0("OPENING_CREDITS");
	while (!unk_0x0FA486DE15EB3004(iLocal_0))
	{
		func_7();
		wait(0);
	}
	while (!unk_0x71364F510A1CB69F())
	{
		func_7();
		wait(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (unk_0xFD34717937104F1C() + 8000 + round((2f * 1000f)));
	while (!unk_0x5CA3186381FC012C())
	{
		func_7();
		if (!unk_0x05EFB6A616B6FADE(Global_106070.f_9988.f_25, 1))
		{
			unk_0xE9F9BA9108F437C7(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0xFD34717937104F1C() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0xFD34717937104F1C() + round((2f * 1000f)));
				}
			}
			else if (unk_0xFD34717937104F1C() > iLocal_1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_9988.f_25), 1);
				if (unk_0x00803257AB511F65() || unk_0x47C01C0E6F4C1D06())
				{
					func_4(1, 1);
					func_2();
				}
				else
				{
					func_1();
				}
			}
		}
		wait(0);
	}
	func_10();
}

void func_1()
{
	Global_93271 = 1;
}

int func_2()
{
	if (func_3(0))
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

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_93271.f_7 = iParam0;
	Global_93271.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	unk_0x31A9E530D137684F(iLocal_0, "HIDE_LOGO");
	unk_0x390B339C943A8A54("STRING");
	unk_0xC327C023FDA37F2E(sParam0);
	unk_0xD481829E3E36543B();
	unk_0x271C1332F482646C();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	unk_0x31A9E530D137684F(iLocal_0, "SHOW_LOGO");
	unk_0x390B339C943A8A54("STRING");
	unk_0xC327C023FDA37F2E(sParam0);
	unk_0xD481829E3E36543B();
	unk_0xD8B5988E85F72BE5(fParam1);
	unk_0xD8B5988E85F72BE5(fParam2);
	unk_0xD8B5988E85F72BE5(fParam3);
	unk_0xD8B5988E85F72BE5(fParam4);
	unk_0xD8B5988E85F72BE5(fParam5);
	unk_0xD8B5988E85F72BE5(fParam6);
	unk_0xD8B5988E85F72BE5(fParam7);
	unk_0x271C1332F482646C();
}

void func_7()
{
	unk_0xE75DF14D630B12F9();
	unk_0xD481A812073CCF02(2, 199, 1);
	unk_0x0A74F1E9CF777638(7);
	func_8();
}

void func_8()
{
	unk_0x906EA681A50D5E9C();
	func_9();
}

void func_9()
{
	Global_17228.f_134 = 1;
}

void func_10()
{
	unk_0x2BCFB39E86340DAA(&(Global_106070.f_9988.f_25), 1);
	if (iLocal_0 != 0)
	{
		unk_0x86795B44CE5FE021(&iLocal_0);
	}
	unk_0x0A74F1E9CF777638(4);
	unk_0x65227735B3827631(false);
	unk_0x27DB513390B59BFA(1);
	unk_0x8F1A9FE6D91AAFEB();
}

