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
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
	var uLocal_84 = 0;
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
	struct<73> Local_103 = { 0, 0, 3, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1101004800, 0 } ;
	struct<10> Local_104[32];
	struct<54> Local_105 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0 } ;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	char* sLocal_109 = NULL;
	int iLocal_110 = 0;
	vector3 vLocal_111 = { 0f, 0f, 0f };
	vector3 vLocal_112 = { 0f, 0f, 0f };
	float fLocal_113 = 0f;
	int iLocal_114 = 0;
	vector3 vLocal_115 = { 0f, 0f, 0f };
	vector3 vLocal_116 = { 0f, 0f, 0f };
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	vector3 vLocal_127 = { 0f, 0f, 0f };
	float fLocal_128 = 0f;
	vector3 vLocal_129 = { 0f, 0f, 0f };
	float fLocal_130 = 0f;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	vector3 vLocal_143 = { 0f, 0f, 0f };
	vector3 vLocal_144 = { 0f, 0f, 0f };
	vector3 vLocal_145 = { 0f, 0f, 0f };
	vector3 vLocal_146 = { 0f, 0f, 0f };
	float fLocal_147 = 0f;
	vector3 vLocal_148 = { 0f, 0f, 0f };
	vector3 vLocal_149 = { 0f, 0f, 0f };
	float fLocal_150 = 0f;
	var uLocal_151 = 16;
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
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	int iLocal_316[5] = { 0, 0, 0, 0, 0 };
	int iLocal_317[5] = { 0, 0, 0, 0, 0 };
	float fLocal_318 = 0f;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	vector3 vLocal_342 = { 0f, 0f, 0f };
	struct<21> Local_343 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_110 = joaat("mp_m_shopkeep_01");
	iLocal_114 = -1;
	iLocal_117 = -1;
	iLocal_131 = 303280717;
	iLocal_132 = round(Global_262145.f_2421);
	iLocal_133 = round(Global_262145.f_2417) + 1;
	iLocal_134 = 1;
	if (unk_0x4C9BACA8D249CB13())
	{
		if (!func_437(ScriptParam_343))
		{
			func_432();
		}
		if (func_431(1))
		{
			func_423(unk_0xD4E735F4B6A956AC(), 0, 98816);
		}
	}
	while (true)
	{
		func_422();
		if (func_412())
		{
			func_432();
		}
		func_410();
		if (unk_0x05EFB6A616B6FADE(Local_103.f_23, 6))
		{
			if (func_431(1))
			{
				func_423(unk_0xD4E735F4B6A956AC(), 1, 0);
				func_407();
				unk_0xFA57C719261AA55D(&(Local_105.f_53), 7);
				func_406();
			}
		}
		switch (func_405(unk_0xD60943E3BE730BF0()))
		{
			case 0:
				unk_0x6D68030C791111E0("mp_am_hold_up");
				if (unk_0x39C2D9AB77873F84("mp_am_hold_up"))
				{
					if (func_395())
					{
						unk_0x8000C77B5F336760(func_394(Local_105), 0);
						if (unk_0x83A1DA4E6C55E952(Local_103))
						{
							if (func_393() > 0)
							{
								if (!func_392(Local_103))
								{
									func_391(&uLocal_151, 3, unk_0x8A5B683BACF7B78C(Local_103), &(Local_103.f_46), 1, 0);
									func_390();
								}
								unk_0x2BCFB39E86340DAA(&(Local_105.f_52), 22);
								Local_104[unk_0xD60943E3BE730BF0() /*10*/].f_4 = 2;
							}
						}
					}
				}
				if (func_393() == 6)
				{
					Local_104[unk_0xD60943E3BE730BF0() /*10*/].f_4 = 5;
				}
				break;
			
			case 2:
				func_266(&Local_105, vLocal_115, vLocal_116, &Local_103, &(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), unk_0x54F6F5A823224519(unk_0x8A5B683BACF7B78C(Local_103), vLocal_148, vLocal_149, fLocal_150, 0, 1, 0), 0);
				func_259();
				if (func_393() == 2)
				{
					func_133();
				}
				else if (func_393() == 6)
				{
					Local_104[unk_0xD60943E3BE730BF0() /*10*/].f_4 = 5;
				}
				if (!unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_144, 30f, 30f, 30f, 0, 1, 0))
				{
					Local_104[unk_0xD60943E3BE730BF0() /*10*/].f_4 = 6;
				}
				break;
			
			case 5:
				func_132(&(Local_103.f_69));
				if (func_131(&(Local_103.f_69)))
				{
					Local_104[unk_0xD60943E3BE730BF0() /*10*/].f_4 = 6;
				}
				break;
			
			case 4:
				Local_104[unk_0xD60943E3BE730BF0() /*10*/].f_4 = 6;
			
			case 6:
				func_51();
				func_432();
				break;
		}
		if (unk_0x45F99485D7E1C29A())
		{
			switch (func_393())
			{
				case 0:
					if (!unk_0x05EFB6A616B6FADE(Local_105.f_52, 16))
					{
						func_49(func_50(0));
						func_49(func_50(1));
						func_49(func_50(2));
						unk_0x6D68030C791111E0("mp_am_hold_up");
						if (unk_0x39C2D9AB77873F84("mp_am_hold_up"))
						{
							if (func_395())
							{
								unk_0xFDD15D670AD33E10(vLocal_115, 1.5f, 0, 1, 0, true);
								unk_0xFDD15D670AD33E10(vLocal_112, 1.5f, 0, 1, 0, true);
								unk_0x2BCFB39E86340DAA(&(Local_105.f_52), 16);
							}
						}
					}
					else if (func_47())
					{
						Local_103.f_12 = 2;
					}
					break;
				
				case 2:
					func_46();
					func_43();
					func_28();
					func_27();
					func_20();
					func_19();
					func_11();
					func_10();
					if (func_4())
					{
						func_1();
						Local_103.f_12 = 6;
					}
					break;
				
				case 6:
					func_1();
					break;
				}
		}
	}
}

void func_1()
{
	if (unk_0x83A1DA4E6C55E952(Local_103.f_13))
	{
		if (func_3(Local_103.f_13))
		{
			if (unk_0xF797E4DD45066C88(unk_0xEA0B19D3958DA45D(Local_103.f_13)))
			{
				unk_0xF334C9B245CD323D(unk_0xEA0B19D3958DA45D(Local_103.f_13), 1, 1);
				func_2(&(Local_103.f_13));
			}
		}
	}
}

void func_2(var uParam0)
{
	int iVar0;
	
	if (unk_0xAABBF7FA3E338B30(*uParam0))
	{
		iVar0 = unk_0x1C3E3FC5D339FC8C(*uParam0);
		unk_0x69C8D2CAA0701F42(&iVar0);
	}
}

int func_3(var uParam0)
{
	if (unk_0x83A1DA4E6C55E952(uParam0))
	{
		unk_0xEDB53D3BCBFC886E(uParam0);
		return unk_0xABF0452BE64AD290(uParam0);
	}
	return 0;
}

int func_4()
{
	if (func_5())
	{
		return 1;
	}
	return 0;
}

int func_5()
{
	if (unk_0x05EFB6A616B6FADE(Local_103.f_23, 2))
	{
		return 1;
	}
	if (unk_0x05EFB6A616B6FADE(Local_103.f_23, 3))
	{
		return 1;
	}
	if (!func_9())
	{
		if ((unk_0x05EFB6A616B6FADE(Local_103.f_23, 11) || unk_0x05EFB6A616B6FADE(Local_103.f_23, 19)) || (unk_0x05EFB6A616B6FADE(Local_103.f_23, 9) && !unk_0x05EFB6A616B6FADE(Local_103.f_23, 20)))
		{
			func_6(Local_105.f_50, 1, func_7());
			return 1;
		}
		if (unk_0x05EFB6A616B6FADE(Local_103.f_23, 18))
		{
			func_6(Local_105.f_50, 1, func_7());
			return 1;
		}
	}
	if (unk_0x05EFB6A616B6FADE(Local_103.f_23, 18))
	{
		if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 7))
		{
			func_6(Local_105.f_50, 1, func_7());
			unk_0x2BCFB39E86340DAA(&(Local_103.f_24), 7);
		}
	}
	return 0;
}

void func_6(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0 = -1706176509;
	Var0.f_1 = unk_0xD4E735F4B6A956AC();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		unk_0x04F37AFC39D93909(1, &Var0, 4, iParam2);
	}
}

int func_7()
{
	return func_8(unk_0x8A9029ED8BCBFA86("freemode", -1, 0));
}

int func_8(int iParam0)
{
	var uVar0;
	
	unk_0x2BCFB39E86340DAA(&uVar0, iParam0);
	return uVar0;
}

int func_9()
{
	if ((unk_0x05EFB6A616B6FADE(Local_103.f_23, 13) || unk_0x05EFB6A616B6FADE(Local_103.f_23, 27)) || unk_0x05EFB6A616B6FADE(Local_103.f_23, 28))
	{
		return 1;
	}
	return 0;
}

void func_10()
{
	var uVar0;
	
	if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 21))
	{
		if (func_392(Local_103))
		{
			Local_103.f_72 = unk_0xE425570A0FBF8517(Local_103, &uVar0);
			unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 21);
		}
	}
	if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 19))
	{
		if (unk_0x05EFB6A616B6FADE(Local_103.f_23, 10) && Local_103.f_37 <= 0f)
		{
			unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 19);
		}
	}
	if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 17))
	{
		if (unk_0x05EFB6A616B6FADE(Local_103.f_23, 20))
		{
			if (func_3(Local_103.f_13))
			{
				unk_0xB3B23099FB6384A0(unk_0xEA0B19D3958DA45D(Local_103.f_13), 0, 0);
				unk_0x2BCFB39E86340DAA(&(Local_103.f_24), 17);
			}
		}
	}
	if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 6))
	{
		if (Global_2524719.f_8 == 1)
		{
			unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 6);
			unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 16);
		}
	}
}

int func_11()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x45F99485D7E1C29A() || !unk_0x05EFB6A616B6FADE(Local_103.f_25, 0))
	{
		return 0;
	}
	if (Local_103.f_66 != 6)
	{
		if (Local_103.f_66 > 0 && func_392(Local_103.f_15))
		{
			Local_103.f_66 = 6;
			return 0;
		}
		switch (Local_103.f_66)
		{
			case 0:
				if (!func_17(&uLocal_331, 10000, 0))
				{
					iVar0 = unk_0x0EF06F8835DF897A(vLocal_148, 20f, 20f, 20f, -1);
					if (!unk_0x4915F4759304D5CF(iVar0))
					{
						if (!unk_0x4943BEEC19289B8E(iVar0))
						{
							iVar1 = unk_0x8F474E419F56E48D(iVar0);
							if (((((((iVar1 != joaat("mp_m_freemode_01") && iVar1 != joaat("mp_f_freemode_01")) && !unk_0x7394AC2F67EAA91C(vLocal_148, 25f, 25f, 25f)) && !unk_0xA60C975CBAB69F34(iVar0, vLocal_143, 1f, 1f, 2f, 0, 1, 0)) && !unk_0x852B8F739A2072BE(iVar0, 7)) && !unk_0x5D7DFE2058701942(iVar0, 1)) && unk_0x1CD7BDCAD03C3774(iVar0)) && func_16(iVar1))
							{
								unk_0x39926DD5354848E1(iVar0);
								if (unk_0xB540EEBB14C48518(iVar0))
								{
									if (func_15(&(Local_103.f_15), iVar0, 1, 0))
									{
										unk_0xD66FF6E7D7FCE47A(unk_0x8A5B683BACF7B78C(Local_103.f_15), joaat("weapon_pistol"), 25000, 0);
										unk_0xD738221C247C8B71(unk_0x8A5B683BACF7B78C(Local_103.f_15), 1);
										Local_103.f_66 = 1;
										unk_0x2BCFB39E86340DAA(&(Local_103.f_25), 1);
										unk_0xDFA901280292A2FB(unk_0x8A5B683BACF7B78C(Local_103.f_15), Global_1574986);
										unk_0x8AA21BBDA4DB2C4F(unk_0x8A5B683BACF7B78C(Local_103.f_15), 2);
										unk_0x6259CDB47862A4F3(unk_0x8A5B683BACF7B78C(Local_103.f_15), round((200f * Global_262145.f_153)), 0);
										func_391(&uLocal_151, 4, unk_0x8A5B683BACF7B78C(Local_103.f_15), "StoreHero", 1, 0);
										unk_0x0EEB301CAA50A123(unk_0x8A5B683BACF7B78C(Local_103.f_15), func_14(), 0, 1);
									}
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if ((unk_0x05EFB6A616B6FADE(Local_103.f_23, 9) || unk_0x05EFB6A616B6FADE(Local_103.f_23, 5)) || unk_0x05EFB6A616B6FADE(Local_103.f_23, 4))
				{
					Local_103.f_66 = 2;
				}
				break;
			
			case 2:
				if (func_17(&(Local_103.f_67), 3000, 0) || (unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103.f_15), 1227113341) != 0 && unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103.f_15), 1227113341) != 1))
				{
					func_13(&(Local_103.f_67));
					Local_103.f_66 = 3;
				}
				break;
			
			case 3:
				if (((unk_0x05EFB6A616B6FADE(Local_103.f_23, 5) || unk_0x05EFB6A616B6FADE(Local_103.f_25, 8)) || unk_0x05EFB6A616B6FADE(Local_103.f_25, 9)) || func_17(&(Local_103.f_67), 5000, 0))
				{
					if (func_12() || func_17(&(Local_103.f_67), 5000, 0))
					{
						Local_103.f_66 = 4;
					}
					else
					{
						Local_103.f_66 = 5;
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
			}
	}
	return 1;
}

int func_12()
{
	if (unk_0x05EFB6A616B6FADE(unk_0x22C775856F4633CA(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_13(var uParam0)
{
	uParam0->f_1 = 0;
}

char* func_14()
{
	int iVar0;
	
	iVar0 = unk_0x22C775856F4633CA(0, 100);
	if (iVar0 < 30)
	{
		return "WORLD_HUMAN_SMOKING";
	}
	if (iVar0 >= 30 && iVar0 < 70)
	{
		return "WORLD_HUMAN_HANG_OUT_STREET";
	}
	return "WORLD_HUMAN_STAND_MOBILE";
}

int func_15(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	unk_0x1F7948851FB36E88(iParam1, bParam2, iParam3);
	*uParam0 = unk_0xF1764ACD94FCB3A3(iParam1);
	if (unk_0x83A1DA4E6C55E952(*uParam0))
	{
		if (bParam2)
		{
			unk_0x2F16A8714FE53E5C(*uParam0, 1);
		}
		return 1;
	}
	return 0;
}

int func_16(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01"))
	{
		return 0;
	}
	return 1;
}

int func_17(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_18(uParam0, bParam2, 0);
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

void func_18(var uParam0, bool bParam1, bool bParam2)
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

void func_19()
{
	if (Local_103.f_30 == 0)
	{
		if (Local_103.f_3 >= 2 && Local_103.f_3 != 9)
		{
			Local_103.f_30 = unk_0x76A5924E0E48B68E(99, unk_0xA19140A5C42D8715(), 60000f);
		}
	}
}

void func_20()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!unk_0x05EFB6A616B6FADE(Local_103.f_1, 5))
	{
		if (Local_103.f_41 > 0)
		{
			func_24();
			if (!unk_0x05EFB6A616B6FADE(Local_103.f_1, 5))
			{
				return;
			}
		}
	}
	if (unk_0x05EFB6A616B6FADE(Local_103.f_1, 1))
	{
		if (Local_103.f_2 == 3 && !unk_0x05EFB6A616B6FADE(Local_103.f_23, 9))
		{
			Local_103.f_2 = 0;
		}
		unk_0xFA57C719261AA55D(&(Local_103.f_1), 1);
	}
	switch (Local_103.f_2)
	{
		case 0:
			if ((((func_3(Local_103) && !func_392(Local_103)) && func_3(Local_103.f_16[Local_103.f_26])) && Local_103.f_3 != 8) && Local_103.f_3 != 7)
			{
				if (!unk_0x685AE6AF34B35D3B(unk_0x8A5B683BACF7B78C(Local_103)))
				{
					if (unk_0x05EFB6A616B6FADE(Local_103.f_23, 9) || unk_0x05EFB6A616B6FADE(Local_103.f_1, 4))
					{
						Local_103.f_2 = 2;
						return;
					}
					if (!iLocal_108)
					{
						unk_0x47D73A216DD513C8(unk_0x8A5B683BACF7B78C(Local_103), Local_103.f_42, 1600);
						iLocal_108 = 1;
					}
					if (func_17(&uLocal_321, 100, 0))
					{
						fVar0 = unk_0x552C823E1D2A019C(unk_0x8A5B683BACF7B78C(Local_103));
						fVar1 = (Local_103.f_42 - 10f);
						fVar2 = (Local_103.f_42 + 10f);
						if (fVar1 < 0f)
						{
							fVar2 = ((Local_103.f_42 - 10f) + 360f);
							fVar1 = ((Local_103.f_42 + 10f) + 360f);
						}
						else if (fVar2 >= 360f)
						{
							fVar2 = ((Local_103.f_42 - 10f) - 360f);
							fVar1 = ((Local_103.f_42 + 10f) - 360f);
						}
						if (((fVar0 < fVar2 && fVar0 > fVar1) && func_17(&uLocal_327, 1000, 0)) || func_17(&uLocal_327, 3125, 0))
						{
							unk_0x3F29BBC16DCB8A23(unk_0x8A5B683BACF7B78C(Local_103));
							Local_103.f_27 = unk_0xDFA309EC878D6A65(unk_0x3201284584C7CD83(unk_0x8A5B683BACF7B78C(Local_103), -0.65f, 0.87f, -0.02f), vLocal_116, 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0xEA3AB11BD7C55DFF(unk_0x8A5B683BACF7B78C(Local_103), Local_103.f_27, "mp_am_hold_up", func_23(Local_103.f_26), 1.5f, -1.5f, 157, 16, 1148846080, 0);
							if (unk_0x83A1DA4E6C55E952(Local_103.f_16[Local_103.f_26]))
							{
								unk_0x7C73A424F1117528(unk_0xEA0B19D3958DA45D(Local_103.f_16[Local_103.f_26]), true, 0);
								unk_0xA6636C645C0B55CA(unk_0xEA0B19D3958DA45D(Local_103.f_16[Local_103.f_26]), Local_103.f_27, "mp_am_hold_up", func_22(Local_103.f_26), 4f, -4f, 8);
							}
							unk_0x5A466A920BB5D382(Local_103.f_27);
							Local_103.f_2 = 1;
							iLocal_117 = unk_0x2B3422BC14FE3213(Local_103.f_27);
						}
					}
				}
			}
			break;
		
		case 1:
			if (unk_0x05EFB6A616B6FADE(Local_103.f_23, 9) || unk_0x05EFB6A616B6FADE(Local_103.f_1, 4))
			{
				iLocal_117 = unk_0x2B3422BC14FE3213(Local_103.f_27);
				if (unk_0xFE5DE0C3200E00F2(iLocal_117))
				{
					unk_0xE501D670D61ECB65(Local_103.f_27);
				}
				Local_103.f_2 = 2;
				return;
			}
			if (iLocal_117 >= 0)
			{
				if (unk_0xFE5DE0C3200E00F2(iLocal_117) || func_17(&uLocal_323, 2000, 0))
				{
					if ((unk_0xFE5DE0C3200E00F2(iLocal_117) && unk_0x33CECDD9E141E18E(iLocal_117) == 1f) || func_17(&uLocal_323, 2000, 0))
					{
						if ((func_3(Local_103) && !func_392(Local_103)) && !unk_0x05EFB6A616B6FADE(Local_103.f_23, 9))
						{
							unk_0x9568B1B58F78FF36(unk_0x8A5B683BACF7B78C(Local_103));
						}
						unk_0xE501D670D61ECB65(Local_103.f_27);
						Local_103.f_2 = 2;
					}
				}
			}
			else
			{
				iLocal_117 = unk_0x2B3422BC14FE3213(Local_103.f_27);
			}
			break;
		
		case 2:
			func_3(Local_103.f_16[Local_103.f_26]);
			if (func_17(&uLocal_329, 1000, 0) && func_3(Local_103.f_16[Local_103.f_26]))
			{
				if (unk_0xDC5D81351D6A4DDB(unk_0xEA0B19D3958DA45D(Local_103.f_16[Local_103.f_26])))
				{
					unk_0x7C73A424F1117528(unk_0xEA0B19D3958DA45D(Local_103.f_16[Local_103.f_26]), false, 0);
					unk_0xB29E08C7AB729BAD(unk_0xEA0B19D3958DA45D(Local_103.f_16[Local_103.f_26]), true);
					unk_0x4299736016AECE26(unk_0xEA0B19D3958DA45D(Local_103.f_16[Local_103.f_26]), func_21(Local_103.f_26), 1, 0, 0, 1);
				}
				iLocal_117 = -1;
				iLocal_108 = 0;
				if (unk_0x05EFB6A616B6FADE(Local_103.f_1, 4))
				{
					unk_0xFA57C719261AA55D(&(Local_103.f_1), 4);
				}
				func_13(&uLocal_329);
				func_13(&uLocal_323);
				func_13(&uLocal_321);
				func_13(&uLocal_327);
				Local_103.f_2 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

Vector3 func_21(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return vLocal_129 - Vector(1f, 0.2f, 0.1f);
		
		case 1:
			return vLocal_129 - Vector(1f, 0.2f, 0f);
		
		case 2:
			return vLocal_129 - Vector(1f, 0.2f, -0.1f);
		
		case 4:
			return vLocal_129 - Vector(1f, -0.2f, 0.1f);
		
		case 0:
			return vLocal_129 - Vector(1f, -0.2f, 0f);
		
		case 5:
			return vLocal_129 - Vector(1f, -0.2f, -0.1f);
		
		default:
	}
	return vLocal_129 - Vector(1f, 0f, -0.1f);
}

char* func_22(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar";
		
		case 1:
			return "purchase_chocbar";
		
		case 2:
			return "purchase_chocbar";
		
		case 4:
			return "purchase_cigarette";
		
		case 0:
			return "purchase_beer";
		
		case 5:
			return "purchase_energydrink";
		
		default:
	}
	return "purchase_energydrink";
}

char* func_23(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar_shopkeeper";
		
		case 1:
			return "purchase_chocbar_shopkeeper";
		
		case 2:
			return "purchase_chocbar_shopkeeper";
		
		case 4:
			return "purchase_cigarette_shopkeeper";
		
		case 0:
			return "purchase_beer_shopkeeper";
		
		case 5:
			return "purchase_energydrink_shopkeeper";
		
		default:
	}
	return "purchase_energydrink_shopkeeper";
}

int func_24()
{
	if (((((!unk_0x83A1DA4E6C55E952(Local_103.f_16[3]) || !unk_0x83A1DA4E6C55E952(Local_103.f_16[1])) || !unk_0x83A1DA4E6C55E952(Local_103.f_16[2])) || !unk_0x83A1DA4E6C55E952(Local_103.f_16[4])) || !unk_0x83A1DA4E6C55E952(Local_103.f_16[0])) || !unk_0x83A1DA4E6C55E952(Local_103.f_16[5]))
	{
		if (((((func_49(func_26(3)) && func_49(func_26(1))) && func_49(func_26(2))) && func_49(func_26(4))) && func_49(func_26(0))) && func_49(func_26(5)))
		{
			if (unk_0x36DEA7E26CBAB441(0, 0, 6, 0))
			{
				if (!unk_0x83A1DA4E6C55E952(Local_103.f_16[3]))
				{
					if (func_25(&(Local_103.f_16[3]), func_26(3), func_21(3), 1, 1, 0, 1, 0))
					{
						unk_0xAF41F12C925CC0DB(unk_0xEA0B19D3958DA45D(Local_103.f_16[3]), unk_0x988A25F5907E93F0(vLocal_111));
						unk_0xB29E08C7AB729BAD(unk_0xEA0B19D3958DA45D(Local_103.f_16[3]), true);
						unk_0x7C73A424F1117528(unk_0xEA0B19D3958DA45D(Local_103.f_16[3]), false, 0);
					}
				}
				if (!unk_0x83A1DA4E6C55E952(Local_103.f_16[1]))
				{
					if (func_25(&(Local_103.f_16[1]), func_26(1), func_21(1), 1, 1, 0, 1, 0))
					{
						unk_0xAF41F12C925CC0DB(unk_0xEA0B19D3958DA45D(Local_103.f_16[1]), unk_0x988A25F5907E93F0(vLocal_111));
						unk_0xB29E08C7AB729BAD(unk_0xEA0B19D3958DA45D(Local_103.f_16[1]), true);
						unk_0x7C73A424F1117528(unk_0xEA0B19D3958DA45D(Local_103.f_16[1]), false, 0);
					}
				}
				if (!unk_0x83A1DA4E6C55E952(Local_103.f_16[2]))
				{
					if (func_25(&(Local_103.f_16[2]), func_26(2), func_21(2), 1, 1, 0, 1, 0))
					{
						unk_0xAF41F12C925CC0DB(unk_0xEA0B19D3958DA45D(Local_103.f_16[2]), unk_0x988A25F5907E93F0(vLocal_111));
						unk_0xB29E08C7AB729BAD(unk_0xEA0B19D3958DA45D(Local_103.f_16[2]), true);
						unk_0x7C73A424F1117528(unk_0xEA0B19D3958DA45D(Local_103.f_16[2]), false, 0);
					}
				}
				if (!unk_0x83A1DA4E6C55E952(Local_103.f_16[4]))
				{
					if (func_25(&(Local_103.f_16[4]), func_26(4), func_21(4), 1, 1, 0, 1, 0))
					{
						unk_0xAF41F12C925CC0DB(unk_0xEA0B19D3958DA45D(Local_103.f_16[4]), unk_0x988A25F5907E93F0(vLocal_111));
						unk_0xB29E08C7AB729BAD(unk_0xEA0B19D3958DA45D(Local_103.f_16[4]), true);
						unk_0x7C73A424F1117528(unk_0xEA0B19D3958DA45D(Local_103.f_16[4]), false, 0);
					}
				}
				if (!unk_0x83A1DA4E6C55E952(Local_103.f_16[0]))
				{
					if (func_25(&(Local_103.f_16[0]), func_26(0), func_21(0), 1, 1, 0, 1, 0))
					{
						unk_0xAF41F12C925CC0DB(unk_0xEA0B19D3958DA45D(Local_103.f_16[0]), unk_0x988A25F5907E93F0(vLocal_111));
						unk_0xB29E08C7AB729BAD(unk_0xEA0B19D3958DA45D(Local_103.f_16[0]), true);
						unk_0x7C73A424F1117528(unk_0xEA0B19D3958DA45D(Local_103.f_16[0]), false, 0);
					}
				}
				if (!unk_0x83A1DA4E6C55E952(Local_103.f_16[5]))
				{
					if (func_25(&(Local_103.f_16[5]), func_26(5), func_21(5), 1, 1, 0, 1, 0))
					{
						unk_0xAF41F12C925CC0DB(unk_0xEA0B19D3958DA45D(Local_103.f_16[5]), unk_0x988A25F5907E93F0(vLocal_111));
						unk_0xB29E08C7AB729BAD(unk_0xEA0B19D3958DA45D(Local_103.f_16[5]), true);
						unk_0x7C73A424F1117528(unk_0xEA0B19D3958DA45D(Local_103.f_16[5]), false, 0);
					}
				}
			}
		}
	}
	else
	{
		unk_0x2BCFB39E86340DAA(&(Local_103.f_1), 5);
		return 1;
	}
	return 0;
}

int func_25(var uParam0, int iParam1, vector3 vParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (!unk_0x848676C5BE0721E5(1))
	{
		return 0;
	}
	if (bParam7)
	{
		*uParam0 = unk_0x457447BBA7BDCC28(unk_0xDAD26B7BC6DCE4C1(iParam1, vParam2, iParam4, bParam3, iParam5));
	}
	else
	{
		*uParam0 = unk_0x457447BBA7BDCC28(unk_0xFCFC8CC5FF74580D(iParam1, vParam2, iParam4, bParam3, iParam5));
	}
	if (unk_0x83A1DA4E6C55E952(*uParam0))
	{
		unk_0xEAF1F3E17588C851(unk_0xEA0B19D3958DA45D(*uParam0), iParam6);
		if (unk_0xCC1BBE3267AB0DC9(unk_0xEA0B19D3958DA45D(*uParam0)))
		{
			if (bParam3)
			{
				unk_0x2F16A8714FE53E5C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return joaat("prop_choc_pq");
		
		case 1:
			return joaat("prop_choc_ego");
		
		case 2:
			return joaat("prop_choc_meto");
		
		case 4:
			return joaat("prop_ld_fags_01");
		
		case 0:
			return joaat("prop_ecola_can");
		
		case 5:
			return joaat("prop_amb_beer_bottle");
		
		default:
	}
	return joaat("prop_choc_pq");
}

void func_27()
{
	float fVar0;
	
	if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 9))
	{
		if (Global_2524719.f_8 == 1 || unk_0x05EFB6A616B6FADE(Local_103.f_23, 6))
		{
			if ((((func_3(Local_103.f_13) && func_3(Local_103)) && !func_392(Local_103)) && Local_103.f_3 != 8) && Local_103.f_3 != 7)
			{
				if (!unk_0x685AE6AF34B35D3B(unk_0x8A5B683BACF7B78C(Local_103)))
				{
					if (!unk_0x05EFB6A616B6FADE(Local_105.f_52, 30))
					{
						unk_0x47D73A216DD513C8(unk_0x8A5B683BACF7B78C(Local_103), Local_103.f_42, 1600);
						unk_0x2BCFB39E86340DAA(&(Local_105.f_52), 30);
					}
					if (func_17(&uLocal_319, 100, 0))
					{
						fVar0 = unk_0x552C823E1D2A019C(unk_0x8A5B683BACF7B78C(Local_103));
						if ((fVar0 > (Local_103.f_42 - 20f) && fVar0 < (Local_103.f_42 + 20f)) || func_17(&uLocal_325, 1500, 0))
						{
							unk_0x3F29BBC16DCB8A23(unk_0x8A5B683BACF7B78C(Local_103));
							Local_103.f_29 = unk_0xDFA309EC878D6A65(vLocal_115, vLocal_116, 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0xEA3AB11BD7C55DFF(unk_0x8A5B683BACF7B78C(Local_103), Local_103.f_29, "mp_am_hold_up", "holdup_victim_20s", 4f, -1.5f, 157, 16, 1148846080, 0);
							if (unk_0x83A1DA4E6C55E952(Local_103.f_13))
							{
								unk_0xB29E08C7AB729BAD(unk_0xEA0B19D3958DA45D(Local_103.f_13), false);
								unk_0x9018100BC4DCB099(unk_0xEA0B19D3958DA45D(Local_103.f_13), 1);
								unk_0xA6636C645C0B55CA(unk_0xEA0B19D3958DA45D(Local_103.f_13), Local_103.f_29, "mp_am_hold_up", "holdup_victim_20s_bag", 4f, -4f, 137);
							}
							if (unk_0x83A1DA4E6C55E952(Local_103.f_14))
							{
								unk_0xA6636C645C0B55CA(unk_0xEA0B19D3958DA45D(Local_103.f_14), Local_103.f_29, "mp_am_hold_up", "holdup_victim_20s_till", 4f, -4f, 137);
							}
							unk_0x5A466A920BB5D382(Local_103.f_29);
							unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 9);
						}
					}
				}
				else
				{
					Local_103.f_3 = 8;
				}
			}
		}
	}
	else if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 17))
	{
		iLocal_114 = unk_0x2B3422BC14FE3213(Local_103.f_29);
		if (iLocal_114 >= 0)
		{
			func_3(Local_103);
			if (unk_0xFE5DE0C3200E00F2(iLocal_114))
			{
				unk_0x90683BECDF939A74(unk_0xA19140A5C42D8715(), 0, -1, 0);
				unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 17);
			}
		}
	}
	else if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 15))
	{
		iLocal_114 = unk_0x2B3422BC14FE3213(Local_103.f_29);
		if (iLocal_114 >= 0)
		{
			if (unk_0xFE5DE0C3200E00F2(iLocal_114))
			{
				func_3(Local_103);
				if ((unk_0x83A1DA4E6C55E952(Local_103.f_13) && func_3(Local_103.f_13)) && func_3(Local_103))
				{
					if (unk_0x33CECDD9E141E18E(iLocal_114) > 0.44f)
					{
						unk_0x7C73A424F1117528(unk_0xEA0B19D3958DA45D(Local_103.f_13), true, 0);
						unk_0xDCFB67537602326F(unk_0xEA0B19D3958DA45D(Local_103.f_13), true, 0);
						unk_0x2BCFB39E86340DAA(&(Local_103.f_24), 15);
					}
				}
			}
		}
	}
}

int func_28()
{
	int iVar0;
	float fVar1;
	
	if (!unk_0x45F99485D7E1C29A())
	{
		return 0;
	}
	func_41();
	if (Local_103.f_3 != 9)
	{
		if (func_392(Local_103))
		{
			Local_103.f_3 = 9;
			return 0;
		}
		if ((unk_0x05EFB6A616B6FADE(Local_103.f_23, 6) && !unk_0x05EFB6A616B6FADE(Local_103.f_23, 9)) && Local_103.f_3 < 8)
		{
			if (!unk_0x83A1DA4E6C55E952(Local_103.f_13) || !unk_0x83A1DA4E6C55E952(Local_103.f_14))
			{
				Local_103.f_3 = 8;
			}
		}
		switch (Local_103.f_3)
		{
			case 0:
				if (!func_392(Local_103))
				{
					Local_103.f_3 = 1;
				}
				break;
			
			case 1:
				if (unk_0x05EFB6A616B6FADE(Local_103.f_23, 4))
				{
					Local_103.f_3 = 2;
				}
				else if (unk_0x05EFB6A616B6FADE(Local_103.f_23, 6) || unk_0x05EFB6A616B6FADE(Local_103.f_23, 9))
				{
					Local_103.f_3 = 4;
				}
				else if (func_39() || func_33(0))
				{
					Local_103.f_3 = 8;
				}
				else if (func_31())
				{
					Local_103.f_3 = 7;
				}
				break;
			
			case 2:
				if (unk_0x05EFB6A616B6FADE(Local_103.f_23, 6) || unk_0x05EFB6A616B6FADE(Local_103.f_23, 9))
				{
					Local_103.f_3 = 4;
				}
				else if (func_39() || func_33(1))
				{
					Local_103.f_3 = 8;
				}
				else if (func_31())
				{
					Local_103.f_3 = 7;
				}
				break;
			
			case 3:
				if (unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103), 1920390111) != 0 && unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103), 1920390111) != 1)
				{
					Local_103.f_3 = 4;
				}
				else if (func_33(1))
				{
					Local_103.f_3 = 8;
				}
				else if (func_31())
				{
					Local_103.f_3 = 7;
				}
				break;
			
			case 4:
				if (unk_0x05EFB6A616B6FADE(Local_103.f_23, 17))
				{
					iVar0 = 0;
					iLocal_114 = unk_0x2B3422BC14FE3213(Local_103.f_29);
					if (iLocal_114 >= 0)
					{
						if (unk_0xFE5DE0C3200E00F2(iLocal_114))
						{
							if (unk_0x9809FE4B550B1EFE(vLocal_111, 3f, 0))
							{
								if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 25))
								{
									unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 25);
								}
								Local_103.f_33 = (Local_103.f_33 + 0.35f);
							}
							fVar1 = unk_0x33CECDD9E141E18E(iLocal_114);
							if (fVar1 >= 0.8f)
							{
								Local_103.f_37 = 1f;
							}
							else if (fVar1 <= 0.5f)
							{
								Local_103.f_37 = 0f;
							}
							else if (fVar1 > Local_103.f_37)
							{
								Local_103.f_37 = ((fVar1 - 0.5f) * 3.33f);
							}
							if (fVar1 >= 0.92f)
							{
								Local_103.f_37 = 1f;
								iVar0 = 1;
							}
						}
						else
						{
							iVar0 = 1;
						}
					}
					else
					{
						iVar0 = 1;
					}
					if (iVar0 == 1)
					{
						Local_103.f_3 = 6;
					}
					else if (func_33(1))
					{
						Local_103.f_3 = 8;
					}
					else if (func_31())
					{
						Local_103.f_3 = 7;
					}
				}
				break;
			
			case 5:
				if (func_39() || func_33(1))
				{
					Local_103.f_3 = 8;
				}
				break;
			
			case 6:
				func_29();
				if (func_39() || func_33(1))
				{
					Local_103.f_3 = 8;
				}
				else if (func_31())
				{
					Local_103.f_3 = 7;
				}
				else if (unk_0x05EFB6A616B6FADE(Local_103.f_24, 3))
				{
					if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 4))
					{
						Local_103.f_3 = 7;
					}
				}
				break;
			
			case 8:
				func_29();
				break;
			
			case 7:
				break;
		}
	}
	else if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 10))
	{
		if (!unk_0x83A1DA4E6C55E952(Local_103))
		{
			Local_103.f_43 = (Local_103.f_43 - 1);
			unk_0x2BCFB39E86340DAA(&(Local_103.f_24), 10);
		}
	}
	return 1;
}

