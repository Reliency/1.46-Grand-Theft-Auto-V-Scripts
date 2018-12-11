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
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	bool bLocal_38 = 0;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43[4] = { 0, 0, 0, 0 };
	int iLocal_44[4] = { 0, 0, 0, 0 };
	int iLocal_45[4] = { 0, 0, 0, 0 };
	int iLocal_46[4] = { 0, 0, 0, 0 };
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	bool bLocal_66 = 0;
	float fLocal_67 = 0f;
	float fLocal_68 = 0f;
	float fLocal_69 = 0f;
	float fLocal_70 = 0f;
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
#endregion

void __EntryFunction__()
{
	struct<57> Var0;
	int iVar1;
	
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
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	fLocal_39 = 0f;
	fLocal_40 = 0f;
	fLocal_70 = 0.95f;
	fLocal_71 = 0.07f;
	fLocal_72 = 0.755f;
	iLocal_81 = 9999;
	unk_0x5341E3E598550C46();
	Global_106012 = unk_0xFD34717937104F1C();
	func_117();
	func_116();
	func_114();
	Global_14513.f_1 = 3;
	Global_14501 = 0;
	Global_14683 = 0;
	Global_16857 = 0;
	Var0.f_23 = 2;
	Var0.f_56 = 16;
	while (true)
	{
		wait(0);
		if (Global_14513.f_1 > 3)
		{
			unk_0xD481A812073CCF02(0, 337, 1);
			unk_0xD481A812073CCF02(0, 353, 1);
			unk_0xD481A812073CCF02(0, 354, 1);
			unk_0xD481A812073CCF02(0, 357, 1);
			unk_0xD481A812073CCF02(0, 353, 1);
		}
		if (iLocal_79 == 0)
		{
			if (unk_0x4C9BACA8D249CB13())
			{
				iLocal_79 = 1;
				iLocal_81 = func_111(8491, -1, 0);
			}
		}
		else if (unk_0x4C9BACA8D249CB13())
		{
			if (iLocal_79 == 1)
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
				unk_0x9A29DC922F83BB9A(0, 1);
				iLocal_79 = 2;
			}
			if (iLocal_79 == 2)
			{
				iLocal_80 = unk_0x4D89F7F079AF5F74();
				switch (iLocal_80)
				{
					case 3:
						break;
					
					case 0:
						if (unk_0xFBEBBA661994249B() > 0)
						{
							unk_0x94B2AD2D548A6436(0, &Var0);
							if (Var0.f_1 != iLocal_81)
							{
								Global_4267064 = 1;
							}
							else
							{
								Global_4267064 = 0;
							}
						}
						iLocal_79 = 3;
						break;
					
					case 1:
						break;
					
					case 4:
						Global_4267064 = 0;
						iLocal_79 = 3;
						break;
					}
			}
		}
		else
		{
			Global_4267064 = 0;
			iLocal_79 = 0;
		}
		if (unk_0x47C01C0E6F4C1D06())
		{
			if (unk_0x9B9A3A10827A2EA0())
			{
				if (Global_14513.f_1 == 6)
				{
					Global_14513.f_1 = 3;
				}
			}
		}
		if (func_110(146))
		{
			if (Global_71205 == 0)
			{
				iVar1 = func_78(0, 0, 119);
				if (iVar1 != 0)
				{
					func_76(iVar1);
				}
				else
				{
					func_75();
				}
				func_72(0);
			}
		}
		if (Global_2524719.f_4530 == 1)
		{
			if (Global_14513.f_1 > 3)
			{
				Global_14513.f_1 = 3;
			}
		}
		if (Global_71205 == 1)
		{
			if (Global_14513.f_1 == 3)
			{
				if (unk_0x05EFB6A616B6FADE(Global_4268330, 15))
				{
					unk_0x2BCFB39E86340DAA(&Global_4268330, 14);
					wait(0);
					while (!func_70(3, 0, 1, 0))
					{
						wait(0);
					}
					unk_0xFA57C719261AA55D(&Global_4268330, 14);
					unk_0xFA57C719261AA55D(&Global_4268330, 15);
				}
				if (unk_0x05EFB6A616B6FADE(Global_4268330, 16))
				{
					unk_0x2BCFB39E86340DAA(&Global_4268330, 14);
					wait(0);
					while (!func_70(17, 0, 1, 0))
					{
						wait(0);
					}
					unk_0xFA57C719261AA55D(&Global_4268330, 14);
					unk_0xFA57C719261AA55D(&Global_4268330, 16);
					unk_0xFA57C719261AA55D(&Global_4268330, 27);
				}
				if (unk_0x05EFB6A616B6FADE(Global_4268330, 27))
				{
					unk_0x2BCFB39E86340DAA(&Global_4268330, 14);
					wait(0);
					while (!func_70(23, 0, 1, 0))
					{
						wait(0);
					}
					unk_0xFA57C719261AA55D(&Global_4268330, 14);
					unk_0xFA57C719261AA55D(&Global_4268330, 16);
					unk_0xFA57C719261AA55D(&Global_4268330, 27);
				}
			}
		}
		if (Global_71205 == 0)
		{
			if (unk_0x05EFB6A616B6FADE(Global_4268330, 11))
			{
				if ((Global_14513.f_1 != 10 && Global_14513.f_1 != 9) || func_69() == 0)
				{
					unk_0xFA57C719261AA55D(&Global_4268330, 11);
					unk_0x2BCFB39E86340DAA(&Global_2384, 11);
				}
			}
			else if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
			{
				if (func_69())
				{
					unk_0x2BCFB39E86340DAA(&Global_4268330, 11);
					unk_0x2BCFB39E86340DAA(&Global_2384, 11);
				}
			}
			if (unk_0x05EFB6A616B6FADE(Global_4268330, 12))
			{
				unk_0xFA57C719261AA55D(&Global_4268330, 12);
				unk_0x2BCFB39E86340DAA(&Global_2384, 11);
			}
		}
		else if (unk_0x05EFB6A616B6FADE(Global_4268330, 12))
		{
			if ((Global_16885 == 0 || Global_16886 == 0) && !Global_16887)
			{
				unk_0xFA57C719261AA55D(&Global_4268330, 12);
				unk_0x2BCFB39E86340DAA(&Global_2384, 11);
			}
		}
		else if (Global_16887 || (Global_16885 > 0 && Global_16886 == 1))
		{
			unk_0x2BCFB39E86340DAA(&Global_4268330, 12);
			unk_0x2BCFB39E86340DAA(&Global_2384, 11);
		}
		if (unk_0x47C01C0E6F4C1D06())
		{
			if (unk_0xDC76FA13B4A2A13C())
			{
				if (!unk_0x05EFB6A616B6FADE(Global_4268330, 19))
				{
					unk_0x2BCFB39E86340DAA(&Global_4268330, 19);
					unk_0x2BCFB39E86340DAA(&Global_2384, 11);
				}
			}
			else if (unk_0x05EFB6A616B6FADE(Global_4268330, 19))
			{
				unk_0xFA57C719261AA55D(&Global_4268330, 19);
				unk_0x2BCFB39E86340DAA(&Global_2384, 11);
			}
		}
		if (iLocal_77 == 0)
		{
			if (unk_0x05EFB6A616B6FADE(Global_2383, 25))
			{
				unk_0x2AD48F3CEBA882E9(joaat("sp_cellphone_sleep_time"), &iLocal_76, -1);
				iLocal_74 = unk_0xFD34717937104F1C();
				iLocal_77 = 1;
			}
		}
		else if (!unk_0x05EFB6A616B6FADE(Global_2383, 25))
		{
			unk_0x2AD48F3CEBA882E9(joaat("sp_cellphone_sleep_time"), &iLocal_76, -1);
			iLocal_75 = unk_0xFD34717937104F1C();
			iLocal_77 = 0;
			unk_0x93180BE33E7149EF(joaat("sp_cellphone_sleep_time"), (iLocal_76 + (iLocal_75 - iLocal_74)), 1);
		}
		func_68();
		func_67();
		func_66();
		func_64();
		func_53();
		func_52();
		func_51();
		if (unk_0x05EFB6A616B6FADE(Global_2384, 21))
		{
			if (!unk_0x312FD2A3B520827A())
			{
				unk_0xFA57C719261AA55D(&Global_2384, 21);
			}
		}
		if (unk_0x05EFB6A616B6FADE(Global_2383, 7))
		{
			func_47();
			unk_0xFA57C719261AA55D(&Global_2383, 7);
		}
		if (unk_0x05EFB6A616B6FADE(Global_2383, 0))
		{
			func_46();
		}
		if (unk_0x05EFB6A616B6FADE(Global_4268330, 0))
		{
			func_45();
		}
		if (unk_0x05EFB6A616B6FADE(Global_2384, 11))
		{
			Global_3087 = 0;
			if (unk_0x05EFB6A616B6FADE(Global_2383, 25))
			{
				Global_3087++;
			}
			if (unk_0x05EFB6A616B6FADE(Global_4268330, 11))
			{
				if (Global_71205 == 0)
				{
					Global_3087++;
				}
			}
			if (unk_0x05EFB6A616B6FADE(Global_4268330, 28))
			{
				if (Global_71205 == 1)
				{
					Global_3087++;
				}
			}
			if (unk_0x05EFB6A616B6FADE(Global_4268330, 12))
			{
				if (Global_71205 && (Global_16886 || Global_16887))
				{
					Global_3087++;
				}
			}
			if (unk_0x05EFB6A616B6FADE(Global_4268330, 19))
			{
				Global_3087++;
			}
			if (Global_3087 == 0)
			{
				unk_0xFA57C719261AA55D(&Global_2384, 11);
				iLocal_41 = 0;
			}
			else
			{
				iLocal_41 = 1;
			}
		}
		if (!func_44())
		{
			if (!unk_0x4EAEDDFEDE3BEE19())
			{
				if (Global_14513.f_1 == 3)
				{
					if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
					{
						if (unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()) || unk_0xB566ACF044209759())
						{
							if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
							{
								if (Global_71205)
								{
									func_32();
								}
								else
								{
									func_32();
								}
							}
						}
					}
				}
			}
			if (Global_14513.f_1 == 4)
			{
				if (unk_0x05EFB6A616B6FADE(Global_2384, 21))
				{
					func_32();
				}
			}
			func_22();
		}
		else if (func_15())
		{
		}
		switch (Global_16857)
		{
			case 0:
				func_14();
				if (Global_16859 == 1)
				{
					func_13();
				}
				break;
			
			case 1:
				func_12();
				break;
			
			case 2:
				func_11();
				break;
			
			case 3:
				func_10();
				break;
			
			case 4:
				func_9();
				break;
			
			case 5:
				func_8();
				break;
			
			case 14:
				func_13();
				break;
			
			case 6:
				if (Global_16859 == 1)
				{
					func_13();
				}
				if (Global_16860 == 1)
				{
					Global_16857 = 9;
					Global_16860 = 0;
				}
				break;
			
			case 8:
				func_7();
				break;
			
			case 9:
				func_5();
				break;
			
			case 10:
				func_4();
				break;
			
			case 11:
				func_3();
				break;
			
			case 12:
				func_2();
				break;
			
			case 13:
				func_1();
				break;
		}
	}
}

void func_1()
{
	iLocal_54 = unk_0x8AFA01D6D24D386E(Global_16861);
	switch (iLocal_54)
	{
		case 0:
			Global_16857 = 4;
			break;
		
		case 1:
			break;
		
		case 2:
			unk_0x2BCFB39E86340DAA(&Global_2384, 15);
			func_13();
			break;
	}
}

void func_2()
{
	if (unk_0x10C8512B7A9F5B0C(Global_16861))
	{
		Global_16857 = 13;
	}
	else
	{
		func_13();
	}
}

void func_3()
{
	if (unk_0x4C9BACA8D249CB13())
	{
		iLocal_52 = unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), iLocal_50);
	}
	else
	{
		iLocal_51 = unk_0xFD34717937104F1C();
		iLocal_52 = (iLocal_51 - iLocal_49);
	}
	if (iLocal_52 > 3000)
	{
		unk_0x783C50B0DAB1C767();
	}
	if (iLocal_52 > 3200)
	{
		Global_16857 = 6;
	}
}

void func_4()
{
	iLocal_54 = unk_0x011F2BCCE7980EFE();
	switch (iLocal_54)
	{
		case 0:
			if (unk_0x4C9BACA8D249CB13())
			{
				iLocal_50 = unk_0xFFCC7EBF88BDEE54();
			}
			else
			{
				iLocal_49 = unk_0xFD34717937104F1C();
			}
			Global_16857 = 11;
			settimerb(0);
			break;
		
		case 1:
			break;
		
		case 2:
			func_13();
			break;
	}
}

