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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
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
	sLocal_18 = "NULL";
	iLocal_21 = 3;
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_53 = 3;
	unk_0x5341E3E598550C46();
	if (unk_0x5EBD03AF78E7B4DB(32))
	{
		unk_0x8F1A9FE6D91AAFEB();
	}
	while (true)
	{
		func_102();
		switch (iLocal_54)
		{
			case 0:
				func_97();
				break;
			
			case 1:
				func_88();
				func_2();
				Global_90611 = 0;
				break;
			
			case 2:
				func_1();
				break;
		}
		wait(0);
	}
}

void func_1()
{
	iLocal_54 = 0;
}

void func_2()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	
	if (iLocal_60)
	{
		iLocal_60 = 0;
	}
	else
	{
		iLocal_55++;
	}
	bLocal_59 = false;
	if (unk_0x4C9BACA8D249CB13())
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = func_84();
	}
	if (iVar0 != iLocal_58)
	{
		iLocal_58 = iVar0;
		bLocal_59 = true;
		iLocal_66 = 0;
		iLocal_67 = 0;
		iLocal_74 = 0;
		iLocal_80 = 0;
	}
	if (iLocal_58 == 145)
	{
		return;
	}
	bVar1 = false;
	if ((iLocal_55 == 6 && func_83(64)) || (iLocal_55 == 5 && unk_0x8B1574454E8C2421(joaat("pilot_school")) > 0))
	{
		bVar1 = true;
		iLocal_60 = 1;
	}
	func_77();
	if (Global_90609 || (Global_90610 && !func_74(0)))
	{
		if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			iVar2 = 0;
			while (iVar2 < 8)
			{
				func_73(iLocal_58, iVar2);
				iVar2++;
			}
			Global_90609 = 0;
		}
	}
	if (!bVar1)
	{
		if (((((((((unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) || (!unk_0x4C9BACA8D249CB13() && !func_72(iLocal_58))) || unk_0x47C3DC461C758C29()) || func_71()) || unk_0x5CA3186381FC012C()) || unk_0x71364F510A1CB69F()) || !unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC())) || Global_71203) || Global_90611) || iLocal_61)
		{
			iLocal_82 = 1;
			iLocal_83 = unk_0xFD34717937104F1C();
			if (unk_0x4C9BACA8D249CB13())
			{
				iLocal_84 = unk_0xFFCC7EBF88BDEE54();
			}
			return;
		}
		if (iLocal_82)
		{
			if ((!unk_0x4C9BACA8D249CB13() && (unk_0xFD34717937104F1C() - iLocal_83) > 3000) || (unk_0x4C9BACA8D249CB13() && unk_0x0DB88D63EF951377(unk_0xFFCC7EBF88BDEE54(), unk_0x8039F92D4B9C6B71(iLocal_84, 3000))))
			{
				iLocal_82 = 0;
			}
			else
			{
				return;
			}
		}
	}
	if (((!unk_0x4C9BACA8D249CB13() && (unk_0xFD34717937104F1C() - iLocal_56) > 2000) || (unk_0x4C9BACA8D249CB13() && unk_0x0DB88D63EF951377(unk_0xFFCC7EBF88BDEE54(), unk_0x8039F92D4B9C6B71(iLocal_57, 2000)))) || bLocal_59)
	{
		if (iLocal_55 >= 8)
		{
			iLocal_55 = 0;
			iLocal_56 = unk_0xFD34717937104F1C();
			if (unk_0x4C9BACA8D249CB13())
			{
				iLocal_57 = unk_0xFFCC7EBF88BDEE54();
			}
		}
		iVar11 = 1;
		if (bLocal_59)
		{
			iVar11 = 8;
		}
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			bVar13 = true;
			if (bLocal_59)
			{
				iVar8 = iVar12;
			}
			else
			{
				iVar8 = iLocal_55;
			}
			func_70(iLocal_58, iVar8, &iVar6, &iVar7);
			if (unk_0x4C9BACA8D249CB13())
			{
				iVar3 = func_69(iVar7, -1, 0);
			}
			else if (iVar8 == 0)
			{
				iVar3 = Global_106070.f_2355.f_539.f_2367[iLocal_58];
			}
			else
			{
				unk_0x2AD48F3CEBA882E9(iVar6, &iVar3, -1);
			}
			iVar5 = iVar3;
			iVar3 = func_68(iVar3, 0, 100);
			if (func_55(iLocal_58, iVar8, iVar3, &iVar4))
			{
				if (unk_0x4C9BACA8D249CB13())
				{
					func_54(iVar7, iVar4, -1, 1, 0);
				}
				else if (iVar8 == 0)
				{
					if (Global_106070.f_2355.f_539.f_2367[iLocal_58] == 0)
					{
						bVar13 = false;
					}
					Global_106070.f_2355.f_539.f_2367[iLocal_58] = iVar4;
				}
				else
				{
					unk_0x93180BE33E7149EF(iVar6, iVar4, 1);
				}
				if (iVar4 > func_52(iLocal_58, iVar8, -1))
				{
					if (unk_0x4C9BACA8D249CB13())
					{
					}
					else if ((!Global_106070.f_9057 && !func_51(0)) || !unk_0x05EFB6A616B6FADE(Global_106070.f_9057.f_2[27 /*3*/], 2))
					{
						bVar13 = false;
					}
					iVar14 = iVar4;
					iVar15 = (iVar14 - (iVar14 % func_50(iLocal_58, iVar8)));
					if ((iVar14 % func_50(iLocal_58, iVar8)) >= 0)
					{
						iVar15 = (iVar15 + func_50(iLocal_58, iVar8));
					}
					if (iVar14 >= iVar15)
					{
						iVar14 = iVar15;
					}
					else
					{
						iVar14 = (iVar15 - func_50(iLocal_58, iVar8));
					}
					if (iVar4 > iVar14)
					{
						bVar13 = false;
					}
					if (func_45())
					{
						bVar13 = false;
					}
					if (bVar13)
					{
						if (!bLocal_59)
						{
							if (unk_0x4C9BACA8D249CB13())
							{
								if (func_44(117, -1) == 0)
								{
									if (!unk_0xE06AA0996C4E4E03() && func_9())
									{
										func_8("STAT_HELP2", -1);
										func_4(117, 1, -1, 1);
									}
								}
							}
							iLocal_61 = 1;
							iLocal_64 = (iVar4 - iVar3);
							iLocal_64 = (iLocal_64 + (iVar3 % func_50(iLocal_58, iVar8)));
							iLocal_65 = iVar4;
							iLocal_62 = iLocal_58;
							iLocal_63 = iVar8;
						}
					}
					if (iVar4 >= 100)
					{
						if (func_3(iLocal_58, iVar8, &iVar9))
						{
							if (iLocal_58 == 0)
							{
								unk_0x2AD48F3CEBA882E9(joaat("sp0_total_playing_time"), &iVar10, -1);
								unk_0x93180BE33E7149EF(iVar9, iVar10, 1);
							}
							else if (iLocal_58 == 1)
							{
								unk_0x2AD48F3CEBA882E9(joaat("sp1_total_playing_time"), &iVar10, -1);
								unk_0x93180BE33E7149EF(iVar9, iVar10, 1);
							}
							else if (iLocal_58 == 2)
							{
								unk_0x2AD48F3CEBA882E9(joaat("sp2_total_playing_time"), &iVar10, -1);
								unk_0x93180BE33E7149EF(iVar9, iVar10, 1);
							}
							else if (iLocal_58 == 3)
							{
							}
						}
					}
				}
				func_73(iLocal_58, iVar8);
			}
			else if (iVar4 < iVar5)
			{
				bVar16 = true;
				if (unk_0x4C9BACA8D249CB13())
				{
					func_54(iVar7, iVar4, -1, 1, 0);
				}
				else if (iVar8 == 0)
				{
					Global_106070.f_2355.f_539.f_2367[iLocal_58] = iVar4;
					bVar16 = false;
				}
				else
				{
					unk_0x93180BE33E7149EF(iVar6, iVar4, 1);
				}
				if (bVar16)
				{
					func_73(iLocal_58, iVar8);
				}
			}
			iVar12++;
		}
	}
	else
	{
		iLocal_60 = 1;
	}
}

