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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	vector3 vLocal_38[24] = "";
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	vector3 vLocal_42[24] = "";
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	char cLocal_46[64] = "";
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	vector3 vLocal_55[24] = "";
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	char* sLocal_59 = NULL;
	vector3 vLocal_60[24] = "";
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	char* sLocal_64 = NULL;
	char* sLocal_65 = NULL;
	char* sLocal_66 = NULL;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	vector3 vLocal_70[24] = "";
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	char* sLocal_74 = NULL;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_95[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_96[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_97[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_98 = 0;
	int iLocal_99 = 0;
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
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_34 = 5000;
	iLocal_35 = 5000;
	unk_0x5341E3E598550C46();
	while (true)
	{
		wait(0);
		if (unk_0x05EFB6A616B6FADE(Global_2384, 1))
		{
			if (!unk_0x05EFB6A616B6FADE(Global_2383, 20))
			{
				if (unk_0xB39808C1DCE0DCFA())
				{
					if (Global_14501)
					{
						func_108(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_14456)
						{
							func_108(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_108(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0xFA57C719261AA55D(&Global_2384, 1);
				}
			}
		}
		if (unk_0x05EFB6A616B6FADE(Global_14688, 0))
		{
			if (!func_107())
			{
				if (!unk_0x05EFB6A616B6FADE(Global_14688, 1))
				{
					unk_0x2BCFB39E86340DAA(&Global_14688, 1);
					if (unk_0x4C9BACA8D249CB13())
					{
						iLocal_89 = unk_0xFFCC7EBF88BDEE54();
					}
					else
					{
						iLocal_85 = unk_0xFD34717937104F1C();
					}
				}
				if (unk_0x4C9BACA8D249CB13())
				{
					iLocal_91 = unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), iLocal_89);
				}
				else
				{
					iLocal_86 = unk_0xFD34717937104F1C();
					iLocal_91 = (iLocal_86 - iLocal_85);
				}
				if (iLocal_91 < 3000)
				{
					if (func_105(&Global_15276, &Global_15892, &Global_15812, Global_15825, Global_16807, Global_16808, 0))
					{
						Global_14688 = 0;
					}
				}
				else
				{
					Global_14688 = 0;
				}
			}
		}
		if ((!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) && !unk_0x05EFB6A616B6FADE(Global_4456448.f_17, 4)) && !func_104())
		{
			if (Global_15822 != 0)
			{
				if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) == 0)
				{
					func_103();
				}
			}
		}
		if (iLocal_32 == 1)
		{
			func_99();
		}
		switch (Global_15822)
		{
			case 0:
				break;
			
			case 1:
				if (Global_15828)
				{
					if (Global_15818 == 0)
					{
						func_97();
					}
					else
					{
						func_96();
						func_97();
					}
				}
				else if (Global_15818 == 0)
				{
					func_86();
				}
				else
				{
					func_96();
					func_68();
				}
				break;
			
			case 2:
				func_62();
				break;
			
			case 3:
				func_58();
				break;
			
			case 4:
				if (Global_15828)
				{
					if (Global_15830)
					{
						func_57();
					}
					else
					{
						func_7();
					}
				}
				else
				{
					func_5();
				}
				break;
			
			case 5:
				func_4();
				break;
			
			case 6:
				func_1();
				break;
			
			default:
				break;
		}
	}
}

void func_1()
{
	Global_15832 = 0;
	Global_14512 = 0;
	func_2();
}

void func_2()
{
	Global_2621441 = 0;
	Global_2621442 = 0;
	Global_15833 = 0;
	Global_15834 = 0;
	Global_15835 = 0;
	Global_15836 = 0;
	Global_15111.f_161 = -99;
	Global_15111.f_162 = { 0f, 0f, 0f };
	Global_15826 = 0;
	Global_15827 = 0;
	Global_15869 = 0;
	Global_15870 = 0;
	Global_15873 = 0;
	Global_15875 = 0;
	Global_15874 = 0;
	Global_15877 = 0;
	Global_15876 = 0;
	Global_16839 = 0;
	Global_15879 = 0;
	if (Global_14513.f_1 == 10)
	{
	}
	else if (unk_0x05EFB6A616B6FADE(Global_2383, 11))
	{
		func_3();
	}
	Global_15828 = 0;
	Global_15829 = 0;
	Global_15830 = 0;
	Global_15831 = 0;
	Global_16813 = 0;
	Global_16812 = 0;
	Global_16819 = 0;
	Global_16818 = 0;
	Global_16815 = 0;
	Global_16814 = 0;
	Global_16816 = 0;
	Global_16817 = 0;
	Global_15818 = 0;
	Global_15819 = 0;
	Global_15820 = 0;
	Global_15821 = 0;
	Global_16080 = 0;
	Global_16843 = 5000;
	Global_14496 = 0;
	unk_0xFA57C719261AA55D(&Global_2383, 20);
	unk_0xFA57C719261AA55D(&Global_2383, 24);
	unk_0xFA57C719261AA55D(&Global_2384, 23);
	unk_0xFA57C719261AA55D(&Global_2385, 0);
	unk_0xFA57C719261AA55D(&Global_2384, 9);
	unk_0xFA57C719261AA55D(&Global_2384, 31);
	unk_0xFA57C719261AA55D(&Global_2384, 17);
	unk_0xFA57C719261AA55D(&Global_2385, 5);
	Global_16806 = 0;
	Global_16805 = 0;
	if (unk_0x904275961B875DEB())
	{
		Global_15822 = 4;
	}
	else
	{
		Global_15822 = 0;
		Global_16833 = 0;
		Global_16844 = unk_0xFD34717937104F1C();
	}
}

void func_3()
{
	if (!Global_71205)
	{
		if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			if (unk_0x05EFB6A616B6FADE(Global_2383, 11))
			{
				if (!Global_14456)
				{
					unk_0x1701009E85B15DA4(unk_0xA19140A5C42D8715(), 0, 1);
				}
				if (Global_71205)
				{
					unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 244, true);
					unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 243, true);
					unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 242, true);
				}
				unk_0xFA57C719261AA55D(&Global_2383, 11);
			}
		}
	}
}

void func_4()
{
	Global_15832 = 0;
	Global_14512 = 0;
	func_2();
}

void func_5()
{
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0xFF12F654A8561928(unk_0xA19140A5C42D8715()))
		{
			if (Global_15878 == 0)
			{
				func_6();
			}
		}
	}
	if (iLocal_33 == 1)
	{
		func_6();
		func_6();
	}
	if (Global_16814 == 0)
	{
		if (iLocal_31 == 0)
		{
			if (Global_16833 == 1)
			{
				unk_0xE48DB212A493FDD3(1);
				iLocal_31 = 1;
			}
		}
		else if (Global_16833 == 0)
		{
			unk_0xB4E5B1A6FE923ECB();
			iLocal_31 = 0;
		}
	}
	else if (Global_16816 > 0)
	{
		iLocal_37 = unk_0xFD34717937104F1C();
		if ((iLocal_37 - iLocal_36) > Global_16816)
		{
			unk_0xB0A387DA05324E42();
			Global_16814 = 0;
		}
	}
	if (Global_16833 == 0)
	{
		if (!unk_0x904275961B875DEB())
		{
			Global_15822 = 6;
		}
	}
}

