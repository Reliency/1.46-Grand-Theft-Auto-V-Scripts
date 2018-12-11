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
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	struct<2> Local_33 = { 0, 0 } ;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	vector3 vLocal_38 = { 0f, 0f, 0f };
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<2> Local_47 = { 0, 0 } ;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
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
	var uLocal_63 = 0;
	bool bLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	vector3 vLocal_71 = { 0f, 0f, 0f };
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	struct<13> Var1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	
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
	fLocal_22 = 0.73f;
	fLocal_23 = 0.55f;
	fLocal_24 = 0.73f;
	fLocal_25 = 0.45f;
	fLocal_26 = 0f;
	fLocal_27 = 0f;
	unk_0x5341E3E598550C46();
	Global_14678 = 145;
	unk_0xFA57C719261AA55D(&Global_2384, 8);
	unk_0xFA57C719261AA55D(&Global_2383, 14);
	unk_0xFA57C719261AA55D(&Global_4268330, 3);
	unk_0xFA57C719261AA55D(&Global_2384, 10);
	unk_0xFA57C719261AA55D(&Global_2383, 17);
	unk_0xFA57C719261AA55D(&Global_2383, 9);
	unk_0xFA57C719261AA55D(&Global_2383, 26);
	unk_0xFA57C719261AA55D(&Global_2383, 23);
	unk_0xFA57C719261AA55D(&Global_2384, 24);
	unk_0xFA57C719261AA55D(&Global_2384, 25);
	unk_0xFA57C719261AA55D(&Global_2384, 27);
	unk_0xFA57C719261AA55D(&Global_2384, 26);
	unk_0xFA57C719261AA55D(&Global_2383, 30);
	Global_2534145 = 0;
	iLocal_72 = 0;
	unk_0x1C04ABA4CCBF5199(0, 0);
	unk_0xF88F0290A1FAB85C(0);
	Global_14479 = 0;
	iLocal_30 = 0;
	Global_14457 = 0;
	Global_14497 = 0;
	Global_14498 = 0;
	func_107();
	Global_14444 = { Global_14476 };
	Global_14517 = 4;
	Global_14518 = 0;
	Global_2988 = 1;
	Global_14493 = Global_14517;
	if (Global_14495 == 0)
	{
		Global_14496 = 0;
		if (Global_71205)
		{
			Global_14494 = unk_0xB00CD6895BDB01A0("cellphone_ifruit");
			iLocal_41 = 1;
			if (iLocal_41 == 1)
			{
			}
		}
		else if (Global_14456)
		{
			Global_14501 = 1;
			Global_14494 = unk_0xB00CD6895BDB01A0("cellphone_prologue");
		}
		else
		{
			Global_14494 = unk_0xB00CD6895BDB01A0(&(Global_106070.f_14023[Global_14513 /*20*/]));
		}
		settimera(0);
		while (!unk_0x0FA486DE15EB3004(Global_14494) && Global_14496 == 0)
		{
			wait(0);
			if (timera() > 20000)
			{
				Global_14496 = 1;
			}
			if (unk_0x47C01C0E6F4C1D06())
			{
				if (unk_0xAEAF59799C2F26E4(unk_0xA19140A5C42D8715(), "Synched"))
				{
					if (timera() > 2000)
					{
						Global_14496 = 1;
					}
				}
			}
			if (Global_14512 == 1)
			{
				func_106();
			}
		}
		if (Global_14496 == 1)
		{
			if (unk_0x0FA486DE15EB3004(Global_14494))
			{
				func_105(Global_14494, "SHUTDOWN_MOVIE");
			}
			wait(0);
			unk_0x86795B44CE5FE021(&Global_14494);
			Global_14454 = 0;
			Global_14495 = 0;
			Global_14679 = 0;
			if (Global_106070.f_14023.f_84 == 1)
			{
				Global_106070.f_14023.f_84 = 0;
				unk_0xC47B4E7E5C4ACE12(0, 1);
			}
			Global_14457 = 1;
			Global_14513.f_1 = 3;
			func_104();
			Global_14501 = 0;
			unk_0x8C7F9B7F98D6B7C8();
			unk_0xFA57C719261AA55D(&Global_2383, 9);
			unk_0xFA57C719261AA55D(&Global_2383, 27);
			unk_0xFA57C719261AA55D(&Global_2383, 30);
			unk_0xFA57C719261AA55D(&Global_2384, 5);
			unk_0xFA57C719261AA55D(&Global_2384, 21);
			unk_0xFA57C719261AA55D(&Global_2385, 2);
			if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
			{
				unk_0x866A4A18F288ACEA(unk_0xA19140A5C42D8715());
			}
			if (unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
			{
				unk_0x866A4A18F288ACEA(unk_0xA19140A5C42D8715());
			}
			Global_14681 = 0;
			Global_16882 = 0;
			Global_16881 = 0;
			Global_15835 = 0;
			func_102();
			func_100();
			Global_4268545 = 0;
			unk_0x8F1A9FE6D91AAFEB();
		}
		Global_14437 = 0.1f;
		Global_14438 = 0.38f;
		Global_14439 = 0.195f;
		Global_14440 = 0.05f;
		if ((unk_0x365C4466BC171A2D() || unk_0x29A02C184A66D25E()) || unk_0x47C01C0E6F4C1D06())
		{
			unk_0x1C828C4226A9FADF(18, &iLocal_60, &iLocal_61, &iLocal_62, &uLocal_63);
			func_99(Global_14494, "SET_SOFT_KEYS_COLOUR", 2f, to_float(iLocal_60), to_float(iLocal_61), to_float(iLocal_62), -1082130432);
			unk_0x1C828C4226A9FADF(9, &iLocal_60, &iLocal_61, &iLocal_62, &uLocal_63);
			func_99(Global_14494, "SET_SOFT_KEYS_COLOUR", 1f, to_float(iLocal_60), to_float(iLocal_61), to_float(iLocal_62), -1082130432);
			unk_0x1C828C4226A9FADF(6, &iLocal_60, &iLocal_61, &iLocal_62, &uLocal_63);
			func_99(Global_14494, "SET_SOFT_KEYS_COLOUR", 3f, to_float(iLocal_60), to_float(iLocal_61), to_float(iLocal_62), -1082130432);
		}
		else
		{
			unk_0x1C828C4226A9FADF(9, &iLocal_60, &iLocal_61, &iLocal_62, &uLocal_63);
			func_99(Global_14494, "SET_SOFT_KEYS_COLOUR", 2f, to_float(iLocal_60), to_float(iLocal_61), to_float(iLocal_62), -1082130432);
			unk_0x1C828C4226A9FADF(126, &iLocal_60, &iLocal_61, &iLocal_62, &uLocal_63);
			func_99(Global_14494, "SET_SOFT_KEYS_COLOUR", 1f, to_float(iLocal_60), to_float(iLocal_61), to_float(iLocal_62), -1082130432);
			unk_0x1C828C4226A9FADF(6, &iLocal_60, &iLocal_61, &iLocal_62, &uLocal_63);
			func_99(Global_14494, "SET_SOFT_KEYS_COLOUR", 3f, to_float(iLocal_60), to_float(iLocal_61), to_float(iLocal_62), -1082130432);
		}
		if (Global_14496 == 0)
		{
		}
		func_98();
		if (Global_71205)
		{
			StringCopy(&Global_14502, "Phone_SoundSet_Michael", 24);
		}
		Global_14495 = 1;
	}
	Global_2386 = 99;
	func_97();
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		iLocal_52 = unk_0x24A1A7BF4ED94B71(unk_0xA19140A5C42D8715());
	}
	if (unk_0x49B680F5AF4359D0())
	{
		Global_16836 = 1;
	}
	else
	{
		Global_16836 = 0;
	}
	func_99(Global_14494, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	Global_14455 = 1;
	if (Global_71205)
	{
		Global_14683 = 0;
		Global_4268542 = func_94(2028, -1, 0);
		if (Global_4268542 < 1 || Global_4268542 > 7)
		{
			Global_4268542 = 1;
		}
		func_99(Global_14494, "SET_THEME", to_float(Global_4268542), -1082130432, -1082130432, -1082130432, -1082130432);
		func_93();
		Global_4268543 = func_94(2027, -1, 0);
		if (Global_4268543 == 0)
		{
			Var1 = { func_92(unk_0xD4E735F4B6A956AC()) };
			iVar2 = 0;
			if (unk_0x804C0CBA285C7A35(0) == 0)
			{
			}
			if (Global_4268546 == 1)
			{
			}
			if ((unk_0xE0B3F7A8017F6425(&Var1) && unk_0x804C0CBA285C7A35(0)) && Global_4268546 == 0)
			{
				if (unk_0x686DAB3ED67144AB(&Var1, &uVar0))
				{
				}
				else
				{
					iVar2 = 1;
				}
				if (iVar2 == 0)
				{
					unk_0x31A9E530D137684F(Global_14494, "SET_BACKGROUND_CREW_IMAGE");
					unk_0x390B339C943A8A54("CELL_2000");
					unk_0xC327C023FDA37F2E(&uVar0);
					unk_0xD481829E3E36543B();
					unk_0x271C1332F482646C();
				}
				else
				{
					func_99(Global_14494, "SET_BACKGROUND_IMAGE", to_float(0), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			else
			{
				func_99(Global_14494, "SET_BACKGROUND_IMAGE", to_float(0), -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else
		{
			func_99(Global_14494, "SET_BACKGROUND_IMAGE", to_float(Global_4268543), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else
	{
		if (Global_14456)
		{
			Global_14683 = 0;
		}
		else if (Global_106070.f_14023.f_88 == 1 || Global_106070.f_14023.f_89 == 1)
		{
			Global_14683 = 0;
		}
		else
		{
			Global_14683 = 0;
		}
		func_99(Global_14494, "SET_THEME", to_float(Global_106070.f_14023[Global_14513 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
		if (Global_3187 == 0)
		{
			func_99(Global_14494, "SET_BACKGROUND_IMAGE", to_float(Global_106070.f_14023[Global_14513 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			unk_0xD0F5704F771784BF(575f);
		}
		func_93();
	}
	iLocal_42 = func_91();
	if (Global_14456 == 0)
	{
		func_80();
	}
	Global_14491 = 0;
	Global_14682 = 0;
	unk_0xFA57C719261AA55D(&Global_2383, 9);
	Global_2458186 = 0;
	if (func_78(0) && unk_0x18F86E07E41D913F())
	{
		Global_2458186 = 1;
	}
	func_99(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_77();
	func_75();
	func_74(1);
	unk_0xE11F00B4AC919F45(-1, "Pull_Out", &Global_14502, 1);
	settimerb(0);
	while (Global_14513.f_1 < 6 && Global_14496 == 0)
	{
		wait(0);
		if (timerb() > 10000)
		{
			Global_14496 = 1;
		}
		if (Global_14513.f_1 < 4)
		{
			Global_14496 = 1;
		}
	}
	if (Global_14513.f_1 == 5 || Global_14513.f_1 == 6)
	{
		if (func_73(14))
		{
			func_99(Global_14494, "DISPLAY_VIEW", 1f, to_float(6), -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_99(Global_14494, "DISPLAY_VIEW", 1f, to_float(Global_14517), -1082130432, -1082130432, -1082130432);
		}
		if (Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 2)
		{
			func_99(Global_14494, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_99(Global_14494, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (Global_14501)
		{
			func_72(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		}
		else
		{
			func_72(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_14501)
		{
			func_72(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_72(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_14683 == 0)
		{
			func_72(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xFA57C719261AA55D(&Global_2383, 17);
		}
		else if (Global_71205)
		{
			func_72(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xFA57C719261AA55D(&Global_2383, 17);
		}
		else
		{
			if (Global_14682 == 1)
			{
				if (Global_14501)
				{
					func_72(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_72(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else if (Global_14501)
			{
				func_72(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_72(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			unk_0x2BCFB39E86340DAA(&Global_2383, 17);
		}
	}
	Global_14499 = 1;
	func_71();
	if (unk_0x4C9BACA8D249CB13())
	{
		iLocal_58 = unk_0xFFCC7EBF88BDEE54();
	}
	else
	{
		iLocal_53 = unk_0xFD34717937104F1C();
	}
	if (Global_14679 == 1)
	{
		if (Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 2)
		{
			if (Global_106070.f_14023.f_84 == 0)
			{
				Global_106070.f_14023.f_84 = 1;
				if (Global_14458 == 0)
				{
					fVar3 = 0.75f;
					fVar4 = 0.8f;
				}
				else
				{
					fVar3 = 0.65f;
					fVar4 = 0.77f;
				}
				if (fVar3 == fVar4)
				{
				}
				func_70("CELL_7052", 10000);
			}
		}
	}
	if (Global_71205 == 0)
	{
		iLocal_18 = unk_0xFD34717937104F1C() + 375;
	}
	if (func_69())
	{
		iLocal_35 = 1;
	}
	else
	{
		iLocal_35 = 0;
	}
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		if (unk_0xCCB06FD56E3262CF(unk_0xA19140A5C42D8715(), 0))
		{
			iLocal_36 = 1;
			if (func_69())
			{
				func_68();
			}
		}
		else
		{
			iLocal_36 = 0;
		}
	}
	if (unk_0x47C01C0E6F4C1D06())
	{
		if (Global_71205 == 0)
		{
			iLocal_55 = unk_0xFD34717937104F1C();
			iLocal_57 = 0;
		}
	}
	while (true)
	{
		wait(0);
		if (unk_0x05EFB6A616B6FADE(Global_4268330, 24))
		{
			if (!Global_14682)
			{
				if (Global_14513.f_1 == 6 || Global_14513.f_1 > 6)
				{
					unk_0xFA57C719261AA55D(&Global_4268330, 24);
					func_77();
					func_99(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_74(1);
					if (Global_14513.f_1 == 6)
					{
						func_99(Global_14494, "DISPLAY_VIEW", 1f, to_float(Global_14493), -1082130432, -1082130432, -1082130432);
					}
				}
			}
		}
		if (func_67())
		{
			unk_0xD481A812073CCF02(0, 114, 1);
		}
		if (Global_71205 == 0)
		{
			if (iLocal_32)
			{
				if (Global_14513.f_1 == 6 || Global_14513.f_1 == 7)
				{
					iLocal_32 = 0;
				}
			}
			if (Global_14513.f_1 > 4)
			{
				if ((unk_0x05EFB6A616B6FADE(Global_2383, 14) && Global_4268545 == 0) && Global_14453 == 0)
				{
					if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
					{
						if (func_66())
						{
							unk_0x75B4B390EE495A3B(&Local_33);
							if (Global_14459[Global_14458 /*3*/].f_1 != Local_33.f_1)
							{
								func_64();
							}
						}
						else
						{
							unk_0x75B4B390EE495A3B(&Local_33);
							if (Global_14466[Global_14458 /*3*/].f_1 != Local_33.f_1)
							{
								if (!func_67())
								{
								}
								if (unk_0x8B1574454E8C2421(joaat("appemail")) < 1)
								{
									func_62();
								}
							}
						}
						if (iLocal_36 == 0)
						{
							if (unk_0xCCB06FD56E3262CF(unk_0xA19140A5C42D8715(), 0))
							{
								iLocal_36 = 1;
								func_62();
								func_68();
							}
						}
						else if (!unk_0xCCB06FD56E3262CF(unk_0xA19140A5C42D8715(), 0))
						{
							iLocal_36 = 0;
							func_64();
							if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
							{
								if (Global_15822 != 2)
								{
									func_61();
								}
							}
						}
						if (iLocal_35 == 0)
						{
							if (func_69())
							{
								iLocal_35 = 1;
								if (unk_0xCCB06FD56E3262CF(unk_0xA19140A5C42D8715(), 0))
								{
									func_68();
								}
								func_64();
							}
						}
						else
						{
							if (unk_0x703A9347832E1FFA(unk_0xA19140A5C42D8715()))
							{
								if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
								{
									unk_0xD481A812073CCF02(0, 26, 1);
								}
							}
							if (func_69() == 0)
							{
								iLocal_35 = 0;
								func_62();
							}
						}
					}
				}
			}
		}
		if (Global_2458186 == 1)
		{
			if (!func_78(0) || !unk_0x18F86E07E41D913F())
			{
				if (unk_0x8B1574454E8C2421(joaat("appcamera")) == 0)
				{
					if (Global_14513.f_1 > 3)
					{
						Global_14498 = 1;
						func_60();
						func_56(0);
						Global_2458186 = 0;
					}
				}
			}
		}
		if (Global_14684 == 0)
		{
			if ((Global_36117 != 15 || Global_2388 == 1) || func_55(0))
			{
				if (!Global_14682)
				{
					if (Global_14513.f_1 == 6)
					{
						Global_2389 = 42;
						func_99(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_77();
						func_75();
						func_74(1);
						func_99(Global_14494, "DISPLAY_VIEW", 1f, to_float(Global_14493), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_14684 = 1;
			}
		}
		else if ((Global_36117 == 15 && func_55(0) == 0) && Global_2388 == 0)
		{
			if (!Global_14682)
			{
				if (Global_14513.f_1 == 6)
				{
					Global_2389 = 255;
					func_99(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_77();
					func_75();
					func_74(1);
					func_99(Global_14494, "DISPLAY_VIEW", 1f, to_float(Global_14493), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_14684 = 0;
		}
		if (Global_14685 == 0)
		{
			if (unk_0x05EFB6A616B6FADE(Global_2384, 3))
			{
				if (!Global_14682)
				{
					if (Global_14513.f_1 == 6)
					{
						func_99(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_77();
						func_75();
						func_74(1);
						func_99(Global_14494, "DISPLAY_VIEW", 1f, to_float(Global_14493), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_14685 = 1;
			}
		}
		else if (!unk_0x05EFB6A616B6FADE(Global_2384, 3))
		{
			if (!Global_14682)
			{
				if (Global_14513.f_1 == 6)
				{
					func_99(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_77();
					func_75();
					func_74(1);
					func_99(Global_14494, "DISPLAY_VIEW", 1f, to_float(Global_14493), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_14685 = 0;
		}
		if (!unk_0xD1ABB20CFF127CCC())
		{
			if (Global_14441.f_1 != Global_14459[Global_14458 /*3*/].f_1 || func_69())
			{
				if (Global_14513.f_1 > 3)
				{
					if (unk_0x8B1574454E8C2421(joaat("apptrackify")) == 0)
					{
						if (Global_71205)
						{
							if (Global_14513.f_1 == 9)
							{
								if (Global_15875 == 1 || unk_0x05EFB6A616B6FADE(Global_2384, 23))
								{
									unk_0x9EA8CBEA7355649E(0, Global_14482);
								}
							}
							else
							{
								unk_0x9EA8CBEA7355649E(0, Global_14482);
							}
						}
						else
						{
							unk_0x9EA8CBEA7355649E(0, Global_14482);
						}
					}
					if (unk_0x8B1574454E8C2421(-1641206367) == 0)
					{
						unk_0x9EA8CBEA7355649E(0, Global_14483);
						if (unk_0x05EFB6A616B6FADE(Global_2383, 17))
						{
							unk_0x9EA8CBEA7355649E(0, Global_14484);
						}
					}
					if (!func_54() && unk_0x8B1574454E8C2421(-1641206367) == 0)
					{
						unk_0x9EA8CBEA7355649E(0, Global_14485);
					}
				}
			}
			if (Global_14441.f_1 == Global_14459[Global_14458 /*3*/].f_1)
			{
			}
		}
		if (!unk_0x0B9F814BC8D14042(2))
		{
			unk_0xD481A812073CCF02(0, 140, 1);
			unk_0xD481A812073CCF02(0, 141, 1);
		}
		if (!unk_0xD1ABB20CFF127CCC())
		{
			if (!Global_68494)
			{
				if (!func_67())
				{
					unk_0x9EA8CBEA7355649E(0, 180);
					unk_0x9EA8CBEA7355649E(0, 181);
					unk_0x863EF4AF862F63EC(0, 180, 1);
					unk_0x863EF4AF862F63EC(0, 181, 1);
				}
				unk_0x9EA8CBEA7355649E(0, Global_14487);
				if (!func_54())
				{
					unk_0x9EA8CBEA7355649E(0, Global_14488);
				}
				if (Global_14513.f_1 > 4)
				{
					unk_0x9EA8CBEA7355649E(0, Global_14490);
				}
			}
		}
		if (func_53(2, Global_14481, 0))
		{
			iLocal_50 = 1;
			settimera(0);
		}
		if (iLocal_31 == 1)
		{
			if (!unk_0xD73B1037F6BD4B90(2, Global_14482))
			{
				Global_2387 = 1;
				iLocal_31 = 0;
			}
			if (!Global_14513.f_1 > 3)
			{
				iLocal_31 = 0;
			}
		}
		if (iLocal_50)
		{
			if (unk_0xD73B1037F6BD4B90(2, Global_14481))
			{
				if (timera() > 5000)
				{
					Global_14513.f_1 = 3;
					func_51();
				}
			}
			else
			{
				iLocal_50 = 0;
			}
		}
		Global_2991 = unk_0xFD34717937104F1C();
		if (Global_14500)
		{
			func_71();
			Global_14499 = 1;
			Global_14500 = 0;
		}
		if (Global_14681 == 0)
		{
			unk_0xD8C147DA332E7F06(6);
			unk_0xD8C147DA332E7F06(7);
			unk_0xD8C147DA332E7F06(8);
			unk_0xD8C147DA332E7F06(9);
			func_45();
			func_44();
			unk_0x7AF4A31FB51D0A4D(iLocal_39);
			if (Global_14499 == 1)
			{
				unk_0x0A74F1E9CF777638(4);
				if (Global_14456)
				{
					unk_0x84829313FB8AC81C(Global_14494, Global_14433, Global_14434, Global_14435, Global_14436, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x84829313FB8AC81C(Global_14494, Global_14433, Global_14434, Global_14435, Global_14436, 255, 255, 255, 255, 0);
				}
				func_97();
			}
			if (Global_14453 == 1)
			{
				if (Global_14513.f_1 > 3)
				{
					func_43();
				}
			}
			else if (Global_14513.f_1 > 3)
			{
				if (Global_4268545 == 1)
				{
					func_42();
				}
				if (unk_0x05EFB6A616B6FADE(Global_2384, 25))
				{
					if (Global_71205 == 1)
					{
						func_41();
					}
				}
				else if (!unk_0x05EFB6A616B6FADE(Global_2384, 24))
				{
					if (unk_0x05EFB6A616B6FADE(Global_2384, 26))
					{
						if (func_53(2, Global_14480, 0))
						{
							unk_0x2BCFB39E86340DAA(&Global_2384, 25);
							unk_0xFA57C719261AA55D(&Global_2384, 26);
							unk_0xFA57C719261AA55D(&Global_2385, 2);
						}
					}
				}
				else if (Global_71205 == 1)
				{
					func_40();
				}
			}
		}
		if (iLocal_30)
		{
			if (Global_14513.f_1 == 6)
			{
				func_36();
			}
		}
		else if (!unk_0x05EFB6A616B6FADE(Global_2383, 23))
		{
			if (Global_14513.f_1 == 5 || Global_14513.f_1 == 6)
			{
				if (Global_14681 == 0)
				{
					if (unk_0x8B1574454E8C2421(joaat("appcamera")) < 1 && unk_0x8B1574454E8C2421(joaat("appemail")) < 1)
					{
						if (Global_14456 == 0)
						{
							if (unk_0x05EFB6A616B6FADE(Global_2383, 14))
							{
								if (!Global_71205)
								{
									if (iLocal_31 == 0)
									{
										if (!func_73(14))
										{
											func_35();
										}
										else if (Global_2458186)
										{
											func_34();
										}
									}
								}
								else
								{
									func_23();
								}
							}
						}
						if (unk_0x05EFB6A616B6FADE(Global_2383, 9))
						{
							func_20(0, 0, 1, 1);
						}
						else if (Global_16881 == 0)
						{
							if (!unk_0x05EFB6A616B6FADE(Global_4268330, 3))
							{
								if (Global_71205)
								{
									func_19();
								}
								func_18();
								func_16();
							}
						}
						else
						{
							if (Global_71205)
							{
								func_19();
							}
							if (!unk_0x05EFB6A616B6FADE(Global_4268330, 3))
							{
								if (Global_16881 == 1)
								{
									if (unk_0x05EFB6A616B6FADE(Global_4268330, 1))
									{
										if (unk_0x05EFB6A616B6FADE(Global_2383, 14))
										{
											if (Global_71205)
											{
												func_20(7, 0, 1, 0);
											}
											else
											{
												Global_16882 = 0;
											}
											Global_16881 = 0;
											unk_0xFA57C719261AA55D(&Global_4268330, 1);
										}
									}
									else if (unk_0x05EFB6A616B6FADE(Global_2383, 14))
									{
										func_20(7, 0, 1, 0);
										Global_16881 = 0;
									}
								}
								else
								{
									if (Global_16881 == 3)
									{
										func_20(1, 0, 1, 0);
										Global_16881 = 0;
									}
									if (Global_16881 == 2)
									{
										func_20(14, 0, 1, 0);
										Global_16881 = 0;
									}
									if (Global_16881 == 4)
									{
										func_20(23, 0, 1, 0);
										Global_16881 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (unk_0xB1FDFCECA75CE4A7(&(Global_2390[Global_14516 /*15*/].f_5)))
		{
			if (Global_14516 == 0)
			{
				if (unk_0x8B1574454E8C2421(Global_2390[Global_14516 /*15*/].f_9) == 0)
				{
					Global_14511 = start_new_script(&(Global_2390[Global_14516 /*15*/].f_5), 4000);
				}
			}
			else
			{
				iVar5 = 0;
				if (Global_14516 == 23)
				{
					if (unk_0x05EFB6A616B6FADE(Global_4268330, 4) == 0 && Global_1573910 == 0)
					{
					}
				}
				if (Global_14516 == 2 || iVar5 == 1)
				{
					if (unk_0x8B1574454E8C2421(Global_2390[Global_14516 /*15*/].f_9) == 0)
					{
						Global_14511 = start_new_script(&(Global_2390[Global_14516 /*15*/].f_5), 4592);
					}
				}
				else if (unk_0x8B1574454E8C2421(Global_2390[Global_14516 /*15*/].f_9) == 0)
				{
					Global_14511 = start_new_script(&(Global_2390[Global_14516 /*15*/].f_5), 2552);
				}
			}
			unk_0x4659F4154D948B01(&(Global_2390[Global_14516 /*15*/].f_5));
			Global_2386 = 99;
			unk_0xFA57C719261AA55D(&Global_2383, 23);
		}
		if (unk_0x0B9F814BC8D14042(2))
		{
			if (unk_0xD1ABB20CFF127CCC())
			{
				unk_0xD481A812073CCF02(2, 200, 1);
			}
		}
		if (Global_14513.f_1 == 1)
		{
			func_7();
		}
		if (Global_14513.f_1 == 0)
		{
			func_7();
		}
		if (Global_14513.f_1 == 3)
		{
			func_7();
		}
		else
		{
			if (Global_15835)
			{
				if (Global_14513.f_1 == 9)
				{
					if (Global_71205)
					{
						if (!unk_0x05EFB6A616B6FADE(Global_2384, 31))
						{
							if (!unk_0x05EFB6A616B6FADE(Global_2384, 27))
							{
								if (func_6())
								{
									if (!unk_0x05EFB6A616B6FADE(Global_2383, 9))
									{
										if (func_53(2, Global_14485, 0))
										{
											if (!unk_0x47C01C0E6F4C1D06())
											{
												if (!Global_14512 == 1)
												{
													if (Global_14513.f_1 > 6)
													{
														unk_0x2BCFB39E86340DAA(&Global_2384, 24);
														unk_0x2BCFB39E86340DAA(&Global_2384, 27);
														unk_0xFA57C719261AA55D(&Global_2384, 26);
														unk_0xFA57C719261AA55D(&Global_2384, 25);
														unk_0x2BCFB39E86340DAA(&(Global_2524719.f_1721), 17);
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
			}
			if (Global_14496 == 1)
			{
				Global_14498 = 1;
				func_56(0);
			}
			if (Global_14497 == 1)
			{
				Global_14498 = 1;
				func_56(0);
			}
			if (Global_71205)
			{
				if (!unk_0x05EFB6A616B6FADE(Global_2385, 0))
				{
					if (unk_0xD1ABB20CFF127CCC() && !func_5())
					{
						if (Global_2530962.f_1 == 1)
						{
						}
						else
						{
							func_60();
							func_56(0);
						}
					}
				}
			}
			if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
			{
				if (unk_0x4374EED90C523366(unk_0xA19140A5C42D8715()))
				{
					if (unk_0x0FD5C826D2659CD1(unk_0xA19140A5C42D8715()) > 0.3f)
					{
						unk_0x2BCFB39E86340DAA(&Global_2384, 4);
					}
					if (unk_0x0FD5C826D2659CD1(unk_0xA19140A5C42D8715()) == 1f)
					{
						Global_14498 = 1;
						func_60();
						func_56(0);
					}
				}
				if (func_73(14))
				{
					if ((unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[0 /*29*/] || unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[1 /*29*/]) || unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[2 /*29*/])
					{
						iLocal_73 = 0;
					}
					else if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
					{
						iLocal_73 = 1;
					}
				}
				if ((((((((((((((unk_0xC64BD920A5A82BC0(unk_0xA19140A5C42D8715()) || unk_0x293A873434A0E30D(unk_0xD4E735F4B6A956AC())) || unk_0x721474045C81EC30(unk_0xA19140A5C42D8715())) || unk_0x9B9A3A10827A2EA0()) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || unk_0xBCF615B6673B73ED(unk_0xA19140A5C42D8715())) || unk_0xCCB06FD56E3262CF(unk_0xA19140A5C42D8715(), 0)) || unk_0xF0F0F135A933B6B0(unk_0xA19140A5C42D8715())) || unk_0x8B1574454E8C2421(joaat("michael1")) > 0) || Global_71466 == 1) || func_3(unk_0xA19140A5C42D8715())) || unk_0x1095F403F52B42E1(unk_0xDF069A8A4CCE674E(unk_0xA19140A5C42D8715()), 0)) || unk_0x6625F609B391348E(unk_0xA19140A5C42D8715())) || unk_0xF657E86BC7B91C6E()) || iLocal_73)
				{
					if (!Global_14456)
					{
						unk_0x2BCFB39E86340DAA(&Global_2384, 4);
					}
				}
				if (unk_0x47C01C0E6F4C1D06())
				{
					if (Global_71205 == 0)
					{
						if (iLocal_57 == 0)
						{
							if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
							{
								if (!unk_0xB10F7FE89663CB5B(unk_0xA19140A5C42D8715(), unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)))
								{
									iLocal_55 = unk_0xFD34717937104F1C();
									iLocal_57 = 1;
								}
							}
						}
						else
						{
							iLocal_56 = unk_0xFD34717937104F1C();
							iLocal_59 = (iLocal_56 - iLocal_55);
							if (iLocal_59 < 4000)
							{
								unk_0x2BCFB39E86340DAA(&Global_2384, 4);
							}
							else
							{
								iLocal_57 = 0;
							}
						}
					}
				}
				if (unk_0xD73B1037F6BD4B90(0, 25) || unk_0xD73B1037F6BD4B90(0, 68))
				{
					if (Global_71205)
					{
						unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iLocal_65, 1);
						if (iLocal_65 != joaat("weapon_unarmed") && Global_14513.f_1 < 7)
						{
							unk_0x2BCFB39E86340DAA(&Global_2384, 4);
						}
					}
				}
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					iLocal_66 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
					if (unk_0x8F474E419F56E48D(iLocal_66) == joaat("submersible") || unk_0x8F474E419F56E48D(iLocal_66) == joaat("submersible2"))
					{
						iLocal_69 = 1;
					}
					else
					{
						iLocal_69 = 0;
					}
					if (((((unk_0x8F474E419F56E48D(iLocal_66) == joaat("rhino") || unk_0x8F474E419F56E48D(iLocal_66) == joaat("cutter")) || unk_0x8F474E419F56E48D(iLocal_66) == -692292317) || unk_0x8F474E419F56E48D(iLocal_66) == -1435527158) || iLocal_69) || unk_0x1095F403F52B42E1(iLocal_66, 0) == 0)
					{
						unk_0x2BCFB39E86340DAA(&Global_2384, 4);
					}
					if (((((((((((((((unk_0x8F474E419F56E48D(iLocal_66) == joaat("valkyrie") || unk_0x8F474E419F56E48D(iLocal_66) == joaat("insurgent")) || unk_0x8F474E419F56E48D(iLocal_66) == joaat("technical")) || unk_0x8F474E419F56E48D(iLocal_66) == joaat("trash")) || unk_0x8F474E419F56E48D(iLocal_66) == joaat("trash2")) || unk_0x8F474E419F56E48D(iLocal_66) == joaat("limo2")) || unk_0x8F474E419F56E48D(iLocal_66) == -1924433270) || unk_0x8F474E419F56E48D(iLocal_66) == -32236122) || unk_0x8F474E419F56E48D(iLocal_66) == 1897744184) || unk_0x8F474E419F56E48D(iLocal_66) == -1881846085) || unk_0x8F474E419F56E48D(iLocal_66) == joaat("technical2")) || unk_0x8F474E419F56E48D(iLocal_66) == joaat("boxville5")) || unk_0x8F474E419F56E48D(iLocal_66) == -749299473) || unk_0x8F474E419F56E48D(iLocal_66) == -32878452) || unk_0x8F474E419F56E48D(iLocal_66) == 1043222410) || unk_0x8F474E419F56E48D(iLocal_66) == -692292317)
					{
						if (unk_0xB10F7FE89663CB5B(unk_0xA19140A5C42D8715(), iLocal_66))
						{
							iVar6 = func_2(unk_0xA19140A5C42D8715(), iLocal_66);
							if (iVar6 != -2)
							{
								if (unk_0x8F474E419F56E48D(iLocal_66) == joaat("insurgent") || unk_0x8F474E419F56E48D(iLocal_66) == joaat("limo2"))
								{
									if (iVar6 == 3)
									{
										unk_0x2BCFB39E86340DAA(&Global_2384, 4);
									}
								}
								if (unk_0x8F474E419F56E48D(iLocal_66) == joaat("trash") || unk_0x8F474E419F56E48D(iLocal_66) == joaat("trash2"))
								{
									if (iVar6 == 2 || iVar6 == 1)
									{
										unk_0x2BCFB39E86340DAA(&Global_2384, 4);
									}
								}
								if (unk_0x8F474E419F56E48D(iLocal_66) == joaat("technical2"))
								{
									if (iVar6 == 1)
									{
										unk_0x2BCFB39E86340DAA(&Global_2384, 4);
									}
								}
								if (unk_0x8F474E419F56E48D(iLocal_66) == joaat("boxville5"))
								{
									if (iVar6 == 3)
									{
										unk_0x2BCFB39E86340DAA(&Global_2384, 4);
									}
								}
								if (unk_0x8F474E419F56E48D(iLocal_66) == -1924433270)
								{
									if (iVar6 == 3)
									{
										unk_0x2BCFB39E86340DAA(&Global_2384, 4);
									}
								}
								if (unk_0x8F474E419F56E48D(iLocal_66) == -32236122)
								{
									if (iVar6 == 1)
									{
										unk_0x2BCFB39E86340DAA(&Global_2384, 4);
									}
								}
								if (unk_0x8F474E419F56E48D(iLocal_66) == 1897744184)
								{
									if (iVar6 == 0)
									{
										unk_0x2BCFB39E86340DAA(&Global_2384, 4);
									}
								}
								if (unk_0x8F474E419F56E48D(iLocal_66) == -1881846085)
								{
									if (iVar6 == -1)
									{
										unk_0x2BCFB39E86340DAA(&Global_2384, 4);
									}
								}
								if (unk_0x39CF954DC56E2A1F(iLocal_66, iVar6))
								{
									unk_0x2BCFB39E86340DAA(&Global_2384, 4);
								}
							}
						}
					}
					if (unk_0xDF0ADAD7E584090D(0, 69))
					{
						if (Global_71205 == 0)
						{
							if (Global_14513.f_1 == 6 || Global_14513.f_1 == 7)
							{
								bVar7 = true;
								if (unk_0x8F474E419F56E48D(iLocal_66) == 886810209 && unk_0x4374EED90C523366(iLocal_66))
								{
									bVar7 = false;
								}
								if (((unk_0x7C197233F79C2CB8(unk_0x8F474E419F56E48D(iLocal_66)) || unk_0xCA8C103FCD316F89(unk_0x8F474E419F56E48D(iLocal_66))) || unk_0x8F474E419F56E48D(iLocal_66) == joaat("submersible")) || unk_0x8F474E419F56E48D(iLocal_66) == joaat("submersible2"))
								{
									bVar7 = false;
								}
								if (bVar7)
								{
									func_56(0);
								}
							}
						}
					}
				}
				else
				{
					if (unk_0xDF0ADAD7E584090D(0, 24))
					{
						if (Global_71205 == 0)
						{
							if (Global_14513.f_1 == 6 || Global_14513.f_1 == 7)
							{
								func_56(0);
							}
						}
					}
					iLocal_69 = 0;
				}
				if (unk_0xFF12F654A8561928(unk_0xA19140A5C42D8715()))
				{
					Global_14498 = 1;
					func_60();
					func_56(0);
				}
				if (Global_71205 == 0)
				{
					if (unk_0x24A1A7BF4ED94B71(unk_0xA19140A5C42D8715()) < iLocal_52)
					{
						if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
						{
							Global_14498 = 1;
							func_60();
							func_56(0);
						}
					}
					if (Global_14513.f_1 == 9 || Global_14513.f_1 == 10)
					{
						if (unk_0xFF12F654A8561928(unk_0xA19140A5C42D8715()))
						{
							Global_14498 = 1;
							func_60();
							func_56(0);
						}
					}
				}
				else if (func_67())
				{
					if (unk_0x24A1A7BF4ED94B71(unk_0xA19140A5C42D8715()) < iLocal_52)
					{
						if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
						{
							Global_14498 = 1;
							func_60();
							func_56(0);
						}
					}
				}
				if (unk_0xEA8B3B18A25152B5())
				{
					if (!unk_0xCCB06FD56E3262CF(unk_0xA19140A5C42D8715(), 1))
					{
						if (!func_67())
						{
							unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iLocal_65, 1);
							if ((iLocal_65 == joaat("weapon_sniperrifle") || iLocal_65 == joaat("weapon_heavysniper")) || iLocal_65 == joaat("weapon_remotesniper"))
							{
								bLocal_64 = true;
							}
							else
							{
								bLocal_64 = false;
							}
							if (unk_0x965BA0E75ABD2A72())
							{
								if (bLocal_64)
								{
									Global_14498 = 1;
									func_60();
									func_56(0);
								}
							}
						}
					}
				}
				if (unk_0x97B2B0016AD3C7C6(unk_0xA19140A5C42D8715()))
				{
					Global_14498 = 1;
					func_60();
					func_56(0);
				}
				if (unk_0x97722E4EBB9BA577(unk_0xA19140A5C42D8715(), 0))
				{
					Global_14498 = 1;
					func_60();
					func_56(0);
				}
				if (unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1))
				{
					Global_14498 = 1;
					func_60();
					func_56(0);
				}
				if (unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715()) || unk_0x3977B7555441B490(unk_0xA19140A5C42D8715()))
				{
					if (Global_71205 == 0)
					{
						Global_14498 = 1;
						func_60();
						func_56(0);
					}
				}
			}
			else
			{
				iVar8 = 0;
				if (((Global_71205 && Global_2530962.f_1) && Global_2530962.f_37) && Global_14513.f_1 == 9)
				{
					iVar8 = 1;
					if (!unk_0x05EFB6A616B6FADE(Global_2384, 24))
					{
						if (unk_0x05EFB6A616B6FADE(Global_2384, 26))
						{
							unk_0x2BCFB39E86340DAA(&Global_2384, 25);
							unk_0xFA57C719261AA55D(&Global_2384, 26);
							unk_0xFA57C719261AA55D(&Global_2385, 2);
						}
					}
				}
				if (iVar8 == 0)
				{
					Global_14498 = 1;
					func_60();
					func_56(0);
				}
			}
		}
		if (Global_14491 == 1)
		{
			func_1();
		}
		if (Global_14512 == 2)
		{
			if (unk_0x0B9F814BC8D14042(2))
			{
				unk_0x9EA8CBEA7355649E(0, Global_14482);
				unk_0x9EA8CBEA7355649E(0, Global_14483);
				unk_0xD481A812073CCF02(0, 24, 1);
				unk_0xD481A812073CCF02(0, 257, 1);
			}
			if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
			{
				unk_0x866A4A18F288ACEA(unk_0xA19140A5C42D8715());
			}
		}
	}
}

void func_1()
{
	if (!unk_0xD73B1037F6BD4B90(2, Global_14482) && !unk_0xD73B1037F6BD4B90(2, Global_14481))
	{
		Global_14491 = 0;
	}
}

int func_2(int iParam0, int iParam1)
{
	if (!unk_0x7112137033807390(iParam0, 0) && !unk_0x7112137033807390(iParam1, 0))
	{
		if (unk_0xB10F7FE89663CB5B(iParam0, iParam1))
		{
			if (unk_0xB0D49A1F9F054602(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0xB0D49A1F9F054602(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0xB0D49A1F9F054602(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0xB0D49A1F9F054602(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
			if (unk_0xB0D49A1F9F054602(iParam1, 3, 0) == iParam0)
			{
				return 3;
			}
			if (unk_0xB0D49A1F9F054602(iParam1, 4, 0) == iParam0)
			{
				return 4;
			}
			if (unk_0xB0D49A1F9F054602(iParam1, 5, 0) == iParam0)
			{
				return 5;
			}
			if (unk_0xB0D49A1F9F054602(iParam1, 6, 0) == iParam0)
			{
				return 6;
			}
			if (unk_0xB0D49A1F9F054602(iParam1, 7, 0) == iParam0)
			{
				return 3;
			}
			if (unk_0xB0D49A1F9F054602(iParam1, 8, 0) == iParam0)
			{
				return 4;
			}
		}
	}
	return -2;
}

int func_3(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_4(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_4(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_37058[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_37058[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_5()
{
	return unk_0x05EFB6A616B6FADE(Global_1678593, 5);
}

bool func_6()
{
	return Global_2530962.f_1;
}

void func_7()
{
	float fVar0;
	vector3 vVar1;
	float fVar2;
	
	Global_16881 = 0;
	Global_16882 = 0;
	unk_0x9EA8CBEA7355649E(0, Global_14483);
	unk_0xD8C147DA332E7F06(6);
	unk_0xD8C147DA332E7F06(7);
	unk_0xD8C147DA332E7F06(8);
	unk_0xD8C147DA332E7F06(9);
	if (Global_14479 == 0)
	{
		unk_0xD0F5704F771784BF(500f);
		if (func_66())
		{
			iLocal_18 = unk_0xFD34717937104F1C();
		}
		else
		{
			iLocal_18 = 0;
		}
		unk_0xF88F0290A1FAB85C(1);
		Global_14479 = 1;
	}
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		if (unk_0x5478521AC20DB43C(unk_0xA19140A5C42D8715()))
		{
			unk_0x866A4A18F288ACEA(unk_0xA19140A5C42D8715());
		}
	}
	if (unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		if (unk_0x5478521AC20DB43C(unk_0xA19140A5C42D8715()))
		{
			unk_0x866A4A18F288ACEA(unk_0xA19140A5C42D8715());
		}
	}
	if (Global_106070.f_14023.f_84 == 1)
	{
		Global_106070.f_14023.f_84 = 0;
		unk_0xC47B4E7E5C4ACE12(0, 1);
	}
	fVar0 = 350f;
	if (unk_0x05EFB6A616B6FADE(Global_2383, 30) || unk_0x05EFB6A616B6FADE(Global_2385, 2))
	{
		fVar0 = 25f;
	}
	vVar1 = { Global_14473 };
	if (Global_14498 == 1)
	{
		vVar1 = { -45f, 45f, 25f };
	}
	if ((unk_0x05EFB6A616B6FADE(Global_2384, 26) || unk_0x05EFB6A616B6FADE(Global_2383, 30)) || unk_0x05EFB6A616B6FADE(Global_2385, 2))
	{
		vLocal_71 = { Global_14459[Global_14458 /*3*/] };
	}
	else
	{
		vLocal_71 = { Global_14466[Global_14458 /*3*/] };
	}
	fVar2 = func_13(vLocal_71, Global_14459[Global_14458 /*3*/], Global_14473, vVar1, fVar0, 0);
	if (!iLocal_40 && fVar2 >= 1f)
	{
		unk_0x8C7F9B7F98D6B7C8();
		iLocal_40 = 1;
	}
	if (iLocal_40 && (unk_0xFD34717937104F1C() - iLocal_18) > 500)
	{
		unk_0x9EA8CBEA7355649E(0, Global_14483);
		if (Global_14513.f_1 == 3)
		{
		}
		if (Global_14513.f_1 == 1)
		{
		}
		if (Global_14513.f_1 == 0)
		{
		}
		unk_0xF88F0290A1FAB85C(0);
		Global_14454 = 0;
		Global_14495 = 0;
		Global_14679 = 0;
		if (Global_106070.f_14023.f_84 == 1)
		{
			Global_106070.f_14023.f_84 = 0;
			unk_0xC47B4E7E5C4ACE12(0, 1);
		}
		Global_14457 = 1;
		if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			unk_0x866A4A18F288ACEA(unk_0xA19140A5C42D8715());
		}
		if (Global_16836 == 0)
		{
		}
		Global_14681 = 0;
		if (func_10(0))
		{
			func_9();
		}
		unk_0xFA57C719261AA55D(&Global_2384, 8);
		unk_0xFA57C719261AA55D(&Global_2383, 14);
		unk_0xFA57C719261AA55D(&Global_2383, 9);
		unk_0xFA57C719261AA55D(&Global_2383, 27);
		unk_0xFA57C719261AA55D(&Global_2383, 30);
		unk_0xFA57C719261AA55D(&Global_2384, 5);
		unk_0xFA57C719261AA55D(&Global_2384, 19);
		unk_0xFA57C719261AA55D(&Global_2384, 21);
		unk_0xFA57C719261AA55D(&Global_2384, 24);
		unk_0xFA57C719261AA55D(&Global_2384, 25);
		unk_0xFA57C719261AA55D(&Global_2384, 27);
		unk_0xFA57C719261AA55D(&Global_2384, 26);
		unk_0xFA57C719261AA55D(&Global_2385, 2);
		Global_2534145 = 0;
		iLocal_72 = 0;
		if (!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			func_8();
		}
		settimera(0);
		if (unk_0x8B1574454E8C2421(Global_2390[2 /*15*/].f_9) == 0)
		{
			while (unk_0x2BCD0524CDEE1FD2(Global_14511))
			{
				wait(0);
				unk_0x9EA8CBEA7355649E(0, Global_14483);
				if (unk_0x0FA486DE15EB3004(Global_14494))
				{
					unk_0x7AF4A31FB51D0A4D(iLocal_39);
					unk_0x84829313FB8AC81C(Global_14494, Global_14433, Global_14434, Global_14435, Global_14436, 255, 255, 255, 255, 0);
				}
				if (timera() > 5000)
				{
					unk_0xDD77F5FE884350EE(Global_14511);
				}
			}
		}
		Global_14501 = 0;
		if (unk_0x0FA486DE15EB3004(Global_14494))
		{
			func_105(Global_14494, "SHUTDOWN_MOVIE");
		}
		wait(0);
		unk_0x86795B44CE5FE021(&Global_14494);
		Global_14479 = 0;
		unk_0x9EA8CBEA7355649E(0, Global_14483);
		if (unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			if (Global_2530962.f_1)
			{
				if (Global_71205)
				{
					unk_0xE11F00B4AC919F45(-1, "Hang_Up", "Phone_SoundSet_Michael", 1);
				}
				else
				{
					unk_0xE11F00B4AC919F45(-1, "Hang_Up", &Global_14502, 1);
				}
			}
		}
		func_102();
		func_100();
		Global_15835 = 0;
		Global_4268545 = 0;
		unk_0x8F1A9FE6D91AAFEB();
	}
}

void func_8()
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

void func_9()
{
	if (Global_3188[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3188[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3188[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3188[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3188[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3188[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0xFA57C719261AA55D(&Global_2383, 25);
	unk_0x2BCFB39E86340DAA(&Global_2384, 11);
}

int func_10(int iParam0)
{
	if (Global_36117 == 15)
	{
		return 0;
	}
	if (func_11(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_11(int iParam0)
{
	return func_12(iParam0, Global_36117);
}

int func_12(int iParam0, int iParam1)
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

float func_13(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5)
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
	if (func_66() && Global_4268545 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0xFD34717937104F1C();
	}
	fVar1 = func_15((to_float((unk_0xFD34717937104F1C() - iLocal_18)) / fParam4), 0f, 1f);
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
		Global_14441 = { func_14(vParam0, vParam1, fVar2) };
		Global_14444 = { func_14(vParam2, vParam3, fVar2) };
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

Vector3 func_14(vector3 vParam0, vector3 vParam1, float fParam2)
{
	return vParam0 + vParam1 - vParam0 * Vector(fParam2, fParam2, fParam2);
}

float func_15(float fParam0, float fParam1, float fParam2)
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

void func_16()
{
	if (Global_14491 == 0)
	{
		if (func_53(2, Global_14485, 0))
		{
			if (Global_71205 == 0)
			{
				if (Global_14683)
				{
					if (Global_14682 == 0)
					{
						Global_14682 = 1;
						func_99(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_74(2);
						func_17();
						func_99(Global_14494, "DISPLAY_VIEW", 1f, to_float(Global_14518), -1082130432, -1082130432, -1082130432);
						Global_14493 = Global_14518;
					}
					else
					{
						Global_14682 = 0;
						func_99(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_74(1);
						func_17();
						func_99(Global_14494, "DISPLAY_VIEW", 1f, to_float(Global_14517), -1082130432, -1082130432, -1082130432);
						Global_14493 = Global_14517;
					}
				}
			}
		}
	}
}

void func_17()
{
	if (Global_14683 == 0)
	{
		func_72(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xFA57C719261AA55D(&Global_2383, 17);
	}
	else if (Global_71205)
	{
		func_72(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xFA57C719261AA55D(&Global_2383, 17);
	}
	else
	{
		if (Global_14682 == 1)
		{
			if (Global_14501)
			{
				func_72(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_72(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else if (Global_14501)
		{
			func_72(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
		}
		else
		{
			func_72(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		unk_0x2BCFB39E86340DAA(&Global_2383, 17);
	}
}

void func_18()
{
	if (unk_0x05EFB6A616B6FADE(Global_2384, 10) || iLocal_72 == 1)
	{
		Global_2990 = unk_0xFD34717937104F1C();
		Global_2989 = 0;
		Global_14491 = 1;
		unk_0x31A9E530D137684F(Global_14494, "GET_CURRENT_SELECTION");
		iLocal_29 = unk_0xD8015A504E3ED13A();
		iLocal_30 = 1;
	}
	else if (Global_14491 == 0)
	{
		if (func_53(2, Global_14482, 0))
		{
			if (iLocal_31 == 0)
			{
				Global_2990 = unk_0xFD34717937104F1C();
				Global_2989 = 0;
				Global_14491 = 1;
				unk_0x31A9E530D137684F(Global_14494, "GET_CURRENT_SELECTION");
				iLocal_29 = unk_0xD8015A504E3ED13A();
				iLocal_30 = 1;
			}
		}
	}
}

void func_19()
{
	if (Global_14491 == 0)
	{
		if (func_53(2, Global_14480, 1))
		{
			if (func_94(2090, -1, 0) == 1)
			{
				if (Global_106070.f_14023[Global_14513 /*20*/].f_17 == 0)
				{
					if (!unk_0x05EFB6A616B6FADE(Global_2384, 3))
					{
						if (!Global_14456)
						{
							if (!unk_0x05EFB6A616B6FADE(Global_4268330, 3))
							{
								if (!unk_0x05EFB6A616B6FADE(Global_2383, 14))
								{
									Global_14491 = 1;
									unk_0x2BCFB39E86340DAA(&Global_4268330, 3);
									func_20(3, 0, 1, 0);
									Global_16881 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_20(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	func_107();
	if (Global_71205 == 0)
	{
		if (func_73(14))
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
		if (func_22(0) == 1)
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
				func_21("cellphone_flashhand");
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
	func_77();
	func_75();
	if (unk_0x8B1574454E8C2421(Global_2390[iParam0 /*15*/].f_9) == 0)
	{
		Global_2989 = 0;
		Global_14513.f_1 = 7;
		func_21(&(Global_2390[iParam0 /*15*/].f_5));
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

void func_21(char* sParam0)
{
	unk_0xD75A4240F0AD8613(sParam0);
	while (!unk_0xB1FDFCECA75CE4A7(sParam0))
	{
		wait(0);
	}
}

int func_22(int iParam0)
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

void func_23()
{
	if (Global_14492)
	{
		if (timera() > 50)
		{
			Global_14492 = 0;
		}
	}
	if (unk_0x0B9F814BC8D14042(2))
	{
		if (unk_0xDF0ADAD7E584090D(2, 180))
		{
			switch (Global_14493)
			{
				case 0:
					if (Global_2952[1])
					{
						func_32();
						Global_14493 = 1;
					}
					break;
				
				case 1:
					if (Global_2952[2])
					{
						func_32();
						Global_14493 = 2;
					}
					break;
				
				case 2:
					if (Global_2952[3])
					{
						func_32();
						func_30();
						Global_14493 = 3;
					}
					else
					{
						func_28();
						func_30();
						Global_14493 = 4;
					}
					break;
				
				case 3:
					if (Global_2952[4])
					{
						func_32();
						Global_14493 = 4;
					}
					break;
				
				case 4:
					if (Global_2952[5])
					{
						func_32();
						Global_14493 = 5;
					}
					break;
				
				case 5:
					if (Global_2952[6])
					{
						func_32();
						func_30();
						Global_14493 = 6;
					}
					break;
				
				case 6:
					if (Global_2952[7])
					{
						func_32();
						Global_14493 = 7;
					}
					break;
				
				case 7:
					if (Global_2952[8])
					{
						func_32();
						Global_14493 = 8;
					}
					else
					{
						func_28();
						func_30();
						Global_14493 = 0;
					}
					break;
				
				case 8:
					if (Global_2952[0])
					{
						func_32();
						func_30();
						Global_14493 = 0;
					}
					else
					{
						func_28();
						func_30();
					}
					break;
				}
		}
		if (unk_0xDF0ADAD7E584090D(2, 181))
		{
			switch (Global_14493)
			{
				case 0:
					if (Global_2952[8])
					{
						func_28();
						func_25();
						Global_14493 = 8;
					}
					else
					{
						func_32();
						func_25();
						Global_14493 = 7;
					}
					break;
				
				case 1:
					if (Global_2952[0])
					{
						func_28();
						Global_14493 = 0;
					}
					else if (Global_2952[8])
					{
						func_25();
						func_32();
					}
					else
					{
						func_25();
					}
					break;
				
				case 2:
					if (Global_2952[1])
					{
						func_28();
						Global_14493 = 1;
					}
					break;
				
				case 3:
					if (Global_2952[2])
					{
						func_28();
						func_25();
						Global_14493 = 2;
					}
					break;
				
				case 4:
					if (Global_2952[3])
					{
						func_28();
						Global_14493 = 3;
					}
					else
					{
						func_25();
						func_32();
						Global_14686 = 1;
						Global_14493 = 2;
					}
					break;
				
				case 5:
					if (Global_2952[4])
					{
						func_28();
						Global_14493 = 4;
					}
					break;
				
				case 6:
					if (Global_2952[5])
					{
						func_25();
						func_28();
						Global_14493 = 5;
					}
					break;
				
				case 7:
					if (Global_2952[6])
					{
						func_28();
						Global_14493 = 6;
					}
					break;
				
				case 8:
					if (Global_2952[7])
					{
						func_28();
						Global_14493 = 7;
					}
					break;
				}
			}
	}
	if (Global_14492 == 0)
	{
		if (func_53(2, Global_14488, 0))
		{
			Global_14686 = 0;
			switch (Global_14493)
			{
				case 2:
					if (Global_2952[0] == 1)
					{
						Global_14493 = 0;
					}
					else
					{
						Global_14493 = 1;
						Global_14686 = 1;
					}
					break;
				
				case 5:
					Global_14493 = 3;
					break;
				
				case 6:
					Global_14493 = 7;
					break;
				
				case 7:
					if (Global_2952[Global_14493 + 1] == 1)
					{
						Global_14493 = 8;
					}
					else
					{
						Global_14493 = 6;
						Global_14686 = 1;
					}
					break;
				
				case 8:
					Global_14493 = 6;
					break;
				
				default:
					Global_14493++;
					break;
			}
			if (Global_14686 == 1)
			{
				func_28();
			}
			else
			{
				func_32();
			}
			Global_14492 = 1;
			settimera(0);
		}
		if (func_53(2, Global_14487, 0))
		{
			Global_14686 = 0;
			switch (Global_14493)
			{
				case 0:
					Global_14493 = 2;
					break;
				
				case 1:
					if (Global_2952[0] == 1)
					{
						Global_14493 = 0;
					}
					else
					{
						Global_14493 = 2;
						Global_14686 = 1;
					}
					break;
				
				case 3:
					Global_14493 = 5;
					break;
				
				case 6:
					if (Global_2952[8] == 1)
					{
						Global_14493 = 8;
					}
					else
					{
						Global_14493 = 7;
						Global_14686 = 1;
					}
					break;
				
				default:
					Global_14493 = (Global_14493 - 1);
					break;
			}
			if (Global_14686 == 1)
			{
				func_32();
			}
			else
			{
				func_28();
			}
			Global_14492 = 1;
			settimera(0);
		}
		if (func_53(2, Global_14489, 0))
		{
			Global_14686 = 0;
			switch (Global_14493)
			{
				case 0:
					if (Global_2952[6])
					{
						Global_14493 = 6;
					}
					break;
				
				case 1:
					if (Global_2952[7])
					{
						Global_14493 = 7;
					}
					else
					{
						Global_14686 = 1;
						Global_14493 = 4;
					}
					break;
				
				case 2:
					if (Global_2952[8])
					{
						Global_14493 = 8;
					}
					else
					{
						Global_14686 = 1;
						Global_14493 = 5;
					}
					break;
				
				case 3:
					if (Global_2952[0])
					{
						Global_14493 = 0;
					}
					else
					{
						Global_14686 = 1;
						Global_14493 = 6;
					}
					break;
				
				case 4:
					if (Global_2952[1])
					{
						Global_14493 = 1;
					}
					break;
				
				case 5:
					if (Global_2952[2])
					{
						Global_14493 = 2;
					}
					break;
				
				case 6:
					if (Global_2952[3])
					{
						Global_14493 = 3;
					}
					break;
				
				case 7:
					if (Global_2952[4])
					{
						Global_14493 = 4;
					}
					break;
				
				case 8:
					if (Global_2952[5])
					{
						Global_14493 = 5;
					}
					break;
			}
			if (Global_14686 == 1)
			{
				func_30();
			}
			else
			{
				func_25();
			}
			Global_14492 = 1;
			settimera(0);
		}
		if (func_53(2, Global_14490, 0))
		{
			Global_14686 = 0;
			switch (Global_14493)
			{
				case 0:
					if (Global_2952[3])
					{
						Global_14493 = 3;
					}
					break;
				
				case 1:
					if (Global_2952[4])
					{
						Global_14493 = 4;
					}
					break;
				
				case 2:
					if (Global_2952[5])
					{
						Global_14493 = 5;
					}
					break;
				
				case 3:
					if (Global_2952[6])
					{
						Global_14493 = 6;
					}
					break;
				
				case 4:
					if (Global_2952[7])
					{
						Global_14493 = 7;
					}
					else
					{
						Global_14686 = 1;
						Global_14493 = 1;
					}
					break;
				
				case 5:
					if (Global_2952[8])
					{
						Global_14493 = 8;
					}
					else
					{
						Global_14686 = 1;
						Global_14493 = 2;
					}
					break;
				
				case 6:
					if (Global_2952[0])
					{
						Global_14493 = 0;
					}
					else
					{
						Global_14686 = 1;
						Global_14493 = 3;
					}
					break;
				
				case 7:
					if (Global_2952[1])
					{
						Global_14493 = 1;
					}
					break;
				
				case 8:
					if (Global_2952[2])
					{
						Global_14493 = 2;
					}
					break;
			}
			if (Global_14686 == 1)
			{
				func_25();
			}
			else
			{
				func_30();
			}
			Global_14492 = 1;
			settimera(0);
		}
	}
	if (Global_2390[23 /*15*/].f_10 == 57)
	{
		if (Global_14492 == 1 && Global_14493 == 8)
		{
			if (iLocal_74 == 0)
			{
				iLocal_74 = 1;
				func_24(12);
			}
		}
	}
}

void func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4883.f_7[iVar0]), iVar1);
}

void func_25()
{
	func_99(Global_14494, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xE11F00B4AC919F45(-1, "Menu_Navigate", &Global_14502, 1);
	func_26();
}

void func_26()
{
	if (func_27())
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

int func_27()
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

void func_28()
{
	func_99(Global_14494, "SET_INPUT_EVENT", to_float(4), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xE11F00B4AC919F45(-1, "Menu_Navigate", &Global_14502, 1);
	func_29();
}

void func_29()
{
	if (func_27())
	{
		if (Global_14686 == 0)
		{
			unk_0xD1DF8842C4808642(3);
		}
		else
		{
			unk_0xD1DF8842C4808642(4);
		}
	}
}

void func_30()
{
	func_99(Global_14494, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xE11F00B4AC919F45(-1, "Menu_Navigate", &Global_14502, 1);
	func_31();
}

void func_31()
{
	if (func_27())
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

void func_32()
{
	func_99(Global_14494, "SET_INPUT_EVENT", to_float(2), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xE11F00B4AC919F45(-1, "Menu_Navigate", &Global_14502, 1);
	func_33();
}

void func_33()
{
	if (func_27())
	{
		if (Global_14686 == 0)
		{
			unk_0xD1DF8842C4808642(4);
		}
		else
		{
			unk_0xD1DF8842C4808642(3);
		}
	}
}

void func_34()
{
	if (Global_14492)
	{
		if (timera() > 50)
		{
			Global_14492 = 0;
		}
	}
	if (unk_0x0B9F814BC8D14042(2))
	{
		if (unk_0xDF0ADAD7E584090D(2, 180))
		{
			switch (Global_14493)
			{
				case 6:
					if (Global_2952[7])
					{
						func_32();
						Global_14493 = 7;
					}
					break;
				
				case 7:
					if (Global_2952[6])
					{
						func_28();
						Global_14493 = 6;
					}
					break;
				}
		}
		if (unk_0xDF0ADAD7E584090D(2, 181))
		{
			switch (Global_14493)
			{
				case 6:
					if (Global_2952[7])
					{
						func_32();
						Global_14493 = 7;
					}
					break;
				
				case 7:
					if (Global_2952[6])
					{
						func_28();
						Global_14493 = 6;
					}
					break;
				}
			}
	}
	if (Global_14492 == 0)
	{
		if (func_53(2, Global_14488, 0))
		{
			Global_14686 = 0;
			switch (Global_14493)
			{
				case 2:
					Global_14493 = 0;
					break;
				
				case 5:
					Global_14493 = 3;
					break;
				
				case 7:
					if (Global_2952[Global_14493 + 1] == 1)
					{
						Global_14493 = 8;
					}
					else
					{
						Global_14493 = 6;
						Global_14686 = 1;
					}
					break;
				
				case 8:
					Global_14493 = 6;
					break;
				
				default:
					Global_14493++;
					break;
			}
			if (Global_14686 == 1)
			{
				func_28();
			}
			else
			{
				func_32();
			}
			Global_14492 = 1;
			settimera(0);
		}
		if (func_53(2, Global_14487, 0))
		{
			Global_14686 = 0;
			switch (Global_14493)
			{
				case 0:
					Global_14493 = 2;
					break;
				
				case 3:
					Global_14493 = 5;
					break;
				
				case 6:
					if (Global_2952[8] == 1)
					{
						Global_14493 = 8;
					}
					else
					{
						Global_14493 = 7;
						Global_14686 = 1;
					}
					break;
				
				default:
					Global_14493 = (Global_14493 - 1);
					break;
			}
			if (Global_14686 == 1)
			{
				func_32();
			}
			else
			{
				func_28();
			}
			Global_14492 = 1;
			settimera(0);
		}
	}
}

void func_35()
{
	if (Global_14492)
	{
		if (timera() > 50)
		{
			Global_14492 = 0;
		}
	}
	if (unk_0x0B9F814BC8D14042(2))
	{
		if (unk_0xDF0ADAD7E584090D(2, 180))
		{
			switch (Global_14493)
			{
				case 0:
					if (Global_2952[1])
					{
						func_32();
						Global_14493 = 1;
					}
					break;
				
				case 1:
					if (Global_2952[2])
					{
						func_32();
						Global_14493 = 2;
					}
					break;
				
				case 2:
					if (Global_2952[3])
					{
						func_32();
						func_30();
						Global_14493 = 3;
					}
					else
					{
						func_28();
						func_30();
						Global_14493 = 4;
					}
					break;
				
				case 3:
					if (Global_2952[4])
					{
						func_32();
						Global_14493 = 4;
					}
					break;
				
				case 4:
					if (Global_2952[5])
					{
						func_32();
						Global_14493 = 5;
					}
					break;
				
				case 5:
					if (Global_2952[6])
					{
						func_32();
						func_30();
						Global_14493 = 6;
					}
					break;
				
				case 6:
					if (Global_2952[7])
					{
						func_32();
						Global_14493 = 7;
					}
					break;
				
				case 7:
					if (Global_2952[8])
					{
						func_32();
						Global_14493 = 8;
					}
					else
					{
						func_28();
						func_30();
						Global_14493 = 0;
					}
					break;
				
				case 8:
					if (Global_2952[0])
					{
						func_32();
						func_30();
						Global_14493 = 0;
					}
					break;
				}
		}
		if (unk_0xDF0ADAD7E584090D(2, 181))
		{
			switch (Global_14493)
			{
				case 0:
					if (Global_2952[8])
					{
						func_28();
						func_25();
						Global_14493 = 8;
					}
					else
					{
						func_32();
						func_25();
						Global_14493 = 7;
					}
					break;
				
				case 1:
					if (Global_2952[0])
					{
						func_28();
						Global_14493 = 0;
					}
					break;
				
				case 2:
					if (Global_2952[1])
					{
						func_28();
						Global_14493 = 1;
					}
					break;
				
				case 3:
					if (Global_2952[2])
					{
						func_28();
						func_25();
						Global_14493 = 2;
					}
					break;
				
				case 4:
					if (Global_2952[3])
					{
						func_28();
						Global_14493 = 3;
					}
					else
					{
						func_25();
						func_32();
						Global_14686 = 1;
						Global_14493 = 2;
					}
					break;
				
				case 5:
					if (Global_2952[4])
					{
						func_28();
						Global_14493 = 4;
					}
					break;
				
				case 6:
					if (Global_2952[5])
					{
						func_25();
						func_28();
						Global_14493 = 5;
					}
					break;
				
				case 7:
					if (Global_2952[6])
					{
						func_28();
						Global_14493 = 6;
					}
					break;
				
				case 8:
					if (Global_2952[7])
					{
						func_28();
						Global_14493 = 7;
					}
					break;
				}
			}
	}
	if (Global_14492 == 0)
	{
		if (func_53(2, Global_14488, 0))
		{
			Global_14686 = 0;
			switch (Global_14493)
			{
				case 2:
					Global_14493 = 0;
					break;
				
				case 5:
					Global_14493 = 3;
					break;
				
				case 7:
					if (Global_2952[Global_14493 + 1] == 1)
					{
						Global_14493 = 8;
					}
					else
					{
						Global_14493 = 6;
						Global_14686 = 1;
					}
					break;
				
				case 8:
					Global_14493 = 6;
					break;
				
				default:
					Global_14493++;
					break;
			}
			if (Global_14686 == 1)
			{
				func_28();
			}
			else
			{
				func_32();
			}
			Global_14492 = 1;
			settimera(0);
		}
		if (func_53(2, Global_14487, 0))
		{
			Global_14686 = 0;
			switch (Global_14493)
			{
				case 0:
					Global_14493 = 2;
					break;
				
				case 3:
					Global_14493 = 5;
					break;
				
				case 6:
					if (Global_2952[8] == 1)
					{
						Global_14493 = 8;
					}
					else
					{
						Global_14493 = 7;
						Global_14686 = 1;
					}
					break;
				
				default:
					Global_14493 = (Global_14493 - 1);
					break;
			}
			if (Global_14686 == 1)
			{
				func_32();
			}
			else
			{
				func_28();
			}
			Global_14492 = 1;
			settimera(0);
		}
		if (func_53(2, Global_14489, 0))
		{
			Global_14686 = 0;
			switch (Global_14493)
			{
				case 0:
					if (Global_2952[6])
					{
						Global_14493 = 6;
					}
					break;
				
				case 1:
					if (Global_2952[7])
					{
						Global_14493 = 7;
					}
					break;
				
				case 2:
					if (Global_2952[8])
					{
						Global_14493 = 8;
					}
					else
					{
						Global_14686 = 1;
						Global_14493 = 5;
					}
					break;
				
				case 3:
					if (Global_2952[0])
					{
						Global_14493 = 0;
					}
					break;
				
				case 4:
					if (Global_2952[1])
					{
						Global_14493 = 1;
					}
					break;
				
				case 5:
					if (Global_2952[2])
					{
						Global_14493 = 2;
					}
					break;
				
				case 6:
					if (Global_2952[3])
					{
						Global_14493 = 3;
					}
					break;
				
				case 7:
					if (Global_2952[4])
					{
						Global_14493 = 4;
					}
					break;
				
				case 8:
					if (Global_2952[5])
					{
						Global_14493 = 5;
					}
					break;
			}
			if (Global_14686 == 1)
			{
				func_30();
			}
			else
			{
				func_25();
			}
			Global_14492 = 1;
			settimera(0);
		}
		if (func_53(2, Global_14490, 0))
		{
			Global_14686 = 0;
			switch (Global_14493)
			{
				case 0:
					if (Global_2952[3])
					{
						Global_14493 = 3;
					}
					break;
				
				case 1:
					if (Global_2952[4])
					{
						Global_14493 = 4;
					}
					break;
				
				case 2:
					if (Global_2952[5])
					{
						Global_14493 = 5;
					}
					break;
				
				case 3:
					if (Global_2952[6])
					{
						Global_14493 = 6;
					}
					break;
				
				case 4:
					if (Global_2952[7])
					{
						Global_14493 = 7;
					}
					break;
				
				case 5:
					if (Global_2952[8])
					{
						Global_14493 = 8;
					}
					else
					{
						Global_14686 = 1;
						Global_14493 = 2;
					}
					break;
				
				case 6:
					if (Global_2952[0])
					{
						Global_14493 = 0;
					}
					break;
				
				case 7:
					if (Global_2952[1])
					{
						Global_14493 = 1;
					}
					break;
				
				case 8:
					if (Global_2952[2])
					{
						Global_14493 = 2;
					}
					break;
			}
			if (Global_14686 == 1)
			{
				func_25();
			}
			else
			{
				func_30();
			}
			Global_14492 = 1;
			settimera(0);
		}
	}
}

void func_36()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5BFB8B9A58F76839(iLocal_29))
	{
		iLocal_30 = 0;
		iLocal_28 = unk_0x7C261B004A9EEB72(iLocal_29);
		if (Global_14682 == 0)
		{
			Global_14517 = iLocal_28;
		}
		else
		{
			Global_14518 = iLocal_28;
		}
		if (iLocal_28 < 0)
		{
			iLocal_28 = 0;
		}
		Global_14516 = Global_2916[iLocal_28];
		if (unk_0x05EFB6A616B6FADE(Global_2384, 10))
		{
			Global_14516 = 2;
			unk_0xFA57C719261AA55D(&Global_2384, 10);
		}
		if (iLocal_72 == 1)
		{
			Global_14517 = 1;
			Global_14516 = 0;
			Global_2534145 = 0;
			iLocal_72 = 0;
		}
		iVar0 = 0;
		if (unk_0x2BCD0524CDEE1FD2(Global_14511))
		{
			iVar0 = 1;
		}
		if (Global_14516 == 3)
		{
			if (unk_0x05EFB6A616B6FADE(Global_2384, 3))
			{
				iVar0 = 1;
			}
			else if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
			{
				if (((((((unk_0x721474045C81EC30(unk_0xA19140A5C42D8715()) || unk_0x9B9A3A10827A2EA0()) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || unk_0xBCF615B6673B73ED(unk_0xA19140A5C42D8715())) || unk_0xF0F0F135A933B6B0(unk_0xA19140A5C42D8715())) || unk_0x6625F609B391348E(unk_0xA19140A5C42D8715())) || unk_0x1095F403F52B42E1(unk_0xDF069A8A4CCE674E(unk_0xA19140A5C42D8715()), 0)) || unk_0xF657E86BC7B91C6E())
				{
					iVar0 = 1;
				}
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					if (unk_0x8A29BBDF4603E52B(unk_0xA19140A5C42D8715()) == 0)
					{
						iVar0 = 1;
					}
					iVar1 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
					if (unk_0xC5F2C603295DE6F0(iVar1) < 0f)
					{
						iVar0 = 1;
					}
				}
				if (unk_0xFBBCA633CD1A088B(unk_0xD4E735F4B6A956AC()))
				{
					iVar0 = 1;
				}
				if (Global_71205)
				{
					if (unk_0xD73B1037F6BD4B90(0, 25) || unk_0xD73B1037F6BD4B90(0, 68))
					{
						unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iLocal_65, 1);
						if (iLocal_65 != joaat("weapon_unarmed"))
						{
							iVar0 = 1;
						}
					}
				}
			}
		}
		if (Global_14516 == 2)
		{
			if (unk_0x05EFB6A616B6FADE(Global_2384, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_14516 == 23 && unk_0x3CAC2741CC1A631F(&(Global_2390[Global_14516 /*15*/]), "CELL_BENWEB"))
		{
			if (unk_0x05EFB6A616B6FADE(Global_2384, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_71205)
		{
			if (Global_14516 == 15 || Global_14516 == 5)
			{
			}
			else
			{
				if (Global_14516 == 23)
				{
					if (((unk_0x05EFB6A616B6FADE(Global_4268330, 4) == 0 && Global_1573910 == 0) && unk_0x05EFB6A616B6FADE(Global_4268330, 20) == 0) && unk_0x05EFB6A616B6FADE(Global_4268330, 22) == 0)
					{
					}
					if ((((unk_0x05EFB6A616B6FADE(Global_4268330, 20) == 1 && unk_0x05EFB6A616B6FADE(Global_4268330, 4) == 0) && Global_1573910 == 0) && unk_0x05EFB6A616B6FADE(Global_4268330, 22) == 0) && unk_0x05EFB6A616B6FADE(Global_4268330, 26) == 0)
					{
						iVar0 = 1;
						unk_0x2BCFB39E86340DAA(&Global_4268330, 21);
					}
				}
				if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
				{
					if (unk_0x70F79B0BFBB1E7AC(unk_0xA19140A5C42D8715(), 78, 1) || unk_0x45F41CA95744406F(unk_0xD4E735F4B6A956AC()))
					{
						if (Global_14516 == 3)
						{
							iVar0 = 1;
						}
					}
				}
				if (iVar0 == 0)
				{
					func_72(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xFA57C719261AA55D(&Global_2383, 17);
					Global_14513.f_1 = 7;
					if (unk_0x05EFB6A616B6FADE(Global_2383, 23))
					{
					}
					else
					{
						func_38();
						unk_0xD75A4240F0AD8613(&(Global_2390[Global_14516 /*15*/].f_5));
						unk_0x2BCFB39E86340DAA(&Global_2383, 23);
					}
				}
				else
				{
					if (Global_14516 == 2 || Global_14516 == 3)
					{
					}
					func_37();
				}
			}
		}
		else
		{
			switch (Global_14516)
			{
				case 3:
					if (Global_105123 == 1)
					{
						iVar0 = 1;
					}
					break;
				
				case 8:
					iVar0 = 1;
					break;
				
				case 15:
					iVar0 = 1;
					break;
				
				case 16:
					iVar0 = 1;
					unk_0x2BCFB39E86340DAA(&Global_2383, 26);
					break;
				
				case 5:
					iVar0 = 1;
					break;
				
				case 20:
					iVar0 = 1;
					if (Global_14684 == 0)
					{
						if ((Global_2387 == 0 && iLocal_31 == 0) && Global_36117 == 15)
						{
							iLocal_31 = 1;
							func_38();
							if (!Global_106070.f_14023.f_85)
							{
							}
						}
					}
					else
					{
						func_37();
					}
					break;
				
				default:
					break;
			}
			if (unk_0xB566ACF044209759())
			{
				if (Global_14516 != 0)
				{
					iVar0 = 1;
				}
			}
			if (func_73(14))
			{
				if (Global_14516 != 3 && Global_14516 != 14)
				{
					iVar0 = 1;
				}
			}
			if (iVar0 == 0)
			{
				func_38();
				func_72(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xFA57C719261AA55D(&Global_2383, 17);
				Global_14513.f_1 = 7;
				if (unk_0x05EFB6A616B6FADE(Global_2383, 23))
				{
				}
				else
				{
					unk_0xD75A4240F0AD8613(&(Global_2390[Global_14516 /*15*/].f_5));
					unk_0x2BCFB39E86340DAA(&Global_2383, 23);
				}
			}
			else if (Global_14516 != 20)
			{
				if (Global_106070.f_14023.f_86 == 0)
				{
					if (unk_0x8B1574454E8C2421(joaat("paparazzo3b")) > 0)
					{
						if (Global_14516 == 3)
						{
							if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
							{
								if (unk_0xCCB06FD56E3262CF(unk_0xA19140A5C42D8715(), 0))
								{
									func_70("CELL_38", -1);
									Global_106070.f_14023.f_86 = 1;
								}
							}
						}
					}
				}
				func_37();
			}
		}
	}
}

void func_37()
{
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0xE11F00B4AC919F45(-1, "Menu_Back", &Global_14502, 1);
	}
}

void func_38()
{
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0xE11F00B4AC919F45(-1, "Menu_Accept", &Global_14502, 1);
		func_39();
	}
}

void func_39()
{
	if (func_27())
	{
		unk_0xD1DF8842C4808642(5);
	}
}

void func_40()
{
	if (Global_14479 == 0)
	{
		if (func_13(Global_14466[Global_14458 /*3*/], Global_14459[Global_14458 /*3*/], Global_14473, Global_14473, 350f, 0) >= 1f)
		{
			iLocal_18 = 0;
			unk_0xFA57C719261AA55D(&Global_2384, 24);
			unk_0x2BCFB39E86340DAA(&Global_2384, 26);
		}
	}
}

void func_41()
{
	if (Global_14479 == 0)
	{
		if (func_13(Global_14459[Global_14458 /*3*/], Global_14466[Global_14458 /*3*/], Global_14473, Global_14473, 350f, 1) >= 1f)
		{
			iLocal_18 = 0;
			unk_0xFA57C719261AA55D(&Global_2384, 25);
			if (Global_15835)
			{
				unk_0xFA57C719261AA55D(&Global_2384, 27);
			}
		}
	}
}

void func_42()
{
	if (Global_14479 == 0 && Global_14453 == 0)
	{
		if (func_13(Global_14466[Global_14458 /*3*/], Global_14459[Global_14458 /*3*/], Global_14473, Global_14473, 350f, 0) >= 1f)
		{
			iLocal_18 = 0;
			Global_4268545 = 0;
		}
	}
}

void func_43()
{
	float fVar0;
	float fVar1;
	
	if (unk_0x05EFB6A616B6FADE(Global_2385, 2))
	{
		unk_0x2BCFB39E86340DAA(&Global_2384, 8);
		unk_0x2BCFB39E86340DAA(&Global_2383, 14);
		Global_14453 = 0;
		iLocal_18 = 0;
		unk_0xD698A1090D8964DE(Global_14473, 0);
	}
	else if (unk_0x8B1574454E8C2421(joaat("appemail")) < 1)
	{
		fVar0 = func_13(Global_14459[Global_14458 /*3*/], Global_14466[Global_14458 /*3*/], Global_14476, Global_14473, 450f, 1);
		if (fVar0 >= 1f)
		{
			unk_0x2BCFB39E86340DAA(&Global_2384, 8);
			unk_0x2BCFB39E86340DAA(&Global_2383, 14);
			Global_14453 = 0;
			iLocal_18 = 0;
			unk_0xFA57C719261AA55D(&Global_2385, 2);
			iLocal_37 = 0;
		}
		else if (fVar0 >= 0.75f)
		{
			unk_0x2BCFB39E86340DAA(&Global_2384, 8);
		}
	}
	else
	{
		if (iLocal_37 == 0)
		{
			vLocal_38 = { Global_14466[Global_14458 /*3*/] };
			vLocal_38.x = (vLocal_38.x - 10f);
			vLocal_38.y = (vLocal_38.y + 20f);
			iLocal_37 = 1;
		}
		fVar1 = func_13(Global_14459[Global_14458 /*3*/], vLocal_38, -90f, 0f, 90f, -90f, 0f, 90f, 450f, 1);
		if (fVar1 >= 1f)
		{
			unk_0x2BCFB39E86340DAA(&Global_2384, 8);
			unk_0x2BCFB39E86340DAA(&Global_2383, 14);
			Global_14453 = 0;
			iLocal_18 = 0;
			unk_0xFA57C719261AA55D(&Global_2385, 2);
			iLocal_37 = 0;
		}
		else if (fVar1 >= 0.75f)
		{
			unk_0x2BCFB39E86340DAA(&Global_2384, 8);
		}
	}
}

void func_44()
{
	if (unk_0x4C9BACA8D249CB13())
	{
		iLocal_59 = unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), iLocal_58);
	}
	else
	{
		iLocal_54 = unk_0xFD34717937104F1C();
		iLocal_59 = (iLocal_54 - iLocal_53);
	}
	if (iLocal_59 > 4000)
	{
		iLocal_42 = func_91();
		if (unk_0xB39808C1DCE0DCFA())
		{
		}
		if (unk_0x4C9BACA8D249CB13())
		{
			iLocal_58 = unk_0xFFCC7EBF88BDEE54();
		}
		else
		{
			iLocal_53 = unk_0xFD34717937104F1C();
		}
	}
}

void func_45()
{
	if (Global_14512 == 1)
	{
		func_106();
		if (Global_14491 == 0)
		{
			if (func_53(2, Global_14483, 0))
			{
				if (unk_0x05EFB6A616B6FADE(Global_2384, 8))
				{
					if (Global_15869 == 0)
					{
						func_37();
						Global_14491 = 1;
						Global_14512 = 3;
						Global_15871 = 1;
						if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
						{
							unk_0x866A4A18F288ACEA(unk_0xA19140A5C42D8715());
						}
					}
				}
			}
		}
		if (Global_14491 == 0)
		{
			if (func_53(2, Global_14482, 0))
			{
				if (unk_0x05EFB6A616B6FADE(Global_2384, 8))
				{
					func_38();
					Global_14491 = 1;
					Global_14512 = 2;
					if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
					{
						unk_0x866A4A18F288ACEA(unk_0xA19140A5C42D8715());
					}
					func_50();
					func_49();
				}
			}
		}
	}
	else
	{
		if (iLocal_51 == 0)
		{
			if (unk_0x05EFB6A616B6FADE(Global_2383, 27))
			{
				iLocal_51 = 1;
				settimerb(0);
			}
		}
		else
		{
			if (Global_14513.f_1 > 3)
			{
				if (timerb() > 1500)
				{
					if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
					{
						if (!unk_0x5478521AC20DB43C(unk_0xA19140A5C42D8715()))
						{
							if (Global_14456)
							{
								unk_0xE03F95BCE7BE67AD("Dial_and_Remote_Ring", unk_0xA19140A5C42D8715(), 1);
							}
							else if (!unk_0x05EFB6A616B6FADE(Global_2385, 5))
							{
								unk_0xE03F95BCE7BE67AD("Remote_Ring", unk_0xA19140A5C42D8715(), 1);
							}
						}
					}
				}
			}
			if (!unk_0x05EFB6A616B6FADE(Global_2383, 27))
			{
				iLocal_51 = 0;
				if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
				{
					unk_0x866A4A18F288ACEA(unk_0xA19140A5C42D8715());
				}
			}
		}
		if (Global_14512 == 0)
		{
			if (Global_14491 == 0)
			{
				if (func_53(2, Global_14481, 0) || Global_2534145 == 1)
				{
					if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
					{
						if (unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
						{
							if (unk_0x05EFB6A616B6FADE(Global_2384, 8))
							{
								switch (Global_14513.f_1)
								{
									case 3:
										break;
									
									case 4:
										break;
									
									case 6:
										if (Global_14681 == 0)
										{
											if (Global_14682 == 1)
											{
												func_37();
												Global_14682 = 0;
												func_99(Global_14494, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
												func_77();
												func_75();
												func_74(1);
												func_99(Global_14494, "DISPLAY_VIEW", 1f, to_float(Global_14517), -1082130432, -1082130432, -1082130432);
											}
											else
											{
												if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
												{
													unk_0xE11F00B4AC919F45(-1, "Put_Away", &Global_14502, 1);
												}
												iLocal_18 = 0;
												Global_14513.f_1 = 3;
											}
										}
										break;
									
									case 5:
										Global_14513.f_1 = 3;
										break;
									
									case 7:
										if (unk_0x05EFB6A616B6FADE(Global_2383, 23) == 1)
										{
										}
										if ((Global_2991 - Global_2990) > Global_2992 && unk_0x05EFB6A616B6FADE(Global_2383, 23) == 0)
										{
											if (unk_0x05EFB6A616B6FADE(Global_2384, 0))
											{
											}
											else
											{
												func_37();
												Global_2989 = 1;
												Global_14513.f_1 = 6;
												if (Global_71205)
												{
													func_99(Global_14494, "SET_THEME", to_float(Global_4268542), -1082130432, -1082130432, -1082130432, -1082130432);
												}
												Global_2386 = 99;
												if (Global_2534145 == 0)
												{
													func_46();
												}
											}
										}
										break;
									
									case 8:
										break;
									
									case 10:
										if (Global_1698 == 132)
										{
											if (Global_2530962.f_1 || unk_0x05EFB6A616B6FADE(Global_2384, 20))
											{
												func_37();
												func_68();
											}
										}
										else
										{
											func_37();
											func_68();
											Global_15871 = 1;
										}
										break;
									
									case 9:
										if (Global_15822 == 0)
										{
											Global_14513.f_1 = 3;
										}
										break;
									
									default:
										break;
								}
								if (Global_2534145 == 1)
								{
									iLocal_72 = 1;
									Global_2534145 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_46()
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
			func_99(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_74(Global_2988);
			if (Global_2988 == 1)
			{
				func_99(Global_14494, "DISPLAY_VIEW", 1f, to_float(Global_14517), -1082130432, -1082130432, -1082130432);
				Global_14493 = Global_14517;
			}
			else
			{
				func_99(Global_14494, "DISPLAY_VIEW", 1f, to_float(Global_14518), -1082130432, -1082130432, -1082130432);
				Global_14493 = Global_14518;
			}
			if (Global_14501)
			{
				func_72(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_72(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_72(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_72(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14683 == 0)
			{
				func_72(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xFA57C719261AA55D(&Global_2383, 17);
			}
			else if (Global_71205)
			{
				func_72(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xFA57C719261AA55D(&Global_2383, 17);
			}
			else
			{
				if (Global_14682 == 1)
				{
					if (Global_14501)
					{
						func_72(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_72(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14501)
				{
					func_72(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_72(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x2BCFB39E86340DAA(&Global_2383, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_99(Global_14494, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_72(Global_14494, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_72(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xFA57C719261AA55D(&Global_2383, 17);
			if (unk_0x05EFB6A616B6FADE(Global_2383, 20))
			{
				func_72(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14501)
			{
				func_72(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14456)
				{
					func_72(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_72(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14512 == 1)
			{
				func_93();
				func_99(Global_14494, "SET_THEME", to_float(Global_106070.f_14023[Global_14513 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15835)
				{
					unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
					unk_0x380580A1A1667F69(4);
					unk_0x380580A1A1667F69(0);
					unk_0x380580A1A1667F69(2);
					unk_0x390B339C943A8A54("CELL_CONDFON");
					unk_0xC327C023FDA37F2E(&Global_15837);
					unk_0xD481829E3E36543B();
					func_48("CELL_300");
					func_48("CELL_217");
					func_48("CELL_217");
					unk_0x271C1332F482646C();
				}
				else if (Global_106070.f_28022[Global_1698 /*29*/].f_24[Global_14513] == 0)
				{
					func_72(Global_14494, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_1698 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_72(Global_14494, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_106070.f_28022[Global_1698 /*29*/].f_3), &(Global_106070.f_28022[Global_1698 /*29*/].f_7), "CELL_217", &(Global_106070.f_28022[Global_1698 /*29*/].f_3), 0);
				}
				func_99(Global_14494, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15822 == 4 || Global_15822 == 3)
			{
				func_99(Global_14494, "SET_THEME", to_float(Global_106070.f_14023[Global_14513 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_93();
				if (Global_15835)
				{
					unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
					unk_0x380580A1A1667F69(4);
					unk_0x380580A1A1667F69(0);
					unk_0x380580A1A1667F69(2);
					unk_0x390B339C943A8A54("CELL_CONDFON");
					unk_0xC327C023FDA37F2E(&Global_15837);
					unk_0xD481829E3E36543B();
					func_48("CELL_300");
					func_48("CELL_219");
					func_48("CELL_219");
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
						func_99(Global_14494, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_72(Global_14494, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_1698 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_99(Global_14494, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_72(Global_14494, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_106070.f_28022[Global_1698 /*29*/].f_3), &(Global_106070.f_28022[Global_1698 /*29*/].f_7), &cVar0, &(Global_106070.f_28022[Global_1698 /*29*/].f_3), 0);
					}
				}
				func_99(Global_14494, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_47();
			break;
		
		default:
			break;
	}
}

void func_47()
{
	if (unk_0x0FA486DE15EB3004(Global_14494))
	{
		if (Global_14512 == 1)
		{
			if (Global_14501)
			{
				func_72(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_72(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15869)
			{
				func_72(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0x05EFB6A616B6FADE(Global_2383, 20))
			{
				func_72(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14501)
			{
				func_72(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_72(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_72(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xFA57C719261AA55D(&Global_2383, 17);
		}
		else
		{
			func_72(Global_14494, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_72(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xFA57C719261AA55D(&Global_2383, 17);
			if (unk_0x05EFB6A616B6FADE(Global_2383, 20))
			{
				func_72(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14501)
			{
				func_72(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14456)
				{
					func_72(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_72(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_48(char* sParam0)
{
	unk_0x390B339C943A8A54(sParam0);
	unk_0xD481829E3E36543B();
}

void func_49()
{
	if (Global_15835)
	{
		if (Global_71205)
		{
			if (unk_0x0FA486DE15EB3004(Global_14494))
			{
				if (!unk_0x47C01C0E6F4C1D06())
				{
					func_72(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					unk_0x2BCFB39E86340DAA(&(Global_2524719.f_1721), 15);
				}
			}
		}
	}
}

void func_50()
{
	if (unk_0x0FA486DE15EB3004(Global_14494))
	{
		if (!Global_15830)
		{
			func_72(Global_14494, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_72(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xFA57C719261AA55D(&Global_2383, 17);
			if (unk_0x05EFB6A616B6FADE(Global_2383, 20))
			{
				func_72(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14501)
			{
				func_72(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14456)
				{
					func_72(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_72(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
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
				func_48("CELL_300");
				func_48("CELL_219");
				func_48("CELL_219");
				unk_0x271C1332F482646C();
			}
			else if (Global_106070.f_28022[Global_1698 /*29*/].f_24[Global_14513] == 0)
			{
				func_72(Global_14494, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_1698 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_72(Global_14494, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_106070.f_28022[Global_1698 /*29*/].f_3), &(Global_106070.f_28022[Global_1698 /*29*/].f_7), "CELL_219", &(Global_106070.f_28022[Global_1698 /*29*/].f_3), 0);
			}
		}
		func_99(Global_14494, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_51()
{
	Global_14688 = 0;
	func_52();
}

void func_52()
{
	if (unk_0xB39808C1DCE0DCFA() || Global_14512 == 1)
	{
		unk_0xB4E5B1A6FE923ECB();
		Global_16833 = 0;
		unk_0xA8B97F91CBDE376C(false);
		Global_15822 = 6;
		Global_14513.f_1 = Global_14515;
		return;
	}
}

int func_53(int iParam0, int iParam1, int iParam2)
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

int func_54()
{
	if (unk_0x8B1574454E8C2421(joaat("apptrackify")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_55(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

void func_56(int iParam0)
{
	if (func_59())
	{
		return;
	}
	if (Global_14681)
	{
		func_58(0, 0);
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
	if (!func_57())
	{
		Global_14513.f_1 = 3;
	}
}

int func_57()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_58(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_22(0))
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

bool func_59()
{
	return unk_0x05EFB6A616B6FADE(Global_1678593, 19);
}

void func_60()
{
	if (Global_14513.f_1 == 9 || Global_14513.f_1 == 10)
	{
		Global_15875 = 0;
		Global_15871 = 1;
	}
}

void func_61()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (func_69() && unk_0xCCB06FD56E3262CF(unk_0xA19140A5C42D8715(), 0))
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

void func_62()
{
	if ((unk_0x05EFB6A616B6FADE(Global_2383, 14) && Global_4268545 == 0) && Global_14453 == 0)
	{
		if (func_67())
		{
		}
		else
		{
			func_63();
		}
		if (Global_14513.f_1 == 9)
		{
			if (Global_15835 == 0)
			{
				iLocal_32 = 1;
			}
		}
	}
}

void func_63()
{
	struct<2> Var0;
	
	unk_0x75B4B390EE495A3B(&Var0);
	if (Global_14466[Global_14458 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_14453 = 1;
	}
}

void func_64()
{
	if ((unk_0x05EFB6A616B6FADE(Global_2383, 14) && Global_4268545 == 0) && Global_14453 == 0)
	{
		if (iLocal_32 == 0)
		{
			if (unk_0x05EFB6A616B6FADE(Global_2384, 26))
			{
				unk_0xFA57C719261AA55D(&Global_2384, 24);
				unk_0xFA57C719261AA55D(&Global_2384, 25);
				unk_0xFA57C719261AA55D(&Global_2384, 27);
				unk_0xFA57C719261AA55D(&Global_2384, 26);
				if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
				{
					if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
					{
						func_63();
					}
					else if (func_66() == 0)
					{
						func_63();
					}
				}
			}
		}
		if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
		{
			if (func_66())
			{
				func_65();
			}
		}
		else if (func_67())
		{
		}
		else if (func_66())
		{
			func_65();
		}
		if (Global_14513.f_1 == 9)
		{
			if (Global_15835 == 0)
			{
				iLocal_32 = 1;
			}
		}
	}
}

void func_65()
{
	struct<2> Var0;
	
	unk_0x75B4B390EE495A3B(&Var0);
	if (Global_14459[Global_14458 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_4268545 = 1;
	}
}

int func_66()
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
		if (func_73(14))
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

int func_67()
{
	if (unk_0x8B1574454E8C2421(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_68()
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

int func_69()
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

void func_70(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, true, iParam1);
}

void func_71()
{
	unk_0x92B6A67F22C8288E(&iLocal_39);
	if (iLocal_39 == -1)
	{
	}
}

void func_72(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_48(sParam7);
	}
	if (!unk_0x429D45A6C6520026(sParam8))
	{
		func_48(sParam8);
	}
	if (!unk_0x429D45A6C6520026(sParam9))
	{
		func_48(sParam9);
	}
	if (!unk_0x429D45A6C6520026(sParam10))
	{
		func_48(sParam10);
	}
	if (!unk_0x429D45A6C6520026(sParam11))
	{
		func_48(sParam11);
	}
	unk_0x271C1332F482646C();
}

bool func_73(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_74(int iParam0)
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
		if (func_73(14))
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
								func_48(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(iVar2);
								unk_0x271C1332F482646C();
							}
							if (Global_2458186)
							{
								if (iVar1 == 14)
								{
									func_72(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_72(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(Global_16890), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_72(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_72(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_72(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_48(&(Global_2390[iVar1 /*15*/]));
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
								func_48(&(Global_2390[iVar1 /*15*/]));
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
								func_48(&(Global_2390[iVar1 /*15*/]));
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
								func_48(&(Global_2390[iVar1 /*15*/]));
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
								func_48(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(42);
								unk_0x271C1332F482646C();
							}
							else if (Global_2390[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1624079.f_1;
								func_72(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_72(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_75()
{
	if (Global_71205 == 0)
	{
		Global_2390[14 /*15*/].f_4 = -99;
		Global_2390[4 /*15*/].f_4 = -99;
		if (Global_2458186)
		{
			if (func_73(14))
			{
				func_76(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_76(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_76(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_76(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_76(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

void func_77()
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
		func_76(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_76(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_76(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_36117 == 15 && func_55(0) == 0) && Global_2388 == 0)
		{
			func_76(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14684 = 0;
			Global_2389 = 255;
		}
		else
		{
			func_76(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14684 = 1;
			Global_2389 = 42;
		}
		if (iVar1 == 1)
		{
			func_76(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_76(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_76(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_76(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_76(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_106070.f_14023.f_89 == 1)
		{
			func_76(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_106070.f_14023.f_88 == 1)
		{
			func_76(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_76(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_76(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_76(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_76(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_76(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_76(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_76(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_76(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_76(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_76(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_76(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_76(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_76(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_76(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_76(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_76(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_76(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (unk_0x05EFB6A616B6FADE(Global_4268330, 4) == 1)
		{
			func_76(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_76(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_76(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_76(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_76(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_76(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_76(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_76(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_76(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_76(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_76(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_76(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_76(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_76(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_76(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_76(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_76(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!unk_0x05EFB6A616B6FADE(Global_4268330, 4) == 1)
		{
			if (Global_1573910)
			{
				func_76(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (unk_0x05EFB6A616B6FADE(Global_4268330, 20) == 1)
			{
				func_76(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (unk_0x05EFB6A616B6FADE(Global_4268330, 22) == 1)
			{
				func_76(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (unk_0x05EFB6A616B6FADE(Global_4268330, 26) == 1)
			{
				func_76(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((unk_0x05EFB6A616B6FADE(Global_4268330, 4) == 0 && Global_1573910 == 0) && unk_0x05EFB6A616B6FADE(Global_4268330, 20) == 0) && unk_0x05EFB6A616B6FADE(Global_4268330, 22) == 0) && unk_0x05EFB6A616B6FADE(Global_4268330, 26) == 0)
		{
			func_76(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

int func_78(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 1)
	{
	}
	if (iParam0 == 0)
	{
		if (func_79() == 0)
		{
			return 0;
		}
	}
	if (unk_0xF23E0372C57F13E7(&iVar0) && unk_0x3278E95F94254201(903) == 1)
	{
		return 1;
	}
	if (!unk_0xF23E0372C57F13E7(&iVar0))
	{
		if (iVar0 == 6)
		{
			return 1;
		}
		else if (iVar0 == 7)
		{
			return 1;
		}
		else if (iVar0 == 8)
		{
			return 1;
		}
		else if (iVar0 == 9)
		{
			return 1;
		}
		else if (iVar0 == 11)
		{
			return 1;
		}
		else if (iVar0 == 12)
		{
			return 1;
		}
		else if (iVar0 == 10)
		{
			return 1;
		}
	}
	return 0;
}

int func_79()
{
	if (unk_0x7DD04831D0FC44CA())
	{
		if (!unk_0x9E9A8D0D36258975())
		{
			if (unk_0xB1A16D9A90A45A1C() == 4)
			{
				return 0;
			}
			if (unk_0xB1A16D9A90A45A1C() == 2)
			{
				return 0;
			}
			if (unk_0xB1A16D9A90A45A1C() == 1)
			{
				return 0;
			}
			if (unk_0xB1A16D9A90A45A1C() == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_80()
{
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		iLocal_67 = unk_0x9ED792C1E864DF52(unk_0xD746C1583BE52D14(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true)));
	}
	switch (iLocal_67)
	{
		case 0:
			iLocal_43 = 5;
			break;
		
		case 1:
			iLocal_43 = 5;
			break;
		
		case 2:
			iLocal_43 = 4;
			break;
		
		case 3:
			iLocal_43 = 4;
			break;
		
		case 4:
			iLocal_43 = 3;
			break;
		
		case 5:
			iLocal_43 = 2;
			break;
		
		default:
			iLocal_43 = 3;
			break;
	}
	iLocal_68 = unk_0x22C775856F4633CA(0, 8);
	if (iLocal_68 < 2)
	{
		if (iLocal_43 > 2)
		{
			iLocal_43 = (iLocal_43 - 1);
		}
	}
	if (iLocal_69 == 1 || func_81())
	{
		iLocal_43 = 0;
	}
	func_99(Global_14494, "SET_PROVIDER_ICON", to_float(iLocal_42), to_float(iLocal_43), -1082130432, -1082130432, -1082130432);
}

int func_81()
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		iVar0 = func_87();
		if (func_86(iVar0))
		{
			vVar1 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) };
			iVar2 = 0;
			while (iVar2 < Global_106070.f_7660.f_136)
			{
				if (unk_0x05EFB6A616B6FADE(Global_106070.f_7660[iVar2 /*15*/].f_2, iVar0))
				{
					if (func_84(vVar1, func_85(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_106070.f_7660.f_764)
			{
				if (unk_0x05EFB6A616B6FADE(Global_106070.f_7660.f_651[iVar2 /*14*/].f_2, iVar0))
				{
					if (func_84(vVar1, func_83(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_106070.f_7660.f_866)
			{
				if (unk_0x05EFB6A616B6FADE(Global_106070.f_7660.f_765[iVar2 /*10*/].f_2, iVar0))
				{
					if (func_84(vVar1, func_82(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
		}
	}
	return 0;
}

int func_82(int iParam0)
{
	return Global_106070.f_7660.f_765[iParam0 /*10*/].f_7;
}

int func_83(int iParam0)
{
	return Global_106070.f_7660.f_651[iParam0 /*14*/].f_7;
}

int func_84(vector3 vParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		if (iParam1 >= Global_36118)
		{
			return 0;
		}
		if (vdist2(vParam0, Global_36118[iParam1 /*5*/]) <= (Global_36118[iParam1 /*5*/].f_3 * Global_36118[iParam1 /*5*/].f_3))
		{
			return 1;
		}
		else if (Global_36118[iParam1 /*5*/].f_4 != -1)
		{
			return func_84(vParam0, Global_36118[iParam1 /*5*/].f_4);
		}
	}
	return 0;
}

int func_85(int iParam0)
{
	return Global_106070.f_7660[iParam0 /*15*/].f_7;
}

bool func_86(int iParam0)
{
	return iParam0 < 3;
}

var func_87()
{
	func_88();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_88()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_90(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_89(unk_0xA19140A5C42D8715());
			if (func_86(iVar0) && (!func_73(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_86(Global_106070.f_2355.f_539.f_4301))
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

int func_89(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_90(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_90(int iParam0)
{
	if (func_86(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_91()
{
	func_107();
	return Global_106070.f_14023[Global_14513 /*20*/].f_8;
}

struct<13> func_92(int iParam0)
{
	struct<13> Var0;
	
	unk_0xE05C4303C26882C4(iParam0, &Var0, 13);
	return Var0;
}

void func_93()
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

int func_94(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_95(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_95(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_96();
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

var func_96()
{
	return Global_1312736;
}

void func_97()
{
	if (func_73(14))
	{
		if (Global_2458186)
		{
			if (Global_14513.f_1 == 6)
			{
				if (Global_14493 == 7)
				{
					func_99(Global_14494, "DISPLAY_VIEW", 1f, to_float(7), -1082130432, -1082130432, -1082130432);
				}
				else
				{
					Global_14493 = 6;
					func_99(Global_14494, "DISPLAY_VIEW", 1f, to_float(6), -1082130432, -1082130432, -1082130432);
				}
			}
		}
		else if (Global_14513.f_1 == 6)
		{
			func_99(Global_14494, "DISPLAY_VIEW", 1f, to_float(6), -1082130432, -1082130432, -1082130432);
		}
	}
	iLocal_45 = unk_0x65DA628D62901275();
	if (iLocal_45 != Global_2386)
	{
		Global_2386 = iLocal_45;
		iLocal_44 = unk_0x34CEB9721AC6A0A9();
		iLocal_46 = unk_0xB62414EC7AF2650B();
		switch (iLocal_46)
		{
			case 0:
				StringCopy(&Local_47, "CELL_920", 16);
				break;
			
			case 1:
				StringCopy(&Local_47, "CELL_921", 16);
				break;
			
			case 2:
				StringCopy(&Local_47, "CELL_922", 16);
				break;
			
			case 3:
				StringCopy(&Local_47, "CELL_923", 16);
				break;
			
			case 4:
				StringCopy(&Local_47, "CELL_924", 16);
				break;
			
			case 5:
				StringCopy(&Local_47, "CELL_925", 16);
				break;
			
			case 6:
				StringCopy(&Local_47, "CELL_926", 16);
				break;
			
			default:
				StringCopy(&Local_47, "CELL_206", 16);
				break;
		}
		func_72(Global_14494, "SET_TITLEBAR_TIME", to_float(iLocal_44), to_float(iLocal_45), -1f, -1f, -1f, &Local_47, 0, 0, 0, 0);
		if (Global_14456 == 0)
		{
			func_80();
		}
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			iLocal_52 = unk_0x24A1A7BF4ED94B71(unk_0xA19140A5C42D8715());
		}
	}
}

void func_98()
{
	if (Global_71205)
	{
		StringCopy(&Global_14502, "Phone_SoundSet_Default", 24);
		unk_0xB960B796CC2411C4(0);
	}
	else if (Global_14456)
	{
		unk_0xB960B796CC2411C4(4);
		StringCopy(&Global_14502, "Phone_SoundSet_Prologue", 24);
	}
	else
	{
		switch (Global_14513)
		{
			case 0:
				StringCopy(&Global_14502, "Phone_SoundSet_Michael", 24);
				unk_0xB960B796CC2411C4(0);
				break;
			
			case 2:
				StringCopy(&Global_14502, "Phone_SoundSet_Trevor", 24);
				unk_0xB960B796CC2411C4(1);
				break;
			
			case 1:
				StringCopy(&Global_14502, "Phone_SoundSet_Franklin", 24);
				unk_0xB960B796CC2411C4(2);
				break;
			
			default:
				StringCopy(&Global_14502, "Phone_SoundSet_Default", 24);
				unk_0xB960B796CC2411C4(0);
				break;
			}
	}
	Global_14476 = { -90f, -130f, 0f };
	if (unk_0xB8698B5AFA4DC05D())
	{
		Global_14458 = 0;
		Global_14459[0 /*3*/] = { (unk_0x79A3348EEC2E5FE7() * 117.2f), (unk_0x79A3348EEC2E5FE7() * -158.8f), -113f };
		Global_14466[0 /*3*/] = { (unk_0x79A3348EEC2E5FE7() * 117.2f), (unk_0x79A3348EEC2E5FE7() * -53.3f), -113f };
	}
	else
	{
		Global_14458 = 0;
		Global_14459[0 /*3*/] = { (unk_0x79A3348EEC2E5FE7() * 85.7f), (unk_0x79A3348EEC2E5FE7() * -121.8f), -91.5f };
		Global_14466[0 /*3*/] = { (unk_0x79A3348EEC2E5FE7() * 85.7f), (unk_0x79A3348EEC2E5FE7() * -35.3f), -91.5f };
	}
	Global_14441 = { Global_14459[Global_14458 /*3*/] };
	unk_0xB8927E9A664047D4(Global_14459[Global_14458 /*3*/]);
	unk_0xD698A1090D8964DE(Global_14476, 0);
	Global_14453 = 1;
}

void func_99(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_100()
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
	func_101(&(Global_2530962.f_20));
}

void func_101(var uParam0)
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

void func_102()
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
		else if (func_103(Global_2530962.f_20))
		{
			if (unk_0x6053E2C13442D6D7(&(Global_2530962.f_20)))
			{
				if (!unk_0xA69E919EA774C5B2(&(Global_2530962.f_20)))
				{
					func_100();
				}
			}
		}
		else
		{
			func_100();
		}
	}
	else
	{
		func_100();
	}
	if (Global_2530962.f_37)
	{
		func_56(0);
	}
	Global_2530962.f_37 = 0;
	Global_2530962.f_3 = 0;
}

bool func_103(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x09BF290B57B95740(&uParam0, 13);
}

void func_104()
{
	Global_14688 = 0;
	func_8();
}

void func_105(int iParam0, char* sParam1)
{
	unk_0x31A9E530D137684F(iParam0, sParam1);
	unk_0x271C1332F482646C();
}

void func_106()
{
	unk_0x9EA8CBEA7355649E(0, Global_14482);
	unk_0xD481A812073CCF02(0, 70, 1);
	unk_0xD481A812073CCF02(0, 69, 1);
	if (unk_0x0B9F814BC8D14042(2))
	{
		unk_0x9EA8CBEA7355649E(0, Global_14482);
		unk_0x9EA8CBEA7355649E(0, Global_14483);
		unk_0xD481A812073CCF02(0, 24, 1);
		unk_0xD481A812073CCF02(0, 257, 1);
	}
	if (Global_71205)
	{
		Global_106070.f_14023[3 /*20*/].f_10 = func_94(1197, -1, 0);
	}
	if (unk_0x47C01C0E6F4C1D06())
	{
		if (unk_0xAEAF59799C2F26E4(unk_0xA19140A5C42D8715(), "Synched"))
		{
		}
		else if (((unk_0xFD34717937104F1C() - iLocal_70) >= 300 || iLocal_70 == 0) || iLocal_70 > unk_0xFD34717937104F1C())
		{
			unk_0xB0E737394929E89F(0, 100, 100);
			iLocal_70 = unk_0xFD34717937104F1C();
		}
	}
	else if (Global_106070.f_14023[Global_14513 /*20*/].f_10 == 1)
	{
		if (((unk_0xFD34717937104F1C() - iLocal_70) >= 300 || iLocal_70 == 0) || iLocal_70 > unk_0xFD34717937104F1C())
		{
			unk_0xB0E737394929E89F(0, 100, 100);
			iLocal_70 = unk_0xFD34717937104F1C();
		}
	}
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		if (!unk_0x5478521AC20DB43C(unk_0xA19140A5C42D8715()))
		{
			if (Global_71205)
			{
				if (!unk_0x3CAC2741CC1A631F(&(Global_3188[3 /*2811*/][1 /*281*/].f_144[func_94(1198, -1, 0) /*6*/]), "Silent Ringtone Dummy"))
				{
					unk_0xE03F95BCE7BE67AD(&(Global_3188[3 /*2811*/][1 /*281*/].f_144[func_94(1198, -1, 0) /*6*/]), unk_0xA19140A5C42D8715(), 1);
				}
			}
			else if (!unk_0x3CAC2741CC1A631F(&(Global_106070.f_14023[Global_14513 /*20*/].f_11), "Silent Ringtone Dummy"))
			{
				if (!Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 1)
				{
					if (unk_0x47C01C0E6F4C1D06())
					{
						if (unk_0xAEAF59799C2F26E4(unk_0xA19140A5C42D8715(), "Synched"))
						{
						}
						else
						{
							unk_0xE03F95BCE7BE67AD(&(Global_106070.f_14023[Global_14513 /*20*/].f_11), unk_0xA19140A5C42D8715(), 1);
						}
					}
					else
					{
						unk_0xE03F95BCE7BE67AD(&(Global_106070.f_14023[Global_14513 /*20*/].f_11), unk_0xA19140A5C42D8715(), 1);
					}
				}
			}
		}
	}
}

void func_107()
{
	if (func_73(14))
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
		Global_14513 = func_87();
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

