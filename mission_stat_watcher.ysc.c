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
	struct<563> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	float fLocal_68 = 0f;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	bool bLocal_71 = 0;
	int iLocal_72 = 0;
	bool bLocal_73 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	
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
	iLocal_62 = iLocal_61;
	iLocal_63 = iLocal_62;
	fLocal_68 = 100f;
	if (unk_0x8B1574454E8C2421(joaat("mission_stat_watcher")) > 1)
	{
		unk_0x8F1A9FE6D91AAFEB();
	}
	Global_56175 = 0;
	Global_56182 = 0;
	iVar0 = 1;
	if (unk_0x5EBD03AF78E7B4DB(18))
	{
		func_110();
		Global_68276 = 0;
		Global_56176 = 0;
		Global_56202 = 0;
		unk_0x8F1A9FE6D91AAFEB();
	}
	iVar1 = 0;
	wait(0);
	func_108();
	while (!Global_56174)
	{
		wait(200);
		if (Global_56182)
		{
			func_110();
			unk_0x8F1A9FE6D91AAFEB();
		}
	}
	Global_56189 = 0;
	Global_56176 = 1;
	while (!Global_56175)
	{
		if (Global_68276 > 0)
		{
			func_102();
			if (Global_56209 == -1)
			{
				Global_56209 = unk_0xFD34717937104F1C();
			}
			else if ((unk_0xFD34717937104F1C() - Global_56209) > 1000)
			{
				func_101();
			}
		}
		if (Global_56182)
		{
			func_110();
			Global_56176 = 0;
			unk_0x8F1A9FE6D91AAFEB();
		}
		wait(0);
	}
	Global_56176 = 0;
	if (func_100())
	{
		while (func_100())
		{
			wait(0);
		}
	}
	bVar2 = false;
	while (!bVar2)
	{
		if (!Global_56177 == iLocal_70)
		{
			if (Global_56177)
			{
				settimerb(0);
				iLocal_60 = 0;
				Global_56192 = 0;
			}
			iLocal_70 = Global_56177;
		}
		while (Global_56181)
		{
			wait(1000);
		}
		if (Global_56175 && !Global_56182)
		{
			if (Global_56174 || iLocal_72)
			{
				Global_56179 = 0;
				if (bLocal_71)
				{
				}
				if (Global_56175)
				{
				}
				if (!bLocal_71 == Global_56175)
				{
					func_99(&Local_45);
					Local_45.f_562 = 1;
					func_98();
					func_97();
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < Global_68276)
					{
						if (Global_68277[iVar3 /*9*/] > 0)
						{
							if (Global_56406[Global_68277[iVar3 /*9*/] /*13*/] == 4)
							{
								if (!Global_56406[Global_68277[iVar3 /*9*/] /*13*/].f_7)
								{
									if (Global_56406[Global_68277[iVar3 /*9*/] /*13*/].f_3)
									{
										if (Global_68277[iVar3 /*9*/].f_1 == 0)
										{
											Global_68277[iVar3 /*9*/].f_3 = 5;
										}
									}
								}
							}
						}
						iVar3++;
					}
					bVar4 = false;
					if ((Global_71465 && !Global_56171) || Global_56183)
					{
						bVar4 = true;
					}
					bVar5 = false;
					if (unk_0x3A83743561B4F70C() || unk_0x3BE8B7AEED1A3971())
					{
						bVar5 = true;
					}
					else
					{
						if (Global_93271.f_8)
						{
							bVar5 = true;
						}
						if (Global_56201)
						{
							bVar5 = true;
						}
					}
					if (func_96(0))
					{
						bVar5 = true;
						Global_56201 = 1;
					}
					iVar6 = Global_68427;
					if (Global_56184)
					{
						func_93(Global_56185);
						iVar0 = 2;
						func_92(&Local_45, "HISHPA", &Global_56196, 0);
						if (iVar6 == 69 || iVar6 == 70)
						{
							func_91(&Local_45, 3, "ACTATAKE_AG", "", Global_106070.f_1.f_126[Global_56185 /*23*/], 0, 0, 0);
						}
						else
						{
							func_91(&Local_45, 3, "POTATAKE", "", Global_106070.f_1.f_126[Global_56185 /*23*/], 0, 0, 0);
						}
						iVar7 = 0;
						iVar7 = 0;
						while (iVar7 < Global_89557[Global_56185 /*38*/].f_37)
						{
							if (Global_89557[Global_56185 /*38*/].f_31[iVar7] > 0)
							{
								func_91(&Local_45, 3, func_90(Global_89557[Global_56185 /*38*/].f_25[iVar7]), "", (-1 * Global_89557[Global_56185 /*38*/].f_31[iVar7]), 0, 0, 0);
							}
							iVar7++;
						}
						if ((((Global_106070.f_1.f_126[Global_56185 /*23*/].f_2[0] > 0 || iVar6 == 74) || iVar6 == 75) || iVar6 == 69) || iVar6 == 70)
						{
							func_91(&Local_45, 3, "ACTATAKE_M", "", Global_106070.f_1.f_126[Global_56185 /*23*/].f_2[0], 0, 0, 0);
						}
						if ((Global_106070.f_1.f_126[Global_56185 /*23*/].f_2[1] > 0 || iVar6 == 74) || iVar6 == 75)
						{
							func_91(&Local_45, 3, "ACTATAKE_F", "", Global_106070.f_1.f_126[Global_56185 /*23*/].f_2[1], 0, 0, 0);
						}
						if ((Global_106070.f_1.f_126[Global_56185 /*23*/].f_2[2] > 0 || iVar6 == 74) || iVar6 == 75)
						{
							func_91(&Local_45, 3, "ACTATAKE_T", "", Global_106070.f_1.f_126[Global_56185 /*23*/].f_2[2], 0, 0, 0);
						}
						if (Global_89547.f_7 > 0)
						{
							func_91(&Local_45, 3, "ACTATAKE_L", "", Global_89547.f_7, 0, 0, 0);
						}
						iVar8 = func_88(func_89(Global_56185));
						iVar9 = 0;
						iVar10 = 0;
						iVar7 = 0;
						while (iVar7 < Global_89356[iVar8 /*19*/])
						{
							if (!func_87(Global_106070.f_1.f_12[iVar8 /*6*/][iVar7]))
							{
								iVar9 = (iVar9 + Global_106070.f_1.f_126[Global_56185 /*23*/].f_17[iVar7]);
							}
							else
							{
								iVar10 = (iVar10 + Global_106070.f_1.f_126[Global_56185 /*23*/].f_17[iVar7]);
							}
							iVar7++;
						}
						if (iVar6 == 74 || iVar6 == 75)
						{
							func_91(&Local_45, 3, "LACKTAKE", "", iVar9, 0, 0, 0);
						}
						else
						{
							func_91(&Local_45, 3, "CREWTAKE", "", iVar9, 0, 0, 0);
						}
						if (iVar10 > 0)
						{
							if (!func_96(0))
							{
								switch (iVar6)
								{
									case 90:
										unk_0x93180BE33E7149EF(joaat("hcs_penalty_jewel_funeral"), iVar10, 1);
										break;
									
									case 93:
										unk_0x93180BE33E7149EF(joaat("hcs_penalty_paleto_funeral"), iVar10, 1);
										break;
									
									case 69:
									case 70:
										unk_0x93180BE33E7149EF(joaat("hcs_penalty_bureau_funeral"), iVar10, 1);
										break;
									
									case 84:
									case 85:
										unk_0x93180BE33E7149EF(joaat("hcs_penalty_bigs_funeral"), iVar10, 1);
										break;
									}
							}
							func_91(&Local_45, 3, "HSTENDPFUN", "", iVar10, 0, 0, 0);
						}
					}
					else
					{
						func_92(&Local_45, "MISHPA", &Global_56196, 0);
					}
					if (Global_68276 > 0)
					{
						func_72(&Local_45);
					}
					if (!Global_56171)
					{
						func_66();
					}
					while (!bVar5)
					{
						if (unk_0x3A83743561B4F70C() || unk_0x3BE8B7AEED1A3971())
						{
							bVar5 = true;
						}
						wait(0);
					}
					if ((bVar5 || Global_56201) && !bVar4)
					{
						if (!Global_56183)
						{
							func_62(&Local_45, 0, 0);
						}
						bVar11 = false;
						if (!Global_68426)
						{
							switch (Global_68427)
							{
								case 50:
								case 51:
								case 52:
									unk_0x0B756FF7161B9AB0("HoldMissionCompleteWhenPrepared", 1);
									func_58(1);
									bVar11 = true;
									break;
								
								default:
									unk_0x0B756FF7161B9AB0("HoldMissionCompleteWhenPrepared", 1);
									func_58(0);
									bVar11 = true;
									break;
							}
						}
						else
						{
							unk_0x0B756FF7161B9AB0("HoldMissionCompleteWhenPrepared", 1);
							func_58(1);
							bVar11 = true;
						}
						iVar1 = func_57();
						unk_0x6A633E13B2A856AE("MISHSTA", 3);
						while (!unk_0xD744813D9841CA9A(3))
						{
							wait(0);
						}
						bLocal_73 = true;
						while (unk_0x5CA3186381FC012C())
						{
							wait(0);
						}
						while (unk_0xD32647D293B05ADD(unk_0xA6580F898F4E801C()))
						{
							wait(0);
						}
						func_62(&Local_45, 1, 0);
						unk_0x0B756FF7161B9AB0("HoldMissionCompleteWhenPrepared", 0);
						if (bVar11)
						{
							while (!unk_0xCAA2C8290C7166B0())
							{
								wait(0);
							}
						}
						unk_0xE2D61CA2ABDF4B17();
					}
					if (Global_56174)
					{
						iLocal_72 = 1;
						Global_56174 = 0;
					}
					settimera(0);
				}
				if (bLocal_73 && !Global_56182)
				{
					if (unk_0x8B1574454E8C2421(joaat("appcamera")) > 0)
					{
						func_54(0);
					}
					if (Global_68276 > 0 || Global_56171)
					{
						if (Global_56201)
						{
							unk_0x0A74F1E9CF777638(7);
						}
						if (iVar1 && !Global_56171)
						{
							Global_37027 = 1;
						}
						if (!Global_56183)
						{
							if (func_21(&Local_45, 0, to_float(iVar0), 0, 0, 0))
							{
								Global_56182 = 1;
							}
							func_20();
						}
						if (Global_56201)
						{
							unk_0x0A74F1E9CF777638(7);
						}
					}
					func_19(1);
					if (!unk_0x3A83743561B4F70C())
					{
						func_17();
					}
					if (!func_16(0))
					{
						switch (func_14("AM_H_PASS"))
						{
							case 2:
								func_11("AM_H_PASS", 3, 2000, 2500, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_10(0);
								break;
							}
						}
				}
				bLocal_71 = Global_56175;
				if (Global_56172)
				{
				}
				else
				{
					unk_0xD32647D293B05ADD(unk_0xA6580F898F4E801C());
					if (unk_0x24A1A7BF4ED94B71(unk_0xEE978C39384D834F(unk_0xA6580F898F4E801C())) < 1)
					{
						Global_56183 = 1;
					}
					if (((((func_100() || func_9()) || Global_56182) || Global_71474) || Global_56183) || !bLocal_73)
					{
						Global_56171 = 0;
						Global_56175 = 0;
						iLocal_72 = 0;
						Global_56178 = 0;
						Global_56179 = 0;
						Global_56189 = 0;
						Global_56192 = 0;
						func_19(0);
						func_2();
						Global_56182 = 0;
						bVar2 = true;
					}
				}
			}
		}
		wait(0);
	}
	func_1(&Local_45);
	Global_25709 = 0;
	Global_56186 = 0;
	unk_0x8F1A9FE6D91AAFEB();
}

