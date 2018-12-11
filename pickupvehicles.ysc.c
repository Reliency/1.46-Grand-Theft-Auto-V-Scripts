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
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
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
	func_4(21);
	if (unk_0x5EBD03AF78E7B4DB(18))
	{
		if (unk_0x8D0F8E1E4961E86D() == 16)
		{
			func_3(21);
		}
		func_2();
	}
	while (true)
	{
		wait(0);
		if (unk_0x8B1574454E8C2421(joaat("docks_setup")) == 0)
		{
			if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
			{
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					iLocal_28 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
				}
				else
				{
					iLocal_28 = 0;
				}
			}
			if (unk_0xDC5D81351D6A4DDB(iLocal_28))
			{
				if (unk_0x1095F403F52B42E1(iLocal_28, 0))
				{
					if (unk_0xD3C4AB5E628133C1(iLocal_28, joaat("handler")))
					{
						unk_0x9EA8CBEA7355649E(0, 51);
						if (!unk_0x482329CCE77EE139(iLocal_28))
						{
							if (iLocal_32 == 0)
							{
								if (!unk_0xDC5D81351D6A4DDB(iLocal_29) || (unk_0xDC5D81351D6A4DDB(iLocal_29) && unk_0x78CED56884DEF3D7(unk_0xE2BBD32891C18569(iLocal_28, true), 15f, 874602658, 1, 0, 1) != iLocal_29))
								{
									iLocal_29 = unk_0x78CED56884DEF3D7(unk_0xE2BBD32891C18569(iLocal_28, true), 15f, 874602658, 1, 0, 1);
								}
								if (unk_0xDC5D81351D6A4DDB(iLocal_29))
								{
									if (func_1(&iLocal_30, 1000))
									{
										if (unk_0xABB119D53CAC0F32(iLocal_28, iLocal_29))
										{
											if (unk_0xDF0ADAD7E584090D(0, 51))
											{
												unk_0x93594EB822DFAE57(iLocal_28, iLocal_29);
												iLocal_31 = 1;
												iLocal_32 = 1;
											}
										}
									}
								}
							}
						}
						else
						{
							if (iLocal_31 == 1)
							{
								iLocal_30 = unk_0xFD34717937104F1C();
								iLocal_31 = 0;
								iLocal_32 = 0;
							}
							if (unk_0xDF0ADAD7E584090D(0, 51))
							{
							}
						}
					}
				}
			}
		}
	}
}

int func_1(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xFD34717937104F1C();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0x8F1A9FE6D91AAFEB();
}

int func_3(int iParam0)
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
		return 0;
	}
	unk_0x2BCFB39E86340DAA(&(Global_106070.f_9057.f_99.f_219[iVar0]), iVar1);
	return 1;
}

