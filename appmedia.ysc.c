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
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<6> Local_27[25];
	int iLocal_28 = 0;
	vector3 vLocal_29 = { 0f, 0f, 0f };
	vector3 vLocal_30 = { 0f, 0f, 0f };
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
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
	func_27();
	func_26();
	while (true)
	{
		wait(0);
		if (iLocal_24 == 0)
		{
			if (Global_14513.f_1 != 9)
			{
				switch (Global_14513.f_1)
				{
					case 7:
						if ((iLocal_31 == 0 && iLocal_32 == 0) && Global_16857 == 0)
						{
							func_22();
							func_16();
						}
						break;
					
					case 8:
						if ((func_15(2, Global_14481, 0) && iLocal_31 == 0) && iLocal_32 == 0)
						{
							func_14();
							Global_14491 = 1;
							if (Global_14513.f_1 > 3)
							{
								if (unk_0x05EFB6A616B6FADE(Global_2384, 15))
								{
								}
								func_13();
							}
						}
						break;
					
					default:
						break;
				}
				if (func_12())
				{
					func_11();
				}
				if (iLocal_31)
				{
					func_9();
				}
				if (iLocal_32)
				{
					func_8();
				}
			}
			else
			{
				Global_14515 = 6;
				func_11();
			}
		}
		else
		{
			func_2();
		}
		if (func_1())
		{
			func_11();
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
	iLocal_25 = unk_0xB4A12645D96795E4(0);
	switch (iLocal_25)
	{
		case 0:
			iLocal_24 = 0;
			func_3();
			break;
		
		case 1:
			break;
		
		case 2:
			Global_14513.f_1 = 3;
			func_11();
			break;
	}
}

void func_3()
{
	int iVar0;
	
	func_7(Global_14494, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_21 = unk_0xEB5E8214BC6A2E66();
	iLocal_22 = 0;
	iVar0 = 0;
	while (iLocal_22 < iLocal_21)
	{
		if (unk_0xA32FA5ABEA0DB57A(iLocal_22))
		{
			func_6(Global_14494, "SET_DATA_SLOT", to_float(18), to_float(iVar0), to_float(0), -1f, -1f, &(Local_27[iLocal_22 /*6*/]), 0, 0, 0, 0);
			iLocal_26[iVar0] = iLocal_22;
			iVar0++;
		}
		iLocal_22++;
	}
	func_7(Global_14494, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_4(Global_14494, "SET_HEADER", "CELL_MSMENU_1", 0, 0, 0, 0);
	if (Global_14501)
	{
		func_6(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_6(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xFA57C719261AA55D(&Global_2383, 17);
}

void func_4(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x31A9E530D137684F(iParam0, sParam1);
	func_5(sParam2);
	if (!unk_0x429D45A6C6520026(sParam3))
	{
		func_5(sParam3);
	}
	if (!unk_0x429D45A6C6520026(sParam4))
	{
		func_5(sParam4);
	}
	if (!unk_0x429D45A6C6520026(sParam5))
	{
		func_5(sParam5);
	}
	if (!unk_0x429D45A6C6520026(sParam6))
	{
		func_5(sParam6);
	}
	unk_0x271C1332F482646C();
}

void func_5(char* sParam0)
{
	unk_0x390B339C943A8A54(sParam0);
	unk_0xD481829E3E36543B();
}

void func_6(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_5(sParam7);
	}
	if (!unk_0x429D45A6C6520026(sParam8))
	{
		func_5(sParam8);
	}
	if (!unk_0x429D45A6C6520026(sParam9))
	{
		func_5(sParam9);
	}
	if (!unk_0x429D45A6C6520026(sParam10))
	{
		func_5(sParam10);
	}
	if (!unk_0x429D45A6C6520026(sParam11))
	{
		func_5(sParam11);
	}
	unk_0x271C1332F482646C();
}

void func_7(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_8()
{
	if (iLocal_31 == 0 && iLocal_32 == 1)
	{
		if (iLocal_36)
		{
			vLocal_30.x = (vLocal_30.x + 1f);
		}
		if (vLocal_30.x > vLocal_29.x || vLocal_30.x == vLocal_29.x)
		{
			vLocal_30.x = vLocal_29.x;
			iLocal_36 = 0;
		}
		if (iLocal_37)
		{
			vLocal_30.y = (vLocal_30.y - 2f);
		}
		if (vLocal_30.y < vLocal_29.y || vLocal_30.y == vLocal_29.y)
		{
			vLocal_30.y = vLocal_29.y;
			iLocal_37 = 0;
		}
		if (iLocal_38)
		{
			vLocal_30.z = (vLocal_30.z - 7f);
		}
		if (vLocal_30.z < vLocal_29.z || vLocal_30.z == vLocal_29.z)
		{
			vLocal_30.z = vLocal_29.z;
			iLocal_38 = 0;
		}
		if ((iLocal_36 == 0 && iLocal_37 == 0) && iLocal_38 == 0)
		{
			iLocal_32 = 0;
			if (Global_14513.f_1 > 3)
			{
				Global_14513.f_1 = 7;
				unk_0x135C61E339DABBAC(1);
				Global_16859 = 1;
				func_26();
			}
		}
		unk_0xD698A1090D8964DE(vLocal_30, 0);
	}
}

void func_9()
{
	if ((iLocal_31 == 1 && iLocal_32 == 0) && Global_16857 == 6)
	{
		if (iLocal_33)
		{
			vLocal_30.x = (vLocal_30.x - 1f);
		}
		if (vLocal_30.x < vLocal_29.x || vLocal_30.x == vLocal_29.x)
		{
			vLocal_30.x = vLocal_29.x;
			iLocal_33 = 0;
		}
		if (iLocal_34)
		{
			vLocal_30.y = (vLocal_30.y - 0.5f);
		}
		if (vLocal_30.y < vLocal_29.y || vLocal_30.y == vLocal_29.y)
		{
			vLocal_30.y = vLocal_29.y;
			iLocal_34 = 0;
		}
		if (iLocal_35)
		{
			vLocal_30.z = (vLocal_30.z + 7f);
		}
		if (vLocal_30.z > vLocal_29.z || vLocal_30.z == vLocal_29.z)
		{
			vLocal_30.z = vLocal_29.z;
			iLocal_35 = 0;
		}
		if ((iLocal_33 == 0 && iLocal_34 == 0) && iLocal_35 == 0)
		{
			iLocal_31 = 0;
			func_10("CELL_MSHELP_2");
		}
		unk_0xD698A1090D8964DE(vLocal_30, 0);
	}
	if (unk_0x05EFB6A616B6FADE(Global_2384, 15))
	{
		iLocal_31 = 0;
		iLocal_32 = 0;
		func_7(Global_14494, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_6(Global_14494, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_MSMENU_3", 0, 0, 0, 0);
		if (Global_14501)
		{
			func_6(Global_14494, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
			func_6(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_6(Global_14494, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_6(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_6(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xFA57C719261AA55D(&Global_2383, 17);
		func_7(Global_14494, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_4(Global_14494, "SET_HEADER", &(Local_27[iLocal_23 /*6*/]), 0, 0, 0, 0);
	}
}

void func_10(char* sParam0)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 1, true, -1);
}

void func_11()
{
	Global_16859 = 1;
	unk_0x135C61E339DABBAC(1);
	unk_0x8F1A9FE6D91AAFEB();
}

int func_12()
{
	if (Global_2989 == 1 || Global_14513.f_1 < 7)
	{
		Global_14500 = 1;
		return 1;
	}
	return 0;
}

void func_13()
{
	if (iLocal_31 == 0)
	{
		unk_0xBA5B2F8FAE922A4A(&vLocal_30, 0);
		vLocal_29 = { Global_14473 };
		iLocal_32 = 1;
		iLocal_36 = 1;
		iLocal_37 = 1;
		iLocal_38 = 1;
	}
}

void func_14()
{
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0xE11F00B4AC919F45(-1, "Menu_Back", &Global_14502, 1);
	}
}

int func_15(int iParam0, int iParam1, int iParam2)
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

void func_16()
{
	if (iLocal_28)
	{
		if (timera() > 50)
		{
			iLocal_28 = 0;
		}
	}
	if (unk_0x0B9F814BC8D14042(2))
	{
		if (func_15(2, 181, 0))
		{
			func_20();
		}
		if (func_15(2, 180, 0))
		{
			func_17();
		}
	}
	if (iLocal_28 == 0)
	{
		if (func_15(2, Global_14489, 0))
		{
			func_20();
			iLocal_28 = 1;
			settimera(0);
		}
		if (func_15(2, Global_14490, 0))
		{
			func_17();
			iLocal_28 = 1;
			settimera(0);
		}
	}
}

void func_17()
{
	func_7(Global_14494, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xE11F00B4AC919F45(-1, "Menu_Navigate", &Global_14502, 1);
	func_18();
}

void func_18()
{
	if (func_19())
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

int func_19()
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

void func_20()
{
	func_7(Global_14494, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xE11F00B4AC919F45(-1, "Menu_Navigate", &Global_14502, 1);
	func_21();
}

void func_21()
{
	if (func_19())
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

void func_22()
{
	int iVar0;
	
	if (Global_14491 == 0)
	{
		if (func_15(2, Global_14482, 0))
		{
			unk_0xFA57C719261AA55D(&Global_2384, 15);
			func_24();
			Global_14491 = 1;
			unk_0x31A9E530D137684F(Global_14494, "GET_CURRENT_SELECTION");
			iLocal_20 = unk_0xD8015A504E3ED13A();
			while (!unk_0x5BFB8B9A58F76839(iLocal_20))
			{
				wait(0);
			}
			iVar0 = unk_0x7C261B004A9EEB72(iLocal_20);
			if (iVar0 > -1)
			{
				iLocal_23 = iLocal_26[iVar0];
				if (Global_14513.f_1 > 3)
				{
					if (Global_16857 == 0)
					{
						func_7(Global_14494, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_6(Global_14494, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_MSMENU_2", 0, 0, 0, 0);
						func_7(Global_14494, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_4(Global_14494, "SET_HEADER", &(Local_27[iLocal_23 /*6*/]), 0, 0, 0, 0);
						if (Global_14501)
						{
							func_6(Global_14494, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
							func_6(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
						}
						else
						{
							func_6(Global_14494, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
							func_6(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_6(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0xFA57C719261AA55D(&Global_2383, 17);
						Global_16861 = iLocal_23;
						Global_16857 = 12;
						Global_14513.f_1 = 8;
						func_23();
					}
				}
			}
		}
	}
}

void func_23()
{
	if (iLocal_32 == 0)
	{
		unk_0xBA5B2F8FAE922A4A(&vLocal_30, 0);
		vLocal_29 = { -90.3f, -0.8f, 90f };
		iLocal_31 = 1;
		iLocal_33 = 1;
		iLocal_34 = 1;
		iLocal_35 = 1;
	}
}

void func_24()
{
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0xE11F00B4AC919F45(-1, "Menu_Accept", &Global_14502, 1);
		func_25();
	}
}

void func_25()
{
	if (func_19())
	{
		unk_0xD1DF8842C4808642(5);
	}
}

void func_26()
{
	if ((unk_0x365C4466BC171A2D() || unk_0x29A02C184A66D25E()) || unk_0x47C01C0E6F4C1D06())
	{
		unk_0xCB95C026D1F9EAFF();
		if (unk_0x3CBBFE9BB8E08E3F(0))
		{
			iLocal_24 = 1;
		}
		else
		{
			Global_16859 = 1;
			Global_14513.f_1 = 3;
			func_11();
		}
	}
	else
	{
		func_3();
	}
}

void func_27()
{
	StringCopy(&(Local_27[0 /*6*/]), "CELL_MSSLOT_1", 24);
	StringCopy(&(Local_27[1 /*6*/]), "CELL_MSSLOT_2", 24);
	StringCopy(&(Local_27[2 /*6*/]), "CELL_MSSLOT_3", 24);
	StringCopy(&(Local_27[3 /*6*/]), "CELL_MSSLOT_4", 24);
	StringCopy(&(Local_27[4 /*6*/]), "CELL_MSSLOT_5", 24);
	StringCopy(&(Local_27[5 /*6*/]), "CELL_MSSLOT_6", 24);
	StringCopy(&(Local_27[6 /*6*/]), "CELL_MSSLOT_7", 24);
	StringCopy(&(Local_27[7 /*6*/]), "CELL_MSSLOT_8", 24);
	StringCopy(&(Local_27[8 /*6*/]), "CELL_MSSLOT_9", 24);
	StringCopy(&(Local_27[9 /*6*/]), "CELL_MSSLOT_10", 24);
	StringCopy(&(Local_27[10 /*6*/]), "CELL_MSSLOT_11", 24);
	StringCopy(&(Local_27[11 /*6*/]), "CELL_MSSLOT_12", 24);
	StringCopy(&(Local_27[12 /*6*/]), "CELL_MSSLOT_13", 24);
	StringCopy(&(Local_27[13 /*6*/]), "CELL_MSSLOT_14", 24);
	StringCopy(&(Local_27[14 /*6*/]), "CELL_MSSLOT_15", 24);
	StringCopy(&(Local_27[15 /*6*/]), "CELL_MSSLOT_16", 24);
	StringCopy(&(Local_27[16 /*6*/]), "CELL_MSSLOT_17", 24);
	StringCopy(&(Local_27[17 /*6*/]), "CELL_MSSLOT_18", 24);
	StringCopy(&(Local_27[18 /*6*/]), "CELL_MSSLOT_19", 24);
	StringCopy(&(Local_27[19 /*6*/]), "CELL_MSSLOT_20", 24);
}

