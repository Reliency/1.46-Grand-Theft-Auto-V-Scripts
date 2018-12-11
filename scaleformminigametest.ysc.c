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
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	bool bLocal_23 = 0;
	bool bLocal_24 = 0;
	float fLocal_25 = 0f;
	bool bLocal_26 = 0;
	bool bLocal_27 = 0;
	float fLocal_28 = 0f;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	float fLocal_31 = 0f;
	bool bLocal_32 = 0;
	bool bLocal_33 = 0;
	float fLocal_34 = 0f;
	bool bLocal_35 = 0;
	bool bLocal_36 = 0;
	float fLocal_37 = 0f;
	bool bLocal_38 = 0;
	bool bLocal_39 = 0;
	float fLocal_40 = 0f;
	bool bLocal_41 = 0;
	bool bLocal_42 = 0;
	float fLocal_43 = 0f;
	bool bLocal_44 = 0;
	bool bLocal_45 = 0;
	float fLocal_46 = 0f;
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
	iLocal_20 = unk_0xA70969818F182A36(100f, 100f, 30f);
	iLocal_22 = 1;
	fLocal_25 = 0f;
	fLocal_28 = 0f;
	fLocal_31 = 0f;
	fLocal_34 = 0f;
	fLocal_37 = 0f;
	fLocal_40 = 0f;
	fLocal_43 = 0f;
	fLocal_46 = 0f;
	if (unk_0x71364F510A1CB69F())
	{
		unk_0x70C1F5AA59767FE6(500);
	}
	if (unk_0x5EBD03AF78E7B4DB(3))
	{
		func_2();
	}
	iLocal_18 = unk_0xB00CD6895BDB01A0("p_bubblegum");
	while (!unk_0x0FA486DE15EB3004(iLocal_18))
	{
		wait(0);
	}
	while (true)
	{
		if (iLocal_21 == 1)
		{
		}
		if (iLocal_22 == 1)
		{
			iLocal_22 = 0;
			iLocal_19 = unk_0x57FC10C74CC15F22("DEFAULT_SCRIPTED_CAMERA", true);
			if (unk_0x37B568B777BC65F9(iLocal_19))
			{
				unk_0x1D7183E3760DB4E5(iLocal_19, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				unk_0x6F05C2B0A1DB4CAA(iLocal_19, 0.01f);
				unk_0x87D780D3C0F65A0D(iLocal_19, 0.02f);
				unk_0x8E88E73F74A9FF79(true, false, 3000, 1, 0, 0);
			}
			unk_0x7DB79A42AADE120F(iLocal_20, 66);
		}
		iLocal_21 = 1;
		unk_0x84829313FB8AC81C(iLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(iLocal_18);
		wait(0);
	}
}

void func_1(int iParam0)
{
	if (Global_14492 == 0)
	{
		if (unk_0xD73B1037F6BD4B90(2, 189) || unk_0xD73B1037F6BD4B90(2, 190))
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
		if (unk_0xDF0ADAD7E584090D(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (unk_0xD73B1037F6BD4B90(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (!unk_0xD73B1037F6BD4B90(2, 189))
		{
			bLocal_23 = false;
			fLocal_25 = 0f;
		}
		if (!bLocal_23 == bLocal_24)
		{
			bLocal_24 = bLocal_23;
			unk_0x31A9E530D137684F(iParam0, "SET_INPUT_EVENT");
			unk_0x380580A1A1667F69(10);
			unk_0xD8B5988E85F72BE5(fLocal_25);
			unk_0x271C1332F482646C();
		}
		if (unk_0xDF0ADAD7E584090D(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (unk_0xD73B1037F6BD4B90(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (!unk_0xD73B1037F6BD4B90(2, 190))
		{
			bLocal_26 = false;
			fLocal_28 = 0f;
		}
		if (!bLocal_26 == bLocal_27)
		{
			bLocal_27 = bLocal_26;
			unk_0x31A9E530D137684F(iParam0, "SET_INPUT_EVENT");
			unk_0x380580A1A1667F69(11);
			unk_0xD8B5988E85F72BE5(fLocal_28);
			unk_0x271C1332F482646C();
		}
		if (unk_0xDF0ADAD7E584090D(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (unk_0xD73B1037F6BD4B90(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (!unk_0xD73B1037F6BD4B90(2, 188))
		{
			bLocal_29 = false;
			fLocal_31 = 0f;
		}
		if (!bLocal_29 == bLocal_30)
		{
			bLocal_30 = bLocal_29;
			unk_0x31A9E530D137684F(iParam0, "SET_INPUT_EVENT");
			unk_0x380580A1A1667F69(8);
			unk_0xD8B5988E85F72BE5(fLocal_31);
			unk_0x271C1332F482646C();
		}
		if (unk_0xDF0ADAD7E584090D(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (unk_0xD73B1037F6BD4B90(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (!unk_0xD73B1037F6BD4B90(2, 187))
		{
			bLocal_32 = false;
			fLocal_34 = 0f;
		}
		if (!bLocal_32 == bLocal_33)
		{
			bLocal_33 = bLocal_32;
			unk_0x31A9E530D137684F(iParam0, "SET_INPUT_EVENT");
			unk_0x380580A1A1667F69(9);
			unk_0xD8B5988E85F72BE5(fLocal_34);
			unk_0x271C1332F482646C();
		}
		if (unk_0xDF0ADAD7E584090D(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (unk_0xD73B1037F6BD4B90(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (!unk_0xD73B1037F6BD4B90(2, 202))
		{
			bLocal_35 = false;
			fLocal_37 = 0f;
		}
		if (!bLocal_35 == bLocal_36)
		{
			bLocal_36 = bLocal_35;
			unk_0x31A9E530D137684F(iParam0, "SET_INPUT_EVENT");
			unk_0x380580A1A1667F69(17);
			unk_0xD8B5988E85F72BE5(fLocal_37);
			unk_0x271C1332F482646C();
		}
		if (unk_0xDF0ADAD7E584090D(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (unk_0xD73B1037F6BD4B90(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (!unk_0xD73B1037F6BD4B90(2, 204))
		{
			bLocal_38 = false;
			fLocal_40 = 0f;
		}
		if (!bLocal_38 == bLocal_39)
		{
			bLocal_39 = bLocal_38;
			unk_0x31A9E530D137684F(iParam0, "SET_INPUT_EVENT");
			unk_0x380580A1A1667F69(15);
			unk_0xD8B5988E85F72BE5(fLocal_40);
			unk_0x271C1332F482646C();
		}
		if (unk_0xDF0ADAD7E584090D(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (unk_0xD73B1037F6BD4B90(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (!unk_0xD73B1037F6BD4B90(2, 201))
		{
			bLocal_41 = false;
			fLocal_43 = 0f;
		}
		if (!bLocal_41 == bLocal_42)
		{
			bLocal_42 = bLocal_41;
			unk_0x31A9E530D137684F(iParam0, "SET_INPUT_EVENT");
			unk_0x380580A1A1667F69(16);
			unk_0xD8B5988E85F72BE5(fLocal_43);
			unk_0x271C1332F482646C();
		}
		if (unk_0xDF0ADAD7E584090D(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (unk_0xD73B1037F6BD4B90(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (!unk_0xD73B1037F6BD4B90(2, 203))
		{
			bLocal_44 = false;
			fLocal_46 = 0f;
		}
		if (!bLocal_44 == bLocal_45)
		{
			bLocal_45 = bLocal_44;
			unk_0x31A9E530D137684F(iParam0, "SET_INPUT_EVENT");
			unk_0x380580A1A1667F69(14);
			unk_0xD8B5988E85F72BE5(fLocal_46);
			unk_0x271C1332F482646C();
		}
	}
}

void func_2()
{
	if (unk_0x37B568B777BC65F9(iLocal_19))
	{
		unk_0x77F0486CE0E598D5(iLocal_19, 0);
	}
	unk_0x8E88E73F74A9FF79(false, false, 3000, 1, 0, 0);
	func_3(0);
	unk_0x62BAB49318F4FE6E(0);
	unk_0x135C61E339DABBAC(1);
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

