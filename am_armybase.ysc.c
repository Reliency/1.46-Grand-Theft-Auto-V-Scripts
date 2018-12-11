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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 10;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 2;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 8;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	float fLocal_96 = 0f;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	vector3 vLocal_112 = { 0f, 0f, 0f };
	struct<4> Local_113 = { 2, 0, 0, 3 } ;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 2;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 2;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	struct<8> Local_137[32];
	struct<184> Local_138 = { 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_139 = 0;
	bool bLocal_140 = 0;
	bool bLocal_141 = 0;
	bool bLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	struct<21> Local_152 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_96 = ((0.05f + 0.275f) - 0.01f);
	vLocal_112 = { -2357.12f, 3250.68f, 106.04f };
	iLocal_147 = -1;
	if (unk_0x4C9BACA8D249CB13())
	{
		func_174(ScriptParam_152);
	}
	else
	{
		func_171();
	}
	while (true)
	{
		func_170();
		func_162();
		if (func_152() || unk_0xEB97F9F181CDFD2C())
		{
			func_171();
		}
		if (unk_0x4C9BACA8D249CB13())
		{
			if ((func_146() && !Global_262145.f_21335) && !unk_0xD8B89B387D170E27())
			{
				func_141();
			}
			if (func_37())
			{
				func_171();
			}
			if (func_34(unk_0xD4E735F4B6A956AC()))
			{
				if (!unk_0x05EFB6A616B6FADE(Local_138.f_182, 3))
				{
					unk_0x2BCFB39E86340DAA(&(Local_138.f_182), 3);
				}
			}
			if ((((((((!Global_1573964 && !func_33(2)) && !func_30(unk_0xD4E735F4B6A956AC(), 0)) && !unk_0x47C3DC461C758C29()) && unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC())) && !func_28(unk_0xD4E735F4B6A956AC())) && !func_26(func_27(unk_0xD4E735F4B6A956AC()))) && !func_24(unk_0xD4E735F4B6A956AC(), 146)) && !func_20(unk_0xD4E735F4B6A956AC()))
			{
				if (func_19(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), 3, 1000, 0) || func_18(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), 1000))
				{
					if (!unk_0x05EFB6A616B6FADE(Global_2524719.f_4542, 0))
					{
						if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
						{
							if (!func_146())
							{
								func_17();
								if (unk_0xA22CC9D85ECBCC81(unk_0xA19140A5C42D8715()) || unk_0x5BFF0F72CC04E4DA(unk_0xA19140A5C42D8715()))
								{
									if (func_19(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), 3, 0, 0) || func_18(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), 0))
									{
										if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) < 4)
										{
											unk_0x920EAF82B3E570B4(unk_0xD4E735F4B6A956AC(), 36, (unk_0x1105C926E38D2066(4) - unk_0x1105C926E38D2066(unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()))));
										}
										else
										{
											unk_0x9651B65D4FBD4CE3(unk_0xD4E735F4B6A956AC());
										}
									}
									else if (!func_16(&(Local_138.f_3)))
									{
										func_13(&(Local_138.f_3));
									}
									else if (func_10(&(Local_138.f_3)) > 20f || Local_138.f_177)
									{
										if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) < 4)
										{
											unk_0x920EAF82B3E570B4(unk_0xD4E735F4B6A956AC(), 36, (unk_0x1105C926E38D2066(4) - unk_0x1105C926E38D2066(unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()))));
										}
										else
										{
											unk_0x9651B65D4FBD4CE3(unk_0xD4E735F4B6A956AC());
										}
									}
								}
								else if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) < 4)
								{
									unk_0x920EAF82B3E570B4(unk_0xD4E735F4B6A956AC(), 36, (unk_0x1105C926E38D2066(4) - unk_0x1105C926E38D2066(unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()))));
								}
								else
								{
									unk_0x9651B65D4FBD4CE3(unk_0xD4E735F4B6A956AC());
								}
							}
							else
							{
								if (Global_2524719.f_6222)
								{
									bLocal_140 = false;
									Global_2524719.f_6222 = 0;
								}
								if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 0 && !iLocal_144)
								{
									iLocal_144 = 1;
								}
								if (Global_262145.f_21324 && !func_8(unk_0xD4E735F4B6A956AC()))
								{
									if ((!bLocal_140 && unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) != 0) && iLocal_144)
									{
										unk_0xDEE4574BA71257AB(unk_0xD4E735F4B6A956AC());
										unk_0x9BB7BCDF2AC2D6F9(0);
										iLocal_143 = 1;
									}
									if (func_2() && !bLocal_140)
									{
										bLocal_140 = true;
										unk_0x9BB7BCDF2AC2D6F9(5);
									}
								}
								if (func_2() && !bLocal_140)
								{
									bLocal_140 = true;
								}
								if (bLocal_140)
								{
									if (bLocal_141)
									{
										if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) < 2)
										{
											unk_0x920EAF82B3E570B4(unk_0xD4E735F4B6A956AC(), 36, (unk_0x1105C926E38D2066(2) - unk_0x1105C926E38D2066(unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()))));
										}
										else
										{
											unk_0x9651B65D4FBD4CE3(unk_0xD4E735F4B6A956AC());
										}
									}
									else if (bLocal_142)
									{
										if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) < 3)
										{
											unk_0x920EAF82B3E570B4(unk_0xD4E735F4B6A956AC(), 36, (unk_0x1105C926E38D2066(3) - unk_0x1105C926E38D2066(unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()))));
										}
										else
										{
											unk_0x9651B65D4FBD4CE3(unk_0xD4E735F4B6A956AC());
										}
									}
									else if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) < Global_262145.f_21261)
									{
										unk_0x920EAF82B3E570B4(unk_0xD4E735F4B6A956AC(), 36, (unk_0x1105C926E38D2066(Global_262145.f_21261) - unk_0x1105C926E38D2066(unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()))));
									}
									else
									{
										unk_0x9651B65D4FBD4CE3(unk_0xD4E735F4B6A956AC());
									}
								}
							}
						}
						else
						{
							if (func_16(&(Local_138.f_3)))
							{
								func_1(&(Local_138.f_3));
							}
							if (Local_138.f_177)
							{
								Local_138.f_177 = 0;
							}
							func_17();
						}
					}
					else
					{
						if (!Local_138.f_177)
						{
							Local_138.f_177 = 1;
						}
						func_17();
					}
				}
				else
				{
					if (Local_138.f_177)
					{
						Local_138.f_177 = 0;
					}
					func_17();
				}
			}
			else
			{
				func_17();
			}
		}
		else
		{
			func_171();
		}
	}
}

