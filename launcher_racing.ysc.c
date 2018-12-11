#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	float fLocal_17 = 0f;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	char* sLocal_23 = NULL;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	struct<4> Local_40[10];
	bool bLocal_41 = 0;
	int iLocal_42 = 0;
	struct<6> Local_43 = { 10, 0, -1, 1000, -1, 0 } ;
	vector3 vLocal_44 = { 0f, 0f, 0f };
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	vector3 vLocal_59 = { 0f, 0f, 0f };
	float fLocal_60 = 0f;
	int iLocal_61 = 0;
	vector3 vLocal_62 = { 0f, 0f, 0f };
	float fLocal_63 = 0f;
	vector3 vLocal_64[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_65[3] = { 0f, 0f, 0f };
	vector3 vLocal_66[7] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_67[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_68[3] = { 0, 0, 0 };
	int iLocal_69[3] = { 0, 0, 0 };
	int iLocal_70[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	char[] cLocal_73[8] = 0;
	char* sLocal_74[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	vector3 vLocal_83 = { 0f, 0f, 0f };
	vector3 vLocal_84 = { 0f, 0f, 0f };
	vector3 vLocal_85 = { 0f, 0f, 0f };
	vector3 vLocal_86 = { 0f, 0f, 0f };
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 8;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 1;
	struct<2> Local_238 = { 0, 5 } ;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 5;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_5 = 1;
	iLocal_6 = 134;
	iLocal_7 = 134;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 1;
	iLocal_11 = 134;
	iLocal_12 = 1;
	iLocal_13 = 12;
	iLocal_14 = 12;
	fLocal_17 = 0.001f;
	iLocal_20 = -1;
	sLocal_23 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_46 = 1;
	bLocal_55 = true;
	iLocal_72 = joaat("feltzer2");
	iLocal_75 = 1;
	vLocal_83 = { 0f, 0f, 0f };
	vLocal_84 = { 1f, 1f, 1f };
	vLocal_85 = { 0f, 0f, 0f };
	vLocal_86 = { 0f, 0f, 0f };
	fLocal_87 = 0f;
	unk_0xB636914AC5F265E9(1);
	vLocal_44 = { ScriptParam_238.f_1[0 /*3*/] };
	if (unk_0x5EBD03AF78E7B4DB(83))
	{
		func_210(0);
	}
	func_207();
	switch (Local_43.f_1)
	{
		case 1:
		case 2:
			if (!func_206(0, 8))
			{
				func_210(0);
			}
			if (!func_205(Local_43))
			{
				func_210(0);
			}
			break;
		
		case 3:
			if (!func_206(0, 7))
			{
				func_210(0);
			}
			break;
		
		case 0:
			func_210(0);
			break;
	}
	func_199();
	if (!func_175())
	{
		func_210(0);
	}
	func_169();
	while (true)
	{
		func_166(&uLocal_90);
		if (func_175())
		{
			if (unk_0x1F85F8C7CC4639AE())
			{
				switch (iLocal_42)
				{
					case 0:
						iLocal_42 = 1;
						break;
					
					case 1:
						func_157();
						func_126();
						break;
					
					case 2:
						func_61();
						break;
					
					case 3:
						func_1();
						break;
				}
			}
			else
			{
				func_210(0);
			}
		}
		else
		{
			func_210(0);
		}
		wait(0);
	}
}

void func_1()
{
	if (!bLocal_53)
	{
		func_9();
	}
	else
	{
		func_2();
	}
}

void func_2()
{
	func_8(-1);
	func_7(0);
	func_6(vLocal_44);
	func_5();
	Global_1312348 = 1;
	Global_1312348.f_1 = Local_43;
	StringCopy(&(Global_1312348.f_2), func_4(), 24);
	StringCopy(&(Global_1312348.f_8), func_3(Local_43), 32);
	Global_1312348.f_16 = { vLocal_44 };
	Global_1312860 = 1;
	func_210(1);
}

char* func_3(int iParam0)
{
	char* sVar0;
	
	if (unk_0x332D85764ED0503F())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (unk_0x365C4466BC171A2D())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (unk_0x7DD04831D0FC44CA())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (unk_0x29A02C184A66D25E())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (unk_0x47C01C0E6F4C1D06())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
			}
	}
	return sVar0;
}

char* func_4()
{
	char* sVar0;
	
	if (unk_0x332D85764ED0503F())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0x365C4466BC171A2D())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0x7DD04831D0FC44CA())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0x29A02C184A66D25E())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0x47C01C0E6F4C1D06())
	{
		sVar0 = "SPRACE";
	}
	else
	{
		sVar0 = "SPRACE";
	}
	return sVar0;
}

void func_5()
{
	unk_0x2BCFB39E86340DAA(&Global_1312423, 0);
}

void func_6(vector3 vParam0)
{
	Global_1312423.f_6 = { vParam0 };
}

void func_7(int iParam0)
{
	Global_1312423.f_2 = iParam0;
}

void func_8(int iParam0)
{
	Global_1312423.f_1 = iParam0;
}

void func_9()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Local_43.f_2 = -1;
	if (func_60(unk_0xA19140A5C42D8715()))
	{
		if (!unk_0xE5862BC166DAD032(unk_0xA19140A5C42D8715()))
		{
			unk_0x241F3D2BEEB0124B(unk_0xA19140A5C42D8715(), 0);
		}
	}
	while (!func_54())
	{
		wait(0);
	}
	if (Local_43.f_1 != 3)
	{
		func_16(func_49(), 1, Local_43.f_3);
		iVar0 = unk_0xFD34717937104F1C() + 1500;
		iVar1 = unk_0xC409B91AC4749F88();
		if (func_14(iVar1))
		{
			while (!func_12(iVar1, 3f, 2, 1056964608, 0, 1, 0) || unk_0xFD34717937104F1C() < iVar0)
			{
				wait(0);
			}
		}
		iVar2 = unk_0xA6580F898F4E801C();
		if (unk_0x58E3CCF930D23BD5(iVar2))
		{
			unk_0x962CF6A9EA6FDCAC(iVar2, false, 0);
		}
	}
	func_10();
}

void func_10()
{
	if (!func_11(0))
	{
		unk_0xD75A4240F0AD8613("mission_Race");
		while (!unk_0xB1FDFCECA75CE4A7("mission_Race"))
		{
			unk_0xD75A4240F0AD8613("mission_Race");
			wait(0);
		}
		start_new_script_with_args("mission_Race", &Local_43, 6, 25000);
	}
	unk_0x4659F4154D948B01("mission_Race");
	func_210(1);
}

