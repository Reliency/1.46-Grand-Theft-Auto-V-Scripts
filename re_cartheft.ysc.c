#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	vector3 vLocal_45 = { 0f, 0f, 0f };
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	vector3 vLocal_50 = { 0f, 0f, 0f };
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	bool bLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	char* sLocal_79 = NULL;
	char* sLocal_80 = NULL;
	char* sLocal_81 = NULL;
	char* sLocal_82 = NULL;
	vector3 vLocal_83 = { 0f, 0f, 0f };
	vector3 vLocal_84 = { 0f, 0f, 0f };
	vector3 vLocal_85 = { 0f, 0f, 0f };
	vector3 vLocal_86 = { 0f, 0f, 0f };
	vector3 vLocal_87 = { 0f, 0f, 0f };
	vector3 vLocal_88 = { 0f, 0f, 0f };
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	vector3 vLocal_97 = { 0f, 0f, 0f };
	vector3 vLocal_98 = { 0f, 0f, 0f };
	float fLocal_99 = 0f;
	char* sLocal_100 = NULL;
	char* sLocal_101 = NULL;
	struct<10> Local_102[16];
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	char* sLocal_107 = NULL;
	char* sLocal_108 = NULL;
	char* sLocal_109 = NULL;
	char* sLocal_110 = NULL;
	char* sLocal_111 = NULL;
	char* sLocal_112 = NULL;
	char* sLocal_113 = NULL;
	char[] cLocal_114[8] = 0;
	int iLocal_115 = 0;
	bool bLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	char* sLocal_126 = NULL;
	char* sLocal_127 = NULL;
	char* sLocal_128 = NULL;
	char* sLocal_129 = NULL;
	vector3 vLocal_130 = { 0f, 0f, 0f };
	vector3 vLocal_131 = { 0f, 0f, 0f };
	int iLocal_132 = 0;
	vector3 vLocal_133 = { 0f, 0f, 0f };
	vector3 vLocal_134 = { 0f, 0f, 0f };
	vector3 vLocal_135 = { 0f, 0f, 0f };
	vector3 vLocal_136 = { 0f, 0f, 0f };
	int iLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = -1;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 1000;
	var uLocal_148 = 1000;
	var uLocal_149 = 0;
	bool bLocal_150 = 0;
	struct<18> Local_151 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;
	int iVar1;
	
	iLocal_3 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_16 = 0.001f;
	iLocal_19 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	fLocal_52 = 10f;
	fLocal_53 = 7f;
	iLocal_54 = 1;
	sLocal_80 = "random@car_thief@waving_ig_1";
	fLocal_99 = 1f;
	iLocal_119 = 786603;
	iLocal_120 = 786469;
	sLocal_127 = "car_returned_peyote";
	sLocal_128 = "girl_car_returned";
	sLocal_129 = "player_car_returned";
	vLocal_50 = { ScriptParam_151.f_1[0 /*3*/] };
	fLocal_51 = ScriptParam_151.f_17[0];
	if (unk_0x5EBD03AF78E7B4DB(11))
	{
		func_231();
	}
	func_230();
	if (iLocal_121 == 2)
	{
		if (func_229(34))
		{
			unk_0x8F1A9FE6D91AAFEB();
		}
		if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0) && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			if (!unk_0x47A53E3686340604(unk_0xA19140A5C42D8715()))
			{
				vVar0 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) };
				if (vVar0.z > 23f || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -743.3924f, -2129.82f, 12.07619f, -708.892f, -2160.705f, 19.7035f, 124.5f, 0, true, 0))
				{
					unk_0x8F1A9FE6D91AAFEB();
				}
			}
		}
	}
	if (func_188(vLocal_50, 17, iLocal_121, 0, 0))
	{
		func_185(-1);
	}
	else
	{
		unk_0x8F1A9FE6D91AAFEB();
	}
	while (true)
	{
		wait(0);
		func_184();
		func_183(iLocal_59, &uLocal_62);
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			unk_0x3CD45FBBD715C963(unk_0xD4E735F4B6A956AC());
		}
		func_182();
		if (!func_181())
		{
			if (func_180())
			{
				func_231();
			}
			if (unk_0x1F85F8C7CC4639AE())
			{
				switch (iLocal_46)
				{
					case 0:
						if (func_163())
						{
							unk_0xD6A3711FA2CAF3EF(0);
							iLocal_46 = 1;
						}
						break;
					
					case 1:
						if (!unk_0x4915F4759304D5CF(iLocal_72))
						{
							if (((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !unk_0x4915F4759304D5CF(iLocal_71)) && func_162(iLocal_73)) && !func_161(0))
							{
								if (func_160())
								{
									if (func_162(iLocal_76))
									{
										unk_0xAB9FD40CC0E419E3(iLocal_76, false);
									}
									func_151(1);
									unk_0xBF6EED5D6E0CD9BF(0.1f);
									func_146(39, 1);
									func_146(40, 1);
									func_146(41, 1);
									func_146(42, 1);
									func_146(43, 1);
									func_146(44, 1);
									settimera(0);
								}
							}
							else
							{
								if (!unk_0x4915F4759304D5CF(iLocal_71))
								{
									unk_0x33B5487515BD13D5(iLocal_71, unk_0xA19140A5C42D8715(), 150f, -1, 0, 0);
									unk_0xD738221C247C8B71(iLocal_71, true);
									wait(0);
								}
								func_231();
							}
						}
						else
						{
							if (!unk_0x4915F4759304D5CF(iLocal_71) && func_162(iLocal_73))
							{
								unk_0x731722E696597BD1(iLocal_71, iLocal_73, 20f, iLocal_119);
								unk_0xD738221C247C8B71(iLocal_71, true);
								wait(0);
							}
							func_114(0);
						}
						break;
				}
			}
			else
			{
				func_231();
			}
		}
		else
		{
			if (unk_0x4915F4759304D5CF(iLocal_72))
			{
				if (Local_102[2 /*10*/].f_7)
				{
					func_113(&Local_102, 2);
				}
			}
			unk_0xB1D22059BEC7B532(unk_0xD4E735F4B6A956AC());
			func_105();
			if (func_162(iLocal_73) && !func_104())
			{
				if (func_102())
				{
					if (!unk_0x4915F4759304D5CF(iLocal_71))
					{
						switch (iLocal_47)
						{
							case 0:
								if (!unk_0x4915F4759304D5CF(iLocal_72))
								{
									if (unk_0xE0FD180CD24C0B67(iLocal_72, iLocal_73, 0))
									{
										if (iLocal_121 == 2)
										{
											unk_0x98D1B1BD9C3AA456(iLocal_72, true, 1);
											unk_0x98D1B1BD9C3AA456(iLocal_73, true, 1);
											unk_0x2F89329397A277BC(&iLocal_74);
											unk_0x5175E271E03B40D8(0, iLocal_73, unk_0xA19140A5C42D8715(), 8, 30f, iLocal_120, 200f, 10f, 0);
											unk_0x301F42EEE3C40328(iLocal_74);
											unk_0xE1072FA2FECBAD96(iLocal_72, iLocal_74);
											unk_0x3A95A0A3221D4208(&iLocal_74);
										}
										else
										{
											unk_0x98D1B1BD9C3AA456(iLocal_72, true, 1);
											unk_0x2F89329397A277BC(&iLocal_74);
											unk_0x95015EE4AAC98495(0, iLocal_73, 30, 1000);
											unk_0x5175E271E03B40D8(0, iLocal_73, unk_0xA19140A5C42D8715(), 8, 40f, iLocal_120, 200f, 10f, 1);
											unk_0x301F42EEE3C40328(iLocal_74);
											unk_0xE1072FA2FECBAD96(iLocal_72, iLocal_74);
											unk_0x3A95A0A3221D4208(&iLocal_74);
										}
										vLocal_133 = { unk_0xB31A4B66C16032CC(iLocal_73, unk_0x4F9AEAB2CC029A5C(iLocal_73, "wheel_lr")) };
										vLocal_134 = { unk_0x61141C81AF57CBDC(iLocal_73, vLocal_133) };
										unk_0xF593FC0961E061E6("scr_wheel_burnout", iLocal_73, vLocal_134 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0, 0, 0);
										vLocal_135 = { unk_0xB31A4B66C16032CC(iLocal_73, unk_0x4F9AEAB2CC029A5C(iLocal_73, "wheel_rr")) };
										vLocal_136 = { unk_0x61141C81AF57CBDC(iLocal_73, vLocal_135) };
										unk_0xF593FC0961E061E6("scr_wheel_burnout", iLocal_73, vLocal_136 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0, 0, 0);
										settimera(0);
										if (!unk_0xCE3CB618AFE55EFB(iLocal_60))
										{
											iLocal_60 = func_100(iLocal_73, 1, 0);
										}
										unk_0x90E641761C692B84(2);
										iLocal_47 = 1;
									}
									else if (unk_0xDEAEC99031DCB92A(iLocal_73, unk_0xA19140A5C42D8715(), 1))
									{
										if (!unk_0x4915F4759304D5CF(iLocal_72))
										{
											unk_0x33B5487515BD13D5(iLocal_72, unk_0xA19140A5C42D8715(), 150f, -1, 0, 0);
											unk_0xD738221C247C8B71(iLocal_72, true);
											wait(0);
										}
										func_231();
									}
								}
								else
								{
									unk_0x731722E696597BD1(iLocal_71, iLocal_73, 20f, iLocal_119);
									unk_0xD738221C247C8B71(iLocal_71, true);
									wait(0);
									func_114(0);
								}
								break;
							
							case 1:
								if (func_162(iLocal_73))
								{
									if (iLocal_121 == 1)
									{
										if (timera() < 5000)
										{
											if (timera() > 2000)
											{
												fLocal_99 = (fLocal_99 + 0.4f);
											}
											else
											{
												fLocal_99 = (fLocal_99 + 0.2f);
											}
											if (fLocal_99 > 30f)
											{
												fLocal_99 = 30f;
											}
											unk_0x625FB4B0328423D9(iLocal_73, fLocal_99);
											iVar1 = unk_0xEB67B4270D12F60E(unk_0xE2BBD32891C18569(iLocal_73, true), 5f, 0, 4);
											if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
											{
												if (func_162(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)))
												{
													if (unk_0xC556072C29E00F04(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), iLocal_73))
													{
														settimera(5000);
													}
												}
												if (func_162(iVar1))
												{
													if (iVar1 != iLocal_73)
													{
														if (unk_0xC556072C29E00F04(iVar1, iLocal_73))
														{
															settimera(5000);
														}
													}
												}
											}
										}
									}
									if (unk_0xC9396A3FD9FCE75E(iLocal_73) < 700f)
									{
										func_231();
									}
								}
								func_69();
								if ((((((func_68() || func_67()) || unk_0xEE9EA5C5862BBFA3(iLocal_73)) || unk_0xEB9F2352179A557A(iLocal_73, 1, 5000)) || unk_0x463E3A48A46C9195(iLocal_73)) || unk_0x4915F4759304D5CF(iLocal_72)) || !unk_0xE0FD180CD24C0B67(iLocal_72, iLocal_73, 0))
								{
									if (unk_0x2F8EAF18929E1E59("RE_CAR_STEAL_SCENE"))
									{
										if (func_162(iLocal_73))
										{
											unk_0x3C50F1F859BA232B(iLocal_73, 0);
										}
										unk_0x5AD7D03C214BDA88("RE_CAR_STEAL_SCENE");
									}
									if (unk_0xCE3CB618AFE55EFB(iLocal_60))
									{
										unk_0xE1623437A3194332(&iLocal_60);
									}
									func_66();
									if (unk_0xCE3CB618AFE55EFB(iLocal_59))
									{
										unk_0xE1623437A3194332(&iLocal_59);
									}
									unk_0xDCB46BFC2265476A(iLocal_71);
									unk_0x0185AEECD1FF63F3(iLocal_73, 50f, 5, 0);
									iLocal_61 = func_100(iLocal_73, 0, 0);
									fLocal_93 = vdist(unk_0xE2BBD32891C18569(iLocal_73, true), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true));
									fLocal_91 = vdist(unk_0xE2BBD32891C18569(iLocal_73, true), unk_0xE2BBD32891C18569(iLocal_71, true));
									fLocal_92 = vdist(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), unk_0xE2BBD32891C18569(iLocal_71, true));
									func_64(&uLocal_138, 0, 0);
									iLocal_47 = 2;
								}
								break;
							
							case 2:
								if (func_162(iLocal_73))
								{
									if (unk_0xC9396A3FD9FCE75E(iLocal_73) < 700f)
									{
										func_231();
									}
								}
								if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0)
								{
									func_231();
								}
								if (!unk_0x7112137033807390(iLocal_72, 0))
								{
									if (!unk_0xE0FD180CD24C0B67(iLocal_72, iLocal_73, 0))
									{
										func_63(iLocal_72, &iLocal_63, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
									}
								}
								else
								{
									func_62(&iLocal_63);
								}
								if (!unk_0x4915F4759304D5CF(iLocal_72))
								{
									if (!unk_0x967743032563101F(iLocal_72, unk_0xA19140A5C42D8715()))
									{
										unk_0xDA4D3941AFF8EF12(iLocal_72, unk_0xA19140A5C42D8715(), 0, 16);
										unk_0xA5DE74AE39867B03(unk_0x8F474E419F56E48D(iLocal_72));
									}
								}
								if ((vdist(unk_0xE2BBD32891C18569(iLocal_73, true), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true)) > (fLocal_93 + 220f) || vdist(unk_0xE2BBD32891C18569(iLocal_73, true), unk_0xE2BBD32891C18569(iLocal_71, true)) > (fLocal_91 + 220f)) || vdist(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), unk_0xE2BBD32891C18569(iLocal_71, true)) > (fLocal_92 + 220f))
								{
									if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_73, 0))
									{
										func_114(0);
									}
									else
									{
										func_231();
									}
								}
								if (unk_0xCE3CB618AFE55EFB(iLocal_61))
								{
									if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_73, 0))
									{
										unk_0xE1623437A3194332(&iLocal_61);
										iLocal_59 = func_58(iLocal_71, 0, 0);
										func_57(&uLocal_62);
										func_64(&uLocal_138, 0, 0);
										if (!iLocal_56)
										{
											if (iLocal_121 == 1)
											{
												vLocal_85 = { -2258.759f, 4274.059f, 45.9166f };
											}
											else if (bLocal_57)
											{
												vLocal_85 = { -483.4162f, -2160.874f, 8.359f };
											}
											else
											{
												vLocal_85 = { -485.9905f, -2153.542f, 8.1999f };
											}
											if (!unk_0x317672E799676CA5(vLocal_85, 2f) && !unk_0x1A8481A7E865EC7C(iLocal_71))
											{
												unk_0x4299736016AECE26(iLocal_71, vLocal_85, 1, false, 0, 1);
												unk_0x92DDCF53AA47A63D(iLocal_71, fLocal_90);
												iLocal_56 = 1;
											}
										}
										iLocal_48 = 3;
										iLocal_124 = unk_0xFD34717937104F1C();
									}
									else if (unk_0x10E54C268D1B3FED(iLocal_73, iLocal_71, 20f, 20f, 7f, 0, 1, 0))
									{
										func_56();
										if (func_55())
										{
											if (unk_0x5860446BFB759B77(iLocal_71, iLocal_73, -1, 0, false))
											{
												if (!bLocal_116)
												{
													if (func_45(&Local_102, cLocal_114, sLocal_110, 4, 0, 0, 0))
													{
													}
												}
												unk_0x731722E696597BD1(iLocal_71, iLocal_73, 35f, iLocal_119);
												unk_0xD738221C247C8B71(iLocal_71, true);
												func_114(1);
											}
										}
									}
								}
								else if (unk_0xCE3CB618AFE55EFB(iLocal_59))
								{
									if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_73, 0))
									{
										if (unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_71, fLocal_52, fLocal_52, fLocal_52, 0, 1, 0))
										{
											if (func_44(1, 0, 1))
											{
												unk_0xE1623437A3194332(&iLocal_59);
												if (iLocal_121 == 1)
												{
													if (func_43(unk_0x552C823E1D2A019C(iLocal_73), 336f, 90f))
													{
														sLocal_126 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
													else
													{
														sLocal_126 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
												}
												else
												{
													sLocal_126 = "RANDOM@CAR_THEFT_1@MCS_3";
												}
												unk_0x6D68030C791111E0(sLocal_126);
												iLocal_48 = 4;
												iLocal_47 = 3;
											}
										}
										else
										{
											func_41(unk_0xE2BBD32891C18569(iLocal_71, true), &fLocal_52, &fLocal_53);
										}
									}
									else
									{
										unk_0xE1623437A3194332(&iLocal_59);
										iLocal_61 = func_100(iLocal_73, 0, 0);
										iLocal_48 = 0;
									}
								}
								break;
							
							case 3:
								if (iLocal_121 == 1)
								{
									if (func_4())
									{
										if (func_3(iLocal_71))
										{
											unk_0xB0D7019224A3A443(iLocal_71, 310, true);
										}
										func_114(1);
									}
								}
								else if (func_4())
								{
									if (func_3(iLocal_71))
									{
										unk_0xB0D7019224A3A443(iLocal_71, 310, true);
									}
									func_114(1);
								}
								break;
						}
					}
					else
					{
						if (!unk_0x4915F4759304D5CF(iLocal_72))
						{
							if (unk_0xE0FD180CD24C0B67(iLocal_72, iLocal_73, 0))
							{
								unk_0x5175E271E03B40D8(iLocal_72, iLocal_73, unk_0xA19140A5C42D8715(), 8, 50f, iLocal_120, 10f, 10f, 0);
								unk_0xD738221C247C8B71(iLocal_72, true);
								unk_0xA5DE74AE39867B03(unk_0x8F474E419F56E48D(iLocal_72));
							}
							else
							{
								unk_0x33B5487515BD13D5(iLocal_72, unk_0xA19140A5C42D8715(), 150f, -1, 0, 0);
								unk_0xD738221C247C8B71(iLocal_72, true);
								unk_0xA5DE74AE39867B03(unk_0x8F474E419F56E48D(iLocal_72));
							}
						}
						wait(0);
						func_231();
					}
				}
				else
				{
					if (iLocal_47 == 1)
					{
						if (func_162(iLocal_73))
						{
							unk_0x4C842FAB634AC89E(&iLocal_73);
						}
						if (!unk_0x4915F4759304D5CF(iLocal_72))
						{
							unk_0x680F17660351F21B(&iLocal_72);
						}
					}
					if (!unk_0x4915F4759304D5CF(iLocal_71))
					{
						if (unk_0x411C28019DEA5CEF(iLocal_71, sLocal_79, "agitated_idle_a", 3))
						{
							unk_0x9D03A5503D1FF614(iLocal_71, "waiting", sLocal_79, -2f);
						}
						func_1(iLocal_71, "GENERIC_CURSE_HIGH", 24);
						unk_0x2F89329397A277BC(&iLocal_74);
						unk_0x71CBFF70987FE89A(0, vLocal_88, 1f, 20000, 1193033728, 1056964608);
						unk_0x0EEB301CAA50A123(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
						unk_0x301F42EEE3C40328(iLocal_74);
						unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_74);
						unk_0x3A95A0A3221D4208(&iLocal_74);
					}
					func_231();
				}
			}
			else
			{
				if (!unk_0x4915F4759304D5CF(iLocal_72))
				{
					unk_0x33B5487515BD13D5(iLocal_72, unk_0xA19140A5C42D8715(), 150f, -1, 0, 0);
					unk_0xD738221C247C8B71(iLocal_72, true);
				}
				if (unk_0xDC5D81351D6A4DDB(iLocal_73))
				{
					unk_0x70B1045E099298C1(iLocal_73, 50f);
				}
				func_231();
			}
		}
	}
}

