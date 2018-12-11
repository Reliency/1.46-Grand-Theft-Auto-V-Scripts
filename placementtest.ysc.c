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
	int iLocal_45 = 0;
	int iLocal_46 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iVar0 = func_13();
	if (unk_0x5EBD03AF78E7B4DB(3))
	{
		unk_0x8F1A9FE6D91AAFEB();
	}
	while (true)
	{
		if (unk_0x0FA486DE15EB3004(iVar0))
		{
			switch (iLocal_45)
			{
				case 0:
					func_11(&iVar0, "OFFR_BLIP_R5", 255, 0, 255, 255, 0);
					func_10(&iVar0);
					iLocal_46 = unk_0xFD34717937104F1C();
					iLocal_45 = 1;
					break;
				
				case 1:
					if ((unk_0xFD34717937104F1C() - iLocal_46) > 3000)
					{
						func_9(&iVar0);
						iLocal_45 = 2;
					}
					break;
			}
			if (func_1(&iVar0, 0))
			{
			}
		}
		wait(0);
	}
}

int func_1(int iParam0, bool bParam1)
{
	if (!func_8(&(iParam0->f_2)))
	{
		func_6(&(iParam0->f_2));
	}
	unk_0xD8C147DA332E7F06(14);
	unk_0x0A74F1E9CF777638(1);
	unk_0x84829313FB8AC81C(*iParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
	if (bParam1)
	{
		if (unk_0xD73B1037F6BD4B90(2, 201))
		{
			return 0;
		}
	}
	if (iParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_3(&(iParam0->f_2)) * 1000f) > to_float(iParam0->f_1)
	{
		func_2(&(iParam0->f_2));
		return 0;
	}
	return 1;
}

void func_2(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_3(var uParam0)
{
	if (func_8(uParam0))
	{
		if (func_5(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_4(unk_0x05EFB6A616B6FADE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_4(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = to_float(unk_0xFD34717937104F1C());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		iVar2 = unk_0xFFCC7EBF88BDEE54();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(unk_0xFD34717937104F1C()) / 1000f);
}

bool func_5(var uParam0)
{
	return unk_0x05EFB6A616B6FADE(*uParam0, 2);
}

void func_6(int iParam0)
{
	func_7(iParam0, 0f);
}

void func_7(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_4(unk_0x05EFB6A616B6FADE(*iParam0, 4)) - fParam1);
	unk_0x2BCFB39E86340DAA(iParam0, 1);
	unk_0xFA57C719261AA55D(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_8(var uParam0)
{
	return unk_0x05EFB6A616B6FADE(*uParam0, 1);
}

void func_9(int iParam0)
{
	iParam0->f_1 = 300;
	func_6(&(iParam0->f_2));
	unk_0x31A9E530D137684F(*iParam0, "SPLASH_TEXT_TRANSITION_OUT");
	unk_0x380580A1A1667F69(300);
	unk_0x271C1332F482646C();
}

void func_10(int iParam0)
{
	unk_0x31A9E530D137684F(*iParam0, "SPLASH_TEXT_TRANSITION_IN");
	unk_0x271C1332F482646C();
}

void func_11(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	iParam0->f_1 = -1;
	unk_0x31A9E530D137684F(*iParam0, "SPLASH_TEXT_LABEL");
	func_12(sParam1);
	unk_0x380580A1A1667F69(iParam2);
	unk_0x380580A1A1667F69(iParam3);
	unk_0x380580A1A1667F69(iParam4);
	unk_0x380580A1A1667F69(iParam5);
	unk_0x271C1332F482646C();
	if (bParam6)
	{
		unk_0x31A9E530D137684F(*iParam0, "SPLASH_TEXT_TRANSITION_IN");
		unk_0x271C1332F482646C();
	}
}

void func_12(char* sParam0)
{
	unk_0x390B339C943A8A54(sParam0);
	unk_0xD481829E3E36543B();
}

int func_13()
{
	return unk_0xB00CD6895BDB01A0("SPLASH_TEXT");
}

