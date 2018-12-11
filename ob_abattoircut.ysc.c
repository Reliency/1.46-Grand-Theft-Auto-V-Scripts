#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x5EBD03AF78E7B4DB(2))
	{
		func_1();
	}
	if (unk_0xDC5D81351D6A4DDB(iScriptParam_3))
	{
		unk_0xB29E08C7AB729BAD(iScriptParam_3, true);
	}
	while (true)
	{
		wait(0);
		if (unk_0xDC5D81351D6A4DDB(iScriptParam_3))
		{
			if (unk_0x1E99F8A10D565A13(iScriptParam_3) && unk_0x8B1574454E8C2421(joaat("michael2")) > 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0xC2336726092EE80B(iScriptParam_3))
						{
							unk_0x6D68030C791111E0("MISSMIC2");
							if (unk_0x39C2D9AB77873F84("MISSMIC2"))
							{
								unk_0x63B4688F43DF17B7(iScriptParam_3, "beefsplitter_loop", "MISSMIC2", 1f, 1, 0, 0, 0f, 0);
								iLocal_2 = 1;
							}
						}
						break;
					
					case 1:
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	func_2("ob_abattoir Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x4DC885EA8D6AF7FC("MISSMIC2");
	unk_0x8F1A9FE6D91AAFEB();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(char* sParam0)
{
	if (unk_0x3CAC2741CC1A631F(sParam0, sParam0))
	{
	}
}

