#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
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
	vector3 vLocal_44 = { 0f, 0f, 0f };
	float fLocal_45 = 0f;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	vector3 vLocal_62 = { 0f, 0f, 0f };
	int iLocal_63 = 0;
	vector3 vLocal_64 = { 0f, 0f, 0f };
	vector3 vLocal_65 = { 0f, 0f, 0f };
	vector3 vLocal_66 = { 0f, 0f, 0f };
	vector3 vLocal_67 = { 0f, 0f, 0f };
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	vector3 vLocal_76 = { 0f, 0f, 0f };
	vector3 vLocal_77 = { 0f, 0f, 0f };
	float fLocal_78 = 0f;
	vector3 vLocal_79 = { 0f, 0f, 0f };
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	vector3 vLocal_84 = { 0f, 0f, 0f };
	float fLocal_85 = 0f;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	bool bLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	struct<6> Local_106 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_107 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	bool bLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	char[] cLocal_146[8] = 0;
	char* sLocal_147 = NULL;
	char* sLocal_148 = NULL;
	char* sLocal_149 = NULL;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	float fLocal_152 = 0f;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	float fLocal_157 = 0f;
	vector3 vLocal_158 = { 0f, 0f, 0f };
	var uLocal_159 = 0;
	int iLocal_160 = 0;
	var uLocal_161 = 16;
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
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	struct<2> Local_326 = { 0, 5 } ;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 5;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_29 = 3;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_45 = -1f;
	iLocal_53 = unk_0x99F9E6870B7B7C2D();
	iLocal_54 = unk_0x09990A2B9C8684F0();
	vLocal_64 = { -3092.82f, 749.8f, 21.48f };
	vLocal_65 = { 181.8977f, 4415.152f, 73.463f };
	vLocal_66 = { 2743.461f, 4385.51f, 47.7521f };
	vLocal_67 = { -382.1346f, 2817.971f, 44.0671f };
	vLocal_79 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_106, "", 24);
	vLocal_61 = { ScriptParam_326.f_1[0 /*3*/] };
	func_267();
	if (unk_0x5EBD03AF78E7B4DB(11))
	{
		if (!unk_0x4915F4759304D5CF(iLocal_71))
		{
			if (unk_0x749F5228DEB730FF(iLocal_71))
			{
				unk_0xF8136E11BE4BEAC3(iLocal_71);
			}
		}
		func_245();
	}
	if (func_216(vLocal_61, 13, iLocal_68, 0, 0))
	{
		func_213(-1);
	}
	else
	{
		unk_0x8F1A9FE6D91AAFEB();
	}
	while (true)
	{
		wait(0);
		if (unk_0x1F85F8C7CC4639AE() || iLocal_89)
		{
			if (!func_212())
			{
				if (func_211())
				{
					func_245();
				}
			}
			unk_0x4789FEFEDF029858("RE_HL", 0);
			switch (iLocal_55)
			{
				case 0:
					if (func_199())
					{
						func_245();
					}
					if (!iLocal_60)
					{
						func_198();
					}
					else
					{
						func_197();
					}
					if (bLocal_59)
					{
						iLocal_111 = 1;
						iLocal_55 = 1;
					}
					break;
				
				case 1:
					if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
					{
						switch (iLocal_56)
						{
							case 0:
								if ((func_196() && iLocal_57 != 8) && iLocal_57 != 10)
								{
									if (!func_212())
									{
										func_187(1);
									}
									iLocal_56 = 1;
								}
								switch (iLocal_57)
								{
									case 0:
										func_180();
										break;
									
									case 1:
										func_178();
										break;
									
									case 2:
										if (func_177())
										{
										}
										iLocal_126 = unk_0xFD34717937104F1C();
										if (iLocal_108 < 1 && !iLocal_109)
										{
											func_176();
										}
										if (iLocal_58 == 1)
										{
											func_175();
										}
										else if (iLocal_58 == 2)
										{
											func_174();
										}
										else if (iLocal_58 == 3)
										{
											func_173();
										}
										else if (iLocal_58 == 5)
										{
											func_170();
										}
										break;
									
									case 3:
										func_167();
										break;
									
									case 4:
										if (iLocal_58 == 1)
										{
											func_150();
											func_149();
										}
										else if (iLocal_58 == 3)
										{
											func_144();
											func_143();
										}
										else if (iLocal_58 == 5)
										{
											func_144();
											func_134();
										}
										if (!bLocal_92)
										{
											func_130();
											func_129();
											func_126();
											func_125();
											func_122();
											func_120();
											func_119();
											func_118();
										}
										func_110();
										break;
									
									case 6:
										func_62();
										if (iLocal_58 == 3)
										{
											func_143();
										}
										break;
									
									case 7:
										func_61();
										if (iLocal_58 == 3)
										{
											func_143();
										}
										break;
									
									case 8:
										if (iLocal_58 == 3)
										{
											func_57();
											func_143();
										}
										break;
									
									case 9:
										if (!unk_0x4915F4759304D5CF(iLocal_71))
										{
											if (unk_0xA60C975CBAB69F34(iLocal_71, vLocal_77, 200f, 200f, 200f, false, true, 0))
											{
												unk_0x956B3CF461C0C1C9(iLocal_71, vLocal_77, 1f, -1, 1048576000, 0, 1193033728);
											}
											else
											{
												unk_0x1CBE3F8ED90509B2(iLocal_71, 1193033728, 0);
											}
											unk_0xD738221C247C8B71(iLocal_71, true);
											wait(5000);
										}
										func_53();
										break;
									
									case 10:
										break;
								}
								if ((func_52() && !func_51()) && iLocal_57 != 10)
								{
									if (!unk_0x4915F4759304D5CF(iLocal_71))
									{
										if (unk_0xA60C975CBAB69F34(iLocal_71, vLocal_79, 5f, 5f, 5f, false, true, 0))
										{
											func_50(0);
											wait(0);
											func_48();
											iLocal_57 = 10;
										}
									}
								}
								if (func_47())
								{
									if (unk_0xDC5D81351D6A4DDB(iLocal_71))
									{
										unk_0x680F17660351F21B(&iLocal_71);
									}
									func_18();
								}
								break;
							
							case 1:
								func_48();
								wait(0);
								if (iLocal_58 == 1)
								{
									func_1(&uLocal_161, cLocal_146, "REHH1_AGG", 4, 0, 0, 0);
								}
								else if (iLocal_58 == 2)
								{
									func_1(&uLocal_161, cLocal_146, "REHH2_AGG", 4, 0, 0, 0);
								}
								else if (iLocal_58 == 3)
								{
									func_1(&uLocal_161, cLocal_146, "REHH3_AGG", 4, 0, 0, 0);
									if (!unk_0x4915F4759304D5CF(iLocal_72))
									{
										unk_0x9568B1B58F78FF36(iLocal_72);
										unk_0x33B5487515BD13D5(iLocal_72, unk_0xA19140A5C42D8715(), 1000f, -1, 0, 0);
										unk_0xD738221C247C8B71(iLocal_72, true);
									}
								}
								else if (iLocal_58 == 5)
								{
									func_1(&uLocal_161, cLocal_146, "REHH5_AGG", 4, 0, 0, 0);
								}
								if (!unk_0x4915F4759304D5CF(iLocal_71))
								{
									unk_0x9568B1B58F78FF36(iLocal_71);
									unk_0x33B5487515BD13D5(iLocal_71, unk_0xA19140A5C42D8715(), 1000f, -1, 0, 0);
									unk_0xD738221C247C8B71(iLocal_71, true);
									func_53();
								}
								break;
							}
					}
					break;
			}
		}
		else
		{
			func_245();
		}
		if (iLocal_57 > 2)
		{
			if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
			{
				if (unk_0xDC5D81351D6A4DDB(iLocal_71))
				{
					if (!unk_0x4915F4759304D5CF(iLocal_71))
					{
						if (!unk_0x10E54C268D1B3FED(iLocal_71, unk_0xA19140A5C42D8715(), 100f, 100f, 100f, 0, 1, 0))
						{
							func_53();
						}
					}
				}
			}
		}
		if (iLocal_57 > 0 && iLocal_57 < 8)
		{
			if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
			{
				if (unk_0x4915F4759304D5CF(iLocal_71))
				{
					if (!func_212())
					{
						func_187(1);
					}
					func_53();
				}
				else if (!unk_0x685AE6AF34B35D3B(iLocal_71))
				{
					if (unk_0xDEAEC99031DCB92A(iLocal_71, unk_0xA19140A5C42D8715(), 0))
					{
						unk_0x9568B1B58F78FF36(iLocal_71);
						unk_0x33B5487515BD13D5(iLocal_71, unk_0xA19140A5C42D8715(), 250f, -1, 0, 0);
						func_53();
					}
				}
			}
		}
	}
}

