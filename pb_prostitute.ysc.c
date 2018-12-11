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
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	vector3 vLocal_56 = { 0f, 0f, 0f };
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	char* sLocal_61 = NULL;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	vector3 vLocal_88 = { 0f, 0f, 0f };
	vector3 vLocal_89 = { 0f, 0f, 0f };
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 16;
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
	var uLocal_281 = 1;
	var uLocal_282 = 0;
	int iLocal_283[3] = { 0, 0, 0 };
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	var uLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299[4] = { 0, 0, 0, 0 };
	struct<7> Local_300[4];
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
	var uLocal_317 = 10;
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
	var uLocal_328 = 2;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 8;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 8;
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
	float fLocal_351 = 0f;
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
	var uLocal_367 = 15;
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
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 1;
	int iLocal_641 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	
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
	vLocal_56 = { 0f, 0f, 0f };
	iLocal_72 = -1;
	iLocal_74 = -1;
	iLocal_75 = -1;
	iLocal_76 = -1;
	iLocal_77 = -1;
	iLocal_78 = -1;
	iLocal_79 = -1;
	iLocal_80 = -1;
	iLocal_82 = -1;
	iLocal_84 = -1;
	iLocal_85 = -1;
	iLocal_284 = -1;
	fLocal_351 = ((0.05f + 0.275f) - 0.01f);
	if (Global_3)
	{
		unk_0x8F1A9FE6D91AAFEB();
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		if (func_538(unk_0xD4E735F4B6A956AC(), 1))
		{
			unk_0x8F1A9FE6D91AAFEB();
		}
		if (func_537(unk_0xD4E735F4B6A956AC(), 1))
		{
			unk_0x8F1A9FE6D91AAFEB();
		}
	}
	if (func_536(13) || func_536(14))
	{
		unk_0x8F1A9FE6D91AAFEB();
	}
	if (!func_535() && !unk_0x4C9BACA8D249CB13())
	{
		if (unk_0x5EBD03AF78E7B4DB(35))
		{
			func_526();
			func_525(1);
			func_521(&uLocal_367);
		}
	}
	wait(0);
	iLocal_90 = iScriptParam_641;
	if (unk_0x4C9BACA8D249CB13())
	{
		func_520();
		unk_0x1B0D16DC60698F88(2, 0, unk_0xD4E735F4B6A956AC());
		func_515(0, -1, 0);
		unk_0x2F3193E06C2EFF44(0);
	}
	func_514();
	func_513(128);
	while (iLocal_60)
	{
		bVar0 = true;
		func_510(&uLocal_367);
		if (func_535())
		{
			if (func_509(1024))
			{
				if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
				{
					if (unk_0x07E3832452A79D33(unk_0xA19140A5C42D8715()) && unk_0x7434BD0C92483685(unk_0xA19140A5C42D8715()))
					{
						func_513(1024);
						unk_0xE7BD42D7C76057DE(unk_0xA19140A5C42D8715());
					}
				}
			}
			if (!func_509(1024) && func_509(2048))
			{
				unk_0x8F1A9FE6D91AAFEB();
			}
			if (!unk_0xDC5D81351D6A4DDB(iLocal_90))
			{
				bVar0 = false;
			}
			else if (!unk_0xB540EEBB14C48518(iLocal_90))
			{
				bVar0 = false;
				unk_0x39926DD5354848E1(iLocal_90);
			}
		}
		if (!func_535() || !func_509(2048))
		{
			func_502();
			if (func_535())
			{
				func_501();
				if (func_509(128))
				{
					iLocal_60 = 0;
				}
			}
			if (func_496())
			{
				if (bVar0)
				{
					if (iLocal_285 > 0)
					{
						func_491(&uLocal_367);
					}
					func_489();
					func_487();
					switch (iLocal_285)
					{
						case 0:
							if (iLocal_284 == -1)
							{
								if (unk_0x0D14162FE6E23CF2(iLocal_90))
								{
									iLocal_284 = func_486();
								}
								else if (func_484())
								{
									iLocal_284 = 4;
								}
							}
							else if (func_479())
							{
								if (func_478())
								{
									if (func_535())
									{
										if (unk_0xB540EEBB14C48518(iLocal_90))
										{
											unk_0x0EEB301CAA50A123(iLocal_90, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
										}
										else
										{
											unk_0x39926DD5354848E1(iLocal_90);
										}
									}
									else
									{
										unk_0x0EEB301CAA50A123(iLocal_90, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
									}
								}
								iLocal_285 = 1;
								func_477("Prostitue: moving to PROS_PB_CUSTOMER_DETERMINE_TYPE");
							}
							break;
						
						case 1:
							if (func_476(iLocal_49, 4096))
							{
								func_475();
							}
							if (func_474())
							{
								iLocal_285 = 2;
								func_477("Prostitue: moving to PROS_PB_CUSTOMER_PLAYER");
							}
							if (func_470())
							{
								iLocal_285 = 3;
								func_468(&iLocal_49, 64);
								Global_25611 = 1;
								func_477("Prostitue: moving to PROS_PB_CUSTOMER_OTHER");
							}
							break;
						
						case 2:
							func_91(&uLocal_367);
							break;
						
						case 3:
							func_3();
							break;
						
						default:
							break;
						}
				}
			}
			else
			{
				func_2(0);
			}
			func_1();
		}
		wait(0);
	}
	if (func_476(iLocal_49, 2))
	{
	}
	func_477(" Something forced this exit!!!!!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	func_526();
	func_521(&uLocal_367);
}

void func_1()
{
}

void func_2(bool bParam0)
{
	if (bParam0)
	{
		iLocal_60 = 1;
	}
	else
	{
		iLocal_60 = 0;
	}
}

void func_3()
{
	if (iLocal_286 > 0)
	{
		if (unk_0x1095F403F52B42E1(iLocal_92, 0))
		{
			if (!unk_0x4915F4759304D5CF(iLocal_91))
			{
				if (!unk_0xE0FD180CD24C0B67(iLocal_91, iLocal_92, 0))
				{
					func_90();
				}
			}
		}
	}
	if (!unk_0xDC5D81351D6A4DDB(iLocal_91) || unk_0x7112137033807390(iLocal_91, 0))
	{
		func_89(15);
	}
	switch (iLocal_286)
	{
		case 0:
			if (!iLocal_287 == 0)
			{
				iLocal_286 = 1;
			}
			break;
		
		case 1:
			func_83();
			break;
		
		case 2:
			func_82();
			break;
		
		case 3:
			func_65();
			break;
		
		case 4:
			func_56();
			break;
		
		case 5:
			func_53();
			break;
		
		case 6:
			if (!unk_0x4915F4759304D5CF(iLocal_91))
			{
				if (unk_0xF9D4EF1338E38AFB(iLocal_90, 242628503) == 7)
				{
					iLocal_63 = unk_0xFD34717937104F1C();
					iLocal_64 = (iLocal_63 - iLocal_62);
					if (iLocal_64 >= 10000 || !unk_0x10E54C268D1B3FED(iLocal_90, iLocal_91, 12f, 12f, 5f, 0, 1, 0))
					{
						func_477("prostitute WAITING TO END");
						func_90();
					}
				}
			}
			else
			{
				func_90();
			}
			break;
		
		case 7:
			if (!unk_0x789CFCFF551BAB0A(func_52(0), func_52(1), func_52(2), func_52(3)))
			{
				unk_0x7E393C5E27D0ACA8(func_52(0), func_52(1), func_52(2), func_52(3));
			}
			else
			{
				unk_0xE49301B2B6F420DE(iLocal_91, iLocal_92, vLocal_88, (unk_0xC3B6F3872400A86D(iLocal_92) * 0.65f), 0, 0, 786859, 4f, -1f);
				iLocal_286 = 8;
			}
			break;
		
		case 8:
			if (vdist2(vLocal_88, unk_0xE2BBD32891C18569(iLocal_90, true)) < 25f && unk_0xF9D4EF1338E38AFB(iLocal_91, -1817882002) != 1)
			{
				iLocal_288 = unk_0x22C775856F4633CA(1, 3);
				iLocal_286 = 11;
			}
			if (func_49(iLocal_91))
			{
				func_89(15);
			}
			break;
		
		case 11:
			func_4();
			break;
		
		case 12:
			func_89(15);
			break;
		
		case 15:
			if (unk_0xDC5D81351D6A4DDB(iLocal_90) && unk_0xDC5D81351D6A4DDB(iLocal_92))
			{
				if (unk_0xE0FD180CD24C0B67(iLocal_90, iLocal_92, 0))
				{
					if (!unk_0x7112137033807390(iLocal_91, 0))
					{
						if (unk_0xF9D4EF1338E38AFB(iLocal_91, -828834893) != 1)
						{
							unk_0xCB482EF95FAE4D73(iLocal_90, 0, 16842752);
						}
					}
				}
				else
				{
					func_2(0);
				}
			}
			break;
	}
}

void func_4()
{
	switch (iLocal_293)
	{
		case 0:
			unk_0x08BDB2B0A49A64C5(iLocal_90, 0.916f);
			if (func_36(iLocal_91))
			{
				func_34(&iLocal_113);
				iLocal_293 = 1;
			}
			break;
		
		case 1:
			if (vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), false), unk_0xE2BBD32891C18569(iLocal_90, false)) < 22500f)
			{
				func_32();
			}
			func_29(iLocal_92);
			if (func_27(iLocal_91))
			{
				func_11(&uLocal_116, "pbproau", "pbpro_pic", 4, 0, 0, 0);
				func_89(15);
			}
			if (func_7(&iLocal_113) > 1f)
			{
				if (unk_0xF9D4EF1338E38AFB(iLocal_90, 242628503) == 7)
				{
					func_5(&iLocal_49, 512);
					iLocal_293 = 3;
				}
			}
			break;
		
		case 3:
			func_89(15);
			break;
		
		case 5:
			func_89(15);
			break;
	}
}

void func_5(int iParam0, int iParam1)
{
	func_6(iParam0, iParam1);
}

