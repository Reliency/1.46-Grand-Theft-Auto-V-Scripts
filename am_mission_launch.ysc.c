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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	struct<22> Local_103 = { 0, 0, 0, -1, 0, -1, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	struct<14> Local_107 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_108[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	struct<2> Local_123 = { 0, 0 } ;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 16;
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
	var uLocal_237 = 0;
	var uLocal_238 = 0;
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
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	char* sLocal_295 = NULL;
	struct<21> Local_296 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	func_378(ScriptParam_296);
	while (true)
	{
		func_377();
		if (func_367() || !func_366(unk_0xD4E735F4B6A956AC(), 0, 1))
		{
			func_364();
		}
		switch (func_363(unk_0xD60943E3BE730BF0()))
		{
			case 0:
				if (func_362() == 2)
				{
					vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_1 = 2;
				}
				else if (func_362() == 6)
				{
					vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_1 = 5;
				}
				break;
			
			case 2:
				if (func_362() == 2)
				{
					func_355();
					func_52();
				}
				else if (func_362() == 6)
				{
					vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_1 = 5;
				}
				if (((func_49(unk_0xD4E735F4B6A956AC(), 1) || func_46(unk_0xD4E735F4B6A956AC())) || unk_0x05EFB6A616B6FADE(iLocal_111, 8)) || unk_0x05EFB6A616B6FADE(iLocal_111, 16))
				{
					vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_1 = 6;
				}
				break;
			
			case 5:
				func_45(&(Local_103.f_19));
				if (func_44(&(Local_103.f_19)))
				{
					vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_1 = 6;
				}
				break;
			
			case 3:
				vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_1 = 6;
			
			case 6:
				func_364();
				break;
		}
		if (unk_0x45F99485D7E1C29A())
		{
			switch (func_362())
			{
				case 0:
					func_43(&(Local_103.f_17), 0, 0);
					Local_103.f_1 = 2;
					break;
				
				case 2:
					func_39();
					func_37();
					func_3();
					if (func_1())
					{
						Local_103.f_1 = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

bool func_2()
{
	return unk_0x05EFB6A616B6FADE(Local_103, 6);
}

void func_3()
{
	if (unk_0x45F99485D7E1C29A())
	{
		switch (Local_103.f_2)
		{
			case 0:
				if (!unk_0x05EFB6A616B6FADE(Local_103, 10))
				{
					if (func_36(&(Local_103.f_17), 300000, 0))
					{
						unk_0x2BCFB39E86340DAA(&Local_103, 10);
					}
				}
				if (!unk_0x05EFB6A616B6FADE(Local_103, 10))
				{
					if (unk_0x05EFB6A616B6FADE(Local_103, 0))
					{
						Local_103.f_5 = func_35();
						Local_103.f_2 = 1;
						Local_103.f_4 = 0;
					}
				}
				break;
			
			case 1:
				if (func_6())
				{
					unk_0x2BCFB39E86340DAA(&Local_103, 3);
					unk_0xFA57C719261AA55D(&Local_103, 13);
					func_43(&(Local_103.f_21), 0, 0);
					Local_103.f_2 = 2;
				}
				break;
			
			case 2:
				if (unk_0x05EFB6A616B6FADE(Local_103, 4))
				{
					func_4(Local_103.f_5);
					Local_103.f_2 = 7;
				}
				break;
			
			case 7:
				func_4(Local_103.f_5);
				break;
			}
	}
}

void func_4(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_5(&(Local_103.f_9[0]));
			func_5(&(Local_103.f_12[0]));
			break;
	}
}

void func_5(var uParam0)
{
	int iVar0;
	
	if (unk_0xAABBF7FA3E338B30(*uParam0))
	{
		iVar0 = unk_0x1C3E3FC5D339FC8C(*uParam0);
		unk_0x69C8D2CAA0701F42(&iVar0);
	}
}

int func_6()
{
	if (Local_103.f_5 == 0)
	{
		if (!unk_0x05EFB6A616B6FADE(Local_103, 1))
		{
			iLocal_119 = 0;
			iLocal_120 = unk_0x22C775856F4633CA(0, 5);
			iLocal_106 = 0;
			Local_103.f_3 = -1;
			Local_103.f_4 = 0;
			unk_0x2BCFB39E86340DAA(&Local_103, 1);
		}
		if (!unk_0x05EFB6A616B6FADE(Local_103, 2))
		{
			if (func_34())
			{
				unk_0x2BCFB39E86340DAA(&Local_103, 2);
			}
		}
		else if (func_7())
		{
			return 1;
		}
	}
	return 0;
}

int func_7()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	iVar0 = func_33();
	iVar1 = func_32();
	if (!unk_0xAABBF7FA3E338B30(Local_103.f_12[0]))
	{
		if (Local_103.f_15 == 0)
		{
			unk_0xA721D9ED3827732A(1);
			Local_103.f_15 = 1;
		}
		if (!unk_0x05EFB6A616B6FADE(Local_103, 13))
		{
			if (unk_0xA495A83E4287FE76(1))
			{
				if (unk_0x94D82D856BD4DE54(1))
				{
					if (func_31(1, 1, 1))
					{
						if (func_25(1, 1, 1))
						{
							unk_0x2BCFB39E86340DAA(&Local_103, 13);
						}
					}
				}
			}
		}
		if (unk_0x05EFB6A616B6FADE(Local_103, 13))
		{
			if (func_24(iVar1))
			{
				if (func_24(iVar0))
				{
					if (func_12(&vVar2, &fVar3))
					{
						if (func_11(&(Local_103.f_12[0]), iVar1, vVar2, fVar3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							unk_0x83055D7E96024509(unk_0xBEA1D935EBAA95F3(Local_103.f_12[0]), 1);
							if (unk_0xDE26AC7E7C308E75("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0x6D61CED849FB898E(unk_0xBEA1D935EBAA95F3(Local_103.f_12[0]), "Not_Allow_As_Saved_Veh", 1);
							}
							Local_103.f_15 = 1;
						}
					}
				}
			}
		}
	}
	if (unk_0xAABBF7FA3E338B30(Local_103.f_12[0]))
	{
		if (!unk_0xAABBF7FA3E338B30(Local_103.f_9[0]))
		{
			if (Local_103.f_16 == 0)
			{
				unk_0x7F2854D39965C275(1);
				Local_103.f_16 = 1;
			}
			if (unk_0x94D82D856BD4DE54(1))
			{
				if (func_24(iVar0))
				{
					if (func_9(Local_103.f_12[0]))
					{
						if (unk_0xABF0452BE64AD290(Local_103.f_12[0]))
						{
							if (func_8(&(Local_103.f_9[0]), Local_103.f_12[0], 26, iVar0, -1, 1, 1, 1))
							{
								unk_0x83055D7E96024509(unk_0x8A5B683BACF7B78C(Local_103.f_9[0]), 1);
								unk_0xD759B92031944D46(unk_0x8A5B683BACF7B78C(Local_103.f_9[0]), 1, 0);
								unk_0x1F4E5EFBFE503FB3(unk_0x8A5B683BACF7B78C(Local_103.f_9[0]), 1);
								unk_0xDFA901280292A2FB(unk_0x8A5B683BACF7B78C(Local_103.f_9[0]), Global_1574984);
								unk_0xD759B92031944D46(unk_0x8A5B683BACF7B78C(Local_103.f_9[0]), 1, 0);
								unk_0x6259CDB47862A4F3(unk_0x8A5B683BACF7B78C(Local_103.f_9[0]), round((200f * Global_262145.f_153)), 0);
								Local_103.f_16 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (!unk_0xAABBF7FA3E338B30(Local_103.f_9[0]) || !unk_0xAABBF7FA3E338B30(Local_103.f_12[0]))
	{
		return 0;
	}
	return 1;
}

int func_8(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x94D82D856BD4DE54(1))
	{
		return 0;
	}
	if (!unk_0x83A1DA4E6C55E952(uParam1))
	{
		return 0;
	}
	if (!unk_0x1095F403F52B42E1(unk_0xBEA1D935EBAA95F3(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xADF0D7F44D12DC49(unk_0x91A7C8CA5E332C03(unk_0xBEA1D935EBAA95F3(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x83A1DA4E6C55E952(*uParam0))
	{
		unk_0xEAF1F3E17588C851(unk_0x8A5B683BACF7B78C(*uParam0), iParam7);
		if (unk_0xCC1BBE3267AB0DC9(unk_0x8A5B683BACF7B78C(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x2F16A8714FE53E5C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_9(var uParam0)
{
	if (unk_0x83A1DA4E6C55E952(uParam0))
	{
		return !func_10(unk_0xBEA1D935EBAA95F3(uParam0));
	}
	return 0;
}

int func_10(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (unk_0x7112137033807390(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x1095F403F52B42E1(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_11(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x3F0E621C9C312804(iParam1))
	{
		return 0;
	}
	if (!unk_0xA495A83E4287FE76(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x01AF8CB960828C2B(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = unk_0x48CFBECB146FD1A1(iParam1, vParam2, fParam3, iParam5, iParam4, iParam12);
	if (unk_0xDC5D81351D6A4DDB(iVar1))
	{
		*uParam0 = unk_0xC48DA15CF8CAF4F9(iVar1);
		Global_2524719.f_6178 = iVar1;
		if (unk_0x83A1DA4E6C55E952(*uParam0))
		{
			if (bParam13)
			{
				unk_0x3D126A1799B1C84D(iVar1, 1);
			}
			unk_0xEAF1F3E17588C851(iVar1, iParam8);
			if (unk_0xCC1BBE3267AB0DC9(iVar1))
			{
				if (bParam6)
				{
					unk_0x2F16A8714FE53E5C(*uParam0, 1);
				}
				else
				{
					unk_0x2F16A8714FE53E5C(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0x9F5CBEB0A0ADA5A7(*uParam0, unk_0xD4E735F4B6A956AC(), 1);
				}
			}
			unk_0x42B5518F103DB03E(iVar1, bParam7);
			unk_0x1E0A3C6D89CE975D(iVar1, 1);
			if (bParam10)
			{
				unk_0xAEE3221D0EC483AD(iVar1);
				unk_0xBA75315E0F357DD3(iVar1, 5, 5, 1f);
			}
			return 1;
		}
	}
	return 0;
}

int func_12(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (!func_23(*uParam0, 0f, 0f, 0f, 0))
	{
		return 1;
	}
	switch (iLocal_120)
	{
		case 0:
			if (unk_0x05EFB6A616B6FADE(Local_103.f_4, iLocal_120))
			{
				vVar0 = { -1232.842f, -1095.003f, 2.2331f };
				vVar1 = { -1226.248f, -1089.819f, 10.1513f };
				vVar2 = { func_22(0, 0) };
				fVar3 = 19.7853f;
			}
			break;
		
		case 1:
			if (unk_0x05EFB6A616B6FADE(Local_103.f_4, iLocal_120))
			{
				vVar0 = { -622.0966f, 250.3288f, 75.7075f };
				vVar1 = { -614.8635f, 255.2288f, 88.7755f };
				vVar2 = { func_22(0, 1) };
				fVar3 = 266.4686f;
			}
			break;
		
		case 2:
			if (unk_0x05EFB6A616B6FADE(Local_103.f_4, iLocal_120))
			{
				vVar0 = { 794.4784f, -2034.339f, 25.2469f };
				vVar1 = { 798.8026f, -2026.004f, 33.2793f };
				vVar2 = { func_22(0, 2) };
				fVar3 = 355.9428f;
			}
			break;
		
		case 3:
			if (unk_0x05EFB6A616B6FADE(Local_103.f_4, iLocal_120))
			{
				vVar0 = { -1623.919f, 1249.831f, 135.2495f };
				vVar1 = { -1621.554f, 1257.98f, 145.2376f };
				vVar2 = { func_22(0, 3) };
				fVar3 = 353.7463f;
			}
			break;
		
		case 4:
			if (unk_0x05EFB6A616B6FADE(Local_103.f_4, iLocal_120))
			{
				vVar0 = { 1118.077f, 1875.035f, 60.3776f };
				vVar1 = { 1127.638f, 1883.083f, 70.1053f };
				vVar2 = { func_22(0, 4) };
				fVar3 = 201.3967f;
			}
			break;
	}
	if (iLocal_120 < 5)
	{
		if (!func_23(vVar0, 0f, 0f, 0f, 0))
		{
			if (Local_103.f_3 == -1)
			{
				Local_103.f_3 = unk_0x9413116E51C31A2A(vVar0, vVar1);
			}
			else if (unk_0xE096BA59686F5196(Local_103.f_3))
			{
				if (unk_0x0171099D7C974799(Local_103.f_3))
				{
					if (!unk_0xABC3CA5E585AF6F5(Local_103.f_3))
					{
						if (!func_13(vVar2, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
						{
							*uParam0 = { vVar2 };
							*uParam1 = fVar3;
							unk_0x48A79E9BC4B8617A(Local_103.f_3);
							return 1;
						}
						else
						{
							iLocal_120++;
							unk_0x48A79E9BC4B8617A(Local_103.f_3);
							Local_103.f_3 = -1;
						}
					}
					else
					{
						iLocal_120++;
						unk_0x48A79E9BC4B8617A(Local_103.f_3);
						Local_103.f_3 = -1;
					}
				}
			}
		}
		else
		{
			iLocal_120++;
		}
	}
	else
	{
		iLocal_120 = 0;
	}
	return 0;
}

int func_13(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_366(unk_0xD4E735F4B6A956AC(), 1, 1))
		{
			if (!unk_0x71364F510A1CB69F())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x499324B3EF19C288(func_18(unk_0xD4E735F4B6A956AC()), vParam0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x317672E799676CA5(vParam0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_366(iVar1, 1, 1))
		{
			if (!func_15(iVar1, 0) && unk_0xBC6A832F36065FDF(unk_0xD4E735F4B6A956AC(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0xD4E735F4B6A956AC()))
				{
					if ((func_14(iVar1) || !bParam8) && !Global_2423801[iVar1 /*413*/].f_259)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0xE46ECB9FD23D3264(iVar1) == -1)
							{
								if (unk_0xE46ECB9FD23D3264(iVar1) == unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0xE46ECB9FD23D3264(iVar1) != unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()))) || unk_0xE46ECB9FD23D3264(iVar1) == -1)
							{
								if (unk_0x499324B3EF19C288(func_18(iVar1), vParam0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0xAB4CCE25F269AC90(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xE46ECB9FD23D3264(iVar1) != iParam6 || unk_0xE46ECB9FD23D3264(iVar1) == -1)
						{
							if (unk_0x499324B3EF19C288(func_18(iVar1), vParam0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0xAB4CCE25F269AC90(iVar1, vParam0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_14(int iParam0)
{
	if (unk_0xD9755B4480864A6A(unk_0xEE978C39384D834F(iParam0)) || Global_2423801[iParam0 /*413*/].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_15(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_16(-1, 0) == 8;
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

int func_16(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_17();
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

int func_17()
{
	return Global_1312736;
}

Vector3 func_18(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_21() && Global_1589747[iVar0 /*790*/].f_761) && !func_20(Global_1589747[iVar0 /*790*/].f_762))
	{
		return Global_1589747[iVar0 /*790*/].f_762;
	}
	return func_19(iParam0);
}

Vector3 func_19(int iParam0)
{
	return unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iParam0), 0);
}

int func_20(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_21()
{
	return Global_2448386.f_16;
}

Vector3 func_22(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				vVar0 = { -1228.99f, -1092.231f, 7.0465f };
			}
			else if (iParam1 == 1)
			{
				vVar0 = { -618.6293f, 252.6611f, 80.5897f };
			}
			else if (iParam1 == 2)
			{
				vVar0 = { 796.6768f, -2029.602f, 28.1346f };
			}
			else if (iParam1 == 3)
			{
				vVar0 = { -1622.881f, 1253.516f, 139.6713f };
			}
			else if (iParam1 == 4)
			{
				vVar0 = { 1123.27f, 1878.917f, 65.7957f };
			}
			break;
	}
	return vVar0;
}

bool func_23(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_24(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xCACEBBBEAD8F262E(iParam0);
	return unk_0x7FC99CCC73354033(iParam0);
}

bool func_25(int iParam0, bool bParam1, bool bParam2)
{
	return func_26(0, iParam0, 1, bParam1, bParam2);
}

int func_26(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x05EFB6A616B6FADE(Global_1380171, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_30(iParam0) - func_29(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_29(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_30(iParam0) - func_28(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_29(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_30(iParam0) - func_29(iParam0, 1));
		}
		if (!bParam4 && Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/] != 3)
		{
			iVar1 = (iVar1 - func_27(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1380171.f_1;
			break;
		
		case 1:
			return Global_1380171.f_2;
			break;
		
		case 2:
			return Global_1380171.f_3;
			break;
	}
	return 0;
}

int func_29(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xD4E735F4B6A956AC();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xB592B7A61F21E7A5())
			{
				return Global_2423801[iVar0 /*413*/].f_209;
			}
			else
			{
				return unk_0xBCC2AC37F56D2149(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0xB592B7A61F21E7A5())
			{
				return Global_2423801[iVar0 /*413*/].f_210;
			}
			else
			{
				return unk_0xA373CB83DA86BA00(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0xB592B7A61F21E7A5())
			{
				return Global_2423801[iVar0 /*413*/].f_211;
			}
			else
			{
				return unk_0x2FC83B1E3A760AA3(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1380179;
			break;
		
		case 1:
			return Global_1380180;
			break;
		
		case 2:
			return Global_1380181;
			break;
	}
	return 0;
}

bool func_31(int iParam0, bool bParam1, bool bParam2)
{
	return func_26(1, iParam0, 1, bParam1, bParam2);
}

int func_32()
{
	return joaat("cavalcade");
}

int func_33()
{
	return joaat("a_m_y_business_03");
}

int func_34()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	int iVar5;
	
	if (unk_0x05EFB6A616B6FADE(Local_103, 1))
	{
		if (iLocal_106 >= vLocal_108.x)
		{
			if (iLocal_119 < 5)
			{
				iLocal_119++;
			}
			iLocal_106 = 0;
		}
		if (iLocal_106 == 0)
		{
			unk_0x2BCFB39E86340DAA(&iLocal_111, 1);
		}
		if (iLocal_119 < 5)
		{
			iVar5 = iLocal_106;
			if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(iVar5)))
			{
				iVar0 = unk_0x9279C21787650C40(unk_0xDF1881EF65347257(iVar5));
				if (func_366(iVar0, 1, 1))
				{
					iVar1 = unk_0xEE978C39384D834F(iVar0);
					if (unk_0x05EFB6A616B6FADE(iLocal_111, 1))
					{
						vVar2 = { func_22(Local_103.f_5, iLocal_119) };
						vVar3 = { unk_0xE2BBD32891C18569(iVar1, 0) };
						fVar4 = unk_0x499324B3EF19C288(vVar2, vVar3, 1);
						if (fVar4 < 300f)
						{
							unk_0xFA57C719261AA55D(&iLocal_111, 1);
						}
					}
				}
			}
			iLocal_106++;
			if (iLocal_106 == vLocal_108.x)
			{
				if (unk_0x05EFB6A616B6FADE(iLocal_111, 1))
				{
					unk_0x2BCFB39E86340DAA(&(Local_103.f_4), iLocal_119);
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_35()
{
	return 0;
}

int func_36(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_43(uParam0, bParam2, 0);
	if (unk_0x4C9BACA8D249CB13() && !bParam2)
	{
		if (unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(unk_0xFD34717937104F1C(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_37()
{
	if (unk_0x45F99485D7E1C29A())
	{
		switch (Local_103.f_6)
		{
			case 0:
				if (unk_0xAABBF7FA3E338B30(Local_103.f_9[0]) && unk_0xAABBF7FA3E338B30(Local_103.f_12[0]))
				{
					Local_103.f_6 = 1;
				}
				break;
			
			case 1:
				if (unk_0xAABBF7FA3E338B30(Local_103.f_9[0]))
				{
					if (!func_38(Local_103.f_9[0]))
					{
						if (unk_0xAABBF7FA3E338B30(Local_103.f_12[0]))
						{
							if (func_9(Local_103.f_12[0]))
							{
								if (unk_0xB10F7FE89663CB5B(unk_0x8A5B683BACF7B78C(Local_103.f_9[0]), unk_0xBEA1D935EBAA95F3(Local_103.f_12[0])))
								{
									if (unk_0x05EFB6A616B6FADE(Local_103, 7))
									{
										unk_0x2BCFB39E86340DAA(&Local_103, 9);
										Local_103.f_6 = 2;
									}
									else if (unk_0x05EFB6A616B6FADE(Local_103, 14))
									{
										unk_0x2BCFB39E86340DAA(&Local_103, 9);
										Local_103.f_6 = 2;
									}
									else if (unk_0x05EFB6A616B6FADE(Local_103, 19))
									{
										Local_103.f_6 = 3;
									}
								}
								else
								{
									Local_103.f_6 = 4;
								}
							}
							else
							{
								Local_103.f_6 = 3;
							}
						}
					}
				}
				break;
			
			case 2:
				if (unk_0xAABBF7FA3E338B30(Local_103.f_9[0]))
				{
					if (!func_38(Local_103.f_9[0]))
					{
						if (!unk_0x8A29BBDF4603E52B(unk_0x8A5B683BACF7B78C(Local_103.f_9[0])))
						{
							Local_103.f_6 = 4;
						}
						else if (unk_0xAABBF7FA3E338B30(Local_103.f_12[0]))
						{
							if (!func_9(Local_103.f_12[0]))
							{
								Local_103.f_6 = 3;
							}
							else if (unk_0x05EFB6A616B6FADE(Local_103, 19))
							{
								Local_103.f_6 = 3;
							}
						}
					}
				}
				break;
			
			case 3:
				if (unk_0xAABBF7FA3E338B30(Local_103.f_9[0]))
				{
					if (!func_38(Local_103.f_9[0]))
					{
						if (!unk_0x5D7DFE2058701942(unk_0x8A5B683BACF7B78C(Local_103.f_9[0]), 0))
						{
							Local_103.f_6 = 4;
						}
					}
				}
				break;
			
			case 4:
				break;
			}
	}
}

int func_38(var uParam0)
{
	if (unk_0x83A1DA4E6C55E952(uParam0))
	{
		return unk_0x4915F4759304D5CF(unk_0x8A5B683BACF7B78C(uParam0));
	}
	return 1;
}

void func_39()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x45F99485D7E1C29A())
	{
		if (iLocal_105 >= vLocal_108.x)
		{
			iLocal_105 = 0;
			iLocal_118 = 0;
			unk_0xFA57C719261AA55D(&iLocal_111, 0);
			unk_0x2BCFB39E86340DAA(&iLocal_111, 5);
			unk_0xFA57C719261AA55D(&Local_103, 5);
			unk_0xFA57C719261AA55D(&Local_103, 17);
			unk_0xFA57C719261AA55D(&iLocal_111, 14);
			unk_0xFA57C719261AA55D(&iLocal_111, 19);
			if (!unk_0x05EFB6A616B6FADE(Local_103, 16))
			{
				if (unk_0x05EFB6A616B6FADE(Local_103, 18))
				{
					if (!unk_0x05EFB6A616B6FADE(Local_103, 4))
					{
						unk_0x2BCFB39E86340DAA(&Local_103, 16);
					}
				}
			}
			if (func_42(&(Local_103.f_21)))
			{
				if (!unk_0x05EFB6A616B6FADE(Local_103, 12))
				{
					if (func_36(&(Local_103.f_21), 360000, 0))
					{
						unk_0x2BCFB39E86340DAA(&Local_103, 12);
					}
					if (!unk_0x05EFB6A616B6FADE(Local_103, 15))
					{
						if (func_36(&(Local_103.f_21), 240000, 0))
						{
							unk_0x2BCFB39E86340DAA(&Local_103, 15);
						}
					}
				}
				else
				{
					unk_0x2BCFB39E86340DAA(&iLocal_111, 9);
				}
			}
		}
		iVar0 = iLocal_105;
		if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(iVar0)))
		{
			iVar3 = unk_0x9279C21787650C40(unk_0xDF1881EF65347257(iVar0));
			iVar2 = iVar3;
			if (unk_0x05EFB6A616B6FADE(iLocal_111, 5))
			{
				if (vLocal_108[iVar0 /*3*/].f_2 < 7)
				{
					unk_0xFA57C719261AA55D(&iLocal_111, 5);
				}
			}
			if (!unk_0x05EFB6A616B6FADE(Local_103, 0))
			{
				if (unk_0x05EFB6A616B6FADE(vLocal_108[iVar0 /*3*/], 0))
				{
					iLocal_118++;
				}
			}
			else if (unk_0x05EFB6A616B6FADE(vLocal_108[iVar0 /*3*/], 2))
			{
				if (!unk_0x05EFB6A616B6FADE(Local_103, 17))
				{
					if (!unk_0x05EFB6A616B6FADE(Local_103.f_7, iVar2))
					{
						if (vLocal_108[iVar0 /*3*/].f_2 > 4)
						{
							unk_0x2BCFB39E86340DAA(&(Local_103.f_7), iVar2);
							unk_0x2BCFB39E86340DAA(&Local_103, 17);
						}
					}
				}
				if (!unk_0x05EFB6A616B6FADE(Local_103, 5))
				{
					unk_0x2BCFB39E86340DAA(&Local_103, 5);
				}
				if (!unk_0x05EFB6A616B6FADE(Local_103, 4))
				{
					if (unk_0x05EFB6A616B6FADE(vLocal_108[iVar0 /*3*/], 1))
					{
						Local_103.f_8 = iVar3;
						unk_0x2BCFB39E86340DAA(&Local_103, 4);
						unk_0xFA57C719261AA55D(&iLocal_111, 15);
						unk_0xFA57C719261AA55D(&Local_103, 18);
					}
				}
				if (!unk_0x05EFB6A616B6FADE(Local_103, 4))
				{
					if (!unk_0x05EFB6A616B6FADE(Local_103, 18))
					{
						if (unk_0x05EFB6A616B6FADE(vLocal_108[iVar0 /*3*/], 7))
						{
							unk_0x2BCFB39E86340DAA(&Local_103, 18);
						}
					}
				}
				if (unk_0x05EFB6A616B6FADE(iLocal_111, 9))
				{
					if (unk_0x05EFB6A616B6FADE(vLocal_108[iVar0 /*3*/], 5))
					{
						unk_0xFA57C719261AA55D(&iLocal_111, 9);
					}
				}
				if (!unk_0x05EFB6A616B6FADE(iLocal_111, 14))
				{
					if (unk_0x05EFB6A616B6FADE(vLocal_108[iVar0 /*3*/], 6))
					{
						unk_0x2BCFB39E86340DAA(&iLocal_111, 14);
					}
				}
				if (!unk_0x05EFB6A616B6FADE(iLocal_111, 20))
				{
					if (unk_0x05EFB6A616B6FADE(vLocal_108[iVar0 /*3*/], 8))
					{
						unk_0x2BCFB39E86340DAA(&iLocal_111, 20);
					}
				}
			}
		}
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(iVar1)))
			{
				func_41(iVar1);
			}
			iVar1++;
		}
		iLocal_105++;
		if (iLocal_105 >= vLocal_108.x)
		{
			if (!unk_0x05EFB6A616B6FADE(Local_103, 16))
			{
				if (unk_0xAABBF7FA3E338B30(Local_103.f_9[0]))
				{
					if (func_38(Local_103.f_9[0]))
					{
						if (!unk_0x05EFB6A616B6FADE(Local_103, 4))
						{
							if (unk_0x05EFB6A616B6FADE(iLocal_111, 15))
							{
								if (!func_42(&uLocal_116))
								{
									func_43(&uLocal_116, 0, 0);
								}
								else if (func_36(&uLocal_116, 2000, 0))
								{
									unk_0x2BCFB39E86340DAA(&Local_103, 16);
								}
							}
						}
					}
				}
			}
			unk_0x2BCFB39E86340DAA(&iLocal_111, 0);
			if (!unk_0x05EFB6A616B6FADE(Local_103, 0))
			{
				if (iLocal_118 >= 1)
				{
					unk_0x2BCFB39E86340DAA(&Local_103, 0);
				}
			}
			if (!unk_0x05EFB6A616B6FADE(Local_103, 14))
			{
				if (unk_0x05EFB6A616B6FADE(iLocal_111, 14))
				{
					unk_0x2BCFB39E86340DAA(&Local_103, 14);
				}
			}
			if (!unk_0x05EFB6A616B6FADE(Local_103, 19))
			{
				if (unk_0x05EFB6A616B6FADE(iLocal_111, 20))
				{
					unk_0x2BCFB39E86340DAA(&Local_103, 19);
				}
			}
			if (!unk_0x05EFB6A616B6FADE(Local_103, 6))
			{
				if (unk_0x05EFB6A616B6FADE(iLocal_111, 5))
				{
					if (Local_103.f_2 > 1 && Local_103.f_2 <= 7)
					{
						unk_0x2BCFB39E86340DAA(&Local_103, 6);
					}
					else if (unk_0x05EFB6A616B6FADE(Local_103, 10))
					{
						unk_0x2BCFB39E86340DAA(&Local_103, 6);
					}
				}
			}
			if (unk_0x05EFB6A616B6FADE(Local_103, 17))
			{
				unk_0xFA57C719261AA55D(&Local_103, 17);
				unk_0xFA57C719261AA55D(&Local_103, 15);
				unk_0xFA57C719261AA55D(&Local_103, 12);
				func_40(&(Local_103.f_21));
				func_43(&(Local_103.f_21), 0, 0);
			}
			if (!unk_0x05EFB6A616B6FADE(Local_103, 11))
			{
				if (unk_0x05EFB6A616B6FADE(Local_103, 12))
				{
					if (unk_0x05EFB6A616B6FADE(iLocal_111, 9))
					{
						unk_0x2BCFB39E86340DAA(&Local_103, 11);
					}
				}
			}
		}
	}
}

void func_40(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_41(int iParam0)
{
	if (unk_0x45F99485D7E1C29A())
	{
		if (!unk_0x05EFB6A616B6FADE(Local_103, 7))
		{
			if (unk_0x05EFB6A616B6FADE(vLocal_108[iParam0 /*3*/], 3))
			{
				unk_0x2BCFB39E86340DAA(&Local_103, 7);
			}
		}
	}
}

bool func_42(var uParam0)
{
	return uParam0->f_1;
}

void func_43(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x4C9BACA8D249CB13() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xFFCC7EBF88BDEE54();
			}
			else
			{
				*uParam0 = unk_0x7546CD2A62C6DBB6();
			}
		}
		else
		{
			*uParam0 = unk_0xFD34717937104F1C();
		}
		uParam0->f_1 = 1;
	}
}

int func_44(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_45(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x45F99485D7E1C29A())
		{
			func_43(uParam0, 0, 0);
		}
	}
}

int func_46(int iParam0)
{
	if (func_48(iParam0))
	{
		if (!func_47(iParam0, 11))
		{
			return 1;
		}
	}
	return 0;
}

bool func_47(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_208, iParam1);
}

int func_48(int iParam0)
{
	if (Global_2423801[iParam0 /*413*/].f_208 == 0)
	{
		return 0;
	}
	return 1;
}

int func_49(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_50(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589747[iParam0 /*790*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_50(int iParam0)
{
	return func_51(iParam0);
}

bool func_51(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_13.f_1, 0);
}

void func_52()
{
	func_346();
	func_343();
	if (unk_0x05EFB6A616B6FADE(Local_103, 10))
	{
		if (vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 < 6)
		{
			vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 = 6;
		}
	}
	if (unk_0x05EFB6A616B6FADE(Local_103, 4))
	{
		if (vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 <= 6)
		{
			vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 = 6;
		}
	}
	if (unk_0x05EFB6A616B6FADE(Local_103, 16))
	{
		if (!unk_0x05EFB6A616B6FADE(Local_103, 4))
		{
			if (vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 <= 6)
			{
				vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 = 6;
				Local_107.f_2 = 723786828;
				func_341(Local_107, func_342(1));
			}
		}
	}
	if (unk_0x05EFB6A616B6FADE(Local_103, 11))
	{
		if (vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 <= 6)
		{
			vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 = 6;
			Local_107.f_2 = 723786828;
			func_341(Local_107, func_342(1));
		}
	}
	if (vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 > 0)
	{
		if (vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 < 6)
		{
			if ((((func_49(unk_0xD4E735F4B6A956AC(), 1) || func_340()) || func_339() > 0) || func_47(unk_0xD4E735F4B6A956AC(), 1)) || func_338())
			{
				vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 = 6;
			}
		}
	}
	if (vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 > 0)
	{
		if (vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 < 6)
		{
			if (func_336(unk_0xD4E735F4B6A956AC()))
			{
				vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 = 6;
			}
		}
	}
	switch (vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2)
	{
		case 0:
			if (unk_0x05EFB6A616B6FADE(vLocal_108[unk_0xD60943E3BE730BF0() /*3*/], 0))
			{
				if (unk_0x05EFB6A616B6FADE(Local_103, 3))
				{
					if (!unk_0x05EFB6A616B6FADE(Local_103, 15))
					{
						unk_0x2BCFB39E86340DAA(&(vLocal_108[unk_0xD60943E3BE730BF0() /*3*/]), 2);
						func_335(11, 1);
						vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 = 3;
					}
					else
					{
						vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 = 6;
						unk_0x2BCFB39E86340DAA(&iLocal_111, 16);
					}
				}
			}
			break;
		
		case 3:
			if (func_334(Local_103.f_5))
			{
				func_333(Local_103.f_5);
				vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 = 4;
			}
			break;
		
		case 4:
			if (!func_332())
			{
				if (func_222())
				{
					vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 = 5;
					func_220(88, 1);
					func_219();
				}
				else if (unk_0x05EFB6A616B6FADE(iLocal_111, 8))
				{
					vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 = 6;
				}
			}
			else if (func_210())
			{
				vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 = 5;
			}
			else
			{
				if (unk_0x05EFB6A616B6FADE(iLocal_111, 8))
				{
					vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 = 6;
				}
				if (unk_0x05EFB6A616B6FADE(Local_103, 15))
				{
					func_197(12, 116);
					vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 = 6;
					unk_0x2BCFB39E86340DAA(&iLocal_111, 16);
				}
			}
			break;
		
		case 5:
			if (Local_103.f_5 == 0)
			{
				func_61();
			}
			break;
		
		case 6:
			vLocal_108[unk_0xD60943E3BE730BF0() /*3*/] = 0;
			unk_0xFA57C719261AA55D(&iLocal_111, 3);
			unk_0xFA57C719261AA55D(&iLocal_111, 4);
			iLocal_110 = 0;
			func_197(12, 116);
			if (unk_0xCE3CB618AFE55EFB(Global_1654518))
			{
				unk_0xE1623437A3194332(&Global_1654518);
			}
			func_60(&Local_123);
			func_53();
			func_335(11, 0);
			vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 = 7;
			break;
		
		case 7:
			if (Local_103.f_2 == 0 && !unk_0x05EFB6A616B6FADE(Local_103, 10))
			{
				vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 = 0;
			}
			break;
	}
}

void func_53()
{
	if (!func_59())
	{
		return;
	}
	if (!unk_0xFEB6EEC0545AF7AA(unk_0x61D2332983ACC05C()) == Global_1312576.f_9)
	{
		return;
	}
	func_54();
}

void func_54()
{
	func_56();
	func_55(0);
}

void func_55(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x4C9BACA8D249CB13();
	Global_1312576 = 20;
	StringCopy(&(Global_1312576.f_1), "", 32);
	Global_1312576.f_9 = 0;
	if (bVar0)
	{
		Global_1312576.f_10 = unk_0xFFCC7EBF88BDEE54();
		Global_1312576.f_11 = unk_0xFFCC7EBF88BDEE54();
	}
	StringCopy(&(Global_1312576.f_12), "", 16);
	StringCopy(&(Global_1312576.f_16), "", 64);
	StringCopy(&(Global_1312576.f_32), "", 64);
	Global_1312576.f_52 = 0;
	Global_1312576.f_53 = 0;
	Global_1312576.f_54 = 0;
	Global_1312576.f_55 = -1;
	Global_1312576.f_56 = 0;
	Global_1312576.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_56()
{
	if (!func_58())
	{
	}
	if (func_59())
	{
		unk_0xA9E97ADD9EE2DB2D(&(Global_1312576.f_12));
		func_57();
		unk_0xA3BC45E3C63A527C();
	}
}

void func_57()
{
	switch (Global_1312576)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xCDA87E1DA52C8C9D(Global_1312576.f_52);
			return;
		
		case 2:
			unk_0xCDA87E1DA52C8C9D(Global_1312576.f_52);
			unk_0xCDA87E1DA52C8C9D(Global_1312576.f_53);
			return;
		
		case 3:
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_16));
			return;
		
		case 4:
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_16));
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_32));
			return;
		
		case 5:
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_16));
			return;
		
		case 6:
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_16));
			return;
		
		case 7:
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_16));
			return;
		
		case 8:
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_16));
			return;
		
		case 9:
			unk_0x42360C300250E797(&(Global_1312576.f_16));
			return;
		
		case 10:
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_16));
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_32));
			return;
		
		case 12:
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_16));
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_32));
			return;
		
		case 13:
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_16));
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_57);
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_32));
			return;
		
		case 11:
			unk_0x42360C300250E797(&(Global_1312576.f_16));
			return;
		
		case 14:
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_16));
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_32));
			return;
		
		case 15:
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_16));
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_57);
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_32));
			return;
		
		case 17:
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_16));
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_32));
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_48));
			return;
		
		case 16:
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_16));
			return;
		
		case 19:
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_16));
			return;
		
		case 18:
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_16));
			unk_0xBA9FB571BCB6C1BD(Global_1312576.f_56);
			unk_0x4FDA9E6EF359F8A9(&(Global_1312576.f_48));
			unk_0xC327C023FDA37F2E(&(Global_1312576.f_32));
			return;
		
		default:
	}
}