void func_5()
{
	Global_16862 = -1;
	if (Global_71205)
	{
		if (func_6())
		{
			unk_0xF3F776ADA161E47D(Global_4456448.f_146778, Global_4456448.f_146778.f_1);
		}
	}
	if (unk_0x697FB4FF753A6DA4(Global_16862))
	{
		Global_16857 = 10;
		unk_0x353C61A0CC047CBD("CELL_278");
		unk_0x520E731543F2632E(1);
	}
	else
	{
		func_13();
	}
}

bool func_6()
{
	return unk_0x05EFB6A616B6FADE(Global_4456448.f_146776, 12);
}

void func_7()
{
	iLocal_54 = unk_0xB4A12645D96795E4(1);
	switch (iLocal_54)
	{
		case 0:
			Global_16857 = 9;
			break;
		
		case 1:
			break;
		
		case 2:
			func_13();
			break;
	}
}

void func_8()
{
	iLocal_54 = unk_0xF70ED2067846DE30(iLocal_55);
	switch (iLocal_54)
	{
		case 0:
			unk_0x1C04ABA4CCBF5199(1, 1);
			Global_16857 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			if (iLocal_55 == 3)
			{
				unk_0x2BCFB39E86340DAA(&Global_2384, 14);
				unk_0x1C04ABA4CCBF5199(0, 0);
				unk_0xD67818EDF0E40DBF();
				unk_0x3841D26C1F8D38B0();
				Global_16857 = 6;
			}
			if (Global_16857 == 5)
			{
				if (iLocal_55 == 0)
				{
					Global_16857 = 4;
					iLocal_55 = 1;
					unk_0x3841D26C1F8D38B0();
					wait(0);
				}
			}
			if (Global_16857 == 5)
			{
				if (iLocal_55 == 1)
				{
					Global_16857 = 4;
					iLocal_55 = 2;
					unk_0x3841D26C1F8D38B0();
					wait(0);
				}
			}
			if (Global_16857 == 5)
			{
				if (iLocal_55 == 2)
				{
					Global_16857 = 4;
					iLocal_55 = 3;
					unk_0x3841D26C1F8D38B0();
					wait(0);
				}
			}
			break;
	}
}

void func_9()
{
	if (unk_0xD691011E226F5D38(iLocal_55))
	{
		Global_16857 = 5;
	}
	else
	{
		unk_0x2BCFB39E86340DAA(&Global_2384, 15);
		func_13();
	}
}

void func_10()
{
	iLocal_54 = unk_0x7522E1CBA72CCDB5();
	switch (iLocal_54)
	{
		case 0:
			Global_16857 = 4;
			iLocal_55 = 2;
			break;
		
		case 1:
			break;
		
		case 2:
			Global_14513.f_1 = 3;
			func_13();
			break;
	}
}

void func_11()
{
	if (unk_0x4789E28E44D72626())
	{
		Global_16857 = 3;
	}
}

void func_12()
{
	if (timerb() > 0)
	{
		Global_16857 = 2;
	}
}

void func_13()
{
	unk_0x1C04ABA4CCBF5199(0, 0);
	unk_0xD67818EDF0E40DBF();
	unk_0x3841D26C1F8D38B0();
	unk_0x783C50B0DAB1C767();
	Global_16858 = 0;
	Global_16859 = 0;
	Global_16860 = 0;
	Global_16857 = 0;
}

void func_14()
{
	if (Global_16858)
	{
		Global_16857 = 1;
		unk_0xFA57C719261AA55D(&Global_2384, 14);
		settimerb(0);
	}
}

int func_15()
{
	char* sVar0;
	
	if ((func_21(2, Global_14480, 0) && !unk_0xC9A7EEAA81FA9DF2(19)) && !unk_0x9B9A3A10827A2EA0())
	{
		if (unk_0x47C01C0E6F4C1D06())
		{
			if (unk_0xAEAF59799C2F26E4(unk_0xA19140A5C42D8715(), "Synched"))
			{
				sVar0 = unk_0x08791BD93D5986C6("CELL_ANTIH_A");
				unk_0x59FF6261546DDD52("CELL_ANTIH");
				unk_0x595B8132C1F20265("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, sVar0, 0);
			}
		}
		if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			if (func_20(unk_0xA19140A5C42D8715()) || unk_0xB56FBAA5E4B30B15(unk_0xA19140A5C42D8715()))
			{
				if (unk_0xD73B1037F6BD4B90(0, 25) || unk_0xD73B1037F6BD4B90(0, 68))
				{
					return 0;
				}
			}
		}
		Global_16881 = 0;
		Global_16882 = 0;
		if (unk_0x8DD338F3EAC4B516() == Global_16879 && unk_0x8DD338F3EAC4B516() != -1)
		{
			Global_16881 = Global_16880;
			iLocal_58 = unk_0xFD34717937104F1C();
			iLocal_60 = 0;
			iLocal_61 = 0;
			while (((func_19(2, Global_14480) && iLocal_60 < 250) && Global_14689 == 0) && !unk_0xC9A7EEAA81FA9DF2(19))
			{
				if (Global_3087 > 0)
				{
					func_16();
				}
				wait(0);
				iLocal_59 = unk_0xFD34717937104F1C();
				iLocal_60 = (iLocal_59 - iLocal_58);
				if (Global_3087 > 0)
				{
					func_16();
				}
			}
			if ((func_19(2, Global_14480) && Global_14689 == 0) && !unk_0xC9A7EEAA81FA9DF2(19))
			{
				iLocal_61 = 1;
			}
			if (Global_14689 == 0)
			{
				if (iLocal_61 == 1)
				{
					Global_16882 = 1;
					Global_16881 = Global_16880;
					if (Global_16881 == 1)
					{
					}
					if (Global_16881 == 2)
					{
					}
					if (Global_16881 == 3)
					{
					}
					if (Global_16881 == 0)
					{
					}
					if (Global_16881 == 4)
					{
					}
				}
				else
				{
					Global_16881 = 0;
				}
			}
			else
			{
				Global_16881 = 0;
			}
		}
		else
		{
			Global_16881 = 0;
		}
		if (!unk_0xC9A7EEAA81FA9DF2(19))
		{
			return 1;
		}
		else
		{
			Global_16881 = 0;
			Global_16882 = 0;
			return 0;
		}
	}
	return 0;
}

