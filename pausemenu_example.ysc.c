#region Local Var
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
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
		
		case 0:
		case 1:
			if (ScriptParam_0.f_1 == -1931845307)
			{
				func_2(1, 0, -1705870862, 25, 1, "PM_PANE_AUD", 0, 0);
				func_2(1, 1, -1705870862, 50, 1, "PM_PANE_DIS", 0, 0);
				func_1(1);
			}
			if (ScriptParam_0.f_1 == -1705871862)
			{
			}
			break;
		
		case 2:
			switch (ScriptParam_0.f_1)
			{
				case -1931845307:
					break;
				
				case -1705871862:
					switch (ScriptParam_0.f_3)
					{
						case 25:
							break;
						
						case 50:
							break;
					}
					break;
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

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, int iParam6, int iParam7)
{
	if (unk_0xD56584987F6EA23F("SET_DATA_SLOT"))
	{
		unk_0x380580A1A1667F69(iParam0);
		unk_0x380580A1A1667F69(iParam1);
		unk_0x380580A1A1667F69(iParam2);
		unk_0x380580A1A1667F69(iParam3);
		unk_0x380580A1A1667F69(iParam7);
		unk_0x380580A1A1667F69(0);
		if (bParam4)
		{
			unk_0x380580A1A1667F69(1);
		}
		else
		{
			unk_0x380580A1A1667F69(0);
		}
		if (iParam6 == 0)
		{
			func_3(sParam5);
		}
		else
		{
			unk_0x0BAAED7962F122D5(sParam5);
		}
		unk_0x271C1332F482646C();
	}
}

void func_3(char* sParam0)
{
	unk_0x390B339C943A8A54(sParam0);
	unk_0xD481829E3E36543B();
}