void func_1(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_2()
{
	int iVar0;
	
	if (func_19(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), 3, 1000, 0) || func_18(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), 1000))
	{
		if (Global_262145.f_21255)
		{
			return 0;
		}
		if (((unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -2346.975f, 3259.757f, 31.81074f, -2349.507f, 3261.232f, 33.81074f, 9.5625f, 0, 1, 0) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -2054.865f, 3240.977f, 30.51001f, -2056.552f, 3237.846f, 32.50156f, 4.0625f, 0, 1, 0)) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -1792.908f, 3091.104f, 31.81257f, -1812.707f, 3102.736f, 39.46682f, 18.187f, 0, 1, 0)) || func_7(unk_0xD4E735F4B6A956AC()))
		{
			bLocal_141 = false;
			bLocal_142 = false;
			return 1;
		}
		if (Global_262145.f_21262)
		{
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
				if (unk_0x36167F9370DCE78E(iVar0))
				{
					if (func_6(iVar0))
					{
						if ((!func_5(iVar0, 1) && !func_4(iVar0)) && !func_3(iVar0))
						{
							bLocal_141 = true;
							bLocal_142 = false;
							return 1;
						}
					}
				}
			}
		}
		else if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			if (unk_0x36167F9370DCE78E(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)))
			{
				if ((!func_5(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 1) && !func_4(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0))) && !func_3(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)))
				{
					bLocal_141 = true;
					bLocal_142 = false;
					return 1;
				}
			}
		}
		if (Global_2524719.f_6220 || Global_2524719.f_6221)
		{
			if (Global_2524719.f_6221)
			{
				bLocal_141 = false;
				bLocal_142 = true;
			}
			else
			{
				bLocal_141 = true;
				bLocal_142 = false;
			}
			Global_2524719.f_6220 = 0;
			Global_2524719.f_6221 = 0;
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		if (unk_0xDE26AC7E7C308E75("MPBitset", 3) && unk_0xAEAF59799C2F26E4(iParam0, "MPBitset"))
		{
			iVar0 = unk_0xBB4F5216F3FCA8EA(iParam0, "MPBitset");
			if (unk_0x05EFB6A616B6FADE(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_4(int iParam0)
{
	if ((unk_0xDE26AC7E7C308E75("CreatedByPegasus", 2) && unk_0xAEAF59799C2F26E4(iParam0, "CreatedByPegasus")) && unk_0x13AF6A38CAD2D5DD(iParam0, "CreatedByPegasus"))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1)
{
	if (Global_71205)
	{
		if (unk_0xDC5D81351D6A4DDB(iParam0) && (!bParam1 || unk_0x1095F403F52B42E1(iParam0, 0)))
		{
			if (unk_0xAEAF59799C2F26E4(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x8F474E419F56E48D(iParam0);
	switch (iVar0)
	{
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("barracks3"):
		case joaat("besra"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("cargobob"):
		case joaat("crusader"):
		case 1938952078:
		case joaat("lazer"):
		case joaat("rhino"):
		case joaat("titan"):
			return 1;
		
		default:
	}
	return 0;
}

int func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xDA3A4E46D189F555(unk_0xEE978C39384D834F(iParam0));
	iVar1 = unk_0xB68EB57358F46F86(-2346.975f, 3259.757f, 31.81074f, "v_tower");
	if (unk_0x893915B076B1DDF7(iVar0) && unk_0x893915B076B1DDF7(iVar1))
	{
		if ((iVar0 == iVar1 && !unk_0x54F6F5A823224519(unk_0xEE978C39384D834F(iParam0), -2345.4f, 3270.1f, 31.81f, -2347.9f, 3265.8f, 34.811f, 8.25f, 0, 1, 0)) && !unk_0x54F6F5A823224519(unk_0xEE978C39384D834F(iParam0), -2349.3f, 3266.7f, 31.81f, -2350f, 3265.5f, 34.811f, 5.15f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_8(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_9(iParam0, 9);
	}
	return 0;
}

bool func_9(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_11.f_4, iParam1);
}

float func_10(int iParam0)
{
	if (func_16(iParam0))
	{
		if (func_12(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_11(unk_0x05EFB6A616B6FADE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_11(bool bParam0)
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

bool func_12(var uParam0)
{
	return unk_0x05EFB6A616B6FADE(*uParam0, 2);
}

void func_13(int iParam0)
{
	if (!func_16(iParam0))
	{
		func_14(iParam0);
	}
}

void func_14(int iParam0)
{
	func_15(iParam0, 0f);
}

void func_15(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_11(unk_0x05EFB6A616B6FADE(*iParam0, 4)) - fParam1);
	unk_0x2BCFB39E86340DAA(iParam0, 1);
	unk_0xFA57C719261AA55D(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_16(var uParam0)
{
	return unk_0x05EFB6A616B6FADE(*uParam0, 1);
}

void func_17()
{
	if (iLocal_143)
	{
		unk_0x9BB7BCDF2AC2D6F9(5);
	}
	Global_2524719.f_6220 = 0;
	Global_2524719.f_6221 = 0;
	iLocal_143 = 0;
	bLocal_140 = false;
	bLocal_141 = false;
	iLocal_144 = 0;
}

int func_18(vector3 vParam0, int iParam1)
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	vVar0[0 /*3*/] = { -1877.436f, 2783.151f, 31.80618f };
	vVar1[0 /*3*/] = { -1797.873f, 2924.37f, (307.1106f + IntToFloat(iParam1)) };
	fVar2[0] = 88f;
	vVar0[1 /*3*/] = { -1761.116f, 2834.651f, 31.80622f };
	vVar1[1 /*3*/] = { -1720.887f, 2906.419f, (281.8062f + IntToFloat(iParam1)) };
	fVar2[1] = 88f;
	vVar0[2 /*3*/] = { -1761.493f, 2817.68f, 32.37125f };
	vVar1[2 /*3*/] = { -1769.704f, 2913.734f, (281.8066f + IntToFloat(iParam1)) };
	fVar2[2] = 88f;
	vVar0[3 /*3*/] = { -1879.297f, 2772.653f, 29.57795f };
	vVar1[3 /*3*/] = { -1864.521f, 2825.472f, (281.8062f + IntToFloat(iParam1)) };
	fVar2[3] = 88f;
	vVar0[4 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	vVar1[4 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam1)) };
	fVar2[4] = 9f;
	vVar0[5 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	vVar1[5 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam1)) };
	fVar2[5] = 9.5f;
	vVar0[6 /*3*/] = { -2807.397f, 3264.226f, 29.92764f };
	vVar1[6 /*3*/] = { -2879.805f, 3309.01f, (37.57864f + IntToFloat(iParam1)) };
	fVar2[6] = 9.5f;
	vVar0[7 /*3*/] = { -2808.236f, 3264.634f, 29.92764f };
	vVar1[7 /*3*/] = { -2747.55f, 3187.8f, (37.45682f + IntToFloat(iParam1)) };
	fVar2[7] = 9.5f;
	vVar0[8 /*3*/] = { -2530.996f, 3064.151f, 29.71081f };
	vVar1[8 /*3*/] = { -2748.557f, 3189.939f, (37.45682f + IntToFloat(iParam1)) };
	fVar2[8] = 9.5f;
	vVar0[9 /*3*/] = { -2533.902f, 3062.491f, 29.70715f };
	vVar1[9 /*3*/] = { -2520.674f, 2996.817f, (37.45715f + IntToFloat(iParam1)) };
	fVar2[9] = 9.5f;
	vVar0[10 /*3*/] = { -2500.716f, 2927.103f, 29.45663f };
	vVar1[10 /*3*/] = { -2445.696f, 2896.657f, (37.68009f + IntToFloat(iParam1)) };
	fVar2[10] = 9.5f;
	vVar0[11 /*3*/] = { -2020.543f, 2810.747f, 29.45658f };
	vVar1[11 /*3*/] = { -1927.949f, 2785.779f, (37.67057f + IntToFloat(iParam1)) };
	fVar2[11] = 9.5f;
	vVar0[12 /*3*/] = { -2261.899f, 3376.549f, 29.77859f };
	vVar1[12 /*3*/] = { -2141.067f, 3376.773f, (37.90019f + IntToFloat(iParam1)) };
	fVar2[12] = 9.5f;
	iVar3 = 13;
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0x0C4DF083566CCC1C(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

int func_19(vector3 vParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			vVar0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			vVar1[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0] = 171.25f;
			vVar0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			vVar1[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[1] = 132f;
			vVar0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			vVar1[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			vVar0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			vVar1[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			vVar0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			vVar1[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			vVar0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			vVar1[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185.5f;
			vVar0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			vVar1[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			vVar0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			vVar1[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193.5f;
			vVar0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			vVar1[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234.5f;
			vVar0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			vVar1[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[6] = 16f;
			vVar0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			vVar1[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			vVar0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			vVar1[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			vVar0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			vVar1[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30.75f;
			vVar0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			vVar1[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			vVar0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			vVar1[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29.25f;
			vVar0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			vVar1[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			vVar0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			vVar1[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			vVar0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			vVar1[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			vVar0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			vVar1[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			vVar0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			vVar1[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86.25f;
			vVar0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			vVar1[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150.5f;
			vVar0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			vVar1[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140.5f;
			vVar0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			vVar1[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			vVar0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			vVar1[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			vVar0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			vVar1[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248.75f;
			vVar0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			vVar1[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[9] = 128f;
			vVar0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			vVar1[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[10] = 127.25f;
			vVar0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			vVar1[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[11] = 16f;
			vVar0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			vVar1[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[12] = 214.25f;
			vVar0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			vVar1[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[13] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			vVar1[9 /*3*/].f_2 = (vVar1[9 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[10 /*3*/].f_2 = (vVar1[10 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[11 /*3*/].f_2 = (vVar1[11 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[12 /*3*/].f_2 = (vVar1[12 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[13 /*3*/].f_2 = (vVar1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			vVar0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			vVar1[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			vVar0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			vVar1[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88.5f;
			vVar0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			vVar1[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133.25f;
			vVar0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			vVar1[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104.5f;
			vVar0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			vVar1[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121.75f;
			vVar0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			vVar1[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84.5f;
			vVar0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			vVar1[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103.75f;
			vVar0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			vVar1[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104.25f;
			vVar0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			vVar1[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			vVar0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			vVar1[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51.25f;
			iVar3 = 10;
			break;
		
		case 5:
			vVar0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			vVar1[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45.75f;
			vVar0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			vVar1[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			vVar0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			vVar1[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81.5f;
			iVar3 = 3;
			break;
		
		case 6:
			vVar0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			vVar1[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			vVar0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			vVar1[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[1] = 170f;
			vVar0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			vVar1[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[2] = 12.5f;
			vVar0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			vVar1[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[3] = 9.75f;
			iVar3 = 4;
			break;
		
		case 7:
			vVar0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			vVar1[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			vVar0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			vVar1[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			vVar0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			vVar1[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			vVar0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			vVar1[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			vVar0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			vVar1[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0] = 7.75f;
			vVar0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			vVar1[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[1] = 14.75f;
			vVar0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			vVar1[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[2] = 31.5f;
			vVar0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			vVar1[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[3] = 30.5f;
			vVar0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			vVar1[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[4] = 6.75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0x0C4DF083566CCC1C(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

bool func_20(int iParam0)
{
	return func_21(func_22(iParam0));
}

int func_21(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_22(int iParam0)
{
	if (func_23(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_33;
	}
	return -1;
}

int func_23(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_33 != -1 || (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_24(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/] == iParam1)
	{
		return func_25(iParam0);
	}
	return 0;
}

int func_25(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_1625435[iVar0 /*560*/].f_1, 0);
	}
	return 0;
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_25(unk_0xD4E735F4B6A956AC()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_27(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1625435[iVar0 /*560*/];
	}
	return -1;
}

int func_28(int iParam0)
{
	if (func_30(iParam0, 0))
	{
		return 1;
	}
	if (func_29())
	{
		if (iParam0 == unk_0xD4E735F4B6A956AC())
		{
			return 1;
		}
	}
	if (unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_29()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

bool func_30(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_31(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589747[iParam0 /*790*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xC77FA683E9BB485B(iParam0))
		{
			bVar0 = unk_0xE46ECB9FD23D3264(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_31(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_32();
	}
	if (Global_1312837[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_32()
{
	return Global_1312736;
}

bool func_33(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1573963, iParam0);
}

int func_34(int iParam0)
{
	if (iParam0 != func_36() && func_35(iParam0, 1, 1))
	{
		return unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_309, 3);
	}
	return 0;
}

int func_35(int iParam0, bool bParam1, bool bParam2)
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

int func_36()
{
	return -1;
}

int func_37()
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x45F99485D7E1C29A())
	{
		if (func_120())
		{
			iVar0 = 1;
		}
	}
	if (func_38())
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_38()
{
	int iVar0;
	
	switch (Local_138.f_6)
	{
		case 0:
			func_119();
			if ((((((func_116(unk_0xD4E735F4B6A956AC(), 1) && func_115()) || func_22(unk_0xD4E735F4B6A956AC()) == 159) || func_22(unk_0xD4E735F4B6A956AC()) == 225) || func_22(unk_0xD4E735F4B6A956AC()) == 233) || func_27(unk_0xD4E735F4B6A956AC()) == 236) || Global_1574393)
			{
				unk_0xFC00A668AFC2126D(joaat("rhino"), 1);
			}
			func_113(&(Local_137[unk_0xD60943E3BE730BF0() /*8*/]), 1);
			Local_138.f_176 = 1;
			Local_138.f_6 = 1;
			break;
		
		case 1:
			if (func_112())
			{
				func_113(&(Local_137[unk_0xD60943E3BE730BF0() /*8*/]), 2);
				Local_138.f_6 = 2;
			}
			break;
		
		case 2:
			if (func_111(Local_113.f_20, 1))
			{
				Local_138.f_6 = 3;
			}
			break;
		
		case 3:
			if ((!func_116(unk_0xD4E735F4B6A956AC(), 1) && !func_115()) && !func_146())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_105(iVar0);
					iVar0++;
				}
			}
			if (unk_0x4C9BACA8D249CB13())
			{
				if ((((func_103() && !func_116(unk_0xD4E735F4B6A956AC(), 1)) && !func_115()) && !unk_0xD8B89B387D170E27()) && func_101(unk_0xD4E735F4B6A956AC()) != 6)
				{
					func_46();
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_39(iVar0);
				iVar0++;
			}
			if (((func_22(unk_0xD4E735F4B6A956AC()) == 225 || func_22(unk_0xD4E735F4B6A956AC()) == 233) || func_27(unk_0xD4E735F4B6A956AC()) == 236) || Global_1574393)
			{
				unk_0xFC00A668AFC2126D(joaat("rhino"), 1);
			}
			if (vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
			{
				Local_138.f_6 = 4;
			}
			break;
		
		case 4:
			if ((((((func_116(unk_0xD4E735F4B6A956AC(), 1) && func_115()) || func_22(unk_0xD4E735F4B6A956AC()) == 159) || func_22(unk_0xD4E735F4B6A956AC()) == 225) || func_22(unk_0xD4E735F4B6A956AC()) == 233) || func_27(unk_0xD4E735F4B6A956AC()) == 236) || Global_1574393)
			{
				unk_0xFC00A668AFC2126D(joaat("rhino"), 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (Local_113.f_3[iParam0 /*5*/].f_2 > 2 && unk_0xAABBF7FA3E338B30(Local_113.f_3[iParam0 /*5*/]))
	{
		if (unk_0x7112137033807390(unk_0xBEA1D935EBAA95F3(Local_113.f_3[iParam0 /*5*/]), 0))
		{
			if (unk_0xCE3CB618AFE55EFB(Local_138.f_172[iParam0]))
			{
				unk_0xE1623437A3194332(&(Local_138.f_172[iParam0]));
			}
		}
		else if (!unk_0xCE3CB618AFE55EFB(Local_138.f_172[iParam0]) && unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) >= 2)
		{
			Local_138.f_172[iParam0] = unk_0x6A15DD6A863D5E27(unk_0x1C3E3FC5D339FC8C(Local_113.f_3[iParam0 /*5*/]));
			unk_0x570128B7829A8EAA(Local_138.f_172[iParam0], 1);
		}
	}
	else if (unk_0xCE3CB618AFE55EFB(Local_138.f_172[iParam0]))
	{
		unk_0xE1623437A3194332(&(Local_138.f_172[iParam0]));
	}
	switch (Local_113.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (!func_45(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_4[iParam0], 16))
			{
				Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_4[iParam0] = 0;
				func_44(&(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_4[iParam0]), 16);
			}
			break;
		
		case 1:
			if (!func_45(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_4[iParam0], 1))
			{
				if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
				{
					if (unk_0xA22CC9D85ECBCC81(unk_0xA19140A5C42D8715()) || unk_0x5BFF0F72CC04E4DA(unk_0xA19140A5C42D8715()))
					{
						if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) >= 4)
						{
							if (func_19(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), 3, 500, 0))
							{
								func_44(&(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_4[iParam0]), 1);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_45(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_4[iParam0], 2))
			{
				if (func_43(iParam0))
				{
					iVar2 = unk_0xEE978C39384D834F(Local_113.f_3[iParam0 /*5*/].f_4);
					iVar0 = unk_0x8A5B683BACF7B78C(Local_113.f_3[iParam0 /*5*/].f_1);
					iVar1 = unk_0xBEA1D935EBAA95F3(Local_113.f_3[iParam0 /*5*/]);
					if (!unk_0x7112137033807390(iVar2, 0))
					{
						if (unk_0xA22CC9D85ECBCC81(iVar2))
						{
							iVar3 = unk_0xCAEB6CE71A2C7212(iVar2, 0);
							if ((!unk_0x7112137033807390(iVar0, 0) && !unk_0x7112137033807390(iVar1, 0)) && !unk_0x7112137033807390(iVar3, 0))
							{
								unk_0xC4AC94A41BB71F0C(iVar0, iVar1, iVar3, iVar2, unk_0xE2BBD32891C18569(iVar2, 1), 6, 70f, -1f, 30f, 500, 50, 1);
								unk_0xB69132EDCA2D8F7D(iVar0, joaat("vehicle_weapon_space_rocket"));
								unk_0x853127AB7582A765(iVar0, false);
							}
						}
					}
				}
				if (func_42(iParam0))
				{
					iVar0 = unk_0x8A5B683BACF7B78C(Local_113.f_3[iParam0 /*5*/].f_1);
					iVar2 = unk_0xEE978C39384D834F(Local_113.f_3[iParam0 /*5*/].f_4);
					if (!unk_0x7112137033807390(iVar2, 0))
					{
						if (unk_0xA22CC9D85ECBCC81(iVar2))
						{
							unk_0x84498788F7DEC33E(iVar0, iVar2, unk_0xE2BBD32891C18569(iVar2, 1));
						}
					}
				}
				if (func_41(iParam0, 6))
				{
					func_44(&(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_4[iParam0]), 2);
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			if (!func_45(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_4[iParam0], 8))
			{
				if (func_43(iParam0))
				{
					iVar0 = unk_0x8A5B683BACF7B78C(Local_113.f_3[iParam0 /*5*/].f_1);
					iVar1 = unk_0xBEA1D935EBAA95F3(Local_113.f_3[iParam0 /*5*/]);
					if (!unk_0x7112137033807390(iVar0, 0) && !unk_0x7112137033807390(iVar1, 0))
					{
						unk_0xC4AC94A41BB71F0C(iVar0, iVar1, 0, 0, -2076.374f, 3112.294f, 33.13584f, 9, 70f, -1f, 30f, 500, 50, 1);
					}
				}
				if (func_41(iParam0, 9))
				{
					func_44(&(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_4[iParam0]), 8);
				}
			}
			break;
		
		case 6:
			if (unk_0x83A1DA4E6C55E952(Local_113.f_3[iParam0 /*5*/]) || unk_0x83A1DA4E6C55E952(Local_113.f_3[iParam0 /*5*/].f_1))
			{
				if (!unk_0x317672E799676CA5(unk_0xE2BBD32891C18569(unk_0x1C3E3FC5D339FC8C(Local_113.f_3[iParam0 /*5*/]), 0), 10f) && !unk_0x779800B37716DAE8(unk_0xE2BBD32891C18569(unk_0x1C3E3FC5D339FC8C(Local_113.f_3[iParam0 /*5*/]), 0), 10f))
				{
					if (unk_0xAABBF7FA3E338B30(Local_113.f_3[iParam0 /*5*/].f_1) && unk_0xABF0452BE64AD290(Local_113.f_3[iParam0 /*5*/].f_1))
					{
						uVar4 = unk_0x1C3E3FC5D339FC8C(Local_113.f_3[iParam0 /*5*/].f_1);
						unk_0x901EB5F80E22EEBF(&uVar4);
					}
					if (unk_0xAABBF7FA3E338B30(Local_113.f_3[iParam0 /*5*/]) && unk_0xABF0452BE64AD290(Local_113.f_3[iParam0 /*5*/]))
					{
						uVar5 = unk_0x1C3E3FC5D339FC8C(Local_113.f_3[iParam0 /*5*/]);
						unk_0x901EB5F80E22EEBF(&uVar5);
					}
				}
			}
			else if (func_45(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_4[iParam0], 16))
			{
				func_40(&(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_4[iParam0]), 16);
			}
			break;
	}
}

void func_40(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_41(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xAABBF7FA3E338B30(Local_113.f_3[iParam0 /*5*/]))
	{
		return 1;
	}
	iVar0 = unk_0xBEA1D935EBAA95F3(Local_113.f_3[iParam0 /*5*/]);
	if (unk_0x7112137033807390(iVar0, 0))
	{
		return 1;
	}
	if (unk_0x885DF2160199F9B8(iVar0) != iParam1)
	{
		return 0;
	}
	return 1;
}

int func_42(int iParam0)
{
	int iVar0;
	
	if (!unk_0xAABBF7FA3E338B30(Local_113.f_3[iParam0 /*5*/].f_1))
	{
		return 0;
	}
	iVar0 = unk_0x8A5B683BACF7B78C(Local_113.f_3[iParam0 /*5*/].f_1);
	if (unk_0x7112137033807390(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0xB540EEBB14C48518(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_43(int iParam0)
{
	int iVar0;
	
	if (!unk_0xAABBF7FA3E338B30(Local_113.f_3[iParam0 /*5*/]))
	{
		return 0;
	}
	iVar0 = unk_0xBEA1D935EBAA95F3(Local_113.f_3[iParam0 /*5*/]);
	if (unk_0x7112137033807390(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0xB540EEBB14C48518(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_44(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_45(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_46()
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<6> Var3;
	
	func_100();
	func_95();
	vVar2 = { vLocal_112 };
	if (((func_19(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), 3, 1000, 0) || func_18(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), 1000)) || func_93(unk_0xA19140A5C42D8715())) && func_92(unk_0xA19140A5C42D8715()))
	{
		bVar0 = true;
	}
	else
	{
		Local_138.f_178 = 0;
	}
	if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		bVar1 = true;
	}
	else
	{
		Local_138.f_179 = 0;
	}
	if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0))
	{
		vVar2 = { -1592.1f, 2797.2f, 17.1f };
		Local_138.f_181 = 1;
	}
	else if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		vVar2 = { -2303.9f, 3388f, 31.3f };
		Local_138.f_181 = 2;
	}
	if (func_90(bVar0, bVar1))
	{
		func_88();
		if (!func_87())
		{
			Global_1573346 = 1;
			func_86(&(Local_138.f_7), 2);
			func_85(&(Local_138.f_7), 2);
			func_84(&(Local_138.f_7), 2, 0, "AIRMECH", 0, 1);
			func_83(&(Local_138.f_7), 2, vVar2);
			Global_15111.f_162 = { vVar2 };
			Var3 = { func_82() };
			if (!unk_0x429D45A6C6520026(&Var3))
			{
				if (func_65(&(Local_138.f_7), "SMGFZAU", &Var3, 7, 0, 0, 0))
				{
					func_47(bVar0, bVar1);
				}
			}
		}
	}
	else if (!func_87())
	{
		if (!unk_0x05EFB6A616B6FADE(Local_138.f_182, 2))
		{
			Global_1573346 = 0;
			func_86(&(Local_138.f_7), 2);
			func_85(&(Local_138.f_7), 2);
			unk_0x2BCFB39E86340DAA(&(Local_138.f_182), 2);
		}
	}
}

void func_47(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!func_62(16000, -1, -1))
		{
			func_61(16000, 1, -1, 1);
			if (Global_2524719.f_6227)
			{
				if (func_55())
				{
					func_53("AB_ENTRY_HT");
					Local_138.f_180 = 1;
				}
			}
			else if (func_55())
			{
				func_52("AB_ENTRY_HT", -1);
			}
		}
		else if (!func_62(16001, -1, -1))
		{
			func_61(16001, 1, -1, 1);
			if (Global_2524719.f_6227)
			{
				if (func_55())
				{
					func_53("AB_ENTRY_HT");
					Local_138.f_180 = 1;
				}
			}
			else if (func_55())
			{
				func_52("AB_ENTRY_HT", -1);
			}
		}
		Local_138.f_178 = 1;
	}
	else if (bParam1)
	{
		if (!func_62(15999, -1, -1))
		{
			func_61(15999, 1, -1, 1);
			if (Global_2524719.f_6227)
			{
				if (func_55())
				{
					func_53("AB_ENTRY_HT");
					Local_138.f_180 = 1;
				}
			}
			else if (func_55())
			{
				func_52("AB_ENTRY_HT", -1);
			}
		}
		else if (Local_138.f_181 == 1)
		{
			if (!func_62(16002, -1, -1))
			{
				func_61(16002, 1, -1, 1);
				if (Global_2524719.f_6227)
				{
					if (func_55())
					{
						func_53("AB_ENTRY_HT");
						Local_138.f_180 = 1;
					}
				}
				else if (func_55())
				{
					func_52("AB_ENTRY_HT", -1);
				}
			}
		}
		else if (Local_138.f_181 == 2)
		{
			if (func_49(18097, -1, -1) == 0)
			{
				func_48(18097, 1, -1, 1);
				if (Global_2524719.f_6227)
				{
					if (func_55())
					{
						func_53("AB_ENTRY_HT");
						Local_138.f_180 = 1;
					}
				}
				else if (func_55())
				{
					func_52("AB_ENTRY_HT", -1);
				}
			}
		}
		Local_138.f_179 = 1;
		Local_138.f_181 = 0;
	}
	if (unk_0x05EFB6A616B6FADE(Local_138.f_182, 2))
	{
		unk_0xFA57C719261AA55D(&(Local_138.f_182), 2);
	}
}

var func_48(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_32();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xB3BA69AF3BAB6907((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x255504F58AF9B890((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xB3BA69AF3BAB6907((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x255504F58AF9B890((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xB3BA69AF3BAB6907((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x255504F58AF9B890((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xB3BA69AF3BAB6907((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x255504F58AF9B890((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x931785B1D4E0FF39((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x255504F58AF9B890((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x931785B1D4E0FF39((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x255504F58AF9B890((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x255504F58AF9B890((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x255504F58AF9B890((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x255504F58AF9B890((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x255504F58AF9B890((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x255504F58AF9B890((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x255504F58AF9B890((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x255504F58AF9B890((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x255504F58AF9B890((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x255504F58AF9B890((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x255504F58AF9B890((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0x255504F58AF9B890((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0x255504F58AF9B890((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x255504F58AF9B890((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x13224BDDFB82DC6F((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x255504F58AF9B890((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x440E9EB086F84471(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_32();
	}
	iVar0 = 0;
	iVar1 = func_51(iParam0, iParam1);
	uVar2 = func_50(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x8107725D56824351(iVar1, &iVar0, uVar2, 8, iParam2))
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
		iParam1 = func_32();
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

void func_52(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, 1, iParam1);
}

void func_53(char* sParam0)
{
	if (unk_0xE06AA0996C4E4E03())
	{
		unk_0x135C61E339DABBAC(1);
	}
	if (!func_54(sParam0))
	{
		func_52(sParam0, -1);
	}
}

bool func_54(char* sParam0)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	return unk_0x3D94488A86ABB03F(0);
}

int func_55()
{
	if (func_58(unk_0xD4E735F4B6A956AC()) && !func_56(unk_0xD4E735F4B6A956AC(), 0))
	{
		return 1;
	}
	return 0;
}

bool func_56(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_57(iParam0))
		{
			return 0;
		}
	}
	return Global_1625435[iParam0 /*560*/].f_11 != func_36();
}

int func_57(int iParam0)
{
	if (iParam0 != func_36())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_36())
		{
			return Global_1625435[iParam0 /*560*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_58(int iParam0)
{
	int iVar0;
	
	if (func_60(iParam0))
	{
		iVar0 = func_59(iParam0);
		if ((iVar0 == 3 || iVar0 == 4) || iVar0 == 5)
		{
			return 1;
		}
	}
	return 0;
}

int func_59(int iParam0)
{
	if (iParam0 != func_36())
	{
		return Global_1589747[iParam0 /*790*/].f_273.f_255;
	}
	return 0;
}

int func_60(int iParam0)
{
	if (iParam0 != func_36())
	{
		return Global_1589747[iParam0 /*790*/].f_273.f_255 != 0;
	}
	return 0;
}

int func_61(int iParam0, int iParam1, int iParam2, int iParam3)
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	if (iParam2 == -1)
	{
		iParam2 = func_32();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xF84B918DCDA549C0((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x12FA763CEA4960B5((iParam0 - 0)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xF84B918DCDA549C0((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x12FA763CEA4960B5((iParam0 - 192)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xF84B918DCDA549C0((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x12FA763CEA4960B5((iParam0 - 513)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xF84B918DCDA549C0((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x12FA763CEA4960B5((iParam0 - 705)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x7D93C2914375D70B((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x12FA763CEA4960B5((iParam0 - 3111)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x7D93C2914375D70B((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x12FA763CEA4960B5((iParam0 - 2919)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0xD7C999E88C211597((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x12FA763CEA4960B5((iParam0 - 4207)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0xD7C999E88C211597((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x12FA763CEA4960B5((iParam0 - 4335)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0xD7C999E88C211597((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x12FA763CEA4960B5((iParam0 - 6029)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0xD7C999E88C211597((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x12FA763CEA4960B5((iParam0 - 7385)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0xD7C999E88C211597((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x12FA763CEA4960B5((iParam0 - 7321)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0xD7C999E88C211597((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x12FA763CEA4960B5((iParam0 - 9361)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0xD7C999E88C211597((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x12FA763CEA4960B5((iParam0 - 15369)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0xD7C999E88C211597((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x12FA763CEA4960B5((iParam0 - 15562)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0xD7C999E88C211597((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x12FA763CEA4960B5((iParam0 - 15946)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0xD7C999E88C211597((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x12FA763CEA4960B5((iParam0 - 18098)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0xD7C999E88C211597((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x12FA763CEA4960B5((iParam0 - 22066)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0xD7C999E88C211597((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x12FA763CEA4960B5((iParam0 - 24962)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar19, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_62(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_32();
	}
	iVar1 = func_64(iParam0, iParam1);
	uVar2 = func_63(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x07EEB31CF063DAB7(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_63(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x12FA763CEA4960B5((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x12FA763CEA4960B5((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x12FA763CEA4960B5((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x12FA763CEA4960B5((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x12FA763CEA4960B5((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x12FA763CEA4960B5((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x12FA763CEA4960B5((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x12FA763CEA4960B5((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x12FA763CEA4960B5((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x12FA763CEA4960B5((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x12FA763CEA4960B5((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x12FA763CEA4960B5((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x12FA763CEA4960B5((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x12FA763CEA4960B5((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x12FA763CEA4960B5((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x12FA763CEA4960B5((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x12FA763CEA4960B5((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x12FA763CEA4960B5((iParam0 - 24962)) * 64);
	}
	return iVar0;
}

int func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_32();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x7D93C2914375D70B((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x7D93C2914375D70B((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	return iVar0;
}

bool func_65(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_81(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_66(sParam2, iParam3, 0);
}

int func_66(char* sParam0, int iParam1, bool bParam2)
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
					func_80();
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
		if (func_79(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_78();
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
				func_71();
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
				if (func_70())
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
			if (func_69())
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
			func_68();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_67();
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
		func_80();
	}
	return 0;
}

void func_67()
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

void func_68()
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

int func_69()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_70()
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

void func_71()
{
	if (func_77(14))
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
		Global_14513 = func_72();
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

var func_72()
{
	func_73();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_73()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_76(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_75(unk_0xA19140A5C42D8715());
			if (func_74(iVar0) && (!func_77(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_74(Global_106070.f_2355.f_539.f_4301))
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

bool func_74(int iParam0)
{
	return iParam0 < 3;
}

int func_75(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_76(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_76(int iParam0)
{
	if (func_74(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_77(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_78()
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

bool func_79(int iParam0, int iParam1)
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

void func_80()
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

void func_81(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15276 = { *uParam0 };
	Global_1699 = iParam1;
	StringCopy(&Global_15892, sParam2, 24);
	Global_16811 = uParam5;
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

struct<6> func_82()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "", 24);
	if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		if (!func_62(15999, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_WLK1ST", 24);
		}
		else if (!func_62(16002, -1, -1) || func_49(18097, -1, -1) == 0)
		{
			StringCopy(&Var0, "SMGFZ_WLKENT", 24);
		}
	}
	else if (((func_19(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), 3, 1000, 0) || func_18(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), 1000)) || func_93(unk_0xA19140A5C42D8715())) && func_92(unk_0xA19140A5C42D8715()))
	{
		if (!func_62(16000, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLY1ST", 24);
		}
		else if (!func_62(16001, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLYENT", 24);
		}
	}
	return Var0;
}

void func_83(var uParam0, int iParam1, vector3 vParam2)
{
	uParam0->f_161 = iParam1;
	uParam0->f_162 = { vParam2 };
}

void func_84(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_71205)
	{
		if (!unk_0x4915F4759304D5CF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xB583A7C3FEE69710(iParam2, 0);
			}
			else
			{
				unk_0xB583A7C3FEE69710(iParam2, 1);
			}
		}
		if (!unk_0x4915F4759304D5CF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x9D01B1015AD5A3C8(iParam2, 0);
			}
			else
			{
				unk_0x9D01B1015AD5A3C8(iParam2, 1);
			}
		}
	}
}

void func_85(var uParam0, int iParam1)
{
	uParam0->f_161 = -99;
	uParam0->f_162 = { 0f, 0f, 0f };
	if (iParam1 < 0)
	{
	}
}

void func_86(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_87()
{
	if (Global_15822 != 0 || unk_0x904275961B875DEB())
	{
		return 1;
	}
	return 0;
}

void func_88()
{
	Global_14688 = 0;
	func_89();
}

void func_89()
{
	if (unk_0x904275961B875DEB())
	{
		unk_0xB4E5B1A6FE923ECB();
		Global_16833 = 0;
		unk_0xA8B97F91CBDE376C(true);
		Global_15822 = 6;
		return;
	}
}

int func_90(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!Local_138.f_178)
		{
			if (unk_0x05EFB6A616B6FADE(Local_138.f_182, 1))
			{
				if (unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
				{
					if (!func_62(16000, -1, -1) || !func_62(16001, -1, -1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (bParam1)
	{
		if (!Local_138.f_179)
		{
			if (unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()) && unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 0)
			{
				if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) || func_91())
				{
					if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0))
					{
						if (!func_62(15999, -1, -1) || !func_62(16002, -1, -1))
						{
							if (unk_0x552C823E1D2A019C(unk_0xA19140A5C42D8715()) >= -25f && unk_0x552C823E1D2A019C(unk_0xA19140A5C42D8715()) <= 125f)
							{
								return 1;
							}
						}
					}
					else if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
					{
						if (!func_62(15999, -1, -1) || func_49(18097, -1, -1) == 0)
						{
							if (unk_0x552C823E1D2A019C(unk_0xA19140A5C42D8715()) >= 160f && unk_0x552C823E1D2A019C(unk_0xA19140A5C42D8715()) <= 290f)
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_91()
{
	int iVar0;
	
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
		if (unk_0x36167F9370DCE78E(iVar0))
		{
			if (func_6(iVar0))
			{
				if (!func_5(iVar0, 1) && !func_4(iVar0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_92(int iParam0)
{
	if (unk_0xA22CC9D85ECBCC81(iParam0) || unk_0x5BFF0F72CC04E4DA(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_93(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0) && func_94(iParam0))
	{
		if ((unk_0x54F6F5A823224519(iParam0, -2013.3f, 2878.6f, 1000f, -2864.6f, 3357.6f, 31f, 400f, 0, 1, 0) || unk_0x54F6F5A823224519(iParam0, -1700f, 3150f, 1000f, -2039f, 3342f, 30f, 175f, 0, 1, 0)) || unk_0x54F6F5A823224519(iParam0, -1950f, 2786f, 1000f, -1856f, 3141f, 31f, 270f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_94(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (!unk_0x7112137033807390(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_95()
{
	if (Local_138.f_180)
	{
		if (!func_99(&(Local_138.f_183)))
		{
			func_98(&(Local_138.f_183), 0, 0);
		}
		else if (!func_97(&(Local_138.f_183), 17000, 0))
		{
			if (!func_54("AB_ENTRY_HT"))
			{
				func_52("AB_ENTRY_HT", -1);
			}
		}
		else if (func_97(&(Local_138.f_183), 17000, 0))
		{
			if (func_54("AB_ENTRY_HT"))
			{
				unk_0x135C61E339DABBAC(1);
			}
			func_96(&(Local_138.f_183));
			Local_138.f_180 = 0;
		}
	}
}

void func_96(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_97(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_98(uParam0, bParam2, 0);
	if (unk_0x4C9BACA8D249CB13() && !bParam2)
	{
		if (unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(unk_0xFD34717937104F1C(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_98(var uParam0, bool bParam1, bool bParam2)
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

bool func_99(var uParam0)
{
	return uParam0->f_1;
}

void func_100()
{
	if (unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
	{
		if ((func_19(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), 3, 1000, 0) || func_18(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), 1000)) || func_93(unk_0xA19140A5C42D8715()))
		{
			if (!unk_0x05EFB6A616B6FADE(Local_138.f_182, 0))
			{
				if ((((func_92(unk_0xA19140A5C42D8715()) && unk_0x26D28D230F871E8D(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0))) && unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 0) && func_91()) && !Global_1678529)
				{
					if (!unk_0x05EFB6A616B6FADE(Local_138.f_182, 1) && !unk_0x05EFB6A616B6FADE(Local_138.f_182, 3))
					{
						unk_0x2BCFB39E86340DAA(&(Local_138.f_182), 1);
					}
				}
				unk_0x2BCFB39E86340DAA(&(Local_138.f_182), 0);
			}
		}
		else
		{
			if (unk_0x05EFB6A616B6FADE(Local_138.f_182, 0))
			{
				unk_0xFA57C719261AA55D(&(Local_138.f_182), 0);
			}
			if (unk_0x05EFB6A616B6FADE(Local_138.f_182, 1))
			{
				unk_0xFA57C719261AA55D(&(Local_138.f_182), 1);
			}
			if (unk_0x05EFB6A616B6FADE(Local_138.f_182, 3))
			{
				unk_0xFA57C719261AA55D(&(Local_138.f_182), 3);
			}
			if (Global_1678529)
			{
				Global_1678529 = 0;
			}
		}
	}
}

int func_101(int iParam0)
{
	if (func_22(iParam0) == 233)
	{
		return func_102(iParam0);
	}
	return -1;
}

int func_102(int iParam0)
{
	if (func_23(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_176;
	}
	return -1;
}

int func_103()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_58(unk_0xD4E735F4B6A956AC()))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x1483A8AE554B8B2B(iVar0);
		if (func_35(iVar1, 0, 1))
		{
			if (iVar1 != unk_0xD4E735F4B6A956AC())
			{
				if (func_104(unk_0xEE978C39384D834F(unk_0xD4E735F4B6A956AC()), unk_0xEE978C39384D834F(iVar1)))
				{
					iVar2 = unk_0xCAEB6CE71A2C7212(unk_0xEE978C39384D834F(iVar1), 0);
					if (unk_0xB0D49A1F9F054602(iVar2, -1, 0) == unk_0xEE978C39384D834F(iVar1))
					{
						if (func_58(iVar1))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_104(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!unk_0x5D7DFE2058701942(iParam0, 0) || !unk_0x5D7DFE2058701942(iParam1, 0))
	{
		return 0;
	}
	return unk_0xCAEB6CE71A2C7212(iParam0, 0) == unk_0xCAEB6CE71A2C7212(iParam1, 0);
}

void func_105(int iParam0)
{
	int iVar0;
	
	if (!unk_0xAABBF7FA3E338B30(Local_113[iParam0]))
	{
		return;
	}
	iVar0 = unk_0x8A5B683BACF7B78C(Local_113[iParam0]);
	if (unk_0x7112137033807390(iVar0, 0))
	{
		return;
	}
	switch (Local_113.f_21[iParam0])
	{
		case 0:
			if (!func_45(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_1[iParam0], 64))
			{
				Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_1[iParam0] = 0;
				func_44(&(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_1[iParam0]), 64);
			}
			break;
		
		case 1:
			if (!func_45(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
				{
					if (vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), unk_0xE2BBD32891C18569(iVar0, 1)) <= 900f)
					{
						func_44(&(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 2:
			if (!func_45(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_1[iParam0], 2) && vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), unk_0xE2BBD32891C18569(iVar0, 1)) <= 900f)
			{
				func_84(&(Local_138.f_7), 4, iVar0, "ARMY_Guard01", 0, 1);
				func_110(&(Local_138.f_7), "ARMYAUD", "ARMY_WRN1", 12, 0, 0, 0);
				func_44(&(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_1[iParam0]), 2);
			}
			break;
		
		case 3:
			if (!func_45(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_1[iParam0], 4))
			{
				if (func_109(iParam0))
				{
					unk_0x9C24BCD3EFB3BF4C(iVar0, func_108(iParam0), -1, 0);
				}
				if (func_107(iParam0, 1630799643))
				{
					func_44(&(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_1[iParam0]), 4);
				}
			}
			break;
		
		case 4:
			if ((!func_45(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_1[iParam0], 8) && vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), unk_0xE2BBD32891C18569(iVar0, 1)) <= 900f) && unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) < 1)
			{
				if (!func_16(&Local_138))
				{
					func_13(&Local_138);
				}
				if (func_10(&Local_138) >= 7f)
				{
					func_44(&(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_1[iParam0]), 8);
					func_110(&(Local_138.f_7), "ARMYAUD", "ARMY_WRN1a", 12, 0, 0, 0);
				}
			}
			else if (func_16(&Local_138))
			{
				func_1(&Local_138);
			}
			if (!func_45(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_1[iParam0], 16))
			{
				if (func_106(iParam0) && vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), unk_0xE2BBD32891C18569(iVar0, 1)) <= 900f)
				{
					func_44(&(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_1[iParam0]), 16);
					if (!func_146())
					{
						unk_0x920EAF82B3E570B4(unk_0xD4E735F4B6A956AC(), 36, unk_0x1105C926E38D2066(4));
					}
					else
					{
						unk_0x920EAF82B3E570B4(unk_0xD4E735F4B6A956AC(), 36, unk_0x1105C926E38D2066(Global_262145.f_21261));
					}
				}
			}
			if (func_45(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
				{
					if (vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), unk_0xE2BBD32891C18569(iVar0, 1)) > 900f)
					{
						func_40(&(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 5:
			if (!func_45(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_1[iParam0], 16))
			{
				if (func_106(iParam0) && vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), unk_0xE2BBD32891C18569(iVar0, 1)) <= 900f)
				{
					func_44(&(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_1[iParam0]), 16);
					if (!func_146())
					{
						unk_0x920EAF82B3E570B4(unk_0xD4E735F4B6A956AC(), 36, (unk_0x1105C926E38D2066(4) - unk_0x1105C926E38D2066(unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()))));
					}
					else
					{
						unk_0x920EAF82B3E570B4(unk_0xD4E735F4B6A956AC(), 36, (unk_0x1105C926E38D2066(Global_262145.f_21261) - unk_0x1105C926E38D2066(unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()))));
					}
				}
			}
			if (func_45(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
				{
					if (vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), unk_0xE2BBD32891C18569(iVar0, 1)) > 900f)
					{
						func_40(&(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			if (!func_107(iParam0, 1630799643))
			{
				if (func_109(iParam0))
				{
					unk_0x9C24BCD3EFB3BF4C(iVar0, func_108(iParam0), -1, 0);
				}
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (func_45(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_1[iParam0], 4))
			{
				if (func_109(iParam0))
				{
					unk_0x9568B1B58F78FF36(iVar0);
				}
				if (!func_107(iParam0, 1435919172))
				{
					func_40(&(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_1[iParam0]), 4);
					func_40(&(Local_137[unk_0xD60943E3BE730BF0() /*8*/].f_1[iParam0]), 64);
				}
			}
			break;
	}
}

int func_106(int iParam0)
{
	int iVar0;
	
	if (!unk_0xAABBF7FA3E338B30(Local_113[iParam0]))
	{
		return 0;
	}
	iVar0 = unk_0x8A5B683BACF7B78C(Local_113[iParam0]);
	if (unk_0x7112137033807390(iVar0, 0))
	{
		return 0;
	}
	if (unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		return 0;
	}
	if (unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715()))
	{
		return 1;
	}
	if (unk_0x669ABFB25D991447(unk_0xD4E735F4B6A956AC(), iVar0))
	{
		return 1;
	}
	if (unk_0x7591AFB11E7EDDA0(unk_0xD4E735F4B6A956AC(), iVar0))
	{
		return 1;
	}
	if (vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), unk_0xE2BBD32891C18569(iVar0, 1)) <= 64f)
	{
		return 1;
	}
	return 0;
}

int func_107(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xAABBF7FA3E338B30(Local_113[iParam0]))
	{
		return 1;
	}
	iVar0 = unk_0x8A5B683BACF7B78C(Local_113[iParam0]);
	if (unk_0x7112137033807390(iVar0, 0))
	{
		return 1;
	}
	if (unk_0xF9D4EF1338E38AFB(iVar0, iParam1) != 1 && unk_0xF9D4EF1338E38AFB(iVar0, iParam1) != 0)
	{
		return 0;
	}
	return 1;
}

int func_108(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 1E+11f;
	iVar0 = 0;
	while (iVar0 < unk_0x48908CAFF1B58FF8())
	{
		if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(iVar0)))
		{
			iVar2 = unk_0xEE978C39384D834F(unk_0x9279C21787650C40(unk_0xDF1881EF65347257(iVar0)));
			if (!unk_0x7112137033807390(iVar2, 0))
			{
				fVar4 = vdist2(unk_0xE2BBD32891C18569(iVar2, 1), unk_0xE2BBD32891C18569(unk_0x1C3E3FC5D339FC8C(Local_113[iParam0]), 1));
				if (fVar4 < fVar3)
				{
					iVar1 = iVar2;
					fVar3 = fVar4;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_109(int iParam0)
{
	int iVar0;
	
	if (!unk_0xAABBF7FA3E338B30(Local_113[iParam0]))
	{
		return 0;
	}
	iVar0 = unk_0x8A5B683BACF7B78C(Local_113[iParam0]);
	if (unk_0x7112137033807390(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0xB540EEBB14C48518(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_110(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_81(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 1;
	return func_66(sParam2, iParam3, 0);
}

bool func_111(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_112()
{
	if (!unk_0x7FC99CCC73354033(joaat("s_m_y_marine_01")))
	{
		return 0;
	}
	if (!unk_0x7FC99CCC73354033(joaat("lazer")))
	{
		return 0;
	}
	if (!unk_0x7FC99CCC73354033(joaat("s_m_y_pilot_01")))
	{
		return 0;
	}
	return 1;
}

void func_113(var uParam0, int iParam1)
{
	func_114(uParam0, iParam1);
}

void func_114(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_115()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 0);
}

int func_116(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_117(iParam0))
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

bool func_117(int iParam0)
{
	return func_118(iParam0);
}

bool func_118(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_13.f_1, 0);
}

void func_119()
{
	unk_0xCACEBBBEAD8F262E(joaat("s_m_y_marine_01"));
	unk_0xCACEBBBEAD8F262E(joaat("lazer"));
	unk_0xCACEBBBEAD8F262E(joaat("s_m_y_pilot_01"));
}

int func_120()
{
	int iVar0;
	
	switch (Local_113.f_19)
	{
		case 0:
			if (func_140())
			{
				Local_113.f_19 = 1;
			}
			break;
		
		case 1:
			if (func_139())
			{
				Local_113.f_19 = 2;
			}
			break;
		
		case 2:
			if (((((func_116(unk_0xD4E735F4B6A956AC(), 1) || func_115()) || func_22(unk_0xD4E735F4B6A956AC()) == 225) || func_22(unk_0xD4E735F4B6A956AC()) == 233) || func_27(unk_0xD4E735F4B6A956AC()) == 236) || Global_1574393)
			{
				func_113(&(Local_113.f_20), 1);
				Local_113.f_19 = 3;
			}
			else if (func_137())
			{
				func_113(&(Local_113.f_20), 1);
				Local_113.f_19 = 3;
			}
			break;
		
		case 3:
			if (!func_116(unk_0xD4E735F4B6A956AC(), 1) && !func_115())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_134(iVar0);
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_123(iVar0);
					iVar0++;
				}
			}
			if (((func_22(unk_0xD4E735F4B6A956AC()) == 225 || func_22(unk_0xD4E735F4B6A956AC()) == 233) || func_27(unk_0xD4E735F4B6A956AC()) == 236) || Global_1574393)
			{
				func_122();
			}
			if (func_121())
			{
				Local_113.f_19 = 4;
			}
			break;
		
		case 4:
			func_122();
			return 1;
			break;
	}
	return 0;
}

int func_121()
{
	if (unk_0x76C363FF38E9EA1F() > 1)
	{
		return 0;
	}
	if (vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
	{
		return 1;
	}
	return 0;
}

void func_122()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xAABBF7FA3E338B30(Local_113[iVar0]))
		{
			iVar1 = unk_0x8A5B683BACF7B78C(Local_113[iVar0]);
			if (!unk_0x7112137033807390(iVar1, 0))
			{
				unk_0x7E4E83D33161D01A(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xAABBF7FA3E338B30(Local_113.f_3[iVar0 /*5*/].f_1))
		{
			iVar1 = unk_0x8A5B683BACF7B78C(Local_113.f_3[iVar0 /*5*/].f_1);
			if (!unk_0x7112137033807390(iVar1, 0))
			{
				unk_0x7E4E83D33161D01A(&iVar1);
			}
		}
		if (unk_0xAABBF7FA3E338B30(Local_113.f_3[iVar0 /*5*/]))
		{
			iVar2 = unk_0xBEA1D935EBAA95F3(Local_113.f_3[iVar0 /*5*/]);
			if (!unk_0x7112137033807390(iVar2, 0))
			{
				unk_0x792676988A48387F(&iVar2);
			}
		}
		iVar0++;
	}
}

void func_123(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (Local_113.f_3[iParam0 /*5*/].f_2 > 2)
	{
		if (unk_0xAABBF7FA3E338B30(Local_113.f_3[iParam0 /*5*/].f_1))
		{
			if (!unk_0x7112137033807390(unk_0x8A5B683BACF7B78C(Local_113.f_3[iParam0 /*5*/].f_1), 0))
			{
				iVar0 = unk_0x8A5B683BACF7B78C(Local_113.f_3[iParam0 /*5*/].f_1);
				vVar1 = { unk_0xE2BBD32891C18569(iVar0, 1) };
				if (vVar1.z <= -150f)
				{
					unk_0x7E4E83D33161D01A(&iVar0);
					if (unk_0xAABBF7FA3E338B30(Local_113.f_3[iParam0 /*5*/]))
					{
						if (!unk_0x7112137033807390(unk_0xBEA1D935EBAA95F3(Local_113.f_3[iParam0 /*5*/]), 0))
						{
							iVar2 = unk_0xBEA1D935EBAA95F3(Local_113.f_3[iParam0 /*5*/]);
							unk_0x792676988A48387F(&iVar2);
						}
					}
				}
			}
		}
	}
	switch (Local_113.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (func_133(iParam0, 16))
			{
				Local_113.f_3[iParam0 /*5*/].f_4 = -1;
				Local_113.f_3[iParam0 /*5*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (func_131(iParam0))
			{
				Local_113.f_3[iParam0 /*5*/].f_2 = 2;
			}
			break;
		
		case 2:
			vVar3 = { func_130(iParam0) };
			if (!func_129(vVar3))
			{
				if (!unk_0x779800B37716DAE8(vVar3, 20f) && !unk_0x317672E799676CA5(vVar3, 20f))
				{
					if (func_126(vVar3, unk_0x552C823E1D2A019C(unk_0xEE978C39384D834F(Local_113.f_3[iParam0 /*5*/].f_4)), iParam0))
					{
						Local_113.f_3[iParam0 /*5*/].f_2 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_133(iParam0, 2))
			{
				Local_113.f_3[iParam0 /*5*/].f_2 = 4;
			}
			break;
		
		case 4:
			iVar4 = unk_0xEE978C39384D834F(Local_113.f_3[iParam0 /*5*/].f_4);
			if (!unk_0xDC5D81351D6A4DDB(iVar4))
			{
				Local_113.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (unk_0x7112137033807390(iVar4, 0))
			{
				Local_113.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (unk_0xA22CC9D85ECBCC81(iVar4) || unk_0x5BFF0F72CC04E4DA(iVar4))
			{
				if (func_125(unk_0xCAEB6CE71A2C7212(iVar4, 0)))
				{
					Local_113.f_3[iParam0 /*5*/].f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (func_133(iParam0, 8))
			{
				Local_113.f_3[iParam0 /*5*/].f_2 = 6;
				Local_113.f_3[iParam0 /*5*/].f_4 = -1;
			}
			break;
		
		case 6:
			if (!func_124(iParam0, 16))
			{
				Local_113.f_3[iParam0 /*5*/].f_2 = 0;
			}
			if (func_131(iParam0))
			{
				Local_113.f_3[iParam0 /*5*/].f_2 = 3;
			}
			break;
	}
}

int func_124(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x48908CAFF1B58FF8())
	{
		if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(iVar0)))
		{
			if (func_45(Local_137[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_125(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (unk_0x7112137033807390(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x1095F403F52B42E1(iParam0, 0))
		{
			if (!unk_0x463E3A48A46C9195(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_126(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x45F99485D7E1C29A())
	{
		return 1;
	}
	iVar0 = 1;
	if (!unk_0xAABBF7FA3E338B30(Local_113.f_3[iParam2 /*5*/]))
	{
		if (!func_128(&(Local_113.f_3[iParam2 /*5*/]), joaat("lazer"), vParam0, fParam1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar0 = 0;
		}
		else
		{
			unk_0x37B223069072EA25(unk_0xBEA1D935EBAA95F3(Local_113.f_3[iParam2 /*5*/]), 3);
		}
	}
	if (unk_0xAABBF7FA3E338B30(Local_113.f_3[iParam2 /*5*/]))
	{
		if (!unk_0xAABBF7FA3E338B30(Local_113.f_3[iParam2 /*5*/].f_1))
		{
			if (!func_127(&(Local_113.f_3[iParam2 /*5*/].f_1), Local_113.f_3[iParam2 /*5*/], 29, joaat("s_m_y_pilot_01"), -1, 1, 1, 1))
			{
				iVar0 = 0;
			}
			else
			{
				unk_0xB69132EDCA2D8F7D(unk_0x8A5B683BACF7B78C(Local_113.f_3[iParam2 /*5*/].f_1), joaat("vehicle_weapon_space_rocket"));
				unk_0x853127AB7582A765(unk_0x8A5B683BACF7B78C(Local_113.f_3[iParam2 /*5*/].f_1), false);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_127(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x94D82D856BD4DE54(1))
	{
		return 0;
	}
	if (!unk_0x83A1DA4E6C55E952(uParam1))
	{
		return 0;
	}
	if (!unk_0x1095F403F52B42E1(unk_0xBEA1D935EBAA95F3(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xADF0D7F44D12DC49(unk_0x91A7C8CA5E332C03(unk_0xBEA1D935EBAA95F3(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x83A1DA4E6C55E952(*uParam0))
	{
		unk_0xEAF1F3E17588C851(unk_0x8A5B683BACF7B78C(*uParam0), iParam7);
		if (unk_0xCC1BBE3267AB0DC9(unk_0x8A5B683BACF7B78C(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x2F16A8714FE53E5C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_128(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x3F0E621C9C312804(iParam1))
	{
		return 0;
	}
	if (!unk_0xA495A83E4287FE76(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x01AF8CB960828C2B(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = unk_0x48CFBECB146FD1A1(iParam1, vParam2, fParam3, iParam5, iParam4, iParam12);
	if (unk_0xDC5D81351D6A4DDB(iVar1))
	{
		*uParam0 = unk_0xC48DA15CF8CAF4F9(iVar1);
		Global_2524719.f_6178 = iVar1;
		if (unk_0x83A1DA4E6C55E952(*uParam0))
		{
			if (bParam13)
			{
				unk_0x3D126A1799B1C84D(iVar1, 1);
			}
			unk_0xEAF1F3E17588C851(iVar1, iParam8);
			if (unk_0xCC1BBE3267AB0DC9(iVar1))
			{
				if (bParam6)
				{
					unk_0x2F16A8714FE53E5C(*uParam0, 1);
				}
				else
				{
					unk_0x2F16A8714FE53E5C(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0x9F5CBEB0A0ADA5A7(*uParam0, unk_0xD4E735F4B6A956AC(), 1);
				}
			}
			unk_0x42B5518F103DB03E(iVar1, bParam7);
			unk_0x1E0A3C6D89CE975D(iVar1, 1);
			if (bParam10)
			{
				unk_0xAEE3221D0EC483AD(iVar1);
				unk_0xBA75315E0F357DD3(iVar1, 5, 5, 1f);
			}
			return 1;
		}
	}
	return 0;
}

int func_129(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_130(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = unk_0xEE978C39384D834F(Local_113.f_3[iParam0 /*5*/].f_4);
	if (unk_0x7112137033807390(iVar0, 0))
	{
		return 0f, 0f, 0f;
	}
	vVar1 = { unk_0x2F230B37E9FFF23F(unk_0xE2BBD32891C18569(iVar0, 1), unk_0x552C823E1D2A019C(iVar0), 0f, -250f, (40f * to_float(iParam0))) };
	if (vVar1.z < 100f)
	{
		vVar1.z = 100f;
	}
	return vVar1;
}

int func_131(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x48908CAFF1B58FF8())
	{
		if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(iVar0)))
		{
			iVar1 = unk_0xEE978C39384D834F(unk_0x9279C21787650C40(unk_0xDF1881EF65347257(iVar0)));
			if (!func_132(unk_0x9279C21787650C40(unk_0xDF1881EF65347257(iVar0))))
			{
				if (unk_0xA22CC9D85ECBCC81(iVar1) || unk_0x5BFF0F72CC04E4DA(iVar1))
				{
					if (unk_0x91347D2A80F38492(unk_0x9279C21787650C40(unk_0xDF1881EF65347257(iVar0))) >= 4)
					{
						vVar2 = { unk_0xE2BBD32891C18569(iVar1, 0) };
						if (func_19(vVar2, 3, 1000, 0) && vVar2.z > 90f)
						{
							Local_113.f_3[iParam0 /*5*/].f_4 = unk_0x9279C21787650C40(unk_0xDF1881EF65347257(iVar0));
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_132(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xEE978C39384D834F(iParam0);
	if (!unk_0xDC5D81351D6A4DDB(iVar0))
	{
		return 1;
	}
	if (unk_0x7112137033807390(iVar0, 0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = unk_0xEE978C39384D834F(Local_113.f_3[iVar1 /*5*/].f_4);
		if (unk_0xDC5D81351D6A4DDB(iVar2))
		{
			if (iParam0 == Local_113.f_3[iVar1 /*5*/].f_4)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_133(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x48908CAFF1B58FF8())
	{
		if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(iVar0)))
		{
			if (!func_45(Local_137[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_134(int iParam0)
{
	switch (Local_113.f_21[iParam0])
	{
		case 0:
			if (func_136(iParam0, 64))
			{
				Local_113.f_21[iParam0] = 1;
			}
			break;
		
		case 1:
			if (func_135(iParam0, 1))
			{
				Local_113.f_21[iParam0] = 2;
			}
			break;
		
		case 2:
			if (func_135(iParam0, 2))
			{
				Local_113.f_21[iParam0] = 3;
			}
			break;
		
		case 3:
			if (func_136(iParam0, 4))
			{
				Local_113.f_21[iParam0] = 4;
			}
			break;
		
		case 4:
			if (func_135(iParam0, 8))
			{
				Local_113.f_21[iParam0] = 5;
			}
			if (!func_135(iParam0, 1))
			{
				Local_113.f_21[iParam0] = 7;
			}
			if (func_135(iParam0, 16))
			{
				Local_113.f_21[iParam0] = 6;
			}
			break;
		
		case 5:
			if (func_135(iParam0, 16))
			{
				Local_113.f_21[iParam0] = 6;
			}
			if (!func_135(iParam0, 1))
			{
				Local_113.f_21[iParam0] = 7;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!func_135(iParam0, 4))
			{
				Local_113.f_21[iParam0] = 0;
			}
			break;
	}
}

int func_135(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x48908CAFF1B58FF8())
	{
		if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(iVar0)))
		{
			if (func_45(Local_137[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_136(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x48908CAFF1B58FF8())
	{
		if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(iVar0)))
		{
			if (!func_45(Local_137[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_137()
{
	int iVar0;
	
	if (!unk_0x45F99485D7E1C29A())
	{
		return 1;
	}
	iVar0 = 1;
	if (!func_138(&(Local_113[0]), 29, joaat("s_m_y_marine_01"), -2308.4f, 3391f, 30.0601f, 55.8214f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (unk_0xAABBF7FA3E338B30(Local_113[0]))
	{
		unk_0xF0188A1B49D79AF7(unk_0x8A5B683BACF7B78C(Local_113[0]), joaat("weapon_assaultrifle"), 200, true, true);
	}
	if (!func_138(&(Local_113[1]), 29, joaat("s_m_y_marine_01"), -1588.9f, 2792.9f, 16.1385f, 229.437f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (unk_0xAABBF7FA3E338B30(Local_113[1]))
	{
		unk_0xF0188A1B49D79AF7(unk_0x8A5B683BACF7B78C(Local_113[1]), joaat("weapon_assaultrifle"), 200, true, true);
	}
	return iVar0;
}

int func_138(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (!unk_0x94D82D856BD4DE54(1))
	{
		return 0;
	}
	iVar0 = unk_0x35C6E06B120EB2E3(iParam1, iParam2, vParam3, fParam4, iParam6, bParam5);
	*uParam0 = unk_0xADF0D7F44D12DC49(iVar0);
	if (unk_0x83A1DA4E6C55E952(*uParam0))
	{
		unk_0xEAF1F3E17588C851(iVar0, iParam7);
		if (unk_0xCC1BBE3267AB0DC9(iVar0))
		{
			if (bParam5)
			{
				unk_0x2F16A8714FE53E5C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_139()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < unk_0x48908CAFF1B58FF8())
	{
		if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(iVar1)))
		{
			if (!func_111(Local_137[iVar1 /*8*/], 2))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_140()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < unk_0x48908CAFF1B58FF8())
	{
		if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(iVar1)))
		{
			if (!func_111(Local_137[iVar1 /*8*/], 1))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_141()
{
	if (func_99(&uLocal_150) && func_97(&uLocal_150, Global_262145.f_21336, 0))
	{
		func_96(&uLocal_150);
	}
	if (func_99(&uLocal_148) && func_97(&uLocal_148, Global_262145.f_21337, 0))
	{
		func_96(&uLocal_148);
		iLocal_145 = 0;
	}
	if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) <= 0)
	{
		if (func_142())
		{
			if (!Global_2524719.f_6228)
			{
				Global_2524719.f_6228 = 1;
				func_52("BASE_EXP_WARN", -1);
			}
			if (!iLocal_145)
			{
				iLocal_145 = 1;
				func_98(&uLocal_150, 0, 0);
				func_98(&uLocal_148, 0, 0);
			}
			else if (!func_99(&uLocal_150))
			{
				unk_0x9BB7BCDF2AC2D6F9(5);
				bLocal_140 = true;
				bLocal_141 = true;
				iLocal_145 = 0;
				func_96(&uLocal_150);
				func_96(&uLocal_148);
			}
		}
	}
}

int func_142()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 26)
	{
		func_145(&iLocal_146, iVar1);
		iLocal_147 = func_144();
		if (iLocal_147 >= 0)
		{
			iVar0 = func_143(iLocal_147);
			if (unk_0xDC5D81351D6A4DDB(iVar0) && unk_0x281590680327CDEA(iVar0))
			{
				if (unk_0xA2EA4BA455370F3C(iVar0) == unk_0xA19140A5C42D8715())
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

var func_143(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			uVar0 = unk_0x0231E5D070613E25(iLocal_146, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f);
			break;
		
		case 1:
			uVar0 = unk_0x0231E5D070613E25(iLocal_146, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f);
			break;
		
		case 2:
			uVar0 = unk_0x0231E5D070613E25(iLocal_146, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f);
			break;
		
		case 3:
			uVar0 = unk_0x0231E5D070613E25(iLocal_146, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f);
			break;
		
		case 4:
			uVar0 = unk_0x0231E5D070613E25(iLocal_146, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f);
			break;
		
		case 5:
			uVar0 = unk_0x0231E5D070613E25(iLocal_146, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f);
			break;
		
		case 6:
			uVar0 = unk_0x0231E5D070613E25(iLocal_146, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f);
			break;
		
		case 7:
			uVar0 = unk_0x0231E5D070613E25(iLocal_146, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f);
			break;
		
		case 8:
			uVar0 = unk_0x0231E5D070613E25(iLocal_146, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f);
			break;
		
		case 9:
			uVar0 = unk_0x0231E5D070613E25(iLocal_146, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f);
			break;
		
		case 10:
			uVar0 = unk_0x0231E5D070613E25(iLocal_146, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f);
			break;
		
		case 11:
			uVar0 = unk_0x0231E5D070613E25(iLocal_146, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f);
			break;
		
		case 12:
			uVar0 = unk_0x0231E5D070613E25(iLocal_146, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f);
			break;
		
		case 13:
			uVar0 = unk_0x0231E5D070613E25(iLocal_146, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f);
			break;
		
		case 14:
			uVar0 = unk_0x0231E5D070613E25(iLocal_146, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f);
			break;
		
		case 15:
			uVar0 = unk_0x0231E5D070613E25(iLocal_146, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f);
			break;
		
		case 16:
			uVar0 = unk_0x0231E5D070613E25(iLocal_146, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f);
			break;
		
		case 17:
			uVar0 = unk_0x0231E5D070613E25(iLocal_146, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f);
			break;
		
		case 18:
			uVar0 = unk_0x0231E5D070613E25(iLocal_146, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f);
			break;
		
		case 19:
			uVar0 = unk_0x0231E5D070613E25(iLocal_146, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 20:
			uVar0 = unk_0x0231E5D070613E25(iLocal_146, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 21:
			uVar0 = unk_0x0231E5D070613E25(iLocal_146, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f);
			break;
		
		case 22:
			uVar0 = unk_0x0231E5D070613E25(iLocal_146, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f);
			break;
		
		case 23:
			uVar0 = unk_0x0231E5D070613E25(iLocal_146, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f);
			break;
		
		case 24:
			uVar0 = unk_0x0231E5D070613E25(iLocal_146, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f);
			break;
		
		case 25:
			uVar0 = unk_0x0231E5D070613E25(iLocal_146, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f);
			break;
		
		case 26:
			uVar0 = unk_0x0231E5D070613E25(iLocal_146, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f);
			break;
	}
	return uVar0;
}

int func_144()
{
	if (unk_0x8DAA6481F6FEA36F(iLocal_146, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f))
	{
		return 0;
	}
	else if (unk_0x8DAA6481F6FEA36F(iLocal_146, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f))
	{
		return 1;
	}
	else if (unk_0x8DAA6481F6FEA36F(iLocal_146, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f))
	{
		return 2;
	}
	else if (unk_0x8DAA6481F6FEA36F(iLocal_146, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f))
	{
		return 3;
	}
	else if (unk_0x8DAA6481F6FEA36F(iLocal_146, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f))
	{
		return 4;
	}
	else if (unk_0x8DAA6481F6FEA36F(iLocal_146, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f))
	{
		return 5;
	}
	else if (unk_0x8DAA6481F6FEA36F(iLocal_146, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f))
	{
		return 6;
	}
	else if (unk_0x8DAA6481F6FEA36F(iLocal_146, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f))
	{
		return 7;
	}
	else if (unk_0x8DAA6481F6FEA36F(iLocal_146, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f))
	{
		return 8;
	}
	else if (unk_0x8DAA6481F6FEA36F(iLocal_146, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f))
	{
		return 9;
	}
	else if (unk_0x8DAA6481F6FEA36F(iLocal_146, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f))
	{
		return 10;
	}
	else if (unk_0x8DAA6481F6FEA36F(iLocal_146, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f))
	{
		return 11;
	}
	else if (unk_0x8DAA6481F6FEA36F(iLocal_146, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f))
	{
		return 12;
	}
	else if (unk_0x8DAA6481F6FEA36F(iLocal_146, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f))
	{
		return 13;
	}
	else if (unk_0x8DAA6481F6FEA36F(iLocal_146, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f))
	{
		return 14;
	}
	else if (unk_0x8DAA6481F6FEA36F(iLocal_146, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f))
	{
		return 15;
	}
	else if (unk_0x8DAA6481F6FEA36F(iLocal_146, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f))
	{
		return 16;
	}
	else if (unk_0x8DAA6481F6FEA36F(iLocal_146, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f))
	{
		return 17;
	}
	else if (unk_0x8DAA6481F6FEA36F(iLocal_146, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f))
	{
		return 18;
	}
	else if (unk_0x8DAA6481F6FEA36F(iLocal_146, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 19;
	}
	else if (unk_0x8DAA6481F6FEA36F(iLocal_146, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 20;
	}
	else if (unk_0x8DAA6481F6FEA36F(iLocal_146, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f))
	{
		return 21;
	}
	else if (unk_0x8DAA6481F6FEA36F(iLocal_146, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f))
	{
		return 22;
	}
	else if (unk_0x8DAA6481F6FEA36F(iLocal_146, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f))
	{
		return 23;
	}
	else if (unk_0x8DAA6481F6FEA36F(iLocal_146, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f))
	{
		return 24;
	}
	else if (unk_0x8DAA6481F6FEA36F(iLocal_146, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f))
	{
		return 25;
	}
	else if (unk_0x8DAA6481F6FEA36F(iLocal_146, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f))
	{
		return 26;
	}
	return -1;
}

void func_145(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 0;
			break;
		
		case 1:
			*uParam0 = 1;
			break;
		
		case 2:
			*uParam0 = 2;
			break;
		
		case 3:
			*uParam0 = 3;
			break;
		
		case 4:
			*uParam0 = 4;
			break;
		
		case 5:
			*uParam0 = 5;
			break;
		
		case 6:
			*uParam0 = 19;
			break;
		
		case 7:
			*uParam0 = 20;
			break;
		
		case 8:
			*uParam0 = 21;
			break;
		
		case 9:
			*uParam0 = 32;
			break;
		
		case 10:
			*uParam0 = 36;
			break;
		
		case 11:
			*uParam0 = 40;
			break;
		
		case 12:
			*uParam0 = 41;
			break;
		
		case 13:
			*uParam0 = 43;
			break;
		
		case 14:
			*uParam0 = 44;
			break;
		
		case 15:
			*uParam0 = 45;
			break;
		
		case 16:
			*uParam0 = 46;
			break;
		
		case 17:
			*uParam0 = 47;
			break;
		
		case 18:
			*uParam0 = 48;
			break;
		
		case 19:
			*uParam0 = 49;
			break;
		
		case 20:
			*uParam0 = 50;
			break;
		
		case 21:
			*uParam0 = 53;
			break;
		
		case 22:
			*uParam0 = 54;
			break;
		
		case 23:
			*uParam0 = 55;
			break;
		
		case 24:
			*uParam0 = 56;
			break;
		
		case 25:
			*uParam0 = 57;
			break;
	}
}

int func_146()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_58(unk_0xD4E735F4B6A956AC()))
	{
		return 1;
	}
	if (func_151(1))
	{
		iVar0 = func_150();
		if (iVar0 != func_36())
		{
			if (func_58(iVar0))
			{
				return 1;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x1483A8AE554B8B2B(iVar1);
		if (func_35(iVar2, 0, 1))
		{
			if (iVar2 != unk_0xD4E735F4B6A956AC())
			{
				if (func_151(1))
				{
					if (func_148(unk_0xD4E735F4B6A956AC(), iVar2))
					{
						if (func_58(iVar2))
						{
							return 1;
						}
					}
				}
				if (func_147(unk_0xEE978C39384D834F(unk_0xD4E735F4B6A956AC()), unk_0xEE978C39384D834F(iVar2)))
				{
					iVar3 = unk_0xCAEB6CE71A2C7212(unk_0xEE978C39384D834F(iVar2), 0);
					if (unk_0xB0D49A1F9F054602(iVar3, -1, 0) == unk_0xEE978C39384D834F(iVar2))
					{
						if (func_58(iVar2))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_147(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0) && unk_0xDC5D81351D6A4DDB(iParam1))
	{
		if (!unk_0x7112137033807390(iParam0, 0) && !unk_0x7112137033807390(iParam1, 0))
		{
			if (unk_0x5D7DFE2058701942(iParam0, 0) && unk_0x5D7DFE2058701942(iParam1, 0))
			{
				iVar0 = unk_0xCAEB6CE71A2C7212(iParam0, 0);
				iVar1 = unk_0xCAEB6CE71A2C7212(iParam1, 0);
				if (unk_0xDC5D81351D6A4DDB(iVar0) && unk_0xDC5D81351D6A4DDB(iVar1))
				{
					if (iVar0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_148(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_149(iParam0);
	if (!iVar0 == func_36())
	{
		if (iVar0 == func_149(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_149(int iParam0)
{
	if (iParam0 != func_36())
	{
		return Global_1625435[iParam0 /*560*/].f_11;
	}
	return func_36();
}

var func_150()
{
	return Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11;
}

bool func_151(bool bParam0)
{
	return func_56(unk_0xD4E735F4B6A956AC(), bParam0);
}

int func_152()
{
	var uVar0;
	
	func_159(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			return 1;
		}
	}
	if (func_158())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_157())
	{
		return 1;
	}
	if (func_156(157))
	{
		if (!func_155())
		{
			return 1;
		}
	}
	if (func_156(155))
	{
		return 1;
	}
	if (!unk_0x18F86E07E41D913F())
	{
		return 1;
	}
	if (func_153() != 0)
	{
		if (unk_0x8B1574454E8C2421(func_153()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_153()
{
	switch (func_154())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_154()
{
	return Global_25459;
}

bool func_155()
{
	return Global_2448386.f_587;
}

int func_156(int iParam0)
{
	if (unk_0xF10AFD11E6EE81BF(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_157()
{
	return Global_2458191;
}

bool func_158()
{
	return Global_2448386.f_582;
}

void func_159(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5D7B2A77420FF19E(1))
	{
		iVar1 = unk_0x5712B9353A8F6573(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x8866A4E42CDA3EF1(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -563286670:
					func_160(iVar0);
					break;
				
				case 566035618:
					unk_0x8866A4E42CDA3EF1(1, iVar0, &vVar3, 4);
					if (vVar3.z == -1989728150)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_160(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x8866A4E42CDA3EF1(1, iParam0, &vVar0, 3))
	{
		if (func_35(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xEE978C39384D834F(vVar0.y);
			if (unk_0xDC5D81351D6A4DDB(iVar1))
			{
				if (unk_0x5D7DFE2058701942(iVar1, 0))
				{
					iVar2 = unk_0xCAEB6CE71A2C7212(iVar1, 0);
					if (unk_0xEB1A41F6F719807C(iVar2, vVar0.z) && unk_0xB592B7A61F21E7A5())
					{
						if (func_161(iVar2, &bVar3))
						{
							unk_0x3D2495030621765B(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x792676988A48387F(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_161(int iParam0, var uParam1)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (!unk_0x4943BEEC19289B8E(iParam0))
		{
			if (unk_0xCC01DCC72D8B9E39(iParam0))
			{
				if (!unk_0x289FBFAD3E416C48(unk_0x8F474E419F56E48D(iParam0)))
				{
					unk_0x1F7948851FB36E88(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x82384F63D814C864(iParam0, 0))
		{
			if (unk_0xB540EEBB14C48518(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_162()
{
	if (unk_0xBCC2AC37F56D2149(false, 0) != 5)
	{
		if (func_169(5, 0, 1))
		{
			if (unk_0xEBCEB76159738410(0) <= 5)
			{
				unk_0x7F2854D39965C275(5);
			}
		}
	}
	if (unk_0xA373CB83DA86BA00(false, 0) != 3)
	{
		if (func_163(3, 0, 1))
		{
			if (unk_0x1F9D434D8B61A3BC(0) <= 3)
			{
				unk_0xA721D9ED3827732A(3);
			}
		}
	}
}

bool func_163(int iParam0, bool bParam1, bool bParam2)
{
	return func_164(1, iParam0, 1, bParam1, bParam2);
}

int func_164(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x05EFB6A616B6FADE(Global_1380171, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_168(iParam0) - func_167(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_167(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_168(iParam0) - func_166(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_167(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_168(iParam0) - func_167(iParam0, 1));
		}
		if (!bParam4 && Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/] != 3)
		{
			iVar1 = (iVar1 - func_165(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_165(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_166(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1380171.f_1;
			break;
		
		case 1:
			return Global_1380171.f_2;
			break;
		
		case 2:
			return Global_1380171.f_3;
			break;
	}
	return 0;
}

int func_167(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xD4E735F4B6A956AC();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xB592B7A61F21E7A5())
			{
				return Global_2423801[iVar0 /*413*/].f_209;
			}
			else
			{
				return unk_0xBCC2AC37F56D2149(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0xB592B7A61F21E7A5())
			{
				return Global_2423801[iVar0 /*413*/].f_210;
			}
			else
			{
				return unk_0xA373CB83DA86BA00(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0xB592B7A61F21E7A5())
			{
				return Global_2423801[iVar0 /*413*/].f_211;
			}
			else
			{
				return unk_0x2FC83B1E3A760AA3(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_168(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1380179;
			break;
		
		case 1:
			return Global_1380180;
			break;
		
		case 2:
			return Global_1380181;
			break;
	}
	return 0;
}

bool func_169(int iParam0, bool bParam1, bool bParam2)
{
	return func_164(0, iParam0, 1, bParam1, bParam2);
}

void func_170()
{
	wait(0);
}

void func_171()
{
	int iVar0;
	
	if (unk_0x4C9BACA8D249CB13())
	{
		if (unk_0x45F99485D7E1C29A())
		{
			if (func_121())
			{
				func_122();
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xCE3CB618AFE55EFB(Local_138.f_172[iVar0]))
		{
			unk_0xE1623437A3194332(&(Local_138.f_172[iVar0]));
		}
		iVar0++;
	}
	if (iLocal_143)
	{
		unk_0x9BB7BCDF2AC2D6F9(5);
		iLocal_143 = 0;
	}
	Global_1678529 = 0;
	func_173();
	func_172();
}

void func_172()
{
	unk_0x8F1A9FE6D91AAFEB();
}

void func_173()
{
	if (!Local_138.f_176)
	{
		return;
	}
	if (unk_0x7FC99CCC73354033(joaat("s_m_y_marine_01")))
	{
		unk_0xA5DE74AE39867B03(joaat("s_m_y_marine_01"));
	}
	if (unk_0x7FC99CCC73354033(joaat("lazer")))
	{
		unk_0xA5DE74AE39867B03(joaat("lazer"));
	}
	if (unk_0x7FC99CCC73354033(joaat("s_m_y_pilot_01")))
	{
		unk_0xA5DE74AE39867B03(joaat("s_m_y_pilot_01"));
	}
}

void func_174(struct<21> Param0)
{
	func_178(func_179(Param0), Param0);
	func_176(0, -1, 0);
	unk_0x7F2854D39965C275(5);
	unk_0xA721D9ED3827732A(3);
	unk_0xF82A3961787FA0A4(&Local_113, 27);
	unk_0x8BFA7A7AB1D02137(&Local_137, 257);
	unk_0x2F3193E06C2EFF44(0);
	if (!func_175())
	{
		func_171();
	}
	if (unk_0x5EBD03AF78E7B4DB(3))
	{
		func_171();
	}
	Global_2524719.f_6222 = 0;
}

int func_175()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x4C9BACA8D249CB13())
		{
			return 0;
		}
		if (unk_0x9657A511FBAA9216())
		{
			return 1;
		}
		if (func_158())
		{
			return 0;
		}
		if (func_156(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

int func_176(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBF19BA6420EC428C();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_172();
			}
			else
			{
				return 0;
			}
		}
		if (!func_177())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x4C9BACA8D249CB13())
				{
					if (!bParam2)
					{
						func_172();
					}
					else
					{
						return 0;
					}
				}
				if (func_158())
				{
					if (!bParam2)
					{
						func_172();
					}
					else
					{
						return 0;
					}
				}
				if (func_156(155))
				{
					if (!bParam2)
					{
						func_172();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xB3ADBAEA60664F46())
			{
				if (!bParam2)
				{
					func_172();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = unk_0xBF19BA6420EC428C();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			if (!bParam2)
			{
				func_172();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xB3ADBAEA60664F46())
	{
		if (!bParam2)
		{
			func_172();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_177()
{
	return Global_1312834;
}

void func_178(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		func_172();
	}
	unk_0x1B0D16DC60698F88(iParam0, 0, Param1.f_16);
}

int func_179(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 131:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 2;
		
		case 147:
			return 1;
		
		case 143:
			return 2;
		
		case 144:
			return 4;
		
		case 145:
			return 2;
		
		case 146:
			return 2;
		
		case 128:
			return 1;
		
		case 148:
			return 2;
		
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
			return 0;
		
		case 158:
			return 1;
		
		case 155:
			return 4;
		
		case 156:
			return 16;
		
		case 157:
			return 32;
		
		default:
	}
	return 0;
}

