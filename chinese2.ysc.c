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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	char* sLocal_51 = NULL;
	int iLocal_52 = 0;
	bool bLocal_53 = 0;
	bool bLocal_54 = 0;
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	vector3 vLocal_71 = { 0f, 0f, 0f };
	float fLocal_72 = 0f;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	bool bLocal_75 = 0;
	int iLocal_76[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<165> Local_77 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char[] cLocal_78[8] = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	bool bLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	bool bLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	bool bLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	vector3 vLocal_98 = { 0f, 0f, 0f };
	vector3 vLocal_99 = { 0f, 0f, 0f };
	int iLocal_100 = 0;
	struct<5> Local_101[31];
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	struct<5> Local_109[61];
	float fLocal_110 = 0f;
	int iLocal_111 = 0;
	vector3 vLocal_112 = { 0f, 0f, 0f };
	struct<33> Local_113[26];
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	struct<24> Local_119[26];
	vector3 vLocal_120 = { 0f, 0f, 0f };
	vector3 vLocal_121 = { 0f, 0f, 0f };
	vector3 vLocal_122 = { 0f, 0f, 0f };
	vector3 vLocal_123 = { 0f, 0f, 0f };
	vector3 vLocal_124 = { 0f, 0f, 0f };
	vector3 vLocal_125 = { 0f, 0f, 0f };
	vector3 vLocal_126 = { 0f, 0f, 0f };
	vector3 vLocal_127 = { 0f, 0f, 0f };
	vector3 vLocal_128 = { 0f, 0f, 0f };
	vector3 vLocal_129 = { 0f, 0f, 0f };
	vector3 vLocal_130[21] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	char[] cLocal_131[8] = 0;
	bool bLocal_132 = 0;
	int iLocal_133 = 0;
	bool bLocal_134 = 0;
	int iLocal_135 = 0;
	struct<6> Local_136[6];
	struct<18> Local_137[4];
	float fLocal_138 = 0f;
	int iLocal_139 = 0;
	int iLocal_140[4] = { 0, 0, 0, 0 };
	int iLocal_141[4] = { 0, 0, 0, 0 };
	vector3 vLocal_142[13] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	char* sLocal_151 = NULL;
	bool bLocal_152 = 0;
	struct<6> Local_153[20];
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	float fLocal_157 = 0f;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	bool bLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	var uLocal_168 = 0;
	int iLocal_169[5] = { 0, 0, 0, 0, 0 };
	int iLocal_170[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_171 = 0;
	vector3 vLocal_172 = { 0f, 0f, 0f };
	var uLocal_173 = 0;
	int iLocal_174 = 0;
	float fLocal_175 = 0f;
	var uLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	struct<7> Local_184 = { 0, 3, 0, 0, 0, 0, 0 } ;
	var uLocal_185 = 1092616192;
	var uLocal_186 = 1101004800;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 3;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 16;
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
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	vector3 vLocal_384[9] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<10> Local_385[20];
	bool bLocal_386 = 0;
	int iLocal_387 = 0;
	struct<8> Local_388[27];
	struct<4> Local_389[5];
	struct<7> Local_390[17];
	vector3 vLocal_391[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_392 = 0;
	vector3 vLocal_393[24] = "";
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	vector3 vLocal_397 = { 0f, 0f, 0f };
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	char* sLocal_406 = NULL;
	char* sLocal_407 = NULL;
	int iLocal_408[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_409 = 16;
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
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
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
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
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
	iLocal_31 = 3;
	fLocal_34 = 80f;
	fLocal_35 = 140f;
	fLocal_36 = 180f;
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	uLocal_49 = unk_0x99F9E6870B7B7C2D();
	iLocal_50 = unk_0x09990A2B9C8684F0();
	iLocal_61 = -1;
	iLocal_62 = -1;
	bLocal_75 = true;
	iLocal_90 = -1;
	iLocal_93 = -1;
	fLocal_96 = 0.5f;
	fLocal_97 = 0f;
	iLocal_103 = 1;
	fLocal_110 = 160f;
	cLocal_131 = "CHI2AUD";
	iLocal_177 = -1;
	iLocal_379 = -1;
	unk_0xD07EE91CE9B6D4CF(1);
	if (unk_0x5EBD03AF78E7B4DB(3))
	{
		func_438();
		func_437(2);
	}
	fLocal_110 = 160f;
	while (true)
	{
		if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			func_129();
			func_127();
			if (iLocal_149 >= 7)
			{
				func_119();
			}
			func_117();
			func_78();
			func_3();
			func_2();
			func_1();
			unk_0x4789FEFEDF029858("m_Chinese2", 0);
		}
		iLocal_574 = 0;
		wait(0);
	}
}

void func_1()
{
	if (iLocal_402)
	{
		if (unk_0x2A8A410BC14B59BC(iLocal_401))
		{
			unk_0x1BBA2DDBEBA5EC7A(iLocal_401);
			iLocal_402 = 0;
		}
	}
}

int func_2()
{
	if (iLocal_403)
	{
		if (iLocal_404)
		{
			if (unk_0x7B5129A25EE58E36(sLocal_406))
			{
				if (unk_0x9444470D6D9ADB88(sLocal_406))
				{
					iLocal_403 = 0;
					iLocal_404 = 0;
					return 1;
				}
			}
		}
		else if (unk_0x9444470D6D9ADB88(sLocal_406))
		{
			iLocal_403 = 0;
			return 1;
		}
	}
	else if (iLocal_405)
	{
		if (unk_0x7B5129A25EE58E36(sLocal_407))
		{
			iLocal_405 = 0;
		}
	}
	return 0;
}

void func_3()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < Local_153)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 1)
		{
			switch (Local_153[iVar0 /*6*/])
			{
				case 0:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							if (unk_0x5CA3186381FC012C())
							{
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							func_69(1992.804f, 3053.31f, 45.77715f, 1989.681f, 3055.295f, 49.09001f, 3.25f, 1995.202f, 3062.156f, 46.0491f, 59.7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							func_69(1994.427f, 3045.136f, 45.34013f, 1981.903f, 3053.235f, 49.79153f, 9.5f, 1995.202f, 3062.156f, 46.0491f, 59.7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							func_69(1985.404f, 3075.057f, 44.84953f, 2017.102f, 3057.435f, 53.71896f, 33f, 1995.202f, 3062.156f, 46.0491f, 59.7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							iLocal_144 = unk_0xC409B91AC4749F88();
							if (func_68(iLocal_144) && func_67(iLocal_144, 1995.202f, 3062.156f, 46.0491f, 1) < 5f)
							{
								unk_0x45BAD633963B31EC(unk_0x8F474E419F56E48D(iLocal_144), 3);
							}
							Local_153[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 2:
					if (iLocal_149 >= 3)
					{
						Local_153[iVar0 /*6*/].f_2 = -1;
					}
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -1:
							func_66();
							func_64();
							break;
						
						case 0:
							if (func_67(unk_0xA19140A5C42D8715(), 2442.55f, 4967.51f, 54.35f, 1) < 1300f || func_63(39))
							{
								if (func_67(unk_0xA19140A5C42D8715(), 2442.55f, 4967.51f, 54.35f, 1) > 500f)
								{
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 1:
							if (func_60("PHN2", 1, unk_0xA19140A5C42D8715(), "Trevor", 8, 0, "ONEIL", -1, 0, 0))
							{
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (!func_59())
							{
								if (func_35("CHI2_ONEILPH", 1, unk_0xA19140A5C42D8715(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_153[iVar0 /*6*/].f_1 = 0;
								}
							}
							break;
					}
					break;
				
				case 3:
					if (iLocal_149 >= 3)
					{
						Local_153[iVar0 /*6*/].f_2 = -1;
						Local_153[iVar0 /*6*/].f_1 = 0;
					}
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							if (func_35("CHI2_boom", 1, unk_0xA19140A5C42D8715(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_153[iVar0 /*6*/].f_2++;
							}
							iLocal_383 = 0;
							Local_153[iVar0 /*6*/].f_5 = unk_0xFD34717937104F1C() + 3000;
							break;
						
						case 1:
							if (!func_59())
							{
								if (!func_34())
								{
									if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
									{
										if (unk_0xFD34717937104F1C() > Local_153[iVar0 /*6*/].f_5)
										{
											if (iLocal_383 < 13)
											{
												if (func_35("DRI1", 2, unk_0xA19140A5C42D8715(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													iLocal_383++;
													Local_153[iVar0 /*6*/].f_5 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(4000, 10000));
												}
											}
											else
											{
												Local_153[iVar0 /*6*/].f_1 = 0;
											}
										}
									}
								}
							}
							break;
					}
					break;
				
				case 4:
					if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
					{
						iVar1 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
						if (!unk_0x26D28D230F871E8D(iVar1))
						{
							if (func_33(6f, 2))
							{
								unk_0xCB482EF95FAE4D73(unk_0xA19140A5C42D8715(), 0, 0);
								Local_153[iVar0 /*6*/].f_1 = 0;
							}
						}
					}
					else
					{
						Local_153[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 5:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -20:
							if (unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), 2460.073f, 4964.176f, 46.2405f, true) < 250f)
							{
								unk_0xCACEBBBEAD8F262E(joaat("a_m_m_hillbilly_01"));
								unk_0xCACEBBBEAD8F262E(-1853453107);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -19:
							if (unk_0x7FC99CCC73354033(joaat("a_m_m_hillbilly_01")) && unk_0x7FC99CCC73354033(-1853453107))
							{
								unk_0xCACEBBBEAD8F262E(joaat("a_m_m_hillbilly_02"));
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -18:
							if (unk_0x7FC99CCC73354033(joaat("a_m_m_hillbilly_02")))
							{
								unk_0xCACEBBBEAD8F262E(joaat("burrito"));
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -17:
							if (unk_0x7FC99CCC73354033(joaat("burrito")))
							{
								unk_0xCACEBBBEAD8F262E(joaat("a_m_y_methhead_01"));
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -16:
							if (unk_0x7FC99CCC73354033(joaat("a_m_y_methhead_01")))
							{
								unk_0xCACEBBBEAD8F262E(joaat("prop_ld_can_01"));
								unk_0xCACEBBBEAD8F262E(joaat("prop_cs_fertilizer"));
								unk_0xCACEBBBEAD8F262E(joaat("prop_cs_beer_bot_01"));
								unk_0xCACEBBBEAD8F262E(joaat("prop_phone_ing"));
								unk_0xCACEBBBEAD8F262E(joaat("dubsta"));
								unk_0x6D68030C791111E0("misschinese2_bank5");
								unk_0x6D68030C791111E0("misschinese2_bank1");
								unk_0x6D68030C791111E0("reaction@male_stand@big_variations@b");
								unk_0x6D68030C791111E0("reaction@male_stand@big_intro@left");
								unk_0x6D68030C791111E0("reaction@male_stand@big_intro@right");
								unk_0x6D68030C791111E0("reaction@male_stand@big_intro@backward");
								unk_0x6D68030C791111E0("misschinese2_barrelRoll");
								unk_0x40C43275A74F9078("move_m@gangster@var_e");
								unk_0x40C43275A74F9078("move_m@gangster@var_f");
								unk_0x40C43275A74F9078("move_m@gangster@generic");
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -15:
							if (unk_0x7FC99CCC73354033(joaat("dubsta")))
							{
								func_32(22, 0);
								func_32(8, 0);
								unk_0x68184E06469338F4(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), 0, 1);
								Local_153[iVar0 /*6*/].f_2 = 1;
							}
							break;
						
						case 0:
							if (unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), 2460.073f, 4964.176f, 46.2405f, true) < 250f)
							{
								unk_0xCACEBBBEAD8F262E(joaat("a_m_m_hillbilly_01"));
								unk_0xCACEBBBEAD8F262E(joaat("a_m_m_hillbilly_02"));
								unk_0xCACEBBBEAD8F262E(joaat("a_m_y_methhead_01"));
								unk_0xCACEBBBEAD8F262E(joaat("prop_ld_can_01"));
								unk_0xCACEBBBEAD8F262E(joaat("prop_cs_fertilizer"));
								unk_0xCACEBBBEAD8F262E(joaat("burrito"));
								unk_0xCACEBBBEAD8F262E(joaat("prop_cs_beer_bot_01"));
								if (iLocal_149 <= 3)
								{
									unk_0xCACEBBBEAD8F262E(joaat("prop_phone_ing"));
									unk_0xCACEBBBEAD8F262E(joaat("dubsta"));
								}
								unk_0x6D68030C791111E0("misschinese2_bank5");
								unk_0x6D68030C791111E0("misschinese2_bank1");
								unk_0x6D68030C791111E0("reaction@male_stand@big_variations@b");
								unk_0x6D68030C791111E0("reaction@male_stand@big_intro@left");
								unk_0x6D68030C791111E0("reaction@male_stand@big_intro@right");
								unk_0x6D68030C791111E0("reaction@male_stand@big_intro@backward");
								unk_0x6D68030C791111E0("misschinese2_barrelRoll");
								unk_0x40C43275A74F9078("move_m@gangster@var_e");
								unk_0x40C43275A74F9078("move_m@gangster@var_f");
								unk_0x40C43275A74F9078("move_m@gangster@generic");
								func_32(22, 0);
								func_32(8, 0);
								unk_0x68184E06469338F4(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), 0, 1);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (((((((((((((((unk_0x7FC99CCC73354033(joaat("a_m_m_hillbilly_01")) && unk_0x7FC99CCC73354033(joaat("a_m_m_hillbilly_02"))) && unk_0x7FC99CCC73354033(joaat("a_m_y_methhead_01"))) && unk_0x7FC99CCC73354033(joaat("burrito"))) && unk_0x7FC99CCC73354033(joaat("prop_cs_fertilizer"))) && unk_0x7FC99CCC73354033(joaat("prop_cs_beer_bot_01"))) && unk_0x7FC99CCC73354033(joaat("prop_ld_can_01"))) && unk_0x39C2D9AB77873F84("misschinese2_bank5")) && unk_0x39C2D9AB77873F84("misschinese2_bank1")) && unk_0x39C2D9AB77873F84("misschinese2_barrelRoll")) && unk_0x39C2D9AB77873F84("reaction@male_stand@big_variations@b")) && unk_0x39C2D9AB77873F84("reaction@male_stand@big_intro@left")) && unk_0x39C2D9AB77873F84("reaction@male_stand@big_intro@right")) && unk_0x39C2D9AB77873F84("reaction@male_stand@big_intro@backward")) && ((iLocal_149 <= 3 && unk_0x7FC99CCC73354033(joaat("prop_phone_ing"))) || iLocal_149 > 3)) && ((iLocal_149 <= 3 && unk_0x7FC99CCC73354033(joaat("dubsta"))) || iLocal_149 > 3))
							{
								Local_153[iVar0 /*6*/].f_2 = 4;
							}
							if (unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), 2460.073f, 4964.176f, 46.2405f, true) > 300f)
							{
								unk_0xA5DE74AE39867B03(joaat("a_m_m_hillbilly_01"));
								unk_0xA5DE74AE39867B03(joaat("a_m_m_hillbilly_02"));
								unk_0xA5DE74AE39867B03(joaat("a_m_y_methhead_01"));
								unk_0xA5DE74AE39867B03(joaat("burrito"));
								unk_0xA5DE74AE39867B03(joaat("prop_cs_fertilizer"));
								unk_0xA5DE74AE39867B03(joaat("prop_cs_beer_bot_01"));
								unk_0xA5DE74AE39867B03(joaat("prop_ld_can_01"));
								unk_0x4DC885EA8D6AF7FC("misschinese2_bank5");
								unk_0x4DC885EA8D6AF7FC("misschinese2_bank1");
								unk_0x4DC885EA8D6AF7FC("reaction@male_stand@big_variations@b");
								unk_0x4DC885EA8D6AF7FC("reaction@male_stand@big_intro@left");
								unk_0x4DC885EA8D6AF7FC("reaction@male_stand@big_intro@right");
								unk_0x4DC885EA8D6AF7FC("reaction@male_stand@big_intro@backward");
								unk_0x4DC885EA8D6AF7FC("misschinese2_barrelRoll");
								unk_0xD37292AE1958B4F3("move_m@gangster@var_e");
								unk_0xD37292AE1958B4F3("move_m@gangster@var_f");
								unk_0xD37292AE1958B4F3("move_m@gangster@generic");
								unk_0xA5DE74AE39867B03(joaat("prop_phone_ing"));
								unk_0xA5DE74AE39867B03(joaat("dubsta"));
								unk_0x68184E06469338F4(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), 1, 1);
								func_31(22, 1);
								func_31(8, 1);
								if (iLocal_179 != 0)
								{
									unk_0xAFDE4F43F150FE9E(iLocal_179);
									iLocal_179 = 0;
								}
								Local_153[iVar0 /*6*/].f_2 = -20;
							}
							break;
						
						case 4:
							if (unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), 2460.073f, 4964.176f, 46.2405f, true) > 300f)
							{
								Local_153[iVar0 /*6*/].f_2 = 1;
							}
							else if (iLocal_149 >= 3 && !func_30(22))
							{
								func_27();
								Local_153[iVar0 /*6*/].f_1 = 0;
							}
							break;
						
						case 5:
							break;
					}
					break;
				
				case 22:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -1:
							if (iLocal_179 != 0)
							{
								unk_0xAFDE4F43F150FE9E(iLocal_179);
							}
							iLocal_179 = 0;
							break;
						
						case 0:
							iLocal_179 = unk_0x988A25F5907E93F0(2440.492f, 4969.948f, 52.5247f);
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (!unk_0x893915B076B1DDF7(iLocal_179))
							{
								iLocal_179 = unk_0x988A25F5907E93F0(2440.492f, 4969.948f, 52.5247f);
							}
							else
							{
								unk_0x1BBA2DDBEBA5EC7A(iLocal_179);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							Local_153[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 6:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							func_19(50, 0, 0, 1, 0);
							func_19(51, 0, 0, 1, 0);
							func_19(52, 0, 0, 1, 0);
							func_19(53, 0, 0, 1, 0);
							func_19(54, 1, 0, 1, 0);
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							break;
					}
					break;
				
				case 7:
					if (Local_153[iVar0 /*6*/].f_2 == 0)
					{
						iVar2 = func_18(8);
						if (iVar2 != -1)
						{
							if (!unk_0x4915F4759304D5CF(Local_113[iVar2 /*33*/]))
							{
								if (unk_0xF9D4EF1338E38AFB(Local_113[iVar2 /*33*/], 1785177548) == 7)
								{
									iVar2 = func_18(9);
									if (iVar2 != -1)
									{
										if (!unk_0x4915F4759304D5CF(Local_113[iVar2 /*33*/]))
										{
											if (unk_0xF9D4EF1338E38AFB(Local_113[iVar2 /*33*/], 1785177548) == 7)
											{
												unk_0x4DC885EA8D6AF7FC("misschinese2_bank5");
												Local_153[iVar0 /*6*/].f_1 = 0;
											}
										}
									}
								}
							}
							else
							{
								iVar2 = func_18(9);
								if (iVar2 != -1)
								{
									if (!unk_0x4915F4759304D5CF(Local_113[iVar2 /*33*/]))
									{
										if (unk_0xF9D4EF1338E38AFB(Local_113[iVar2 /*33*/], 1785177548) == 7)
										{
											unk_0x4DC885EA8D6AF7FC("misschinese2_bank5");
											Local_153[iVar0 /*6*/].f_1 = 0;
										}
									}
									else
									{
										unk_0x4DC885EA8D6AF7FC("misschinese2_bank5");
									}
								}
							}
						}
					}
					break;
				
				case 8:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -1:
							unk_0x4004C3CB2300135E();
							break;
						
						case 0:
							unk_0xF66A39BBE7B3C278(Vector(58.6179f, 4972.897f, 2445.654f) - Vector(100f, 100f, 100f), Vector(58.6179f, 4972.897f, 2445.654f) + Vector(100f, 100f, 100f), 0, 1, 1, 1);
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
							{
								if (unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), false), 2473.061f, 4981.482f, 24.64584f, true) < 250f)
								{
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 2:
							unk_0x60C495B6942EC817(0f);
							unk_0x5FEB5D55B0DE217B(0f);
							unk_0x9F7E14E0AE70CCBB(0f, 0f);
							if (unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), false), 2473.061f, 4981.482f, 24.64584f, true) > 250f)
							{
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
					}
					break;
				
				case 9:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -1:
							unk_0x60DEFBFF740D4C09(3, 1);
							unk_0x60DEFBFF740D4C09(5, 1);
							unk_0x60DEFBFF740D4C09(1, 1);
							unk_0x60DEFBFF740D4C09(7, 1);
							break;
						
						case 0:
							if (func_67(unk_0xA19140A5C42D8715(), 2578.523f, 4982.284f, 51.4416f, 1) < 500f)
							{
								unk_0x60DEFBFF740D4C09(3, 0);
								unk_0x60DEFBFF740D4C09(5, 0);
								unk_0x60DEFBFF740D4C09(1, 0);
								unk_0x60DEFBFF740D4C09(7, 0);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (func_67(unk_0xA19140A5C42D8715(), 2578.523f, 4982.284f, 51.4416f, 1) > 500f)
							{
								unk_0x60DEFBFF740D4C09(3, 1);
								unk_0x60DEFBFF740D4C09(5, 1);
								unk_0x60DEFBFF740D4C09(1, 1);
								unk_0x60DEFBFF740D4C09(7, 1);
								Local_153[iVar0 /*6*/].f_2 = 0;
							}
							break;
					}
					break;
				
				case 25:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							func_17(unk_0xA19140A5C42D8715(), 149);
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
							{
								iVar3 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
								func_17(iVar3, 152);
								func_16(iVar3, -1);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
							{
								func_17(0, 152);
								func_16(0, -1);
								Local_153[iVar0 /*6*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 10:
					break;
				
				case 11:
					break;
				
				case 14:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							Local_153[iVar0 /*6*/].f_5 = unk_0xFD34717937104F1C() + 7000;
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (unk_0xFD34717937104F1C() > Local_153[iVar0 /*6*/].f_5)
							{
								unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 2466.385f, 4953.096f, 44.1228f, 1, 0, 0, 1);
								unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 221f);
								unk_0x71CBFF70987FE89A(unk_0xA19140A5C42D8715(), 2475.075f, 4945.965f, 44.0228f, 1f, 20000, 1193033728, 1056964608);
								unk_0xF757C0D3A087F145(unk_0xA19140A5C42D8715(), -668482597, 0, 0, 0);
								Local_153[iVar0 /*6*/].f_1 = 0;
							}
							break;
					}
					break;
				
				case 13:
					if (unk_0xBEB81D4750DEAFA3("CHINESE2_FARMHOUSE_EXPLOSION_MOLOTOV_MASTER", 0))
					{
						unk_0xFA28790B579CDEB0();
						Local_153[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 12:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							uLocal_173 = unk_0x389F96269D4F1FD8(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
							if (unk_0xCD7C9B7A8F43BA15(uLocal_173))
							{
								unk_0x317CA41ED2351630(uLocal_173, 2);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (unk_0xA3DC7C2803970902(uLocal_173) == 3)
							{
								unk_0x317CA41ED2351630(uLocal_173, 4);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (iLocal_174 == 1)
							{
								if (unk_0xA3DC7C2803970902(uLocal_173) == 5)
								{
									unk_0x317CA41ED2351630(uLocal_173, 6);
									unk_0x8969D02DEDC106D2("CHI_2_RAYFIRE");
									unk_0x5F041E7AE5419FEC(2457.15f, 4968.79f, 48.677f, 100f, 965837842, 1);
									unk_0x5F041E7AE5419FEC(2457.15f, 4968.79f, 48.677f, 100f, 247384786, 1);
									unk_0x5F041E7AE5419FEC(2457.15f, 4968.79f, 48.677f, 100f, -247908770, 0);
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 3:
							func_15("CHN2_EXPLODE", 1, "CHN2_EXPLODE");
							Local_153[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 16:
					if (Local_153[iVar0 /*6*/].f_2 != -1)
					{
						if (!unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), joaat("weapon_petrolcan"), 0) || !unk_0xF93654E07E20E3CF(uLocal_176))
						{
							iLocal_180 = unk_0x78CED56884DEF3D7(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), 20f, unk_0x410D194E9495C303(joaat("weapon_petrolcan")), 0, 0, 1);
							if (iLocal_180 != 0)
							{
								if (unk_0xCE3CB618AFE55EFB(iLocal_178))
								{
									unk_0xE1623437A3194332(&iLocal_178);
								}
								iLocal_178 = func_13(iLocal_180);
								func_12(1);
								func_11(0, 157);
							}
						}
						else
						{
							Local_153[iVar0 /*6*/].f_5 = 0;
							func_12(0);
							if (unk_0xCE3CB618AFE55EFB(iLocal_178))
							{
								unk_0xE1623437A3194332(&iLocal_178);
							}
							func_10(157, 0);
							if (iLocal_167 == 0)
							{
								iLocal_167 = unk_0x8F62F4EC66847EC2(unk_0xA19140A5C42D8715(), joaat("weapon_petrolcan"));
							}
							else
							{
								func_9(158, (iLocal_167 - unk_0x8F62F4EC66847EC2(unk_0xA19140A5C42D8715(), joaat("weapon_petrolcan"))), 1);
							}
						}
						if (func_8())
						{
							func_11(0, 157);
							Local_153[iVar0 /*6*/].f_1 = 0;
							func_32(17, 0);
						}
					}
					break;
				
				case 18:
					break;
				
				case 17:
					if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2447.671f, 4951.438f, 43.25576f, 2454.664f, 4957.856f, 47.89117f, 6.8125f, 0, true, 0) && unk_0xFD34717937104F1C() > Local_153[iVar0 /*6*/].f_5)
					{
						if (unk_0xCE3CB618AFE55EFB(iLocal_178))
						{
							unk_0xE1623437A3194332(&iLocal_178);
						}
						Local_153[iVar0 /*6*/].f_1 = 0;
					}
					else
					{
						switch (Local_153[iVar0 /*6*/].f_2)
						{
							case 0:
								if (!func_59())
								{
									func_7("FRMSHP", 7500, 1);
									Local_153[iVar0 /*6*/].f_5 = unk_0xFD34717937104F1C() + 2000;
									iLocal_178 = func_5(2450f, 4954f, 45f, 0);
									Local_153[iVar0 /*6*/].f_2++;
								}
								break;
							}
					}
					break;
				
				case 20:
					if (!unk_0x05EFB6A616B6FADE(Local_153[iVar0 /*6*/].f_5, 0))
					{
						iLocal_380 = func_18(4);
						if (iLocal_380 != -1)
						{
							unk_0x2BCFB39E86340DAA(&(Local_153[iVar0 /*6*/].f_5), 0);
						}
					}
					else if (!unk_0x05EFB6A616B6FADE(Local_153[iVar0 /*6*/].f_5, 1))
					{
						if (!unk_0x4915F4759304D5CF(Local_113[iLocal_380 /*33*/]) && unk_0xDC5D81351D6A4DDB(Local_113[iLocal_380 /*33*/].f_20))
						{
							if (unk_0x411C28019DEA5CEF(Local_113[iLocal_380 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3) && unk_0xF797E4DD45066C88(Local_113[iLocal_380 /*33*/].f_20))
							{
								unk_0x2BCFB39E86340DAA(&(Local_153[iVar0 /*6*/].f_5), 1);
							}
						}
					}
					else if (!unk_0x05EFB6A616B6FADE(Local_153[iVar0 /*6*/].f_5, 2))
					{
						if (unk_0x4915F4759304D5CF(Local_113[iLocal_380 /*33*/]))
						{
							unk_0x2BCFB39E86340DAA(&(Local_153[iVar0 /*6*/].f_5), 2);
						}
						if (!unk_0x4915F4759304D5CF(Local_113[iLocal_380 /*33*/]))
						{
							if (!unk_0x411C28019DEA5CEF(Local_113[iLocal_380 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
							{
								unk_0x2BCFB39E86340DAA(&(Local_153[iVar0 /*6*/].f_5), 2);
							}
							if (unk_0xF9D4EF1338E38AFB(Local_113[iLocal_380 /*33*/], -2017877118) == 2 || unk_0xF9D4EF1338E38AFB(Local_113[iLocal_380 /*33*/], -2017877118) == 7)
							{
								unk_0x2BCFB39E86340DAA(&(Local_153[iVar0 /*6*/].f_5), 2);
							}
							if (unk_0x967743032563101F(Local_113[iLocal_380 /*33*/], unk_0xA19140A5C42D8715()) || Local_119[iLocal_380 /*24*/].f_3 > 3)
							{
								unk_0x2BCFB39E86340DAA(&(Local_153[iVar0 /*6*/].f_5), 2);
							}
						}
					}
					else if (unk_0xDC5D81351D6A4DDB(Local_113[iLocal_380 /*33*/].f_20) && unk_0xF797E4DD45066C88(Local_113[iLocal_380 /*33*/].f_20))
					{
						unk_0xF334C9B245CD323D(Local_113[iLocal_380 /*33*/].f_20, 0, 0);
					}
					if (!unk_0x05EFB6A616B6FADE(Local_153[iVar0 /*6*/].f_5, 4))
					{
						iLocal_381 = func_18(5);
						if (iLocal_381 != -1)
						{
							unk_0x2BCFB39E86340DAA(&(Local_153[iVar0 /*6*/].f_5), 4);
						}
					}
					else if (!unk_0x05EFB6A616B6FADE(Local_153[iVar0 /*6*/].f_5, 5))
					{
						if (!unk_0x4915F4759304D5CF(Local_113[iLocal_381 /*33*/]))
						{
							if (unk_0xDC5D81351D6A4DDB(Local_113[iLocal_381 /*33*/].f_20))
							{
								if (unk_0x411C28019DEA5CEF(Local_113[iLocal_381 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
								{
									if (unk_0xF797E4DD45066C88(Local_113[iLocal_381 /*33*/].f_20))
									{
										unk_0x2BCFB39E86340DAA(&(Local_153[iVar0 /*6*/].f_5), 5);
									}
								}
							}
						}
					}
					else if (!unk_0x05EFB6A616B6FADE(Local_153[iVar0 /*6*/].f_5, 6))
					{
						if (unk_0x4915F4759304D5CF(Local_113[iLocal_381 /*33*/]))
						{
							unk_0x2BCFB39E86340DAA(&(Local_153[iVar0 /*6*/].f_5), 6);
						}
						if (!unk_0x4915F4759304D5CF(Local_113[iLocal_381 /*33*/]))
						{
							if (!unk_0x411C28019DEA5CEF(Local_113[iLocal_381 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
							{
								unk_0x2BCFB39E86340DAA(&(Local_153[iVar0 /*6*/].f_5), 6);
							}
							if (unk_0xF9D4EF1338E38AFB(Local_113[iLocal_381 /*33*/], -2017877118) == 2 || unk_0xF9D4EF1338E38AFB(Local_113[iLocal_381 /*33*/], -2017877118) == 7)
							{
								unk_0x2BCFB39E86340DAA(&(Local_153[iVar0 /*6*/].f_5), 6);
							}
							if (unk_0x967743032563101F(Local_113[iLocal_381 /*33*/], unk_0xA19140A5C42D8715()) || Local_119[iLocal_381 /*24*/].f_3 > 3)
							{
								unk_0x2BCFB39E86340DAA(&(Local_153[iVar0 /*6*/].f_5), 6);
							}
						}
					}
					else if (unk_0xDC5D81351D6A4DDB(Local_113[iLocal_381 /*33*/].f_20) && unk_0xF797E4DD45066C88(Local_113[iLocal_381 /*33*/].f_20))
					{
						unk_0xF334C9B245CD323D(Local_113[iLocal_381 /*33*/].f_20, 0, 0);
					}
					break;
				
				case 21:
					break;
				
				case 23:
					iVar4 = 0;
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 1:
							iLocal_170[0] = unk_0xDAD26B7BC6DCE4C1(joaat("prop_ld_can_01"), 2494.496f, 4970.916f, 44.5112f, 1, true, 0);
							unk_0x76D3D51F5F66367F(iLocal_170[0], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_170[1] = unk_0xDAD26B7BC6DCE4C1(joaat("prop_ld_can_01"), 2494.863f, 4970.595f, 44.5425f, 1, true, 0);
							unk_0x76D3D51F5F66367F(iLocal_170[1], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_170[2] = unk_0xDAD26B7BC6DCE4C1(joaat("prop_ld_can_01"), 2494.896f, 4970.417f, 44.5475f, 1, true, 0);
							unk_0x76D3D51F5F66367F(iLocal_170[2], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_170[3] = unk_0xDAD26B7BC6DCE4C1(joaat("prop_ld_can_01"), 2494.795f, 4970.246f, 44.5525f, 1, true, 0);
							unk_0x76D3D51F5F66367F(iLocal_170[3], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_170[4] = unk_0xDAD26B7BC6DCE4C1(joaat("prop_ld_can_01"), 2494.204f, 4970.269f, 44.5201f, 1, true, 0);
							unk_0x76D3D51F5F66367F(iLocal_170[4], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_170[5] = unk_0xDAD26B7BC6DCE4C1(joaat("prop_ld_can_01"), 2494.372f, 4970.744f, 44.51f, 1, true, 0);
							unk_0x76D3D51F5F66367F(iLocal_170[5], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_170[6] = unk_0xDAD26B7BC6DCE4C1(joaat("prop_ld_can_01"), 2494.372f, 4971.092f, 44.4987f, 1, true, 0);
							unk_0x76D3D51F5F66367F(iLocal_170[6], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_170[7] = unk_0xDAD26B7BC6DCE4C1(joaat("prop_ld_can_01"), 2493.77f, 4971f, 44.6287f, 1, true, 0);
							unk_0x76D3D51F5F66367F(iLocal_170[7], 3.955f, 0f, 139.68f, 2, 1);
							iLocal_170[8] = unk_0xDAD26B7BC6DCE4C1(joaat("prop_ld_can_01"), 2493.98f, 4971.279f, 44.6038f, 1, true, 0);
							unk_0x76D3D51F5F66367F(iLocal_170[8], 3.955f, 0f, 139.68f, 2, 1);
							iLocal_170[9] = unk_0xDAD26B7BC6DCE4C1(joaat("prop_ld_can_01"), 2494.104f, 4971.438f, 44.5826f, 1, true, 0);
							unk_0x76D3D51F5F66367F(iLocal_170[9], 3.955f, 0f, 139.68f, 2, 1);
							iVar4 = 0;
							while (iVar4 < iLocal_170)
							{
								unk_0x9018100BC4DCB099(iLocal_170[iVar4], 1);
								unk_0xB29E08C7AB729BAD(iLocal_170[iVar4], true);
								iVar4++;
							}
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 0:
							if (!unk_0xDC5D81351D6A4DDB(iLocal_181) && !unk_0xDC5D81351D6A4DDB(iLocal_182))
							{
								if (unk_0x37A8EF89184DBA23(2493.5f, 4969.2f, 43.9f, 1f, -921781850, 0) && unk_0x37A8EF89184DBA23(2493.4f, 4971.8f, 43.6f, 1f, -1853453107, 0))
								{
									iLocal_181 = unk_0x78CED56884DEF3D7(2493.5f, 4969.2f, 43.9f, 1f, -921781850, 1, 0, 1);
									unk_0xB29E08C7AB729BAD(iLocal_181, true);
									unk_0x5F041E7AE5419FEC(2493.4f, 4971.8f, 43.6f, 1f, -1853453107, 0);
									iLocal_182 = unk_0xFCFC8CC5FF74580D(-1853453107, 2493.427f, 4971.729f, 43.54362f, 1, true, 0);
									unk_0x76D3D51F5F66367F(iLocal_182, -1.436373f, 0.176147f, -36.6601f, 2, 1);
									unk_0xB29E08C7AB729BAD(iLocal_182, true);
									func_32(24, 0);
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							else
							{
								unk_0xC0AC848E56940C34(&iLocal_182);
								iLocal_182 = unk_0xFCFC8CC5FF74580D(-1853453107, 2493.427f, 4971.729f, 43.54362f, 1, true, 0);
								unk_0x76D3D51F5F66367F(iLocal_182, -1.436373f, 0.176147f, -36.6601f, 2, 1);
								unk_0xB29E08C7AB729BAD(iLocal_182, true);
								func_32(24, 0);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							iVar4 = 0;
							iVar4 = 0;
							while (iVar4 < iLocal_170)
							{
								if (unk_0xDC5D81351D6A4DDB(iLocal_170[iVar4]))
								{
									unk_0xB29E08C7AB729BAD(iLocal_170[iVar4], false);
								}
								iVar4++;
							}
							Local_153[iVar0 /*6*/].f_1 = 0;
							Local_153[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 24:
					if (!unk_0x05EFB6A616B6FADE(Local_153[iVar0 /*6*/].f_5, 0))
					{
						if (unk_0xDC5D81351D6A4DDB(iLocal_181))
						{
							if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
							{
								if (unk_0xDEAEC99031DCB92A(iLocal_181, unk_0xA19140A5C42D8715(), 1) || func_4(unk_0xA19140A5C42D8715(), iLocal_181, 1) < 30f)
								{
									unk_0xB29E08C7AB729BAD(iLocal_181, false);
									unk_0x2BCFB39E86340DAA(&(Local_153[iVar0 /*6*/].f_5), 0);
								}
							}
						}
					}
					if (!unk_0x05EFB6A616B6FADE(Local_153[iVar0 /*6*/].f_5, 1))
					{
						if (unk_0xDC5D81351D6A4DDB(iLocal_182))
						{
							if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
							{
								if (unk_0xDEAEC99031DCB92A(iLocal_182, unk_0xA19140A5C42D8715(), 1) || func_4(unk_0xA19140A5C42D8715(), iLocal_182, 1) < 30f)
								{
									unk_0xB29E08C7AB729BAD(iLocal_182, false);
									unk_0x2BCFB39E86340DAA(&(Local_153[iVar0 /*6*/].f_5), 1);
								}
							}
						}
					}
					if ((unk_0x05EFB6A616B6FADE(Local_153[iVar0 /*6*/].f_5, 0) && unk_0x05EFB6A616B6FADE(Local_153[iVar0 /*6*/].f_5, 1)) || iLocal_149 == 6)
					{
						if (unk_0xDC5D81351D6A4DDB(iLocal_181))
						{
							unk_0xB29E08C7AB729BAD(iLocal_181, false);
						}
						if (unk_0xDC5D81351D6A4DDB(iLocal_182))
						{
							unk_0xB29E08C7AB729BAD(iLocal_182, false);
						}
						Local_153[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 26:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -1:
							if (unk_0xDC5D81351D6A4DDB(Local_113[12 /*33*/]))
							{
								unk_0x680F17660351F21B(&(Local_113[12 /*33*/]));
							}
							if (unk_0xDC5D81351D6A4DDB(Local_113[13 /*33*/]))
							{
								unk_0x680F17660351F21B(&(Local_113[13 /*33*/]));
							}
							if (unk_0xDC5D81351D6A4DDB(Local_113[14 /*33*/]))
							{
								unk_0x680F17660351F21B(&(Local_113[14 /*33*/]));
							}
							unk_0xA5DE74AE39867B03(joaat("ig_janet"));
							unk_0xA5DE74AE39867B03(joaat("ig_old_man1a"));
							unk_0xA5DE74AE39867B03(joaat("ig_old_man2"));
							Local_153[iVar0 /*6*/].f_1 = 0;
							break;
						
						case 0:
							unk_0x6D68030C791111E0("MISSChinese2_crystalMazeMCS1_IG");
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (unk_0x39C2D9AB77873F84("MISSChinese2_crystalMazeMCS1_IG"))
							{
								if (unk_0xD246C1DFC9B0EBC2() || !unk_0x5CA3186381FC012C())
								{
									if (unk_0xDC5D81351D6A4DDB(Local_113[13 /*33*/]) && !unk_0x4915F4759304D5CF(Local_113[13 /*33*/]))
									{
										unk_0x4299736016AECE26(Local_113[13 /*33*/], 1986.06f, 3051.708f, 46.2151f, 1, 0, 0, 1);
									}
									if (unk_0xDC5D81351D6A4DDB(Local_113[14 /*33*/]) && !unk_0x4915F4759304D5CF(Local_113[14 /*33*/]))
									{
										unk_0x4299736016AECE26(Local_113[14 /*33*/], 1986.105f, 3051.659f, 46.2151f, 1, 0, 0, 1);
									}
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 2:
							if (unk_0xCFA037D3F2BAF3E3(1984.89f, 3052.46f, 46.98f, 0.3f, 1) && unk_0xCFA037D3F2BAF3E3(1985.322f, 3053.087f, 46.98f, 0.3f, 1))
							{
								if (!unk_0xDC5D81351D6A4DDB(Local_113[13 /*33*/]))
								{
									Local_113[13 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("ig_old_man1a"), 1987.231f, 3052.741f, 46.214f, 0f, 1, true);
								}
								if (!unk_0xDC5D81351D6A4DDB(Local_113[14 /*33*/]))
								{
									Local_113[14 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("ig_old_man2"), 1987.231f, 3052.741f, 46.214f, 0f, 1, true);
								}
								if (!unk_0xDC5D81351D6A4DDB(Local_113[12 /*33*/]))
								{
									Local_113[12 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("ig_janet"), 1987.231f, 3052.741f, 46.214f, 0f, 1, true);
								}
								unk_0x2BCFB39E86340DAA(&(Local_153[iVar0 /*6*/].f_5), 1);
								unk_0x0452872834372353(Local_113[14 /*33*/], 1984.89f, 3052.46f, 46.98f, 0.3f, 0);
								unk_0x3A3E4B7C6FBE305D(Local_113[14 /*33*/], 1, 1);
								unk_0x1F4E5EFBFE503FB3(Local_113[14 /*33*/], 0);
								unk_0x2BCFB39E86340DAA(&(Local_153[iVar0 /*6*/].f_5), 0);
								unk_0x0452872834372353(Local_113[13 /*33*/], 1985.322f, 3053.087f, 46.98f, 0.3f, 0);
								unk_0x3A3E4B7C6FBE305D(Local_113[13 /*33*/], 1, 1);
								unk_0x1F4E5EFBFE503FB3(Local_113[13 /*33*/], 0);
								if (!unk_0xFE5DE0C3200E00F2(Local_153[iVar0 /*6*/].f_5))
								{
									Local_153[iVar0 /*6*/].f_5 = unk_0x70788DC3D80C9DEB(1987.231f, 3052.741f, 46.214f, 0f, 0f, 57.6f, 2);
									unk_0xDA16255FBFC16B28(Local_153[iVar0 /*6*/].f_5, 1);
								}
								unk_0xE5565DEAABF9D588(Local_113[12 /*33*/], Local_153[iVar0 /*6*/].f_5, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_action_janet", 1000f, -1000f, 1, 0, 1148846080, 0);
								unk_0x3A3E4B7C6FBE305D(Local_113[12 /*33*/], 1, 1);
								unk_0x1F4E5EFBFE503FB3(Local_113[12 /*33*/], 0);
								Local_153[iVar0 /*6*/].f_5 = 0;
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 3:
							if (unk_0xD246C1DFC9B0EBC2() || !unk_0x5CA3186381FC012C())
							{
							}
							if (!unk_0x4915F4759304D5CF(Local_113[13 /*33*/]) && !unk_0x4915F4759304D5CF(Local_113[14 /*33*/]))
							{
								unk_0x13E0A8160525AE55(Local_113[13 /*33*/], 152, true);
								unk_0x13E0A8160525AE55(Local_113[14 /*33*/], 152, true);
								if (unk_0x05EFB6A616B6FADE(Local_153[iVar0 /*6*/].f_5, 0) && unk_0x05EFB6A616B6FADE(Local_153[iVar0 /*6*/].f_5, 1))
								{
									Local_153[iVar0 /*6*/].f_2++;
								}
								else
								{
									if (unk_0xF9D4EF1338E38AFB(Local_113[13 /*33*/], 993674639) != 1)
									{
										if (unk_0xCFA037D3F2BAF3E3(1984.89f, 3052.46f, 46.98f, 0.3f, 1))
										{
											unk_0x2BCFB39E86340DAA(&(Local_153[iVar0 /*6*/].f_5), 0);
											unk_0x0452872834372353(Local_113[13 /*33*/], 1984.89f, 3052.46f, 46.98f, 0.3f, 0);
											unk_0x1F4E5EFBFE503FB3(Local_113[13 /*33*/], 0);
										}
									}
									else
									{
										unk_0x2BCFB39E86340DAA(&(Local_153[iVar0 /*6*/].f_5), 0);
									}
									if (unk_0xF9D4EF1338E38AFB(Local_113[14 /*33*/], 993674639) != 1)
									{
										if (unk_0xCFA037D3F2BAF3E3(1985.322f, 3053.087f, 46.98f, 0.3f, 1))
										{
											unk_0x2BCFB39E86340DAA(&(Local_153[iVar0 /*6*/].f_5), 1);
											unk_0x0452872834372353(Local_113[14 /*33*/], 1985.322f, 3053.087f, 46.98f, 0.3f, 0);
											unk_0x1F4E5EFBFE503FB3(Local_113[14 /*33*/], 0);
										}
									}
									else
									{
										unk_0x2BCFB39E86340DAA(&(Local_153[iVar0 /*6*/].f_5), 1);
									}
								}
							}
							break;
						
						case 4:
							if (func_67(unk_0xA19140A5C42D8715(), 1991.419f, 3054.915f, 47.533f, 1) > 150f)
							{
								Local_153[iVar0 /*6*/].f_2 = -1;
							}
							break;
						
						case 6:
							if (!unk_0x4915F4759304D5CF(Local_113[12 /*33*/]))
							{
								unk_0x33B5487515BD13D5(Local_113[12 /*33*/], unk_0xA19140A5C42D8715(), 100f, -1, 0, 0);
								unk_0xD738221C247C8B71(Local_113[12 /*33*/], true);
								unk_0x7E4E83D33161D01A(&(Local_113[12 /*33*/]));
							}
							if (!unk_0x4915F4759304D5CF(Local_113[13 /*33*/]))
							{
								unk_0x33B5487515BD13D5(Local_113[13 /*33*/], unk_0xA19140A5C42D8715(), 100f, -1, 0, 0);
								unk_0xD738221C247C8B71(Local_113[13 /*33*/], true);
								unk_0x7E4E83D33161D01A(&(Local_113[13 /*33*/]));
							}
							if (!unk_0x4915F4759304D5CF(Local_113[14 /*33*/]))
							{
								unk_0x33B5487515BD13D5(Local_113[14 /*33*/], unk_0xA19140A5C42D8715(), 100f, -1, 0, 0);
								unk_0xD738221C247C8B71(Local_113[14 /*33*/], true);
								unk_0x7E4E83D33161D01A(&(Local_113[14 /*33*/]));
							}
							Local_153[iVar0 /*6*/].f_2 = 7;
							break;
						
						case 7:
							if (func_67(unk_0xA19140A5C42D8715(), 1991.419f, 3054.915f, 47.533f, 1) > 150f)
							{
								Local_153[iVar0 /*6*/].f_2 = -1;
							}
							break;
					}
					break;
				
				case 27:
					unk_0xD1BB82B4E7020E56(2444.176f, 4974.077f, 56.4066f, 30f, 1194028902, 1);
					unk_0xD1BB82B4E7020E56(2444.176f, 4974.077f, 56.4066f, 30f, joaat("v_ilev_fh_frntdoor"), 1);
					Local_153[iVar0 /*6*/].f_1 = 0;
					break;
				
				case 29:
					break;
			}
			if (Local_153[iVar0 /*6*/].f_2 == -1)
			{
				Local_153[iVar0 /*6*/].f_1 = 0;
				Local_153[iVar0 /*6*/].f_2 = 0;
				Local_153[iVar0 /*6*/].f_3 = 0;
				Local_153[iVar0 /*6*/].f_4 = 0;
				Local_153[iVar0 /*6*/].f_5 = 0;
			}
		}
		iVar0++;
	}
}

float func_4(int iParam0, int iParam1, bool bParam2)
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

int func_5(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xA70969818F182A36(vParam0);
	unk_0x575CF00E129E0CE1(iVar0, func_6(unk_0x4C9BACA8D249CB13(), 1f, 1f));
	unk_0x3E46F0AAE4B470FB(iVar0, bParam1);
	return iVar0;
}

float func_6(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_7(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xD291E4BC830D587A(sParam0);
	unk_0x1D594DA1FE749C88(iParam1, 0);
}

int func_8()
{
	if (iLocal_93 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_68276)
	{
		if (Global_68277[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_68277[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_68277[iVar0 /*9*/].f_1 = (Global_68277[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_68277[iVar0 /*9*/] != -1)
	{
		if (Global_56406[Global_68277[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_68277[iVar0 /*9*/].f_1 > 1)
			{
				Global_68277[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_68277[iVar0 /*9*/].f_1 < 0)
			{
				Global_68277[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_10(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_56191 = iParam0;
	if (!Global_56189)
	{
		Global_56189 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_68276)
		{
			if (Global_68277[iVar0 /*9*/] == iParam0)
			{
				Global_68277[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_11(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_56189)
	{
	}
	Global_56189 = 0;
	if (bParam0)
	{
		Global_56190 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_68276)
		{
			if (Global_56406[Global_68277[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_68277[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_68276)
		{
			if (Global_68277[iVar0 /*9*/] > 0)
			{
				if (Global_68277[iVar0 /*9*/] == iParam1)
				{
					Global_68277[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_12(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 1)
	{
		if (iLocal_86 == 0)
		{
			iVar0 = 0;
			while (iVar0 < Local_109)
			{
				if (unk_0xCE3CB618AFE55EFB(Local_109[iVar0 /*5*/].f_3))
				{
					if (unk_0x1C05D741948BDE08(Local_109[iVar0 /*5*/].f_3) < 255)
					{
						unk_0xE1623437A3194332(&(Local_109[iVar0 /*5*/].f_3));
					}
					else
					{
						unk_0xE8C2974337833D20(Local_109[iVar0 /*5*/].f_3, 0);
					}
				}
				iVar0++;
			}
			iLocal_86 = 1;
		}
	}
	else if (iLocal_86)
	{
		iVar0 = 0;
		while (iVar0 < Local_109)
		{
			if (unk_0xCE3CB618AFE55EFB(Local_109[iVar0 /*5*/].f_3))
			{
				unk_0xE8C2974337833D20(Local_109[iVar0 /*5*/].f_3, 255);
			}
			else
			{
				Local_109[iVar0 /*5*/].f_3 = func_5(Local_109[iVar0 /*5*/], 0);
				unk_0x0CEDD2B5ABD96F4F(Local_109[iVar0 /*5*/].f_3, 1);
				unk_0x575CF00E129E0CE1(Local_109[iVar0 /*5*/].f_3, 0.4f);
				unk_0xE8C2974337833D20(Local_109[iVar0 /*5*/].f_3, 0);
				unk_0x570128B7829A8EAA(Local_109[iVar0 /*5*/].f_3, 5);
				unk_0x264E87C905AE790B(Local_109[iVar0 /*5*/].f_3, 0);
			}
			iVar0++;
		}
		iLocal_86 = 0;
	}
}

int func_13(int iParam0)
{
	return func_14(iParam0, 1, 0);
}

int func_14(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x6A15DD6A863D5E27(iParam0);
	if (unk_0xFAC06EE780B57279(iParam0))
	{
		unk_0x575CF00E129E0CE1(iVar0, func_6(unk_0x4C9BACA8D249CB13(), 1f, 1f));
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
		unk_0x575CF00E129E0CE1(iVar0, func_6(unk_0x4C9BACA8D249CB13(), 0.7f, 0.7f));
		unk_0xF46EDCACB3804F87(iVar0, bParam1);
	}
	else if (unk_0x92D42293DA8F9805(iParam0))
	{
		unk_0x575CF00E129E0CE1(iVar0, func_6(unk_0x4C9BACA8D249CB13(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_15(char* sParam0, int iParam1, char* sParam2)
{
	iLocal_403 = 1;
	iLocal_404 = iParam1;
	sLocal_406 = sParam0;
	sLocal_407 = sParam2;
}

void func_16(int iParam0, int iParam1)
{
	Global_56192 = iParam0;
	Global_56193 = iParam1;
}

void func_17(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_56194 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_68276)
	{
		if (iParam1 == -1 || Global_68277[iVar0 /*9*/] == iParam1)
		{
			if (Global_68277[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_68277[iVar0 /*9*/].f_6 = iParam0;
				Global_68277[iVar0 /*9*/].f_7 = 1;
				Global_68277[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

int func_18(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_113)
	{
		if (Local_113[iVar0 /*33*/].f_2 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_19(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_71205)
		{
			Global_2437022.f_75.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_106070.f_7233.f_227[iParam0] = iParam1;
		}
		Global_33084[iParam0] = iParam2;
		Global_33283[iParam0] = 1;
		func_22(iParam0, bParam3, iParam4, 0);
		func_20(iParam0, iParam1);
	}
}

void func_20(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				unk_0x7B68A43B688620B5("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				unk_0x7B68A43B688620B5("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				unk_0x0F93570322F6A341("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				unk_0x0F93570322F6A341("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_21(0, 0);
			}
			else
			{
				func_21(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				unk_0x7B68A43B688620B5("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				unk_0x7B68A43B688620B5("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				unk_0xD9B9ACB0291AA577("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				unk_0x665C47CF8EF3A8D1("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				unk_0x665C47CF8EF3A8D1("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				unk_0x665C47CF8EF3A8D1("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				unk_0x665C47CF8EF3A8D1("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_21(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x2BCFB39E86340DAA(&Global_104708, iParam0);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_104708, iParam0);
	}
	Global_104707 = 1;
}

bool func_22(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar4;
	bool bVar5;
	int iVar6;
	
	Global_1645162 = 1;
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_26(&Var3, iParam0);
	if (func_23())
	{
		iVar1 = Global_106070.f_7233.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_2437022.f_75.f_227[iParam0];
	}
	iVar2 = Global_33482[iParam0];
	if (unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !bParam3)
	{
		Global_1645162 = 1;
	}
	else
	{
		bVar5 = true;
		if (unk_0xFEB6EEC0545AF7AA(unk_0x61D2332983ACC05C()) != unk_0xFEB6EEC0545AF7AA("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_33084[iParam0] && unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), false), Var3, true) < 200f)
				{
					bVar5 = false;
					Global_1645162 = 1;
				}
				if (!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) || unk_0x16F3A5056959BF3A(unk_0xA19140A5C42D8715()))
				{
					if (!unk_0x71364F510A1CB69F())
					{
						bVar5 = false;
						Global_1645162 = 1;
					}
				}
			}
		}
		if (unk_0xE6F861B0A4D50CE0() && (!unk_0x47C3DC461C758C29() || unk_0x84C1DECF60EFBBD7() != 5))
		{
			bVar5 = false;
			Global_1645162 = 1;
		}
		if (bVar5)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							unk_0x8FAC08959C2D32F8(Var3, 10f, Var3.f_4[iVar1], 0);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							unk_0x5F041E7AE5419FEC(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_34678[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[1 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[1 /*8*/])) != unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x471855870C045BD0(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x981516504EAE59E2(&(Var3.f_8[1 /*8*/]));
								Global_1645162 = 1;
							}
						}
						if ((unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("REMOVE_ALL_STATES")) && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x471855870C045BD0(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x981516504EAE59E2(&(Var3.f_8[2 /*8*/]));
								Global_1645162 = 1;
							}
						}
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[0 /*8*/])) != unk_0xFEB6EEC0545AF7AA(""))
						{
							if (!unk_0x471855870C045BD0(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x1639295C71657BCF(&(Var3.f_8[0 /*8*/]));
								Global_1645162 = 1;
							}
						}
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_34)) != unk_0xFEB6EEC0545AF7AA(""))
						{
							if (!unk_0x471855870C045BD0(&(Var3.f_34)))
							{
								unk_0x1639295C71657BCF(&(Var3.f_34));
								Global_1645162 = 1;
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_34)) != unk_0xFEB6EEC0545AF7AA(""))
						{
							if (unk_0x471855870C045BD0(&(Var3.f_34)))
							{
								unk_0x981516504EAE59E2(&(Var3.f_34));
							}
						}
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[0 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[0 /*8*/])) != unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x471855870C045BD0(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x981516504EAE59E2(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("REMOVE_ALL_STATES")) && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x471855870C045BD0(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x981516504EAE59E2(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[1 /*8*/])) != unk_0xFEB6EEC0545AF7AA(""))
						{
							if (!unk_0x471855870C045BD0(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x1639295C71657BCF(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_34)) != unk_0xFEB6EEC0545AF7AA(""))
						{
							if (unk_0x471855870C045BD0(&(Var3.f_34)))
							{
								unk_0x981516504EAE59E2(&(Var3.f_34));
							}
						}
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[0 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[0 /*8*/])) != unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x471855870C045BD0(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x981516504EAE59E2(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[1 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[1 /*8*/])) != unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x471855870C045BD0(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x981516504EAE59E2(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("REMOVE_ALL_STATES"))
						{
							if (!unk_0x471855870C045BD0(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x1639295C71657BCF(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_34479[iParam0] = 1;
					Global_34678[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar6 = unk_0xB68EB57358F46F86(Var3, &(Var3.f_42));
					if (iVar6 != 0)
					{
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_50)) != unk_0xFEB6EEC0545AF7AA(""))
						{
							if (unk_0xE0A4C16EE6C60363(iVar6, &(Var3.f_50)))
							{
								unk_0xCD2417B9AC84180C(iVar6, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[1 /*8*/])) != unk_0xFEB6EEC0545AF7AA(""))
							{
								if (unk_0xE0A4C16EE6C60363(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0xCD2417B9AC84180C(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("REMOVE_ALL_STATES")) && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xE0A4C16EE6C60363(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0xCD2417B9AC84180C(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[0 /*8*/])) != unk_0xFEB6EEC0545AF7AA(""))
							{
								if (!unk_0xE0A4C16EE6C60363(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x6679FC2A24AEDF2D(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[0 /*8*/])) != unk_0xFEB6EEC0545AF7AA(""))
							{
								if (unk_0xE0A4C16EE6C60363(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0xCD2417B9AC84180C(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("REMOVE_ALL_STATES")) && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xE0A4C16EE6C60363(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0xCD2417B9AC84180C(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[1 /*8*/])) != unk_0xFEB6EEC0545AF7AA(""))
							{
								if (!unk_0xE0A4C16EE6C60363(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x6679FC2A24AEDF2D(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[0 /*8*/])) != unk_0xFEB6EEC0545AF7AA(""))
							{
								if (unk_0xE0A4C16EE6C60363(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0xCD2417B9AC84180C(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[1 /*8*/])) != unk_0xFEB6EEC0545AF7AA(""))
							{
								if (unk_0xE0A4C16EE6C60363(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0xCD2417B9AC84180C(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("REMOVE_ALL_STATES"))
							{
								if (!unk_0xE0A4C16EE6C60363(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x6679FC2A24AEDF2D(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0xEF6CE4AF8D633F85(iVar6);
						}
					}
					Global_34678[iParam0] = 1;
					Global_34479[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (unk_0x499324B3EF19C288(Var3, unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), false), true) < 250f)
					{
						uVar4 = unk_0x389F96269D4F1FD8(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (unk_0xCD7C9B7A8F43BA15(uVar4))
						{
							if (iVar1 == 0)
							{
								unk_0x317CA41ED2351630(uVar4, 3);
								Global_34678[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((unk_0xA3DC7C2803970902(uVar4) != 6 && unk_0xA3DC7C2803970902(uVar4) != 7) && unk_0xA3DC7C2803970902(uVar4) != 8)
								{
									unk_0x317CA41ED2351630(uVar4, 10);
									Global_34678[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						unk_0xA23198D7F155C365(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						unk_0xFA57C719261AA55D(&(Global_32830[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						unk_0x191C6AFA8C538AD7(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						unk_0x2BCFB39E86340DAA(&(Global_32830[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_33283[iParam0] = 0;
				Global_33482[iParam0] = iVar1;
				if (!func_23())
				{
					if (!Global_34079[iParam0])
					{
						Global_34079[iParam0] = 1;
						Global_34278++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_23()
{
	if ((func_25() == -1 || func_25() == 999) && !func_24() == 0)
	{
		return 1;
	}
	return 0;
}

int func_24()
{
	return Global_25460;
}

int func_25()
{
	return Global_25459;
}

int func_26(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_58 = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_61 = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_68 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_71 = { 190.75f, 31.25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -112041596;
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -186270611;
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_79 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_82 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_85 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_88 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_68 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_71 = { 13.6f, 20f, 8.9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_79 = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_82 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_85 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_88 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		
		case 79:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_79 = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_82 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_58 = { 1206.8f, 1803f, 43.9f };
			uParam0->f_61 = { 1329f, 2060.4f, 143.9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_68 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_71 = { 5.5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_68 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_71 = { 2.5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_68 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_68 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_79 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_82 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_85 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_88 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_79 = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_82 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_79 = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_82 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_79 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_82 = { -1158.965f, -1524.983f, 11.63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_79 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_82 = { -1048.064f, 368.0221f, 70.9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_79 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_82 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_79 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_82 = { -1076.233f, 92.1041f, 60.0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 1;
}

void func_27()
{
	int iVar0;
	
	func_32(27, 0);
	unk_0xFDD15D670AD33E10(2479.875f, 4980.868f, 44.82052f, 60f, 1, 0, 0, false);
	iLocal_145 = unk_0x48CFBECB146FD1A1(joaat("burrito"), 2479.579f, 4980.503f, 44.8051f, 341.8158f, 1, 1, 0);
	unk_0xEA847E35BAC71F2A(iLocal_145, 1);
	unk_0xA70C63A3E45BA678(iLocal_145, 2);
	unk_0x99F546A9200EA026(iLocal_145, 1084227584);
	if (iLocal_149 < 5)
	{
		func_29(1, 1, 4);
		func_29(1, 1, 5);
		func_29(1, 1, 2);
		func_29(1, 1, 1);
		func_29(1, 1, 6);
		func_29(1, 1, 7);
		func_29(1, 1, 3);
		func_29(1, 1, 0);
		func_29(1, 1, 8);
		func_29(1, 1, 9);
	}
	if (iLocal_149 < 6)
	{
		func_29(2, 1, 10);
		func_29(2, 1, 11);
		func_29(2, 1, 18);
		func_29(2, 1, 19);
	}
	if (iLocal_149 < 7)
	{
		func_29(2, 1, 12);
		func_29(2, 1, 13);
		func_29(2, 1, 14);
		func_29(2, 1, 15);
		func_29(2, 1, 16);
		func_29(2, 1, 17);
		func_29(2, 1, 20);
		func_29(5, 1, 23);
	}
	if (iLocal_149 == 7)
	{
		unk_0x6D68030C791111E0("DEAD");
		while (!unk_0x39C2D9AB77873F84("DEAD"))
		{
			func_28(323, 1);
		}
		Local_113[15 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_y_methhead_01"), 2436.901f, 4959.1f, 45.8106f, 209.7559f, 1, true);
		unk_0x3F01127ECD227890(Local_113[15 /*33*/], "DEAD", "DEAD_C", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		unk_0x3A3E4B7C6FBE305D(Local_113[15 /*33*/], 1, 0);
		unk_0xAAB061EFC631505C(Local_113[15 /*33*/], true);
		Local_113[16 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_m_hillbilly_01"), 2440.266f, 4970.705f, 45.8306f, 15.7982f, 1, true);
		unk_0x3F01127ECD227890(Local_113[16 /*33*/], "DEAD", "DEAD_D", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		unk_0x3A3E4B7C6FBE305D(Local_113[16 /*33*/], 1, 0);
		unk_0xAAB061EFC631505C(Local_113[16 /*33*/], true);
		Local_113[17 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_m_hillbilly_02"), 2443.42f, 4974.523f, 45.8106f, 121.834f, 1, true);
		unk_0x3F01127ECD227890(Local_113[17 /*33*/], "DEAD", "DEAD_E", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		unk_0x3A3E4B7C6FBE305D(Local_113[17 /*33*/], 1, 0);
		unk_0xAAB061EFC631505C(Local_113[17 /*33*/], true);
		Local_113[18 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_y_methhead_01"), 2448.888f, 4971.561f, 45.8106f, 194.7676f, 1, true);
		unk_0x3F01127ECD227890(Local_113[18 /*33*/], "DEAD", "DEAD_G", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		unk_0x3A3E4B7C6FBE305D(Local_113[18 /*33*/], 1, 0);
		unk_0xAAB061EFC631505C(Local_113[18 /*33*/], true);
		while (((!unk_0x411C28019DEA5CEF(Local_113[15 /*33*/], "DEAD", "DEAD_C", 3) || !unk_0x411C28019DEA5CEF(Local_113[16 /*33*/], "DEAD", "DEAD_D", 3)) || !unk_0x411C28019DEA5CEF(Local_113[17 /*33*/], "DEAD", "DEAD_E", 3)) || !unk_0x411C28019DEA5CEF(Local_113[18 /*33*/], "DEAD", "DEAD_G", 3))
		{
			func_28(54343, 1);
			if (((!unk_0x4915F4759304D5CF(Local_113[15 /*33*/]) && !unk_0x4915F4759304D5CF(Local_113[16 /*33*/])) && !unk_0x4915F4759304D5CF(Local_113[17 /*33*/])) && !unk_0x4915F4759304D5CF(Local_113[18 /*33*/]))
			{
			}
		}
		unk_0x6259CDB47862A4F3(Local_113[15 /*33*/], 0, 0);
		unk_0x6259CDB47862A4F3(Local_113[16 /*33*/], 0, 0);
		unk_0x6259CDB47862A4F3(Local_113[17 /*33*/], 0, 0);
		unk_0x6259CDB47862A4F3(Local_113[18 /*33*/], 0, 0);
		unk_0x4DC885EA8D6AF7FC("DEAD");
	}
	func_32(23, 0);
	iVar0 = 0;
	unk_0x2BCFB39E86340DAA(&iVar0, 3);
	unk_0x2BCFB39E86340DAA(&iVar0, 8);
	unk_0x2BCFB39E86340DAA(&iVar0, 1);
	unk_0x2BCFB39E86340DAA(&iVar0, 2);
	unk_0x2BCFB39E86340DAA(&iVar0, 4);
	uLocal_168 = unk_0xCFD2D70854568658(joaat("pickup_health_standard"), 2446.896f, 4990.972f, 45.5477f, iVar0, -1, 1, 0);
	if (!unk_0xA4D0862CD5E60478(iLocal_148))
	{
		iLocal_148 = unk_0xFAFCEBFB311E0625(2464.956f, 4990.051f, 44.48415f, 2.5f, 3.125f, 2.0625f, 0f, 0, 7);
	}
	iLocal_169[0] = unk_0x4B3DFBACE939C0B8(joaat("pickup_health_standard"), 2444.497f, 4975.956f, 50.565f, 0f, 0f, 100f, iVar0, -1, 2, 1, 0);
	unk_0xE391E726EE1618FD(iLocal_169[0], "V_8_Bed1Rm");
	iLocal_169[1] = unk_0x4B3DFBACE939C0B8(joaat("pickup_health_standard"), 2443.4f, 4978.52f, 46.8107f, 0f, 0f, 100f, iVar0, -1, 2, 1, 0);
	unk_0xE391E726EE1618FD(iLocal_169[1], "V_8_KitchnRm");
	iLocal_169[3] = unk_0x4B3DFBACE939C0B8(joaat("pickup_health_standard"), 2441.028f, 4963.851f, 46.5605f, 0f, 0f, -80.6f, iVar0, -1, 2, 1, 0);
	unk_0xE391E726EE1618FD(iLocal_169[3], "V_8_StudyRm");
	iLocal_169[4] = unk_0x4B3DFBACE939C0B8(joaat("pickup_health_standard"), 2435.165f, 4971.467f, 45.91f, 0f, 0f, -50.4f, iVar0, -1, 2, 1, 0);
	unk_0xE391E726EE1618FD(iLocal_169[4], "V_8_Hall2Rm");
	iVar0 = 0;
	unk_0x2BCFB39E86340DAA(&iVar0, 2);
	unk_0x2BCFB39E86340DAA(&iVar0, 1);
	unk_0x2BCFB39E86340DAA(&iVar0, 3);
	iLocal_169[2] = unk_0x4B3DFBACE939C0B8(joaat("pickup_weapon_sawnoffshotgun"), 2438.788f, 4970.79f, 50.565f, 0f, 0f, 0f, iVar0, -1, 2, 1, 0);
	unk_0xE391E726EE1618FD(iLocal_169[2], "V_8_Bed1Rm");
}

void func_28(int iParam0, int iParam1)
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	wait(0);
}

void func_29(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = iParam2;
	Local_113[iVar0 /*33*/].f_1 = iParam0;
	Local_113[iVar0 /*33*/].f_3 = iParam1;
	Local_113[iVar0 /*33*/].f_2 = iParam2;
	Local_113[iVar0 /*33*/].f_5 = 0;
}

int func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_153)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_153[iVar0 /*6*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_31(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_153)
	{
		if (Local_153[iVar0 /*6*/] == iParam0)
		{
			Local_153[iVar0 /*6*/].f_2 = -1;
			if (!bParam1)
			{
				Local_153[iVar0 /*6*/].f_1 = 0;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_32(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_153)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_153[iVar0 /*6*/] == iParam0)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_153)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 0)
		{
			Local_153[iVar0 /*6*/].f_1 = 1;
			Local_153[iVar0 /*6*/] = iParam0;
			Local_153[iVar0 /*6*/].f_2 = 0;
			Local_153[iVar0 /*6*/].f_3 = iParam1;
			Local_153[iVar0 /*6*/].f_4 = 0;
			Local_153[iVar0 /*6*/].f_5 = 0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_33(float fParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		return 1;
	}
	iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
	if (unk_0x1095F403F52B42E1(iVar0, 0))
	{
		if (unk_0xB0D49A1F9F054602(iVar0, -1, 0) == unk_0xA19140A5C42D8715())
		{
			if (!unk_0x097275D546C9735F(iVar0))
			{
				unk_0x0185AEECD1FF63F3(iVar0, fParam0, iParam1, 0);
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0x9661F58DC617631D(unk_0xA19140A5C42D8715()))
	{
		return 1;
	}
	if (unk_0x1095F403F52B42E1(iVar0, 0))
	{
		if (unk_0x097275D546C9735F(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_34()
{
	return Global_93284.f_327 > 0;
}

int func_35(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)
{
	if (!iLocal_574)
	{
		iLocal_574 = 1;
		vLocal_391[0 /*3*/] = iParam1;
		vLocal_391[0 /*3*/].f_1 = iParam2;
		vLocal_391[0 /*3*/].f_2 = sParam3;
		vLocal_391[1 /*3*/] = iParam4;
		vLocal_391[1 /*3*/].f_1 = iParam5;
		vLocal_391[1 /*3*/].f_2 = sParam6;
		vLocal_391[2 /*3*/] = iParam7;
		vLocal_391[2 /*3*/].f_1 = iParam8;
		vLocal_391[2 /*3*/].f_2 = sParam9;
		vLocal_391[3 /*3*/] = iParam10;
		vLocal_391[3 /*3*/].f_1 = iParam11;
		vLocal_391[3 /*3*/].f_2 = sParam12;
		func_58(sParam0, iParam1, iParam4, iParam7, iParam10);
		func_55(iParam1, iParam2, sParam3);
		if (iParam4 != -1)
		{
			func_55(iParam4, iParam5, sParam6);
		}
		if (iParam7 != -1)
		{
			func_55(iParam7, iParam8, sParam9);
		}
		if (iParam10 != -1)
		{
			func_55(iParam10, iParam11, sParam12);
		}
		if (!func_53())
		{
			if (unk_0x8187CC9EB2D7CFE6() && unk_0x1BB77F49EA9C72A3())
			{
				if (func_36(&uLocal_409, "CHI2AUD", sParam0, iParam13, 1, 0, 0))
				{
					iLocal_392 = 1;
					return 1;
				}
			}
			else if (func_36(&uLocal_409, "CHI2AUD", sParam0, iParam13, 0, 0, 0))
			{
				iLocal_392 = 0;
				return 1;
			}
		}
	}
	return 0;
}

bool func_36(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_52(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_37(sParam2, iParam3, 0);
}

int func_37(char* sParam0, int iParam1, bool bParam2)
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
					func_51();
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
		if (func_50(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_49();
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
				func_42();
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
				if (func_41())
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
			if (func_40())
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
			func_39();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_38();
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
		func_51();
	}
	return 0;
}

void func_38()
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

void func_39()
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

int func_40()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_41()
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

void func_42()
{
	if (func_48(14))
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
		Global_14513 = func_43();
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

int func_43()
{
	func_44();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_44()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_47(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_46(unk_0xA19140A5C42D8715());
			if (func_45(iVar0) && (!func_48(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_45(Global_106070.f_2355.f_539.f_4301))
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

bool func_45(int iParam0)
{
	return iParam0 < 3;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)
{
	if (func_45(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_48(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_49()
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

bool func_50(int iParam0, int iParam1)
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

void func_51()
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

void func_52(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_53()
{
	vector3 vVar0;
	
	if (Global_14513.f_1 > 3)
	{
		return 1;
	}
	if (func_54())
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

int func_54()
{
	if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_55(int iParam0, int iParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_408)
	{
		if (iLocal_408[iVar0] == iParam1)
		{
			func_57(&uLocal_409, iVar0);
			iLocal_408[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_408[iParam0] != 0)
	{
		func_57(&uLocal_409, iParam0);
	}
	func_56(&uLocal_409, iParam0, iParam1, sParam2, 0, 1);
	iLocal_408[iParam0] = iParam1;
}

void func_56(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_57(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_58(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (unk_0x429D45A6C6520026(sLocal_51) || !unk_0x3CAC2741CC1A631F(sLocal_51, sParam0))
	{
		sLocal_51 = sParam0;
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (Local_77[iVar0 /*10*/].f_7)
			{
				if (((iVar0 != iParam1 && iVar0 != iParam2) && iVar0 != iParam3) && iVar0 != iParam4)
				{
					func_57(&Local_77, iVar0);
				}
			}
			iVar0++;
		}
	}
}

int func_59()
{
	if (Global_15822 != 0 || unk_0x904275961B875DEB())
	{
		return 1;
	}
	return 0;
}

int func_60(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9)
{
	if (!unk_0x8187CC9EB2D7CFE6() || unk_0x1BB77F49EA9C72A3())
	{
		if (func_62(iParam1) != iParam2 || iParam2 == 0)
		{
			func_55(iParam1, iParam2, sParam3);
		}
		if (iParam4 != -1)
		{
			if (func_62(iParam4) != iParam5 || iParam5 == 0)
			{
				func_55(iParam4, iParam5, sParam6);
			}
		}
		if (iParam7 != -1)
		{
			if (func_62(iParam7) != iParam8 || iParam8 == 0)
			{
				func_55(iParam7, iParam8, sParam9);
			}
		}
		if (func_61(&uLocal_409, 39, "CHI2AUD", sParam0, 9, 0, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_61(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_52(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_37(sParam3, iParam4, bParam7);
}

int func_62(int iParam0)
{
	return iLocal_408[iParam0];
}

int func_63(int iParam0)
{
	if ((Global_16936 || Global_16935) || Global_16937)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 145)
	{
		if (Global_14513.f_1 == 10)
		{
			if (Global_1698 == iParam0)
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
	return 0;
}

void func_64()
{
	Global_14688 = 0;
	func_65();
}

void func_65()
{
	if (unk_0xB39808C1DCE0DCFA() || Global_14512 == 1)
	{
		unk_0xB4E5B1A6FE923ECB();
		Global_16833 = 0;
		unk_0xA8B97F91CBDE376C(false);
		Global_15822 = 6;
		Global_14513.f_1 = Global_14515;
		return;
	}
}

void func_66()
{
	Global_14688 = 0;
	func_51();
}

float func_67(int iParam0, vector3 vParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		vVar0 = { unk_0xE2BBD32891C18569(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0xE2BBD32891C18569(iParam0, false) };
	}
	return unk_0x499324B3EF19C288(vVar0, vParam1, bParam2);
}

int func_68(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (unk_0x1095F403F52B42E1(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_69(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	func_70(vParam0, vParam1, fParam2, vParam3, fParam4, vParam5, bParam6, bParam7, bParam8, bParam9, bParam10);
}

void func_70(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (bParam7)
	{
		bParam7 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = unk_0xC409B91AC4749F88();
	if (unk_0xDC5D81351D6A4DDB(iVar0))
	{
		if (!unk_0x4943BEEC19289B8E(iVar0))
		{
			unk_0x1F7948851FB36E88(iVar0, true, 0);
			iVar3 = 1;
		}
		if (unk_0x1095F403F52B42E1(iVar0, 0))
		{
			if (bParam10)
			{
				func_77(iVar0);
			}
			if (unk_0x54F6F5A823224519(iVar0, vParam0, vParam1, fParam2, 0, true, 0))
			{
				bVar1 = true;
			}
			else
			{
				vVar6 = { unk_0xE2BBD32891C18569(iVar0, true) };
				if ((vVar6.z > vParam0.z && vVar6.z < vParam1.z) || (vVar6.z > vParam1.z && vVar6.z < vParam0.z))
				{
					if (func_74(iVar0, vParam0, vParam1, fParam2))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0x1095F403F52B42E1(iVar0, 0))
			{
				if (unk_0xD3C4AB5E628133C1(iVar0, joaat("taxi")))
				{
					if (unk_0xB0D49A1F9F054602(iVar0, -1, 0) != unk_0xA19140A5C42D8715() && unk_0xB0D49A1F9F054602(iVar0, -1, 0) != 0)
					{
						if (unk_0x499324B3EF19C288(vParam0 + vParam1 / Vector(2f, 2f, 2f), unk_0xE2BBD32891C18569(iVar0, true), true) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam8)
			{
				if (func_72(iVar0, func_43(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_71(vParam5))
				{
					if (unk_0x1095F403F52B42E1(iVar0, 0))
					{
						iVar7 = unk_0x8F474E419F56E48D(iVar0);
						unk_0xE1D1402484966216(iVar0, &vVar4, &vVar5);
						if (unk_0x7C197233F79C2CB8(iVar7))
						{
							vParam5.x = (vParam5.x + 3f);
							vParam5.y = (vParam5.y + 3f);
						}
						if (((iVar7 == joaat("zentorno") || iVar7 == joaat("btype")) || iVar7 == joaat("dubsta3")) || iVar7 == joaat("monster"))
						{
							vParam5 = { vParam5 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar7 == joaat("t20") || iVar7 == joaat("virgo"))
						{
							vParam5 = { vParam5 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((vVar5.x - vVar4.x) > vParam5.x)
						{
							bVar2 = false;
						}
						else if ((vVar5.y - vVar4.y) > vParam5.y)
						{
							bVar2 = false;
						}
						else if ((vVar5.z - vVar4.z) > vParam5.z)
						{
							bVar2 = false;
						}
					}
				}
				if (unk_0x1095F403F52B42E1(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x01AF8CB960828C2B(vParam3, 5f, 0, 0, 0, 0, false, 0);
						unk_0x92DDCF53AA47A63D(iVar0, fParam4);
						unk_0x4299736016AECE26(iVar0, vParam3, 1, 0, 0, 1);
						unk_0x99F546A9200EA026(iVar0, 1084227584);
						if (bParam9)
						{
							unk_0xC19EDC1D7179164C(iVar0, false, 1, 0);
							unk_0xC53974682AC939A9(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0x4943BEEC19289B8E(iVar0) || !unk_0x82384F63D814C864(iVar0, 1))
						{
							unk_0x1F7948851FB36E88(iVar0, true, 1);
						}
						if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iVar0, 0))
						{
							unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), unk_0xE2BBD32891C18569(iVar0, true), 1, 0, 0, 1);
						}
						unk_0x4C842FAB634AC89E(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				unk_0x982F1A2D170EDD0F(vParam0, vParam1, fParam2, 0, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0xDC5D81351D6A4DDB(iVar0))
				{
					if (unk_0x4943BEEC19289B8E(iVar0))
					{
						unk_0x792676988A48387F(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0x4943BEEC19289B8E(iVar0))
			{
				unk_0x1F7948851FB36E88(iVar0, true, 0);
			}
			iVar8 = unk_0xB0D49A1F9F054602(iVar0, -1, 0);
			if (unk_0xDC5D81351D6A4DDB(iVar8) && !unk_0x4915F4759304D5CF(iVar8))
			{
				unk_0x4299736016AECE26(iVar8, unk_0xE2BBD32891C18569(iVar8, true), 1, 0, 0, 1);
			}
			iVar9 = unk_0xE251DF9395C4E1C4(unk_0x8F474E419F56E48D(iVar0));
			if (iVar9 <= 2)
			{
				iVar8 = unk_0xB0D49A1F9F054602(iVar0, 0, 0);
				if (unk_0xDC5D81351D6A4DDB(iVar8) && !unk_0x4915F4759304D5CF(iVar8))
				{
					unk_0x4299736016AECE26(iVar8, unk_0xE2BBD32891C18569(iVar8, true), 1, 0, 0, 1);
				}
			}
			if (iVar9 <= 4)
			{
				iVar8 = unk_0xB0D49A1F9F054602(iVar0, 1, 0);
				if (unk_0xDC5D81351D6A4DDB(iVar8) && !unk_0x4915F4759304D5CF(iVar8))
				{
					unk_0x4299736016AECE26(iVar8, unk_0xE2BBD32891C18569(iVar8, true), 1, 0, 0, 1);
				}
				iVar8 = unk_0xB0D49A1F9F054602(iVar0, 2, 0);
				if (unk_0xDC5D81351D6A4DDB(iVar8) && !unk_0x4915F4759304D5CF(iVar8))
				{
					unk_0x4299736016AECE26(iVar8, unk_0xE2BBD32891C18569(iVar8, true), 1, 0, 0, 1);
				}
			}
			unk_0x4C842FAB634AC89E(&iVar0);
		}
	}
}

int func_71(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_72(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xDC5D81351D6A4DDB(iParam0) || !unk_0x1095F403F52B42E1(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_73(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0x05EFB6A616B6FADE(Global_106070.f_7201[iVar2], 0))
		{
			if (unk_0xFB166837ACE44C44(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_73(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_74(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6[4];
	struct<2> Var7;
	struct<2> Var8;
	
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		vParam1.z = vParam2.z;
		vVar0 = { func_76(vParam1 - vParam2) };
		vVar1 = { vVar0 };
		vVar0.x = -vVar1.y;
		vVar0.y = vVar1.x;
		vVar0.z = 0f;
		vVar2 = { vParam1 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar3 = { vParam1 + vVar0 * FtoV((fParam3 / 2f)) };
		vVar4 = { vParam2 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar5 = { vParam2 + vVar0 * FtoV((fParam3 / 2f)) };
		unk_0xDFCF5BB9A4E3B293(unk_0x8F474E419F56E48D(iParam0), &Var7, &Var8);
		vVar6[0 /*3*/] = { unk_0x3201284584C7CD83(iParam0, Var7, Var7.f_1, 0f) };
		vVar6[1 /*3*/] = { unk_0x3201284584C7CD83(iParam0, Var7, Var8.f_1, 0f) };
		vVar6[2 /*3*/] = { unk_0x3201284584C7CD83(iParam0, Var8, Var7.f_1, 0f) };
		vVar6[3 /*3*/] = { unk_0x3201284584C7CD83(iParam0, Var8, Var8.f_1, 0f) };
		if (((((((((((((((func_75(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar3) || func_75(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar3, vVar5)) || func_75(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar4, vVar5)) || func_75(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar4)) || func_75(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar3)) || func_75(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar3, vVar5)) || func_75(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar4, vVar5)) || func_75(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar4)) || func_75(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar3)) || func_75(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar3, vVar5)) || func_75(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar4, vVar5)) || func_75(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar4)) || func_75(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar3)) || func_75(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar3, vVar5)) || func_75(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar4, vVar5)) || func_75(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar4))
		{
			return 1;
		}
	}
	return 0;
}

int func_75(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)
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
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param2;
	fVar3 = Param2.f_1;
	fVar4 = Param4;
	fVar5 = Param4.f_1;
	fVar6 = Param6;
	fVar7 = Param6.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_76(vector3 vParam0)
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

void func_77(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (unk_0x1095F403F52B42E1(iParam0, 0))
		{
			if (unk_0x2F78D19B3446544E(iParam0) <= 200f)
			{
				unk_0x70B1045E099298C1(iParam0, 500f);
			}
			if (unk_0xC9396A3FD9FCE75E(iParam0) <= 700f)
			{
				unk_0x70B1045E099298C1(iParam0, 900f);
			}
			if (unk_0x24A1A7BF4ED94B71(iParam0) < 200)
			{
				unk_0x70B1045E099298C1(iParam0, 500f);
			}
		}
	}
}

void func_78()
{
	if (iLocal_149 >= 3)
	{
		if (iLocal_149 > 3)
		{
			func_103(&Local_119, &vLocal_130, vLocal_123, vLocal_124, vLocal_125, vLocal_126, vLocal_122, vLocal_129, vLocal_120, vLocal_121, vLocal_127, vLocal_128);
		}
		func_79();
	}
}

void func_79()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0;
	while (iVar0 < Local_119)
	{
		if ((!unk_0x4915F4759304D5CF(Local_113[iVar0 /*33*/]) && !unk_0xD61D0CA14AE902DF(Local_113[iVar0 /*33*/], 1)) || Local_119[iVar0 /*24*/].f_3 == 1)
		{
			switch (Local_119[iVar0 /*24*/].f_3)
			{
				case 1:
					switch (Local_113[iVar0 /*33*/].f_1)
					{
						case 1:
							switch (Local_113[iVar0 /*33*/].f_2)
							{
								case 2:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2451.818f, 4985.704f, 50.5678f, 227.842f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
										func_99(iVar0, 5, 0, 0);
									}
									break;
								
								case 1:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2455.085f, 4974.466f, 50.5677f, 246.051f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
										func_99(iVar0, 14, 0, 0);
									}
									break;
								
								case 6:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2461.609f, 4993.675f, 44.9821f, -90f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										func_99(iVar0, 7, 0, 0);
										Local_113[iVar0 /*33*/].f_4 = 7;
									}
									break;
								
								case 7:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2462.887f, 4993.614f, 44.9474f, 89.8899f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										func_99(iVar0, 7, 1, 0);
										Local_113[iVar0 /*33*/].f_4 = 7;
									}
									break;
								
								case 3:
									if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2460.651f, 4970.813f, 45.5765f, 240.2054f, joaat("weapon_assaultrifle"), 0, 0))
									{
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 0, 0);
										func_99(iVar0, 16, 0, 0);
									}
									break;
								
								case 0:
									if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2443.138f, 4966.709f, 50.5677f, 246.051f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 1, 0);
										func_99(iVar0, 15, 0, 0);
									}
									break;
								
								case 4:
									if (iLocal_149 == 3)
									{
										if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2457.098f, 4954.283f, 44.1304f, 316.5498f, joaat("weapon_pistol"), 0, 0))
										{
											Local_113[iVar0 /*33*/].f_20 = unk_0xFCFC8CC5FF74580D(joaat("prop_cs_fertilizer"), 2460.098f, 4957.283f, 44.1304f, 1, true, 0);
											Local_113[iVar0 /*33*/].f_5 = 1;
											func_99(iVar0, 3, 0, 0);
										}
									}
									else if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2478.32f, 4982.325f, 44.8913f, 49.5021f, joaat("weapon_pistol"), 0, 0))
									{
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										Local_113[iVar0 /*33*/].f_20 = unk_0xFCFC8CC5FF74580D(joaat("prop_cs_fertilizer"), 2478.444f, 4976.921f, 44.5614f, 1, true, 0);
										Local_113[iVar0 /*33*/].f_5 = 1;
										func_99(iVar0, 2, 0, 0);
									}
									break;
								
								case 5:
									if (iLocal_149 == 3)
									{
										if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2454.753f, 4951.719f, 44.1445f, 316.5541f, joaat("weapon_pistol"), 0, 0))
										{
											Local_113[iVar0 /*33*/].f_20 = unk_0xFCFC8CC5FF74580D(joaat("prop_cs_fertilizer"), 2455.753f, 4952.719f, 44.1445f, 1, true, 0);
											Local_113[iVar0 /*33*/].f_5 = 1;
											func_99(iVar0, 3, 0, 0);
										}
									}
									else if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2475.873f, 4984.426f, 45.0916f, 45.8993f, joaat("weapon_pistol"), 0, 0))
									{
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										Local_113[iVar0 /*33*/].f_20 = unk_0xFCFC8CC5FF74580D(joaat("prop_cs_fertilizer"), 2476.582f, 4978.492f, 44.5734f, 1, true, 0);
										Local_113[iVar0 /*33*/].f_5++;
										func_99(iVar0, 2, 0, 0);
									}
									break;
								
								case 8:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2505.451f, 4970.663f, 43.548f, 49.5021f, joaat("weapon_pistol"), 1, 0))
									{
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										Local_113[iVar0 /*33*/].f_14 = unk_0x70788DC3D80C9DEB(2505.451f, 4970.663f, 43.548f, 0f, 0f, 88.725f, 2);
										func_98(Local_113[iVar0 /*33*/], 20f, 5f, 90f, -90f, 60f);
										unk_0x4FE3554969185993(Local_113[iVar0 /*33*/], "A_M_M_HillBilly_02_WHITE_MINI_02");
										unk_0xE5565DEAABF9D588(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_14, "misschinese2_bank5", "peds_shootcans_a", 1000f, -4f, 1, 0, 1148846080, 0);
										unk_0xDA16255FBFC16B28(Local_113[iVar0 /*33*/].f_14, 1);
										unk_0x3A3E4B7C6FBE305D(Local_113[iVar0 /*33*/], 0, 0);
										func_99(iVar0, 4, 0, Local_113[iVar0 /*33*/].f_14);
										func_32(7, 0);
									}
									break;
								
								case 9:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2505.451f, 4970.663f, 43.548f, 49.5021f, joaat("weapon_pistol"), 1, 0))
									{
										Local_113[iVar0 /*33*/].f_14 = unk_0x70788DC3D80C9DEB(2507.879f, 4970.188f, 43.5f, 0f, 0f, 93.42f, 2);
										unk_0xDA16255FBFC16B28(Local_113[iVar0 /*33*/].f_14, 1);
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										unk_0xE5565DEAABF9D588(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_14, "misschinese2_bank5", "peds_shootcans_b", 1000f, -4f, 1, 0, 1148846080, 0);
										unk_0x3A3E4B7C6FBE305D(Local_113[iVar0 /*33*/], 0, 0);
										func_99(iVar0, 4, 0, Local_113[iVar0 /*33*/].f_14);
									}
									break;
							}
							if (unk_0xDC5D81351D6A4DDB(Local_113[iVar0 /*33*/]))
							{
								unk_0x98D1B1BD9C3AA456(Local_113[iVar0 /*33*/], 1, 1);
								unk_0xCA3BC3E78B0105ED(Local_113[iVar0 /*33*/], 1);
							}
							break;
						
						case 2:
							switch (Local_113[iVar0 /*33*/].f_2)
							{
								case 10:
									if (iLocal_149 < 5)
									{
										if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2458.57f, 4987.584f, 45.8107f, 233.842f, joaat("weapon_pistol"), 0, 0))
										{
											func_99(iVar0, 14, 0, 0);
											func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
										}
									}
									else if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2454.627f, 4995.726f, 45.2011f, 233.842f, joaat("weapon_pistol"), 0, 0))
									{
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
										func_99(iVar0, 23, 0, 0);
									}
									break;
								
								case 11:
									if (iLocal_149 < 5)
									{
										if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2442.994f, 4985.164f, 45.8103f, 303.409f, joaat("weapon_microsmg"), 0, 0))
										{
											func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 1, 0);
											func_99(iVar0, 14, 0, 0);
										}
									}
									else if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2450.371f, 4995.103f, 44.9282f, 303.409f, joaat("weapon_microsmg"), 0, 0))
									{
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 1, 0);
										func_99(iVar0, 23, 0, 0);
									}
									break;
								
								case 12:
									if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2433.124f, 4967.804f, 46.293f, 63.7673f, joaat("weapon_pumpshotgun"), 0, 1))
									{
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 13:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2432.091f, 4968.833f, 46.298f, 63.7673f, joaat("weapon_pistol"), 0, 1))
									{
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 14:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2431.485f, 4964.779f, 45.8106f, -137.5f, joaat("weapon_pistol"), 0, 1))
									{
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 15:
									if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2440.385f, 4965.429f, 45.8106f, 63.7673f, joaat("weapon_pumpshotgun"), 0, 1))
									{
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 16:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2439.741f, 4964.89f, 45.8106f, 130.3988f, joaat("weapon_microsmg"), 0, 1))
									{
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 17:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2438.707f, 4964.094f, 45.8106f, 127.6523f, joaat("weapon_pistol"), 0, 1))
									{
										unk_0xD461381B293D9B46(Local_113[iVar0 /*33*/], 5);
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 18:
									if (iLocal_149 < 5)
									{
										if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2440.929f, 4976.921f, 45.8106f, -130f, joaat("weapon_pistol"), 0, 1))
										{
											func_99(iVar0, 7, 0, 0);
											Local_113[iVar0 /*33*/].f_4 = 7;
											func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										}
									}
									else if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2452.052f, 4956.689f, 43.8957f, 230.7673f, joaat("weapon_pistol"), 0, 1))
									{
										func_99(iVar0, 23, 0, 0);
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
									}
									break;
								
								case 19:
									if (iLocal_149 < 5)
									{
										if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2442.926f, 4975.148f, 45.8106f, 46.7673f, joaat("weapon_pistol"), 0, 1))
										{
											func_99(iVar0, 7, 0, 0);
											func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
											Local_113[iVar0 /*33*/].f_4 = 7;
										}
									}
									else if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2449.338f, 4954.127f, 43.9299f, 46.7673f, joaat("weapon_pistol"), 0, 1))
									{
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										func_99(iVar0, 23, 0, 0);
									}
									break;
								
								case 20:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2449.114f, 4981.984f, 45.8102f, 130.7673f, joaat("weapon_microsmg"), 0, 1))
									{
										func_99(iVar0, 7, 0, 0);
										Local_113[iVar0 /*33*/].f_4 = 32;
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 0, 0);
									}
									break;
								
								case 21:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2447.553f, 4980.515f, 45.8096f, 311.7673f, joaat("weapon_microsmg"), 0, 1))
									{
										func_99(iVar0, 7, 0, 0);
										Local_113[iVar0 /*33*/].f_4 = 7;
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 0, 0);
									}
									break;
							}
							if (!unk_0x4915F4759304D5CF(Local_113[iVar0 /*33*/]))
							{
								unk_0x98D1B1BD9C3AA456(Local_113[iVar0 /*33*/], 1, 1);
							}
							break;
						
						case 5:
							switch (Local_113[iVar0 /*33*/].f_2)
							{
								case 22:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2439.258f, 4976.201f, 45.8106f, 116.815f, joaat("weapon_unarmed"), 0, 1))
									{
										func_99(iVar0, 28, 0, 0);
									}
									break;
								
								case 23:
									if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2433.292f, 4968.534f, 42.348f, 105.5f, joaat("weapon_unarmed"), 0, 1))
									{
										func_99(iVar0, 30, 0, 0);
									}
									break;
							}
							break;
					}
					if (!unk_0x4915F4759304D5CF(Local_113[iVar0 /*33*/]))
					{
						unk_0xEAF1F3E17588C851(Local_113[iVar0 /*33*/], 1);
						Local_119[iVar0 /*24*/].f_3 = 3;
						iVar0 = (iVar0 - 1);
					}
					break;
				
				case 3:
					if (Local_119[iVar0 /*24*/].f_3 <= 3)
					{
						switch (Local_113[iVar0 /*33*/].f_3)
						{
							case 3:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										if (unk_0xDC5D81351D6A4DDB(Local_113[iVar0 /*33*/].f_20))
										{
											if (unk_0xC2336726092EE80B(Local_113[iVar0 /*33*/].f_20) && unk_0x2A5E770306153AF2(Local_113[iVar0 /*33*/].f_20))
											{
												unk_0x96B71B23D409A3DB(Local_113[iVar0 /*33*/].f_20, Local_113[iVar0 /*33*/], unk_0xF622A022C26057AA(Local_113[iVar0 /*33*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
												Local_113[iVar0 /*33*/].f_5++;
											}
											if (unk_0xDC5D81351D6A4DDB(Local_113[iVar0 /*33*/].f_20))
											{
												if (Local_113[iVar0 /*33*/].f_2 == 4)
												{
													unk_0x3F01127ECD227890(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												else
												{
													unk_0x3F01127ECD227890(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												unk_0x98D1B1BD9C3AA456(Local_113[iVar0 /*33*/], 1, 1);
												unk_0x3A3E4B7C6FBE305D(Local_113[iVar0 /*33*/], 0, 0);
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 1:
										break;
								}
								break;
							
							case 2:
								if (Local_113[iVar0 /*33*/].f_5 < 7)
								{
									func_97(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1);
								}
								if (unk_0x411C28019DEA5CEF(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
								{
									unk_0x39AA033597761444(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1.4f);
								}
								if (unk_0x411C28019DEA5CEF(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
								{
									unk_0x39AA033597761444(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1.4f);
								}
								if (unk_0xDC5D81351D6A4DDB(Local_113[iVar0 /*33*/].f_20))
								{
									if (Local_113[iVar0 /*33*/].f_5 > 2 && Local_113[iVar0 /*33*/].f_5 <= 6)
									{
										if (unk_0xF797E4DD45066C88(Local_113[iVar0 /*33*/].f_20))
										{
											Local_113[iVar0 /*33*/].f_12 = (func_96(unk_0xE2BBD32891C18569(Local_113[iVar0 /*33*/], true), Local_113[iVar0 /*33*/].f_6, 1) - unk_0x552C823E1D2A019C(Local_113[iVar0 /*33*/]));
											Local_113[iVar0 /*33*/].f_12 = func_95((Local_113[iVar0 /*33*/].f_12 / 4f), -15f, 15f);
											if (!unk_0x685AE6AF34B35D3B(Local_113[iVar0 /*33*/]))
											{
												unk_0x92DDCF53AA47A63D(Local_113[iVar0 /*33*/], (unk_0x552C823E1D2A019C(Local_113[iVar0 /*33*/]) + (timestep() * Local_113[iVar0 /*33*/].f_12)));
											}
										}
									}
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										if (unk_0xDC5D81351D6A4DDB(Local_113[iVar0 /*33*/].f_20))
										{
											if (unk_0xC2336726092EE80B(Local_113[iVar0 /*33*/].f_20) && unk_0x2A5E770306153AF2(Local_113[iVar0 /*33*/].f_20))
											{
												unk_0x96B71B23D409A3DB(Local_113[iVar0 /*33*/].f_20, Local_113[iVar0 /*33*/], unk_0xF622A022C26057AA(Local_113[iVar0 /*33*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
												func_32(20, 0);
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
									
									case 1:
										if (unk_0xDC5D81351D6A4DDB(Local_113[iVar0 /*33*/].f_20))
										{
											if (func_67(Local_113[iVar0 /*33*/], 2495.779f, 5004.715f, 43.87337f, 1) < 99f)
											{
												if (Local_113[iVar0 /*33*/].f_2 == 4)
												{
													unk_0x3F01127ECD227890(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												else
												{
													unk_0x3F01127ECD227890(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												unk_0x3A3E4B7C6FBE305D(Local_113[iVar0 /*33*/], 0, 0);
												unk_0x98D1B1BD9C3AA456(Local_113[iVar0 /*33*/], 1, 1);
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 2:
										if (unk_0x411C28019DEA5CEF(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3) || unk_0x411C28019DEA5CEF(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
										{
											Local_113[iVar0 /*33*/].f_6 = { 2466.903f, 4996.254f, 45.5443f };
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (unk_0xA60C975CBAB69F34(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, 0, true, 0))
										{
											Local_113[iVar0 /*33*/].f_6 = { 2461.332f, 4998.94f, 45.359f };
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 4:
										if (unk_0xA60C975CBAB69F34(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, 0, true, 0))
										{
											Local_113[iVar0 /*33*/].f_6 = { 2455.984f, 4997.404f, 45.2645f };
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 5:
										if (unk_0xA60C975CBAB69F34(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, 0, true, 0))
										{
											if (Local_113[iVar0 /*33*/].f_2 == 5)
											{
												Local_113[iVar0 /*33*/].f_6 = { 2452.091f, 4993.674f, 45.1404f };
												Local_113[iVar0 /*33*/].f_5++;
											}
											else
											{
												Local_113[iVar0 /*33*/].f_6 = { 2454.091f, 4995.674f, 45.1404f };
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 6:
										if (unk_0xA60C975CBAB69F34(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, 0, true, 0))
										{
											if (unk_0x411C28019DEA5CEF(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
											{
												unk_0xED3CB2E0519060F1(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", -1.5f);
											}
											if (unk_0x411C28019DEA5CEF(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
											{
												unk_0xED3CB2E0519060F1(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", -1.5f);
											}
											Local_113[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
											if (unk_0xDC5D81351D6A4DDB(Local_113[iVar0 /*33*/].f_20))
											{
												unk_0xF334C9B245CD323D(Local_113[iVar0 /*33*/].f_20, 0, 1);
											}
											if (func_68(iLocal_145))
											{
												if (Local_113[iVar0 /*33*/].f_2 == 4)
												{
													unk_0x6D9BE0B9D5BA1106(Local_113[iVar0 /*33*/], "move_m@gangster@var_e", 1048576000);
													unk_0xA2EBCD9385E56019(Local_113[iVar0 /*33*/], iLocal_145, -1, -1, 1f, 1, 0);
													func_99(func_18(6), 14, 0, 0);
													func_99(func_18(7), 33, 0, 0);
												}
												else
												{
													unk_0x6D9BE0B9D5BA1106(Local_113[iVar0 /*33*/], "move_m@gangster@var_f", 1048576000);
													unk_0xA2EBCD9385E56019(Local_113[iVar0 /*33*/], iLocal_145, -1, 0, 1f, 1, 0);
												}
											}
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_14 = 0;
											Local_113[iVar0 /*33*/].f_15 = 0;
										}
										break;
									
									case 7:
										func_94(iVar0);
										if (unk_0x5D7DFE2058701942(Local_113[iVar0 /*33*/], 0))
										{
											unk_0x98D1B1BD9C3AA456(Local_113[iVar0 /*33*/], 0, 1);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 8:
										if (func_68(iLocal_145))
										{
											if (!unk_0x588F5E48C78F1C73(iLocal_145, -1, 0))
											{
												if (Local_113[iVar0 /*33*/].f_2 == 4)
												{
													if (!unk_0x588F5E48C78F1C73(iLocal_145, 0, 0))
													{
														iVar1 = func_18(5);
														if (iVar1 >= 0)
														{
															if (!unk_0x4915F4759304D5CF(Local_113[iVar1 /*33*/]))
															{
																if (unk_0x8A29BBDF4603E52B(Local_113[iVar1 /*33*/]))
																{
																	func_93();
																	unk_0xE49301B2B6F420DE(0, iLocal_145, 2367.668f, 5098.645f, 46.8185f, 12f, 0, joaat("burrito"), 786599, 5f, 5f);
																	unk_0x731722E696597BD1(0, iLocal_145, 19f, 786599);
																	func_92(&(Local_113[iVar0 /*33*/]), 0);
																	func_91(25, 1);
																	Local_113[iVar0 /*33*/].f_5++;
																}
															}
														}
													}
												}
											}
											if (!unk_0x588F5E48C78F1C73(iLocal_145, 0, 0))
											{
												if (Local_113[iVar0 /*33*/].f_2 == 5)
												{
													Local_113[iVar0 /*33*/].f_5++;
												}
											}
										}
										break;
									
									case 9:
										break;
								}
								break;
							
							case 5:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										func_93();
										unk_0x956B3CF461C0C1C9(0, 2459.646f, 4977.735f, 50.5678f, 1f, 20000, 1048576000, 0, 1193033728);
										unk_0x956B3CF461C0C1C9(0, 2456.221f, 4974.685f, 50.5678f, 1f, 20000, 1048576000, 0, 1193033728);
										unk_0x1705813884E81079(0, 2456.221f, 4974.685f, 50.5678f, 92.5678f, 1061158912);
										unk_0x47D73A216DD513C8(0, 92.5678f, 0);
										func_92(&(Local_113[iVar0 /*33*/]), 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0xF9D4EF1338E38AFB(Local_113[iVar0 /*33*/], 242628503) == 7)
										{
											func_99(iVar0, 7, 0, 9000);
											iVar2 = 1;
											if (iVar2 != -1)
											{
												func_99(iVar2, 7, 0, 9000);
											}
										}
										break;
									
									case 2:
										func_93();
										unk_0x956B3CF461C0C1C9(0, 2450.491f, 4986.83f, 50.5677f, 1f, 20000, 1048576000, 0, 1193033728);
										unk_0x47D73A216DD513C8(0, 309.5567f, 0);
										unk_0x4AABC2A9FCCE3C8F(0, 2000);
										func_92(&(Local_113[iVar0 /*33*/]), 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 3:
										if (unk_0xF9D4EF1338E38AFB(Local_113[iVar0 /*33*/], 242628503) == 7)
										{
											Local_113[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 6:
								if (unk_0xF9D4EF1338E38AFB(Local_113[iVar0 /*33*/], 993674639) == 7 && Local_113[iVar0 /*33*/].f_5 > 1)
								{
									Local_113[iVar0 /*33*/].f_5 = 0;
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0xB20B772FD9DE1847(Local_113[iVar0 /*33*/], joaat("weapon_unarmed"), true);
										unk_0x47D73A216DD513C8(Local_113[iVar0 /*33*/], 219f, 1500);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0xF9D4EF1338E38AFB(Local_113[iVar0 /*33*/], 1920390111) == 7)
										{
											unk_0x0EEB301CAA50A123(Local_113[iVar0 /*33*/], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 32:
								if (!unk_0x4915F4759304D5CF(Local_113[iVar0 /*33*/]))
								{
									if (Local_113[iVar0 /*33*/].f_1 == 1 || func_4(unk_0xA19140A5C42D8715(), Local_113[iVar0 /*33*/], 1) < 20f)
									{
										func_97(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1);
									}
									if (Local_113[iVar0 /*33*/].f_5 < 10)
									{
									}
									switch (Local_113[iVar0 /*33*/].f_5)
									{
										case 0:
											unk_0x0EEB301CAA50A123(Local_113[iVar0 /*33*/], "WORLD_HUMAN_AA_SMOKE", Local_113[iVar0 /*33*/].f_14, 0);
											Local_113[iVar0 /*33*/].f_5++;
											break;
										
										case 1:
											if (func_4(unk_0xA19140A5C42D8715(), Local_113[iVar0 /*33*/], 1) < 10f)
											{
												iVar3 = unk_0x22C775856F4633CA(0, 3);
												if (iVar3 == 0)
												{
													unk_0x85AF6DC3641E2442(Local_113[iVar0 /*33*/], "GENERIC_CURSE_MED", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
												else if (iVar3 == 1)
												{
													unk_0x85AF6DC3641E2442(Local_113[iVar0 /*33*/], "GENERIC_INSULT_MED", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
												else
												{
													unk_0x85AF6DC3641E2442(Local_113[iVar0 /*33*/], "CHAT_STATE", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_14 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(5000, 10000));
											}
											break;
										
										case 2:
											if (unk_0xFD34717937104F1C() > Local_113[iVar0 /*33*/].f_14)
											{
												Local_113[iVar0 /*33*/].f_5 = 1;
											}
											break;
										
										case 10:
											if (func_35("CHI2_hear", 8, Local_113[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_14 = unk_0xFD34717937104F1C() + 1000;
											}
											break;
										
										case 11:
											if (unk_0xFD34717937104F1C() > Local_113[iVar0 /*33*/].f_14)
											{
												unk_0xD87AD31611110768(Local_113[iVar0 /*33*/], unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), 5000);
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_14 = unk_0xFD34717937104F1C() + 5000;
											}
											break;
										
										case 12:
											if (unk_0xCCF89CDD3583210D(unk_0xD4E735F4B6A956AC(), Local_113[iVar0 /*33*/]) && func_67(Local_113[iVar0 /*33*/], 2448.003f, 4982.305f, 45.8519f, 1) < 10f)
											{
												if (unk_0xFD34717937104F1C() > (Local_113[iVar0 /*33*/].f_14 - 3000))
												{
													unk_0x956B3CF461C0C1C9(Local_113[iVar0 /*33*/], unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), 1f, 20000, 1048576000, 0, 1193033728);
													Local_113[iVar0 /*33*/].f_5 = 15;
												}
											}
											else if (unk_0xFD34717937104F1C() > Local_113[iVar0 /*33*/].f_14)
											{
												if (func_35("CHI2_nope", 8, Local_113[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_113[iVar0 /*33*/].f_5++;
												}
											}
											break;
										
										case 13:
											func_93();
											unk_0x956B3CF461C0C1C9(0, 2449.114f, 4981.984f, 45.8102f, 1f, 20000, 1048576000, 0, 1193033728);
											unk_0x47D73A216DD513C8(0, 127.6328f, 3000);
											func_92(&(Local_113[iVar0 /*33*/]), 0);
											Local_113[iVar0 /*33*/].f_14 = unk_0xFD34717937104F1C() + 3000;
											Local_113[iVar0 /*33*/].f_5++;
											break;
										
										case 14:
											if (unk_0xFD34717937104F1C() > Local_113[iVar0 /*33*/].f_14 || unk_0xF9D4EF1338E38AFB(Local_113[iVar0 /*33*/], 242628503) == 7)
											{
												Local_113[iVar0 /*33*/].f_5 = 0;
											}
											break;
										
										case 15:
											if (func_35("CHI2_hear", 8, Local_113[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_113[iVar0 /*33*/].f_5++;
											}
											break;
										
										case 16:
											if (unk_0xF9D4EF1338E38AFB(Local_113[iVar0 /*33*/], 713668775) == 7)
											{
												Local_113[iVar0 /*33*/].f_14 = unk_0xFD34717937104F1C() + 3000;
												Local_113[iVar0 /*33*/].f_5 = 12;
											}
											break;
										}
								}
								break;
							
							case 33:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										Local_113[iVar0 /*33*/].f_14 = unk_0xFD34717937104F1C() + 3000;
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0xFD34717937104F1C() > Local_113[iVar0 /*33*/].f_14)
										{
											if (func_68(iLocal_145))
											{
												unk_0xA2EBCD9385E56019(Local_113[iVar0 /*33*/], iLocal_145, 20000, 1, 1f, 1, 0);
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_14 = 0;
												Local_113[iVar0 /*33*/].f_15 = 0;
											}
										}
										break;
									
									case 2:
										func_94(iVar0);
										break;
								}
								break;
							
							case 7:
								if (Local_113[iVar0 /*33*/].f_1 == 1 || func_4(unk_0xA19140A5C42D8715(), Local_113[iVar0 /*33*/], 1) < 20f)
								{
									func_97(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1);
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										iVar4 = joaat("weapon_unarmed");
										if (unk_0xF990CFC0F1D94A39(Local_113[iVar0 /*33*/], &iVar4, 1))
										{
											unk_0x60EE6BD0F9B51FFC(Local_113[iVar0 /*33*/], 0);
										}
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (!unk_0xF990CFC0F1D94A39(Local_113[iVar0 /*33*/], &iVar4, 1))
										{
											func_93();
											if (iVar0 == 1)
											{
												if (!unk_0x4915F4759304D5CF(Local_113[2 /*33*/]))
												{
													unk_0x0177431263151C4E(0, Local_113[2 /*33*/], 2000);
												}
											}
											else if (iVar0 == 2)
											{
												if (!unk_0x4915F4759304D5CF(Local_113[1 /*33*/]))
												{
													unk_0x0177431263151C4E(0, Local_113[1 /*33*/], 2000);
												}
											}
											else if (iVar0 == 6)
											{
												if (!unk_0x4915F4759304D5CF(Local_113[7 /*33*/]))
												{
													unk_0x0177431263151C4E(0, Local_113[7 /*33*/], 2000);
												}
											}
											else if (iVar0 == 7)
											{
												if (!unk_0x4915F4759304D5CF(Local_113[6 /*33*/]))
												{
													unk_0x0177431263151C4E(0, Local_113[6 /*33*/], 2000);
												}
											}
											if (Local_113[iVar0 /*33*/].f_14 != 0)
											{
												unk_0x0EEB301CAA50A123(0, "WORLD_HUMAN_HANG_OUT_STREET", Local_113[iVar0 /*33*/].f_14, 0);
											}
											else
											{
												unk_0x0EEB301CAA50A123(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
											}
											func_92(&(Local_113[iVar0 /*33*/]), 0);
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_15 = unk_0xFD34717937104F1C() + 15000;
										}
										break;
									
									case 2:
										if (unk_0xF9D4EF1338E38AFB(Local_113[iVar0 /*33*/], 242628503) == 7 || unk_0xFD34717937104F1C() > Local_113[iVar0 /*33*/].f_15)
										{
											unk_0x9568B1B58F78FF36(Local_113[iVar0 /*33*/]);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (unk_0xF9D4EF1338E38AFB(Local_113[iVar0 /*33*/], 242628503) == 7)
										{
											if (Local_113[iVar0 /*33*/].f_4 == 5)
											{
												unk_0x60EE6BD0F9B51FFC(Local_113[iVar0 /*33*/], 1);
												Local_113[iVar0 /*33*/].f_5++;
											}
											else
											{
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 4:
										if (unk_0xF9D4EF1338E38AFB(Local_113[iVar0 /*33*/], 716706914) == 7)
										{
											if (Local_113[iVar0 /*33*/].f_4 == 5)
											{
												func_99(iVar0, Local_113[iVar0 /*33*/].f_4, 2, 0);
											}
											else
											{
												func_99(iVar0, Local_113[iVar0 /*33*/].f_4, 0, 0);
											}
										}
										break;
								}
								break;
							
							case 13:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x0EEB301CAA50A123(Local_113[iVar0 /*33*/], "WORLD_HUMAN_GUARD_STAND", 0, 0);
										unk_0x3A3E4B7C6FBE305D(Local_113[iVar0 /*33*/], 0, 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 14:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x0EEB301CAA50A123(Local_113[iVar0 /*33*/], "WORLD_HUMAN_AA_SMOKE", 0, 0);
										unk_0x3A3E4B7C6FBE305D(Local_113[iVar0 /*33*/], 0, 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0xF9D4EF1338E38AFB(Local_113[iVar0 /*33*/], 993674639) == 7)
										{
											Local_113[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 15:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x0EEB301CAA50A123(Local_113[iVar0 /*33*/], "WORLD_HUMAN_BINOCULARS", 0, 0);
										unk_0x3A3E4B7C6FBE305D(Local_113[iVar0 /*33*/], 0, 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 16:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x0EEB301CAA50A123(Local_113[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, 0);
										unk_0x3A3E4B7C6FBE305D(Local_113[iVar0 /*33*/], 0, 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 17:
								if (Local_113[iVar0 /*33*/].f_5 < 10)
								{
									if (unk_0xCCF89CDD3583210D(unk_0xD4E735F4B6A956AC(), Local_113[iVar0 /*33*/]))
									{
										Local_113[iVar0 /*33*/].f_5 = 10;
									}
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x6D68030C791111E0("misscarsteal2peeing");
										Local_113[iVar0 /*33*/].f_5++;
										Local_113[iVar0 /*33*/].f_14 = 0;
										break;
									
									case 1:
										if (unk_0x39C2D9AB77873F84("misscarsteal2peeing"))
										{
											unk_0x0EEB301CAA50A123(Local_113[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, 1);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 2:
										if (func_4(unk_0xA19140A5C42D8715(), Local_113[iVar0 /*33*/], 1) < 21.6f)
										{
											unk_0x3F01127ECD227890(Local_113[iVar0 /*33*/], "misscarsteal2peeing", "peeing_loop", 8f, -8f, 25000, 1, 0, 0, 0, 0);
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_14 = unk_0xFD34717937104F1C() + 23000;
										}
										break;
									
									case 3:
										if (unk_0xFD34717937104F1C() > Local_113[iVar0 /*33*/].f_14)
										{
											Local_113[iVar0 /*33*/].f_14 = -1;
											unk_0x0EEB301CAA50A123(Local_113[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, 1);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 18:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										func_93();
										unk_0x956B3CF461C0C1C9(0, 2434.891f, 4973.864f, 50.5679f, 1f, 20000, 1048576000, 0, 1193033728);
										unk_0x0EEB301CAA50A123(0, "WORLD_HUMAN_BINOCULARS", 0, 0);
										func_92(&(Local_113[iVar0 /*33*/]), 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 25:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										switch (Local_113[iVar0 /*33*/].f_2)
										{
											case 12:
												if (unk_0xCFA037D3F2BAF3E3(2433.04f, 4967.87f, 46.28f, 0.8f, 0))
												{
													unk_0x0452872834372353(Local_113[iVar0 /*33*/], 2433.04f, 4967.87f, 46.28f, 0.8f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 13:
												if (unk_0xCFA037D3F2BAF3E3(2432.56f, 4968.38f, 46.27f, 0.8f, 0))
												{
													unk_0x0452872834372353(Local_113[iVar0 /*33*/], 2432.56f, 4968.38f, 46.27f, 0.8f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 14:
												if (unk_0xCFA037D3F2BAF3E3(2433.12f, 4965.59f, 46.27f, 0.8f, 0))
												{
													unk_0x0452872834372353(Local_113[iVar0 /*33*/], 2433.12f, 4965.59f, 46.27f, 0.8f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 15:
												if (unk_0xCFA037D3F2BAF3E3(2439.61f, 4960.99f, 46.27f, 0.4f, 0))
												{
													unk_0x0452872834372353(Local_113[iVar0 /*33*/], 2439.697f, 4960.996f, 46.28f, 0.4f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 16:
												if (unk_0xCFA037D3F2BAF3E3(2440.16f, 4962.99f, 46.27f, 0.4f, 0))
												{
													unk_0x0452872834372353(Local_113[iVar0 /*33*/], 2440.16f, 4962.99f, 46.27f, 0.4f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 17:
												if (unk_0xCFA037D3F2BAF3E3(2438.23f, 4962.25f, 46.27f, 0.4f, 0))
												{
													unk_0x0452872834372353(Local_113[iVar0 /*33*/], 2438.23f, 4962.25f, 46.27f, 0.4f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
										}
										break;
									
									case 1:
										if (unk_0xF9D4EF1338E38AFB(Local_113[iVar0 /*33*/], 1647992574) == 7)
										{
											Local_113[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 28:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										if (unk_0x7591AFB11E7EDDA0(unk_0xD4E735F4B6A956AC(), Local_113[iVar0 /*33*/]) || (func_90(unk_0xE2BBD32891C18569(Local_113[iVar0 /*33*/], true), 1f, 1120403456) && unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2448.583f, 4969.292f, 45.1856f, 2439.538f, 4978.061f, 46.82762f, 5.75f, 0, true, 0)))
										{
											unk_0xABC4374E9189E483(Local_113[iVar0 /*33*/], 20000, 0, -1, 0);
											Local_113[iVar0 /*33*/].f_5 = 2;
										}
										break;
									
									case 2:
										if (func_35("WRK1", 1, Local_113[iVar0 /*33*/], "CHIN2Goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (unk_0x7591AFB11E7EDDA0(unk_0xD4E735F4B6A956AC(), Local_113[iVar0 /*33*/]) || (func_90(unk_0xE2BBD32891C18569(Local_113[iVar0 /*33*/], true), 1f, 1120403456) && unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2448.583f, 4969.292f, 45.1856f, 2439.538f, 4978.061f, 46.82762f, 5.75f, 0, true, 0)))
										{
											if (func_35("TRV1", 1, unk_0xA19140A5C42D8715(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_14 = unk_0xFD34717937104F1C() + 2000;
											}
										}
										else
										{
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_14 = unk_0xFD34717937104F1C() + 2000;
										}
										break;
									
									case 4:
										if (unk_0xFD34717937104F1C() > Local_113[iVar0 /*33*/].f_14)
										{
											unk_0x33B5487515BD13D5(Local_113[iVar0 /*33*/], unk_0xA19140A5C42D8715(), 200f, 200000, 0, 0);
											unk_0xD738221C247C8B71(Local_113[iVar0 /*33*/], true);
											unk_0x7E4E83D33161D01A(&(Local_113[iVar0 /*33*/]));
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 30:
								if (!unk_0x4915F4759304D5CF(Local_113[iVar0 /*33*/]))
								{
									if (Local_113[iVar0 /*33*/].f_5 < 8)
									{
										if (unk_0xDAA9E4FC4EBF1081(Local_113[iVar0 /*33*/], 0, 2))
										{
											if (!unk_0x22B3625D717A4563(Local_113[iVar0 /*33*/], 0, 2))
											{
												unk_0xF0188A1B49D79AF7(Local_113[iVar0 /*33*/], joaat("weapon_pistol"), -1, false, true);
												unk_0xDA4D3941AFF8EF12(Local_113[iVar0 /*33*/], unk_0xA19140A5C42D8715(), 0, 16);
												func_88();
												unk_0x1F4E5EFBFE503FB3(Local_113[iVar0 /*33*/], 0);
												unk_0xDA4D3941AFF8EF12(Local_113[iVar0 /*33*/], unk_0xA19140A5C42D8715(), 0, 16);
												unk_0xDFA901280292A2FB(Local_113[iVar0 /*33*/], iLocal_116);
												Local_113[iVar0 /*33*/].f_5 = 999;
											}
										}
									}
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x6D68030C791111E0("misschinese2_crystalmaze");
										unk_0x9231E8057B40EF0E(joaat("weapon_sawnoffshotgun"), 31, 0);
										unk_0x1F4E5EFBFE503FB3(Local_113[iVar0 /*33*/], 1);
										unk_0xDFA901280292A2FB(Local_113[iVar0 /*33*/], iLocal_116);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0x39C2D9AB77873F84("misschinese2_crystalmaze") && unk_0x86FB195D8E9C4FAB(joaat("weapon_sawnoffshotgun")))
										{
											if (!unk_0x4915F4759304D5CF(Local_113[iVar0 /*33*/]))
											{
												iLocal_370 = unk_0x70788DC3D80C9DEB(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
												unk_0xDA16255FBFC16B28(iLocal_370, 1);
												unk_0xE5565DEAABF9D588(Local_113[iVar0 /*33*/], iLocal_370, "misschinese2_crystalmaze", "_cower_loop", 1000f, -8f, 0, 0, 1148846080, 0);
												if (!unk_0xDC5D81351D6A4DDB(iLocal_373))
												{
													iLocal_373 = unk_0x9B3030FF43CE94B3(joaat("weapon_sawnoffshotgun"), 40, 2433.59f, 4969.7f, 42.1854f, 1, 1065353216, 0, 0, 1);
													unk_0x76D3D51F5F66367F(iLocal_373, 90f, 0f, 0f, 2, 1);
												}
												unk_0x22DD1D053CFF9707(Local_113[iVar0 /*33*/], unk_0xA19140A5C42D8715(), -1, 0, 2);
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 2:
										if ((iLocal_149 == 4 || iLocal_149 == 5) || iLocal_149 == 6)
										{
											if (func_87(11))
											{
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										if (iLocal_149 > 6)
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										iLocal_369 = unk_0x70788DC3D80C9DEB(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
										unk_0xE5565DEAABF9D588(Local_113[iVar0 /*33*/], iLocal_369, "misschinese2_crystalmaze", "_cower_to_stand", 4f, -8f, 0, 0, 1148846080, 0);
										unk_0x22DD1D053CFF9707(Local_113[iVar0 /*33*/], unk_0xA19140A5C42D8715(), -1, 0, 2);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 4:
										if (func_35("CHI2_DALE", 4, Local_113[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										if ((unk_0xFE5DE0C3200E00F2(iLocal_369) && unk_0x33CECDD9E141E18E(iLocal_369) > 0.98f) || !unk_0xFE5DE0C3200E00F2(iLocal_369))
										{
											Local_113[iVar0 /*33*/].f_5 = 5;
										}
										break;
									
									case 5:
										if ((unk_0xFE5DE0C3200E00F2(iLocal_369) && unk_0x33CECDD9E141E18E(iLocal_369) > 0.98f) || !unk_0xFE5DE0C3200E00F2(iLocal_369))
										{
											iLocal_368 = unk_0x70788DC3D80C9DEB(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
											unk_0xDA16255FBFC16B28(iLocal_368, 1);
											unk_0xE5565DEAABF9D588(Local_113[iVar0 /*33*/], iLocal_368, "misschinese2_crystalmaze", "_stand_loop", 4f, -8f, 0, 0, 1148846080, 0);
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_14 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(1000, 2000));
										}
										break;
									
									case 6:
										if (!unk_0xFE5DE0C3200E00F2(iLocal_371) || iLocal_371 == 0)
										{
											if (unk_0xFD34717937104F1C() > Local_113[iVar0 /*33*/].f_14)
											{
												iLocal_371 = unk_0x70788DC3D80C9DEB(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
												if (unk_0x22C775856F4633CA(0, 2) == 1)
												{
													unk_0xE5565DEAABF9D588(Local_113[iVar0 /*33*/], iLocal_371, "misschinese2_crystalmaze", "_stand_loop_a", 4f, -8f, 0, 0, 1148846080, 0);
												}
												else
												{
													unk_0xE5565DEAABF9D588(Local_113[iVar0 /*33*/], iLocal_371, "misschinese2_crystalmaze", "_stand_loop_b", 4f, -8f, 0, 0, 1148846080, 0);
												}
											}
										}
										if (!unk_0xFE5DE0C3200E00F2(iLocal_368) || iLocal_368 == 0)
										{
											if ((unk_0xFE5DE0C3200E00F2(iLocal_371) && unk_0x33CECDD9E141E18E(iLocal_371) > 0.98f) || !unk_0xFE5DE0C3200E00F2(iLocal_371))
											{
												iLocal_368 = unk_0x70788DC3D80C9DEB(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
												unk_0xDA16255FBFC16B28(iLocal_368, 1);
												unk_0xE5565DEAABF9D588(Local_113[iVar0 /*33*/], iLocal_368, "misschinese2_crystalmaze", "_stand_loop", 4f, -8f, 0, 0, 1148846080, 0);
												Local_113[iVar0 /*33*/].f_14 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(1000, 2000));
											}
										}
										if (!func_59() || (func_67(unk_0xA19140A5C42D8715(), 2430.09f, 4965.93f, 41.55f, 1) > 3.438f && !unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2427.079f, 4964.971f, 41.81169f, 2432.589f, 4959.331f, 48.7548f, 3.3125f, 0, true, 0)))
										{
											func_85();
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 7:
										if (func_35("CHI2_DALEG", 4, Local_113[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 8:
										iLocal_372 = unk_0x70788DC3D80C9DEB(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
										unk_0xE5565DEAABF9D588(Local_113[iVar0 /*33*/], iLocal_372, "misschinese2_crystalmaze", "_stand_to_aim", 4f, -8f, 0, 0, 1148846080, 0);
										unk_0xE2C0081C99CB2618(iLocal_373, Local_113[iVar0 /*33*/]);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 9:
										if ((unk_0xFE5DE0C3200E00F2(iLocal_372) && unk_0x33CECDD9E141E18E(iLocal_372) > 0.98f) || !unk_0xFE5DE0C3200E00F2(iLocal_372))
										{
											unk_0xB4F2B588B54261BF(Local_113[iVar0 /*33*/], 1);
											unk_0x9568B1B58F78FF36(Local_113[iVar0 /*33*/]);
											unk_0x9C24BCD3EFB3BF4C(Local_113[iVar0 /*33*/], unk_0xA19140A5C42D8715(), -1, 1);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 10:
										if (!func_59())
										{
											if (func_35("CHI2_DALEA", 4, Local_113[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												unk_0x1F4E5EFBFE503FB3(Local_113[iVar0 /*33*/], 0);
												unk_0xDA4D3941AFF8EF12(Local_113[iVar0 /*33*/], unk_0xA19140A5C42D8715(), 0, 16);
												Local_113[iVar0 /*33*/].f_14 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(3000, 4000));
												Local_113[iVar0 /*33*/].f_15 = 0;
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 11:
										if (unk_0xFD34717937104F1C() > Local_113[iVar0 /*33*/].f_14)
										{
											if (Local_113[iVar0 /*33*/].f_15 < 4)
											{
												if (func_35("CHI2_DALEA", 4, Local_113[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_113[iVar0 /*33*/].f_5++;
													Local_113[iVar0 /*33*/].f_14 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(3000, 4000));
													Local_113[iVar0 /*33*/].f_15++;
												}
											}
										}
										break;
									
									case 999:
										if (func_35("CHI2_DALEA", 4, Local_113[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 31:
								if (!unk_0x4915F4759304D5CF(Local_113[iVar0 /*33*/]))
								{
									if (unk_0x9809FE4B550B1EFE(unk_0xE2BBD32891C18569(Local_113[iVar0 /*33*/], true), 2f, 1))
									{
										Local_113[iVar0 /*33*/].f_5 = 5;
									}
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										if (func_84("FRMFLC", 0, 0))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 1:
										if (func_35("WRK2", 1, Local_113[iVar0 /*33*/], "oneilcook", 2, unk_0xA19140A5C42D8715(), "trevor", -1, 0, 0, -1, 0, 0, 8))
										{
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_14 = unk_0xFD34717937104F1C() + 1300;
										}
										break;
									
									case 2:
										if (unk_0xFD34717937104F1C() > Local_113[iVar0 /*33*/].f_14)
										{
											unk_0xABC4374E9189E483(Local_113[iVar0 /*33*/], 20000, 0, -1, 0);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (!func_59())
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 4:
										if (!func_59())
										{
											func_99(iVar0, 27, 0, 0);
										}
										break;
									
									case 5:
										unk_0x33B5487515BD13D5(Local_113[iVar0 /*33*/], unk_0xA19140A5C42D8715(), 50f, 1000, 0, 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 6:
										if (func_82("WRK2"))
										{
											if (unk_0x55CF08D5383E90A2() == 1 || unk_0x55CF08D5383E90A2() == 5)
											{
												func_81(0);
											}
											else
											{
												func_81(1);
											}
										}
										func_99(iVar0, 27, 0, 0);
										break;
								}
								break;
							
							case 27:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										func_93();
										unk_0x00135C6A6DDEC2EA(0, 1);
										unk_0x33B5487515BD13D5(0, unk_0xA19140A5C42D8715(), 200f, 999999, 0, 0);
										unk_0xCE889E9ADEDDE843(0, -1);
										func_92(&(Local_113[iVar0 /*33*/]), 0);
										unk_0xD738221C247C8B71(Local_113[iVar0 /*33*/], true);
										unk_0x7E4E83D33161D01A(&(Local_113[iVar0 /*33*/]));
										if (unk_0xCE3CB618AFE55EFB(Local_113[iVar0 /*33*/].f_19))
										{
											unk_0xE1623437A3194332(&(Local_113[iVar0 /*33*/].f_19));
										}
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 4:
								if (iLocal_376 == 1)
								{
									if (unk_0xFE5DE0C3200E00F2(Local_113[iVar0 /*33*/].f_14))
									{
										unk_0x71ABFE3795D5D0C2(Local_113[iVar0 /*33*/].f_14, 0.69f);
									}
									if (iVar0 == 9)
									{
										iLocal_376 = 0;
									}
								}
								if (iLocal_377 == 1)
								{
									if (unk_0xFE5DE0C3200E00F2(Local_113[iVar0 /*33*/].f_14))
									{
										unk_0x71ABFE3795D5D0C2(Local_113[iVar0 /*33*/].f_14, 0f);
									}
									if (iVar0 == 9)
									{
										iLocal_377 = 0;
									}
									Local_113[iVar0 /*33*/].f_5 = 0;
								}
								if (Local_113[iVar0 /*33*/].f_2 == 8)
								{
									if (unk_0xFE5DE0C3200E00F2(Local_113[iVar0 /*33*/].f_14))
									{
										if (Local_113[iVar0 /*33*/].f_5 == 0)
										{
											if (!func_30(23) || iLocal_149 == 3)
											{
												if (unk_0xF9D4EF1338E38AFB(Local_113[iVar0 /*33*/], 1785177548) == 1)
												{
													if (unk_0x33CECDD9E141E18E(Local_113[iVar0 /*33*/].f_14) > 0.024f && unk_0x33CECDD9E141E18E(Local_113[iVar0 /*33*/].f_14) < 0.033f)
													{
														iVar5 = 0;
														if (!unk_0x4915F4759304D5CF(Local_113[iVar0 /*33*/]))
														{
															iVar6 = joaat("weapon_unarmed");
															if (unk_0xF990CFC0F1D94A39(Local_113[iVar0 /*33*/], &iVar6, 1))
															{
																unk_0xD461381B293D9B46(Local_113[iVar0 /*33*/], 100);
																if (iVar6 == joaat("weapon_pistol"))
																{
																	if (func_80(&iVar5))
																	{
																		unk_0x2B82D6FCC6504E49(Local_113[iVar0 /*33*/], joaat("weapon_pistol"), 12);
																		unk_0x83822BA17AE692DE(Local_113[iVar0 /*33*/], unk_0xE2BBD32891C18569(iLocal_170[iVar5], true), 0);
																		func_97(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1);
																		Local_113[iVar0 /*33*/].f_5 = 1;
																	}
																	else
																	{
																		unk_0x2B82D6FCC6504E49(Local_113[iVar0 /*33*/], joaat("weapon_pistol"), 12);
																		unk_0x83822BA17AE692DE(Local_113[iVar0 /*33*/], 2493.1f, 4971f, 44.9f, 0);
																		func_97(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1);
																		Local_113[iVar0 /*33*/].f_5 = 1;
																	}
																}
															}
														}
													}
												}
											}
										}
										else if (Local_113[iVar0 /*33*/].f_5 == 1)
										{
											if (unk_0x33CECDD9E141E18E(Local_113[iVar0 /*33*/].f_14) > 0.04f)
											{
												Local_113[iVar0 /*33*/].f_5 = 2;
												if (iLocal_374 == 0)
												{
													unk_0x85AF6DC3641E2442(Local_113[iVar0 /*33*/], "generic_cheer", "A_M_M_Hillbilly_01_White_mini_02", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
											}
										}
										else if (Local_113[iVar0 /*33*/].f_5 == 2)
										{
											if (unk_0x33CECDD9E141E18E(Local_113[iVar0 /*33*/].f_14) > 0.6f)
											{
												Local_113[iVar0 /*33*/].f_5 = 0;
											}
										}
									}
								}
								if (Local_113[iVar0 /*33*/].f_5 == 3)
								{
									if (unk_0xF9D4EF1338E38AFB(Local_113[iVar0 /*33*/], 2106541073) == 7)
									{
										func_99(iVar0, 7, 0, 0);
									}
								}
								break;
							}
					}
					break;
				
				case 5:
				case 6:
					if (Local_119[iVar0 /*24*/].f_20)
					{
						switch (Local_113[iVar0 /*33*/].f_2)
						{
							case 20:
							case 21:
							case 16:
							case 12:
							case 13:
							case 14:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0x0D0784EB08BB4C22(Local_113[iVar0 /*33*/], 2431.704f, 4961.62f, 45.33136f, 2455.376f, 4985.934f, 48.68555f, 13.5625f, 0, 0);
										unk_0xDA4D3941AFF8EF12(Local_113[iVar0 /*33*/], unk_0xA19140A5C42D8715(), 0, 16);
										unk_0xB4F2B588B54261BF(Local_113[iVar0 /*33*/], 1);
										unk_0x3B7A32E04BBE59A5(Local_113[iVar0 /*33*/], 50, true);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 17:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0x0D0784EB08BB4C22(Local_113[iVar0 /*33*/], 2431.704f, 4961.62f, 45.33136f, 2455.376f, 4985.934f, 48.68555f, 13.5625f, 0, 0);
										unk_0xDA4D3941AFF8EF12(Local_113[iVar0 /*33*/], unk_0xA19140A5C42D8715(), 0, 16);
										unk_0xB4F2B588B54261BF(Local_113[iVar0 /*33*/], 1);
										unk_0x3B7A32E04BBE59A5(Local_113[iVar0 /*33*/], 50, true);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 15:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0x0D0784EB08BB4C22(Local_113[iVar0 /*33*/], 2437.982f, 4959.021f, 45.31057f, 2432.93f, 4961.941f, 48.69256f, 3.1875f, 0, 0);
										unk_0xDA4D3941AFF8EF12(Local_113[iVar0 /*33*/], unk_0xA19140A5C42D8715(), 0, 16);
										unk_0xB4F2B588B54261BF(Local_113[iVar0 /*33*/], 1);
										Local_119[iVar0 /*24*/].f_4++;
										break;
									
									case 2:
										if (func_87(18))
										{
											unk_0x3881D26694540CA7(Local_113[iVar0 /*33*/], 0);
											Local_119[iVar0 /*24*/].f_4++;
										}
										break;
								}
								break;
							
							case 10:
							case 18:
							case 19:
							case 11:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0xDA4D3941AFF8EF12(Local_113[iVar0 /*33*/], unk_0xA19140A5C42D8715(), 0, 16);
										unk_0xB4F2B588B54261BF(Local_113[iVar0 /*33*/], 1);
										unk_0x3B7A32E04BBE59A5(Local_113[iVar0 /*33*/], 50, true);
										if (iLocal_114 == 0)
										{
											unk_0x3881D26694540CA7(Local_113[iVar0 /*33*/], 0);
											unk_0xF4A4E46DFA28BFDE(Local_113[iVar0 /*33*/], 2451.677f, 4954.251f, 44.988f, 3f, 0, 0);
											iLocal_114++;
											Local_119[iVar0 /*24*/].f_4++;
										}
										else
										{
											Local_119[iVar0 /*24*/].f_4 = (unk_0xFD34717937104F1C() + iLocal_114 * 4000);
											iLocal_114++;
										}
										Local_113[iVar0 /*33*/].f_1 = 1;
										break;
									
									case 2:
										if (func_67(Local_113[iVar0 /*33*/], 2451.677f, 4954.251f, 44.988f, 1) < 3f)
										{
											unk_0x3881D26694540CA7(Local_113[iVar0 /*33*/], 0);
											Local_119[iVar0 /*24*/].f_4++;
										}
										break;
									
									case 3:
										break;
									
									default:
										if (unk_0xFD34717937104F1C() > Local_119[iVar0 /*24*/].f_4)
										{
											unk_0x3881D26694540CA7(Local_113[iVar0 /*33*/], 0);
											unk_0xF4A4E46DFA28BFDE(Local_113[iVar0 /*33*/], 2451.677f, 4954.251f, 44.988f, 3f, 0, 0);
											Local_119[iVar0 /*24*/].f_4 = 2;
										}
										break;
								}
								break;
							
							case 1:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0x0D0784EB08BB4C22(Local_113[iVar0 /*33*/], 2453.084f, 4969.897f, 50.44285f, 2460.996f, 4977.822f, 53.38035f, 2.9375f, 0, 0);
										unk_0xDA4D3941AFF8EF12(Local_113[iVar0 /*33*/], unk_0xA19140A5C42D8715(), 0, 16);
										unk_0xB4F2B588B54261BF(Local_113[iVar0 /*33*/], 1);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 0:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0x0D0784EB08BB4C22(Local_113[iVar0 /*33*/], 2442.963f, 4964.217f, 50.44285f, 2449.251f, 4970.534f, 53.38035f, 2f, 0, 0);
										unk_0xDA4D3941AFF8EF12(Local_113[iVar0 /*33*/], unk_0xA19140A5C42D8715(), 0, 16);
										unk_0xB4F2B588B54261BF(Local_113[iVar0 /*33*/], 1);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 2:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0x0D0784EB08BB4C22(Local_113[iVar0 /*33*/], 2461.362f, 4976.084f, 50.44285f, 2448.743f, 4988.774f, 53.60143f, 2f, 0, 0);
										unk_0xDA4D3941AFF8EF12(Local_113[iVar0 /*33*/], unk_0xA19140A5C42D8715(), 0, 16);
										unk_0xB4F2B588B54261BF(Local_113[iVar0 /*33*/], 1);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							}
					}
					break;
				}
		}
		iVar0++;
	}
}

int func_80(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	*iParam0 = 0;
	iVar0 = 0;
	*iParam0 = unk_0x22C775856F4633CA(0, 10);
	bVar1 = false;
	while (!bVar1)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_170[*iParam0]) && unk_0x54F6F5A823224519(iLocal_170[*iParam0], 2495.017f, 4970.17f, 44.21808f, 2493.501f, 4971.556f, 45.40248f, 1.375f, 0, true, 0))
		{
			return 1;
		}
		else
		{
			*iParam0++;
			iVar0++;
			if (*iParam0 == iLocal_170)
			{
				*iParam0 = 0;
			}
		}
		if (iVar0 == 10)
		{
			return 0;
		}
	}
	return 0;
}

void func_81(bool bParam0)
{
	iLocal_392 = 0;
	if (bParam0)
	{
		func_85();
	}
	else
	{
		func_88();
	}
}

int func_82(char* sParam0)
{
	struct<6> Var0;
	
	Var0 = { func_83() };
	if (unk_0x3CAC2741CC1A631F(&Var0, sParam0))
	{
		return 1;
	}
	return 0;
}

struct<6> func_83()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15822 == 4)
	{
		return Global_15441;
	}
	return Var0;
}

bool func_84(char* sParam0, int iParam1, int iParam2)
{
	unk_0x783C05630CCAF363(sParam0);
	if (iParam1 == 1)
	{
		unk_0x4FDA9E6EF359F8A9(iParam2);
	}
	return unk_0x0818E99A91733016();
}

void func_85()
{
	Global_14688 = 0;
	func_86();
}

void func_86()
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

int func_87(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_388[0 /*8*/]);
	if (iVar0 >= 0 && iVar0 < Local_388)
	{
		if (Local_388[iVar0 /*8*/] == iParam0)
		{
			if (Local_388[iVar0 /*8*/].f_2)
			{
				return 1;
			}
		}
		else if (Local_388[iVar0 /*8*/] != 0)
		{
		}
	}
	return 0;
}

void func_88()
{
	Global_14688 = 0;
	func_89();
}

void func_89()
{
	unk_0xB4E5B1A6FE923ECB();
	Global_16833 = 0;
	if (unk_0x904275961B875DEB())
	{
		unk_0xA8B97F91CBDE376C(false);
		Global_15822 = 6;
	}
}

int func_90(vector3 vParam0, float fParam1, float fParam2)
{
	if (unk_0x317672E799676CA5(vParam0, fParam1))
	{
		if (!unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vParam0, fParam2, fParam2, fParam2, 0, false, 0))
		{
			return 0;
		}
		else if (unk_0x71364F510A1CB69F())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_91(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_388)
	{
		if (iParam0 == Local_388[iVar0 /*8*/])
		{
			if (iParam1 == 1)
			{
				Local_388[iVar0 /*8*/].f_2 = 1;
			}
			else
			{
				Local_388[iVar0 /*8*/].f_2 = 0;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_92(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x4C9989F866EF6731(uLocal_81, 1);
	}
	unk_0x301F42EEE3C40328(uLocal_81);
	if (!unk_0xD61D0CA14AE902DF(*iParam0, 1))
	{
		unk_0xE1072FA2FECBAD96(*iParam0, uLocal_81);
	}
	unk_0x3A95A0A3221D4208(&uLocal_81);
}

void func_93()
{
	unk_0x2F89329397A277BC(&uLocal_81);
}

void func_94(int iParam0)
{
	Local_113[iParam0 /*33*/].f_15 = (Local_113[iParam0 /*33*/].f_15 + floor((timestep() * 1000f)));
	switch (Local_113[iParam0 /*33*/].f_2)
	{
		case 7:
			if (Local_113[iParam0 /*33*/].f_15 > 2000 && !unk_0x05EFB6A616B6FADE(Local_113[iParam0 /*33*/].f_14, 0))
			{
				unk_0x8CBE3882704F529D(Local_113[iParam0 /*33*/], 2505.634f, 4996.994f, 46.6624f, 4000, 0, 2);
				unk_0x2BCFB39E86340DAA(&(Local_113[iParam0 /*33*/].f_14), 0);
			}
			else if (Local_113[iParam0 /*33*/].f_15 > 8000 && !unk_0x05EFB6A616B6FADE(Local_113[iParam0 /*33*/].f_14, 1))
			{
				unk_0x8CBE3882704F529D(Local_113[iParam0 /*33*/], 2472.297f, 4962.687f, 47.2297f, 6000, 0, 2);
				unk_0x2BCFB39E86340DAA(&(Local_113[iParam0 /*33*/].f_14), 1);
			}
			break;
		
		case 5:
			if (Local_113[iParam0 /*33*/].f_15 > 3000 && !unk_0x05EFB6A616B6FADE(Local_113[iParam0 /*33*/].f_14, 0))
			{
				if (!unk_0x4915F4759304D5CF(Local_113[6 /*33*/]))
				{
					unk_0x22DD1D053CFF9707(Local_113[iParam0 /*33*/], Local_113[6 /*33*/], 4000, 0, 2);
					unk_0x2BCFB39E86340DAA(&(Local_113[iParam0 /*33*/].f_14), 0);
				}
			}
			else if (Local_113[iParam0 /*33*/].f_15 > 11000 && !unk_0x05EFB6A616B6FADE(Local_113[iParam0 /*33*/].f_14, 1))
			{
				unk_0x8CBE3882704F529D(Local_113[iParam0 /*33*/], 2494.634f, 5001.994f, 46.6624f, 7000, 0, 2);
				unk_0x2BCFB39E86340DAA(&(Local_113[iParam0 /*33*/].f_14), 1);
			}
			else if (Local_113[iParam0 /*33*/].f_15 > 20000 && !unk_0x05EFB6A616B6FADE(Local_113[iParam0 /*33*/].f_14, 2))
			{
				unk_0x8CBE3882704F529D(Local_113[iParam0 /*33*/], 2477.634f, 4966.994f, 46.6624f, 7000, 0, 2);
				unk_0x2BCFB39E86340DAA(&(Local_113[iParam0 /*33*/].f_14), 2);
			}
			break;
		
		case 4:
			if (Local_113[iParam0 /*33*/].f_15 > 3000 && !unk_0x05EFB6A616B6FADE(Local_113[iParam0 /*33*/].f_14, 0))
			{
				unk_0x8CBE3882704F529D(Local_113[iParam0 /*33*/], 2505.634f, 4996.994f, 46.6624f, 5000, 0, 2);
				unk_0x2BCFB39E86340DAA(&(Local_113[iParam0 /*33*/].f_14), 0);
			}
			else if (Local_113[iParam0 /*33*/].f_15 > 10000 && !unk_0x05EFB6A616B6FADE(Local_113[iParam0 /*33*/].f_14, 1))
			{
				unk_0x8CBE3882704F529D(Local_113[iParam0 /*33*/], 2461.449f, 4977.48f, 51.7483f, 6000, 0, 2);
				unk_0x2BCFB39E86340DAA(&(Local_113[iParam0 /*33*/].f_14), 1);
			}
			else if (Local_113[iParam0 /*33*/].f_15 > 18000 && !unk_0x05EFB6A616B6FADE(Local_113[iParam0 /*33*/].f_14, 2))
			{
				unk_0x8CBE3882704F529D(Local_113[iParam0 /*33*/], 2505.634f, 4996.994f, 46.6624f, 6000, 0, 2);
				unk_0x2BCFB39E86340DAA(&(Local_113[iParam0 /*33*/].f_14), 2);
			}
			break;
	}
}

float func_95(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_96(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3, int iParam4)
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

int func_97(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
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

void func_98(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		unk_0xF26F4E13A8AEC5EB(iParam0, fParam1);
		unk_0x75D8561E738F40B4(iParam0, fParam2);
		unk_0x753D02CBEE1BB1AC(iParam0, (fParam3 / 2f));
		unk_0xB7DFE0AB2CC355C4(iParam0, fParam4);
		unk_0xF148D9E6972D9816(iParam0, fParam5);
	}
}

void func_99(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!unk_0x4915F4759304D5CF(Local_113[iParam0 /*33*/]))
	{
		if (iParam0 >= 0)
		{
			Local_113[iParam0 /*33*/].f_4 = Local_113[iParam0 /*33*/].f_3;
			Local_113[iParam0 /*33*/].f_3 = iParam1;
			Local_113[iParam0 /*33*/].f_5 = iParam2;
			Local_113[iParam0 /*33*/].f_6 = { 0f, 0f, 0f };
			Local_113[iParam0 /*33*/].f_9 = { 0f, 0f, 0f };
			Local_113[iParam0 /*33*/].f_12 = 0f;
			Local_113[iParam0 /*33*/].f_13 = 0f;
			Local_113[iParam0 /*33*/].f_14 = iParam3;
			Local_113[iParam0 /*33*/].f_15 = 0;
			Local_119[iParam0 /*24*/].f_3 = 3;
		}
	}
}

void func_100(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	(*iParam0)[iParam1 /*24*/] = uParam2;
	(iParam0[iParam1 /*24*/])->f_8 = iParam3;
	(iParam0[iParam1 /*24*/])->f_20 = iParam4;
	(iParam0[iParam1 /*24*/])->f_21 = iParam5;
	if (iParam1 > iLocal_52)
	{
		iLocal_52 = iParam1 + 1;
	}
}

int func_101(int iParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	iParam1 = iParam1;
	iParam6 = iParam6;
	if (Local_113[iParam0 /*33*/].f_1 != 1 && Local_113[iParam0 /*33*/].f_1 != 0)
	{
		iVar0 = unk_0x988A25F5907E93F0(vParam2);
		if (iVar0 == 0)
		{
			return 0;
		}
		else if (!unk_0x2A8A410BC14B59BC(iVar0))
		{
			return 0;
		}
	}
	switch (iLocal_111)
	{
		case 0:
			Local_113[iParam0 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_m_hillbilly_01"), vParam2, fParam3, 1, true);
			unk_0xA0DEC6E1399EE624(Local_113[iParam0 /*33*/]);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 2, 0, 1, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 3, 1, 1, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 4, 1, 1, 0);
			break;
		
		case 1:
			Local_113[iParam0 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 1, true);
			unk_0xA0DEC6E1399EE624(Local_113[iParam0 /*33*/]);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 2, 1, 0, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 2:
			Local_113[iParam0 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_y_methhead_01"), vParam2, fParam3, 1, true);
			unk_0xA0DEC6E1399EE624(Local_113[iParam0 /*33*/]);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 3, 1, 0, 0);
			break;
		
		case 3:
			Local_113[iParam0 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_m_hillbilly_01"), vParam2, fParam3, 1, true);
			unk_0xA0DEC6E1399EE624(Local_113[iParam0 /*33*/]);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 2, 1, 2, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 3, 1, 0, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 4, 1, 0, 0);
			break;
		
		case 4:
			Local_113[iParam0 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 1, true);
			unk_0xA0DEC6E1399EE624(Local_113[iParam0 /*33*/]);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 3, 1, 0, 0);
			break;
		
		case 5:
			Local_113[iParam0 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_y_methhead_01"), vParam2, fParam3, 1, true);
			unk_0xA0DEC6E1399EE624(Local_113[iParam0 /*33*/]);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 4, 1, 2, 0);
			break;
		
		case 6:
			Local_113[iParam0 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_m_hillbilly_01"), vParam2, fParam3, 1, true);
			unk_0xA0DEC6E1399EE624(Local_113[iParam0 /*33*/]);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 2, 1, 0, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 3, 0, 1, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 7:
			Local_113[iParam0 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 1, true);
			unk_0xA0DEC6E1399EE624(Local_113[iParam0 /*33*/]);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 2, 2, 0, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 3, 2, 0, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 8:
			Local_113[iParam0 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_y_methhead_01"), vParam2, fParam3, 1, true);
			unk_0xA0DEC6E1399EE624(Local_113[iParam0 /*33*/]);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 3, 1, 0, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 4, 1, 0, 0);
			break;
		
		case 9:
			Local_113[iParam0 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 1, true);
			unk_0xA0DEC6E1399EE624(Local_113[iParam0 /*33*/]);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 3, 1, 2, 0);
			break;
		
		case 10:
			Local_113[iParam0 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_y_methhead_01"), vParam2, fParam3, 1, true);
			unk_0xA0DEC6E1399EE624(Local_113[iParam0 /*33*/]);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 3, 0, 1, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 11:
			Local_113[iParam0 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 1, true);
			unk_0xA0DEC6E1399EE624(Local_113[iParam0 /*33*/]);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 2, 2, 0, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 3, 2, 2, 0);
			break;
		
		case 12:
			Local_113[iParam0 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_m_hillbilly_01"), vParam2, fParam3, 1, true);
			unk_0xA0DEC6E1399EE624(Local_113[iParam0 /*33*/]);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 2, 0, 2, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 3, 1, 2, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 4, 1, 2, 0);
			break;
		
		case 13:
			Local_113[iParam0 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 1, true);
			unk_0xA0DEC6E1399EE624(Local_113[iParam0 /*33*/]);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 2, 1, 0, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 3, 1, 1, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 14:
			Local_113[iParam0 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_y_methhead_01"), vParam2, fParam3, 1, true);
			unk_0xA0DEC6E1399EE624(Local_113[iParam0 /*33*/]);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 3, 0, 2, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 15:
			Local_113[iParam0 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 1, true);
			unk_0xA0DEC6E1399EE624(Local_113[iParam0 /*33*/]);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 2, 2, 0, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 16:
			Local_113[iParam0 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_y_methhead_01"), vParam2, fParam3, 1, true);
			unk_0xA0DEC6E1399EE624(Local_113[iParam0 /*33*/]);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 3, 0, 1, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 4, 1, 1, 0);
			break;
		
		case 17:
			Local_113[iParam0 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 1, true);
			unk_0xA0DEC6E1399EE624(Local_113[iParam0 /*33*/]);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 2, 2, 0, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 3, 1, 2, 0);
			unk_0x72A0FF8C49CFFC0D(Local_113[iParam0 /*33*/], 4, 0, 1, 0);
			break;
	}
	if (iLocal_111 > 17)
	{
		Local_113[iParam0 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_y_methhead_01"), vParam2, fParam3, 1, true);
		unk_0x8695E04AA104690A(Local_113[iParam0 /*33*/], 0);
	}
	iLocal_111++;
	if (Local_113[iParam0 /*33*/].f_1 == 5)
	{
		unk_0x1F4E5EFBFE503FB3(Local_113[iParam0 /*33*/], 1);
		unk_0xDFA901280292A2FB(Local_113[iParam0 /*33*/], iLocal_117);
	}
	else
	{
		unk_0xF0188A1B49D79AF7(Local_113[iParam0 /*33*/], iParam4, 3000, bParam5, true);
		unk_0xDFA901280292A2FB(Local_113[iParam0 /*33*/], iLocal_116);
		unk_0xB6544ED6F57109F3(Local_113[iParam0 /*33*/], 1);
		unk_0x3B7A32E04BBE59A5(Local_113[iParam0 /*33*/], 9, true);
		unk_0x3677CB0D846A1308(Local_113[iParam0 /*33*/], 120f);
		unk_0xF26F4E13A8AEC5EB(Local_113[iParam0 /*33*/], 22f);
		unk_0x326A31228591B95C(Local_113[iParam0 /*33*/], 22f);
		unk_0x13E0A8160525AE55(Local_113[iParam0 /*33*/], 118, false);
		unk_0xAD1633AA7B12B33B(Local_113[iParam0 /*33*/], 14, 3f);
		if (Local_113[iParam0 /*33*/].f_1 == 2)
		{
			unk_0xD461381B293D9B46(Local_113[iParam0 /*33*/], 12);
		}
		else
		{
			unk_0xD461381B293D9B46(Local_113[iParam0 /*33*/], 45);
		}
		unk_0x80B6201B269FC581(Local_113[iParam0 /*33*/], true);
		unk_0x83055D7E96024509(Local_113[iParam0 /*33*/], true);
		unk_0x3B7A32E04BBE59A5(Local_113[iParam0 /*33*/], 15, false);
		unk_0x3B7A32E04BBE59A5(Local_113[iParam0 /*33*/], 17, false);
		func_102(Local_113[iParam0 /*33*/], 1);
	}
	unk_0xCCB568F4CA73CE62(Local_113[iParam0 /*33*/]);
	unk_0xEAF1F3E17588C851(Local_113[iParam0 /*33*/], 1);
	unk_0x60EFF4CC116B842A(Local_113[iParam0 /*33*/], 0f, 0f, 0f);
	unk_0xA62C5629693DE8EF(Local_113[iParam0 /*33*/], 1);
	unk_0x7B1A49D436561C79(Local_113[iParam0 /*33*/], 1);
	unk_0x6259CDB47862A4F3(Local_113[iParam0 /*33*/], 150, 0);
	return 1;
}

void func_102(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_56211[iVar0 /*2*/] != 0)
			{
				if (Global_56211[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_56210)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_56211[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_56211[iVar1 /*2*/] = iParam0;
	Global_56211[iVar1 /*2*/].f_1 = 7;
	Global_56210++;
}

void func_103(var uParam0, var uParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, vector3 vParam5, vector3 vParam6, vector3 vParam7, vector3 vParam8, vector3 vParam9, vector3 vParam10, vector3 vParam11)
{
	if (iLocal_52 > 0)
	{
		func_115(uParam0, vParam8, vParam9, vParam6, vParam7);
		func_107(uParam0, uParam1, vParam2, vParam3, vParam4);
		func_104(uParam0, vParam5, vParam6, vParam7, vParam8, vParam9, vParam10, vParam11);
	}
}

void func_104(var uParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, vector3 vParam5, vector3 vParam6, vector3 vParam7)
{
	if (unk_0x45AEA43E60C1F922())
	{
		if (bLocal_75)
		{
			if (((iLocal_60 > iLocal_68 || iLocal_69 != iLocal_61) || (iLocal_60 < iLocal_68 && iLocal_60 == 8)) || (iLocal_60 == 10 && bLocal_53 == 0))
			{
				iLocal_67 = 1;
				iLocal_68 = iLocal_60;
				iLocal_69 = iLocal_61;
			}
			switch (iLocal_67)
			{
				case 1:
					if (iLocal_61 > -1)
					{
						if (!unk_0xD61D0CA14AE902DF((*uParam0)[iLocal_61 /*24*/], 1))
						{
							switch (iLocal_60)
							{
								case 8:
									if (!bLocal_53)
									{
										if (!bLocal_56)
										{
											if (!iLocal_74)
											{
												if (!func_82(vParam5.y))
												{
													func_88();
													if (func_105(vParam5.y, vParam5.z, (*uParam0)[iLocal_61 /*24*/], vParam5.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
													{
														iLocal_67 = 2;
													}
												}
											}
											else
											{
												iLocal_67 = 2;
											}
										}
										else if (!func_82(vParam4.y))
										{
											func_88();
											if (func_105(vParam4.y, vParam4.z, (*uParam0)[iLocal_61 /*24*/], vParam4.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_67 = 2;
											}
										}
									}
									else
									{
										iLocal_67 = 2;
									}
									break;
								
								case 7:
									iLocal_74 = 0;
									func_88();
									if (func_105(vParam1.y, vParam1.z, (*uParam0)[iLocal_61 /*24*/], vParam1.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_67 = 2;
									}
									break;
								
								case 5:
									iLocal_74 = 0;
									func_88();
									if (func_105(vParam6.y, vParam6.z, (*uParam0)[iLocal_61 /*24*/], vParam6.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_67 = 2;
									}
									break;
								
								case 3:
									if (!bLocal_53 && !iLocal_74)
									{
										func_88();
										if (func_105(vParam7.y, vParam7.z, (*uParam0)[iLocal_61 /*24*/], vParam7.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											iLocal_67 = 2;
										}
									}
									else
									{
										iLocal_67 = 2;
									}
									break;
								
								case 6:
									if (!bLocal_56)
									{
										if (((!func_82(vParam2.y) && !func_82(vParam3.y)) && !func_82(vParam4.y)) && !func_82(vParam5.y))
										{
											iLocal_74 = 0;
											func_88();
											if (func_105(vParam2.y, vParam2.z, (*uParam0)[iLocal_61 /*24*/], vParam2.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_67 = 2;
											}
										}
									}
									else
									{
										iLocal_67 = 2;
									}
									break;
								
								case 10:
								case 9:
									if (!bLocal_56)
									{
										if (((!func_82(vParam2.y) && !func_82(vParam3.y)) && !func_82(vParam4.y)) && !func_82(vParam5.y))
										{
											iLocal_74 = 0;
											func_88();
											if (func_105(vParam3.y, vParam3.z, (*uParam0)[iLocal_61 /*24*/], vParam3.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_67 = 2;
											}
										}
									}
									else
									{
										if (!bLocal_53)
										{
											if (func_105(vParam4.y, vParam4.z, (*uParam0)[iLocal_61 /*24*/], vParam4.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_74 = 0;
												iLocal_67 = 2;
											}
										}
										iLocal_67 = 2;
									}
									break;
							}
						}
						else
						{
							iLocal_67 = 2;
						}
					}
					else
					{
						iLocal_67 = 2;
					}
					break;
				
				case 2:
					if (!func_59())
					{
						iLocal_67 = 0;
					}
					break;
				}
			}
	}
}

int func_105(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)
{
	func_58(sParam0, iParam1, iParam4, iParam7, iParam10);
	func_106(iParam1, iParam2, sParam3);
	if (iParam4 != -1)
	{
		func_106(iParam4, iParam5, sParam6);
	}
	if (iParam7 != -1)
	{
		func_106(iParam7, iParam8, sParam9);
	}
	if (iParam10 != -1)
	{
		func_106(iParam10, iParam11, sParam12);
	}
	if (!func_53())
	{
		if (!unk_0x8187CC9EB2D7CFE6())
		{
			if (func_36(&Local_77, cLocal_78, sParam0, iParam13, 0, 0, 0))
			{
				iLocal_80 = 0;
				return 1;
			}
			else if (iLocal_79 != unk_0xFD34717937104F1C())
			{
				iLocal_80++;
				iLocal_79 = unk_0xFD34717937104F1C();
				if (iLocal_80 >= 10)
				{
					iLocal_80 = 0;
					return 1;
				}
			}
		}
		else
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

void func_106(int iParam0, int iParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_76)
	{
		if (iLocal_76[iVar0] == iParam1)
		{
			func_57(&Local_77, iVar0);
			iLocal_76[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_76[iParam0] != 0)
	{
		func_57(&Local_77, iParam0);
	}
	func_56(&Local_77, iParam0, iParam1, sParam2, 0, 1);
	iLocal_76[iParam0] = iParam1;
}

void func_107(var uParam0, var uParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4)
{
	int iVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar6;
	float fVar7;
	bool bVar8;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xD61D0CA14AE902DF((*uParam0)[iVar0 /*24*/], 1) && !unk_0xAF2C67C31AB41ABF((*uParam0)[iVar0 /*24*/]))
		{
			if (!(uParam0[iVar0 /*24*/])->f_21)
			{
				switch ((uParam0[iVar0 /*24*/])->f_3)
				{
					case 4:
						if ((unk_0x68128F973FA5E2E3((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || unk_0x68128F973FA5E2E3((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR")) || unk_0xF9D4EF1338E38AFB((*uParam0)[iVar0 /*24*/], 1785177548) == 1)
						{
							if (!unk_0x4915F4759304D5CF((*uParam0)[iVar0 /*24*/]))
							{
								unk_0x9568B1B58F78FF36((*uParam0)[iVar0 /*24*/]);
							}
							if (!unk_0xD61D0CA14AE902DF((*uParam0)[iVar0 /*24*/], 1))
							{
								unk_0x57BAE9F63852E6FF((*uParam0)[iVar0 /*24*/]);
							}
						}
						else if (unk_0xF9D4EF1338E38AFB((*uParam0)[iVar0 /*24*/], 1647992574) == 7)
						{
							switch ((uParam0[iVar0 /*24*/])->f_4)
							{
								case 0:
									if (!unk_0xD61D0CA14AE902DF((*uParam0)[iVar0 /*24*/], 1))
									{
										unk_0x57BAE9F63852E6FF((*uParam0)[iVar0 /*24*/]);
									}
									if (!unk_0x68128F973FA5E2E3((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") && !unk_0x68128F973FA5E2E3((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR"))
									{
										if (unk_0x5D7DFE2058701942((*uParam0)[iVar0 /*24*/], 0))
										{
											iVar2 = unk_0xD1A189C6C27EE0CA((*uParam0)[iVar0 /*24*/]);
											if (unk_0x1095F403F52B42E1(iVar2, 0))
											{
												if (unk_0xB2C707E9E3A0E44D(iVar2))
												{
													vVar3 = { unk_0x57323E573695B13F(iVar2) };
													unk_0xF648DB179A6E71BF(iVar2);
													unk_0xE192BEF245E3374D(iVar2, vVar3);
													unk_0xCB482EF95FAE4D73((*uParam0)[iVar0 /*24*/], 0, 0);
												}
											}
										}
										if (!unk_0x5D7DFE2058701942((*uParam0)[iVar0 /*24*/], 0))
										{
											switch ((uParam0[iVar0 /*24*/])->f_1)
											{
												case 2:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															if ((uParam0[iVar0 /*24*/])->f_10 >= 0)
															{
																if (unk_0xDC5D81351D6A4DDB((*uParam0)[(uParam0[iVar0 /*24*/])->f_10 /*24*/]))
																{
																	fVar1 = func_113((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_10 /*24*/]);
																	if (fVar1 > -45f && fVar1 < 45f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 1;
																	}
																	else if (fVar1 > -135f && fVar1 <= -45f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 2;
																	}
																	else if (fVar1 >= 45f && fVar1 <= 135f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 3;
																	}
																	else
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 4;
																	}
																	(uParam0[iVar0 /*24*/])->f_11 = unk_0xFD34717937104F1C() + 500;
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_1 = 0;
																}
															}
															break;
														
														case 1:
															if (unk_0xFD34717937104F1C() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_93();
																unk_0x00135C6A6DDEC2EA(0, 1);
																unk_0x3F01127ECD227890(0, "misschinese2_bank1", "react_forward_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0x00135C6A6DDEC2EA(0, 0);
																func_92(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 2:
															if (unk_0xFD34717937104F1C() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_93();
																unk_0x00135C6A6DDEC2EA(0, 1);
																unk_0x3F01127ECD227890(0, "misschinese2_bank1", "react_left_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0x00135C6A6DDEC2EA(0, 0);
																func_92(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 3:
															if (unk_0xFD34717937104F1C() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_93();
																unk_0x00135C6A6DDEC2EA(0, 1);
																unk_0x3F01127ECD227890(0, "misschinese2_bank1", "react_right_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0x00135C6A6DDEC2EA(0, 0);
																func_92(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 4:
															if (unk_0xFD34717937104F1C() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_93();
																unk_0x00135C6A6DDEC2EA(0, 1);
																unk_0x3F01127ECD227890(0, "misschinese2_bank1", "react_backward_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0x00135C6A6DDEC2EA(0, 0);
																func_92(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
													}
													break;
												
												case 7:
													if ((uParam0[iVar0 /*24*/])->f_5 < 2)
													{
														unk_0x9568B1B58F78FF36((*uParam0)[iVar0 /*24*/]);
														(uParam0[iVar0 /*24*/])->f_5 = iLocal_63;
														iLocal_63++;
														if (iLocal_63 == 2)
														{
															iLocal_63 = 0;
														}
													}
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															unk_0xB20B772FD9DE1847((*uParam0)[iVar0 /*24*/], unk_0x689473603EAA6346((*uParam0)[iVar0 /*24*/], 0), true);
															func_93();
															if (!unk_0x5D7DFE2058701942((*uParam0)[iVar0 /*24*/], 1))
															{
																unk_0x00135C6A6DDEC2EA(0, 1);
																unk_0x3F01127ECD227890(0, "misschinese2_bank1", "buddy_shot_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0x00135C6A6DDEC2EA(0, 0);
															}
															else
															{
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															unk_0xB943C83C5BDB3DBB(0, 200f, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = unk_0xFD34717937104F1C() + 3000;
															break;
														
														case 1:
															func_93();
															unk_0x00135C6A6DDEC2EA(0, 1);
															iVar4 = func_112();
															unk_0x00135C6A6DDEC2EA(0, 0);
															unk_0xB943C83C5BDB3DBB(0, 200f, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = (unk_0xFD34717937104F1C() + iVar4);
															break;
														
														default:
															if (unk_0x411C28019DEA5CEF((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
															{
																if (unk_0xE5B5A1FFAA0834BD((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") < 0.2f)
																{
																	unk_0x9F547C61053A0649((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 0.2f);
																}
															}
															if (unk_0xFD34717937104F1C() > (uParam0[iVar0 /*24*/])->f_5)
															{
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
													}
													break;
												
												case 5:
													if ((uParam0[iVar0 /*24*/])->f_5 <= 2)
													{
														(uParam0[iVar0 /*24*/])->f_5 = iLocal_64;
														iLocal_64++;
														if (iLocal_64 == 2)
														{
															iLocal_64 = 0;
														}
													}
													if (!unk_0x5D7DFE2058701942((*uParam0)[iVar0 /*24*/], 1))
													{
														switch ((uParam0[iVar0 /*24*/])->f_5)
														{
															case 0:
																unk_0x1F4E5EFBFE503FB3((*uParam0)[iVar0 /*24*/], 1);
																unk_0x3F01127ECD227890((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 4f, -4f, -1, 8, 0, 0, 0, 0);
																(uParam0[iVar0 /*24*/])->f_5 = 3;
																break;
															
															case 1:
																unk_0x1F4E5EFBFE503FB3((*uParam0)[iVar0 /*24*/], 1);
																unk_0x3F01127ECD227890((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 4f, -4f, -1, 8, 0, 0, 0, 0);
																unk_0xB20B772FD9DE1847((*uParam0)[iVar0 /*24*/], unk_0x689473603EAA6346((*uParam0)[iVar0 /*24*/], 0), true);
																(uParam0[iVar0 /*24*/])->f_5 = 3;
																break;
															
															case 3:
																if (unk_0x411C28019DEA5CEF((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 3))
																{
																	if (unk_0xE5B5A1FFAA0834BD((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0.95f)
																	{
																		if (func_110(iVar0, uParam0, 0))
																		{
																			(uParam0[iVar0 /*24*/])->f_5 = 4;
																		}
																		else
																		{
																			unk_0x3F01127ECD227890((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, unk_0x22C775856F4633CA(4000, 6000), 8, 0, 0, 0, 0);
																			(uParam0[iVar0 /*24*/])->f_5 = 6;
																		}
																	}
																}
																if (unk_0x411C28019DEA5CEF((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
																{
																	if (unk_0xE5B5A1FFAA0834BD((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0.95f)
																	{
																		if (func_110(iVar0, uParam0, 0))
																		{
																			(uParam0[iVar0 /*24*/])->f_5 = 5;
																		}
																		else
																		{
																			unk_0x3F01127ECD227890((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_e", 4f, -2f, unk_0x22C775856F4633CA(4000, 6000), 8, 0, 0, 0, 0);
																			(uParam0[iVar0 /*24*/])->f_5 = 6;
																		}
																	}
																}
																break;
															
															case 4:
																if (unk_0x69C0BB7D03EE045D((unk_0x552C823E1D2A019C((*uParam0)[iVar0 /*24*/]) - (uParam0[iVar0 /*24*/])->f_18)) < 10f)
																{
																	unk_0x3F01127ECD227890((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, unk_0x22C775856F4633CA(6000, 9000), 8, 0, 0, 0, 0);
																	(uParam0[iVar0 /*24*/])->f_5 = 6;
																}
																break;
															
															case 5:
																if (unk_0x69C0BB7D03EE045D((unk_0x552C823E1D2A019C((*uParam0)[iVar0 /*24*/]) - (uParam0[iVar0 /*24*/])->f_18)) < 10f)
																{
																	unk_0x3F01127ECD227890((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_f", 4f, -2f, unk_0x22C775856F4633CA(6000, 9000), 8, 0, 0, 0, 0);
																	(uParam0[iVar0 /*24*/])->f_5 = 6;
																}
																break;
															
															case 6:
																if (unk_0xF9D4EF1338E38AFB((*uParam0)[iVar0 /*24*/], -2017877118) == 7)
																{
																	(uParam0[iVar0 /*24*/])->f_5 = 0;
																	(uParam0[iVar0 /*24*/])->f_4++;
																}
																break;
														}
													}
													else
													{
														(uParam0[iVar0 /*24*/])->f_5 = 0;
														(uParam0[iVar0 /*24*/])->f_4++;
													}
													break;
												
												case 4:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															(uParam0[iVar0 /*24*/])->f_5 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(0, 2000));
															break;
														
														default:
															if (unk_0xFD34717937104F1C() > (uParam0[iVar0 /*24*/])->f_5)
															{
																(uParam0[iVar0 /*24*/])->f_3 = 5;
																(uParam0[iVar0 /*24*/])->f_1 = 0;
																(uParam0[iVar0 /*24*/])->f_4 = 0;
															}
															break;
													}
													break;
												
												case 8:
													if ((uParam0[iVar0 /*24*/])->f_3 != 6 && (uParam0[iVar0 /*24*/])->f_3 != 5)
													{
														(uParam0[iVar0 /*24*/])->f_3 = 5;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												
												case 10:
													if ((uParam0[iVar0 /*24*/])->f_3 != 6)
													{
														(uParam0[iVar0 /*24*/])->f_3 = 6;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												
												case 3:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															(uParam0[iVar0 /*24*/])->f_5 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(0, 2000));
															break;
														
														default:
															if (unk_0xFD34717937104F1C() > (uParam0[iVar0 /*24*/])->f_5)
															{
																if ((uParam0[iVar0 /*24*/])->f_3 != 6 && (uParam0[iVar0 /*24*/])->f_3 != 5)
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 5;
																	(uParam0[iVar0 /*24*/])->f_1 = 0;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
															}
															break;
													}
													break;
												
												case 1:
													iLocal_62 = iVar0;
													if (func_109(iVar0, uParam0, "", vParam2, vParam3, vParam4, 0))
													{
														(uParam0[iVar0 /*24*/])->f_3 = 5;
														(uParam0[iVar0 /*24*/])->f_1 = 0;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												
												case 6:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															if (iLocal_65 == 0)
															{
																if (!unk_0x5D7DFE2058701942((*uParam0)[iVar0 /*24*/], 1))
																{
																	vVar5 = { unk_0xE2BBD32891C18569((*uParam0)[iVar0 /*24*/], true) };
																	vVar6 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) };
																	fVar7 = unk_0x58921012265AEA87(((vVar6.z - vVar5.z) / func_4((*uParam0)[iVar0 /*24*/], unk_0xA19140A5C42D8715(), 0)));
																	if (fVar7 > 20f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 1;
																	}
																	else if (fVar7 < -20f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 2;
																	}
																	else
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 3;
																	}
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 6;
																	(uParam0[iVar0 /*24*/])->f_1 = 10;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
																iLocal_65++;
															}
															else
															{
																(uParam0[iVar0 /*24*/])->f_3 = 6;
																(uParam0[iVar0 /*24*/])->f_1 = 10;
																(uParam0[iVar0 /*24*/])->f_4 = 0;
															}
															break;
														
														case 1:
															func_93();
															unk_0x00135C6A6DDEC2EA(0, 1);
															unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 1000);
															unk_0x3F01127ECD227890(0, "misschinese2_bank1", "spot_high", 4f, -8f, -1, 0, 0, 0, 0, 0);
															unk_0x00135C6A6DDEC2EA(0, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 2:
															func_93();
															unk_0x00135C6A6DDEC2EA(0, 1);
															unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 1000);
															unk_0x3F01127ECD227890(0, "misschinese2_bank1", "spot_low", 4f, -8f, -1, 0, 0, 0, 0, 0);
															unk_0x00135C6A6DDEC2EA(0, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 3:
															func_93();
															unk_0x00135C6A6DDEC2EA(0, 1);
															unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 1000);
															unk_0x3F01127ECD227890(0, "misschinese2_bank1", "spot_mid", 4f, -8f, -1, 0, 0, 0, 0, 0);
															unk_0x00135C6A6DDEC2EA(0, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 4:
															if (bLocal_56)
															{
																if (unk_0x69C0BB7D03EE045D(func_113((*uParam0)[iVar0 /*24*/], unk_0xA19140A5C42D8715())) < 20f)
																{
																	if (unk_0x411C28019DEA5CEF((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_high", 3))
																	{
																		if (unk_0xE5B5A1FFAA0834BD((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_high") > func_108(((func_4((*uParam0)[iVar0 /*24*/], unk_0xA19140A5C42D8715(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																	if (unk_0x411C28019DEA5CEF((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_mid", 3))
																	{
																		if (unk_0xE5B5A1FFAA0834BD((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_mid") > func_108(((func_4((*uParam0)[iVar0 /*24*/], unk_0xA19140A5C42D8715(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																	if (unk_0x411C28019DEA5CEF((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_low", 3))
																	{
																		if (unk_0xE5B5A1FFAA0834BD((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_low") > func_108(((func_4((*uParam0)[iVar0 /*24*/], unk_0xA19140A5C42D8715(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 6;
																	(uParam0[iVar0 /*24*/])->f_1 = 10;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
															}
															break;
													}
													break;
											}
										}
										else
										{
											(uParam0[iVar0 /*24*/])->f_4++;
										}
									}
									break;
								
								case 1:
									if (!(uParam0[iVar0 /*24*/])->f_21)
									{
										if (unk_0x411C28019DEA5CEF((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 3))
										{
											bVar8 = true;
											if (unk_0xE5B5A1FFAA0834BD((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0x411C28019DEA5CEF((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
										{
											bVar8 = true;
											if (unk_0xE5B5A1FFAA0834BD((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0x411C28019DEA5CEF((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a", 3))
										{
											bVar8 = true;
											if (unk_0xE5B5A1FFAA0834BD((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0x411C28019DEA5CEF((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_body", 3))
										{
											bVar8 = true;
											if (unk_0xE5B5A1FFAA0834BD((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_body") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0x411C28019DEA5CEF((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a", 3))
										{
											bVar8 = true;
											if (unk_0xE5B5A1FFAA0834BD((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0x411C28019DEA5CEF((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a", 3))
										{
											bVar8 = true;
											if (unk_0xE5B5A1FFAA0834BD((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0x411C28019DEA5CEF((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a", 3))
										{
											bVar8 = true;
											if (unk_0xE5B5A1FFAA0834BD((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0x411C28019DEA5CEF((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a", 3))
										{
											bVar8 = true;
											if (unk_0xE5B5A1FFAA0834BD((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (!bVar8)
										{
											(uParam0[iVar0 /*24*/])->f_4 = 2;
											(uParam0[iVar0 /*24*/])->f_5 = unk_0xFD34717937104F1C() + 2000;
											unk_0xDA4D3941AFF8EF12((*uParam0)[iVar0 /*24*/], unk_0xA19140A5C42D8715(), 0, 16);
											unk_0x98D1B1BD9C3AA456((*uParam0)[iVar0 /*24*/], 1, 1);
											unk_0xB4F2B588B54261BF((*uParam0)[iVar0 /*24*/], 1);
										}
									}
									break;
								
								case 2:
									if (unk_0xFD34717937104F1C() > (uParam0[iVar0 /*24*/])->f_5)
									{
										(uParam0[iVar0 /*24*/])->f_3 = 5;
										(uParam0[iVar0 /*24*/])->f_1 = 0;
										(uParam0[iVar0 /*24*/])->f_4 = 0;
									}
									break;
								}
						}
						break;
					
					case 5:
					case 6:
						if (unk_0x68128F973FA5E2E3((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || unk_0xB112D23B8518DD40((*uParam0)[iVar0 /*24*/]))
						{
							if (!unk_0x4915F4759304D5CF((*uParam0)[iVar0 /*24*/]))
							{
								unk_0x9568B1B58F78FF36((*uParam0)[iVar0 /*24*/]);
							}
						}
						else
						{
							switch ((uParam0[iVar0 /*24*/])->f_4)
							{
								case 0:
									(uParam0[iVar0 /*24*/])->f_11 = 0;
									if ((iVar0 == 12 || iVar0 == 13) || iVar0 == 14)
									{
									}
									unk_0xB20B772FD9DE1847((*uParam0)[iVar0 /*24*/], unk_0x689473603EAA6346((*uParam0)[iVar0 /*24*/], 0), true);
									unk_0x1F4E5EFBFE503FB3((*uParam0)[iVar0 /*24*/], 0);
									unk_0xF112280B31B913CA((*uParam0)[iVar0 /*24*/]);
									unk_0x3B7A32E04BBE59A5((*uParam0)[iVar0 /*24*/], 50, true);
									unk_0xC2C4AE9DB4A0BEF3((*uParam0)[iVar0 /*24*/], 512, true);
									(uParam0[iVar0 /*24*/])->f_4++;
									break;
								
								case 1:
									if (!(uParam0[iVar0 /*24*/])->f_20)
									{
										*(uParam1[0 /*3*/]) = { *(uParam1[0 /*3*/]) };
										iLocal_66 = iLocal_66;
										uLocal_70 = uLocal_70;
										unk_0xDA4D3941AFF8EF12((*uParam0)[iVar0 /*24*/], unk_0xA19140A5C42D8715(), 0, 16);
										unk_0x98D1B1BD9C3AA456((*uParam0)[iVar0 /*24*/], 1, 1);
										unk_0xB4F2B588B54261BF((*uParam0)[iVar0 /*24*/], 1);
										(uParam0[iVar0 /*24*/])->f_4++;
										(uParam0[iVar0 /*24*/])->f_11 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(20000, 35000));
									}
									break;
								}
						}
						break;
					}
				}
		}
		iVar0++;
	}
}

float func_108(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 < fParam1)
	{
		return fParam1;
	}
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	return fParam0;
}

int func_109(int iParam0, var uParam1, char* sParam2, vector3 vParam3, vector3 vParam4, vector3 vParam5, bool bParam6)
{
	switch ((uParam1[iParam0 /*24*/])->f_5)
	{
		case 0:
			if (!unk_0x3CAC2741CC1A631F("chi2_hear", vParam3.y))
			{
				if (func_59())
				{
					if (!func_82(vParam3.y))
					{
						func_85();
					}
				}
				if (func_105(vParam3.y, vParam3.z, (*uParam1)[iParam0 /*24*/], vParam3.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
				{
					(uParam1[iParam0 /*24*/])->f_12 = { unk_0xE2BBD32891C18569((*uParam1)[iParam0 /*24*/], true) };
					(uParam1[iParam0 /*24*/])->f_18 = unk_0x552C823E1D2A019C((*uParam1)[iParam0 /*24*/]);
					(uParam1[iParam0 /*24*/])->f_5 = 0;
					(uParam1[iParam0 /*24*/])->f_5++;
					(uParam1[iParam0 /*24*/])->f_11 = unk_0xFD34717937104F1C() + 1000;
				}
			}
			else
			{
				(uParam1[iParam0 /*24*/])->f_12 = { unk_0xE2BBD32891C18569((*uParam1)[iParam0 /*24*/], true) };
				(uParam1[iParam0 /*24*/])->f_18 = unk_0x552C823E1D2A019C((*uParam1)[iParam0 /*24*/]);
				(uParam1[iParam0 /*24*/])->f_5++;
			}
			break;
		
		case 1:
			if (unk_0xFD34717937104F1C() > (uParam1[iParam0 /*24*/])->f_11)
			{
				unk_0xD87AD31611110768((*uParam1)[iParam0 /*24*/], unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), 5000);
				(uParam1[iParam0 /*24*/])->f_5++;
				(uParam1[iParam0 /*24*/])->f_11 = unk_0xFD34717937104F1C() + 5000;
			}
			break;
		
		case 2:
			if (!unk_0x3CAC2741CC1A631F("chi2_hear", vParam3.y))
			{
				if ((unk_0xCCF89CDD3583210D(unk_0xD4E735F4B6A956AC(), (*uParam1)[iParam0 /*24*/]) || iLocal_73 == 1) && func_67((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_12, 1) < (uParam1[iParam0 /*24*/])->f_19)
				{
					if (unk_0xFD34717937104F1C() > ((uParam1[iParam0 /*24*/])->f_11 - 3000))
					{
						unk_0x956B3CF461C0C1C9((*uParam1)[iParam0 /*24*/], unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), 1f, 20000, 0.1f, 0, 1193033728);
						(uParam1[iParam0 /*24*/])->f_15 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) };
						(uParam1[iParam0 /*24*/])->f_5 = 5;
					}
				}
				else if (unk_0xFD34717937104F1C() > (uParam1[iParam0 /*24*/])->f_11)
				{
					if (func_105(vParam5.y, vParam5.z, (*uParam1)[iParam0 /*24*/], vParam5.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						if (bParam6)
						{
						}
						(uParam1[iParam0 /*24*/])->f_5++;
					}
				}
			}
			else if (unk_0xFD34717937104F1C() > (uParam1[iParam0 /*24*/])->f_11)
			{
				unk_0x47D73A216DD513C8((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_18, 2000);
				(uParam1[iParam0 /*24*/])->f_5 = 4;
			}
			break;
		
		case 3:
			func_93();
			unk_0x956B3CF461C0C1C9(0, (uParam1[iParam0 /*24*/])->f_12, 1f, 20000, 0.2f, 4096, 1193033728);
			unk_0x47D73A216DD513C8(0, (uParam1[iParam0 /*24*/])->f_18, 2000);
			func_92(uParam1[iParam0 /*24*/], 0);
			(uParam1[iParam0 /*24*/])->f_11 = unk_0xFD34717937104F1C() + 3000;
			(uParam1[iParam0 /*24*/])->f_5++;
			break;
		
		case 4:
			if (unk_0xF9D4EF1338E38AFB((*uParam1)[iParam0 /*24*/], 242628503) == 7 || (unk_0x3CAC2741CC1A631F("chi2_hear", vParam3.y) && unk_0xF9D4EF1338E38AFB((*uParam1)[iParam0 /*24*/], 1920390111) == 7))
			{
				if (!unk_0x3CAC2741CC1A631F(sParam2, ""))
				{
					unk_0x0EEB301CAA50A123((*uParam1)[iParam0 /*24*/], sParam2, 0, 1);
				}
				(uParam1[iParam0 /*24*/])->f_4 = 0;
				(uParam1[iParam0 /*24*/])->f_5 = 0;
				(uParam1[iParam0 /*24*/])->f_1 = 0;
				(uParam1[iParam0 /*24*/])->f_2 = 0;
				if (unk_0x3CAC2741CC1A631F("chi2_hear", vParam3.y))
				{
					(uParam1[iParam0 /*24*/])->f_3 = 3;
				}
				else
				{
					(uParam1[iParam0 /*24*/])->f_3 = 2;
				}
				iLocal_62 = -1;
			}
			break;
		
		case 5:
			if (func_105(vParam3.y, vParam4.z, (*uParam1)[iParam0 /*24*/], vParam3.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
			{
				(uParam1[iParam0 /*24*/])->f_5++;
			}
			break;
		
		case 6:
			if (func_67((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_15, 1) < 2f || unk_0xF9D4EF1338E38AFB((*uParam1)[iParam0 /*24*/], 713668775) == 7)
			{
				if (!unk_0x4915F4759304D5CF((*uParam1)[iParam0 /*24*/]))
				{
					unk_0x9568B1B58F78FF36((*uParam1)[iParam0 /*24*/]);
					func_93();
					unk_0x8CBE3882704F529D(0, unk_0x3201284584C7CD83((*uParam1)[iParam0 /*24*/], -5f, 3f, 0f), 2500, 0, 2);
					unk_0x8CBE3882704F529D(0, unk_0x3201284584C7CD83((*uParam1)[iParam0 /*24*/], 5f, 3f, 0f), 2500, 0, 2);
					func_92(uParam1[iParam0 /*24*/], 0);
					(uParam1[iParam0 /*24*/])->f_11 = unk_0xFD34717937104F1C() + 3000;
					(uParam1[iParam0 /*24*/])->f_5 = 2;
				}
			}
			break;
	}
	return 0;
}

int func_110(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar1 = 1000f;
	iVar3 = -1;
	if (!unk_0xD61D0CA14AE902DF((*uParam1)[iParam0 /*24*/], 1))
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (unk_0xD61D0CA14AE902DF((*uParam1)[iVar0 /*24*/], 1) && unk_0xDC5D81351D6A4DDB((*uParam1)[iVar0 /*24*/]))
			{
				fVar2 = func_4((*uParam1)[iVar0 /*24*/], (*uParam1)[iParam0 /*24*/], 1);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iVar3 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar3 == -1)
		{
			return 0;
		}
		else
		{
			(uParam1[iParam0 /*24*/])->f_18 = func_113((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/]);
			if (unk_0x69C0BB7D03EE045D((uParam1[iParam0 /*24*/])->f_18) > 20f)
			{
				if (bParam2)
				{
					unk_0x0177431263151C4E(0, (*uParam1)[iVar3 /*24*/], 0);
				}
				else
				{
					unk_0x0177431263151C4E((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/], 0);
				}
				(uParam1[iParam0 /*24*/])->f_18 = func_111((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/], 1);
				return 1;
			}
		}
	}
	return 0;
}

float func_111(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0xE2BBD32891C18569(iParam0, false) };
	vVar1 = { unk_0xE2BBD32891C18569(iParam1, false) };
	return func_96(vVar0, vVar1, iParam2);
}

int func_112()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = -1;
	unk_0x3F01127ECD227890(0, "misschinese2_bank1", "reaction_forward_big_intro_a", 4f, -2f, 1400, 0, 0, 0, 0, 0);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar2 = unk_0x22C775856F4633CA(0, 3);
		iVar3 = unk_0x22C775856F4633CA(1100, 1800);
		iVar4 = (iVar4 + iVar3);
		if (iVar2 == iVar1)
		{
			iVar2++;
			if (iVar2 > 2)
			{
				iVar2 = 0;
			}
		}
		iVar1 = iVar2;
		switch (iVar2)
		{
			case 0:
				iVar2 = unk_0x22C775856F4633CA(0, 4);
				switch (iVar2)
				{
					case 0:
						unk_0x3F01127ECD227890(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_a", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						unk_0x3F01127ECD227890(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_b", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 2:
						unk_0x3F01127ECD227890(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_c", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
				}
				break;
			
			case 1:
				iVar2 = unk_0x22C775856F4633CA(0, 4);
				switch (iVar2)
				{
					case 0:
						unk_0x3F01127ECD227890(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_a", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						unk_0x3F01127ECD227890(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_b", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 2:
						unk_0x3F01127ECD227890(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_c", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
				}
				break;
			
			case 2:
				iVar2 = unk_0x22C775856F4633CA(0, 4);
				switch (iVar2)
				{
					case 0:
						unk_0x3F01127ECD227890(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_a", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						unk_0x3F01127ECD227890(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_b", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 2:
						unk_0x3F01127ECD227890(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_c", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
				}
				break;
		}
		iVar0++;
	}
	return iVar4;
}

float func_113(int iParam0, int iParam1)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0) && unk_0xDC5D81351D6A4DDB(iParam1))
	{
		return func_114(iParam0, unk_0xE2BBD32891C18569(iParam1, false));
	}
	return 0f;
}

float func_114(int iParam0, vector3 vParam1)
{
	float fVar0;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (!unk_0x7112137033807390(iParam0, 0))
		{
			fVar0 = func_96(unk_0xE2BBD32891C18569(iParam0, false), vParam1, 1);
			return (fVar0 - unk_0x552C823E1D2A019C(iParam0));
		}
	}
	return 0f;
}

void func_115(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, struct<2> Param5, var uParam6, struct<2> Param7, var uParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	
	if (!bLocal_53 == 1)
	{
		bLocal_82 = false;
		if (unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715()) || unk_0xD73B1037F6BD4B90(0, 24))
		{
			iVar0 = 0;
			while (iVar0 < *uParam0)
			{
				if (!unk_0xD61D0CA14AE902DF((*uParam0)[iVar0 /*24*/], 1))
				{
					iVar1++;
				}
				iVar0++;
			}
			if (iLocal_83 == 0)
			{
				iLocal_83 = iVar1;
			}
			if (iVar1 < iLocal_83)
			{
				iLocal_83 = iVar1;
				bLocal_82 = true;
			}
		}
		iVar2 = 4;
		while (iVar2 > 0)
		{
			if (!unk_0xD61D0CA14AE902DF((*uParam0)[iLocal_58 /*24*/], 1))
			{
				if ((uParam0[iLocal_58 /*24*/])->f_3 > 3 && (uParam0[iLocal_58 /*24*/])->f_1 > 1)
				{
					iVar0 = 0;
					while (iVar0 < *uParam0)
					{
						if (!unk_0xD61D0CA14AE902DF((*uParam0)[iVar0 /*24*/], 1))
						{
							if (iVar0 != iLocal_58)
							{
								if ((uParam0[iVar0 /*24*/])->f_3 <= 4)
								{
									if (func_4((*uParam0)[iVar0 /*24*/], (*uParam0)[iLocal_58 /*24*/], 1) < 8f)
									{
										if ((unk_0xDA3A4E46D189F555((*uParam0)[iLocal_58 /*24*/]) != 0 && unk_0xDA3A4E46D189F555((*uParam0)[iVar0 /*24*/]) != 0) || (unk_0xDA3A4E46D189F555((*uParam0)[iLocal_58 /*24*/]) == 0 && unk_0xDA3A4E46D189F555((*uParam0)[iVar0 /*24*/]) == 0))
										{
											vVar3 = { unk_0xE2BBD32891C18569((*uParam0)[iVar0 /*24*/], true) };
											vVar4 = { unk_0xE2BBD32891C18569((*uParam0)[iLocal_58 /*24*/], false) };
											if (unk_0x69C0BB7D03EE045D((vVar3.z - vVar4.z)) < 2f)
											{
												(uParam0[iVar0 /*24*/])->f_7 = 1;
												(uParam0[iVar0 /*24*/])->f_10 = iLocal_58;
											}
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
				else
				{
					fVar5 = 10f;
					fVar6 = 11f;
					(uParam0[iLocal_58 /*24*/])->f_22 = -1;
					(uParam0[iLocal_58 /*24*/])->f_23 = -1;
					iVar0 = 0;
					while (iVar0 < *uParam0)
					{
						if (iVar0 != iLocal_58)
						{
							if (unk_0xDC5D81351D6A4DDB((*uParam0)[iVar0 /*24*/]))
							{
								fVar7 = func_4((*uParam0)[iVar0 /*24*/], (*uParam0)[iLocal_58 /*24*/], 1);
								if (fVar7 < 10f)
								{
									fVar8 = func_113((*uParam0)[iLocal_58 /*24*/], (*uParam0)[iVar0 /*24*/]);
									if (fVar8 > -90f && fVar8 < 90f)
									{
										if (fVar7 < fVar5)
										{
											(uParam0[iLocal_58 /*24*/])->f_23 = (uParam0[iLocal_58 /*24*/])->f_22;
											(uParam0[iLocal_58 /*24*/])->f_22 = iVar0;
											fVar6 = fVar5;
											fVar5 = fVar7;
										}
										else if (fVar7 < fVar6)
										{
											fVar6 = fVar7;
											(uParam0[iLocal_58 /*24*/])->f_23 = iVar0;
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
			}
			iLocal_58++;
			if (iLocal_58 >= *uParam0)
			{
				iLocal_58 = 0;
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (unk_0x5BFF0F72CC04E4DA(unk_0xA19140A5C42D8715()))
	{
		iVar9 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
		if (unk_0x1095F403F52B42E1(iVar9, 0))
		{
			if (unk_0x42230CB5B84CC08B(iVar9))
			{
				iVar10 = 1;
			}
		}
	}
	if (unk_0x6D7FFF527E125F24(-1, vLocal_71, fLocal_72))
	{
		bLocal_54 = true;
	}
	if (!iLocal_55)
	{
		if (func_82(Param1.f_1) || func_82(Param3.f_1))
		{
			iLocal_59 = unk_0xFD34717937104F1C() + 1000;
			iLocal_55 = 1;
		}
		if (func_82(Param5.f_1) || func_82(Param7.f_1))
		{
			iLocal_59 = unk_0xFD34717937104F1C() + 1000;
			iLocal_55 = 1;
		}
	}
	else if (((!func_82(Param1.f_1) && !func_82(Param3.f_1)) && !func_82(Param5.f_1)) && !func_82(Param7.f_1))
	{
		iLocal_55 = 0;
	}
	else if (unk_0xFD34717937104F1C() > iLocal_59)
	{
		if (func_82(Param1.f_1) || func_82(Param3.f_1))
		{
			bLocal_53 = true;
		}
		if (func_82(Param5.f_1) || func_82(Param7.f_1))
		{
			bLocal_56 = true;
		}
	}
	iLocal_60 = 0;
	iVar11 = -1;
	fVar12 = 13f;
	iLocal_57 = 0;
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		iVar13 = unk_0xD1A189C6C27EE0CA(unk_0xA19140A5C42D8715());
	}
	if (iLocal_62 == -1)
	{
		iLocal_73 = 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xD61D0CA14AE902DF((*uParam0)[iVar0 /*24*/], 1))
		{
			if ((uParam0[iVar0 /*24*/])->f_3 != 7)
			{
				(uParam0[iVar0 /*24*/])->f_2 = (uParam0[iVar0 /*24*/])->f_1;
				(uParam0[iVar0 /*24*/])->f_1 = 0;
				if ((uParam0[iVar0 /*24*/])->f_3 <= 4)
				{
					if (iLocal_62 == -1)
					{
						if (unk_0x1095F403F52B42E1(iVar13, 0))
						{
							if (unk_0x42230CB5B84CC08B(iVar13))
							{
								iLocal_73 = 1;
								fVar12 = 20f;
							}
							if (unk_0x7F75D2469509BADD(iVar13))
							{
								iLocal_73 = 1;
								fVar12 = 50f;
							}
						}
						if (unk_0xCCF89CDD3583210D(unk_0xD4E735F4B6A956AC(), (*uParam0)[iVar0 /*24*/]) || (unk_0x1095F403F52B42E1(iVar13, 0) && unk_0x42230CB5B84CC08B(iVar13)))
						{
							if (func_4(unk_0xA19140A5C42D8715(), (*uParam0)[iVar0 /*24*/], 1) < fVar12)
							{
								if ((uParam0[iVar0 /*24*/])->f_8)
								{
									if (unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) == unk_0xDA3A4E46D189F555((*uParam0)[iVar0 /*24*/]))
									{
										fVar12 = func_4(unk_0xA19140A5C42D8715(), (*uParam0)[iVar0 /*24*/], 1);
										iVar11 = iVar0;
										(uParam0[iVar0 /*24*/])->f_1 = 1;
										(uParam0[iVar0 /*24*/])->f_19 = (fVar12 + 5f);
									}
								}
							}
						}
					}
					if ((uParam0[iVar0 /*24*/])->f_7)
					{
						(uParam0[iVar0 /*24*/])->f_7 = 0;
						(uParam0[iVar0 /*24*/])->f_1 = 2;
					}
					if (bLocal_54)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 3;
					}
					if (bLocal_53)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 4;
					}
					if (bLocal_82)
					{
					}
					if (!bLocal_82 && !unk_0x685AE6AF34B35D3B((*uParam0)[iVar0 /*24*/]))
					{
						if (unk_0xAA99590BCC62DC13((*uParam0)[iVar0 /*24*/], 123))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (unk_0x4D0C87E89BCF8C94((*uParam0)[iVar0 /*24*/], 123))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
							if (unk_0xAA99590BCC62DC13((*uParam0)[iVar0 /*24*/], 17))
							{
							}
						}
						if ((uParam0[iVar0 /*24*/])->f_9)
						{
							if (unk_0xB3CB9098064F83A7(unk_0xE2BBD32891C18569((*uParam0)[iVar0 /*24*/], true), 4f, 1, 1))
							{
								(uParam0[iVar0 /*24*/])->f_1 = 7;
							}
						}
						else if (unk_0xB3CB9098064F83A7(unk_0xE2BBD32891C18569((*uParam0)[iVar0 /*24*/], true), 6f, 1, 1))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (unk_0xAA99590BCC62DC13((*uParam0)[iVar0 /*24*/], 124))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (unk_0x9809FE4B550B1EFE(unk_0xE2BBD32891C18569((*uParam0)[iVar0 /*24*/], true), 1f, 1))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
					}
					if ((uParam0[iVar0 /*24*/])->f_3 < 4)
					{
						if ((uParam0[iVar0 /*24*/])->f_22 != -1)
						{
							if (unk_0xDC5D81351D6A4DDB((*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/]))
							{
								if (unk_0xD61D0CA14AE902DF((*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/], 1))
								{
									if (unk_0x581D3C560D601491((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/]))
									{
										(uParam0[iVar0 /*24*/])->f_1 = 5;
									}
								}
							}
						}
						if ((uParam0[iVar0 /*24*/])->f_23 != -1)
						{
							if (unk_0xDC5D81351D6A4DDB((*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/]))
							{
								if (unk_0xD61D0CA14AE902DF((*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/], 1))
								{
									if (unk_0x581D3C560D601491((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/]))
									{
										(uParam0[iVar0 /*24*/])->f_1 = 5;
									}
								}
							}
						}
					}
				}
				if ((uParam0[iVar0 /*24*/])->f_3 <= 5)
				{
					if ((uParam0[iVar0 /*24*/])->f_1 == 0)
					{
						if ((uParam0[iVar0 /*24*/])->f_3 > 4 || unk_0x967743032563101F((*uParam0)[iVar0 /*24*/], 0))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 8;
						}
					}
					if (((unk_0xAA99590BCC62DC13((*uParam0)[iVar0 /*24*/], 1) || unk_0x4D0C87E89BCF8C94((*uParam0)[iVar0 /*24*/], 1)) || (unk_0x967743032563101F((*uParam0)[iVar0 /*24*/], 0) && unk_0xF0F84431A63BE10B((*uParam0)[iVar0 /*24*/], unk_0xA19140A5C42D8715()))) || (func_116((*uParam0)[iVar0 /*24*/]) && unk_0x4D0C87E89BCF8C94((*uParam0)[iVar0 /*24*/], 1)))
					{
						if ((uParam0[iVar0 /*24*/])->f_3 > 4)
						{
							(uParam0[iVar0 /*24*/])->f_1 = 9;
						}
						else
						{
							(uParam0[iVar0 /*24*/])->f_1 = 6;
						}
					}
				}
				if (iVar10 && func_4(unk_0xA19140A5C42D8715(), (*uParam0)[iVar0 /*24*/], 1) < 50f)
				{
					(uParam0[iVar0 /*24*/])->f_1 = 6;
				}
				if ((uParam0[iVar0 /*24*/])->f_3 <= 6)
				{
					if (bLocal_56)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 10;
					}
				}
				if ((uParam0[iVar0 /*24*/])->f_1 <= (uParam0[iVar0 /*24*/])->f_2)
				{
					(uParam0[iVar0 /*24*/])->f_1 = (uParam0[iVar0 /*24*/])->f_2;
				}
				else
				{
					(uParam0[iVar0 /*24*/])->f_3 = 4;
					(uParam0[iVar0 /*24*/])->f_4 = 0;
					(uParam0[iVar0 /*24*/])->f_5 = 0;
				}
				if ((uParam0[iVar0 /*24*/])->f_1 > iLocal_60)
				{
					iLocal_60 = (uParam0[iVar0 /*24*/])->f_1;
					iLocal_61 = iVar0;
				}
			}
			else
			{
				(uParam0[iVar0 /*24*/])->f_3 = 0;
				(uParam0[iVar0 /*24*/])->f_1 = 0;
			}
			if ((uParam0[iVar0 /*24*/])->f_3 > 3)
			{
				iLocal_57 = 1;
			}
		}
		iVar0++;
	}
	if (iLocal_62 == -1)
	{
		if (iVar11 != -1)
		{
			if (1 > (uParam0[iVar11 /*24*/])->f_1)
			{
				(uParam0[iVar11 /*24*/])->f_1 = 1;
				iLocal_62 = iVar11;
			}
		}
	}
	else if (unk_0xD61D0CA14AE902DF((*uParam0)[iLocal_62 /*24*/], 1))
	{
		iLocal_62 = -1;
	}
}

int func_116(int iParam0)
{
	if (unk_0x411C28019DEA5CEF(iParam0, "misschinese2_bank1", "alert_gunshot", 3))
	{
		return 1;
	}
	if (unk_0x411C28019DEA5CEF(iParam0, "misschinese2_bank1", "buddy_shot_b", 3))
	{
		return 1;
	}
	if (unk_0x411C28019DEA5CEF(iParam0, "misschinese2_bank1", "reaction_forward_big_intro_a", 3))
	{
		return 1;
	}
	if (unk_0x411C28019DEA5CEF(iParam0, "misschinese2_bank1", "alert_body", 3))
	{
		return 1;
	}
	if (unk_0x411C28019DEA5CEF(iParam0, "misschinese2_bank1", "react_forward_small_intro_a", 3))
	{
		return 1;
	}
	if (unk_0x411C28019DEA5CEF(iParam0, "misschinese2_bank1", "react_backward_small_intro_a", 3))
	{
		return 1;
	}
	if (unk_0x411C28019DEA5CEF(iParam0, "misschinese2_bank1", "react_left_small_intro_a", 3))
	{
		return 1;
	}
	if (unk_0x411C28019DEA5CEF(iParam0, "misschinese2_bank1", "react_right_small_intro_a", 3))
	{
		return 1;
	}
	return 0;
}

void func_117()
{
	if (iLocal_392)
	{
		if (unk_0x429D45A6C6520026(&vLocal_397))
		{
			if (func_59())
			{
				if (unk_0x904275961B875DEB())
				{
					if (!unk_0x8187CC9EB2D7CFE6())
					{
						cLocal_393 = { func_118() };
						vLocal_397 = { func_83() };
						StringCopy(&vLocal_397, "", 24);
						if (!unk_0x429D45A6C6520026(&cLocal_393) && !unk_0x3CAC2741CC1A631F(&cLocal_393, "NULL"))
						{
							vLocal_397 = { func_83() };
							func_85();
						}
						else
						{
							iLocal_392 = 0;
							StringCopy(&vLocal_397, "", 24);
							StringCopy(&cLocal_393, "", 24);
						}
					}
				}
			}
			else
			{
				iLocal_392 = 0;
				StringCopy(&vLocal_397, "", 24);
				StringCopy(&cLocal_393, "", 24);
			}
		}
		else
		{
			if (unk_0x904275961B875DEB())
			{
				if (!func_82(&vLocal_397))
				{
					iLocal_392 = 0;
					StringCopy(&vLocal_397, "", 24);
					StringCopy(&cLocal_393, "", 24);
				}
			}
			if (!unk_0x429D45A6C6520026(&vLocal_397))
			{
				vLocal_391[0 /*3*/] = { vLocal_391[0 /*3*/] };
			}
		}
	}
}

struct<6> func_118()
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15822 == 4)
	{
		iVar1 = unk_0x55CF08D5383E90A2();
		iVar1 = (iVar1 + Global_16832);
		iVar2 = iVar1 + 1;
		if (iVar2 > -1 && iVar1 > -1)
		{
			if (unk_0x445EC9E7EACB710E(&(Global_14690[iVar2 /*6*/])))
			{
				return Global_14690[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (unk_0x445EC9E7EACB710E(&(Global_14690[iVar3 /*6*/])))
					{
						return Global_14690[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_14690[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_119()
{
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		func_126();
		func_125();
		func_123();
		func_120();
	}
}

void func_120()
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	vVar1 = { 0f, 0f, 0f };
	if (iLocal_102 == 0)
	{
		if (unk_0x08198953697A5A22(&vVar1, Local_109[0 /*5*/]))
		{
			fVar2 = 0f;
			fVar5 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_109)
			{
				if (iVar0 > 0)
				{
					fVar2 = (fVar2 + unk_0x499324B3EF19C288(Local_109[(iVar0 - 1) /*5*/], Local_109[iVar0 /*5*/], true));
				}
				if (Local_109[iVar0 /*5*/].f_4)
				{
					if (unk_0x08198953697A5A22(&vVar1, Local_109[iVar0 /*5*/]))
					{
						fVar4 = unk_0x499324B3EF19C288(Local_109[iVar0 /*5*/], vVar1, true);
						if (fVar4 < fVar5)
						{
							fVar5 = fVar4;
							fVar6 = fVar2;
							iVar3 = iVar0;
						}
					}
				}
				iVar0++;
			}
			if (fVar5 < fLocal_96)
			{
				iVar3 = iVar3;
				iLocal_102 = 1;
				iLocal_104 = unk_0xFD34717937104F1C();
				fVar6 = fVar6;
				vLocal_99 = { Local_109[iVar3 /*5*/] };
				iLocal_100 = iVar3;
				iLocal_105 = iVar3 * 2;
				iLocal_107 = iLocal_105;
				iLocal_108 = iLocal_105;
				if (iLocal_108 < 0)
				{
					iLocal_108 = 0;
				}
				if (iLocal_107 >= Local_109 * 2)
				{
					iLocal_107 = (Local_109 * 2 - 1);
				}
			}
		}
	}
	if (iLocal_102 == 1)
	{
		unk_0x1977C4601F469D7B();
		fVar7 = (to_float((unk_0xFD34717937104F1C() - iLocal_104)) / fLocal_110);
		iVar8 = (floor((fVar7 / (1f / 2f))) - 1);
		iVar9 = (iLocal_105 + iVar8);
		iVar10 = (iLocal_105 - iVar8);
		if (iVar9 >= 122)
		{
			iVar9 = 121;
		}
		if (iVar10 < 0)
		{
			iVar10 = 0;
		}
		if (iVar9 > iLocal_107)
		{
			iVar0 = iLocal_107 + 1;
			while (iVar0 <= iVar9)
			{
				iVar11 = (iVar0 / 2);
				if (iVar11 < Local_109)
				{
					if (Local_109[iVar11 /*5*/].f_4)
					{
						func_121(iVar0, 1);
					}
					else
					{
						iVar9 = (iVar0 - 1);
						iVar0 = iVar9 + 1;
					}
				}
				iVar0++;
			}
			iLocal_107 = iVar9;
		}
		if (iVar10 < iLocal_108)
		{
			iVar0 = (iLocal_108 - 1);
			while (iVar0 >= iVar10)
			{
				iVar11 = (iVar0 / 2);
				if (iVar11 < Local_109)
				{
					if (Local_109[iVar11 /*5*/].f_4)
					{
						func_121(iVar0, 1);
					}
					else
					{
						iVar10 = iVar0 + 1;
						iVar0 = (iVar10 - 1);
					}
				}
				iVar0 = (iVar0 + -1);
			}
			iLocal_108 = iVar10;
		}
		iVar0 = 0;
		while (iVar0 < Local_101)
		{
			if ((unk_0xFD34717937104F1C() - Local_101[iVar0 /*5*/].f_4) > 1000)
			{
				unk_0x25C7CCF1CBB8C92D(Local_101[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			if ((unk_0xFD34717937104F1C() - Local_101[iVar0 /*5*/].f_4) > 6000)
			{
				unk_0x18F3ABCEA09948FB(Local_101[iVar0 /*5*/]);
			}
			iVar0++;
		}
	}
}

void func_121(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		if ((iParam0 % 2) == 1)
		{
			iVar0 = (iParam0 / 2);
			if (iVar0 + 1 < 61)
			{
				func_122(Local_109[(iParam0 / 2) /*5*/] + Local_109[(iParam0 / 2) + 1 /*5*/] / Vector(2f, 2f, 2f) + Vector(fLocal_97, fLocal_97, fLocal_97), iParam1);
			}
		}
		else if ((iParam0 / 2) < 61)
		{
			func_122(Local_109[(iParam0 / 2) /*5*/] + Vector(fLocal_97, fLocal_97, fLocal_97), iParam1);
		}
	}
}

void func_122(vector3 vParam0, int iParam1)
{
	if (iLocal_103 == 0)
	{
		iParam1 = 0;
	}
	unk_0x18F3ABCEA09948FB(Local_101[iLocal_106 /*5*/]);
	if (Local_101[iLocal_106 /*5*/].f_4 != 0)
	{
		unk_0x25C7CCF1CBB8C92D(Local_101[iLocal_106 /*5*/].f_1, 0.4f, 1f);
	}
	Local_101[iLocal_106 /*5*/].f_4 = unk_0xFD34717937104F1C();
	Local_101[iLocal_106 /*5*/].f_1 = { vParam0 };
	Local_101[iLocal_106 /*5*/] = unk_0x5F55280D2F9FC5F4(vParam0, iLocal_94, iParam1);
	iLocal_106++;
	if (iLocal_106 >= 31)
	{
		iLocal_106 = 0;
	}
}

void func_123()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (bLocal_89)
	{
		unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iVar1, 1);
		if (iVar1 == joaat("weapon_petrolcan"))
		{
			if (unk_0xD73B1037F6BD4B90(0, 24) && unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715()))
			{
				if (iLocal_95 == 0)
				{
					unk_0xE061C3261E51F663(2f, 8f, 4);
					iLocal_95 = unk_0xFD34717937104F1C() + 250;
				}
				if (unk_0xFD34717937104F1C() > iLocal_95)
				{
					if (!bLocal_85)
					{
						fVar4 = 9999.9f;
						vLocal_98 = { func_124() };
						iVar0 = 0;
						while (iVar0 < Local_109)
						{
							if (unk_0xCE3CB618AFE55EFB(Local_109[iVar0 /*5*/].f_3))
							{
								fVar2 = unk_0x499324B3EF19C288(vLocal_98, unk_0x1C8DAFF0573242F7(Local_109[iVar0 /*5*/].f_3), true);
								fVar3 = unk_0x499324B3EF19C288(Local_109[iVar0 /*5*/], unk_0x1C8DAFF0573242F7(Local_109[iVar0 /*5*/].f_3), true);
								if (fVar3 == 0f || fVar2 < fVar3)
								{
									if (fVar2 < 2f)
									{
										Local_109[iVar0 /*5*/] = { vLocal_98 };
									}
								}
								if (fVar2 < fVar4)
								{
									fVar4 = fVar2;
									iVar5 = iVar0;
								}
							}
							iVar0++;
						}
						if (fVar4 < 2f)
						{
							if (iLocal_91 != -1)
							{
								if (unk_0x69E48309C7AE810E((iLocal_92 - iVar5)) > 1)
								{
									iLocal_92 = -1;
								}
								if (iLocal_92 == -1)
								{
									iLocal_92 = iLocal_91;
								}
								if (unk_0x69E48309C7AE810E((iLocal_92 - iVar5)) < 3 && unk_0x69E48309C7AE810E((iLocal_92 - iVar5)) > 0)
								{
									if (iLocal_92 < iVar5)
									{
										iVar6 = iLocal_92;
										while (iVar6 <= (iVar5 - 1))
										{
											if (unk_0xCE3CB618AFE55EFB(Local_109[iVar6 /*5*/].f_3))
											{
												if (unk_0x1C05D741948BDE08(Local_109[iVar6 /*5*/].f_3) > 0)
												{
													unk_0xE8C2974337833D20(Local_109[iVar6 /*5*/].f_3, 0);
													Local_109[iVar6 /*5*/].f_4 = 1;
													iLocal_93 = (iLocal_93 - 1);
												}
											}
											iVar6++;
										}
									}
									else
									{
										iVar6 = iVar5 + 1;
										while (iVar6 <= iLocal_92)
										{
											if (unk_0xCE3CB618AFE55EFB(Local_109[iVar6 /*5*/].f_3))
											{
												if (unk_0x1C05D741948BDE08(Local_109[iVar6 /*5*/].f_3) > 0)
												{
													unk_0xE8C2974337833D20(Local_109[iVar6 /*5*/].f_3, 0);
													Local_109[iVar6 /*5*/].f_4 = 1;
													iLocal_93 = (iLocal_93 - 1);
												}
											}
											iVar6++;
										}
									}
									iLocal_92 = iLocal_91;
								}
								if (iVar5 == 0)
								{
									if (unk_0xCE3CB618AFE55EFB(Local_109[iVar5 /*5*/].f_3))
									{
										if (unk_0x1C05D741948BDE08(Local_109[iVar5 /*5*/].f_3) > 0)
										{
											unk_0xE8C2974337833D20(Local_109[iVar5 /*5*/].f_3, 0);
											Local_109[iVar5 /*5*/].f_4 = 1;
											iLocal_93 = (iLocal_93 - 1);
										}
									}
								}
								if (iVar5 == 60)
								{
									if (unk_0xCE3CB618AFE55EFB(Local_109[iVar5 /*5*/].f_3))
									{
										if (unk_0x1C05D741948BDE08(Local_109[iVar5 /*5*/].f_3) > 0)
										{
											unk_0xE8C2974337833D20(Local_109[iVar5 /*5*/].f_3, 0);
											Local_109[iVar5 /*5*/].f_4 = 1;
											iLocal_93 = (iLocal_93 - 1);
										}
									}
								}
								if (iVar5 < 60)
								{
									if (func_71(Local_109[iVar5 + 1 /*5*/]))
									{
										if (unk_0xCE3CB618AFE55EFB(Local_109[iVar5 /*5*/].f_3))
										{
											if (unk_0x1C05D741948BDE08(Local_109[iVar5 /*5*/].f_3) > 0)
											{
												unk_0xE8C2974337833D20(Local_109[iVar5 /*5*/].f_3, 0);
												Local_109[iVar5 /*5*/].f_4 = 1;
												iLocal_93 = (iLocal_93 - 1);
											}
										}
									}
								}
							}
							iLocal_91 = iVar5;
						}
					}
				}
			}
			else
			{
				iLocal_91 = -1;
				iLocal_92 = -1;
				iLocal_95 = 0;
			}
		}
	}
}

Vector3 func_124()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	var uVar4;
	
	iVar0 = unk_0xEB808D3948D79F4B(unk_0xA19140A5C42D8715());
	if (unk_0xDC5D81351D6A4DDB(iVar0))
	{
		iVar1 = unk_0x4F9AEAB2CC029A5C(iVar0, "Gun_Nuzzle");
		iVar1 = 1;
		vVar2 = { unk_0xB31A4B66C16032CC(iVar0, iVar1) };
		vVar2 = { unk_0x2F230B37E9FFF23F(vVar2, unk_0x552C823E1D2A019C(iVar0), 0.35f, 0f, -0.15f) };
		unk_0x8F7BA8E028ADF980(vVar2, &uVar4, 0, 0);
		vVar3 = { vVar2.x, vVar2.y, uVar4 };
	}
	return vVar3;
}

void func_125()
{
	int iVar0;
	
	if (iLocal_87)
	{
		if (iLocal_102)
		{
			iVar0 = 0;
			while (iVar0 < Local_101)
			{
				unk_0x18F3ABCEA09948FB(Local_101[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_87 = 0;
		iLocal_102 = 1;
		iLocal_104 = unk_0xFD34717937104F1C();
		iVar0 = 0;
		while (iVar0 < Local_109)
		{
			Local_109[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (iLocal_90 != -1)
		{
			iLocal_108 = iLocal_90;
			iLocal_107 = iLocal_90;
			iLocal_105 = iLocal_90;
		}
		else
		{
			iLocal_108 = -1;
			iLocal_107 = -1;
			iLocal_105 = iLocal_90;
		}
		iLocal_106 = 1;
	}
}

void func_126()
{
	if (!iLocal_88)
	{
		iLocal_88 = 1;
	}
}

void func_127()
{
	int iVar0;
	
	if (iLocal_149 >= 4)
	{
		iVar0 = 0;
		while (iVar0 < Local_113)
		{
			if (unk_0xDC5D81351D6A4DDB(Local_113[iVar0 /*33*/]))
			{
				if (!Local_113[iVar0 /*33*/].f_23)
				{
					if (unk_0x4915F4759304D5CF(Local_113[iVar0 /*33*/]))
					{
						Local_113[iVar0 /*33*/].f_23 = 1;
						func_9(151, 1, 0);
					}
				}
				if (unk_0x35546CE87C5336BC(Local_113[iVar0 /*33*/]) == iLocal_116)
				{
					func_97(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
				}
			}
			else if (Local_113[iVar0 /*33*/] != 0)
			{
				func_128(&(Local_113[iVar0 /*33*/].f_25));
				Local_113[iVar0 /*33*/] = 0;
			}
			iVar0++;
		}
	}
}

void func_128(int iParam0)
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

void func_129()
{
	int iVar0;
	
	iVar0 = iLocal_149;
	func_362();
	switch (iLocal_149)
	{
		case 0:
			func_265();
			break;
		
		case 1:
			func_262();
			break;
		
		case 2:
			func_217();
			break;
		
		case 3:
			func_201();
			break;
		
		case 4:
			func_200();
			break;
		
		case 5:
			func_200();
			break;
		
		case 6:
			func_200();
			break;
		
		case 7:
			func_196();
			break;
		
		case 8:
			func_175();
			break;
		
		case 9:
			func_143();
			break;
	}
	if (iLocal_149 != iVar0)
	{
		iLocal_150 = 0;
	}
	if (bLocal_152)
	{
		func_130(0);
	}
}

void func_130(char* sParam0)
{
	while (!unk_0x9444470D6D9ADB88("CHN2_MISSION_FAIL"))
	{
		func_28(21, 1);
	}
	if (!unk_0x429D45A6C6520026(sParam0))
	{
		sLocal_151 = sParam0;
	}
	if (unk_0x7032042E5696FFD7(sLocal_151))
	{
		sLocal_151 = "CHFAIL";
	}
	func_132(sLocal_151);
	while (!func_131())
	{
		func_28(2, 0);
	}
	func_437(1);
}

int func_131()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_93232 == 7 || Global_93232 == 8)
	{
		return 1;
	}
	return 0;
}

void func_132(char* sParam0)
{
	func_142(sParam0);
	func_133(0);
}

void func_133(int iParam0)
{
	int iVar0;
	
	if (Global_106070.f_9057 || func_141(0))
	{
		iVar0 = func_140();
		if (!func_134(iVar0))
		{
			return;
		}
		unk_0x2BCFB39E86340DAA(&(Global_84079[iVar0 /*5*/].f_1), 5);
		Global_93268 = iParam0;
	}
}

int func_134(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_139();
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		unk_0x824B5E936276CAB3(5000);
	}
	iVar0 = Global_84079[iParam0 /*5*/];
	iVar1 = Global_71474.f_109[iVar0 /*4*/];
	func_138(iVar1, 1);
	unk_0x657CA5CB73EE77D4(unk_0xD4E735F4B6A956AC());
	unk_0xB8C9A9ECCE440A3A(unk_0xD4E735F4B6A956AC());
	func_135(&(Global_106070.f_2355.f_539), iVar1);
	if (Global_87502 == Global_93269)
	{
		Global_106070.f_9057.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0x05EFB6A616B6FADE(Global_84115[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			unk_0xC1D3387D1E48090E(0);
		}
	}
	Global_106070.f_9057.f_330[iVar1 /*6*/].f_2++;
	Global_87502 = Global_93269;
	if (iParam0 == -1)
	{
		if (Global_106070.f_9057)
		{
		}
		return 0;
	}
	if (unk_0x05EFB6A616B6FADE(Global_84079[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0x05EFB6A616B6FADE(Global_84079[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_135(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_106070.f_18505[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0x05EFB6A616B6FADE(Global_106070.f_9057.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_137(Global_106070.f_18505[iVar0], &vVar2, &fVar3))
			{
				Global_106070.f_18505[iVar0] = 318;
				func_136(&(uParam0->f_2276[iVar0]));
				uParam0->f_2280[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2290[iVar0] = 0f;
				uParam0->f_2294[iVar0] = 0;
				uParam0->f_2298[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2308[iVar0] = 0;
				Global_90717[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_90717[iVar0 /*29*/].f_9 = 0f;
				Global_90717[iVar0 /*29*/].f_12 = 0f;
				Global_90717[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_90717[iVar0 /*29*/].f_10 = 0f;
				Global_90717[iVar0 /*29*/].f_13 = 0f;
				Global_90717[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_90717[iVar0 /*29*/].f_11 = 0f;
				Global_90717[iVar0 /*29*/].f_14 = 0f;
				Global_90717[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_90717[iVar0 /*29*/].f_26 = 0f;
				Global_90717[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_90717[iVar0 /*29*/].f_27 = 0f;
				Global_90717[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_90717[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_136(var uParam0)
{
	*uParam0 = -15;
}

int func_137(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_137(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_137(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_138(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_87312[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_87312[iParam0 /*2*/] = 0;
	}
}

void func_139()
{
	Global_93267 = 1;
	if (unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1))
	{
		if (unk_0x429D45A6C6520026(&Global_71437))
		{
			switch (func_43())
			{
				case 0:
					StringCopy(&Global_71437, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_71437, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_71437, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_71441, "", 16);
		}
		Global_93267 = 0;
	}
	else if (!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0x429D45A6C6520026(&Global_71437))
		{
			switch (func_43())
			{
				case 0:
					StringCopy(&Global_71437, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_71437, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_71437, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_71441, "", 16);
		}
		Global_93267 = 0;
		unk_0x2BCFB39E86340DAA(&(Global_93232.f_20), 25);
	}
}

int func_140()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0x05EFB6A616B6FADE(Global_84079[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_141(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

void func_142(char* sParam0)
{
	if (!unk_0x429D45A6C6520026(sParam0))
	{
		if (unk_0x245B8CF1349B3FDF(sParam0) <= 16)
		{
			StringCopy(&Global_71437, sParam0, 16);
			StringCopy(&Global_71441, "", 16);
			if (unk_0x8F7BC8EB456E9A7D())
			{
				unk_0xB73C1036C716A110();
			}
		}
	}
}

void func_143()
{
	func_170(46, 52);
	func_160(1, 49, 0, 2, 48, 1, 0, 1, 0, 1, 0);
	func_160(2, 52, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(3, 53, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(4, 54, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(5, 55, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(0, 27, 0, 0, 1, 0, 1, 0, 1, 0);
	func_149(0, 12, 0, 0, 1, 0, 1, 0);
	func_148();
	if (func_147(1, 49))
	{
		func_144();
	}
}

void func_144()
{
	unk_0x4F93066CECE72793();
	func_145(0, 0);
	func_437(0);
}

void func_145(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_56183)
	{
		Global_56183 = iParam1;
	}
	if (bParam0)
	{
		if ((func_141(0) && Global_71451.f_1 == 1) && func_146(Global_71451))
		{
		}
		else
		{
			Global_56181 = 1;
		}
	}
	if (Global_106070.f_9057 || func_141(0))
	{
		iVar0 = func_140();
		iVar1 = Global_84079[iVar0 /*5*/];
		uVar2 = Global_71474.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_106070.f_9057)
			{
			}
			return;
		}
		if (unk_0x05EFB6A616B6FADE(Global_84079[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0x05EFB6A616B6FADE(Global_84079[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x2BCFB39E86340DAA(&(Global_84079[iVar0 /*5*/].f_1), 4);
		unk_0x2BCFB39E86340DAA(&Global_71453, 1);
		Global_71469 = uVar2;
		Global_71470 = unk_0xFD34717937104F1C();
	}
}

int func_146(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_147(int iParam0, int iParam1)
{
	if (Local_385[iParam0 /*10*/] == iParam1)
	{
		if (Local_385[iParam0 /*10*/].f_3 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_148()
{
	vector3 vVar0;
	
	vVar0 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) };
	if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2432.476f, 4953.242f, 43.05545f, 2466.34f, 4986.15f, 57.25303f, 14.4375f, 0, true, 0))
	{
		if (vVar0.z < 50f)
		{
			if ((((unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2436.762f, 4956.011f, 44.49009f, 2443.38f, 4962.625f, 48.2233f, 1.5f, 0, true, 0) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2447.669f, 4966.554f, 44.95141f, 2452.497f, 4969.825f, 48.89074f, 2.3125f, 0, true, 0)) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2454.863f, 4968.686f, 44.95141f, 2460.505f, 4974.409f, 48.82641f, 1.6875f, 0, true, 0)) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2459.058f, 4977.546f, 44.95141f, 2460.411f, 4979.302f, 48.82641f, 1.6875f, 0, true, 0)) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2457.602f, 4984.746f, 44.73669f, 2461.977f, 4989.49f, 48.47844f, 1.6875f, 0, true, 0))
			{
				if (!unk_0x463E3A48A46C9195(unk_0xA19140A5C42D8715()))
				{
					unk_0xB67799D0765FBE46(unk_0xA19140A5C42D8715());
				}
			}
		}
		else if ((((((unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2454.179f, 4995.281f, 44.54151f, 2453.096f, 4993.905f, 48.32043f, 1.6875f, 0, true, 0) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2449.401f, 4990.354f, 44.92924f, 2447.717f, 4988.865f, 48.82129f, 1.6875f, 0, true, 0)) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2443.906f, 4990.104f, 44.4446f, 2439.007f, 4985.271f, 48.30458f, 1.6875f, 0, true, 0)) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2439.602f, 4982.387f, 44.95141f, 2440.797f, 4981.365f, 48.82642f, 1.6875f, 0, true, 0)) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2440.259f, 4980.671f, 44.95142f, 2434.769f, 4975.055f, 48.82642f, 1.6875f, 0, true, 0)) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2432.165f, 4972.586f, 44.29909f, 2430.114f, 4970.545f, 48.21086f, 1.6875f, 0, true, 0)) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2428.46f, 4968.569f, 44.81597f, 2426.632f, 4966.603f, 48.29342f, 1.6875f, 0, true, 0))
		{
			if (!unk_0x463E3A48A46C9195(unk_0xA19140A5C42D8715()))
			{
				unk_0xB67799D0765FBE46(unk_0xA19140A5C42D8715());
			}
		}
	}
	else if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2455.487f, 4997.566f, 43.1101f, 2423.653f, 4962.837f, 57.34888f, 14.4375f, 0, true, 0))
	{
		if (vVar0.z < 50f)
		{
			if ((unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2442.913f, 4965.273f, 50.15687f, 2444.49f, 4967.41f, 53.81783f, 1.6875f, 0, true, 0) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2445.239f, 4969.07f, 49.94284f, 2450.365f, 4972.188f, 54.03251f, 2.375f, 0, true, 0)) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2452.332f, 4971.817f, 49.94283f, 2457.977f, 4977.583f, 53.88097f, 2.375f, 0, true, 0))
			{
				if (!unk_0x463E3A48A46C9195(unk_0xA19140A5C42D8715()))
				{
					unk_0xB67799D0765FBE46(unk_0xA19140A5C42D8715());
				}
			}
		}
		else if ((unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2457.621f, 4978.462f, 49.94283f, 2453.932f, 4982.161f, 53.81783f, 2.375f, 0, true, 0) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2452.054f, 4984.156f, 49.94283f, 2448.12f, 4987.809f, 53.81316f, 2.375f, 0, true, 0)) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2442.014f, 4980.539f, 49.94283f, 2435.796f, 4971.945f, 53.90388f, 2.375f, 0, true, 0))
		{
			if (!unk_0x463E3A48A46C9195(unk_0xA19140A5C42D8715()))
			{
				unk_0xB67799D0765FBE46(unk_0xA19140A5C42D8715());
			}
		}
	}
}

void func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	if (Local_389[iParam0 /*4*/] != iParam1)
	{
		Local_389[iParam0 /*4*/].f_1 = 0;
		Local_389[iParam0 /*4*/] = iParam1;
	}
	if (!Local_389[iParam0 /*4*/].f_1)
	{
		if (func_152(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, 1, 0))
		{
			switch (Local_389[iParam0 /*4*/])
			{
				case 0:
					break;
				
				case 1:
					if (!unk_0xE06AA0996C4E4E03())
					{
						unk_0x7F2B4F315CAE087F(2f);
						Local_389[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 4:
					if (unk_0x9543DE82A55FFA0C(unk_0xD4E735F4B6A956AC()))
					{
						if (unk_0x0B9F814BC8D14042(0))
						{
							func_151("USESPEC_KM", -1);
						}
						else
						{
							func_151("USESPEC", -1);
						}
					}
					Local_389[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 3:
					switch (Local_389[iParam0 /*4*/].f_2)
					{
						case 0:
							func_151("FRMFLE", -1);
							Local_389[iParam0 /*4*/].f_1 = 1;
							break;
					}
					break;
				
				case 5:
					if (!func_59() && !unk_0x8187CC9EB2D7CFE6())
					{
						func_7("FRMLK", 7500, 1);
						Local_389[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 2:
					func_7("FRMSNP", 7500, 1);
					Local_389[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 11:
					switch (Local_389[iParam0 /*4*/].f_2)
					{
						case 0:
							if (unk_0x703A9347832E1FFA(unk_0xA19140A5C42D8715()))
							{
								Local_389[iParam0 /*4*/].f_3 = unk_0xFD34717937104F1C() + 1000;
								Local_389[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 1:
							if (unk_0xFD34717937104F1C() > Local_389[iParam0 /*4*/].f_3)
							{
								if (unk_0x0B9F814BC8D14042(0))
								{
									func_151("FRMSTLTH_KM", -1);
								}
								else
								{
									func_151("FRMSTLTH", -1);
								}
								Local_389[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 6:
					switch (Local_389[iParam0 /*4*/].f_2)
					{
						case 0:
							if (unk_0x3278E95F94254201(211) != 0)
							{
								Local_389[iParam0 /*4*/].f_3 = unk_0xFD34717937104F1C() + 4000;
								Local_389[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 1:
							if (unk_0xFD34717937104F1C() > Local_389[iParam0 /*4*/].f_3)
							{
								iVar0 = joaat("weapon_unarmed");
								unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iVar0, 1);
								if ((iVar0 != joaat("weapon_sniperrifle") && iVar0 != joaat("weapon_heavysniper")) && iVar0 != joaat("weapon_unarmed"))
								{
									if (!unk_0x8187CC9EB2D7CFE6() && !unk_0xE06AA0996C4E4E03())
									{
										if (!func_59())
										{
											if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
											{
												func_151("FRMSHOT", -1);
												Local_389[iParam0 /*4*/].f_1 = 1;
											}
										}
									}
								}
							}
							break;
					}
					break;
				
				case 7:
					func_7("FRMFLC", 7500, 1);
					unk_0xC4F12E446CCE89F5(iLocal_178, "FRMBLIPB");
					Local_389[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 8:
					switch (Local_389[iParam0 /*4*/].f_2)
					{
						case 0:
							func_151("FRMPET2", -1);
							Local_389[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (!func_59())
							{
								func_150("FRMTRL", 7500, 1);
								Local_389[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 2:
							iVar1 = joaat("weapon_unarmed");
							if (unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iVar1, 1))
							{
								if (iVar1 == joaat("weapon_petrolcan"))
								{
									if (unk_0xD73B1037F6BD4B90(0, 24))
									{
										unk_0x135C61E339DABBAC(1);
									}
								}
							}
							if (!unk_0xE06AA0996C4E4E03())
							{
								func_151("FRMTRL2", -1);
								Local_389[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 3:
							if (func_8())
							{
								if (!func_59())
								{
									if (unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) != 0)
									{
										if (!unk_0xCE3CB618AFE55EFB(iLocal_178))
										{
											unk_0x4F93066CECE72793();
											func_7("FRMSHP", 7500, 1);
											iLocal_178 = func_5(2454.895f, 4950.895f, 44.1488f, 0);
										}
									}
									else if (func_67(unk_0xA19140A5C42D8715(), 2454.895f, 4950.895f, 44.1488f, 1) < 5f)
									{
										unk_0x4F93066CECE72793();
										if (unk_0xCE3CB618AFE55EFB(iLocal_178))
										{
											unk_0xE1623437A3194332(&iLocal_178);
										}
										func_7("FRMIGN", 7500, 1);
										unk_0x8969D02DEDC106D2("CHI_2_SHOOT_GAS");
										Local_389[iParam0 /*4*/].f_2++;
									}
								}
							}
							break;
						
						case 4:
							if (func_87(37))
							{
								if (func_84("FRMIGN", 0, 0))
								{
									unk_0x4F93066CECE72793();
								}
							}
							if (unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) != 0)
							{
								Local_389[iParam0 /*4*/].f_2 = 3;
							}
							break;
					}
					break;
				
				case 9:
					func_151("FRMMISS", -1);
					Local_389[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 10:
					if (func_87(34))
					{
						func_7("FRMFRH", 7500, 1);
					}
					else
					{
						func_7("FRMFRG", 7500, 1);
					}
					Local_389[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 12:
					func_7("FRMLEAVE", 1, 1);
					if (func_87(48))
					{
						unk_0x4F93066CECE72793();
						Local_389[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 13:
					func_7("LOSE_WANTED", 7500, 1);
					break;
				}
			}
	}
}

void func_150(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xD291E4BC830D587A(sParam0);
	unk_0x1D594DA1FE749C88(iParam1, 1);
}

void func_151(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, true, iParam1);
}

int func_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bLocal_386 = false;
	iLocal_387 = 0;
	if (func_153(&bLocal_386, &iLocal_387, iParam0, iParam1))
	{
		if (func_153(&bLocal_386, &iLocal_387, iParam2, iParam3))
		{
			if (func_153(&bLocal_386, &iLocal_387, iParam4, iParam5))
			{
				if (func_153(&bLocal_386, &iLocal_387, iParam6, iParam7))
				{
				}
			}
		}
	}
	if (bLocal_386)
	{
		return 1;
	}
	return 0;
}

int func_153(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam2)
	{
		case 0:
			*iParam0 = 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			if (iParam3 == 0 || (iParam3 != 0 && func_87(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 3:
			if (iParam3 == 0 || (iParam3 != 0 && func_156(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 6:
			if (iParam3 == 0 || (iParam3 != 0 && func_87(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 8:
			if (*iParam0)
			{
				return 0;
			}
			else
			{
				*iParam1 = 1;
				if (iParam3 == 0 || (iParam3 != 0 && func_87(iParam3)))
				{
					*iParam0 = 1;
				}
			}
			break;
		
		case 4:
			if (iParam3 != 0 && func_156(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 5:
			if (iParam3 != 0 && func_87(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 7:
			if (func_155(iParam3))
			{
				if (func_156(iParam3))
				{
					*iParam0 = 1;
				}
				else
				{
					*iParam0 = 0;
				}
			}
			else
			{
				if (func_87(iParam3))
				{
					func_154(iParam3);
				}
				*iParam0 = 0;
			}
			break;
	}
	return 1;
}

void func_154(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_388[0 /*8*/]);
	if (Local_388[iVar0 /*8*/] == iParam0)
	{
		Local_388[iVar0 /*8*/].f_3 = 1;
	}
}

int func_155(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_388[0 /*8*/]);
	if (Local_388[iVar0 /*8*/] == iParam0)
	{
		if (Local_388[iVar0 /*8*/].f_3)
		{
			return 1;
		}
	}
	return 0;
}

int func_156(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_388[0 /*8*/]);
	if (iVar0 >= 0 && iVar0 < Local_388)
	{
		if (Local_388[iVar0 /*8*/] == iParam0)
		{
			if (!Local_388[iVar0 /*8*/].f_2)
			{
				return 1;
			}
		}
		else if (Local_388[iVar0 /*8*/] != 0)
		{
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_157(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	
	if (Local_390[iParam0 /*7*/] != iParam1)
	{
		Local_390[iParam0 /*7*/].f_1 = 0;
		Local_390[iParam0 /*7*/] = iParam1;
	}
	if (!Local_390[iParam0 /*7*/].f_1)
	{
		if (func_152(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9))
		{
			if (!Local_390[iParam0 /*7*/].f_2)
			{
				Local_390[iParam0 /*7*/].f_2 = 1;
			}
			switch (Local_390[iParam0 /*7*/])
			{
				case 0:
					break;
				
				case 1:
					if (func_35("TRV_WTF", 1, unk_0xA19140A5C42D8715(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 2:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_390[iParam0 /*7*/].f_4 = unk_0xFD34717937104F1C() + 2000;
							Local_390[iParam0 /*7*/].f_3++;
							break;
						
						case 1:
							if (unk_0xFD34717937104F1C() > Local_390[iParam0 /*7*/].f_4)
							{
								if (func_59())
								{
									Local_390[iParam0 /*7*/].f_4 = unk_0xFD34717937104F1C() + 2000;
								}
								else
								{
									iVar0 = 0;
									if (func_159(&iVar0, 2, 1))
									{
										if (func_35("RAGE", 1, unk_0xA19140A5C42D8715(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(8000, 14000));
										}
									}
									else
									{
										Local_390[iParam0 /*7*/].f_1 = 1;
									}
								}
							}
							break;
					}
					break;
				
				case 4:
					Local_390[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_390[iParam0 /*7*/].f_4 != -1)
					{
						if (!unk_0x4915F4759304D5CF(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("COOKSEE", 3, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILCOOK", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_390[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 3:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_390[iParam0 /*7*/].f_4 = func_18(15);
							Local_390[iParam0 /*7*/].f_5 = func_18(16);
							if (Local_390[iParam0 /*7*/].f_4 != -1 && Local_390[iParam0 /*7*/].f_5 != -1)
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 1:
							if (unk_0x4915F4759304D5CF(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_390[iParam0 /*7*/].f_4 = Local_390[iParam0 /*7*/].f_5;
								if (!unk_0x4915F4759304D5CF(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
								else
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 2:
							if (!unk_0x4915F4759304D5CF(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD8", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 3:
							if (!unk_0x4915F4759304D5CF(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD9", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 4:
							if (func_159(&iVar1, 2, 1))
							{
								if (iVar1 != Local_390[iParam0 /*7*/].f_4)
								{
									Local_390[iParam0 /*7*/].f_4 = iVar1;
									Local_390[iParam0 /*7*/].f_3++;
								}
								else
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 5:
							if (!unk_0x4915F4759304D5CF(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD10", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 5:
					Local_390[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_390[iParam0 /*7*/].f_4 != -1)
					{
						if (!unk_0x4915F4759304D5CF(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("ONEILGUARD11", 6, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_390[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 6:
					Local_390[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_390[iParam0 /*7*/].f_4 != -1)
					{
						if (!unk_0x4915F4759304D5CF(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("ONEILGUARD12", 6, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_390[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 7:
					if (func_35("CHI2_drive", 1, unk_0xA19140A5C42D8715(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 9:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (!unk_0x4915F4759304D5CF(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_390[iParam0 /*7*/].f_3 = unk_0x22C775856F4633CA(1, 3);
							}
							break;
						
						case 1:
							if (func_35("SEETREVOR", 3, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "CHIN2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 2:
							if (func_35("GOON2TREV", 4, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "CHIN2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 10:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (unk_0xFD34717937104F1C() > Local_390[iParam0 /*7*/].f_4)
							{
								if (func_159(&(Local_390[iParam0 /*7*/].f_5), 1, 1))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0x4915F4759304D5CF(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/]))
							{
								if (Local_390[iParam0 /*7*/].f_6 < 3)
								{
									if (func_35("ONEILGUARD5", 5, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_390[iParam0 /*7*/].f_4 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(7000, 12000));
										Local_390[iParam0 /*7*/].f_6++;
										Local_390[iParam0 /*7*/].f_3 = 0;
									}
								}
								else if (Local_390[iParam0 /*7*/].f_6 < 6)
								{
									if (func_35("ONEILGUARD6", 6, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_390[iParam0 /*7*/].f_4 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(7000, 12000));
										Local_390[iParam0 /*7*/].f_6++;
										Local_390[iParam0 /*7*/].f_3 = 0;
									}
								}
								else
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 11:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (unk_0xFD34717937104F1C() > Local_390[iParam0 /*7*/].f_4)
							{
								if (func_159(&(Local_390[iParam0 /*7*/].f_5), 1, 1))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0x4915F4759304D5CF(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/]))
							{
								switch (Local_390[iParam0 /*7*/].f_6)
								{
									case 0:
									case 2:
									case 5:
									case 9:
										if (func_35("COOKATT", 3, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "oneilcook", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(7000, 12000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 1:
									case 6:
									case 8:
									case 11:
										if (func_35("GOONATT", 3, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "chin2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(7000, 12000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 3:
									case 4:
									case 7:
									case 10:
										if (func_35("GOON2ATTO", 4, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(7000, 12000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 12:
										Local_390[iParam0 /*7*/].f_1 = 1;
										break;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 12:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (unk_0xFD34717937104F1C() > Local_390[iParam0 /*7*/].f_4)
							{
								if (func_159(&(Local_390[iParam0 /*7*/].f_5), 2, 1))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0x4915F4759304D5CF(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/]))
							{
								switch (Local_390[iParam0 /*7*/].f_6)
								{
									case 0:
									case 2:
									case 5:
									case 9:
										if (func_35("GOONIN", 3, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "chin2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(6000, 10000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 1:
									case 6:
									case 8:
									case 11:
										if (func_35("GOON2ATTI", 4, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(6000, 10000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 3:
									case 4:
									case 7:
									case 10:
										if (func_35("ATTACKIN", 3, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "ONEILCOOK", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(6000, 10000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 12:
										Local_390[iParam0 /*7*/].f_1 = 1;
										break;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 14:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							iVar2 = 0;
							while (iVar2 < Local_113)
							{
								if (Local_113[iVar2 /*33*/].f_1 == 2)
								{
									if (!unk_0x4915F4759304D5CF(Local_113[iVar2 /*33*/]))
									{
										if (unk_0x967743032563101F(Local_113[iVar2 /*33*/], 0))
										{
											if (unk_0xF0F84431A63BE10B(Local_113[iVar2 /*33*/], unk_0xA19140A5C42D8715()))
											{
												Local_390[iParam0 /*7*/].f_4 = iVar2;
												Local_390[iParam0 /*7*/].f_3++;
											}
										}
									}
								}
								iVar2++;
							}
							break;
						
						case 1:
							if (func_35("G2TREVIN", 4, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 15:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (!unk_0x4915F4759304D5CF(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD3", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0x4915F4759304D5CF(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD1", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 16:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (func_159(&(Local_390[iParam0 /*7*/].f_4), 1, 1))
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 1:
							if (func_35("ONEILGUARD7", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "oneilguard2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 2:
							if (func_35("CHI2_app", 1, unk_0xA19140A5C42D8715(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 17:
					if (func_35("CHI2_app", 1, unk_0xA19140A5C42D8715(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 19:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (func_82("ONEILGUARD4") || func_82("SEETREVOR"))
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 1:
							if (func_35("CHI2_HARD", 1, unk_0xA19140A5C42D8715(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 20:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (unk_0xFD34717937104F1C() > Local_390[iParam0 /*7*/].f_5)
							{
								fVar4 = 999f;
								Local_390[iParam0 /*7*/].f_4 = -1;
								iVar3 = 0;
								while (iVar3 < Local_113)
								{
									if (Local_113[iVar3 /*33*/].f_1 == 2)
									{
										if (!unk_0x4915F4759304D5CF(Local_113[iVar3 /*33*/]))
										{
											fVar5 = func_4(unk_0xA19140A5C42D8715(), Local_113[iVar3 /*33*/], 1);
											if (fVar5 < fVar4)
											{
												fVar4 = fVar5;
												Local_390[iParam0 /*7*/].f_4 = iVar3;
											}
										}
									}
									iVar3++;
								}
								if (Local_390[iParam0 /*7*/].f_4 == -1)
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
								else
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0x4915F4759304D5CF(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("CHI2_outs", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "Oneilguard1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_5 = unk_0xFD34717937104F1C() + 6000;
								Local_390[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 18:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							iVar6 = 0;
							while (iVar6 < Local_113)
							{
								if (Local_113[iVar6 /*33*/].f_2 == 8)
								{
									Local_390[iParam0 /*7*/].f_4 = iVar6;
								}
								if (Local_113[iVar6 /*33*/].f_2 == 9)
								{
									Local_390[iParam0 /*7*/].f_5 = iVar6;
								}
								iVar6++;
							}
							Local_390[iParam0 /*7*/].f_3++;
							break;
						
						case 1:
							if (!func_59())
							{
								if (unk_0xFE5DE0C3200E00F2(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_14))
								{
									if (unk_0x33CECDD9E141E18E(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_14) > 0.15f)
									{
										if (unk_0x33CECDD9E141E18E(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_14) < 0.65f)
										{
											if (func_4(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], unk_0xA19140A5C42D8715(), 1) < 30f)
											{
												Local_390[iParam0 /*7*/].f_3 = 3;
											}
										}
									}
								}
							}
							break;
						
						case 2:
							if (!unk_0x4915F4759304D5CF(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 1;
							}
							break;
						
						case 3:
							if (!unk_0x4915F4759304D5CF(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/]))
							{
								unk_0x85AF6DC3641E2442(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "generic_cheer", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
								Local_390[iParam0 /*7*/].f_3++;
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 1;
							}
							break;
						
						case 4:
							if (!unk_0x4915F4759304D5CF(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (unk_0xFE5DE0C3200E00F2(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_14))
								{
									if (unk_0x33CECDD9E141E18E(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_14) > 0.75f)
									{
										Local_390[iParam0 /*7*/].f_3 = 1;
									}
								}
							}
							break;
					}
					break;
				
				case 21:
					if (func_35("CHI2_find", 1, unk_0xA19140A5C42D8715(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						unk_0xE061C3261E51F663(5f, 8f, 4);
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 26:
					if (func_158())
					{
						if (func_35("CHI2_pourmis", 1, unk_0xA19140A5C42D8715(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
						{
							Local_390[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 27:
					if (func_35("CHI2_boom", 1, unk_0xA19140A5C42D8715(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 22:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_390[iParam0 /*7*/].f_4 = 2500;
							Local_390[iParam0 /*7*/].f_5 = 0;
							Local_390[iParam0 /*7*/].f_3 = 1;
							break;
						
						case 1:
							Local_390[iParam0 /*7*/].f_4 = (Local_390[iParam0 /*7*/].f_4 - floor((timestep() * 1000f)));
							if (Local_390[iParam0 /*7*/].f_4 <= 0)
							{
								Local_390[iParam0 /*7*/].f_3 = 2;
							}
							break;
						
						case 2:
							if (Local_390[iParam0 /*7*/].f_5 < 14)
							{
								if (func_35("CHI2_pour", 1, unk_0xA19140A5C42D8715(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_3 = 1;
									Local_390[iParam0 /*7*/].f_4 = (12000 + unk_0x22C775856F4633CA(3000, 5000));
									Local_390[iParam0 /*7*/].f_5++;
								}
							}
							break;
					}
					break;
				
				case 23:
					if (func_35("CHI2_light", 1, unk_0xA19140A5C42D8715(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 24:
					if (func_35("CHI2_boom", 1, unk_0xA19140A5C42D8715(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 25:
					if (func_35("CHI2_burn", 1, unk_0xA19140A5C42D8715(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				}
			}
	}
}

int func_158()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (Local_109[iVar0 /*5*/].f_4 == 1)
		{
			if (iVar2 == 0)
			{
				iVar2 = 1;
				iVar1++;
				if (iVar1 > 1)
				{
					return 1;
				}
			}
		}
		else if (iVar2 == 1)
		{
			iVar2 = 0;
		}
		iVar0++;
	}
	return 0;
}

int func_159(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 9999f;
	*iParam0 = -1;
	iVar0 = 0;
	while (iVar0 < Local_113)
	{
		if (Local_113[iVar0 /*33*/].f_1 == iParam1)
		{
			if (iParam2 == 0 || (iParam2 == 1 && !unk_0x4915F4759304D5CF(Local_113[iVar0 /*33*/])))
			{
				fVar1 = func_4(unk_0xA19140A5C42D8715(), Local_113[iVar0 /*33*/], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					*iParam0 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (*iParam0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_160(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
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
	
	if (Local_385[iParam0 /*10*/] != iParam1 || Local_385[iParam0 /*10*/].f_1 == 0)
	{
		Local_385[iParam0 /*10*/] = iParam1;
		Local_385[iParam0 /*10*/].f_1 = 1;
		Local_385[iParam0 /*10*/].f_3 = 0;
		Local_385[iParam0 /*10*/].f_6 = 0;
		Local_385[iParam0 /*10*/].f_4 = 0;
		Local_385[iParam0 /*10*/].f_7 = 0;
		Local_385[iParam0 /*10*/].f_8 = 0;
		Local_385[iParam0 /*10*/].f_9 = 0f;
	}
	if (Local_385[iParam0 /*10*/].f_2 && iParam2 == 0)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = func_152(iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
	}
	if (iParam2 == 1 && !bVar0)
	{
		Local_385[iParam0 /*10*/].f_2 = 0;
	}
	if (Local_385[iParam0 /*10*/].f_3 == 0 || Local_385[iParam0 /*10*/].f_6 == -1)
	{
		if (bVar0 == 1)
		{
			if (!Local_385[iParam0 /*10*/].f_2)
			{
				Local_385[iParam0 /*10*/].f_2 = 1;
			}
			switch (Local_385[iParam0 /*10*/])
			{
				case 1:
					break;
				
				case 2:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0x8969D02DEDC106D2("CHI_2_DRIVE_TO_FARMHOUSE");
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
							{
								unk_0x5AD7D03C214BDA88("CHI_2_DRIVE_TO_FARMHOUSE");
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 3:
					if (func_67(unk_0xA19140A5C42D8715(), 1991.05f, 3054.262f, 46.2147f, 1) > 250f)
					{
						if (unk_0xDC5D81351D6A4DDB(Local_113[11 /*33*/]))
						{
							unk_0x680F17660351F21B(&(Local_113[11 /*33*/]));
						}
						if (unk_0xDC5D81351D6A4DDB(Local_113[10 /*33*/]))
						{
							unk_0x680F17660351F21B(&(Local_113[10 /*33*/]));
						}
						if (unk_0xDC5D81351D6A4DDB(Local_113[12 /*33*/]))
						{
							unk_0x680F17660351F21B(&(Local_113[12 /*33*/]));
						}
						if (unk_0xDC5D81351D6A4DDB(Local_113[13 /*33*/]))
						{
							unk_0x680F17660351F21B(&(Local_113[13 /*33*/]));
						}
						if (unk_0xDC5D81351D6A4DDB(Local_113[14 /*33*/]))
						{
							unk_0x680F17660351F21B(&(Local_113[14 /*33*/]));
						}
						unk_0xA5DE74AE39867B03(joaat("ig_janet"));
						unk_0xA5DE74AE39867B03(joaat("ig_janet"));
						unk_0xA5DE74AE39867B03(joaat("ig_old_man1a"));
						unk_0xA5DE74AE39867B03(joaat("ig_old_man2"));
						unk_0xA5DE74AE39867B03(joaat("ig_taocheng"));
						unk_0xA5DE74AE39867B03(joaat("ig_taostranslator"));
						unk_0x4DC885EA8D6AF7FC("misschinese2_crystalmaze");
						unk_0x4DC885EA8D6AF7FC("MISSChinese2_crystalMazeMCS1_IG");
						unk_0x4DC885EA8D6AF7FC("missrampageintrooutro");
						if (iLocal_379 != -1)
						{
							if (unk_0xA4D0862CD5E60478(iLocal_379))
							{
								unk_0x308B3DBB8CA58E54(iLocal_379);
							}
						}
						unk_0xD9F4F897224699B4();
						func_31(26, 1);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 5:
					if (unk_0xBEB81D4750DEAFA3("CHI_2_FARMHOUSE_INTRO", "CHINESE2_FARMHOUSE_INTRODUCTION"))
					{
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 4:
					if (func_67(unk_0xA19140A5C42D8715(), 2457.49f, 4977.095f, 50.56783f, 1) < 400f)
					{
						func_32(27, 0);
						unk_0xF2DE32563C8C0849(1);
						unk_0x56C835FB478F652B(1);
						unk_0x683FDE830AD10502("chinese2_farmhouse_cutscene");
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 7:
					if ((!unk_0x4915F4759304D5CF(Local_113[12 /*33*/]) && !unk_0x4915F4759304D5CF(Local_113[13 /*33*/])) && !unk_0x4915F4759304D5CF(Local_113[14 /*33*/]))
					{
						if (func_169(6, 6) < 2)
						{
							if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 1981.257f, 3050.721f, 41.08995f, 1984.257f, 3055.543f, 49.47314f, 3.0625f, 0, true, 0))
							{
								if (unk_0xF9D4EF1338E38AFB(Local_113[12 /*33*/], 150319005) == 7)
								{
									unk_0x22DD1D053CFF9707(Local_113[13 /*33*/], unk_0xA19140A5C42D8715(), -1, 0, 2);
									unk_0x22DD1D053CFF9707(Local_113[14 /*33*/], unk_0xA19140A5C42D8715(), -1, 0, 2);
									unk_0x22DD1D053CFF9707(Local_113[12 /*33*/], unk_0xA19140A5C42D8715(), -1, 0, 2);
								}
							}
						}
					}
					break;
				
				case 8:
					fVar1 = func_67(unk_0xA19140A5C42D8715(), 2450.214f, 4979.208f, 60.8422f, 1);
					if (fVar1 < 900f)
					{
						if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
						{
							iVar4 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
							if (unk_0x1095F403F52B42E1(iVar4, 0))
							{
								if (unk_0x7C197233F79C2CB8(unk_0x8F474E419F56E48D(iVar4)) || unk_0xCA8C103FCD316F89(unk_0x8F474E419F56E48D(iVar4)))
								{
									fVar2 = (900f - fVar1);
									if (fVar2 < 0f)
									{
										fVar2 = 0f;
									}
									fVar2 = (fVar2 / 900f);
									fVar2 = (fVar2 * 10000f);
									fVar3 = unk_0xEAA5CEF8875FEEED(iVar4);
									fVar2 = (fVar2 * (fVar3 / 35f));
									if (fVar3 > 35f)
									{
										unk_0x237212ABD2DC57D3(iVar4, 1, 0f, -fVar2, 0f, 0, 1, 0, 0);
									}
								}
							}
						}
					}
					break;
				
				case 9:
					if (unk_0x411C28019DEA5CEF(unk_0xA19140A5C42D8715(), "missrampageintrooutro", "trvram_6_1h_run_outro", 3))
					{
						Local_385[iParam0 /*10*/].f_6 = 1;
						unk_0xB0D7019224A3A443(unk_0xA19140A5C42D8715(), 321, 1);
						if (unk_0xC621379C202E086C(unk_0xA19140A5C42D8715(), unk_0xFEB6EEC0545AF7AA("walkinterruptible")))
						{
							unk_0xF757C0D3A087F145(unk_0xA19140A5C42D8715(), -1871534317, 0, 0, 0);
							if (func_168())
							{
								unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
						}
					}
					else if (Local_385[iParam0 /*10*/].f_6 == 1)
					{
						unk_0x4DC885EA8D6AF7FC("missrampageintrooutro");
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 6:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							if ((!unk_0x4915F4759304D5CF(Local_113[12 /*33*/]) && !unk_0x4915F4759304D5CF(Local_113[13 /*33*/])) && !unk_0x4915F4759304D5CF(Local_113[14 /*33*/]))
							{
								unk_0xDFA901280292A2FB(Local_113[12 /*33*/], iLocal_154);
								unk_0xDFA901280292A2FB(Local_113[13 /*33*/], iLocal_154);
								unk_0xDFA901280292A2FB(Local_113[14 /*33*/], iLocal_154);
								unk_0x3B7A32E04BBE59A5(Local_113[12 /*33*/], 17, true);
								unk_0x3B7A32E04BBE59A5(Local_113[13 /*33*/], 17, true);
								unk_0x3B7A32E04BBE59A5(Local_113[14 /*33*/], 17, true);
								unk_0xDCB46BFC2265476A(Local_113[12 /*33*/]);
								unk_0xDCB46BFC2265476A(Local_113[13 /*33*/]);
								unk_0xDCB46BFC2265476A(Local_113[14 /*33*/]);
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if ((unk_0x4915F4759304D5CF(Local_113[12 /*33*/]) || unk_0x4915F4759304D5CF(Local_113[13 /*33*/])) || unk_0x4915F4759304D5CF(Local_113[14 /*33*/]))
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							if (!unk_0x4915F4759304D5CF(Local_113[12 /*33*/]))
							{
								if (unk_0x80C8B831B972D6A0(Local_113[12 /*33*/]))
								{
									Local_385[iParam0 /*10*/].f_6 = 2;
								}
							}
							if (!unk_0x4915F4759304D5CF(Local_113[13 /*33*/]))
							{
								if (unk_0x80C8B831B972D6A0(Local_113[13 /*33*/]))
								{
									Local_385[iParam0 /*10*/].f_6 = 2;
								}
							}
							if (!unk_0x4915F4759304D5CF(Local_113[14 /*33*/]))
							{
								if (unk_0x80C8B831B972D6A0(Local_113[14 /*33*/]))
								{
									Local_385[iParam0 /*10*/].f_6 = 2;
								}
							}
							break;
						
						case 2:
							if (!unk_0x4915F4759304D5CF(Local_113[12 /*33*/]))
							{
								unk_0x33B5487515BD13D5(Local_113[12 /*33*/], unk_0xA19140A5C42D8715(), 100f, -1, 0, 0);
								unk_0xD738221C247C8B71(Local_113[12 /*33*/], true);
								unk_0x7E4E83D33161D01A(&(Local_113[12 /*33*/]));
							}
							if (!unk_0x4915F4759304D5CF(Local_113[13 /*33*/]))
							{
								unk_0x33B5487515BD13D5(Local_113[13 /*33*/], unk_0xA19140A5C42D8715(), 100f, -1, 0, 0);
								unk_0xD738221C247C8B71(Local_113[13 /*33*/], true);
								unk_0x7E4E83D33161D01A(&(Local_113[13 /*33*/]));
							}
							if (!unk_0x4915F4759304D5CF(Local_113[14 /*33*/]))
							{
								unk_0x33B5487515BD13D5(Local_113[14 /*33*/], unk_0xA19140A5C42D8715(), 100f, -1, 0, 0);
								unk_0xD738221C247C8B71(Local_113[14 /*33*/], true);
								unk_0x7E4E83D33161D01A(&(Local_113[14 /*33*/]));
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 10:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0x683FDE830AD10502("chinese2_explosion_cutscene");
							unk_0x19A6703D21831D53();
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (iLocal_166 == 1)
							{
								if (unk_0xBEB81D4750DEAFA3("CHINESE2_FARMHOUSE_EXPLOSION_MOLOTOV_MASTER", 0))
								{
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							if (iLocal_166 == 2)
							{
								if (unk_0xBEB81D4750DEAFA3("CHINESE2_FARMHOUSE_EXPLOSION_STICKY_BOMB_MASTER", 0))
								{
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							if (iLocal_166 == 3)
							{
								if (unk_0xBEB81D4750DEAFA3("CHINESE2_FARMHOUSE_EXPLOSION_SHOOT_GASOLINE_MASTER", 0))
								{
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							if (unk_0xCB79242F310A5BB2())
							{
								Local_385[iParam0 /*10*/].f_6 = 10;
							}
							break;
					}
					break;
				
				case 11:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 1:
							if (unk_0xFD34717937104F1C() > Local_385[iParam0 /*10*/].f_7)
							{
								if (unk_0x893915B076B1DDF7(unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715())))
								{
									unk_0x2033075E51297032(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) + Vector(0f, unk_0xF59B9063EDAC7451(0f, 4f), unk_0xF59B9063EDAC7451(0f, 4f)), 16, 1.5f, 1, 0, 1f, 0);
									Local_385[iParam0 /*10*/].f_9 = (Local_385[iParam0 /*10*/].f_9 - 1f);
									Local_385[iParam0 /*10*/].f_7 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(250, 520));
								}
								else
								{
									Local_385[iParam0 /*10*/].f_6 = 2;
								}
							}
							break;
						
						case 2:
							break;
						
						default:
							iVar5 = 0;
							while (iVar5 < vLocal_384.x)
							{
								if (!unk_0x05EFB6A616B6FADE(Local_385[iParam0 /*10*/].f_7, iVar5))
								{
									if (unk_0x6D7FFF527E125F24(-1, vLocal_384[iVar5 /*3*/], 5f))
									{
										unk_0x2BCFB39E86340DAA(&(Local_385[iParam0 /*10*/].f_7), iVar5);
										if (Local_385[iParam0 /*10*/].f_6 == 0)
										{
											Local_385[iParam0 /*10*/].f_6 = unk_0xFD34717937104F1C() + 1500;
										}
									}
								}
								iVar5++;
							}
							if (unk_0xFD34717937104F1C() > Local_385[iParam0 /*10*/].f_8)
							{
								Local_385[iParam0 /*10*/].f_8 = 0;
								iVar5 = 0;
								while (iVar5 < vLocal_384.x)
								{
									if (!unk_0x05EFB6A616B6FADE(Local_385[iParam0 /*10*/].f_7, iVar5 + 9) && unk_0x05EFB6A616B6FADE(Local_385[iParam0 /*10*/].f_7, iVar5))
									{
										unk_0x2033075E51297032(vLocal_384[iVar5 /*3*/], 16, 1.5f, 1, 0, 1f, 0);
										unk_0x2BCFB39E86340DAA(&(Local_385[iParam0 /*10*/].f_7), iVar5 + 9);
										iVar5 = 8;
										Local_385[iParam0 /*10*/].f_8 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(150, 320));
									}
									iVar5++;
								}
							}
							if (Local_385[iParam0 /*10*/].f_6 != 0)
							{
								if (unk_0xFD34717937104F1C() > Local_385[iParam0 /*10*/].f_6)
								{
									Local_385[iParam0 /*10*/].f_6 = 1;
									Local_385[iParam0 /*10*/].f_7 = unk_0xFD34717937104F1C() + 300;
									Local_385[iParam0 /*10*/].f_9 = 16f;
								}
							}
							break;
					}
					break;
				
				case 12:
					iVar6 = func_18(8);
					iVar7 = func_18(9);
					func_99(iVar6, 20, 0, 0);
					func_99(iVar7, 20, 0, 0);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 42:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0x2F9A8AC00D96C810("RADIO_01_CLASS_ROCK");
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
							{
								if (unk_0x84316367370E4311())
								{
									iLocal_144 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
									if (unk_0x1095F403F52B42E1(iLocal_144, 0))
									{
										if (!unk_0x42230CB5B84CC08B(iLocal_144))
										{
											Local_385[iParam0 /*10*/].f_6++;
										}
									}
								}
							}
							break;
						
						case 2:
							if (unk_0x7B5129A25EE58E36("CHN2_TREV_RADIO_1_FRTA"))
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
							break;
						
						case 3:
							if (unk_0x9444470D6D9ADB88("CHN2_TREV_RADIO_1_FRTA"))
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 4:
							if (func_68(iLocal_144))
							{
								if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_144, 0))
								{
									if (unk_0x42230CB5B84CC08B(iLocal_144))
									{
										Local_385[iParam0 /*10*/].f_7 = (Local_385[iParam0 /*10*/].f_7 + unk_0xFD34717937104F1C() + 7000);
										Local_385[iParam0 /*10*/].f_6++;
									}
								}
							}
							break;
						
						case 5:
							if (func_68(iLocal_144))
							{
								if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_144, 0))
								{
									if (unk_0xFD34717937104F1C() > Local_385[iParam0 /*10*/].f_7)
									{
										if (unk_0xF4CB7412E80A8AD0() != 6 && unk_0xF4CB7412E80A8AD0() != 0)
										{
											if (unk_0xDF393D044C5AD99D() != 0)
											{
												if (func_35("CHI2_rad", 1, unk_0xA19140A5C42D8715(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_385[iParam0 /*10*/].f_6++;
												}
											}
											else
											{
												Local_385[iParam0 /*10*/].f_6++;
											}
										}
										else
										{
											Local_385[iParam0 /*10*/].f_7 = unk_0xFD34717937104F1C() + 5000;
										}
									}
								}
							}
							break;
						
						case 6:
							if (func_82("CHI2_rad"))
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 7:
							if (!func_82("CHI2_rad"))
							{
								if (func_68(iLocal_144))
								{
									if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_144, 0))
									{
										if (!unk_0xD73B1037F6BD4B90(0, 85))
										{
											if (unk_0xF4CB7412E80A8AD0() != 6)
											{
												if (iLocal_177 == -1)
												{
													iLocal_177 = unk_0x7A3ECD08D6D1D554();
													unk_0xE11F00B4AC919F45(iLocal_177, "Change_Station_Loud", "Radio_Soundset", 1);
													Local_385[iParam0 /*10*/].f_6++;
												}
											}
											else
											{
												Local_385[iParam0 /*10*/].f_6 = 9;
											}
										}
									}
								}
							}
							break;
						
						case 8:
							if (!unk_0xD73B1037F6BD4B90(0, 85))
							{
								if (unk_0x9444470D6D9ADB88("CHN2_TREV_RADIO_2_FRTA"))
								{
									unk_0x8969D02DEDC106D2("CHI_2_DRIVE_ROCK_RADIO");
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 9:
							if (func_68(iLocal_144))
							{
								if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_144, 0))
								{
									if (unk_0xF4CB7412E80A8AD0() == 6)
									{
										if (unk_0xDF393D044C5AD99D() != 0)
										{
											if (func_35("CHI2_radb", 1, unk_0xA19140A5C42D8715(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_385[iParam0 /*10*/].f_6++;
											}
										}
										else
										{
											Local_385[iParam0 /*10*/].f_6++;
										}
									}
								}
							}
							break;
					}
					break;
				
				case 48:
					func_31(9, 1);
					unk_0xBF6EED5D6E0CD9BF(1f);
					unk_0xF10B3BC4F73177E5(unk_0xD4E735F4B6A956AC(), 2, 0);
					unk_0xDF341226C0B8BAC3(unk_0xD4E735F4B6A956AC(), 0);
					unk_0x9BB7BCDF2AC2D6F9(5);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 49:
					if (!func_90(2448.25f, 4974.92f, 55.11f, 20f, 500f) || func_87(49))
					{
						if (iLocal_179 != 0)
						{
							unk_0xAFDE4F43F150FE9E(iLocal_179);
						}
						iLocal_179 = 0;
						func_19(50, 2, 0, 1, 0);
						func_19(51, 2, 0, 1, 0);
						func_19(52, 2, 0, 1, 0);
						func_19(53, 2, 0, 1, 0);
						func_19(54, 1, 0, 1, 0);
						func_19(55, 1, 0, 1, 0);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 50:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							if (unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), joaat("weapon_petrolcan"), 0))
							{
								Local_385[iParam0 /*10*/].f_7 = unk_0x8F62F4EC66847EC2(unk_0xA19140A5C42D8715(), joaat("weapon_petrolcan"));
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), joaat("weapon_petrolcan"), 0))
							{
								iVar8 = unk_0x8F62F4EC66847EC2(unk_0xA19140A5C42D8715(), joaat("weapon_petrolcan"));
								if (iVar8 > Local_385[iParam0 /*10*/].f_7)
								{
									Local_385[iParam0 /*10*/].f_7 = iVar8;
								}
								else if (iVar8 < Local_385[iParam0 /*10*/].f_7)
								{
									func_9(158, (Local_385[iParam0 /*10*/].f_7 - iVar8), 0);
									Local_385[iParam0 /*10*/].f_7 = iVar8;
								}
							}
							if (unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iVar9, 1))
							{
								if (iVar9 == joaat("weapon_petrolcan"))
								{
									if (unk_0xD73B1037F6BD4B90(0, 24))
									{
										if (Local_385[iParam0 /*10*/].f_8 == 0)
										{
											func_10(157, 0);
											Local_385[iParam0 /*10*/].f_8 = 1;
										}
									}
									else if (Local_385[iParam0 /*10*/].f_8 == 1)
									{
										func_11(0, 157);
										Local_385[iParam0 /*10*/].f_8 = 0;
									}
								}
								else if (Local_385[iParam0 /*10*/].f_8 == 1)
								{
									func_11(0, 157);
									Local_385[iParam0 /*10*/].f_8 = 0;
								}
							}
							else if (Local_385[iParam0 /*10*/].f_8 == 1)
							{
								func_11(0, 157);
								Local_385[iParam0 /*10*/].f_8 = 0;
							}
							break;
					}
					break;
				
				case 51:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_385[iParam0 /*10*/].f_7 = -1;
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iVar10, 1))
							{
								if (iVar10 == joaat("weapon_petrolcan"))
								{
									if (unk_0xD73B1037F6BD4B90(0, 24))
									{
										if (Local_385[iParam0 /*10*/].f_7 == -1)
										{
											Local_385[iParam0 /*10*/].f_7 = unk_0x8F62F4EC66847EC2(unk_0xA19140A5C42D8715(), joaat("weapon_petrolcan"));
										}
										if (iLocal_93 == 0)
										{
											Local_385[iParam0 /*10*/].f_9 = (Local_385[iParam0 /*10*/].f_9 + (timestep() * 2f));
										}
										else if (iLocal_93 < 30 && Local_385[iParam0 /*10*/].f_9 < 70f)
										{
											Local_385[iParam0 /*10*/].f_9 = (Local_385[iParam0 /*10*/].f_9 + (timestep() * 1.5f));
										}
										else
										{
											Local_385[iParam0 /*10*/].f_9 = (Local_385[iParam0 /*10*/].f_9 + timestep());
										}
										iVar11 = floor((IntToFloat(Local_385[iParam0 /*10*/].f_7) * (1f - (Local_385[iParam0 /*10*/].f_9 / 90f))));
										if (iVar11 > 0)
										{
											unk_0x368DD2AEABF7CF44(unk_0xA19140A5C42D8715(), iVar10, iVar11, 0);
										}
										else
										{
											unk_0x368DD2AEABF7CF44(unk_0xA19140A5C42D8715(), iVar10, 0, 0);
										}
									}
								}
							}
							break;
					}
					break;
				
				case 52:
					func_15("CHN2_STOP_TRACK", 0, func_167());
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 53:
					unk_0x4070C7CD522C11C5("AZL_CHN2_METH_LAB_FARM_FIRE", 1, 1);
					func_166(1);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 54:
					func_166(0);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 55:
					unk_0xF2DE32563C8C0849(3);
					unk_0x56C835FB478F652B(3);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 56:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							if (unk_0xDC5D81351D6A4DDB(Local_113[4 /*33*/].f_20))
							{
								unk_0xAA1FF14A8DC5C352(&(Local_113[4 /*33*/].f_20));
							}
							if (unk_0xDC5D81351D6A4DDB(Local_113[5 /*33*/].f_20))
							{
								unk_0xAA1FF14A8DC5C352(&(Local_113[5 /*33*/].f_20));
							}
							iVar12 = 0;
							while (iVar12 < iLocal_170)
							{
								if (unk_0xDC5D81351D6A4DDB(iLocal_170[iVar12]))
								{
									unk_0xAA1FF14A8DC5C352(&(iLocal_170[iVar12]));
								}
								iVar12++;
							}
							unk_0xA5DE74AE39867B03(joaat("prop_cs_beer_bot_01"));
							unk_0xA5DE74AE39867B03(joaat("prop_ld_can_01"));
							unk_0xA5DE74AE39867B03(joaat("prop_cs_fertilizer"));
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0x4915F4759304D5CF(Local_113[23 /*33*/]))
							{
								if (unk_0xDC5D81351D6A4DDB(iLocal_373))
								{
									unk_0xAA1FF14A8DC5C352(&iLocal_373);
									unk_0xA09839556BE19A0B(joaat("weapon_sawnoffshotgun"));
									Local_385[iParam0 /*10*/].f_3 = 1;
								}
							}
							break;
					}
					break;
				
				case 47:
					if (!unk_0x4915F4759304D5CF(Local_113[11 /*33*/]))
					{
						if (!unk_0xF59ACE94F067B46D(Local_113[11 /*33*/]))
						{
							if (unk_0xFD34717937104F1C() > Local_385[iParam0 /*10*/].f_7)
							{
								if (!unk_0x4915F4759304D5CF(Local_113[11 /*33*/]))
								{
									unk_0x85AF6DC3641E2442(Local_113[11 /*33*/], "WHIMPER", "WAVELOAD_PAIN_MALE", "SPEECH_PARAMS_FORCE_NORMAL", 0);
									Local_385[iParam0 /*10*/].f_7 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(3500, 5000));
								}
							}
						}
					}
					break;
				
				case 41:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0xCACEBBBEAD8F262E(joaat("ig_taocheng"));
							unk_0xCACEBBBEAD8F262E(joaat("ig_taostranslator"));
							unk_0x6D68030C791111E0("misschinese2_crystalmaze");
							if (iLocal_379 == -1 || (iLocal_379 != -1 && !unk_0xA4D0862CD5E60478(iLocal_379)))
							{
								iLocal_379 = unk_0xFAFCEBFB311E0625(1991.081f, 3054.517f, 46.71474f, 4f, 4f, 4f, 0f, 0, 3);
							}
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if ((unk_0x39C2D9AB77873F84("misschinese2_crystalmaze") && unk_0x7FC99CCC73354033(joaat("ig_taocheng"))) && unk_0x7FC99CCC73354033(joaat("ig_taostranslator")))
							{
								if (!unk_0xDC5D81351D6A4DDB(Local_113[11 /*33*/]))
								{
									Local_113[11 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("ig_taocheng"), 1991.988f, 3054.51f, 46.215f, 0f, 1, true);
									unk_0xDFA901280292A2FB(Local_113[11 /*33*/], iLocal_118);
									unk_0x96BFF0680C7B6FD5(Local_113[11 /*33*/], false);
								}
								else if (!unk_0x4915F4759304D5CF(Local_113[11 /*33*/]))
								{
									unk_0xDFA901280292A2FB(Local_113[11 /*33*/], iLocal_118);
									unk_0x96BFF0680C7B6FD5(Local_113[11 /*33*/], false);
								}
								if (!unk_0xDC5D81351D6A4DDB(Local_113[10 /*33*/]))
								{
									Local_113[10 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("ig_taostranslator"), 1991.988f, 3054.51f, 46.215f, 0f, 1, true);
									unk_0xDFA901280292A2FB(Local_113[10 /*33*/], iLocal_118);
									unk_0x96BFF0680C7B6FD5(Local_113[10 /*33*/], false);
									unk_0x73774776D23F43BA(Local_113[10 /*33*/], 1, 0, 1, false);
								}
								else if (!unk_0x4915F4759304D5CF(Local_113[10 /*33*/]))
								{
									unk_0xDFA901280292A2FB(Local_113[10 /*33*/], iLocal_118);
									unk_0x96BFF0680C7B6FD5(Local_113[10 /*33*/], false);
								}
								if (!unk_0x4915F4759304D5CF(Local_113[11 /*33*/]))
								{
									if (!unk_0xFE5DE0C3200E00F2(Local_385[iParam0 /*10*/].f_7))
									{
										Local_385[iParam0 /*10*/].f_7 = unk_0x70788DC3D80C9DEB(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
										unk_0x52CEAE2B7DAC257E(Local_385[iParam0 /*10*/].f_7, 1);
									}
									unk_0xE5565DEAABF9D588(Local_113[11 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
								}
								if (!unk_0x4915F4759304D5CF(Local_113[10 /*33*/]))
								{
									if (!unk_0xFE5DE0C3200E00F2(Local_385[iParam0 /*10*/].f_7))
									{
										Local_385[iParam0 /*10*/].f_7 = unk_0x70788DC3D80C9DEB(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
										unk_0x52CEAE2B7DAC257E(Local_385[iParam0 /*10*/].f_7, 1);
									}
									unk_0xE5565DEAABF9D588(Local_113[10 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
								}
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 2:
							if (!unk_0x4915F4759304D5CF(Local_113[10 /*33*/]) && !unk_0x4915F4759304D5CF(Local_113[11 /*33*/]))
							{
								unk_0x72A0FF8C49CFFC0D(Local_113[10 /*33*/], 0, 0, 0, 0);
								unk_0x1F4E5EFBFE503FB3(Local_113[11 /*33*/], 1);
								unk_0x1F4E5EFBFE503FB3(Local_113[10 /*33*/], 1);
								if (!unk_0xFE5DE0C3200E00F2(Local_385[iParam0 /*10*/].f_7))
								{
									Local_385[iParam0 /*10*/].f_7 = unk_0x70788DC3D80C9DEB(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
									unk_0xE5565DEAABF9D588(Local_113[11 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
									unk_0xE5565DEAABF9D588(Local_113[10 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
									unk_0x52CEAE2B7DAC257E(Local_385[iParam0 /*10*/].f_7, 1);
								}
								unk_0x13E0A8160525AE55(Local_113[11 /*33*/], 118, false);
								unk_0x13E0A8160525AE55(Local_113[11 /*33*/], 208, true);
								unk_0x13E0A8160525AE55(Local_113[10 /*33*/], 118, false);
								unk_0x13E0A8160525AE55(Local_113[10 /*33*/], 208, true);
								Local_385[iParam0 /*10*/].f_6 = 900;
							}
							break;
						
						case 900:
							if (!unk_0x4915F4759304D5CF(Local_113[11 /*33*/]))
							{
								if (!unk_0x685AE6AF34B35D3B(Local_113[11 /*33*/]))
								{
									if (unk_0xFE5DE0C3200E00F2(Local_385[iParam0 /*10*/].f_7))
									{
										if (unk_0x33CECDD9E141E18E(Local_385[iParam0 /*10*/].f_7) == 1f)
										{
											Local_385[iParam0 /*10*/].f_7 = unk_0x70788DC3D80C9DEB(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
											unk_0x52CEAE2B7DAC257E(Local_385[iParam0 /*10*/].f_7, 1);
											if (unk_0x22C775856F4633CA(0, 3) < 2)
											{
												unk_0xE5565DEAABF9D588(Local_113[11 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_Base_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
												if (!unk_0x4915F4759304D5CF(Local_113[10 /*33*/]))
												{
													if (!unk_0x685AE6AF34B35D3B(Local_113[10 /*33*/]))
													{
														if (!unk_0x05EFB6A616B6FADE(Local_385[iParam0 /*10*/].f_8, 0))
														{
															unk_0xE5565DEAABF9D588(Local_113[10 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_Base_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
														}
													}
												}
											}
											else
											{
												unk_0xE5565DEAABF9D588(Local_113[11 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
												if (!unk_0x4915F4759304D5CF(Local_113[10 /*33*/]))
												{
													if (!unk_0x685AE6AF34B35D3B(Local_113[10 /*33*/]))
													{
														if (!unk_0x05EFB6A616B6FADE(Local_385[iParam0 /*10*/].f_8, 0))
														{
															unk_0xE5565DEAABF9D588(Local_113[10 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
														}
													}
												}
											}
										}
									}
									else
									{
										Local_385[iParam0 /*10*/].f_7 = unk_0x70788DC3D80C9DEB(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
										unk_0xE5565DEAABF9D588(Local_113[11 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
										unk_0x52CEAE2B7DAC257E(Local_385[iParam0 /*10*/].f_7, 1);
									}
								}
							}
							if (!unk_0x4915F4759304D5CF(Local_113[10 /*33*/]))
							{
								if (((unk_0xDEAEC99031DCB92A(Local_113[10 /*33*/], unk_0xA19140A5C42D8715(), 1) || unk_0x685AE6AF34B35D3B(Local_113[10 /*33*/])) || unk_0x4915F4759304D5CF(Local_113[11 /*33*/])) || (!unk_0x4915F4759304D5CF(Local_113[10 /*33*/]) && unk_0xF9D4EF1338E38AFB(Local_113[10 /*33*/], 1785177548) == 2))
								{
									if (!unk_0x05EFB6A616B6FADE(Local_385[iParam0 /*10*/].f_8, 0))
									{
										unk_0x9568B1B58F78FF36(Local_113[10 /*33*/]);
										func_93();
										unk_0x33B5487515BD13D5(0, unk_0xA19140A5C42D8715(), 30f, 20000, 0, 0);
										unk_0xCE889E9ADEDDE843(0, -1);
										func_92(&(Local_113[10 /*33*/]), 0);
										unk_0x2BCFB39E86340DAA(&(Local_385[iParam0 /*10*/].f_8), 0);
									}
								}
							}
							if (!unk_0x4915F4759304D5CF(Local_113[11 /*33*/]))
							{
								if (((unk_0xDEAEC99031DCB92A(Local_113[11 /*33*/], unk_0xA19140A5C42D8715(), 1) || unk_0x685AE6AF34B35D3B(Local_113[11 /*33*/])) || unk_0x05EFB6A616B6FADE(Local_385[iParam0 /*10*/].f_8, 1)) || (!unk_0x4915F4759304D5CF(Local_113[11 /*33*/]) && unk_0xF9D4EF1338E38AFB(Local_113[11 /*33*/], 1785177548) == 2))
								{
									unk_0x6259CDB47862A4F3(Local_113[11 /*33*/], 0, 0);
									if (!unk_0x685AE6AF34B35D3B(Local_113[11 /*33*/]))
									{
									}
								}
							}
							if (func_67(unk_0xA19140A5C42D8715(), 1991.988f, 3054.51f, 46.215f, 1) > 200f)
							{
								if (unk_0xDC5D81351D6A4DDB(Local_113[11 /*33*/]) && unk_0xDC5D81351D6A4DDB(Local_113[10 /*33*/]))
								{
									unk_0x680F17660351F21B(&(Local_113[11 /*33*/]));
									unk_0x680F17660351F21B(&(Local_113[10 /*33*/]));
								}
								unk_0xA5DE74AE39867B03(joaat("ig_taocheng"));
								unk_0xA5DE74AE39867B03(joaat("ig_taostranslator"));
								unk_0x4DC885EA8D6AF7FC("misschinese2_crystalmaze");
								if (iLocal_379 != -1)
								{
									if (unk_0xA4D0862CD5E60478(iLocal_379))
									{
										unk_0x308B3DBB8CA58E54(iLocal_379);
									}
								}
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					if (func_67(unk_0xA19140A5C42D8715(), 1995.169f, 3062.162f, 46.049f, 1) < 7f)
					{
						if (!unk_0x4915F4759304D5CF(Local_113[11 /*33*/]))
						{
							if (unk_0xF9D4EF1338E38AFB(Local_113[11 /*33*/], 150319005) != 1)
							{
								unk_0x22DD1D053CFF9707(Local_113[11 /*33*/], unk_0xA19140A5C42D8715(), 4000, 2096, 2);
							}
						}
						if (!unk_0x4915F4759304D5CF(Local_113[10 /*33*/]))
						{
							if (unk_0xF9D4EF1338E38AFB(Local_113[10 /*33*/], 150319005) != 1)
							{
								unk_0x22DD1D053CFF9707(Local_113[10 /*33*/], unk_0xA19140A5C42D8715(), 4000, 2096, 2);
							}
						}
					}
					break;
				
				case 13:
					iVar13 = 0;
					iLocal_382 = 0;
					iVar13 = 0;
					while (iVar13 < Local_113)
					{
						if (unk_0xDC5D81351D6A4DDB(Local_113[iVar13 /*33*/]))
						{
							if (unk_0x4915F4759304D5CF(Local_113[iVar13 /*33*/]))
							{
								if (Local_113[iVar13 /*33*/].f_21 == 0)
								{
									if (((unk_0x80391399CAD5BAD3(Local_113[iVar13 /*33*/]) == 392730790 || unk_0x80391399CAD5BAD3(Local_113[iVar13 /*33*/]) == joaat("weapon_heavysniper")) || unk_0x80391399CAD5BAD3(Local_113[iVar13 /*33*/]) == joaat("weapon_remotesniper")) || unk_0x80391399CAD5BAD3(Local_113[iVar13 /*33*/]) == joaat("weapon_sniperrifle"))
									{
										iLocal_382++;
									}
									Local_113[iVar13 /*33*/].f_21 = 1;
								}
							}
						}
						iVar13++;
					}
					if (iLocal_382 > 0)
					{
					}
					if (iLocal_382 > 1)
					{
						func_165(150);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 14:
					func_15("CHN2_SNIPE_START", 0, "CHN2_EXPLODE");
					unk_0xE061C3261E51F663(4f, 15f, 4);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 15:
					if (func_87(9))
					{
						func_15("CHN2_SPOTTED", 0, "CHN2_EXPLODE");
					}
					else
					{
						func_15("CHN2_TO_HOUSE", 0, "CHN2_EXPLODE");
					}
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 16:
					if (unk_0xF93654E07E20E3CF(uLocal_176))
					{
						unk_0xBCFB7F2BD32812C6(uLocal_176);
					}
					iVar14 = 0;
					unk_0x2BCFB39E86340DAA(&iVar14, 3);
					unk_0x2BCFB39E86340DAA(&iVar14, 8);
					unk_0x2BCFB39E86340DAA(&iVar14, 1);
					if (!unk_0xF93654E07E20E3CF(uLocal_176))
					{
						uLocal_176 = unk_0xCFD2D70854568658(joaat("pickup_weapon_petrolcan"), 2436.775f, 4967.487f, 41.4f, iVar14, -1, 1, 0);
						unk_0xE391E726EE1618FD(uLocal_176, "V_8_BasementRm");
						iLocal_178 = func_164(uLocal_176);
						unk_0xC4F12E446CCE89F5(iLocal_178, "FRMBLIP");
					}
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 17:
					if (!func_30(5))
					{
						func_166(1);
						unk_0x8969D02DEDC106D2("CHI_2_SHOOTOUT_STEALTH");
						unk_0x90E641761C692B84(1);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 19:
					unk_0x4DC885EA8D6AF7FC("misschinese2_barrelRoll");
					unk_0xD37292AE1958B4F3("move_m@gangster@var_e");
					unk_0xD37292AE1958B4F3("move_m@gangster@var_f");
					unk_0xD37292AE1958B4F3("move_m@gangster@generic");
					unk_0x4DC885EA8D6AF7FC("misschinese2_bank5");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 20:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_385[iParam0 /*10*/].f_7 = unk_0xFD34717937104F1C() + 4000;
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0xFD34717937104F1C() > Local_385[iParam0 /*10*/].f_7)
							{
								Local_385[iParam0 /*10*/].f_7 = 0;
								while (Local_385[iParam0 /*10*/].f_7 < Local_113)
								{
									if (!unk_0x4915F4759304D5CF(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
									{
										if (unk_0xDA3A4E46D189F555(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]) == 0)
										{
											Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/].f_1 = 5;
											Local_119[Local_385[iParam0 /*10*/].f_7 /*24*/].f_3 = 7;
											Local_119[Local_385[iParam0 /*10*/].f_7 /*24*/].f_4 = 0;
											Local_119[Local_385[iParam0 /*10*/].f_7 /*24*/].f_5 = 0;
											func_99(Local_385[iParam0 /*10*/].f_7, 27, 0, 0);
											unk_0xDFA901280292A2FB(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], iLocal_117);
											func_128(&(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/].f_25));
										}
									}
									Local_385[iParam0 /*10*/].f_7++;
								}
							}
							break;
					}
					break;
				
				case 21:
					Local_385[iParam0 /*10*/].f_7 = 0;
					while (Local_385[iParam0 /*10*/].f_7 < Local_113)
					{
						if (!unk_0x4915F4759304D5CF(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
						{
							if (unk_0x54F6F5A823224519(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 2457.885f, 4981.169f, 50.00518f, 2441.58f, 4965.088f, 56.24006f, 34.3125f, 0, true, 0))
							{
								unk_0x680F17660351F21B(&(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]));
							}
						}
						Local_385[iParam0 /*10*/].f_7++;
					}
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 22:
					func_15("CHN2_ENTER_HOUSE", 0, "CHN2_EXPLODE");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 23:
					iVar15 = 0;
					while (iVar15 < Local_113)
					{
						if (!unk_0x4915F4759304D5CF(Local_113[iVar15 /*33*/]))
						{
							if (unk_0x2BDB423A5E45639B(Local_113[iVar15 /*33*/]) != unk_0xFEB6EEC0545AF7AA("V_8_BasementRm"))
							{
								func_99(iVar15, 27, 0, 0);
								Local_113[iVar15 /*33*/].f_1 = 5;
								Local_119[iVar15 /*24*/].f_3 = 7;
								Local_113[iVar15 /*33*/].f_5 = 0;
							}
						}
						iVar15++;
					}
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 24:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_385[iParam0 /*10*/].f_7 = func_18(10);
							if (Local_385[iParam0 /*10*/].f_7 != -1)
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (!unk_0x4915F4759304D5CF(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
							{
								func_99(Local_385[iParam0 /*10*/].f_7, 18, 0, 0);
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							else
							{
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 25:
					if (unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715()) || func_87(9))
					{
						unk_0x90683BECDF939A74(unk_0xA19140A5C42D8715(), 1, -1, 0);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 26:
					unk_0x5AD7D03C214BDA88("CHI_2_SHOOTOUT_STEALTH");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 27:
					unk_0x8969D02DEDC106D2("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 28:
					if (unk_0x2F8EAF18929E1E59("CHI_2_SHOOTOUT_ENEMIES_ALERTED"))
					{
						unk_0x5AD7D03C214BDA88("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
					}
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 44:
					if (!unk_0x2F8EAF18929E1E59("CHI_2_SHOOTOUT_IN_HOUSE"))
					{
						if (func_87(12))
						{
							unk_0x8969D02DEDC106D2("CHI_2_SHOOTOUT_IN_HOUSE");
						}
					}
					else if (func_156(12))
					{
						unk_0x5AD7D03C214BDA88("CHI_2_SHOOTOUT_IN_HOUSE");
					}
					break;
				
				case 45:
					if ((func_87(9) || (!unk_0x4915F4759304D5CF(Local_113[8 /*33*/]) && unk_0x967743032563101F(Local_113[8 /*33*/], 0))) || (!unk_0x4915F4759304D5CF(Local_113[9 /*33*/]) && unk_0x967743032563101F(Local_113[9 /*33*/], 0)))
					{
						if (!unk_0x4915F4759304D5CF(Local_113[8 /*33*/]))
						{
							unk_0xD461381B293D9B46(Local_113[8 /*33*/], 45);
						}
						if (!unk_0x4915F4759304D5CF(Local_113[9 /*33*/]))
						{
							unk_0xD461381B293D9B46(Local_113[9 /*33*/], 45);
						}
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 29:
					if (func_87(9))
					{
						Local_385[iParam0 /*10*/].f_7 = 0;
						while (Local_385[iParam0 /*10*/].f_7 < Local_113)
						{
							if (!unk_0x4915F4759304D5CF(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
							{
								unk_0xF26F4E13A8AEC5EB(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 60f);
							}
							Local_385[iParam0 /*10*/].f_7++;
						}
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					else
					{
						switch (Local_385[iParam0 /*10*/].f_6)
						{
							case 0:
								if (func_87(12))
								{
									Local_385[iParam0 /*10*/].f_7 = 0;
									while (Local_385[iParam0 /*10*/].f_7 < Local_113)
									{
										if (!unk_0x4915F4759304D5CF(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
										{
											if (Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/].f_1 == 1)
											{
												unk_0xF26F4E13A8AEC5EB(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 5f);
											}
										}
										Local_385[iParam0 /*10*/].f_7++;
									}
									Local_385[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (func_156(12))
								{
									Local_385[iParam0 /*10*/].f_7 = 0;
									while (Local_385[iParam0 /*10*/].f_7 < Local_113)
									{
										if (!unk_0x4915F4759304D5CF(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
										{
											if (Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/].f_1 == 1)
											{
												unk_0xF26F4E13A8AEC5EB(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 30f);
											}
										}
										Local_385[iParam0 /*10*/].f_7++;
									}
									Local_385[iParam0 /*10*/].f_6 = 0;
								}
								break;
							}
					}
					break;
				
				case 46:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0x6D68030C791111E0("misschinese2_crystalmaze");
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0x39C2D9AB77873F84("misschinese2_crystalmaze"))
							{
								if (!unk_0x4915F4759304D5CF(Local_113[23 /*33*/]))
								{
									Local_385[iParam0 /*10*/].f_7 = unk_0x70788DC3D80C9DEB(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
									unk_0xDA16255FBFC16B28(Local_385[iParam0 /*10*/].f_7, 1);
									unk_0xE5565DEAABF9D588(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], Local_385[iParam0 /*10*/].f_8, "misschinese2_crystalmaze", "_stand_to_aim", 1000f, -8f, 0, 0, 1148846080, 0);
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 30:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0xCACEBBBEAD8F262E(joaat("blazer"));
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0x7FC99CCC73354033(joaat("blazer")))
							{
								iLocal_146 = unk_0x48CFBECB146FD1A1(joaat("blazer"), 2478.587f, 4941.803f, 43.6736f, 227.2903f, 1, 1, 0);
								unk_0x99F546A9200EA026(iLocal_146, 1084227584);
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 31:
					unk_0x90683BECDF939A74(unk_0xA19140A5C42D8715(), 0, -1, 0);
					func_163(0);
					func_161();
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 32:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							if (func_87(29))
							{
								if (unk_0xCE3CB618AFE55EFB(iLocal_178))
								{
									unk_0xE1623437A3194332(&iLocal_178);
								}
								func_12(0);
								if (func_84("FRMFLC", 0, 0))
								{
									unk_0x4F93066CECE72793();
								}
								func_10(157, 0);
								unk_0xE061C3261E51F663(3f, 10f, 4);
								if (iLocal_167 == 0)
								{
									iLocal_167 = unk_0x8F62F4EC66847EC2(unk_0xA19140A5C42D8715(), joaat("weapon_petrolcan"));
								}
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (!func_87(29))
							{
								func_9(158, (iLocal_167 - unk_0x8F62F4EC66847EC2(unk_0xA19140A5C42D8715(), joaat("weapon_petrolcan"))), 1);
								iLocal_180 = unk_0x78CED56884DEF3D7(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), 20f, unk_0x410D194E9495C303(joaat("weapon_petrolcan")), 0, 0, 1);
								if (iLocal_180 != 0)
								{
									if (unk_0xCE3CB618AFE55EFB(iLocal_178))
									{
										unk_0xE1623437A3194332(&iLocal_178);
									}
									iLocal_178 = func_13(iLocal_180);
									func_12(1);
									func_11(0, 157);
								}
								Local_385[iParam0 /*10*/].f_6 = 0;
							}
							break;
					}
					if (func_8())
					{
						func_11(0, 157);
						Local_385[iParam0 /*10*/].f_3 = 1;
						func_32(17, 0);
					}
					break;
				
				case 33:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0x247955A7AC51D6E6("arm2_30");
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0xF8882C5CDED0257A("arm2_30"))
							{
								if (func_87(29))
								{
									unk_0x8B1F64005EEFD37E("arm2_30", 1, 1f, 0.5f);
									unk_0x2179FEC5412C8985("arm2_30", 2);
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							if (!func_87(29))
							{
								unk_0x8B1F64005EEFD37E("arm2_30", 0, 1f, 0.5f);
								Local_385[iParam0 /*10*/].f_6 = 1;
							}
							break;
					}
					break;
				
				case 34:
					if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
					{
						if (unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) == 0)
						{
							if (func_67(unk_0xA19140A5C42D8715(), 2451.08f, 4961.463f, 44.4392f, 1) < 20f)
							{
								unk_0xEC7287BE660E16F9(0, 0f, 0f, 0, 0);
							}
						}
					}
					break;
				
				case 35:
					func_15("CHN2_JERRY_CAN", 0, "CHN2_EXPLODE");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 36:
					func_15("CHN2_EXIT_HOUSE", 0, "CHN2_EXPLODE");
					unk_0x7A15C6C664F7334E(iLocal_171, "FarmhouseFire_Ignite", vLocal_172, "CHINESE2_SOUNDS", 0, 0, 0);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 37:
					unk_0x8969D02DEDC106D2("CHI_2_POUR_GAS");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 38:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0x61346376C1469A0E("FARMHOUSE_FIRE", false, -1);
							unk_0x61346376C1469A0E("FARMHOUSE_FIRE_BG", false, -1);
							break;
					}
					break;
				
				case 39:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_385[iParam0 /*10*/].f_7 = func_18(4);
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (func_67(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 2454.895f, 4950.895f, 44.1488f, 1) > 100f && func_4(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], unk_0xA19140A5C42D8715(), 1) > 100f)
							{
								iVar16 = func_18(4);
								func_128(&(Local_113[iVar16 /*33*/].f_25));
								if (!unk_0x4915F4759304D5CF(Local_113[iVar16 /*33*/]))
								{
									unk_0xD738221C247C8B71(Local_113[iVar16 /*33*/], true);
									unk_0x7E4E83D33161D01A(&(Local_113[iVar16 /*33*/]));
								}
								Local_113[iVar16 /*33*/] = 0;
								iVar16 = func_18(5);
								func_128(&(Local_113[iVar16 /*33*/].f_25));
								if (!unk_0x4915F4759304D5CF(Local_113[iVar16 /*33*/]))
								{
									unk_0xD738221C247C8B71(Local_113[iVar16 /*33*/], true);
									unk_0x7E4E83D33161D01A(&(Local_113[iVar16 /*33*/]));
								}
								Local_113[iVar16 /*33*/] = 0;
								iVar16 = func_18(7);
								if (!unk_0x4915F4759304D5CF(Local_113[iVar16 /*33*/]))
								{
									unk_0xD738221C247C8B71(Local_113[iVar16 /*33*/], true);
									unk_0x7E4E83D33161D01A(&(Local_113[iVar16 /*33*/]));
								}
								func_128(&(Local_113[iVar16 /*33*/].f_25));
								Local_113[iVar16 /*33*/] = 0;
								if (unk_0x1095F403F52B42E1(iLocal_145, 0))
								{
									unk_0x792676988A48387F(&iLocal_145);
								}
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 40:
					if (func_101(24, joaat("a_m_m_hillbilly_01"), 2433.123f, 4960.47f, 45.8218f, 301f, joaat("weapon_smg"), 1, 1))
					{
						unk_0xD461381B293D9B46(Local_113[24 /*33*/], 100);
						if (!unk_0x4915F4759304D5CF(Local_113[15 /*33*/]))
						{
							unk_0xD461381B293D9B46(Local_113[15 /*33*/], 100);
						}
						if (!unk_0x4915F4759304D5CF(Local_113[16 /*33*/]))
						{
							unk_0xD461381B293D9B46(Local_113[16 /*33*/], 100);
						}
						if (!unk_0x4915F4759304D5CF(Local_113[17 /*33*/]))
						{
							unk_0xD461381B293D9B46(Local_113[17 /*33*/], 100);
						}
						unk_0xDA4D3941AFF8EF12(Local_113[24 /*33*/], unk_0xA19140A5C42D8715(), 0, 16);
						unk_0xB4F2B588B54261BF(Local_113[24 /*33*/], 1);
						unk_0x6259CDB47862A4F3(Local_113[24 /*33*/], 200, 0);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			if (Local_385[iParam0 /*10*/].f_6 == -1)
			{
				Local_385[iParam0 /*10*/].f_3 = 1;
				Local_385[iParam0 /*10*/].f_6 = 0;
				Local_385[iParam0 /*10*/].f_1 = 0;
			}
		}
	}
}

void func_161()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (!func_162(Local_109[iVar0 /*5*/], 0f, 0f, 0f, 0))
		{
			unk_0x341AA026B031328A(Local_109[iVar0 /*5*/], 4f);
			unk_0xFDD15D670AD33E10(Local_109[iVar0 /*5*/], 2f, 1, 0, 0, false);
			iVar1 = 0;
			while (iVar1 < Local_113)
			{
				if (unk_0xDC5D81351D6A4DDB(Local_113[iVar1 /*33*/]))
				{
					vVar2 = { unk_0xE2BBD32891C18569(Local_113[iVar1 /*33*/], false) };
					if (vdist2(vVar2, Local_109[iVar0 /*5*/]) < 2f && vVar2.z > 43.9f)
					{
						unk_0x680F17660351F21B(&(Local_113[iVar1 /*33*/]));
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_162(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_163(bool bParam0)
{
	int iVar0;
	
	bLocal_89 = true;
	iLocal_93 = 0;
	iLocal_91 = -1;
	iLocal_108 = 0;
	iLocal_108 = 0;
	iLocal_102 = 0;
	if (bParam0 == 0)
	{
		iLocal_86 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		unk_0x8566A4AC1CA77939(Local_109[iVar0 /*5*/], 1f);
		if (!unk_0xCE3CB618AFE55EFB(Local_109[iVar0 /*5*/].f_3))
		{
			if (!func_162(Local_109[iVar0 /*5*/], 0f, 0f, 0f, 0))
			{
				iLocal_93++;
				Local_109[iVar0 /*5*/].f_3 = func_5(Local_109[iVar0 /*5*/], 0);
				unk_0x0CEDD2B5ABD96F4F(Local_109[iVar0 /*5*/].f_3, 1);
				unk_0x575CF00E129E0CE1(Local_109[iVar0 /*5*/].f_3, 0.4f);
				unk_0x264E87C905AE790B(Local_109[iVar0 /*5*/].f_3, 0);
				if (!bParam0)
				{
					unk_0xE8C2974337833D20(Local_109[iVar0 /*5*/].f_3, 0);
				}
				unk_0x570128B7829A8EAA(Local_109[iVar0 /*5*/].f_3, 5);
			}
		}
		else
		{
			Local_109[iVar0 /*5*/] = { unk_0x1C8DAFF0573242F7(Local_109[iVar0 /*5*/].f_3) };
			if (!bParam0)
			{
				unk_0xE8C2974337833D20(Local_109[iVar0 /*5*/].f_3, 0);
			}
			else
			{
				unk_0xE8C2974337833D20(Local_109[iVar0 /*5*/].f_3, 255);
			}
			iLocal_93++;
		}
		Local_109[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_101)
	{
		Local_101[iVar0 /*5*/].f_1 = { 0f, 0f, 0f };
		Local_101[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
}

int func_164(var uParam0)
{
	int iVar0;
	
	if (!unk_0xF93654E07E20E3CF(uParam0))
	{
		return 0;
	}
	iVar0 = unk_0x4369FBD977B3D293(uParam0);
	unk_0x575CF00E129E0CE1(iVar0, func_6(unk_0x4C9BACA8D249CB13(), 0.7f, 0.7f));
	return iVar0;
}

void func_165(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_56182 = 0;
	if (!Global_56406[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_68276)
	{
		if (Global_68277[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_68277[iVar1 /*9*/].f_1 = 1;
			Global_68277[iVar1 /*9*/].f_2 = 0f;
			if (Global_68277[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_166(bool bParam0)
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

var func_167()
{
	var uVar0;
	
	return uVar0;
}

int func_168()
{
	if (((((unk_0x55D3DD553C0E44E6(2, 30) != 127 || unk_0x55D3DD553C0E44E6(2, 31) != 127) || unk_0xD73B1037F6BD4B90(2, 24)) || unk_0xD73B1037F6BD4B90(2, 25)) || unk_0x55D3DD553C0E44E6(2, 2) != 127) || unk_0x55D3DD553C0E44E6(2, 1) != 127)
	{
		return 1;
	}
	return 0;
}

int func_169(int iParam0, int iParam1)
{
	if (Local_385[iParam0 /*10*/] == iParam1)
	{
		return Local_385[iParam0 /*10*/].f_6;
	}
	return -1;
}

void func_170(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = (iParam1 - iParam0);
	if (Local_388[0 /*8*/] != iParam0 && Local_388[iVar0 /*8*/] != iParam1)
	{
		iVar2 = 0;
		iVar1 = 0;
		while (iVar1 < Local_388)
		{
			if (iVar1 <= iVar0)
			{
				Local_388[iVar1 /*8*/] = (iParam0 + iVar2);
				Local_388[iVar1 /*8*/].f_1 = 1;
				Local_388[iVar1 /*8*/].f_2 = 0;
				Local_388[iVar1 /*8*/].f_3 = 0;
				iVar2++;
			}
			else
			{
				Local_388[iVar1 /*8*/].f_1 = 0;
			}
			iVar1++;
		}
	}
	iVar3 = 0;
	while (iVar3 < Local_388)
	{
		switch (Local_388[iVar3 /*8*/])
		{
			case 2:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (Local_388[iVar3 /*8*/].f_4 == 0)
					{
						if (func_84("FRMCHSE_1", 0, 0))
						{
							Local_388[iVar3 /*8*/].f_4 = 1;
						}
					}
					else if (!func_84("FRMCHSE_1", 0, 0))
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 3:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 6:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_156(7))
					{
						if (unk_0xB3CB9098064F83A7(2493.155f, 4970.315f, 43.88038f, 3.25f, 1, 1) || unk_0x9809FE4B550B1EFE(2493.155f, 4970.315f, 43.88038f, 3.25f, 1))
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
					}
					else
					{
						Local_388[iVar3 /*8*/].f_1 = 0;
					}
				}
				break;
			
			case 7:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					switch (Local_388[iVar3 /*8*/].f_4)
					{
						case 0:
							Local_388[iVar3 /*8*/].f_5 = func_18(8);
							Local_388[iVar3 /*8*/].f_6 = func_18(9);
							Local_388[iVar3 /*8*/].f_4++;
							break;
						
						case 1:
							if (Local_388[iVar3 /*8*/].f_5 != -1 && Local_388[iVar3 /*8*/].f_6 != -1)
							{
								if (unk_0xDC5D81351D6A4DDB(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/]) && unk_0xDC5D81351D6A4DDB(Local_113[Local_388[iVar3 /*8*/].f_6 /*33*/]))
								{
									if (unk_0x4915F4759304D5CF(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/]) || unk_0x4915F4759304D5CF(Local_113[Local_388[iVar3 /*8*/].f_6 /*33*/]))
									{
										Local_388[iVar3 /*8*/].f_2 = 1;
									}
								}
							}
							break;
						}
				}
				break;
			
			case 9:
				if (bLocal_53)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
					Local_388[iVar3 /*8*/].f_1 = 0;
				}
				break;
			
			case 11:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (unk_0x2BDB423A5E45639B(unk_0xA19140A5C42D8715()) == unk_0xFEB6EEC0545AF7AA("V_8_BasementRm"))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 12:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) != 0 && unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2421.331f, 4954.833f, 25.32829f, 2466.796f, 4996.822f, 66.07018f, 37.1875f, 0, true, 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 13:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (func_87(12))
				{
					if (!unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2457.885f, 4981.169f, 50.00518f, 2441.58f, 4965.088f, 56.24006f, 34.3125f, 0, true, 0))
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 14:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_67(unk_0xA19140A5C42D8715(), 2451.517f, 4973.122f, 44.2646f, 1) < 50f)
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 15:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						Local_388[iVar3 /*8*/].f_5 = func_18(17);
						if (Local_388[iVar3 /*8*/].f_5 != -1)
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (unk_0xDC5D81351D6A4DDB(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/]))
						{
							if (unk_0x4915F4759304D5CF(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/]))
							{
								if (func_67(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/], 2427.851f, 4964.972f, 43.1704f, 1) < 3f)
								{
									Local_388[iVar3 /*8*/].f_2 = 1;
									Local_388[iVar3 /*8*/].f_4++;
								}
								else
								{
									Local_388[iVar3 /*8*/].f_1 = 0;
								}
							}
						}
						break;
				}
				break;
			
			case 16:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					switch (Local_388[iVar3 /*8*/].f_4)
					{
						case 0:
							if (!func_30(5))
							{
								Local_388[iVar3 /*8*/].f_4++;
							}
							break;
						
						case 1:
							bVar5 = false;
							bVar6 = false;
							iVar4 = 0;
							while (iVar4 < Local_113)
							{
								if (!unk_0x4915F4759304D5CF(Local_113[iVar4 /*33*/]))
								{
									bVar5 = true;
									if (Local_113[iVar4 /*33*/].f_1 == 1)
									{
										bVar6 = true;
										iVar4 = Local_113;
									}
								}
								iVar4++;
							}
							if (!bVar5)
							{
								Local_388[iVar3 /*8*/].f_2 = 1;
							}
							else
							{
								Local_388[iVar3 /*8*/].f_2 = 0;
							}
							if (bVar6)
							{
								func_91(10, 0);
							}
							else
							{
								func_91(10, 1);
							}
							break;
						}
				}
				break;
			
			case 23:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_87(9))
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
						iVar8 = 0;
						iVar7 = 0;
						while (iVar7 < Local_113)
						{
							if (Local_113[iVar7 /*33*/].f_1 == 1)
							{
								if (!unk_0x4915F4759304D5CF(Local_113[iVar7 /*33*/]))
								{
									iVar8++;
									if (iVar8 > 1)
									{
										Local_388[iVar3 /*8*/].f_2 = 0;
										iVar7 = Local_113;
									}
								}
							}
							iVar7++;
						}
					}
				}
				break;
			
			case 24:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						if (func_67(unk_0xA19140A5C42D8715(), 2446.674f, 4977.788f, 57.4583f, 1) < 250f)
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
						{
							iVar9 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
							if (unk_0x7C197233F79C2CB8(unk_0x8F474E419F56E48D(iVar9)) || unk_0xCA8C103FCD316F89(unk_0x8F474E419F56E48D(iVar9)))
							{
								if (func_67(unk_0xA19140A5C42D8715(), 2446.674f, 4977.788f, 57.4583f, 0) > 700f)
								{
									Local_388[iVar3 /*8*/].f_2 = 1;
								}
							}
							else
							{
								bVar10 = true;
							}
						}
						else
						{
							bVar10 = true;
						}
						if (bVar10)
						{
							if (func_67(unk_0xA19140A5C42D8715(), 2446.674f, 4977.788f, 57.4583f, 1) > 250f)
							{
								Local_388[iVar3 /*8*/].f_2 = 1;
							}
						}
						break;
				}
				break;
			
			case 26:
				if (func_67(unk_0xA19140A5C42D8715(), 2441.065f, 4968.819f, 45.83075f, 1) < 2.75f)
				{
					if (!unk_0x4915F4759304D5CF(Local_113[15 /*33*/]))
					{
						if (func_67(Local_113[15 /*33*/], 2439.386f, 4962.049f, 45.9047f, 1) < 3f)
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
					}
					if (!unk_0x4915F4759304D5CF(Local_113[16 /*33*/]))
					{
						if (func_67(Local_113[16 /*33*/], 2439.386f, 4962.049f, 45.9047f, 1) < 3f)
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
					}
					if (!unk_0x4915F4759304D5CF(Local_113[17 /*33*/]))
					{
						if (func_67(Local_113[17 /*33*/], 2439.386f, 4962.049f, 45.9047f, 1) < 3f)
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
					}
					Local_388[iVar3 /*8*/].f_1 = 0;
				}
				break;
			
			case 27:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						if (!unk_0x4915F4759304D5CF(Local_113[4 /*33*/]) && unk_0x8A29BBDF4603E52B(Local_113[4 /*33*/]))
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						if (!unk_0x4915F4759304D5CF(Local_113[5 /*33*/]) && unk_0x8A29BBDF4603E52B(Local_113[5 /*33*/]))
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						if (!unk_0x4915F4759304D5CF(Local_113[7 /*33*/]) && unk_0x8A29BBDF4603E52B(Local_113[7 /*33*/]))
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						Local_388[iVar3 /*8*/].f_5 = unk_0xFD34717937104F1C() + 8000;
						break;
					
					case 1:
						if (unk_0x1095F403F52B42E1(iLocal_145, 0))
						{
							if (func_90(unk_0xE2BBD32891C18569(iLocal_145, true), 5f, 150f))
							{
								Local_388[iVar3 /*8*/].f_6 = (Local_388[iVar3 /*8*/].f_6 + floor((timestep() * 1000f)));
							}
						}
						if (Local_388[iVar3 /*8*/].f_6 > 1500)
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
						if (unk_0xFD34717937104F1C() > Local_388[iVar3 /*8*/].f_5)
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 30:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						if (unk_0xF93654E07E20E3CF(uLocal_176))
						{
							if (unk_0x866C9D94223DE855(uLocal_176))
							{
								Local_388[iVar3 /*8*/].f_4++;
							}
						}
						break;
					
					case 1:
						if (unk_0xF93654E07E20E3CF(uLocal_176))
						{
							if (!unk_0x866C9D94223DE855(uLocal_176))
							{
								if (unk_0x6D7FFF527E125F24(-1, 2435.252f, 4966.748f, 41.3476f, 4f))
								{
									Local_388[iVar3 /*8*/].f_2 = 1;
								}
								Local_388[iVar3 /*8*/].f_4++;
							}
						}
						break;
				}
				break;
			
			case 8:
				if (iLocal_57 && !bLocal_53)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 17:
				if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2442.819f, 4970.283f, 45.2481f, 2439.625f, 4966.862f, 48.14596f, 3.4375f, 0, true, 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 18:
				if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2434.671f, 4959.104f, 44.85109f, 2440.5f, 4965.189f, 48.1231f, 3.625f, 0, true, 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 19:
				if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2432.467f, 4959.473f, 44.94133f, 2430.797f, 4961.173f, 48.30901f, 1.5625f, 0, true, 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 21:
				if (bLocal_56)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
					Local_388[iVar3 /*8*/].f_1 = 0;
				}
				break;
			
			case 32:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2447.671f, 4951.438f, 43.25576f, 2454.664f, 4957.856f, 47.89117f, 6.8125f, 0, true, 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 33:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						if (unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), joaat("weapon_petrolcan"), 0))
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (!unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), joaat("weapon_petrolcan"), 0))
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
						break;
				}
				break;
			
			case 29:
				Local_388[iVar3 /*8*/].f_2 = 0;
				switch (Local_388[iVar3 /*8*/].f_5)
				{
					case 0:
						if (unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), joaat("weapon_petrolcan"), 0))
						{
							Local_388[iVar3 /*8*/].f_5 = 10;
						}
						else
						{
							Local_388[iVar3 /*8*/].f_5 = 20;
						}
						break;
				}
				if (unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), joaat("weapon_petrolcan"), 0))
				{
					if (Local_388[iVar3 /*8*/].f_5 == 20)
					{
					}
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 34:
				if (!Local_388[iVar3 /*8*/].f_2 == 1)
				{
					if (func_8())
					{
						func_11(0, 157);
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 35:
				if (Local_109[0 /*5*/].f_4 == 1)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 36:
				Local_388[iVar3 /*8*/].f_2 = 0;
				iVar11 = joaat("weapon_unarmed");
				if (unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iVar11, 1))
				{
					if (iVar11 == joaat("weapon_petrolcan"))
					{
						if (unk_0xD73B1037F6BD4B90(0, 24))
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
					}
				}
				break;
			
			case 44:
				if (unk_0x8DAA6481F6FEA36F(-1, 2435.776f, 4963.067f, 39.34265f, 2428.118f, 4971.287f, 43.67327f, 11.875f))
				{
					if (!unk_0x8DAA6481F6FEA36F(24, 2435.776f, 4963.067f, 39.34265f, 2428.118f, 4971.287f, 43.67327f, 11.875f) && !unk_0x8DAA6481F6FEA36F(22, 2435.776f, 4963.067f, 39.34265f, 2428.118f, 4971.287f, 43.67327f, 11.875f))
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 41:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						if (func_174())
						{
							iVar12 = func_173();
							if (iVar12 <= 17)
							{
								func_91(37, 1);
							}
							else
							{
								Local_388[iVar3 /*8*/].f_2 = 1;
							}
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 38:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_172(17))
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 40:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) != 0)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 42:
				if (func_67(unk_0xA19140A5C42D8715(), 2439.52f, 4969.67f, 52.65f, 1) > 42.5f)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 43:
				if (func_67(unk_0xA19140A5C42D8715(), 2439.52f, 4969.67f, 52.65f, 1) > 60f)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 39:
				if (func_171())
				{
					if (!func_174())
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 47:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						Local_388[iVar3 /*8*/].f_5 = unk_0xFD34717937104F1C() + 30000;
						Local_388[iVar3 /*8*/].f_4++;
						break;
					
					case 1:
						if (unk_0xFD34717937104F1C() > Local_388[iVar3 /*8*/].f_5)
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 48:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_67(unk_0xA19140A5C42D8715(), 2448.25f, 4974.92f, 55.11f, 1) > 300f)
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 51:
				if (func_147(1, 49))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 49:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_67(unk_0xA19140A5C42D8715(), 2448.25f, 4974.92f, 55.11f, 1) > 500f)
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 50:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
		}
		iVar3++;
	}
}

int func_171()
{
	if (iLocal_102 == 1)
	{
		return 1;
	}
	return 0;
}

int func_172(int iParam0)
{
	if (unk_0x06D718FC71673E5A(Local_109[iParam0 /*5*/], 0.6f) > 0)
	{
		return 1;
	}
	return 0;
}

int func_173()
{
	return iLocal_100;
}

int func_174()
{
	int iVar0;
	
	iVar0 = (Local_109 - 1);
	while (iVar0 >= 0)
	{
		if (Local_109[iVar0 /*5*/].f_4)
		{
			if (unk_0x06D718FC71673E5A(Local_109[iVar0 /*5*/], 0.6f) > 0)
			{
				vLocal_99 = { Local_109[iVar0 /*5*/] };
				iLocal_100 = iVar0;
				return 1;
			}
		}
		else
		{
			return 0;
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_175()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x6DF414662D671A93();
	if ((func_195() && iLocal_150 > 0) && unk_0xFD34717937104F1C() > iLocal_159)
	{
		while (!unk_0x71364F510A1CB69F())
		{
			unk_0x9662BE461F9FDF9E(1000);
			func_28(28, 1);
		}
		iLocal_577 = 0;
		while (!func_194())
		{
			func_28(32322, 1);
		}
		unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 2474.97f, 4946.047f, 44.0297f, 1, 0, 0, 1);
		unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 230.6937f);
		unk_0x1BE107CEA70974D0(unk_0xA19140A5C42D8715(), 0, 0);
		unk_0x90683BECDF939A74(unk_0xA19140A5C42D8715(), 0, -1, 0);
		unk_0xB20B772FD9DE1847(unk_0xA19140A5C42D8715(), joaat("weapon_unarmed"), true);
		unk_0x3A3E4B7C6FBE305D(unk_0xA19140A5C42D8715(), 0, 0);
		func_186(0, 1, 1, 0, 0);
		unk_0xA5CFBAB33EA6079E(0);
		unk_0x8E88E73F74A9FF79(false, 0, 3000, 1, 0, 0);
		unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
		unk_0xD87B76260C547F31(0f);
		unk_0xAA32DD4848CF93E0(0f, 1065353216);
		unk_0x4F93066CECE72793();
		unk_0x8F2B662BE32A9181("SLOW_MO_METH_HOUSE_RAYFIRE");
		uLocal_173 = unk_0x389F96269D4F1FD8(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
		func_31(12, 1);
		iLocal_158 = 0;
		iLocal_163 = iLocal_163;
		iLocal_163 = 99;
		iLocal_150 = 99;
		iLocal_139 = 3;
		fLocal_138 = 10000f;
		unk_0x5F041E7AE5419FEC(2457.15f, 4968.79f, 48.677f, 100f, 965837842, 1);
		unk_0x5F041E7AE5419FEC(2457.15f, 4968.79f, 48.677f, 100f, 247384786, 1);
		unk_0x5F041E7AE5419FEC(2457.15f, 4968.79f, 48.677f, 100f, -247908770, 0);
		unk_0x19A6703D21831D53();
		unk_0xB6B24463498F5F41();
		bLocal_165 = true;
	}
	unk_0x74BF5F6EEF62D5A9();
	switch (iLocal_150)
	{
		case 0:
			func_194();
			bLocal_165 = false;
			iVar0 = 49;
			while (iVar0 <= 55)
			{
				Local_109[iVar0 /*5*/] = { Local_109[iVar0 /*5*/] + Vector(0.6f, 0f, 0f) };
				iVar0++;
			}
			if (unk_0x2F8EAF18929E1E59("CHI_2_POUR_GAS"))
			{
				unk_0x5AD7D03C214BDA88("CHI_2_POUR_GAS");
			}
			if (unk_0x2F8EAF18929E1E59("CHI_2_SHOOT_GAS"))
			{
				unk_0x5AD7D03C214BDA88("CHI_2_SHOOT_GAS");
			}
			unk_0x8969D02DEDC106D2("CHI_2_GAS_TRAIL_FIRE");
			iLocal_159 = unk_0xFD34717937104F1C() + 1000;
			unk_0xFDD15D670AD33E10(2570.53f, 4982.057f, 50.6819f, 100f, 1, 0, 0, false);
			unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 0);
			unk_0xB20B772FD9DE1847(unk_0xA19140A5C42D8715(), joaat("weapon_unarmed"), true);
			func_81(0);
			iLocal_392 = 0;
			func_81(1);
			unk_0x4F93066CECE72793();
			func_185(2467.775f, 4954.415f, 42.87803f, 2477.089f, 4945.079f, 46.16654f, 4.0625f, 2486.854f, 4939.086f, 43.2578f, 230f, 1, 1, 1, 0, 0);
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 2455.941f, 4952.801f, 44.112f, 1, 0, 0, 1);
			}
			unk_0xDED73F11B8CB95B1(1f);
			unk_0x4DC885EA8D6AF7FC("misschinese2_barrelRoll");
			unk_0xD37292AE1958B4F3("move_m@gangster@var_e");
			unk_0xD37292AE1958B4F3("move_m@gangster@var_f");
			unk_0xD37292AE1958B4F3("move_m@gangster@generic");
			unk_0x4DC885EA8D6AF7FC("misschinese2_bank5");
			unk_0x4DC885EA8D6AF7FC("misschinese2_bank1");
			unk_0x4DC885EA8D6AF7FC("reaction@male_stand@big_variations@b");
			unk_0x4DC885EA8D6AF7FC("reaction@male_stand@big_intro@left");
			unk_0x4DC885EA8D6AF7FC("reaction@male_stand@big_intro@right");
			unk_0x4DC885EA8D6AF7FC("reaction@male_stand@big_intro@backward");
			unk_0xA5DE74AE39867B03(joaat("a_m_m_hillbilly_02"));
			unk_0xA5DE74AE39867B03(joaat("a_m_y_methhead_01"));
			unk_0xA5DE74AE39867B03(joaat("prop_cs_fertilizer"));
			unk_0xA5DE74AE39867B03(joaat("burrito"));
			unk_0xA5DE74AE39867B03(joaat("prop_cs_beer_bot_01"));
			unk_0x1BE107CEA70974D0(unk_0xA19140A5C42D8715(), 0, 0);
			iVar1 = 0;
			while (iVar1 < Local_113)
			{
				if (unk_0xDC5D81351D6A4DDB(Local_113[iVar1 /*33*/]))
				{
					unk_0x680F17660351F21B(&(Local_113[iVar1 /*33*/]));
				}
				if (unk_0xDC5D81351D6A4DDB(Local_113[iVar1 /*33*/].f_20))
				{
					unk_0xC0AC848E56940C34(&(Local_113[iVar1 /*33*/].f_20));
				}
				iVar1++;
			}
			iLocal_150++;
			break;
		
		case 1:
			if (unk_0x71364F510A1CB69F() && !unk_0x3BE8B7AEED1A3971())
			{
				unk_0x70C1F5AA59767FE6(1000);
			}
			iLocal_150++;
			break;
	}
	if (iLocal_135)
	{
		iLocal_135 = 0;
		iVar2 = 0;
		while (iVar2 < Local_137)
		{
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < Local_136)
		{
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < Local_137)
	{
		if (iLocal_140[iVar2])
		{
			iLocal_140[iVar2] = 0;
			Local_137[iVar2 /*18*/] = { unk_0x7AE8C2E4C6335A8D(unk_0xBAEDD81FC60E0AA2()) };
			Local_137[iVar2 /*18*/].f_3 = { unk_0x21AC08654FDAADC9(unk_0xBAEDD81FC60E0AA2(), 2) };
			Local_137[iVar2 /*18*/].f_14 = unk_0x3EC5C28A5B7DA7B8(unk_0xBAEDD81FC60E0AA2());
		}
		if (iLocal_141[iVar2])
		{
			iLocal_141[iVar2] = 0;
			Local_137[iVar2 /*18*/].f_6 = { unk_0x7AE8C2E4C6335A8D(unk_0xBAEDD81FC60E0AA2()) };
			Local_137[iVar2 /*18*/].f_9 = { unk_0x21AC08654FDAADC9(unk_0xBAEDD81FC60E0AA2(), 2) };
			Local_137[iVar2 /*18*/].f_15 = unk_0x3EC5C28A5B7DA7B8(unk_0xBAEDD81FC60E0AA2());
		}
		iVar2++;
	}
	if (iLocal_133)
	{
		iLocal_133 = 0;
		bLocal_134 = false;
		iLocal_174 = 0;
		unk_0xFDD15D670AD33E10(2431.097f, 4967.043f, 41.3476f, 20f, 1, 0, 0, false);
		func_184();
	}
	if (!bLocal_134)
	{
		if (unk_0xCB79242F310A5BB2())
		{
			unk_0x0BCF88110C26D4F4(5, 5, 5, 5);
			unk_0x69DE79FEED976194();
			iLocal_139 = -1;
			unk_0xA5CFBAB33EA6079E(0);
			func_186(1, 1, 1, 0, 0);
			unk_0x6D68030C791111E0("misschinese2_crystalmaze");
			bLocal_134 = true;
			Local_136[0 /*6*/] = 0;
			Local_136[1 /*6*/] = 0;
			Local_136[2 /*6*/] = 0;
			Local_136[3 /*6*/] = 0;
			Local_136[0 /*6*/].f_4 = 0;
			Local_136[0 /*6*/].f_5 = 0;
			Local_136[1 /*6*/].f_4 = 0;
			Local_136[1 /*6*/].f_5 = 0;
			Local_136[2 /*6*/].f_4 = 0;
			Local_136[2 /*6*/].f_5 = 0;
			Local_136[3 /*6*/].f_4 = 0;
			Local_136[3 /*6*/].f_5 = 0;
			func_32(12, 0);
			unk_0xFA28790B579CDEB0();
			unk_0xF748D06B9A97191E(4);
			switch (iLocal_166)
			{
				case 3:
					settimera(0);
					break;
				
				case 2:
					Local_136[0 /*6*/] = 1;
					Local_136[1 /*6*/] = 1;
					settimera(10900);
					iLocal_139 = 2;
					fLocal_138 = 10000f;
					break;
				
				case 1:
					Local_136[0 /*6*/] = 1;
					settimera(6400);
					iLocal_139 = 1;
					fLocal_138 = 10000f;
					break;
			}
			iLocal_143 = 0;
		}
	}
	if (bLocal_134)
	{
		unk_0xB718CC67E976213F(to_float(timera()));
	}
	if (bLocal_134)
	{
		fLocal_138 = (fLocal_138 + timestep());
		if (iLocal_139 == -1 || ((iLocal_139 != -1 && iLocal_139 < 4) && fLocal_138 > (Local_137[iLocal_139 /*18*/].f_13 / 1000f)))
		{
			iLocal_139++;
			if (iLocal_139 == 3)
			{
				if (unk_0x39C2D9AB77873F84("misschinese2_crystalmaze"))
				{
					iLocal_155 = unk_0x36F0F6FD9C57CAA2(964613260, 1);
					iLocal_156 = unk_0x70788DC3D80C9DEB(2452.914f, 4962.096f, 45.585f, 0f, 0f, 45f, 2);
					unk_0xF84EE501E63C86CF(iLocal_155, iLocal_156, "trevor_barn_walk_cam", "misschinese2_crystalmaze");
					if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
					{
						unk_0xE5565DEAABF9D588(unk_0xA19140A5C42D8715(), iLocal_156, "misschinese2_crystalmaze", "trevor_barn_walk", 1000f, -8f, 0, 0, 1148846080, 0);
					}
					unk_0x8E88E73F74A9FF79(true, 0, 3000, 1, 0, 0);
					func_184();
					unk_0x27DB513390B59BFA(1);
					fLocal_138 = 0f;
				}
			}
			else if (iLocal_139 < 4)
			{
				unk_0xA5CFBAB33EA6079E(0);
				iLocal_155 = unk_0x4AD86AC07DD005D4("DEFAULT_SCRIPTED_CAMERA", Local_137[iLocal_139 /*18*/], Local_137[iLocal_139 /*18*/].f_3, Local_137[iLocal_139 /*18*/].f_14, 1, 2);
				unk_0x1D7183E3760DB4E5(iLocal_155, Local_137[iLocal_139 /*18*/].f_6, Local_137[iLocal_139 /*18*/].f_9, Local_137[iLocal_139 /*18*/].f_15, floor(Local_137[iLocal_139 /*18*/].f_12), Local_137[iLocal_139 /*18*/].f_16, 1, 2);
				unk_0x8E88E73F74A9FF79(true, 0, 3000, 1, 0, 0);
				if (iLocal_139 < 2)
				{
					func_183(Local_137[iLocal_139 /*18*/].f_17, 1, 1);
				}
				else
				{
					func_183(Local_137[iLocal_139 /*18*/].f_17, 1, 0);
				}
				fLocal_138 = 0f;
			}
			else if (!bLocal_132)
			{
				unk_0xA5CFBAB33EA6079E(0);
				unk_0x8E88E73F74A9FF79(false, 0, 3000, 1, 0, 0);
				if (func_182() && !bLocal_165)
				{
					unk_0xE60B9F9B48D4783F("CamPushInNeutral", 0, 0);
					unk_0xE11F00B4AC919F45(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
				unk_0x27DB513390B59BFA(0);
				unk_0xD87B76260C547F31(0f);
				unk_0xAA32DD4848CF93E0(0f, 1065353216);
				func_181(0, 0, 1, 0);
				unk_0x5AD7D03C214BDA88("CHI_2_GAS_TRAIL_FIRE");
				unk_0x317CA41ED2351630(uLocal_173, 9);
				unk_0xDED73F11B8CB95B1(1f);
				unk_0x77CECBF0C98D2A47();
				if (unk_0x71364F510A1CB69F())
				{
					while (unk_0xA3DC7C2803970902(uLocal_173) != 10)
					{
						func_28(29, 1);
					}
					unk_0x70C1F5AA59767FE6(1000);
				}
				unk_0xB6B24463498F5F41();
				func_176(9);
			}
		}
		iVar3 = 0;
		while (iVar3 < Local_136)
		{
			if (!Local_136[iVar3 /*6*/])
			{
				if (iLocal_139 == Local_136[iVar3 /*6*/].f_1 && fLocal_138 > (Local_136[iVar3 /*6*/].f_2 / 1000f))
				{
					switch (iVar3)
					{
						case 0:
							switch (Local_136[iVar3 /*6*/].f_4)
							{
								case 0:
									iLocal_143 = 0;
									if (unk_0xFD34717937104F1C() > Local_136[iVar3 /*6*/].f_5)
									{
										func_122(vLocal_142[iLocal_143 /*3*/], 0);
										Local_136[iVar3 /*6*/].f_5 = unk_0xFD34717937104F1C() + 200;
										Local_136[iVar3 /*6*/].f_4++;
									}
									break;
								
								case 1:
									if (unk_0xFD34717937104F1C() > Local_136[iVar3 /*6*/].f_5)
									{
										func_122(vLocal_142[iLocal_143 /*3*/] + vLocal_142[iLocal_143 + 1 /*3*/] / Vector(2f, 2f, 2f), 0);
										iLocal_143++;
										if (iLocal_143 >= 12)
										{
											Local_136[iVar3 /*6*/].f_4 = 10;
											Local_136[iVar3 /*6*/] = 1;
										}
										else
										{
											Local_136[iVar3 /*6*/].f_5 = unk_0xFD34717937104F1C() + 200;
											Local_136[iVar3 /*6*/].f_4 = 2;
										}
									}
									break;
								
								case 2:
									if (unk_0xFD34717937104F1C() > Local_136[iVar3 /*6*/].f_5)
									{
										func_122(vLocal_142[iLocal_143 /*3*/], 0);
										Local_136[iVar3 /*6*/].f_5 = unk_0xFD34717937104F1C() + 200;
										if (iLocal_143 == 2)
										{
											Local_136[iVar3 /*6*/].f_4 = 3;
										}
										else
										{
											Local_136[iVar3 /*6*/].f_4 = 1;
										}
									}
									break;
								
								case 3:
									if (unk_0xFD34717937104F1C() > Local_136[iVar3 /*6*/].f_5)
									{
										func_122(vLocal_142[iLocal_143 /*3*/] + vLocal_142[iLocal_143 + 1 /*3*/] / Vector(2f, 2f, 2f), 0);
										func_122(vLocal_142[iLocal_143 /*3*/] + vLocal_142[iLocal_143 + 2 /*3*/] / Vector(2f, 2f, 2f), 0);
										Local_136[iVar3 /*6*/].f_5 = unk_0xFD34717937104F1C() + 200;
										Local_136[iVar3 /*6*/].f_4 = 4;
										iLocal_143 = 3;
									}
									break;
								
								case 4:
									if (unk_0xFD34717937104F1C() > Local_136[iVar3 /*6*/].f_5)
									{
										func_122(vLocal_142[iLocal_143 /*3*/], 0);
										func_122(vLocal_142[iLocal_143 + 1 /*3*/], 0);
										Local_136[iVar3 /*6*/].f_5 = unk_0xFD34717937104F1C() + 200;
										Local_136[iVar3 /*6*/].f_4 = 5;
									}
									break;
								
								case 5:
									if (unk_0xFD34717937104F1C() > Local_136[iVar3 /*6*/].f_5)
									{
										func_122(vLocal_142[iLocal_143 /*3*/] + vLocal_142[iLocal_143 + 2 /*3*/] / Vector(2f, 2f, 2f), 0);
										func_122(vLocal_142[iLocal_143 + 1 /*3*/] + vLocal_142[iLocal_143 + 3 /*3*/] / Vector(2f, 2f, 2f), 0);
										Local_136[iVar3 /*6*/].f_5 = unk_0xFD34717937104F1C() + 200;
										Local_136[iVar3 /*6*/].f_4 = 6;
										iLocal_143 = 5;
									}
									break;
								
								case 6:
									if (unk_0xFD34717937104F1C() > Local_136[iVar3 /*6*/].f_5)
									{
										func_122(vLocal_142[iLocal_143 /*3*/], 0);
										func_122(vLocal_142[iLocal_143 + 1 /*3*/], 0);
										Local_136[iVar3 /*6*/].f_5 = unk_0xFD34717937104F1C() + 200;
										Local_136[iVar3 /*6*/].f_4 = 2;
										iLocal_143 = 7;
									}
									break;
							}
							break;
						
						case 1:
							unk_0x2033075E51297032(2432.534f, 4968.383f, 42.2389f, 4, 0.5f, 1, 0, 1f, 0);
							Local_136[iVar3 /*6*/] = 1;
							break;
						
						case 2:
							iLocal_174 = 1;
							Local_136[iVar3 /*6*/] = 1;
							break;
						
						case 3:
							if (unk_0x37B568B777BC65F9(iLocal_155))
							{
								unk_0xBC1542DDC31676C2(iLocal_155, "LARGE_EXPLOSION_SHAKE", fLocal_157);
								unk_0x1C6568BFD561C5C8(iLocal_155, 0.1f);
								Local_136[iVar3 /*6*/] = 1;
							}
							break;
						
						case 4:
							switch (Local_136[iVar3 /*6*/].f_4)
							{
								case 0:
									unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 2473.208f, 4947.625f, 44.0664f, 1, 0, 0, 1);
									unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 223.493f);
									unk_0xD87B76260C547F31(0f);
									unk_0xAA32DD4848CF93E0(-7f, 1065353216);
									if (func_182())
									{
										unk_0xF757C0D3A087F145(unk_0xA19140A5C42D8715(), 1063765679, 1, 0, 0);
										unk_0x0D73DFAB4EC83FF4(unk_0xD4E735F4B6A956AC(), 1f, 3000, 0, 1, 0);
									}
									else
									{
										unk_0xF757C0D3A087F145(unk_0xA19140A5C42D8715(), -668482597, 1, 0, 0);
										unk_0x0D73DFAB4EC83FF4(unk_0xD4E735F4B6A956AC(), 1f, 500, 0, 1, 0);
									}
									Local_136[iVar3 /*6*/].f_4++;
									break;
								
								case 1:
									break;
							}
							break;
						
						case 5:
							switch (Local_136[iVar3 /*6*/].f_4)
							{
								case 0:
									fLocal_175 = 1f;
									Local_136[iVar3 /*6*/].f_4++;
									Local_136[iVar3 /*6*/].f_5 = unk_0xFD34717937104F1C() + 1300;
									unk_0xEE059E753F371708("SLOW_MO_METH_HOUSE_RAYFIRE");
									break;
								
								case 1:
									fLocal_175 = (fLocal_175 - (timestep() * 1f));
									if (fLocal_175 < 0.2f)
									{
										fLocal_175 = 0.2f;
									}
									unk_0xDED73F11B8CB95B1(fLocal_175);
									if (unk_0xFD34717937104F1C() > Local_136[iVar3 /*6*/].f_5)
									{
										Local_136[iVar3 /*6*/].f_4++;
									}
									break;
								
								case 2:
									fLocal_175 = (fLocal_175 + (timestep() * 1f));
									if (fLocal_175 > 1f)
									{
										fLocal_175 = 1f;
										Local_136[iVar3 /*6*/].f_4++;
										Local_136[iVar3 /*6*/] = 1;
									}
									unk_0x8F2B662BE32A9181("SLOW_MO_METH_HOUSE_RAYFIRE");
									unk_0xDED73F11B8CB95B1(fLocal_175);
									break;
							}
							break;
						}
					}
			}
			iVar3++;
		}
	}
}

void func_176(int iParam0)
{
	func_180();
	func_179();
	func_178();
	func_177();
	if (iParam0 == 11)
	{
		iLocal_149++;
	}
	else
	{
		iLocal_149 = iParam0;
	}
}

void func_177()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_390)
	{
		Local_390[iVar0 /*7*/] = 0;
		Local_390[iVar0 /*7*/].f_1 = 0;
		Local_390[iVar0 /*7*/].f_3 = 0;
		Local_390[iVar0 /*7*/].f_2 = 0;
		Local_390[iVar0 /*7*/].f_4 = 0;
		Local_390[iVar0 /*7*/].f_5 = 0;
		Local_390[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
}

void func_178()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_385)
	{
		if (Local_385[iVar0 /*10*/].f_4)
		{
			Local_385[iVar0 /*10*/].f_1 = 1;
			Local_385[iVar0 /*10*/].f_6 = -1;
			func_160(iVar0, Local_385[iVar0 /*10*/], 0, 0, 0, 1, 0, 1, 0, 1, 0);
		}
		Local_385[iVar0 /*10*/] = 0;
		Local_385[iVar0 /*10*/].f_1 = 0;
		Local_385[iVar0 /*10*/].f_2 = 0;
		Local_385[iVar0 /*10*/].f_3 = 0;
		Local_385[iVar0 /*10*/].f_6 = 0;
		Local_385[iVar0 /*10*/].f_4 = 0;
		Local_385[iVar0 /*10*/].f_5 = 0;
		Local_385[iVar0 /*10*/].f_7 = 0;
		Local_385[iVar0 /*10*/].f_8 = 0;
		Local_385[iVar0 /*10*/].f_9 = 0f;
		iVar0++;
	}
}

void func_179()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_388)
	{
		Local_388[iVar0 /*8*/] = 0;
		Local_388[iVar0 /*8*/].f_1 = 0;
		Local_388[iVar0 /*8*/].f_2 = 0;
		Local_388[iVar0 /*8*/].f_3 = 0;
		Local_388[iVar0 /*8*/].f_4 = 0;
		Local_388[iVar0 /*8*/].f_5 = 0;
		iVar0++;
	}
}

void func_180()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_389)
	{
		Local_389[iVar0 /*4*/] = 0;
		Local_389[iVar0 /*4*/].f_1 = 0;
		Local_389[iVar0 /*4*/].f_2 = 0;
		Local_389[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
}

int func_181(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x47C01C0E6F4C1D06())
	{
		if (unk_0xDA9416DF9C88432D() != iParam0 && iParam2)
		{
			unk_0x5126E6F88EF5B7A1(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_182()
{
	if (unk_0x1F7BAD75218F1A2C(unk_0x9F302D755A846102()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_183(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iLocal_103 = iParam2;
	if (iParam0 > -1)
	{
		iLocal_102 = 1;
		iLocal_104 = unk_0xFD34717937104F1C();
		iLocal_105 = iParam0 * 2;
		iLocal_107 = iLocal_105;
		if (bParam1)
		{
			iLocal_108 = 0;
		}
		else
		{
			iLocal_108 = iLocal_105;
		}
		iVar0 = 0;
		while (iVar0 < Local_109)
		{
			Local_109[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_101)
		{
			unk_0x18F3ABCEA09948FB(Local_101[iVar0 /*5*/]);
			if (Local_101[iVar0 /*5*/].f_4 != 0)
			{
				unk_0x25C7CCF1CBB8C92D(Local_101[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			Local_101[iVar0 /*5*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_184()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_101)
	{
		unk_0x18F3ABCEA09948FB(Local_101[iVar0 /*5*/]);
		Local_101[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	func_163(0);
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (unk_0xCE3CB618AFE55EFB(Local_109[iVar0 /*5*/].f_3))
		{
			unk_0xE1623437A3194332(&(Local_109[iVar0 /*5*/].f_3));
		}
		Local_109[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	iLocal_93 = -1;
}

void func_185(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	func_70(vParam0, vParam1, fParam2, vParam3, fParam4, 0f, 0f, 0f, bParam5, bParam6, bParam7, bParam8, bParam9);
}

void func_186(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		unk_0xC97ACA9456A064F3(unk_0xD4E735F4B6A956AC());
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 1);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 1);
		func_193(1);
		unk_0x158181F81A221D70();
		unk_0xD8EA6395AE60BF4A();
		if (Global_14513.f_1 > 3)
		{
			if (unk_0xB39808C1DCE0DCFA())
			{
				unk_0xA8B97F91CBDE376C(false);
			}
			if (!func_40())
			{
				Global_14513.f_1 = 3;
			}
			Global_15822 = 5;
		}
		func_181(1, iParam3, iParam2, 0);
		Global_56187 = 1;
		Global_68497 = 1;
		Global_71203 = 1;
	}
	else
	{
		func_193(0);
		unk_0x21727E2C492FE1B3();
		Global_56187 = 0;
		if (bParam1)
		{
			unk_0x1A81FD78261DCFCD();
		}
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 0);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 0);
		func_181(0, iParam3, iParam2, 0);
		if (unk_0x4C9BACA8D249CB13())
		{
			if ((((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_191(unk_0xD4E735F4B6A956AC())) && !func_188(unk_0xD4E735F4B6A956AC(), 0)) && !func_187()) && !bParam4)
			{
				unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), false);
			}
		}
		else if ((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_191(unk_0xD4E735F4B6A956AC())) && !bParam4)
		{
			unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), false);
		}
		Global_71203 = 0;
	}
}

bool func_187()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 14);
}

bool func_188(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_189(-1, 0) == 8;
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

int func_189(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_190();
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

int func_190()
{
	return Global_1312736;
}

int func_191(int iParam0)
{
	if (func_188(iParam0, 0))
	{
		return 1;
	}
	if (func_192())
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

bool func_192()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

void func_193(int iParam0)
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

int func_194()
{
	switch (iLocal_577)
	{
		case 0:
			unk_0xCACEBBBEAD8F262E(joaat("cs2_03_fmhse_vfx_parent"));
			unk_0xCACEBBBEAD8F262E(joaat("cs2_03_fmhse_vfx_parent001"));
			unk_0xCACEBBBEAD8F262E(joaat("cs2_03_fmhse_vfx_parent002"));
			unk_0xCACEBBBEAD8F262E(joaat("cs2_03_fmhse_vfx_parent003"));
			unk_0xCACEBBBEAD8F262E(joaat("cs2_03_fmhse_vfx_parent004"));
			unk_0xCACEBBBEAD8F262E(joaat("cs2_03_fmhse_vfx_parent005"));
			unk_0xCACEBBBEAD8F262E(joaat("cs2_03_fmhse_vfx_parent006"));
			unk_0xCACEBBBEAD8F262E(joaat("cs2_03_fmhse_vfx_parent007"));
			unk_0xCACEBBBEAD8F262E(joaat("cs2_03_fmhse_vfx_parent008"));
			unk_0xCACEBBBEAD8F262E(joaat("cs2_03_fmhse_vfx_parent009"));
			unk_0xCACEBBBEAD8F262E(joaat("cs2_03_fmhse_vfx_parent010"));
			unk_0xCACEBBBEAD8F262E(joaat("cs2_03_fmhse_vfx_parent011"));
			unk_0xCACEBBBEAD8F262E(joaat("cs2_03_fmhse_vfx_parent012"));
			unk_0xCACEBBBEAD8F262E(joaat("cs2_03_fmhse_vfx_parent013"));
			unk_0xCACEBBBEAD8F262E(joaat("cs2_03_fmhse_vfx_parent014"));
			unk_0xCACEBBBEAD8F262E(joaat("cs2_03_fmhse_vfx_parent015"));
			iLocal_577++;
			break;
		
		case 1:
			if (((((((((((((((unk_0x7FC99CCC73354033(joaat("cs2_03_fmhse_vfx_parent")) && unk_0x7FC99CCC73354033(joaat("cs2_03_fmhse_vfx_parent001"))) && unk_0x7FC99CCC73354033(joaat("cs2_03_fmhse_vfx_parent002"))) && unk_0x7FC99CCC73354033(joaat("cs2_03_fmhse_vfx_parent003"))) && unk_0x7FC99CCC73354033(joaat("cs2_03_fmhse_vfx_parent004"))) && unk_0x7FC99CCC73354033(joaat("cs2_03_fmhse_vfx_parent005"))) && unk_0x7FC99CCC73354033(joaat("cs2_03_fmhse_vfx_parent006"))) && unk_0x7FC99CCC73354033(joaat("cs2_03_fmhse_vfx_parent007"))) && unk_0x7FC99CCC73354033(joaat("cs2_03_fmhse_vfx_parent008"))) && unk_0x7FC99CCC73354033(joaat("cs2_03_fmhse_vfx_parent009"))) && unk_0x7FC99CCC73354033(joaat("cs2_03_fmhse_vfx_parent010"))) && unk_0x7FC99CCC73354033(joaat("cs2_03_fmhse_vfx_parent011"))) && unk_0x7FC99CCC73354033(joaat("cs2_03_fmhse_vfx_parent012"))) && unk_0x7FC99CCC73354033(joaat("cs2_03_fmhse_vfx_parent013"))) && unk_0x7FC99CCC73354033(joaat("cs2_03_fmhse_vfx_parent014"))) && unk_0x7FC99CCC73354033(joaat("cs2_03_fmhse_vfx_parent015")))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_195()
{
	if (unk_0xD1ABB20CFF127CCC())
	{
		return 0;
	}
	if (unk_0xDF0ADAD7E584090D(0, 18) || unk_0xDF0ADAD7E584090D(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_196()
{
	unk_0x6DF414662D671A93();
	func_170(28, 45);
	func_149(0, 7, 0, 0, 1, 0, 1, 0);
	func_149(1, 8, 2, 29, 1, 0, 1, 0);
	func_149(2, 9, 2, 35, 5, 34, 1, 0);
	func_149(3, 10, 2, 42, 1, 0, 1, 0);
	func_157(0, 21, 2, 29, 1, 0, 1, 0, 1, 0);
	func_157(1, 22, 2, 36, 5, 34, 1, 0, 1, 0);
	func_157(2, 26, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(3, 23, 2, 37, 1, 0, 1, 0, 1, 0);
	func_198(4, 25, 3, 23, 1, 0, 1, 0, 1, 0);
	func_160(0, 30, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(1, 31, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(2, 32, 1, 3, 34, 1, 0, 1, 0, 1, 0);
	func_160(3, 33, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(4, 34, 1, 3, 34, 1, 0, 1, 0, 1, 0);
	func_160(5, 35, 0, 2, 29, 1, 0, 1, 0, 1, 0);
	func_160(6, 36, 0, 2, 37, 1, 0, 1, 0, 1, 0);
	func_160(7, 37, 0, 2, 29, 1, 0, 1, 0, 1, 0);
	func_160(8, 38, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(9, 56, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(10, 11, 0, 2, 44, 1, 0, 1, 0, 1, 0);
	func_160(11, 50, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(12, 51, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_197(0, 2, 33, 5, 34);
	func_197(4, 2, 43, 1, 0);
	func_197(2, 2, 39, 1, 0);
	if (iLocal_166 == 0)
	{
		if (func_87(37) && !func_87(44))
		{
			iLocal_166 = 3;
		}
		if (func_87(41) && !func_87(44))
		{
			iLocal_164 = 1;
			iLocal_166 = 1;
		}
		if (func_169(10, 11) == 2)
		{
			iLocal_166 = 2;
			iLocal_164 = 1;
		}
	}
	func_160(13, 10, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	if ((((func_87(37) && func_87(38)) || iLocal_164) && func_169(13, 10) == 10) && !func_82("CHI2_light"))
	{
		func_197(1, 2, 40, 1, 0);
		if (unk_0xCE3CB618AFE55EFB(iLocal_178))
		{
			unk_0xE1623437A3194332(&iLocal_178);
		}
		unk_0xE061C3261E51F663(10f, 5f, 4);
		func_12(1);
		func_176(11);
	}
}

void func_197(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_152(iParam1, iParam2, iParam3, iParam4, 1, 0, 1, 0))
	{
		switch (iParam0)
		{
			case 0:
				func_130("CHFAIL1");
				break;
			
			case 1:
				func_130("FRMSOON");
				break;
			
			case 2:
				func_130("FRMTRAI");
				break;
			
			case 3:
				if (unk_0xDC5D81351D6A4DDB(Local_113[11 /*33*/]))
				{
					if (unk_0x4915F4759304D5CF(Local_113[11 /*33*/]))
					{
						func_130("FRMCHI");
					}
				}
				if (unk_0xDC5D81351D6A4DDB(Local_113[10 /*33*/]))
				{
					if (unk_0x4915F4759304D5CF(Local_113[10 /*33*/]))
					{
						func_130("FRMCHI2");
					}
				}
				break;
			
			case 4:
				func_130("CHFAIL2");
				break;
			
			case 5:
				func_130("FRMGASF");
				break;
			}
	}
}

void func_198(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (!Local_390[iParam0 /*7*/].f_1)
	{
		if (func_199(iParam2, iParam3))
		{
			func_157(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 1, 0);
		}
	}
}

int func_199(int iParam0, int iParam1)
{
	if (Local_390[iParam0 /*7*/] == iParam1)
	{
		if (Local_390[iParam0 /*7*/].f_1)
		{
			return 1;
		}
	}
	else if (Local_390[iParam0 /*7*/] != 0)
	{
	}
	return 0;
}

void func_200()
{
	func_170(5, 31);
	func_149(0, 2, 0, 0, 1, 0, 1, 0);
	func_149(1, 3, 2, 8, 1, 0, 1, 0);
	func_149(2, 5, 2, 9, 1, 0, 1, 0);
	func_149(3, 11, 0, 0, 1, 0, 1, 0);
	func_149(4, 4, 2, 12, 1, 0, 1, 0);
	func_160(0, 17, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(1, 13, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(2, 14, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(3, 16, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(4, 15, 0, 2, 14, 6, 9, 1, 0, 1, 0);
	func_160(7, 19, 0, 2, 9, 1, 0, 1, 0, 1, 0);
	func_160(8, 20, 0, 2, 12, 4, 9, 1, 0, 1, 0);
	func_160(9, 21, 0, 2, 12, 4, 13, 1, 0, 1, 0);
	func_160(10, 22, 0, 2, 12, 1, 0, 1, 0, 1, 0);
	func_160(11, 23, 0, 2, 11, 1, 0, 1, 0, 1, 0);
	func_160(12, 24, 0, 2, 14, 1, 0, 1, 0, 1, 0);
	func_160(5, 26, 0, 2, 11, 6, 16, 6, 9, 1, 0);
	func_160(6, 27, 0, 2, 9, 1, 0, 1, 0, 1, 0);
	func_160(14, 40, 0, 2, 26, 1, 0, 1, 0, 1, 0);
	func_160(13, 39, 0, 2, 25, 1, 0, 1, 0, 1, 0);
	func_160(15, 28, 0, 2, 11, 6, 16, 1, 0, 1, 0);
	func_160(16, 29, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(17, 43, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(18, 44, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(19, 45, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(0, 1, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(2, 2, 2, 21, 5, 16, 1, 0, 1, 0);
	func_157(3, 3, 2, 12, 4, 17, 1, 0, 1, 0);
	func_157(4, 5, 2, 18, 1, 0, 1, 0, 1, 0);
	func_157(5, 6, 2, 19, 1, 0, 1, 0, 1, 0);
	func_157(6, 7, 2, 27, 5, 9, 1, 0, 1, 0);
	func_157(7, 10, 2, 9, 5, 21, 5, 12, 1, 0);
	func_157(8, 11, 2, 9, 4, 21, 5, 12, 1, 0);
	func_157(9, 14, 2, 9, 4, 12, 1, 0, 1, 0);
	func_157(10, 12, 2, 9, 4, 12, 1, 0, 1, 0);
	func_157(11, 13, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(12, 16, 2, 9, 4, 23, 5, 12, 1, 0);
	func_157(13, 17, 2, 14, 5, 12, 4, 9, 1, 0);
	func_157(14, 18, 3, 20, 1, 0, 1, 0, 1, 0);
	func_157(15, 19, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(16, 20, 2, 9, 4, 10, 4, 14, 5, 12);
	func_197(4, 2, 24, 1, 0);
	func_197(5, 2, 30, 1, 0);
	if (func_87(11) && func_87(29))
	{
		func_176(7);
	}
}

void func_201()
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	
	unk_0x27C2A6E04DBAB7B9(2004.447f, 3076.807f, 46.6069f, 10f);
	unk_0x020D229906F0154B(1);
	if (((func_195() && iLocal_150 > 0) && iLocal_150 < 7) && unk_0xFD34717937104F1C() > iLocal_159)
	{
		iLocal_150 = 10;
		iLocal_158 = 0;
		bLocal_165 = true;
	}
	if (iLocal_150 < 10)
	{
		if (unk_0x71364F510A1CB69F() && !unk_0x3BE8B7AEED1A3971())
		{
			unk_0x70C1F5AA59767FE6(1000);
		}
	}
	if (iLocal_375)
	{
		unk_0xB718CC67E976213F(to_float(timera()));
	}
	unk_0x74BF5F6EEF62D5A9();
	switch (iLocal_150)
	{
		case 0:
			if (unk_0xCB79242F310A5BB2())
			{
				unk_0x9D7A6D81C3BE2AAE("CHI_2_MCS_5", 8);
				iLocal_374 = 1;
				bLocal_165 = false;
				unk_0x0BCF88110C26D4F4(5, 5, 5, 5);
				unk_0x69DE79FEED976194();
				unk_0xF24BBF976F1AC2B6(0);
				iLocal_378 = 0;
				iLocal_375 = 1;
				vVar0 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) };
				fVar1 = func_96(2458.223f, 4986.042f, 49.05241f, vVar0, 1);
				if (fVar1 > 180f)
				{
					fVar1 = (fVar1 - 360f);
				}
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					iVar2 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
				}
				if (((unk_0x1095F403F52B42E1(iVar2, 0) && unk_0x7C197233F79C2CB8(unk_0x8F474E419F56E48D(iVar2))) && unk_0x26D28D230F871E8D(iVar2)) || ((unk_0x1095F403F52B42E1(iVar2, 0) && unk_0xCA8C103FCD316F89(unk_0x8F474E419F56E48D(iVar2))) && unk_0x26D28D230F871E8D(iVar2)))
				{
					if (fVar1 < func_216(-2.5f) && fVar1 > func_216(0.5f))
					{
						iLocal_150 = 6;
						settimera(30000);
						unk_0xB718CC67E976213F(30000f);
						iLocal_158 = 36000;
					}
					else
					{
						iLocal_150 = 7;
						settimera(36000);
						unk_0xB718CC67E976213F(36000f);
						iLocal_158 = 42000;
					}
				}
				else
				{
					if (unk_0xDC5D81351D6A4DDB(iVar2))
					{
						if (unk_0x1095F403F52B42E1(iVar2, 0))
						{
							if (!(unk_0x7C197233F79C2CB8(unk_0x8F474E419F56E48D(iVar2)) && unk_0x26D28D230F871E8D(iVar2)) && !(unk_0xCA8C103FCD316F89(unk_0x8F474E419F56E48D(iVar2)) && unk_0x26D28D230F871E8D(iVar2)))
							{
								unk_0x99F546A9200EA026(iVar2, 1084227584);
							}
						}
					}
					if (fVar1 < func_216(-1.33f) && fVar1 > func_216(-1.92f))
					{
						iLocal_150 = 1;
						settimera(0);
						unk_0xB718CC67E976213F(0f);
						iLocal_158 = 6000;
					}
					else if (fVar1 < func_216(0.96f) && fVar1 > func_216(-1.33f))
					{
						iLocal_150 = 2;
						settimera(6000);
						unk_0xB718CC67E976213F(6000f);
						iLocal_158 = 12000;
					}
					else if (fVar1 < func_216(2.29f) && fVar1 > func_216(0.96f))
					{
						iLocal_150 = 3;
						settimera(12000);
						unk_0xB718CC67E976213F(12000f);
						iLocal_158 = 18000;
					}
					else if (fVar1 < func_216(-2.81f) || fVar1 > func_216(2.29f))
					{
						iLocal_150 = 4;
						settimera(18000);
						unk_0xB718CC67E976213F(18000f);
						iLocal_158 = 24000;
					}
					else
					{
						settimera(24000);
						unk_0xB718CC67E976213F(24000f);
						iLocal_158 = 30000;
						iLocal_150 = 5;
					}
				}
				iLocal_376 = 1;
				unk_0xA5CFBAB33EA6079E(0);
				func_211(&Local_184, 1, 0);
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					iLocal_84 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
					vLocal_112 = { unk_0x57323E573695B13F(iLocal_84) };
					unk_0xB29E08C7AB729BAD(iLocal_84, true);
					unk_0x7C73A424F1117528(iLocal_84, false, 0);
				}
				unk_0xFA28790B579CDEB0();
				if (iLocal_150 == 1)
				{
					iLocal_378 = 1;
					func_69(2559.012f, 4958.518f, 36.02959f, 2585.447f, 4993.435f, 64.62565f, 48f, 2594.651f, 4948.114f, 38.0899f, 283.7287f, 22f, 22f, 15f, 1, 1, 1, 0, 0);
					if (unk_0xDC5D81351D6A4DDB(iVar2))
					{
						if (unk_0x1095F403F52B42E1(iVar2, 0))
						{
							unk_0xC19EDC1D7179164C(iVar2, false, 1, 0);
						}
					}
					unk_0xFDD15D670AD33E10(2445.139f, 4978.642f, 52.1489f, 150f, 1, 1, 0, false);
					unk_0xFDD15D670AD33E10(2578.523f, 4982.284f, 51.4416f, 13f, 1, 0, 0, false);
					unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 2578.419f, 4981.901f, 50.587f, 1, 0, 0, 1);
					unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 49.2184f);
					unk_0x836A6A722DEA63F1(unk_0xA19140A5C42D8715());
					unk_0x3A3E4B7C6FBE305D(unk_0xA19140A5C42D8715(), 0, 0);
					unk_0x06FE8ECBF0B8333F(unk_0xA19140A5C42D8715(), 1f);
					unk_0xF757C0D3A087F145(unk_0xA19140A5C42D8715(), -668482597, 0, 0, 0);
					unk_0x2F89329397A277BC(&uVar3);
					unk_0x71CBFF70987FE89A(0, 2570.543f, 4982.002f, 50.6795f, 1f, 20000, 1193033728, 1056964608);
					unk_0x47D73A216DD513C8(0, 88.7065f, 0);
					unk_0x301F42EEE3C40328(uVar3);
					unk_0xE1072FA2FECBAD96(unk_0xA19140A5C42D8715(), uVar3);
					unk_0x3A95A0A3221D4208(&uVar3);
					iLocal_155 = unk_0x57FC10C74CC15F22("DEFAULT_SPLINE_CAMERA", 1);
					unk_0xD07B71F12856EB70(iLocal_155, 2538.6f, 4976.9f, 50.6f, -1.8f, 0f, 93.2f, 5000, 3, 2);
					unk_0xD07B71F12856EB70(iLocal_155, 2536.153f, 4976.7f, 50.5267f, -1.8f, 0f, 93.2f, 6000, 3, 2);
					unk_0xF62A5A3CB8DB2402(iLocal_155, 34.9f);
					unk_0xAD7559838BDE6F72(iLocal_155, 0);
				}
				else
				{
					switch (iLocal_150)
					{
						case 2:
							iLocal_155 = unk_0x57FC10C74CC15F22("DEFAULT_SPLINE_CAMERA", 1);
							unk_0xD07B71F12856EB70(iLocal_155, 2426.8f, 5088.3f, 51.2f, 0f, 0f, -169f, 5000, 3, 2);
							unk_0xD07B71F12856EB70(iLocal_155, 2427.8f, 5087.2f, 51.2f, 0f, 0f, -169.7f, 6000, 3, 2);
							unk_0xF62A5A3CB8DB2402(iLocal_155, 28.5f);
							unk_0xAD7559838BDE6F72(iLocal_155, 0);
							break;
						
						case 3:
							iLocal_155 = unk_0x57FC10C74CC15F22("DEFAULT_SPLINE_CAMERA", 1);
							unk_0xD07B71F12856EB70(iLocal_155, 2326.3f, 4985.6f, 51.5f, 0f, 0f, -89.1f, 5000, 3, 2);
							unk_0xD07B71F12856EB70(iLocal_155, 2328f, 4985.4f, 52.1f, 0f, 0f, -89.1f, 6000, 3, 2);
							unk_0xF62A5A3CB8DB2402(iLocal_155, 28.5f);
							unk_0xAD7559838BDE6F72(iLocal_155, 0);
							break;
						
						case 4:
							iLocal_155 = unk_0x57FC10C74CC15F22("DEFAULT_SPLINE_CAMERA", 1);
							unk_0xD07B71F12856EB70(iLocal_155, 2403.6f, 4889.7f, 47.5f, 3.4f, 0f, -19.5f, 5000, 3, 2);
							unk_0xD07B71F12856EB70(iLocal_155, Vector(47.5f, 4889.7f, 2403.6f) + Vector(0.07f, 2.15f, 0.8f), 3.4f, 0f, -19.5f, 6000, 3, 2);
							unk_0xF62A5A3CB8DB2402(iLocal_155, 29.8f);
							unk_0xAD7559838BDE6F72(iLocal_155, 0);
							break;
						
						case 5:
							iLocal_155 = unk_0x57FC10C74CC15F22("DEFAULT_SPLINE_CAMERA", 1);
							unk_0xD07B71F12856EB70(iLocal_155, 2493.4f, 4934.8f, 45.7f, 5.2f, 0f, 48f, 5000, 3, 2);
							unk_0xD07B71F12856EB70(iLocal_155, Vector(45.7f, 4934.8f, 2493.4f) + Vector(0f, 1f, -1f), 5.2f, 0f, 48f, 6000, 3, 2);
							unk_0xF62A5A3CB8DB2402(iLocal_155, 28.5f);
							unk_0xAD7559838BDE6F72(iLocal_155, 0);
							break;
						
						case 6:
							iLocal_155 = unk_0x57FC10C74CC15F22("DEFAULT_SPLINE_CAMERA", 1);
							unk_0xD07B71F12856EB70(iLocal_155, 2570.6f, 4982f, 151.6f, -47.9f, 0f, 88.1f, 5000, 3, 2);
							unk_0xD07B71F12856EB70(iLocal_155, 2487.8f, 4896.9f, 151.9f, -47.2f, 0f, 28.8f, 15000, 3, 2);
							unk_0xF62A5A3CB8DB2402(iLocal_155, 28.5f);
							unk_0xAD7559838BDE6F72(iLocal_155, 0);
							break;
						
						case 7:
							iLocal_155 = unk_0x57FC10C74CC15F22("DEFAULT_SPLINE_CAMERA", 1);
							unk_0xD07B71F12856EB70(iLocal_155, 2487.8f, 4896.9f, 151.9f, -47.2f, 0f, 28.8f, 5000, 3, 2);
							unk_0xD07B71F12856EB70(iLocal_155, 2570.6f, 4982f, 151.6f, -47.9f, 0f, 88.1f, 15000, 3, 2);
							unk_0xF62A5A3CB8DB2402(iLocal_155, 28.5f);
							unk_0xAD7559838BDE6F72(iLocal_155, 0);
							break;
						}
				}
				if (iLocal_150 < 6)
				{
					unk_0xBC1542DDC31676C2(iLocal_155, "Hand_shake", 0.2f);
				}
				else
				{
					unk_0xBC1542DDC31676C2(iLocal_155, "Hand_shake", 0.7f);
				}
				unk_0x930701157A4B9374(iLocal_155, true);
				unk_0x8E88E73F74A9FF79(true, 0, 3000, 1, 0, 0);
				unk_0xF748D06B9A97191E(4);
				unk_0x8969D02DEDC106D2("CHI_2_FARMHOUSE_OVERVIEW");
				func_205(1);
				unk_0xBF6EED5D6E0CD9BF(0f);
				unk_0x9BB7BCDF2AC2D6F9(0);
				unk_0x4F93066CECE72793();
				unk_0x135C61E339DABBAC(1);
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 32);
				func_186(1, 1, 1, 0, 0);
				unk_0x1BE107CEA70974D0(unk_0xA19140A5C42D8715(), 0, 0);
				iLocal_159 = unk_0xFD34717937104F1C() + 1000;
				iVar4 = 0;
				while (iVar4 < Local_113)
				{
					if (!unk_0x4915F4759304D5CF(Local_113[iVar4 /*33*/]))
					{
						unk_0x605FF8F1D0D5E4DE(Local_113[iVar4 /*33*/], true);
					}
					iVar4++;
				}
				iLocal_160 = unk_0x35C6E06B120EB2E3(26, joaat("a_m_y_methhead_01"), 2460.449f, 4976.938f, 45.5765f, 243.4917f, 1, true);
				unk_0xF0188A1B49D79AF7(iLocal_160, joaat("weapon_microsmg"), -1, true, true);
				if (!unk_0x4915F4759304D5CF(iLocal_160))
				{
					func_93();
					unk_0x00135C6A6DDEC2EA(0, 1);
					unk_0x956B3CF461C0C1C9(0, 2463.016f, 4974.97f, 45.5765f, 1f, -1, 0.5f, 1, 1193033728);
					unk_0x956B3CF461C0C1C9(0, 2452.833f, 4964.785f, 45.5765f, 1f, -1, 0.5f, 1, 1193033728);
					unk_0x4AABC2A9FCCE3C8F(0, 500);
					unk_0x956B3CF461C0C1C9(0, 2460.449f, 4976.938f, 45.5765f, 1f, -1, 0.5f, 0, 1193033728);
					func_92(&iLocal_160, 1);
				}
				iLocal_147 = unk_0x48CFBECB146FD1A1(joaat("dubsta"), 2479.961f, 4990f, 45.8f, -5.37f, 1, 1, 0);
				func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
				iLocal_150 = 3;
			}
			break;
		
		case 3:
			if (timera() > iLocal_158)
			{
				unk_0xA5CFBAB33EA6079E(0);
				iLocal_155 = unk_0x57FC10C74CC15F22("DEFAULT_SPLINE_CAMERA", 1);
				unk_0xD07B71F12856EB70(iLocal_155, 2445.944f, 4962.986f, 51.4782f, 7.9159f, 0f, 34.5909f, 5000, 3, 2);
				unk_0xD07B71F12856EB70(iLocal_155, 2445.684f, 4963.368f, 51.6659f, 3.6033f, 0f, 34.5909f, 3500, 3, 2);
				unk_0xF62A5A3CB8DB2402(iLocal_155, 34f);
				unk_0xAD7559838BDE6F72(iLocal_155, 0);
				unk_0xBC1542DDC31676C2(iLocal_155, "Hand_shake", 0.5f);
				iLocal_158 += 3500;
				iLocal_150++;
			}
			break;
		
		case 4:
			if (timera() > iLocal_158)
			{
				unk_0xA5CFBAB33EA6079E(0);
				iLocal_155 = unk_0x57FC10C74CC15F22("DEFAULT_SPLINE_CAMERA", 1);
				unk_0xD07B71F12856EB70(iLocal_155, 2465.07f, 4946.688f, 45.3372f, 7.1461f, 0f, 30.9281f, 5000, 3, 2);
				unk_0xD07B71F12856EB70(iLocal_155, 2466.011f, 4947.377f, 45.3509f, 7.1461f, 0f, 32.3761f, 3000, 3, 2);
				unk_0xF62A5A3CB8DB2402(iLocal_155, 34f);
				unk_0xAD7559838BDE6F72(iLocal_155, 0);
				unk_0xBC1542DDC31676C2(iLocal_155, "Hand_shake", 0.5f);
				iLocal_158 += 3000;
				iLocal_150++;
			}
			break;
		
		case 5:
			iLocal_377 = 1;
			if (timera() > iLocal_158)
			{
				iLocal_377 = 1;
				unk_0xA5CFBAB33EA6079E(0);
				iLocal_155 = unk_0x57FC10C74CC15F22("DEFAULT_SPLINE_CAMERA", 1);
				unk_0xD07B71F12856EB70(iLocal_155, 2509.691f, 4971.024f, 44.1325f, 7.2578f, 0f, 88.5226f, 5000, 3, 2);
				unk_0xD07B71F12856EB70(iLocal_155, 2509.415f, 4971.163f, 44.1674f, 6.6554f, 0f, 89.4229f, 2500, 3, 2);
				unk_0xF62A5A3CB8DB2402(iLocal_155, 37.34f);
				unk_0xAD7559838BDE6F72(iLocal_155, 0);
				unk_0xBC1542DDC31676C2(iLocal_155, "Hand_shake", 0.5f);
				iLocal_158 += 2500;
				iLocal_150++;
			}
			break;
		
		case 6:
			if (timera() > iLocal_158)
			{
				if (func_204())
				{
					unk_0x4F93066CECE72793();
					unk_0x135C61E339DABBAC(1);
					unk_0x377C0A26702F6613(6.818f);
					if (unk_0x1095F403F52B42E1(iLocal_147, 0))
					{
						unk_0xE216F8B2802ABABF(iLocal_147, "EXL_2_abandoned_car", 1, joaat("dubsta"), 0);
					}
					unk_0x80D42964D19AF118(0);
					iLocal_374 = 0;
					iLocal_150 = 11;
				}
			}
			break;
		
		case 10:
			if (unk_0xDC5D81351D6A4DDB(iLocal_84) && unk_0x1095F403F52B42E1(iLocal_84, 0))
			{
				unk_0x2EFDA14DBA0F33F8(iLocal_84);
			}
			if (!unk_0x71364F510A1CB69F() && !unk_0x607776744A243309())
			{
				unk_0x9662BE461F9FDF9E(500);
			}
			if ((unk_0x71364F510A1CB69F() && !unk_0x5CA3186381FC012C()) || (unk_0x99E48E2CD778F380() && unk_0x9375DEC0CFA8D39E(1)))
			{
				iLocal_150++;
			}
			break;
		
		case 11:
			if (unk_0xDC5D81351D6A4DDB(iLocal_84) && unk_0x1095F403F52B42E1(iLocal_84, 0))
			{
				unk_0x2EFDA14DBA0F33F8(iLocal_84);
			}
			if ((unk_0x71364F510A1CB69F() && !unk_0x5CA3186381FC012C()) || (unk_0x99E48E2CD778F380() && unk_0x9375DEC0CFA8D39E(1)))
			{
				unk_0xA5CFBAB33EA6079E(0);
				unk_0x8E88E73F74A9FF79(false, 0, 3000, 1, 0, 0);
				if (func_182() && !bLocal_165)
				{
					unk_0xE60B9F9B48D4783F("CamPushInNeutral", 0, 0);
					unk_0xE11F00B4AC919F45(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
				unk_0xB6B24463498F5F41();
				if (func_67(unk_0xA19140A5C42D8715(), 2570.543f, 4982.002f, 50.6795f, 1) < 15f && func_67(unk_0xA19140A5C42D8715(), 2570.543f, 4982.002f, 50.6795f, 1) > 1f)
				{
					unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 2570.543f, 4982.002f, 50.6795f, 1, 0, 0, 1);
					unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 98.21f);
				}
				else if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), func_96(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), 2458.223f, 4986.042f, 49.05241f, 1));
				}
				unk_0xD87B76260C547F31(0f);
				unk_0xAA32DD4848CF93E0(-6.3f, 1065353216);
				unk_0x377C0A26702F6613(6.818f);
				unk_0x3A3E4B7C6FBE305D(unk_0xA19140A5C42D8715(), 0, 0);
				unk_0x19A6703D21831D53();
				unk_0x5AD7D03C214BDA88("CHI_2_FARMHOUSE_OVERVIEW");
				unk_0x4F93066CECE72793();
				unk_0x135C61E339DABBAC(1);
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
				func_205(0);
				if (unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), joaat("weapon_sniperrifle"), 0))
				{
					if (unk_0x8F62F4EC66847EC2(unk_0xA19140A5C42D8715(), joaat("weapon_sniperrifle")) < 15)
					{
						unk_0x41FC0EC2502D4105(unk_0xA19140A5C42D8715(), joaat("weapon_sniperrifle"), 50);
					}
				}
				func_186(0, 1, 1, 0, 0);
				if (unk_0xDC5D81351D6A4DDB(iLocal_160))
				{
					unk_0x680F17660351F21B(&iLocal_160);
				}
				iLocal_380 = func_18(4);
				if (iLocal_380 != -1)
				{
					if (!unk_0x4915F4759304D5CF(Local_113[iLocal_380 /*33*/]))
					{
						unk_0x680F17660351F21B(&(Local_113[iLocal_380 /*33*/]));
					}
					if (unk_0xDC5D81351D6A4DDB(Local_113[iLocal_380 /*33*/].f_20))
					{
						unk_0xC0AC848E56940C34(&(Local_113[iLocal_380 /*33*/].f_20));
					}
					Local_119[iLocal_380 /*24*/].f_3 = 1;
					Local_113[iLocal_380 /*33*/].f_5 = 0;
					Local_113[iLocal_380 /*33*/].f_14 = 0;
					Local_113[iLocal_380 /*33*/].f_3 = 2;
				}
				iLocal_381 = func_18(5);
				if (iLocal_381 != -1)
				{
					if (!unk_0x4915F4759304D5CF(Local_113[iLocal_381 /*33*/]))
					{
						unk_0x680F17660351F21B(&(Local_113[iLocal_381 /*33*/]));
					}
					if (unk_0xDC5D81351D6A4DDB(Local_113[iLocal_381 /*33*/].f_20))
					{
						unk_0xC0AC848E56940C34(&(Local_113[iLocal_381 /*33*/].f_20));
					}
					Local_119[iLocal_381 /*24*/].f_3 = 1;
					Local_113[iLocal_381 /*33*/].f_5 = 0;
					Local_113[iLocal_381 /*33*/].f_14 = 0;
					Local_113[iLocal_381 /*33*/].f_3 = 2;
				}
				func_31(20, 0);
				if (!unk_0x4915F4759304D5CF(iLocal_161))
				{
					unk_0x680F17660351F21B(&iLocal_161);
				}
				if (!unk_0x4915F4759304D5CF(iLocal_162))
				{
					unk_0x680F17660351F21B(&iLocal_162);
				}
				if (func_68(iLocal_147))
				{
					unk_0x4C842FAB634AC89E(&iLocal_147);
				}
				if (unk_0xDC5D81351D6A4DDB(iLocal_183))
				{
					unk_0xC0AC848E56940C34(&iLocal_183);
				}
				func_202();
				iLocal_111 = 0;
				func_27();
				unk_0xA5DE74AE39867B03(joaat("prop_phone_ing"));
				unk_0xA5DE74AE39867B03(joaat("dubsta"));
				iVar5 = 0;
				while (iVar5 < Local_113)
				{
					if (!unk_0x4915F4759304D5CF(Local_113[iVar5 /*33*/]))
					{
						unk_0x605FF8F1D0D5E4DE(Local_113[iVar5 /*33*/], false);
					}
					iVar5++;
				}
				unk_0xD87B76260C547F31(0f);
				unk_0xAA32DD4848CF93E0(-6.3f, 1065353216);
				if (unk_0xDC5D81351D6A4DDB(iLocal_84))
				{
					if (unk_0x1095F403F52B42E1(iLocal_84, 0))
					{
						unk_0xB29E08C7AB729BAD(iLocal_84, false);
						if (unk_0xCA8C103FCD316F89(unk_0x8F474E419F56E48D(iLocal_84)))
						{
							unk_0xE192BEF245E3374D(iLocal_84, vLocal_112);
							unk_0x692D5500D82E4F5D(unk_0xA19140A5C42D8715(), iLocal_84, -1);
						}
						unk_0xC19EDC1D7179164C(iLocal_84, true, 1, 0);
						if (unk_0x7C197233F79C2CB8(unk_0x8F474E419F56E48D(iLocal_84)))
						{
							unk_0x76D3D51F5F66367F(iLocal_84, 0f, 0f, unk_0x552C823E1D2A019C(iLocal_84), 2, 1);
							unk_0xA7E7312A2DC89797(iLocal_84);
							unk_0xE192BEF245E3374D(iLocal_84, 1f, 1f, 1f);
							unk_0x692D5500D82E4F5D(unk_0xA19140A5C42D8715(), iLocal_84, -1);
						}
						if (iLocal_378 == 0)
						{
							unk_0x692D5500D82E4F5D(unk_0xA19140A5C42D8715(), iLocal_84, -1);
						}
						unk_0x7C73A424F1117528(iLocal_84, true, 0);
					}
				}
				unk_0x7C73A424F1117528(unk_0xA19140A5C42D8715(), true, 0);
				unk_0x209E9FD79CA91034(unk_0xD4E735F4B6A956AC(), 1);
				unk_0x77CECBF0C98D2A47();
				if (unk_0x71364F510A1CB69F())
				{
					unk_0x70C1F5AA59767FE6(1000);
				}
				unk_0xF24BBF976F1AC2B6(1);
				func_176(11);
			}
			break;
	}
}

void func_202()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(iLocal_145))
	{
		unk_0x4C842FAB634AC89E(&iLocal_145);
	}
	iVar0 = 0;
	while (iVar0 < Local_113)
	{
		if (unk_0xDC5D81351D6A4DDB(Local_113[iVar0 /*33*/]))
		{
			unk_0x680F17660351F21B(&(Local_113[iVar0 /*33*/]));
		}
		if (unk_0xDC5D81351D6A4DDB(Local_113[iVar0 /*33*/].f_20))
		{
			unk_0xC0AC848E56940C34(&(Local_113[iVar0 /*33*/].f_20));
		}
		Local_113[iVar0 /*33*/].f_3 = 0;
		Local_113[iVar0 /*33*/].f_4 = 0;
		Local_113[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
		Local_113[iVar0 /*33*/].f_9 = { 0f, 0f, 0f };
		Local_113[iVar0 /*33*/].f_2 = 25;
		Local_113[iVar0 /*33*/].f_5 = 0;
		Local_113[iVar0 /*33*/].f_12 = 0f;
		Local_113[iVar0 /*33*/].f_13 = 0f;
		Local_113[iVar0 /*33*/].f_14 = 0;
		Local_113[iVar0 /*33*/].f_15 = 0;
		Local_113[iVar0 /*33*/].f_17 = 0;
		Local_113[iVar0 /*33*/].f_16 = 0;
		Local_113[iVar0 /*33*/].f_21 = 0;
		Local_113[iVar0 /*33*/].f_22 = 0;
		Local_119[iVar0 /*24*/].f_3 = 1;
		iVar0++;
	}
	if (unk_0xF93654E07E20E3CF(uLocal_168))
	{
		unk_0xBCFB7F2BD32812C6(uLocal_168);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_169)
	{
		if (unk_0xF93654E07E20E3CF(iLocal_169[iVar0]))
		{
			unk_0xBCFB7F2BD32812C6(iLocal_169[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_170)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_170[iVar0]))
		{
			unk_0xC0AC848E56940C34(&(iLocal_170[iVar0]));
		}
		iVar0++;
	}
	func_203(&Local_119, &uLocal_203, cLocal_131, 12f, 2482.197f, 4975.367f, 44.7288f, 121f, 1);
}

void func_203(var uParam0, var uParam1, char* sParam2, float fParam3, vector3 vParam4, float fParam5, int iParam6)
{
	int iVar0;
	
	iLocal_57 = iLocal_57;
	uLocal_70 = fParam3;
	vLocal_71 = { vParam4 };
	fLocal_72 = fParam5;
	Local_77 = { *uParam1 };
	cLocal_78 = sParam2;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(uParam0[iVar0 /*24*/])->f_1 = 0;
		(uParam0[iVar0 /*24*/])->f_2 = 0;
		(uParam0[iVar0 /*24*/])->f_3 = iParam6;
		(uParam0[iVar0 /*24*/])->f_4 = 0;
		(uParam0[iVar0 /*24*/])->f_5 = 0;
		(uParam0[iVar0 /*24*/])->f_7 = 0;
		(uParam0[iVar0 /*24*/])->f_8 = 0;
		(uParam0[iVar0 /*24*/])->f_10 = 0;
		(uParam0[iVar0 /*24*/])->f_11 = 0;
		(uParam0[iVar0 /*24*/])->f_12 = { 0f, 0f, 0f };
		(uParam0[iVar0 /*24*/])->f_15 = { 0f, 0f, 0f };
		(uParam0[iVar0 /*24*/])->f_18 = 0f;
		iVar0++;
	}
	bLocal_53 = false;
	bLocal_54 = false;
	iLocal_55 = 0;
	bLocal_56 = false;
	iLocal_57 = 0;
	bLocal_75 = true;
	iLocal_74 = 0;
	iLocal_58 = 0;
	iLocal_60 = 0;
	iLocal_61 = -1;
	iLocal_62 = -1;
	iLocal_63 = 0;
	iLocal_64 = 0;
	iLocal_65 = 0;
	iLocal_66 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
	iLocal_69 = 0;
	unk_0xE92E60D6C15273E4(-455129387, 31);
	iLocal_52 = 0;
}

bool func_204()
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

void func_205(bool bParam0)
{
	if (bParam0)
	{
		func_210();
		if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
		{
			unk_0x2BCFB39E86340DAA(&Global_2384, 16);
		}
		Global_14513.f_1 = 1;
		if (func_209(0))
		{
			func_206(0);
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

void func_206(int iParam0)
{
	if (func_208())
	{
		return;
	}
	if (Global_14681)
	{
		func_207(0, 0);
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
	if (!func_40())
	{
		Global_14513.f_1 = 3;
	}
}

void func_207(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_209(0))
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

bool func_208()
{
	return unk_0x05EFB6A616B6FADE(Global_1678593, 19);
}

int func_209(int iParam0)
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

void func_210()
{
	if (Global_14513.f_1 == 9 || Global_14513.f_1 == 10)
	{
		Global_15875 = 0;
		Global_15871 = 1;
	}
}

void func_211(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x05EFB6A616B6FADE(iParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_215(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xCE3CB618AFE55EFB(iParam0->f_1[iVar0]))
		{
			unk_0xE1623437A3194332(&(iParam0->f_1[iVar0]));
		}
		func_214(iVar0, iParam0);
		func_213(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0xFA57C719261AA55D(&(iParam0->f_13), iVar0);
			unk_0xFA57C719261AA55D(&(iParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0xCE3CB618AFE55EFB(*iParam0))
	{
		unk_0xE1623437A3194332(iParam0);
	}
	iParam0->f_6 = 0;
	iParam0->f_12 = 0;
	iParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x4915F4759304D5CF(iParam0->f_17[iVar0]))
		{
			unk_0xB583A7C3FEE69710(iParam0->f_17[iVar0], 1);
			unk_0xFC03CFA3CE79D871(iParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0x13E0A8160525AE55(iParam0->f_17[iVar0], 32, true);
				unk_0x13E0A8160525AE55(iParam0->f_17[iVar0], 305, false);
			}
			unk_0x13E0A8160525AE55(iParam0->f_17[iVar0], 268, false);
			if (bParam1)
			{
				if (unk_0x097A982B0640FA32(iParam0->f_17[iVar0], func_212()) && iParam0->f_17[iVar0] != unk_0xA19140A5C42D8715())
				{
					unk_0xF8136E11BE4BEAC3(iParam0->f_17[iVar0]);
				}
			}
			if (!unk_0x05EFB6A616B6FADE(iParam0->f_13, 29))
			{
				unk_0x90683BECDF939A74(iParam0->f_17[iVar0], 0, -1, 0);
			}
			iParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		unk_0xB583A7C3FEE69710(unk_0xA19140A5C42D8715(), 1);
		unk_0xFC03CFA3CE79D871(unk_0xA19140A5C42D8715(), 1);
	}
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (bParam2)
		{
			unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 32, true);
		}
	}
	iParam0->f_21 = 0;
}

var func_212()
{
	return unk_0x64C831B843E08AC9(unk_0xA6580F898F4E801C());
}

void func_213(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xFA57C719261AA55D(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xFA57C719261AA55D(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xFA57C719261AA55D(&(uParam1->f_13), 19);
			break;
	}
}

void func_214(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xFA57C719261AA55D(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xFA57C719261AA55D(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xFA57C719261AA55D(&(uParam1->f_13), 16);
			break;
	}
}

void func_215(var uParam0)
{
	if (unk_0xCE3CB618AFE55EFB(uParam0->f_5))
	{
		unk_0xE1623437A3194332(&(uParam0->f_5));
	}
}

float func_216(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_217()
{
	int iVar0;
	
	func_170(1, 4);
	func_160(0, 2, 0, 2, 3, 1, 0, 1, 0, 1, 0);
	func_160(1, 3, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(3, 42, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(4, 47, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(5, 4, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(6, 6, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(7, 7, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(8, 8, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(9, 9, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_149(0, 1, 2, 2, 1, 0, 1, 0);
	func_197(3, 0, 0, 1, 0);
	if ((func_67(unk_0xA19140A5C42D8715(), 2458.223f, 4986.042f, 49.05241f, 0) < 107.9f || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2374.441f, 4930.564f, 34.73784f, 2478.099f, 5077.488f, 60.63246f, 185f, 0, false, 0)) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2396.726f, 4887.434f, 33.85329f, 2510.54f, 5003.356f, 58.01184f, 158.25f, 0, false, 0))
	{
		if (unk_0xCE3CB618AFE55EFB(Local_184.f_5))
		{
			unk_0x3E46F0AAE4B470FB(Local_184.f_6, false);
		}
		func_176(11);
	}
	else
	{
		switch (iLocal_150)
		{
			case 0:
				func_32(2, 0);
				func_32(3, 0);
				func_32(1, 0);
				func_32(5, 0);
				func_261(5, -20);
				unk_0xBF6EED5D6E0CD9BF(0f);
				unk_0x9BB7BCDF2AC2D6F9(0);
				iLocal_150++;
				break;
			
			case 1:
				if (func_221(&Local_184, 2608.151f, 4949.754f, 39.4f, 9f, 9f, 2f, 1, "FRMCHSE_1", 1, 1, -1))
				{
					unk_0xE061C3261E51F663(6f, 6f, 3);
					iLocal_150++;
					func_211(&Local_184, 1, 0);
					func_31(3, 1);
					if (unk_0x2F8EAF18929E1E59("CHI_2_DRIVE_TO_FARMHOUSE"))
					{
						unk_0x5AD7D03C214BDA88("CHI_2_DRIVE_TO_FARMHOUSE");
					}
					if (unk_0x2F8EAF18929E1E59("CHI_2_DRIVE_ROCK_RADIO"))
					{
						unk_0x5AD7D03C214BDA88("CHI_2_DRIVE_ROCK_RADIO");
					}
				}
				break;
			
			case 2:
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					iVar0 = unk_0xD1A189C6C27EE0CA(unk_0xA19140A5C42D8715());
					if (func_219(iVar0, 10f, 2, 1056964608, 0, 1, 0))
					{
						if (func_218(5) > 2)
						{
							iLocal_150++;
						}
					}
				}
				else
				{
					iLocal_150++;
				}
				break;
			
			case 3:
				if (func_221(&Local_184, 2573.63f, 4983.677f, 50.6978f, 12f, 12f, 2f, 0, "FRMCHSE_5", 1, 1, -1))
				{
					if (unk_0x2F8EAF18929E1E59("CHI_2_DRIVE_ROCK_RADIO"))
					{
						unk_0x5AD7D03C214BDA88("CHI_2_DRIVE_ROCK_RADIO");
					}
					unk_0xE061C3261E51F663(5f, 10f, 4);
					func_176(11);
				}
				if (unk_0xCE3CB618AFE55EFB(Local_184.f_5))
				{
					unk_0x3E46F0AAE4B470FB(Local_184.f_6, false);
				}
				break;
			}
	}
}

int func_218(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_153)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_153[iVar0 /*6*/] == iParam0)
			{
				return Local_153[iVar0 /*6*/].f_2;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_219(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_220(iParam0);
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

void func_220(int iParam0)
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

bool func_221(int iParam0, vector3 vParam1, vector3 vParam2, int iParam3, char* sParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_222(iParam0, vParam1, vParam2, func_260(), func_260(), iParam3, 1, 0, 0, 0, 0, sParam4, func_167(), func_167(), func_167(), func_167(), func_167(), 0, bParam5, func_167(), 0, 0, bParam6, iParam7, 0, 0, 0, 1, 1065353216);
}

int func_222(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	vVar3 = { vParam1 + Vector(1f, 0f, 0f) };
	iParam0->f_17[0] = iParam7;
	iParam0->f_17[1] = iParam8;
	iParam0->f_17[2] = iParam9;
	iParam0->f_16 = iParam7;
	func_259(iParam0);
	func_258(iParam0);
	func_257();
	if (func_241(iParam0, iParam0->f_17[0], iParam0->f_17[1], iParam0->f_17[2], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_240(sParam12);
		func_240(sParam13);
		func_240(sParam14);
		func_240(sParam15);
		if (unk_0x3A83743561B4F70C())
		{
			bVar1 = false;
			if (unk_0x1095F403F52B42E1(iParam10, 0))
			{
				if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iParam10, 0))
				{
					unk_0x2BCFB39E86340DAA(&(iParam0->f_13), 3);
					if (!unk_0x05EFB6A616B6FADE(iParam0->f_13, 9))
					{
						unk_0xFA57C719261AA55D(&(iParam0->f_13), 4);
					}
					if (unk_0x05EFB6A616B6FADE(iParam0->f_13, 23))
					{
						unk_0xFA57C719261AA55D(&(iParam0->f_13), 23);
					}
					unk_0x2BCFB39E86340DAA(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam6 == 4 || iParam6 == 5)
			{
				if (func_238(iParam0, iParam21))
				{
					unk_0x2BCFB39E86340DAA(&(iParam0->f_13), 3);
					if (!unk_0x05EFB6A616B6FADE(iParam0->f_13, 9))
					{
						unk_0xFA57C719261AA55D(&(iParam0->f_13), 4);
					}
					unk_0x2BCFB39E86340DAA(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_240(sParam16);
				func_240(sParam19);
				func_240("MORE_SEATS");
				if (bParam18 && unk_0x122A8778D4027A82(unk_0xD4E735F4B6A956AC(), 0))
				{
					if (unk_0xCE3CB618AFE55EFB(iParam0->f_5))
					{
						unk_0xE1623437A3194332(&(iParam0->f_5));
						func_240(sParam11);
					}
					if (unk_0xCE3CB618AFE55EFB(*iParam0))
					{
						unk_0xE1623437A3194332(iParam0);
					}
					if ((!func_235(iParam0, 1) && !func_234(iParam0)) && !unk_0x05EFB6A616B6FADE(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_233(iParam0, "LOSE_WANTED", 0);
							if (!unk_0x4915F4759304D5CF(iParam0->f_17[0]))
							{
								func_231(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x2BCFB39E86340DAA(&(iParam0->f_13), 0);
						unk_0xFA57C719261AA55D(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0x05EFB6A616B6FADE(iParam0->f_13, 0))
					{
						func_240("LOSE_WANTED");
						unk_0xFA57C719261AA55D(&(iParam0->f_13), 0);
						unk_0x2BCFB39E86340DAA(&(iParam0->f_13), 1);
					}
					if (unk_0x05EFB6A616B6FADE(iParam0->f_13, 1))
					{
						if (!func_235(iParam0, 1))
						{
							if (!unk_0x4915F4759304D5CF(iParam0->f_17[0]))
							{
								func_231(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xFA57C719261AA55D(&(iParam0->f_13), 1);
						}
					}
					if (!unk_0xCE3CB618AFE55EFB(iParam0->f_5))
					{
						if (unk_0xCE3CB618AFE55EFB(*iParam0))
						{
							unk_0xE1623437A3194332(iParam0);
						}
						iParam0->f_5 = func_5(vVar3, 0);
						if (!iParam23 == -1)
						{
							unk_0x7DB79A42AADE120F(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_230(iParam0->f_5, iParam0);
						}
					}
					else if (!func_229(vVar3, unk_0x1C8DAFF0573242F7(iParam0->f_5), 0.1f, 0))
					{
						unk_0x382EC7CC6BB2D812(iParam0->f_5, vVar3);
						if (bParam27)
						{
							func_230(iParam0->f_5, iParam0);
						}
					}
					if (!func_235(iParam0, 2))
					{
						if (!unk_0x05EFB6A616B6FADE(iParam0->f_13, 2))
						{
							func_233(iParam0, sParam11, 0);
							unk_0x2BCFB39E86340DAA(&(iParam0->f_13), 2);
						}
					}
					if (iParam6 == 4 || iParam6 == 5)
					{
						if (unk_0x05EFB6A616B6FADE(iParam0->f_13, 13))
						{
							iParam5 = 0;
						}
					}
					bVar1 = false;
					bVar4 = false;
					iVar5 = 0;
					if ((iParam6 == 1 || iParam6 == 3) || iParam6 == 5)
					{
						bVar4 = true;
					}
					if (iParam6 == 2 || iParam6 == 3)
					{
						iVar5 = 1;
					}
					else if (iParam6 == 4 || iParam6 == 5)
					{
						iVar5 = 2;
					}
					if (bParam20)
					{
						unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vParam1, vParam2, iParam5, bVar4, iVar5);
						if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), vParam3, vParam4, fParam28, 0, bVar4, iVar5))
						{
							bVar1 = true;
						}
					}
					else if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vParam1, vParam2, iParam5, bVar4, iVar5))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x4915F4759304D5CF(iParam0->f_17[iVar2]))
							{
								if (iParam6 == 4 || iParam6 == 5)
								{
									iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
									if (!unk_0xE0FD180CD24C0B67(iParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam10 != 0)
								{
									if (!unk_0xE0FD180CD24C0B67(iParam0->f_17[iVar2], iParam10, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0x097A982B0640FA32(iParam0->f_17[iVar2], func_212()) || !func_227(iParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_224(iParam0))
							{
								func_240(sParam11);
								func_240(sParam16);
								func_240(sParam12);
								func_240(sParam13);
								func_240(sParam14);
								func_240(sParam15);
								func_240("LOSE_WANTED");
								func_240("MORE_SEATS");
								func_240(sParam19);
								func_211(iParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0xDC5D81351D6A4DDB(iParam10))
			{
				if ((bParam18 && unk_0x122A8778D4027A82(unk_0xD4E735F4B6A956AC(), 0)) && (!unk_0x05EFB6A616B6FADE(iParam0->f_13, 9) && !unk_0x05EFB6A616B6FADE(iParam0->f_13, 22)))
				{
					func_240(sParam16);
					func_240(sParam19);
					if (unk_0xCE3CB618AFE55EFB(iParam0->f_5) || unk_0xCE3CB618AFE55EFB(*iParam0))
					{
						unk_0xE1623437A3194332(&(iParam0->f_5));
						unk_0xE1623437A3194332(iParam0);
						func_240(sParam11);
					}
					if ((!func_235(iParam0, 1) && !func_234(iParam0)) && !unk_0x05EFB6A616B6FADE(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_233(iParam0, "LOSE_WANTED", 0);
							if (!unk_0x4915F4759304D5CF(iParam0->f_17[0]))
							{
								func_231(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x2BCFB39E86340DAA(&(iParam0->f_13), 0);
						unk_0xFA57C719261AA55D(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0x05EFB6A616B6FADE(iParam0->f_13, 0))
					{
						func_240("LOSE_WANTED");
						unk_0xFA57C719261AA55D(&(iParam0->f_13), 0);
						unk_0x2BCFB39E86340DAA(&(iParam0->f_13), 1);
					}
					if (unk_0x05EFB6A616B6FADE(iParam0->f_13, 1))
					{
						if (!func_235(iParam0, 1))
						{
							if (!unk_0x4915F4759304D5CF(iParam0->f_17[0]))
							{
								func_231(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xFA57C719261AA55D(&(iParam0->f_13), 1);
						}
					}
					if (unk_0x1095F403F52B42E1(iParam10, 0))
					{
						if (!unk_0xCE3CB618AFE55EFB(*iParam0))
						{
							if (unk_0xCE3CB618AFE55EFB(iParam0->f_5))
							{
								unk_0xE1623437A3194332(&(iParam0->f_5));
								func_240(sParam11);
							}
							*iParam0 = func_223(iParam10, 0, 0);
							unk_0x3070F458AEF47C98(*iParam0, 2);
							if (!unk_0x05EFB6A616B6FADE(iParam0->f_13, 4))
							{
								func_230(*iParam0, iParam0);
							}
						}
						if (!func_235(iParam0, 2))
						{
							if (!unk_0x05EFB6A616B6FADE(iParam0->f_13, 3))
							{
								func_233(iParam0, sParam16, 0);
								unk_0x2BCFB39E86340DAA(&(iParam0->f_13), 3);
								unk_0xFA57C719261AA55D(&(iParam0->f_13), 4);
							}
							else if (unk_0x05EFB6A616B6FADE(iParam0->f_13, 9))
							{
								if (!unk_0x7032042E5696FFD7(sParam19))
								{
									if (!unk_0x05EFB6A616B6FADE(iParam0->f_13, 4))
									{
										func_233(iParam0, sParam19, 0);
										unk_0x2BCFB39E86340DAA(&(iParam0->f_13), 4);
									}
								}
								else if (!unk_0x05EFB6A616B6FADE(iParam0->f_13, 4))
								{
									func_233(iParam0, sParam16, 0);
									unk_0x2BCFB39E86340DAA(&(iParam0->f_13), 4);
								}
								if (!unk_0x05EFB6A616B6FADE(iParam0->f_13, 23))
								{
									if (!unk_0x4915F4759304D5CF(iParam0->f_17[0]))
									{
										func_231(iParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0x2BCFB39E86340DAA(&(iParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xCE3CB618AFE55EFB(iParam0->f_5))
				{
					unk_0xE1623437A3194332(&(iParam0->f_5));
					func_240(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_235(iParam0, 2))
						{
							if (unk_0x8A29BBDF4603E52B(unk_0xA19140A5C42D8715()))
							{
								if (!unk_0x05EFB6A616B6FADE(iParam0->f_13, 13))
								{
									iVar6 = 0;
									iVar7 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x4915F4759304D5CF(iParam0->f_17[iVar2]))
										{
											iVar6++;
										}
										iVar2++;
									}
									iVar7 = unk_0x22C775856F4633CA(0, iVar6);
									if (!unk_0x4915F4759304D5CF(iParam0->f_17[iVar7]))
									{
										func_231(iParam0->f_17[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_233(iParam0, "MORE_SEATS", 0);
									unk_0x2BCFB39E86340DAA(&(iParam0->f_13), 13);
								}
							}
							else if (!unk_0x05EFB6A616B6FADE(iParam0->f_13, 3))
							{
								func_233(iParam0, sParam16, 0);
								unk_0x2BCFB39E86340DAA(&(iParam0->f_13), 3);
								unk_0xFA57C719261AA55D(&(iParam0->f_13), 4);
							}
							else if (!unk_0x05EFB6A616B6FADE(iParam0->f_13, 4))
							{
								if (unk_0x05EFB6A616B6FADE(iParam0->f_13, 9))
								{
									func_233(iParam0, sParam19, 0);
									unk_0x2BCFB39E86340DAA(&(iParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_235(iParam0, 2))
					{
						if (!unk_0x05EFB6A616B6FADE(iParam0->f_13, 3))
						{
							func_233(iParam0, sParam16, 0);
							unk_0x2BCFB39E86340DAA(&(iParam0->f_13), 3);
							unk_0xFA57C719261AA55D(&(iParam0->f_13), 4);
						}
						else if (unk_0x05EFB6A616B6FADE(iParam0->f_13, 9))
						{
							if (!unk_0x7032042E5696FFD7(sParam19))
							{
								if (!unk_0x05EFB6A616B6FADE(iParam0->f_13, 4))
								{
									func_233(iParam0, sParam19, 0);
									unk_0x2BCFB39E86340DAA(&(iParam0->f_13), 4);
								}
							}
							else if (!unk_0x05EFB6A616B6FADE(iParam0->f_13, 4))
							{
								func_233(iParam0, sParam16, 0);
								unk_0x2BCFB39E86340DAA(&(iParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0x05EFB6A616B6FADE(iParam0->f_13, 0))
		{
			unk_0xFA57C719261AA55D(&(iParam0->f_13), 0);
		}
		func_240(sParam11);
		func_240(sParam16);
		func_240(sParam19);
		func_240(sParam16);
		func_240("LOSE_WANTED");
		if (unk_0xCE3CB618AFE55EFB(iParam0->f_5))
		{
			unk_0xE1623437A3194332(&(iParam0->f_5));
		}
		if (unk_0xCE3CB618AFE55EFB(*iParam0))
		{
			unk_0xE1623437A3194332(iParam0);
		}
	}
	unk_0xFA57C719261AA55D(&(iParam0->f_13), 11);
	unk_0xFA57C719261AA55D(&(iParam0->f_13), 12);
	return 0;
}

int func_223(int iParam0, bool bParam1, bool bParam2)
{
	return func_14(iParam0, !bParam1, bParam2);
}

int func_224(int iParam0)
{
	if (unk_0x05EFB6A616B6FADE(iParam0->f_13, 12))
	{
		if (func_226(unk_0xA19140A5C42D8715()))
		{
			if (func_225(1, 0, 1) || unk_0x05EFB6A616B6FADE(iParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_225(1, 0, 1) || unk_0x05EFB6A616B6FADE(iParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_225(bool bParam0, bool bParam1, bool bParam2)
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

int func_226(int iParam0)
{
	float fVar0;
	
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		fVar0 = unk_0xEAA5CEF8875FEEED(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_227(int iParam0, int iParam1)
{
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		if (unk_0x8A29BBDF4603E52B(unk_0xA19140A5C42D8715()) && iParam1)
		{
			if (func_228(unk_0xA19140A5C42D8715(), iParam0))
			{
				unk_0xB62F079D6DA624A8(func_212(), 50f);
				return 1;
			}
		}
		else if (unk_0x097A982B0640FA32(iParam0, func_212()))
		{
			unk_0xB62F079D6DA624A8(func_212(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_228(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		if (unk_0x8A29BBDF4603E52B(iParam0))
		{
			iVar0 = unk_0xCAEB6CE71A2C7212(iParam0, 0);
			if (unk_0x1095F403F52B42E1(iVar0, 0))
			{
				if (!unk_0x4915F4759304D5CF(iParam1))
				{
					if (unk_0xB10F7FE89663CB5B(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_229(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

void func_230(int iParam0, int iParam1)
{
	if (unk_0xCE3CB618AFE55EFB(iParam0))
	{
		if (unk_0xCE3CB618AFE55EFB(iParam1->f_6))
		{
			unk_0x3E46F0AAE4B470FB(iParam1->f_6, false);
		}
		unk_0x8CA4F710C547BB27(0);
		unk_0xA441772BB768015E();
		iParam1->f_6 = iParam0;
		unk_0x3E46F0AAE4B470FB(iParam0, true);
	}
}

void func_231(int iParam0, char* sParam1, int iParam2)
{
	unk_0xE85BD4A26C0DFACA(iParam0, sParam1, func_232(iParam2), 1);
}

int func_232(int iParam0)
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

void func_233(int iParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0x7032042E5696FFD7(sParam1))
		{
			if (!unk_0x3CAC2741CC1A631F(sParam1, ""))
			{
				func_150(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_10 = unk_0xFD34717937104F1C();
}

int func_234(int iParam0)
{
	if (!unk_0x4915F4759304D5CF(iParam0->f_16))
	{
		if (unk_0xF59ACE94F067B46D(iParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_235(int iParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0x1BB77F49EA9C72A3())
	{
		if (unk_0x8187CC9EB2D7CFE6())
		{
			return 1;
		}
		if (func_237(iParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x1BB77F49EA9C72A3())
	{
		if (func_59() && !func_236())
		{
			return 1;
		}
	}
	return 0;
}

int func_236()
{
	if (Global_16833 == 1)
	{
		return 1;
	}
	return 0;
}

int func_237(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xFD34717937104F1C();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_238(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
		if (func_239(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_239(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0xDC5D81351D6A4DDB(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0xD63FAD81FAF5E0CB(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x33C6DD82FBC75104(iParam0, 1))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!unk_0x33C6DD82FBC75104(iParam0, 1))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_240(char* sParam0)
{
	if (!unk_0x7032042E5696FFD7(sParam0))
	{
		unk_0xB9509A39A48644C4(sParam0);
	}
}

int func_241(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	var uVar12[3];
	var uVar13[3];
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	vector3 vVar19;
	int iVar20;
	int iVar21;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar12[0] = uParam4;
	uVar12[1] = uParam5;
	uVar12[2] = uParam6;
	uVar13[0] = uParam13;
	uVar13[1] = uParam14;
	uVar13[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x4915F4759304D5CF(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x122A8778D4027A82(unk_0xD4E735F4B6A956AC(), 0))
		{
			if (!unk_0x05EFB6A616B6FADE(uParam0->f_13, 29) && !unk_0x05EFB6A616B6FADE(uParam0->f_13, 28))
			{
				if (!unk_0x4915F4759304D5CF(uParam0->f_17[iVar0]))
				{
					unk_0x90683BECDF939A74(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0x2BCFB39E86340DAA(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0x05EFB6A616B6FADE(uParam0->f_13, 29) && unk_0x05EFB6A616B6FADE(uParam0->f_13, 28))
		{
			if (!unk_0x4915F4759304D5CF(uParam0->f_17[iVar0]))
			{
				unk_0x90683BECDF939A74(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0xFA57C719261AA55D(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0x05EFB6A616B6FADE(uParam0->f_13, 26))
	{
		bVar14 = false;
		if (!unk_0xDC5D81351D6A4DDB(uParam0->f_21))
		{
			iVar16 = 64;
			iVar16 |= 65536;
			iVar16 |= 2048;
			iVar16 |= 1;
			iVar16 |= 2;
			iVar16 |= 4;
			iVar16 |= 32;
			iVar16 |= 16;
			iVar16 |= 8;
			iVar15 = unk_0xEB67B4270D12F60E(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), 50f, 0, iVar16);
			if (unk_0x1095F403F52B42E1(iVar15, 0))
			{
				uParam0->f_21 = iVar15;
			}
		}
		if (unk_0x1095F403F52B42E1(uParam0->f_21, 0))
		{
			if (vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), unk_0xE2BBD32891C18569(uParam0->f_21, true)) < 400f)
			{
				if (!unk_0x8A29BBDF4603E52B(unk_0xA19140A5C42D8715()))
				{
					if (!unk_0x122A8778D4027A82(unk_0xD4E735F4B6A956AC(), 0) || !bParam17)
					{
						if (func_239(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x4915F4759304D5CF(uParam0->f_17[iVar0]))
								{
									unk_0x639C59ACAF6EEC64(uParam0->f_17[iVar0], 1f);
									if (unk_0x097A982B0640FA32(uParam0->f_17[iVar0], func_212()))
									{
										unk_0xF8136E11BE4BEAC3(uParam0->f_17[iVar0]);
									}
									if (unk_0xF9D4EF1338E38AFB(uParam0->f_17[iVar0], -1794415470) == 7 && !func_256(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x685AE6AF34B35D3B(uParam0->f_17[iVar0]) && !unk_0xC35EE16DB41A098F(uParam0->f_17[iVar0]))
										{
											unk_0x1F4E5EFBFE503FB3(uParam0->f_17[iVar0], 1);
											unk_0xA2EBCD9385E56019(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0x9EA5DDDDB1899B3B(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar14 = true;
						}
					}
					else
					{
						bVar14 = true;
					}
				}
				else
				{
					bVar14 = true;
				}
			}
			else
			{
				bVar14 = true;
			}
		}
		else
		{
			bVar14 = true;
		}
		if (bVar14)
		{
			unk_0xFA57C719261AA55D(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x4915F4759304D5CF(uParam0->f_17[iVar0]))
				{
					if (!unk_0x3D77D31E25961596(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0x9568B1B58F78FF36(uParam0->f_17[iVar0]);
					}
					if (!unk_0x097A982B0640FA32(uParam0->f_17[iVar0], func_212()))
					{
						if (func_254(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							unk_0x9854E4DB9C72017F(uParam0->f_17[iVar0], func_212());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0x05EFB6A616B6FADE(uParam0->f_13, 26))
	{
		if ((!func_253(uParam0) && unk_0x8A29BBDF4603E52B(unk_0xA19140A5C42D8715())) && !unk_0xDC5D81351D6A4DDB(iParam10))
		{
			iVar10 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
			if (unk_0x1095F403F52B42E1(iVar10, 0))
			{
				if (!unk_0x05EFB6A616B6FADE(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_235(uParam0, 2))
					{
						iVar17 = 0;
						iVar18 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0x4915F4759304D5CF(uParam0->f_17[iVar0]))
							{
								iVar17++;
							}
							iVar0++;
						}
						iVar18 = unk_0x22C775856F4633CA(0, iVar17);
						if (!unk_0x4915F4759304D5CF(uParam0->f_17[iVar18]))
						{
							func_231(uParam0->f_17[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_233(uParam0, "MORE_SEATS", 0);
						unk_0x2BCFB39E86340DAA(&(uParam0->f_13), 13);
					}
				}
				bVar9 = true;
			}
		}
		else
		{
			bVar9 = false;
			unk_0xFA57C719261AA55D(&(uParam0->f_13), 13);
			func_240("MORE_SEATS");
		}
		if (!unk_0xDC5D81351D6A4DDB(iParam10))
		{
			if ((!unk_0x4915F4759304D5CF(uParam0->f_17[0]) || !unk_0x4915F4759304D5CF(uParam0->f_17[1])) || !unk_0x4915F4759304D5CF(uParam0->f_17[2]))
			{
				if (!unk_0x05EFB6A616B6FADE(uParam0->f_13, 31))
				{
					if (unk_0x8A29BBDF4603E52B(unk_0xA19140A5C42D8715()) && !func_235(uParam0, 2))
					{
						iVar10 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
						if (func_252(iVar10, uParam0))
						{
							func_233(uParam0, "CMN_VEHSUIT", 0);
							unk_0x2BCFB39E86340DAA(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x8A29BBDF4603E52B(unk_0xA19140A5C42D8715()))
				{
					unk_0xFA57C719261AA55D(&(uParam0->f_13), 31);
					func_240("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0x1095F403F52B42E1(iParam10, 0))
		{
			if (unk_0xB10F7FE89663CB5B(unk_0xA19140A5C42D8715(), iParam10))
			{
				if (unk_0xDF0ADAD7E584090D(0, 75))
				{
					unk_0x2BCFB39E86340DAA(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0x05EFB6A616B6FADE(uParam0->f_13, 21))
			{
				unk_0xFA57C719261AA55D(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xDC5D81351D6A4DDB(uParam0->f_17[iVar0]))
			{
				if (!unk_0x4915F4759304D5CF(uParam0->f_17[iVar0]))
				{
					if (!unk_0x097A982B0640FA32(uParam0->f_17[iVar0], func_212()))
					{
						unk_0x1CCA743B14705812(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0x1CCA743B14705812(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x8A29BBDF4603E52B(unk_0xA19140A5C42D8715()))
					{
						iVar10 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
						if (unk_0x1095F403F52B42E1(iVar10, 0))
						{
							if (unk_0x097A982B0640FA32(uParam0->f_17[iVar0], func_212()))
							{
								if (!func_253(uParam0) && unk_0x8A29BBDF4603E52B(unk_0xA19140A5C42D8715()))
								{
									if (!func_251(uParam0->f_17[iVar0]))
									{
										unk_0xF8136E11BE4BEAC3(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar10 != iParam10 && !unk_0x7112137033807390(iVar10, 0))
						{
							if (unk_0xB10F7FE89663CB5B(uParam0->f_17[iVar0], iVar10))
							{
								if (unk_0x4374EED90C523366(iVar10) && !unk_0x678F978B0FAD24D2(iVar10))
								{
									vVar19 = { unk_0xE2BBD32891C18569(iVar10, true) };
									if (vVar19.z < -1f)
									{
										unk_0xFBA5AC89E66201B2(uParam0->f_17[iVar0], iVar10, 64);
									}
								}
							}
						}
					}
					bVar8 = true;
					if (!unk_0x097A982B0640FA32(uParam0->f_17[iVar0], func_212()))
					{
						if (unk_0x8A29BBDF4603E52B(uParam0->f_17[iVar0]))
						{
							iVar10 = unk_0xCAEB6CE71A2C7212(uParam0->f_17[iVar0], 0);
							if (!unk_0x7112137033807390(iVar10, 0))
							{
								if (unk_0x1095F403F52B42E1(iParam10, 0))
								{
									if (iVar10 != iParam10)
									{
										if (!unk_0xB10F7FE89663CB5B(unk_0xA19140A5C42D8715(), iVar10))
										{
											if (unk_0xEAA5CEF8875FEEED(iVar10) > 5f)
											{
												unk_0xFBA5AC89E66201B2(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												unk_0xFBA5AC89E66201B2(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
								else
								{
									if (unk_0x8A29BBDF4603E52B(unk_0xA19140A5C42D8715()))
									{
										iVar20 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
									}
									if (unk_0x1095F403F52B42E1(iVar20, 0))
									{
										if (iVar10 != iVar20)
										{
											if (unk_0xEAA5CEF8875FEEED(iVar10) > 5f)
											{
												unk_0xFBA5AC89E66201B2(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												unk_0xFBA5AC89E66201B2(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0x097A982B0640FA32(uParam0->f_17[iVar0], func_212()))
					{
						iVar21 = unk_0xD1A189C6C27EE0CA(unk_0xA19140A5C42D8715());
						if (unk_0xDC5D81351D6A4DDB(iVar21))
						{
							if (func_239(iVar21, uParam0, 0))
							{
								if (func_250(iVar0, uParam0) || !unk_0x05EFB6A616B6FADE(uParam0->f_13, 27))
								{
									unk_0x9EA5DDDDB1899B3B(uParam0->f_17[iVar0], iVar0);
									func_213(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x2BCFB39E86340DAA(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_250(iVar0, uParam0))
							{
								if (unk_0x8F474E419F56E48D(iVar21) == joaat("sentinel2"))
								{
									unk_0x9EA5DDDDB1899B3B(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0x9EA5DDDDB1899B3B(uParam0->f_17[iVar0], 2);
								}
								func_249(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x097A982B0640FA32(uParam0->f_17[iVar0], func_212()) && !func_248(uParam0->f_17[iVar0], iParam10)) && !func_247(uParam0->f_17[iVar0], iParam10))
					{
						if (func_254(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!unk_0x097A982B0640FA32(uParam0->f_17[iVar0], func_212()))
							{
								if (((!unk_0x685AE6AF34B35D3B(uParam0->f_17[iVar0]) && !unk_0xC35EE16DB41A098F(uParam0->f_17[iVar0])) && !unk_0xA4675B1CB298BFAA(uParam0->f_17[iVar0])) && !unk_0x3D77D31E25961596(uParam0->f_17[iVar0]))
								{
									iVar11 = unk_0xF9D4EF1338E38AFB(uParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7)
									{
										unk_0x9568B1B58F78FF36(uParam0->f_17[iVar0]);
									}
									unk_0x9854E4DB9C72017F(uParam0->f_17[iVar0], func_212());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!unk_0xCE3CB618AFE55EFB(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0xFD34717937104F1C();
								uParam0->f_1[iVar0] = func_223(uParam0->f_17[iVar0], 0, 0);
								unk_0x3070F458AEF47C98(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_230(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xCE3CB618AFE55EFB(uParam0->f_1[iVar0]))
					{
						if (((func_227(uParam0->f_17[iVar0], 1) || func_248(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0x1095F403F52B42E1(iParam10, 0) && !unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iParam10, 0)))
						{
							if (unk_0xCE3CB618AFE55EFB(uParam0->f_1[iVar0]))
							{
								unk_0xE1623437A3194332(&(uParam0->f_1[iVar0]));
								func_240(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_230(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0x1095F403F52B42E1(iParam10, 0))
					{
						if (!unk_0xB10F7FE89663CB5B(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x10E54C268D1B3FED(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0x05EFB6A616B6FADE(uParam0->f_13, 11)) && !((bParam17 && unk_0x122A8778D4027A82(unk_0xD4E735F4B6A956AC(), 0)) && !unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iParam10, 0)))
							{
								if (unk_0x8A29BBDF4603E52B(uParam0->f_17[iVar0]))
								{
									if (!unk_0xE0FD180CD24C0B67(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_227(uParam0->f_17[iVar0], 1))
										{
											if (func_226(uParam0->f_17[iVar0]))
											{
												iVar11 = unk_0xF9D4EF1338E38AFB(uParam0->f_17[iVar0], 451360105);
												if (iVar11 == 7)
												{
													unk_0xCB482EF95FAE4D73(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x097A982B0640FA32(uParam0->f_17[iVar0], func_212()))
									{
										if ((((!unk_0xA4675B1CB298BFAA(uParam0->f_17[iVar0]) && !unk_0x685AE6AF34B35D3B(uParam0->f_17[iVar0])) && !unk_0xC35EE16DB41A098F(uParam0->f_17[iVar0])) && !unk_0x3D77D31E25961596(uParam0->f_17[iVar0])) && !unk_0x463E3A48A46C9195(iParam10))
										{
											unk_0xF8136E11BE4BEAC3(uParam0->f_17[iVar0]);
										}
									}
									iVar11 = unk_0xF9D4EF1338E38AFB(uParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7 && !func_256(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0xA4675B1CB298BFAA(uParam0->f_17[iVar0]) && !unk_0xA4675B1CB298BFAA(unk_0xA19140A5C42D8715())) && !func_246(uParam0->f_17[iVar0], 2f)) && !unk_0x685AE6AF34B35D3B(uParam0->f_17[iVar0])) && !unk_0xC35EE16DB41A098F(uParam0->f_17[iVar0])) && !unk_0x463E3A48A46C9195(iParam10))
										{
											unk_0x1F4E5EFBFE503FB3(uParam0->f_17[iVar0], 1);
											if (unk_0x05EFB6A616B6FADE(uParam0->f_13, 10))
											{
												unk_0x639C59ACAF6EEC64(uParam0->f_17[iVar0], 1f);
											}
											unk_0xA2EBCD9385E56019(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0x6AEE0EBD7CA3D63F(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_223(uParam0->f_17[iVar0], 0, 0);
										unk_0x3070F458AEF47C98(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x097A982B0640FA32(uParam0->f_17[iVar0], func_212()))
							{
								if (func_254(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!unk_0x685AE6AF34B35D3B(uParam0->f_17[iVar0]) && !unk_0xC35EE16DB41A098F(uParam0->f_17[iVar0]))
									{
										iVar11 = unk_0xF9D4EF1338E38AFB(uParam0->f_17[iVar0], -1794415470);
										if (iVar11 == 7)
										{
											unk_0x9568B1B58F78FF36(uParam0->f_17[iVar0]);
										}
										unk_0x1F4E5EFBFE503FB3(uParam0->f_17[iVar0], 0);
										unk_0x9854E4DB9C72017F(uParam0->f_17[iVar0], func_212());
									}
								}
							}
						}
						else if (unk_0xB10F7FE89663CB5B(unk_0xA19140A5C42D8715(), iParam10))
						{
							if (!unk_0x097A982B0640FA32(uParam0->f_17[iVar0], func_212()))
							{
								if (!unk_0x05EFB6A616B6FADE(uParam0->f_13, 21))
								{
									unk_0x9854E4DB9C72017F(uParam0->f_17[iVar0], func_212());
								}
							}
							else if (unk_0x05EFB6A616B6FADE(uParam0->f_13, 21))
							{
								unk_0xF8136E11BE4BEAC3(uParam0->f_17[iVar0]);
								unk_0x2BCFB39E86340DAA(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x097A982B0640FA32(uParam0->f_17[iVar0], func_212()) && !unk_0x463E3A48A46C9195(iParam10))
						{
							unk_0xF8136E11BE4BEAC3(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0xCE3CB618AFE55EFB(uParam0->f_1[iVar0]))
				{
					unk_0xE1623437A3194332(&(uParam0->f_1[iVar0]));
					func_240(uVar12[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xCE3CB618AFE55EFB(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_235(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0x4915F4759304D5CF(uParam0->f_17[iVar0]))
						{
							if (func_251(uParam0->f_17[iVar0]) || unk_0x10E54C268D1B3FED(uParam0->f_17[iVar0], unk_0xA19140A5C42D8715(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x4915F4759304D5CF(uParam0->f_17[iVar0]))
					{
						if (!unk_0x10E54C268D1B3FED(uParam0->f_17[iVar0], unk_0xA19140A5C42D8715(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_251(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0xFD34717937104F1C();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0x05EFB6A616B6FADE(uParam0->f_13, 5))
							{
								func_233(uParam0, sParam7, 0);
								unk_0x2BCFB39E86340DAA(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_245(iVar0, uParam0))
									{
										if (!unk_0x7032042E5696FFD7(uVar13[iVar0]))
										{
											if (!unk_0x3CAC2741CC1A631F(uVar13[iVar0], ""))
											{
												func_243(uParam0, uVar12[iVar0], uVar13[iVar0], 0);
												func_242(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_245(iVar0, uParam0))
										{
											func_233(uParam0, uVar12[iVar0], 0);
											func_242(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		unk_0xFA57C719261AA55D(&(uParam0->f_13), 10);
		if (iVar6 && !bVar9)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0xCE3CB618AFE55EFB(uParam0->f_1[iVar0]))
				{
					unk_0xE1623437A3194332(&(uParam0->f_1[iVar0]));
					func_240(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_240("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_242(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x2BCFB39E86340DAA(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x2BCFB39E86340DAA(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x2BCFB39E86340DAA(&(uParam1->f_13), 16);
			break;
	}
}

void func_243(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0x7032042E5696FFD7(sParam1))
		{
			if (!unk_0x3CAC2741CC1A631F(sParam1, ""))
			{
				func_244(sParam1, iParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0xFD34717937104F1C();
}

void func_244(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xD291E4BC830D587A(sParam0);
	unk_0x4FDA9E6EF359F8A9(iParam1);
	unk_0x1D594DA1FE749C88(iParam2, 1);
}

int func_245(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x05EFB6A616B6FADE(uParam1->f_13, 14);
		
		case 1:
			return unk_0x05EFB6A616B6FADE(uParam1->f_13, 15);
		
		case 2:
			return unk_0x05EFB6A616B6FADE(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_246(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x5D7DFE2058701942(iParam0, 0))
	{
		iVar0 = unk_0xCAEB6CE71A2C7212(iParam0, 0);
		if (!unk_0x7112137033807390(iVar0, 0))
		{
			if (unk_0xEAA5CEF8875FEEED(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_247(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		if (!unk_0x097A982B0640FA32(iParam0, func_212()))
		{
			iVar0 = unk_0xDF069A8A4CCE674E(iParam0);
			if (unk_0x1095F403F52B42E1(iParam1, 0))
			{
				if (unk_0x10E54C268D1B3FED(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_248(int iParam0, int iParam1)
{
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		if (unk_0xDC5D81351D6A4DDB(iParam1))
		{
			if (unk_0x1095F403F52B42E1(iParam1, 0))
			{
				if (unk_0xB10F7FE89663CB5B(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_249(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x2BCFB39E86340DAA(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x2BCFB39E86340DAA(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x2BCFB39E86340DAA(&(uParam1->f_13), 19);
			break;
	}
}

int func_250(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x05EFB6A616B6FADE(uParam1->f_13, 17);
		
		case 1:
			return unk_0x05EFB6A616B6FADE(uParam1->f_13, 18);
		
		case 2:
			return unk_0x05EFB6A616B6FADE(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_251(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		iVar0 = unk_0xD1A189C6C27EE0CA(unk_0xA19140A5C42D8715());
		if (unk_0x1095F403F52B42E1(iVar0, 0))
		{
			if (!unk_0x4915F4759304D5CF(iParam0))
			{
				iVar1 = unk_0xD1A189C6C27EE0CA(iParam0);
				if (unk_0x1095F403F52B42E1(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x10E54C268D1B3FED(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

int func_252(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		if (unk_0x8F474E419F56E48D(iParam0) == joaat("bus") || unk_0x8F474E419F56E48D(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x4915F4759304D5CF(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0xB0D49A1F9F054602(iParam0, 0, 0);
			if (!unk_0x4915F4759304D5CF(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = unk_0xB0D49A1F9F054602(iParam0, 1, 0);
			if (!unk_0x4915F4759304D5CF(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = unk_0xB0D49A1F9F054602(iParam0, 2, 0);
			if (!unk_0x4915F4759304D5CF(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_253(var uParam0)
{
	int iVar0;
	
	if (unk_0x8A29BBDF4603E52B(unk_0xA19140A5C42D8715()))
	{
		iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
		if (func_239(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_254(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x4915F4759304D5CF(iParam1))
	{
		if (unk_0x8A29BBDF4603E52B(iParam1))
		{
			iVar0 = unk_0xCAEB6CE71A2C7212(iParam1, 0);
			if (!unk_0x7112137033807390(iVar0, 0))
			{
				if (unk_0x1095F403F52B42E1(iVar0, 0))
				{
					if (unk_0xB10F7FE89663CB5B(unk_0xA19140A5C42D8715(), iVar0))
					{
						if (func_253(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xD1A189C6C27EE0CA(unk_0xA19140A5C42D8715());
				if (unk_0xDC5D81351D6A4DDB(iVar0))
				{
					if (func_239(iVar0, uParam0, 0))
					{
						if (unk_0x1095F403F52B42E1(iVar0, 0))
						{
							if (func_255(iVar0))
							{
								return 1;
							}
						}
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_255(int iParam0)
{
	float fVar0;
	
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		fVar0 = unk_0xEAA5CEF8875FEEED(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_256(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		if (unk_0x1095F403F52B42E1(iParam1, 0))
		{
			iVar0 = unk_0xD1A189C6C27EE0CA(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_257()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
	{
		iVar0 = unk_0xDF069A8A4CCE674E(unk_0xA19140A5C42D8715());
		if (unk_0x1095F403F52B42E1(iVar0, 0))
		{
			iVar1 = unk_0xB0D49A1F9F054602(iVar0, 0, 0);
			if (!unk_0x4915F4759304D5CF(iVar1))
			{
				if (iVar1 != unk_0xA19140A5C42D8715())
				{
					if (unk_0x4943BEEC19289B8E(iVar1))
					{
						if (!unk_0xDE5C9B8EB78736EA(iVar1, unk_0xA19140A5C42D8715()))
						{
							unk_0x22DD1D053CFF9707(iVar1, unk_0xA19140A5C42D8715(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_258(var uParam0)
{
	int iVar0;
	
	if (!unk_0x05EFB6A616B6FADE(uParam0->f_13, 25))
	{
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xDC5D81351D6A4DDB(uParam0->f_17[iVar0]))
			{
				if (!unk_0x4915F4759304D5CF(uParam0->f_17[iVar0]))
				{
					unk_0x13E0A8160525AE55(uParam0->f_17[iVar0], 32, false);
					unk_0x13E0A8160525AE55(uParam0->f_17[iVar0], 305, true);
					unk_0x13E0A8160525AE55(uParam0->f_17[iVar0], 268, true);
					unk_0x6AEE0EBD7CA3D63F(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0x2BCFB39E86340DAA(&(uParam0->f_13), 25);
	}
}

void func_259(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xDC5D81351D6A4DDB(uParam0->f_17[iVar0]))
		{
			if (!unk_0x4915F4759304D5CF(uParam0->f_17[iVar0]))
			{
				if (unk_0x8A29BBDF4603E52B(uParam0->f_17[iVar0]))
				{
					unk_0xB583A7C3FEE69710(uParam0->f_17[iVar0], 0);
					unk_0xFC03CFA3CE79D871(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			if (unk_0x8A29BBDF4603E52B(unk_0xA19140A5C42D8715()))
			{
				unk_0xB583A7C3FEE69710(unk_0xA19140A5C42D8715(), 0);
				unk_0xFC03CFA3CE79D871(unk_0xA19140A5C42D8715(), 0);
			}
		}
	}
}

Vector3 func_260()
{
	vector3 vVar0;
	
	return vVar0;
}

int func_261(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_153[iVar0 /*6*/] == iParam0)
		{
			if (Local_153[iVar0 /*6*/].f_1 == 1)
			{
				Local_153[iVar0 /*6*/].f_2 = iParam1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_262()
{
	int iVar0;
	int iVar1;
	
	unk_0x60C495B6942EC817(0f);
	unk_0x9F7E14E0AE70CCBB(0f, 0f);
	switch (iLocal_150)
	{
		case 0:
			iLocal_144 = unk_0xC409B91AC4749F88();
			unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 0);
			if (func_204())
			{
				unk_0x6D68030C791111E0("MISSChinese2_crystalMazeMCS1_IG");
				unk_0xCACEBBBEAD8F262E(joaat("ig_old_man2"));
				unk_0xCACEBBBEAD8F262E(joaat("ig_old_man1a"));
				unk_0xCACEBBBEAD8F262E(joaat("ig_janet"));
				unk_0xCACEBBBEAD8F262E(joaat("ig_taocheng"));
				unk_0xCACEBBBEAD8F262E(joaat("ig_taostranslator"));
				unk_0x6D68030C791111E0("misschinese2_crystalmaze");
				unk_0x6D68030C791111E0("missrampageintrooutro");
				unk_0x1BE107CEA70974D0(unk_0xA19140A5C42D8715(), 0, 0);
				func_186(1, 1, 1, 0, 0);
				if (unk_0xDC5D81351D6A4DDB(Global_89824.f_9[0]))
				{
					Local_113[14 /*33*/] = Global_89824.f_9[2];
					Local_113[13 /*33*/] = Global_89824.f_9[1];
					Local_113[11 /*33*/] = Global_89824.f_9[4];
					Local_113[10 /*33*/] = Global_89824.f_9[3];
					Local_113[12 /*33*/] = Global_89824.f_9[0];
					unk_0x1F7948851FB36E88(Local_113[14 /*33*/], true, 1);
					unk_0x1F7948851FB36E88(Local_113[13 /*33*/], true, 1);
					unk_0x1F7948851FB36E88(Local_113[11 /*33*/], true, 1);
					unk_0x1F7948851FB36E88(Local_113[10 /*33*/], true, 1);
					unk_0x1F7948851FB36E88(Local_113[12 /*33*/], true, 1);
					if (!unk_0x4915F4759304D5CF(Local_113[13 /*33*/]))
					{
						unk_0xE216F8B2802ABABF(Local_113[13 /*33*/], "Old_Man1A", 0, joaat("ig_old_man1a"), 0);
					}
					if (!unk_0x4915F4759304D5CF(Local_113[14 /*33*/]))
					{
						unk_0xE216F8B2802ABABF(Local_113[14 /*33*/], "Old_Man2", 0, joaat("ig_old_man2"), 0);
					}
					if (!unk_0x4915F4759304D5CF(Local_113[11 /*33*/]))
					{
						unk_0xE216F8B2802ABABF(Local_113[11 /*33*/], "tao", 0, joaat("ig_taocheng"), 0);
					}
					if (!unk_0x4915F4759304D5CF(Local_113[10 /*33*/]))
					{
						unk_0xE216F8B2802ABABF(Local_113[10 /*33*/], "Taos_Translator", 0, joaat("ig_taostranslator"), 0);
					}
					if (!unk_0x4915F4759304D5CF(Local_113[12 /*33*/]))
					{
						unk_0xE216F8B2802ABABF(Local_113[12 /*33*/], "Janet", 0, joaat("ig_janet"), 0);
					}
				}
				else
				{
					Local_113[13 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("ig_old_man1a"), 1987.231f, 3052.741f, 46.214f, 0f, 1, true);
					unk_0xE216F8B2802ABABF(Local_113[13 /*33*/], "Old_Man1A", 0, joaat("ig_old_man1a"), 0);
					Local_113[14 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("ig_old_man2"), 1987.231f, 3052.741f, 46.214f, 0f, 1, true);
					unk_0xE216F8B2802ABABF(Local_113[14 /*33*/], "Old_Man2", 0, joaat("ig_old_man2"), 0);
					if (unk_0xDC5D81351D6A4DDB(Local_113[11 /*33*/]))
					{
						if (!unk_0x4915F4759304D5CF(Local_113[11 /*33*/]))
						{
							unk_0xE216F8B2802ABABF(Local_113[11 /*33*/], "tao", 0, joaat("ig_taocheng"), 0);
						}
					}
					else
					{
						unk_0xE216F8B2802ABABF(Local_113[11 /*33*/], "tao", 2, joaat("ig_taocheng"), 0);
					}
					unk_0xE216F8B2802ABABF(Local_113[10 /*33*/], "Taos_Translator", 2, joaat("ig_taostranslator"), 0);
					Local_113[12 /*33*/] = unk_0x35C6E06B120EB2E3(26, joaat("ig_janet"), 1987.231f, 3052.741f, 46.214f, 0f, 1, true);
					unk_0xE216F8B2802ABABF(Local_113[12 /*33*/], "Janet", 0, joaat("ig_janet"), 0);
				}
				func_264();
				unk_0x80D42964D19AF118(0);
				unk_0xF748D06B9A97191E(4);
				unk_0x3521B10FB737CE36(1991.22f, 3054.884f, 50.27741f, 87f, 0);
				unk_0x9827D9AC8985F888(1991.22f, 3054.884f, 50.27741f, 87f, 0);
				unk_0xF66A39BBE7B3C278(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(40f, 40f, 40f), 0, 1, 1, 1);
				unk_0xFF54548CCE498035(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(0f, 40f, 40f));
				func_32(0, 0);
				func_32(26, 0);
				iLocal_576 = 0;
				iLocal_150++;
			}
			break;
		
		case 1:
			if (unk_0x5CA3186381FC012C())
			{
				if (unk_0x71364F510A1CB69F())
				{
					unk_0x70C1F5AA59767FE6(1000);
				}
				iLocal_150++;
			}
			break;
		
		case 2:
			if (unk_0x5CA3186381FC012C())
			{
				if (iLocal_576 == 0)
				{
					func_263(13);
					iLocal_576++;
				}
			}
			if (!unk_0xDC5D81351D6A4DDB(Local_113[13 /*33*/]))
			{
				if (unk_0x0FFE9FEDC2E0AC88("Old_Man1A", 0))
				{
					Local_113[13 /*33*/] = unk_0xA2EA4BA455370F3C(unk_0xD6AE14889DC50F06("Old_Man1A", 0));
				}
			}
			if (!unk_0xDC5D81351D6A4DDB(Local_113[14 /*33*/]))
			{
				if (unk_0x0FFE9FEDC2E0AC88("Old_Man2", 0))
				{
					Local_113[14 /*33*/] = unk_0xA2EA4BA455370F3C(unk_0xD6AE14889DC50F06("Old_Man2", 0));
				}
			}
			if (!unk_0xDC5D81351D6A4DDB(Local_113[11 /*33*/]))
			{
				if (unk_0x0FFE9FEDC2E0AC88("tao", 0))
				{
					Local_113[11 /*33*/] = unk_0xA2EA4BA455370F3C(unk_0xD6AE14889DC50F06("tao", 0));
				}
			}
			if (!unk_0xDC5D81351D6A4DDB(Local_113[10 /*33*/]))
			{
				if (unk_0x0FFE9FEDC2E0AC88("Taos_Translator", 0))
				{
					Local_113[10 /*33*/] = unk_0xA2EA4BA455370F3C(unk_0xD6AE14889DC50F06("Taos_Translator", 0));
				}
			}
			if (!unk_0xDC5D81351D6A4DDB(Local_113[12 /*33*/]))
			{
				if (unk_0x0FFE9FEDC2E0AC88("Janet", 0))
				{
					Local_113[12 /*33*/] = unk_0xA2EA4BA455370F3C(unk_0xD6AE14889DC50F06("Janet", 0));
				}
			}
			if (unk_0x0FFE9FEDC2E0AC88("tao", 0))
			{
				if (!unk_0x4915F4759304D5CF(Local_113[11 /*33*/]))
				{
					unk_0xDFA901280292A2FB(Local_113[11 /*33*/], iLocal_118);
					unk_0x96BFF0680C7B6FD5(Local_113[11 /*33*/], false);
					iVar0 = unk_0x70788DC3D80C9DEB(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
					unk_0xE5565DEAABF9D588(Local_113[11 /*33*/], iVar0, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 1, 16, 1148846080, 0);
				}
			}
			if (unk_0x0FFE9FEDC2E0AC88("Taos_Translator", 0))
			{
				if (!unk_0x4915F4759304D5CF(Local_113[10 /*33*/]))
				{
					unk_0xDFA901280292A2FB(Local_113[10 /*33*/], iLocal_118);
					unk_0x96BFF0680C7B6FD5(Local_113[10 /*33*/], false);
					iVar1 = unk_0x70788DC3D80C9DEB(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
					unk_0xE5565DEAABF9D588(Local_113[10 /*33*/], iVar1, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 1, 16, 1148846080, 0);
				}
			}
			if (unk_0x0FFE9FEDC2E0AC88("Trevor", 0))
			{
				iLocal_144 = unk_0xC409B91AC4749F88();
				if (func_68(iLocal_144) && func_67(iLocal_144, 1995.202f, 3062.156f, 46.0491f, 1) < 5f)
				{
					unk_0x692D5500D82E4F5D(unk_0xA19140A5C42D8715(), iLocal_144, -1);
					unk_0x3A3E4B7C6FBE305D(unk_0xA19140A5C42D8715(), 0, 0);
					unk_0x7C925EC45C510DDE(unk_0x8F474E419F56E48D(iLocal_144));
				}
				else if (unk_0x39C2D9AB77873F84("missrampageintrooutro"))
				{
					unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 1992.135f, 3057.467f, 46.06f, 1, 0, 0, 1);
					unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 325.4678f);
					unk_0x3F01127ECD227890(unk_0xA19140A5C42D8715(), "missrampageintrooutro", "trvram_6_1h_run_outro", 1000f, -4f, -1, 0, 0.1f, 0, 0, 0);
					unk_0x3A3E4B7C6FBE305D(unk_0xA19140A5C42D8715(), 1, 0);
				}
				else
				{
					unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 1992.919f, 3057.906f, 46.0567f, 1, 0, 0, 1);
					unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 337.2537f);
					unk_0xF757C0D3A087F145(unk_0xA19140A5C42D8715(), -668482597, 0, 0, 0);
					unk_0x06FE8ECBF0B8333F(unk_0xA19140A5C42D8715(), 1f);
					unk_0x3A3E4B7C6FBE305D(unk_0xA19140A5C42D8715(), 1, 0);
				}
			}
			if (unk_0x9375DEC0CFA8D39E(0))
			{
				unk_0x794E43B900906407(6);
				func_186(0, 1, 1, 0, 0);
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
				unk_0xD87B76260C547F31(0f);
				unk_0xAA32DD4848CF93E0(-7f, 1065353216);
				if (unk_0x71364F510A1CB69F())
				{
					unk_0x745C10318A2C7CAE(1992.135f, 3057.467f, 46.06f);
				}
				unk_0xB6B24463498F5F41();
				unk_0xE061C3261E51F663(0f, 7f, 3);
				func_176(11);
			}
			break;
	}
}

void func_263(int iParam0)
{
	if (Global_90249 != -1)
	{
		if (iParam0 == Global_90249)
		{
			Global_90253 = 1;
			return;
		}
	}
}

void func_264()
{
	int iVar0;
	
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0xD6CDDEFB0FD5B191(unk_0xA19140A5C42D8715(), false, false, false, false, false, 0, 0, 0);
		unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 157, true);
		unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), false);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xDC5D81351D6A4DDB(Global_90696[iVar0]))
		{
			if (!unk_0x7112137033807390(Global_90696[iVar0], 0))
			{
				unk_0xD6CDDEFB0FD5B191(Global_90696[iVar0], false, false, false, false, false, 0, 0, 0);
				unk_0x33CF95E95A476FB9(Global_90696[iVar0], false);
			}
		}
		iVar0++;
	}
	if ((Global_36117 != 0 && Global_36117 != 3) && Global_36117 != 2)
	{
		unk_0x9BB7BCDF2AC2D6F9(5);
		unk_0xBF6EED5D6E0CD9BF(1f);
	}
}

void func_265()
{
	int iVar0;
	
	switch (iLocal_150)
	{
		case 0:
			unk_0x6A633E13B2A856AE("FRMCHSE", 0);
			while (!unk_0xD744813D9841CA9A(0))
			{
				func_28(27, 1);
			}
			func_56(&uLocal_203, 0, unk_0xA19140A5C42D8715(), "TREVOR", 0, 1);
			func_56(&uLocal_203, 8, 0, "PED8", 0, 1);
			func_32(9, 1);
			func_32(29, 1);
			func_32(21, 1);
			func_361();
			unk_0x341AA026B031328A(2442.69f, 4970.348f, 46.33f, 30f);
			unk_0x3E3FCB801A0CF08C("EXTRASUNNY", 120f);
			vLocal_384[0 /*3*/] = { 2428.47f, 4968.91f, 42.11f };
			vLocal_384[1 /*3*/] = { 2431.14f, 4972.06f, 42.19f };
			vLocal_384[2 /*3*/] = { 2433.05f, 4969.22f, 42.26f };
			vLocal_384[3 /*3*/] = { 2437.71f, 4968.13f, 42.45f };
			vLocal_384[4 /*3*/] = { 2436.12f, 4964.76f, 42.19f };
			vLocal_384[5 /*3*/] = { 2432.13f, 4961.97f, 41.35f };
			vLocal_384[6 /*3*/] = { 2430.07f, 4963.78f, 41.35f };
			vLocal_384[7 /*3*/] = { 2434f, 4963.04f, 41.53f };
			vLocal_384[8 /*3*/] = { 2435.637f, 4969.699f, 42.19639f };
			Local_109[0 /*5*/] = { 2450.376f, 4955.83f, 43.9394f };
			Local_109[1 /*5*/] = { 2449.815f, 4956.678f, 43.9894f };
			Local_109[2 /*5*/] = { 2449.606f, 4957.675f, 44.0646f };
			Local_109[3 /*5*/] = { 2449.739f, 4958.731f, 44.1544f };
			Local_109[4 /*5*/] = { 2450.141f, 4959.745f, 44.2487f };
			Local_109[5 /*5*/] = { 2450.685f, 4960.582f, 44.3219f };
			Local_109[6 /*5*/] = { 2451.492f, 4961.333f, 44.4439f };
			Local_109[7 /*5*/] = { 2452.174f, 4962.099f, 44.5787f };
			Local_109[8 /*5*/] = { 2452.717f, 4962.906f, 44.9141f };
			Local_109[9 /*5*/] = { 2453.35f, 4963.579f, 45.3558f };
			Local_109[10 /*5*/] = { 2453.754f, 4964.565f, 45.5766f };
			Local_109[11 /*5*/] = { 2453.226f, 4965.539f, 45.5766f };
			Local_109[12 /*5*/] = { 2452.472f, 4966.293f, 45.5766f };
			Local_109[13 /*5*/] = { 2451.869f, 4967.104f, 45.5766f };
			Local_109[14 /*5*/] = { 2451.529f, 4968.083f, 45.5766f };
			Local_109[15 /*5*/] = { 2452.327f, 4968.712f, 45.5766f };
			Local_109[16 /*5*/] = { 2452.796f, 4969.643f, 45.8107f };
			Local_109[17 /*5*/] = { 2453.261f, 4970.541f, 45.8106f };
			Local_109[18 /*5*/] = { 2453.58f, 4971.548f, 45.8104f };
			Local_109[19 /*5*/] = { 2452.808f, 4972.267f, 45.8306f };
			Local_109[20 /*5*/] = { 2452.049f, 4972.928f, 45.8306f };
			Local_109[21 /*5*/] = { 2451.241f, 4973.599f, 45.8306f };
			Local_109[22 /*5*/] = { 2450.248f, 4973.889f, 45.8306f };
			Local_109[23 /*5*/] = { 2449.207f, 4973.784f, 45.8105f };
			Local_109[24 /*5*/] = { 2448.172f, 4973.814f, 45.8106f };
			Local_109[25 /*5*/] = { 2447.153f, 4973.771f, 45.8106f };
			Local_109[26 /*5*/] = { 2446.138f, 4973.724f, 45.8106f };
			Local_109[27 /*5*/] = { 2445.128f, 4973.689f, 45.8106f };
			Local_109[28 /*5*/] = { 2444.256f, 4973.056f, 45.8106f };
			Local_109[29 /*5*/] = { 2443.669f, 4972.194f, 45.8106f };
			Local_109[30 /*5*/] = { 2443.119f, 4971.275f, 45.8106f };
			Local_109[31 /*5*/] = { 2442.661f, 4970.359f, 45.8106f };
			Local_109[32 /*5*/] = { 2442.267f, 4969.425f, 45.8106f };
			Local_109[33 /*5*/] = { 2441.708f, 4968.502f, 45.8306f };
			Local_109[34 /*5*/] = { 2441.264f, 4967.534f, 45.8106f };
			Local_109[35 /*5*/] = { 2440.873f, 4966.538f, 45.8106f };
			Local_109[36 /*5*/] = { 2440.382f, 4965.634f, 45.8106f };
			Local_109[37 /*5*/] = { 2439.71f, 4964.882f, 45.8106f };
			Local_109[38 /*5*/] = { 2438.933f, 4964.146f, 45.8106f };
			Local_109[39 /*5*/] = { 2438.166f, 4963.502f, 45.8106f };
			Local_109[40 /*5*/] = { 2437.555f, 4962.709f, 45.8106f };
			Local_109[41 /*5*/] = { 2436.901f, 4961.95f, 45.8106f };
			Local_109[42 /*5*/] = { 2436.075f, 4961.257f, 45.8106f };
			Local_109[43 /*5*/] = { 2435.08f, 4961.004f, 45.8118f };
			Local_109[44 /*5*/] = { 2434.066f, 4960.713f, 45.8181f };
			Local_109[45 /*5*/] = { 2433.045f, 4960.594f, 45.8192f };
			Local_109[46 /*5*/] = { 2432.065f, 4960.25f, 45.813f };
			Local_109[47 /*5*/] = { 2431.233f, 4960.809f, 45.8089f };
			Local_109[48 /*5*/] = { 2430.575f, 4961.574f, 45.5917f };
			Local_109[49 /*5*/] = { 2429.889f, 4962.028f, 44.9345f };
			Local_109[50 /*5*/] = { 2429.26f, 4962.595f, 44.2774f };
			Local_109[51 /*5*/] = { 2428.691f, 4963.279f, 43.6202f };
			Local_109[52 /*5*/] = { 2428.073f, 4963.911f, 42.9631f };
			Local_109[53 /*5*/] = { 2428.239f, 4964.922f, 42.9631f };
			Local_109[54 /*5*/] = { 2428.961f, 4965.455f, 42.3059f };
			Local_109[55 /*5*/] = { 2429.45f, 4966.224f, 41.8679f };
			Local_109[56 /*5*/] = { 2430.073f, 4966.82f, 41.3476f };
			Local_109[57 /*5*/] = { 2431.097f, 4967.043f, 41.3476f };
			Local_109[58 /*5*/] = { 2431.89f, 4966.403f, 41.3476f };
			Local_109[59 /*5*/] = { 2432.768f, 4965.902f, 41.3476f };
			Local_109[60 /*5*/] = { 2433.776f, 4965.613f, 41.3476f };
			Local_136[0 /*6*/].f_3 = "Table Flames";
			Local_136[0 /*6*/] = 0;
			Local_136[1 /*6*/].f_3 = "Table Explosion";
			Local_136[1 /*6*/] = 0;
			Local_136[2 /*6*/].f_3 = "House Explosion";
			Local_136[2 /*6*/] = 0;
			Local_136[3 /*6*/].f_3 = "Cam Shake";
			Local_136[3 /*6*/] = 0;
			Local_136[4 /*6*/].f_3 = "Position player";
			Local_136[4 /*6*/] = 0;
			Local_136[5 /*6*/].f_3 = "Slow mo";
			Local_136[5 /*6*/] = 0;
			Local_136[0 /*6*/].f_1 = 2;
			Local_136[0 /*6*/].f_2 = 1000f;
			Local_136[1 /*6*/].f_1 = 2;
			Local_136[1 /*6*/].f_2 = 4200f;
			Local_136[2 /*6*/].f_1 = 3;
			Local_136[2 /*6*/].f_2 = 0f;
			Local_136[3 /*6*/].f_1 = 3;
			Local_136[3 /*6*/].f_2 = 0f;
			Local_136[4 /*6*/].f_1 = 3;
			Local_136[4 /*6*/].f_2 = 3200f;
			Local_136[5 /*6*/].f_1 = 3;
			Local_136[5 /*6*/].f_2 = 700f;
			Local_137[0 /*18*/] = { 2454.83f, 4974.96f, 46.4489f };
			Local_137[0 /*18*/].f_3 = { 2.9627f, 0.077f, 115.874f };
			Local_137[0 /*18*/].f_14 = 39.703f;
			Local_137[0 /*18*/].f_6 = { 2454.41f, 4974.93f, 46.4691f };
			Local_137[0 /*18*/].f_9 = { 2.6238f, 0.077f, 114.001f };
			Local_137[0 /*18*/].f_15 = 39.703f;
			Local_137[0 /*18*/].f_12 = 2500f;
			Local_137[0 /*18*/].f_13 = 2500f;
			Local_137[0 /*18*/].f_16 = 0;
			Local_137[0 /*18*/].f_17 = 18;
			Local_137[1 /*18*/] = { 2435.41f, 4960.94f, 45.9568f };
			Local_137[1 /*18*/].f_3 = { 6.677f, 0f, -49.4853f };
			Local_137[1 /*18*/].f_14 = 58.9114f;
			Local_137[1 /*18*/].f_6 = { 2435.11f, 4960.62f, 45.9441f };
			Local_137[1 /*18*/].f_9 = { 6.3596f, 0f, -44.8248f };
			Local_137[1 /*18*/].f_15 = 58.9114f;
			Local_137[1 /*18*/].f_12 = 3200f;
			Local_137[1 /*18*/].f_13 = 1900f;
			Local_137[1 /*18*/].f_16 = 0;
			Local_137[1 /*18*/].f_17 = 34;
			Local_137[2 /*18*/] = { 2434.77f, 4969.56f, 42.3654f };
			Local_137[2 /*18*/].f_3 = { 5.2773f, -0.1511f, 132.167f };
			Local_137[2 /*18*/].f_14 = 35.1297f;
			Local_137[2 /*18*/].f_6 = { 2434.66f, 4969.68f, 42.3657f };
			Local_137[2 /*18*/].f_9 = { 5.2773f, -0.1511f, 132.167f };
			Local_137[2 /*18*/].f_15 = 35.1297f;
			Local_137[2 /*18*/].f_12 = 3500f;
			Local_137[2 /*18*/].f_13 = 4500f;
			Local_137[2 /*18*/].f_16 = 3;
			Local_137[2 /*18*/].f_17 = 49;
			Local_137[3 /*18*/] = { 2472.1f, 4943.1f, 45.3f };
			Local_137[3 /*18*/].f_3 = { 6f, 0f, 25.3f };
			Local_137[3 /*18*/].f_14 = 33.1297f;
			Local_137[3 /*18*/].f_6 = { 2472.1f, 4943.1f, 45.3f };
			Local_137[3 /*18*/].f_9 = { 5.5f, 0f, 35.6f };
			Local_137[3 /*18*/].f_15 = 33.1297f;
			Local_137[3 /*18*/].f_12 = 3500f;
			Local_137[3 /*18*/].f_13 = 3500f;
			Local_137[3 /*18*/].f_16 = 0;
			Local_137[3 /*18*/].f_17 = -1;
			fLocal_157 = 0.06f;
			func_166(1);
			vLocal_142[0 /*3*/] = { 2432.74f, 4963.43f, 41.35f };
			vLocal_142[1 /*3*/] = { 2432.02f, 4962.61f, 41.35f };
			vLocal_142[2 /*3*/] = { 2431.06f, 4961.83f, 41.35f };
			vLocal_142[3 /*3*/] = { 2430.84f, 4961.08f, 42.09f };
			vLocal_142[4 /*3*/] = { 2430.53f, 4962.47f, 42f };
			vLocal_142[5 /*3*/] = { 2430.81f, 4961.1f, 42.8f };
			vLocal_142[6 /*3*/] = { 2429.74f, 4961.98f, 42.32f };
			vLocal_142[7 /*3*/] = { 2433.5f, 4966.76f, 41.35f };
			vLocal_142[8 /*3*/] = { 2433.24f, 4967.42f, 41.35f };
			vLocal_142[9 /*3*/] = { 2433.15f, 4967.43f, 42.19f };
			vLocal_142[10 /*3*/] = { 2432.53f, 4967.89f, 42.4f };
			vLocal_142[11 /*3*/] = { 2432.48f, 4969.07f, 42.19f };
			vLocal_142[12 /*3*/] = { 2433.36f, 4969.44f, 42.31f };
			vLocal_130[0 /*3*/] = { 2552.692f, 4978.566f, 45.32309f };
			vLocal_130[1 /*3*/] = { 2562.534f, 5013.502f, 47.46302f };
			vLocal_130[2 /*3*/] = { 2553.885f, 4945.661f, 47.49305f };
			vLocal_130[3 /*3*/] = { 2515.545f, 4936.428f, 42.88382f };
			vLocal_130[4 /*3*/] = { 2497.318f, 4967.818f, 43.59557f };
			vLocal_130[5 /*3*/] = { 2481.376f, 4951.766f, 43.99859f };
			vLocal_130[6 /*3*/] = { 2522.044f, 4956.372f, 43.71605f };
			vLocal_130[7 /*3*/] = { 2529.048f, 4985.627f, 43.86848f };
			vLocal_130[8 /*3*/] = { 2502.503f, 4987.245f, 46.62669f };
			vLocal_130[9 /*3*/] = { 2464.891f, 4939.949f, 44.25646f };
			vLocal_130[10 /*3*/] = { 2447.16f, 4940.272f, 44.15766f };
			vLocal_130[11 /*3*/] = { 2376.537f, 4946.399f, 41.77232f };
			vLocal_130[12 /*3*/] = { 2395.232f, 4995.63f, 44.68909f };
			vLocal_130[13 /*3*/] = { 2419.819f, 4991.936f, 45.36976f };
			vLocal_130[14 /*3*/] = { 2436.319f, 5011.725f, 45.84694f };
			vLocal_130[15 /*3*/] = { 2407.765f, 5023.079f, 47.77091f };
			vLocal_130[16 /*3*/] = { 2479.016f, 5028.829f, 42.98806f };
			vLocal_130[17 /*3*/] = { 2434.704f, 5042.713f, 45.34462f };
			vLocal_130[18 /*3*/] = { 2513.93f, 5039.333f, 51.02121f };
			vLocal_130[19 /*3*/] = { 2477.882f, 4986.437f, 44.99511f };
			vLocal_130[20 /*3*/] = { 2450.058f, 5011.858f, 44.89032f };
			func_203(&Local_119, &uLocal_203, cLocal_131, 12f, 2482.197f, 4975.367f, 44.7288f, 121f, 1);
			func_360(&vLocal_120, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_360(&vLocal_121, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_360(&vLocal_125, "CHI2_nope", 8, "ONEILGUARD1");
			func_360(&vLocal_122, "SEETREVOR", 3, "chin2goon1");
			func_360(&vLocal_123, "CHI2_hear", 8, "ONEILGUARD1");
			func_360(&vLocal_124, "CHI2_hear", 8, "ONEILGUARD1");
			func_360(&vLocal_126, "ONEILGUARD3", 5, "ONEILGUARD1");
			func_360(&vLocal_127, "ONEILGUARD2", 5, "ONEILGUARD1");
			func_360(&vLocal_128, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_360(&vLocal_129, "GOON2TREV", 4, "CHIN2goon2");
			func_32(6, 1);
			func_32(25, 1);
			iLocal_144 = unk_0x790FE12EE7CA9A03();
			unk_0xFC00A668AFC2126D(joaat("bodhi2"), 1);
			unk_0x94E87D83163B4BEB("TAOGROUP", &iLocal_118);
			unk_0x80E7C4A78224C8F9(1, iLocal_118, 1862763509);
			unk_0x80E7C4A78224C8F9(1, 1862763509, iLocal_118);
			func_17(0, -1);
			unk_0xF10C7DDEAC709758("Chinese2_Lunch", 0);
			unk_0xF10C7DDEAC709758("CHINESE2_HILLBILLIES", 0);
			if (func_359())
			{
				iVar0 = func_358();
				if (Global_87504 == 1)
				{
					iVar0++;
				}
				switch (iVar0)
				{
					case 0:
						func_266(2, 1, 0);
						unk_0x70C1F5AA59767FE6(1000);
						break;
					
					case 1:
						if (Global_87504 == 1)
						{
							func_266(3, 1, 0);
						}
						else
						{
							func_266(4, 1, 0);
							unk_0x70C1F5AA59767FE6(1000);
						}
						break;
					
					case 2:
						func_266(6, 1, 0);
						unk_0x70C1F5AA59767FE6(1000);
						break;
					
					case 3:
						func_266(7, 1, 0);
						unk_0x70C1F5AA59767FE6(1000);
						break;
					
					case 4:
						if (Global_87504 == 1)
						{
							func_266(8, 1, 0);
						}
						else
						{
							func_266(9, 1, 0);
							unk_0x70C1F5AA59767FE6(1000);
						}
						break;
					
					case 5:
						func_266(10, 1, 0);
						unk_0x70C1F5AA59767FE6(1000);
						func_144();
						break;
				}
			}
			else if (func_141(0))
			{
				func_266(1, 0, 1);
			}
			else
			{
				func_176(11);
			}
			break;
	}
}

void func_266(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	func_353(3);
	func_32(6, 0);
	iLocal_150 = 0;
	iLocal_149 = iParam0;
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			unk_0xCACEBBBEAD8F262E(joaat("ig_old_man2"));
			unk_0xCACEBBBEAD8F262E(joaat("ig_old_man1a"));
			unk_0xCACEBBBEAD8F262E(joaat("ig_janet"));
			unk_0xCACEBBBEAD8F262E(joaat("ig_taocheng"));
			unk_0xCACEBBBEAD8F262E(joaat("ig_taostranslator"));
			unk_0x9D7A6D81C3BE2AAE("chinese_2_int", 8);
			while (((((!unk_0x7FC99CCC73354033(joaat("ig_old_man2")) || !unk_0x7FC99CCC73354033(joaat("ig_old_man1a"))) || !unk_0x7FC99CCC73354033(joaat("ig_janet"))) || !unk_0x7FC99CCC73354033(joaat("ig_taocheng"))) || !unk_0x7FC99CCC73354033(joaat("ig_taostranslator"))) || !unk_0x7974D616EF03E483())
			{
				func_28(323, 1);
			}
			while (!func_350(&(Local_113[11 /*33*/]), 21, 1985.666f, 3052.661f, 46.2151f, 0, 1))
			{
				wait(0);
			}
			unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 1992.878f, 3057.846f, 46.0568f, 1, 0, 0, 1);
			unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 311f);
			unk_0x72A0FF8C49CFFC0D(Local_113[11 /*33*/], 9, 1, 0, 0);
			break;
		
		case 2:
			if (bParam1)
			{
				func_349(1992.878f, 3057.846f, 46.0568f, 311f, 1, 0);
			}
			else
			{
				if (func_68(iLocal_144))
				{
					unk_0x4299736016AECE26(iLocal_144, 1994.387f, 3061.94f, 46.0491f, 1, 0, 0, 1);
					unk_0x92DDCF53AA47A63D(iLocal_144, 50.7724f);
				}
				unk_0xD87B76260C547F31(0f);
				unk_0xAA32DD4848CF93E0(-7f, 1065353216);
				unk_0x745C10318A2C7CAE(1992.878f, 3057.846f, 46.0568f);
			}
			unk_0xF66A39BBE7B3C278(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(40f, 40f, 40f), 0, 1, 1, 1);
			unk_0xFF54548CCE498035(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(0f, 40f, 40f));
			unk_0xFDD15D670AD33E10(1984.997f, 3052.905f, 46.8556f, 10f, 1, 0, 0, false);
			func_278(1, 0, bParam2);
			unk_0xCACEBBBEAD8F262E(joaat("ig_taocheng"));
			unk_0xCACEBBBEAD8F262E(joaat("ig_taostranslator"));
			unk_0xCACEBBBEAD8F262E(joaat("ig_old_man1a"));
			unk_0xCACEBBBEAD8F262E(joaat("ig_old_man2"));
			unk_0xCACEBBBEAD8F262E(joaat("ig_janet"));
			unk_0x6D68030C791111E0("misschinese2_crystalmaze");
			while (((((!unk_0x7FC99CCC73354033(joaat("ig_taocheng")) || !unk_0x7FC99CCC73354033(joaat("ig_taostranslator"))) || !unk_0x7FC99CCC73354033(joaat("ig_old_man1a"))) || !unk_0x7FC99CCC73354033(joaat("ig_old_man2"))) || !unk_0x7FC99CCC73354033(joaat("ig_janet"))) || !unk_0x39C2D9AB77873F84("misschinese2_crystalmaze"))
			{
				func_28(3, 1);
			}
			if (!bParam1)
			{
				if (func_68(iLocal_144))
				{
					unk_0x692D5500D82E4F5D(unk_0xA19140A5C42D8715(), iLocal_144, -1);
					unk_0x4299736016AECE26(iLocal_144, 1994.387f, 3061.94f, 46.0491f, 1, 0, 0, 1);
					unk_0x92DDCF53AA47A63D(iLocal_144, 50.7724f);
				}
				else
				{
					unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 1992.878f, 3057.846f, 46.0568f, 1, 0, 0, 1);
					unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 311f);
				}
			}
			func_28(85, 1);
			func_160(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
			while (func_169(2, 41) != 900)
			{
				func_160(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
				func_28(4, 1);
			}
			func_32(26, 0);
			if (bParam1)
			{
				if (func_68(iLocal_144))
				{
					func_275(iLocal_144, -1, 1);
				}
				else
				{
					func_275(0, -1, 1);
				}
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_349(2574.049f, 4981.824f, 50.44f, 50f, 1, 0);
			}
			else
			{
				unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 2570.543f, 4982.002f, 50.6795f, 0, 1, 0, 1);
				unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 98.21f);
				unk_0xD87B76260C547F31(0f);
				unk_0xAA32DD4848CF93E0(-7f, 1065353216);
				unk_0x745C10318A2C7CAE(2458.508f, 4984.504f, 52.3461f);
				func_28(323, 1);
			}
			unk_0xF2DE32563C8C0849(1);
			unk_0x56C835FB478F652B(1);
			unk_0xBF6EED5D6E0CD9BF(0f);
			func_278(0, 0, 0);
			unk_0x683FDE830AD10502("chinese2_farmhouse_cutscene");
			func_28(34, 1);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(5, 1);
			}
			while (!func_225(1, 0, 1))
			{
				func_28(6, 1);
			}
			func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(7, 1);
			}
			while (!unk_0xCB79242F310A5BB2())
			{
				func_28(878, 1);
			}
			if (bParam1)
			{
				func_275(0, -1, 1);
			}
			func_160(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
			while (!func_147(10, 5))
			{
				func_160(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
				func_28(234, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_349(func_274(), func_273(), 1, 0);
			}
			else
			{
				unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 2570.543f, 4982.002f, 50.6795f, 0, 1, 0, 1);
				unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 98.21f);
				unk_0xD87B76260C547F31(0f);
				unk_0xAA32DD4848CF93E0(-7f, 1065353216);
				unk_0x745C10318A2C7CAE(2570.543f, 4982.002f, 50.6795f);
				func_28(323, 1);
			}
			unk_0xF2DE32563C8C0849(1);
			unk_0x56C835FB478F652B(1);
			func_278(0, 1, 0);
			unk_0xBF6EED5D6E0CD9BF(0f);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(8, 1);
			}
			iVar0 = func_272(2);
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), iVar0, 0))
				{
					unk_0xB20B772FD9DE1847(unk_0xA19140A5C42D8715(), iVar0, true);
				}
			}
			func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(9, 1);
			}
			if (bParam1)
			{
				if ((unk_0xDC5D81351D6A4DDB(iLocal_144) && unk_0x1095F403F52B42E1(iLocal_144, 0)) && func_271())
				{
					func_275(iLocal_144, -1, 1);
					if (unk_0x1095F403F52B42E1(iLocal_144, 0))
					{
						unk_0xC19EDC1D7179164C(iLocal_144, true, 1, 0);
						if (unk_0xCA8C103FCD316F89(unk_0x8F474E419F56E48D(iLocal_144)))
						{
							unk_0x625FB4B0328423D9(iLocal_144, 15f);
						}
						if (unk_0x7C197233F79C2CB8(unk_0x8F474E419F56E48D(iLocal_144)))
						{
							unk_0xA7E7312A2DC89797(iLocal_144);
							unk_0xE192BEF245E3374D(iLocal_144, 1f, 1f, 1f);
						}
					}
				}
				else
				{
					func_275(0, -1, 1);
				}
			}
			if (unk_0x499324B3EF19C288(func_274(), 2570.538f, 4982.031f, 50.6239f, true) < 10f)
			{
				unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 2570.538f, 4982.031f, 50.6239f, 1, 0, 0, 1);
				unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 98f);
			}
			if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				func_269(unk_0xA19140A5C42D8715(), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true));
			}
			break;
		
		case 5:
			unk_0xF2DE32563C8C0849(1);
			unk_0x56C835FB478F652B(1);
			unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 2572.01f, 4981.678f, 50.6698f, 1, 0, 0, 1);
			unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 90.3911f);
			unk_0xD87B76260C547F31(0f);
			unk_0xAA32DD4848CF93E0(0f, 1065353216);
			unk_0xBF6EED5D6E0CD9BF(0f);
			func_32(5, 0);
			func_166(1);
			while (func_30(5))
			{
				func_3();
				func_28(10, 1);
			}
			func_278(0, 0, 0);
			func_15("CHN2_TO_HOUSE_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(11, 1);
			}
			func_268(0, 1, 1);
			unk_0xD87B76260C547F31(0f);
			unk_0xAA32DD4848CF93E0(-7f, 1065353216);
			break;
		
		case 6:
			if (bParam1)
			{
				func_349(2450.871f, 4960.999f, 44.3759f, 351f, 1, 0);
			}
			else
			{
				unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 2450.871f, 4960.999f, 44.3759f, 0, 1, 0, 1);
				unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 351.3911f);
				unk_0x745C10318A2C7CAE(2432.982f, 4964.823f, 41.3476f);
				func_28(325, 1);
				unk_0xD87B76260C547F31(0f);
				unk_0xAA32DD4848CF93E0(-7f, 1065353216);
			}
			func_278(0, 0, 0);
			unk_0xF2DE32563C8C0849(1);
			unk_0x56C835FB478F652B(1);
			wait(1);
			func_32(5, 0);
			func_166(1);
			while (func_30(5))
			{
				func_3();
				func_28(12, 1);
			}
			unk_0xBF6EED5D6E0CD9BF(0f);
			func_15("CHN2_ENTER_HOUSE_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(13, 1);
			}
			func_268(0, 1, 1);
			if (bParam1)
			{
				func_275(0, -1, 1);
			}
			if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				func_269(unk_0xA19140A5C42D8715(), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true));
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_349(2435.319f, 4966.153f, 41.3476f, 104.2964f, 1, 0);
			}
			else
			{
				unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 2435.319f, 4966.153f, 41.3476f, 1, 0, 0, 1);
				unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 104.2964f);
				unk_0x745C10318A2C7CAE(2432.982f, 4964.823f, 41.3476f);
				wait(1);
				unk_0xD87B76260C547F31(0f);
				unk_0xAA32DD4848CF93E0(-7f, 1065353216);
			}
			unk_0xF2DE32563C8C0849(1);
			unk_0x56C835FB478F652B(1);
			func_166(1);
			func_278(0, 0, 0);
			unk_0xB29E08C7AB729BAD(unk_0xA19140A5C42D8715(), true);
			iLocal_179 = unk_0x988A25F5907E93F0(2432.982f, 4964.823f, 41.3476f);
			while (!unk_0x893915B076B1DDF7(iLocal_179))
			{
				iLocal_179 = unk_0x988A25F5907E93F0(2432.982f, 4964.823f, 41.3476f);
				func_28(14, 1);
			}
			while (!unk_0x2A8A410BC14B59BC(iLocal_179))
			{
				func_28(15, 1);
			}
			unk_0x40E4EC905662FAF7(iLocal_179, 1);
			unk_0xAFDE4F43F150FE9E(iLocal_179);
			iLocal_179 = 0;
			unk_0x9231E8057B40EF0E(joaat("weapon_petrolcan"), 31, 0);
			unk_0x6D68030C791111E0("misschinese2_crystalmaze");
			while (!unk_0x86FB195D8E9C4FAB(joaat("weapon_petrolcan")) || !unk_0x39C2D9AB77873F84("misschinese2_crystalmaze"))
			{
				func_28(16, 1);
			}
			func_32(11, 0);
			unk_0xB29E08C7AB729BAD(unk_0xA19140A5C42D8715(), false);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(17, 1);
			}
			unk_0xBF6EED5D6E0CD9BF(0f);
			unk_0xCACEBBBEAD8F262E(joaat("blazer"));
			while (!unk_0x7FC99CCC73354033(joaat("blazer")))
			{
				func_28(18, 1);
			}
			func_267(0, 7, 1);
			unk_0xF0188A1B49D79AF7(unk_0xA19140A5C42D8715(), joaat("weapon_petrolcan"), 4500, true, true);
			func_163(0);
			func_15("CHN2_PETROL_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(19, 1);
			}
			if (bParam1)
			{
				func_275(0, -1, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_349(2453.124f, 4952.071f, 45.125f, 285f, 1, 0);
			}
			else
			{
				unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 2453.124f, 4952.071f, 45.125f, 1, 0, 0, 1);
				unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 285.8625f);
				unk_0x745C10318A2C7CAE(2453.124f, 4952.071f, 45.125f);
				wait(1);
				unk_0xD87B76260C547F31(0f);
				unk_0xAA32DD4848CF93E0(-7f, 1065353216);
			}
			func_278(0, 0, 0);
			if (!unk_0xCB79242F310A5BB2())
			{
				unk_0x683FDE830AD10502("chinese2_explosion_cutscene");
			}
			unk_0xF2DE32563C8C0849(1);
			unk_0x56C835FB478F652B(1);
			unk_0xCACEBBBEAD8F262E(joaat("blazer"));
			while (!unk_0x7FC99CCC73354033(joaat("blazer")))
			{
				func_28(20, 1);
			}
			iLocal_146 = unk_0x48CFBECB146FD1A1(joaat("blazer"), 2478.587f, 4941.803f, 43.6736f, 227.2903f, 1, 1, 0);
			unk_0x99F546A9200EA026(iLocal_146, 1084227584);
			iLocal_179 = unk_0x988A25F5907E93F0(2432.982f, 4964.823f, 41.3476f);
			while (!unk_0x893915B076B1DDF7(iLocal_179))
			{
				iLocal_179 = unk_0x988A25F5907E93F0(2432.982f, 4964.823f, 41.3476f);
				func_28(21, 1);
			}
			while (!unk_0x2A8A410BC14B59BC(iLocal_179))
			{
				func_28(22, 1);
			}
			iLocal_166 = 3;
			unk_0x40E4EC905662FAF7(iLocal_179, 1);
			unk_0xAFDE4F43F150FE9E(iLocal_179);
			iLocal_179 = 0;
			while (!unk_0x7FC99CCC73354033(joaat("blazer")) || !unk_0xCB79242F310A5BB2())
			{
				func_28(24, 1);
			}
			if (bParam1)
			{
				func_275(0, -1, 1);
			}
			while (!unk_0xBEB81D4750DEAFA3("CHINESE2_FARMHOUSE_EXPLOSION_SHOOT_GASOLINE_MASTER", 0))
			{
				func_28(23, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_349(2472.3f, 4948.181f, 44.0937f, 220f, 1, 0);
			}
			else
			{
				unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 2472.3f, 4948.181f, 44.0937f, 1, 0, 0, 1);
				unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 220.8569f);
				unk_0x745C10318A2C7CAE(2453.124f, 4952.071f, 45.125f);
				wait(1);
				unk_0xD87B76260C547F31(0f);
				unk_0xAA32DD4848CF93E0(-7f, 1065353216);
			}
			func_31(6, 0);
			unk_0xF2DE32563C8C0849(3);
			unk_0x56C835FB478F652B(3);
			unk_0xCACEBBBEAD8F262E(joaat("blazer"));
			while ((!unk_0x7FC99CCC73354033(joaat("blazer")) || !unk_0x61346376C1469A0E("FARMHOUSE_FIRE", false, -1)) || !unk_0x61346376C1469A0E("FARMHOUSE_FIRE_BG", false, -1))
			{
				func_28(25, 1);
			}
			iLocal_146 = unk_0x48CFBECB146FD1A1(joaat("blazer"), 2478.587f, 4941.803f, 43.6736f, 227.2903f, 1, 1, 0);
			unk_0x99F546A9200EA026(iLocal_146, 1084227584);
			func_278(0, 0, 0);
			unk_0x745C10318A2C7CAE(2453.124f, 4952.071f, 45.125f);
			func_19(50, 0, 0, 1, 0);
			func_19(51, 0, 0, 1, 0);
			func_19(52, 0, 0, 1, 0);
			func_19(53, 0, 0, 1, 0);
			func_19(54, 1, 0, 1, 0);
			func_19(55, 1, 0, 1, 0);
			uLocal_173 = unk_0x389F96269D4F1FD8(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
			while (!unk_0xCD7C9B7A8F43BA15(uLocal_173))
			{
				func_28(161, 1);
			}
			unk_0x317CA41ED2351630(uLocal_173, 9);
			unk_0x8FAC08959C2D32F8(2457.15f, 4968.79f, 48.677f, 100f, 965837842, 0);
			unk_0x8FAC08959C2D32F8(2457.15f, 4968.79f, 48.677f, 100f, 247384786, 0);
			unk_0x8FAC08959C2D32F8(2457.15f, 4968.79f, 48.677f, 100f, -247908770, 0);
			if (bParam1)
			{
				func_275(0, -1, 1);
			}
			break;
		
		case 10:
			func_31(6, 0);
			if (bParam1)
			{
				func_349(2625.776f, 4802.217f, 32.5747f, 206f, 1, 0);
			}
			else
			{
				unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 2625.776f, 4802.217f, 32.5747f, 1, 0, 0, 1);
				unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 206.4254f);
				unk_0xD87B76260C547F31(0f);
				unk_0xAA32DD4848CF93E0(-7f, 1065353216);
				unk_0x745C10318A2C7CAE(2625.776f, 4802.217f, 32.5747f);
			}
			unk_0xF2DE32563C8C0849(3);
			unk_0x56C835FB478F652B(3);
			unk_0x317CA41ED2351630(uLocal_173, 9);
			func_19(50, 2, 0, 1, 0);
			func_19(51, 2, 0, 1, 0);
			func_19(52, 2, 0, 1, 0);
			func_19(53, 2, 0, 1, 0);
			func_19(54, 1, 0, 1, 0);
			func_19(55, 1, 0, 1, 0);
			if (bParam1)
			{
				func_275(0, -1, 1);
			}
			break;
	}
}

void func_267(int iParam0, int iParam1, int iParam2)
{
	Local_389[iParam0 /*4*/].f_1 = iParam2;
	Local_389[iParam0 /*4*/] = iParam1;
}

void func_268(int iParam0, int iParam1, int iParam2)
{
	Local_390[iParam0 /*7*/].f_1 = iParam2;
	Local_390[iParam0 /*7*/] = iParam1;
}

Vector3 func_269(int iParam0, vector3 vParam1)
{
	var uVar0;
	
	vParam1.z = (vParam1.z + 0.15f);
	if (unk_0x8F7BA8E028ADF980(vParam1, &uVar0, 0, 0))
	{
		vParam1.z = uVar0;
	}
	if (func_270(iParam0))
	{
		unk_0x4299736016AECE26(iParam0, vParam1, 1, 0, 0, 1);
	}
	return vParam1;
}

bool func_270(int iParam0)
{
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 0;
	}
	return !unk_0x7112137033807390(iParam0, 0);
}

bool func_271()
{
	return Global_99633.f_2875.f_8;
}

var func_272(int iParam0)
{
	if (Global_93269 > 0)
	{
		return Global_99633.f_21[iParam0];
	}
	return Global_96664.f_21[iParam0];
}

float func_273()
{
	return Global_99633.f_2869.f_3;
}

Vector3 func_274()
{
	return Global_99633.f_2869;
}

void func_275(int iParam0, int iParam1, int iParam2)
{
	if (func_359() && func_277())
	{
		while (Global_93227 != 6)
		{
			wait(0);
		}
		unk_0x62BAB49318F4FE6E(0);
		if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
		{
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				unk_0x7925E894408C3DAD(unk_0xA19140A5C42D8715());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				if (unk_0xDC5D81351D6A4DDB(iParam0))
				{
					if (unk_0x1095F403F52B42E1(iParam0, 0))
					{
						if (!unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iParam0, 0))
						{
							unk_0x692D5500D82E4F5D(unk_0xA19140A5C42D8715(), iParam0, iParam1);
							unk_0xAA32DD4848CF93E0(0f, 1065353216);
							unk_0xD87B76260C547F31(0f);
							wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
			{
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
			}
		}
		unk_0xDB1944D1E5D46A15();
		func_276(0);
	}
}

void func_276(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x2BCFB39E86340DAA(&(Global_93232.f_20), 13);
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_93232.f_20), 13);
	}
}

bool func_277()
{
	return unk_0x05EFB6A616B6FADE(Global_93232.f_20, 13);
}

void func_278(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (func_348())
		{
			if (func_345(func_347(), 10f, 20f, 9f, 1))
			{
				func_344();
				while (!func_343())
				{
					func_28(54455, 1);
				}
				if (bParam2)
				{
					iLocal_144 = func_342(1994.387f, 3061.94f, 46.0491f, 50f);
				}
				else
				{
					iLocal_144 = func_342(0f, 0f, 0f, 0f);
				}
			}
		}
	}
	else if (func_341())
	{
		func_339();
		while (!func_338())
		{
			func_28(544, 1);
		}
		iLocal_144 = func_279(0f, 0f, 0f, 0f);
	}
	if (bParam1)
	{
		if (func_271())
		{
			if (unk_0x1095F403F52B42E1(iLocal_144, 0))
			{
				unk_0x692D5500D82E4F5D(unk_0xA19140A5C42D8715(), iLocal_144, -1);
			}
		}
	}
}

int func_279(vector3 vParam0, float fParam1)
{
	return func_280(&(Global_99633.f_2875), vParam0, fParam1, 0);
}

int func_280(var uParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_337(uParam0))
	{
		if (func_162(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x0C4DF083566CCC1C(vParam1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				vParam1 = { -850.93f, 158.82f, 65.7f };
				fParam2 = 89.5f;
			}
		}
		if (func_336(uParam0))
		{
			unk_0xFDD15D670AD33E10(vParam1, 5f, 1, 0, 0, false);
			func_335(vParam1, 5f, 0);
			iVar0 = unk_0x48CFBECB146FD1A1(uParam0->f_12.f_66, vParam1, fParam2, 1, 1, 0);
			if (unk_0xDC5D81351D6A4DDB(iVar0))
			{
				vVar1 = { unk_0xE2BBD32891C18569(iVar0, true) };
				if (vdist2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0xE8B3104D1CB25CDC(iVar0, vParam1, 0, 0, 1);
				}
				func_318(iVar0, &(uParam0->f_12), 0, 1);
				bVar2 = true;
				if (unk_0x71852D4EBD08275F(uParam0->f_12.f_66) || unk_0xD7ACB5DACC6B9C97(uParam0->f_12.f_66))
				{
					if (!unk_0x604284C2FC63077C(vParam1.x, vParam1.y, (vParam1.z + 30f), vParam1.x, vParam1.y, (vParam1.z - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					unk_0x99F546A9200EA026(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (unk_0x425CD7B17352316F(unk_0x8F474E419F56E48D(iVar0)))
						{
							func_317(uParam0->f_11, 1);
						}
						else if (unk_0x8CE5E4632E631B03(unk_0x8F474E419F56E48D(iVar0)))
						{
							func_317(uParam0->f_11, 2);
						}
					}
					unk_0x6A1316C2E50E25F8(iVar0, 0);
					unk_0x6759DE81DF6FBF31(iVar0, 0);
					unk_0x0BE3742BB3253F0E(iVar0, true);
					func_316(iVar0, uParam0->f_11);
				}
				else if ((!func_314(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x3CAC2741CC1A631F(unk_0x61D2332983ACC05C(), "startup_positioning"))
				{
					iVar4 = func_313(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_306(iVar4);
					}
				}
				if (((Global_93232 != 13 && Global_93232 != 10) && Global_93232 != 11) && Global_93232 != 12)
				{
					if (unk_0xFEB6EEC0545AF7AA(&(Global_93232.f_3)) == Global_71012)
					{
						if (uParam0->f_12.f_66 == Global_106070.f_32605.f_69[21 /*78*/].f_66)
						{
							func_303(24, 0);
							func_306(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_281(iVar0, uParam0->f_11);
				}
				unk_0xA5DE74AE39867B03(uParam0->f_12.f_66);
				vVar1 = { unk_0xE2BBD32891C18569(iVar0, true) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_281(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_287(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xB0D49A1F9F054602(iParam0, -1, 0);
		if (!unk_0xDC5D81351D6A4DDB(iVar0))
		{
			iVar0 = unk_0xBF8685DA34F4F151(iParam0, -1);
		}
		if (unk_0xDC5D81351D6A4DDB(iVar0) && !unk_0x4915F4759304D5CF(iVar0))
		{
			if (unk_0x8F474E419F56E48D(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x8F474E419F56E48D(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x8F474E419F56E48D(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_106070.f_2355.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x8F474E419F56E48D(iParam0) == Global_106070.f_32605.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x429D45A6C6520026(&(Global_106070.f_32605.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x3CAC2741CC1A631F(unk_0xC5D229CE54955E47(iParam0), &(Global_106070.f_32605.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_106070.f_32605.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_106070.f_32605.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x8F474E419F56E48D(iParam0) == Global_106070.f_32605.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x429D45A6C6520026(&(Global_106070.f_32605.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x3CAC2741CC1A631F(unk_0xC5D229CE54955E47(iParam0), &(Global_106070.f_32605.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_106070.f_32605.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_106070.f_32605.f_5590 = iParam1;
	Global_70929 = iParam0;
	Global_106070.f_32605.f_5588 = 1;
	func_282(iParam0, &(Global_106070.f_32605.f_5510));
}

void func_282(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		func_286(uParam1);
		uParam1->f_66 = unk_0x8F474E419F56E48D(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xC5D229CE54955E47(iParam0), 16);
		*uParam1 = unk_0xDDB38D7590A81CE5(iParam0);
		unk_0x249EC6991E16D61D(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xD8185C6194306C6E(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x00D0FF77BA971D60(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xBA6EC692A8E9BD41(iParam0);
		uParam1->f_67 = unk_0x9373D3C23637D009(iParam0);
		uParam1->f_69 = unk_0x8342B65392C8BC37(iParam0);
		uParam1->f_70 = unk_0xED16A3D69B141AED(iParam0);
		unk_0x292472155924CBB5(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x922C8705F0BA67E6(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x243FC0956CEB6D1F(iParam0, 2))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 28);
		}
		if (unk_0x243FC0956CEB6D1F(iParam0, 3))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 29);
		}
		if (unk_0x243FC0956CEB6D1F(iParam0, 0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 30);
		}
		if (unk_0x243FC0956CEB6D1F(iParam0, 1))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_285(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xEF6267624B1C9336(iParam0, 0))
		{
			uParam1->f_68 = unk_0x392DF1C78010FB0C(iParam0);
		}
		if (unk_0xCA8C103FCD316F89(uParam1->f_66))
		{
			if (unk_0xB4476DCF5073F3D1(iParam0))
			{
				switch (unk_0xED4856750A5EA5E8(iParam0))
				{
					case 3:
					case 0:
						unk_0xFA57C719261AA55D(&(uParam1->f_77), 23);
						unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0xFA57C719261AA55D(&(uParam1->f_77), 23);
						unk_0xFA57C719261AA55D(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xCBFCD862A600B654(iParam0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 9);
		}
		if (unk_0x36167F9370DCE78E(iParam0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 10);
		}
		if (unk_0x8DEA0E8C80861E9D(iParam0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 13);
			unk_0xE5F6CFB0158C9F97(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xE9FF101C94B1BBDB(iParam0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 12);
		}
		func_284(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xED6D3EA61B44622B(iParam0, iVar0 + 1))
			{
				unk_0x2BCFB39E86340DAA(&(uParam1->f_77), func_283(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x33C323290E3BDAB1(iParam0, 0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xFA57C719261AA55D(&(uParam1->f_77), 11);
		}
		if (unk_0xAEAF59799C2F26E4(iParam0, "IgnoredByQuickSave") && unk_0x13AF6A38CAD2D5DD(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xFA57C719261AA55D(&(uParam1->f_77), 27);
		}
	}
}

int func_283(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_284(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x1095F403F52B42E1(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x857E88DF0C8EDB8B(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x9E68AB02E7DC3B39(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x9E68AB02E7DC3B39(*iParam0, iVar1))
			{
				switch (unk_0x3DFF319A831E0CDB(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x22D95AF01E737CA1(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB9A77CDBB0A3A5D8(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB9A77CDBB0A3A5D8(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_285(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

void func_286(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_287(int iParam0)
{
	if ((((((((((!unk_0xDC5D81351D6A4DDB(iParam0) || !unk_0x1095F403F52B42E1(iParam0, 0)) || func_72(iParam0, 0, 0)) || func_72(iParam0, 1, 0)) || func_72(iParam0, 2, 0)) || func_302(iParam0) != 145) || func_301(iParam0)) || func_300(iParam0)) || func_299(iParam0)) || func_298(iParam0)) || !func_288(unk_0x8F474E419F56E48D(iParam0)))
	{
		if (func_300(iParam0))
		{
		}
		if (func_300(iParam0))
		{
		}
		if (func_72(iParam0, 0, 0))
		{
		}
		if (func_72(iParam0, 1, 0))
		{
		}
		if (func_72(iParam0, 2, 0))
		{
		}
		if (func_302(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_288(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_289(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x71852D4EBD08275F(iParam0) || unk_0xCA8C103FCD316F89(iParam0)) || unk_0x7C197233F79C2CB8(iParam0)) || unk_0x289FBFAD3E416C48(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_289(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x671704836D893828(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x4C9BACA8D249CB13()) || (iParam0 == joaat("buffalo3") && !unk_0x4C9BACA8D249CB13())) || (iParam0 == joaat("gauntlet2") && !unk_0x4C9BACA8D249CB13())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x4C9BACA8D249CB13()))
	{
		if (!func_297())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x730B2D99EC02BFBB())
		{
			if (unk_0xED2E7B72F90BB7CF(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x3B61940560400F58(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_296() && !func_295()) && !func_294()) && !func_293()) && !func_297())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x29A02C184A66D25E() || unk_0x47C01C0E6F4C1D06()) || unk_0x7DD04831D0FC44CA())
		{
		}
		else if (!func_294())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_292(iParam0))
		{
			return 0;
		}
	}
	if (!func_290(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_290(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_291())
	{
		return 1;
	}
	unk_0x0B2954993B98F51D(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x3B6DCE62F381F366(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_291()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

int func_292(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2503689)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x5E0F2F352218B916();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6488 && !Global_262145.f_12797) && iVar1 < Global_262145.f_12798)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14095 && iVar1 < Global_262145.f_14107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14091 && iVar1 < Global_262145.f_14103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14092 && iVar1 < Global_262145.f_14104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14093 && iVar1 < Global_262145.f_14105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14094 && iVar1 < Global_262145.f_14106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14096 && iVar1 < Global_262145.f_14108)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14097 && iVar1 < Global_262145.f_14100)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14098 && iVar1 < Global_262145.f_14101)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14099 && iVar1 < Global_262145.f_14102)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16727 && iVar1 < Global_262145.f_16691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16722 && iVar1 < Global_262145.f_16686)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16726 && iVar1 < Global_262145.f_16690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16725 && iVar1 < Global_262145.f_16689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16719 && iVar1 < Global_262145.f_16683)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16720 && iVar1 < Global_262145.f_16684)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16723 && iVar1 < Global_262145.f_16687)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16724 && iVar1 < Global_262145.f_16688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16721 && iVar1 < Global_262145.f_16685)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16729 && iVar1 < Global_262145.f_16693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16730 && iVar1 < Global_262145.f_16694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16718 && iVar1 < Global_262145.f_16682)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16717 && iVar1 < Global_262145.f_16681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16716 && iVar1 < Global_262145.f_16680)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16728 && iVar1 < Global_262145.f_16692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16731 && iVar1 < Global_262145.f_16695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16732 && iVar1 < Global_262145.f_16696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16733 && iVar1 < Global_262145.f_16697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16734 && iVar1 < Global_262145.f_16698)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16879 && iVar1 < Global_262145.f_16901)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16880 && iVar1 < Global_262145.f_16902)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16881 && iVar1 < Global_262145.f_16903)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16882 && iVar1 < Global_262145.f_16904)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16883 && iVar1 < Global_262145.f_16905)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16884 && iVar1 < Global_262145.f_16906)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16886 && iVar1 < Global_262145.f_16907)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16887 && iVar1 < Global_262145.f_16908)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16888 && iVar1 < Global_262145.f_16909)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16889 && iVar1 < Global_262145.f_16910)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16890 && iVar1 < Global_262145.f_16911)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16891 && iVar1 < Global_262145.f_16912)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16892 && iVar1 < Global_262145.f_16913)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16898 && iVar1 < Global_262145.f_16920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16895 && iVar1 < Global_262145.f_16916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16896 && iVar1 < Global_262145.f_16917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16897 && iVar1 < Global_262145.f_16918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16885 && iVar1 < Global_262145.f_16919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16899 && iVar1 < Global_262145.f_16921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16893 && iVar1 < Global_262145.f_16914)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16894 && iVar1 < Global_262145.f_16915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16900 && iVar1 < Global_262145.f_16922)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18528 && iVar1 < Global_262145.f_18625)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18529 && iVar1 < Global_262145.f_18626)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18530 && iVar1 < Global_262145.f_18627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18531 && iVar1 < Global_262145.f_18628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18532 && iVar1 < Global_262145.f_18629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18533 && iVar1 < Global_262145.f_18630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18534 && iVar1 < Global_262145.f_18631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18535 && iVar1 < Global_262145.f_18632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18536 && iVar1 < Global_262145.f_18633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18537 && iVar1 < Global_262145.f_18634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18538 && iVar1 < Global_262145.f_18635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18539 && iVar1 < Global_262145.f_18636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18540 && iVar1 < Global_262145.f_18637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18541 && iVar1 < Global_262145.f_18638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18542 && iVar1 < Global_262145.f_18639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18543 && iVar1 < Global_262145.f_18640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18544 && iVar1 < Global_262145.f_18641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18545 && iVar1 < Global_262145.f_18642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18546 && iVar1 < Global_262145.f_18643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18547 && iVar1 < Global_262145.f_18644)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18548 && iVar1 < Global_262145.f_18645)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18549 && iVar1 < Global_262145.f_18646)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18550 && iVar1 < Global_262145.f_18647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18551 && iVar1 < Global_262145.f_18648)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18552 && iVar1 < Global_262145.f_18649)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19608 && iVar1 < Global_262145.f_19604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19609 && iVar1 < Global_262145.f_19605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19610 && iVar1 < Global_262145.f_19606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19611 && iVar1 < Global_262145.f_19607)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_20487 && iVar1 < Global_262145.f_20495)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_20488 && iVar1 < Global_262145.f_20496)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_20489 && iVar1 < Global_262145.f_20497)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_20490 && iVar1 < Global_262145.f_20498)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_20491 && iVar1 < Global_262145.f_20499)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_20492 && iVar1 < Global_262145.f_20500)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_21264 && iVar1 < Global_262145.f_21284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_21276 && iVar1 < Global_262145.f_21296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_21267 && iVar1 < Global_262145.f_21287)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_21277 && iVar1 < Global_262145.f_21297)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_21265 && iVar1 < Global_262145.f_21285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_21281 && iVar1 < Global_262145.f_21301)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_21279 && iVar1 < Global_262145.f_21299)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_21280 && iVar1 < Global_262145.f_21300)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_21275 && iVar1 < Global_262145.f_21295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_21282 && iVar1 < Global_262145.f_21302)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_21278 && iVar1 < Global_262145.f_21298)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_21274 && iVar1 < Global_262145.f_21294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_21266 && iVar1 < Global_262145.f_21286)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_21268 && iVar1 < Global_262145.f_21288)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_21269 && iVar1 < Global_262145.f_21289)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_21270 && iVar1 < Global_262145.f_21290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_21271 && iVar1 < Global_262145.f_21291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_21272 && iVar1 < Global_262145.f_21292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_21273 && iVar1 < Global_262145.f_21293)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_22225 && iVar1 < Global_262145.f_22253)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_22226 && iVar1 < Global_262145.f_22254)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_22227 && iVar1 < Global_262145.f_22255)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_22228 && iVar1 < Global_262145.f_22256)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_22229 && iVar1 < Global_262145.f_22257)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_22230 && iVar1 < Global_262145.f_22258)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_22231 && iVar1 < Global_262145.f_22259)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_22232 && iVar1 < Global_262145.f_22260)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_22233 && iVar1 < Global_262145.f_22261)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_22234 && iVar1 < Global_262145.f_22262)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_22235 && iVar1 < Global_262145.f_22263)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_22236 && iVar1 < Global_262145.f_22264)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_22237 && iVar1 < Global_262145.f_22265)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_22238 && iVar1 < Global_262145.f_22266)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_22239 && iVar1 < Global_262145.f_22267)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_22240 && iVar1 < Global_262145.f_22268)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_22241 && iVar1 < Global_262145.f_22269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_22242 && iVar1 < Global_262145.f_22270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_22243 && iVar1 < Global_262145.f_22271)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_22244 && iVar1 < Global_262145.f_22272)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_22245 && iVar1 < Global_262145.f_22273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_22246 && iVar1 < Global_262145.f_22274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_22247 && iVar1 < Global_262145.f_22275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_22248 && iVar1 < Global_262145.f_22276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_22249 && iVar1 < Global_262145.f_22277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_22250 && iVar1 < Global_262145.f_22278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_22251 && iVar1 < Global_262145.f_22279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_22252 && iVar1 < Global_262145.f_22280)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_23432 && iVar1 < Global_262145.f_23448)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_23433 && iVar1 < Global_262145.f_23449)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_23437 && iVar1 < Global_262145.f_23453)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_23440 && iVar1 < Global_262145.f_23456)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_23445 && iVar1 < Global_262145.f_23461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_23439 && iVar1 < Global_262145.f_23455)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_23431 && iVar1 < Global_262145.f_23447)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_23438 && iVar1 < Global_262145.f_23454)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_23444 && iVar1 < Global_262145.f_23460)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_23443 && iVar1 < Global_262145.f_23459)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_23434 && iVar1 < Global_262145.f_23450)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_23436 && iVar1 < Global_262145.f_23452)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_23446 && iVar1 < Global_262145.f_23462)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_23442 && iVar1 < Global_262145.f_23458)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_23435 && iVar1 < Global_262145.f_23451)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_23441 && iVar1 < Global_262145.f_23457)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_262145.f_23522 && iVar1 < Global_262145.f_23509)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_262145.f_23523 && iVar1 < Global_262145.f_23510)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_262145.f_23528 && iVar1 < Global_262145.f_23515)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_262145.f_23527 && iVar1 < Global_262145.f_23514)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_262145.f_23525 && iVar1 < Global_262145.f_23512)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_262145.f_23531 && iVar1 < Global_262145.f_23518)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_262145.f_23533 && iVar1 < Global_262145.f_23520)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_262145.f_23534 && iVar1 < Global_262145.f_23521)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_262145.f_23532 && iVar1 < Global_262145.f_23519)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_262145.f_23524 && iVar1 < Global_262145.f_23511)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_262145.f_23526 && iVar1 < Global_262145.f_23513)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_262145.f_23530 && iVar1 < Global_262145.f_23517)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_262145.f_23529 && iVar1 < Global_262145.f_23516)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1721676810)
	{
	}
	else if (iParam0 == -801550069)
	{
	}
	else if (iParam0 == 679453769)
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == 2139203625)
	{
	}
	else if (iParam0 == -1890996696)
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == -1146969353)
	{
	}
	else if (iParam0 == 1542143200)
	{
	}
	else if (iParam0 == -579747861)
	{
	}
	else if (iParam0 == 444994115)
	{
	}
	else if (iParam0 == 1637620610)
	{
	}
	else if (iParam0 == -755532233)
	{
	}
	else if (iParam0 == 540101442)
	{
	}
	else if (iParam0 == -1106120762)
	{
	}
	else if (iParam0 == -1478704292)
	{
	}
	else if (iParam0 == -2096690334)
	{
	}
	else if (iParam0 == 1591739866)
	{
		if (!Global_262145.f_25628 && iVar1 < Global_262145.f_25630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1168952148)
	{
		if (!Global_262145.f_24683 && iVar1 < Global_262145.f_24676)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1566607184)
	{
		if (!Global_262145.f_24684 && iVar1 < Global_262145.f_24677)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -331467772)
	{
		if (!Global_262145.f_24685 && iVar1 < Global_262145.f_24678)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1279262537)
	{
		if (!Global_262145.f_24686 && iVar1 < Global_262145.f_24679)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -49115651)
	{
		if (!Global_262145.f_25629 && iVar1 < Global_262145.f_25631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456744817)
	{
		if (!Global_262145.f_24687 && iVar1 < Global_262145.f_24680)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -507495760)
	{
		if (!Global_262145.f_24688 && iVar1 < Global_262145.f_24681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -286046740)
	{
		if (!Global_262145.f_24689 && iVar1 < Global_262145.f_24682)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_293()
{
	return 0;
}

int func_294()
{
	return 1;
}

int func_295()
{
	return 1;
}

int func_296()
{
	if (unk_0x05BEBC245254F6F2(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_297()
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

int func_298(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x8F474E419F56E48D(iParam0);
	sVar1 = unk_0xC5D229CE54955E47(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3CAC2741CC1A631F(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_289(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_299(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xDC5D81351D6A4DDB(Global_90688[iVar0]))
		{
			if (Global_90688[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_300(int iParam0)
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0) && unk_0x1095F403F52B42E1(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xDC5D81351D6A4DDB(Global_90658[iVar0]) && unk_0x1095F403F52B42E1(Global_90658[iVar0], 0))
			{
				if (Global_90658[iVar0] == iParam0 && unk_0x8F474E419F56E48D(Global_90658[iVar0]) == unk_0x8F474E419F56E48D(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_301(int iParam0)
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(Global_70024.f_484[24]))
	{
		if (iParam0 == Global_70024.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xDC5D81351D6A4DDB(Global_70024.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_70024.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_302(int iParam0)
{
	int iVar0;
	
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 145;
	}
	if (!unk_0x1095F403F52B42E1(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xDC5D81351D6A4DDB(Global_90658[iVar0]))
		{
			if (Global_90658[iVar0] == iParam0)
			{
				return Global_90668[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_303(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_305(iParam0, 0))
		{
			func_304(iParam0, 1, 0);
			func_304(iParam0, 2, 0);
			func_304(iParam0, 3, 0);
			func_304(iParam0, 4, 0);
			func_304(iParam0, 0, 1);
			Global_70024[iParam0] = 1;
		}
	}
	else
	{
		func_304(iParam0, 0, 0);
	}
}

void func_304(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x2BCFB39E86340DAA(&(Global_106070.f_32605[iParam0]), iParam1);
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_106070.f_32605[iParam0]), iParam1);
	}
}

bool func_305(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_106070.f_32605[iParam0], iParam1);
}

void func_306(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_310(&(Global_70024.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xDC5D81351D6A4DDB(Global_70024.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				if (unk_0x1095F403F52B42E1(Global_70024.f_139[iParam0], 0))
				{
					if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), Global_70024.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x1F7948851FB36E88(Global_70024.f_139[iParam0], true, 1);
				unk_0x4C842FAB634AC89E(&(Global_70024.f_139[iParam0]));
			}
		}
		Global_70024[iParam0] = 1;
		if (unk_0x05EFB6A616B6FADE(Global_70024.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_305(iParam0, 0)) && Global_70933.f_66 == 0) && Global_106070.f_32605.f_1958[Global_70024.f_555[0 /*21*/].f_14] != 0) && Global_106070.f_32605.f_1958[Global_70024.f_555[0 /*21*/].f_14] > 3) && (!func_308(0, Global_70024.f_555[0 /*21*/].f_12) || !func_308(1, Global_70024.f_555[0 /*21*/].f_12)))
			{
				func_307(&(Global_106070.f_32605.f_69[Global_70024.f_555[0 /*21*/].f_14 /*78*/]), &Global_70933);
				Global_71011 = Global_106070.f_32605.f_5591;
			}
			func_303(iParam0, 0);
		}
	}
}

void func_307(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_308(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_309(&(Global_106070.f_32605.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_289(Global_106070.f_32605.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_309(var uParam0)
{
	return *uParam0;
}

int func_310(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_311(0, 1);
			uParam0->f_12 = 0;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 20);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_311(0, 1);
			uParam0->f_12 = 0;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 20);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_311(1, 1);
			uParam0->f_12 = 1;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 20);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_311(1, 2);
			uParam0->f_12 = 1;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 19);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_311(1, 1);
			uParam0->f_12 = 1;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 20);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_311(1, 2);
			uParam0->f_12 = 1;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 19);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_311(2, 1);
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 20);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_311(2, 1);
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 20);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_311(2, 1);
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 20);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 22);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 22);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 22);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 24);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 24);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 24);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 27);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 24);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 27);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 24);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 27);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 24);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 11);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 13);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 11);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 13);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 9);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 9);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = 1938952078;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 2);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 30);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 2);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 22);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_297())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 13);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 2);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 1);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_297())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 13);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 2);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 1);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 30);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 30);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x05EFB6A616B6FADE(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_106070.f_32605.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_162(Global_106070.f_32605.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106070.f_32605.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_106070.f_32605.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_106070.f_32605.f_1934[uParam0->f_14];
		}
	}
	if (unk_0x05EFB6A616B6FADE(uParam0->f_9, 19))
	{
		if (!func_162(Global_106070.f_2355.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106070.f_2355.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_106070.f_2355.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x05EFB6A616B6FADE(uParam0->f_9, 20))
	{
		if (!func_162(Global_106070.f_2355.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106070.f_2355.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_106070.f_2355.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_311(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_45(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_312(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_312(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_106070.f_9057.f_99.f_58[128] && !Global_106070.f_9057.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_106070.f_9057.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_106070.f_9057.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_313(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0xDC5D81351D6A4DDB(Global_70024.f_484[iVar0]) && !unk_0x7112137033807390(Global_70024.f_484[iVar0], 0)) && unk_0x1095F403F52B42E1(Global_70024.f_484[iVar0], 0))
		{
			unk_0x249EC6991E16D61D(iParam0, &iVar1, &iVar2);
			unk_0x249EC6991E16D61D(Global_70024.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x8F474E419F56E48D(iParam0) == unk_0x8F474E419F56E48D(Global_70024.f_484[iVar0]) && unk_0x9373D3C23637D009(iParam0) == unk_0x9373D3C23637D009(Global_70024.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_314(int iParam0, vector3 vParam1, bool bParam2)
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x8F474E419F56E48D(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_315(iParam0, Global_70024.f_139[38], 0))
			{
				func_306(38);
				return 1;
			}
			break;
		
		case 1938952078:
			if (func_315(iParam0, Global_70024.f_139[43], 1))
			{
				func_306(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = unk_0xA4C9135FF4C7C4D2(unk_0xA19140A5C42D8715(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_315(iParam0, uVar1[iVar3], 1) && func_229(unk_0xE2BBD32891C18569(uVar1[iVar3], true), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam2 || func_162(vParam1, 0f, 0f, 0f, 0)) || unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(iParam0, true), unk_0xE2BBD32891C18569(uVar1[iVar3], true), true) < 10f)
					{
						unk_0x4C842FAB634AC89E(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar3++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0xDC5D81351D6A4DDB(Global_70024.f_484[14]) && unk_0x1095F403F52B42E1(iParam0, 0)) && unk_0x1095F403F52B42E1(Global_70024.f_484[14], 0))
			{
				if (unk_0x8F474E419F56E48D(Global_70024.f_484[14]) == joaat("luxor2") && unk_0x9373D3C23637D009(iParam0) == unk_0x9373D3C23637D009(Global_70024.f_484[14]))
				{
					func_306(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0xDC5D81351D6A4DDB(Global_70024.f_484[20]) && unk_0x1095F403F52B42E1(iParam0, 0)) && unk_0x1095F403F52B42E1(Global_70024.f_484[20], 0))
			{
				if (unk_0x8F474E419F56E48D(Global_70024.f_484[20]) == joaat("swift2") && unk_0x9373D3C23637D009(iParam0) == unk_0x9373D3C23637D009(Global_70024.f_484[20]))
				{
					func_306(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_315(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0xDC5D81351D6A4DDB(iParam1) && !unk_0x7112137033807390(iParam1, 0)) && unk_0x1095F403F52B42E1(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0x249EC6991E16D61D(iParam0, &iVar0, &iVar1);
			unk_0x249EC6991E16D61D(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
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

void func_316(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xDC5D81351D6A4DDB(Global_90658[iVar0]))
		{
			Global_90658[iVar0] = iParam0;
			Global_90668[iVar0] = iParam1;
			Global_90678[iVar0] = unk_0x8F474E419F56E48D(iParam0);
			if (unk_0x425CD7B17352316F(Global_90678[iVar0]))
			{
				Global_90706[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_90706[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_317(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xDC5D81351D6A4DDB(Global_90658[iVar0]))
		{
			if (iParam0 == 145 || Global_90668[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x8F474E419F56E48D(Global_90658[iVar0]) == func_311(iParam0, iParam1))
				{
					if (!unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), Global_90658[iVar0], 0))
					{
						unk_0x1F7948851FB36E88(Global_90658[iVar0], false, 1);
						unk_0x4C842FAB634AC89E(&(Global_90658[iVar0]));
						Global_90668[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_318(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		if (!func_327(iParam0))
		{
			if (unk_0xFEB6EEC0545AF7AA(&(uParam1->f_1)) != 0)
			{
				unk_0xAA8C8977AD74EDE5(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0x4BEB9C61619C0346())
			{
				unk_0xEEF67CF6BF9A762A(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0x05EFB6A616B6FADE(uParam1->f_77, func_283(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x2BCFB39E86340DAA(&(uParam1->f_77), func_283(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0x05EFB6A616B6FADE(uParam1->f_77, func_283(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x2BCFB39E86340DAA(&(uParam1->f_77), func_283(iVar1 + 1));
			}
		}
		if (uParam1->f_66 == 433954513)
		{
			unk_0x3011BD9AA6A55E80(iParam0, 0);
			if (unk_0x22D95AF01E737CA1(iParam0, 5) != -1)
			{
				unk_0x3011BD9AA6A55E80(iParam0, 1);
			}
		}
		if (unk_0x05EFB6A616B6FADE(uParam1->f_77, 13))
		{
			unk_0xB3A9D38E7EC92939(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x59E44D3D7CDB7226(iParam0);
		}
		if (unk_0x05EFB6A616B6FADE(uParam1->f_77, 12))
		{
			unk_0x1D16DEC90EA8EA37(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x26845F41B4976D8C(iParam0);
		}
		unk_0x9174BE523666C5A0(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x8B55653F1DAE7C6F(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0x05EFB6A616B6FADE(uParam1->f_77, 15) || func_326(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_325())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0x77F6779C76C0A677(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_285(uParam1->f_66))
		{
			unk_0x75D4E913CDBD499F(iParam0, 0);
		}
		else
		{
			unk_0x75D4E913CDBD499F(iParam0, 0);
			unk_0x75D4E913CDBD499F(iParam0, uParam1->f_65);
		}
		unk_0xAB9FD40CC0E419E3(iParam0, !unk_0x05EFB6A616B6FADE(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0x14293208022014FA(iParam0, uParam1->f_70);
		}
		unk_0xD11548BD19DB1DDE(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x88A8A1DD7BEC8EE6(iParam0, 2, unk_0x05EFB6A616B6FADE(uParam1->f_77, 28));
		unk_0x88A8A1DD7BEC8EE6(iParam0, 3, unk_0x05EFB6A616B6FADE(uParam1->f_77, 29));
		unk_0x88A8A1DD7BEC8EE6(iParam0, 0, unk_0x05EFB6A616B6FADE(uParam1->f_77, 30));
		unk_0x88A8A1DD7BEC8EE6(iParam0, 1, unk_0x05EFB6A616B6FADE(uParam1->f_77, 31));
		unk_0x42B5518F103DB03E(iParam0, unk_0x05EFB6A616B6FADE(uParam1->f_77, 10));
		if (unk_0xED7BD60FFF05A721(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xA70C63A3E45BA678(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x1F41816F62350826(unk_0x8F474E419F56E48D(iParam0)))
			{
				if (unk_0x8CE5E4632E631B03(unk_0x8F474E419F56E48D(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_324(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_324(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0xEF6267624B1C9336(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x1F47C2C85A56E64C(iParam0, 1);
			}
			else
			{
				unk_0x6E76703BBC6CEB50(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_319(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0x7C197233F79C2CB8(uParam1->f_66) && !unk_0x71852D4EBD08275F(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0x05EFB6A616B6FADE(uParam1->f_77, func_283(iVar2 + 1)))
				{
					if (!unk_0xED6D3EA61B44622B(iParam0, iVar2 + 1))
					{
						unk_0x6202B241A8864FC2(iParam0, iVar2 + 1, false);
					}
				}
				else if (unk_0xED6D3EA61B44622B(iParam0, iVar2 + 1))
				{
					unk_0x6202B241A8864FC2(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if ((unk_0x8F474E419F56E48D(iParam0) == joaat("sheava") || unk_0x8F474E419F56E48D(iParam0) == joaat("omnis")) || unk_0x8F474E419F56E48D(iParam0) == joaat("le7b"))
		{
			if (unk_0x22D95AF01E737CA1(iParam0, 0) == -1)
			{
				unk_0x6202B241A8864FC2(iParam0, 1, false);
			}
		}
		if (((unk_0xCA8C103FCD316F89(uParam1->f_66) && unk_0x048A0164431728BE(iParam0)) && !unk_0xD3C4AB5E628133C1(iParam0, -2118308144)) && !((((Global_4456448.f_53220 == 6 || Global_4456448.f_53220 == 7) || Global_4456448.f_53220 == 18) || Global_4456448.f_53220 == 19) && Global_4456448.f_2 == 20))
		{
			if (!unk_0x05EFB6A616B6FADE(uParam1->f_77, 23))
			{
				if (unk_0x05EFB6A616B6FADE(uParam1->f_77, 22))
				{
					unk_0x37B223069072EA25(iParam0, 2);
				}
				else
				{
					unk_0x37B223069072EA25(iParam0, 3);
				}
			}
			else
			{
				unk_0x37B223069072EA25(iParam0, 4);
			}
		}
		if (unk_0x05EFB6A616B6FADE(uParam1->f_77, 27))
		{
			unk_0x305AD237D017041C(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x305AD237D017041C(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_319(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x1095F403F52B42E1(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x857E88DF0C8EDB8B(*iParam0) == 0)
	{
		return 0;
	}
	unk_0xE8F84C99DF1C7D20(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0x8D79809AF5D42F43(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0x8D79809AF5D42F43(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0xE41033B25D003A07(*iParam0, 255);
				}
				else
				{
					unk_0xE41033B25D003A07(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0x8D79809AF5D42F43(*iParam0, iVar1, false);
			}
		}
		else if (unk_0x22D95AF01E737CA1(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xF1338FDC7D6CF388(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x1EE56D43DA30ADC6(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x1EE56D43DA30ADC6(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x1EE56D43DA30ADC6(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_323(unk_0x8F474E419F56E48D(*iParam0), 1) && unk_0x22D95AF01E737CA1(*iParam0, 24) != func_322(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x1EE56D43DA30ADC6(*iParam0, 24, func_322(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_321(iParam0);
	if (func_320(*iParam0))
	{
		unk_0x071AF574B483D05F(*iParam0, 1);
		unk_0x0BE3742BB3253F0E(*iParam0, true);
	}
	return 1;
}

int func_320(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0xDC5D81351D6A4DDB(iParam0) && unk_0x1095F403F52B42E1(iParam0, 0)) && unk_0x857E88DF0C8EDB8B(iParam0) > 0)
	{
		unk_0xE8F84C99DF1C7D20(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x22D95AF01E737CA1(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xDA155B8CE0D17A82(iParam0, iVar1, unk_0x22D95AF01E737CA1(iParam0, iVar1)), 16);
				iVar2 = unk_0xFEB6EEC0545AF7AA(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0xFEB6EEC0545AF7AA("MNU_CAGE") || iVar2 == unk_0xFEB6EEC0545AF7AA("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_321(var uParam0)
{
	switch (unk_0x8F474E419F56E48D(*uParam0))
	{
		case -1700874274:
			if (unk_0x22D95AF01E737CA1(*uParam0, 4) == 0)
			{
				unk_0x1EE56D43DA30ADC6(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0xF1338FDC7D6CF388(*uParam0, 13);
			}
			break;
	}
}

int func_322(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0) && unk_0x1095F403F52B42E1(iParam0, 0))
	{
		switch (unk_0x8F474E419F56E48D(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
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
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0x512BC25CDBC94246(iParam0, 38);
		iVar1 = unk_0x512BC25CDBC94246(iParam0, 24);
		fVar2 = (to_float(iParam1 + 1) / to_float(iVar0));
		iVar3 = (floor((to_float(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_323(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14092)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14093)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14091)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14094)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14096)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14095)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18538)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18540)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18544)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18541)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18548)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18546)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18551)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1356124575:
			if (Global_262145.f_20493)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -1924433270:
			if (Global_262145.f_20494)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -2061049099:
		case 373261600:
		case 1742022738:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 628003514:
		case 1537277726:
		case 1239571361:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1009171724:
		case -1924800695:
		case -1744505657:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -27326686:
		case -1812949672:
		case -1374500452:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1721676810:
		case 840387324:
		case -715746948:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -688189648:
		case -1375060657:
		case -1293924613:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 668439077:
		case -1694081890:
		case -2042350822:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

void func_324(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x857E88DF0C8EDB8B(iParam0) > 0)
	{
		unk_0xE8F84C99DF1C7D20(iParam0, 0);
		iVar0 = unk_0x22D95AF01E737CA1(iParam0, 24);
		iVar1 = unk_0xB9A77CDBB0A3A5D8(iParam0, 24);
		unk_0x640840010FCF8AE8(iParam0, iParam1);
		if (unk_0x8F474E419F56E48D(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0xF1338FDC7D6CF388(iParam0, 24);
		}
		else
		{
			unk_0x1EE56D43DA30ADC6(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_325()
{
	return unk_0x05BEBC245254F6F2(-1691188696);
}

int func_326(int iParam0)
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (unk_0x1095F403F52B42E1(iParam0, 0))
		{
			if (unk_0xDE26AC7E7C308E75("MPBitset", 3))
			{
				if (unk_0xAEAF59799C2F26E4(iParam0, "MPBitset"))
				{
					iVar0 = unk_0xBB4F5216F3FCA8EA(iParam0, "MPBitset");
				}
				return unk_0x05EFB6A616B6FADE(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_327(int iParam0)
{
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		if (!func_333(unk_0xD4E735F4B6A956AC(), -1))
		{
			iParam0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
		}
	}
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 0;
	}
	if (unk_0x7112137033807390(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x1095F403F52B42E1(iParam0, 0))
	{
		return 0;
	}
	if (func_329(unk_0xD4E735F4B6A956AC()) == 3)
	{
		if (unk_0xDC5D81351D6A4DDB(iParam0) && unk_0x1095F403F52B42E1(iParam0, 0))
		{
			if (func_328(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_328(int iParam0)
{
	if (unk_0xDE26AC7E7C308E75("FMDeliverableID", 3))
	{
		if (unk_0xAEAF59799C2F26E4(iParam0, "FMDeliverableID"))
		{
			return unk_0xBB4F5216F3FCA8EA(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_329(int iParam0)
{
	if (func_332(iParam0) == 233)
	{
		return func_330(iParam0);
	}
	return -1;
}

int func_330(int iParam0)
{
	if (func_331(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_176;
	}
	return -1;
}

int func_331(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_33 != -1 || (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_332(int iParam0)
{
	if (func_331(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_33;
	}
	return -1;
}

int func_333(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_334(iParam0, 1, 1))
	{
		if (unk_0x5D7DFE2058701942(unk_0xEE978C39384D834F(iParam0), 0))
		{
			iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xEE978C39384D834F(iParam0), 0);
			if (unk_0x1095F403F52B42E1(iVar0, 0))
			{
				if (unk_0xA19140A5C42D8715() == unk_0xB0D49A1F9F054602(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_334(int iParam0, bool bParam1, bool bParam2)
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

void func_335(vector3 vParam0, float fParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_310(&(Global_70024.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x499324B3EF19C288(vParam0, Global_70024.f_555[0 /*21*/], bParam2) <= fParam1)
			{
				func_306(iVar0);
			}
		}
		iVar0++;
	}
}

int func_336(var uParam0)
{
	if (func_337(uParam0))
	{
		if (unk_0x7FC99CCC73354033(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_337(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_289(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_229(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_338()
{
	return func_336(&(Global_99633.f_2875));
}

void func_339()
{
	func_340(&(Global_99633.f_2875));
}

void func_340(var uParam0)
{
	if (func_337(uParam0))
	{
		unk_0xCACEBBBEAD8F262E(uParam0->f_12.f_66);
	}
}

bool func_341()
{
	return func_337(&(Global_99633.f_2875));
}

int func_342(vector3 vParam0, float fParam1)
{
	return func_280(&(Global_96664.f_2875), vParam0, fParam1, 0);
}

bool func_343()
{
	return func_336(&(Global_96664.f_2875));
}

void func_344()
{
	func_340(&(Global_96664.f_2875));
}

int func_345(int iParam0, vector3 vParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam2 == 1)
	{
		vParam1 = { func_346() };
	}
	unk_0xDFCF5BB9A4E3B293(iParam0, &vVar0, &vVar1);
	if ((vVar1.x - vVar0.x) > vParam1.x)
	{
		return 0;
	}
	else if ((vVar1.y - vVar0.y) > vParam1.y)
	{
		return 0;
	}
	else if ((vVar1.z - vVar0.z) > vParam1.z)
	{
		return 0;
	}
	return 1;
}

Vector3 func_346()
{
	return 2.55f, 5.665f, 2.55f;
}

int func_347()
{
	return Global_96664.f_2875.f_12.f_66;
}

bool func_348()
{
	return func_337(&(Global_96664.f_2875));
}

void func_349(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_359())
	{
		unk_0x2F3193E06C2EFF44(0);
		unk_0xFA57C719261AA55D(&(Global_93232.f_20), 2);
		unk_0x62BAB49318F4FE6E(1);
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 0);
		}
		Global_93228 = { vParam0 };
		Global_93231 = fParam1;
		Global_93227 = 1;
		if (iParam2 == 1)
		{
			unk_0x2BCFB39E86340DAA(&(Global_93232.f_20), 14);
		}
		else
		{
			unk_0xFA57C719261AA55D(&(Global_93232.f_20), 14);
		}
		if (iParam3 == 1)
		{
			unk_0x2BCFB39E86340DAA(&(Global_93232.f_20), 24);
		}
		else
		{
			unk_0xFA57C719261AA55D(&(Global_93232.f_20), 24);
		}
		func_276(1);
	}
}

int func_350(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_45(iParam1))
	{
		iVar0 = func_352(iParam1);
		unk_0xCACEBBBEAD8F262E(iVar0);
		if (unk_0x7FC99CCC73354033(iVar0))
		{
			if (unk_0xDC5D81351D6A4DDB(*iParam0))
			{
				unk_0x680F17660351F21B(iParam0);
			}
			*iParam0 = unk_0x35C6E06B120EB2E3(26, iVar0, vParam2, fParam3, 0, false);
			unk_0xA0DEC6E1399EE624(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x774CB20D17C3FF03(*iParam0, 3) == 0)
				{
					unk_0x72A0FF8C49CFFC0D(*iParam0, 5, 2, 0, 0);
				}
			}
			func_351(*iParam0, iParam1);
			if (bParam4)
			{
				unk_0xA5DE74AE39867B03(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_351(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_89161[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_352(int iParam0)
{
	if (!func_45(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_353(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_178();
	func_179();
	func_180();
	func_177();
	unk_0x77CECBF0C98D2A47();
	unk_0xF2DE32563C8C0849(3);
	unk_0x56C835FB478F652B(3);
	iLocal_392 = 0;
	iLocal_167 = 0;
	iLocal_163 = 0;
	iLocal_150 = 0;
	iLocal_114 = 0;
	iLocal_164 = 0;
	iLocal_374 = 0;
	iLocal_375 = 0;
	while (unk_0x99E48E2CD778F380())
	{
		if (unk_0x5CA3186381FC012C())
		{
			unk_0x7E0C95613122D046(1);
		}
		else
		{
			unk_0xFB35B0BAD6F5AD8F();
		}
		func_28(0, 0);
	}
	if (unk_0xF93654E07E20E3CF(uLocal_168))
	{
		unk_0xBCFB7F2BD32812C6(uLocal_168);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_169)
	{
		if (unk_0xF93654E07E20E3CF(iLocal_169[iVar0]))
		{
			unk_0xBCFB7F2BD32812C6(iLocal_169[iVar0]);
		}
		iVar0++;
	}
	iLocal_403 = 0;
	iLocal_404 = 0;
	iLocal_405 = 0;
	sLocal_406 = "";
	sLocal_407 = "";
	func_184();
	iLocal_63 = 0;
	iLocal_64 = 0;
	iLocal_65 = 0;
	unk_0x7F2B4F315CAE087F(1f);
	func_357();
	unk_0x8E88E73F74A9FF79(false, 0, 3000, 1, 0, 0);
	unk_0xA5CFBAB33EA6079E(0);
	func_186(0, 1, 1, 0, 0);
	func_28(32, 0);
	unk_0xDED73F11B8CB95B1(1f);
	unk_0x4F93066CECE72793();
	func_211(&Local_184, 1, 0);
	func_66();
	func_64();
	unk_0x4004C3CB2300135E();
	unk_0x90E641761C692B84(0);
	unk_0x387E83E60256EA18(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), 1);
	if (iParam0 == 0)
	{
		unk_0x5F041E7AE5419FEC(2457.15f, 4968.79f, 48.677f, 100f, 965837842, 1);
		unk_0x5F041E7AE5419FEC(2457.15f, 4968.79f, 48.677f, 100f, 247384786, 1);
		unk_0x5F041E7AE5419FEC(2457.15f, 4968.79f, 48.677f, 100f, -247908770, 0);
		Global_34279 = 1;
	}
	unk_0x4070C7CD522C11C5("AZL_CHN2_METH_LAB_FARM_FIRE", 0, 1);
	if (iParam0 != 3)
	{
		unk_0xF10C7DDEAC709758("Chinese2_Lunch", 1);
		unk_0xF10C7DDEAC709758("CHINESE2_HILLBILLIES", 0);
	}
	unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
	if (iLocal_379 != -1)
	{
		if (unk_0xA4D0862CD5E60478(iLocal_379))
		{
			unk_0x308B3DBB8CA58E54(iLocal_379);
		}
	}
	if (iParam0 == 1 || iParam0 == 2)
	{
		func_355(unk_0xA19140A5C42D8715(), 2);
	}
	iVar0 = 0;
	while (iVar0 < Local_113)
	{
		if (iVar0 == 14)
		{
		}
		if (unk_0xDC5D81351D6A4DDB(Local_113[iVar0 /*33*/]))
		{
			if (!unk_0x4915F4759304D5CF(Local_113[iVar0 /*33*/]))
			{
				if (iParam0 == 3)
				{
					unk_0x836A6A722DEA63F1(Local_113[iVar0 /*33*/]);
				}
			}
			if (iParam0 == 0 || iParam0 == 2)
			{
				if (iVar0 == 14)
				{
				}
				if (!unk_0x4915F4759304D5CF(Local_113[iVar0 /*33*/]))
				{
					unk_0xD738221C247C8B71(Local_113[iVar0 /*33*/], true);
					unk_0x7E4E83D33161D01A(&(Local_113[iVar0 /*33*/]));
				}
			}
			else
			{
				if (iVar0 == 14)
				{
				}
				unk_0x680F17660351F21B(&(Local_113[iVar0 /*33*/]));
			}
		}
		Local_113[iVar0 /*33*/].f_3 = 0;
		Local_113[iVar0 /*33*/].f_4 = 0;
		Local_113[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
		Local_113[iVar0 /*33*/].f_9 = { 0f, 0f, 0f };
		Local_113[iVar0 /*33*/].f_2 = 25;
		Local_113[iVar0 /*33*/].f_5 = 0;
		Local_113[iVar0 /*33*/].f_12 = 0f;
		Local_113[iVar0 /*33*/].f_13 = 0f;
		Local_113[iVar0 /*33*/].f_14 = 0;
		Local_113[iVar0 /*33*/].f_15 = 0;
		Local_113[iVar0 /*33*/].f_17 = 0;
		Local_113[iVar0 /*33*/].f_16 = 0;
		Local_113[iVar0 /*33*/].f_21 = 0;
		Local_113[iVar0 /*33*/].f_22 = 0;
		Local_119[iVar0 /*24*/].f_3 = 1;
		if (unk_0xDC5D81351D6A4DDB(Local_113[iVar0 /*33*/].f_20))
		{
			unk_0xC0AC848E56940C34(&(Local_113[iVar0 /*33*/].f_20));
		}
		unk_0x3E11F609741642B7(Local_113[iVar0 /*33*/].f_24);
		iVar0++;
	}
	if (iParam0 != 3)
	{
		func_354();
	}
	else
	{
		func_203(&Local_119, &uLocal_203, cLocal_131, 12f, 2482.197f, 4975.367f, 44.7288f, 121f, 1);
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_373))
	{
		unk_0xC0AC848E56940C34(&iLocal_373);
	}
	if (iParam0 != 0 && iParam0 != 2)
	{
		unk_0xFDD15D670AD33E10(2438.433f, 4970.416f, 53.1778f, 450f, 1, 0, 0, false);
		unk_0x341AA026B031328A(2442.69f, 4970.348f, 46.33f, 30f);
	}
	iVar0 = 0;
	while (iVar0 < Local_153)
	{
		if ((Local_153[iVar0 /*6*/].f_1 == 1 && Local_153[iVar0 /*6*/].f_3 == 0) || Local_153[iVar0 /*6*/].f_3 == 0)
		{
			Local_153[iVar0 /*6*/].f_2 = -1;
			Local_153[iVar0 /*6*/].f_4 = 0;
			Local_153[iVar0 /*6*/].f_5 = 0;
			Local_153[iVar0 /*6*/].f_1 = 0;
		}
		iVar0++;
	}
	func_3();
	if (unk_0xCE3CB618AFE55EFB(iLocal_178))
	{
		unk_0xE1623437A3194332(&iLocal_178);
	}
	iVar1 = 0;
	while (iVar1 < iLocal_170)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_170[iVar1]))
		{
			unk_0xC0AC848E56940C34(&(iLocal_170[iVar1]));
		}
		iVar1++;
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_144))
	{
		if (iParam0 != 0 && iParam0 != 2)
		{
			if (unk_0x1095F403F52B42E1(iLocal_144, 0))
			{
				if (unk_0x82384F63D814C864(iLocal_144, 1))
				{
					if (unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
					{
						unk_0x792676988A48387F(&iLocal_144);
					}
					else
					{
						unk_0x792676988A48387F(&iLocal_144);
					}
				}
			}
		}
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_145))
	{
		if (iParam0 != 0)
		{
			if (unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				unk_0x792676988A48387F(&iLocal_145);
			}
			else
			{
				unk_0x792676988A48387F(&iLocal_145);
			}
		}
		else
		{
			unk_0x792676988A48387F(&iLocal_145);
		}
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_146))
	{
		if (func_68(iLocal_146))
		{
			unk_0x792676988A48387F(&iLocal_146);
		}
	}
	if (unk_0xF93654E07E20E3CF(uLocal_176))
	{
		unk_0xBCFB7F2BD32812C6(uLocal_176);
	}
	if (iParam0 == 0)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_181))
		{
			unk_0xB29E08C7AB729BAD(iLocal_181, false);
			unk_0xAA1FF14A8DC5C352(&iLocal_181);
		}
		if (unk_0xDC5D81351D6A4DDB(iLocal_182))
		{
			unk_0xB29E08C7AB729BAD(iLocal_182, false);
			unk_0xAA1FF14A8DC5C352(&iLocal_182);
		}
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_160))
	{
		unk_0x680F17660351F21B(&iLocal_160);
	}
	unk_0x8566A4AC1CA77939(2439.687f, 4971.541f, 45.9442f, 150f);
	if (iParam0 != 2)
	{
		if (unk_0xDC5D81351D6A4DDB(Local_113[12 /*33*/]))
		{
			unk_0x680F17660351F21B(&(Local_113[12 /*33*/]));
		}
		if (unk_0xDC5D81351D6A4DDB(Local_113[13 /*33*/]))
		{
			unk_0x680F17660351F21B(&(Local_113[13 /*33*/]));
		}
		if (unk_0xDC5D81351D6A4DDB(Local_113[14 /*33*/]))
		{
			unk_0x680F17660351F21B(&(Local_113[14 /*33*/]));
		}
		if (unk_0xDC5D81351D6A4DDB(Local_113[11 /*33*/]))
		{
			unk_0x680F17660351F21B(&(Local_113[11 /*33*/]));
		}
		if (unk_0xDC5D81351D6A4DDB(Local_113[10 /*33*/]))
		{
			unk_0x680F17660351F21B(&(Local_113[10 /*33*/]));
		}
	}
	unk_0xA5DE74AE39867B03(joaat("a_m_m_hillbilly_01"));
	unk_0xA5DE74AE39867B03(joaat("a_m_m_hillbilly_02"));
	unk_0xA5DE74AE39867B03(joaat("prop_cs_fertilizer"));
	unk_0xA5DE74AE39867B03(joaat("burrito"));
	unk_0xA5DE74AE39867B03(joaat("ig_janet"));
	unk_0xA5DE74AE39867B03(joaat("ig_old_man1a"));
	unk_0xA5DE74AE39867B03(joaat("ig_old_man2"));
	unk_0xA5DE74AE39867B03(joaat("ig_taocheng"));
	unk_0xA5DE74AE39867B03(joaat("ig_taostranslator"));
	unk_0xA5DE74AE39867B03(joaat("ig_janet"));
	unk_0xD37292AE1958B4F3("move_m@gangster@var_e");
	unk_0xD37292AE1958B4F3("move_m@gangster@var_f");
	unk_0xD37292AE1958B4F3("move_m@gangster@generic");
	unk_0x4DC885EA8D6AF7FC("misschinese2_barrelRoll");
	unk_0x4DC885EA8D6AF7FC("reaction@male_stand@big_variations@b");
	unk_0x4DC885EA8D6AF7FC("reaction@male_stand@big_intro@left");
	unk_0x4DC885EA8D6AF7FC("reaction@male_stand@big_intro@right");
	unk_0x4DC885EA8D6AF7FC("reaction@male_stand@big_intro@backward");
	unk_0x4DC885EA8D6AF7FC("misschinese2_bank1");
	unk_0x4DC885EA8D6AF7FC("misschinese2_bank5");
	unk_0x4DC885EA8D6AF7FC("misschinese2_crystalmazemcs1_ig");
	if (iParam0 != 3)
	{
		if (unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), joaat("weapon_petrolcan"), 0))
		{
			unk_0x581CF279D6A7E3D6(unk_0xA19140A5C42D8715(), joaat("weapon_petrolcan"));
		}
	}
	iLocal_159 = 0;
	iLocal_111 = 0;
	if (unk_0x2F8EAF18929E1E59("CHI_2_DRIVE_TO_FARMHOUSE"))
	{
		unk_0x5AD7D03C214BDA88("CHI_2_DRIVE_TO_FARMHOUSE");
	}
	if (unk_0x2F8EAF18929E1E59("CHI_2_DRIVE_ROCK_RADIO"))
	{
		unk_0x5AD7D03C214BDA88("CHI_2_DRIVE_ROCK_RADIO");
	}
	if (unk_0x2F8EAF18929E1E59("CHI_2_FARMHOUSE_OVERVIEW"))
	{
		unk_0x5AD7D03C214BDA88("CHI_2_FARMHOUSE_OVERVIEW");
	}
	if (unk_0x2F8EAF18929E1E59("CHI_2_SHOOTOUT_STEALTH"))
	{
		unk_0x5AD7D03C214BDA88("CHI_2_SHOOTOUT_STEALTH");
	}
	if (unk_0x2F8EAF18929E1E59("CHI_2_SHOOTOUT_ENEMIES_ALERTED"))
	{
		unk_0x5AD7D03C214BDA88("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
	}
	if (unk_0x2F8EAF18929E1E59("CHI_2_POUR_GAS"))
	{
		unk_0x5AD7D03C214BDA88("CHI_2_POUR_GAS");
	}
	if (unk_0x2F8EAF18929E1E59("CHI_2_SHOOT_GAS"))
	{
		unk_0x5AD7D03C214BDA88("CHI_2_SHOOT_GAS");
	}
	if (unk_0x2F8EAF18929E1E59("CHI_2_GAS_TRAIL_FIRE"))
	{
		unk_0x5AD7D03C214BDA88("CHI_2_GAS_TRAIL_FIRE");
	}
	if (unk_0x2F8EAF18929E1E59("CHI_2_RAYFIRE"))
	{
		unk_0x5AD7D03C214BDA88("CHI_2_RAYFIRE");
	}
	unk_0x19A6703D21831D53();
	if (iParam0 != 0)
	{
		func_15("CHN2_STOP_TRACK", 0, func_167());
		while (!func_2())
		{
			func_28(0, 0);
		}
	}
	if (iParam0 != 3)
	{
		func_166(0);
	}
	if (iParam0 != 0)
	{
		uLocal_173 = unk_0x389F96269D4F1FD8(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
		if (iLocal_174)
		{
			if (unk_0xCD7C9B7A8F43BA15(uLocal_173))
			{
				unk_0x317CA41ED2351630(uLocal_173, 2);
			}
			iLocal_174 = 0;
		}
	}
}

void func_354()
{
	unk_0x7C4F1BE8AB4D3DE1(-455129387, 31);
}

void func_355(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (unk_0xF990CFC0F1D94A39(iParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_356(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_93269 > 0)
	{
		Global_99633.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_96664.f_21[iParam1] = iVar0;
	}
}

int func_356(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_93269 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_99633.f_812[iParam0 /*472*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_99633.f_812[iParam0 /*472*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_99633.f_812[iParam0 /*472*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_99633.f_812[iParam0 /*472*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_96664.f_812[iParam0 /*472*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_96664.f_812[iParam0 /*472*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_96664.f_812[iParam0 /*472*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_96664.f_812[iParam0 /*472*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_357()
{
	int iVar0;
	
	Global_56210 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_56211[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

int func_358()
{
	if (!Global_93232 == 10 && !Global_93232 == 9)
	{
		return 0;
	}
	return Global_93232.f_2;
}

int func_359()
{
	if (Global_93232 == 10 || Global_93232 == 9)
	{
		return 1;
	}
	return 0;
}

void func_360(var uParam0, char* sParam1, int iParam2, char* sParam3)
{
	*uParam0 = sParam3;
	uParam0->f_1 = sParam1;
	uParam0->f_2 = iParam2;
}

void func_361()
{
	unk_0x94E87D83163B4BEB("MYFRIEND", &iLocal_115);
	unk_0x94E87D83163B4BEB("FOE", &iLocal_116);
	unk_0x94E87D83163B4BEB("IGNORE", &iLocal_117);
	unk_0x94E87D83163B4BEB("BARpeds", &iLocal_154);
	unk_0x80E7C4A78224C8F9(3, iLocal_154, 1862763509);
	unk_0x80E7C4A78224C8F9(5, unk_0x35546CE87C5336BC(unk_0xA19140A5C42D8715()), iLocal_116);
	unk_0x80E7C4A78224C8F9(5, iLocal_116, unk_0x35546CE87C5336BC(unk_0xA19140A5C42D8715()));
	unk_0x80E7C4A78224C8F9(2, iLocal_115, iLocal_117);
	unk_0x80E7C4A78224C8F9(2, iLocal_116, iLocal_117);
	unk_0x80E7C4A78224C8F9(2, iLocal_117, unk_0x35546CE87C5336BC(unk_0xA19140A5C42D8715()));
	unk_0x80E7C4A78224C8F9(2, iLocal_117, iLocal_116);
}

void func_362()
{
	switch (iLocal_575)
	{
		case 0:
			if (iLocal_149 >= 4)
			{
				func_363(1, "Snipe from hill", 0, 0, 0, 1);
				iLocal_575++;
			}
			break;
		
		case 1:
			if (iLocal_149 >= 4 && iLocal_149 < 7)
			{
				if (func_87(12) || iLocal_149 == 6)
				{
					func_363(2, "Inside House", 0, 0, 0, 1);
					iLocal_575++;
				}
			}
			else if (iLocal_149 == 7)
			{
				if (unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), joaat("weapon_petrolcan"), 0))
				{
					func_363(2, "Inside House", 0, 0, 0, 1);
					iLocal_575++;
				}
			}
			else if (iLocal_149 > 7)
			{
				func_363(2, "Inside House", 0, 0, 0, 1);
				iLocal_575++;
			}
			break;
		
		case 2:
			if (iLocal_149 >= 7)
			{
				func_363(3, "Pour petrol trail", 0, 0, 0, 1);
				iLocal_575++;
			}
			break;
		
		case 3:
			if (iLocal_149 == 9)
			{
				func_363(4, "Leave the farm house", 1, 0, 0, 1);
				iLocal_575++;
			}
			break;
	}
}

void func_363(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (iParam3 == 1)
	{
		if (!unk_0x3CAC2741CC1A631F("FinaleC2", unk_0x61D2332983ACC05C()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_93269)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_93269)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_436(1);
		if (iParam0 <= Global_93269)
		{
		}
		iVar1 = func_434(unk_0x61D2332983ACC05C(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_106070.f_9057.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_432(iVar1);
			cVar3 = { Global_84115[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_106070.f_9057.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x5D84F5C14E1207BE(&cVar3, iVar2, Global_93269, iParam0);
		}
		else
		{
			iVar4 = func_427(unk_0x61D2332983ACC05C(), 1);
			if (iVar4 != -1)
			{
				Global_106070.f_18546[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {func_426(iVar4)}, 4);
				unk_0x5D84F5C14E1207BE(&uVar5, 0, Global_93269, iParam0);
			}
			else
			{
				iVar6 = func_425(&(Global_93232.f_3));
				if (iVar6 > -1)
				{
					Global_106070.f_24958.f_4[iVar6] = 0;
				}
			}
		}
		Global_87505 = iParam2;
		Global_93269 = iParam0;
		func_364(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x3CAC2741CC1A631F(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_93269)
	{
	}
}

void func_364(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_365(&Global_99633, unk_0x61D2332983ACC05C(), iParam0, uParam1, iParam3, iParam2);
}

void func_365(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_43();
	uParam0->f_1 = func_414();
	unk_0xEB349569DF18782A(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		func_389(&(uParam0->f_2869), 0);
		func_388(unk_0xA19140A5C42D8715());
		func_381(unk_0xA19140A5C42D8715(), 0);
		unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_106070.f_2355.f_539.f_294[iVar1];
		if (iVar1 == func_380())
		{
			func_374(unk_0xA19140A5C42D8715(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_93022[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_93022[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_93022[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_93022[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_93022[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_93022[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_93022[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_93022[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_93022[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_93022[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*472*/][iVar0 /*5*/] = { Global_106070.f_2355.f_539.f_298[iVar1 /*472*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*472*/].f_221[iVar0 /*5*/] = { Global_106070.f_2355.f_539.f_298[iVar1 /*472*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x2AD48F3CEBA882E9(joaat("sp0_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp0_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x2AD48F3CEBA882E9(joaat("sp1_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp1_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x2AD48F3CEBA882E9(joaat("sp2_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp2_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0x2AD48F3CEBA882E9(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_106070.f_20536.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_53355[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_106070.f_2355.f_539.f_2387[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_106070.f_2355.f_539.f_2387[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2823[iVar1 /*15*/][iVar0] = Global_106070.f_2355.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2823[iVar1 /*15*/].f_5[iVar0] = Global_106070.f_2355.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2823[iVar1 /*15*/].f_10[iVar0] = Global_106070.f_2355.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2330[iVar1 /*164*/][iVar0] = Global_106070.f_2355[iVar1 /*164*/][iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_4[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_8[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_12[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_16[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_20[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_24[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_28[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_32[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_36[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_40[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_44[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_48[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_52[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_56[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_60[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_64[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_68[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_72[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_76[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_80[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_84[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_88[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_92[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_96[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_100[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_104[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_108[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_112[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_116[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_120[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_124[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_128[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_132[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_136[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_140[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_144[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_148[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_152[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_156[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_160[iVar0] = Global_106070.f_2355[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x2AD48F3CEBA882E9(joaat("sp0_special_ability"), &(uParam0->f_2326[0]), -1);
	unk_0x2AD48F3CEBA882E9(joaat("sp1_special_ability"), &(uParam0->f_2326[1]), -1);
	unk_0x2AD48F3CEBA882E9(joaat("sp2_special_ability"), &(uParam0->f_2326[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_367(&(uParam0->f_2875), uParam0, iParam5, 1, 1, 0);
	}
	func_366(&(uParam0->f_2965));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_366(var uParam0)
{
	*uParam0 = Global_89176;
	uParam0->f_1 = Global_89177;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_367(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xA19140A5C42D8715();
	}
	if (unk_0xDC5D81351D6A4DDB(iParam2))
	{
		uParam1->f_5 = func_46(iParam2);
	}
	if (func_373(iParam2, &iVar0, iParam3, iParam5))
	{
		func_368(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xDC5D81351D6A4DDB(iVar0))
	{
		if (!unk_0x7112137033807390(iVar0, 0))
		{
			if (unk_0xD3C4AB5E628133C1(iVar0, joaat("skylift")) && unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iVar0, 0))
			{
				func_368(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_368(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0x1095F403F52B42E1(iParam2, 0))
	{
		func_370(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_369(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_369(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_93232.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_370(var uParam0, int iParam1, int iParam2)
{
	func_282(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_372(iParam1, 145, 0);
	uParam0->f_11 = func_302(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_371(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xE2BBD32891C18569(iParam1, true) };
		uParam0->f_6 = unk_0x552C823E1D2A019C(iParam1);
		uParam0->f_3 = { unk_0x57323E573695B13F(iParam1) };
		if (unk_0x54F6F5A823224519(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_70929 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_371(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xDC5D81351D6A4DDB(Global_70024.f_484[iVar0]))
		{
			if (iParam0 == Global_70024.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_372(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 0;
	}
	if (!unk_0x1095F403F52B42E1(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xDC5D81351D6A4DDB(Global_90658[iVar0]))
		{
			if (Global_90658[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_90668[iVar0])
				{
					if (iParam2 == 0 || unk_0x8F474E419F56E48D(iParam0) == func_311(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_373(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (!unk_0x4915F4759304D5CF(iParam0))
		{
			if (iParam0 == unk_0xA19140A5C42D8715())
			{
				*uParam1 = unk_0xC409B91AC4749F88();
			}
			else
			{
				*uParam1 = unk_0xCAEB6CE71A2C7212(iParam0, 1);
			}
			if (unk_0xDC5D81351D6A4DDB(*uParam1))
			{
				if (unk_0x1095F403F52B42E1(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(*uParam1, true), unk_0xE2BBD32891C18569(iParam0, true), true) < 100f)
					{
						if (unk_0xD3C4AB5E628133C1(*uParam1, joaat("taxi")))
						{
							if (unk_0xB0D49A1F9F054602(*uParam1, -1, 0) != iParam0 && unk_0xB0D49A1F9F054602(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_72(*uParam1, func_43(), 1))
						{
							sVar0 = unk_0x61D2332983ACC05C();
							if (!unk_0x3CAC2741CC1A631F(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x5D7DFE2058701942(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xAEAF59799C2F26E4(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x13AF6A38CAD2D5DD(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0xD3C4AB5E628133C1(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_374(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		iVar0 = func_46(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_379(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_378(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_45(iVar0))
		{
			uParam1->f_59 = Global_106070.f_2355.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_106070.f_2355.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_106070.f_2355.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_106070.f_2355.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_106070.f_2355.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_106070.f_2355.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x4C9BACA8D249CB13() && unk_0x8F474E419F56E48D(iParam0) == unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			if (func_377(161, iParam3))
			{
				uParam1->f_59 = func_375(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_375(752, iParam3, 0);
			}
			uParam1->f_60 = func_375(753, iParam3, 0);
			uParam1->f_61 = func_375(754, iParam3, 0);
		}
		if (unk_0x4C9BACA8D249CB13() && iParam0 == unk_0xA19140A5C42D8715())
		{
			if (func_377(161, iParam3))
			{
				uParam1->f_59 = func_375(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_375(752, iParam3, 0);
			}
		}
	}
}

int func_375(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_376(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_376(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_190();
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

int func_377(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2566070[iParam0 /*3*/][func_376(iParam1)];
	if (unk_0x57AA4E7564A22FCD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_378(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xD1241BB51B6FE6DA(iParam0, iParam1);
		*uParam3 = unk_0x2FB5EBD67ABDBF18(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0xE5862BC166DAD032(iParam0) && unk_0x73B56EA1E8AE51F5(iParam0) != -1)
				{
					*uParam2 = unk_0x73B56EA1E8AE51F5(iParam0);
					*uParam3 = unk_0x64922234B17106E1(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_379(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x774CB20D17C3FF03(iParam0, iParam1);
		*uParam3 = unk_0x7710E77D1959B321(iParam0, iParam1);
		*uParam4 = unk_0xA4B664E8E0A26C23(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_380()
{
	func_44();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_381(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_46(iParam0);
	if (func_45(iVar0) && !unk_0x4915F4759304D5CF(iParam0))
	{
		if (iParam0 == unk_0xA19140A5C42D8715())
		{
			func_382(iParam0, &(Global_106070.f_2355.f_539.f_298[iVar0 /*472*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_106070.f_2355.f_539.f_1715[iVar2 /*4*/][iVar0] = unk_0x3A15689FB6B31DEF(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xB1D3CAE10C3C8705();
					if (Global_106070.f_2355.f_539.f_1715[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_106070.f_2355.f_539.f_1748 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0xFE4C24D1490D3EC8(unk_0xD4E735F4B6A956AC(), &iVar3);
			if (iVar0 == 0)
			{
				unk_0x93180BE33E7149EF(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x93180BE33E7149EF(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x93180BE33E7149EF(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_382(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_387(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0x3D2A81E3C295D501(iParam0, func_387(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x8F62F4EC66847EC2(iParam0, Var4);
					if (Var4 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x52AB19133B083547(iParam0, Var4);
					Var4.f_4 = unk_0x390CF5235B1916CE(iParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!unk_0x777DF4661165BA4B(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_385(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x15763A17141CD6EE(iParam0, Var4, iVar2))
						{
							unk_0x2BCFB39E86340DAA(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_385(Var4, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = unk_0x0AD363FF0CEF93B1();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((unk_0x8798F3E6AE76AF63(iVar5, &Var7) && !func_384(Var7.f_1)) && iVar9 < 50)
			{
				if (!unk_0x3B61940560400F58(Var7))
				{
					Var4 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x8F62F4EC66847EC2(iParam0, Var4);
					if (unk_0x22B3625D717A4563(iParam0, Var4, 0))
					{
						Var4.f_3 = unk_0x52AB19133B083547(iParam0, Var4);
						Var4.f_4 = unk_0x390CF5235B1916CE(iParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x777DF4661165BA4B(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0x6E55AE7B1FEC08C5(iVar5))
					{
						if (unk_0xA9A013B7FD7A9A7F(iVar5, iVar1, &Var8))
						{
							if (!func_383(Var8.f_3))
							{
								if (unk_0x15763A17141CD6EE(iParam0, Var4, Var8.f_3))
								{
									unk_0x2BCFB39E86340DAA(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!unk_0x22B3625D717A4563(iParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_383(int iParam0)
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

int func_384(int iParam0)
{
	if (unk_0x4C9BACA8D249CB13())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case 317205821:
			case -1121678507:
			case 125959754:
			case -853065399:
			case -1169823560:
			case -1810795771:
			case 419712736:
			case -1746263880:
			case 1198256469:
			case -1238556825:
			case -1355376991:
				return 1;
				break;
			}
	}
	return 0;
}

int func_385(int iParam0, int iParam1)
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
				iVar1 = func_386(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x6E55AE7B1FEC08C5(iVar1))
					{
						if (unk_0xA9A013B7FD7A9A7F(iVar1, iVar2, &Var5))
						{
							if (!func_383(Var5.f_3))
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

int func_386(int iParam0, var uParam1)
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

int func_387(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_388(int iParam0)
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
	if (func_45(iVar0) && !unk_0x4915F4759304D5CF(iParam0))
	{
		Global_106070.f_2355.f_539.f_294[iVar0] = unk_0xBEE435F0F4CCC194(iParam0);
	}
}

void func_389(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) };
	uParam0->f_3 = unk_0x552C823E1D2A019C(unk_0xA19140A5C42D8715());
	uParam0->f_5 = unk_0xFCD57A307851D560(unk_0xA19140A5C42D8715());
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		uParam0->f_4 = unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC());
	}
	if (vdist(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (vdist(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (vdist(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x8B1574454E8C2421(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0x05EFB6A616B6FADE(Global_71453, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0x05EFB6A616B6FADE(Global_71453, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0x05EFB6A616B6FADE(Global_71453, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0x05EFB6A616B6FADE(Global_71453, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) == unk_0xB68EB57358F46F86(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, true, 0) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, true, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (vdist(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (vdist(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (vdist(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_392(&iVar0))
		{
			if (func_391(iVar0, &vVar1, &uVar2))
			{
				vVar1.z = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0))
		{
			iVar3 = func_43();
			if (iVar3 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_390(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_390(vector3 vParam0, char* sParam1, vector3 vParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x92270AFB0B51829C(vParam0))
	{
		iVar0 = unk_0xB68EB57358F46F86(vParam2, sParam1);
		if (!unk_0x893915B076B1DDF7(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x65D249E18D7A5AFD(vParam0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_391(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_162(*uParam1, 0f, 0f, 0f, 0);
}

int func_392(var uParam0)
{
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0) && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (func_34())
		{
			*uParam0 = func_397(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), false), 6, -1, 0, 1, -1);
			if (func_396(*uParam0) && !func_393(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_393(int iParam0)
{
	return func_394(iParam0, 0, 1);
}

int func_394(int iParam0, int iParam1, bool bParam2)
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
		if (func_25() == 0)
		{
			return unk_0x05EFB6A616B6FADE(func_375(func_395(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x05EFB6A616B6FADE(Global_106070.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_395(int iParam0)
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

int func_396(int iParam0)
{
	return func_394(iParam0, 5, 1);
}

int func_397(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (iParam1 == 6 || iParam1 == func_413(iVar0))
		{
			if (!bParam3 || func_412(iVar0))
			{
				fVar1 = unk_0x499324B3EF19C288(vParam0, func_398(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_398(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_409(Global_95303);
			break;
		
		case 46:
			if (Global_1589591 != func_408())
			{
				if (func_407(Global_1589591))
				{
					return func_400(2, 2);
				}
				else if (func_399(Global_1589591))
				{
					return func_400(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_399(int iParam0)
{
	if (iParam0 != func_408())
	{
		if ((unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_250, 0) || unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_250, 1)) || unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_250, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_400(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1589591 != func_408())
	{
		if (iParam1 == 3)
		{
			if (func_401(iParam0, 1, &vVar0, 0, 0))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0x05EFB6A616B6FADE(Global_1589747[Global_1589591 /*790*/].f_273.f_250, 4))
			{
				if (func_401(iParam0, 1, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0x05EFB6A616B6FADE(Global_1589747[Global_1589591 /*790*/].f_273.f_250, 5))
			{
				if (func_401(iParam0, 2, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_401(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_406(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_406(iParam1, &vVar1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_404(iParam0) };
	}
	else
	{
		Var2 = { func_403(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_402(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_402(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0x2F230B37E9FFF23F(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_402(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = sin(fParam1);
	fVar2 = cos(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_403(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_404(int iParam0)
{
	return func_405(iParam0);
}

struct<6> func_405(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_406(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_407(int iParam0)
{
	if (iParam0 != func_408())
	{
		if ((unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_250, 3) || unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_250, 4)) || unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_250, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_408()
{
	return -1;
}

Vector3 func_409(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_410() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_410()
{
	return func_411(unk_0xD4E735F4B6A956AC());
}

var func_411(int iParam0)
{
	return unk_0x493DDADBC14A1274(Global_2423801[iParam0 /*413*/].f_309.f_3, 28, 31);
}

int func_412(int iParam0)
{
	return func_394(iParam0, 0, 0);
}

int func_413(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
	}
	return 6;
}

var func_414()
{
	var uVar0;
	
	func_424(&uVar0, unk_0xC5B07C33AC7BB174());
	func_423(&uVar0, unk_0x65DA628D62901275());
	func_422(&uVar0, unk_0x34CEB9721AC6A0A9());
	func_417(&uVar0, unk_0xC9A0B68BA813CF99());
	func_416(&uVar0, unk_0x897D202BD69186D5());
	func_415(&uVar0, unk_0x56EBDF0E39D83471());
	return uVar0;
}

void func_415(var uParam0, int iParam1)
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

void func_416(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_417(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_421(*uParam0);
	iVar1 = func_419(*uParam0);
	if (iParam1 < 1 || iParam1 > func_418(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_418(int iParam0, int iParam1)
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

var func_419(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_420(unk_0x05EFB6A616B6FADE(iParam0, 31), -1, 1)) + 2011;
}

int func_420(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_421(var uParam0)
{
	return uParam0 & 15;
}

void func_422(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_423(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_424(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_425(char* sParam0)
{
	if (unk_0x3CAC2741CC1A631F("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0x3CAC2741CC1A631F("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x3CAC2741CC1A631F("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x3CAC2741CC1A631F("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_426(int iParam0)
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

int func_427(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = unk_0xFEB6EEC0545AF7AA(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_428(iVar0, &sVar1);
		if (unk_0xFEB6EEC0545AF7AA(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_428(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_429(uParam1, "Abigail1", func_431(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_430(iParam0), 1, 0);
			break;
		
		case 1:
			func_429(uParam1, "Abigail2", func_431(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_430(iParam0), 1, 0);
			break;
		
		case 2:
			func_429(uParam1, "Barry1", func_431(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_430(iParam0), 1, 0);
			break;
		
		case 3:
			func_429(uParam1, "Barry2", func_431(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_430(iParam0), 1, 1);
			break;
		
		case 4:
			func_429(uParam1, "Barry3", func_431(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_430(iParam0), 0, 0);
			break;
		
		case 5:
			func_429(uParam1, "Barry3A", func_431(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_430(iParam0), 0, 1);
			break;
		
		case 6:
			func_429(uParam1, "Barry3C", func_431(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_430(iParam0), 0, 1);
			break;
		
		case 7:
			func_429(uParam1, "Barry4", func_431(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_430(iParam0), 0, 0);
			break;
		
		case 8:
			func_429(uParam1, "Dreyfuss1", func_431(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_430(iParam0), 0, 0);
			break;
		
		case 9:
			func_429(uParam1, "Epsilon1", func_431(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_430(iParam0), 0, 0);
			break;
		
		case 10:
			func_429(uParam1, "Epsilon2", func_431(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_430(iParam0), 1, 0);
			break;
		
		case 11:
			func_429(uParam1, "Epsilon3", func_431(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_430(iParam0), 0, 0);
			break;
		
		case 12:
			func_429(uParam1, "Epsilon4", func_431(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_430(iParam0), 0, 0);
			break;
		
		case 13:
			func_429(uParam1, "Epsilon5", func_431(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_430(iParam0), 1, 0);
			break;
		
		case 14:
			func_429(uParam1, "Epsilon6", func_431(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_430(iParam0), 0, 1);
			break;
		
		case 15:
			func_429(uParam1, "Epsilon7", func_431(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_430(iParam0), 0, 0);
			break;
		
		case 16:
			func_429(uParam1, "Epsilon8", func_431(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_430(iParam0), 1, 0);
			break;
		
		case 17:
			func_429(uParam1, "Extreme1", func_431(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_430(iParam0), 0, 1);
			break;
		
		case 18:
			func_429(uParam1, "Extreme2", func_431(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_430(iParam0), 0, 1);
			break;
		
		case 19:
			func_429(uParam1, "Extreme3", func_431(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_430(iParam0), 0, 1);
			break;
		
		case 20:
			func_429(uParam1, "Extreme4", func_431(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_430(iParam0), 0, 0);
			break;
		
		case 21:
			func_429(uParam1, "Fanatic1", func_431(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_430(iParam0), 1, 0);
			break;
		
		case 22:
			func_429(uParam1, "Fanatic2", func_431(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_430(iParam0), 1, 0);
			break;
		
		case 23:
			func_429(uParam1, "Fanatic3", func_431(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_430(iParam0), 0, 1);
			break;
		
		case 24:
			func_429(uParam1, "Hao1", func_431(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_430(iParam0), 0, 1);
			break;
		
		case 25:
			func_429(uParam1, "Hunting1", func_431(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_430(iParam0), 0, 1);
			break;
		
		case 26:
			func_429(uParam1, "Hunting2", func_431(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_430(iParam0), 0, 1);
			break;
		
		case 27:
			func_429(uParam1, "Josh1", func_431(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_430(iParam0), 1, 0);
			break;
		
		case 28:
			func_429(uParam1, "Josh2", func_431(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_430(iParam0), 1, 1);
			break;
		
		case 29:
			func_429(uParam1, "Josh3", func_431(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_430(iParam0), 1, 1);
			break;
		
		case 30:
			func_429(uParam1, "Josh4", func_431(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_430(iParam0), 1, 0);
			break;
		
		case 31:
			func_429(uParam1, "Maude1", func_431(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_430(iParam0), 0, 1);
			break;
		
		case 32:
			func_429(uParam1, "Minute1", func_431(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_430(iParam0), 0, 1);
			break;
		
		case 33:
			func_429(uParam1, "Minute2", func_431(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_430(iParam0), 0, 1);
			break;
		
		case 34:
			func_429(uParam1, "Minute3", func_431(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_430(iParam0), 0, 1);
			break;
		
		case 35:
			func_429(uParam1, "MrsPhilips1", func_431(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_430(iParam0), 0, 0);
			break;
		
		case 36:
			func_429(uParam1, "MrsPhilips2", func_431(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_430(iParam0), 0, 0);
			break;
		
		case 37:
			func_429(uParam1, "Nigel1", func_431(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_430(iParam0), 1, 0);
			break;
		
		case 38:
			func_429(uParam1, "Nigel1A", func_431(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_430(iParam0), 1, 1);
			break;
		
		case 39:
			func_429(uParam1, "Nigel1B", func_431(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_430(iParam0), 1, 1);
			break;
		
		case 40:
			func_429(uParam1, "Nigel1C", func_431(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_430(iParam0), 1, 1);
			break;
		
		case 41:
			func_429(uParam1, "Nigel1D", func_431(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_430(iParam0), 1, 1);
			break;
		
		case 42:
			func_429(uParam1, "Nigel2", func_431(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_430(iParam0), 1, 1);
			break;
		
		case 43:
			func_429(uParam1, "Nigel3", func_431(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_430(iParam0), 1, 1);
			break;
		
		case 44:
			func_429(uParam1, "Omega1", func_431(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_430(iParam0), 0, 0);
			break;
		
		case 45:
			func_429(uParam1, "Omega2", func_431(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_430(iParam0), 0, 0);
			break;
		
		case 46:
			func_429(uParam1, "Paparazzo1", func_431(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_430(iParam0), 0, 1);
			break;
		
		case 47:
			func_429(uParam1, "Paparazzo2", func_431(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_430(iParam0), 0, 1);
			break;
		
		case 48:
			func_429(uParam1, "Paparazzo3", func_431(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_430(iParam0), 0, 0);
			break;
		
		case 49:
			func_429(uParam1, "Paparazzo3A", func_431(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_430(iParam0), 0, 1);
			break;
		
		case 50:
			func_429(uParam1, "Paparazzo3B", func_431(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_430(iParam0), 0, 1);
			break;
		
		case 51:
			func_429(uParam1, "Paparazzo4", func_431(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_430(iParam0), 0, 0);
			break;
		
		case 52:
			func_429(uParam1, "Rampage1", func_431(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_430(iParam0), 0, 0);
			break;
		
		case 54:
			func_429(uParam1, "Rampage3", func_431(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_430(iParam0), 1, 0);
			break;
		
		case 55:
			func_429(uParam1, "Rampage4", func_431(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_430(iParam0), 1, 0);
			break;
		
		case 56:
			func_429(uParam1, "Rampage5", func_431(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_430(iParam0), 0, 0);
			break;
		
		case 53:
			func_429(uParam1, "Rampage2", func_431(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_430(iParam0), 1, 0);
			break;
		
		case 57:
			func_429(uParam1, "TheLastOne", func_431(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_430(iParam0), 0, 1);
			break;
		
		case 58:
			func_429(uParam1, "Tonya1", func_431(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_430(iParam0), 0, 1);
			break;
		
		case 59:
			func_429(uParam1, "Tonya2", func_431(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_430(iParam0), 0, 1);
			break;
		
		case 60:
			func_429(uParam1, "Tonya3", func_431(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_430(iParam0), 0, 1);
			break;
		
		case 61:
			func_429(uParam1, "Tonya4", func_431(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_430(iParam0), 0, 1);
			break;
		
		case 62:
			func_429(uParam1, "Tonya5", func_431(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_430(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_429(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_430(int iParam0)
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

struct<2> func_431(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_426(iParam0) };
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

int func_432(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_433(Global_106070.f_9057.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_433(Global_106070.f_9057.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_433(Global_106070.f_9057.f_99.f_205[11]);
			break;
		
		case 90:
			return func_433(Global_106070.f_9057.f_99.f_205[7]);
			break;
		
		case 93:
			return func_433(Global_106070.f_9057.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_433(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_434(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xFEB6EEC0545AF7AA(sParam0);
	iVar1 = func_435(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_435(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_84115[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_436(bool bParam0)
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

void func_437(int iParam0)
{
	func_353(iParam0);
	unk_0xF24BBF976F1AC2B6(1);
	unk_0x41D876A92FF28E00();
	unk_0xBF6EED5D6E0CD9BF(1f);
	unk_0x9BB7BCDF2AC2D6F9(5);
	unk_0x60DEFBFF740D4C09(3, 1);
	func_205(0);
	func_88();
	unk_0x4F93066CECE72793();
	if (unk_0xA4D0862CD5E60478(iLocal_148))
	{
		unk_0x308B3DBB8CA58E54(iLocal_148);
	}
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		unk_0x581CF279D6A7E3D6(unk_0xA19140A5C42D8715(), joaat("weapon_petrolcan"));
		unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
	}
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()) != 0)
		{
			if (func_67(unk_0xA19140A5C42D8715(), 2444.098f, 4977.795f, 48.9959f, 1) < 100f)
			{
				unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 2463.811f, 4961.747f, 44.176f, 1, 0, 0, 1);
				unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 20f);
			}
		}
	}
	if (iParam0 == 1 || iParam0 == 2)
	{
		func_19(50, 0, 0, 1, 0);
		func_19(51, 0, 0, 1, 0);
		func_19(52, 0, 0, 1, 0);
		func_19(53, 0, 0, 1, 0);
		func_19(54, 0, 0, 1, 0);
		func_19(55, 0, 0, 1, 0);
	}
	unk_0x8F1A9FE6D91AAFEB();
}

void func_438()
{
	int iVar0;
	
	if (unk_0xB1FDFCECA75CE4A7("buddyDeathResponse"))
	{
		start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_106070.f_9057 || func_141(0))
	{
		if (!func_439())
		{
			iVar0 = func_140();
			if (iVar0 != -1)
			{
				if (!func_134(iVar0))
				{
					return;
				}
				unk_0x2BCFB39E86340DAA(&(Global_84079[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_139();
		}
	}
}

int func_439()
{
	if (((Global_93232 == 13 || Global_93232 == 10) || Global_93232 == 11) || Global_93232 == 12)
	{
		return 0;
	}
	return 1;
}

