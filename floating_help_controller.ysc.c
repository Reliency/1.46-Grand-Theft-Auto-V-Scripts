void __EntryFunction__()
{
	unk_0x5341E3E598550C46();
	while (true)
	{
		wait(0);
		func_1();
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_104722)
	{
		if (Global_104722[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (unk_0xFD34717937104F1C() > Global_104722[iVar0 /*28*/].f_21 && Global_104722[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					unk_0xC47B4E7E5C4ACE12(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_104722[iVar0 /*28*/].f_21 != -1)
				{
					if (!unk_0x05EFB6A616B6FADE(Global_104722[iVar0 /*28*/].f_27, 0))
					{
						Global_104722[iVar0 /*28*/].f_21 = (Global_104722[iVar0 /*28*/].f_21 + round((unk_0xDE089748C4C76C96() * 1000f)));
						if (unk_0x42B6EB807D068DC0(iVar1))
						{
							unk_0x2BCFB39E86340DAA(&(Global_104722[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_104722[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_104722[iVar0 /*28*/].f_23 != 0)
					{
						if (!unk_0x7112137033807390(Global_104722[iVar0 /*28*/].f_23, 0))
						{
							if (!unk_0x05EFB6A616B6FADE(Global_104722[iVar0 /*28*/].f_27, 3))
							{
								unk_0xB147CA5BEC309BFB(iVar1, unk_0x3201284584C7CD83(Global_104722[iVar0 /*28*/].f_23, Global_104722[iVar0 /*28*/].f_24));
							}
							else
							{
								unk_0xF43E3B541B8D6AF3(iVar1, Global_104722[iVar0 /*28*/].f_23, Global_104722[iVar0 /*28*/].f_24, Global_104722[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_104722[iVar0 /*28*/].f_24 != 0f || Global_104722[iVar0 /*28*/].f_24.f_1 != 0f) || Global_104722[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						unk_0xB147CA5BEC309BFB(iVar1, Global_104722[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					unk_0x22E00A9EC8F164C3(iVar1, Global_104722[iVar0 /*28*/].f_24, Global_104722[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((unk_0xFD34717937104F1C() - Global_104722[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_104722[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_104722[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_104722[iParam0 /*28*/].f_4), "", 64);
	Global_104722[iParam0 /*28*/].f_23 = 0;
	Global_104722[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_104722[iParam0 /*28*/].f_27 = 0;
	Global_104722[iParam0 /*28*/].f_20 = 0;
	Global_104722[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0x3CAC2741CC1A631F(&(Global_104722[iParam0 /*28*/]), "") && !unk_0x7032042E5696FFD7(&(Global_104722[iParam0 /*28*/])))
	{
		if (unk_0x05EFB6A616B6FADE(Global_104722[iParam0 /*28*/].f_27, 1))
		{
			if (unk_0x05EFB6A616B6FADE(Global_104722[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_104722[iParam0 /*28*/]), &(Global_104722[iParam0 /*28*/].f_4), Global_104722[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_104722[iParam0 /*28*/]), &(Global_104722[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0x05EFB6A616B6FADE(Global_104722[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_104722[iParam0 /*28*/]), Global_104722[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_104722[iParam0 /*28*/]));
		}
	}
	return 0;
}

int func_4(int iParam0, char* sParam1)
{
	unk_0x42FEBE6569FBB03A(sParam1);
	return unk_0x3D94488A86ABB03F((1 + iParam0));
}

int func_5(int iParam0, char* sParam1, int iParam2)
{
	unk_0x42FEBE6569FBB03A(sParam1);
	unk_0xCDA87E1DA52C8C9D(iParam2);
	return unk_0x3D94488A86ABB03F((1 + iParam0));
}

int func_6(int iParam0, char* sParam1, int iParam2)
{
	unk_0x42FEBE6569FBB03A(sParam1);
	unk_0x4FDA9E6EF359F8A9(iParam2);
	return unk_0x3D94488A86ABB03F((1 + iParam0));
}

int func_7(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x42FEBE6569FBB03A(sParam1);
	unk_0x4FDA9E6EF359F8A9(iParam2);
	unk_0xCDA87E1DA52C8C9D(iParam3);
	return unk_0x3D94488A86ABB03F((1 + iParam0));
}

