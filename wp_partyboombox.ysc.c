#region Local Var
	int iLocal_0 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x8B1574454E8C2421(joaat("wp_partyboombox")) > 1)
	{
		unk_0x8F1A9FE6D91AAFEB();
	}
	if (unk_0x5EBD03AF78E7B4DB(18))
	{
		func_1();
	}
	while (true)
	{
		wait(0);
		if (!unk_0x1F85F8C7CC4639AE())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (unk_0x34CEB9721AC6A0A9() >= 22 || unk_0x34CEB9721AC6A0A9() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!unk_0x471855870C045BD0("ID2_21_G_Night"))
				{
					unk_0x1639295C71657BCF("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!unk_0xE6F861B0A4D50CE0() && !unk_0x47C3DC461C758C29())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (unk_0x471855870C045BD0("ID2_21_G_Night"))
	{
		unk_0x981516504EAE59E2("ID2_21_G_Night");
	}
	unk_0x8F1A9FE6D91AAFEB();
}