void func_6()
{
	unk_0xB4E5B1A6FE923ECB();
	Global_16833 = 0;
	if (unk_0x904275961B875DEB())
	{
		unk_0xA8B97F91CBDE376C(false);
		Global_15822 = 6;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xB39808C1DCE0DCFA())
	{
		if (!unk_0x05EFB6A616B6FADE(Global_2383, 11))
		{
			if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
			{
				if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					if (Global_71205 == 0)
					{
						func_55();
					}
				}
			}
		}
		else if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			if (unk_0x8A29BBDF4603E52B(unk_0xA19140A5C42D8715()))
			{
				if (Global_71205 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_71205 == 0)
	{
		func_54();
	}
	if (iLocal_33 == 1)
	{
		func_50(0);
	}
	if (iLocal_31 == 0)
	{
		if (Global_16833 == 1)
		{
			if (Global_16834 == 1)
			{
				unk_0xE48DB212A493FDD3(1);
				iLocal_31 = 1;
				Global_16834 = 0;
			}
		}
	}
	else if (Global_16833 == 0)
	{
		if (Global_16834 == 1)
		{
			unk_0xB4E5B1A6FE923ECB();
			iLocal_31 = 0;
			Global_16834 = 0;
		}
	}
	if (Global_15875 == 0)
	{
		if (!Global_15835)
		{
			if (!unk_0x05EFB6A616B6FADE(Global_2384, 31))
			{
				if (!unk_0x05EFB6A616B6FADE(Global_2384, 27))
				{
					if (func_49())
					{
						if (Global_14513.f_1 > 6)
						{
							unk_0x2BCFB39E86340DAA(&Global_2384, 24);
							unk_0x2BCFB39E86340DAA(&Global_2384, 27);
							unk_0xFA57C719261AA55D(&Global_2384, 26);
							unk_0xFA57C719261AA55D(&Global_2384, 25);
						}
					}
				}
			}
		}
	}
	if (unk_0xB39808C1DCE0DCFA() == 0 && Global_15835 == 0)
	{
		if (Global_15875 == 1)
		{
			unk_0x2BCFB39E86340DAA(&Global_2384, 23);
		}
		else
		{
			unk_0xFA57C719261AA55D(&Global_2384, 23);
		}
		if (Global_15879)
		{
			if (Global_15875 == 0)
			{
				Global_15441 = { Global_15880 };
				Global_15898 = { Global_15886 };
				Global_15832 = 0;
				Global_16839 = 6;
				func_48();
				return;
			}
		}
		if (!Global_15877)
		{
			while (Global_15875 == 1)
			{
				wait(0);
				if (Global_14513.f_1 < 6)
				{
					Global_15875 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_47();
						if (Global_15877)
						{
							iLocal_30 = 1;
							Global_16837 = 1;
							func_108(Global_14494, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_15964, &(Global_106070.f_28022[Global_1698 /*29*/].f_7), &(Global_106070.f_28022[Global_1698 /*29*/].f_3), &(Global_106070.f_28022[Global_1698 /*29*/].f_3), 0);
							func_46(Global_14494, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_14501)
							{
								func_108(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_108(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								unk_0x2BCFB39E86340DAA(&Global_2383, 17);
								func_108(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_108(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_108(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								unk_0x2BCFB39E86340DAA(&Global_2383, 17);
								func_108(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_30 = 1;
							Global_16835 = 1;
							if (Global_106070.f_28022[Global_1698 /*29*/].f_24[Global_14513] == 0)
							{
								func_108(Global_14494, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_15964, "CELL_300", &(Global_117[Global_1698 /*10*/].f_4), "CELL_195", 0);
								func_46(Global_14494, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_108(Global_14494, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_15964, &(Global_106070.f_28022[Global_1698 /*29*/].f_7), &(Global_106070.f_28022[Global_1698 /*29*/].f_3), &(Global_106070.f_28022[Global_1698 /*29*/].f_3), 0);
								func_46(Global_14494, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_14501)
							{
								func_108(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_108(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								func_108(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_108(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_108(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							unk_0xFA57C719261AA55D(&Global_2383, 17);
						}
					}
					if (func_45(2, Global_14482, 0))
					{
						func_43();
						Global_14439 = 0.19f;
						Global_15875 = 0;
						func_41();
						if (Global_15877)
						{
							Global_15441 = { Global_15958 };
							Global_16839 = 5;
						}
						else if (Global_15820 > 0)
						{
							Global_16080 = 1;
							Global_15822 = 0;
							Global_16843 = 0;
							if (unk_0x05EFB6A616B6FADE(Global_2384, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_16806 + 1)
								{
									uLocal_94[iVar0] = func_40(&(Global_16081[iVar0 /*6*/]));
									uLocal_95[iVar0] = func_40(&(Global_16443[iVar0 /*6*/]));
									iVar0++;
								}
								func_39(Global_16806, &Global_15111, Global_1698, &Global_15898, &uLocal_94, &uLocal_95, 9, 0, 0, 0, 0);
							}
							else if (Global_15820 == 2)
							{
								func_22(&Global_15111, Global_1698, &Global_15898, &(Global_15976[0 /*6*/]), &(Global_16028[0 /*6*/]), &(Global_15976[1 /*6*/]), &(Global_16028[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_16839 = 1;
							Global_16835 = 0;
							Global_16837 = 0;
							Global_15832 = 0;
							func_21();
							return;
						}
						else
						{
							Global_15441 = { Global_15916 };
							Global_16839 = 1;
						}
						Global_16835 = 0;
						Global_16837 = 0;
						Global_15832 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14483, 0) || unk_0x05EFB6A616B6FADE(Global_2383, 24))
					{
						func_43();
						Global_14439 = 0.19f;
						Global_15875 = 0;
						func_41();
						if (Global_15877)
						{
							Global_15441 = { Global_15952 };
							Global_16839 = 4;
						}
						else if (Global_15820 > 0)
						{
							Global_16080 = 1;
							Global_15822 = 0;
							Global_16843 = 0;
							if (unk_0x05EFB6A616B6FADE(Global_2384, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_16805 + 1)
								{
									uLocal_96[iVar1] = func_40(&(Global_16262[iVar1 /*6*/]));
									uLocal_97[iVar1] = func_40(&(Global_16624[iVar1 /*6*/]));
									iVar1++;
								}
								func_39(Global_16805, &Global_15111, Global_1698, &Global_15898, &uLocal_96, &uLocal_97, 9, 0, 0, 0, 0);
							}
							else if (Global_15820 == 2)
							{
								func_22(&Global_15111, Global_1698, &Global_15898, &(Global_15989[0 /*6*/]), &(Global_16041[0 /*6*/]), &(Global_15989[1 /*6*/]), &(Global_16041[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_16839 = 2;
							Global_16835 = 0;
							Global_16837 = 0;
							Global_15832 = 0;
							func_21();
							return;
						}
						else
						{
							Global_15441 = { Global_15922 };
							Global_16839 = 2;
						}
						Global_16835 = 0;
						Global_16837 = 0;
						Global_15832 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14485, 0))
					{
						if (Global_15877)
						{
							Global_14439 = 0.19f;
							Global_15875 = 0;
							func_41();
							func_43();
							Global_15441 = { Global_15946 };
							Global_16839 = 3;
							Global_16835 = 0;
							Global_16837 = 0;
							Global_15832 = 0;
							func_21();
							func_48();
							return;
						}
					}
				}
			}
		}
		else
		{
			while (Global_15875)
			{
				wait(0);
				if (Global_14513.f_1 < 6)
				{
					Global_15875 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_47();
						func_46(Global_14494, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_108(Global_14494, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_108(Global_14494, "SET_DATA_SLOT", to_float(18), to_float(1), to_float(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_108(Global_14494, "SET_DATA_SLOT", to_float(18), to_float(2), to_float(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_46(Global_14494, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_20(Global_14494, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_14501)
						{
							func_108(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							func_108(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_108(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0xFA57C719261AA55D(&Global_2383, 17);
						iLocal_98 = 0;
						iLocal_30 = 1;
					}
					func_14();
					if (func_45(2, Global_14482, 0))
					{
						func_43();
						Global_15875 = 0;
						func_41();
						unk_0x31A9E530D137684F(Global_14494, "GET_CURRENT_SELECTION");
						iLocal_99 = unk_0xD8015A504E3ED13A();
						while (!unk_0x5BFB8B9A58F76839(iLocal_99))
						{
							wait(0);
						}
						iVar2 = unk_0x7C261B004A9EEB72(iLocal_99);
						switch (iVar2)
						{
							case 0:
								Global_15441 = { Global_15952 };
								Global_16839 = 4;
								break;
							
							case 1:
								Global_15441 = { Global_15946 };
								Global_16839 = 3;
								break;
							
							case 2:
								Global_15441 = { Global_15958 };
								Global_16839 = 5;
								break;
						}
						Global_16835 = 0;
						Global_16837 = 0;
						Global_15832 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14483, 0))
					{
						Global_15875 = 0;
						func_41();
					}
				}
			}
		}
		if (Global_15823 == 0)
		{
			unk_0xA8B97F91CBDE376C(false);
			settimera(0);
			while (timera() < 900 && Global_14513.f_1 == 9)
			{
				wait(0);
			}
			Global_15822 = 6;
		}
		unk_0xE11F00B4AC919F45(-1, "Hang_Up", &Global_14502, 1);
		func_13();
		Global_14513.f_1 = Global_14515;
		func_8();
	}
	else if (Global_14681 == 0)
	{
		if (func_45(2, Global_14481, 0))
		{
			if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
			{
				if (unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
				{
					if (unk_0x05EFB6A616B6FADE(Global_2383, 20))
					{
					}
					else
					{
						Global_14491 = 1;
						func_41();
						unk_0xA8B97F91CBDE376C(false);
						Global_15871 = 1;
						Global_15872 = 1;
						Global_15822 = 6;
						func_13();
						Global_14513.f_1 = Global_14515;
						func_8();
					}
				}
			}
		}
	}
}

void func_8()
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
			func_46(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_11(Global_2988);
			if (Global_2988 == 1)
			{
				func_46(Global_14494, "DISPLAY_VIEW", 1f, to_float(Global_14517), -1082130432, -1082130432, -1082130432);
				Global_14493 = Global_14517;
			}
			else
			{
				func_46(Global_14494, "DISPLAY_VIEW", 1f, to_float(Global_14518), -1082130432, -1082130432, -1082130432);
				Global_14493 = Global_14518;
			}
			if (Global_14501)
			{
				func_108(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_108(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_108(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_108(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14683 == 0)
			{
				func_108(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xFA57C719261AA55D(&Global_2383, 17);
			}
			else if (Global_71205)
			{
				func_108(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xFA57C719261AA55D(&Global_2383, 17);
			}
			else
			{
				if (Global_14682 == 1)
				{
					if (Global_14501)
					{
						func_108(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_108(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14501)
				{
					func_108(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_108(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x2BCFB39E86340DAA(&Global_2383, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_46(Global_14494, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_108(Global_14494, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_108(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xFA57C719261AA55D(&Global_2383, 17);
			if (unk_0x05EFB6A616B6FADE(Global_2383, 20))
			{
				func_108(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14501)
			{
				func_108(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14456)
				{
					func_108(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_108(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14512 == 1)
			{
				func_10();
				func_46(Global_14494, "SET_THEME", to_float(Global_106070.f_14023[Global_14513 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15835)
				{
					unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
					unk_0x380580A1A1667F69(4);
					unk_0x380580A1A1667F69(0);
					unk_0x380580A1A1667F69(2);
					unk_0x390B339C943A8A54("CELL_CONDFON");
					unk_0xC327C023FDA37F2E(&Global_15837);
					unk_0xD481829E3E36543B();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					unk_0x271C1332F482646C();
				}
				else if (Global_106070.f_28022[Global_1698 /*29*/].f_24[Global_14513] == 0)
				{
					func_108(Global_14494, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_1698 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_108(Global_14494, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_106070.f_28022[Global_1698 /*29*/].f_3), &(Global_106070.f_28022[Global_1698 /*29*/].f_7), "CELL_217", &(Global_106070.f_28022[Global_1698 /*29*/].f_3), 0);
				}
				func_46(Global_14494, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15822 == 4 || Global_15822 == 3)
			{
				func_46(Global_14494, "SET_THEME", to_float(Global_106070.f_14023[Global_14513 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_15835)
				{
					unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
					unk_0x380580A1A1667F69(4);
					unk_0x380580A1A1667F69(0);
					unk_0x380580A1A1667F69(2);
					unk_0x390B339C943A8A54("CELL_CONDFON");
					unk_0xC327C023FDA37F2E(&Global_15837);
					unk_0xD481829E3E36543B();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
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
						func_46(Global_14494, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_108(Global_14494, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_1698 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_46(Global_14494, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_108(Global_14494, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_106070.f_28022[Global_1698 /*29*/].f_3), &(Global_106070.f_28022[Global_1698 /*29*/].f_7), &cVar0, &(Global_106070.f_28022[Global_1698 /*29*/].f_3), 0);
					}
				}
				func_46(Global_14494, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_21();
			break;
		
		default:
			break;
	}
}

void func_9(char* sParam0)
{
	unk_0x390B339C943A8A54(sParam0);
	unk_0xD481829E3E36543B();
}

void func_10()
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

void func_11(int iParam0)
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
		if (func_12(14))
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
								func_9(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(iVar2);
								unk_0x271C1332F482646C();
							}
							if (Global_2458186)
							{
								if (iVar1 == 14)
								{
									func_108(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_108(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(Global_16890), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_108(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_108(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_108(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_9(&(Global_2390[iVar1 /*15*/]));
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
								func_9(&(Global_2390[iVar1 /*15*/]));
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
								func_9(&(Global_2390[iVar1 /*15*/]));
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
								func_9(&(Global_2390[iVar1 /*15*/]));
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
								func_9(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(42);
								unk_0x271C1332F482646C();
							}
							else if (Global_2390[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1624079.f_1;
								func_108(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_108(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_12(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_13()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return;
	}
	switch (Global_14515)
	{
		case 5:
			Global_14515 = 6;
			break;
		
		case 6:
			if (unk_0x05EFB6A616B6FADE(Global_2384, 5))
			{
				Global_14515 = 6;
				unk_0xFA57C719261AA55D(&Global_2384, 5);
			}
			else
			{
				Global_14515 = 3;
			}
			break;
		
		case 7:
			Global_14515 = 3;
			break;
		
		case 3:
			if (unk_0x05EFB6A616B6FADE(Global_2384, 5))
			{
				Global_14515 = 6;
				unk_0xFA57C719261AA55D(&Global_2384, 5);
			}
			else
			{
				Global_14515 = 3;
			}
			break;
		
		default:
			Global_14515 = 3;
			break;
	}
}

void func_14()
{
	if (iLocal_98)
	{
		if (timera() > 50)
		{
			iLocal_98 = 0;
		}
	}
	if (iLocal_98 == 0)
	{
		if (func_45(2, Global_14489, 0) || unk_0xDF0ADAD7E584090D(2, 181))
		{
			func_18();
			iLocal_98 = 1;
			settimera(0);
		}
		if (func_45(2, Global_14490, 0) || unk_0xDF0ADAD7E584090D(2, 180))
		{
			func_15();
			iLocal_98 = 1;
			settimera(0);
		}
	}
}

void func_15()
{
	func_46(Global_14494, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xE11F00B4AC919F45(-1, "Menu_Navigate", &Global_14502, 1);
	func_16();
}

void func_16()
{
	if (func_17())
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

int func_17()
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

void func_18()
{
	func_46(Global_14494, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xE11F00B4AC919F45(-1, "Menu_Navigate", &Global_14502, 1);
	func_19();
}

void func_19()
{
	if (func_17())
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

void func_20(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x31A9E530D137684F(iParam0, sParam1);
	func_9(sParam2);
	if (!unk_0x429D45A6C6520026(sParam3))
	{
		func_9(sParam3);
	}
	if (!unk_0x429D45A6C6520026(sParam4))
	{
		func_9(sParam4);
	}
	if (!unk_0x429D45A6C6520026(sParam5))
	{
		func_9(sParam5);
	}
	if (!unk_0x429D45A6C6520026(sParam6))
	{
		func_9(sParam6);
	}
	unk_0x271C1332F482646C();
}

void func_21()
{
	if (unk_0x0FA486DE15EB3004(Global_14494))
	{
		if (Global_14512 == 1)
		{
			if (Global_14501)
			{
				func_108(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_108(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15869)
			{
				func_108(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0x05EFB6A616B6FADE(Global_2383, 20))
			{
				func_108(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14501)
			{
				func_108(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_108(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_108(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xFA57C719261AA55D(&Global_2383, 17);
		}
		else
		{
			func_108(Global_14494, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_108(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xFA57C719261AA55D(&Global_2383, 17);
			if (unk_0x05EFB6A616B6FADE(Global_2383, 20))
			{
				func_108(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14501)
			{
				func_108(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14456)
				{
					func_108(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_108(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_22(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	
	func_38(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_37();
	if (iParam8 == 1)
	{
		Global_15834 = 1;
	}
	else
	{
		Global_15834 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	func_35(2, &uVar0, &uVar1, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_23(&uVar0, &uVar1, iParam7, bParam11);
}

int func_23(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_15823 = 0;
	if (Global_15822 == 0 || Global_15824 == 2)
	{
		if (Global_15822 != 0)
		{
			if (iParam2 > Global_15824)
			{
				if (bParam3 == 0)
				{
					unk_0xA8B97F91CBDE376C(false);
					Global_14513.f_1 = 3;
					Global_15822 = 0;
					Global_15823 = 1;
					Global_15875 = 0;
					Global_15818 = 0;
					Global_15819 = 0;
				}
				else
				{
					func_103();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x904275961B875DEB())
		{
			return 0;
		}
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_33();
		Global_15111 = { Global_15276 };
		Global_15828 = Global_15829;
		Global_15835 = Global_15836;
		Global_2621442 = Global_2621441;
		Global_15837 = { Global_15853 };
		Global_15830 = Global_15831;
		Global_16812 = Global_16813;
		Global_16820 = { Global_16826 };
		Global_16818 = Global_16819;
		Global_16814 = Global_16815;
		Global_16816 = Global_16817;
		Global_15441.f_368 = Global_16809;
		Global_15441.f_369 = Global_16810;
		Global_15441.f_370 = Global_16811;
		Global_15818 = Global_15819;
		Global_15820 = Global_15821;
		if (Global_16080 == 0)
		{
			Global_15976[0 /*6*/] = { Global_16002[0 /*6*/] };
			Global_15976[1 /*6*/] = { Global_16002[1 /*6*/] };
			Global_16028[0 /*6*/] = { Global_16054[0 /*6*/] };
			Global_16028[1 /*6*/] = { Global_16054[1 /*6*/] };
			Global_15989[0 /*6*/] = { Global_16015[0 /*6*/] };
			Global_15989[1 /*6*/] = { Global_16015[1 /*6*/] };
			Global_16041[0 /*6*/] = { Global_16067[0 /*6*/] };
			Global_16041[1 /*6*/] = { Global_16067[1 /*6*/] };
		}
		if (Global_15828)
		{
			unk_0xFA57C719261AA55D(&Global_2383, 20);
			unk_0xFA57C719261AA55D(&Global_2384, 17);
			unk_0xFA57C719261AA55D(&Global_2385, 0);
			if (bParam3)
			{
				func_27();
				if (Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14513.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14479 == 1)
			{
				return 0;
			}
			if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
			{
				if (unk_0x6625F609B391348E(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (func_26())
				{
					return 0;
				}
				if (unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x3977B7555441B490(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x45F0F396A506B7CD(unk_0xA19140A5C42D8715(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_71205)
				{
					if (Global_16080 == 0)
					{
						if (unk_0x4374EED90C523366(unk_0xA19140A5C42D8715()))
						{
							return 0;
						}
						if (unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC()))
						{
							return 0;
						}
						if (unk_0x1CD6AC2CF787DFCB(unk_0xA19140A5C42D8715()))
						{
							return 0;
						}
						if (unk_0x53B0513B47405A70(unk_0xD4E735F4B6A956AC()))
						{
							return 0;
						}
					}
				}
			}
			if (func_25())
			{
				return 0;
			}
			else
			{
				switch (Global_14513.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
					}
			}
			func_24();
			Global_15832 = bParam3;
		}
		Global_15824 = iParam2;
		if (Global_15818 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15818)
			{
				StringCopy(&(Global_15441.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15441.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14688 = 0;
		func_48();
		return 1;
	}
	if (Global_15822 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15824 || iParam2 == Global_15824)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_103();
	}
	return 0;
}

void func_24()
{
	Global_15875 = Global_15874;
	Global_15869 = Global_15870;
	Global_15916 = { Global_15904 };
	Global_15922 = { Global_15910 };
	Global_15877 = Global_15876;
	Global_15946 = { Global_15928 };
	Global_15952 = { Global_15934 };
	Global_15958 = { Global_15940 };
	Global_15964 = { Global_15970 };
	Global_1698 = Global_1699;
	Global_1700 = Global_1701;
	Global_15833 = Global_15834;
	Global_15835 = Global_15836;
	Global_15837 = { Global_15853 };
	Global_15826 = Global_15827;
	Global_16838 = 0;
	Global_15871 = 0;
	Global_15872 = 0;
	unk_0xFA57C719261AA55D(&Global_2384, 16);
}

int func_25()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_26()
{
	int iVar0;
	int iVar1;
	
	if (Global_71205)
	{
		iVar0 = 0;
		unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iVar1, 1);
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xEA8B3B18A25152B5() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0x70F79B0BFBB1E7AC(unk_0xA19140A5C42D8715(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_27()
{
	if (func_12(14))
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
		Global_14513 = func_28();
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

var func_28()
{
	func_29();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_29()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_32(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_31(unk_0xA19140A5C42D8715());
			if (func_30(iVar0) && (!func_12(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_30(Global_106070.f_2355.f_539.f_4301))
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

bool func_30(int iParam0)
{
	return iParam0 < 3;
}

int func_31(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_32(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_32(int iParam0)
{
	if (func_30(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_33()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15111[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15111[iVar0 /*10*/].f_1), "", 24);
		Global_15111[iVar0 /*10*/].f_7 = 0;
		Global_15111[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15111.f_161 = -99;
	Global_15111.f_162 = { 0f, 0f, 0f };
}

bool func_34(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1368245.f_203[iParam1];
			}
			break;
	}
	return unk_0x05EFB6A616B6FADE(Global_1368245.f_1048, iParam0);
}

void func_35(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_36(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_36(var uParam0)
{
	Global_15819 = uParam0;
	Global_15829 = 1;
	Global_15836 = 0;
	Global_15831 = 0;
	Global_16813 = 0;
	Global_16819 = 0;
	Global_2621441 = 0;
}

void func_37()
{
	Global_15870 = 0;
	Global_15829 = 1;
	Global_15836 = 0;
	Global_15831 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_15836 = 0;
	Global_16819 = 0;
	Global_15827 = 0;
	Global_15874 = 0;
	Global_15876 = 0;
	Global_2621441 = 0;
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15276 = { *uParam0 };
	Global_1699 = iParam1;
	StringCopy(&Global_15892, sParam2, 24);
	Global_16811 = iParam5;
	if (iParam3 == 0)
	{
		Global_16809 = 1;
		Global_16807 = 0;
	}
	else
	{
		Global_16809 = 0;
		Global_16807 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16810 = 1;
		Global_16808 = 0;
	}
	else
	{
		Global_16810 = 0;
		Global_16808 = 1;
	}
}

int func_39(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	func_38(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_37();
	if (iParam7 == 1)
	{
		Global_15834 = 1;
	}
	else
	{
		Global_15834 = 0;
	}
	func_36(uParam0);
	return func_23(uParam4, uParam5, iParam6, bParam10);
}

var func_40(var uParam0)
{
	return uParam0;
}

void func_41()
{
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0xE11F00B4AC919F45(-1, "Menu_Accept", &Global_14502, 1);
		func_42();
	}
}

void func_42()
{
	if (func_17())
	{
		unk_0xD1DF8842C4808642(5);
	}
}

void func_43()
{
	if (func_44())
	{
		if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				if (!Global_14456)
				{
					if (!unk_0x05EFB6A616B6FADE(Global_2383, 11))
					{
						func_55();
					}
				}
			}
		}
	}
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
		if (func_12(14))
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

int func_45(int iParam0, int iParam1, int iParam2)
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

void func_46(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_47()
{
	if (func_44())
	{
		if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				if (!Global_14456)
				{
					if (unk_0x05EFB6A616B6FADE(Global_2383, 11))
					{
						func_3();
					}
				}
			}
		}
	}
}

void func_48()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14690[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xA8B97F91CBDE376C(false);
	Global_15822 = 1;
}

int func_49()
{
	if (unk_0x4C9BACA8D249CB13())
	{
		iLocal_91 = unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), iLocal_90);
	}
	else
	{
		iLocal_88 = unk_0xFD34717937104F1C();
		iLocal_91 = (iLocal_88 - iLocal_87);
	}
	return 0;
}

void func_50(int iParam0)
{
	if (func_53())
	{
		return;
	}
	if (Global_14681)
	{
		func_51(0, 0);
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
	if (!func_25())
	{
		Global_14513.f_1 = 3;
	}
}

void func_51(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_52(0))
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

int func_52(int iParam0)
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

bool func_53()
{
	return unk_0x05EFB6A616B6FADE(Global_1678593, 19);
}

void func_54()
{
	if (func_45(2, Global_14490, 0))
	{
		if (Global_16833 == 0)
		{
			if (Global_15828)
			{
				if (unk_0x05EFB6A616B6FADE(Global_2384, 17))
				{
				}
				else
				{
					unk_0x5859769392A6C796();
				}
			}
		}
	}
}

void func_55()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (func_56() && unk_0xCCB06FD56E3262CF(unk_0xA19140A5C42D8715(), 0))
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

int func_56()
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

void func_57()
{
	if (Global_71205 == 0)
	{
		func_54();
	}
	if (iLocal_33 == 1)
	{
		func_50(0);
	}
	if (iLocal_30 == 0)
	{
		iLocal_30 = 1;
		Global_16835 = 1;
		if (Global_106070.f_28022[Global_1698 /*29*/].f_24[Global_14513] == 0)
		{
			func_108(Global_14494, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_15964, "CELL_300", "CELL_195", "CELL_195", 0);
			func_46(Global_14494, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_108(Global_14494, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_15964, &(Global_106070.f_28022[Global_1698 /*29*/].f_7), &(Global_106070.f_28022[Global_1698 /*29*/].f_3), &(Global_106070.f_28022[Global_1698 /*29*/].f_3), 0);
			func_46(Global_14494, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_14439 = 0.2f;
		if (Global_14501)
		{
			func_108(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_108(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			func_108(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_108(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_108(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xFA57C719261AA55D(&Global_2383, 17);
	}
	if (Global_15875 == 1)
	{
		if (Global_14513.f_1 < 6)
		{
			Global_15875 = 0;
		}
		else
		{
			if (Global_14453 == 0)
			{
				if (func_45(2, Global_14482, 0))
				{
					Global_14439 = 0.19f;
					Global_15875 = 0;
					func_41();
					Global_16840 = 1;
					iLocal_32 = 1;
				}
			}
			if (func_45(2, Global_14483, 0))
			{
				Global_14439 = 0.19f;
				Global_15875 = 0;
				func_41();
				Global_16840 = 2;
			}
		}
	}
	else if (Global_16840 == 2)
	{
		if (Global_15823 == 0)
		{
			unk_0xA8B97F91CBDE376C(false);
			Global_15822 = 6;
		}
		func_13();
		Global_14513.f_1 = Global_14515;
		func_8();
	}
	else if (!unk_0xB39808C1DCE0DCFA())
	{
		iLocal_32 = 0;
		unk_0xA8B97F91CBDE376C(false);
		Global_15822 = 6;
		unk_0xE11F00B4AC919F45(-1, "Hang_Up", &Global_14502, 1);
		func_13();
		Global_14513.f_1 = Global_14515;
		func_8();
	}
}

void func_58()
{
	if (Global_14689 == 1)
	{
		if (unk_0xB39808C1DCE0DCFA())
		{
			if (unk_0x8A3DCF7D4516BECD())
			{
				Global_14689 = 0;
			}
		}
		if (!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			Global_14689 = 0;
			unk_0xA8B97F91CBDE376C(false);
			Global_15822 = 6;
		}
	}
	if (timerb() > iLocal_35)
	{
		if (Global_14689 == 1)
		{
			Global_14689 = 0;
		}
	}
	if (timera() < Global_16843 || Global_14689 == 1)
	{
		if (func_45(2, Global_14481, 0))
		{
			if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
			{
				if (unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
				{
					if (unk_0x05EFB6A616B6FADE(Global_2383, 20))
					{
					}
					else
					{
						Global_14491 = 1;
						func_41();
						unk_0xA8B97F91CBDE376C(false);
						Global_15871 = 1;
						Global_15822 = 6;
						unk_0xFA57C719261AA55D(&Global_2383, 27);
						if (!Global_15833)
						{
							unk_0x2BCFB39E86340DAA(&Global_2384, 5);
						}
						func_13();
						Global_14513.f_1 = Global_14515;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_2383, 27);
		Global_15822 = 4;
		Global_15879 = 0;
		func_61();
		func_60();
		if (!Global_15835)
		{
			if (Global_16839 == 0)
			{
				if (!unk_0x05EFB6A616B6FADE(Global_2385, 5))
				{
					unk_0xB0A387DA05324E42();
				}
				unk_0xFA57C719261AA55D(&Global_2385, 5);
			}
			else
			{
				unk_0x18BD0E0AAD3BB0BA(Global_15441.f_368, Global_15441.f_369);
			}
		}
		func_59();
	}
}

void func_59()
{
	if (unk_0x4C9BACA8D249CB13())
	{
		iLocal_90 = unk_0xFFCC7EBF88BDEE54();
	}
	else
	{
		iLocal_87 = unk_0xFD34717937104F1C();
	}
}

void func_60()
{
	if (Global_15835)
	{
		if (Global_71205)
		{
			if (unk_0x0FA486DE15EB3004(Global_14494))
			{
				if (!unk_0x47C01C0E6F4C1D06())
				{
					func_108(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					unk_0x2BCFB39E86340DAA(&(Global_2524719.f_1721), 15);
				}
			}
		}
	}
}

void func_61()
{
	if (unk_0x0FA486DE15EB3004(Global_14494))
	{
		if (!Global_15830)
		{
			func_108(Global_14494, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_108(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xFA57C719261AA55D(&Global_2383, 17);
			if (unk_0x05EFB6A616B6FADE(Global_2383, 20))
			{
				func_108(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14501)
			{
				func_108(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14456)
				{
					func_108(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_108(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15835)
			{
				unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
				unk_0x380580A1A1667F69(4);
				unk_0x380580A1A1667F69(0);
				unk_0x380580A1A1667F69(2);
				unk_0x390B339C943A8A54("CELL_CONDFON");
				unk_0xC327C023FDA37F2E(&Global_15837);
				unk_0xD481829E3E36543B();
				func_9("CELL_300");
				func_9("CELL_219");
				func_9("CELL_219");
				unk_0x271C1332F482646C();
			}
			else if (Global_106070.f_28022[Global_1698 /*29*/].f_24[Global_14513] == 0)
			{
				func_108(Global_14494, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_1698 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_108(Global_14494, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_106070.f_28022[Global_1698 /*29*/].f_3), &(Global_106070.f_28022[Global_1698 /*29*/].f_7), "CELL_219", &(Global_106070.f_28022[Global_1698 /*29*/].f_3), 0);
			}
		}
		func_46(Global_14494, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_62()
{
	if (unk_0x4C9BACA8D249CB13())
	{
		iLocal_92 = unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), iLocal_78);
		iLocal_93 = unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), iLocal_81);
	}
	else
	{
		iLocal_77 = unk_0xFD34717937104F1C();
		iLocal_92 = (iLocal_77 - iLocal_76);
		iLocal_80 = unk_0xFD34717937104F1C();
		iLocal_93 = (iLocal_80 - iLocal_79);
	}
	if (Global_15869 == 1)
	{
		if (func_44())
		{
			if (iLocal_92 > 4000)
			{
				if (unk_0x05EFB6A616B6FADE(Global_2383, 14))
				{
					if (unk_0x0FA486DE15EB3004(Global_14494))
					{
						func_41();
						Global_14512 = 2;
						func_61();
						func_60();
					}
				}
			}
		}
		else if (iLocal_92 > 2000)
		{
			if (unk_0x05EFB6A616B6FADE(Global_2383, 14))
			{
				if (unk_0x0FA486DE15EB3004(Global_14494))
				{
					func_41();
					Global_14512 = 2;
					func_61();
					func_60();
				}
			}
		}
	}
	if (iLocal_93 > 10000)
	{
		Global_14512 = 3;
	}
	if (Global_14512 == 2)
	{
		iLocal_30 = 0;
		Global_15822 = 4;
		func_55();
		Global_15879 = 0;
		func_61();
		func_60();
		if (!Global_15835)
		{
			if (Global_16839 == 0)
			{
				unk_0xB0A387DA05324E42();
			}
			else
			{
				unk_0x18BD0E0AAD3BB0BA(Global_15441.f_368, Global_15441.f_369);
			}
		}
		func_59();
		Global_16838 = 0;
	}
	if (Global_15869 == 0)
	{
		if (Global_14512 == 3)
		{
			if (Global_15835)
			{
				func_64();
				func_50(0);
			}
			else
			{
				func_63();
				Global_16838 = 1;
				unk_0xA8B97F91CBDE376C(false);
				Global_15822 = 6;
				func_13();
				Global_14513.f_1 = Global_14515;
				func_8();
			}
		}
	}
	else if (Global_14512 == 3)
	{
	}
}

void func_63()
{
}

void func_64()
{
	Global_2530962.f_2 = 1;
	Global_2530962.f_38 = 1;
	if (unk_0x18F86E07E41D913F())
	{
		if (unk_0xEA9109762077E6AD())
		{
			while (unk_0xB5A1D0F935549A97())
			{
				wait(0);
			}
			unk_0x4686B8E0A4639AFB();
			Global_2530962 = 0;
			Global_2530962.f_2 = 0;
		}
		else if (func_67(Global_2530962.f_20))
		{
			if (unk_0x6053E2C13442D6D7(&(Global_2530962.f_20)))
			{
				if (!unk_0xA69E919EA774C5B2(&(Global_2530962.f_20)))
				{
					func_65();
				}
			}
		}
		else
		{
			func_65();
		}
	}
	else
	{
		func_65();
	}
	if (Global_2530962.f_37)
	{
		func_50(0);
	}
	Global_2530962.f_37 = 0;
	Global_2530962.f_3 = 0;
}

void func_65()
{
	Global_2530962.f_1 = 0;
	Global_2530962 = 0;
	Global_2530962.f_2 = 0;
	Global_2530962.f_33 = -1;
	Global_2530962.f_34 = -1;
	StringCopy(&(Global_2530962.f_4), "", 64);
	StringCopy(&(Global_2530962.f_39[0 /*16*/]), "", 64);
	Global_2530962.f_38 = 0;
	Global_2530962.f_56 = 0;
	Global_2530962.f_57 = 0;
	Global_2530962.f_58 = -2;
	Global_2530962.f_3 = 0;
	func_66(&(Global_2530962.f_20));
}

void func_66(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

bool func_67(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x09BF290B57B95740(&uParam0, 13);
}

void func_68()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	
	iLocal_75 = 0;
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	while (iLocal_75 < Global_15818)
	{
		func_85();
		func_84();
		func_83();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_29 == 0)
		{
			cLocal_42 = { Global_15441.f_6[iLocal_75 /*6*/] };
			StringConCat(&cLocal_42, "A", 24);
			Global_14690[iVar2 /*6*/] = { Global_15441.f_6[iLocal_75 /*6*/] };
			StringConCat(&(Global_14690[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_14690[iVar2 /*6*/]), iVar1, 24);
			cLocal_38 = { Global_14690[iVar2 /*6*/] };
			StringConCat(&cLocal_38, "A", 24);
			if (unk_0x445EC9E7EACB710E(&cLocal_38))
			{
				StringCopy(&cLocal_46, unk_0x08791BD93D5986C6(&cLocal_38), 64);
				iVar3 = func_82(iVar13);
				iVar4 = func_81(iVar13);
				uVar5 = func_79(iVar13);
				uLocal_67 = func_78();
				uLocal_68 = func_77();
				uLocal_69 = func_76();
				uVar6 = func_75(iVar13);
				uVar7 = func_74(iVar13);
				uVar8 = func_73(iVar13);
				uVar12 = func_72(iVar13);
				uVar9 = func_71(iVar13);
				uVar10 = func_70(iVar13);
				uVar11 = func_69(iVar13);
				if (unk_0x445EC9E7EACB710E(&(Global_14690[iVar2 /*6*/])))
				{
					if (unk_0x3CAC2741CC1A631F(&(Global_14690[iVar2 /*6*/]), &(Global_15441.f_187[iLocal_75 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						unk_0xA3508BF79D052912(iVar3, &cLocal_46, &(Global_14690[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (unk_0x445EC9E7EACB710E(&cLocal_42))
			{
				StringCopy(&cLocal_46, unk_0x08791BD93D5986C6(&cLocal_42), 64);
				iVar3 = func_82(0);
				iVar4 = func_81(0);
				uVar5 = func_79(0);
				uLocal_67 = func_78();
				uLocal_68 = func_77();
				uLocal_69 = func_76();
				uVar6 = func_75(0);
				uVar7 = func_74(0);
				uVar8 = func_73(0);
				uVar12 = func_72(0);
				uVar9 = func_71(0);
				uVar10 = func_70(0);
				uVar11 = func_69(0);
				unk_0xA3508BF79D052912(iVar3, &cLocal_46, &(Global_15441.f_6[iLocal_75 /*6*/]), iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				StringCopy(&(Global_14690[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			else
			{
				StringCopy(&(Global_14690[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			iVar2++;
			iVar13++;
			if (iVar2 == 70)
			{
			}
		}
		iLocal_75++;
		iLocal_29 = 0;
		iVar1 = 1;
		iVar13 = 0;
		iVar2 = 0;
	}
	if (Global_15828 == 0)
	{
		unk_0x4EB59592D544A6D1(uLocal_68);
		unk_0x901C83BB631AFFE0(uLocal_69);
		unk_0x7B40B9DF0FF6A623(Global_15441.f_368, Global_15441.f_369, Global_15441.f_370, uLocal_67);
		Global_15822 = 4;
	}
}

int func_69(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0x5668D45AC6EE4949(unk_0x08791BD93D5986C6(&cLocal_70), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (unk_0x3CAC2741CC1A631F(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_70(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0x5668D45AC6EE4949(unk_0x08791BD93D5986C6(&cLocal_70), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (unk_0x3CAC2741CC1A631F(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_71(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0x5668D45AC6EE4949(unk_0x08791BD93D5986C6(&cLocal_70), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (unk_0x3CAC2741CC1A631F(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_72(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0x5668D45AC6EE4949(unk_0x08791BD93D5986C6(&cLocal_70), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (unk_0x3CAC2741CC1A631F(sVar0, "0"))
	{
		return 1;
	}
	if (unk_0x3CAC2741CC1A631F(sVar0, "1"))
	{
		return 1;
	}
	if (unk_0x3CAC2741CC1A631F(sVar0, "2"))
	{
		return 2;
	}
	if (unk_0x3CAC2741CC1A631F(sVar0, "3"))
	{
		return 3;
	}
	if (unk_0x3CAC2741CC1A631F(sVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_73(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0x5668D45AC6EE4949(unk_0x08791BD93D5986C6(&cLocal_70), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (unk_0x3CAC2741CC1A631F(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_74(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0x5668D45AC6EE4949(unk_0x08791BD93D5986C6(&cLocal_70), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (unk_0x3CAC2741CC1A631F(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_75(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0x5668D45AC6EE4949(unk_0x08791BD93D5986C6(&cLocal_70), iParam0 * 7, iParam0 * 7 + 1);
	if (unk_0x3CAC2741CC1A631F(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_76()
{
	char* sVar0;
	
	sVar0 = unk_0x5668D45AC6EE4949(unk_0x08791BD93D5986C6(&cLocal_60), 2, 3);
	if (unk_0x3CAC2741CC1A631F(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77()
{
	char* sVar0;
	
	sVar0 = unk_0x5668D45AC6EE4949(unk_0x08791BD93D5986C6(&cLocal_60), 1, 2);
	if (unk_0x3CAC2741CC1A631F(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_78()
{
	char* sVar0;
	
	sVar0 = unk_0x5668D45AC6EE4949(unk_0x08791BD93D5986C6(&cLocal_60), 0, 1);
	if (unk_0x3CAC2741CC1A631F(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_79(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0x5668D45AC6EE4949(unk_0x08791BD93D5986C6(&cLocal_55), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_80(sVar0);
}

int func_80(char* sParam0)
{
	if (unk_0x3CAC2741CC1A631F(sParam0, "0"))
	{
		return 0;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "1"))
	{
		return 1;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "2"))
	{
		return 2;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "3"))
	{
		return 3;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "4"))
	{
		return 4;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "5"))
	{
		return 5;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "6"))
	{
		return 6;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "7"))
	{
		return 7;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "8"))
	{
		return 8;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "9"))
	{
		return 9;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "A"))
	{
		return 10;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "B"))
	{
		return 11;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "C"))
	{
		return 12;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "D"))
	{
		return 13;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "E"))
	{
		return 14;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "F"))
	{
		return 15;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "G"))
	{
		return 16;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "H"))
	{
		return 17;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "I"))
	{
		return 18;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "J"))
	{
		return 19;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "K"))
	{
		return 20;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "L"))
	{
		return 21;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "M"))
	{
		return 22;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "N"))
	{
		return 23;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "O"))
	{
		return 24;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "P"))
	{
		return 25;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "Q"))
	{
		return 26;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "R"))
	{
		return 27;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "S"))
	{
		return 28;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "T"))
	{
		return 29;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "U"))
	{
		return 30;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "V"))
	{
		return 31;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "W"))
	{
		return 32;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "X"))
	{
		return 33;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "Y"))
	{
		return 34;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "Z"))
	{
		return 35;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_81(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0x5668D45AC6EE4949(unk_0x08791BD93D5986C6(&cLocal_55), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_80(sVar0);
}

int func_82(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0x5668D45AC6EE4949(unk_0x08791BD93D5986C6(&cLocal_55), iParam0 * 3, iParam0 * 3 + 1);
	return func_80(sVar0);
}

void func_83()
{
	cLocal_70 = { Global_15441.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_70, "LF", 24);
	if (unk_0x445EC9E7EACB710E(&cLocal_70))
	{
		sLocal_74 = unk_0x08791BD93D5986C6(&cLocal_70);
		if (unk_0x7032042E5696FFD7(sLocal_74))
		{
		}
	}
}

void func_84()
{
	cLocal_60 = { Global_15441.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_60, "IF", 24);
	if (unk_0x445EC9E7EACB710E(&cLocal_60))
	{
		sLocal_64 = unk_0x5668D45AC6EE4949(unk_0x08791BD93D5986C6(&cLocal_60), 0, 1);
		if (unk_0x7032042E5696FFD7(sLocal_64))
		{
		}
		sLocal_65 = unk_0x5668D45AC6EE4949(unk_0x08791BD93D5986C6(&cLocal_60), 1, 2);
		if (unk_0x7032042E5696FFD7(sLocal_65))
		{
		}
		sLocal_66 = unk_0x5668D45AC6EE4949(unk_0x08791BD93D5986C6(&cLocal_60), 2, 3);
		if (unk_0x7032042E5696FFD7(sLocal_66))
		{
		}
	}
}

void func_85()
{
	cLocal_55 = { Global_15441.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_55, "SL", 24);
	if (unk_0x445EC9E7EACB710E(&cLocal_55))
	{
		sLocal_59 = unk_0x08791BD93D5986C6(&cLocal_55);
		if (unk_0x7032042E5696FFD7(sLocal_59))
		{
		}
	}
}

void func_86()
{
	func_87();
	unk_0x4EB59592D544A6D1(uLocal_68);
	unk_0x901C83BB631AFFE0(uLocal_69);
	if (Global_16814)
	{
		unk_0xD73918D672DB381E(Global_15441.f_368, Global_15441.f_369, Global_15441.f_370, uLocal_67);
		iLocal_36 = unk_0xFD34717937104F1C();
	}
	else
	{
		unk_0x7B40B9DF0FF6A623(Global_15441.f_368, Global_15441.f_369, Global_15441.f_370, uLocal_67);
	}
	Global_15822 = 4;
}

void func_87()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	iLocal_33 = 0;
	if (unk_0x7F8575429E0169A5(&Global_15898))
	{
		if (unk_0x3CAC2741CC1A631F(&Global_15898, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
		iVar13 = 0;
		if (unk_0x7DD04831D0FC44CA() || unk_0x29A02C184A66D25E())
		{
			if (Global_1573346 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_71205 || func_95())
		{
			if (Global_1573346 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_93())
		{
			iVar14 = 1;
		}
		if (func_92(unk_0xFEB6EEC0545AF7AA(&Global_15898)))
		{
			iVar14 = 0;
			Global_2621442 = 0;
			iVar13 = 1;
		}
		if (((Global_15824 < 5 || Global_15824 == 10) || Global_15824 == 12) || Global_15824 == 13)
		{
			if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
			{
				unk_0x6A633E13B2A856AE(&Global_15898, 7);
				while (!unk_0xD744813D9841CA9A(7))
				{
					wait(0);
				}
			}
			else
			{
				unk_0x5B13896B620B74C4(&Global_15898, 15);
				while (!unk_0xD744813D9841CA9A(15))
				{
					wait(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
		{
			unk_0x6A633E13B2A856AE(&Global_15898, 6);
			while (!unk_0xD744813D9841CA9A(6))
			{
				wait(0);
			}
		}
		else
		{
			unk_0x5B13896B620B74C4(&Global_15898, 14);
			while (!unk_0xD744813D9841CA9A(14))
			{
				wait(0);
			}
		}
	}
	else
	{
		iLocal_33 = 1;
		return;
	}
	unk_0xB2C83A2C52081274();
	func_91();
	func_90();
	func_89();
	func_88();
	Global_16832 = 0;
	while (iVar2 < 70 && iLocal_29 == 0)
	{
		cLocal_42 = { Global_15441 };
		StringConCat(&cLocal_42, "A", 24);
		Global_14690[iVar2 /*6*/] = { Global_15441 };
		StringConCat(&(Global_14690[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_14690[iVar2 /*6*/]), iVar1, 24);
		cLocal_38 = { Global_14690[iVar2 /*6*/] };
		StringConCat(&cLocal_38, "A", 24);
		if (unk_0x445EC9E7EACB710E(&cLocal_38))
		{
			StringCopy(&cLocal_46, unk_0x08791BD93D5986C6(&cLocal_38), 64);
			iVar3 = func_82(iVar2);
			if (iVar3 == 9)
			{
				if (Global_4268518 == 0)
				{
				}
			}
			iVar4 = func_81(iVar2);
			uVar5 = func_79(iVar2);
			uLocal_67 = func_78();
			uLocal_68 = func_77();
			uLocal_69 = func_76();
			uVar6 = func_75(iVar2);
			uVar7 = func_74(iVar2);
			uVar8 = func_73(iVar2);
			uVar12 = func_72(iVar2);
			uVar9 = func_71(iVar2);
			uVar10 = func_70(iVar2);
			uVar11 = func_69(iVar2);
			if (unk_0x445EC9E7EACB710E(&(Global_14690[iVar2 /*6*/])))
			{
				if (Global_16812 == 0 && Global_16818 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0xA3508BF79D052912(iVar3, &cLocal_46, &(Global_14690[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				}
				else if (unk_0x3CAC2741CC1A631F(&(Global_14690[iVar2 /*6*/]), &Global_16820))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0xA3508BF79D052912(iVar3, &cLocal_46, &(Global_14690[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					Global_16832 = iVar2;
					if (Global_16818 == 1)
					{
						Global_16818 = 0;
					}
				}
			}
			else if (Global_16818 == 0 && Global_16812 == 0)
			{
				unk_0xA3508BF79D052912(iVar3, &cLocal_46, &cLocal_46, iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (unk_0x445EC9E7EACB710E(&cLocal_42))
			{
				StringCopy(&cLocal_46, unk_0x08791BD93D5986C6(&cLocal_42), 64);
				iVar3 = func_82(iVar2);
				iVar4 = func_81(iVar2);
				uVar5 = func_79(iVar2);
				uLocal_67 = func_78();
				uLocal_68 = func_77();
				uLocal_69 = func_76();
				uVar6 = func_75(iVar2);
				uVar7 = func_74(iVar2);
				uVar8 = func_73(iVar2);
				uVar12 = func_72(iVar2);
				uVar9 = func_71(iVar2);
				uVar10 = func_70(iVar2);
				uVar11 = func_69(iVar2);
				unk_0xA3508BF79D052912(iVar3, &cLocal_46, &Global_15441, iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iLocal_29 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_88()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_15111[iVar0 /*10*/].f_7 == 1)
		{
			if (unk_0xDC5D81351D6A4DDB(Global_15111[iVar0 /*10*/]) || Global_15111[iVar0 /*10*/] == 0)
			{
				unk_0x44692761461C6B50(iVar0, Global_15111[iVar0 /*10*/], &(Global_15111[iVar0 /*10*/].f_1));
			}
			if (Global_15111.f_161 == iVar0)
			{
				if ((Global_15111.f_162 != 0f && Global_15111.f_162.f_1 != 0f) && Global_15111.f_162.f_2 != 0f)
				{
					wait(0);
					unk_0x5CF9D54DEE6CAE00(Global_15111.f_161, Global_15111.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_4268518 == 1)
	{
		Global_4268518 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_4268337[iVar0 /*9*/].f_7 == 1)
			{
				if (unk_0xDC5D81351D6A4DDB(Global_4268337[iVar0 /*9*/]) || Global_4268337[iVar0 /*9*/] == 0)
				{
					unk_0x44692761461C6B50(Global_4268337[iVar0 /*9*/].f_8, Global_4268337[iVar0 /*9*/], &(Global_4268337[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_89()
{
	cLocal_70 = { Global_15441 };
	StringConCat(&cLocal_70, "LF", 24);
	if (unk_0x445EC9E7EACB710E(&cLocal_70))
	{
		sLocal_74 = unk_0x08791BD93D5986C6(&cLocal_70);
		if (unk_0x7032042E5696FFD7(sLocal_74))
		{
		}
	}
}

void func_90()
{
	cLocal_60 = { Global_15441 };
	StringConCat(&cLocal_60, "IF", 24);
	if (unk_0x445EC9E7EACB710E(&cLocal_60))
	{
		sLocal_64 = unk_0x5668D45AC6EE4949(unk_0x08791BD93D5986C6(&cLocal_60), 0, 1);
		if (unk_0x7032042E5696FFD7(sLocal_64))
		{
		}
		sLocal_65 = unk_0x5668D45AC6EE4949(unk_0x08791BD93D5986C6(&cLocal_60), 1, 2);
		if (unk_0x7032042E5696FFD7(sLocal_65))
		{
		}
		sLocal_66 = unk_0x5668D45AC6EE4949(unk_0x08791BD93D5986C6(&cLocal_60), 2, 3);
		if (unk_0x7032042E5696FFD7(sLocal_66))
		{
		}
	}
}

void func_91()
{
	cLocal_55 = { Global_15441 };
	StringConCat(&cLocal_55, "SL", 24);
	if (unk_0x445EC9E7EACB710E(&cLocal_55))
	{
		sLocal_59 = unk_0x08791BD93D5986C6(&cLocal_55);
		if (unk_0x7032042E5696FFD7(sLocal_59))
		{
		}
	}
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case -1311531715:
		case -389729032:
		case -2064440312:
		case 1151576899:
		case -360992886:
		case 677852396:
		case 1017913414:
		case 1994430427:
		case 1430620518:
		case 1883599394:
		case 1146168957:
		case 785850502:
		case 1566303118:
		case 1220013368:
		case 71115730:
		case -251854137:
		case -243052328:
		case -1417718107:
		case -351584050:
		case 1854373416:
		case -1753835094:
		case -353948811:
		case -1883622926:
		case -46742865:
		case 1260190997:
		case 1080008561:
		case 1151572586:
		case 964109535:
		case -436910453:
		case 659972380:
		case 2120484290:
		case 1439733926:
		case 26437732:
		case 303339033:
		case 2088730730:
		case -1771498136:
		case -1993049002:
		case -1370815517:
		case -1267951531:
		case 60077066:
		case 1821448936:
		case 2043251532:
		case 1314391445:
		case -1267946537:
		case 1507036282:
		case 214936528:
		case 1071832486:
		case 379745124:
		case 409276020:
		case -495085533:
		case -383711312:
		case -1809286053:
		case -229061423:
		case 1399593776:
		case -1592188591:
		case 2119072113:
		case -2005721953:
		case -439426052:
		case 101634771:
		case -7767504:
		case -1576797630:
		case -556967217:
		case 510894735:
		case -96774198:
			return 1;
		
		default:
	}
	return 0;
}

int func_93()
{
	if (Global_2621550)
	{
		if (func_12(0))
		{
			if (Global_3145728 || func_94(0))
			{
				return 1;
			}
		}
	}
	if (Global_2621549)
	{
		if (func_12(0))
		{
			if (Global_3670016 || func_94(0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_94(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

var func_95()
{
	return Global_1312834;
}

void func_96()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (unk_0x7DD04831D0FC44CA() || unk_0x29A02C184A66D25E())
	{
		if (Global_1573346 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_71205)
	{
		if (Global_1573346 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_93())
	{
		iVar1 = 1;
	}
	if (unk_0x7F8575429E0169A5(&Global_15898))
	{
		if (unk_0x3CAC2741CC1A631F(&Global_15898, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
	}
	if (func_92(unk_0xFEB6EEC0545AF7AA(&Global_15898)))
	{
		iVar1 = 0;
		Global_2621442 = 0;
		iVar0 = 1;
	}
	if (((Global_15824 < 5 || Global_15824 == 10) || Global_15824 == 12) || Global_15824 == 13)
	{
		if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
		{
			unk_0x6A633E13B2A856AE(&Global_15898, 7);
			while (!unk_0xD744813D9841CA9A(7))
			{
				wait(0);
			}
		}
		else
		{
			unk_0x5B13896B620B74C4(&Global_15898, 15);
			while (!unk_0xD744813D9841CA9A(15))
			{
				wait(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
	{
		unk_0x6A633E13B2A856AE(&Global_15898, 6);
		while (!unk_0xD744813D9841CA9A(6))
		{
			wait(0);
		}
	}
	else
	{
		unk_0x5B13896B620B74C4(&Global_15898, 14);
		while (!unk_0xD744813D9841CA9A(14))
		{
			wait(0);
		}
	}
	unk_0xB2C83A2C52081274();
	func_88();
}

void func_97()
{
	while (Global_14496 == 1 && unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) > 0)
	{
		wait(0);
	}
	Global_14496 = 0;
	if (unk_0x05EFB6A616B6FADE(Global_2383, 20))
	{
		unk_0x2BCFB39E86340DAA(&Global_2384, 1);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_2384, 1);
	}
	Global_14497 = 0;
	if (Global_15818 == 0)
	{
		if (!Global_15835)
		{
			func_87();
		}
	}
	else
	{
		func_68();
	}
	Global_14689 = 0;
	if (Global_15832)
	{
		if (Global_16839 == 0)
		{
			if (Global_15835 == 0)
			{
				iLocal_34 = 5000;
				unk_0x9E4DDD23D5BC57AA(Global_15441.f_368, Global_15441.f_369);
			}
			else
			{
				iLocal_34 = 0;
			}
		}
		else
		{
			iLocal_34 = 0;
		}
		Global_14689 = 1;
		settimerb(0);
		while ((Global_14689 == 1 && Global_15822 == 1) && timerb() < iLocal_34)
		{
			wait(0);
			if (!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
			{
				Global_14689 = 0;
				unk_0xA8B97F91CBDE376C(false);
				Global_15822 = 6;
			}
			if (unk_0xB39808C1DCE0DCFA())
			{
				if (unk_0x8A3DCF7D4516BECD())
				{
					Global_14689 = 0;
				}
			}
		}
		if (timerb() > iLocal_34)
		{
		}
		if (Global_15822 != 1)
		{
		}
		if (Global_14689 == 0)
		{
		}
	}
	Global_14689 = 0;
	if (((Global_14513.f_1 == 1 || Global_14513.f_1 == 0) || Global_15822 != 1) || Global_14479 == 1)
	{
		unk_0xA8B97F91CBDE376C(false);
		Global_15822 = 6;
	}
	else
	{
		if (Global_15830)
		{
			Global_16840 = 0;
			iLocal_32 = 0;
		}
		if (Global_15832 == 0)
		{
			if (Global_15873 == 0)
			{
				Global_14515 = Global_14513.f_1;
				Global_15873 = 1;
			}
			iLocal_30 = 0;
			if (Global_16839 == 0)
			{
				unk_0x9E4DDD23D5BC57AA(Global_15441.f_368, Global_15441.f_369);
				wait(0);
				Global_15822 = 3;
				Global_14689 = 1;
				settimerb(0);
				unk_0x2BCFB39E86340DAA(&Global_2383, 27);
				settimera(0);
			}
			else
			{
				Global_14689 = 0;
				Global_15822 = 4;
			}
			Global_14512 = 0;
			if (Global_15833 == 1)
			{
				if (Global_14513.f_1 == 10)
				{
				}
				if (!Global_14513.f_1 == 9)
				{
					if (Global_14513.f_1 > 4)
					{
						if (Global_14496 == 0)
						{
							Global_14513.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_14513.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_14513.f_1 == 4)
				{
					wait(0);
					if (Global_14689 == 1)
					{
						if (unk_0xB39808C1DCE0DCFA())
						{
							if (unk_0x8A3DCF7D4516BECD())
							{
								Global_14689 = 0;
							}
						}
					}
				}
				if (Global_14513.f_1 == 6)
				{
				}
				if (Global_14513.f_1 == 10)
				{
				}
				if (Global_14513.f_1 == 3)
				{
					unk_0xA8B97F91CBDE376C(false);
					Global_15822 = 6;
					Global_14497 = 1;
					return;
				}
				Global_14513.f_1 = 9;
				func_8();
			}
			if (unk_0x4C9BACA8D249CB13())
			{
				iLocal_84 = unk_0xFFCC7EBF88BDEE54();
			}
			else
			{
				iLocal_82 = unk_0xFD34717937104F1C();
			}
			while (Global_14513.f_1 != 9 && Global_14496 == 0)
			{
				wait(0);
				if (Global_14689 == 1)
				{
					if (unk_0xB39808C1DCE0DCFA())
					{
						if (unk_0x8A3DCF7D4516BECD())
						{
							Global_14689 = 0;
						}
					}
				}
				if (unk_0x4C9BACA8D249CB13())
				{
					iLocal_91 = unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), iLocal_84);
				}
				else
				{
					iLocal_83 = unk_0xFD34717937104F1C();
					iLocal_91 = (iLocal_83 - iLocal_82);
				}
				if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_91 > 15000)
					{
						Global_16838 = 1;
						Global_14496 = 1;
					}
				}
			}
			if (!unk_0x05EFB6A616B6FADE(Global_2383, 11))
			{
				if (func_44() == 0)
				{
					func_55();
				}
			}
			if (Global_14496 == 0)
			{
				if (!Global_16839 == 0)
				{
					Global_15879 = 0;
					func_61();
					func_60();
					if (!Global_15835)
					{
						if (Global_16839 == 0)
						{
							unk_0xB0A387DA05324E42();
						}
						else
						{
							unk_0x18BD0E0AAD3BB0BA(Global_15441.f_368, Global_15441.f_369);
						}
					}
					func_59();
				}
			}
			else
			{
				func_98();
				Global_14497 = 1;
			}
		}
		else
		{
			Global_14512 = 1;
			if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
			{
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					if (Global_14513.f_1 == 3)
					{
					}
				}
				else
				{
					unk_0xFA57C719261AA55D(&Global_2384, 21);
				}
			}
			if (Global_15873 == 0)
			{
				Global_14515 = Global_14513.f_1;
				Global_15873 = 1;
			}
			if (Global_14513.f_1 == 3)
			{
				Global_14513.f_1 = 4;
			}
			else
			{
				while (Global_14513.f_1 == 4)
				{
					wait(0);
				}
				if (Global_14513.f_1 == 6)
				{
				}
				Global_14513.f_1 = 9;
				func_8();
			}
			if (unk_0x4C9BACA8D249CB13())
			{
				iLocal_84 = unk_0xFFCC7EBF88BDEE54();
			}
			else
			{
				iLocal_82 = unk_0xFD34717937104F1C();
			}
			while (Global_14513.f_1 != 9 && Global_14496 == 0)
			{
				wait(0);
				if (unk_0x4C9BACA8D249CB13())
				{
					iLocal_91 = unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), iLocal_84);
				}
				else
				{
					iLocal_83 = unk_0xFD34717937104F1C();
					iLocal_91 = (iLocal_83 - iLocal_82);
				}
				if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_91 > 20000)
					{
						Global_16838 = 1;
						Global_14496 = 1;
						unk_0xFA57C719261AA55D(&Global_2384, 21);
					}
				}
			}
			if (Global_14496 == 0)
			{
				Global_15822 = 2;
			}
			else
			{
				func_98();
				Global_14497 = 1;
			}
			if (unk_0x4C9BACA8D249CB13())
			{
				iLocal_78 = unk_0xFFCC7EBF88BDEE54();
				iLocal_81 = unk_0xFFCC7EBF88BDEE54();
			}
			else
			{
				iLocal_76 = unk_0xFD34717937104F1C();
				iLocal_79 = unk_0xFD34717937104F1C();
			}
		}
	}
}

void func_98()
{
	Global_14688 = 0;
	func_103();
}

void func_99()
{
	float fVar0;
	
	fVar0 = func_100(Global_14466[Global_14458 /*3*/], Global_14459[Global_14458 /*3*/], Global_14473, Global_14444, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_16836 == 0)
		{
			unk_0xDC374DA4DC566237(true);
		}
		iLocal_32 = 0;
	}
}

float func_100(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5)
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
	fVar1 = func_102((to_float((unk_0xFD34717937104F1C() - iLocal_18)) / fParam4), 0f, 1f);
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
		Global_14441 = { func_101(vParam0, vParam1, fVar2) };
		Global_14444 = { func_101(vParam2, vParam3, fVar2) };
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

Vector3 func_101(vector3 vParam0, vector3 vParam1, float fParam2)
{
	return vParam0 + vParam1 - vParam0 * Vector(fParam2, fParam2, fParam2);
}

float func_102(float fParam0, float fParam1, float fParam2)
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

void func_103()
{
	unk_0xB4E5B1A6FE923ECB();
	Global_16833 = 0;
	if ((unk_0xB39808C1DCE0DCFA() || Global_14513.f_1 == 9) || Global_14512 == 1)
	{
		unk_0xA8B97F91CBDE376C(false);
		Global_15822 = 6;
		Global_14513.f_1 = 3;
		return;
	}
	if (unk_0x904275961B875DEB())
	{
		unk_0xA8B97F91CBDE376C(true);
		Global_15822 = 6;
		return;
	}
}

bool func_104()
{
	return unk_0x05EFB6A616B6FADE(Global_4456448.f_146776, 12);
}

bool func_105(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15829 = 0;
	Global_15831 = 0;
	Global_15836 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_2621441 = 0;
	return func_106(sParam2, iParam3, 0);
}

int func_106(char* sParam0, int iParam1, bool bParam2)
{
	Global_15823 = 0;
	if (Global_15822 == 0 || Global_15824 == 2)
	{
		if (Global_15822 != 0)
		{
			if (iParam1 > Global_15824)
			{
				if (Global_15829 == 0)
				{
					unk_0xA8B97F91CBDE376C(false);
					Global_14513.f_1 = 3;
					Global_15822 = 0;
					Global_15823 = 1;
					Global_15875 = 0;
					Global_15818 = 0;
					Global_15819 = 0;
					Global_15833 = 0;
					Global_15832 = 0;
					Global_14512 = 0;
				}
				else
				{
					func_103();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x904275961B875DEB())
		{
			return 0;
		}
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_33();
		Global_15111 = { Global_15276 };
		Global_15828 = Global_15829;
		Global_15835 = Global_15836;
		Global_2621442 = Global_2621441;
		Global_15837 = { Global_15853 };
		Global_15830 = Global_15831;
		Global_16812 = Global_16813;
		Global_16820 = { Global_16826 };
		Global_16814 = Global_16815;
		Global_16816 = Global_16817;
		Global_16818 = Global_16819;
		Global_15441.f_370 = Global_16811;
		Global_15441.f_368 = Global_16809;
		Global_15441.f_369 = Global_16810;
		Global_15818 = Global_15819;
		if (Global_15828)
		{
			unk_0xFA57C719261AA55D(&Global_2383, 20);
			unk_0xFA57C719261AA55D(&Global_2384, 17);
			unk_0xFA57C719261AA55D(&Global_2385, 0);
			if (bParam2)
			{
				func_27();
				if (Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14513.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14479 == 1)
			{
				return 0;
			}
			if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
			{
				if (unk_0x6625F609B391348E(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (func_26())
				{
					return 0;
				}
				if (unk_0x331BE13D31DFA36A(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x3977B7555441B490(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x45F0F396A506B7CD(unk_0xA19140A5C42D8715(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_71205)
				{
					if (unk_0x4374EED90C523366(unk_0xA19140A5C42D8715()))
					{
						return 0;
					}
					if (unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC()))
					{
						return 0;
					}
					if (unk_0x1CD6AC2CF787DFCB(unk_0xA19140A5C42D8715()))
					{
						return 0;
					}
					if (unk_0x53B0513B47405A70(unk_0xD4E735F4B6A956AC()))
					{
						return 0;
					}
				}
			}
			if (func_25())
			{
				return 0;
			}
			else
			{
				switch (Global_14513.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0x05EFB6A616B6FADE(Global_2383, 9))
				{
					return 0;
				}
			}
			func_24();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_48();
		return 1;
	}
	if (Global_15822 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15824 || iParam1 == Global_15824)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_103();
	}
	return 0;
}

int func_107()
{
	if (Global_15822 != 0 || unk_0x904275961B875DEB())
	{
		return 1;
	}
	return 0;
}

void func_108(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_9(sParam7);
	}
	if (!unk_0x429D45A6C6520026(sParam8))
	{
		func_9(sParam8);
	}
	if (!unk_0x429D45A6C6520026(sParam9))
	{
		func_9(sParam9);
	}
	if (!unk_0x429D45A6C6520026(sParam10))
	{
		func_9(sParam10);
	}
	if (!unk_0x429D45A6C6520026(sParam11))
	{
		func_9(sParam11);
	}
	unk_0x271C1332F482646C();
}

