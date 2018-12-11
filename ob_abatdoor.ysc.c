#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	vector3 vLocal_4 = { 0f, 0f, 0f };
	vector3 vLocal_5 = { 0f, 0f, 0f };
	int iLocal_6 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (unk_0x5EBD03AF78E7B4DB(2))
	{
		func_4();
	}
	if (unk_0xDC5D81351D6A4DDB(iScriptParam_6))
	{
		unk_0xB29E08C7AB729BAD(iScriptParam_6, true);
		vLocal_4 = { unk_0xE2BBD32891C18569(iScriptParam_6, true) };
		vLocal_5 = { unk_0x288B716F47E9BBBC(iScriptParam_6, 2) };
	}
	while (true)
	{
		wait(0);
		if (unk_0xDC5D81351D6A4DDB(iScriptParam_6))
		{
			if (unk_0x1E99F8A10D565A13(iScriptParam_6))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0xC2336726092EE80B(iScriptParam_6))
						{
							unk_0xCACEBBBEAD8F262E(joaat("p_abat_roller_1_col"));
							if (unk_0x7FC99CCC73354033(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(vLocal_4, 0f, 0f, 0f, 0))
								{
									iLocal_3 = unk_0xFCFC8CC5FF74580D(joaat("p_abat_roller_1_col"), vLocal_4, true, true, false);
									unk_0x76D3D51F5F66367F(iLocal_3, vLocal_5, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0xC2336726092EE80B(iScriptParam_6))
						{
							if (unk_0x8B1574454E8C2421(joaat("michael2")) > 0)
							{
								unk_0x6D68030C791111E0("map_objects");
								if (unk_0x39C2D9AB77873F84("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0xC2336726092EE80B(iScriptParam_6))
						{
							if (unk_0x8B1574454E8C2421(joaat("michael2")) > 0)
							{
								if (Global_89758)
								{
									if (unk_0x39C2D9AB77873F84("map_objects"))
									{
										unk_0x63B4688F43DF17B7(iScriptParam_6, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0f, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar3 = 0.35f;
						vVar0 = { vLocal_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0xDC5D81351D6A4DDB(iLocal_3))
						{
							vVar1 = { unk_0xE2BBD32891C18569(iLocal_3, true) };
							if (!func_2(vVar1, vVar0, 0.1f, 0))
							{
								vVar2 = { vVar0 - vVar1 };
								unk_0x4299736016AECE26(iLocal_3, vVar1 + func_1(vVar2) * FtoV(unk_0xDE089748C4C76C96()) * Vector(fVar3, fVar3, fVar3), 1, false, 0, 1);
							}
							else
							{
								Global_89759 = 1;
								iLocal_2 = 4;
							}
						}
						break;
					
					case 4:
						break;
				}
			}
			else
			{
				func_4();
			}
		}
		else
		{
			func_4();
		}
	}
}

Vector3 func_1(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

int func_2(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x69C0BB7D03EE045D((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (unk_0x69C0BB7D03EE045D((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (unk_0x69C0BB7D03EE045D((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x69C0BB7D03EE045D((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (unk_0x69C0BB7D03EE045D((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_3(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_4()
{
	if (unk_0xDC5D81351D6A4DDB(iLocal_3))
	{
		unk_0xC0AC848E56940C34(&iLocal_3);
	}
	unk_0xA5DE74AE39867B03(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x8F1A9FE6D91AAFEB();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(char* sParam0)
{
	if (unk_0x3CAC2741CC1A631F(sParam0, sParam0))
	{
	}
}

