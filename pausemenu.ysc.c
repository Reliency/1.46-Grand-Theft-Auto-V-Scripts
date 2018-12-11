#region Local Var
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	switch (ScriptParam_0)
	{
		case 3:
			while (true)
			{
				wait(5000);
			}
			break;
		
		case 2:
			if (ScriptParam_0.f_1 == -1029820160)
			{
			}
			break;
		
		case 0:
		case 1:
			if (ScriptParam_0.f_1 == -1931845307)
			{
				func_2(1, 0, -1029819160, 0, 1, "PM_PANE_AUD");
				func_2(1, 1, -1029819160, 1, 0, "PM_PANE_DIS");
				func_1(1);
			}
			if (ScriptParam_0.f_1 == -1029820160)
			{
			}
			break;
	}
	unk_0x8F1A9FE6D91AAFEB();
}

void func_1(int iParam0)
{
	if (unk_0xD56584987F6EA23F("DISPLAY_DATA_SLOT"))
	{
		unk_0x380580A1A1667F69(iParam0);
		unk_0x271C1332F482646C();
	}
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5)
{
	if (unk_0xD56584987F6EA23F("SET_DATA_SLOT"))
	{
		unk_0x380580A1A1667F69(iParam0);
		unk_0x380580A1A1667F69(iParam1);
		unk_0x380580A1A1667F69(iParam2);
		unk_0x380580A1A1667F69(iParam3);
		unk_0x380580A1A1667F69(0);
		unk_0x380580A1A1667F69(0);
		if (bParam4)
		{
			unk_0x380580A1A1667F69(1);
		}
		else
		{
			unk_0x380580A1A1667F69(0);
		}
		func_3(sParam5);
		unk_0x271C1332F482646C();
	}
}

void func_3(char* sParam0)
{
	unk_0x390B339C943A8A54(sParam0);
	unk_0xD481829E3E36543B();
}