void func_6(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

float func_7(int iParam0)
{
	if (func_10(iParam0))
	{
		if (func_9(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_8(unk_0x05EFB6A616B6FADE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_8(bool bParam0)
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

bool func_9(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(*iParam0, 2);
}

bool func_10(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(*iParam0, 1);
}

int func_11(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_12(sParam2, iParam3, 0);
}

int func_12(char* sParam0, int iParam1, bool bParam2)
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
					func_25();
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
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_23();
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
				func_17();
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
				if (func_16())
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
			if (func_15())
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
			func_14();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_13();
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
		func_25();
	}
	return 0;
}

void func_13()
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

void func_14()
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

int func_15()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_16()
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

void func_17()
{
	if (func_536(14))
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
		Global_14513 = func_18();
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

int func_18()
{
	func_19();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_19()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_22(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_21(unk_0xA19140A5C42D8715());
			if (func_20(iVar0) && (!func_536(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_20(Global_106070.f_2355.f_539.f_4301))
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

bool func_20(int iParam0)
{
	return iParam0 < 3;
}

int func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_22(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_22(int iParam0)
{
	if (func_20(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_23()
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

bool func_24(int iParam0, int iParam1)
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

void func_25()
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

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_27(int iParam0)
{
	if (func_28())
	{
		if (!unk_0xE59B461FD3AB95B5(unk_0x8F474E419F56E48D(iParam0), unk_0xE2BBD32891C18569(iParam0, true), 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_28()
{
	if (Global_16858)
	{
		return 1;
	}
	return 0;
}

void func_29(int iParam0)
{
	if (iLocal_288 != 1 && iLocal_288 != 2)
	{
		return;
	}
	if (func_31())
	{
		func_30(&iParam0);
	}
}

void func_30(var uParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (unk_0x1095F403F52B42E1(*uParam0, 0))
	{
		vVar0 = { 0f, 0f, -0.1f };
		vVar1 = { 0f, 0f, 0f };
		unk_0xFAE5E5AC968944E8(*uParam0, 1, vVar0, vVar1, 0, 1, 1, 1, 1, 0);
	}
}

bool func_31()
{
	return unk_0xC621379C202E086C(iLocal_90, 876132797);
}

void func_32()
{
	unk_0x906EA681A50D5E9C();
	func_33();
}

void func_33()
{
	Global_17228.f_134 = 1;
}

void func_34(int iParam0)
{
	func_35(iParam0, 0f);
}

void func_35(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_8(unk_0x05EFB6A616B6FADE(*iParam0, 4)) - fParam1);
	unk_0x2BCFB39E86340DAA(iParam0, 1);
	unk_0xFA57C719261AA55D(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_36(int iParam0)
{
	if (unk_0x429D45A6C6520026(sLocal_61))
	{
		sLocal_61 = func_44(iParam0, 0, 0);
		return 0;
	}
	if (!unk_0x39C2D9AB77873F84(sLocal_61))
	{
		return 0;
	}
	else
	{
		func_37(iLocal_90, func_43(), 1, floor((15000f * (1f + (to_float(iLocal_70) / 2f)))), 1);
		if (iParam0 == unk_0xA19140A5C42D8715())
		{
			func_37(iParam0, func_43(), 0, floor((15000f * (1f + (to_float(iLocal_70) / 2f)))), 1);
		}
		func_477("anim_dict has loaded, triggering anims?");
		func_468(&iLocal_49, 512);
		return 1;
	}
	return 0;
}

void func_37(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	int iVar3;
	
	if (unk_0x7112137033807390(iParam0, 0))
	{
		return;
	}
	iVar0 = unk_0xCAEB6CE71A2C7212(iParam0, 1);
	if (!unk_0x1095F403F52B42E1(iVar0, 0))
	{
		return;
	}
	iLocal_48 = unk_0x06EBD57CD6085DD1();
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1) && func_42(0, 1))
	{
		if (iLocal_48 != 4)
		{
			unk_0x4DBE174154203AFA(4);
		}
	}
	bVar1 = func_41(iVar0);
	sVar2 = func_44(iParam0, 0, 0);
	if (!unk_0x39C2D9AB77873F84(sVar2))
	{
		unk_0x6D68030C791111E0(sVar2);
	}
	else
	{
		unk_0x2F89329397A277BC(&iVar3);
		unk_0x3F01127ECD227890(0, sVar2, func_38(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0, 0, 0, 0);
		unk_0x3F01127ECD227890(0, sVar2, func_38(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x3F01127ECD227890(0, sVar2, func_38(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		unk_0x3F01127ECD227890(0, sVar2, func_38(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x3F01127ECD227890(0, sVar2, func_38(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0, 0, 0, 0);
		unk_0x301F42EEE3C40328(iVar3);
		unk_0xE1072FA2FECBAD96(iParam0, iVar3);
		if (bParam4)
		{
			unk_0x3A95A0A3221D4208(&iVar3);
		}
	}
}

char* func_38(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(18);
					}
					else
					{
						sVar0 = func_40(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(8);
				}
				else
				{
					sVar0 = func_40(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(18);
				}
				else
				{
					sVar0 = func_39(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(8);
			}
			else
			{
				sVar0 = func_39(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(19);
					}
					else
					{
						sVar0 = func_40(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(9);
				}
				else
				{
					sVar0 = func_40(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(19);
				}
				else
				{
					sVar0 = func_39(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(9);
			}
			else
			{
				sVar0 = func_39(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(20);
					}
					else
					{
						sVar0 = func_40(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(10);
				}
				else
				{
					sVar0 = func_40(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(20);
				}
				else
				{
					sVar0 = func_39(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(10);
			}
			else
			{
				sVar0 = func_39(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(21);
					}
					else
					{
						sVar0 = func_40(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(11);
				}
				else
				{
					sVar0 = func_40(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(21);
				}
				else
				{
					sVar0 = func_39(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(11);
			}
			else
			{
				sVar0 = func_39(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(22);
					}
					else
					{
						sVar0 = func_40(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(12);
				}
				else
				{
					sVar0 = func_40(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(22);
				}
				else
				{
					sVar0 = func_39(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(12);
			}
			else
			{
				sVar0 = func_39(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_40(3);
				}
				else
				{
					sVar0 = func_40(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(3);
			}
			else
			{
				sVar0 = func_39(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_39(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_40(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_41(int iParam0)
{
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		switch (unk_0x86CF814947084ADF(iParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case -463340997:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1453479140:
			case 1837596901:
			case 2013836096:
			case 2071837743:
			case 2130662788:
			case -1546132012:
			case 1192783831:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_42(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (bParam0)
	{
		bVar0 = unk_0x1F7BAD75218F1A2C(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = unk_0x1F7BAD75218F1A2C(1) == 4;
		}
	}
	return bVar0;
}

bool func_43()
{
	return iLocal_288 == 0;
}

char* func_44(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		iVar0 = unk_0xCAEB6CE71A2C7212(iParam0, 1);
		if (unk_0x1095F403F52B42E1(iVar0, 0))
		{
			if (func_41(iVar0))
			{
				if ((!func_42(0, 1) || iParam2) && !bParam1)
				{
					return func_48();
				}
				else
				{
					return func_47();
				}
			}
		}
	}
	if ((!func_42(0, 1) || iParam2) && !bParam1)
	{
		return func_46();
	}
	return func_45();
}

char* func_45()
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_46()
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_47()
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_48()
{
	return "mini@prostitutes@sexlow_veh";
}

int func_49(int iParam0)
{
	vector3 vVar0;
	
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		if (unk_0x97B2B0016AD3C7C6(iParam0) || !func_51(iParam0, iLocal_92, -1))
		{
			vVar0 = { unk_0xE2BBD32891C18569(iParam0, true) };
			unk_0xC2C4AE9DB4A0BEF3(iParam0, 196624, true);
			if (func_50())
			{
				unk_0x1659AF2827EC9D40(iParam0, vVar0, 300f, -1, 1, 1);
			}
			else if (!unk_0x7112137033807390(unk_0xA8D84E6AD4EB2356(iParam0), 0))
			{
				unk_0xDA4D3941AFF8EF12(iParam0, unk_0xA8D84E6AD4EB2356(iParam0), 0, 16);
			}
			else
			{
				unk_0x1659AF2827EC9D40(iParam0, vVar0, 300f, -1, 1, 1);
			}
		}
	}
	return 0;
}

int func_50()
{
	if (unk_0x05EFB6A616B6FADE(unk_0x22C775856F4633CA(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2)
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

float func_52(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0xE2BBD32891C18569(iLocal_90, true) };
	vVar1 = { vLocal_88 };
	if (iParam0 == 0)
	{
		if (vVar0.x < vVar1.x)
		{
			return (vVar0.x - 20f);
		}
		else
		{
			return (vVar1.x - 20f);
		}
	}
	if (iParam0 == 1)
	{
		if (vVar0.y < vVar1.y)
		{
			return (vVar0.y - 20f);
		}
		else
		{
			return (vVar1.y - 20f);
		}
	}
	if (iParam0 == 2)
	{
		if (vVar0.x > vVar1.x)
		{
			return (vVar0.x + 20f);
		}
		else
		{
			return (vVar1.x + 20f);
		}
	}
	if (vVar0.y > vVar1.y)
	{
		return (vVar0.y + 20f);
	}
	return (vVar1.y + 20f);
}

void func_53()
{
	if (!unk_0x4915F4759304D5CF(iLocal_91))
	{
		if (unk_0x1095F403F52B42E1(iLocal_92, 0))
		{
			if (unk_0xE0FD180CD24C0B67(iLocal_91, iLocal_92, 0))
			{
				if (unk_0xF9D4EF1338E38AFB(iLocal_90, 242628503) == 1)
				{
					if (unk_0x5100CFEF9EA1B0E5(iLocal_90) > 0)
					{
						if (unk_0xE0FD180CD24C0B67(iLocal_90, iLocal_92, 0))
						{
							func_477("prostitute WAITING TO END   - DRIVING OFF (WANDER)");
							unk_0x2F89329397A277BC(&iLocal_95);
							unk_0x731722E696597BD1(0, iLocal_92, 10f, 786603);
							unk_0x301F42EEE3C40328(iLocal_95);
							unk_0xE1072FA2FECBAD96(iLocal_91, iLocal_95);
							unk_0x3A95A0A3221D4208(&iLocal_95);
							vLocal_88 = { func_54(unk_0xE2BBD32891C18569(iLocal_90, true)) };
							unk_0x6D68030C791111E0(func_44(iLocal_90, 0, 0));
							iLocal_286 = 7;
							iLocal_62 = unk_0xFD34717937104F1C();
						}
					}
				}
			}
			else
			{
				func_477("EXIT - OTHER OUT OF THE VEHICLE");
				func_90();
			}
		}
		else
		{
			func_477("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_477("EXIT - OTHER ped INJURED");
		func_90();
	}
}

Vector3 func_54(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (vdist2(vParam0, func_55(iVar1)) < vdist2(vParam0, func_55(iVar0)))
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	return func_55(iVar0);
}

Vector3 func_55(int iParam0)
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			vVar0 = { -1449.075f, -634.0139f, 29.094f };
			break;
		
		case 1:
			vVar0 = { -1266.291f, -1361.175f, 3.222f };
			break;
		
		case 2:
			vVar0 = { -227.0429f, 311.6679f, 91.1655f };
			break;
		
		case 3:
			vVar0 = { -1310.978f, -235.9881f, 41.1789f };
			break;
		
		case 4:
			vVar0 = { -545.299f, -874.6625f, 26.1981f };
			break;
		
		case 5:
			vVar0 = { -192.1116f, -1332.385f, 30.3304f };
			break;
		
		case 6:
			vVar0 = { 196.6188f, -1850.396f, 26.2005f };
			break;
		
		case 7:
			vVar0 = { 322.9744f, -1000.23f, 28.2401f };
			break;
		
		case 8:
			vVar0 = { 38.824f, -98.3984f, 55.2507f };
			break;
		
		case 9:
			vVar0 = { -1800.76f, -404.1213f, 43.8109f };
			break;
		
		case 10:
			vVar0 = { 1421.334f, -1618.83f, 58.3324f };
			break;
		
		case 11:
			vVar0 = { 983.5914f, -2360.14f, 29.5098f };
			break;
		
		case 12:
			vVar0 = { 97.9046f, -2501.28f, 5.0001f };
			break;
		
		case 13:
			vVar0 = { 1591.921f, 6516.841f, 16.3155f };
			break;
		
		case 14:
			vVar0 = { 1278.73f, 3624.059f, 32.0408f };
			break;
		
		case 15:
			vVar0 = { 2464.667f, 5526.815f, 44.2143f };
			break;
		
		case 16:
			vVar0 = { 2052.58f, 4637.477f, 39.642f };
			break;
		
		case 17:
			vVar0 = { 1435.608f, 4483.951f, 49.2513f };
			break;
		
		case 18:
			vVar0 = { 218.214f, 4439.288f, 66.9056f };
			break;
		
		case 19:
			vVar0 = { 16.9496f, 3632.35f, 39.2848f };
			break;
		
		case 20:
			vVar0 = { 2.0464f, 3293.74f, 40.2594f };
			break;
		
		case 21:
			vVar0 = { -1195.701f, 2639.13f, 15.1653f };
			break;
		
		case 22:
			vVar0 = { -1663.641f, 2477.778f, 30.9941f };
			break;
		
		case 23:
			vVar0 = { -2505.643f, 3677.825f, 12.1719f };
			break;
		
		case 24:
			vVar0 = { -2179.209f, 4264.236f, 47.9904f };
			break;
		
		case 25:
			vVar0 = { -758.9616f, 5612.78f, 29.4536f };
			break;
		
		case 26:
			vVar0 = { -276.8032f, 6327.188f, 31.4262f };
			break;
		
		case 27:
			vVar0 = { 1483.839f, 6366.199f, 22.6875f };
			break;
		
		case 28:
			vVar0 = { 949.013f, 3551.753f, 32.9687f };
			break;
		
		case 29:
			vVar0 = { 180.9372f, 3051.781f, 42.1131f };
			break;
		
		case 30:
			vVar0 = { -462.9046f, 6115.419f, 28.8805f };
			break;
		
		case 31:
			vVar0 = { -256.3564f, 6056.516f, 30.9808f };
			break;
	}
	return vVar0;
}

void func_56()
{
	float fVar0;
	
	if (!unk_0x4915F4759304D5CF(iLocal_91))
	{
		if (unk_0x1095F403F52B42E1(iLocal_92, 0))
		{
			if (unk_0xE0FD180CD24C0B67(iLocal_91, iLocal_92, 0))
			{
				fVar0 = unk_0xEAA5CEF8875FEEED(iLocal_92);
				if (unk_0x10E54C268D1B3FED(iLocal_91, iLocal_90, 15f, 15f, 5f, 0, 1, 0) && fVar0 <= 1f)
				{
					func_63(iLocal_90);
					iLocal_63 = unk_0xFD34717937104F1C();
					iLocal_64 = (iLocal_63 - iLocal_62);
					if (iLocal_64 >= iLocal_66)
					{
						if (func_535())
						{
							if (unk_0xB540EEBB14C48518(iLocal_91))
							{
								unk_0x53FF9BDD8529ACD2(iLocal_91);
							}
						}
						else
						{
							unk_0x53FF9BDD8529ACD2(iLocal_91);
						}
						iLocal_66 = unk_0x22C775856F4633CA(0, 10000);
						if (iLocal_66 > 2500)
						{
							unk_0x9568B1B58F78FF36(iLocal_90);
							unk_0x3A95A0A3221D4208(&iLocal_95);
							unk_0x2F89329397A277BC(&iLocal_95);
							unk_0xA2EBCD9385E56019(0, iLocal_92, -1, 0, 1f, 8388609, 0);
							unk_0xB3E1967E66494060(0, -1);
							unk_0x301F42EEE3C40328(iLocal_95);
							unk_0xE1072FA2FECBAD96(iLocal_90, iLocal_95);
							unk_0x3A95A0A3221D4208(&iLocal_95);
							func_477("other GIVES MONEY");
							iLocal_286 = 5;
						}
						else
						{
							func_62();
							func_57();
							if (!unk_0x4915F4759304D5CF(iLocal_91))
							{
								if (unk_0x1095F403F52B42E1(iLocal_92, 0))
								{
									if (unk_0xE0FD180CD24C0B67(iLocal_91, iLocal_92, 0))
									{
										unk_0x3A95A0A3221D4208(&iLocal_95);
										unk_0x2F89329397A277BC(&iLocal_95);
										unk_0xB3E1967E66494060(0, unk_0x22C775856F4633CA(500, 2000));
										unk_0x731722E696597BD1(0, iLocal_92, 10f, 786603);
										unk_0x301F42EEE3C40328(iLocal_95);
										unk_0xE1072FA2FECBAD96(iLocal_91, iLocal_95);
										unk_0x3A95A0A3221D4208(&iLocal_95);
										iLocal_62 = unk_0xFD34717937104F1C();
									}
								}
							}
							func_477("prostitute REFUSED MONEY 2");
							if (func_535())
							{
								if (unk_0xB540EEBB14C48518(iLocal_91))
								{
									unk_0x53FF9BDD8529ACD2(iLocal_91);
								}
							}
							else
							{
								unk_0x53FF9BDD8529ACD2(iLocal_91);
							}
							iLocal_286 = 6;
						}
					}
				}
				else
				{
					if (func_535())
					{
						if (unk_0xB540EEBB14C48518(iLocal_91))
						{
							unk_0x53FF9BDD8529ACD2(iLocal_91);
						}
					}
					else
					{
						unk_0x53FF9BDD8529ACD2(iLocal_91);
					}
					func_90();
				}
			}
			else
			{
				func_477("EXIT - OTHER OUT OF THE VEHICLE");
				if (func_535())
				{
					if (unk_0xB540EEBB14C48518(iLocal_91))
					{
						unk_0x53FF9BDD8529ACD2(iLocal_91);
					}
				}
				else
				{
					unk_0x53FF9BDD8529ACD2(iLocal_91);
				}
				func_90();
			}
		}
		else
		{
			func_477("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_477("EXIT - OTHER ped INJURED");
		func_90();
	}
}

int func_57()
{
	int iVar0;
	
	if (!unk_0xDC5D81351D6A4DDB(iLocal_90) || unk_0x4915F4759304D5CF(iLocal_90))
	{
		return 1;
	}
	if (!func_535())
	{
		if (unk_0x5D7DFE2058701942(iLocal_90, 1))
		{
			unk_0x1CBE3F8ED90509B2(iLocal_90, 1193033728, 0);
		}
		else if (func_476(iLocal_49, 4194304))
		{
			unk_0x2F89329397A277BC(&iVar0);
			if (func_476(iLocal_73, 524288))
			{
				unk_0x3F01127ECD227890(0, func_61(iLocal_284), func_60(7), 8f, -1.5f, -1, 0, 0, 0, 0, 0);
			}
			func_58(1);
			unk_0x301F42EEE3C40328(iVar0);
			unk_0xE1072FA2FECBAD96(iLocal_90, iVar0);
			unk_0x3A95A0A3221D4208(&iVar0);
			func_468(&iLocal_49, 16384);
			func_34(&iLocal_107);
		}
		return 1;
	}
	if (unk_0x5D7DFE2058701942(iLocal_90, 1))
	{
		if (unk_0xB540EEBB14C48518(iLocal_90))
		{
			unk_0x1CBE3F8ED90509B2(iLocal_90, 1193033728, 0);
			return 1;
		}
		else
		{
			unk_0x39926DD5354848E1(iLocal_90);
		}
	}
	switch (iLocal_54)
	{
		case 0:
			if (func_476(iLocal_49, 4194304))
			{
				iLocal_54 = 1;
			}
			break;
		
		case 1:
			if (func_476(iLocal_73, 524288))
			{
				if (unk_0xB540EEBB14C48518(iLocal_90))
				{
					unk_0x3F01127ECD227890(iLocal_90, func_61(iLocal_284), func_60(7), 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				}
				else
				{
					unk_0x39926DD5354848E1(iLocal_90);
					return 0;
				}
			}
			iLocal_54 = 2;
			break;
		
		case 2:
			if (func_476(iLocal_73, 524288))
			{
				if (unk_0xB540EEBB14C48518(iLocal_90))
				{
					if (unk_0xF9D4EF1338E38AFB(iLocal_90, -2017877118) == 7)
					{
						func_58(0);
						iLocal_54 = 3;
					}
				}
				else
				{
					unk_0x39926DD5354848E1(iLocal_90);
				}
			}
			else if (unk_0xB540EEBB14C48518(iLocal_90))
			{
				func_58(0);
				iLocal_54 = 3;
			}
			else
			{
				unk_0x39926DD5354848E1(iLocal_90);
			}
			break;
		
		case 3:
			func_468(&iLocal_49, 16384);
			func_34(&iLocal_107);
			return 1;
			break;
	}
	return 0;
}

void func_58(bool bParam0)
{
	vector3 vVar0;
	
	if (((unk_0xA6F0C4E7E1A7F439(iLocal_90) || unk_0x0D14162FE6E23CF2(iLocal_90)) || unk_0x68128F973FA5E2E3(iLocal_90, func_59(0))) || unk_0x68128F973FA5E2E3(iLocal_90, func_59(1)))
	{
		return;
	}
	vVar0 = { unk_0xE2BBD32891C18569(iLocal_90, true) };
	if (!unk_0x07EC788D27AB67D3(vVar0, func_59(0), 20f, 1) && !unk_0x07EC788D27AB67D3(vVar0, func_59(1), 20f, 1))
	{
		if (bParam0)
		{
			unk_0x1CBE3F8ED90509B2(0, 1193033728, 0);
		}
		else
		{
			unk_0x1CBE3F8ED90509B2(iLocal_90, 1193033728, 0);
		}
		return;
	}
	if (!bParam0)
	{
		unk_0xB62205D12F35BF49(iLocal_90, vVar0, 20f, 0);
	}
	else
	{
		unk_0xB62205D12F35BF49(0, vVar0, 20f, 0);
	}
}

char* func_59(int iParam0)
{
	if (iParam0 == 0)
	{
		return "WORLD_HUMAN_PROSTITUTE_LOW_CLASS";
	}
	return "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS";
}

char* func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "idle_intro";
			break;
		
		case 1:
			return "idle_a";
			break;
		
		case 2:
			return "idle_b";
			break;
		
		case 3:
			return "idle_c";
			break;
		
		case 4:
			return "idle_wait";
			break;
		
		case 5:
			return "idle_reject";
			break;
		
		case 8:
			return "idle_reject_loop_a";
			break;
		
		case 9:
			return "idle_reject_loop_b";
			break;
		
		case 10:
			return "idle_reject_loop_c";
			break;
		
		case 11:
			return "idle_outro";
			break;
		
		case 6:
			return "reject_2_idle";
			break;
		
		case 7:
			return "reject_outro";
			break;
	}
	return "";
}

char* func_61(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "mini@hookers_spcrackhead";
			break;
		
		case 1:
			sVar0 = "mini@hookers_spcokehead";
			break;
		
		case 3:
		case 4:
			sVar0 = "mini@hookers_spfrench";
			break;
		
		case 2:
		default:
			sVar0 = "mini@hookers_spvanilla";
			break;
	}
	return sVar0;
}

void func_62()
{
	if (unk_0x4915F4759304D5CF(iLocal_90))
	{
		return;
	}
	if (!unk_0x958D2327555FAEA5(iLocal_90))
	{
		if (func_18() == 2)
		{
			unk_0xE85BD4A26C0DFACA(iLocal_90, "HOOKER_DECLINED_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			unk_0xE85BD4A26C0DFACA(iLocal_90, "HOOKER_DECLINED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

void func_63(int iParam0)
{
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		if (func_64(iParam0))
		{
			unk_0xB0D7019224A3A443(iParam0, 109, true);
		}
	}
}

int func_64(int iParam0)
{
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		if ((unk_0x411C28019DEA5CEF(iParam0, func_61(iLocal_284), func_60(1), 3) || unk_0x411C28019DEA5CEF(iParam0, func_61(iLocal_284), func_60(2), 3)) || unk_0x411C28019DEA5CEF(iParam0, func_61(iLocal_284), func_60(3), 3))
		{
			return 1;
		}
	}
	return 0;
}

void func_65()
{
	float fVar0;
	
	if (!unk_0x4915F4759304D5CF(iLocal_91))
	{
		if (unk_0x1095F403F52B42E1(iLocal_92, 0))
		{
			if (unk_0xE0FD180CD24C0B67(iLocal_91, iLocal_92, 0))
			{
				if (unk_0xF9D4EF1338E38AFB(iLocal_90, 242628503) == 1)
				{
					if (unk_0x5100CFEF9EA1B0E5(iLocal_90) > 1)
					{
						if (unk_0x10E54C268D1B3FED(iLocal_90, iLocal_91, 20f, 20f, 10f, 0, 1, 0))
						{
							fVar0 = unk_0xEAA5CEF8875FEEED(iLocal_92);
							if (fVar0 <= 1f)
							{
								func_66(0);
								iLocal_62 = unk_0xFD34717937104F1C();
								iLocal_66 = unk_0x22C775856F4633CA(4000, 8000);
								func_477("prostitute proposition other in VEHICLE VEHICLE");
								iLocal_286 = 4;
							}
						}
						else
						{
							func_477("EXIT - OTHER IN VEHICLE OUT OF RANGE");
							func_90();
						}
					}
				}
			}
			else
			{
				func_477("EXIT - OTHER OUT OF THE VEHICLE");
				func_90();
			}
		}
		else
		{
			func_477("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_477("EXIT - OTHER ped INJURED");
		func_90();
	}
}

int func_66(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (!func_535())
	{
		if (bParam0)
		{
			unk_0xA95C9BC9CAF4C02D(iLocal_90, "PROSTITUTE_GROUP", 0);
			func_81("PROSTITUTES_SOLICIT_SCENE");
		}
		func_67();
		if (func_476(iLocal_49, 4194304))
		{
			iVar0 = unk_0x22C775856F4633CA(1, 4);
			unk_0x2F89329397A277BC(&iVar1);
			unk_0x3F01127ECD227890(0, func_61(iLocal_284), func_60(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0x3F01127ECD227890(0, func_61(iLocal_284), func_60(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0x3F01127ECD227890(0, func_61(iLocal_284), func_60(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0x301F42EEE3C40328(iVar1);
			unk_0xE1072FA2FECBAD96(iLocal_90, iVar1);
			unk_0x3A95A0A3221D4208(&iVar1);
		}
		return 1;
	}
	switch (iLocal_53)
	{
		case 0:
			if (bParam0)
			{
				unk_0xA95C9BC9CAF4C02D(iLocal_90, "PROSTITUTE_GROUP", 0);
				func_81("PROSTITUTES_SOLICIT_SCENE");
			}
			func_67();
			iLocal_53 = 1;
			break;
		
		case 1:
			if (func_476(iLocal_49, 4194304))
			{
				if (unk_0xB540EEBB14C48518(iLocal_90))
				{
					unk_0x3F01127ECD227890(iLocal_90, func_61(iLocal_284), func_60(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_53 = 2;
				}
				else
				{
					unk_0x39926DD5354848E1(iLocal_90);
				}
			}
			break;
		
		case 2:
			if (unk_0xB540EEBB14C48518(iLocal_90))
			{
				if (unk_0xF9D4EF1338E38AFB(iLocal_90, -2017877118) == 7)
				{
					iVar0 = unk_0x22C775856F4633CA(1, 4);
					unk_0x3F01127ECD227890(iLocal_90, func_61(iLocal_284), func_60(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_53 = 3;
				}
			}
			else
			{
				unk_0x39926DD5354848E1(iLocal_90);
			}
			break;
		
		case 3:
			if (unk_0xB540EEBB14C48518(iLocal_90))
			{
				if (unk_0xF9D4EF1338E38AFB(iLocal_90, -2017877118) == 7)
				{
					unk_0x3F01127ECD227890(iLocal_90, func_61(iLocal_284), func_60(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
					iLocal_53 = 4;
				}
			}
			else
			{
				unk_0x39926DD5354848E1(iLocal_90);
			}
			break;
		
		case 4:
			iLocal_53 = 0;
			return 1;
			break;
	}
	return 0;
}

void func_67()
{
	if (unk_0x4915F4759304D5CF(iLocal_90))
	{
		return;
	}
	if (!unk_0x958D2327555FAEA5(iLocal_90))
	{
		switch (func_18())
		{
			case 0:
				if (!func_68(iLocal_90))
				{
					unk_0xE85BD4A26C0DFACA(iLocal_90, "SOLICIT_MICHAEL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0xE85BD4A26C0DFACA(iLocal_90, "SOLICIT_MICHAEL_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 1:
				if (!func_68(iLocal_90))
				{
					unk_0xE85BD4A26C0DFACA(iLocal_90, "SOLICIT_FRANKLIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0xE85BD4A26C0DFACA(iLocal_90, "SOLICIT_FRANKLIN_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 2:
				if (!func_68(iLocal_90))
				{
					unk_0xE85BD4A26C0DFACA(iLocal_90, "SOLICIT_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0xE85BD4A26C0DFACA(iLocal_90, "SOLICIT_TREVOR_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			}
	}
}

bool func_68(int iParam0)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	return func_69(iVar0);
}

int func_69(int iParam0)
{
	if (func_70(iParam0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_70(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_18() == 0)
	{
		iVar0 = Global_106070.f_10021.f_1[iParam0 /*11*/][0];
	}
	else if (func_18() == 1)
	{
		iVar0 = Global_106070.f_10021.f_1[iParam0 /*11*/][1];
	}
	else if (func_18() == 2)
	{
		iVar0 = Global_106070.f_10021.f_1[iParam0 /*11*/][2];
	}
	return iVar0;
}

int func_71(int iParam0)
{
	int iVar0;
	
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (func_70(iVar0) > 0)
			{
				if ((func_77(iParam0, iVar0) && func_73(iParam0, iVar0)) && func_72(iParam0, iVar0))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_72(int iParam0, int iParam1)
{
	if (unk_0x934175823EA79DA0(iParam0, Global_106070.f_10021.f_1[iParam1 /*11*/].f_10))
	{
		return 1;
	}
	return 0;
}

int func_73(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_74(iParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_74(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_76(iParam2);
	return unk_0x7710E77D1959B321(iParam0, iVar0) == func_75(iParam1, iParam2);
}

int func_75(int iParam0, int iParam1)
{
	if (func_69(iParam0))
	{
		return Global_106070.f_10021.f_1[iParam0 /*11*/].f_7[iParam1];
	}
	return -1;
}

int func_76(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_78(iParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_78(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_80(iParam2);
	return unk_0x774CB20D17C3FF03(iParam0, iVar0) == func_79(iParam1, iParam2);
}

int func_79(int iParam0, int iParam1)
{
	if (func_69(iParam0))
	{
		return Global_106070.f_10021.f_1[iParam0 /*11*/].f_4[iParam1];
	}
	return -1;
}

int func_80(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

void func_81(char* sParam0)
{
	if (!unk_0x2F8EAF18929E1E59(sParam0))
	{
		unk_0x8969D02DEDC106D2(sParam0);
	}
}

void func_82()
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (!unk_0x4915F4759304D5CF(iLocal_91))
	{
		if (unk_0x1095F403F52B42E1(iLocal_92, 0))
		{
			if (unk_0xE0FD180CD24C0B67(iLocal_91, iLocal_92, 0))
			{
				fVar0 = unk_0xEAA5CEF8875FEEED(iLocal_92);
				if (unk_0xF9D4EF1338E38AFB(iLocal_91, -272084098) == 7 || fVar0 <= 1f)
				{
					unk_0xDFCF5BB9A4E3B293(unk_0x8F474E419F56E48D(iLocal_92), &vVar2, &vVar1);
					vVar3 = { vVar1 - vVar2 };
					vVar3 = { vVar3 / Vector(2f, 2f, 2f) };
					vVar4 = { unk_0x3201284584C7CD83(iLocal_92, 0.2f, 0.2f, 0f) };
					vVar5 = { unk_0x3201284584C7CD83(iLocal_92, 0.2f, 0.2f, 0f) };
					vVar6 = { unk_0xE2BBD32891C18569(iLocal_90, true) };
					if (vdist(vVar6, vVar5) < vdist(vVar6, vVar4))
					{
						vVar4 = { vVar5 };
					}
					unk_0x2F89329397A277BC(&iLocal_95);
					unk_0x956B3CF461C0C1C9(0, vVar4.x, vVar4.y, vVar4.z, 1f, -1, 0.5f, 8192, 1193033728);
					unk_0x0177431263151C4E(0, iLocal_91, 0);
					unk_0xB3E1967E66494060(0, -1);
					unk_0x301F42EEE3C40328(iLocal_95);
					unk_0xE1072FA2FECBAD96(iLocal_90, iLocal_95);
					unk_0x3A95A0A3221D4208(&iLocal_95);
					func_477("prostitute ASKING OTHER FOR MONEY BY VEHICLE");
					iLocal_286 = 3;
				}
				else
				{
					func_477("WAITING FOR CUTSTOMER FINSIH TASK OR STOP");
				}
			}
			else
			{
				func_477("EXIT - OTHER OUT OF VEHICLE");
				func_90();
			}
		}
		else
		{
			func_477("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_477("EXIT - OTHER ped INJURED");
		func_90();
	}
}

void func_83()
{
	vector3 vVar0;
	
	if (!unk_0x4915F4759304D5CF(iLocal_91))
	{
		if (unk_0x1095F403F52B42E1(iLocal_92, 0))
		{
			if (unk_0xE0FD180CD24C0B67(iLocal_91, iLocal_92, 0))
			{
				if (func_85(&iLocal_92))
				{
					if (func_84(unk_0xE2BBD32891C18569(iLocal_91, true), 1106247680))
					{
						return;
					}
					vVar0 = { unk_0xE2BBD32891C18569(iLocal_90, true) };
					if (unk_0xA177613398FB538B(vVar0, &vVar0, 8, 1077936128, 0))
					{
						unk_0x7B19AF4B9DCA6BAB(iLocal_91, 1f);
						unk_0xF98BC2B4D0B8304E(iLocal_91, 0.2f);
						unk_0x3E1061046D82F070(iLocal_91, 0.05f);
						unk_0xACD687595DC10DD1(iLocal_91, iLocal_92, vVar0, 0f, 3, 360f, 1);
						unk_0x22DD1D053CFF9707(iLocal_91, iLocal_90, -1, 2048, 4);
						func_477("OTHER TOLD TO PULL OVER");
						iLocal_286 = 2;
					}
				}
				else
				{
					func_477("EXIT - Vehicle is not suitable");
					func_89(15);
				}
			}
			else
			{
				func_477("EXIT - OTHER OUT OF THE VEHICLE");
				func_89(15);
			}
		}
		else
		{
			func_477("EXIT - OTHER VEHICLE DEAD");
			func_89(15);
		}
	}
	else
	{
		func_477("EXIT - OTHER ped INJURED");
		func_89(15);
	}
}

bool func_84(vector3 vParam0, int iParam1)
{
	if (func_535())
	{
		return unk_0x7394AC2F67EAA91C(vParam0 - Vector(iParam1, iParam1, iParam1), vParam0 + Vector(iParam1, iParam1, iParam1));
	}
	return (unk_0xF0AB7FB93B889653(vParam0 - Vector(iParam1, iParam1, iParam1), vParam0 + Vector(iParam1, iParam1, iParam1)) || unk_0x7394AC2F67EAA91C(vParam0 - Vector(iParam1, iParam1, iParam1), vParam0 + Vector(iParam1, iParam1, iParam1)));
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1095F403F52B42E1(*iParam0, 0))
	{
		iVar0 = unk_0x8F474E419F56E48D(*iParam0);
		if (func_88(iVar0, 0) && func_87(*iParam0))
		{
			if (unk_0xD63FAD81FAF5E0CB(*iParam0) > 0)
			{
				iVar1 = unk_0xD9C213BBD19D77F0(*iParam0);
				if (((iVar1 == 0 && unk_0x588F5E48C78F1C73(*iParam0, 0, 0)) && (!unk_0x39FC9AD10285F177(*iParam0, 1) && !unk_0x39FC9AD10285F177(*iParam0, 0))) || unk_0xB0D49A1F9F054602(*iParam0, 0, 0) == iLocal_90)
				{
					if (func_41(*iParam0))
					{
						if (!func_476(iLocal_49, 32768))
						{
							func_468(&iLocal_49, 32768);
							if (!func_476(iLocal_49, 8))
							{
								unk_0x4069FC25AC4F1CFB(func_86());
								func_468(&iLocal_49, 8);
							}
						}
					}
					else
					{
						if (func_476(iLocal_49, 32768))
						{
							func_5(&iLocal_49, 32768);
						}
						if (func_476(iLocal_49, 8))
						{
							if (unk_0xD7AFBCBD45CE1D9D(func_86()))
							{
								unk_0x5F781B32FAE8FB91(func_86());
								func_5(&iLocal_49, 8);
							}
						}
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

char* func_86()
{
	return "clipset@veh@low@ps@female@base";
}

int func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		if (unk_0x857E88DF0C8EDB8B(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (unk_0x22D95AF01E737CA1(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, unk_0xDA155B8CE0D17A82(iParam0, iVar1, unk_0x22D95AF01E737CA1(iParam0, iVar1)), 16);
						iVar2 = unk_0xFEB6EEC0545AF7AA(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == unk_0xFEB6EEC0545AF7AA("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (unk_0x86CF814947084ADF(iParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case 1486715695:
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 1663892749:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
			case -208246612:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1910741341:
			case -1158091941:
			case -1834221859:
			case -1453479140:
			case -1954624455:
			case 1837596901:
			case 2013836096:
			case 1374303184:
			case 1419869906:
			case -526725184:
			case 1610027666:
			case -970031572:
			case 2071837743:
			case 1482989244:
			case 2130662788:
			case -1546132012:
			case 1410462333:
			case 1192783831:
			case -1304848574:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 954521785:
			case 584837381:
				return 1;
				break;
		}
		if (unk_0x86CF814947084ADF(iParam0) == 931866387 && unk_0x8F474E419F56E48D(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
	}
	return 0;
}

int func_88(int iParam0, bool bParam1)
{
	if ((((unk_0x71852D4EBD08275F(iParam0) || unk_0xCA8C103FCD316F89(iParam0)) || unk_0x7C197233F79C2CB8(iParam0)) || unk_0x289FBFAD3E416C48(iParam0)) || unk_0x8CE5E4632E631B03(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return 0;
		}
	}
	if (((((((((((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2")) || iParam0 == 886810209) || iParam0 == -212993243) || iParam0 == -121446169) || iParam0 == 1909189272) || iParam0 == 1617472902) || iParam0 == 1031562256) || iParam0 == 500482303) || iParam0 == 276065473) || iParam0 == 444994115)
	{
		return 0;
	}
	return 1;
}

void func_89(int iParam0)
{
	iLocal_286 = iParam0;
}

void func_90()
{
	if (func_535())
	{
		if (unk_0xB540EEBB14C48518(iLocal_90))
		{
			unk_0x9568B1B58F78FF36(iLocal_90);
			unk_0x53FF9BDD8529ACD2(iLocal_90);
		}
	}
	else
	{
		unk_0x9568B1B58F78FF36(iLocal_90);
		unk_0x53FF9BDD8529ACD2(iLocal_90);
	}
	iLocal_91 = 0;
	iLocal_92 = 0;
	unk_0x3F01127ECD227890(iLocal_90, func_61(iLocal_284), func_60(4), 2f, -2f, -1, 1, unk_0xF59B9063EDAC7451(0f, 0.9f), 0, 0, 0);
	func_89(0);
	iLocal_287 = 0;
	iLocal_285 = 1;
}

void func_91(var uParam0)
{
	if (!func_476(iLocal_49, 32))
	{
		iLocal_285 = 1;
	}
	if (iLocal_286 > 1 && iLocal_286 != 12)
	{
		if (!func_476(iLocal_49, 33554432))
		{
			if (func_535())
			{
				if (Global_1646080 || func_460())
				{
					func_459(0);
					func_468(&iLocal_49, 33554432);
				}
			}
			if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0)
			{
				if (func_476(iLocal_49, 1048576) || func_476(iLocal_49, 8192))
				{
					func_459(0);
					func_468(&iLocal_49, 33554432);
				}
			}
		}
	}
	switch (iLocal_286)
	{
		case 0:
			if (func_476(iLocal_49, 16384) || func_476(iLocal_49, 8388608))
			{
				if (!func_10(&iLocal_107))
				{
					func_458(&iLocal_107);
				}
				if (func_457(&iLocal_107, 25f))
				{
					func_5(&iLocal_49, 16384);
					func_5(&iLocal_49, 8388608);
				}
			}
			else if (iLocal_287 != 0 && !func_456("PROS_NO_MONEY"))
			{
				func_58(0);
				switch (func_18())
				{
					case 0:
						func_455(&uLocal_116, 0, unk_0xA19140A5C42D8715(), "MICHAEL", 0, 1);
						break;
					
					case 1:
						func_455(&uLocal_116, 0, unk_0xA19140A5C42D8715(), "FRANKLIN", 0, 1);
						break;
					
					case 2:
						func_455(&uLocal_116, 0, unk_0xA19140A5C42D8715(), "TREVOR", 0, 1);
						break;
				}
				iLocal_286 = 1;
			}
			else
			{
				func_454();
				iLocal_287 = 2;
			}
			break;
		
		case 1:
			func_441(uParam0);
			break;
		
		case 2:
			func_428(uParam0);
			break;
		
		case 3:
			func_427();
			break;
		
		case 4:
			func_415(uParam0);
			break;
		
		case 5:
			func_403();
			break;
		
		case 6:
			func_402(uParam0);
			break;
		
		case 7:
			func_381();
			func_373();
			break;
		
		case 8:
			func_370();
			unk_0xD481A812073CCF02(0, 80, 1);
			unk_0xD481A812073CCF02(0, 0, 1);
			unk_0xB8C9A9ECCE440A3A(unk_0xD4E735F4B6A956AC());
			func_224();
			func_223(uParam0);
			func_222(uParam0);
			func_221(uParam0);
			if (func_535())
			{
				func_218(uParam0);
			}
			break;
		
		case 9:
			func_215();
			break;
		
		case 10:
			func_212();
			break;
		
		case 11:
			unk_0xB8C9A9ECCE440A3A(unk_0xD4E735F4B6A956AC());
			unk_0xD481A812073CCF02(0, 0, 1);
			unk_0xD481A812073CCF02(0, 80, 1);
			func_118();
			func_223(uParam0);
			func_222(uParam0);
			func_221(uParam0);
			func_115(uParam0);
			if (func_535())
			{
				unk_0xB0D7019224A3A443(unk_0xA19140A5C42D8715(), 433, true);
				func_218(uParam0);
			}
			break;
		
		case 12:
			func_475();
			break;
		
		case 13:
			unk_0xD481A812073CCF02(0, 80, 1);
			unk_0xD481A812073CCF02(0, 0, 1);
			func_96();
			break;
		
		case 14:
			func_95();
			break;
		
		case 15:
			unk_0xD481A812073CCF02(0, 80, 1);
			unk_0xD481A812073CCF02(0, 0, 1);
			func_92(uParam0);
			break;
	}
}

void func_92(var uParam0)
{
	if (!func_535())
	{
		if (unk_0x411C28019DEA5CEF(unk_0xA19140A5C42D8715(), func_44(unk_0xA19140A5C42D8715(), 0, 0), func_94(1), 3))
		{
			return;
		}
	}
	if (func_476(iLocal_49, 16))
	{
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			unk_0x0AF8514426CE63A2(unk_0xD4E735F4B6A956AC(), 1);
			func_5(&iLocal_49, 16);
		}
	}
	if (func_476(iLocal_49, 2))
	{
		func_93(1);
		func_477("RESETTING INTERFACE FLAG TO FALSE - PROSTITUTE SCRIPT TERMINATING");
	}
	func_526();
	if (func_535())
	{
		func_521(uParam0);
	}
}

void func_93(int iParam0)
{
}

var func_94(bool bParam0)
{
	if (!func_476(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_39(6);
		}
		else
		{
			return func_39(7);
		}
	}
	if (bParam0)
	{
		return func_40(6);
	}
	return func_40(7);
}

void func_95()
{
	if (!unk_0x958D2327555FAEA5(unk_0xA19140A5C42D8715()))
	{
		if (iLocal_70 == 0)
		{
			if (func_476(iLocal_49, 134217728))
			{
				unk_0xC2C4AE9DB4A0BEF3(iLocal_90, 32768, false);
				unk_0xC2C4AE9DB4A0BEF3(iLocal_90, 196624, true);
			}
			unk_0xE85BD4A26C0DFACA(iLocal_90, "HOOKER_LEAVES_ANGRY", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_89(15);
		}
	}
}

void func_96()
{
	switch (iLocal_294)
	{
		case 0:
			if (!unk_0x958D2327555FAEA5(iLocal_90) || func_114(&iLocal_101) > 4f)
			{
				func_109(iLocal_90);
				if (func_70(func_71(iLocal_90)) == 1)
				{
					iLocal_294 = 2;
				}
				else
				{
					func_108(&iLocal_101);
					func_107("PROS_RESPONSE");
					iLocal_294 = 1;
				}
			}
			break;
		
		case 1:
			func_106();
			if (unk_0x958D2327555FAEA5(iLocal_90) || func_105())
			{
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 256);
				func_468(&iLocal_49, 2048);
			}
			else
			{
				if (!func_10(&iLocal_101))
				{
					func_34(&iLocal_101);
				}
				if (func_114(&iLocal_101) > 15f || iLocal_297 != 0)
				{
					unk_0x135C61E339DABBAC(1);
					func_104();
					iLocal_294 = 2;
				}
			}
			break;
		
		case 2:
			if (!func_105())
			{
				iLocal_294 = 3;
			}
			break;
		
		case 3:
			func_99(0);
			func_97();
			func_89(15);
			break;
	}
}

int func_97()
{
	if (func_98(0))
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

bool func_98(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

void func_99(bool bParam0)
{
	if (!unk_0x4915F4759304D5CF(iLocal_90))
	{
		if (unk_0x71364F510A1CB69F())
		{
			unk_0x680F17660351F21B(&iLocal_90);
		}
		else
		{
			func_100(iLocal_90, bParam0);
		}
	}
}

void func_100(int iParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	
	if (unk_0x411C28019DEA5CEF(unk_0xA19140A5C42D8715(), func_44(unk_0xA19140A5C42D8715(), 0, 0), func_103(1), 3))
	{
		unk_0x3F01127ECD227890(unk_0xA19140A5C42D8715(), func_44(unk_0xA19140A5C42D8715(), 0, 0), func_94(1), 4f, -8f, -1, 0, 0, 0, 0, 0);
	}
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		if (func_535())
		{
			if (unk_0xB540EEBB14C48518(iParam0))
			{
				unk_0x26ABEC1EEED61639(iParam0);
			}
		}
		else
		{
			unk_0x26ABEC1EEED61639(iParam0);
		}
		if (func_476(iLocal_49, 33554432))
		{
			unk_0x9568B1B58F78FF36(iParam0);
		}
		if (bParam1)
		{
			fVar1 = unk_0xF59B9063EDAC7451(0.1f, 2f);
			if (fVar1 <= 0.25f)
			{
				func_468(&iLocal_49, 134217728);
			}
		}
		if (func_476(iLocal_49, 134217728))
		{
			unk_0xC2C4AE9DB4A0BEF3(iParam0, 32768, true);
			unk_0x33B5487515BD13D5(iParam0, unk_0xA19140A5C42D8715(), 300f, -1, 1, 0);
		}
		else
		{
			unk_0xC2C4AE9DB4A0BEF3(iParam0, 196624, true);
			unk_0x3A95A0A3221D4208(&iVar0);
			unk_0x2F89329397A277BC(&iVar0);
			unk_0x00135C6A6DDEC2EA(0, 1);
			if (unk_0x5D7DFE2058701942(iParam0, 0))
			{
				if (!unk_0x097275D546C9735F(unk_0xCAEB6CE71A2C7212(iParam0, 0)))
				{
					func_102(iParam0, 1);
				}
				else
				{
					if (unk_0x411C28019DEA5CEF(iParam0, func_44(iParam0, 0, 0), func_103(0), 3))
					{
						if (iLocal_70 > 0)
						{
							unk_0x3F01127ECD227890(0, func_44(iParam0, 0, 0), func_94(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						else
						{
							unk_0x3F01127ECD227890(0, func_44(iParam0, 0, 0), func_101(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
					}
					func_102(iParam0, 1);
				}
			}
			unk_0x00135C6A6DDEC2EA(0, 0);
			unk_0x1CBE3F8ED90509B2(0, 1193033728, 0);
			unk_0x301F42EEE3C40328(iVar0);
			unk_0xE1072FA2FECBAD96(iParam0, iVar0);
			unk_0x3A95A0A3221D4208(&iVar0);
		}
		if (func_535())
		{
			if (unk_0x24B6018003B89ED4(iLocal_90))
			{
				if (unk_0x8F01F94322569B77(unk_0xF1764ACD94FCB3A3(iLocal_90)))
				{
					unk_0xD738221C247C8B71(iParam0, true);
				}
			}
		}
		else
		{
			unk_0xD738221C247C8B71(iParam0, true);
		}
	}
}

var func_101(bool bParam0)
{
	if (!func_476(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_39(4);
		}
		else
		{
			return func_39(5);
		}
	}
	if (bParam0)
	{
		return func_40(4);
	}
	return func_40(5);
}

void func_102(int iParam0, int iParam1)
{
	if (!unk_0x5860446BFB759B77(iParam0, unk_0xCAEB6CE71A2C7212(iParam0, 0), 0, 0, false))
	{
		unk_0xCB482EF95FAE4D73(0, 0, 16842752);
	}
	else
	{
		unk_0xCB482EF95FAE4D73(0, 0, iParam1);
	}
}

var func_103(bool bParam0)
{
	if (!func_476(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_39(2);
		}
		else
		{
			return func_39(3);
		}
	}
	if (bParam0)
	{
		return func_40(2);
	}
	return func_40(3);
}

void func_104()
{
	int iVar0;
	
	iVar0 = unk_0x22C775856F4633CA(0, 1000);
	if ((iVar0 <= 333 && iLocal_297 == 0) || iLocal_297 == 3)
	{
		unk_0xE85BD4A26C0DFACA(unk_0xA19140A5C42D8715(), "HOOKER_STORY_REVULSION_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (((iVar0 > 333 && iVar0 <= 666) && iLocal_297 == 0) || iLocal_297 == 1)
	{
		unk_0xE85BD4A26C0DFACA(unk_0xA19140A5C42D8715(), "HOOKER_STORY_SARCASTIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (iLocal_297 == 0 || iLocal_297 == 2)
	{
		unk_0xE85BD4A26C0DFACA(unk_0xA19140A5C42D8715(), "HOOKER_STORY_SYMPATHETIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_105()
{
	if (Global_15822 != 0 || unk_0x904275961B875DEB())
	{
		return 1;
	}
	return 0;
}

void func_106()
{
	if (iLocal_297 == 0)
	{
		unk_0xB9514DB95C310944(false);
		unk_0xD481A812073CCF02(0, 99, 1);
		unk_0xD481A812073CCF02(0, 76, 1);
		unk_0xD481A812073CCF02(0, 80, 1);
		unk_0x9EA8CBEA7355649E(2, 203);
		unk_0x9EA8CBEA7355649E(2, 201);
		unk_0x9EA8CBEA7355649E(2, 202);
		if (unk_0x4E6A396CA4DB68F6(2, 203))
		{
			unk_0x135C61E339DABBAC(1);
			unk_0xE11F00B4AC919F45(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_297 = 3;
		}
		else if (unk_0x4E6A396CA4DB68F6(2, 201))
		{
			unk_0x135C61E339DABBAC(1);
			unk_0xE11F00B4AC919F45(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_297 = 1;
		}
		else if (unk_0x4E6A396CA4DB68F6(2, 202))
		{
			unk_0x135C61E339DABBAC(1);
			unk_0xE11F00B4AC919F45(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_297 = 2;
		}
	}
}

void func_107(char* sParam0)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 1, true, -1);
}

void func_108(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

void func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 > -1)
	{
		if (unk_0x958D2327555FAEA5(iParam0))
		{
			unk_0x68995A99EFE15C73(iParam0);
		}
		if (!unk_0x958D2327555FAEA5(iParam0))
		{
			func_111(iParam0);
			func_110(iVar0);
		}
	}
}

void func_110(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_70(iParam0);
	if (iVar0 < 6)
	{
		StringCopy(&vVar1, "pbpro_H", 24);
		StringIntConCat(&vVar1, iParam0 + 1, 24);
		StringConCat(&vVar1, "V", 24);
		StringIntConCat(&vVar1, iVar0, 24);
		func_11(&uLocal_116, "pbproau", &vVar1, 4, 0, 0, 0);
	}
}

void func_111(int iParam0)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 > -1)
	{
		func_113(&uLocal_116, 4);
		func_455(&uLocal_116, 6, iParam0, func_112(iVar0), 0, 1);
	}
}

char* func_112(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "Hooker1";
			break;
		
		case 1:
			sVar0 = "Hooker2";
			break;
		
		case 2:
			sVar0 = "Hooker3";
			break;
		
		case 3:
			sVar0 = "Hooker4";
			break;
		
		case 4:
			sVar0 = "Hooker5";
			break;
		
		case 5:
			sVar0 = "Hooker6";
			break;
		
		case 6:
			sVar0 = "Hooker7";
			break;
		
		case 7:
			sVar0 = "Hooker8";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

void func_113(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

float func_114(int iParam0)
{
	if (func_10(iParam0))
	{
		if (func_9(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_8(unk_0x05EFB6A616B6FADE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_115(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	if (!func_535())
	{
		return;
	}
	bVar0 = false;
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			iVar1 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
			if (unk_0xDC5D81351D6A4DDB(iVar1))
			{
				if (unk_0xB0D49A1F9F054602(iVar1, -1, 0) != unk_0xA19140A5C42D8715())
				{
					bVar0 = true;
				}
				if (unk_0xB0D49A1F9F054602(iVar1, 0, 0) != iLocal_90)
				{
					bVar0 = true;
				}
				if (unk_0xD9C213BBD19D77F0(iVar1) > 2)
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					func_116(0);
					unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
					func_526();
					func_521(uParam0);
				}
			}
		}
	}
}

void func_116(bool bParam0)
{
	vector3 vVar0;
	
	if (bParam0)
	{
		vVar0 = { unk_0x288B716F47E9BBBC(iLocal_93, 2) };
		unk_0xD87B76260C547F31(180f);
		unk_0xAA32DD4848CF93E0((-5.5f - vVar0.x), 1065353216);
	}
	unk_0x8E88E73F74A9FF79(false, false, 3000, 1, 0, 0);
	func_117(&(Local_300[0 /*7*/]));
	func_117(&(Local_300[3 /*7*/]));
	func_117(&(Local_300[2 /*7*/]));
	func_117(&(Local_300[1 /*7*/]));
	if (func_456("PROS_CAM_TOG") || func_456("PROS_CAM_OC"))
	{
		unk_0x135C61E339DABBAC(1);
	}
}

void func_117(var uParam0)
{
	if (unk_0x37B568B777BC65F9(*uParam0))
	{
		unk_0x8E88E73F74A9FF79(false, false, 3000, 1, 0, 0);
		if (unk_0xC3553172354FFB69(*uParam0))
		{
			unk_0x930701157A4B9374(*uParam0, false);
		}
		unk_0x77F0486CE0E598D5(*uParam0, 0);
	}
}

void func_118()
{
	if (unk_0x1095F403F52B42E1(iLocal_93, 0))
	{
		unk_0x7CE8BDE02895D2F9(iLocal_93, 1);
	}
	if (iLocal_293 != 5)
	{
		if ((((((!func_211(iLocal_74) && !func_211(iLocal_75)) && !func_211(iLocal_76)) && !func_211(iLocal_77)) && !func_211(iLocal_78)) && !func_211(iLocal_79)) && !func_211(iLocal_80))
		{
			if (!unk_0x8A29BBDF4603E52B(iLocal_90) || unk_0x80C8B831B972D6A0(unk_0xA19140A5C42D8715()))
			{
				iLocal_293 = 5;
			}
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				if (!unk_0x1095F403F52B42E1(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 0))
				{
					iLocal_293 = 5;
				}
			}
		}
	}
	unk_0xD8C147DA332E7F06(2);
	unk_0xD481A812073CCF02(2, 19, 1);
	unk_0xD481A812073CCF02(2, 37, 1);
	func_206(0);
	switch (iLocal_293)
	{
		case 0:
			if (func_535())
			{
				func_203(1088, -1);
			}
			func_34(&iLocal_113);
			func_202(func_43(), func_476(iLocal_49, 32768));
			iLocal_293 = 1;
			func_477("Moving to PROSTITUTE_SERVICE_LOOPING");
			break;
		
		case 1:
			unk_0xD481A812073CCF02(0, 48, 1);
			unk_0xD481A812073CCF02(0, 0, 1);
			func_195();
			func_188();
			func_127();
			if (!func_42(0, 1))
			{
				func_126();
			}
			if (func_7(&iLocal_113) > 1f)
			{
				if (func_125())
				{
					func_5(&iLocal_49, 512);
					iLocal_296 = 0;
					func_124("PROSTITUTES_SOLICIT_SCENE");
					func_124("PROSTITUTES_SEX_SCENE");
					func_124("PROSTITUTES_BJ_SCENE");
					func_124("PROSTITUTES_BJ_SPEECH_SCENE");
					if (iLocal_70 >= 3)
					{
						func_123();
						iLocal_293 = 5;
					}
					else
					{
						func_122();
						unk_0x4DBE174154203AFA(iLocal_48);
						iLocal_293 = 3;
					}
				}
			}
			break;
		
		case 2:
			unk_0xD481A812073CCF02(0, 48, 1);
			func_195();
			if (!func_42(0, 1))
			{
				func_126();
			}
			if (func_42(0, 1))
			{
				unk_0xD481A812073CCF02(0, 0, 1);
			}
			if (func_7(&iLocal_113) > 1f)
			{
				if (func_125())
				{
					func_5(&iLocal_49, 512);
					iLocal_296 = 0;
					func_124("PROSTITUTES_SOLICIT_SCENE");
					func_124("PROSTITUTES_SEX_SCENE");
					func_124("PROSTITUTES_BJ_SCENE");
					func_124("PROSTITUTES_BJ_SPEECH_SCENE");
					iLocal_70 = 3;
					if (iLocal_70 >= 3)
					{
						func_123();
						iLocal_293 = 5;
						func_108(&iLocal_98);
					}
				}
			}
			break;
		
		case 3:
			unk_0xD481A812073CCF02(0, 0, 1);
			if (!unk_0x958D2327555FAEA5(iLocal_90))
			{
				func_124("PROSTITUTES_SOLICIT_SCENE");
				func_124("PROSTITUTES_BJ_SPEECH_SCENE");
				iLocal_292 = 0;
				iLocal_293 = 0;
				func_121();
				unk_0x4DBE174154203AFA(iLocal_48);
				iLocal_286 = 8;
			}
			break;
		
		case 5:
			unk_0xD481A812073CCF02(0, 0, 1);
			if (!unk_0x958D2327555FAEA5(iLocal_90))
			{
				if (iLocal_70 > 0)
				{
					if (func_120(iLocal_90))
					{
						func_119();
					}
					else
					{
						func_459(0);
					}
				}
				else
				{
					func_477("PROSTITUTE CANCEL PROS NO LONGER IN VEHICLE");
					func_459(1);
				}
			}
			break;
	}
}

void func_119()
{
	if (unk_0x4915F4759304D5CF(iLocal_90))
	{
		return;
	}
	if (!unk_0x958D2327555FAEA5(unk_0xA19140A5C42D8715()))
	{
		if (iLocal_70 == 0)
		{
			unk_0xE85BD4A26C0DFACA(unk_0xA19140A5C42D8715(), "HOOKER_DECLINE_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else if (func_120(iLocal_90))
		{
			func_34(&iLocal_101);
			unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 768);
			func_468(&iLocal_49, 2048);
			iLocal_286 = 13;
		}
	}
}

bool func_120(int iParam0)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return func_70(iVar0) < 6;
}

void func_121()
{
	Global_2437022.f_1151.f_10 = 1;
}

void func_122()
{
	if (unk_0x4915F4759304D5CF(iLocal_90))
	{
		return;
	}
	if (!unk_0x958D2327555FAEA5(iLocal_90))
	{
		unk_0xE85BD4A26C0DFACA(iLocal_90, "SEX_FINISHED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_123()
{
	if (unk_0x4915F4759304D5CF(iLocal_90))
	{
		return;
	}
	if (!unk_0x958D2327555FAEA5(iLocal_90))
	{
		unk_0xE85BD4A26C0DFACA(iLocal_90, "HOOKER_HAD_ENOUGH", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_124(char* sParam0)
{
	if (unk_0x2F8EAF18929E1E59(sParam0))
	{
		unk_0x5AD7D03C214BDA88(sParam0);
	}
}

int func_125()
{
	if (iLocal_296 == 6)
	{
		return 1;
	}
	return 0;
}

void func_126()
{
	unk_0xCAFB88D6C0B52307();
	unk_0x79117E5CC1A90AF9();
}

void func_127()
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	if (unk_0x429D45A6C6520026(func_44(unk_0xA19140A5C42D8715(), 0, 0)))
	{
		return;
	}
	if (!unk_0x39C2D9AB77873F84(func_44(unk_0xA19140A5C42D8715(), 0, 0)))
	{
		return;
	}
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), false);
	}
	bVar1 = func_43();
	bVar2 = func_476(iLocal_49, 32768);
	if (!func_42(0, 1))
	{
		func_182(&iLocal_81);
	}
	unk_0xD481A812073CCF02(2, 19, 1);
	unk_0xD481A812073CCF02(2, 37, 1);
	func_181(23, 1);
	switch (iLocal_296)
	{
		case 0:
			func_5(&iLocal_49, 256);
			if (!func_42(0, 1))
			{
				func_176(&iLocal_81);
			}
			func_175(iLocal_90, 0);
			if (!func_535())
			{
				func_174(bVar1, bVar2);
			}
			func_173(bVar1, bVar2);
			iLocal_296 = 1;
			break;
		
		case 1:
			func_172(iLocal_74);
			if (func_211(iLocal_75))
			{
				if (!func_476(iLocal_50, 4))
				{
					if (!func_535())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_75) >= fVar0)
					{
						func_468(&iLocal_50, 4);
					}
				}
			}
			if (func_211(iLocal_74))
			{
				if (!func_476(iLocal_50, 8))
				{
					if (!func_535())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_74) >= fVar0)
					{
						func_468(&iLocal_50, 8);
					}
				}
			}
			if (func_476(iLocal_50, 4) && func_476(iLocal_50, 8))
			{
				if (!func_535())
				{
					func_170(bVar1, bVar2);
				}
				func_169(bVar1, bVar2);
				iLocal_296 = 2;
			}
			break;
		
		case 2:
			func_172(iLocal_76);
			if (func_211(iLocal_76))
			{
				if (!func_476(iLocal_50, 16))
				{
					if (!func_535())
					{
						fVar0 = 0.98f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_76) >= fVar0)
					{
						func_468(&iLocal_50, 16);
					}
				}
			}
			if (func_476(iLocal_50, 16))
			{
				if (!func_535())
				{
					func_168(bVar1, bVar2);
				}
				func_167(bVar1, bVar2);
				iLocal_296 = 3;
			}
			break;
		
		case 3:
			func_172(iLocal_77);
			if (func_211(iLocal_77))
			{
				if (!func_476(iLocal_50, 64))
				{
					if (!func_476(iLocal_49, 16777216))
					{
						if (!func_535())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_171(iLocal_77) >= fVar0)
						{
							func_468(&iLocal_49, 16777216);
							iLocal_71++;
						}
					}
					else
					{
						if (!func_535())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_171(iLocal_77) < fVar0)
						{
							func_5(&iLocal_49, 16777216);
						}
					}
					if (iLocal_71 >= func_160(func_535(), func_166(), func_161()))
					{
						func_468(&iLocal_50, 64);
						func_5(&iLocal_49, 16777216);
					}
				}
			}
			else if (!func_476(iLocal_50, 64))
			{
				func_468(&iLocal_50, 64);
			}
			if (func_476(iLocal_50, 64))
			{
				if (!func_535())
				{
					func_159(bVar1, bVar2);
				}
				func_158(bVar1, bVar2);
				iLocal_296 = 4;
			}
			break;
		
		case 4:
			func_172(iLocal_78);
			if (func_211(iLocal_78))
			{
				if (!func_476(iLocal_50, 256))
				{
					if (!func_535())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_78) >= fVar0)
					{
						func_468(&iLocal_50, 256);
					}
				}
			}
			else if (!func_476(iLocal_50, 256))
			{
				func_468(&iLocal_50, 256);
			}
			if (func_476(iLocal_50, 256))
			{
				if (!func_535())
				{
					func_152(bVar1, bVar2);
				}
				func_150(bVar1, bVar2);
				iLocal_296 = 5;
			}
			break;
		
		case 5:
			func_172(iLocal_79);
			if (func_211(iLocal_79))
			{
				if (!func_476(iLocal_50, 1024))
				{
					if (!func_535())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_79) >= fVar0)
					{
						func_468(&iLocal_50, 1024);
					}
				}
			}
			else if (!func_476(iLocal_50, 1024))
			{
				func_468(&iLocal_50, 1024);
			}
			if (func_211(iLocal_80))
			{
				if (!func_476(iLocal_50, 2048))
				{
					if (!func_535())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_80) >= fVar0)
					{
						func_468(&iLocal_50, 2048);
					}
				}
			}
			else if (!func_476(iLocal_50, 2048))
			{
				func_468(&iLocal_50, 2048);
			}
			if (func_476(iLocal_50, 1024) && func_476(iLocal_50, 2048))
			{
				func_175(iLocal_90, 0);
				unk_0x3F01127ECD227890(iLocal_90, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_38(iLocal_296, 1, bVar1, bVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
				func_175(unk_0xA19140A5C42D8715(), -1);
				unk_0x3F01127ECD227890(unk_0xA19140A5C42D8715(), func_44(unk_0xA19140A5C42D8715(), 0, 0), func_38(iLocal_296, 0, bVar1, bVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
				func_116(1);
				iLocal_50 = 0;
				iLocal_71 = 0;
				iLocal_59 = 0;
				func_128();
				iLocal_296 = 6;
			}
			break;
	}
}

void func_128()
{
	int iVar0;
	
	if (iLocal_70 == 0 && !func_535())
	{
		if (func_21(unk_0xA19140A5C42D8715()) == 0)
		{
			func_149();
		}
		func_144(296, 0, 0);
		iVar0 = func_71(iLocal_90);
		if (iVar0 > -1)
		{
			func_143(iVar0);
		}
		else
		{
			func_135(iLocal_90);
		}
	}
	iLocal_70++;
	func_129();
}

void func_129()
{
	switch (func_21(unk_0xA19140A5C42D8715()))
	{
		case 0:
			Global_106070.f_10021.f_90[0]++;
			func_130(0, 1, 1);
			break;
		
		case 1:
			Global_106070.f_10021.f_90[1]++;
			func_130(1, 1, 1);
			break;
		
		case 2:
			Global_106070.f_10021.f_90[2]++;
			func_130(2, 1, 1);
			break;
		
		case 3:
			func_130(3, 1, 1);
			break;
	}
}

void func_130(int iParam0, int iParam1, int iParam2)
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
				iVar0 = func_134(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_131(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
}

int func_132(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_133();
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

int func_133()
{
	return Global_1312736;
}

int func_134(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_132(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_135(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (unk_0x7112137033807390(iParam0, 0))
	{
		return;
	}
	iVar0 = func_142();
	if (iVar0 == -1)
	{
		return;
	}
	func_143(iVar0);
	unk_0xC4C22DDB26872744(iParam0, func_140(iVar0));
	Global_106070.f_10021.f_1[iVar0 /*11*/].f_10 = unk_0x8F474E419F56E48D(iParam0);
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar1 = iVar2;
		uVar3 = func_139(iParam0, iVar1);
		func_138(iVar0, iVar1, uVar3);
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar4 = iVar2;
		uVar3 = func_137(iParam0, iVar4);
		func_136(iVar0, iVar4, uVar3);
		iVar2++;
	}
}

void func_136(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 > -1)
	{
		Global_106070.f_10021.f_1[iParam0 /*11*/].f_7[iParam1] = uParam2;
	}
}

int func_137(int iParam0, int iParam1)
{
	return unk_0x7710E77D1959B321(iParam0, func_76(iParam1));
}

void func_138(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 > -1)
	{
		Global_106070.f_10021.f_1[iParam0 /*11*/].f_4[iParam1] = uParam2;
	}
}

int func_139(int iParam0, int iParam1)
{
	return unk_0x774CB20D17C3FF03(iParam0, func_80(iParam1));
}

var func_140(int iParam0)
{
	return func_141(iParam0);
}

char* func_141(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "UPRO BABS";
			break;
		
		case 1:
			sVar0 = "UPRO DANA";
			break;
		
		case 2:
			sVar0 = "UPRO LIZZIE";
			break;
		
		case 3:
			sVar0 = "UPRO AMANDA";
			break;
		
		case 4:
			sVar0 = "UPRO ASHLEY";
			break;
		
		case 5:
			sVar0 = "UPRO KRISTEN";
			break;
		
		case 6:
			sVar0 = "UPRO SASHA";
			break;
		
		case 7:
			sVar0 = "UPRO JACQUELINE";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

int func_142()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_70(iVar0) == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_143(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_18() == 0)
		{
			Global_106070.f_10021.f_1[iParam0 /*11*/][0]++;
		}
		else if (func_18() == 1)
		{
			Global_106070.f_10021.f_1[iParam0 /*11*/][1]++;
		}
		else if (func_18() == 2)
		{
			Global_106070.f_10021.f_1[iParam0 /*11*/][2]++;
		}
	}
}

void func_144(int iParam0, int iParam1, int iParam2)
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
		func_148((891 + iParam0), 1, -1, 1);
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
		Global_106070.f_10166[iParam0 /*12*/].f_10 = iParam1;
		Global_106070.f_10166[iParam0 /*12*/].f_11 = iParam2;
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
		func_145();
	}
}

void func_145()
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
		func_147(13, floor(Global_106070.f_10166.f_3853));
	}
	if (!unk_0xC253B4B0BD2DE4DD())
	{
		if (!Global_71205)
		{
			if (func_146() == 2 == 0 && !unk_0x4C9BACA8D249CB13())
			{
				if (unk_0x4F3E20635369D110())
				{
					Global_105804 = 0;
				}
				if (!Global_56181)
				{
					func_97();
				}
			}
		}
	}
}

int func_146()
{
	return Global_25459;
}

int func_147(int iParam0, int iParam1)
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

int func_148(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_133();
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

void func_149()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_89789[iVar0] = Global_89789[iVar0 + 1];
		}
		else
		{
			Global_89789[iVar0] = unk_0xFD34717937104F1C();
		}
		iVar0++;
	}
}

void func_150(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_535())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_90, iLocal_79, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_38(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xA19140A5C42D8715(), iLocal_80, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_38(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_151(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (func_535())
	{
		unk_0x5A466A920BB5D382(iParam1);
	}
	else
	{
		unk_0xE5565DEAABF9D588(iParam0, iParam1, sParam2, sParam3, fParam4, fParam5, iParam6, iParam7, iParam8, iParam9);
	}
}

void func_152(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_535())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_79, 1, 0, 0);
	func_153(iLocal_90, iLocal_79, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_38(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_154(&iLocal_80, 0, 0, 0);
	func_153(unk_0xA19140A5C42D8715(), iLocal_80, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_38(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

void func_153(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (func_535())
	{
		unk_0xEA3AB11BD7C55DFF(iParam0, iParam1, sParam2, sParam3, fParam4, fParam5, iParam6, iParam7, iParam8, 0);
	}
}

void func_154(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	
	vVar0 = { 0f, 0f, 0f };
	*iParam0 = func_157(vVar0, 0f, 0f, 0f, bParam3, bParam2, 2);
	if (iParam1 == 0)
	{
		func_156(*iParam0, iLocal_93, unk_0x4F9AEAB2CC029A5C(iLocal_93, "seat_dside_f"));
	}
	else if (iParam1 == 1)
	{
		func_156(*iParam0, iLocal_93, unk_0x4F9AEAB2CC029A5C(iLocal_93, "seat_pside_f"));
	}
	func_155(*iParam0, vVar0, 0f, 0f, 0f, 0);
}

void func_155(int iParam0, vector3 vParam1, vector3 vParam2, int iParam3)
{
	if (!func_535())
	{
		unk_0x0BC3D6353E611561(iParam0, vParam1, vParam2, iParam3);
	}
}

void func_156(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x7112137033807390(iParam1, 0))
	{
		return;
	}
	if (func_535())
	{
		unk_0x44651DC12AB6C225(iParam0, iParam1, iParam2);
	}
	else
	{
		unk_0x460F6BE568AFE564(iParam0, iParam1, iParam2);
	}
}

int func_157(vector3 vParam0, vector3 vParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (func_535())
	{
		if (bParam2)
		{
			bParam3 = false;
		}
		iVar0 = unk_0xDFA309EC878D6A65(vParam0, vParam1, iParam4, bParam2, bParam3, 1065353216, 0, 1065353216);
	}
	else
	{
		iVar0 = unk_0x70788DC3D80C9DEB(vParam0, vParam1, iParam4);
		unk_0x52CEAE2B7DAC257E(iVar0, bParam2);
		unk_0xDA16255FBFC16B28(iVar0, bParam3);
	}
	return iVar0;
}

void func_158(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_535())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_90, iLocal_78, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_38(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xA19140A5C42D8715(), iLocal_78, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_38(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_159(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_535())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_78, 0, 0, 1);
	func_153(iLocal_90, iLocal_78, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_38(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_153(unk_0xA19140A5C42D8715(), iLocal_78, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_38(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

int func_160(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_161()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_162();
	if (iVar0 < 48)
	{
		iVar1 = 2;
	}
	else if (iVar0 >= 48 && iVar0 < 85)
	{
		iVar1 = 3;
	}
	else
	{
		iVar1 = 4;
	}
	return iVar1;
}

int func_162()
{
	if (func_535())
	{
		return func_134(65, -1, 0);
	}
	return func_163(func_21(unk_0xA19140A5C42D8715()), 1);
}

var func_163(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_164(iParam0, iParam1);
	unk_0x2AD48F3CEBA882E9(iVar1, &uVar0, -1);
	return uVar0;
}

var func_164(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	func_165(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_165(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

int func_166()
{
	int iVar0;
	
	if (iLocal_288 != 0)
	{
		if (iLocal_59 < 2)
		{
			iVar0 = 3;
		}
		else if (iLocal_59 == 2)
		{
			iVar0 = 4;
		}
		else if (iLocal_59 == 3)
		{
			iVar0 = 5;
		}
		else
		{
			iVar0 = 6;
		}
	}
	else if (iLocal_59 < 3)
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	return iVar0;
}

void func_167(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_535())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_90, iLocal_77, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_38(2, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xA19140A5C42D8715(), iLocal_77, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_38(2, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_168(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_535())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_77, 0, 1, 0);
	func_153(iLocal_90, iLocal_77, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_38(2, 1, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
	func_153(unk_0xA19140A5C42D8715(), iLocal_77, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_38(2, 0, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
}

void func_169(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_535())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_90, iLocal_76, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_38(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xA19140A5C42D8715(), iLocal_76, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_38(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_170(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_535())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_76, 0, 0, 1);
	func_153(iLocal_90, iLocal_76, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_38(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_153(unk_0xA19140A5C42D8715(), iLocal_76, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_38(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

float func_171(int iParam0)
{
	float fVar0;
	
	if (func_535())
	{
		fVar0 = unk_0x33CECDD9E141E18E(unk_0x2B3422BC14FE3213(iParam0));
	}
	else
	{
		fVar0 = unk_0x33CECDD9E141E18E(iParam0);
	}
	return fVar0;
}

void func_172(int iParam0)
{
	if (!func_211(iParam0))
	{
		return;
	}
}

void func_173(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_535())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_90, iLocal_74, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_38(0, 1, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
	func_151(unk_0xA19140A5C42D8715(), iLocal_75, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_38(0, 0, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
}

void func_174(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_535())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_74, 1, 0, 1);
	func_153(iLocal_90, iLocal_74, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_38(0, 1, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
	func_154(&iLocal_75, 0, 0, 1);
	func_153(unk_0xA19140A5C42D8715(), iLocal_75, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_38(0, 0, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
}

void func_175(int iParam0, int iParam1)
{
	if (!unk_0xE0FD180CD24C0B67(iParam0, iLocal_93, 0))
	{
		if (!func_535())
		{
			unk_0x692D5500D82E4F5D(iParam0, iLocal_93, iParam1);
		}
		else if (!unk_0xE0FD180CD24C0B67(iParam0, iLocal_93, 0))
		{
			unk_0xA2EBCD9385E56019(iParam0, iLocal_93, -1, iParam1, 2f, 16, 0);
		}
	}
}

void func_176(int iParam0)
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	uVar0 = func_178(func_179(2), unk_0xB31A4B66C16032CC(iLocal_93, unk_0x4F9AEAB2CC029A5C(iLocal_93, "windscreen")));
	uVar1 = func_178(func_179(1), unk_0xB31A4B66C16032CC(iLocal_93, unk_0x4F9AEAB2CC029A5C(iLocal_93, "windscreen")));
	vVar2 = { unk_0x288B716F47E9BBBC(iLocal_93, 2) };
	fVar3 = unk_0x552C823E1D2A019C(iLocal_93);
	if (fVar3 >= 180f)
	{
		fVar4 = (fVar3 - 180f);
	}
	else
	{
		fVar4 = (fVar3 + 180f);
	}
	fVar5 = (-7f - vVar2.y);
	fVar6 = (-5f - vVar2.x);
	fVar7 = (-2.5f + vVar2.x);
	fVar8 = ((0f - (0.7f * vVar2.x)) + (0.3f * vVar2.y));
	if (!unk_0x37B568B777BC65F9(Local_300[2 /*7*/]))
	{
		func_177(&(Local_300[2 /*7*/]), func_179(2), fVar5, vVar2.x, uVar0, 50f);
	}
	if (!unk_0x37B568B777BC65F9(Local_300[1 /*7*/]))
	{
		func_177(&(Local_300[1 /*7*/]), func_179(1), fVar8, -vVar2.y, uVar1, 37.3f);
	}
	if (!unk_0x37B568B777BC65F9(Local_300[0 /*7*/]))
	{
		func_177(&(Local_300[0 /*7*/]), func_179(0), fVar6, -vVar2.y, fVar4, 50f);
	}
	if (!unk_0x37B568B777BC65F9(Local_300[3 /*7*/]))
	{
		func_177(&(Local_300[3 /*7*/]), func_179(3), fVar7, vVar2.y, fVar3, 45f);
	}
	unk_0x8E88E73F74A9FF79(true, false, 3000, 1, 0, 0);
	unk_0x930701157A4B9374(Local_300[*iParam0 /*7*/], true);
}

void func_177(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	uParam0->f_1 = { vParam2 };
	uParam0->f_4 = { 0f, 0f, 0f };
	*uParam0 = unk_0x57FC10C74CC15F22("DEFAULT_SCRIPTED_CAMERA", false);
	unk_0x930701157A4B9374(*uParam0, true);
	unk_0x1D7183E3760DB4E5(*uParam0, vParam1, uParam0->f_1, fParam3, 0, 1, 1, 2);
	unk_0x8E88E73F74A9FF79(true, false, 3000, 1, 0, 0);
}

float func_178(struct<2> Param0, var uParam1, struct<2> Param2, float fParam3)
{
	return unk_0x0C1B8F3F6EFDC58B((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

Vector3 func_179(int iParam0)
{
	vector3 vVar0;
	var uVar1;
	struct<2> Var2;
	vector3 vVar3;
	vector3 vVar4;
	
	if (!unk_0x7112137033807390(iLocal_90, 0))
	{
	}
	if (!unk_0x1095F403F52B42E1(iLocal_93, 0))
	{
	}
	unk_0xDFCF5BB9A4E3B293(unk_0x8F474E419F56E48D(iLocal_93), &uVar1, &Var2);
	vVar3 = { unk_0xB31A4B66C16032CC(iLocal_93, unk_0x4F9AEAB2CC029A5C(iLocal_93, "windscreen")) };
	vVar4 = { unk_0x61141C81AF57CBDC(iLocal_93, vVar3) };
	switch (iParam0)
	{
		case 0:
			vVar0 = { unk_0x3201284584C7CD83(iLocal_93, 0f, (Var2.f_1 + 1.4f), vVar4.z) };
			break;
		
		case 1:
			vVar0 = { unk_0x3201284584C7CD83(iLocal_93, 1.5f, (Var2.f_1 + 1.2f), (vVar4.z - 0.1f)) };
			break;
		
		case 2:
			vVar0 = { unk_0x3201284584C7CD83(iLocal_93, -3.7f, 0.7f, vVar4.z) };
			break;
		
		case 3:
			vVar0 = { func_180() };
			break;
	}
	return vVar0;
}

Vector3 func_180()
{
	vector3 vVar0;
	vector3 vVar1;
	struct<2> Var2;
	var uVar3;
	
	unk_0xDFCF5BB9A4E3B293(unk_0x8F474E419F56E48D(iLocal_93), &Var2, &uVar3);
	vVar0 = { unk_0xB31A4B66C16032CC(iLocal_93, unk_0x4F9AEAB2CC029A5C(iLocal_93, "windscreen")) };
	vVar1 = { unk_0x61141C81AF57CBDC(iLocal_93, vVar0) };
	vVar1.z = (vVar1.z + 0.09f);
	Var2.f_1 = (Var2.f_1 - 1f);
	return unk_0x3201284584C7CD83(iLocal_93, 0f, -unk_0x69C0BB7D03EE045D(Var2.f_1), vVar1.z);
}

void func_181(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x2BCFB39E86340DAA(&Global_25704, iParam0);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_25704, iParam0);
	}
}

void func_182(int iParam0)
{
	if (!unk_0x37B568B777BC65F9(Local_300[*iParam0 /*7*/]))
	{
		return;
	}
	if (!unk_0xD8AE52C8418BED79(Local_300[*iParam0 /*7*/]))
	{
		return;
	}
	unk_0xBC1542DDC31676C2(Local_300[*iParam0 /*7*/], "HAND_SHAKE", 0.25f);
	if (!unk_0xD1ABB20CFF127CCC())
	{
		func_185(&(Local_300[*iParam0 /*7*/]));
	}
	if (func_184())
	{
		if (!func_535())
		{
			if (!func_456("PROS_CAM_OC"))
			{
				func_107("PROS_CAM_OC");
			}
		}
	}
	else
	{
		if (!func_535())
		{
			if (!func_456("PROS_CAM_TOG"))
			{
				func_107("PROS_CAM_TOG");
			}
		}
		if ((unk_0x53E955948D35BDB5(2, 0) && !unk_0xD1ABB20CFF127CCC()) && !func_42(0, 1))
		{
			func_183(iParam0);
			unk_0x930701157A4B9374(Local_300[*iParam0 /*7*/], true);
		}
	}
}

void func_183(var uParam0)
{
	if (*uParam0 < 3)
	{
		*uParam0++;
	}
	else if (*uParam0 == 3)
	{
		*uParam0 = 0;
	}
	if (*uParam0 == 0)
	{
		if (func_476(iLocal_51, 16))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 1)
	{
		if (func_476(iLocal_51, 128))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 2)
	{
		if (func_476(iLocal_51, 64))
		{
			*uParam0++;
		}
	}
}

int func_184()
{
	if ((func_476(iLocal_51, 16) && func_476(iLocal_51, 64)) && func_476(iLocal_51, 128))
	{
		return 1;
	}
	return 0;
}

void func_185(var uParam0)
{
	var uVar0[4];
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	
	unk_0xDB3170D9CA83AF72(2);
	func_187(&(uVar0[0]), &(uVar0[1]), &(uVar0[2]), &(uVar0[3]), 0, 0);
	vVar1.z = (-(to_float(uVar0[2]) / 127f) * 10f);
	vVar1.y = ((-vVar1.z * 3f) / 10f);
	if (unk_0x8300DAA4A7C3C9F8())
	{
		vVar1.x = ((to_float(uVar0[3]) / 127f) * 10f);
	}
	else
	{
		vVar1.x = (-(to_float(uVar0[3]) / 127f) * 10f);
	}
	fVar2 = (30f * timestep());
	vVar3 = { vVar1 };
	if (unk_0x0B9F814BC8D14042(0))
	{
		uParam0->f_4 = func_186((uParam0->f_4 + (vVar3.x * 0.05f)), -3f, 3f);
		uParam0->f_4.f_1 = func_186((uParam0->f_4.f_1 + (vVar3.y * 0.05f)), -3f, 3f);
		uParam0->f_4.f_2 = func_186((uParam0->f_4.f_2 + (vVar3.z * 0.05f)), -3f, 3f);
	}
	else
	{
		uParam0->f_4 = (uParam0->f_4 + func_186((((vVar3.x - uParam0->f_4) * 0.05f) * fVar2), -3f, 3f));
		uParam0->f_4.f_1 = (uParam0->f_4.f_1 + func_186((((vVar3.y - uParam0->f_4.f_1) * 0.05f) * fVar2), -3f, 3f));
		uParam0->f_4.f_2 = (uParam0->f_4.f_2 + func_186((((vVar3.z - uParam0->f_4.f_2) * 0.05f) * fVar2), -3f, 3f));
	}
	unk_0xC831502E35848BE4(*uParam0, uParam0->f_1 + uParam0->f_4, 2);
}

float func_186(float fParam0, float fParam1, float fParam2)
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

void func_187(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = floor((unk_0xB641B72602719CC8(2, 218) * 127f));
	*uParam1 = floor((unk_0xB641B72602719CC8(2, 219) * 127f));
	*uParam2 = floor((unk_0xB641B72602719CC8(2, 220) * 127f));
	*uParam3 = floor((unk_0xB641B72602719CC8(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x4238E197ADF94093(2, 218))
		{
			*uParam0 = floor((unk_0xFD229B5CB86E0CC4(2, 218) * 127f));
		}
		if (!unk_0x4238E197ADF94093(2, 219))
		{
			*uParam1 = floor((unk_0xFD229B5CB86E0CC4(2, 219) * 127f));
		}
		if (!unk_0x4238E197ADF94093(2, 220))
		{
			*uParam2 = floor((unk_0xFD229B5CB86E0CC4(2, 220) * 127f));
		}
		if (!unk_0x4238E197ADF94093(2, 221))
		{
			*uParam3 = floor((unk_0xFD229B5CB86E0CC4(2, 221) * 127f));
		}
	}
	if (unk_0x0B9F814BC8D14042(2))
	{
		if (bParam5)
		{
			if (unk_0x8300DAA4A7C3C9F8())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0x41F89DFFD655D8E0())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_188()
{
	int iVar0;
	float fVar1;
	
	if (!func_193())
	{
		if (func_192(iLocal_90))
		{
			if (!func_476(iLocal_49, 256))
			{
				unk_0x68995A99EFE15C73(unk_0xA19140A5C42D8715());
				unk_0xE85BD4A26C0DFACA(unk_0xA19140A5C42D8715(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				if (iLocal_70 == 1)
				{
					if (!func_535())
					{
						unk_0x4870A43AD588B216(unk_0xD4E735F4B6A956AC(), 15, 1);
					}
					unk_0xB0E737394929E89F(0, 4000, 252);
				}
				else if (iLocal_70 == 2)
				{
					if (!func_535())
					{
						unk_0x4870A43AD588B216(unk_0xD4E735F4B6A956AC(), 10, 1);
					}
					unk_0xB0E737394929E89F(0, 4000, 210);
				}
				else
				{
					if (!func_535())
					{
						unk_0x4870A43AD588B216(unk_0xD4E735F4B6A956AC(), 5, 1);
					}
					unk_0xB0E737394929E89F(0, 3000, 168);
				}
				func_468(&iLocal_49, 256);
			}
		}
	}
	else
	{
		switch (iLocal_289)
		{
			case 0:
				if (unk_0xC621379C202E086C(iLocal_90, 876132797))
				{
					unk_0xB0E737394929E89F(0, 200, 84);
					unk_0xFAE5E5AC968944E8(iLocal_93, 1, 0f, 0f, -0.05f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
					func_190();
				}
				break;
			
			case 1:
			case 2:
				if (func_476(iLocal_49, 32768))
				{
					if (func_535())
					{
						iVar0 = unk_0x2B3422BC14FE3213(iLocal_77);
					}
					else
					{
						iVar0 = iLocal_77;
					}
					if (unk_0xFE5DE0C3200E00F2(iVar0))
					{
						fVar1 = unk_0x33CECDD9E141E18E(iVar0);
						if ((((((((((((((fVar1 > 0.01f && fVar1 < 0.019f) || (fVar1 > 0.093f && fVar1 < 0.1f)) || (fVar1 > 0.165f && fVar1 < 0.172f)) || (fVar1 > 0.231f && fVar1 < 0.239f)) || (fVar1 > 0.308f && fVar1 < 0.317f)) || (fVar1 > 0.37f && fVar1 < 0.378f)) || (fVar1 > 0.437f && fVar1 < 0.443f)) || (fVar1 > 0.507f && fVar1 < 0.518f)) || (fVar1 > 0.58f && fVar1 < 0.587f)) || (fVar1 > 0.651f && fVar1 < 0.659f)) || (fVar1 > 0.72f && fVar1 < 0.729f)) || (fVar1 > 0.788f && fVar1 < 0.794f)) || (fVar1 > 0.862f && fVar1 < 0.87f)) || (fVar1 > 0.937f && fVar1 < 0.946f))
						{
							if (!func_509(512))
							{
								unk_0xB0E737394929E89F(0, 200, 252);
								unk_0xFAE5E5AC968944E8(iLocal_93, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
								func_190();
								func_189(512);
							}
						}
						else
						{
							func_513(512);
						}
					}
				}
				else if (unk_0xC621379C202E086C(iLocal_90, 876132797))
				{
					unk_0xB0E737394929E89F(0, 200, 252);
					unk_0xFAE5E5AC968944E8(iLocal_93, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
					func_190();
				}
				break;
			}
	}
}

void func_189(int iParam0)
{
	if (!func_476(iLocal_52, iParam0))
	{
		func_468(&iLocal_52, iParam0);
	}
}

void func_190()
{
	int iVar0;
	
	iVar0 = unk_0x24A1A7BF4ED94B71(unk_0xA19140A5C42D8715());
	iVar0 = (iVar0 + (1 + iLocal_288));
	if (iVar0 > unk_0xD91DB46E38B776E5(unk_0xA19140A5C42D8715()))
	{
		iVar0 = unk_0xD91DB46E38B776E5(unk_0xA19140A5C42D8715());
	}
	unk_0x6259CDB47862A4F3(unk_0xA19140A5C42D8715(), iVar0, 0);
	func_191();
}

void func_191()
{
	if (!func_535())
	{
		return;
	}
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		iLocal_57 = unk_0x24A1A7BF4ED94B71(unk_0xA19140A5C42D8715());
	}
}

bool func_192(int iParam0)
{
	return (((unk_0x411C28019DEA5CEF(iParam0, func_48(), func_40(11), 3) || unk_0x411C28019DEA5CEF(iParam0, func_48(), func_40(21), 3)) || unk_0x411C28019DEA5CEF(iParam0, func_46(), func_39(11), 3)) || unk_0x411C28019DEA5CEF(iParam0, func_46(), func_39(21), 3));
}

bool func_193()
{
	return unk_0x411C28019DEA5CEF(iLocal_90, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_194(iLocal_90, func_43(), 1), 3);
}

char* func_194(int iParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "";
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		iVar1 = unk_0xCAEB6CE71A2C7212(iParam0, 1);
		if (unk_0x1095F403F52B42E1(iVar1, 0))
		{
			if (func_41(iVar1))
			{
				if (bParam1)
				{
					if (bParam2)
					{
						sVar0 = func_40(20);
					}
					else
					{
						sVar0 = func_40(25);
					}
				}
				else if (bParam2)
				{
					sVar0 = func_40(10);
				}
				else
				{
					sVar0 = func_40(15);
				}
			}
			else if (bParam1)
			{
				if (bParam2)
				{
					sVar0 = func_39(20);
				}
				else
				{
					sVar0 = func_39(25);
				}
			}
			else if (bParam2)
			{
				sVar0 = func_39(10);
			}
			else
			{
				sVar0 = func_39(15);
			}
		}
	}
	return sVar0;
}

void func_195()
{
	if (!func_193())
	{
		return;
	}
	if (func_535())
	{
		func_199();
	}
	if (unk_0x958D2327555FAEA5(iLocal_90) || unk_0x958D2327555FAEA5(unk_0xA19140A5C42D8715()))
	{
		return;
	}
	if (unk_0x22C775856F4633CA(0, 5000) > 2500)
	{
		func_196();
	}
}

void func_196()
{
	if (unk_0x4915F4759304D5CF(iLocal_90))
	{
		return;
	}
	if (!unk_0x958D2327555FAEA5(iLocal_90) && !unk_0x958D2327555FAEA5(unk_0xA19140A5C42D8715()))
	{
		if (iLocal_288 == 0)
		{
			func_124("PROSTITUTES_BJ_SPEECH_SCENE");
		}
		if (!func_10(&iLocal_101))
		{
			func_458(&iLocal_101);
		}
		else if (func_7(&iLocal_101) > unk_0xF59B9063EDAC7451(2f, 5f))
		{
			if (!func_476(iLocal_49, 65536))
			{
				func_468(&iLocal_49, 65536);
				unk_0xE85BD4A26C0DFACA(unk_0xA19140A5C42D8715(), "SEX_GENERIC", "SPEECH_PARAMS_FORCE_NORMAL_CLEAR", 1);
				func_197(iLocal_289);
			}
			else
			{
				func_5(&iLocal_49, 65536);
				func_34(&iLocal_101);
			}
		}
	}
}

void func_197(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_81("PROSTITUTES_BJ_SPEECH_SCENE");
			if (func_198(unk_0xD4E735F4B6A956AC()))
			{
				unk_0xE85BD4A26C0DFACA(iLocal_90, "SEX_ORAL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				unk_0xE85BD4A26C0DFACA(iLocal_90, "SEX_ORAL_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
		
		case 1:
		case 2:
			if (func_198(unk_0xD4E735F4B6A956AC()))
			{
				unk_0xE85BD4A26C0DFACA(iLocal_90, "SEX_GENERIC", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				unk_0xE85BD4A26C0DFACA(iLocal_90, "SEX_GENERIC_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
	}
}

int func_198(int iParam0)
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		return 1;
	}
	return Global_2423801[iParam0 /*413*/].f_230;
}

void func_199()
{
	if (unk_0x4915F4759304D5CF(iLocal_90))
	{
		return;
	}
	if (func_200(0.4f))
	{
		func_189(4);
	}
	if (func_509(4))
	{
		if (!func_10(&iLocal_104))
		{
			func_458(&iLocal_104);
		}
		else if (func_7(&iLocal_104) > 2f)
		{
			if (!func_509(16) && !func_200(0.4f))
			{
				func_189(16);
				iLocal_59++;
			}
			else if (func_509(16))
			{
				if (!unk_0x958D2327555FAEA5(iLocal_90))
				{
					func_513(4);
					func_513(16);
					func_34(&iLocal_104);
				}
			}
		}
	}
}

int func_200(float fParam0)
{
	float fVar0;
	
	if (func_201(unk_0xD4E735F4B6A956AC(), 1, 1))
	{
		fVar0 = unk_0xE73716DDDEA67FE1(unk_0xD4E735F4B6A956AC());
		if (fVar0 > fParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_201(int iParam0, bool bParam1, bool bParam2)
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

void func_202(bool bParam0, bool bParam1)
{
	if (!func_535())
	{
		return;
	}
	func_174(bParam0, bParam1);
	func_170(bParam0, bParam1);
	func_168(bParam0, bParam1);
	func_159(bParam0, bParam1);
	func_152(bParam0, bParam1);
}

void func_203(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_134(iParam0, func_132(iParam1), 0);
	iVar0++;
	if (!func_205(iParam0))
	{
		func_131(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_204(iParam0, iVar0, iParam1, 1);
	}
}

void func_204(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2535519[iParam0 /*3*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1378885[func_132(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1378891[func_132(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1378897[func_132(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1378903[func_132(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1378861[func_132(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1378867[func_132(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1378873[func_132(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1378879[func_132(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1378837[func_132(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1378843[func_132(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1378849[func_132(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1378855[func_132(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1378909[func_132(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1378915[func_132(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1378921[func_132(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1378927[func_132(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1378933[func_132(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1378939[func_132(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1378945[func_132(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1378951[func_132(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2568104[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2568104[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2568104[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2568104[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_2568229[func_132(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1378957[func_132(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1378963[func_132(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1378969[func_132(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1378975[func_132(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2568165[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2568165[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2568165[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2568165[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2568165[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2568232[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2568232[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2568232[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2568232[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2568232[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2568248[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2568248[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2568248[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2568248[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2568248[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2568165[5 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2568104[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2568264[func_132(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2568273[func_132(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2568267[func_132(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2568276[func_132(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2568270[func_132(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2568279[func_132(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2568282[func_132(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2568165[6 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2568104[5 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2568165[7 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2568104[6 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2568165[8 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2568104[7 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2568165[9 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2568104[8 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2568165[10 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2568104[9 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2568165[11 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2568104[10 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2568165[12 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2568104[11 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2568165[13 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2568104[12 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2568165[14 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2568104[13 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2568165[15 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2568104[14 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2568165[16 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2568104[15 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2568165[17 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2568104[16 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2568104[17 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2568104[18 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2568104[19 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_205(int iParam0)
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

void func_206(int iParam0)
{
	if (func_210())
	{
		return;
	}
	if (!Global_14513.f_1 == 1)
	{
		if (func_209(0))
		{
			func_207(iParam0);
		}
		unk_0x2BCFB39E86340DAA(&Global_2384, 2);
	}
}

void func_207(int iParam0)
{
	if (func_210())
	{
		return;
	}
	if (Global_14681)
	{
		func_208(0, 0);
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
	if (!func_15())
	{
		Global_14513.f_1 = 3;
	}
}

void func_208(bool bParam0, bool bParam1)
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

bool func_210()
{
	return unk_0x05EFB6A616B6FADE(Global_1678593, 19);
}

bool func_211(int iParam0)
{
	bool bVar0;
	
	if (func_535())
	{
		bVar0 = unk_0xFE5DE0C3200E00F2(unk_0x2B3422BC14FE3213(iParam0));
	}
	else
	{
		bVar0 = unk_0xFE5DE0C3200E00F2(iParam0);
	}
	return bVar0;
}

void func_212()
{
	if (unk_0x71364F510A1CB69F())
	{
		unk_0x70C1F5AA59767FE6(1000);
		unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), func_214(), 1, false, 0, 1);
		unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), func_213());
		func_526();
		unk_0x8E88E73F74A9FF79(false, false, 3000, 1, 0, 0);
		unk_0x680F17660351F21B(&iLocal_90);
	}
}

float func_213()
{
	switch (func_18())
	{
		case 0:
			return 116.6356f;
			break;
		
		case 1:
			return 175.0504f;
			break;
		
		case 2:
			return 299.5673f;
			break;
	}
	return 0f;
}

Vector3 func_214()
{
	switch (func_18())
	{
		case 0:
			return -820.4975f, 176.9618f, 70.6166f;
			break;
		
		case 1:
			return -14.6005f, -1444.624f, 29.6472f;
			break;
		
		case 2:
			return 1979.961f, 3816.018f, 31.3641f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_215()
{
	int iVar0;
	
	if (func_217(&iLocal_98, 3f) && !unk_0xC3553172354FFB69(iLocal_97))
	{
		iVar0 = floor(((func_216() - 2f) * 1000f));
		unk_0x930701157A4B9374(iLocal_96, false);
		unk_0xD21CD2A6F93F44A6(iLocal_97, iLocal_96, iVar0, 1, 1);
	}
	if (func_217(&iLocal_98, func_216()))
	{
		unk_0x9662BE461F9FDF9E(1000);
		iLocal_286 = 10;
	}
}

float func_216()
{
	switch (func_18())
	{
		case 0:
			return 10f;
			break;
		
		case 1:
			return 12f;
			break;
		
		case 2:
			return 10f;
			break;
	}
	return 0f;
}

int func_217(int iParam0, float fParam1)
{
	if (func_10(iParam0))
	{
		if (func_7(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_218(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5D7B2A77420FF19E(1))
	{
		iVar1 = unk_0x5712B9353A8F6573(1, iVar0);
		switch (iVar1)
		{
			case 182:
				func_219(iVar0, uParam0);
				break;
		}
		iVar0++;
	}
}

void func_219(int iParam0, var uParam1)
{
	var uVar0;
	
	if (unk_0x8866A4E42CDA3EF1(1, iParam0, &uVar0, 11))
	{
		func_220(&uVar0, uParam1);
	}
}

void func_220(var uParam0, var uParam1)
{
	if (unk_0xDC5D81351D6A4DDB(*uParam0))
	{
		if (unk_0xFAC06EE780B57279(*uParam0))
		{
			if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
			{
				if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
				{
					if (unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0) == unk_0xB86D86A5DBBC79F0(*uParam0))
					{
						func_116(0);
						unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
						func_526();
						func_521(uParam1);
					}
				}
			}
		}
	}
}

void func_221(var uParam0)
{
	int iVar0;
	
	if (!func_535())
	{
		return;
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_90))
	{
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			iVar0 = unk_0x24A1A7BF4ED94B71(iLocal_90);
			if ((iVar0 - iLocal_58) < 0)
			{
				func_116(0);
				unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
				func_526();
				func_521(uParam0);
			}
		}
	}
}

void func_222(var uParam0)
{
	int iVar0;
	
	if (!func_535())
	{
		return;
	}
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			iVar0 = unk_0x24A1A7BF4ED94B71(unk_0xA19140A5C42D8715());
			if ((iVar0 - iLocal_57) < 0)
			{
				func_116(0);
				unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
				func_526();
				func_521(uParam0);
			}
		}
	}
}

void func_223(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if (!func_535())
	{
		return;
	}
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
			if (unk_0xDC5D81351D6A4DDB(iVar0))
			{
				vVar1 = { unk_0xE2BBD32891C18569(iVar0, true) };
				if (vdist2(vLocal_56, vVar1) >= 4f)
				{
					func_116(0);
					unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
					func_526();
					func_521(uParam0);
				}
			}
		}
	}
}

void func_224()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	
	if (!func_476(iLocal_49, 16))
	{
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			unk_0x0AF8514426CE63A2(unk_0xD4E735F4B6A956AC(), 0);
		}
		func_468(&iLocal_49, 16);
	}
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		iLocal_93 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
		if (func_535())
		{
			if (unk_0xB540EEBB14C48518(iLocal_93))
			{
				unk_0xC87692063D3D3E05(iLocal_93, true);
				unk_0x6EB2D9504928F849(iLocal_93, 4);
				unk_0xBAC6F37667632916(iLocal_93, 1);
				unk_0x9F3F43B8D4BC7F09(iLocal_93, false, 0);
			}
		}
		else
		{
			unk_0xC87692063D3D3E05(iLocal_93, true);
			unk_0x6EB2D9504928F849(iLocal_93, 4);
			unk_0xBAC6F37667632916(iLocal_93, 1);
		}
		if (!func_369() || !unk_0xE0FD180CD24C0B67(iLocal_90, iLocal_93, 0))
		{
			func_459(0);
			return;
		}
	}
	else
	{
		func_459(0);
		return;
	}
	func_206(0);
	if ((!unk_0x097275D546C9735F(iLocal_93) && unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC())) && !func_476(iLocal_49, 1024))
	{
		iLocal_286 = 7;
		func_367(1, -1);
		unk_0x61346376C1469A0E("SCRIPT\HUD_321_GO", true, -1);
		iLocal_292 = 0;
		func_477("WAITING FOR VEHICLE TO STOP ");
		return;
	}
	iVar0 = 0;
	unk_0xD8C147DA332E7F06(2);
	switch (iLocal_292)
	{
		case 0:
		case 1:
			if (func_535())
			{
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					if (unk_0xDC5D81351D6A4DDB(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)))
					{
						if (unk_0xCC1BBE3267AB0DC9(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)))
						{
							if (unk_0xB0D49A1F9F054602(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), -1, 0) == unk_0xA19140A5C42D8715())
							{
								if (unk_0xB540EEBB14C48518(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)))
								{
									if (!unk_0x4943BEEC19289B8E(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)))
									{
										unk_0x1F7948851FB36E88(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), false, 0);
									}
								}
								else
								{
									unk_0x39926DD5354848E1(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0));
									return;
								}
							}
						}
						else
						{
							unk_0x803DEA837C78B4AE(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0));
							return;
						}
					}
				}
			}
			func_366();
			func_365();
			func_191();
			if (func_362())
			{
				func_124("PROSTITUTES_DRIVE_SCENE");
				func_81("PROSTITUTES_PARKED_SCENE");
				func_361();
				if (func_535())
				{
					func_189(2);
					if (func_535())
					{
						if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
						{
							if (unk_0xCC1BBE3267AB0DC9(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)))
							{
								if (unk_0xB540EEBB14C48518(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)))
								{
									unk_0xEE032FCCC9029460(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 1);
									unk_0x14293208022014FA(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 4);
									unk_0xA71250388C9DB28D(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 1);
								}
							}
						}
					}
				}
				unk_0x26ABEC1EEED61639(iLocal_90);
				iLocal_292 = 2;
			}
			break;
		
		case 2:
			if (func_360(iLocal_295))
			{
				func_359(&iLocal_295);
				func_5(&iLocal_73, 2);
			}
			func_357(iLocal_90, 0);
			if (func_357(unk_0xA19140A5C42D8715(), 1))
			{
				if (func_355(&sVar1, 0))
				{
					iLocal_48 = unk_0xF58C434FFA1FB5F6();
					iVar2 = unk_0x06EBD57CD6085DD1();
					if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
					{
						if (iVar2 != 4 && iLocal_48 == 4)
						{
							unk_0x4DBE174154203AFA(4);
						}
						else if (iVar2 == 4 && iLocal_48 != 4)
						{
							unk_0x4DBE174154203AFA(1);
						}
					}
					func_339();
					iLocal_292 = 3;
					func_477("Moving to SERVICE_MENU_CHOOSE");
				}
				else
				{
					func_338(&sVar1, -1);
					func_34(&iLocal_107);
					iLocal_288 = 3;
					iLocal_292 = 4;
				}
			}
			break;
		
		case 3:
			if (unk_0xD1ABB20CFF127CCC())
			{
				return;
			}
			unk_0xE0921C0B9EB8D11C(3);
			func_319();
			func_288(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			func_287(&uVar3, &iVar4, &uVar5, &uVar6, 0);
			unk_0xD481A812073CCF02(0, 48, 1);
			unk_0x9EA8CBEA7355649E(2, 187);
			unk_0x9EA8CBEA7355649E(2, 188);
			unk_0x9EA8CBEA7355649E(2, 201);
			iVar0 = 0;
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
					func_283(0, 0, 0, 1);
					func_282(0, -1, 1);
					if (func_281())
					{
						if (Global_4267062 != iLocal_68)
						{
							unk_0xE11F00B4AC919F45(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							iLocal_68 = Global_4267062;
							func_477("Player highlighted a new option using the mouse!");
						}
						else
						{
							iVar0 = 1;
						}
					}
				}
			}
			if (((unk_0xDF0ADAD7E584090D(2, 187) || (unk_0x0B9F814BC8D14042(2) && unk_0xDF0ADAD7E584090D(2, 242))) || (unk_0x0B9F814BC8D14042(2) && unk_0x53E955948D35BDB5(0, 33))) || (((unk_0x47C01C0E6F4C1D06() && !unk_0x0B9F814BC8D14042(2)) && iVar4 > 100) && (unk_0xFD34717937104F1C() - iLocal_87) > 300))
			{
				unk_0xE11F00B4AC919F45(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_477("DOWN pressed!");
				if (iLocal_68 < iLocal_69)
				{
					iLocal_68++;
				}
				else
				{
					iLocal_68 = 0;
				}
				iLocal_87 = unk_0xFD34717937104F1C();
			}
			else if (((unk_0xDF0ADAD7E584090D(2, 188) || (unk_0x0B9F814BC8D14042(2) && unk_0xDF0ADAD7E584090D(2, 241))) || (unk_0x0B9F814BC8D14042(2) && unk_0x53E955948D35BDB5(0, 32))) || (((unk_0x47C01C0E6F4C1D06() && !unk_0x0B9F814BC8D14042(2)) && iVar4 < -100) && (unk_0xFD34717937104F1C() - iLocal_87) > 300))
			{
				unk_0xE11F00B4AC919F45(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_477("UP pressed!");
				if (iLocal_68 > 0)
				{
					iLocal_68 = (iLocal_68 - 1);
				}
				else
				{
					iLocal_68 = iLocal_69;
				}
				iLocal_87 = unk_0xFD34717937104F1C();
			}
			else if (unk_0x4E6A396CA4DB68F6(2, 201) || iVar0 == 1)
			{
				unk_0xE11F00B4AC919F45(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				unk_0xD8C147DA332E7F06(3);
				func_277();
				unk_0xDCB46BFC2265476A(unk_0xA19140A5C42D8715());
				iLocal_292 = 4;
			}
			func_276(iLocal_68, 1, 1);
			break;
		
		case 4:
			iVar7 = unk_0x96D46A32BCAB0A68(iLocal_90);
			if (iLocal_288 == 3)
			{
				func_367(1, -1);
				func_275();
				func_274(0);
				iLocal_62 = unk_0xFD34717937104F1C();
				func_124("PROSTITUTES_PARKED_SCENE");
				func_477("eCurrentProstituteState = prostitute_REFUSED ");
				iLocal_286 = 6;
				if (iLocal_70 > 0)
				{
					if (func_120(iLocal_90))
					{
						func_119();
					}
					else
					{
						func_459(0);
					}
					return;
				}
				else
				{
					if (func_269() >= 20)
					{
						iVar7 += 20;
						func_226(20);
						unk_0x8C26EBB3525646D4(iLocal_90, iVar7);
					}
					func_459(1);
					return;
				}
			}
			if (!unk_0x39C2D9AB77873F84(func_44(unk_0xA19140A5C42D8715(), 0, 0)))
			{
			}
			else
			{
				func_367(1, -1);
				func_275();
				if (unk_0xDF53AF82842165F7())
				{
					func_468(&iLocal_49, 1024);
					iLocal_288 = 3;
					func_477("AUSSIE VERSION IS TRUE!?!?!");
				}
				if (iLocal_288 != 3)
				{
					if (func_269() > func_225(iLocal_288))
					{
						func_226(func_225(iLocal_288));
						iVar7 = (iVar7 + func_225(iLocal_288));
					}
					func_35(&iLocal_101, (14f - 4f));
					func_477("eCurrentProstituteState = PROSTITUTE_CUSTOMER_GETTING_SERVICED ");
					func_121();
					iLocal_286 = 11;
				}
				unk_0x8C26EBB3525646D4(iLocal_90, iVar7);
				iLocal_62 = unk_0xFD34717937104F1C();
			}
			break;
	}
}

int func_225(int iParam0)
{
	if (unk_0xDF53AF82842165F7())
	{
		if (iParam0 == 0)
		{
			return 70;
		}
		else if (iParam0 == 1)
		{
			return 70;
		}
		else if (iParam0 == 2)
		{
			return 70;
		}
		else
		{
			return 0;
		}
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 1)
	{
		return 70;
	}
	if (iParam0 == 2)
	{
		return 100;
	}
	return 0;
}

void func_226(int iParam0)
{
	var uVar0;
	
	if (!func_535())
	{
		func_240(func_18(), 1, iParam0);
	}
	else if (!func_239())
	{
		unk_0xF97BA5A7224EDFE5(iParam0, 0, 0);
	}
	else
	{
		func_227(-1359375127, iParam0, &uVar0, 0, 0, 0);
	}
}

void func_227(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_239())
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
				func_228(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_228(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -597978445:
			if (iParam1 > 0)
			{
				func_228(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
			func_228(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_228(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_239())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_133()) || unk_0x64BE694244417BDA())
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
			*uParam0 = func_235(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_234(1, iParam4);
			Global_4263477 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_229(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_229(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x2BCFB39E86340DAA(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_230(iParam0);
	}
}

void func_230(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_239())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_233(iParam0))
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
		func_231(&(Global_4262927[iParam0 /*80*/]));
	}
}

void func_231(var uParam0)
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
	func_232(&(uParam0->f_13));
	func_232(&(uParam0->f_13.f_13));
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

void func_232(var uParam0)
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

int func_233(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_5 == 1;
	}
	return 0;
}

void func_234(int iParam0, int iParam1)
{
	Global_2460521 = iParam1;
	Global_2460520 = iParam0;
}

int func_235(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4262927[iVar0 /*80*/].f_61.f_2 == 0)
		{
			if (!func_239())
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
				func_236(Global_4262927[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_236(struct<62> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_238(vVar0.y);
	if ((Global_262145.f_23427 && !Global_262145.f_23428) && !Global_262145.f_23429)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_237();
		unk_0x04F37AFC39D93909(1, &vVar0, 35, iVar1);
	}
}

void func_237()
{
	unk_0xD75A4240F0AD8613("AM_ARENA_SHP");
}

var func_238(int iParam0)
{
	var uVar0;
	
	unk_0x2BCFB39E86340DAA(&uVar0, iParam0);
	return uVar0;
}

int func_239()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

int func_240(int iParam0, int iParam1, int iParam2)
{
	if (Global_106070.f_28022[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_106070.f_28022[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_241(Global_106070.f_28022[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_241(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_268();
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
					func_267(99, 1);
					func_266(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_266(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_266(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_252(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_248(5))
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
							func_266(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_266(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_266(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_248(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_266(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_266(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_266(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_266(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_266(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_266(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_266(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_266(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_266(joaat("sp2_money_spent_property"), iParam3);
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
									func_266(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_266(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_266(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_266(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_266(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_266(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_248(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_266(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_266(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_266(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_266(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_266(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_266(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_247(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_267(95, iParam3);
					break;
				
				case 1:
					func_267(97, iParam3);
					break;
				
				case 2:
					func_267(96, iParam3);
					break;
			}
			func_267(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_244(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_244(iVar1);
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
					func_266(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_266(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_266(joaat("sp2_total_cash_earned"), iParam3);
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
	func_243(iParam0);
	if (Global_36117 == 15)
	{
		func_242(0);
	}
	return 1;
}

void func_242(bool bParam0)
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

void func_243(int iParam0)
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

void func_244(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_148(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_148(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_148(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_148(137, 0, -1, 1);
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
	else if (unk_0x05EFB6A616B6FADE(Global_106070.f_20536.f_471, iParam0) || unk_0x05EFB6A616B6FADE(Global_2097152[func_246() /*12745*/].f_8178.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xFA57C719261AA55D(&(Global_106070.f_20536.f_471), iParam0);
		unk_0xFA57C719261AA55D(&(Global_2097152[func_246() /*12745*/].f_8178.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x59FF6261546DDD52("COUP_RED");
		unk_0x4FDA9E6EF359F8A9(func_245(iParam0));
		unk_0x595B8132C1F20265(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_245(int iParam0)
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

int func_246()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_247(int iParam0)
{
	func_267(93, iParam0);
	func_267(29, iParam0);
	func_267(30, iParam0);
}

bool func_248(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_249(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_249(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_249(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_249(137, -1, -1);
	}
	if (!unk_0x4C9BACA8D249CB13())
	{
		return unk_0x05EFB6A616B6FADE(Global_106070.f_20536.f_471, iParam0);
	}
	return unk_0x05EFB6A616B6FADE(Global_2097152[func_246() /*12745*/].f_8178.f_10, iParam0);
}

int func_249(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_133();
	}
	iVar1 = func_251(iParam0, iParam1);
	uVar2 = func_250(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x07EEB31CF063DAB7(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_250(int iParam0)
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

int func_251(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_133();
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

int func_252(bool bParam0)
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
		func_147(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_253(27, 1);
	return 1;
}

int func_253(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_254(iParam0, iParam1);
}

int func_254(int iParam0, int iParam1)
{
	if (func_536(14) && !func_265(iParam0))
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
	if (func_264(&Global_4268566))
	{
		if (func_262(&Global_4268566, iParam0))
		{
			return 0;
		}
		if (func_255(&Global_4268566, iParam0))
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

int func_255(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x16E6CF5D5B848918(iParam1))
	{
		return 0;
	}
	if (func_536(14) && !func_265(iParam1))
	{
		return 0;
	}
	if (func_262(uParam0, iParam1))
	{
		return 0;
	}
	if (func_261(uParam0) < 0f)
	{
		func_260(uParam0, 0);
	}
	func_258(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_256(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_256(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x16E6CF5D5B848918(iParam1))
	{
		return 0;
	}
	if (func_536(14) && !func_265(iParam1))
	{
		return 0;
	}
	if (func_262(uParam0, iParam1))
	{
		return 0;
	}
	if (func_261(uParam0) < 0f)
	{
		func_260(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_257(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_257(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_258(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_259(uParam0, iVar0);
		iVar0++;
	}
	func_260(uParam0, (Global_4268565 - 0.5f));
}

void func_259(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_260(var uParam0, float fParam1)
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

float func_261(var uParam0)
{
	return uParam0->f_80;
}

bool func_262(var uParam0, int iParam1)
{
	return func_263(uParam0, iParam1) != -1;
}

int func_263(var uParam0, int iParam1)
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

bool func_264(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_265(int iParam0)
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

void func_266(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x2AD48F3CEBA882E9(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x93180BE33E7149EF(iParam0, iVar0, 1);
}

void func_267(int iParam0, int iParam1)
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

void func_268()
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

int func_269()
{
	if (func_535())
	{
		return func_271(unk_0xD4E735F4B6A956AC());
	}
	return func_270(func_18());
}

int func_270(int iParam0)
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

var func_271(int iParam0)
{
	var uVar0;
	
	uVar0 = func_272(iParam0);
	return uVar0;
}

int func_272(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0xD4E735F4B6A956AC())
		{
			return unk_0xCCADB536D2A7894D(-1);
		}
		else if (func_273(iParam0))
		{
			return Global_1589747[iParam0 /*790*/].f_211.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_273(int iParam0)
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

void func_274(int iParam0)
{
	if (unk_0x7D8590E7AD7006E8() != 255)
	{
		unk_0xBEF7BA273C22021F(iParam0);
		unk_0x3796A90B8D7A0EB5(iParam0);
	}
}

void func_275()
{
	Global_17228.f_5 = 0;
}

void func_276(int iParam0, bool bParam1, int iParam2)
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

void func_277()
{
	if (iLocal_68 == iLocal_69)
	{
		iLocal_288 = 3;
	}
	else
	{
		iLocal_289 = iLocal_283[iLocal_68];
		func_278();
		if (iLocal_289 == 0)
		{
			func_81("PROSTITUTES_BJ_SCENE");
			unk_0x61346376C1469A0E("PROSTITUTE_BLOWJOB", false, -1);
			iLocal_288 = 0;
		}
		else if (iLocal_289 == 1)
		{
			func_81("PROSTITUTES_SEX_SCENE");
			iLocal_288 = 1;
		}
		else if (iLocal_289 == 2)
		{
			func_81("PROSTITUTES_SEX_SCENE");
			iLocal_288 = 2;
		}
	}
}

void func_278()
{
	switch (iLocal_289)
	{
		case 0:
			func_280();
			break;
		
		case 1:
		case 2:
			func_279();
			break;
	}
}

void func_279()
{
	iLocal_46++;
	iLocal_47 = 1;
}

void func_280()
{
	iLocal_45++;
	iLocal_47 = 1;
}

int func_281()
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

int func_282(int iParam0, int iParam1, bool bParam2)
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

void func_283(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	func_286();
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
				func_285(0);
			}
			return;
		}
		if (((Global_4267056 >= fVar0 && Global_4267056 <= fVar2) && Global_4267057 >= (fVar3 + fVar6)) && Global_4267057 < (fVar3 + 0.034722f))
		{
			Global_4267062 = -3;
			if (bParam3)
			{
				func_285(0);
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
				func_284(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17366, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
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

void func_284(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xFF35427AF9343886((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_285(bool bParam0)
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
		func_284(fVar0, fVar1, Global_17366, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4267062 == -3)
	{
		func_284(fVar0, (fVar1 + fVar2), Global_17366, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x0DA2C67B1175034B();
}

void func_286()
{
	Global_4267058 = Global_4267056;
	Global_4267059 = Global_4267057;
	Global_4267056 = unk_0x8CBB8AEBE6D8962B(2, 239);
	Global_4267057 = unk_0x8CBB8AEBE6D8962B(2, 240);
	Global_4267060 = (Global_4267056 - Global_4267058);
	Global_4267061 = (Global_4267057 - Global_4267059);
}

void func_287(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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

void func_288(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	
	if (!func_318(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_316(0, bParam6))
	{
		return;
	}
	unk_0xCD282E433560A509(76, 84);
	unk_0xE4C207949B93A9C7(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_17367)
	{
		if (func_314(29, 1, 1, &fVar36, &fVar37, bParam7))
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
		if (func_313())
		{
			iVar59 = round((to_float(iVar60) * fVar62));
		}
		fVar63 = (to_float(iVar59) / to_float(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_313())
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
					StringCopy(&cVar64, func_312(29), 64);
					StringCopy(&cVar65, func_309(29, 1), 64);
					if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_6863[29 /*16*/])) == -1487683087)
					{
						func_284(Global_17364, Global_17365, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
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
				func_284(Global_17364, (Global_17365 + fVar56), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17365 + fVar56) + 0.034722f) + 0f);
				if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_1)) != 0)
				{
					func_308();
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
						func_308();
						func_306((((Global_17364 + fParam5) - 0.00390625f) - func_307("CM_ITEM_COUNT", Global_17367.f_5732, Global_17367.f_5731)), ((Global_17365 + fVar56) + 0.00416664f), "CM_ITEM_COUNT", Global_17367.f_5732, Global_17367.f_5731);
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
				func_284(Global_17364, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_314(Global_17367.f_4766, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17364 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_305(fVar40);
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
				func_284(Global_17364, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_305(fVar40);
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
						iVar17 = (iVar17 + 1);
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
					func_314(Global_17367.f_4766, 1, 1, &fVar36, &fVar37, bParam7);
					func_304(Global_17367.f_4766, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xE56EDA9982C42132(func_312(Global_17367.f_4766), func_309(Global_17367.f_4766, 1), ((Global_17364 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
					func_314(Global_4266986.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17364 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_305(fVar40);
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
				func_284(Global_17364, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_305(fVar40);
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
					func_314(Global_4266986.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_304(Global_4266986.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xE56EDA9982C42132(func_312(Global_4266986.f_67), func_309(Global_4266986.f_67, 1), ((Global_17364 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
			func_297(iVar59, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
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
					func_295(bVar32, 1, 0, 0, 0, 0, 0);
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
												func_295(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, iVar74, bVar51, bVar50);
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
													if (func_314(Global_17367.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
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
											if (func_314(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17367.f_5081[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_314(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_304(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xE56EDA9982C42132(func_312(26), func_309(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_314(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_314(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_304(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xE56EDA9982C42132(func_312(27), func_309(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
											func_295(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_17367.f_8087 && Global_17367.f_8088 == iVar6)
											{
												func_294(bVar32);
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
													if (func_314(Global_17367.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_314(Global_17367.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_304(Global_17367.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17367.f_5081[iVar8] == 2)
															{
																unk_0xE56EDA9982C42132(func_312(Global_17367.f_4433[(iVar22 + iVar28)]), func_309(Global_17367.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0xE56EDA9982C42132(func_312(Global_17367.f_4433[(iVar22 + iVar28)]), func_309(Global_17367.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
												if (func_293() && unk_0x8B1574454E8C2421(joaat("fm_mission_creator")) > 0)
												{
													if (iVar8 == 0)
													{
														func_295(0, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
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
													if (func_314(Global_17367.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_314(Global_17367.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_304(Global_17367.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17367.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0xE56EDA9982C42132(func_312(Global_17367.f_4433[(iVar22 + iVar14)]), func_309(Global_17367.f_4433[(iVar22 + iVar14)], bVar32), (Global_17364 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_17367.f_5081[iVar8] == 2)
															{
																unk_0xE56EDA9982C42132(func_312(Global_17367.f_4433[(iVar22 + iVar14)]), func_309(Global_17367.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0xE56EDA9982C42132(func_312(Global_17367.f_4433[(iVar22 + iVar14)]), func_309(Global_17367.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
											func_295(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17367.f_8087 && Global_17367.f_8088 == iVar6)
											{
												func_294(bVar32);
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
											if (func_314(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17367.f_5081[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_314(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_304(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xE56EDA9982C42132(func_312(26), func_309(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_314(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_314(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_304(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xE56EDA9982C42132(func_312(27), func_309(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_295(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, 0, 0, 0);
										func_292((fVar34 + fVar40), fVar35, "NUMBER", Global_17367.f_3918[iVar20], 0);
									}
									bVar39 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17367.f_5727)
										{
											func_295(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17367.f_8087 && Global_17367.f_8088 == iVar6)
											{
												func_294(bVar32);
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
											if (func_314(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_17367.f_5081[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_314(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_304(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xE56EDA9982C42132(func_312(26), func_309(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_314(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_314(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_304(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xE56EDA9982C42132(func_312(27), func_309(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_295(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, 0, 0, 0);
										func_291((fVar34 + fVar40), fVar35, "NUMBER", Global_17367.f_4175[iVar21], Global_17367.f_4304[iVar21]);
									}
									bVar39 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar33)
									{
										if (func_314(Global_17367.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
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
												if (func_314(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_17367.f_5081[iVar8] == 2)
													{
														fVar40 = (fVar40 - (fVar36 * 2f));
													}
													fVar43 = (fVar36 * 0.5f);
													if (func_314(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_304(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0xE56EDA9982C42132(func_312(26), func_309(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
												if (func_314(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + fVar36);
													fVar43 = (fVar36 * 0.5f);
													if (func_314(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_304(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0xE56EDA9982C42132(func_312(27), func_309(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_314(Global_17367.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_304(Global_17367.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0xE56EDA9982C42132(func_312(Global_17367.f_4433[iVar22]), func_309(Global_17367.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), (fVar36 * func_290(Global_17367.f_4433[iVar22])), (fVar37 * func_290(Global_17367.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
									if (func_314(26, 1, 1, &fVar36, &fVar37, bParam7))
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
		func_206(0);
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
		func_289(1);
	}
	unk_0x0DA2C67B1175034B();
}

void func_289(int iParam0)
{
	Global_1369750.f_1079 = iParam0;
}

float func_290(int iParam0)
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

void func_291(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x7C25BC565D364568(sParam2);
	unk_0x1757EE80C206FA5E(fParam3, iParam4);
	unk_0xB435CE12BEF0DBF7(fParam0, fParam1, 0);
}

void func_292(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x7C25BC565D364568(sParam2);
	unk_0xCDA87E1DA52C8C9D(iParam3);
	unk_0xB435CE12BEF0DBF7(fParam0, fParam1, iParam4);
}

bool func_293()
{
	return unk_0x05BEBC245254F6F2(-1762644250);
}

void func_294(bool bParam0)
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

void func_295(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_296(Global_17367.f_6006[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_296(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_297(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_318(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_316(bParam4, bParam8))
	{
		return;
	}
	if (func_302())
	{
		return;
	}
	if (unk_0x2B21DC45DEAA4B80())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_300(unk_0xD4E735F4B6A956AC(), 0))
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
					func_299(&(Global_17367.f_4769[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_4962[iVar2 /*4*/])) == unk_0xFEB6EEC0545AF7AA("PREV"))
					{
						func_299(&(Global_17367.f_4769[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17367.f_5011[iVar1] == -1)
					{
						func_298(&(Global_17367.f_4962[iVar1 /*4*/]));
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
				func_299(&Global_4266986);
				if (Global_4266986.f_20 == -1)
				{
					func_298(&(Global_4266986.f_16));
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

void func_298(char* sParam0)
{
	unk_0x390B339C943A8A54(sParam0);
	unk_0xD481829E3E36543B();
}

void func_299(char* sParam0)
{
	unk_0x0BAAED7962F122D5(sParam0);
}

bool func_300(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_301(-1, 0) == 8;
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

int func_301(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_133();
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

int func_302()
{
	vector3 vVar0;
	
	if (Global_14513.f_1 > 3)
	{
		return 1;
	}
	if (func_303())
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

int func_303()
{
	if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_304(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_305(float fParam0)
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

void func_306(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x7C25BC565D364568(sParam2);
	unk_0xCDA87E1DA52C8C9D(iParam3);
	unk_0xCDA87E1DA52C8C9D(iParam4);
	unk_0xB435CE12BEF0DBF7(fParam0, fParam1, 0);
}

float func_307(char* sParam0, int iParam1, int iParam2)
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
	func_308();
	unk_0xC42A779360572EA7(sParam0);
	unk_0xCDA87E1DA52C8C9D(iParam1);
	unk_0xCDA87E1DA52C8C9D(iParam2);
	return unk_0x4E0DD18900B7ACAE(1);
}

void func_308()
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

var func_309(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0x429D45A6C6520026(&(Global_17367.f_6863[iParam0 /*16*/])))
	{
		if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_6863[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_311(unk_0xD4E735F4B6A956AC()) };
			if (unk_0x686DAB3ED67144AB(&Var2, &uVar1))
			{
				return func_310(&uVar1);
			}
		}
		else
		{
			return func_310(&(Global_17367.f_6863[iParam0 /*16*/]));
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

var func_310(var uParam0)
{
	return uParam0;
}

struct<13> func_311(int iParam0)
{
	struct<13> Var0;
	
	unk_0xE05C4303C26882C4(iParam0, &Var0, 13);
	return Var0;
}

char* func_312(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0x429D45A6C6520026(&(Global_17367.f_6014[iParam0 /*16*/])))
	{
		if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_6014[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_311(unk_0xD4E735F4B6A956AC()) };
			unk_0x686DAB3ED67144AB(&Var1, &uVar0);
			return func_310(&uVar0);
		}
		else
		{
			return func_310(&(Global_17367.f_6014[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_313()
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

int func_314(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_312(iParam0), 64);
	StringCopy(&cVar1, func_309(iParam0, bParam1), 64);
	if (unk_0xFEB6EEC0545AF7AA(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x359669D87D0E343F(&iVar2, &iVar3);
			fVar5 = unk_0xA0B98358F89CB4ED(0);
			if (func_313())
			{
				iVar2 = round((to_float(iVar3) * fVar5));
			}
			fVar6 = (to_float(iVar2) / to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_313())
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
		vVar7.x = (vVar7.x * (func_315(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_315(iParam0) / fVar4));
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

float func_315(int iParam0)
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

int func_316(bool bParam0, bool bParam1)
{
	if (Global_2437022.f_1889.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x3A83743561B4F70C() || (func_24(8, -1) && func_317() != 64)) || (unk_0x05724BB62A634BD8() != 0 && !bParam1)) || (unk_0x47C3DC461C758C29() && !bParam0)) || unk_0xBE079F709C76E132()) || Global_71465) || Global_17367.f_8090) || unk_0x4EAEDDFEDE3BEE19()) || Global_93284.f_1393)
	{
		return 0;
	}
	return 1;
}

int func_317()
{
	return Global_1312792;
}

int func_318(var uParam0, bool bParam1, int iParam2)
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

void func_319()
{
	if (!func_360(iLocal_295))
	{
		iLocal_295 = func_337();
		func_328(&iLocal_295, 0, 0, unk_0x22C775856F4633CA(1, 2), 0, 0, 0);
	}
	else if (!func_476(iLocal_73, 2))
	{
		if (func_320(iLocal_295))
		{
			iLocal_295 = func_337();
			func_328(&iLocal_295, 0, 0, unk_0x22C775856F4633CA(1, 2), 0, 0, 0);
			func_468(&iLocal_73, 2);
		}
	}
	else if (func_320(iLocal_295))
	{
		func_275();
		func_459(0);
	}
}

bool func_320(int iParam0)
{
	return func_321(func_337(), iParam0);
}

int func_321(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_360(iParam1) || !func_360(iParam0))
	{
		return 1;
	}
	iVar0 = func_327(iParam0);
	iVar1 = func_327(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_326(iParam0);
	iVar1 = func_326(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_325(iParam0);
	iVar1 = func_325(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_324(iParam0);
	iVar1 = func_324(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_323(iParam0);
	iVar1 = func_323(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_322(iParam0);
	iVar1 = func_322(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_322(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_323(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_324(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_325(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_326(int iParam0)
{
	return iParam0 & 15;
}

var func_327(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_160(unk_0x05EFB6A616B6FADE(iParam0, 31), -1, 1)) + 2011;
}

void func_328(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_327(*iParam0);
	iVar1 = func_326(*iParam0);
	iVar2 = func_325(*iParam0);
	iVar3 = func_324(*iParam0);
	iVar4 = func_323(*iParam0);
	iVar5 = func_322(*iParam0);
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
	iVar6 = func_336(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_336(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_329(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_329(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_335(uParam0, iParam1);
	func_334(uParam0, iParam2);
	func_333(uParam0, iParam3);
	func_332(uParam0, iParam5);
	func_331(uParam0, iParam4);
	func_330(uParam0, iParam6);
}

void func_330(var uParam0, int iParam1)
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

void func_331(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_326(*uParam0);
	iVar1 = func_327(*uParam0);
	if (iParam1 < 1 || iParam1 > func_336(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_332(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_333(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_334(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_335(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_336(int iParam0, int iParam1)
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

int func_337()
{
	var uVar0;
	
	func_335(&uVar0, unk_0xC5B07C33AC7BB174());
	func_334(&uVar0, unk_0x65DA628D62901275());
	func_333(&uVar0, unk_0x34CEB9721AC6A0A9());
	func_331(&uVar0, unk_0xC9A0B68BA813CF99());
	func_332(&uVar0, unk_0x897D202BD69186D5());
	func_330(&uVar0, unk_0x56EBDF0E39D83471());
	return uVar0;
}

void func_338(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, true, iParam1);
}

void func_339()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_354(1);
	func_274(1);
	unk_0xDC374DA4DC566237(false);
	func_353(0, 0);
	func_352(1, 1, 0, 0, 0);
	func_351(1, 2, 1, 1, 1);
	func_350("PROS_OPTS");
	func_349(201, "PROS_SELECT", -1, 0);
	iLocal_69 = 0;
	iVar0 = func_225(0);
	iVar1 = func_225(1);
	iVar2 = func_225(2);
	if (func_269() >= iVar0)
	{
		func_345(iLocal_69, "PROS_DOLLAR", 1, 1, 0, 0);
		func_342(iVar0, 0);
		iLocal_283[iLocal_69] = 0;
		iLocal_69++;
	}
	if (func_269() >= iVar1 && func_341(iLocal_93))
	{
		func_345(iLocal_69, "PROS_DOLLAR", 1, 1, 0, 0);
		func_342(iVar1, 0);
		iLocal_283[iLocal_69] = 1;
		iLocal_69++;
	}
	if (func_269() >= iVar2 && func_341(iLocal_93))
	{
		func_345(iLocal_69, "PROS_DOLLAR", 1, 1, 0, 0);
		func_342(iVar2, 0);
		iLocal_283[iLocal_69] = 2;
		iLocal_69++;
	}
	func_345(iLocal_69, "PROS_QUIT", 0, 1, 0, 0);
	iLocal_68 = 0;
	func_276(iLocal_68, 1, 1);
	func_340();
	iLocal_87 = unk_0xFD34717937104F1C();
	iLocal_292 = 3;
}

void func_340()
{
	Global_17228.f_5 = 1;
}

int func_341(int iParam0)
{
	int iVar0;
	
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		iVar0 = unk_0x8F474E419F56E48D(iParam0);
		if ((((((((((((((iVar0 == joaat("infernus") || iVar0 == joaat("voltic")) || iVar0 == joaat("stingergt")) || iVar0 == joaat("stinger")) || iVar0 == joaat("bullet")) || iVar0 == joaat("entityxf")) || iVar0 == joaat("feltzer3")) || iVar0 == joaat("granger")) || iVar0 == joaat("panto")) || iVar0 == joaat("phoenix")) || iVar0 == joaat("fmj")) || iVar0 == joaat("reaper")) || iVar0 == joaat("le7b")) || iVar0 == joaat("tyrus")) || iVar0 == -1405937764)
		{
			return 0;
		}
	}
	return 1;
}

void func_342(int iParam0, bool bParam1)
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
	Global_17367.f_3918[Global_17367.f_5220] = iParam0;
	Global_17367.f_5220++;
	Global_17367.f_2124[Global_17367.f_5737 /*5*/][Global_17367.f_5738] = 2;
	Global_17367.f_5738++;
	if (Global_17367.f_5738 >= Global_17367.f_5736)
	{
		fVar0 = func_344();
		if (Global_17367.f_5073[Global_17367.f_5217] && Global_17367.f_5738 == Global_17367.f_5736)
		{
			func_314(26, 1, 0, &fVar1, &uVar2, 0);
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
			fVar3 = func_343();
			if (fVar3 > Global_17367.f_5740[Global_17367.f_5216])
			{
				Global_17367.f_5740[Global_17367.f_5216] = fVar3;
			}
		}
	}
}

float func_343()
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
			if (func_314(Global_17367.f_4433[((Global_17367.f_5222 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
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

float func_344()
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
	func_295(0, 1, 0, 0, 0, iVar6 > 0, 0);
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
			func_314(Global_17367.f_4433[((Global_17367.f_5222 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_345(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
		func_348(Global_17367.f_5216, 1);
	}
	else
	{
		func_348(Global_17367.f_5216, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_347(&(Global_17367.f_73[Global_17367.f_5218 /*6*/]));
		if (Global_17367.f_5073[Global_17367.f_5217])
		{
			func_314(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_346(&(Global_17367.f_73[Global_17367.f_5218 /*6*/]));
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

float func_346(char* sParam0)
{
	if (!unk_0x445EC9E7EACB710E(sParam0))
	{
	}
	return unk_0xAC0B4B294E7DA73D(0.35f, 0);
}

float func_347(char* sParam0)
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
	func_295(0, 1, 0, 0, 0, 0, 0);
	unk_0xC42A779360572EA7(sParam0);
	return unk_0x4E0DD18900B7ACAE(1);
}

void func_348(int iParam0, bool bParam1)
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

void func_349(int iParam0, char* sParam1, int iParam2, bool bParam3)
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

void func_350(char* sParam0)
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

void func_351(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17367.f_5081[0] = iParam0;
	Global_17367.f_5081[1] = iParam1;
	Global_17367.f_5081[2] = iParam2;
	Global_17367.f_5081[3] = iParam3;
	Global_17367.f_5081[4] = iParam4;
}

void func_352(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_353(bool bParam0, bool bParam1)
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

void func_354(bool bParam0)
{
	if (!bParam0)
	{
		Global_104712 = unk_0xFD34717937104F1C() + 250;
	}
	Global_104709 = bParam0;
}

int func_355(char* sParam0, int iParam1)
{
	if (func_269() < func_225(iParam1))
	{
		StringCopy(sParam0, "PROS_NO_MONEY", 16);
		return 0;
	}
	if (unk_0x4C9BACA8D249CB13() && func_356(unk_0xD4E735F4B6A956AC()))
	{
		StringCopy(sParam0, "PIM_HHIDCR", 16);
		return 0;
	}
	StringCopy(sParam0, "", 16);
	return 1;
}

int func_356(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_1625435[iVar0 /*560*/].f_1, 0);
	}
	return 0;
}

int func_357(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!unk_0x39C2D9AB77873F84(func_44(unk_0xA19140A5C42D8715(), 0, 0)))
	{
	}
	else if (!unk_0x411C28019DEA5CEF(iParam0, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_103(bParam1), 3) && unk_0xF9D4EF1338E38AFB(iParam0, -2017877118) != 1)
	{
		if (func_535())
		{
			if (iParam0 == unk_0xA19140A5C42D8715())
			{
				if (!func_198(unk_0xD4E735F4B6A956AC()))
				{
					iVar0 = unk_0x774CB20D17C3FF03(unk_0xA19140A5C42D8715(), 6);
					if (!func_509(256))
					{
						func_189(256);
						iLocal_84 = iVar0;
						iLocal_85 = unk_0x7710E77D1959B321(unk_0xA19140A5C42D8715(), 6);
						unk_0x72A0FF8C49CFFC0D(unk_0xA19140A5C42D8715(), 6, 1, 0, 0);
						func_189(1024);
					}
				}
				unk_0x3F01127ECD227890(iParam0, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_358(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				unk_0x3F01127ECD227890(iParam0, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_358(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			unk_0x3F01127ECD227890(iParam0, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_358(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		if (unk_0x411C28019DEA5CEF(iParam0, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_358(bParam1), 3))
		{
			if (unk_0xE5B5A1FFAA0834BD(iParam0, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_358(bParam1)) >= 0.95f)
			{
				unk_0x3F01127ECD227890(iParam0, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_103(bParam1), 8f, -2f, -1, 1, 0, 0, 0, 0);
			}
		}
		if (unk_0x411C28019DEA5CEF(iParam0, func_44(unk_0xA19140A5C42D8715(), 0, 0), func_103(bParam1), 3))
		{
			return 1;
		}
	}
	return 0;
}

var func_358(bool bParam0)
{
	if (!func_476(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_39(0);
		}
		else
		{
			return func_39(1);
		}
	}
	if (bParam0)
	{
		return func_40(0);
	}
	return func_40(1);
}

void func_359(int iParam0)
{
	*iParam0 = -15;
}

int func_360(int iParam0)
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
	iVar0 = func_322(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_323(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_324(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_327(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_326(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_325(iParam0);
	if (iVar5 < 1 || iVar5 > func_336(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_361()
{
	if (unk_0x4915F4759304D5CF(iLocal_90))
	{
		return;
	}
	unk_0x68995A99EFE15C73(iLocal_90);
	if (!unk_0x958D2327555FAEA5(iLocal_90))
	{
		if (iLocal_70 < 1)
		{
			unk_0xE85BD4A26C0DFACA(iLocal_90, "HOOKER_OFFER_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			unk_0xE85BD4A26C0DFACA(iLocal_90, "HOOKER_OFFER_AGAIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

int func_362()
{
	if (func_363(0, -1, 0) && unk_0x61346376C1469A0E("SCRIPT\HUD_321_GO", true, -1))
	{
		return 1;
	}
	return 0;
}

bool func_363(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_318(&iVar0, 1, iParam1))
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
	bVar2 = func_364(&(Global_17367.f_5658[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_364(var uParam0)
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

void func_365()
{
	if (!func_535())
	{
		return;
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_90))
	{
		iLocal_58 = unk_0x24A1A7BF4ED94B71(iLocal_90);
	}
}

void func_366()
{
	int iVar0;
	
	if (!func_535())
	{
		return;
	}
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
			if (unk_0xDC5D81351D6A4DDB(iVar0))
			{
				vLocal_56 = { unk_0xE2BBD32891C18569(iVar0, true) };
			}
		}
	}
}

void func_367(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_318(&iVar0, 0, iParam1))
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
		func_368(&(Global_17367.f_5658[iVar0 /*10*/]));
		Global_17367.f_5719[iVar0] = 0;
	}
	else
	{
		Global_17367.f_5719[iVar0] = 0;
	}
}

void func_368(int iParam0)
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

int func_369()
{
	if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 0)
	{
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				iLocal_93 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
				if (!iLocal_93 == 0)
				{
					if ((unk_0x1095F403F52B42E1(iLocal_93, 0) && !unk_0x463E3A48A46C9195(iLocal_93)) && !unk_0xEE9EA5C5862BBFA3(iLocal_93))
					{
						if (func_85(&iLocal_93))
						{
							func_5(&iLocal_49, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_370()
{
	if (iLocal_70 == 0)
	{
		if (!func_476(iLocal_51, 1) && !func_476(iLocal_51, 16))
		{
			if (func_371(0))
			{
				func_468(&iLocal_51, 1);
			}
		}
		if (!func_476(iLocal_51, 4) && !func_476(iLocal_51, 64))
		{
			if (func_371(2))
			{
				func_468(&iLocal_51, 4);
			}
		}
		if (!func_476(iLocal_51, 8) && !func_476(iLocal_51, 128))
		{
			if (func_371(1))
			{
				func_468(&iLocal_51, 8);
			}
		}
	}
}

int func_371(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	vVar0 = { func_179(iParam0) };
	vVar1 = { unk_0xE2BBD32891C18569(iLocal_93, true) };
	if (iLocal_299[iParam0] == 0)
	{
		if (unk_0x8F474E419F56E48D(iLocal_93) == -376434238)
		{
			iLocal_299[iParam0] = unk_0xFC629A9C757A492E(vVar0, vVar1, 0.1f, 511, iLocal_93, 3);
		}
		else if ((unk_0x8F474E419F56E48D(iLocal_93) == joaat("casco") || unk_0x8F474E419F56E48D(iLocal_93) == joaat("feltzer3")) || unk_0x8F474E419F56E48D(iLocal_93) == 1617472902)
		{
			iLocal_299[iParam0] = unk_0xFC629A9C757A492E(vVar0, vVar1, 0.15f, 511, iLocal_93, 3);
		}
		else
		{
			iLocal_299[iParam0] = unk_0xFC629A9C757A492E(vVar0, vVar1, 0.25f, 511, iLocal_93, 3);
		}
	}
	else
	{
		switch (unk_0x7C00B4755E048785(iLocal_299[iParam0], &iVar2, &uVar3, &uVar4, &uVar5))
		{
			case 2:
				iLocal_299[iParam0] = 0;
				if (iVar2 != 0)
				{
					func_372(iParam0);
					return 0;
				}
				else
				{
					return 1;
				}
				break;
			
			case 1:
				break;
			
			case 0:
				iLocal_299[iParam0] = 0;
				break;
			}
	}
	return 0;
}

void func_372(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!func_476(iLocal_51, 16))
			{
				func_468(&iLocal_51, 16);
				func_5(&iLocal_51, 1);
			}
			break;
		
		case 1:
			if (!func_476(iLocal_51, 128))
			{
				func_468(&iLocal_51, 128);
				func_5(&iLocal_51, 8);
			}
			break;
		
		case 2:
			if (!func_476(iLocal_51, 64))
			{
				func_468(&iLocal_51, 64);
				func_5(&iLocal_51, 4);
			}
			break;
		
		case 3:
			if (!func_476(iLocal_51, 32))
			{
				func_468(&iLocal_51, 32);
				func_5(&iLocal_51, 2);
			}
			break;
	}
}

void func_373()
{
	if (func_378() && !unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
	{
		iLocal_286 = 9;
		func_376(iLocal_90);
		func_376(unk_0xA19140A5C42D8715());
		func_374();
		func_34(&iLocal_98);
	}
}

void func_374()
{
	struct<7> Var0;
	struct<7> Var1;
	
	if (!unk_0x37B568B777BC65F9(iLocal_96))
	{
		iLocal_96 = unk_0x57FC10C74CC15F22("DEFAULT_SCRIPTED_CAMERA", true);
	}
	if (!unk_0x37B568B777BC65F9(iLocal_97))
	{
		iLocal_97 = unk_0x57FC10C74CC15F22("DEFAULT_SCRIPTED_CAMERA", true);
	}
	func_375(&Var0, &Var1);
	unk_0x057123F3A835FE47(iLocal_96, Var0);
	unk_0xC831502E35848BE4(iLocal_96, Var0.f_3, 2);
	unk_0xF62A5A3CB8DB2402(iLocal_96, Var0.f_6);
	unk_0x057123F3A835FE47(iLocal_97, Var1);
	unk_0xC831502E35848BE4(iLocal_97, Var1.f_3, 2);
	unk_0xF62A5A3CB8DB2402(iLocal_97, Var1.f_6);
	unk_0x930701157A4B9374(iLocal_96, true);
	unk_0x930701157A4B9374(iLocal_97, false);
	unk_0x8E88E73F74A9FF79(true, false, 3000, 1, 0, 0);
}

void func_375(var uParam0, var uParam1)
{
	switch (func_18())
	{
		case 0:
			*uParam0 = { -823.9435f, 186.8976f, 75.5221f };
			uParam0->f_3 = { -18.973f, 0f, -179.5878f };
			uParam0->f_6 = 50f;
			*uParam1 = { -828.0038f, 179.5113f, 75.7418f };
			uParam1->f_3 = { 14.0219f, 0f, -107.3339f };
			uParam1->f_6 = 50f;
			break;
		
		case 1:
			*uParam0 = { -20.162f, -1443.916f, 31.9468f };
			uParam0->f_3 = { -12.0736f, 0f, -130.562f };
			uParam0->f_6 = 50f;
			*uParam1 = { -15.925f, -1446.92f, 31.9534f };
			uParam1->f_3 = { -10.3101f, 0f, 34.3879f };
			uParam1->f_6 = 50f;
			break;
		
		case 2:
			*uParam0 = { 1972.248f, 3804.805f, 36.7174f };
			uParam0->f_3 = { -19.6476f, 0f, -45.6158f };
			uParam0->f_6 = 50f;
			*uParam1 = { 1970.194f, 3807.541f, 35.5247f };
			uParam1->f_3 = { -15.8717f, 0f, 41.6556f };
			uParam1->f_6 = 50f;
			break;
	}
}

void func_376(int iParam0)
{
	int iVar0;
	
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		unk_0x3A95A0A3221D4208(&iVar0);
		unk_0x2F89329397A277BC(&iVar0);
		if (unk_0x5D7DFE2058701942(iParam0, 0))
		{
			unk_0xCB482EF95FAE4D73(0, 0, 16842752);
		}
		unk_0x956B3CF461C0C1C9(0, func_377(), 1f, -1, 0.5f, 8192, 1193033728);
		unk_0x301F42EEE3C40328(iVar0);
		unk_0xE1072FA2FECBAD96(iParam0, iVar0);
		unk_0x3A95A0A3221D4208(&iVar0);
	}
}

Vector3 func_377()
{
	switch (func_18())
	{
		case 0:
			return -819.88f, 177.47f, 70.63f;
			break;
		
		case 1:
			return -14.57f, -1437.56f, 30.12f;
			break;
		
		case 2:
			return 1972.16f, 3817.47f, 32.43f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_378()
{
	return vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), func_380()) < (func_379() * func_379());
}

float func_379()
{
	switch (func_18())
	{
		case 0:
			return 20.75f;
			break;
		
		case 1:
			return 10f;
			break;
		
		case 2:
			return 14f;
			break;
	}
	return 0f;
}

Vector3 func_380()
{
	switch (func_18())
	{
		case 0:
			return -827.04f, 172.26f, 69.48f;
			break;
		
		case 1:
			return -16.98f, -1451.59f, 29.57f;
			break;
		
		case 2:
			return 1983.22f, 3820.64f, 31.37f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_381()
{
	func_319();
	func_396();
	if (!func_10(&iLocal_101))
	{
		func_458(&iLocal_101);
	}
	if (func_395())
	{
		return;
	}
	if (!func_10(&iLocal_110))
	{
		func_458(&iLocal_110);
	}
	if (func_369() && unk_0xE0FD180CD24C0B67(iLocal_90, iLocal_93, 0))
	{
		if (unk_0x097275D546C9735F(iLocal_93) && unk_0x678F978B0FAD24D2(iLocal_93))
		{
			if ((func_388() && !func_378()) && !func_387())
			{
				func_386();
				if (func_7(&iLocal_110) > 2.5f)
				{
					iLocal_83 = unk_0xFAFCEBFB311E0625(unk_0xE2BBD32891C18569(iLocal_93, false), 40f, 40f, 40f, unk_0x552C823E1D2A019C(iLocal_93), 0, 7);
					unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 896);
					func_468(&iLocal_49, 2048);
					iLocal_94 = 0;
					unk_0x94E87D83163B4BEB("ProstituteInPlay", &iLocal_298);
					unk_0x80E7C4A78224C8F9(1, iLocal_298, 1862763509);
					unk_0xDFA901280292A2FB(iLocal_90, iLocal_298);
					func_477("Moving into sex state eCurrentProstituteState = PROSTITUTE_CHOOSING_SERVICE ");
					func_5(&iLocal_49, 1024);
					iLocal_295 = -15;
					func_121();
					func_385();
					iLocal_81 = 3;
					if (func_42(0, 1))
					{
						unk_0xB9514DB95C310944(false);
					}
					iLocal_286 = 8;
				}
			}
			else
			{
				if ((!unk_0x958D2327555FAEA5(unk_0xA19140A5C42D8715()) && func_7(&iLocal_101) > 15f) && func_384())
				{
					if (!func_476(iLocal_50, 4096))
					{
						func_338("PROS_SPOT", -1);
						func_468(&iLocal_50, 4096);
					}
					func_383();
					func_34(&iLocal_101);
				}
				func_34(&iLocal_110);
			}
		}
		else
		{
			func_34(&iLocal_110);
			func_382();
		}
	}
	else if (!func_378())
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_90))
		{
			if (!unk_0x4915F4759304D5CF(iLocal_90))
			{
				unk_0x9568B1B58F78FF36(iLocal_90);
			}
		}
		func_459(0);
	}
}

void func_382()
{
	iLocal_51 = 0;
	iLocal_299[0] = 0;
	iLocal_299[1] = 0;
	iLocal_299[2] = 0;
	iLocal_299[3] = 0;
}

void func_383()
{
	if (unk_0x4915F4759304D5CF(iLocal_90))
	{
		return;
	}
	if (!unk_0x958D2327555FAEA5(iLocal_90))
	{
		unk_0xE85BD4A26C0DFACA(iLocal_90, "HOOKER_SECLUDED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_384()
{
	if (!func_476(iLocal_51, 256))
	{
		return 1;
	}
	return func_476(iLocal_51, 32);
}

void func_385()
{
	if (func_535())
	{
		unk_0x13E0A8160525AE55(iLocal_90, 229, true);
		unk_0x13E0A8160525AE55(iLocal_90, 26, true);
		unk_0x13E0A8160525AE55(iLocal_90, 115, true);
		unk_0x1F4E5EFBFE503FB3(iLocal_90, true);
	}
}

void func_386()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	if (!func_476(iLocal_49, 2097152))
	{
		if (unk_0xFD34717937104F1C() > iLocal_82)
		{
			if (iLocal_94 == 0)
			{
				vVar0 = { unk_0xE2BBD32891C18569(iLocal_93, true) };
				unk_0x8F7BA8E028ADF980(vVar0, &fVar2, 0, 0);
				vVar0.z = (fVar2 + 0.15f);
				vVar1 = { unk_0x3201284584C7CD83(iLocal_93, 0f, 0f, -2f) };
				iLocal_94 = unk_0x2655F64CD0F70A6B(vVar0, vVar1, 2f, 511, iLocal_93, 7);
			}
			else if (unk_0x2C8266B4AB07E621(iLocal_94, &iVar4, &uVar5, &uVar6, &iVar3, &uVar7) == 2)
			{
				if (iVar4 != 0)
				{
					if ((iVar3 == -1447280105 || iVar3 == 1925605558) || iVar3 == 2128369009)
					{
						func_34(&iLocal_110);
					}
				}
				iLocal_82 = unk_0xFD34717937104F1C() + 1500;
				iLocal_94 = 0;
			}
		}
	}
}

int func_387()
{
	int iVar0;
	
	iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
	if (unk_0x1095F403F52B42E1(iVar0, 0))
	{
		if (!unk_0x588F5E48C78F1C73(iVar0, 0, 0))
		{
			if (unk_0x4374EED90C523366(unk_0xA19140A5C42D8715()) || unk_0x4374EED90C523366(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_388()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			iLocal_93 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
		}
		vVar1 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) };
		if (unk_0x07EC788D27AB67D3(vVar1, func_59(0), 12f, 0) || unk_0x07EC788D27AB67D3(vVar1, func_59(1), 12f, 0))
		{
			return 0;
		}
		if (func_394())
		{
			return 0;
		}
		if (func_393(iLocal_93, &vVar2))
		{
			if (!func_392(vVar2))
			{
				if (!func_391(vVar1) || func_390(vVar1))
				{
					return 0;
				}
			}
		}
		if (func_84(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), (30f * 0.5f)))
		{
			return 0;
		}
		if (!unk_0x5860446BFB759B77(iLocal_90, iLocal_93, 0, 0, false))
		{
			return 0;
		}
		unk_0x56034861306E5ABC(1);
		if (unk_0x00A7785CBA069915(vVar1, 20f, 1, 1, &iVar0, 0, 1, -1))
		{
			if (unk_0xDC5D81351D6A4DDB(iVar0))
			{
				if (!unk_0x7112137033807390(iVar0, 0))
				{
					if (unk_0x58DE86018EA47551(iVar0, iLocal_93, 17))
					{
						return 0;
					}
				}
			}
			else
			{
				func_477("NO VEHICLES FOUND");
			}
		}
		iVar3 = unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715());
		if (!iVar3 == 0)
		{
			func_477("IN AN INTERIOR");
			return 0;
		}
		if (func_389())
		{
			return 0;
		}
	}
	return 1;
}

int func_389()
{
	func_468(&iLocal_51, 256);
	if (!func_476(iLocal_51, 2))
	{
		if (func_371(3))
		{
			func_468(&iLocal_51, 2);
			func_5(&iLocal_51, 32);
		}
		return 1;
	}
	else
	{
		func_370();
	}
	return 0;
}

int func_390(vector3 vParam0)
{
	if (((((((((vdist(vParam0, 491.76f, -515.73f, 29.51f) <= 12f || vdist(vParam0, -1453.385f, -594.2627f, 29.7966f) <= 12f) || vdist(vParam0, -633.6086f, -332.3337f, 33.81f) <= 25f) || vdist(vParam0, -1493.191f, -693.9906f, 26.0665f) <= 25f) || vdist(vParam0, -1512.938f, -675.6082f, 27.4202f) <= 25f) || vdist(vParam0, -1388.642f, -1342.266f, 3.1626f) <= 25f) || vdist(vParam0, 50.2024f, -1392.306f, 28.4166f) <= 12f) || vdist(vParam0, 25.9811f, -1392.289f, 28.3356f) <= 12f) || vdist(vParam0, 10.0435f, -1391.596f, 28.3074f) <= 12f) || vdist(vParam0, -1196.6f, -519.6772f, 31.9742f) <= 12f)
	{
		return 1;
	}
	return 0;
}

int func_391(vector3 vParam0)
{
	if ((((((vdist(vParam0, -1582.782f, 5168.163f, 18.5615f) <= 15f || vdist(vParam0, -1445.73f, -640.8375f, 28.7804f) <= 15f) || vdist(vParam0, -348.7544f, 292.5813f, 83.9843f) <= 15f) || vdist(vParam0, -273f, 317.8898f, 92.2549f) <= 15f) || vdist(vParam0, -1627.935f, -1083.443f, 3.2819f) <= 40f) || vdist(vParam0, -1661.098f, -1057.73f, 2.5729f) <= 40f) || vdist(vParam0, -1518.358f, -553.8981f, 32.1463f) <= 15f)
	{
		func_468(&iLocal_49, 2097152);
		return 1;
	}
	func_5(&iLocal_49, 2097152);
	return 0;
}

int func_392(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = unk_0xD48AF06A1B183940(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), false), 1, 1, 1077936128, 0);
	unk_0x71C5C1FE45545D92(iVar0, &vParam0);
	if (unk_0x09586DC2AC6A64B7(iVar0))
	{
		if (!unk_0xE8509487D07FBBAB(iVar0))
		{
			if (vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), false), vParam0) > 400f)
			{
				return 1;
			}
		}
		else if (vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), false), vParam0) > 56.25f)
		{
			return 1;
		}
	}
	else if (!unk_0xE8509487D07FBBAB(iVar0))
	{
		if (vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), false), vParam0) > 400f)
		{
			return 1;
		}
	}
	else
	{
		iVar0 = unk_0xD48AF06A1B183940(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), false), 1, 8, 1077936128, 0);
		unk_0x71C5C1FE45545D92(iVar0, &vParam0);
		if (vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), false), vParam0) > 400f)
		{
			return 1;
		}
	}
	return 0;
}

int func_393(int iParam0, var uParam1)
{
	vector3 vVar0[4];
	
	vVar0[0 /*3*/] = { unk_0x3201284584C7CD83(iParam0, 2f, 0f, 0f) };
	vVar0[1 /*3*/] = { unk_0x3201284584C7CD83(iParam0, -2f, 0f, 0f) };
	vVar0[2 /*3*/] = { unk_0x3201284584C7CD83(iParam0, 0f, 2f, 0f) };
	vVar0[3 /*3*/] = { unk_0x3201284584C7CD83(iParam0, 0f, -2f, 0f) };
	if (unk_0x5AED11AE1D358697(vVar0[0 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x5AED11AE1D358697(vVar0[1 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x5AED11AE1D358697(vVar0[2 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x5AED11AE1D358697(vVar0[3 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	return 0;
}

bool func_394()
{
	return Global_68494;
}

int func_395()
{
	if (unk_0x8B1574454E8C2421(joaat("carwash1")) > 0 || unk_0x8B1574454E8C2421(joaat("carwash2")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_396()
{
	if (!func_476(iLocal_49, 128))
	{
		func_397(39, 1);
		func_397(40, 1);
		func_397(41, 1);
		func_397(42, 1);
		func_397(43, 1);
		func_397(44, 1);
		func_468(&iLocal_49, 128);
	}
}

void func_397(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_401(iParam0, 2, 1))
		{
			func_400(iParam0, 2, 1);
		}
	}
	else if (func_401(iParam0, 2, 1))
	{
		func_398(iParam0, 2, 1);
	}
}

void func_398(int iParam0, int iParam1, bool bParam2)
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
		if (func_146() == 0)
		{
			iVar0 = func_134(func_399(iParam0), -1, 0);
			unk_0xFA57C719261AA55D(&iVar0, iParam1);
			func_131(func_399(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_106070.f_668[iParam0]), iParam1);
	}
}

int func_399(int iParam0)
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

void func_400(int iParam0, int iParam1, bool bParam2)
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
		if (func_146() == 0)
		{
			iVar0 = func_134(func_399(iParam0), -1, 0);
			unk_0x2BCFB39E86340DAA(&iVar0, iParam1);
			func_131(func_399(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x2BCFB39E86340DAA(&(Global_106070.f_668[iParam0]), iParam1);
	}
}

int func_401(int iParam0, int iParam1, bool bParam2)
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
		if (func_146() == 0)
		{
			return unk_0x05EFB6A616B6FADE(func_134(func_399(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x05EFB6A616B6FADE(Global_106070.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_402(var uParam0)
{
	if (func_476(iLocal_49, 2))
	{
		if (!func_57())
		{
			return;
		}
		func_93(1);
	}
	func_62();
	func_526();
	if (func_535())
	{
		func_521(uParam0);
	}
}

void func_403()
{
	if (!unk_0x7112137033807390(iLocal_90, 0))
	{
		if (unk_0x10E54C268D1B3FED(iLocal_90, unk_0xA19140A5C42D8715(), 5f, 5f, 5f, 0, 1, 0) || func_476(iLocal_49, 8192))
		{
			unk_0xD481A812073CCF02(0, 101, 1);
			unk_0xD481A812073CCF02(0, 74, 1);
			unk_0x9EA8CBEA7355649E(0, 51);
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && unk_0x5D7DFE2058701942(iLocal_90, 0))
			{
				unk_0xA45E1AA8B9CF45AD(iLocal_90, 50);
				unk_0x82416ADE738F7F1F(iLocal_90, 5f);
				if (func_476(iLocal_49, 16))
				{
					if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
					{
						unk_0x0AF8514426CE63A2(unk_0xD4E735F4B6A956AC(), 1);
						func_5(&iLocal_49, 16);
					}
				}
				iLocal_93 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
				if (unk_0x1095F403F52B42E1(iLocal_93, 0))
				{
					if (unk_0xB10F7FE89663CB5B(iLocal_90, iLocal_93) && unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_93, 0))
					{
						func_477("***** prostitute IN VEHICLE****** ");
						if (func_476(iLocal_49, 8))
						{
							if (unk_0xD7AFBCBD45CE1D9D(func_86()))
							{
								if (func_414(iLocal_93))
								{
									unk_0x2D0A6B97553FE4E3(iLocal_90, unk_0xFEB6EEC0545AF7AA("MINI_PROSTITUTE_LOW_RESTRICTED_PASSENGER"));
								}
								else if (func_413(iLocal_93))
								{
									unk_0x2D0A6B97553FE4E3(iLocal_90, unk_0xFEB6EEC0545AF7AA("MINI_PROSTITUTE_LOW_RESTRICTED_NOAMBIENT_PASSENGER"));
								}
								else if (func_412(iLocal_93))
								{
									unk_0x2D0A6B97553FE4E3(iLocal_90, unk_0xFEB6EEC0545AF7AA("MINI_PROSTITUTE_LOW_LOWRIDER_PASSENGER"));
								}
								else if (func_411(iLocal_93))
								{
									unk_0x2D0A6B97553FE4E3(iLocal_90, unk_0xFEB6EEC0545AF7AA("MINI_PROSTITUTE_LOW_LOWRIDER2_PASSENGER"));
								}
								else if (func_410(iLocal_93))
								{
									unk_0x2D0A6B97553FE4E3(iLocal_90, unk_0xFEB6EEC0545AF7AA("MINI_PROSTITUTE_LOW_INFERNUS2_PASSENGER"));
								}
								else if (func_409(iLocal_93))
								{
									unk_0x2D0A6B97553FE4E3(iLocal_90, unk_0xFEB6EEC0545AF7AA("MINI_PROSTITUTE_LOW_SC1_PASSENGER"));
								}
								else if (func_408(iLocal_93))
								{
									unk_0x2D0A6B97553FE4E3(iLocal_90, unk_0xFEB6EEC0545AF7AA("MINI_PROSTITUTE_LOW_TEZERACT_PASSENGER"));
								}
								else if (func_407(iLocal_93))
								{
									unk_0x2D0A6B97553FE4E3(iLocal_90, unk_0xFEB6EEC0545AF7AA("MINI_PROSTITUTE_LOW_DOMINATOR3_PASSENGER"));
								}
								else if (func_406(iLocal_93))
								{
									unk_0x2D0A6B97553FE4E3(iLocal_90, unk_0xFEB6EEC0545AF7AA("MINI_PROSTITUTE_LOW_ITALIGTO_PASSENGER"));
								}
								else
								{
									unk_0x2D0A6B97553FE4E3(iLocal_90, unk_0xFEB6EEC0545AF7AA("MINI_PROSTITUTE_LOW_PASSENGER"));
								}
							}
						}
						if (func_535())
						{
							unk_0x1F7948851FB36E88(iLocal_90, false, 0);
						}
						else
						{
							unk_0x1F7948851FB36E88(iLocal_90, true, 1);
						}
						func_175(iLocal_90, 0);
						func_383();
						iLocal_62 = unk_0xFD34717937104F1C();
						func_34(&iLocal_101);
						iLocal_286 = 7;
					}
					else
					{
						func_477("SOMETHINGS GONE WRONGWITH PROS GETTING INTO VEHICLE , either her or player");
					}
				}
			}
			else
			{
				if ((func_405(iLocal_90, unk_0xA19140A5C42D8715(), 1) > 11f || func_404(20f)) || !unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_93, 0))
				{
					func_108(&iLocal_107);
					if (!unk_0x5D7DFE2058701942(iLocal_90, 0))
					{
						unk_0x9568B1B58F78FF36(iLocal_90);
						func_459(0);
						func_477("PROS FINISHED SEQUENCE TASK BUT NOT IN VEHICLE");
						func_89(15);
					}
				}
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					if (!unk_0x1095F403F52B42E1(iLocal_93, 0))
					{
						iLocal_93 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
					}
					else if (!unk_0x5860446BFB759B77(iLocal_90, iLocal_93, 0, 0, false))
					{
						if (!func_105())
						{
							if (!func_476(iLocal_73, 1))
							{
								func_34(&iLocal_113);
								func_468(&iLocal_73, 1);
							}
							else if (func_7(&iLocal_113) > 20f)
							{
								func_119();
								func_477("prostitute couldn't get into the car");
								iLocal_286 = 6;
							}
						}
					}
				}
			}
		}
		else if (!func_476(iLocal_73, 1))
		{
			func_477("PLAYER out of range for entering VEHICLE or wanted level");
			unk_0x9568B1B58F78FF36(iLocal_90);
			func_89(15);
		}
	}
}

bool func_404(float fParam0)
{
	if (!func_10(&iLocal_107))
	{
		func_34(&iLocal_107);
	}
	return func_114(&iLocal_107) > fParam0;
}

float func_405(int iParam0, int iParam1, bool bParam2)
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

int func_406(int iParam0)
{
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		switch (unk_0x86CF814947084ADF(iParam0))
		{
			case 510359473:
				return 1;
				break;
			}
	}
	return 0;
}

int func_407(int iParam0)
{
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		switch (unk_0x86CF814947084ADF(iParam0))
		{
			case 1212243433:
				return 1;
				break;
			}
	}
	return 0;
}

int func_408(int iParam0)
{
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		switch (unk_0x86CF814947084ADF(iParam0))
		{
			case 570040040:
			case -193022774:
				return 1;
				break;
			}
	}
	return 0;
}

int func_409(int iParam0)
{
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		switch (unk_0x86CF814947084ADF(iParam0))
		{
			case 1192783831:
				return 1;
				break;
			}
	}
	return 0;
}

int func_410(int iParam0)
{
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		switch (unk_0x86CF814947084ADF(iParam0))
		{
			case -1546132012:
				return 1;
				break;
			}
	}
	return 0;
}

int func_411(int iParam0)
{
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		switch (unk_0x86CF814947084ADF(iParam0))
		{
			case 1837596901:
			case 2013836096:
				return 1;
				break;
			}
	}
	return 0;
}

int func_412(int iParam0)
{
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		switch (unk_0x86CF814947084ADF(iParam0))
		{
			case 1697345049:
			case -635697407:
				return 1;
				break;
			}
	}
	return 0;
}

int func_413(int iParam0)
{
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		switch (unk_0x86CF814947084ADF(iParam0))
		{
			case -782720499:
			case -38413156:
			case 2071837743:
				return 1;
				break;
			}
	}
	return 0;
}

int func_414(int iParam0)
{
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		switch (unk_0x86CF814947084ADF(iParam0))
		{
			case 542797648:
			case 68566729:
			case 2033852426:
			case -1820894825:
			case -1453479140:
			case 2130662788:
			case 1410462333:
			case -317944664:
			case -988377294:
				return 1;
				break;
			}
	}
	return 0;
}

void func_415(var uParam0)
{
	int iVar0;
	
	if (!func_424(0))
	{
		return;
	}
	if (!func_476(iLocal_49, 16))
	{
		unk_0x0AF8514426CE63A2(unk_0xD4E735F4B6A956AC(), 0);
		func_468(&iLocal_49, 16);
	}
	if (!func_10(&iLocal_107))
	{
		func_458(&iLocal_107);
	}
	if (func_114(&iLocal_107) >= 20f || !unk_0x10E54C268D1B3FED(iLocal_90, unk_0xA19140A5C42D8715(), 3f, 3f, 3f, 0, 1, 0))
	{
		if (func_476(iLocal_73, 524288))
		{
			func_108(&iLocal_107);
			iLocal_286 = 6;
		}
		else if (func_423())
		{
			func_34(&iLocal_107);
			func_468(&iLocal_73, 524288);
		}
	}
	func_63(iLocal_90);
	if (((unk_0x10E54C268D1B3FED(iLocal_90, unk_0xA19140A5C42D8715(), 3f, 3f, 3f, 0, 1, 0) || func_476(iLocal_73, 1)) && !func_209(0)) && !func_394())
	{
		if (!unk_0x5860446BFB759B77(iLocal_90, iLocal_93, 0, 0, false))
		{
			if (!func_105())
			{
				if (!func_476(iLocal_73, 1))
				{
					func_34(&iLocal_113);
					func_468(&iLocal_73, 1);
				}
				else if (func_7(&iLocal_113) > 10f)
				{
					func_62();
					unk_0x9568B1B58F78FF36(iLocal_90);
					func_477("prostitute couldn't get into the car");
					iLocal_286 = 6;
				}
			}
		}
		else
		{
			func_416();
		}
	}
	else if (func_456("PROS_ACCEPT"))
	{
		func_5(&iLocal_49, 1048576);
		func_454();
		if (func_535())
		{
			iVar0 = unk_0xF9D4EF1338E38AFB(iLocal_90, -2017877118);
			if (iVar0 != 1 && iVar0 != 0)
			{
				func_526();
				func_521(uParam0);
			}
		}
	}
}

void func_416()
{
	char* sVar0;
	
	if (iLocal_286 != 5 && func_355(&sVar0, 0))
	{
		func_419();
		if (func_417(iLocal_72, 1) || unk_0x0099F119B7ADB4B3(unk_0xD4E735F4B6A956AC()))
		{
			unk_0xE85BD4A26C0DFACA(unk_0xA19140A5C42D8715(), "HOOKER_REQUEST", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_468(&iLocal_49, 8192);
			func_34(&iLocal_107);
		}
		if (func_476(iLocal_49, 8192))
		{
			func_454();
			Global_25609 = 1;
			Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_405 = 1;
			func_124("PROSTITUTES_SOLICIT_SCENE");
			func_81("PROSTITUTES_DRIVE_SCENE");
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				if (unk_0xF9D4EF1338E38AFB(iLocal_90, -1794415470) != 1 && !unk_0xE0FD180CD24C0B67(iLocal_90, unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 1))
				{
					unk_0xA2EBCD9385E56019(iLocal_90, iLocal_93, -1, 0, 1f, 8388609, 0);
				}
			}
			sLocal_61 = func_44(unk_0xA19140A5C42D8715(), 1, 0);
			unk_0x6D68030C791111E0(sLocal_61);
			sLocal_61 = func_44(unk_0xA19140A5C42D8715(), 0, 1);
			unk_0x6D68030C791111E0(sLocal_61);
			func_34(&iLocal_101);
			iLocal_286 = 5;
		}
	}
}

int func_417(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_418(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x58E3CCF930D23BD5(unk_0xA6580F898F4E801C()))
	{
		return 0;
	}
	if (func_209(0))
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

int func_418(int iParam0)
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

void func_419()
{
	if (Global_25609)
	{
		if (unk_0xD1ABB20CFF127CCC())
		{
			return;
		}
		unk_0xD481A812073CCF02(0, 101, 1);
		unk_0xD481A812073CCF02(0, 74, 1);
		unk_0x9EA8CBEA7355649E(0, 51);
		if (!func_476(iLocal_49, 8192))
		{
			if (iLocal_72 == -1)
			{
				func_421(&iLocal_72, 5, "PROS_ACCEPT", 0, 0, 0, 0);
			}
		}
	}
	else if (func_420(iLocal_72, 0))
	{
		func_454();
	}
}

int func_420(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_418(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_36827[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_36827[iVar0 /*32*/].f_12)
	{
		unk_0x42FEBE6569FBB03A(&(Global_36827[iVar0 /*32*/].f_8));
		unk_0x4FDA9E6EF359F8A9(&Global_37022);
		iVar1 = unk_0x3D94488A86ABB03F(0);
	}
	else
	{
		unk_0x42FEBE6569FBB03A(&(Global_36827[iVar0 /*32*/].f_8));
		unk_0x4FDA9E6EF359F8A9(&Global_37022);
		if (Global_36827[iVar0 /*32*/].f_30)
		{
			unk_0xC327C023FDA37F2E(&(Global_36827[iVar0 /*32*/].f_13));
		}
		else
		{
			unk_0x4FDA9E6EF359F8A9(&(Global_36827[iVar0 /*32*/].f_13));
		}
		iVar1 = unk_0x3D94488A86ABB03F(0);
	}
	return iVar1;
}

void func_421(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8B1574454E8C2421(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x47C3DC461C758C29())
	{
		if (!*iParam0 == -1)
		{
			func_422(iParam0);
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

void func_422(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_418(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36827[iVar0 /*32*/])
		{
			Global_36827[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_423()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xDC5D81351D6A4DDB(iLocal_90) || unk_0x4915F4759304D5CF(iLocal_90))
	{
		return 1;
	}
	if (!func_535())
	{
		func_62();
		if (unk_0x5D7DFE2058701942(iLocal_90, 1))
		{
			unk_0x1CBE3F8ED90509B2(iLocal_90, 1193033728, 0);
		}
		else if (func_476(iLocal_49, 4194304))
		{
			iVar0 = unk_0x22C775856F4633CA(8, 11);
			unk_0x2F89329397A277BC(&iVar1);
			unk_0x3F01127ECD227890(0, func_61(iLocal_284), func_60(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0x3F01127ECD227890(0, func_61(iLocal_284), func_60(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0x301F42EEE3C40328(iVar1);
			unk_0xE1072FA2FECBAD96(iLocal_90, iVar1);
			unk_0x3A95A0A3221D4208(&iVar1);
		}
		return 1;
	}
	if (unk_0x5D7DFE2058701942(iLocal_90, 1))
	{
		if (unk_0xB540EEBB14C48518(iLocal_90))
		{
			unk_0x1CBE3F8ED90509B2(iLocal_90, 1193033728, 0);
			return 1;
		}
		else
		{
			unk_0x39926DD5354848E1(iLocal_90);
			return 0;
		}
	}
	switch (iLocal_55)
	{
		case 0:
			if (func_476(iLocal_49, 4194304))
			{
				func_62();
				iLocal_55 = 1;
			}
			break;
		
		case 1:
			if (unk_0xB540EEBB14C48518(iLocal_90))
			{
				unk_0x3F01127ECD227890(iLocal_90, func_61(iLocal_284), func_60(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
				iLocal_55 = 2;
			}
			else
			{
				unk_0x39926DD5354848E1(iLocal_90);
			}
			break;
		
		case 2:
			if (unk_0xB540EEBB14C48518(iLocal_90))
			{
				if (unk_0xF9D4EF1338E38AFB(iLocal_90, -2017877118) == 7)
				{
					iVar0 = unk_0x22C775856F4633CA(8, 11);
					unk_0x3F01127ECD227890(iLocal_90, func_61(iLocal_284), func_60(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
					iLocal_55 = 3;
				}
			}
			else
			{
				unk_0x39926DD5354848E1(iLocal_90);
			}
			break;
		
		case 3:
			iLocal_55 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_424(bool bParam0)
{
	if (unk_0x7112137033807390(iLocal_90, 0))
	{
		return 0;
	}
	if (func_476(iLocal_49, 8192))
	{
	}
	if (func_405(iLocal_90, unk_0xA19140A5C42D8715(), 1) > 11f)
	{
		return 0;
	}
	if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		return 0;
	}
	if (func_535())
	{
		if (unk_0xD9C213BBD19D77F0(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)) > 1)
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (unk_0xEAA5CEF8875FEEED(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)) > 2f)
		{
			return 0;
		}
	}
	if (func_84(unk_0xE2BBD32891C18569(iLocal_90, true), 1106247680))
	{
		if (!func_476(iLocal_50, 8192) && !unk_0x7C72DB6F19F878D7(unk_0xA19140A5C42D8715()))
		{
			func_338("PROS_COPS", -1);
			func_468(&iLocal_50, 8192);
		}
		return 0;
	}
	if (!func_369())
	{
		if (!func_535())
		{
			if ((!iLocal_86 && !Global_105117) && func_426(unk_0xA19140A5C42D8715(), 0) == -1)
			{
				func_338("PROS_CAR", -1);
				iLocal_86 = 1;
			}
			func_425();
		}
		else if (!func_509(4096))
		{
			func_338("PROS_CAR", -1);
			func_189(4096);
		}
		return 0;
	}
	return 1;
}

void func_425()
{
	if (unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		return;
	}
	if (!func_476(iLocal_49, 1))
	{
		if (!unk_0x958D2327555FAEA5(unk_0xA19140A5C42D8715()) && !unk_0x958D2327555FAEA5(iLocal_90))
		{
			unk_0xE85BD4A26C0DFACA(unk_0xA19140A5C42D8715(), "HOOKER_CAR_INCORRECT", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_468(&iLocal_49, 1);
		}
	}
}

int func_426(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		if (unk_0x5D7DFE2058701942(iParam0, iParam1))
		{
			iVar0 = unk_0xCAEB6CE71A2C7212(iParam0, iParam1);
			if (unk_0xDC5D81351D6A4DDB(iVar0))
			{
				iVar1 = unk_0xE251DF9395C4E1C4(unk_0x8F474E419F56E48D(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x588F5E48C78F1C73(iVar0, iVar3, 0))
					{
						if (unk_0xB0D49A1F9F054602(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_427()
{
	if (func_424(0))
	{
		func_416();
		if (unk_0xF9D4EF1338E38AFB(iLocal_90, 242628503) == 7 && !func_476(iLocal_49, 8192))
		{
			if (func_66(1))
			{
				func_108(&iLocal_107);
				iLocal_62 = unk_0xFD34717937104F1C();
				func_477("prostitute proposition player VEHICLE");
				iLocal_286 = 4;
			}
		}
	}
	else
	{
		unk_0x9568B1B58F78FF36(iLocal_90);
		func_89(15);
	}
}

void func_428(var uParam0)
{
	if (func_424(0))
	{
		func_416();
		if (unk_0xF9D4EF1338E38AFB(iLocal_90, 242628503) == 7 || func_476(iLocal_49, 8192))
		{
			iLocal_286 = 3;
		}
		else if (func_404(20f))
		{
			func_108(&iLocal_107);
			func_459(0);
		}
		else
		{
			func_429(uParam0);
		}
	}
	else
	{
		unk_0x9568B1B58F78FF36(iLocal_90);
		func_89(15);
	}
}

void func_429(var uParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	int iVar6;
	
	if (!unk_0xDC5D81351D6A4DDB(iLocal_93))
	{
		return;
	}
	unk_0xDFCF5BB9A4E3B293(unk_0x8F474E419F56E48D(iLocal_93), &vVar2, &vVar1);
	vVar0 = { vVar1 - vVar2 };
	vVar0 = { vVar0 / Vector(2f, 2f, 2f) };
	vVar3 = { unk_0x3201284584C7CD83(iLocal_93, -(vVar0.x + 0.2f), 0f, 0f) };
	vVar4 = { unk_0x3201284584C7CD83(iLocal_93, (vVar0.x + 0.2f), 0f, 0f) };
	vVar5 = { unk_0xE2BBD32891C18569(iLocal_90, true) };
	if (vdist(vVar5, vVar4) < vdist(vVar5, vVar3))
	{
		vVar3 = { vVar4 };
	}
	if ((unk_0xF9D4EF1338E38AFB(iLocal_90, -1794415470) != 1 || !func_476(iLocal_49, 8192)) && vdist2(vLocal_89, vVar3) > 0f)
	{
		if (func_535())
		{
			if (!unk_0x4943BEEC19289B8E(iLocal_90))
			{
				unk_0x1F7948851FB36E88(iLocal_90, false, 1);
			}
			func_439(&uLocal_281, func_61(iLocal_284));
			func_433(uParam0, 1);
			func_430(&uLocal_281, uParam0);
		}
		unk_0x2F89329397A277BC(&iVar6);
		unk_0x956B3CF461C0C1C9(0, vVar3.x, vVar3.y, vVar3.z, 1f, -1, 1f, 8192, 1193033728);
		unk_0xD87AD31611110768(0, unk_0x505186370955851F(unk_0xA19140A5C42D8715(), 31086, 0f, 0f, 0f), 0);
		unk_0x301F42EEE3C40328(iVar6);
		unk_0xE1072FA2FECBAD96(iLocal_90, iVar6);
		unk_0x3A95A0A3221D4208(&iVar6);
		vLocal_89 = { vVar3 };
	}
}

void func_430(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x7032042E5696FFD7((*uParam0)[iVar0]))
		{
			func_431(uParam1, (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_431(var uParam0, char* sParam1)
{
	func_432(uParam0, 1, -1, sParam1, 0);
}

void func_432(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
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
	if (!uParam0->f_271)
	{
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
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

void func_433(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_435(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_434(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_434(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_435(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*18*/], 30))
		{
			func_436(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_436(var uParam0)
{
	func_437(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_437(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x05EFB6A616B6FADE(iParam0, 30))
	{
		switch (func_438(iParam0))
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

int func_438(int iParam0)
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

int func_439(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x7032042E5696FFD7((*uParam0)[iVar0]))
		{
			if (unk_0x3CAC2741CC1A631F((*uParam0)[iVar0], sParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_440(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}

int func_440(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (unk_0x7032042E5696FFD7((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_441(var uParam0)
{
	char* sVar0;
	
	if (func_424(1))
	{
		if (!func_10(&iLocal_107))
		{
			func_458(&iLocal_107);
		}
		func_468(&iLocal_49, 4);
		Global_25610 = 1;
		func_416();
		if (func_457(&iLocal_107, 2f) || func_476(iLocal_49, 8192))
		{
			func_468(&iLocal_49, 2);
			if (func_355(&sVar0, 0))
			{
				unk_0xB583A7C3FEE69710(unk_0xA19140A5C42D8715(), 0);
				unk_0xFC03CFA3CE79D871(unk_0xA19140A5C42D8715(), 0);
				unk_0x22DD1D053CFF9707(unk_0xA19140A5C42D8715(), iLocal_90, -1, 2048, 4);
				func_429(uParam0);
				func_468(&iLocal_49, 4);
				Global_25609 = 1;
				Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_405 = 1;
				iLocal_286 = 2;
			}
			else
			{
				if (unk_0x3CAC2741CC1A631F(func_453(&sVar0), "PIM_HHIDCR"))
				{
					func_452(&sVar0, 30000);
					func_450(1);
				}
				else
				{
					func_338(&sVar0, -1);
				}
				if (!unk_0x429D45A6C6520026(&sVar0) && unk_0x3CAC2741CC1A631F(&sVar0, "PROS_NO_MONEY"))
				{
					func_442();
				}
				func_89(0);
				iLocal_287 = 0;
				func_468(&iLocal_49, 8388608);
				func_5(&iLocal_49, 4);
				Global_25609 = 0;
				Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_405 = 0;
			}
		}
	}
	else
	{
		func_5(&iLocal_49, 4);
		Global_25610 = 0;
	}
}

void func_442()
{
	if (!func_509(64))
	{
		func_443(0, 31, 5);
		func_189(64);
	}
}

void func_443(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xB114E5E548204793())
	{
		return;
	}
	if (unk_0x4C9BACA8D249CB13() && func_447(unk_0xD4E735F4B6A956AC(), 1))
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
	if (func_446())
	{
		return;
	}
	if (!func_444())
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

int func_444()
{
	if (func_445())
	{
		return 0;
	}
	if (unk_0x4F3E20635369D110() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_445()
{
	return Global_2458691;
}

bool func_446()
{
	return Global_2459349;
}

int func_447(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_448(iParam0))
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

bool func_448(int iParam0)
{
	return func_449(iParam0);
}

bool func_449(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_13.f_1, 0);
}

void func_450(int iParam0)
{
	unk_0xC01188479296013C(3, 21, 200, 0, 0);
	if (iParam0 && !func_451())
	{
		unk_0xE11F00B4AC919F45(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

bool func_451()
{
	return Global_2437022.f_2704[0 /*80*/].f_1 != 0;
}

void func_452(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, false, iParam1);
}

char* func_453(char* sParam0)
{
	return sParam0;
}

void func_454()
{
	if (iLocal_72 != -1)
	{
		func_422(&iLocal_72);
	}
}

void func_455(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_456(char* sParam0)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	return unk_0x3D94488A86ABB03F(0);
}

int func_457(int iParam0, float fParam1)
{
	if (func_217(iParam0, fParam1))
	{
		func_108(iParam0);
		return 1;
	}
	return 0;
}

void func_458(int iParam0)
{
	if (!func_10(iParam0))
	{
		func_34(iParam0);
	}
}

void func_459(int iParam0)
{
	bool bVar0;
	
	func_119();
	if (iParam0 || iLocal_70 == 0)
	{
		bVar0 = true;
		if (func_535())
		{
			bVar0 = false;
		}
		func_99(bVar0);
		func_89(14);
	}
	else
	{
		func_99(0);
		func_89(15);
	}
}

int func_460()
{
	if ((((((func_467() || func_466()) || func_465()) || func_464()) || func_461()) || Global_2394733) || Global_2394733.f_1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_461()
{
	if (func_463() || func_462())
	{
		return Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_98 == 8;
	}
	return 0;
}

var func_462()
{
	return Global_2448386.f_624;
}

bool func_463()
{
	return unk_0x05EFB6A616B6FADE(Global_2448386.f_2, 11);
}

bool func_464()
{
	return unk_0x05EFB6A616B6FADE(Global_2448386, 5);
}

bool func_465()
{
	return unk_0x05EFB6A616B6FADE(Global_2448386, 2);
}

bool func_466()
{
	return unk_0x05EFB6A616B6FADE(Global_2448386, 20);
}

var func_467()
{
	return Global_2448386.f_587;
}

void func_468(int iParam0, int iParam1)
{
	func_469(iParam0, iParam1);
}

void func_469(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_470()
{
	if (Global_25611)
	{
		return 0;
	}
	if (func_535())
	{
		return 0;
	}
	if (!func_473())
	{
		return 0;
	}
	if (func_471())
	{
		iLocal_287 = 4;
		return 1;
	}
	return 0;
}

int func_471()
{
	int iVar0;
	
	iLocal_92 = unk_0x4C059EBFED753303(unk_0xE2BBD32891C18569(iLocal_90, true), 15f, 0, 6);
	if (unk_0xDC5D81351D6A4DDB(iLocal_92) && !unk_0x7112137033807390(iLocal_92, 0))
	{
		if (unk_0x1095F403F52B42E1(iLocal_92, 0))
		{
			if (func_85(&iLocal_92))
			{
				iLocal_91 = unk_0xB0D49A1F9F054602(iLocal_92, -1, 0);
				if (!iLocal_91 == 0)
				{
					if (func_472(&iLocal_91))
					{
						iVar0 = unk_0x8F474E419F56E48D(iLocal_92);
						if (!iVar0 == joaat("taxi") && !iVar0 == joaat("taxi"))
						{
							if (!unk_0x4943BEEC19289B8E(iLocal_91))
							{
								unk_0x1F7948851FB36E88(iLocal_91, true, 0);
							}
							if (!unk_0x4943BEEC19289B8E(iLocal_92))
							{
								unk_0x1F7948851FB36E88(iLocal_92, true, 0);
							}
							unk_0x1F4E5EFBFE503FB3(iLocal_91, true);
							unk_0x98D1B1BD9C3AA456(iLocal_91, false, 1);
							unk_0x98D1B1BD9C3AA456(iLocal_92, false, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	iLocal_92 = 0;
	iLocal_91 = 0;
	return 0;
}

int func_472(int iParam0)
{
	if (!unk_0x4915F4759304D5CF(*iParam0))
	{
		if (unk_0x18F3A53F9DAFB8C9(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_473()
{
	if (unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0) || unk_0x7112137033807390(iLocal_90, 0))
	{
		return 0;
	}
	return 1;
}

int func_474()
{
	if ((!func_473() || !unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0)) || func_476(iLocal_49, 4096))
	{
		return 0;
	}
	if (func_476(iLocal_49, 32))
	{
		iLocal_287 = 2;
		func_93(2);
		func_477("IS_CUSTOMER_A_PLAYER is TRUE");
		return 1;
	}
	return 0;
}

void func_475()
{
	if (!unk_0x7112137033807390(iLocal_90, 0))
	{
		if (!unk_0x8B9D3A1A7C2D3C6B(iLocal_90))
		{
			if (unk_0xF9D4EF1338E38AFB(iLocal_90, 1805844857) != 1)
			{
				unk_0x1F4E5EFBFE503FB3(iLocal_90, false);
				unk_0xC2C4AE9DB4A0BEF3(iLocal_90, 196628, true);
				unk_0x57BAE9F63852E6FF(iLocal_90);
				unk_0x33B5487515BD13D5(iLocal_90, unk_0xA19140A5C42D8715(), 300f, -1, 1, 0);
				unk_0xD738221C247C8B71(iLocal_90, true);
				func_89(15);
			}
		}
	}
}

bool func_476(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_477(char* sParam0)
{
}

int func_478()
{
	if (unk_0x4915F4759304D5CF(iLocal_90))
	{
		return 0;
	}
	if (unk_0xF9D4EF1338E38AFB(iLocal_90, 1435919172) == 1)
	{
		return 0;
	}
	if (unk_0xB112D23B8518DD40(iLocal_90))
	{
		return 0;
	}
	return 1;
}

int func_479()
{
	switch (iLocal_291)
	{
		case 0:
			if (!func_535())
			{
				func_439(&uLocal_281, func_61(iLocal_284));
				func_430(&uLocal_281, &uLocal_367);
				func_477("Moving to PROSTITUTE_INIT_STREAMING");
			}
			if (func_535())
			{
				unk_0x7F2854D39965C275(1);
				unk_0xA721D9ED3827732A(1);
				unk_0x39926DD5354848E1(iLocal_90);
			}
			iLocal_291 = 1;
			break;
		
		case 1:
			if (!func_535())
			{
				if (func_480(&uLocal_367))
				{
					func_468(&iLocal_49, 4194304);
					func_477("Moving to PROSTITUTE_INIT_INIT");
					iLocal_291 = 2;
				}
			}
			else if (func_535())
			{
				func_468(&iLocal_49, 4194304);
				func_477("Moving to PROSTITUTE_INIT_INIT");
				iLocal_291 = 2;
			}
			break;
		
		case 2:
			iLocal_288 = 0;
			iLocal_67 = iLocal_288;
			func_5(&iLocal_49, 512);
			func_5(&iLocal_49, 1024);
			iLocal_287 = 0;
			iLocal_91 = 0;
			iLocal_92 = 0;
			func_477("Moving to PROSTITUTE_INIT_COMPLETE");
			iLocal_291 = 3;
			break;
		
		case 3:
			if (!unk_0x4915F4759304D5CF(iLocal_90))
			{
				if (!func_535())
				{
					unk_0x1F4E5EFBFE503FB3(iLocal_90, false);
					unk_0xF5576F3CE9F6C386(iLocal_90, 0);
					func_455(&uLocal_116, 4, iLocal_90, "Prostitutes", 0, 1);
					return 1;
				}
				else if (!unk_0xB540EEBB14C48518(iLocal_90))
				{
					unk_0x39926DD5354848E1(iLocal_90);
				}
				else
				{
					unk_0x1F4E5EFBFE503FB3(iLocal_90, false);
					func_455(&uLocal_116, 4, iLocal_90, "Prostitutes", 0, 1);
					unk_0xF5576F3CE9F6C386(iLocal_90, 0);
					unk_0xF112280B31B913CA(iLocal_90);
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_480(var uParam0)
{
	return func_481(uParam0);
}

int func_481(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_482(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_482(var uParam0)
{
	return func_483(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_483(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x05EFB6A616B6FADE(iParam0, 30))
	{
		if (unk_0x05EFB6A616B6FADE(iParam0, 29))
		{
			switch (func_438(iParam0))
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

int func_484()
{
	if (unk_0x47C3DC461C758C29())
	{
		if (func_18() == 0)
		{
			if (func_485(iLocal_90, 537.0014f, 119.0252f, 96.0997f, 1) <= 8f)
			{
				if (!unk_0x82384F63D814C864(iLocal_90, 1))
				{
					if (func_535())
					{
						unk_0x1F7948851FB36E88(iLocal_90, false, 0);
					}
					else
					{
						unk_0x1F7948851FB36E88(iLocal_90, true, 1);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

float func_485(int iParam0, vector3 vParam1, bool bParam2)
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

int func_486()
{
	if (unk_0x68128F973FA5E2E3(iLocal_90, func_59(0)))
	{
		if (unk_0xBA9F2E8BEDB5C602(iLocal_90, "amb@world_human_prostitute@crackhooker@base", "base"))
		{
			return 0;
		}
		if (unk_0xBA9F2E8BEDB5C602(iLocal_90, "amb@world_human_prostitute@cokehead@base", "base"))
		{
			return 1;
		}
	}
	if (unk_0x68128F973FA5E2E3(iLocal_90, func_59(1)))
	{
		if (unk_0xBA9F2E8BEDB5C602(iLocal_90, "amb@world_human_prostitute@french@base", "base"))
		{
			return 3;
		}
		if (unk_0xBA9F2E8BEDB5C602(iLocal_90, "amb@world_human_prostitute@hooker@base", "base"))
		{
			return 2;
		}
	}
	return -1;
}

void func_487()
{
	if (unk_0x7112137033807390(iLocal_90, 0))
	{
		return;
	}
	if (iLocal_285 != 3 && iLocal_285 != 4)
	{
		func_488(unk_0xA19140A5C42D8715());
	}
	else if (iLocal_285 == 3)
	{
		func_488(iLocal_91);
	}
}

void func_488(int iParam0)
{
	if (unk_0x7112137033807390(iParam0, 0))
	{
		return;
	}
	if (func_535())
	{
		if (!unk_0xB540EEBB14C48518(iParam0))
		{
			unk_0x39926DD5354848E1(iParam0);
			return;
		}
	}
	if (func_405(iParam0, iLocal_90, 1) < 30f)
	{
		if (!unk_0x85875A8777624591(iLocal_90, iParam0))
		{
			if (func_535())
			{
				if (unk_0xB540EEBB14C48518(iLocal_90))
				{
					unk_0x53FF9BDD8529ACD2(iLocal_90);
					unk_0x22DD1D053CFF9707(iLocal_90, iParam0, -1, 2048, 4);
				}
			}
			else
			{
				unk_0x53FF9BDD8529ACD2(iLocal_90);
				unk_0x22DD1D053CFF9707(iLocal_90, iParam0, -1, 2048, 4);
			}
		}
	}
	else if (unk_0x85875A8777624591(iLocal_90, iParam0))
	{
		if (func_535())
		{
			if (unk_0xB540EEBB14C48518(iLocal_90))
			{
				unk_0x53FF9BDD8529ACD2(iLocal_90);
			}
		}
		else
		{
			unk_0x53FF9BDD8529ACD2(iLocal_90);
		}
	}
}

void func_489()
{
	if (Global_25609)
	{
		if (unk_0x1095F403F52B42E1(iLocal_93, 0))
		{
			if (unk_0xE0FD180CD24C0B67(iLocal_90, iLocal_93, 0))
			{
				func_490();
			}
		}
		return;
	}
	if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0)
	{
		return;
	}
	if (unk_0x7112137033807390(iLocal_90, 0) || !unk_0xDC5D81351D6A4DDB(iLocal_90))
	{
		if (Global_25613 != unk_0xFCB3E4B16B4A9EC1() && func_476(iLocal_49, 32))
		{
			func_5(&iLocal_49, 32);
		}
		return;
	}
	if ((vdist2(unk_0xE2BBD32891C18569(iLocal_90, true), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true)) < Global_25612 || Global_25612 == 0f) && iLocal_287 != 4)
	{
		Global_25612 = vdist2(unk_0xE2BBD32891C18569(iLocal_90, true), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true));
		Global_25613 = unk_0xFCB3E4B16B4A9EC1();
		func_468(&iLocal_49, 32);
	}
	else if (Global_25613 == unk_0xFCB3E4B16B4A9EC1())
	{
		Global_25612 = vdist2(unk_0xE2BBD32891C18569(iLocal_90, true), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true));
	}
	else
	{
		func_5(&iLocal_49, 32);
	}
}

void func_490()
{
	if (func_535())
	{
		if (unk_0xB540EEBB14C48518(iLocal_90))
		{
			unk_0xB0D7019224A3A443(iLocal_90, 323, true);
		}
	}
	else
	{
		unk_0xB0D7019224A3A443(iLocal_90, 323, true);
	}
}

void func_491(var uParam0)
{
	if (!iLocal_286 == 12)
	{
		if (!unk_0x7112137033807390(iLocal_90, 0) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			if (func_495())
			{
				if (func_535())
				{
					func_116(0);
					unk_0xC2C4AE9DB4A0BEF3(iLocal_90, 196624, true);
					if (!unk_0x4943BEEC19289B8E(iLocal_90))
					{
						unk_0x1F7948851FB36E88(iLocal_90, true, 0);
					}
					unk_0x33B5487515BD13D5(iLocal_90, unk_0xA19140A5C42D8715(), 300f, -1, 0, 0);
					unk_0xD738221C247C8B71(iLocal_90, true);
					unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
					func_526();
					func_521(uParam0);
				}
				else
				{
					func_89(12);
				}
			}
			else if (unk_0xDEAEC99031DCB92A(iLocal_90, unk_0xA19140A5C42D8715(), 1))
			{
				iLocal_65++;
				if (iLocal_65 >= 2)
				{
					func_477("prostitute CLASSED AS UNDER ATTACK");
					iLocal_286 = 12;
				}
				else
				{
					func_477("prostitute BEEN HIT BY PLAYER");
					unk_0xDCB46BFC2265476A(iLocal_90);
				}
			}
			else if (func_493())
			{
				func_492();
				iLocal_286 = 12;
			}
		}
	}
}

void func_492()
{
	if (unk_0x4915F4759304D5CF(iLocal_90))
	{
		return;
	}
	unk_0x68995A99EFE15C73(iLocal_90);
	unk_0xE85BD4A26C0DFACA(iLocal_90, "APOLOGY_NO_TROUBLE", "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL", 1);
}

int func_493()
{
	int iVar0;
	
	if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		return 0;
	}
	if (!func_494())
	{
		return 0;
	}
	iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
	if (!unk_0x1095F403F52B42E1(iVar0, 0))
	{
		return 0;
	}
	if (unk_0x7C72DB6F19F878D7(unk_0xA19140A5C42D8715()))
	{
		return unk_0x7F75D2469509BADD(iVar0);
	}
	return 0;
}

int func_494()
{
	if (!func_535())
	{
		return 1;
	}
	else if (unk_0xDC5D81351D6A4DDB(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)))
	{
		if (unk_0xCC1BBE3267AB0DC9(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)))
		{
			if (unk_0xB0D49A1F9F054602(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), -1, 0) == unk_0xA19140A5C42D8715())
			{
				if (unk_0xB540EEBB14C48518(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)))
				{
					if (!unk_0x4943BEEC19289B8E(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)))
					{
						unk_0x1F7948851FB36E88(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), false, 0);
					}
					return 1;
				}
				else
				{
					unk_0x39926DD5354848E1(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0));
				}
			}
		}
		else
		{
			unk_0x803DEA837C78B4AE(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0));
		}
	}
	return 0;
}

int func_495()
{
	vector3 vVar0;
	
	if (!func_476(iLocal_49, 4096))
	{
		if (func_405(iLocal_90, unk_0xA19140A5C42D8715(), 1) < 30f)
		{
			vVar0 = { unk_0xE2BBD32891C18569(iLocal_90, true) };
			if ((((((unk_0x5EC525CDAB7A21A8(86, vVar0, 30f) || unk_0x5EC525CDAB7A21A8(89, vVar0, 30f)) || unk_0x5EC525CDAB7A21A8(88, vVar0, 30f)) || unk_0x5EC525CDAB7A21A8(102, vVar0, 30f)) || unk_0x5EC525CDAB7A21A8(114, vVar0, 30f)) || (unk_0x5EC525CDAB7A21A8(112, vVar0, 30f) && !func_535())) || unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715()))
			{
				if (!func_535())
				{
					unk_0x1F4E5EFBFE503FB3(iLocal_90, false);
				}
				func_468(&iLocal_49, 4096);
				return 1;
			}
		}
	}
	return 0;
}

int func_496()
{
	if ((unk_0xDC5D81351D6A4DDB(iLocal_90) && !unk_0x7112137033807390(iLocal_90, 0)) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		if (func_535())
		{
			if (func_537(unk_0xD4E735F4B6A956AC(), 0))
			{
				func_477("prostitute SCRIPT SHOULD EXIT - ANOTHER PLAYER IN VEHICLE");
				if (unk_0x5D7DFE2058701942(iLocal_90, 0))
				{
					func_99(0);
				}
				func_89(15);
				return 0;
			}
		}
		if (!unk_0x4915F4759304D5CF(iLocal_90))
		{
			if (!unk_0x5D7DFE2058701942(iLocal_90, 0))
			{
				if (!func_498(9))
				{
					if (!unk_0x7112137033807390(iLocal_90, 0) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
					{
						if (unk_0x10E54C268D1B3FED(iLocal_90, unk_0xA19140A5C42D8715(), 100f, 100f, 50f, 0, 1, 0))
						{
							return 1;
						}
						else
						{
							func_477("prostitute SCRIPT SHOULD EXIT - PLAYER WALKED AWAY FROM CAR");
							func_89(15);
						}
					}
				}
				else if (!(func_497() || unk_0x47C3DC461C758C29()))
				{
					func_477("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
					func_89(15);
				}
				else
				{
					return 1;
				}
			}
			else if (iLocal_286 == 0)
			{
				func_477("prostitute SCRIPT SHOULD EXIT - prostitute IN VEHICLE");
			}
			else if (!func_498(9) && !func_498(5))
			{
				return 1;
			}
			else if (!(func_497() || (unk_0x47C3DC461C758C29() && !func_395())))
			{
				func_477("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
				func_99(0);
				func_89(15);
			}
			else
			{
				return 1;
			}
		}
		else
		{
			func_477("prostitute SCRIPT SHOULD EXIT - INJURED");
		}
	}
	if (!unk_0xDC5D81351D6A4DDB(iLocal_90))
	{
		func_477("prostitute SCRIPT SHOULD EXIT - Prostitute doesn't exist");
	}
	if (unk_0x7112137033807390(iLocal_90, 0))
	{
		func_477("prostitute SCRIPT SHOULD EXIT - Prostitute is dead");
	}
	if (unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		func_477("prostitute SCRIPT SHOULD EXIT - Player is dead");
	}
	return 0;
}

int func_497()
{
	if (unk_0x8B1574454E8C2421(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_498(int iParam0)
{
	if (Global_36117 == 15)
	{
		return 0;
	}
	if (func_499(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_499(int iParam0)
{
	return func_500(iParam0, Global_36117);
}

int func_500(int iParam0, int iParam1)
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

void func_501()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5D7B2A77420FF19E(1))
	{
		iVar1 = unk_0x5712B9353A8F6573(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x8866A4E42CDA3EF1(1, iVar0, &Var2, 2);
			if (Var2 == -402989740)
			{
				if (Var2.f_1 == unk_0xD4E735F4B6A956AC())
				{
					func_189(128);
				}
			}
		}
		iVar0++;
	}
}

void func_502()
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		return;
	}
	if (!unk_0xB592B7A61F21E7A5())
	{
		return;
	}
	if (unk_0xBCC2AC37F56D2149(false, 0) != 1)
	{
		if (func_503(1, 0, 1))
		{
			if (unk_0xEBCEB76159738410(0) <= 1)
			{
				unk_0x7F2854D39965C275(1);
			}
		}
	}
}

bool func_503(int iParam0, bool bParam1, bool bParam2)
{
	return func_504(0, iParam0, 1, bParam1, bParam2);
}

int func_504(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x05EFB6A616B6FADE(Global_1380171, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_508(iParam0) - func_507(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_507(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_508(iParam0) - func_506(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_507(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_508(iParam0) - func_507(iParam0, 1));
		}
		if (!bParam4 && Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/] != 3)
		{
			iVar1 = (iVar1 - func_505(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_505(int iParam0)
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

int func_506(int iParam0)
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

int func_507(int iParam0, bool bParam1)
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

int func_508(int iParam0)
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

bool func_509(int iParam0)
{
	return func_476(iLocal_52, iParam0);
}

void func_510(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((unk_0x817B152F7462D506() >= (uParam0->f_272 + uParam0->f_273) || unk_0x05EFB6A616B6FADE(Global_93232.f_20, 2)) || unk_0x05EFB6A616B6FADE(Global_93232.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*18*/], 29))
					{
						func_511(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = unk_0x817B152F7462D506();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_511(int iParam0)
{
	func_512(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_512(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x05EFB6A616B6FADE(*iParam0, 30))
	{
		switch (func_438(*iParam0))
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

void func_513(int iParam0)
{
	if (func_476(iLocal_52, iParam0))
	{
		func_5(&iLocal_52, iParam0);
	}
}

void func_514()
{
	func_2(0);
	if (unk_0xDC5D81351D6A4DDB(iLocal_90))
	{
		if (!unk_0x7112137033807390(iLocal_90, 0))
		{
			func_2(1);
		}
		else
		{
			func_477("Prostitue: not continuing, prostitue is dead");
		}
	}
	else
	{
		func_477("Prostitue: not continuing, prostitue doesn't exist");
	}
	if (!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) || unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		func_2(0);
		func_477("Prostitue: not continuing, player isn't player or is dead");
	}
}

int func_515(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBF19BA6420EC428C();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_519();
			}
			else
			{
				return 0;
			}
		}
		if (!func_518())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x4C9BACA8D249CB13())
				{
					if (!bParam2)
					{
						func_519();
					}
					else
					{
						return 0;
					}
				}
				if (func_517())
				{
					if (!bParam2)
					{
						func_519();
					}
					else
					{
						return 0;
					}
				}
				if (func_516(155))
				{
					if (!bParam2)
					{
						func_519();
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
					func_519();
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
				func_519();
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
			func_519();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_516(int iParam0)
{
	if (unk_0xF10AFD11E6EE81BF(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_517()
{
	return Global_2448386.f_582;
}

bool func_518()
{
	return Global_1312834;
}

void func_519()
{
	unk_0x8F1A9FE6D91AAFEB();
}

void func_520()
{
	func_189(1);
}

void func_521(var uParam0)
{
	func_524();
	if (func_42(0, 1))
	{
		unk_0xB9514DB95C310944(true);
	}
	if (!unk_0x4915F4759304D5CF(iLocal_90))
	{
		if (unk_0x4943BEEC19289B8E(iLocal_90))
		{
			if ((func_535() && unk_0xF9D4EF1338E38AFB(iLocal_90, 1805844857) != 1) && unk_0xF9D4EF1338E38AFB(iLocal_90, -251125078) != 1)
			{
				unk_0x1CBE3F8ED90509B2(iLocal_90, 1193033728, 0);
				if (unk_0xB540EEBB14C48518(iLocal_90))
				{
					unk_0xD738221C247C8B71(iLocal_90, true);
				}
				if (unk_0x24B6018003B89ED4(iLocal_90))
				{
					unk_0x7E4E83D33161D01A(&iLocal_90);
				}
				unk_0x68995A99EFE15C73(iLocal_90);
			}
			else
			{
				if (unk_0x24B6018003B89ED4(iLocal_90))
				{
					unk_0x7E4E83D33161D01A(&iLocal_90);
				}
				unk_0x68995A99EFE15C73(iLocal_90);
			}
		}
	}
	iLocal_49 = 0;
	if (func_476(iLocal_49, 64))
	{
		Global_25611 = 0;
	}
	if (!unk_0x4915F4759304D5CF(iLocal_91))
	{
		unk_0x9568B1B58F78FF36(iLocal_91);
	}
	iLocal_91 = 0;
	iLocal_287 = 0;
	if (func_476(iLocal_49, 2048))
	{
		unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
	}
	func_5(&iLocal_49, 2048);
	func_523();
	if (func_535())
	{
		if (unk_0xA4D0862CD5E60478(iLocal_83))
		{
			unk_0x308B3DBB8CA58E54(iLocal_83);
		}
	}
	iLocal_92 = 0;
	func_524();
	func_522();
	Global_25612 = 0f;
	if (!Global_1673194.f_4233 && !Global_1673194.f_4237)
	{
		unk_0x7D772BC81E858E01();
	}
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		unk_0x0AF8514426CE63A2(unk_0xD4E735F4B6A956AC(), 1);
	}
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		if (func_509(256))
		{
			unk_0x72A0FF8C49CFFC0D(unk_0xA19140A5C42D8715(), 6, iLocal_84, iLocal_85, 0);
			func_189(1024);
		}
	}
	if (func_456("PROS_ACCEPT") && !Global_25609)
	{
		unk_0x135C61E339DABBAC(1);
	}
	if (Global_25613 == unk_0xFCB3E4B16B4A9EC1())
	{
		Global_25609 = 0;
		Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_405 = 0;
	}
	func_433(uParam0, 0);
	if (func_535())
	{
		func_189(2048);
	}
	else
	{
		unk_0x8F1A9FE6D91AAFEB();
	}
}

void func_522()
{
}

void func_523()
{
	Global_2437022.f_1151.f_10 = 0;
}

void func_524()
{
}

void func_525(bool bParam0)
{
	if (!unk_0x4915F4759304D5CF(iLocal_90))
	{
		if (unk_0x5D7DFE2058701942(iLocal_90, 0))
		{
			if (unk_0xF9D4EF1338E38AFB(iLocal_90, -828834893) != 1)
			{
				unk_0xCB482EF95FAE4D73(iLocal_90, 0, 65536);
			}
		}
		if (bParam0)
		{
			if (func_535())
			{
				if (unk_0x4943BEEC19289B8E(iLocal_90))
				{
					if (unk_0x24B6018003B89ED4(iLocal_90))
					{
						if (unk_0x8F01F94322569B77(unk_0xF1764ACD94FCB3A3(iLocal_90)))
						{
							unk_0xD738221C247C8B71(iLocal_90, true);
						}
					}
				}
			}
			else
			{
				unk_0xD738221C247C8B71(iLocal_90, true);
			}
		}
	}
}

void func_526()
{
	if (!func_535())
	{
		if (iLocal_286 == 11 || iLocal_286 == 13)
		{
			return;
		}
	}
	if (!unk_0x7112137033807390(iLocal_90, 0))
	{
		if (!unk_0x8B9D3A1A7C2D3C6B(iLocal_90))
		{
			func_89(0);
			iLocal_285 = 1;
		}
		if (func_535())
		{
			if (unk_0xB540EEBB14C48518(iLocal_90))
			{
				unk_0x1F4E5EFBFE503FB3(iLocal_90, false);
				unk_0x26ABEC1EEED61639(iLocal_90);
			}
		}
		else
		{
			unk_0x26ABEC1EEED61639(iLocal_90);
		}
		unk_0x3C50F1F859BA232B(iLocal_90, 0);
	}
	if (unk_0x1095F403F52B42E1(iLocal_93, 0) && !unk_0x7112137033807390(iLocal_93, 0))
	{
		if (func_535())
		{
			if (unk_0xB540EEBB14C48518(iLocal_93))
			{
				if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_24 <= 0 && !unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_273.f_22, 11))
				{
					unk_0xC87692063D3D3E05(iLocal_93, false);
					unk_0x6EB2D9504928F849(iLocal_93, 3);
					unk_0xBAC6F37667632916(iLocal_93, 0);
				}
				unk_0x9F3F43B8D4BC7F09(iLocal_93, true, 0);
			}
		}
		else
		{
			unk_0xC87692063D3D3E05(iLocal_93, false);
			unk_0x6EB2D9504928F849(iLocal_93, 3);
			unk_0xBAC6F37667632916(iLocal_93, 0);
		}
	}
	func_534(iLocal_74);
	func_534(iLocal_75);
	func_534(iLocal_76);
	func_534(iLocal_77);
	func_534(iLocal_78);
	func_534(iLocal_79);
	func_534(iLocal_80);
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0x53FF9BDD8529ACD2(unk_0xA19140A5C42D8715());
		if ((func_535() && iLocal_288 != 3) && func_476(iLocal_49, 2048))
		{
			unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
		}
		unk_0xB583A7C3FEE69710(unk_0xA19140A5C42D8715(), 1);
		unk_0xFC03CFA3CE79D871(unk_0xA19140A5C42D8715(), 1);
	}
	if (func_476(iLocal_49, 2048))
	{
		unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
	}
	func_5(&iLocal_49, 2048);
	unk_0x863EF4AF862F63EC(2, 19, 1);
	unk_0x863EF4AF862F63EC(2, 37, 1);
	func_523();
	iLocal_287 = 0;
	if (func_476(iLocal_49, 4))
	{
		func_5(&iLocal_49, 4);
		Global_25609 = 0;
		Global_25610 = 0;
		Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_405 = 0;
	}
	if (func_476(iLocal_49, 8))
	{
		if (unk_0xD7AFBCBD45CE1D9D(func_86()))
		{
			unk_0x5F781B32FAE8FB91(func_86());
		}
	}
	func_533();
	func_454();
	if (((func_456("PROS_ACCEPT") || func_456("PROS_CAM_TOG")) || func_456("PROS_RESPONSE")) || func_456("PROS_CAM_OC"))
	{
		func_5(&iLocal_49, 1048576);
		unk_0x135C61E339DABBAC(1);
	}
	func_354(0);
	unk_0xDC374DA4DC566237(true);
	if (func_476(iLocal_49, 8))
	{
		if (unk_0xD7AFBCBD45CE1D9D(func_86()))
		{
			unk_0x5F781B32FAE8FB91(func_86());
		}
	}
	func_124("PROSTITUTES_SOLICIT_SCENE");
	unk_0x2220B21A4CC075AC();
	func_116(0);
	unk_0xB9514DB95C310944(true);
	func_527();
	if (func_535())
	{
		if (func_509(2))
		{
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				if (unk_0xCC1BBE3267AB0DC9(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)))
				{
					if (unk_0xB540EEBB14C48518(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)))
					{
						unk_0xEE032FCCC9029460(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 0);
						unk_0x14293208022014FA(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 1);
					}
				}
			}
			else if (unk_0xCC1BBE3267AB0DC9(iLocal_93))
			{
				if (unk_0xB540EEBB14C48518(iLocal_93))
				{
					unk_0x14293208022014FA(iLocal_93, 1);
					unk_0xEE032FCCC9029460(iLocal_93, 0);
					unk_0xA71250388C9DB28D(iLocal_93, 0);
				}
				else
				{
					unk_0x39926DD5354848E1(iLocal_93);
					unk_0x14293208022014FA(iLocal_93, 1);
					unk_0xEE032FCCC9029460(iLocal_93, 0);
					unk_0xA71250388C9DB28D(iLocal_93, 0);
				}
			}
		}
	}
	func_181(23, 0);
	iLocal_49 = 0;
	iLocal_51 = 0;
}

void func_527()
{
	struct<8> Var0[2];
	struct<6> Var1[2];
	
	if (!func_532())
	{
		return;
	}
	if (!iLocal_47)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Type", 32);
	StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	StringCopy(&(Var1[1 /*6*/]), "????", 24);
	if (func_531(275, &Var1, &Var0, 2, -1, 0, 0))
	{
		unk_0x13BE64B38F002613(131, func_530(), 0f);
		unk_0x13BE64B38F002613(117, func_529(), 0f);
		unk_0x13BE64B38F002613(118, func_528(), 0f);
	}
}

int func_528()
{
	return iLocal_46;
}

int func_529()
{
	return iLocal_45;
}

int func_530()
{
	return 0;
}

int func_531(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!unk_0x18F86E07E41D913F())
	{
	}
	if ((!unk_0x4732C5888F325E52() && (unk_0x67AA88F93B931038() || !unk_0x4E64773FA9BA7A47())) && unk_0xFEA5B5B75143A4A9())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0xD1832FEBE50B1AB1())
			{
				Var2 = { func_311(unk_0xD4E735F4B6A956AC()) };
				if (unk_0xE0B3F7A8017F6425(&Var2))
				{
					if (unk_0xE087FDE0E2FA8ADF(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x4C9BACA8D249CB13() && Global_2456479.f_3)
			{
				unk_0x8E59A96C2642091A(&Var0, &(Global_1654691.f_10));
			}
			else
			{
				unk_0x217153D62FD30A42(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x4732C5888F325E52())
	{
	}
	if (!unk_0x67AA88F93B931038())
	{
	}
	if (unk_0x4E64773FA9BA7A47())
	{
	}
	if (!unk_0xFEA5B5B75143A4A9())
	{
	}
	return 0;
}

int func_532()
{
	if ((unk_0x18F86E07E41D913F() && unk_0xC29B8FF8374918FD()) && unk_0x4F3E20635369D110())
	{
		return 1;
	}
	return 0;
}

void func_533()
{
	if (func_476(iLocal_49, 128))
	{
		func_397(39, 0);
		func_397(40, 0);
		func_397(41, 0);
		func_397(42, 0);
		func_397(43, 0);
		func_397(44, 0);
		func_5(&iLocal_49, 128);
	}
}

void func_534(int iParam0)
{
	if (func_535())
	{
		if (func_211(iParam0))
		{
			unk_0xE501D670D61ECB65(iParam0);
		}
	}
}

bool func_535()
{
	return func_509(1);
}

bool func_536(int iParam0)
{
	return Global_36117 == iParam0;
}

int func_537(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_201(iParam0, 1, 1))
	{
		iVar0 = unk_0xEE978C39384D834F(iParam0);
		if (unk_0x5D7DFE2058701942(iVar0, iParam1))
		{
			iVar3 = unk_0xCAEB6CE71A2C7212(iVar0, 0);
			iVar1 = 0;
			while (iVar1 < 32)
			{
				iVar2 = unk_0x1483A8AE554B8B2B(iVar1);
				if (func_201(iVar2, 1, 1))
				{
					if (unk_0xEE978C39384D834F(iVar2) != iVar0)
					{
						if (unk_0xE0FD180CD24C0B67(unk_0xEE978C39384D834F(iVar2), iVar3, iParam1))
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_538(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_448(iParam0))
		{
			return 1;
		}
	}
	if ((((Global_1589747[iParam0 /*790*/] == 2 || Global_1589747[iParam0 /*790*/] == 1) || Global_1589747[iParam0 /*790*/] == 0) || Global_1589747[iParam0 /*790*/] == 3) || Global_1589747[iParam0 /*790*/] == 8)
	{
		return 1;
	}
	return 0;
}

