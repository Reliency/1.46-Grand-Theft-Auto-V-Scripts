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
	int iLocal_19 = 0;
	int iLocal_20 = 0;
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
	if (unk_0x5EBD03AF78E7B4DB(2) || unk_0x0CDCCA8C10FD93C4())
	{
		unk_0x8F1A9FE6D91AAFEB();
	}
	func_1();
}

void func_1()
{
	vector3 vVar0;
	var uVar1;
	
	while (!func_8(&iLocal_20))
	{
		wait(0);
	}
	if (!unk_0x4915F4759304D5CF(iLocal_20))
	{
		if (!Global_89822)
		{
			unk_0x1F7948851FB36E88(iLocal_20, true, 1);
			if (unk_0xF9D4EF1338E38AFB(iLocal_20, 1435919172) != 7)
			{
				unk_0x9568B1B58F78FF36(iLocal_20);
			}
			vVar0 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0) };
			unk_0x1F4E5EFBFE503FB3(iLocal_20, 1);
			unk_0x2F89329397A277BC(&uVar1);
			if (!unk_0x5D7DFE2058701942(iLocal_20, 0))
			{
				if (!unk_0x967743032563101F(iLocal_20, 0) && !unk_0x5D7DFE2058701942(iLocal_20, 0))
				{
					unk_0xD87AD31611110768(0, vVar0, 6000);
				}
			}
			unk_0x8CBE3882704F529D(0, vVar0, 6000, 0, 2);
			unk_0x301F42EEE3C40328(uVar1);
			unk_0xE1072FA2FECBAD96(iLocal_20, uVar1);
		}
		func_2(iLocal_20);
	}
	while (!unk_0x71364F510A1CB69F())
	{
		wait(0);
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_20))
	{
		if (!unk_0x4915F4759304D5CF(iLocal_20))
		{
			unk_0xD738221C247C8B71(iLocal_20, 1);
		}
		unk_0x7E4E83D33161D01A(&iLocal_20);
	}
	Global_89822 = 0;
	unk_0x8F1A9FE6D91AAFEB();
}

void func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xFD34717937104F1C() + 1000;
	while (unk_0xFD34717937104F1C() < iVar0 && !unk_0x71364F510A1CB69F())
	{
		wait(0);
	}
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		if (iLocal_19 == 1)
		{
			switch (func_5(unk_0xA19140A5C42D8715()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "FRANKLIN_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "FRANKLIN_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 2)
		{
			switch (func_5(unk_0xA19140A5C42D8715()))
			{
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "TREVOR_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "TREVOR_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 0)
		{
			switch (func_5(unk_0xA19140A5C42D8715()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "MICHAEL_NORMAL", 3);
					break;
				
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "MICHAEL_NORMAL", 3);
					break;
				}
			}
	}
}

void func_3(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x85AF6DC3641E2442(iParam0, sParam1, sParam2, func_4(iParam3), 0);
}

int func_4(int iParam0)
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

int func_5(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_6(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_6(int iParam0)
{
	if (func_7(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_7(int iParam0)
{
	return iParam0 < 3;
}

int func_8(var uParam0)
{
	int iVar0;
	
	iLocal_18 = 0;
	while (iLocal_18 < 9)
	{
		if (unk_0xDC5D81351D6A4DDB(Global_90696[iLocal_18]) && !unk_0x4915F4759304D5CF(Global_90696[iLocal_18]))
		{
			if (Global_90696[iLocal_18] != unk_0xA19140A5C42D8715())
			{
				if (!unk_0x4943BEEC19289B8E(Global_90696[iLocal_18]))
				{
					if (unk_0x5D7DFE2058701942(Global_90696[iLocal_18], 0) || !unk_0xF797E4DD45066C88(Global_90696[iLocal_18]))
					{
						if (unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(Global_90696[iLocal_18], 1), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0), true) < 10f)
						{
							iLocal_19 = func_5(Global_90696[iLocal_18]);
							if ((iLocal_19 == 0 || iLocal_19 == 2) || iLocal_19 == 1)
							{
								if (iLocal_19 != func_9())
								{
									if (unk_0x58DE86018EA47551(Global_90696[iLocal_18], unk_0xA19140A5C42D8715(), 17))
									{
										if (unk_0x5D7DFE2058701942(Global_90696[iLocal_18], 0))
										{
											iVar0 = unk_0xCAEB6CE71A2C7212(Global_90696[iLocal_18], 0);
										}
										if ((unk_0xDC5D81351D6A4DDB(iVar0) && unk_0x1095F403F52B42E1(iVar0, 0)) || !unk_0xDC5D81351D6A4DDB(iVar0))
										{
											*uParam0 = Global_90696[iLocal_18];
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_18++;
	}
	if (unk_0x71364F510A1CB69F())
	{
		return 1;
	}
	return 0;
}

int func_9()
{
	func_10();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_10()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_6(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_5(unk_0xA19140A5C42D8715());
			if (func_7(iVar0) && (!func_11(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_7(Global_106070.f_2355.f_539.f_4301))
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

bool func_11(int iParam0)
{
	return Global_36117 == iParam0;
}