void func_1(int iParam0, char* sParam1, int iParam2)
{
	unk_0xE85BD4A26C0DFACA(iParam0, sParam1, func_2(iParam2), 1);
}

int func_2(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_3(int iParam0)
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

int func_4()
{
	vector3 vVar0;
	char* sVar1;
	vector3 vVar2;
	float fVar3;
	
	sVar1 = "chassis";
	func_56();
	if (((!unk_0x4915F4759304D5CF(iLocal_71) && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715())) && func_162(iLocal_73)) && unk_0x39C2D9AB77873F84(sLocal_126))
	{
		switch (iLocal_49)
		{
			case 0:
				if (unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
				{
					if (func_44(1, 0, 1))
					{
						if (!unk_0x05EFB6A616B6FADE(Global_2383, 11))
						{
							if (!unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715()))
							{
								func_33(1, 1, 1, 0, 0);
								if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
								{
									unk_0x135C61E339DABBAC(1);
									while (!func_31(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), fLocal_53, 1, 1056964608, 0, 1, 0))
									{
										unk_0x74BF5F6EEF62D5A9();
										wait(0);
									}
									func_31(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), fLocal_53, 0, 1056964608, 0, 1, 0);
								}
								unk_0x74BF5F6EEF62D5A9();
								if (!unk_0x4915F4759304D5CF(iLocal_71))
								{
									unk_0x2D2E827C6C3D6D26(iLocal_71, 0);
								}
								func_29();
								func_23(0);
								unk_0x74BF5F6EEF62D5A9();
								iLocal_49 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 0);
				unk_0xBA75315E0F357DD3(iLocal_73, 0, 0, 0f);
				unk_0x30C16293FF15B466(iLocal_73, 0, 1, 1, 1);
				unk_0x74BF5F6EEF62D5A9();
				if (iLocal_121 == 1)
				{
					if (func_162(iLocal_73))
					{
						if (func_43(unk_0x552C823E1D2A019C(iLocal_73), 336f, 90f))
						{
							vLocal_84 = { -2254.3f, 4273.361f, 44.9697f };
							fLocal_89 = 336.6557f;
							vLocal_83 = { -2252.683f, 4274.16f, 45.0612f };
							vLocal_85 = { -2257.825f, 4269.189f, 44.6334f };
							fLocal_90 = 272.8688f;
							vLocal_97 = { -2254.588f, 4277.307f, 45.6133f };
							vLocal_98 = { 6.6248f, 0.0369f, 179.5595f };
						}
						else
						{
							vLocal_84 = { -2254.223f, 4272.33f, 44.9193f };
							fLocal_89 = 148.0287f;
							vLocal_85 = { -2255.733f, 4271.32f, 44.8166f };
							fLocal_90 = 179.4774f;
							vLocal_83 = { -2257.088f, 4268.938f, 44.6456f };
							vLocal_97 = { -2255.775f, 4274.144f, 46.0666f };
							vLocal_98 = { 2.8781f, 0.3464f, -146.6097f };
						}
					}
					vVar2 = { -2269.34f, 4279.89f, 45.47f };
					fVar3 = 53.23f;
					fLocal_96 = 50f;
					unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), vLocal_83, 1, false, 0, 1);
					unk_0xB20B772FD9DE1847(unk_0xA19140A5C42D8715(), joaat("weapon_unarmed"), true);
					unk_0x4299736016AECE26(iLocal_71, vLocal_85, 1, false, 0, 1);
					unk_0x92DDCF53AA47A63D(iLocal_73, fLocal_89);
					unk_0x4299736016AECE26(iLocal_73, vLocal_84, 1, false, 0, 1);
				}
				else
				{
					if (!func_43(unk_0x552C823E1D2A019C(iLocal_73), 64.6764f, 90f))
					{
						vLocal_97 = { -478.7095f, -2163.598f, 10.3091f };
						vLocal_98 = { -7.4391f, 0.0006f, 35.6865f };
						vLocal_84 = { -484.9581f, -2155.266f, 8.248f };
						fLocal_89 = 243.308f;
						fLocal_96 = 22f;
					}
					else
					{
						vLocal_97 = { -488.0143f, -2149.419f, 9.9817f };
						vLocal_98 = { -11.7475f, 0.0006f, -145.0045f };
						vLocal_84 = { -484.3195f, -2154.188f, 8.2182f };
						fLocal_89 = 64.6764f;
						fLocal_96 = 36.9289f;
					}
					vVar2 = { -486.92f, -2169.01f, 8.89f };
					fVar3 = 63.1f;
					unk_0x4299736016AECE26(iLocal_73, vLocal_84, 1, false, 0, 1);
					unk_0xB20B772FD9DE1847(unk_0xA19140A5C42D8715(), joaat("weapon_unarmed"), true);
					unk_0x92DDCF53AA47A63D(iLocal_73, fLocal_89);
				}
				unk_0xF10B3BC4F73177E5(unk_0xD4E735F4B6A956AC(), 0, 0);
				if (func_162(iLocal_73))
				{
					unk_0x99F546A9200EA026(iLocal_73, 1084227584);
					if (unk_0xDC5D81351D6A4DDB(iLocal_72))
					{
						if (unk_0xE0FD180CD24C0B67(iLocal_72, iLocal_73, 0))
						{
							unk_0x680F17660351F21B(&iLocal_72);
						}
					}
				}
				vLocal_130 = { 0f, 0f, 0f };
				vLocal_131 = { 0f, 0f, 0f };
				iLocal_122 = unk_0x70788DC3D80C9DEB(vLocal_130, vLocal_131, 2);
				unk_0x460F6BE568AFE564(iLocal_122, iLocal_73, unk_0x4F9AEAB2CC029A5C(iLocal_73, sVar1));
				unk_0x0BC3D6353E611561(iLocal_122, vLocal_130, vLocal_131, 2);
				unk_0xE5565DEAABF9D588(iLocal_71, iLocal_122, sLocal_126, sLocal_128, 1000f, -2f, 0, 0, 1148846080, 0);
				unk_0xE5565DEAABF9D588(unk_0xA19140A5C42D8715(), iLocal_122, sLocal_126, sLocal_129, 1000f, -2f, 1024, 0, 1148846080, 0);
				iLocal_75 = unk_0x4AD86AC07DD005D4("DEFAULT_ANIMATED_CAMERA", vLocal_97, vLocal_98, fLocal_96, 0, 2);
				unk_0xF84EE501E63C86CF(iLocal_75, iLocal_122, "car_returned_cam", sLocal_126);
				unk_0x63B4688F43DF17B7(iLocal_73, sLocal_127, sLocal_126, 1000f, 0, 0, 0, 0f, 262144);
				vLocal_130 = { unk_0xE2BBD32891C18569(iLocal_73, true) };
				vLocal_131 = { unk_0x288B716F47E9BBBC(iLocal_73, 2) };
				if (func_162(iLocal_76))
				{
					if (func_22(iLocal_76, vLocal_84, 1) <= 11f)
					{
						unk_0x4299736016AECE26(iLocal_76, vVar2, 1, false, 0, 1);
						unk_0x92DDCF53AA47A63D(iLocal_76, fVar3);
						unk_0x99F546A9200EA026(iLocal_76, 1084227584);
						unk_0x1F7948851FB36E88(iLocal_76, true, 0);
					}
				}
				unk_0xFDD15D670AD33E10(vLocal_84, 10f, 1, 0, 0, false);
				settimera(0);
				if (iLocal_121 == 2)
				{
					unk_0x45BAD633963B31EC(joaat("rocoto"), 15);
				}
				else
				{
					unk_0x45BAD633963B31EC(joaat("peyote"), 15);
				}
				unk_0x341AA026B031328A(vLocal_84, 15f);
				unk_0x930701157A4B9374(iLocal_75, true);
				unk_0x8E88E73F74A9FF79(true, false, 3000, 1, 0, 0);
				iLocal_49 = 3;
				unk_0x69B67EE33CD94966(1f);
				break;
			
			case 3:
				unk_0x74BF5F6EEF62D5A9();
				if (func_19())
				{
					iLocal_49 = 4;
				}
				if (iLocal_121 == 1)
				{
					if (timera() > 1500 && !bLocal_150)
					{
						if (func_45(&Local_102, cLocal_114, sLocal_101, 4, 0, 0, 0))
						{
							iLocal_49 = 4;
						}
					}
				}
				else if (unk_0xFE5DE0C3200E00F2(iLocal_122) && !bLocal_150)
				{
					if (unk_0x33CECDD9E141E18E(iLocal_122) >= 0.2f)
					{
						if (func_45(&Local_102, cLocal_114, sLocal_101, 4, 0, 0, 0))
						{
							iLocal_58 = 0;
							iLocal_49 = 4;
						}
					}
				}
				unk_0x69B67EE33CD94966(1f);
				break;
			
			case 4:
				unk_0x74BF5F6EEF62D5A9();
				if (iLocal_121 == 2)
				{
					if (!func_18())
					{
						if (iLocal_58 == 0)
						{
							if (func_45(&Local_102, cLocal_114, "RECT2_REWARD", 4, 0, 0, 0))
							{
								iLocal_58 = 1;
							}
						}
					}
				}
				unk_0x69B67EE33CD94966(1f);
				if (iLocal_121 == 1)
				{
					if (unk_0xFE5DE0C3200E00F2(iLocal_122))
					{
						if (iLocal_132 == 0)
						{
							if (unk_0x33CECDD9E141E18E(iLocal_122) >= 0.83f)
							{
								unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
								unk_0x3F01127ECD227890(unk_0xA19140A5C42D8715(), sLocal_126, sLocal_129, 1000f, -2f, -1, 1048576, unk_0x33CECDD9E141E18E(iLocal_122), 0, 0, 0);
								unk_0x3A3E4B7C6FBE305D(unk_0xA19140A5C42D8715(), 1, 0);
								iLocal_132 = 1;
							}
						}
						if (!unk_0x4915F4759304D5CF(iLocal_71))
						{
							if (unk_0x33CECDD9E141E18E(iLocal_122) >= 0.83f)
							{
								if (unk_0x411C28019DEA5CEF(iLocal_71, sLocal_126, sLocal_128, 2))
								{
									unk_0x6AE6C20282990E48(iLocal_71, -1000f, 0);
									if (!unk_0x5D7DFE2058701942(iLocal_71, 0))
									{
										if (func_162(iLocal_73))
										{
											unk_0x692D5500D82E4F5D(iLocal_71, iLocal_73, -1);
											unk_0xB0D7019224A3A443(iLocal_71, 310, true);
										}
									}
									unk_0x3A3E4B7C6FBE305D(iLocal_71, 1, 0);
								}
								else
								{
									unk_0xB0D7019224A3A443(iLocal_71, 310, true);
								}
							}
						}
					}
				}
				else if (unk_0xFE5DE0C3200E00F2(iLocal_122))
				{
					if (iLocal_132 == 0)
					{
						if (unk_0x33CECDD9E141E18E(iLocal_122) >= 0.86f)
						{
							unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
							unk_0x3F01127ECD227890(unk_0xA19140A5C42D8715(), sLocal_126, sLocal_129, 1000f, -2f, -1, 1048576, unk_0x33CECDD9E141E18E(iLocal_122), 0, 0, 0);
							unk_0x3A3E4B7C6FBE305D(unk_0xA19140A5C42D8715(), 1, 0);
							iLocal_132 = 1;
						}
					}
					if (!unk_0x4915F4759304D5CF(iLocal_71))
					{
						if (unk_0x33CECDD9E141E18E(iLocal_122) > 0.847f)
						{
							if (unk_0x411C28019DEA5CEF(iLocal_71, sLocal_126, sLocal_128, 2))
							{
								unk_0x6AE6C20282990E48(iLocal_71, -1000f, 0);
								if (!unk_0x5D7DFE2058701942(iLocal_71, 0))
								{
									if (func_162(iLocal_73))
									{
										unk_0x692D5500D82E4F5D(iLocal_71, iLocal_73, -1);
										unk_0xB0D7019224A3A443(iLocal_71, 310, true);
									}
								}
								unk_0x3A3E4B7C6FBE305D(iLocal_71, 1, 0);
							}
							else
							{
								unk_0xB0D7019224A3A443(iLocal_71, 310, true);
							}
						}
					}
				}
				if (((unk_0xFE5DE0C3200E00F2(iLocal_122) && unk_0x33CECDD9E141E18E(iLocal_122) >= 0.99f) || !unk_0xFE5DE0C3200E00F2(iLocal_122)) || func_19())
				{
					if (!unk_0x7112137033807390(iLocal_73, 0) && unk_0x411C28019DEA5CEF(iLocal_73, sLocal_126, sLocal_127, 3))
					{
						unk_0x9F547C61053A0649(iLocal_73, sLocal_126, sLocal_127, 1f);
					}
					if (unk_0xFE5DE0C3200E00F2(iLocal_122))
					{
						unk_0x71ABFE3795D5D0C2(iLocal_122, 1f);
					}
					if (bLocal_150)
					{
						vVar0 = { unk_0x9D8252F9238B0F81(sLocal_126, sLocal_129, vLocal_130, vLocal_131, 1f, 2) };
						unk_0x8F7BA8E028ADF980(vVar0, &(vVar0.f_2), 0, 0);
						unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), vVar0, 1, false, 0, 1);
						vVar0 = { unk_0xD3F9112CE33C93B9(sLocal_126, sLocal_129, vLocal_130, vLocal_131, 1f, 2) };
						unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), vVar0.z);
						unk_0xAA32DD4848CF93E0(0f, 1065353216);
						unk_0xD87B76260C547F31(0f);
					}
					unk_0xF757C0D3A087F145(unk_0xA19140A5C42D8715(), -1871534317, true, 0, 1);
					if (!unk_0x5D7DFE2058701942(iLocal_71, 0))
					{
						if (func_162(iLocal_73))
						{
							unk_0x692D5500D82E4F5D(iLocal_71, iLocal_73, -1);
							unk_0xB0D7019224A3A443(iLocal_71, 310, true);
						}
					}
					if (!unk_0x4915F4759304D5CF(iLocal_71))
					{
						if (unk_0x5D7DFE2058701942(iLocal_71, 0))
						{
							if (func_162(iLocal_73))
							{
								unk_0xBA75315E0F357DD3(iLocal_73, 0, 0, 0f);
								unk_0x30C16293FF15B466(iLocal_73, 0, 1, 1, 1);
								iLocal_125 = unk_0xFD34717937104F1C();
								iLocal_49 = 5;
							}
						}
					}
				}
				break;
			
			case 5:
				unk_0x74BF5F6EEF62D5A9();
				if ((unk_0xFD34717937104F1C() - iLocal_125) > 100)
				{
					if (func_3(iLocal_71) && func_162(iLocal_73))
					{
						unk_0x2F89329397A277BC(&iLocal_74);
						unk_0x95015EE4AAC98495(0, iLocal_73, 9, 1000);
						unk_0x731722E696597BD1(0, iLocal_73, 25f, iLocal_119);
						unk_0x301F42EEE3C40328(iLocal_74);
						unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_74);
						unk_0x3A95A0A3221D4208(&iLocal_74);
						unk_0xB0D7019224A3A443(iLocal_71, 310, true);
					}
					func_33(0, 1, 1, 0, 0);
					if (bLocal_150)
					{
						if (unk_0x37B568B777BC65F9(iLocal_75))
						{
							unk_0x930701157A4B9374(iLocal_75, false);
							unk_0x77F0486CE0E598D5(iLocal_75, 0);
						}
						unk_0x8E88E73F74A9FF79(false, false, 3000, 1, 0, 0);
						wait(750);
						unk_0xAA32DD4848CF93E0(0f, 1065353216);
						unk_0xD87B76260C547F31(0f);
						func_17(500, 1);
					}
					else
					{
						unk_0xCE2F428A0EEBBE18(0, 0, 3, 0);
						unk_0x930701157A4B9374(iLocal_75, false);
					}
					unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
					func_16(&iLocal_73);
					func_5(func_10(), 4, 5);
					return 1;
				}
				else if (func_3(iLocal_71))
				{
					unk_0xB0D7019224A3A443(iLocal_71, 310, true);
				}
				break;
			}
	}
	return 0;
}