bool func_3(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = joaat("last_playing_time");
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability_maxed");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability_maxed");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability_maxed");
					break;
			}
			break;
	}
	return *uParam2 != joaat("last_playing_time");
}

void func_4(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_7())
	{
		iVar0 = Global_2566070[iParam0 /*3*/][func_5(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x0C62A7470B522D80(iVar0, bParam1, iParam3);
		}
	}
}

int func_5(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
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

int func_6()
{
	return Global_1312736;
}

int func_7()
{
	return 1;
	return 0;
}

void func_8(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, true, iParam1);
}

int func_9()
{
	if ((unk_0x04232A13D3CB650F() && unk_0x49B680F5AF4359D0()) && !func_43(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	if (Global_1654690 == 1)
	{
		return 0;
	}
	if (Global_1654543 == 1)
	{
		return 0;
	}
	if (unk_0x9EEB10C72B389306())
	{
		return 0;
	}
	if (Global_1574380 == 1)
	{
		return 0;
	}
	if (unk_0x9B9A3A10827A2EA0())
	{
		return 0;
	}
	if (Global_968394)
	{
		return 0;
	}
	if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_665 == 1)
	{
		return 0;
	}
	if (func_42())
	{
		return 0;
	}
	if (func_41())
	{
		return 0;
	}
	if (func_40())
	{
		if (!func_41())
		{
			if (!func_39(3, -1))
			{
				if (func_37(&Global_2460503, 300000, 0) == 1)
				{
					func_36(&Global_2460501);
					func_34(3, -1);
				}
				else if (func_37(&Global_2460501, 7000, 0) == 0)
				{
					return 0;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_33())
	{
		return 0;
	}
	if (func_32())
	{
		return 0;
	}
	if (func_30())
	{
		return 0;
	}
	if (func_29())
	{
		return 0;
	}
	if (func_28())
	{
		return 0;
	}
	if (func_27())
	{
		return 0;
	}
	if (unk_0x3DF0D4C48D463CA8())
	{
		return 0;
	}
	if (unk_0xD1ABB20CFF127CCC())
	{
		return 0;
	}
	if (unk_0x965BA0E75ABD2A72())
	{
		if (func_26(unk_0xA19140A5C42D8715()) == joaat("weapon_sniperrifle") || func_26(unk_0xA19140A5C42D8715()) == joaat("weapon_heavysniper"))
		{
			return 0;
		}
	}
	if (unk_0x71364F510A1CB69F())
	{
		return 0;
	}
	if (func_25(8, -1))
	{
		return 0;
	}
	if (func_24(12, -1))
	{
		return 0;
	}
	if (unk_0xC9A7EEAA81FA9DF2(19))
	{
		return 0;
	}
	if (func_23())
	{
		return 0;
	}
	if (func_22())
	{
		return 0;
	}
	if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_35)
	{
		return 0;
	}
	if (Global_1574174)
	{
		return 0;
	}
	if (Global_1574178)
	{
		return 0;
	}
	if (Global_1574180)
	{
		return 0;
	}
	if (Global_2437022.f_3880.f_39)
	{
		return 0;
	}
	if (func_21(0))
	{
		return 0;
	}
	if (func_20())
	{
		return 0;
	}
	if (Global_2524719.f_3954)
	{
		return 0;
	}
	if (Global_2437022.f_3746)
	{
		return 0;
	}
	if (!func_19(unk_0xD4E735F4B6A956AC(), 1, 0))
	{
		return 0;
	}
	if (func_18(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	if (Global_2437022.f_3880.f_39 == 1)
	{
		return 0;
	}
	if (Global_2449169.f_2844.f_25 == 1)
	{
		return 0;
	}
	if (func_17(1))
	{
		return 0;
	}
	if (func_15())
	{
		return 0;
	}
	if (unk_0xC9A7EEAA81FA9DF2(16))
	{
		return 0;
	}
	if (func_14())
	{
		return 0;
	}
	if (func_13())
	{
		return 0;
	}
	if (unk_0x90A6E668DB47D464())
	{
		if (func_12("FHU_HELP3"))
		{
			return 0;
		}
	}
	if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_647)
	{
		return 0;
	}
	if (func_10(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	return 1;
}

int func_10(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_325, 26);
	}
	return 0;
}

int func_11()
{
	return -1;
}

int func_12(char* sParam0)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	return unk_0x3D94488A86ABB03F(0);
}

bool func_13()
{
	return Global_2437022.f_1889.f_688 != 0;
}

bool func_14()
{
	return Global_2437022.f_3028.f_578;
}

bool func_15()
{
	return func_16();
}

bool func_16()
{
	return Global_1361724.f_40 == 3;
}

bool func_17(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17228.f_4 && Global_17228.f_104 == 4);
	}
	return Global_17228.f_4;
}

bool func_18(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1624218[iParam0 /*38*/].f_14, 0);
}