int func_58()
{
	if (!func_59())
	{
		return 0;
	}
	unk_0x783C05630CCAF363(&(Global_1312576.f_12));
	func_57();
	return unk_0x0818E99A91733016();
}

int func_59()
{
	if (Global_1312576 == 20)
	{
		return 0;
	}
	return 1;
}

void func_60(int iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xCE3CB618AFE55EFB(*iParam0))
	{
		unk_0xE1623437A3194332(iParam0);
		bVar0 = true;
	}
	if (unk_0xCE3CB618AFE55EFB(iParam0->f_1))
	{
		unk_0xE1623437A3194332(&(iParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xDC5D81351D6A4DDB(iParam0->f_7))
	{
		if (!unk_0x7112137033807390(iParam0->f_7, 0))
		{
			if (unk_0x8AB5836B2F907B07(iParam0->f_7))
			{
				unk_0xC5203C09CD1079F8(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

void func_61()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (unk_0xAABBF7FA3E338B30(Local_103.f_9[0]))
	{
		if (!func_38(Local_103.f_9[0]))
		{
			if (unk_0xCE3CB618AFE55EFB(Global_1654518))
			{
				if (func_195() || func_194())
				{
					unk_0x3070F458AEF47C98(Global_1654518, 0);
				}
				else
				{
					unk_0x3070F458AEF47C98(Global_1654518, 4);
				}
			}
			else
			{
				Global_1654518 = unk_0x6A15DD6A863D5E27(unk_0x8A5B683BACF7B78C(Local_103.f_9[0]));
				unk_0x570128B7829A8EAA(Global_1654518, 1);
				unk_0x575CF00E129E0CE1(Global_1654518, 0f);
			}
			if (unk_0xCE3CB618AFE55EFB(Local_123))
			{
				if (func_195() || func_194())
				{
					unk_0x3070F458AEF47C98(Local_123, 0);
				}
				else
				{
					unk_0x3070F458AEF47C98(Local_123, 4);
				}
				if (!unk_0x05EFB6A616B6FADE(iLocal_111, 10))
				{
					unk_0xC4F12E446CCE89F5(Local_123, "FM_GDM_BLP");
					unk_0x2BCFB39E86340DAA(&iLocal_111, 10);
				}
			}
			if (unk_0xCE3CB618AFE55EFB(Local_123.f_1))
			{
				if (func_195() || func_194())
				{
					unk_0x3070F458AEF47C98(Local_123.f_1, 0);
				}
				else
				{
					unk_0x3070F458AEF47C98(Local_123.f_1, 4);
				}
				if (!unk_0x05EFB6A616B6FADE(iLocal_111, 12))
				{
					unk_0xC4F12E446CCE89F5(Local_123.f_1, "FM_GDM_BLP");
					unk_0x2BCFB39E86340DAA(&iLocal_111, 12);
				}
			}
			if (!unk_0x05EFB6A616B6FADE(iLocal_111, 6))
			{
				if (!unk_0x05EFB6A616B6FADE(Global_2359302, 7) && !func_181(unk_0xD4E735F4B6A956AC(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
				{
					if (unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
					{
						if (!func_195())
						{
							func_175("FM_GDM_KIL", 0);
						}
						unk_0x2BCFB39E86340DAA(&iLocal_111, 6);
					}
				}
			}
			else if (unk_0x05EFB6A616B6FADE(Global_2359302, 7))
			{
				func_53();
				unk_0xFA57C719261AA55D(&iLocal_111, 6);
			}
			else if (func_174())
			{
				func_53();
				unk_0xFA57C719261AA55D(&iLocal_111, 6);
			}
			else if (func_181(unk_0xD4E735F4B6A956AC(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
			{
				func_53();
				unk_0xFA57C719261AA55D(&iLocal_111, 6);
			}
		}
		else if (unk_0x05EFB6A616B6FADE(iLocal_111, 6))
		{
			func_53();
			unk_0xFA57C719261AA55D(&iLocal_111, 6);
		}
		if (!unk_0x05EFB6A616B6FADE(vLocal_108[unk_0xD60943E3BE730BF0() /*3*/], 1))
		{
			iVar1 = unk_0xE425570A0FBF8517(Local_103.f_9[0], &uVar0);
			if (iVar1 == unk_0xD4E735F4B6A956AC())
			{
				unk_0x2BCFB39E86340DAA(&(vLocal_108[unk_0xD60943E3BE730BF0() /*3*/]), 1);
				iVar2 = func_171(func_173(unk_0xD4E735F4B6A956AC(), 1), 1);
				if (iVar2 > 100)
				{
					iVar2 = 100;
				}
				iVar3 = iVar2 * 20;
				iVar3 = round((Global_262145.f_4228 * IntToFloat(iVar3)));
				func_128(2, "XPT_KAIE", -1859646258, 2131309714, iVar3, 1, -1, 0);
				if (Global_262145.f_2422 != 0f)
				{
					iVar4 = round(Global_262145.f_2422);
				}
				else
				{
					iVar4 = 2000;
				}
				if (Global_262145.f_2418 != 0f)
				{
					iVar5 = round(Global_262145.f_2418);
				}
				else
				{
					iVar5 = 8000;
				}
				if (iVar4 >= 100)
				{
					iVar6 = (iVar4 / 100);
				}
				if (iVar5 >= 100)
				{
					iVar7 = (iVar5 / 100);
				}
				iVar8 = unk_0x22C775856F4633CA(iVar6, iVar7 + 1) * 100;
				iVar8 = func_127(iVar8, 1);
				if (iVar8 > iVar5)
				{
					iVar8 = iVar5;
				}
				func_77(&iVar8, 1);
				if (func_76())
				{
					if (iVar8 > 0)
					{
						func_64(-352356931, iVar8, &iVar9, 0, 0, 0);
						Global_4262927[iVar9 /*80*/] = -1146479277;
					}
				}
				else
				{
					unk_0xF69B8796C81D7AFF(iVar8, -1146479277);
				}
				func_63(5, iVar8);
			}
			else if (iVar1 != func_62())
			{
				if (unk_0xC77FA683E9BB485B(iVar1))
				{
					if (!unk_0x05EFB6A616B6FADE(vLocal_108[unk_0xD60943E3BE730BF0() /*3*/], 7))
					{
						if (!unk_0xD45A1B3AD5CB295F(iVar1))
						{
							unk_0x2BCFB39E86340DAA(&(vLocal_108[unk_0xD60943E3BE730BF0() /*3*/]), 7);
						}
					}
				}
			}
		}
	}
}

int func_62()
{
	return -1;
}

void func_63(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23348 == 0 || Global_262145.f_23348 == 1)
		{
			if (!unk_0x47C01C0E6F4C1D06() || Global_262145.f_23348 == 1)
			{
				Global_2524719.f_272 = iParam0;
				if (iParam1 > Global_262145.f_6473)
				{
					iParam1 = Global_262145.f_6473;
				}
				Global_2524719.f_273 = iParam1;
				Global_2524719.f_274 = 0;
			}
		}
	}
}

void func_64(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_76())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0)
			{
				func_65(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_65(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -597978445:
			if (iParam1 > 0)
			{
				func_65(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
			func_65(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_65(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_76())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_17()) || unk_0x64BE694244417BDA())
		{
			Global_4263478 = 1;
			return 0;
		}
		if (Global_2459349)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4263479 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4262927[iVar2 /*80*/].f_61.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0xEC103C948D1D3BEF(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x93EA4BE98F3F425A(iVar4))
		{
			*uParam0 = func_72(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4262927[*uParam0 /*80*/].f_61.f_8 = 1;
					Global_4262927[*uParam0 /*80*/].f_61.f_12 = 1;
				}
			}
			Global_4263464 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4263477 = 1;
			Global_4263480 = iParam4;
			Global_4263482 = iParam3;
			Global_4263483 = 1;
			Global_4263481 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4263480 = iParam4;
			Global_4263482 = iParam3;
			Global_4263483 = 1;
			Global_4263481 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_71(1, iParam4);
			Global_4263477 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_66(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_66(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x2BCFB39E86340DAA(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_67(iParam0);
	}
}

void func_67(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_76())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_70(iParam0))
		{
			if (!bVar0)
			{
				unk_0x220FA7ABD5D740BF();
			}
		}
		else if (!bVar0)
		{
			unk_0xBDAA2C842F5C47BF(Global_4262927[iParam0 /*80*/].f_61);
		}
		func_68(&(Global_4262927[iParam0 /*80*/]));
	}
}

void func_68(var uParam0)
{
	uParam0->f_61 = 0;
	uParam0->f_61 = 2147483647;
	uParam0->f_61.f_1 = 0;
	uParam0->f_61.f_2 = 0;
	uParam0->f_61.f_3 = -1593119440;
	uParam0->f_61.f_4 = -2085313189;
	uParam0->f_61.f_5 = 0;
	uParam0->f_61.f_6 = 1227573907;
	uParam0->f_61.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_69(&(uParam0->f_13));
	func_69(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 16);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_61.f_8 = 0;
	uParam0->f_61.f_9 = 0;
	uParam0->f_61.f_10 = 0;
	uParam0->f_61.f_11 = 0;
	uParam0->f_61.f_13 = 0;
	uParam0->f_61.f_12 = 0;
	uParam0->f_61.f_14 = 0;
	uParam0->f_61.f_15 = 0;
	uParam0->f_61.f_16 = 0;
	uParam0->f_61.f_18 = 0;
}

void func_69(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_70(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_5 == 1;
	}
	return 0;
}

void func_71(int iParam0, int iParam1)
{
	Global_2460521 = iParam1;
	Global_2460520 = iParam0;
}

int func_72(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4262927[iVar0 /*80*/].f_61.f_2 == 0)
		{
			if (!func_76())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4262927[iVar0 /*80*/].f_61.f_2 = 1;
			Global_4262927[iVar0 /*80*/].f_61.f_1 = iParam5;
			Global_4262927[iVar0 /*80*/].f_61.f_3 = iParam1;
			Global_4262927[iVar0 /*80*/].f_61.f_4 = iParam2;
			Global_4262927[iVar0 /*80*/].f_61.f_7 = iParam3;
			Global_4262927[iVar0 /*80*/].f_61.f_5 = 0;
			Global_4262927[iVar0 /*80*/].f_61 = iParam0;
			Global_4262927[iVar0 /*80*/].f_61.f_6 = iParam4;
			Global_4262927[iVar0 /*80*/].f_61.f_11 = uParam8;
			Global_4262927[iVar0 /*80*/].f_61.f_10 = iParam7;
			Global_4262927[iVar0 /*80*/].f_61.f_13 = iParam9;
			Global_4262927[iVar0 /*80*/].f_61.f_12 = 0;
			Global_4262927[iVar0 /*80*/].f_61.f_14 = unk_0x817B152F7462D506();
			Global_4262927[iVar0 /*80*/].f_61.f_18 = 0;
			Global_4263464 = 0;
			if (bParam6)
			{
				Global_4262927[iVar0 /*80*/].f_61.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_73(Global_4262927[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_73(struct<62> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	vector3 vVar0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = -313275313;
	vVar0.y = unk_0xD4E735F4B6A956AC();
	vVar0.f_2 = { Param0.f_61 };
	vVar0.f_2.f_32 = iParam19;
	iVar1 = func_75(vVar0.y);
	if ((Global_262145.f_23427 && !Global_262145.f_23428) && !Global_262145.f_23429)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_74();
		unk_0x04F37AFC39D93909(1, &vVar0, 35, iVar1);
	}
}

void func_74()
{
	unk_0xD75A4240F0AD8613("AM_ARENA_SHP");
}

var func_75(int iParam0)
{
	var uVar0;
	
	unk_0x2BCFB39E86340DAA(&uVar0, iParam0);
	return uVar0;
}

int func_76()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

void func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_126())
		{
			if (func_125(0))
			{
				if (!func_121(0))
				{
					if (unk_0xC77FA683E9BB485B(func_120()))
					{
						if (func_119() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_119());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_117(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_82("GB_BCUT_TICK1", func_120(), iVar0, 0, 0, 1, 1);
						}
						func_81(20);
						func_78(func_120(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_78(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_366(iParam0, 0, 1))
	{
		Var0 = 2084031113;
		Var0.f_1 = unk_0xD4E735F4B6A956AC();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_80(iParam0);
		func_79(&(Var0.f_6), &(Var0.f_7));
		unk_0x04F37AFC39D93909(1, &Var0, 8, func_75(iParam0));
	}
}

void func_79(var uParam0, var uParam1)
{
	*uParam0 = Global_1643357.f_9;
	*uParam1 = Global_1643357.f_10;
}

var func_80(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_491;
}

void func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4883.f_7[iVar0]), iVar1);
}

int func_82(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xBC6A832F36065FDF(unk_0xD4E735F4B6A956AC(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xB330C43B9B7B1724(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xB330C43B9B7B1724(iParam1), 64);
		}
		if (unk_0x429D45A6C6520026(&Var1))
		{
		}
		unk_0x59FF6261546DDD52(sParam0);
		unk_0xBA9FB571BCB6C1BD(func_89(iParam1, -2, 1, 0, 0));
		unk_0xC327C023FDA37F2E(func_87(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xBA9FB571BCB6C1BD(iParam3);
		}
		unk_0xCDA87E1DA52C8C9D(iParam2);
		iVar0 = unk_0x42A1DBBDEF9F85FF(0, 1);
		func_83(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_83(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_86() || !unk_0xD8B89B387D170E27()) || !func_15(unk_0xD4E735F4B6A956AC(), 0))
	{
		return;
	}
	iVar0 = func_84(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1663381.f_5[iVar0 /*53*/] = iParam0;
		Global_1663381.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1663381.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1663381.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1663381.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1663381.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1663381.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_84(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1663381 - 1))
	{
		if (iParam0 > Global_1663381.f_5[iVar0 /*53*/].f_1)
		{
			func_85(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1663381++;
	if (Global_1663381 > 5)
	{
		Global_1663381 = 5;
		return Global_1663381;
	}
	return (Global_1663381 - 1);
}

void func_85(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1663381.f_5[iVar0 /*53*/] = { Global_1663381.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_86()
{
	return unk_0x05BEBC245254F6F2(-1762644250);
}

var func_87(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_88(&cVar0);
}

var func_88(char[4] cParam0)
{
	return cParam0;
}

int func_89(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_336(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0xE46ECB9FD23D3264(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_125859[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_336(unk_0xD4E735F4B6A956AC()) || (func_116() && func_115())) && !unk_0x05EFB6A616B6FADE(Global_2524719.f_4577, 31)) && !bParam4)
	{
		iVar1 = func_114();
		if (unk_0xDC5D81351D6A4DDB(iVar1))
		{
			if (unk_0xC085874FDE5FE33A(iVar1))
			{
				if (unk_0x77065AD41B64E946(iVar1) != -1)
				{
					if (func_366(unk_0x77065AD41B64E946(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xD8B89B387D170E27()) && iParam1 < 4)
						{
							if (Global_4456448.f_125859[iParam1] != -1)
							{
								return func_112(iParam1, iParam0, 0);
							}
							else
							{
								return func_100(iParam0, unk_0x77065AD41B64E946(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_100(iParam0, unk_0x77065AD41B64E946(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xD8B89B387D170E27()) && iParam1 < 4)
			{
				if (Global_4456448.f_125859[iParam1] != -1)
				{
					return func_112(iParam1, iParam0, 0);
				}
				else
				{
					return func_90(0, -1, 0);
				}
			}
			else
			{
				return func_90(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xD8B89B387D170E27()) && iParam1 < 4)
	{
		if (Global_4456448.f_125859[iParam1] != -1)
		{
			return func_112(iParam1, iParam0, 0);
		}
		else
		{
			return func_100(iParam0, unk_0xD4E735F4B6A956AC(), iParam1, bParam2, bParam3);
		}
	}
	return func_100(iParam0, unk_0xD4E735F4B6A956AC(), iParam1, bParam2, bParam3);
}

int func_90(bool bParam0, int iParam1, bool bParam2)
{
	return func_91(unk_0xD4E735F4B6A956AC(), bParam0, iParam1, bParam2);
}

int func_91(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xC77FA683E9BB485B(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0xE46ECB9FD23D3264(iParam0);
	if (func_98() && Global_1378988.f_1)
	{
		if (bParam1)
		{
			return func_97(iParam2, iVar0);
		}
		else
		{
			return func_97(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_96(iVar0, iParam2, 0) && !unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_95(1);
				}
				else
				{
					return func_95(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_4456448.f_4, 20))
			{
				return func_92(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_92(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_95(1);
	}
	return func_95(0);
}

int func_92(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_94(iParam0, iParam1, iParam3);
	if (func_93(Global_4456448.f_130782, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_93(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_152990 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8906[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_94(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_96(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_95(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_96(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 0);
				
				case 1:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 1);
				
				case 2:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 2);
				
				case 3:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 4);
				
				case 1:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 5);
				
				case 2:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 6);
				
				case 3:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 8);
				
				case 1:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 9);
				
				case 2:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 10);
				
				case 3:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 12);
				
				case 1:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 13);
				
				case 2:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 14);
				
				case 3:
					return unk_0x05EFB6A616B6FADE(Global_4456448.f_54, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_97(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_94(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_98()
{
	if (func_99() && unk_0xD8B89B387D170E27())
	{
		return 1;
	}
	return 0;
}

bool func_99()
{
	return unk_0x05EFB6A616B6FADE(Global_4456448.f_146776, 12);
}

int func_100(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xE46ECB9FD23D3264(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1589747[iVar2 /*790*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_109(1))
			{
				iVar3 = func_105(iParam0);
				if (!iVar3 == -1)
				{
					return func_103(iVar3);
				}
			}
			if ((func_102(iParam1, iParam0, iVar0, 0) && !unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 18)) || ((func_96(unk_0xE46ECB9FD23D3264(iParam1), unk_0xE46ECB9FD23D3264(iParam0), 0) && unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 23)) && !unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 18)))
			{
				return func_95(1);
			}
			else if (unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 26))
			{
				return func_101(1);
			}
			else
			{
				return func_91(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574393 || Global_1574384) || Global_1589747[iParam0 /*790*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574393 == 1 && Global_1574403 == 0))
			{
				return func_95(1);
			}
			else
			{
				return func_91(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574388 && Global_1573886.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_105(iParam0);
	if (!iVar4 == -1)
	{
		return func_103(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_101(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_102(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xE46ECB9FD23D3264(iParam0) == -1 && unk_0xE46ECB9FD23D3264(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xE46ECB9FD23D3264(iParam0) == unk_0xE46ECB9FD23D3264(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xE46ECB9FD23D3264(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xE46ECB9FD23D3264(iParam0) == iParam2;
	}
	return unk_0xE46ECB9FD23D3264(iParam0) == iParam2;
}

int func_103(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_104(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_104(int iParam0)
{
	return Global_2417554.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_105(int iParam0)
{
	if (!iParam0 == func_62())
	{
		if (func_107(iParam0, 1))
		{
			return Global_2417554.f_2071.f_11[func_106(iParam0)];
		}
	}
	return -1;
}

int func_106(int iParam0)
{
	if (iParam0 != func_62())
	{
		return Global_1625435[iParam0 /*560*/].f_11;
	}
	return func_62();
}

bool func_107(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_108(iParam0))
		{
			return 0;
		}
	}
	return Global_1625435[iParam0 /*560*/].f_11 != func_62();
}

int func_108(int iParam0)
{
	if (iParam0 != func_62())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_62())
		{
			return Global_1625435[iParam0 /*560*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_109(int iParam0)
{
	if ((func_111() || func_110()) || (func_21() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_110()
{
	return Global_2448386.f_15;
}

var func_111()
{
	return Global_2448386.f_14;
}

int func_112(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969023.f_13[iParam0];
	if (func_109(1))
	{
		iVar2 = func_105(iParam1);
		if (!iVar2 == -1)
		{
			return func_103(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0x05EFB6A616B6FADE(Global_4456448.f_104[iParam0 /*10693*/].f_5532[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_62())
	{
		if (Global_4456448.f_125859[iParam0] != -1 && Global_4456448.f_125859[iParam0] <= 4)
		{
			if (Global_4456448.f_125859[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_125859[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_125859[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_125859[iParam0] == 4)
			{
				if (unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_125859[iParam0];
			}
		}
		else
		{
			iVar0 = func_91(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0x05EFB6A616B6FADE(Global_4456448.f_21, 13))
		{
			iVar0 = func_113(iParam0);
		}
		if (unk_0x05EFB6A616B6FADE(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 26) && !func_96(iParam0, unk_0xE46ECB9FD23D3264(iParam1), 0))
		{
			iVar0 = func_101(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_113(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_153033;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_153034;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_153035;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_153036;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_114()
{
	return Global_2359302.f_2;
}

bool func_115()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 4);
}

bool func_116()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 14);
}

void func_117(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_118(1);
	}
	else
	{
		iVar1 = func_118(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_118(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12277;
}

int func_119()
{
	return Global_262145.f_12276;
}

int func_120()
{
	return Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11;
}

bool func_121(bool bParam0)
{
	return func_122(unk_0xD4E735F4B6A956AC(), bParam0);
}

int func_122(int iParam0, bool bParam1)
{
	return func_123(iParam0, bParam1, 1);
}

int func_123(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_62())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_124(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1625435[iParam0 /*560*/].f_11;
	if (iVar0 != func_62() && Global_1625435[iVar0 /*560*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_124(int iParam0, int iParam1)
{
	if (iParam0 != func_62())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_62())
		{
			if (Global_1625435[iParam0 /*560*/].f_11 == iParam0 && Global_1625435[iParam0 /*560*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_125(bool bParam0)
{
	return func_107(unk_0xD4E735F4B6A956AC(), bParam0);
}

bool func_126()
{
	return func_108(unk_0xD4E735F4B6A956AC());
}

int func_127(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (to_float(iParam0) * Global_262145);
				iParam0 = round(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

var func_128(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_129(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_129(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_130(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_130(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_170(unk_0xD4E735F4B6A956AC()) || func_169(unk_0xD4E735F4B6A956AC()))
	{
		if (Global_262145.f_9522 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9522;
		}
	}
	else if (func_167() || func_163(unk_0xD4E735F4B6A956AC()))
	{
		if (Global_262145.f_22640 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22640;
		}
	}
	else if (Global_262145.f_6524 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_6524;
	}
	if (func_162(sParam2))
	{
	}
	if (func_161())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_159(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_158(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_156(0, &iVar1);
					break;
				
				case 3:
					func_156(1, &iVar1);
					break;
				
				case 1:
					func_153(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1677623)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_150(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_141((func_149(unk_0xD4E735F4B6A956AC()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x300F50ED36AA0A0C(iVar1, iParam8, iParam9);
				if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_2 != -1)
				{
					func_150(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_135(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_131((func_133(unk_0xD4E735F4B6A956AC()) + iVar1));
			}
			else
			{
				func_131((func_133(unk_0xD4E735F4B6A956AC()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_131(int iParam0)
{
	if (func_161())
	{
		Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_5 = iParam0;
		func_132(joaat("mpply_globalxp"), iParam0);
	}
}

void func_132(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, 1);
	}
}

int func_133(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_366(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xD4E735F4B6A956AC())
			{
				return func_134(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589747[iParam0 /*790*/].f_211.f_5;
			}
		}
		else
		{
			return func_134(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_134(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x2AD48F3CEBA882E9(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_135(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_140(unk_0xD4E735F4B6A956AC()) };
	if (unk_0xD1832FEBE50B1AB1())
	{
		if (unk_0xE0B3F7A8017F6425(&Var0))
		{
			iVar1 = func_138(func_139(&Var0));
			if (iVar1 == 0)
			{
				func_137(&Global_1378824, iParam0);
				func_136(joaat("mpply_crew_local_xp_0"), Global_1378824);
			}
			else if (iVar1 == 1)
			{
				func_137(&Global_1378825, iParam0);
				func_136(joaat("mpply_crew_local_xp_1"), Global_1378825);
			}
			else if (iVar1 == 2)
			{
				func_137(&Global_1378826, iParam0);
				func_136(joaat("mpply_crew_local_xp_2"), Global_1378826);
			}
			else if (iVar1 == 3)
			{
				func_137(&Global_1378827, iParam0);
				func_136(joaat("mpply_crew_local_xp_3"), Global_1378827);
			}
			else if (iVar1 == 4)
			{
				func_137(&Global_1378828, iParam0);
				func_136(joaat("mpply_crew_local_xp_4"), Global_1378828);
			}
		}
	}
}

void func_136(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1378819 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1378821 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1378821 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1378822 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1378823 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1378824 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1378825 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1378826 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1378827 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1378828 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1378829 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1378830 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1378831 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1378832 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1378833 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1378834 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1378835 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_137(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_138(int iParam0)
{
	if (iParam0 == Global_1378819)
	{
		return 0;
	}
	else if (iParam0 == Global_1378820)
	{
		return 1;
	}
	else if (iParam0 == Global_1378821)
	{
		return 2;
	}
	else if (iParam0 == Global_1378822)
	{
		return 3;
	}
	else if (iParam0 == Global_1378823)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_139(var uParam0)
{
	if (unk_0xD1832FEBE50B1AB1())
	{
		if (unk_0xE0B3F7A8017F6425(uParam0))
		{
			return Global_2458119;
		}
	}
	return Global_2458119;
}

struct<13> func_140(int iParam0)
{
	struct<13> Var0;
	
	unk_0xE05C4303C26882C4(iParam0, &Var0, 13);
	return Var0;
}

void func_141(int iParam0, int iParam1, int iParam2)
{
	if (func_161())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9490 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1378945[func_148(-1)])
				{
					unk_0x300F50ED36AA0A0C(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1378945[func_148(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9489 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x300F50ED36AA0A0C(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9489 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x300F50ED36AA0A0C(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_147(unk_0xD4E735F4B6A956AC()))
		{
			Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_1 = iParam0;
			Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_6 = func_171(iParam0, 1);
		}
		func_146(639, iParam0, -1, 1);
		func_145(640, func_171(iParam0, 1), -1, 1, 0);
		Global_1378945[func_148(-1)] = iParam0;
		func_142(7, 0);
	}
}

void func_142(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_144(iParam0, iParam1))
	{
		iVar0 = func_143();
		Global_2458086[iVar0] = iParam0;
	}
}

int func_143()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2458086[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_144(int iParam0, var uParam1)
{
	if (Global_1312845)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312857) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_145(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_148(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
}

void func_146(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2535519[iParam0 /*3*/][func_148(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1378885[func_148(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1378891[func_148(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1378897[func_148(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1378903[func_148(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1378861[func_148(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1378867[func_148(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1378873[func_148(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1378879[func_148(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1378837[func_148(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1378843[func_148(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1378849[func_148(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1378855[func_148(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1378909[func_148(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1378915[func_148(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1378921[func_148(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1378927[func_148(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1378933[func_148(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1378939[func_148(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1378945[func_148(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1378951[func_148(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2568104[0 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2568104[1 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2568104[2 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2568104[3 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_2568229[func_148(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1378957[func_148(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1378963[func_148(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1378969[func_148(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1378975[func_148(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2568165[0 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2568165[1 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2568165[2 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2568165[3 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2568165[4 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2568232[0 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2568232[1 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2568232[2 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2568232[3 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2568232[4 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2568248[0 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2568248[1 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2568248[2 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2568248[3 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2568248[4 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2568165[5 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2568104[4 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2568264[func_148(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2568273[func_148(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2568267[func_148(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2568276[func_148(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2568270[func_148(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2568279[func_148(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2568282[func_148(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2568165[6 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2568104[5 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2568165[7 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2568104[6 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2568165[8 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2568104[7 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2568165[9 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2568104[8 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2568165[10 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2568104[9 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2568165[11 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2568104[10 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2568165[12 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2568104[11 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2568165[13 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2568104[12 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2568165[14 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2568104[13 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2568165[15 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2568104[14 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2568165[16 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2568104[15 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2568165[17 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2568104[16 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2568104[17 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2568104[18 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2568104[19 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_147(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x05EFB6A616B6FADE(Global_2437022.f_1, iParam0);
	}
	return 1;
}

int func_148(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_17();
		if (iVar1 > -1)
		{
			Global_2535232 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2535232 = 1;
		}
	}
	return iVar0;
}

int func_149(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xD4E735F4B6A956AC())
			{
				return Global_1378945[func_148(-1)];
			}
			else if (func_147(iParam0))
			{
				return Global_1589747[iParam0 /*790*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1378945[func_148(-1)];
	}
	return 0;
}

void func_150(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_152(iParam0, func_148(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_151(iParam0))
	{
		func_145(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_146(iParam0, iVar0, iParam2, 1);
	}
}

int func_151(int iParam0)
{
	if (Global_1378818)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 8527:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
				return 1;
				break;
			}
	}
	return 0;
}

int func_152(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_148(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_153(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC());
	iVar0 = 0;
	while (iVar0 < unk_0x48908CAFF1B58FF8())
	{
		iVar4 = unk_0xDF1881EF65347257(iVar0);
		if (unk_0xA08F374047C715E8(iVar4))
		{
			iVar5 = unk_0x9279C21787650C40(iVar4);
			if (unk_0xE46ECB9FD23D3264(iVar5) != -1)
			{
				if (unk_0xE46ECB9FD23D3264(iVar5) == iVar1 || func_96(unk_0xE46ECB9FD23D3264(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xD4E735F4B6A956AC())
					{
						if (func_155(unk_0xD4E735F4B6A956AC(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = round((func_154(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_154(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_154(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_155(int iParam0, int iParam1)
{
	if (unk_0xD1832FEBE50B1AB1())
	{
		Global_2503649 = { func_140(iParam0) };
		Global_2503662 = { func_140(iParam1) };
		if (unk_0xE0B3F7A8017F6425(&Global_2503649))
		{
			if (unk_0xE0B3F7A8017F6425(&Global_2503662))
			{
				unk_0xE087FDE0E2FA8ADF(&Global_2503579, 35, &Global_2503649);
				unk_0xE087FDE0E2FA8ADF(&Global_2503614, 35, &Global_2503662);
				if (Global_2503579 == Global_2503614)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_156(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x48908CAFF1B58FF8())
		{
			iVar3 = iVar0;
			if (unk_0xA08F374047C715E8(iVar3))
			{
				iVar4 = unk_0x9279C21787650C40(iVar3);
				if (func_366(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xD4E735F4B6A956AC())
					{
						iVar1++;
						if (func_155(unk_0xD4E735F4B6A956AC(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_366(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xD4E735F4B6A956AC())
				{
					if (func_157(unk_0xD4E735F4B6A956AC(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_155(unk_0xD4E735F4B6A956AC(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = round((func_154(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_154(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_157(int iParam0, int iParam1)
{
	return vdist(func_19(iParam0), func_19(iParam1));
	return 0f;
}

int func_158(int iParam0)
{
	int iVar0;
	
	if (unk_0x5140B71AC6379F52() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_154(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_159(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x69E48309C7AE810E(iParam0) > func_149(unk_0xD4E735F4B6A956AC()))
		{
			iParam0 = -func_149(unk_0xD4E735F4B6A956AC());
		}
	}
	if (func_160(8000, 0, 0) > 0)
	{
		if (func_160(8000, 0, 0) < (iParam0 + func_149(unk_0xD4E735F4B6A956AC())))
		{
			iParam0 = (func_160(8000, 0, 0) - func_149(unk_0xD4E735F4B6A956AC()));
		}
	}
	return iParam0;
}

int func_160(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_287850[iParam0];
}

int func_161()
{
	return 1;
}

int func_162(char* sParam0)
{
	if (unk_0x7032042E5696FFD7(sParam0))
	{
		return 1;
	}
	else if (unk_0x3CAC2741CC1A631F(sParam0, "") || unk_0x3CAC2741CC1A631F(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_163(int iParam0)
{
	return func_164(func_165(iParam0));
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_165(int iParam0)
{
	if (func_166(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_33;
	}
	return -1;
}

int func_166(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_33 != -1 || (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_167()
{
	if (unk_0xD8B89B387D170E27())
	{
		return func_21();
	}
	return func_168(Global_4456448.f_130782);
}

int func_168(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5002[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_169(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 2;
}

bool func_170(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 7;
}

int func_171(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_172(iParam0, 0);
}

int func_172(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_287850[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_287850[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_173(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_149(iParam0);
}

bool func_174()
{
	return Global_68494;
}

void func_175(char* sParam0, bool bParam1)
{
	if (unk_0x429D45A6C6520026(sParam0))
	{
		return;
	}
	if (unk_0xC5E273061032AD53(sParam0) > 23)
	{
		return;
	}
	if (func_179(sParam0))
	{
		return;
	}
	func_54();
	Global_1312576 = 0;
	StringCopy(&(Global_1312576.f_1), unk_0x61D2332983ACC05C(), 32);
	Global_1312576.f_9 = unk_0xFEB6EEC0545AF7AA(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	func_178();
	func_177(bParam1);
	func_176();
}

void func_176()
{
	unk_0x2BCFB39E86340DAA(&(Global_1312576.f_59), 1);
}

void func_177(bool bParam0)
{
	if (bParam0)
	{
		unk_0x2BCFB39E86340DAA(&(Global_1312576.f_59), 0);
		return;
	}
	unk_0xFA57C719261AA55D(&(Global_1312576.f_59), 0);
}

void func_178()
{
	Global_1312576.f_10 = unk_0x8039F92D4B9C6B71(unk_0xFFCC7EBF88BDEE54(), 86400000);
	Global_1312576.f_11 = unk_0xFFCC7EBF88BDEE54();
}

bool func_179(char* sParam0)
{
	if (!func_59())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		return func_180(sParam0);
	}
	if (unk_0x429D45A6C6520026(sParam0))
	{
		return 0;
	}
	return unk_0xFEB6EEC0545AF7AA(sParam0) == unk_0xFEB6EEC0545AF7AA(&(Global_1312576.f_12));
}

bool func_180(char* sParam0)
{
	if (!func_59())
	{
		return 0;
	}
	if (unk_0x429D45A6C6520026(sParam0))
	{
		return 0;
	}
	return unk_0xFEB6EEC0545AF7AA(sParam0) == unk_0xFEB6EEC0545AF7AA(&(Global_1312576.f_16));
}

int func_181(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	if (Global_1589747[iParam0 /*790*/].f_273.f_24 > 0)
	{
		if (bParam1)
		{
			if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_22, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_193(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_192(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_191(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_190(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_189(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_188(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_187(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_186(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_185(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_184(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_182(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_182(int iParam0)
{
	if (iParam0 != func_62())
	{
		if (func_366(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_183(Global_2423801[iParam0 /*413*/].f_309.f_4) == 13;
			}
		}
	}
	return 0;
}

int func_183(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
	}
	return -1;
}

int func_184(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
			if (unk_0x8F474E419F56E48D(iVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_62())
	{
		if (func_366(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1 && Global_2423801[iParam0 /*413*/].f_309.f_7 != func_62())
			{
				return func_183(Global_2423801[iParam0 /*413*/].f_309.f_4) == 12;
			}
		}
	}
	return 0;
}

int func_185(int iParam0)
{
	if (iParam0 != func_62())
	{
		if (func_366(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_183(Global_2423801[iParam0 /*413*/].f_309.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_186(int iParam0)
{
	if (iParam0 != func_62())
	{
		if (func_366(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_183(Global_2423801[iParam0 /*413*/].f_309.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_187(int iParam0)
{
	if (iParam0 != func_62())
	{
		if (func_366(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1 && Global_2423801[iParam0 /*413*/].f_309.f_7 != func_62())
			{
				return func_183(Global_2423801[iParam0 /*413*/].f_309.f_4) == 8;
			}
		}
	}
	return 0;
}

int func_188(int iParam0)
{
	if (iParam0 != func_62())
	{
		if (func_366(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_183(Global_2423801[iParam0 /*413*/].f_309.f_4) == 9;
			}
		}
	}
	return 0;
}

int func_189(int iParam0)
{
	if (iParam0 != func_62())
	{
		if (func_366(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_183(Global_2423801[iParam0 /*413*/].f_309.f_4) == 7;
			}
		}
	}
	return 0;
}

int func_190(int iParam0)
{
	if (iParam0 != func_62())
	{
		if (func_366(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_183(Global_2423801[iParam0 /*413*/].f_309.f_4) == 4;
			}
		}
	}
	return 0;
}

int func_191(int iParam0)
{
	if (iParam0 != func_62())
	{
		if (func_366(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_183(Global_2423801[iParam0 /*413*/].f_309.f_4) == 1;
			}
		}
	}
	return 0;
}

int func_192(int iParam0)
{
	if (iParam0 != func_62())
	{
		if (func_366(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_183(Global_2423801[iParam0 /*413*/].f_309.f_4) == 2;
			}
		}
	}
	return 0;
}

int func_193(int iParam0)
{
	if (iParam0 != func_62())
	{
		if (func_366(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_183(Global_2423801[iParam0 /*413*/].f_309.f_4) == 0;
			}
		}
	}
	return 0;
}

var func_194()
{
	return Global_2415861.f_1689;
}

int func_195()
{
	if (func_196(18))
	{
		return 1;
	}
	if (func_196(0))
	{
		return 1;
	}
	return 0;
}

bool func_196(int iParam0)
{
	int iVar0;
	
	iVar0 = func_152(2480, -1, 0);
	return unk_0x05EFB6A616B6FADE(iVar0, iParam0);
}

void func_197(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_209(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (!iParam1 == Global_2394180[iVar0 /*46*/].f_8)
	{
		return;
	}
	if (!Global_2394180[iVar0 /*46*/].f_4 && Global_2394180[iVar0 /*46*/])
	{
		Global_2394180[iVar0 /*46*/].f_4 = 1;
		func_201();
	}
	func_198(iVar0);
}

void func_198(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 >= Global_1378650)
	{
		return;
	}
	if (Global_2394180[iParam0 /*46*/].f_26 != -1)
	{
		unk_0xDB2661401914B2FA(Global_2394180[iParam0 /*46*/].f_26);
	}
	iVar0 = iParam0;
	iVar1 = iVar0 + 1;
	while (iVar1 < Global_1378650)
	{
		Global_2394180[iVar0 /*46*/] = { Global_2394180[iVar1 /*46*/] };
		Global_2394180[iVar0 /*46*/] = { Global_2394180[iVar1 /*46*/] };
		iVar0++;
		iVar1++;
	}
	func_200(iVar0);
	Global_1378650 = (Global_1378650 - 1);
	if (Global_1378621)
	{
		if (Global_1378619 > 0)
		{
			func_199();
		}
	}
}

void func_199()
{
	Global_1378621 = 0;
}

void func_200(int iParam0)
{
	Global_2394180[iParam0 /*46*/] = 0;
	Global_2394180[iParam0 /*46*/].f_2 = 0;
	Global_2394180[iParam0 /*46*/].f_3 = 0;
	Global_2394180[iParam0 /*46*/].f_4 = 0;
	Global_2394180[iParam0 /*46*/].f_5 = func_62();
	Global_2394180[iParam0 /*46*/].f_6 = 145;
	Global_2394180[iParam0 /*46*/].f_7 = 1;
	Global_2394180[iParam0 /*46*/].f_8 = -1;
	Global_2394180[iParam0 /*46*/].f_9 = -1;
	StringCopy(&(Global_2394180[iParam0 /*46*/].f_10), "", 64);
	Global_2394180[iParam0 /*46*/].f_26 = -1;
	StringCopy(&(Global_2394180[iParam0 /*46*/].f_27), "", 32);
	Global_2394180[iParam0 /*46*/].f_35 = -1;
	Global_2394180[iParam0 /*46*/].f_36 = -1;
	Global_2394180[iParam0 /*46*/].f_37 = 0;
	Global_2394180[iParam0 /*46*/].f_39 = 0;
	Global_2394180[iParam0 /*46*/].f_40 = -1;
	Global_2394180[iParam0 /*46*/].f_41 = 0;
	Global_2394180[iParam0 /*46*/].f_42 = 0;
	Global_2394180[iParam0 /*46*/].f_43 = 0;
	Global_2394180[iParam0 /*46*/].f_45 = 0;
	if (unk_0x4C9BACA8D249CB13())
	{
		Global_2394180[iParam0 /*46*/].f_38 = unk_0xFFCC7EBF88BDEE54();
	}
}

void func_201()
{
	Global_16885 = (Global_16885 - 1);
	if (Global_16885 < 0)
	{
		func_208("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_202();
}

void func_202()
{
	if (!Global_14682)
	{
		if (Global_14513.f_1 == 6)
		{
			func_207(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_203(1);
			func_207(Global_14494, "DISPLAY_VIEW", 1f, to_float(Global_14493), -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_203(int iParam0)
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
	
	Global_16890 = 0;
	Global_2988 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2952[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_206(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2390[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2390[iVar1 /*15*/].f_4)
					{
						if (Global_2952[iVar0] == 0)
						{
							Global_2916[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x05EFB6A616B6FADE(Global_2384, 3))
								{
									iVar2 = 42;
									Global_14685 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14685 = 0;
								}
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_205(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(iVar2);
								unk_0x271C1332F482646C();
							}
							if (Global_2458186)
							{
								if (iVar1 == 14)
								{
									func_204(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2952[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2390[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2390[iVar1 /*15*/].f_4)
					{
						if (Global_2952[iVar0] == 0)
						{
							Global_2916[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_106070.f_14113[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_106070.f_14113[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_106070.f_14113[iVar3 /*104*/].f_99[Global_14513] == 1)
											{
												Global_16890++;
											}
										}
									}
									iVar3++;
								}
								func_204(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(Global_16890), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_71205)
								{
									iVar4 = 0;
									iVar4 = Global_4267064;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4267065[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4267065[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4267065[iVar5 /*104*/].f_99[Global_14513] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_204(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14513)
									{
										case 0:
											iVar6 = Global_37276;
											break;
										
										case 1:
											iVar6 = Global_37277;
											break;
										
										case 2:
											iVar6 = Global_37278;
											break;
										
										default:
											break;
									}
									func_204(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_204(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_205(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(Global_2389);
								unk_0x271C1332F482646C();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x05EFB6A616B6FADE(Global_2384, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_205(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(iVar7);
								unk_0x271C1332F482646C();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x05EFB6A616B6FADE(Global_2384, 3))
								{
									iVar8 = 42;
									Global_14685 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14685 = 0;
								}
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_205(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(iVar8);
								unk_0x271C1332F482646C();
							}
							else if (iVar1 == 8)
							{
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_205(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(42);
								unk_0x271C1332F482646C();
							}
							else if ((iVar1 == 23 && unk_0x3CAC2741CC1A631F(&(Global_2390[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x05EFB6A616B6FADE(Global_2384, 6))
							{
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_205(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(42);
								unk_0x271C1332F482646C();
							}
							else if (Global_2390[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1624079.f_1;
								func_204(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_204(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2952[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_204(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x31A9E530D137684F(uParam0, sParam1);
	unk_0x380580A1A1667F69(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam6));
	}
	if (!unk_0x429D45A6C6520026(sParam7))
	{
		func_205(sParam7);
	}
	if (!unk_0x429D45A6C6520026(sParam8))
	{
		func_205(sParam8);
	}
	if (!unk_0x429D45A6C6520026(sParam9))
	{
		func_205(sParam9);
	}
	if (!unk_0x429D45A6C6520026(sParam10))
	{
		func_205(sParam10);
	}
	if (!unk_0x429D45A6C6520026(sParam11))
	{
		func_205(sParam11);
	}
	unk_0x271C1332F482646C();
}

void func_205(char* sParam0)
{
	unk_0x390B339C943A8A54(sParam0);
	unk_0xD481829E3E36543B();
}

bool func_206(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_207(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x31A9E530D137684F(uParam0, sParam1);
	unk_0x380580A1A1667F69(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam6));
	}
	unk_0x271C1332F482646C();
}

void func_208(char* sParam0)
{
	if (Global_16885 != 0)
	{
		if (!unk_0x429D45A6C6520026(sParam0))
		{
		}
		Global_16885 = 0;
	}
}

int func_209(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1378650)
	{
		if (!Global_2394180[iVar0 /*46*/].f_7)
		{
			if (Global_2394180[iVar0 /*46*/].f_6 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_210()
{
	if (!unk_0x05EFB6A616B6FADE(iLocal_111, 17))
	{
		func_212(12, 116, "", 1, 0, 1, 0);
		unk_0x2BCFB39E86340DAA(&iLocal_111, 17);
	}
	else if (!unk_0x05EFB6A616B6FADE(iLocal_111, 18))
	{
		if (func_211(12, 116))
		{
			unk_0x2BCFB39E86340DAA(&iLocal_111, 18);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_211(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_209(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!iParam1 == Global_2394180[iVar0 /*46*/].f_8)
	{
		return 0;
	}
	if (!Global_2394180[iVar0 /*46*/].f_2)
	{
		return 0;
	}
	func_198(iVar0);
	Global_2395345 = unk_0xFD34717937104F1C() + 1500;
	return 1;
}

void func_212(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;
	
	iVar0 = func_209(iParam0);
	if (bParam5)
	{
		if (iVar0 != -1)
		{
			func_198(iVar0);
		}
	}
	iVar1 = iParam0;
	bVar2 = false;
	StringCopy(&Var3, "", 32);
	func_213(iParam1, iVar1, bVar2, sParam2, &Var3, iParam3, -1, -1, -1, iParam4, iParam6);
}

void func_213(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4, var uParam5, int iParam6, int iParam7, int iParam8, var uParam9, var uParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<46> Var5;
	bool bVar6;
	struct<13> Var7;
	int iVar8;
	
	iVar0 = func_62();
	iVar1 = 145;
	if (bParam2)
	{
		iVar0 = unk_0x1483A8AE554B8B2B(iParam1);
	}
	else
	{
		iVar1 = iParam1;
	}
	if (bParam2)
	{
		if (func_218())
		{
			return;
		}
	}
	iVar2 = Global_1378650;
	if (iVar2 >= 12)
	{
		iVar2 = (iVar2 - 1);
	}
	iVar3 = (iVar2 - 1);
	while (iVar3 >= 0)
	{
		Global_2394180[iVar2 /*46*/] = { Global_2394180[iVar3 /*46*/] };
		iVar2 = (iVar2 - 1);
		iVar3 = (iVar3 - 1);
	}
	Global_1378650++;
	if (Global_1378650 > 12)
	{
		Global_1378650 = 12;
	}
	iVar4 = 0;
	if (Global_2394180[1 /*46*/].f_1)
	{
		Global_2394180[0 /*46*/] = { Global_2394180[1 /*46*/] };
		Global_2394180[1 /*46*/] = { Var5 };
		iVar4 = 1;
	}
	if (iVar4 == 0)
	{
		Global_2394180[iVar4 /*46*/].f_1 = uParam10;
	}
	else
	{
		Global_2394180[iVar4 /*46*/].f_1 = 0;
	}
	Global_2394180[iVar4 /*46*/] = 0;
	Global_2394180[iVar4 /*46*/].f_2 = 0;
	Global_2394180[iVar4 /*46*/].f_3 = 0;
	Global_2394180[iVar4 /*46*/].f_4 = 0;
	Global_2394180[iVar4 /*46*/].f_5 = iVar0;
	Global_2394180[iVar4 /*46*/].f_6 = iVar1;
	Global_2394180[iVar4 /*46*/].f_7 = bParam2;
	Global_2394180[iVar4 /*46*/].f_8 = iParam0;
	Global_2394180[iVar4 /*46*/].f_9 = -1;
	StringCopy(&(Global_2394180[iVar4 /*46*/].f_10), sParam3, 64);
	Global_2394180[iVar4 /*46*/].f_26 = -1;
	StringCopy(&(Global_2394180[iVar4 /*46*/].f_27), sParam4, 32);
	Global_2394180[iVar4 /*46*/].f_35 = iParam6;
	Global_2394180[iVar4 /*46*/].f_36 = iParam7;
	Global_2394180[iVar4 /*46*/].f_37 = 0;
	Global_2394180[iVar4 /*46*/].f_38 = unk_0xFFCC7EBF88BDEE54();
	Global_2394180[iVar4 /*46*/].f_39 = uParam5;
	Global_2394180[iVar4 /*46*/].f_40 = Global_2395344;
	Global_2394180[iVar4 /*46*/].f_44 = iParam8;
	Global_2394180[iVar4 /*46*/].f_45 = uParam9;
	if (iParam0 == 123 || iParam0 == 234)
	{
		Global_2394180[iVar4 /*46*/].f_9 = func_215();
	}
	Global_2395344++;
	func_214();
	Global_2394180[iVar4 /*46*/].f_41 = 0;
	Global_2394180[iVar4 /*46*/].f_42 = 0;
	Global_2394180[iVar4 /*46*/].f_43 = 0;
	if (unk_0x29A02C184A66D25E())
	{
		if (bParam2)
		{
			bVar6 = true;
			if (bVar6)
			{
				Var7 = { func_140(iVar0) };
				iVar8 = unk_0x09B83C3690DB7863(&Var7);
				if (iVar8 != -1)
				{
					Global_2394180[iVar4 /*46*/].f_41 = iVar8;
					Global_2394180[iVar4 /*46*/].f_42 = 1;
					Global_2394180[iVar4 /*46*/].f_43 = 0;
				}
			}
		}
	}
}

void func_214()
{
	Global_1378623 = unk_0x8039F92D4B9C6B71(unk_0xFFCC7EBF88BDEE54(), 30000);
}

int func_215()
{
	vector3 vVar0[24];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	StringCopy(&cVar0, "", 24);
	cVar0 = { func_217() };
	if (unk_0x429D45A6C6520026(&cVar0) || unk_0x3CAC2741CC1A631F(".", &cVar0))
	{
		return -1;
	}
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		switch (iVar1)
		{
			case 0:
				StringCopy(&cVar0, func_216(53, -1), 24);
				break;
			
			case 1:
				StringCopy(&cVar0, func_216(54, -1), 24);
				break;
			
			case 2:
				StringCopy(&cVar0, func_216(55, -1), 24);
				break;
			
			case 3:
				StringCopy(&cVar0, func_216(56, -1), 24);
				break;
			
			case 4:
				StringCopy(&cVar0, func_216(57, -1), 24);
				break;
			
			case 5:
				StringCopy(&cVar0, func_216(58, -1), 24);
				break;
			
			case 6:
				StringCopy(&cVar0, func_216(59, -1), 24);
				break;
			
			default:
				StringCopy(&cVar0, "", 24);
				break;
		}
		if (!unk_0x429D45A6C6520026(&cVar0) && !unk_0x3CAC2741CC1A631F(".", &cVar0))
		{
			iVar2++;
		}
		iVar1++;
	}
	if (iVar2 == 0)
	{
		return -1;
	}
	iVar3 = func_152(8044, -1, 0);
	iVar4 = 0;
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar4 = iVar1 * 3;
		if (iVar4 != -1)
		{
			if (!unk_0x05EFB6A616B6FADE(iVar3, iVar4))
			{
				return 7;
			}
		}
		iVar1++;
	}
	return 1;
}

char* func_216(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_2567139[iParam0 /*3*/][func_148(iParam1)];
	return unk_0xDDCBE1948553B6C6(uVar0, -1);
}

struct<6> func_217()
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	
	if (unk_0x429D45A6C6520026(&(Global_1660590.f_10)))
	{
		iVar2 = func_152(8045, -1, 0);
		if (iVar2 == 0)
		{
			StringCopy(&Var0, ".", 24);
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 1218)
			{
				if ((Global_794709.f_4[iVar1 /*88*/].f_65 == 0 && Global_794709.f_4[iVar1 /*88*/].f_68 == 1) && unk_0x05EFB6A616B6FADE(Global_794709.f_4[iVar1 /*88*/].f_76, 13))
				{
					if (Global_794709.f_107189[iVar1 /*13*/].f_1 == iVar2)
					{
						Var0 = { Global_794709.f_123037[Global_794709.f_107189[iVar1 /*13*/].f_10 /*6*/] };
						iVar1 = 1218;
					}
				}
				iVar1++;
			}
			if (unk_0x429D45A6C6520026(&Var0))
			{
			}
		}
		Global_1660590.f_10 = { Var0 };
		return Var0;
	}
	return Global_1660590.f_10;
}

bool func_218()
{
	return Global_1312817 == 10;
}

void func_219()
{
	int iVar0;
	
	iVar0 = Global_1378933[func_148(-1)];
	unk_0x2BCFB39E86340DAA(&iVar0, 8);
	func_146(1303, iVar0, -1, 1);
}

void func_220(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_221() /*12745*/].f_8178.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_221() /*12745*/].f_8178.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_221() /*12745*/].f_8178.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_221() /*12745*/].f_8178.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_221() /*12745*/].f_8178.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_221() /*12745*/].f_8178.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_221() /*12745*/].f_8178.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_221() /*12745*/].f_8178.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_221() /*12745*/].f_8178.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_221() /*12745*/].f_8178.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_221() /*12745*/].f_8178.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_221() /*12745*/].f_8178.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_221() /*12745*/].f_8178.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_221() /*12745*/].f_8178.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_221() /*12745*/].f_8178.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_221() /*12745*/].f_8178.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_221() /*12745*/].f_8178.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_221() /*12745*/].f_8178.f_30 = iVar0;
			break;
	}
}

int func_221()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_222()
{
	if (!unk_0x05EFB6A616B6FADE(iLocal_111, 4))
	{
		if (!unk_0x05EFB6A616B6FADE(iLocal_111, 8) || (unk_0x05EFB6A616B6FADE(iLocal_111, 8) && func_36(&uLocal_114, 600000, 0)))
		{
			if (func_228(Local_103.f_5))
			{
				unk_0x2BCFB39E86340DAA(&iLocal_111, 4);
				unk_0xFA57C719261AA55D(&iLocal_111, 8);
			}
		}
	}
	else if (!func_227())
	{
		if (!unk_0x05EFB6A616B6FADE(iLocal_111, 19))
		{
			if (func_226())
			{
				unk_0x2BCFB39E86340DAA(&iLocal_111, 19);
			}
			else if (!func_225() && !func_223())
			{
				unk_0x2BCFB39E86340DAA(&iLocal_111, 8);
				unk_0xFA57C719261AA55D(&iLocal_111, 4);
				func_43(&uLocal_114, 0, 0);
				iLocal_110 = 0;
			}
		}
		else if (!func_223())
		{
			if (func_225())
			{
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	else
	{
		unk_0x2BCFB39E86340DAA(&iLocal_111, 8);
		unk_0xFA57C719261AA55D(&iLocal_111, 4);
		func_43(&uLocal_114, 0, 0);
		iLocal_110 = 0;
	}
	return 0;
}

bool func_223()
{
	return func_224();
}

bool func_224()
{
	return Global_1361724.f_40 == 3;
}

bool func_225()
{
	return Global_1361724.f_57.f_1;
}

int func_226()
{
	if (Global_15822 == 4)
	{
		if (unk_0xB39808C1DCE0DCFA())
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

int func_227()
{
	if (Global_16838)
	{
		return 1;
	}
	return 0;
}

int func_228(int iParam0)
{
	int iVar0;
	
	switch (iLocal_110)
	{
		case 0:
			if (func_326(0, 1, 1, 1))
			{
				if (!func_325(12, -1))
				{
					func_321(iParam0);
					iLocal_110++;
				}
			}
			break;
		
		case 1:
			iVar0 = func_320(iParam0);
			func_319(iParam0);
			if (func_229(&uLocal_130, iVar0, "FM_1AU", sLocal_295, 0, 0))
			{
				unk_0xFA57C719261AA55D(&iLocal_111, 11);
				iLocal_110++;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_229(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_317())
	{
		return 0;
	}
	if (func_316())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_230(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_230(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x429D45A6C6520026(sParam2))
	{
		return 0;
	}
	if (unk_0xC5E273061032AD53(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x429D45A6C6520026(sParam3))
	{
		return 0;
	}
	if (unk_0xC5E273061032AD53(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0xFEB6EEC0545AF7AA(unk_0x61D2332983ACC05C());
	iVar1 = func_315(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x429D45A6C6520026(sParam7))
	{
		iVar2 = unk_0xFEB6EEC0545AF7AA(sParam7);
	}
	if (func_314(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_309(iParam6))
	{
		return 0;
	}
	if (func_306(iVar0, iVar1, iVar2))
	{
		if (func_305())
		{
			return 0;
		}
		func_304();
		return func_237(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_236(iParam4))
	{
		return 0;
	}
	func_231(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_231(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1361724.f_40.f_1 = iParam0;
	Global_1361724.f_40.f_2 = iParam1;
	Global_1361724.f_40.f_3 = iParam2;
	StringCopy(&(Global_1361724.f_40.f_4), sParam3, 16);
	Global_1361724.f_40.f_8 = iParam4;
	Global_1361724.f_40.f_9 = iParam5;
	Global_1361724.f_40.f_14 = iParam6;
	func_232(iParam4);
	func_304();
	Global_1361724.f_40.f_13 = unk_0x8039F92D4B9C6B71(unk_0xFFCC7EBF88BDEE54(), 7000);
}

void func_232(int iParam0)
{
	if (func_235(iParam0))
	{
		func_234();
		return;
	}
	func_233();
}

void func_233()
{
	Global_1361724.f_40.f_10 = 0;
}

void func_234()
{
	Global_1361724.f_40.f_10 = 1;
}

int func_235(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_236(int iParam0)
{
	return iParam0 > Global_1361724.f_40.f_8;
}

int func_237(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_303();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_300(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_297(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_300(uParam0, sParam3, sParam4);
		}
		return func_281(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_280(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_270(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_269(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_238(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_238(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_268();
	bVar0 = true;
	if (func_240(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_239(120000);
		return 1;
	}
	return 0;
}

void func_239(int iParam0)
{
	Global_1361724.f_40.f_11 = unk_0x8039F92D4B9C6B71(unk_0xFFCC7EBF88BDEE54(), iParam0);
	Global_1361724.f_40.f_12 = 1;
}

int func_240(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_62();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xB330C43B9B7B1724(iVar0);
		iVar1 = func_262(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x9F92451379B11BF2(unk_0xFFCC7EBF88BDEE54(), Global_1361724.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_261(sParam5, bParam6, &iVar3);
	uVar5 = func_259(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x429D45A6C6520026(sParam8))
	{
		iVar6++;
		if (!unk_0x429D45A6C6520026(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x3CAC2741CC1A631F(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0x05EFB6A616B6FADE(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x05EFB6A616B6FADE(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x429D45A6C6520026(sVar2))
	{
		bVar12 = func_258(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_244(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x05EFB6A616B6FADE(iParam4, 0))
	{
		func_243();
	}
	func_268();
	func_242();
	func_241();
	return 1;
}

void func_241()
{
	Global_1361724.f_57 = 0;
	Global_1361724.f_57.f_1 = 0;
}

void func_242()
{
	Global_1361724.f_40 = 3;
}

void func_243()
{
	unk_0x2BCFB39E86340DAA(&Global_2383, 8);
}

int func_244(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_245(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3090 = iParam6;
			unk_0x2BCFB39E86340DAA(&Global_4268330, 0);
		}
		return 1;
	}
	return 0;
}

int func_245(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x3CAC2741CC1A631F(sParam14, sParam15))
	{
	}
	func_252();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14513 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14513 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14513 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			if (unk_0xFF12F654A8561928(unk_0xA19140A5C42D8715()))
			{
				return 0;
			}
		}
		if (Global_4268315 == 1)
		{
			return 0;
		}
		if (unk_0x8B1574454E8C2421(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x8B1574454E8C2421(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_251() == 0)
	{
		func_249();
		return 0;
	}
	func_248(Global_4268314);
	StringCopy(&(Global_4267065[Global_4268314 /*104*/]), sParam1, 64);
	Global_4267065[Global_4268314 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4267065[Global_4268314 /*104*/].f_24 = iParam2;
	}
	Global_4267065[Global_4268314 /*104*/].f_25 = iParam7;
	Global_4267065[Global_4268314 /*104*/].f_26 = uParam8;
	Global_4267065[Global_4268314 /*104*/].f_29 = uParam9;
	Global_4267065[Global_4268314 /*104*/].f_30 = uParam12;
	Global_4267065[Global_4268314 /*104*/].f_31 = uParam11;
	Global_4267065[Global_4268314 /*104*/].f_28 = 0;
	Global_4267065[Global_4268314 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4267065[Global_4268314 /*104*/].f_33), sParam4, 64);
	Global_4267065[Global_4268314 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4267065[Global_4268314 /*104*/].f_50), sParam5, 64);
	Global_4267065[Global_4268314 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4267065[Global_4268314 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4267065[Global_4268314 /*104*/].f_83), sParam15, 64);
	func_252();
	switch (iParam16)
	{
		case 3:
			Global_4267065[Global_4268314 /*104*/].f_99[Global_14513] = 1;
			break;
		
		case 0:
			Global_4267065[Global_4268314 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4267065[Global_4268314 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4267065[Global_4268314 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14513)
		{
			case 0:
				func_247(0);
				break;
			
			case 1:
				func_247(1);
				break;
			
			case 2:
				func_247(2);
				break;
			
			case 3:
				func_247(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4268315 = 1;
				break;
			
			case 0:
				Global_4268315 = 1;
				break;
			
			case 2:
				Global_4268315 = 1;
				break;
			
			case 1:
				Global_4268315 = 1;
				break;
			}
	}
	Global_16891[Global_4268314] = 0;
	if (bParam10)
	{
		func_252();
		if (Global_14456)
		{
			StringCopy(&Global_14502, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14513)
			{
				case 0:
					StringCopy(&Global_14502, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14502, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14502, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14502, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_246())
			{
				unk_0xE11F00B4AC919F45(-1, "Text_Arrive_Tone", &Global_14502, 1);
			}
		}
	}
	if (!Global_14682)
	{
		if (Global_14513.f_1 == 6)
		{
			func_207(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_203(1);
			func_207(Global_14494, "DISPLAY_VIEW", 1f, to_float(Global_14493), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

bool func_246()
{
	return Global_1312857;
}

void func_247(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_106070.f_14023[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_248(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0xC5B07C33AC7BB174();
	iVar1 = unk_0x65DA628D62901275();
	iVar2 = unk_0x34CEB9721AC6A0A9();
	iVar3 = unk_0xC9A0B68BA813CF99();
	uVar4 = unk_0x897D202BD69186D5() + 1;
	iVar5 = unk_0x56EBDF0E39D83471();
	Global_4267065[iParam0 /*104*/].f_18 = iVar0;
	Global_4267065[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4267065[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4267065[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4267065[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4267065[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_249()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4268314 = 11;
	Global_4267065[Global_4268314 /*104*/].f_18 = -1;
	Global_4267065[Global_4268314 /*104*/].f_18.f_1 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_2 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_3 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_250(Global_4267065[iVar2 /*104*/].f_18, Global_4267065[Global_4268314 /*104*/].f_18))
		{
			Global_4268314 = iVar2;
		}
		iVar2++;
	}
	Global_4267065[Global_4268314 /*104*/].f_24 = 1;
}

int func_250(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_251()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4267065[iVar2 /*104*/].f_24 == 0)
		{
			Global_4268314 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4268314 = 11;
	Global_4267065[Global_4268314 /*104*/].f_18 = -1;
	Global_4267065[Global_4268314 /*104*/].f_18.f_1 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_2 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_3 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4267065[iVar2 /*104*/].f_24 == 0 || Global_4267065[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_250(Global_4267065[iVar2 /*104*/].f_18, Global_4267065[Global_4268314 /*104*/].f_18))
			{
				Global_4268314 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4268314 == 11)
	{
		return 0;
	}
	Global_4267065[Global_4268314 /*104*/].f_99[0] = 0;
	Global_4267065[Global_4268314 /*104*/].f_99[1] = 0;
	Global_4267065[Global_4268314 /*104*/].f_99[2] = 0;
	return 1;
}

void func_252()
{
	if (func_206(14))
	{
		if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[0 /*29*/])
			{
				Global_14513 = 0;
			}
			else if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[1 /*29*/])
			{
				Global_14513 = 1;
			}
			else if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[2 /*29*/])
			{
				Global_14513 = 2;
			}
			else
			{
				Global_14513 = 0;
			}
		}
	}
	else
	{
		Global_14513 = func_253();
		if (Global_14513 == 145)
		{
			Global_14513 = 3;
		}
		if (Global_71205)
		{
			Global_14513 = 3;
		}
		if (Global_14513 > 3)
		{
			Global_14513 = 3;
		}
	}
}

var func_253()
{
	func_254();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_254()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_257(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_256(unk_0xA19140A5C42D8715());
			if (func_255(iVar0) && (!func_206(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_255(Global_106070.f_2355.f_539.f_4301))
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

bool func_255(int iParam0)
{
	return iParam0 < 3;
}

int func_256(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_257(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_257(int iParam0)
{
	if (func_255(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_258(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_245(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3090 = iParam10;
			unk_0x2BCFB39E86340DAA(&Global_4268330, 0);
		}
		return 1;
	}
	return 0;
}

int func_259(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_260(2, iParam1);
	return iParam0;
}

void func_260(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_261(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0x429D45A6C6520026(sParam0))
	{
		return sLocal_18;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_260(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x08791BD93D5986C6(sParam0);
}

int func_262(int iParam0)
{
	int iVar0;
	
	iVar0 = func_265(iParam0);
	if (iVar0 == -1)
	{
		func_263(iParam0, 1);
		return 0;
	}
	Global_1379953[iVar0 /*5*/].f_4 = 1;
	return Global_1379953[iVar0 /*5*/].f_2;
}

void func_263(int iParam0, bool bParam1)
{
	if (!func_366(iParam0, 0, 1))
	{
		return;
	}
	if (func_265(iParam0) != -1)
	{
		return;
	}
	if (Global_1380116)
	{
		if (iParam0 == Global_1380116.f_1)
		{
			return;
		}
	}
	if (func_264(iParam0))
	{
		return;
	}
	if (Global_1380154 >= 32)
	{
		return;
	}
	Global_1380121[Global_1380154] = iParam0;
	Global_1380154++;
	if (bParam1)
	{
	}
}

int func_264(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1380154)
	{
		if (Global_1380121[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_265(int iParam0)
{
	int iVar0;
	
	if (!func_366(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1380114 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1380114)
	{
		if (Global_1379953[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x07D08EE9B44B4EE9(Global_1379953[iVar0 /*5*/].f_2) && unk_0x2C58CFA8E806E25E(Global_1379953[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_266(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_266(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1380114)
	{
		return;
	}
	if (unk_0x07D08EE9B44B4EE9(Global_1379953[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1379953[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0x18167C9C4C1E9195(Global_1379953[iParam0 /*5*/].f_2), 64);
			unk_0x422B7FAC2AC425AD(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0xAAA14DE52F34B110(Global_1379953[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1380114)
	{
		Global_1379953[iVar2 /*5*/] = { Global_1379953[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_267(&(Global_1379953[iVar2 /*5*/]));
	Global_1380114 = (Global_1380114 - 1);
}

void func_267(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_62();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x4C9BACA8D249CB13())
	{
		uParam0->f_3 = unk_0xFFCC7EBF88BDEE54();
	}
}

void func_268()
{
	Global_1361724.f_40.f_9 = 4;
}

int func_269(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_268();
	bVar0 = false;
	return func_240(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_270(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_271(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_271(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_62();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xB330C43B9B7B1724(iVar0);
		iVar1 = func_262(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x9F92451379B11BF2(unk_0xFFCC7EBF88BDEE54(), Global_1361724.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16883 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_261(sParam5, bParam6, &iVar3);
	uVar5 = func_259(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x429D45A6C6520026(sParam8))
	{
		iVar6++;
		if (!unk_0x429D45A6C6520026(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x3CAC2741CC1A631F(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0x05EFB6A616B6FADE(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x05EFB6A616B6FADE(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x429D45A6C6520026(sVar2))
	{
		bVar12 = func_279(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_273(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x05EFB6A616B6FADE(iParam4, 0))
	{
		func_243();
	}
	func_272();
	func_242();
	func_241();
	return 1;
}

void func_272()
{
	Global_1361724.f_40.f_9 = 3;
}

int func_273(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xFA57C719261AA55D(&Global_2383, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_274(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3090 = iParam6;
			Global_2993[3 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
			Global_3070 = iParam0;
			unk_0x2BCFB39E86340DAA(&Global_2383, 1);
			unk_0x2BCFB39E86340DAA(&Global_2383, 7);
		}
		return 1;
	}
	return 0;
}

int func_274(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x3CAC2741CC1A631F(sParam14, sParam15))
	{
	}
	func_252();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14513 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14513 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14513 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			if (unk_0xFF12F654A8561928(unk_0xA19140A5C42D8715()))
			{
				return 0;
			}
		}
		if (Global_106070.f_14023[Global_14513 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x8B1574454E8C2421(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x8B1574454E8C2421(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_278() == 0)
	{
		func_276();
		return 0;
	}
	func_275(Global_16889);
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/]), sParam1, 64);
	Global_106070.f_14113[Global_16889 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_106070.f_14113[Global_16889 /*104*/].f_24 = iParam2;
	}
	Global_106070.f_14113[Global_16889 /*104*/].f_25 = iParam7;
	Global_106070.f_14113[Global_16889 /*104*/].f_26 = uParam8;
	Global_106070.f_14113[Global_16889 /*104*/].f_29 = uParam9;
	Global_106070.f_14113[Global_16889 /*104*/].f_30 = uParam12;
	Global_106070.f_14113[Global_16889 /*104*/].f_31 = uParam11;
	Global_106070.f_14113[Global_16889 /*104*/].f_28 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_33), sParam4, 64);
	Global_106070.f_14113[Global_16889 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_50), sParam5, 64);
	Global_106070.f_14113[Global_16889 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_83), sParam15, 64);
	if (unk_0x05EFB6A616B6FADE(Global_2383, 10))
	{
		Global_106070.f_14113[Global_16889 /*104*/].f_99[0] = 1;
		Global_106070.f_14113[Global_16889 /*104*/].f_99[1] = 1;
		Global_106070.f_14113[Global_16889 /*104*/].f_99[2] = 1;
		Global_3089 = 4;
		func_247(0);
		func_247(2);
		func_247(1);
	}
	else
	{
		func_252();
		switch (iParam16)
		{
			case 3:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[Global_14513] = 1;
				break;
			
			case 0:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14513)
			{
				case 0:
					func_247(0);
					Global_3089 = 0;
					break;
				
				case 1:
					func_247(1);
					Global_3089 = 1;
					break;
				
				case 2:
					func_247(2);
					Global_3089 = 2;
					break;
				
				case 3:
					func_247(3);
					Global_3089 = 3;
					break;
				
				default:
					Global_3089 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x05EFB6A616B6FADE(Global_2383, 10))
		{
			Global_106070.f_14023[0 /*20*/].f_17 = 1;
			Global_106070.f_14023[1 /*20*/].f_17 = 1;
			Global_106070.f_14023[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_106070.f_14023[Global_14513 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_106070.f_14023[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_106070.f_14023[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_106070.f_14023[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16891[Global_16889] = 0;
	if (bParam10)
	{
		func_252();
		if (Global_14456)
		{
			StringCopy(&Global_14502, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14513)
			{
				case 0:
					StringCopy(&Global_14502, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14502, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14502, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14502, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_246())
			{
				unk_0xE11F00B4AC919F45(-1, "Text_Arrive_Tone", &Global_14502, 1);
			}
		}
	}
	if (!Global_14682)
	{
		if (Global_14513.f_1 == 6)
		{
			func_207(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_203(1);
			func_207(Global_14494, "DISPLAY_VIEW", 1f, to_float(Global_14493), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_275(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0xC5B07C33AC7BB174();
	iVar1 = unk_0x65DA628D62901275();
	iVar2 = unk_0x34CEB9721AC6A0A9();
	iVar3 = unk_0xC9A0B68BA813CF99();
	uVar4 = unk_0x897D202BD69186D5() + 1;
	iVar5 = unk_0x56EBDF0E39D83471();
	Global_106070.f_14113[iParam0 /*104*/].f_18 = iVar0;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_276()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71205)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16889 = 34;
	Global_106070.f_14113[Global_16889 /*104*/].f_18 = -1;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_1 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_2 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_3 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_277(Global_106070.f_14113[iVar2 /*104*/].f_18, Global_106070.f_14113[Global_16889 /*104*/].f_18))
		{
			Global_16889 = iVar2;
		}
		iVar2++;
	}
	Global_106070.f_14113[Global_16889 /*104*/].f_24 = 1;
}

int func_277(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_278()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71205)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_106070.f_14113[iVar2 /*104*/].f_24 == 0)
		{
			Global_16889 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16889 = 34;
	Global_106070.f_14113[Global_16889 /*104*/].f_18 = -1;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_1 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_2 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_3 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_106070.f_14113[iVar2 /*104*/].f_24 == 0 || Global_106070.f_14113[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_277(Global_106070.f_14113[iVar2 /*104*/].f_18, Global_106070.f_14113[Global_16889 /*104*/].f_18))
			{
				Global_16889 = iVar2;
			}
		}
		if (Global_106070.f_14113[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_16889 == 34)
	{
		return 0;
	}
	Global_106070.f_14113[Global_16889 /*104*/].f_99[0] = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_99[1] = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_99[2] = 0;
	return 1;
}

int func_279(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0xFA57C719261AA55D(&Global_2383, 10);
	iVar0 = 3;
	if (func_274(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3090 = iParam10;
			Global_2993[3 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
			Global_3070 = iParam0;
			StringCopy(&Global_3071, sParam5, 64);
			unk_0x2BCFB39E86340DAA(&Global_2383, 1);
			unk_0x2BCFB39E86340DAA(&Global_2383, 7);
		}
		return 1;
	}
	return 0;
}

int func_280(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
	}
	if (unk_0x331BE13D31DFA36A(unk_0xA19140A5C42D8715()))
	{
		return 0;
	}
	func_272();
	bVar0 = true;
	if (func_271(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_239(120000);
		return 1;
	}
	return 0;
}

int func_281(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (unk_0x331BE13D31DFA36A(unk_0xA19140A5C42D8715()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0x05EFB6A616B6FADE(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x05EFB6A616B6FADE(iParam4, 4))
	{
		bVar0 = func_296(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_287(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x05EFB6A616B6FADE(iParam4, 3))
		{
			func_286(1);
		}
		if (unk_0x05EFB6A616B6FADE(iParam4, 5))
		{
			func_285(1);
		}
		func_284();
		func_242();
		func_283();
		func_282();
		return 1;
	}
	return 0;
}

void func_282()
{
	Global_2533659 = 0;
}

void func_283()
{
	Global_1361724.f_57 = 1;
	Global_1361724.f_57.f_1 = 0;
}

void func_284()
{
	Global_1361724.f_40.f_9 = 1;
}

void func_285(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x2BCFB39E86340DAA(&Global_2385, 0);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_2385, 0);
	}
}

void func_286(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x2BCFB39E86340DAA(&Global_2383, 20);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_2383, 20);
	}
}

int func_287(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_295(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15870 = 0;
	Global_15829 = 1;
	Global_15836 = 0;
	Global_15831 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_15827 = 0;
	Global_15874 = 0;
	Global_15876 = 0;
	Global_2621441 = 0;
	return func_288(sParam3, iParam4, bParam7);
}

int func_288(char* sParam0, int iParam1, bool bParam2)
{
	Global_15823 = 0;
	if (Global_15822 == 0 || Global_15824 == 2)
	{
		if (Global_15822 != 0)
		{
			if (iParam1 > Global_15824)
			{
				if (Global_15829 == 0)
				{
					unk_0xA8B97F91CBDE376C(false);
					Global_14513.f_1 = 3;
					Global_15822 = 0;
					Global_15823 = 1;
					Global_15875 = 0;
					Global_15818 = 0;
					Global_15819 = 0;
					Global_15833 = 0;
					Global_15832 = 0;
					Global_14512 = 0;
				}
				else
				{
					func_294();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x904275961B875DEB())
		{
			return 0;
		}
		if (func_325(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_293();
		Global_15111 = { Global_15276 };
		Global_15828 = Global_15829;
		Global_15835 = Global_15836;
		Global_2621442 = Global_2621441;
		Global_15837 = { Global_15853 };
		Global_15830 = Global_15831;
		Global_16812 = Global_16813;
		Global_16820 = { Global_16826 };
		Global_16814 = Global_16815;
		Global_16816 = Global_16817;
		Global_16818 = Global_16819;
		Global_15441.f_370 = Global_16811;
		Global_15441.f_368 = Global_16809;
		Global_15441.f_369 = Global_16810;
		Global_15818 = Global_15819;
		if (Global_15828)
		{
			unk_0xFA57C719261AA55D(&Global_2383, 20);
			unk_0xFA57C719261AA55D(&Global_2384, 17);
			unk_0xFA57C719261AA55D(&Global_2385, 0);
			if (bParam2)
			{
				func_252();
				if (Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14513.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14479 == 1)
			{
				return 0;
			}
			if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
			{
				if (unk_0x6625F609B391348E(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (func_292())
				{
					return 0;
				}
				if (unk_0x331BE13D31DFA36A(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x3977B7555441B490(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x45F0F396A506B7CD(unk_0xA19140A5C42D8715(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_71205)
				{
					if (unk_0x4374EED90C523366(unk_0xA19140A5C42D8715()))
					{
						return 0;
					}
					if (unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC()))
					{
						return 0;
					}
					if (unk_0x1CD6AC2CF787DFCB(unk_0xA19140A5C42D8715()))
					{
						return 0;
					}
					if (unk_0x53B0513B47405A70(unk_0xD4E735F4B6A956AC()))
					{
						return 0;
					}
				}
			}
			if (func_291())
			{
				return 0;
			}
			else
			{
				switch (Global_14513.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0x05EFB6A616B6FADE(Global_2383, 9))
				{
					return 0;
				}
			}
			func_290();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_289();
		return 1;
	}
	if (Global_15822 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15824 || iParam1 == Global_15824)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_294();
	}
	return 0;
}

void func_289()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14690[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xA8B97F91CBDE376C(false);
	Global_15822 = 1;
}

void func_290()
{
	Global_15875 = Global_15874;
	Global_15869 = Global_15870;
	Global_15916 = { Global_15904 };
	Global_15922 = { Global_15910 };
	Global_15877 = Global_15876;
	Global_15946 = { Global_15928 };
	Global_15952 = { Global_15934 };
	Global_15958 = { Global_15940 };
	Global_15964 = { Global_15970 };
	Global_1698 = Global_1699;
	Global_1700 = Global_1701;
	Global_15833 = Global_15834;
	Global_15835 = Global_15836;
	Global_15837 = { Global_15853 };
	Global_15826 = Global_15827;
	Global_16838 = 0;
	Global_15871 = 0;
	Global_15872 = 0;
	unk_0xFA57C719261AA55D(&Global_2384, 16);
}

int func_291()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_292()
{
	int iVar0;
	int iVar1;
	
	if (Global_71205)
	{
		iVar0 = 0;
		unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iVar1, 1);
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xEA8B3B18A25152B5() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0x70F79B0BFBB1E7AC(unk_0xA19140A5C42D8715(), 78, 1))
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

void func_293()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15111[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15111[iVar0 /*10*/].f_1), "", 24);
		Global_15111[iVar0 /*10*/].f_7 = 0;
		Global_15111[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15111.f_161 = -99;
	Global_15111.f_162 = { 0f, 0f, 0f };
}

void func_294()
{
	unk_0xB4E5B1A6FE923ECB();
	Global_16833 = 0;
	if ((unk_0xB39808C1DCE0DCFA() || Global_14513.f_1 == 9) || Global_14512 == 1)
	{
		unk_0xA8B97F91CBDE376C(false);
		Global_15822 = 6;
		Global_14513.f_1 = 3;
		return;
	}
	if (unk_0x904275961B875DEB())
	{
		unk_0xA8B97F91CBDE376C(true);
		Global_15822 = 6;
		return;
	}
}

void func_295(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15276 = { *uParam0 };
	Global_1699 = iParam1;
	StringCopy(&Global_15892, sParam2, 24);
	Global_16811 = iParam5;
	if (iParam3 == 0)
	{
		Global_16809 = 1;
		Global_16807 = 0;
	}
	else
	{
		Global_16809 = 0;
		Global_16807 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16810 = 1;
		Global_16808 = 0;
	}
	else
	{
		Global_16810 = 0;
		Global_16808 = 1;
	}
}

int func_296(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_295(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15870 = 1;
	Global_15829 = 1;
	Global_15836 = 0;
	Global_15831 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_15827 = 0;
	Global_15874 = 0;
	Global_15876 = 0;
	Global_2621441 = 0;
	return func_288(sParam3, iParam4, bParam7);
}

int func_297(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
	}
	if (unk_0x331BE13D31DFA36A(unk_0xA19140A5C42D8715()))
	{
		return 0;
	}
	if (func_299(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_298();
		func_284();
		func_242();
		func_283();
		func_282();
		return 1;
	}
	return 0;
}

void func_298()
{
	Global_16840 = 0;
}

bool func_299(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_295(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15870 = 0;
	Global_15829 = 1;
	Global_15836 = 0;
	Global_15831 = 1;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_15827 = 0;
	Global_15874 = 1;
	Global_15876 = 0;
	StringCopy(&Global_15970, sParam5, 24);
	Global_2621441 = 0;
	return func_288(sParam3, iParam4, bParam8);
}

int func_300(var uParam0, char* sParam1, char* sParam2)
{
	if (func_302(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_301();
		func_242();
		func_283();
		return 1;
	}
	return 0;
}

void func_301()
{
	Global_1361724.f_40.f_9 = 2;
}

bool func_302(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_295(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15829 = 0;
	Global_15831 = 0;
	Global_15836 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_2621441 = 0;
	return func_288(sParam2, iParam3, 0);
}

void func_303()
{
	Global_1361724.f_55 = Global_1361724.f_40.f_1;
	Global_1361724.f_55.f_1 = Global_1361724.f_40.f_10;
}

void func_304()
{
	Global_1361724.f_40 = 1;
}

bool func_305()
{
	return Global_1361724.f_40 == 1;
}

int func_306(int iParam0, int iParam1, int iParam2)
{
	if (!func_307(iParam0))
	{
		return 0;
	}
	if (Global_1361724.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1361724.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_307(int iParam0)
{
	if (!func_308())
	{
		return 0;
	}
	if (!Global_1361724.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_308()
{
	if (Global_1361724.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_309(int iParam0)
{
	if (func_313())
	{
		return 0;
	}
	if (func_224())
	{
		return 0;
	}
	if (func_312(0))
	{
		return 0;
	}
	if (Global_1312466.f_18 != 0)
	{
		return 0;
	}
	if (Global_1654543 || func_311())
	{
		return 0;
	}
	if (!unk_0x05EFB6A616B6FADE(iParam0, 6))
	{
		if (func_310())
		{
			return 0;
		}
	}
	return 1;
}

bool func_310()
{
	return unk_0x9F92451379B11BF2(unk_0xFFCC7EBF88BDEE54(), Global_1378623);
}

int func_311()
{
	if (Global_4254407.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_312(int iParam0)
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

bool func_313()
{
	return func_291();
}

int func_314(int iParam0, int iParam1, int iParam2)
{
	if (!func_224())
	{
		return 0;
	}
	return func_306(iParam0, iParam1, iParam2);
}

int func_315(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0xFEB6EEC0545AF7AA(&cVar0);
}

bool func_316()
{
	return Global_2530962.f_1;
}

int func_317()
{
	if (Global_1361912.f_2)
	{
		return 1;
	}
	return func_318();
}

bool func_318()
{
	return func_313();
}

void func_319(int iParam0)
{
	if (!unk_0x05EFB6A616B6FADE(iLocal_111, 11))
	{
		switch (iParam0)
		{
			case 0:
				sLocal_295 = "FMA_KIL1";
				unk_0x2BCFB39E86340DAA(&iLocal_111, 11);
				break;
			}
	}
}

int func_320(int iParam0)
{
	int iVar0;
	
	iVar0 = 144;
	switch (iParam0)
	{
		case 0:
			iVar0 = 12;
			break;
	}
	return iVar0;
}

void func_321(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_323(12, 3, 0);
			func_322(&uLocal_130, 1, 0, "Lester", 0, 1);
			break;
	}
}

void func_322(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_71205)
	{
		if (!unk_0x4915F4759304D5CF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xB583A7C3FEE69710(iParam2, 0);
			}
			else
			{
				unk_0xB583A7C3FEE69710(iParam2, 1);
			}
		}
		if (!unk_0x4915F4759304D5CF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x9D01B1015AD5A3C8(iParam2, 0);
			}
			else
			{
				unk_0x9D01B1015AD5A3C8(iParam2, 1);
			}
		}
	}
}

void func_323(int iParam0, int iParam1, bool bParam2)
{
	Global_3069 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 145)
	{
		func_252();
		if (iParam1 == 4)
		{
			Global_106070.f_28022[iParam0 /*29*/].f_12[0] = 1;
			Global_106070.f_28022[iParam0 /*29*/].f_12[1] = 1;
			Global_106070.f_28022[iParam0 /*29*/].f_12[2] = 1;
			Global_106070.f_28022[iParam0 /*29*/].f_24[0] = 1;
			Global_106070.f_28022[iParam0 /*29*/].f_24[1] = 1;
			Global_106070.f_28022[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_106070.f_28022[iParam0 /*29*/].f_12[iParam1] == 1 && Global_106070.f_28022[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_106070.f_28022[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_106070.f_28022[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_71205)
			{
				if (iParam1 != 4)
				{
					if (Global_14513 != iParam1)
					{
						Global_3042[iParam1 /*4*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
						Global_3059[iParam1] = 1;
						Global_3064[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14513)
					{
					}
					else
					{
						Global_2993[1 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
						Global_2993[1 /*6*/].f_5 = iParam1;
						func_324();
					}
				}
				else
				{
					Global_2993[1 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
					Global_2993[1 /*6*/].f_5 = iParam1;
					func_324();
				}
			}
			else
			{
				Global_2993[1 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
				Global_2993[1 /*6*/].f_5 = iParam1;
				func_324();
			}
		}
	}
}

void func_324()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, unk_0x08791BD93D5986C6(&(Global_106070.f_28022[Global_3069 /*29*/].f_7)), 64);
	if (Global_3088 == 0)
	{
		unk_0x59FF6261546DDD52("");
		StringCopy(&cVar1, unk_0x08791BD93D5986C6(&(Global_2993[1 /*6*/])), 64);
		sVar2 = unk_0x08791BD93D5986C6("CELL_253");
		unk_0x595B8132C1F20265(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		unk_0x59FF6261546DDD52("CELL_255");
		unk_0x4FDA9E6EF359F8A9(&(Global_2993[1 /*6*/]));
		unk_0x595B8132C1F20265(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xFA57C719261AA55D(&Global_2383, 0);
}

bool func_325(int iParam0, int iParam1)
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

int func_326(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xE06AA0996C4E4E03())
	{
		return 0;
	}
	if (func_331())
	{
		return 0;
	}
	if (!unk_0x3A83743561B4F70C())
	{
		return 0;
	}
	if (func_330())
	{
		return 0;
	}
	if (func_340())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_49(unk_0xD4E735F4B6A956AC(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_48(unk_0xD4E735F4B6A956AC()))
		{
			return 0;
		}
	}
	if (func_329())
	{
		return 0;
	}
	if (unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		return 0;
	}
	if (unk_0xD1ABB20CFF127CCC())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
		{
			return 0;
		}
	}
	if (Global_1574167)
	{
		return 0;
	}
	if (func_328())
	{
		return 0;
	}
	if (func_327())
	{
		return 0;
	}
	if (func_338())
	{
		return 0;
	}
	if (Global_68494)
	{
		return 0;
	}
	if (Global_2534143)
	{
		return 0;
	}
	return 1;
}

bool func_327()
{
	return Global_2448386.f_580;
}

bool func_328()
{
	return Global_2448386.f_733;
}

bool func_329()
{
	return Global_2437022.f_3028.f_578;
}

bool func_330()
{
	return unk_0xFD34717937104F1C() <= Global_17367.f_5873 + 100;
}

int func_331()
{
	if (Global_15822 != 0 || unk_0x904275961B875DEB())
	{
		return 1;
	}
	return 0;
}

int func_332()
{
	int iVar0;
	
	iVar0 = Global_1378933[func_148(-1)];
	if (unk_0x05EFB6A616B6FADE(iVar0, 8))
	{
		return 1;
	}
	return 0;
}

void func_333(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0xAABBF7FA3E338B30(Local_103.f_12[0]))
			{
				Global_2437022.f_3747.f_1[0] = unk_0xBEA1D935EBAA95F3(Local_103.f_12[0]);
			}
			if (unk_0xAABBF7FA3E338B30(Local_103.f_9[0]))
			{
				Global_2437022.f_3747.f_4[0] = unk_0x8A5B683BACF7B78C(Local_103.f_9[0]);
			}
			break;
	}
}

int func_334(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0xAABBF7FA3E338B30(Local_103.f_12[0]) && unk_0xAABBF7FA3E338B30(Local_103.f_9[0]))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_335(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_208, iParam0))
		{
			unk_0x2BCFB39E86340DAA(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_208), iParam0);
		}
	}
	else if (unk_0x05EFB6A616B6FADE(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_208, iParam0))
	{
		unk_0xFA57C719261AA55D(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_208), iParam0);
	}
}

int func_336(int iParam0)
{
	if (func_15(iParam0, 0))
	{
		return 1;
	}
	if (func_337())
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

bool func_337()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

bool func_338()
{
	return Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_196 != 0;
}

int func_339()
{
	return Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_197;
}

bool func_340()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 0);
}

void func_341(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 713068249;
	Param0.f_1 = unk_0xD4E735F4B6A956AC();
	if (!iParam13 == 0)
	{
		unk_0x04F37AFC39D93909(1, &Param0, 14, iParam13);
	}
}

int func_342(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x48908CAFF1B58FF8())
	{
		if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(iVar1)))
		{
			iVar2 = unk_0x9279C21787650C40(unk_0xDF1881EF65347257(iVar1));
			if (func_366(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xD4E735F4B6A956AC() || iParam0)
				{
					unk_0x2BCFB39E86340DAA(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_343()
{
	if (vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 >= 5 && vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 < 6)
	{
		if (unk_0x05EFB6A616B6FADE(Local_103, 4))
		{
			if (!unk_0x05EFB6A616B6FADE(iLocal_111, 3))
			{
				if (func_366(Local_103.f_8, 0, 1))
				{
					func_344("FM_TGDM_KIL", Local_103.f_8, 0, 0, 0, 1, 1, 0);
				}
				unk_0x2BCFB39E86340DAA(&iLocal_111, 3);
			}
		}
	}
}

int func_344(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = unk_0xE46ECB9FD23D3264(iParam1);
	if (unk_0xBC6A832F36065FDF(unk_0xD4E735F4B6A956AC(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0xB330C43B9B7B1724(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0xB330C43B9B7B1724(iParam1), 64);
		}
		if (unk_0x429D45A6C6520026(&Var2))
		{
		}
		unk_0x59FF6261546DDD52(sParam0);
		if ((iVar1 != -1 && unk_0xD8B89B387D170E27()) && iVar1 < 4)
		{
			if (Global_4456448.f_125859[iVar1] != -1)
			{
				unk_0xBA9FB571BCB6C1BD(func_112(iVar1, iParam1, 0));
			}
			else
			{
				unk_0xBA9FB571BCB6C1BD(func_89(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			unk_0xBA9FB571BCB6C1BD(func_89(iParam1, -2, 1, 0, 0));
		}
		unk_0xC327C023FDA37F2E(func_87(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x42A1DBBDEF9F85FF(0, 1);
		}
		else
		{
			Global_2503649 = { func_140(iParam1) };
			if (unk_0xE087FDE0E2FA8ADF(&Global_2503579, 35, &Global_2503649))
			{
				iVar3 = 0;
				if (unk_0x3CAC2741CC1A631F(&(Global_2503579.f_22), "Leader") && Global_2503579.f_30 == 0)
				{
					iVar3 = 1;
				}
				if (Global_2503579.f_21 > 0)
				{
					iVar4 = 0;
				}
				else
				{
					iVar4 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var2 = { func_345(&Var2) };
					}
					iVar0 = unk_0x6CA5B2BD422CA926(iVar4, unk_0x634D48A84780E8DD(&Global_2503579, 35), &(Global_2503579.f_17), Global_2503579.f_30, iVar3, 0, Global_2503579, &Var2, Global_1314014, Global_1314015, Global_1314016);
				}
				else
				{
					iVar0 = unk_0xBFE46928D2942C50(iVar4, unk_0x634D48A84780E8DD(&Global_2503579, 35), &(Global_2503579.f_17), Global_2503579.f_30, iVar3, 0, Global_2503579, Global_1314014, Global_1314015, Global_1314016);
				}
			}
			else
			{
				iVar0 = unk_0x42A1DBBDEF9F85FF(0, 1);
			}
		}
		func_83(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_345(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_346()
{
	int iVar0;
	
	iVar0 = unk_0xD60943E3BE730BF0();
	if (iLocal_121 != Local_103.f_15)
	{
		iLocal_121 = Local_103.f_15;
		unk_0xA721D9ED3827732A(iLocal_121);
	}
	if (iLocal_122 != Local_103.f_16)
	{
		iLocal_122 = Local_103.f_16;
		unk_0x7F2854D39965C275(iLocal_122);
	}
	if (func_366(unk_0xD4E735F4B6A956AC(), 0, 1))
	{
		if (!unk_0x05EFB6A616B6FADE(vLocal_108[iVar0 /*3*/], 0))
		{
			if (vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 == 0)
			{
				if (func_339() == 0)
				{
					unk_0x2BCFB39E86340DAA(&(vLocal_108[iVar0 /*3*/]), 0);
				}
			}
		}
		else if (unk_0x05EFB6A616B6FADE(vLocal_108[iVar0 /*3*/], 0))
		{
			if ((func_49(unk_0xD4E735F4B6A956AC(), 1) || func_46(unk_0xD4E735F4B6A956AC())) || func_339() > 0)
			{
				func_40(&uLocal_112);
				unk_0xFA57C719261AA55D(&(vLocal_108[iVar0 /*3*/]), 0);
			}
			else if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				if (!unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
				{
					if (!unk_0x05EFB6A616B6FADE(iLocal_111, 7))
					{
						unk_0x2BCFB39E86340DAA(&iLocal_111, 7);
						func_354();
					}
				}
				else if (unk_0x05EFB6A616B6FADE(iLocal_111, 7))
				{
					unk_0xFA57C719261AA55D(&iLocal_111, 7);
					if (!func_47(unk_0xD4E735F4B6A956AC(), 0))
					{
						func_352();
					}
				}
			}
		}
		if (!unk_0x05EFB6A616B6FADE(vLocal_108[iVar0 /*3*/], 3))
		{
			if (vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 > 3 && vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 < 6)
			{
				if (unk_0x05EFB6A616B6FADE(Global_2437022.f_3747, 1))
				{
					unk_0x2BCFB39E86340DAA(&(vLocal_108[iVar0 /*3*/]), 3);
				}
			}
		}
		if (vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 > 3)
		{
			if (!unk_0x05EFB6A616B6FADE(vLocal_108[unk_0xD60943E3BE730BF0() /*3*/], 5))
			{
				if (func_351(Local_103.f_5))
				{
					unk_0x2BCFB39E86340DAA(&(vLocal_108[unk_0xD60943E3BE730BF0() /*3*/]), 5);
				}
			}
			else if (!func_351(Local_103.f_5))
			{
				unk_0xFA57C719261AA55D(&(vLocal_108[unk_0xD60943E3BE730BF0() /*3*/]), 5);
			}
			if (!unk_0x05EFB6A616B6FADE(vLocal_108[unk_0xD60943E3BE730BF0() /*3*/], 6))
			{
				if (func_348(Local_103.f_5))
				{
					unk_0x2BCFB39E86340DAA(&(vLocal_108[unk_0xD60943E3BE730BF0() /*3*/]), 6);
				}
			}
			if (!unk_0x05EFB6A616B6FADE(vLocal_108[unk_0xD60943E3BE730BF0() /*3*/], 8))
			{
				if (func_347())
				{
					unk_0x2BCFB39E86340DAA(&(vLocal_108[unk_0xD60943E3BE730BF0() /*3*/]), 8);
				}
			}
		}
		if (!unk_0x05EFB6A616B6FADE(iLocal_111, 13))
		{
			if (unk_0xAABBF7FA3E338B30(Local_103.f_9[0]))
			{
				if (!func_38(Local_103.f_9[0]))
				{
					unk_0xD759B92031944D46(unk_0x8A5B683BACF7B78C(Local_103.f_9[0]), 1, 0);
					unk_0x2BCFB39E86340DAA(&iLocal_111, 13);
				}
			}
		}
	}
}

int func_347()
{
	if (unk_0xAABBF7FA3E338B30(Local_103.f_12[0]))
	{
		if (func_9(Local_103.f_12[0]))
		{
			if (unk_0xEB9F2352179A557A(unk_0xBEA1D935EBAA95F3(Local_103.f_12[0]), 0, 7000) || unk_0xEB9F2352179A557A(unk_0xBEA1D935EBAA95F3(Local_103.f_12[0]), 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_348(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0xAABBF7FA3E338B30(Local_103.f_9[0]))
			{
				if (!func_38(Local_103.f_9[0]))
				{
					if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
					{
						if (func_349(unk_0x8A5B683BACF7B78C(Local_103.f_9[0])))
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_349(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7591AFB11E7EDDA0(unk_0xD4E735F4B6A956AC(), iParam0))
	{
		return 1;
	}
	if (unk_0x669ABFB25D991447(unk_0xD4E735F4B6A956AC(), iParam0))
	{
		return 1;
	}
	if (func_350())
	{
		if (unk_0x779AE368CB4F1259(unk_0xD4E735F4B6A956AC(), &iVar0))
		{
			if (unk_0x281590680327CDEA(iVar0))
			{
				iVar1 = unk_0xA2EA4BA455370F3C(iVar0);
				if (unk_0xDC5D81351D6A4DDB(iVar1))
				{
					if (!unk_0x7112137033807390(iVar1, 0))
					{
						if (unk_0x5D7DFE2058701942(iVar1, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_350()
{
	return Global_1574387;
}

int func_351(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0xAABBF7FA3E338B30(Local_103.f_9[0]))
			{
				if (!func_38(Local_103.f_9[0]))
				{
					if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
					{
						if (vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), unk_0xE2BBD32891C18569(unk_0x8A5B683BACF7B78C(Local_103.f_9[0]), 1)) < 40000f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

void func_352()
{
	if (!Global_1312568)
	{
		return;
	}
	func_353();
}

void func_353()
{
	Global_1312568 = 0;
	StringCopy(&(Global_1312568.f_1), "", 24);
	Global_1312568.f_7 = 0;
}

void func_354()
{
	Global_1312568 = 1;
	StringCopy(&(Global_1312568.f_1), unk_0x61D2332983ACC05C(), 24);
	Global_1312568.f_7 = unk_0xFEB6EEC0545AF7AA(&(Global_1312568.f_1));
}

void func_355()
{
	switch (Local_103.f_6)
	{
		case 1:
			if (unk_0x45F99485D7E1C29A())
			{
				if (unk_0xAABBF7FA3E338B30(Local_103.f_12[0]))
				{
					if (func_9(Local_103.f_12[0]))
					{
						if (!func_38(Local_103.f_9[0]))
						{
							if (unk_0xB10F7FE89663CB5B(unk_0x8A5B683BACF7B78C(Local_103.f_9[0]), unk_0xBEA1D935EBAA95F3(Local_103.f_12[0])))
							{
								if (unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103.f_9[0]), -258271821) != 1 && unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103.f_9[0]), -258271821) != 0)
								{
									unk_0x731722E696597BD1(unk_0x8A5B683BACF7B78C(Local_103.f_9[0]), unk_0xBEA1D935EBAA95F3(Local_103.f_12[0]), 20f, 786603);
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x45F99485D7E1C29A())
			{
				if (unk_0xAABBF7FA3E338B30(Local_103.f_12[0]))
				{
					if (unk_0xAABBF7FA3E338B30(Local_103.f_9[0]))
					{
						if (func_9(Local_103.f_12[0]))
						{
							if (!func_38(Local_103.f_9[0]))
							{
								if (unk_0xB10F7FE89663CB5B(unk_0x8A5B683BACF7B78C(Local_103.f_9[0]), unk_0xBEA1D935EBAA95F3(Local_103.f_12[0])))
								{
									if ((unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103.f_9[0]), -258271821) != 1 && unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103.f_9[0]), -258271821) != 0) || unk_0x05EFB6A616B6FADE(Local_103, 9))
									{
										unk_0x731722E696597BD1(unk_0x8A5B683BACF7B78C(Local_103.f_9[0]), unk_0xBEA1D935EBAA95F3(Local_103.f_12[0]), 30f, 786469);
										if (unk_0x05EFB6A616B6FADE(Local_103, 9))
										{
											unk_0xFA57C719261AA55D(&Local_103, 9);
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (unk_0xAABBF7FA3E338B30(Local_103.f_9[0]))
			{
				if (!func_38(Local_103.f_9[0]))
				{
					if (unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103.f_9[0]), -828834893) != 1 && unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103.f_9[0]), -828834893) != 0)
					{
						if (func_359(Local_103.f_9[0]))
						{
							if (unk_0xABF0452BE64AD290(Local_103.f_9[0]))
							{
								unk_0xCB482EF95FAE4D73(unk_0x8A5B683BACF7B78C(Local_103.f_9[0]), 0, 0);
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (unk_0xAABBF7FA3E338B30(Local_103.f_9[0]))
			{
				if (!func_38(Local_103.f_9[0]))
				{
					if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
					{
						if (unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103.f_9[0]), 1805844857) != 1 && unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103.f_9[0]), 1805844857) != 0)
						{
							if (func_359(Local_103.f_9[0]))
							{
								if (unk_0xABF0452BE64AD290(Local_103.f_9[0]))
								{
									unk_0x33B5487515BD13D5(unk_0x8A5B683BACF7B78C(Local_103.f_9[0]), unk_0xA19140A5C42D8715(), 500f, -1, 0, 1);
								}
							}
						}
					}
				}
			}
			break;
	}
	if (unk_0xAABBF7FA3E338B30(Local_103.f_9[0]))
	{
		if ((vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 >= 5 && vLocal_108[unk_0xD60943E3BE730BF0() /*3*/].f_2 < 6) && !func_181(unk_0xD4E735F4B6A956AC(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
		{
			func_356(Local_103.f_9[0], &Local_123, -1082130432, 0, 1, 0, 0, -1, -1, 1);
		}
		else
		{
			func_60(&Local_123);
		}
	}
}

void func_356(var uParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0x83A1DA4E6C55E952(uParam0))
	{
		if (func_358())
		{
			Global_2437022 = unk_0xD4E735F4B6A956AC();
		}
		if (bParam3)
		{
			func_357(unk_0x8A5B683BACF7B78C(uParam0), iParam1, 1, Global_2437022, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_357(unk_0x8A5B683BACF7B78C(uParam0), iParam1, -1, Global_2437022, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0xCE3CB618AFE55EFB(*iParam1))
	{
		func_60(iParam1);
	}
}

int func_357(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xA6580F898F4E801C();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		if (!unk_0x8AB5836B2F907B07(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xC5203C09CD1079F8(iParam0, 1);
			}
			else
			{
				unk_0xF33CC53A33256EAF(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x8DDE0A393F27D92F(iParam0, iParam2);
			unk_0xB2908AF5E9A0E342(iParam0, fParam6);
			if (unk_0xCE3CB618AFE55EFB(*uParam1))
			{
				unk_0xAD8FB9E563A1FF80(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x76D53541FA44D2BF(iParam0, iParam9);
		}
		unk_0x0FDBA0CC86485F19(iParam0, iParam4);
		unk_0x452FE41DB35A74AC(iParam0, iParam5);
		*uParam1 = unk_0xB29DC5E54F9743D9(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xCE3CB618AFE55EFB(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x570128B7829A8EAA(*uParam1, iParam8);
				}
				if (!unk_0x429D45A6C6520026(sParam7))
				{
					unk_0x33442A50C05ADC38("STRING");
					if (bParam10)
					{
						unk_0xC327C023FDA37F2E(sParam7);
					}
					else
					{
						unk_0x4FDA9E6EF359F8A9(sParam7);
					}
					unk_0x8367CB7109A3AFAA(*uParam1);
				}
				unk_0xAD8FB9E563A1FF80(*uParam1, 7);
			}
		}
		if (!unk_0x05EFB6A616B6FADE(uParam1->f_6, 2))
		{
			if (unk_0xCE3CB618AFE55EFB(*uParam1))
			{
				unk_0x2BCFB39E86340DAA(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x5D7DFE2058701942(iParam0, 0))
		{
			uParam1->f_1 = unk_0xB151F9CBE90FEA24(iParam0);
			if (!unk_0x05EFB6A616B6FADE(uParam1->f_6, 3))
			{
				if (unk_0xCE3CB618AFE55EFB(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x570128B7829A8EAA(uParam1->f_1, iParam8);
					}
					if (!unk_0x429D45A6C6520026(sParam7))
					{
						unk_0x33442A50C05ADC38("STRING");
						if (bParam10)
						{
							unk_0xC327C023FDA37F2E(sParam7);
						}
						else
						{
							unk_0x4FDA9E6EF359F8A9(sParam7);
						}
						unk_0x8367CB7109A3AFAA(uParam1->f_1);
					}
					unk_0xAD8FB9E563A1FF80(uParam1->f_1, 7);
					unk_0x2BCFB39E86340DAA(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xCE3CB618AFE55EFB(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0xFA57C719261AA55D(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xCE3CB618AFE55EFB(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xFA57C719261AA55D(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_358()
{
	return Global_1312834;
}

int func_359(var uParam0)
{
	if (unk_0x8F01F94322569B77(uParam0))
	{
		return 1;
	}
	if (func_360(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_360(var uParam0)
{
	if (!unk_0x45F99485D7E1C29A())
	{
		return 0;
	}
	if (!unk_0xAABBF7FA3E338B30(uParam0))
	{
		return 0;
	}
	if (func_361(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_361(var uParam0)
{
	if (unk_0x83A1DA4E6C55E952(uParam0))
	{
		unk_0xEDB53D3BCBFC886E(uParam0);
		return unk_0xABF0452BE64AD290(uParam0);
	}
	return 0;
}

int func_362()
{
	return Local_103.f_1;
}

int func_363(int iParam0)
{
	return vLocal_108[iParam0 /*3*/].f_1;
}

void func_364()
{
	func_53();
	func_335(11, 0);
	func_197(12, 116);
	unk_0xFA57C719261AA55D(&(Global_2437022.f_3747), 0);
	unk_0xFA57C719261AA55D(&(Global_2437022.f_3747), 1);
	if (unk_0x4C9BACA8D249CB13())
	{
		if (unk_0xD60943E3BE730BF0() > -1)
		{
			vLocal_108[unk_0xD60943E3BE730BF0() /*3*/] = 0;
		}
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		if (unk_0x45F99485D7E1C29A())
		{
			if (unk_0xE096BA59686F5196(Local_103.f_3))
			{
				unk_0x48A79E9BC4B8617A(Local_103.f_3);
			}
			Local_103.f_3 = -1;
		}
	}
	if (unk_0xCE3CB618AFE55EFB(Global_1654518))
	{
		unk_0xE1623437A3194332(&Global_1654518);
	}
	unk_0xFA57C719261AA55D(&iLocal_111, 3);
	unk_0xFA57C719261AA55D(&iLocal_111, 4);
	iLocal_110 = 0;
	if (unk_0xCE3CB618AFE55EFB(Local_123))
	{
		unk_0xE1623437A3194332(&Local_123);
	}
	func_365();
}

void func_365()
{
	unk_0x8F1A9FE6D91AAFEB();
}

int func_366(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xC77FA683E9BB485B(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x58E3CCF930D23BD5(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437022.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_367()
{
	var uVar0;
	
	func_374(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			return 1;
		}
	}
	if (func_373())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_372())
	{
		return 1;
	}
	if (func_371(157))
	{
		if (!func_370())
		{
			return 1;
		}
	}
	if (func_371(155))
	{
		return 1;
	}
	if (!unk_0x18F86E07E41D913F())
	{
		return 1;
	}
	if (func_368() != 0)
	{
		if (unk_0x8B1574454E8C2421(func_368()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_368()
{
	switch (func_369())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_369()
{
	return Global_25459;
}

bool func_370()
{
	return Global_2448386.f_587;
}

int func_371(int iParam0)
{
	if (unk_0xF10AFD11E6EE81BF(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_372()
{
	return Global_2458191;
}

bool func_373()
{
	return Global_2448386.f_582;
}

void func_374(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5D7B2A77420FF19E(1))
	{
		iVar1 = unk_0x5712B9353A8F6573(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x8866A4E42CDA3EF1(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -563286670:
					func_375(iVar0);
					break;
				
				case 566035618:
					unk_0x8866A4E42CDA3EF1(1, iVar0, &vVar3, 4);
					if (vVar3.z == -1989728150)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_375(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x8866A4E42CDA3EF1(1, iParam0, &vVar0, 3))
	{
		if (func_366(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xEE978C39384D834F(vVar0.y);
			if (unk_0xDC5D81351D6A4DDB(iVar1))
			{
				if (unk_0x5D7DFE2058701942(iVar1, 0))
				{
					iVar2 = unk_0xCAEB6CE71A2C7212(iVar1, 0);
					if (unk_0xEB1A41F6F719807C(iVar2, vVar0.z) && unk_0xB592B7A61F21E7A5())
					{
						if (func_376(iVar2, &bVar3))
						{
							unk_0x3D2495030621765B(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x792676988A48387F(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_376(int iParam0, var uParam1)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (!unk_0x4943BEEC19289B8E(iParam0))
		{
			if (unk_0xCC01DCC72D8B9E39(iParam0))
			{
				if (!unk_0x289FBFAD3E416C48(unk_0x8F474E419F56E48D(iParam0)))
				{
					unk_0x1F7948851FB36E88(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x82384F63D814C864(iParam0, 0))
		{
			if (unk_0xB540EEBB14C48518(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_377()
{
	wait(0);
}

void func_378(struct<21> Param0)
{
	func_381(func_382(Param0), Param0);
	func_380(0, -1, 0);
	unk_0xF82A3961787FA0A4(&Local_103, 23);
	unk_0x8BFA7A7AB1D02137(&vLocal_108, 97);
	unk_0x2F3193E06C2EFF44(0);
	if (!func_379())
	{
		func_364();
	}
	unk_0x2BCFB39E86340DAA(&(Global_2437022.f_3747), 0);
	unk_0xFA57C719261AA55D(&(Global_2437022.f_3747), 1);
}

int func_379()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x4C9BACA8D249CB13())
		{
			return 0;
		}
		if (unk_0x9657A511FBAA9216())
		{
			return 1;
		}
		if (func_373())
		{
			return 0;
		}
		if (func_371(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

int func_380(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBF19BA6420EC428C();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_365();
			}
			else
			{
				return 0;
			}
		}
		if (!func_358())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x4C9BACA8D249CB13())
				{
					if (!bParam2)
					{
						func_365();
					}
					else
					{
						return 0;
					}
				}
				if (func_373())
				{
					if (!bParam2)
					{
						func_365();
					}
					else
					{
						return 0;
					}
				}
				if (func_371(155))
				{
					if (!bParam2)
					{
						func_365();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xB3ADBAEA60664F46())
			{
				if (!bParam2)
				{
					func_365();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = unk_0xBF19BA6420EC428C();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			if (!bParam2)
			{
				func_365();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xB3ADBAEA60664F46())
	{
		if (!bParam2)
		{
			func_365();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_381(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		func_365();
	}
	unk_0x1B0D16DC60698F88(iParam0, 0, Param1.f_16);
}

int func_382(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 131:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 2;
		
		case 147:
			return 1;
		
		case 143:
			return 2;
		
		case 144:
			return 4;
		
		case 145:
			return 2;
		
		case 146:
			return 2;
		
		case 128:
			return 1;
		
		case 148:
			return 2;
		
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
			return 0;
		
		case 158:
			return 1;
		
		case 155:
			return 4;
		
		case 156:
			return 16;
		
		case 157:
			return 32;
		
		default:
	}
	return 0;
}

