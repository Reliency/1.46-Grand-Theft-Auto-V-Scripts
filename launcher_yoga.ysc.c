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
	var uLocal_27 = 0;
	int iLocal_28 = 0;
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
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	vector3 vLocal_45 = { 0f, 0f, 0f };
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char cLocal_52[64] = "";
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	var uLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	vector3 vLocal_64 = { 0f, 0f, 0f };
	float fLocal_65 = 0f;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	char* sLocal_73 = NULL;
	float fLocal_74 = 0f;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	float fLocal_82 = 0f;
	vector3 vLocal_83 = { 0f, 0f, 0f };
	vector3 vLocal_84 = { 0f, 0f, 0f };
	float fLocal_85 = 0f;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	struct<6> Local_88 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	struct<2> Local_95 = { 0, 5 } ;
	var uLocal_96 = 0;
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
	var uLocal_111 = 5;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_45 = { 500f, 500f, 500f };
	iLocal_68 = -1;
	iLocal_69 = 2050;
	iLocal_70 = -1;
	iLocal_71 = -1;
	sLocal_73 = "CC_SUBSTR";
	fLocal_74 = 125f;
	iLocal_75 = 1;
	iLocal_77 = 263;
	fLocal_85 = 4f;
	iLocal_86 = -1;
	vLocal_64 = { ScriptParam_95.f_1[0 /*3*/] };
	vLocal_64 = { vLocal_64 };
	uLocal_62 = uLocal_62;
	cLocal_52 = { cLocal_52 };
	bVar0 = false;
	if (unk_0x5EBD03AF78E7B4DB(82))
	{
		func_88(1);
	}
	iLocal_61 = unk_0xEE978C39384D834F(unk_0xD4E735F4B6A956AC());
	iLocal_67 = 0;
	func_86(&Global_104721, 0);
	func_84();
	if (func_83(uLocal_66, 1))
	{
		iLocal_72 = 10;
	}
	else
	{
		iLocal_72 = 9;
	}
	while (!Global_31887)
	{
		wait(0);
	}
	if (!func_83(uLocal_66, 8))
	{
		if (!func_81(iLocal_72))
		{
			if (func_80(0, iLocal_71))
			{
				func_88(0);
			}
			else
			{
				func_88(1);
			}
		}
	}
	if (iLocal_71 != -1)
	{
		if (!func_80(0, iLocal_71))
		{
			func_88(1);
		}
	}
	if (func_83(uLocal_66, 8388608))
	{
		func_88(1);
	}
	if (func_83(uLocal_66, 524288) && (func_79() && !func_78()))
	{
		func_88(1);
	}
	if (unk_0x8B1574454E8C2421(unk_0xB09979570758BDAD()) > 1 && !func_83(uLocal_66, 4194304))
	{
		if (iLocal_77 != 263)
		{
			func_77(iLocal_77, 1, 0);
			iLocal_77 = 263;
		}
		func_76(10);
	}
	while (true)
	{
		if (!func_83(uLocal_66, 268435456))
		{
			fVar1 = 0f;
			if (unk_0x8F7BA8E028ADF980(ScriptParam_95.f_1[0 /*3*/], &fVar1, 0, 0))
			{
				if (fVar1 != 0f)
				{
					ScriptParam_95.f_1[0 /*3*/].f_2 = fVar1;
					func_75(&uLocal_66, 268435456);
				}
			}
		}
		iLocal_61 = unk_0xEE978C39384D834F(unk_0xD4E735F4B6A956AC());
		if (func_83(uLocal_66, 1048576))
		{
			if (unk_0x7112137033807390(iLocal_61, 0))
			{
				func_88(1);
			}
		}
		if (unk_0xDC5D81351D6A4DDB(iLocal_61) && !unk_0x7112137033807390(iLocal_61, 0))
		{
			vLocal_63 = { unk_0xE2BBD32891C18569(iLocal_61, true) };
			fLocal_65 = vdist2(vLocal_63, ScriptParam_95.f_1[0 /*3*/]);
			fLocal_65 = fLocal_65;
			vLocal_83 = { vLocal_63 };
			vLocal_84 = { ScriptParam_95.f_1[0 /*3*/] };
			vLocal_83.z = 0f;
			vLocal_84.z = 0f;
			fLocal_82 = vdist2(vLocal_83, vLocal_84);
			switch (iLocal_67)
			{
				case 0:
					if (func_81(iLocal_72) || (func_83(uLocal_66, 16) && !func_83(uLocal_66, 524288)))
					{
						iLocal_70 = -1;
						func_74();
						func_76(1);
					}
					else
					{
						if (fLocal_82 > (fLocal_74 * fLocal_74))
						{
							if (iLocal_77 != 263)
							{
								func_77(iLocal_77, 1, 0);
								iLocal_77 = 263;
							}
							func_76(10);
						}
						if ((vLocal_63.z - ScriptParam_95.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_73())
					{
						iLocal_75 = iLocal_75;
						func_76(3);
					}
					else
					{
						func_74();
					}
					break;
				
				case 3:
					if (unk_0xB3ADBAEA60664F46())
					{
						func_88(1);
						return;
					}
					if (!func_81(iLocal_72))
					{
						if (!func_83(uLocal_66, 8))
						{
							bVar2 = true;
							if (unk_0x3CAC2741CC1A631F(&(Global_93232.f_3), &cLocal_52))
							{
								cLocal_52 = { Local_51 };
								bVar2 = false;
							}
							if (bVar2)
							{
								func_88(0);
								break;
							}
						}
					}
					if (!func_83(uLocal_66, 4))
					{
						func_72();
						func_75(&uLocal_66, 4);
					}
					if (fLocal_82 > (fLocal_74 * fLocal_74) && !Global_93266)
					{
						if (iLocal_77 != 263)
						{
							if (func_71(6) && !func_70(iLocal_77))
							{
							}
							else
							{
								func_77(iLocal_77, 1, 0);
								iLocal_77 = 263;
							}
						}
						func_76(10);
					}
					else
					{
						cLocal_52 = { Local_51 };
						bVar3 = !func_83(uLocal_66, 64);
						func_86(&uLocal_66, 128);
						if (!func_69(3) && !Global_93266)
						{
							if (func_83(uLocal_66, 2097152))
							{
								if ((!func_83(uLocal_66, 1) || !unk_0xDC5D81351D6A4DDB(func_68())) && !Global_93266)
								{
									func_76(10);
									break;
								}
							}
						}
						if (func_83(uLocal_66, 524288) && (func_79() && !func_78()))
						{
							func_88(1);
						}
						if (func_67())
						{
							func_88(1);
						}
						if ((!func_58(6) || Global_105117) || func_57())
						{
							bVar3 = false;
						}
						if (func_83(uLocal_66, 1))
						{
							if (!func_56())
							{
								func_54(&uLocal_66, 128);
								bVar3 = false;
							}
						}
						if (func_53(1))
						{
							bVar3 = false;
						}
						if (Global_71205)
						{
							bVar3 = false;
						}
						if (func_52())
						{
							bVar3 = false;
						}
						if (unk_0x47C3DC461C758C29())
						{
							bVar3 = false;
						}
						if (func_51() || func_50(8, -1))
						{
							bVar3 = false;
						}
						if (!unk_0x783F4B81000DAFE2(unk_0xD4E735F4B6A956AC()))
						{
							bVar3 = false;
						}
						if (!unk_0xECEC0B592ADDCDE7(unk_0xD4E735F4B6A956AC()))
						{
							bVar3 = false;
						}
						if (func_49(0) || func_48())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (!func_43(iLocal_86))
							{
								func_54(&uLocal_66, 128);
								bVar3 = false;
							}
							if (!unk_0xA60C975CBAB69F34(iLocal_61, ScriptParam_95.f_1[0 /*3*/], fLocal_85, fLocal_85, 2f, false, true, iLocal_75))
							{
								bVar3 = false;
							}
							if (!unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								unk_0x9EA8CBEA7355649E(0, 51);
								if (func_42(uLocal_62))
								{
									if (iLocal_68 == -1)
									{
										func_41(&iLocal_68, 4, sLocal_73, 0, 0, 0, 0);
										func_54(&uLocal_66, 2048);
									}
									else if (!func_83(uLocal_66, 2048) || !unk_0xE06AA0996C4E4E03())
									{
										func_40(&iLocal_68);
										func_86(&uLocal_66, 2048);
									}
									if (func_38(iLocal_68, 1))
									{
										sLocal_73 = sLocal_73;
										func_40(&iLocal_68);
										func_86(&uLocal_66, 2048);
										unk_0xD75A4240F0AD8613(&cLocal_52);
										unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 56);
										func_76(5);
									}
								}
								else
								{
									sLocal_73 = sLocal_73;
									func_40(&iLocal_68);
									func_86(&uLocal_66, 2048);
									unk_0xD75A4240F0AD8613(&cLocal_52);
									unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 56);
									func_76(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_68 != -1)
							{
								func_40(&iLocal_68);
								func_86(&uLocal_66, 2048);
								unk_0x135C61E339DABBAC(0);
							}
						}
					}
					func_37();
					break;
				
				case 5:
					unk_0x9EA8CBEA7355649E(0, 51);
					if (unk_0xB1FDFCECA75CE4A7(&cLocal_52))
					{
						if (iLocal_68 != -1)
						{
							func_40(&iLocal_68);
						}
						iVar4 = 2;
						bVar0 = false;
						if (func_83(uLocal_66, 1))
						{
							if (func_71(6) || func_71(7))
							{
								iVar4 = 1;
								bVar0 = true;
							}
						}
						if (iVar4 != 1)
						{
							iVar4 = func_34(&iLocal_70, 6, iLocal_72, 0, 0);
						}
						if (iVar4 == 1)
						{
							if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
							{
								unk_0xDEE4574BA71257AB(unk_0xD4E735F4B6A956AC());
							}
							func_33();
							if (Global_37271)
							{
								func_24(unk_0xA19140A5C42D8715());
							}
							unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 56);
							iLocal_50 = start_new_script(&cLocal_52, iLocal_69);
							unk_0x4659F4154D948B01(&cLocal_52);
							Local_51 = { cLocal_52 };
							StringCopy(&cLocal_52, "", 64);
							func_86(&uLocal_66, 4);
							func_23();
							func_54(&uLocal_66, 2);
							func_76(6);
							func_19(&iLocal_79);
							if (iLocal_71 != -1)
							{
								func_18(iLocal_71);
								func_15(func_17(iLocal_71), 0, 0);
							}
						}
						else if (iVar4 == 2)
						{
							func_14();
						}
						else if (iVar4 == 0)
						{
							func_76(10);
						}
					}
					else
					{
						func_14();
					}
					break;
				
				case 6:
					if (!func_83(uLocal_66, 256))
					{
						if (unk_0x607776744A243309() || unk_0x3A83743561B4F70C())
						{
							unk_0x9EA8CBEA7355649E(0, 51);
						}
						else if (unk_0x71364F510A1CB69F())
						{
							func_54(&uLocal_66, 256);
						}
					}
					if (func_83(Global_104721, 262144))
					{
						func_86(&Global_104721, 262144);
						func_13();
					}
					if (func_83(uLocal_66, 2097152))
					{
						if (!func_69(3) && !unk_0x2BCD0524CDEE1FD2(iLocal_50))
						{
							func_76(10);
						}
					}
					if (!unk_0x2BCD0524CDEE1FD2(iLocal_50))
					{
						unk_0x4CA80915EDAE5C7E(round((func_9(&iLocal_79) * 1000f)), iLocal_71, 0);
						func_8(&iLocal_79);
						func_86(&uLocal_66, 256);
						func_7();
						if (bVar0)
						{
							func_86(&uLocal_66, 2);
						}
						else if (func_83(uLocal_66, 2))
						{
							if (func_83(Global_104721, 0))
							{
								func_6(&iLocal_70);
								iLocal_70 = -1;
								func_86(&uLocal_66, 2);
							}
							else
							{
								func_6(&iLocal_70);
								iLocal_70 = -1;
								func_86(&uLocal_66, 2);
							}
						}
						func_76(0);
						if (iLocal_71 != -1)
						{
							if (func_83(Global_104721, 0))
							{
								unk_0x5D84F5C14E1207BE(func_17(iLocal_71), 0, Global_93269, 0);
								func_5(func_17(iLocal_71), 0, Global_93269, 1, 0);
							}
							else
							{
								unk_0x5D84F5C14E1207BE(func_17(iLocal_71), 0, Global_93269, 0);
								func_5(func_17(iLocal_71), 0, Global_93269, 0, 0);
							}
						}
						func_4();
						func_86(&Global_104721, 0);
						if (func_83(uLocal_66, 16777216))
						{
							func_88(1);
						}
						if (iLocal_71 != -1)
						{
							if (Global_106070.f_9057)
							{
								if (!func_80(0, iLocal_71))
								{
									func_88(1);
								}
							}
						}
					}
					func_3();
					break;
				
				case 8:
					func_76(0);
					break;
				
				case 10:
					func_88(1);
					break;
				
				case 9:
					if (fLocal_82 > (fLocal_74 * fLocal_74))
					{
						if (iLocal_77 != 263)
						{
							func_77(iLocal_77, 1, 0);
							iLocal_77 = 263;
						}
						func_76(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_77 != 263)
					{
						func_77(iLocal_77, 0, 0);
					}
					if (iLocal_68 != -1)
					{
						func_40(&iLocal_68);
					}
					if (!unk_0x429D45A6C6520026(sLocal_73))
					{
						if (func_1(sLocal_73))
						{
							unk_0x135C61E339DABBAC(1);
						}
					}
					func_76(4);
					break;
				
				case 4:
					if ((iLocal_76 % 150) == 0)
					{
						if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
						{
							if (iLocal_78 == 2)
							{
								if (iLocal_78 == 2)
								{
									if (func_81(iLocal_72) && func_80(0, iLocal_71))
									{
										func_84();
										if (iLocal_77 != 263)
										{
											func_77(iLocal_77, 1, 0);
										}
										func_76(0);
									}
								}
							}
							else if (iLocal_78 == 0)
							{
								if (fLocal_82 > (fLocal_74 * fLocal_74))
								{
									if (iLocal_77 != 263)
									{
										func_77(iLocal_77, 1, 0);
										iLocal_77 = 263;
									}
									func_76(10);
								}
							}
							else if (iLocal_78 == 1)
							{
								if (fLocal_82 > ((80f + 5f) * (80f + 5f)))
								{
									func_84();
									if (iLocal_77 != 263)
									{
										func_77(iLocal_77, 1, 0);
									}
									func_76(0);
								}
							}
						}
						else
						{
							func_77(iLocal_77, 1, 0);
						}
					}
					else
					{
						iLocal_76++;
					}
					break;
				}
		}
		wait(0);
	}
}

