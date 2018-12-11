void __EntryFunction__()
{
	unk_0x5341E3E598550C46();
	func_1("main_install", 1424);
}

void func_1(char* sParam0, int iParam1)
{
	unk_0xD75A4240F0AD8613(sParam0);
	while (!unk_0xB1FDFCECA75CE4A7(sParam0))
	{
		wait(0);
		unk_0xD75A4240F0AD8613(sParam0);
	}
	start_new_script(sParam0, iParam1);
}

