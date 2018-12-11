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
	int iLocal_19[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	struct<16> Local_34 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_35[59];
	struct<16> Local_36[59];
	int iLocal_37 = 0;
	vector3 vLocal_38 = { 0f, 0f, 0f };
	vector3 vLocal_39 = { 0f, 0f, 0f };
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	bool bLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<314> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	unk_0x5341E3E598550C46();
	if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) == 0)
	{
		func_56();
	}
	func_55();
	Global_16888 = 0;
	Global_106070.f_14023[Global_14513 /*20*/].f_18 = 0;
	Global_14680 = 0;
	func_54();
	func_53(Global_14494, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_48();
	func_46();
	if (Global_14513.f_1 > 3)
	{
		Global_14513.f_1 = 7;
	}
	iLocal_31 = unk_0xFD34717937104F1C();
	Global_14517 = 0;
	unk_0x75B4B390EE495A3B(&vLocal_39);
	vLocal_38 = { vLocal_39 };
	vLocal_38.x = (vLocal_38.x - 10f);
	vLocal_38.y = (vLocal_38.y + 20f);
	Global_16855 = 0;
	Global_16856 = 1;
	while (true)
	{
		wait(0);
		if (Global_16856 == 0 && Global_16855 == 1)
		{
			func_45();
		}
		if (Global_16856 == 1 && Global_16855 == 0)
		{
			func_40();
		}
		if (iLocal_30 == 0)
		{
			iLocal_32 = unk_0xFD34717937104F1C();
			if ((iLocal_32 - iLocal_31) > 500)
			{
				iLocal_30 = 1;
			}
		}
		if ((Global_14513.f_1 != 9 && Global_16856 == 0) && Global_16855 == 0)
		{
			switch (Global_14513.f_1)
			{
				case 7:
					if (Global_16888 == 0)
					{
						if (Global_2534145 == 0)
						{
							func_39();
							func_32();
						}
					}
					break;
				
				case 8:
					if (Global_16888 == 1)
					{
						func_11();
						func_5();
					}
					break;
				
				default:
					break;
			}
			if (Global_16888 == 0)
			{
				if (func_4())
				{
					Global_16855 = 1;
				}
			}
			else if (func_3(2, Global_14481, 0) || unk_0x05EFB6A616B6FADE(Global_2384, 12))
			{
				if (unk_0x3CAC2741CC1A631F(&(Global_4267065[iLocal_24 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					wait(0);
					unk_0xFA57C719261AA55D(&Global_2384, 12);
					func_2();
					Global_14491 = 1;
					Global_16888 = 0;
					if (Global_14513.f_1 > 3)
					{
						Global_14513.f_1 = 7;
					}
					if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) == 0)
					{
						func_56();
					}
					func_53(Global_14494, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_48();
					func_46();
					if (Global_4267065[iLocal_24 /*104*/].f_29 > 0)
					{
						if (Global_4267065[iLocal_24 /*104*/].f_31 == 1)
						{
							Global_4267065[iLocal_24 /*104*/].f_29 = 4;
							Global_4267065[iLocal_24 /*104*/].f_24 = 1;
						}
						else
						{
							Global_4267065[iLocal_24 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) == 0)
		{
			func_56();
		}
		if (func_1())
		{
			func_56();
		}
	}
}

int func_1()
{
	if (((Global_14513.f_1 == 1 || Global_14513.f_1 == 3) || Global_14513.f_1 == 0) || Global_14457 == 1)
	{
		Global_14500 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0xE11F00B4AC919F45(-1, "Menu_Back", &Global_14502, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xDF0ADAD7E584090D(iParam0, iParam1) || (iParam2 == 1 && unk_0x53E955948D35BDB5(iParam0, iParam1)))
	{
		if (unk_0x47C01C0E6F4C1D06())
		{
			if (unk_0xDE59CE76013B1621() == 0 || (unk_0x2B21DC45DEAA4B80() && unk_0x0B9F814BC8D14042(2)))
			{
				return 0;
			}
		}
		if (unk_0xD1ABB20CFF127CCC() || unk_0x4EAEDDFEDE3BEE19())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_4()
{
	if (Global_2989 == 1 || Global_14513.f_1 < 7)
	{
		Global_14500 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	if (iLocal_27)
	{
		if (timera() > 50)
		{
			iLocal_27 = 0;
		}
	}
	if (unk_0x0B9F814BC8D14042(2))
	{
		if (func_3(2, 181, 0))
		{
			func_9();
		}
		if (func_3(2, 180, 0))
		{
			func_6();
		}
	}
	if (iLocal_27 == 0)
	{
		if (func_3(2, Global_14489, 0))
		{
			func_9();
			iLocal_27 = 1;
			settimera(0);
		}
		if (func_3(2, Global_14490, 0))
		{
			func_6();
			iLocal_27 = 1;
			settimera(0);
		}
	}
}

void func_6()
{
	func_53(Global_14494, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xE11F00B4AC919F45(-1, "Menu_Navigate", &Global_14502, 1);
	func_7();
}

void func_7()
{
	if (func_8())
	{
		if (Global_14686 == 0)
		{
			unk_0xD1DF8842C4808642(2);
		}
		else
		{
			unk_0xD1DF8842C4808642(1);
		}
	}
}

int func_8()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71205)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x9F302D755A846102();
	iVar1 = unk_0x1F7BAD75218F1A2C(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4268544 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_9()
{
	func_53(Global_14494, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xE11F00B4AC919F45(-1, "Menu_Navigate", &Global_14502, 1);
	func_10();
}

void func_10()
{
	if (func_8())
	{
		if (Global_14686 == 0)
		{
			unk_0xD1DF8842C4808642(1);
		}
		else
		{
			unk_0xD1DF8842C4808642(2);
		}
	}
}

void func_11()
{
	func_12();
}

void func_12()
{
	if (Global_4267065[iLocal_24 /*104*/].f_24 == 1)
	{
		if (Global_14491 == 0)
		{
			if (unk_0xD73B1037F6BD4B90(2, Global_14484))
			{
				func_2();
				Global_14491 = 1;
				func_26();
				if (Global_4267065[iLocal_24 /*104*/].f_27 == 1)
				{
					Global_4267065[iLocal_24 /*104*/].f_99[0] = 0;
					Global_4267065[iLocal_24 /*104*/].f_99[1] = 0;
					Global_4267065[iLocal_24 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_4267065[iLocal_24 /*104*/].f_99[Global_14513] = 0;
				}
				if (func_25(iLocal_24))
				{
				}
				else
				{
					Global_4267065[iLocal_24 /*104*/].f_24 = 0;
					Global_4267065[iLocal_24 /*104*/].f_28 = 0;
				}
				unk_0xDB2661401914B2FA(Global_4267065[iLocal_24 /*104*/].f_16);
				func_53(Global_14494, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_48();
				if (iLocal_22 > 0)
				{
					iLocal_22 = (iLocal_22 - 1);
				}
				func_46();
				if (Global_14513.f_1 > 3)
				{
					Global_14513.f_1 = 7;
					Global_16888 = 0;
				}
			}
		}
	}
	else if (Global_14491 == 0)
	{
		if (unk_0xD73B1037F6BD4B90(2, Global_14485))
		{
			if (iLocal_26 == 1)
			{
				if (Global_14513.f_1 > 3)
				{
					StringCopy(&Global_68478, unk_0x08791BD93D5986C6(&Global_16863), 64);
					if (unk_0x3CAC2741CC1A631F(&Global_68478, "HARDCODED_4207156"))
					{
						Global_14513.f_1 = 3;
						Global_1684995 = 1;
					}
					else
					{
						Global_68607 = 7;
						unk_0x2BCFB39E86340DAA(&Global_2384, 10);
						Global_14513.f_1 = 6;
					}
				}
				func_56();
			}
		}
	}
	if (Global_4267065[iLocal_24 /*104*/].f_31 == 1)
	{
		if (Global_14491 == 0)
		{
			if (func_3(2, Global_14485, 0))
			{
				func_23();
				Global_14491 = 1;
				Global_4267065[iLocal_24 /*104*/].f_29 = 2;
				Global_4267065[iLocal_24 /*104*/].f_24 = 1;
				Global_4267065[iLocal_24 /*104*/].f_31 = 0;
				unk_0xFA57C719261AA55D(&Global_2383, 17);
				Global_16888 = 0;
				if (Global_14513.f_1 > 3)
				{
					Global_14513.f_1 = 7;
				}
				func_53(Global_14494, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_48();
				func_46();
			}
		}
	}
	if (Global_14491 == 0 && iLocal_30 == 1)
	{
		if (func_3(2, Global_14482, 0))
		{
			Global_14491 = 1;
			if (Global_4267065[iLocal_24 /*104*/].f_29 > 0)
			{
				func_23();
				Global_4267065[iLocal_24 /*104*/].f_29 = 3;
				Global_4267065[iLocal_24 /*104*/].f_24 = 1;
				Global_16888 = 0;
				if (Global_14513.f_1 > 3)
				{
					Global_14513.f_1 = 7;
				}
				func_53(Global_14494, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_48();
				func_46();
			}
			else if (Global_4267065[iLocal_24 /*104*/].f_30 == 1)
			{
				func_23();
				Global_1698 = 144;
				if (Global_14513.f_1 > 3)
				{
					Global_14513.f_1 = 10;
					func_21();
				}
				func_20("appContacts");
				Global_14511 = start_new_script("appContacts", 4000);
				unk_0x4659F4154D948B01("appContacts");
				Global_1698 = Global_4267065[iLocal_24 /*104*/].f_17;
				if (Global_106070.f_28022[Global_1698 /*29*/].f_24[Global_14513] == 0)
				{
					func_19(Global_14494, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_1698 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_19(Global_14494, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_106070.f_28022[Global_1698 /*29*/].f_3), &(Global_106070.f_28022[Global_1698 /*29*/].f_7), "CELL_211", &(Global_106070.f_28022[Global_1698 /*29*/].f_3), 0);
				}
				func_13();
				func_56();
			}
		}
	}
}

void func_13()
{
	vector3 vVar0[24];
	
	if (Global_14496 == 1)
	{
		return;
	}
	if (Global_14513.f_1 < 4)
	{
		return;
	}
	while (!unk_0x0FA486DE15EB3004(Global_14494))
	{
		wait(0);
	}
	switch (Global_14513.f_1)
	{
		case 6:
			func_53(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_17(Global_2988);
			if (Global_2988 == 1)
			{
				func_53(Global_14494, "DISPLAY_VIEW", 1f, to_float(Global_14517), -1082130432, -1082130432, -1082130432);
				Global_14493 = Global_14517;
			}
			else
			{
				func_53(Global_14494, "DISPLAY_VIEW", 1f, to_float(Global_14518), -1082130432, -1082130432, -1082130432);
				Global_14493 = Global_14518;
			}
			if (Global_14501)
			{
				func_19(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_19(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_19(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14683 == 0)
			{
				func_19(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xFA57C719261AA55D(&Global_2383, 17);
			}
			else if (Global_71205)
			{
				func_19(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xFA57C719261AA55D(&Global_2383, 17);
			}
			else
			{
				if (Global_14682 == 1)
				{
					if (Global_14501)
					{
						func_19(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14501)
				{
					func_19(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_19(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x2BCFB39E86340DAA(&Global_2383, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_53(Global_14494, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_19(Global_14494, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_19(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xFA57C719261AA55D(&Global_2383, 17);
			if (unk_0x05EFB6A616B6FADE(Global_2383, 20))
			{
				func_19(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14501)
			{
				func_19(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14456)
				{
					func_19(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_19(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14512 == 1)
			{
				func_16();
				func_53(Global_14494, "SET_THEME", to_float(Global_106070.f_14023[Global_14513 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15835)
				{
					unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
					unk_0x380580A1A1667F69(4);
					unk_0x380580A1A1667F69(0);
					unk_0x380580A1A1667F69(2);
					unk_0x390B339C943A8A54("CELL_CONDFON");
					unk_0xC327C023FDA37F2E(&Global_15837);
					unk_0xD481829E3E36543B();
					func_15("CELL_300");
					func_15("CELL_217");
					func_15("CELL_217");
					unk_0x271C1332F482646C();
				}
				else if (Global_106070.f_28022[Global_1698 /*29*/].f_24[Global_14513] == 0)
				{
					func_19(Global_14494, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_1698 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_19(Global_14494, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_106070.f_28022[Global_1698 /*29*/].f_3), &(Global_106070.f_28022[Global_1698 /*29*/].f_7), "CELL_217", &(Global_106070.f_28022[Global_1698 /*29*/].f_3), 0);
				}
				func_53(Global_14494, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15822 == 4 || Global_15822 == 3)
			{
				func_53(Global_14494, "SET_THEME", to_float(Global_106070.f_14023[Global_14513 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_16();
				if (Global_15835)
				{
					unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
					unk_0x380580A1A1667F69(4);
					unk_0x380580A1A1667F69(0);
					unk_0x380580A1A1667F69(2);
					unk_0x390B339C943A8A54("CELL_CONDFON");
					unk_0xC327C023FDA37F2E(&Global_15837);
					unk_0xD481829E3E36543B();
					func_15("CELL_300");
					func_15("CELL_219");
					func_15("CELL_219");
					unk_0x271C1332F482646C();
				}
				else
				{
					if (Global_16080)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_106070.f_28022[Global_1698 /*29*/].f_24[Global_14513] == 0)
					{
						func_53(Global_14494, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_19(Global_14494, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_1698 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_53(Global_14494, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_19(Global_14494, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_106070.f_28022[Global_1698 /*29*/].f_3), &(Global_106070.f_28022[Global_1698 /*29*/].f_7), &cVar0, &(Global_106070.f_28022[Global_1698 /*29*/].f_3), 0);
					}
				}
				func_53(Global_14494, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_14();
			break;
		
		default:
			break;
	}
}

void func_14()
{
	if (unk_0x0FA486DE15EB3004(Global_14494))
	{
		if (Global_14512 == 1)
		{
			if (Global_14501)
			{
				func_19(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15869)
			{
				func_19(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0x05EFB6A616B6FADE(Global_2383, 20))
			{
				func_19(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14501)
			{
				func_19(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xFA57C719261AA55D(&Global_2383, 17);
		}
		else
		{
			func_19(Global_14494, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_19(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xFA57C719261AA55D(&Global_2383, 17);
			if (unk_0x05EFB6A616B6FADE(Global_2383, 20))
			{
				func_19(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14501)
			{
				func_19(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14456)
				{
					func_19(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_19(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_15(char* sParam0)
{
	unk_0x390B339C943A8A54(sParam0);
	unk_0xD481829E3E36543B();
}

void func_16()
{
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		if (Global_14513 == 0)
		{
			switch (Global_106070.f_14023[Global_14513 /*20*/].f_6)
			{
				case 1:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 0);
					break;
				
				case 2:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 1);
					break;
				
				case 3:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 2);
					break;
				
				case 4:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 3);
					break;
				
				case 5:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 4);
					break;
				
				case 6:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 5);
					break;
				
				case 7:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14513 == 1)
		{
			switch (Global_106070.f_14023[Global_14513 /*20*/].f_6)
			{
				case 1:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 6);
					break;
				
				case 2:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 0);
					break;
				
				case 3:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 1);
					break;
				
				case 4:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 2);
					break;
				
				case 5:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 3);
					break;
				
				case 6:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 4);
					break;
				
				case 7:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14513 == 2)
		{
			switch (Global_106070.f_14023[Global_14513 /*20*/].f_6)
			{
				case 1:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 5);
					break;
				
				case 2:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 6);
					break;
				
				case 3:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 1);
					break;
				
				case 4:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 0);
					break;
				
				case 5:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 2);
					break;
				
				case 6:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 3);
					break;
				
				case 7:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14513 == 3)
		{
			switch (Global_4268542)
			{
				case 1:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 0);
					break;
				
				case 2:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 1);
					break;
				
				case 3:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 2);
					break;
				
				case 4:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 3);
					break;
				
				case 5:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 4);
					break;
				
				case 6:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 5);
					break;
				
				case 7:
					unk_0x31827365ACA7537D(unk_0xD4E735F4B6A956AC(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_16890 = 0;
	Global_2988 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2952[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_18(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2390[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2390[iVar1 /*15*/].f_4)
					{
						if (Global_2952[iVar0] == 0)
						{
							Global_2916[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x05EFB6A616B6FADE(Global_2384, 3))
								{
									iVar2 = 42;
									Global_14685 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14685 = 0;
								}
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_15(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(iVar2);
								unk_0x271C1332F482646C();
							}
							if (Global_2458186)
							{
								if (iVar1 == 14)
								{
									func_19(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2952[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2390[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2390[iVar1 /*15*/].f_4)
					{
						if (Global_2952[iVar0] == 0)
						{
							Global_2916[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_106070.f_14113[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_106070.f_14113[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_106070.f_14113[iVar3 /*104*/].f_99[Global_14513] == 1)
											{
												Global_16890++;
											}
										}
									}
									iVar3++;
								}
								func_19(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(Global_16890), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_71205)
								{
									iVar4 = 0;
									iVar4 = Global_4267064;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4267065[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4267065[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4267065[iVar5 /*104*/].f_99[Global_14513] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_19(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14513)
									{
										case 0:
											iVar6 = Global_37276;
											break;
										
										case 1:
											iVar6 = Global_37277;
											break;
										
										case 2:
											iVar6 = Global_37278;
											break;
										
										default:
											break;
									}
									func_19(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_19(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_15(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(Global_2389);
								unk_0x271C1332F482646C();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x05EFB6A616B6FADE(Global_2384, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_15(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(iVar7);
								unk_0x271C1332F482646C();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x05EFB6A616B6FADE(Global_2384, 3))
								{
									iVar8 = 42;
									Global_14685 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14685 = 0;
								}
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_15(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(iVar8);
								unk_0x271C1332F482646C();
							}
							else if (iVar1 == 8)
							{
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_15(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(42);
								unk_0x271C1332F482646C();
							}
							else if ((iVar1 == 23 && unk_0x3CAC2741CC1A631F(&(Global_2390[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x05EFB6A616B6FADE(Global_2384, 6))
							{
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_15(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(42);
								unk_0x271C1332F482646C();
							}
							else if (Global_2390[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1624079.f_1;
								func_19(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_19(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2952[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_18(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_19(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x31A9E530D137684F(iParam0, sParam1);
	unk_0x380580A1A1667F69(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam6));
	}
	if (!unk_0x429D45A6C6520026(sParam7))
	{
		func_15(sParam7);
	}
	if (!unk_0x429D45A6C6520026(sParam8))
	{
		func_15(sParam8);
	}
	if (!unk_0x429D45A6C6520026(sParam9))
	{
		func_15(sParam9);
	}
	if (!unk_0x429D45A6C6520026(sParam10))
	{
		func_15(sParam10);
	}
	if (!unk_0x429D45A6C6520026(sParam11))
	{
		func_15(sParam11);
	}
	unk_0x271C1332F482646C();
}

void func_20(char* sParam0)
{
	unk_0xD75A4240F0AD8613(sParam0);
	while (!unk_0xB1FDFCECA75CE4A7(sParam0))
	{
		wait(0);
	}
}

void func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (func_22() && unk_0xCCB06FD56E3262CF(unk_0xA19140A5C42D8715(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_71205)
	{
		if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && iVar1 == 0)
		{
			iVar2 = unk_0xD1241BB51B6FE6DA(unk_0xA19140A5C42D8715(), 0);
			if (Global_71205)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0xE5862BC166DAD032(unk_0xA19140A5C42D8715()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0xE5862BC166DAD032(unk_0xA19140A5C42D8715()))
			{
				iVar0 = 1;
			}
			if (!Global_14456)
			{
				if (Global_1698 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
						{
							if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
							{
							}
							else
							{
								if (Global_71205)
								{
									unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 244, false);
									unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 243, false);
									unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 242, false);
								}
								unk_0x2BCFB39E86340DAA(&Global_2383, 11);
								unk_0x1701009E85B15DA4(unk_0xA19140A5C42D8715(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_22()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x9F302D755A846102();
	iVar1 = unk_0x1F7BAD75218F1A2C(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_23()
{
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0xE11F00B4AC919F45(-1, "Menu_Accept", &Global_14502, 1);
		func_24();
	}
}

void func_24()
{
	if (func_8())
	{
		unk_0xD1DF8842C4808642(5);
	}
}

int func_25(int iParam0)
{
	if ((Global_106070.f_14113[iParam0 /*104*/].f_99[0] == 1 || Global_106070.f_14113[iParam0 /*104*/].f_99[1] == 1) || Global_106070.f_14113[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_26()
{
	if (func_18(14))
	{
		if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[0 /*29*/])
			{
				Global_14513 = 0;
			}
			else if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[1 /*29*/])
			{
				Global_14513 = 1;
			}
			else if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[2 /*29*/])
			{
				Global_14513 = 2;
			}
			else
			{
				Global_14513 = 0;
			}
		}
	}
	else
	{
		Global_14513 = func_27();
		if (Global_14513 == 145)
		{
			Global_14513 = 3;
		}
		if (Global_71205)
		{
			Global_14513 = 3;
		}
		if (Global_14513 > 3)
		{
			Global_14513 = 3;
		}
	}
}

var func_27()
{
	func_28();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_28()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_31(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_30(unk_0xA19140A5C42D8715());
			if (func_29(iVar0) && (!func_18(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_29(Global_106070.f_2355.f_539.f_4301))
				{
					Global_106070.f_2355.f_539.f_4302 = Global_106070.f_2355.f_539.f_4301;
				}
				Global_106070.f_2355.f_539.f_4303 = iVar0;
				Global_106070.f_2355.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106070.f_2355.f_539.f_4301 != 145)
			{
				Global_106070.f_2355.f_539.f_4303 = Global_106070.f_2355.f_539.f_4301;
			}
			return;
		}
	}
	Global_106070.f_2355.f_539.f_4301 = 145;
}

bool func_29(int iParam0)
{
	return iParam0 < 3;
}

int func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_31(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_31(int iParam0)
{
	if (func_29(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_32()
{
	struct<16> Var0;
	
	if (Global_14491 == 0)
	{
		if ((func_3(2, Global_14482, 0) || Global_4268315 == 1) || Global_16882 == 1)
		{
			if (Global_4268315 == 0 && Global_16882 == 0)
			{
				func_23();
			}
			Global_14491 = 1;
			iLocal_30 = 0;
			func_19(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xFA57C719261AA55D(&Global_2383, 17);
			iLocal_24 = iLocal_19[iLocal_22];
			if (iLocal_22 == iLocal_21 || iLocal_22 > iLocal_21)
			{
				if (Global_14513.f_1 > 3)
				{
					Global_14513.f_1 = 8;
					Global_16888 = 1;
					iLocal_23 = iLocal_22;
					unk_0x94B2AD2D548A6436(iLocal_19[iLocal_22], &Local_45);
				}
				settimerb(0);
				iLocal_28 = 0;
				unk_0x31A9E530D137684F(Global_14494, "GET_CURRENT_SELECTION");
				iLocal_33 = unk_0xD8015A504E3ED13A();
				while (!unk_0x5BFB8B9A58F76839(iLocal_33) && iLocal_28 == 0)
				{
					wait(0);
					if (timerb() > 2000)
					{
						iLocal_28 = 1;
					}
				}
				func_37();
				unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
				unk_0x380580A1A1667F69(9);
				unk_0x380580A1A1667F69(0);
				func_15("CELL_1");
				unk_0x390B339C943A8A54("CELL_TO_FIELD");
				unk_0xC327C023FDA37F2E(unk_0xB330C43B9B7B1724(unk_0xD4E735F4B6A956AC()));
				unk_0xD481829E3E36543B();
				unk_0x390B339C943A8A54("CELL_FROM_FIELD");
				unk_0xC327C023FDA37F2E(&(Local_45.f_2));
				unk_0xD481829E3E36543B();
				unk_0x390B339C943A8A54("CELL_EMAIL_BCON");
				unk_0xC327C023FDA37F2E(&(Local_45.f_56[0 /*16*/]));
				unk_0xC327C023FDA37F2E(&(Local_45.f_56[1 /*16*/]));
				unk_0xC327C023FDA37F2E(&(Local_45.f_56[2 /*16*/]));
				unk_0xC327C023FDA37F2E(&(Local_45.f_56[3 /*16*/]));
				unk_0xC327C023FDA37F2E(&(Local_45.f_56[4 /*16*/]));
				unk_0xC327C023FDA37F2E(&(Local_45.f_56[5 /*16*/]));
				unk_0xC327C023FDA37F2E(&(Local_45.f_56[6 /*16*/]));
				unk_0xC327C023FDA37F2E(&(Local_45.f_56[7 /*16*/]));
				unk_0xC327C023FDA37F2E(&(Local_45.f_56[8 /*16*/]));
				unk_0xC327C023FDA37F2E(&(Local_45.f_56[9 /*16*/]));
				unk_0xD481829E3E36543B();
				unk_0x390B339C943A8A54("CELL_2000");
				unk_0xC327C023FDA37F2E(&(Local_45.f_2));
				unk_0xD481829E3E36543B();
				switch (Local_45.f_313)
				{
					case 0:
						break;
					
					case 1:
						break;
					
					case 2:
						unk_0x528BE75B327CACFC("EmailAds_Dock_Tease");
						unk_0x233A5B4A35140C6B(true);
						break;
					
					case 3:
						unk_0x528BE75B327CACFC("EmailAds_Warstock");
						unk_0x233A5B4A35140C6B(true);
						break;
					
					case 4:
						unk_0x528BE75B327CACFC("EmailAds_Legendary_Motorsport");
						unk_0x233A5B4A35140C6B(true);
						break;
					
					case 5:
						unk_0x528BE75B327CACFC("EmailAds_LS_Customs");
						unk_0x233A5B4A35140C6B(true);
						break;
					
					case 6:
						unk_0x528BE75B327CACFC("EmailAds_Elitas_Travel");
						unk_0x233A5B4A35140C6B(true);
						break;
					
					case 7:
						unk_0x528BE75B327CACFC("EmailAds_LS_Tourist_Info");
						unk_0x233A5B4A35140C6B(true);
						break;
					
					case 8:
						unk_0x528BE75B327CACFC("emailads_dynasty8");
						unk_0x233A5B4A35140C6B(true);
						break;
					
					case 9:
						unk_0x528BE75B327CACFC("emailads_bennys");
						unk_0x233A5B4A35140C6B(true);
						break;
					
					case 10:
						unk_0x528BE75B327CACFC("emailads_ammunation");
						unk_0x233A5B4A35140C6B(true);
						break;
					
					case 11:
						unk_0x528BE75B327CACFC("emailads_SSSA");
						unk_0x233A5B4A35140C6B(true);
						break;
					
					case 12:
						unk_0x528BE75B327CACFC("emailads_maze_bank");
						unk_0x233A5B4A35140C6B(true);
						break;
					
					case 13:
						unk_0x528BE75B327CACFC("emailads_shark");
						unk_0x233A5B4A35140C6B(true);
						break;
					
					case 14:
						unk_0x528BE75B327CACFC("emailads_RP");
						unk_0x233A5B4A35140C6B(true);
						break;
				}
				unk_0x271C1332F482646C();
				func_19(Global_14494, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				func_53(Global_14494, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (iLocal_22 == iLocal_21)
				{
					if (unk_0x05EFB6A616B6FADE(Global_4268330, 25))
					{
						unk_0xFA57C719261AA55D(&Global_4268330, 25);
					}
					if (Global_4267064 > 0)
					{
						func_34(8491, iLocal_40, -1, 1, 0);
						if (Global_4267064 > 0)
						{
							Global_4267064 = 0;
						}
					}
				}
				return;
			}
			if (Global_4267065[iLocal_24 /*104*/].f_24 != 0)
			{
				if (Global_14513.f_1 > 3)
				{
					Global_14513.f_1 = 8;
				}
				if (Global_4268315 == 1 || Global_16882 == 1)
				{
					iLocal_24 = iLocal_19[0];
					iLocal_23 = 0;
					if (Global_4268315 == 1)
					{
					}
					Global_16882 = 0;
				}
				else
				{
					settimerb(0);
					iLocal_28 = 0;
					unk_0x31A9E530D137684F(Global_14494, "GET_CURRENT_SELECTION");
					iLocal_33 = unk_0xD8015A504E3ED13A();
					while (!unk_0x5BFB8B9A58F76839(iLocal_33) && iLocal_28 == 0)
					{
						wait(0);
						if (timerb() > 2000)
						{
							iLocal_28 = 1;
						}
					}
					if (iLocal_28 == 1)
					{
						iLocal_29 = 0;
					}
					else
					{
						iLocal_29 = unk_0x7C261B004A9EEB72(iLocal_33);
					}
					if (iLocal_29 < 0)
					{
						iLocal_29 = 0;
					}
					iLocal_24 = iLocal_19[iLocal_22];
					iLocal_23 = iLocal_22;
				}
				Global_4267065[iLocal_24 /*104*/].f_28 = 1;
				iLocal_26 = 0;
				StringCopy(&Global_16863, "NO_HYPERLINK", 64);
				Var0 = { Global_4267065[iLocal_24 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0x445EC9E7EACB710E(&Var0))
				{
					Global_16863 = { Var0 };
					iLocal_26 = 1;
					if (Global_14501)
					{
						func_19(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0x2BCFB39E86340DAA(&Global_2383, 17);
					Global_4267065[iLocal_24 /*104*/].f_26 = 1;
					Global_4267065[iLocal_24 /*104*/].f_24 = 2;
				}
				if (Global_4267065[iLocal_24 /*104*/].f_26 == 0)
				{
					Global_4267065[iLocal_24 /*104*/].f_24 = 1;
				}
				func_37();
				unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
				unk_0x380580A1A1667F69(9);
				unk_0x380580A1A1667F69(0);
				func_15("CELL_1");
				unk_0x390B339C943A8A54("CELL_TO_FIELD");
				unk_0xC327C023FDA37F2E(unk_0xB330C43B9B7B1724(unk_0xD4E735F4B6A956AC()));
				unk_0xD481829E3E36543B();
				if (Global_4267065[iLocal_24 /*104*/].f_17 == 145)
				{
					unk_0x390B339C943A8A54("CELL_FROM_FIELD");
					unk_0xC327C023FDA37F2E(&(Global_4267065[iLocal_24 /*104*/].f_50));
					unk_0xD481829E3E36543B();
				}
				else
				{
					unk_0x390B339C943A8A54("CELL_FROM_FIELD");
					unk_0x4FDA9E6EF359F8A9(&(Global_106070.f_28022[Global_4267065[iLocal_24 /*104*/].f_17 /*29*/].f_3));
					unk_0xD481829E3E36543B();
				}
				switch (Global_4267065[iLocal_24 /*104*/].f_32)
				{
					case 0:
						func_15(&(Global_4267065[iLocal_24 /*104*/]));
						break;
					
					case 1:
						unk_0x390B339C943A8A54(&(Global_4267065[iLocal_24 /*104*/]));
						unk_0xC327C023FDA37F2E(&(Global_4267065[iLocal_24 /*104*/].f_33));
						if (Global_4267065[iLocal_24 /*104*/].f_66 == 1 && !unk_0x3CAC2741CC1A631F(&(Global_4267065[iLocal_24 /*104*/].f_67), "NULL"))
						{
							unk_0xC327C023FDA37F2E(&(Global_4267065[iLocal_24 /*104*/].f_67));
						}
						if ((Global_4267065[iLocal_24 /*104*/].f_66 == 2 && !unk_0x3CAC2741CC1A631F(&(Global_4267065[iLocal_24 /*104*/].f_67), "NULL")) && !unk_0x3CAC2741CC1A631F(&(Global_4267065[iLocal_24 /*104*/].f_83), "NULL"))
						{
							if (unk_0x445EC9E7EACB710E(&(Global_4267065[iLocal_24 /*104*/].f_67)))
							{
								unk_0x4FDA9E6EF359F8A9(&(Global_4267065[iLocal_24 /*104*/].f_67));
							}
							else
							{
								unk_0xC327C023FDA37F2E(&(Global_4267065[iLocal_24 /*104*/].f_67));
							}
							if (unk_0x445EC9E7EACB710E(&(Global_4267065[iLocal_24 /*104*/].f_83)))
							{
								unk_0x4FDA9E6EF359F8A9(&(Global_4267065[iLocal_24 /*104*/].f_83));
							}
							else
							{
								unk_0xC327C023FDA37F2E(&(Global_4267065[iLocal_24 /*104*/].f_83));
							}
						}
						unk_0xD481829E3E36543B();
						break;
					
					case 2:
						unk_0x390B339C943A8A54(&(Global_4267065[iLocal_24 /*104*/]));
						unk_0xCDA87E1DA52C8C9D(Global_4267065[iLocal_24 /*104*/].f_49);
						unk_0xD481829E3E36543B();
						break;
					
					case 3:
						unk_0x390B339C943A8A54(&(Global_4267065[iLocal_24 /*104*/]));
						unk_0xC327C023FDA37F2E(&(Global_4267065[iLocal_24 /*104*/].f_33));
						unk_0xCDA87E1DA52C8C9D(Global_4267065[iLocal_24 /*104*/].f_49);
						if (Global_4267065[iLocal_24 /*104*/].f_66 == 1 && !unk_0x3CAC2741CC1A631F(&(Global_4267065[iLocal_24 /*104*/].f_67), "NULL"))
						{
							unk_0xC327C023FDA37F2E(&(Global_4267065[iLocal_24 /*104*/].f_67));
						}
						if ((Global_4267065[iLocal_24 /*104*/].f_66 == 2 && !unk_0x3CAC2741CC1A631F(&(Global_4267065[iLocal_24 /*104*/].f_67), "NULL")) && !unk_0x3CAC2741CC1A631F(&(Global_4267065[iLocal_24 /*104*/].f_83), "NULL"))
						{
							if (unk_0x445EC9E7EACB710E(&(Global_4267065[iLocal_24 /*104*/].f_67)))
							{
								unk_0x4FDA9E6EF359F8A9(&(Global_4267065[iLocal_24 /*104*/].f_67));
							}
							else
							{
								unk_0xC327C023FDA37F2E(&(Global_4267065[iLocal_24 /*104*/].f_67));
							}
							if (unk_0x445EC9E7EACB710E(&(Global_4267065[iLocal_24 /*104*/].f_83)))
							{
								unk_0x4FDA9E6EF359F8A9(&(Global_4267065[iLocal_24 /*104*/].f_83));
							}
							else
							{
								unk_0xC327C023FDA37F2E(&(Global_4267065[iLocal_24 /*104*/].f_83));
							}
						}
						unk_0xD481829E3E36543B();
						break;
					
					case 4:
						func_33(iLocal_24);
						break;
					
					case 5:
						func_33(iLocal_24);
						break;
					
					case 6:
						func_33(iLocal_24);
						break;
					
					case 7:
						func_33(iLocal_24);
						break;
					
					case 8:
						func_33(iLocal_24);
						break;
					
					case 9:
						func_33(iLocal_24);
						break;
					
					case 10:
						func_33(iLocal_24);
						break;
					
					case 11:
						func_33(iLocal_24);
						break;
				}
				if (Global_4267065[iLocal_24 /*104*/].f_17 == 145)
				{
					unk_0x390B339C943A8A54("CELL_2000");
					unk_0xC327C023FDA37F2E(&(Global_4267065[iLocal_24 /*104*/].f_50));
					unk_0xD481829E3E36543B();
				}
				else
				{
					func_15(&(Global_106070.f_28022[Global_4267065[iLocal_24 /*104*/].f_17 /*29*/].f_3));
				}
				if (Global_4267065[iLocal_24 /*104*/].f_17 == 149)
				{
					unk_0x528BE75B327CACFC("emailads_maze_bank");
					unk_0x233A5B4A35140C6B(true);
				}
				if (Global_4267065[iLocal_24 /*104*/].f_17 == 140)
				{
					unk_0x528BE75B327CACFC("EmailAds_Warstock");
					unk_0x233A5B4A35140C6B(true);
				}
				if (Global_4267065[iLocal_24 /*104*/].f_17 == 155)
				{
					unk_0x528BE75B327CACFC("emailads_arena");
					unk_0x233A5B4A35140C6B(true);
				}
				unk_0x271C1332F482646C();
				Global_16888 = 1;
				func_53(Global_14494, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0xDB2661401914B2FA(Global_4267065[iLocal_24 /*104*/].f_16);
				if (Global_4267065[iLocal_24 /*104*/].f_29 > 0)
				{
					if (Global_14501)
					{
						func_19(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_4267065[iLocal_24 /*104*/].f_30 == 1)
				{
					if (Global_14501)
					{
						func_19(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_19(Global_14494, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4267065[iLocal_24 /*104*/].f_29 > 0)
				{
					if (unk_0x3CAC2741CC1A631F(&(Global_4267065[iLocal_24 /*104*/]), "CELL_FINV"))
					{
						if (Global_14501)
						{
							func_19(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_19(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_14501)
					{
						func_19(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14501)
				{
					func_19(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_19(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4267065[iLocal_24 /*104*/].f_24 == 2)
				{
					if (Global_4267065[iLocal_24 /*104*/].f_31 == 1)
					{
						iLocal_26 = 0;
						if (Global_14501)
						{
							func_19(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_19(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						unk_0x2BCFB39E86340DAA(&Global_2383, 17);
					}
					else if (iLocal_26 == 0)
					{
						func_19(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0xFA57C719261AA55D(&Global_2383, 17);
					}
				}
				else if (Global_14501)
				{
					func_19(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					unk_0x2BCFB39E86340DAA(&Global_2383, 17);
				}
				else
				{
					func_19(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x2BCFB39E86340DAA(&Global_2383, 17);
				}
				Global_106070.f_14023[Global_14513 /*20*/].f_18 = 0;
				Global_4268315 = 0;
			}
			else
			{
				Global_106070.f_14023[Global_14513 /*20*/].f_18 = 0;
				Global_4268315 = 0;
			}
		}
		if (Global_2534145 == 0)
		{
			if (Global_71205)
			{
			}
		}
	}
}

void func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_106070.f_14113[iParam0 /*104*/].f_49)
	{
		case 1:
			unk_0x390B339C943A8A54("CELL_CL01");
			break;
		
		case 2:
			unk_0x390B339C943A8A54("CELL_CL02");
			break;
		
		case 3:
			unk_0x390B339C943A8A54("CELL_CL03");
			break;
		
		case 4:
			unk_0x390B339C943A8A54("CELL_CL04");
			break;
		
		case 5:
			unk_0x390B339C943A8A54("CELL_CL05");
			break;
		
		case 6:
			unk_0x390B339C943A8A54("CELL_CL06");
			break;
		
		case 7:
			unk_0x390B339C943A8A54("CELL_CL07");
			break;
		
		case 8:
			unk_0x390B339C943A8A54("CELL_CL08");
			break;
		
		case 9:
			unk_0x390B339C943A8A54("CELL_CL09");
			break;
	}
	unk_0x4FDA9E6EF359F8A9(&(Global_106070.f_14113[iParam0 /*104*/]));
	while (iVar0 < Global_106070.f_14113[iParam0 /*104*/].f_49)
	{
		switch (Global_106070.f_14113[iParam0 /*104*/].f_32)
		{
			case 4:
				unk_0x4FDA9E6EF359F8A9(&(Global_2524719.f_1651[iVar0 /*4*/]));
				break;
			
			case 5:
				unk_0x4FDA9E6EF359F8A9(&(Global_1654554[iVar0 /*4*/]));
				break;
			
			case 6:
				unk_0x4FDA9E6EF359F8A9(&(Global_1654595[iVar0 /*4*/]));
				break;
			
			case 7:
				unk_0x4FDA9E6EF359F8A9(&(Global_1654616[iVar0 /*4*/]));
				break;
			
			case 8:
				unk_0x4FDA9E6EF359F8A9(&(Global_1654633[iVar0 /*4*/]));
				break;
			
			case 9:
				unk_0x4FDA9E6EF359F8A9(&(Global_1654646[iVar0 /*4*/]));
				break;
			
			case 10:
				unk_0x4FDA9E6EF359F8A9(&(Global_1654659[iVar0 /*4*/]));
				break;
			
			case 11:
				unk_0x4FDA9E6EF359F8A9(&(Global_1654672[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	unk_0xD481829E3E36543B();
}

void func_34(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_35(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
}

int func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_36();
		if (iVar1 > -1)
		{
			Global_2535232 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2535232 = 1;
		}
	}
	return iVar0;
}

int func_36()
{
	return Global_1312736;
}

void func_37()
{
	int iVar0;
	
	if (iLocal_37)
	{
		unk_0x91DE928AD81C6F57(&Local_34);
	}
	iLocal_37 = 0;
	if (Global_4267065[iLocal_24 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 59)
		{
			if (unk_0x3CAC2741CC1A631F(&(Global_4267065[iLocal_24 /*104*/]), &(Local_35[iVar0 /*6*/])))
			{
				if (func_38(&(Local_35[iVar0 /*6*/])))
				{
					StringCopy(&Local_34, "BAT_CASE_", 64);
					StringIntConCat(&Local_34, Global_1684989, 64);
				}
				else
				{
					Local_34 = { Local_36[iVar0 /*16*/] };
				}
				iLocal_37 = 1;
				unk_0x8000C77B5F336760(&Local_34, 0);
				while (!unk_0x87DF091EDFE6D083(&Local_34))
				{
					wait(100);
				}
			}
			iVar0++;
		}
	}
}

int func_38(char* sParam0)
{
	switch (unk_0xFEB6EEC0545AF7AA(sParam0))
	{
		case 368818696:
		case -242537573:
		case 293851599:
		case 1276417163:
		case -695052470:
		case -272335065:
		case 1286719131:
		case -1417266496:
		case -469944288:
		case -687436221:
		case 1989355620:
		case 549480519:
		case 1944388503:
		case -934641488:
		case -728564821:
		case 1522380948:
		case -1256768569:
		case -320488889:
		case -539437394:
		case -1801936221:
			return 1;
		
		default:
	}
	return 0;
}

void func_39()
{
	if (iLocal_27)
	{
		if (timera() > 50)
		{
			iLocal_27 = 0;
		}
	}
	if (unk_0x0B9F814BC8D14042(2))
	{
		if (func_3(2, 181, 0))
		{
			if (iLocal_22 > 0)
			{
				iLocal_22 = (iLocal_22 - 1);
				func_9();
			}
		}
		if (func_3(2, 180, 0))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_20)
			{
				iLocal_22 = 0;
			}
			func_6();
		}
	}
	if (iLocal_27 == 0)
	{
		if (func_3(2, Global_14489, 0))
		{
			if (iLocal_22 > 0)
			{
				iLocal_22 = (iLocal_22 - 1);
				func_9();
			}
			iLocal_27 = 1;
			settimera(0);
		}
		if (func_3(2, Global_14490, 0))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_20)
			{
				iLocal_22 = 0;
			}
			func_6();
			iLocal_27 = 1;
			settimera(0);
		}
	}
}

void func_40()
{
	float fVar0;
	
	fVar0 = func_41(vLocal_39, vLocal_38, Global_14473, -90f, 0f, 90f, 350f, 0);
	unk_0xD0F5704F771784BF((500f + (75f * fVar0)));
	if (fVar0 >= 1f)
	{
		Global_16856 = 0;
		iLocal_18 = 0;
	}
}

float func_41(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_4268545 == 0)
	{
		if (unk_0x05EFB6A616B6FADE(Global_2383, 14) && Global_14513.f_1 < 4)
		{
			unk_0x75B4B390EE495A3B(&Var0);
			if (Global_14466[Global_14458 /*3*/].f_1 == Var0.f_1)
			{
				Global_4268545 = 1;
			}
		}
	}
	if (func_44() && Global_4268545 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0xFD34717937104F1C();
	}
	fVar1 = func_43((to_float((unk_0xFD34717937104F1C() - iLocal_18)) / fParam4), 0f, 1f);
	if (fVar1 < 1f)
	{
		fVar2 = fVar1;
		if (bParam5)
		{
			fVar2 = (fVar2 - 1f);
			fVar3 = 0.670158f;
			fVar2 = (((fVar2 * fVar2) * (((fVar3 + 1f) * fVar2) + fVar3)) + 1f);
		}
		else
		{
			fVar2 = sin((fVar1 * 90f));
		}
		Global_14441 = { func_42(vParam0, vParam1, fVar2) };
		Global_14444 = { func_42(vParam2, vParam3, fVar2) };
	}
	else
	{
		Global_14441 = { vParam1 };
		Global_14444 = { vParam3 };
	}
	unk_0xB8927E9A664047D4(Global_14441);
	unk_0xD698A1090D8964DE(Global_14444, 0);
	return fVar1;
}

Vector3 func_42(vector3 vParam0, vector3 vParam1, float fParam2)
{
	return vParam0 + vParam1 - vParam0 * Vector(fParam2, fParam2, fParam2);
}

float func_43(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_44()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
		{
			if (Global_14456 == 0)
			{
				if (Global_1698 != 128)
				{
					if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
					{
						if (Global_15822 != 2)
						{
						}
					}
				}
			}
		}
		if (func_18(14))
		{
			return 0;
		}
		if (unk_0xCCB06FD56E3262CF(unk_0xA19140A5C42D8715(), 0))
		{
			return 0;
		}
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			if (!unk_0x85837757E9820EAA())
			{
				if (unk_0x4374EED90C523366(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x443A3698D0CD9D06(unk_0xA19140A5C42D8715()) || unk_0xFF12F654A8561928(unk_0xA19140A5C42D8715())) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || unk_0xF0F0F135A933B6B0(unk_0xA19140A5C42D8715()))
		{
			return 0;
		}
		if (Global_105118)
		{
			return 0;
		}
	}
	if (Global_71205)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x9F302D755A846102();
	iVar1 = unk_0x1F7BAD75218F1A2C(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x85837757E9820EAA()))
	{
		iVar2 = 1;
		if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				iVar3 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
				if ((((((((unk_0x8CE5E4632E631B03(unk_0x8F474E419F56E48D(iVar3)) || unk_0x1F41816F62350826(unk_0x8F474E419F56E48D(iVar3))) || unk_0x34F956CD0E52746F(unk_0x8F474E419F56E48D(iVar3))) || unk_0x8F474E419F56E48D(iVar3) == joaat("seashark")) || unk_0x8F474E419F56E48D(iVar3) == joaat("seashark2")) || unk_0x8F474E419F56E48D(iVar3) == joaat("rhino")) || unk_0x8F474E419F56E48D(iVar3) == joaat("submersible")) || unk_0x8F474E419F56E48D(iVar3) == joaat("submersible2")) || unk_0x8F474E419F56E48D(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4268544 || iVar2 == 1)
	{
		if (unk_0x8B1574454E8C2421(joaat("apptrackify")) > 0 || Global_106070.f_14023.f_89)
		{
			if (unk_0x8B1574454E8C2421(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_45()
{
	float fVar0;
	
	fVar0 = func_41(vLocal_38, vLocal_39, -90f, 0f, 90f, Global_14473, 350f, 0);
	unk_0xD0F5704F771784BF((500f + (75f * (1f - fVar0))));
	if (fVar0 >= 1f)
	{
		Global_16855 = 0;
		func_56();
		iLocal_18 = 0;
	}
}

void func_46()
{
	if (Global_4268315 == 0)
	{
		if (iLocal_23 < 0)
		{
			iLocal_23 = 0;
		}
		func_47(Global_14494, "SET_HEADER", "CELL_INBOX", 0, 0, 0, 0);
		func_53(Global_14494, "DISPLAY_VIEW", 8f, to_float(iLocal_23), -1082130432, -1082130432, -1082130432);
		if (Global_14501)
		{
			if (iLocal_20 > 0)
			{
				func_19(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14494, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_20 > 0)
			{
				func_19(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14494, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_71205)
		{
			func_19(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xFA57C719261AA55D(&Global_2383, 17);
		}
		else
		{
			func_19(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xFA57C719261AA55D(&Global_2383, 17);
		}
	}
	else
	{
		iLocal_23 = 0;
	}
}

void func_47(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x31A9E530D137684F(iParam0, sParam1);
	func_15(sParam2);
	if (!unk_0x429D45A6C6520026(sParam3))
	{
		func_15(sParam3);
	}
	if (!unk_0x429D45A6C6520026(sParam4))
	{
		func_15(sParam4);
	}
	if (!unk_0x429D45A6C6520026(sParam5))
	{
		func_15(sParam5);
	}
	if (!unk_0x429D45A6C6520026(sParam6))
	{
		func_15(sParam6);
	}
	unk_0x271C1332F482646C();
}

void func_48()
{
	int iVar0[12];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<8> Var5;
	int iVar6;
	int iVar7[10];
	int iVar8;
	
	iLocal_20 = 0;
	iLocal_21 = 0;
	func_26();
	iVar1 = 0;
	iVar2 = 0;
	while (iVar1 < 11)
	{
		if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) == 0)
		{
			func_56();
		}
		iVar3 = 0;
		iVar4 = 11;
		Global_4267065[iVar4 /*104*/].f_18 = -1;
		Global_4267065[iVar4 /*104*/].f_18.f_1 = 0;
		Global_4267065[iVar4 /*104*/].f_18.f_2 = 0;
		Global_4267065[iVar4 /*104*/].f_18.f_3 = 0;
		Global_4267065[iVar4 /*104*/].f_18.f_5 = 0;
		while (iVar3 < 12)
		{
			if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) == 0)
			{
				func_56();
			}
			if (iVar0[iVar3] == 0)
			{
				if (Global_4267065[iVar3 /*104*/].f_24 != 0)
				{
					if (Global_4267065[iVar3 /*104*/].f_99[Global_14513] == 1)
					{
						if (func_52(Global_4267065[iVar3 /*104*/].f_18, Global_4267065[iVar4 /*104*/].f_18))
						{
							iVar4 = iVar3;
							if (Global_4267065[iVar4 /*104*/].f_28 == 0)
							{
								iLocal_25 = 0;
							}
							else
							{
								iLocal_25 = 1;
							}
						}
					}
				}
			}
			iVar3++;
		}
		iLocal_19[iVar1] = iVar4;
		iVar0[iVar4] = 1;
		if (Global_4267065[iVar4 /*104*/].f_24 != 0)
		{
			if (Global_4267065[iVar4 /*104*/].f_99[Global_14513] == 1)
			{
				unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
				unk_0x380580A1A1667F69(8);
				unk_0x380580A1A1667F69(iVar1);
				unk_0x380580A1A1667F69(iLocal_25);
				unk_0x233A5B4A35140C6B(false);
				if (Global_4267065[iVar4 /*104*/].f_17 == 145)
				{
					unk_0x390B339C943A8A54("CELL_2000");
					unk_0xC327C023FDA37F2E(&(Global_4267065[iVar4 /*104*/].f_50));
					unk_0xD481829E3E36543B();
				}
				else
				{
					func_15(&(Global_106070.f_28022[Global_4267065[iVar4 /*104*/].f_17 /*29*/].f_3));
				}
				Var5 = { Global_4267065[iVar4 /*104*/] };
				if (func_38(&(Global_4267065[iVar4 /*104*/])))
				{
					iVar6 = func_49(7315, -1, -1);
					switch (iVar6)
					{
						case 0:
							StringCopy(&Var5, "BONEMAIL_TXT_SUB", 64);
							break;
						
						case 1:
							StringCopy(&Var5, "BONEMAIL2_TXT_SUB", 64);
							break;
						
						case 2:
							StringCopy(&Var5, "BONEMAIL3_TXT_SUB", 64);
							break;
						
						case 3:
							StringCopy(&Var5, "BONEMAIL4_TXT_SUB", 64);
							break;
						
						case 4:
							StringCopy(&Var5, "BONEMAIL5_TXT_SUB", 64);
							break;
					}
				}
				else
				{
					StringConCat(&Var5, "_SUB", 64);
				}
				func_15(&Var5);
				unk_0x271C1332F482646C();
				iLocal_20++;
				iLocal_21++;
			}
		}
		iVar1++;
	}
	iVar1 = iLocal_20;
	iVar8 = 0;
	while (iVar1 < (iLocal_44 + iLocal_20))
	{
		iVar2 = 0;
		iVar8 = 0;
		while (iVar2 < iLocal_44 && iVar8 == 0)
		{
			unk_0x94B2AD2D548A6436(iVar2, &Local_45);
			if (iVar7[iVar2] == 0)
			{
				unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
				unk_0x380580A1A1667F69(8);
				unk_0x380580A1A1667F69(iVar1);
				if (iVar1 == 0)
				{
					if (Global_4267064 == 0)
					{
						unk_0x380580A1A1667F69(1);
					}
					else
					{
						unk_0x380580A1A1667F69(0);
					}
				}
				else
				{
					unk_0x380580A1A1667F69(1);
				}
				unk_0x233A5B4A35140C6B(false);
				unk_0x390B339C943A8A54("CELL_2000");
				unk_0xC327C023FDA37F2E(&(Local_45.f_2));
				unk_0xD481829E3E36543B();
				unk_0x390B339C943A8A54("CELL_EMAIL_SUBJ");
				unk_0xC327C023FDA37F2E(&(Local_45.f_23[0 /*16*/]));
				unk_0xC327C023FDA37F2E(&(Local_45.f_23[1 /*16*/]));
				unk_0xD481829E3E36543B();
				unk_0x271C1332F482646C();
				iVar7[iVar2] = 1;
				iLocal_19[iVar1] = iVar2;
				iVar8 = 1;
				iLocal_20++;
				if (iVar2 == 0)
				{
					iLocal_40 = Local_45.f_1;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	iVar1 = func_51(iParam0, iParam1);
	iVar2 = func_50(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x8107725D56824351(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_50(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x255504F58AF9B890((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x255504F58AF9B890((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x255504F58AF9B890((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x255504F58AF9B890((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x255504F58AF9B890((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x255504F58AF9B890((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x255504F58AF9B890((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x255504F58AF9B890((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x255504F58AF9B890((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x255504F58AF9B890((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x255504F58AF9B890((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x255504F58AF9B890((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x255504F58AF9B890((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x255504F58AF9B890((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x255504F58AF9B890((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x255504F58AF9B890((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x255504F58AF9B890((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x255504F58AF9B890((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0x255504F58AF9B890((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0x255504F58AF9B890((iParam0 - 22194)) * 8) * 8;
	}
	return iVar0;
}

int func_51(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xB3BA69AF3BAB6907((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xB3BA69AF3BAB6907((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xB3BA69AF3BAB6907((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xB3BA69AF3BAB6907((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x931785B1D4E0FF39((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x931785B1D4E0FF39((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	return iVar0;
}

int func_52(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_53(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x31A9E530D137684F(iParam0, sParam1);
	unk_0x380580A1A1667F69(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam6));
	}
	unk_0x271C1332F482646C();
}

void func_54()
{
	switch (unk_0x346268472B5F4E43())
	{
		case -1:
			unk_0x481E5ED540816498("gta5mkt_en");
			break;
		
		case 0:
			unk_0x481E5ED540816498("gta5mkt_en");
			break;
		
		case 1:
			unk_0x481E5ED540816498("gta5mkt_fr");
			break;
		
		case 2:
			unk_0x481E5ED540816498("gta5mkt_ge");
			break;
		
		case 3:
			unk_0x481E5ED540816498("gta5mkt_it");
			break;
		
		case 4:
			unk_0x481E5ED540816498("gta5mkt_sp");
			break;
		
		case 5:
			unk_0x481E5ED540816498("gta5mkt_pt");
			break;
		
		case 6:
			unk_0x481E5ED540816498("gta5mkt_pl");
			break;
		
		case 7:
			unk_0x481E5ED540816498("gta5mkt_ru");
			break;
		
		case 8:
			unk_0x481E5ED540816498("gta5mkt_ko");
			break;
		
		case 9:
			unk_0x481E5ED540816498("gta5mkt_ch");
			break;
		
		case 10:
			unk_0x481E5ED540816498("gta5mkt_ja");
			break;
		
		case 11:
			unk_0x481E5ED540816498("gta5mkt_me");
			break;
		
		case 12:
			unk_0x481E5ED540816498("gta5mkt_cn");
			break;
	}
	unk_0x9A29DC922F83BB9A(0, 6);
	wait(0);
	iLocal_41 = 1;
	bLocal_42 = false;
	while (iLocal_41 && Global_14513.f_1 > 3)
	{
		wait(0);
		iLocal_43 = unk_0x4D89F7F079AF5F74();
		if (func_4())
		{
			Global_14513.f_1 = 3;
			iLocal_41 = 0;
			bLocal_42 = false;
		}
		switch (iLocal_43)
		{
			case 3:
				iLocal_41 = 0;
				bLocal_42 = true;
				break;
			
			case 0:
				iLocal_41 = 0;
				bLocal_42 = true;
				break;
			
			case 1:
				break;
			
			case 4:
				iLocal_41 = 0;
				bLocal_42 = false;
				break;
			
			case 2:
				iLocal_41 = 0;
				bLocal_42 = false;
				break;
		}
	}
	if (bLocal_42)
	{
		iLocal_44 = unk_0xFBEBBA661994249B();
	}
	else
	{
		iLocal_44 = 0;
	}
}

void func_55()
{
	StringCopy(&(Local_35[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_36[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_36[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_36[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[3 /*6*/]), "MAPEMAIL_TXT", 24);
	StringCopy(&(Local_36[3 /*16*/]), "NHP_PHOTO_19", 64);
	StringCopy(&(Local_35[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_36[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_35[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_36[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_35[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_36[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_36[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_36[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_36[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_36[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_36[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_36[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_35[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_36[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_35[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_36[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_35[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_36[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_36[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_36[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_36[18 /*16*/]), "executiveproducer", 64);
	StringCopy(&(Local_35[19 /*6*/]), "MAPEMAIL_TXT1", 24);
	StringCopy(&(Local_36[19 /*16*/]), "NHP_PHOTO_18", 64);
	StringCopy(&(Local_35[20 /*6*/]), "MAPEMAIL_TXT2", 24);
	StringCopy(&(Local_36[20 /*16*/]), "NHP_PHOTO_11", 64);
	StringCopy(&(Local_35[21 /*6*/]), "MAPEMAIL_TXT3", 24);
	StringCopy(&(Local_36[21 /*16*/]), "NHP_PHOTO_13", 64);
	StringCopy(&(Local_35[22 /*6*/]), "MAPEMAIL_TXT4", 24);
	StringCopy(&(Local_36[22 /*16*/]), "NHP_PHOTO_5", 64);
	StringCopy(&(Local_35[23 /*6*/]), "MAPEMAIL_TXT5", 24);
	StringCopy(&(Local_36[23 /*16*/]), "NHP_PHOTO_12", 64);
	StringCopy(&(Local_35[24 /*6*/]), "MAPEMAIL_TXT6", 24);
	StringCopy(&(Local_36[24 /*16*/]), "NHP_PHOTO_3", 64);
	StringCopy(&(Local_35[25 /*6*/]), "MAPEMAIL_TXT7", 24);
	StringCopy(&(Local_36[25 /*16*/]), "NHP_PHOTO_1", 64);
	StringCopy(&(Local_35[26 /*6*/]), "MAPEMAIL_TXT8", 24);
	StringCopy(&(Local_36[26 /*16*/]), "NHP_PHOTO_10", 64);
	StringCopy(&(Local_35[27 /*6*/]), "MAPEMAIL_TXT9", 24);
	StringCopy(&(Local_36[27 /*16*/]), "NHP_PHOTO_6", 64);
	StringCopy(&(Local_35[28 /*6*/]), "MAPEMAIL_TXT10", 24);
	StringCopy(&(Local_36[28 /*16*/]), "NHP_PHOTO_20", 64);
	StringCopy(&(Local_35[29 /*6*/]), "MAPEMAIL_TXT11", 24);
	StringCopy(&(Local_36[29 /*16*/]), "NHP_PHOTO_7", 64);
	StringCopy(&(Local_35[30 /*6*/]), "MAPEMAIL_TXT12", 24);
	StringCopy(&(Local_36[30 /*16*/]), "NHP_PHOTO_14", 64);
	StringCopy(&(Local_35[31 /*6*/]), "MAPEMAIL_TXT13", 24);
	StringCopy(&(Local_36[31 /*16*/]), "NHP_PHOTO_4", 64);
	StringCopy(&(Local_35[32 /*6*/]), "MAPEMAIL_TXT14", 24);
	StringCopy(&(Local_36[32 /*16*/]), "NHP_PHOTO_17", 64);
	StringCopy(&(Local_35[33 /*6*/]), "MAPEMAIL_TXT15", 24);
	StringCopy(&(Local_36[33 /*16*/]), "NHP_PHOTO_2", 64);
	StringCopy(&(Local_35[34 /*6*/]), "MAPEMAIL_TXT16", 24);
	StringCopy(&(Local_36[34 /*16*/]), "NHP_PHOTO_15", 64);
	StringCopy(&(Local_35[35 /*6*/]), "MAPEMAIL_TXT17", 24);
	StringCopy(&(Local_36[35 /*16*/]), "NHP_PHOTO_8", 64);
	StringCopy(&(Local_35[36 /*6*/]), "MAPEMAIL_TXT18", 24);
	StringCopy(&(Local_36[36 /*16*/]), "NHP_PHOTO_9", 64);
	StringCopy(&(Local_35[37 /*6*/]), "MAPEMAIL_TXT19", 24);
	StringCopy(&(Local_36[37 /*16*/]), "NHP_PHOTO_16", 64);
	StringCopy(&(Local_35[38 /*6*/]), "MC_EMAIL_0", 24);
	StringCopy(&(Local_36[38 /*16*/]), "NHP_prep_mines", 64);
	StringCopy(&(Local_35[39 /*6*/]), "BONEPIC1_TXT", 24);
	StringCopy(&(Local_36[39 /*16*/]), "", 64);
	StringCopy(&(Local_35[40 /*6*/]), "BONEPIC2_TXT", 24);
	StringCopy(&(Local_36[40 /*16*/]), "", 64);
	StringCopy(&(Local_35[41 /*6*/]), "BONEPIC3_TXT", 24);
	StringCopy(&(Local_36[41 /*16*/]), "", 64);
	StringCopy(&(Local_35[42 /*6*/]), "BONEPIC4_TXT", 24);
	StringCopy(&(Local_36[42 /*16*/]), "", 64);
	StringCopy(&(Local_35[43 /*6*/]), "BONEPIC5_TXT", 24);
	StringCopy(&(Local_36[43 /*16*/]), "", 64);
	StringCopy(&(Local_35[44 /*6*/]), "BONEPIC6_TXT", 24);
	StringCopy(&(Local_36[44 /*16*/]), "", 64);
	StringCopy(&(Local_35[45 /*6*/]), "BONEPIC7_TXT", 24);
	StringCopy(&(Local_36[45 /*16*/]), "", 64);
	StringCopy(&(Local_35[46 /*6*/]), "BONEPIC8_TXT", 24);
	StringCopy(&(Local_36[46 /*16*/]), "", 64);
	StringCopy(&(Local_35[47 /*6*/]), "BONEPIC9_TXT", 24);
	StringCopy(&(Local_36[47 /*16*/]), "", 64);
	StringCopy(&(Local_35[48 /*6*/]), "BONEPIC10_TXT", 24);
	StringCopy(&(Local_36[48 /*16*/]), "", 64);
	StringCopy(&(Local_35[49 /*6*/]), "BONEPIC11_TXT", 24);
	StringCopy(&(Local_36[49 /*16*/]), "", 64);
	StringCopy(&(Local_35[50 /*6*/]), "BONEPIC12_TXT", 24);
	StringCopy(&(Local_36[50 /*16*/]), "", 64);
	StringCopy(&(Local_35[51 /*6*/]), "BONEPIC13_TXT", 24);
	StringCopy(&(Local_36[51 /*16*/]), "", 64);
	StringCopy(&(Local_35[52 /*6*/]), "BONEPIC14_TXT", 24);
	StringCopy(&(Local_36[52 /*16*/]), "", 64);
	StringCopy(&(Local_35[53 /*6*/]), "BONEPIC15_TXT", 24);
	StringCopy(&(Local_36[53 /*16*/]), "", 64);
	StringCopy(&(Local_35[54 /*6*/]), "BONEPIC16_TXT", 24);
	StringCopy(&(Local_36[54 /*16*/]), "", 64);
	StringCopy(&(Local_35[55 /*6*/]), "BONEPIC17_TXT", 24);
	StringCopy(&(Local_36[55 /*16*/]), "", 64);
	StringCopy(&(Local_35[56 /*6*/]), "BONEPIC18_TXT", 24);
	StringCopy(&(Local_36[56 /*16*/]), "", 64);
	StringCopy(&(Local_35[57 /*6*/]), "BONEPIC19_TXT", 24);
	StringCopy(&(Local_36[57 /*16*/]), "", 64);
	StringCopy(&(Local_35[58 /*6*/]), "BONEPIC20_TXT", 24);
	StringCopy(&(Local_36[58 /*16*/]), "", 64);
}

void func_56()
{
	if (func_44() == 0)
	{
		unk_0xB8927E9A664047D4(Global_14466[Global_14458 /*3*/]);
	}
	if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) == 0)
	{
		func_57(0);
	}
	if (iLocal_37)
	{
		unk_0x91DE928AD81C6F57(&Local_34);
	}
	Global_16856 = 0;
	Global_16855 = 0;
	unk_0x8F1A9FE6D91AAFEB();
}

void func_57(int iParam0)
{
	if (func_61())
	{
		return;
	}
	if (Global_14681)
	{
		func_59(0, 0);
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
	if (!func_58())
	{
		Global_14513.f_1 = 3;
	}
}

int func_58()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_59(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_60(0))
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

int func_60(int iParam0)
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

bool func_61()
{
	return unk_0x05EFB6A616B6FADE(Global_1678593, 19);
}

