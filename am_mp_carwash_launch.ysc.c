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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	char* sLocal_23 = NULL;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 5;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	vector3 vVar3;
	int iVar4;
	
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
	sLocal_23 = "NULL";
	fLocal_26 = 80f;
	fLocal_27 = 140f;
	fLocal_28 = 180f;
	fLocal_31 = 0f;
	fLocal_35 = -0.0375f;
	fLocal_36 = 0.17f;
	iLocal_39 = 3;
	iLocal_43 = 1;
	iLocal_44 = 65;
	iLocal_45 = 49;
	iLocal_46 = 64;
	iVar1 = joaat("carwash1");
	sVar2 = "carwash1";
	vVar3 = { ScriptParam_50.f_1[0 /*3*/] };
	if (unk_0x8B1574454E8C2421(joaat("am_mp_carwash_launch")) > 1)
	{
		unk_0x8F1A9FE6D91AAFEB();
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		unk_0x5341E3E598550C46();
		unk_0x2F3193E06C2EFF44(0);
	}
	else
	{
		unk_0x8F1A9FE6D91AAFEB();
	}
	if (Global_2621550)
	{
		if (unk_0x8B1574454E8C2421(131838674) == 0)
		{
			unk_0x90488A740F13CBEC(131838674);
			while (!unk_0x2106996673968125(131838674))
			{
				wait(0);
			}
			start_new_script_with_name_hash_and_args(131838674, &ScriptParam_50, 23, 1424);
		}
		unk_0x8F1A9FE6D91AAFEB();
	}
	if (func_10(unk_0xA19140A5C42D8715()))
	{
	}
	iVar4 = 0;
	while (iVar4 == 0)
	{
		if ((((func_7(unk_0xD4E735F4B6A956AC(), 1) || func_6()) || !func_5(unk_0xD4E735F4B6A956AC())) || func_4()) || func_2(unk_0xD4E735F4B6A956AC()))
		{
			iVar4 = 0;
		}
		else
		{
			iVar4 = 1;
		}
		wait(0);
	}
	if (vdist2(vVar3, func_1(157)) < vdist2(vVar3, func_1(156)))
	{
		sVar2 = "carwash2";
	}
	iVar0 = unk_0xFD34717937104F1C();
	iVar1 = unk_0xFEB6EEC0545AF7AA(sVar2);
	if (unk_0x8B1574454E8C2421(iVar1) == 0)
	{
		unk_0xD75A4240F0AD8613(sVar2);
		while (!unk_0xB1FDFCECA75CE4A7(sVar2))
		{
			unk_0xD75A4240F0AD8613(sVar2);
			wait(0);
			if (unk_0xFD34717937104F1C() > iVar0 + 20000)
			{
				unk_0x8F1A9FE6D91AAFEB();
			}
		}
		if (unk_0xB1FDFCECA75CE4A7(sVar2))
		{
			start_new_script(sVar2, 1424);
			unk_0x4659F4154D948B01(sVar2);
		}
	}
	unk_0x8F1A9FE6D91AAFEB();
}

Vector3 func_1(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_25834[iVar0 /*23*/][0 /*3*/];
}

int func_2(int iParam0)
{
	if (iParam0 != func_3())
	{
		return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_325, 29);
	}
	return 0;
}

int func_3()
{
	return -1;
}

bool func_4()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 0);
}

bool func_5(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_142, 6);
}

int func_6()
{
	int iVar0;
	
	iVar0 = Global_2437022;
	if (unk_0x05EFB6A616B6FADE(Global_1624218[iVar0 /*38*/].f_14, 0) && Global_1624218[iVar0 /*38*/].f_23 == 2)
	{
		return 1;
	}
	return 0;
}

int func_7(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_8(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589747[iParam0 /*790*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_8(int iParam0)
{
	return func_9(iParam0);
}

bool func_9(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_13.f_1, 0);
}

bool func_10(int iParam0)
{
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 0;
	}
	return !unk_0x7112137033807390(iParam0, 0);
}