bool func_1(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_17(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_2(sParam2, iParam3, 0);
}

int func_2(char* sParam0, int iParam1, bool bParam2)
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
					func_16();
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
		if (func_15(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_14();
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
				func_7();
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
				if (func_6())
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
			if (func_5())
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
			func_4();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_3();
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
		func_16();
	}
	return 0;
}

void func_3()
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

void func_4()
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

int func_5()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_6()
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

void func_7()
{
	if (func_13(14))
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
		Global_14513 = func_8();
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

int func_8()
{
	func_9();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_9()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_12(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_11(unk_0xA19140A5C42D8715());
			if (func_10(iVar0) && (!func_13(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_10(Global_106070.f_2355.f_539.f_4301))
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

bool func_10(int iParam0)
{
	return iParam0 < 3;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)
{
	if (func_10(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_13(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_14()
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

bool func_15(int iParam0, int iParam1)
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

void func_16()
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

void func_17(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_18()
{
	while (!func_46())
	{
		wait(0);
	}
	func_42(func_8(), 4, 5);
	func_22(13, iLocal_68);
	func_19();
	func_245();
}

void func_19()
{
	func_20();
}

int func_20()
{
	if (func_21(0))
	{
		return 0;
	}
	if (Global_93271.f_8)
	{
		if (Global_93271.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_93271.f_10 > 1)
	{
		return 0;
	}
	Global_93271.f_10++;
	return 1;
}

bool func_21(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

void func_22(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_39(iParam0))
	{
		func_38(iParam0, iParam1);
		if (!func_37(51))
		{
			func_33("RE_REWARD", 1, 0, 4000, 10000, func_36(), 0, 138, 0);
			func_32(51);
		}
		if (func_31(iParam0))
		{
			Global_106070.f_24967.f_2 = 3;
		}
		if (func_30(iParam0, iParam1) != 322)
		{
			func_24(func_30(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_106058 = iParam1;
		if (Global_106056 == 0)
		{
			if (((Global_106059 == 1 || Global_106059 == 5) || Global_106059 == 11) || Global_106059 == 25)
			{
				func_23(2);
			}
			else if ((Global_106059 == 26 || Global_106059 == 8) || Global_106059 == 17)
			{
				func_23(7);
			}
			else
			{
				func_23(1);
			}
		}
	}
}

void func_23(int iParam0)
{
	Global_106056 = iParam0;
}

void func_24(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_28((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_106070.f_10166[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_106070.f_10166[iParam0 /*12*/].f_6 == 11 || Global_106070.f_10166[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_106070.f_10166[iParam0 /*12*/].f_5 = 1;
		Global_106070.f_10166[iParam0 /*12*/].f_10 = uParam1;
		Global_106070.f_10166[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0xCEF3BD89444715A5(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xCEF3BD89444715A5(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xCEF3BD89444715A5(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_25();
	}
}

void func_25()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_105806 = 0;
	Global_105807 = 0;
	Global_105808 = 0;
	Global_105809 = 0;
	Global_105810 = 0;
	Global_105811 = 0;
	Global_105812 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_106070.f_10166.f_3853;
	Global_106070.f_10166.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_106070.f_10166[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_106070.f_10166[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_105806++;
					fVar1 = (fVar1 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_105807++;
					fVar2 = (fVar2 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_105808++;
					fVar3 = (fVar3 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_105809++;
					fVar4 = (fVar4 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_105810++;
					fVar5 = (fVar5 + (Global_106070.f_10166[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_105811++;
					fVar6 = (fVar6 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_105812++;
					fVar7 = (fVar7 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_105789 > 0)
	{
		if (Global_105806 == Global_105789)
		{
			fVar1 = 55f;
		}
	}
	if (Global_105790 > 0)
	{
		if (Global_105807 == Global_105790)
		{
			fVar2 = 10f;
		}
	}
	if (Global_105791 > 0)
	{
		if (Global_105808 == Global_105791)
		{
			fVar3 = 0f;
		}
	}
	if (Global_105792 > 0)
	{
		if (Global_105809 == Global_105792)
		{
			fVar4 = 10f;
		}
	}
	if (Global_105793 > 0)
	{
		if (((Global_105810 == Global_105793 || (Global_105793 * 10 / Global_105810) < 41) || Global_105810 > Global_105796) || Global_105810 == Global_105796)
		{
			if (!unk_0x05EFB6A616B6FADE(Global_106070.f_10166.f_3856, 14))
			{
				if (Global_105810 == Global_105793)
				{
					unk_0xCEF3BD89444715A5(joaat("num_rndevents_completed"), Global_105793, 0);
					unk_0x2BCFB39E86340DAA(&(Global_106070.f_10166.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_105794 > 0)
	{
		if (Global_105811 == Global_105794)
		{
			fVar6 = 15f;
		}
	}
	if (Global_105795 > 0)
	{
		if (Global_105812 == Global_105795)
		{
			fVar7 = 5f;
		}
	}
	Global_106070.f_10166.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_105810 > Global_105796 || Global_105810 == Global_105796)
	{
		iVar9 = Global_105796;
	}
	else
	{
		iVar9 = Global_105810;
	}
	unk_0x93180BE33E7149EF(joaat("num_missions_completed"), Global_105806, 1);
	unk_0x93180BE33E7149EF(joaat("num_missions_available"), Global_105789, 1);
	unk_0x93180BE33E7149EF(joaat("num_minigames_completed"), Global_105807, 1);
	unk_0x93180BE33E7149EF(joaat("num_minigames_available"), Global_105790, 1);
	unk_0x93180BE33E7149EF(joaat("num_oddjobs_completed"), Global_105808, 1);
	unk_0x93180BE33E7149EF(joaat("num_oddjobs_available"), Global_105791, 1);
	unk_0x93180BE33E7149EF(joaat("num_rndpeople_completed"), Global_105809, 1);
	unk_0x93180BE33E7149EF(joaat("num_rndpeople_available"), Global_105792, 1);
	unk_0x93180BE33E7149EF(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x93180BE33E7149EF(joaat("num_rndevents_available"), Global_105796, 1);
	unk_0x93180BE33E7149EF(joaat("num_misc_completed"), (Global_105812 + Global_105811), 1);
	unk_0x93180BE33E7149EF(joaat("num_misc_available"), (Global_105795 + Global_105794), 1);
	Global_105813 = (Global_105806 * 100 / Global_105789);
	Global_105815 = ((Global_105808 + Global_105807) * 100 / (Global_105791 + Global_105790));
	Global_105814 = ((Global_105809 + iVar9) * 100 / (Global_105792 + Global_105796));
	Global_105816 = ((Global_105811 + Global_105812) * 100 / (Global_105794 + Global_105795));
	unk_0x0D3D00C75484323C(joaat("total_progress_made"), Global_106070.f_10166.f_3853, 1);
	unk_0x93180BE33E7149EF(joaat("percent_story_missions"), Global_105813, 1);
	unk_0x93180BE33E7149EF(joaat("percent_ambient_missions"), Global_105814, 1);
	unk_0x93180BE33E7149EF(joaat("percent_oddjobs"), Global_105815, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_106070.f_10166.f_3853))
	{
		func_27(13, floor(Global_106070.f_10166.f_3853));
	}
	if (!unk_0xC253B4B0BD2DE4DD())
	{
		if (!Global_71205)
		{
			if (func_26() == 2 == 0 && !unk_0x4C9BACA8D249CB13())
			{
				if (unk_0x4F3E20635369D110())
				{
					Global_105804 = 0;
				}
				if (!Global_56181)
				{
					func_20();
				}
			}
		}
	}
}

int func_26()
{
	return Global_25459;
}

int func_27(int iParam0, int iParam1)
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

int func_28(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_29();
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

int func_29()
{
	return Global_1312736;
}

int func_30(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_32(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x2BCFB39E86340DAA(&(Global_106070.f_20382.f_150[iVar1]), iVar0);
	}
}

void func_33(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_34(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_34(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x3CAC2741CC1A631F(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_106070.f_20382.f_145)
	{
		if (unk_0x3CAC2741CC1A631F(&(Global_106070.f_20382[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_106070.f_20382.f_145 < 9)
	{
		StringCopy(&(Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_4), sParam1, 16);
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_8 = (unk_0xFD34717937104F1C() + iParam3);
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_9 = iParam5;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_11 = iParam6;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_12 = uParam2;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_13 = iParam7;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_14 = iParam8;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_10 = ((unk_0xFD34717937104F1C() + iParam3) + iParam4);
		}
		else
		{
			Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_10 = -1;
		}
		Global_106070.f_20382.f_145++;
		func_35();
	}
}

void func_35()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_106070.f_20382.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_106070.f_20382.f_145)
	{
		if (unk_0x05EFB6A616B6FADE(Global_106070.f_20382[iVar0 /*16*/].f_11, 0))
		{
			if (Global_106070.f_20382[iVar0 /*16*/].f_12 > Global_106070.f_20382.f_146[0])
			{
				Global_106070.f_20382.f_146[0] = Global_106070.f_20382[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x05EFB6A616B6FADE(Global_106070.f_20382[iVar0 /*16*/].f_11, 1))
		{
			if (Global_106070.f_20382[iVar0 /*16*/].f_12 > Global_106070.f_20382.f_146[1])
			{
				Global_106070.f_20382.f_146[1] = Global_106070.f_20382[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x05EFB6A616B6FADE(Global_106070.f_20382[iVar0 /*16*/].f_11, 2))
		{
			if (Global_106070.f_20382[iVar0 /*16*/].f_12 > Global_106070.f_20382.f_146[2])
			{
				Global_106070.f_20382.f_146[2] = Global_106070.f_20382[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_36()
{
	func_9();
	switch (Global_106070.f_2355.f_539.f_4301)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0x05EFB6A616B6FADE(Global_106070.f_20382.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_38(int iParam0, int iParam1)
{
	unk_0x2BCFB39E86340DAA(&(Global_106070.f_24967.f_8[iParam0]), iParam1);
}

int func_39(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_40()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x61D2332983ACC05C(), 64);
	uVar1 = func_41(Var0);
	return uVar1;
}

int func_41(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xFEB6EEC0545AF7AA(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_42(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_106070.f_2355.f_539.f_2227[iParam1 /*4*/][iParam0] = (Global_106070.f_2355.f_539.f_2227[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 9954;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 9954)
			{
				iVar0 = func_45(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_43(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_43(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_44(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
}

int func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_29();
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

int func_45(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_44(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_46()
{
	return 1;
}

int func_47()
{
	if (Global_25695)
	{
		func_23(4);
		return 1;
	}
	return 0;
}

void func_48()
{
	Global_14688 = 0;
	func_49();
}

void func_49()
{
	unk_0xB4E5B1A6FE923ECB();
	Global_16833 = 0;
	if (unk_0x904275961B875DEB())
	{
		unk_0xA8B97F91CBDE376C(false);
		Global_15822 = 6;
	}
}

void func_50(int iParam0)
{
	Global_16833 = iParam0;
}

int func_51()
{
	if (Global_106070.f_24967.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_52()
{
	return Global_25694;
}

void func_53()
{
	func_55();
	while (func_54())
	{
		wait(0);
	}
	func_245();
}

int func_54()
{
	if (Global_15822 != 0 || unk_0x904275961B875DEB())
	{
		return 1;
	}
	return 0;
}

void func_55()
{
	Global_14688 = 0;
	func_56();
}

void func_56()
{
	if (unk_0x904275961B875DEB())
	{
		unk_0xB4E5B1A6FE923ECB();
		Global_16833 = 0;
		unk_0xA8B97F91CBDE376C(true);
		Global_15822 = 6;
		return;
	}
}

void func_57()
{
	struct<6> Var0;
	
	if (!unk_0x4915F4759304D5CF(iLocal_72) && !unk_0x4915F4759304D5CF(iLocal_71))
	{
		if (!unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_72, 25f, 25f, 25f, 0, 1, 0) && !unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_71, 40f, 40f, 40f, 0, 1, 0))
		{
			unk_0x9568B1B58F78FF36(iLocal_72);
			unk_0x956B3CF461C0C1C9(iLocal_72, vLocal_77, 1f, -1, 1048576000, 0, 1193033728);
			func_18();
		}
	}
	if (!unk_0x4915F4759304D5CF(iLocal_72))
	{
		if (unk_0xDEAEC99031DCB92A(iLocal_72, unk_0xA19140A5C42D8715(), 1))
		{
			if (func_54())
			{
				Var0 = { func_60() };
				if ((unk_0x3CAC2741CC1A631F(&Var0, "REHH3_JB_2") || unk_0x3CAC2741CC1A631F(&Var0, "REHH3_JB_4")) || unk_0x3CAC2741CC1A631F(&Var0, "REHH3_JB_6"))
				{
					func_48();
				}
			}
		}
		if (timerb() > 5000)
		{
			if (unk_0x967743032563101F(iLocal_72, unk_0xA19140A5C42D8715()))
			{
				iLocal_127 = 4;
			}
		}
	}
	if (!iLocal_91)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_71))
		{
			if (unk_0xDEAEC99031DCB92A(iLocal_71, unk_0xA19140A5C42D8715(), 1))
			{
				if (!unk_0x4915F4759304D5CF(iLocal_72))
				{
					func_48();
					wait(0);
					func_1(&uLocal_161, cLocal_146, "REHH3_JB2", 4, 0, 0, 0);
					iLocal_91 = 1;
				}
			}
		}
	}
	if (!unk_0x4915F4759304D5CF(iLocal_71))
	{
		if (unk_0x685AE6AF34B35D3B(iLocal_71))
		{
			unk_0x3F29BBC16DCB8A23(iLocal_71);
		}
		if (unk_0x4915F4759304D5CF(iLocal_72) && unk_0xA60C975CBAB69F34(iLocal_71, unk_0xE2BBD32891C18569(iLocal_72, false), 1f, 1f, 5f, false, true, 0))
		{
			iLocal_127 = 5;
		}
	}
	else if (!unk_0x4915F4759304D5CF(iLocal_72))
	{
		unk_0xDA4D3941AFF8EF12(iLocal_72, unk_0xA19140A5C42D8715(), 0, 16);
		func_53();
	}
	else
	{
		func_53();
	}
	if (!iLocal_136)
	{
		if (unk_0x4915F4759304D5CF(iLocal_72))
		{
			if (unk_0xCE3CB618AFE55EFB(iLocal_100))
			{
				unk_0xE1623437A3194332(&iLocal_100);
			}
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				iLocal_127 = 3;
			}
		}
	}
	if (!iLocal_138)
	{
		if (!unk_0x4915F4759304D5CF(iLocal_71) && !unk_0x4915F4759304D5CF(iLocal_72))
		{
			if (unk_0x852B8F739A2072BE(unk_0xA19140A5C42D8715(), 6))
			{
				if (unk_0x45F41CA95744406F(unk_0xD4E735F4B6A956AC()))
				{
					iLocal_127 = 2;
				}
			}
		}
		if (unk_0x4915F4759304D5CF(iLocal_72))
		{
			if (unk_0xCE3CB618AFE55EFB(iLocal_100))
			{
				unk_0xE1623437A3194332(&iLocal_100);
			}
			func_59(&uLocal_161, 4);
			if (unk_0xDEAEC99031DCB92A(iLocal_72, unk_0xA19140A5C42D8715(), 1) && unk_0x852B8F739A2072BE(unk_0xA19140A5C42D8715(), 6))
			{
				iLocal_127 = 2;
			}
		}
		else if (!unk_0x7112137033807390(iLocal_71, 0))
		{
			if (unk_0xDEAEC99031DCB92A(iLocal_71, iLocal_72, 1))
			{
				iLocal_127 = 2;
			}
		}
	}
	switch (iLocal_127)
	{
		case 0:
			if (!iLocal_136)
			{
				if (!unk_0x4915F4759304D5CF(iLocal_71) && !unk_0x4915F4759304D5CF(iLocal_72))
				{
					if (!unk_0x5D7DFE2058701942(iLocal_71, 0) && unk_0x6625F609B391348E(iLocal_72))
					{
						if (!iLocal_137)
						{
							unk_0x2F89329397A277BC(&iLocal_75);
							unk_0x22DD1D053CFF9707(0, iLocal_72, -1, 2052, 2);
							unk_0x3F01127ECD227890(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
							unk_0x0177431263151C4E(0, iLocal_72, -1);
							unk_0x301F42EEE3C40328(iLocal_75);
							unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
							unk_0x3A95A0A3221D4208(&iLocal_75);
							iLocal_137 = 1;
						}
					}
				}
			}
			else
			{
				func_18();
			}
			break;
		
		case 1:
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				unk_0xCB482EF95FAE4D73(iLocal_71, 0, 0);
				settimerb(0);
				iLocal_127 = 0;
			}
			break;
		
		case 2:
			if (!iLocal_138)
			{
				if (!unk_0x4915F4759304D5CF(iLocal_71))
				{
					func_48();
					wait(0);
					if (unk_0x852B8F739A2072BE(unk_0xA19140A5C42D8715(), 4))
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_GUN", 4, 0, 0, 0);
					}
					else
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_AGG", 4, 0, 0, 0);
					}
					if (!unk_0x4915F4759304D5CF(iLocal_71))
					{
						unk_0x9568B1B58F78FF36(iLocal_71);
						unk_0x33B5487515BD13D5(iLocal_71, unk_0xA19140A5C42D8715(), 1000f, -1, 0, 0);
						if (!unk_0x4915F4759304D5CF(iLocal_72))
						{
							unk_0x5999C3F8663B8F28(iLocal_72, 6, 0f, 0);
							unk_0x33B5487515BD13D5(iLocal_72, unk_0xA19140A5C42D8715(), 1000f, -1, 0, 0);
						}
					}
					func_18();
					iLocal_138 = 1;
					iLocal_127 = 0;
				}
			}
			break;
		
		case 3:
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				func_48();
				wait(0);
				if (!unk_0x4915F4759304D5CF(iLocal_71))
				{
					unk_0x5999C3F8663B8F28(iLocal_71, 7, 0f, 0);
				}
				func_1(&uLocal_161, cLocal_146, "REHH3_BAS", 4, 0, 0, 0);
				if (!unk_0x4915F4759304D5CF(iLocal_71) && unk_0xDC5D81351D6A4DDB(iLocal_72))
				{
					unk_0x9568B1B58F78FF36(iLocal_71);
					unk_0x2F89329397A277BC(&iLocal_75);
					unk_0x53FF9BDD8529ACD2(0);
					unk_0x3F01127ECD227890(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
					unk_0x22DD1D053CFF9707(0, iLocal_72, -1, 2052, 4);
					unk_0x956B3CF461C0C1C9(0, unk_0xE2BBD32891C18569(iLocal_72, false), 1f, -1, 3f, 0, 1193033728);
					unk_0x0177431263151C4E(0, iLocal_72, -1);
					unk_0x3F01127ECD227890(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0x3F01127ECD227890(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
					unk_0x1CBE3F8ED90509B2(0, 1193033728, 0);
					unk_0x301F42EEE3C40328(iLocal_75);
					unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
					unk_0x3A95A0A3221D4208(&iLocal_75);
					unk_0xD738221C247C8B71(iLocal_71, true);
					unk_0x1F4E5EFBFE503FB3(iLocal_71, false);
					wait(10000);
					iLocal_136 = 1;
					iLocal_127 = 0;
				}
			}
			break;
		
		case 4:
			if (func_58())
			{
				if (!unk_0x4915F4759304D5CF(iLocal_71))
				{
					if (unk_0x10E54C268D1B3FED(iLocal_71, unk_0xA19140A5C42D8715(), 15f, 15f, 15f, 0, 1, 0))
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH3_NOO", 4, 0, 0, 0))
						{
							settimerb(0);
							iLocal_127 = 0;
						}
					}
				}
			}
			else if (!unk_0x4915F4759304D5CF(iLocal_72))
			{
				if (func_1(&uLocal_161, cLocal_146, "REHH3_FHT", 4, 0, 0, 0))
				{
					settimerb(0);
					iLocal_127 = 0;
				}
			}
			break;
		
		case 5:
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				func_55();
				wait(0);
				if (func_1(&uLocal_161, cLocal_146, "REHH3_ATT", 4, 0, 0, 0))
				{
					iLocal_127 = 0;
				}
			}
			break;
	}
}

int func_58()
{
	if (unk_0x05EFB6A616B6FADE(unk_0x22C775856F4633CA(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_59(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

struct<6> func_60()
{
	struct<6> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15822 == 4)
	{
		iVar1 = unk_0x55CF08D5383E90A2();
		iVar1 = (iVar1 + Global_16832);
		if (iVar1 > -1)
		{
			return Global_14690[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_61()
{
	if (iLocal_58 == 3)
	{
		if (!unk_0x4915F4759304D5CF(iLocal_71))
		{
			if (unk_0x749F5228DEB730FF(iLocal_71))
			{
				unk_0xF8136E11BE4BEAC3(iLocal_71);
			}
			iLocal_57 = 8;
		}
	}
}

void func_62()
{
	if (unk_0xCE3CB618AFE55EFB(iLocal_69))
	{
		unk_0xE1623437A3194332(&iLocal_69);
	}
	if (unk_0xCE3CB618AFE55EFB(iLocal_70))
	{
		unk_0xE1623437A3194332(&iLocal_70);
	}
	if (iLocal_58 == 1)
	{
		unk_0x5DE59A67B5F326CF(iLocal_145);
		unk_0x5AD7D03C214BDA88("TIMER_SCENE");
		if (!iLocal_102)
		{
			func_48();
			wait(0);
			func_1(&uLocal_161, cLocal_146, "REHH1_TKA", 4, 0, 0, 0);
			unk_0x8FC4ABE2F219CFC2(-1055.515f, -2533.221f, 19.3049f, -1, 3000, 2000, 0);
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				func_82(func_8(), 1, 100, 0, 1);
				func_81(198, 0);
				unk_0x22DD1D053CFF9707(unk_0xA19140A5C42D8715(), iLocal_71, 8000, 2052, 4);
				unk_0x2F89329397A277BC(&iLocal_75);
				unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), 10000, 2052, 2);
				unk_0xCB482EF95FAE4D73(0, 3000, 4194369);
				unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 1000);
				unk_0x956B3CF461C0C1C9(0, -1055.515f, -2533.221f, 19.3049f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x71CBFF70987FE89A(0, -1046.832f, -2518.146f, 12.9447f, 2f, -1, 1193033728, 1056964608);
				unk_0x0EEB301CAA50A123(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				unk_0x301F42EEE3C40328(iLocal_75);
				unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
				unk_0x3A95A0A3221D4208(&iLocal_75);
				unk_0xD738221C247C8B71(iLocal_71, true);
				settimerb(0);
				iLocal_102 = 1;
			}
		}
		if (timerb() < 7000)
		{
			unk_0xD481A812073CCF02(0, 75, 1);
			unk_0xD481A812073CCF02(0, 80, 1);
			unk_0xD481A812073CCF02(0, 79, 1);
			unk_0xD481A812073CCF02(0, 286, 1);
			unk_0xD481A812073CCF02(0, 287, 1);
			unk_0xD481A812073CCF02(0, 26, 1);
			unk_0xD481A812073CCF02(0, 273, 1);
			unk_0xD481A812073CCF02(0, 4, 1);
			unk_0xD481A812073CCF02(0, 270, 1);
			unk_0xD481A812073CCF02(0, 5, 1);
			unk_0xD481A812073CCF02(0, 1, 1);
			unk_0xD481A812073CCF02(0, 271, 1);
			unk_0xD481A812073CCF02(0, 6, 1);
			unk_0xD481A812073CCF02(0, 2, 1);
			unk_0xD481A812073CCF02(0, 272, 1);
			unk_0xD481A812073CCF02(0, 3, 1);
		}
		if (timerb() > 3000 && timerb() < 7000)
		{
			unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 0);
		}
		else if (timerb() > 7000)
		{
			unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
			unk_0xEB60EF2E9051E817(0);
			if (timerb() > 8500 && !iLocal_104)
			{
				if ((unk_0x2206F47E5C82D52C(unk_0xA19140A5C42D8715()) && unk_0x06EBD57CD6085DD1() == 4) || (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && unk_0xF58C434FFA1FB5F6() == 4))
				{
					unk_0xE60B9F9B48D4783F("CamPushInNeutral", 0, 0);
					unk_0xE11F00B4AC919F45(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					iLocal_104 = 1;
				}
			}
		}
		if (unk_0xDC5D81351D6A4DDB(iLocal_71) || timerb() > 15000)
		{
			if (unk_0xA60C975CBAB69F34(iLocal_71, -1046.832f, -2518.146f, 12.9447f, 20f, 20f, 5f, false, true, 0) || timerb() > 15000)
			{
				unk_0x680F17660351F21B(&iLocal_71);
				func_18();
			}
		}
	}
	else if (iLocal_58 == 2)
	{
		if (!iLocal_102)
		{
			func_48();
			wait(0);
			func_1(&uLocal_161, cLocal_146, "REHH2_TKB", 4, 0, 0, 0);
			iLocal_102 = 1;
		}
		if (!unk_0x4915F4759304D5CF(iLocal_71))
		{
			if (!unk_0x685AE6AF34B35D3B(iLocal_71))
			{
				unk_0x2F89329397A277BC(&iLocal_75);
				unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), 10000, 2052, 2);
				unk_0x4AABC2A9FCCE3C8F(0, 4500);
				unk_0xCB482EF95FAE4D73(0, 0, 4194369);
				unk_0x956B3CF461C0C1C9(0, 3323.43f, 5166.832f, 17.406f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0x956B3CF461C0C1C9(0, 3320.684f, 5186.017f, 17.4016f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0x956B3CF461C0C1C9(0, 3303.612f, 5185.269f, 18.7155f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0x0EEB301CAA50A123(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				unk_0x301F42EEE3C40328(iLocal_75);
				unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
				unk_0x3A95A0A3221D4208(&iLocal_75);
				unk_0xD738221C247C8B71(iLocal_71, true);
				unk_0x22DD1D053CFF9707(unk_0xA19140A5C42D8715(), iLocal_71, 5000, 2052, 2);
				unk_0xF8136E11BE4BEAC3(iLocal_71);
				wait(1000);
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
				if (func_8() == 0)
				{
					func_66(9, 1, 0);
				}
				else if (func_8() == 1)
				{
					func_66(9, 1, 1);
				}
				else if (func_8() == 2)
				{
					func_66(9, 1, 2);
				}
				wait(8000);
				func_18();
			}
		}
	}
	else if (iLocal_58 == 3)
	{
		if (timera() > 1000)
		{
			if (func_1(&uLocal_161, cLocal_146, "REHH3_JB", 4, 0, 0, 0))
			{
				if (!unk_0x4915F4759304D5CF(iLocal_72))
				{
					unk_0x605FF8F1D0D5E4DE(iLocal_72, true);
					if (!unk_0xCE3CB618AFE55EFB(iLocal_99))
					{
						unk_0xE1623437A3194332(&iLocal_99);
					}
					if (!unk_0xCE3CB618AFE55EFB(iLocal_100))
					{
						iLocal_100 = func_63(iLocal_72, 1, 145);
					}
					unk_0x2F89329397A277BC(&iLocal_75);
					unk_0x8F65948C5AFB744E(0, unk_0xA19140A5C42D8715(), -1, 17f, 1f, 1073741824, 0);
					unk_0xDA4D3941AFF8EF12(0, unk_0xA19140A5C42D8715(), 0, 16);
					unk_0x301F42EEE3C40328(iLocal_75);
					unk_0xE1072FA2FECBAD96(iLocal_72, iLocal_75);
					unk_0x3A95A0A3221D4208(&iLocal_75);
					unk_0xD738221C247C8B71(iLocal_72, true);
					unk_0x1F4E5EFBFE503FB3(iLocal_72, false);
					unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
					unk_0x94E87D83163B4BEB("rghBoyfriend", &iLocal_160);
					unk_0xDFA901280292A2FB(iLocal_72, iLocal_160);
					unk_0x80E7C4A78224C8F9(4, -1533126372, iLocal_160);
					unk_0x80E7C4A78224C8F9(1, -183807561, iLocal_160);
					unk_0x80E7C4A78224C8F9(1, iLocal_160, -183807561);
					settimera(0);
					iLocal_57 = 7;
				}
			}
		}
	}
	else if (iLocal_58 == 5)
	{
		if (!iLocal_102)
		{
			func_48();
			wait(0);
			func_1(&uLocal_161, cLocal_146, "REHH5_THX", 4, 0, 0, 0);
			iLocal_102 = 1;
		}
		if (!unk_0x4915F4759304D5CF(iLocal_71))
		{
			unk_0x2F89329397A277BC(&iLocal_75);
			unk_0xCB482EF95FAE4D73(0, 0, 4194369);
			unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), 3000, 2052, 2);
			unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 3000);
			unk_0x956B3CF461C0C1C9(0, -346.029f, 632.2272f, 171.2525f, 1f, -1, 1048576000, 0, 1193033728);
			unk_0x956B3CF461C0C1C9(0, -346.6342f, 627.3992f, 170.3573f, 1f, -1, 1048576000, 0, 1193033728);
			unk_0x956B3CF461C0C1C9(0, -355.2473f, 622.1964f, 170.3572f, 1f, -1, 1048576000, 0, 1193033728);
			unk_0x956B3CF461C0C1C9(0, -355.6499f, 615.3431f, 170.3572f, 1f, -1, 1048576000, 0, 1193033728);
			unk_0x956B3CF461C0C1C9(0, -350.163f, 605.0463f, 170.7292f, 1f, -1, 1048576000, 0, 1193033728);
			unk_0x956B3CF461C0C1C9(0, -333.177f, 594.991f, 170.7553f, 1f, -1, 1048576000, 0, 1193033728);
			unk_0x0EEB301CAA50A123(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
			unk_0x4AABC2A9FCCE3C8F(0, -1);
			unk_0x301F42EEE3C40328(iLocal_75);
			unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
			unk_0x3A95A0A3221D4208(&iLocal_75);
			unk_0xD738221C247C8B71(iLocal_71, true);
			unk_0x22DD1D053CFF9707(unk_0xA19140A5C42D8715(), iLocal_71, 5000, 2052, 2);
			unk_0xF8136E11BE4BEAC3(iLocal_71);
		}
		wait(2000);
		unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
		wait(3000);
		func_18();
	}
}

int func_63(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_64(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xCE3CB618AFE55EFB(iVar0)) && unk_0x445EC9E7EACB710E(&(Global_106070.f_28022[iParam2 /*29*/].f_3)))
	{
		unk_0xC4F12E446CCE89F5(iVar0, &(Global_106070.f_28022[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_64(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x6A15DD6A863D5E27(iParam0);
	if (unk_0xFAC06EE780B57279(iParam0))
	{
		unk_0x575CF00E129E0CE1(iVar0, func_65(unk_0x4C9BACA8D249CB13(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xF46EDCACB3804F87(iVar0, bParam1);
		}
		else
		{
			unk_0x570128B7829A8EAA(iVar0, 2);
		}
	}
	else if (unk_0x281590680327CDEA(iParam0))
	{
		unk_0x575CF00E129E0CE1(iVar0, func_65(unk_0x4C9BACA8D249CB13(), 0.7f, 0.7f));
		unk_0xF46EDCACB3804F87(iVar0, bParam1);
	}
	else if (unk_0x92D42293DA8F9805(iParam0))
	{
		unk_0x575CF00E129E0CE1(iVar0, func_65(unk_0x4C9BACA8D249CB13(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_65(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_66(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_80();
	}
	if (func_79(iParam2) == 4)
	{
	}
	bVar0 = Global_106070.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (unk_0x4C9BACA8D249CB13())
		{
			if (!func_77(func_78(iParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_77(func_78(iParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_106070.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_76(iParam0, 0);
			func_74(func_78(iParam0), func_79(iParam2), 1);
			iVar1 = unk_0x22C775856F4633CA(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					unk_0x2BCFB39E86340DAA(&(Global_2097152[func_73() /*12745*/].f_8178.f_1272), iParam0);
					func_70(15, 0);
					break;
			}
			func_69(iVar1);
			func_68(iParam0, iVar1);
			Global_105064.f_15[iParam0] = unk_0xFD34717937104F1C();
		}
	}
	else if (bVar0)
	{
		func_67(func_78(iParam0), func_79(iParam2));
	}
}

void func_67(int iParam0, int iParam1)
{
	if (Global_117[iParam0 /*10*/].f_8 != 145)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_106070.f_28022[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_106070.f_28022[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

void func_68(int iParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		Global_105064.f_4[iParam0] = (unk_0xFD34717937104F1C() + iParam1);
	}
	else
	{
		Global_105064.f_4[iParam0] = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(1200000, 2100000));
	}
}

void func_69(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_105064.f_3 = (unk_0xFD34717937104F1C() + iParam0);
	}
	else
	{
		Global_105064.f_3 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(21600000, 25200000));
	}
}

void func_70(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_72(iParam0, iParam1))
	{
		iVar0 = func_71();
		Global_2458086[iVar0] = iParam0;
	}
}

int func_71()
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

int func_72(int iParam0, var uParam1)
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

int func_73()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_74(int iParam0, int iParam1, bool bParam2)
{
	Global_3069 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 145)
	{
		func_7();
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
						func_75();
					}
				}
				else
				{
					Global_2993[1 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
					Global_2993[1 /*6*/].f_5 = iParam1;
					func_75();
				}
			}
			else
			{
				Global_2993[1 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
				Global_2993[1 /*6*/].f_5 = iParam1;
				func_75();
			}
		}
	}
}

void func_75()
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

void func_76(int iParam0, int iParam1)
{
	Global_106070.f_243[func_80() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_77(int iParam0, int iParam1)
{
	if (Global_106070.f_28022[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_78(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 104;
			break;
		
		case 1:
			return 105;
			break;
		
		case 2:
			return 106;
			break;
		
		case 3:
			return 107;
			break;
		
		case 4:
			return 108;
			break;
		
		case 5:
			return 109;
			break;
		
		case 6:
			return 110;
			break;
		
		case 7:
			return 111;
			break;
		
		case 8:
			return 112;
			break;
		
		case 9:
			return 93;
			break;
	}
	return 145;
}

int func_79(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 1:
			return 1;
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
			break;
	}
	return 4;
}

int func_80()
{
	int iVar0;
	
	iVar0 = func_8();
	switch (iVar0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		default:
			switch (func_44(-1))
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 7;
					break;
				
				default:
					break;
			}
			break;
	}
	return 3;
}

void func_81(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_106070.f_8585[iParam0] = 1;
	Global_106070.f_8585.f_236[iParam0] = (unk_0xFD34717937104F1C() + iParam1);
}

void func_82(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_106070.f_28022[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_106070.f_28022[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_83(Global_106070.f_28022[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x2AD48F3CEBA882E9(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x93180BE33E7149EF(iVar1, iVar0, 1);
	}
}

int func_83(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_109();
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
					func_108(99, 1);
					func_107(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_107(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_107(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_93(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_89(5))
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
							func_107(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_107(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_107(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_89(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_107(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_107(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_107(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_107(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_107(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_107(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_107(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_107(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_107(joaat("sp2_money_spent_property"), iParam3);
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
									func_107(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_107(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_107(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_107(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_107(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_107(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_89(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_107(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_107(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_107(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_107(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_107(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_107(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_88(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_108(95, iParam3);
					break;
				
				case 1:
					func_108(97, iParam3);
					break;
				
				case 2:
					func_108(96, iParam3);
					break;
			}
			func_108(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_86(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_86(iVar1);
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
					func_107(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_107(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_107(joaat("sp2_total_cash_earned"), iParam3);
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
	func_85(iParam0);
	if (Global_36117 == 15)
	{
		func_84(0);
	}
	return 1;
}

void func_84(bool bParam0)
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

void func_85(int iParam0)
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

void func_86(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_28(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_28(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_28(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_28(137, 0, -1, 1);
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
	else if (unk_0x05EFB6A616B6FADE(Global_106070.f_20536.f_471, iParam0) || unk_0x05EFB6A616B6FADE(Global_2097152[func_73() /*12745*/].f_8178.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xFA57C719261AA55D(&(Global_106070.f_20536.f_471), iParam0);
		unk_0xFA57C719261AA55D(&(Global_2097152[func_73() /*12745*/].f_8178.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x59FF6261546DDD52("COUP_RED");
		unk_0x4FDA9E6EF359F8A9(func_87(iParam0));
		unk_0x595B8132C1F20265(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_87(int iParam0)
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

void func_88(int iParam0)
{
	func_108(93, iParam0);
	func_108(29, iParam0);
	func_108(30, iParam0);
}

bool func_89(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_90(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_90(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_90(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_90(137, -1, -1);
	}
	if (!unk_0x4C9BACA8D249CB13())
	{
		return unk_0x05EFB6A616B6FADE(Global_106070.f_20536.f_471, iParam0);
	}
	return unk_0x05EFB6A616B6FADE(Global_2097152[func_73() /*12745*/].f_8178.f_10, iParam0);
}

int func_90(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_29();
	}
	iVar1 = func_92(iParam0, iParam1);
	uVar2 = func_91(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x07EEB31CF063DAB7(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_91(int iParam0)
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

int func_92(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_29();
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

int func_93(bool bParam0)
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
		func_27(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_94(27, 1);
	return 1;
}

int func_94(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_95(iParam0, iParam1);
}

int func_95(int iParam0, int iParam1)
{
	if (func_13(14) && !func_106(iParam0))
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
	if (func_105(&Global_4268566))
	{
		if (func_103(&Global_4268566, iParam0))
		{
			return 0;
		}
		if (func_96(&Global_4268566, iParam0))
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

int func_96(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x16E6CF5D5B848918(iParam1))
	{
		return 0;
	}
	if (func_13(14) && !func_106(iParam1))
	{
		return 0;
	}
	if (func_103(uParam0, iParam1))
	{
		return 0;
	}
	if (func_102(uParam0) < 0f)
	{
		func_101(uParam0, 0);
	}
	func_99(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_97(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_97(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x16E6CF5D5B848918(iParam1))
	{
		return 0;
	}
	if (func_13(14) && !func_106(iParam1))
	{
		return 0;
	}
	if (func_103(uParam0, iParam1))
	{
		return 0;
	}
	if (func_102(uParam0) < 0f)
	{
		func_101(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_98(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_98(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_99(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_100(uParam0, iVar0);
		iVar0++;
	}
	func_101(uParam0, (Global_4268565 - 0.5f));
}

void func_100(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_101(var uParam0, float fParam1)
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

float func_102(var uParam0)
{
	return uParam0->f_80;
}

bool func_103(var uParam0, int iParam1)
{
	return func_104(uParam0, iParam1) != -1;
}

int func_104(var uParam0, int iParam1)
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

bool func_105(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_106(int iParam0)
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

void func_107(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x2AD48F3CEBA882E9(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x93180BE33E7149EF(iParam0, iVar0, 1);
}

void func_108(int iParam0, int iParam1)
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

void func_109()
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

void func_110()
{
	if (!unk_0x4915F4759304D5CF(iLocal_71))
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
		{
			if (!func_117())
			{
				if (unk_0x749F5228DEB730FF(iLocal_71))
				{
					unk_0xF8136E11BE4BEAC3(iLocal_71);
				}
				if (unk_0xF9D4EF1338E38AFB(iLocal_71, 1227113341) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_71, 1227113341) != 0)
				{
					unk_0x8F65948C5AFB744E(iLocal_71, unk_0xA19140A5C42D8715(), -1, 6f, 2f, 1073741824, 0);
				}
				if (unk_0x5D7DFE2058701942(iLocal_71, 0))
				{
					unk_0xCB482EF95FAE4D73(iLocal_71, 0, 0);
				}
				if (!iLocal_110)
				{
					func_112(0);
					func_48();
					wait(0);
					if (!func_54())
					{
						if (iLocal_58 == 1)
						{
							if (!func_177())
							{
								func_1(&uLocal_161, cLocal_146, "REHH1_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_161, cLocal_146, "REHH1_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_58 == 2)
						{
							if (!func_177())
							{
								func_1(&uLocal_161, cLocal_146, "REHH2_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_161, cLocal_146, "REHH2_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_58 == 3)
						{
							if (!func_177())
							{
								func_1(&uLocal_161, cLocal_146, "REHH3_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_161, cLocal_146, "REHH3_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_58 == 5)
						{
							if (!func_177())
							{
								func_1(&uLocal_161, cLocal_146, "REHH5_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_161, cLocal_146, "REHH5_VEH2", 4, 0, 0, 0);
							}
						}
						iLocal_110 = 1;
					}
				}
			}
			else
			{
				iLocal_110 = 0;
				if (unk_0xF9D4EF1338E38AFB(iLocal_71, 1227113341) == 1 && unk_0xF9D4EF1338E38AFB(iLocal_71, 1227113341) == 0)
				{
					unk_0x9568B1B58F78FF36(iLocal_71);
				}
			}
		}
		else if (!unk_0x749F5228DEB730FF(iLocal_71))
		{
			unk_0x9854E4DB9C72017F(iLocal_71, func_111());
			unk_0xC860991D1C5AD4F0(iLocal_71, 1);
			unk_0x9EA5DDDDB1899B3B(iLocal_71, 0);
		}
	}
}

int func_111()
{
	return unk_0x64C831B843E08AC9(unk_0xA6580F898F4E801C());
}

void func_112(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_105)
		{
			if (func_116(&uLocal_161, cLocal_146, &Local_107, &Local_106, 8, 0, 0))
			{
				iLocal_105 = 0;
			}
		}
	}
	else if ((!iLocal_105 && unk_0x904275961B875DEB()) && !func_114())
	{
		Local_107 = { func_113() };
		Local_106 = { func_60() };
		func_55();
		iLocal_105 = 1;
	}
}

struct<6> func_113()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15822 == 4)
	{
		return Global_15441;
	}
	return Var0;
}

int func_114()
{
	if (((((((((((((((((((((((((((((((((((((((((((((func_115("REHH1_VEH") || func_115("REHH2_VEH")) || func_115("REHH3_VEH")) || func_115("REHH4_VEH")) || func_115("REHH5_VEH")) || func_115("REHH1_VEH2")) || func_115("REHH2_VEH2")) || func_115("REHH3_VEH2")) || func_115("REHH4_VEH2")) || func_115("REHH5_VEH2")) || func_115("REHH1_WLK")) || func_115("REHH2_WLK")) || func_115("REHH3_WLK")) || func_115("REHH4_WLK")) || func_115("REHH5_WLK")) || func_115("REHH1_SLR")) || func_115("REHH4_SLR")) || func_115("REHH1_SLW")) || func_115("REHH2_SLW")) || func_115("REHH3_SLW")) || func_115("REHH4_SLW")) || func_115("REHH5_SLW")) || func_115("REHH1_OUT")) || func_115("REHH2_GETOUT")) || func_115("REHH3_GETOUT")) || func_115("REHH5_GETOUT")) || func_115("REHH1_JACK")) || func_115("REHH2_JACK")) || func_115("REHH3_JACK")) || func_115("REHH5_JACK")) || func_115("REHH1_GUN")) || func_115("REHH2_SHOOT")) || func_115("REHH3_SHOOT")) || func_115("REHH5_SHOO")) || func_115("REHH1_1HOUR")) || func_115("REHH2_1HOUR")) || func_115("REHH1_HHOUR")) || func_115("REHH2_HHOUR")) || func_115("REHH1_CRASH")) || func_115("REHH1_WAY")) || func_115("REHH2_NEAR")) || func_115("REHH3_NEAR")) || func_115("REHH5_NEAR")) || func_115("REHH2_CULT")) || func_115("REHH3_CULT")) || func_115("REHH5_CULT"))
	{
		return 1;
	}
	return 0;
}

int func_115(char* sParam0)
{
	var uVar0;
	
	if (func_54())
	{
		MemCopy(&uVar0, {func_113()}, 4);
		if (unk_0x3CAC2741CC1A631F(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_116(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_17(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15829 = 0;
	Global_15836 = 0;
	Global_15831 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 1;
	StringCopy(&Global_16826, sParam3, 24);
	Global_2621441 = 0;
	return func_2(sParam2, iParam4, 0);
}

int func_117()
{
	if (iLocal_58 == 5)
	{
		if (unk_0xE3DA5E98850626D0(unk_0xA19140A5C42D8715()))
		{
			return 0;
		}
	}
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		if (unk_0x1095F403F52B42E1(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 0))
		{
			if ((((!unk_0x5BFF0F72CC04E4DA(unk_0xA19140A5C42D8715()) && !unk_0xA22CC9D85ECBCC81(unk_0xA19140A5C42D8715())) && !unk_0xE13F2DC045CFCEA3(unk_0xA19140A5C42D8715())) && !unk_0xC64BD920A5A82BC0(unk_0xA19140A5C42D8715())) && !unk_0x52BDE3D9BF787D4C(unk_0xA19140A5C42D8715(), joaat("rhino")))
			{
				if (unk_0xD63FAD81FAF5E0CB(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
	{
		if (unk_0x1095F403F52B42E1(unk_0xDF069A8A4CCE674E(unk_0xA19140A5C42D8715()), 0))
		{
			if (((!unk_0x7C197233F79C2CB8(unk_0x8F474E419F56E48D(unk_0xDF069A8A4CCE674E(unk_0xA19140A5C42D8715()))) && !unk_0xCA8C103FCD316F89(unk_0x8F474E419F56E48D(unk_0xDF069A8A4CCE674E(unk_0xA19140A5C42D8715())))) && !unk_0x289FBFAD3E416C48(unk_0x8F474E419F56E48D(unk_0xDF069A8A4CCE674E(unk_0xA19140A5C42D8715())))) && unk_0x8F474E419F56E48D(unk_0xDF069A8A4CCE674E(unk_0xA19140A5C42D8715())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_118()
{
	if (unk_0x9661F58DC617631D(unk_0xA19140A5C42D8715()))
	{
		if (!iLocal_118)
		{
			iLocal_120 = unk_0xFD34717937104F1C();
			iLocal_118 = 1;
		}
		else
		{
			iLocal_122 = unk_0xFD34717937104F1C();
		}
	}
	else
	{
		iLocal_122 = 0;
		iLocal_121 = 0;
		iLocal_118 = 0;
		iLocal_119 = 0;
	}
	if ((iLocal_122 - iLocal_120) > 3000 && (iLocal_122 - iLocal_121) > 6000)
	{
		if (!func_54())
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_SLR", 4, 0, 0, 0);
			}
			iLocal_121 = iLocal_122;
		}
	}
	if ((iLocal_122 - iLocal_120) > 50000 && !iLocal_119)
	{
		func_112(0);
		func_48();
		wait(0);
		if (!func_54())
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_58 == 2)
			{
				func_1(&uLocal_161, cLocal_146, "REHH2_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_58 == 3)
			{
				if (!unk_0x4915F4759304D5CF(iLocal_71))
				{
					if (!unk_0x4908FF7A9E098AE9(iLocal_71))
					{
						unk_0x3F29BBC16DCB8A23(iLocal_71);
					}
				}
				func_1(&uLocal_161, cLocal_146, "REHH3_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_58 == 5)
			{
				func_1(&uLocal_161, cLocal_146, "REHH5_SLW", 4, 0, 0, 0);
			}
			iLocal_119 = 1;
		}
	}
	if ((iLocal_122 - iLocal_120) > 60000 && iLocal_119)
	{
		if (!unk_0x4915F4759304D5CF(iLocal_71))
		{
			unk_0x605FF8F1D0D5E4DE(iLocal_71, true);
			if (unk_0x749F5228DEB730FF(iLocal_71))
			{
				if (unk_0x5D7DFE2058701942(iLocal_71, 0))
				{
					if (unk_0xA60C975CBAB69F34(iLocal_71, vLocal_77, 200f, 200f, 200f, false, true, 0))
					{
						unk_0x956B3CF461C0C1C9(iLocal_71, vLocal_77, 1f, -1, 1048576000, 0, 1193033728);
					}
					else
					{
						unk_0x1CBE3F8ED90509B2(iLocal_71, 1193033728, 0);
					}
					if (iLocal_58 == 1)
					{
						unk_0x33B5487515BD13D5(iLocal_71, unk_0xA19140A5C42D8715(), 1000f, -1, 0, 0);
					}
					unk_0xD738221C247C8B71(iLocal_71, true);
					unk_0xF8136E11BE4BEAC3(iLocal_71);
					func_53();
				}
			}
		}
	}
}

void func_119()
{
	if (!unk_0x4915F4759304D5CF(iLocal_71))
	{
		if (unk_0x2206F47E5C82D52C(iLocal_71))
		{
			if (!iLocal_115)
			{
				iLocal_116 = unk_0xFD34717937104F1C();
				iLocal_115 = 1;
			}
			else
			{
				iLocal_117 = unk_0xFD34717937104F1C();
			}
		}
		else
		{
			iLocal_115 = 0;
		}
	}
	if ((iLocal_117 - iLocal_116) > 90000)
	{
		func_112(0);
		func_48();
		wait(0);
		if (iLocal_58 == 1)
		{
			func_1(&uLocal_161, cLocal_146, "REHH1_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 2)
		{
			func_1(&uLocal_161, cLocal_146, "REHH2_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 3)
		{
			func_1(&uLocal_161, cLocal_146, "REHH3_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 5)
		{
			func_1(&uLocal_161, cLocal_146, "REHH5_WLK", 4, 0, 0, 0);
		}
		if (!unk_0x4915F4759304D5CF(iLocal_71))
		{
			unk_0x605FF8F1D0D5E4DE(iLocal_71, true);
			if (unk_0xA60C975CBAB69F34(iLocal_71, vLocal_77, 200f, 200f, 200f, false, true, 0))
			{
				unk_0x956B3CF461C0C1C9(iLocal_71, vLocal_77, 1f, -1, 1048576000, 0, 1193033728);
			}
			else
			{
				unk_0x1CBE3F8ED90509B2(iLocal_71, 1193033728, 0);
			}
			if (iLocal_58 == 1)
			{
				unk_0x33B5487515BD13D5(iLocal_71, unk_0xA19140A5C42D8715(), 1000f, -1, 0, 0);
			}
			unk_0xD738221C247C8B71(iLocal_71, true);
			if (unk_0x749F5228DEB730FF(iLocal_71))
			{
				unk_0xF8136E11BE4BEAC3(iLocal_71);
			}
			func_53();
		}
	}
}

void func_120()
{
	if (!unk_0x4915F4759304D5CF(iLocal_71))
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && !unk_0xE0FD180CD24C0B67(iLocal_71, unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 0))
			{
				if (!unk_0xCE3CB618AFE55EFB(iLocal_99))
				{
					iLocal_99 = func_63(iLocal_71, 0, 145);
				}
				if (unk_0xCE3CB618AFE55EFB(iLocal_69))
				{
					unk_0xE1623437A3194332(&iLocal_69);
				}
			}
			else
			{
				if (!unk_0xCE3CB618AFE55EFB(iLocal_69))
				{
					iLocal_69 = func_121(vLocal_77, 1);
				}
				if (unk_0xCE3CB618AFE55EFB(iLocal_99))
				{
					unk_0xE1623437A3194332(&iLocal_99);
				}
			}
		}
		else if (!unk_0xCE3CB618AFE55EFB(iLocal_99))
		{
			iLocal_99 = func_63(iLocal_71, 0, 145);
		}
		if (((unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && unk_0x5D7DFE2058701942(iLocal_71, 0)) || unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_77, 50f, 50f, 50f, false, true, 0)) || unk_0xDB6C89A68AC7B303(unk_0xA19140A5C42D8715()))
		{
			if (!unk_0xCE3CB618AFE55EFB(iLocal_69))
			{
				iLocal_69 = func_121(vLocal_77, 1);
			}
		}
		else if (!unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_77, 50f, 50f, 50f, false, true, 0))
		{
			if (unk_0xCE3CB618AFE55EFB(iLocal_69))
			{
				unk_0xE1623437A3194332(&iLocal_69);
			}
		}
	}
}

int func_121(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xA70969818F182A36(vParam0);
	unk_0x575CF00E129E0CE1(iVar0, func_65(unk_0x4C9BACA8D249CB13(), 1f, 1f));
	unk_0x3E46F0AAE4B470FB(iVar0, bParam1);
	return iVar0;
}

void func_122()
{
	if (!unk_0x4915F4759304D5CF(iLocal_71))
	{
		if ((unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1) && unk_0x5D7DFE2058701942(iLocal_71, 1)) || unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_71, 5f, 5f, 5f, 0, 1, 0))
		{
			if (func_124())
			{
				func_50(0);
				iLocal_103 = 0;
			}
		}
		else if (!unk_0x4908FF7A9E098AE9(iLocal_71))
		{
			if (func_54() && !iLocal_103)
			{
				func_50(1);
				iLocal_103 = 1;
			}
		}
		if (unk_0x4908FF7A9E098AE9(iLocal_71))
		{
			unk_0x9EC6E89AA80F95CE(iLocal_71, 0);
		}
		if (func_123("REHH3_CHT3_7"))
		{
			unk_0x1701009E85B15DA4(iLocal_71, 1, 1);
		}
		if (func_123("REHH3_CHT6_5"))
		{
			unk_0x1701009E85B15DA4(iLocal_71, 0, 1);
		}
		if (func_123("REHH3_CHT8_3"))
		{
			unk_0x1701009E85B15DA4(iLocal_71, 1, 1);
		}
		if ((func_115("REHH3_CHT8M") || func_115("REHH3_CHT8F")) || func_115("REHH3_CHT8T"))
		{
			unk_0x1701009E85B15DA4(iLocal_71, 0, 1);
		}
	}
}

int func_123(char* sParam0)
{
	var uVar0;
	
	if (func_54())
	{
		MemCopy(&uVar0, {func_60()}, 4);
		if (unk_0x3CAC2741CC1A631F(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_124()
{
	if (Global_16833 == 1)
	{
		return 1;
	}
	return 0;
}

void func_125()
{
	if (!unk_0x4915F4759304D5CF(iLocal_71))
	{
		if (iLocal_58 == 1)
		{
			if (!unk_0x7112137033807390(unk_0xC409B91AC4749F88(), 0))
			{
				if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), unk_0xC409B91AC4749F88(), 0) && unk_0xE0FD180CD24C0B67(iLocal_71, unk_0xC409B91AC4749F88(), 0))
				{
					if (unk_0xFD2A0C4CDE18D862(unk_0xC409B91AC4749F88()))
					{
						if (!func_115("REHH1_CRASH"))
						{
							func_112(0);
							func_48();
							wait(0);
							func_1(&uLocal_161, cLocal_146, "REHH1_CRASH", 4, 0, 0, 0);
						}
					}
				}
			}
		}
		if (!iLocal_112)
		{
			if (!unk_0x7112137033807390(unk_0xC409B91AC4749F88(), 0))
			{
				if (!unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), unk_0xC409B91AC4749F88(), 1) && unk_0xE0FD180CD24C0B67(iLocal_71, unk_0xC409B91AC4749F88(), 0))
				{
					func_112(0);
					func_48();
					wait(0);
					if (!func_54())
					{
						if (iLocal_58 == 1)
						{
							func_1(&uLocal_161, cLocal_146, "REHH1_OUT", 4, 0, 0, 0);
						}
						else if (iLocal_58 == 2)
						{
							func_1(&uLocal_161, cLocal_146, "REHH2_GETOUT", 4, 0, 0, 0);
						}
						else if (iLocal_58 == 3)
						{
							if (!unk_0x4915F4759304D5CF(iLocal_71))
							{
								if (!unk_0x4908FF7A9E098AE9(iLocal_71))
								{
									unk_0x3F29BBC16DCB8A23(iLocal_71);
								}
							}
							func_1(&uLocal_161, cLocal_146, "REHH3_GETOUT", 4, 0, 0, 0);
						}
						else if (iLocal_58 == 5)
						{
							func_1(&uLocal_161, cLocal_146, "REHH5_GETOUT", 4, 0, 0, 0);
						}
						iLocal_112 = 1;
					}
				}
			}
		}
		else if (!unk_0x7112137033807390(unk_0xC409B91AC4749F88(), 0))
		{
			if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), unk_0xC409B91AC4749F88(), 0) && unk_0xE0FD180CD24C0B67(iLocal_71, unk_0xC409B91AC4749F88(), 0))
			{
				iLocal_112 = 0;
			}
		}
		if (!iLocal_113)
		{
			if (unk_0xBCF615B6673B73ED(unk_0xA19140A5C42D8715()))
			{
				func_112(0);
				func_48();
				wait(0);
				if (!func_54())
				{
					if (iLocal_58 == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 3)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 5)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_JACK", 4, 0, 0, 0);
					}
					iLocal_113 = 1;
				}
			}
		}
		else if (!unk_0xBCF615B6673B73ED(unk_0xA19140A5C42D8715()))
		{
			iLocal_113 = 0;
		}
		if (!iLocal_114)
		{
			if (unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715()))
			{
				func_112(0);
				func_48();
				wait(0);
				if (!func_54())
				{
					if (iLocal_58 == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_GUN", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_SHOOT", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 3)
					{
						if (!unk_0x4915F4759304D5CF(iLocal_71))
						{
							if (!unk_0x4908FF7A9E098AE9(iLocal_71))
							{
								unk_0x3F29BBC16DCB8A23(iLocal_71);
							}
						}
						func_1(&uLocal_161, cLocal_146, "REHH3_SHOOT", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 5)
					{
					}
					iLocal_114 = 1;
				}
			}
		}
		else if (unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715()))
		{
			iLocal_114 = 0;
		}
	}
}

void func_126()
{
	if (func_128(vLocal_77))
	{
		func_112(0);
		func_48();
		wait(0);
		if (iLocal_58 == 1)
		{
			func_1(&uLocal_161, cLocal_146, "REHH1_WAY", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 2)
		{
			func_1(&uLocal_161, cLocal_146, "REHH2_CULT", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 3)
		{
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				if (!unk_0x4908FF7A9E098AE9(iLocal_71))
				{
					unk_0x3F29BBC16DCB8A23(iLocal_71);
				}
			}
			func_1(&uLocal_161, cLocal_146, "REHH3_CULT", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 5)
		{
			func_1(&uLocal_161, cLocal_146, "REHH5_CULT", 4, 0, 0, 0);
		}
	}
	if (func_127())
	{
		func_112(0);
		func_48();
		wait(0);
		if (iLocal_58 == 1)
		{
		}
		else if (iLocal_58 == 2)
		{
			func_1(&uLocal_161, cLocal_146, "REHH2_NEAR", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 3)
		{
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				if (!unk_0x4908FF7A9E098AE9(iLocal_71))
				{
					unk_0x3F29BBC16DCB8A23(iLocal_71);
				}
			}
			func_1(&uLocal_161, cLocal_146, "REHH3_NEAR", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 5)
		{
			func_1(&uLocal_161, cLocal_146, "REHH5_NEAR", 4, 0, 0, 0);
		}
	}
}

int func_127()
{
	if (func_8() == 2)
	{
		if (func_52())
		{
			if (unk_0x499324B3EF19C288(-1014.154f, 4881.411f, 245.0001f, unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(unk_0xA6580F898F4E801C()), false), true) < 400f)
			{
				if (!Global_25699)
				{
					unk_0x9444470D6D9ADB88("AC_EN_ROUTE_CULT");
					Global_25699 = 1;
					if (!Global_25698)
					{
						Global_25698 = 1;
						return 1;
					}
				}
			}
			else if (Global_25699)
			{
				unk_0x9444470D6D9ADB88("AC_LEFT_AREA");
				Global_25699 = 0;
			}
		}
	}
	return 0;
}

int func_128(vector3 vParam0)
{
	if (func_8() == 2)
	{
		if (func_52() && !Global_25697)
		{
			if (fLocal_45 == -1f)
			{
				fLocal_45 = vdist(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vParam0);
			}
			if (vdist(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vParam0) > (fLocal_45 + 200f) || unk_0x499324B3EF19C288(-1014.154f, 4881.411f, 245.0001f, unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(unk_0xA6580F898F4E801C()), false), true) < 400f)
			{
				Global_25697 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_129()
{
	if (!func_114())
	{
		func_112(1);
	}
	if (!func_54())
	{
		switch (iLocal_86)
		{
			case 0:
				if (iLocal_58 == 1)
				{
					iLocal_88 = unk_0xFD34717937104F1C();
				}
				else if (iLocal_58 == 2)
				{
					iLocal_88 = unk_0xFD34717937104F1C();
				}
				else if (iLocal_58 == 3)
				{
					iLocal_88 = unk_0xFD34717937104F1C() + 2000;
				}
				else if (iLocal_58 == 5)
				{
					iLocal_88 = unk_0xFD34717937104F1C();
				}
				iLocal_86++;
				break;
			
			case 1:
				if (iLocal_88 < unk_0xFD34717937104F1C())
				{
					if (iLocal_58 == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 3)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 5)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHT", 4, 0, 0, 0);
					}
					iLocal_86++;
				}
				break;
			
			case 2:
				if (iLocal_88 < unk_0xFD34717937104F1C())
				{
					if (iLocal_58 == 1)
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_161, cLocal_146, "REHH1_ASKM", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_161, cLocal_146, "REHH1_ASKF", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							func_1(&uLocal_161, cLocal_146, "REHH1_ASKT", 4, 0, 0, 0);
						}
					}
					else if (iLocal_58 == 2)
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_161, cLocal_146, "REHH2_CHTm2", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_161, cLocal_146, "REHH2_CHTf2", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							func_1(&uLocal_161, cLocal_146, "REHH2_CHTt2", 4, 0, 0, 0);
						}
					}
					else if (iLocal_58 == 3)
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_161, cLocal_146, "REHH3_CHTM", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_161, cLocal_146, "REHH3_CHTF", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							func_1(&uLocal_161, cLocal_146, "REHH3_CHTT", 4, 0, 0, 0);
						}
					}
					else if (iLocal_58 == 5)
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_161, cLocal_146, "REHH5_RESPM", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_161, cLocal_146, "REHH5_RESPF", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							if (!bLocal_90)
							{
								func_1(&uLocal_161, cLocal_146, "REHH5_RESPT", 4, 0, 0, 0);
							}
						}
					}
					iLocal_86++;
				}
				break;
			
			case 3:
				if (iLocal_58 == 1)
				{
					iLocal_88 = unk_0xFD34717937104F1C();
				}
				else if (iLocal_58 == 2)
				{
					iLocal_88 = unk_0xFD34717937104F1C();
				}
				else if (iLocal_58 == 3)
				{
					iLocal_88 = unk_0xFD34717937104F1C() + 500;
				}
				else if (iLocal_58 == 5)
				{
					iLocal_88 = unk_0xFD34717937104F1C();
				}
				iLocal_86++;
				break;
			
			case 4:
				if (iLocal_88 < unk_0xFD34717937104F1C())
				{
					if (iLocal_58 == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_CHT2", 4, 0, 0, 0);
						iLocal_86++;
					}
					else if (iLocal_58 == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT2", 4, 0, 0, 0);
						iLocal_86++;
					}
					else if (iLocal_58 == 3)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT2", 4, 0, 0, 0);
						iLocal_86++;
					}
					else if (iLocal_58 == 5)
					{
						if (bLocal_90 && !bLocal_92)
						{
							if (func_8() == 0)
							{
								func_1(&uLocal_161, cLocal_146, "REHH5_OKM", 4, 0, 0, 0);
							}
							else if (func_8() == 1)
							{
								func_1(&uLocal_161, cLocal_146, "REHH5_OKF", 4, 0, 0, 0);
							}
							else if (func_8() == 2)
							{
								func_1(&uLocal_161, cLocal_146, "REHH5_OKT", 4, 0, 0, 0);
							}
							iLocal_86++;
						}
					}
				}
				break;
			
			case 5:
				if (iLocal_58 == 1)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_RESPM", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_RESPF", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_RESPT", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_pchatm", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_pchatf", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_pchatt", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT2M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT2F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT2T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 5)
				{
					func_1(&uLocal_161, cLocal_146, "REHH5_CHAT1", 4, 0, 0, 0);
				}
				iLocal_86++;
				break;
			
			case 6:
				if (iLocal_58 == 1)
				{
					func_1(&uLocal_161, cLocal_146, "REHH1_CHAT", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 2)
				{
					func_1(&uLocal_161, cLocal_146, "REHH2_CHT3", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_161, cLocal_146, "REHH3_CHT3", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 5)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT1b", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT1c", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT1d", 4, 0, 0, 0);
					}
				}
				iLocal_86++;
				break;
			
			case 7:
				if (iLocal_58 == 1)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_CHATb", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_CHATc", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_CHATd", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT3M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT3F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT3T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT3M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT3F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT3T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 5)
				{
					func_1(&uLocal_161, cLocal_146, "REHH5_CHAT2", 4, 0, 0, 0);
				}
				iLocal_86++;
				break;
			
			case 8:
				if (iLocal_58 == 1)
				{
					func_1(&uLocal_161, cLocal_146, "REHH1_CHATe", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 2)
				{
					func_1(&uLocal_161, cLocal_146, "REHH2_CHT4", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_161, cLocal_146, "REHH3_CHT4", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 5)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT2b", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT2c", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT2d", 4, 0, 0, 0);
					}
				}
				iLocal_86++;
				break;
			
			case 9:
				if (iLocal_58 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT4M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT4F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT4T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT4M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT4F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT4T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 5)
				{
					func_1(&uLocal_161, cLocal_146, "REHH5_CHAT2e", 4, 0, 0, 0);
				}
				iLocal_86++;
				break;
			
			case 10:
				if (iLocal_58 == 2)
				{
					func_1(&uLocal_161, cLocal_146, "REHH2_CHT5", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_161, cLocal_146, "REHH3_CHT5", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 5)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT2f", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT2g", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT2h", 4, 0, 0, 0);
					}
				}
				iLocal_86++;
				break;
			
			case 11:
				if (iLocal_58 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT5M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT5F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT5T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT5M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT5F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT5T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 5)
				{
					func_1(&uLocal_161, cLocal_146, "REHH5_CHAT3", 4, 0, 0, 0);
				}
				iLocal_86++;
				break;
			
			case 12:
				if (iLocal_58 == 2)
				{
					func_1(&uLocal_161, cLocal_146, "REHH2_CHT6", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_161, cLocal_146, "REHH3_CHT6", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 5)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT3b", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT3c", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT3d", 4, 0, 0, 0);
					}
				}
				iLocal_86++;
				break;
			
			case 13:
				if (iLocal_58 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT6M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT6F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT6T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT6M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT6F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT6T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 5)
				{
					func_1(&uLocal_161, cLocal_146, "REHH5_CHAT4", 4, 0, 0, 0);
				}
				iLocal_86++;
				break;
			
			case 14:
				if (iLocal_58 == 2)
				{
					func_1(&uLocal_161, cLocal_146, "REHH2_CHT7", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_161, cLocal_146, "REHH3_CHT7", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 5)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT4b", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT4c", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT4d", 4, 0, 0, 0);
					}
				}
				iLocal_86++;
				break;
			
			case 15:
				if (iLocal_58 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT7M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT7F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT7T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT7M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT7F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT7T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 5)
				{
					func_1(&uLocal_161, cLocal_146, "REHH5_RUNOUT", 4, 0, 0, 0);
				}
				iLocal_86++;
				break;
			
			case 16:
				if (iLocal_58 == 2)
				{
					func_1(&uLocal_161, cLocal_146, "REHH2_CHT8", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_161, cLocal_146, "REHH3_CHT8", 4, 0, 0, 0);
				}
				iLocal_86++;
				break;
			
			case 17:
				if (iLocal_58 == 3)
				{
					iLocal_88 = unk_0xFD34717937104F1C() + 700;
				}
				iLocal_86++;
				break;
			
			case 18:
				if (iLocal_58 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT8M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT8F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT8T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT8M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT8F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT8T", 4, 0, 0, 0);
					}
				}
				iLocal_86++;
				break;
			
			case 19:
				if (iLocal_58 == 2)
				{
					func_1(&uLocal_161, cLocal_146, "REHH2_CHT9", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_161, cLocal_146, "REHH3_CHT9", 4, 0, 0, 0);
				}
				iLocal_86++;
				break;
			
			case 20:
				if (iLocal_58 == 3)
				{
					iLocal_88 = unk_0xFD34717937104F1C() + 300;
				}
				iLocal_86++;
				break;
			
			case 21:
				if (iLocal_88 < unk_0xFD34717937104F1C())
				{
					if (iLocal_58 == 3)
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_161, cLocal_146, "REHH3_CHT9M", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_161, cLocal_146, "REHH3_CHT9F", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							func_1(&uLocal_161, cLocal_146, "REHH3_CHT9T", 4, 0, 0, 0);
						}
					}
					iLocal_86++;
				}
				break;
			
			case 22:
				if (!unk_0x4915F4759304D5CF(iLocal_71))
				{
					unk_0x3F01127ECD227890(iLocal_71, "facials@gen_female@base", "mood_sleeping_1", 2f, -2f, -1, 33, 0, 0, 0, 0);
				}
				iLocal_86++;
				break;
			}
	}
}

void func_130()
{
	if (iLocal_58 != 3)
	{
		if (func_133())
		{
			settimera(0);
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_77, 3f, 3f, 2f, true, true, 0) && unk_0xA60C975CBAB69F34(iLocal_71, vLocal_77, Global_19, false, true, 0))
				{
					if (func_132(1, 0, 1))
					{
						func_131();
						if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
						{
							unk_0x0185AEECD1FF63F3(unk_0xC409B91AC4749F88(), (10.5f + 2f), 3, 0);
						}
						unk_0x3F29BBC16DCB8A23(iLocal_71);
						iLocal_57 = 6;
					}
				}
			}
		}
	}
	else if (bLocal_90)
	{
		if (unk_0x4915F4759304D5CF(iLocal_72))
		{
			iLocal_57 = 7;
		}
		if (!unk_0x4915F4759304D5CF(iLocal_71))
		{
			if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), 805.501f, 1269.926f, 361.4025f, 25f, 30f, 2f, false, true, 0) || (unk_0xA60C975CBAB69F34(iLocal_71, 824.8886f, 1275.671f, 359.4312f, Global_19, true, true, 0) && unk_0x10E54C268D1B3FED(iLocal_71, unk_0xA19140A5C42D8715(), 8f, 8f, 8f, 0, 1, 0)))
			{
				func_48();
				wait(0);
				func_1(&uLocal_161, cLocal_146, "REHH3_CHT10", 4, 0, 0, 0);
				if (!unk_0x4915F4759304D5CF(iLocal_71) && !unk_0x4915F4759304D5CF(iLocal_72))
				{
					if (unk_0x5D7DFE2058701942(iLocal_71, 0))
					{
						unk_0x3F29BBC16DCB8A23(iLocal_71);
						unk_0x2F89329397A277BC(&iLocal_75);
						unk_0x53FF9BDD8529ACD2(0);
						unk_0x22DD1D053CFF9707(0, iLocal_72, -1, 2052, 4);
						unk_0xCB482EF95FAE4D73(0, 500, 0);
						unk_0x8F65948C5AFB744E(0, unk_0xA19140A5C42D8715(), -1, 5f, 1f, 1073741824, 0);
						unk_0x3F01127ECD227890(0, "random@hitch_lift", "come_here_idle_c", 2f, -2f, -1, 48, 0, 0, 0, 0);
						unk_0x0177431263151C4E(0, iLocal_72, -1);
						unk_0x301F42EEE3C40328(iLocal_75);
						unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
						unk_0x3A95A0A3221D4208(&iLocal_75);
					}
				}
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					if (!unk_0x7112137033807390(unk_0xC409B91AC4749F88(), 0))
					{
						unk_0x0185AEECD1FF63F3(unk_0xC409B91AC4749F88(), (10.5f + 2f), 2, 0);
					}
				}
				settimera(0);
				iLocal_57 = 6;
			}
		}
	}
}

void func_131()
{
	Global_14688 = 0;
	func_16();
}

int func_132(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x95129531A8C1F3B9())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		if (!unk_0x8A29BBDF4603E52B(unk_0xA19140A5C42D8715()))
		{
			return 0;
		}
		iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
		if (bParam0)
		{
			if (unk_0x7112137033807390(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x7112137033807390(iVar0, 0))
			{
				if (unk_0xB0D49A1F9F054602(iVar0, -1, 0) != unk_0xA19140A5C42D8715())
				{
					return 0;
				}
			}
		}
		if (!unk_0x7112137033807390(iVar0, 0))
		{
			if (unk_0xC5F2C603295DE6F0(iVar0) < 0.95f || unk_0xC5F2C603295DE6F0(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	if (!unk_0x783F4B81000DAFE2(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	return 1;
}

int func_133()
{
	if (unk_0x8A29BBDF4603E52B(unk_0xA19140A5C42D8715()))
	{
		if (unk_0x1095F403F52B42E1(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 0))
		{
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				if (unk_0xB10F7FE89663CB5B(iLocal_71, unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_77, 50f, 50f, 50f, false, true, 0) && !unk_0x4915F4759304D5CF(iLocal_71))
	{
		if (!unk_0x5D7DFE2058701942(iLocal_71, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_134()
{
	if (bLocal_92)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_72))
		{
			if ((((unk_0x4915F4759304D5CF(iLocal_72) || !unk_0x10E54C268D1B3FED(iLocal_72, unk_0xA19140A5C42D8715(), 150f, 150f, 150f, 0, 1, 0)) || vdist(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vLocal_77) < 250f) || vdist(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vLocal_79) < 250f) || iLocal_94)
			{
				if (unk_0xCE3CB618AFE55EFB(iLocal_100))
				{
					unk_0xE1623437A3194332(&iLocal_100);
				}
				if (unk_0xCE3CB618AFE55EFB(iLocal_101))
				{
					unk_0xE1623437A3194332(&iLocal_101);
				}
				if (!unk_0x4915F4759304D5CF(iLocal_72))
				{
					unk_0x5999C3F8663B8F28(iLocal_72, 6, 0f, 0);
					unk_0x33B5487515BD13D5(iLocal_72, unk_0xA19140A5C42D8715(), 1000f, -1, 0, 0);
					unk_0x7E4E83D33161D01A(&iLocal_72);
				}
				func_48();
				wait(0);
				func_1(&uLocal_161, cLocal_146, "REHH5_CHT2", 4, 0, 0, 0);
				unk_0x7E4E83D33161D01A(&iLocal_72);
				if (unk_0xDC5D81351D6A4DDB(iLocal_139))
				{
					unk_0x792676988A48387F(&iLocal_139);
				}
				bLocal_92 = false;
			}
			else
			{
				if (!iLocal_95)
				{
					if (!func_54())
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_161, cLocal_146, "REHH5_COMM", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_161, cLocal_146, "REHH5_COMF", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							func_1(&uLocal_161, cLocal_146, "REHH5_COMT", 4, 0, 0, 0);
						}
						iLocal_95 = 1;
					}
				}
				if (!unk_0x4915F4759304D5CF(iLocal_72))
				{
					func_142(&iLocal_72, &iLocal_100, &iLocal_139, &iLocal_101);
					func_141(&iLocal_72, &iLocal_100, &iLocal_139, &iLocal_101);
					func_135(iLocal_139, unk_0xD1A189C6C27EE0CA(unk_0xA19140A5C42D8715()), &uLocal_153, &uLocal_156, &vLocal_158, &fLocal_157, &uLocal_159, 0f, 0f, 0f, 1500, 0f);
					if (unk_0x10E54C268D1B3FED(iLocal_72, unk_0xA19140A5C42D8715(), 30f, 30f, 30f, 0, 1, 0))
					{
						if (iLocal_87 < unk_0xFD34717937104F1C())
						{
							if (!func_54())
							{
								if (func_58())
								{
									func_1(&uLocal_161, cLocal_146, "REHH5_FHT", 4, 0, 0, 0);
								}
								else
								{
									func_1(&uLocal_161, cLocal_146, "REHH5_FEAR", 4, 0, 0, 0);
								}
								iLocal_87 = unk_0xFD34717937104F1C() + 8000;
							}
						}
						if (unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715()))
						{
							if (!func_115("REHH5_SHO"))
							{
								func_48();
								wait(0);
								func_1(&uLocal_161, cLocal_146, "REHH5_SHO", 4, 0, 0, 0);
							}
						}
						if (unk_0x2206F47E5C82D52C(unk_0xA19140A5C42D8715()) && !unk_0x4915F4759304D5CF(iLocal_72))
						{
							if ((unk_0x2206F47E5C82D52C(iLocal_72) && unk_0x852B8F739A2072BE(unk_0xA19140A5C42D8715(), 4)) && unk_0x45F41CA95744406F(unk_0xD4E735F4B6A956AC()))
							{
								iLocal_94 = 1;
							}
						}
					}
					if (!iLocal_93 && !unk_0x4915F4759304D5CF(iLocal_72))
					{
						if (unk_0x9661F58DC617631D(unk_0xA19140A5C42D8715()) && unk_0x10E54C268D1B3FED(iLocal_72, unk_0xA19140A5C42D8715(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0xDA4D3941AFF8EF12(iLocal_72, unk_0xA19140A5C42D8715(), 0, 16);
							func_48();
							wait(0);
							func_1(&uLocal_161, cLocal_146, "REHH5_GRM", 4, 0, 0, 0);
							iLocal_93 = 1;
						}
					}
				}
			}
		}
	}
}

void func_135(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, vector3 vParam7, int iParam8, float fParam9)
{
	vector3 vVar0;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0) && unk_0x1095F403F52B42E1(iParam0, 0))
	{
		if (((((((unk_0xDC5D81351D6A4DDB(iParam1) && iParam0 != iParam1) && !unk_0x71852D4EBD08275F(unk_0x8F474E419F56E48D(iParam1))) && !unk_0xCA8C103FCD316F89(unk_0x8F474E419F56E48D(iParam1))) && !unk_0x7C197233F79C2CB8(unk_0x8F474E419F56E48D(iParam1))) && !unk_0x289FBFAD3E416C48(unk_0x8F474E419F56E48D(iParam1))) && unk_0x678F978B0FAD24D2(iParam1)) && func_140(iParam0))
		{
			if (unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(iParam1, true), *uParam4, true) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { unk_0x2F230B37E9FFF23F(*uParam2, *uParam3, vParam7) };
				*uParam3 = func_139(unk_0xE2BBD32891C18569(iParam0, true), unk_0xE2BBD32891C18569(iParam1, true));
				func_138(iParam1, uParam4, uParam5);
			}
			if (!unk_0xCDDABFAF231CF3DD(iParam0))
			{
				*uParam6 = unk_0xFD34717937104F1C();
			}
			else if ((unk_0xFD34717937104F1C() - *uParam6) > iParam8)
			{
				if (func_137(iParam0, iParam1, 1) > fParam9 && unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(iParam1, true), *uParam2, true) > 20f)
				{
					if (!func_136(*uParam2))
					{
						if (!unk_0x317672E799676CA5(*uParam2, 3f))
						{
							unk_0x3521B10FB737CE36(*uParam2, 1.5f, 0);
							unk_0x01AF8CB960828C2B(*uParam2, 3f, 0, 0, 0, 0, false, 0);
							unk_0x4299736016AECE26(iParam0, *uParam2, 1, false, 0, 1);
							unk_0x92DDCF53AA47A63D(iParam0, *uParam3);
							unk_0x99F546A9200EA026(iParam0, 1084227584);
							unk_0x625FB4B0328423D9(iParam0, 10f);
							unk_0xC19EDC1D7179164C(iParam0, true, true, 0);
							*uParam6 = unk_0xFD34717937104F1C();
						}
						else
						{
							vVar0 = { unk_0x2F230B37E9FFF23F(vLocal_158, fLocal_157, vParam7) };
							if (!func_136(vVar0))
							{
								if (!unk_0x317672E799676CA5(vVar0, 2f))
								{
									unk_0x3521B10FB737CE36(vVar0, 1.5f, 0);
									unk_0x01AF8CB960828C2B(vVar0, 3f, 0, 0, 0, 0, false, 0);
									unk_0x4299736016AECE26(iParam0, vVar0, 1, false, 0, 1);
									unk_0x92DDCF53AA47A63D(iParam0, fLocal_157);
									unk_0x99F546A9200EA026(iParam0, 1084227584);
									unk_0x625FB4B0328423D9(iParam0, 10f);
									unk_0xC19EDC1D7179164C(iParam0, true, true, 0);
									*uParam6 = unk_0xFD34717937104F1C();
									return;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0xFD34717937104F1C();
		}
	}
}

int func_136(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_137(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		vVar0 = { unk_0xE2BBD32891C18569(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0xE2BBD32891C18569(iParam0, false) };
	}
	if (!unk_0x7112137033807390(iParam1, 0))
	{
		vVar1 = { unk_0xE2BBD32891C18569(iParam1, true) };
	}
	else
	{
		vVar1 = { unk_0xE2BBD32891C18569(iParam1, false) };
	}
	return unk_0x499324B3EF19C288(vVar0, vVar1, bParam2);
}

void func_138(int iParam0, var uParam1, var uParam2)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (!unk_0x7112137033807390(iParam0, 0))
		{
			*uParam1 = { unk_0xE2BBD32891C18569(iParam0, true) };
			*uParam2 = unk_0x552C823E1D2A019C(iParam0);
		}
	}
}

float func_139(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3)
{
	return unk_0x0C1B8F3F6EFDC58B((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

int func_140(int iParam0)
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (!unk_0x7112137033807390(iParam0, 0))
		{
			if (!unk_0x588F5E48C78F1C73(iParam0, -1, 0))
			{
				iVar0 = unk_0xB0D49A1F9F054602(iParam0, -1, 0);
				if (unk_0xDC5D81351D6A4DDB(iVar0))
				{
					if (!unk_0x7112137033807390(iVar0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_141(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if (unk_0xDC5D81351D6A4DDB(*iParam2))
	{
		if (unk_0x1095F403F52B42E1(*iParam2, 0))
		{
			if (!unk_0x4915F4759304D5CF(*iParam0))
			{
				if (unk_0xE0FD180CD24C0B67(*iParam0, *iParam2, 0))
				{
					if (unk_0xCE3CB618AFE55EFB(*iParam1))
					{
						unk_0xE1623437A3194332(iParam1);
					}
					iVar0 = 1;
				}
				else if (!unk_0xCE3CB618AFE55EFB(*iParam1))
				{
					*iParam1 = func_63(*iParam0, 1, 145);
				}
			}
			if (!unk_0xCE3CB618AFE55EFB(*iParam3))
			{
				if (iVar0 == 1)
				{
					*iParam3 = func_121(unk_0xE2BBD32891C18569(*iParam2, true), 0);
					unk_0x570128B7829A8EAA(*iParam3, 1);
					unk_0xAD8FB9E563A1FF80(*iParam3, 9);
					unk_0xC4F12E446CCE89F5(*iParam3, "BLIP_VEH");
				}
			}
			else
			{
				vVar1 = { unk_0x1C8DAFF0573242F7(*iParam3) };
				vVar2 = { unk_0xE2BBD32891C18569(*iParam2, true) };
				vVar1.x = (vVar1.x + (((vVar2.x - vVar1.x) / 1f) * timestep()));
				vVar1.y = (vVar1.y + (((vVar2.y - vVar1.y) / 1f) * timestep()));
				vVar1.z = (vVar1.z + (((vVar2.z - vVar1.z) / 1f) * timestep()));
				unk_0x382EC7CC6BB2D812(*iParam3, vVar1);
				if (iVar0 == 0)
				{
					unk_0xE1623437A3194332(iParam3);
				}
			}
		}
		else
		{
			if (unk_0xCE3CB618AFE55EFB(*iParam3))
			{
				unk_0xE1623437A3194332(iParam3);
			}
			if (!unk_0x4915F4759304D5CF(*iParam0))
			{
				if (!unk_0xCE3CB618AFE55EFB(*iParam1))
				{
					*iParam1 = func_63(*iParam0, 1, 145);
				}
			}
		}
	}
}

void func_142(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(*iParam0))
	{
		if (unk_0x4915F4759304D5CF(*iParam0))
		{
			if (unk_0xCE3CB618AFE55EFB(*iParam1))
			{
				unk_0xE1623437A3194332(iParam1);
			}
			unk_0x7E4E83D33161D01A(iParam0);
		}
		else
		{
			iVar0 = 1;
			if (!unk_0x5D7DFE2058701942(*iParam0, 0))
			{
			}
			else if (unk_0xDC5D81351D6A4DDB(*iParam2))
			{
				if (unk_0x1095F403F52B42E1(*iParam2, 0))
				{
					if (unk_0xE0FD180CD24C0B67(*iParam0, *iParam2, 0))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (unk_0xDC5D81351D6A4DDB(*iParam2))
	{
		if (unk_0x1095F403F52B42E1(*iParam2, 0))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				unk_0x66B55FD5AB9DEACD(*iParam2);
				unk_0x1EDE128D9797328A(*iParam2);
				unk_0x3C50F1F859BA232B(*iParam2, 0);
				unk_0x792676988A48387F(iParam2);
				if (unk_0xCE3CB618AFE55EFB(*iParam3))
				{
					unk_0xE1623437A3194332(iParam3);
				}
			}
		}
		else
		{
			unk_0x66B55FD5AB9DEACD(*iParam2);
			unk_0x1EDE128D9797328A(*iParam2);
			unk_0x3C50F1F859BA232B(*iParam2, 0);
			unk_0x792676988A48387F(iParam2);
			if (unk_0xCE3CB618AFE55EFB(*iParam3))
			{
				unk_0xE1623437A3194332(iParam3);
			}
		}
	}
}

void func_143()
{
	if (!unk_0x4915F4759304D5CF(iLocal_72))
	{
		if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.077f, 382.4866f, 77f, 0, true, 0) || unk_0x54F6F5A823224519(iLocal_72, 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.077f, 382.4866f, 77f, 0, true, 0))
		{
			if (unk_0x37A8EF89184DBA23(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0x7954F628CA598930(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 0, 0f, 0);
			}
			if (unk_0x37A8EF89184DBA23(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0x7954F628CA598930(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 0, 0f, 0);
			}
		}
		else
		{
			if (unk_0x37A8EF89184DBA23(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0x7954F628CA598930(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 1, 0f, 0);
			}
			if (unk_0x37A8EF89184DBA23(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0x7954F628CA598930(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 1, 0f, 0);
			}
		}
	}
}

void func_144()
{
	if (!bLocal_90)
	{
		if (iLocal_58 == 3)
		{
			if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_84, 200f, 200f, 200f, false, true, 0))
			{
				unk_0xCACEBBBEAD8F262E(iLocal_81);
				unk_0x4069FC25AC4F1CFB("move_m@brave");
				if (unk_0x7FC99CCC73354033(iLocal_81) && unk_0xD7AFBCBD45CE1D9D("move_m@brave"))
				{
					iLocal_72 = unk_0x35C6E06B120EB2E3(26, iLocal_81, vLocal_84, fLocal_85, 1, true);
					unk_0x72A0FF8C49CFFC0D(iLocal_72, 0, 2, 1, 0);
					unk_0x72A0FF8C49CFFC0D(iLocal_72, 3, 0, 2, 0);
					unk_0x1F4E5EFBFE503FB3(iLocal_72, true);
					unk_0x13E0A8160525AE55(iLocal_72, 42, true);
					unk_0x80B6201B269FC581(iLocal_72, true);
					unk_0x6D9BE0B9D5BA1106(iLocal_72, "move_m@brave", 1048576000);
					unk_0x13E0A8160525AE55(iLocal_72, 137, true);
					func_148(&uLocal_161, 4, iLocal_72, sLocal_148, 0, 1);
					unk_0x3F01127ECD227890(iLocal_72, "random@hitch_lift", "idle_a", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0x22DD1D053CFF9707(iLocal_72, unk_0xA19140A5C42D8715(), -1, 2052, 4);
					unk_0xA5DE74AE39867B03(iLocal_81);
					bLocal_90 = true;
				}
			}
		}
		else if (iLocal_58 == 5)
		{
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				if (unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vLocal_67, true) > 320f && unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					if (unk_0xE0FD180CD24C0B67(iLocal_71, unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 0))
					{
						if (unk_0x5D260ECB08BF5B88(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), unk_0x22C775856F4633CA(2, 5), &vLocal_62, 1, 3f, 0f))
						{
							if (!unk_0x317672E799676CA5(vLocal_62, 7f) && vdist(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vLocal_62) < 110f)
							{
								unk_0xCACEBBBEAD8F262E(iLocal_81);
								if (unk_0x7FC99CCC73354033(iLocal_81))
								{
									func_55();
									wait(0);
									if (func_147(&uLocal_161, cLocal_146, "REHH5_CHS", "REHH5_CHS_1", 4, 0, 0) && !unk_0x4915F4759304D5CF(iLocal_71))
									{
										iLocal_139 = unk_0x48CFBECB146FD1A1(iLocal_82, vLocal_62, func_145(vLocal_62, func_146(unk_0xD4E735F4B6A956AC()), 1), true, true, false);
										unk_0x9174BE523666C5A0(iLocal_139, 134, 134);
										unk_0xFB94F197528404D4(iLocal_139, 0f);
										iLocal_72 = unk_0x91A7C8CA5E332C03(iLocal_139, 26, iLocal_81, -1, 1, true);
										unk_0x72A0FF8C49CFFC0D(iLocal_72, 0, 1, 1, 0);
										unk_0x72A0FF8C49CFFC0D(iLocal_72, 2, 1, 0, 0);
										unk_0x13E0A8160525AE55(iLocal_72, 42, true);
										unk_0x605FF8F1D0D5E4DE(iLocal_72, true);
										func_148(&uLocal_161, 4, iLocal_72, sLocal_148, 0, 1);
										unk_0x99F546A9200EA026(iLocal_139, 1084227584);
										unk_0x5175E271E03B40D8(iLocal_72, iLocal_139, iLocal_71, 6, 60f, 786468, -1f, -1f, 1);
										unk_0xDA4D3941AFF8EF12(iLocal_72, unk_0xA19140A5C42D8715(), 0, 16);
										unk_0xD738221C247C8B71(iLocal_72, true);
										unk_0xA5DE74AE39867B03(iLocal_81);
										unk_0xA5DE74AE39867B03(iLocal_82);
										unk_0x625FB4B0328423D9(iLocal_139, (unk_0xEAA5CEF8875FEEED(unk_0xA19140A5C42D8715()) + 15f));
										if (unk_0xCE3CB618AFE55EFB(iLocal_69))
										{
											unk_0xE1623437A3194332(&iLocal_69);
										}
										func_55();
										while (func_54())
										{
											wait(0);
										}
										func_116(&uLocal_161, cLocal_146, "REHH5_CHS", "REHH5_CHS_2", 4, 0, 0);
										bLocal_92 = true;
										bLocal_90 = true;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

float func_145(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0xA0844D842FD4B009(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

Vector3 func_146(int iParam0)
{
	return unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iParam0), false);
}

int func_147(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_17(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15829 = 0;
	Global_15836 = 0;
	Global_15831 = 0;
	Global_16813 = 1;
	Global_16815 = 0;
	Global_16819 = 0;
	StringCopy(&Global_16826, sParam3, 24);
	Global_2621441 = 0;
	return func_2(sParam2, iParam4, 0);
}

void func_148(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_149()
{
	if (!iLocal_144 && !func_54())
	{
		if (iLocal_142 == 6 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM1", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 6 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM2", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 7 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM3", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 7 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM4", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 8 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM5", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 8 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM6", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 9 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM7", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 9 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM8", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 10 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM9", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 10 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM10", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 11 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM11", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 11 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM12", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 12 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM13", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 12 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM14", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 13 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM15", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 13 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM16", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 14 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM17", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 14 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM18", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 15 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM19", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 15 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM20", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 16 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM21", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 16 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM22", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 17 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM23", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 17 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM24", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 18 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM25", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 18 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM26", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 19 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM27", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 19 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM28", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 20 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM29", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 20 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM30", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 21 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM31", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 21 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM32", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 22 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM33", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 22 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM34", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 23 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM35", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
	}
}

void func_150()
{
	iLocal_123 = func_155(func_156()) * 1000;
	iLocal_123 = (iLocal_123 + func_154(func_156()) * 1000 * 60);
	if (!iLocal_132)
	{
		if ((iLocal_142 >= 24 && iLocal_123 < 150000) || (iLocal_142 >= 24 && iLocal_123 < 150000))
		{
			func_151((((iLocal_142 * 1000 * 60 - func_154(func_156()) * 1000 * 60) + (iLocal_141 * 1000 - func_155(func_156()) * 1000)) - 1440000), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_151(((iLocal_142 * 1000 * 60 - func_154(func_156()) * 1000 * 60) + (iLocal_141 * 1000 - func_155(func_156()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
		}
	}
	else if ((iLocal_142 >= 24 && iLocal_123 < 150000) || (iLocal_142 >= 24 && iLocal_123 < 150000))
	{
		func_151((((iLocal_142 * 1000 * 60 - func_154(func_156()) * 1000 * 60) + (iLocal_141 * 1000 - func_155(func_156()) * 1000)) - 1440000), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_151(((iLocal_142 * 1000 * 60 - func_154(func_156()) * 1000 * 60) + (iLocal_141 * 1000 - func_155(func_156()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if ((iLocal_142 == func_154(func_156()) + 1 && iLocal_141 == func_155(func_156())) || (((iLocal_142 >= 24 && iLocal_123 < 150000) && iLocal_142 == func_154(func_156()) + 25) && iLocal_141 == func_155(func_156())))
	{
		if (!iLocal_131)
		{
			if (!func_115("REHH1_1HOUR") && !func_115("REHH4_1HOUR"))
			{
				func_112(0);
			}
			func_48();
			wait(0);
			if (!func_54())
			{
				if (iLocal_58 == 1)
				{
					func_1(&uLocal_161, cLocal_146, "REHH1_1HOUR", 4, 0, 0, 0);
				}
				iLocal_131 = 1;
			}
		}
	}
	if (iLocal_141 == 30)
	{
		if ((iLocal_142 == func_154(func_156()) && iLocal_141 == func_155(func_156()) + 30) || (((iLocal_142 >= 24 && iLocal_123 < 150000) && iLocal_142 == func_154(func_156()) + 24) && iLocal_141 == func_155(func_156()) + 30))
		{
			if (!iLocal_132)
			{
				if (!func_115("REHH1_HHOUR") && !func_115("REHH4_HHOUR"))
				{
					func_112(0);
				}
				func_48();
				wait(0);
				if (!func_54())
				{
					if (iLocal_58 == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_HHOUR", 4, 0, 0, 0);
					}
					iLocal_132 = 1;
				}
				if (!iLocal_133)
				{
					iLocal_145 = unk_0x7A3ECD08D6D1D554();
					unk_0xE11F00B4AC919F45(iLocal_145, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, true);
					unk_0x5D311B11B00F19D4(iLocal_145, "countdown_fadein", 35f);
					unk_0x8969D02DEDC106D2("TIMER_SCENE");
					iLocal_133 = 1;
				}
			}
		}
		if ((iLocal_142 == func_154(func_156()) && iLocal_141 == func_155(func_156()) + 5) || (((iLocal_142 >= 24 && iLocal_123 < 150000) && iLocal_142 == func_154(func_156()) + 24) && iLocal_141 == func_155(func_156()) + 5))
		{
			if (!iLocal_134)
			{
				unk_0x5D311B11B00F19D4(iLocal_145, "countdown_fast", 1f);
				iLocal_134 = 1;
			}
		}
	}
	if (iLocal_141 == 0)
	{
		if ((iLocal_142 == func_154(func_156()) + 1 && iLocal_141 == (func_155(func_156()) - 30)) || (((iLocal_142 >= 24 && iLocal_123 < 150000) && iLocal_142 == func_154(func_156()) + 25) && iLocal_141 == (func_155(func_156()) - 30)))
		{
			if (!iLocal_132)
			{
				if (!func_115("REHH1_HHOUR") && !func_115("REHH4_HHOUR"))
				{
					func_112(0);
				}
				func_48();
				wait(0);
				if (!func_54())
				{
					if (iLocal_58 == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_HHOUR", 4, 0, 0, 0);
					}
					iLocal_132 = 1;
				}
				if (!iLocal_133)
				{
					iLocal_145 = unk_0x7A3ECD08D6D1D554();
					unk_0xE11F00B4AC919F45(iLocal_145, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, true);
					unk_0x5D311B11B00F19D4(iLocal_145, "countdown_fadein", 35f);
					unk_0x8969D02DEDC106D2("TIMER_SCENE");
					iLocal_133 = 1;
				}
			}
		}
		if ((iLocal_142 == func_154(func_156()) + 1 && iLocal_141 == (func_155(func_156()) - 55)) || (((iLocal_142 >= 24 && iLocal_123 < 150000) && iLocal_142 == func_154(func_156()) + 25) && iLocal_141 == (func_155(func_156()) - 55)))
		{
			if (!iLocal_134)
			{
				unk_0x5D311B11B00F19D4(iLocal_145, "countdown_fast", 1f);
				iLocal_134 = 1;
			}
		}
	}
	if (iLocal_142 >= 24 && iLocal_123 < 150000)
	{
		if (iLocal_142 == func_154(func_156()) + 24 && iLocal_141 == func_155(func_156()))
		{
			bLocal_143 = true;
		}
	}
	else if (iLocal_142 == func_154(func_156()) && iLocal_141 == func_155(func_156()))
	{
		bLocal_143 = true;
	}
	if (bLocal_143)
	{
		func_48();
		wait(0);
		unk_0x5DE59A67B5F326CF(iLocal_145);
		unk_0x5AD7D03C214BDA88("TIMER_SCENE");
		if (iLocal_58 == 1)
		{
			func_1(&uLocal_161, cLocal_146, "REHH1_TLATE", 4, 0, 0, 0);
		}
		if (!unk_0x4915F4759304D5CF(iLocal_71))
		{
			if (unk_0x5D7DFE2058701942(iLocal_71, 0))
			{
				unk_0x0185AEECD1FF63F3(unk_0xCAEB6CE71A2C7212(iLocal_71, 0), (10.5f + 2f), 2, 0);
				unk_0xCB482EF95FAE4D73(iLocal_71, 1, 0);
				unk_0xF8136E11BE4BEAC3(iLocal_71);
				if (unk_0xCE3CB618AFE55EFB(iLocal_69))
				{
					unk_0xE1623437A3194332(&iLocal_69);
				}
			}
		}
		iLocal_57 = 9;
	}
}

void func_151(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_153(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1369750.f_1 = 1;
		func_152(7, iVar0);
		Global_1369750.f_4399[iVar0] = iParam0;
		StringCopy(&(Global_1369750.f_4399.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1369750.f_4399.f_172[iVar0] = iParam2;
		Global_1369750.f_4399.f_216[iVar0] = iParam3;
		Global_1369750.f_4399.f_183[iVar0] = iParam4;
		Global_1369750.f_4399.f_194[iVar0] = iParam5;
		Global_1369750.f_4399.f_249[iVar0] = iParam6;
		Global_1369750.f_4399.f_260[iVar0] = iParam7;
		Global_1369750.f_4399.f_205[iVar0] = iParam8;
		Global_1369750.f_4399.f_314[iVar0] = iParam9;
		Global_1369750.f_4399.f_325[iVar0] = iParam10;
		Global_1369750.f_4399.f_357[iVar0] = iParam11;
		Global_1369750.f_4399.f_238[iVar0] = iParam12;
		Global_1369750.f_4399.f_271[iVar0] = iParam13;
		Global_1369750.f_4399.f_368[iVar0] = iParam14;
		Global_1369750.f_4399.f_379[iVar0] = iParam15;
		Global_1369750.f_4399.f_390[iVar0] = iParam16;
	}
}

void func_152(int iParam0, int iParam1)
{
	unk_0x2BCFB39E86340DAA(&(Global_1369750.f_6130[iParam0]), iParam1);
}

bool func_153(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_1369750.f_6130[iParam0], iParam1);
}

int func_154(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_155(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_156()
{
	var uVar0;
	
	func_166(&uVar0, unk_0xC5B07C33AC7BB174());
	func_165(&uVar0, unk_0x65DA628D62901275());
	func_164(&uVar0, unk_0x34CEB9721AC6A0A9());
	func_159(&uVar0, unk_0xC9A0B68BA813CF99());
	func_158(&uVar0, unk_0x897D202BD69186D5());
	func_157(&uVar0, unk_0x56EBDF0E39D83471());
	return uVar0;
}

void func_157(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_158(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_159(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_163(*uParam0);
	iVar1 = func_161(*uParam0);
	if (iParam1 < 1 || iParam1 > func_160(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_160(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_161(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_162(unk_0x05EFB6A616B6FADE(iParam0, 31), -1, 1)) + 2011;
}

int func_162(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_163(int iParam0)
{
	return iParam0 & 15;
}

void func_164(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_165(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_166(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

void func_167()
{
	if (!unk_0x4915F4759304D5CF(iLocal_71))
	{
		if (unk_0x1095F403F52B42E1(unk_0xC409B91AC4749F88(), 0))
		{
			if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), unk_0xC409B91AC4749F88(), 0) && unk_0xE0FD180CD24C0B67(iLocal_71, unk_0xC409B91AC4749F88(), 0))
			{
				if (unk_0xCE3CB618AFE55EFB(iLocal_99))
				{
					unk_0xE1623437A3194332(&iLocal_99);
				}
				if (!unk_0x749F5228DEB730FF(iLocal_71))
				{
					unk_0x9854E4DB9C72017F(iLocal_71, func_111());
					unk_0xC860991D1C5AD4F0(iLocal_71, 1);
					unk_0x9EA5DDDDB1899B3B(iLocal_71, 0);
				}
				if (!unk_0xCE3CB618AFE55EFB(iLocal_69))
				{
					iLocal_69 = func_121(vLocal_77, 1);
				}
				if (((func_8() == 2 && !func_51()) && iLocal_58 != 1) && iLocal_58 != 4)
				{
					if (!unk_0xCE3CB618AFE55EFB(iLocal_70))
					{
						iLocal_70 = func_121(vLocal_79, 0);
						unk_0x7DB79A42AADE120F(iLocal_70, 269);
						func_168();
					}
				}
				if (iLocal_58 == 1)
				{
					if (!func_54())
					{
						if (iLocal_58 == 1)
						{
							func_1(&uLocal_161, cLocal_146, "REHH1_WTA", 4, 0, 0, 0);
						}
						iLocal_142 = func_154(func_156()) + 2;
						if (func_155(func_156()) >= 30)
						{
							iLocal_141 = 0;
							iLocal_142++;
						}
						else
						{
							iLocal_141 = 30;
						}
						iLocal_89 = 1;
						settimera(0);
						iLocal_57 = 4;
					}
				}
				else if (iLocal_58 == 2)
				{
					if (func_1(&uLocal_161, cLocal_146, "REHH2_WTB", 4, 0, 0, 0))
					{
						iLocal_89 = 1;
						settimera(0);
						iLocal_57 = 4;
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_1(&uLocal_161, cLocal_146, "REHH3_WTC", 4, 0, 0, 0))
					{
						iLocal_89 = 1;
						settimera(0);
						iLocal_57 = 4;
					}
				}
				else if (iLocal_58 == 5)
				{
					if (func_1(&uLocal_161, cLocal_146, "REHH5_WTE", 4, 0, 0, 0))
					{
						iLocal_89 = 1;
						settimera(0);
						iLocal_57 = 4;
					}
				}
			}
		}
	}
}

void func_168()
{
	if (func_8() == 2)
	{
		if (!Global_25696)
		{
			func_169("CULT_BLIP_HELP", -1);
			Global_25696 = 1;
		}
	}
}

void func_169(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, true, iParam1);
}

void func_170()
{
	int iVar0;
	
	switch (iLocal_108)
	{
		case 0:
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				if (iLocal_88 < unk_0xFD34717937104F1C())
				{
					func_1(&uLocal_161, cLocal_146, "REHH5_STO", 4, 0, 0, 0);
					iLocal_88 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(4500, 6500));
				}
				if (unk_0xC42DE41AEED00E7B(iLocal_71, unk_0xA19140A5C42D8715(), 90f))
				{
					if (func_172(iLocal_71, unk_0xA19140A5C42D8715()) < 24f || (unk_0x0099F119B7ADB4B3(unk_0xD4E735F4B6A956AC()) && func_172(unk_0xA19140A5C42D8715(), iLocal_71) < 30f))
					{
						fLocal_152 = func_137(iLocal_71, unk_0xA19140A5C42D8715(), 1);
						if (fLocal_152 > 5f)
						{
							fLocal_152 = (fLocal_152 - 1f);
						}
						else
						{
							fLocal_152 = (fLocal_152 - 0.5f);
						}
						unk_0x2F89329397A277BC(&iLocal_75);
						unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 2052, 2);
						unk_0x8F65948C5AFB744E(0, unk_0xA19140A5C42D8715(), -1, fLocal_152, 2f, 1073741824, 0);
						unk_0x301F42EEE3C40328(iLocal_75);
						unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
						unk_0x3A95A0A3221D4208(&iLocal_75);
						iLocal_108++;
					}
				}
				else if (func_172(iLocal_71, unk_0xA19140A5C42D8715()) < 12f || (unk_0x0099F119B7ADB4B3(unk_0xD4E735F4B6A956AC()) && func_172(unk_0xA19140A5C42D8715(), iLocal_71) < 30f))
				{
					fLocal_152 = func_137(iLocal_71, unk_0xA19140A5C42D8715(), 1);
					fLocal_152 = (fLocal_152 - 0.25f);
					unk_0x2F89329397A277BC(&iLocal_75);
					unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 2052, 2);
					unk_0x8F65948C5AFB744E(0, unk_0xA19140A5C42D8715(), -1, fLocal_152, 2f, 1073741824, 0);
					unk_0x301F42EEE3C40328(iLocal_75);
					unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
					unk_0x3A95A0A3221D4208(&iLocal_75);
					iLocal_108++;
				}
			}
			break;
		
		case 1:
			if (unk_0xCE3CB618AFE55EFB(iLocal_99))
			{
				unk_0x264E87C905AE790B(iLocal_99, true);
			}
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				unk_0x22DD1D053CFF9707(unk_0xA19140A5C42D8715(), iLocal_71, 5000, 2052, 2);
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					iLocal_73 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
					if (unk_0x1095F403F52B42E1(iLocal_73, 0))
					{
						if (func_172(iLocal_71, unk_0xA19140A5C42D8715()) < 25f || (unk_0x0099F119B7ADB4B3(unk_0xD4E735F4B6A956AC()) && func_172(unk_0xA19140A5C42D8715(), iLocal_71) < 30f))
						{
							if (unk_0xC42DE41AEED00E7B(iLocal_71, unk_0xA19140A5C42D8715(), 150f))
							{
								unk_0x3F29BBC16DCB8A23(iLocal_71);
								unk_0x2F89329397A277BC(&iLocal_75);
								unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 2052, 4);
								if (unk_0x588F5E48C78F1C73(iLocal_73, 0, 0))
								{
									unk_0x42501103787BD147(0, iLocal_73, -1, 0, 2f);
								}
								unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
								unk_0x301F42EEE3C40328(iLocal_75);
								unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
								unk_0x3A95A0A3221D4208(&iLocal_75);
								iLocal_108++;
							}
						}
					}
				}
				else if (!iLocal_109)
				{
					unk_0x22DD1D053CFF9707(iLocal_71, unk_0xA19140A5C42D8715(), 7000, 2052, 2);
					if (func_1(&uLocal_161, cLocal_146, "REHH5_NOV", 4, 0, 0, 0))
					{
						iLocal_109 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				iLocal_73 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
				if (!unk_0x4915F4759304D5CF(iLocal_71) && unk_0x1095F403F52B42E1(iLocal_73, 0))
				{
					if (func_137(iLocal_71, iLocal_73, 1) < 25f || (unk_0x0099F119B7ADB4B3(unk_0xD4E735F4B6A956AC()) && func_172(unk_0xA19140A5C42D8715(), iLocal_71) < 30f))
					{
						if (unk_0xEAA5CEF8875FEEED(iLocal_73) < 2.5f)
						{
							if (!unk_0x4915F4759304D5CF(iLocal_71))
							{
								if (func_1(&uLocal_161, cLocal_146, "REHH5_ASK", 4, 0, 0, 0))
								{
									settimera(0);
									iLocal_108++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				if (unk_0x10E54C268D1B3FED(iLocal_71, unk_0xA19140A5C42D8715(), 3f, 3f, 3f, 0, 1, 0))
				{
					unk_0x2F89329397A277BC(&iLocal_75);
					unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 2052, 2);
					unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
					unk_0x301F42EEE3C40328(iLocal_75);
					unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
					unk_0x3A95A0A3221D4208(&iLocal_75);
				}
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					iLocal_73 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
					if (unk_0x1095F403F52B42E1(iLocal_73, 0))
					{
						if (unk_0xEAA5CEF8875FEEED(iLocal_73) < 2.5f && func_172(iLocal_71, unk_0xA19140A5C42D8715()) < 25f)
						{
							if (!func_54())
							{
								if (func_8() == 0)
								{
									func_1(&uLocal_161, cLocal_146, "REHH5_RPA", 4, 0, 0, 0);
									settimera(0);
									iLocal_108++;
								}
								else if (func_8() == 1)
								{
									func_1(&uLocal_161, cLocal_146, "REHH5_RPB", 4, 0, 0, 0);
									settimera(0);
									iLocal_108++;
								}
								else if (func_8() == 2)
								{
									func_1(&uLocal_161, cLocal_146, "REHH5_RPC", 4, 0, 0, 0);
									settimera(0);
									iLocal_108++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && func_172(iLocal_71, unk_0xA19140A5C42D8715()) < 25f)
				{
					if (func_117())
					{
						if (unk_0x1095F403F52B42E1(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 0))
						{
							if (unk_0x588F5E48C78F1C73(unk_0xC409B91AC4749F88(), 0, 0))
							{
								unk_0x9854E4DB9C72017F(iLocal_71, func_111());
								unk_0xC860991D1C5AD4F0(iLocal_71, 1);
								unk_0x9EA5DDDDB1899B3B(iLocal_71, 0);
								unk_0x22DD1D053CFF9707(iLocal_71, unk_0xA19140A5C42D8715(), 10000, 2052, 2);
								unk_0xA2EBCD9385E56019(iLocal_71, unk_0xC409B91AC4749F88(), -1, 0, 2f, 1, 0);
								func_171();
								iLocal_108++;
							}
							else
							{
								iVar0 = unk_0xB0D49A1F9F054602(unk_0xC409B91AC4749F88(), 0, 0);
								if (unk_0x4915F4759304D5CF(iVar0))
								{
									iLocal_56 = 1;
								}
								else
								{
									unk_0x9568B1B58F78FF36(iLocal_71);
									unk_0x9854E4DB9C72017F(iLocal_71, func_111());
									unk_0xC860991D1C5AD4F0(iLocal_71, 1);
									unk_0x9EA5DDDDB1899B3B(iLocal_71, 1);
									unk_0x22DD1D053CFF9707(iLocal_71, unk_0xA19140A5C42D8715(), 10000, 2052, 2);
									iLocal_108++;
								}
							}
						}
					}
					else if (!iLocal_110)
					{
						if (!func_54())
						{
							if (!func_177())
							{
								func_1(&uLocal_161, cLocal_146, "REHH5_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_161, cLocal_146, "REHH5_VEH2", 4, 0, 0, 0);
							}
							iLocal_110 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				if (func_117())
				{
					if (unk_0x5D7DFE2058701942(iLocal_71, 0))
					{
						unk_0x53FF9BDD8529ACD2(iLocal_71);
						iLocal_89 = 1;
						iLocal_57 = 3;
					}
					else if (timera() > 60000)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH5_SLW", 4, 0, 0, 0))
						{
							func_53();
						}
					}
					if (func_172(iLocal_71, unk_0xA19140A5C42D8715()) > 100f)
					{
						func_53();
					}
				}
				else
				{
					unk_0xF8136E11BE4BEAC3(iLocal_71);
					unk_0x2F89329397A277BC(&iLocal_75);
					unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 2052, 2);
					unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
					unk_0x301F42EEE3C40328(iLocal_75);
					unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
					unk_0x3A95A0A3221D4208(&iLocal_75);
					iLocal_108 = 4;
				}
			}
			break;
	}
}

void func_171()
{
	if (!func_51())
	{
		if (func_8() == 2)
		{
			Global_25694 = 1;
		}
	}
}

float func_172(int iParam0, int iParam1)
{
	return func_137(iParam0, iParam1, 1);
}

void func_173()
{
	int iVar0;
	
	switch (iLocal_108)
	{
		case 0:
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				if (unk_0xC42DE41AEED00E7B(iLocal_71, unk_0xA19140A5C42D8715(), 90f))
				{
					if (func_172(iLocal_71, unk_0xA19140A5C42D8715()) < 12f || (unk_0x0099F119B7ADB4B3(unk_0xD4E735F4B6A956AC()) && func_172(unk_0xA19140A5C42D8715(), iLocal_71) < 30f))
					{
						fLocal_152 = func_137(iLocal_71, unk_0xA19140A5C42D8715(), 1);
						if (fLocal_152 > 5f)
						{
							fLocal_152 = (fLocal_152 - 1f);
						}
						else
						{
							fLocal_152 = (fLocal_152 - 0.5f);
						}
						unk_0x3F29BBC16DCB8A23(iLocal_71);
						unk_0x2F89329397A277BC(&iLocal_75);
						unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 2052, 2);
						unk_0x3A7AFBF6BE5F0981(0, unk_0xA19140A5C42D8715(), 2.5f, 0f, 0f, 1f, 5000, 1036831949, 1);
						unk_0x301F42EEE3C40328(iLocal_75);
						unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
						unk_0x3A95A0A3221D4208(&iLocal_75);
						iLocal_108++;
					}
				}
				else if (func_172(iLocal_71, unk_0xA19140A5C42D8715()) < 8f || (unk_0x0099F119B7ADB4B3(unk_0xD4E735F4B6A956AC()) && func_172(unk_0xA19140A5C42D8715(), iLocal_71) < 30f))
				{
					fLocal_152 = func_137(iLocal_71, unk_0xA19140A5C42D8715(), 1);
					fLocal_152 = (fLocal_152 - 0.25f);
					unk_0x2F89329397A277BC(&iLocal_75);
					unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 2052, 2);
					unk_0x8F65948C5AFB744E(0, unk_0xA19140A5C42D8715(), -1, fLocal_152, 1f, 1073741824, 0);
					unk_0x301F42EEE3C40328(iLocal_75);
					unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
					unk_0x3A95A0A3221D4208(&iLocal_75);
					iLocal_108++;
				}
			}
			break;
		
		case 1:
			if (unk_0xCE3CB618AFE55EFB(iLocal_99))
			{
				unk_0x264E87C905AE790B(iLocal_99, true);
			}
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				unk_0x22DD1D053CFF9707(unk_0xA19140A5C42D8715(), iLocal_71, 5000, 2052, 2);
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					iLocal_73 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
					if (unk_0x1095F403F52B42E1(iLocal_73, 0))
					{
						if (func_172(iLocal_71, unk_0xA19140A5C42D8715()) < 10f || (unk_0x0099F119B7ADB4B3(unk_0xD4E735F4B6A956AC()) && func_172(unk_0xA19140A5C42D8715(), iLocal_71) < 30f))
						{
							if (unk_0xC42DE41AEED00E7B(iLocal_71, unk_0xA19140A5C42D8715(), 150f))
							{
								unk_0x3F29BBC16DCB8A23(iLocal_71);
								unk_0x2F89329397A277BC(&iLocal_75);
								unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 2052, 4);
								if (unk_0x588F5E48C78F1C73(iLocal_73, 0, 0))
								{
									unk_0x42501103787BD147(0, iLocal_73, -1, 0, 1f);
								}
								unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
								unk_0x301F42EEE3C40328(iLocal_75);
								unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
								unk_0x3A95A0A3221D4208(&iLocal_75);
								iLocal_108++;
							}
						}
					}
				}
				else if (!iLocal_109)
				{
					unk_0x22DD1D053CFF9707(iLocal_71, unk_0xA19140A5C42D8715(), 7000, 2052, 2);
					if (func_1(&uLocal_161, cLocal_146, "REHH3_NOV", 4, 0, 0, 0))
					{
						iLocal_109 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				iLocal_73 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
				if (!unk_0x4915F4759304D5CF(iLocal_71) && unk_0x1095F403F52B42E1(iLocal_73, 0))
				{
					if (func_137(iLocal_71, iLocal_73, 1) < 13f || (unk_0x0099F119B7ADB4B3(unk_0xD4E735F4B6A956AC()) && func_172(unk_0xA19140A5C42D8715(), iLocal_71) < 30f))
					{
						if (unk_0xEAA5CEF8875FEEED(iLocal_73) < 2.5f)
						{
							if (!unk_0x4915F4759304D5CF(iLocal_71))
							{
								if (func_1(&uLocal_161, cLocal_146, "REHH3_ASK", 4, 0, 0, 0))
								{
									settimera(0);
									iLocal_108++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				if (unk_0x3D77D31E25961596(iLocal_71))
				{
					unk_0x2F89329397A277BC(&iLocal_75);
					unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 2052, 2);
					unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
					unk_0x301F42EEE3C40328(iLocal_75);
					unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
					unk_0x3A95A0A3221D4208(&iLocal_75);
				}
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					iLocal_73 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
					if (unk_0x1095F403F52B42E1(iLocal_73, 0))
					{
						if (unk_0xEAA5CEF8875FEEED(iLocal_73) < 2.5f && func_172(iLocal_71, unk_0xA19140A5C42D8715()) < 15f)
						{
							if (!func_54())
							{
								if (func_8() == 0)
								{
									func_1(&uLocal_161, cLocal_146, "REHH3_RPA", 4, 0, 0, 0);
									settimera(0);
									iLocal_108++;
								}
								else if (func_8() == 1)
								{
									func_1(&uLocal_161, cLocal_146, "REHH3_RPB", 4, 0, 0, 0);
									settimera(0);
									iLocal_108++;
								}
								else if (func_8() == 2)
								{
									func_1(&uLocal_161, cLocal_146, "REHH3_RPC", 4, 0, 0, 0);
									settimera(0);
									iLocal_108++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && func_172(iLocal_71, unk_0xA19140A5C42D8715()) < 15f)
				{
					if (func_117())
					{
						if (unk_0x1095F403F52B42E1(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 0))
						{
							if (unk_0x588F5E48C78F1C73(unk_0xC409B91AC4749F88(), 0, 0))
							{
								unk_0x9854E4DB9C72017F(iLocal_71, func_111());
								unk_0xC860991D1C5AD4F0(iLocal_71, 1);
								unk_0x9EA5DDDDB1899B3B(iLocal_71, 0);
								unk_0x22DD1D053CFF9707(iLocal_71, unk_0xA19140A5C42D8715(), 10000, 2052, 2);
								unk_0xA2EBCD9385E56019(iLocal_71, unk_0xC409B91AC4749F88(), -1, 0, 1f, 1, 0);
								func_171();
								iLocal_108++;
							}
							else
							{
								iVar0 = unk_0xB0D49A1F9F054602(unk_0xC409B91AC4749F88(), 0, 0);
								if (unk_0x4915F4759304D5CF(iVar0))
								{
									iLocal_56 = 1;
								}
								else
								{
									unk_0x9568B1B58F78FF36(iLocal_71);
									unk_0x9854E4DB9C72017F(iLocal_71, func_111());
									unk_0xC860991D1C5AD4F0(iLocal_71, 1);
									unk_0x9EA5DDDDB1899B3B(iLocal_71, 1);
									unk_0x22DD1D053CFF9707(iLocal_71, unk_0xA19140A5C42D8715(), 10000, 2052, 2);
									iLocal_108++;
								}
							}
						}
					}
					else if (!iLocal_110)
					{
						if (!func_54())
						{
							if (!func_177())
							{
								func_1(&uLocal_161, cLocal_146, "REHH3_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_161, cLocal_146, "REHH3_VEH2", 4, 0, 0, 0);
							}
							iLocal_110 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				if (func_117())
				{
					unk_0x639C59ACAF6EEC64(iLocal_71, 1f);
					if (unk_0x5D7DFE2058701942(iLocal_71, 0))
					{
						unk_0x53FF9BDD8529ACD2(iLocal_71);
						iLocal_89 = 1;
						iLocal_57 = 3;
					}
					else if (timera() > 60000)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH3_SLW", 4, 0, 0, 0))
						{
							func_53();
						}
					}
					if (func_172(iLocal_71, unk_0xA19140A5C42D8715()) > 100f)
					{
						func_53();
					}
				}
				else
				{
					unk_0xF8136E11BE4BEAC3(iLocal_71);
					unk_0x2F89329397A277BC(&iLocal_75);
					unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 2052, 2);
					unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
					unk_0x301F42EEE3C40328(iLocal_75);
					unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
					unk_0x3A95A0A3221D4208(&iLocal_75);
					iLocal_108 = 4;
				}
			}
			break;
	}
}

void func_174()
{
	int iVar0;
	
	switch (iLocal_108)
	{
		case 0:
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				if (unk_0xC42DE41AEED00E7B(iLocal_71, unk_0xA19140A5C42D8715(), 90f))
				{
					if (func_172(iLocal_71, unk_0xA19140A5C42D8715()) < 12f || (unk_0x0099F119B7ADB4B3(unk_0xD4E735F4B6A956AC()) && func_172(unk_0xA19140A5C42D8715(), iLocal_71) < 30f))
					{
						fLocal_152 = func_137(iLocal_71, unk_0xA19140A5C42D8715(), 1);
						if (fLocal_152 > 5f)
						{
							fLocal_152 = (fLocal_152 - 1f);
						}
						else
						{
							fLocal_152 = (fLocal_152 - 0.5f);
						}
						unk_0x2F89329397A277BC(&iLocal_75);
						unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 2052, 2);
						unk_0x8F65948C5AFB744E(0, unk_0xA19140A5C42D8715(), -1, fLocal_152, 1f, 1073741824, 0);
						unk_0x301F42EEE3C40328(iLocal_75);
						unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
						unk_0x3A95A0A3221D4208(&iLocal_75);
						iLocal_108++;
					}
				}
				else if (func_172(iLocal_71, unk_0xA19140A5C42D8715()) < 8f || (unk_0x0099F119B7ADB4B3(unk_0xD4E735F4B6A956AC()) && func_172(unk_0xA19140A5C42D8715(), iLocal_71) < 30f))
				{
					fLocal_152 = func_137(iLocal_71, unk_0xA19140A5C42D8715(), 1);
					fLocal_152 = (fLocal_152 - 0.25f);
					unk_0x2F89329397A277BC(&iLocal_75);
					unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 2052, 2);
					unk_0x8F65948C5AFB744E(0, unk_0xA19140A5C42D8715(), -1, fLocal_152, 1f, 1073741824, 0);
					unk_0x301F42EEE3C40328(iLocal_75);
					unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
					unk_0x3A95A0A3221D4208(&iLocal_75);
					iLocal_108++;
				}
			}
			break;
		
		case 1:
			if (unk_0xCE3CB618AFE55EFB(iLocal_99))
			{
				unk_0x264E87C905AE790B(iLocal_99, true);
			}
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				unk_0x22DD1D053CFF9707(unk_0xA19140A5C42D8715(), iLocal_71, 5000, 2052, 2);
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					iLocal_73 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
					if (unk_0x1095F403F52B42E1(iLocal_73, 0))
					{
						if (func_172(iLocal_71, unk_0xA19140A5C42D8715()) < 10f || (unk_0x0099F119B7ADB4B3(unk_0xD4E735F4B6A956AC()) && func_172(unk_0xA19140A5C42D8715(), iLocal_71) < 30f))
						{
							if (unk_0xC42DE41AEED00E7B(iLocal_71, unk_0xA19140A5C42D8715(), 150f))
							{
								unk_0x3F29BBC16DCB8A23(iLocal_71);
								unk_0x2F89329397A277BC(&iLocal_75);
								unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 2052, 2);
								if (unk_0x588F5E48C78F1C73(iLocal_73, 0, 0))
								{
									unk_0x42501103787BD147(0, iLocal_73, -1, 0, 1f);
								}
								unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
								unk_0x301F42EEE3C40328(iLocal_75);
								unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
								unk_0x3A95A0A3221D4208(&iLocal_75);
								func_48();
								wait(0);
								iLocal_108++;
							}
						}
					}
				}
				else if (!iLocal_109)
				{
					unk_0x9568B1B58F78FF36(iLocal_71);
					unk_0x22DD1D053CFF9707(iLocal_71, unk_0xA19140A5C42D8715(), 7000, 2052, 2);
					if (func_1(&uLocal_161, cLocal_146, "REHH2_NOV", 4, 0, 0, 0))
					{
						iLocal_109 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				iLocal_73 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
				if (!unk_0x4915F4759304D5CF(iLocal_71) && unk_0x1095F403F52B42E1(iLocal_73, 0))
				{
					if (func_137(iLocal_71, iLocal_73, 1) < 13f || (unk_0x0099F119B7ADB4B3(unk_0xD4E735F4B6A956AC()) && func_172(unk_0xA19140A5C42D8715(), iLocal_71) < 30f))
					{
						if (unk_0xEAA5CEF8875FEEED(iLocal_73) < 2.5f)
						{
							if (!unk_0x4915F4759304D5CF(iLocal_71))
							{
								if (func_1(&uLocal_161, cLocal_146, "REHH2_ASK", 4, 0, 0, 0))
								{
									settimera(0);
									iLocal_108++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				if (unk_0x3D77D31E25961596(iLocal_71))
				{
					unk_0x2F89329397A277BC(&iLocal_75);
					unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 2052, 2);
					unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
					unk_0x301F42EEE3C40328(iLocal_75);
					unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
					unk_0x3A95A0A3221D4208(&iLocal_75);
				}
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					iLocal_73 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
					if (unk_0x1095F403F52B42E1(iLocal_73, 0))
					{
						if (unk_0xEAA5CEF8875FEEED(iLocal_73) < 2.5f && func_172(iLocal_71, unk_0xA19140A5C42D8715()) < 15f)
						{
							if (!func_54())
							{
								if (func_8() == 0)
								{
									func_1(&uLocal_161, cLocal_146, "REHH2_RPA", 4, 0, 0, 0);
									settimera(0);
									iLocal_108++;
								}
								else if (func_8() == 1)
								{
									func_1(&uLocal_161, cLocal_146, "REHH2_RPB", 4, 0, 0, 0);
									settimera(0);
									iLocal_108++;
								}
								else if (func_8() == 2)
								{
									func_1(&uLocal_161, cLocal_146, "REHH2_RPC", 4, 0, 0, 0);
									settimera(0);
									iLocal_108++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && func_172(iLocal_71, unk_0xA19140A5C42D8715()) < 15f)
				{
					if (func_117())
					{
						iLocal_73 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
						if (unk_0x1095F403F52B42E1(iLocal_73, 0))
						{
							if (unk_0x588F5E48C78F1C73(unk_0xC409B91AC4749F88(), 0, 0))
							{
								unk_0x9854E4DB9C72017F(iLocal_71, func_111());
								unk_0xC860991D1C5AD4F0(iLocal_71, 1);
								unk_0x9EA5DDDDB1899B3B(iLocal_71, 0);
								unk_0x22DD1D053CFF9707(iLocal_71, unk_0xA19140A5C42D8715(), 10000, 2052, 2);
								unk_0xA2EBCD9385E56019(iLocal_71, unk_0xC409B91AC4749F88(), -1, 0, 1f, 1, 0);
								func_171();
								iLocal_108++;
							}
							else
							{
								iVar0 = unk_0xB0D49A1F9F054602(unk_0xC409B91AC4749F88(), 0, 0);
								if (unk_0x4915F4759304D5CF(iVar0))
								{
									iLocal_56 = 1;
								}
								else
								{
									unk_0x9568B1B58F78FF36(iLocal_71);
									unk_0x9854E4DB9C72017F(iLocal_71, func_111());
									unk_0xC860991D1C5AD4F0(iLocal_71, 1);
									unk_0x9EA5DDDDB1899B3B(iLocal_71, 1);
									unk_0x22DD1D053CFF9707(iLocal_71, unk_0xA19140A5C42D8715(), 10000, 2052, 2);
									iLocal_108++;
								}
							}
						}
					}
					else if (!iLocal_110)
					{
						if (!func_54())
						{
							if (!func_177())
							{
								func_1(&uLocal_161, cLocal_146, "REHH2_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_161, cLocal_146, "REHH2_VEH2", 4, 0, 0, 0);
							}
							iLocal_110 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				if (!iLocal_83)
				{
					if (unk_0x10E54C268D1B3FED(iLocal_71, unk_0xA19140A5C42D8715(), 3f, 3f, 3f, 0, 1, 0))
					{
						if (!func_54())
						{
							if (func_1(&uLocal_161, cLocal_146, "REHH2_INA", 4, 0, 0, 0))
							{
								iLocal_83 = 1;
							}
						}
					}
				}
				if (func_117())
				{
					unk_0x639C59ACAF6EEC64(iLocal_71, 1f);
					if (unk_0x5D7DFE2058701942(iLocal_71, 0))
					{
						unk_0x53FF9BDD8529ACD2(iLocal_71);
						iLocal_89 = 1;
						iLocal_57 = 3;
					}
					else if (timera() > 60000)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH2_SLW", 4, 0, 0, 0))
						{
							func_53();
						}
					}
				}
				else
				{
					unk_0xF8136E11BE4BEAC3(iLocal_71);
					unk_0x2F89329397A277BC(&iLocal_75);
					unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 2052, 2);
					unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
					unk_0x301F42EEE3C40328(iLocal_75);
					unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
					unk_0x3A95A0A3221D4208(&iLocal_75);
					iLocal_108 = 4;
				}
				if (func_172(iLocal_71, unk_0xA19140A5C42D8715()) > 100f)
				{
					func_53();
				}
			}
			break;
	}
}

void func_175()
{
	int iVar0;
	
	switch (iLocal_108)
	{
		case 0:
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				if (func_172(unk_0xA19140A5C42D8715(), iLocal_71) < 12f || (unk_0x0099F119B7ADB4B3(unk_0xD4E735F4B6A956AC()) && func_172(unk_0xA19140A5C42D8715(), iLocal_71) < 30f))
				{
					unk_0x22DD1D053CFF9707(unk_0xA19140A5C42D8715(), iLocal_71, 5000, 2052, 2);
					if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
					{
						iLocal_73 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
						if (unk_0x1095F403F52B42E1(iLocal_73, 0))
						{
							unk_0x2F89329397A277BC(&iLocal_75);
							unk_0x22DD1D053CFF9707(0, iLocal_73, 30000, 2054, 2);
							unk_0x3F01127ECD227890(iLocal_71, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
							unk_0x301F42EEE3C40328(iLocal_75);
							unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
							unk_0x3A95A0A3221D4208(&iLocal_75);
						}
						iLocal_108++;
					}
					else if (!iLocal_109)
					{
						unk_0x9568B1B58F78FF36(iLocal_71);
						unk_0x2F89329397A277BC(&iLocal_75);
						unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 2054, 2);
						unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), -1);
						unk_0x301F42EEE3C40328(iLocal_75);
						unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
						unk_0x3A95A0A3221D4208(&iLocal_75);
						if (func_1(&uLocal_161, cLocal_146, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_109 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			if (unk_0xCE3CB618AFE55EFB(iLocal_99))
			{
				unk_0x264E87C905AE790B(iLocal_99, true);
			}
			if (func_117())
			{
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					iLocal_73 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
					if (unk_0xEAA5CEF8875FEEED(iLocal_73) < 10f)
					{
						if (!unk_0x4915F4759304D5CF(iLocal_71))
						{
							if (unk_0xC42DE41AEED00E7B(iLocal_71, unk_0xA19140A5C42D8715(), 150f))
							{
								fLocal_152 = func_137(iLocal_71, unk_0xA19140A5C42D8715(), 1);
								if (fLocal_152 > 5f)
								{
									fLocal_152 = (fLocal_152 - 0.5f);
								}
								else
								{
									fLocal_152 = (fLocal_152 - 0.25f);
								}
								unk_0x2F89329397A277BC(&iLocal_75);
								unk_0x22DD1D053CFF9707(0, iLocal_73, 10000, 2054, 2);
								if (unk_0x588F5E48C78F1C73(iLocal_73, 0, 0))
								{
									unk_0x42501103787BD147(0, iLocal_73, -1, 0, 1f);
								}
								unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), -1);
								unk_0x301F42EEE3C40328(iLocal_75);
								unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
								unk_0x3A95A0A3221D4208(&iLocal_75);
								iLocal_108++;
							}
							else
							{
								unk_0x22DD1D053CFF9707(iLocal_71, iLocal_73, 10000, 2054, 2);
								iLocal_108++;
							}
						}
					}
				}
			}
			else if (!iLocal_109)
			{
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					unk_0x9568B1B58F78FF36(iLocal_71);
					unk_0x2F89329397A277BC(&iLocal_75);
					unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 2054, 2);
					unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), -1);
					unk_0x301F42EEE3C40328(iLocal_75);
					unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
					unk_0x3A95A0A3221D4208(&iLocal_75);
					if (!func_54())
					{
						if (!func_177())
						{
							func_1(&uLocal_161, cLocal_146, "REHH1_VEH", 4, 0, 0, 0);
						}
						else
						{
							func_1(&uLocal_161, cLocal_146, "REHH1_VEH2", 4, 0, 0, 0);
						}
						iLocal_109 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x4915F4759304D5CF(iLocal_71) && unk_0x1095F403F52B42E1(iLocal_73, 0))
			{
				if (unk_0xEAA5CEF8875FEEED(iLocal_73) < 2.5f)
				{
					func_131();
					iLocal_108++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x4915F4759304D5CF(iLocal_71) && unk_0x1095F403F52B42E1(iLocal_73, 0))
			{
				if (unk_0xEAA5CEF8875FEEED(iLocal_73) < 2.5f)
				{
					if (func_1(&uLocal_161, cLocal_146, "REHH1_ASK", 4, 0, 0, 0))
					{
						unk_0x3F29BBC16DCB8A23(iLocal_71);
						settimera(0);
						iLocal_108++;
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				if (unk_0x3D77D31E25961596(iLocal_71))
				{
					unk_0x2F89329397A277BC(&iLocal_75);
					unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 2052, 2);
					unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
					unk_0x301F42EEE3C40328(iLocal_75);
					unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
					unk_0x3A95A0A3221D4208(&iLocal_75);
				}
				if (func_172(iLocal_71, unk_0xA19140A5C42D8715()) < 15f)
				{
					if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
					{
						iLocal_73 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
						if (unk_0x1095F403F52B42E1(iLocal_73, 0))
						{
							if (unk_0xEAA5CEF8875FEEED(iLocal_73) < 2.5f)
							{
								if (!func_54())
								{
									if (func_8() == 0)
									{
										func_1(&uLocal_161, cLocal_146, "REHH1_RPA", 4, 0, 0, 0);
										settimera(0);
										iLocal_108++;
									}
									else if (func_8() == 1)
									{
										func_1(&uLocal_161, cLocal_146, "REHH1_RPB", 4, 0, 0, 0);
										settimera(0);
										iLocal_108++;
									}
									else if (func_8() == 2)
									{
										func_1(&uLocal_161, cLocal_146, "REHH1_RPC", 4, 0, 0, 0);
										settimera(0);
										iLocal_108++;
									}
								}
							}
						}
					}
					else if (!iLocal_109)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_109 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				if (func_172(iLocal_71, unk_0xA19140A5C42D8715()) < 15f)
				{
					if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
					{
						if (func_117())
						{
							if (unk_0x588F5E48C78F1C73(unk_0xC409B91AC4749F88(), 0, 0))
							{
								unk_0x9854E4DB9C72017F(iLocal_71, func_111());
								unk_0xC860991D1C5AD4F0(iLocal_71, 1);
								unk_0x9EA5DDDDB1899B3B(iLocal_71, 0);
								unk_0x22DD1D053CFF9707(iLocal_71, unk_0xA19140A5C42D8715(), 10000, 2052, 2);
								unk_0xA2EBCD9385E56019(iLocal_71, unk_0xC409B91AC4749F88(), -1, 0, 1f, 1, 0);
								iLocal_108++;
							}
							else
							{
								iVar0 = unk_0xB0D49A1F9F054602(unk_0xC409B91AC4749F88(), 0, 0);
								if (unk_0x4915F4759304D5CF(iVar0))
								{
									iLocal_56 = 1;
								}
								else
								{
									unk_0x9568B1B58F78FF36(iLocal_71);
									unk_0x9854E4DB9C72017F(iLocal_71, func_111());
									unk_0xC860991D1C5AD4F0(iLocal_71, 1);
									unk_0x9EA5DDDDB1899B3B(iLocal_71, 1);
									unk_0x22DD1D053CFF9707(iLocal_71, unk_0xA19140A5C42D8715(), 10000, 2052, 2);
									iLocal_108++;
								}
							}
						}
						else if (!iLocal_110)
						{
							if (!func_54())
							{
								if (!func_177())
								{
									func_1(&uLocal_161, cLocal_146, "REHH1_VEH", 4, 0, 0, 0);
								}
								else
								{
									func_1(&uLocal_161, cLocal_146, "REHH1_VEH2", 4, 0, 0, 0);
								}
								iLocal_110 = 1;
							}
						}
					}
					else if (!iLocal_109)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_109 = 1;
						}
					}
				}
			}
			break;
		
		case 6:
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				if (func_117())
				{
					unk_0x639C59ACAF6EEC64(iLocal_71, 1f);
					if (unk_0x5D7DFE2058701942(iLocal_71, 0))
					{
						unk_0x53FF9BDD8529ACD2(iLocal_71);
						iLocal_89 = 1;
						iLocal_57 = 3;
					}
					else if (timera() > 60000)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH1_NOH", 4, 0, 0, 0))
						{
							func_53();
						}
					}
				}
				else
				{
					unk_0xF8136E11BE4BEAC3(iLocal_71);
					unk_0x2F89329397A277BC(&iLocal_75);
					unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 2052, 2);
					unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
					unk_0x301F42EEE3C40328(iLocal_75);
					unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
					unk_0x3A95A0A3221D4208(&iLocal_75);
					iLocal_108 = 5;
				}
				if (func_172(iLocal_71, unk_0xA19140A5C42D8715()) > 100f)
				{
					func_53();
				}
			}
			break;
	}
}

void func_176()
{
	int iVar0;
	
	if ((iLocal_126 - iLocal_125) > 1000)
	{
		iLocal_140 = unk_0xEB67B4270D12F60E(unk_0xE2BBD32891C18569(iLocal_71, false), 18f, 0, 4);
	}
	if (iLocal_140 != 0)
	{
		iLocal_124++;
		iLocal_125 = unk_0xFD34717937104F1C();
		if (unk_0x22C775856F4633CA(0, 100) < 50)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
		if (iLocal_124 > iVar0)
		{
			unk_0x1F7948851FB36E88(iLocal_140, true, 0);
			if (unk_0x1095F403F52B42E1(iLocal_140, 0))
			{
				if (!unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_140, 0))
				{
					if (iLocal_58 == 1)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH1_STO", 4, 0, 0, 0))
						{
							if (!unk_0x4915F4759304D5CF(iLocal_71))
							{
								unk_0x22DD1D053CFF9707(iLocal_71, iLocal_140, 3000, 2052, 2);
							}
						}
						iLocal_150 = unk_0xFD34717937104F1C();
						iLocal_124 = 0;
					}
					else if (iLocal_58 == 2)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH2_STO", 4, 0, 0, 0))
						{
							if (!unk_0x4915F4759304D5CF(iLocal_71))
							{
								unk_0x22DD1D053CFF9707(iLocal_71, iLocal_140, 3000, 2052, 2);
							}
						}
						iLocal_150 = unk_0xFD34717937104F1C();
						iLocal_124 = 0;
					}
					else if (iLocal_58 == 3)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH3_STO", 4, 0, 0, 0))
						{
							if (!unk_0x4915F4759304D5CF(iLocal_71))
							{
								unk_0x22DD1D053CFF9707(iLocal_71, iLocal_140, 3000, 2052, 2);
							}
						}
						iLocal_150 = unk_0xFD34717937104F1C();
						iLocal_124 = 0;
					}
					else if (iLocal_58 == 5)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH5_STO", 4, 0, 0, 0))
						{
							if (!unk_0x4915F4759304D5CF(iLocal_71))
							{
								unk_0x22DD1D053CFF9707(iLocal_71, iLocal_140, 3000, 2052, 2);
							}
						}
						iLocal_150 = unk_0xFD34717937104F1C();
						iLocal_124 = 0;
					}
				}
			}
		}
		else
		{
			iLocal_151 = unk_0xFD34717937104F1C();
			if ((iLocal_151 - iLocal_150) > 3500)
			{
				unk_0x792676988A48387F(&iLocal_140);
			}
			iLocal_140 = 0;
		}
	}
}

int func_177()
{
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
	{
		if (unk_0x1095F403F52B42E1(unk_0xD1A189C6C27EE0CA(unk_0xA19140A5C42D8715()), 1))
		{
			if ((unk_0x1F41816F62350826(unk_0x8F474E419F56E48D(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 1))) || unk_0x8CE5E4632E631B03(unk_0x8F474E419F56E48D(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 1)))) || unk_0x34F956CD0E52746F(unk_0x8F474E419F56E48D(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_178()
{
	if (iLocal_58 == 1)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_71))
		{
			if (!unk_0x7112137033807390(iLocal_71, 0))
			{
				if ((unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -3024.265f, 660.8264f, 1.1982f, -3140.823f, 803.707f, 35.131f, 93f, 0, true, 0) && !unk_0xCDDABFAF231CF3DD(iLocal_71)) || func_172(unk_0xA19140A5C42D8715(), iLocal_71) < 12f)
				{
					func_179();
					iLocal_57 = 2;
				}
			}
		}
	}
	else if (iLocal_58 == 2)
	{
		if (!iLocal_135)
		{
			if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_76, 100f, 100f, 100f, false, true, 0) && !unk_0x4915F4759304D5CF(iLocal_71))
			{
				unk_0x2F89329397A277BC(&iLocal_75);
				unk_0x956B3CF461C0C1C9(0, 178.993f, 4413.097f, 73.6132f, 1f, -1, 0.25f, 1, 1193033728);
				unk_0x956B3CF461C0C1C9(0, 159.6669f, 4413.197f, 74.8915f, 1f, -1, 0.25f, 1, 1193033728);
				unk_0x956B3CF461C0C1C9(0, 142.7866f, 4415.111f, 74.3799f, 1f, -1, 0.25f, 1, 1193033728);
				unk_0x301F42EEE3C40328(iLocal_75);
				unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
				unk_0x3A95A0A3221D4208(&iLocal_75);
				iLocal_135 = 1;
			}
		}
	}
	else if (iLocal_58 == 5)
	{
		if (!iLocal_135)
		{
			if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_76, 200f, 200f, 200f, false, true, 0) && !unk_0x4915F4759304D5CF(iLocal_71))
			{
				unk_0x2F89329397A277BC(&iLocal_75);
				unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 2052, 3);
				unk_0x3F01127ECD227890(0, "random@hitch_lift", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 49, 0, 0, 0, 0);
				unk_0x956B3CF461C0C1C9(0, -337.3163f, 2828.018f, 55.2198f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x956B3CF461C0C1C9(0, -343.4485f, 2826.222f, 54.5089f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x956B3CF461C0C1C9(0, -356.4033f, 2811.062f, 51.5931f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x956B3CF461C0C1C9(0, -365.6846f, 2809.158f, 48.7646f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x956B3CF461C0C1C9(0, -382.4106f, 2818.384f, 44.078f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x956B3CF461C0C1C9(0, -370.3838f, 2866.677f, 41.0979f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x3F01127ECD227890(0, "random@hitch_lift", "carjack_mainloop_female", 2f, -2f, -1, 33, 0, 0, 0, 0);
				unk_0x301F42EEE3C40328(iLocal_75);
				unk_0xE1072FA2FECBAD96(iLocal_71, iLocal_75);
				unk_0x3A95A0A3221D4208(&iLocal_75);
				iLocal_135 = 1;
			}
		}
	}
	if (iLocal_58 != 1)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_71))
		{
			if (!unk_0x7112137033807390(iLocal_71, 0))
			{
				if ((unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_71, 95f, 95f, 50f, 0, 1, 0) && !unk_0xCDDABFAF231CF3DD(iLocal_71)) || func_172(unk_0xA19140A5C42D8715(), iLocal_71) < 12f)
				{
					func_179();
					iLocal_57 = 2;
				}
			}
		}
	}
}

void func_179()
{
	if (unk_0xCE3CB618AFE55EFB(iLocal_98))
	{
		unk_0xE1623437A3194332(&iLocal_98);
	}
	if (!unk_0x4915F4759304D5CF(iLocal_71))
	{
		if (!unk_0xCE3CB618AFE55EFB(iLocal_99))
		{
			if (!unk_0x7112137033807390(iLocal_71, 0))
			{
				iLocal_99 = func_63(iLocal_71, 0, 145);
				unk_0x264E87C905AE790B(iLocal_99, false);
			}
		}
		if (!func_212())
		{
			func_187(1);
		}
		func_148(&uLocal_161, 3, iLocal_71, sLocal_147, 0, 1);
	}
	if (func_8() == 0)
	{
		func_148(&uLocal_161, 0, unk_0xA19140A5C42D8715(), "MICHAEL", 0, 1);
	}
	else if (func_8() == 1)
	{
		func_148(&uLocal_161, 1, unk_0xA19140A5C42D8715(), "FRANKLIN", 0, 1);
	}
	else if (func_8() == 2)
	{
		func_148(&uLocal_161, 2, unk_0xA19140A5C42D8715(), "TREVOR", 0, 1);
	}
}

void func_180()
{
	func_182(39, 1);
	func_182(40, 1);
	func_182(41, 1);
	func_182(42, 1);
	func_182(43, 1);
	func_182(44, 1);
	iLocal_71 = unk_0x35C6E06B120EB2E3(26, iLocal_80, vLocal_76, fLocal_78, 1, true);
	unk_0xA5DE74AE39867B03(iLocal_80);
	unk_0x1F4E5EFBFE503FB3(iLocal_71, true);
	unk_0x96BFF0680C7B6FD5(iLocal_71, false);
	unk_0x4FE3554969185993(iLocal_71, sLocal_149);
	unk_0x13E0A8160525AE55(iLocal_71, 137, true);
	unk_0x13E0A8160525AE55(iLocal_71, 206, true);
	unk_0xC2C4AE9DB4A0BEF3(iLocal_71, 1024, true);
	unk_0xC2C4AE9DB4A0BEF3(iLocal_71, 65536, true);
	unk_0xC2C4AE9DB4A0BEF3(iLocal_71, 2, false);
	unk_0x3B7A32E04BBE59A5(iLocal_71, 17, true);
	unk_0x28D7247C81523375(iLocal_71, 60f);
	unk_0x82416ADE738F7F1F(iLocal_71, 5f);
	if (iLocal_58 == 1)
	{
		unk_0x72A0FF8C49CFFC0D(iLocal_71, 0, 0, 1, 0);
		unk_0x72A0FF8C49CFFC0D(iLocal_71, 2, 1, 2, 0);
		unk_0x72A0FF8C49CFFC0D(iLocal_71, 3, 0, 2, 0);
		unk_0x72A0FF8C49CFFC0D(iLocal_71, 4, 0, 2, 0);
		unk_0xFC00A668AFC2126D(iLocal_82, true);
		iLocal_139 = unk_0x48CFBECB146FD1A1(iLocal_82, -3088.068f, 730.4819f, 20.3028f, 332.2996f, true, true, false);
		unk_0x70B1045E099298C1(iLocal_139, 150f);
		unk_0xD6B4F40F1425E83F(iLocal_139, 4, 0, 0);
		unk_0xF0F3162A538A2D92(iLocal_139, 0);
		unk_0xA5DE74AE39867B03(iLocal_82);
		unk_0x3F01127ECD227890(iLocal_71, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
	}
	else if (iLocal_58 == 2)
	{
		unk_0x72A0FF8C49CFFC0D(iLocal_71, 0, 0, 1, 0);
		unk_0x72A0FF8C49CFFC0D(iLocal_71, 2, 0, 1, 0);
		unk_0x72A0FF8C49CFFC0D(iLocal_71, 3, 0, 0, 0);
		unk_0x72A0FF8C49CFFC0D(iLocal_71, 4, 0, 1, 0);
		unk_0x72A0FF8C49CFFC0D(iLocal_71, 8, 1, 0, 0);
		unk_0x72A0FF8C49CFFC0D(iLocal_71, 10, 0, 0, 0);
		unk_0x3F01127ECD227890(iLocal_71, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
		unk_0xF66A39BBE7B3C278(vLocal_77 - Vector(20f, 50f, 50f), vLocal_77 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
		func_181(1);
	}
	else if (iLocal_58 == 3)
	{
		unk_0x72A0FF8C49CFFC0D(iLocal_71, 0, 0, 0, 0);
		unk_0x72A0FF8C49CFFC0D(iLocal_71, 2, 1, 0, 0);
		unk_0x72A0FF8C49CFFC0D(iLocal_71, 3, 0, 0, 0);
		unk_0x72A0FF8C49CFFC0D(iLocal_71, 4, 1, 0, 0);
		unk_0x72A0FF8C49CFFC0D(iLocal_71, 8, 0, 0, 0);
		unk_0x3F01127ECD227890(iLocal_71, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
		unk_0xF66A39BBE7B3C278(vLocal_77 - Vector(20f, 50f, 50f), vLocal_77 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	}
	else if (iLocal_58 == 5)
	{
	}
	iLocal_57 = 1;
}

void func_181(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_105126, unk_0x61D2332983ACC05C(), 24);
		Global_105120 = 1;
	}
	else
	{
		StringCopy(&Global_105126, "NULL", 24);
		Global_105120 = 0;
	}
}

void func_182(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_186(iParam0, 2, 1))
		{
			func_185(iParam0, 2, 1);
		}
	}
	else if (func_186(iParam0, 2, 1))
	{
		func_183(iParam0, 2, 1);
	}
}

void func_183(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xFA57C719261AA55D(&(Global_93284.f_1336[iParam0]), iParam1);
	}
	else if (unk_0x4C9BACA8D249CB13())
	{
		if (func_26() == 0)
		{
			iVar0 = func_45(func_184(iParam0), -1, 0);
			unk_0xFA57C719261AA55D(&iVar0, iParam1);
			func_43(func_184(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_106070.f_668[iParam0]), iParam1);
	}
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 8488;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		default:
			break;
	}
	return 9954;
}

void func_185(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x2BCFB39E86340DAA(&(Global_93284.f_1336[iParam0]), iParam1);
	}
	else if (unk_0x4C9BACA8D249CB13())
	{
		if (func_26() == 0)
		{
			iVar0 = func_45(func_184(iParam0), -1, 0);
			unk_0x2BCFB39E86340DAA(&iVar0, iParam1);
			func_43(func_184(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x2BCFB39E86340DAA(&(Global_106070.f_668[iParam0]), iParam1);
	}
}

int func_186(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0x05EFB6A616B6FADE(Global_93284.f_1336[iParam0], iParam1);
	}
	else if (unk_0x4C9BACA8D249CB13())
	{
		if (func_26() == 0)
		{
			return unk_0x05EFB6A616B6FADE(func_45(func_184(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x05EFB6A616B6FADE(Global_106070.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_187(int iParam0)
{
	if (func_190())
	{
		Global_106060 = 1;
		Global_106057 = unk_0xFD34717937104F1C();
		if (func_31(Global_106059))
		{
			func_188(0);
		}
		unk_0x9E212A43A08FF3F9(1, "RE_TITLE");
		if (iParam0 && func_31(Global_106059))
		{
			unk_0xE134853379787E6A();
		}
		return 1;
	}
	return 0;
}

void func_188(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_106070.f_24967.f_2 < 3)
			{
				if (!unk_0x90A6E668DB47D464())
				{
					func_169(func_189(iParam0), -1);
					Global_106070.f_24967.f_2++;
					unk_0x2BCFB39E86340DAA(&Global_106066, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x05EFB6A616B6FADE(Global_106066, 1))
			{
				if (!unk_0x90A6E668DB47D464())
				{
					func_169(func_189(iParam0), -1);
					Global_106070.f_24967.f_3++;
					unk_0x2BCFB39E86340DAA(&Global_106066, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x05EFB6A616B6FADE(Global_106066, 2))
			{
				if (!unk_0x90A6E668DB47D464())
				{
					func_169(func_189(iParam0), -1);
					Global_106070.f_24967.f_4++;
					unk_0x2BCFB39E86340DAA(&Global_106066, 2);
				}
			}
			break;
	}
}

char* func_189(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_190()
{
	switch (func_191(&Global_25518, 0, 5, 0, unk_0xFCB3E4B16B4A9EC1()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_191(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_195(0))
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
		if (!func_193(iParam2))
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
			func_192(uParam0, iParam4);
		}
	}
	return 2;
}

void func_192(var uParam0, int iParam1)
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

bool func_193(int iParam0)
{
	return func_194(iParam0, Global_36117);
}

int func_194(int iParam0, int iParam1)
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

int func_195(int iParam0)
{
	if (Global_36117 == 15)
	{
		return 0;
	}
	if (func_193(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_196()
{
	if (unk_0x122A8778D4027A82(unk_0xD4E735F4B6A956AC(), 0))
	{
		return 1;
	}
	if (!unk_0x7112137033807390(iLocal_71, 0))
	{
		if (unk_0xDEAEC99031DCB92A(iLocal_71, unk_0xA19140A5C42D8715(), 1))
		{
			return 1;
		}
		if (!unk_0x7112137033807390(unk_0xC409B91AC4749F88(), 0))
		{
			if (unk_0xDEAEC99031DCB92A(iLocal_71, unk_0xC409B91AC4749F88(), 1))
			{
				return 1;
			}
		}
		if (!bLocal_92)
		{
			if (unk_0x9809FE4B550B1EFE(unk_0xE2BBD32891C18569(iLocal_71, true), 10f, 1) || unk_0x0AF5F990243ADDFB(unk_0xE2BBD32891C18569(iLocal_71, true) - Vector(10f, 10f, 10f), unk_0xE2BBD32891C18569(iLocal_71, true) + Vector(10f, 10f, 10f), 0))
			{
				return 1;
			}
		}
		else if (unk_0x4915F4759304D5CF(iLocal_72) && unk_0xDC5D81351D6A4DDB(iLocal_72))
		{
			if (unk_0xDEAEC99031DCB92A(iLocal_72, unk_0xA19140A5C42D8715(), 1) && unk_0x852B8F739A2072BE(unk_0xA19140A5C42D8715(), 7))
			{
				if (!unk_0x4915F4759304D5CF(iLocal_71))
				{
					unk_0x5999C3F8663B8F28(iLocal_71, 6, 0f, 0);
				}
				return 1;
			}
		}
		if ((!unk_0x749F5228DEB730FF(iLocal_71) && unk_0xC42DE41AEED00E7B(iLocal_71, unk_0xA19140A5C42D8715(), 90f)) && unk_0x10E54C268D1B3FED(iLocal_71, unk_0xA19140A5C42D8715(), 50f, 50f, 50f, 0, 1, 0))
		{
			if (unk_0x7591AFB11E7EDDA0(unk_0xD4E735F4B6A956AC(), iLocal_71) || unk_0x669ABFB25D991447(unk_0xD4E735F4B6A956AC(), iLocal_71))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_197()
{
	unk_0xCACEBBBEAD8F262E(iLocal_80);
	unk_0x6D68030C791111E0("random@hitch_lift");
	if (iLocal_58 == 1 || iLocal_58 == 5)
	{
		unk_0xCACEBBBEAD8F262E(iLocal_82);
	}
	if (iLocal_58 == 1)
	{
		unk_0x789152CB302E8726(0);
		unk_0x61346376C1469A0E("timer", false, -1);
	}
	else if (iLocal_58 == 3)
	{
		unk_0x6D68030C791111E0("facials@gen_female@base");
	}
	if (unk_0x7FC99CCC73354033(iLocal_80) && unk_0x39C2D9AB77873F84("random@hitch_lift"))
	{
		if (iLocal_58 == 1 || iLocal_58 == 5)
		{
			if (unk_0x7FC99CCC73354033(iLocal_82))
			{
				bLocal_59 = true;
			}
		}
		else if (iLocal_58 == 3)
		{
			if (unk_0x39C2D9AB77873F84("facials@gen_female@base"))
			{
				bLocal_59 = true;
			}
		}
		else
		{
			bLocal_59 = true;
		}
	}
	else
	{
		unk_0xCACEBBBEAD8F262E(iLocal_80);
		unk_0x6D68030C791111E0("random@hitch_lift");
		if (iLocal_58 == 1 || iLocal_58 == 5)
		{
			unk_0xCACEBBBEAD8F262E(iLocal_82);
		}
		else if (iLocal_58 == 3)
		{
			unk_0x6D68030C791111E0("facials@gen_female@base");
		}
	}
}

void func_198()
{
	if (iLocal_58 == 1)
	{
		vLocal_76 = { -3086.052f, 735.5091f, 20.4883f };
		fLocal_78 = 17.9234f;
		vLocal_77 = { -1053.344f, -2539.327f, 19.0394f };
		iLocal_80 = joaat("a_m_m_business_01");
		cLocal_146 = "REHH1AU";
		sLocal_147 = "BUSINESSMAN";
		sLocal_149 = "BUSINESSMAN";
		iLocal_82 = joaat("schafter2");
	}
	else if (iLocal_58 == 2)
	{
		vLocal_76 = { 196.7701f, 4427.757f, 72.2673f };
		fLocal_78 = 75.9173f;
		vLocal_77 = { 3328.828f, 5154.456f, 17.2894f };
		iLocal_80 = joaat("a_f_y_hiker_01");
		cLocal_146 = "REHH2AU";
		sLocal_147 = "REHH2Hiker";
		sLocal_149 = "REHH2Hiker";
	}
	else if (iLocal_58 == 3)
	{
		vLocal_76 = { 2745.026f, 4386.827f, 47.8636f };
		fLocal_78 = 19.4143f;
		vLocal_77 = { 814.455f, 1274.797f, 359.5112f };
		vLocal_84 = { 804.2382f, 1269.589f, 359.3557f };
		fLocal_85 = 340.7372f;
		iLocal_80 = joaat("a_f_y_hipster_03");
		iLocal_81 = joaat("s_m_m_security_01");
		cLocal_146 = "REHH3AU";
		sLocal_147 = "REHH3Hipster";
		sLocal_149 = "REHH3Hipster";
		sLocal_148 = "REHH3Security";
	}
	else if (iLocal_58 == 5)
	{
		vLocal_76 = { -324.0379f, 2818.034f, 58.4498f };
		fLocal_78 = 56.5422f;
		vLocal_77 = { -344.0339f, 634.4108f, 171.2902f };
		iLocal_80 = joaat("ig_bride");
		iLocal_81 = joaat("a_m_y_business_01");
		cLocal_146 = "REHH5AU";
		sLocal_147 = "REHH5Bride";
		sLocal_149 = "REHH5Bride";
		sLocal_148 = "REHH5Groom";
		iLocal_82 = joaat("patriot");
	}
	iLocal_60 = 1;
}

int func_199()
{
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vLocal_44) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0x57323E573695B13F(unk_0xA19140A5C42D8715())) > 1369f && !func_210())
		{
			return 0;
		}
	}
	if (func_206())
	{
		return 1;
	}
	if (func_200(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_200(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (func_10(func_8()))
		{
			iVar5 = func_36();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0x05EFB6A616B6FADE(Global_106070.f_18546[iVar1 /*6*/], 2) && !unk_0x05EFB6A616B6FADE(Global_106070.f_18546[iVar1 /*6*/], 3))
				{
					func_201(iVar1, &Var0);
					fVar4 = unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_201(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_202(uParam1, "Abigail1", func_204(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_203(iParam0), 1, 0);
			break;
		
		case 1:
			func_202(uParam1, "Abigail2", func_204(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_203(iParam0), 1, 0);
			break;
		
		case 2:
			func_202(uParam1, "Barry1", func_204(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_203(iParam0), 1, 0);
			break;
		
		case 3:
			func_202(uParam1, "Barry2", func_204(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_203(iParam0), 1, 1);
			break;
		
		case 4:
			func_202(uParam1, "Barry3", func_204(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 5:
			func_202(uParam1, "Barry3A", func_204(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 6:
			func_202(uParam1, "Barry3C", func_204(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 7:
			func_202(uParam1, "Barry4", func_204(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_203(iParam0), 0, 0);
			break;
		
		case 8:
			func_202(uParam1, "Dreyfuss1", func_204(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 9:
			func_202(uParam1, "Epsilon1", func_204(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 10:
			func_202(uParam1, "Epsilon2", func_204(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_203(iParam0), 1, 0);
			break;
		
		case 11:
			func_202(uParam1, "Epsilon3", func_204(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 12:
			func_202(uParam1, "Epsilon4", func_204(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 13:
			func_202(uParam1, "Epsilon5", func_204(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_203(iParam0), 1, 0);
			break;
		
		case 14:
			func_202(uParam1, "Epsilon6", func_204(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 15:
			func_202(uParam1, "Epsilon7", func_204(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 16:
			func_202(uParam1, "Epsilon8", func_204(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_203(iParam0), 1, 0);
			break;
		
		case 17:
			func_202(uParam1, "Extreme1", func_204(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 18:
			func_202(uParam1, "Extreme2", func_204(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 19:
			func_202(uParam1, "Extreme3", func_204(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 20:
			func_202(uParam1, "Extreme4", func_204(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 21:
			func_202(uParam1, "Fanatic1", func_204(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_203(iParam0), 1, 0);
			break;
		
		case 22:
			func_202(uParam1, "Fanatic2", func_204(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_203(iParam0), 1, 0);
			break;
		
		case 23:
			func_202(uParam1, "Fanatic3", func_204(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_203(iParam0), 0, 1);
			break;
		
		case 24:
			func_202(uParam1, "Hao1", func_204(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_203(iParam0), 0, 1);
			break;
		
		case 25:
			func_202(uParam1, "Hunting1", func_204(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 26:
			func_202(uParam1, "Hunting2", func_204(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 27:
			func_202(uParam1, "Josh1", func_204(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_203(iParam0), 1, 0);
			break;
		
		case 28:
			func_202(uParam1, "Josh2", func_204(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_203(iParam0), 1, 1);
			break;
		
		case 29:
			func_202(uParam1, "Josh3", func_204(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_203(iParam0), 1, 1);
			break;
		
		case 30:
			func_202(uParam1, "Josh4", func_204(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_203(iParam0), 1, 0);
			break;
		
		case 31:
			func_202(uParam1, "Maude1", func_204(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 32:
			func_202(uParam1, "Minute1", func_204(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 33:
			func_202(uParam1, "Minute2", func_204(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 34:
			func_202(uParam1, "Minute3", func_204(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 35:
			func_202(uParam1, "MrsPhilips1", func_204(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 36:
			func_202(uParam1, "MrsPhilips2", func_204(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 37:
			func_202(uParam1, "Nigel1", func_204(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_203(iParam0), 1, 0);
			break;
		
		case 38:
			func_202(uParam1, "Nigel1A", func_204(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_203(iParam0), 1, 1);
			break;
		
		case 39:
			func_202(uParam1, "Nigel1B", func_204(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_203(iParam0), 1, 1);
			break;
		
		case 40:
			func_202(uParam1, "Nigel1C", func_204(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_203(iParam0), 1, 1);
			break;
		
		case 41:
			func_202(uParam1, "Nigel1D", func_204(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_203(iParam0), 1, 1);
			break;
		
		case 42:
			func_202(uParam1, "Nigel2", func_204(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_203(iParam0), 1, 1);
			break;
		
		case 43:
			func_202(uParam1, "Nigel3", func_204(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_203(iParam0), 1, 1);
			break;
		
		case 44:
			func_202(uParam1, "Omega1", func_204(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 45:
			func_202(uParam1, "Omega2", func_204(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 46:
			func_202(uParam1, "Paparazzo1", func_204(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 47:
			func_202(uParam1, "Paparazzo2", func_204(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 48:
			func_202(uParam1, "Paparazzo3", func_204(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 49:
			func_202(uParam1, "Paparazzo3A", func_204(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 50:
			func_202(uParam1, "Paparazzo3B", func_204(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 51:
			func_202(uParam1, "Paparazzo4", func_204(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 52:
			func_202(uParam1, "Rampage1", func_204(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 54:
			func_202(uParam1, "Rampage3", func_204(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_203(iParam0), 1, 0);
			break;
		
		case 55:
			func_202(uParam1, "Rampage4", func_204(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_203(iParam0), 1, 0);
			break;
		
		case 56:
			func_202(uParam1, "Rampage5", func_204(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 53:
			func_202(uParam1, "Rampage2", func_204(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_203(iParam0), 1, 0);
			break;
		
		case 57:
			func_202(uParam1, "TheLastOne", func_204(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 58:
			func_202(uParam1, "Tonya1", func_204(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 59:
			func_202(uParam1, "Tonya2", func_204(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 60:
			func_202(uParam1, "Tonya3", func_204(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 61:
			func_202(uParam1, "Tonya4", func_204(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 62:
			func_202(uParam1, "Tonya5", func_204(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_202(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_203(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_204(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_205(iParam0) };
	if (unk_0x429D45A6C6520026(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_205(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_206()
{
	if (func_209() && !func_210())
	{
		return 1;
	}
	if (func_208() && func_207())
	{
		return 1;
	}
	return 0;
}

bool func_207()
{
	return Global_105788 > 0;
}

int func_208()
{
	if (Global_90249 != -1)
	{
		return 1;
	}
	return 0;
}

int func_209()
{
	if (Global_90249 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_84115[Global_90249 /*34*/].f_15, 20);
	}
	return 0;
}

int func_210()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		if (unk_0x9E14E7823B1059CE() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_211()
{
	if (!func_193(5))
	{
		return 1;
	}
	if (func_206())
	{
		return 1;
	}
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (vmag2(unk_0x57323E573695B13F(unk_0xA19140A5C42D8715())) > 1369f && !func_210())
		{
			return 0;
		}
	}
	if (func_200(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_212()
{
	if ((Global_106059 == func_40() && unk_0x62558A57CB60EE71()) && Global_106060)
	{
		return 1;
	}
	return 0;
}

void func_213(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_215(iParam0);
	unk_0x7B9D98D1F4280B24(0);
	unk_0x509F44AFDE7B1FCA(1);
	Global_106056 = 0;
	func_214();
}

void func_214()
{
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			unk_0xFC00A668AFC2126D(unk_0x8F474E419F56E48D(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)), true);
		}
		unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 32, false);
	}
}

void func_215(int iParam0)
{
	Global_106059 = iParam0;
}

int func_216(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (!Global_144510)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_40();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_244())
		{
			return 0;
		}
	}
	vLocal_44 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			vVar1 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) };
			if (vmag2(unk_0x57323E573695B13F(unk_0xA19140A5C42D8715())) > 1369f && !func_210())
			{
				return 0;
			}
		}
		if (!Global_106070.f_9057)
		{
			return 0;
		}
		if (func_21(0))
		{
			return 0;
		}
		if (func_206())
		{
			return 0;
		}
		if (func_243())
		{
			return 0;
		}
		if (Global_106059 != -1)
		{
			return 0;
		}
		if (func_10(func_8()))
		{
			if (func_200(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) && !bParam4)
		{
			if ((vVar1.z - vLocal_44.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_242(iParam1))
		{
			return 0;
		}
		if (func_10(func_8()))
		{
			if (func_241(func_8()) == 4 || func_241(func_8()) == 5)
			{
				return 0;
			}
		}
		if (func_10(func_8()))
		{
			if (!func_240(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_239(Global_106070.f_24967.f_43[iParam1]))
		{
			return 0;
		}
		if ((unk_0xFD34717937104F1C() - Global_106061) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_238())
		{
			return 0;
		}
		if (unk_0x356461BAB19FFA77())
		{
			return 0;
		}
		if (unk_0x62558A57CB60EE71())
		{
			return 0;
		}
		if (!func_229(4))
		{
			return 0;
		}
		if (!func_193(5))
		{
			return 0;
		}
		if (func_228(iParam1, iParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (unk_0x893915B076B1DDF7(unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715())))
		{
			if ((unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) == unk_0x988A25F5907E93F0(377.153f, -717.567f, 10.0536f) || unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) == unk_0x988A25F5907E93F0(320.9934f, 265.2515f, 82.1221f)) || unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) == unk_0x988A25F5907E93F0(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_228(0, 0))
		{
			return 0;
		}
		if (Global_25605)
		{
			return 0;
		}
		if (func_242(30) && !func_228(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_10(func_8()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_106070.f_2355.f_539.f_2280[iVar2 /*3*/] };
				iVar4 = Global_106070.f_2355.f_539.f_2276[iVar2];
				if (func_227(iVar4))
				{
					if (func_218(iVar2))
					{
						if (!func_217(vVar3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), false), vVar3) < (210f * 210f))
							{
								if (func_8() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_217(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_218(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_106070.f_2355.f_539.f_2276[iParam0];
	return func_219(iVar0);
}

int func_219(int iParam0)
{
	return func_220(iParam0, 1);
}

int func_220(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_227(iParam0))
	{
		return 0;
	}
	func_221(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_221(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_222(func_156(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_222(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_226(iParam0, iParam1))
	{
		iVar0 = func_163(iParam1);
		iVar1 = func_161(iParam0);
		iVar2 = (func_161(iParam0) - func_161(iParam1));
		iVar3 = (func_163(iParam0) - func_163(iParam1));
		iVar4 = (func_225(iParam0) - func_225(iParam1));
		iVar5 = (func_154(iParam0) - func_154(iParam1));
		iVar6 = (func_155(iParam0) - func_155(iParam1));
		iVar7 = (func_224(iParam0) - func_224(iParam1));
	}
	else
	{
		iVar0 = func_163(iParam0);
		iVar1 = func_161(iParam1);
		iVar2 = (func_161(iParam1) - func_161(iParam0));
		iVar3 = (func_163(iParam1) - func_163(iParam0));
		iVar4 = (func_225(iParam1) - func_225(iParam0));
		iVar5 = (func_154(iParam1) - func_154(iParam0));
		iVar6 = (func_155(iParam1) - func_155(iParam0));
		iVar7 = (func_224(iParam1) - func_224(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_160(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_223(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_223(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_224(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_225(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_226(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_227(iParam1) || !func_227(iParam0))
	{
		return 1;
	}
	iVar0 = func_161(iParam0);
	iVar1 = func_161(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_163(iParam0);
	iVar1 = func_163(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_225(iParam0);
	iVar1 = func_225(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_154(iParam0);
	iVar1 = func_154(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_155(iParam0);
	iVar1 = func_155(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_224(iParam0);
	iVar1 = func_224(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_227(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_224(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_155(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_154(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_161(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_163(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_225(iParam0);
	if (iVar5 < 1 || iVar5 > func_160(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_228(int iParam0, int iParam1)
{
	if (unk_0x05EFB6A616B6FADE(Global_106070.f_24967.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_229(int iParam0)
{
	int iVar0;
	
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
		{
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				iVar0 = func_8();
				if (!func_10(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC()) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x3D77D31E25961596(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0)) || func_237()) || Global_105117) || Global_25461) || func_236()) || func_15(8, -1)) || func_235()) || func_234()) || func_233()) || func_232()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1) || func_237()) || Global_25461) || func_236()) || func_15(8, -1)) || func_233()) || func_235()) || func_234()) || func_232()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC()) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x3D77D31E25961596(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0)) || func_237()) || Global_105117) || Global_25461) || func_236()) || func_15(8, -1)) || func_233()) || func_235()) || func_234()) || func_232()) || Global_106070.f_7660.f_919[iVar0] == 5) || Global_36664 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715()) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0)) || func_237()) || Global_105117) || Global_25461) || func_236()) || func_15(8, -1)) || func_235()) || func_234()) || func_232()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_237() || unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0) || func_15(8, -1)) || func_232()) || func_231()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_15(8, -1) || func_235()) || func_234()) || func_231()) || func_230())
						{
							return 0;
						}
						if ((unk_0x47C3DC461C758C29() && unk_0xF6F3AB25005ED460() != 3) && unk_0x84C1DECF60EFBBD7() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
						{
							if ((((((((((((((unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0) || unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || func_237()) || Global_25461) || func_236()) || func_15(8, -1)) || func_234()) || func_233()) || func_232()) || Global_106070.f_7660.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0) || !unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC())) || !unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC())) || !unk_0x3A83743561B4F70C()) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || func_237()) || func_234()) || Global_105117) || Global_25461) || func_236()) || Global_37271) || func_15(8, -1)) || func_233()) || func_231()) || func_232()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0) || !unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC())) || !unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC())) || !unk_0x3A83743561B4F70C()) || unk_0x122A8778D4027A82(unk_0xD4E735F4B6A956AC(), 0)) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1)) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0x443A3698D0CD9D06(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || func_237()) || Global_105117) || Global_25461) || func_236()) || func_15(8, -1)) || func_233()) || func_231()) || func_235()) || func_234()) || func_232())
						{
							return 0;
						}
						break;
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
	else
	{
		return 0;
	}
	return 1;
}

var func_230()
{
	return Global_93271.f_1;
}

int func_231()
{
	if (Global_90249 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_84115[Global_90249 /*34*/].f_15, 13);
	}
	return 0;
}

int func_232()
{
	if (unk_0x8B1574454E8C2421(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_233()
{
	if (Global_71465)
	{
		return 1;
	}
	else if (Global_56175 && !Global_56181)
	{
		return 1;
	}
	return 0;
}

bool func_234()
{
	return Global_93284.f_328 > 0;
}

bool func_235()
{
	return Global_93284.f_327 > 0;
}

var func_236()
{
	return Global_1312857;
}

int func_237()
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		return Global_90805.f_44 == 1;
	}
	return 0;
}

int func_238()
{
	func_7();
	if (Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_239(int iParam0)
{
	return func_226(func_156(), iParam0);
}

int func_240(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_8();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
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
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_241(int iParam0)
{
	if (!func_10(iParam0))
	{
		return 7;
	}
	return Global_106070.f_7660.f_919[iParam0];
}

bool func_242(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_244())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x05EFB6A616B6FADE(Global_106070.f_24967, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x05EFB6A616B6FADE(Global_106070.f_24967.f_1, iVar0);
	}
	return bVar1;
}

int func_243()
{
	int iVar0;
	
	if (Global_25609)
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
			if (unk_0x1095F403F52B42E1(iVar0, 0))
			{
				if (!unk_0x4915F4759304D5CF(unk_0xB0D49A1F9F054602(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_244()
{
	int iVar0;
	
	if (unk_0xC29B8FF8374918FD())
	{
		if (unk_0x0A68AE586CCE49F6())
		{
			if (unk_0x3750826756EA2005())
			{
				unk_0x2AD48F3CEBA882E9(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0x2BCFB39E86340DAA(&iVar0, 2);
				unk_0x2BCFB39E86340DAA(&iVar0, 4);
				unk_0x2BCFB39E86340DAA(&iVar0, 6);
				unk_0x2BCFB39E86340DAA(&Global_25, 2);
				unk_0x2BCFB39E86340DAA(&Global_25, 4);
				unk_0x2BCFB39E86340DAA(&Global_25, 6);
				unk_0x93180BE33E7149EF(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x63141F5FDACF3D9B())
				{
					iVar0 = unk_0x3278E95F94254201(866);
					unk_0x2BCFB39E86340DAA(&iVar0, 0);
					unk_0xF8B43D25409B2964(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_144765 == 2)
	{
		return 1;
	}
	else if (Global_144765 == 3)
	{
		return 0;
	}
	if (unk_0x63141F5FDACF3D9B())
	{
		if (unk_0x05EFB6A616B6FADE(unk_0x3278E95F94254201(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_245()
{
	if (iLocal_111)
	{
		func_266(0);
		if (Global_25698)
		{
			unk_0x9444470D6D9ADB88("AC_STOP");
		}
		func_265();
		unk_0x4004C3CB2300135E();
		func_181(0);
		if (unk_0xECD112E8A7AB2E8A())
		{
			unk_0xEB60EF2E9051E817(0);
		}
		if (unk_0x22E3636CED9CA800())
		{
			unk_0x36BD3660262D3EBA(0);
		}
		Global_25795[0 /*7*/].f_6 = 0;
		func_257(0, 1, 1, 0, 0);
		func_55();
		if (unk_0xDC5D81351D6A4DDB(iLocal_71))
		{
			if (!unk_0x4915F4759304D5CF(iLocal_71))
			{
				unk_0x13E0A8160525AE55(iLocal_71, 317, true);
				if (!unk_0x5D7DFE2058701942(iLocal_71, 0))
				{
					unk_0xDFF3E4D2D9D51DAE(iLocal_71);
				}
				if (iLocal_58 != 2)
				{
					unk_0x3F29BBC16DCB8A23(iLocal_71);
				}
				if (unk_0xF9D4EF1338E38AFB(iLocal_71, 1805844857) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_71, 1805844857) != 0)
				{
					unk_0x1F4E5EFBFE503FB3(iLocal_71, false);
				}
				unk_0x96BFF0680C7B6FD5(iLocal_71, true);
				if (unk_0x749F5228DEB730FF(iLocal_71))
				{
					unk_0xF8136E11BE4BEAC3(iLocal_71);
				}
			}
		}
		if (unk_0xDC5D81351D6A4DDB(iLocal_72))
		{
			if (!unk_0x4915F4759304D5CF(iLocal_72))
			{
				if (!unk_0x8B9D3A1A7C2D3C6B(iLocal_72))
				{
					unk_0x1F4E5EFBFE503FB3(iLocal_72, false);
				}
			}
		}
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			if (!unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
			{
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
			}
		}
	}
	unk_0x2220B21A4CC075AC();
	if (func_212())
	{
		if (unk_0x37A8EF89184DBA23(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
		{
			unk_0x7954F628CA598930(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 0, 0f, 0);
		}
		if (unk_0x37A8EF89184DBA23(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
		{
			unk_0x7954F628CA598930(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 0, 0f, 0);
		}
	}
	func_246(-1);
	unk_0x8F1A9FE6D91AAFEB();
}

void func_246(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_212())
	{
		func_250(iParam0);
		unk_0x9E212A43A08FF3F9(0, 0);
		Global_106061 = unk_0xFD34717937104F1C();
		func_249(30000);
		StringCopy(&cVar0, func_248(Global_106059, 1), 64);
		if (func_39(Global_106059) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_106058, 64);
		}
		unk_0xAC757D2BA72C24C9(&cVar0, Global_106056, (unk_0xFD34717937104F1C() - Global_106057), 0);
	}
	else if (unk_0x05EFB6A616B6FADE(Global_106066, 0) && Global_106070.f_24967.f_2 < 3)
	{
		unk_0xFA57C719261AA55D(&Global_106066, 0);
	}
	func_247(&Global_25518);
	Global_106060 = 0;
	func_215(-1);
}

void func_247(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_36079)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_36078 = 0;
	Global_36080 = 0;
	Global_36117 = 15;
	Global_56178 = 0;
	Global_56179 = 0;
}

char* func_248(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_249(int iParam0)
{
	Global_36668 = (unk_0xFD34717937104F1C() + iParam0);
}

void func_250(int iParam0)
{
	func_251(iParam0, 0, func_256(iParam0));
}

void func_251(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_156();
	func_254(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_253(iParam0, &uVar0);
	Var1 = { func_252(&uVar0) };
}

struct<16> func_252(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_154(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_155(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_224(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_225(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_163(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_161(*uParam0), 64);
	return Var0;
}

void func_253(int iParam0, var uParam1)
{
	Global_106070.f_24967.f_43[iParam0] = *uParam1;
}

void func_254(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_161(*uParam0);
	iVar1 = func_163(*uParam0);
	iVar2 = func_225(*uParam0);
	iVar3 = func_154(*uParam0);
	iVar4 = func_155(*uParam0);
	iVar5 = func_224(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_160(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_160(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_255(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_255(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_166(uParam0, iParam1);
	func_165(uParam0, iParam2);
	func_164(uParam0, iParam3);
	func_158(uParam0, iParam5);
	func_159(uParam0, iParam4);
	func_157(uParam0, iParam6);
}

int func_256(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_257(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		unk_0xC97ACA9456A064F3(unk_0xD4E735F4B6A956AC());
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 1);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 1);
		func_264(1);
		unk_0x158181F81A221D70();
		unk_0xD8EA6395AE60BF4A();
		if (Global_14513.f_1 > 3)
		{
			if (unk_0xB39808C1DCE0DCFA())
			{
				unk_0xA8B97F91CBDE376C(false);
			}
			if (!func_5())
			{
				Global_14513.f_1 = 3;
			}
			Global_15822 = 5;
		}
		func_263(1, iParam3, iParam2, 0);
		Global_56187 = 1;
		Global_68497 = 1;
		Global_71203 = 1;
	}
	else
	{
		func_264(0);
		unk_0x21727E2C492FE1B3();
		Global_56187 = 0;
		if (bParam1)
		{
			unk_0x1A81FD78261DCFCD();
		}
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 0);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 0);
		func_263(0, iParam3, iParam2, 0);
		if (unk_0x4C9BACA8D249CB13())
		{
			if ((((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_261(unk_0xD4E735F4B6A956AC())) && !func_259(unk_0xD4E735F4B6A956AC(), 0)) && !func_258()) && !bParam4)
			{
				unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), false);
			}
		}
		else if ((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_261(unk_0xD4E735F4B6A956AC())) && !bParam4)
		{
			unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), false);
		}
		Global_71203 = 0;
	}
}

bool func_258()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 14);
}

bool func_259(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_260(-1, 0) == 8;
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

int func_260(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
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

int func_261(int iParam0)
{
	if (func_259(iParam0, 0))
	{
		return 1;
	}
	if (func_262())
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

bool func_262()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

int func_263(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_264(int iParam0)
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

void func_265()
{
	Global_25694 = 0;
	Global_25695 = 0;
	Global_25697 = 0;
	Global_25698 = 0;
	Global_25699 = 0;
}

void func_266(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		func_182(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_267()
{
	float fVar0;
	
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		fVar0 = unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vLocal_64, true);
		iLocal_63 = 1;
		if (unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vLocal_65, true) < fVar0)
		{
			fVar0 = unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vLocal_65, true);
			iLocal_63 = 2;
		}
		if (unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vLocal_66, true) < fVar0)
		{
			fVar0 = unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vLocal_66, true);
			iLocal_63 = 3;
		}
		if (unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vLocal_67, true) < fVar0)
		{
			fVar0 = unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vLocal_67, true);
			iLocal_63 = 5;
		}
		if (iLocal_63 == 1)
		{
			iLocal_68 = 1;
			iLocal_58 = 1;
			return vLocal_64;
		}
		else if (iLocal_63 == 2)
		{
			iLocal_68 = 2;
			iLocal_58 = 2;
			return vLocal_65;
		}
		else if (iLocal_63 == 3)
		{
			iLocal_68 = 3;
			iLocal_58 = 3;
			return vLocal_66;
		}
		else if (iLocal_63 == 5)
		{
			iLocal_68 = 4;
			iLocal_58 = 5;
			return vLocal_67;
		}
	}
	return 0f, 0f, 0f;
}

