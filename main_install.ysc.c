#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	iLocal_0 = -1;
	unk_0x5341E3E598550C46();
	unk_0x1639295C71657BCF("prologue06_int");
	unk_0x1639295C71657BCF("prologue01");
	unk_0x1639295C71657BCF("prologue02");
	unk_0x1639295C71657BCF("prologue03");
	unk_0x1639295C71657BCF("prologue04");
	unk_0x1639295C71657BCF("prologue05");
	unk_0x1639295C71657BCF("prologue06");
	unk_0x1639295C71657BCF("prologuerd");
	unk_0x1639295C71657BCF("Prologue01c");
	unk_0x1639295C71657BCF("Prologue01d");
	unk_0x1639295C71657BCF("Prologue01e");
	unk_0x1639295C71657BCF("Prologue01f");
	unk_0x1639295C71657BCF("Prologue01g");
	unk_0x1639295C71657BCF("prologue01h");
	unk_0x1639295C71657BCF("prologue01i");
	unk_0x1639295C71657BCF("prologue01j");
	unk_0x1639295C71657BCF("prologue01k");
	unk_0x1639295C71657BCF("prologue01z");
	unk_0x1639295C71657BCF("prologue03b");
	unk_0x1639295C71657BCF("prologue04b");
	unk_0x1639295C71657BCF("prologue05b");
	unk_0x1639295C71657BCF("prologue06b");
	unk_0x1639295C71657BCF("prologuerdb");
	unk_0x1639295C71657BCF("prologue_occl");
	unk_0x1639295C71657BCF("DES_ProTree_start");
	unk_0x1639295C71657BCF("DES_ProTree_start_lod");
	unk_0x1639295C71657BCF("prologue04_cover");
	unk_0x1639295C71657BCF("prologue03_grv_fun");
	unk_0x981516504EAE59E2("prologue03_grv_dug");
	unk_0x981516504EAE59E2("prologue_grv_torch");
	unk_0x8422F72077AB2D3E("prologue", 1);
	unk_0xCACEBBBEAD8F262E(joaat("csb_prolsec"));
	while (!unk_0x7FC99CCC73354033(joaat("csb_prolsec")))
	{
		wait(0);
	}
	unk_0x041B27626566B361(unk_0xD4E735F4B6A956AC(), joaat("csb_prolsec"));
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 5313.8f, -5207.2f, 83.5f, 1, false, 0, 1);
		unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 169.2f);
	}
	unk_0xDC374DA4DC566237(false);
	unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 0);
	unk_0x543A213BF1AB6832(5312.996f, -5208.671f, 83.90526f, 10f, 0);
	iVar0 = unk_0xFD34717937104F1C() + 10000;
	while (!unk_0xD3512CB88BB3513F() && unk_0xFD34717937104F1C() < iVar0)
	{
		wait(0);
	}
	unk_0x3F79D277EE09D761();
	unk_0x8969D02DEDC106D2("MISSION_FAILED_SCENE");
	unk_0x70C1F5AA59767FE6(2500);
	unk_0x99D88BBC8B927586();
	unk_0x6A633E13B2A856AE("NG_INSTALL", 0);
	while (true)
	{
		if (!unk_0x3A83743561B4F70C())
		{
			unk_0x70C1F5AA59767FE6(0);
		}
		unk_0xFF35427AF9343886(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
		unk_0xFF35427AF9343886(0.5f, 0.5f, 0.8f, 0.8f, 20, 20, 20, 255, 0);
		unk_0xFD5A6B90A46ACED0(0.5f, 0.5f);
		unk_0x2D2243C8547A3F8B(1);
		if (timera() > 10000 && unk_0xD744813D9841CA9A(0))
		{
			iLocal_0 = unk_0x22C775856F4633CA(0, 5);
			if ((iLocal_0 - iLocal_1) != 0)
			{
				iLocal_1 = iLocal_0;
				settimera(0);
			}
		}
		else
		{
			switch (iLocal_0)
			{
				case 0:
					func_1(0.5f, 0.4f, "NG_INST_TT_1", 0);
					break;
				
				case 1:
					func_1(0.5f, 0.4f, "NG_INST_TT_2", 0);
					break;
				
				case 2:
					func_1(0.5f, 0.4f, "NG_INST_TT_3", 0);
					break;
				
				case 3:
					func_1(0.5f, 0.4f, "NG_INST_TT_4", 0);
					break;
				
				case 4:
					func_1(0.5f, 0.4f, "NG_INST_TT_5", 0);
					break;
				}
		}
		unk_0xD0F5726B351557F4();
		if (unk_0x0A2ECA9C46F27D10())
		{
			unk_0xA3362877364C122E();
			return;
		}
		wait(0);
	}
}

void func_1(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x7C25BC565D364568(sParam2);
	unk_0xB435CE12BEF0DBF7(fParam0, fParam1, iParam3);
}

