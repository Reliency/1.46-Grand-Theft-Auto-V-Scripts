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
	int iLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	struct<62> Local_22 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2147483647 } ;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	struct<2> Local_41 = { 0, 0 } ;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	var uLocal_62 = 0;
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
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 1;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	struct<33> Local_87 = { 2147483647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_14 = -1;
	fLocal_15 = 0.001f;
	sLocal_18 = "NULL";
	if (unk_0x4C9BACA8D249CB13())
	{
		func_51(ScriptParam_87);
	}
	else
	{
		func_49();
	}
	while (true)
	{
		func_48();
		if (Global_262145.f_23427)
		{
			func_49();
		}
		if (func_38())
		{
			func_49();
		}
		func_1();
	}
}

void func_1()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (Global_4263463)
	{
		if (Global_4266912[iLocal_21 /*12*/].f_11)
		{
			func_35(Local_22.f_61);
			Global_4266912[iLocal_21 /*12*/].f_11 = 0;
		}
	}
	if (Local_22.f_61.f_8)
	{
		func_17(Local_22.f_61);
	}
	if ((Local_22.f_61.f_2 == 1 && Global_4263464) && func_16(&Local_22))
	{
		bVar0 = true;
	}
	if (Global_4262927[iLocal_21 /*80*/].f_61 == 2147483647 && Local_22.f_61.f_12)
	{
		if (bVar0)
		{
			func_15(0);
		}
		func_49();
	}
	if (Local_22.f_61.f_18 > 0 && !func_14())
	{
		iVar2 = (1000 / round((unk_0xDE089748C4C76C96() * 1000f)));
		if ((unk_0x817B152F7462D506() - Local_22.f_61.f_18) > iVar2 * 10)
		{
			Local_22.f_61.f_18 = -1;
		}
	}
	if (((func_13() && Local_22.f_61.f_2 == 1) && Local_22.f_61.f_13) && !Local_22.f_61.f_12)
	{
		if (unk_0x817B152F7462D506() - Local_22.f_61.f_14) >= func_12(Local_22.f_61.f_5)
		{
			iVar1 = 0;
			if (!unk_0xE46667979780116E(func_11()) || unk_0x64BE694244417BDA())
			{
				iVar1 = 1;
			}
			else if (Local_22.f_61.f_2 != 1)
			{
				iVar1 = 2;
			}
			else if (Local_22.f_61.f_5 != 1 && !unk_0xEC103C948D1D3BEF(&(Local_22.f_61), Local_22.f_61.f_6, Local_22.f_61.f_4, Local_22.f_61.f_7, Local_22.f_61.f_1, Local_22.f_61.f_10))
			{
				iVar1 = 3;
			}
			else if (!unk_0x93EA4BE98F3F425A(Local_22.f_61))
			{
				iVar1 = 4;
			}
			else
			{
				Local_22.f_61.f_12 = 1;
				Global_4262927[iLocal_21 /*80*/].f_61.f_12 = 1;
				Global_4262927[iLocal_21 /*80*/].f_61 = Local_22.f_61;
			}
			if (iVar1 != 0)
			{
				func_7(iLocal_21);
				func_49();
			}
		}
	}
	if (!iLocal_86)
	{
		if (bVar0)
		{
			func_5(&Local_41, 0);
			iLocal_86 = 1;
		}
	}
	else if (bVar0)
	{
		StringCopy(&(Local_41.f_1), "HUD_TRANSP", 64);
		func_2(&Local_41, func_4(&Local_41));
	}
	else
	{
		iLocal_86 = 0;
		func_15(0);
	}
}