int func_19(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xC77FA683E9BB485B(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x58E3CCF930D23BD5(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437022.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_20()
{
	if (unk_0x8B1574454E8C2421(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_21(int iParam0)
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

bool func_22()
{
	return Global_1368245.f_112;
}

bool func_23()
{
	return Global_2437022.f_2704[0 /*80*/].f_1 != 0;
}

int func_24(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				if (Global_1368245.f_137[iParam1])
				{
					return 1;
				}
				if (Global_1368245.f_170[iParam1])
				{
					return 1;
				}
			}
			break;
		
		default:
			if (unk_0x05EFB6A616B6FADE(Global_1368245.f_1046, iParam0))
			{
				return 1;
			}
			if (unk_0x05EFB6A616B6FADE(Global_1368245.f_1047, iParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_25(int iParam0, int iParam1)
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

int func_26(int iParam0)
{
	var uVar0;
	
	unk_0xF990CFC0F1D94A39(iParam0, &uVar0, 1);
	return uVar0;
}

bool func_27()
{
	return Global_2448386.f_581;
}

bool func_28()
{
	return unk_0x05EFB6A616B6FADE(Global_959568.f_8, 13);
}

bool func_29()
{
	return Global_2448386.f_580;
}

int func_30()
{
	if (func_31() == 1 || func_31() == 4)
	{
		return 1;
	}
	return 0;
}

int func_31()
{
	return Global_1312466.f_18;
}

int func_32()
{
	if (func_31() == 3 || func_31() == 2)
	{
		return 1;
	}
	return 0;
}

int func_33()
{
	if (unk_0x8B1574454E8C2421(joaat("maintransition")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_34(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	Global_1378818 = 0;
	if (unk_0x63141F5FDACF3D9B() == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			unk_0x2C7DC959BFE19B01(0, iParam1);
			iVar1 = func_35(iParam1);
			iVar0 = unk_0x3278E95F94254201(iVar1);
			break;
		
		default:
			iVar1 = func_35(iParam1);
			iVar0 = unk_0x3278E95F94254201(iVar1);
			if (!unk_0x05EFB6A616B6FADE(iVar0, iParam0))
			{
				unk_0x2BCFB39E86340DAA(&iVar0, iParam0);
				unk_0x2C7DC959BFE19B01(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			func_4(120, 0, iParam1, 1);
			func_4(124, 0, iParam1, 1);
			func_4(115, 0, iParam1, 1);
			func_4(119, 0, iParam1, 1);
			func_4(121, 0, iParam1, 1);
			func_4(122, 0, iParam1, 1);
			func_4(125, 0, iParam1, 1);
			func_54(1303, 0, iParam1, 1, 0);
			func_54(7233, 0, iParam1, 1, 0);
			break;
	}
}

int func_35(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_6();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

void func_36(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_37(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_38(uParam0, bParam2, 0);
	if (unk_0x4C9BACA8D249CB13() && !bParam2)
	{
		if (unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), *uParam0)) >= iParam1)
		{
			func_36(uParam0);
			return 1;
		}
	}
	else if (unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(unk_0xFD34717937104F1C(), *uParam0)) >= iParam1)
	{
		func_36(uParam0);
		return 1;
	}
	return 0;
}

void func_38(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x4C9BACA8D249CB13() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xFFCC7EBF88BDEE54();
			}
			else
			{
				*uParam0 = unk_0x7546CD2A62C6DBB6();
			}
		}
		else
		{
			*uParam0 = unk_0xFD34717937104F1C();
		}
		uParam0->f_1 = 1;
	}
}

bool func_39(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	iVar0 = func_35(iParam1);
	iVar1 = unk_0x3278E95F94254201(iVar0);
	return unk_0x05EFB6A616B6FADE(iVar1, iParam0);
}

int func_40()
{
	int iVar0;
	
	if (unk_0xC29B8FF8374918FD())
	{
		if (unk_0x0A68AE586CCE49F6())
		{
			if (unk_0x3750826756EA2005())
			{
				unk_0x2AD48F3CEBA882E9(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0x2BCFB39E86340DAA(&iVar0, 2);
				unk_0x2BCFB39E86340DAA(&iVar0, 4);
				unk_0x2BCFB39E86340DAA(&iVar0, 6);
				unk_0x2BCFB39E86340DAA(&Global_25, 2);
				unk_0x2BCFB39E86340DAA(&Global_25, 4);
				unk_0x2BCFB39E86340DAA(&Global_25, 6);
				unk_0x93180BE33E7149EF(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x63141F5FDACF3D9B())
				{
					iVar0 = unk_0x3278E95F94254201(866);
					unk_0x2BCFB39E86340DAA(&iVar0, 0);
					unk_0xF8B43D25409B2964(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_144765 == 2)
	{
		return 1;
	}
	else if (Global_144765 == 3)
	{
		return 0;
	}
	if (unk_0x63141F5FDACF3D9B())
	{
		if (unk_0x05EFB6A616B6FADE(unk_0x3278E95F94254201(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_41()
{
	return Global_1312857;
}

bool func_42()
{
	return Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_196 != 0;
}

bool func_43(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_309.f_3, 13);
}

int func_44(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2566070[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0x57AA4E7564A22FCD(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_45()
{
	if (!func_48(1))
	{
		return 0;
	}
	if (func_46())
	{
		return 0;
	}
	return Global_1666793;
}

bool func_46()
{
	return func_47(unk_0xD4E735F4B6A956AC());
}

int func_47(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_11())
		{
			return Global_1625435[iParam0 /*560*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_48(bool bParam0)
{
	return func_49(unk_0xD4E735F4B6A956AC(), bParam0);
}

bool func_49(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_47(iParam0))
		{
			return 0;
		}
	}
	return Global_1625435[iParam0 /*560*/].f_11 != func_11();
}

int func_50(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
	}
	return 1;
}

bool func_51(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

int func_52(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		if (func_53(14))
		{
			return 100;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 47;
					break;
				
				case 3:
					return 22;
					break;
				
				case 2:
					return 21;
					break;
				
				case 4:
					return 54;
					break;
				
				case 5:
					return 31;
					break;
				
				case 6:
					return 79;
					break;
				
				case 7:
					return 81;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 51;
					break;
				
				case 3:
					return 46;
					break;
				
				case 2:
					return 49;
					break;
				
				case 4:
					return 71;
					break;
				
				case 5:
					return 19;
					break;
				
				case 6:
					return 24;
					break;
				
				case 7:
					return 21;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 23;
					break;
				
				case 3:
					return 28;
					break;
				
				case 2:
					return 79;
					break;
				
				case 4:
					return 31;
					break;
				
				case 5:
					return 82;
					break;
				
				case 6:
					return 69;
					break;
				
				case 7:
					return 49;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_69(1224, iParam2, 0);
					break;
				
				case 3:
					return func_69(1230, iParam2, 0);
					break;
				
				case 2:
					return func_69(1226, iParam2, 0);
					break;
				
				case 4:
					return func_69(1229, iParam2, 0);
					break;
				
				case 5:
					return func_69(1228, iParam2, 0);
					break;
				
				case 6:
					return func_69(1225, iParam2, 0);
					break;
				
				case 7:
					return func_69(1227, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

bool func_53(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_54(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_5(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
}

int func_55(int iParam0, int iParam1, int iParam2, var uParam3)
{
	*uParam3 = func_56(iParam0, iParam1, 0, -1);
	if (*uParam3 > iParam2)
	{
		return 1;
	}
	return 0;
}

int func_56(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	
	iVar2 = 0;
	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				unk_0x2AD48F3CEBA882E9(joaat("sp0_special_ability_unlocked"), &iVar3, -1);
				fVar0 = to_float(iVar3);
			}
			else if (iParam0 == 1)
			{
				unk_0x2AD48F3CEBA882E9(joaat("sp1_special_ability_unlocked"), &iVar3, -1);
				fVar0 = to_float(iVar3);
			}
			else if (iParam0 == 2)
			{
				unk_0x2AD48F3CEBA882E9(joaat("sp2_special_ability_unlocked"), &iVar3, -1);
				fVar0 = to_float(iVar3);
			}
			else if (iParam0 == 3)
			{
				fVar0 = to_float(func_69(64, iParam3, 0));
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				unk_0xB13032FADD612FC1(joaat("sp0_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_106070.f_2355.f_539.f_2335[iParam0]) / 175f);
			}
			else if (iParam0 == 1)
			{
				unk_0xB13032FADD612FC1(joaat("sp1_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_106070.f_2355.f_539.f_2335[iParam0]) / 175f);
			}
			else if (iParam0 == 2)
			{
				unk_0xB13032FADD612FC1(joaat("sp2_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_106070.f_2355.f_539.f_2335[iParam0]) / 175f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_67(20, iParam3) / 175f);
				func_64(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + to_float(func_63(joaat("sp0_time_swimming"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + to_float(func_63(joaat("sp1_time_swimming"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + to_float(func_63(joaat("sp2_time_swimming"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + to_float(func_63(func_62(50, iParam3))));
				func_64(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + to_float(func_63(joaat("sp0_time_driving_bicycle"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + to_float(func_63(joaat("sp1_time_driving_bicycle"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + to_float(func_63(joaat("sp2_time_driving_bicycle"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + to_float(func_63(func_62(47, iParam3))));
				func_64(&fVar0);
			}
			if (iParam0 == 3)
			{
				fVar0 = (fVar0 + ((4f * Global_262145.f_23684) * IntToFloat(func_69(7234, -1, 0))));
			}
			if (iParam0 == 3)
			{
				fVar0 = (fVar0 * 0.25f);
			}
			break;
		
		case 3:
			if (iParam0 == 0)
			{
				fVar0 = (to_float(func_61(joaat("sp0_time_underwater"))) / 30f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (to_float(func_61(joaat("sp1_time_underwater"))) / 30f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (to_float(func_61(joaat("sp2_time_underwater"))) / 30f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (to_float(func_61(func_62(52, iParam3))) / 30f);
				func_64(&fVar0);
			}
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				unk_0x2AD48F3CEBA882E9(joaat("sp0_unarmed_hits"), &iVar3, -1);
				fVar0 = (to_float((iVar3 - Global_106070.f_2355.f_539.f_2339[iParam0])) / 20f);
			}
			else if (iParam0 == 1)
			{
				unk_0x2AD48F3CEBA882E9(joaat("sp1_unarmed_hits"), &iVar3, -1);
				fVar0 = (to_float((iVar3 - Global_106070.f_2355.f_539.f_2339[iParam0])) / 20f);
			}
			else if (iParam0 == 2)
			{
				unk_0x2AD48F3CEBA882E9(joaat("sp2_unarmed_hits"), &iVar3, -1);
				fVar0 = (to_float((iVar3 - Global_106070.f_2355.f_539.f_2339[iParam0])) / 20f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (to_float(func_69(1499, iParam3, 0)) / 20f);
				func_64(&fVar0);
			}
			break;
		
		case 4:
			if (iParam0 == 0)
			{
				unk_0x2AD48F3CEBA882E9(joaat("sp0_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (to_float((iVar3 - Global_106070.f_2355.f_539.f_2343[iParam0])) / 50f));
			}
			else if (iParam0 == 1)
			{
				unk_0x2AD48F3CEBA882E9(joaat("sp1_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (to_float((iVar3 - Global_106070.f_2355.f_539.f_2343[iParam0])) / 50f));
			}
			else if (iParam0 == 2)
			{
				unk_0x2AD48F3CEBA882E9(joaat("sp2_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (to_float((iVar3 - Global_106070.f_2355.f_539.f_2343[iParam0])) / 50f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat((func_69(112, iParam3, 0) / 50)));
				func_64(&fVar0);
			}
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				fVar0 = (to_float(func_63(joaat("sp0_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (to_float(func_63(joaat("sp1_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (to_float(func_63(joaat("sp2_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (to_float(func_63(func_62(43, iParam3))) / 10f);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + (to_float(func_63(joaat("sp0_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + (to_float(func_63(joaat("sp1_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + (to_float(func_63(joaat("sp2_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + (to_float(func_63(func_62(45, iParam3))) / 10f));
			}
			if (iParam0 == 0)
			{
				unk_0x2AD48F3CEBA882E9(joaat("sp0_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + to_float(iVar3));
			}
			else if (iParam0 == 1)
			{
				unk_0x2AD48F3CEBA882E9(joaat("sp1_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + to_float(iVar3));
			}
			else if (iParam0 == 2)
			{
				unk_0x2AD48F3CEBA882E9(joaat("sp2_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + to_float(iVar3));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(func_69(61, iParam3, 0)));
				func_64(&fVar0);
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar4 = func_60(iParam0, 0);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_60(iParam0, 1);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_60(iParam0, 2);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_60(iParam0, 3);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_60(iParam0, 6);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_60(iParam0, 4);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 5f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 3f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 2f);
				}
				iVar4 = func_60(iParam0, 5);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_60(iParam0, 7);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_60(iParam0, 8);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_60(iParam0, 11);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
			}
			break;
		
		case 7:
			if (iParam0 == 0)
			{
				unk_0xB13032FADD612FC1(joaat("sp0_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_106070.f_2355.f_539.f_2347[iParam0]) / 45f);
			}
			else if (iParam0 == 1)
			{
				unk_0xB13032FADD612FC1(joaat("sp1_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_106070.f_2355.f_539.f_2347[iParam0]) / 45f);
			}
			else if (iParam0 == 2)
			{
				unk_0xB13032FADD612FC1(joaat("sp2_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_106070.f_2355.f_539.f_2347[iParam0]) / 45f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_67(19, iParam3) / 45f);
			}
			if (iParam0 == 0)
			{
				unk_0x2AD48F3CEBA882E9(joaat("sp0_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((to_float((iVar3 - Global_106070.f_2355.f_539.f_2351[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 1)
			{
				unk_0x2AD48F3CEBA882E9(joaat("sp1_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((to_float((iVar3 - Global_106070.f_2355.f_539.f_2351[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 2)
			{
				unk_0x2AD48F3CEBA882E9(joaat("sp2_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((to_float((iVar3 - Global_106070.f_2355.f_539.f_2351[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 3)
			{
				iVar3 = func_69(34, iParam3, 0);
				fVar0 = (fVar0 + ((to_float(iVar3) / 2f) * 1.5f));
				func_64(&fVar0);
			}
			break;
		
		case 6:
			if (iParam0 == 0)
			{
				unk_0x2AD48F3CEBA882E9(joaat("sp0_hits_mission"), &iVar5, -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp0_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (to_float((iVar5 - Global_106070.f_2355.f_539.f_2355[iParam0])) / 40f);
				fVar0 = (fVar0 + (to_float((iVar6 - Global_106070.f_2355.f_539.f_2359[iParam0])) / 80f));
			}
			else if (iParam0 == 1)
			{
				unk_0x2AD48F3CEBA882E9(joaat("sp1_hits_mission"), &iVar5, -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp1_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (to_float((iVar5 - Global_106070.f_2355.f_539.f_2355[iParam0])) / 40f);
				fVar0 = (fVar0 + (to_float((iVar6 - Global_106070.f_2355.f_539.f_2359[iParam0])) / 80f));
			}
			else if (iParam0 == 2)
			{
				unk_0x2AD48F3CEBA882E9(joaat("sp2_hits_mission"), &iVar5, -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp2_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (to_float((iVar5 - Global_106070.f_2355.f_539.f_2355[iParam0])) / 40f);
				fVar0 = (fVar0 + (to_float((iVar6 - Global_106070.f_2355.f_539.f_2359[iParam0])) / 80f));
			}
			else if (iParam0 == 3)
			{
				iVar6 = func_69(171, iParam3, 0);
				fVar0 = (fVar0 + (to_float(iVar6) / 80f));
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar7 = 0;
				while (iVar7 < 22)
				{
					switch (func_59(iVar7, iParam0))
					{
						case 3:
							iVar8++;
							break;
						
						case 2:
							iVar9++;
							break;
						
						case 1:
							iVar10++;
							break;
					}
					iVar7++;
				}
				fVar0 = (fVar0 + IntToFloat(iVar8 * 3));
				fVar0 = (fVar0 + IntToFloat(iVar9 * 2));
				fVar0 = (fVar0 + IntToFloat(iVar10 * 1));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(func_58(joaat("mpply_shootingrange_wins")) * 1));
				func_64(&fVar0);
			}
			break;
	}
	if (iParam1 != 0)
	{
		iVar11 = func_52(iParam0, iParam1, iParam3);
		fVar0 = (fVar0 + IntToFloat(iVar11));
		fVar0 = (fVar0 + IntToFloat(func_57(iParam0, iParam1, iParam3)));
	}
	if (bParam2)
	{
		fVar12 = (fVar0 - (fVar0 % IntToFloat(func_50(iParam0, iParam1))));
		if ((fVar0 % IntToFloat(func_50(iParam0, iParam1))) >= 0f)
		{
			fVar12 = (fVar12 + IntToFloat(func_50(iParam0, iParam1)));
		}
		if (fVar0 >= fVar12)
		{
			fVar0 = fVar12;
		}
		else
		{
			fVar0 = (fVar12 - IntToFloat(func_50(iParam0, iParam1)));
		}
	}
	iVar2 = floor(fVar0);
	iVar2 = func_68(iVar2, 0, 100);
	return iVar2;
}

int func_57(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			switch (iParam1)
			{
				case 1:
				case 3:
				case 2:
				case 4:
				case 5:
				case 6:
				case 7:
					return Global_106070.f_2355.f_539.f_2227[iParam1 /*4*/][iParam0];
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_69(72, iParam2, 0);
					break;
				
				case 3:
					return func_69(74, iParam2, 0);
					break;
				
				case 2:
					return func_69(73, iParam2, 0);
					break;
				
				case 4:
					return func_69(75, iParam2, 0);
					break;
				
				case 5:
					return func_69(76, iParam2, 0);
					break;
				
				case 6:
					return func_69(77, iParam2, 0);
					break;
				
				case 7:
					return func_69(78, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

int func_58(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x2AD48F3CEBA882E9(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_59(int iParam0, int iParam1)
{
	return Global_106070.f_19119[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_60(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > 2)
	{
		return 0;
	}
	return Global_106070.f_1980[iParam0 /*121*/][iParam1 /*10*/].f_8;
}

int func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + (unk_0x599AEB4A962D9117(iParam0) * 86400));
	iVar0 = (iVar0 + unk_0xC46350B4179D5696(iParam0) * 3600);
	iVar0 = (iVar0 + unk_0xB69A942D25BC5F7F(iParam0) * 60);
	iVar0 = (iVar0 + unk_0xC7B2E6A7576CC750(iParam0));
	return iVar0;
}

int func_62(int iParam0, int iParam1)
{
	return Global_2535519[iParam0 /*3*/][func_5(iParam1)];
}

int func_63(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + unk_0x599AEB4A962D9117(iParam0) * 1440);
	iVar0 = (iVar0 + unk_0xC46350B4179D5696(iParam0) * 60);
	iVar0 = (iVar0 + unk_0xB69A942D25BC5F7F(iParam0));
	return iVar0;
}

var func_64(float fParam0)
{
	if (func_45())
	{
		if (func_65() < Global_262145.f_12582)
		{
			if (*fParam0 + (IntToFloat(func_65()) * Global_262145.f_12581)) <= IntToFloat(Global_262145.f_12591)
			{
				*fParam0 = (*fParam0 + (IntToFloat(func_65()) * Global_262145.f_12581));
			}
		}
		return *fParam0;
	}
	return *fParam0;
}

int func_65()
{
	if (func_48(1))
	{
		return Global_1589747[func_66() /*790*/].f_211.f_6;
	}
	return 0;
}

int func_66()
{
	return Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11;
}

float func_67(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2565382[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0xB13032FADD612FC1(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_68(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_69(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_70(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

int func_71()
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		return Global_90805.f_44 == 1;
	}
	return 0;
}

bool func_72(int iParam0)
{
	return iParam0 < 3;
}

void func_73(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_70(iParam0, iParam1, &iVar2, &iVar3);
	if (unk_0x4C9BACA8D249CB13())
	{
		iVar0 = func_69(iVar3, -1, 0);
	}
	else
	{
		unk_0x2AD48F3CEBA882E9(iVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0.8f + (0.4f * (to_float(iVar0) / 100f)));
			unk_0xAA7525025C2E710F(unk_0xD4E735F4B6A956AC(), fVar1, 1);
			break;
		
		case 7:
			if (unk_0x8B1574454E8C2421(joaat("armenian3")) != 0 || unk_0x8B1574454E8C2421(joaat("trevor3")) != 0)
			{
				Global_90610 = 1;
			}
			else
			{
				fVar1 = (1f - (to_float(iVar0) / 100f));
				unk_0x1B26357B8BDA91B2(unk_0xD4E735F4B6A956AC(), fVar1);
				unk_0xDABDEAC9908D8F06(unk_0xD4E735F4B6A956AC(), fVar1);
				unk_0x3CC829823004BCCD(unk_0xD4E735F4B6A956AC(), fVar1);
			}
			break;
	}
}

int func_74(int iParam0)
{
	if (Global_36117 == 15)
	{
		return 0;
	}
	if (func_75(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_75(int iParam0)
{
	return func_76(iParam0, Global_36117);
}

int func_76(int iParam0, int iParam1)
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

void func_77()
{
	func_82();
	func_81();
	func_78();
}

void func_78()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!iLocal_80)
	{
		if (iLocal_58 == 3)
		{
			if (Global_2097152[func_80() /*12745*/].f_8178.f_7)
			{
				iLocal_77 = func_61(func_62(147, -1));
				Global_2097152[func_80() /*12745*/].f_8178.f_7 = 0;
			}
			else
			{
				iLocal_77 = Global_2097152[func_80() /*12745*/].f_8178.f_6;
			}
			if (Global_2097152[func_80() /*12745*/].f_8178.f_4 == 0)
			{
				Global_2097152[func_80() /*12745*/].f_8178.f_4 = unk_0x5E0F2F352218B916();
			}
			iLocal_79 = Global_2097152[func_80() /*12745*/].f_8178.f_4;
			iLocal_78 = Global_2097152[func_80() /*12745*/].f_8178.f_5;
		}
		else
		{
			if (Global_106070.f_2355.f_539.f_2272[iLocal_58])
			{
				switch (iLocal_58)
				{
					case 0:
						iLocal_77 = func_61(joaat("sp0_total_wheelie_time"));
						break;
					
					case 1:
						iLocal_77 = func_61(joaat("sp1_total_wheelie_time"));
						break;
					
					case 2:
						iLocal_77 = func_61(joaat("sp2_total_wheelie_time"));
						break;
				}
				Global_106070.f_2355.f_539.f_2272[iLocal_58] = 0;
			}
			else
			{
				iLocal_77 = Global_106070.f_2355.f_539.f_2268[iLocal_58];
			}
			if (Global_106070.f_2355.f_539.f_2260[iLocal_58] == 0)
			{
				Global_106070.f_2355.f_539.f_2260[iLocal_58] = unk_0x5E0F2F352218B916();
			}
			iLocal_79 = Global_106070.f_2355.f_539.f_2260[iLocal_58];
			iLocal_78 = Global_106070.f_2355.f_539.f_2264[iLocal_58];
		}
		iLocal_80 = 1;
		iLocal_81 = 1;
	}
	else if ((unk_0x5E0F2F352218B916() - iLocal_79) > 86400)
	{
		iLocal_80 = 0;
		iLocal_81 = 0;
		iLocal_79 = unk_0x5E0F2F352218B916();
		iLocal_78 = 0;
		if (iLocal_58 == 3)
		{
			Global_2097152[func_80() /*12745*/].f_8178.f_7 = 1;
		}
		else
		{
			Global_106070.f_2355.f_539.f_2272[iLocal_58] = 1;
		}
	}
	if (iLocal_81)
	{
		switch (iLocal_58)
		{
			case 0:
				iVar0 = func_61(joaat("sp0_total_wheelie_time"));
				break;
			
			case 1:
				iVar0 = func_61(joaat("sp1_total_wheelie_time"));
				break;
			
			case 2:
				iVar0 = func_61(joaat("sp2_total_wheelie_time"));
				break;
			
			case 3:
				iVar0 = func_61(func_62(147, -1));
				break;
		}
		iVar1 = (iVar0 - iLocal_77);
		iVar2 = (floor((to_float(iVar1) / 15f)) - iLocal_78);
		if (iVar2 > 0)
		{
			func_79(iLocal_58, 4, iVar2);
			iLocal_78 = (iLocal_78 + iVar2);
		}
		if (iVar0 > (iLocal_77 + (unk_0x32DD6C82CF917A5B() / 1000) * 60))
		{
			iLocal_81 = 0;
		}
	}
	if (iLocal_58 == 3)
	{
		Global_2097152[func_80() /*12745*/].f_8178.f_4 = iLocal_79;
		Global_2097152[func_80() /*12745*/].f_8178.f_5 = iLocal_78;
	}
	else
	{
		Global_106070.f_2355.f_539.f_2260[iLocal_58] = iLocal_79;
		Global_106070.f_2355.f_539.f_2264[iLocal_58] = iLocal_78;
	}
}

void func_79(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_106070.f_2355.f_539.f_2227[iParam1 /*4*/][iParam0] = (Global_106070.f_2355.f_539.f_2227[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 9954;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 9954)
			{
				iVar0 = func_69(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_54(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

int func_80()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_81()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_74)
	{
		bVar0 = true;
		if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			iVar1 = unk_0xD1A189C6C27EE0CA(unk_0xA19140A5C42D8715());
			if ((((unk_0xDC5D81351D6A4DDB(iVar1) && unk_0x1095F403F52B42E1(iVar1, 0)) && !unk_0x26D28D230F871E8D(iVar1)) && unk_0xB0D49A1F9F054602(iVar1, -1, 0) == unk_0xA19140A5C42D8715()) && (unk_0x8CE5E4632E631B03(unk_0x8F474E419F56E48D(iVar1)) || unk_0x425CD7B17352316F(unk_0x8F474E419F56E48D(iVar1))))
			{
				bVar0 = false;
				if (unk_0xEAA5CEF8875FEEED(iVar1) >= 53f)
				{
					func_79(iLocal_58, 4, 2);
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			iLocal_74 = 0;
			iLocal_75 = unk_0xFD34717937104F1C();
			if (unk_0x4C9BACA8D249CB13())
			{
				iLocal_76 = unk_0xFFCC7EBF88BDEE54();
			}
		}
	}
	else if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		iVar2 = unk_0xD1A189C6C27EE0CA(unk_0xA19140A5C42D8715());
		if (((unk_0xDC5D81351D6A4DDB(iVar2) && unk_0x1095F403F52B42E1(iVar2, 0)) && unk_0xEAA5CEF8875FEEED(iVar2) < 20f) && !unk_0x26D28D230F871E8D(iVar2))
		{
			if ((!unk_0x4C9BACA8D249CB13() && (unk_0xFD34717937104F1C() - iLocal_75) > 10000) || (unk_0x4C9BACA8D249CB13() && unk_0x0DB88D63EF951377(unk_0xFFCC7EBF88BDEE54(), unk_0x8039F92D4B9C6B71(iLocal_76, 10000))))
			{
				iLocal_74 = 1;
			}
		}
	}
}

void func_82()
{
	bool bVar0;
	int iVar1;
	char cVar2[64];
	
	bVar0 = false;
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		iVar1 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
		if (((unk_0xDC5D81351D6A4DDB(iVar1) && unk_0x1095F403F52B42E1(iVar1, 0)) && unk_0xB0D49A1F9F054602(iVar1, -1, 0) == unk_0xA19140A5C42D8715()) && (((unk_0x425CD7B17352316F(unk_0x8F474E419F56E48D(iVar1)) || unk_0x8CE5E4632E631B03(unk_0x8F474E419F56E48D(iVar1))) || unk_0x1F41816F62350826(unk_0x8F474E419F56E48D(iVar1))) || unk_0x34F956CD0E52746F(unk_0x8F474E419F56E48D(iVar1))))
		{
			if (iLocal_66)
			{
				if (!unk_0x26D28D230F871E8D(iVar1))
				{
					if ((!unk_0x4C9BACA8D249CB13() && (unk_0xFD34717937104F1C() - iLocal_68) > 1500) || (unk_0x4C9BACA8D249CB13() && unk_0x0DB88D63EF951377(unk_0xFFCC7EBF88BDEE54(), unk_0x8039F92D4B9C6B71(iLocal_69, 1500))))
					{
						iLocal_70 = unk_0xFD34717937104F1C();
						if (unk_0x4C9BACA8D249CB13())
						{
							iLocal_71 = unk_0xFFCC7EBF88BDEE54();
						}
						iLocal_67 = 1;
					}
					iLocal_66 = 0;
				}
			}
			if (iLocal_67)
			{
				if (!unk_0x26D28D230F871E8D(iVar1))
				{
					if (unk_0x678F978B0FAD24D2(iVar1))
					{
						if ((((!unk_0x4C9BACA8D249CB13() && (unk_0xFD34717937104F1C() - iLocal_70) > 20) || (!unk_0x4C9BACA8D249CB13() && (unk_0xFD34717937104F1C() - iLocal_70) == 0)) || (unk_0x4C9BACA8D249CB13() && unk_0x0DB88D63EF951377(unk_0xFFCC7EBF88BDEE54(), unk_0x8039F92D4B9C6B71(iLocal_71, 20)))) || (unk_0x4C9BACA8D249CB13() && unk_0xD9085B9A356CED18(unk_0xFFCC7EBF88BDEE54(), iLocal_71)))
						{
						}
						else
						{
							func_79(iLocal_58, 4, 1);
						}
						StringCopy(&cVar2, "Player landed on all wheels in ", 64);
						StringIntConCat(&cVar2, (unk_0xFD34717937104F1C() - iLocal_70), 64);
						StringConCat(&cVar2, "ms", 64);
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
			}
			if (!iLocal_66 && !iLocal_67)
			{
				if ((!unk_0x4C9BACA8D249CB13() && (unk_0xFD34717937104F1C() - iLocal_72) > 1000) || (unk_0x4C9BACA8D249CB13() && unk_0x0DB88D63EF951377(unk_0xFFCC7EBF88BDEE54(), unk_0x8039F92D4B9C6B71(iLocal_73, 1000))))
				{
					if (unk_0x26D28D230F871E8D(iVar1))
					{
						if (!iLocal_66)
						{
							iLocal_68 = unk_0xFD34717937104F1C();
							if (unk_0x4C9BACA8D249CB13())
							{
								iLocal_69 = unk_0xFFCC7EBF88BDEE54();
							}
							iLocal_66 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_66 || iLocal_67)
		{
			bVar0 = true;
		}
	}
	else if (iLocal_66 || iLocal_67)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iLocal_72 = unk_0xFD34717937104F1C();
		if (unk_0x4C9BACA8D249CB13())
		{
			iLocal_73 = unk_0xFFCC7EBF88BDEE54();
		}
		iLocal_66 = 0;
		iLocal_67 = 0;
	}
}

bool func_83(int iParam0)
{
	return (Global_105155 && iParam0) != 0;
}

int func_84()
{
	func_85();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_85()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_87(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_86(unk_0xA19140A5C42D8715());
			if (func_72(iVar0) && (!func_53(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_72(Global_106070.f_2355.f_539.f_4301))
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

int func_86(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_87(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_87(int iParam0)
{
	if (func_72(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_88()
{
	char* sVar0;
	int iVar1;
	
	if (iLocal_61)
	{
		if (iLocal_62 != iLocal_58)
		{
			iLocal_61 = 0;
			return;
		}
		sVar0 = "CHAR_DEFAULT";
		switch (iLocal_62)
		{
			case 0:
				sVar0 = "CHAR_MICHAEL";
				break;
			
			case 1:
				sVar0 = "CHAR_FRANKLIN";
				break;
			
			case 2:
				sVar0 = "CHAR_TREVOR";
				break;
			
			case 3:
				iVar1 = func_91(unk_0xD4E735F4B6A956AC());
				if (iVar1 == 0)
				{
					return;
				}
				else
				{
					sVar0 = unk_0x18167C9C4C1E9195(iVar1);
				}
				break;
		}
		unk_0x59FF6261546DDD52("PS_UPDATE");
		unk_0xCDA87E1DA52C8C9D(iLocal_65);
		unk_0x0F148B4F79471309(func_90(iLocal_63), func_89(iLocal_63), iLocal_64, (iLocal_65 - iLocal_64), 0, sVar0, sVar0);
		iLocal_82 = 1;
		iLocal_83 = unk_0xFD34717937104F1C() + 5000;
		if (unk_0x4C9BACA8D249CB13())
		{
			iLocal_84 = unk_0x8039F92D4B9C6B71(unk_0xFFCC7EBF88BDEE54(), 5000);
		}
		iLocal_61 = 0;
	}
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 23;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 24;
			break;
		
		case 2:
			return 25;
			break;
		
		case 4:
			return 14;
			break;
		
		case 5:
			return 27;
			break;
		
		case 6:
			return 17;
			break;
		
		case 7:
			return 28;
			break;
	}
	return -1;
}

char* func_90(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PSF_SPEC_AB";
			break;
		
		case 1:
			return "PSF_STAMINA";
			break;
		
		case 3:
			return "PSF_LUNG";
			break;
		
		case 2:
			return "PSF_STRENGTH";
			break;
		
		case 4:
			return "PSF_DRIVING";
			break;
		
		case 5:
			return "PSF_FLYING";
			break;
		
		case 6:
			return "PSF_SHOOTING";
			break;
		
		case 7:
			return "PSF_STEALTH";
			break;
	}
	return "ERROR";
}

int func_91(int iParam0)
{
	int iVar0;
	
	iVar0 = func_94(iParam0);
	if (iVar0 == -1)
	{
		func_92(iParam0, 1);
		return 0;
	}
	Global_1379953[iVar0 /*5*/].f_4 = 1;
	return Global_1379953[iVar0 /*5*/].f_2;
}

void func_92(int iParam0, bool bParam1)
{
	if (!func_19(iParam0, 0, 1))
	{
		return;
	}
	if (func_94(iParam0) != -1)
	{
		return;
	}
	if (Global_1380116)
	{
		if (iParam0 == Global_1380116.f_1)
		{
			return;
		}
	}
	if (func_93(iParam0))
	{
		return;
	}
	if (Global_1380154 >= 32)
	{
		return;
	}
	Global_1380121[Global_1380154] = iParam0;
	Global_1380154++;
	if (bParam1)
	{
	}
}

int func_93(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1380154)
	{
		if (Global_1380121[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_94(int iParam0)
{
	int iVar0;
	
	if (!func_19(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1380114 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1380114)
	{
		if (Global_1379953[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x07D08EE9B44B4EE9(Global_1379953[iVar0 /*5*/].f_2) && unk_0x2C58CFA8E806E25E(Global_1379953[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_95(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_95(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1380114)
	{
		return;
	}
	if (unk_0x07D08EE9B44B4EE9(Global_1379953[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1379953[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0x18167C9C4C1E9195(Global_1379953[iParam0 /*5*/].f_2), 64);
			unk_0x422B7FAC2AC425AD(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0xAAA14DE52F34B110(Global_1379953[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1380114)
	{
		Global_1379953[iVar2 /*5*/] = { Global_1379953[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_96(&(Global_1379953[iVar2 /*5*/]));
	Global_1380114 = (Global_1380114 - 1);
}

void func_96(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_11();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x4C9BACA8D249CB13())
	{
		uParam0->f_3 = unk_0xFFCC7EBF88BDEE54();
	}
}

void func_97()
{
	float fVar0;
	int iVar1;
	
	if (unk_0x82E5E553C73F586B() != 1)
	{
		return;
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		if (!func_101(unk_0xD4E735F4B6A956AC()))
		{
			return;
		}
		if (func_100() != 0)
		{
			return;
		}
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		if (func_100() == 0)
		{
			iLocal_53 = 2;
		}
	}
	else
	{
		iLocal_53 = 0;
	}
	if (!func_99())
	{
		func_98();
	}
	iLocal_55 = 0;
	iLocal_56 = 0;
	if (unk_0x4C9BACA8D249CB13())
	{
		iLocal_57 = unk_0xFFCC7EBF88BDEE54();
	}
	iLocal_72 = unk_0xFD34717937104F1C();
	if (unk_0x4C9BACA8D249CB13())
	{
		iLocal_73 = unk_0xFFCC7EBF88BDEE54();
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		if (!unk_0x05EFB6A616B6FADE(Global_2097152[func_80() /*12745*/].f_8178.f_1273, 2))
		{
			fVar0 = (to_float(func_69(192, -1, 0)) / 20f);
			iVar1 = floor(fVar0);
			iVar1 = func_68(iVar1, 0, 100);
			func_79(3, 2, iVar1);
			unk_0x2BCFB39E86340DAA(&(Global_2097152[func_80() /*12745*/].f_8178.f_1273), 2);
		}
	}
	bLocal_59 = true;
	iLocal_54 = 1;
}

void func_98()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	if (unk_0x4C9BACA8D249CB13())
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iVar0 != 0)
			{
				func_70(3, iVar0, &uVar1, &iVar2);
				func_54(iVar2, func_52(3, iVar0, -1), -1, 1, 0);
			}
			iVar0++;
		}
		func_4(0, 1, -1, 1);
		Global_90609 = 1;
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			iVar4 = 0;
			while (iVar4 < 8)
			{
				if (iVar4 != 0)
				{
					func_70(iVar3, iVar4, &iVar5, &uVar6);
					unk_0x93180BE33E7149EF(iVar5, func_52(iVar3, iVar4, -1), 1);
				}
				iVar4++;
			}
			iVar3++;
		}
		Global_106070.f_2355.f_539.f_2367[0] = func_52(0, 0, -1);
		Global_106070.f_2355.f_539.f_2367[1] = func_52(1, 0, -1);
		Global_106070.f_2355.f_539.f_2367[2] = func_52(2, 0, -1);
		Global_106070.f_2355.f_539.f_2334 = 1;
		Global_90609 = 1;
	}
}

int func_99()
{
	if (unk_0x4C9BACA8D249CB13())
	{
		return 1;
	}
	return Global_106070.f_2355.f_539.f_2334;
}

int func_100()
{
	return Global_25459;
}

int func_101(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x05EFB6A616B6FADE(Global_2437022.f_1, iParam0);
	}
	return 1;
}

void func_102()
{
	if (iLocal_54 != 0 && iLocal_53 != 3)
	{
		if (iLocal_53 == 0)
		{
			if (unk_0x4C9BACA8D249CB13())
			{
				iLocal_53 = 3;
			}
			if (!func_99())
			{
				iLocal_53 = 3;
			}
		}
		else if (iLocal_53 == 2)
		{
			if ((!unk_0x4C9BACA8D249CB13() || !func_101(unk_0xD4E735F4B6A956AC())) || func_100() != 0)
			{
				iLocal_53 = 3;
			}
		}
		if (iLocal_53 == 3)
		{
			iLocal_54 = 2;
		}
	}
}