void func_5(int iParam0, int iParam1, int iParam2)
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
				iVar0 = func_9(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_6(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_7(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
}

int func_7(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_8();
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

int func_8()
{
	return Global_1312736;
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_7(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_10()
{
	func_11();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_11()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_15(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_14(unk_0xA19140A5C42D8715());
			if (func_13(iVar0) && (!func_12(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_13(Global_106070.f_2355.f_539.f_4301))
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

bool func_12(int iParam0)
{
	return Global_36117 == iParam0;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_16(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(*iParam0))
	{
		unk_0x7112137033807390(*iParam0, 0);
		if (unk_0x4943BEEC19289B8E(*iParam0) && unk_0x82384F63D814C864(*iParam0, 1))
		{
			unk_0x792676988A48387F(iParam0);
		}
	}
}

void func_17(int iParam0, bool bParam1)
{
	if (unk_0x71364F510A1CB69F() || unk_0x607776744A243309())
	{
		if (!unk_0x3BE8B7AEED1A3971())
		{
			unk_0x70C1F5AA59767FE6(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x3A83743561B4F70C())
		{
			wait(0);
		}
	}
}

int func_18()
{
	if (Global_15822 != 0 || unk_0x904275961B875DEB())
	{
		return 1;
	}
	return 0;
}

int func_19()
{
	int iVar0;
	
	iVar0 = joaat("peyote");
	if (iLocal_121 == 2)
	{
		iVar0 = joaat("rocoto");
	}
	if (func_20(1000))
	{
		if (unk_0xE4821F58D6594AAF(iVar0))
		{
			unk_0x930701157A4B9374(iLocal_75, false);
			unk_0x9662BE461F9FDF9E(500);
			while (unk_0x607776744A243309())
			{
				unk_0x74BF5F6EEF62D5A9();
				wait(0);
			}
			bLocal_150 = true;
			return 1;
		}
	}
	if (unk_0x71364F510A1CB69F())
	{
		if (unk_0xE4821F58D6594AAF(iVar0))
		{
			bLocal_150 = true;
			return 1;
		}
	}
	return 0;
}

int func_20(int iParam0)
{
	if (unk_0x3A83743561B4F70C())
	{
		if ((unk_0xFD34717937104F1C() - Global_28) > iParam0)
		{
			Global_27 = unk_0xFD34717937104F1C();
		}
		Global_28 = unk_0xFD34717937104F1C();
		if ((unk_0xFD34717937104F1C() - Global_27) > iParam0)
		{
			if (func_21())
			{
				Global_27 = unk_0xFD34717937104F1C();
				return 1;
			}
		}
	}
	return 0;
}

int func_21()
{
	if (unk_0xD1ABB20CFF127CCC())
	{
		return 0;
	}
	if (unk_0xDF0ADAD7E584090D(0, 18) || unk_0xDF0ADAD7E584090D(2, 18))
	{
		return 1;
	}
	return 0;
}

float func_22(int iParam0, vector3 vParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		vVar0 = { unk_0xE2BBD32891C18569(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0xE2BBD32891C18569(iParam0, false) };
	}
	return unk_0x499324B3EF19C288(vVar0, vParam1, bParam2);
}

void func_23(int iParam0)
{
	if (func_28())
	{
		return;
	}
	if (!Global_14513.f_1 == 1)
	{
		if (func_27(0))
		{
			func_24(iParam0);
		}
		unk_0x2BCFB39E86340DAA(&Global_2384, 2);
	}
}

void func_24(int iParam0)
{
	if (func_28())
	{
		return;
	}
	if (Global_14681)
	{
		func_26(0, 0);
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

int func_25()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_26(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_27(0))
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

int func_27(int iParam0)
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

bool func_28()
{
	return unk_0x05EFB6A616B6FADE(Global_1678593, 19);
}

void func_29()
{
	Global_14688 = 0;
	func_30();
}

void func_30()
{
	unk_0xB4E5B1A6FE923ECB();
	Global_16833 = 0;
	if (unk_0x904275961B875DEB())
	{
		unk_0xA8B97F91CBDE376C(false);
		Global_15822 = 6;
	}
}

int func_31(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xD481A812073CCF02(0, 71, 1);
	unk_0xD481A812073CCF02(0, 72, 1);
	unk_0xD481A812073CCF02(0, 76, 1);
	unk_0xD481A812073CCF02(0, 73, 1);
	unk_0xD481A812073CCF02(0, 59, 1);
	unk_0xD481A812073CCF02(0, 60, 1);
	if (bParam5)
	{
		unk_0xD481A812073CCF02(0, 75, 1);
	}
	unk_0xD481A812073CCF02(0, 80, 1);
	if (!bParam6)
	{
		unk_0xD481A812073CCF02(0, 69, 1);
		unk_0xD481A812073CCF02(0, 70, 1);
		unk_0xD481A812073CCF02(0, 68, 1);
	}
	unk_0xD481A812073CCF02(0, 74, 1);
	unk_0xD481A812073CCF02(0, 86, 1);
	unk_0xD481A812073CCF02(0, 81, 1);
	unk_0xD481A812073CCF02(0, 82, 1);
	unk_0xD481A812073CCF02(0, 138, 1);
	unk_0xD481A812073CCF02(0, 136, 1);
	unk_0xD481A812073CCF02(0, 114, 1);
	unk_0xD481A812073CCF02(0, 107, 1);
	unk_0xD481A812073CCF02(0, 110, 1);
	unk_0xD481A812073CCF02(0, 89, 1);
	unk_0xD481A812073CCF02(0, 89, 1);
	unk_0xD481A812073CCF02(0, 87, 1);
	unk_0xD481A812073CCF02(0, 88, 1);
	unk_0xD481A812073CCF02(0, 113, 1);
	unk_0xD481A812073CCF02(0, 115, 1);
	unk_0xD481A812073CCF02(0, 116, 1);
	unk_0xD481A812073CCF02(0, 117, 1);
	unk_0xD481A812073CCF02(0, 118, 1);
	unk_0xD481A812073CCF02(0, 119, 1);
	unk_0xD481A812073CCF02(0, 131, 1);
	unk_0xD481A812073CCF02(0, 132, 1);
	unk_0xD481A812073CCF02(0, 123, 1);
	unk_0xD481A812073CCF02(0, 126, 1);
	unk_0xD481A812073CCF02(0, 129, 1);
	unk_0xD481A812073CCF02(0, 130, 1);
	unk_0xD481A812073CCF02(0, 133, 1);
	unk_0xD481A812073CCF02(0, 134, 1);
	unk_0x8BCFD05DF9BB6004();
	func_32(iParam0);
	if ((unk_0xFD34717937104F1C() - Global_29) > 500)
	{
		unk_0x0185AEECD1FF63F3(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0xFD34717937104F1C();
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		if (unk_0x69C0BB7D03EE045D(unk_0xEAA5CEF8875FEEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_32(int iParam0)
{
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		if (unk_0xE276FD46E2FAC906(iParam0))
		{
			if (unk_0x7FBA23EA56BC811C(iParam0))
			{
				unk_0xAA99F8210C8FE6FD(iParam0, 0);
			}
		}
	}
}

void func_33(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		unk_0xC97ACA9456A064F3(unk_0xD4E735F4B6A956AC());
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 1);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 1);
		func_40(1);
		unk_0x158181F81A221D70();
		unk_0xD8EA6395AE60BF4A();
		if (Global_14513.f_1 > 3)
		{
			if (unk_0xB39808C1DCE0DCFA())
			{
				unk_0xA8B97F91CBDE376C(false);
			}
			if (!func_25())
			{
				Global_14513.f_1 = 3;
			}
			Global_15822 = 5;
		}
		func_39(1, iParam3, iParam2, 0);
		Global_56187 = 1;
		Global_68497 = 1;
		Global_71203 = 1;
	}
	else
	{
		func_40(0);
		unk_0x21727E2C492FE1B3();
		Global_56187 = 0;
		if (bParam1)
		{
			unk_0x1A81FD78261DCFCD();
		}
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 0);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 0);
		func_39(0, iParam3, iParam2, 0);
		if (unk_0x4C9BACA8D249CB13())
		{
			if ((((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_37(unk_0xD4E735F4B6A956AC())) && !func_35(unk_0xD4E735F4B6A956AC(), 0)) && !func_34()) && !bParam4)
			{
				unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), false);
			}
		}
		else if ((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_37(unk_0xD4E735F4B6A956AC())) && !bParam4)
		{
			unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), false);
		}
		Global_71203 = 0;
	}
}

bool func_34()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 14);
}

bool func_35(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_36(-1, 0) == 8;
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

int func_36(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_8();
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

int func_37(int iParam0)
{
	if (func_35(iParam0, 0))
	{
		return 1;
	}
	if (func_38())
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

bool func_38()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

int func_39(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x47C01C0E6F4C1D06())
	{
		if (unk_0xDA9416DF9C88432D() != iParam0 && uParam2)
		{
			unk_0x5126E6F88EF5B7A1(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_40(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x2BCFB39E86340DAA(&Global_2383, 13);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_2383, 13);
	}
}

void func_41(vector3 vParam0, float fParam1, float fParam2)
{
	bool bVar0;
	vector3 vVar1;
	float fVar2;
	
	bVar0 = false;
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		vVar1 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) - vParam0 };
		fVar2 = unk_0x0C1B8F3F6EFDC58B(vVar1.x, vVar1.y);
		if (func_42(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
		vVar1 = { vParam0 - unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) };
		fVar2 = unk_0x0C1B8F3F6EFDC58B(vVar1.x, vVar1.y);
		if (func_42(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (unk_0xEAA5CEF8875FEEED(unk_0xA19140A5C42D8715()) > 30f)
		{
			*fParam1 = (6f * 4f);
		}
		else if (unk_0xEAA5CEF8875FEEED(unk_0xA19140A5C42D8715()) > 20f)
		{
			*fParam1 = (6f * 3f);
		}
		else if (unk_0xEAA5CEF8875FEEED(unk_0xA19140A5C42D8715()) > 10f)
		{
			*fParam1 = (6f * 2f);
		}
		else
		{
			*fParam1 = 6f;
		}
		*fParam2 = ((*fParam1 / 1.33f) - 1f);
	}
	else
	{
		*fParam1 = 6f;
		*fParam2 = ((*fParam1 / 1.33f) - 1f);
	}
}

int func_42(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		fVar0 = unk_0x552C823E1D2A019C(iParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

int func_43(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_44(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x95129531A8C1F3B9())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		if (!unk_0x8A29BBDF4603E52B(unk_0xA19140A5C42D8715()))
		{
			return 0;
		}
		iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
		if (bParam0)
		{
			if (unk_0x7112137033807390(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x7112137033807390(iVar0, 0))
			{
				if (unk_0xB0D49A1F9F054602(iVar0, -1, 0) != unk_0xA19140A5C42D8715())
				{
					return 0;
				}
			}
		}
		if (!unk_0x7112137033807390(iVar0, 0))
		{
			if (unk_0xC5F2C603295DE6F0(iVar0) < 0.95f || unk_0xC5F2C603295DE6F0(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	if (!unk_0x783F4B81000DAFE2(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	return 1;
}

bool func_45(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_54(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_46(sParam2, iParam3, 0);
}

int func_46(char* sParam0, int iParam1, bool bParam2)
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
					func_53();
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
		if (func_52(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_51();
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
				func_50();
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
				if (func_49())
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
			func_48();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_47();
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
		func_53();
	}
	return 0;
}

void func_47()
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

void func_48()
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

int func_49()
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

void func_50()
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
		Global_14513 = func_10();
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

void func_51()
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

bool func_52(int iParam0, int iParam1)
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

void func_53()
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

void func_54(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_55()
{
	if (unk_0x4915F4759304D5CF(iLocal_72))
	{
		return 1;
	}
	else if (func_162(iLocal_73))
	{
		if (!unk_0x10E54C268D1B3FED(iLocal_72, iLocal_73, 10f, 10f, 10f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_56()
{
	float fVar0;
	int iVar1;
	bool bVar2;
	
	if (func_162(iLocal_73))
	{
		fVar0 = unk_0x2F78D19B3446544E(iLocal_73);
		if (fVar0 > 0f && fVar0 < 650f)
		{
			bVar2 = true;
		}
		else if (fVar0 > 650f && fVar0 < 950f)
		{
		}
		else
		{
			iVar1 = 1;
		}
		if (iVar1 && unk_0xEE7E2878CDBA6E58(iLocal_73))
		{
			sLocal_101 = sLocal_113;
		}
		else if (bVar2)
		{
			sLocal_101 = sLocal_112;
		}
		else
		{
			sLocal_101 = sLocal_111;
		}
	}
}

void func_57(var uParam0)
{
	*uParam0 = -99;
}

int func_58(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_59(iParam0, bParam1, 145);
}

int func_59(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_60(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xCE3CB618AFE55EFB(iVar0)) && unk_0x445EC9E7EACB710E(&(Global_106070.f_28022[iParam2 /*29*/].f_3)))
	{
		unk_0xC4F12E446CCE89F5(iVar0, &(Global_106070.f_28022[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_60(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x6A15DD6A863D5E27(iParam0);
	if (unk_0xFAC06EE780B57279(iParam0))
	{
		unk_0x575CF00E129E0CE1(iVar0, func_61(unk_0x4C9BACA8D249CB13(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xF46EDCACB3804F87(iVar0, bParam1);
		}
		else
		{
			unk_0x570128B7829A8EAA(iVar0, 2);
		}
	}
	else if (unk_0x281590680327CDEA(iParam0))
	{
		unk_0x575CF00E129E0CE1(iVar0, func_61(unk_0x4C9BACA8D249CB13(), 0.7f, 0.7f));
		unk_0xF46EDCACB3804F87(iVar0, bParam1);
	}
	else if (unk_0x92D42293DA8F9805(iParam0))
	{
		unk_0x575CF00E129E0CE1(iVar0, func_61(unk_0x4C9BACA8D249CB13(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_61(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_62(int iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xCE3CB618AFE55EFB(*iParam0))
	{
		unk_0xE1623437A3194332(iParam0);
		bVar0 = true;
	}
	if (unk_0xCE3CB618AFE55EFB(iParam0->f_1))
	{
		unk_0xE1623437A3194332(&(iParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xDC5D81351D6A4DDB(iParam0->f_7))
	{
		if (!unk_0x7112137033807390(iParam0->f_7, 0))
		{
			if (unk_0x8AB5836B2F907B07(iParam0->f_7))
			{
				unk_0xC5203C09CD1079F8(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_63(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xA6580F898F4E801C();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		if (!unk_0x8AB5836B2F907B07(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xC5203C09CD1079F8(iParam0, 1);
			}
			else
			{
				unk_0xF33CC53A33256EAF(iParam0, 1, iParam8);
			}
			iParam1->f_7 = iParam0;
			unk_0x8DDE0A393F27D92F(iParam0, iParam2);
			unk_0xB2908AF5E9A0E342(iParam0, fParam6);
			if (unk_0xCE3CB618AFE55EFB(*iParam1))
			{
				unk_0xAD8FB9E563A1FF80(*iParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x76D53541FA44D2BF(iParam0, iParam9);
		}
		unk_0x0FDBA0CC86485F19(iParam0, bParam4);
		unk_0x452FE41DB35A74AC(iParam0, iParam5);
		*iParam1 = unk_0xB29DC5E54F9743D9(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xCE3CB618AFE55EFB(*iParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x570128B7829A8EAA(*iParam1, iParam8);
				}
				if (!unk_0x429D45A6C6520026(sParam7))
				{
					unk_0x33442A50C05ADC38("STRING");
					if (bParam10)
					{
						unk_0xC327C023FDA37F2E(sParam7);
					}
					else
					{
						unk_0x4FDA9E6EF359F8A9(sParam7);
					}
					unk_0x8367CB7109A3AFAA(*iParam1);
				}
				unk_0xAD8FB9E563A1FF80(*iParam1, 7);
			}
		}
		if (!unk_0x05EFB6A616B6FADE(iParam1->f_6, 2))
		{
			if (unk_0xCE3CB618AFE55EFB(*iParam1))
			{
				unk_0x2BCFB39E86340DAA(&(iParam1->f_6), 2);
			}
		}
		if (unk_0x5D7DFE2058701942(iParam0, 0))
		{
			iParam1->f_1 = unk_0xB151F9CBE90FEA24(iParam0);
			if (!unk_0x05EFB6A616B6FADE(iParam1->f_6, 3))
			{
				if (unk_0xCE3CB618AFE55EFB(iParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x570128B7829A8EAA(iParam1->f_1, iParam8);
					}
					if (!unk_0x429D45A6C6520026(sParam7))
					{
						unk_0x33442A50C05ADC38("STRING");
						if (bParam10)
						{
							unk_0xC327C023FDA37F2E(sParam7);
						}
						else
						{
							unk_0x4FDA9E6EF359F8A9(sParam7);
						}
						unk_0x8367CB7109A3AFAA(iParam1->f_1);
					}
					unk_0xAD8FB9E563A1FF80(iParam1->f_1, 7);
					unk_0x2BCFB39E86340DAA(&(iParam1->f_6), 3);
				}
			}
			else if (!unk_0xCE3CB618AFE55EFB(iParam1->f_1))
			{
				iParam1->f_1 = 0;
				unk_0xFA57C719261AA55D(&(iParam1->f_6), 3);
			}
		}
		else if (unk_0xCE3CB618AFE55EFB(iParam1->f_1))
		{
			iParam1->f_1 = 0;
			unk_0xFA57C719261AA55D(&(iParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_64(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x4C9BACA8D249CB13())
	{
		if (unk_0x05EFB6A616B6FADE(Global_2524719.f_4577, 26))
		{
			return;
		}
	}
	if (unk_0xECD112E8A7AB2E8A())
	{
		unk_0xEB60EF2E9051E817(iParam2);
		unk_0xEF9AD7817AAF81A5("FocusIn");
		unk_0x5AD7D03C214BDA88("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xE60B9F9B48D4783F("FocusOut", 0, 0);
			unk_0xE11F00B4AC919F45(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	unk_0xB9514DB95C310944(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x7032042E5696FFD7(sVar0))
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x7032042E5696FFD7(uParam0->f_3))
	{
		if (func_65(uParam0->f_3))
		{
			unk_0x135C61E339DABBAC(1);
		}
	}
	if (!unk_0x7032042E5696FFD7(sVar0))
	{
		if (func_65(sVar0))
		{
			unk_0x135C61E339DABBAC(1);
		}
	}
}

int func_65(char* sParam0)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	return unk_0x3D94488A86ABB03F(0);
}

void func_66()
{
	if (!unk_0x4915F4759304D5CF(iLocal_72))
	{
		unk_0x3B7A32E04BBE59A5(iLocal_72, 2, false);
		unk_0x3B7A32E04BBE59A5(iLocal_72, 6, false);
		unk_0x3B7A32E04BBE59A5(iLocal_72, 3, true);
		unk_0x3B7A32E04BBE59A5(iLocal_72, 1, false);
		unk_0xDA4D3941AFF8EF12(iLocal_72, unk_0xA19140A5C42D8715(), 0, 16);
		unk_0x1F4E5EFBFE503FB3(iLocal_72, false);
		unk_0xA5DE74AE39867B03(unk_0x8F474E419F56E48D(iLocal_72));
	}
	else
	{
		unk_0xA5DE74AE39867B03(unk_0x8F474E419F56E48D(iLocal_72));
	}
	if (func_162(iLocal_73))
	{
		unk_0x14293208022014FA(iLocal_73, 1);
	}
}

int func_67()
{
	if (func_162(iLocal_73))
	{
		if (unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_73, 40f, 40f, 10f, 0, 1, 0))
		{
			if (iLocal_77)
			{
				if (!unk_0x4915F4759304D5CF(iLocal_72))
				{
					if (!iLocal_118)
					{
						if (!unk_0x6C55C22D72D438C8(iLocal_73))
						{
							unk_0xF486A07743D53969(iLocal_72, unk_0xA19140A5C42D8715(), 0, 0f, 0f, 0f, 40f, 100, 1, -753768974);
							iLocal_118 = 1;
						}
					}
					if (unk_0xFD34717937104F1C() > iLocal_123 + 7000)
					{
						if (unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_73, 20f, 20f, 10f, 0, 1, 0))
						{
							if (func_45(&Local_102, cLocal_114, sLocal_109, 4, 0, 0, 0))
							{
								iLocal_123 = unk_0xFD34717937104F1C();
							}
						}
					}
					unk_0xDCB46BFC2265476A(iLocal_73);
					unk_0x5E7A328056545509(iLocal_73);
					iLocal_77 = 0;
				}
			}
			if (unk_0xDEAEC99031DCB92A(iLocal_73, unk_0xA19140A5C42D8715(), 1))
			{
				if (!unk_0x4915F4759304D5CF(iLocal_72))
				{
					func_45(&Local_102, cLocal_114, sLocal_109, 4, 0, 0, 0);
				}
				iLocal_78++;
				iLocal_77 = 1;
			}
			if (iLocal_78 > 10)
			{
				return 1;
			}
		}
		else
		{
			iLocal_118 = 0;
			iLocal_77 = 0;
		}
	}
	return 0;
}

int func_68()
{
	if (func_162(iLocal_73))
	{
		if (((unk_0xB7223494EA10AF2F(iLocal_73, 0, 0) || unk_0xB7223494EA10AF2F(iLocal_73, 1, 0)) || unk_0xB7223494EA10AF2F(iLocal_73, 4, 0)) || unk_0xB7223494EA10AF2F(iLocal_73, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_69()
{
	if (func_162(iLocal_73) && unk_0xCE3CB618AFE55EFB(iLocal_60))
	{
		func_70(&uLocal_138, iLocal_73, 0, 0, 1, 1, 1);
	}
}

void func_70(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_71(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_71(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	func_72(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_72(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
	{
		func_64(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_73(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_73(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xECD112E8A7AB2E8A())
	{
		if (unk_0xFD34717937104F1C() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (unk_0x7032042E5696FFD7(iVar0))
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_65(iVar0))
	{
		func_99();
	}
	if (func_98(iParam1) && unk_0x7E65E323A95E4187(iParam1))
	{
		iVar1 = 0;
		if (unk_0x281590680327CDEA(iParam1))
		{
			unk_0x45B5AAC4D9D5763D(unk_0xA2EA4BA455370F3C(iParam1));
			unk_0xBE54C1ECA23D5353(unk_0xA2EA4BA455370F3C(iParam1), 1);
			if (unk_0x6FEA5E9BDB249F54(unk_0xA2EA4BA455370F3C(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xFAC06EE780B57279(iParam1))
		{
			unk_0x2ACE38F0D5FED9B1(unk_0xB86D86A5DBBC79F0(iParam1));
			if (unk_0xA058EBCB7A8E4B6F(unk_0xB86D86A5DBBC79F0(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x92D42293DA8F9805(iParam1))
		{
			unk_0xD63516D4F476260E(unk_0x63F4756F241D86B8(iParam1));
			if (unk_0xFFEADF112F60E796(unk_0x63F4756F241D86B8(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xECD112E8A7AB2E8A())
		{
			if (func_93(uParam0, bParam5, bParam7, 0))
			{
				func_89(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_78(iVar0))
				{
					if ((unk_0x7032042E5696FFD7(uParam0->f_3) && !unk_0x7032042E5696FFD7(iVar0)) && unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
					{
						if ((iVar1 && !unk_0xE06AA0996C4E4E03()) && uParam6)
						{
							if (!func_65(iVar0))
							{
								func_77(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x3CAC2741CC1A631F("CMN_HINT", iVar0))
								{
									func_76(1);
								}
							}
						}
					}
				}
			}
			else if (func_78(iVar0))
			{
				if (unk_0x7032042E5696FFD7(uParam0->f_3) && !unk_0x7032042E5696FFD7(iVar0))
				{
					if (((unk_0x1A8481A7E865EC7C(iParam1) && iVar1) && !unk_0xE06AA0996C4E4E03()) && uParam6)
					{
						if (!func_65(iVar0))
						{
							func_77(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x3CAC2741CC1A631F("CMN_HINT", iVar0))
							{
								func_76(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x7032042E5696FFD7(sParam3))
			{
				if (func_65(sParam3))
				{
					unk_0x135C61E339DABBAC(1);
				}
			}
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
			{
				if (unk_0x5BEFAE930E36AE54(unk_0xA19140A5C42D8715()))
				{
					if (unk_0x1F7BAD75218F1A2C(3) == 3 || unk_0x1F7BAD75218F1A2C(3) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5BFF0F72CC04E4DA(unk_0xA19140A5C42D8715()))
				{
					if (unk_0x1F7BAD75218F1A2C(6) == 3 || unk_0x1F7BAD75218F1A2C(6) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA22CC9D85ECBCC81(unk_0xA19140A5C42D8715()))
				{
					if (unk_0x1F7BAD75218F1A2C(4) == 3 || unk_0x1F7BAD75218F1A2C(4) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xE13F2DC045CFCEA3(unk_0xA19140A5C42D8715()))
				{
					if (unk_0x1F7BAD75218F1A2C(5) == 3 || unk_0x1F7BAD75218F1A2C(5) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xE3DA5E98850626D0(unk_0xA19140A5C42D8715()))
				{
					if (unk_0x1F7BAD75218F1A2C(2) == 3 || unk_0x1F7BAD75218F1A2C(2) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF58C434FFA1FB5F6() == 3 || unk_0xF58C434FFA1FB5F6() == 4)
				{
					func_64(uParam0, iVar0, 1);
				}
			}
			if (!func_93(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_75(uParam0))
				{
					func_74(uParam0);
				}
			}
		}
	}
	else
	{
		func_64(uParam0, iVar0, 0);
	}
}

void func_74(var uParam0)
{
	if (func_98(unk_0xA19140A5C42D8715()))
	{
		unk_0x53FF9BDD8529ACD2(unk_0xA19140A5C42D8715());
	}
	if (unk_0xECD112E8A7AB2E8A())
	{
		unk_0xB9514DB95C310944(true);
		unk_0xEB60EF2E9051E817(0);
		unk_0x5AD7D03C214BDA88("HINT_CAM_SCENE");
		unk_0xEF9AD7817AAF81A5("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xE60B9F9B48D4783F("FocusOut", 0, 0);
			unk_0xE11F00B4AC919F45(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_75(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0xFD34717937104F1C()
		{
			return 1;
		}
	}
	return 0;
}

int func_76(bool bParam0)
{
	switch (Global_36117)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_106070.f_10021.f_100++;
			}
			return Global_106070.f_10021.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_106070.f_10021.f_101++;
			}
			return Global_106070.f_10021.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_106070.f_10021.f_102++;
			}
			return Global_106070.f_10021.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_77(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, true, iParam1);
}

int func_78(char* sParam0)
{
	if (!func_79(1, 1, 0))
	{
		if ((!unk_0x429D45A6C6520026(sParam0) && func_65(sParam0)) || func_65("CMN_HINT"))
		{
			unk_0x135C61E339DABBAC(1);
		}
		return 0;
	}
	switch (Global_36117)
	{
		case 0:
		case 3:
			if (func_76(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_76(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_76(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_79(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x47C3DC461C758C29())
	{
		return 0;
	}
	if (func_27(0))
	{
		return 0;
	}
	if (func_88())
	{
		return 0;
	}
	if (unk_0x2B21DC45DEAA4B80())
	{
		return 0;
	}
	if (Global_68494)
	{
		return 0;
	}
	if (unk_0x8B1574454E8C2421(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53362)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
		{
			if (unk_0x5BEFAE930E36AE54(unk_0xA19140A5C42D8715()))
			{
				if (unk_0x1F7BAD75218F1A2C(3) == 3 || unk_0x1F7BAD75218F1A2C(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5BFF0F72CC04E4DA(unk_0xA19140A5C42D8715()))
			{
				if (unk_0x1F7BAD75218F1A2C(6) == 3 || unk_0x1F7BAD75218F1A2C(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA22CC9D85ECBCC81(unk_0xA19140A5C42D8715()))
			{
				if (unk_0x1F7BAD75218F1A2C(4) == 3 || unk_0x1F7BAD75218F1A2C(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xE13F2DC045CFCEA3(unk_0xA19140A5C42D8715()))
			{
				if (unk_0x1F7BAD75218F1A2C(5) == 3 || unk_0x1F7BAD75218F1A2C(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xE3DA5E98850626D0(unk_0xA19140A5C42D8715()))
			{
				if (unk_0x1F7BAD75218F1A2C(2) == 3 || unk_0x1F7BAD75218F1A2C(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF58C434FFA1FB5F6() == 3 || unk_0xF58C434FFA1FB5F6() == 4)
			{
				return 0;
			}
			if (unk_0xD65D00F75F683302())
			{
				return 0;
			}
		}
	}
	if ((func_87() || func_86(Global_4456448.f_152990)) || func_85())
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
			iVar1 = func_84(unk_0xA19140A5C42D8715(), 0);
			if (((unk_0x39CF954DC56E2A1F(iVar0, iVar1) || (unk_0x8F474E419F56E48D(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x8F474E419F56E48D(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x8F474E419F56E48D(iVar0) == -1693015116 && iVar1 == 0) && func_83(iVar0, 10)) && unk_0x22D95AF01E737CA1(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (func_80(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	return 1;
}

int func_80(int iParam0)
{
	if (iParam0 != func_82())
	{
		if (func_81(iParam0, 1, 1))
		{
			return Global_2423801[iParam0 /*413*/].f_309.f_4 != -1;
		}
		else if ((Global_1312857 && iParam0 == unk_0xD4E735F4B6A956AC()) && func_81(iParam0, 1, 0))
		{
			return Global_2423801[iParam0 /*413*/].f_309.f_4 != -1;
		}
	}
	return 0;
}

int func_81(int iParam0, bool bParam1, bool bParam2)
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

int func_82()
{
	return -1;
}

int func_83(int iParam0, int iParam1)
{
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		if (unk_0x857E88DF0C8EDB8B(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x512BC25CDBC94246(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_84(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		if (unk_0x5D7DFE2058701942(iParam0, iParam1))
		{
			iVar0 = unk_0xCAEB6CE71A2C7212(iParam0, iParam1);
			if (unk_0xDC5D81351D6A4DDB(iVar0))
			{
				iVar1 = unk_0xE251DF9395C4E1C4(unk_0x8F474E419F56E48D(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x588F5E48C78F1C73(iVar0, iVar3, 0))
					{
						if (unk_0xB0D49A1F9F054602(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_85()
{
	return Global_2448386.f_16;
}

bool func_86(int iParam0)
{
	return iParam0 == 51;
}

var func_87()
{
	return Global_2448386.f_15;
}

bool func_88()
{
	return unk_0xFD34717937104F1C() <= Global_17367.f_5873 + 100;
}

void func_89(var uParam0, int iParam1, vector3 vParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1316807 == 1)
	{
		return;
	}
	if (unk_0x7112137033807390(iParam1, 0))
	{
		func_64(uParam0, 0, 0);
	}
	if (func_92(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0x281590680327CDEA(iParam1))
		{
			iVar0 = unk_0xA2EA4BA455370F3C(iParam1);
			if (!unk_0x5D7DFE2058701942(iVar0, 0))
			{
				if (unk_0xC085874FDE5FE33A(iVar0))
				{
					if (!func_90())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x18F3A53F9DAFB8C9(iVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xB9514DB95C310944(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x39102BE90DA2BED2(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x22DD1D053CFF9707(unk_0xA19140A5C42D8715(), iParam1, -1, iVar3, iVar4);
	unk_0xE60B9F9B48D4783F("FocusIn", 0, 0);
	unk_0x8969D02DEDC106D2("HINT_CAM_SCENE");
	unk_0xE11F00B4AC919F45(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0xFD34717937104F1C();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_90()
{
	return func_91(unk_0xD4E735F4B6A956AC());
}

int func_91(int iParam0)
{
	if (unk_0x8F474E419F56E48D(unk_0xEE978C39384D834F(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_92(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_93(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0xFD34717937104F1C() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
				{
					if (func_97(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xFD34717937104F1C();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_96(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xFD34717937104F1C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_96(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xFD34717937104F1C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_97(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xFD34717937104F1C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_75(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0xFD34717937104F1C() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
					{
						if (!func_97(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xFD34717937104F1C();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xFD34717937104F1C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xFD34717937104F1C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_97(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xFD34717937104F1C();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
				{
					if (!func_97(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_96(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_96(bParam1, bParam2, bParam3) || unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1) || unk_0x335966F23521FB8D(unk_0xA19140A5C42D8715(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_97(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0xFD34717937104F1C() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
					{
						if (func_95(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_94(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1) || func_94(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1) || unk_0x335966F23521FB8D(unk_0xA19140A5C42D8715(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_95(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_75(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_79(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_99();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_94(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_79(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		if (!unk_0xFBBCA633CD1A088B(unk_0xD4E735F4B6A956AC()))
		{
			unk_0xD481A812073CCF02(0, 140, 1);
			unk_0xD481A812073CCF02(0, 80, 1);
			if (unk_0x63247BC34C80F88C(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_95(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_79(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0xD481A812073CCF02(0, 80, 1);
		if (unk_0x0D635A6EE4806B7F())
		{
			if (unk_0x63247BC34C80F88C(0, 80))
			{
				unk_0xB9514DB95C310944(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_96(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_79(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		if (!unk_0xFBBCA633CD1A088B(unk_0xD4E735F4B6A956AC()))
		{
			unk_0xD481A812073CCF02(0, 140, 1);
			unk_0xD481A812073CCF02(0, 80, 1);
			if (unk_0x1190AB7024CBD8CB(0, 80) && unk_0xFD34717937104F1C() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_97(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_79(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0xD481A812073CCF02(0, 80, 1);
		if (unk_0x0D635A6EE4806B7F())
		{
			if (unk_0x1190AB7024CBD8CB(0, 80) && unk_0xFD34717937104F1C() > Global_116)
			{
				unk_0xB9514DB95C310944(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_98(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (unk_0xFAC06EE780B57279(iParam0))
		{
			if (unk_0x1095F403F52B42E1(unk_0xB86D86A5DBBC79F0(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x281590680327CDEA(iParam0))
		{
			if (!unk_0x4915F4759304D5CF(unk_0xA2EA4BA455370F3C(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x92D42293DA8F9805(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_99()
{
	unk_0x2BCFB39E86340DAA(&Global_2384, 4);
}

int func_100(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_101(iParam0, bParam1, 0);
}

int func_101(int iParam0, bool bParam1, bool bParam2)
{
	return func_60(iParam0, !bParam1, bParam2);
}

int func_102()
{
	float fVar0;
	
	fVar0 = 300f;
	if (iLocal_121 == 1)
	{
		fVar0 = 220f;
	}
	if (func_162(iLocal_73))
	{
		func_103(iLocal_60, iLocal_73, fVar0, 1061158912, 0);
		if (unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_73, fVar0, fVar0, 100f, 0, 1, 0))
		{
			return 1;
		}
		else if (!unk_0xCDDABFAF231CF3DD(iLocal_73))
		{
			return 1;
		}
	}
	return 0;
}

void func_103(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xCE3CB618AFE55EFB(iParam0))
	{
		if ((unk_0xDC5D81351D6A4DDB(iParam1) && unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715())) && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			if (unk_0xFAC06EE780B57279(iParam1))
			{
				if (unk_0x1095F403F52B42E1(unk_0xB86D86A5DBBC79F0(iParam1), 0))
				{
					fVar1 = unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), unk_0xE2BBD32891C18569(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x0798CD089167D3C1(iParam0, 1);
						unk_0xE8C2974337833D20(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x0798CD089167D3C1(iParam0, 0);
						unk_0xE8C2974337833D20(iParam0, 255);
					}
				}
			}
			else if (unk_0x281590680327CDEA(iParam1))
			{
				if (!unk_0x4915F4759304D5CF(unk_0xA2EA4BA455370F3C(iParam1)))
				{
					fVar1 = unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), unk_0xE2BBD32891C18569(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x0798CD089167D3C1(iParam0, 1);
						unk_0xE8C2974337833D20(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x0798CD089167D3C1(iParam0, 0);
						unk_0xE8C2974337833D20(iParam0, 255);
					}
				}
			}
		}
	}
}

int func_104()
{
	if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_73, 0) && unk_0x2BED1ED73F8FC841(iLocal_73))
	{
		return 1;
	}
	return 0;
}

void func_105()
{
	if (!unk_0x4915F4759304D5CF(iLocal_71) && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		switch (iLocal_48)
		{
			case 0:
				iLocal_54 = iLocal_54;
				if (!unk_0x5D7DFE2058701942(iLocal_71, 0))
				{
					if (iLocal_121 == 1)
					{
						if (func_112())
						{
							iLocal_48 = 1;
						}
					}
					else if (!unk_0x685AE6AF34B35D3B(iLocal_71) && !unk_0xC35EE16DB41A098F(iLocal_71))
					{
						unk_0x22DD1D053CFF9707(iLocal_71, unk_0xA19140A5C42D8715(), -1, 0, 2);
						if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -539.4566f, -2094.491f, 6.967173f, -468.4296f, -2152.549f, 18.99127f, 26.75f, 0, true, 0))
						{
							unk_0x47D73A216DD513C8(iLocal_71, 345f, 0);
							iLocal_48 = 1;
						}
						else
						{
							unk_0x2F89329397A277BC(&iLocal_74);
							unk_0x3F01127ECD227890(0, sLocal_80, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x3F01127ECD227890(0, sLocal_80, "arms_waving", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x3F01127ECD227890(0, sLocal_80, "arms_waving", 8f, -2f, -1, 0, 0, 0, 0, 0);
							unk_0x301F42EEE3C40328(iLocal_74);
							unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_74);
							unk_0x3A95A0A3221D4208(&iLocal_74);
							iLocal_124 = unk_0xFD34717937104F1C();
							iLocal_48 = 2;
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_121 == 1)
				{
					unk_0x22DD1D053CFF9707(iLocal_71, unk_0xA19140A5C42D8715(), -1, 0, 2);
					if (unk_0xF9D4EF1338E38AFB(iLocal_71, 242628503) != 1)
					{
						unk_0x2F89329397A277BC(&iLocal_74);
						unk_0x3F01127ECD227890(0, sLocal_80, sLocal_82, 4f, -2f, -1, 0, 0, 0, 0, 0);
						unk_0x301F42EEE3C40328(iLocal_74);
						unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_74);
						unk_0x3A95A0A3221D4208(&iLocal_74);
						iLocal_48 = 2;
					}
				}
				else if (unk_0xC42DE41AEED00E7B(iLocal_71, unk_0xA19140A5C42D8715(), 60f))
				{
					if (unk_0xF9D4EF1338E38AFB(iLocal_71, 242628503) != 1)
					{
						unk_0x2F89329397A277BC(&iLocal_74);
						unk_0x3F01127ECD227890(0, sLocal_80, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
						if (bLocal_57 == 0)
						{
							unk_0x3F01127ECD227890(0, sLocal_80, "pointing", 8f, -4f, -1, 0, 0, 0, 0, 0);
						}
						unk_0x301F42EEE3C40328(iLocal_74);
						unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_74);
						unk_0x3A95A0A3221D4208(&iLocal_74);
						iLocal_48 = 2;
					}
				}
				if (func_112())
				{
					if (func_111())
					{
					}
				}
				break;
			
			case 2:
				if (func_112())
				{
					if (func_111())
					{
					}
				}
				if (iLocal_121 == 2)
				{
					if (!unk_0xC42DE41AEED00E7B(iLocal_71, unk_0xA19140A5C42D8715(), 60f) && !func_109(iLocal_71, -875674219))
					{
						unk_0x0177431263151C4E(iLocal_71, unk_0xA19140A5C42D8715(), 0);
					}
					if (func_108(iLocal_71, unk_0xA19140A5C42D8715(), 1) < 25f)
					{
						if (!func_18())
						{
							if ((unk_0xFD34717937104F1C() - iLocal_124) > 6000)
							{
								func_107();
							}
						}
					}
				}
				if (unk_0xF9D4EF1338E38AFB(iLocal_71, 242628503) != 1 && !func_109(iLocal_71, -875674219))
				{
					if (iLocal_121 == 1)
					{
						vLocal_85 = { -2260.1f, 4274.24f, 44.9f };
						if (!unk_0xA60C975CBAB69F34(iLocal_71, vLocal_85, 1.5f, 1.5f, 1.5f, false, true, 0))
						{
							if (unk_0xF9D4EF1338E38AFB(iLocal_71, 242628503) == 7)
							{
								unk_0x2F89329397A277BC(&iLocal_74);
								unk_0x71CBFF70987FE89A(0, vLocal_85, 1f, 20000, fLocal_90, 1056964608);
								unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
								unk_0x301F42EEE3C40328(iLocal_74);
								unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_74);
								unk_0x3A95A0A3221D4208(&iLocal_74);
							}
						}
						else if (!unk_0x411C28019DEA5CEF(iLocal_71, sLocal_79, "waiting", 3))
						{
							unk_0x3F01127ECD227890(iLocal_71, sLocal_79, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
							if (func_108(iLocal_71, unk_0xA19140A5C42D8715(), 1) < 25f)
							{
								func_107();
							}
						}
					}
					else if (!unk_0x411C28019DEA5CEF(iLocal_71, sLocal_79, "waiting", 3))
					{
						unk_0x3F01127ECD227890(iLocal_71, sLocal_79, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
				}
				break;
			
			case 3:
				if (!unk_0x85875A8777624591(iLocal_71, unk_0xA19140A5C42D8715()))
				{
					unk_0x22DD1D053CFF9707(iLocal_71, unk_0xA19140A5C42D8715(), -1, 0, 2);
				}
				if (unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_71, 40f, 40f, 10f, 0, 1, 0) && !unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_71, 9f, 9f, 9f, 0, 1, 0))
				{
					if (func_106())
					{
						if (iLocal_55)
						{
							if (iLocal_121 == 1)
							{
								unk_0x2F89329397A277BC(&iLocal_74);
								unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
								unk_0x3F01127ECD227890(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								unk_0x301F42EEE3C40328(iLocal_74);
								unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_74);
								unk_0x3A95A0A3221D4208(&iLocal_74);
								iLocal_55 = 0;
								iLocal_124 = unk_0xFD34717937104F1C();
							}
							else
							{
								unk_0x2F89329397A277BC(&iLocal_74);
								unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
								unk_0x3F01127ECD227890(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								unk_0x301F42EEE3C40328(iLocal_74);
								unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_74);
								unk_0x3A95A0A3221D4208(&iLocal_74);
								iLocal_55 = 0;
								iLocal_124 = unk_0xFD34717937104F1C();
							}
						}
						else if (!unk_0x411C28019DEA5CEF(iLocal_71, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 3))
						{
							if (unk_0xF9D4EF1338E38AFB(iLocal_71, 242628503) == 7)
							{
								if (!unk_0xC42DE41AEED00E7B(iLocal_71, unk_0xA19140A5C42D8715(), 45f))
								{
									unk_0x2F89329397A277BC(&iLocal_74);
									unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
									unk_0x301F42EEE3C40328(iLocal_74);
									unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_74);
									unk_0x3A95A0A3221D4208(&iLocal_74);
								}
								else if ((unk_0xFD34717937104F1C() - iLocal_124) > 6000)
								{
									iLocal_55 = 1;
								}
							}
						}
						else if (!unk_0xC42DE41AEED00E7B(iLocal_71, unk_0xA19140A5C42D8715(), 70f))
						{
							unk_0x9568B1B58F78FF36(iLocal_71);
							unk_0x2F89329397A277BC(&iLocal_74);
							unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
							unk_0x301F42EEE3C40328(iLocal_74);
							unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_74);
							unk_0x3A95A0A3221D4208(&iLocal_74);
							iLocal_124 += 4000;
						}
					}
					if (!unk_0x4915F4759304D5CF(iLocal_72))
					{
						unk_0x33B5487515BD13D5(iLocal_72, unk_0xA19140A5C42D8715(), 150f, -1, 0, 0);
						unk_0xD738221C247C8B71(iLocal_72, true);
						unk_0x7E4E83D33161D01A(&iLocal_72);
					}
				}
				else
				{
					if (iLocal_121 == 1)
					{
						vLocal_85 = { -2260.1f, 4274.24f, 44.9f };
					}
					else if (bLocal_57)
					{
						vLocal_85 = { -483.4162f, -2160.874f, 8.359f };
					}
					else
					{
						vLocal_85 = { -485.9905f, -2153.542f, 8.1999f };
					}
					if (!unk_0xA60C975CBAB69F34(iLocal_71, vLocal_85, 4f, 4f, 4f, false, true, 0))
					{
						if (unk_0xF9D4EF1338E38AFB(iLocal_71, 2106541073) == 7)
						{
							unk_0x71CBFF70987FE89A(iLocal_71, vLocal_85, 1f, 20000, fLocal_90, 1056964608);
						}
					}
					else if (!unk_0xC42DE41AEED00E7B(iLocal_71, unk_0xA19140A5C42D8715(), 50f))
					{
						unk_0x0177431263151C4E(iLocal_71, unk_0xA19140A5C42D8715(), -1);
					}
					iLocal_55 = 1;
				}
				break;
			
			case 4:
				break;
			}
	}
	if (func_161(1))
	{
		if (!unk_0x4915F4759304D5CF(iLocal_71))
		{
			unk_0x33B5487515BD13D5(iLocal_71, unk_0xA19140A5C42D8715(), 150f, -1, 0, 0);
			unk_0xD738221C247C8B71(iLocal_71, true);
			wait(0);
		}
		func_231();
	}
}

bool func_106()
{
	if (!bLocal_116)
	{
		if (func_45(&Local_102, cLocal_114, sLocal_110, 4, 0, 0, 0))
		{
			bLocal_116 = true;
		}
	}
	return bLocal_116;
}

int func_107()
{
	if (!iLocal_117)
	{
		if (func_45(&Local_102, cLocal_114, sLocal_108, 4, 0, 0, 0))
		{
			iLocal_117 = 1;
		}
	}
	return iLocal_117;
}

float func_108(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		vVar0 = { unk_0xE2BBD32891C18569(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0xE2BBD32891C18569(iParam0, false) };
	}
	if (!unk_0x7112137033807390(iParam1, 0))
	{
		vVar1 = { unk_0xE2BBD32891C18569(iParam1, true) };
	}
	else
	{
		vVar1 = { unk_0xE2BBD32891C18569(iParam1, false) };
	}
	return unk_0x499324B3EF19C288(vVar0, vVar1, bParam2);
}

int func_109(int iParam0, int iParam1)
{
	if (func_110(iParam0))
	{
		if (unk_0xF9D4EF1338E38AFB(iParam0, iParam1) == 1 || unk_0xF9D4EF1338E38AFB(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_110(int iParam0)
{
	if (func_3(iParam0))
	{
		if (!unk_0x4915F4759304D5CF(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_111()
{
	if (!iLocal_115)
	{
		if (timera() > 2000)
		{
			if (func_45(&Local_102, cLocal_114, sLocal_107, 4, 0, 0, 0))
			{
				iLocal_115 = 1;
			}
		}
	}
	return iLocal_115;
}

int func_112()
{
	if (!unk_0x4915F4759304D5CF(iLocal_72) && !unk_0x4915F4759304D5CF(iLocal_71))
	{
		if (func_162(iLocal_73))
		{
			if (unk_0xB10F7FE89663CB5B(iLocal_72, iLocal_73))
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

void func_113(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_114(bool bParam0)
{
	int iVar0;
	
	if (iLocal_121 == 2)
	{
		iVar0 = func_10();
		switch (iVar0)
		{
			case 0:
				while (!func_137(319357731, 6, 1, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_71))
					{
						unk_0xB0D7019224A3A443(iLocal_71, 310, true);
					}
					wait(0);
				}
				break;
			
			case 1:
				while (!func_137(-423103492, 6, 2, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_71))
					{
						unk_0xB0D7019224A3A443(iLocal_71, 310, true);
					}
					wait(0);
				}
				break;
			
			case 2:
				while (!func_137(801546988, 6, 4, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_71))
					{
						unk_0xB0D7019224A3A443(iLocal_71, 310, true);
					}
					wait(0);
				}
				break;
			}
	}
	if (bParam0)
	{
		func_136(8);
	}
	func_118(17, iLocal_121);
	func_115();
	func_231();
}

void func_115()
{
	func_116();
}

int func_116()
{
	if (func_117(0))
	{
		return 0;
	}
	if (Global_93271.f_8)
	{
		if (Global_93271.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_93271.f_10 > 1)
	{
		return 0;
	}
	Global_93271.f_10++;
	return 1;
}

bool func_117(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

void func_118(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_134();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_133(iParam0))
	{
		func_132(iParam0, iParam1);
		if (!func_131(51))
		{
			func_127("RE_REWARD", 1, 0, 4000, 10000, func_130(), 0, 138, 0);
			func_126(51);
		}
		if (func_125(iParam0))
		{
			Global_106070.f_24967.f_2 = 3;
		}
		if (func_124(iParam0, iParam1) != 322)
		{
			func_119(func_124(iParam0, iParam1), vLocal_45.x, vLocal_45.y);
		}
		Global_106058 = iParam1;
		if (Global_106056 == 0)
		{
			if (((Global_106059 == 1 || Global_106059 == 5) || Global_106059 == 11) || Global_106059 == 25)
			{
				func_136(2);
			}
			else if ((Global_106059 == 26 || Global_106059 == 8) || Global_106059 == 17)
			{
				func_136(7);
			}
			else
			{
				func_136(1);
			}
		}
	}
}

void func_119(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_123((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_106070.f_10166[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_106070.f_10166[iParam0 /*12*/].f_6 == 11 || Global_106070.f_10166[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_106070.f_10166[iParam0 /*12*/].f_5 = 1;
		Global_106070.f_10166[iParam0 /*12*/].f_10 = uParam1;
		Global_106070.f_10166[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0xCEF3BD89444715A5(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xCEF3BD89444715A5(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xCEF3BD89444715A5(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_120();
	}
}

void func_120()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_105806 = 0;
	Global_105807 = 0;
	Global_105808 = 0;
	Global_105809 = 0;
	Global_105810 = 0;
	Global_105811 = 0;
	Global_105812 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_106070.f_10166.f_3853;
	Global_106070.f_10166.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_106070.f_10166[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_106070.f_10166[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_105806++;
					fVar1 = (fVar1 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_105807++;
					fVar2 = (fVar2 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_105808++;
					fVar3 = (fVar3 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_105809++;
					fVar4 = (fVar4 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_105810++;
					fVar5 = (fVar5 + (Global_106070.f_10166[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_105811++;
					fVar6 = (fVar6 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_105812++;
					fVar7 = (fVar7 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_105789 > 0)
	{
		if (Global_105806 == Global_105789)
		{
			fVar1 = 55f;
		}
	}
	if (Global_105790 > 0)
	{
		if (Global_105807 == Global_105790)
		{
			fVar2 = 10f;
		}
	}
	if (Global_105791 > 0)
	{
		if (Global_105808 == Global_105791)
		{
			fVar3 = 0f;
		}
	}
	if (Global_105792 > 0)
	{
		if (Global_105809 == Global_105792)
		{
			fVar4 = 10f;
		}
	}
	if (Global_105793 > 0)
	{
		if (((Global_105810 == Global_105793 || (Global_105793 * 10 / Global_105810) < 41) || Global_105810 > Global_105796) || Global_105810 == Global_105796)
		{
			if (!unk_0x05EFB6A616B6FADE(Global_106070.f_10166.f_3856, 14))
			{
				if (Global_105810 == Global_105793)
				{
					unk_0xCEF3BD89444715A5(joaat("num_rndevents_completed"), Global_105793, 0);
					unk_0x2BCFB39E86340DAA(&(Global_106070.f_10166.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_105794 > 0)
	{
		if (Global_105811 == Global_105794)
		{
			fVar6 = 15f;
		}
	}
	if (Global_105795 > 0)
	{
		if (Global_105812 == Global_105795)
		{
			fVar7 = 5f;
		}
	}
	Global_106070.f_10166.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_105810 > Global_105796 || Global_105810 == Global_105796)
	{
		iVar9 = Global_105796;
	}
	else
	{
		iVar9 = Global_105810;
	}
	unk_0x93180BE33E7149EF(joaat("num_missions_completed"), Global_105806, 1);
	unk_0x93180BE33E7149EF(joaat("num_missions_available"), Global_105789, 1);
	unk_0x93180BE33E7149EF(joaat("num_minigames_completed"), Global_105807, 1);
	unk_0x93180BE33E7149EF(joaat("num_minigames_available"), Global_105790, 1);
	unk_0x93180BE33E7149EF(joaat("num_oddjobs_completed"), Global_105808, 1);
	unk_0x93180BE33E7149EF(joaat("num_oddjobs_available"), Global_105791, 1);
	unk_0x93180BE33E7149EF(joaat("num_rndpeople_completed"), Global_105809, 1);
	unk_0x93180BE33E7149EF(joaat("num_rndpeople_available"), Global_105792, 1);
	unk_0x93180BE33E7149EF(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x93180BE33E7149EF(joaat("num_rndevents_available"), Global_105796, 1);
	unk_0x93180BE33E7149EF(joaat("num_misc_completed"), (Global_105812 + Global_105811), 1);
	unk_0x93180BE33E7149EF(joaat("num_misc_available"), (Global_105795 + Global_105794), 1);
	Global_105813 = (Global_105806 * 100 / Global_105789);
	Global_105815 = ((Global_105808 + Global_105807) * 100 / (Global_105791 + Global_105790));
	Global_105814 = ((Global_105809 + iVar9) * 100 / (Global_105792 + Global_105796));
	Global_105816 = ((Global_105811 + Global_105812) * 100 / (Global_105794 + Global_105795));
	unk_0x0D3D00C75484323C(joaat("total_progress_made"), Global_106070.f_10166.f_3853, 1);
	unk_0x93180BE33E7149EF(joaat("percent_story_missions"), Global_105813, 1);
	unk_0x93180BE33E7149EF(joaat("percent_ambient_missions"), Global_105814, 1);
	unk_0x93180BE33E7149EF(joaat("percent_oddjobs"), Global_105815, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_106070.f_10166.f_3853))
	{
		func_122(13, floor(Global_106070.f_10166.f_3853));
	}
	if (!unk_0xC253B4B0BD2DE4DD())
	{
		if (!Global_71205)
		{
			if (func_121() == 2 == 0 && !unk_0x4C9BACA8D249CB13())
			{
				if (unk_0x4F3E20635369D110())
				{
					Global_105804 = 0;
				}
				if (!Global_56181)
				{
					func_116();
				}
			}
		}
	}
}

int func_121()
{
	return Global_25459;
}

int func_122(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x710B605F9A596359(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1BADC756CBF95E97(iParam0, iParam1);
	}
	return 0;
}

int func_123(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_8();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xF84B918DCDA549C0((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x12FA763CEA4960B5((iParam0 - 0)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xF84B918DCDA549C0((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x12FA763CEA4960B5((iParam0 - 192)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xF84B918DCDA549C0((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x12FA763CEA4960B5((iParam0 - 513)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xF84B918DCDA549C0((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x12FA763CEA4960B5((iParam0 - 705)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x7D93C2914375D70B((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x12FA763CEA4960B5((iParam0 - 3111)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x7D93C2914375D70B((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x12FA763CEA4960B5((iParam0 - 2919)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0xD7C999E88C211597((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x12FA763CEA4960B5((iParam0 - 4207)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0xD7C999E88C211597((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x12FA763CEA4960B5((iParam0 - 4335)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0xD7C999E88C211597((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x12FA763CEA4960B5((iParam0 - 6029)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0xD7C999E88C211597((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x12FA763CEA4960B5((iParam0 - 7385)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0xD7C999E88C211597((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x12FA763CEA4960B5((iParam0 - 7321)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0xD7C999E88C211597((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x12FA763CEA4960B5((iParam0 - 9361)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0xD7C999E88C211597((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x12FA763CEA4960B5((iParam0 - 15369)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0xD7C999E88C211597((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x12FA763CEA4960B5((iParam0 - 15562)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0xD7C999E88C211597((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x12FA763CEA4960B5((iParam0 - 15946)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0xD7C999E88C211597((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x12FA763CEA4960B5((iParam0 - 18098)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0xD7C999E88C211597((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x12FA763CEA4960B5((iParam0 - 22066)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0xD7C999E88C211597((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x12FA763CEA4960B5((iParam0 - 24962)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar19, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_124(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_125(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_126(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x2BCFB39E86340DAA(&(Global_106070.f_20382.f_150[iVar1]), iVar0);
	}
}

void func_127(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_128(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_128(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x3CAC2741CC1A631F(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_106070.f_20382.f_145)
	{
		if (unk_0x3CAC2741CC1A631F(&(Global_106070.f_20382[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_106070.f_20382.f_145 < 9)
	{
		StringCopy(&(Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_4), sParam1, 16);
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_8 = (unk_0xFD34717937104F1C() + iParam3);
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_9 = iParam5;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_11 = iParam6;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_12 = uParam2;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_13 = iParam7;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_14 = iParam8;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_10 = ((unk_0xFD34717937104F1C() + iParam3) + iParam4);
		}
		else
		{
			Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_10 = -1;
		}
		Global_106070.f_20382.f_145++;
		func_129();
	}
}

void func_129()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_106070.f_20382.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_106070.f_20382.f_145)
	{
		if (unk_0x05EFB6A616B6FADE(Global_106070.f_20382[iVar0 /*16*/].f_11, 0))
		{
			if (Global_106070.f_20382[iVar0 /*16*/].f_12 > Global_106070.f_20382.f_146[0])
			{
				Global_106070.f_20382.f_146[0] = Global_106070.f_20382[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x05EFB6A616B6FADE(Global_106070.f_20382[iVar0 /*16*/].f_11, 1))
		{
			if (Global_106070.f_20382[iVar0 /*16*/].f_12 > Global_106070.f_20382.f_146[1])
			{
				Global_106070.f_20382.f_146[1] = Global_106070.f_20382[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x05EFB6A616B6FADE(Global_106070.f_20382[iVar0 /*16*/].f_11, 2))
		{
			if (Global_106070.f_20382[iVar0 /*16*/].f_12 > Global_106070.f_20382.f_146[2])
			{
				Global_106070.f_20382.f_146[2] = Global_106070.f_20382[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_130()
{
	func_11();
	switch (Global_106070.f_2355.f_539.f_4301)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_131(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0x05EFB6A616B6FADE(Global_106070.f_20382.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_132(int iParam0, int iParam1)
{
	unk_0x2BCFB39E86340DAA(&(Global_106070.f_24967.f_8[iParam0]), iParam1);
}

int func_133(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_134()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x61D2332983ACC05C(), 64);
	uVar1 = func_135(Var0);
	return uVar1;
}

int func_135(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xFEB6EEC0545AF7AA(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_136(int iParam0)
{
	Global_106056 = iParam0;
}

int func_137(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<10> Var0;
	struct<10> Var1;
	int iVar2;
	int iVar3;
	
	if (func_117(0))
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 == 76)
	{
		return 0;
	}
	if (iParam7 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (unk_0x05EFB6A616B6FADE(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_106070.f_7660.f_866 < 10)
	{
		Var0 = iParam0;
		Var0.f_3 = func_145(iParam1);
		Var0.f_4 = (unk_0xFD34717937104F1C() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		unk_0xFA57C719261AA55D(&(Var0.f_1), 0);
		Global_106070.f_7660.f_765[Global_106070.f_7660.f_866 /*10*/] = { Var0 };
		Global_106070.f_7660.f_866++;
		return 1;
	}
	else
	{
		Var1 = { func_144(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		iVar2 = 0;
		func_143(&iVar2);
		iVar3 = func_142(Var1, Global_106070.f_7660.f_765[iVar2 /*10*/]);
		if (iVar3 == 2)
		{
			func_140(Global_106070.f_7660.f_765[iVar2 /*10*/]);
			Global_106070.f_7660.f_765[iVar2 /*10*/] = { Var1 };
			func_139(&Var1);
			return 1;
		}
		else if (iVar3 == 1)
		{
			if (func_138(Var1))
			{
				func_140(Global_106070.f_7660.f_765[iVar2 /*10*/]);
				Global_106070.f_7660.f_765[iVar2 /*10*/] = { Var1 };
				func_139(&Var1);
				return 1;
			}
			else
			{
				if (!func_138(Global_106070.f_7660.f_765[iVar2 /*10*/]))
				{
					Global_106070.f_7660.f_765[iVar2 /*10*/] = { Var1 };
					func_139(&Var1);
					return 1;
				}
				func_139(&Var1);
				return 1;
			}
		}
		else
		{
			func_140(Var1);
			func_139(&Var1);
			return 1;
		}
	}
	return 0;
}

int func_138(struct<9> Param0, var uParam1)
{
	if (Param0.f_8 == 0)
	{
		return 0;
	}
	return 1;
}

void func_139(var uParam0)
{
	struct<10> Var0;
	
	*uParam0 = { Var0 };
}

void func_140(struct<10> Param0)
{
	if (func_138(Param0))
	{
		func_141(Param0.f_8, 0);
	}
}

void func_141(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_106070.f_8585[iParam0] = 1;
	Global_106070.f_8585.f_236[iParam0] = (unk_0xFD34717937104F1C() + iParam1);
}

int func_142(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<4> Param7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Param0.f_3;
	iVar1 = Param7.f_3;
	if (iVar0 > iVar1)
	{
		return 2;
	}
	if (iVar0 < iVar1)
	{
		return 0;
	}
	return 1;
}

void func_143(int iParam0)
{
	int iVar0;
	
	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_106070.f_7660.f_866)
	{
		if (func_142(Global_106070.f_7660.f_765[iVar0 /*10*/], Global_106070.f_7660.f_765[*iParam0 /*10*/]) == 0)
		{
			*iParam0 = iVar0;
		}
		iVar0++;
	}
}

struct<10> func_144(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, var uParam9)
{
	struct<10> Var0;
	
	Var0 = uParam0;
	Var0.f_3 = func_145(iParam1);
	Var0.f_4 = (unk_0xFD34717937104F1C() + iParam4);
	Var0.f_5 = iParam5;
	Var0.f_1 = uParam9;
	Var0.f_2 = iParam2;
	Var0.f_6 = iParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = uParam8;
	unk_0xFA57C719261AA55D(&(Var0.f_1), 0);
	return Var0;
}

int func_145(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

void func_146(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_150(iParam0, 2, 1))
		{
			func_149(iParam0, 2, 1);
		}
	}
	else if (func_150(iParam0, 2, 1))
	{
		func_147(iParam0, 2, 1);
	}
}

void func_147(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xFA57C719261AA55D(&(Global_93284.f_1336[iParam0]), iParam1);
	}
	else if (unk_0x4C9BACA8D249CB13())
	{
		if (func_121() == 0)
		{
			iVar0 = func_9(func_148(iParam0), -1, 0);
			unk_0xFA57C719261AA55D(&iVar0, iParam1);
			func_6(func_148(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_106070.f_668[iParam0]), iParam1);
	}
}

int func_148(int iParam0)
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

void func_149(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x2BCFB39E86340DAA(&(Global_93284.f_1336[iParam0]), iParam1);
	}
	else if (unk_0x4C9BACA8D249CB13())
	{
		if (func_121() == 0)
		{
			iVar0 = func_9(func_148(iParam0), -1, 0);
			unk_0x2BCFB39E86340DAA(&iVar0, iParam1);
			func_6(func_148(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x2BCFB39E86340DAA(&(Global_106070.f_668[iParam0]), iParam1);
	}
}

int func_150(int iParam0, int iParam1, bool bParam2)
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
		if (func_121() == 0)
		{
			return unk_0x05EFB6A616B6FADE(func_9(func_148(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x05EFB6A616B6FADE(Global_106070.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_151(int iParam0)
{
	if (func_154())
	{
		Global_106060 = 1;
		Global_106057 = unk_0xFD34717937104F1C();
		if (func_125(Global_106059))
		{
			func_152(0);
		}
		unk_0x9E212A43A08FF3F9(1, "RE_TITLE");
		if (iParam0 && func_125(Global_106059))
		{
			unk_0xE134853379787E6A();
		}
		return 1;
	}
	return 0;
}

void func_152(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_106070.f_24967.f_2 < 3)
			{
				if (!unk_0x90A6E668DB47D464())
				{
					func_77(func_153(iParam0), -1);
					Global_106070.f_24967.f_2++;
					unk_0x2BCFB39E86340DAA(&Global_106066, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x05EFB6A616B6FADE(Global_106066, 1))
			{
				if (!unk_0x90A6E668DB47D464())
				{
					func_77(func_153(iParam0), -1);
					Global_106070.f_24967.f_3++;
					unk_0x2BCFB39E86340DAA(&Global_106066, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x05EFB6A616B6FADE(Global_106066, 2))
			{
				if (!unk_0x90A6E668DB47D464())
				{
					func_77(func_153(iParam0), -1);
					Global_106070.f_24967.f_4++;
					unk_0x2BCFB39E86340DAA(&Global_106066, 2);
				}
			}
			break;
	}
}

char* func_153(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_154()
{
	switch (func_155(&Global_25518, 0, 5, 0, unk_0xFCB3E4B16B4A9EC1()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_155(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90805.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_159(0))
		{
			return 0;
		}
		Global_36081++;
		*uParam0 = Global_36081;
		unk_0xEF06BE39D11763FC(unk_0xA6580F898F4E801C(), 0);
		Global_17228.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xA5DD4141C1E70561(8);
		}
		Global_36117 = iParam2;
		Global_36079 = *uParam0;
		Global_36080 = iParam4;
		Global_36078 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_36078 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_36078)
			{
				if (Global_36084[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_36079 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_157(iParam2))
		{
			return 0;
		}
		if (Global_36078 == 8)
		{
			return 0;
		}
		Global_36081++;
		*uParam0 = Global_36081;
		Global_36084[Global_36078 /*4*/] = Global_36081;
		Global_36084[Global_36078 /*4*/].f_1 = iParam1;
		Global_36084[Global_36078 /*4*/].f_2 = iParam2;
		Global_36084[Global_36078 /*4*/].f_3 = 0;
		Global_36078++;
		if (iParam4 != 0)
		{
			func_156(uParam0, iParam4);
		}
	}
	return 2;
}

void func_156(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_36078 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_36078)
	{
		if (Global_36084[iVar0 /*4*/] == *uParam0)
		{
			Global_36084[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_157(int iParam0)
{
	return func_158(iParam0, Global_36117);
}

int func_158(int iParam0, int iParam1)
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

int func_159(int iParam0)
{
	if (Global_36117 == 15)
	{
		return 0;
	}
	if (func_157(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_160()
{
	float fVar0;
	
	switch (iLocal_121)
	{
		case 1:
			if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -2300.317f, 4179.612f, 36.98159f, -2191.317f, 4368.794f, 74.89676f, 70.75f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (bLocal_57)
			{
				fVar0 = 80f;
			}
			else
			{
				fVar0 = 80f;
			}
			if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), -487.5048f, -2157.99f, 8.2627f, fVar0, fVar0, 40f, false, true, 0))
			{
				return 1;
			}
			break;
	}
	if (unk_0x965BA0E75ABD2A72())
	{
		if (!unk_0x4915F4759304D5CF(iLocal_71))
		{
			if (unk_0x1A8481A7E865EC7C(iLocal_71))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_161(int iParam0)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	vVar1 = { 6f, 6f, 6f };
	vVar2 = { -6f, -6f, -6f };
	if (unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
	{
		if (!unk_0x4915F4759304D5CF(iLocal_71))
		{
			if (iParam0 == 0 || func_108(iLocal_71, iLocal_72, 1) > 15f)
			{
				if (unk_0x9809FE4B550B1EFE(unk_0x505186370955851F(iLocal_71, 31086, 0f, 0f, 0f), 4f, 0))
				{
					bVar0 = true;
				}
				vVar1 = { vVar1 + unk_0x505186370955851F(iLocal_71, 31086, 0f, 0f, 0f) };
				vVar2 = { vVar2 + unk_0x505186370955851F(iLocal_71, 31086, 0f, 0f, 0f) };
				if ((unk_0x7D4400F91582CA08(vVar2, vVar1, joaat("weapon_smokegrenade"), 1) || unk_0x7D4400F91582CA08(vVar2, vVar1, joaat("weapon_grenade"), 1)) || unk_0x7D4400F91582CA08(vVar2, vVar1, joaat("weapon_stickybomb"), 1))
				{
					bVar0 = true;
				}
			}
			if (unk_0x2C519F22A9CF540C(unk_0x505186370955851F(iLocal_71, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (unk_0x6D7FFF527E125F24(-1, unk_0x505186370955851F(iLocal_71, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (unk_0xDEAEC99031DCB92A(iLocal_71, unk_0xA19140A5C42D8715(), 1))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_162(int iParam0)
{
	if (func_3(iParam0))
	{
		if (unk_0x1095F403F52B42E1(iParam0, 0))
		{
			if (!unk_0x463E3A48A46C9195(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_163()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	char* sVar7;
	char* sVar8;
	
	vVar1 = { vLocal_87 };
	fVar2 = fLocal_95;
	switch (iLocal_121)
	{
		case 1:
			vLocal_86 = { -2257.482f, 4266.638f, 44.5095f };
			fLocal_94 = 293.9091f;
			vLocal_87 = { -2253.763f, 4273.17f, 44.977f };
			fLocal_95 = 185.5212f;
			iVar3 = joaat("a_f_y_vinewood_04");
			iVar5 = joaat("peyote");
			iVar4 = joaat("g_m_y_salvagoon_01");
			sVar6 = "CThiefVictim";
			sVar7 = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
			sLocal_107 = "RECT1_ATTR";
			sLocal_108 = "RECT1_HELP";
			sLocal_109 = "RECT1_FYOU";
			sLocal_110 = "RECT1_JOY";
			sLocal_111 = "RECT1_OK";
			sLocal_112 = "RECT1_BAD";
			sLocal_113 = "RECT1_GOOD";
			cLocal_114 = "RECT1AU";
			sLocal_79 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_81 = "random@car_thief@waving_ig_1";
			vLocal_88 = { -2270.632f, 4287.437f, 44.9008f };
			fLocal_53 = 3f;
			if (vdist(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vLocal_86) < vdist(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vLocal_87))
			{
				vVar1 = { vLocal_86 };
				fVar2 = fLocal_94;
				bLocal_57 = true;
				sLocal_80 = "random@car_thief@waving_ig_2";
				sLocal_82 = "waving_l";
			}
			else
			{
				sLocal_82 = "waving";
				sLocal_80 = "random@car_thief@waving_ig_1";
				vVar1 = { vLocal_87 };
				fVar2 = fLocal_95;
			}
			break;
		
		case 2:
			vLocal_87 = { -538.6718f, -2183.442f, 5.2336f };
			vLocal_86 = { -365.7f, -2179.26f, 9.3184f };
			iVar3 = joaat("a_f_y_indian_01");
			iVar5 = joaat("rocoto");
			iVar4 = joaat("a_m_m_soucent_04");
			sVar6 = "CThiefGolfer";
			sVar8 = "A_M_M_SOUCENT_04_BLACK_MINI_01";
			sLocal_107 = "RECT2_ATTR";
			sLocal_108 = "RECT2_HELP";
			sLocal_109 = "RECT2_FYOU";
			sLocal_110 = "RECT2_JOY";
			sLocal_111 = "RECT2_OK";
			sLocal_112 = "RECT2_BAD";
			sLocal_113 = "RECT2_GOOD";
			cLocal_114 = "RECT2AU";
			sLocal_79 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_80 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			sLocal_81 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			vLocal_88 = { -505.1966f, -2159.228f, 7.6466f };
			fLocal_52 = 15f;
			fLocal_53 = 3f;
			if (vdist(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vLocal_86) < vdist(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vLocal_87))
			{
				bLocal_57 = true;
			}
			break;
	}
	unk_0xCACEBBBEAD8F262E(iVar3);
	unk_0xCACEBBBEAD8F262E(iVar4);
	unk_0xCACEBBBEAD8F262E(iVar5);
	unk_0x6D68030C791111E0(sLocal_79);
	unk_0x6D68030C791111E0(sLocal_80);
	unk_0x6D68030C791111E0(sLocal_81);
	unk_0x6D68030C791111E0("RANDOM@CAR_THIEF@WAITING_IG_4");
	unk_0x788BCD68EF8935BE();
	if (((((((unk_0x7FC99CCC73354033(iVar3) && unk_0x7FC99CCC73354033(iVar4)) && unk_0x7FC99CCC73354033(iVar5)) && unk_0x39C2D9AB77873F84(sLocal_79)) && unk_0x39C2D9AB77873F84(sLocal_80)) && unk_0x39C2D9AB77873F84(sLocal_81)) && unk_0x39C2D9AB77873F84("RANDOM@CAR_THIEF@WAITING_IG_4")) && unk_0x5488D97A1366CE04())
	{
		if (iLocal_121 == 1)
		{
			func_177("re_cartheft - Distance to vTop = ", vdist(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vLocal_86));
			func_177("re_cartheft - Distance to vBottom = ", vdist(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vLocal_87));
			iLocal_73 = unk_0x48CFBECB146FD1A1(iVar5, vVar1, fVar2, true, true, false);
			unk_0xF4B7B294E1D454A2(iLocal_73, 0, false);
			unk_0xAB9FD40CC0E419E3(iLocal_73, false);
			unk_0x0BE3742BB3253F0E(iLocal_73, true);
			unk_0x62433ED3D79270C8(iLocal_73, false);
			unk_0xB9199416158EE29E(iLocal_73, false);
			unk_0x6202B241A8864FC2(iLocal_73, 2, false);
			iLocal_72 = unk_0x91A7C8CA5E332C03(iLocal_73, 22, iVar4, -1, 1, true);
			unk_0x13E0A8160525AE55(iLocal_72, 42, true);
			unk_0x3B7A32E04BBE59A5(iLocal_72, 3, true);
			unk_0xF0188A1B49D79AF7(iLocal_72, joaat("weapon_pistol"), -1, true, true);
			unk_0xD461381B293D9B46(iLocal_72, 10);
			unk_0x7B19AF4B9DCA6BAB(iLocal_72, 1f);
			unk_0xF98BC2B4D0B8304E(iLocal_72, 1f);
			unk_0x9174BE523666C5A0(iLocal_73, 135, 135);
			unk_0x94E87D83163B4BEB("re_cartheft relGroupThief", &iLocal_137);
			unk_0x80E7C4A78224C8F9(5, iLocal_137, 1862763509);
			unk_0x80E7C4A78224C8F9(2, iLocal_137, 45677184);
			unk_0x80E7C4A78224C8F9(2, 45677184, iLocal_137);
			unk_0xDFA901280292A2FB(iLocal_72, iLocal_137);
			unk_0x83055D7E96024509(iLocal_73, true);
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				vVar0 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) - vLocal_50 };
				fLocal_51 = unk_0x0C1B8F3F6EFDC58B(vVar0.x, vVar0.y);
			}
			iLocal_71 = unk_0x35C6E06B120EB2E3(5, iVar3, vLocal_50, fLocal_51, 1, true);
			unk_0x4FE3554969185993(iLocal_71, sVar7);
			unk_0x22DD1D053CFF9707(iLocal_71, unk_0xA19140A5C42D8715(), -1, 2048, 2);
			unk_0x72A0FF8C49CFFC0D(iLocal_71, 0, 0, 1, 0);
			unk_0x72A0FF8C49CFFC0D(iLocal_71, 2, 2, 0, 0);
			unk_0x72A0FF8C49CFFC0D(iLocal_71, 3, 1, 1, 0);
			unk_0x72A0FF8C49CFFC0D(iLocal_71, 4, 1, 1, 0);
			unk_0x605FF8F1D0D5E4DE(iLocal_71, true);
			if (bLocal_57)
			{
				vLocal_84 = { -2254.413f, 4270.227f, 44.8028f };
				fLocal_89 = 124.6557f;
				vLocal_83 = { -2252.683f, 4274.16f, 45.0612f };
				vLocal_85 = { -2257.825f, 4269.189f, 44.6334f };
				fLocal_90 = 272.8688f;
				vLocal_97 = { -2258.04f, 4272.244f, 45.75466f };
				vLocal_98 = { 1.729481f, 0f, -114.9352f };
			}
			else
			{
				vLocal_84 = { -2253.634f, 4269.119f, 44.7686f };
				fLocal_89 = 336.143f;
				vLocal_85 = { -2255.733f, 4271.32f, 44.8166f };
				fLocal_90 = 179.4774f;
				vLocal_83 = { -2257.088f, 4268.938f, 44.6456f };
				vLocal_97 = { -2254.886f, 4273.539f, 46.2282f };
				vLocal_98 = { -7.492095f, 0f, -168.1909f };
			}
		}
		else
		{
			if (bLocal_57)
			{
				iLocal_73 = unk_0x48CFBECB146FD1A1(iVar5, -488.7506f, -2159.325f, 8.2581f, 15.0886f, true, true, false);
			}
			else
			{
				iLocal_73 = unk_0x48CFBECB146FD1A1(iVar5, -486.3563f, -2159.942f, 8.2887f, 288.8187f, true, true, false);
			}
			unk_0xF4B7B294E1D454A2(iLocal_73, 0, false);
			unk_0xAB9FD40CC0E419E3(iLocal_73, false);
			unk_0xEA847E35BAC71F2A(iLocal_73, 3);
			unk_0x0BE3742BB3253F0E(iLocal_73, true);
			unk_0xE8F84C99DF1C7D20(iLocal_73, 0);
			unk_0x1EE56D43DA30ADC6(iLocal_73, 11, 2, false);
			unk_0x1EE56D43DA30ADC6(iLocal_73, 16, 3, false);
			unk_0x1EE56D43DA30ADC6(iLocal_73, 12, 1, false);
			unk_0x1EE56D43DA30ADC6(iLocal_73, 13, 1, false);
			unk_0x640840010FCF8AE8(iLocal_73, 3);
			unk_0x1EE56D43DA30ADC6(iLocal_73, 23, 6, false);
			unk_0x75D4E913CDBD499F(iLocal_73, 3);
			unk_0x8D79809AF5D42F43(iLocal_73, 18, true);
			unk_0x8D79809AF5D42F43(iLocal_73, 22, true);
			unk_0x9174BE523666C5A0(iLocal_73, 143, 0);
			unk_0x8B55653F1DAE7C6F(iLocal_73, 31, 2);
			unk_0x62433ED3D79270C8(iLocal_73, false);
			unk_0xB9199416158EE29E(iLocal_73, false);
			if (bLocal_57)
			{
				iLocal_71 = unk_0x35C6E06B120EB2E3(5, iVar3, -490.4008f, -2160.755f, 8.2498f, 314.0037f, 1, true);
			}
			else if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -583.0884f, -2234.249f, 4.523423f, -685.1817f, -2350.904f, 17.07073f, 178f, 0, true, 0))
			{
				iLocal_71 = unk_0x35C6E06B120EB2E3(5, iVar3, -486.81f, -2156.99f, 8.27f, -172.34f, 1, true);
			}
			else
			{
				iLocal_71 = unk_0x35C6E06B120EB2E3(5, iVar3, -486.2511f, -2161.808f, 8.3041f, 353.4264f, 1, true);
			}
			unk_0x72A0FF8C49CFFC0D(iLocal_71, 0, 0, 0, 0);
			unk_0x72A0FF8C49CFFC0D(iLocal_71, 2, 1, 0, 0);
			unk_0x72A0FF8C49CFFC0D(iLocal_71, 3, 1, 2, 0);
			unk_0x72A0FF8C49CFFC0D(iLocal_71, 4, 1, 2, 0);
			iLocal_72 = unk_0x91A7C8CA5E332C03(iLocal_73, 22, iVar4, -1, 1, true);
			unk_0xF0188A1B49D79AF7(iLocal_72, joaat("weapon_pistol"), -1, true, true);
			unk_0xD461381B293D9B46(iLocal_72, 10);
			unk_0x7B19AF4B9DCA6BAB(iLocal_72, 1f);
			unk_0xF98BC2B4D0B8304E(iLocal_72, 1f);
			unk_0x13E0A8160525AE55(iLocal_72, 42, true);
			unk_0x4FE3554969185993(iLocal_72, sVar8);
			vLocal_84 = { -501.9105f, -2148.019f, 8.0392f };
			fLocal_89 = 294.4744f;
			vLocal_83 = { -501.0442f, -2150.799f, 8.139f };
			vLocal_85 = { -493.8062f, -2156.036f, 8.1978f };
			vLocal_97 = { -504.365f, -2144.534f, 9.8585f };
			vLocal_98 = { -6.6935f, 0f, -127.8147f };
		}
		unk_0x96BFF0680C7B6FD5(iLocal_71, false);
		unk_0x13E0A8160525AE55(iLocal_71, 185, true);
		unk_0x2BDE86D1296F33E9(iLocal_73, 0);
		unk_0xC19EDC1D7179164C(iLocal_73, true, true, 0);
		unk_0x1F4E5EFBFE503FB3(iLocal_71, true);
		unk_0x1F4E5EFBFE503FB3(iLocal_72, true);
		unk_0x22DD1D053CFF9707(iLocal_71, iLocal_72, -1, 0, 2);
		unk_0x5941346047B1E7C4(iLocal_73);
		unk_0x83055D7E96024509(iLocal_73, true);
		unk_0x9F3F43B8D4BC7F09(iLocal_73, false, 0);
		unk_0xFC00A668AFC2126D(iVar5, true);
		unk_0x8969D02DEDC106D2("RE_CAR_STEAL_SCENE");
		unk_0xA95C9BC9CAF4C02D(iLocal_73, "RE_CAR_STEAL_STOLEN_VEHICLE", 0);
		unk_0x3FB92963BD0665CB(iLocal_73, 1);
		unk_0x3B7A32E04BBE59A5(iLocal_71, 17, false);
		unk_0xC2C4AE9DB4A0BEF3(iLocal_71, 512, true);
		switch (func_10())
		{
			case 0:
				sLocal_100 = "MICHAEL";
				break;
			
			case 1:
				sLocal_100 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_100 = "TREVOR";
				break;
		}
		func_176(&Local_102, 0, unk_0xA19140A5C42D8715(), sLocal_100, 0, 1);
		func_176(&Local_102, 1, iLocal_71, sVar6, 0, 1);
		func_176(&Local_102, 2, iLocal_72, "CThief", 0, 1);
		return 1;
	}
	else if (func_164())
	{
		func_231();
	}
	return 0;
}

int func_164()
{
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vLocal_45) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0x57323E573695B13F(unk_0xA19140A5C42D8715())) > 1369f && !func_175())
		{
			return 0;
		}
	}
	if (func_171())
	{
		return 1;
	}
	if (func_165(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_165(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (func_13(func_10()))
		{
			iVar5 = func_130();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0x05EFB6A616B6FADE(Global_106070.f_18546[iVar1 /*6*/], 2) && !unk_0x05EFB6A616B6FADE(Global_106070.f_18546[iVar1 /*6*/], 3))
				{
					func_166(iVar1, &Var0);
					fVar4 = unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_166(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_167(uParam1, "Abigail1", func_169(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 1:
			func_167(uParam1, "Abigail2", func_169(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 2:
			func_167(uParam1, "Barry1", func_169(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 3:
			func_167(uParam1, "Barry2", func_169(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_168(iParam0), 1, 1);
			break;
		
		case 4:
			func_167(uParam1, "Barry3", func_169(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 5:
			func_167(uParam1, "Barry3A", func_169(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 6:
			func_167(uParam1, "Barry3C", func_169(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 7:
			func_167(uParam1, "Barry4", func_169(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_168(iParam0), 0, 0);
			break;
		
		case 8:
			func_167(uParam1, "Dreyfuss1", func_169(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 9:
			func_167(uParam1, "Epsilon1", func_169(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 10:
			func_167(uParam1, "Epsilon2", func_169(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 11:
			func_167(uParam1, "Epsilon3", func_169(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 12:
			func_167(uParam1, "Epsilon4", func_169(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 13:
			func_167(uParam1, "Epsilon5", func_169(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 14:
			func_167(uParam1, "Epsilon6", func_169(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 15:
			func_167(uParam1, "Epsilon7", func_169(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 16:
			func_167(uParam1, "Epsilon8", func_169(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 17:
			func_167(uParam1, "Extreme1", func_169(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 18:
			func_167(uParam1, "Extreme2", func_169(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 19:
			func_167(uParam1, "Extreme3", func_169(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 20:
			func_167(uParam1, "Extreme4", func_169(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 21:
			func_167(uParam1, "Fanatic1", func_169(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_168(iParam0), 1, 0);
			break;
		
		case 22:
			func_167(uParam1, "Fanatic2", func_169(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_168(iParam0), 1, 0);
			break;
		
		case 23:
			func_167(uParam1, "Fanatic3", func_169(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_168(iParam0), 0, 1);
			break;
		
		case 24:
			func_167(uParam1, "Hao1", func_169(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_168(iParam0), 0, 1);
			break;
		
		case 25:
			func_167(uParam1, "Hunting1", func_169(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 26:
			func_167(uParam1, "Hunting2", func_169(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 27:
			func_167(uParam1, "Josh1", func_169(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 28:
			func_167(uParam1, "Josh2", func_169(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_168(iParam0), 1, 1);
			break;
		
		case 29:
			func_167(uParam1, "Josh3", func_169(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_168(iParam0), 1, 1);
			break;
		
		case 30:
			func_167(uParam1, "Josh4", func_169(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 31:
			func_167(uParam1, "Maude1", func_169(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 32:
			func_167(uParam1, "Minute1", func_169(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 33:
			func_167(uParam1, "Minute2", func_169(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 34:
			func_167(uParam1, "Minute3", func_169(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 35:
			func_167(uParam1, "MrsPhilips1", func_169(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 36:
			func_167(uParam1, "MrsPhilips2", func_169(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 37:
			func_167(uParam1, "Nigel1", func_169(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 38:
			func_167(uParam1, "Nigel1A", func_169(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_168(iParam0), 1, 1);
			break;
		
		case 39:
			func_167(uParam1, "Nigel1B", func_169(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_168(iParam0), 1, 1);
			break;
		
		case 40:
			func_167(uParam1, "Nigel1C", func_169(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_168(iParam0), 1, 1);
			break;
		
		case 41:
			func_167(uParam1, "Nigel1D", func_169(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_168(iParam0), 1, 1);
			break;
		
		case 42:
			func_167(uParam1, "Nigel2", func_169(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_168(iParam0), 1, 1);
			break;
		
		case 43:
			func_167(uParam1, "Nigel3", func_169(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_168(iParam0), 1, 1);
			break;
		
		case 44:
			func_167(uParam1, "Omega1", func_169(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 45:
			func_167(uParam1, "Omega2", func_169(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 46:
			func_167(uParam1, "Paparazzo1", func_169(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 47:
			func_167(uParam1, "Paparazzo2", func_169(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 48:
			func_167(uParam1, "Paparazzo3", func_169(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 49:
			func_167(uParam1, "Paparazzo3A", func_169(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 50:
			func_167(uParam1, "Paparazzo3B", func_169(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 51:
			func_167(uParam1, "Paparazzo4", func_169(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 52:
			func_167(uParam1, "Rampage1", func_169(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 54:
			func_167(uParam1, "Rampage3", func_169(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 55:
			func_167(uParam1, "Rampage4", func_169(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 56:
			func_167(uParam1, "Rampage5", func_169(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 53:
			func_167(uParam1, "Rampage2", func_169(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 57:
			func_167(uParam1, "TheLastOne", func_169(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 58:
			func_167(uParam1, "Tonya1", func_169(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 59:
			func_167(uParam1, "Tonya2", func_169(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 60:
			func_167(uParam1, "Tonya3", func_169(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 61:
			func_167(uParam1, "Tonya4", func_169(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 62:
			func_167(uParam1, "Tonya5", func_169(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_167(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_168(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_169(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_170(iParam0) };
	if (unk_0x429D45A6C6520026(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_170(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_171()
{
	if (func_174() && !func_175())
	{
		return 1;
	}
	if (func_173() && func_172())
	{
		return 1;
	}
	return 0;
}

bool func_172()
{
	return Global_105788 > 0;
}

int func_173()
{
	if (Global_90249 != -1)
	{
		return 1;
	}
	return 0;
}

int func_174()
{
	if (Global_90249 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_84115[Global_90249 /*34*/].f_15, 20);
	}
	return 0;
}

int func_175()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		if (unk_0x9E14E7823B1059CE() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_176(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_177(char* sParam0, float fParam1)
{
	func_179(sParam0);
	func_178(fParam1);
}

void func_178(float fParam0)
{
	if (fParam0 != 0f)
	{
	}
}

void func_179(char* sParam0)
{
	if (unk_0x3CAC2741CC1A631F(sParam0, sParam0))
	{
	}
}

int func_180()
{
	if (!func_157(5))
	{
		return 1;
	}
	if (func_171())
	{
		return 1;
	}
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (vmag2(unk_0x57323E573695B13F(unk_0xA19140A5C42D8715())) > 1369f && !func_175())
		{
			return 0;
		}
	}
	if (func_165(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_181()
{
	if ((Global_106059 == func_134() && unk_0x62558A57CB60EE71()) && Global_106060)
	{
		return 1;
	}
	return 0;
}

void func_182()
{
	if (func_110(unk_0xA19140A5C42D8715()))
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			if (unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0) != iLocal_73 && unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0) != iLocal_76)
			{
				iLocal_76 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
			}
		}
	}
}

void func_183(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0xFD34717937104F1C();
	}
	if (unk_0xCE3CB618AFE55EFB(iParam0))
	{
		iVar0 = (unk_0xFD34717937104F1C() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = ceil((to_float(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0x1C05D741948BDE08(iParam0) != 255)
				{
					unk_0xE8C2974337833D20(iParam0, 255);
				}
			}
			else if (unk_0x1C05D741948BDE08(iParam0) != 0)
			{
				unk_0xE8C2974337833D20(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0x1C05D741948BDE08(iParam0) != 255)
			{
				unk_0xE8C2974337833D20(iParam0, 255);
			}
		}
	}
}

void func_184()
{
}

void func_185(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_134();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_187(iParam0);
	unk_0x7B9D98D1F4280B24(0);
	unk_0x509F44AFDE7B1FCA(1);
	Global_106056 = 0;
	func_186();
}

void func_186()
{
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			unk_0xFC00A668AFC2126D(unk_0x8F474E419F56E48D(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)), true);
		}
		unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 32, false);
	}
}

void func_187(int iParam0)
{
	Global_106059 = iParam0;
}

int func_188(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (!Global_144510)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_134();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_228())
		{
			return 0;
		}
	}
	vLocal_45 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			vVar1 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) };
			if (vmag2(unk_0x57323E573695B13F(unk_0xA19140A5C42D8715())) > 1369f && !func_175())
			{
				return 0;
			}
		}
		if (!Global_106070.f_9057)
		{
			return 0;
		}
		if (func_117(0))
		{
			return 0;
		}
		if (func_171())
		{
			return 0;
		}
		if (func_227())
		{
			return 0;
		}
		if (Global_106059 != -1)
		{
			return 0;
		}
		if (func_13(func_10()))
		{
			if (func_165(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) && !bParam4)
		{
			if ((vVar1.z - vLocal_45.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_226(iParam1))
		{
			return 0;
		}
		if (func_13(func_10()))
		{
			if (func_225(func_10()) == 4 || func_225(func_10()) == 5)
			{
				return 0;
			}
		}
		if (func_13(func_10()))
		{
			if (!func_224(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_223(Global_106070.f_24967.f_43[iParam1]))
		{
			return 0;
		}
		if ((unk_0xFD34717937104F1C() - Global_106061) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_222())
		{
			return 0;
		}
		if (unk_0x356461BAB19FFA77())
		{
			return 0;
		}
		if (unk_0x62558A57CB60EE71())
		{
			return 0;
		}
		if (!func_213(4))
		{
			return 0;
		}
		if (!func_157(5))
		{
			return 0;
		}
		if (func_212(iParam1, iParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (unk_0x893915B076B1DDF7(unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715())))
		{
			if ((unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) == unk_0x988A25F5907E93F0(377.153f, -717.567f, 10.0536f) || unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) == unk_0x988A25F5907E93F0(320.9934f, 265.2515f, 82.1221f)) || unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) == unk_0x988A25F5907E93F0(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_212(0, 0))
		{
			return 0;
		}
		if (Global_25605)
		{
			return 0;
		}
		if (func_226(30) && !func_212(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_13(func_10()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_106070.f_2355.f_539.f_2280[iVar2 /*3*/] };
				iVar4 = Global_106070.f_2355.f_539.f_2276[iVar2];
				if (func_211(iVar4))
				{
					if (func_189(iVar2))
					{
						if (!func_92(vVar3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), false), vVar3) < (210f * 210f))
							{
								if (func_10() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_189(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_106070.f_2355.f_539.f_2276[iParam0];
	return func_190(iVar0);
}

int func_190(int iParam0)
{
	return func_191(iParam0, 1);
}

int func_191(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_211(iParam0))
	{
		return 0;
	}
	func_192(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_192(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_193(func_204(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_193(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_203(iParam0, iParam1))
	{
		iVar0 = func_202(iParam1);
		iVar1 = func_200(iParam0);
		iVar2 = (func_200(iParam0) - func_200(iParam1));
		iVar3 = (func_202(iParam0) - func_202(iParam1));
		iVar4 = (func_199(iParam0) - func_199(iParam1));
		iVar5 = (func_198(iParam0) - func_198(iParam1));
		iVar6 = (func_197(iParam0) - func_197(iParam1));
		iVar7 = (func_196(iParam0) - func_196(iParam1));
	}
	else
	{
		iVar0 = func_202(iParam0);
		iVar1 = func_200(iParam1);
		iVar2 = (func_200(iParam1) - func_200(iParam0));
		iVar3 = (func_202(iParam1) - func_202(iParam0));
		iVar4 = (func_199(iParam1) - func_199(iParam0));
		iVar5 = (func_198(iParam1) - func_198(iParam0));
		iVar6 = (func_197(iParam1) - func_197(iParam0));
		iVar7 = (func_196(iParam1) - func_196(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_195(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_194(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_194(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_195(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_196(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_197(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_198(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_199(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_200(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_201(unk_0x05EFB6A616B6FADE(iParam0, 31), -1, 1)) + 2011;
}

int func_201(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_202(int iParam0)
{
	return iParam0 & 15;
}

int func_203(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_211(iParam1) || !func_211(iParam0))
	{
		return 1;
	}
	iVar0 = func_200(iParam0);
	iVar1 = func_200(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_202(iParam0);
	iVar1 = func_202(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_199(iParam0);
	iVar1 = func_199(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_198(iParam0);
	iVar1 = func_198(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_197(iParam0);
	iVar1 = func_197(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_196(iParam0);
	iVar1 = func_196(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_204()
{
	var uVar0;
	
	func_210(&uVar0, unk_0xC5B07C33AC7BB174());
	func_209(&uVar0, unk_0x65DA628D62901275());
	func_208(&uVar0, unk_0x34CEB9721AC6A0A9());
	func_207(&uVar0, unk_0xC9A0B68BA813CF99());
	func_206(&uVar0, unk_0x897D202BD69186D5());
	func_205(&uVar0, unk_0x56EBDF0E39D83471());
	return uVar0;
}

void func_205(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_206(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_207(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_202(*uParam0);
	iVar1 = func_200(*uParam0);
	if (iParam1 < 1 || iParam1 > func_195(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_208(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_209(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_210(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_211(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_196(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_197(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_198(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_200(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_202(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_199(iParam0);
	if (iVar5 < 1 || iVar5 > func_195(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_212(int iParam0, int iParam1)
{
	if (unk_0x05EFB6A616B6FADE(Global_106070.f_24967.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_213(int iParam0)
{
	int iVar0;
	
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
		{
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				iVar0 = func_10();
				if (!func_13(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC()) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x3D77D31E25961596(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0)) || func_221()) || Global_105117) || Global_25461) || func_220()) || func_52(8, -1)) || func_219()) || func_218()) || func_217()) || func_216()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1) || func_221()) || Global_25461) || func_220()) || func_52(8, -1)) || func_217()) || func_219()) || func_218()) || func_216()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC()) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x3D77D31E25961596(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0)) || func_221()) || Global_105117) || Global_25461) || func_220()) || func_52(8, -1)) || func_217()) || func_219()) || func_218()) || func_216()) || Global_106070.f_7660.f_919[iVar0] == 5) || Global_36664 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715()) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0)) || func_221()) || Global_105117) || Global_25461) || func_220()) || func_52(8, -1)) || func_219()) || func_218()) || func_216()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_221() || unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0) || func_52(8, -1)) || func_216()) || func_215()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_52(8, -1) || func_219()) || func_218()) || func_215()) || func_214())
						{
							return 0;
						}
						if ((unk_0x47C3DC461C758C29() && unk_0xF6F3AB25005ED460() != 3) && unk_0x84C1DECF60EFBBD7() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
						{
							if ((((((((((((((unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0) || unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || func_221()) || Global_25461) || func_220()) || func_52(8, -1)) || func_218()) || func_217()) || func_216()) || Global_106070.f_7660.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0) || !unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC())) || !unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC())) || !unk_0x3A83743561B4F70C()) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || func_221()) || func_218()) || Global_105117) || Global_25461) || func_220()) || Global_37271) || func_52(8, -1)) || func_217()) || func_215()) || func_216()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0) || !unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC())) || !unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC())) || !unk_0x3A83743561B4F70C()) || unk_0x122A8778D4027A82(unk_0xD4E735F4B6A956AC(), 0)) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1)) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0x443A3698D0CD9D06(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || func_221()) || Global_105117) || Global_25461) || func_220()) || func_52(8, -1)) || func_217()) || func_215()) || func_219()) || func_218()) || func_216())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_214()
{
	return Global_93271.f_1;
}

int func_215()
{
	if (Global_90249 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_84115[Global_90249 /*34*/].f_15, 13);
	}
	return 0;
}

int func_216()
{
	if (unk_0x8B1574454E8C2421(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_217()
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

bool func_218()
{
	return Global_93284.f_328 > 0;
}

bool func_219()
{
	return Global_93284.f_327 > 0;
}

var func_220()
{
	return Global_1312857;
}

int func_221()
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		return Global_90805.f_44 == 1;
	}
	return 0;
}

int func_222()
{
	func_50();
	if (Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_223(int iParam0)
{
	return func_203(func_204(), iParam0);
}

int func_224(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_10();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_225(int iParam0)
{
	if (!func_13(iParam0))
	{
		return 7;
	}
	return Global_106070.f_7660.f_919[iParam0];
}

bool func_226(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_228())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x05EFB6A616B6FADE(Global_106070.f_24967, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x05EFB6A616B6FADE(Global_106070.f_24967.f_1, iVar0);
	}
	return bVar1;
}

int func_227()
{
	int iVar0;
	
	if (Global_25609)
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
			if (unk_0x1095F403F52B42E1(iVar0, 0))
			{
				if (!unk_0x4915F4759304D5CF(unk_0xB0D49A1F9F054602(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_228()
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

int func_229(int iParam0)
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

void func_230()
{
	if (vdist(vLocal_50, -2255.21f, 4271.04f, 44.875f) < 5f)
	{
		iLocal_121 = 1;
	}
	else if (vdist(vLocal_50, -500.924f, -2165.36f, 7.6988f) < 5f)
	{
		iLocal_121 = 2;
	}
}

void func_231()
{
	if (unk_0xDC5D81351D6A4DDB(iLocal_72) && !unk_0x7112137033807390(iLocal_72, 0))
	{
		unk_0x1F4E5EFBFE503FB3(iLocal_72, false);
		unk_0xA5DE74AE39867B03(unk_0x8F474E419F56E48D(iLocal_72));
		func_243(&iLocal_72, 1, 0, 1);
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_71) && !unk_0x7112137033807390(iLocal_71, 0))
	{
		unk_0xB0D7019224A3A443(iLocal_71, 310, true);
		unk_0x1F4E5EFBFE503FB3(iLocal_71, false);
	}
	if (unk_0xCE3CB618AFE55EFB(iLocal_60))
	{
		unk_0xE1623437A3194332(&iLocal_60);
	}
	func_62(&iLocal_63);
	if (unk_0xCE3CB618AFE55EFB(iLocal_61))
	{
		unk_0xE1623437A3194332(&iLocal_61);
	}
	if (unk_0x2F8EAF18929E1E59("RE_CAR_STEAL_SCENE"))
	{
		if (func_162(iLocal_73))
		{
			unk_0x3C50F1F859BA232B(iLocal_73, 0);
		}
		unk_0x5AD7D03C214BDA88("RE_CAR_STEAL_SCENE");
	}
	if (iLocal_121 == 2)
	{
		unk_0x7C925EC45C510DDE(joaat("rocoto"));
	}
	else
	{
		unk_0x7C925EC45C510DDE(joaat("peyote"));
	}
	func_16(&iLocal_73);
	if (func_162(iLocal_76))
	{
		unk_0xAB9FD40CC0E419E3(iLocal_76, true);
	}
	unk_0x90E641761C692B84(0);
	unk_0xBF6EED5D6E0CD9BF(1f);
	func_146(39, 0);
	func_146(40, 0);
	func_146(41, 0);
	func_146(42, 0);
	func_146(43, 0);
	func_146(44, 0);
	func_232(-1);
	func_64(&uLocal_138, 0, 0);
	unk_0x8F1A9FE6D91AAFEB();
}

void func_232(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_134();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_181())
	{
		func_236(iParam0);
		unk_0x9E212A43A08FF3F9(0, 0);
		Global_106061 = unk_0xFD34717937104F1C();
		func_235(30000);
		StringCopy(&cVar0, func_234(Global_106059, 1), 64);
		if (func_133(Global_106059) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_106058, 64);
		}
		unk_0xAC757D2BA72C24C9(&cVar0, Global_106056, (unk_0xFD34717937104F1C() - Global_106057), 0);
	}
	else if (unk_0x05EFB6A616B6FADE(Global_106066, 0) && Global_106070.f_24967.f_2 < 3)
	{
		unk_0xFA57C719261AA55D(&Global_106066, 0);
	}
	func_233(&Global_25518);
	Global_106060 = 0;
	func_187(-1);
}

void func_233(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_36079)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_36078 = 0;
	Global_36080 = 0;
	Global_36117 = 15;
	Global_56178 = 0;
	Global_56179 = 0;
}

char* func_234(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_235(int iParam0)
{
	Global_36668 = (unk_0xFD34717937104F1C() + iParam0);
}

void func_236(int iParam0)
{
	func_237(iParam0, 0, func_242(iParam0));
}

void func_237(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_204();
	func_240(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_239(iParam0, &uVar0);
	Var1 = { func_238(&uVar0) };
}

struct<16> func_238(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_198(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_197(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_196(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_199(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_202(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_200(*uParam0), 64);
	return Var0;
}

void func_239(int iParam0, var uParam1)
{
	Global_106070.f_24967.f_43[iParam0] = *uParam1;
}

void func_240(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_200(*uParam0);
	iVar1 = func_202(*uParam0);
	iVar2 = func_199(*uParam0);
	iVar3 = func_198(*uParam0);
	iVar4 = func_197(*uParam0);
	iVar5 = func_196(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_195(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_195(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_241(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_241(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_210(uParam0, iParam1);
	func_209(uParam0, iParam2);
	func_208(uParam0, iParam3);
	func_206(uParam0, iParam5);
	func_207(uParam0, iParam4);
	func_205(uParam0, iParam6);
}

int func_242(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_243(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (unk_0xDC5D81351D6A4DDB(*iParam0))
	{
		if (!unk_0x4915F4759304D5CF(*iParam0))
		{
			unk_0x98D1B1BD9C3AA456(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				unk_0x3F29BBC16DCB8A23(*iParam0);
			}
			unk_0xD738221C247C8B71(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x1F4E5EFBFE503FB3(*iParam0, false);
			}
		}
		unk_0x7E4E83D33161D01A(iParam0);
	}
}