void func_29()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 2))
	{
		iVar0 = unk_0x22C775856F4633CA(0, 10);
		iVar1 = (iLocal_134 + func_30());
		if (iVar0 < iVar1)
		{
			unk_0x2BCFB39E86340DAA(&(Local_103.f_24), 3);
		}
		unk_0x2BCFB39E86340DAA(&(Local_103.f_24), 2);
	}
}

int func_30()
{
	int iVar0;
	
	iVar0 = (Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_36 - 1);
	if (iVar0 >= 4)
	{
		return 4;
	}
	return iVar0;
}

int func_31()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDF0ADAD7E584090D(0, 24) || unk_0xDF0ADAD7E584090D(0, 257))
	{
		iVar0 = func_32(unk_0xA19140A5C42D8715());
		if ((((((iVar0 != joaat("weapon_unarmed") && iVar0 != 0) && iVar0 != joaat("vehicle_weapon_player_bullet")) && iVar0 != joaat("vehicle_weapon_player_buzzard")) && iVar0 != joaat("vehicle_weapon_player_laser")) && iVar0 != joaat("vehicle_weapon_tank")) && iVar0 != joaat("weapon_flare"))
		{
			iVar1 = unk_0xAB21F086A17D0CAA(iVar0);
			if (((((((unk_0x8F62F4EC66847EC2(unk_0xA19140A5C42D8715(), iVar0) == 0 && iVar1 != -728555052) && iVar1 != 507375312) && iVar1 != 0) && iVar1 != -37788308) && iVar1 != -801780072) && iVar1 != 431593103) && iVar1 != -755518101)
			{
				if (unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) == iLocal_139)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_32(int iParam0)
{
	var uVar0;
	
	unk_0xF990CFC0F1D94A39(iParam0, &uVar0, 1);
	return uVar0;
}

int func_33(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	int iVar2;
	int iVar3;
	
	if (func_37(unk_0xD4E735F4B6A956AC(), 146))
	{
		return 1;
	}
	if (unk_0x05EFB6A616B6FADE(Local_103.f_23, 5))
	{
		return 1;
	}
	if (unk_0x685AE6AF34B35D3B(unk_0x8A5B683BACF7B78C(Local_103)))
	{
		return 1;
	}
	if (func_36() || func_35())
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x5D7B2A77420FF19E(1))
	{
		if (unk_0x5712B9353A8F6573(1, iVar0) == 182)
		{
			if (unk_0x8866A4E42CDA3EF1(1, iVar0, &Var1, 11))
			{
				if (unk_0xDC5D81351D6A4DDB(Var1) && unk_0x281590680327CDEA(Var1))
				{
					iVar2 = unk_0xA2EA4BA455370F3C(Var1);
					if (unk_0x4915F4759304D5CF(iVar2) && unk_0xDA3A4E46D189F555(iVar2) == iLocal_139)
					{
						if (unk_0xDC5D81351D6A4DDB(Var1.f_1) && unk_0x281590680327CDEA(Var1.f_1))
						{
							iVar3 = unk_0xA2EA4BA455370F3C(Var1.f_1);
							if (iVar3 != unk_0x8A5B683BACF7B78C(Local_103))
							{
								return 1;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iParam0 == 1)
	{
		if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 5))
		{
			if (unk_0x7394AC2F67EAA91C(vLocal_145 - Vector(25f, 25f, 25f), vLocal_145 + Vector(25f, 25f, 25f)))
			{
				unk_0x2BCFB39E86340DAA(&(Local_103.f_24), 5);
			}
		}
	}
	return 0;
}

int func_34()
{
	if (Local_105.f_50 >= 15 && Local_105.f_50 <= 19)
	{
		if (unk_0x6D7FFF527E125F24(9, vLocal_145, 40f))
		{
			return 1;
		}
	}
	if (unk_0x8DAA6481F6FEA36F(-1, vLocal_145, vLocal_146, fLocal_147))
	{
		return 1;
	}
	if (unk_0x8DAA6481F6FEA36F(-1, vLocal_148, vLocal_149, fLocal_150))
	{
		return 1;
	}
	return 0;
}

int func_35()
{
	if ((unk_0x0E79878CB3E71F79(vLocal_148, vLocal_149, fLocal_150, joaat("weapon_grenade"), 0) || unk_0x0E79878CB3E71F79(vLocal_148, vLocal_149, fLocal_150, joaat("weapon_molotov"), 0)) || unk_0x0E79878CB3E71F79(vLocal_148, vLocal_149, fLocal_150, joaat("weapon_stickybomb"), 0))
	{
		return 1;
	}
	return 0;
}

int func_36()
{
	if ((unk_0x0E79878CB3E71F79(vLocal_145, vLocal_146, fLocal_147, joaat("weapon_grenade"), 0) || unk_0x0E79878CB3E71F79(vLocal_145, vLocal_146, fLocal_147, joaat("weapon_molotov"), 0)) || unk_0x0E79878CB3E71F79(vLocal_145, vLocal_146, fLocal_147, joaat("weapon_stickybomb"), 0))
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/] == iParam1)
	{
		return func_38(iParam0);
	}
	return 0;
}

int func_38(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_1625435[iVar0 /*560*/].f_1, 0);
	}
	return 0;
}

int func_39()
{
	if (func_40() || func_34())
	{
		return 1;
	}
	return 0;
}

int func_40()
{
	if (unk_0x7C4EA68E1BF460BA(vLocal_145, vLocal_146, fLocal_147, 0))
	{
		return 1;
	}
	if (unk_0x7C4EA68E1BF460BA(vLocal_148, vLocal_149, fLocal_150, 0))
	{
		return 1;
	}
	return 0;
}

void func_41()
{
	if (Local_103.f_33 > 0f)
	{
		if (func_42(&(Local_103.f_34), 50, 0))
		{
			Local_103.f_33 = (Local_103.f_33 - 0.02f);
			if (Local_103.f_33 < 0f)
			{
				Local_103.f_33 = 0f;
			}
			func_13(&(Local_103.f_34));
		}
	}
}

int func_42(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_18(uParam0, bParam2, 0);
	if (unk_0x4C9BACA8D249CB13() && !bParam2)
	{
		if (unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), *uParam0)) >= iParam1)
		{
			func_13(uParam0);
			return 1;
		}
	}
	else if (unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(unk_0xFD34717937104F1C(), *uParam0)) >= iParam1)
	{
		func_13(uParam0);
		return 1;
	}
	return 0;
}

void func_43()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(iLocal_124)))
	{
		iVar0 = unk_0x9279C21787650C40(unk_0xDF1881EF65347257(iLocal_124));
		iVar1 = unk_0xEE978C39384D834F(iVar0);
		if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 11))
		{
			if (unk_0x05EFB6A616B6FADE(Local_104[iLocal_124 /*10*/], 5))
			{
				if (unk_0xAABBF7FA3E338B30(Local_103.f_13))
				{
					if (func_3(Local_103.f_13))
					{
						unk_0xF334C9B245CD323D(unk_0xEA0B19D3958DA45D(Local_103.f_13), 1, 1);
						func_45(&(Local_103.f_13));
					}
				}
				else
				{
					Local_103.f_38 = { Local_104[iLocal_124 /*10*/].f_7 };
					Local_103.f_44 = 7;
					unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 11);
				}
			}
		}
		if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 14))
		{
			if (unk_0x05EFB6A616B6FADE(Local_104[iLocal_124 /*10*/], 6))
			{
				unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 14);
			}
		}
		if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 15))
		{
			if (unk_0x05EFB6A616B6FADE(Local_104[iLocal_124 /*10*/], 7))
			{
				unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 15);
			}
		}
		if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 26))
		{
			if (unk_0x05EFB6A616B6FADE(Local_104[iLocal_124 /*10*/], 24))
			{
				unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 26);
			}
		}
		if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 22))
		{
			if (unk_0x05EFB6A616B6FADE(Local_104[iLocal_124 /*10*/], 22))
			{
				unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 22);
			}
		}
		if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 23))
		{
			if (unk_0x05EFB6A616B6FADE(Local_104[iLocal_124 /*10*/], 23))
			{
				unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 23);
			}
		}
		if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 30))
		{
			if (unk_0x05EFB6A616B6FADE(Local_104[iLocal_124 /*10*/], 25))
			{
				unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 30);
			}
		}
		if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 31))
		{
			if (unk_0x05EFB6A616B6FADE(Local_104[iLocal_124 /*10*/], 26))
			{
				unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 31);
			}
		}
		if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 6))
		{
			if (unk_0x05EFB6A616B6FADE(Local_104[iLocal_124 /*10*/], 29))
			{
				unk_0x2BCFB39E86340DAA(&(Local_103.f_24), 6);
			}
		}
		if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 9))
		{
			if (unk_0x05EFB6A616B6FADE(Local_104[iLocal_124 /*10*/], 31))
			{
				unk_0x2BCFB39E86340DAA(&(Local_103.f_24), 9);
			}
		}
		if (!unk_0x05EFB6A616B6FADE(Local_103.f_1, 3))
		{
			if (unk_0x05EFB6A616B6FADE(Local_104[iLocal_124 /*10*/].f_1, 3))
			{
				unk_0x2BCFB39E86340DAA(&(Local_103.f_1), 3);
			}
		}
		if (unk_0x05EFB6A616B6FADE(Local_103.f_25, 1))
		{
			if (!unk_0x05EFB6A616B6FADE(Local_103.f_25, 6))
			{
				if (unk_0x05EFB6A616B6FADE(Local_104[iLocal_124 /*10*/].f_5, 1))
				{
					unk_0x2BCFB39E86340DAA(&(Local_103.f_25), 6);
				}
			}
			if (!unk_0x05EFB6A616B6FADE(Local_103.f_25, 7))
			{
				if (unk_0x05EFB6A616B6FADE(Local_104[iLocal_124 /*10*/].f_5, 2))
				{
					unk_0x2BCFB39E86340DAA(&(Local_103.f_25), 7);
				}
			}
			if (!unk_0x05EFB6A616B6FADE(Local_103.f_25, 5))
			{
				if (unk_0x05EFB6A616B6FADE(Local_104[iLocal_124 /*10*/].f_5, 0))
				{
					unk_0x2BCFB39E86340DAA(&(Local_103.f_25), 5);
				}
			}
		}
		if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 20))
		{
			if (unk_0x05EFB6A616B6FADE(Local_104[iLocal_124 /*10*/], 11))
			{
				unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 20);
			}
		}
		if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 17))
		{
			if (unk_0x05EFB6A616B6FADE(Local_104[iLocal_124 /*10*/], 13))
			{
				unk_0x2BCFB39E86340DAA(&(Local_103.f_24), 17);
			}
		}
		if (func_44(iVar0, 1, 1))
		{
			if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 5))
			{
				if (!func_392(Local_103))
				{
					if (unk_0xDEAEC99031DCB92A(unk_0x8A5B683BACF7B78C(Local_103), iVar1, 1))
					{
						unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 5);
					}
				}
			}
			if (unk_0x05EFB6A616B6FADE(Local_103.f_25, 1))
			{
				if (!unk_0x05EFB6A616B6FADE(Local_103.f_25, 8))
				{
					if (!func_392(Local_103.f_15))
					{
						if (unk_0xDEAEC99031DCB92A(unk_0x8A5B683BACF7B78C(Local_103.f_15), iVar1, 1))
						{
							unk_0x2BCFB39E86340DAA(&(Local_103.f_25), 8);
						}
					}
				}
				if (!unk_0x05EFB6A616B6FADE(Local_103.f_25, 9))
				{
					if (unk_0x05EFB6A616B6FADE(Local_104[iLocal_124 /*10*/].f_5, 3))
					{
						unk_0x2BCFB39E86340DAA(&(Local_103.f_25), 9);
					}
				}
			}
			if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 6))
			{
				if (unk_0x05EFB6A616B6FADE(Local_104[iLocal_124 /*10*/], 1))
				{
					unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 6);
				}
			}
			if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 16))
			{
				if (unk_0x05EFB6A616B6FADE(Local_104[iLocal_124 /*10*/], 8))
				{
					unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 16);
				}
			}
			if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 1))
			{
				if (unk_0x05EFB6A616B6FADE(Local_104[iLocal_124 /*10*/], 27))
				{
					unk_0x2BCFB39E86340DAA(&(Local_103.f_24), 1);
				}
			}
			if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 7))
			{
				if (unk_0x05EFB6A616B6FADE(Local_104[iLocal_124 /*10*/], 0))
				{
					unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 7);
				}
			}
			if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 10))
			{
				if (unk_0x05EFB6A616B6FADE(Local_104[iLocal_124 /*10*/], 4))
				{
					if (Local_103.f_3 != 5 && Local_103.f_3 != 6)
					{
						Local_103.f_3 = 5;
					}
					unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 10);
				}
			}
			if (!unk_0x05EFB6A616B6FADE(Local_103.f_1, 2))
			{
				if (unk_0x05EFB6A616B6FADE(Local_104[iLocal_124 /*10*/].f_1, 2))
				{
					unk_0x2BCFB39E86340DAA(&(Local_103.f_1), 2);
					unk_0x2BCFB39E86340DAA(&(Local_103.f_1), 4);
					iLocal_126 = iLocal_124;
				}
			}
			else if (!unk_0x05EFB6A616B6FADE(Local_104[iLocal_126 /*10*/].f_1, 2))
			{
				unk_0xFA57C719261AA55D(&(Local_103.f_1), 2);
				if (unk_0x05EFB6A616B6FADE(Local_103.f_1, 3))
				{
					unk_0xFA57C719261AA55D(&(Local_103.f_1), 3);
				}
			}
			if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 8))
			{
				if (unk_0x05EFB6A616B6FADE(Local_104[iLocal_124 /*10*/], 30))
				{
					unk_0x2BCFB39E86340DAA(&(Local_103.f_24), 8);
				}
			}
			if (!unk_0x05EFB6A616B6FADE(Local_103.f_1, 0))
			{
				if (unk_0x05EFB6A616B6FADE(Local_104[iLocal_124 /*10*/].f_1, 0))
				{
					unk_0x2BCFB39E86340DAA(&(Local_103.f_1), 0);
					unk_0x2BCFB39E86340DAA(&(Local_103.f_1), 1);
					Local_103.f_26 = Local_104[iLocal_124 /*10*/].f_2;
					iLocal_125 = iLocal_124;
				}
			}
			else if (!unk_0x05EFB6A616B6FADE(Local_104[iLocal_125 /*10*/].f_1, 0))
			{
				unk_0xFA57C719261AA55D(&(Local_103.f_1), 0);
			}
			if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 13))
			{
				if (unk_0x05EFB6A616B6FADE(Local_104[iLocal_124 /*10*/], 21))
				{
					unk_0x2BCFB39E86340DAA(&(Local_103.f_24), 13);
				}
			}
		}
	}
	iLocal_124++;
	if (iLocal_124 == unk_0x48908CAFF1B58FF8())
	{
		iLocal_124 = 0;
	}
}

int func_44(int iParam0, bool bParam1, bool bParam2)
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

void func_45(var uParam0)
{
	int iVar0;
	
	if (unk_0x83A1DA4E6C55E952(*uParam0))
	{
		if (!unk_0xABF0452BE64AD290(*uParam0))
		{
		}
	}
	if (unk_0xAABBF7FA3E338B30(*uParam0))
	{
		iVar0 = unk_0x1C3E3FC5D339FC8C(*uParam0);
		unk_0x901EB5F80E22EEBF(&iVar0);
	}
}