void func_2(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_3(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			unk_0x353C61A0CC047CBD(&(uParam0->f_1));
			unk_0xCDA87E1DA52C8C9D(uParam0->f_33);
			unk_0xCDA87E1DA52C8C9D(uParam0->f_34);
			unk_0x520E731543F2632E(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0x353C61A0CC047CBD(&(uParam0->f_1));
			unk_0xCDA87E1DA52C8C9D(uParam0->f_33);
			unk_0x520E731543F2632E(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0x353C61A0CC047CBD(&(uParam0->f_1));
			unk_0xC327C023FDA37F2E(&(uParam0->f_17));
			unk_0xCDA87E1DA52C8C9D(uParam0->f_33);
			unk_0xCDA87E1DA52C8C9D(uParam0->f_34);
			unk_0x520E731543F2632E(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0x353C61A0CC047CBD(&(uParam0->f_1));
			unk_0xC327C023FDA37F2E(&(uParam0->f_17));
			unk_0x520E731543F2632E(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0x353C61A0CC047CBD(&(uParam0->f_1));
			unk_0x90182C5171067861(uParam0->f_33, 70);
			unk_0x520E731543F2632E(uParam0->f_41);
		}
		else
		{
			unk_0x353C61A0CC047CBD(&(uParam0->f_1));
			unk_0x520E731543F2632E(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_3(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_4(var uParam0)
{
	return uParam0->f_35;
}

void func_5(var uParam0, bool bParam1)
{
	func_6(uParam0);
	if (bParam1)
	{
		func_15(0);
	}
	uParam0->f_35 = 1;
}

void func_6(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_7(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_10(iParam0))
		{
			if (!bVar0)
			{
				unk_0x220FA7ABD5D740BF();
			}
		}
		else if (!bVar0)
		{
			unk_0xBDAA2C842F5C47BF(Global_4262927[iParam0 /*80*/].f_61);
		}
		func_8(&(Global_4262927[iParam0 /*80*/]));
	}
}

void func_8(var uParam0)
{
	uParam0->f_61 = 0;
	uParam0->f_61 = 2147483647;
	uParam0->f_61.f_1 = 0;
	uParam0->f_61.f_2 = 0;
	uParam0->f_61.f_3 = -1593119440;
	uParam0->f_61.f_4 = -2085313189;
	uParam0->f_61.f_5 = 0;
	uParam0->f_61.f_6 = 1227573907;
	uParam0->f_61.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_9(&(uParam0->f_13));
	func_9(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 16);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_61.f_8 = 0;
	uParam0->f_61.f_9 = 0;
	uParam0->f_61.f_10 = 0;
	uParam0->f_61.f_11 = 0;
	uParam0->f_61.f_13 = 0;
	uParam0->f_61.f_12 = 0;
	uParam0->f_61.f_14 = 0;
	uParam0->f_61.f_15 = 0;
	uParam0->f_61.f_16 = 0;
	uParam0->f_61.f_18 = 0;
}

void func_9(var uParam0)
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

int func_10(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_5 == 1;
	}
	return 0;
}

var func_11()
{
	return Global_1312736;
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_4263466;
			break;
		
		case 1:
			return Global_4263465;
			break;
	}
	return 0;
}

int func_13()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

bool func_14()
{
	return Global_93284.f_328 > 0;
}

void func_15(bool bParam0)
{
	unk_0x783C50B0DAB1C767();
	if (bParam0)
	{
		unk_0x2F4B73C2B0106D15();
	}
}

int func_16(var uParam0)
{
	if (uParam0->f_61.f_4 == 2043854386)
	{
		return 0;
	}
	return 1;
}

void func_17(int iParam0)
{
	struct<7> Var0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<62> Var4;
	bool bVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar1 = 0;
	bVar2 = false;
	if (!func_13())
	{
		iVar1 = 1;
		Var0 = iParam0;
		Var0.f_2 = 0;
	}
	if (iVar1 || unk_0x8866A4E42CDA3EF1(1, iParam0, &Var0, 7))
	{
		Var4.f_61 = 2147483647;
		iVar3 = func_34(Var0, &Var4);
		if (iVar3 != -1)
		{
			Global_4262927[iVar3 /*80*/].f_61.f_8 = 0;
			if (Global_4262927[iVar3 /*80*/].f_61.f_18 == 0)
			{
				Global_4262927[iVar3 /*80*/].f_61.f_18 = unk_0x817B152F7462D506();
			}
		}
		bVar5 = true;
		if (iVar3 != -1)
		{
			Global_4262927[iVar3 /*80*/].f_61.f_17 = Var0.f_2;
		}
		else
		{
			Global_4263451.f_4 = Var0.f_2;
			Global_4263451.f_6 = Var0.f_3;
			Global_4263451.f_7 = Var0.f_4;
			Global_4263451.f_8 = Var0.f_5;
			Global_4263451.f_9 = Var0.f_6;
			if (Global_4263451.f_10 == 0)
			{
				Global_4263451.f_10 = unk_0x817B152F7462D506();
			}
		}
		switch (Var0.f_2)
		{
			case 0:
				if (iVar3 != -1)
				{
					Global_4266912[iVar3 /*12*/] = Global_4262927[iVar3 /*80*/].f_61.f_3;
					Global_4266912[iVar3 /*12*/].f_1 = Global_4262927[iVar3 /*80*/].f_61.f_7;
					Global_4266912[iVar3 /*12*/].f_2 = Global_4262927[iVar3 /*80*/].f_61.f_4;
					Global_4266912[iVar3 /*12*/].f_3 = Global_4262927[iVar3 /*80*/].f_61.f_1;
					Global_4266912[iVar3 /*12*/].f_5 = Var0.f_1;
					Global_4266912[iVar3 /*12*/].f_6 = Var0.f_3;
					Global_4266912[iVar3 /*12*/].f_7 = Var0.f_4;
					Global_4266912[iVar3 /*12*/].f_8 = Var0.f_5;
					Global_4266912[iVar3 /*12*/].f_9 = Var0.f_6;
					Global_4266912[iVar3 /*12*/].f_11 = 1;
					Global_4262927[iVar3 /*80*/].f_61.f_2 = 2;
					if (Global_4262927[iVar3 /*80*/].f_61.f_11 & 4 != 0)
					{
						func_32(iVar3, bVar5);
					}
					else if (func_13())
					{
						if (bVar5)
						{
							unk_0x4EE06054B6A386C8(Global_4262927[iVar3 /*80*/].f_61, &uVar6);
						}
					}
				}
				break;
			
			default:
				if (iVar3 != -1)
				{
					Global_4262927[iVar3 /*80*/].f_61.f_2 = 3;
					if ((Global_4262927[iVar3 /*80*/].f_61.f_11 & 1 != 0 && Global_4262927[iVar3 /*80*/].f_61.f_9 < 2) && func_31(Var0.f_2))
					{
						if (func_10(iVar3))
						{
							if (func_24())
							{
								Global_4262927[iVar3 /*80*/].f_61.f_2 = 1;
								Global_4262927[iVar3 /*80*/].f_61.f_9++;
							}
							else if (Global_4262927[iVar3 /*80*/].f_61.f_11 & 2 != 0)
							{
								Global_4263480 = Global_4262927[iVar3 /*80*/].f_61.f_4;
								Global_4263482 = Global_4262927[iVar3 /*80*/].f_61.f_6;
								Global_4263483 = Var0.f_2;
								Global_4263481 = Global_4262927[iVar3 /*80*/].f_61.f_1;
								if (func_23(Global_4263480) && func_13())
								{
									if (!func_22(Global_4262927[iVar3 /*80*/].f_61))
									{
										iVar7 = func_21();
										Global_4263408[iVar7 /*7*/] = Global_4262927[iVar3 /*80*/].f_61;
										Global_4263408[iVar7 /*7*/].f_2 = Global_4263480;
										Global_4263408[iVar7 /*7*/].f_3 = Global_4263482;
										Global_4263408[iVar7 /*7*/].f_1 = Global_4263481;
										Global_4263408[iVar7 /*7*/].f_4 = unk_0xFFCC7EBF88BDEE54();
									}
								}
								else
								{
									Global_4263477 = 1;
								}
							}
						}
						else if (func_20(&iVar3))
						{
							Global_4262927[iVar3 /*80*/].f_61.f_2 = 1;
							Global_4262927[iVar3 /*80*/].f_61.f_9++;
						}
						else if (Global_4262927[iVar3 /*80*/].f_61.f_11 & 2 != 0)
						{
							Global_4263480 = Global_4262927[iVar3 /*80*/].f_61.f_4;
							Global_4263482 = Global_4262927[iVar3 /*80*/].f_61.f_6;
							Global_4263483 = Var0.f_2;
							Global_4263481 = Global_4262927[iVar3 /*80*/].f_61.f_1;
							if (func_23(Global_4263480) && func_13())
							{
								if (!func_22(Global_4262927[iVar3 /*80*/].f_61))
								{
									iVar8 = func_21();
									Global_4263408[iVar8 /*7*/] = Global_4262927[iVar3 /*80*/].f_61;
									Global_4263408[iVar8 /*7*/].f_2 = Global_4263480;
									Global_4263408[iVar8 /*7*/].f_3 = Global_4263482;
									Global_4263408[iVar8 /*7*/].f_1 = Global_4263481;
									Global_4263408[iVar8 /*7*/].f_4 = unk_0xFFCC7EBF88BDEE54();
								}
							}
							else
							{
								Global_4263477 = 1;
							}
						}
					}
					else if (Global_4262927[iVar3 /*80*/].f_61.f_11 & 2 != 0)
					{
						Global_4263480 = Global_4262927[iVar3 /*80*/].f_61.f_4;
						Global_4263482 = Global_4262927[iVar3 /*80*/].f_61.f_6;
						Global_4263483 = Var0.f_2;
						Global_4263481 = Global_4262927[iVar3 /*80*/].f_61.f_1;
						if ((func_23(Global_4263480) && func_13()) && func_31(Var0.f_2))
						{
							if (!func_22(Global_4262927[iVar3 /*80*/].f_61))
							{
								iVar9 = func_21();
								Global_4263408[iVar9 /*7*/] = Global_4262927[iVar3 /*80*/].f_61;
								Global_4263408[iVar9 /*7*/].f_2 = Global_4263480;
								Global_4263408[iVar9 /*7*/].f_3 = Global_4263482;
								Global_4263408[iVar9 /*7*/].f_1 = Global_4263481;
								Global_4263408[iVar9 /*7*/].f_4 = unk_0xFFCC7EBF88BDEE54();
							}
						}
						else
						{
							Global_4263477 = 1;
						}
					}
					if (Global_4262927[iVar3 /*80*/].f_61.f_2 == 3)
					{
						if (bVar2)
						{
							func_19(1, Global_4262927[iVar3 /*80*/].f_61.f_4);
							Global_4263477 = 0;
						}
						if (Global_4262927[iVar3 /*80*/].f_61.f_11 & 4 != 0)
						{
							func_18(iVar3, Global_4262927[iVar3 /*80*/].f_61.f_4, Global_4262927[iVar3 /*80*/].f_61.f_10, Global_4262927[iVar3 /*80*/].f_61.f_1, Var0.f_2);
						}
					}
				}
				break;
			}
	}
}

void func_18(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x2BCFB39E86340DAA(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_7(iParam0);
	}
}

void func_19(int iParam0, var uParam1)
{
	Global_2460521 = uParam1;
	Global_2460520 = iParam0;
}

int func_20(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (*iParam0 == -1 || func_10(*iParam0))
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_11()) || unk_0x64BE694244417BDA())
		{
			Global_4263478 = 1;
			return 0;
		}
		if (Global_2459349)
		{
			if (Global_4262927[*iParam0 /*80*/].f_61.f_6 == 1067618600 || Global_4262927[*iParam0 /*80*/].f_61.f_6 == -1303831698)
			{
				Global_4263479 = 1;
				return 0;
			}
		}
	}
	if ((bVar0 || iVar1) || unk_0x93EA4BE98F3F425A(Global_4262927[*iParam0 /*80*/].f_61))
	{
		if (iVar1 && !bVar0)
		{
		}
		Global_4262927[*iParam0 /*80*/].f_61.f_13 = 1;
		Global_4262927[*iParam0 /*80*/].f_61.f_12 = 0;
		Global_4262927[*iParam0 /*80*/].f_61.f_14 = unk_0x817B152F7462D506();
		if (bVar0)
		{
			if (*iParam0 != -1)
			{
				Global_4262927[*iParam0 /*80*/].f_61.f_8 = 1;
				Global_4262927[*iParam0 /*80*/].f_61.f_12 = 1;
			}
		}
		Global_4262927[*iParam0 /*80*/].f_61.f_18 = 0;
		return 1;
	}
	return 0;
}

int func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = Global_4263408;
	iVar0 = 0;
	while (iVar0 <= (iVar2 - 1))
	{
		if (Global_4263408[iVar0 /*7*/] != 0 && Global_4263408[iVar0 /*7*/] != 2147483647)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= iVar2)
	{
		return 0;
	}
	return iVar1;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = Global_4263408;
	if (iParam0 == 2147483647 || iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (Global_4263408[iVar0 /*7*/] == iParam0)
		{
			return 1;
		}
		if (Global_4263408[iVar0 /*7*/].f_6 == iParam0)
		{
			Global_4263408[iVar0 /*7*/].f_4 = unk_0xFFCC7EBF88BDEE54();
			Global_4263408[iVar0 /*7*/].f_6 = 2147483647;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_23(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == 1780666425 || iParam0 == -2043695058) || iParam0 == -1586170317) || iParam0 == 393059668) || iParam0 == -1027218631) || iParam0 == 1048226110) || iParam0 == 569170531) || iParam0 == -856006867) || iParam0 == 848090538) || iParam0 == -293060240) || iParam0 == -47546905) || iParam0 == 463142405) || iParam0 == 1550217370) || iParam0 == -101307780) || iParam0 == 1052472386) || iParam0 == -2130199671) || iParam0 == -1227654538) || iParam0 == -876012764) || iParam0 == -722894325) || iParam0 == 1407278493) || iParam0 == -1579394494) || iParam0 == 1179783540) || iParam0 == 923419301) || iParam0 == -308826175) || iParam0 == 603298940) || iParam0 == -12619854) || iParam0 == -311112675) || iParam0 == 870439158) || iParam0 == -974288740) || iParam0 == -4138654) || iParam0 == -1180954122) || iParam0 == -1918051016) || iParam0 == 844330594) || iParam0 == 1934825517) || iParam0 == 1852024236) || iParam0 == 2099238988) || iParam0 == 1952643559) || iParam0 == -1172900789) || iParam0 == -2015399333) || iParam0 == -1574795641) || iParam0 == -961034881) || iParam0 == 1135468152) || iParam0 == 1265272476) || iParam0 == -634726636) || iParam0 == 696556762) || iParam0 == 443347049) || iParam0 == 403506509) || iParam0 == -883876414) || iParam0 == -1064150715) || iParam0 == -1387253055) || iParam0 == -716963152) || iParam0 == 1138089938) || iParam0 == -561012053) || iParam0 == 1240683675) || iParam0 == 1241904665)
	{
		return 1;
	}
	return 0;
}

