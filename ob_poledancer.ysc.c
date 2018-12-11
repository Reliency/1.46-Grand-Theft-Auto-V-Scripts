#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	vector3 vLocal_2 = { 0f, 0f, 0f };
	float fLocal_3 = 0f;
	char* sLocal_4 = NULL;
	int iLocal_5 = 0;
	char* sLocal_6 = NULL;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
#endregion

void __EntryFunction__()
{
	sLocal_4 = "Poledance_01";
	iLocal_5 = joaat("a_f_y_beach_01");
	sLocal_6 = "MISSSTRIP_CLUB";
	if (unk_0xDC5D81351D6A4DDB(iScriptParam_8))
	{
		unk_0xB29E08C7AB729BAD(iScriptParam_8, true);
		vLocal_2 = { unk_0x3201284584C7CD83(iScriptParam_8, 0f, 0f, 0f) };
		fLocal_3 = unk_0x552C823E1D2A019C(iScriptParam_8);
		unk_0xDCFB67537602326F(iScriptParam_8, false, 0);
	}
	while (true)
	{
		wait(0);
		if (unk_0xDC5D81351D6A4DDB(iScriptParam_8))
		{
			if (unk_0x1E99F8A10D565A13(iScriptParam_8))
			{
				switch (iLocal_0)
				{
					case 0:
						if (func_5())
						{
							func_4();
							iLocal_0 = 2;
						}
						break;
					
					case 2:
						func_3();
						if (func_2())
						{
							unk_0xDCFB67537602326F(iScriptParam_8, true, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0x4915F4759304D5CF(iLocal_1))
						{
							unk_0xCE889E9ADEDDE843(iLocal_1, -1);
							unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 1);
							unk_0xD738221C247C8B71(iLocal_1, true);
							unk_0x8F1A9FE6D91AAFEB();
						}
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
	if (!unk_0x7112137033807390(iLocal_1, 0))
	{
		if (!unk_0x1A8481A7E865EC7C(iLocal_1))
		{
			unk_0x680F17660351F21B(&iLocal_1);
		}
		else
		{
			unk_0xD738221C247C8B71(iLocal_1, true);
		}
	}
	unk_0x8F1A9FE6D91AAFEB();
}

int func_2()
{
	vector3 vVar0;
	
	vVar0 = { 2f, 2f, 0.5f };
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (!unk_0x4915F4759304D5CF(iLocal_1))
		{
			if (unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_1, vVar0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0xDEAEC99031DCB92A(iLocal_1, unk_0xA19140A5C42D8715(), 1))
			{
				return 1;
			}
			if (unk_0xC556072C29E00F04(unk_0xA19140A5C42D8715(), iLocal_1))
			{
				return 1;
			}
		}
		if (unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0x4915F4759304D5CF(iLocal_1))
	{
		if (unk_0xF9D4EF1338E38AFB(iLocal_1, -2017877118) == 7)
		{
			unk_0x3F01127ECD227890(iLocal_1, sLocal_6, sLocal_4, 8f, -8f, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0x5F21CBE9EE983D4F(iLocal_1, sLocal_6, sLocal_4, 3))
		{
			unk_0x3F01127ECD227890(iLocal_1, sLocal_6, sLocal_4, 8f, -8f, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_7)
		{
			if (unk_0x411C28019DEA5CEF(iLocal_1, sLocal_6, sLocal_4, 3))
			{
				unk_0x9F547C61053A0649(iLocal_1, sLocal_6, sLocal_4, unk_0xF59B9063EDAC7451(0f, 1f));
				iLocal_7 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0x7112137033807390(iLocal_1, 0))
	{
		iLocal_1 = unk_0x35C6E06B120EB2E3(5, iLocal_5, vLocal_2.x, vLocal_2.y, vLocal_2.z, fLocal_3, 1, true);
		unk_0x8695E04AA104690A(iLocal_1, 0);
		unk_0x96BFF0680C7B6FD5(iLocal_1, false);
		unk_0x1F4E5EFBFE503FB3(iLocal_1, true);
	}
}

int func_5()
{
	unk_0xCACEBBBEAD8F262E(iLocal_5);
	unk_0x6D68030C791111E0(sLocal_6);
	if (unk_0x7FC99CCC73354033(iLocal_5) && unk_0x39C2D9AB77873F84(sLocal_6))
	{
		return 1;
	}
	else
	{
		unk_0xCACEBBBEAD8F262E(iLocal_5);
		unk_0x6D68030C791111E0(sLocal_6);
	}
	return 0;
}

