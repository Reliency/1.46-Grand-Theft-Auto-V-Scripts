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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	vector3 vLocal_51[16] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_52[16] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_53 = { 0f, 0f, 0f };
	vector3 vLocal_54 = { 0f, 0f, 0f };
	vector3 vLocal_55 = { 0f, 0f, 0f };
	vector3 vLocal_56 = { 0f, 0f, 0f };
	float fLocal_57 = 0f;
	vector3 vLocal_58 = { 0f, 0f, 0f };
	vector3 vLocal_59 = { 0f, 0f, 0f };
	float fLocal_60 = 0f;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	vector3 vLocal_62 = { 0f, 0f, 0f };
	float fLocal_63 = 0f;
	vector3 vLocal_64 = { 0f, 0f, 0f };
	vector3 vLocal_65 = { 0f, 0f, 0f };
	float fLocal_66 = 0f;
	vector3 vLocal_67 = { 0f, 0f, 0f };
	vector3 vLocal_68 = { 0f, 0f, 0f };
	float fLocal_69 = 0f;
	vector3 vLocal_70 = { 0f, 0f, 0f };
	vector3 vLocal_71 = { 0f, 0f, 0f };
	float fLocal_72 = 0f;
	vector3 vLocal_73 = { 0f, 0f, 0f };
	vector3 vLocal_74 = { 0f, 0f, 0f };
	float fLocal_75 = 0f;
	bool bLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
	bool bLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	bool bLocal_84 = 0;
	int iLocal_85 = 0;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	var uLocal_97[2] = { 0, 0 };
	int iLocal_98[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102[4] = { 0, 0, 0, 0 };
	int iLocal_103[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_104 = 0;
	var uLocal_105[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
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
	var uLocal_132 = 8;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 4;
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
	var uLocal_151 = 4;
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
	var uLocal_166 = 4;
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
	var uLocal_181 = 4;
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
	var uLocal_196 = 4;
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
	var uLocal_211 = 4;
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
	var uLocal_226 = 4;
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
	var uLocal_241 = 4;
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
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	char* sLocal_262 = NULL;
	char* sLocal_263 = NULL;
	char* sLocal_264 = NULL;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	char* sLocal_267 = NULL;
	char* sLocal_268 = NULL;
	char* sLocal_269 = NULL;
	int iLocal_270 = 0;
	var uLocal_271 = 16;
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
	var uLocal_326 = 0;
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
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	int iLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 5;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 5;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	
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
	fLocal_46 = -1f;
	vLocal_53 = { -1109.213f, 4914.744f, 216.101f };
	vLocal_54 = { -1034.6f, 4918.6f, 205.9f };
	vLocal_55 = { -1066.963f, 4873.13f, 207.3281f };
	vLocal_56 = { -1112.946f, 4986.957f, 241.133f };
	fLocal_57 = 72.3125f;
	vLocal_58 = { -1138.386f, 4872.04f, 207.5488f };
	vLocal_59 = { -1091.959f, 4983.27f, 241.1698f };
	fLocal_60 = 57.8125f;
	vLocal_61 = { -1171.648f, 4888.658f, 211.0756f };
	vLocal_62 = { -1137.907f, 4926.572f, 240.999f };
	fLocal_63 = 17.9375f;
	vLocal_64 = { -1177.981f, 4903.231f, 212.477f };
	vLocal_65 = { -1153.398f, 4902.631f, 241.155f };
	fLocal_66 = 17.9375f;
	vLocal_67 = { -1175.693f, 4904.839f, 207.5207f };
	vLocal_68 = { -1142.08f, 4985.32f, 241.2887f };
	fLocal_69 = 36.375f;
	vLocal_70 = { -1106.212f, 4860.086f, 206.1207f };
	vLocal_71 = { -1105.016f, 4873.854f, 241.1453f };
	fLocal_72 = 11.5625f;
	vLocal_73 = { -1044.268f, 4916.587f, 209.8365f };
	vLocal_74 = { -1063.605f, 4972.88f, 241.1299f };
	fLocal_75 = 12.875f;
	iLocal_96 = 4;
	iLocal_261 = "REPLAY_TMG";
	sLocal_262 = "CMN_TDIED";
	if (unk_0x5EBD03AF78E7B4DB(26))
	{
		func_185();
	}
	if (unk_0xB4425D8F229C123D())
	{
		unk_0x8F1A9FE6D91AAFEB();
	}
	while (true)
	{
		wait(0);
		if (unk_0x1F85F8C7CC4639AE() || iLocal_77)
		{
			unk_0xBF6EED5D6E0CD9BF(0f);
			switch (iLocal_50)
			{
				case 0:
					if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
					{
						if (Global_106070.f_24967.f_5 >= iLocal_96 && !func_184())
						{
							iLocal_50 = 2;
						}
						func_181();
						func_178();
					}
					break;
				
				case 1:
					unk_0xB1D22059BEC7B532(unk_0xD4E735F4B6A956AC());
					if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
					{
						if (timera() > 2000)
						{
							if (iLocal_91 == 1)
							{
								func_177();
							}
							else if (iLocal_91 == 2)
							{
								func_152();
							}
						}
						if (timera() > 1300)
						{
							if (iLocal_93 < 3)
							{
								func_151();
							}
							else
							{
								func_150();
							}
						}
						if (iLocal_78)
						{
							func_137(26, 1);
							iLocal_78 = 0;
							iLocal_50 = 0;
						}
					}
					break;
				
				case 2:
					unk_0xB1D22059BEC7B532(unk_0xD4E735F4B6A956AC());
					if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
					{
						func_109();
					}
					unk_0x6417FCFC98785F84(Global_35240[9 /*31*/], 0, 0, 1);
					unk_0x6417FCFC98785F84(Global_35240[10 /*31*/], 0, 0, 1);
					break;
				
				case 4:
					if (!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
					{
						iLocal_50 = 3;
						break;
					}
					bLocal_79 = false;
					unk_0xBF6EED5D6E0CD9BF(0f);
					iVar0 = 0;
					while (iVar0 < iLocal_98)
					{
						if (unk_0x4915F4759304D5CF(iLocal_98[iVar0]))
						{
							if (unk_0xCE3CB618AFE55EFB(uLocal_105[iVar0]))
							{
								unk_0xE1623437A3194332(&(uLocal_105[iVar0]));
							}
						}
						else
						{
							if (unk_0xE4459E8ECF72920C(iLocal_98[iVar0]))
							{
								if (unk_0xCE3CB618AFE55EFB(uLocal_105[iVar0]))
								{
									unk_0xE1623437A3194332(&(uLocal_105[iVar0]));
								}
							}
							else if (unk_0x10E54C268D1B3FED(iLocal_98[iVar0], unk_0xA19140A5C42D8715(), 30f, 30f, 30f, 0, 1, 0))
							{
								if (!func_108())
								{
									if (iLocal_95 < unk_0xFD34717937104F1C())
									{
										iVar1 = unk_0x22C775856F4633CA(0, 3);
										if (iVar1 == 0)
										{
											func_98(&uLocal_271, "ACULTAU", "ACULT_SHOUT", 4, 0, 0, 0);
										}
										else if (iVar1 == 1)
										{
											func_97(&uLocal_271, 1, iLocal_98[iVar0], "ACULTMember1", 0, 1);
											func_98(&uLocal_271, "ACULTAU", "ACULT_FIGHT1", 4, 0, 0, 0);
										}
										else if (iVar1 == 2)
										{
											func_97(&uLocal_271, 2, iLocal_98[iVar0], "ACULTMember2", 0, 1);
											func_98(&uLocal_271, "ACULTAU", "ACULT_FIGHT2", 4, 0, 0, 0);
										}
										iLocal_95 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(4500, 6000));
									}
								}
							}
							bLocal_79 = true;
						}
						iVar0++;
					}
					if (!bLocal_79)
					{
						func_61();
					}
					break;
				
				case 3:
					if (!iLocal_77)
					{
						uLocal_109 = func_60();
						if (!unk_0x0FA486DE15EB3004(uLocal_109))
						{
							break;
						}
						func_59(&uLocal_114, 0);
						iLocal_77 = 1;
					}
					if (func_30(&uLocal_114, &uLocal_120, &uLocal_109, iLocal_261, sLocal_262, &bLocal_76, 78))
					{
						iLocal_94 = 0;
						unk_0x3E11F609741642B7(iLocal_270);
						unk_0xC9E05477F8CFBA11(iLocal_108);
						iVar0 = 0;
						while (iVar0 < iLocal_98)
						{
							if (unk_0xDC5D81351D6A4DDB(iLocal_98[iVar0]))
							{
								unk_0x680F17660351F21B(&(iLocal_98[iVar0]));
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < iLocal_103)
						{
							if (unk_0xDC5D81351D6A4DDB(iLocal_103[iVar0]))
							{
								unk_0xC0AC848E56940C34(&(iLocal_103[iVar0]));
							}
							iVar0++;
						}
						if (unk_0x37B568B777BC65F9(iLocal_106))
						{
							unk_0x930701157A4B9374(iLocal_106, false);
						}
						if (unk_0xDC5D81351D6A4DDB(iLocal_101))
						{
							unk_0xC0AC848E56940C34(&iLocal_101);
						}
						if (unk_0xDC5D81351D6A4DDB(iLocal_101))
						{
							unk_0xC0AC848E56940C34(&iLocal_101);
						}
						if (bLocal_76)
						{
							func_10();
							func_3(0);
							func_1(1);
							iLocal_77 = 0;
							iLocal_50 = 2;
						}
						else
						{
							iLocal_77 = 0;
							func_185();
						}
					}
					break;
			}
		}
		else if (bLocal_81)
		{
		}
		else
		{
			func_185();
		}
	}
}

void func_1(bool bParam0)
{
	if (bParam0)
	{
		unk_0xC1D3387D1E48090E(0);
		unk_0xDD63978CC283FA2D(1);
		unk_0x95DFD5DB6041DFE5(0);
		func_2(1);
		Global_88585 = 1;
	}
	else
	{
		unk_0xC1D3387D1E48090E(1);
		unk_0xDD63978CC283FA2D(0);
		unk_0x95DFD5DB6041DFE5(1);
		func_2(0);
		Global_88585 = 0;
	}
}

void func_2(bool bParam0)
{
	if ((Global_36117 == 9 || Global_36117 == 10) || Global_36117 == 5)
	{
		Global_104719 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_104719 = 0;
	}
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_9();
		if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
		{
			unk_0x2BCFB39E86340DAA(&Global_2384, 16);
		}
		Global_14513.f_1 = 1;
		if (func_8(0))
		{
			func_4(0);
		}
	}
	else if (Global_14513.f_1 == 1)
	{
		if (!Global_14513.f_1 == 0)
		{
			Global_14513.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (func_7())
	{
		return;
	}
	if (Global_14681)
	{
		func_6(0, 0);
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
	if (!func_5())
	{
		Global_14513.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_8(0))
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

bool func_7()
{
	return unk_0x05EFB6A616B6FADE(Global_1678593, 19);
}

int func_8(int iParam0)
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

void func_9()
{
	if (Global_14513.f_1 == 9 || Global_14513.f_1 == 10)
	{
		Global_15875 = 0;
		Global_15871 = 1;
	}
}

void func_10()
{
	func_20();
	func_13(0, 1);
	func_11(0, 1);
}

void func_11(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		func_13(0, 0);
		unk_0xE60B9F9B48D4783F("DeathFailOut", 0, 0);
		unk_0x2BCFB39E86340DAA(&iLocal_48, 1);
		func_12(1, 2, 0);
		unk_0xE7BF8285A5811F40(2);
	}
	else
	{
		if (unk_0x05EFB6A616B6FADE(iLocal_48, 1) || iParam1)
		{
			unk_0xEF9AD7817AAF81A5("DeathFailOut");
			func_12(0, 2, 1);
			unk_0xE7BF8285A5811F40(0);
		}
		unk_0xFA57C719261AA55D(&iLocal_48, 1);
	}
}

void func_12(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		unk_0x2BCFB39E86340DAA(&iLocal_48, 2);
		if (!unk_0x4C9BACA8D249CB13())
		{
			if (iParam1 == 1)
			{
				unk_0xDED73F11B8CB95B1(0.2f);
			}
			else
			{
				unk_0xDED73F11B8CB95B1(0.075f);
			}
		}
	}
	else
	{
		if (unk_0x05EFB6A616B6FADE(iLocal_48, 2) || iParam2)
		{
			if (!unk_0x4C9BACA8D249CB13())
			{
				unk_0xDED73F11B8CB95B1(1f);
			}
		}
		unk_0xFA57C719261AA55D(&iLocal_48, 2);
	}
}

void func_13(int iParam0, int iParam1)
{
	char* sVar0;
	
	switch (func_14())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!unk_0x05EFB6A616B6FADE(iLocal_48, 0) || iParam1)
		{
			unk_0xE60B9F9B48D4783F(sVar0, 0, 0);
			unk_0x2BCFB39E86340DAA(&iLocal_48, 0);
			func_12(1, 1, 0);
			unk_0xE7BF8285A5811F40(1);
		}
	}
	else
	{
		if (unk_0x05EFB6A616B6FADE(iLocal_48, 0) || iParam1)
		{
			unk_0xEF9AD7817AAF81A5(sVar0);
			func_12(0, 1, 1);
			unk_0xE7BF8285A5811F40(0);
		}
		unk_0xFA57C719261AA55D(&iLocal_48, 0);
	}
}

int func_14()
{
	func_15();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_15()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_19(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_18(unk_0xA19140A5C42D8715());
			if (func_17(iVar0) && (!func_16(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_17(Global_106070.f_2355.f_539.f_4301))
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

bool func_16(int iParam0)
{
	return Global_36117 == iParam0;
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

int func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_19(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_19(int iParam0)
{
	if (func_17(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_20()
{
	iLocal_48 = 0;
	iLocal_49 = 0;
	func_21(0, 1, 1, 0, 0);
	func_3(1);
}

void func_21(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		unk_0xC97ACA9456A064F3(unk_0xD4E735F4B6A956AC());
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 1);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 1);
		func_29(1);
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
		func_28(1, iParam3, iParam2, 0);
		Global_56187 = 1;
		Global_68497 = 1;
		Global_71203 = 1;
	}
	else
	{
		func_29(0);
		unk_0x21727E2C492FE1B3();
		Global_56187 = 0;
		if (bParam1)
		{
			unk_0x1A81FD78261DCFCD();
		}
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 0);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 0);
		func_28(0, iParam3, iParam2, 0);
		if (unk_0x4C9BACA8D249CB13())
		{
			if ((((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_26(unk_0xD4E735F4B6A956AC())) && !func_23(unk_0xD4E735F4B6A956AC(), 0)) && !func_22()) && !bParam4)
			{
				unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), 0);
			}
		}
		else if ((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_26(unk_0xD4E735F4B6A956AC())) && !bParam4)
		{
			unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), 0);
		}
		Global_71203 = 0;
	}
}

bool func_22()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 14);
}