int func_1(char* sParam0)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	return unk_0x3D94488A86ABB03F(0);
}

void func_2()
{
}

void func_3()
{
}

void func_4()
{
}

void func_5(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (unk_0x429D45A6C6520026(&Global_90397))
	{
		return;
	}
	if (unk_0xCEB43E897180EFFF(sParam0, &Global_90397, 0, -1) != 0)
	{
		return;
	}
	unk_0x70D5564B24C33858(sParam0, iParam1, iParam2, iParam3, iParam4, Global_87504);
	StringCopy(&Global_90397, "", 64);
}

void func_6(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_36079)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_36078 = 0;
	Global_36080 = 0;
	Global_36117 = 15;
	Global_56178 = 0;
	Global_56179 = 0;
}

void func_7()
{
	vector3 vVar0[24];
	
	if (unk_0x365C4466BC171A2D() || unk_0x29A02C184A66D25E())
	{
		unk_0x14D4D10C8FD9E0DD(StackVal, 0, 0, 0);
	}
	else if (unk_0x332D85764ED0503F() || unk_0x7DD04831D0FC44CA())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x5182FF270C9DCEBC(0, &cVar0);
	}
}

void func_8(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_9(int iParam0)
{
	if (func_12(iParam0))
	{
		if (func_11(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_10(unk_0x05EFB6A616B6FADE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_10(bool bParam0)
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

bool func_11(var uParam0)
{
	return unk_0x05EFB6A616B6FADE(*uParam0, 2);
}

bool func_12(var uParam0)
{
	return unk_0x05EFB6A616B6FADE(*uParam0, 1);
}

int func_13()
{
	return 1;
}

void func_14()
{
}

void func_15(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x429D45A6C6520026(&Global_90397))
	{
		unk_0x70D5564B24C33858(&Global_90397, 0, 0, 0, 1, 0);
		StringCopy(&Global_90397, "", 64);
	}
	StringCopy(&Global_90397, sParam0, 64);
	unk_0x68A0B28BF08CE0B0(sParam0, iParam1, iParam2, func_16(0));
}

bool func_16(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

char* func_17(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_18(int iParam0)
{
	var uVar0;
	vector3 vVar1[24];
	
	if (unk_0x365C4466BC171A2D() || unk_0x29A02C184A66D25E())
	{
		uVar0 = iParam0;
		unk_0x14D4D10C8FD9E0DD(8, &uVar0, 1, 1);
	}
	else if (unk_0x332D85764ED0503F() || unk_0x7DD04831D0FC44CA())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x5182FF270C9DCEBC(8, &cVar1);
	}
}

void func_19(int iParam0)
{
	if (!func_12(iParam0))
	{
		func_22(iParam0);
	}
	else
	{
		func_20(iParam0);
	}
}

void func_20(int iParam0)
{
	func_21(iParam0, 0f);
}

void func_21(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_10(unk_0x05EFB6A616B6FADE(*iParam0, 4)) - fParam1);
	unk_0x2BCFB39E86340DAA(iParam0, 1);
	unk_0xFA57C719261AA55D(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_22(int iParam0)
{
	if (!func_12(iParam0))
	{
		func_20(iParam0);
	}
}

void func_23()
{
	unk_0xA5DE74AE39867B03(Local_88.f_1);
	if (unk_0xDC5D81351D6A4DDB(Local_88))
	{
		unk_0xAA1FF14A8DC5C352(&Local_88);
	}
}

void func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return;
	}
	iVar0 = func_32(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_37058[iVar0 /*5*/];
		func_27(1, iVar1, 1);
		return;
	}
	iVar2 = func_26(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_25(iVar2);
}

void func_25(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_37032[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_37032[iParam0 /*5*/].f_1 == unk_0xA19140A5C42D8715())
		{
			Global_37269 = 0;
		}
	}
	Global_37032[iParam0 /*5*/] = 13;
	Global_37032[iParam0 /*5*/].f_1 = 0;
	Global_37032[iParam0 /*5*/].f_2 = 0;
	Global_37032[iParam0 /*5*/].f_3 = 0;
	Global_37032[iParam0 /*5*/].f_4 = 0;
	Global_37031 = (Global_37031 - 1);
	if (Global_37031 < 0)
	{
		Global_37031 = 0;
	}
}

int func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_37032[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_27(int iParam0, int iParam1, int iParam2)
{
	func_28(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_28(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_30(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_29();
	if (iVar0 == -1)
	{
		return;
	}
	Global_37139[iVar0 /*6*/] = iParam0;
	Global_37139[iVar0 /*6*/].f_1 = iParam1;
	Global_37139[iVar0 /*6*/].f_2 = iParam2;
	Global_37139[iVar0 /*6*/].f_3 = iParam3;
	Global_37139[iVar0 /*6*/].f_4 = iParam4;
	Global_37139[iVar0 /*6*/].f_5 = iParam5;
}

int func_29()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_37139[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_30(int iParam0, int iParam1, int iParam2)
{
	if (func_31(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_31(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_37139[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_37139[iVar0 /*6*/])
			{
				if (iParam1 == Global_37139[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_32(int iParam0)
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

void func_33()
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

int func_34(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_36(0))
		{
			return 0;
		}
		Global_36081++;
		*iParam0 = Global_36081;
		unk_0xEF06BE39D11763FC(unk_0xA6580F898F4E801C(), 0);
		Global_17228.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xA5DD4141C1E70561(8);
		}
		Global_36117 = iParam2;
		Global_36079 = *iParam0;
		Global_36080 = iParam4;
		Global_36078 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_36078 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_36078)
			{
				if (Global_36084[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_36079 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_81(iParam2))
		{
			return 0;
		}
		if (Global_36078 == 8)
		{
			return 0;
		}
		Global_36081++;
		*iParam0 = Global_36081;
		Global_36084[Global_36078 /*4*/] = Global_36081;
		Global_36084[Global_36078 /*4*/].f_1 = iParam1;
		Global_36084[Global_36078 /*4*/].f_2 = iParam2;
		Global_36084[Global_36078 /*4*/].f_3 = 0;
		Global_36078++;
		if (iParam4 != 0)
		{
			func_35(iParam0, iParam4);
		}
	}
	return 2;
}

void func_35(var uParam0, int iParam1)
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

int func_36(int iParam0)
{
	if (Global_36117 == 15)
	{
		return 0;
	}
	if (func_81(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_37()
{
	if (iLocal_87 == 1)
	{
		if (unk_0xE31BE476074BBE8F("WORLD_MOUNTAIN_LION_WANDER"))
		{
			unk_0x66E6A13BAFFFB63C("WORLD_MOUNTAIN_LION_WANDER", 0);
			unk_0x8DB49F2EDD326F53(joaat("a_c_mtlion"), true);
		}
	}
}

int func_38(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_39(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x58E3CCF930D23BD5(unk_0xA6580F898F4E801C()))
	{
		return 0;
	}
	if (func_49(0))
	{
		return 0;
	}
	if (unk_0x5CA3186381FC012C())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36827[iVar0 /*32*/] == 1 && Global_36827[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36827[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36827[iVar0 /*32*/].f_5 = 1;
			Global_36827[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36827[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36827[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_39(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36827[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_40(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_39(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36827[iVar0 /*32*/])
		{
			Global_36827[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_41(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8B1574454E8C2421(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x47C3DC461C758C29())
	{
		if (!*iParam0 == -1)
		{
			func_40(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36827[iVar0 /*32*/])
		{
			Global_36827[iVar0 /*32*/] = 1;
			Global_36827[iVar0 /*32*/].f_1 = Global_37028;
			Global_37028++;
			Global_36827[iVar0 /*32*/].f_4 = 0;
			Global_36827[iVar0 /*32*/].f_29 = 0;
			Global_36827[iVar0 /*32*/].f_5 = 0;
			Global_36827[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36827[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36827[iVar0 /*32*/].f_6 = iParam3;
			Global_36827[iVar0 /*32*/].f_31 = unk_0xFCB3E4B16B4A9EC1();
			Global_36827[iVar0 /*32*/].f_7 = 0;
			Global_36827[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x429D45A6C6520026(sParam4))
			{
				Global_36827[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36827[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36827[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36827[iVar0 /*32*/].f_12 = 0;
				Global_36827[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36827[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_42(var uParam0)
{
	return 1;
}

bool func_43(int iParam0)
{
	func_44();
	return iParam0 == Global_106070.f_2355.f_539.f_4301;
}

void func_44()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_47(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_46(unk_0xA19140A5C42D8715());
			if (func_45(iVar0) && (!func_71(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_45(Global_106070.f_2355.f_539.f_4301))
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

bool func_45(int iParam0)
{
	return iParam0 < 3;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)
{
	if (func_45(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_48()
{
	return Global_68494;
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

bool func_50(int iParam0, int iParam1)
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

bool func_51()
{
	return unk_0xFD34717937104F1C() <= Global_17367.f_5873 + 100;
}

int func_52()
{
	if (unk_0x8B1574454E8C2421(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_53(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17228.f_4 && Global_17228.f_104 == 4);
	}
	return Global_17228.f_4;
}

void func_54(var uParam0, int iParam1)
{
	func_55(uParam0, iParam1);
}

void func_55(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_56()
{
	return 1;
}

bool func_57()
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		return 0;
	}
	unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		return ((((bVar1 && unk_0xD73B1037F6BD4B90(0, 69)) || (bVar1 && unk_0xD73B1037F6BD4B90(0, 70))) || (bVar1 && unk_0xD73B1037F6BD4B90(0, 68))) || unk_0xFBBCA633CD1A088B(unk_0xD4E735F4B6A956AC()));
	}
	return (((((bVar1 && unk_0xD73B1037F6BD4B90(0, 24)) || (bVar1 && unk_0xD73B1037F6BD4B90(0, 25))) || (bVar1 && unk_0xD73B1037F6BD4B90(0, 47))) || unk_0x8DBEC2BE62488A34(unk_0xA19140A5C42D8715())) || unk_0xFBBCA633CD1A088B(unk_0xD4E735F4B6A956AC()));
}

int func_58(int iParam0)
{
	int iVar0;
	
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
		{
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				iVar0 = func_66();
				if (!func_45(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC()) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x3D77D31E25961596(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0)) || func_65()) || Global_105117) || Global_25461) || func_64()) || func_50(8, -1)) || func_63()) || func_62()) || func_61()) || func_52()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1) || func_65()) || Global_25461) || func_64()) || func_50(8, -1)) || func_61()) || func_63()) || func_62()) || func_52()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC()) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x3D77D31E25961596(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0)) || func_65()) || Global_105117) || Global_25461) || func_64()) || func_50(8, -1)) || func_61()) || func_63()) || func_62()) || func_52()) || Global_106070.f_7660.f_919[iVar0] == 5) || Global_36664 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715()) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0)) || func_65()) || Global_105117) || Global_25461) || func_64()) || func_50(8, -1)) || func_63()) || func_62()) || func_52()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_65() || unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0) || func_50(8, -1)) || func_52()) || func_60()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_50(8, -1) || func_63()) || func_62()) || func_60()) || func_59())
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
							if ((((((((((((((unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0) || unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || func_65()) || Global_25461) || func_64()) || func_50(8, -1)) || func_62()) || func_61()) || func_52()) || Global_106070.f_7660.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0) || !unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC())) || !unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC())) || !unk_0x3A83743561B4F70C()) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || func_65()) || func_62()) || Global_105117) || Global_25461) || func_64()) || Global_37271) || func_50(8, -1)) || func_61()) || func_60()) || func_52()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0) || !unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC())) || !unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC())) || !unk_0x3A83743561B4F70C()) || unk_0x122A8778D4027A82(unk_0xD4E735F4B6A956AC(), 0)) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1)) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0x443A3698D0CD9D06(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || func_65()) || Global_105117) || Global_25461) || func_64()) || func_50(8, -1)) || func_61()) || func_60()) || func_63()) || func_62()) || func_52())
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