int func_24()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_30();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_11()) || unk_0x64BE694244417BDA())
		{
			if (func_29(Global_4262927[iVar2 /*80*/].f_61.f_6, Global_4262927[iVar2 /*80*/].f_61.f_4, Global_4262927[iVar2 /*80*/].f_61.f_1) == 1)
			{
				Global_4263478 = 1;
			}
			return 0;
		}
		if (Global_2459349)
		{
			if (Global_4262927[iVar2 /*80*/].f_61.f_6 == 1067618600 || Global_4262927[iVar2 /*80*/].f_61.f_6 == -1303831698)
			{
				Global_4263479 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_28(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0x93EA4BE98F3F425A(iVar3))
		{
			Global_4262927[iVar2 /*80*/].f_61.f_13 = 1;
			Global_4262927[iVar2 /*80*/].f_61.f_12 = 0;
			Global_4262927[iVar2 /*80*/].f_61.f_14 = unk_0x817B152F7462D506();
			if (bVar0)
			{
				Global_4262927[iVar2 /*80*/].f_61.f_8 = 1;
				Global_4262927[iVar2 /*80*/].f_61.f_12 = 1;
			}
			Global_4262927[iVar2 /*80*/].f_61.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_25(Global_4262927[iVar2 /*80*/], iVar2);
			}
			Global_4263464 = 1;
			return 1;
		}
	}
	return 0;
}