void func_1(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x86795B44CE5FE021(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x47C01C0E6F4C1D06())
		{
			unk_0x31A9E530D137684F(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x233A5B4A35140C6B(false);
			unk_0x271C1332F482646C();
		}
		unk_0x86795B44CE5FE021(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x65227735B3827631(false);
		uParam0->f_564 = 0;
	}
	if (!Global_71473)
	{
		if (!unk_0xD32647D293B05ADD(unk_0xA6580F898F4E801C()))
		{
			if (!Global_71474)
			{
				if (unk_0x71364F510A1CB69F() && !func_96(0))
				{
					unk_0x70C1F5AA59767FE6(800);
				}
			}
		}
	}
	func_19(0);
}

void func_2()
{
	if (Global_56181)
	{
		return;
	}
	Global_56190 = 0;
	Global_68276 = 0;
	Global_56192 = 0;
	if (Global_56189)
	{
	}
	Global_56189 = 0;
	func_19(0);
	func_8();
	Global_68428 = 0;
	Global_56180 = 1;
	func_6();
	func_5();
	func_4();
	func_3();
	Global_56171 = 0;
	Global_56201 = 0;
	Global_56209 = -1;
}

void func_3()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_68463[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_68472 = 0;
}

void func_4()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_68429[iVar0 /*2*/] = 0;
		Global_68429[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_68462 = 0;
}

void func_5()
{
	Global_56340 = 0;
}

void func_6()
{
	Global_56200 = 0;
	Global_56204 = func_7(joaat("sp0_shots"));
	Global_56203 = func_7(joaat("sp0_hits"));
	Global_56206 = func_7(joaat("sp1_shots"));
	Global_56205 = func_7(joaat("sp1_hits"));
	Global_56208 = func_7(joaat("sp2_shots"));
	Global_56207 = func_7(joaat("sp2_hits"));
}

int func_7(int iParam0)
{
	var uVar0;
	
	unk_0x2AD48F3CEBA882E9(iParam0, &uVar0, -1);
	return uVar0;
}

void func_8()
{
	int iVar0;
	
	Global_56210 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_56211[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

var func_9()
{
	return Global_1312857;
}

void func_10(int iParam0)
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

void func_11(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_12(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_12(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_13();
	}
}

void func_13()
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

int func_14(char* sParam0)
{
	if (unk_0x3CAC2741CC1A631F(sParam0, &Global_104713))
	{
		return 1;
	}
	if (func_15(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_15(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_106070.f_20382.f_145)
	{
		if (unk_0x3CAC2741CC1A631F(sParam0, &(Global_106070.f_20382[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_16(int iParam0)
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

void func_17()
{
	unk_0x906EA681A50D5E9C();
	func_18();
}

void func_18()
{
	Global_17228.f_134 = 1;
}

void func_19(int iParam0)
{
	Global_71465 = iParam0;
	Global_71466 = iParam0;
}

void func_20()
{
	Global_17228.f_6 = 1;
}

int func_21(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (unk_0x817B152F7462D506() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = unk_0x817B152F7462D506();
	if (!unk_0x4C9BACA8D249CB13())
	{
		if (unk_0xD61D0CA14AE902DF(unk_0xEE978C39384D834F(unk_0xA6580F898F4E801C()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (unk_0x16F3A5056959BF3A(unk_0xEE978C39384D834F(unk_0xA6580F898F4E801C())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (unk_0x71364F510A1CB69F() || unk_0x607776744A243309())
		{
			unk_0x65227735B3827631(true);
			uParam0->f_564 = 1;
		}
	}
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			if (unk_0x53B0513B47405A70(unk_0xD4E735F4B6A956AC()))
			{
				unk_0xB8C9A9ECCE440A3A(unk_0xD4E735F4B6A956AC());
			}
		}
	}
	unk_0xD8C147DA332E7F06(7);
	unk_0xD8C147DA332E7F06(8);
	unk_0xD8C147DA332E7F06(9);
	unk_0xD8C147DA332E7F06(6);
	unk_0xD8C147DA332E7F06(19);
	unk_0xD481A812073CCF02(2, 19, 1);
	unk_0xD481A812073CCF02(0, 37, 1);
	unk_0xD481A812073CCF02(0, 21, 1);
	unk_0xD481A812073CCF02(0, 28, 1);
	unk_0xD481A812073CCF02(0, 29, 1);
	unk_0xD481A812073CCF02(0, 171, 1);
	func_51(0);
	if (unk_0x0B9F814BC8D14042(2))
	{
		if (unk_0x22D9DDC4F867C42C() || (unk_0x71364F510A1CB69F() && !unk_0x3BE8B7AEED1A3971()))
		{
			unk_0x238F4C0DD5EC6FE7();
		}
	}
	Global_36667 = 1;
	if (!uParam0->f_563)
	{
		switch (func_48(unk_0xEE978C39384D834F(unk_0xA6580F898F4E801C())))
		{
			case 1:
				unk_0xE60B9F9B48D4783F("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0xE60B9F9B48D4783F("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0xE60B9F9B48D4783F("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + floor((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + func_47(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_47(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_47((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_47(30f) - func_47(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_19(1);
		uParam0->f_572 = (uParam0->f_572 + round((0f + (1000f * timestep()))));
		func_26(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * timestep())));
			}
		}
		uParam0->f_30 = func_25(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					unk_0x31A9E530D137684F(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x271C1332F482646C();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * timestep())));
			}
		}
		uParam0->f_547 = func_25(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			unk_0x31A9E530D137684F(uParam0->f_1, "TRANSITION_OUT");
			unk_0x271C1332F482646C();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * timestep())));
				}
			}
		}
		uParam0->f_548 = func_25(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (unk_0x1BFD4084A40BF7E1(2))
			{
				if (unk_0x0FA486DE15EB3004(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_22(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (unk_0xDF0ADAD7E584090D(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && unk_0x0FA486DE15EB3004(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					unk_0x31A9E530D137684F(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x271C1332F482646C();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0x31A9E530D137684F(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x271C1332F482646C();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				func_22(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					unk_0x31A9E530D137684F(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x271C1332F482646C();
				}
				uParam0->f_559 = func_25((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * timestep())), 0f, 1f);
				uParam0->f_573 = func_25((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_25((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * timestep())), 0f, 1f);
			uParam0->f_573 = func_25((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (unk_0xDF0ADAD7E584090D(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			wait(0);
		}
		else
		{
			if (!bVar0)
			{
				func_19(0);
			}
			return !bVar0;
		}
	}
	func_19(0);
	return 1;
}

void func_22(var uParam0, bool bParam1)
{
	unk_0x31A9E530D137684F(uParam0->f_4, "CLEAR_ALL");
	unk_0x271C1332F482646C();
	if (unk_0x47C01C0E6F4C1D06())
	{
		unk_0x31A9E530D137684F(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x233A5B4A35140C6B(true);
		unk_0x271C1332F482646C();
	}
	unk_0x31A9E530D137684F(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x380580A1A1667F69(0);
	func_24(unk_0x7391BCD755BD8577(2, 215, true));
	func_23("ES_HELP");
	if (unk_0x47C01C0E6F4C1D06())
	{
		unk_0x233A5B4A35140C6B(true);
		unk_0x380580A1A1667F69(215);
	}
	unk_0x271C1332F482646C();
	if (bParam1)
	{
		unk_0x31A9E530D137684F(uParam0->f_4, "SET_DATA_SLOT");
		unk_0x380580A1A1667F69(1);
		func_24(unk_0x7391BCD755BD8577(2, 216, true));
		func_23("ES_XPAND");
		if (unk_0x47C01C0E6F4C1D06())
		{
			unk_0x233A5B4A35140C6B(true);
			unk_0x380580A1A1667F69(216);
		}
		unk_0x271C1332F482646C();
	}
	unk_0x31A9E530D137684F(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x271C1332F482646C();
}

void func_23(char* sParam0)
{
	unk_0x390B339C943A8A54(sParam0);
	unk_0xD481829E3E36543B();
}

void func_24(char* sParam0)
{
	unk_0x0BAAED7962F122D5(sParam0);
}

float func_25(float fParam0, float fParam1, float fParam2)
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

void func_26(var uParam0, float fParam1, bool bParam2)
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar24[32];
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	
	iVar0 = round((uParam0->f_547 * 255f));
	fVar1 = (func_46() * 0.25f);
	if (unk_0x0FA486DE15EB3004(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0x31A9E530D137684F(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_23(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_45(&(uParam0->f_13));
				}
				else
				{
					func_23(&(uParam0->f_13));
				}
				if (unk_0x4C9BACA8D249CB13())
				{
					unk_0x380580A1A1667F69(150);
				}
				else
				{
					unk_0x380580A1A1667F69(100);
				}
				unk_0x233A5B4A35140C6B(true);
				if (uParam0->f_556 == 4)
				{
					unk_0x380580A1A1667F69((uParam0->f_56 - 1));
				}
				else
				{
					unk_0x380580A1A1667F69(uParam0->f_56);
				}
				unk_0x233A5B4A35140C6B(bParam2);
				if (uParam0->f_556 == 4 || uParam0->f_556 == 3)
				{
					unk_0x380580A1A1667F69(2);
				}
				else
				{
					unk_0x380580A1A1667F69(69);
				}
				unk_0x271C1332F482646C();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				unk_0x31A9E530D137684F(uParam0->f_1, "TRANSITION_UP");
				unk_0xD8B5988E85F72BE5(0.15f);
				unk_0x233A5B4A35140C6B(true);
				unk_0x271C1332F482646C();
				uParam0->f_3 = 1;
			}
		}
		func_44();
		unk_0xE9F9BA9108F437C7(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_47((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_46());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_556 != 4)
	{
		fVar7 = func_43(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (unk_0xA0B98358F89CB4ED(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_43(&(uParam0->f_550));
		fVar8 = (((0.119f + 0.05f) / func_46()) / 2.5f);
		if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_556 == 5)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	unk_0x9EA8CBEA7355649E(2, 215);
	unk_0x9EA8CBEA7355649E(2, 216);
	unk_0x9EA8CBEA7355649E(2, 200);
	unk_0xD481A812073CCF02(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0.95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						func_40((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0.166f) * timestep())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (unk_0x71364F510A1CB69F())
			{
				unk_0xE75DF14D630B12F9();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				unk_0xD8C147DA332E7F06(7);
				unk_0xD8C147DA332E7F06(8);
				unk_0xD8C147DA332E7F06(9);
				unk_0xD8C147DA332E7F06(6);
				unk_0xE9F9BA9108F437C7(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				unk_0xD481A812073CCF02(0, 140, 1);
				unk_0xD481A812073CCF02(0, 141, 1);
				unk_0xD481A812073CCF02(0, 142, 1);
				unk_0xD481A812073CCF02(2, 188, 1);
				if (unk_0x53E955948D35BDB5(2, 188))
				{
					unk_0xE11F00B4AC919F45(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					unk_0xE11F00B4AC919F45(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
				unk_0xD481A812073CCF02(2, 187, 1);
				if (unk_0x53E955948D35BDB5(2, 187))
				{
					unk_0xE11F00B4AC919F45(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					unk_0xE11F00B4AC919F45(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
				unk_0xD481A812073CCF02(2, 202, 1);
				if (unk_0x53E955948D35BDB5(2, 202))
				{
					unk_0xE11F00B4AC919F45(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					unk_0xE11F00B4AC919F45(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
			}
			else if (uParam0->f_562)
			{
				unk_0xD8C147DA332E7F06(7);
				unk_0xD8C147DA332E7F06(8);
				unk_0xD8C147DA332E7F06(9);
				unk_0xD8C147DA332E7F06(6);
				unk_0xD481A812073CCF02(0, 140, 1);
				unk_0xD481A812073CCF02(0, 141, 1);
				unk_0xD481A812073CCF02(0, 142, 1);
				if (unk_0xDF0ADAD7E584090D(2, 215) || unk_0x53E955948D35BDB5(2, 200))
				{
					unk_0xE11F00B4AC919F45(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					unk_0xE11F00B4AC919F45(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
			}
		}
	}
	unk_0x1C828C4226A9FADF(1, &iVar13, &iVar14, &iVar15, &iVar16);
	unk_0xA6D7328EAA8CB61E(iVar13, iVar14, iVar15, iVar0);
	unk_0x8EF82530113D7244(fVar9, fVar10);
	unk_0x38DFCC31D902E792(0);
	unk_0xFD5A6B90A46ACED0(1f, 0.4f);
	fVar1 = (fVar1 - func_47(6f));
	fVar1 = (fVar1 + (func_47(30f) - func_47((2f * 2f))));
	fVar11 = (fVar2 - func_47((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_25((fVar11 / (0.6f * func_47(25f))), 0f, 1f);
		func_44();
		unk_0xFF35427AF9343886(0.5f, (fVar1 - (func_47((2f - 0.5f)) - 0.001388889f)), fVar6, func_39(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_47((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_47((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_46())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_25((fVar11 / (0.8f * func_47(25f))), 0f, 1f);
			func_36(uParam0, iVar17, (fVar1 + func_47(2f)), fVar9, fVar10, round((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_47(25f));
		if (uParam0->f_556 == 4)
		{
			if (iVar17 == (uParam0->f_576 - 1))
			{
				fVar1 = (fVar1 + func_47((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_46())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_47(2f));
					fVar12 = func_25((fVar11 / (0.6f * func_47(25f))), 0f, 1f);
					func_44();
					unk_0xFF35427AF9343886(0.5f, (fVar1 + func_47((2f * 0.5f))), fVar6, func_39(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_47((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_47((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_556 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_47((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_46())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_47(2f));
			fVar12 = func_25((fVar11 / (0.6f * func_47(25f))), 0f, 1f);
			func_44();
			unk_0xFF35427AF9343886(0.5f, (fVar1 + func_47((2f * 0.5f))), fVar6, func_39(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_47((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_46())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_25((fVar11 / (0.8f * func_47(25f))), 0f, 1f);
			unk_0xA6D7328EAA8CB61E(iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar0))));
			func_29(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0x346268472B5F4E43() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_46()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_46()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_46()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_46()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_556 != 3)
			{
				unk_0x8EF82530113D7244(fVar20, fVar21);
				unk_0x38DFCC31D902E792(1);
			}
			else
			{
				fVar20 = 0.5f;
				unk_0x38DFCC31D902E792(0);
			}
			unk_0xFD5A6B90A46ACED0(1f, 0.4f);
			func_28(&(uParam0->f_550), fVar20, (fVar1 + func_47((2f * 2f))), 0, 0, 0);
			unk_0x8EF82530113D7244(fVar20, fVar21);
			unk_0x38DFCC31D902E792(2);
			unk_0xFD5A6B90A46ACED0(1f, 0.4f);
			unk_0x2D2243C8547A3F8B(0);
			func_44();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar24, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			unk_0x8EF82530113D7244(fVar20, fVar22);
			unk_0xA6D7328EAA8CB61E(iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					unk_0x7C25BC565D364568("PERCENTAGE");
					unk_0xCDA87E1DA52C8C9D(uParam0->f_554);
					unk_0xB435CE12BEF0DBF7(fVar20, (fVar1 + func_47((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0x7C25BC565D364568("FO_TWO_NUM");
					unk_0xCDA87E1DA52C8C9D(uParam0->f_554);
					unk_0xCDA87E1DA52C8C9D(uParam0->f_555);
					unk_0xB435CE12BEF0DBF7(fVar20, (fVar1 + func_47((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0x7C25BC565D364568("MTPHPER_XPNO");
					unk_0xCDA87E1DA52C8C9D(uParam0->f_554);
					unk_0xB435CE12BEF0DBF7(fVar20, (fVar1 + func_47((2f * 2f))), 0);
					break;
				
				case 5:
					unk_0x7C25BC565D364568("ESDOLLA");
					unk_0x976BD422410BF38A(uParam0->f_554, 1);
					unk_0xB435CE12BEF0DBF7(fVar20, (fVar1 + func_47((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar25 = 255;
				iVar26 = 255;
				iVar27 = 255;
				iVar28 = iVar0;
				switch (uParam0->f_557)
				{
					case 1:
						unk_0x1C828C4226A9FADF(107, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 3:
						unk_0x1C828C4226A9FADF(109, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 2:
						unk_0x1C828C4226A9FADF(108, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
				}
				fVar29 = (0.001388889f * 5f);
				fVar30 = ((0.00078125f * 16f) * 2f);
				fVar31 = ((0.001388889f * 16f) * 2f);
				fVar32 = ((fVar21 + func_27(4f)) - 0.006f);
				fVar33 = ((fVar1 + func_47(10f)) + fVar29);
				if (uParam0->f_556 == -1)
				{
					fVar32 = (fVar32 - (0.006f * 6f));
				}
				fVar30 = (fVar30 * 0.65f);
				fVar31 = (fVar31 * 0.65f);
				unk_0xE56EDA9982C42132(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, round((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_47(30f) - 2f));
		}
	}
}

float func_27(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_28(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0x2D2243C8547A3F8B(iParam3);
	unk_0x6F2FE3F2B8CE9390(iParam5);
	func_44();
	if (bParam4)
	{
		unk_0x7C25BC565D364568("STRING");
		unk_0xC327C023FDA37F2E(sParam0);
	}
	else
	{
		unk_0x7C25BC565D364568(sParam0);
	}
	unk_0xB435CE12BEF0DBF7(fParam1, fParam2, 0);
}

int func_29(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_35(iParam0), 64);
	StringCopy(&cVar1, func_32(iParam0, bParam1), 64);
	if (unk_0xFEB6EEC0545AF7AA(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x359669D87D0E343F(&iVar2, &iVar3);
			fVar5 = unk_0xA0B98358F89CB4ED(0);
			if (func_31())
			{
				iVar2 = round((to_float(iVar3) * fVar5));
			}
			fVar6 = (to_float(iVar2) / to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_31())
			{
				fVar4 = 1f;
			}
			if (unk_0x8B1574454E8C2421(joaat("director_mode")) > 0)
			{
				unk_0xD89F7C25FE53EC3D(&iVar2, &iVar3);
			}
			iVar2 = round((to_float(iVar2) / fVar4));
			iVar3 = round((to_float(iVar3) / fVar4));
		}
		else
		{
			unk_0xD89F7C25FE53EC3D(&iVar2, &iVar3);
		}
		vVar7 = { unk_0x2CABF8F7B201EA82(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_30(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_30(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 29 && unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_6863[29 /*16*/])) == -1487683087)
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x7D67DDE730F596C5() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17366)
			{
				*fParam4 = (*fParam4 * (Global_17366 / *fParam3));
				*fParam3 = Global_17366;
			}
		}
		return 1;
	}
	return 0;
}

float func_30(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_31()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x359669D87D0E343F(&iVar0, &iVar1);
	fVar2 = (to_float(iVar0) / to_float(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

var func_32(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0x429D45A6C6520026(&(Global_17367.f_6863[iParam0 /*16*/])))
	{
		if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_6863[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_34(unk_0xD4E735F4B6A956AC()) };
			if (unk_0x686DAB3ED67144AB(&Var2, &uVar1))
			{
				return func_33(&uVar1);
			}
		}
		else
		{
			return func_33(&(Global_17367.f_6863[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 51:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 52:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_33(var uParam0)
{
	return uParam0;
}

struct<13> func_34(int iParam0)
{
	struct<13> Var0;
	
	unk_0xE05C4303C26882C4(iParam0, &Var0, 13);
	return Var0;
}

char* func_35(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0x429D45A6C6520026(&(Global_17367.f_6014[iParam0 /*16*/])))
	{
		if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_6014[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_34(unk_0xD4E735F4B6A956AC()) };
			unk_0x686DAB3ED67144AB(&Var1, &uVar0);
			return func_33(&uVar0);
		}
		else
		{
			return func_33(&(Global_17367.f_6014[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_36(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0x1C828C4226A9FADF(1, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0xA6D7328EAA8CB61E(iVar0, iVar1, iVar2, iParam5);
	unk_0x8EF82530113D7244(fParam3, fParam4);
	unk_0x38DFCC31D902E792(1);
	unk_0xFD5A6B90A46ACED0(1f, func_38(14f));
	unk_0x2D2243C8547A3F8B(0);
	unk_0x6F2FE3F2B8CE9390(0);
	func_44();
	if (uParam0->f_531[iParam1])
	{
		unk_0x7C25BC565D364568("STRING");
		unk_0xC327C023FDA37F2E(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		unk_0x7C25BC565D364568(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			unk_0xCDA87E1DA52C8C9D(uParam0->f_489[iParam1]);
		}
	}
	unk_0xB435CE12BEF0DBF7(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_29(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0xE56EDA9982C42132("CommonMenu", func_32(7, 0), (fParam4 - 0.006f), ((fParam2 + func_47(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_29(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0xE56EDA9982C42132("CommonMenu", func_32(5, 0), (fParam4 - 0.006f), ((fParam2 + func_47(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_29(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0xE56EDA9982C42132("CommonMenu", func_32(6, 0), (fParam4 - 0.006f), ((fParam2 + func_47(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		unk_0x38DFCC31D902E792(1);
	}
	else
	{
		unk_0x38DFCC31D902E792(2);
	}
	unk_0xFD5A6B90A46ACED0(1f, func_38(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0x8EF82530113D7244(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0x8EF82530113D7244(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0xA6D7328EAA8CB61E(iVar0, iVar1, iVar2, iParam5);
	func_37(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_37(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	unk_0x2D2243C8547A3F8B(0);
	unk_0x6F2FE3F2B8CE9390(0);
	func_44();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			unk_0xFD5A6B90A46ACED0(1f, func_38(18f));
			unk_0x6F2FE3F2B8CE9390(4);
			if (iParam0 < 0)
			{
				unk_0xC42A779360572EA7("ESMINDOLLA");
				unk_0x976BD422410BF38A((-1 * iParam0), 1);
				fVar1 = unk_0x4E0DD18900B7ACAE(0);
			}
			else
			{
				unk_0xC42A779360572EA7("ESDOLLA");
				unk_0x976BD422410BF38A(iParam0, 1);
				fVar1 = unk_0x4E0DD18900B7ACAE(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			unk_0xE56EDA9982C42132("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xE56EDA9982C42132("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xE56EDA9982C42132("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xFD5A6B90A46ACED0(1f, func_38(14f));
			break;
	}
	unk_0xBA9FB571BCB6C1BD(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0x7C25BC565D364568("PERCENTAGE");
			unk_0xCDA87E1DA52C8C9D(iParam0);
			break;
		
		case 1:
			unk_0x6F2FE3F2B8CE9390(5);
			unk_0x7C25BC565D364568("FO_NUM");
			unk_0xCDA87E1DA52C8C9D(iParam0);
			break;
		
		case 2:
			unk_0x6F2FE3F2B8CE9390(5);
			unk_0x7C25BC565D364568("FO_TWO_NUM");
			unk_0xCDA87E1DA52C8C9D(iParam0);
			unk_0xCDA87E1DA52C8C9D(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0xFD5A6B90A46ACED0(1f, func_38(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0x7C25BC565D364568("ESMINDOLLA");
				unk_0x976BD422410BF38A((-1 * iParam0), 1);
			}
			else
			{
				unk_0x7C25BC565D364568("ESDOLLA");
				unk_0x976BD422410BF38A(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0x7C25BC565D364568(sParam4);
			break;
		
		case 7:
			unk_0x7C25BC565D364568("STRING");
			unk_0xC327C023FDA37F2E(sParam4);
			break;
		
		case 8:
			unk_0x6F2FE3F2B8CE9390(5);
			unk_0x7C25BC565D364568("STRING");
			unk_0x90182C5171067861(iParam0, 14);
			break;
		
		case 9:
			unk_0x6F2FE3F2B8CE9390(5);
			unk_0x7C25BC565D364568("STRING");
			unk_0x90182C5171067861(iParam0, 6);
			break;
		
		case 10:
			unk_0x6F2FE3F2B8CE9390(5);
			unk_0x7C25BC565D364568("STRING");
			unk_0x90182C5171067861(iParam0, 2055);
			break;
		
		case 18:
			unk_0x6F2FE3F2B8CE9390(5);
			unk_0x7C25BC565D364568("STRING");
			unk_0x90182C5171067861(iParam0, 2055);
			break;
		
		case 12:
			unk_0x7C25BC565D364568("AHD_DIST");
			unk_0xCDA87E1DA52C8C9D(iParam0);
			break;
		
		case 13:
			unk_0x7C25BC565D364568(sParam4);
			unk_0xCDA87E1DA52C8C9D(iParam0);
			unk_0xCDA87E1DA52C8C9D(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0x7C25BC565D364568(sParam4);
			unk_0xCDA87E1DA52C8C9D(iParam0);
			unk_0xCDA87E1DA52C8C9D(iParam1);
			break;
		
		case 16:
			unk_0x7C25BC565D364568(sParam4);
			unk_0xCDA87E1DA52C8C9D(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0xB435CE12BEF0DBF7((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			unk_0xFD5A6B90A46ACED0(1f, func_38(14f));
		}
		else
		{
			unk_0xB435CE12BEF0DBF7(fParam2, fParam3, 0);
		}
	}
}

float func_38(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_39(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_40(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_42(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1369750.f_1 = 1;
		func_41(7, iVar0);
		Global_1369750.f_4399[iVar0] = iParam0;
		StringCopy(&(Global_1369750.f_4399.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1369750.f_4399.f_172[iVar0] = iParam2;
		Global_1369750.f_4399.f_216[iVar0] = iParam3;
		Global_1369750.f_4399.f_183[iVar0] = iParam4;
		Global_1369750.f_4399.f_194[iVar0] = iParam5;
		Global_1369750.f_4399.f_249[iVar0] = iParam6;
		Global_1369750.f_4399.f_260[iVar0] = iParam7;
		Global_1369750.f_4399.f_205[iVar0] = iParam8;
		Global_1369750.f_4399.f_314[iVar0] = iParam9;
		Global_1369750.f_4399.f_325[iVar0] = iParam10;
		Global_1369750.f_4399.f_357[iVar0] = iParam11;
		Global_1369750.f_4399.f_238[iVar0] = iParam12;
		Global_1369750.f_4399.f_271[iVar0] = iParam13;
		Global_1369750.f_4399.f_368[iVar0] = iParam14;
		Global_1369750.f_4399.f_379[iVar0] = iParam15;
		Global_1369750.f_4399.f_390[iVar0] = iParam16;
	}
}

void func_41(int iParam0, int iParam1)
{
	unk_0x2BCFB39E86340DAA(&(Global_1369750.f_6130[iParam0]), iParam1);
}

bool func_42(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_1369750.f_6130[iParam0], iParam1);
}

float func_43(char* sParam0)
{
	unk_0xC42A779360572EA7(sParam0);
	return (unk_0x4E0DD18900B7ACAE(1) / 2f);
}

void func_44()
{
	unk_0x0A74F1E9CF777638(1);
	if (unk_0x607776744A243309() || unk_0x71364F510A1CB69F())
	{
		unk_0x0A74F1E9CF777638(7);
	}
	unk_0xF997724AC8A71261(0);
}

void func_45(char* sParam0)
{
	unk_0x0BAAED7962F122D5(sParam0);
}

float func_46()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x47C01C0E6F4C1D06())
	{
	}
	return fVar0;
}

float func_47(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

int func_48(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_49(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_49(int iParam0)
{
	if (func_50(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_50(int iParam0)
{
	return iParam0 < 3;
}

void func_51(int iParam0)
{
	if (func_53())
	{
		return;
	}
	if (!Global_14513.f_1 == 1)
	{
		if (func_52(0))
		{
			func_54(iParam0);
		}
		unk_0x2BCFB39E86340DAA(&Global_2384, 2);
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

void func_54(int iParam0)
{
	if (func_53())
	{
		return;
	}
	if (Global_14681)
	{
		func_56(0, 0);
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
	if (!func_55())
	{
		Global_14513.f_1 = 3;
	}
}

int func_55()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_56(bool bParam0, bool bParam1)
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

int func_57()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_68276)
	{
		if (Global_68277[iVar0 /*9*/] > 0)
		{
			if (Global_56406[Global_68277[iVar0 /*9*/] /*13*/].f_7 == 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_58(bool bParam0)
{
	char* sVar0;
	
	unk_0x789152CB302E8726(0);
	switch (func_59())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	unk_0xBC3BAC0111108F4F(sVar0);
}

int func_59()
{
	func_60();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_60()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_49(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_48(unk_0xA19140A5C42D8715());
			if (func_50(iVar0) && (!func_61(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_50(Global_106070.f_2355.f_539.f_4301))
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

bool func_61(int iParam0)
{
	return Global_36117 == iParam0;
}

int func_62(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_65(uParam0);
	func_64(uParam0);
	if (unk_0x3CAC2741CC1A631F(&(uParam0->f_550), "SPR_RESULT") || (unk_0x3CAC2741CC1A631F(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		unk_0x8000C77B5F336760("MPHud", false);
	}
	if (uParam0->f_1 == 0)
	{
		unk_0x8000C77B5F336760("CommonMenu", false);
		unk_0x8000C77B5F336760("MPLeaderboard", false);
		unk_0x8000C77B5F336760("MPHud", false);
		uParam0->f_1 = unk_0xB00CD6895BDB01A0("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0x0116B05B49B8129C("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0x0FA486DE15EB3004(uParam0->f_1) || !unk_0x87DF091EDFE6D083("CommonMenu")) || !unk_0x87DF091EDFE6D083("MPLeaderboard")) || !unk_0x87DF091EDFE6D083("MPHud"))
		{
			wait(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!unk_0x0FA486DE15EB3004(uParam0->f_4))
			{
				wait(0);
			}
		}
	}
	else
	{
		if (((!unk_0x0FA486DE15EB3004(uParam0->f_1) || !unk_0x87DF091EDFE6D083("CommonMenu")) || !unk_0x87DF091EDFE6D083("MPLeaderboard")) || !unk_0x87DF091EDFE6D083("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!unk_0x0FA486DE15EB3004(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_63(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_22(uParam0, 1);
		}
		else
		{
			func_22(uParam0, 0);
		}
	}
	Global_71466 = 1;
	return 1;
}

void func_63(var uParam0)
{
	unk_0x31A9E530D137684F(uParam0->f_4, "CLEAR_ALL");
	unk_0x271C1332F482646C();
	if (unk_0x47C01C0E6F4C1D06())
	{
		unk_0x31A9E530D137684F(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x233A5B4A35140C6B(true);
		unk_0x271C1332F482646C();
	}
	unk_0x31A9E530D137684F(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x380580A1A1667F69(2);
	func_24(unk_0x7391BCD755BD8577(2, 188, true));
	func_23("ES_HELP_TU");
	unk_0x271C1332F482646C();
	unk_0x31A9E530D137684F(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x380580A1A1667F69(1);
	func_24(unk_0x7391BCD755BD8577(2, 187, true));
	func_23("ES_HELP_TD");
	unk_0x271C1332F482646C();
	unk_0x31A9E530D137684F(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x380580A1A1667F69(0);
	func_24(unk_0x7391BCD755BD8577(2, 202, true));
	func_23("ES_HELP_AB");
	unk_0x271C1332F482646C();
	unk_0x31A9E530D137684F(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x271C1332F482646C();
}

void func_64(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0x38DFCC31D902E792(0);
	unk_0xFD5A6B90A46ACED0(1f, func_38(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			unk_0xC42A779360572EA7("STRING");
			unk_0xC327C023FDA37F2E(&(uParam0->f_13));
			fVar0 = unk_0x4E0DD18900B7ACAE(1);
		}
		else
		{
			unk_0xC42A779360572EA7(&(uParam0->f_13));
			fVar0 = unk_0x4E0DD18900B7ACAE(1);
		}
	}
	else
	{
		unk_0xC42A779360572EA7("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					unk_0xCDA87E1DA52C8C9D(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0x4FDA9E6EF359F8A9(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0xC327C023FDA37F2E(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0x4E0DD18900B7ACAE(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_65(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

void func_66()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	float fVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	vector3 vVar13;
	
	if (Global_68276 == 0)
	{
		return;
	}
	if (Global_68427 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_68276)
	{
		if (Global_68277[iVar0 /*9*/].f_3 != 0)
		{
			return;
		}
		iVar0++;
	}
	iVar1 = 0;
	iVar0 = 0;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_68276)
	{
		iVar3 = Global_68277[iVar0 /*9*/];
		bVar4 = !Global_56406[iVar3 /*13*/].f_7;
		bVar5 = Global_56406[iVar3 /*13*/].f_8;
		uVar6 = Global_56406[iVar3 /*13*/].f_12;
		fVar7 = Global_56406[iVar3 /*13*/].f_9;
		bVar8 = false;
		bVar8 = false;
		if (func_71(iVar3, Global_68277[iVar0 /*9*/].f_1))
		{
			bVar8 = true;
		}
		if (bVar4)
		{
			if (bVar8)
			{
				iVar1 = (iVar1 + 100000000);
			}
		}
		if (bVar5)
		{
			iVar9 = Global_68277[iVar0 /*9*/].f_1;
			iVar10 = floor((IntToFloat(iVar9) * fVar7));
			iVar2 = (iVar2 + iVar10);
			iVar1 = (iVar1 + iVar10);
		}
		iVar0++;
	}
	Global_68422 = iVar1;
	Global_68423 = iVar2;
	if (unk_0x18F86E07E41D913F())
	{
		if (Global_68426 == 0)
		{
			iVar11 = Global_68427;
			if (iVar11 == 90)
			{
				if (Global_106070.f_9057.f_99.f_205[func_70(0)] == 2)
				{
					vVar12.f_2.f_1 = 4;
					vVar12.x = 716;
					unk_0x217153D62FD30A42(&vVar12);
					unk_0x13BE64B38F002613(131, Global_68422, 0f);
					unk_0x13BE64B38F002613(162, Global_68423, 0f);
					unk_0x13BE64B38F002613(126, 1, 0f);
					unk_0x13BE64B38F002613(161, Global_68425, 0f);
					unk_0x13BE64B38F002613(135, func_69(810), 0f);
					unk_0x13BE64B38F002613(136, func_69(811), 0f);
					unk_0x13BE64B38F002613(132, func_69(812), 0f);
					unk_0x13BE64B38F002613(2, func_69(813), 0f);
					unk_0x13BE64B38F002613(141, func_69(814), 0f);
					unk_0x13BE64B38F002613(127, func_69(815), 0f);
					unk_0x13BE64B38F002613(137, func_69(816), 0f);
					unk_0x13BE64B38F002613(7, func_69(817), 0f);
					unk_0x13BE64B38F002613(133, func_69(818), 0f);
					unk_0x13BE64B38F002613(90, func_69(819), 0f);
					vVar12.x = 717;
					unk_0x217153D62FD30A42(&vVar12);
					unk_0x13BE64B38F002613(131, Global_68422, 0f);
					unk_0x13BE64B38F002613(162, Global_68423, 0f);
					unk_0x13BE64B38F002613(126, 1, 0f);
					unk_0x13BE64B38F002613(161, Global_68425, 0f);
					unk_0x13BE64B38F002613(135, func_69(810), 0f);
					unk_0x13BE64B38F002613(136, func_69(811), 0f);
					unk_0x13BE64B38F002613(132, func_69(812), 0f);
					unk_0x13BE64B38F002613(2, func_69(813), 0f);
					unk_0x13BE64B38F002613(141, func_69(814), 0f);
					unk_0x13BE64B38F002613(127, func_69(815), 0f);
					unk_0x13BE64B38F002613(137, func_69(816), 0f);
					unk_0x13BE64B38F002613(7, func_69(817), 0f);
					unk_0x13BE64B38F002613(133, func_69(818), 0f);
					unk_0x13BE64B38F002613(90, func_69(819), 0f);
				}
				else
				{
					func_68(iVar11);
				}
			}
			else if (iVar11 == 47)
			{
				vVar13.f_2.f_1 = 4;
				vVar13.x = 673;
				unk_0x217153D62FD30A42(&vVar13);
				unk_0x13BE64B38F002613(131, Global_68422, 0f);
				unk_0x13BE64B38F002613(162, Global_68423, 0f);
				unk_0x13BE64B38F002613(126, 1, 0f);
				unk_0x13BE64B38F002613(161, Global_68425, 0f);
				unk_0x13BE64B38F002613(142, func_69(413), 0f);
				unk_0x13BE64B38F002613(1, func_69(414), 0f);
				unk_0x13BE64B38F002613(87, func_69(415), 0f);
				unk_0x13BE64B38F002613(138, func_69(416), 0f);
				unk_0x13BE64B38F002613(133, func_69(417), 0f);
				unk_0x13BE64B38F002613(7, func_69(418), 0f);
				unk_0x13BE64B38F002613(90, func_69(419), 0f);
				unk_0x13BE64B38F002613(92, func_69(420), 0f);
				unk_0x13BE64B38F002613(5, func_69(421), 0f);
				unk_0x13BE64B38F002613(127, func_69(422), 0f);
				unk_0x13BE64B38F002613(139, func_69(423), 0f);
				unk_0x13BE64B38F002613(134, func_69(424), 0f);
				unk_0x13BE64B38F002613(141, func_69(425), 0f);
				unk_0x13BE64B38F002613(137, func_69(426), 0f);
				unk_0x13BE64B38F002613(132, func_69(427), 0f);
				unk_0x13BE64B38F002613(2, func_69(428), 0f);
				unk_0x13BE64B38F002613(140, 0, 0f);
				vVar13.x = 672;
				unk_0x217153D62FD30A42(&vVar13);
				unk_0x13BE64B38F002613(131, Global_68422, 0f);
				unk_0x13BE64B38F002613(162, Global_68423, 0f);
				unk_0x13BE64B38F002613(126, 1, 0f);
				unk_0x13BE64B38F002613(161, Global_68425, 0f);
				unk_0x13BE64B38F002613(142, func_69(413), 0f);
				unk_0x13BE64B38F002613(1, func_69(414), 0f);
				unk_0x13BE64B38F002613(87, func_69(415), 0f);
				unk_0x13BE64B38F002613(138, func_69(416), 0f);
				unk_0x13BE64B38F002613(133, func_69(417), 0f);
				unk_0x13BE64B38F002613(7, func_69(418), 0f);
				unk_0x13BE64B38F002613(90, func_69(419), 0f);
				unk_0x13BE64B38F002613(92, func_69(420), 0f);
				unk_0x13BE64B38F002613(5, func_69(421), 0f);
				unk_0x13BE64B38F002613(127, func_69(422), 0f);
				unk_0x13BE64B38F002613(139, func_69(423), 0f);
				unk_0x13BE64B38F002613(134, func_69(424), 0f);
				unk_0x13BE64B38F002613(141, func_69(425), 0f);
				unk_0x13BE64B38F002613(135, func_69(426), 0f);
				unk_0x13BE64B38F002613(132, func_69(427), 0f);
				unk_0x13BE64B38F002613(2, func_69(428), 0f);
				unk_0x13BE64B38F002613(140, 0, 0f);
			}
			else
			{
				func_68(iVar11);
			}
			Global_106070.f_9057.f_330[iVar11 /*6*/].f_4 = Global_68422;
		}
		else
		{
			func_67(Global_68427);
		}
	}
}

void func_67(var uParam0)
{
	var uVar0;
	
	uVar0 = uParam0;
	uVar0 = uVar0;
}

void func_68(int iParam0)
{
	vector3 vVar0;
	struct<13> Var1;
	var uVar2;
	
	vVar0.f_2.f_1 = 4;
	if (!unk_0x18F86E07E41D913F())
	{
		return;
	}
	if (unk_0xD1832FEBE50B1AB1())
	{
		Var1 = { func_34(unk_0xD4E735F4B6A956AC()) };
		if (unk_0xE0B3F7A8017F6425(&Var1))
		{
			if (unk_0xE087FDE0E2FA8ADF(&uVar2, 35, &Var1))
			{
				vVar0.y = uVar2;
			}
		}
	}
	switch (iParam0)
	{
		case 0:
			vVar0.x = 577;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(7, func_69(0), 0f);
			unk_0x13BE64B38F002613(148, func_69(1), 0f);
			unk_0x13BE64B38F002613(139, func_69(2), 0f);
			unk_0x13BE64B38F002613(90, func_69(3), 0f);
			unk_0x13BE64B38F002613(132, func_69(4), 0f);
			unk_0x13BE64B38F002613(134, func_69(5), 0f);
			unk_0x13BE64B38F002613(135, func_69(6), 0f);
			unk_0x13BE64B38F002613(2, func_69(7), 0f);
			unk_0x13BE64B38F002613(133, func_69(8), 0f);
			vVar0.x = 913;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(7, func_69(0), 0f);
			unk_0x13BE64B38F002613(148, func_69(1), 0f);
			unk_0x13BE64B38F002613(139, func_69(2), 0f);
			unk_0x13BE64B38F002613(90, func_69(3), 0f);
			unk_0x13BE64B38F002613(132, func_69(4), 0f);
			unk_0x13BE64B38F002613(134, func_69(5), 0f);
			unk_0x13BE64B38F002613(135, func_69(6), 0f);
			unk_0x13BE64B38F002613(2, func_69(7), 0f);
			unk_0x13BE64B38F002613(133, func_69(8), 0f);
			return;
		
		case 1:
			vVar0.x = 576;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(9), 0f);
			unk_0x13BE64B38F002613(133, func_69(10), 0f);
			unk_0x13BE64B38F002613(5, func_69(11), 0f);
			unk_0x13BE64B38F002613(7, func_69(12), 0f);
			unk_0x13BE64B38F002613(87, func_69(13), 0f);
			unk_0x13BE64B38F002613(90, func_69(14), 0f);
			unk_0x13BE64B38F002613(92, func_69(15), 0f);
			unk_0x13BE64B38F002613(135, func_69(16), 0f);
			unk_0x13BE64B38F002613(127, func_69(17), 0f);
			unk_0x13BE64B38F002613(132, func_69(18), 0f);
			unk_0x13BE64B38F002613(136, func_69(19), 0f);
			unk_0x13BE64B38F002613(1, func_69(20), 0f);
			vVar0.x = 575;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(9), 0f);
			unk_0x13BE64B38F002613(133, func_69(10), 0f);
			unk_0x13BE64B38F002613(5, func_69(11), 0f);
			unk_0x13BE64B38F002613(7, func_69(12), 0f);
			unk_0x13BE64B38F002613(87, func_69(13), 0f);
			unk_0x13BE64B38F002613(90, func_69(14), 0f);
			unk_0x13BE64B38F002613(92, func_69(15), 0f);
			unk_0x13BE64B38F002613(135, func_69(16), 0f);
			unk_0x13BE64B38F002613(127, func_69(17), 0f);
			unk_0x13BE64B38F002613(132, func_69(18), 0f);
			unk_0x13BE64B38F002613(136, func_69(19), 0f);
			unk_0x13BE64B38F002613(1, func_69(20), 0f);
			return;
		
		case 2:
			vVar0.x = 579;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(21), 0f);
			unk_0x13BE64B38F002613(127, func_69(22), 0f);
			unk_0x13BE64B38F002613(7, func_69(23), 0f);
			unk_0x13BE64B38F002613(90, func_69(24), 0f);
			unk_0x13BE64B38F002613(132, func_69(25), 0f);
			unk_0x13BE64B38F002613(133, func_69(26), 0f);
			unk_0x13BE64B38F002613(139, func_69(27), 0f);
			unk_0x13BE64B38F002613(134, func_69(28), 0f);
			unk_0x13BE64B38F002613(135, func_69(29), 0f);
			vVar0.x = 578;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(21), 0f);
			unk_0x13BE64B38F002613(127, func_69(22), 0f);
			unk_0x13BE64B38F002613(7, func_69(23), 0f);
			unk_0x13BE64B38F002613(90, func_69(24), 0f);
			unk_0x13BE64B38F002613(132, func_69(25), 0f);
			unk_0x13BE64B38F002613(133, func_69(26), 0f);
			unk_0x13BE64B38F002613(139, func_69(27), 0f);
			unk_0x13BE64B38F002613(134, func_69(28), 0f);
			unk_0x13BE64B38F002613(135, func_69(29), 0f);
			return;
		
		case 3:
			vVar0.x = 797;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(30), 0f);
			unk_0x13BE64B38F002613(5, func_69(31), 0f);
			unk_0x13BE64B38F002613(87, func_69(32), 0f);
			unk_0x13BE64B38F002613(92, func_69(33), 0f);
			unk_0x13BE64B38F002613(133, func_69(34), 0f);
			unk_0x13BE64B38F002613(90, func_69(35), 0f);
			unk_0x13BE64B38F002613(1, func_69(36), 0f);
			unk_0x13BE64B38F002613(132, func_69(37), 0f);
			vVar0.x = 796;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(30), 0f);
			unk_0x13BE64B38F002613(5, func_69(31), 0f);
			unk_0x13BE64B38F002613(87, func_69(32), 0f);
			unk_0x13BE64B38F002613(92, func_69(33), 0f);
			unk_0x13BE64B38F002613(133, func_69(34), 0f);
			unk_0x13BE64B38F002613(90, func_69(35), 0f);
			unk_0x13BE64B38F002613(1, func_69(36), 0f);
			unk_0x13BE64B38F002613(132, func_69(37), 0f);
			return;
		
		case 4:
			vVar0.x = 799;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(43), 0f);
			unk_0x13BE64B38F002613(5, func_69(44), 0f);
			unk_0x13BE64B38F002613(87, func_69(45), 0f);
			unk_0x13BE64B38F002613(7, func_69(46), 0f);
			unk_0x13BE64B38F002613(95, func_69(47), 0f);
			unk_0x13BE64B38F002613(90, func_69(48), 0f);
			unk_0x13BE64B38F002613(92, func_69(49), 0f);
			unk_0x13BE64B38F002613(1, func_69(50), 0f);
			unk_0x13BE64B38F002613(132, func_69(51), 0f);
			vVar0.x = 798;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(43), 0f);
			unk_0x13BE64B38F002613(5, func_69(44), 0f);
			unk_0x13BE64B38F002613(87, func_69(45), 0f);
			unk_0x13BE64B38F002613(7, func_69(46), 0f);
			unk_0x13BE64B38F002613(95, func_69(47), 0f);
			unk_0x13BE64B38F002613(90, func_69(48), 0f);
			unk_0x13BE64B38F002613(92, func_69(49), 0f);
			unk_0x13BE64B38F002613(1, func_69(50), 0f);
			unk_0x13BE64B38F002613(132, func_69(51), 0f);
			return;
		
		case 5:
			vVar0.x = 801;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(57), 0f);
			unk_0x13BE64B38F002613(5, func_69(58), 0f);
			unk_0x13BE64B38F002613(87, func_69(59), 0f);
			unk_0x13BE64B38F002613(7, func_69(60), 0f);
			unk_0x13BE64B38F002613(95, func_69(61), 0f);
			unk_0x13BE64B38F002613(90, func_69(62), 0f);
			unk_0x13BE64B38F002613(92, func_69(63), 0f);
			unk_0x13BE64B38F002613(1, func_69(64), 0f);
			unk_0x13BE64B38F002613(132, func_69(65), 0f);
			vVar0.x = 800;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(57), 0f);
			unk_0x13BE64B38F002613(5, func_69(58), 0f);
			unk_0x13BE64B38F002613(87, func_69(59), 0f);
			unk_0x13BE64B38F002613(7, func_69(60), 0f);
			unk_0x13BE64B38F002613(95, func_69(61), 0f);
			unk_0x13BE64B38F002613(90, func_69(62), 0f);
			unk_0x13BE64B38F002613(92, func_69(63), 0f);
			unk_0x13BE64B38F002613(1, func_69(64), 0f);
			unk_0x13BE64B38F002613(132, func_69(65), 0f);
			return;
		
		case 6:
			vVar0.x = 803;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(71), 0f);
			unk_0x13BE64B38F002613(7, func_69(72), 0f);
			unk_0x13BE64B38F002613(95, func_69(73), 0f);
			unk_0x13BE64B38F002613(133, func_69(74), 0f);
			unk_0x13BE64B38F002613(5, func_69(75), 0f);
			unk_0x13BE64B38F002613(87, func_69(76), 0f);
			unk_0x13BE64B38F002613(138, func_69(77), 0f);
			unk_0x13BE64B38F002613(90, func_69(78), 0f);
			unk_0x13BE64B38F002613(1, func_69(79), 0f);
			unk_0x13BE64B38F002613(132, func_69(80), 0f);
			vVar0.x = 802;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(71), 0f);
			unk_0x13BE64B38F002613(7, func_69(72), 0f);
			unk_0x13BE64B38F002613(95, func_69(73), 0f);
			unk_0x13BE64B38F002613(133, func_69(74), 0f);
			unk_0x13BE64B38F002613(5, func_69(75), 0f);
			unk_0x13BE64B38F002613(87, func_69(76), 0f);
			unk_0x13BE64B38F002613(138, func_69(77), 0f);
			unk_0x13BE64B38F002613(90, func_69(78), 0f);
			unk_0x13BE64B38F002613(1, func_69(79), 0f);
			unk_0x13BE64B38F002613(132, func_69(80), 0f);
			return;
		
		case 7:
			vVar0.x = 805;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(86), 0f);
			unk_0x13BE64B38F002613(127, func_69(87), 0f);
			unk_0x13BE64B38F002613(92, func_69(88), 0f);
			unk_0x13BE64B38F002613(87, func_69(89), 0f);
			unk_0x13BE64B38F002613(5, func_69(90), 0f);
			unk_0x13BE64B38F002613(1, func_69(91), 0f);
			unk_0x13BE64B38F002613(7, func_69(92), 0f);
			unk_0x13BE64B38F002613(95, func_69(93), 0f);
			unk_0x13BE64B38F002613(90, func_69(94), 0f);
			unk_0x13BE64B38F002613(138, func_69(95), 0f);
			unk_0x13BE64B38F002613(132, func_69(96), 0f);
			vVar0.x = 804;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(86), 0f);
			unk_0x13BE64B38F002613(127, func_69(87), 0f);
			unk_0x13BE64B38F002613(92, func_69(88), 0f);
			unk_0x13BE64B38F002613(87, func_69(89), 0f);
			unk_0x13BE64B38F002613(5, func_69(90), 0f);
			unk_0x13BE64B38F002613(1, func_69(91), 0f);
			unk_0x13BE64B38F002613(7, func_69(92), 0f);
			unk_0x13BE64B38F002613(95, func_69(93), 0f);
			unk_0x13BE64B38F002613(90, func_69(94), 0f);
			unk_0x13BE64B38F002613(138, func_69(95), 0f);
			unk_0x13BE64B38F002613(132, func_69(96), 0f);
			return;
		
		case 9:
			vVar0.x = 639;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(7, func_69(102), 0f);
			unk_0x13BE64B38F002613(133, func_69(103), 0f);
			unk_0x13BE64B38F002613(134, func_69(104), 0f);
			unk_0x13BE64B38F002613(135, func_69(105), 0f);
			unk_0x13BE64B38F002613(138, func_69(106), 0f);
			unk_0x13BE64B38F002613(2, func_69(107), 0f);
			unk_0x13BE64B38F002613(136, func_69(108), 0f);
			unk_0x13BE64B38F002613(137, func_69(109), 0f);
			unk_0x13BE64B38F002613(132, func_69(110), 0f);
			vVar0.x = 638;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(7, func_69(102), 0f);
			unk_0x13BE64B38F002613(133, func_69(103), 0f);
			unk_0x13BE64B38F002613(134, func_69(104), 0f);
			unk_0x13BE64B38F002613(135, func_69(105), 0f);
			unk_0x13BE64B38F002613(138, func_69(106), 0f);
			unk_0x13BE64B38F002613(2, func_69(107), 0f);
			unk_0x13BE64B38F002613(136, func_69(108), 0f);
			unk_0x13BE64B38F002613(137, func_69(109), 0f);
			unk_0x13BE64B38F002613(132, func_69(110), 0f);
			return;
		
		case 8:
			vVar0.x = 641;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(134, func_69(111), 0f);
			unk_0x13BE64B38F002613(135, func_69(112), 0f);
			unk_0x13BE64B38F002613(136, func_69(113), 0f);
			unk_0x13BE64B38F002613(2, func_69(114), 0f);
			unk_0x13BE64B38F002613(133, func_69(115), 0f);
			unk_0x13BE64B38F002613(95, func_69(116), 0f);
			unk_0x13BE64B38F002613(7, func_69(117), 0f);
			unk_0x13BE64B38F002613(142, func_69(118), 0f);
			unk_0x13BE64B38F002613(132, func_69(119), 0f);
			vVar0.x = 640;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(134, func_69(111), 0f);
			unk_0x13BE64B38F002613(135, func_69(112), 0f);
			unk_0x13BE64B38F002613(136, func_69(113), 0f);
			unk_0x13BE64B38F002613(2, func_69(114), 0f);
			unk_0x13BE64B38F002613(133, func_69(115), 0f);
			unk_0x13BE64B38F002613(95, func_69(116), 0f);
			unk_0x13BE64B38F002613(7, func_69(117), 0f);
			unk_0x13BE64B38F002613(142, func_69(118), 0f);
			unk_0x13BE64B38F002613(132, func_69(119), 0f);
			return;
		
		case 10:
			vVar0.x = 646;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(7, func_69(120), 0f);
			unk_0x13BE64B38F002613(133, func_69(121), 0f);
			unk_0x13BE64B38F002613(134, func_69(122), 0f);
			unk_0x13BE64B38F002613(136, func_69(123), 0f);
			unk_0x13BE64B38F002613(137, func_69(124), 0f);
			unk_0x13BE64B38F002613(90, func_69(125), 0f);
			unk_0x13BE64B38F002613(132, func_69(126), 0f);
			unk_0x13BE64B38F002613(127, func_69(127), 0f);
			unk_0x13BE64B38F002613(2, func_69(128), 0f);
			vVar0.x = 645;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(7, func_69(120), 0f);
			unk_0x13BE64B38F002613(133, func_69(121), 0f);
			unk_0x13BE64B38F002613(134, func_69(122), 0f);
			unk_0x13BE64B38F002613(136, func_69(123), 0f);
			unk_0x13BE64B38F002613(137, func_69(124), 0f);
			unk_0x13BE64B38F002613(90, func_69(125), 0f);
			unk_0x13BE64B38F002613(132, func_69(126), 0f);
			unk_0x13BE64B38F002613(127, func_69(127), 0f);
			unk_0x13BE64B38F002613(2, func_69(128), 0f);
			return;
		
		case 11:
			vVar0.x = 671;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(129), 0f);
			unk_0x13BE64B38F002613(7, func_69(130), 0f);
			unk_0x13BE64B38F002613(133, func_69(131), 0f);
			unk_0x13BE64B38F002613(90, func_69(132), 0f);
			unk_0x13BE64B38F002613(132, func_69(133), 0f);
			unk_0x13BE64B38F002613(138, func_69(134), 0f);
			unk_0x13BE64B38F002613(134, func_69(135), 0f);
			vVar0.x = 670;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(129), 0f);
			unk_0x13BE64B38F002613(7, func_69(130), 0f);
			unk_0x13BE64B38F002613(133, func_69(131), 0f);
			unk_0x13BE64B38F002613(90, func_69(132), 0f);
			unk_0x13BE64B38F002613(132, func_69(133), 0f);
			unk_0x13BE64B38F002613(138, func_69(134), 0f);
			unk_0x13BE64B38F002613(134, func_69(135), 0f);
			return;
		
		case 12:
			vVar0.x = 603;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(92, func_69(136), 0f);
			unk_0x13BE64B38F002613(127, func_69(137), 0f);
			unk_0x13BE64B38F002613(87, func_69(138), 0f);
			unk_0x13BE64B38F002613(7, func_69(139), 0f);
			unk_0x13BE64B38F002613(134, func_69(140), 0f);
			unk_0x13BE64B38F002613(90, func_69(141), 0f);
			unk_0x13BE64B38F002613(132, func_69(142), 0f);
			unk_0x13BE64B38F002613(5, func_69(143), 0f);
			unk_0x13BE64B38F002613(1, func_69(144), 0f);
			unk_0x13BE64B38F002613(135, func_69(145), 0f);
			unk_0x13BE64B38F002613(136, func_69(146), 0f);
			unk_0x13BE64B38F002613(2, func_69(147), 0f);
			vVar0.x = 602;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(92, func_69(136), 0f);
			unk_0x13BE64B38F002613(127, func_69(137), 0f);
			unk_0x13BE64B38F002613(87, func_69(138), 0f);
			unk_0x13BE64B38F002613(7, func_69(139), 0f);
			unk_0x13BE64B38F002613(134, func_69(140), 0f);
			unk_0x13BE64B38F002613(90, func_69(141), 0f);
			unk_0x13BE64B38F002613(132, func_69(142), 0f);
			unk_0x13BE64B38F002613(5, func_69(143), 0f);
			unk_0x13BE64B38F002613(1, func_69(144), 0f);
			unk_0x13BE64B38F002613(135, func_69(145), 0f);
			unk_0x13BE64B38F002613(136, func_69(146), 0f);
			unk_0x13BE64B38F002613(2, func_69(147), 0f);
			return;
		
		case 13:
			vVar0.x = 605;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(87, func_69(148), 0f);
			unk_0x13BE64B38F002613(127, func_69(149), 0f);
			unk_0x13BE64B38F002613(133, func_69(150), 0f);
			unk_0x13BE64B38F002613(92, func_69(151), 0f);
			unk_0x13BE64B38F002613(7, func_69(152), 0f);
			unk_0x13BE64B38F002613(134, func_69(153), 0f);
			unk_0x13BE64B38F002613(90, func_69(154), 0f);
			unk_0x13BE64B38F002613(132, func_69(155), 0f);
			unk_0x13BE64B38F002613(5, func_69(156), 0f);
			unk_0x13BE64B38F002613(139, func_69(157), 0f);
			unk_0x13BE64B38F002613(135, func_69(158), 0f);
			unk_0x13BE64B38F002613(1, func_69(159), 0f);
			unk_0x13BE64B38F002613(2, func_69(160), 0f);
			vVar0.x = 604;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(87, func_69(148), 0f);
			unk_0x13BE64B38F002613(127, func_69(149), 0f);
			unk_0x13BE64B38F002613(133, func_69(150), 0f);
			unk_0x13BE64B38F002613(92, func_69(151), 0f);
			unk_0x13BE64B38F002613(7, func_69(152), 0f);
			unk_0x13BE64B38F002613(134, func_69(153), 0f);
			unk_0x13BE64B38F002613(90, func_69(154), 0f);
			unk_0x13BE64B38F002613(132, func_69(155), 0f);
			unk_0x13BE64B38F002613(5, func_69(156), 0f);
			unk_0x13BE64B38F002613(139, func_69(157), 0f);
			unk_0x13BE64B38F002613(135, func_69(158), 0f);
			unk_0x13BE64B38F002613(1, func_69(159), 0f);
			unk_0x13BE64B38F002613(2, func_69(160), 0f);
			return;
		
		case 14:
			vVar0.x = 648;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(1, func_69(161), 0f);
			unk_0x13BE64B38F002613(134, func_69(162), 0f);
			unk_0x13BE64B38F002613(92, func_69(163), 0f);
			unk_0x13BE64B38F002613(87, func_69(164), 0f);
			unk_0x13BE64B38F002613(5, func_69(165), 0f);
			unk_0x13BE64B38F002613(127, func_69(166), 0f);
			unk_0x13BE64B38F002613(138, func_69(167), 0f);
			unk_0x13BE64B38F002613(139, func_69(168), 0f);
			unk_0x13BE64B38F002613(135, func_69(169), 0f);
			unk_0x13BE64B38F002613(2, func_69(170), 0f);
			unk_0x13BE64B38F002613(132, func_69(171), 0f);
			vVar0.x = 647;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(1, func_69(161), 0f);
			unk_0x13BE64B38F002613(134, func_69(162), 0f);
			unk_0x13BE64B38F002613(92, func_69(163), 0f);
			unk_0x13BE64B38F002613(87, func_69(164), 0f);
			unk_0x13BE64B38F002613(5, func_69(165), 0f);
			unk_0x13BE64B38F002613(127, func_69(166), 0f);
			unk_0x13BE64B38F002613(138, func_69(167), 0f);
			unk_0x13BE64B38F002613(139, func_69(168), 0f);
			unk_0x13BE64B38F002613(135, func_69(169), 0f);
			unk_0x13BE64B38F002613(2, func_69(170), 0f);
			unk_0x13BE64B38F002613(132, func_69(171), 0f);
			return;
		
		case 15:
			vVar0.x = 650;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(1, func_69(172), 0f);
			unk_0x13BE64B38F002613(2, func_69(173), 0f);
			unk_0x13BE64B38F002613(87, func_69(174), 0f);
			unk_0x13BE64B38F002613(92, func_69(175), 0f);
			unk_0x13BE64B38F002613(7, func_69(176), 0f);
			unk_0x13BE64B38F002613(95, func_69(177), 0f);
			unk_0x13BE64B38F002613(5, func_69(178), 0f);
			unk_0x13BE64B38F002613(138, func_69(179), 0f);
			unk_0x13BE64B38F002613(139, func_69(180), 0f);
			unk_0x13BE64B38F002613(142, func_69(181), 0f);
			unk_0x13BE64B38F002613(92, func_69(182), 0f);
			unk_0x13BE64B38F002613(127, func_69(183), 0f);
			unk_0x13BE64B38F002613(132, func_69(184), 0f);
			vVar0.x = 649;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(1, func_69(172), 0f);
			unk_0x13BE64B38F002613(2, func_69(173), 0f);
			unk_0x13BE64B38F002613(87, func_69(174), 0f);
			unk_0x13BE64B38F002613(92, func_69(175), 0f);
			unk_0x13BE64B38F002613(7, func_69(176), 0f);
			unk_0x13BE64B38F002613(95, func_69(177), 0f);
			unk_0x13BE64B38F002613(5, func_69(178), 0f);
			unk_0x13BE64B38F002613(138, func_69(179), 0f);
			unk_0x13BE64B38F002613(139, func_69(180), 0f);
			unk_0x13BE64B38F002613(142, func_69(181), 0f);
			unk_0x13BE64B38F002613(92, func_69(182), 0f);
			unk_0x13BE64B38F002613(127, func_69(183), 0f);
			unk_0x13BE64B38F002613(132, func_69(184), 0f);
			return;
		
		case 16:
			vVar0.x = 656;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(185), 0f);
			unk_0x13BE64B38F002613(95, func_69(186), 0f);
			unk_0x13BE64B38F002613(133, func_69(187), 0f);
			unk_0x13BE64B38F002613(5, func_69(188), 0f);
			unk_0x13BE64B38F002613(92, func_69(189), 0f);
			unk_0x13BE64B38F002613(127, func_69(190), 0f);
			unk_0x13BE64B38F002613(87, func_69(191), 0f);
			unk_0x13BE64B38F002613(1, func_69(192), 0f);
			unk_0x13BE64B38F002613(142, func_69(193), 0f);
			unk_0x13BE64B38F002613(138, func_69(194), 0f);
			unk_0x13BE64B38F002613(132, func_69(195), 0f);
			vVar0.x = 655;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(185), 0f);
			unk_0x13BE64B38F002613(95, func_69(186), 0f);
			unk_0x13BE64B38F002613(133, func_69(187), 0f);
			unk_0x13BE64B38F002613(5, func_69(188), 0f);
			unk_0x13BE64B38F002613(92, func_69(189), 0f);
			unk_0x13BE64B38F002613(127, func_69(190), 0f);
			unk_0x13BE64B38F002613(87, func_69(191), 0f);
			unk_0x13BE64B38F002613(1, func_69(192), 0f);
			unk_0x13BE64B38F002613(142, func_69(193), 0f);
			unk_0x13BE64B38F002613(138, func_69(194), 0f);
			unk_0x13BE64B38F002613(132, func_69(195), 0f);
			return;
		
		case 17:
			vVar0.x = 583;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(138, func_69(196), 0f);
			unk_0x13BE64B38F002613(7, func_69(197), 0f);
			unk_0x13BE64B38F002613(90, func_69(198), 0f);
			unk_0x13BE64B38F002613(139, func_69(199), 0f);
			unk_0x13BE64B38F002613(5, func_69(200), 0f);
			unk_0x13BE64B38F002613(92, func_69(201), 0f);
			unk_0x13BE64B38F002613(2, func_69(202), 0f);
			unk_0x13BE64B38F002613(95, func_69(203), 0f);
			unk_0x13BE64B38F002613(132, func_69(204), 0f);
			vVar0.x = 582;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(138, func_69(196), 0f);
			unk_0x13BE64B38F002613(7, func_69(197), 0f);
			unk_0x13BE64B38F002613(90, func_69(198), 0f);
			unk_0x13BE64B38F002613(139, func_69(199), 0f);
			unk_0x13BE64B38F002613(5, func_69(200), 0f);
			unk_0x13BE64B38F002613(92, func_69(201), 0f);
			unk_0x13BE64B38F002613(2, func_69(202), 0f);
			unk_0x13BE64B38F002613(95, func_69(203), 0f);
			unk_0x13BE64B38F002613(132, func_69(204), 0f);
			return;
		
		case 18:
			vVar0.x = 585;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(133, func_69(205), 0f);
			unk_0x13BE64B38F002613(87, func_69(206), 0f);
			unk_0x13BE64B38F002613(138, func_69(207), 0f);
			unk_0x13BE64B38F002613(7, func_69(208), 0f);
			unk_0x13BE64B38F002613(134, func_69(209), 0f);
			unk_0x13BE64B38F002613(90, func_69(210), 0f);
			unk_0x13BE64B38F002613(139, func_69(211), 0f);
			unk_0x13BE64B38F002613(127, func_69(212), 0f);
			unk_0x13BE64B38F002613(140, func_69(213), 0f);
			unk_0x13BE64B38F002613(135, func_69(214), 0f);
			unk_0x13BE64B38F002613(2, func_69(215), 0f);
			unk_0x13BE64B38F002613(132, func_69(216), 0f);
			vVar0.x = 584;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(133, func_69(205), 0f);
			unk_0x13BE64B38F002613(87, func_69(206), 0f);
			unk_0x13BE64B38F002613(138, func_69(207), 0f);
			unk_0x13BE64B38F002613(7, func_69(208), 0f);
			unk_0x13BE64B38F002613(134, func_69(209), 0f);
			unk_0x13BE64B38F002613(90, func_69(210), 0f);
			unk_0x13BE64B38F002613(139, func_69(211), 0f);
			unk_0x13BE64B38F002613(127, func_69(212), 0f);
			unk_0x13BE64B38F002613(140, func_69(213), 0f);
			unk_0x13BE64B38F002613(135, func_69(214), 0f);
			unk_0x13BE64B38F002613(2, func_69(215), 0f);
			unk_0x13BE64B38F002613(132, func_69(216), 0f);
			return;
		
		case 19:
			vVar0.x = 587;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(7, func_69(217), 0f);
			unk_0x13BE64B38F002613(2, func_69(218), 0f);
			unk_0x13BE64B38F002613(134, func_69(219), 0f);
			unk_0x13BE64B38F002613(90, func_69(220), 0f);
			unk_0x13BE64B38F002613(138, func_69(221), 0f);
			unk_0x13BE64B38F002613(142, func_69(222), 0f);
			unk_0x13BE64B38F002613(5, func_69(223), 0f);
			unk_0x13BE64B38F002613(92, func_69(224), 0f);
			unk_0x13BE64B38F002613(87, func_69(225), 0f);
			unk_0x13BE64B38F002613(1, func_69(226), 0f);
			unk_0x13BE64B38F002613(133, func_69(227), 0f);
			unk_0x13BE64B38F002613(132, func_69(228), 0f);
			vVar0.x = 586;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(7, func_69(217), 0f);
			unk_0x13BE64B38F002613(2, func_69(218), 0f);
			unk_0x13BE64B38F002613(134, func_69(219), 0f);
			unk_0x13BE64B38F002613(90, func_69(220), 0f);
			unk_0x13BE64B38F002613(138, func_69(221), 0f);
			unk_0x13BE64B38F002613(142, func_69(222), 0f);
			unk_0x13BE64B38F002613(5, func_69(223), 0f);
			unk_0x13BE64B38F002613(92, func_69(224), 0f);
			unk_0x13BE64B38F002613(87, func_69(225), 0f);
			unk_0x13BE64B38F002613(1, func_69(226), 0f);
			unk_0x13BE64B38F002613(133, func_69(227), 0f);
			unk_0x13BE64B38F002613(132, func_69(228), 0f);
			return;
		
		case 20:
			vVar0.x = 609;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(95, func_69(229), 0f);
			unk_0x13BE64B38F002613(135, func_69(230), 0f);
			unk_0x13BE64B38F002613(7, func_69(231), 0f);
			unk_0x13BE64B38F002613(136, func_69(232), 0f);
			unk_0x13BE64B38F002613(90, func_69(233), 0f);
			unk_0x13BE64B38F002613(138, func_69(234), 0f);
			unk_0x13BE64B38F002613(2, func_69(235), 0f);
			unk_0x13BE64B38F002613(137, func_69(236), 0f);
			unk_0x13BE64B38F002613(133, func_69(237), 0f);
			unk_0x13BE64B38F002613(132, func_69(238), 0f);
			vVar0.x = 608;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(95, func_69(229), 0f);
			unk_0x13BE64B38F002613(135, func_69(230), 0f);
			unk_0x13BE64B38F002613(7, func_69(231), 0f);
			unk_0x13BE64B38F002613(136, func_69(232), 0f);
			unk_0x13BE64B38F002613(90, func_69(233), 0f);
			unk_0x13BE64B38F002613(138, func_69(234), 0f);
			unk_0x13BE64B38F002613(2, func_69(235), 0f);
			unk_0x13BE64B38F002613(137, func_69(236), 0f);
			unk_0x13BE64B38F002613(133, func_69(237), 0f);
			unk_0x13BE64B38F002613(132, func_69(238), 0f);
			return;
		
		case 21:
			vVar0.x = 621;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(239), 0f);
			unk_0x13BE64B38F002613(133, func_69(240), 0f);
			unk_0x13BE64B38F002613(134, func_69(241), 0f);
			unk_0x13BE64B38F002613(135, func_69(242), 0f);
			unk_0x13BE64B38F002613(7, func_69(243), 0f);
			unk_0x13BE64B38F002613(90, func_69(244), 0f);
			unk_0x13BE64B38F002613(127, func_69(245), 0f);
			unk_0x13BE64B38F002613(95, func_69(246), 0f);
			unk_0x13BE64B38F002613(138, func_69(247), 0f);
			unk_0x13BE64B38F002613(132, func_69(248), 0f);
			vVar0.x = 620;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(239), 0f);
			unk_0x13BE64B38F002613(133, func_69(240), 0f);
			unk_0x13BE64B38F002613(134, func_69(241), 0f);
			unk_0x13BE64B38F002613(135, func_69(242), 0f);
			unk_0x13BE64B38F002613(7, func_69(243), 0f);
			unk_0x13BE64B38F002613(90, func_69(244), 0f);
			unk_0x13BE64B38F002613(127, func_69(245), 0f);
			unk_0x13BE64B38F002613(95, func_69(246), 0f);
			unk_0x13BE64B38F002613(138, func_69(247), 0f);
			unk_0x13BE64B38F002613(132, func_69(248), 0f);
			return;
		
		case 22:
			vVar0.x = 675;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(249), 0f);
			unk_0x13BE64B38F002613(7, func_69(250), 0f);
			unk_0x13BE64B38F002613(95, func_69(251), 0f);
			unk_0x13BE64B38F002613(90, func_69(252), 0f);
			unk_0x13BE64B38F002613(138, func_69(253), 0f);
			unk_0x13BE64B38F002613(139, func_69(254), 0f);
			unk_0x13BE64B38F002613(133, func_69(255), 0f);
			unk_0x13BE64B38F002613(132, func_69(256), 0f);
			vVar0.x = 674;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(249), 0f);
			unk_0x13BE64B38F002613(7, func_69(250), 0f);
			unk_0x13BE64B38F002613(95, func_69(251), 0f);
			unk_0x13BE64B38F002613(90, func_69(252), 0f);
			unk_0x13BE64B38F002613(138, func_69(253), 0f);
			unk_0x13BE64B38F002613(139, func_69(254), 0f);
			unk_0x13BE64B38F002613(133, func_69(255), 0f);
			unk_0x13BE64B38F002613(132, func_69(256), 0f);
			return;
		
		case 26:
			vVar0.x = 712;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(257), 0f);
			unk_0x13BE64B38F002613(7, func_69(258), 0f);
			unk_0x13BE64B38F002613(95, func_69(259), 0f);
			unk_0x13BE64B38F002613(132, func_69(260), 0f);
			unk_0x13BE64B38F002613(90, func_69(261), 0f);
			unk_0x13BE64B38F002613(5, func_69(262), 0f);
			unk_0x13BE64B38F002613(127, func_69(263), 0f);
			unk_0x13BE64B38F002613(92, func_69(264), 0f);
			unk_0x13BE64B38F002613(87, func_69(265), 0f);
			unk_0x13BE64B38F002613(1, func_69(266), 0f);
			unk_0x13BE64B38F002613(134, func_69(267), 0f);
			unk_0x13BE64B38F002613(135, func_69(268), 0f);
			unk_0x13BE64B38F002613(142, func_69(269), 0f);
			unk_0x13BE64B38F002613(136, func_69(270), 0f);
			unk_0x13BE64B38F002613(137, func_69(271), 0f);
			unk_0x13BE64B38F002613(103, func_69(272), 0f);
			vVar0.x = 711;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(257), 0f);
			unk_0x13BE64B38F002613(7, func_69(258), 0f);
			unk_0x13BE64B38F002613(95, func_69(259), 0f);
			unk_0x13BE64B38F002613(132, func_69(260), 0f);
			unk_0x13BE64B38F002613(90, func_69(261), 0f);
			unk_0x13BE64B38F002613(5, func_69(262), 0f);
			unk_0x13BE64B38F002613(127, func_69(263), 0f);
			unk_0x13BE64B38F002613(92, func_69(264), 0f);
			unk_0x13BE64B38F002613(87, func_69(265), 0f);
			unk_0x13BE64B38F002613(1, func_69(266), 0f);
			unk_0x13BE64B38F002613(134, func_69(267), 0f);
			unk_0x13BE64B38F002613(135, func_69(268), 0f);
			unk_0x13BE64B38F002613(142, func_69(269), 0f);
			unk_0x13BE64B38F002613(136, func_69(270), 0f);
			unk_0x13BE64B38F002613(137, func_69(271), 0f);
			unk_0x13BE64B38F002613(103, func_69(272), 0f);
			return;
		
		case 29:
			vVar0.x = 611;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(1, func_69(273), 0f);
			unk_0x13BE64B38F002613(87, func_69(274), 0f);
			unk_0x13BE64B38F002613(2, func_69(275), 0f);
			unk_0x13BE64B38F002613(133, func_69(276), 0f);
			unk_0x13BE64B38F002613(127, func_69(277), 0f);
			unk_0x13BE64B38F002613(90, func_69(278), 0f);
			unk_0x13BE64B38F002613(5, func_69(279), 0f);
			unk_0x13BE64B38F002613(92, func_69(280), 0f);
			unk_0x13BE64B38F002613(134, func_69(281), 0f);
			unk_0x13BE64B38F002613(132, func_69(282), 0f);
			vVar0.x = 610;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(1, func_69(273), 0f);
			unk_0x13BE64B38F002613(87, func_69(274), 0f);
			unk_0x13BE64B38F002613(2, func_69(275), 0f);
			unk_0x13BE64B38F002613(133, func_69(276), 0f);
			unk_0x13BE64B38F002613(127, func_69(277), 0f);
			unk_0x13BE64B38F002613(90, func_69(278), 0f);
			unk_0x13BE64B38F002613(5, func_69(279), 0f);
			unk_0x13BE64B38F002613(92, func_69(280), 0f);
			unk_0x13BE64B38F002613(134, func_69(281), 0f);
			unk_0x13BE64B38F002613(132, func_69(282), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 30:
			vVar0.x = 615;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(283), 0f);
			unk_0x13BE64B38F002613(1, func_69(284), 0f);
			unk_0x13BE64B38F002613(87, func_69(285), 0f);
			unk_0x13BE64B38F002613(90, func_69(286), 0f);
			unk_0x13BE64B38F002613(5, func_69(287), 0f);
			unk_0x13BE64B38F002613(92, func_69(288), 0f);
			unk_0x13BE64B38F002613(7, func_69(289), 0f);
			unk_0x13BE64B38F002613(133, func_69(290), 0f);
			unk_0x13BE64B38F002613(142, func_69(291), 0f);
			unk_0x13BE64B38F002613(138, func_69(292), 0f);
			unk_0x13BE64B38F002613(132, func_69(293), 0f);
			vVar0.x = 614;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(283), 0f);
			unk_0x13BE64B38F002613(1, func_69(284), 0f);
			unk_0x13BE64B38F002613(87, func_69(285), 0f);
			unk_0x13BE64B38F002613(90, func_69(286), 0f);
			unk_0x13BE64B38F002613(5, func_69(287), 0f);
			unk_0x13BE64B38F002613(92, func_69(288), 0f);
			unk_0x13BE64B38F002613(7, func_69(289), 0f);
			unk_0x13BE64B38F002613(133, func_69(290), 0f);
			unk_0x13BE64B38F002613(142, func_69(291), 0f);
			unk_0x13BE64B38F002613(138, func_69(292), 0f);
			unk_0x13BE64B38F002613(132, func_69(293), 0f);
			return;
		
		case 31:
			vVar0.x = 623;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(133, func_69(294), 0f);
			unk_0x13BE64B38F002613(134, func_69(295), 0f);
			unk_0x13BE64B38F002613(135, func_69(296), 0f);
			unk_0x13BE64B38F002613(136, func_69(297), 0f);
			unk_0x13BE64B38F002613(137, func_69(298), 0f);
			unk_0x13BE64B38F002613(90, func_69(299), 0f);
			unk_0x13BE64B38F002613(7, func_69(300), 0f);
			unk_0x13BE64B38F002613(5, func_69(301), 0f);
			unk_0x13BE64B38F002613(95, func_69(302), 0f);
			unk_0x13BE64B38F002613(138, func_69(303), 0f);
			unk_0x13BE64B38F002613(2, func_69(304), 0f);
			unk_0x13BE64B38F002613(132, func_69(305), 0f);
			vVar0.x = 622;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(133, func_69(294), 0f);
			unk_0x13BE64B38F002613(134, func_69(295), 0f);
			unk_0x13BE64B38F002613(135, func_69(296), 0f);
			unk_0x13BE64B38F002613(136, func_69(297), 0f);
			unk_0x13BE64B38F002613(137, func_69(298), 0f);
			unk_0x13BE64B38F002613(90, func_69(299), 0f);
			unk_0x13BE64B38F002613(7, func_69(300), 0f);
			unk_0x13BE64B38F002613(5, func_69(301), 0f);
			unk_0x13BE64B38F002613(95, func_69(302), 0f);
			unk_0x13BE64B38F002613(138, func_69(303), 0f);
			unk_0x13BE64B38F002613(2, func_69(304), 0f);
			unk_0x13BE64B38F002613(132, func_69(305), 0f);
			return;
		
		case 38:
			vVar0.x = 627;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(127, func_69(306), 0f);
			unk_0x13BE64B38F002613(2, func_69(307), 0f);
			unk_0x13BE64B38F002613(134, func_69(308), 0f);
			unk_0x13BE64B38F002613(87, func_69(309), 0f);
			unk_0x13BE64B38F002613(1, func_69(310), 0f);
			unk_0x13BE64B38F002613(92, func_69(311), 0f);
			unk_0x13BE64B38F002613(5, func_69(312), 0f);
			unk_0x13BE64B38F002613(142, func_69(313), 0f);
			unk_0x13BE64B38F002613(135, func_69(314), 0f);
			unk_0x13BE64B38F002613(136, func_69(315), 0f);
			unk_0x13BE64B38F002613(132, func_69(316), 0f);
			vVar0.x = 626;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(127, func_69(306), 0f);
			unk_0x13BE64B38F002613(2, func_69(307), 0f);
			unk_0x13BE64B38F002613(134, func_69(308), 0f);
			unk_0x13BE64B38F002613(87, func_69(309), 0f);
			unk_0x13BE64B38F002613(1, func_69(310), 0f);
			unk_0x13BE64B38F002613(92, func_69(311), 0f);
			unk_0x13BE64B38F002613(5, func_69(312), 0f);
			unk_0x13BE64B38F002613(142, func_69(313), 0f);
			unk_0x13BE64B38F002613(135, func_69(314), 0f);
			unk_0x13BE64B38F002613(136, func_69(315), 0f);
			unk_0x13BE64B38F002613(132, func_69(316), 0f);
			return;
		
		case 33:
			vVar0.x = 741;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(317), 0f);
			unk_0x13BE64B38F002613(7, func_69(318), 0f);
			unk_0x13BE64B38F002613(95, func_69(319), 0f);
			unk_0x13BE64B38F002613(138, func_69(320), 0f);
			unk_0x13BE64B38F002613(132, func_69(321), 0f);
			vVar0.x = 740;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(317), 0f);
			unk_0x13BE64B38F002613(7, func_69(318), 0f);
			unk_0x13BE64B38F002613(95, func_69(319), 0f);
			unk_0x13BE64B38F002613(138, func_69(320), 0f);
			unk_0x13BE64B38F002613(132, func_69(321), 0f);
			return;
		
		case 34:
			vVar0.x = 745;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(322), 0f);
			unk_0x13BE64B38F002613(7, func_69(323), 0f);
			unk_0x13BE64B38F002613(95, func_69(324), 0f);
			unk_0x13BE64B38F002613(132, func_69(325), 0f);
			vVar0.x = 742;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(322), 0f);
			unk_0x13BE64B38F002613(7, func_69(323), 0f);
			unk_0x13BE64B38F002613(95, func_69(324), 0f);
			unk_0x13BE64B38F002613(132, func_69(325), 0f);
			return;
		
		case 39:
			vVar0.x = 658;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(133, func_69(326), 0f);
			unk_0x13BE64B38F002613(92, func_69(327), 0f);
			unk_0x13BE64B38F002613(5, func_69(328), 0f);
			unk_0x13BE64B38F002613(127, func_69(329), 0f);
			unk_0x13BE64B38F002613(87, func_69(330), 0f);
			unk_0x13BE64B38F002613(1, func_69(331), 0f);
			unk_0x13BE64B38F002613(138, func_69(332), 0f);
			unk_0x13BE64B38F002613(142, func_69(333), 0f);
			unk_0x13BE64B38F002613(7, func_69(334), 0f);
			unk_0x13BE64B38F002613(95, func_69(335), 0f);
			unk_0x13BE64B38F002613(2, func_69(336), 0f);
			unk_0x13BE64B38F002613(132, func_69(337), 0f);
			vVar0.x = 657;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(133, func_69(326), 0f);
			unk_0x13BE64B38F002613(92, func_69(327), 0f);
			unk_0x13BE64B38F002613(5, func_69(328), 0f);
			unk_0x13BE64B38F002613(127, func_69(329), 0f);
			unk_0x13BE64B38F002613(87, func_69(330), 0f);
			unk_0x13BE64B38F002613(1, func_69(331), 0f);
			unk_0x13BE64B38F002613(138, func_69(332), 0f);
			unk_0x13BE64B38F002613(142, func_69(333), 0f);
			unk_0x13BE64B38F002613(7, func_69(334), 0f);
			unk_0x13BE64B38F002613(95, func_69(335), 0f);
			unk_0x13BE64B38F002613(2, func_69(336), 0f);
			unk_0x13BE64B38F002613(132, func_69(337), 0f);
			return;
		
		case 40:
			vVar0.x = 581;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(7, func_69(338), 0f);
			unk_0x13BE64B38F002613(138, func_69(339), 0f);
			unk_0x13BE64B38F002613(90, func_69(340), 0f);
			unk_0x13BE64B38F002613(132, func_69(341), 0f);
			unk_0x13BE64B38F002613(140, func_69(342), 0f);
			unk_0x13BE64B38F002613(142, func_69(343), 0f);
			unk_0x13BE64B38F002613(133, func_69(344), 0f);
			unk_0x13BE64B38F002613(2, func_69(345), 0f);
			vVar0.x = 580;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(7, func_69(338), 0f);
			unk_0x13BE64B38F002613(138, func_69(339), 0f);
			unk_0x13BE64B38F002613(90, func_69(340), 0f);
			unk_0x13BE64B38F002613(132, func_69(341), 0f);
			unk_0x13BE64B38F002613(140, func_69(342), 0f);
			unk_0x13BE64B38F002613(142, func_69(343), 0f);
			unk_0x13BE64B38F002613(133, func_69(344), 0f);
			unk_0x13BE64B38F002613(2, func_69(345), 0f);
			return;
		
		case 41:
			vVar0.x = 619;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(346), 0f);
			unk_0x13BE64B38F002613(134, func_69(347), 0f);
			unk_0x13BE64B38F002613(7, func_69(348), 0f);
			unk_0x13BE64B38F002613(135, func_69(349), 0f);
			unk_0x13BE64B38F002613(90, func_69(350), 0f);
			unk_0x13BE64B38F002613(136, func_69(351), 0f);
			unk_0x13BE64B38F002613(92, func_69(352), 0f);
			unk_0x13BE64B38F002613(1, func_69(353), 0f);
			unk_0x13BE64B38F002613(5, func_69(354), 0f);
			unk_0x13BE64B38F002613(127, func_69(355), 0f);
			unk_0x13BE64B38F002613(142, func_69(356), 0f);
			unk_0x13BE64B38F002613(87, func_69(357), 0f);
			unk_0x13BE64B38F002613(138, func_69(358), 0f);
			unk_0x13BE64B38F002613(132, func_69(359), 0f);
			vVar0.x = 618;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(346), 0f);
			unk_0x13BE64B38F002613(134, func_69(347), 0f);
			unk_0x13BE64B38F002613(7, func_69(348), 0f);
			unk_0x13BE64B38F002613(135, func_69(349), 0f);
			unk_0x13BE64B38F002613(90, func_69(350), 0f);
			unk_0x13BE64B38F002613(136, func_69(351), 0f);
			unk_0x13BE64B38F002613(92, func_69(352), 0f);
			unk_0x13BE64B38F002613(1, func_69(353), 0f);
			unk_0x13BE64B38F002613(5, func_69(354), 0f);
			unk_0x13BE64B38F002613(127, func_69(355), 0f);
			unk_0x13BE64B38F002613(142, func_69(356), 0f);
			unk_0x13BE64B38F002613(87, func_69(357), 0f);
			unk_0x13BE64B38F002613(138, func_69(358), 0f);
			unk_0x13BE64B38F002613(132, func_69(359), 0f);
			return;
		
		case 42:
			vVar0.x = 704;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(127, func_69(360), 0f);
			unk_0x13BE64B38F002613(7, func_69(361), 0f);
			unk_0x13BE64B38F002613(95, func_69(362), 0f);
			unk_0x13BE64B38F002613(92, func_69(363), 0f);
			unk_0x13BE64B38F002613(87, func_69(364), 0f);
			unk_0x13BE64B38F002613(1, func_69(365), 0f);
			unk_0x13BE64B38F002613(5, func_69(366), 0f);
			unk_0x13BE64B38F002613(132, func_69(367), 0f);
			unk_0x13BE64B38F002613(90, func_69(368), 0f);
			unk_0x13BE64B38F002613(142, func_69(369), 0f);
			unk_0x13BE64B38F002613(133, func_69(370), 0f);
			unk_0x13BE64B38F002613(2, func_69(371), 0f);
			vVar0.x = 703;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(127, func_69(360), 0f);
			unk_0x13BE64B38F002613(7, func_69(361), 0f);
			unk_0x13BE64B38F002613(95, func_69(362), 0f);
			unk_0x13BE64B38F002613(92, func_69(363), 0f);
			unk_0x13BE64B38F002613(87, func_69(364), 0f);
			unk_0x13BE64B38F002613(1, func_69(365), 0f);
			unk_0x13BE64B38F002613(5, func_69(366), 0f);
			unk_0x13BE64B38F002613(132, func_69(367), 0f);
			unk_0x13BE64B38F002613(90, func_69(368), 0f);
			unk_0x13BE64B38F002613(142, func_69(369), 0f);
			unk_0x13BE64B38F002613(133, func_69(370), 0f);
			unk_0x13BE64B38F002613(2, func_69(371), 0f);
			return;
		
		case 43:
			vVar0.x = 593;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(1, func_69(372), 0f);
			unk_0x13BE64B38F002613(87, func_69(373), 0f);
			unk_0x13BE64B38F002613(127, func_69(374), 0f);
			unk_0x13BE64B38F002613(2, func_69(375), 0f);
			unk_0x13BE64B38F002613(7, func_69(376), 0f);
			unk_0x13BE64B38F002613(134, func_69(377), 0f);
			unk_0x13BE64B38F002613(90, func_69(378), 0f);
			unk_0x13BE64B38F002613(92, func_69(379), 0f);
			unk_0x13BE64B38F002613(5, func_69(380), 0f);
			unk_0x13BE64B38F002613(138, func_69(381), 0f);
			unk_0x13BE64B38F002613(136, func_69(382), 0f);
			unk_0x13BE64B38F002613(132, func_69(383), 0f);
			vVar0.x = 592;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(1, func_69(372), 0f);
			unk_0x13BE64B38F002613(87, func_69(373), 0f);
			unk_0x13BE64B38F002613(127, func_69(374), 0f);
			unk_0x13BE64B38F002613(2, func_69(375), 0f);
			unk_0x13BE64B38F002613(7, func_69(376), 0f);
			unk_0x13BE64B38F002613(134, func_69(377), 0f);
			unk_0x13BE64B38F002613(90, func_69(378), 0f);
			unk_0x13BE64B38F002613(92, func_69(379), 0f);
			unk_0x13BE64B38F002613(5, func_69(380), 0f);
			unk_0x13BE64B38F002613(138, func_69(381), 0f);
			unk_0x13BE64B38F002613(136, func_69(382), 0f);
			unk_0x13BE64B38F002613(132, func_69(383), 0f);
			return;
		
		case 44:
			vVar0.x = 589;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(384), 0f);
			unk_0x13BE64B38F002613(138, func_69(385), 0f);
			unk_0x13BE64B38F002613(7, func_69(386), 0f);
			unk_0x13BE64B38F002613(133, func_69(387), 0f);
			unk_0x13BE64B38F002613(90, func_69(388), 0f);
			unk_0x13BE64B38F002613(134, func_69(389), 0f);
			unk_0x13BE64B38F002613(135, func_69(390), 0f);
			unk_0x13BE64B38F002613(139, func_69(391), 0f);
			unk_0x13BE64B38F002613(132, func_69(392), 0f);
			vVar0.x = 588;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(384), 0f);
			unk_0x13BE64B38F002613(138, func_69(385), 0f);
			unk_0x13BE64B38F002613(7, func_69(386), 0f);
			unk_0x13BE64B38F002613(133, func_69(387), 0f);
			unk_0x13BE64B38F002613(90, func_69(388), 0f);
			unk_0x13BE64B38F002613(134, func_69(389), 0f);
			unk_0x13BE64B38F002613(135, func_69(390), 0f);
			unk_0x13BE64B38F002613(139, func_69(391), 0f);
			unk_0x13BE64B38F002613(132, func_69(392), 0f);
			return;
		
		case 45:
			vVar0.x = 635;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(133, func_69(393), 0f);
			unk_0x13BE64B38F002613(134, func_69(394), 0f);
			unk_0x13BE64B38F002613(135, func_69(395), 0f);
			unk_0x13BE64B38F002613(2, func_69(396), 0f);
			unk_0x13BE64B38F002613(7, func_69(397), 0f);
			unk_0x13BE64B38F002613(132, func_69(398), 0f);
			unk_0x13BE64B38F002613(139, func_69(399), 0f);
			vVar0.x = 634;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(133, func_69(393), 0f);
			unk_0x13BE64B38F002613(134, func_69(394), 0f);
			unk_0x13BE64B38F002613(135, func_69(395), 0f);
			unk_0x13BE64B38F002613(2, func_69(396), 0f);
			unk_0x13BE64B38F002613(7, func_69(397), 0f);
			unk_0x13BE64B38F002613(132, func_69(398), 0f);
			unk_0x13BE64B38F002613(139, func_69(399), 0f);
			return;
		
		case 46:
			vVar0.x = 669;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(400), 0f);
			unk_0x13BE64B38F002613(87, func_69(401), 0f);
			unk_0x13BE64B38F002613(92, func_69(402), 0f);
			unk_0x13BE64B38F002613(5, func_69(403), 0f);
			unk_0x13BE64B38F002613(1, func_69(404), 0f);
			unk_0x13BE64B38F002613(138, func_69(405), 0f);
			unk_0x13BE64B38F002613(7, func_69(406), 0f);
			unk_0x13BE64B38F002613(95, func_69(407), 0f);
			unk_0x13BE64B38F002613(90, func_69(408), 0f);
			unk_0x13BE64B38F002613(133, func_69(409), 0f);
			unk_0x13BE64B38F002613(127, func_69(410), 0f);
			unk_0x13BE64B38F002613(132, func_69(411), 0f);
			unk_0x13BE64B38F002613(134, func_69(412), 0f);
			vVar0.x = 668;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(400), 0f);
			unk_0x13BE64B38F002613(87, func_69(401), 0f);
			unk_0x13BE64B38F002613(92, func_69(402), 0f);
			unk_0x13BE64B38F002613(5, func_69(403), 0f);
			unk_0x13BE64B38F002613(1, func_69(404), 0f);
			unk_0x13BE64B38F002613(138, func_69(405), 0f);
			unk_0x13BE64B38F002613(7, func_69(406), 0f);
			unk_0x13BE64B38F002613(95, func_69(407), 0f);
			unk_0x13BE64B38F002613(90, func_69(408), 0f);
			unk_0x13BE64B38F002613(133, func_69(409), 0f);
			unk_0x13BE64B38F002613(127, func_69(410), 0f);
			unk_0x13BE64B38F002613(132, func_69(411), 0f);
			unk_0x13BE64B38F002613(134, func_69(412), 0f);
			return;
		
		case 47:
			vVar0.x = 673;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(142, func_69(413), 0f);
			unk_0x13BE64B38F002613(1, func_69(414), 0f);
			unk_0x13BE64B38F002613(87, func_69(415), 0f);
			unk_0x13BE64B38F002613(138, func_69(416), 0f);
			unk_0x13BE64B38F002613(133, func_69(417), 0f);
			unk_0x13BE64B38F002613(7, func_69(418), 0f);
			unk_0x13BE64B38F002613(90, func_69(419), 0f);
			unk_0x13BE64B38F002613(92, func_69(420), 0f);
			unk_0x13BE64B38F002613(5, func_69(421), 0f);
			unk_0x13BE64B38F002613(127, func_69(422), 0f);
			unk_0x13BE64B38F002613(139, func_69(423), 0f);
			unk_0x13BE64B38F002613(134, func_69(424), 0f);
			unk_0x13BE64B38F002613(141, func_69(425), 0f);
			unk_0x13BE64B38F002613(137, func_69(426), 0f);
			unk_0x13BE64B38F002613(132, func_69(427), 0f);
			unk_0x13BE64B38F002613(2, func_69(428), 0f);
			vVar0.x = 672;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(142, func_69(413), 0f);
			unk_0x13BE64B38F002613(1, func_69(414), 0f);
			unk_0x13BE64B38F002613(87, func_69(415), 0f);
			unk_0x13BE64B38F002613(138, func_69(416), 0f);
			unk_0x13BE64B38F002613(133, func_69(417), 0f);
			unk_0x13BE64B38F002613(7, func_69(418), 0f);
			unk_0x13BE64B38F002613(90, func_69(419), 0f);
			unk_0x13BE64B38F002613(92, func_69(420), 0f);
			unk_0x13BE64B38F002613(5, func_69(421), 0f);
			unk_0x13BE64B38F002613(127, func_69(422), 0f);
			unk_0x13BE64B38F002613(139, func_69(423), 0f);
			unk_0x13BE64B38F002613(134, func_69(424), 0f);
			unk_0x13BE64B38F002613(141, func_69(425), 0f);
			unk_0x13BE64B38F002613(135, func_69(426), 0f);
			unk_0x13BE64B38F002613(132, func_69(427), 0f);
			unk_0x13BE64B38F002613(2, func_69(428), 0f);
			return;
		
		case 48:
			vVar0.x = 694;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(429), 0f);
			unk_0x13BE64B38F002613(92, func_69(430), 0f);
			unk_0x13BE64B38F002613(87, func_69(431), 0f);
			unk_0x13BE64B38F002613(5, func_69(432), 0f);
			unk_0x13BE64B38F002613(1, func_69(433), 0f);
			unk_0x13BE64B38F002613(7, func_69(434), 0f);
			unk_0x13BE64B38F002613(95, func_69(435), 0f);
			unk_0x13BE64B38F002613(132, func_69(436), 0f);
			unk_0x13BE64B38F002613(142, func_69(437), 0f);
			unk_0x13BE64B38F002613(90, func_69(438), 0f);
			unk_0x13BE64B38F002613(133, func_69(439), 0f);
			unk_0x13BE64B38F002613(134, func_69(440), 0f);
			vVar0.x = 693;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(429), 0f);
			unk_0x13BE64B38F002613(92, func_69(430), 0f);
			unk_0x13BE64B38F002613(87, func_69(431), 0f);
			unk_0x13BE64B38F002613(5, func_69(432), 0f);
			unk_0x13BE64B38F002613(1, func_69(433), 0f);
			unk_0x13BE64B38F002613(7, func_69(434), 0f);
			unk_0x13BE64B38F002613(95, func_69(435), 0f);
			unk_0x13BE64B38F002613(132, func_69(436), 0f);
			unk_0x13BE64B38F002613(142, func_69(437), 0f);
			unk_0x13BE64B38F002613(90, func_69(438), 0f);
			unk_0x13BE64B38F002613(133, func_69(439), 0f);
			unk_0x13BE64B38F002613(134, func_69(440), 0f);
			return;
		
		case 49:
			vVar0.x = 702;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(441), 0f);
			unk_0x13BE64B38F002613(7, func_69(442), 0f);
			unk_0x13BE64B38F002613(95, func_69(443), 0f);
			unk_0x13BE64B38F002613(127, func_69(444), 0f);
			unk_0x13BE64B38F002613(92, func_69(445), 0f);
			unk_0x13BE64B38F002613(87, func_69(446), 0f);
			unk_0x13BE64B38F002613(1, func_69(447), 0f);
			unk_0x13BE64B38F002613(5, func_69(448), 0f);
			unk_0x13BE64B38F002613(132, func_69(449), 0f);
			unk_0x13BE64B38F002613(138, func_69(450), 0f);
			unk_0x13BE64B38F002613(90, func_69(451), 0f);
			unk_0x13BE64B38F002613(133, func_69(452), 0f);
			unk_0x13BE64B38F002613(134, func_69(453), 0f);
			vVar0.x = 701;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(441), 0f);
			unk_0x13BE64B38F002613(7, func_69(442), 0f);
			unk_0x13BE64B38F002613(95, func_69(443), 0f);
			unk_0x13BE64B38F002613(127, func_69(444), 0f);
			unk_0x13BE64B38F002613(92, func_69(445), 0f);
			unk_0x13BE64B38F002613(87, func_69(446), 0f);
			unk_0x13BE64B38F002613(1, func_69(447), 0f);
			unk_0x13BE64B38F002613(5, func_69(448), 0f);
			unk_0x13BE64B38F002613(132, func_69(449), 0f);
			unk_0x13BE64B38F002613(138, func_69(450), 0f);
			unk_0x13BE64B38F002613(90, func_69(451), 0f);
			unk_0x13BE64B38F002613(133, func_69(452), 0f);
			unk_0x13BE64B38F002613(134, func_69(453), 0f);
			return;
		
		case 53:
			vVar0.x = 714;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(95, func_69(454), 0f);
			unk_0x13BE64B38F002613(138, func_69(455), 0f);
			unk_0x13BE64B38F002613(139, func_69(456), 0f);
			unk_0x13BE64B38F002613(5, func_69(457), 0f);
			unk_0x13BE64B38F002613(92, func_69(458), 0f);
			unk_0x13BE64B38F002613(87, func_69(459), 0f);
			unk_0x13BE64B38F002613(1, func_69(460), 0f);
			unk_0x13BE64B38F002613(127, func_69(461), 0f);
			unk_0x13BE64B38F002613(133, func_69(462), 0f);
			unk_0x13BE64B38F002613(142, func_69(463), 0f);
			unk_0x13BE64B38F002613(2, func_69(464), 0f);
			unk_0x13BE64B38F002613(7, func_69(465), 0f);
			vVar0.x = 713;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(95, func_69(454), 0f);
			unk_0x13BE64B38F002613(138, func_69(455), 0f);
			unk_0x13BE64B38F002613(139, func_69(456), 0f);
			unk_0x13BE64B38F002613(5, func_69(457), 0f);
			unk_0x13BE64B38F002613(92, func_69(458), 0f);
			unk_0x13BE64B38F002613(87, func_69(459), 0f);
			unk_0x13BE64B38F002613(1, func_69(460), 0f);
			unk_0x13BE64B38F002613(127, func_69(461), 0f);
			unk_0x13BE64B38F002613(133, func_69(462), 0f);
			unk_0x13BE64B38F002613(142, func_69(463), 0f);
			unk_0x13BE64B38F002613(2, func_69(464), 0f);
			unk_0x13BE64B38F002613(7, func_69(465), 0f);
			return;
		
		case 60:
			vVar0.x = 809;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(466), 0f);
			unk_0x13BE64B38F002613(132, func_69(467), 0f);
			unk_0x13BE64B38F002613(133, func_69(468), 0f);
			unk_0x13BE64B38F002613(7, func_69(469), 0f);
			unk_0x13BE64B38F002613(127, func_69(470), 0f);
			unk_0x13BE64B38F002613(5, func_69(471), 0f);
			unk_0x13BE64B38F002613(90, func_69(472), 0f);
			unk_0x13BE64B38F002613(87, func_69(473), 0f);
			vVar0.x = 808;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(466), 0f);
			unk_0x13BE64B38F002613(132, func_69(467), 0f);
			unk_0x13BE64B38F002613(133, func_69(468), 0f);
			unk_0x13BE64B38F002613(7, func_69(469), 0f);
			unk_0x13BE64B38F002613(127, func_69(470), 0f);
			unk_0x13BE64B38F002613(5, func_69(471), 0f);
			unk_0x13BE64B38F002613(90, func_69(472), 0f);
			unk_0x13BE64B38F002613(87, func_69(473), 0f);
			return;
		
		case 61:
			vVar0.x = 637;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(474), 0f);
			unk_0x13BE64B38F002613(87, func_69(475), 0f);
			unk_0x13BE64B38F002613(127, func_69(476), 0f);
			unk_0x13BE64B38F002613(133, func_69(477), 0f);
			unk_0x13BE64B38F002613(1, func_69(478), 0f);
			unk_0x13BE64B38F002613(7, func_69(479), 0f);
			unk_0x13BE64B38F002613(5, func_69(480), 0f);
			unk_0x13BE64B38F002613(92, func_69(481), 0f);
			unk_0x13BE64B38F002613(139, func_69(482), 0f);
			unk_0x13BE64B38F002613(90, func_69(483), 0f);
			unk_0x13BE64B38F002613(138, func_69(484), 0f);
			unk_0x13BE64B38F002613(132, func_69(485), 0f);
			vVar0.x = 636;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(474), 0f);
			unk_0x13BE64B38F002613(87, func_69(475), 0f);
			unk_0x13BE64B38F002613(127, func_69(476), 0f);
			unk_0x13BE64B38F002613(133, func_69(477), 0f);
			unk_0x13BE64B38F002613(1, func_69(478), 0f);
			unk_0x13BE64B38F002613(7, func_69(479), 0f);
			unk_0x13BE64B38F002613(5, func_69(480), 0f);
			unk_0x13BE64B38F002613(92, func_69(481), 0f);
			unk_0x13BE64B38F002613(139, func_69(482), 0f);
			unk_0x13BE64B38F002613(90, func_69(483), 0f);
			unk_0x13BE64B38F002613(138, func_69(484), 0f);
			unk_0x13BE64B38F002613(132, func_69(485), 0f);
			return;
		
		case 62:
			vVar0.x = 599;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(136, func_69(486), 0f);
			unk_0x13BE64B38F002613(87, func_69(487), 0f);
			unk_0x13BE64B38F002613(2, func_69(488), 0f);
			unk_0x13BE64B38F002613(133, func_69(489), 0f);
			unk_0x13BE64B38F002613(137, func_69(490), 0f);
			unk_0x13BE64B38F002613(7, func_69(491), 0f);
			unk_0x13BE64B38F002613(134, func_69(492), 0f);
			unk_0x13BE64B38F002613(90, func_69(493), 0f);
			unk_0x13BE64B38F002613(92, func_69(494), 0f);
			unk_0x13BE64B38F002613(127, func_69(495), 0f);
			unk_0x13BE64B38F002613(132, func_69(496), 0f);
			unk_0x13BE64B38F002613(5, func_69(497), 0f);
			unk_0x13BE64B38F002613(1, func_69(498), 0f);
			vVar0.x = 598;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(136, func_69(486), 0f);
			unk_0x13BE64B38F002613(87, func_69(487), 0f);
			unk_0x13BE64B38F002613(2, func_69(488), 0f);
			unk_0x13BE64B38F002613(133, func_69(489), 0f);
			unk_0x13BE64B38F002613(137, func_69(490), 0f);
			unk_0x13BE64B38F002613(7, func_69(491), 0f);
			unk_0x13BE64B38F002613(134, func_69(492), 0f);
			unk_0x13BE64B38F002613(90, func_69(493), 0f);
			unk_0x13BE64B38F002613(92, func_69(494), 0f);
			unk_0x13BE64B38F002613(127, func_69(495), 0f);
			unk_0x13BE64B38F002613(132, func_69(496), 0f);
			unk_0x13BE64B38F002613(5, func_69(497), 0f);
			unk_0x13BE64B38F002613(1, func_69(498), 0f);
			return;
		
		case 63:
			vVar0.x = 601;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(87, func_69(499), 0f);
			unk_0x13BE64B38F002613(2, func_69(500), 0f);
			unk_0x13BE64B38F002613(134, func_69(501), 0f);
			unk_0x13BE64B38F002613(135, func_69(502), 0f);
			unk_0x13BE64B38F002613(138, func_69(503), 0f);
			unk_0x13BE64B38F002613(7, func_69(504), 0f);
			unk_0x13BE64B38F002613(95, func_69(505), 0f);
			unk_0x13BE64B38F002613(90, func_69(506), 0f);
			unk_0x13BE64B38F002613(92, func_69(507), 0f);
			unk_0x13BE64B38F002613(127, func_69(508), 0f);
			unk_0x13BE64B38F002613(132, func_69(509), 0f);
			unk_0x13BE64B38F002613(5, func_69(510), 0f);
			unk_0x13BE64B38F002613(137, func_69(511), 0f);
			unk_0x13BE64B38F002613(136, func_69(512), 0f);
			unk_0x13BE64B38F002613(133, func_69(513), 0f);
			unk_0x13BE64B38F002613(9, func_69(514), 0f);
			vVar0.x = 600;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(87, func_69(499), 0f);
			unk_0x13BE64B38F002613(2, func_69(500), 0f);
			unk_0x13BE64B38F002613(134, func_69(501), 0f);
			unk_0x13BE64B38F002613(135, func_69(502), 0f);
			unk_0x13BE64B38F002613(138, func_69(503), 0f);
			unk_0x13BE64B38F002613(7, func_69(504), 0f);
			unk_0x13BE64B38F002613(95, func_69(505), 0f);
			unk_0x13BE64B38F002613(90, func_69(506), 0f);
			unk_0x13BE64B38F002613(92, func_69(507), 0f);
			unk_0x13BE64B38F002613(127, func_69(508), 0f);
			unk_0x13BE64B38F002613(132, func_69(509), 0f);
			unk_0x13BE64B38F002613(5, func_69(510), 0f);
			unk_0x13BE64B38F002613(137, func_69(511), 0f);
			unk_0x13BE64B38F002613(136, func_69(512), 0f);
			unk_0x13BE64B38F002613(133, func_69(513), 0f);
			unk_0x13BE64B38F002613(9, func_69(514), 0f);
			return;
		
		case 64:
			vVar0.x = 607;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(87, func_69(515), 0f);
			unk_0x13BE64B38F002613(137, func_69(516), 0f);
			unk_0x13BE64B38F002613(127, func_69(517), 0f);
			unk_0x13BE64B38F002613(133, func_69(518), 0f);
			unk_0x13BE64B38F002613(135, func_69(519), 0f);
			unk_0x13BE64B38F002613(92, func_69(520), 0f);
			unk_0x13BE64B38F002613(90, func_69(521), 0f);
			unk_0x13BE64B38F002613(132, func_69(522), 0f);
			unk_0x13BE64B38F002613(5, func_69(523), 0f);
			unk_0x13BE64B38F002613(1, func_69(524), 0f);
			unk_0x13BE64B38F002613(136, func_69(525), 0f);
			unk_0x13BE64B38F002613(2, func_69(526), 0f);
			vVar0.x = 606;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(87, func_69(515), 0f);
			unk_0x13BE64B38F002613(137, func_69(516), 0f);
			unk_0x13BE64B38F002613(127, func_69(517), 0f);
			unk_0x13BE64B38F002613(133, func_69(518), 0f);
			unk_0x13BE64B38F002613(135, func_69(519), 0f);
			unk_0x13BE64B38F002613(92, func_69(520), 0f);
			unk_0x13BE64B38F002613(90, func_69(521), 0f);
			unk_0x13BE64B38F002613(132, func_69(522), 0f);
			unk_0x13BE64B38F002613(5, func_69(523), 0f);
			unk_0x13BE64B38F002613(1, func_69(524), 0f);
			unk_0x13BE64B38F002613(136, func_69(525), 0f);
			unk_0x13BE64B38F002613(2, func_69(526), 0f);
			return;
		
		case 66:
			vVar0.x = 680;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(133, func_69(527), 0f);
			unk_0x13BE64B38F002613(134, func_69(528), 0f);
			unk_0x13BE64B38F002613(2, func_69(529), 0f);
			unk_0x13BE64B38F002613(7, func_69(530), 0f);
			unk_0x13BE64B38F002613(95, func_69(531), 0f);
			unk_0x13BE64B38F002613(90, func_69(532), 0f);
			unk_0x13BE64B38F002613(132, func_69(533), 0f);
			vVar0.x = 676;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(133, func_69(527), 0f);
			unk_0x13BE64B38F002613(134, func_69(528), 0f);
			unk_0x13BE64B38F002613(2, func_69(529), 0f);
			unk_0x13BE64B38F002613(7, func_69(530), 0f);
			unk_0x13BE64B38F002613(95, func_69(531), 0f);
			unk_0x13BE64B38F002613(90, func_69(532), 0f);
			unk_0x13BE64B38F002613(132, func_69(533), 0f);
			return;
		
		case 67:
			vVar0.x = 679;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(139, func_69(534), 0f);
			unk_0x13BE64B38F002613(127, func_69(535), 0f);
			unk_0x13BE64B38F002613(90, func_69(536), 0f);
			unk_0x13BE64B38F002613(133, func_69(537), 0f);
			unk_0x13BE64B38F002613(2, func_69(538), 0f);
			unk_0x13BE64B38F002613(132, func_69(539), 0f);
			vVar0.x = 678;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(139, func_69(534), 0f);
			unk_0x13BE64B38F002613(127, func_69(535), 0f);
			unk_0x13BE64B38F002613(90, func_69(536), 0f);
			unk_0x13BE64B38F002613(133, func_69(537), 0f);
			unk_0x13BE64B38F002613(2, func_69(538), 0f);
			unk_0x13BE64B38F002613(132, func_69(539), 0f);
			return;
		
		case 68:
			vVar0.x = 725;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(95, func_69(540), 0f);
			unk_0x13BE64B38F002613(139, func_69(541), 0f);
			unk_0x13BE64B38F002613(90, func_69(542), 0f);
			unk_0x13BE64B38F002613(133, func_69(543), 0f);
			unk_0x13BE64B38F002613(7, func_69(544), 0f);
			unk_0x13BE64B38F002613(2, func_69(545), 0f);
			unk_0x13BE64B38F002613(132, func_69(546), 0f);
			vVar0.x = 724;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(95, func_69(540), 0f);
			unk_0x13BE64B38F002613(139, func_69(541), 0f);
			unk_0x13BE64B38F002613(90, func_69(542), 0f);
			unk_0x13BE64B38F002613(133, func_69(543), 0f);
			unk_0x13BE64B38F002613(7, func_69(544), 0f);
			unk_0x13BE64B38F002613(2, func_69(545), 0f);
			unk_0x13BE64B38F002613(132, func_69(546), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 69:
			vVar0.x = 686;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(92, func_69(547), 0f);
			unk_0x13BE64B38F002613(87, func_69(548), 0f);
			unk_0x13BE64B38F002613(5, func_69(549), 0f);
			unk_0x13BE64B38F002613(1, func_69(550), 0f);
			unk_0x13BE64B38F002613(127, func_69(551), 0f);
			unk_0x13BE64B38F002613(7, func_69(552), 0f);
			unk_0x13BE64B38F002613(136, func_69(553), 0f);
			unk_0x13BE64B38F002613(142, func_69(554), 0f);
			unk_0x13BE64B38F002613(90, func_69(555), 0f);
			unk_0x13BE64B38F002613(132, func_69(556), 0f);
			unk_0x13BE64B38F002613(2, func_69(557), 0f);
			unk_0x13BE64B38F002613(137, func_69(558), 0f);
			unk_0x13BE64B38F002613(138, func_69(559), 0f);
			unk_0x13BE64B38F002613(139, func_69(560), 0f);
			vVar0.x = 681;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(92, func_69(547), 0f);
			unk_0x13BE64B38F002613(87, func_69(548), 0f);
			unk_0x13BE64B38F002613(5, func_69(549), 0f);
			unk_0x13BE64B38F002613(1, func_69(550), 0f);
			unk_0x13BE64B38F002613(127, func_69(551), 0f);
			unk_0x13BE64B38F002613(7, func_69(552), 0f);
			unk_0x13BE64B38F002613(136, func_69(553), 0f);
			unk_0x13BE64B38F002613(142, func_69(554), 0f);
			unk_0x13BE64B38F002613(90, func_69(555), 0f);
			unk_0x13BE64B38F002613(132, func_69(556), 0f);
			unk_0x13BE64B38F002613(2, func_69(557), 0f);
			unk_0x13BE64B38F002613(137, func_69(558), 0f);
			unk_0x13BE64B38F002613(138, func_69(559), 0f);
			unk_0x13BE64B38F002613(139, func_69(560), 0f);
			return;
		
		case 70:
			vVar0.x = 721;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(142, func_69(561), 0f);
			unk_0x13BE64B38F002613(132, func_69(562), 0f);
			unk_0x13BE64B38F002613(95, func_69(563), 0f);
			unk_0x13BE64B38F002613(92, func_69(564), 0f);
			unk_0x13BE64B38F002613(90, func_69(565), 0f);
			unk_0x13BE64B38F002613(87, func_69(566), 0f);
			unk_0x13BE64B38F002613(127, func_69(567), 0f);
			unk_0x13BE64B38F002613(7, func_69(568), 0f);
			unk_0x13BE64B38F002613(5, func_69(569), 0f);
			unk_0x13BE64B38F002613(1, func_69(570), 0f);
			unk_0x13BE64B38F002613(138, func_69(571), 0f);
			unk_0x13BE64B38F002613(136, func_69(572), 0f);
			unk_0x13BE64B38F002613(137, func_69(573), 0f);
			unk_0x13BE64B38F002613(139, func_69(574), 0f);
			unk_0x13BE64B38F002613(2, func_69(575), 0f);
			vVar0.x = 720;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(142, func_69(561), 0f);
			unk_0x13BE64B38F002613(132, func_69(562), 0f);
			unk_0x13BE64B38F002613(95, func_69(563), 0f);
			unk_0x13BE64B38F002613(92, func_69(564), 0f);
			unk_0x13BE64B38F002613(90, func_69(565), 0f);
			unk_0x13BE64B38F002613(87, func_69(566), 0f);
			unk_0x13BE64B38F002613(127, func_69(567), 0f);
			unk_0x13BE64B38F002613(7, func_69(568), 0f);
			unk_0x13BE64B38F002613(5, func_69(569), 0f);
			unk_0x13BE64B38F002613(1, func_69(570), 0f);
			unk_0x13BE64B38F002613(138, func_69(571), 0f);
			unk_0x13BE64B38F002613(136, func_69(572), 0f);
			unk_0x13BE64B38F002613(137, func_69(573), 0f);
			unk_0x13BE64B38F002613(139, func_69(574), 0f);
			unk_0x13BE64B38F002613(2, func_69(575), 0f);
			return;
		
		case 71:
			vVar0.x = 617;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(576), 0f);
			unk_0x13BE64B38F002613(135, func_69(577), 0f);
			unk_0x13BE64B38F002613(136, func_69(578), 0f);
			unk_0x13BE64B38F002613(137, func_69(579), 0f);
			unk_0x13BE64B38F002613(7, func_69(580), 0f);
			unk_0x13BE64B38F002613(90, func_69(581), 0f);
			unk_0x13BE64B38F002613(133, func_69(582), 0f);
			unk_0x13BE64B38F002613(138, func_69(583), 0f);
			unk_0x13BE64B38F002613(139, func_69(584), 0f);
			unk_0x13BE64B38F002613(134, func_69(585), 0f);
			unk_0x13BE64B38F002613(132, func_69(586), 0f);
			vVar0.x = 616;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(576), 0f);
			unk_0x13BE64B38F002613(135, func_69(577), 0f);
			unk_0x13BE64B38F002613(136, func_69(578), 0f);
			unk_0x13BE64B38F002613(137, func_69(579), 0f);
			unk_0x13BE64B38F002613(7, func_69(580), 0f);
			unk_0x13BE64B38F002613(90, func_69(581), 0f);
			unk_0x13BE64B38F002613(133, func_69(582), 0f);
			unk_0x13BE64B38F002613(138, func_69(583), 0f);
			unk_0x13BE64B38F002613(139, func_69(584), 0f);
			unk_0x13BE64B38F002613(134, func_69(585), 0f);
			unk_0x13BE64B38F002613(132, func_69(586), 0f);
			return;
		
		case 72:
			vVar0.x = 727;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(138, func_69(587), 0f);
			unk_0x13BE64B38F002613(133, func_69(588), 0f);
			unk_0x13BE64B38F002613(5, func_69(589), 0f);
			unk_0x13BE64B38F002613(135, func_69(590), 0f);
			unk_0x13BE64B38F002613(90, func_69(591), 0f);
			unk_0x13BE64B38F002613(2, func_69(592), 0f);
			unk_0x13BE64B38F002613(136, func_69(593), 0f);
			unk_0x13BE64B38F002613(132, func_69(594), 0f);
			vVar0.x = 726;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(138, func_69(587), 0f);
			unk_0x13BE64B38F002613(133, func_69(588), 0f);
			unk_0x13BE64B38F002613(5, func_69(589), 0f);
			unk_0x13BE64B38F002613(135, func_69(590), 0f);
			unk_0x13BE64B38F002613(90, func_69(591), 0f);
			unk_0x13BE64B38F002613(2, func_69(592), 0f);
			unk_0x13BE64B38F002613(136, func_69(593), 0f);
			unk_0x13BE64B38F002613(132, func_69(594), 0f);
			return;
		
		case 73:
			vVar0.x = 729;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(92, func_69(595), 0f);
			unk_0x13BE64B38F002613(1, func_69(596), 0f);
			unk_0x13BE64B38F002613(87, func_69(597), 0f);
			unk_0x13BE64B38F002613(5, func_69(598), 0f);
			unk_0x13BE64B38F002613(127, func_69(599), 0f);
			unk_0x13BE64B38F002613(138, func_69(600), 0f);
			unk_0x13BE64B38F002613(133, func_69(601), 0f);
			unk_0x13BE64B38F002613(139, func_69(602), 0f);
			unk_0x13BE64B38F002613(2, func_69(603), 0f);
			unk_0x13BE64B38F002613(132, func_69(604), 0f);
			vVar0.x = 728;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(92, func_69(595), 0f);
			unk_0x13BE64B38F002613(1, func_69(596), 0f);
			unk_0x13BE64B38F002613(87, func_69(597), 0f);
			unk_0x13BE64B38F002613(5, func_69(598), 0f);
			unk_0x13BE64B38F002613(127, func_69(599), 0f);
			unk_0x13BE64B38F002613(138, func_69(600), 0f);
			unk_0x13BE64B38F002613(133, func_69(601), 0f);
			unk_0x13BE64B38F002613(139, func_69(602), 0f);
			unk_0x13BE64B38F002613(2, func_69(603), 0f);
			unk_0x13BE64B38F002613(132, func_69(604), 0f);
			return;
		
		case 74:
			vVar0.x = 625;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(87, func_69(605), 0f);
			unk_0x13BE64B38F002613(1, func_69(606), 0f);
			unk_0x13BE64B38F002613(92, func_69(607), 0f);
			unk_0x13BE64B38F002613(127, func_69(608), 0f);
			unk_0x13BE64B38F002613(5, func_69(609), 0f);
			unk_0x13BE64B38F002613(133, func_69(610), 0f);
			unk_0x13BE64B38F002613(134, func_69(611), 0f);
			unk_0x13BE64B38F002613(142, func_69(612), 0f);
			unk_0x13BE64B38F002613(136, func_69(613), 0f);
			unk_0x13BE64B38F002613(7, func_69(614), 0f);
			unk_0x13BE64B38F002613(95, func_69(615), 0f);
			unk_0x13BE64B38F002613(138, func_69(616), 0f);
			unk_0x13BE64B38F002613(132, func_69(617), 0f);
			unk_0x13BE64B38F002613(2, func_69(618), 0f);
			unk_0x13BE64B38F002613(137, func_69(619), 0f);
			unk_0x13BE64B38F002613(139, func_69(620), 0f);
			vVar0.x = 624;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(87, func_69(605), 0f);
			unk_0x13BE64B38F002613(1, func_69(606), 0f);
			unk_0x13BE64B38F002613(92, func_69(607), 0f);
			unk_0x13BE64B38F002613(127, func_69(608), 0f);
			unk_0x13BE64B38F002613(5, func_69(609), 0f);
			unk_0x13BE64B38F002613(133, func_69(610), 0f);
			unk_0x13BE64B38F002613(134, func_69(611), 0f);
			unk_0x13BE64B38F002613(142, func_69(612), 0f);
			unk_0x13BE64B38F002613(136, func_69(613), 0f);
			unk_0x13BE64B38F002613(7, func_69(614), 0f);
			unk_0x13BE64B38F002613(95, func_69(615), 0f);
			unk_0x13BE64B38F002613(138, func_69(616), 0f);
			unk_0x13BE64B38F002613(132, func_69(617), 0f);
			unk_0x13BE64B38F002613(2, func_69(618), 0f);
			unk_0x13BE64B38F002613(137, func_69(619), 0f);
			unk_0x13BE64B38F002613(139, func_69(620), 0f);
			return;
		
		case 75:
			vVar0.x = 719;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(127, func_69(621), 0f);
			unk_0x13BE64B38F002613(133, func_69(622), 0f);
			unk_0x13BE64B38F002613(134, func_69(623), 0f);
			unk_0x13BE64B38F002613(142, func_69(624), 0f);
			unk_0x13BE64B38F002613(95, func_69(625), 0f);
			unk_0x13BE64B38F002613(136, func_69(626), 0f);
			unk_0x13BE64B38F002613(137, func_69(627), 0f);
			unk_0x13BE64B38F002613(138, func_69(628), 0f);
			unk_0x13BE64B38F002613(2, func_69(629), 0f);
			unk_0x13BE64B38F002613(132, func_69(630), 0f);
			unk_0x13BE64B38F002613(1, func_69(631), 0f);
			unk_0x13BE64B38F002613(135, func_69(632), 0f);
			unk_0x13BE64B38F002613(139, func_69(633), 0f);
			unk_0x13BE64B38F002613(92, func_69(634), 0f);
			unk_0x13BE64B38F002613(87, func_69(635), 0f);
			unk_0x13BE64B38F002613(5, func_69(636), 0f);
			vVar0.x = 718;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(127, func_69(621), 0f);
			unk_0x13BE64B38F002613(133, func_69(622), 0f);
			unk_0x13BE64B38F002613(134, func_69(623), 0f);
			unk_0x13BE64B38F002613(142, func_69(624), 0f);
			unk_0x13BE64B38F002613(95, func_69(625), 0f);
			unk_0x13BE64B38F002613(136, func_69(626), 0f);
			unk_0x13BE64B38F002613(137, func_69(627), 0f);
			unk_0x13BE64B38F002613(138, func_69(628), 0f);
			unk_0x13BE64B38F002613(2, func_69(629), 0f);
			unk_0x13BE64B38F002613(132, func_69(630), 0f);
			unk_0x13BE64B38F002613(1, func_69(631), 0f);
			unk_0x13BE64B38F002613(135, func_69(632), 0f);
			unk_0x13BE64B38F002613(139, func_69(633), 0f);
			unk_0x13BE64B38F002613(92, func_69(634), 0f);
			unk_0x13BE64B38F002613(87, func_69(635), 0f);
			unk_0x13BE64B38F002613(5, func_69(636), 0f);
			return;
		
		case 76:
			vVar0.x = 667;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(7, func_69(637), 0f);
			unk_0x13BE64B38F002613(133, func_69(638), 0f);
			unk_0x13BE64B38F002613(95, func_69(639), 0f);
			unk_0x13BE64B38F002613(134, func_69(640), 0f);
			unk_0x13BE64B38F002613(90, func_69(641), 0f);
			unk_0x13BE64B38F002613(142, func_69(642), 0f);
			unk_0x13BE64B38F002613(135, func_69(643), 0f);
			unk_0x13BE64B38F002613(138, func_69(644), 0f);
			unk_0x13BE64B38F002613(136, func_69(645), 0f);
			unk_0x13BE64B38F002613(137, func_69(646), 0f);
			unk_0x13BE64B38F002613(2, func_69(647), 0f);
			unk_0x13BE64B38F002613(132, func_69(648), 0f);
			vVar0.x = 666;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(7, func_69(637), 0f);
			unk_0x13BE64B38F002613(133, func_69(638), 0f);
			unk_0x13BE64B38F002613(95, func_69(639), 0f);
			unk_0x13BE64B38F002613(134, func_69(640), 0f);
			unk_0x13BE64B38F002613(90, func_69(641), 0f);
			unk_0x13BE64B38F002613(142, func_69(642), 0f);
			unk_0x13BE64B38F002613(135, func_69(643), 0f);
			unk_0x13BE64B38F002613(138, func_69(644), 0f);
			unk_0x13BE64B38F002613(136, func_69(645), 0f);
			unk_0x13BE64B38F002613(137, func_69(646), 0f);
			unk_0x13BE64B38F002613(2, func_69(647), 0f);
			unk_0x13BE64B38F002613(132, func_69(648), 0f);
			return;
		
		case 78:
			vVar0.x = 735;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(138, func_69(649), 0f);
			unk_0x13BE64B38F002613(7, func_69(650), 0f);
			unk_0x13BE64B38F002613(2, func_69(651), 0f);
			unk_0x13BE64B38F002613(132, func_69(652), 0f);
			vVar0.x = 734;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(138, func_69(649), 0f);
			unk_0x13BE64B38F002613(7, func_69(650), 0f);
			unk_0x13BE64B38F002613(2, func_69(651), 0f);
			unk_0x13BE64B38F002613(132, func_69(652), 0f);
			return;
		
		case 79:
			vVar0.x = 737;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(7, func_69(653), 0f);
			unk_0x13BE64B38F002613(95, func_69(654), 0f);
			unk_0x13BE64B38F002613(90, func_69(655), 0f);
			unk_0x13BE64B38F002613(138, func_69(656), 0f);
			unk_0x13BE64B38F002613(133, func_69(657), 0f);
			unk_0x13BE64B38F002613(2, func_69(658), 0f);
			unk_0x13BE64B38F002613(132, func_69(659), 0f);
			vVar0.x = 736;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(7, func_69(653), 0f);
			unk_0x13BE64B38F002613(95, func_69(654), 0f);
			unk_0x13BE64B38F002613(90, func_69(655), 0f);
			unk_0x13BE64B38F002613(138, func_69(656), 0f);
			unk_0x13BE64B38F002613(133, func_69(657), 0f);
			unk_0x13BE64B38F002613(2, func_69(658), 0f);
			unk_0x13BE64B38F002613(132, func_69(659), 0f);
			return;
		
		case 84:
			vVar0.x = 706;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(7, func_69(660), 0f);
			unk_0x13BE64B38F002613(95, func_69(661), 0f);
			unk_0x13BE64B38F002613(132, func_69(662), 0f);
			unk_0x13BE64B38F002613(90, func_69(663), 0f);
			unk_0x13BE64B38F002613(133, func_69(664), 0f);
			unk_0x13BE64B38F002613(134, func_69(665), 0f);
			unk_0x13BE64B38F002613(92, func_69(666), 0f);
			unk_0x13BE64B38F002613(142, func_69(667), 0f);
			unk_0x13BE64B38F002613(87, func_69(668), 0f);
			unk_0x13BE64B38F002613(127, func_69(669), 0f);
			unk_0x13BE64B38F002613(137, func_69(670), 0f);
			unk_0x13BE64B38F002613(136, func_69(671), 0f);
			unk_0x13BE64B38F002613(2, func_69(672), 0f);
			unk_0x13BE64B38F002613(1, func_69(673), 0f);
			vVar0.x = 705;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(7, func_69(660), 0f);
			unk_0x13BE64B38F002613(95, func_69(661), 0f);
			unk_0x13BE64B38F002613(132, func_69(662), 0f);
			unk_0x13BE64B38F002613(90, func_69(663), 0f);
			unk_0x13BE64B38F002613(133, func_69(664), 0f);
			unk_0x13BE64B38F002613(134, func_69(665), 0f);
			unk_0x13BE64B38F002613(92, func_69(666), 0f);
			unk_0x13BE64B38F002613(142, func_69(667), 0f);
			unk_0x13BE64B38F002613(87, func_69(668), 0f);
			unk_0x13BE64B38F002613(127, func_69(669), 0f);
			unk_0x13BE64B38F002613(137, func_69(670), 0f);
			unk_0x13BE64B38F002613(136, func_69(671), 0f);
			unk_0x13BE64B38F002613(2, func_69(672), 0f);
			unk_0x13BE64B38F002613(1, func_69(673), 0f);
			return;
		
		case 85:
			vVar0.x = 723;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(133, func_69(674), 0f);
			unk_0x13BE64B38F002613(7, func_69(675), 0f);
			unk_0x13BE64B38F002613(134, func_69(676), 0f);
			unk_0x13BE64B38F002613(127, func_69(677), 0f);
			unk_0x13BE64B38F002613(87, func_69(678), 0f);
			unk_0x13BE64B38F002613(90, func_69(679), 0f);
			unk_0x13BE64B38F002613(92, func_69(680), 0f);
			unk_0x13BE64B38F002613(95, func_69(681), 0f);
			unk_0x13BE64B38F002613(136, func_69(682), 0f);
			unk_0x13BE64B38F002613(132, func_69(683), 0f);
			unk_0x13BE64B38F002613(142, func_69(684), 0f);
			unk_0x13BE64B38F002613(2, func_69(685), 0f);
			unk_0x13BE64B38F002613(138, func_69(686), 0f);
			unk_0x13BE64B38F002613(139, func_69(687), 0f);
			unk_0x13BE64B38F002613(1, func_69(688), 0f);
			vVar0.x = 722;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(133, func_69(674), 0f);
			unk_0x13BE64B38F002613(7, func_69(675), 0f);
			unk_0x13BE64B38F002613(134, func_69(676), 0f);
			unk_0x13BE64B38F002613(127, func_69(677), 0f);
			unk_0x13BE64B38F002613(87, func_69(678), 0f);
			unk_0x13BE64B38F002613(90, func_69(679), 0f);
			unk_0x13BE64B38F002613(92, func_69(680), 0f);
			unk_0x13BE64B38F002613(95, func_69(681), 0f);
			unk_0x13BE64B38F002613(136, func_69(682), 0f);
			unk_0x13BE64B38F002613(132, func_69(683), 0f);
			unk_0x13BE64B38F002613(142, func_69(684), 0f);
			unk_0x13BE64B38F002613(2, func_69(685), 0f);
			unk_0x13BE64B38F002613(138, func_69(686), 0f);
			unk_0x13BE64B38F002613(139, func_69(687), 0f);
			unk_0x13BE64B38F002613(1, func_69(688), 0f);
			return;
		
		case 86:
			vVar0.x = 595;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(7, func_69(689), 0f);
			unk_0x13BE64B38F002613(95, func_69(690), 0f);
			unk_0x13BE64B38F002613(90, func_69(691), 0f);
			unk_0x13BE64B38F002613(133, func_69(692), 0f);
			unk_0x13BE64B38F002613(2, func_69(693), 0f);
			unk_0x13BE64B38F002613(134, func_69(694), 0f);
			unk_0x13BE64B38F002613(132, func_69(695), 0f);
			vVar0.x = 594;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(7, func_69(689), 0f);
			unk_0x13BE64B38F002613(95, func_69(690), 0f);
			unk_0x13BE64B38F002613(90, func_69(691), 0f);
			unk_0x13BE64B38F002613(133, func_69(692), 0f);
			unk_0x13BE64B38F002613(2, func_69(693), 0f);
			unk_0x13BE64B38F002613(134, func_69(694), 0f);
			unk_0x13BE64B38F002613(132, func_69(695), 0f);
			return;
		
		case 87:
			vVar0.x = 731;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(90, func_69(696), 0f);
			unk_0x13BE64B38F002613(95, func_69(697), 0f);
			unk_0x13BE64B38F002613(7, func_69(698), 0f);
			unk_0x13BE64B38F002613(134, func_69(699), 0f);
			unk_0x13BE64B38F002613(2, func_69(700), 0f);
			unk_0x13BE64B38F002613(132, func_69(701), 0f);
			vVar0.x = 730;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(90, func_69(696), 0f);
			unk_0x13BE64B38F002613(95, func_69(697), 0f);
			unk_0x13BE64B38F002613(7, func_69(698), 0f);
			unk_0x13BE64B38F002613(134, func_69(699), 0f);
			unk_0x13BE64B38F002613(2, func_69(700), 0f);
			unk_0x13BE64B38F002613(132, func_69(701), 0f);
			return;
		
		case 88:
			vVar0.x = 733;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(95, func_69(702), 0f);
			unk_0x13BE64B38F002613(7, func_69(703), 0f);
			unk_0x13BE64B38F002613(90, func_69(704), 0f);
			unk_0x13BE64B38F002613(139, func_69(705), 0f);
			unk_0x13BE64B38F002613(133, func_69(706), 0f);
			unk_0x13BE64B38F002613(2, func_69(707), 0f);
			unk_0x13BE64B38F002613(132, func_69(708), 0f);
			vVar0.x = 732;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(95, func_69(702), 0f);
			unk_0x13BE64B38F002613(7, func_69(703), 0f);
			unk_0x13BE64B38F002613(90, func_69(704), 0f);
			unk_0x13BE64B38F002613(139, func_69(705), 0f);
			unk_0x13BE64B38F002613(133, func_69(706), 0f);
			unk_0x13BE64B38F002613(2, func_69(707), 0f);
			unk_0x13BE64B38F002613(132, func_69(708), 0f);
			return;
		
		case 91:
			vVar0.x = 652;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(138, func_69(709), 0f);
			unk_0x13BE64B38F002613(7, func_69(710), 0f);
			unk_0x13BE64B38F002613(95, func_69(711), 0f);
			unk_0x13BE64B38F002613(1, func_69(712), 0f);
			unk_0x13BE64B38F002613(5, func_69(713), 0f);
			unk_0x13BE64B38F002613(142, func_69(714), 0f);
			unk_0x13BE64B38F002613(133, func_69(715), 0f);
			unk_0x13BE64B38F002613(2, func_69(716), 0f);
			unk_0x13BE64B38F002613(132, func_69(717), 0f);
			vVar0.x = 651;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(138, func_69(709), 0f);
			unk_0x13BE64B38F002613(7, func_69(710), 0f);
			unk_0x13BE64B38F002613(95, func_69(711), 0f);
			unk_0x13BE64B38F002613(1, func_69(712), 0f);
			unk_0x13BE64B38F002613(5, func_69(713), 0f);
			unk_0x13BE64B38F002613(142, func_69(714), 0f);
			unk_0x13BE64B38F002613(133, func_69(715), 0f);
			unk_0x13BE64B38F002613(2, func_69(716), 0f);
			unk_0x13BE64B38F002613(132, func_69(717), 0f);
			return;
		
		case 92:
			vVar0.x = 739;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(95, func_69(718), 0f);
			unk_0x13BE64B38F002613(92, func_69(719), 0f);
			unk_0x13BE64B38F002613(1, func_69(720), 0f);
			unk_0x13BE64B38F002613(87, func_69(721), 0f);
			unk_0x13BE64B38F002613(127, func_69(722), 0f);
			unk_0x13BE64B38F002613(5, func_69(723), 0f);
			unk_0x13BE64B38F002613(138, func_69(724), 0f);
			unk_0x13BE64B38F002613(7, func_69(725), 0f);
			unk_0x13BE64B38F002613(133, func_69(726), 0f);
			unk_0x13BE64B38F002613(2, func_69(727), 0f);
			unk_0x13BE64B38F002613(132, func_69(728), 0f);
			vVar0.x = 738;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(95, func_69(718), 0f);
			unk_0x13BE64B38F002613(92, func_69(719), 0f);
			unk_0x13BE64B38F002613(1, func_69(720), 0f);
			unk_0x13BE64B38F002613(87, func_69(721), 0f);
			unk_0x13BE64B38F002613(127, func_69(722), 0f);
			unk_0x13BE64B38F002613(5, func_69(723), 0f);
			unk_0x13BE64B38F002613(138, func_69(724), 0f);
			unk_0x13BE64B38F002613(7, func_69(725), 0f);
			unk_0x13BE64B38F002613(133, func_69(726), 0f);
			unk_0x13BE64B38F002613(2, func_69(727), 0f);
			unk_0x13BE64B38F002613(132, func_69(728), 0f);
			return;
		
		case 93:
			vVar0.x = 654;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(7, func_69(729), 0f);
			unk_0x13BE64B38F002613(133, func_69(730), 0f);
			unk_0x13BE64B38F002613(5, func_69(731), 0f);
			unk_0x13BE64B38F002613(92, func_69(732), 0f);
			unk_0x13BE64B38F002613(127, func_69(733), 0f);
			unk_0x13BE64B38F002613(134, func_69(734), 0f);
			unk_0x13BE64B38F002613(135, func_69(735), 0f);
			unk_0x13BE64B38F002613(87, func_69(736), 0f);
			unk_0x13BE64B38F002613(1, func_69(737), 0f);
			unk_0x13BE64B38F002613(2, func_69(738), 0f);
			unk_0x13BE64B38F002613(136, func_69(739), 0f);
			unk_0x13BE64B38F002613(132, func_69(740), 0f);
			vVar0.x = 653;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(7, func_69(729), 0f);
			unk_0x13BE64B38F002613(133, func_69(730), 0f);
			unk_0x13BE64B38F002613(5, func_69(731), 0f);
			unk_0x13BE64B38F002613(92, func_69(732), 0f);
			unk_0x13BE64B38F002613(127, func_69(733), 0f);
			unk_0x13BE64B38F002613(134, func_69(734), 0f);
			unk_0x13BE64B38F002613(135, func_69(735), 0f);
			unk_0x13BE64B38F002613(87, func_69(736), 0f);
			unk_0x13BE64B38F002613(1, func_69(737), 0f);
			unk_0x13BE64B38F002613(2, func_69(738), 0f);
			unk_0x13BE64B38F002613(136, func_69(739), 0f);
			unk_0x13BE64B38F002613(132, func_69(740), 0f);
			return;
		
		case 90:
			vVar0.x = 597;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(135, func_69(810), 0f);
			unk_0x13BE64B38F002613(136, func_69(811), 0f);
			unk_0x13BE64B38F002613(132, func_69(812), 0f);
			unk_0x13BE64B38F002613(2, func_69(813), 0f);
			unk_0x13BE64B38F002613(141, func_69(814), 0f);
			unk_0x13BE64B38F002613(127, func_69(815), 0f);
			unk_0x13BE64B38F002613(137, func_69(816), 0f);
			unk_0x13BE64B38F002613(7, func_69(817), 0f);
			unk_0x13BE64B38F002613(133, func_69(818), 0f);
			unk_0x13BE64B38F002613(90, func_69(819), 0f);
			vVar0.x = 596;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(135, func_69(810), 0f);
			unk_0x13BE64B38F002613(136, func_69(811), 0f);
			unk_0x13BE64B38F002613(132, func_69(812), 0f);
			unk_0x13BE64B38F002613(2, func_69(813), 0f);
			unk_0x13BE64B38F002613(141, func_69(814), 0f);
			unk_0x13BE64B38F002613(127, func_69(815), 0f);
			unk_0x13BE64B38F002613(137, func_69(816), 0f);
			unk_0x13BE64B38F002613(7, func_69(817), 0f);
			unk_0x13BE64B38F002613(133, func_69(818), 0f);
			unk_0x13BE64B38F002613(90, func_69(819), 0f);
			return;
		
		case 36:
			vVar0.x = 831;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(138, func_69(820), 0f);
			unk_0x13BE64B38F002613(133, func_69(821), 0f);
			unk_0x13BE64B38F002613(2, func_69(822), 0f);
			unk_0x13BE64B38F002613(132, func_69(823), 0f);
			vVar0.x = 832;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(138, func_69(820), 0f);
			unk_0x13BE64B38F002613(133, func_69(821), 0f);
			unk_0x13BE64B38F002613(2, func_69(822), 0f);
			unk_0x13BE64B38F002613(132, func_69(823), 0f);
			return;
		
		case 37:
			vVar0.x = 833;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(138, func_69(824), 0f);
			unk_0x13BE64B38F002613(133, func_69(825), 0f);
			unk_0x13BE64B38F002613(2, func_69(826), 0f);
			unk_0x13BE64B38F002613(132, func_69(827), 0f);
			vVar0.x = 834;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(138, func_69(824), 0f);
			unk_0x13BE64B38F002613(133, func_69(825), 0f);
			unk_0x13BE64B38F002613(2, func_69(826), 0f);
			unk_0x13BE64B38F002613(132, func_69(827), 0f);
			return;
		
		case 24:
			vVar0.x = 848;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(133, func_69(846), 0f);
			unk_0x13BE64B38F002613(2, func_69(847), 0f);
			unk_0x13BE64B38F002613(95, func_69(848), 0f);
			unk_0x13BE64B38F002613(7, func_69(849), 0f);
			unk_0x13BE64B38F002613(5, func_69(850), 0f);
			unk_0x13BE64B38F002613(132, func_69(851), 0f);
			vVar0.x = 847;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(133, func_69(846), 0f);
			unk_0x13BE64B38F002613(2, func_69(847), 0f);
			unk_0x13BE64B38F002613(95, func_69(848), 0f);
			unk_0x13BE64B38F002613(7, func_69(849), 0f);
			unk_0x13BE64B38F002613(5, func_69(850), 0f);
			unk_0x13BE64B38F002613(132, func_69(851), 0f);
			return;
		
		case 25:
			vVar0.x = 846;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(133, func_69(852), 0f);
			unk_0x13BE64B38F002613(2, func_69(853), 0f);
			unk_0x13BE64B38F002613(95, func_69(854), 0f);
			unk_0x13BE64B38F002613(5, func_69(855), 0f);
			unk_0x13BE64B38F002613(7, func_69(856), 0f);
			unk_0x13BE64B38F002613(133, func_69(857), 0f);
			unk_0x13BE64B38F002613(138, func_69(858), 0f);
			unk_0x13BE64B38F002613(127, func_69(859), 0f);
			unk_0x13BE64B38F002613(132, func_69(860), 0f);
			vVar0.x = 845;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(133, func_69(852), 0f);
			unk_0x13BE64B38F002613(2, func_69(853), 0f);
			unk_0x13BE64B38F002613(95, func_69(854), 0f);
			unk_0x13BE64B38F002613(5, func_69(855), 0f);
			unk_0x13BE64B38F002613(7, func_69(856), 0f);
			unk_0x13BE64B38F002613(133, func_69(857), 0f);
			unk_0x13BE64B38F002613(138, func_69(858), 0f);
			unk_0x13BE64B38F002613(127, func_69(859), 0f);
			unk_0x13BE64B38F002613(132, func_69(860), 0f);
			return;
		
		case 59:
			vVar0.x = 807;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(861), 0f);
			unk_0x13BE64B38F002613(133, func_69(862), 0f);
			unk_0x13BE64B38F002613(134, func_69(863), 0f);
			unk_0x13BE64B38F002613(135, func_69(864), 0f);
			unk_0x13BE64B38F002613(132, func_69(865), 0f);
			unk_0x13BE64B38F002613(136, func_69(866), 0f);
			unk_0x13BE64B38F002613(7, func_69(867), 0f);
			unk_0x13BE64B38F002613(90, func_69(868), 0f);
			unk_0x13BE64B38F002613(137, func_69(869), 0f);
			vVar0.x = 806;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(861), 0f);
			unk_0x13BE64B38F002613(133, func_69(862), 0f);
			unk_0x13BE64B38F002613(134, func_69(863), 0f);
			unk_0x13BE64B38F002613(135, func_69(864), 0f);
			unk_0x13BE64B38F002613(132, func_69(865), 0f);
			unk_0x13BE64B38F002613(136, func_69(866), 0f);
			unk_0x13BE64B38F002613(7, func_69(867), 0f);
			unk_0x13BE64B38F002613(90, func_69(868), 0f);
			unk_0x13BE64B38F002613(137, func_69(869), 0f);
			return;
		
		case 65:
			vVar0.x = 838;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(870), 0f);
			unk_0x13BE64B38F002613(95, func_69(871), 0f);
			unk_0x13BE64B38F002613(7, func_69(872), 0f);
			unk_0x13BE64B38F002613(90, func_69(873), 0f);
			unk_0x13BE64B38F002613(132, func_69(874), 0f);
			vVar0.x = 837;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(870), 0f);
			unk_0x13BE64B38F002613(95, func_69(871), 0f);
			unk_0x13BE64B38F002613(7, func_69(872), 0f);
			unk_0x13BE64B38F002613(90, func_69(873), 0f);
			unk_0x13BE64B38F002613(132, func_69(874), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 80:
			vVar0.x = 917;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(133, func_69(875), 0f);
			unk_0x13BE64B38F002613(2, func_69(876), 0f);
			unk_0x13BE64B38F002613(7, func_69(877), 0f);
			unk_0x13BE64B38F002613(95, func_69(878), 0f);
			unk_0x13BE64B38F002613(138, func_69(879), 0f);
			unk_0x13BE64B38F002613(90, func_69(880), 0f);
			unk_0x13BE64B38F002613(134, func_69(881), 0f);
			unk_0x13BE64B38F002613(132, func_69(882), 0f);
			vVar0.x = 916;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(133, func_69(875), 0f);
			unk_0x13BE64B38F002613(2, func_69(876), 0f);
			unk_0x13BE64B38F002613(7, func_69(877), 0f);
			unk_0x13BE64B38F002613(95, func_69(878), 0f);
			unk_0x13BE64B38F002613(138, func_69(879), 0f);
			unk_0x13BE64B38F002613(90, func_69(880), 0f);
			unk_0x13BE64B38F002613(134, func_69(881), 0f);
			unk_0x13BE64B38F002613(132, func_69(882), 0f);
			return;
		
		case 81:
			vVar0.x = 919;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(133, func_69(883), 0f);
			unk_0x13BE64B38F002613(2, func_69(884), 0f);
			unk_0x13BE64B38F002613(7, func_69(885), 0f);
			unk_0x13BE64B38F002613(95, func_69(886), 0f);
			unk_0x13BE64B38F002613(138, func_69(887), 0f);
			unk_0x13BE64B38F002613(90, func_69(888), 0f);
			unk_0x13BE64B38F002613(134, func_69(889), 0f);
			unk_0x13BE64B38F002613(132, func_69(890), 0f);
			vVar0.x = 918;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(133, func_69(883), 0f);
			unk_0x13BE64B38F002613(2, func_69(884), 0f);
			unk_0x13BE64B38F002613(7, func_69(885), 0f);
			unk_0x13BE64B38F002613(95, func_69(886), 0f);
			unk_0x13BE64B38F002613(138, func_69(887), 0f);
			unk_0x13BE64B38F002613(90, func_69(888), 0f);
			unk_0x13BE64B38F002613(134, func_69(889), 0f);
			unk_0x13BE64B38F002613(132, func_69(890), 0f);
			return;
		
		case 82:
			vVar0.x = 921;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(133, func_69(891), 0f);
			unk_0x13BE64B38F002613(2, func_69(892), 0f);
			unk_0x13BE64B38F002613(7, func_69(893), 0f);
			unk_0x13BE64B38F002613(95, func_69(894), 0f);
			unk_0x13BE64B38F002613(138, func_69(895), 0f);
			unk_0x13BE64B38F002613(90, func_69(896), 0f);
			unk_0x13BE64B38F002613(134, func_69(897), 0f);
			unk_0x13BE64B38F002613(132, func_69(898), 0f);
			vVar0.x = 920;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(133, func_69(891), 0f);
			unk_0x13BE64B38F002613(2, func_69(892), 0f);
			unk_0x13BE64B38F002613(7, func_69(893), 0f);
			unk_0x13BE64B38F002613(95, func_69(894), 0f);
			unk_0x13BE64B38F002613(138, func_69(895), 0f);
			unk_0x13BE64B38F002613(90, func_69(896), 0f);
			unk_0x13BE64B38F002613(134, func_69(897), 0f);
			unk_0x13BE64B38F002613(132, func_69(898), 0f);
			return;
		
		case 83:
			vVar0.x = 923;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(899), 0f);
			unk_0x13BE64B38F002613(134, func_69(900), 0f);
			unk_0x13BE64B38F002613(92, func_69(901), 0f);
			unk_0x13BE64B38F002613(133, func_69(902), 0f);
			unk_0x13BE64B38F002613(95, func_69(903), 0f);
			unk_0x13BE64B38F002613(7, func_69(904), 0f);
			unk_0x13BE64B38F002613(132, func_69(905), 0f);
			vVar0.x = 922;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(2, func_69(899), 0f);
			unk_0x13BE64B38F002613(134, func_69(900), 0f);
			unk_0x13BE64B38F002613(92, func_69(901), 0f);
			unk_0x13BE64B38F002613(133, func_69(902), 0f);
			unk_0x13BE64B38F002613(95, func_69(903), 0f);
			unk_0x13BE64B38F002613(7, func_69(904), 0f);
			unk_0x13BE64B38F002613(132, func_69(905), 0f);
			return;
		
		case 89:
			vVar0.x = 925;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(138, func_69(906), 0f);
			unk_0x13BE64B38F002613(2, func_69(907), 0f);
			unk_0x13BE64B38F002613(7, func_69(908), 0f);
			unk_0x13BE64B38F002613(127, func_69(909), 0f);
			unk_0x13BE64B38F002613(95, func_69(910), 0f);
			unk_0x13BE64B38F002613(90, func_69(911), 0f);
			unk_0x13BE64B38F002613(132, func_69(912), 0f);
			vVar0.x = 924;
			unk_0x217153D62FD30A42(&vVar0);
			unk_0x13BE64B38F002613(131, Global_68422, 0f);
			unk_0x13BE64B38F002613(162, Global_68423, 0f);
			unk_0x13BE64B38F002613(126, 1, 0f);
			unk_0x13BE64B38F002613(161, Global_68425, 0f);
			unk_0x13BE64B38F002613(138, func_69(906), 0f);
			unk_0x13BE64B38F002613(2, func_69(907), 0f);
			unk_0x13BE64B38F002613(7, func_69(908), 0f);
			unk_0x13BE64B38F002613(127, func_69(909), 0f);
			unk_0x13BE64B38F002613(95, func_69(910), 0f);
			unk_0x13BE64B38F002613(90, func_69(911), 0f);
			unk_0x13BE64B38F002613(132, func_69(912), 0f);
			return;
		
		default:
	}
}

int func_69(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	switch (iParam0)
	{
		case 665:
		case 676:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (Global_106070.f_1.f_126[Global_56185 /*23*/].f_11[iVar0] == 1)
				{
					iVar1 = (iVar1 + Global_106070.f_1.f_126[Global_56185 /*23*/].f_17[iVar0]);
				}
				iVar0++;
			}
			return iVar1;
		
		default:
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_68276)
	{
		if (Global_68277[iVar0 /*9*/] == iParam0)
		{
			return Global_68277[iVar0 /*9*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 10;
			break;
		
		case 4:
			return 11;
			break;
	}
	return -1;
}

int func_71(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	switch (Global_56406[iParam0 /*13*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 17:
			if (iParam1 < 1)
			{
				return 0;
			}
			break;
	}
	if (iParam1 == 2147483647)
	{
		return 0;
	}
	if (((iParam0 == 881 || iParam0 == 889) || iParam0 == 897) && Global_106070.f_24876[4 /*4*/] == func_59())
	{
		Global_56406[iParam0 /*13*/].f_2 = 0;
	}
	if (Global_56406[iParam0 /*13*/].f_3)
	{
		if (iParam1 < Global_56406[iParam0 /*13*/].f_2)
		{
			return 1;
		}
	}
	else if (iParam1 >= Global_56406[iParam0 /*13*/].f_2)
	{
		return 1;
	}
	return 0;
}

void func_72(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	
	if (Global_56171)
	{
		Global_56186 = 0;
		return;
	}
	iLocal_61 = 0;
	iLocal_62 = 0;
	iVar0 = 0;
	if (func_96(0))
	{
		unk_0xD5B3C85472885A97();
		Global_56173 = 1;
		unk_0x65CBC8A717A20217(33, 33);
	}
	iVar1 = -1;
	iLocal_66 = 0;
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < Global_68276)
	{
		switch (Global_68277[iVar0 /*9*/])
		{
			case 852:
			case 846:
				Global_68277[iVar0 /*9*/].f_1 = 1;
				break;
		}
		if (func_83(uParam0, iVar0))
		{
		}
		if (Global_68277[iVar0 /*9*/] >= 0)
		{
			if (!Global_56406[Global_68277[iVar0 /*9*/] /*13*/].f_7)
			{
				iLocal_62++;
				if (Global_68277[iVar0 /*9*/].f_3 == 2)
				{
					bVar2 = true;
				}
			}
		}
		switch (Global_68277[iVar0 /*9*/])
		{
			case 84:
			case 100:
			case 69:
			case 41:
			case 54:
				iVar1 = Global_68277[iVar0 /*9*/].f_1;
				break;
		}
		iVar0++;
	}
	Global_68425 = iLocal_61;
	fVar3 = func_78(uParam0, iLocal_61, iLocal_62, bVar2);
	if (func_96(0))
	{
		unk_0xA0C2F0A45122F46D(Global_68427);
		unk_0xA0C2F0A45122F46D(round(fVar3));
		if (bVar2)
		{
			unk_0xA0C2F0A45122F46D(1);
		}
		else
		{
			unk_0xA0C2F0A45122F46D(0);
		}
		if (Global_68426)
		{
			unk_0xA0C2F0A45122F46D(1);
		}
		else
		{
			unk_0xA0C2F0A45122F46D(0);
		}
		unk_0xE9FCF2C6B5BA33F5();
		Global_56173 = 0;
	}
	Global_56186 = 0;
	if (iVar1 > -1)
	{
		fVar3 = to_float(iVar1);
	}
	func_73(fVar3, bVar2);
}

void func_73(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68426)
	{
		iVar1 = Global_68427;
		fVar0 = func_77(iVar1);
		if (fVar0 < 100f)
		{
			if (fParam0 >= 100f)
			{
				Global_106070.f_9988.f_22++;
			}
		}
		if (fParam0 >= fVar0)
		{
			func_76(iVar1, fParam0, bParam1);
		}
	}
	else if (Global_68427 == -1)
	{
	}
	else
	{
		iVar2 = Global_68427;
		fVar0 = func_75(iVar2);
		if (fVar0 < 100f)
		{
			if (fParam0 >= 100f)
			{
				Global_106070.f_9988.f_22++;
			}
		}
		if (fParam0 >= fVar0)
		{
			func_74(iVar2, fParam0, bParam1);
		}
	}
}

void func_74(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_106070.f_9057.f_330[iParam0 /*6*/].f_5 = 50f;
	}
	else
	{
		Global_106070.f_9057.f_330[iParam0 /*6*/].f_5 = fParam1;
	}
	Global_25468 = 1;
}

float func_75(int iParam0)
{
	return Global_106070.f_9057.f_330[iParam0 /*6*/].f_5;
}

void func_76(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_106070.f_18546[iParam0 /*6*/].f_5 = 50f;
	}
	else
	{
		Global_106070.f_18546[iParam0 /*6*/].f_5 = fParam1;
	}
	Global_25468 = 1;
}

var func_77(int iParam0)
{
	return Global_106070.f_18546[iParam0 /*6*/].f_5;
}

float func_78(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = func_82(iParam1, iParam2, 0);
	iVar1 = func_81(fVar0);
	if (bParam3)
	{
		fVar0 = 50f;
		iVar1 = 1;
	}
	if (fVar0 == 0f)
	{
		func_80(uParam0, 1, "MTPHPER", 0, 0, 0, 0, 0);
		return fVar0;
	}
	iVar2 = 0;
	switch (func_79(iVar1))
	{
		case 109:
			iVar2 = 3;
			break;
		
		case 108:
			iVar2 = 2;
			break;
		
		case 107:
			iVar2 = 1;
			break;
	}
	switch (func_79(iVar1))
	{
		case 109:
			func_80(uParam0, 1, "MTPHPER", round(fVar0), 0, 0, iVar2, 0);
			break;
		
		case 108:
			func_80(uParam0, 1, "MTPHPER", round(fVar0), 0, 0, iVar2, 0);
			break;
		
		case 107:
			func_80(uParam0, 1, "MTPHPER", round(fVar0), 0, 0, iVar2, 0);
			break;
	}
	return fVar0;
}

int func_79(int iParam0)
{
	int iVar0;
	
	iVar0 = 107;
	switch (iParam0)
	{
		case 3:
			iVar0 = 109;
			break;
		
		case 2:
			iVar0 = 108;
			break;
		
		case 1:
			iVar0 = 107;
			break;
	}
	return iVar0;
}

void func_80(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
	uParam0->f_576 = iParam7;
}

int func_81(float fParam0)
{
	if (fParam0 == 0f)
	{
		return 0;
	}
	if (fParam0 == 100f)
	{
		return 3;
	}
	else if (fParam0 > 50f)
	{
		return 2;
	}
	return 1;
}

float func_82(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	
	if (bParam2)
	{
		return 0f;
	}
	if (iParam0 == iParam1)
	{
		return 100f;
	}
	fVar0 = (to_float(iParam0) / to_float(iParam1));
	fVar1 = ((50f * fVar0) + 50f);
	fVar1 = to_float(ceil(fVar1));
	if (fVar1 > 100f)
	{
		fVar1 = 100f;
	}
	return fVar1;
}

int func_83(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	char* sVar8;
	int iVar9;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (Global_68277[iParam1 /*9*/] >= 0)
	{
	}
	else
	{
		return 0;
	}
	Var2 = { Global_56406[Global_68277[iParam1 /*9*/] /*13*/] };
	if (Var2 == 15)
	{
		Global_68277[iParam1 /*9*/].f_1 = iLocal_69;
	}
	if (Var2 == 9)
	{
		Global_68277[iParam1 /*9*/].f_2 = fLocal_68;
	}
	if (Var2 == 14)
	{
		Global_68277[iParam1 /*9*/].f_1 = floor(Global_68277[iParam1 /*9*/].f_2);
	}
	if (func_71(Global_68277[iParam1 /*9*/], Global_68277[iParam1 /*9*/].f_1))
	{
		fVar0 = 1f;
	}
	if (Global_68277[iParam1 /*9*/].f_3 != 0)
	{
		fVar0 = 0f;
	}
	if (!Var2.f_2 == 0)
	{
		fVar1 = to_float(floor(((to_float(Global_68277[iParam1 /*9*/].f_1) / to_float(Var2.f_2)) * 100f)));
		if (fVar1 > 100f)
		{
			fVar1 = 100f;
		}
	}
	iVar3 = func_86(Var2.f_4);
	iVar4 = 0;
	switch (Global_68277[iParam1 /*9*/])
	{
		case 42:
		case 55:
		case 85:
		case 70:
		case 101:
			iVar4 = 1;
			break;
		
		case 84:
		case 100:
		case 69:
		case 41:
		case 54:
			iVar4 = 1;
			break;
	}
	if (Global_68277[iParam1 /*9*/].f_3 == 0 || iVar4)
	{
		if (Var2.f_3)
		{
			if ((iVar3 > Global_68277[iParam1 /*9*/].f_1 || iVar3 < 0) || iVar3 == -1)
			{
				func_85(Global_68277[iParam1 /*9*/].f_1, Global_68277[iParam1 /*9*/]);
			}
		}
		else if ((Global_68277[iParam1 /*9*/].f_1 > iVar3 || iVar3 < 0) || iVar3 == -1)
		{
			func_85(Global_68277[iParam1 /*9*/].f_1, Global_68277[iParam1 /*9*/]);
		}
	}
	iVar5 = Global_68277[iParam1 /*9*/].f_1;
	if (Var2.f_7)
	{
		return 1;
	}
	iVar6 = 1;
	if (fVar0 == 1f)
	{
		iLocal_61++;
		iVar6 = 2;
	}
	sVar7 = func_84(Global_68277[iParam1 /*9*/]);
	if (Global_68277[iParam1 /*9*/].f_3 != 0)
	{
		if (!func_96(0))
		{
			func_85(-1, Global_68277[iParam1 /*9*/]);
		}
		sVar8 = "MTPHPERRET";
		switch (Global_68277[iParam1 /*9*/].f_3)
		{
			case 4:
				sVar8 = "MTPHPERCHE";
				break;
			
			case 2:
				sVar8 = "MTPHPERSKI";
				break;
			
			case 3:
				sVar8 = "MTPHPERTAX";
				break;
			
			case 5:
				sVar8 = "MTPHPERNOREC";
				break;
		}
		if (iLocal_66 == Global_68277[iParam1 /*9*/].f_3)
		{
			sVar8 = "";
		}
		iLocal_66 = Global_68277[iParam1 /*9*/].f_3;
		func_91(uParam0, 6, sVar7, sVar8, Global_68277[iParam1 /*9*/].f_1, 0, 3, 0);
	}
	else
	{
		iLocal_66 = 0;
		switch (Var2)
		{
			case 1:
				func_91(uParam0, 8, sVar7, "", Global_68277[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 2:
				func_91(uParam0, 9, sVar7, "", Global_68277[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 3:
				func_91(uParam0, 0, sVar7, "", Global_68277[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 4:
			case 17:
				func_91(uParam0, 9, sVar7, "", Global_68277[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 5:
				func_91(uParam0, 11, sVar7, "", ceil(((to_float(Global_68277[iParam1 /*9*/].f_1) / to_float(Var2.f_2)) * 100f)), 0, iVar6, 0);
				break;
			
			case 6:
				func_91(uParam0, 0, sVar7, "", Global_68277[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 7:
				if (iVar5 > Var2.f_2)
				{
					iVar5 = Var2.f_2;
				}
				func_91(uParam0, 2, sVar7, "", iVar5, Var2.f_2, iVar6, 0);
				break;
			
			case 8:
				iVar9 = Global_68277[iParam1 /*9*/].f_1;
				if (iVar9 > Var2.f_2)
				{
					iVar9 = Var2.f_2;
				}
				func_91(uParam0, 2, sVar7, "", iVar9, Var2.f_2, iVar6, 0);
				break;
			
			case 9:
				func_91(uParam0, 11, sVar7, "", round(Global_68277[iParam1 /*9*/].f_2), 0, iVar6, 0);
				break;
			
			case 10:
			case 15:
			case 16:
				func_91(uParam0, 1, sVar7, "", Global_68277[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 11:
				func_91(uParam0, 11, sVar7, "", Global_68277[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 14:
				func_91(uParam0, 12, sVar7, "", Global_68277[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 12:
			case 13:
				func_91(uParam0, 3, sVar7, "", Global_68277[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			default:
				break;
			}
	}
	return 0;
}

char* func_84(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MISHSTA_0";
		
		case 9:
			return "MISHSTA_1";
		
		case 10:
			return "MISHSTA_2";
		
		case 21:
			return "MISHSTA_1";
		
		case 22:
			return "MISHSTA_3";
		
		case 338:
			return "MISHSTA_0";
		
		case 339:
			return "MISHSTA_4";
		
		case 196:
			return "MISHSTA_5";
		
		case 197:
			return "MISHSTA_0";
		
		case 205:
			return "MISHSTA_6";
		
		case 206:
			return "MISHSTA_7";
		
		case 207:
			return "MISHSTA_8";
		
		case 218:
			return "MISHSTA_1";
		
		case 217:
			return "MISHSTA_0";
		
		case 384:
			return "MISHSTA_1";
		
		case 385:
			return "MISHSTA_9";
		
		case 372:
			return "MISHSTA_10";
		
		case 373:
			return "MISHSTA_11";
		
		case 375:
			return "MISHSTA_1";
		
		case 374:
			return "MISHSTA_12";
		
		case 486:
			return "MISHSTA_13";
		
		case 487:
			return "MISHSTA_11";
		
		case 488:
			return "MISHSTA_1";
		
		case 489:
			return "MISHSTA_14";
		
		case 490:
			return "MISHSTA_15";
		
		case 499:
			return "MISHSTA_11";
		
		case 500:
			return "MISHSTA_1";
		
		case 501:
			return "MISHSTA_16";
		
		case 502:
			return "MISHSTA_17";
		
		case 515:
			return "MISHSTA_11";
		
		default:
	}
	switch (iParam0)
	{
		case 516:
			return "MISHSTA_18";
		
		case 517:
			return "MISHSTA_12";
		
		case 518:
			return "MISHSTA_19";
		
		case 137:
			return "MISHSTA_12";
		
		case 136:
			return "MISHSTA_20";
		
		case 148:
			return "MISHSTA_11";
		
		case 149:
			return "MISHSTA_12";
		
		case 150:
			return "MISHSTA_21";
		
		case 229:
			return "MISHSTA_6";
		
		case 230:
			return "MISHSTA_22";
		
		case 273:
			return "MISHSTA_10";
		
		case 274:
			return "MISHSTA_11";
		
		case 275:
			return "MISHSTA_1";
		
		case 276:
			return "MISHSTA_23";
		
		case 277:
			return "MISHSTA_12";
		
		case 283:
			return "MISHSTA_1";
		
		case 284:
			return "MISHSTA_10";
		
		case 285:
			return "MISHSTA_11";
		
		case 346:
			return "MISHSTA_1";
		
		case 239:
			return "MISHSTA_1";
		
		case 240:
			return "MISHSTA_24";
		
		case 241:
			return "MISHSTA_25";
		
		case 242:
			return "MISHSTA_26";
		
		case 294:
			return "MISHSTA_27";
		
		case 295:
			return "MISHSTA_28";
		
		case 296:
			return "MISHSTA_29";
		
		case 297:
			return "MISHSTA_30";
		
		case 298:
			return "MISHSTA_31";
		
		case 308:
			return "MISHSTA_32";
		
		case 102:
			return "MISHSTA_0";
		
		case 115:
			return "MISHSTA_33";
		
		default:
	}
	switch (iParam0)
	{
		case 114:
			return "MISHSTA_1";
		
		case 111:
			return "MISHSTA_34";
		
		case 112:
			return "MISHSTA_35";
		
		case 113:
			return "MISHSTA_36";
		
		case 396:
			return "MISHSTA_1";
		
		case 393:
			return "MISHSTA_37";
		
		case 394:
			return "MISHSTA_38";
		
		case 395:
			return "MISHSTA_39";
		
		case 120:
			return "MISHSTA_0";
		
		case 121:
			return "MISHSTA_6";
		
		case 122:
			return "MISHSTA_40";
		
		case 123:
			return "MISHSTA_41";
		
		case 124:
			return "MISHSTA_42";
		
		case 161:
			return "MISHSTA_43";
		
		case 172:
			return "MISHSTA_43";
		
		case 173:
			return "MISHSTA_1";
		
		case 174:
			return "MISHSTA_11";
		
		case 175:
			return "MISHSTA_44";
		
		case 185:
			return "MISHSTA_1";
		
		case 186:
			return "MISHSTA_6";
		
		case 187:
			return "MISHSTA_45";
		
		case 326:
			return "MISHSTA_46";
		
		case 129:
			return "MISHSTA_1";
		
		case 130:
			return "MISHSTA_0";
		
		case 466:
			return "MISHSTA_1";
		
		case 400:
			return "MISHSTA_1";
		
		case 401:
			return "MISHSTA_47";
		
		case 413:
			return "MISHSTA_48";
		
		case 414:
			return "MISHSTA_10";
		
		case 415:
			return "MISHSTA_11";
		
		case 416:
			return "MISHSTA_49";
		
		default:
	}
	switch (iParam0)
	{
		case 417:
			return "MISHSTA_50";
		
		case 249:
			return "MISHSTA_1";
		
		case 474:
			return "MISHSTA_1";
		
		case 257:
			return "MISHSTA_1";
		
		case 527:
			return "MISHSTA_51";
		
		case 528:
			return "MISHSTA_52";
		
		case 529:
			return "MISHSTA_53";
		
		case 534:
			return "MISHSTA_54";
		
		case 709:
			return "MISHSTA_55";
		
		case 576:
			return "MISHSTA_1";
		
		case 577:
			return "MISHSTA_56";
		
		case 578:
			return "MISHSTA_57";
		
		case 579:
			return "MISHSTA_58";
		
		case 742:
			return "MISHSTA_59";
		
		case 741:
			return "MISHSTA_60";
		
		case 743:
			return "MISHSTA_61";
		
		case 745:
			return "MISHSTA_62";
		
		case 748:
			return "MISHSTA_62";
		
		case 747:
			return "MISHSTA_63";
		
		case 749:
			return "MISHSTA_64";
		
		case 750:
			return "MISHSTA_65";
		
		case 751:
			return "MISHSTA_66";
		
		case 754:
			return "MISHSTA_67";
		
		case 753:
			return "MISHSTA_68";
		
		case 757:
			return "MISHSTA_69";
		
		case 756:
			return "MISHSTA_70";
		
		case 755:
			return "MISHSTA_71";
		
		case 759:
			return "MISHSTA_72";
		
		case 758:
			return "MISHSTA_73";
		
		case 761:
			return "MISHSTA_74";
		
		case 760:
			return "MISHSTA_75";
		
		default:
	}
	switch (iParam0)
	{
		case 762:
			return "MISHSTA_76";
		
		case 763:
			return "MISHSTA_77";
		
		case 766:
			return "MISHSTA_78";
		
		case 769:
			return "MISHSTA_79";
		
		case 768:
			return "MISHSTA_80";
		
		case 767:
			return "MISHSTA_81";
		
		case 771:
			return "MISHSTA_82";
		
		case 770:
			return "MISHSTA_83";
		
		case 773:
			return "MISHSTA_84";
		
		case 772:
			return "MISHSTA_85";
		
		case 775:
			return "MISHSTA_86";
		
		case 774:
			return "MISHSTA_87";
		
		case 777:
			return "MISHSTA_88";
		
		case 776:
			return "MISHSTA_89";
		
		case 779:
			return "MISHSTA_90";
		
		case 778:
			return "MISHSTA_91";
		
		case 782:
			return "MISHSTA_92";
		
		case 780:
			return "MISHSTA_93";
		
		case 781:
			return "MISHSTA_94";
		
		case 784:
			return "MISHSTA_95";
		
		case 783:
			return "MISHSTA_96";
		
		case 786:
			return "MISHSTA_97";
		
		case 785:
			return "MISHSTA_98";
		
		case 788:
			return "MISHSTA_99";
		
		case 787:
			return "MISHSTA_100";
		
		case 789:
			return "MISHSTA_101";
		
		case 792:
			return "MISHSTA_102";
		
		case 791:
			return "MISHSTA_103";
		
		case 790:
			return "MISHSTA_104";
		
		case 793:
			return "MISHSTA_105";
		
		case 794:
			return "MISHSTA_106";
		
		default:
	}
	switch (iParam0)
	{
		case 795:
			return "MISHSTA_0";
		
		case 796:
			return "MISHSTA_107";
		
		case 797:
			return "MISHSTA_108";
		
		case 798:
			return "MISHSTA_109";
		
		case 799:
			return "MISHSTA_110";
		
		case 800:
			return "MISHSTA_111";
		
		case 801:
			return "MISHSTA_112";
		
		case 802:
			return "MISHSTA_113";
		
		case 803:
			return "MISHSTA_114";
		
		case 804:
			return "MISHSTA_115";
		
		case 805:
			return "MISHSTA_116";
		
		case 806:
			return "MISHSTA_117";
		
		case 807:
			return "MISHSTA_118";
		
		case 808:
			return "MISHSTA_119";
		
		case 809:
			return "MISHSTA_120";
		
		case 429:
			return "MISHSTA_1";
		
		case 441:
			return "MISHSTA_1";
		
		case 4:
			return "MISHSTA_121";
		
		case 13:
			return "MISHSTA_11";
		
		case 341:
			return "MISHSTA_122";
		
		case 5:
			return "MISHSTA_123";
		
		case 6:
			return "MISHSTA_124";
		
		case 20:
			return "MISHSTA_10";
		
		case 169:
			return "MISHSTA_125";
		
		case 731:
			return "MISHSTA_126";
		
		case 737:
			return "MISHSTA_10";
		
		case 145:
			return "MISHSTA_127";
		
		case 159:
			return "MISHSTA_10";
		
		case 353:
			return "MISHSTA_10";
		
		case 357:
			return "MISHSTA_11";
		
		case 605:
			return "MISHSTA_11";
		
		default:
	}
	switch (iParam0)
	{
		case 606:
			return "MISHSTA_10";
		
		case 613:
			return "MISHSTA_128";
		
		case 616:
			return "MISHSTA_129";
		
		case 628:
			return "MISHSTA_130";
		
		case 309:
			return "MISHSTA_11";
		
		case 310:
			return "MISHSTA_10";
		
		case 313:
			return "MISHSTA_131";
		
		case 477:
			return "MISHSTA_37";
		
		case 482:
			return "MISHSTA_132";
		
		case 484:
			return "MISHSTA_133";
		
		case 715:
			return "MISHSTA_123";
		
		case 570:
			return "MISHSTA_10";
		
		case 566:
			return "MISHSTA_11";
		
		case 565:
			return "MISHSTA_134";
		
		case 572:
			return "MISHSTA_135";
		
		case 574:
			return "MISHSTA_136";
		
		case 431:
			return "MISHSTA_11";
		
		case 443:
			return "MISHSTA_137";
		
		case 446:
			return "MISHSTA_138";
		
		case 452:
			return "MISHSTA_139";
		
		case 364:
			return "MISHSTA_11";
		
		case 365:
			return "MISHSTA_10";
		
		case 369:
			return "MISHSTA_140";
		
		case 668:
			return "MISHSTA_11";
		
		case 670:
			return "MISHSTA_141";
		
		case 678:
			return "MISHSTA_11";
		
		case 265:
			return "MISHSTA_11";
		
		case 266:
			return "MISHSTA_10";
		
		case 270:
			return "MISHSTA_142";
		
		case 271:
			return "MISHSTA_143";
		
		case 272:
			return "MISHSTA_144";
		
		default:
	}
	switch (iParam0)
	{
		case 765:
			return "MISHSTA_145";
		
		case 764:
			return "MISHSTA_146";
		
		case 330:
			return "MISHSTA_11";
		
		case 331:
			return "MISHSTA_10";
		
		case 643:
			return "MISHSTA_147";
		
		case 644:
			return "MISHSTA_148";
		
		case 645:
			return "MISHSTA_149";
		
		case 646:
			return "MISHSTA_150";
		
		case 404:
			return "MISHSTA_10";
		
		case 721:
			return "MISHSTA_151";
		
		case 752:
			return "MISHSTA_152";
		
		case 147:
			return "MISHSTA_1";
		
		case 336:
			return "MISHSTA_1";
		
		case 371:
			return "MISHSTA_1";
		
		case 557:
			return "MISHSTA_1";
		
		case 575:
			return "MISHSTA_1";
		
		case 629:
			return "MISHSTA_1";
		
		case 647:
			return "MISHSTA_1";
		
		case 685:
			return "MISHSTA_1";
		
		case 693:
			return "MISHSTA_1";
		
		case 738:
			return "MISHSTA_1";
		
		case 650:
			return "MISHSTA_0";
		
		case 649:
			return "MISHSTA_153";
		
		case 825:
			return "MISHSTA_154";
		
		case 824:
			return "MISHSTA_155";
		
		case 821:
			return "MISHSTA_156";
		
		case 820:
			return "MISHSTA_157";
		
		case 319:
			return "MISHSTA_158";
		
		case 318:
			return "MISHSTA_159";
		
		case 317:
			return "MISHSTA_1";
		
		case 322:
			return "MISHSTA_1";
		
		default:
	}
	switch (iParam0)
	{
		case 323:
			return "MISHSTA_0";
		
		case 324:
			return "MISHSTA_160";
		
		case 816:
			return "MISHSTA_161";
		
		case 815:
			return "MISHSTA_162";
		
		case 814:
			return "MISHSTA_163";
		
		case 746:
			return "MISHSTA_164";
		
		case 514:
			return "MISHSTA_165";
		
		case 744:
			return "MISHSTA_166";
		
		case 841:
			return "MISHSTA_167";
		
		case 840:
			return "MISHSTA_1";
		
		case 838:
			return "MISHSTA_167";
		
		case 828:
			return "MISHSTA_1";
		
		case 829:
			return "MISHSTA_167";
		
		case 831:
			return "MISHSTA_1";
		
		case 832:
			return "MISHSTA_167";
		
		case 834:
			return "MISHSTA_1";
		
		case 835:
			return "MISHSTA_167";
		
		case 837:
			return "MISHSTA_1";
		
		case 739:
			return "MISHSTA_168";
		
		case 619:
			return "MISHSTA_169";
		
		case 560:
			return "MISHSTA_170";
		
		case 559:
			return "MISHSTA_171";
		
		case 558:
			return "MISHSTA_172";
		
		case 673:
			return "MISHSTA_10";
		
		case 688:
			return "MISHSTA_10";
		
		case 687:
			return "MISHSTA_173";
		
		case 844:
			return "MISHSTA_174";
		
		case 845:
			return "MISHSTA_175";
		
		case 843:
			return "MISHSTA_176";
		
		case 236:
			return "MISHSTA_177";
		
		case 29:
			return "MISHSTA_178";
		
		default:
	}
	switch (iParam0)
	{
		case 109:
			return "MISHSTA_179";
		
		case 108:
			return "MISHSTA_180";
		
		case 135:
			return "MISHSTA_181";
		
		case 227:
			return "MISHSTA_182";
		
		case 852:
			return "MISHSTA_183";
		
		case 846:
			return "MISHSTA_184";
		
		case 440:
			return "MISHSTA_185";
		
		case 864:
			return "MISHSTA_186";
		
		case 863:
			return "MISHSTA_187";
		
		case 861:
			return "MISHSTA_1";
		
		case 862:
			return "MISHSTA_188";
		
		case 870:
			return "MISHSTA_1";
		
		case 544:
			return "MISHSTA_0";
		
		case 543:
			return "MISHSTA_189";
		
		case 593:
			return "MISHSTA_190";
		
		case 592:
			return "MISHSTA_1";
		
		case 603:
			return "MISHSTA_1";
		
		case 899:
			return "MISHSTA_1";
		
		case 900:
			return "MISHSTA_191";
		
		case 883:
			return "MISHSTA_192";
		
		case 891:
			return "MISHSTA_192";
		
		case 657:
			return "MISHSTA_193";
		
		case 875:
			return "MISHSTA_192";
		
		case 906:
			return "MISHSTA_194";
		
		case 706:
			return "MISHSTA_195";
		
		case 699:
			return "MISHSTA_196";
		
		case 726:
			return "MISHSTA_197";
		
		case 237:
			return "MISHSTA_198";
		
		case 658:
			return "MISHSTA_1";
		
		case 877:
			return "MISHSTA_0";
		
		case 885:
			return "MISHSTA_0";
		
		default:
	}
	switch (iParam0)
	{
		case 893:
			return "MISHSTA_0";
		
		case 694:
			return "MISHSTA_110";
		
		case 881:
			return "MISHSTA_199";
		
		case 889:
			return "MISHSTA_199";
		
		case 897:
			return "MISHSTA_199";
		
		case 633:
			return "MISHSTA_200";
		
		case 632:
			return "MISHSTA_201";
		
		case 38:
			return "MISHSTA_202";
		
		case 41:
			return "MISHSTA_203";
		
		case 39:
			return "MISHSTA_204";
		
		case 40:
			return "MISHSTA_205";
		
		case 42:
			return "MISHSTA_206";
		
		case 56:
			return "MISHSTA_205";
		
		case 52:
			return "MISHSTA_202";
		
		case 53:
			return "MISHSTA_207";
		
		case 54:
			return "MISHSTA_203";
		
		case 55:
			return "MISHSTA_206";
		
		case 70:
			return "MISHSTA_206";
		
		case 69:
			return "MISHSTA_203";
		
		case 67:
			return "MISHSTA_132";
		
		case 68:
			return "MISHSTA_205";
		
		case 66:
			return "MISHSTA_202";
		
		case 81:
			return "MISHSTA_202";
		
		case 82:
			return "MISHSTA_208";
		
		case 84:
			return "MISHSTA_203";
		
		case 83:
			return "MISHSTA_205";
		
		case 85:
			return "MISHSTA_206";
		
		case 97:
			return "MISHSTA_202";
		
		case 98:
			return "MISHSTA_209";
		
		case 100:
			return "MISHSTA_203";
		
		case 99:
			return "MISHSTA_205";
		
		default:
	}
	switch (iParam0)
	{
		case 101:
			return "MISHSTA_206";
		
		default:
	}
	return "MISSING_MISSION_STAT_STRING";
}

void func_85(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_56406[iParam1 /*13*/].f_4;
	if (iVar0 == 0)
	{
		return;
	}
	Global_56406[iParam1 /*13*/].f_1 = iParam0;
	iVar1 = iParam0 + 1;
	unk_0x93180BE33E7149EF(iVar0, iVar1, 1);
	if (func_96(0) && Global_56173)
	{
		unk_0xA0C2F0A45122F46D(iVar0);
		unk_0xA0C2F0A45122F46D(iParam0);
		unk_0xA0C2F0A45122F46D(iParam1);
	}
}

int func_86(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (unk_0x2AD48F3CEBA882E9(iParam0, &iVar0, -1))
	{
		return (iVar0 - 1);
	}
	return -1;
}

bool func_87(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_106070.f_1.f_118, iParam0);
}

int func_88(int iParam0)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106070.f_9057.f_99.f_205[iParam0];
}

int func_89(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 7;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 9;
			break;
		
		case 3:
			iVar0 = 10;
			break;
		
		case 4:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

char* func_90(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "JCSLMVANR";
		
		case 2:
			return "JCHMDRAZ";
		
		case 3:
			return "HSTAGNCUT";
		
		case 4:
			return "UNSELLWEAP";
		
		case 0:
			return "HSTECUT";
		
		case 5:
			return "HSTSLWLD";
		
		case 6:
			return "HSTCASECUT";
		
		default:
	}
	return "UNSET_HEISTPENALTY";
}

void func_91(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = iParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_92(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_93(int iParam0)
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
	
	if (Global_89547.f_3)
	{
		return;
	}
	switch (iParam0)
	{
		case 4:
			Global_106070.f_1.f_126[iParam0 /*23*/].f_1 = 201600000;
			Global_106070.f_1.f_126[iParam0 /*23*/] = 201600000;
			break;
		
		case 3:
			Global_106070.f_1.f_126[iParam0 /*23*/].f_1 = 331985;
			Global_106070.f_1.f_126[iParam0 /*23*/] = 331985;
			break;
		
		case 1:
			Global_106070.f_1.f_126[iParam0 /*23*/] = 20000000;
			Global_106070.f_1.f_126[iParam0 /*23*/].f_1 = 20000000;
			break;
	}
	iVar0 = func_88(func_70(iParam0));
	iVar1 = Global_106070.f_1.f_126[iParam0 /*23*/].f_1;
	switch (iParam0)
	{
		case 0:
			func_95(iParam0, 2, 2500000);
			break;
		
		case 1:
			func_95(iParam0, 4, 20000000);
			break;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		Global_106070.f_1.f_126[iParam0 /*23*/].f_17[iVar2] = 0;
		iVar2++;
	}
	iVar2 = 0;
	iVar3 = 0;
	iVar2 = 0;
	while (iVar2 < Global_89557[iParam0 /*38*/].f_37)
	{
		if (Global_89557[iParam0 /*38*/].f_31[iVar2] > 0)
		{
			iVar3 = (iVar3 + Global_89557[iParam0 /*38*/].f_31[iVar2]);
			Global_106070.f_1.f_126[iParam0 /*23*/].f_1 = (Global_106070.f_1.f_126[iParam0 /*23*/].f_1 - Global_89557[iParam0 /*38*/].f_31[iVar2]);
		}
		iVar2++;
	}
	iVar1 = (iVar1 - iVar3);
	if (iParam0 == 2)
	{
		iVar4 = floor((to_float(Global_106070.f_1.f_126[iParam0 /*23*/].f_1) * 0.78f));
		func_95(iParam0, 3, iVar4);
		Global_106070.f_1.f_126[iParam0 /*23*/].f_1 = (Global_106070.f_1.f_126[iParam0 /*23*/].f_1 - iVar4);
		iVar1 = (iVar1 - iVar4);
	}
	iVar2 = 0;
	while (iVar2 < 5)
	{
		iVar5 = Global_106070.f_1.f_12[iVar0 /*6*/][iVar2];
		switch (Global_106070.f_1.f_126[iParam0 /*23*/].f_11[iVar2])
		{
			case 1:
			case 2:
			case 0:
				Global_106070.f_1.f_126[iParam0 /*23*/].f_17[iVar2] = ceil(((to_float(Global_89202[iVar5 /*5*/].f_1) * 0.01f) * IntToFloat(Global_106070.f_1.f_126[iParam0 /*23*/].f_1)));
				break;
			
			case 3:
				Global_106070.f_1.f_126[iParam0 /*23*/].f_17[iVar2] = ceil(((to_float(Global_89202[iVar5 /*5*/].f_1) * 0.015f) * IntToFloat(Global_106070.f_1.f_126[iParam0 /*23*/].f_1)));
				break;
		}
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < Global_89356[iVar0 /*19*/])
	{
		iVar1 = (iVar1 - Global_106070.f_1.f_126[iParam0 /*23*/].f_17[iVar2]);
		iVar2++;
	}
	Global_106070.f_1.f_126[0 /*23*/].f_2[0] = 0;
	Global_106070.f_1.f_126[0 /*23*/].f_2[1] = 0;
	Global_106070.f_1.f_126[0 /*23*/].f_2[2] = 0;
	Global_89547.f_7 = 0;
	switch (iParam0)
	{
		case 0:
			Global_106070.f_1.f_126[0 /*23*/].f_6[0] = 0f;
			Global_106070.f_1.f_126[0 /*23*/].f_6[1] = 0f;
			Global_106070.f_1.f_126[0 /*23*/].f_6[2] = -1f;
			Global_106070.f_1.f_126[0 /*23*/].f_2[1] = ceil((0.12f * IntToFloat(Global_106070.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_106070.f_1.f_126[0 /*23*/].f_2[1]);
			Global_89547.f_7 = ceil((0.14f * IntToFloat(Global_106070.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_89547.f_7);
			Global_89547.f_6 = 14f;
			Global_106070.f_1.f_126[0 /*23*/].f_2[0] = iVar1;
			break;
		
		case 1:
			Global_106070.f_1.f_126[1 /*23*/].f_6[0] = 0f;
			Global_106070.f_1.f_126[1 /*23*/].f_6[1] = 0f;
			Global_106070.f_1.f_126[1 /*23*/].f_6[2] = 0f;
			Global_106070.f_1.f_126[1 /*23*/].f_2[0] = 0;
			Global_106070.f_1.f_126[1 /*23*/].f_2[1] = 0;
			Global_106070.f_1.f_126[1 /*23*/].f_2[2] = 0;
			Global_89547.f_6 = -1f;
			break;
		
		case 2:
			Global_106070.f_1.f_126[2 /*23*/].f_6[0] = 0f;
			Global_106070.f_1.f_126[2 /*23*/].f_6[1] = 0f;
			Global_106070.f_1.f_126[2 /*23*/].f_6[2] = 0f;
			Global_89547.f_7 = ceil((0.12f * IntToFloat(Global_106070.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_89547.f_7);
			Global_89547.f_6 = 12f;
			Global_106070.f_1.f_126[2 /*23*/].f_2[0] = (iVar1 / 3);
			Global_106070.f_1.f_126[2 /*23*/].f_2[1] = (iVar1 / 3);
			Global_106070.f_1.f_126[2 /*23*/].f_2[2] = (iVar1 / 3);
			Global_89547.f_6 = 0f;
			break;
		
		case 3:
			Global_106070.f_1.f_126[3 /*23*/].f_6[0] = -1f;
			Global_106070.f_1.f_126[3 /*23*/].f_6[1] = 0f;
			Global_106070.f_1.f_126[3 /*23*/].f_6[2] = 0f;
			Global_89547.f_7 = ceil((0.12f * IntToFloat(Global_106070.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_89547.f_7);
			Global_89547.f_6 = 12f;
			Global_106070.f_1.f_126[3 /*23*/].f_2[1] = iVar1;
			break;
		
		case 4:
			Global_106070.f_1.f_126[4 /*23*/].f_6[0] = 0f;
			Global_106070.f_1.f_126[4 /*23*/].f_6[1] = 0f;
			Global_106070.f_1.f_126[4 /*23*/].f_6[2] = 0f;
			Global_89547.f_7 = ceil((0.12f * IntToFloat(Global_106070.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_89547.f_7);
			Global_89547.f_6 = 12f;
			Global_106070.f_1.f_126[4 /*23*/].f_2[0] = (iVar1 / 3);
			Global_106070.f_1.f_126[4 /*23*/].f_2[1] = (iVar1 / 3);
			Global_106070.f_1.f_126[4 /*23*/].f_2[2] = (iVar1 / 3);
			Global_89547.f_6 = 0f;
			break;
	}
	iVar6 = Global_106070.f_1.f_126[iParam0 /*23*/].f_1;
	if (Global_106070.f_1.f_126[iParam0 /*23*/].f_6[0] != -1f)
	{
		Global_106070.f_1.f_126[iParam0 /*23*/].f_6[0] = ((to_float(Global_106070.f_1.f_126[iParam0 /*23*/].f_2[0]) / to_float(iVar6)) * 100f);
	}
	if (Global_106070.f_1.f_126[iParam0 /*23*/].f_6[1] != -1f)
	{
		Global_106070.f_1.f_126[iParam0 /*23*/].f_6[1] = ((to_float(Global_106070.f_1.f_126[iParam0 /*23*/].f_2[1]) / to_float(iVar6)) * 100f);
	}
	if (Global_106070.f_1.f_126[iParam0 /*23*/].f_6[2] != -1f)
	{
		Global_106070.f_1.f_126[iParam0 /*23*/].f_6[2] = ((to_float(Global_106070.f_1.f_126[iParam0 /*23*/].f_2[2]) / to_float(iVar6)) * 100f);
	}
	if (Global_89547.f_6 != -1f)
	{
		Global_89547.f_6 = ((to_float(Global_89547.f_7) / to_float(iVar6)) * 100f);
	}
	switch (iParam0)
	{
		case 0:
			unk_0x93180BE33E7149EF(joaat("jewel_heist_raw_take"), Global_106070.f_1.f_126[iParam0 /*23*/], 1);
			break;
	}
	iVar7 = 0;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		iVar7 = (iVar7 + Global_106070.f_1.f_126[iParam0 /*23*/].f_2[iVar8]);
		iVar8++;
	}
	switch (iParam0)
	{
		case 0:
			func_94(810, Global_106070.f_1.f_126[iParam0 /*23*/].f_1, 1);
			func_94(811, iVar7, 1);
			break;
		
		case 1:
			switch (func_88(8))
			{
				case 3:
					func_94(610, Global_106070.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_94(611, iVar7, 1);
					break;
				
				case 4:
					func_94(622, Global_106070.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_94(623, iVar7, 1);
					break;
			}
			break;
		
		case 2:
			func_94(734, Global_106070.f_1.f_126[iParam0 /*23*/].f_1, 1);
			func_94(735, iVar7, 1);
			break;
		
		case 3:
			switch (func_88(10))
			{
				case 6:
					break;
				
				case 7:
					break;
			}
			break;
		
		case 4:
			switch (func_88(11))
			{
				case 8:
					func_94(664, Global_106070.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_94(671, iVar7, 1);
					break;
				
				case 9:
					func_94(674, Global_106070.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_94(682, iVar7, 1);
					break;
			}
			break;
	}
	Global_89547.f_3 = 1;
	Global_56181 = 0;
}

void func_94(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_68276)
	{
		if (Global_68277[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_68277[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_68277[iVar0 /*9*/].f_1 = (Global_68277[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_68277[iVar0 /*9*/] != -1)
	{
		if (Global_56406[Global_68277[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_68277[iVar0 /*9*/].f_1 > 1)
			{
				Global_68277[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_68277[iVar0 /*9*/].f_1 < 0)
			{
				Global_68277[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_95(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == 0)
	{
		return;
	}
	iVar0 = iParam2;
	if (iVar0 < 0)
	{
		iVar0 = (iVar0 * -1);
	}
	bVar1 = false;
	if (Global_89557[iParam0 /*38*/].f_37 == 5)
	{
		bVar1 = true;
	}
	iVar2 = Global_89557[iParam0 /*38*/].f_37;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_89557[iParam0 /*38*/].f_25[iVar3] == iParam1)
		{
			Global_89557[iParam0 /*38*/].f_25[iVar3] = iParam1;
			Global_89557[iParam0 /*38*/].f_31[iVar3] = iVar0;
			return;
		}
		iVar3++;
	}
	if (bVar1)
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					unk_0x93180BE33E7149EF(joaat("hcs_penalty_jewel_drop_money"), iParam2, 1);
					break;
				
				case 2:
					unk_0x93180BE33E7149EF(joaat("hcs_penalty_paleto_drop_money"), iParam2, 1);
					break;
				
				case 4:
					unk_0x93180BE33E7149EF(joaat("hcs_penalty_bigs_drop_money"), iParam2, 1);
					break;
			}
			break;
		
		case 1:
			unk_0x93180BE33E7149EF(joaat("hcs_penalty_jewel_drop_money"), iParam2, 1);
			break;
		
		case 2:
			unk_0x93180BE33E7149EF(joaat("hcs_penalty_jewel_madr_house"), iParam2, 1);
			break;
		
		case 4:
			unk_0x93180BE33E7149EF(joaat("hcs_penalty_docks_unsell_wpn"), iParam2, 1);
			break;
		
		case 3:
			unk_0x93180BE33E7149EF(joaat("hcs_penalty_paleto_agent_cut"), iParam2, 1);
			break;
		
		case 5:
			unk_0x93180BE33E7149EF(joaat("hcs_penalty_bigs_slow_loading"), iParam2, 1);
			break;
		
		case 6:
			unk_0x93180BE33E7149EF(joaat("hcs_penalty_bigs_hostage_gift"), iParam2, 1);
			break;
	}
	Global_89557[iParam0 /*38*/].f_25[Global_89557[iParam0 /*38*/].f_37] = iParam1;
	Global_89557[iParam0 /*38*/].f_31[Global_89557[iParam0 /*38*/].f_37] = iVar0;
	Global_89557[iParam0 /*38*/].f_37++;
}

bool func_96(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

void func_97()
{
	int iVar0;
	int iVar1;
	
	if (Global_68276 > 16)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_68276)
	{
		if (Global_68277[iVar0 /*9*/].f_1 == 0)
		{
			if (Global_68277[iVar0 /*9*/].f_2 != 0f)
			{
				Global_68277[iVar0 /*9*/].f_1 = floor(Global_68277[iVar0 /*9*/].f_2);
			}
		}
		iVar1 = Global_68277[iVar0 /*9*/];
		if (iVar1 > 0)
		{
			if (Global_56406[iVar1 /*13*/] == 9)
			{
				Global_68277[iVar0 /*9*/].f_1 = round(fLocal_68);
			}
			if (Global_56406[iVar1 /*13*/] == 15)
			{
				Global_68277[iVar0 /*9*/].f_1 = iLocal_69;
			}
		}
		iVar0++;
	}
}

void func_98()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (Global_56200)
	{
		return;
	}
	Global_56200 = 1;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = (func_7(joaat("sp0_shots")) - Global_56204);
	iVar1 = (func_7(joaat("sp0_hits")) - Global_56203);
	iVar0 = (iVar0 + (func_7(joaat("sp1_shots")) - Global_56206));
	iVar1 = (iVar1 + (func_7(joaat("sp1_hits")) - Global_56205));
	iVar0 = (iVar0 + (func_7(joaat("sp2_shots")) - Global_56208));
	iVar1 = (iVar1 + (func_7(joaat("sp2_hits")) - Global_56207));
	wait(0);
	fVar2 = 100f;
	if (!iVar0 == 0)
	{
		fVar3 = to_float(iVar0);
		fVar4 = to_float(iVar1);
		fVar2 = to_float(floor(((fVar4 / fVar3) * 100f)));
		if (fVar2 > 100f)
		{
			fVar2 = 100f;
		}
	}
	fLocal_68 = fVar2;
	iLocal_69 = iVar0;
}

void func_99(var uParam0)
{
	func_65(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

int func_100()
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		return Global_90805.f_44 == 1;
	}
	return 0;
}

void func_101()
{
	int iVar0;
	
	if (Global_25705 == 0 && !Global_25709)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_68276)
	{
		Global_68277[iVar0 /*9*/].f_3 = 4;
		iVar0++;
	}
}

void func_102()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	func_103();
	if (((Global_56187 && unk_0x58E3CCF930D23BD5(unk_0xA6580F898F4E801C())) && !unk_0x99E48E2CD778F380()) && !unk_0xD1ABB20CFF127CCC())
	{
		Global_56187 = 0;
	}
	if (Global_56180)
	{
		Global_56180 = 0;
		iLocal_60 = 0;
	}
	bVar0 = true;
	bVar1 = true;
	if (unk_0xD1ABB20CFF127CCC())
	{
		bVar0 = false;
	}
	if (!unk_0xD246C1DFC9B0EBC2())
	{
		bVar0 = false;
		bVar1 = false;
	}
	if (Global_56187)
	{
		bVar0 = false;
		bVar1 = false;
	}
	if (!unk_0x02B9944258987761(unk_0xA6580F898F4E801C()))
	{
		bVar0 = false;
		bVar1 = false;
	}
	if (bVar0)
	{
		iLocal_60 = round((unk_0xDE089748C4C76C96() * 1000f));
	}
	iVar2 = 0;
	fVar3 = 0f;
	iVar2 = 0;
	while (iVar2 < Global_68276)
	{
		if (Global_68277[iVar2 /*9*/] >= 0)
		{
			iVar4 = Global_56406[Global_68277[iVar2 /*9*/] /*13*/];
			switch (iVar4)
			{
				case 6:
					if (Global_68277[iVar2 /*9*/].f_6 != 0)
					{
						if (Global_68277[iVar2 /*9*/].f_7 == 1)
						{
							Global_68277[iVar2 /*9*/].f_8 = 0;
							Global_68277[iVar2 /*9*/].f_1 = 0;
							Global_68277[iVar2 /*9*/].f_7 = 0;
						}
						else if (unk_0xDC5D81351D6A4DDB(Global_68277[iVar2 /*9*/].f_6))
						{
							if (!unk_0x7112137033807390(Global_68277[iVar2 /*9*/].f_6, 0))
							{
								iLocal_64 = Global_68277[iVar2 /*9*/].f_8;
								iLocal_63 = unk_0x24A1A7BF4ED94B71(Global_68277[iVar2 /*9*/].f_6);
								iLocal_65 = (iLocal_64 - iLocal_63);
								if (iLocal_65 > 0)
								{
									Global_68277[iVar2 /*9*/].f_1 = (Global_68277[iVar2 /*9*/].f_1 + iLocal_65);
									if (Global_68277[iVar2 /*9*/].f_1 < 0)
									{
										Global_68277[iVar2 /*9*/].f_1 = (Global_68277[iVar2 /*9*/].f_1 * -1);
									}
								}
								Global_68277[iVar2 /*9*/].f_8 = iLocal_63;
							}
						}
						else
						{
							Global_68277[iVar2 /*9*/].f_6 = 0;
						}
					}
					break;
				
				case 1:
					Global_68277[iVar2 /*9*/].f_1 = (Global_68277[iVar2 /*9*/].f_1 + iLocal_60);
					break;
				
				case 2:
					if (Global_56188)
					{
						Global_68277[iVar2 /*9*/].f_1 = (Global_68277[iVar2 /*9*/].f_1 + iLocal_60);
					}
					break;
				
				case 3:
					break;
				
				case 4:
					if (Global_56189)
					{
						if (Global_56191 == -1 || Global_68277[iVar2 /*9*/] == Global_56191)
						{
							if (((Global_68277[iVar2 /*9*/] == 339 || Global_68277[iVar2 /*9*/] == 179) || Global_68277[iVar2 /*9*/] == 342) || Global_68277[iVar2 /*9*/] == 234)
							{
								Global_68277[iVar2 /*9*/].f_1 = (Global_68277[iVar2 /*9*/].f_1 + round((unk_0xDE089748C4C76C96() * 1000f)));
							}
							else
							{
								Global_68277[iVar2 /*9*/].f_1 = (Global_68277[iVar2 /*9*/].f_1 + iLocal_60);
							}
						}
					}
					break;
				
				case 5:
					if (bVar1)
					{
						if (Global_56193 == -1 || Global_56193 == Global_68277[iVar2 /*9*/])
						{
							if (!Global_56192 == 0)
							{
								if (unk_0xDC5D81351D6A4DDB(Global_56192))
								{
									if (!unk_0x7112137033807390(Global_56192, 0))
									{
										if (unk_0xFAC06EE780B57279(Global_56192))
										{
											fVar3 = unk_0xEAA5CEF8875FEEED(Global_56192);
											if (fVar3 > Global_68277[iVar2 /*9*/].f_2)
											{
												Global_68277[iVar2 /*9*/].f_2 = fVar3;
											}
										}
									}
								}
							}
						}
					}
					break;
				
				case 7:
					break;
				
				case 8:
					break;
				
				case 9:
					break;
				
				case 13:
					break;
				
				case 12:
					break;
				
				case 10:
				case 11:
				case 14:
					break;
				
				case 16:
					break;
				
				case 17:
					if (func_50(func_59()))
					{
						if (unk_0x53B0513B47405A70(unk_0xA6580F898F4E801C()) && unk_0xDE84299DB1852D63(unk_0xA6580F898F4E801C()))
						{
							Global_68277[iVar2 /*9*/].f_1 = (Global_68277[iVar2 /*9*/].f_1 + iLocal_60);
						}
					}
					break;
				
				case 15:
					break;
				
				default:
					break;
				}
		}
		iVar2++;
	}
}

void func_103()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if ((((Global_68472 == 0 && Global_68462 == 0) && Global_56340 == 0) && Global_56210 == 0) && !Global_68428)
	{
		return;
	}
	iVar10 = 0;
	if (Global_56210 > 0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_56211[iVar0 /*2*/] != 0)
			{
				if (!unk_0xDC5D81351D6A4DDB(Global_56211[iVar0 /*2*/]))
				{
					Global_56211[iVar0 /*2*/] = 0;
					Global_56210 = (Global_56210 - 1);
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0x5D7B2A77420FF19E(0))
	{
		iVar3 = unk_0x5712B9353A8F6573(0, iVar0);
		switch (iVar3)
		{
			case 140:
				unk_0x8866A4E42CDA3EF1(0, iVar0, &iVar4, 1);
				if (unk_0xDC5D81351D6A4DDB(iVar4))
				{
					unk_0x7112137033807390(iVar4, 0);
					if (Global_56340 > 0)
					{
						iVar7 = unk_0x8F474E419F56E48D(iVar4);
						iVar1 = 0;
						iVar1 = 0;
						while (iVar1 < Global_56340)
						{
							if (Global_56341[iVar1 /*2*/] == iVar7)
							{
								iVar10 = (iVar10 + Global_56341[iVar1 /*2*/].f_1);
							}
							iVar1++;
						}
					}
					if (unk_0x281590680327CDEA(iVar4) && unk_0xA2EA4BA455370F3C(iVar4) != unk_0xA19140A5C42D8715())
					{
						iVar5 = unk_0xAFAA7D018FC27569(unk_0xA2EA4BA455370F3C(iVar4));
						iVar14 = 0;
						if (unk_0xDC5D81351D6A4DDB(iVar5))
						{
							if (unk_0xFAC06EE780B57279(iVar5))
							{
								if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
								{
									iVar15 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
								}
								else
								{
									iVar15 = unk_0xC409B91AC4749F88();
								}
								if (unk_0xDC5D81351D6A4DDB(iVar15) && unk_0xB86D86A5DBBC79F0(iVar5) == iVar15)
								{
									iVar14 = 1;
								}
							}
						}
						if ((unk_0x281590680327CDEA(iVar5) && unk_0xEE978C39384D834F(unk_0xA6580F898F4E801C()) == unk_0xA2EA4BA455370F3C(iVar5)) || iVar14)
						{
							if (unk_0x281590680327CDEA(iVar5))
							{
								iVar6 = unk_0x80391399CAD5BAD3(unk_0xA2EA4BA455370F3C(iVar4));
								if (Global_56210 > 0)
								{
									iVar11 = func_107(iVar4);
									if (iVar11 != -1)
									{
										unk_0xB336CF1984A5FB68(unk_0xA2EA4BA455370F3C(Global_56211[iVar11 /*2*/]), &iLocal_67);
										if (iLocal_67 == 31086 || iLocal_67 == 39317)
										{
											if (iVar6 != 0 && iVar6 != joaat("weapon_unarmed"))
											{
												func_106();
												Global_56211[iVar11 /*2*/] = 0;
												Global_56210 = (Global_56210 - 1);
											}
										}
									}
								}
								if (Global_68472 > 0)
								{
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < Global_68472)
									{
										if (Global_68463[iVar1 /*2*/] == iVar6)
										{
											func_94(Global_68463[iVar1 /*2*/].f_1, 1, 0);
										}
										iVar1++;
									}
								}
							}
							if (Global_68428)
							{
								iVar12 = unk_0xA2EA4BA455370F3C(iVar4);
								iVar13 = unk_0x207C248DED047438(iVar12);
								if (!unk_0x4943BEEC19289B8E(iVar4) && ((((((!iVar13 == 22 && !iVar13 == 19) && !iVar13 == 17) && !iVar13 == 18) && !iVar13 == 27) && !iVar13 == 29) && !iVar13 == 28))
								{
									iVar9 = unk_0x767A7F2E0CC3C584(unk_0xEE978C39384D834F(unk_0xA6580F898F4E801C()), unk_0xA2EA4BA455370F3C(iVar4));
									switch (iVar9)
									{
										case 255:
										case 0:
										case 1:
										case 2:
											if (unk_0x1CD7BDCAD03C3774(unk_0xA2EA4BA455370F3C(iVar4)))
											{
												func_105();
											}
											break;
										
										default:
											break;
										}
									}
							}
							if (Global_68462 > 0)
							{
								iVar1 = 0;
								iVar2 = Global_68462;
								bVar8 = false;
								while (!bVar8)
								{
									if (Global_68429[iVar1 /*2*/] != 0)
									{
										if (unk_0xDC5D81351D6A4DDB(Global_68429[iVar1 /*2*/]))
										{
											if (unk_0x7112137033807390(Global_68429[iVar1 /*2*/], 0))
											{
												if (Global_68429[iVar1 /*2*/] == iVar4)
												{
													func_94(Global_68429[iVar1 /*2*/].f_1, 1, 0);
													Global_68429[iVar1 /*2*/] = 0;
												}
											}
										}
										else
										{
											Global_68429[iVar1 /*2*/] = 0;
										}
										iVar2 = (iVar2 - 1);
									}
									iVar1++;
									if (iVar1 == 16 || iVar2 == 0)
									{
										bVar8 = true;
									}
								}
								if (Global_68462 > 0)
								{
									while (Global_68429[(Global_68462 - 1) /*2*/] == 0 && Global_68462 > 1)
									{
										if (Global_68462 > 1)
										{
											Global_68462 = (Global_68462 - 1);
										}
									}
								}
							}
						}
					}
				}
				break;
		}
		iVar0++;
	}
	if (iVar10 > 0)
	{
		func_104(iVar10);
	}
}

void func_104(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_68276)
	{
		iVar1 = Global_68277[iVar0 /*9*/];
		if (Global_56406[iVar1 /*13*/] == 13)
		{
			Global_68277[iVar0 /*9*/].f_1 = (Global_68277[iVar0 /*9*/].f_1 + iParam0);
		}
		iVar0++;
	}
}

void func_105()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_68276)
	{
		iVar1 = Global_68277[iVar0 /*9*/];
		if (Global_56406[iVar1 /*13*/] == 16)
		{
			Global_68277[iVar0 /*9*/].f_1++;
		}
		iVar0++;
	}
}

void func_106()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (Global_56210 == 0)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < Global_68276)
	{
		iVar2 = Global_68277[iVar1 /*9*/];
		if (Global_56406[iVar2 /*13*/] == 7)
		{
			Global_68277[iVar1 /*9*/].f_1++;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

int func_107(int iParam0)
{
	int iVar0;
	
	if (Global_56210 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_56211[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_108()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (unk_0xF8FA87FAA80E5740())
	{
		if (unk_0x09BBC582F55D3693() == 33)
		{
			if (unk_0x64D864E3B2B408C8() == 33)
			{
				iVar0 = unk_0xFB4895AF0E4F1A6F();
				iVar1 = -1;
				iVar2 = (iVar0 - 4);
				if (((iVar0 - 4) % 3) == 0)
				{
					iVar0 = ((iVar0 - 4) / 3);
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < iVar0)
					{
						iVar4 = unk_0x8196A8B7DD22D67D(iVar3 * 3 + 1);
						iVar5 = unk_0x8196A8B7DD22D67D(iVar3 * 3 + 2);
						switch (iVar5)
						{
							case 84:
							case 100:
							case 69:
							case 41:
							case 54:
								iVar1 = iVar4;
								break;
						}
						func_85(iVar4, iVar5);
						iVar3++;
					}
					iVar6 = unk_0x8196A8B7DD22D67D(iVar2);
					iVar7 = unk_0x8196A8B7DD22D67D(iVar2 + 1);
					bVar8 = false;
					if (unk_0x8196A8B7DD22D67D(iVar2 + 2) > 0)
					{
						bVar8 = true;
					}
					iVar9 = 0;
					if (unk_0x8196A8B7DD22D67D(iVar2 + 3) > 0)
					{
						iVar9 = 1;
					}
					Global_68426 = iVar9;
					Global_68427 = iVar6;
					if (iVar1 == -1)
					{
						func_73(to_float(iVar7), bVar8);
					}
					else
					{
						func_73(to_float(iVar1), bVar8);
					}
				}
				func_109();
			}
		}
		if (unk_0x09BBC582F55D3693() == 13)
		{
			if (unk_0x64D864E3B2B408C8() == 37)
			{
				iVar10 = unk_0xFB4895AF0E4F1A6F();
				if (iVar10 == 3)
				{
					iVar11 = unk_0x8196A8B7DD22D67D(0);
					iVar12 = unk_0x8196A8B7DD22D67D(1);
					iVar13 = unk_0x8196A8B7DD22D67D(2);
					Global_106070.f_2344[iVar11 /*2*/] = iVar12;
					Global_106070.f_2344[iVar11 /*2*/].f_1 = iVar13;
					func_109();
				}
			}
		}
	}
}

int func_109()
{
	if (func_96(0))
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

void func_110()
{
	Global_71465 = 0;
	Global_71466 = 0;
	Global_56181 = 0;
	settimera(0);
	settimerb(0);
	unk_0x21727E2C492FE1B3();
	iLocal_60 = 0;
	Global_56177 = 0;
	Global_56191 = -1;
	iLocal_70 = 0;
	Global_56175 = 0;
	Global_56174 = 0;
	iLocal_72 = 0;
	Global_56192 = 0;
	Global_56190 = 0;
	Global_56171 = 0;
	Global_68472 = 0;
	Global_68462 = 0;
	func_4();
	func_3();
	if (bLocal_73)
	{
		func_1(&Local_45);
		bLocal_73 = false;
	}
	if (Global_3)
	{
		unk_0x8F1A9FE6D91AAFEB();
	}
	Global_56186 = 0;
	Global_56182 = 0;
}