var func_59()
{
	return Global_93271.f_1;
}

int func_60()
{
	if (Global_90249 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_84115[Global_90249 /*34*/].f_15, 13);
	}
	return 0;
}

int func_61()
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

bool func_62()
{
	return Global_93284.f_328 > 0;
}

bool func_63()
{
	return Global_93284.f_327 > 0;
}

var func_64()
{
	return Global_1312857;
}

int func_65()
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		return Global_90805.f_44 == 1;
	}
	return 0;
}

var func_66()
{
	func_44();
	return Global_106070.f_2355.f_539.f_4301;
}

int func_67()
{
	if (unk_0x8B1574454E8C2421(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_68()
{
	return Global_89159;
}

int func_69(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_71(6) || func_71(7))
			{
				return 1;
			}
			else
			{
				return func_69(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_81(5))
			{
				if (func_58(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_70(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0xCE3CB618AFE55EFB(Global_25834[iVar0 /*23*/].f_19);
}

bool func_71(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_72()
{
	if (!unk_0xDC5D81351D6A4DDB(Local_88))
	{
		Local_88 = unk_0xFCFC8CC5FF74580D(Local_88.f_1, Local_88.f_2, true, true, false);
		unk_0xE8B3104D1CB25CDC(Local_88, Local_88.f_2, 0, 0, 1);
		unk_0x76D3D51F5F66367F(Local_88, Local_88.f_5, 2, 1);
		unk_0xB29E08C7AB729BAD(Local_88, true);
	}
}

bool func_73()
{
	if (!unk_0x3F0E621C9C312804(Local_88.f_1))
	{
		return 0;
	}
	return unk_0x7FC99CCC73354033(Local_88.f_1);
}

void func_74()
{
	if (!unk_0x3F0E621C9C312804(Local_88.f_1))
	{
		return;
	}
	unk_0xCACEBBBEAD8F262E(Local_88.f_1);
}

void func_75(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_76(int iParam0)
{
	iLocal_67 = iParam0;
}

void func_77(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0x05EFB6A616B6FADE(Global_25834[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x05EFB6A616B6FADE(Global_25834[iVar0 /*23*/].f_11, 0))
	{
		unk_0x2BCFB39E86340DAA(&(Global_25834[iVar0 /*23*/].f_11), 18);
		if (Global_25831 == 1)
		{
			Global_25832 = 1;
		}
		Global_25831 = 1;
	}
	if (bParam1)
	{
		unk_0x2BCFB39E86340DAA(&(Global_25834[iVar0 /*23*/].f_11), 0);
		unk_0x2BCFB39E86340DAA(&(Global_25834[iVar0 /*23*/].f_11), 15);
		unk_0x2BCFB39E86340DAA(&(Global_25834[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_25834[iVar0 /*23*/].f_11), 0);
		unk_0xFA57C719261AA55D(&(Global_25834[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x05EFB6A616B6FADE(Global_25834[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xCE3CB618AFE55EFB(Global_25834[iVar0 /*23*/].f_19))
		{
			unk_0xB0A6D0CDCFC41141(1);
			unk_0xE1623437A3194332(&(Global_25834[iVar0 /*23*/].f_19));
			unk_0xB0A6D0CDCFC41141(0);
		}
	}
}

int func_78()
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

int func_79()
{
	if (Global_90249 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_84115[Global_90249 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_80(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0x05EFB6A616B6FADE(Global_106070.f_9057.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

bool func_81(int iParam0)
{
	return func_82(iParam0, Global_36117);
}

int func_82(int iParam0, int iParam1)
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

bool func_83(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_84()
{
	StringCopy(&Local_51, "Yoga", 64);
	sLocal_73 = "PLAY_YOGA";
	iLocal_71 = 18;
	fLocal_85 = 2.5f;
	fLocal_74 = 20f;
	iLocal_69 = 25000;
	iLocal_87 = func_85();
	if (iLocal_87 == 0)
	{
		iLocal_77 = 110;
		Local_88.f_2 = { -791.0036f, 186.3552f, 71.8295f };
		Local_88.f_5 = { 0f, 0f, -87.1403f };
		Local_88.f_1 = joaat("prop_yoga_mat_03");
	}
	else if (iLocal_87 == 1)
	{
		iLocal_77 = 111;
		Local_88.f_2 = { 2861.47f, 5945.9f, 357.06f };
		Local_88.f_5 = { 0f, -0.5f, 70f };
		Local_88.f_1 = joaat("prop_yoga_mat_03");
	}
	iLocal_86 = 0;
}

int func_85()
{
	vector3 vVar0;
	vector3 vVar1[2];
	float fVar2[2];
	
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		vVar0 = { unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(unk_0xD4E735F4B6A956AC()), true) };
		vVar1[0 /*3*/] = { -790.906f, 186.293f, 71.835f };
		vVar1[1 /*3*/] = { 2862.15f, 5945.49f, 357.11f };
		fVar2[0] = vdist2(vVar0, vVar1[0 /*3*/]);
		fVar2[1] = vdist2(vVar0, vVar1[1 /*3*/]);
		if (fVar2[0] < fVar2[1])
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 2;
}

void func_86(var uParam0, int iParam1)
{
	func_87(uParam0, iParam1);
}

void func_87(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_88(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_77 != 263)
		{
			func_77(iLocal_77, 0, 0);
		}
	}
	func_40(&iLocal_68);
	if (func_83(uLocal_66, 2))
	{
		func_4();
		func_86(&uLocal_66, 2);
		func_6(&iLocal_70);
	}
	iLocal_70 = -1;
	func_89();
	unk_0x8F1A9FE6D91AAFEB();
}

void func_89()
{
	func_86(&uLocal_66, 4);
	func_90();
	if (unk_0x2BCD0524CDEE1FD2(iLocal_50))
	{
		unk_0xD64F781E7AD4BE57(iLocal_50, 3);
	}
	if (!unk_0x7032042E5696FFD7(&cLocal_52))
	{
		if (unk_0x245B8CF1349B3FDF(&cLocal_52) != 0)
		{
			unk_0x4659F4154D948B01(&cLocal_52);
		}
	}
}

void func_90()
{
	if (!unk_0xE31BE476074BBE8F("WORLD_MOUNTAIN_LION_WANDER"))
	{
		unk_0x66E6A13BAFFFB63C("WORLD_MOUNTAIN_LION_WANDER", 1);
		unk_0x8DB49F2EDD326F53(joaat("a_c_mtlion"), false);
	}
}