bool func_23(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_24(-1, 0) == 8;
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

int func_24(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_25();
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

int func_25()
{
	return Global_1312736;
}

int func_26(int iParam0)
{
	if (func_23(iParam0, 0))
	{
		return 1;
	}
	if (func_27())
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

bool func_27()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

int func_28(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_29(int iParam0)
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

int func_30(var uParam0, var uParam1, var uParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			unk_0x8969D02DEDC106D2("DEATH_SCENE");
			unk_0xE11F00B4AC919F45(-1, "ScreenFlash", "WastedSounds", 1);
			func_58(&(uParam0->f_1));
			func_20();
			func_57(uParam1, (0.15f * 0.075f), 0.5f);
			unk_0x65227735B3827631(1);
			break;
		
		case 1:
			if (func_55() || unk_0x71364F510A1CB69F())
			{
				*uParam0 = 2;
			}
			if (!func_54(uParam0->f_4, 4))
			{
				if (unk_0x61346376C1469A0E("OFFMISSION_WASTED", 0, -1))
				{
					unk_0xE11F00B4AC919F45(-1, "Bed", "WastedSounds", 1);
					func_52(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(timera()) > (1500f * 0.2f))
			{
				if (!func_54(uParam0->f_4, 2))
				{
					unk_0xE11F00B4AC919F45(-1, "TextHit", "WastedSounds", 1);
					func_52(&(uParam0->f_4), 2);
				}
				func_31(uParam2, uParam1, iParam3, sParam4, iParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_31(uParam2, uParam1, iParam3, sParam4, iParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_13(0, 1);
				func_11(0, 1);
				func_20();
				if (*iParam5)
				{
					unk_0xD7148FA4D977807B(1);
				}
				else if (!uParam0->f_5)
				{
					func_2(0);
				}
				unk_0x65227735B3827631(0);
				unk_0xDD63978CC283FA2D(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
			{
				unk_0xC1D3387D1E48090E(1);
				func_13(0, 1);
				func_11(0, 1);
				unk_0x5AD7D03C214BDA88("DEATH_SCENE");
				unk_0x65227735B3827631(0);
				return 1;
			}
			break;
		
		case 4:
			unk_0x65227735B3827631(0);
			return 1;
			break;
	}
	return 0;
}

int func_31(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x71364F510A1CB69F() || unk_0x607776744A243309())
			{
				unk_0x9662BE461F9FDF9E(2500);
				unk_0x906EA681A50D5E9C();
			}
			if (bParam9)
			{
				unk_0x65227735B3827631(1);
			}
			unk_0xDED73F11B8CB95B1(0.2f);
			if (func_51(iParam5, 4))
			{
				if (unk_0x61346376C1469A0E("generic_failed", 0, -1))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			unk_0x31A9E530D137684F(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0x390B339C943A8A54("STRING");
			unk_0xBA9FB571BCB6C1BD(6);
			unk_0x4FDA9E6EF359F8A9(iParam2);
			unk_0xD481829E3E36543B();
			func_50(sParam3);
			unk_0x380580A1A1667F69(100);
			unk_0x233A5B4A35140C6B(true);
			unk_0xD8015A504E3ED13A();
			if (func_51(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0x31A9E530D137684F(*uParam0, "TRANSITION_UP");
					unk_0xD8B5988E85F72BE5(uParam1->f_134);
					unk_0x271C1332F482646C();
					uParam1->f_136 = 1;
				}
			}
			if (!func_51(iParam5, 1))
			{
				unk_0x15D2B7C537E80C5A(0);
			}
			func_49(&(uParam1->f_10), 0, 1, 1, 1);
			func_48(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_48(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_51(iParam5, 4))
			{
				unk_0xE11F00B4AC919F45(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_51(iParam5, 8))
			{
				switch (func_14())
				{
					case 0:
						unk_0xE60B9F9B48D4783F("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						unk_0xE60B9F9B48D4783F("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						unk_0xE60B9F9B48D4783F("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_47(&(uParam1->f_1)))
			{
				func_46(&(uParam1->f_1));
			}
			if (func_51(iParam5, 2))
			{
				if (!func_47(&(uParam1->f_4)))
				{
					func_46(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			unk_0xE75DF14D630B12F9();
			if (func_51(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0x31A9E530D137684F(*uParam0, "TRANSITION_UP");
					unk_0xD8B5988E85F72BE5(uParam1->f_134);
					unk_0x271C1332F482646C();
					uParam1->f_136 = 1;
				}
			}
			unk_0x0A74F1E9CF777638(iParam6);
			func_44(uParam0, 0, 0);
			if (!func_51(iParam5, 16) && (func_42(&(uParam1->f_1)) >= uParam1->f_135 || unk_0x71364F510A1CB69F()))
			{
				func_36(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0x238F4C0DD5EC6FE7();
				if (unk_0x4E6A396CA4DB68F6(2, 201))
				{
					uParam1->f_138 = 1;
					unk_0xE11F00B4AC919F45(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_51(iParam5, 1))
					{
						unk_0x86BED8B9076AA8D7(0);
					}
					func_35(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0x4E6A396CA4DB68F6(2, 202))
				{
					uParam1->f_138 = 0;
					unk_0xE11F00B4AC919F45(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_51(iParam5, 1))
					{
						unk_0x86BED8B9076AA8D7(0);
					}
					func_35(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_51(iParam5, 2))
			{
				if (func_42(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					unk_0xE11F00B4AC919F45(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_51(iParam5, 1))
					{
						unk_0x86BED8B9076AA8D7(0);
					}
					func_35(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_44(uParam0, 0, 0);
			unk_0xDED73F11B8CB95B1(1f);
			if (uParam1->f_138 || !((unk_0x3CAC2741CC1A631F("stunt_plane_races", unk_0x61D2332983ACC05C()) || unk_0x3CAC2741CC1A631F("pilot_school", unk_0x61D2332983ACC05C())) || (unk_0x3CAC2741CC1A631F("bj", unk_0x61D2332983ACC05C()) && unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))))
			{
				unk_0x70C1F5AA59767FE6(2500);
			}
			if (func_51(iParam5, 64) && uParam1->f_138)
			{
				unk_0x9662BE461F9FDF9E(500);
			}
			func_32(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0x65227735B3827631(0);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_42(&(uParam1->f_4)) <= 0.1f)
			{
				func_44(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}

void func_32(int iParam0)
{
	func_33(iParam0, 0f);
}

void func_33(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_34(unk_0x05EFB6A616B6FADE(*iParam0, 4)) - fParam1);
	unk_0x2BCFB39E86340DAA(iParam0, 1);
	unk_0xFA57C719261AA55D(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_34(bool bParam0)
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

void func_35(var uParam0)
{
	if (*uParam0 != 0)
	{
		unk_0x86795B44CE5FE021(uParam0);
		*uParam0 = 0;
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
}

void func_36(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((unk_0x607776744A243309() || unk_0x3BE8B7AEED1A3971()) || unk_0x71364F510A1CB69F()) || unk_0x35ADB0B156EC2F45())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_41(uParam0))
	{
		return;
	}
	unk_0xE75DF14D630B12F9();
	unk_0x0A74F1E9CF777638(iParam2);
	if (!func_51(uParam0->f_1, 256) || (func_51(uParam0->f_1, 8192) && unk_0x1BFD4084A40BF7E1(2)))
	{
		unk_0x31A9E530D137684F(*uParam0, "SET_CLEAR_SPACE");
		unk_0xD8B5988E85F72BE5(fParam1);
		unk_0x271C1332F482646C();
		unk_0x31A9E530D137684F(*uParam0, "SET_MAX_WIDTH");
		unk_0xD8B5988E85F72BE5(fParam5);
		unk_0x271C1332F482646C();
		unk_0x31A9E530D137684F(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x271C1332F482646C();
		if (unk_0x47C01C0E6F4C1D06())
		{
			unk_0x31A9E530D137684F(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x233A5B4A35140C6B(func_51(uParam0->f_1, 4096));
			unk_0x271C1332F482646C();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0x0B9F814BC8D14042(2);
					break;
				
				case 2:
					bVar4 = !unk_0x0B9F814BC8D14042(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0x31A9E530D137684F(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x380580A1A1667F69(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0x05EFB6A616B6FADE(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!unk_0x05EFB6A616B6FADE(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							sVar3 = unk_0x7391BCD755BD8577(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = unk_0xDD4AF94EF709B596(iVar0, iVar1, bVar2);
						}
						if (!unk_0x429D45A6C6520026(sVar3))
						{
							func_40(sVar3);
						}
						iVar7++;
					}
					if (!unk_0x429D45A6C6520026(uParam0->f_2[iVar6 /*15*/]))
					{
						func_50(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x47C01C0E6F4C1D06())
					{
						if (func_51(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0x233A5B4A35140C6B(true);
								unk_0x380580A1A1667F69(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0x233A5B4A35140C6B(false);
								unk_0x380580A1A1667F69(-1);
							}
						}
					}
					unk_0x271C1332F482646C();
				}
			}
			iVar6++;
		}
		fVar8 = func_39(bParam4, func_39(func_51(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x31A9E530D137684F(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xD8B5988E85F72BE5(fVar8);
		unk_0x271C1332F482646C();
		unk_0x31A9E530D137684F(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0xD8B5988E85F72BE5(0f);
		unk_0xD8B5988E85F72BE5(0f);
		unk_0xD8B5988E85F72BE5(0f);
		unk_0xD8B5988E85F72BE5(80f);
		unk_0x271C1332F482646C();
		func_38(&(uParam0->f_1), 256);
		func_37(&(uParam0->f_1), 128);
	}
	unk_0xE9F9BA9108F437C7(*uParam0, 255, 255, 255, 0, 0);
}

void func_37(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_38(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_39(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_40(char* sParam0)
{
	unk_0x0BAAED7962F122D5(sParam0);
}

int func_41(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x0FA486DE15EB3004(*uParam0))
		{
			func_38(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

float func_42(var uParam0)
{
	if (func_47(uParam0))
	{
		if (func_43(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_34(unk_0x05EFB6A616B6FADE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_43(var uParam0)
{
	return unk_0x05EFB6A616B6FADE(*uParam0, 2);
}

int func_44(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_47(&(uParam0->f_2)))
	{
		func_32(&(uParam0->f_2));
	}
	unk_0xD8C147DA332E7F06(14);
	if (!bParam2)
	{
		unk_0xE9F9BA9108F437C7(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0xE9F9BA9108F437C7(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0xD73B1037F6BD4B90(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_42(&(uParam0->f_2)) * 1000f) > to_float(uParam0->f_1)
	{
		func_45(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_45(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_46(int iParam0)
{
	if (!func_47(iParam0))
	{
		func_32(iParam0);
	}
}

bool func_47(var uParam0)
{
	return unk_0x05EFB6A616B6FADE(*uParam0, 1);
}

int func_48(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0x2BCFB39E86340DAA(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_49(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x0116B05B49B8129C("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_38(&(uParam0->f_1), 32);
	}
	if (unk_0x0FA486DE15EB3004(*uParam0))
	{
		func_38(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0xBC66504DB57D15CD(*uParam0, 1);
		}
	}
	if (unk_0x47C01C0E6F4C1D06())
	{
		if (bParam3)
		{
			func_38(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_38(&(uParam0->f_1), 8192);
	}
}

void func_50(char* sParam0)
{
	unk_0x390B339C943A8A54(sParam0);
	unk_0xD481829E3E36543B();
}

bool func_51(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_52(var uParam0, int iParam1)
{
	func_53(uParam0, iParam1);
}

void func_53(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_54(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_55()
{
	if (!unk_0x05EFB6A616B6FADE(iLocal_48, 0) && !unk_0x05EFB6A616B6FADE(iLocal_48, 1))
	{
		settimera(0);
		func_13(1, 0);
	}
	if (!unk_0x5CA3186381FC012C())
	{
		unk_0x4F93066CECE72793();
	}
	unk_0xD481A812073CCF02(2, 199, 1);
	unk_0xD481A812073CCF02(0, 59, 1);
	unk_0xD481A812073CCF02(0, 60, 1);
	unk_0xD481A812073CCF02(0, 37, 1);
	unk_0xD481A812073CCF02(0, 25, 1);
	unk_0x2FD7A78C0FD6FCAE();
	if (IntToFloat(timera()) > (1500f * 0.2f))
	{
		if (!unk_0x05EFB6A616B6FADE(iLocal_48, 1))
		{
			func_11(1, 0);
			settimerb(0);
		}
		else if (IntToFloat(timerb()) > (1500f * 0.075f) || unk_0x71364F510A1CB69F())
		{
			if (!unk_0x71364F510A1CB69F())
			{
				if (!unk_0x607776744A243309())
				{
					unk_0x9662BE461F9FDF9E(1500);
				}
			}
			else if (iLocal_49 == 0)
			{
				iLocal_49 = unk_0xFD34717937104F1C() + 1000;
				if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
				{
					unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 0);
				}
				func_12(0, 2, 1);
				func_21(1, 1, 1, 0, 0);
				func_3(1);
				unk_0xDFCC2872C0A03340(0);
				unk_0xB982FDD339A194F5(0);
				unk_0x135C61E339DABBAC(1);
				unk_0x4F93066CECE72793();
				if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
				{
					unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 0);
				}
				func_13(0, 0);
				func_56(0);
			}
			else if (unk_0xFD34717937104F1C() < iLocal_49)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_56(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0x05EFB6A616B6FADE(iLocal_48, 3))
			{
				unk_0x62BAB49318F4FE6E(1);
				unk_0x2BCFB39E86340DAA(&iLocal_48, 3);
			}
		}
		else if (unk_0x05EFB6A616B6FADE(iLocal_48, 3))
		{
			unk_0x62BAB49318F4FE6E(0);
			unk_0xFA57C719261AA55D(&iLocal_48, 3);
		}
	}
}

void func_57(var uParam0, float fParam1, float fParam2)
{
	if (func_47(&(uParam0->f_1)))
	{
		func_45(&(uParam0->f_1));
	}
	if (func_47(&(uParam0->f_4)))
	{
		func_45(&(uParam0->f_4));
	}
	func_35(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_58(int iParam0)
{
	if (!func_47(iParam0))
	{
		func_46(iParam0);
	}
	else
	{
		func_32(iParam0);
	}
}

void func_59(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	unk_0x61346376C1469A0E("OFFMISSION_WASTED", 0, -1);
}

var func_60()
{
	return unk_0xB00CD6895BDB01A0("MP_BIG_MESSAGE_FREEMODE");
}

void func_61()
{
	if (!iLocal_80)
	{
		unk_0x665C47CF8EF3A8D1("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		Global_106070.f_24967.f_5 = 1000;
		unk_0x75517BC5AF6FF1DD(64);
		Global_106070.f_20536.f_472 = 54;
		uLocal_259 = unk_0xB00CD6895BDB01A0("MIDSIZED_MESSAGE");
		func_96(1);
		while (!unk_0x0FA486DE15EB3004(uLocal_259))
		{
			wait(0);
		}
		unk_0x31A9E530D137684F(uLocal_259, "SHOW_SHARD_MIDSIZED_MESSAGE");
		func_50("CULT_PASS");
		unk_0xD8015A504E3ED13A();
		while (!func_95())
		{
			wait(0);
		}
		func_94();
		settimera(0);
		unk_0xE11F00B4AC919F45(-1, "PROPERTY_PURCHASE", "HUD_AWARDS", 1);
		iLocal_80 = 1;
	}
	unk_0xE9F9BA9108F437C7(uLocal_259, 255, 255, 255, 255, 0);
	if (!iLocal_82)
	{
		if (timera() > 9500)
		{
			unk_0x31A9E530D137684F(uLocal_259, "SHARD_ANIM_OUT");
			unk_0x380580A1A1667F69(1);
			unk_0xD8B5988E85F72BE5(0.33f);
			unk_0x271C1332F482646C();
			iLocal_82 = 1;
		}
	}
	if (timera() > 10000)
	{
		if (unk_0x0FA486DE15EB3004(uLocal_259))
		{
			unk_0x86795B44CE5FE021(&uLocal_259);
			func_96(0);
		}
		while (unk_0x499324B3EF19C288(func_93(unk_0xD4E735F4B6A956AC()), vLocal_53, 1) < 209f && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			wait(0);
		}
		func_62(18);
		func_185();
	}
}

void func_62(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_91();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_90())
	{
		func_68(iParam0);
		unk_0x9E212A43A08FF3F9(0, 0);
		Global_106061 = unk_0xFD34717937104F1C();
		func_67(30000);
		StringCopy(&cVar0, func_66(Global_106059, 1), 64);
		if (func_65(Global_106059) > 0)
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
	func_64(&Global_25518);
	Global_106060 = 0;
	func_63(-1);
}

void func_63(int iParam0)
{
	Global_106059 = iParam0;
}

void func_64(var uParam0)
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

int func_65(int iParam0)
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

char* func_66(int iParam0, bool bParam1)
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

void func_67(int iParam0)
{
	Global_36668 = (unk_0xFD34717937104F1C() + iParam0);
}

void func_68(int iParam0)
{
	func_69(iParam0, 0, func_89(iParam0));
}

void func_69(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_88();
	func_79(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_78(iParam0, &uVar0);
	Var1 = { func_70(&uVar0) };
}

struct<16> func_70(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_77(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_76(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_75(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_74(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_73(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_71(*uParam0), 64);
	return Var0;
}

int func_71(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_72(unk_0x05EFB6A616B6FADE(iParam0, 31), -1, 1)) + 2011;
}

int func_72(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_73(var uParam0)
{
	return uParam0 & 15;
}

int func_74(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_75(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_76(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_77(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

void func_78(int iParam0, var uParam1)
{
	Global_106070.f_24967.f_43[iParam0] = *uParam1;
}

void func_79(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_71(*uParam0);
	iVar1 = func_73(*uParam0);
	iVar2 = func_74(*uParam0);
	iVar3 = func_77(*uParam0);
	iVar4 = func_76(*uParam0);
	iVar5 = func_75(*uParam0);
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
	iVar6 = func_87(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_87(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_80(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_80(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_86(uParam0, iParam1);
	func_85(uParam0, iParam2);
	func_84(uParam0, iParam3);
	func_83(uParam0, iParam5);
	func_82(uParam0, iParam4);
	func_81(uParam0, iParam6);
}

void func_81(var uParam0, int iParam1)
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

void func_82(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_73(*uParam0);
	iVar1 = func_71(*uParam0);
	if (iParam1 < 1 || iParam1 > func_87(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_83(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_84(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_85(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_86(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_87(int iParam0, int iParam1)
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

var func_88()
{
	var uVar0;
	
	func_86(&uVar0, unk_0xC5B07C33AC7BB174());
	func_85(&uVar0, unk_0x65DA628D62901275());
	func_84(&uVar0, unk_0x34CEB9721AC6A0A9());
	func_82(&uVar0, unk_0xC9A0B68BA813CF99());
	func_83(&uVar0, unk_0x897D202BD69186D5());
	func_81(&uVar0, unk_0x56EBDF0E39D83471());
	return uVar0;
}

int func_89(int iParam0)
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

int func_90()
{
	if ((Global_106059 == func_91() && unk_0x62558A57CB60EE71()) && Global_106060)
	{
		return 1;
	}
	return 0;
}

int func_91()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x61D2332983ACC05C(), 64);
	uVar1 = func_92(Var0);
	return uVar1;
}

int func_92(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

Vector3 func_93(int iParam0)
{
	return unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iParam0), 0);
}

void func_94()
{
	Global_25694 = 0;
	Global_25695 = 0;
	Global_25697 = 0;
	Global_25698 = 0;
	Global_25699 = 0;
}

int func_95()
{
	return 1;
}

void func_96(int iParam0)
{
	Global_71465 = iParam0;
	Global_71466 = iParam0;
}

void func_97(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_98(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_107(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_99(sParam2, iParam3, 0);
}

int func_99(char* sParam0, int iParam1, bool bParam2)
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
					func_106();
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
		if (func_105(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_104();
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
				func_103();
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
				if (func_102())
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
			func_101();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_100();
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
		func_106();
	}
	return 0;
}

void func_100()
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

void func_101()
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

int func_102()
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

void func_103()
{
	if (func_16(14))
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
		Global_14513 = func_14();
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

void func_104()
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

bool func_105(int iParam0, int iParam1)
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

void func_106()
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

void func_107(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_108()
{
	if (Global_15822 != 0 || unk_0x904275961B875DEB())
	{
		return 1;
	}
	return 0;
}

void func_109()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	switch (iLocal_94)
	{
		case 0:
			unk_0x3E3FCB801A0CF08C("THUNDER", 20f);
			if (!unk_0x99E48E2CD778F380())
			{
				unk_0x9D7A6D81C3BE2AAE("ac_ig_3_p3_b", 8);
			}
			unk_0xCACEBBBEAD8F262E(joaat("a_m_o_acult_02"));
			unk_0xCACEBBBEAD8F262E(joaat("a_m_y_acult_02"));
			unk_0xCACEBBBEAD8F262E(-2022916910);
			unk_0xCACEBBBEAD8F262E(-1322183878);
			unk_0xCACEBBBEAD8F262E(joaat("prop_box_wood05a"));
			unk_0xCACEBBBEAD8F262E(joaat("prop_security_case_01"));
			while ((((((!func_136() || !unk_0x7FC99CCC73354033(joaat("a_m_o_acult_02"))) || !unk_0x7FC99CCC73354033(joaat("a_m_y_acult_02"))) || !unk_0x7FC99CCC73354033(-2022916910)) || !unk_0x7FC99CCC73354033(-1322183878)) || !unk_0x7FC99CCC73354033(joaat("prop_box_wood05a"))) || !unk_0x7FC99CCC73354033(joaat("prop_security_case_01")))
			{
				wait(0);
			}
			iLocal_436 = func_129(unk_0xA19140A5C42D8715(), joaat("weapon_assaultrifle"), 1, 0, 0, 0, 0, 0, 0);
			if (unk_0xDC5D81351D6A4DDB(iLocal_436))
			{
				unk_0xE216F8B2802ABABF(iLocal_436, "Trevors_weapon", 0, 0, 0);
			}
			unk_0xE216F8B2802ABABF(0, "Rifle_Mag1^1", 3, unk_0x73929A7BB3EF0A64(joaat("component_assaultrifle_clip_01")), 0);
			if (func_136() && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				unk_0xE216F8B2802ABABF(unk_0xA19140A5C42D8715(), "TREVOR", 0, 0, 0);
				unk_0xE216F8B2802ABABF(iLocal_98[11], "Cult_Master", 2, joaat("a_m_o_acult_02"), 0);
				unk_0xE216F8B2802ABABF(iLocal_98[12], "Rear_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0xE216F8B2802ABABF(iLocal_98[13], "Left_Old_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0xE216F8B2802ABABF(iLocal_98[14], "Carbine_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0xE216F8B2802ABABF(iLocal_98[15], "Shotgun_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0x80D42964D19AF118(0);
			}
			wait(0);
			if (!bLocal_76 && Global_106070.f_24967.f_5 != 1000)
			{
				func_128();
			}
			if (unk_0xDC5D81351D6A4DDB(iLocal_98[0]))
			{
				unk_0x680F17660351F21B(&(iLocal_98[0]));
			}
			if (unk_0xDC5D81351D6A4DDB(iLocal_98[1]))
			{
				unk_0x680F17660351F21B(&(iLocal_98[1]));
			}
			if (unk_0x37B568B777BC65F9(iLocal_106))
			{
				unk_0x930701157A4B9374(iLocal_106, false);
			}
			if (unk_0xDC5D81351D6A4DDB(iLocal_101))
			{
				unk_0xC0AC848E56940C34(&iLocal_101);
			}
			if (unk_0xDC5D81351D6A4DDB(iLocal_101))
			{
				unk_0xC0AC848E56940C34(&iLocal_101);
			}
			unk_0x8E88E73F74A9FF79(false, 0, 3000, 1, 0, 0);
			if (unk_0xCE3CB618AFE55EFB(iLocal_104))
			{
				unk_0xE1623437A3194332(&iLocal_104);
			}
			func_21(1, 1, 1, 0, 0);
			unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 0);
			unk_0x135C61E339DABBAC(1);
			unk_0x85685830EFB9A55E(0);
			unk_0xDC374DA4DC566237(0);
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				unk_0x065673561216B3C6(unk_0xA19140A5C42D8715(), 1);
			}
			unk_0xFDD15D670AD33E10(vLocal_53, 100f, 1, 0, 0, false);
			unk_0xF66A39BBE7B3C278(vLocal_53 - Vector(100f, 60f, 80f), vLocal_53 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
			unk_0xBF6EED5D6E0CD9BF(0f);
			unk_0x60DEFBFF740D4C09(3, 0);
			unk_0x60DEFBFF740D4C09(5, 0);
			iLocal_108 = unk_0xBC52097C9ECDF411(-1173.509f, 4924.365f, 222.21f, 277.2293f, 2, 0, 2, 1);
			unk_0xCACEBBBEAD8F262E(joaat("a_m_o_acult_01"));
			while (!unk_0x7FC99CCC73354033(joaat("a_m_o_acult_01")))
			{
				wait(0);
			}
			iLocal_94 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 6:
			if (unk_0x9375DEC0CFA8D39E(0))
			{
				if (unk_0x0FFE9FEDC2E0AC88("CULT_MASTER", 0))
				{
					if (!unk_0xDC5D81351D6A4DDB(iLocal_98[11]))
					{
						iLocal_98[11] = unk_0xA2EA4BA455370F3C(unk_0xD6AE14889DC50F06("CULT_MASTER", 0));
					}
				}
				if (unk_0x0FFE9FEDC2E0AC88("REAR_CULT", 0))
				{
					if (!unk_0xDC5D81351D6A4DDB(iLocal_98[12]))
					{
						iLocal_98[12] = unk_0xA2EA4BA455370F3C(unk_0xD6AE14889DC50F06("REAR_CULT", 0));
					}
				}
				if (unk_0x0FFE9FEDC2E0AC88("LEFT_OLD_CULT", 0))
				{
					if (!unk_0xDC5D81351D6A4DDB(iLocal_98[13]))
					{
						iLocal_98[13] = unk_0xA2EA4BA455370F3C(unk_0xD6AE14889DC50F06("LEFT_OLD_CULT", 0));
					}
				}
				if (unk_0x0FFE9FEDC2E0AC88("CARBINE_CULT", 0))
				{
					if (!unk_0xDC5D81351D6A4DDB(iLocal_98[14]))
					{
						iLocal_98[14] = unk_0xA2EA4BA455370F3C(unk_0xD6AE14889DC50F06("CARBINE_CULT", 0));
					}
				}
				if (unk_0x0FFE9FEDC2E0AC88("SHOTGUN_CULT", 0))
				{
					if (!unk_0xDC5D81351D6A4DDB(iLocal_98[15]))
					{
						iLocal_98[15] = unk_0xA2EA4BA455370F3C(unk_0xD6AE14889DC50F06("SHOTGUN_CULT", 0));
					}
				}
				if (unk_0x0FFE9FEDC2E0AC88("TREVOR", 0))
				{
					unk_0x065673561216B3C6(unk_0xA19140A5C42D8715(), 0);
					unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), -1173.531f, 4924.357f, 222.2101f, 1, 0, 0, 1);
					unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 188.9369f);
					unk_0xED3364602E718F07(unk_0xA19140A5C42D8715(), -1173.509f, 4924.365f, 222.21f, -1, 0, 0f, 1, 0, iLocal_108, 0);
					unk_0x3A3E4B7C6FBE305D(unk_0xA19140A5C42D8715(), 1, 0);
				}
				if (unk_0x0FFE9FEDC2E0AC88("Trevors_weapon", 0))
				{
					unk_0xE2C0081C99CB2618(iLocal_436, unk_0xA19140A5C42D8715());
				}
				unk_0xD87B76260C547F31(91.3878f);
				unk_0xAA32DD4848CF93E0(4.4337f, 1065353216);
				func_21(0, 1, 1, 0, 0);
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
				unk_0x85685830EFB9A55E(1);
				unk_0xDC374DA4DC566237(1);
				vLocal_51[0 /*3*/] = { -1044.632f, 4918.149f, 211.3315f };
				fLocal_52[0] = 254.8275f;
				vLocal_51[1 /*3*/] = { -1054.92f, 4915.155f, 210.8241f };
				fLocal_52[1] = 270.2025f;
				vLocal_51[2 /*3*/] = { -1051.859f, 4903.902f, 209.6199f };
				fLocal_52[2] = 299.8404f;
				vLocal_51[3 /*3*/] = { -1068.246f, 4899.532f, 213.2755f };
				fLocal_52[3] = 298.4257f;
				vLocal_51[4 /*3*/] = { -1083.322f, 4899.532f, 213.2755f };
				fLocal_52[4] = 283.5311f;
				vLocal_51[5 /*3*/] = { -1084.058f, 4933.805f, 228.2246f };
				fLocal_52[5] = 87.5233f;
				vLocal_51[6 /*3*/] = { -1081.976f, 4937.339f, 232.3275f };
				fLocal_52[6] = 109.6546f;
				vLocal_51[7 /*3*/] = { -1092.075f, 4939.958f, 217.3385f };
				fLocal_52[7] = 210.2433f;
				vLocal_51[8 /*3*/] = { -1101.798f, 4930.33f, 217.3544f };
				fLocal_52[8] = 203.732f;
				vLocal_51[9 /*3*/] = { -1070.675f, 4869.301f, 220.2917f };
				fLocal_52[9] = 39.1109f;
				vLocal_51[10 /*3*/] = { -1115.703f, 4878.439f, 225.8085f };
				fLocal_52[10] = 25.8472f;
				unk_0x94E87D83163B4BEB("rghCult", &iLocal_270);
				iVar1 = 0;
				while (iVar1 < iLocal_98)
				{
					if (((iVar1 == 0 || iVar1 == 5) || iVar1 == 6) || iVar1 == 10)
					{
						iLocal_98[iVar1] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_o_acult_01"), vLocal_51[iVar1 /*3*/], fLocal_52[iVar1], 1, 1);
						unk_0x8695E04AA104690A(iLocal_98[iVar1], 0);
						unk_0xF0188A1B49D79AF7(iLocal_98[iVar1], joaat("weapon_assaultrifle"), -1, 1, 1);
						unk_0x8AA21BBDA4DB2C4F(iLocal_98[iVar1], 0);
						unk_0xF19FB7DA7E62392D(iLocal_98[iVar1], 2);
						unk_0xEA45F8224FC3C7AD(iLocal_98[iVar1], 50f, 20);
						unk_0xD461381B293D9B46(iLocal_98[iVar1], 5);
						unk_0x3677CB0D846A1308(iLocal_98[iVar1], 100f);
						unk_0xF26F4E13A8AEC5EB(iLocal_98[iVar1], 100f);
						unk_0x6259CDB47862A4F3(iLocal_98[iVar1], 150, 0);
						unk_0x6909FCF0DF666AF6(iLocal_98[iVar1], unk_0x22C775856F4633CA(40, 60));
						unk_0xDA4D3941AFF8EF12(iLocal_98[iVar1], unk_0xA19140A5C42D8715(), 0, 16);
					}
					else if (iVar1 == 2)
					{
						iLocal_98[iVar1] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_o_acult_02"), vLocal_51[iVar1 /*3*/], fLocal_52[iVar1], 1, 1);
						unk_0x8695E04AA104690A(iLocal_98[iVar1], 0);
						unk_0xF0188A1B49D79AF7(iLocal_98[iVar1], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
						unk_0x3B7A32E04BBE59A5(iLocal_98[iVar1], 50, 1);
						unk_0x8AA21BBDA4DB2C4F(iLocal_98[iVar1], 2);
						unk_0xF19FB7DA7E62392D(iLocal_98[iVar1], 1);
						unk_0xEA45F8224FC3C7AD(iLocal_98[iVar1], 50f, 20);
						unk_0xD461381B293D9B46(iLocal_98[iVar1], 5);
						unk_0x3677CB0D846A1308(iLocal_98[iVar1], 100f);
						unk_0xF26F4E13A8AEC5EB(iLocal_98[iVar1], 100f);
						unk_0x6909FCF0DF666AF6(iLocal_98[iVar1], unk_0x22C775856F4633CA(40, 60));
						unk_0xDA4D3941AFF8EF12(iLocal_98[iVar1], unk_0xA19140A5C42D8715(), 0, 16);
					}
					else if (iVar1 > 10 && iVar1 < 20)
					{
						if (((((!unk_0x4915F4759304D5CF(iLocal_98[iVar1]) && !unk_0x4915F4759304D5CF(iLocal_98[11])) && !unk_0x4915F4759304D5CF(iLocal_98[12])) && !unk_0x4915F4759304D5CF(iLocal_98[13])) && !unk_0x4915F4759304D5CF(iLocal_98[14])) && !unk_0x4915F4759304D5CF(iLocal_98[15]))
						{
							unk_0xF0188A1B49D79AF7(iLocal_98[11], joaat("weapon_pistol"), -1, 1, 1);
							unk_0xF0188A1B49D79AF7(iLocal_98[12], joaat("weapon_assaultrifle"), -1, 1, 1);
							unk_0xF0188A1B49D79AF7(iLocal_98[13], joaat("weapon_assaultrifle"), -1, 1, 1);
							unk_0xF0188A1B49D79AF7(iLocal_98[14], joaat("weapon_carbinerifle"), -1, 1, 1);
							unk_0xF0188A1B49D79AF7(iLocal_98[15], joaat("weapon_pumpshotgun"), -1, 1, 1);
							unk_0x3B7A32E04BBE59A5(iLocal_98[iVar1], 0, 1);
							unk_0x8AA21BBDA4DB2C4F(iLocal_98[iVar1], 3);
							unk_0xF19FB7DA7E62392D(iLocal_98[iVar1], 0);
							unk_0xD461381B293D9B46(iLocal_98[iVar1], 0);
							unk_0x82F035F117EA1098(iLocal_98[iVar1], 1f, 1f);
							unk_0x2F89329397A277BC(&uLocal_107);
							unk_0xBB2EBD7F469C8767(0, -1159.33f, 4924.412f, 221.6576f, unk_0xA19140A5C42D8715(), 2f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
							unk_0x9C24BCD3EFB3BF4C(0, unk_0xA19140A5C42D8715(), 6000, 0);
							unk_0x9C24BCD3EFB3BF4C(0, unk_0xA19140A5C42D8715(), 4500, 0);
							unk_0xDA4D3941AFF8EF12(0, unk_0xA19140A5C42D8715(), 0, 16);
							unk_0x301F42EEE3C40328(uLocal_107);
							unk_0xE1072FA2FECBAD96(iLocal_98[15], uLocal_107);
							unk_0x3A95A0A3221D4208(&uLocal_107);
							unk_0x2F89329397A277BC(&uLocal_107);
							unk_0xBB2EBD7F469C8767(0, -1163.279f, 4932.933f, 222.541f, unk_0xA19140A5C42D8715(), 1f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
							unk_0x31EFDFB98A2215DD(0, unk_0xA19140A5C42D8715(), 5000, 0);
							unk_0x9C24BCD3EFB3BF4C(0, unk_0xA19140A5C42D8715(), 7500, 0);
							unk_0x9C24BCD3EFB3BF4C(0, unk_0xA19140A5C42D8715(), 4500, 0);
							unk_0xDA4D3941AFF8EF12(0, unk_0xA19140A5C42D8715(), 0, 16);
							unk_0x301F42EEE3C40328(uLocal_107);
							unk_0xE1072FA2FECBAD96(iLocal_98[14], uLocal_107);
							unk_0x3A95A0A3221D4208(&uLocal_107);
							unk_0x2F89329397A277BC(&uLocal_107);
							unk_0x9C24BCD3EFB3BF4C(0, unk_0xA19140A5C42D8715(), 2500, 0);
							unk_0x31EFDFB98A2215DD(0, unk_0xA19140A5C42D8715(), 5000, 0);
							unk_0xBB2EBD7F469C8767(0, -1156.175f, 4926.073f, 221.3447f, unk_0xA19140A5C42D8715(), 2f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
							unk_0x9C24BCD3EFB3BF4C(0, unk_0xA19140A5C42D8715(), 6500, 0);
							unk_0x9C24BCD3EFB3BF4C(0, unk_0xA19140A5C42D8715(), 4500, 0);
							unk_0xDA4D3941AFF8EF12(0, unk_0xA19140A5C42D8715(), 0, 16);
							unk_0x301F42EEE3C40328(uLocal_107);
							unk_0xE1072FA2FECBAD96(iLocal_98[13], uLocal_107);
							unk_0x3A95A0A3221D4208(&uLocal_107);
							unk_0x2F89329397A277BC(&uLocal_107);
							unk_0x9C24BCD3EFB3BF4C(0, unk_0xA19140A5C42D8715(), 3000, 0);
							unk_0xBB2EBD7F469C8767(0, -1157.962f, 4922.196f, 221.309f, unk_0xA19140A5C42D8715(), 2f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
							unk_0x9C24BCD3EFB3BF4C(0, unk_0xA19140A5C42D8715(), 5500, 0);
							unk_0x9C24BCD3EFB3BF4C(0, unk_0xA19140A5C42D8715(), 4500, 0);
							unk_0xDA4D3941AFF8EF12(0, unk_0xA19140A5C42D8715(), 0, 16);
							unk_0x301F42EEE3C40328(uLocal_107);
							unk_0xE1072FA2FECBAD96(iLocal_98[12], uLocal_107);
							unk_0x3A95A0A3221D4208(&uLocal_107);
							unk_0x2F89329397A277BC(&uLocal_107);
							unk_0x9C24BCD3EFB3BF4C(0, unk_0xA19140A5C42D8715(), 4500, 0);
							unk_0x31EFDFB98A2215DD(0, unk_0xA19140A5C42D8715(), 10000, 0);
							unk_0xBB2EBD7F469C8767(0, -1161.475f, 4916.061f, 220.5658f, unk_0xA19140A5C42D8715(), 2f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
							unk_0x9C24BCD3EFB3BF4C(0, unk_0xA19140A5C42D8715(), 4500, 0);
							unk_0x9C24BCD3EFB3BF4C(0, unk_0xA19140A5C42D8715(), 4500, 0);
							unk_0xDA4D3941AFF8EF12(0, unk_0xA19140A5C42D8715(), 0, 16);
							unk_0x301F42EEE3C40328(uLocal_107);
							unk_0xE1072FA2FECBAD96(iLocal_98[11], uLocal_107);
							unk_0x3A95A0A3221D4208(&uLocal_107);
							unk_0xD738221C247C8B71(iLocal_98[iVar1], 1);
							unk_0xB0D7019224A3A443(iLocal_98[iVar1], 156, 1);
						}
					}
					else
					{
						iLocal_98[iVar1] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_o_acult_02"), vLocal_51[iVar1 /*3*/], fLocal_52[iVar1], 1, 1);
						unk_0x8695E04AA104690A(iLocal_98[iVar1], 0);
						unk_0xF0188A1B49D79AF7(iLocal_98[iVar1], joaat("weapon_pistol"), -1, 1, 1);
						unk_0x3B7A32E04BBE59A5(iLocal_98[iVar1], 50, 1);
						unk_0x8AA21BBDA4DB2C4F(iLocal_98[iVar1], 2);
						unk_0xF19FB7DA7E62392D(iLocal_98[iVar1], 0);
						unk_0xEA45F8224FC3C7AD(iLocal_98[iVar1], 50f, 20);
						unk_0xF63074D1E750B871(iLocal_98[iVar1], 1);
						unk_0xD461381B293D9B46(iLocal_98[iVar1], 5);
						unk_0x3677CB0D846A1308(iLocal_98[iVar1], 100f);
						unk_0xF26F4E13A8AEC5EB(iLocal_98[iVar1], 100f);
						unk_0x6909FCF0DF666AF6(iLocal_98[iVar1], unk_0x22C775856F4633CA(40, 60));
						unk_0xDA4D3941AFF8EF12(iLocal_98[iVar1], unk_0xA19140A5C42D8715(), 0, 16);
					}
					unk_0xDFA901280292A2FB(iLocal_98[iVar1], iLocal_270);
					unk_0x92DDCF53AA47A63D(iLocal_98[iVar1], func_127(unk_0xE2BBD32891C18569(iLocal_98[iVar1], 1), func_93(unk_0xD4E735F4B6A956AC())));
					unk_0x1F4E5EFBFE503FB3(iLocal_98[iVar1], 1);
					unk_0x13E0A8160525AE55(iLocal_98[iVar1], 42, true);
					uLocal_105[iVar1] = func_125(iLocal_98[iVar1], 1, 145);
					iVar1++;
				}
				func_97(&uLocal_271, 0, unk_0xA19140A5C42D8715(), "TREVOR", 0, 1);
				func_97(&uLocal_271, 3, iLocal_98[11], "ACULTMaster", 0, 1);
				func_97(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
				unk_0x2BCFB39E86340DAA(&iVar0, 1);
				unk_0x2BCFB39E86340DAA(&iVar0, 3);
				unk_0x2BCFB39E86340DAA(&iVar0, 4);
				if (!bLocal_76)
				{
					uLocal_102[0] = unk_0x4B3DFBACE939C0B8(joaat("pickup_money_case"), -1074.165f, 4897.468f, 213.2754f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_102[1] = unk_0x4B3DFBACE939C0B8(joaat("pickup_money_case"), -1094.671f, 4892.789f, 215.0707f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_102[2] = unk_0x4B3DFBACE939C0B8(joaat("pickup_money_case"), -1113.95f, 4904.385f, 217.6001f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_102[3] = unk_0x4B3DFBACE939C0B8(joaat("pickup_money_case"), -1145.273f, 4907.894f, 219.9734f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
				}
				uLocal_102[0] = uLocal_102[0];
				uLocal_102[1] = uLocal_102[1];
				uLocal_102[2] = uLocal_102[2];
				uLocal_102[3] = uLocal_102[3];
				iLocal_103[0] = unk_0xFCFC8CC5FF74580D(-1322183878, -1158.69f, 4915.709f, 220.2644f, 1, 1, 0);
				iLocal_103[1] = unk_0xFCFC8CC5FF74580D(-2022916910, -1156.246f, 4918.6f, 220.5432f, 1, 1, 0);
				iLocal_103[2] = unk_0xFCFC8CC5FF74580D(-1322183878, -1145.802f, 4931.816f, 219.9683f, 1, 1, 0);
				iLocal_103[3] = unk_0xFCFC8CC5FF74580D(-1322183878, -1133.369f, 4919.067f, 218.8385f, 1, 1, 0);
				iLocal_103[4] = unk_0xFCFC8CC5FF74580D(joaat("prop_box_wood05a"), -1132.025f, 4921.483f, 218.8244f, 1, 1, 0);
				iLocal_103[5] = unk_0xFCFC8CC5FF74580D(-2022916910, -1112.66f, 4929.268f, 217.1752f, 1, 1, 0);
				unk_0x76D3D51F5F66367F(iLocal_103[0], 12.24288f, -0.014582f, 27.06056f, 2, 1);
				unk_0x76D3D51F5F66367F(iLocal_103[1], 7.733739f, 9.432779f, -2.865618f, 2, 1);
				unk_0x76D3D51F5F66367F(iLocal_103[2], 3.735082f, 4.551246f, 86.30917f, 2, 1);
				unk_0x76D3D51F5F66367F(iLocal_103[3], 0.240341f, 1.095195f, 36.59031f, 2, 1);
				unk_0x76D3D51F5F66367F(iLocal_103[4], 7.6772f, 1.232743f, 93.27483f, 2, 1);
				unk_0x76D3D51F5F66367F(iLocal_103[5], 3.367802f, -5.14387f, 97.30567f, 2, 1);
				if (func_124() < 50)
				{
					unk_0x99894382E9C18637(unk_0xD4E735F4B6A956AC(), 0.5f, 1);
				}
				if (func_123() != 18)
				{
					func_121(18);
				}
				if (!func_90())
				{
					func_110(0);
				}
				func_1(1);
				bLocal_76 = false;
				iLocal_50 = 4;
			}
			break;
	}
}

int func_110(int iParam0)
{
	if (func_115())
	{
		Global_106060 = 1;
		Global_106057 = unk_0xFD34717937104F1C();
		if (func_114(Global_106059))
		{
			func_111(0);
		}
		unk_0x9E212A43A08FF3F9(1, "RE_TITLE");
		if (iParam0 && func_114(Global_106059))
		{
			unk_0xE134853379787E6A();
		}
		return 1;
	}
	return 0;
}

void func_111(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_106070.f_24967.f_2 < 3)
			{
				if (!unk_0x90A6E668DB47D464())
				{
					func_112(func_113(iParam0), -1);
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
					func_112(func_113(iParam0), -1);
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
					func_112(func_113(iParam0), -1);
					Global_106070.f_24967.f_4++;
					unk_0x2BCFB39E86340DAA(&Global_106066, 2);
				}
			}
			break;
	}
}

void func_112(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, 1, iParam1);
}

char* func_113(int iParam0)
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

int func_114(int iParam0)
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

int func_115()
{
	switch (func_116(&Global_25518, 0, 5, 0, unk_0xFCB3E4B16B4A9EC1()))
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

int func_116(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_120(0))
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
		if (!func_118(iParam2))
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
			func_117(uParam0, iParam4);
		}
	}
	return 2;
}

void func_117(var uParam0, int iParam1)
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

bool func_118(int iParam0)
{
	return func_119(iParam0, Global_36117);
}

int func_119(int iParam0, int iParam1)
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

int func_120(int iParam0)
{
	if (Global_36117 == 15)
	{
		return 0;
	}
	if (func_118(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_121(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_91();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_63(iParam0);
	unk_0x7B9D98D1F4280B24(0);
	unk_0x509F44AFDE7B1FCA(1);
	Global_106056 = 0;
	func_122();
}

void func_122()
{
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			unk_0xFC00A668AFC2126D(unk_0x8F474E419F56E48D(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)), 1);
		}
		unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 32, false);
	}
}

int func_123()
{
	return Global_106059;
}

int func_124()
{
	var uVar0;
	
	switch (func_14())
	{
		case 0:
			unk_0x2AD48F3CEBA882E9(joaat("sp0_special_ability"), &uVar0, -1);
			break;
		
		case 1:
			unk_0x2AD48F3CEBA882E9(joaat("sp1_special_ability"), &uVar0, -1);
			break;
		
		case 2:
			unk_0x2AD48F3CEBA882E9(joaat("sp2_special_ability"), &uVar0, -1);
			break;
	}
	return uVar0;
}

int func_125(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_126(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xCE3CB618AFE55EFB(iVar0)) && unk_0x445EC9E7EACB710E(&(Global_106070.f_28022[iParam2 /*29*/].f_3)))
	{
		unk_0xC4F12E446CCE89F5(iVar0, &(Global_106070.f_28022[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_126(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x6A15DD6A863D5E27(iParam0);
	if (unk_0xFAC06EE780B57279(iParam0))
	{
		unk_0x575CF00E129E0CE1(iVar0, func_39(unk_0x4C9BACA8D249CB13(), 1f, 1f));
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
		unk_0x575CF00E129E0CE1(iVar0, func_39(unk_0x4C9BACA8D249CB13(), 0.7f, 0.7f));
		unk_0xF46EDCACB3804F87(iVar0, bParam1);
	}
	else if (unk_0x92D42293DA8F9805(iParam0))
	{
		unk_0x575CF00E129E0CE1(iVar0, func_39(unk_0x4C9BACA8D249CB13(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_127(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3)
{
	return unk_0x0C1B8F3F6EFDC58B((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_128()
{
	Global_25695 = 1;
}

int func_129(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	iVar2 = iParam1;
	if (!unk_0x22B3625D717A4563(iParam0, iParam1, 0))
	{
		iVar0 = 1;
	}
	if (iVar2 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	iVar3 = 0;
	if (iParam2 == 1)
	{
		if (!unk_0x7112137033807390(iParam0, 0))
		{
			iVar3 = unk_0x8F62F4EC66847EC2(iParam0, iVar2);
		}
		if (iVar3 == -1)
		{
			iVar4 = unk_0x8B0F1AE7686BED1C(iVar2);
			if (iVar4 > 0)
			{
				iVar3 = iVar4;
			}
			else
			{
				unk_0x777DF4661165BA4B(iParam0, iVar2, &iVar3);
			}
		}
	}
	vVar5 = { unk_0xE2BBD32891C18569(iParam0, 0) - Vector(10f, 0f, 0f) };
	if (bParam3)
	{
		vVar5 = { iParam4, iParam5, iParam6 };
	}
	while (func_133(iVar2, iVar6) != 0)
	{
		if (!unk_0x7112137033807390(iParam0, 0))
		{
			if (unk_0x15763A17141CD6EE(iParam0, iVar2, func_133(iVar2, iVar6)))
			{
				if (func_132(func_133(iVar2, iVar6)))
				{
					iVar7 = unk_0x73929A7BB3EF0A64(func_133(iVar2, iVar6));
				}
			}
		}
		iVar6++;
	}
	iVar1 = unk_0x9B3030FF43CE94B3(iVar2, iVar3, vVar5, iVar0, 1065353216, iVar7, iParam7, iParam8);
	while (func_133(iVar2, iVar6) != 0)
	{
		if (!unk_0x7112137033807390(iParam0, 0))
		{
			if (unk_0x15763A17141CD6EE(iParam0, iVar2, func_133(iVar2, iVar6)))
			{
				unk_0x9D1B97F26237B39F(iVar1, func_133(iVar2, iVar6));
				func_130(iVar1, func_133(iVar2, iVar6));
			}
		}
		iVar6++;
	}
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		if (unk_0x22B3625D717A4563(iParam0, iVar2, 0))
		{
			unk_0xA51C2043DA0F2A7B(iVar1, unk_0x52AB19133B083547(iParam0, iVar2));
		}
	}
	return iVar1;
}

void func_130(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_131(iParam1);
	if (iVar0 != 0)
	{
		unk_0x9D1B97F26237B39F(iParam0, iVar0);
	}
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 1550611612:
			return -1258515792;
			break;
		
		case 368550800:
			return 438243936;
			break;
		
		case -1769069349:
			return -455079056;
			break;
		
		case 24902297:
			return 740920107;
			break;
		
		case -228041614:
			return -541616347;
			break;
		
		case -584961562:
			return 1809261196;
			break;
		
		case -1153175946:
			return -1646538868;
			break;
		
		case 1301287696:
			return -1290164948;
			break;
		
		case 1597093459:
			return -964465134;
			break;
		
		case 1769871776:
			return 1135718771;
			break;
		
		case -1827882671:
			return 1253942266;
			break;
		
		case 259780317:
			return -403805974;
			break;
		
		case -1973342474:
			return 691432737;
			break;
		
		case 1996130345:
			return 987648331;
			break;
		
		case -1455657812:
			return -431680535;
			break;
		
		case -1668263084:
			return -847582310;
			break;
		
		case 1308243489:
			return -92592218;
			break;
		
		case 1122574335:
			return -494548326;
			break;
		
		case 1420313469:
			return 730876697;
			break;
		
		case 109848390:
			return 583159708;
			break;
		
		case 593945703:
			return -1928503603;
			break;
		
		case 1142457062:
			return 520557834;
			break;
	}
	return 0;
}

int func_132(int iParam0)
{
	if ((((((((((((((((((((((((((((((((iParam0 == joaat("component_pistol_varmod_luxe") || iParam0 == joaat("component_combatpistol_varmod_lowrider")) || iParam0 == joaat("component_appistol_varmod_luxe")) || iParam0 == joaat("component_microsmg_varmod_luxe")) || iParam0 == joaat("component_smg_varmod_luxe")) || iParam0 == joaat("component_assaultrifle_varmod_luxe")) || iParam0 == joaat("component_carbinerifle_varmod_luxe")) || iParam0 == joaat("component_advancedrifle_varmod_luxe")) || iParam0 == joaat("component_mg_varmod_lowrider")) || iParam0 == joaat("component_combatmg_varmod_lowrider")) || iParam0 == joaat("component_pumpshotgun_varmod_lowrider")) || iParam0 == joaat("component_sniperrifle_varmod_luxe")) || iParam0 == joaat("component_assaultsmg_varmod_lowrider")) || iParam0 == joaat("component_pistol50_varmod_luxe")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_bullpuprifle_varmod_low")) || iParam0 == joaat("component_snspistol_varmod_lowrider")) || iParam0 == joaat("component_specialcarbine_varmod_lowrider")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_knuckle_varmod_pimp")) || iParam0 == joaat("component_knuckle_varmod_ballas")) || iParam0 == joaat("component_knuckle_varmod_dollar")) || iParam0 == joaat("component_knuckle_varmod_diamond")) || iParam0 == joaat("component_knuckle_varmod_hate")) || iParam0 == joaat("component_knuckle_varmod_love")) || iParam0 == joaat("component_knuckle_varmod_player")) || iParam0 == joaat("component_knuckle_varmod_king")) || iParam0 == joaat("component_knuckle_varmod_vagos")) || iParam0 == joaat("component_switchblade_varmod_var1")) || iParam0 == joaat("component_switchblade_varmod_var2")) || iParam0 == joaat("component_revolver_varmod_boss")) || iParam0 == joaat("component_revolver_varmod_goon")) || iParam0 == 1623028892)
	{
		return 1;
	}
	return 0;
}

int func_133(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2067221805;
					break;
				
				case 1:
					iVar0 = -1820405577;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_135(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x6E55AE7B1FEC08C5(iVar1))
					{
						if (unk_0xA9A013B7FD7A9A7F(iVar1, iVar2, &Var5))
						{
							if (!func_134(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case -1258515792:
		case 438243936:
		case -455079056:
		case 740920107:
		case -541616347:
		case 1809261196:
		case -1646538868:
		case -1290164948:
		case -964465134:
		case 1135718771:
		case 1253942266:
		case -403805974:
		case 691432737:
		case 987648331:
		case -431680535:
		case -847582310:
		case -92592218:
		case -494548326:
		case 730876697:
		case 583159708:
		case -1928503603:
		case 520557834:
			return 1;
			break;
	}
	return 0;
}

int func_135(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x0AD363FF0CEF93B1();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x8798F3E6AE76AF63(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_136()
{
	bool bVar0;
	
	bVar0 = unk_0x7974D616EF03E483();
	if (!Global_71204)
	{
		if (!bVar0)
		{
			Global_71204 = 1;
		}
	}
	return bVar0;
}

int func_137(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_138(iParam0, iParam1);
}

int func_138(int iParam0, int iParam1)
{
	if (func_16(14) && !func_149(iParam0))
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
	if (func_148(&Global_4268566))
	{
		if (func_146(&Global_4268566, iParam0))
		{
			return 0;
		}
		if (func_139(&Global_4268566, iParam0))
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

int func_139(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x16E6CF5D5B848918(iParam1))
	{
		return 0;
	}
	if (func_16(14) && !func_149(iParam1))
	{
		return 0;
	}
	if (func_146(uParam0, iParam1))
	{
		return 0;
	}
	if (func_145(uParam0) < 0f)
	{
		func_144(uParam0, 0);
	}
	func_142(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_140(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_140(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x16E6CF5D5B848918(iParam1))
	{
		return 0;
	}
	if (func_16(14) && !func_149(iParam1))
	{
		return 0;
	}
	if (func_146(uParam0, iParam1))
	{
		return 0;
	}
	if (func_145(uParam0) < 0f)
	{
		func_144(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_141(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_141(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_142(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_143(uParam0, iVar0);
		iVar0++;
	}
	func_144(uParam0, (Global_4268565 - 0.5f));
}

void func_143(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_144(var uParam0, float fParam1)
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

float func_145(var uParam0)
{
	return uParam0->f_80;
}

bool func_146(var uParam0, int iParam1)
{
	return func_147(uParam0, iParam1) != -1;
}

int func_147(var uParam0, int iParam1)
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

bool func_148(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_149(int iParam0)
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

void func_150()
{
	if (fLocal_87 > 0f)
	{
		fLocal_87 = (fLocal_87 - (0.6f / (1f / unk_0xDE089748C4C76C96())));
	}
	else
	{
		fLocal_87 = 0f;
	}
	if (fLocal_87 >= 0f)
	{
		unk_0x2A934A66F44B6595(Global_35240[10 /*31*/], fLocal_87, 0, 1);
		unk_0x6417FCFC98785F84(Global_35240[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_86 < 0f)
	{
		fLocal_86 = (fLocal_86 + (0.6f / (1f / unk_0xDE089748C4C76C96())));
	}
	else
	{
		fLocal_86 = 0f;
	}
	if (fLocal_86 <= 0f)
	{
		unk_0x2A934A66F44B6595(Global_35240[9 /*31*/], fLocal_86, 0, 1);
		unk_0x6417FCFC98785F84(Global_35240[9 /*31*/], 4, 0, 1);
	}
}

void func_151()
{
	if (fLocal_87 < 1f)
	{
		fLocal_87 = (fLocal_87 + (0.6f / (1f / unk_0xDE089748C4C76C96())));
	}
	else
	{
		fLocal_87 = 1f;
	}
	if (fLocal_87 <= 1f)
	{
		unk_0x2A934A66F44B6595(Global_35240[10 /*31*/], fLocal_87, 0, 1);
		unk_0x6417FCFC98785F84(Global_35240[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_86 > -1f)
	{
		fLocal_86 = (fLocal_86 - (0.6f / (1f / unk_0xDE089748C4C76C96())));
	}
	else
	{
		fLocal_86 = -1f;
	}
	if (fLocal_86 >= -1f)
	{
		unk_0x2A934A66F44B6595(Global_35240[9 /*31*/], fLocal_86, 0, 1);
		unk_0x6417FCFC98785F84(Global_35240[9 /*31*/], 4, 0, 1);
	}
}

void func_152()
{
	switch (iLocal_93)
	{
		case 0:
			unk_0xCACEBBBEAD8F262E(joaat("a_m_o_acult_02"));
			unk_0xCACEBBBEAD8F262E(joaat("prop_anim_cash_pile_02"));
			unk_0x6D68030C791111E0("random@altruist_cult");
			unk_0x7B5129A25EE58E36("AC_DELIVERED");
			unk_0x9231E8057B40EF0E(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0x7FC99CCC73354033(joaat("a_m_o_acult_02")) && unk_0x7FC99CCC73354033(joaat("prop_anim_cash_pile_02"))) && unk_0x39C2D9AB77873F84("random@altruist_cult")) && unk_0x7B5129A25EE58E36("AC_DELIVERED")) && unk_0x86FB195D8E9C4FAB(joaat("weapon_assaultrifle")))
			{
				if (Global_106070.f_24967.f_5 < 2)
				{
					if (Global_106070.f_24967.f_5 == 0)
					{
						sLocal_269 = "ACULT_HI";
					}
					else
					{
						sLocal_269 = "ACULT_LEAVE5";
					}
					sLocal_263 = "cult_p5_guard";
					sLocal_265 = "cult_p5_trv";
					sLocal_266 = "cult_p5_victim_01";
					sLocal_267 = "cult_p5_victim_02";
					sLocal_268 = "cult_p5_cam";
					fLocal_89 = 0.75f;
					fLocal_88 = 0.999f;
				}
				else if (Global_106070.f_24967.f_5 >= 2)
				{
					sLocal_269 = "ACULT_CAPT";
					sLocal_263 = "cult_p7_guard_01";
					sLocal_264 = "cult_p7_guard_02";
					sLocal_265 = "cult_p7_trv";
					sLocal_266 = "cult_p7_victim_01";
					sLocal_267 = "cult_p7_victim_02";
					sLocal_268 = "cult_p7_cam";
					fLocal_89 = 0.98f;
					fLocal_88 = 0.98f;
					unk_0xCACEBBBEAD8F262E(-2022916910);
					unk_0xCACEBBBEAD8F262E(-1322183878);
					unk_0xCACEBBBEAD8F262E(joaat("prop_box_wood05a"));
					unk_0xCACEBBBEAD8F262E(joaat("prop_security_case_01"));
					if (!unk_0x99E48E2CD778F380())
					{
						unk_0x9D7A6D81C3BE2AAE("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0xCE3CB618AFE55EFB(iLocal_104))
				{
					unk_0xE1623437A3194332(&iLocal_104);
				}
				func_21(1, 1, 1, 0, 0);
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 0);
				unk_0x135C61E339DABBAC(1);
				unk_0x85685830EFB9A55E(0);
				unk_0xDC374DA4DC566237(0);
				unk_0x065673561216B3C6(unk_0xA19140A5C42D8715(), 1);
				unk_0xB20B772FD9DE1847(unk_0xA19140A5C42D8715(), joaat("weapon_unarmed"), 1);
				unk_0x9444470D6D9ADB88("AC_DELIVERED");
				if (func_176())
				{
					func_175(0);
				}
				func_173();
				wait(0);
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					iLocal_99 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
					if (unk_0x1095F403F52B42E1(iLocal_99, 0))
					{
						if (unk_0x097275D546C9735F(iLocal_99))
						{
							iLocal_93++;
						}
					}
				}
				else
				{
					iLocal_99 = unk_0xC409B91AC4749F88();
					if (!unk_0x4915F4759304D5CF(uLocal_97[0]) && !unk_0x4915F4759304D5CF(uLocal_97[1]))
					{
						unk_0x9568B1B58F78FF36(uLocal_97[0]);
						unk_0xF8136E11BE4BEAC3(uLocal_97[0]);
						unk_0x9568B1B58F78FF36(uLocal_97[1]);
						unk_0xF8136E11BE4BEAC3(uLocal_97[1]);
					}
					iLocal_93++;
				}
			}
			break;
		
		case 1:
			if (unk_0xDC5D81351D6A4DDB(iLocal_99))
			{
				if (!unk_0x4943BEEC19289B8E(iLocal_99))
				{
					unk_0x1F7948851FB36E88(iLocal_99, 1, 0);
				}
				if (unk_0xA60C975CBAB69F34(iLocal_99, vLocal_54, 13f, 13f, 13f, 0, 1, 0))
				{
					unk_0x4299736016AECE26(iLocal_99, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!unk_0x7112137033807390(iLocal_99, 0))
					{
						unk_0x92DDCF53AA47A63D(iLocal_99, 149.8882f);
						unk_0x99F546A9200EA026(iLocal_99, 1084227584);
					}
				}
			}
			unk_0xFDD15D670AD33E10(vLocal_54, 12f, 1, 0, 0, false);
			unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 128.2065f);
			if (!unk_0x4915F4759304D5CF(uLocal_97[0]) && !unk_0x4915F4759304D5CF(uLocal_97[1]))
			{
				unk_0x4299736016AECE26(uLocal_97[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				unk_0x92DDCF53AA47A63D(uLocal_97[0], 128.2065f);
				unk_0x4299736016AECE26(uLocal_97[1], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 1f, 0f), 1, 0, 0, 1);
				unk_0x92DDCF53AA47A63D(uLocal_97[1], 128.2065f);
			}
			iLocal_98[0] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
			func_97(&uLocal_271, 1, iLocal_98[0], "ACULTMember1", 0, 1);
			if (Global_106070.f_24967.f_5 >= 2)
			{
				iLocal_98[1] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
				func_97(&uLocal_271, 2, iLocal_98[1], "ACULTMember2", 0, 1);
			}
			func_97(&uLocal_271, 0, unk_0xA19140A5C42D8715(), "TREVOR", 0, 1);
			func_97(&uLocal_271, 3, 0, "ACULTMaster", 0, 1);
			func_97(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
			func_98(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
			unk_0x1F4E5EFBFE503FB3(iLocal_98[0], 1);
			iLocal_101 = unk_0x9B3030FF43CE94B3(joaat("weapon_assaultrifle"), -1, unk_0xE2BBD32891C18569(iLocal_98[0], 1), 1, 1065353216, 0, 0, 1);
			unk_0x96B71B23D409A3DB(iLocal_101, iLocal_98[0], unk_0xF622A022C26057AA(iLocal_98[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_106070.f_24967.f_5 < 2)
			{
				iLocal_100 = unk_0xFCFC8CC5FF74580D(joaat("prop_anim_cash_pile_02"), vLocal_53, 1, 1, 0);
				unk_0x96B71B23D409A3DB(iLocal_100, unk_0xA19140A5C42D8715(), unk_0xF622A022C26057AA(unk_0xA19140A5C42D8715(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			else if (Global_106070.f_24967.f_5 >= 2)
			{
				unk_0xF0188A1B49D79AF7(iLocal_98[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			iLocal_106 = unk_0x57FC10C74CC15F22("DEFAULT_ANIMATED_CAMERA", 1);
			iLocal_92 = unk_0x70788DC3D80C9DEB(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			unk_0xE5565DEAABF9D588(unk_0xA19140A5C42D8715(), iLocal_92, "random@altruist_cult", sLocal_265, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0xE5565DEAABF9D588(iLocal_98[0], iLocal_92, "random@altruist_cult", sLocal_263, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_106070.f_24967.f_5 >= 2)
			{
				unk_0xE5565DEAABF9D588(iLocal_98[1], iLocal_92, "random@altruist_cult", sLocal_264, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0xF84EE501E63C86CF(iLocal_106, iLocal_92, sLocal_268, "random@altruist_cult");
			unk_0x8E88E73F74A9FF79(true, 0, 3000, 1, 0, 0);
			if (!unk_0x4915F4759304D5CF(uLocal_97[0]) && !unk_0x4915F4759304D5CF(uLocal_97[1]))
			{
				unk_0xE5565DEAABF9D588(uLocal_97[0], iLocal_92, "random@altruist_cult", sLocal_266, 1000f, -2f, 4, 0, 1148846080, 0);
				unk_0xE5565DEAABF9D588(uLocal_97[1], iLocal_92, "random@altruist_cult", sLocal_267, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_93++;
			break;
		
		case 2:
			if (!unk_0x4915F4759304D5CF(uLocal_97[0]))
			{
				if (unk_0x18F3A53F9DAFB8C9(uLocal_97[0]))
				{
					func_171(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_171(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0x4915F4759304D5CF(uLocal_97[1]))
			{
				if (unk_0x18F3A53F9DAFB8C9(uLocal_97[1]))
				{
					func_171(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_171(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0x33CECDD9E141E18E(iLocal_92) > fLocal_89)
			{
				iLocal_93++;
			}
			break;
		
		case 3:
			if (!unk_0x4915F4759304D5CF(uLocal_97[0]))
			{
				if (unk_0x18F3A53F9DAFB8C9(uLocal_97[0]))
				{
					func_171(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_171(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0x4915F4759304D5CF(uLocal_97[1]))
			{
				if (unk_0x18F3A53F9DAFB8C9(uLocal_97[1]))
				{
					func_171(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_171(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0x33CECDD9E141E18E(iLocal_92) > fLocal_88)
			{
				iLocal_93++;
			}
			break;
		
		case 4:
			if (Global_106070.f_24967.f_5 < 2)
			{
				func_128();
				if (unk_0xDC5D81351D6A4DDB(iLocal_98[0]))
				{
					unk_0x680F17660351F21B(&(iLocal_98[0]));
				}
				if (unk_0xDC5D81351D6A4DDB(iLocal_98[1]))
				{
					unk_0x680F17660351F21B(&(iLocal_98[1]));
				}
				if (unk_0xDC5D81351D6A4DDB(iLocal_100))
				{
					unk_0xC0AC848E56940C34(&iLocal_100);
				}
				if (unk_0xDC5D81351D6A4DDB(iLocal_101))
				{
					unk_0xC0AC848E56940C34(&iLocal_101);
				}
				unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
				unk_0xCE2F428A0EEBBE18(0, 0, 3, 0);
				unk_0x930701157A4B9374(iLocal_106, false);
				func_21(0, 1, 1, 0, 0);
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
				unk_0x85685830EFB9A55E(1);
				unk_0xDC374DA4DC566237(1);
				unk_0x065673561216B3C6(unk_0xA19140A5C42D8715(), 0);
				unk_0xD87B76260C547F31(0f);
				func_153(func_14(), 1, 2000, 0, 0);
			}
			unk_0x9444470D6D9ADB88("AC_DONE");
			Global_106070.f_24967.f_5 += 2;
			iLocal_78 = 1;
			break;
	}
}

void func_153(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_154(Global_106070.f_28022[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

int func_154(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_170();
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
					func_169(99, 1);
					func_168(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_168(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_168(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_166(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_162(5))
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
							func_168(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_168(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_168(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_162(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_168(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_168(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_168(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_168(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_168(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_168(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_168(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_168(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_168(joaat("sp2_money_spent_property"), iParam3);
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
									func_168(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_168(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_168(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_168(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_168(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_168(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_162(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_168(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_168(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_168(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_168(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_168(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_168(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_161(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_169(95, iParam3);
					break;
				
				case 1:
					func_169(97, iParam3);
					break;
				
				case 2:
					func_169(96, iParam3);
					break;
			}
			func_169(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_157(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_157(iVar1);
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
					func_168(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_168(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_168(joaat("sp2_total_cash_earned"), iParam3);
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
	func_156(iParam0);
	if (Global_36117 == 15)
	{
		func_155(0);
	}
	return 1;
}

void func_155(bool bParam0)
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

void func_156(int iParam0)
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

void func_157(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_160(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_160(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_160(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_160(137, 0, -1, 1);
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
	else if (unk_0x05EFB6A616B6FADE(Global_106070.f_20536.f_471, iParam0) || unk_0x05EFB6A616B6FADE(Global_2097152[func_159() /*12745*/].f_8178.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xFA57C719261AA55D(&(Global_106070.f_20536.f_471), iParam0);
		unk_0xFA57C719261AA55D(&(Global_2097152[func_159() /*12745*/].f_8178.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x59FF6261546DDD52("COUP_RED");
		unk_0x4FDA9E6EF359F8A9(func_158(iParam0));
		unk_0x595B8132C1F20265(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_158(int iParam0)
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

int func_159()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_160(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_25();
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

void func_161(int iParam0)
{
	func_169(93, iParam0);
	func_169(29, iParam0);
	func_169(30, iParam0);
}

bool func_162(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_163(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_163(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_163(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_163(137, -1, -1);
	}
	if (!unk_0x4C9BACA8D249CB13())
	{
		return unk_0x05EFB6A616B6FADE(Global_106070.f_20536.f_471, iParam0);
	}
	return unk_0x05EFB6A616B6FADE(Global_2097152[func_159() /*12745*/].f_8178.f_10, iParam0);
}

int func_163(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_25();
	}
	iVar1 = func_165(iParam0, iParam1);
	uVar2 = func_164(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x07EEB31CF063DAB7(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_164(int iParam0)
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

int func_165(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_25();
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

int func_166(bool bParam0)
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
		func_167(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_137(27, 1);
	return 1;
}

int func_167(int iParam0, int iParam1)
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

void func_168(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x2AD48F3CEBA882E9(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x93180BE33E7149EF(iParam0, iVar0, 1);
}

void func_169(int iParam0, int iParam1)
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

void func_170()
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

void func_171(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x85AF6DC3641E2442(uParam0, sParam1, sParam2, func_172(iParam3), 0);
}

int func_172(int iParam0)
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

void func_173()
{
	Global_14688 = 0;
	func_174();
}

void func_174()
{
	unk_0xB4E5B1A6FE923ECB();
	Global_16833 = 0;
	if (unk_0x904275961B875DEB())
	{
		unk_0xA8B97F91CBDE376C(false);
		Global_15822 = 6;
	}
}

void func_175(int iParam0)
{
	Global_16833 = iParam0;
}

int func_176()
{
	if (Global_16833 == 1)
	{
		return 1;
	}
	return 0;
}

void func_177()
{
	switch (iLocal_93)
	{
		case 0:
			unk_0xCACEBBBEAD8F262E(joaat("a_m_o_acult_02"));
			unk_0xCACEBBBEAD8F262E(joaat("prop_anim_cash_pile_02"));
			unk_0x6D68030C791111E0("random@altruist_cult");
			unk_0x7B5129A25EE58E36("AC_DELIVERED");
			unk_0x9231E8057B40EF0E(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0x7FC99CCC73354033(joaat("a_m_o_acult_02")) && unk_0x7FC99CCC73354033(joaat("prop_anim_cash_pile_02"))) && unk_0x39C2D9AB77873F84("random@altruist_cult")) && unk_0x7B5129A25EE58E36("AC_DELIVERED")) && unk_0x86FB195D8E9C4FAB(joaat("weapon_assaultrifle")))
			{
				if (Global_106070.f_24967.f_5 == 0)
				{
					sLocal_269 = "ACULT_HI";
					sLocal_263 = "cult_p2_guard";
					sLocal_265 = "cult_p2_trv";
					sLocal_266 = "cult_p2_victim";
					sLocal_268 = "cult_p2_cam";
					fLocal_89 = 0.8f;
					fLocal_88 = 0.968f;
				}
				else if (Global_106070.f_24967.f_5 == 1)
				{
					sLocal_269 = "ACULT_LEAVE3";
					sLocal_263 = "cult_p4_guard";
					sLocal_265 = "cult_p4_trv";
					sLocal_266 = "cult_p4_victim";
					sLocal_268 = "cult_p4_cam";
					fLocal_89 = 0.77f;
					fLocal_88 = 0.999f;
				}
				else if (Global_106070.f_24967.f_5 == 2)
				{
					sLocal_269 = "ACULT_LEAVE3";
					sLocal_263 = "cult_p4_guard";
					sLocal_265 = "cult_p4_trv";
					sLocal_266 = "cult_p4_victim";
					sLocal_268 = "cult_p4_cam";
					fLocal_89 = 0.77f;
					fLocal_88 = 0.999f;
				}
				else if (Global_106070.f_24967.f_5 >= 3)
				{
					sLocal_269 = "ACULT_CAPT";
					sLocal_263 = "cult_p7_guard_01";
					sLocal_264 = "cult_p7_guard_02";
					sLocal_265 = "cult_p7_trv";
					sLocal_266 = "cult_p7_victim_01";
					sLocal_268 = "cult_p7_cam";
					fLocal_89 = 0.98f;
					fLocal_88 = 0.98f;
					unk_0xCACEBBBEAD8F262E(-2022916910);
					unk_0xCACEBBBEAD8F262E(-1322183878);
					unk_0xCACEBBBEAD8F262E(joaat("prop_box_wood05a"));
					unk_0xCACEBBBEAD8F262E(joaat("prop_security_case_01"));
					if (!unk_0x99E48E2CD778F380())
					{
						unk_0x9D7A6D81C3BE2AAE("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0xCE3CB618AFE55EFB(iLocal_104))
				{
					unk_0xE1623437A3194332(&iLocal_104);
				}
				func_21(1, 1, 1, 0, 0);
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 0);
				unk_0x135C61E339DABBAC(1);
				unk_0x85685830EFB9A55E(0);
				unk_0xDC374DA4DC566237(0);
				unk_0x065673561216B3C6(unk_0xA19140A5C42D8715(), 1);
				unk_0xB20B772FD9DE1847(unk_0xA19140A5C42D8715(), joaat("weapon_unarmed"), 1);
				unk_0x9444470D6D9ADB88("AC_DELIVERED");
				if (func_176())
				{
					func_175(0);
				}
				func_173();
				wait(0);
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					iLocal_99 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
					if (unk_0x1095F403F52B42E1(iLocal_99, 0))
					{
						if (unk_0x097275D546C9735F(iLocal_99))
						{
							iLocal_93++;
						}
					}
				}
				else
				{
					iLocal_99 = unk_0xC409B91AC4749F88();
					if (!unk_0x4915F4759304D5CF(uLocal_97[0]))
					{
						unk_0x9568B1B58F78FF36(uLocal_97[0]);
						unk_0xF8136E11BE4BEAC3(uLocal_97[0]);
					}
					iLocal_93++;
				}
			}
			break;
		
		case 1:
			if (unk_0xDC5D81351D6A4DDB(iLocal_99))
			{
				if (!unk_0x4943BEEC19289B8E(iLocal_99))
				{
					unk_0x1F7948851FB36E88(iLocal_99, 1, 0);
				}
				if (unk_0xA60C975CBAB69F34(iLocal_99, vLocal_54, 13f, 13f, 13f, 0, 1, 0))
				{
					unk_0x4299736016AECE26(iLocal_99, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!unk_0x7112137033807390(iLocal_99, 0))
					{
						unk_0x92DDCF53AA47A63D(iLocal_99, 149.8882f);
						unk_0x99F546A9200EA026(iLocal_99, 1084227584);
					}
				}
			}
			unk_0xFDD15D670AD33E10(vLocal_54, 12f, 1, 0, 0, false);
			unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 128.2065f);
			if (!unk_0x4915F4759304D5CF(uLocal_97[0]))
			{
				unk_0x4299736016AECE26(uLocal_97[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				unk_0x92DDCF53AA47A63D(uLocal_97[0], 128.2065f);
			}
			iLocal_98[0] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
			func_97(&uLocal_271, 1, iLocal_98[0], "ACULTMember1", 0, 1);
			if (Global_106070.f_24967.f_5 >= 3)
			{
				iLocal_98[1] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
				func_97(&uLocal_271, 2, iLocal_98[1], "ACULTMember2", 0, 1);
			}
			func_97(&uLocal_271, 0, unk_0xA19140A5C42D8715(), "TREVOR", 0, 1);
			func_97(&uLocal_271, 3, 0, "ACULTMaster", 0, 1);
			func_97(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
			if (Global_106070.f_24967.f_5 != 1 && Global_106070.f_24967.f_5 != 2)
			{
				func_98(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
			}
			settimerb(0);
			unk_0x1F4E5EFBFE503FB3(iLocal_98[0], 1);
			iLocal_100 = unk_0xFCFC8CC5FF74580D(joaat("prop_anim_cash_pile_02"), vLocal_53, 1, 1, 0);
			iLocal_101 = unk_0x9B3030FF43CE94B3(joaat("weapon_assaultrifle"), -1, unk_0xE2BBD32891C18569(iLocal_98[0], 1), 1, 1065353216, 0, 0, 1);
			unk_0x96B71B23D409A3DB(iLocal_101, iLocal_98[0], unk_0xF622A022C26057AA(iLocal_98[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_106070.f_24967.f_5 < 3)
			{
				if (Global_106070.f_24967.f_5 == 0)
				{
					unk_0x96B71B23D409A3DB(iLocal_100, unk_0xA19140A5C42D8715(), unk_0xF622A022C26057AA(unk_0xA19140A5C42D8715(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					unk_0x96B71B23D409A3DB(iLocal_100, unk_0xA19140A5C42D8715(), unk_0xF622A022C26057AA(unk_0xA19140A5C42D8715(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
			}
			else if (Global_106070.f_24967.f_5 >= 3)
			{
				unk_0xF0188A1B49D79AF7(iLocal_98[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			iLocal_106 = unk_0x57FC10C74CC15F22("DEFAULT_ANIMATED_CAMERA", 1);
			iLocal_92 = unk_0x70788DC3D80C9DEB(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			unk_0xE5565DEAABF9D588(unk_0xA19140A5C42D8715(), iLocal_92, "random@altruist_cult", sLocal_265, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0xE5565DEAABF9D588(iLocal_98[0], iLocal_92, "random@altruist_cult", sLocal_263, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_106070.f_24967.f_5 >= 3)
			{
				unk_0xE5565DEAABF9D588(iLocal_98[1], iLocal_92, "random@altruist_cult", sLocal_264, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0xF84EE501E63C86CF(iLocal_106, iLocal_92, sLocal_268, "random@altruist_cult");
			unk_0x8E88E73F74A9FF79(true, 0, 3000, 1, 0, 0);
			if (!unk_0x4915F4759304D5CF(uLocal_97[0]))
			{
				unk_0xE5565DEAABF9D588(uLocal_97[0], iLocal_92, "random@altruist_cult", sLocal_266, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_93++;
			break;
		
		case 2:
			if (!unk_0x4915F4759304D5CF(uLocal_97[0]))
			{
				if (unk_0x18F3A53F9DAFB8C9(uLocal_97[0]))
				{
					func_171(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_171(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (timerb() > 2000 && timerb() < 2100)
			{
				if (Global_106070.f_24967.f_5 == 1 || Global_106070.f_24967.f_5 == 2)
				{
					if (!func_108())
					{
						func_98(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
					}
				}
			}
			if (unk_0x33CECDD9E141E18E(iLocal_92) > fLocal_89)
			{
				iLocal_93++;
			}
			break;
		
		case 3:
			if (!unk_0x4915F4759304D5CF(uLocal_97[0]))
			{
				if (unk_0x18F3A53F9DAFB8C9(uLocal_97[0]))
				{
					func_171(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_171(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (Global_106070.f_24967.f_5 == 1 || Global_106070.f_24967.f_5 == 2)
			{
				if ((unk_0x33CECDD9E141E18E(iLocal_92) > 0.9742857f && !iLocal_85) && unk_0x06EBD57CD6085DD1() == 4)
				{
					unk_0xE60B9F9B48D4783F("CamPushInNeutral", 0, 0);
					unk_0xE11F00B4AC919F45(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_85 = 1;
				}
			}
			if (unk_0x33CECDD9E141E18E(iLocal_92) > fLocal_88)
			{
				iLocal_93++;
			}
			break;
		
		case 4:
			if (Global_106070.f_24967.f_5 < 3)
			{
				if (Global_106070.f_24967.f_5 != 1 && Global_106070.f_24967.f_5 != 2)
				{
					func_128();
					if (unk_0xDC5D81351D6A4DDB(iLocal_98[0]))
					{
						unk_0x680F17660351F21B(&(iLocal_98[0]));
					}
					if (unk_0xDC5D81351D6A4DDB(iLocal_98[1]))
					{
						unk_0x680F17660351F21B(&(iLocal_98[1]));
					}
				}
				else
				{
					settimerb(0);
					if (unk_0xDC5D81351D6A4DDB(iLocal_98[0]))
					{
						unk_0x7C73A424F1117528(iLocal_98[0], false, 0);
					}
					if (unk_0xDC5D81351D6A4DDB(iLocal_98[1]))
					{
						unk_0x7C73A424F1117528(iLocal_98[1], false, 0);
					}
					if (unk_0xDC5D81351D6A4DDB(uLocal_97[0]))
					{
						unk_0x7C73A424F1117528(uLocal_97[0], false, 0);
					}
					iLocal_93++;
				}
				if (unk_0xDC5D81351D6A4DDB(iLocal_100))
				{
					unk_0xC0AC848E56940C34(&iLocal_100);
				}
				if (unk_0xDC5D81351D6A4DDB(iLocal_101))
				{
					unk_0xC0AC848E56940C34(&iLocal_101);
				}
				unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
				if (Global_106070.f_24967.f_5 == 0)
				{
					unk_0xF757C0D3A087F145(unk_0xA19140A5C42D8715(), -668482597, 0, 0, 0);
					unk_0x0D73DFAB4EC83FF4(unk_0xD4E735F4B6A956AC(), 1f, 750, 0, 1, 0);
				}
				if (unk_0x3CAC2741CC1A631F(sLocal_268, "cult_p4_cam"))
				{
					unk_0x8E88E73F74A9FF79(false, 0, 3000, 1, 0, 0);
				}
				else
				{
					unk_0xCE2F428A0EEBBE18(0, 0, 3, 0);
				}
				unk_0x930701157A4B9374(iLocal_106, false);
				func_21(0, 1, 1, 0, 0);
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
				unk_0x85685830EFB9A55E(1);
				unk_0xDC374DA4DC566237(1);
				unk_0x065673561216B3C6(unk_0xA19140A5C42D8715(), 0);
				unk_0xD87B76260C547F31(0f);
				func_153(func_14(), 1, 1000, 0, 0);
			}
			if (Global_106070.f_24967.f_5 != 1 && Global_106070.f_24967.f_5 != 2)
			{
				unk_0x9444470D6D9ADB88("AC_DONE");
				Global_106070.f_24967.f_5++;
				iLocal_78 = 1;
			}
			break;
		
		case 5:
			if (!func_108() || timerb() > 7000)
			{
				func_128();
				if (unk_0xDC5D81351D6A4DDB(iLocal_98[0]))
				{
					unk_0x680F17660351F21B(&(iLocal_98[0]));
				}
				if (unk_0xDC5D81351D6A4DDB(iLocal_98[1]))
				{
					unk_0x680F17660351F21B(&(iLocal_98[1]));
				}
				unk_0x9444470D6D9ADB88("AC_DONE");
				Global_106070.f_24967.f_5++;
				iLocal_78 = 1;
			}
			break;
	}
}

void func_178()
{
	if (func_180())
	{
		if (func_14() == 2)
		{
			if (unk_0xE434641F79309B6F(func_179()))
			{
				unk_0xC0AFA90D8293B122(func_179(), &uLocal_90, &iLocal_91);
				if (iLocal_91 == 1)
				{
					uLocal_97[0] = unk_0x276D6275D6D58ACF(func_179(), 0);
					if (unk_0xA60C975CBAB69F34(uLocal_97[0], vLocal_54, 5f, 5f, 5f, 0, 1, 0))
					{
						if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
						{
							if (!unk_0x7112137033807390(unk_0xC409B91AC4749F88(), 0))
							{
								unk_0x0185AEECD1FF63F3(unk_0xC409B91AC4749F88(), 10.5f, 5, 0);
							}
						}
						settimera(0);
						iLocal_50 = 1;
					}
				}
				else if (iLocal_91 == 2)
				{
					uLocal_97[0] = unk_0x276D6275D6D58ACF(func_179(), 0);
					uLocal_97[1] = unk_0x276D6275D6D58ACF(func_179(), 1);
					if (unk_0xA60C975CBAB69F34(uLocal_97[0], vLocal_54, 5f, 5f, 5f, 0, 1, 0) && unk_0xA60C975CBAB69F34(uLocal_97[1], vLocal_54, 5f, 5f, 5f, 0, 1, 0))
					{
						if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
						{
							if (!unk_0x7112137033807390(unk_0xC409B91AC4749F88(), 0))
							{
								unk_0x0185AEECD1FF63F3(unk_0xC409B91AC4749F88(), 10.5f, 5, 0);
							}
						}
						settimera(0);
						iLocal_50 = 1;
					}
				}
			}
		}
	}
}

var func_179()
{
	return unk_0x64C831B843E08AC9(unk_0xA6580F898F4E801C());
}

bool func_180()
{
	return Global_25694;
}

void func_181()
{
	if (func_184())
	{
		if (iLocal_260 == 0)
		{
			iLocal_260 = unk_0xF66A39BBE7B3C278(vLocal_53 - Vector(100f, 60f, 80f), vLocal_53 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
		}
		while (unk_0x499324B3EF19C288(func_93(unk_0xD4E735F4B6A956AC()), vLocal_53, 1) < 209f)
		{
			wait(0);
		}
	}
	if (func_14() == 0 || func_14() == 1)
	{
		if (unk_0x56FFED01CE97CAC0(2017343592, 1862763509) != 5)
		{
			if (func_183())
			{
				unk_0x80E7C4A78224C8F9(5, 2017343592, 1862763509);
			}
			else if (func_182())
			{
				unk_0x80E7C4A78224C8F9(5, 2017343592, 1862763509);
			}
		}
	}
	else if (func_14() == 2)
	{
		if (unk_0x56FFED01CE97CAC0(2017343592, 1862763509) != 5)
		{
			if (func_183())
			{
				if (unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715()) || (unk_0x6625F609B391348E(unk_0xA19140A5C42D8715()) && unk_0xFBBCA633CD1A088B(unk_0xD4E735F4B6A956AC())))
				{
					unk_0x80E7C4A78224C8F9(5, 2017343592, 1862763509);
				}
			}
			else if (func_182())
			{
				unk_0x80E7C4A78224C8F9(5, 2017343592, 1862763509);
			}
			else if (unk_0x56FFED01CE97CAC0(2017343592, 1862763509) != 1)
			{
				unk_0x80E7C4A78224C8F9(1, 2017343592, 1862763509);
			}
		}
	}
	if (func_183())
	{
		if (iLocal_83)
		{
			if (!unk_0x122A8778D4027A82(unk_0xD4E735F4B6A956AC(), 3))
			{
				unk_0x9444470D6D9ADB88("AC_START");
			}
			unk_0xBF6EED5D6E0CD9BF(0f);
			unk_0x665C47CF8EF3A8D1("COUNTRYSIDE_ALTRUIST_CULT_01", 1);
			if (unk_0x37A8EF89184DBA23(Global_35240[9 /*31*/].f_2, 6f, Global_35240[9 /*31*/].f_5, 0))
			{
				unk_0x7954F628CA598930(Global_35240[9 /*31*/].f_5, Global_35240[9 /*31*/].f_2, 0, 0f, 0);
			}
			if (unk_0x37A8EF89184DBA23(Global_35240[10 /*31*/].f_2, 6f, Global_35240[10 /*31*/].f_5, 0))
			{
				unk_0x7954F628CA598930(Global_35240[10 /*31*/].f_5, Global_35240[10 /*31*/].f_2, 0, 0f, 0);
			}
			bLocal_84 = true;
			iLocal_83 = 0;
		}
	}
	else if (!iLocal_83)
	{
		if (unk_0x8013F89372F49F19())
		{
			unk_0x9444470D6D9ADB88("AC_END");
		}
		unk_0xBF6EED5D6E0CD9BF(1f);
		unk_0x665C47CF8EF3A8D1("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		if (!bLocal_84)
		{
			func_150();
		}
		iLocal_83 = 1;
	}
}

int func_182()
{
	if ((((((unk_0x7C4EA68E1BF460BA(vLocal_55, vLocal_56, fLocal_57, 1) || unk_0x7C4EA68E1BF460BA(vLocal_58, vLocal_59, fLocal_60, 1)) || unk_0x7C4EA68E1BF460BA(vLocal_61, vLocal_62, fLocal_63, 1)) || unk_0x7C4EA68E1BF460BA(vLocal_64, vLocal_65, fLocal_66, 1)) || unk_0x7C4EA68E1BF460BA(vLocal_67, vLocal_68, fLocal_69, 1)) || unk_0x7C4EA68E1BF460BA(vLocal_70, vLocal_71, fLocal_72, 1)) || unk_0x7C4EA68E1BF460BA(vLocal_73, vLocal_74, fLocal_75, 1))
	{
		return 1;
	}
	return 0;
}

int func_183()
{
	if ((((((unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), vLocal_55, vLocal_56, fLocal_57, 0, 1, 0) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), vLocal_58, vLocal_59, fLocal_60, 0, 1, 0)) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), vLocal_61, vLocal_62, fLocal_63, 0, 1, 0)) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), vLocal_64, vLocal_65, fLocal_66, 0, 1, 0)) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), vLocal_67, vLocal_68, fLocal_69, 0, 1, 0)) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), vLocal_70, vLocal_71, fLocal_72, 0, 1, 0)) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), vLocal_73, vLocal_74, fLocal_75, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_184()
{
	if (Global_106070.f_24967.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_185()
{
	unk_0x80E7C4A78224C8F9(255, 2017343592, 1862763509);
	if (Global_106070.f_24967.f_5 >= iLocal_96 && Global_106070.f_24967.f_5 != 1000)
	{
		if (bLocal_76)
		{
			func_1(1);
			func_10();
			func_3(0);
			iLocal_50 = 3;
		}
		else
		{
			func_186(&uLocal_109);
			Global_88584 = 0;
			Global_88585 = 0;
			Global_88586 = 0;
			func_13(0, 1);
			func_11(0, 1);
			func_2(0);
			unk_0x95DFD5DB6041DFE5(1);
			unk_0xDD63978CC283FA2D(0);
			unk_0xD7148FA4D977807B(0);
			func_3(0);
			unk_0xBF6EED5D6E0CD9BF(1f);
			unk_0x60DEFBFF740D4C09(3, 1);
			unk_0x60DEFBFF740D4C09(5, 1);
			unk_0xF0E859E9E316E981();
			iLocal_83 = 0;
			func_94();
			Global_106070.f_24967.f_5 = (iLocal_96 - 1);
			unk_0x8F1A9FE6D91AAFEB();
		}
	}
	else
	{
		unk_0x4004C3CB2300135E();
		func_186(&uLocal_109);
		Global_88584 = 0;
		Global_88585 = 0;
		Global_88586 = 0;
		func_13(0, 1);
		func_11(0, 1);
		func_2(0);
		unk_0x95DFD5DB6041DFE5(1);
		unk_0xDD63978CC283FA2D(0);
		unk_0xD7148FA4D977807B(0);
		func_3(0);
		if (unk_0x0FA486DE15EB3004(uLocal_259))
		{
			unk_0x86795B44CE5FE021(&uLocal_259);
			func_96(0);
		}
		unk_0xBF6EED5D6E0CD9BF(1f);
		unk_0x60DEFBFF740D4C09(3, 1);
		unk_0x60DEFBFF740D4C09(5, 1);
		unk_0xF0E859E9E316E981();
		iLocal_83 = 0;
		unk_0x8F1A9FE6D91AAFEB();
	}
}

void func_186(var uParam0)
{
	if (unk_0x0FA486DE15EB3004(*uParam0))
	{
		unk_0x86795B44CE5FE021(uParam0);
		*uParam0 = 0;
	}
}

