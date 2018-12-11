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
	if (unk_0x5EBD03AF78E7B4DB(67))
	{
		if (unk_0x8D0F8E1E4961E86D() != 2)
		{
			func_4(19);
		}
		func_3();
	}
	func_2(19);
	unk_0x789152CB302E8726(1);
	while (!unk_0xBEB81D4750DEAFA3("CONSTRUCTION_SITE_STREAM", "FBI_HEIST_SOUNDSET"))
	{
		wait(0);
	}
	unk_0xF885A9A66174A6CA(-147f, -1005f, 28f);
	while (func_1(70))
	{
		wait(0);
	}
	func_4(19);
	func_3();
}

int func_1(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106070.f_9057.f_99.f_58[iParam0];
}

int func_2(int iParam0)
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

void func_3()
{
	unk_0x19A6703D21831D53();
	unk_0xE2D61CA2ABDF4B17();
	unk_0x8F1A9FE6D91AAFEB();
}

int func_4(int iParam0)
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