void func_46()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 2);
	unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 3);
	unk_0xFA57C719261AA55D(&(Local_103.f_23), 13);
	unk_0xFA57C719261AA55D(&(Local_103.f_23), 27);
	unk_0xFA57C719261AA55D(&(Local_103.f_23), 28);
	unk_0xFA57C719261AA55D(&(Local_103.f_24), 4);
	if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 18))
	{
		if (func_392(Local_103))
		{
			if (Local_103.f_37 <= 0f)
			{
				unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 18);
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < unk_0x48908CAFF1B58FF8())
	{
		if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(iVar0)))
		{
			iVar5 = unk_0x9279C21787650C40(unk_0xDF1881EF65347257(iVar0));
			iVar6 = unk_0xEE978C39384D834F(iVar5);
			if (Local_104[iVar0 /*10*/].f_3 > 0)
			{
				Local_103.f_4 = (Local_103.f_4 + Local_104[iVar0 /*10*/].f_3);
				Local_104[iVar0 /*10*/].f_3 = 0;
			}
			if (unk_0x05EFB6A616B6FADE(Local_103.f_23, 3))
			{
				if (unk_0xA60C975CBAB69F34(iVar6, vLocal_144, 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0xFA57C719261AA55D(&(Local_103.f_23), 3);
				}
			}
			if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 16))
			{
				if (unk_0x05EFB6A616B6FADE(Local_104[iVar0 /*10*/], 12))
				{
					unk_0x2BCFB39E86340DAA(&(Local_103.f_24), 16);
				}
			}
			if (func_44(iVar5, 1, 1))
			{
				if (unk_0x05EFB6A616B6FADE(Local_103.f_23, 2))
				{
					unk_0xFA57C719261AA55D(&(Local_103.f_23), 2);
				}
				if (unk_0xDA3A4E46D189F555(iVar6) == iLocal_139)
				{
					if (unk_0x2BDB423A5E45639B(iVar6) == iLocal_140 || unk_0x2BDB423A5E45639B(iVar6) == iLocal_141)
					{
						iVar2 = 1;
					}
					else if (unk_0x2BDB423A5E45639B(iVar6) == iLocal_142)
					{
						unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 27);
						iVar3 = 1;
					}
				}
				if (iVar2 == 1 || iVar3 == 1)
				{
					unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 13);
					iVar4++;
					if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 9) && !unk_0x05EFB6A616B6FADE(Local_103.f_23, 21))
					{
						if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 4))
						{
							if (unk_0xF990CFC0F1D94A39(iVar6, &iVar1, 1))
							{
								if ((((iVar1 != joaat("weapon_unarmed") && iVar1 != 0) && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare")) && iVar1 != joaat("weapon_snowball"))
								{
									if (Local_103.f_32 == -1)
									{
										Local_103.f_32 = iVar0;
									}
									else if (!unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(Local_103.f_32)))
									{
										Local_103.f_32 = -1;
									}
									unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 4);
									if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 12))
									{
										if (unk_0xA60C975CBAB69F34(iVar6, vLocal_111, 2.5f, 2.5f, 3f, 0, 1, 0))
										{
											unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 12);
										}
									}
								}
							}
						}
						if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 0))
						{
							if (unk_0x91347D2A80F38492(iVar5) > 0)
							{
								unk_0x2BCFB39E86340DAA(&(Local_103.f_24), 0);
							}
						}
					}
				}
				else if (unk_0xA60C975CBAB69F34(iVar6, vLocal_144, 5f, 5f, 2.5f, 0, 1, 0))
				{
					unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 28);
					iVar4++;
				}
				if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 4))
				{
					if (unk_0x05EFB6A616B6FADE(Local_104[iVar0 /*10*/], 28))
					{
						unk_0x2BCFB39E86340DAA(&(Local_103.f_24), 4);
					}
				}
				if ((unk_0x05EFB6A616B6FADE(Local_103.f_23, 9) && !unk_0x05EFB6A616B6FADE(Local_103.f_23, 20)) && !unk_0x05EFB6A616B6FADE(Local_103.f_23, 19))
				{
					if (Local_104[iLocal_124 /*10*/].f_6 > Local_103.f_33)
					{
						Local_103.f_33 = Local_104[iVar0 /*10*/].f_6;
						func_13(&(Local_103.f_34));
						if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 24))
						{
							if (Local_103.f_33 > (0.55f + 0.2f))
							{
								unk_0x2BCFB39E86340DAA(&(Local_103.f_23), 24);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (Local_103.f_41 != iVar4)
	{
		Local_103.f_41 = iVar4;
	}
}

int func_47()
{
	int iVar0;
	
	if ((!unk_0x83A1DA4E6C55E952(Local_103) || !unk_0x83A1DA4E6C55E952(Local_103.f_13)) || !unk_0x83A1DA4E6C55E952(Local_103.f_14))
	{
		if ((func_49(iLocal_110) && func_49(func_50(1))) && func_49(func_50(2)))
		{
			if (unk_0x36DEA7E26CBAB441(1, 0, 2, 0))
			{
				if (!unk_0x83A1DA4E6C55E952(Local_103))
				{
					if (func_48(&Local_103, 4, iLocal_110, vLocal_111 - Vector(1f, 0f, 0f), Local_103.f_42, 1, 1, 1))
					{
						unk_0x72A0FF8C49CFFC0D(unk_0x8A5B683BACF7B78C(Local_103), 0, iLocal_316[0], iLocal_317[0], 0);
						unk_0x72A0FF8C49CFFC0D(unk_0x8A5B683BACF7B78C(Local_103), 2, iLocal_316[1], iLocal_317[1], 0);
						unk_0x72A0FF8C49CFFC0D(unk_0x8A5B683BACF7B78C(Local_103), 3, iLocal_316[2], iLocal_317[2], 0);
						unk_0x72A0FF8C49CFFC0D(unk_0x8A5B683BACF7B78C(Local_103), 4, iLocal_316[3], iLocal_317[3], 0);
						unk_0x72A0FF8C49CFFC0D(unk_0x8A5B683BACF7B78C(Local_103), 8, iLocal_316[4], iLocal_317[4], 0);
						unk_0xAF41F12C925CC0DB(unk_0x8A5B683BACF7B78C(Local_103), unk_0x988A25F5907E93F0(vLocal_111));
						unk_0xD738221C247C8B71(unk_0x8A5B683BACF7B78C(Local_103), 1);
						unk_0x1F4E5EFBFE503FB3(unk_0x8A5B683BACF7B78C(Local_103), 1);
						unk_0xD759B92031944D46(unk_0x8A5B683BACF7B78C(Local_103), 1, 0);
						unk_0xE5D9346AE3BC7E41(unk_0x8A5B683BACF7B78C(Local_103), 16);
						unk_0xF5576F3CE9F6C386(unk_0x8A5B683BACF7B78C(Local_103), 0);
						unk_0xC2C4AE9DB4A0BEF3(unk_0x8A5B683BACF7B78C(Local_103), 1024, true);
						unk_0x1C09E70D9D927D95(unk_0x8A5B683BACF7B78C(Local_103), 1);
						unk_0x6259CDB47862A4F3(unk_0x8A5B683BACF7B78C(Local_103), round((200f * Global_262145.f_153)), 0);
						if (!unk_0xAEAF59799C2F26E4(unk_0x8A5B683BACF7B78C(Local_103), "XP_Blocker"))
						{
							unk_0x305AD237D017041C(unk_0x8A5B683BACF7B78C(Local_103), "XP_Blocker", 1);
						}
						func_391(&uLocal_151, 3, unk_0x8A5B683BACF7B78C(Local_103), &(Local_103.f_46), 1, 0);
					}
				}
				if (!unk_0x83A1DA4E6C55E952(Local_103.f_13))
				{
					iVar0 = unk_0x10D72D5BD028DD58(-1795552418, vLocal_127, 0, func_50(1));
					if (unk_0xDC5D81351D6A4DDB(iVar0))
					{
						Local_103.f_13 = unk_0x457447BBA7BDCC28(iVar0);
						unk_0xB29E08C7AB729BAD(unk_0xEA0B19D3958DA45D(Local_103.f_13), true);
						unk_0xDCFB67537602326F(unk_0xEA0B19D3958DA45D(Local_103.f_13), false, 0);
						unk_0x92DDCF53AA47A63D(unk_0xEA0B19D3958DA45D(Local_103.f_13), fLocal_128);
						unk_0xAF41F12C925CC0DB(unk_0xEA0B19D3958DA45D(Local_103.f_13), unk_0x988A25F5907E93F0(vLocal_111));
						unk_0x33CF95E95A476FB9(unk_0xEA0B19D3958DA45D(Local_103.f_13), 1);
						unk_0x839012ABD855787E(unk_0xEA0B19D3958DA45D(Local_103.f_13), -0.2f, 1);
						unk_0xB3B23099FB6384A0(unk_0xEA0B19D3958DA45D(Local_103.f_13), 1, 0);
						unk_0x7C73A424F1117528(unk_0xEA0B19D3958DA45D(Local_103.f_13), false, 0);
					}
				}
				if (!unk_0x83A1DA4E6C55E952(Local_103.f_14))
				{
					if (func_25(&(Local_103.f_14), func_50(2), vLocal_129 - Vector(0.12f, 0f, 0f), 1, 1, 0, 1, 0))
					{
						unk_0x92DDCF53AA47A63D(unk_0xEA0B19D3958DA45D(Local_103.f_14), fLocal_130);
						unk_0xAF41F12C925CC0DB(unk_0xEA0B19D3958DA45D(Local_103.f_14), unk_0x988A25F5907E93F0(vLocal_111));
						unk_0xB29E08C7AB729BAD(unk_0xEA0B19D3958DA45D(Local_103.f_14), true);
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_48(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (!unk_0x94D82D856BD4DE54(1))
	{
		return 0;
	}
	iVar0 = unk_0x35C6E06B120EB2E3(iParam1, iParam2, vParam3, fParam4, iParam6, bParam5);
	*uParam0 = unk_0xADF0D7F44D12DC49(iVar0);
	if (unk_0x83A1DA4E6C55E952(*uParam0))
	{
		unk_0xEAF1F3E17588C851(iVar0, iParam7);
		if (unk_0xCC1BBE3267AB0DC9(iVar0))
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

bool func_49(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xCACEBBBEAD8F262E(iParam0);
	return unk_0x7FC99CCC73354033(iParam0);
}

int func_50(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("mp_m_shopkeep_01");
		
		case 1:
			return joaat("p_poly_bag_01_s");
		
		case 2:
			return joaat("p_till_01_s");
		
		default:
	}
	return joaat("mp_m_shopkeep_01");
}

void func_51()
{
	if (!unk_0x05EFB6A616B6FADE(Local_105.f_52, 20))
	{
		if (unk_0x05EFB6A616B6FADE(Local_103.f_23, 11) || unk_0x05EFB6A616B6FADE(Local_103.f_24, 16))
		{
			if (unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) == iLocal_139 || unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_144, 5f, 5f, 2.5f, 0, 1, 0))
			{
				func_54();
				func_52();
				func_6(Local_105.f_50, 1, func_7());
				unk_0x2BCFB39E86340DAA(&(Local_105.f_52), 20);
			}
			else
			{
				if ((unk_0x05EFB6A616B6FADE(Local_105.f_52, 31) && (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0 || unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 1))) && unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_144, 20f, 20f, 20f, 0, 1, 0))
				{
					func_54();
				}
				unk_0x2BCFB39E86340DAA(&(Local_105.f_52), 20);
			}
		}
	}
}

void func_52()
{
	int iVar0;
	
	iVar0 = func_53(47);
	Global_2414200[iVar0 /*83*/] = 47;
	StringCopy(&(Global_2414200[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_53(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2414200[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2414200[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_54()
{
	int iVar0;
	
	if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0 || unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 1))
	{
		iVar0 = func_130(1181, -1, 0);
		if (!unk_0x05EFB6A616B6FADE(iVar0, Local_105.f_50))
		{
			func_129(14, 1, -1);
			unk_0x2BCFB39E86340DAA(&iVar0, Local_105.f_50);
			func_128(1181, iVar0, -1, 1, 0);
			if (func_127(14, -1) >= 20)
			{
				func_113(44, 1);
			}
			else
			{
				func_112(44, func_127(14, -1));
			}
		}
		func_111(1167, 1, -1);
		func_110(12, 1, -1, 1);
		func_100(19);
		iLocal_334 = 100;
		iLocal_334 = round((IntToFloat(iLocal_334) * Global_262145.f_4225));
		func_58(2, "XPT_HOLDUP", -1636175450, -235721452, iLocal_334, 1, -1, 0);
		func_55(12, 0);
	}
}

void func_55(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_57(iParam0, iParam1))
	{
		iVar0 = func_56();
		Global_2458086[iVar0] = iParam0;
	}
}

int func_56()
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

int func_57(int iParam0, var uParam1)
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

var func_58(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_59(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_59(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_60(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_60(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_99(unk_0xD4E735F4B6A956AC()) || func_98(unk_0xD4E735F4B6A956AC()))
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
	else if (func_95() || func_91(unk_0xD4E735F4B6A956AC()))
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
	if (func_90(sParam2))
	{
	}
	if (func_89())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_87(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_86(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_83(0, &iVar1);
					break;
				
				case 3:
					func_83(1, &iVar1);
					break;
				
				case 1:
					func_79(&iVar1);
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
			func_111(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_71((func_78(unk_0xD4E735F4B6A956AC()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x300F50ED36AA0A0C(iVar1, iParam8, iParam9);
				if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_2 != -1)
				{
					func_111(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_65(iVar1);
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
				func_61((func_63(unk_0xD4E735F4B6A956AC()) + iVar1));
			}
			else
			{
				func_61((func_63(unk_0xD4E735F4B6A956AC()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_61(int iParam0)
{
	if (func_89())
	{
		Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_5 = iParam0;
		func_62(joaat("mpply_globalxp"), iParam0);
	}
}

void func_62(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, 1);
	}
}

int func_63(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_44(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xD4E735F4B6A956AC())
			{
				return func_64(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589747[iParam0 /*790*/].f_211.f_5;
			}
		}
		else
		{
			return func_64(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_64(int iParam0)
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

void func_65(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_70(unk_0xD4E735F4B6A956AC()) };
	if (unk_0xD1832FEBE50B1AB1())
	{
		if (unk_0xE0B3F7A8017F6425(&Var0))
		{
			iVar1 = func_68(func_69(&Var0));
			if (iVar1 == 0)
			{
				func_67(&Global_1378824, iParam0);
				func_66(joaat("mpply_crew_local_xp_0"), Global_1378824);
			}
			else if (iVar1 == 1)
			{
				func_67(&Global_1378825, iParam0);
				func_66(joaat("mpply_crew_local_xp_1"), Global_1378825);
			}
			else if (iVar1 == 2)
			{
				func_67(&Global_1378826, iParam0);
				func_66(joaat("mpply_crew_local_xp_2"), Global_1378826);
			}
			else if (iVar1 == 3)
			{
				func_67(&Global_1378827, iParam0);
				func_66(joaat("mpply_crew_local_xp_3"), Global_1378827);
			}
			else if (iVar1 == 4)
			{
				func_67(&Global_1378828, iParam0);
				func_66(joaat("mpply_crew_local_xp_4"), Global_1378828);
			}
		}
	}
}

void func_66(int iParam0, int iParam1)
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

void func_67(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_68(int iParam0)
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

int func_69(var uParam0)
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

struct<13> func_70(int iParam0)
{
	struct<13> Var0;
	
	unk_0xE05C4303C26882C4(iParam0, &Var0, 13);
	return Var0;
}

void func_71(int iParam0, int iParam1, int iParam2)
{
	if (func_89())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9490 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1378945[func_76(-1)])
				{
					unk_0x300F50ED36AA0A0C(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1378945[func_76(-1)])
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
		if (func_75(unk_0xD4E735F4B6A956AC()))
		{
			Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_1 = iParam0;
			Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_6 = func_73(iParam0, 1);
		}
		func_72(639, iParam0, -1, 1);
		func_128(640, func_73(iParam0, 1), -1, 1, 0);
		Global_1378945[func_76(-1)] = iParam0;
		func_55(7, 0);
	}
}

void func_72(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2535519[iParam0 /*3*/][func_76(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1378885[func_76(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1378891[func_76(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1378897[func_76(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1378903[func_76(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1378861[func_76(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1378867[func_76(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1378873[func_76(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1378879[func_76(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1378837[func_76(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1378843[func_76(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1378849[func_76(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1378855[func_76(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1378909[func_76(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1378915[func_76(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1378921[func_76(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1378927[func_76(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1378933[func_76(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1378939[func_76(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1378945[func_76(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1378951[func_76(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2568104[0 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2568104[1 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2568104[2 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2568104[3 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_2568229[func_76(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1378957[func_76(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1378963[func_76(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1378969[func_76(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1378975[func_76(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2568165[0 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2568165[1 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2568165[2 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2568165[3 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2568165[4 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2568232[0 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2568232[1 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2568232[2 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2568232[3 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2568232[4 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2568248[0 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2568248[1 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2568248[2 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2568248[3 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2568248[4 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2568165[5 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2568104[4 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2568264[func_76(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2568273[func_76(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2568267[func_76(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2568276[func_76(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2568270[func_76(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2568279[func_76(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2568282[func_76(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2568165[6 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2568104[5 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2568165[7 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2568104[6 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2568165[8 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2568104[7 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2568165[9 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2568104[8 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2568165[10 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2568104[9 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2568165[11 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2568104[10 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2568165[12 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2568104[11 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2568165[13 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2568104[12 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2568165[14 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2568104[13 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2568165[15 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2568104[14 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2568165[16 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2568104[15 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2568165[17 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2568104[16 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2568104[17 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2568104[18 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2568104[19 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_73(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_74(iParam0, 0);
}

int func_74(int iParam0, int iParam1)
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

int func_75(int iParam0)
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

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_77();
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

int func_77()
{
	return Global_1312736;
}

int func_78(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xD4E735F4B6A956AC())
			{
				return Global_1378945[func_76(-1)];
			}
			else if (func_75(iParam0))
			{
				return Global_1589747[iParam0 /*790*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1378945[func_76(-1)];
	}
	return 0;
}

void func_79(int iParam0)
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
				if (unk_0xE46ECB9FD23D3264(iVar5) == iVar1 || func_82(unk_0xE46ECB9FD23D3264(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xD4E735F4B6A956AC())
					{
						if (func_81(unk_0xD4E735F4B6A956AC(), iVar5))
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
		iVar6 = round((func_80(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_80(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_80(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_81(int iParam0, int iParam1)
{
	if (unk_0xD1832FEBE50B1AB1())
	{
		Global_2503649 = { func_70(iParam0) };
		Global_2503662 = { func_70(iParam1) };
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

int func_82(int iParam0, int iParam1, int iParam2)
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

void func_83(bool bParam0, int iParam1)
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
				if (func_44(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xD4E735F4B6A956AC())
					{
						iVar1++;
						if (func_81(unk_0xD4E735F4B6A956AC(), iVar4))
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
			if (func_44(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xD4E735F4B6A956AC())
				{
					if (func_84(unk_0xD4E735F4B6A956AC(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_81(unk_0xD4E735F4B6A956AC(), iVar4))
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
		iVar5 = round((func_80(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_80(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_84(int iParam0, int iParam1)
{
	return vdist(func_85(iParam0), func_85(iParam1));
	return 0f;
}

Vector3 func_85(int iParam0)
{
	return unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iParam0), 0);
}

int func_86(int iParam0)
{
	int iVar0;
	
	if (unk_0x5140B71AC6379F52() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_80(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_87(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x69E48309C7AE810E(iParam0) > func_78(unk_0xD4E735F4B6A956AC()))
		{
			iParam0 = -func_78(unk_0xD4E735F4B6A956AC());
		}
	}
	if (func_88(8000, 0, 0) > 0)
	{
		if (func_88(8000, 0, 0) < (iParam0 + func_78(unk_0xD4E735F4B6A956AC())))
		{
			iParam0 = (func_88(8000, 0, 0) - func_78(unk_0xD4E735F4B6A956AC()));
		}
	}
	return iParam0;
}

int func_88(int iParam0, bool bParam1, int iParam2)
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

int func_89()
{
	return 1;
}

int func_90(char* sParam0)
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

int func_91(int iParam0)
{
	return func_92(func_93(iParam0));
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_93(int iParam0)
{
	if (func_94(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_33;
	}
	return -1;
}

int func_94(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_33 != -1 || (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_95()
{
	if (unk_0xD8B89B387D170E27())
	{
		return func_97();
	}
	return func_96(Global_4456448.f_130782);
}

int func_96(int iParam0)
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

var func_97()
{
	return Global_2448386.f_16;
}

bool func_98(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 2;
}

bool func_99(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 7;
}

void func_100(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_262145.f_8458)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2097152[func_109() /*12745*/].f_8178.f_3922[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[func_109() /*12745*/].f_8178.f_3922[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[func_109() /*12745*/].f_8178.f_3922[iVar2 /*3*/].f_1)
			{
				func_105(iVar2, 1);
				unk_0x2BCFB39E86340DAA(&Global_2504484, (8 + iVar2));
				func_103(2110, -1);
				func_101(67, -1);
				func_103(2581, -1);
				func_101(69, -1);
				unk_0x7083C6F812DBB095(1000, iVar1);
				if (iVar3 < 2)
				{
					if (!unk_0x05EFB6A616B6FADE(Global_2504484, 12))
					{
						func_55(7, 0);
					}
					else
					{
						func_55(15, 0);
					}
				}
			}
		}
	}
}

void func_101(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_127(iParam0, func_76(iParam1));
	iVar0++;
	func_102(iParam0, iVar0, iParam1);
}

void func_102(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2567520[iParam0 /*3*/][func_76(uParam2)];
	unk_0x93180BE33E7149EF(iVar0, iParam1, 1);
}

void func_103(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_130(iParam0, func_76(iParam1), 0);
	iVar0++;
	if (!func_104(iParam0))
	{
		func_128(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_72(iParam0, iVar0, iParam1, 1);
	}
}

int func_104(int iParam0)
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

void func_105(int iParam0, int iParam1)
{
	if (Global_2097152[func_109() /*12745*/].f_8178.f_3922[iParam0 /*3*/].f_1 != iParam1)
	{
		Global_2097152[func_109() /*12745*/].f_8178.f_3922[iParam0 /*3*/].f_1 = iParam1;
		func_106(func_108(iParam0), iParam1, -1, 1);
	}
}

void func_106(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_107())
	{
		iVar0 = Global_2566070[iParam0 /*3*/][func_76(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x0C62A7470B522D80(iVar0, iParam1, iParam3);
		}
	}
}

int func_107()
{
	return 1;
	return 0;
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 169;
		
		case 1:
			return 170;
		
		case 2:
			return 171;
		
		default:
	}
	return 169;
}

int func_109()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_110(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_77();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xF84B918DCDA549C0((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x12FA763CEA4960B5((iParam0 - 0)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xF84B918DCDA549C0((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x12FA763CEA4960B5((iParam0 - 192)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xF84B918DCDA549C0((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x12FA763CEA4960B5((iParam0 - 513)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xF84B918DCDA549C0((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x12FA763CEA4960B5((iParam0 - 705)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x7D93C2914375D70B((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x12FA763CEA4960B5((iParam0 - 3111)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x7D93C2914375D70B((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x12FA763CEA4960B5((iParam0 - 2919)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0xD7C999E88C211597((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x12FA763CEA4960B5((iParam0 - 4207)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0xD7C999E88C211597((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x12FA763CEA4960B5((iParam0 - 4335)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0xD7C999E88C211597((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x12FA763CEA4960B5((iParam0 - 6029)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0xD7C999E88C211597((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x12FA763CEA4960B5((iParam0 - 7385)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0xD7C999E88C211597((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x12FA763CEA4960B5((iParam0 - 7321)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0xD7C999E88C211597((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x12FA763CEA4960B5((iParam0 - 9361)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0xD7C999E88C211597((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x12FA763CEA4960B5((iParam0 - 15369)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0xD7C999E88C211597((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x12FA763CEA4960B5((iParam0 - 15562)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0xD7C999E88C211597((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x12FA763CEA4960B5((iParam0 - 15946)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0xD7C999E88C211597((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x12FA763CEA4960B5((iParam0 - 18098)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0xD7C999E88C211597((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x12FA763CEA4960B5((iParam0 - 22066)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0xD7C999E88C211597((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x12FA763CEA4960B5((iParam0 - 24962)) * 64);
		iVar0 = unk_0x6582D084521A871B(iVar19, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_111(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_130(iParam0, func_76(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_104(iParam0))
	{
		func_128(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_72(iParam0, iVar0, iParam2, 1);
	}
}

int func_112(int iParam0, int iParam1)
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

int func_113(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_114(iParam0, iParam1);
}

int func_114(int iParam0, int iParam1)
{
	if (func_126(14) && !func_125(iParam0))
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
	if (func_124(&Global_4268566))
	{
		if (func_122(&Global_4268566, iParam0))
		{
			return 0;
		}
		if (func_115(&Global_4268566, iParam0))
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

int func_115(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x16E6CF5D5B848918(iParam1))
	{
		return 0;
	}
	if (func_126(14) && !func_125(iParam1))
	{
		return 0;
	}
	if (func_122(uParam0, iParam1))
	{
		return 0;
	}
	if (func_121(uParam0) < 0f)
	{
		func_120(uParam0, 0);
	}
	func_118(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_116(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_116(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x16E6CF5D5B848918(iParam1))
	{
		return 0;
	}
	if (func_126(14) && !func_125(iParam1))
	{
		return 0;
	}
	if (func_122(uParam0, iParam1))
	{
		return 0;
	}
	if (func_121(uParam0) < 0f)
	{
		func_120(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_117(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_117(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_118(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_119(uParam0, iVar0);
		iVar0++;
	}
	func_120(uParam0, (Global_4268565 - 0.5f));
}

void func_119(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_120(var uParam0, float fParam1)
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

float func_121(var uParam0)
{
	return uParam0->f_80;
}

bool func_122(var uParam0, int iParam1)
{
	return func_123(uParam0, iParam1) != -1;
}

int func_123(var uParam0, int iParam1)
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

bool func_124(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_125(int iParam0)
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

bool func_126(int iParam0)
{
	return Global_36117 == iParam0;
}

int func_127(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2567520[iParam0 /*3*/][func_76(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_128(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_76(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
}

void func_129(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_127(iParam0, func_76(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_102(iParam0, iVar0, iParam2);
}

int func_130(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_76(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_131(var uParam0)
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

void func_132(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x45F99485D7E1C29A())
		{
			func_18(uParam0, 0, 0);
		}
	}
}

void func_133()
{
	bool bVar0;
	int iVar1;
	
	func_251();
	func_225();
	func_176();
	func_51();
	func_174();
	func_173();
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) == iLocal_139)
		{
			if (Global_2524719.f_5630.f_1 == 0)
			{
				Global_2524719.f_5630.f_1 = 1;
			}
			if (unk_0x2BDB423A5E45639B(unk_0xA19140A5C42D8715()) == iLocal_140 || unk_0x2BDB423A5E45639B(unk_0xA19140A5C42D8715()) == iLocal_141)
			{
				bVar0 = true;
			}
			else if (unk_0x2BDB423A5E45639B(unk_0xA19140A5C42D8715()) == iLocal_142)
			{
				iVar1 = 1;
			}
		}
		else if (Global_2524719.f_5630.f_1 == 1)
		{
			Global_2524719.f_5630.f_1 = 0;
		}
	}
	if (!unk_0x05EFB6A616B6FADE(Local_105.f_52, 31))
	{
		if (func_93(unk_0xD4E735F4B6A956AC()) != 154)
		{
			if ((bVar0 || iVar1) || unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_144, (5f / 2f), (5f / 2f), (5f / 2f), 0, 1, 0))
			{
				unk_0xB20B772FD9DE1847(unk_0xA19140A5C42D8715(), joaat("weapon_unarmed"), true);
				unk_0x2BCFB39E86340DAA(&(Local_105.f_52), 31);
			}
		}
	}
	if ((!unk_0x05EFB6A616B6FADE(Local_105.f_52, 26) && bVar0) && !(func_172(0) || func_171()))
	{
		if (func_169("SNK_MNU", Local_105, 0))
		{
			unk_0x2BCFB39E86340DAA(&(Local_105.f_52), 26);
		}
	}
	if (!bVar0 && unk_0x05EFB6A616B6FADE(Local_105.f_52, 26))
	{
		if (!unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()) || (unk_0x37B568B777BC65F9(Local_105.f_1) && unk_0xC3553172354FFB69(Local_105.f_1)))
		{
			unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
			unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
			unk_0xD87B76260C547F31(0f);
			unk_0xAA32DD4848CF93E0(0f, 1065353216);
			if (Local_105.f_51 > 0)
			{
				Local_104[unk_0xD60943E3BE730BF0() /*10*/].f_3 = Local_105.f_51;
				Local_105.f_51 = 0;
			}
			func_407();
			unk_0xFA57C719261AA55D(&(Local_105.f_53), 7);
			if (unk_0x37B568B777BC65F9(Local_105.f_1))
			{
				unk_0x77F0486CE0E598D5(Local_105.f_1, 0);
			}
			unk_0x8E88E73F74A9FF79(false, 0, 3000, 1, 0, 0);
		}
		func_166(1, Local_105);
		unk_0xFA57C719261AA55D(&(Local_105.f_52), 26);
	}
	if (!unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 21))
	{
		if (iVar1 || func_164(unk_0xA19140A5C42D8715(), Local_105.f_50))
		{
			unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 21);
		}
	}
	if (bVar0 || iVar1)
	{
		func_161();
		func_155();
		func_149();
		func_145(1);
		func_138();
		unk_0xC50D9DF0E3FD8DE3(unk_0xD4E735F4B6A956AC());
		unk_0x9651B65D4FBD4CE3(unk_0xD4E735F4B6A956AC());
		if (unk_0x05EFB6A616B6FADE(Global_2524719.f_7, 0))
		{
			unk_0x5CFC494C7A857202(Local_103.f_71);
			func_136(vLocal_144, func_137(30), 0);
			unk_0xFA57C719261AA55D(&(Global_2524719.f_7), 0);
		}
	}
	else
	{
		if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_144, 5f, 5f, 2.5f, 0, 1, 0))
		{
			func_145(0);
		}
		if (!unk_0x05EFB6A616B6FADE(Global_2524719.f_7, 0))
		{
			unk_0x54AE7C0BF1BF8DD8();
			func_134(vLocal_144, func_137(30), "");
			unk_0x2BCFB39E86340DAA(&(Global_2524719.f_7), 0);
		}
	}
	if ((unk_0x05EFB6A616B6FADE(Local_103.f_23, 22) || unk_0x05EFB6A616B6FADE(Local_103.f_23, 23)) || unk_0x05EFB6A616B6FADE(Local_103.f_23, 7))
	{
		unk_0xB1D22059BEC7B532(unk_0xD4E735F4B6A956AC());
	}
}

int func_134(vector3 vParam0, char* sParam1, char* sParam2)
{
	int iVar0;
	
	if (!unk_0x429D45A6C6520026(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!unk_0x3CAC2741CC1A631F(&(Global_2524719.f_3955[iVar0 /*26*/].f_4), sParam1))
			{
				if (unk_0x429D45A6C6520026(&(Global_2524719.f_3955[iVar0 /*26*/].f_4)))
				{
					Global_2524719.f_3955[iVar0 /*26*/] = 1;
					Global_2524719.f_3955[iVar0 /*26*/].f_1 = { vParam0 };
					StringCopy(&(Global_2524719.f_3955[iVar0 /*26*/].f_4), sParam1, 24);
					StringCopy(&(Global_2524719.f_3955[iVar0 /*26*/].f_10), sParam2, 64);
					return 1;
				}
			}
			else if (!func_135(Global_2524719.f_3955[iVar0 /*26*/].f_1, vParam0, 0))
			{
				Global_2524719.f_3955[iVar0 /*26*/] = 1;
				Global_2524719.f_3955[iVar0 /*26*/].f_1 = { vParam0 };
				StringCopy(&(Global_2524719.f_3955[iVar0 /*26*/].f_4), sParam1, 24);
				StringCopy(&(Global_2524719.f_3955[iVar0 /*26*/].f_10), sParam2, 64);
				return 1;
			}
			else
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_135(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_136(vector3 vParam0, char* sParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x429D45A6C6520026(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (unk_0x3CAC2741CC1A631F(&(Global_2524719.f_3955[iVar0 /*26*/].f_4), sParam1))
			{
				if (iParam2 || func_135(Global_2524719.f_3955[iVar0 /*26*/].f_1, vParam0, 0))
				{
					Global_2524719.f_3955[iVar0 /*26*/] = 0;
					Global_2524719.f_3955[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2524719.f_3955[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2524719.f_3955[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

char* func_137(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

void func_138()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xFA57C719261AA55D(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 28);
	if (!func_392(Local_103) && func_44(unk_0xD4E735F4B6A956AC(), 1, 1))
	{
		if (unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iVar0, 1))
		{
			if ((((iVar0 != joaat("weapon_unarmed") && iVar0 != joaat("object")) && iVar0 != joaat("weapon_flare")) && iVar0 != joaat("weapon_snowball")) && iVar0 != joaat("weapon_flashlight"))
			{
				if ((((unk_0x45F41CA95744406F(unk_0xD4E735F4B6A956AC()) && unk_0xC42DE41AEED00E7B(unk_0xA19140A5C42D8715(), unk_0x8A5B683BACF7B78C(Local_103), 45f)) && unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), unk_0x8A5B683BACF7B78C(Local_103), 5f, 5f, 2f, 0, 1, 0)) || unk_0x669ABFB25D991447(unk_0xD4E735F4B6A956AC(), unk_0x8A5B683BACF7B78C(Local_103))) || unk_0x7591AFB11E7EDDA0(unk_0xD4E735F4B6A956AC(), unk_0x8A5B683BACF7B78C(Local_103)))
				{
					if (!(func_172(0) || func_171()) && ((!func_142(unk_0xD4E735F4B6A956AC()) || func_93(unk_0xD4E735F4B6A956AC()) == 154) || func_93(unk_0xD4E735F4B6A956AC()) == 171))
					{
						if (func_140(unk_0xD4E735F4B6A956AC(), unk_0x8A5B683BACF7B78C(Local_103)) || unk_0xC2AA6275E111EA99(unk_0xD4E735F4B6A956AC()))
						{
							if (!unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 1))
							{
								func_139(func_8(unk_0x9279C21787650C40(unk_0x65E13AD984EAAEE8())));
								unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 1);
							}
							if (!unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 8))
							{
								unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 8);
							}
						}
						unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 28);
					}
				}
			}
		}
	}
	if (!unk_0x05EFB6A616B6FADE(Local_105.f_52, 28))
	{
		if (unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 28))
		{
			if (unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iVar1, 1))
			{
				if (iVar1 != 0 && iVar1 != joaat("weapon_snowball"))
				{
					iVar2 = unk_0xAB21F086A17D0CAA(iVar1);
					if (iVar2 == 416676503)
					{
						sLocal_109 = "hold_up_head_additive_pistol";
						unk_0x3F01127ECD227890(unk_0xA19140A5C42D8715(), "mp_am_hold_up", sLocal_109, 8f, -8f, -1, 305, 0, 0, 0, 0);
					}
					else if ((((iVar2 == 1159398588 || iVar2 == 970310034) || iVar2 == 860033945) || iVar2 == -1212426201) || iVar2 == -957766203)
					{
						sLocal_109 = "hold_up_head_additive_rifle";
						unk_0x3F01127ECD227890(unk_0xA19140A5C42D8715(), "mp_am_hold_up", sLocal_109, 8f, -8f, -1, 305, 0, 0, 0, 0);
					}
					else
					{
						sLocal_109 = "";
					}
					unk_0x2BCFB39E86340DAA(&(Local_105.f_52), 28);
				}
			}
		}
	}
	else if (!unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 28) || unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715()))
	{
		if (!unk_0x429D45A6C6520026(sLocal_109))
		{
			if (unk_0x411C28019DEA5CEF(unk_0xA19140A5C42D8715(), "mp_am_hold_up", sLocal_109, 3))
			{
				unk_0xED3CB2E0519060F1(unk_0xA19140A5C42D8715(), "mp_am_hold_up", sLocal_109, -8f);
			}
		}
		unk_0xFA57C719261AA55D(&(Local_105.f_52), 28);
	}
	if (unk_0x05EFB6A616B6FADE(Local_103.f_25, 1))
	{
		if (!unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/].f_5, 3))
		{
			if (!func_392(Local_103.f_15) && func_44(unk_0xD4E735F4B6A956AC(), 1, 1))
			{
				if (unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iVar3, 1))
				{
					if ((((iVar3 != joaat("weapon_unarmed") && iVar3 != joaat("object")) && iVar3 != joaat("weapon_flare")) && iVar3 != joaat("weapon_snowball")) && !(func_172(0) || func_171()))
					{
						if (unk_0x669ABFB25D991447(unk_0xD4E735F4B6A956AC(), unk_0x8A5B683BACF7B78C(Local_103.f_15)) || unk_0x7591AFB11E7EDDA0(unk_0xD4E735F4B6A956AC(), unk_0x8A5B683BACF7B78C(Local_103.f_15)))
						{
							if (func_140(unk_0xD4E735F4B6A956AC(), unk_0x8A5B683BACF7B78C(Local_103.f_15)) || unk_0xC2AA6275E111EA99(unk_0xD4E735F4B6A956AC()))
							{
								unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/].f_5), 3);
							}
						}
					}
				}
			}
		}
	}
}

void func_139(int iParam0)
{
	struct<2> Var0;
	
	Var0 = -2033286589;
	Var0.f_1 = unk_0xD4E735F4B6A956AC();
	if (!iParam0 == 0)
	{
		unk_0x04F37AFC39D93909(1, &Var0, 2, iParam0);
	}
}

int func_140(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (func_44(iParam0, 1, 1))
	{
		vVar0 = { func_85(iParam0) };
	}
	if (!unk_0x4915F4759304D5CF(iParam1))
	{
		vVar1 = { unk_0xE2BBD32891C18569(iParam1, 1) };
	}
	vVar3 = { vVar1 - vVar0 };
	if (!unk_0x4915F4759304D5CF(iParam1))
	{
		vVar2 = { unk_0x3201284584C7CD83(iParam1, 0f, 7f, 0f) };
		vVar4 = { vVar2 - vVar1 };
	}
	vVar3.z = 0f;
	vVar4.z = 0f;
	fVar5 = func_141(vVar3, vVar4);
	if (fVar5 < -0.1f)
	{
		return 1;
	}
	return 0;
}

float func_141(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

int func_142(int iParam0)
{
	if (func_38(iParam0))
	{
		return 1;
	}
	if (func_143(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_143(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_144(iParam0, 9);
	}
	return 0;
}

bool func_144(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_11.f_4, iParam1);
}

void func_145(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xD4E735F4B6A956AC() != Global_2524719.f_4808)
	{
		if (!unk_0x05EFB6A616B6FADE(Local_105.f_52, 6))
		{
			if (iParam0 == 1)
			{
				if (unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iVar2, 1))
				{
					if ((((iVar2 != joaat("weapon_unarmed") && iVar2 != 0) && iVar2 != joaat("object")) && iVar2 != joaat("weapon_flare")) && iVar2 != joaat("weapon_snowball"))
					{
						if (!unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_111, 2.5f, 2.5f, 3f, 0, 1, 0))
						{
							iVar1 = 1;
						}
						iVar0 = 1;
					}
				}
				if ((((iVar1 == 1 || unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 5)) || (iVar0 == 1 && Local_103.f_3 >= 3)) || (iVar0 == 1 && unk_0x05EFB6A616B6FADE(Local_103.f_24, 16))) || unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 12))
				{
					if (((!unk_0x05EFB6A616B6FADE(Local_103.f_23, 12) || Local_103.f_3 >= 3) || unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 12)) || (iVar0 == 1 && unk_0x05EFB6A616B6FADE(Local_103.f_24, 16)))
					{
						Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_36++;
						func_13(&(Global_2437022.f_3729));
						func_18(&(Global_2437022.f_3729), 0, 0);
						if (Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_36 <= 2)
						{
							if (func_148())
							{
								if (func_147() < 2)
								{
									unk_0x920EAF82B3E570B4(unk_0xD4E735F4B6A956AC(), 37, unk_0x1105C926E38D2066(func_147()));
								}
								else
								{
									unk_0x920EAF82B3E570B4(unk_0xD4E735F4B6A956AC(), 37, unk_0x1105C926E38D2066(2));
								}
							}
							else
							{
								unk_0x920EAF82B3E570B4(unk_0xD4E735F4B6A956AC(), 37, unk_0x1105C926E38D2066(2));
							}
						}
						else if (Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_36 >= 5)
						{
							if (func_148())
							{
								if (func_147() < 3)
								{
									unk_0x920EAF82B3E570B4(unk_0xD4E735F4B6A956AC(), 37, unk_0x1105C926E38D2066(func_147()));
								}
								else
								{
									unk_0x920EAF82B3E570B4(unk_0xD4E735F4B6A956AC(), 37, unk_0x1105C926E38D2066(3));
								}
							}
							else
							{
								unk_0x920EAF82B3E570B4(unk_0xD4E735F4B6A956AC(), 37, unk_0x1105C926E38D2066(4));
							}
						}
						else if (func_148())
						{
							if (func_147() < 3)
							{
								unk_0x920EAF82B3E570B4(unk_0xD4E735F4B6A956AC(), 37, unk_0x1105C926E38D2066(func_147()));
							}
							else
							{
								unk_0x920EAF82B3E570B4(unk_0xD4E735F4B6A956AC(), 37, unk_0x1105C926E38D2066(3));
							}
						}
						else
						{
							unk_0x920EAF82B3E570B4(unk_0xD4E735F4B6A956AC(), 37, unk_0x1105C926E38D2066(3));
						}
						if (!unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 1))
						{
							unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 2);
						}
						unk_0x2BCFB39E86340DAA(&(Local_105.f_52), 6);
						unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 25);
					}
				}
			}
			if (!unk_0x05EFB6A616B6FADE(Local_105.f_52, 27) && !unk_0x05EFB6A616B6FADE(Local_105.f_52, 6))
			{
				if (unk_0x6625F609B391348E(unk_0xA19140A5C42D8715()))
				{
					if (func_17(&uLocal_137, 2000, 0) || unk_0x8DBEC2BE62488A34(unk_0xA19140A5C42D8715()))
					{
						unk_0x920EAF82B3E570B4(unk_0xD4E735F4B6A956AC(), 37, unk_0x1105C926E38D2066(1));
						unk_0x2BCFB39E86340DAA(&(Local_105.f_52), 27);
						unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 27);
						unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 25);
						if (!unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 1))
						{
							unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 2);
						}
					}
				}
				else if (func_146(&uLocal_137))
				{
					func_13(&uLocal_137);
				}
			}
		}
		if (!unk_0x05EFB6A616B6FADE(Local_105.f_52, 24))
		{
			if (unk_0x05EFB6A616B6FADE(Local_105.f_52, 31))
			{
				if (func_392(Local_103))
				{
					if (func_148())
					{
						if (func_147() < 3)
						{
							unk_0x920EAF82B3E570B4(unk_0xD4E735F4B6A956AC(), 37, unk_0x1105C926E38D2066(func_147()));
						}
						else
						{
							unk_0x920EAF82B3E570B4(unk_0xD4E735F4B6A956AC(), 37, unk_0x1105C926E38D2066(3));
						}
					}
					else
					{
						unk_0x920EAF82B3E570B4(unk_0xD4E735F4B6A956AC(), 13, unk_0x1105C926E38D2066(3));
					}
					unk_0x2BCFB39E86340DAA(&(Local_105.f_52), 24);
					if (!unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 1))
					{
						unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 2);
					}
				}
			}
		}
	}
}

bool func_146(var uParam0)
{
	return uParam0->f_1;
}

int func_147()
{
	return Global_262145.f_12484;
}

int func_148()
{
	if (func_143(unk_0xD4E735F4B6A956AC()) && func_93(unk_0xD4E735F4B6A956AC()) == 154)
	{
		return 1;
	}
	return 0;
}

void func_149()
{
	int iVar0;
	int iVar1;
	
	if (func_44(unk_0xD4E735F4B6A956AC(), 1, 1))
	{
		if (!unk_0x05EFB6A616B6FADE(Local_105.f_52, 23) && unk_0x05EFB6A616B6FADE(Local_103.f_23, 17))
		{
			if (!func_392(Local_103))
			{
				iLocal_114 = unk_0x2B3422BC14FE3213(Local_103.f_29);
				if (iLocal_114 >= 0)
				{
					if (unk_0xFE5DE0C3200E00F2(iLocal_114))
					{
						if ((!unk_0x05EFB6A616B6FADE(Global_1645896, 15) && func_154()) && func_153())
						{
							unk_0x2BCFB39E86340DAA(&Global_1645896, 15);
						}
						if (!unk_0xE06AA0996C4E4E03())
						{
							iVar0 = func_130(1190, -1, 0);
							if (!unk_0x05EFB6A616B6FADE(iVar0, 3))
							{
								if (unk_0x33CECDD9E141E18E(iLocal_114) < 0.4f && unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) == iLocal_139)
								{
									func_152("FHU_HELP3", -1);
									unk_0x2BCFB39E86340DAA(&iVar0, 3);
									func_128(1190, iVar0, -1, 1, 0);
								}
							}
							else if (!unk_0x05EFB6A616B6FADE(iVar0, 5) || !unk_0x05EFB6A616B6FADE(iVar0, 6))
							{
								if (unk_0x33CECDD9E141E18E(iLocal_114) < 0.7f && unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) == iLocal_139)
								{
									func_152("FHU_HELP4", -1);
									unk_0x2BCFB39E86340DAA(&iVar0, 5);
									func_128(1190, iVar0, -1, 1, 0);
									unk_0x2BCFB39E86340DAA(&(Local_105.f_52), 23);
								}
							}
							else
							{
								unk_0x2BCFB39E86340DAA(&(Local_105.f_52), 23);
							}
						}
					}
				}
			}
		}
		if (((((((!func_37(unk_0xD4E735F4B6A956AC(), 146) && !func_151()) && func_93(unk_0xD4E735F4B6A956AC()) != 167) && func_93(unk_0xD4E735F4B6A956AC()) != 190) && func_93(unk_0xD4E735F4B6A956AC()) != 191) && func_93(unk_0xD4E735F4B6A956AC()) != 250) && func_93(unk_0xD4E735F4B6A956AC()) != 237) && func_93(unk_0xD4E735F4B6A956AC()) != 238)
		{
			if (!unk_0x05EFB6A616B6FADE(Local_105.f_53, 1))
			{
				if (!unk_0xE06AA0996C4E4E03())
				{
					if (((((func_392(Local_103) || Local_103.f_3 > 7) && !unk_0x05EFB6A616B6FADE(Local_103.f_23, 20)) && !unk_0x05EFB6A616B6FADE(Local_103.f_23, 11)) && !unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 5)) && unk_0x06D718FC71673E5A(vLocal_115, 1.5f) == 0)
					{
						iVar1 = func_130(1190, -1, 0);
						if (!unk_0x05EFB6A616B6FADE(iVar1, 20) || !unk_0x05EFB6A616B6FADE(iVar1, 21))
						{
							func_152("FHU_HELPM", -1);
							if (!unk_0x05EFB6A616B6FADE(iVar1, 20))
							{
								unk_0x2BCFB39E86340DAA(&iVar1, 20);
							}
							else
							{
								unk_0x2BCFB39E86340DAA(&iVar1, 21);
							}
							func_128(1190, iVar1, -1, 1, 0);
							unk_0x2BCFB39E86340DAA(&(Local_105.f_53), 1);
						}
						else
						{
							unk_0x2BCFB39E86340DAA(&(Local_105.f_53), 1);
						}
					}
				}
			}
			else if (func_150("FHU_HELPM"))
			{
				if ((unk_0x05EFB6A616B6FADE(Local_103.f_23, 20) || unk_0x05EFB6A616B6FADE(Local_103.f_23, 11)) || unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 5))
				{
					unk_0x135C61E339DABBAC(1);
				}
			}
		}
	}
}

bool func_150(char* sParam0)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	return unk_0x3D94488A86ABB03F(0);
}

bool func_151()
{
	return Global_1573341;
}

void func_152(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, 1, iParam1);
}

bool func_153()
{
	return unk_0x05EFB6A616B6FADE(Global_2524719.f_1721, 21);
}

bool func_154()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_146, 3);
}

void func_155()
{
	float fVar0;
	float fVar1;
	
	if (Local_103.f_3 == 4)
	{
		if (func_44(unk_0xD4E735F4B6A956AC(), 1, 1))
		{
			if (!func_392(Local_103))
			{
				iLocal_114 = unk_0x2B3422BC14FE3213(Local_103.f_29);
				if (iLocal_114 >= 0)
				{
					if (unk_0xFE5DE0C3200E00F2(iLocal_114))
					{
						fVar0 = unk_0x33CECDD9E141E18E(iLocal_114);
						fVar0 = (fVar0 * 1000f);
						if (fVar0 <= 890f)
						{
							func_156(round(fVar0), 890, "HUP_PROG", func_160(unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC())), 0, 1, 13);
						}
						fVar1 = unk_0xE73716DDDEA67FE1(unk_0xD4E735F4B6A956AC());
						fVar1 = (fVar1 - 0.3f);
						if (fVar1 < 0f)
						{
							fVar1 = 0f;
						}
						fVar1 = (fVar1 * 4f);
						Local_104[unk_0xD60943E3BE730BF0() /*10*/].f_6 = fVar1;
					}
				}
			}
		}
	}
}

void func_156(int iParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	func_157(iParam0, iParam1, sParam2, uParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0);
}

void func_157(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_159(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1369750.f_1 = 1;
		func_158(0, iVar0);
		Global_1369750.f_1093[iVar0] = uParam0;
		Global_1369750.f_1093.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1369750.f_1093.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1369750.f_1093.f_194[iVar0] = uParam3;
		Global_1369750.f_1093.f_183[iVar0] = uParam4;
		Global_1369750.f_1093.f_216[iVar0] = uParam5;
		Global_1369750.f_1093.f_227[iVar0 /*3*/] = fParam6;
		Global_1369750.f_1093.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1369750.f_1093.f_258[iVar0] = iParam8;
		Global_1369750.f_1093.f_269[iVar0] = uParam9;
		Global_1369750.f_1093.f_312[iVar0] = iParam10;
		Global_1369750.f_1093.f_323[iVar0] = iParam11;
		Global_1369750.f_1093.f_334[iVar0] = iParam12;
		Global_1369750.f_1093.f_345[iVar0] = iParam13;
		Global_1369750.f_1088 = 1;
		Global_1369750.f_1093.f_356[iVar0] = iParam14;
		Global_1369750.f_1093.f_367[iVar0] = iParam15;
		Global_1369750.f_1093.f_378[iVar0] = iParam16;
		Global_1369750.f_1093.f_389[iVar0] = iParam17;
		Global_1369750.f_1093.f_400[iVar0] = iParam18;
		Global_1369750.f_1093.f_411[iVar0] = iParam19;
		Global_1369750.f_1093.f_422[iVar0] = iParam20;
		Global_1369750.f_1093.f_433[iVar0] = iParam21;
		Global_1369750.f_1093.f_444[iVar0] = iParam22;
		Global_1369750.f_1093.f_455[iVar0] = iParam23;
		Global_1369750.f_1093.f_466[iVar0] = iParam24;
	}
}

void func_158(int iParam0, int iParam1)
{
	unk_0x2BCFB39E86340DAA(&(Global_1369750.f_6130[iParam0]), iParam1);
}

bool func_159(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_1369750.f_6130[iParam0], iParam1);
}

int func_160(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	return 116;
}

void func_161()
{
	if (!unk_0x05EFB6A616B6FADE(Local_105.f_53, 2))
	{
		unk_0x6D68030C791111E0("oddjobs@shop_robbery@rob_till");
		unk_0x6D68030C791111E0(func_162());
		if (unk_0x39C2D9AB77873F84("oddjobs@shop_robbery@rob_till") && unk_0x39C2D9AB77873F84(func_162()))
		{
			unk_0x2BCFB39E86340DAA(&(Local_105.f_53), 2);
		}
	}
}

char* func_162()
{
	if (func_163(unk_0xD4E735F4B6A956AC()))
	{
		return "anim@am_hold_up@male";
	}
	return "anim@am_hold_up@female";
}

int func_163(int iParam0)
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		return 1;
	}
	return Global_2423801[iParam0 /*413*/].f_230;
}

int func_164(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { 0f, 0f, 0f };
	vVar1 = { 0f, 0f, 0f };
	fVar2 = 0f;
	func_165(iParam1, &vVar0, &vVar1, &fVar2);
	if (unk_0x54F6F5A823224519(iParam0, vVar0, vVar1, fVar2, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_165(int iParam0, var uParam1, var uParam2, float fParam3)
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1390.033f, 3605.529f, 33.98091f };
		*uParam2 = { 1394.412f, 3607.156f, 36.38288f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3041.675f, 583.5931f, 6.908931f };
		*uParam2 = { -3037.284f, 585.0375f, 9.521532f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3245.184f, 1000.124f, 11.83071f };
		*uParam2 = { -3240.504f, 999.7783f, 14.46645f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 549.5332f, 2668.464f, 41.15651f };
		*uParam2 = { 548.9114f, 2673.108f, 43.7766f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2554.316f, 380.8569f, 107.623f };
		*uParam2 = { 2558.98f, 380.6908f, 110.2684f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2675.476f, 3280.807f, 54.24115f };
		*uParam2 = { 2679.577f, 3278.526f, 56.8955f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1729.145f, 6417.834f, 34.03724f };
		*uParam2 = { 1727.07f, 6413.635f, 36.66442f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1958.61f, 3742.512f, 31.34376f };
		*uParam2 = { 1960.958f, 3738.465f, 33.98634f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 24.51093f, -1344.449f, 28.49703f };
		*uParam2 = { 24.52224f, -1349.084f, 31.14272f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 373.296f, 329.2379f, 102.5664f };
		*uParam2 = { 372.1347f, 324.6985f, 105.214f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1168.183f, 2711.203f, 37.06316f };
		*uParam2 = { 1163.144f, 2711.246f, 40.16688f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2966.142f, 388.6418f, 14.04331f };
		*uParam2 = { -2965.812f, 393.6473f, 17.17248f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1223.599f, -909.8984f, 11.32635f };
		*uParam2 = { -1219.443f, -907.0756f, 14.45929f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.524f, -980.3087f, 45.41582f };
		*uParam2 = { 1134.22f, -985.284f, 48.53235f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.413f, -379.3236f, 39.16341f };
		*uParam2 = { -1487.954f, -375.7666f, 42.28885f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1699.447f, 4921.57f, 41.06366f };
		*uParam2 = { 1695.64f, 4924.245f, 44.22165f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -705.7869f, -911.6997f, 18.2156f };
		*uParam2 = { -705.7026f, -916.374f, 21.33545f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.26995f, -1756.669f, 28.42101f };
		*uParam2 = { -48.26036f, -1760.285f, 31.56342f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1164.697f, -320.7587f, 68.2051f };
		*uParam2 = { 1165.463f, -325.0899f, 71.37893f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1821.205f, 795.8699f, 137.0893f };
		*uParam2 = { -1818.041f, 792.3982f, 140.1836f };
		*fParam3 = 2.25f;
	}
}

void func_166(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_168(&iVar0, 0, iParam1))
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
		unk_0x93DA13E8C75A3B00(9, 0);
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
		func_167(&(Global_17367.f_5658[iVar0 /*10*/]));
		Global_17367.f_5719[iVar0] = 0;
	}
	else
	{
		Global_17367.f_5719[iVar0] = 0;
	}
}

void func_167(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x0FA486DE15EB3004(*uParam0))
		{
			unk_0x86795B44CE5FE021(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_168(var uParam0, bool bParam1, int iParam2)
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

bool func_169(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_168(&iVar0, 1, iParam1))
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
	unk_0x8000C77B5F336760("CommonMenu", 0);
	Global_17367.f_5612[iVar0] = 1;
	if (!unk_0x87DF091EDFE6D083("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x8000C77B5F336760("MPShopSale", 0);
		Global_17367.f_5619[iVar0] = 1;
		if (!unk_0x87DF091EDFE6D083("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17367.f_5658[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_170(&(Global_17367.f_5658[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_170(var uParam0)
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

int func_171()
{
	if (unk_0x8B1574454E8C2421(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_172(int iParam0)
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

void func_173()
{
	if (unk_0xD4E735F4B6A956AC() != Global_2524719.f_4808)
	{
		if (!unk_0x05EFB6A616B6FADE(Local_105.f_52, 24))
		{
			if (Local_103.f_72 == unk_0xD4E735F4B6A956AC() || (unk_0x05EFB6A616B6FADE(Local_105.f_52, 31) && unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_145, 20f, 20f, 20f, 0, 1, 0)))
			{
				if (func_392(Local_103))
				{
					if (func_148())
					{
						if (func_147() < 3)
						{
							unk_0x920EAF82B3E570B4(unk_0xD4E735F4B6A956AC(), 37, unk_0x1105C926E38D2066(func_147()));
						}
						else
						{
							unk_0x920EAF82B3E570B4(unk_0xD4E735F4B6A956AC(), 37, unk_0x1105C926E38D2066(3));
						}
					}
					else
					{
						unk_0x920EAF82B3E570B4(unk_0xD4E735F4B6A956AC(), 13, unk_0x1105C926E38D2066(3));
					}
					unk_0x2BCFB39E86340DAA(&(Local_105.f_52), 24);
					if (!unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 1))
					{
						unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 2);
					}
				}
			}
		}
	}
}

int func_174()
{
	if (!unk_0x05EFB6A616B6FADE(Local_103.f_25, 0))
	{
		return 0;
	}
	if (func_392(Local_103.f_15))
	{
		if (unk_0xCE3CB618AFE55EFB(iLocal_333))
		{
			unk_0xE1623437A3194332(&iLocal_333);
		}
		return 0;
	}
	if (Local_103.f_66 == 4)
	{
		if (!unk_0xCE3CB618AFE55EFB(iLocal_333))
		{
			iLocal_333 = unk_0x6A15DD6A863D5E27(unk_0x8A5B683BACF7B78C(Local_103.f_15));
			unk_0x570128B7829A8EAA(iLocal_333, 1);
			unk_0x575CF00E129E0CE1(iLocal_333, 0.7f);
		}
	}
	if (!unk_0xABF0452BE64AD290(Local_103.f_15))
	{
		return 0;
	}
	switch (Local_103.f_66)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103.f_15), 713668775) != 0)
			{
				if (unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103.f_15), 713668775) != 1)
				{
					if (func_44(unk_0xD4E735F4B6A956AC(), 1, 1))
					{
						unk_0x8F65948C5AFB744E(unk_0x8A5B683BACF7B78C(Local_103.f_15), unk_0xA19140A5C42D8715(), -1, 4f, 2f, 1073741824, 0);
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x05EFB6A616B6FADE(Local_103.f_25, 5) && !unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/].f_5, 0))
			{
				if (unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103.f_15), 1227113341) != 0 && unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103.f_15), 1227113341) != 1)
				{
					unk_0x0177431263151C4E(unk_0x8A5B683BACF7B78C(Local_103.f_15), unk_0xA19140A5C42D8715(), 10000);
					unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/].f_5), 0);
				}
			}
			if ((!unk_0x05EFB6A616B6FADE(Local_103.f_25, 6) && !unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/].f_5, 1)) && !func_175())
			{
				func_391(&uLocal_151, 4, unk_0x8A5B683BACF7B78C(Local_103.f_15), "StoreHero", 1, 0);
				unk_0xE85BD4A26C0DFACA(unk_0x8A5B683BACF7B78C(Local_103.f_15), "GENERIC_INSULT_HIGH", "SPEECH_PARAMS_FORCE", 1);
				unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/].f_5), 1);
			}
			break;
		
		case 4:
			if ((!unk_0x05EFB6A616B6FADE(Local_103.f_25, 7) && !unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/].f_5, 2)) && !func_175())
			{
				func_391(&uLocal_151, 4, unk_0x8A5B683BACF7B78C(Local_103.f_15), "StoreHero", 1, 0);
				unk_0xE85BD4A26C0DFACA(unk_0x8A5B683BACF7B78C(Local_103.f_15), "GENERIC_FUCK_YOU", "SPEECH_PARAMS_FORCE", 1);
				unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/].f_5), 2);
			}
			if (unk_0x05EFB6A616B6FADE(Local_103.f_25, 7) || unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/].f_5, 2))
			{
				if (unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103.f_15), -1442466670) != 0 && unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103.f_15), -1442466670) != 1)
				{
					unk_0x9568B1B58F78FF36(unk_0x8A5B683BACF7B78C(Local_103.f_15));
					unk_0xDFA901280292A2FB(unk_0x8A5B683BACF7B78C(Local_103.f_15), Global_1574987);
					unk_0xB943C83C5BDB3DBB(unk_0x8A5B683BACF7B78C(Local_103.f_15), 20f, 0);
					unk_0xD738221C247C8B71(unk_0x8A5B683BACF7B78C(Local_103.f_15), 1);
				}
			}
			break;
		
		case 5:
			if (unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103.f_15), 242628503) != 0 && unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103.f_15), 242628503) != 1)
			{
				unk_0x9568B1B58F78FF36(unk_0x8A5B683BACF7B78C(Local_103.f_15));
				unk_0xE1072FA2FECBAD96(unk_0x8A5B683BACF7B78C(Local_103.f_15), uLocal_119);
				unk_0xD738221C247C8B71(unk_0x8A5B683BACF7B78C(Local_103.f_15), 1);
			}
			else if (unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103.f_15), -875674219) != 1 && unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103.f_15), -875674219) != 0)
			{
				if (func_17(&uLocal_135, 5000, 0))
				{
					func_13(&uLocal_135);
					unk_0x0177431263151C4E(unk_0x8A5B683BACF7B78C(Local_103.f_15), unk_0xA19140A5C42D8715(), 10000);
				}
			}
			break;
	}
	return 1;
}

int func_175()
{
	if (Global_15822 != 0 || unk_0x904275961B875DEB())
	{
		return 1;
	}
	return 0;
}

void func_176()
{
	if (Local_103.f_3 == 4)
	{
		if ((!unk_0x05EFB6A616B6FADE(Local_103.f_23, 10) && !unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 4)) && unk_0x05EFB6A616B6FADE(Local_103.f_23, 17))
		{
			if (unk_0x83A1DA4E6C55E952(Local_103.f_13))
			{
				if (unk_0xABF0452BE64AD290(Local_103.f_13) || (!unk_0x8F01F94322569B77(Local_103.f_13) && unk_0x45F99485D7E1C29A()))
				{
					if (!func_392(Local_103))
					{
						if (unk_0x685AE6AF34B35D3B(unk_0x8A5B683BACF7B78C(Local_103)))
						{
							unk_0xDCFB67537602326F(unk_0xEA0B19D3958DA45D(Local_103.f_13), true, 0);
							unk_0x9018100BC4DCB099(unk_0xEA0B19D3958DA45D(Local_103.f_13), 1);
							unk_0xE192BEF245E3374D(unk_0xEA0B19D3958DA45D(Local_103.f_13), 0f, 0f, -1f);
							unk_0xE5D9346AE3BC7E41(unk_0x8A5B683BACF7B78C(Local_103), 16);
							unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 4);
						}
					}
					else
					{
						unk_0xDCFB67537602326F(unk_0xEA0B19D3958DA45D(Local_103.f_13), true, 0);
						unk_0x9018100BC4DCB099(unk_0xEA0B19D3958DA45D(Local_103.f_13), 1);
						unk_0xE192BEF245E3374D(unk_0xEA0B19D3958DA45D(Local_103.f_13), 0f, 0f, -1f);
						unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 4);
					}
				}
			}
		}
	}
	func_177();
}

void func_177()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x83A1DA4E6C55E952(Local_103.f_13))
	{
		if (!unk_0x7112137033807390(unk_0xEA0B19D3958DA45D(Local_103.f_13), 0))
		{
			if ((!unk_0x05EFB6A616B6FADE(Local_103.f_23, 11) && !unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 5)) && Local_103.f_37 > 0f)
			{
				if (((func_224() || func_223(0.87f)) || Local_103.f_3 >= 5) || unk_0x05EFB6A616B6FADE(Local_103.f_23, 10))
				{
					if (!unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 11))
					{
						if (unk_0xABF0452BE64AD290(Local_103.f_13))
						{
							unk_0xB3B23099FB6384A0(unk_0xEA0B19D3958DA45D(Local_103.f_13), 0, 0);
							unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 13);
						}
						if (func_93(unk_0xD4E735F4B6A956AC()) != 155)
						{
							unk_0xFF61B53040964FAA(func_50(1), 1);
						}
						unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 11);
					}
					if (unk_0x0F393FB075B30EB5(unk_0xEA0B19D3958DA45D(Local_103.f_13), unk_0xA19140A5C42D8715()))
					{
						Local_104[unk_0xD60943E3BE730BF0() /*10*/].f_7 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
						unk_0x8F7BA8E028ADF980(Local_104[unk_0xD60943E3BE730BF0() /*10*/].f_7, &(Local_104[unk_0xD60943E3BE730BF0() /*10*/].f_7.f_2), 0, 0);
						if (unk_0xABF0452BE64AD290(Local_103.f_13))
						{
							unk_0xF334C9B245CD323D(unk_0xEA0B19D3958DA45D(Local_103.f_13), 1, 1);
							func_45(&(Local_103.f_13));
						}
						iVar0 = unk_0x22C775856F4633CA(iLocal_132, iLocal_133);
						if (unk_0x05EFB6A616B6FADE(Local_103.f_23, 10))
						{
							iVar0 = floor((to_float(iVar0) * Local_103.f_37));
						}
						if (Local_103.f_4 > 1000)
						{
							Local_103.f_4 = 1000;
						}
						iVar0 = (iVar0 + Local_103.f_4);
						iVar0 = func_222(iVar0, 1);
						if (iVar0 > Global_262145.f_166)
						{
							iVar0 = Global_262145.f_166;
						}
						if (func_221(unk_0xD4E735F4B6A956AC()) && func_219(func_220(unk_0xD4E735F4B6A956AC())) < 1f)
						{
							if (Global_262145.f_4226 > 1f)
							{
								Global_262145.f_4226 = 1f;
							}
							iVar0 = round((to_float(iVar0) * Global_262145.f_4226));
						}
						if (iVar0 > 0)
						{
							if (func_218())
							{
								func_207(1734805203, iVar0, &uVar1, 0, 0, 0);
							}
							else
							{
								func_203(iVar0, 1, 1, 1092616192);
								unk_0x15BF7AD14F08DDD2(iVar0);
							}
						}
						Global_2524719.f_5630 = (Global_2524719.f_5630 + iVar0);
						Global_2524719.f_5630.f_2 = 1;
						Global_2524719.f_5630.f_5 = 1;
						iLocal_335 = (iLocal_335 + iVar0);
						func_202(3);
						if (!unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 5))
						{
							func_201(Local_103.f_38, iVar0);
						}
						else
						{
							func_192(unk_0xA19140A5C42D8715(), iVar0);
						}
						func_191(1, iVar0);
						if (func_187(1))
						{
							func_178(4);
						}
						unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 5);
						unk_0x2BCFB39E86340DAA(&(Local_105.f_53), 6);
					}
				}
			}
		}
	}
}

void func_178(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_17562;
			break;
		
		case 1:
			iVar0 = Global_262145.f_17552;
			break;
		
		case 2:
			iVar0 = Global_262145.f_17563;
			break;
		
		case 3:
			iVar0 = Global_262145.f_17555;
			break;
		
		case 4:
			iVar0 = Global_262145.f_17551;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_17566;
			break;
		
		case 8:
			iVar0 = Global_262145.f_17567;
			break;
		
		case 9:
			iVar0 = Global_262145.f_17570;
			break;
		
		case 22:
			iVar0 = Global_262145.f_17571;
			break;
		
		case 23:
			iVar0 = Global_262145.f_17564;
			break;
		
		case 25:
			iVar0 = Global_262145.f_18452;
			break;
		
		case 26:
			iVar0 = Global_262145.f_18451;
			break;
	}
	if (iVar0 != 0)
	{
		unk_0x96A237505F2C30D0(func_185(func_186()), func_183(func_186()), func_182(), func_181(), iParam0, iVar0);
	}
	func_180(iVar0);
	func_179(iVar0);
}

void func_179(int iParam0)
{
	int iVar0;
	
	iVar0 = func_130(3968, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_449 = iVar0;
	func_128(3968, iVar0, -1, 1, 0);
}

void func_180(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xD4E735F4B6A956AC();
	Global_1625435[iVar0 /*560*/].f_11.f_448 = (Global_1625435[iVar0 /*560*/].f_11.f_448 + iParam0);
	if (Global_1625435[iVar0 /*560*/].f_11.f_448 < -9999)
	{
		Global_1625435[iVar0 /*560*/].f_11.f_448 = 9999;
	}
	else if (Global_1625435[iVar0 /*560*/].f_11.f_448 > 9999)
	{
		Global_1625435[iVar0 /*560*/].f_11.f_448 = 9999;
	}
}

int func_181()
{
	if (Global_1666806.f_3 != 0)
	{
		return Global_1666806.f_3;
	}
	return -1;
}

int func_182()
{
	if (Global_1666806.f_2 != 0)
	{
		return Global_1666806.f_2;
	}
	return -1;
}

int func_183(int iParam0)
{
	if (iParam0 == func_184())
	{
		return -1;
	}
	return Global_1625435[iParam0 /*560*/].f_11.f_8[1];
}

int func_184()
{
	return -1;
}

int func_185(int iParam0)
{
	if (iParam0 == func_184())
	{
		return -1;
	}
	return Global_1625435[iParam0 /*560*/].f_11.f_8[0];
}

int func_186()
{
	return Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11;
}

bool func_187(bool bParam0)
{
	return func_188(unk_0xD4E735F4B6A956AC(), bParam0);
}

int func_188(int iParam0, bool bParam1)
{
	return func_189(iParam0, bParam1, 1);
}

int func_189(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_184())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_190(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1625435[iParam0 /*560*/].f_11;
	if (iVar0 != func_184() && Global_1625435[iVar0 /*560*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_190(int iParam0, int iParam1)
{
	if (iParam0 != func_184())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_184())
		{
			if (Global_1625435[iParam0 /*560*/].f_11 == iParam0 && Global_1625435[iParam0 /*560*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_191(int iParam0, int iParam1)
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

void func_192(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0 = { func_199(unk_0xA19140A5C42D8715(), 1) };
	if (iParam0 == func_198(unk_0xA19140A5C42D8715()))
	{
		func_197(1);
	}
	func_193(vVar0, iParam1, 7, 0, 0);
}

void func_193(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2437022.f_1285[iVar0 /*30*/].f_6 == 0 || Global_2437022.f_1285[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2437022.f_1285[iVar1 /*30*/] = { vParam0 };
			Global_2437022.f_1285[iVar1 /*30*/].f_6 = 1;
			Global_2437022.f_1285[iVar1 /*30*/].f_4 = func_196(Global_2437022.f_1285[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437022.f_1285[iVar1 /*30*/].f_7 = unk_0xFFCC7EBF88BDEE54();
			Global_2437022.f_1285[iVar1 /*30*/].f_3 = iParam1;
			Global_2437022.f_1285[iVar1 /*30*/].f_8 = iParam2;
			Global_2437022.f_1285[iVar1 /*30*/].f_9 = func_195();
			Global_2437022.f_1285[iVar1 /*30*/].f_10 = func_194();
			StringCopy(&(Global_2437022.f_1285[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2437022.f_1285[iVar1 /*30*/].f_26 = unk_0x8039F92D4B9C6B71(unk_0xFFCC7EBF88BDEE54(), iParam4);
		}
	}
}

int func_194()
{
	if (Global_2437022.f_1886)
	{
		Global_2437022.f_1886 = 0;
		return 1;
	}
	Global_2437022.f_1886 = 0;
	return 0;
}

var func_195()
{
	var uVar0;
	
	uVar0 = Global_2437022.f_1888;
	Global_2437022.f_1888 = 1;
	return uVar0;
}

float func_196(vector3 vParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x499324B3EF19C288(unk_0x1E8E507A99E298E6(), vParam0, 1);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

void func_197(int iParam0)
{
	Global_2437022.f_1886 = iParam0;
}

int func_198(int iParam0)
{
	return iParam0;
}

Vector3 func_199(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (unk_0x45AEA43E60C1F922())
	{
		vVar1 = { unk_0x087F3F13CDC55984(2) };
	}
	if (iParam0 == func_200(unk_0xA19140A5C42D8715()) && unk_0x1F7BAD75218F1A2C(unk_0x9F302D755A846102()) == 4)
	{
		vVar0 = { unk_0x3201284584C7CD83(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { unk_0xE2BBD32891C18569(iParam0, 0) };
	}
	fVar2 = 0f;
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		fVar2 = unk_0x552C823E1D2A019C(iParam0);
		if (unk_0x1F7BAD75218F1A2C(unk_0x9F302D755A846102()) == 4)
		{
			fVar2 = vVar1.z;
		}
	}
	unk_0xDFCF5BB9A4E3B293(unk_0x8F474E419F56E48D(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0.18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0.18f);
	}
	vVar0 = { unk_0x2F230B37E9FFF23F(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_200(int iParam0)
{
	return iParam0;
}

void func_201(vector3 vParam0, int iParam1)
{
	func_193(vParam0, iParam1, 6, 0, 0);
}

void func_202(int iParam0)
{
	Global_2437022.f_1888 = iParam0;
}

void func_203(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_204(iParam0, iParam1, iParam2, fParam3);
}

void func_204(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_205(iParam0, iParam1, iParam2, fParam3);
}

void func_205(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = floor((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_4 = iVar1;
	Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_3 = (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_206(iVar1, 0);
	}
}

void func_206(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_207(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_218())
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
				func_208(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_208(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -597978445:
			if (iParam1 > 0)
			{
				func_208(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
			func_208(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_208(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_218())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_77()) || unk_0x64BE694244417BDA())
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
			*uParam0 = func_215(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_214(1, iParam4);
			Global_4263477 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_209(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_209(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x2BCFB39E86340DAA(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_210(iParam0);
	}
}

void func_210(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_218())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_213(iParam0))
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
		func_211(&(Global_4262927[iParam0 /*80*/]));
	}
}

void func_211(var uParam0)
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
	func_212(&(uParam0->f_13));
	func_212(&(uParam0->f_13.f_13));
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

void func_212(var uParam0)
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

int func_213(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_5 == 1;
	}
	return 0;
}

void func_214(int iParam0, int iParam1)
{
	Global_2460521 = iParam1;
	Global_2460520 = iParam0;
}

int func_215(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4262927[iVar0 /*80*/].f_61.f_2 == 0)
		{
			if (!func_218())
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
			if (iParam1 == -1135378931 && bParam10)
			{
				func_216(Global_4262927[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_216(struct<62> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_8(vVar0.y);
	if ((Global_262145.f_23427 && !Global_262145.f_23428) && !Global_262145.f_23429)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_217();
		unk_0x04F37AFC39D93909(1, &vVar0, 35, iVar1);
	}
}

void func_217()
{
	unk_0xD75A4240F0AD8613("AM_ARENA_SHP");
}

int func_218()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

float func_219(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_220(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1625435[iVar0 /*560*/];
	}
	return -1;
}

int func_221(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1625435[iVar0 /*560*/] != -1;
	}
	return 0;
}

int func_222(int iParam0, int iParam1)
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

int func_223(float fParam0)
{
	iLocal_114 = unk_0x2B3422BC14FE3213(Local_103.f_29);
	if (iLocal_114 >= 0)
	{
		if (unk_0xFE5DE0C3200E00F2(iLocal_114))
		{
			if (unk_0x33CECDD9E141E18E(iLocal_114) >= fParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_224()
{
	iLocal_114 = unk_0x2B3422BC14FE3213(Local_103.f_29);
	if (iLocal_114 >= 0)
	{
		if (unk_0xFE5DE0C3200E00F2(iLocal_114))
		{
			if (unk_0x33CECDD9E141E18E(iLocal_114) >= 1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_225()
{
	func_226();
}

int func_226()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0xABF0452BE64AD290(Local_103))
	{
		return 0;
	}
	if (func_392(Local_103))
	{
		if (!unk_0x05EFB6A616B6FADE(Local_105.f_53, 3))
		{
			unk_0x5DC4C018E76213CE(unk_0x8A5B683BACF7B78C(Local_103));
			unk_0x2BCFB39E86340DAA(&(Local_105.f_53), 3);
		}
		return 0;
	}
	switch (Local_103.f_3)
	{
		case 0:
			unk_0xB0D7019224A3A443(unk_0x8A5B683BACF7B78C(Local_103), 71, 1);
			break;
		
		case 1:
			if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 4) && !unk_0x05EFB6A616B6FADE(Local_103.f_23, 12))
			{
				if (unk_0x05EFB6A616B6FADE(Local_103.f_23, 13))
				{
					if (!unk_0x05EFB6A616B6FADE(Local_105.f_52, 17))
					{
						unk_0xE5D9346AE3BC7E41(unk_0x8A5B683BACF7B78C(Local_103), 16);
						unk_0x22DD1D053CFF9707(unk_0x8A5B683BACF7B78C(Local_103), unk_0xA19140A5C42D8715(), -1, 0, 2);
						if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
						{
							func_232(10);
						}
						else if (unk_0x05EFB6A616B6FADE(Local_103.f_24, 0))
						{
							if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 11))
							{
								if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 12))
								{
									func_232(13);
								}
								else
								{
									func_232(20);
								}
							}
							else
							{
								func_232(17);
							}
							unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 25);
						}
						else if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 11))
						{
							if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 12))
							{
								func_232(0);
							}
							else
							{
								func_232(18);
							}
						}
						else
						{
							func_232(15);
						}
						unk_0x2BCFB39E86340DAA(&(Local_105.f_52), 17);
					}
					else if (unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103), -875674219) != 1 && unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103), -875674219) != 0)
					{
						if (func_17(&uLocal_135, 5000, 0))
						{
							func_13(&uLocal_135);
							if (!iLocal_108)
							{
								unk_0x0177431263151C4E(unk_0x8A5B683BACF7B78C(Local_103), unk_0xA19140A5C42D8715(), 10000);
							}
							unk_0x22DD1D053CFF9707(unk_0x8A5B683BACF7B78C(Local_103), unk_0xA19140A5C42D8715(), -1, 0, 2);
						}
					}
				}
			}
			unk_0xB0D7019224A3A443(unk_0x8A5B683BACF7B78C(Local_103), 71, 1);
			break;
		
		case 2:
			if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 7) && !unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 0))
			{
				iVar1 = unk_0xA19140A5C42D8715();
				if (Local_103.f_32 > -1)
				{
					if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(Local_103.f_32)))
					{
						iVar0 = unk_0x9279C21787650C40(unk_0xDF1881EF65347257(Local_103.f_32));
						iVar1 = unk_0xEE978C39384D834F(iVar0);
					}
				}
				if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					unk_0x22DD1D053CFF9707(unk_0x8A5B683BACF7B78C(Local_103), iVar1, -1, 0, 2);
					unk_0xE5D9346AE3BC7E41(unk_0x8A5B683BACF7B78C(Local_103), 16);
					unk_0x3F01127ECD227890(unk_0x8A5B683BACF7B78C(Local_103), "mp_am_hold_up", "WARY_LOOP", 4f, -4f, -1, 49, 0, 0, 0, 0);
					unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 0);
				}
			}
			else if (unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103), -875674219) != 1 && unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103), -875674219) != 0)
			{
				if (func_17(&uLocal_135, 5000, 0))
				{
					iVar1 = unk_0xA19140A5C42D8715();
					if (Local_103.f_32 > -1)
					{
						if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(Local_103.f_32)))
						{
							iVar0 = unk_0x9279C21787650C40(unk_0xDF1881EF65347257(Local_103.f_32));
							iVar1 = unk_0xEE978C39384D834F(iVar0);
						}
					}
					func_13(&uLocal_135);
					unk_0x0177431263151C4E(unk_0x8A5B683BACF7B78C(Local_103), iVar1, 10000);
					unk_0x22DD1D053CFF9707(unk_0x8A5B683BACF7B78C(Local_103), iVar1, -1, 0, 2);
				}
			}
			if (unk_0x05EFB6A616B6FADE(Local_103.f_23, 16))
			{
				unk_0xE5D9346AE3BC7E41(unk_0x8A5B683BACF7B78C(Local_103), 16);
			}
			unk_0xB0D7019224A3A443(unk_0x8A5B683BACF7B78C(Local_103), 71, 1);
			break;
		
		case 3:
			if (!unk_0x05EFB6A616B6FADE(Local_105.f_52, 25))
			{
				if (unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103), 1920390111) != 0 && unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103), 1920390111) != 1)
				{
					unk_0xD738221C247C8B71(unk_0x8A5B683BACF7B78C(Local_103), 1);
					unk_0xC2C4AE9DB4A0BEF3(unk_0x8A5B683BACF7B78C(Local_103), 2, false);
					unk_0xC2C4AE9DB4A0BEF3(unk_0x8A5B683BACF7B78C(Local_103), 8, true);
					unk_0xC2C4AE9DB4A0BEF3(unk_0x8A5B683BACF7B78C(Local_103), 16, true);
					unk_0xE5D9346AE3BC7E41(unk_0x8A5B683BACF7B78C(Local_103), 16);
					unk_0x47D73A216DD513C8(unk_0x8A5B683BACF7B78C(Local_103), Local_103.f_42, -1);
					unk_0x2BCFB39E86340DAA(&(Local_105.f_52), 25);
				}
			}
			break;
		
		case 4:
			if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 17) && !unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 3))
			{
				if (unk_0x45F99485D7E1C29A())
				{
					Global_2524719.f_8 = 1;
				}
				iVar2 = unk_0xA19140A5C42D8715();
				if (Global_2524719.f_9 != func_184())
				{
					if (func_44(Global_2524719.f_9, 1, 1))
					{
						iVar2 = unk_0xEE978C39384D834F(Global_2524719.f_9);
					}
				}
				unk_0x22DD1D053CFF9707(unk_0x8A5B683BACF7B78C(Local_103), iVar2, 30000, 0, 3);
				unk_0xDFE3D9A662CDD63B(unk_0x8A5B683BACF7B78C(Local_103), "mood_stressed_1", 0);
				unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 3);
			}
			else
			{
				iLocal_114 = unk_0x2B3422BC14FE3213(Local_103.f_29);
				if (iLocal_114 >= 0)
				{
					if (unk_0xFE5DE0C3200E00F2(iLocal_114))
					{
						fLocal_318 = (Local_103.f_33 + 0.6f);
						if (fLocal_318 < 0.75f)
						{
							fLocal_318 = 0.75f;
						}
						if (unk_0x05EFB6A616B6FADE(Local_103.f_24, 4))
						{
							fLocal_318 = (fLocal_318 + 0.25f);
						}
						if (fLocal_318 > 1.75f)
						{
							fLocal_318 = 1.75f;
						}
						unk_0xFD3094511F55AB5D(iLocal_114, fLocal_318);
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 10))
			{
				if (unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103), 242628503) != 0 && unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103), 242628503) != 1)
				{
					if (!unk_0x685AE6AF34B35D3B(unk_0x8A5B683BACF7B78C(Local_103)))
					{
						iLocal_114 = unk_0x2B3422BC14FE3213(Local_103.f_29);
						if ((iLocal_114 >= 0 && !unk_0xFE5DE0C3200E00F2(iLocal_114)) || iLocal_114 < 0)
						{
							unk_0xE1072FA2FECBAD96(unk_0x8A5B683BACF7B78C(Local_103), uLocal_119);
							unk_0xE5D9346AE3BC7E41(unk_0x8A5B683BACF7B78C(Local_103), 16);
							unk_0xD738221C247C8B71(unk_0x8A5B683BACF7B78C(Local_103), 1);
							unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 10);
						}
					}
				}
			}
			else if (unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103), -875674219) != 1 && unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103), -875674219) != 0)
			{
				if (func_17(&uLocal_135, 5000, 0))
				{
					func_13(&uLocal_135);
					iVar1 = unk_0xA19140A5C42D8715();
					if (Local_103.f_32 > -1)
					{
						if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(Local_103.f_32)))
						{
							iVar0 = unk_0x9279C21787650C40(unk_0xDF1881EF65347257(Local_103.f_32));
							iVar1 = unk_0xEE978C39384D834F(iVar0);
						}
					}
					unk_0x0177431263151C4E(unk_0x8A5B683BACF7B78C(Local_103), iVar1, 10000);
					unk_0x22DD1D053CFF9707(unk_0x8A5B683BACF7B78C(Local_103), unk_0xA19140A5C42D8715(), -1, 0, 2);
				}
			}
			break;
		
		case 6:
			if (!unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 10))
			{
				if ((iLocal_114 < 0 || !unk_0xFE5DE0C3200E00F2(iLocal_114)) || unk_0x33CECDD9E141E18E(iLocal_114) >= 0.95f)
				{
					func_231();
					iVar1 = unk_0xA19140A5C42D8715();
					if (Local_103.f_32 > -1)
					{
						if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(Local_103.f_32)))
						{
							iVar0 = unk_0x9279C21787650C40(unk_0xDF1881EF65347257(Local_103.f_32));
							iVar1 = unk_0xEE978C39384D834F(iVar0);
						}
					}
					unk_0xABC4374E9189E483(unk_0x8A5B683BACF7B78C(Local_103), -1, iVar1, -1, 1);
					unk_0x3A3E4B7C6FBE305D(unk_0x8A5B683BACF7B78C(Local_103), 0, 0);
					unk_0xE5D9346AE3BC7E41(unk_0x8A5B683BACF7B78C(Local_103), 16);
					unk_0xD738221C247C8B71(unk_0x8A5B683BACF7B78C(Local_103), 1);
					unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 10);
				}
			}
			break;
		
		case 7:
			if (unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103), -1442466670) != 0 && unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103), -1442466670) != 1)
			{
				if (!func_175())
				{
					func_230();
					unk_0x9568B1B58F78FF36(unk_0x8A5B683BACF7B78C(Local_103));
					unk_0xB943C83C5BDB3DBB(unk_0x8A5B683BACF7B78C(Local_103), 20f, 0);
					func_232(4);
				}
			}
			break;
		
		case 8:
			if (!unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 9))
			{
				func_231();
				iLocal_114 = unk_0x2B3422BC14FE3213(Local_103.f_29);
				if ((iLocal_114 >= 0 && !unk_0xFE5DE0C3200E00F2(iLocal_114)) || iLocal_114 < 0)
				{
					if ((!unk_0x05EFB6A616B6FADE(Local_103.f_23, 27) && !func_36()) && !func_35())
					{
						if (unk_0x05EFB6A616B6FADE(Local_103.f_24, 2))
						{
							if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 3))
							{
								unk_0xE1072FA2FECBAD96(unk_0x8A5B683BACF7B78C(Local_103), uLocal_121);
								iVar3 = 1;
							}
							else
							{
								func_230();
								unk_0xE1072FA2FECBAD96(unk_0x8A5B683BACF7B78C(Local_103), uLocal_122);
								iVar3 = 1;
							}
						}
					}
					else
					{
						unk_0x1659AF2827EC9D40(unk_0x8A5B683BACF7B78C(Local_103), vLocal_112, 250f, -1, 1, 0);
						iVar3 = 1;
					}
					if (iVar3 == 1)
					{
						func_232(25);
						unk_0xD738221C247C8B71(unk_0x8A5B683BACF7B78C(Local_103), 1);
						func_6(Local_105.f_50, 1, func_7());
						unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 9);
					}
				}
			}
			else if (!unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 19))
			{
				iVar4 = unk_0xFD23BED97E9C72A9(unk_0x8A5B683BACF7B78C(Local_103));
				if (iVar4 == 3)
				{
					unk_0x3F29BBC16DCB8A23(unk_0x8A5B683BACF7B78C(Local_103));
					unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 19);
				}
				else if (iVar4 == 2)
				{
					unk_0x9568B1B58F78FF36(unk_0x8A5B683BACF7B78C(Local_103));
					if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 3))
					{
						unk_0xE1072FA2FECBAD96(unk_0x8A5B683BACF7B78C(Local_103), uLocal_123);
					}
					else
					{
						unk_0xB943C83C5BDB3DBB(unk_0x8A5B683BACF7B78C(Local_103), 20f, 0);
					}
					unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 19);
				}
			}
			break;
	}
	func_227();
	return 1;
}

void func_227()
{
	if ((Local_103.f_3 != 8 && Local_103.f_3 != 7) && Local_103.f_2 == 3)
	{
		if ((((!unk_0x05EFB6A616B6FADE(Local_103.f_23, 14) || !unk_0x05EFB6A616B6FADE(Local_103.f_23, 15)) || !unk_0x05EFB6A616B6FADE(Local_103.f_23, 22)) || !unk_0x05EFB6A616B6FADE(Local_103.f_23, 23)) || !unk_0x05EFB6A616B6FADE(Local_103.f_23, 30))
		{
			iLocal_114 = unk_0x2B3422BC14FE3213(Local_103.f_29);
			if (iLocal_114 >= 0)
			{
				if (unk_0xFE5DE0C3200E00F2(iLocal_114))
				{
					if (!func_175())
					{
						if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 14) && !unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 6))
						{
							func_232(2);
							unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 6);
						}
						if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 15) && !unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 7))
						{
							if (unk_0x33CECDD9E141E18E(iLocal_114) > 0.87f)
							{
								func_232(3);
								unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 7);
							}
						}
						if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 22) && !unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 22))
						{
							if (unk_0x05EFB6A616B6FADE(Local_103.f_23, 24) && !func_175())
							{
								func_232(11);
								unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 22);
							}
						}
						if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 23) && !unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 23))
						{
							if (unk_0x05EFB6A616B6FADE(Local_103.f_23, 25) && !func_175())
							{
								func_232(12);
								unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 23);
							}
						}
					}
				}
			}
		}
		if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 9))
		{
			if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 26) && !unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 24))
			{
				if (unk_0x05EFB6A616B6FADE(Local_103.f_23, 7))
				{
					if (!func_175())
					{
						if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 11))
						{
							if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 12))
							{
								func_232(1);
							}
							else
							{
								func_232(19);
							}
						}
						else
						{
							func_232(16);
						}
						unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 24);
						return;
					}
					else
					{
						func_228();
						return;
					}
				}
			}
			if (((!unk_0x05EFB6A616B6FADE(Local_103.f_23, 30) && !unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 25)) && !unk_0x05EFB6A616B6FADE(Local_103.f_23, 7)) && !unk_0x05EFB6A616B6FADE(Local_103.f_23, 4))
			{
				if (unk_0x05EFB6A616B6FADE(Local_103.f_24, 0) && !func_175())
				{
					if ((unk_0x05EFB6A616B6FADE(Local_103.f_23, 7) && unk_0x05EFB6A616B6FADE(Local_103.f_23, 4)) || (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 7) && !unk_0x05EFB6A616B6FADE(Local_103.f_23, 4)))
					{
						if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 11))
						{
							if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 12))
							{
								func_232(13);
							}
							else
							{
								func_232(20);
							}
						}
						else
						{
							func_232(17);
						}
						unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 25);
						return;
					}
				}
			}
			if (!unk_0x05EFB6A616B6FADE(Local_103.f_23, 31) && !unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 26))
			{
				if (unk_0x05EFB6A616B6FADE(Local_103.f_24, 1) && !func_175())
				{
					func_232(14);
					unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 26);
					return;
				}
			}
			if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 9) && !unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 31))
			{
				if (unk_0x05EFB6A616B6FADE(Local_103.f_24, 8) && !func_175())
				{
					func_232(22);
					unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 31);
					return;
				}
			}
			if (!unk_0x05EFB6A616B6FADE(Local_103.f_1, 3) && !unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/].f_1, 3))
			{
				if (unk_0x05EFB6A616B6FADE(Local_103.f_1, 2) && !func_175())
				{
					func_232(24);
					unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/].f_1), 3);
					return;
				}
			}
			if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 14) && !unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 20))
			{
				if (unk_0x05EFB6A616B6FADE(Local_103.f_24, 13) && !func_175())
				{
					func_232(23);
					unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 20);
					return;
				}
			}
		}
	}
	if (!unk_0x05EFB6A616B6FADE(Local_103.f_24, 6) && !unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 29))
	{
		if (unk_0x05EFB6A616B6FADE(Local_103.f_24, 5))
		{
			if (!func_175())
			{
				func_232(21);
				unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 29);
				return;
			}
		}
	}
}

void func_228()
{
	Global_14688 = 0;
	func_229();
}

void func_229()
{
	unk_0xB4E5B1A6FE923ECB();
	Global_16833 = 0;
	if (unk_0x904275961B875DEB())
	{
		unk_0xA8B97F91CBDE376C(false);
		Global_15822 = 6;
	}
}

void func_230()
{
	int iVar0;
	
	iVar0 = unk_0x22C775856F4633CA(0, 12);
	if (iVar0 < 3)
	{
		unk_0xD66FF6E7D7FCE47A(unk_0x8A5B683BACF7B78C(Local_103), joaat("weapon_pistol"), 25000, 0);
		unk_0xD461381B293D9B46(unk_0x8A5B683BACF7B78C(Local_103), unk_0x22C775856F4633CA(10, 35));
	}
	else if (iVar0 < 6)
	{
		unk_0xD66FF6E7D7FCE47A(unk_0x8A5B683BACF7B78C(Local_103), joaat("weapon_combatpistol"), 25000, 0);
		unk_0xD461381B293D9B46(unk_0x8A5B683BACF7B78C(Local_103), unk_0x22C775856F4633CA(15, 40));
	}
	else if (iVar0 == 6)
	{
		unk_0xD66FF6E7D7FCE47A(unk_0x8A5B683BACF7B78C(Local_103), joaat("weapon_microsmg"), 25000, 0);
		unk_0xD461381B293D9B46(unk_0x8A5B683BACF7B78C(Local_103), unk_0x22C775856F4633CA(10, 25));
	}
	else if (iVar0 == 7)
	{
		unk_0xD66FF6E7D7FCE47A(unk_0x8A5B683BACF7B78C(Local_103), joaat("weapon_combatmg"), 25000, 0);
		unk_0xD461381B293D9B46(unk_0x8A5B683BACF7B78C(Local_103), unk_0x22C775856F4633CA(5, 15));
	}
	else if (iVar0 == 8)
	{
		unk_0xD66FF6E7D7FCE47A(unk_0x8A5B683BACF7B78C(Local_103), joaat("weapon_bat"), 25000, 0);
		unk_0xD461381B293D9B46(unk_0x8A5B683BACF7B78C(Local_103), unk_0x22C775856F4633CA(20, 40));
	}
	else if (iVar0 == 9)
	{
		unk_0xD66FF6E7D7FCE47A(unk_0x8A5B683BACF7B78C(Local_103), joaat("weapon_assaultrifle"), 25000, 0);
		unk_0xD461381B293D9B46(unk_0x8A5B683BACF7B78C(Local_103), unk_0x22C775856F4633CA(5, 30));
	}
	else if (iVar0 == 10)
	{
		unk_0xD66FF6E7D7FCE47A(unk_0x8A5B683BACF7B78C(Local_103), joaat("weapon_sawnoffshotgun"), 25000, 0);
		unk_0xD461381B293D9B46(unk_0x8A5B683BACF7B78C(Local_103), unk_0x22C775856F4633CA(5, 20));
	}
	else
	{
		unk_0xD66FF6E7D7FCE47A(unk_0x8A5B683BACF7B78C(Local_103), joaat("weapon_pumpshotgun"), 25000, 0);
		unk_0xD461381B293D9B46(unk_0x8A5B683BACF7B78C(Local_103), unk_0x22C775856F4633CA(10, 25));
	}
	func_6(Local_105.f_50, 1, func_7());
	unk_0xDFA901280292A2FB(unk_0x8A5B683BACF7B78C(Local_103), Global_1574987);
	unk_0xB6544ED6F57109F3(unk_0x8A5B683BACF7B78C(Local_103), 1);
	unk_0x8AA21BBDA4DB2C4F(unk_0x8A5B683BACF7B78C(Local_103), 1);
	unk_0xF4A4E46DFA28BFDE(unk_0x8A5B683BACF7B78C(Local_103), vLocal_111, 20f, 0, 0);
	unk_0xD738221C247C8B71(unk_0x8A5B683BACF7B78C(Local_103), 1);
}

void func_231()
{
	iLocal_114 = unk_0x2B3422BC14FE3213(Local_103.f_29);
	if (iLocal_114 >= 0)
	{
		if (unk_0xFE5DE0C3200E00F2(iLocal_114))
		{
			unk_0xE501D670D61ECB65(Local_103.f_29);
		}
	}
}

void func_232(int iParam0)
{
	struct<2> Var0;
	int iVar1;
	
	if (unk_0x05EFB6A616B6FADE(Local_103.f_23, 13))
	{
		if (!func_392(Local_103))
		{
			if (unk_0xABF0452BE64AD290(Local_103) || (!unk_0x8F01F94322569B77(Local_103) && unk_0x45F99485D7E1C29A()))
			{
				if (!unk_0x685AE6AF34B35D3B(unk_0x8A5B683BACF7B78C(Local_103)))
				{
					if (Local_103.f_45 == 0)
					{
						StringCopy(&Var0, "RB_SH2", 16);
					}
					else if (Local_103.f_45 == 1)
					{
						StringCopy(&Var0, "RB_12_F", 16);
					}
					else
					{
						StringCopy(&Var0, "RB_SH3", 16);
					}
					StringIntConCat(&Var0, Local_103.f_31, 16);
					StringIntConCat(&Var0, iParam0, 16);
					if (unk_0x3CAC2741CC1A631F(&Var0, "RB_SH241"))
					{
						if (unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iVar1, 1))
						{
							if ((((((iVar1 == joaat("weapon_unarmed") || iVar1 == 0) || iVar1 == joaat("object")) || iVar1 == joaat("weapon_flare")) || iVar1 == joaat("weapon_snowball")) || func_250(iVar1)) || func_249(iVar1))
							{
								StringCopy(&Var0, "RB_SH211", 16);
							}
						}
					}
					func_391(&uLocal_151, 3, unk_0x8A5B683BACF7B78C(Local_103), &(Local_103.f_46), 1, 0);
					switch (iParam0)
					{
						case 0:
							unk_0x85AF6DC3641E2442(unk_0x8A5B683BACF7B78C(Local_103), "SHOP_GREET", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 1:
							func_233(&uLocal_151, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 2:
							func_233(&uLocal_151, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 3:
							func_233(&uLocal_151, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 4:
							unk_0x85AF6DC3641E2442(unk_0x8A5B683BACF7B78C(Local_103), "SHOP_BRAVE", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 10:
							unk_0x85AF6DC3641E2442(unk_0x8A5B683BACF7B78C(Local_103), "SHOP_REMOVE_VEHICLE", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 11:
							unk_0x85AF6DC3641E2442(unk_0x8A5B683BACF7B78C(Local_103), "SHOP_REACT_TO_SHOUT", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 12:
							unk_0x85AF6DC3641E2442(unk_0x8A5B683BACF7B78C(Local_103), "SHOP_HURRYING", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 13:
							unk_0x85AF6DC3641E2442(unk_0x8A5B683BACF7B78C(Local_103), "SHOP_NO_COPS", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 14:
							unk_0x85AF6DC3641E2442(unk_0x8A5B683BACF7B78C(Local_103), "SHOP_THREATENED", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 15:
							unk_0x85AF6DC3641E2442(unk_0x8A5B683BACF7B78C(Local_103), "SHOP_GREET_START", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 16:
							unk_0x85AF6DC3641E2442(unk_0x8A5B683BACF7B78C(Local_103), "SHOP_SCARED_START", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 17:
							unk_0x85AF6DC3641E2442(unk_0x8A5B683BACF7B78C(Local_103), "SHOP_NO_COPS_START", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 18:
							unk_0x85AF6DC3641E2442(unk_0x8A5B683BACF7B78C(Local_103), "SHOP_GREET_END", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 19:
							unk_0x85AF6DC3641E2442(unk_0x8A5B683BACF7B78C(Local_103), "SHOP_SCARED_END", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 20:
							unk_0x85AF6DC3641E2442(unk_0x8A5B683BACF7B78C(Local_103), "SHOP_NO_COPS_END", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 21:
							unk_0x85AF6DC3641E2442(unk_0x8A5B683BACF7B78C(Local_103), "SHOP_COPS_ARRIVED", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 22:
							unk_0x85AF6DC3641E2442(unk_0x8A5B683BACF7B78C(Local_103), "SHOP_SELL", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 23:
							unk_0x85AF6DC3641E2442(unk_0x8A5B683BACF7B78C(Local_103), "SHOP_NO_ENTRY", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 24:
							unk_0x85AF6DC3641E2442(unk_0x8A5B683BACF7B78C(Local_103), "SHOP_STEAL", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 25:
							unk_0x85AF6DC3641E2442(unk_0x8A5B683BACF7B78C(Local_103), "SCREAM_PANIC", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						}
					}
				}
			}
	}
}

int func_233(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_248(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 1;
	return func_234(sParam2, iParam3, 0);
}

int func_234(char* sParam0, int iParam1, bool bParam2)
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
					func_247();
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
		if (func_246(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_245();
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
				func_239();
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
				if (func_238())
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
			if (func_237())
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
			func_236();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_235();
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
		func_247();
	}
	return 0;
}

void func_235()
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

void func_236()
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

int func_237()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_238()
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

void func_239()
{
	if (func_126(14))
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
		Global_14513 = func_240();
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

var func_240()
{
	func_241();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_241()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_244(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_243(unk_0xA19140A5C42D8715());
			if (func_242(iVar0) && (!func_126(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_242(Global_106070.f_2355.f_539.f_4301))
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

bool func_242(int iParam0)
{
	return iParam0 < 3;
}

int func_243(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_244(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_244(int iParam0)
{
	if (func_242(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_245()
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

bool func_246(int iParam0, int iParam1)
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

void func_247()
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

void func_248(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15276 = { *uParam0 };
	Global_1699 = iParam1;
	StringCopy(&Global_15892, sParam2, 24);
	Global_16811 = uParam5;
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

int func_249(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_molotov"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_grenade"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_proxmine"):
			return 1;
			break;
		
		case -1169823560:
			return 1;
			break;
	}
	return 0;
}

int func_250(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
		case joaat("weapon_bat"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_golfclub"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_bottle"):
		case joaat("weapon_dagger"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_hatchet"):
		case joaat("weapon_machete"):
		case joaat("weapon_switchblade"):
			return 1;
			break;
		
		case -853065399:
		case -1810795771:
		case 419712736:
			return 1;
			break;
		
		case 940833800:
			return 1;
	}
	return 0;
}

void func_251()
{
	int iVar0;
	
	iVar0 = unk_0xBCC2AC37F56D2149(false, 0);
	if (Local_103.f_43 != iVar0)
	{
		if (Local_103.f_43 < iVar0 || func_258(Local_103.f_43, 0, 1))
		{
			unk_0x7F2854D39965C275(Local_103.f_43);
		}
	}
	iVar0 = unk_0x2FC83B1E3A760AA3(false, 0);
	if (Local_103.f_44 != iVar0)
	{
		if (Local_103.f_44 < iVar0 || func_252(Local_103.f_44, 0, 1))
		{
			unk_0xC0E0EC37CC7BA185(Local_103.f_44);
		}
	}
}

int func_252(int iParam0, bool bParam1, bool bParam2)
{
	return func_253(2, iParam0, 1, bParam1, bParam2);
}

int func_253(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x05EFB6A616B6FADE(Global_1380171, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_257(iParam0) - func_256(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_256(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_257(iParam0) - func_255(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_256(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_257(iParam0) - func_256(iParam0, 1));
		}
		if (!bParam4 && Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/] != 3)
		{
			iVar1 = (iVar1 - func_254(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_254(int iParam0)
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

int func_255(int iParam0)
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

int func_256(int iParam0, bool bParam1)
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

int func_257(int iParam0)
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

int func_258(int iParam0, bool bParam1, bool bParam2)
{
	return func_253(0, iParam0, 1, bParam1, bParam2);
}

void func_259()
{
	float fVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	switch (iLocal_336)
	{
		case 0:
			if (!unk_0x05EFB6A616B6FADE(Local_105.f_53, 0))
			{
				if (unk_0x83A1DA4E6C55E952(Local_103.f_14))
				{
					if (func_265(vLocal_342))
					{
						vLocal_342 = { unk_0x3201284584C7CD83(unk_0xEA0B19D3958DA45D(Local_103.f_14), 0f, -0.5f, 0f) };
						unk_0x2BCFB39E86340DAA(&(Local_105.f_53), 0);
					}
				}
			}
			if ((((unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_342, 0.5f, 0.5f, 1f, 0, 1, 0) && (func_392(Local_103) || Local_103.f_3 > 7)) && !unk_0x05EFB6A616B6FADE(Local_103.f_23, 20)) && !unk_0x05EFB6A616B6FADE(Local_103.f_23, 11)) && unk_0x06D718FC71673E5A(vLocal_115, 1.5f) == 0)
			{
				if (((((!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && !func_172(0)) && !func_264()) && !unk_0xD1ABB20CFF127CCC()) && !func_37(unk_0xD4E735F4B6A956AC(), 146)) && unk_0x83A1DA4E6C55E952(Local_103.f_14))
				{
					func_152("FHU_MANR", -1);
					Global_2524719.f_5630.f_4 = 1;
					iLocal_336 = 1;
				}
			}
			break;
		
		case 1:
			if (((((!unk_0x05EFB6A616B6FADE(Local_103.f_24, 16) && !unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 12)) && !unk_0x05EFB6A616B6FADE(Local_103.f_23, 20)) && !unk_0x05EFB6A616B6FADE(Local_103.f_23, 11)) && unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_342, 0.5f, 0.5f, 1f, 0, 1, 0)) && (!func_142(unk_0xD4E735F4B6A956AC()) || func_93(unk_0xD4E735F4B6A956AC()) == 154))
			{
				if (((unk_0xDF0ADAD7E584090D(0, 51) && !func_263(0)) && !func_264()) && !unk_0xD1ABB20CFF127CCC())
				{
					if (func_150("FHU_MANR"))
					{
						unk_0x135C61E339DABBAC(1);
					}
					unk_0x962CF6A9EA6FDCAC(unk_0xA6580F898F4E801C(), false, 640);
					unk_0x2BCFB39E86340DAA(&(Local_104[unk_0xD60943E3BE730BF0() /*10*/]), 12);
					iLocal_336 = 2;
				}
				else if ((unk_0xFD34717937104F1C() % 1000) < 50)
				{
					if (iLocal_341 == 0)
					{
						func_260(&iLocal_341, 4, "FHU_MANR", 0, 0, 0, 0);
					}
				}
			}
			else if (func_150("FHU_MANR"))
			{
				unk_0x135C61E339DABBAC(1);
			}
			break;
		
		case 2:
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				vVar3 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
				vLocal_342.z = (vVar3.z - 1f);
				unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), vLocal_342, 1, 0, 0, 1);
				unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), unk_0x0C1B8F3F6EFDC58B((vLocal_129.x - vLocal_342.x), (vLocal_129.y - vLocal_342.y)));
				unk_0x3A95A0A3221D4208(&uVar4);
				unk_0x2F89329397A277BC(&uVar4);
				unk_0x3F01127ECD227890(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, 4000, 262144, 0, 0, 0, 0);
				unk_0x3F01127ECD227890(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 262145, 0, 0, 0, 0);
				unk_0x3F01127ECD227890(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -8f, 4000, 262144, 0, 0, 0, 0);
				unk_0x301F42EEE3C40328(uVar4);
				unk_0xE1072FA2FECBAD96(unk_0xA19140A5C42D8715(), uVar4);
				unk_0x90683BECDF939A74(unk_0xA19140A5C42D8715(), 0, -1, 0);
				unk_0xB0D7019224A3A443(unk_0xA19140A5C42D8715(), 200, 1);
				unk_0xB0D7019224A3A443(unk_0xA19140A5C42D8715(), 71, 1);
				bVar2 = unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iLocal_340, 1);
				if (bVar2)
				{
					unk_0xB20B772FD9DE1847(unk_0xA19140A5C42D8715(), joaat("weapon_unarmed"), true);
				}
				unk_0x3A3E4B7C6FBE305D(unk_0xA19140A5C42D8715(), 0, 0);
				if (!unk_0x37B568B777BC65F9(iLocal_337))
				{
					iLocal_337 = unk_0x74677C414DD7F53C(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0xABE3EC0FA16227B5(iLocal_337, unk_0xA19140A5C42D8715(), -0.1878f, 3.0635f, 0.68f, 1);
				unk_0xA62406CE1190BF91(iLocal_337, unk_0xA19140A5C42D8715(), -0.0129f, 0.0927f, 0.3008f, 1);
				unk_0xF62A5A3CB8DB2402(iLocal_337, 35f);
				unk_0xBC1542DDC31676C2(iLocal_337, "HAND_SHAKE", 0.1f);
				unk_0x930701157A4B9374(iLocal_337, true);
				unk_0x8E88E73F74A9FF79(true, 0, 3000, 1, 0, 0);
			}
			iLocal_336 = 3;
			break;
		
		case 3:
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				if (!unk_0x37B568B777BC65F9(iLocal_338))
				{
					iLocal_338 = unk_0x74677C414DD7F53C(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0xABE3EC0FA16227B5(iLocal_338, unk_0xA19140A5C42D8715(), -1.0346f, 2.9183f, 0.68f, 1);
				unk_0xA62406CE1190BF91(iLocal_338, unk_0xA19140A5C42D8715(), -0.0574f, 0.1074f, 0.3008f, 1);
				unk_0xF62A5A3CB8DB2402(iLocal_338, 35f);
				unk_0xBC1542DDC31676C2(iLocal_338, "HAND_SHAKE", 0.1f);
				unk_0xD21CD2A6F93F44A6(iLocal_338, iLocal_337, 6000, 1, 1);
				unk_0xB0D7019224A3A443(unk_0xA19140A5C42D8715(), 71, 1);
				unk_0x90683BECDF939A74(unk_0xA19140A5C42D8715(), 0, -1, 0);
				unk_0xB0D7019224A3A443(unk_0xA19140A5C42D8715(), 200, 1);
			}
			iLocal_336 = 4;
			break;
		
		case 4:
			if (!unk_0x4EFA8CFA30651DD4(iLocal_338))
			{
				iLocal_336 = 5;
			}
			else if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				if (unk_0x411C28019DEA5CEF(unk_0xA19140A5C42D8715(), "oddjobs@shop_robbery@rob_till", "loop", 3))
				{
					fVar0 = unk_0xE5B5A1FFAA0834BD(unk_0xA19140A5C42D8715(), "oddjobs@shop_robbery@rob_till", "loop");
					if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
					{
						if (!iLocal_339)
						{
							iVar5 = round(((IntToFloat(iLocal_132) * 0.75f) / 4f));
							iVar6 = round(((IntToFloat(iLocal_133) * 0.75f) / 4f));
							iVar1 = unk_0x22C775856F4633CA(iVar5, iVar6 + 1);
							iVar1 = func_222(iVar1, 1);
							if (iVar1 > (Global_262145.f_166 / 4))
							{
								iVar1 = (Global_262145.f_166 / 4);
							}
							if (func_221(unk_0xD4E735F4B6A956AC()) && func_219(func_220(unk_0xD4E735F4B6A956AC())) < 1f)
							{
								if (Global_262145.f_4226 > 1f)
								{
									Global_262145.f_4226 = 1f;
								}
								iVar1 = round((to_float(iVar1) * Global_262145.f_4226));
							}
							if (iVar1 > 0)
							{
								if (func_218())
								{
									func_207(1734805203, iVar1, &uVar7, 0, 0, 0);
								}
								else
								{
									func_203(iVar1, 1, 1, 1092616192);
									unk_0x15BF7AD14F08DDD2(iVar1);
								}
							}
							Global_2524719.f_5630 = (Global_2524719.f_5630 + iVar1);
							iLocal_335 = (iLocal_335 + iVar1);
							func_191(1, iLocal_335);
							unk_0xE11F00B4AC919F45(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
							iLocal_339 = 1;
						}
					}
					else if (iLocal_339)
					{
						iLocal_339 = 0;
					}
				}
				unk_0xB0D7019224A3A443(unk_0xA19140A5C42D8715(), 71, 1);
				unk_0x90683BECDF939A74(unk_0xA19140A5C42D8715(), 0, -1, 0);
				unk_0xB0D7019224A3A443(unk_0xA19140A5C42D8715(), 200, 1);
			}
			break;
		
		case 5:
			if (iLocal_340 != joaat("weapon_unarmed") && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				unk_0xB20B772FD9DE1847(unk_0xA19140A5C42D8715(), iLocal_340, true);
			}
			unk_0x90683BECDF939A74(unk_0xA19140A5C42D8715(), 1, -1, 0);
			unk_0xD87B76260C547F31(0f);
			unk_0xAA32DD4848CF93E0(0f, 1065353216);
			if (unk_0x37B568B777BC65F9(iLocal_337))
			{
				unk_0x77F0486CE0E598D5(iLocal_337, 0);
			}
			if (unk_0x37B568B777BC65F9(iLocal_338))
			{
				unk_0x77F0486CE0E598D5(iLocal_338, 0);
			}
			unk_0x8E88E73F74A9FF79(false, 0, 3000, 1, 0, 0);
			unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
			Global_2524719.f_5630.f_2 = 1;
			Global_2524719.f_5630.f_5 = 1;
			if (func_187(1))
			{
				func_178(4);
			}
			iLocal_336 = 7;
			break;
		
		case 6:
			unk_0x930701157A4B9374(iLocal_338, false);
			unk_0x8E88E73F74A9FF79(false, 0, 3000, 1, 0, 0);
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				unk_0x836A6A722DEA63F1(unk_0xA19140A5C42D8715());
			}
			iLocal_336 = 5;
			break;
	}
}

void func_260(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8B1574454E8C2421(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x47C3DC461C758C29())
	{
		if (!*iParam0 == -1)
		{
			func_261(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36827[iVar0 /*32*/])
		{
			Global_36827[iVar0 /*32*/] = 1;
			Global_36827[iVar0 /*32*/].f_1 = Global_37028;
			Global_37028++;
			Global_36827[iVar0 /*32*/].f_4 = 0;
			Global_36827[iVar0 /*32*/].f_29 = 0;
			Global_36827[iVar0 /*32*/].f_5 = 0;
			Global_36827[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36827[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36827[iVar0 /*32*/].f_6 = iParam3;
			Global_36827[iVar0 /*32*/].f_31 = unk_0xFCB3E4B16B4A9EC1();
			Global_36827[iVar0 /*32*/].f_7 = 0;
			Global_36827[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x429D45A6C6520026(sParam4))
			{
				Global_36827[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36827[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36827[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36827[iVar0 /*32*/].f_12 = 0;
				Global_36827[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36827[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_261(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_262(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36827[iVar0 /*32*/])
		{
			Global_36827[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_262(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36827[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_263(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14513.f_1 > 3)
		{
			if (unk_0x05EFB6A616B6FADE(Global_2383, 14))
			{
				if (Global_14512 == 1)
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
		else
		{
			return 0;
		}
	}
	if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_14512 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_14513.f_1 > 3)
	{
		if (Global_14512 == 1)
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

bool func_264()
{
	return unk_0xFD34717937104F1C() <= Global_17367.f_5873 + 100;
}

int func_265(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_266(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, var uParam5, int iParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	char* sVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	
	if (((uParam5->f_4 >= 1000 || (uParam5->f_4 + uParam0->f_51) >= 1000) || func_389(&(uParam5->f_5))) || (func_146(&(Global_2524719.f_10)) && !func_388(Global_2524719.f_10, 300000, 0)))
	{
		if (func_146(&(Global_2524719.f_10)))
		{
			if ((unk_0xFD34717937104F1C() % 2500) < 50)
			{
			}
		}
		if (!uParam0->f_34)
		{
			uParam0->f_34 = 1;
			if (!func_146(&(Global_2524719.f_10)))
			{
				func_18(&(Global_2524719.f_10), 0, 0);
			}
		}
	}
	else
	{
		if (func_146(&(Global_2524719.f_10)))
		{
			func_13(&(Global_2524719.f_10));
		}
		if (uParam0->f_34)
		{
			uParam0->f_34 = 0;
		}
	}
	if ((unk_0xFD34717937104F1C() % 5000) < 50)
	{
	}
	if ((((((uParam5->f_3 < 2 && func_44(unk_0xD4E735F4B6A956AC(), 1, 1)) && unk_0x05EFB6A616B6FADE(uParam0->f_52, 26)) && !func_387(-1082130432)) && unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) < 1) && !bParam7) && !func_392(*uParam5))
	{
		iVar4 = 0;
		if ((unk_0xD1ABB20CFF127CCC() && uParam0->f_54 != 0) && !unk_0xBE079F709C76E132())
		{
			if (!bParam8)
			{
				uParam0->f_54 = 0;
				func_386(uParam0, &(iParam6->f_3));
			}
		}
		switch (uParam0->f_54)
		{
			case 0:
				if ((((!unk_0xD1ABB20CFF127CCC() && !unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1)) && !unk_0x9783679EC9491C05(unk_0xA19140A5C42D8715())) && (!func_142(unk_0xD4E735F4B6A956AC()) || func_93(unk_0xD4E735F4B6A956AC()) == 154)) && !func_385(unk_0xD4E735F4B6A956AC(), 21))
				{
					if (func_384(*uParam0, &uParam1, vParam4.z, &(uParam0->f_16[0 /*3*/]), &(uParam0->f_16[1 /*3*/]), &(uParam0->f_23), &(uParam0->f_26)))
					{
						vVar2 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
						vVar3 = { unk_0xE2BBD32891C18569(unk_0x8A5B683BACF7B78C(*uParam5), 1) };
						if ((unk_0x499324B3EF19C288(vVar2, uParam0->f_23, 1) < 5f && unk_0x69C0BB7D03EE045D((vVar2.z - vVar3.z)) < 0.25f) || func_431(1))
						{
							if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_26, 0, 1, 0) || func_431(1))
							{
								if (unk_0x5393F5210E66E1B6(unk_0xA19140A5C42D8715(), uParam0->f_23, 135f) || func_431(1))
								{
									if (uParam0->f_34)
									{
										if (func_431(1))
										{
											func_406();
										}
										if (((!func_150("SHR_HOLDUP_1") && !func_150("SHR_MENU")) && !func_383()) && func_382())
										{
											func_152("SHR_SOLD_OUT", -1);
											uParam0->f_54 = 10;
										}
									}
									else
									{
										if (func_431(1))
										{
										}
										uParam0->f_14 = -1;
										func_260(&(uParam0->f_14), 4, "SHR_MENU", 0, 0, 0, 0);
										uParam0->f_54 = 2;
									}
								}
								else if ((unk_0xFD34717937104F1C() % 8000) < 50)
								{
								}
							}
							else
							{
								if ((unk_0xFD34717937104F1C() % 8000) < 50)
								{
								}
								unk_0x29D902B60F2CD9AB(vVar2, uParam0->f_16[0 /*3*/], 0, 0, 255, 255);
								unk_0x29D902B60F2CD9AB(vVar2, uParam0->f_16[1 /*3*/], 0, 0, 255, 255);
							}
						}
						else
						{
							if ((unk_0xFD34717937104F1C() % 8000) < 50)
							{
							}
							unk_0x29D902B60F2CD9AB(vVar2, uParam0->f_23, 0, 0, 255, 255);
						}
					}
				}
				else
				{
					if (func_150("SHR_MENU"))
					{
						unk_0x135C61E339DABBAC(1);
					}
					if (func_38(unk_0xD4E735F4B6A956AC()))
					{
						if (!unk_0x05EFB6A616B6FADE(uParam0->f_53, 4))
						{
							func_152("SHR_FM_CRIT", -1);
							unk_0xC01188479296013C(3, 21, 200, 0, 0);
							unk_0x2BCFB39E86340DAA(&(uParam0->f_53), 4);
						}
					}
					if ((unk_0xFD34717937104F1C() % 8000) < 50)
					{
					}
				}
				break;
			
			case 2:
				vVar2 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
				vVar3 = { unk_0xE2BBD32891C18569(unk_0x8A5B683BACF7B78C(*uParam5), 1) };
				if ((!unk_0x5393F5210E66E1B6(unk_0xA19140A5C42D8715(), uParam0->f_23, 135f) || unk_0x69C0BB7D03EE045D((vVar2.z - vVar3.z)) >= 0.25f) && !func_431(1))
				{
					if (func_150("SHR_MENU"))
					{
						unk_0x135C61E339DABBAC(1);
					}
					func_261(&(uParam0->f_14));
					uParam0->f_54 = 0;
				}
				if (unk_0xD1ABB20CFF127CCC())
				{
					if (func_150("SHR_MENU"))
					{
						unk_0x135C61E339DABBAC(1);
					}
					func_261(&(uParam0->f_14));
					uParam0->f_54 = 0;
				}
				if (func_172(0) || func_171())
				{
					if (func_150("SHR_MENU"))
					{
						unk_0x135C61E339DABBAC(1);
					}
					func_261(&(uParam0->f_14));
					func_166(1, *uParam0);
					unk_0xFA57C719261AA55D(&(uParam0->f_52), 26);
					uParam0->f_54 = 0;
				}
				if (!unk_0x9783679EC9491C05(unk_0xA19140A5C42D8715()))
				{
					if (func_381(uParam0->f_14, 1) || func_431(1))
					{
						if (func_431(1))
						{
							func_406();
						}
						if (func_150("SHR_MENU"))
						{
							unk_0x135C61E339DABBAC(1);
						}
						func_379(&(uParam0->f_44));
						func_261(&(uParam0->f_14));
						func_373(0, 0);
						unk_0x2BCFB39E86340DAA(&(uParam0->f_53), 7);
						func_423(unk_0xD4E735F4B6A956AC(), 0, 66048);
						unk_0x158181F81A221D70();
						if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_392(*uParam5))
						{
							unk_0x0177431263151C4E(unk_0xA19140A5C42D8715(), unk_0x8A5B683BACF7B78C(*uParam5), 0);
							unk_0xFA57C719261AA55D(&(iParam6->f_1), 1);
						}
						func_372();
						uParam0->f_54 = 3;
					}
				}
				break;
			
			case 3:
				if (!bParam8)
				{
					if (!unk_0x37B568B777BC65F9(uParam0->f_1))
					{
						uParam0->f_1 = unk_0x74677C414DD7F53C(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
						func_371(*uParam0, &(uParam0->f_2), &(uParam0->f_5), &fVar6);
						unk_0x057123F3A835FE47(uParam0->f_1, uParam0->f_2);
						unk_0xC831502E35848BE4(uParam0->f_1, uParam0->f_5, 2);
						unk_0xF62A5A3CB8DB2402(uParam0->f_1, fVar6);
						unk_0xBC1542DDC31676C2(uParam0->f_1, "HAND_SHAKE", 0.1f);
						unk_0x930701157A4B9374(uParam0->f_1, true);
						unk_0x8E88E73F74A9FF79(true, 0, 3000, 1, 0, 0);
					}
					uParam0->f_37 = func_394(*uParam0);
				}
				if (unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
				{
					unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 0);
				}
				uParam0->f_13 = 6;
				func_370(0, 0);
				func_369(1, 1, 0, 0, 0);
				func_368(1, 2, 1, 1, 1);
				func_367("SNK_ITEM");
				if (!bParam8)
				{
					func_365(1, uParam0->f_37, uParam0->f_37);
				}
				iVar7 = 0;
				while (iVar7 < uParam0->f_13)
				{
					func_360(iVar7, func_364(iVar7), 0, 1, 0, 0);
					if (uParam5->f_5[iVar7] >= 10 || ((func_146(&(Global_2524719.f_12[iVar7 /*2*/])) && !func_388(Global_2524719.f_12[iVar7 /*2*/], 150000, 0)) && *uParam0 == Global_2524719.f_27))
					{
						func_360(iVar7, "", 1, 1, 0, 0);
						func_359(15, 0);
						if (func_146(&(Global_2524719.f_12[iVar7 /*2*/])) && !func_388(Global_2524719.f_12[iVar7 /*2*/], 150000, 0))
						{
							uParam5->f_5[iVar7] = 10;
						}
						if (!func_146(&(Global_2524719.f_12[iVar7 /*2*/])))
						{
							Global_2524719.f_27 = *uParam0;
							func_18(&(Global_2524719.f_12[iVar7 /*2*/]), 0, 0);
						}
					}
					else if (func_356(iVar7))
					{
						func_360(iVar7, "SNK_FULL", 0, 1, 0, 0);
					}
					else if (!bParam8)
					{
						func_360(iVar7, "ITEM_COST", 1, 1, 0, 0);
						func_352(func_355(uParam0, iVar7), 0);
					}
					else
					{
						func_360(iVar7, "SNK_FREE", 0, 1, 0, 0);
					}
					iVar7++;
				}
				func_351(0);
				func_350(uParam0->f_12, 1, 1);
				if (uParam0->f_35)
				{
					if (!bParam8)
					{
						func_349("SNK_BOUGHT", 0, 0);
					}
					else
					{
						func_349("SNK_STORED", 0, 0);
					}
				}
				else if (uParam5->f_5[uParam0->f_12] >= 10)
				{
					func_349("SNK_SOUT", 0, 0);
				}
				else
				{
					func_349(func_348(uParam0->f_12), 0, 0);
				}
				func_347(201, "ITEM_SELECT", -1, 0);
				func_347(202, "ITEM_BACK", -1, 0);
				if (!bParam8)
				{
					func_347(203, "SNK_LIFT", -1, 0);
					func_314(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				uParam0->f_54 = 4;
				break;
			
			case 4:
				if (unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
				{
					unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 0);
				}
				if (unk_0xF9D4EF1338E38AFB(unk_0xA19140A5C42D8715(), -875674219) == 7)
				{
					if (!unk_0x05EFB6A616B6FADE(iParam6->f_1, 1))
					{
						if (!bParam8)
						{
							func_423(unk_0xD4E735F4B6A956AC(), 0, 98816);
						}
						else
						{
							func_423(unk_0xD4E735F4B6A956AC(), 0, 256);
						}
						unk_0x2BCFB39E86340DAA(&(iParam6->f_1), 1);
					}
				}
				iVar4 = 0;
				if (unk_0x47C01C0E6F4C1D06())
				{
					if (unk_0xA732A0E0AED16318(2))
					{
						unk_0xD481A812073CCF02(0, 1, 1);
						unk_0xD481A812073CCF02(0, 2, 1);
						unk_0x863EF4AF862F63EC(0, 237, 1);
						unk_0x863EF4AF862F63EC(0, 238, 1);
						unk_0x863EF4AF862F63EC(0, 241, 1);
						unk_0x863EF4AF862F63EC(0, 242, 1);
						func_310(0, 0, 0, 1);
						func_309(0, -1, 1);
						if (func_308())
						{
							if (Global_4267062 != uParam0->f_12)
							{
								unk_0xE11F00B4AC919F45(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								uParam0->f_12 = Global_4267062;
								func_350(uParam0->f_12, 1, 1);
								uParam0->f_27 = 0;
								uParam0->f_29 = 0;
								uParam0->f_30 = 0;
								uParam0->f_32 = 0;
								sVar5 = func_348(uParam0->f_12);
								if (unk_0x445EC9E7EACB710E(sVar5))
								{
									func_349(sVar5, 0, 0);
								}
							}
							else
							{
								iVar4 = 1;
							}
						}
					}
				}
				if (!bParam8)
				{
					func_314(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				func_298(uParam0, &(uParam5->f_5), bParam8);
				if ((uParam5->f_2 > 2 && unk_0x05EFB6A616B6FADE(uParam5->f_1, 0)) && unk_0x05EFB6A616B6FADE(iParam6->f_1, 0))
				{
					unk_0xFA57C719261AA55D(&(iParam6->f_1), 0);
				}
				if ((unk_0xDF0ADAD7E584090D(2, 201) || iVar4 == 1) || uParam0->f_47)
				{
					if (!uParam0->f_47)
					{
						uParam0->f_27 = 1;
						uParam0->f_29 = 0;
						uParam0->f_30 = 0;
						uParam0->f_32 = 0;
						func_379(&(uParam0->f_44));
					}
					if ((uParam0->f_28 && uParam0->f_31) && uParam0->f_33)
					{
						if (func_218())
						{
							uParam0->f_47 = 1;
							uParam0->f_48 = 0;
							uParam0->f_49 = -1;
							iVar0 = 0;
							if (!bParam8)
							{
								iVar0 = func_355(uParam0, uParam0->f_12);
							}
							func_286(uParam0, -1303831698, 537254313, iVar0);
							uParam0->f_54 = 5;
						}
						else
						{
							uParam0->f_35 = 1;
							unk_0xE11F00B4AC919F45(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							uParam5->f_5[uParam0->f_12]++;
							uParam0->f_54 = 6;
						}
					}
					else
					{
						uParam0->f_35 = 0;
						if (!uParam0->f_28 && !uParam0->f_36)
						{
							iVar0 = 0;
							if (!bParam8)
							{
								iVar0 = func_355(uParam0, uParam0->f_12);
							}
							func_285(unk_0xFEB6EEC0545AF7AA(func_348(uParam0->f_12)), iVar0, 0);
							func_278(0, 31, 3);
							uParam0->f_54 = 11;
						}
						unk_0xE11F00B4AC919F45(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					}
					if (!uParam0->f_33)
					{
						uParam0->f_54 = 3;
					}
				}
				if (!bParam8)
				{
					if (unk_0xDF0ADAD7E584090D(2, 203) && !uParam0->f_47)
					{
						uParam0->f_27 = 1;
						if (uParam5->f_5[uParam0->f_12] < 10)
						{
							uParam0->f_33 = 1;
						}
						else
						{
							uParam0->f_33 = 0;
						}
						func_379(&(uParam0->f_44));
						if (!uParam0->f_33)
						{
							unk_0xE11F00B4AC919F45(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						}
						else if (!uParam0->f_31)
						{
							unk_0xE11F00B4AC919F45(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						}
						else
						{
							unk_0x3F01127ECD227890(unk_0xA19140A5C42D8715(), func_162(), func_277(), 8f, -8f, -1, 1048576, 0, 0, 0, 0);
							uParam0->f_54 = 8;
							uParam0->f_15 = unk_0xFD34717937104F1C();
							unk_0xE11F00B4AC919F45(-1, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							if (!bParam8)
							{
								func_386(uParam0, &(iParam6->f_3));
							}
						}
					}
				}
				if (unk_0xDF0ADAD7E584090D(2, 202) || unk_0x4E6A396CA4DB68F6(2, 238))
				{
					if (func_431(1))
					{
						func_406();
					}
					uParam0->f_54 = 9;
					uParam0->f_15 = unk_0xFD34717937104F1C();
					if (!bParam8)
					{
						unk_0xE11F00B4AC919F45(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						func_386(uParam0, &(iParam6->f_3));
					}
					else
					{
						unk_0xE11F00B4AC919F45(-1, "BACK", "HUD_FREEMODE_SOUNDSET", 1);
						Global_2458221 = 1;
					}
				}
				if (uParam0->f_34)
				{
					uParam0->f_54 = 10;
					uParam0->f_15 = unk_0xFD34717937104F1C();
					if (!bParam8)
					{
						func_386(uParam0, &(iParam6->f_3));
					}
					func_152("SHR_SOLD_OUT", -1);
				}
				iVar8 = 0;
				while (iVar8 < uParam0->f_13)
				{
					if (func_146(&(Global_2524719.f_12[iVar8 /*2*/])) && func_388(Global_2524719.f_12[iVar8 /*2*/], 150000, 0))
					{
						func_13(&(Global_2524719.f_12[iVar8 /*2*/]));
						uParam5->f_5[iVar8] = 0;
						uParam0->f_54 = 3;
					}
					iVar8++;
				}
				break;
			
			case 5:
				iVar0 = 0;
				if (!bParam8)
				{
					func_314(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
					iVar0 = func_355(uParam0, uParam0->f_12);
				}
				if (func_286(uParam0, -1303831698, 537254313, iVar0))
				{
				}
				else
				{
					switch (uParam0->f_49)
					{
						case 0:
							uParam0->f_35 = 0;
							if (!uParam0->f_28 && !uParam0->f_36)
							{
								if (!bParam8)
								{
									iVar0 = func_355(uParam0, uParam0->f_12);
								}
								func_285(unk_0xFEB6EEC0545AF7AA(func_348(uParam0->f_12)), iVar0, 0);
								func_278(0, 31, 3);
								func_276();
								func_275();
								uParam0->f_54 = 11;
							}
							else
							{
								if (func_431(1))
								{
									func_406();
								}
								uParam0->f_54 = 9;
								uParam0->f_15 = unk_0xFD34717937104F1C();
								unk_0xE11F00B4AC919F45(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
								if (!bParam8)
								{
									func_386(uParam0, &(iParam6->f_3));
								}
							}
							break;
						
						case 2:
							uParam0->f_35 = 1;
							unk_0xE11F00B4AC919F45(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							uParam5->f_5[uParam0->f_12]++;
							uParam0->f_54 = 6;
							break;
						
						default:
							break;
						}
				}
				break;
			
			case 6:
				if (!bParam8)
				{
					func_314(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				if (func_218())
				{
					unk_0x7D3EC9370CE8AE07(func_273(func_274()));
				}
				if (bParam8)
				{
					if (!unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_115, 6))
					{
						unk_0x25781E22AE55D0AC(1, uParam0->f_12, 0, 1);
						unk_0x2BCFB39E86340DAA(&(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_115), 6);
					}
					iVar1 = 0;
					switch (uParam0->f_12)
					{
						case 3:
							func_111(1275, 1, -1);
							func_110(16, 1, -1, 1);
							break;
						
						case 1:
							func_111(1276, 1, -1);
							func_110(15, 1, -1, 1);
							break;
						
						case 2:
							func_110(14, 1, -1, 1);
							func_111(1277, 1, -1);
							break;
						
						case 4:
							uParam0->f_55 = 20;
							if (func_130(1097, -1, 0) + 20 > 20)
							{
								uParam0->f_55 = (20 - func_130(1097, -1, 0));
							}
							func_111(1097, uParam0->f_55, -1);
							break;
						
						case 0:
							func_111(62, 1, -1);
							break;
						
						case 5:
							func_111(63, 1, -1);
							break;
					}
				}
				else
				{
					switch (uParam0->f_12)
					{
						case 3:
							if (func_272(unk_0xD4E735F4B6A956AC(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_355(uParam0, uParam0->f_12);
							}
							func_111(1275, 1, -1);
							func_110(16, 1, -1, 1);
							unk_0xFDE7CBD1FBD54BB3(iVar1, unk_0xFEB6EEC0545AF7AA("SNK_ITEM1"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						
						case 1:
							if (func_272(unk_0xD4E735F4B6A956AC(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_355(uParam0, uParam0->f_12);
							}
							func_111(1276, 1, -1);
							func_110(15, 1, -1, 1);
							unk_0xFDE7CBD1FBD54BB3(iVar1, unk_0xFEB6EEC0545AF7AA("SNK_ITEM2"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						
						case 2:
							if (func_272(unk_0xD4E735F4B6A956AC(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_355(uParam0, uParam0->f_12);
							}
							func_110(14, 1, -1, 1);
							func_111(1277, 1, -1);
							unk_0xFDE7CBD1FBD54BB3(iVar1, unk_0xFEB6EEC0545AF7AA("SNK_ITEM3"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						
						case 4:
							if (func_272(unk_0xD4E735F4B6A956AC(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_355(uParam0, uParam0->f_12);
							}
							uParam0->f_55 = 20;
							if (func_130(1097, -1, 0) + 20 > 20)
							{
								uParam0->f_55 = (20 - func_130(1097, -1, 0));
							}
							func_111(1097, uParam0->f_55, -1);
							unk_0xFDE7CBD1FBD54BB3(iVar1, unk_0xFEB6EEC0545AF7AA("SNK_ITEM4"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						
						case 0:
							if (func_272(unk_0xD4E735F4B6A956AC(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_355(uParam0, uParam0->f_12);
							}
							func_111(62, 1, -1);
							unk_0xFDE7CBD1FBD54BB3(iVar1, unk_0xFEB6EEC0545AF7AA("SNK_ITEM5"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						
						case 5:
							if (func_272(unk_0xD4E735F4B6A956AC(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_355(uParam0, uParam0->f_12);
							}
							func_111(63, 1, -1);
							unk_0xFDE7CBD1FBD54BB3(iVar1, unk_0xFEB6EEC0545AF7AA("SNK_ITEM6"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						}
				}
				if (func_218())
				{
					func_210(func_274());
				}
				func_271(-iVar1, 0);
				uParam0->f_51 = (uParam0->f_51 + iVar1);
				if (!unk_0x05EFB6A616B6FADE(*iParam6, 30))
				{
					unk_0x2BCFB39E86340DAA(iParam6, 30);
				}
				if (!unk_0x05EFB6A616B6FADE(iParam6->f_1, 0))
				{
					unk_0x2BCFB39E86340DAA(&(iParam6->f_1), 0);
					iParam6->f_2 = uParam0->f_12;
				}
				if (uParam0->f_34 || uParam0->f_51 >= 1000)
				{
					uParam0->f_54 = 10;
					if (!bParam8)
					{
						func_386(uParam0, &(iParam6->f_3));
					}
					func_152("SHR_SOLD_OUT", -1);
				}
				else if (uParam5->f_5[uParam0->f_12] >= 10 || func_356(uParam0->f_12))
				{
					uParam0->f_54 = 3;
				}
				else
				{
					uParam0->f_54 = 4;
				}
				break;
			
			case 8:
				func_197(1);
				switch (uParam0->f_12)
				{
					case 3:
						func_269(0, 1f, 3);
						func_111(1275, 1, -1);
						func_110(13, 1, -1, 1);
						break;
					
					case 1:
						func_269(1, 1f, 3);
						func_111(1276, 1, -1);
						func_110(13, 1, -1, 1);
						break;
					
					case 2:
						func_269(2, 1f, 3);
						func_111(1277, 1, -1);
						func_110(13, 1, -1, 1);
						break;
					
					case 4:
						uParam0->f_55 = 20;
						if (func_130(1097, -1, 0) + 20 > 20)
						{
							uParam0->f_55 = (20 - func_130(1097, -1, 0));
						}
						func_269(5, to_float(uParam0->f_55), 3);
						func_111(1097, uParam0->f_55, -1);
						break;
					
					case 0:
						func_269(3, 1f, 3);
						func_111(62, 1, -1);
						break;
					
					case 5:
						func_269(4, 1f, 3);
						func_111(63, 1, -1);
						break;
				}
				if (!bParam8)
				{
					func_423(unk_0xD4E735F4B6A956AC(), 1, 0);
				}
				if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) < 1 && !func_267(unk_0xD4E735F4B6A956AC()))
				{
					unk_0x920EAF82B3E570B4(unk_0xD4E735F4B6A956AC(), 37, unk_0x1105C926E38D2066(1));
					unk_0x2BCFB39E86340DAA(iParam6, 25);
					if (!unk_0x05EFB6A616B6FADE(*iParam6, 1))
					{
						unk_0x2BCFB39E86340DAA(iParam6, 2);
					}
				}
				if (!unk_0x05EFB6A616B6FADE(iParam6->f_1, 2))
				{
					unk_0x2BCFB39E86340DAA(&(iParam6->f_1), 2);
				}
				uParam0->f_54 = 12;
				break;
			
			case 11:
				if (!Global_93284.f_1393 && !unk_0xBE079F709C76E132())
				{
					uParam0->f_54 = 4;
				}
				break;
			
			case 10:
				if (!bParam8)
				{
					func_423(unk_0xD4E735F4B6A956AC(), 1, 0);
				}
				if ((unk_0xFD34717937104F1C() - uParam0->f_15) > 1000)
				{
					uParam0->f_54 = 12;
				}
				else
				{
					unk_0x9EA8CBEA7355649E(2, 203);
					unk_0x9EA8CBEA7355649E(2, 202);
					unk_0x9EA8CBEA7355649E(2, 188);
					unk_0x9EA8CBEA7355649E(2, 187);
					unk_0x9EA8CBEA7355649E(2, 189);
					unk_0x9EA8CBEA7355649E(2, 190);
				}
				break;
			
			case 9:
				if ((unk_0xFD34717937104F1C() - uParam0->f_15) > 1000)
				{
					uParam0->f_54 = 0;
				}
				else
				{
					unk_0x9EA8CBEA7355649E(2, 203);
					unk_0x9EA8CBEA7355649E(2, 202);
					unk_0x9EA8CBEA7355649E(2, 188);
					unk_0x9EA8CBEA7355649E(2, 187);
					unk_0x9EA8CBEA7355649E(2, 189);
					unk_0x9EA8CBEA7355649E(2, 190);
				}
				break;
			
			case 12:
				if (unk_0x05EFB6A616B6FADE(uParam5->f_1, 3))
				{
					if (unk_0x05EFB6A616B6FADE(iParam6->f_1, 2))
					{
						unk_0xFA57C719261AA55D(&(iParam6->f_1), 2);
					}
					if (unk_0x05EFB6A616B6FADE(iParam6->f_1, 3))
					{
						unk_0xFA57C719261AA55D(&(iParam6->f_1), 3);
					}
				}
				break;
		}
	}
	else
	{
		if ((unk_0xFD34717937104F1C() % 8000) < 50)
		{
		}
		if (unk_0x05EFB6A616B6FADE(uParam5->f_1, 3))
		{
			if (unk_0x05EFB6A616B6FADE(iParam6->f_1, 2))
			{
				unk_0xFA57C719261AA55D(&(iParam6->f_1), 2);
			}
			if (unk_0x05EFB6A616B6FADE(iParam6->f_1, 3))
			{
				unk_0xFA57C719261AA55D(&(iParam6->f_1), 3);
			}
		}
		if ((uParam0->f_54 != 12 && unk_0x05EFB6A616B6FADE(uParam0->f_52, 26)) && !unk_0xBE079F709C76E132())
		{
			if ((((uParam0->f_54 == 4 || uParam0->f_54 == 3) || uParam0->f_54 == 6) || uParam0->f_54 == 11) || uParam0->f_54 == 5)
			{
				func_386(uParam0, &(iParam6->f_3));
			}
			uParam0->f_54 = 12;
		}
		if (uParam0->f_14 != -1)
		{
			func_261(&(uParam0->f_14));
		}
	}
}

int func_267(int iParam0)
{
	if ((func_38(iParam0) || func_268(iParam0)) && func_219(func_220(iParam0)) == 0f)
	{
		return 1;
	}
	return 0;
}

int func_268(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_1625435[iVar0 /*560*/].f_1, 7);
	}
	return 0;
}

void func_269(int iParam0, float fParam1, int iParam2)
{
	struct<8> Var0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	
	if (fParam1 > 0f)
	{
		if (func_270(iParam0, &Var0))
		{
			vVar1 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0) };
			func_197(1);
			iVar3 = -1;
			iVar2 = 0;
			while (iVar2 < 20)
			{
				if (Global_2437022.f_1285[iVar2 /*30*/].f_6 == 0 || Global_2437022.f_1285[iVar2 /*30*/].f_6 == 7)
				{
					iVar3 = iVar2;
					iVar2 = 20;
				}
				iVar2++;
			}
			if (iVar3 != -1)
			{
				Global_2437022.f_1285[iVar3 /*30*/] = { vVar1 };
				Global_2437022.f_1285[iVar3 /*30*/].f_6 = 1;
				Global_2437022.f_1285[iVar3 /*30*/].f_4 = func_196(Global_2437022.f_1285[iVar3 /*30*/], &Global_1312317, &Global_1312318);
				Global_2437022.f_1285[iVar3 /*30*/].f_5 = fParam1;
				Global_2437022.f_1285[iVar3 /*30*/].f_7 = unk_0xFFCC7EBF88BDEE54();
				Global_2437022.f_1285[iVar3 /*30*/].f_8 = iParam2;
				Global_2437022.f_1285[iVar3 /*30*/].f_14 = { Var0 };
				Global_2437022.f_1285[iVar3 /*30*/].f_9 = func_195();
				Global_2437022.f_1285[iVar3 /*30*/].f_10 = func_194();
			}
		}
	}
}

int func_270(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "PU_REWARD_S1", 32);
			return 1;
		
		case 1:
			StringCopy(sParam1, "PU_REWARD_S2", 32);
			return 1;
		
		case 2:
			StringCopy(sParam1, "PU_REWARD_S3", 32);
			return 1;
		
		case 3:
			StringCopy(sParam1, "PU_REWARD_D1", 32);
			return 1;
		
		case 4:
			StringCopy(sParam1, "PU_REWARD_D2", 32);
			return 1;
		
		case 5:
			StringCopy(sParam1, "PU_REWARD_11", 32);
			return 1;
		
		case 6:
			StringCopy(sParam1, "PU_REWARD_PC", 32);
			return 1;
		
		default:
	}
	return 0;
}

void func_271(int iParam0, int iParam1)
{
	func_205(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_206(iParam0, 0);
	}
}

int func_272(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_184())
	{
		return 0;
	}
	if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_22, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_22, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_273(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61;
	}
	return -1;
}

int func_274()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_273(iVar0) != 2147483647)
		{
			if (func_213(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_275()
{
	Global_2448386.f_673.f_32 = 1;
}

void func_276()
{
	Global_2448386.f_673.f_28 = 1;
	Global_2448386.f_673.f_32 = 0;
	Global_2448386.f_673.f_31 = unk_0xFEB6EEC0545AF7AA(unk_0x61D2332983ACC05C());
	func_13(&(Global_2448386.f_673.f_29));
}

char* func_277()
{
	if (func_12())
	{
		return "Shoplift_Mid";
	}
	return "Shoplift_Low";
}

void func_278(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xB114E5E548204793())
	{
		return;
	}
	if (unk_0x4C9BACA8D249CB13() && func_282(unk_0xD4E735F4B6A956AC(), 1))
	{
		return;
	}
	if (unk_0xD73B1037F6BD4B90(2, 199) || unk_0x1190AB7024CBD8CB(2, 199))
	{
		return;
	}
	if (unk_0x05724BB62A634BD8() != 0)
	{
		return;
	}
	if (unk_0xD1ABB20CFF127CCC())
	{
		return;
	}
	if (unk_0x2F161E7C6520CC0A())
	{
		return;
	}
	if (unk_0x4EAEDDFEDE3BEE19())
	{
		return;
	}
	if (func_281())
	{
		return;
	}
	if (!func_279())
	{
		return;
	}
	if (unk_0x4C9BACA8D249CB13() || iParam0)
	{
		if (!Global_93284.f_1393 && !unk_0xBE079F709C76E132())
		{
			iVar0 = 18;
			_set_warning_message_2("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1, 0);
			Global_2459244 = iParam1;
			Global_93284.f_1393 = 1;
			Global_93284.f_1394 = iParam2;
		}
	}
}

int func_279()
{
	if (func_280())
	{
		return 0;
	}
	if (unk_0x4F3E20635369D110() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_280()
{
	return Global_2458691;
}

bool func_281()
{
	return Global_2459349;
}

int func_282(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_283(iParam0))
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

bool func_283(int iParam0)
{
	return func_284(iParam0);
}

bool func_284(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_13.f_1, 0);
}

void func_285(int iParam0, int iParam1, int iParam2)
{
	Global_93284.f_1395 = iParam0;
	Global_93284.f_1396 = iParam1;
	Global_93284.f_1397 = iParam2;
}

int func_286(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	char* sVar4;
	
	if (uParam0->f_47)
	{
		switch (uParam0->f_48)
		{
			case 0:
				iVar0 = 0;
				iVar1 = 0;
				iVar2 = iParam3;
				if (unk_0xB977B8EE1916CBE3() > 0)
				{
					if (unk_0xB977B8EE1916CBE3() >= iVar2)
					{
						iVar1 = iVar2;
					}
					else
					{
						iVar1 = (iVar2 - (iVar2 - unk_0xB977B8EE1916CBE3()));
					}
					iVar2 = (iVar2 - iVar1);
				}
				if (iVar2 > 0)
				{
					if (unk_0xCCADB536D2A7894D(-1) > 0)
					{
						if (unk_0xCCADB536D2A7894D(-1) >= iVar2)
						{
							iVar0 = iVar2;
						}
						else
						{
							iVar0 = (iVar2 - (iVar2 - unk_0xCCADB536D2A7894D(-1)));
						}
						iVar2 = (iVar2 - iVar0);
					}
				}
				cVar3 = func_364(uParam0->f_12);
				func_294(&sVar4, cVar3, func_295(uParam0));
				if (func_291(78225582, iParam1, unk_0xFEB6EEC0545AF7AA(&sVar4), iParam2, 1, iParam3, 1, 8, 0, 3))
				{
					if (func_289())
					{
						unk_0xF40AEDB0AA11CAFD(1);
						unk_0x2BE9521D47A91668(-iVar0, -iVar1);
						uParam0->f_48 = 1;
					}
					else
					{
						uParam0->f_48 = 3;
					}
				}
				else
				{
					uParam0->f_48 = 3;
				}
				break;
			
			case 1:
				if (func_288(func_274()))
				{
					if (func_287(func_274()) == 2)
					{
						uParam0->f_48 = 2;
					}
					else
					{
						uParam0->f_48 = 3;
					}
				}
				break;
			
			case 2:
				uParam0->f_47 = 0;
				uParam0->f_48 = 0;
				unk_0xF40AEDB0AA11CAFD(0);
				unk_0xD8C147DA332E7F06(13);
				uParam0->f_49 = 2;
				return 0;
				break;
			
			case 3:
				func_210(func_274());
				uParam0->f_47 = 0;
				uParam0->f_48 = 0;
				unk_0xF40AEDB0AA11CAFD(0);
				unk_0xD8C147DA332E7F06(13);
				uParam0->f_49 = 0;
				return 0;
				break;
		}
		return 1;
	}
	uParam0->f_48 = 0;
	uParam0->f_49 = -1;
	return 0;
}

int func_287(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_2;
	}
	return 0;
}

int func_288(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_2 != 1;
	}
	return 0;
}

int func_289()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_218())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_274();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_77()) || unk_0x64BE694244417BDA())
		{
			if (func_290(Global_4262927[iVar2 /*80*/].f_61.f_6, Global_4262927[iVar2 /*80*/].f_61.f_4, Global_4262927[iVar2 /*80*/].f_61.f_1) == 1)
			{
				Global_4263478 = 1;
			}
			return 0;
		}
		if (Global_2459349)
		{
			if (Global_4262927[iVar2 /*80*/].f_61.f_6 == 1067618600 || Global_4262927[iVar2 /*80*/].f_61.f_6 == -1303831698)
			{
				Global_4263479 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_273(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0x93EA4BE98F3F425A(iVar3))
		{
			Global_4262927[iVar2 /*80*/].f_61.f_13 = 1;
			Global_4262927[iVar2 /*80*/].f_61.f_12 = 0;
			Global_4262927[iVar2 /*80*/].f_61.f_14 = unk_0x817B152F7462D506();
			if (bVar0)
			{
				Global_4262927[iVar2 /*80*/].f_61.f_8 = 1;
				Global_4262927[iVar2 /*80*/].f_61.f_12 = 1;
			}
			Global_4262927[iVar2 /*80*/].f_61.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_216(Global_4262927[iVar2 /*80*/], iVar2);
			}
			Global_4263464 = 1;
			return 1;
		}
	}
	return 0;
}

int func_290(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
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
			case -664597565:
			case 599804707:
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
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_291(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_218())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_77()) || unk_0x64BE694244417BDA())
		{
			Global_4263478 = 1;
			return 0;
		}
		if (Global_2459349)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4263479 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_274();
	if (iVar1 == -1)
	{
		if (!func_293(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_292(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		Global_4262927[iVar1 /*80*/].f_61.f_1 = Var2.f_2;
		Global_4262927[iVar1 /*80*/].f_61.f_15 = Var2;
		Global_4262927[iVar1 /*80*/].f_61.f_16 = Var2.f_1;
		if (bVar0 || unk_0x37434C9C32C0C1D5(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_292(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_293(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_218())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_77()) || unk_0x64BE694244417BDA())
		{
			Global_4263478 = 1;
			return 0;
		}
		if (Global_2459349)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4263479 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_4262927[iVar1 /*80*/].f_61.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4262927[iVar1 /*80*/].f_61.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0xE85465535CBA17D7())
		{
			unk_0x220FA7ABD5D740BF();
		}
	}
	if (bVar0 || unk_0x4A5CD6185EA0E17E(&iVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_215(iVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

void func_294(char* sParam0, char* sParam1, int iParam2)
{
	StringCopy(sParam0, "MT_", 64);
	StringConCat(sParam0, sParam1, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

int func_295(var uParam0)
{
	if (func_272(unk_0xD4E735F4B6A956AC(), 1, 0) || func_296(unk_0xD4E735F4B6A956AC()))
	{
		return 3;
	}
	else if (uParam0->f_50 >= 10 && uParam0->f_50 <= 14)
	{
		return 0;
	}
	else if (uParam0->f_50 >= 15 && uParam0->f_50 <= 19)
	{
		return 1;
	}
	else
	{
		return 2;
	}
	return -1;
}

int func_296(int iParam0)
{
	if (iParam0 != func_184())
	{
		if (func_44(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_297(Global_2423801[iParam0 /*413*/].f_309.f_4) == 9;
			}
		}
	}
	return 0;
}

int func_297(int iParam0)
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

void func_298(var uParam0, var uParam1, bool bParam2)
{
	char* sVar0;
	
	if (!uParam0->f_29)
	{
	}
	if (func_307(uParam0))
	{
		uParam0->f_27 = 0;
		func_306(&(uParam0->f_44));
		uParam0->f_12 = (uParam0->f_12 - 1);
		if (uParam0->f_12 < 0)
		{
			uParam0->f_12 = (uParam0->f_13 - 1);
		}
		unk_0xE11F00B4AC919F45(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_350(uParam0->f_12, 1, 1);
		sVar0 = func_348(uParam0->f_12);
		uParam0->f_29 = 0;
		uParam0->f_30 = 0;
		uParam0->f_32 = 0;
		if (unk_0x445EC9E7EACB710E(sVar0))
		{
			func_349(sVar0, 0, 0);
		}
	}
	if (func_303(uParam0))
	{
		uParam0->f_27 = 0;
		func_306(&(uParam0->f_44));
		uParam0->f_12++;
		if (uParam0->f_12 > (uParam0->f_13 - 1))
		{
			uParam0->f_12 = 0;
		}
		unk_0xE11F00B4AC919F45(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_350(uParam0->f_12, 1, 1);
		sVar0 = func_348(uParam0->f_12);
		uParam0->f_29 = 0;
		uParam0->f_30 = 0;
		uParam0->f_32 = 0;
		if (unk_0x445EC9E7EACB710E(sVar0))
		{
			func_349(sVar0, 0, 0);
		}
	}
	if (!uParam0->f_29)
	{
		if (unk_0x2FDEE33A82318C24(func_355(uParam0, uParam0->f_12), 0, 1, 0, -1))
		{
			uParam0->f_28 = 1;
		}
		else
		{
			uParam0->f_28 = 0;
			uParam0->f_36 = 1;
		}
		uParam0->f_29 = 1;
	}
	if (!uParam0->f_30)
	{
		uParam0->f_31 = 1;
		if (uParam0->f_12 == 3)
		{
			uParam0->f_31 = func_130(1275, -1, 0) < 30;
		}
		else if (uParam0->f_12 == 1)
		{
			uParam0->f_31 = func_130(1276, -1, 0) < 15;
		}
		else if (uParam0->f_12 == 2)
		{
			uParam0->f_31 = func_130(1277, -1, 0) < 5;
		}
		else if (uParam0->f_12 == 4)
		{
			uParam0->f_31 = func_130(1097, -1, 0) < 20;
		}
		else if (uParam0->f_12 == 0)
		{
			uParam0->f_31 = func_130(62, -1, 0) < 10;
		}
		else if (uParam0->f_12 == 5)
		{
			uParam0->f_31 = func_130(63, -1, 0) < 10;
		}
		uParam0->f_30 = 1;
	}
	if (!uParam0->f_32)
	{
		if ((*uParam1)[uParam0->f_12] < 10)
		{
			uParam0->f_33 = 1;
		}
		else
		{
			uParam0->f_33 = 0;
			func_349("SNK_SOUT", 0, 0);
		}
		uParam0->f_32 = 1;
	}
	if (uParam0->f_27)
	{
		if (func_299(&(uParam0->f_44)) < 3f)
		{
			if (uParam0->f_35)
			{
				if (!bParam2)
				{
					func_349("SNK_BOUGHT", 0, 0);
				}
				else
				{
					func_349("SNK_STORED", 0, 0);
				}
			}
			else if (!uParam0->f_28)
			{
				func_349("SNK_AFFORD", 0, 0);
			}
			else if (!uParam0->f_33)
			{
				func_349("SNK_SOUT", 0, 0);
			}
			else if (!uParam0->f_31)
			{
				if (uParam0->f_12 == 3)
				{
					func_349("SNK_SNK1FU", 0, 0);
				}
				else if (uParam0->f_12 == 1)
				{
					func_349("SNK_SNK2FU", 0, 0);
				}
				else if (uParam0->f_12 == 2)
				{
					func_349("SNK_SNK3FU", 0, 0);
				}
				else if (uParam0->f_12 == 4)
				{
					func_349("SNK_SMOKFU", 0, 0);
				}
				else if (uParam0->f_12 == 0)
				{
					func_349("SNK_DRK1FU", 0, 0);
				}
				else if (uParam0->f_12 == 5)
				{
					func_349("SNK_DRK2FU", 0, 0);
				}
				else
				{
					func_349("SNK_NEEDED", 0, 0);
				}
				unk_0x2BCFB39E86340DAA(&(uParam0->f_53), 26);
			}
		}
		else
		{
			uParam0->f_27 = 0;
			uParam0->f_35 = 0;
			func_306(&(uParam0->f_44));
			sVar0 = func_348(uParam0->f_12);
			if (unk_0x445EC9E7EACB710E(sVar0))
			{
				func_349(sVar0, 0, 0);
			}
		}
	}
}

float func_299(var uParam0)
{
	if (func_302(uParam0))
	{
		if (func_301(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_300(unk_0x05EFB6A616B6FADE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_300(bool bParam0)
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

bool func_301(var uParam0)
{
	return unk_0x05EFB6A616B6FADE(*uParam0, 2);
}

bool func_302(var uParam0)
{
	return unk_0x05EFB6A616B6FADE(*uParam0, 1);
}

int func_303(var uParam0)
{
	float fVar0;
	
	fVar0 = unk_0x418992ECF9808661(2, 219);
	if ((fVar0 > 0.8f || unk_0xD73B1037F6BD4B90(2, 187)) || unk_0xDF0ADAD7E584090D(2, 242))
	{
		if (!func_302(&(uParam0->f_41)))
		{
			func_305(&(uParam0->f_41));
			return 1;
		}
		else if (func_304(&(uParam0->f_41)) > 0.25f)
		{
			func_379(&(uParam0->f_41));
			return 1;
		}
	}
	else if (func_302(&(uParam0->f_41)))
	{
		func_306(&(uParam0->f_41));
	}
	return 0;
}

float func_304(var uParam0)
{
	if (func_302(uParam0))
	{
		if (func_301(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_300(unk_0x05EFB6A616B6FADE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_305(int iParam0)
{
	if (!func_302(iParam0))
	{
		func_379(iParam0);
	}
}

void func_306(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_307(var uParam0)
{
	float fVar0;
	
	fVar0 = unk_0x418992ECF9808661(2, 219);
	if ((fVar0 < -0.8f || unk_0xD73B1037F6BD4B90(2, 188)) || unk_0xDF0ADAD7E584090D(2, 241))
	{
		if (!func_302(&(uParam0->f_38)))
		{
			func_305(&(uParam0->f_38));
			return 1;
		}
		else if (func_304(&(uParam0->f_38)) > 0.25f)
		{
			func_379(&(uParam0->f_38));
			return 1;
		}
	}
	else if (func_302(&(uParam0->f_38)))
	{
		func_306(&(uParam0->f_38));
	}
	return 0;
}

int func_308()
{
	if (unk_0x0B9F814BC8D14042(2))
	{
		if (Global_4267062 > -1)
		{
			if (unk_0xDF0ADAD7E584090D(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_309(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x0B9F814BC8D14042(2))
	{
		return 0;
	}
	if (unk_0xD1ABB20CFF127CCC() || unk_0x4EAEDDFEDE3BEE19())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x238F4C0DD5EC6FE7();
	}
	if (Global_4267062 == -6)
	{
		unk_0xCD3E96659AE0B4E7(4);
		if (iParam0 && unk_0xD73B1037F6BD4B90(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4267062 = -1;
			return 0;
		}
	}
	if (((Global_4267062 > -1 || Global_4267062 == -3) || Global_4267062 == -2) || unk_0x3FA31BCC04763395())
	{
		unk_0xCD3E96659AE0B4E7(1);
		return 0;
	}
	if (Global_4267062 == -1 && iParam0)
	{
		if (unk_0xD73B1037F6BD4B90(2, 237))
		{
			unk_0xCD3E96659AE0B4E7(4);
			Global_4267062 = -6;
			return 1;
		}
		else
		{
			unk_0xCD3E96659AE0B4E7(3);
			return 0;
		}
	}
	unk_0xCD3E96659AE0B4E7(1);
	return 0;
}

void func_310(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!unk_0x0B9F814BC8D14042(2))
	{
		Global_4267062 = -1;
		return;
	}
	unk_0x2C9A4990364EDE4F(1);
	fVar0 = Global_17364;
	fVar2 = (fVar0 + Global_17366);
	fVar3 = Global_17367.f_5728;
	fVar1 = (Global_17367.f_5728 - (IntToFloat(Global_17367.f_5730) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17367.f_5730 < 1)
	{
		fVar1 = (Global_17367.f_5728 - 0.034722f);
	}
	unk_0xCD282E433560A509(76, 84);
	unk_0xE4C207949B93A9C7(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xCBE25B0074CBFC48(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xCBE25B0074CBFC48(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x0DA2C67B1175034B();
	func_313();
	if (Global_4267062 == -6)
	{
		return;
	}
	Global_4267062 = -1;
	fVar7 = Global_4267056;
	fVar8 = Global_4267057;
	if (Global_17367.f_5731 > Global_17367.f_5730)
	{
		if (((Global_4267056 >= fVar0 && Global_4267056 <= fVar2) && Global_4267057 >= fVar3) && Global_4267057 < (fVar3 + fVar6))
		{
			Global_4267062 = -2;
			if (bParam3)
			{
				func_312(0);
			}
			return;
		}
		if (((Global_4267056 >= fVar0 && Global_4267056 <= fVar2) && Global_4267057 >= (fVar3 + fVar6)) && Global_4267057 < (fVar3 + 0.034722f))
		{
			Global_4267062 = -3;
			if (bParam3)
			{
				func_312(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = floor((fVar9 / 0.034722f));
		if (Global_17367.f_5731 == -1)
		{
			Global_4267062 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17367.f_5730);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0xCD282E433560A509(76, 84);
				unk_0xE4C207949B93A9C7(-0.05f, -0.05f, 0f, 0f);
				func_311(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17366, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x0DA2C67B1175034B();
			}
		}
		Global_4267062 = Global_17367.f_7712[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4267062 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4267062 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4267062 = -4;
		return;
	}
	Global_4267062 = -1;
}

void func_311(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xFF35427AF9343886((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_312(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_17364;
	fVar1 = Global_17367.f_5728;
	unk_0xCD282E433560A509(76, 84);
	unk_0xE4C207949B93A9C7(-0.05f, -0.05f, 0f, 0f);
	if (Global_4267062 == -2)
	{
		func_311(fVar0, fVar1, Global_17366, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4267062 == -3)
	{
		func_311(fVar0, (fVar1 + fVar2), Global_17366, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x0DA2C67B1175034B();
}

void func_313()
{
	Global_4267058 = Global_4267056;
	Global_4267059 = Global_4267057;
	Global_4267056 = unk_0x8CBB8AEBE6D8962B(2, 239);
	Global_4267057 = unk_0x8CBB8AEBE6D8962B(2, 240);
	Global_4267060 = (Global_4267056 - Global_4267058);
	Global_4267061 = (Global_4267057 - Global_4267059);
}

void func_314(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	
	if (!func_168(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_345(0, bParam6))
	{
		return;
	}
	unk_0xCD282E433560A509(76, 84);
	unk_0xE4C207949B93A9C7(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_17367)
	{
		if (func_343(29, 1, 1, &fVar36, &fVar37, bParam7))
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
		if (func_342())
		{
			iVar59 = round((to_float(iVar60) * fVar62));
		}
		fVar63 = (to_float(iVar59) / to_float(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_342())
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
					StringCopy(&cVar64, func_341(29), 64);
					StringCopy(&cVar65, func_339(29, 1), 64);
					if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_6863[29 /*16*/])) == -1487683087)
					{
						func_311(Global_17364, Global_17365, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
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
				func_311(Global_17364, (Global_17365 + fVar56), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17365 + fVar56) + 0.034722f) + 0f);
				if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_1)) != 0)
				{
					func_338();
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
						func_338();
						func_336((((Global_17364 + fParam5) - 0.00390625f) - func_337("CM_ITEM_COUNT", Global_17367.f_5732, Global_17367.f_5731)), ((Global_17365 + fVar56) + 0.00416664f), "CM_ITEM_COUNT", Global_17367.f_5732, Global_17367.f_5731);
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
				func_311(Global_17364, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_343(Global_17367.f_4766, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17364 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_335(fVar40);
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
				func_311(Global_17364, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_335(fVar40);
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
					func_343(Global_17367.f_4766, 1, 1, &fVar36, &fVar37, bParam7);
					func_334(Global_17367.f_4766, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xE56EDA9982C42132(func_341(Global_17367.f_4766), func_339(Global_17367.f_4766, 1), ((Global_17364 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
					func_343(Global_4266986.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17364 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_335(fVar40);
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
				func_311(Global_17364, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_335(fVar40);
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
					func_343(Global_4266986.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_334(Global_4266986.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xE56EDA9982C42132(func_341(Global_4266986.f_67), func_339(Global_4266986.f_67, 1), ((Global_17364 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
			func_327(iVar59, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
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
					func_325(bVar32, 1, 0, 0, 0, 0, 0);
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
												func_325(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, iVar74, bVar51, bVar50);
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
													if (func_343(Global_17367.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
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
											if (func_343(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17367.f_5081[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_343(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_334(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xE56EDA9982C42132(func_341(26), func_339(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_343(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_343(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_334(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xE56EDA9982C42132(func_341(27), func_339(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
											func_325(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_17367.f_8087 && Global_17367.f_8088 == iVar6)
											{
												func_324(bVar32);
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
													if (func_343(Global_17367.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_343(Global_17367.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_334(Global_17367.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17367.f_5081[iVar8] == 2)
															{
																unk_0xE56EDA9982C42132(func_341(Global_17367.f_4433[(iVar22 + iVar28)]), func_339(Global_17367.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0xE56EDA9982C42132(func_341(Global_17367.f_4433[(iVar22 + iVar28)]), func_339(Global_17367.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
												if (func_323() && unk_0x8B1574454E8C2421(joaat("fm_mission_creator")) > 0)
												{
													if (iVar8 == 0)
													{
														func_325(0, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
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
													if (func_343(Global_17367.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_343(Global_17367.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_334(Global_17367.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17367.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0xE56EDA9982C42132(func_341(Global_17367.f_4433[(iVar22 + iVar14)]), func_339(Global_17367.f_4433[(iVar22 + iVar14)], bVar32), (Global_17364 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_17367.f_5081[iVar8] == 2)
															{
																unk_0xE56EDA9982C42132(func_341(Global_17367.f_4433[(iVar22 + iVar14)]), func_339(Global_17367.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0xE56EDA9982C42132(func_341(Global_17367.f_4433[(iVar22 + iVar14)]), func_339(Global_17367.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
											func_325(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17367.f_8087 && Global_17367.f_8088 == iVar6)
											{
												func_324(bVar32);
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
											if (func_343(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17367.f_5081[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_343(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_334(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xE56EDA9982C42132(func_341(26), func_339(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_343(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_343(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_334(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xE56EDA9982C42132(func_341(27), func_339(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_325(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, 0, 0, 0);
										func_322((fVar34 + fVar40), fVar35, "NUMBER", Global_17367.f_3918[iVar20], 0);
									}
									bVar39 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17367.f_5727)
										{
											func_325(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17367.f_8087 && Global_17367.f_8088 == iVar6)
											{
												func_324(bVar32);
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
											if (func_343(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_17367.f_5081[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_343(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_334(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xE56EDA9982C42132(func_341(26), func_339(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_343(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_343(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_334(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xE56EDA9982C42132(func_341(27), func_339(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_325(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, 0, 0, 0);
										func_321((fVar34 + fVar40), fVar35, "NUMBER", Global_17367.f_4175[iVar21], Global_17367.f_4304[iVar21]);
									}
									bVar39 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar33)
									{
										if (func_343(Global_17367.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
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
												if (func_343(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_17367.f_5081[iVar8] == 2)
													{
														fVar40 = (fVar40 - (fVar36 * 2f));
													}
													fVar43 = (fVar36 * 0.5f);
													if (func_343(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_334(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0xE56EDA9982C42132(func_341(26), func_339(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
												if (func_343(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + fVar36);
													fVar43 = (fVar36 * 0.5f);
													if (func_343(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_334(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0xE56EDA9982C42132(func_341(27), func_339(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_343(Global_17367.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_334(Global_17367.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0xE56EDA9982C42132(func_341(Global_17367.f_4433[iVar22]), func_339(Global_17367.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), (fVar36 * func_320(Global_17367.f_4433[iVar22])), (fVar37 * func_320(Global_17367.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
									if (func_343(26, 1, 1, &fVar36, &fVar37, bParam7))
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
		func_316(0);
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
		func_315(1);
	}
	unk_0x0DA2C67B1175034B();
}

void func_315(int iParam0)
{
	Global_1369750.f_1079 = iParam0;
}

void func_316(int iParam0)
{
	if (func_319())
	{
		return;
	}
	if (!Global_14513.f_1 == 1)
	{
		if (func_172(0))
		{
			func_317(iParam0);
		}
		unk_0x2BCFB39E86340DAA(&Global_2384, 2);
	}
}

void func_317(int iParam0)
{
	if (func_319())
	{
		return;
	}
	if (Global_14681)
	{
		func_318(0, 0);
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
	if (!func_237())
	{
		Global_14513.f_1 = 3;
	}
}

void func_318(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_172(0))
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

bool func_319()
{
	return unk_0x05EFB6A616B6FADE(Global_1678593, 19);
}

float func_320(int iParam0)
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

void func_321(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x7C25BC565D364568(sParam2);
	unk_0x1757EE80C206FA5E(fParam3, iParam4);
	unk_0xB435CE12BEF0DBF7(fParam0, fParam1, 0);
}

void func_322(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x7C25BC565D364568(sParam2);
	unk_0xCDA87E1DA52C8C9D(iParam3);
	unk_0xB435CE12BEF0DBF7(fParam0, fParam1, iParam4);
}

bool func_323()
{
	return unk_0x05BEBC245254F6F2(-1762644250);
}

void func_324(bool bParam0)
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

void func_325(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_326(Global_17367.f_6006[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_326(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_327(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_168(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_345(bParam4, bParam8))
	{
		return;
	}
	if (func_332())
	{
		return;
	}
	if (unk_0x2B21DC45DEAA4B80())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_330(unk_0xD4E735F4B6A956AC(), 0))
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
					func_329(&(Global_17367.f_4769[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_4962[iVar2 /*4*/])) == unk_0xFEB6EEC0545AF7AA("PREV"))
					{
						func_329(&(Global_17367.f_4769[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17367.f_5011[iVar1] == -1)
					{
						func_328(&(Global_17367.f_4962[iVar1 /*4*/]));
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
				func_329(&Global_4266986);
				if (Global_4266986.f_20 == -1)
				{
					func_328(&(Global_4266986.f_16));
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

void func_328(char* sParam0)
{
	unk_0x390B339C943A8A54(sParam0);
	unk_0xD481829E3E36543B();
}

void func_329(char* sParam0)
{
	unk_0x0BAAED7962F122D5(sParam0);
}

bool func_330(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_331(-1, 0) == 8;
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

int func_331(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_77();
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

int func_332()
{
	vector3 vVar0;
	
	if (Global_14513.f_1 > 3)
	{
		return 1;
	}
	if (func_333())
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

int func_333()
{
	if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_334(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_335(float fParam0)
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

void func_336(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x7C25BC565D364568(sParam2);
	unk_0xCDA87E1DA52C8C9D(iParam3);
	unk_0xCDA87E1DA52C8C9D(iParam4);
	unk_0xB435CE12BEF0DBF7(fParam0, fParam1, 0);
}

float func_337(char* sParam0, int iParam1, int iParam2)
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
	func_338();
	unk_0xC42A779360572EA7(sParam0);
	unk_0xCDA87E1DA52C8C9D(iParam1);
	unk_0xCDA87E1DA52C8C9D(iParam2);
	return unk_0x4E0DD18900B7ACAE(1);
}

void func_338()
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

var func_339(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0x429D45A6C6520026(&(Global_17367.f_6863[iParam0 /*16*/])))
	{
		if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_6863[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_70(unk_0xD4E735F4B6A956AC()) };
			if (unk_0x686DAB3ED67144AB(&Var2, &uVar1))
			{
				return func_340(&uVar1);
			}
		}
		else
		{
			return func_340(&(Global_17367.f_6863[iParam0 /*16*/]));
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

var func_340(var uParam0)
{
	return uParam0;
}

char* func_341(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0x429D45A6C6520026(&(Global_17367.f_6014[iParam0 /*16*/])))
	{
		if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_6014[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_70(unk_0xD4E735F4B6A956AC()) };
			unk_0x686DAB3ED67144AB(&Var1, &uVar0);
			return func_340(&uVar0);
		}
		else
		{
			return func_340(&(Global_17367.f_6014[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_342()
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

int func_343(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_341(iParam0), 64);
	StringCopy(&cVar1, func_339(iParam0, bParam1), 64);
	if (unk_0xFEB6EEC0545AF7AA(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x359669D87D0E343F(&iVar2, &iVar3);
			fVar5 = unk_0xA0B98358F89CB4ED(0);
			if (func_342())
			{
				iVar2 = round((to_float(iVar3) * fVar5));
			}
			fVar6 = (to_float(iVar2) / to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_342())
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
		vVar7.x = (vVar7.x * (func_344(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_344(iParam0) / fVar4));
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

float func_344(int iParam0)
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

int func_345(bool bParam0, bool bParam1)
{
	if (Global_2437022.f_1889.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x3A83743561B4F70C() || (func_246(8, -1) && func_346() != 64)) || (unk_0x05724BB62A634BD8() != 0 && !bParam1)) || (unk_0x47C3DC461C758C29() && !bParam0)) || unk_0xBE079F709C76E132()) || Global_71465) || Global_17367.f_8090) || unk_0x4EAEDDFEDE3BEE19()) || Global_93284.f_1393)
	{
		return 0;
	}
	return 1;
}

int func_346()
{
	return Global_1312792;
}

void func_347(int iParam0, char* sParam1, int iParam2, bool bParam3)
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
	if (!bParam3)
	{
		unk_0x2BCFB39E86340DAA(&(Global_17367.f_5050), Global_17367.f_4767);
	}
	StringCopy(&(Global_17367.f_4769[Global_17367.f_4767 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17367.f_4962[Global_17367.f_4767 /*4*/]), sParam1, 16);
	Global_17367.f_5011[Global_17367.f_4767] = iParam2;
	Global_17367.f_5024[Global_17367.f_4767] = iParam0;
	Global_17367.f_5037[Global_17367.f_4767] = 32;
	Global_17367.f_4767++;
}

char* func_348(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = iParam0;
	}
	else
	{
		iVar0 = 6;
	}
	switch (iVar0)
	{
		case 6:
			return "SNK_AFFORD";
		
		case 3:
			return "SNK_ITEM1_D";
		
		case 1:
			return "SNK_ITEM2_D";
		
		case 2:
			return "SNK_ITEM3_D";
		
		case 4:
			return "SNK_ITEM4_D";
		
		case 0:
			return "SNK_ITEM5_D";
		
		case 5:
			return "SNK_ITEM6_D";
		
		default:
	}
	return "";
}

void func_349(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17367.f_4690), sParam0, 16);
	Global_17367.f_4760 = 0;
	Global_17367.f_4761 = 0;
	Global_17367.f_4762 = 0;
	Global_17367.f_4763 = 0;
	Global_17367.f_4764 = iParam1;
	Global_17367.f_4765 = unk_0xFD34717937104F1C();
	Global_17367.f_4766 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17367.f_4694[iVar0] = 0;
		iVar0++;
	}
}

void func_350(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17367.f_5734 = uParam0;
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

void func_351(int iParam0)
{
	Global_17367.f_5733 = iParam0;
}

void func_352(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17367.f_5220 >= 256)
	{
		return;
	}
	if (Global_17367.f_5738 >= 4)
	{
		return;
	}
	if (Global_17367.f_5739 != 1)
	{
		return;
	}
	if (Global_17367.f_5738 >= Global_17367.f_5736)
	{
		return;
	}
	Global_17367.f_3918[Global_17367.f_5220] = uParam0;
	Global_17367.f_5220++;
	Global_17367.f_2124[Global_17367.f_5737 /*5*/][Global_17367.f_5738] = 2;
	Global_17367.f_5738++;
	if (Global_17367.f_5738 >= Global_17367.f_5736)
	{
		fVar0 = func_354();
		if (Global_17367.f_5073[Global_17367.f_5217] && Global_17367.f_5738 == Global_17367.f_5736)
		{
			func_343(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17367.f_5066[(Global_17367.f_5217 - 1)])
		{
			Global_17367.f_5066[(Global_17367.f_5217 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17367.f_5738 >= Global_17367.f_5736)
		{
			fVar3 = func_353();
			if (fVar3 > Global_17367.f_5740[Global_17367.f_5216])
			{
				Global_17367.f_5740[Global_17367.f_5216] = fVar3;
			}
		}
	}
}

float func_353()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17367.f_5738)
	{
		if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17367.f_4433[((Global_17367.f_5222 - iVar1) + iVar0)] != 0)
		{
			if (func_343(Global_17367.f_4433[((Global_17367.f_5222 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0xAC0B4B294E7DA73D(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0xAC0B4B294E7DA73D(0.35f, 0);
}

float func_354()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_17367.f_5738)
	{
		if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_325(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[Global_17367.f_5737 /*6*/])) != 0)
	{
		unk_0xC42A779360572EA7(&(Global_17367.f_73[Global_17367.f_5737 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17367.f_5738)
	{
		if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[Global_17367.f_5737 /*6*/])) != 0)
			{
				unk_0x4FDA9E6EF359F8A9(&(Global_17367.f_73[(Global_17367.f_5737 + iVar8) /*6*/]));
			}
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[Global_17367.f_5737 /*6*/])) != 0)
			{
				unk_0x4FDA9E6EF359F8A9(&(Global_17367.f_73[(Global_17367.f_5737 + iVar8) /*6*/]));
			}
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 2)
		{
			if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[Global_17367.f_5737 /*6*/])) != 0)
			{
				unk_0xCDA87E1DA52C8C9D(Global_17367.f_3918[((Global_17367.f_5220 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 3)
		{
			if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[Global_17367.f_5737 /*6*/])) != 0)
			{
				unk_0x1757EE80C206FA5E(Global_17367.f_4175[((Global_17367.f_5221 - iVar4) + iVar10)], Global_17367.f_4304[((Global_17367.f_5221 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 5)
		{
			if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[Global_17367.f_5737 /*6*/])) != 0)
			{
				unk_0xC327C023FDA37F2E(&(Global_2458730[((Global_17367.f_5219 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 6)
		{
			if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[Global_17367.f_5737 /*6*/])) != 0)
			{
				unk_0x4FDA9E6EF359F8A9(&(Global_2458730[((Global_17367.f_5219 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 7)
		{
			if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[Global_17367.f_5737 /*6*/])) != 0)
			{
				unk_0xC327C023FDA37F2E(&(Global_2458730[((Global_17367.f_5219 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 9)
		{
			if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[Global_17367.f_5737 /*6*/])) != 0)
			{
				unk_0xC327C023FDA37F2E(&(Global_2458730[((Global_17367.f_5219 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_73[Global_17367.f_5737 /*6*/])) != 0)
	{
		fVar0 = unk_0x4E0DD18900B7ACAE(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17367.f_4433[((Global_17367.f_5222 - iVar5) + iVar7)] != 0)
		{
			func_343(Global_17367.f_4433[((Global_17367.f_5222 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_355(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	switch (func_295(uParam0))
	{
		case 0:
			switch (iVar0)
			{
				case 3:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 5;
				
				case 4:
					return 7;
				
				case 0:
					return 2;
				
				case 5:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 4:
					return 8;
				
				case 0:
					return 2;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 4;
				
				case 4:
					return 6;
				
				case 0:
					return 3;
				
				case 5:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

int func_356(int iParam0)
{
	if (func_130(func_358(iParam0), -1, 0) >= func_357(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_357(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 30;
		
		case 1:
			return 15;
		
		case 2:
			return 5;
		
		case 4:
			return 20;
		
		case 0:
			return 10;
		
		case 5:
			return 10;
		
		default:
	}
	return 0;
}

int func_358(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 1275;
		
		case 1:
			return 1276;
		
		case 2:
			return 1277;
		
		case 4:
			return 1097;
		
		case 0:
			return 62;
		
		case 5:
			return 63;
		
		default:
	}
	return 9954;
}

void func_359(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17367.f_5222 >= 256)
	{
		return;
	}
	if (Global_17367.f_5738 >= 4)
	{
		return;
	}
	if (Global_17367.f_5739 != 1)
	{
		return;
	}
	if (Global_17367.f_5738 >= Global_17367.f_5736)
	{
		return;
	}
	Global_17367.f_4433[Global_17367.f_5222] = iParam0;
	Global_17367.f_5222++;
	Global_17367.f_2124[Global_17367.f_5737 /*5*/][Global_17367.f_5738] = 4;
	Global_17367.f_5738++;
	if (Global_17367.f_5738 >= Global_17367.f_5736)
	{
		fVar0 = func_354();
		if (Global_17367.f_5073[Global_17367.f_5217] && Global_17367.f_5738 == Global_17367.f_5736)
		{
			func_343(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17367.f_5066[(Global_17367.f_5217 - 1)])
		{
			Global_17367.f_5066[(Global_17367.f_5217 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17367.f_5738 >= Global_17367.f_5736)
		{
			fVar3 = func_353();
			if (fVar3 > Global_17367.f_5740[Global_17367.f_5216])
			{
				Global_17367.f_5740[Global_17367.f_5216] = fVar3;
			}
		}
	}
}

void func_360(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
		func_363(Global_17367.f_5216, 1);
	}
	else
	{
		func_363(Global_17367.f_5216, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_362(&(Global_17367.f_73[Global_17367.f_5218 /*6*/]));
		if (Global_17367.f_5073[Global_17367.f_5217])
		{
			func_343(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_361(&(Global_17367.f_73[Global_17367.f_5218 /*6*/]));
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

float func_361(char* sParam0)
{
	if (!unk_0x445EC9E7EACB710E(sParam0))
	{
	}
	return unk_0xAC0B4B294E7DA73D(0.35f, 0);
}

float func_362(char* sParam0)
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
	func_325(0, 1, 0, 0, 0, 0, 0);
	unk_0xC42A779360572EA7(sParam0);
	return unk_0x4E0DD18900B7ACAE(1);
}

void func_363(int iParam0, bool bParam1)
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

char* func_364(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return "SNK_ITEM1";
		
		case 1:
			return "SNK_ITEM2";
		
		case 2:
			return "SNK_ITEM3";
		
		case 4:
			return "SNK_ITEM4";
		
		case 0:
			return "SNK_ITEM5";
		
		case 5:
			return "SNK_ITEM6";
		
		default:
	}
	return "";
}

void func_365(int iParam0, char* sParam1, char* sParam2)
{
	Global_17367 = iParam0;
	func_366(29, sParam1, sParam2);
}

void func_366(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_17367.f_6014[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17367.f_6863[iParam0 /*16*/]), sParam2, 64);
}

void func_367(char* sParam0)
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

void func_368(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17367.f_5081[0] = iParam0;
	Global_17367.f_5081[1] = iParam1;
	Global_17367.f_5081[2] = iParam2;
	Global_17367.f_5081[3] = iParam3;
	Global_17367.f_5081[4] = iParam4;
}

void func_369(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_370(bool bParam0, bool bParam1)
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

int func_371(int iParam0, var uParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	float fVar1;
	
	switch (iParam0)
	{
		case 0:
			*uParam1 = { unk_0x2F230B37E9FFF23F(-706.6382f, -913.6887f, 19.21f, -89.999f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-89.999f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 1:
			*uParam1 = { unk_0x2F230B37E9FFF23F(-47.19871f, -1757.67f, 29.42f, -130f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-130f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 2:
			*uParam1 = { unk_0x2F230B37E9FFF23F(1164.21f, -322.89f, 69.2f, -80f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-80f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 3:
			*uParam1 = { unk_0x2F230B37E9FFF23F(1698.307f, 4923.371f, 42.06f, 145f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (145f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 4:
			*uParam1 = { unk_0x2F230B37E9FFF23F(-1820.465f, 793.8166f, 138.09f, -47.53f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-47.53f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 5:
			vVar0 = { 1165.958f, 2710.201f, 38.14286f };
			fVar1 = -1.15f;
			*uParam1 = { unk_0x2F230B37E9FFF23F(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 6:
			vVar0 = { -2967.027f, 390.9038f, 15.02f };
			fVar1 = -94.76f;
			*uParam1 = { unk_0x2F230B37E9FFF23F(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 7:
			vVar0 = { -1222.331f, -907.8234f, 12.31f };
			fVar1 = -147.297f;
			*uParam1 = { unk_0x2F230B37E9FFF23F(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 8:
			vVar0 = { 1134.811f, -982.3615f, 46.4f };
			fVar1 = 96.68562f;
			*uParam1 = { unk_0x2F230B37E9FFF23F(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 9:
			vVar0 = { -1486.673f, -378.4638f, 40.15f };
			fVar1 = -46.229f;
			*uParam1 = { unk_0x2F230B37E9FFF23F(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 10:
			vVar0 = { -3244.573f, 1000.658f, 12.83f };
			fVar1 = 175.074f;
			*uParam1 = { unk_0x2F230B37E9FFF23F(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 11:
			vVar0 = { -3041.357f, 584.2665f, 7.9f };
			fVar1 = -162.241f;
			*uParam1 = { unk_0x2F230B37E9FFF23F(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 12:
			vVar0 = { 548.9015f, 2668.941f, 42.15f };
			fVar1 = -82.5f;
			*uParam1 = { unk_0x2F230B37E9FFF23F(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 13:
			vVar0 = { 2554.875f, 381.3857f, 108.62f };
			fVar1 = 177.716f;
			*uParam1 = { unk_0x2F230B37E9FFF23F(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 14:
			vVar0 = { 2676.212f, 3280.969f, 55.24f };
			fVar1 = 150.87f;
			*uParam1 = { unk_0x2F230B37E9FFF23F(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 15:
			vVar0 = { 1729.329f, 6417.123f, 35.03f };
			fVar1 = 63.641f;
			*uParam1 = { unk_0x2F230B37E9FFF23F(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 16:
			vVar0 = { 1959.323f, 3742.29f, 32.34f };
			fVar1 = 120f;
			*uParam1 = { unk_0x2F230B37E9FFF23F(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 17:
			vVar0 = { 24.94562f, -1344.954f, 29.49f };
			fVar1 = 90f;
			*uParam1 = { unk_0x2F230B37E9FFF23F(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 18:
			vVar0 = { 373.5954f, 328.5892f, 103.56f };
			fVar1 = 75.885f;
			*uParam1 = { unk_0x2F230B37E9FFF23F(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case -2:
			*uParam1 = { 1390.653f, 3598.966f, 35.6115f };
			*uParam2 = { -3.6091f, 0.022f, -8.6461f };
			*uParam3 = 35f;
			break;
	}
	return 1;
}

void func_372()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		unk_0x57BA8F59E7F4F9BA(0.325f, 0.3f);
	}
}

void func_373(int iParam0, int iParam1)
{
	if (!func_282(unk_0xD4E735F4B6A956AC(), 1) || iParam1)
	{
		if (!func_378())
		{
			Global_1312416.f_1 = 1;
			Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_9 = 1;
			if (iParam0 == 1)
			{
				Global_1312416.f_2 = 1;
			}
			func_374(0);
		}
	}
}

void func_374(int iParam0)
{
	if (!func_378() || iParam0)
	{
		Global_1312416 = 1;
		func_377(1);
		if (((!unk_0xD8B89B387D170E27() && !func_376()) && !func_375(unk_0xD4E735F4B6A956AC())) && !func_142(unk_0xD4E735F4B6A956AC()))
		{
			Global_968392 = 1;
		}
		Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_8 = 1;
	}
}

int func_375(int iParam0)
{
	if (func_282(iParam0, 1))
	{
		if (Global_1589747[iParam0 /*790*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_376()
{
	return Global_2448386.f_729;
}

void func_377(bool bParam0)
{
	if (unk_0x4C9BACA8D249CB13())
	{
		if (!func_378())
		{
			if (func_44(unk_0xD4E735F4B6A956AC(), 1, 0))
			{
				unk_0xC35C0EB12F3FFC86(unk_0xA19140A5C42D8715(), 1);
				unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 342, false);
				unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 122, false);
			}
			unk_0xF3C4177B039F638B(unk_0xD4E735F4B6A956AC(), 1f);
			unk_0xD550690FAE7D7C3E(0);
			unk_0x28CB770DF80421E9(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				if (bParam0)
				{
					unk_0xFC5473B7F86C369D(0, 0);
				}
			}
		}
		else
		{
			if (func_44(unk_0xD4E735F4B6A956AC(), 1, 1))
			{
				unk_0xC35C0EB12F3FFC86(unk_0xA19140A5C42D8715(), 0);
				unk_0xB20B772FD9DE1847(unk_0xA19140A5C42D8715(), joaat("weapon_unarmed"), true);
				unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 342, true);
				unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 122, true);
				unk_0xF3C4177B039F638B(unk_0xD4E735F4B6A956AC(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0xFC5473B7F86C369D(1, 0);
				}
			}
			unk_0xD550690FAE7D7C3E(1);
			unk_0x28CB770DF80421E9(0);
		}
	}
}

bool func_378()
{
	return Global_1312416;
}

void func_379(int iParam0)
{
	func_380(iParam0, 0f);
}

void func_380(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_300(unk_0x05EFB6A616B6FADE(*iParam0, 4)) - fParam1);
	unk_0x2BCFB39E86340DAA(iParam0, 1);
	unk_0xFA57C719261AA55D(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_381(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_262(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x58E3CCF930D23BD5(unk_0xA6580F898F4E801C()))
	{
		return 0;
	}
	if (func_172(0))
	{
		return 0;
	}
	if (unk_0x5CA3186381FC012C())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36827[iVar0 /*32*/] == 1 && Global_36827[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36827[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36827[iVar0 /*32*/].f_5 = 1;
			Global_36827[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36827[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36827[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_382()
{
	if (Global_106070.f_20382.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

bool func_383()
{
	return Global_17226;
}

int func_384(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { unk_0x2F230B37E9FFF23F(*uParam1, fParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { unk_0x2F230B37E9FFF23F(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { unk_0x2F230B37E9FFF23F(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { unk_0x2F230B37E9FFF23F(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { unk_0x2F230B37E9FFF23F(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { unk_0x2F230B37E9FFF23F(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { unk_0x2F230B37E9FFF23F(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { unk_0x2F230B37E9FFF23F(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { unk_0x2F230B37E9FFF23F(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case -2:
			*uParam3 = { 1390.955f, 3604.379f, 33.98091f };
			*uParam4 = { 1394.475f, 3605.664f, 35.98091f };
			*uParam5 = { 1392.551f, 3605.449f, 35.30949f };
			*uParam6 = 0.75f;
			break;
	}
	return 1;
}

bool func_385(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_208, iParam1);
}

void func_386(var uParam0, var uParam1)
{
	unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
	func_423(unk_0xD4E735F4B6A956AC(), 1, 0);
	unk_0xD87B76260C547F31(0f);
	unk_0xAA32DD4848CF93E0(0f, 1065353216);
	if (uParam0->f_51 > 0)
	{
		*uParam1 = uParam0->f_51;
		uParam0->f_51 = 0;
	}
	func_407();
	unk_0xFA57C719261AA55D(&(uParam0->f_53), 7);
	if (func_150("SHR_MENU"))
	{
		unk_0x135C61E339DABBAC(1);
	}
	if (uParam0->f_14 != -1)
	{
		func_261(&(uParam0->f_14));
	}
	if (unk_0x37B568B777BC65F9(uParam0->f_1))
	{
		unk_0x77F0486CE0E598D5(uParam0->f_1, 0);
	}
	unk_0x8E88E73F74A9FF79(false, 0, 3000, 1, 0, 0);
}

int func_387(float fParam0)
{
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		if (fParam0 <= 0f)
		{
			return unk_0x89EAB236AEBAF7FB(unk_0xA19140A5C42D8715()) > 0;
		}
		else
		{
			return unk_0x955A0B020B61F993(unk_0xA19140A5C42D8715(), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), fParam0) > 0;
		}
	}
	return 0;
}

int func_388(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (unk_0x4C9BACA8D249CB13() && !bParam3)
	{
		if (unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), iParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (unk_0x69E48309C7AE810E(unk_0x1893BEC593409B02(unk_0xFD34717937104F1C(), iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

int func_389(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if ((*uParam0)[iVar0] < 10)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_390()
{
	unk_0x2F89329397A277BC(&uLocal_119);
	unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 0, 2);
	unk_0x3F01127ECD227890(0, "mp_am_hold_up", "handsup_enter", 8f, -8f, -1, 262192, 0, 0, 0, 0);
	unk_0x3F01127ECD227890(0, "mp_am_hold_up", "handsup_base", 8f, -4f, -1, 262193, 0, 0, 0, 0);
	unk_0x301F42EEE3C40328(uLocal_119);
	unk_0x2F89329397A277BC(&uLocal_120);
	unk_0x3F01127ECD227890(0, "mp_am_hold_up", "handsup_base", 4f, -4f, -1, 262193, 0, 0, 0, 0);
	unk_0x301F42EEE3C40328(uLocal_120);
	unk_0x2F89329397A277BC(&uLocal_121);
	unk_0x956B3CF461C0C1C9(0, vLocal_112, 2f, -1, 0.25f, 0, fLocal_113);
	unk_0x3F01127ECD227890(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0, 0, 0, 0);
	unk_0x3F01127ECD227890(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0, 0, 0, 0);
	unk_0x1659AF2827EC9D40(0, vLocal_112, 250f, -1, 1, 0);
	unk_0x00135C6A6DDEC2EA(0, 0);
	unk_0x301F42EEE3C40328(uLocal_121);
	unk_0x2F89329397A277BC(&uLocal_123);
	unk_0x3F01127ECD227890(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0, 0, 0, 0);
	unk_0x3F01127ECD227890(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0, 0, 0, 0);
	unk_0x00135C6A6DDEC2EA(0, 0);
	unk_0x301F42EEE3C40328(uLocal_123);
	unk_0x2F89329397A277BC(&uLocal_122);
	unk_0x956B3CF461C0C1C9(0, vLocal_112, 2f, -1, 0.25f, 0, (fLocal_113 - 180f));
	unk_0x60EE6BD0F9B51FFC(0, 1);
	unk_0xB943C83C5BDB3DBB(0, 20f, 0);
	unk_0x301F42EEE3C40328(uLocal_122);
}

void func_391(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_392(var uParam0)
{
	if (unk_0x83A1DA4E6C55E952(uParam0))
	{
		return unk_0x4915F4759304D5CF(unk_0x8A5B683BACF7B78C(uParam0));
	}
	return 1;
}

int func_393()
{
	return Local_103.f_12;
}

char* func_394(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "ShopUI_Title_GasStation";
		
		case 5:
			return "ShopUI_Title_LiquorStore3";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "ShopUI_Title_LiquorStore2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "ShopUI_Title_ConvenienceStore";
		
		case -2:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

int func_395()
{
	vector3 vVar0;
	
	if (func_403(&(Local_105.f_50), 0))
	{
		func_401(Local_105.f_50, &iLocal_139, &iLocal_140, &iLocal_141, &iLocal_142, &vLocal_143, &vLocal_144);
		func_400(Local_105.f_50, &vLocal_145, &vLocal_146, &fLocal_147);
		func_399(Local_105.f_50, &vLocal_148, &vLocal_149, &fLocal_150);
		switch (Local_105.f_50)
		{
			case 0:
				vLocal_115 = { 1393.1f, 3605.89f, (35.2f - 0.2f) };
				vLocal_116 = { 0f, 0f, 21.89f };
				iLocal_110 = func_50(0);
				vLocal_112 = { 1394.852f, 3609.509f, 33.9809f };
				fLocal_113 = 116.5329f;
				iLocal_134 = 1;
				if (func_397(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				break;
			
			case 1:
				vLocal_116 = { 0f, 0f, -160f };
				vLocal_115 = { -3041.38f, 584.35f, (8.11f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { -3047.512f, 588.9807f, 6.9089f };
				fLocal_113 = 178.8753f;
				iLocal_134 = 1;
				if (func_397(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				break;
			
			case 2:
				vLocal_115 = { -3244.56f, 1000.74f, (13.03f - 0.2f) };
				vLocal_116 = { 0f, 0f, 175.52f };
				iLocal_110 = func_50(0);
				vLocal_112 = { -3249.114f, 1006.558f, 11.8307f };
				fLocal_113 = 191.594f;
				iLocal_134 = 1;
				if (func_397(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				break;
			
			case 3:
				vLocal_116 = { 0f, 0f, -82.38f };
				vLocal_115 = { 548.82f, 2668.93f, (42.36f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 543.0796f, 2663.967f, 41.1565f };
				fLocal_113 = 228.4295f;
				iLocal_134 = 1;
				if (func_397(6, 18))
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				break;
			
			case 4:
				vLocal_116 = { 0f, 0f, 180f };
				vLocal_115 = { 2554.88f, 381.47f, (108.82f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 2549.85f, 387.1622f, 107.623f };
				fLocal_113 = 197.2994f;
				iLocal_134 = 1;
				if (func_397(6, 18))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				break;
			
			case 5:
				vLocal_116 = { 0f, 0f, 155f };
				vLocal_115 = { 2676.26f, 3281.04f, (55.44f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 2671.351f, 3283.136f, 54.2411f };
				fLocal_113 = 296.5427f;
				iLocal_134 = 1;
				if (func_397(6, 18))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				break;
			
			case 6:
				vLocal_116 = { 0f, 0f, 63.3f };
				vLocal_115 = { 1729.4f, 6417.08f, (35.24f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 1733.967f, 6421.495f, 34.0372f };
				fLocal_113 = 130.9518f;
				iLocal_134 = 1;
				if (func_397(6, 18))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 2;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				break;
			
			case 7:
				vLocal_116 = { 0f, 0f, 117f };
				vLocal_115 = { 1959.4f, 3742.33f, (32.54f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 1958.92f, 3746.267f, 31.3438f };
				fLocal_113 = 73.6245f;
				iLocal_134 = 1;
				if (func_397(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				break;
			
			case 8:
				vLocal_116 = { 0f, 0f, 92f };
				vLocal_115 = { 25.03f, -1344.96f, (29.69f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 30.5721f, -1339.782f, 28.4939f };
				fLocal_113 = 110.7699f;
				iLocal_134 = 1;
				if (func_397(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				break;
			
			case 9:
				vLocal_116 = { 0f, 0f, 75f };
				vLocal_115 = { 373.68f, 328.56f, (103.77f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 376.2976f, 331.8158f, 102.5664f };
				fLocal_113 = 52.0064f;
				iLocal_134 = 1;
				if (func_397(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 2;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				break;
			
			case 10:
				vLocal_116 = { 0f, 0f, 0f };
				vLocal_115 = { 1165.96f, 2710.2f, (38.25f - 0.105f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 1168.971f, 2719.118f, 36.0632f };
				fLocal_113 = 136.5945f;
				iLocal_134 = 3;
				if (func_397(10, 22))
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 11:
				vLocal_116 = { 0f, 0f, -92f };
				vLocal_115 = { -2967.03f, 390.9f, (15.23f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { -2962.983f, 391.9788f, 14.0433f };
				fLocal_113 = 176.1174f;
				iLocal_134 = 3;
				if (func_397(10, 22))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 12:
				vLocal_116 = { 0f, 0f, -145f };
				vLocal_115 = { -1222.33f, -907.82f, (12.52f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { -1218.283f, -915.7103f, 10.3264f };
				fLocal_113 = 43.8031f;
				iLocal_134 = 3;
				if (func_397(10, 22))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 13:
				vLocal_116 = { 0f, 0f, 103f };
				vLocal_115 = { 1134.81f, -982.36f, (46.6f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 1130.155f, -979.2816f, 45.4158f };
				fLocal_113 = 269.2587f;
				iLocal_134 = 3;
				if (func_397(10, 22))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 2;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 14:
				vLocal_116 = { 0f, 0f, -41f };
				vLocal_115 = { -1486.67f, -378.46f, (40.35f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { -1479.163f, -375.0302f, 38.1633f };
				fLocal_113 = 36.5415f;
				iLocal_134 = 3;
				if (func_397(10, 22))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 15:
				vLocal_116 = { 0f, 0f, 145f };
				vLocal_115 = { (1698.33f - 0.04f), 4923.33f, (42.12f - 0.06f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 1707.303f, 4918.31f, 41.0636f };
				fLocal_113 = 24.9178f;
				iLocal_134 = 2;
				if (func_397(8, 20))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 16:
				vLocal_116 = { 0f, 0f, -87f };
				vLocal_115 = { -706.69f, -913.69f, (19.27f - 0.06f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { -709.7998f, -907.1352f, 18.2156f };
				fLocal_113 = 291.6504f;
				iLocal_134 = 2;
				if (func_397(8, 20))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 2;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 17:
				vLocal_116 = { 0f, 0f, -125f };
				vLocal_115 = { -47.23f, -1757.64f, (29.48f - 0.06f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { -40.42f, -1751.423f, 28.421f };
				fLocal_113 = 145.6553f;
				iLocal_134 = 2;
				if (func_397(8, 20))
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 18:
				vLocal_116 = { 0f, 0f, -74f };
				vLocal_115 = { 1164.16f, -322.9f, (69.26f - 0.06f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 1159.682f, -314.254f, 68.2051f };
				fLocal_113 = 232.6337f;
				iLocal_134 = 2;
				if (func_397(8, 20))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 19:
				vLocal_115 = { -1820.5f, 793.78f, (138.32f - 0.22f) };
				vLocal_116 = { 0f, 0f, -47.3f };
				iLocal_110 = func_50(0);
				vLocal_112 = { -1828.907f, 799.6096f, 137.1776f };
				fLocal_113 = 247.1234f;
				iLocal_134 = 2;
				if (func_397(8, 20))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
		}
		vLocal_115 = { unk_0x2F230B37E9FFF23F(vLocal_115, vLocal_116.z, 0f, 0.075f, 0f) };
		vLocal_111 = { unk_0x9D8252F9238B0F81("mp_am_hold_up", "holdup_victim_20s", vLocal_115, vLocal_116, 0, 2) };
		vVar0 = { unk_0xD3F9112CE33C93B9("mp_am_hold_up", "holdup_victim_20s", vLocal_115, vLocal_116, 0f, 2) };
		Local_103.f_42 = vVar0.z;
		vLocal_127 = { unk_0x9D8252F9238B0F81("mp_am_hold_up", "holdup_victim_20s_bag", vLocal_115, vLocal_116, 0, 2) };
		vVar0 = { unk_0xD3F9112CE33C93B9("mp_am_hold_up", "holdup_victim_20s_bag", vLocal_115, vLocal_116, 0f, 2) };
		fLocal_128 = vVar0.z;
		vLocal_129 = { unk_0x9D8252F9238B0F81("mp_am_hold_up", "holdup_victim_20s_till", vLocal_115, vLocal_116, 0, 2) };
		vVar0 = { unk_0xD3F9112CE33C93B9("mp_am_hold_up", "holdup_victim_20s_till", vLocal_115, vLocal_116, 0f, 2) };
		fLocal_130 = vVar0.z;
		Local_105 = func_396(Local_105.f_50);
		if (unk_0x45F99485D7E1C29A())
		{
			Local_103.f_45 = iLocal_316[0];
			if (Local_103.f_45 == 0)
			{
				StringCopy(&(Local_103.f_50), "MP_M_SHOPKEEP_01_PAKISTANI_MINI_01", 64);
				StringCopy(&(Local_103.f_46), "StoreOwner2", 16);
			}
			else if (Local_103.f_45 == 1)
			{
				StringCopy(&(Local_103.f_50), "MP_M_SHOPKEEP_01_LATINO_MINI_01", 64);
				StringCopy(&(Local_103.f_46), "StoreOwner", 16);
			}
			else
			{
				StringCopy(&(Local_103.f_50), "MP_M_SHOPKEEP_01_CHINESE_MINI_01", 64);
				StringCopy(&(Local_103.f_46), "StoreOwner3", 16);
			}
		}
		if (!unk_0x05EFB6A616B6FADE(Local_105.f_52, 29))
		{
			unk_0x5F041E7AE5419FEC(vLocal_115, 0.5f, iLocal_131, 1);
			unk_0x2BCFB39E86340DAA(&(Local_105.f_52), 29);
		}
		return 1;
	}
	return 0;
}

int func_396(int iParam0)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		case 17:
			return 1;
		
		case 18:
			return 2;
		
		case 15:
			return 3;
		
		case 19:
			return 4;
		
		case 10:
			return 5;
		
		case 11:
			return 6;
		
		case 12:
			return 7;
		
		case 13:
			return 8;
		
		case 14:
			return 9;
		
		case 2:
			return 10;
		
		case 1:
			return 11;
		
		case 3:
			return 12;
		
		case 4:
			return 13;
		
		case 5:
			return 14;
		
		case 6:
			return 15;
		
		case 7:
			return 16;
		
		case 8:
			return 17;
		
		case 9:
			return 18;
		
		case 0:
			return -2;
		
		default:
	}
	return -1;
}

bool func_397(int iParam0, int iParam1)
{
	return func_398(unk_0x34CEB9721AC6A0A9(), iParam0, iParam1);
}

int func_398(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_399(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1393.091f, 3607.383f, 33.9809f };
		*uParam2 = { 1391.178f, 3612.516f, (38.3614f - 0.2f) };
		*uParam3 = 12.5f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3045.013f, 585.9666f, (10.35421f - 0.2f) };
		*uParam2 = { -3048.714f, 584.7961f, 6.948262f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3247.313f, 1003.657f, (15.27433f - 0.2f) };
		*uParam2 = { -3251.157f, 1003.984f, 11.83501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 546.5474f, 2665.642f, (44.60108f - 0.2f) };
		*uParam2 = { 547.054f, 2661.794f, 41.15667f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2552f, 384.2527f, (111.0656f - 0.2f) };
		*uParam2 = { 2548.145f, 384.4133f, 107.6241f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2674.946f, 3284.833f, (57.68088f - 0.2f) };
		*uParam2 = { 2671.569f, 3286.699f, 54.24464f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1733.119f, 6418.579f, (37.48002f - 0.2f) };
		*uParam2 = { 1734.839f, 6422.032f, 34.03751f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1960.224f, 3746.258f, (34.7878f - 0.2f) };
		*uParam2 = { 1958.295f, 3749.599f, 31.34522f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 27.71382f, -1341.968f, (31.93314f - 0.2f) };
		*uParam2 = { 27.71049f, -1338.109f, 28.49479f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 377.0183f, 330.808f, (106.0112f - 0.2f) };
		*uParam2 = { 377.9499f, 334.5523f, 102.567f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1167.015f, 2711.601f, (40.66147f - 0.2f) };
		*uParam2 = { 1167.082f, 2720.243f, 36.06501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2965.705f, 389.6696f, (17.64162f - 0.2f) };
		*uParam2 = { -2957.095f, 389.139f, 13.04323f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1222.402f, -909.5575f, (14.92466f - 0.2f) };
		*uParam2 = { -1217.682f, -916.7974f, 10.33735f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.284f, -981.473f, (49.01414f - 0.2f) };
		*uParam2 = { 1124.708f, -982.6027f, 44.42008f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.883f, -378.2694f, (42.76172f - 0.2f) };
		*uParam2 = { -1478.771f, -372.1664f, 38.16948f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1704.556f, 4921.806f, (44.02687f - 0.2f) };
		*uParam2 = { 1708.285f, 4919.196f, 41.06359f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -709.019f, -907.7159f, (21.17918f - 0.2f) };
		*uParam2 = { -709.0177f, -903.1516f, 18.21618f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.16617f, -1751.578f, (31.37973f - 0.2f) };
		*uParam2 = { -42.22961f, -1748.09f, 28.42099f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1160.825f, -317.4214f, (71.16085f - 0.2f) };
		*uParam2 = { 1160.033f, -312.932f, 68.20509f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1826.218f, 796.6393f, (140.1334f - 0.2f) };
		*uParam2 = { -1829.301f, 799.9996f, 137.18f };
		*uParam3 = 4f;
	}
}

void func_400(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1395.548f, 3600.575f, 33.98914f };
		*uParam2 = { 1392.08f, 3609.983f, (37.33543f - 0.2f) };
		*uParam3 = 12.25f;
	}
	if (iParam0 == 1)
	{
		*uParam1 = { -3038.657f, 589.5176f, 6.904751f };
		*uParam2 = { -3045.476f, 587.4066f, (11.31222f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 2)
	{
		*uParam1 = { -3240.032f, 1004.482f, 11.8307f };
		*uParam2 = { -3247.188f, 1005.107f, (16.25224f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 3)
	{
		*uParam1 = { 544.2278f, 2672.5f, 41.1565f };
		*uParam2 = { 545.201f, 2665.442f, (45.69155f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 4)
	{
		*uParam1 = { 2559.176f, 385.3936f, 107.623f };
		*uParam2 = { 2552.054f, 385.6057f, (112.1638f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 5)
	{
		*uParam1 = { 2681.864f, 3282.603f, 54.24114f };
		*uParam2 = { 2675.586f, 3285.981f, (58.79021f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 6)
	{
		*uParam1 = { 1731.237f, 6411.557f, 34.03723f };
		*uParam2 = { 1734.383f, 6417.952f, (38.58461f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 7)
	{
		*uParam1 = { 1964.999f, 3740.795f, 31.34375f };
		*uParam2 = { 1961.384f, 3746.928f, (35.89571f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 8)
	{
		*uParam1 = { Vector(28.49392f, -1348.507f, 27.03358f) + Vector(0f, -0.4f, 2f) };
		*uParam2 = { Vector(33.03834f, -1341.382f, 27.05614f) - Vector(0.2f, 0.2f, 0.2f) + Vector(0f, -0.4f, 2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 9)
	{
		*uParam1 = { 376.6309f, 323.5533f, 102.5664f };
		*uParam2 = { 378.3253f, 330.4793f, (107.1095f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 10)
	{
		*uParam1 = { 1166.497f, 2703.756f, 37.06307f };
		*uParam2 = { 1166.525f, 2711.974f, (41.66307f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 11)
	{
		*uParam1 = { -2973.512f, 390.7873f, 14.04322f };
		*uParam2 = { -2965.288f, 390.2452f, (18.54322f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 12)
	{
		*uParam1 = { -1226.417f, -902.6738f, 11.33496f };
		*uParam2 = { -1221.765f, -909.5887f, (15.82626f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 13)
	{
		*uParam1 = { 1141.35f, -980.9322f, 45.41594f };
		*uParam2 = { 1132.976f, -982.0952f, (49.91574f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 14)
	{
		*uParam1 = { -1490.949f, -383.4771f, 39.16332f };
		*uParam2 = { -1485.006f, -377.6167f, (43.66332f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 15)
	{
		*uParam1 = { 1698.98f, 4929.093f, 41.06357f };
		*uParam2 = { 1705.233f, 4924.578f, (45.60386f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 16)
	{
		*uParam1 = { -711.77f, -916.4685f, 18.21557f };
		*uParam2 = { -711.7368f, -908.7517f, (22.76488f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 17)
	{
		*uParam1 = { -52.90452f, -1756.474f, 28.42097f };
		*uParam2 = { -47.92523f, -1750.614f, (32.94246f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 18)
	{
		*uParam1 = { 1159.633f, -326.5087f, 68.20507f };
		*uParam2 = { 1158.335f, -318.9123f, (72.74828f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 19)
	{
		*uParam1 = { -1822.373f, 788.2851f, 137.1876f };
		*uParam2 = { -1827.484f, 794.0739f, (141.6933f - 0.2f) };
		*uParam3 = 14f;
	}
}

void func_401(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_402(iParam0, uParam5, uParam6);
	switch (iParam0)
	{
		case 0:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0xB68EB57358F46F86(*uParam5, "v_methlab");
			}
			*uParam2 = -1621784842;
			*uParam4 = -924210258;
			*uParam3 = -1;
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0xB68EB57358F46F86(*uParam5, "v_shop_247");
			}
			*uParam2 = 1569794095;
			*uParam4 = 462608346;
			*uParam3 = -1;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0xB68EB57358F46F86(*uParam5, "v_gen_liquor");
			}
			*uParam2 = -278510267;
			*uParam4 = -1293435817;
			*uParam3 = -1;
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0xB68EB57358F46F86(*uParam5, "v_gasstation");
			}
			*uParam2 = -1659520475;
			*uParam4 = -1272390353;
			*uParam3 = -835664728;
			break;
	}
}

void func_402(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1394.169f, 3599.86f, 34.0121f };
			*uParam2 = { 1395.548f, 3600.575f, 33.98914f };
			break;
		
		case 1:
			*uParam1 = { -3038.908f, 589.5187f, 6.9048f };
			*uParam2 = { -3038.657f, 589.5176f, 6.904751f };
			break;
		
		case 2:
			*uParam1 = { -3240.317f, 1004.433f, 11.8307f };
			*uParam2 = { -3240.032f, 1004.482f, 11.8307f };
			break;
		
		case 3:
			*uParam1 = { 544.2802f, 2672.811f, 41.1566f };
			*uParam2 = { 544.2278f, 2672.5f, 41.1565f };
			break;
		
		case 4:
			*uParam1 = { 2559.247f, 385.5266f, 107.623f };
			*uParam2 = { 2559.176f, 385.3936f, 107.623f };
			break;
		
		case 5:
			*uParam1 = { 2682.003f, 3282.543f, 54.2411f };
			*uParam2 = { 2681.864f, 3282.603f, 54.24114f };
			break;
		
		case 6:
			*uParam1 = { 1731.21f, 6411.403f, 34.0372f };
			*uParam2 = { 1731.237f, 6411.557f, 34.03723f };
			break;
		
		case 7:
			*uParam1 = { 1965.054f, 3740.555f, 31.3448f };
			*uParam2 = { 1964.999f, 3740.795f, 31.34375f };
			break;
		
		case 8:
			*uParam1 = { Vector(28.5036f, -1348.813f, 27.0641f) + Vector(0f, -0.4f, 2f) };
			*uParam2 = { Vector(28.49392f, -1348.507f, 27.03358f) + Vector(0f, -0.4f, 2f) };
			break;
		
		case 9:
			*uParam1 = { 376.6533f, 323.6471f, 102.5664f };
			*uParam2 = { 376.6309f, 323.5533f, 102.5664f };
			break;
		
		case 10:
			*uParam1 = { Vector(37.1573f, 2703.114f, 1195.432f) + Vector(0f, 0.39f, -29.04f) };
			*uParam2 = { 1166.497f, 2703.756f, 37.06307f };
			break;
		
		case 11:
			*uParam1 = { -2973.262f, 390.8184f, 14.0433f };
			*uParam2 = { -2973.512f, 390.7873f, 14.04322f };
			break;
		
		case 12:
			*uParam1 = { -1226.464f, -902.5864f, 11.2783f };
			*uParam2 = { -1226.417f, -902.6738f, 11.33496f };
			break;
		
		case 13:
			*uParam1 = { 1141.36f, -980.8802f, 45.4155f };
			*uParam2 = { 1141.35f, -980.9322f, 45.41594f };
			break;
		
		case 14:
			*uParam1 = { -1491.057f, -383.5728f, 39.1706f };
			*uParam2 = { -1490.949f, -383.4771f, 39.16332f };
			break;
		
		case 15:
			*uParam1 = { 1698.808f, 4929.198f, 41.0783f };
			*uParam2 = { 1698.98f, 4929.093f, 41.06357f };
			break;
		
		case 16:
			*uParam1 = { -711.721f, -916.6965f, 18.2145f };
			*uParam2 = { -711.77f, -916.4685f, 18.21557f };
			break;
		
		case 17:
			*uParam1 = { -53.124f, -1756.405f, 28.421f };
			*uParam2 = { -52.90452f, -1756.474f, 28.42097f };
			break;
		
		case 18:
			*uParam1 = { 1159.542f, -326.6986f, 67.923f };
			*uParam2 = { 1159.633f, -326.5087f, 68.20507f };
			break;
		
		case 19:
			*uParam1 = { -1822.287f, 788.006f, 137.1859f };
			*uParam2 = { -1822.373f, 788.2851f, 137.1876f };
			break;
	}
}

int func_403(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar1 = 9999.9f;
	iVar2 = 0;
	while (iVar2 < 20)
	{
		fVar0 = unk_0x499324B3EF19C288(func_85(unk_0xD4E735F4B6A956AC()), func_404(iVar2), 1);
		if (fVar0 < fVar1)
		{
			if (bParam1)
			{
				if (!unk_0x05EFB6A616B6FADE(Global_2423630.f_62, iVar2) && unk_0x05EFB6A616B6FADE(Global_2423630.f_64, iVar2))
				{
					fVar1 = fVar0;
					*uParam0 = iVar2;
				}
			}
			else
			{
				fVar1 = fVar0;
				*uParam0 = iVar2;
			}
		}
		iVar2++;
	}
	return 1;
}

Vector3 func_404(int iParam0)
{
	vector3 vVar0;
	var uVar1;
	
	func_402(iParam0, &vVar0, &uVar1);
	return vVar0;
}

int func_405(int iParam0)
{
	return Local_104[iParam0 /*10*/].f_4;
}

void func_406()
{
	Global_2448386.f_673.f_28 = 0;
}

void func_407()
{
	if (Global_1312416.f_1 == 1)
	{
		func_408(0);
		Global_1312416.f_1 = 0;
		Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_9 = 0;
	}
}

void func_408(int iParam0)
{
	if (func_378())
	{
		if (iParam0 == 1)
		{
			if (Global_2524719.f_4382 == -1)
			{
				Global_2524719.f_4382 = 60000;
			}
			func_409(&(Global_2524719.f_4380), 0, 0);
			if (Global_2524719.f_4385 == -1)
			{
				Global_2524719.f_4385 = 10000;
			}
			func_409(&(Global_2524719.f_4383), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_8 = 0;
			func_377(1);
		}
		if ((!unk_0xD8B89B387D170E27() && !func_376()) && !func_375(unk_0xD4E735F4B6A956AC()))
		{
			Global_968392 = 0;
		}
	}
}

void func_409(var uParam0, bool bParam1, bool bParam2)
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

void func_410()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!func_44(unk_0xD4E735F4B6A956AC(), 1, 1))
	{
		iVar0 = 1;
		if (unk_0x05EFB6A616B6FADE(Local_105.f_53, 6) && !unk_0x05EFB6A616B6FADE(Local_105.f_53, 5))
		{
			iVar1 = unk_0xCCADB536D2A7894D(-1);
			iVar2 = 0;
			unk_0x2BCFB39E86340DAA(&iVar2, 8);
			unk_0x2BCFB39E86340DAA(&iVar2, 4);
			unk_0x2BCFB39E86340DAA(&iVar2, 1);
			if (iLocal_335 > Global_262145.f_166)
			{
				iLocal_335 = Global_262145.f_166;
			}
			if (iVar1 < iLocal_335)
			{
				if (iVar1 > 0)
				{
					if (func_49(func_50(1)))
					{
						if (unk_0xDD38C9BE3BA698E1(iVar1, 0, 0, 0, &uVar3, -1))
						{
							if (func_218())
							{
								if (!unk_0x05EFB6A616B6FADE(Global_2524719.f_7, 1))
								{
									Global_2524719.f_4709 = iVar1;
									Global_2524719.f_4710 = iVar2;
									Global_2524719.f_4711 = { unk_0xB56F49FF5CD20C80(unk_0xA19140A5C42D8715(), 1067030938, 1069547520) };
									func_208(&(Global_2524719.f_4708), -1135378931, 537254313, 1474183246, 1022400740, Global_2524719.f_4709, 1, 3);
									unk_0x2BCFB39E86340DAA(&(Global_2524719.f_7), 1);
									iLocal_335 = 0;
									unk_0x2BCFB39E86340DAA(&(Local_105.f_53), 5);
								}
							}
							else
							{
								unk_0x8CE9E6FCB0AF8C32(joaat("pickup_money_variable"), unk_0xB56F49FF5CD20C80(unk_0xA19140A5C42D8715(), 1067030938, 1069547520), iVar2, iVar1, func_50(1), 0, 0);
								func_203(-iVar1, 1, 1, 1092616192);
								unk_0xE76E0EC54C02CF90(iVar1, 0, 0);
								func_207(1022400740, iVar1, &uVar4, 0, 0, 0);
								iLocal_335 = 0;
								func_411();
								unk_0x2BCFB39E86340DAA(&(Local_105.f_53), 5);
							}
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
			else if (iLocal_335 > 0)
			{
				if (func_49(func_50(1)))
				{
					if (unk_0xDD38C9BE3BA698E1(iLocal_335, 0, 0, 0, &uVar3, -1))
					{
						if (func_218())
						{
							if (!unk_0x05EFB6A616B6FADE(Global_2524719.f_7, 1))
							{
								Global_2524719.f_4709 = iLocal_335;
								Global_2524719.f_4710 = iVar2;
								Global_2524719.f_4711 = { unk_0xB56F49FF5CD20C80(unk_0xA19140A5C42D8715(), 1067030938, 1069547520) };
								func_208(&(Global_2524719.f_4708), -1135378931, 537254313, 1474183246, 1022400740, Global_2524719.f_4709, 1, 3);
								unk_0x2BCFB39E86340DAA(&(Global_2524719.f_7), 1);
								iLocal_335 = 0;
								unk_0x2BCFB39E86340DAA(&(Local_105.f_53), 5);
							}
						}
						else
						{
							unk_0x8CE9E6FCB0AF8C32(joaat("pickup_money_variable"), unk_0xB56F49FF5CD20C80(unk_0xA19140A5C42D8715(), 1067030938, 1069547520), iVar2, iLocal_335, func_50(1), 0, 0);
							func_203(-iLocal_335, 1, 1, 1092616192);
							unk_0xE76E0EC54C02CF90(iLocal_335, 0, 0);
							func_207(1022400740, iLocal_335, &uVar5, 0, 0, 0);
							iLocal_335 = 0;
							func_411();
							unk_0x2BCFB39E86340DAA(&(Local_105.f_53), 5);
						}
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
		}
		if (iVar0 == 1)
		{
			func_432();
		}
		else
		{
			return;
		}
	}
}

void func_411()
{
	Global_2524719.f_272 = 0;
	Global_2524719.f_273 = 0;
	Global_2524719.f_274 = 0;
}

int func_412()
{
	var uVar0;
	
	func_419(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			return 1;
		}
	}
	if (func_418())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_417())
	{
		return 1;
	}
	if (func_416(157))
	{
		if (!func_415())
		{
			return 1;
		}
	}
	if (func_416(155))
	{
		return 1;
	}
	if (!unk_0x18F86E07E41D913F())
	{
		return 1;
	}
	if (func_413() != 0)
	{
		if (unk_0x8B1574454E8C2421(func_413()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_413()
{
	switch (func_414())
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

int func_414()
{
	return Global_25459;
}

bool func_415()
{
	return Global_2448386.f_587;
}

int func_416(int iParam0)
{
	if (unk_0xF10AFD11E6EE81BF(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_417()
{
	return Global_2458191;
}

bool func_418()
{
	return Global_2448386.f_582;
}

void func_419(var uParam0)
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
					func_420(iVar0);
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

void func_420(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x8866A4E42CDA3EF1(1, iParam0, &vVar0, 3))
	{
		if (func_44(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xEE978C39384D834F(vVar0.y);
			if (unk_0xDC5D81351D6A4DDB(iVar1))
			{
				if (unk_0x5D7DFE2058701942(iVar1, 0))
				{
					iVar2 = unk_0xCAEB6CE71A2C7212(iVar1, 0);
					if (unk_0xEB1A41F6F719807C(iVar2, vVar0.z) && unk_0xB592B7A61F21E7A5())
					{
						if (func_421(iVar2, &bVar3))
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

int func_421(int iParam0, var uParam1)
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

void func_422()
{
	wait(0);
}

void func_423(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0x7627C34551D75293())
		{
			unk_0x65227735B3827631(0);
		}
	}
	if (!unk_0x4C9BACA8D249CB13())
	{
		iVar0 = iParam2;
		unk_0x962CF6A9EA6FDCAC(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_429())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0xC77FA683E9BB485B(iParam0) && unk_0x58E3CCF930D23BD5(iParam0))
		{
			iVar25 = unk_0xEE978C39384D834F(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x4C9BACA8D249CB13())
				{
					unk_0xB4F8FDD2A8432441(1);
				}
				else if (bVar13 || (!func_330(unk_0xD4E735F4B6A956AC(), 0) && !func_428()))
				{
					unk_0x7C73A424F1117528(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x4C9BACA8D249CB13() && !bVar18)
					{
						unk_0xB4F8FDD2A8432441(0);
					}
					Global_2423801[iParam0 /*413*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_427(iVar25) && !unk_0xA118174015ACCF05(iVar25))
				{
					if (!bVar21)
					{
						unk_0xDCFB67537602326F(iVar25, true, 0);
					}
				}
				if (!unk_0xF797E4DD45066C88(iVar25))
				{
					if (!bVar20)
					{
						unk_0xB29E08C7AB729BAD(iVar25, false);
					}
					unk_0xEAF1F3E17588C851(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xB29E08C7AB729BAD(iVar25, false);
				}
				unk_0x96BFF0680C7B6FD5(iVar25, true);
				unk_0xEF06BE39D11763FC(iParam0, 0);
				unk_0x052E058A2C50C7D6(iParam0, 0);
				if (unk_0x07E3832452A79D33(iVar25) && unk_0x7434BD0C92483685(iVar25))
				{
					unk_0xE7BD42D7C76057DE(iVar25);
				}
				unk_0x2D2E827C6C3D6D26(iVar25, 1);
				if (unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()) == 0)
				{
					func_426();
					func_425();
				}
				if (unk_0x17A40E4EAE8629CE())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0xE6F861B0A4D50CE0())
				{
				}
				Global_2423801[iParam0 /*413*/].f_245 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
				if (Global_2405070.f_2663)
				{
					Global_2405070.f_2663 = 0;
				}
			}
			else
			{
				if (!func_427(iVar25) && !unk_0xA118174015ACCF05(iVar25))
				{
					if (!bVar21)
					{
						unk_0xDCFB67537602326F(iVar25, !bVar14, 0);
					}
					if (!unk_0xF797E4DD45066C88(iVar25))
					{
						if (!bVar20)
						{
							unk_0xB29E08C7AB729BAD(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xEAF1F3E17588C851(iVar25, 1);
						}
					}
					if (func_424(Global_4456448.f_152990))
					{
						unk_0xB29E08C7AB729BAD(iVar25, true);
					}
				}
				if (Global_1312834)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					unk_0xEF06BE39D11763FC(iParam0, 0);
				}
				else
				{
					unk_0xEF06BE39D11763FC(iParam0, 1);
				}
				unk_0x96BFF0680C7B6FD5(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x8C432EAAB21379FE(iVar25) && !unk_0x5D7DFE2058701942(iVar25, 0))
					{
						unk_0x836A6A722DEA63F1(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			unk_0x962CF6A9EA6FDCAC(iParam0, bParam1, iVar26);
		}
	}
}

bool func_424(int iParam0)
{
	return iParam0 == 17;
}

void func_425()
{
	vector3 vVar0;
	
	Global_2437022.f_1228 = 0;
	Global_2437022.f_1229 = 0;
	Global_2437022.f_1230 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437022.f_1235 = -1;
	Global_2437022.f_1236 = 0;
	Global_2405070.f_2674 = { vVar0 };
}

void func_426()
{
	Global_2405070.f_691 = 0;
	Global_2405070.f_2717 = 0;
	Global_2405070.f_509 = 0;
	Global_2405070.f_597 = 0;
	Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_207 = 0;
	Global_2405070.f_2672 = 0;
}

int func_427(int iParam0)
{
	int iVar0;
	
	if (unk_0x5D7DFE2058701942(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xF9D4EF1338E38AFB(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_428()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

int func_429()
{
	if (func_430() == 0)
	{
		return 1;
	}
	return 0;
}

int func_430()
{
	return Global_1312466.f_18;
}

bool func_431(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2448386.f_673.f_28 && unk_0xFEB6EEC0545AF7AA(unk_0x61D2332983ACC05C()) == Global_2448386.f_673.f_31);
	}
	return Global_2448386.f_673.f_28;
}

void func_432()
{
	int iVar0;
	
	Global_2524719.f_8 = 0;
	if (unk_0x4C9BACA8D249CB13())
	{
		if (!func_392(Local_103))
		{
			if (unk_0xABF0452BE64AD290(Local_103) || (!unk_0x8F01F94322569B77(Local_103) && unk_0x45F99485D7E1C29A()))
			{
				unk_0xE5D9346AE3BC7E41(unk_0x8A5B683BACF7B78C(Local_103), 0);
				unk_0x5DC4C018E76213CE(unk_0x8A5B683BACF7B78C(Local_103));
				if (unk_0x05EFB6A616B6FADE(Local_105.f_52, 22))
				{
					if (unk_0x05EFB6A616B6FADE(Local_105.f_52, 20))
					{
						if (Local_103.f_3 != 7)
						{
							if (!unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 9))
							{
								unk_0x9568B1B58F78FF36(unk_0x8A5B683BACF7B78C(Local_103));
								unk_0xE1072FA2FECBAD96(unk_0x8A5B683BACF7B78C(Local_103), uLocal_121);
								unk_0x1F4E5EFBFE503FB3(unk_0x8A5B683BACF7B78C(Local_103), 0);
							}
						}
						else if (unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103), -1442466670) != 0 && unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_103), -1442466670) != 1)
						{
							unk_0x9568B1B58F78FF36(unk_0x8A5B683BACF7B78C(Local_103));
							if (!unk_0x22B3625D717A4563(unk_0x8A5B683BACF7B78C(Local_103), joaat("weapon_pistol"), 0))
							{
								unk_0xD66FF6E7D7FCE47A(unk_0x8A5B683BACF7B78C(Local_103), joaat("weapon_pistol"), 25000, 1);
								unk_0xD461381B293D9B46(unk_0x8A5B683BACF7B78C(Local_103), 30);
							}
							func_232(4);
							unk_0xB943C83C5BDB3DBB(unk_0x8A5B683BACF7B78C(Local_103), 20f, 0);
						}
					}
					else if ((unk_0x05EFB6A616B6FADE(Local_103.f_23, 3) || !func_9()) || !func_436())
					{
						if (!unk_0x05EFB6A616B6FADE(Local_104[unk_0xD60943E3BE730BF0() /*10*/], 9))
						{
							unk_0x9568B1B58F78FF36(unk_0x8A5B683BACF7B78C(Local_103));
							unk_0xE1072FA2FECBAD96(unk_0x8A5B683BACF7B78C(Local_103), uLocal_121);
							unk_0x1F4E5EFBFE503FB3(unk_0x8A5B683BACF7B78C(Local_103), 0);
						}
					}
					else
					{
						unk_0x9568B1B58F78FF36(unk_0x8A5B683BACF7B78C(Local_103));
						unk_0xD738221C247C8B71(unk_0x8A5B683BACF7B78C(Local_103), 1);
						unk_0xB3E1967E66494060(unk_0x8A5B683BACF7B78C(Local_103), -1);
						unk_0x1F4E5EFBFE503FB3(unk_0x8A5B683BACF7B78C(Local_103), 0);
					}
				}
			}
		}
		if ((unk_0x05EFB6A616B6FADE(Local_103.f_23, 3) || !func_9()) || unk_0x76C363FF38E9EA1F() <= 1)
		{
			if (unk_0x83A1DA4E6C55E952(Local_103.f_13))
			{
				if (unk_0xABF0452BE64AD290(Local_103.f_13))
				{
					unk_0xF334C9B245CD323D(unk_0xEA0B19D3958DA45D(Local_103.f_13), 1, 1);
					func_45(&(Local_103.f_13));
				}
			}
		}
		if (((unk_0x05EFB6A616B6FADE(Local_103.f_23, 3) || !func_9()) || unk_0x05EFB6A616B6FADE(Local_105.f_52, 20)) || unk_0x76C363FF38E9EA1F() <= 1)
		{
			if (unk_0x83A1DA4E6C55E952(Local_103.f_14))
			{
				if (unk_0xABF0452BE64AD290(Local_103.f_14))
				{
					func_45(&(Local_103.f_14));
				}
			}
		}
		if (func_218() && unk_0x05EFB6A616B6FADE(Global_2524719.f_7, 1))
		{
			if (func_287(Global_2524719.f_4708) == 1)
			{
				func_435(Global_2524719.f_4708, 4);
			}
			else
			{
				func_210(Global_2524719.f_4708);
			}
			unk_0xFA57C719261AA55D(&(Global_2524719.f_7), 1);
		}
		if (Local_103.f_12 == 6)
		{
			if (unk_0x83A1DA4E6C55E952(Local_103))
			{
				if (unk_0xAEAF59799C2F26E4(unk_0x8A5B683BACF7B78C(Local_103), "XP_Blocker"))
				{
					unk_0x6F487A41E8897BBD(unk_0x8A5B683BACF7B78C(Local_103), "XP_Blocker");
				}
			}
		}
		if (unk_0x45F99485D7E1C29A())
		{
			unk_0x7F5747E66B1395AE(Local_103.f_30);
		}
	}
	func_434();
	unk_0x4DC885EA8D6AF7FC("mp_am_hold_up");
	unk_0x54AE7C0BF1BF8DD8();
	if (func_150("SHR_MENU"))
	{
		unk_0x135C61E339DABBAC(1);
	}
	Global_2524719.f_9 = func_184();
	unk_0x91DE928AD81C6F57(func_394(Local_105));
	func_166(1, Local_105);
	if (Local_105.f_14 != -1)
	{
		func_261(&(Local_105.f_14));
	}
	Global_2524719.f_27 = Local_105;
	if (Global_2524719.f_5630.f_4 == 1)
	{
		Global_2524719.f_5630.f_4 = 0;
	}
	if (Global_2524719.f_5630.f_5 == 1)
	{
		Global_2524719.f_5630.f_5 = 0;
	}
	if (unk_0x05EFB6A616B6FADE(Local_105.f_52, 29))
	{
		unk_0x8FAC08959C2D32F8(vLocal_115, 0.5f, iLocal_131, 1);
	}
	if (unk_0x05EFB6A616B6FADE(Local_105.f_53, 7))
	{
		func_407();
		unk_0xFA57C719261AA55D(&(Local_105.f_53), 7);
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		if (unk_0x05EFB6A616B6FADE(Local_103.f_23, 6) || unk_0x05EFB6A616B6FADE(Local_103.f_23, 21))
		{
			if (unk_0x05EFB6A616B6FADE(Local_103.f_23, 21))
			{
				iVar0 = 1;
			}
			unk_0xE258BE4BCD99AB22(30, iLocal_334, iLocal_335, iVar0);
		}
	}
	if (unk_0x37B568B777BC65F9(Local_105.f_1))
	{
		if (unk_0xC3553172354FFB69(Local_105.f_1))
		{
			unk_0x8E88E73F74A9FF79(false, 0, 3000, 1, 0, 0);
		}
		unk_0x77F0486CE0E598D5(Local_105.f_1, 0);
	}
	func_433();
}

void func_433()
{
	unk_0x8F1A9FE6D91AAFEB();
}

void func_434()
{
	unk_0x3A95A0A3221D4208(&uLocal_118);
	unk_0x3A95A0A3221D4208(&uLocal_119);
}

void func_435(int iParam0, int iParam1)
{
	if (func_273(iParam0) != -1)
	{
		if (Global_4262927[iParam0 /*80*/].f_61.f_2 == 1)
		{
			Global_4262927[iParam0 /*80*/].f_61.f_11 = iParam1;
		}
	}
}

int func_436()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x48908CAFF1B58FF8())
	{
		if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(iVar0)))
		{
			iVar1 = unk_0x9279C21787650C40(unk_0xDF1881EF65347257(iVar0));
			iVar2 = unk_0xEE978C39384D834F(iVar1);
			if (func_44(iVar1, 1, 1))
			{
				if (unk_0xDA3A4E46D189F555(iVar2) == iLocal_139)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_437(struct<21> Param0)
{
	int iVar0;
	
	func_443(func_444(Param0), Param0);
	unk_0x7F2854D39965C275(2);
	unk_0xC0E0EC37CC7BA185(8);
	func_441(0, -1, 0);
	unk_0xF82A3961787FA0A4(&Local_103, 73);
	unk_0x8BFA7A7AB1D02137(&Local_104, 321);
	unk_0x2F3193E06C2EFF44(0);
	if (!func_440())
	{
		return 0;
	}
	if (unk_0x45F99485D7E1C29A())
	{
		func_49(func_50(0));
		func_49(func_50(1));
		func_49(func_50(2));
		unk_0x6D68030C791111E0("mp_am_hold_up");
		unk_0x6D68030C791111E0("mp_missheist_countrybank@cower");
		Local_103.f_44 = 8;
		if (func_439())
		{
			unk_0x2BCFB39E86340DAA(&(Local_103.f_24), 11);
		}
		else if (func_438())
		{
			unk_0x2BCFB39E86340DAA(&(Local_103.f_24), 12);
		}
		Local_103.f_28 = unk_0x22C775856F4633CA(1, 11);
		Local_103.f_31 = unk_0x22C775856F4633CA(1, 5);
		if ((func_12() && !func_385(unk_0xD4E735F4B6A956AC(), 1)) && !func_385(unk_0xD4E735F4B6A956AC(), 2))
		{
			Local_103.f_43 = 2;
			unk_0x2BCFB39E86340DAA(&(Local_103.f_25), 0);
		}
		else
		{
			Local_103.f_43 = 1;
		}
		Local_103.f_71 = unk_0xF59B9063EDAC7451(18f, 28f);
	}
	if (func_93(unk_0xD4E735F4B6A956AC()) != 155)
	{
		unk_0xFF61B53040964FAA(func_50(1), 0);
	}
	iVar0 = func_130(1190, -1, 0);
	if (unk_0x05EFB6A616B6FADE(iVar0, 20) && unk_0x05EFB6A616B6FADE(iVar0, 21))
	{
		unk_0x2BCFB39E86340DAA(&(Local_105.f_53), 1);
	}
	Local_104[unk_0xD60943E3BE730BF0() /*10*/].f_4 = 0;
	return 1;
}

int func_438()
{
	if (Local_105.f_50 >= 0 && Local_105.f_50 <= 9)
	{
		if (func_397(5, 6) || func_397(17, 18))
		{
			return 1;
		}
		return 0;
	}
	if (Local_105.f_50 >= 10 && Local_105.f_50 <= 14)
	{
		if (func_397(9, 10) || func_397(21, 22))
		{
			return 1;
		}
		return 0;
	}
	if (Local_105.f_50 >= 15 && Local_105.f_50 <= 19)
	{
		if (func_397(7, 8) || func_397(19, 20))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_439()
{
	if (Local_105.f_50 >= 0 && Local_105.f_50 <= 9)
	{
		if (func_397(6, 7) || func_397(18, 19))
		{
			return 1;
		}
		return 0;
	}
	if (Local_105.f_50 >= 10 && Local_105.f_50 <= 14)
	{
		if (func_397(10, 11) || func_397(22, 23))
		{
			return 1;
		}
		return 0;
	}
	if (Local_105.f_50 >= 15 && Local_105.f_50 <= 19)
	{
		if (func_397(8, 9) || func_397(20, 21))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_440()
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
		if (func_418())
		{
			return 0;
		}
		if (func_416(155))
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

int func_441(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBF19BA6420EC428C();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_433();
			}
			else
			{
				return 0;
			}
		}
		if (!func_442())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x4C9BACA8D249CB13())
				{
					if (!bParam2)
					{
						func_433();
					}
					else
					{
						return 0;
					}
				}
				if (func_418())
				{
					if (!bParam2)
					{
						func_433();
					}
					else
					{
						return 0;
					}
				}
				if (func_416(155))
				{
					if (!bParam2)
					{
						func_433();
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
					func_433();
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
				func_433();
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
			func_433();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_442()
{
	return Global_1312834;
}

void func_443(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		func_433();
	}
	unk_0x1B0D16DC60698F88(iParam0, 0, Param1.f_16);
}

int func_444(int iParam0)
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