bool func_11(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

int func_12(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xD481A812073CCF02(0, 71, 1);
	unk_0xD481A812073CCF02(0, 72, 1);
	unk_0xD481A812073CCF02(0, 76, 1);
	unk_0xD481A812073CCF02(0, 73, 1);
	unk_0xD481A812073CCF02(0, 59, 1);
	unk_0xD481A812073CCF02(0, 60, 1);
	if (bParam5)
	{
		unk_0xD481A812073CCF02(0, 75, 1);
	}
	unk_0xD481A812073CCF02(0, 80, 1);
	if (!bParam6)
	{
		unk_0xD481A812073CCF02(0, 69, 1);
		unk_0xD481A812073CCF02(0, 70, 1);
		unk_0xD481A812073CCF02(0, 68, 1);
	}
	unk_0xD481A812073CCF02(0, 74, 1);
	unk_0xD481A812073CCF02(0, 86, 1);
	unk_0xD481A812073CCF02(0, 81, 1);
	unk_0xD481A812073CCF02(0, 82, 1);
	unk_0xD481A812073CCF02(0, 138, 1);
	unk_0xD481A812073CCF02(0, 136, 1);
	unk_0xD481A812073CCF02(0, 114, 1);
	unk_0xD481A812073CCF02(0, 107, 1);
	unk_0xD481A812073CCF02(0, 110, 1);
	unk_0xD481A812073CCF02(0, 89, 1);
	unk_0xD481A812073CCF02(0, 89, 1);
	unk_0xD481A812073CCF02(0, 87, 1);
	unk_0xD481A812073CCF02(0, 88, 1);
	unk_0xD481A812073CCF02(0, 113, 1);
	unk_0xD481A812073CCF02(0, 115, 1);
	unk_0xD481A812073CCF02(0, 116, 1);
	unk_0xD481A812073CCF02(0, 117, 1);
	unk_0xD481A812073CCF02(0, 118, 1);
	unk_0xD481A812073CCF02(0, 119, 1);
	unk_0xD481A812073CCF02(0, 131, 1);
	unk_0xD481A812073CCF02(0, 132, 1);
	unk_0xD481A812073CCF02(0, 123, 1);
	unk_0xD481A812073CCF02(0, 126, 1);
	unk_0xD481A812073CCF02(0, 129, 1);
	unk_0xD481A812073CCF02(0, 130, 1);
	unk_0xD481A812073CCF02(0, 133, 1);
	unk_0xD481A812073CCF02(0, 134, 1);
	unk_0x8BCFD05DF9BB6004();
	func_13(iParam0);
	if ((unk_0xFD34717937104F1C() - Global_29) > 500)
	{
		unk_0x0185AEECD1FF63F3(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0xFD34717937104F1C();
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		if (unk_0x69C0BB7D03EE045D(unk_0xEAA5CEF8875FEEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_13(int iParam0)
{
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		if (unk_0xE276FD46E2FAC906(iParam0))
		{
			if (unk_0x7FBA23EA56BC811C(iParam0))
			{
				unk_0xAA99F8210C8FE6FD(iParam0, 0);
			}
		}
	}
}

int func_14(int iParam0)
{
	if (func_15(iParam0))
	{
		if (unk_0x1095F403F52B42E1(iParam0, 0))
		{
			if (!unk_0x463E3A48A46C9195(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_15(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (!unk_0x7112137033807390(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_16(int iParam0, int iParam1, int iParam2)
{
	if (Global_106070.f_28022[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_106070.f_28022[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_17(Global_106070.f_28022[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_17(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_48();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_47(99, 1);
					func_46(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_46(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_46(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_30(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_26(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_46(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_26(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_46(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_46(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_46(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xB09979570758BDAD())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_26(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_25(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_47(95, iParam3);
					break;
				
				case 1:
					func_47(97, iParam3);
					break;
				
				case 2:
					func_47(96, iParam3);
					break;
			}
			func_47(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_20(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_20(iVar1);
	}
	iVar5 = (Global_53355[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53355[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53355[iVar2] = 2147483647;
				}
				else
				{
					Global_53355[iVar2] = (Global_53355[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_46(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_46(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_46(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53355[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53355[iVar2];
			Global_53355[iVar2] = (Global_53355[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_106070.f_20536.f_233[iVar2 /*69*/].f_2[Global_106070.f_20536.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_106070.f_20536.f_233[iVar2 /*69*/].f_2[Global_106070.f_20536.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_106070.f_20536.f_233[iVar2 /*69*/].f_2[Global_106070.f_20536.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_106070.f_20536.f_233[iVar2 /*69*/]++;
		Global_106070.f_20536.f_233[iVar2 /*69*/].f_1++;
		if (Global_106070.f_20536.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_106070.f_20536.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_19(iParam0);
	if (Global_36117 == 15)
	{
		func_18(0);
	}
	return 1;
}

void func_18(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53363[iVar0 /*3*/][0] = Global_106070.f_20536[iVar0];
		Global_53363.f_31[iVar0 /*3*/][0] = Global_106070.f_20536.f_11[iVar0];
		Global_53363.f_62[iVar0 /*3*/][0] = Global_106070.f_20536.f_22[iVar0];
		Global_53363.f_93[iVar0 /*3*/][0] = Global_106070.f_20536.f_33[iVar0];
		Global_53363.f_124[iVar0 /*3*/][0] = Global_106070.f_20536.f_44[iVar0];
		Global_53363.f_155[iVar0 /*3*/][0] = Global_106070.f_20536.f_55[iVar0];
		Global_53363.f_186[iVar0 /*3*/][0] = Global_106070.f_20536.f_66[iVar0];
		Global_53363.f_217[iVar0 /*3*/][0] = Global_106070.f_20536.f_77[iVar0];
		Global_53363.f_248[iVar0 /*3*/][0] = Global_106070.f_20536.f_88[iVar0];
		if (!bParam0)
		{
			Global_53363[iVar0 /*3*/][1] = Global_106070.f_20536[iVar0];
			Global_53363.f_31[iVar0 /*3*/][1] = Global_106070.f_20536.f_11[iVar0];
			Global_53363.f_62[iVar0 /*3*/][1] = Global_106070.f_20536.f_22[iVar0];
			Global_53363.f_93[iVar0 /*3*/][1] = Global_106070.f_20536.f_33[iVar0];
			Global_53363.f_124[iVar0 /*3*/][1] = Global_106070.f_20536.f_44[iVar0];
			Global_53363.f_155[iVar0 /*3*/][1] = Global_106070.f_20536.f_55[iVar0];
			Global_53363.f_186[iVar0 /*3*/][1] = Global_106070.f_20536.f_66[iVar0];
			Global_53363.f_217[iVar0 /*3*/][1] = Global_106070.f_20536.f_77[iVar0];
			Global_53363.f_248[iVar0 /*3*/][1] = Global_106070.f_20536.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_19(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53355[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x93180BE33E7149EF(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x93180BE33E7149EF(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x93180BE33E7149EF(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_20(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_23(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_23(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_23(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_23(137, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x4C9BACA8D249CB13())
	{
		if (unk_0x05EFB6A616B6FADE(Global_106070.f_20536.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xFA57C719261AA55D(&(Global_106070.f_20536.f_471), iParam0);
		}
	}
	else if (unk_0x05EFB6A616B6FADE(Global_106070.f_20536.f_471, iParam0) || unk_0x05EFB6A616B6FADE(Global_2097152[func_22() /*12745*/].f_8178.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xFA57C719261AA55D(&(Global_106070.f_20536.f_471), iParam0);
		unk_0xFA57C719261AA55D(&(Global_2097152[func_22() /*12745*/].f_8178.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x59FF6261546DDD52("COUP_RED");
		unk_0x4FDA9E6EF359F8A9(func_21(iParam0));
		unk_0x595B8132C1F20265(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		default:
	}
	return "";
}

int func_22()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_23(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	if (iParam2 == -1)
	{
		iParam2 = func_24();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xF84B918DCDA549C0((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x12FA763CEA4960B5((iParam0 - 0)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xF84B918DCDA549C0((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x12FA763CEA4960B5((iParam0 - 192)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xF84B918DCDA549C0((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x12FA763CEA4960B5((iParam0 - 513)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xF84B918DCDA549C0((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x12FA763CEA4960B5((iParam0 - 705)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x7D93C2914375D70B((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x12FA763CEA4960B5((iParam0 - 3111)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x7D93C2914375D70B((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x12FA763CEA4960B5((iParam0 - 2919)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0xD7C999E88C211597((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x12FA763CEA4960B5((iParam0 - 4207)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0xD7C999E88C211597((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x12FA763CEA4960B5((iParam0 - 4335)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0xD7C999E88C211597((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x12FA763CEA4960B5((iParam0 - 6029)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0xD7C999E88C211597((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x12FA763CEA4960B5((iParam0 - 7385)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0xD7C999E88C211597((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x12FA763CEA4960B5((iParam0 - 7321)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0xD7C999E88C211597((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x12FA763CEA4960B5((iParam0 - 9361)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0xD7C999E88C211597((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x12FA763CEA4960B5((iParam0 - 15369)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0xD7C999E88C211597((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x12FA763CEA4960B5((iParam0 - 15562)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0xD7C999E88C211597((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x12FA763CEA4960B5((iParam0 - 15946)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0xD7C999E88C211597((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x12FA763CEA4960B5((iParam0 - 18098)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0xD7C999E88C211597((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x12FA763CEA4960B5((iParam0 - 22066)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0xD7C999E88C211597((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x12FA763CEA4960B5((iParam0 - 24962)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar19, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_24()
{
	return Global_1312736;
}

void func_25(int iParam0)
{
	func_47(93, iParam0);
	func_47(29, iParam0);
	func_47(30, iParam0);
}

bool func_26(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_27(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_27(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_27(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_27(137, -1, -1);
	}
	if (!unk_0x4C9BACA8D249CB13())
	{
		return unk_0x05EFB6A616B6FADE(Global_106070.f_20536.f_471, iParam0);
	}
	return unk_0x05EFB6A616B6FADE(Global_2097152[func_22() /*12745*/].f_8178.f_10, iParam0);
}

int func_27(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_24();
	}
	iVar1 = func_29(iParam0, iParam1);
	uVar2 = func_28(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x07EEB31CF063DAB7(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_28(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x12FA763CEA4960B5((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x12FA763CEA4960B5((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x12FA763CEA4960B5((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x12FA763CEA4960B5((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x12FA763CEA4960B5((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x12FA763CEA4960B5((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x12FA763CEA4960B5((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x12FA763CEA4960B5((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x12FA763CEA4960B5((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x12FA763CEA4960B5((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x12FA763CEA4960B5((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x12FA763CEA4960B5((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x12FA763CEA4960B5((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x12FA763CEA4960B5((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x12FA763CEA4960B5((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x12FA763CEA4960B5((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x12FA763CEA4960B5((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x12FA763CEA4960B5((iParam0 - 24962)) * 64);
	}
	return iVar0;
}

int func_29(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_24();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xF84B918DCDA549C0((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x7D93C2914375D70B((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x7D93C2914375D70B((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0xD7C999E88C211597((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	return iVar0;
}

int func_30(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x16E6CF5D5B848918(27))
	{
		return 0;
	}
	if (unk_0x2AD48F3CEBA882E9(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x2AD48F3CEBA882E9(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x2AD48F3CEBA882E9(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x2AD48F3CEBA882E9(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x93180BE33E7149EF(joaat("num_cash_spent"), iVar1, 1);
		func_45(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_31(27, 1);
	return 1;
}

int func_31(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_32(iParam0, iParam1);
}

int func_32(int iParam0, int iParam1)
{
	if (func_44(14) && !func_43(iParam0))
	{
		return 0;
	}
	if (unk_0x16E6CF5D5B848918(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25706 != 0 && !Global_71205)
	{
		return 0;
	}
	if (func_42(&Global_4268566))
	{
		if (func_40(&Global_4268566, iParam0))
		{
			return 0;
		}
		if (func_33(&Global_4268566, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xFA4FDE2EBD31459D(iParam0))
		{
			return 0;
		}
		if (unk_0x16E6CF5D5B848918(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_33(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x16E6CF5D5B848918(iParam1))
	{
		return 0;
	}
	if (func_44(14) && !func_43(iParam1))
	{
		return 0;
	}
	if (func_40(uParam0, iParam1))
	{
		return 0;
	}
	if (func_39(uParam0) < 0f)
	{
		func_38(uParam0, 0);
	}
	func_36(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_34(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_34(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x16E6CF5D5B848918(iParam1))
	{
		return 0;
	}
	if (func_44(14) && !func_43(iParam1))
	{
		return 0;
	}
	if (func_40(uParam0, iParam1))
	{
		return 0;
	}
	if (func_39(uParam0) < 0f)
	{
		func_38(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_35(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_35(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_36(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_37(uParam0, iVar0);
		iVar0++;
	}
	func_38(uParam0, (Global_4268565 - 0.5f));
}

void func_37(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_38(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_39(var uParam0)
{
	return uParam0->f_80;
}

bool func_40(var uParam0, int iParam1)
{
	return func_41(uParam0, iParam1) != -1;
}

int func_41(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_42(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

bool func_44(int iParam0)
{
	return Global_36117 == iParam0;
}

int func_45(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x710B605F9A596359(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1BADC756CBF95E97(iParam0, iParam1);
	}
	return 0;
}

void func_46(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x2AD48F3CEBA882E9(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x93180BE33E7149EF(iParam0, iVar0, 1);
}

void func_47(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51923[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		return;
	}
	if (Global_51923[iParam0 /*7*/])
	{
		unk_0x2AD48F3CEBA882E9(Global_51923[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x93180BE33E7149EF(Global_51923[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_48()
{
	int iVar0;
	
	if (unk_0xC29B8FF8374918FD())
	{
		unk_0x2AD48F3CEBA882E9(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53355[0] == iVar0)
		{
			Global_53355[0] = iVar0;
		}
		unk_0x2AD48F3CEBA882E9(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53355[1] == iVar0)
		{
			Global_53355[1] = iVar0;
		}
		unk_0x2AD48F3CEBA882E9(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53355[2] == iVar0)
		{
			Global_53355[2] = iVar0;
		}
	}
}

int func_49()
{
	func_50();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_50()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_53(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_52(unk_0xA19140A5C42D8715());
			if (func_51(iVar0) && (!func_44(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_51(Global_106070.f_2355.f_539.f_4301))
				{
					Global_106070.f_2355.f_539.f_4302 = Global_106070.f_2355.f_539.f_4301;
				}
				Global_106070.f_2355.f_539.f_4303 = iVar0;
				Global_106070.f_2355.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106070.f_2355.f_539.f_4301 != 145)
			{
				Global_106070.f_2355.f_539.f_4303 = Global_106070.f_2355.f_539.f_4301;
			}
			return;
		}
	}
	Global_106070.f_2355.f_539.f_4301 = 145;
}

bool func_51(int iParam0)
{
	return iParam0 < 3;
}

int func_52(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_53(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_53(int iParam0)
{
	if (func_51(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_54()
{
	int iVar0;
	
	iVar0 = func_55(&(Local_43.f_2), 0, 9, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

int func_55(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90805.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_59(0))
		{
			return 0;
		}
		Global_36081++;
		*uParam0 = Global_36081;
		unk_0xEF06BE39D11763FC(unk_0xA6580F898F4E801C(), 0);
		Global_17228.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xA5DD4141C1E70561(8);
		}
		Global_36117 = iParam2;
		Global_36079 = *uParam0;
		Global_36080 = iParam4;
		Global_36078 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_36078 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_36078)
			{
				if (Global_36084[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_36079 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_57(iParam2))
		{
			return 0;
		}
		if (Global_36078 == 8)
		{
			return 0;
		}
		Global_36081++;
		*uParam0 = Global_36081;
		Global_36084[Global_36078 /*4*/] = Global_36081;
		Global_36084[Global_36078 /*4*/].f_1 = iParam1;
		Global_36084[Global_36078 /*4*/].f_2 = iParam2;
		Global_36084[Global_36078 /*4*/].f_3 = 0;
		Global_36078++;
		if (iParam4 != 0)
		{
			func_56(uParam0, iParam4);
		}
	}
	return 2;
}

void func_56(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_36078 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_36078)
	{
		if (Global_36084[iVar0 /*4*/] == *uParam0)
		{
			Global_36084[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_57(int iParam0)
{
	return func_58(iParam0, Global_36117);
}

int func_58(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_59(int iParam0)
{
	if (Global_36117 == 15)
	{
		return 0;
	}
	if (func_57(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_60(int iParam0)
{
	if (func_15(iParam0))
	{
		if (!unk_0x4915F4759304D5CF(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_61()
{
	int iVar0;
	
	switch (iLocal_49)
	{
		case 0:
			if (func_124(0, -1, 0))
			{
				unk_0x135C61E339DABBAC(1);
				func_112();
				unk_0x2A22FF5D4ECD503A(0);
				iLocal_54 = 1;
				bLocal_52 = false;
				bLocal_53 = false;
				iLocal_49 = 1;
			}
			break;
		
		case 1:
			if (func_74())
			{
				iLocal_49 = 2;
			}
			break;
		
		case 2:
			iVar0 = unk_0xA6580F898F4E801C();
			unk_0x271AF1531073FE9B(iVar0, 0);
			unk_0x962CF6A9EA6FDCAC(iVar0, true, 0);
			func_65(0, 1, 1, 0, 0);
			func_62(1, -1);
			iLocal_49 = 0;
			if (bLocal_52)
			{
				iLocal_42 = 3;
			}
			else
			{
				unk_0x2A22FF5D4ECD503A(1);
				iLocal_42 = 1;
			}
			break;
	}
}

void func_62(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_64(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17367.f_8091)
	{
		unk_0xE355C64541455AE8(15);
		Global_17367.f_8091 = 0;
	}
	unk_0x332297B49C4256C3(0f);
	if (Global_17367.f_5626[iVar0])
	{
		unk_0x93DA13E8C75A3B00(9, false);
		Global_17367.f_5626[iVar0] = 0;
	}
	if (Global_17367.f_5612[iVar0])
	{
		unk_0x91DE928AD81C6F57("CommonMenu");
		Global_17367.f_5612[iVar0] = 0;
	}
	if (Global_17367.f_5619[iVar0])
	{
		unk_0x91DE928AD81C6F57("MPShopSale");
		Global_17367.f_5619[iVar0] = 0;
	}
	if (bParam0)
	{
		func_63(&(Global_17367.f_5658[iVar0 /*10*/]));
		Global_17367.f_5719[iVar0] = 0;
	}
	else
	{
		Global_17367.f_5719[iVar0] = 0;
	}
}

void func_63(int iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (unk_0x0FA486DE15EB3004(*iParam0))
		{
			unk_0x86795B44CE5FE021(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_64(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x4C9BACA8D249CB13() && unk_0xB592B7A61F21E7A5())
		{
			iParam2 = unk_0xB88D86B8D5987AF4();
		}
	}
	StringCopy(&cVar0, unk_0x61D2332983ACC05C(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0xFEB6EEC0545AF7AA(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_17367.f_5719[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_17367.f_5719[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_17367.f_5719[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_65(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		unk_0xC97ACA9456A064F3(unk_0xD4E735F4B6A956AC());
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 1);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 1);
		func_73(1);
		unk_0x158181F81A221D70();
		unk_0xD8EA6395AE60BF4A();
		if (Global_14513.f_1 > 3)
		{
			if (unk_0xB39808C1DCE0DCFA())
			{
				unk_0xA8B97F91CBDE376C(false);
			}
			if (!func_72())
			{
				Global_14513.f_1 = 3;
			}
			Global_15822 = 5;
		}
		func_71(1, iParam3, iParam2, 0);
		Global_56187 = 1;
		Global_68497 = 1;
		Global_71203 = 1;
	}
	else
	{
		func_73(0);
		unk_0x21727E2C492FE1B3();
		Global_56187 = 0;
		if (bParam1)
		{
			unk_0x1A81FD78261DCFCD();
		}
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 0);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 0);
		func_71(0, iParam3, iParam2, 0);
		if (unk_0x4C9BACA8D249CB13())
		{
			if ((((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_69(unk_0xD4E735F4B6A956AC())) && !func_67(unk_0xD4E735F4B6A956AC(), 0)) && !func_66()) && !bParam4)
			{
				unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), false);
			}
		}
		else if ((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_69(unk_0xD4E735F4B6A956AC())) && !bParam4)
		{
			unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), false);
		}
		Global_71203 = 0;
	}
}

bool func_66()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 14);
}

bool func_67(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_68(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589747[iParam0 /*790*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xC77FA683E9BB485B(iParam0))
		{
			bVar0 = unk_0xE46ECB9FD23D3264(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_68(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_24();
	}
	if (Global_1312837[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_69(int iParam0)
{
	if (func_67(iParam0, 0))
	{
		return 1;
	}
	if (func_70())
	{
		if (iParam0 == unk_0xD4E735F4B6A956AC())
		{
			return 1;
		}
	}
	if (unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_70()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

int func_71(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x47C01C0E6F4C1D06())
	{
		if (unk_0xDA9416DF9C88432D() != iParam0 && uParam2)
		{
			unk_0x5126E6F88EF5B7A1(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_72()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_73(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x2BCFB39E86340DAA(&Global_2383, 13);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_2383, 13);
	}
}

int func_74()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	func_111(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	unk_0x9EA8CBEA7355649E(2, 201);
	unk_0x9EA8CBEA7355649E(2, 202);
	unk_0x9EA8CBEA7355649E(2, 188);
	unk_0x9EA8CBEA7355649E(2, 187);
	if (iLocal_51 != 0)
	{
		if (timera() > 800 || (((iVar1 > -64 && iVar1 < 64) && iVar0 > -64) && iVar0 < 64))
		{
			iLocal_51 = 0;
		}
		else
		{
			iVar0 = 0;
			iVar1 = 0;
		}
	}
	bVar4 = (iVar1 < -64 || unk_0xDF0ADAD7E584090D(2, 188));
	bVar5 = (iVar1 > 64 || unk_0xDF0ADAD7E584090D(2, 187));
	bVar6 = unk_0xDF0ADAD7E584090D(2, 201);
	bVar7 = unk_0xDF0ADAD7E584090D(2, 202);
	bVar8 = (iVar1 < -64 || iVar1 > 64);
	if (bVar6)
	{
		if (iLocal_50 == 1)
		{
			bLocal_53 = true;
		}
		else
		{
			bLocal_53 = false;
		}
		bLocal_52 = true;
		return 1;
	}
	else if (bVar7)
	{
		iLocal_76 = 0;
		bLocal_52 = false;
		return 1;
	}
	else
	{
		if (bVar5)
		{
			if (iLocal_50 == 0)
			{
				iLocal_50 = 1;
			}
			else if (iLocal_50 == 0)
			{
			}
		}
		else if (bVar4)
		{
			if (iLocal_50 == 1)
			{
				iLocal_50 = 0;
			}
			else if (iLocal_50 == 1)
			{
			}
		}
		if (bVar5 || bVar4)
		{
			if (bVar8)
			{
				settimera(0);
				iLocal_51 = 1;
			}
			func_110(iLocal_50, 1, 1);
		}
	}
	func_75(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
	return 0;
}

void func_75(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	int iVar53;
	bool bVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	int iVar59;
	int iVar60;
	float fVar61;
	float fVar62;
	float fVar63;
	char cVar64[64];
	char cVar65[64];
	float fVar66;
	int iVar67;
	float fVar68;
	float fVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_64(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_107(0, bParam6))
	{
		return;
	}
	unk_0xCD282E433560A509(76, 84);
	unk_0xE4C207949B93A9C7(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_17367)
	{
		if (func_105(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar56 = fVar37;
			fVar57 = fVar36;
			fVar56 = (fVar56 + 0f);
		}
		else
		{
			Global_17367 = 0;
		}
	}
	if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_1)) == unk_0xFEB6EEC0545AF7AA("HIDE"))
	{
		fVar58 = Global_17365;
	}
	else
	{
		fVar58 = (((Global_17365 + fVar56) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17366;
	}
	fVar61 = 1f;
	if (bParam7)
	{
		unk_0x359669D87D0E343F(&iVar59, &iVar60);
		fVar62 = unk_0xA0B98358F89CB4ED(0);
		if (func_104())
		{
			iVar59 = round((to_float(iVar60) * fVar62));
		}
		fVar63 = (to_float(iVar59) / to_float(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_104())
		{
			fVar61 = 1f;
		}
		iVar59 = round((to_float(iVar59) / fVar61));
		iVar60 = round((to_float(iVar60) / fVar61));
	}
	else
	{
		unk_0xD89F7C25FE53EC3D(&iVar59, &iVar60);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17367.f_5726)
		{
			if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_1)) == unk_0xFEB6EEC0545AF7AA("HIDE"))
			{
				fVar49 = Global_17365;
			}
			else
			{
				if (Global_17367)
				{
					StringCopy(&cVar64, func_103(29), 64);
					StringCopy(&cVar65, func_100(29, 1), 64);
					if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_6863[29 /*16*/])) == -1487683087)
					{
						func_99(Global_17364, Global_17365, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
						unk_0xE56EDA9982C42132(&cVar64, &cVar65, (Global_17364 + (fParam5 * 0.5f)), (Global_17365 + ((fVar56 - 0f) * 0.5f)), fVar57, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0xE56EDA9982C42132(&cVar64, &cVar65, (Global_17364 + (fParam5 * 0.5f)), (Global_17365 + ((fVar56 - 0f) * 0.5f)), fParam5, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17367.f_8061)
				{
					iVar1 = Global_17367.f_8057;
					iVar2 = Global_17367.f_8058;
					iVar3 = Global_17367.f_8059;
					iVar4 = Global_17367.f_8060;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_99(Global_17364, (Global_17365 + fVar56), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17365 + fVar56) + 0.034722f) + 0f);
				if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_1)) != 0)
				{
					func_98();
					unk_0x7C25BC565D364568(&(Global_17367.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17367.f_68)
					{
						if (Global_17367.f_5[iVar14] == 2)
						{
							unk_0xCDA87E1DA52C8C9D(Global_17367.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17367.f_5[iVar14] == 3)
						{
							unk_0x1757EE80C206FA5E(Global_17367.f_14[iVar16], Global_17367.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17367.f_5[iVar14] == 1)
						{
							unk_0x4FDA9E6EF359F8A9(&(Global_17367.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17367.f_5[iVar14] == 8)
						{
							unk_0x4FDA9E6EF359F8A9(&(Global_17367.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17367.f_5[iVar14] == 5)
						{
							unk_0xC327C023FDA37F2E(&(Global_17367.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17367.f_5[iVar14] == 6)
						{
							unk_0x4FDA9E6EF359F8A9(&(Global_17367.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17367.f_5[iVar14] == 7)
						{
							unk_0xC327C023FDA37F2E(&(Global_17367.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17367.f_5[iVar14] == 9)
						{
							unk_0xC327C023FDA37F2E(&(Global_17367.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xB435CE12BEF0DBF7((Global_17364 + 0.00390625f), ((Global_17365 + fVar56) + 0.00416664f), 0);
				}
				if (Global_17367.f_5729 > Global_17367.f_5223)
				{
					if (Global_17367.f_5732 != 0)
					{
						func_98();
						func_96((((Global_17364 + fParam5) - 0.00390625f) - func_97("CM_ITEM_COUNT", Global_17367.f_5732, Global_17367.f_5731)), ((Global_17365 + fVar56) + 0.00416664f), "CM_ITEM_COUNT", Global_17367.f_5732, Global_17367.f_5731);
					}
				}
			}
			iVar6 = Global_17367.f_5733;
			iVar9 = 0;
			fVar66 = fVar49;
			if (Global_17367.f_8071)
			{
				iVar1 = Global_17367.f_8067;
				iVar2 = Global_17367.f_8068;
				iVar3 = Global_17367.f_8069;
				iVar4 = Global_17367.f_8070;
			}
			else
			{
				unk_0x1C828C4226A9FADF(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17367.f_5223 && iVar6 <= Global_17367.f_5216)
			{
				if (iVar6 >= 0)
				{
					if (Global_17367.f_5483[iVar6])
					{
						if (Global_17367.f_5354[iVar6] && iVar6 != Global_17367.f_5733)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar55 = 0.034722f;
						if (Global_17367.f_5740[iVar6] != 0f)
						{
							fVar55 = Global_17367.f_5740[iVar6];
						}
						fVar49 = (fVar49 + fVar55);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar55 = 0.034722f;
					fVar49 = (fVar49 + fVar55);
					iVar9++;
					if (Global_17367.f_5216 <= 1)
					{
						Global_17367.f_5216++;
					}
					iVar53 = 1;
				}
			}
			unk_0xE56EDA9982C42132("CommonMenu", "Gradient_Bgd", (Global_17364 + (fParam5 * 0.5f)), ((fVar66 + ((fVar49 - fVar66) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar66), 0f, 255, 255, 255, 255, 0);
			if (Global_17367.f_5729 > Global_17367.f_5223)
			{
				if (Global_17367.f_8076)
				{
					iVar1 = Global_17367.f_8072;
					iVar2 = Global_17367.f_8073;
					iVar3 = Global_17367.f_8074;
					iVar4 = Global_17367.f_8075;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_99(Global_17364, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { unk_0x2CABF8F7B201EA82("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar61));
				vVar38.y = (vVar38.y * (0.5f / fVar61));
				if (Global_17367.f_8089)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x1C828C4226A9FADF(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xE56EDA9982C42132("CommonMenu", "shop_arrows_upANDdown", (Global_17364 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar61), ((vVar38.y / 720f) * fVar61), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_4690)) != 0 && Global_17367.f_4764 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_17364 + 0.0046875f);
				if (Global_17367.f_4766 != 0)
				{
					func_105(Global_17367.f_4766, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17364 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_95(fVar40);
				unk_0x70C5FF595D2975FF(&(Global_17367.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17367.f_4760)
				{
					if (Global_17367.f_4694[iVar14] == 2)
					{
						unk_0xCDA87E1DA52C8C9D(Global_17367.f_4699[iVar15]);
						iVar15++;
					}
					else if (Global_17367.f_4694[iVar14] == 3)
					{
						unk_0x1757EE80C206FA5E(Global_17367.f_4703[iVar16], Global_17367.f_4707[iVar16]);
						iVar16++;
					}
					else if (Global_17367.f_4694[iVar14] == 1)
					{
						unk_0x4FDA9E6EF359F8A9(&(Global_17367.f_4711[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17367.f_4694[iVar14] == 5)
					{
						unk_0xC327C023FDA37F2E(&(Global_17367.f_4711[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17367.f_4694[iVar14] == 6)
					{
						unk_0x4FDA9E6EF359F8A9(&(Global_17367.f_4711[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17367.f_4694[iVar14] == 7)
					{
						unk_0xC327C023FDA37F2E(&(Global_17367.f_4711[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17367.f_4694[iVar14] == 9)
					{
						unk_0xC327C023FDA37F2E(&(Global_17367.f_4711[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x603FDFA4374831EB(fVar40, (fVar49 + 0.00277776f));
				unk_0x1C828C4226A9FADF(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_99(Global_17364, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17367.f_8081)
				{
					iVar1 = Global_17367.f_8077;
					iVar2 = Global_17367.f_8078;
					iVar3 = Global_17367.f_8079;
					iVar4 = Global_17367.f_8080;
				}
				else
				{
					unk_0x1C828C4226A9FADF(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xE56EDA9982C42132("CommonMenu", "Gradient_Bgd", (Global_17364 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xAC0B4B294E7DA73D(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xAC0B4B294E7DA73D(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_95(fVar40);
				unk_0x7C25BC565D364568(&(Global_17367.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17367.f_4760)
				{
					if (Global_17367.f_4694[iVar14] == 2)
					{
						unk_0xCDA87E1DA52C8C9D(Global_17367.f_4699[iVar15]);
						iVar15++;
					}
					else if (Global_17367.f_4694[iVar14] == 3)
					{
						unk_0x1757EE80C206FA5E(Global_17367.f_4703[iVar16], Global_17367.f_4707[iVar16]);
						iVar16++;
					}
					else if (Global_17367.f_4694[iVar14] == 1)
					{
						unk_0x4FDA9E6EF359F8A9(&(Global_17367.f_4711[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17367.f_4694[iVar14] == 5)
					{
						unk_0xC327C023FDA37F2E(&(Global_17367.f_4711[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17367.f_4694[iVar14] == 6)
					{
						unk_0x4FDA9E6EF359F8A9(&(Global_17367.f_4711[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17367.f_4694[iVar14] == 7)
					{
						unk_0xC327C023FDA37F2E(&(Global_17367.f_4711[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17367.f_4694[iVar14] == 9)
					{
						unk_0xC327C023FDA37F2E(&(Global_17367.f_4711[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17367.f_4694[iVar14] == 8)
					{
						unk_0x4FDA9E6EF359F8A9(&(Global_17367.f_4711[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xB435CE12BEF0DBF7(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_17367.f_4766 != 0)
				{
					func_105(Global_17367.f_4766, 1, 1, &fVar36, &fVar37, bParam7);
					func_94(Global_17367.f_4766, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xE56EDA9982C42132(func_103(Global_17367.f_4766), func_100(Global_17367.f_4766, 1), ((Global_17364 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0xAC0B4B294E7DA73D(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17367.f_4764 > 0)
				{
					if ((unk_0xFD34717937104F1C() - Global_17367.f_4765) > Global_17367.f_4764)
					{
						StringCopy(&(Global_17367.f_4690), "", 16);
						Global_17367.f_4764 = -1;
					}
				}
			}
			if (unk_0xFEB6EEC0545AF7AA(&(Global_4266986.f_21)) != 0 && Global_4266986.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_17364 + 0.0046875f);
				if (Global_4266986.f_67 != 0)
				{
					func_105(Global_4266986.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17364 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_95(fVar40);
				unk_0x70C5FF595D2975FF(&(Global_4266986.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4266986.f_61)
				{
					if (Global_4266986.f_25[iVar14] == 2)
					{
						unk_0xCDA87E1DA52C8C9D(Global_4266986.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4266986.f_25[iVar14] == 3)
					{
						unk_0x1757EE80C206FA5E(Global_4266986.f_34[iVar16], Global_4266986.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4266986.f_25[iVar14] == 1)
					{
						unk_0x4FDA9E6EF359F8A9(&(Global_4266986.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266986.f_25[iVar14] == 5)
					{
						unk_0xC327C023FDA37F2E(&(Global_4266986.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266986.f_25[iVar14] == 6)
					{
						unk_0x4FDA9E6EF359F8A9(&(Global_4266986.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266986.f_25[iVar14] == 7)
					{
						unk_0xC327C023FDA37F2E(&(Global_4266986.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266986.f_25[iVar14] == 9)
					{
						unk_0xC327C023FDA37F2E(&(Global_4266986.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266986.f_25[iVar14] == 8)
					{
						unk_0x4FDA9E6EF359F8A9(&(Global_4266986.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x603FDFA4374831EB(fVar40, (fVar49 + 0.00277776f));
				unk_0x1C828C4226A9FADF(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_99(Global_17364, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17367.f_8081)
				{
					iVar1 = Global_17367.f_8077;
					iVar2 = Global_17367.f_8078;
					iVar3 = Global_17367.f_8079;
					iVar4 = Global_17367.f_8080;
				}
				else
				{
					unk_0x1C828C4226A9FADF(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xE56EDA9982C42132("CommonMenu", "Gradient_Bgd", (Global_17364 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xAC0B4B294E7DA73D(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xAC0B4B294E7DA73D(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_95(fVar40);
				unk_0x7C25BC565D364568(&(Global_4266986.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4266986.f_61)
				{
					if (Global_4266986.f_25[iVar14] == 2)
					{
						unk_0xCDA87E1DA52C8C9D(Global_4266986.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4266986.f_25[iVar14] == 3)
					{
						unk_0x1757EE80C206FA5E(Global_4266986.f_34[iVar16], Global_4266986.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4266986.f_25[iVar14] == 1)
					{
						unk_0x4FDA9E6EF359F8A9(&(Global_4266986.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266986.f_25[iVar14] == 8)
					{
						unk_0x4FDA9E6EF359F8A9(&(Global_4266986.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266986.f_25[iVar14] == 5)
					{
						unk_0xC327C023FDA37F2E(&(Global_4266986.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266986.f_25[iVar14] == 6)
					{
						unk_0x4FDA9E6EF359F8A9(&(Global_4266986.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266986.f_25[iVar14] == 7)
					{
						unk_0xC327C023FDA37F2E(&(Global_4266986.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266986.f_25[iVar14] == 9)
					{
						unk_0xC327C023FDA37F2E(&(Global_4266986.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xB435CE12BEF0DBF7(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_4266986.f_67 != 0)
				{
					func_105(Global_4266986.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_94(Global_4266986.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xE56EDA9982C42132(func_103(Global_4266986.f_67), func_100(Global_4266986.f_67, 1), ((Global_17364 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0xAC0B4B294E7DA73D(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4266986.f_65 > 0)
				{
					if ((unk_0xFD34717937104F1C() - Global_4266986.f_66) > Global_4266986.f_65)
					{
						StringCopy(&(Global_4266986.f_21), "", 16);
						Global_4266986.f_65 = -1;
					}
				}
			}
			func_89(iVar59, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0xCD282E433560A509(76, 84);
			unk_0xE4C207949B93A9C7(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17367.f_5726)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar67 = Global_17367.f_5216;
			if (Global_17367.f_5727)
			{
				iVar67 = (Global_17367.f_5730 - 1);
			}
			fVar68 = 0f;
			fVar69 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar67)
			{
				fVar55 = 0.034722f;
				if (Global_17367.f_5740[iVar6] != 0f)
				{
					fVar55 = Global_17367.f_5740[iVar6];
				}
				if (Global_17367.f_5727)
				{
					iVar6 = Global_17367.f_7712[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_17367.f_5733 && iVar9 < Global_17367.f_5223)
				{
					bVar33 = true;
					if (Global_17367.f_5734 == iVar6)
					{
						fVar69 = fVar68;
					}
					if (Global_17367.f_5354[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar58 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17367.f_5874[iVar6] = fVar35;
				fVar34 = (Global_17364 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_17367.f_5734 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_17367.f_8083)
					{
						unk_0x1C828C4226A9FADF(Global_17367.f_8082, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0x1C828C4226A9FADF(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0xE56EDA9982C42132("CommonMenu", "Gradient_Nav", (Global_17364 + (fParam5 * 0.5f)), (((fVar58 + fVar69) + (0.00277776f * IntToFloat(iVar12))) + (fVar55 * 0.5f)), fParam5, fVar55, 0f, iVar70, iVar71, iVar72, iVar73, 0);
					Global_17367.f_5872 = fVar35;
				}
				if (iVar53 && iVar7 == iVar67)
				{
					func_87(bVar32, 1, 0, 0, 0, 0, 0);
					unk_0x7C25BC565D364568("DFLT_MNU_OPT");
					unk_0xB435CE12BEF0DBF7(fVar34, fVar35, 0);
					bVar39 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17367.f_5224)
					{
						if (unk_0x05EFB6A616B6FADE(Global_17367.f_5087[iVar6], iVar8) || Global_17367.f_5054[iVar8] == 5)
						{
							if (Global_17367.f_5727)
							{
								iVar19 = Global_17367.f_7728[((iVar9 * Global_17367.f_5224) + iVar8)];
								iVar20 = Global_17367.f_7769[((iVar9 * Global_17367.f_5224) + iVar8)];
								iVar21 = Global_17367.f_7810[((iVar9 * Global_17367.f_5224) + iVar8)];
								iVar22 = Global_17367.f_7851[((iVar9 * Global_17367.f_5224) + iVar8)];
								iVar23 = Global_17367.f_7892[((iVar9 * Global_17367.f_5224) + iVar8)];
							}
							else
							{
								Global_17367.f_7728[((iVar9 * Global_17367.f_5224) + iVar8)] = iVar19;
								Global_17367.f_7769[((iVar9 * Global_17367.f_5224) + iVar8)] = iVar20;
								Global_17367.f_7810[((iVar9 * Global_17367.f_5224) + iVar8)] = iVar21;
								Global_17367.f_7851[((iVar9 * Global_17367.f_5224) + iVar8)] = iVar22;
								Global_17367.f_7892[((iVar9 * Global_17367.f_5224) + iVar8)] = iVar23;
							}
							iVar74 = 0;
							bVar54 = false;
							if (Global_17367.f_6006[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17367.f_6003[0])
								{
									bVar54 = true;
									iVar74 = 0;
								}
							}
							if (Global_17367.f_6006[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17367.f_6003[1])
								{
									bVar54 = true;
									iVar74 = 1;
								}
							}
							if (Global_17367.f_5060[iVar8] != -1f)
							{
								fVar34 = ((Global_17364 + 0.0046875f) + Global_17367.f_5060[iVar8]);
							}
							if ((iVar8 < 4 && Global_17367.f_5060[iVar8 + 1] != -1f) && fVar34 < Global_17367.f_5060[iVar8 + 1])
							{
								fVar44 = (Global_17367.f_5060[iVar8 + 1] - fVar34);
							}
							else
							{
								fVar44 = (((Global_17364 + Global_17366) - 0.0046875f) - fVar34);
							}
							if ((Global_17367.f_5073[iVar8] && Global_17367.f_5869) && bVar32)
							{
								bVar52 = true;
							}
							else
							{
								bVar52 = false;
							}
							switch (Global_17367.f_5054[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17367.f_5727)
										{
											fVar41 = 0f;
											fVar42 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												bVar51 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17367.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar51 = true;
													}
													else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 9)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_87(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, iVar74, bVar51, bVar50);
												unk_0xC42A779360572EA7(&(Global_17367.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x4FDA9E6EF359F8A9(&(Global_17367.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x4FDA9E6EF359F8A9(&(Global_17367.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xC327C023FDA37F2E(&(Global_2458730[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x4FDA9E6EF359F8A9(&(Global_2458730[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xC327C023FDA37F2E(&(Global_2458730[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xC327C023FDA37F2E(&(Global_2458730[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xCDA87E1DA52C8C9D(Global_17367.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x1757EE80C206FA5E(Global_17367.f_4175[(iVar21 + iVar27)], Global_17367.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
											{
												fVar41 = unk_0x4E0DD18900B7ACAE(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_105(Global_17367.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar42 = (fVar42 + fVar36);
														if (iVar14 > 0)
														{
															fVar42 = (fVar42 - (0.00078125f * 4f));
														}
														if (Global_17367.f_4433[(iVar22 + iVar14)] == 2 || Global_17367.f_4433[(iVar22 + iVar14)] == 48)
														{
															fVar42 = (fVar42 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar40 = 0f;
											if (Global_17367.f_5081[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
											}
											else if (Global_17367.f_5081[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
											}
											Global_17367.f_7933[((iVar9 * Global_17367.f_5224) + iVar8)] = fVar40;
											Global_17367.f_7974[((iVar9 * Global_17367.f_5224) + iVar8)] = fVar41;
											Global_17367.f_8015[((iVar9 * Global_17367.f_5224) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_17367.f_7933[((iVar9 * Global_17367.f_5224) + iVar8)];
											fVar41 = Global_17367.f_7974[((iVar9 * Global_17367.f_5224) + iVar8)];
											fVar42 = Global_17367.f_8015[((iVar9 * Global_17367.f_5224) + iVar8)];
										}
										if (bVar52)
										{
											if (func_105(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17367.f_5081[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_105(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_94(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xE56EDA9982C42132(func_103(26), func_100(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_105(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_105(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_94(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xE56EDA9982C42132(func_103(27), func_100(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar31 = 0;
										if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17367.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_87(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_17367.f_8087 && Global_17367.f_8088 == iVar6)
											{
												func_86(bVar32);
											}
											unk_0x7C25BC565D364568(&(Global_17367.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x4FDA9E6EF359F8A9(&(Global_17367.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 1;
											}
											else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x4FDA9E6EF359F8A9(&(Global_17367.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 8;
											}
											else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xC327C023FDA37F2E(&(Global_2458730[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 5;
											}
											else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x4FDA9E6EF359F8A9(&(Global_2458730[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 6;
											}
											else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xC327C023FDA37F2E(&(Global_2458730[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 7;
											}
											else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xC327C023FDA37F2E(&(Global_2458730[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 9;
											}
											else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xCDA87E1DA52C8C9D(Global_17367.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar31 = 2;
											}
											else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x1757EE80C206FA5E(Global_17367.f_4175[(iVar21 + iVar27)], Global_17367.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar31 = 3;
											}
											else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17367.f_4433[(iVar22 + iVar28)] == 2 || Global_17367.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_105(Global_17367.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_105(Global_17367.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_94(Global_17367.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17367.f_5081[iVar8] == 2)
															{
																unk_0xE56EDA9982C42132(func_103(Global_17367.f_4433[(iVar22 + iVar28)]), func_100(Global_17367.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0xE56EDA9982C42132(func_103(Global_17367.f_4433[(iVar22 + iVar28)]), func_100(Global_17367.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															fVar40 = (fVar40 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar31 = 4;
											}
											iVar14++;
										}
										if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar31 == 4 && Global_17367.f_5081[iVar8] == 2)
											{
												unk_0xB435CE12BEF0DBF7(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
											}
											else
											{
												unk_0xB435CE12BEF0DBF7((fVar34 + fVar40), fVar35, 0);
												if (func_85() && unk_0x8B1574454E8C2421(joaat("fm_mission_creator")) > 0)
												{
													if (iVar8 == 0)
													{
														func_87(0, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
														StringCopy(&cVar75, "TEST_LABEL", 16);
														fVar76 = 0f;
														fVar77 = 55f;
														fVar78 = 0.0185f;
														fVar79 = 0.004f;
														fVar80 = 0.02f;
														unk_0xFD5A6B90A46ACED0(0f, (0.35f * 0.7f));
														unk_0xA6D7328EAA8CB61E(255, 255, 255, 150);
														unk_0xFF35427AF9343886((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, floor(fVar76), floor(fVar76), floor(fVar76), floor(fVar77), 0);
														unk_0x7C25BC565D364568(&cVar75);
														unk_0xCDA87E1DA52C8C9D((Global_17367.f_5733 + iVar30));
														unk_0xB435CE12BEF0DBF7((fVar34 - fVar80), (fVar35 + fVar79), 0);
														iVar30++;
													}
												}
											}
										}
										if (iVar28 > 0)
										{
											fVar40 = (fVar40 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17367.f_4433[(iVar22 + iVar14)] != 2 && Global_17367.f_4433[(iVar22 + iVar14)] != 48)
												{
													if (func_105(Global_17367.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_105(Global_17367.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_94(Global_17367.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17367.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0xE56EDA9982C42132(func_103(Global_17367.f_4433[(iVar22 + iVar14)]), func_100(Global_17367.f_4433[(iVar22 + iVar14)], bVar32), (Global_17364 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_17367.f_5081[iVar8] == 2)
															{
																unk_0xE56EDA9982C42132(func_103(Global_17367.f_4433[(iVar22 + iVar14)]), func_100(Global_17367.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0xE56EDA9982C42132(func_103(Global_17367.f_4433[(iVar22 + iVar14)]), func_100(Global_17367.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
														fVar40 = (fVar40 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar39 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17367.f_5727)
										{
											func_87(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17367.f_8087 && Global_17367.f_8088 == iVar6)
											{
												func_86(bVar32);
											}
											unk_0xC42A779360572EA7("NUMBER");
											unk_0xCDA87E1DA52C8C9D(Global_17367.f_3918[iVar20]);
											fVar41 = unk_0x4E0DD18900B7ACAE(1);
											fVar40 = 0f;
											if (Global_17367.f_5081[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
											}
											else if (Global_17367.f_5081[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
											}
											Global_17367.f_7933[((iVar9 * Global_17367.f_5224) + iVar8)] = fVar40;
											Global_17367.f_7974[((iVar9 * Global_17367.f_5224) + iVar8)] = fVar41;
										}
										else
										{
											fVar40 = Global_17367.f_7933[((iVar9 * Global_17367.f_5224) + iVar8)];
											fVar41 = Global_17367.f_7974[((iVar9 * Global_17367.f_5224) + iVar8)];
										}
										if (bVar52)
										{
											if (func_105(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17367.f_5081[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_105(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_94(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xE56EDA9982C42132(func_103(26), func_100(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_105(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_105(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_94(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xE56EDA9982C42132(func_103(27), func_100(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_87(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, 0, 0, 0);
										func_84((fVar34 + fVar40), fVar35, "NUMBER", Global_17367.f_3918[iVar20], 0);
									}
									bVar39 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17367.f_5727)
										{
											func_87(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17367.f_8087 && Global_17367.f_8088 == iVar6)
											{
												func_86(bVar32);
											}
											unk_0xC42A779360572EA7("NUMBER");
											unk_0x1757EE80C206FA5E(Global_17367.f_4175[iVar21], Global_17367.f_4304[iVar21]);
											fVar41 = unk_0x4E0DD18900B7ACAE(1);
											fVar40 = 0f;
											if (Global_17367.f_5081[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
											}
											else if (Global_17367.f_5081[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
											}
											Global_17367.f_7933[((iVar9 * Global_17367.f_5224) + iVar8)] = fVar40;
											Global_17367.f_7974[((iVar9 * Global_17367.f_5224) + iVar8)] = fVar41;
										}
										else
										{
											fVar40 = Global_17367.f_7933[((iVar9 * Global_17367.f_5224) + iVar8)];
											fVar41 = Global_17367.f_7974[((iVar9 * Global_17367.f_5224) + iVar8)];
										}
										if (bVar52)
										{
											if (func_105(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_17367.f_5081[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_105(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_94(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xE56EDA9982C42132(func_103(26), func_100(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_105(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_105(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_94(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xE56EDA9982C42132(func_103(27), func_100(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_87(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, 0, 0, 0);
										func_83((fVar34 + fVar40), fVar35, "NUMBER", Global_17367.f_4175[iVar21], Global_17367.f_4304[iVar21]);
									}
									bVar39 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar33)
									{
										if (func_105(Global_17367.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
										{
											if (!Global_17367.f_5727)
											{
												fVar42 = fVar36;
												fVar40 = 0f;
												if (Global_17367.f_5081[iVar8] == 2)
												{
													fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
												}
												else if (Global_17367.f_5081[iVar8] == 0)
												{
													fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
												}
												Global_17367.f_7933[((iVar9 * Global_17367.f_5224) + iVar8)] = fVar40;
												Global_17367.f_8015[((iVar9 * Global_17367.f_5224) + iVar8)] = fVar42;
											}
											else
											{
												fVar40 = Global_17367.f_7933[((iVar9 * Global_17367.f_5224) + iVar8)];
												fVar42 = Global_17367.f_8015[((iVar9 * Global_17367.f_5224) + iVar8)];
											}
											if (bVar52)
											{
												if (func_105(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_17367.f_5081[iVar8] == 2)
													{
														fVar40 = (fVar40 - (fVar36 * 2f));
													}
													fVar43 = (fVar36 * 0.5f);
													if (func_105(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_94(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0xE56EDA9982C42132(func_103(26), func_100(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
												if (func_105(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + fVar36);
													fVar43 = (fVar36 * 0.5f);
													if (func_105(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_94(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0xE56EDA9982C42132(func_103(27), func_100(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_105(Global_17367.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_94(Global_17367.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0xE56EDA9982C42132(func_103(Global_17367.f_4433[iVar22]), func_100(Global_17367.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), (fVar36 * func_82(Global_17367.f_4433[iVar22])), (fVar37 * func_82(Global_17367.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
											}
										}
									}
									bVar39 = true;
									iVar22++;
									break;
								
								case 5:
									bVar39 = true;
									break;
							}
							if (Global_17367.f_5054[iVar8] == 5)
							{
								if (Global_17367.f_5066[iVar8] > 0.05f)
								{
									fVar34 = (fVar34 + Global_17367.f_5066[iVar8]);
								}
								else
								{
									fVar34 = (fVar34 + 0.05f);
								}
							}
							else
							{
								fVar34 = (fVar34 + Global_17367.f_5066[iVar8]);
								if (Global_17367.f_5073[iVar8])
								{
									if (func_105(26, 1, 1, &fVar36, &fVar37, bParam7))
									{
										fVar34 = (fVar34 - fVar36);
									}
								}
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_17367.f_5066[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_17367.f_7712[iVar9] = iVar6;
						Global_17367.f_5735 = iVar6;
						iVar9++;
						if (Global_17367.f_5354[iVar6])
						{
							iVar13++;
						}
						if (Global_17367.f_5740[iVar6] != 0f)
						{
							fVar68 = (fVar68 + Global_17367.f_5740[iVar6]);
						}
						else
						{
							fVar68 = (fVar68 + 0.034722f);
						}
					}
					if (!Global_17367.f_5726)
					{
						Global_17367.f_5483[iVar6] = 1;
						if (Global_17367.f_5225[iVar6])
						{
							if (bVar32)
							{
								Global_17367.f_5732 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_17367.f_5732 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17367.f_5726)
			{
				Global_17367.f_5728 = ((fVar58 + fVar68) + (0.00277776f * IntToFloat(iVar12)));
				Global_17367.f_5731 = iVar11;
				Global_17367.f_5729 = iVar10;
				Global_17367.f_5726 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17367.f_5727)
	{
		Global_17367.f_5730 = iVar9;
		Global_17367.f_5727 = 1;
	}
	Global_17367.f_5871 = fVar49;
	Global_17367.f_5873 = unk_0xFD34717937104F1C();
	unk_0x332297B49C4256C3(Global_17367.f_5871);
	if (!Global_17367.f_8056)
	{
		func_77(0);
	}
	Global_17367.f_8056 = 0;
	if (bParam2)
	{
		unk_0xD8C147DA332E7F06(10);
	}
	unk_0xD8C147DA332E7F06(6);
	unk_0xD8C147DA332E7F06(7);
	unk_0xD8C147DA332E7F06(9);
	unk_0xD8C147DA332E7F06(8);
	if (bParam0)
	{
		func_76(1);
	}
	unk_0x0DA2C67B1175034B();
}

void func_76(int iParam0)
{
	Global_1369750.f_1079 = iParam0;
}

void func_77(int iParam0)
{
	if (func_81())
	{
		return;
	}
	if (!Global_14513.f_1 == 1)
	{
		if (func_80(0))
		{
			func_78(iParam0);
		}
		unk_0x2BCFB39E86340DAA(&Global_2384, 2);
	}
}

void func_78(int iParam0)
{
	if (func_81())
	{
		return;
	}
	if (Global_14681)
	{
		func_79(0, 0);
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
	if (!func_72())
	{
		Global_14513.f_1 = 3;
	}
}

void func_79(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_80(0))
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

int func_80(int iParam0)
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

bool func_81()
{
	return unk_0x05EFB6A616B6FADE(Global_1678593, 19);
}

float func_82(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 50:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_83(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x7C25BC565D364568(sParam2);
	unk_0x1757EE80C206FA5E(fParam3, iParam4);
	unk_0xB435CE12BEF0DBF7(fParam0, fParam1, 0);
}

void func_84(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x7C25BC565D364568(sParam2);
	unk_0xCDA87E1DA52C8C9D(iParam3);
	unk_0xB435CE12BEF0DBF7(fParam0, fParam1, iParam4);
}

bool func_85()
{
	return unk_0x05BEBC245254F6F2(-1762644250);
}

void func_86(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x1C828C4226A9FADF(Global_17367.f_8084[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x1C828C4226A9FADF(Global_17367.f_8084[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xA6D7328EAA8CB61E(iVar0, iVar1, iVar2, 255);
}

void func_87(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_88(Global_17367.f_6006[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x1C828C4226A9FADF(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0xA6D7328EAA8CB61E(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x1C828C4226A9FADF(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xA6D7328EAA8CB61E(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x1C828C4226A9FADF(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xA6D7328EAA8CB61E(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xA6D7328EAA8CB61E(155, 155, 155, 255);
		}
		else
		{
			unk_0xA6D7328EAA8CB61E(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xA6D7328EAA8CB61E(0, 0, 0, floor((255f * 0.8f)));
		}
		else
		{
			unk_0x1C828C4226A9FADF(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xA6D7328EAA8CB61E(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xA6D7328EAA8CB61E(155, 155, 155, 255);
	}
	else
	{
		unk_0xA6D7328EAA8CB61E(155, 155, 155, 255);
	}
	unk_0xFD5A6B90A46ACED0(0f, 0.35f);
	unk_0x38DFCC31D902E792(1);
	if (bParam5)
	{
		unk_0xFD5A6B90A46ACED0(0f, 0.425f);
		unk_0x6F2FE3F2B8CE9390(4);
	}
	else if (bParam6)
	{
		unk_0xFD5A6B90A46ACED0(0f, 0.425f);
		unk_0x6F2FE3F2B8CE9390(6);
	}
	else
	{
		unk_0x6F2FE3F2B8CE9390(0);
	}
	unk_0x8EF82530113D7244(0f, 1f);
	unk_0x2D2243C8547A3F8B(0);
	unk_0x3A98AF997B799D30(0, 0, 0, 0, 0);
	unk_0x8077D34CFF828D31(0, 0, 0, 0, 0);
}

void func_88(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_89(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_64(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_107(bParam4, bParam8))
	{
		return;
	}
	if (func_92())
	{
		return;
	}
	if (unk_0x2B21DC45DEAA4B80())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_67(unk_0xD4E735F4B6A956AC(), 0))
		{
			return;
		}
	}
	if (unk_0x47C01C0E6F4C1D06())
	{
		if (unk_0xDE59CE76013B1621() == 0 || unk_0x2B21DC45DEAA4B80())
		{
			return;
		}
	}
	if (Global_17367.f_4767 != 0)
	{
		if (unk_0x1BFD4084A40BF7E1(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17367.f_4767)
			{
				if (Global_17367.f_5024[iVar1] != 358)
				{
					StringCopy(&(Global_17367.f_4769[iVar1 /*16*/]), unk_0x7391BCD755BD8577(2, Global_17367.f_5024[iVar1], true), 64);
				}
				else if (Global_17367.f_5037[iVar1] != 32)
				{
					StringCopy(&(Global_17367.f_4769[iVar1 /*16*/]), unk_0xDD4AF94EF709B596(2, Global_17367.f_5037[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_17367.f_4768 = 0;
		}
		if (!Global_17367.f_4768)
		{
			unk_0x31A9E530D137684F(Global_17367.f_5658[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x271C1332F482646C();
			unk_0x31A9E530D137684F(Global_17367.f_5658[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xD8B5988E85F72BE5((1f - (Global_17367.f_5079 / 100f)));
			unk_0x271C1332F482646C();
			if (unk_0x47C01C0E6F4C1D06())
			{
				unk_0x31A9E530D137684F(Global_17367.f_5658[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x233A5B4A35140C6B(true);
				unk_0x271C1332F482646C();
			}
			iVar1 = 0;
			while (iVar1 < Global_17367.f_4767)
			{
				if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_4962[iVar1 /*4*/])) != unk_0xFEB6EEC0545AF7AA("PREV"))
				{
					unk_0x31A9E530D137684F(Global_17367.f_5658[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x380580A1A1667F69(iVar1);
					func_91(&(Global_17367.f_4769[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_4962[iVar2 /*4*/])) == unk_0xFEB6EEC0545AF7AA("PREV"))
					{
						func_91(&(Global_17367.f_4769[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17367.f_5011[iVar1] == -1)
					{
						func_90(&(Global_17367.f_4962[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_17367.f_5011[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x390B339C943A8A54(&(Global_17367.f_4962[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x90182C5171067861(iVar3, 70);
						}
						else
						{
							unk_0xCDA87E1DA52C8C9D(iVar3);
						}
						unk_0xD481829E3E36543B();
					}
					if (unk_0x47C01C0E6F4C1D06())
					{
						if (Global_17367.f_5024[iVar1] != 358 && unk_0x05EFB6A616B6FADE(Global_17367.f_5050, iVar1))
						{
							unk_0x233A5B4A35140C6B(true);
							unk_0x380580A1A1667F69(Global_17367.f_5024[iVar1]);
						}
						else
						{
							unk_0x233A5B4A35140C6B(false);
							unk_0x380580A1A1667F69(358);
						}
					}
					unk_0x271C1332F482646C();
				}
				iVar1++;
			}
			if (unk_0xFEB6EEC0545AF7AA(&(Global_4266986.f_16)) != unk_0xFEB6EEC0545AF7AA(""))
			{
				unk_0x31A9E530D137684F(Global_17367.f_5658[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x380580A1A1667F69(Global_17367.f_4767);
				func_91(&Global_4266986);
				if (Global_4266986.f_20 == -1)
				{
					func_90(&(Global_4266986.f_16));
				}
				else
				{
					iVar4 = Global_17367.f_5011[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x390B339C943A8A54(&(Global_4266986.f_16));
					if (bParam5)
					{
						unk_0x90182C5171067861(iVar4, 70);
					}
					else
					{
						unk_0xCDA87E1DA52C8C9D(iVar4);
					}
					unk_0xD481829E3E36543B();
				}
				unk_0x271C1332F482646C();
			}
			unk_0x31A9E530D137684F(Global_17367.f_5658[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x380580A1A1667F69(0);
			unk_0x380580A1A1667F69(0);
			unk_0x380580A1A1667F69(0);
			unk_0x380580A1A1667F69(80);
			unk_0x271C1332F482646C();
			unk_0x31A9E530D137684F(Global_17367.f_5658[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17367.f_5080)
			{
				unk_0x380580A1A1667F69(1);
			}
			else
			{
				unk_0x380580A1A1667F69(0);
			}
			unk_0x271C1332F482646C();
			Global_17367.f_4768 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17367.f_4767)
		{
			if (Global_17367.f_5011[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x31A9E530D137684F(Global_17367.f_5658[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x380580A1A1667F69(iVar1);
					unk_0x390B339C943A8A54(&(Global_17367.f_4962[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x90182C5171067861(iParam2, 70);
					}
					else
					{
						unk_0xCDA87E1DA52C8C9D(iParam2);
					}
					unk_0xD481829E3E36543B();
					unk_0x271C1332F482646C();
				}
			}
			iVar1++;
		}
		if (Global_4266986.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x31A9E530D137684F(Global_17367.f_5658[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x380580A1A1667F69(iVar1);
				unk_0x390B339C943A8A54(&(Global_4266986.f_16));
				if (bParam5)
				{
					unk_0x90182C5171067861(iParam2, 70);
				}
				else
				{
					unk_0xCDA87E1DA52C8C9D(iParam2);
				}
				unk_0xD481829E3E36543B();
				unk_0x271C1332F482646C();
			}
		}
		unk_0xCD282E433560A509(76, 66);
		unk_0xE4C207949B93A9C7(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17367.f_8091)
			{
				unk_0xACDF25AEEEFD68FD(15, 0f, -0.0375f);
				Global_17367.f_8091 = 1;
			}
		}
		else if (Global_17367.f_8091)
		{
			unk_0xE355C64541455AE8(15);
			Global_17367.f_8091 = 0;
		}
		unk_0x0DA2C67B1175034B();
		if (Global_17367.f_5053)
		{
			unk_0xCD282E433560A509(82, 66);
			unk_0xE4C207949B93A9C7(0f, 0f, 0f, 0f);
			unk_0x84829313FB8AC81C(Global_17367.f_5658[iVar0 /*10*/], Global_17367.f_5051, Global_17367.f_5052, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x0DA2C67B1175034B();
		}
		else
		{
			unk_0xE9F9BA9108F437C7(Global_17367.f_5658[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_90(char* sParam0)
{
	unk_0x390B339C943A8A54(sParam0);
	unk_0xD481829E3E36543B();
}

void func_91(char* sParam0)
{
	unk_0x0BAAED7962F122D5(sParam0);
}

int func_92()
{
	vector3 vVar0;
	
	if (Global_14513.f_1 > 3)
	{
		return 1;
	}
	if (func_93())
	{
		vVar0 = { 0f, -500f, 0f };
		unk_0x75B4B390EE495A3B(&vVar0);
		if (Global_14458 == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_93()
{
	if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_94(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0x1C828C4226A9FADF(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 50:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 49:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 51:
			*iParam5 = 100;
			break;
		
		case 52:
			unk_0x1C828C4226A9FADF(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_95(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x1C828C4226A9FADF(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x6F2FE3F2B8CE9390(0);
	unk_0xFD5A6B90A46ACED0(0f, 0.35f);
	unk_0x6CEB27E029FEA16A(2);
	unk_0xA6D7328EAA8CB61E(iVar0, iVar1, iVar2, iVar3);
	unk_0x8EF82530113D7244(fParam0, ((Global_17364 + Global_17366) - 0.0046875f));
	unk_0x2D2243C8547A3F8B(0);
	unk_0x3A98AF997B799D30(0, 0, 0, 0, 0);
	unk_0x8077D34CFF828D31(0, 0, 0, 0, 0);
}

void func_96(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x7C25BC565D364568(sParam2);
	unk_0xCDA87E1DA52C8C9D(iParam3);
	unk_0xCDA87E1DA52C8C9D(iParam4);
	unk_0xB435CE12BEF0DBF7(fParam0, fParam1, 0);
}

float func_97(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x7032042E5696FFD7(sParam0))
	{
		if (unk_0xFEB6EEC0545AF7AA(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_98();
	unk_0xC42A779360572EA7(sParam0);
	unk_0xCDA87E1DA52C8C9D(iParam1);
	unk_0xCDA87E1DA52C8C9D(iParam2);
	return unk_0x4E0DD18900B7ACAE(1);
}

void func_98()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x1C828C4226A9FADF(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17367.f_8066)
	{
		iVar0 = Global_17367.f_8062;
		iVar1 = Global_17367.f_8063;
		iVar2 = Global_17367.f_8064;
		iVar3 = Global_17367.f_8065;
	}
	unk_0x6F2FE3F2B8CE9390(0);
	unk_0xFD5A6B90A46ACED0(0f, 0.35f);
	unk_0xA6D7328EAA8CB61E(iVar0, iVar1, iVar2, iVar3);
	unk_0x8EF82530113D7244((Global_17364 + 0.0046875f), ((Global_17364 + Global_17366) - 0.0046875f));
	unk_0x2D2243C8547A3F8B(0);
	unk_0x3A98AF997B799D30(0, 0, 0, 0, 0);
	unk_0x8077D34CFF828D31(0, 0, 0, 0, 0);
}

void func_99(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xFF35427AF9343886((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_100(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0x429D45A6C6520026(&(Global_17367.f_6863[iParam0 /*16*/])))
	{
		if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_6863[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_102(unk_0xD4E735F4B6A956AC()) };
			if (unk_0x686DAB3ED67144AB(&Var2, &uVar1))
			{
				return func_101(&uVar1);
			}
		}
		else
		{
			return func_101(&(Global_17367.f_6863[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 51:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 52:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_101(var uParam0)
{
	return uParam0;
}

struct<13> func_102(int iParam0)
{
	struct<13> Var0;
	
	unk_0xE05C4303C26882C4(iParam0, &Var0, 13);
	return Var0;
}

char* func_103(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0x429D45A6C6520026(&(Global_17367.f_6014[iParam0 /*16*/])))
	{
		if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_6014[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_102(unk_0xD4E735F4B6A956AC()) };
			unk_0x686DAB3ED67144AB(&Var1, &uVar0);
			return func_101(&uVar0);
		}
		else
		{
			return func_101(&(Global_17367.f_6014[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_104()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x359669D87D0E343F(&iVar0, &iVar1);
	fVar2 = (to_float(iVar0) / to_float(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_105(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_103(iParam0), 64);
	StringCopy(&cVar1, func_100(iParam0, bParam1), 64);
	if (unk_0xFEB6EEC0545AF7AA(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x359669D87D0E343F(&iVar2, &iVar3);
			fVar5 = unk_0xA0B98358F89CB4ED(0);
			if (func_104())
			{
				iVar2 = round((to_float(iVar3) * fVar5));
			}
			fVar6 = (to_float(iVar2) / to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_104())
			{
				fVar4 = 1f;
			}
			if (unk_0x8B1574454E8C2421(joaat("director_mode")) > 0)
			{
				unk_0xD89F7C25FE53EC3D(&iVar2, &iVar3);
			}
			iVar2 = round((to_float(iVar2) / fVar4));
			iVar3 = round((to_float(iVar3) / fVar4));
		}
		else
		{
			unk_0xD89F7C25FE53EC3D(&iVar2, &iVar3);
		}
		vVar7 = { unk_0x2CABF8F7B201EA82(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_106(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_106(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 29 && unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_6863[29 /*16*/])) == -1487683087)
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x7D67DDE730F596C5() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17366)
			{
				*fParam4 = (*fParam4 * (Global_17366 / *fParam3));
				*fParam3 = Global_17366;
			}
		}
		return 1;
	}
	return 0;
}

float func_106(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_107(bool bParam0, bool bParam1)
{
	if (Global_2437022.f_1889.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x3A83743561B4F70C() || (func_109(8, -1) && func_108() != 64)) || (unk_0x05724BB62A634BD8() != 0 && !bParam1)) || (unk_0x47C3DC461C758C29() && !bParam0)) || unk_0xBE079F709C76E132()) || Global_71465) || Global_17367.f_8090) || unk_0x4EAEDDFEDE3BEE19()) || Global_93284.f_1393)
	{
		return 0;
	}
	return 1;
}

int func_108()
{
	return Global_1312792;
}

bool func_109(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1368245.f_203[iParam1];
			}
			break;
	}
	return unk_0x05EFB6A616B6FADE(Global_1368245.f_1048, iParam0);
}

void func_110(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17367.f_5734 = iParam0;
	Global_17367.f_5869 = iParam2;
	if (Global_17367.f_5734 < Global_17367.f_5733)
	{
		Global_17367.f_5733 = Global_17367.f_5734;
	}
	else if ((Global_17367.f_5727 && Global_17367.f_5734 > Global_17367.f_5735) || (!Global_17367.f_5727 && Global_17367.f_5734 >= (Global_17367.f_5733 + Global_17367.f_5223)))
	{
		iVar0 = Global_17367.f_5733;
		while (iVar0 <= Global_17367.f_5734)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17367.f_5087[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17367.f_5223 && Global_17367.f_5733 < 128)
		{
			Global_17367.f_5733++;
			iVar1 = 0;
			iVar0 = Global_17367.f_5733;
			while (iVar0 <= Global_17367.f_5734)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17367.f_5087[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17367.f_5726 = 0;
	Global_17367.f_5727 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17367.f_4690), "", 16);
		StringCopy(&(Global_4266986.f_21), "", 16);
	}
}

void func_111(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = floor((unk_0x418992ECF9808661(2, 218) * 127f));
	*uParam1 = floor((unk_0x418992ECF9808661(2, 219) * 127f));
	*uParam2 = floor((unk_0x418992ECF9808661(2, 220) * 127f));
	*uParam3 = floor((unk_0x418992ECF9808661(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = floor((unk_0x8CBB8AEBE6D8962B(2, 218) * 127f));
			*uParam1 = floor((unk_0x8CBB8AEBE6D8962B(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = floor((unk_0x8CBB8AEBE6D8962B(2, 220) * 127f));
			*uParam3 = floor((unk_0x8CBB8AEBE6D8962B(2, 221) * 127f));
		}
	}
}

void func_112()
{
	func_123(0, 0);
	func_122(1, 0, 0, 0, 0);
	func_121(1, 1, 1, 1, 1);
	if (Local_43.f_1 == 3)
	{
		func_120("SEA_MENU");
	}
	else
	{
		func_120("STREET_MENU");
	}
	func_116(0, "RACES_OPT_SP", 0, 1, 0, 0);
	func_116(1, "RACES_OPT_MP", 0, 1, 0, 0);
	func_115(201, "ITEM_SELECT", -1);
	func_115(202, "ITEM_EXIT", -1);
	func_114(11, "ITEM_SCROLL", -1);
	func_113(0);
	func_110(0, 1, 1);
	iLocal_50 = 0;
}

void func_113(int iParam0)
{
	Global_17367.f_5733 = iParam0;
}

void func_114(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xDD4AF94EF709B596(2, iParam0, true);
	if (Global_17367.f_4767 >= 12)
	{
		StringCopy(&Global_4266986, sVar0, 64);
		StringCopy(&(Global_4266986.f_16), sParam1, 16);
		Global_4266986.f_20 = iParam2;
		return;
		return;
	}
	unk_0xFA57C719261AA55D(&(Global_17367.f_5050), Global_17367.f_4767);
	StringCopy(&(Global_17367.f_4769[Global_17367.f_4767 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17367.f_4962[Global_17367.f_4767 /*4*/]), sParam1, 16);
	Global_17367.f_5011[Global_17367.f_4767] = iParam2;
	Global_17367.f_5024[Global_17367.f_4767] = 358;
	Global_17367.f_5037[Global_17367.f_4767] = iParam0;
	Global_17367.f_4767++;
}

void func_115(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x7391BCD755BD8577(2, iParam0, true);
	if (Global_17367.f_4767 >= 12)
	{
		StringCopy(&Global_4266986, sVar0, 64);
		StringCopy(&(Global_4266986.f_16), sParam1, 16);
		Global_4266986.f_20 = iParam2;
		return;
		return;
	}
	unk_0xFA57C719261AA55D(&(Global_17367.f_5050), Global_17367.f_4767);
	StringCopy(&(Global_17367.f_4769[Global_17367.f_4767 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17367.f_4962[Global_17367.f_4767 /*4*/]), sParam1, 16);
	Global_17367.f_5011[Global_17367.f_4767] = iParam2;
	Global_17367.f_5024[Global_17367.f_4767] = iParam0;
	Global_17367.f_5037[Global_17367.f_4767] = 32;
	Global_17367.f_4767++;
}

void func_116(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17367.f_5216 > iParam0)
	{
		return;
	}
	if (Global_17367.f_5216 >= 128)
	{
		return;
	}
	if (Global_17367.f_5218 >= 256)
	{
		return;
	}
	if (Global_17367.f_5738 < Global_17367.f_5736)
	{
		return;
	}
	if (Global_17367.f_5216 != iParam0)
	{
		Global_17367.f_5216 = iParam0;
		Global_17367.f_5217 = 0;
	}
	iVar0 = Global_17367.f_5054[Global_17367.f_5217];
	if (iVar0 != 1)
	{
		while (Global_17367.f_5217 < 4 && iVar0 != 1)
		{
			Global_17367.f_5217++;
			iVar0 = Global_17367.f_5054[Global_17367.f_5217];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17367.f_73[Global_17367.f_5218 /*6*/]), sParam1, 24);
	if (!unk_0x429D45A6C6520026(sParam1) && !unk_0x445EC9E7EACB710E(sParam1))
	{
	}
	Global_17367.f_1610[Global_17367.f_5218] = bParam3;
	Global_17367.f_1867[Global_17367.f_5218] = iParam4;
	Global_17367.f_5218++;
	if (!bParam3)
	{
		func_119(Global_17367.f_5216, 1);
	}
	else
	{
		func_119(Global_17367.f_5216, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_118(&(Global_17367.f_73[Global_17367.f_5218 /*6*/]));
		if (Global_17367.f_5073[Global_17367.f_5217])
		{
			func_105(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17367.f_5066[Global_17367.f_5217])
		{
			Global_17367.f_5066[Global_17367.f_5217] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_117(&(Global_17367.f_73[Global_17367.f_5218 /*6*/]));
			if (fVar4 > Global_17367.f_5740[iParam0])
			{
				Global_17367.f_5740[iParam0] = fVar4;
			}
		}
	}
	unk_0x2BCFB39E86340DAA(&(Global_17367.f_5087[iParam0]), Global_17367.f_5217);
	Global_17367.f_5217++;
	Global_17367.f_5739 = 1;
	Global_17367.f_5737 = (Global_17367.f_5218 - 1);
	Global_17367.f_5738 = 0;
	Global_17367.f_5736 = iParam2;
}

float func_117(char* sParam0)
{
	if (!unk_0x445EC9E7EACB710E(sParam0))
	{
	}
	return unk_0xAC0B4B294E7DA73D(0.35f, 0);
}

float func_118(char* sParam0)
{
	if (!unk_0x7032042E5696FFD7(sParam0))
	{
		if (unk_0xFEB6EEC0545AF7AA(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_87(0, 1, 0, 0, 0, 0, 0);
	unk_0xC42A779360572EA7(sParam0);
	return unk_0x4E0DD18900B7ACAE(1);
}

void func_119(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x2BCFB39E86340DAA(&(Global_17367.f_6009[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_17367.f_6009[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_120(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17367.f_1), sParam0, 16);
	Global_17367.f_68 = 0;
	Global_17367.f_69 = 0;
	Global_17367.f_70 = 0;
	Global_17367.f_71 = 0;
	Global_17367.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17367.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_121(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17367.f_5081[0] = iParam0;
	Global_17367.f_5081[1] = iParam1;
	Global_17367.f_5081[2] = iParam2;
	Global_17367.f_5081[3] = iParam3;
	Global_17367.f_5081[4] = iParam4;
}

void func_122(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17367.f_5054[0] = iParam0;
	Global_17367.f_5054[1] = iParam1;
	Global_17367.f_5054[2] = iParam2;
	Global_17367.f_5054[3] = iParam3;
	Global_17367.f_5054[4] = iParam4;
	Global_17367.f_5224 = 0;
	if (iParam0 != 0)
	{
		Global_17367.f_5224++;
	}
	if (iParam1 != 0)
	{
		Global_17367.f_5224++;
	}
	if (iParam2 != 0)
	{
		Global_17367.f_5224++;
	}
	if (iParam3 != 0)
	{
		Global_17367.f_5224++;
	}
	if (iParam4 != 0)
	{
		Global_17367.f_5224++;
	}
}

void func_123(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17367.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17367.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2458730[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17367.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17367.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17367.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17367.f_5087[iVar0] = 0;
		Global_17367.f_5225[iVar0] = 0;
		Global_17367.f_5354[iVar0] = 0;
		Global_17367.f_5874[iVar0] = 0f;
		Global_17367.f_5483[iVar0] = 0;
		Global_17367.f_5740[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17367.f_5054[iVar0] = 0;
		Global_17367.f_5066[iVar0] = 0f;
		Global_17367.f_5060[iVar0] = -1f;
		Global_17367.f_5073[iVar0] = 0;
		Global_17367.f_5081[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17367.f_4962[iVar0 /*4*/]), "", 16);
		Global_17367.f_5011[iVar0] = -1;
		Global_17367.f_5024[iVar0] = 358;
		Global_17367.f_5037[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 53)
	{
		StringCopy(&(Global_17367.f_6014[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17367.f_6863[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_17367.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4266986.f_16), "", 16);
	Global_4266986.f_20 = -1;
	Global_17367 = 0;
	Global_17367.f_5216 = 0;
	Global_17367.f_5217 = 0;
	Global_17367.f_5218 = 0;
	Global_17367.f_5220 = 0;
	Global_17367.f_5221 = 0;
	Global_17367.f_5222 = 0;
	Global_17367.f_5219 = 0;
	Global_17367.f_5869 = 0;
	Global_17367.f_5734 = 0;
	Global_17367.f_5733 = 0;
	Global_17367.f_5735 = 0;
	StringCopy(&(Global_17367.f_4690), "", 16);
	Global_17367.f_4760 = 0;
	Global_17367.f_4761 = 0;
	Global_17367.f_4762 = 0;
	Global_17367.f_4763 = 0;
	Global_17367.f_4764 = 0;
	Global_17367.f_4765 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17367.f_4694[iVar0] = 0;
		iVar0++;
	}
	Global_17367.f_4766 = 0;
	StringCopy(&(Global_4266986.f_21), "", 16);
	Global_4266986.f_61 = 0;
	Global_4266986.f_62 = 0;
	Global_4266986.f_63 = 0;
	Global_4266986.f_64 = 0;
	Global_4266986.f_65 = 0;
	Global_4266986.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4266986.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4266986.f_67 = 0;
	StringCopy(&(Global_17367.f_1), "", 16);
	Global_17367.f_5072 = 0f;
	Global_17367.f_68 = 0;
	Global_17367.f_69 = 0;
	Global_17367.f_70 = 0;
	Global_17367.f_71 = 0;
	Global_17367.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17367.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17367.f_5739 = 0;
	Global_17367.f_5738 = 0;
	Global_17367.f_5736 = 0;
	Global_17367.f_5737 = 0;
	Global_17367.f_4767 = 0;
	Global_17367.f_4768 = 0;
	Global_17367.f_5223 = 10;
	Global_17367.f_5224 = 0;
	Global_17367.f_5871 = 0f;
	Global_17367.f_5872 = 0f;
	Global_17367.f_5726 = 0;
	Global_17367.f_5727 = 0;
	Global_17367.f_5728 = 0f;
	Global_17367.f_5729 = 0;
	Global_17367.f_5731 = 0;
	Global_17367.f_5730 = 0;
	Global_17367.f_5732 = 0;
	Global_17367.f_8087 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17367.f_6003[iVar0] = -1;
		Global_17367.f_6006[iVar0] = -1;
		iVar0++;
	}
	Global_17367.f_5079 = 0f;
	Global_17367.f_5050 = 0;
	Global_17367.f_5080 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17367.f_6009)
	{
		Global_17367.f_6009[iVar0] = 0;
		iVar0++;
	}
	Global_17367.f_8066 = 0;
	Global_17367.f_8061 = 0;
	Global_17367.f_8071 = 0;
	Global_17367.f_8076 = 0;
	Global_17367.f_8081 = 0;
	Global_17367.f_8083 = 0;
	Global_17367.f_8089 = 0;
	Global_17364 = 0.05f;
	Global_17365 = 0.05f;
	Global_17366 = 0.225f;
	fVar2 = unk_0xA0B98358F89CB4ED(0);
	if (bParam0)
	{
		Global_17366 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17366 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17366 = 0.225f;
	}
}

bool func_124(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_64(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17367.f_5633[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x429D45A6C6520026(&(Global_17367.f_5633[iVar0 /*4*/])))
	{
		unk_0x6A633E13B2A856AE(&(Global_17367.f_5633[iVar0 /*4*/]), 9);
		Global_17367.f_5626[iVar0] = 1;
		if (!unk_0x80F19C5850FA5765(&(Global_17367.f_5633[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x8000C77B5F336760("CommonMenu", false);
	Global_17367.f_5612[iVar0] = 1;
	if (!unk_0x87DF091EDFE6D083("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x8000C77B5F336760("MPShopSale", false);
		Global_17367.f_5619[iVar0] = 1;
		if (!unk_0x87DF091EDFE6D083("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17367.f_5658[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_125(&(Global_17367.f_5658[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_125(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x0FA486DE15EB3004(*uParam0))
			{
				*uParam0 = unk_0xB00CD6895BDB01A0(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x0FA486DE15EB3004(*uParam0))
					{
						uParam0->f_8 = unk_0xFD34717937104F1C();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0xFD34717937104F1C();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x0FA486DE15EB3004(*uParam0))
			{
				uParam0->f_8 = unk_0xFD34717937104F1C();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x0FA486DE15EB3004(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_126()
{
	int iVar0;
	
	if (func_156())
	{
		if (func_139())
		{
			iVar0 = 6;
			if (Local_43.f_1 == 1)
			{
				iVar0 = 4;
			}
			func_137(iVar0);
			if (func_60(iLocal_56[iVar0]))
			{
				if (bLocal_55)
				{
					if (unk_0x411C28019DEA5CEF(iLocal_56[iVar0], cLocal_73, sLocal_74[iVar0], 3))
					{
						unk_0xED3CB2E0519060F1(iLocal_56[iVar0], cLocal_73, sLocal_74[iVar0], -8f);
					}
					func_128(iVar0);
				}
			}
			unk_0x9EA8CBEA7355649E(0, 51);
			if (unk_0x4E6A396CA4DB68F6(0, 51))
			{
				iLocal_76 = 1;
				unk_0x135C61E339DABBAC(1);
				iLocal_42 = 3;
			}
		}
		else if (!iLocal_46)
		{
			unk_0xEB60EF2E9051E817(0);
			iLocal_46 = 1;
		}
	}
	else
	{
		func_127();
		if (!iLocal_46)
		{
			unk_0xEB60EF2E9051E817(0);
			iLocal_46 = 1;
		}
	}
}

void func_127()
{
	if (iLocal_45 && unk_0xFD34717937104F1C() > iLocal_48)
	{
		unk_0x135C61E339DABBAC(1);
		iLocal_45 = 0;
	}
}

void func_128(int iParam0)
{
	int iVar0;
	
	if (!unk_0x7112137033807390(iLocal_56[iParam0], 0) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		switch (iLocal_77)
		{
			case 0:
				if (vdist2(unk_0xE2BBD32891C18569(iLocal_56[iParam0], true), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true)) < 64f)
				{
					iLocal_78 = 0;
					iLocal_79 = 0;
					iLocal_77 = 1;
				}
				break;
			
			case 1:
				unk_0x2F89329397A277BC(&iVar0);
				unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 0, 2);
				unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
				unk_0x301F42EEE3C40328(iVar0);
				unk_0xE1072FA2FECBAD96(iLocal_56[iParam0], iVar0);
				unk_0x3A95A0A3221D4208(&iVar0);
				iLocal_77 = 2;
				break;
			
			case 2:
				if (unk_0xF9D4EF1338E38AFB(iLocal_56[iParam0], 242628503) != 1 || unk_0xC42DE41AEED00E7B(iLocal_56[iParam0], unk_0xA19140A5C42D8715(), 20f))
				{
					unk_0x0177431263151C4E(iLocal_56[iParam0], unk_0xA19140A5C42D8715(), -1);
					if (!iLocal_79)
					{
						func_135(iLocal_56[iParam0], "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_135(iLocal_56[iParam0], "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_77 = 3;
				}
				break;
			
			case 3:
				if (!unk_0xF59ACE94F067B46D(iLocal_56[iParam0]))
				{
					func_133(&iLocal_80);
					unk_0x3F01127ECD227890(iLocal_56[iParam0], "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0, 0);
					iLocal_77 = 4;
				}
				break;
			
			case 4:
				if (vdist2(unk_0xE2BBD32891C18569(iLocal_56[iParam0], true), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true)) > 225f)
				{
					iLocal_77 = 0;
				}
				if (func_129(&iLocal_80) >= 5f && !iLocal_78)
				{
					iLocal_78 = 1;
					iLocal_77 = 1;
				}
				else if (func_129(&iLocal_80) >= 10f && !iLocal_79)
				{
					iLocal_79 = 1;
					iLocal_77 = 1;
				}
				break;
			
			case 5:
				break;
			}
	}
}

float func_129(int iParam0)
{
	if (func_132(iParam0))
	{
		if (func_131(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_130(unk_0x05EFB6A616B6FADE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_130(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = to_float(unk_0xFD34717937104F1C());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		iVar2 = unk_0xFFCC7EBF88BDEE54();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(unk_0xFD34717937104F1C()) / 1000f);
}

bool func_131(var uParam0)
{
	return unk_0x05EFB6A616B6FADE(*uParam0, 2);
}

bool func_132(var uParam0)
{
	return unk_0x05EFB6A616B6FADE(*uParam0, 1);
}

void func_133(int iParam0)
{
	func_134(iParam0, 0f);
}

void func_134(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_130(unk_0x05EFB6A616B6FADE(*iParam0, 4)) - fParam1);
	unk_0x2BCFB39E86340DAA(iParam0, 1);
	unk_0xFA57C719261AA55D(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_135(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x85AF6DC3641E2442(iParam0, sParam1, sParam2, func_136(iParam3), 0);
}

int func_136(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_137(int iParam0)
{
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) && !func_138())
	{
		if (func_60(iLocal_56[iParam0]))
		{
			if (iLocal_46 && unk_0xEAA5CEF8875FEEED(unk_0xA19140A5C42D8715()) < 20f)
			{
				unk_0x39102BE90DA2BED2(iLocal_56[iParam0], 0f, 0f, 0f, 1, 2000, 2000, 2000, 0);
				iLocal_46 = 0;
			}
		}
	}
}

int func_138()
{
	if (unk_0x1F7BAD75218F1A2C(unk_0x9F302D755A846102()) == 4)
	{
		return 1;
	}
	return 0;
}

int func_139()
{
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (func_155())
		{
			return 0;
		}
		if (func_154(func_49()) < Local_43.f_3)
		{
			if (Local_43.f_1 == 3)
			{
				func_151("SEA_NA_CASH", Local_43.f_3);
			}
			else
			{
				func_151("STREET_NA_CASH", Local_43.f_3);
			}
			iLocal_45 = 1;
			iLocal_48 = unk_0xFD34717937104F1C() + 1000;
			return 0;
		}
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			func_150(&iLocal_0);
			iLocal_0 = unk_0xD1A189C6C27EE0CA(unk_0xA19140A5C42D8715());
			if (!func_145())
			{
				iLocal_45 = 1;
				iLocal_48 = unk_0xFD34717937104F1C() + 1000;
				return 0;
			}
			else if ((unk_0x24A1A7BF4ED94B71(iLocal_0) <= 200 || unk_0x463E3A48A46C9195(iLocal_0)) || func_144())
			{
				func_143("RACE_VehDmg");
				iLocal_45 = 1;
				iLocal_48 = unk_0xFD34717937104F1C() + 1000;
				return 0;
			}
			else if (unk_0xB0D49A1F9F054602(iLocal_0, -1, 0) != unk_0xA19140A5C42D8715())
			{
				func_140();
				return 0;
			}
			else
			{
				if (func_80(0) || unk_0x8B1574454E8C2421(joaat("appinternet")) > 0)
				{
					func_127();
					return 0;
				}
				switch (Local_43.f_1)
				{
					case 1:
						func_151("STREET_PLAY_B", Local_43.f_3);
						break;
					
					case 2:
						func_151("STREET_PLAY_C", Local_43.f_3);
						break;
					
					case 3:
						func_143("SEA_PLAY");
						break;
				}
				iLocal_45 = 1;
				iLocal_48 = unk_0xFD34717937104F1C();
				return 1;
			}
		}
		else
		{
			func_150(&iLocal_0);
			func_140();
			return 0;
		}
	}
	return 0;
}

void func_140()
{
	char* sVar0;
	
	if (Local_43.f_1 == 3)
	{
		if (func_14(iLocal_57))
		{
			sVar0 = "SEA_NA_VEH";
		}
		else
		{
			sVar0 = "SEA_NA_VEH2";
		}
		if (!func_142(sVar0))
		{
			func_141(sVar0);
			iLocal_45 = 1;
			iLocal_48 = unk_0xFD34717937104F1C() + 1000;
		}
	}
	else if (Local_43.f_1 == 1)
	{
		if (!func_142("STREET_NA_BIKE"))
		{
			func_141("STREET_NA_BIKE");
			iLocal_45 = 1;
			iLocal_48 = unk_0xFD34717937104F1C() + 1000;
		}
	}
	else if (!func_142("STREET_NA_CAR"))
	{
		func_141("STREET_NA_CAR");
		iLocal_45 = 1;
		iLocal_48 = unk_0xFD34717937104F1C() + 1000;
	}
}

void func_141(char* sParam0)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 1, true, -1);
}

int func_142(char* sParam0)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	return unk_0x3D94488A86ABB03F(0);
}

void func_143(char* sParam0)
{
	if (!func_142(sParam0))
	{
		func_141(sParam0);
	}
}

int func_144()
{
	int iVar0;
	
	iVar0 = unk_0x8F474E419F56E48D(iLocal_0);
	if (unk_0x8CE5E4632E631B03(iVar0))
	{
		if (unk_0xB7223494EA10AF2F(iLocal_0, 6, 0) || unk_0xB7223494EA10AF2F(iLocal_0, 7, 0))
		{
			return 1;
		}
	}
	else if (unk_0x425CD7B17352316F(iVar0))
	{
		if (((unk_0xB7223494EA10AF2F(iLocal_0, 0, 0) || unk_0xB7223494EA10AF2F(iLocal_0, 1, 0)) || unk_0xB7223494EA10AF2F(iLocal_0, 4, 0)) || unk_0xB7223494EA10AF2F(iLocal_0, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_145()
{
	int iVar0;
	char* sVar1;
	
	switch (Local_43.f_1)
	{
		case 1:
			iVar0 = func_149();
			if (iVar0 == 1)
			{
				func_143("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_143("STREET_NA_BIKE");
				return 0;
			}
			break;
		
		case 2:
			iVar0 = func_147();
			if (iVar0 == 1)
			{
				func_143("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_143("STREET_NA_CAR");
				return 0;
			}
			break;
		
		case 3:
			if (!func_146())
			{
				if (func_14(iLocal_57))
				{
					sVar1 = "SEA_NA_VEH";
				}
				else
				{
					sVar1 = "SEA_NA_VEH2";
				}
				func_143(sVar1);
				return 0;
			}
			break;
	}
	return 1;
}

int func_146()
{
	int iVar0;
	
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_0))
		{
			iVar0 = unk_0x8F474E419F56E48D(iLocal_0);
			if (iVar0 == joaat("seashark") || iVar0 == joaat("seashark2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_147()
{
	int iVar0;
	int iVar1;
	int iVar2[83];
	
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_0))
		{
			iVar0 = unk_0x8F474E419F56E48D(iLocal_0);
			if (func_148(iVar0))
			{
				return 1;
			}
			if ((((((((((iVar0 == joaat("police4") || iVar0 == joaat("policeold1")) || iVar0 == joaat("policeold2")) || iVar0 == joaat("fbi")) || iVar0 == joaat("fbi2")) || iVar0 == joaat("lguard")) || iVar0 == joaat("sheriff")) || iVar0 == joaat("sheriff2")) || iVar0 == joaat("pranger")) || iVar0 == joaat("ambulance")) || iVar0 == 1938952078)
			{
				return 1;
			}
			if (((unk_0x8CE5E4632E631B03(iVar0) || unk_0x71852D4EBD08275F(iVar0)) || unk_0x7C197233F79C2CB8(iVar0)) || unk_0xCA8C103FCD316F89(iVar0))
			{
				return 2;
			}
			iVar2[0] = joaat("ambulance");
			iVar2[1] = joaat("benson");
			iVar2[2] = joaat("biff");
			iVar2[3] = joaat("bus");
			iVar2[4] = 1938952078;
			iVar2[5] = joaat("forklift");
			iVar2[6] = joaat("mule");
			iVar2[7] = joaat("mule2");
			iVar2[8] = joaat("packer");
			iVar2[9] = joaat("phantom");
			iVar2[10] = joaat("mower");
			iVar2[11] = joaat("stockade");
			iVar2[12] = joaat("squalo");
			iVar2[13] = joaat("maverick");
			iVar2[14] = joaat("polmav");
			iVar2[15] = joaat("airtug");
			iVar2[16] = joaat("boxville3");
			iVar2[17] = joaat("annihilator");
			iVar2[18] = joaat("dinghy");
			iVar2[19] = 0;
			iVar2[20] = joaat("ripley");
			iVar2[21] = joaat("trash");
			iVar2[22] = joaat("burrito");
			iVar2[23] = joaat("pony");
			iVar2[24] = joaat("speedo");
			iVar2[25] = joaat("marquis");
			iVar2[26] = joaat("sanchez");
			iVar2[27] = joaat("airtug");
			iVar2[28] = joaat("taco");
			iVar2[29] = joaat("barracks");
			iVar2[30] = joaat("romero");
			iVar2[31] = joaat("blazer");
			iVar2[32] = joaat("blazer2");
			iVar2[33] = joaat("bodhi2");
			iVar2[34] = joaat("boxville2");
			iVar2[35] = joaat("bulldozer");
			iVar2[36] = joaat("caddy");
			iVar2[37] = joaat("caddy2");
			iVar2[38] = joaat("camper");
			iVar2[39] = joaat("tiptruck");
			iVar2[40] = joaat("tourbus");
			iVar2[41] = joaat("towtruck");
			iVar2[42] = joaat("towtruck2");
			iVar2[43] = joaat("tractor");
			iVar2[44] = joaat("tractor2");
			iVar2[45] = joaat("utillitruck");
			iVar2[46] = joaat("utillitruck2");
			iVar2[47] = joaat("utillitruck3");
			iVar2[48] = joaat("ratloader");
			iVar2[49] = joaat("dloader");
			iVar2[50] = joaat("docktug");
			iVar2[51] = joaat("dump");
			iVar2[52] = joaat("gburrito");
			iVar2[53] = joaat("handler");
			iVar2[54] = joaat("hauler");
			iVar2[55] = joaat("journey");
			iVar2[56] = joaat("rentalbus");
			iVar2[57] = joaat("mixer");
			iVar2[58] = joaat("rhino");
			iVar2[59] = joaat("cutter");
			iVar2[60] = joaat("pounder");
			iVar2[61] = joaat("tiptruck2");
			iVar2[62] = joaat("mixer2");
			iVar2[63] = joaat("rubble");
			iVar2[64] = joaat("scrap");
			iVar2[65] = joaat("armytanker");
			iVar2[66] = joaat("barracks2");
			iVar2[67] = joaat("airbus");
			iVar2[68] = joaat("coach");
			iVar2[69] = joaat("pbus");
			iVar2[70] = joaat("riot");
			iVar2[71] = 0;
			iVar2[72] = joaat("stockade3");
			iVar2[73] = joaat("flatbed");
			iVar2[74] = joaat("boxville");
			iVar2[75] = joaat("burrito2");
			iVar2[76] = joaat("burrito3");
			iVar2[77] = joaat("burrito4");
			iVar2[78] = joaat("rumpo");
			iVar2[79] = joaat("speedo2");
			iVar2[80] = 0;
			iVar2[81] = joaat("blimp");
			iVar2[82] = joaat("blimp2");
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (iVar0 == iVar2[iVar1])
				{
					return 2;
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
	}
	return 0;
}

int func_149()
{
	int iVar0;
	
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_0))
		{
			iVar0 = unk_0x8F474E419F56E48D(iLocal_0);
			if (iVar0 == joaat("policeb"))
			{
				return 1;
			}
			if (unk_0x8CE5E4632E631B03(iVar0) && !unk_0x1F41816F62350826(iVar0))
			{
				return 0;
			}
		}
	}
	return 2;
}

void func_150(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(*iParam0))
	{
		unk_0x7112137033807390(*iParam0, 0);
		if (unk_0x4943BEEC19289B8E(*iParam0) && unk_0x82384F63D814C864(*iParam0, 1))
		{
			unk_0x792676988A48387F(iParam0);
		}
	}
}

void func_151(char* sParam0, int iParam1)
{
	if (!func_153(sParam0, iParam1))
	{
		func_152(sParam0, iParam1);
	}
}

void func_152(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0xCDA87E1DA52C8C9D(iParam1);
	unk_0x9E55AC8543FF8836(0, 1, true, -1);
}

int func_153(char* sParam0, int iParam1)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	unk_0xCDA87E1DA52C8C9D(iParam1);
	return unk_0x3D94488A86ABB03F(0);
}

int func_154(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x2AD48F3CEBA882E9(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x2AD48F3CEBA882E9(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x2AD48F3CEBA882E9(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_155()
{
	int iVar0;
	
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			iVar0 = unk_0xD1A189C6C27EE0CA(unk_0xA19140A5C42D8715());
			if (func_15(iVar0))
			{
				if (unk_0x26D28D230F871E8D(iVar0))
				{
					if (Local_43.f_1 == 3 && unk_0x4374EED90C523366(iVar0))
					{
						return 0;
					}
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 0;
}

int func_156()
{
	int iVar0;
	
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		iVar0 = 20;
		if (Local_43.f_1 == 3)
		{
			iVar0 = 40;
		}
		if (unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vLocal_44, true) < IntToFloat(iVar0) && unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_157()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_162(&uLocal_90))
	{
		if (Local_43.f_1 == 2)
		{
			if (func_159())
			{
				if (!unk_0xDC5D81351D6A4DDB(iLocal_57))
				{
					if (unk_0x7FC99CCC73354033(iLocal_71) && unk_0x7FC99CCC73354033(iLocal_71))
					{
						iLocal_57 = unk_0x48CFBECB146FD1A1(iLocal_71, vLocal_59, fLocal_60, true, true, false);
						if (unk_0x715EA6F049E0AB94(1) && unk_0x3E748D7D743334F1())
						{
							iLocal_58 = unk_0x4B889BDD25E732AA(iLocal_57, 1);
							unk_0x95015EE4AAC98495(iLocal_58, iLocal_57, 1, 99999999);
							unk_0x1F4E5EFBFE503FB3(iLocal_58, true);
							unk_0xD738221C247C8B71(iLocal_58, true);
						}
						unk_0x99F546A9200EA026(iLocal_57, 1084227584);
						unk_0xC19EDC1D7179164C(iLocal_57, true, true, 0);
						unk_0xDDDEEC84F4F95674(iLocal_57, true);
						unk_0xF0EA91023169ED28(iLocal_57, 1);
						unk_0xC60B72CAF488C594(unk_0x13B011674250FA98(10), 1);
						unk_0x11D8017AF1DF991E(iLocal_57, unk_0x13B011674250FA98(10));
						unk_0x6A1316C2E50E25F8(iLocal_57, 0);
						unk_0xA5DE74AE39867B03(iLocal_71);
						wait(0);
					}
				}
				if (!unk_0xDC5D81351D6A4DDB(iLocal_61))
				{
					if (unk_0x7FC99CCC73354033(iLocal_72))
					{
						iLocal_61 = unk_0x48CFBECB146FD1A1(iLocal_72, vLocal_62, fLocal_63, true, true, false);
						unk_0xC19EDC1D7179164C(iLocal_61, false, true, 0);
						unk_0xDDDEEC84F4F95674(iLocal_61, true);
						unk_0xF0EA91023169ED28(iLocal_61, 1);
						unk_0x99F546A9200EA026(iLocal_61, 1084227584);
						unk_0xC60B72CAF488C594(unk_0x13B011674250FA98(10), 1);
						unk_0x11D8017AF1DF991E(iLocal_61, unk_0x13B011674250FA98(10));
						unk_0x6A1316C2E50E25F8(iLocal_61, 0);
						unk_0xA5DE74AE39867B03(iLocal_72);
						wait(0);
					}
				}
				if (unk_0x39C2D9AB77873F84(cLocal_73))
				{
					if (iLocal_75)
					{
						iVar0 = 0;
						while (iVar0 <= (iLocal_70 - 1))
						{
							if (unk_0xDC5D81351D6A4DDB(iLocal_56[iVar0]))
							{
								if (!unk_0x7112137033807390(iLocal_56[iVar0], 0) && !func_158(iLocal_56[iVar0], -2017877118))
								{
									unk_0x3F01127ECD227890(iLocal_56[iVar0], cLocal_73, sLocal_74[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									unk_0xD738221C247C8B71(iLocal_56[iVar0], true);
								}
							}
							else if (unk_0x7FC99CCC73354033(iLocal_70[iVar0]))
							{
								iLocal_56[iVar0] = unk_0x35C6E06B120EB2E3(25, iLocal_70[iVar0], vLocal_66[iVar0 /*3*/], fLocal_67[iVar0], 1, true);
								unk_0xE8B3104D1CB25CDC(iLocal_56[iVar0], vLocal_66[iVar0 /*3*/], 0, 0, 1);
								unk_0x1F4E5EFBFE503FB3(iLocal_56[iVar0], true);
								unk_0x3F01127ECD227890(iLocal_56[iVar0], cLocal_73, sLocal_74[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
								unk_0xD738221C247C8B71(iLocal_56[iVar0], true);
							}
							iVar0++;
						}
						if ((((((((func_60(iLocal_56[0]) && func_60(iLocal_56[1])) && func_60(iLocal_56[2])) && func_60(iLocal_56[3])) && func_60(iLocal_56[4])) && func_60(iLocal_56[5])) && func_60(iLocal_56[6])) && func_14(iLocal_57)) && func_14(iLocal_61))
						{
							bLocal_55 = true;
							iVar0 = 0;
							while (iVar0 <= (iLocal_70 - 1))
							{
								unk_0xA5DE74AE39867B03(iLocal_70[iVar0]);
								iVar0++;
							}
							iLocal_75 = 0;
						}
					}
				}
			}
		}
		else if (Local_43.f_1 == 1)
		{
			if (func_159())
			{
				if (!unk_0xDC5D81351D6A4DDB(iLocal_57))
				{
					if (unk_0x7FC99CCC73354033(iLocal_71))
					{
						iLocal_57 = unk_0x48CFBECB146FD1A1(iLocal_71, vLocal_59, fLocal_60, true, true, false);
						if (unk_0x715EA6F049E0AB94(0) && unk_0x29500EC0831EC722())
						{
							iLocal_58 = unk_0x4B889BDD25E732AA(iLocal_57, 1);
							unk_0x95015EE4AAC98495(iLocal_58, iLocal_57, 1, 99999999);
							unk_0x1F4E5EFBFE503FB3(iLocal_58, true);
							unk_0xD738221C247C8B71(iLocal_58, true);
						}
						unk_0xC19EDC1D7179164C(iLocal_57, true, true, 0);
						unk_0xDDDEEC84F4F95674(iLocal_57, true);
						unk_0xF0EA91023169ED28(iLocal_57, 1);
						unk_0xC60B72CAF488C594(unk_0x13B011674250FA98(10), 1);
						unk_0x11D8017AF1DF991E(iLocal_57, unk_0x13B011674250FA98(10));
						unk_0x6A1316C2E50E25F8(iLocal_57, 0);
						unk_0xA5DE74AE39867B03(iLocal_71);
					}
				}
				if (unk_0x39C2D9AB77873F84(cLocal_73))
				{
					if (iLocal_75)
					{
						iVar1 = 0;
						while (iVar1 <= (iLocal_70 - 3))
						{
							if (unk_0xDC5D81351D6A4DDB(iLocal_56[iVar1]))
							{
								if (!unk_0x7112137033807390(iLocal_56[iVar1], 0) && !func_158(iLocal_56[iVar1], -2017877118))
								{
									unk_0xE8B3104D1CB25CDC(iLocal_56[iVar1], vLocal_66[iVar1 /*3*/], 0, 0, 1);
									if (iVar1 != 2 && iVar1 != 3)
									{
										unk_0x3F01127ECD227890(iLocal_56[iVar1], cLocal_73, sLocal_74[iVar1], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									}
									else
									{
										unk_0x3F01127ECD227890(iLocal_56[iVar1], cLocal_73, sLocal_74[iVar1], 1000f, -1000f, -1, 1, 0.5f, 0, 0, 0);
									}
									unk_0xD738221C247C8B71(iLocal_56[iVar1], true);
								}
							}
							else if (unk_0x7FC99CCC73354033(iLocal_70[iVar1]))
							{
								iLocal_56[iVar1] = unk_0x35C6E06B120EB2E3(25, iLocal_70[iVar1], vLocal_66[iVar1 /*3*/], fLocal_67[iVar1], 1, true);
								unk_0x1F4E5EFBFE503FB3(iLocal_56[iVar1], true);
							}
							iVar1++;
						}
						if ((((func_60(iLocal_56[0]) && func_60(iLocal_56[1])) && func_60(iLocal_56[2])) && func_60(iLocal_56[3])) && func_60(iLocal_56[4]))
						{
							unk_0x22DD1D053CFF9707(iLocal_56[4], unk_0xA19140A5C42D8715(), -1, 2048, 4);
							iVar1 = 0;
							while (iVar1 <= (iLocal_70 - 1))
							{
								unk_0xA5DE74AE39867B03(iLocal_70[iVar1]);
								iVar1++;
							}
							iLocal_75 = 0;
						}
					}
				}
			}
		}
		else if (Local_43.f_1 == 3)
		{
			if (func_159())
			{
				if (!unk_0xDC5D81351D6A4DDB(iLocal_57))
				{
					if (unk_0x7FC99CCC73354033(iLocal_71))
					{
						iLocal_57 = unk_0x48CFBECB146FD1A1(iLocal_71, vLocal_59, fLocal_60, true, true, false);
						unk_0x99F546A9200EA026(iLocal_57, 1084227584);
						unk_0x772F5BA770275C36(iLocal_57, 0f);
						unk_0x4B1CD1284C68DB73(iLocal_57, 0);
						unk_0xF6A70E246A400068(iLocal_57, 0);
						if (unk_0x47F11BA21FE3773D(iLocal_57))
						{
							unk_0x5D7FCE658C4E2D8A(iLocal_57, true);
						}
						unk_0xC19EDC1D7179164C(iLocal_57, false, true, 0);
					}
				}
				iVar2 = 0;
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (unk_0xDC5D81351D6A4DDB(iLocal_68[iVar2]))
					{
						if (unk_0xDC5D81351D6A4DDB(iLocal_69[iVar2]))
						{
							if (!unk_0x4915F4759304D5CF(iLocal_69[iVar2]) && func_14(iLocal_68[iVar2]))
							{
								if (unk_0x588F5E48C78F1C73(iLocal_68[iVar2], -1, 0))
								{
									unk_0x692D5500D82E4F5D(iLocal_69[iVar2], iLocal_68[iVar2], -1);
								}
							}
						}
						else if (func_14(iLocal_68[iVar2]) && unk_0x7FC99CCC73354033(joaat("a_m_y_jetski_01")))
						{
							iLocal_69[iVar2] = unk_0x91A7C8CA5E332C03(iLocal_68[iVar2], 25, joaat("a_m_y_jetski_01"), -1, 1, true);
							unk_0x1CCA743B14705812(iLocal_69[iVar2], 0);
							unk_0x1F4E5EFBFE503FB3(iLocal_69[iVar2], true);
						}
					}
					else if (unk_0x7FC99CCC73354033(iLocal_71))
					{
						iLocal_68[iVar2] = unk_0x48CFBECB146FD1A1(iLocal_71, vLocal_64[iVar2 /*3*/], fLocal_65[iVar2], true, true, false);
						unk_0x99F546A9200EA026(iLocal_68[iVar2], 1084227584);
						unk_0x772F5BA770275C36(iLocal_68[iVar2], 0f);
						unk_0x4B1CD1284C68DB73(iLocal_68[iVar2], 1);
						unk_0xF6A70E246A400068(iLocal_68[iVar2], 1);
						if (unk_0x47F11BA21FE3773D(iLocal_68[iVar2]))
						{
							unk_0x5D7FCE658C4E2D8A(iLocal_68[iVar2], true);
						}
						unk_0xC19EDC1D7179164C(iLocal_68[iVar2], false, true, 0);
					}
					iVar2++;
				}
				if (((unk_0xDC5D81351D6A4DDB(iLocal_57) && unk_0xDC5D81351D6A4DDB(iLocal_68[0])) && unk_0xDC5D81351D6A4DDB(iLocal_68[1])) && unk_0xDC5D81351D6A4DDB(iLocal_68[2]))
				{
					unk_0xA5DE74AE39867B03(iLocal_71);
				}
				if ((unk_0xDC5D81351D6A4DDB(iLocal_69[0]) && unk_0xDC5D81351D6A4DDB(iLocal_69[1])) && unk_0xDC5D81351D6A4DDB(iLocal_69[2]))
				{
					unk_0xA5DE74AE39867B03(joaat("a_m_y_jetski_01"));
				}
				unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 170, true);
			}
		}
	}
}

int func_158(int iParam0, int iParam1)
{
	if (func_60(iParam0))
	{
		if (unk_0xF9D4EF1338E38AFB(iParam0, iParam1) == 1 || unk_0xF9D4EF1338E38AFB(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_159()
{
	if (!func_161())
	{
		return 0;
	}
	if (func_60(unk_0xA19140A5C42D8715()))
	{
		if (!func_160(unk_0xA19140A5C42D8715(), vLocal_59, 100f) || unk_0x71364F510A1CB69F())
		{
			return 1;
		}
	}
	return 0;
}

bool func_160(int iParam0, vector3 vParam1, float fParam2)
{
	return vdist2(unk_0xE2BBD32891C18569(iParam0, true), vParam1) <= (fParam2 * fParam2);
}

int func_161()
{
	if (Local_43.f_1 == 3)
	{
		return 1;
	}
	else if (Local_43.f_1 == 1 || Local_43.f_1 == 2)
	{
		if (unk_0x34CEB9721AC6A0A9() >= 20 || unk_0x34CEB9721AC6A0A9() < 5)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_162(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_163(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_163(var uParam0)
{
	return func_164(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_164(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x05EFB6A616B6FADE(iParam0, 30))
	{
		if (unk_0x05EFB6A616B6FADE(iParam0, 29))
		{
			switch (func_165(iParam0))
			{
				case 0:
					return unk_0x7FC99CCC73354033(iParam2);
					break;
				
				case 1:
					return unk_0x39C2D9AB77873F84(sParam1);
					break;
				
				case 2:
					return unk_0xD7AFBCBD45CE1D9D(sParam1);
					break;
				
				case 3:
					return unk_0x87DF091EDFE6D083(sParam1);
					break;
				
				case 4:
					return unk_0x6F4A062113883115(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xF8882C5CDED0257A(sParam1);
					break;
				
				case 6:
					return unk_0x61346376C1469A0E(sParam1, unk_0x05EFB6A616B6FADE(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x2106996673968125(iParam2);
					break;
				
				case 8:
					return unk_0xD744813D9841CA9A(iParam2);
					break;
				
				case 9:
					return unk_0x5488D97A1366CE04();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_165(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x05EFB6A616B6FADE(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_166(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0x817B152F7462D506() >= (uParam0->f_146 + uParam0->f_147) || unk_0x05EFB6A616B6FADE(Global_93232.f_20, 2)) || unk_0x05EFB6A616B6FADE(Global_93232.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*18*/], 29))
					{
						func_167(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0x817B152F7462D506();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_167(int iParam0)
{
	func_168(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_168(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x05EFB6A616B6FADE(*iParam0, 30))
	{
		switch (func_165(*iParam0))
		{
			case 0:
				unk_0xCACEBBBEAD8F262E(iParam2);
				break;
			
			case 1:
				unk_0x6D68030C791111E0(sParam1);
				break;
			
			case 2:
				unk_0x4069FC25AC4F1CFB(sParam1);
				break;
			
			case 3:
				unk_0x8000C77B5F336760(sParam1, unk_0x05EFB6A616B6FADE(*iParam0, 28));
				break;
			
			case 4:
				unk_0x5C2A13372076C38C(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x247955A7AC51D6E6(sParam1);
				break;
			
			case 6:
				unk_0x61346376C1469A0E(sParam1, unk_0x05EFB6A616B6FADE(*iParam0, 27), -1);
				break;
			
			case 7:
				unk_0x90488A740F13CBEC(iParam2);
				break;
			
			case 8:
				unk_0x6A633E13B2A856AE(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x788BCD68EF8935BE();
				break;
			
			default:
				break;
		}
		unk_0x2BCFB39E86340DAA(iParam0, 29);
	}
}

void func_169()
{
	int iVar0;
	
	if (Local_43.f_1 == 1 || Local_43.f_1 == 2)
	{
		switch (Local_43)
		{
			case 0:
				vLocal_59 = { -158.67f, -1555.16f, 34.63f };
				fLocal_60 = 187.71f;
				vLocal_62 = { -155.15f, -1550.83f, 34.53f };
				fLocal_63 = 213.13f;
				vLocal_83 = { -68.87878f, -1818.903f, 24.55311f };
				vLocal_84 = { -56.0098f, -1807.029f, 27.85417f };
				vLocal_66[0 /*3*/] = { -157.19f, -1555.36f, 35.07f };
				vLocal_66[1 /*3*/] = { -157.04f, -1557.57f, 35.11f };
				vLocal_66[2 /*3*/] = { -159.83f, -1557.39f, 34.96f };
				vLocal_66[3 /*3*/] = { -156.64f, -1551.96f, 34.92f };
				vLocal_66[4 /*3*/] = { -156.25f, -1552.58f, 34.93f };
				vLocal_66[5 /*3*/] = { -153.23f, -1553.05f, 34.93f };
				vLocal_66[6 /*3*/] = { -155.3f, -1556.41f, 35.13f };
				fLocal_67[0] = 101.91f;
				fLocal_67[1] = 38.48f;
				fLocal_67[2] = -36.7f;
				fLocal_67[3] = -52.93f;
				fLocal_67[4] = -75.07f;
				fLocal_67[5] = 33.13f;
				fLocal_67[6] = -170.02f;
				break;
			
			case 1:
				vLocal_59 = { 368.72f, 294.06f, 102.96f };
				fLocal_60 = 25.17f;
				vLocal_62 = { 373.71f, 290.72f, 102.89f };
				fLocal_63 = 33.24f;
				vLocal_83 = { -523.5497f, 262.2986f, 80.01991f };
				vLocal_84 = { -509.1013f, 272.478f, 86.17713f };
				vLocal_66[0 /*3*/] = { 367.24f, 293.81f, 103.41f };
				vLocal_66[1 /*3*/] = { 368.73f, 296.89f, 103.41f };
				vLocal_66[2 /*3*/] = { 366.94f, 296.34f, 103.43f };
				vLocal_66[3 /*3*/] = { 375.21f, 291.85f, 103.25f };
				vLocal_66[4 /*3*/] = { 374.81f, 292.47f, 103.26f };
				vLocal_66[5 /*3*/] = { 371.51f, 291.85f, 103.31f };
				vLocal_66[6 /*3*/] = { 373.86f, 296.3f, 103.31f };
				fLocal_67[0] = -64.83f;
				fLocal_67[1] = -163.04f;
				fLocal_67[2] = -118.77f;
				fLocal_67[3] = 127.18f;
				fLocal_67[4] = 105.04f;
				fLocal_67[5] = -146.75f;
				fLocal_67[6] = 10.11f;
				break;
			
			case 2:
				vLocal_59 = { -807.98f, -2555.14f, 13.34f };
				fLocal_60 = 3.35f;
				vLocal_62 = { -810.1f, -2560.85f, 13.38f };
				fLocal_63 = 43.57f;
				vLocal_83 = { -1000.759f, -2436.092f, 17.16946f };
				vLocal_84 = { -986.7399f, -2424.87f, 22.16946f };
				vLocal_66[0 /*3*/] = { -809.45f, -2554.82f, 13.76f };
				vLocal_66[1 /*3*/] = { -808.47f, -2552.43f, 13.76f };
				vLocal_66[2 /*3*/] = { -806.32f, -2552.87f, 13.76f };
				vLocal_66[3 /*3*/] = { -808.59f, -2559.5f, 13.76f };
				vLocal_66[4 /*3*/] = { -809.1f, -2558.97f, 13.76f };
				vLocal_66[5 /*3*/] = { -812.82f, -2559.48f, 13.76f };
				vLocal_66[6 /*3*/] = { -810.72f, -2555.37f, 13.76f };
				fLocal_67[0] = -86.65f;
				fLocal_67[1] = -130.05f;
				fLocal_67[2] = 150.04f;
				fLocal_67[3] = 137.51f;
				fLocal_67[4] = 115.37f;
				fLocal_67[5] = -136.43f;
				fLocal_67[6] = 20.43f;
				break;
			
			case 3:
				vLocal_59 = { 778.59f, -1160.2f, 28.35f };
				fLocal_60 = 302.47f;
				vLocal_62 = { 778.47f, -1164.01f, 28.25f };
				fLocal_63 = 287.97f;
				vLocal_83 = { -1000.759f, -2436.092f, 17.16946f };
				vLocal_84 = { -986.7399f, -2424.87f, 22.16946f };
				vLocal_66[0 /*3*/] = { 778.16f, -1158.78f, 28.88f };
				vLocal_66[1 /*3*/] = { 780.82f, -1158.1f, 28.73f };
				vLocal_66[2 /*3*/] = { 781.52f, -1158.81f, 28.7f };
				vLocal_66[3 /*3*/] = { 779.16f, -1165.74f, 28.72f };
				vLocal_66[4 /*3*/] = { 779.86f, -1165.52f, 28.72f };
				vLocal_66[5 /*3*/] = { 780.75f, -1161.99f, 28.65f };
				vLocal_66[6 /*3*/] = { 783.8f, -1165.61f, 28.74f };
				fLocal_67[0] = -147.53f;
				fLocal_67[1] = 171.51f;
				fLocal_67[2] = 104.94f;
				fLocal_67[3] = 21.91f;
				fLocal_67[4] = -0.22f;
				fLocal_67[5] = 107.91f;
				fLocal_67[6] = -95.23f;
				break;
			
			case 4:
				vLocal_59 = { -1066.59f, -1151.04f, 1.71f };
				fLocal_60 = 258.32f;
				vLocal_66[0 /*3*/] = { -1065.07f, -1151.02f, 2.16f };
				vLocal_66[1 /*3*/] = { -1065.35f, -1149.36f, 2.16f };
				vLocal_66[2 /*3*/] = { -1067.13f, -1151.68f, 2.16f };
				vLocal_66[3 /*3*/] = { -1066.3f, -1149.38f, 2.16f };
				vLocal_66[4 /*3*/] = { -1066.01f, -1152.26f, 2.16f };
				fLocal_67[0] = 75.06f;
				fLocal_67[1] = 134.25f;
				fLocal_67[2] = -52.71f;
				fLocal_67[3] = -93.39f;
				fLocal_67[4] = -141.52f;
				vLocal_83 = { -1265.744f, -1057.199f, 5.410841f };
				vLocal_84 = { -1258.679f, -1049.919f, 9.443882f };
				break;
		}
		func_174(Local_43, &vLocal_85, &vLocal_86, &fLocal_87);
		iLocal_70[0] = joaat("a_f_y_hipster_02");
		iLocal_70[1] = joaat("a_m_y_hipster_02");
		iLocal_70[2] = joaat("a_m_y_hipster_02");
		iLocal_70[3] = joaat("a_f_y_hipster_02");
		iLocal_70[4] = joaat("a_m_y_hipster_02");
		iLocal_70[5] = joaat("a_m_y_hipster_02");
		iLocal_70[6] = joaat("a_m_y_hipster_02");
		if (Local_43.f_1 == 1)
		{
			cLocal_73 = "random@street_race";
			sLocal_74[0] = "_car_b_chatting_female";
			sLocal_74[1] = "_car_b_chatting_male";
			sLocal_74[2] = "_car_b_chatting_male";
			sLocal_74[3] = "_car_b_chatting_female";
			sLocal_74[4] = "_car_b_lookout";
		}
		else
		{
			cLocal_73 = "random@street_race";
			sLocal_74[0] = "_car_a_flirt_girl";
			sLocal_74[1] = "_car_a_gawker_male_a";
			sLocal_74[2] = "_car_a_gawker_male_b";
			sLocal_74[3] = "_car_b_chatting_female";
			sLocal_74[4] = "_car_b_chatting_male";
			sLocal_74[5] = "_car_b_driver";
			sLocal_74[6] = "_car_b_lookout";
			func_173(&uLocal_90, iLocal_72);
		}
		iLocal_71 = func_172(Local_43.f_1);
		iVar0 = 0;
		while (iVar0 <= (iLocal_70 - 1))
		{
			func_173(&uLocal_90, iLocal_70[iVar0]);
			iVar0++;
		}
		func_173(&uLocal_90, iLocal_71);
		func_170(&uLocal_90, cLocal_73);
		unk_0x2E989BFBA0D3CC0E(vLocal_83, vLocal_84, false, 0);
		unk_0xE537EBD7B736A4E2(vLocal_85, vLocal_86, fLocal_87, 0, false, 1);
		iLocal_47 = 1;
	}
	else if (Local_43.f_1 == 3)
	{
		switch (Local_43)
		{
			case 5:
				vLocal_59 = { 3066.63f, 650.9f, 0.17f };
				fLocal_60 = 351.81f;
				vLocal_64[0 /*3*/] = { 3073.57f, 648.09f, 0.01f };
				fLocal_65[0] = 5.72f;
				vLocal_64[1 /*3*/] = { 3071.53f, 648.79f, -0.09f };
				fLocal_65[1] = 351.33f;
				vLocal_64[2 /*3*/] = { 3068.73f, 645.53f, -0.07f };
				fLocal_65[2] = 348.18f;
				break;
			
			case 6:
				vLocal_59 = { 3462.11f, 5192.15f, -0.04f };
				fLocal_60 = 222.9f;
				vLocal_64[0 /*3*/] = { 3456.64f, 5195.91f, 0.12f };
				fLocal_65[0] = 211.54f;
				vLocal_64[1 /*3*/] = { 3453.19f, 5192.84f, -0.17f };
				fLocal_65[1] = 201.55f;
				vLocal_64[2 /*3*/] = { 3451.06f, 5189.43f, -0.3f };
				fLocal_65[2] = 221.55f;
				break;
			
			case 7:
				vLocal_59 = { 194.64f, 3621.27f, 29.91f };
				fLocal_60 = 163.95f;
				vLocal_64[0 /*3*/] = { 198.62f, 3620.46f, 29.91f };
				fLocal_65[0] = 175.4f;
				vLocal_64[1 /*3*/] = { 202.78f, 3619.69f, 29.87f };
				fLocal_65[1] = 163.69f;
				vLocal_64[2 /*3*/] = { 210.14f, 3618.88f, 29.87f };
				fLocal_65[2] = 175.31f;
				break;
			
			case 8:
				vLocal_59 = { 627.58f, -2138.06f, -0.07f };
				fLocal_60 = 180.09f;
				vLocal_64[0 /*3*/] = { 643.09f, -2146.11f, -0.09f };
				fLocal_65[0] = 143.89f;
				vLocal_64[1 /*3*/] = { 638.21f, -2145.3f, -0.1f };
				fLocal_65[1] = 172.41f;
				vLocal_64[2 /*3*/] = { 633.56f, -2143.83f, -0.04f };
				fLocal_65[2] = 191.97f;
				break;
		}
		iLocal_71 = joaat("seashark");
		func_173(&uLocal_90, iLocal_71);
		func_173(&uLocal_90, joaat("a_m_y_jetski_01"));
	}
}

void func_170(var uParam0, char* sParam1)
{
	func_171(uParam0, 1, -1, sParam1, 0);
}

void func_171(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0x3CAC2741CC1A631F(sParam3, "NULL"))
					{
						if (unk_0x3CAC2741CC1A631F(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x2BCFB39E86340DAA(uParam0[iVar0 /*18*/], iParam1);
			unk_0x2BCFB39E86340DAA(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_172(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
			iVar0 = joaat("bati");
			break;
		
		case 2:
			iVar0 = joaat("ninef");
			break;
		
		case 3:
			iVar0 = joaat("seashark");
			break;
	}
	return iVar0;
}

void func_173(var uParam0, int iParam1)
{
	func_171(uParam0, 0, iParam1, "NULL", 0);
}

void func_174(int iParam0, var uParam1, var uParam2, float fParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 311.1262f, -1896.261f, 20.68329f };
			*uParam2 = { -295.0653f, -1405.53f, 35.3146f };
			*fParam3 = 300f;
			break;
		
		case 1:
			*uParam1 = { 273.185f, 335.2969f, 105.5704f };
			*uParam2 = { 412.2877f, 299.2304f, 101.0724f };
			*fParam3 = 20f;
			break;
		
		case 2:
			*uParam1 = { -823.7157f, -2588f, 13.7691f };
			*uParam2 = { -801.3356f, -2464.007f, 12.42913f };
			*fParam3 = 30f;
			break;
		
		case 3:
			*uParam1 = { 791.8257f, -1423.863f, 24.17954f };
			*uParam2 = { 783.167f, -1015.648f, 50.24134f };
			*fParam3 = 200f;
			break;
		
		case 4:
			*uParam1 = { -1084.03f, -1165.724f, 0.150211f };
			*uParam2 = { -1029.213f, -1134.581f, 2.174534f };
			*fParam3 = 10f;
			break;
	}
}

int func_175()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (func_59(9))
	{
		return 0;
	}
	if (func_44(6) || func_44(7))
	{
		return 0;
	}
	if (Global_56175)
	{
		return 0;
	}
	if (func_198())
	{
		return 0;
	}
	if (Local_43.f_1 != 3 && func_49() != 1)
	{
		return 0;
	}
	if (unk_0x9B9A3A10827A2EA0())
	{
		return 0;
	}
	if (func_60(unk_0xA19140A5C42D8715()) && unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		iVar0 = unk_0xC409B91AC4749F88();
		if (((func_14(iVar0) && unk_0xB10F7FE89663CB5B(unk_0xA19140A5C42D8715(), iVar0)) && !func_197(unk_0xA19140A5C42D8715(), iVar0, -1)) && unk_0x8F474E419F56E48D(iVar0) != joaat("taxi"))
		{
			return 0;
		}
	}
	switch (Local_43)
	{
		case 0:
			if (Global_106044[0])
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_106044[1])
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_106044[2])
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_106044[3])
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_106044[4])
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_106034[0])
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_106034[1])
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_106034[2])
			{
				return 0;
			}
			break;
		
		case 8:
			if (Global_106034[3])
			{
				return 0;
			}
			break;
	}
	if (!func_161())
	{
		iVar1 = 0;
		while (iVar1 <= (iLocal_70 - 1))
		{
			if (func_60(iLocal_56[iVar1]))
			{
				unk_0x2F89329397A277BC(&iVar2);
				unk_0x4AABC2A9FCCE3C8F(0, iVar1 * 100);
				unk_0x1CBE3F8ED90509B2(0, 1193033728, 0);
				unk_0x301F42EEE3C40328(iVar2);
				unk_0xE1072FA2FECBAD96(iLocal_56[iVar1], iVar2);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= (iLocal_69 - 1))
		{
			if (func_60(iLocal_69[iVar1]))
			{
				unk_0x2F89329397A277BC(&iVar2);
				unk_0x4AABC2A9FCCE3C8F(0, iVar1 * 110);
				if (func_14(iLocal_68[iVar1]) && unk_0xE0FD180CD24C0B67(iLocal_69[iVar1], iLocal_68[iVar1], 0))
				{
					unk_0x731722E696597BD1(0, iLocal_68[iVar1], 30f, 786597);
				}
				else
				{
					unk_0x1CBE3F8ED90509B2(0, 1193033728, 0);
				}
				unk_0x301F42EEE3C40328(iVar2);
				unk_0xE1072FA2FECBAD96(iLocal_69[iVar1], iVar2);
			}
			iVar1++;
		}
		if (func_60(iLocal_58))
		{
			if (func_14(iLocal_57) && unk_0xE0FD180CD24C0B67(iLocal_58, iLocal_57, 0))
			{
				unk_0x731722E696597BD1(iLocal_58, iLocal_57, 30f, 786597);
			}
			else
			{
				unk_0x1CBE3F8ED90509B2(iLocal_58, 1193033728, 0);
			}
		}
		return 0;
	}
	if (func_177())
	{
		iVar4 = 0;
		while (iVar4 <= (iLocal_70 - 1))
		{
			if (func_60(iLocal_56[iVar4]))
			{
				unk_0x2F89329397A277BC(&iVar3);
				unk_0x4AABC2A9FCCE3C8F(0, iVar4 * 50);
				unk_0x33B5487515BD13D5(0, unk_0xA19140A5C42D8715(), 500f, -1, 0, 0);
				unk_0x301F42EEE3C40328(iVar3);
				if ((iVar4 % 2) == 0)
				{
					func_176(iLocal_56[iVar4], 1);
				}
				unk_0xE1072FA2FECBAD96(iLocal_56[iVar4], iVar3);
			}
			iVar4++;
		}
		iVar4 = 0;
		while (iVar4 <= (iLocal_69 - 1))
		{
			if (func_14(iLocal_68[iVar4]) && Local_43.f_1 == 3)
			{
				unk_0x5D7FCE658C4E2D8A(iLocal_68[iVar4], false);
			}
			if (func_60(iLocal_69[iVar4]))
			{
				unk_0x2F89329397A277BC(&iVar3);
				unk_0x4AABC2A9FCCE3C8F(0, iVar4 * 60);
				if (func_14(iLocal_68[iVar4]) && unk_0xE0FD180CD24C0B67(iLocal_69[iVar4], iLocal_68[iVar4], 0))
				{
					unk_0x731722E696597BD1(0, iLocal_68[iVar4], 50f, 786468);
				}
				else
				{
					unk_0x33B5487515BD13D5(0, unk_0xA19140A5C42D8715(), 500f, -1, 0, 0);
				}
				unk_0x301F42EEE3C40328(iVar3);
				unk_0xE1072FA2FECBAD96(iLocal_69[iVar4], iVar3);
				if ((iVar4 % 2) == 0)
				{
					func_176(iLocal_69[iVar4], 1);
				}
			}
			iVar4++;
		}
		if (func_14(iLocal_57) && Local_43.f_1 == 3)
		{
			unk_0x5D7FCE658C4E2D8A(iLocal_57, false);
		}
		if (func_60(iLocal_58))
		{
			if (func_14(iLocal_57) && unk_0xE0FD180CD24C0B67(iLocal_58, iLocal_57, 0))
			{
				unk_0x731722E696597BD1(iLocal_58, iLocal_57, 50f, 786468);
			}
			else
			{
				unk_0x33B5487515BD13D5(iLocal_58, unk_0xA19140A5C42D8715(), 500f, -1, 0, 0);
			}
		}
		switch (Local_43)
		{
			case 0:
				Global_106044[0] = 1;
				Global_106050[0] = unk_0xFD34717937104F1C();
				break;
			
			case 1:
				Global_106044[1] = 1;
				Global_106050[1] = unk_0xFD34717937104F1C();
				break;
			
			case 2:
				Global_106044[2] = 1;
				Global_106050[2] = unk_0xFD34717937104F1C();
				break;
			
			case 3:
				Global_106044[3] = 1;
				Global_106050[3] = unk_0xFD34717937104F1C();
				break;
			
			case 4:
				Global_106044[4] = 1;
				Global_106050[4] = unk_0xFD34717937104F1C();
				break;
			
			case 5:
				Global_106034[0] = 1;
				Global_106039[0] = unk_0xFD34717937104F1C();
				break;
			
			case 6:
				Global_106034[1] = 1;
				Global_106039[1] = unk_0xFD34717937104F1C();
				break;
			
			case 7:
				Global_106034[2] = 1;
				Global_106039[2] = unk_0xFD34717937104F1C();
				break;
			
			case 8:
				Global_106034[3] = 1;
				Global_106039[3] = unk_0xFD34717937104F1C();
				break;
		}
		return 0;
	}
	return 1;
}

void func_176(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (func_60(iParam0))
	{
		iVar1 = 2;
		if (bParam1)
		{
			iVar1 = 3;
		}
		iVar2 = unk_0x22C775856F4633CA(0, iVar1);
		if (iVar2 == 0)
		{
			sVar0 = "SCREAM_PANIC";
		}
		else if (iVar2 == 1)
		{
			sVar0 = "SCREAM_TERROR";
		}
		else
		{
			sVar0 = "SUPER_HIGH_FALL";
		}
		if (unk_0x18F3A53F9DAFB8C9(iParam0))
		{
			func_135(iParam0, sVar0, "WAVELOAD_PAIN_MALE", 24);
		}
		else
		{
			func_135(iParam0, sVar0, "WAVELOAD_PAIN_FEMALE", 24);
		}
	}
}

int func_177()
{
	int iVar0;
	
	if (unk_0x122A8778D4027A82(unk_0xD4E735F4B6A956AC(), 0))
	{
		return 1;
	}
	if (Local_43.f_1 == 3)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_69 - 1))
		{
			if (unk_0xDC5D81351D6A4DDB(iLocal_69[iVar0]))
			{
				if (unk_0x4915F4759304D5CF(iLocal_69[iVar0]))
				{
					return 1;
				}
				else if (func_178(iLocal_69[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0) || unk_0x97B2B0016AD3C7C6(iLocal_69[iVar0]))
				{
					return 1;
				}
			}
			if (unk_0xDC5D81351D6A4DDB(iLocal_68[iVar0]))
			{
				if (unk_0x7112137033807390(iLocal_68[iVar0], 0))
				{
					return 1;
				}
				else if (unk_0xDEAEC99031DCB92A(iLocal_68[iVar0], unk_0xA19140A5C42D8715(), 1) && unk_0x24A1A7BF4ED94B71(iLocal_68[iVar0]) < 900)
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0xDC5D81351D6A4DDB(iLocal_57))
		{
			if (unk_0x7112137033807390(iLocal_57, 0))
			{
				return 1;
			}
			else if (unk_0xDEAEC99031DCB92A(iLocal_57, unk_0xA19140A5C42D8715(), 1) && unk_0x24A1A7BF4ED94B71(iLocal_57) < 900)
			{
				return 1;
			}
		}
		return 0;
	}
	if (func_160(unk_0xA19140A5C42D8715(), vLocal_44, 50f) && unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715()))
	{
		return 1;
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_58))
	{
		if (unk_0x4915F4759304D5CF(iLocal_58))
		{
			return 1;
		}
		else if (func_178(iLocal_58, 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			return 1;
		}
		else if (unk_0x97B2B0016AD3C7C6(iLocal_58))
		{
			unk_0x1F4E5EFBFE503FB3(iLocal_58, false);
			return 1;
		}
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_57))
	{
		if (unk_0x7112137033807390(iLocal_57, 0))
		{
			return 1;
		}
		else if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_57, 1) || unk_0xDEAEC99031DCB92A(iLocal_57, unk_0xA19140A5C42D8715(), 1))
		{
			return 1;
		}
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_61))
	{
		if (unk_0x7112137033807390(iLocal_61, 0))
		{
			return 1;
		}
		else if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_61, 1) || unk_0xDEAEC99031DCB92A(iLocal_61, unk_0xA19140A5C42D8715(), 1))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_70 - 1))
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_56[iVar0]))
		{
			if (unk_0x4915F4759304D5CF(iLocal_56[iVar0]))
			{
				return 1;
			}
			else if (func_178(iLocal_56[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_178(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	vector3 vVar0;
	
	if (func_15(unk_0xA19140A5C42D8715()) && func_15(iParam0))
	{
		if (unk_0xDEAEC99031DCB92A(iParam0, unk_0xA19140A5C42D8715(), 1))
		{
			return 1;
		}
		if (func_192(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x852B8F739A2072BE(unk_0xA19140A5C42D8715(), 6))
		{
			if (unk_0x6625F609B391348E(unk_0xA19140A5C42D8715()))
			{
				vVar0 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) - unk_0xE2BBD32891C18569(iParam0, true) };
				if ((((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) + (vVar0.z * vVar0.z)) <= 5f)
				{
					return func_191(unk_0xA19140A5C42D8715(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_179(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_179(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_15(unk_0xA19140A5C42D8715()) && func_15(iParam0))
	{
		if (func_190(iParam0) || unk_0x7591AFB11E7EDDA0(unk_0xD4E735F4B6A956AC(), iParam0))
		{
			if (unk_0x852B8F739A2072BE(unk_0xA19140A5C42D8715(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_180(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_180(int iParam0, float fParam1)
{
	return func_181(iParam0, unk_0xA19140A5C42D8715(), fParam1, 1, 250, 7);
}

bool func_181(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = func_189(iParam0, iParam1);
	if (!func_15(iParam0) || !func_15(iParam1))
	{
		if (iVar2 != -1)
		{
			func_188(&(Local_40[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_185(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_184();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_40[iVar2 /*4*/].f_1 = iParam0;
		Local_40[iVar2 /*4*/].f_2 = iParam1;
	}
	vVar1 = { unk_0x505186370955851F(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_182(&(Local_40[iVar2 /*4*/]), vVar1, iParam1, &(Local_40[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0xFD34717937104F1C() - Local_40[iVar2 /*4*/].f_3) < iParam4);
}

int func_182(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_15(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_183(iParam2, iParam5) };
		*uParam0 = unk_0x931DC90E31FA1705(vParam1, vVar1 + vVar1 - vParam1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam4, 7);
		return 0;
	}
	iVar4 = unk_0x7C00B4755E048785(*uParam0, &uVar0, &vVar1, &uVar2, &iVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0x281590680327CDEA(iVar3))
	{
		func_15(iVar3);
		if (unk_0xA2EA4BA455370F3C(iVar3) == iParam2)
		{
			if (bLocal_41)
			{
				unk_0xB595A00F459A5B57(vParam1, unk_0xE2BBD32891C18569(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = unk_0xFD34717937104F1C();
			return 1;
		}
		return 0;
	}
	if (unk_0xFAC06EE780B57279(iVar3))
	{
		func_15(iVar3);
		if (unk_0x5D7DFE2058701942(iParam2, 0))
		{
			if (unk_0xB86D86A5DBBC79F0(iVar3) == unk_0xCAEB6CE71A2C7212(iParam2, 0))
			{
				if (bLocal_41)
				{
					unk_0xB595A00F459A5B57(vParam1, unk_0xE2BBD32891C18569(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = unk_0xFD34717937104F1C();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_183(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x22C775856F4633CA(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xE2BBD32891C18569(iParam0, true);
	}
	else if (iParam1 == 1)
	{
		return unk_0x505186370955851F(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x505186370955851F(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x505186370955851F(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x505186370955851F(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x505186370955851F(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x505186370955851F(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xE2BBD32891C18569(iParam0, true);
}

int func_184()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_40)
	{
		if ((Local_40[iVar0 /*4*/] == 0 && Local_40[iVar0 /*4*/].f_1 == 0) && Local_40[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_185(int iParam0, int iParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_187(unk_0xE2BBD32891C18569(iParam1, true) - unk_0xE2BBD32891C18569(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { unk_0xFA0A034A8C86C35E(iParam0) };
	}
	else
	{
		vVar1 = { func_187(unk_0x505186370955851F(iParam0, 31086, 0f, 5f, 0f) - unk_0x505186370955851F(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_186(vVar1, vVar0);
	if (fVar2 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_186(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_187(vector3 vParam0)
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

void func_188(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_189(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_40)
	{
		if (Local_40[iVar0 /*4*/].f_1 == iParam0 && Local_40[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_190(int iParam0)
{
	if (unk_0x669ABFB25D991447(unk_0xD4E735F4B6A956AC(), iParam0) && unk_0x852B8F739A2072BE(unk_0xA19140A5C42D8715(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_191(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0xFA0A034A8C86C35E(iParam0) };
	vVar1 = { unk_0xE2BBD32891C18569(iParam1, true) - unk_0xE2BBD32891C18569(iParam0, true) };
	return (((vVar0.x * vVar1.x) + (vVar0.y * vVar1.y)) / vdist(vVar1, 0f, 0f, 0f)) > cos(fParam2);
}

int func_192(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_15(unk_0xA19140A5C42D8715()) && func_15(iParam0))
	{
		unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_196(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_193(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x07F5A0B42D3F3491(unk_0xA19140A5C42D8715()))
			{
				if (unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715()))
				{
					if (unk_0x9809FE4B550B1EFE(unk_0xE2BBD32891C18569(iParam0, true), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_196(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_193(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_193(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0xE2BBD32891C18569(iParam0, true) };
	vVar1 = { vVar0 };
	vVar0.x = (vVar0.x - fParam1);
	vVar0.y = (vVar0.y - fParam1);
	vVar0.z = (vVar0.z - fParam1);
	vVar1.x = (vVar1.x + fParam1);
	vVar1.y = (vVar1.y + fParam1);
	vVar1.z = (vVar1.z + fParam1);
	if (bParam2)
	{
		if (((unk_0xBC45A12CC9A56DD8(unk_0xE2BBD32891C18569(iParam0, true), joaat("weapon_grenade"), fParam1, 1) || unk_0xBC45A12CC9A56DD8(unk_0xE2BBD32891C18569(iParam0, true), joaat("weapon_molotov"), fParam1, 1)) || unk_0xBC45A12CC9A56DD8(unk_0xE2BBD32891C18569(iParam0, true), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0xBC45A12CC9A56DD8(unk_0xE2BBD32891C18569(iParam0, true), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_194(iParam0, fParam1))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_194(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x0AF5F990243ADDFB(vVar0, vVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_194(int iParam0, float fParam1)
{
	var uVar0;
	vector3 vVar1;
	
	if ((((unk_0xA956D9414441064E(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) || unk_0xA956D9414441064E(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0)) || unk_0xA956D9414441064E(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0)) || unk_0xA956D9414441064E(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0)) || unk_0xA956D9414441064E(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0))
	{
		if (func_195(iParam0, vVar1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_195(int iParam0, vector3 vParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_187(vParam1 - unk_0xE2BBD32891C18569(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { unk_0xFA0A034A8C86C35E(iParam0) };
	}
	else
	{
		vVar1 = { func_187(unk_0x505186370955851F(iParam0, 31086, 0f, 5f, 0f) - unk_0x505186370955851F(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_186(vVar1, vVar0);
	if (fVar2 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_196(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715()))
		{
			if (unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x9809FE4B550B1EFE(unk_0xE2BBD32891C18569(iParam0, true), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_197(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x7112137033807390(iParam0, 0) && !unk_0x7112137033807390(iParam1, 0))
	{
		if (unk_0xB10F7FE89663CB5B(iParam0, iParam1))
		{
			if (unk_0xB0D49A1F9F054602(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_198()
{
	switch (Local_43)
	{
		case 5:
			return unk_0x05EFB6A616B6FADE(Global_106070.f_24948.f_2, 0);
			break;
		
		case 6:
			return unk_0x05EFB6A616B6FADE(Global_106070.f_24948.f_2, 1);
			break;
		
		case 7:
			return unk_0x05EFB6A616B6FADE(Global_106070.f_24948.f_2, 2);
			break;
		
		case 8:
			return unk_0x05EFB6A616B6FADE(Global_106070.f_24948.f_2, 3);
			break;
		
		case 0:
			return unk_0x05EFB6A616B6FADE(Global_106070.f_24951.f_3, 0);
			break;
		
		case 1:
			return unk_0x05EFB6A616B6FADE(Global_106070.f_24951.f_3, 1);
			break;
		
		case 2:
			return unk_0x05EFB6A616B6FADE(Global_106070.f_24951.f_3, 2);
			break;
		
		case 3:
			return unk_0x05EFB6A616B6FADE(Global_106070.f_24951.f_3, 3);
			break;
		
		case 4:
			return unk_0x05EFB6A616B6FADE(Global_106070.f_24951.f_3, 4);
			break;
	}
	return 0;
}

void func_199()
{
	iLocal_42 = 0;
	iLocal_45 = 0;
	bLocal_52 = false;
	bLocal_53 = false;
	iLocal_49 = 0;
	iLocal_50 = 0;
	iLocal_51 = 0;
	func_201(1);
	unk_0x66E6A13BAFFFB63C("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 0);
	unk_0x66E6A13BAFFFB63C("WORLD_VEHICLE_PARK_PARALLEL", 0);
	if (Local_43 == 1)
	{
		iLocal_89 = func_200(374.0083f, 279.5919f, 102.3306f, 40f);
		unk_0x01AF8CB960828C2B(374.0083f, 279.5919f, 102.3306f, 25f, 0, 0, 0, 0, false, 0);
	}
	if (Local_43.f_1 == 1 || Local_43.f_1 == 2)
	{
		iLocal_88 = func_200(vLocal_44, 60f);
	}
}

int func_200(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	
	vVar0 = { (fParam1 / 2f), (fParam1 / 2f), (fParam1 / 2f) };
	return unk_0xF66A39BBE7B3C278(vParam0 - vVar0, vParam0 + vVar0, 0, 1, 1, 1);
}

void func_201(bool bParam0)
{
	if (bParam0)
	{
		switch (Local_43)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				func_173(&uLocal_90, joaat("banshee"));
				func_173(&uLocal_90, joaat("feltzer2"));
				func_173(&uLocal_90, joaat("sentinel"));
				break;
			
			case 4:
				func_173(&uLocal_90, joaat("bati"));
				func_173(&uLocal_90, joaat("ruffian"));
				break;
			
			case 5:
			case 6:
			case 7:
			case 8:
				func_173(&uLocal_90, joaat("seashark"));
				break;
		}
	}
	else
	{
		func_202(&uLocal_90);
	}
}

void func_202(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*18*/], 30))
		{
			func_203(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_203(var uParam0)
{
	func_204(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_204(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x05EFB6A616B6FADE(iParam0, 30))
	{
		switch (func_165(iParam0))
		{
			case 0:
				unk_0xA5DE74AE39867B03(iParam2);
				break;
			
			case 1:
				unk_0x4DC885EA8D6AF7FC(sParam1);
				break;
			
			case 2:
				unk_0x5F781B32FAE8FB91(sParam1);
				break;
			
			case 3:
				unk_0x91DE928AD81C6F57(sParam1);
				break;
			
			case 4:
				unk_0xD2BB05DE6C584878(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xDC253F6738C56280(sParam1);
				break;
			
			case 6:
				unk_0x2220B21A4CC075AC();
				break;
			
			case 7:
				unk_0x932A1FC570019F52(iParam2);
				break;
			
			case 8:
				unk_0x93DA13E8C75A3B00(iParam2, unk_0x05EFB6A616B6FADE(iParam0, 26));
				break;
			
			case 9:
				unk_0xCF2B4C5AF45D129E();
				break;
			
			default:
				break;
		}
	}
}

int func_205(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x05EFB6A616B6FADE(Global_106070.f_24951.f_1, 0);
			break;
		
		case 1:
			return unk_0x05EFB6A616B6FADE(Global_106070.f_24951.f_1, 1);
			break;
		
		case 2:
			return unk_0x05EFB6A616B6FADE(Global_106070.f_24951.f_1, 2);
			break;
		
		case 3:
			return unk_0x05EFB6A616B6FADE(Global_106070.f_24951.f_1, 3);
			break;
		
		case 4:
			return unk_0x05EFB6A616B6FADE(Global_106070.f_24951.f_1, 4);
			break;
	}
	return 0;
}

bool func_206(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0x05EFB6A616B6FADE(Global_106070.f_9057.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

void func_207()
{
	if (func_208(func_209(86, 0), vLocal_44, 1f, 0))
	{
		Local_43 = 0;
		Local_43.f_1 = 2;
		Local_43.f_3 = 100;
		Local_43.f_4 = 20;
	}
	else if (func_208(func_209(87, 0), vLocal_44, 1f, 0))
	{
		Local_43 = 1;
		Local_43.f_1 = 2;
		Local_43.f_3 = 500;
		Local_43.f_4 = 18;
	}
	else if (func_208(func_209(88, 0), vLocal_44, 1f, 0))
	{
		Local_43 = 2;
		Local_43.f_1 = 2;
		Local_43.f_3 = 1000;
		Local_43.f_4 = 2;
	}
	else if (func_208(func_209(89, 0), vLocal_44, 1f, 0))
	{
		Local_43 = 3;
		Local_43.f_1 = 2;
		Local_43.f_3 = 1250;
		Local_43.f_4 = 4;
	}
	else if (func_208(func_209(90, 0), vLocal_44, 1f, 0))
	{
		Local_43 = 4;
		Local_43.f_1 = 1;
		Local_43.f_3 = 1500;
		Local_43.f_4 = 5;
	}
	else if (func_208(func_209(82, 0), vLocal_44, 1f, 0))
	{
		Local_43 = 5;
		Local_43.f_1 = 3;
		Local_43.f_3 = 0;
		Local_43.f_4 = 16;
	}
	else if (func_208(func_209(83, 0), vLocal_44, 1f, 0))
	{
		Local_43 = 6;
		Local_43.f_1 = 3;
		Local_43.f_3 = 0;
		Local_43.f_4 = 13;
	}
	else if (func_208(func_209(84, 0), vLocal_44, 1f, 0))
	{
		Local_43 = 7;
		Local_43.f_1 = 3;
		Local_43.f_3 = 0;
		Local_43.f_4 = 15;
		Local_43.f_5 = 1;
	}
	else if (func_208(func_209(85, 0), vLocal_44, 1f, 0))
	{
		Local_43 = 8;
		Local_43.f_1 = 3;
		Local_43.f_4 = 24;
		Local_43.f_3 = 0;
		Local_43.f_5 = 1;
	}
	else
	{
		func_210(0);
	}
}

int func_208(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

Vector3 func_209(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_25834[iVar0 /*23*/][iParam1 /*3*/];
}

void func_210(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_46)
	{
		unk_0xEB60EF2E9051E817(0);
		iLocal_46 = 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_15(iLocal_56[iVar0]))
		{
			unk_0x9568B1B58F78FF36(iLocal_56[iVar0]);
			unk_0x1CBE3F8ED90509B2(iLocal_56[iVar0], 1193033728, 0);
			unk_0x1F4E5EFBFE503FB3(iLocal_56[iVar0], false);
			unk_0x7E4E83D33161D01A(&(iLocal_56[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_15(iLocal_69[iVar0]))
		{
			if (func_15(iLocal_68[iVar0]))
			{
				unk_0x9568B1B58F78FF36(iLocal_69[iVar0]);
				if (unk_0x71852D4EBD08275F(unk_0x8F474E419F56E48D(iLocal_68[iVar0])))
				{
					unk_0x5D7FCE658C4E2D8A(iLocal_68[iVar0], false);
				}
				unk_0x731722E696597BD1(iLocal_69[iVar0], iLocal_68[iVar0], 20f, 786599);
				unk_0xD738221C247C8B71(iLocal_69[iVar0], true);
				unk_0x1F4E5EFBFE503FB3(iLocal_69[iVar0], false);
				unk_0x7E4E83D33161D01A(&(iLocal_69[iVar0]));
				unk_0x792676988A48387F(&(iLocal_68[iVar0]));
			}
		}
		iVar0++;
	}
	if (func_15(iLocal_58))
	{
		if (func_15(iLocal_57))
		{
			unk_0x9568B1B58F78FF36(iLocal_58);
			unk_0x3B7A32E04BBE59A5(iLocal_58, 1, true);
			unk_0x731722E696597BD1(iLocal_58, iLocal_57, 15f, 786599);
			unk_0xD738221C247C8B71(iLocal_58, true);
			unk_0x1F4E5EFBFE503FB3(iLocal_58, false);
			unk_0x7E4E83D33161D01A(&iLocal_58);
			unk_0x792676988A48387F(&iLocal_57);
		}
	}
	if (func_15(iLocal_61))
	{
		unk_0x792676988A48387F(&iLocal_61);
	}
	switch (Local_43)
	{
		case 5:
			func_213(82, 0, 0);
			unk_0x2BCFB39E86340DAA(&(Global_106070.f_24948.f_2), 0);
			break;
		
		case 6:
			func_213(83, 0, 0);
			unk_0x2BCFB39E86340DAA(&(Global_106070.f_24948.f_2), 1);
			break;
		
		case 7:
			func_213(84, 0, 0);
			unk_0x2BCFB39E86340DAA(&(Global_106070.f_24948.f_2), 2);
			break;
		
		case 8:
			func_213(85, 0, 0);
			unk_0x2BCFB39E86340DAA(&(Global_106070.f_24948.f_2), 3);
			break;
		
		case 0:
			func_213(86, 0, 0);
			unk_0x2BCFB39E86340DAA(&(Global_106070.f_24951.f_3), 0);
			break;
		
		case 1:
			func_213(87, 0, 0);
			unk_0x2BCFB39E86340DAA(&(Global_106070.f_24951.f_3), 1);
			break;
		
		case 2:
			func_213(88, 0, 0);
			unk_0x2BCFB39E86340DAA(&(Global_106070.f_24951.f_3), 2);
			break;
		
		case 3:
			func_213(89, 0, 0);
			unk_0x2BCFB39E86340DAA(&(Global_106070.f_24951.f_3), 3);
			break;
		
		case 4:
			func_213(90, 0, 0);
			unk_0x2BCFB39E86340DAA(&(Global_106070.f_24951.f_3), 4);
			break;
	}
	if (iLocal_45)
	{
		unk_0x135C61E339DABBAC(1);
	}
	unk_0xC60B72CAF488C594(unk_0x13B011674250FA98(10), 0);
	if (iLocal_54)
	{
		unk_0x2A22FF5D4ECD503A(1);
	}
	if (iLocal_76 && !bParam0)
	{
		iVar1 = unk_0xA6580F898F4E801C();
		if (unk_0x58E3CCF930D23BD5(iVar1))
		{
			if (!unk_0x02B9944258987761(iVar1))
			{
				unk_0x962CF6A9EA6FDCAC(iVar1, true, 0);
			}
		}
	}
	if (!bParam0)
	{
		func_201(0);
	}
	if (iLocal_47)
	{
		unk_0x8C15CE28B371C038(vLocal_83, vLocal_84, 1);
		unk_0xE724181C8BE2BA29(vLocal_85, vLocal_86, fLocal_87, 1);
		iLocal_47 = 0;
	}
	unk_0x66E6A13BAFFFB63C("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 1);
	unk_0x66E6A13BAFFFB63C("WORLD_VEHICLE_PARK_PARALLEL", 1);
	if (Local_43 == 1)
	{
		unk_0xE70AC26DFC59863A(iLocal_89, 0);
	}
	if (Local_43.f_1 == 1 || Local_43.f_1 == 2)
	{
		unk_0xE70AC26DFC59863A(iLocal_88, 0);
	}
	else
	{
		unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 170, false);
	}
	func_211(&uLocal_90, 0);
	unk_0x8F1A9FE6D91AAFEB();
}

void func_211(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_202(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_212(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_212(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_213(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0x05EFB6A616B6FADE(Global_25834[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x05EFB6A616B6FADE(Global_25834[iVar0 /*23*/].f_11, 0))
	{
		unk_0x2BCFB39E86340DAA(&(Global_25834[iVar0 /*23*/].f_11), 18);
		if (Global_25831 == 1)
		{
			Global_25832 = 1;
		}
		Global_25831 = 1;
	}
	if (bParam1)
	{
		unk_0x2BCFB39E86340DAA(&(Global_25834[iVar0 /*23*/].f_11), 0);
		unk_0x2BCFB39E86340DAA(&(Global_25834[iVar0 /*23*/].f_11), 15);
		unk_0x2BCFB39E86340DAA(&(Global_25834[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_25834[iVar0 /*23*/].f_11), 0);
		unk_0xFA57C719261AA55D(&(Global_25834[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x05EFB6A616B6FADE(Global_25834[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xCE3CB618AFE55EFB(Global_25834[iVar0 /*23*/].f_19))
		{
			unk_0xB0A6D0CDCFC41141(1);
			unk_0xE1623437A3194332(&(Global_25834[iVar0 /*23*/].f_19));
			unk_0xB0A6D0CDCFC41141(0);
		}
	}
}

