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
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	vector3 vLocal_45 = { 0f, 0f, 0f };
	int iLocal_46 = 0;
	var uLocal_47 = 0;
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
	if (unk_0x5EBD03AF78E7B4DB(11))
	{
		iLocal_43 = 5;
	}
	while (true)
	{
		wait(0);
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			switch (iLocal_43)
			{
				case 0:
					func_9();
					break;
				
				case 1:
					break;
				
				case 2:
					func_8();
					if (unk_0x4C9BACA8D249CB13())
					{
						if (unk_0xB992A47FF58D1555(7, unk_0xA19140A5C42D8715(), 2, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = unk_0xFD34717937104F1C();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x4E27F73A7FFC8871(7, vLocal_45, 2, 3f, &uLocal_47, 0, 0))
					{
						iLocal_46 = unk_0xFD34717937104F1C();
						iLocal_43 = 5;
					}
					break;
				
				case 3:
					func_8();
					if (unk_0x4C9BACA8D249CB13())
					{
						if ((func_7(unk_0xD4E735F4B6A956AC(), 0) && func_4(unk_0xD4E735F4B6A956AC()) == 5) && Global_1684940)
						{
							if (Global_1684941 == 0)
							{
								Global_1684941 = 1;
							}
							iLocal_43 = 5;
						}
						else if (unk_0xB992A47FF58D1555(5, unk_0xA19140A5C42D8715(), 2, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = unk_0xFD34717937104F1C();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x4E27F73A7FFC8871(5, vLocal_45, 2, 3f, &uLocal_47, 0, 0))
					{
						iLocal_46 = unk_0xFD34717937104F1C();
						iLocal_43 = 5;
					}
					break;
				
				case 4:
					func_8();
					if (unk_0x4C9BACA8D249CB13())
					{
						if (unk_0xB992A47FF58D1555(3, unk_0xA19140A5C42D8715(), 4, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = unk_0xFD34717937104F1C();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x4E27F73A7FFC8871(3, vLocal_45, 4, 3f, &uLocal_47, 0, 0))
					{
						if (Global_89824.f_358 == unk_0xFEB6EEC0545AF7AA("AGENCY_PREP_1") || (unk_0x8B1574454E8C2421(unk_0xFEB6EEC0545AF7AA("agency_prep1")) > 0 && func_3(0)))
						{
							Global_89824.f_358 = unk_0xFEB6EEC0545AF7AA("AHP1_TRUCKCALLED");
						}
						else if (func_2(67) && !func_2(68))
						{
							Global_89754 = 1;
						}
						iLocal_46 = unk_0xFD34717937104F1C();
						iLocal_43 = 5;
					}
					break;
				
				case 5:
					if (unk_0xFD34717937104F1C() > (iLocal_46 + 60000) || !unk_0x1300A1C84690C199(uLocal_47))
					{
						func_1();
					}
					else if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
					{
						if (!unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
						{
							if (unk_0x1300A1C84690C199(uLocal_47))
							{
								unk_0x2E5E25A43D4582A2(uLocal_47);
							}
						}
					}
					break;
				}
		}
	}
}

void func_1()
{
	iLocal_43 = 0;
	iLocal_44 = 0;
	unk_0x8F1A9FE6D91AAFEB();
}

int func_2(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106070.f_9057.f_330[iParam0 /*6*/];
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

int func_4(int iParam0)
{
	if (func_6(iParam0) == 233)
	{
		return func_5(iParam0);
	}
	return -1;
}

int func_5(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_176;
	}
	return -1;
}

int func_6(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_33;
	}
	return -1;
}

int func_7(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_33 != -1 || (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if (unk_0xFD34717937104F1C() > iLocal_46 + 30000)
	{
		iLocal_43 = 5;
	}
}

void func_9()
{
	var uVar0;
	
	switch (iLocal_44)
	{
		case 0:
			iLocal_44 = 1;
			iLocal_46 = unk_0xFD34717937104F1C();
			break;
		
		case 1:
			while (!func_18())
			{
				wait(0);
				if (func_17() == 3)
				{
					iLocal_43 = 3;
				}
				if (func_17() == 4)
				{
					iLocal_43 = 4;
				}
				if (func_17() == 5)
				{
					iLocal_43 = 2;
				}
				if (unk_0xFD34717937104F1C() > iLocal_46 + 30000)
				{
					iLocal_46 = unk_0xFD34717937104F1C();
					func_12(0);
				}
			}
			if (iLocal_43 == 0)
			{
				iLocal_43 = 5;
			}
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				func_10(unk_0xA19140A5C42D8715(), &vLocal_45, &uVar0);
			}
			iLocal_46 = unk_0xFD34717937104F1C();
			break;
	}
}

void func_10(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	vector3 vVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	vector3 vVar17;
	var uVar18;
	
	fVar12 = 5f;
	iVar0 = 1;
	iVar13 = 0;
	while (iVar13 < 2)
	{
		switch (iVar13)
		{
			case 0:
				unk_0xE23D832FD873880A(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), iVar0, uParam1, &fVar10, &iVar1, 5, 3f, 0f);
				unk_0x7085BC35C02B7DAF(*uParam1, 1f, 1, &uVar4, &uVar5, &uVar2, &uVar3, &fVar7, 0);
				if (unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), false), -3044.66f, 596.43f, 6.58f, true) < 25f)
				{
					*uParam1 = { -3031.38f, 605.32f, 6.86f };
				}
				vVar6 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) - unk_0xE2BBD32891C18569(iParam0, true) };
				fVar8 = unk_0x0C1B8F3F6EFDC58B(vVar6.x, vVar6.y);
				fVar9 = (fVar10 + 180f);
				if (fVar9 > 360f)
				{
					fVar9 = (fVar9 - 360f);
				}
				if (func_11(fVar8, fVar10, 90f))
				{
					*uParam2 = fVar10;
				}
				else
				{
					*uParam2 = fVar9;
				}
				if (fVar7 < 0f)
				{
					fVar11 = 0f;
				}
				else if (unk_0xE8509487D07FBBAB(unk_0xD48AF06A1B183940(*uParam1, 1, 1, 1077936128, 0)))
				{
					fVar11 = 0f;
				}
				else
				{
					fVar11 = (fVar12 * to_float((iVar1 / 2)));
					if (fVar11 == 0f)
					{
						fVar11 = (fVar11 + fVar12);
					}
					if (iVar1 == 5)
					{
						fVar11 = (fVar11 + fVar12);
					}
					if (unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), false), 294f, -895f, 28f, true) < 25f || unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), false), -713.01f, -819.64f, 22.63f, true) < 25f)
					{
						fVar11 = (fVar11 + 5f);
					}
					else
					{
						fVar11 = (fVar11 + 3.75f);
					}
					fVar11 = (fVar11 + (fVar7 / 2f));
				}
				if (vdist(unk_0x2F230B37E9FFF23F(*uParam1, *uParam2, fVar11, 0f, 0f), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true)) > vdist(unk_0x2F230B37E9FFF23F(*uParam1, *uParam2, -fVar11, 0f, 0f), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true)))
				{
					fVar11 = -fVar11;
				}
				*uParam1 = { unk_0x2F230B37E9FFF23F(*uParam1, *uParam2, fVar11, 0f, 0f) };
				iVar14 = unk_0x2655F64CD0F70A6B(*uParam1 + FtoV((uParam1->f_2 + 4.5f)), *uParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, 0, 4);
				iVar13++;
				break;
			
			case 1:
				if (iVar0 <= 2)
				{
					if (unk_0x7C00B4755E048785(iVar14, &iVar15, &vVar17, &uVar16, &uVar18) == 2)
					{
						if (iVar15 != 0)
						{
							if (vVar17.z > (uParam1->f_2 + 8.5f))
							{
								iVar13++;
							}
							else
							{
								iVar0++;
								iVar13 = 0;
							}
						}
						else
						{
							iVar13++;
						}
					}
				}
				else
				{
					iVar13++;
				}
				break;
			
			case 2:
				break;
		}
	}
}

int func_11(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

void func_12(int iParam0)
{
	if (func_16())
	{
		return;
	}
	if (Global_14681)
	{
		func_14(0, 0);
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
	if (!func_13())
	{
		Global_14513.f_1 = 3;
	}
}

int func_13()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0))
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

int func_15(int iParam0)
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

bool func_16()
{
	return unk_0x05EFB6A616B6FADE(Global_1678593, 19);
}

int func_17()
{
	return Global_16839;
}

int func_18()
{
	if (Global_15822 == 0)
	{
		return 1;
	}
	return 0;
}