void func_16()
{
	int iVar0;
	
	iVar0 = 255;
	if (Global_16887)
	{
		fLocal_71 = -0.055f;
		fLocal_72 = 0.745f;
		fLocal_67 = unk_0x79A3348EEC2E5FE7();
		fLocal_73 = ((100f * fLocal_70) - (100f * fLocal_67));
		fLocal_68 = (fLocal_71 + (fLocal_73 * 0.005f));
		fLocal_69 = (fLocal_72 - (fLocal_73 * 0.005f));
		if (!func_18())
		{
			unk_0xF997724AC8A71261(1);
			unk_0x0A74F1E9CF777638(7);
			if (unk_0x47C01C0E6F4C1D06())
			{
				unk_0xD40E632930030DD7();
			}
			unk_0x84829313FB8AC81C(iLocal_37, fLocal_68, fLocal_69, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
			unk_0xF997724AC8A71261(0);
			unk_0x0A74F1E9CF777638(4);
		}
	}
	else
	{
		if (unk_0x47C01C0E6F4C1D06())
		{
			if (Global_2415861.f_1485)
			{
				bLocal_38 = false;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_2383, 13))
			{
				if (unk_0x05EFB6A616B6FADE(Global_4268330, 19))
				{
					bLocal_38 = false;
				}
				else
				{
					bLocal_38 = true;
				}
			}
			else
			{
				bLocal_38 = false;
			}
		}
		else if (Global_2415861.f_1485 || unk_0x05EFB6A616B6FADE(Global_2383, 13))
		{
			bLocal_38 = true;
		}
		else
		{
			bLocal_38 = false;
		}
		if (func_44())
		{
			bLocal_38 = true;
		}
		if (unk_0x05EFB6A616B6FADE(Global_4268330, 28))
		{
			iVar0 = 125;
			if (bLocal_38 == 1)
			{
				bLocal_38 = false;
			}
		}
		if (unk_0x2E602DADCC108B9C())
		{
			if (!unk_0x49B680F5AF4359D0())
			{
				if (!bLocal_38)
				{
					if (!func_17())
					{
						if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
						{
							if (!unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1))
							{
								unk_0x0A74F1E9CF777638(4);
								if (unk_0x47C01C0E6F4C1D06() && Global_2415861.f_1485)
								{
									fLocal_71 = 0.165f;
									fLocal_72 = 0.755f;
								}
								else
								{
									fLocal_71 = 0.07f;
									fLocal_72 = 0.755f;
								}
								fLocal_67 = unk_0x79A3348EEC2E5FE7();
								fLocal_73 = ((100f * fLocal_70) - (100f * fLocal_67));
								fLocal_68 = (fLocal_71 + (fLocal_73 * 0.005f));
								fLocal_69 = (fLocal_72 - (fLocal_73 * 0.005f));
								if (!func_18())
								{
									if (unk_0x47C01C0E6F4C1D06())
									{
										unk_0xD40E632930030DD7();
									}
									if (Global_2415861.f_1485)
									{
										fLocal_39 = 0.09f;
										fLocal_40 = -0.25f;
										if (unk_0x47C01C0E6F4C1D06())
										{
											if (unk_0x05EFB6A616B6FADE(Global_4268330, 28))
											{
											}
											else
											{
												unk_0x84829313FB8AC81C(iLocal_37, fLocal_68, fLocal_69, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
											}
										}
										else
										{
											unk_0x84829313FB8AC81C(iLocal_37, (fLocal_68 + fLocal_39), (fLocal_69 + fLocal_40), 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
										}
									}
									else
									{
										unk_0x84829313FB8AC81C(iLocal_37, fLocal_68, fLocal_69, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_17()
{
	if (unk_0x8B1574454E8C2421(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_18()
{
	if (unk_0x05EFB6A616B6FADE(Global_2385, 3))
	{
		return 1;
	}
	return 0;
}

int func_19(int iParam0, int iParam1)
{
	if (unk_0xD73B1037F6BD4B90(iParam0, iParam1))
	{
		if (unk_0x47C01C0E6F4C1D06())
		{
			if (unk_0xDE59CE76013B1621() == 0)
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

int func_20(int iParam0)
{
	int iVar0;
	
	if (unk_0x965BA0E75ABD2A72())
	{
		if (!unk_0x4915F4759304D5CF(iParam0))
		{
			unk_0xF990CFC0F1D94A39(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_21(int iParam0, int iParam1, int iParam2)
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

void func_22()
{
	switch (Global_14513.f_1)
	{
		case 4:
			if (unk_0x05EFB6A616B6FADE(Global_2384, 21))
			{
			}
			else
			{
				if (unk_0x2BCD0524CDEE1FD2(Global_14510))
				{
				}
				else
				{
					if (!unk_0x2BCD0524CDEE1FD2(Global_14510))
					{
						if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) == 0)
						{
							unk_0xD75A4240F0AD8613("cellphone_flashhand");
							while (!unk_0xB1FDFCECA75CE4A7("cellphone_flashhand"))
							{
								wait(0);
								if (Global_3087 > 0)
								{
									func_16();
								}
							}
							if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) == 0)
							{
								Global_14510 = start_new_script("cellphone_flashhand", 1424);
							}
							unk_0x4659F4154D948B01("cellphone_flashhand");
						}
					}
					func_31(0);
				}
				if (Global_15832 || Global_15833)
				{
					if (!unk_0x2BCD0524CDEE1FD2(Global_14510))
					{
						if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) == 0)
						{
							unk_0xD75A4240F0AD8613("cellphone_flashhand");
							while (!unk_0xB1FDFCECA75CE4A7("cellphone_flashhand"))
							{
								wait(0);
								if (Global_3087 > 0)
								{
									func_16();
								}
							}
							if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) == 0)
							{
								Global_14510 = start_new_script("cellphone_flashhand", 1424);
							}
							unk_0x4659F4154D948B01("cellphone_flashhand");
						}
					}
					while (!unk_0x0FA486DE15EB3004(Global_14494) && Global_14496 == 0)
					{
						wait(0);
						if (Global_3087 > 0)
						{
							func_16();
						}
					}
					if (Global_14496 == 0)
					{
						Global_14513.f_1 = 9;
						func_23();
					}
				}
				else
				{
					bLocal_66 = false;
					if (Global_71205 && (Global_16884 || Global_1624079.f_5))
					{
						bLocal_66 = true;
					}
					if (((Global_106070.f_14023[Global_14513 /*20*/].f_18 == 1 || Global_106070.f_14023[Global_14513 /*20*/].f_17 == 1) || bLocal_66 == 1) || Global_16881 != 0)
					{
						while (!unk_0x0FA486DE15EB3004(Global_14494) && Global_14496 == 0)
						{
							wait(0);
							if (Global_3087 > 0)
							{
								func_16();
							}
						}
						if (Global_14496 == 0)
						{
							if (Global_14513.f_1 > 3)
							{
								Global_14513.f_1 = 6;
								if (Global_16881 == 0)
								{
									if (bLocal_66)
									{
									}
									else if (Global_71205 == 0)
									{
										if (Global_106070.f_14023[Global_14513 /*20*/].f_17 == 1)
										{
											func_70(1, 0, 1, 0);
										}
									}
								}
								else
								{
									if (Global_16881 == 3)
									{
									}
									if (Global_16881 == 1)
									{
									}
									if (Global_16881 == 2)
									{
									}
									if (Global_16881 == 4)
									{
									}
								}
							}
						}
					}
					else
					{
						while (!unk_0x0FA486DE15EB3004(Global_14494) && Global_14496 == 0)
						{
							wait(0);
							if (Global_3087 > 0)
							{
								func_16();
							}
						}
						if (Global_14496 == 0)
						{
							if (Global_14513.f_1 > 3)
							{
								if (Global_15832 || Global_15833)
								{
									Global_14513.f_1 = 9;
								}
								else
								{
									Global_14513.f_1 = 6;
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_23()
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
			func_30(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_28(Global_2988);
			if (Global_2988 == 1)
			{
				func_30(Global_14494, "DISPLAY_VIEW", 1f, to_float(Global_14517), -1082130432, -1082130432, -1082130432);
				Global_14493 = Global_14517;
			}
			else
			{
				func_30(Global_14494, "DISPLAY_VIEW", 1f, to_float(Global_14518), -1082130432, -1082130432, -1082130432);
				Global_14493 = Global_14518;
			}
			if (Global_14501)
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_27(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_27(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14683 == 0)
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xFA57C719261AA55D(&Global_2383, 17);
			}
			else if (Global_71205)
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xFA57C719261AA55D(&Global_2383, 17);
			}
			else
			{
				if (Global_14682 == 1)
				{
					if (Global_14501)
					{
						func_27(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_27(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14501)
				{
					func_27(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_27(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x2BCFB39E86340DAA(&Global_2383, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_30(Global_14494, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_27(Global_14494, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_27(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xFA57C719261AA55D(&Global_2383, 17);
			if (unk_0x05EFB6A616B6FADE(Global_2383, 20))
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14501)
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14456)
				{
					func_27(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14512 == 1)
			{
				func_26();
				func_30(Global_14494, "SET_THEME", to_float(Global_106070.f_14023[Global_14513 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15835)
				{
					unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
					unk_0x380580A1A1667F69(4);
					unk_0x380580A1A1667F69(0);
					unk_0x380580A1A1667F69(2);
					unk_0x390B339C943A8A54("CELL_CONDFON");
					unk_0xC327C023FDA37F2E(&Global_15837);
					unk_0xD481829E3E36543B();
					func_25("CELL_300");
					func_25("CELL_217");
					func_25("CELL_217");
					unk_0x271C1332F482646C();
				}
				else if (Global_106070.f_28022[Global_1698 /*29*/].f_24[Global_14513] == 0)
				{
					func_27(Global_14494, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_1698 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_27(Global_14494, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_106070.f_28022[Global_1698 /*29*/].f_3), &(Global_106070.f_28022[Global_1698 /*29*/].f_7), "CELL_217", &(Global_106070.f_28022[Global_1698 /*29*/].f_3), 0);
				}
				func_30(Global_14494, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15822 == 4 || Global_15822 == 3)
			{
				func_30(Global_14494, "SET_THEME", to_float(Global_106070.f_14023[Global_14513 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_26();
				if (Global_15835)
				{
					unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
					unk_0x380580A1A1667F69(4);
					unk_0x380580A1A1667F69(0);
					unk_0x380580A1A1667F69(2);
					unk_0x390B339C943A8A54("CELL_CONDFON");
					unk_0xC327C023FDA37F2E(&Global_15837);
					unk_0xD481829E3E36543B();
					func_25("CELL_300");
					func_25("CELL_219");
					func_25("CELL_219");
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
						func_30(Global_14494, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_27(Global_14494, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_1698 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_30(Global_14494, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_27(Global_14494, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_106070.f_28022[Global_1698 /*29*/].f_3), &(Global_106070.f_28022[Global_1698 /*29*/].f_7), &cVar0, &(Global_106070.f_28022[Global_1698 /*29*/].f_3), 0);
					}
				}
				func_30(Global_14494, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_24();
			break;
		
		default:
			break;
	}
}

void func_24()
{
	if (unk_0x0FA486DE15EB3004(Global_14494))
	{
		if (Global_14512 == 1)
		{
			if (Global_14501)
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15869)
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0x05EFB6A616B6FADE(Global_2383, 20))
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14501)
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_27(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xFA57C719261AA55D(&Global_2383, 17);
		}
		else
		{
			func_27(Global_14494, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_27(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xFA57C719261AA55D(&Global_2383, 17);
			if (unk_0x05EFB6A616B6FADE(Global_2383, 20))
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14501)
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14456)
				{
					func_27(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_25(char* sParam0)
{
	unk_0x390B339C943A8A54(sParam0);
	unk_0xD481829E3E36543B();
}

void func_26()
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

void func_27(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_25(sParam7);
	}
	if (!unk_0x429D45A6C6520026(sParam8))
	{
		func_25(sParam8);
	}
	if (!unk_0x429D45A6C6520026(sParam9))
	{
		func_25(sParam9);
	}
	if (!unk_0x429D45A6C6520026(sParam10))
	{
		func_25(sParam10);
	}
	if (!unk_0x429D45A6C6520026(sParam11))
	{
		func_25(sParam11);
	}
	unk_0x271C1332F482646C();
}

void func_28(int iParam0)
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
		if (func_29(14))
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
								func_25(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(iVar2);
								unk_0x271C1332F482646C();
							}
							if (Global_2458186)
							{
								if (iVar1 == 14)
								{
									func_27(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_27(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(Global_16890), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_27(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_27(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_27(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_25(&(Global_2390[iVar1 /*15*/]));
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
								func_25(&(Global_2390[iVar1 /*15*/]));
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
								func_25(&(Global_2390[iVar1 /*15*/]));
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
								func_25(&(Global_2390[iVar1 /*15*/]));
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
								func_25(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(42);
								unk_0x271C1332F482646C();
							}
							else if (Global_2390[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1624079.f_1;
								func_27(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_27(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_29(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_30(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_31(bool bParam0)
{
	if (bParam0)
	{
		if (Global_14513.f_1 == 9)
		{
			Global_14681 = 1;
		}
	}
	else
	{
		Global_14681 = 0;
	}
}

void func_32()
{
	if (func_15() || unk_0x05EFB6A616B6FADE(Global_2383, 8))
	{
		unk_0xFA57C719261AA55D(&Global_2383, 8);
		func_38();
		if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			if (!unk_0xFF12F654A8561928(unk_0xA19140A5C42D8715()))
			{
				if (func_37())
				{
				}
				else if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) == 0)
				{
					if (unk_0x05EFB6A616B6FADE(Global_2384, 21))
					{
						unk_0xFA57C719261AA55D(&Global_2384, 21);
					}
					if (Global_14689 == 1)
					{
						Global_14689 = 0;
					}
					switch (Global_14513.f_1)
					{
						case 3:
							Global_14513.f_1 = 4;
							if (iLocal_78 == 0)
							{
								func_33();
								iLocal_78 = 1;
							}
							break;
						
						default:
							break;
					}
					Global_14679 = 1;
				}
			}
		}
	}
}

void func_33()
{
	if (Global_4267064 == 1)
	{
		if (!func_36())
		{
			return;
		}
		if (func_34(unk_0xD4E735F4B6A956AC()))
		{
			if (unk_0x3278E95F94254201(803) == 1)
			{
				unk_0x59FF6261546DDD52("CELL_EMAIL_EVENT");
				unk_0x42A1DBBDEF9F85FF(1, 1);
			}
			else if (unk_0x3278E95F94254201(803) != 1)
			{
			}
		}
	}
}

int func_34(int iParam0)
{
	int iVar0;
	struct<13> Var1;
	
	if (unk_0xF4932F2D16792433() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != unk_0xD4E735F4B6A956AC())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (unk_0x332D85764ED0503F() || unk_0x7DD04831D0FC44CA())
	{
		if (unk_0xD9DE76194F4CB211(0, iVar0))
		{
			if (unk_0x67AA88F93B931038())
			{
				return 1;
			}
		}
	}
	if (unk_0x365C4466BC171A2D() || unk_0x29A02C184A66D25E())
	{
		if (iParam0 == unk_0xD4E735F4B6A956AC())
		{
			if (unk_0xDF6A048805D71A30(0, -3, 1) || unk_0xD9DE76194F4CB211(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_35(iParam0) };
			if (unk_0xD9DE76194F4CB211(0, -1) || (unk_0xD9DE76194F4CB211(1, -1) && unk_0x6053E2C13442D6D7(&Var1)))
			{
				return 1;
			}
		}
	}
	if (unk_0x47C01C0E6F4C1D06())
	{
		if (unk_0xD9DE76194F4CB211(0, iVar0))
		{
			if (unk_0x67AA88F93B931038())
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_35(int iParam0)
{
	struct<13> Var0;
	
	unk_0xE05C4303C26882C4(iParam0, &Var0, 13);
	return Var0;
}

int func_36()
{
	if (unk_0x332D85764ED0503F() && unk_0x46BFB32D055B8AAB() == 3)
	{
		return 1;
	}
	if (unk_0x365C4466BC171A2D() && unk_0x46BFB32D055B8AAB() == 3)
	{
		return 1;
	}
	if (unk_0x7DD04831D0FC44CA() && unk_0x4E64773FA9BA7A47() == 0)
	{
		return 1;
	}
	if (unk_0x29A02C184A66D25E() && unk_0x4E64773FA9BA7A47() == 0)
	{
		return 1;
	}
	if (unk_0x47C01C0E6F4C1D06() && unk_0x67AA88F93B931038())
	{
		return 1;
	}
	return 0;
}

int func_37()
{
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if ((((unk_0x70F79B0BFBB1E7AC(unk_0xA19140A5C42D8715(), 78, 1) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x97722E4EBB9BA577(unk_0xA19140A5C42D8715(), 0)) || unk_0x3977B7555441B490(unk_0xA19140A5C42D8715())) || unk_0xFCD57A307851D560(unk_0xA19140A5C42D8715()) == 1)
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

void func_38()
{
	if (func_29(14))
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
		Global_14513 = func_39();
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

var func_39()
{
	func_40();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_40()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_43(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_42(unk_0xA19140A5C42D8715());
			if (func_41(iVar0) && (!func_29(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_41(Global_106070.f_2355.f_539.f_4301))
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

bool func_41(int iParam0)
{
	return iParam0 < 3;
}

int func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_43(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_43(int iParam0)
{
	if (func_41(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_44()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_45()
{
	char cVar0[64];
	int iVar1;
	char cVar2[64];
	char cVar3[64];
	char cVar4[64];
	char cVar5[64];
	
	unk_0xFA57C719261AA55D(&Global_4268330, 0);
	if (Global_16883 != 0)
	{
		if (unk_0x07D08EE9B44B4EE9(Global_16883))
		{
			if (unk_0x2C58CFA8E806E25E(Global_16883))
			{
				StringCopy(&cVar0, unk_0x18167C9C4C1E9195(Global_16883), 64);
				Global_16891[Global_16889] = Global_16883;
			}
			else
			{
				StringCopy(&cVar0, "CHAR_DEFAULT", 64);
				Global_16891[Global_4268314] = 0;
			}
		}
		else
		{
			StringCopy(&cVar0, "CHAR_DEFAULT", 64);
			Global_16891[Global_4268314] = 0;
		}
	}
	else
	{
		StringCopy(&cVar0, unk_0x08791BD93D5986C6(&(Global_106070.f_28022[Global_4267065[Global_4268314 /*104*/].f_17 /*29*/].f_7)), 64);
		Global_16891[Global_4268314] = 0;
	}
	if (unk_0x429D45A6C6520026(&cVar0))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	else if (unk_0x3CAC2741CC1A631F(&cVar0, "NULL"))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	if (((((((Global_4267065[Global_4268314 /*104*/].f_32 == 4 || Global_4267065[Global_4268314 /*104*/].f_32 == 5) || Global_4267065[Global_4268314 /*104*/].f_32 == 6) || Global_4267065[Global_4268314 /*104*/].f_32 == 7) || Global_4267065[Global_4268314 /*104*/].f_32 == 8) || Global_4267065[Global_4268314 /*104*/].f_32 == 9) || Global_4267065[Global_4268314 /*104*/].f_32 == 10) || Global_4267065[Global_4268314 /*104*/].f_32 == 11)
	{
		iVar1 = 0;
		switch (Global_4267065[Global_4268314 /*104*/].f_49)
		{
			case 1:
				unk_0x59FF6261546DDD52("CELL_CL01");
				break;
			
			case 2:
				unk_0x59FF6261546DDD52("CELL_CL02");
				break;
			
			case 3:
				unk_0x59FF6261546DDD52("CELL_CL03");
				break;
			
			case 4:
				unk_0x59FF6261546DDD52("CELL_CL04");
				break;
			
			case 5:
				unk_0x59FF6261546DDD52("CELL_CL05");
				break;
			
			case 6:
				unk_0x59FF6261546DDD52("CELL_CL06");
				break;
			
			case 7:
				unk_0x59FF6261546DDD52("CELL_CL07");
				break;
			
			case 8:
				unk_0x59FF6261546DDD52("CELL_CL08");
				break;
			
			case 9:
				unk_0x59FF6261546DDD52("CELL_CL09");
				break;
		}
		unk_0x4FDA9E6EF359F8A9(&(Global_4267065[Global_4268314 /*104*/]));
		while (iVar1 < Global_4267065[Global_4268314 /*104*/].f_49)
		{
			switch (Global_4267065[Global_4268314 /*104*/].f_32)
			{
				case 4:
					unk_0x4FDA9E6EF359F8A9(&(Global_2524719.f_1651[iVar1 /*4*/]));
					break;
				
				case 5:
					unk_0x4FDA9E6EF359F8A9(&(Global_1654554[iVar1 /*4*/]));
					break;
				
				case 6:
					unk_0x4FDA9E6EF359F8A9(&(Global_1654595[iVar1 /*4*/]));
					break;
				
				case 7:
					unk_0x4FDA9E6EF359F8A9(&(Global_1654616[iVar1 /*4*/]));
					break;
				
				case 8:
					unk_0x4FDA9E6EF359F8A9(&(Global_1654633[iVar1 /*4*/]));
					break;
				
				case 9:
					unk_0x4FDA9E6EF359F8A9(&(Global_1654646[iVar1 /*4*/]));
					break;
				
				case 10:
					unk_0x4FDA9E6EF359F8A9(&(Global_1654659[iVar1 /*4*/]));
					break;
				
				case 11:
					unk_0x4FDA9E6EF359F8A9(&(Global_1654672[iVar1 /*4*/]));
					break;
			}
			iVar1++;
		}
		StringCopy(&cVar2, unk_0x08791BD93D5986C6(&(Global_106070.f_28022[Global_4267065[Global_4268314 /*104*/].f_17 /*29*/].f_3)), 64);
		uLocal_48 = unk_0x595B8132C1F20265(&cVar0, &cVar0, 0, 2, &cVar2, 0);
		unk_0x2BCFB39E86340DAA(&Global_4268330, 1);
		Global_16880 = 1;
		Global_16879 = uLocal_48;
		Global_16883 = 0;
	}
	else
	{
		unk_0x59FF6261546DDD52(&(Global_4267065[Global_4268314 /*104*/]));
		switch (Global_4267065[Global_4268314 /*104*/].f_32)
		{
			case 0:
				break;
			
			case 1:
				unk_0xC327C023FDA37F2E(&(Global_4267065[Global_4268314 /*104*/].f_33));
				if (Global_4267065[Global_4268314 /*104*/].f_66 == 1 && !unk_0x3CAC2741CC1A631F(&(Global_4267065[Global_4268314 /*104*/].f_67), "NULL"))
				{
					unk_0xC327C023FDA37F2E(&(Global_4267065[Global_4268314 /*104*/].f_67));
				}
				if ((Global_4267065[Global_4268314 /*104*/].f_66 == 2 && !unk_0x3CAC2741CC1A631F(&(Global_4267065[Global_4268314 /*104*/].f_67), "NULL")) && !unk_0x3CAC2741CC1A631F(&(Global_4267065[Global_4268314 /*104*/].f_83), "NULL"))
				{
					if (unk_0x445EC9E7EACB710E(&(Global_4267065[Global_4268314 /*104*/].f_67)))
					{
						unk_0x4FDA9E6EF359F8A9(&(Global_4267065[Global_4268314 /*104*/].f_67));
					}
					else
					{
						unk_0xC327C023FDA37F2E(&(Global_4267065[Global_4268314 /*104*/].f_67));
					}
					if (unk_0x445EC9E7EACB710E(&(Global_4267065[Global_4268314 /*104*/].f_83)))
					{
						unk_0x4FDA9E6EF359F8A9(&(Global_4267065[Global_4268314 /*104*/].f_83));
					}
					else
					{
						unk_0xC327C023FDA37F2E(&(Global_4267065[Global_4268314 /*104*/].f_83));
					}
				}
				break;
			
			case 2:
				unk_0xCDA87E1DA52C8C9D(Global_4267065[Global_4268314 /*104*/].f_49);
				break;
			
			case 3:
				unk_0xC327C023FDA37F2E(&(Global_4267065[Global_4268314 /*104*/].f_33));
				unk_0xCDA87E1DA52C8C9D(Global_4267065[Global_4268314 /*104*/].f_49);
				if (Global_4267065[Global_4268314 /*104*/].f_66 == 1 && !unk_0x3CAC2741CC1A631F(&(Global_4267065[Global_4268314 /*104*/].f_67), "NULL"))
				{
					unk_0xC327C023FDA37F2E(&(Global_4267065[Global_4268314 /*104*/].f_67));
				}
				if ((Global_4267065[Global_4268314 /*104*/].f_66 == 2 && !unk_0x3CAC2741CC1A631F(&(Global_4267065[Global_4268314 /*104*/].f_67), "NULL")) && !unk_0x3CAC2741CC1A631F(&(Global_4267065[Global_4268314 /*104*/].f_83), "NULL"))
				{
					if (unk_0x445EC9E7EACB710E(&(Global_4267065[Global_4268314 /*104*/].f_67)))
					{
						unk_0x4FDA9E6EF359F8A9(&(Global_4267065[Global_4268314 /*104*/].f_67));
					}
					else
					{
						unk_0xC327C023FDA37F2E(&(Global_4267065[Global_4268314 /*104*/].f_67));
					}
					if (unk_0x445EC9E7EACB710E(&(Global_4267065[Global_4268314 /*104*/].f_83)))
					{
						unk_0x4FDA9E6EF359F8A9(&(Global_4267065[Global_4268314 /*104*/].f_83));
					}
					else
					{
						unk_0xC327C023FDA37F2E(&(Global_4267065[Global_4268314 /*104*/].f_83));
					}
				}
				break;
		}
		if (Global_4267065[Global_4268314 /*104*/].f_17 == 145)
		{
			StringCopy(&cVar3, "<C>", 64);
			StringConCat(&cVar3, &Global_3071, 64);
			StringConCat(&cVar3, "</C>", 64);
			uLocal_48 = unk_0x595B8132C1F20265(&cVar0, &cVar0, 0, 2, &cVar3, 0);
			unk_0x2BCFB39E86340DAA(&Global_4268330, 1);
			Global_16880 = 1;
			Global_16879 = uLocal_48;
		}
		else
		{
			StringCopy(&cVar4, unk_0x08791BD93D5986C6(&(Global_106070.f_28022[Global_4267065[Global_4268314 /*104*/].f_17 /*29*/].f_3)), 64);
			if (Global_4267065[Global_4268314 /*104*/].f_17 == 98)
			{
				StringCopy(&cVar5, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar5, &cVar4, 64);
				uLocal_48 = unk_0x595B8132C1F20265(&cVar0, &cVar0, 0, 2, &cVar5, 0);
			}
			else
			{
				uLocal_48 = unk_0x595B8132C1F20265(&cVar0, &cVar0, 0, 2, &cVar4, 0);
			}
			unk_0x2BCFB39E86340DAA(&Global_4268330, 1);
			Global_16880 = 1;
			Global_16879 = uLocal_48;
			Global_16883 = 0;
		}
	}
	Global_4267065[Global_4268314 /*104*/].f_16 = uLocal_48;
}

void func_46()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, unk_0x08791BD93D5986C6(&(Global_106070.f_28022[Global_3069 /*29*/].f_7)), 64);
	if (Global_3088 == 0)
	{
		unk_0x59FF6261546DDD52("");
		StringCopy(&cVar1, unk_0x08791BD93D5986C6(&(Global_2993[1 /*6*/])), 64);
		sVar2 = unk_0x08791BD93D5986C6("CELL_253");
		unk_0x595B8132C1F20265(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		unk_0x59FF6261546DDD52("CELL_255");
		unk_0x4FDA9E6EF359F8A9(&(Global_2993[1 /*6*/]));
		unk_0x595B8132C1F20265(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xFA57C719261AA55D(&Global_2383, 0);
}

void func_47()
{
	if (unk_0x05EFB6A616B6FADE(Global_2383, 1))
	{
		func_50();
		func_48();
		Global_106070.f_14023[Global_14513 /*20*/].f_18 = 1;
		if (unk_0x4C9BACA8D249CB13())
		{
			iLocal_45[Global_14513] = unk_0xFFCC7EBF88BDEE54();
			iLocal_43[Global_14513] = 1;
		}
		else if (!unk_0x05EFB6A616B6FADE(Global_2383, 10))
		{
			iLocal_44[Global_14513] = unk_0xFD34717937104F1C();
			iLocal_43[Global_14513] = 1;
		}
		else
		{
			iLocal_44[0] = unk_0xFD34717937104F1C();
			iLocal_44[2] = unk_0xFD34717937104F1C();
			iLocal_44[1] = unk_0xFD34717937104F1C();
			iLocal_43[0] = 1;
			iLocal_43[2] = 1;
			iLocal_43[1] = 1;
		}
		unk_0xFA57C719261AA55D(&Global_2383, 1);
	}
}

void func_48()
{
	func_38();
	if (Global_71205)
	{
		Global_106070.f_14023[3 /*20*/].f_10 = func_111(1197, -1, 0);
	}
	if (Global_106070.f_14023[Global_14513 /*20*/].f_10 == 1)
	{
		if (!func_49(0))
		{
			unk_0xB0E737394929E89F(0, 2000, 100);
		}
	}
}

int func_49(int iParam0)
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

void func_50()
{
	char cVar0[64];
	int iVar1;
	char cVar2[64];
	char cVar3[64];
	char cVar4[64];
	char cVar5[64];
	
	if (Global_16883 != 0)
	{
		if (unk_0x07D08EE9B44B4EE9(Global_16883))
		{
			if (unk_0x2C58CFA8E806E25E(Global_16883))
			{
				StringCopy(&cVar0, unk_0x18167C9C4C1E9195(Global_16883), 64);
				Global_16891[Global_16889] = Global_16883;
			}
			else
			{
				StringCopy(&cVar0, "CHAR_DEFAULT", 64);
				Global_16891[Global_16889] = 0;
			}
		}
		else
		{
			StringCopy(&cVar0, "CHAR_DEFAULT", 64);
			Global_16891[Global_16889] = 0;
		}
	}
	else
	{
		StringCopy(&cVar0, unk_0x08791BD93D5986C6(&(Global_106070.f_28022[Global_106070.f_14113[Global_16889 /*104*/].f_17 /*29*/].f_7)), 64);
		Global_16891[Global_16889] = 0;
	}
	if (unk_0x429D45A6C6520026(&cVar0))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	else if (unk_0x3CAC2741CC1A631F(&cVar0, "NULL"))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	if (((((((Global_106070.f_14113[Global_16889 /*104*/].f_32 == 4 || Global_106070.f_14113[Global_16889 /*104*/].f_32 == 5) || Global_106070.f_14113[Global_16889 /*104*/].f_32 == 6) || Global_106070.f_14113[Global_16889 /*104*/].f_32 == 7) || Global_106070.f_14113[Global_16889 /*104*/].f_32 == 8) || Global_106070.f_14113[Global_16889 /*104*/].f_32 == 9) || Global_106070.f_14113[Global_16889 /*104*/].f_32 == 10) || Global_106070.f_14113[Global_16889 /*104*/].f_32 == 11)
	{
		iVar1 = 0;
		switch (Global_106070.f_14113[Global_16889 /*104*/].f_49)
		{
			case 1:
				unk_0x59FF6261546DDD52("CELL_CL01");
				break;
			
			case 2:
				unk_0x59FF6261546DDD52("CELL_CL02");
				break;
			
			case 3:
				unk_0x59FF6261546DDD52("CELL_CL03");
				break;
			
			case 4:
				unk_0x59FF6261546DDD52("CELL_CL04");
				break;
			
			case 5:
				unk_0x59FF6261546DDD52("CELL_CL05");
				break;
			
			case 6:
				unk_0x59FF6261546DDD52("CELL_CL06");
				break;
			
			case 7:
				unk_0x59FF6261546DDD52("CELL_CL07");
				break;
			
			case 8:
				unk_0x59FF6261546DDD52("CELL_CL08");
				break;
			
			case 9:
				unk_0x59FF6261546DDD52("CELL_CL09");
				break;
		}
		unk_0x4FDA9E6EF359F8A9(&(Global_106070.f_14113[Global_16889 /*104*/]));
		while (iVar1 < Global_106070.f_14113[Global_16889 /*104*/].f_49)
		{
			switch (Global_106070.f_14113[Global_16889 /*104*/].f_32)
			{
				case 4:
					unk_0x4FDA9E6EF359F8A9(&(Global_2524719.f_1651[iVar1 /*4*/]));
					break;
				
				case 5:
					unk_0x4FDA9E6EF359F8A9(&(Global_1654554[iVar1 /*4*/]));
					break;
				
				case 6:
					unk_0x4FDA9E6EF359F8A9(&(Global_1654595[iVar1 /*4*/]));
					break;
				
				case 7:
					unk_0x4FDA9E6EF359F8A9(&(Global_1654616[iVar1 /*4*/]));
					break;
				
				case 8:
					unk_0x4FDA9E6EF359F8A9(&(Global_1654633[iVar1 /*4*/]));
					break;
				
				case 9:
					unk_0x4FDA9E6EF359F8A9(&(Global_1654646[iVar1 /*4*/]));
					break;
				
				case 10:
					unk_0x4FDA9E6EF359F8A9(&(Global_1654659[iVar1 /*4*/]));
					break;
				
				case 11:
					unk_0x4FDA9E6EF359F8A9(&(Global_1654672[iVar1 /*4*/]));
					break;
			}
			iVar1++;
		}
		StringCopy(&cVar2, unk_0x08791BD93D5986C6(&(Global_106070.f_28022[Global_106070.f_14113[Global_16889 /*104*/].f_17 /*29*/].f_3)), 64);
		uLocal_48 = unk_0x595B8132C1F20265(&cVar0, &cVar0, 0, 1, &cVar2, 0);
		Global_16880 = 3;
		Global_16879 = uLocal_48;
		Global_16883 = 0;
	}
	else
	{
		unk_0x59FF6261546DDD52(&(Global_106070.f_14113[Global_16889 /*104*/]));
		switch (Global_106070.f_14113[Global_16889 /*104*/].f_32)
		{
			case 0:
				break;
			
			case 1:
				unk_0xC327C023FDA37F2E(&(Global_106070.f_14113[Global_16889 /*104*/].f_33));
				if (Global_106070.f_14113[Global_16889 /*104*/].f_66 == 1 && !unk_0x3CAC2741CC1A631F(&(Global_106070.f_14113[Global_16889 /*104*/].f_67), "NULL"))
				{
					unk_0xC327C023FDA37F2E(&(Global_106070.f_14113[Global_16889 /*104*/].f_67));
				}
				if ((Global_106070.f_14113[Global_16889 /*104*/].f_66 == 2 && !unk_0x3CAC2741CC1A631F(&(Global_106070.f_14113[Global_16889 /*104*/].f_67), "NULL")) && !unk_0x3CAC2741CC1A631F(&(Global_106070.f_14113[Global_16889 /*104*/].f_83), "NULL"))
				{
					if (unk_0x445EC9E7EACB710E(&(Global_106070.f_14113[Global_16889 /*104*/].f_67)))
					{
						unk_0x4FDA9E6EF359F8A9(&(Global_106070.f_14113[Global_16889 /*104*/].f_67));
					}
					else
					{
						unk_0xC327C023FDA37F2E(&(Global_106070.f_14113[Global_16889 /*104*/].f_67));
					}
					if (unk_0x445EC9E7EACB710E(&(Global_106070.f_14113[Global_16889 /*104*/].f_83)))
					{
						unk_0x4FDA9E6EF359F8A9(&(Global_106070.f_14113[Global_16889 /*104*/].f_83));
					}
					else
					{
						unk_0xC327C023FDA37F2E(&(Global_106070.f_14113[Global_16889 /*104*/].f_83));
					}
				}
				break;
			
			case 2:
				unk_0xCDA87E1DA52C8C9D(Global_106070.f_14113[Global_16889 /*104*/].f_49);
				break;
			
			case 3:
				unk_0xC327C023FDA37F2E(&(Global_106070.f_14113[Global_16889 /*104*/].f_33));
				unk_0xCDA87E1DA52C8C9D(Global_106070.f_14113[Global_16889 /*104*/].f_49);
				if (Global_106070.f_14113[Global_16889 /*104*/].f_66 == 1 && !unk_0x3CAC2741CC1A631F(&(Global_106070.f_14113[Global_16889 /*104*/].f_67), "NULL"))
				{
					unk_0xC327C023FDA37F2E(&(Global_106070.f_14113[Global_16889 /*104*/].f_67));
				}
				if ((Global_106070.f_14113[Global_16889 /*104*/].f_66 == 2 && !unk_0x3CAC2741CC1A631F(&(Global_106070.f_14113[Global_16889 /*104*/].f_67), "NULL")) && !unk_0x3CAC2741CC1A631F(&(Global_106070.f_14113[Global_16889 /*104*/].f_83), "NULL"))
				{
					if (unk_0x445EC9E7EACB710E(&(Global_106070.f_14113[Global_16889 /*104*/].f_67)))
					{
						unk_0x4FDA9E6EF359F8A9(&(Global_106070.f_14113[Global_16889 /*104*/].f_67));
					}
					else
					{
						unk_0xC327C023FDA37F2E(&(Global_106070.f_14113[Global_16889 /*104*/].f_67));
					}
					if (unk_0x445EC9E7EACB710E(&(Global_106070.f_14113[Global_16889 /*104*/].f_83)))
					{
						unk_0x4FDA9E6EF359F8A9(&(Global_106070.f_14113[Global_16889 /*104*/].f_83));
					}
					else
					{
						unk_0xC327C023FDA37F2E(&(Global_106070.f_14113[Global_16889 /*104*/].f_83));
					}
				}
				break;
		}
		if (Global_106070.f_14113[Global_16889 /*104*/].f_17 == 145)
		{
			StringCopy(&cVar3, "<C>", 64);
			StringConCat(&cVar3, &Global_3071, 64);
			StringConCat(&cVar3, "</C>", 64);
			uLocal_48 = unk_0x595B8132C1F20265(&cVar0, &cVar0, 0, 1, &cVar3, 0);
			Global_16880 = 3;
			Global_16879 = uLocal_48;
		}
		else
		{
			StringCopy(&cVar4, unk_0x08791BD93D5986C6(&(Global_106070.f_28022[Global_106070.f_14113[Global_16889 /*104*/].f_17 /*29*/].f_3)), 64);
			if (Global_106070.f_14113[Global_16889 /*104*/].f_17 == 98)
			{
				StringCopy(&cVar5, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar5, &cVar4, 64);
				uLocal_48 = unk_0x595B8132C1F20265(&cVar0, &cVar0, 0, 1, &cVar5, 0);
			}
			else
			{
				uLocal_48 = unk_0x595B8132C1F20265(&cVar0, &cVar0, 0, 1, &cVar4, 0);
			}
			Global_16880 = 3;
			Global_16879 = uLocal_48;
			Global_16883 = 0;
		}
	}
	Global_106070.f_14113[Global_16889 /*104*/].f_16 = uLocal_48;
}

void func_51()
{
	if (unk_0x05EFB6A616B6FADE(Global_2383, 19))
	{
		unk_0xFA57C719261AA55D(&Global_2383, 19);
		func_38();
		Global_106070.f_14023[3 /*20*/].f_18 = 0;
		Global_106070.f_14023[3 /*20*/].f_17 = 0;
	}
}

void func_52()
{
	if (iLocal_43[Global_14513] == 1)
	{
		if (unk_0x4C9BACA8D249CB13())
		{
			iLocal_47 = unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), iLocal_45[Global_14513]);
		}
		else
		{
			iLocal_46[Global_14513] = unk_0xFD34717937104F1C();
			iLocal_47 = (iLocal_46[Global_14513] - iLocal_44[Global_14513]);
		}
		if (iLocal_47 > 300000)
		{
			Global_106070.f_14023[Global_14513 /*20*/].f_18 = 0;
			Global_106070.f_14023[Global_14513 /*20*/].f_17 = 0;
			iLocal_43[Global_14513] = 0;
		}
	}
}

void func_53()
{
	int iVar0;
	
	func_38();
	if (Global_71205 == 0)
	{
		if (!func_44())
		{
			if (iLocal_53 == 0)
			{
				if ((Global_106070.f_14113[21 /*104*/].f_24 != 0 || Global_106070.f_14113[22 /*104*/].f_24 != 0) || Global_106070.f_14113[23 /*104*/].f_24 != 0)
				{
					switch (Global_14513)
					{
						case 0:
							if (Global_106070.f_14113[21 /*104*/].f_24 != 0)
							{
								iLocal_42 = 21;
								iLocal_53 = 1;
								settimera(0);
							}
							break;
						
						case 1:
							if (Global_106070.f_14113[22 /*104*/].f_24 != 0)
							{
								iLocal_42 = 22;
								iLocal_53 = 1;
								settimera(0);
							}
							break;
						
						case 2:
							if (Global_106070.f_14113[23 /*104*/].f_24 != 0)
							{
								iLocal_42 = 23;
								iLocal_53 = 1;
								settimera(0);
							}
							break;
						
						default:
							break;
						}
				}
			}
			else if (timera() > 15000)
			{
				iLocal_53 = 0;
				iVar0 = 0;
				func_38();
				if (iLocal_42 == 21 && Global_14513 != 0)
				{
					iVar0 = 1;
				}
				if (iLocal_42 == 22 && Global_14513 != 1)
				{
					iVar0 = 1;
				}
				if (iLocal_42 == 23 && Global_14513 != 2)
				{
					iVar0 = 1;
				}
				if (Global_106070.f_14113[iLocal_42 /*104*/].f_24 != 0 && iVar0 == 0)
				{
					if (!func_29(14))
					{
						if (func_56(Global_106070.f_14113[iLocal_42 /*104*/].f_17, &(Global_106070.f_14113[iLocal_42 /*104*/]), Global_106070.f_14113[iLocal_42 /*104*/].f_24, Global_106070.f_14113[iLocal_42 /*104*/].f_25, Global_106070.f_14113[iLocal_42 /*104*/].f_26, Global_106070.f_14113[iLocal_42 /*104*/].f_29, 0, 1, Global_106070.f_14113[iLocal_42 /*104*/].f_31, Global_106070.f_14113[iLocal_42 /*104*/].f_30))
						{
							Global_106070.f_14113[iLocal_42 /*104*/].f_24 = 0;
						}
					}
				}
			}
			if (iLocal_64 == 0)
			{
				if (Global_3059[Global_14513])
				{
					iLocal_64 = 1;
					iLocal_65 = Global_14513;
					if (unk_0x4C9BACA8D249CB13())
					{
						iLocal_62 = unk_0xFFCC7EBF88BDEE54();
					}
					else
					{
						iLocal_56 = unk_0xFD34717937104F1C();
					}
				}
			}
			else
			{
				if (unk_0x4C9BACA8D249CB13())
				{
					iLocal_63 = unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), iLocal_62);
				}
				else
				{
					iLocal_57 = unk_0xFD34717937104F1C();
					iLocal_63 = (iLocal_57 - iLocal_56);
				}
				if (iLocal_63 > 7000)
				{
					if (func_54(0))
					{
						Global_2993[1 /*6*/] = { Global_3042[Global_14513 /*4*/] };
						Global_3069 = Global_3064[Global_14513];
						Global_3059[Global_14513] = 0;
						iLocal_64 = 0;
					}
				}
				if (iLocal_65 != Global_14513)
				{
					iLocal_64 = 0;
				}
			}
		}
	}
}

bool func_54(int iParam0)
{
	return func_55(iParam0, Global_36117);
}

int func_55(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_56(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, var uParam5, int iParam6, bool bParam7, var uParam8, var uParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xFA57C719261AA55D(&Global_2383, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_57(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, uParam4, uParam5, bParam7, uParam8, uParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3090 = iParam6;
			Global_2993[3 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
			Global_3070 = iParam0;
			unk_0x2BCFB39E86340DAA(&Global_2383, 1);
			unk_0x2BCFB39E86340DAA(&Global_2383, 7);
		}
		return 1;
	}
	return 0;
}

int func_57(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x3CAC2741CC1A631F(sParam14, sParam15))
	{
	}
	func_38();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14513 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14513 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14513 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			if (unk_0xFF12F654A8561928(unk_0xA19140A5C42D8715()))
			{
				return 0;
			}
		}
		if (Global_106070.f_14023[Global_14513 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x8B1574454E8C2421(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x8B1574454E8C2421(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_63() == 0)
	{
		func_61();
		return 0;
	}
	func_60(Global_16889);
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/]), sParam1, 64);
	Global_106070.f_14113[Global_16889 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_106070.f_14113[Global_16889 /*104*/].f_24 = iParam2;
	}
	Global_106070.f_14113[Global_16889 /*104*/].f_25 = iParam7;
	Global_106070.f_14113[Global_16889 /*104*/].f_26 = uParam8;
	Global_106070.f_14113[Global_16889 /*104*/].f_29 = uParam9;
	Global_106070.f_14113[Global_16889 /*104*/].f_30 = uParam12;
	Global_106070.f_14113[Global_16889 /*104*/].f_31 = uParam11;
	Global_106070.f_14113[Global_16889 /*104*/].f_28 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_33), sParam4, 64);
	Global_106070.f_14113[Global_16889 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_50), sParam5, 64);
	Global_106070.f_14113[Global_16889 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_83), sParam15, 64);
	if (unk_0x05EFB6A616B6FADE(Global_2383, 10))
	{
		Global_106070.f_14113[Global_16889 /*104*/].f_99[0] = 1;
		Global_106070.f_14113[Global_16889 /*104*/].f_99[1] = 1;
		Global_106070.f_14113[Global_16889 /*104*/].f_99[2] = 1;
		Global_3089 = 4;
		func_59(0);
		func_59(2);
		func_59(1);
	}
	else
	{
		func_38();
		switch (iParam16)
		{
			case 3:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[Global_14513] = 1;
				break;
			
			case 0:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14513)
			{
				case 0:
					func_59(0);
					Global_3089 = 0;
					break;
				
				case 1:
					func_59(1);
					Global_3089 = 1;
					break;
				
				case 2:
					func_59(2);
					Global_3089 = 2;
					break;
				
				case 3:
					func_59(3);
					Global_3089 = 3;
					break;
				
				default:
					Global_3089 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x05EFB6A616B6FADE(Global_2383, 10))
		{
			Global_106070.f_14023[0 /*20*/].f_17 = 1;
			Global_106070.f_14023[1 /*20*/].f_17 = 1;
			Global_106070.f_14023[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_106070.f_14023[Global_14513 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_106070.f_14023[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_106070.f_14023[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_106070.f_14023[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16891[Global_16889] = 0;
	if (bParam10)
	{
		func_38();
		if (Global_14456)
		{
			StringCopy(&Global_14502, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14513)
			{
				case 0:
					StringCopy(&Global_14502, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14502, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14502, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14502, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_58())
			{
				unk_0xE11F00B4AC919F45(-1, "Text_Arrive_Tone", &Global_14502, 1);
			}
		}
	}
	if (!Global_14682)
	{
		if (Global_14513.f_1 == 6)
		{
			func_30(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_28(1);
			func_30(Global_14494, "DISPLAY_VIEW", 1f, to_float(Global_14493), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

bool func_58()
{
	return Global_1312857;
}

void func_59(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_106070.f_14023[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_60(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0xC5B07C33AC7BB174();
	iVar1 = unk_0x65DA628D62901275();
	iVar2 = unk_0x34CEB9721AC6A0A9();
	iVar3 = unk_0xC9A0B68BA813CF99();
	uVar4 = unk_0x897D202BD69186D5() + 1;
	iVar5 = unk_0x56EBDF0E39D83471();
	Global_106070.f_14113[iParam0 /*104*/].f_18 = iVar0;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_61()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71205)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16889 = 34;
	Global_106070.f_14113[Global_16889 /*104*/].f_18 = -1;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_1 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_2 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_3 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_62(Global_106070.f_14113[iVar2 /*104*/].f_18, Global_106070.f_14113[Global_16889 /*104*/].f_18))
		{
			Global_16889 = iVar2;
		}
		iVar2++;
	}
	Global_106070.f_14113[Global_16889 /*104*/].f_24 = 1;
}

int func_62(struct<6> Param0, struct<6> Param1)
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

int func_63()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71205)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_106070.f_14113[iVar2 /*104*/].f_24 == 0)
		{
			Global_16889 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16889 = 34;
	Global_106070.f_14113[Global_16889 /*104*/].f_18 = -1;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_1 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_2 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_3 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_106070.f_14113[iVar2 /*104*/].f_24 == 0 || Global_106070.f_14113[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_62(Global_106070.f_14113[iVar2 /*104*/].f_18, Global_106070.f_14113[Global_16889 /*104*/].f_18))
			{
				Global_16889 = iVar2;
			}
		}
		if (Global_106070.f_14113[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_16889 == 34)
	{
		return 0;
	}
	Global_106070.f_14113[Global_16889 /*104*/].f_99[0] = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_99[1] = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_99[2] = 0;
	return 1;
}

void func_64()
{
	if (unk_0x05EFB6A616B6FADE(Global_2383, 6))
	{
		if (Global_3087 > 0)
		{
			if (unk_0x05EFB6A616B6FADE(Global_2384, 11))
			{
				if (iLocal_41)
				{
					func_65(iLocal_37, "CLEAR_ALL");
					if (unk_0x05EFB6A616B6FADE(Global_2383, 25))
					{
						unk_0x31A9E530D137684F(iLocal_37, "CREATE_ALERT");
						unk_0x380580A1A1667F69(26);
						unk_0xD8B5988E85F72BE5(222f);
						unk_0xD8B5988E85F72BE5(222f);
						unk_0x271C1332F482646C();
					}
					if (unk_0x05EFB6A616B6FADE(Global_4268330, 11))
					{
						unk_0x31A9E530D137684F(iLocal_37, "CREATE_ALERT");
						unk_0x380580A1A1667F69(53);
						unk_0xD8B5988E85F72BE5(222f);
						unk_0xD8B5988E85F72BE5(222f);
						unk_0x271C1332F482646C();
					}
					if (Global_71205 == 1)
					{
						if (unk_0x05EFB6A616B6FADE(Global_4268330, 12))
						{
							unk_0x31A9E530D137684F(iLocal_37, "CREATE_ALERT");
							unk_0x380580A1A1667F69(52);
							unk_0xD8B5988E85F72BE5(222f);
							unk_0xD8B5988E85F72BE5(222f);
							unk_0x271C1332F482646C();
						}
						if (unk_0x05EFB6A616B6FADE(Global_4268330, 28))
						{
							unk_0x31A9E530D137684F(iLocal_37, "CREATE_ALERT");
							unk_0x380580A1A1667F69(60);
							unk_0xD8B5988E85F72BE5(222f);
							unk_0xD8B5988E85F72BE5(148f);
							unk_0x271C1332F482646C();
						}
					}
					if (unk_0x05EFB6A616B6FADE(Global_4268330, 19))
					{
						unk_0x31A9E530D137684F(iLocal_37, "CREATE_ALERT");
						unk_0x380580A1A1667F69(55);
						unk_0xD8B5988E85F72BE5(222f);
						if ((unk_0x05EFB6A616B6FADE(Global_4268330, 12) || unk_0x05EFB6A616B6FADE(Global_4268330, 11)) || unk_0x05EFB6A616B6FADE(Global_2383, 25))
						{
							unk_0xD8B5988E85F72BE5(192f);
						}
						else
						{
							unk_0xD8B5988E85F72BE5(222f);
						}
						unk_0x271C1332F482646C();
					}
					unk_0xFA57C719261AA55D(&Global_2384, 11);
					iLocal_41 = 0;
				}
			}
		}
		if (Global_3087 < 1)
		{
			unk_0x86795B44CE5FE021(&iLocal_37);
			unk_0xFA57C719261AA55D(&Global_2383, 6);
		}
		else
		{
			func_16();
		}
	}
	else if (Global_3087 > 0)
	{
		iLocal_37 = unk_0xB00CD6895BDB01A0("cellphone_alert_popup");
		while (!unk_0x0FA486DE15EB3004(iLocal_37))
		{
			wait(0);
		}
		unk_0x0A74F1E9CF777638(4);
		unk_0x2BCFB39E86340DAA(&Global_2383, 6);
	}
}

void func_65(int iParam0, char* sParam1)
{
	unk_0x31A9E530D137684F(iParam0, sParam1);
	unk_0x271C1332F482646C();
}

void func_66()
{
	if (unk_0x05EFB6A616B6FADE(Global_2384, 7))
	{
		unk_0x2BCFB39E86340DAA(&Global_2384, 6);
		unk_0xFA57C719261AA55D(&Global_2384, 7);
		return;
	}
	if (!unk_0x05EFB6A616B6FADE(Global_2384, 7))
	{
		unk_0xFA57C719261AA55D(&Global_2384, 6);
		return;
	}
}

void func_67()
{
	if (unk_0x05EFB6A616B6FADE(Global_2384, 4))
	{
		unk_0x2BCFB39E86340DAA(&Global_2384, 3);
		unk_0xFA57C719261AA55D(&Global_2384, 4);
		return;
	}
	if (!unk_0x05EFB6A616B6FADE(Global_2384, 4))
	{
		unk_0xFA57C719261AA55D(&Global_2384, 3);
		return;
	}
}

void func_68()
{
	if (unk_0x05EFB6A616B6FADE(Global_2384, 2))
	{
		if (!Global_14513.f_1 == 1)
		{
			Global_14513.f_1 = 0;
		}
		unk_0xFA57C719261AA55D(&Global_2384, 2);
		return;
	}
	if (!unk_0x05EFB6A616B6FADE(Global_2384, 2))
	{
		if (!Global_14513.f_1 == 1)
		{
			if (Global_14513.f_1 < 4)
			{
				Global_14513.f_1 = 3;
			}
		}
		return;
	}
}

int func_69()
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
		if (func_29(14))
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

int func_70(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	func_38();
	if (Global_71205 == 0)
	{
		if (func_29(14))
		{
			if (Global_16881 == 2 || Global_16881 == 4)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (Global_14513.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_49(0) == 1)
		{
			return 0;
		}
	}
	if (Global_14479 == 1)
	{
		return 0;
	}
	if (Global_14513.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!unk_0x2BCD0524CDEE1FD2(Global_14510))
	{
		if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_14513.f_1 < 4)
			{
				func_71("cellphone_flashhand");
				if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) == 0)
				{
					Global_14510 = start_new_script("cellphone_flashhand", 1424);
				}
				unk_0x4659F4154D948B01("cellphone_flashhand");
			}
		}
	}
	while (!Global_14495)
	{
		wait(0);
	}
	func_116();
	func_114();
	if (unk_0x8B1574454E8C2421(Global_2390[iParam0 /*15*/].f_9) == 0)
	{
		Global_2989 = 0;
		Global_14513.f_1 = 7;
		func_71(&(Global_2390[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (unk_0x8B1574454E8C2421(Global_2390[iParam0 /*15*/].f_9) == 0)
			{
				Global_14511 = start_new_script(&(Global_2390[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (unk_0x8B1574454E8C2421(Global_2390[iParam0 /*15*/].f_9) == 0)
		{
			Global_14511 = start_new_script(&(Global_2390[iParam0 /*15*/].f_5), 2552);
		}
		unk_0x4659F4154D948B01(&(Global_2390[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_71(char* sParam0)
{
	unk_0xD75A4240F0AD8613(sParam0);
	while (!unk_0xB1FDFCECA75CE4A7(sParam0))
	{
		wait(0);
	}
}

void func_72(int iParam0)
{
	if (func_74())
	{
		return;
	}
	if (Global_14681)
	{
		func_73(0, 0);
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
	if (!func_44())
	{
		Global_14513.f_1 = 3;
	}
}

void func_73(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_49(0))
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

bool func_74()
{
	return unk_0x05EFB6A616B6FADE(Global_1678593, 19);
}

void func_75()
{
	float fVar0;
	
	unk_0x62BAB49318F4FE6E(1);
	unk_0x9EA8CBEA7355649E(2, 201);
	unk_0x9EA8CBEA7355649E(2, 202);
	fVar0 = 0f;
	while ((!unk_0xDF0ADAD7E584090D(2, 201) && !unk_0xDF0ADAD7E584090D(2, 202)) || fVar0 < 1f)
	{
		_set_warning_message_2("VEUI_HDR_ALERT", "VE_DIR_MODE_SURE", 18, 0, 0, -1, 0, 0, 1, 0);
		wait(0);
		fVar0 = (fVar0 + unk_0xDE089748C4C76C96());
	}
	unk_0x62BAB49318F4FE6E(0);
	if (unk_0xDF0ADAD7E584090D(2, 201))
	{
		unk_0x9662BE461F9FDF9E(0);
		Global_105015 = 1;
	}
}

void func_76(int iParam0)
{
	float fVar0;
	int iVar1;
	
	unk_0x62BAB49318F4FE6E(1);
	unk_0x9EA8CBEA7355649E(2, 201);
	fVar0 = 0f;
	while (!unk_0xDF0ADAD7E584090D(2, 201) || fVar0 < 1f)
	{
		iVar1 = func_77(iParam0, 119);
		set_warning_message("FBR_GENERIC", 16384, 0, 0, -1, "FBR_DIR_MODE", iVar1, 1, 0);
		wait(0);
		fVar0 = (fVar0 + unk_0xDE089748C4C76C96());
	}
	unk_0x62BAB49318F4FE6E(0);
}

char* func_77(int iParam0, int iParam1)
{
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 1:
			return "FBR_BLK_CLEAN";
			break;
		
		case 2:
			return "FBR_BLK_RNNNG";
			break;
		
		case 13:
			return "FBR_BLK_DEAD";
			break;
		
		case 3:
			return "FBR_BLK_MISS";
			break;
		
		case 5:
			return "FBR_BLK_SHOP";
			break;
		
		case 4:
			return "FBR_BLK_CUTS";
			break;
		
		case 6:
			return "FBR_BLK_WANT";
			break;
		
		case 7:
			return "FBR_BLK_ONLI";
			break;
		
		case 8:
			return "FBR_BLK_ACT";
			break;
		
		case 9:
			return "FBR_BLK_LOC";
			break;
		
		case 10:
			return "FBR_BLK_VEH";
			break;
		
		case 11:
			return "FBR_BLK_PARA";
			break;
		
		case 12:
			return "FBR_BLK_FALL";
			break;
		
		default:
			return "ERROR";
			break;
	}
	return "ERROR";
}

int func_78(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iParam2 = iParam2;
	if (unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		return 13;
	}
	if (bParam1)
	{
		if (unk_0x8B1574454E8C2421(unk_0xB09979570758BDAD()) > 1)
		{
			return 2;
		}
	}
	if (func_109() && !func_29(14))
	{
		return 3;
	}
	if (func_108())
	{
		return 3;
	}
	if (func_107())
	{
		return 8;
	}
	if (bParam1)
	{
		if (func_106())
		{
			return 8;
		}
	}
	if (Global_90247)
	{
		return 3;
	}
	if (Global_25713)
	{
		return 8;
	}
	if (Global_25607)
	{
		return 8;
	}
	if (Global_2621550)
	{
		if (unk_0x8B1574454E8C2421(-1516147206) > 0)
		{
			return 3;
		}
	}
	else if (Global_2621549)
	{
		if (unk_0x8B1574454E8C2421(2006115718) > 0)
		{
			return 3;
		}
	}
	else if (unk_0x8B1574454E8C2421(joaat("mission_stat_watcher")) > 0)
	{
		return 3;
	}
	if (unk_0x8B1574454E8C2421(joaat("finale_choice")) > 0)
	{
		return 3;
	}
	if (unk_0x8B1574454E8C2421(joaat("creator")) > 0)
	{
		return 3;
	}
	if (unk_0x8B1574454E8C2421(joaat("respawn_controller")) > 0)
	{
		return 13;
	}
	if (func_105(bParam1))
	{
		return 3;
	}
	if (unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715()) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715()))
	{
		return 12;
	}
	if (func_104(Global_105095, 256))
	{
		return 3;
	}
	if (((func_103() || func_102()) || func_97()) || func_96())
	{
		return 5;
	}
	if (func_96())
	{
		return 5;
	}
	if (func_95())
	{
		return 5;
	}
	if (func_94())
	{
		return 5;
	}
	if (func_102())
	{
		return 5;
	}
	if (func_93() && !Global_105020)
	{
		return 8;
	}
	if (func_97())
	{
		return 5;
	}
	if (unk_0x47C3DC461C758C29() || func_92())
	{
		return 4;
	}
	if (func_58())
	{
		return 4;
	}
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_82(60);
			if (iVar0 != 0)
			{
				return iVar0;
			}
			if (unk_0x3977B7555441B490(unk_0xA19140A5C42D8715()) || unk_0xFCD57A307851D560(unk_0xA19140A5C42D8715()) != -1)
			{
				return 11;
			}
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1) || Global_105117)
			{
				return 10;
			}
		}
	}
	if (Global_25711)
	{
		return 8;
	}
	if (Global_71203)
	{
		return 4;
	}
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0 || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1))
		{
			return 6;
		}
		if (unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC()))
		{
			return 8;
		}
		if (unk_0xC35EE16DB41A098F(unk_0xA19140A5C42D8715()))
		{
			return 8;
		}
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		return 7;
	}
	if (func_81())
	{
		return 8;
	}
	if (Global_25461)
	{
		return 3;
	}
	if (unk_0xECD112E8A7AB2E8A())
	{
		return 4;
	}
	if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, 0, true, 0))
	{
		return 9;
	}
	if (unk_0x4374EED90C523366(unk_0xA19140A5C42D8715()))
	{
		return 9;
	}
	if (bParam1)
	{
		if (!func_79(0))
		{
			return 8;
		}
	}
	if (unk_0xEE7357B459939B0F(unk_0xA19140A5C42D8715()))
	{
		return 9;
	}
	return 0;
}

int func_79(bool bParam0)
{
	if (unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		return 0;
	}
	if ((((((((((!unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()) || !unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC())) || unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715())) || unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0)) || unk_0x6625F609B391348E(unk_0xA19140A5C42D8715())) || unk_0x97B2B0016AD3C7C6(unk_0xA19140A5C42D8715())) || unk_0x3D77D31E25961596(unk_0xA19140A5C42D8715())) || unk_0xC35EE16DB41A098F(unk_0xA19140A5C42D8715())) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1))
	{
		return 0;
	}
	if ((((((func_58() || Global_17228.f_4) || func_80()) || unk_0xABC4F525C7B4F20C()) || unk_0xFF301E8F39D8ED36()) || func_92()) || func_108())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (unk_0x356461BAB19FFA77())
		{
			return 0;
		}
	}
	return 1;
}

int func_80()
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		return Global_90805.f_44 == 1;
	}
	return 0;
}

bool func_81()
{
	return Global_53362;
}

int func_82(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0) && unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
	{
		return 5;
	}
	vVar0 = { func_91(unk_0xD4E735F4B6A956AC()) };
	if (Global_105157[10 /*10*/].f_1)
	{
		if (vdist2(vVar0, 241.9889f, 360.4732f, 105.6166f) < 2f)
		{
			return 3;
		}
	}
	if (func_90(2) && !func_90(17))
	{
		if (vdist2(vVar0, -59.96629f, -1099.005f, 25.52088f) < 8f)
		{
			if (unk_0x0C4DF083566CCC1C(vVar0, -61.26628f, -1096.505f, 25.52088f, -58.43333f, -1101.147f, 29.24937f, 1.25f, 0, 1))
			{
				return 9;
			}
		}
	}
	if (vdist2(vVar0, -740.9346f, 5599.426f, 40.71515f) < 11f)
	{
		if (unk_0x0C4DF083566CCC1C(vVar0, -746.1299f, 5599.226f, 40.47561f, -737.632f, 5599.364f, 44.1693f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (vdist2(vVar0, -740.9346f, 5590.426f, 40.71515f) < 11f)
	{
		if (unk_0x0C4DF083566CCC1C(vVar0, -746.1299f, 5590.667f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (vdist2(vVar0, 446.3265f, 5566.35f, 780.2151f) < 11f)
	{
		if (unk_0x0C4DF083566CCC1C(vVar0, 451.1661f, 5566.451f, 780.1703f, 442.5211f, 5566.374f, 783.9819f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (vdist2(vVar0, 446.3265f, 5577.35f, 780.2151f) < 11f)
	{
		if (unk_0x0C4DF083566CCC1C(vVar0, 451.1661f, 5577.867f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (vdist2(vVar0, 128.83f, -1297.98f, 29.3f) < 2f || vdist2(vVar0, 95.07f, -1284.98f, 29.3f) < 2f)
	{
		return 9;
	}
	if (vdist2(vVar0, 1081.951f, -1976.762f, 30.47218f) < 6f && func_89(26))
	{
		return 9;
	}
	if (!iLocal_27)
	{
		func_83(iParam0);
	}
	iVar1 = unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715());
	if (iVar1 == 0)
	{
		return 0;
	}
	else if ((iVar1 == Global_105033 || iVar1 == Global_105034) || iVar1 == Global_105035)
	{
		return 9;
	}
	else if (iVar1 == Global_105024)
	{
		return 9;
	}
	else if (iVar1 == Global_105025)
	{
		return 9;
	}
	else if (iVar1 == Global_105028)
	{
		return 9;
	}
	else if (iVar1 == Global_105027)
	{
		return 9;
	}
	else if (iVar1 == Global_105029)
	{
		return 9;
	}
	else if (iVar1 == Global_105030)
	{
		return 9;
	}
	else if (iVar1 == Global_105031)
	{
		return 9;
	}
	else if (iVar1 == Global_105032)
	{
		return 9;
	}
	else if (iVar1 == Global_105036)
	{
		return 9;
	}
	else if (iVar1 == Global_105037)
	{
		return 9;
	}
	else if (iVar1 == Global_105038)
	{
		return 9;
	}
	else if (iVar1 == Global_105039)
	{
		return 9;
	}
	else if (iVar1 == Global_105040)
	{
		return 9;
	}
	else if ((iVar1 == Global_105041 || iVar1 == Global_105042) && func_90(67))
	{
		return 9;
	}
	iVar2 = 0;
	while (iVar2 <= (19 - 1))
	{
		if (iVar1 == Global_105043[iVar2])
		{
			return 9;
		}
		iVar2++;
	}
	return 0;
}

void func_83(var uParam0)
{
	int iVar0;
	
	uParam0 = uParam0;
	func_86(24, &Global_105024);
	func_86(47, &Global_105025);
	func_86(10, &Global_105033);
	func_86(9, &Global_105034);
	func_86(8, &Global_105035);
	func_86(21, &Global_105036);
	func_86(11, &Global_105037);
	func_86(18, &Global_105041);
	func_86(19, &Global_105042);
	Global_105028 = unk_0xB68EB57358F46F86(-76.6618f, 6222.191f, 32.2412f, "V_factory1");
	Global_105027 = unk_0xB68EB57358F46F86(-98.2637f, 6210.022f, 31.924f, "V_factory2");
	Global_105029 = unk_0xB68EB57358F46F86(-115.8956f, 6179.749f, 32.4102f, "V_factory3");
	Global_105030 = unk_0xB68EB57358F46F86(-149.8199f, 6144.978f, 31.3353f, "V_factory4");
	Global_105031 = unk_0xB68EB57358F46F86(16.3605f, -1100.259f, 28.797f, "v_gun");
	Global_105032 = unk_0xB68EB57358F46F86(125.1948f, -1284.13f, 28.2847f, "v_strip3");
	Global_105038 = unk_0xB68EB57358F46F86(-545.5717f, 1987.145f, 126.0262f, "cs6_08_mine_int");
	Global_105039 = unk_0xB68EB57358F46F86(2330.598f, 2571.935f, 45.6802f, "ch3_01_trlr_int");
	Global_105040 = unk_0xB68EB57358F46F86(-54.7f, -1092.7f, 26.4f, "v_carshowroom");
	iVar0 = 0;
	while (iVar0 <= (19 - 1))
	{
		Global_105043[iVar0] = unk_0x988A25F5907E93F0(func_84(iVar0));
		iVar0++;
	}
	iLocal_27 = 1;
}

Vector3 func_84(int iParam0)
{
	if (!func_85(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -711.8212f, -915.9057f, 18.2377f;
		
		case 1:
			return -52.7185f, -1756.175f, 28.4432f;
		
		case 2:
			return 1159.441f, -325.6666f, 68.2272f;
		
		case 3:
			return 1699.429f, 4928.642f, 41.0858f;
		
		case 4:
			return -1822.926f, 788.9531f, 137.212f;
		
		case 5:
			return 1166.427f, 2703.528f, 37.1574f;
		
		case 6:
			return -2973.414f, 390.6885f, 14.0433f;
		
		case 7:
			return -1225.86f, -903.5782f, 11.3263f;
		
		case 8:
			return 1140.659f, -981.0806f, 45.4158f;
		
		case 9:
			return -1490.275f, -382.8514f, 39.1634f;
		
		case 10:
			return -3240.719f, 1004.508f, 11.8468f;
		
		case 11:
			return -3039.249f, 589.3831f, 6.9251f;
		
		case 12:
			return 544.4275f, 2672.061f, 41.1726f;
		
		case 13:
			return 2558.754f, 385.599f, 107.6391f;
		
		case 14:
			return 2681.511f, 3282.763f, 54.2573f;
		
		case 15:
			return 1731.153f, 6411.633f, 34.0373f;
		
		case 16:
			return 1964.931f, 3741.207f, 31.3599f;
		
		case 17:
			return 29.0707f, -1348.773f, 28.5101f;
		
		case 18:
			return 376.8503f, 323.9777f, 102.5825f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_85(int iParam0)
{
	if (iParam0 >= 19)
	{
		return 0;
	}
	else if (iParam0 <= -1)
	{
		return 0;
	}
	return 1;
}

var func_86(int iParam0, var uParam1)
{
	struct<5> Var0;
	
	Var0 = { func_87(iParam0) };
	*uParam1 = unk_0xB68EB57358F46F86(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_87(int iParam0)
{
	struct<5> Var0;
	vector3 vVar1;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			vVar1 = { func_88(1, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			vVar1 = { func_88(2, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			vVar1 = { func_88(3, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			vVar1 = { func_88(4, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			vVar1 = { func_88(5, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			vVar1 = { func_88(6, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			vVar1 = { func_88(7, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049778[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			vVar1 = { func_88(35, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			vVar1 = { func_88(36, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			vVar1 = { func_88(37, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			vVar1 = { func_88(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			vVar1 = { func_88(39, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			vVar1 = { func_88(40, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			vVar1 = { func_88(41, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			vVar1 = { func_88(42, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			vVar1 = { func_88(43, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			vVar1 = { func_88(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			vVar1 = { func_88(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			vVar1 = { func_88(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			vVar1 = { func_88(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			vVar1 = { func_88(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			vVar1 = { func_88(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			vVar1 = { func_88(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			vVar1 = { func_88(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			vVar1 = { func_88(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			vVar1 = { func_88(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			vVar1 = { func_88(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			vVar1 = { func_88(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			vVar1 = { func_88(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			vVar1 = { func_88(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			vVar1 = { func_88(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			vVar1 = { func_88(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			vVar1 = { func_88(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			vVar1 = { func_88(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			vVar1 = { func_88(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			vVar1 = { func_88(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			vVar1 = { func_88(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			vVar1 = { func_88(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			vVar1 = { func_88(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			vVar1 = { func_88(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			vVar1 = { func_88(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			vVar1 = { func_88(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			vVar1 = { func_88(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			vVar1 = { func_88(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			vVar1 = { func_88(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			vVar1 = { func_88(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			vVar1 = { func_88(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			vVar1 = { func_88(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			vVar1 = { func_88(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			vVar1 = { func_88(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			vVar1 = { func_88(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			vVar1 = { func_88(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			vVar1 = { func_88(91, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			vVar1 = { func_88(97, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			vVar1 = { func_88(103, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			vVar1 = { func_88(104, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			vVar1 = { func_88(105, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			vVar1 = { func_88(106, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			vVar1 = { func_88(107, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			vVar1 = { func_88(108, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			vVar1 = { func_88(109, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			vVar1 = { func_88(110, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			vVar1 = { func_88(111, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			vVar1 = { func_88(112, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			vVar1 = { func_88(113, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			vVar1 = { func_88(114, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			vVar1 = { func_88(103, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			vVar1 = { func_88(106, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			vVar1 = { func_88(109, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			vVar1 = { func_88(112, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 199.9716f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 173.1165f, -1003.28f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 195:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 196:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_88(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_89(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_87312[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_84079)
	{
		if (Global_84079[iVar0 /*5*/] != -1)
		{
			if (Global_71474.f_109[Global_84079[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_90(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106070.f_9057.f_330[iParam0 /*6*/];
}

Vector3 func_91(int iParam0)
{
	return unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iParam0), false);
}

int func_92()
{
	if (unk_0x8B1574454E8C2421(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_93()
{
	return unk_0xFD34717937104F1C() <= Global_17367.f_5873 + 100;
}

bool func_94()
{
	return unk_0x05EFB6A616B6FADE(Global_71453, 9);
}

bool func_95()
{
	return unk_0x05EFB6A616B6FADE(Global_71453, 8);
}

int func_96()
{
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0) && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (((((((((((((((unk_0x411C28019DEA5CEF(unk_0xA19140A5C42D8715(), "misshair_shop@barbers", "player_intro", 3) || unk_0x411C28019DEA5CEF(unk_0xA19140A5C42D8715(), "misshair_shop@barbers", "player_base", 3)) || unk_0x411C28019DEA5CEF(unk_0xA19140A5C42D8715(), "misshair_shop@barbers", "player_enterchair", 3)) || unk_0x411C28019DEA5CEF(unk_0xA19140A5C42D8715(), "misshair_shop@barbers", "player_exitchair", 3)) || unk_0x411C28019DEA5CEF(unk_0xA19140A5C42D8715(), "misshair_shop@barbers", "player_idle_a", 3)) || unk_0x411C28019DEA5CEF(unk_0xA19140A5C42D8715(), "misshair_shop@barbers", "player_idle_b", 3)) || unk_0x411C28019DEA5CEF(unk_0xA19140A5C42D8715(), "misshair_shop@barbers", "player_idle_c", 3)) || unk_0x411C28019DEA5CEF(unk_0xA19140A5C42D8715(), "misshair_shop@barbers", "player_idle_d", 3)) || unk_0x411C28019DEA5CEF(unk_0xA19140A5C42D8715(), "misshair_shop@hair_dressers", "player_intro", 3)) || unk_0x411C28019DEA5CEF(unk_0xA19140A5C42D8715(), "misshair_shop@hair_dressers", "player_base", 3)) || unk_0x411C28019DEA5CEF(unk_0xA19140A5C42D8715(), "misshair_shop@hair_dressers", "player_enterchair", 3)) || unk_0x411C28019DEA5CEF(unk_0xA19140A5C42D8715(), "misshair_shop@hair_dressers", "player_exitchair", 3)) || unk_0x411C28019DEA5CEF(unk_0xA19140A5C42D8715(), "misshair_shop@hair_dressers", "player_idle_a", 3)) || unk_0x411C28019DEA5CEF(unk_0xA19140A5C42D8715(), "misshair_shop@hair_dressers", "player_idle_b", 3)) || unk_0x411C28019DEA5CEF(unk_0xA19140A5C42D8715(), "misshair_shop@hair_dressers", "player_idle_c", 3)) || unk_0x411C28019DEA5CEF(unk_0xA19140A5C42D8715(), "misshair_shop@hair_dressers", "player_idle_d", 3))
		{
			return 1;
		}
	}
	return 0;
}

int func_97()
{
	int iVar0;
	
	if (func_103())
	{
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (func_98(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_98(int iParam0)
{
	return func_99(iParam0, 20, 1);
}

int func_99(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0x05EFB6A616B6FADE(Global_93284.f_1336[iParam0], iParam1);
	}
	else if (unk_0x4C9BACA8D249CB13())
	{
		if (func_101() == 0)
		{
			return unk_0x05EFB6A616B6FADE(func_111(func_100(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x05EFB6A616B6FADE(Global_106070.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 8488;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		default:
			break;
	}
	return 9954;
}

int func_101()
{
	return Global_25459;
}

bool func_102()
{
	return Global_93284.f_328 > 0;
}

bool func_103()
{
	return Global_93284.f_327 > 0;
}

bool func_104(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_105(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

bool func_106()
{
	return Global_93271.f_1;
}

bool func_107()
{
	return Global_71472;
}

int func_108()
{
	if (Global_71465)
	{
		return 1;
	}
	else if (Global_56175 && !Global_56181)
	{
		return 1;
	}
	return 0;
}

int func_109()
{
	if (Global_36117 == 15)
	{
		return 0;
	}
	return 1;
}

int func_110(int iParam0)
{
	if ((Global_16936 || Global_16935) || Global_16937)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 145)
	{
		if (Global_14513.f_1 == 10)
		{
			if (Global_1698 == iParam0)
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
	return 0;
}

int func_111(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_112(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_112(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_113();
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

var func_113()
{
	return Global_1312736;
}

void func_114()
{
	if (Global_71205 == 0)
	{
		Global_2390[14 /*15*/].f_4 = -99;
		Global_2390[4 /*15*/].f_4 = -99;
		if (Global_2458186)
		{
			if (func_29(14))
			{
				func_115(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_115(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_115(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_115(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_115(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_2390[iParam0 /*15*/]), sParam1, 16);
	Global_2390[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_2390[iParam0 /*15*/].f_5), sParam3, 16);
	Global_2390[iParam0 /*15*/].f_9 = unk_0xFEB6EEC0545AF7AA(sParam3);
	Global_2390[iParam0 /*15*/].f_10 = iParam4;
	Global_2390[iParam0 /*15*/].f_11 = iParam5;
	Global_2390[iParam0 /*15*/].f_12 = iParam6;
	Global_2390[iParam0 /*15*/].f_13 = iParam7;
	Global_2390[iParam0 /*15*/].f_14 = iParam8;
	if (Global_2390[iParam0 /*15*/].f_12 == 0)
	{
		Global_2390[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_2390[iParam0 /*15*/].f_13 == 0)
	{
		Global_2390[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_2390[iParam0 /*15*/].f_14 == 0)
	{
		Global_2390[iParam0 /*15*/].f_14 = 0;
	}
}

void func_116()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_2390[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_71205 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 157)
		{
			if (Global_106070.f_28022[iVar2 /*29*/].f_19[Global_14513] == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_115(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_115(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_115(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_36117 == 15 && func_105(0) == 0) && Global_2388 == 0)
		{
			func_115(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14684 = 0;
			Global_2389 = 255;
		}
		else
		{
			func_115(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14684 = 1;
			Global_2389 = 42;
		}
		if (iVar1 == 1)
		{
			func_115(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_115(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_115(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_115(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_115(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_106070.f_14023.f_89 == 1)
		{
			func_115(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_106070.f_14023.f_88 == 1)
		{
			func_115(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_115(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_115(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_115(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_115(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_115(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_115(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_115(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_115(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_115(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_115(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_115(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_115(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_115(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_115(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_115(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_115(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_115(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (unk_0x05EFB6A616B6FADE(Global_4268330, 4) == 1)
		{
			func_115(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_115(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_115(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_115(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_115(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_115(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_115(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_115(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_115(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_115(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_115(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_115(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_115(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_115(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_115(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_115(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_115(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!unk_0x05EFB6A616B6FADE(Global_4268330, 4) == 1)
		{
			if (Global_1573910)
			{
				func_115(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (unk_0x05EFB6A616B6FADE(Global_4268330, 20) == 1)
			{
				func_115(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (unk_0x05EFB6A616B6FADE(Global_4268330, 22) == 1)
			{
				func_115(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (unk_0x05EFB6A616B6FADE(Global_4268330, 26) == 1)
			{
				func_115(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((unk_0x05EFB6A616B6FADE(Global_4268330, 4) == 0 && Global_1573910 == 0) && unk_0x05EFB6A616B6FADE(Global_4268330, 20) == 0) && unk_0x05EFB6A616B6FADE(Global_4268330, 22) == 0) && unk_0x05EFB6A616B6FADE(Global_4268330, 26) == 0)
		{
			func_115(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

void func_117()
{
}

