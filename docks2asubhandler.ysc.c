#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0x5EBD03AF78E7B4DB(19))
	{
		func_1();
	}
	iLocal_0 = ScriptParam_3;
	iLocal_1 = ScriptParam_3.f_1;
	while (!unk_0x05EFB6A616B6FADE(iLocal_2, 1))
	{
		if (!unk_0x05EFB6A616B6FADE(iLocal_2, 0))
		{
			if (unk_0xDC5D81351D6A4DDB(iLocal_0))
			{
				if (unk_0x1095F403F52B42E1(iLocal_0, 0))
				{
					unk_0x1F7948851FB36E88(iLocal_0, false, 1);
					unk_0xB29E08C7AB729BAD(iLocal_0, true);
					unk_0xD6CDDEFB0FD5B191(iLocal_0, true, true, true, true, true, 0, 0, 0);
					if (unk_0xDC5D81351D6A4DDB(iLocal_1))
					{
						unk_0x1F7948851FB36E88(iLocal_1, false, 1);
						unk_0xB29E08C7AB729BAD(iLocal_1, true);
						unk_0xD6CDDEFB0FD5B191(iLocal_1, true, true, true, true, true, 0, 0, 0);
					}
					unk_0x2BCFB39E86340DAA(&iLocal_2, 0);
				}
			}
		}
		else if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			if (unk_0x1095F403F52B42E1(iLocal_0, 0))
			{
				fVar0 = vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), unk_0xE2BBD32891C18569(iLocal_0, true));
				if (fVar0 > 90000f)
				{
					unk_0x2BCFB39E86340DAA(&iLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0x1A8481A7E865EC7C(iLocal_0))
				{
					unk_0x2BCFB39E86340DAA(&iLocal_2, 1);
				}
			}
			else
			{
				unk_0x2BCFB39E86340DAA(&iLocal_2, 1);
			}
		}
		wait(0);
	}
	func_1();
}

void func_1()
{
	unk_0x792676988A48387F(&iLocal_0);
	unk_0x69C8D2CAA0701F42(&iLocal_1);
	unk_0x8F1A9FE6D91AAFEB();
}