void func_25(struct<62> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	vector3 vVar0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = -313275313;
	vVar0.y = unk_0xD4E735F4B6A956AC();
	vVar0.f_2 = { Param0.f_61 };
	vVar0.f_2.f_32 = iParam19;
	iVar1 = func_27(vVar0.y);
	if ((Global_262145.f_23427 && !Global_262145.f_23428) && !Global_262145.f_23429)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_26();
		unk_0x04F37AFC39D93909(1, &vVar0, 35, iVar1);
	}
}

void func_26()
{
	unk_0xD75A4240F0AD8613("AM_ARENA_SHP");
}

var func_27(int iParam0)
{
	var uVar0;
	
	unk_0x2BCFB39E86340DAA(&uVar0, iParam0);
	return uVar0;
}

int func_28(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61;
	}
	return -1;
}

int func_29(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_30()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_28(iVar0) != 2147483647)
		{
			if (func_10(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_31(int iParam0)
{
	if ((iParam0 >= 500 && iParam0 <= 599) || iParam0 == 408)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	
	if (iParam0 == -1)
	{
		return;
	}
	unk_0x7D3EC9370CE8AE07(func_28(iParam0));
	if (Global_4262927[iParam0 /*80*/].f_61.f_10 == 1)
	{
	}
	else if (Global_4262927[iParam0 /*80*/].f_61.f_10 == 4)
	{
		iVar0 = 1;
	}
	else if (Global_4262927[iParam0 /*80*/].f_61.f_10 == 2)
	{
		bVar1 = true;
	}
	switch (Global_4262927[iParam0 /*80*/].f_61.f_4)
	{
		case 631654431:
			unk_0x1E13AC8ED9355655(Global_4262927[iParam0 /*80*/].f_61.f_1, bVar1, iVar0);
			break;
		
		case -180141073:
			unk_0x5EF363E1C6C5D06A(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13), bVar1, iVar0);
			break;
		
		case 68030260:
			unk_0x44C28DCA92281F79(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], &(Global_4262927[iParam0 /*80*/].f_13), bVar1, iVar0);
			break;
		
		case -982394051:
			unk_0x09148A4CB657154E(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/].f_1, bVar1, iVar0);
			break;
		
		case 454359403:
			unk_0xA91385B41385F654(Global_4262927[iParam0 /*80*/].f_61.f_1, bVar1, Global_4262927[iParam0 /*80*/].f_2, iVar0);
			break;
		
		case -1586170317:
			unk_0x2A8206AF0DE7C0F1(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), &(Global_4262927[iParam0 /*80*/].f_13.f_34));
			break;
		
		case 650665123:
			unk_0xF471B1CB5B34E2A8(Global_4262927[iParam0 /*80*/].f_61.f_1, bVar1, iVar0);
			break;
		
		case 1654961868:
			unk_0xCBD3556DE08C375C(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13), bVar1, iVar0);
			break;
		
		case 1182673174:
			unk_0x6FDFAFE114E8B835(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], Global_4262927[iParam0 /*80*/].f_1, bVar1, iVar0);
			break;
		
		case 563463121:
			unk_0xCCF5EC34129C0D36(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 1940862352:
			unk_0x6991ADC202243362(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), bVar1, iVar0);
			break;
		
		case -1389227906:
			unk_0x6991ADC202243362(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), bVar1, iVar0);
			break;
		
		case -516219046:
			unk_0x4515BD4877C2A9D7(Global_4262927[iParam0 /*80*/].f_61.f_1, bVar1, iVar0);
			break;
		
		case -1398318418:
			unk_0xA0290CD82C7F60C9(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_34));
			break;
		
		case 2043854386:
			unk_0xA15A6BEDE2195DE4(Global_4262927[iParam0 /*80*/].f_61.f_1, bVar1, iVar0);
			break;
		
		case 277665518:
			unk_0xAE7FC0DB48AA499D(Global_4262927[iParam0 /*80*/].f_61.f_1, bVar1, iVar0);
			break;
		
		case -1077156170:
			unk_0xDE298B72B3A5AF9B(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_34), -1);
			break;
		
		case -96593501:
			unk_0x688185007E1D19E8(Global_4262927[iParam0 /*80*/].f_61.f_1, bVar1, iVar0);
			break;
		
		case 742499889:
			unk_0x4E168B603C0CC927(Global_4262927[iParam0 /*80*/].f_6, Global_4262927[iParam0 /*80*/].f_7, Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 2050093329:
			unk_0x612AFD2651370757(Global_4262927[iParam0 /*80*/].f_6, Global_4262927[iParam0 /*80*/].f_7, Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case -1752488069:
			unk_0x490D2733386B2486(Global_4262927[iParam0 /*80*/].f_6, Global_4262927[iParam0 /*80*/].f_7, Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 634375935:
			unk_0x89EFE3AA3C9861A6(Global_4262927[iParam0 /*80*/].f_61.f_1, bVar1, iVar0);
			break;
		
		case -1027218631:
			unk_0x537C6ABEC79F4384(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26));
			break;
		
		case -47546905:
			unk_0x9D632575BD5EEDA2(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26));
			break;
		
		case 291576838:
			unk_0xFDE7CBD1FBD54BB3(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], 14, 1, bVar1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 0, 0, 0, iVar0);
			break;
		
		case 1612072658:
			unk_0xFB97F46B07E76AEE(Global_4262927[iParam0 /*80*/].f_61.f_1, bVar1, iVar0);
			break;
		
		case -990286235:
			unk_0x08FE48FE6B4A5EBD(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13), &(Global_4262927[iParam0 /*80*/].f_13.f_13), 1);
			break;
		
		case 1349151477:
			unk_0xAD26CE9AD99DA831(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case -31156877:
		case -327918414:
		case 550898518:
		case 835976347:
			unk_0x93A4CCD2CA76BAF1(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case -1186079845:
			unk_0x2693DBB5AABB7A95(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 1734805203:
			unk_0x15BF7AD14F08DDD2(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case -1645229221:
			unk_0x38CE5B4579DF33A7(Global_4262927[iParam0 /*80*/].f_61.f_1, bVar1, iVar0);
			break;
		
		case -585718395:
			unk_0x7597EB583A76FFC0(Global_4262927[iParam0 /*80*/].f_61.f_1, bVar1, iVar0);
			break;
		
		case 763367758:
			unk_0x718D1312538B1F53(Global_4262927[iParam0 /*80*/].f_61.f_1, bVar1, iVar0);
			break;
		
		case 1850983186:
			unk_0x38CE5B4579DF33A7(Global_4262927[iParam0 /*80*/].f_61.f_1, bVar1, iVar0);
			break;
		
		case -2129781826:
			unk_0x3463EDEFBC93B179(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], bVar1, iVar0);
			break;
		
		case 1941570214:
			unk_0xA514678EB6BCA424(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], bVar1, iVar0);
			break;
		
		case 1869490922:
			unk_0x3E637FD98D7DB905(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], Global_4262927[iParam0 /*80*/].f_1, bVar1, iVar0);
			break;
		
		case -336803850:
			unk_0x3E637FD98D7DB905(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], Global_4262927[iParam0 /*80*/].f_1, bVar1, iVar0);
			break;
		
		case -1412692765:
			unk_0x3E637FD98D7DB905(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], Global_4262927[iParam0 /*80*/].f_1, bVar1, iVar0);
			break;
		
		case 618167454:
			unk_0x3E637FD98D7DB905(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], Global_4262927[iParam0 /*80*/].f_1, bVar1, iVar0);
			break;
		
		case 980623936:
			unk_0x3E637FD98D7DB905(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], Global_4262927[iParam0 /*80*/].f_1, bVar1, iVar0);
			break;
		
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case -664597565:
		case -1100963799:
			unk_0x4F7E5FD76186605D(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_40), &(Global_4262927[iParam0 /*80*/].f_13.f_44), bVar1);
			break;
		
		case 312105838:
			unk_0x9FE7725888618DEB(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case -1922554349:
			unk_0x976DC5C4130C36A6(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_DESTROY_VEH", &uVar2);
			break;
		
		case -2043695058:
			unk_0x976DC5C4130C36A6(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_DISTRACT_COPS", &uVar2);
			break;
		
		case 1780666425:
			unk_0x976DC5C4130C36A6(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_PLANE_TAKEDOWN", &uVar2);
			break;
		
		case 1643659499:
			unk_0x332B648EE2DC8903(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/].f_1, bVar1, iVar0);
			break;
		
		case 1839532116:
			unk_0x51B1A2935C05DED4(Global_4262927[iParam0 /*80*/].f_61.f_1, 0, 0);
			break;
		
		case 941287179:
			unk_0x393A547FB2B97B69(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/].f_3);
			break;
		
		case -352356931:
			unk_0xF69B8796C81D7AFF(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/]);
			break;
		
		case 1948102096:
			unk_0x037DA50438B6354F(Global_4262927[iParam0 /*80*/].f_61.f_1, bVar1, iVar0);
			break;
		
		case -1834046564:
			unk_0xFC663E06162EC2D8(Global_4262927[iParam0 /*80*/].f_61.f_1, bVar1, iVar0);
			break;
		
		case 393059668:
			unk_0x7E343367C7C2D382(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26));
			break;
		
		case -57868256:
			unk_0xDA809CC68A0ECAC3(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_34), Global_4262927[iParam0 /*80*/].f_4);
			break;
		
		case -1127021384:
			unk_0x9B7366877E3F7056(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 1564537328:
			unk_0x6991ADC202243362(Global_4262927[iParam0 /*80*/].f_61.f_1, "RaceToPoint", false, 0);
			break;
		
		case -1359375127:
			unk_0xF97BA5A7224EDFE5(Global_4262927[iParam0 /*80*/].f_61.f_1, 0, 0);
			break;
		
		case 283351220:
			unk_0xFDE7CBD1FBD54BB3(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], Global_4262927[iParam0 /*80*/].f_5, 1, bVar1, &(Global_4262927[iParam0 /*80*/].f_13.f_40), 0, 0, 0, iVar0);
			break;
		
		case -2085313189:
			switch (Global_4262927[iParam0 /*80*/].f_61.f_6)
			{
				case 1067618600:
					unk_0xFDE7CBD1FBD54BB3(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], Global_4262927[iParam0 /*80*/].f_5, 1, bVar1, &(Global_4262927[iParam0 /*80*/].f_13.f_40), 0, 0, 0, iVar0);
					break;
			}
			break;
		
		case 1704445500:
			unk_0x5734A849A2301569(Global_4262927[iParam0 /*80*/].f_61.f_1, 0, &(Global_4262927[iParam0 /*80*/].f_13.f_34), 0, 0);
			break;
		
		case 1620609399:
			unk_0x976DC5C4130C36A6(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_HOT_TARGET_DELIVER", &uVar2);
			break;
		
		case 1961641934:
			unk_0x976DC5C4130C36A6(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_HOT_TARGET_KILL", &uVar2);
			break;
		
		case 210955503:
			unk_0x976DC5C4130C36A6(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_KILL_LIST", &uVar2);
			break;
		
		case -59668082:
			unk_0x976DC5C4130C36A6(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_CP_COLLECTION", &uVar2);
			break;
		
		case 1736933716:
			unk_0x976DC5C4130C36A6(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_TIME_TRIAL", &uVar2);
			break;
		
		case -1468524125:
			unk_0x976DC5C4130C36A6(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_CHALLENGES", &uVar2);
			break;
		
		case 111573502:
			unk_0x976DC5C4130C36A6(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_HOT_TARGET_HELI", &uVar2);
			break;
		
		case 1525644423:
			unk_0x976DC5C4130C36A6(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_DEAD_DROP", &uVar2);
			break;
		
		case 968073639:
			unk_0x976DC5C4130C36A6(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_PENNED_IN", &uVar2);
			break;
		
		case 1577781788:
			unk_0x976DC5C4130C36A6(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_PASS_THE_PARCEL", &uVar2);
			break;
		
		case -934465332:
			unk_0x976DC5C4130C36A6(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_CRIMINAL_DAMAGE", &uVar2);
			break;
		
		case -1194253122:
			unk_0x976DC5C4130C36A6(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_HOT_PROPERTY", &uVar2);
			break;
		
		case -212607085:
			unk_0x976DC5C4130C36A6(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_KING_OF_THE_HILL", &uVar2);
			break;
		
		case -815546555:
			unk_0x976DC5C4130C36A6(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_HUNT_THE_BEAST", &uVar2);
			break;
		
		case 1048226110:
			unk_0x451553B81C44DC00(Global_4262927[iParam0 /*80*/].f_6, Global_4262927[iParam0 /*80*/].f_7, Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 569170531:
			unk_0xF1279FE0CCD29219(Global_4262927[iParam0 /*80*/].f_6, Global_4262927[iParam0 /*80*/].f_7, Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case -856006867:
			unk_0x77E6DB4DFEEE4518(Global_4262927[iParam0 /*80*/].f_6, Global_4262927[iParam0 /*80*/].f_7, Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/].f_8);
			break;
		
		case 208223429:
			unk_0x0EA92EE1DC50588F(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/].f_9);
			break;
		
		case 848090538:
			unk_0x0947BD94337E72E2(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 665109499:
			unk_0x174793D169FE4FB8(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], 0, 1);
			break;
		
		case -1330755006:
			unk_0xC08FB76C7278FA27(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], 0, 1);
			break;
		
		case 1976384368:
			unk_0x0114D5AB438ECD6B(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], 0, 0);
			break;
		
		case 268924934:
			unk_0xE3FC4A821DAD2F9B(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], Global_4262927[iParam0 /*80*/].f_1, Global_4262927[iParam0 /*80*/].f_9);
			break;
		
		case -293060240:
			unk_0xC4C245143675C7BB(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/].f_6, Global_4262927[iParam0 /*80*/].f_7);
			break;
		
		case 437291904:
			unk_0x47270BBAF86A5A84(Global_4262927[iParam0 /*80*/].f_61.f_1, 0, 1, Global_4262927[iParam0 /*80*/].f_6, Global_4262927[iParam0 /*80*/].f_7, Global_4262927[iParam0 /*80*/].f_1, Global_4262927[iParam0 /*80*/], Global_4262927[iParam0 /*80*/].f_10, Global_4262927[iParam0 /*80*/].f_11, Global_4262927[iParam0 /*80*/].f_12);
			break;
		
		case -135813048:
			unk_0x8FE6B59724C7B3F4(Global_4262927[iParam0 /*80*/].f_61.f_1, 0, 1);
			break;
		
		case 463142405:
			unk_0x9238E1CFDB3AF306(Global_4262927[iParam0 /*80*/].f_6, Global_4262927[iParam0 /*80*/].f_7, Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/].f_8);
			break;
		
		case 1550217370:
			unk_0x4BD4F2DEEB8FF0C2(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case -101307780:
			unk_0xE4E48974393149DE(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 599804707:
			unk_0x976DC5C4130C36A6(Global_4262927[iParam0 /*80*/].f_61.f_1, "GB_SALVAGE", &uVar2);
			break;
		
		case 1347433368:
			unk_0xAF095F4E39B2B668(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 1052472386:
			unk_0x52271B1DD5BDB9E8(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), &(Global_4262927[iParam0 /*80*/].f_13.f_34));
			break;
		
		case -2130199671:
			unk_0x2875C92583C1D928(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), &(Global_4262927[iParam0 /*80*/].f_13.f_34));
			break;
		
		case -1227654538:
			unk_0x0FC86BC654C86003(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), &(Global_4262927[iParam0 /*80*/].f_13.f_34));
			break;
		
		case -930104477:
			unk_0xF3112D94190087D4(Global_4262927[iParam0 /*80*/].f_61.f_1, 0, 1, Global_4262927[iParam0 /*80*/]);
			break;
		
		case 1864522104:
			unk_0x815D85647DCE1188(Global_4262927[iParam0 /*80*/].f_61.f_1, 0);
			break;
		
		case 215608230:
			unk_0x815D85647DCE1188(Global_4262927[iParam0 /*80*/].f_61.f_1, 1);
			break;
		
		case -876012764:
			unk_0xEBA5AE49AD234C90(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/]);
			break;
		
		case -722894325:
			unk_0x6B6CF71F291832DB(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/]);
			break;
		
		case 1407278493:
			unk_0xA131A1DA1516A78D(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case -1579394494:
		case -27443911:
			unk_0x32BDBBC03396FF1E(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26));
			break;
		
		case 1179783540:
			unk_0x0032E5028A1E9484(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26));
			break;
		
		case 923419301:
			unk_0x36E0DFB0D0A1BB1C(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 0);
			break;
		
		case -308826175:
			unk_0x36E0DFB0D0A1BB1C(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 1);
			break;
		
		case 603298940:
			unk_0x36E0DFB0D0A1BB1C(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 2);
			break;
		
		case -12619854:
			unk_0x36E0DFB0D0A1BB1C(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 3);
			break;
		
		case -311112675:
			unk_0x36E0DFB0D0A1BB1C(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 4);
			break;
		
		case 870439158:
			unk_0x36E0DFB0D0A1BB1C(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 5);
			break;
		
		case -974288740:
			unk_0x36E0DFB0D0A1BB1C(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 6);
			break;
		
		case -4138654:
			unk_0x36E0DFB0D0A1BB1C(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 7);
			break;
		
		case -1180954122:
			unk_0x36E0DFB0D0A1BB1C(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 8);
			break;
		
		case -1918051016:
			unk_0x36E0DFB0D0A1BB1C(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 9);
			break;
		
		case 844330594:
			unk_0x36E0DFB0D0A1BB1C(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 10);
			break;
		
		case 1934825517:
			unk_0x87C7913AAAC4ED44(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 0);
			break;
		
		case 1852024236:
			unk_0x87C7913AAAC4ED44(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 1);
			break;
		
		case 2099238988:
			unk_0x87C7913AAAC4ED44(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 2);
			break;
		
		case 1952643559:
			break;
		
		case 2039302543:
			break;
		
		case -1172900789:
			unk_0xF3DD3EAB37F0A14B(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/].f_9);
			break;
		
		case -1733398043:
			unk_0xB72D217A5AD14F31(Global_4262927[iParam0 /*80*/].f_9, Global_4262927[iParam0 /*80*/].f_61.f_1, 0, 1);
			break;
		
		case -1892760262:
			unk_0x8C7F43FC83568AB1(Global_4262927[iParam0 /*80*/].f_9, Global_4262927[iParam0 /*80*/].f_61.f_1, 0, 1);
			break;
		
		case -2015399333:
			unk_0x9484047AAC079157(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 402505853:
			if (func_33(unk_0x1483A8AE554B8B2B(Global_4262927[iParam0 /*80*/]), 0, 0))
			{
				unk_0xFC71E8A3A3428520(unk_0x1483A8AE554B8B2B(Global_4262927[iParam0 /*80*/]), Global_4262927[iParam0 /*80*/].f_1, Global_4262927[iParam0 /*80*/].f_61.f_1, 0, 1);
			}
			break;
		
		case 1678112166:
			unk_0xF56B64662927DE25(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], 0, 1);
			break;
		
		case -1143510182:
			unk_0x9C9B8748B3D0520C(Global_4262927[iParam0 /*80*/], Global_4262927[iParam0 /*80*/].f_61.f_1, 0, 1);
			break;
		
		case -1574795641:
			unk_0x4B8F4A73B92C2BDC(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case -961034881:
			unk_0x70275A5DEC872CA2(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 1135468152:
			unk_0xF03B782EEA848691(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 1265272476:
			unk_0x7C5AFBDB4A63099E(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/].f_1, Global_4262927[iParam0 /*80*/].f_9);
			break;
		
		case -634726636:
			unk_0xB509D8DC0549312F(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 696556762:
			unk_0x7FCF7023D5DDA443(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 837955913:
			unk_0x14EAEA58F93B55AF(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/].f_61.f_15, 0, 1);
			break;
		
		case 403506509:
			unk_0xFDD8D2440DAF1590(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case -883876414:
			unk_0xE08256F972C7BB2C(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/].f_61.f_15);
			break;
		
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
			unk_0x0F99F70C61F14619(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/].f_61.f_15);
			break;
		
		case -1532467144:
			unk_0x7049BF858601DC0F(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], 0, 1);
			break;
		
		case 1815541181:
			unk_0xE5F5A060439C2F5D(Global_4262927[iParam0 /*80*/].f_61.f_1, 0, 0);
			break;
		
		case -561012053:
			unk_0x676C48776CACBB5A(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case -1342064661:
			unk_0x9A5BD1D0000B339C(Global_4262927[iParam0 /*80*/].f_61.f_1, 0, 1);
			break;
		
		case 1240683675:
			unk_0x5E7AE8AABE8B7C0D(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 1241904665:
			unk_0x631F1CB8FB4130AA(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], Global_4262927[iParam0 /*80*/].f_61.f_16, Global_4262927[iParam0 /*80*/].f_1);
			break;
		
		case -597978445:
			unk_0x619496D837EFD920(Global_4262927[iParam0 /*80*/].f_61.f_1, 0, 1);
			break;
		
		case 1982688246:
			break;
	}
	if (func_13())
	{
		if (bParam1)
		{
			unk_0x4EE06054B6A386C8(Global_4262927[iParam0 /*80*/].f_61, &uVar3);
		}
	}
	func_7(iParam0);
}

int func_33(int iParam0, bool bParam1, bool bParam2)
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

int func_34(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4262927[iVar0 /*80*/].f_61 == iParam0)
		{
			*uParam1 = { Global_4262927[iVar0 /*80*/] };
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_35(int iParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Global_4266912[iParam0 /*12*/].f_1 == Global_4266912[iParam0 /*12*/].f_6)
	{
		if (Global_4266912[iParam0 /*12*/].f_1 != 1445302971 && Global_4266912[iParam0 /*12*/].f_1 != -1316591359)
		{
			return;
		}
	}
	iVar0 = 0;
	sVar2 = "Wardrobe";
	iVar0 = unk_0xFEB6EEC0545AF7AA(sVar2);
	iVar0 = (iVar0 || func_37());
	iVar0 = (iVar0 + Global_4264880);
	func_36(&uVar1);
	iVar0 = (iVar0 || uVar1);
	unk_0xFA57C719261AA55D(&iVar0, 28);
	unk_0xFA57C719261AA55D(&iVar0, 29);
	unk_0xFA57C719261AA55D(&iVar0, 26);
	iVar3 = (Global_4266912[iParam0 /*12*/].f_9 && iVar0);
	iVar4 = (Global_4266912[iParam0 /*12*/].f_8 && iVar0);
	iVar5 = Global_4266912[iParam0 /*12*/].f_7;
	if (iVar5 == 0)
	{
		iVar5 = -2085313189;
	}
	if (((Global_4266912[iParam0 /*12*/] != Global_4266912[iParam0 /*12*/].f_5 || Global_4266912[iParam0 /*12*/].f_1 != Global_4266912[iParam0 /*12*/].f_6) || Global_4266912[iParam0 /*12*/].f_2 != iVar5) || Global_4266912[iParam0 /*12*/].f_3 != (iVar4 + iVar3))
	{
		Global_102772 = 1;
	}
}

int func_36(var uParam0)
{
	*uParam0 = shift_left(1, 2);
	return 5410420;
}

var func_37()
{
	return shift_left(1, 25);
}

int func_38()
{
	var uVar0;
	
	func_45(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			return 1;
		}
	}
	if (func_44())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_43())
	{
		return 1;
	}
	if (func_42(157))
	{
		if (!func_41())
		{
			return 1;
		}
	}
	if (func_42(155))
	{
		return 1;
	}
	if (!unk_0x18F86E07E41D913F())
	{
		return 1;
	}
	if (func_39() != 0)
	{
		if (unk_0x8B1574454E8C2421(func_39()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_39()
{
	switch (func_40())
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

int func_40()
{
	return Global_25459;
}

bool func_41()
{
	return Global_2448386.f_587;
}

int func_42(int iParam0)
{
	if (unk_0xF10AFD11E6EE81BF(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_43()
{
	return Global_2458191;
}

bool func_44()
{
	return Global_2448386.f_582;
}

void func_45(var uParam0)
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
					func_46(iVar0);
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

void func_46(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x8866A4E42CDA3EF1(1, iParam0, &vVar0, 3))
	{
		if (func_33(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xEE978C39384D834F(vVar0.y);
			if (unk_0xDC5D81351D6A4DDB(iVar1))
			{
				if (unk_0x5D7DFE2058701942(iVar1, 0))
				{
					iVar2 = unk_0xCAEB6CE71A2C7212(iVar1, 0);
					if (unk_0xEB1A41F6F719807C(iVar2, vVar0.z) && unk_0xB592B7A61F21E7A5())
					{
						if (func_47(iVar2, &bVar3))
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

int func_47(int iParam0, var uParam1)
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

void func_48()
{
	wait(0);
}

void func_49()
{
	func_50();
}

void func_50()
{
	unk_0x8F1A9FE6D91AAFEB();
}

void func_51(struct<33> Param0)
{
	if (Global_262145.f_23427)
	{
		func_49();
	}
	Local_22.f_61 = { Param0 };
	Local_22 = { Param0.f_19 };
	Local_22.f_13 = { Global_4262927[Param0.f_32 /*80*/].f_13 };
	iLocal_21 = Param0.f_32;
	if (Param0.f_32 < 0)
	{
		func_49();
	}
	if (!func_52(Param0, Param0.f_32))
	{
		func_7(Param0.f_32);
		func_49();
	}
}

int func_52(struct<18> Param0, var uParam1, int iParam2)
{
	if (Global_4262927[iParam2 /*80*/].f_61.f_1 != Param0.f_1)
	{
		return 0;
	}
	if (Global_4262927[iParam2 /*80*/].f_61.f_3 != Param0.f_3)
	{
		return 0;
	}
	if (Global_4262927[iParam2 /*80*/].f_61.f_4 != Param0.f_4)
	{
		return 0;
	}
	if (Global_4262927[iParam2 /*80*/].f_61.f_5 != Param0.f_5)
	{
		return 0;
	}
	if (Global_4262927[iParam2 /*80*/].f_61.f_6 != Param0.f_6)
	{
		return 0;
	}
	if (Global_4262927[iParam2 /*80*/].f_61.f_7 != Param0.f_7)
	{
		return 0;
	}
	if (Global_4262927[iParam2 /*80*/].f_61.f_14 != Param0.f_14)
	{
		return 0;
	}
	if (Global_4262927[iParam2 /*80*/].f_61.f_17 != Param0.f_17)
	{
		return 0;
	}
	return 1;
}

