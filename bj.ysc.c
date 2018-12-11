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
	vector3 vLocal_22 = { 0f, 0f, 0f };
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
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
	struct<68> Local_98 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	vector3 vLocal_101 = { 0f, 0f, 0f };
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 3;
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
	var uLocal_153 = 4;
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
	var uLocal_218 = 2;
	var uLocal_219 = 0;
	var uLocal_220 = 4;
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
	var uLocal_286 = 4;
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
	var uLocal_357 = 12;
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
	var uLocal_538 = 3;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	int iLocal_542 = 0;
	int iLocal_543 = 0;
	int iLocal_544 = 0;
	int iLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	struct<4> Local_548 = { 0, 0, 0, 0 } ;
	var uLocal_549 = 16;
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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
	var uScriptParam_23 = 0;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 0;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
	var uScriptParam_29 = 0;
	var uScriptParam_30 = 0;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 0;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 0;
	var uScriptParam_41 = 0;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 0;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 0;
	var uScriptParam_47 = 0;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 0;
	var uScriptParam_53 = 0;
	var uScriptParam_54 = 0;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 0;
	var uScriptParam_59 = 0;
	var uScriptParam_60 = 0;
	var uScriptParam_61 = 0;
	var uScriptParam_62 = 0;
	var uScriptParam_63 = 0;
	var uScriptParam_64 = 0;
	var uScriptParam_65 = 0;
	var uScriptParam_66 = 0;
	var uScriptParam_67 = 0;
	var uScriptParam_68 = 0;
	var uScriptParam_69 = 0;
	var uScriptParam_70 = 0;
	var uScriptParam_71 = 0;
	var uScriptParam_72 = 0;
	var uScriptParam_73 = 0;
	var uScriptParam_74 = 0;
	var uScriptParam_75 = 0;
	var uScriptParam_76 = 0;
	var uScriptParam_77 = 0;
	var uScriptParam_78 = 0;
	var uScriptParam_79 = 0;
	var uScriptParam_80 = 0;
	var uScriptParam_81 = 0;
	var uScriptParam_82 = 0;
	var uScriptParam_83 = 0;
	var uScriptParam_84 = 0;
	var uScriptParam_85 = 0;
	var uScriptParam_86 = 0;
	var uScriptParam_87 = 0;
	var uScriptParam_88 = 0;
	var uScriptParam_89 = 0;
	var uScriptParam_90 = 0;
	var uScriptParam_91 = 0;
	var uScriptParam_92 = 0;
	var uScriptParam_93 = 0;
	var uScriptParam_94 = 0;
	var uScriptParam_95 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	var uVar4;
	var uVar5;
	struct<27> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<11> Var11;
	var uVar12;
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
	vector3 vVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	var uVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39[3];
	int iVar40;
	var uVar41;
	int iVar42;
	int iVar43;
	int iVar44[6];
	int iVar45;
	int iVar46;
	var uVar47;
	var uVar48;
	var uVar49;
	var uVar50;
	var uVar51;
	var uVar52;
	int iVar53;
	char* sVar54;
	struct<4> Var55;
	vector3 vVar56;
	vector3 vVar57;
	vector3 vVar58;
	vector3 vVar59;
	var uVar60;
	vector3 vVar61;
	vector3 vVar62;
	var uVar63;
	var uVar64;
	float fVar65;
	var uVar66;
	var uVar67;
	var uVar68;
	float fVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	var uVar87;
	var uVar88;
	int iVar89;
	bool bVar90;
	bool bVar91;
	int iVar92;
	bool bVar93;
	bool bVar94;
	var uVar95;
	bool bVar96;
	bool bVar97;
	bool bVar98;
	bool bVar99;
	bool bVar100;
	bool bVar101;
	bool bVar102;
	bool bVar103;
	bool bVar104;
	bool bVar105;
	bool bVar106;
	bool bVar107;
	bool bVar108;
	bool bVar109;
	bool bVar110;
	bool bVar111;
	bool bVar112;
	bool bVar113;
	int iVar114;
	vector3 vVar115;
	int iVar116;
	bool bVar117;
	
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
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	vLocal_101 = { 500f, 500f, 500f };
	uVar0 = 13;
	Var3.f_12 = 12;
	uVar5 = 2;
	Var6.f_3 = 8;
	Var6.f_12 = 8;
	Var6.f_21 = 4;
	Var6.f_26.f_32 = 3;
	Var6.f_26.f_36 = 1;
	Var6.f_26.f_53 = 2;
	Var6.f_26.f_57 = 13;
	Var6.f_26.f_71 = 13;
	Var6.f_26.f_280 = 13;
	Var6.f_26.f_489 = 13;
	Var6.f_26.f_503 = 13;
	Var6.f_26.f_517 = 13;
	Var6.f_26.f_531 = 13;
	Var11.f_10.f_2 = 8;
	Var11.f_10.f_2.f_1.f_3 = 4;
	Var11.f_10.f_2.f_1.f_15.f_3 = 4;
	Var11.f_10.f_2.f_1.f_15.f_15.f_3 = 4;
	Var11.f_10.f_2.f_1.f_15.f_15.f_15.f_3 = 4;
	Var11.f_10.f_2.f_1.f_15.f_15.f_15.f_15.f_3 = 4;
	Var11.f_10.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var11.f_10.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var11.f_10.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	iVar14 = -1;
	uVar32 = 16;
	iVar33 = ScriptParam_548;
	iVar42 = ScriptParam_548.f_3;
	iVar53 = "BJ_FAIL";
	sVar54 = "";
	vVar59 = { 5f, 5f, 10f };
	fVar65 = 1f;
	fVar69 = -1f;
	iVar70 = -1;
	iVar73 = -1;
	iVar77 = Global_106070.f_18939;
	iVar80 = 1;
	iVar81 = -1;
	bVar100 = false;
	bVar105 = true;
	bVar107 = false;
	bVar108 = false;
	bVar110 = true;
	bVar111 = false;
	bVar112 = false;
	bVar113 = false;
	if (unk_0xDC5D81351D6A4DDB(ScriptParam_548.f_1))
	{
		iVar40 = ScriptParam_548.f_1;
	}
	else
	{
		iVar40 = unk_0xC409B91AC4749F88();
	}
	bVar111 = unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), joaat("gadget_parachute"), 0);
	bVar112 = unk_0x41680BA6546EE751(unk_0xD4E735F4B6A956AC());
	if (bVar111)
	{
		unk_0xC76047B0AE3B1E93(unk_0xD4E735F4B6A956AC(), &iVar86);
		unk_0xFE4C24D1490D3EC8(unk_0xD4E735F4B6A956AC(), &uVar87);
	}
	if (bVar112)
	{
		unk_0x6E8FD4F30501E51A(unk_0xD4E735F4B6A956AC(), &uVar88);
	}
	if (unk_0xDC5D81351D6A4DDB(iVar40))
	{
		unk_0x1F7948851FB36E88(iVar40, true, 1);
	}
	if (unk_0x5B1F43E517A1588D())
	{
		unk_0xF3D41ED309762C0D(0);
	}
	if (unk_0x5EBD03AF78E7B4DB(82))
	{
		func_543(&Var3, &uVar51, &iVar33, &iVar34, &iVar36, &iVar39, &iVar40, &uVar32, &iVar42, &iVar43, &iVar44, iVar85, &iVar80, iVar45, iVar46, iVar13, &uVar41, bVar111);
	}
	if (iVar77 < 0)
	{
		return;
	}
	if (unk_0x05EFB6A616B6FADE(Global_106070.f_18939.f_1, iVar77))
	{
		fVar65 = 0.1f;
	}
	iVar13 = iVar77;
	func_542(0);
	unk_0x135C61E339DABBAC(1);
	unk_0xD07EE91CE9B6D4CF(1);
	func_541(23, 1);
	unk_0xC6B90106C92A44C9(1500f, 0, 21);
	func_515(&Var3, iVar13);
	if (unk_0xDC5D81351D6A4DDB(iVar42))
	{
		unk_0x1F7948851FB36E88(iVar42, true, 1);
	}
	if (unk_0xDC5D81351D6A4DDB(iVar33))
	{
		unk_0x1F7948851FB36E88(iVar33, true, 1);
		if (func_514(&Var3) != 0 && unk_0x8F474E419F56E48D(iVar33) == func_514(&Var3))
		{
			iVar36 = iVar33;
			iVar33 = 0;
		}
	}
	while (true)
	{
		if (!bVar105)
		{
			wait(0);
		}
		else
		{
			bVar105 = false;
		}
		if ((iVar7 >= 6 && iVar7 <= 10) && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			iVar15 = func_503();
		}
		if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			unk_0xB0D7019224A3A443(unk_0xA19140A5C42D8715(), 177, 1);
		}
		func_502();
		func_494(&uVar4);
		func_490(&Var6, iVar7);
		func_486(&Var6, iVar7, iVar13, bVar93);
		switch (iVar7)
		{
			case 0:
				func_485();
				if (unk_0x607776744A243309())
				{
					break;
				}
				func_479();
				func_478(1);
				func_474("AM_H_BASEJ", 1);
				unk_0x4F93066CECE72793();
				unk_0x135C61E339DABBAC(1);
				if (iVar13 == 0)
				{
					unk_0xE537EBD7B736A4E2(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f, 1, 0, 1);
					uVar41 = unk_0x5DD4223150DEBD6F(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f);
				}
				else if (iVar13 == 5)
				{
					unk_0xE537EBD7B736A4E2(-129.031f, -726.381f, 35f, -38.185f, -465.801f, 100f, 75f, 1, 0, 1);
				}
				else if (iVar13 == 4)
				{
					func_470(-74.9632f, -827.4467f, 324.9521f, 25f, 1);
					unk_0xFDD15D670AD33E10(-74.9632f, -827.4467f, 324.9521f, 25f, 1, 0, 0, false);
				}
				else if (iVar13 == 8)
				{
					func_470(-74.9632f, -827.4467f, 324.9521f, 25f, 1);
					unk_0xFDD15D670AD33E10(-807.073f, 330.8846f, 232.6766f, 25f, 1, 0, 0, false);
				}
				if (unk_0xDC5D81351D6A4DDB(iVar33))
				{
					func_469(&iVar23);
				}
				if ((iVar13 == 6 || iVar13 == 12) || iVar13 == 5)
				{
					if (unk_0xDC5D81351D6A4DDB(ScriptParam_548.f_2))
					{
						unk_0x1F7948851FB36E88(ScriptParam_548.f_2, true, 1);
						unk_0xC0AC848E56940C34(&(ScriptParam_548.f_2));
					}
					func_460(&uVar5, &Var3, iVar13, iVar13 == 6);
					bVar102 = true;
				}
				iVar7 = 1;
				break;
			
			case 1:
				if (unk_0x71364F510A1CB69F() || (((iVar13 == 5 || iVar13 == 6) || iVar13 == 12) && !bVar93))
				{
					if (!bVar93)
					{
						if ((iVar13 != 5 && iVar13 != 6) && iVar13 != 12)
						{
							vVar57 = { func_459(iVar13) };
							vVar57 = { func_458(cos(vVar57.z), sin(vVar57.z), unk_0xCEFE9553BEB9BA1E(vVar57.x)) };
							if (func_457(iVar13))
							{
								unk_0xA539831D22B60632(func_456(iVar13), vVar57, 4000f, 0);
							}
						}
						func_450(&Var3, iVar13, &uVar0, &iVar1, &iVar2, &uVar51, &iVar84);
					}
					else if (func_448(func_449(iVar13)))
					{
						vVar62 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -cos((-97.4239f + func_447(&Var3))), sin((-97.4239f + func_447(&Var3)))) };
						vVar61 = { unk_0x3201284584C7CD83(iVar33, 1.12046f, -0.317773f, 1.3385f) };
						vVar62 = { func_446(vVar62, 8.909f) };
						if (func_457(iVar13))
						{
							unk_0xA539831D22B60632(vVar61 + vVar62, vVar62, 4000f, 0);
						}
					}
					else
					{
						vVar57 = { -10f, 0f, func_447(&Var3) };
						vVar57 = { func_458(cos(vVar57.z), sin(vVar57.z), unk_0xCEFE9553BEB9BA1E(vVar57.x)) };
						if (func_457(iVar13))
						{
							unk_0xA539831D22B60632(func_456(iVar13), vVar57, 4000f, 0);
						}
					}
					if (((bVar93 || iVar13 == 4) || iVar13 == 8) || iVar13 == 3)
					{
						if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
						{
							unk_0xFDF7EE94DCA5AD87(unk_0xA19140A5C42D8715(), 1);
						}
						unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), func_456(iVar13), 0, 0, 0, 1);
						unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), func_447(&Var3));
						unk_0xB29E08C7AB729BAD(unk_0xA19140A5C42D8715(), true);
						unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 0);
					}
					iVar7 = 2;
				}
				else if (!unk_0x607776744A243309() && (!func_445(&iVar23) || func_444(&iVar23) > 0.05f))
				{
					if (unk_0x5BFF0F72CC04E4DA(unk_0xA19140A5C42D8715()))
					{
						unk_0x9662BE461F9FDF9E(2500);
					}
					else
					{
						unk_0x9662BE461F9FDF9E(800);
					}
				}
				break;
			
			case 2:
				if (func_442(&uVar0, &iVar16, &uVar51, iVar13, iVar84, ((iVar13 != 5 && iVar13 != 6) && iVar13 != 12)))
				{
					func_441(&iVar16);
					func_418(&Var3, &uVar32, &iVar72, &iVar33, &iVar34, &iVar36, &iVar35, &iVar37, &iVar42, &iVar43, iVar1, iVar2, &iVar19, iVar13, &iVar81);
					unk_0x3A3E4B7C6FBE305D(unk_0xA19140A5C42D8715(), 1, 0);
					if (!bVar93 && !bVar102)
					{
						func_460(&uVar5, &Var3, iVar13, 0);
					}
					iVar7 = 3;
				}
				break;
			
			case 3:
				if (!func_445(&iVar16) && !bVar93)
				{
					func_417(0, 0, 1);
					func_469(&iVar16);
				}
				else if ((func_445(&iVar16) && func_444(&iVar16) > 0.2f) || bVar93)
				{
					if (func_448(func_449(iVar13)) && !unk_0x411C28019DEA5CEF(unk_0xA19140A5C42D8715(), "oddjobs@basejump@", "Heli_door_loop", 3))
					{
					}
					else if (bVar93)
					{
						unk_0x9662BE461F9FDF9E(800);
						if (func_445(&iVar16))
						{
							func_441(&iVar16);
						}
						if (func_514(&Var3) != 0)
						{
							unk_0xB29E08C7AB729BAD(iVar36, false);
							func_469(&iVar22);
						}
						iVar7 = 4;
					}
					else
					{
						func_441(&iVar16);
						if (unk_0x71364F510A1CB69F())
						{
							wait(1000);
							unk_0xD21CD2A6F93F44A6(func_416(&uVar5, 1), func_416(&uVar5, 0), 10000, 1, 1);
							unk_0x8E88E73F74A9FF79(true, 0, 3000, 1, 0, 0);
							unk_0x70C1F5AA59767FE6(800);
						}
						unk_0x99D88BBC8B927586();
						if (func_448(func_449(iVar13)))
						{
							vVar62 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -cos((-97.4239f + func_447(&Var3))), sin((-97.4239f + func_447(&Var3)))) };
							vVar61 = { unk_0x3201284584C7CD83(iVar33, 1.12046f, -0.317773f, 1.3385f) };
							vVar62 = { func_446(vVar62, 8.909f) };
							if (func_457(iVar13))
							{
								unk_0xA539831D22B60632(vVar61 + vVar62, vVar62, 4000f, 0);
							}
						}
						else
						{
							vVar57 = { -10f, 0f, func_447(&Var3) };
							vVar57 = { func_458(cos(vVar57.z), sin(vVar57.z), unk_0xCEFE9553BEB9BA1E(vVar57.x)) };
							if (func_457(iVar13))
							{
								unk_0xA539831D22B60632(func_456(iVar13), vVar57, 4000f, 0);
							}
						}
						if (!func_414(func_415(iVar13)) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
						{
							unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
							unk_0xB0D7019224A3A443(unk_0xA19140A5C42D8715(), 177, 1);
							if (unk_0x703A9347832E1FFA(unk_0xA19140A5C42D8715()))
							{
								unk_0x1BE107CEA70974D0(unk_0xA19140A5C42D8715(), 0, 0);
							}
							unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), func_415(iVar13), 1, 0, 0, 1);
							unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), func_413(func_415(iVar13), func_456(iVar13)));
							unk_0xB0D7019224A3A443(unk_0xA19140A5C42D8715(), 177, 1);
							if (func_411() == 0)
							{
								unk_0x72A0FF8C49CFFC0D(unk_0xA19140A5C42D8715(), 9, 5, 0, 0);
							}
							else if (func_411() == 1)
							{
								unk_0x72A0FF8C49CFFC0D(unk_0xA19140A5C42D8715(), 8, 1, 0, 0);
							}
							else if (func_411() == 2)
							{
								unk_0x72A0FF8C49CFFC0D(unk_0xA19140A5C42D8715(), 8, 3, 0, 0);
							}
							unk_0x2F89329397A277BC(&uVar48);
							if (func_410(iVar13) > 0)
							{
								unk_0xB3E1967E66494060(0, func_410(iVar13));
							}
							unk_0x71CBFF70987FE89A(0, func_456(iVar13), 1f, -1, func_447(&Var3), 1056964608);
							unk_0x301F42EEE3C40328(uVar48);
							unk_0xE1072FA2FECBAD96(unk_0xA19140A5C42D8715(), uVar48);
							unk_0x3A95A0A3221D4208(&uVar48);
						}
						if (!func_448(func_449(iVar13)))
						{
							if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
							{
								unk_0xA4C9135FF4C7C4D2(unk_0xA19140A5C42D8715(), &iVar39);
							}
							iVar82 = 0;
							while (iVar82 < iVar39)
							{
								if (unk_0xDC5D81351D6A4DDB(iVar39[iVar82]) && !unk_0x7112137033807390(iVar39[iVar82], 0))
								{
									if (vdist2(unk_0xE2BBD32891C18569(iVar39[iVar82], 0), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0)) < 2500f)
									{
										unk_0xA45E1AA8B9CF45AD(iVar39[iVar82], 1000);
										unk_0x117F5CD9634D61A9(iVar39[iVar82], 5f);
										unk_0x98D1B1BD9C3AA456(iVar39[iVar82], 1, 1);
									}
								}
								iVar82++;
							}
						}
						if (func_514(&Var3) != 0)
						{
							func_469(&iVar22);
						}
						if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
						{
							unk_0xB29E08C7AB729BAD(unk_0xA19140A5C42D8715(), false);
						}
						if (func_409(iVar13, iVar84) > 0f)
						{
							func_469(&iVar28);
						}
						iVar7 = 4;
					}
				}
				break;
			
			case 4:
				if (iVar13 == 0)
				{
					unk_0x3410E30103DD6B81(200f);
				}
				if (bVar96 || bVar97)
				{
					if (unk_0x71364F510A1CB69F() || unk_0x607776744A243309())
					{
						unk_0x70C1F5AA59767FE6(300);
						wait(300);
					}
					unk_0x135C61E339DABBAC(1);
					unk_0x4F93066CECE72793();
					unk_0x8E88E73F74A9FF79(false, 0, 3000, 1, 1, 0);
					unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
					iVar7 = 10;
				}
				else if (unk_0x71364F510A1CB69F())
				{
					func_401(0, 1, 1, 0, 0);
					if (func_448(func_449(iVar13)))
					{
						func_400(&uVar5, &Var3, &vVar56, &vVar61, &vVar62, iVar33, &uVar63, &uVar64);
						iVar85 = unk_0x7A3ECD08D6D1D554();
						if (bVar110)
						{
							unk_0x6020229E34827A69(iVar85, "Helicopter_Wind_Idle", iVar33, "BASEJUMPS_SOUNDS", 0, 0);
						}
						if (bVar109)
						{
							unk_0x29504AEA784C0D3D(1, 300362576);
						}
					}
					else
					{
						if (unk_0x5B1F43E517A1588D())
						{
							unk_0xF3D41ED309762C0D(0);
						}
						unk_0x8E88E73F74A9FF79(false, 0, 3000, 1, 1, 0);
						unk_0xD87B76260C547F31(0f);
						unk_0xAA32DD4848CF93E0(0f, 1065353216);
					}
					unk_0x7925E894408C3DAD(unk_0xA19140A5C42D8715());
					unk_0x4041231F7BCA9002(unk_0xA19140A5C42D8715());
					unk_0x1EB647171187A459(unk_0xA19140A5C42D8715());
					unk_0x921C58C1C5187C4B(unk_0xA19140A5C42D8715());
					unk_0xDC374DA4DC566237(false);
					unk_0x85685830EFB9A55E(false);
					iVar7 = 5;
				}
				else
				{
					if (!bVar104)
					{
						if (!func_445(&iVar30))
						{
							func_469(&iVar30);
						}
						else if (func_444(&iVar30) > 4f || (func_448(func_449(iVar13)) && func_444(&iVar30) > 0.5f))
						{
							func_389(&uVar32, "OJBJAUD", func_399(&Var3), 8, 0, 0, 0);
							bVar104 = true;
						}
					}
					if (!unk_0x607776744A243309() && !bVar93)
					{
						if (func_367(&Var3, iVar13, &iVar36, &uVar5, &uVar4, &iVar17, &iVar18, &iVar22, &iVar28, iVar84, &bVar94, &bVar106, bVar98))
						{
							unk_0x135C61E339DABBAC(1);
							bVar98 = false;
							if (func_366(&Var3))
							{
								unk_0x9662BE461F9FDF9E(800);
							}
							else
							{
								unk_0xDC374DA4DC566237(false);
								unk_0x85685830EFB9A55E(false);
								iVar7 = 5;
							}
						}
					}
				}
				break;
			
			case 5:
				if (iVar13 == 0)
				{
					unk_0x3410E30103DD6B81(200f);
				}
				func_364();
				func_363();
				if (unk_0x71364F510A1CB69F())
				{
					if (bVar93 && bVar103)
					{
						unk_0xF7B6117C03C77578(func_362(iVar15), func_361(iVar15), func_360(iVar15));
					}
					wait(2000);
					if (bVar93)
					{
						unk_0xB29E08C7AB729BAD(unk_0xA19140A5C42D8715(), false);
						func_359(&iVar29);
						if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
						{
							unk_0xB0D7019224A3A443(unk_0xA19140A5C42D8715(), 177, 1);
						}
						while (func_444(&iVar29) < 1.1f)
						{
							wait(0);
							if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
							{
								unk_0xB0D7019224A3A443(unk_0xA19140A5C42D8715(), 177, 1);
							}
						}
						func_441(&iVar29);
					}
					unk_0x70C1F5AA59767FE6(800);
				}
				if (unk_0xDC5D81351D6A4DDB(iVar34) && !unk_0x7112137033807390(iVar34, 0))
				{
					iVar45 = unk_0xA70969818F182A36(unk_0x3201284584C7CD83(iVar34, func_358(&Var3)));
					unk_0x570128B7829A8EAA(iVar45, 5);
					unk_0x264E87C905AE790B(iVar45, 1);
					unk_0xC4F12E446CCE89F5(iVar45, "BJ_BLIP_TGT");
				}
				else
				{
					iVar45 = unk_0xA70969818F182A36(func_357(&Var3, 0));
					unk_0x570128B7829A8EAA(iVar45, 5);
					if (iVar72 == 1)
					{
						unk_0xC4F12E446CCE89F5(iVar45, "BJ_BLIP_TGT");
					}
					else
					{
						unk_0xC4F12E446CCE89F5(iVar45, "BJ_BLIP_CHK");
					}
				}
				unk_0x575CF00E129E0CE1(iVar45, 1.2f);
				if (iVar72 > 1)
				{
					iVar46 = unk_0xA70969818F182A36(func_357(&Var3, 1));
					unk_0x570128B7829A8EAA(iVar46, 5);
					unk_0x264E87C905AE790B(iVar45, 1);
					unk_0x575CF00E129E0CE1(iVar46, 0.7f);
					if (iVar72 == 2)
					{
						unk_0xC4F12E446CCE89F5(iVar46, "BJ_BLIP_TGT");
					}
					else
					{
						unk_0xC4F12E446CCE89F5(iVar46, "BJ_BLIP_CHK");
					}
				}
				if (unk_0xDC5D81351D6A4DDB(iVar34) && !unk_0x7112137033807390(iVar34, 0))
				{
					unk_0xA45E1AA8B9CF45AD(iVar34, 2000);
					if (unk_0xDC5D81351D6A4DDB(iVar43) && !unk_0x4915F4759304D5CF(iVar43))
					{
						unk_0x9568B1B58F78FF36(iVar43);
					}
					if (func_355(func_356(&Var3)))
					{
						unk_0xBEEB0585E7242BCC(&iVar34);
					}
					else
					{
						unk_0x4299736016AECE26(iVar34, func_357(&Var3, 0), 1, 0, 0, 1);
					}
				}
				if (unk_0x05EFB6A616B6FADE(Global_106070.f_18939.f_1, (func_354(&Var3) - 125)))
				{
					unk_0xD2A87BEA7696858B(unk_0xD4E735F4B6A956AC(), true);
					unk_0x683EAE997C1DBDA5(unk_0xD4E735F4B6A956AC(), unk_0x22C775856F4633CA(0, 256), unk_0x22C775856F4633CA(0, 256), unk_0x22C775856F4633CA(0, 256));
				}
				if (func_353(func_449(iVar13)))
				{
					func_352(1, 1, 1);
					unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
					func_359(&iVar19);
					iVar7 = 6;
					func_351(88, 1);
				}
				else if (func_448(func_449(iVar13)))
				{
					func_352(0, 0, 1);
					unk_0xB29E08C7AB729BAD(unk_0xA19140A5C42D8715(), false);
					iVar7 = 7;
					func_351(88, 1);
				}
				else
				{
					func_352(1, 1, 1);
					unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
					unk_0xB0D7019224A3A443(unk_0xA19140A5C42D8715(), 177, 1);
					iVar7 = 6;
					func_351(88, 1);
				}
				if (iVar13 == 5)
				{
					unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 146, true);
				}
				if (!bVar94 && unk_0xDC5D81351D6A4DDB(iVar36))
				{
					func_350(&iVar36, 1);
					bVar94 = true;
				}
				if (!func_366(&Var3))
				{
					if (func_448(func_449(iVar13)))
					{
						func_400(&uVar5, &Var3, &vVar56, &vVar61, &vVar62, iVar33, &uVar63, &uVar64);
					}
					else
					{
						if ((func_349(&Var3) && !bVar106) && !bVar93)
						{
							unk_0xCE2F428A0EEBBE18(1, 0, 3, 0);
						}
						else if (iVar13 == 4 && !func_348())
						{
							unk_0x057123F3A835FE47(func_416(&uVar5, 0), -76.7226f, -829.9866f, 326.0427f);
							unk_0xC831502E35848BE4(func_416(&uVar5, 0), 0.8541f, 0f, -17.012f, 2);
							unk_0xF62A5A3CB8DB2402(func_416(&uVar5, 0), 53.883f);
							unk_0x930701157A4B9374(func_416(&uVar5, 0), true);
						}
						else
						{
							if (unk_0x5B1F43E517A1588D())
							{
								unk_0xF3D41ED309762C0D(0);
							}
							unk_0x8E88E73F74A9FF79(false, 0, 3000, 1, 1, 0);
						}
						unk_0xD87B76260C547F31(0f);
						unk_0xAA32DD4848CF93E0(0f, 1065353216);
						unk_0x99D88BBC8B927586();
					}
				}
				if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
				{
					if (bVar111)
					{
						if (!unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), joaat("gadget_parachute"), 0))
						{
							unk_0xF0188A1B49D79AF7(unk_0xA19140A5C42D8715(), joaat("weapon_unarmed"), 1, false, true);
						}
						unk_0xF79B39CB6BD4560A(unk_0xA19140A5C42D8715(), iVar86);
						if (bVar112)
						{
							if (!unk_0x41680BA6546EE751(unk_0xD4E735F4B6A956AC()))
							{
								unk_0xADD91B6CC9188EAF(unk_0xD4E735F4B6A956AC());
							}
							unk_0x1139A3ECB1752994(unk_0xA19140A5C42D8715(), uVar88);
						}
					}
					else
					{
						unk_0xF0188A1B49D79AF7(unk_0xA19140A5C42D8715(), joaat("weapon_unarmed"), 1, false, true);
						unk_0xF79B39CB6BD4560A(unk_0xA19140A5C42D8715(), (unk_0x22C775856F4633CA(0, 65535) % 8));
					}
				}
				unk_0x6D68030C791111E0("skydive@base");
				unk_0x6D68030C791111E0("skydive@freefall");
				unk_0x6D68030C791111E0("skydive@parachute@chute");
				unk_0x6D68030C791111E0("skydive@parachute@");
				break;
			
			case 6:
				if (unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
				{
					iVar7 = 12;
					break;
				}
				else if ((bVar97 || bVar96) || func_347(&Var3, iVar13, &bVar99))
				{
					unk_0x135C61E339DABBAC(1);
					unk_0x4F93066CECE72793();
					iVar7 = 10;
				}
				else
				{
					if (iVar13 == 5)
					{
						unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 146, unk_0xC10AB2F83514403D(unk_0xA19140A5C42D8715(), -118.4f, -973.1f, 295.2f, -117.1f, -975.7f, 297.7f, 0, 1, 0));
					}
					if (bVar98)
					{
						vVar58 = { func_357(&Var3, (iVar72 - 1)) };
						vVar58.z = (vVar58.z + 100f);
						unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), vVar58, 1, 0, 0, 1);
						bVar98 = false;
					}
					if (!bVar101)
					{
						if (iVar13 == 4)
						{
							if (((((unk_0xD73B1037F6BD4B90(0, 71) || unk_0xD73B1037F6BD4B90(0, 72)) || unk_0xD73B1037F6BD4B90(0, 1)) || unk_0xD73B1037F6BD4B90(0, 2)) || unk_0xD73B1037F6BD4B90(0, 75)) || !unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
							{
								unk_0x8E88E73F74A9FF79(false, 1, 1300, 1, 1, 0);
								bVar101 = true;
							}
						}
					}
					func_346(&iVar19);
					func_336(&Var3, iVar34, iVar42, &iVar44, &uVar49, &uVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0, 1, fVar65);
					func_335(&uVar52);
					if (func_445(&iVar16))
					{
						if (func_444(&iVar16) > 10f)
						{
							func_331(&iVar20, &iVar80);
						}
					}
					else
					{
						func_330(&iVar16, 0f);
					}
					if (unk_0xDC5D81351D6A4DDB(iVar36) && !unk_0x7112137033807390(iVar36, 0))
					{
						if (!unk_0x1A8481A7E865EC7C(iVar36) && vdist2(unk_0xE2BBD32891C18569(iVar36, 1), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1)) > 40000f)
						{
							iVar114 = unk_0xB0D49A1F9F054602(iVar36, -1, 0);
							if (!unk_0x4915F4759304D5CF(iVar114))
							{
								unk_0x680F17660351F21B(&iVar114);
							}
							unk_0x4C842FAB634AC89E(&iVar36);
						}
					}
					if (!unk_0x05EFB6A616B6FADE(iVar78, 0))
					{
						if (unk_0x8187CC9EB2D7CFE6() || !func_445(&iVar31))
						{
							func_359(&iVar31);
						}
						else if (func_444(&iVar31) > 0.25f)
						{
							Var55 = { func_329(iVar13) };
							func_328(&Var55, 7500, 0);
							func_441(&iVar31);
							unk_0x2BCFB39E86340DAA(&iVar78, 0);
						}
					}
					if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
					{
						func_327(&Var6, 1);
						iVar38 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 1);
						if (unk_0x1095F403F52B42E1(iVar38, 0) && unk_0x26D28D230F871E8D(iVar38))
						{
							if (!unk_0x05EFB6A616B6FADE(iVar78, 1))
							{
								if (!func_445(&iVar24))
								{
									func_469(&iVar24);
								}
								else if (func_444(&iVar24) > 0.15f)
								{
									func_326("BJ_VEHHELP", -1);
									func_441(&iVar24);
									unk_0x2BCFB39E86340DAA(&iVar78, 1);
								}
							}
						}
						else
						{
							unk_0xFA57C719261AA55D(&iVar78, 1);
							if (func_325("BJ_VEHHELP"))
							{
								unk_0x135C61E339DABBAC(1);
							}
							if (func_445(&iVar24))
							{
								func_441(&iVar24);
							}
						}
					}
					else
					{
						func_327(&Var6, 0);
						unk_0xFA57C719261AA55D(&iVar78, 1);
						if (func_325("BJ_VEHHELP"))
						{
							unk_0x135C61E339DABBAC(1);
						}
						if (func_445(&iVar24))
						{
							func_441(&iVar24);
						}
					}
					if (unk_0xFCD57A307851D560(unk_0xA19140A5C42D8715()) != -1)
					{
						if (iVar13 == 5)
						{
							unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 146, false);
						}
						unk_0xCA539D02BA6DD396(1);
						unk_0x0B756FF7161B9AB0("DisableFlightMusic", 0);
						iVar7 = 9;
						func_441(&iVar16);
					}
				}
				break;
			
			case 7:
				if (iVar13 == 0)
				{
					unk_0x3410E30103DD6B81(200f);
				}
				if (bVar96 || bVar97)
				{
					if (unk_0x71364F510A1CB69F() || unk_0x607776744A243309())
					{
						unk_0x70C1F5AA59767FE6(300);
						wait(300);
					}
					unk_0x135C61E339DABBAC(1);
					unk_0x4F93066CECE72793();
					if (unk_0x5B1F43E517A1588D())
					{
						unk_0xF3D41ED309762C0D(0);
					}
					unk_0x8E88E73F74A9FF79(false, 0, 3000, 1, 0, 0);
					unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
					iVar7 = 10;
				}
				else
				{
					func_346(&iVar19);
					func_336(&Var3, iVar34, iVar42, &iVar44, &uVar49, &uVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0, 1, fVar65);
					func_335(&uVar52);
					if (func_448(func_449(iVar13)) && !unk_0x7112137033807390(iVar33, 0))
					{
						func_324(iVar33, func_456(iVar13));
					}
					if (func_445(&iVar16))
					{
						if (func_444(&iVar16) > 10f)
						{
							func_331(&iVar20, &iVar80);
						}
					}
					else
					{
						func_330(&iVar16, 0f);
					}
					if (func_320(&Var3, &uVar5, &uVar4, &iVar18, &vVar56, &uVar60, vVar61, vVar62) || bVar98)
					{
						func_441(&iVar16);
						unk_0x135C61E339DABBAC(1);
						if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
						{
							if (unk_0xDC5D81351D6A4DDB(iVar33) && !unk_0x7112137033807390(iVar33, 0))
							{
								unk_0x4299736016AECE26(iVar33, func_456(iVar13), 1, 0, 0, 1);
								unk_0x92DDCF53AA47A63D(iVar33, func_447(&Var3));
								unk_0xB29E08C7AB729BAD(iVar33, true);
								iVar81 = unk_0x70788DC3D80C9DEB(0f, 0f, 0f, 0f, 0f, 0f, 2);
								unk_0x460F6BE568AFE564(iVar81, iVar33, unk_0x4F9AEAB2CC029A5C(iVar33, "Chassis"));
								unk_0xE5565DEAABF9D588(unk_0xA19140A5C42D8715(), iVar81, "oddjobs@basejump@", "Heli_jump", 4f, -4f, 7, 0, 1148846080, 0);
								unk_0x71ABFE3795D5D0C2(iVar81, 0.6f);
								func_318(iVar33, &uVar5, &iVar17);
								unk_0x99D88BBC8B927586();
							}
						}
						if (bVar109)
						{
							unk_0x29504AEA784C0D3D(0, 300362576);
						}
						unk_0x6020229E34827A69(iVar85, "Helicopter_Wind", iVar33, "BASEJUMPS_SOUNDS", 0, 0);
						bVar98 = false;
						iVar7 = 8;
					}
				}
				break;
			
			case 8:
				if (iVar13 == 0)
				{
					unk_0x3410E30103DD6B81(200f);
				}
				func_346(&iVar19);
				func_336(&Var3, iVar34, iVar42, &iVar44, &uVar49, &uVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0, 1, fVar65);
				if (unk_0xFE5DE0C3200E00F2(iVar81))
				{
					if (unk_0x33CECDD9E141E18E(iVar81) > 0.92f)
					{
						unk_0x2F89329397A277BC(&uVar47);
						unk_0xD588033AE7BAFC03(0, -1161760501, 0);
						unk_0xCBD562C768271F81(0, 1, 0);
						unk_0x301F42EEE3C40328(uVar47);
						unk_0xE1072FA2FECBAD96(unk_0xA19140A5C42D8715(), uVar47);
						unk_0x3A95A0A3221D4208(&uVar47);
					}
				}
				if (unk_0xDC5D81351D6A4DDB(iVar33))
				{
					if (func_317(&uVar5, &iVar17, vVar61, vVar62, vVar56, &uVar63, &uVar64))
					{
						unk_0xDE616FF2D2026A26(unk_0xA19140A5C42D8715(), iVar33, 0);
						if (!unk_0x411C28019DEA5CEF(unk_0xA19140A5C42D8715(), "oddjobs@basejump@", "Heli_jump", 3))
						{
							unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
							unk_0xDC374DA4DC566237(true);
							if (unk_0x5B1F43E517A1588D())
							{
								unk_0xF3D41ED309762C0D(0);
							}
							unk_0x0B756FF7161B9AB0("DisableFlightMusic", 0);
							unk_0xCA539D02BA6DD396(1);
							iVar7 = 9;
						}
					}
				}
				break;
			
			case 9:
				if (iVar13 == 0)
				{
					unk_0x3410E30103DD6B81(200f);
				}
				if (Global_17228.f_135)
				{
					unk_0xD481A812073CCF02(0, 144, 1);
				}
				if (Global_17228.f_135)
				{
					unk_0xD481A812073CCF02(0, 144, 1);
				}
				if (unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
				{
					iVar7 = 12;
					break;
				}
				if (bVar96 || bVar97)
				{
					unk_0x135C61E339DABBAC(1);
					unk_0x4F93066CECE72793();
					iVar7 = 10;
				}
				else if (func_316(&uVar4, 3, 1000) && !Global_17228.f_135)
				{
					unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), true);
					unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 256);
					unk_0x9662BE461F9FDF9E(800);
					while (unk_0x607776744A243309())
					{
						func_336(&Var3, iVar34, iVar43, &iVar44, &uVar49, &uVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0, 1, fVar65);
						wait(0);
					}
					func_270(&Var3, &uVar51, &Var6, &iVar78, &iVar43, &iVar44, &iVar40, &iVar34, &iVar35, &iVar36, &iVar39, &uVar49, &uVar50, iVar45, iVar46, &iVar71, &iVar73, &iVar74, &iVar80, &iVar75, iVar13, &iVar8, &iVar14, &iVar21, &vVar27, &uVar60, &uVar66, &uVar67, &uVar68, &uVar95, &bVar94, &bVar96, &bVar97, &bVar98, &bVar100, &iVar92, &uVar41);
					bVar93 = true;
					iVar7 = 0;
				}
				else
				{
					func_267(&iVar26, &iVar44);
					if (bVar98)
					{
						vVar58 = { func_357(&Var3, (iVar72 - 1)) };
						func_265(unk_0xA19140A5C42D8715(), vVar58);
						bVar98 = false;
					}
					func_346(&iVar19);
					if (func_355(func_356(&Var3)))
					{
						if (!unk_0xDC5D81351D6A4DDB(iVar34) && unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), func_357(&Var3, 0), false) <= 200f)
						{
							iVar34 = unk_0x73D3AC2ACEE773CD(6, func_357(&Var3, 0), 1);
							if (!unk_0x7112137033807390(iVar34, 0))
							{
								unk_0xC81581CC4C64B997(iVar34, 7.5f);
							}
						}
					}
					else if ((unk_0xDC5D81351D6A4DDB(iVar34) && !unk_0x7112137033807390(iVar34, 0)) && !func_414(func_357(&Var3, 0)))
					{
						unk_0x4915F4759304D5CF(iVar43);
						if (func_264(unk_0xA19140A5C42D8715(), iVar34, 0) <= 325f)
						{
							if (iVar13 == 5)
							{
								vVar115 = { 28.8687f, -299.1065f, 46.5693f };
							}
							else
							{
								vVar115 = { -819.7591f, -1512.229f, 0.1336f };
							}
							if (unk_0xF9D4EF1338E38AFB(iVar43, -1273030092) != 1)
							{
								if (iVar13 == 5)
								{
									unk_0xD776C8F3311B26BC(iVar43, iVar34, vVar115, 4, 5f, 16785408, 5f, 10f, 1);
								}
								else
								{
									unk_0xD776C8F3311B26BC(iVar43, iVar34, vVar115, 4, 5f, 16777216, 4f, -1f, 1);
								}
							}
							else
							{
								func_259(&iVar34);
							}
						}
					}
					iVar8 = func_336(&Var3, iVar34, iVar43, &iVar44, &uVar49, &uVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 1, 1, fVar65);
					if (iVar8 == 1 || iVar8 >= 2)
					{
						unk_0x53FF9BDD8529ACD2(unk_0xA19140A5C42D8715());
						if (iVar8 >= 2)
						{
							if (unk_0xE06AA0996C4E4E03())
							{
								unk_0x135C61E339DABBAC(1);
							}
							if (unk_0x8187CC9EB2D7CFE6())
							{
								unk_0x4F93066CECE72793();
							}
						}
						unk_0xB20B772FD9DE1847(unk_0xA19140A5C42D8715(), joaat("weapon_unarmed"), false);
						if (iVar13 == 5)
						{
							unk_0x9568B1B58F78FF36(iVar43);
							unk_0x13E0A8160525AE55(iVar43, 296, true);
						}
						iVar116 = 0;
						while (iVar116 < iVar44)
						{
							if (unk_0xDC5D81351D6A4DDB(iVar44[iVar116]) && !unk_0x7112137033807390(iVar44[iVar116], 0))
							{
								unk_0x9568B1B58F78FF36(iVar44[iVar116]);
								iVar44[iVar116] = 0;
							}
							iVar116++;
						}
						iVar7 = 10;
					}
					func_258(&Var6, &Var3, iVar13, iVar72);
				}
				break;
			
			case 10:
				if (iVar13 == 0)
				{
					unk_0x3410E30103DD6B81(200f);
				}
				if (unk_0xDC5D81351D6A4DDB(iVar43) && !unk_0x7112137033807390(iVar43, 0))
				{
					if (unk_0xF9D4EF1338E38AFB(iVar43, -982327190) != 0 && unk_0xF9D4EF1338E38AFB(iVar43, -982327190) != 1)
					{
						unk_0x9568B1B58F78FF36(iVar43);
						unk_0xB3E1967E66494060(iVar43, -1);
					}
				}
				if ((!bVar96 && !bVar97) && !bVar99)
				{
					if (!func_445(&iVar21))
					{
						if (!func_445(&iVar18))
						{
							func_469(&iVar18);
						}
						if (unk_0xCE3CB618AFE55EFB(iVar45))
						{
							unk_0xE1623437A3194332(&iVar45);
						}
						if (unk_0xCE3CB618AFE55EFB(iVar46))
						{
							unk_0xE1623437A3194332(&iVar46);
						}
						if (iVar73 > -1)
						{
							unk_0xD8A6B72846870D9C(uVar49);
							unk_0xD8A6B72846870D9C(uVar50);
							iVar73 = -1;
						}
						func_330(&iVar21, 0f);
					}
					if (!func_445(&vVar27))
					{
						func_469(&vVar27);
					}
					if (func_356(&Var3) == 0)
					{
						func_257(func_357(&Var3, (iVar72 - 1)), vVar27);
					}
					if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
					{
						if (((((unk_0xDC5D81351D6A4DDB(iVar34) && !unk_0x7112137033807390(iVar34, 0)) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0)) && unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iVar34, vVar59, 0, 1, 0)) || unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), func_357(&Var3, iVar71), vVar59, 0, 1, 0)) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715()))
						{
							bVar117 = false;
							if (unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715()) && (unk_0xDC5D81351D6A4DDB(iVar34) && !unk_0xC556072C29E00F04(unk_0xA19140A5C42D8715(), iVar34)))
							{
								bVar117 = true;
							}
							else if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715()))
							{
								bVar117 = true;
							}
							if (bVar117)
							{
								if (func_316(&uVar4, 3, 1000) && !Global_17228.f_135)
								{
									unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), true);
									unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 256);
									unk_0x9662BE461F9FDF9E(800);
									while (unk_0x607776744A243309())
									{
										func_336(&Var3, iVar34, iVar43, &iVar44, &uVar49, &uVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0, 1, fVar65);
										wait(0);
									}
									func_270(&Var3, &uVar51, &Var6, &iVar78, &iVar43, &iVar44, &iVar40, &iVar34, &iVar35, &iVar36, &iVar39, &uVar49, &uVar50, iVar45, iVar46, &iVar71, &iVar73, &iVar74, &iVar80, &iVar75, iVar13, &iVar8, &iVar14, &iVar21, &vVar27, &uVar60, &uVar66, &uVar67, &uVar68, &uVar95, &bVar94, &bVar96, &bVar97, &bVar98, &bVar100, &iVar92, &uVar41);
									bVar93 = true;
									iVar7 = 0;
								}
								break;
							}
						}
					}
				}
				if (unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
				{
					iVar7 = 12;
					break;
				}
				if (((bVar96 || bVar97) || bVar99) || (func_445(&iVar21) && func_444(&iVar21) > 0.25f))
				{
					if (func_445(&iVar21) && func_444(&iVar21) > 0.25f)
					{
						func_253(func_357(&Var3, iVar71), iVar34, iVar43, &iVar8, &iVar75, &fVar69);
					}
					func_441(&iVar21);
					if (bVar96 || iVar8 == 1)
					{
						iVar10 = func_252();
						while (!unk_0x0FA486DE15EB3004(iVar10))
						{
							wait(0);
							if (func_356(&Var3) == 0)
							{
								func_257(func_357(&Var3, (iVar72 - 1)), vVar27);
							}
							iVar10 = func_252();
						}
						if (iVar13 == 0)
						{
							if (!unk_0x4915F4759304D5CF(iVar43))
							{
								func_389(&uVar32, "OJBJAUD", "BJ_01D", 8, 1, 1, 0);
							}
						}
						iVar7 = 11;
						if (!func_251(&Var6, 7))
						{
							iVar79 = 125;
							unk_0x2BCFB39E86340DAA(&(Global_106070.f_18939.f_1), (func_354(&Var3) - iVar79));
							func_250(func_354(&Var3), 1);
							iVar89 = 1;
							bVar90 = true;
							bVar91 = true;
							iVar83 = 0;
							while (iVar83 < 13)
							{
								if (!unk_0x05EFB6A616B6FADE(Global_106070.f_18939.f_1, iVar83))
								{
									if (func_448(func_449(iVar83)))
									{
										bVar91 = false;
									}
									else
									{
										bVar90 = false;
									}
									iVar89 = 0;
								}
								iVar83++;
							}
							if (iVar89 && !func_249(98))
							{
								func_248(98, 1);
							}
							if (bVar90)
							{
								func_245(128, 0, 0);
							}
							if (bVar91)
							{
								func_245(129, 0, 0);
							}
							func_212(&iVar74, iVar72, &iVar75, &iVar76, fVar65);
							if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
							{
								unk_0xB20B772FD9DE1847(unk_0xA19140A5C42D8715(), joaat("weapon_unarmed"), false);
							}
							func_211(&Var6, 7, 1);
							func_210(1, 0);
							func_469(&iVar25);
							func_209();
						}
					}
					else if ((bVar97 || bVar99) || iVar8 >= 2)
					{
						unk_0x135C61E339DABBAC(1);
						unk_0x4F93066CECE72793();
						if (!bVar99)
						{
							func_206();
						}
						if (unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
						{
							iVar92 = 1;
						}
						if (unk_0x65A878D380D59179())
						{
							func_204(&Var6, 0, 201, "BJ_CONTINUE", 203, "BJ_RETRY", 358, 0, 358, 0);
						}
						else
						{
							func_211(&Var6, 27, 1);
							func_204(&Var6, 0, 201, "BJ_CONTINUE", 203, "BJ_RETRY", 211, "HUD_INPUT68", 358, 0);
						}
						iVar7 = 12;
					}
					func_441(&iVar18);
				}
				break;
			
			case 11:
				unk_0xD481A812073CCF02(2, 200, 1);
				if (!bVar96 && !bVar97)
				{
					if (func_203() && !func_251(&Var6, 26))
					{
						func_192(iVar13);
						if (func_180(iVar13, iVar75, fVar69, iVar76))
						{
							func_204(&Var6, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 211, "HUD_INPUT68", 358, 0);
							func_211(&Var6, 26, 1);
						}
					}
				}
				if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
				{
					bVar108 = unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0);
				}
				if (func_356(&Var3) == 0)
				{
					func_257(func_357(&Var3, (iVar72 - 1)), vVar27);
				}
				if (!bVar113)
				{
					iVar9 = func_74(iVar13, &Var6, &uVar51, &uVar4, iVar74, iVar72, iVar75, &iVar76, fVar65, &bVar100);
					bVar113 = iVar9 == true;
				}
				if (unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
				{
					if (iVar77 == 0)
					{
						unk_0xE537EBD7B736A4E2(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f, 0, 1, 1);
					}
					else if (iVar77 == 5)
					{
						unk_0xE537EBD7B736A4E2(-129.031f, -726.381f, 35f, -38.185f, -465.801f, 100f, 75f, 0, 1, 1);
					}
					func_73(&Var3, &uVar51, &iVar33, &iVar34, &iVar36, &iVar39, iVar40, &uVar32, &iVar42, &iVar43, &iVar44, iVar85, &iVar80, iVar45, iVar46, iVar13, &uVar41, bVar111);
				}
				else if (!unk_0x607776744A243309() && (!func_72() || func_444(&iVar25) >= 2f))
				{
					unk_0xD481A812073CCF02(0, 22, 1);
					unk_0xD481A812073CCF02(0, 21, 1);
					unk_0xD481A812073CCF02(0, 55, 1);
					unk_0xD481A812073CCF02(0, 140, 1);
					unk_0xD481A812073CCF02(0, 142, 1);
					unk_0xD481A812073CCF02(0, 141, 1);
					unk_0xD481A812073CCF02(0, 80, 1);
					unk_0xD481A812073CCF02(0, 95, 1);
					unk_0xD481A812073CCF02(0, 96, 1);
					unk_0xD481A812073CCF02(0, 97, 1);
					unk_0xD481A812073CCF02(0, 98, 1);
					unk_0xD481A812073CCF02(0, 0, 1);
					if (func_445(&iVar18))
					{
						if ((iVar9 == 1 || func_444(&iVar18) >= 60f) || ((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && unk_0xBCF615B6673B73ED(unk_0xA19140A5C42D8715())) || (!bVar108 && unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))))
						{
							if (!bVar113)
							{
								func_71(&(Var6.f_26));
								bVar113 = true;
							}
							if (func_45(&(Var6.f_26), 0, 1065353216, 0, 0, 0))
							{
								if (!bVar96 && !bVar97)
								{
									if (func_203() && !func_251(&Var6, 26))
									{
										if (func_180(iVar13, iVar75, fVar69, iVar76))
										{
											func_211(&Var6, 26, 1);
										}
									}
								}
								func_42(&(Var6.f_26));
								func_441(&iVar25);
								if (iVar13 == 0)
								{
									unk_0xE537EBD7B736A4E2(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f, 0, 1, 1);
								}
								else if (iVar13 == 5)
								{
									unk_0xE537EBD7B736A4E2(-129.031f, -726.381f, 35f, -38.185f, -465.801f, 100f, 75f, 0, 1, 1);
								}
								func_73(&Var3, &uVar51, &iVar33, &iVar34, &iVar36, &iVar39, iVar40, &uVar32, &iVar42, &iVar43, &iVar44, iVar85, &iVar80, iVar45, iVar46, iVar13, &uVar41, bVar111);
							}
						}
						else if (iVar9 == 0)
						{
							if (!bVar96 && !bVar97)
							{
								if (func_203() && !func_251(&Var6, 26))
								{
									if (func_180(iVar13, iVar75, fVar69, iVar76))
									{
										func_211(&Var6, 26, 1);
									}
								}
							}
							func_42(&(Var6.f_26));
							func_441(&iVar25);
							func_211(&Var6, 5, 0);
							unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 256);
							unk_0x9662BE461F9FDF9E(800);
							while (unk_0x607776744A243309())
							{
								wait(0);
								if (func_356(&Var3) == 0)
								{
									func_257(func_357(&Var3, (iVar72 - 1)), vVar27);
								}
							}
							func_270(&Var3, &uVar51, &Var6, &iVar78, &iVar43, &iVar44, &iVar40, &iVar34, &iVar35, &iVar36, &iVar39, &uVar49, &uVar50, iVar45, iVar46, &iVar71, &iVar73, &iVar74, &iVar80, &iVar75, iVar13, &iVar8, &iVar14, &iVar21, &vVar27, &uVar60, &uVar66, &uVar67, &uVar68, &uVar95, &bVar94, &bVar96, &bVar97, &bVar98, &bVar100, &iVar92, &uVar41);
							bVar93 = true;
							iVar7 = 0;
							break;
						}
						else if (bVar100)
						{
							if (func_444(&iVar18) > (60f - 5f))
							{
								func_40(&iVar18, (60f - 5f));
							}
						}
					}
					else
					{
						func_330(&iVar18, 0f);
					}
				}
				break;
			
			case 12:
				if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
				{
					bVar108 = unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0);
				}
				unk_0xD481A812073CCF02(2, 200, 1);
				if (iVar76 > 0)
				{
					iVar76 = 0;
				}
				if (!bVar96 && !bVar97)
				{
					if (func_203() && !func_251(&Var6, 26))
					{
						func_192(iVar13);
						if (func_180(iVar13, iVar75, fVar69, iVar76))
						{
							func_204(&Var6, 0, 201, "BJ_CONTINUE", 203, "BJ_RETRY", 211, "HUD_INPUT68", 358, 0);
							func_211(&Var6, 26, 1);
						}
					}
				}
				if (!func_251(&Var6, 24))
				{
					if (unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
					{
						bVar103 = true;
					}
					else
					{
						bVar103 = false;
					}
					unk_0xEEF61BF551977B0E("OJBJ_START");
					unk_0xEEF61BF551977B0E("OJBJ_JUMPED");
					unk_0xEEF61BF551977B0E("OJBJ_LANDED");
					unk_0x9444470D6D9ADB88("OJBJ_STOP");
					if (unk_0xCE3CB618AFE55EFB(iVar45))
					{
						unk_0xE1623437A3194332(&iVar45);
					}
					if (unk_0xCE3CB618AFE55EFB(iVar46))
					{
						unk_0xE1623437A3194332(&iVar46);
					}
					if (iVar13 == 0)
					{
						unk_0x3410E30103DD6B81(200f);
					}
					iVar10 = func_252();
					while (!unk_0x0FA486DE15EB3004(iVar10))
					{
						if (func_356(&Var3) == 0)
						{
							func_257(func_357(&Var3, (iVar72 - 1)), vVar27);
						}
						wait(0);
						iVar10 = func_252();
					}
					if (bVar103)
					{
						func_39(&uVar12, 0);
					}
					else
					{
						func_38(&Var11, 1050253722, 1073741824);
					}
					func_211(&Var6, 24, 1);
				}
				if (!bVar103 && unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
				{
					func_211(&Var6, 24, 0);
					break;
				}
				if (func_356(&Var3) == 0)
				{
					func_257(func_357(&Var3, (iVar72 - 1)), vVar27);
				}
				if (unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
				{
					switch (func_35(unk_0xA19140A5C42D8715()))
					{
						case 0:
							sVar54 = "BJ_FAIL_M";
							break;
						
						case 1:
							sVar54 = "BJ_FAIL_F";
							break;
						
						case 2:
							sVar54 = "BJ_FAIL_T";
							break;
					}
				}
				else if (bVar99)
				{
					sVar54 = "BJ_FAIL_02";
				}
				else
				{
					sVar54 = "BJ_FAIL_01";
				}
				bVar107 = false;
				unk_0xD481A812073CCF02(0, 0, 1);
				unk_0xD481A812073CCF02(0, 80, 1);
				if (bVar103)
				{
					bVar107 = func_16(&uVar12, &Var11, &iVar10, iVar53, sVar54, &bVar93, 78);
				}
				else
				{
					bVar107 = func_3(&iVar10, &Var11, iVar53, sVar54, &bVar93, 79, 7, 1, 1097859072, 1);
				}
				if (bVar107)
				{
					if (bVar93)
					{
						if (!bVar96 && !bVar97)
						{
							if (func_203() && !func_251(&Var6, 26))
							{
								if (func_180(iVar13, iVar75, fVar69, iVar76))
								{
									func_211(&Var6, 26, 1);
								}
							}
						}
						func_270(&Var3, &uVar51, &Var6, &iVar78, &iVar43, &iVar44, &iVar40, &iVar34, &iVar35, &iVar36, &iVar39, &uVar49, &uVar50, iVar45, iVar46, &iVar71, &iVar73, &iVar74, &iVar80, &iVar75, iVar13, &iVar8, &iVar14, &iVar21, &vVar27, &uVar60, &uVar66, &uVar67, &uVar68, &uVar95, &bVar94, &bVar96, &bVar97, &bVar98, &bVar100, &iVar92, &uVar41);
						iVar7 = 0;
					}
					else
					{
						if (!bVar96 && !bVar97)
						{
							if (func_203() && !func_251(&Var6, 26))
							{
								if (func_180(iVar13, iVar75, fVar69, iVar76))
								{
									func_211(&Var6, 26, 1);
								}
							}
						}
						func_2(bVar103, &Var3, &uVar51, &iVar33, &iVar34, &iVar36, &iVar39, iVar40, &uVar32, &iVar42, &iVar43, &iVar44, iVar85, &iVar80, iVar45, iVar46, iVar13, &uVar41, bVar111);
					}
					func_1(&iVar10);
				}
				iVar8 = 0;
				break;
		}
	}
}

void func_1(int iParam0)
{
	if (unk_0x0FA486DE15EB3004(*iParam0))
	{
		unk_0x86795B44CE5FE021(iParam0);
		*iParam0 = 0;
	}
}

void func_2(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, var uParam17, bool bParam18)
{
	if (bParam0)
	{
		func_543(uParam1, uParam2, iParam3, iParam4, iParam5, iParam6, &iParam7, uParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16, uParam17, bParam18);
	}
	else
	{
		func_543(uParam1, uParam2, iParam3, iParam4, iParam5, iParam6, &iParam7, uParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16, uParam17, bParam18);
	}
}

int func_3(int iParam0, var uParam1, int iParam2, char* sParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
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
				unk_0x65227735B3827631(true);
			}
			unk_0xDED73F11B8CB95B1(0.2f);
			if (func_15(iParam5, 4))
			{
				if (unk_0x61346376C1469A0E("generic_failed", false, -1))
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
			unk_0x31A9E530D137684F(*iParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0x390B339C943A8A54("STRING");
			unk_0xBA9FB571BCB6C1BD(6);
			unk_0x4FDA9E6EF359F8A9(iParam2);
			unk_0xD481829E3E36543B();
			func_14(sParam3);
			unk_0x380580A1A1667F69(100);
			unk_0x233A5B4A35140C6B(true);
			unk_0xD8015A504E3ED13A();
			if (func_15(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0x31A9E530D137684F(*iParam0, "TRANSITION_UP");
					unk_0xD8B5988E85F72BE5(uParam1->f_134);
					unk_0x271C1332F482646C();
					uParam1->f_136 = 1;
				}
			}
			if (!func_15(iParam5, 1))
			{
				unk_0x15D2B7C537E80C5A(0);
			}
			func_13(&(uParam1->f_10), 0, 1, 1, 1);
			func_12(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_12(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_15(iParam5, 4))
			{
				unk_0xE11F00B4AC919F45(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_15(iParam5, 8))
			{
				switch (func_411())
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
			if (!func_445(&(uParam1->f_1)))
			{
				func_469(&(uParam1->f_1));
			}
			if (func_15(iParam5, 2))
			{
				if (!func_445(&(uParam1->f_4)))
				{
					func_469(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			unk_0xE75DF14D630B12F9();
			if (func_15(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0x31A9E530D137684F(*iParam0, "TRANSITION_UP");
					unk_0xD8B5988E85F72BE5(uParam1->f_134);
					unk_0x271C1332F482646C();
					uParam1->f_136 = 1;
				}
			}
			unk_0x0A74F1E9CF777638(iParam6);
			func_11(iParam0, 0, 0);
			if (!func_15(iParam5, 16) && (func_444(&(uParam1->f_1)) >= uParam1->f_135 || unk_0x71364F510A1CB69F()))
			{
				func_5(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0x238F4C0DD5EC6FE7();
				if (unk_0x4E6A396CA4DB68F6(2, 201))
				{
					uParam1->f_138 = 1;
					unk_0xE11F00B4AC919F45(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_15(iParam5, 1))
					{
						unk_0x86BED8B9076AA8D7(0);
					}
					func_4(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0x4E6A396CA4DB68F6(2, 202))
				{
					uParam1->f_138 = 0;
					unk_0xE11F00B4AC919F45(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_15(iParam5, 1))
					{
						unk_0x86BED8B9076AA8D7(0);
					}
					func_4(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_15(iParam5, 2))
			{
				if (func_444(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					unk_0xE11F00B4AC919F45(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_15(iParam5, 1))
					{
						unk_0x86BED8B9076AA8D7(0);
					}
					func_4(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_11(iParam0, 0, 0);
			unk_0xDED73F11B8CB95B1(1f);
			if (uParam1->f_138 || !((unk_0x3CAC2741CC1A631F("stunt_plane_races", unk_0x61D2332983ACC05C()) || unk_0x3CAC2741CC1A631F("pilot_school", unk_0x61D2332983ACC05C())) || (unk_0x3CAC2741CC1A631F("bj", unk_0x61D2332983ACC05C()) && unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))))
			{
				unk_0x70C1F5AA59767FE6(2500);
			}
			if (func_15(iParam5, 64) && uParam1->f_138)
			{
				unk_0x9662BE461F9FDF9E(500);
			}
			func_359(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0x65227735B3827631(false);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_444(&(uParam1->f_4)) <= 0.1f)
			{
				func_11(iParam0, 0, 0);
			}
			else
			{
				*bParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}

void func_4(int iParam0)
{
	if (*uParam0 != 0)
	{
		unk_0x86795B44CE5FE021(uParam0);
		*iParam0 = 0;
	}
	iParam0->f_1 = 0;
	iParam0->f_123 = 0;
}

void func_5(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
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
	if (!func_10(uParam0))
	{
		return;
	}
	unk_0xE75DF14D630B12F9();
	unk_0x0A74F1E9CF777638(iParam2);
	if (!func_15(uParam0->f_1, 256) || (func_15(uParam0->f_1, 8192) && unk_0x1BFD4084A40BF7E1(2)))
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
			unk_0x233A5B4A35140C6B(func_15(uParam0->f_1, 4096));
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
							func_9(sVar3);
						}
						iVar7++;
					}
					if (!unk_0x429D45A6C6520026(uParam0->f_2[iVar6 /*15*/]))
					{
						func_14(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x47C01C0E6F4C1D06())
					{
						if (func_15(uParam0->f_1, 4096))
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
		fVar8 = func_8(bParam4, func_8(func_15(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x31A9E530D137684F(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xD8B5988E85F72BE5(fVar8);
		unk_0x271C1332F482646C();
		unk_0x31A9E530D137684F(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0xD8B5988E85F72BE5(0f);
		unk_0xD8B5988E85F72BE5(0f);
		unk_0xD8B5988E85F72BE5(0f);
		unk_0xD8B5988E85F72BE5(80f);
		unk_0x271C1332F482646C();
		func_7(&(uParam0->f_1), 256);
		func_6(&(uParam0->f_1), 128);
	}
	unk_0xE9F9BA9108F437C7(*uParam0, 255, 255, 255, 0, 0);
}

void func_6(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_7(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_8(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_9(char* sParam0)
{
	unk_0x0BAAED7962F122D5(sParam0);
}

int func_10(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x0FA486DE15EB3004(*uParam0))
		{
			func_7(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

int func_11(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_445(&(uParam0->f_2)))
	{
		func_359(&(uParam0->f_2));
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
	if (func_444(&(uParam0->f_2)) * 1000f) > to_float(uParam0->f_1)
	{
		func_441(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

int func_12(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_13(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x0116B05B49B8129C("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_7(&(uParam0->f_1), 32);
	}
	if (unk_0x0FA486DE15EB3004(*uParam0))
	{
		func_7(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0xBC66504DB57D15CD(*uParam0, 1);
		}
	}
	if (unk_0x47C01C0E6F4C1D06())
	{
		if (bParam3)
		{
			func_7(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_7(&(uParam0->f_1), 8192);
	}
}

void func_14(char* sParam0)
{
	unk_0x390B339C943A8A54(sParam0);
	unk_0xD481829E3E36543B();
}

bool func_15(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_16(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			unk_0x8969D02DEDC106D2("DEATH_SCENE");
			unk_0xE11F00B4AC919F45(-1, "ScreenFlash", "WastedSounds", 1);
			func_34(&(uParam0->f_1));
			func_33();
			func_38(uParam1, (0.15f * 0.075f), 0.5f);
			unk_0x65227735B3827631(true);
			break;
		
		case 1:
			if (func_24() || unk_0x71364F510A1CB69F())
			{
				*uParam0 = 2;
			}
			if (!func_23(uParam0->f_4, 4))
			{
				if (unk_0x61346376C1469A0E("OFFMISSION_WASTED", false, -1))
				{
					unk_0xE11F00B4AC919F45(-1, "Bed", "WastedSounds", 1);
					func_21(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(timera()) > (1500f * 0.2f))
			{
				if (!func_23(uParam0->f_4, 2))
				{
					unk_0xE11F00B4AC919F45(-1, "TextHit", "WastedSounds", 1);
					func_21(&(uParam0->f_4), 2);
				}
				func_3(iParam2, uParam1, iParam3, sParam4, bParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_3(iParam2, uParam1, iParam3, sParam4, bParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_20(0, 1);
				func_18(0, 1);
				func_33();
				if (*bParam5)
				{
					unk_0xD7148FA4D977807B(1);
				}
				else if (!uParam0->f_5)
				{
					func_17(0);
				}
				unk_0x65227735B3827631(false);
				unk_0xDD63978CC283FA2D(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
			{
				unk_0xC1D3387D1E48090E(1);
				func_20(0, 1);
				func_18(0, 1);
				unk_0x5AD7D03C214BDA88("DEATH_SCENE");
				unk_0x65227735B3827631(false);
				return 1;
			}
			break;
		
		case 4:
			unk_0x65227735B3827631(false);
			return 1;
			break;
	}
	return 0;
}

void func_17(bool bParam0)
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

void func_18(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		func_20(0, 0);
		unk_0xE60B9F9B48D4783F("DeathFailOut", 0, 0);
		unk_0x2BCFB39E86340DAA(&iLocal_41, 1);
		func_19(1, 2, 0);
		unk_0xE7BF8285A5811F40(2);
	}
	else
	{
		if (unk_0x05EFB6A616B6FADE(iLocal_41, 1) || iParam1)
		{
			unk_0xEF9AD7817AAF81A5("DeathFailOut");
			func_19(0, 2, 1);
			unk_0xE7BF8285A5811F40(0);
		}
		unk_0xFA57C719261AA55D(&iLocal_41, 1);
	}
}

void func_19(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		unk_0x2BCFB39E86340DAA(&iLocal_41, 2);
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
		if (unk_0x05EFB6A616B6FADE(iLocal_41, 2) || iParam2)
		{
			if (!unk_0x4C9BACA8D249CB13())
			{
				unk_0xDED73F11B8CB95B1(1f);
			}
		}
		unk_0xFA57C719261AA55D(&iLocal_41, 2);
	}
}

void func_20(int iParam0, int iParam1)
{
	char* sVar0;
	
	switch (func_411())
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
		if (!unk_0x05EFB6A616B6FADE(iLocal_41, 0) || iParam1)
		{
			unk_0xE60B9F9B48D4783F(sVar0, 0, 0);
			unk_0x2BCFB39E86340DAA(&iLocal_41, 0);
			func_19(1, 1, 0);
			unk_0xE7BF8285A5811F40(1);
		}
	}
	else
	{
		if (unk_0x05EFB6A616B6FADE(iLocal_41, 0) || iParam1)
		{
			unk_0xEF9AD7817AAF81A5(sVar0);
			func_19(0, 1, 1);
			unk_0xE7BF8285A5811F40(0);
		}
		unk_0xFA57C719261AA55D(&iLocal_41, 0);
	}
}

void func_21(var uParam0, int iParam1)
{
	func_22(uParam0, iParam1);
}

void func_22(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_23(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_24()
{
	if (!unk_0x05EFB6A616B6FADE(iLocal_41, 0) && !unk_0x05EFB6A616B6FADE(iLocal_41, 1))
	{
		settimera(0);
		func_20(1, 0);
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
		if (!unk_0x05EFB6A616B6FADE(iLocal_41, 1))
		{
			func_18(1, 0);
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
			else if (iLocal_42 == 0)
			{
				iLocal_42 = unk_0xFD34717937104F1C() + 1000;
				if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
				{
					unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 0);
				}
				func_19(0, 2, 1);
				func_401(1, 1, 1, 0, 0);
				func_26(1);
				unk_0xDFCC2872C0A03340(0);
				unk_0xB982FDD339A194F5(0);
				unk_0x135C61E339DABBAC(1);
				unk_0x4F93066CECE72793();
				if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
				{
					unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 0);
				}
				func_20(0, 0);
				func_25(0);
			}
			else if (unk_0xFD34717937104F1C() < iLocal_42)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_25(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0x05EFB6A616B6FADE(iLocal_41, 3))
			{
				unk_0x62BAB49318F4FE6E(1);
				unk_0x2BCFB39E86340DAA(&iLocal_41, 3);
			}
		}
		else if (unk_0x05EFB6A616B6FADE(iLocal_41, 3))
		{
			unk_0x62BAB49318F4FE6E(0);
			unk_0xFA57C719261AA55D(&iLocal_41, 3);
		}
	}
}

void func_26(bool bParam0)
{
	if (bParam0)
	{
		func_32();
		if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
		{
			unk_0x2BCFB39E86340DAA(&Global_2384, 16);
		}
		Global_14513.f_1 = 1;
		if (func_31(0))
		{
			func_27(0);
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

void func_27(int iParam0)
{
	if (func_30())
	{
		return;
	}
	if (Global_14681)
	{
		func_29(0, 0);
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
	if (!func_28())
	{
		Global_14513.f_1 = 3;
	}
}

int func_28()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_29(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_31(0))
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

bool func_30()
{
	return unk_0x05EFB6A616B6FADE(Global_1678593, 19);
}

int func_31(int iParam0)
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

void func_32()
{
	if (Global_14513.f_1 == 9 || Global_14513.f_1 == 10)
	{
		Global_15875 = 0;
		Global_15871 = 1;
	}
}

void func_33()
{
	iLocal_41 = 0;
	iLocal_42 = 0;
	func_401(0, 1, 1, 0, 0);
	func_26(1);
}

void func_34(int iParam0)
{
	if (!func_445(iParam0))
	{
		func_469(iParam0);
	}
	else
	{
		func_359(iParam0);
	}
}

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_36(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_36(int iParam0)
{
	if (func_37(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_37(int iParam0)
{
	return iParam0 < 3;
}

void func_38(var uParam0, int iParam1, int iParam2)
{
	if (func_445(&(uParam0->f_1)))
	{
		func_441(&(uParam0->f_1));
	}
	if (func_445(&(uParam0->f_4)))
	{
		func_441(&(uParam0->f_4));
	}
	func_4(&(uParam0->f_10));
	uParam0->f_134 = iParam1;
	uParam0->f_135 = iParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_39(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	unk_0x61346376C1469A0E("OFFMISSION_WASTED", false, -1);
}

void func_40(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_41(unk_0x05EFB6A616B6FADE(*iParam0, 4)) - fParam1);
	unk_0x2BCFB39E86340DAA(iParam0, 1);
	unk_0xFA57C719261AA55D(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_41(bool bParam0)
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

void func_42(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x86795B44CE5FE021(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x47C01C0E6F4C1D06())
		{
			unk_0x31A9E530D137684F(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x233A5B4A35140C6B(false);
			unk_0x271C1332F482646C();
		}
		unk_0x86795B44CE5FE021(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x65227735B3827631(false);
		uParam0->f_564 = 0;
	}
	if (!Global_71473)
	{
		if (!unk_0xD32647D293B05ADD(unk_0xA6580F898F4E801C()))
		{
			if (!Global_71474)
			{
				if (unk_0x71364F510A1CB69F() && !func_44(0))
				{
					unk_0x70C1F5AA59767FE6(800);
				}
			}
		}
	}
	func_43(0);
}

void func_43(int iParam0)
{
	Global_71465 = iParam0;
	Global_71466 = iParam0;
}

bool func_44(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

int func_45(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (unk_0x817B152F7462D506() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = unk_0x817B152F7462D506();
	if (!unk_0x4C9BACA8D249CB13())
	{
		if (unk_0xD61D0CA14AE902DF(unk_0xEE978C39384D834F(unk_0xA6580F898F4E801C()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (unk_0x16F3A5056959BF3A(unk_0xEE978C39384D834F(unk_0xA6580F898F4E801C())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (unk_0x71364F510A1CB69F() || unk_0x607776744A243309())
		{
			unk_0x65227735B3827631(true);
			uParam0->f_564 = 1;
		}
	}
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			if (unk_0x53B0513B47405A70(unk_0xD4E735F4B6A956AC()))
			{
				unk_0xB8C9A9ECCE440A3A(unk_0xD4E735F4B6A956AC());
			}
		}
	}
	unk_0xD8C147DA332E7F06(7);
	unk_0xD8C147DA332E7F06(8);
	unk_0xD8C147DA332E7F06(9);
	unk_0xD8C147DA332E7F06(6);
	unk_0xD8C147DA332E7F06(19);
	unk_0xD481A812073CCF02(2, 19, 1);
	unk_0xD481A812073CCF02(0, 37, 1);
	unk_0xD481A812073CCF02(0, 21, 1);
	unk_0xD481A812073CCF02(0, 28, 1);
	unk_0xD481A812073CCF02(0, 29, 1);
	unk_0xD481A812073CCF02(0, 171, 1);
	func_70(0);
	if (unk_0x0B9F814BC8D14042(2))
	{
		if (unk_0x22D9DDC4F867C42C() || (unk_0x71364F510A1CB69F() && !unk_0x3BE8B7AEED1A3971()))
		{
			unk_0x238F4C0DD5EC6FE7();
		}
	}
	Global_36667 = 1;
	if (!uParam0->f_563)
	{
		switch (func_35(unk_0xEE978C39384D834F(unk_0xA6580F898F4E801C())))
		{
			case 1:
				unk_0xE60B9F9B48D4783F("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0xE60B9F9B48D4783F("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0xE60B9F9B48D4783F("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + floor((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + func_69(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_69(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_69((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_69(30f) - func_69(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_43(1);
		uParam0->f_572 = (uParam0->f_572 + round((0f + (1000f * timestep()))));
		func_48(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * timestep())));
			}
		}
		uParam0->f_30 = func_47(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					unk_0x31A9E530D137684F(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x271C1332F482646C();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * timestep())));
			}
		}
		uParam0->f_547 = func_47(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			unk_0x31A9E530D137684F(uParam0->f_1, "TRANSITION_OUT");
			unk_0x271C1332F482646C();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * timestep())));
				}
			}
		}
		uParam0->f_548 = func_47(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (unk_0x1BFD4084A40BF7E1(2))
			{
				if (unk_0x0FA486DE15EB3004(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_46(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (unk_0xDF0ADAD7E584090D(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && unk_0x0FA486DE15EB3004(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					unk_0x31A9E530D137684F(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x271C1332F482646C();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0x31A9E530D137684F(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x271C1332F482646C();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				func_46(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					unk_0x31A9E530D137684F(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x271C1332F482646C();
				}
				uParam0->f_559 = func_47((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * timestep())), 0f, 1f);
				uParam0->f_573 = func_47((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_47((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * timestep())), 0f, 1f);
			uParam0->f_573 = func_47((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (unk_0xDF0ADAD7E584090D(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			wait(0);
		}
		else
		{
			if (!bVar0)
			{
				func_43(0);
			}
			return !bVar0;
		}
	}
	func_43(0);
	return 1;
}

void func_46(var uParam0, bool bParam1)
{
	unk_0x31A9E530D137684F(uParam0->f_4, "CLEAR_ALL");
	unk_0x271C1332F482646C();
	if (unk_0x47C01C0E6F4C1D06())
	{
		unk_0x31A9E530D137684F(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x233A5B4A35140C6B(true);
		unk_0x271C1332F482646C();
	}
	unk_0x31A9E530D137684F(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x380580A1A1667F69(0);
	func_9(unk_0x7391BCD755BD8577(2, 215, true));
	func_14("ES_HELP");
	if (unk_0x47C01C0E6F4C1D06())
	{
		unk_0x233A5B4A35140C6B(true);
		unk_0x380580A1A1667F69(215);
	}
	unk_0x271C1332F482646C();
	if (bParam1)
	{
		unk_0x31A9E530D137684F(uParam0->f_4, "SET_DATA_SLOT");
		unk_0x380580A1A1667F69(1);
		func_9(unk_0x7391BCD755BD8577(2, 216, true));
		func_14("ES_XPAND");
		if (unk_0x47C01C0E6F4C1D06())
		{
			unk_0x233A5B4A35140C6B(true);
			unk_0x380580A1A1667F69(216);
		}
		unk_0x271C1332F482646C();
	}
	unk_0x31A9E530D137684F(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x271C1332F482646C();
}

float func_47(float fParam0, float fParam1, float fParam2)
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

void func_48(var uParam0, float fParam1, bool bParam2)
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar24[32];
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	
	iVar0 = round((uParam0->f_547 * 255f));
	fVar1 = (func_68() * 0.25f);
	if (unk_0x0FA486DE15EB3004(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0x31A9E530D137684F(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_14(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_67(&(uParam0->f_13));
				}
				else
				{
					func_14(&(uParam0->f_13));
				}
				if (unk_0x4C9BACA8D249CB13())
				{
					unk_0x380580A1A1667F69(150);
				}
				else
				{
					unk_0x380580A1A1667F69(100);
				}
				unk_0x233A5B4A35140C6B(true);
				if (uParam0->f_556 == 4)
				{
					unk_0x380580A1A1667F69((uParam0->f_56 - 1));
				}
				else
				{
					unk_0x380580A1A1667F69(uParam0->f_56);
				}
				unk_0x233A5B4A35140C6B(bParam2);
				if (uParam0->f_556 == 4 || uParam0->f_556 == 3)
				{
					unk_0x380580A1A1667F69(2);
				}
				else
				{
					unk_0x380580A1A1667F69(69);
				}
				unk_0x271C1332F482646C();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				unk_0x31A9E530D137684F(uParam0->f_1, "TRANSITION_UP");
				unk_0xD8B5988E85F72BE5(0.15f);
				unk_0x233A5B4A35140C6B(true);
				unk_0x271C1332F482646C();
				uParam0->f_3 = 1;
			}
		}
		func_66();
		unk_0xE9F9BA9108F437C7(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_69((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_68());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_556 != 4)
	{
		fVar7 = func_65(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (unk_0xA0B98358F89CB4ED(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_65(&(uParam0->f_550));
		fVar8 = (((0.119f + 0.05f) / func_68()) / 2.5f);
		if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_556 == 5)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	unk_0x9EA8CBEA7355649E(2, 215);
	unk_0x9EA8CBEA7355649E(2, 216);
	unk_0x9EA8CBEA7355649E(2, 200);
	unk_0xD481A812073CCF02(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0.95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						func_62((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0.166f) * timestep())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (unk_0x71364F510A1CB69F())
			{
				unk_0xE75DF14D630B12F9();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				unk_0xD8C147DA332E7F06(7);
				unk_0xD8C147DA332E7F06(8);
				unk_0xD8C147DA332E7F06(9);
				unk_0xD8C147DA332E7F06(6);
				unk_0xE9F9BA9108F437C7(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				unk_0xD481A812073CCF02(0, 140, 1);
				unk_0xD481A812073CCF02(0, 141, 1);
				unk_0xD481A812073CCF02(0, 142, 1);
				unk_0xD481A812073CCF02(2, 188, 1);
				if (unk_0x53E955948D35BDB5(2, 188))
				{
					unk_0xE11F00B4AC919F45(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					unk_0xE11F00B4AC919F45(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0xD481A812073CCF02(2, 187, 1);
				if (unk_0x53E955948D35BDB5(2, 187))
				{
					unk_0xE11F00B4AC919F45(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					unk_0xE11F00B4AC919F45(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0xD481A812073CCF02(2, 202, 1);
				if (unk_0x53E955948D35BDB5(2, 202))
				{
					unk_0xE11F00B4AC919F45(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					unk_0xE11F00B4AC919F45(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				unk_0xD8C147DA332E7F06(7);
				unk_0xD8C147DA332E7F06(8);
				unk_0xD8C147DA332E7F06(9);
				unk_0xD8C147DA332E7F06(6);
				unk_0xD481A812073CCF02(0, 140, 1);
				unk_0xD481A812073CCF02(0, 141, 1);
				unk_0xD481A812073CCF02(0, 142, 1);
				if (unk_0xDF0ADAD7E584090D(2, 215) || unk_0x53E955948D35BDB5(2, 200))
				{
					unk_0xE11F00B4AC919F45(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					unk_0xE11F00B4AC919F45(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	unk_0x1C828C4226A9FADF(1, &iVar13, &iVar14, &iVar15, &iVar16);
	unk_0xA6D7328EAA8CB61E(iVar13, iVar14, iVar15, iVar0);
	unk_0x8EF82530113D7244(fVar9, fVar10);
	unk_0x38DFCC31D902E792(0);
	unk_0xFD5A6B90A46ACED0(1f, 0.4f);
	fVar1 = (fVar1 - func_69(6f));
	fVar1 = (fVar1 + (func_69(30f) - func_69((2f * 2f))));
	fVar11 = (fVar2 - func_69((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_47((fVar11 / (0.6f * func_69(25f))), 0f, 1f);
		func_66();
		unk_0xFF35427AF9343886(0.5f, (fVar1 - (func_69((2f - 0.5f)) - 0.001388889f)), fVar6, func_61(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_69((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_69((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_68())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_47((fVar11 / (0.8f * func_69(25f))), 0f, 1f);
			func_58(uParam0, iVar17, (fVar1 + func_69(2f)), fVar9, fVar10, round((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_69(25f));
		if (uParam0->f_556 == 4)
		{
			if (iVar17 == (uParam0->f_576 - 1))
			{
				fVar1 = (fVar1 + func_69((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_68())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_69(2f));
					fVar12 = func_47((fVar11 / (0.6f * func_69(25f))), 0f, 1f);
					func_66();
					unk_0xFF35427AF9343886(0.5f, (fVar1 + func_69((2f * 0.5f))), fVar6, func_61(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_69((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_69((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_556 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_69((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_68())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_69(2f));
			fVar12 = func_47((fVar11 / (0.6f * func_69(25f))), 0f, 1f);
			func_66();
			unk_0xFF35427AF9343886(0.5f, (fVar1 + func_69((2f * 0.5f))), fVar6, func_61(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_69((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_68())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_47((fVar11 / (0.8f * func_69(25f))), 0f, 1f);
			unk_0xA6D7328EAA8CB61E(iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar0))));
			func_51(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0x346268472B5F4E43() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_68()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_68()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_68()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_68()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_556 != 3)
			{
				unk_0x8EF82530113D7244(fVar20, fVar21);
				unk_0x38DFCC31D902E792(1);
			}
			else
			{
				fVar20 = 0.5f;
				unk_0x38DFCC31D902E792(0);
			}
			unk_0xFD5A6B90A46ACED0(1f, 0.4f);
			func_50(&(uParam0->f_550), fVar20, (fVar1 + func_69((2f * 2f))), 0, 0, 0);
			unk_0x8EF82530113D7244(fVar20, fVar21);
			unk_0x38DFCC31D902E792(2);
			unk_0xFD5A6B90A46ACED0(1f, 0.4f);
			unk_0x2D2243C8547A3F8B(0);
			func_66();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar24, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			unk_0x8EF82530113D7244(fVar20, fVar22);
			unk_0xA6D7328EAA8CB61E(iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					unk_0x7C25BC565D364568("PERCENTAGE");
					unk_0xCDA87E1DA52C8C9D(uParam0->f_554);
					unk_0xB435CE12BEF0DBF7(fVar20, (fVar1 + func_69((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0x7C25BC565D364568("FO_TWO_NUM");
					unk_0xCDA87E1DA52C8C9D(uParam0->f_554);
					unk_0xCDA87E1DA52C8C9D(uParam0->f_555);
					unk_0xB435CE12BEF0DBF7(fVar20, (fVar1 + func_69((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0x7C25BC565D364568("MTPHPER_XPNO");
					unk_0xCDA87E1DA52C8C9D(uParam0->f_554);
					unk_0xB435CE12BEF0DBF7(fVar20, (fVar1 + func_69((2f * 2f))), 0);
					break;
				
				case 5:
					unk_0x7C25BC565D364568("ESDOLLA");
					unk_0x976BD422410BF38A(uParam0->f_554, 1);
					unk_0xB435CE12BEF0DBF7(fVar20, (fVar1 + func_69((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar25 = 255;
				iVar26 = 255;
				iVar27 = 255;
				iVar28 = iVar0;
				switch (uParam0->f_557)
				{
					case 1:
						unk_0x1C828C4226A9FADF(107, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 3:
						unk_0x1C828C4226A9FADF(109, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 2:
						unk_0x1C828C4226A9FADF(108, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
				}
				fVar29 = (0.001388889f * 5f);
				fVar30 = ((0.00078125f * 16f) * 2f);
				fVar31 = ((0.001388889f * 16f) * 2f);
				fVar32 = ((fVar21 + func_49(4f)) - 0.006f);
				fVar33 = ((fVar1 + func_69(10f)) + fVar29);
				if (uParam0->f_556 == -1)
				{
					fVar32 = (fVar32 - (0.006f * 6f));
				}
				fVar30 = (fVar30 * 0.65f);
				fVar31 = (fVar31 * 0.65f);
				unk_0xE56EDA9982C42132(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, round((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_69(30f) - 2f));
		}
	}
}

float func_49(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_50(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0x2D2243C8547A3F8B(iParam3);
	unk_0x6F2FE3F2B8CE9390(iParam5);
	func_66();
	if (bParam4)
	{
		unk_0x7C25BC565D364568("STRING");
		unk_0xC327C023FDA37F2E(sParam0);
	}
	else
	{
		unk_0x7C25BC565D364568(sParam0);
	}
	unk_0xB435CE12BEF0DBF7(fParam1, fParam2, 0);
}

int func_51(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_57(iParam0), 64);
	StringCopy(&cVar1, func_54(iParam0, bParam1), 64);
	if (unk_0xFEB6EEC0545AF7AA(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x359669D87D0E343F(&iVar2, &iVar3);
			fVar5 = unk_0xA0B98358F89CB4ED(0);
			if (func_53())
			{
				iVar2 = round((to_float(iVar3) * fVar5));
			}
			fVar6 = (to_float(iVar2) / to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_53())
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
		vVar7.x = (vVar7.x * (func_52(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_52(iParam0) / fVar4));
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

float func_52(int iParam0)
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

int func_53()
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

var func_54(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0x429D45A6C6520026(&(Global_17367.f_6863[iParam0 /*16*/])))
	{
		if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_6863[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_56(unk_0xD4E735F4B6A956AC()) };
			if (unk_0x686DAB3ED67144AB(&Var2, &uVar1))
			{
				return func_55(&uVar1);
			}
		}
		else
		{
			return func_55(&(Global_17367.f_6863[iParam0 /*16*/]));
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

var func_55(var uParam0)
{
	return uParam0;
}

struct<13> func_56(int iParam0)
{
	struct<13> Var0;
	
	unk_0xE05C4303C26882C4(iParam0, &Var0, 13);
	return Var0;
}

char* func_57(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0x429D45A6C6520026(&(Global_17367.f_6014[iParam0 /*16*/])))
	{
		if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_6014[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_56(unk_0xD4E735F4B6A956AC()) };
			unk_0x686DAB3ED67144AB(&Var1, &uVar0);
			return func_55(&uVar0);
		}
		else
		{
			return func_55(&(Global_17367.f_6014[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_58(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0x1C828C4226A9FADF(1, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0xA6D7328EAA8CB61E(iVar0, iVar1, iVar2, iParam5);
	unk_0x8EF82530113D7244(fParam3, fParam4);
	unk_0x38DFCC31D902E792(1);
	unk_0xFD5A6B90A46ACED0(1f, func_60(14f));
	unk_0x2D2243C8547A3F8B(0);
	unk_0x6F2FE3F2B8CE9390(0);
	func_66();
	if (uParam0->f_531[iParam1])
	{
		unk_0x7C25BC565D364568("STRING");
		unk_0xC327C023FDA37F2E(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		unk_0x7C25BC565D364568(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			unk_0xCDA87E1DA52C8C9D(uParam0->f_489[iParam1]);
		}
	}
	unk_0xB435CE12BEF0DBF7(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_51(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0xE56EDA9982C42132("CommonMenu", func_54(7, 0), (fParam4 - 0.006f), ((fParam2 + func_69(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_51(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0xE56EDA9982C42132("CommonMenu", func_54(5, 0), (fParam4 - 0.006f), ((fParam2 + func_69(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_51(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0xE56EDA9982C42132("CommonMenu", func_54(6, 0), (fParam4 - 0.006f), ((fParam2 + func_69(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		unk_0x38DFCC31D902E792(1);
	}
	else
	{
		unk_0x38DFCC31D902E792(2);
	}
	unk_0xFD5A6B90A46ACED0(1f, func_60(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0x8EF82530113D7244(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0x8EF82530113D7244(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0xA6D7328EAA8CB61E(iVar0, iVar1, iVar2, iParam5);
	func_59(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_59(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	unk_0x2D2243C8547A3F8B(0);
	unk_0x6F2FE3F2B8CE9390(0);
	func_66();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			unk_0xFD5A6B90A46ACED0(1f, func_60(18f));
			unk_0x6F2FE3F2B8CE9390(4);
			if (iParam0 < 0)
			{
				unk_0xC42A779360572EA7("ESMINDOLLA");
				unk_0x976BD422410BF38A((-1 * iParam0), 1);
				fVar1 = unk_0x4E0DD18900B7ACAE(0);
			}
			else
			{
				unk_0xC42A779360572EA7("ESDOLLA");
				unk_0x976BD422410BF38A(iParam0, 1);
				fVar1 = unk_0x4E0DD18900B7ACAE(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			unk_0xE56EDA9982C42132("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xE56EDA9982C42132("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xE56EDA9982C42132("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xFD5A6B90A46ACED0(1f, func_60(14f));
			break;
	}
	unk_0xBA9FB571BCB6C1BD(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0x7C25BC565D364568("PERCENTAGE");
			unk_0xCDA87E1DA52C8C9D(iParam0);
			break;
		
		case 1:
			unk_0x6F2FE3F2B8CE9390(5);
			unk_0x7C25BC565D364568("FO_NUM");
			unk_0xCDA87E1DA52C8C9D(iParam0);
			break;
		
		case 2:
			unk_0x6F2FE3F2B8CE9390(5);
			unk_0x7C25BC565D364568("FO_TWO_NUM");
			unk_0xCDA87E1DA52C8C9D(iParam0);
			unk_0xCDA87E1DA52C8C9D(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0xFD5A6B90A46ACED0(1f, func_60(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0x7C25BC565D364568("ESMINDOLLA");
				unk_0x976BD422410BF38A((-1 * iParam0), 1);
			}
			else
			{
				unk_0x7C25BC565D364568("ESDOLLA");
				unk_0x976BD422410BF38A(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0x7C25BC565D364568(sParam4);
			break;
		
		case 7:
			unk_0x7C25BC565D364568("STRING");
			unk_0xC327C023FDA37F2E(sParam4);
			break;
		
		case 8:
			unk_0x6F2FE3F2B8CE9390(5);
			unk_0x7C25BC565D364568("STRING");
			unk_0x90182C5171067861(iParam0, 14);
			break;
		
		case 9:
			unk_0x6F2FE3F2B8CE9390(5);
			unk_0x7C25BC565D364568("STRING");
			unk_0x90182C5171067861(iParam0, 6);
			break;
		
		case 10:
			unk_0x6F2FE3F2B8CE9390(5);
			unk_0x7C25BC565D364568("STRING");
			unk_0x90182C5171067861(iParam0, 2055);
			break;
		
		case 18:
			unk_0x6F2FE3F2B8CE9390(5);
			unk_0x7C25BC565D364568("STRING");
			unk_0x90182C5171067861(iParam0, 2055);
			break;
		
		case 12:
			unk_0x7C25BC565D364568("AHD_DIST");
			unk_0xCDA87E1DA52C8C9D(iParam0);
			break;
		
		case 13:
			unk_0x7C25BC565D364568(sParam4);
			unk_0xCDA87E1DA52C8C9D(iParam0);
			unk_0xCDA87E1DA52C8C9D(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0x7C25BC565D364568(sParam4);
			unk_0xCDA87E1DA52C8C9D(iParam0);
			unk_0xCDA87E1DA52C8C9D(iParam1);
			break;
		
		case 16:
			unk_0x7C25BC565D364568(sParam4);
			unk_0xCDA87E1DA52C8C9D(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0xB435CE12BEF0DBF7((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			unk_0xFD5A6B90A46ACED0(1f, func_60(14f));
		}
		else
		{
			unk_0xB435CE12BEF0DBF7(fParam2, fParam3, 0);
		}
	}
}

float func_60(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_61(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_62(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_64(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1369750.f_1 = 1;
		func_63(7, iVar0);
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

void func_63(int iParam0, int iParam1)
{
	unk_0x2BCFB39E86340DAA(&(Global_1369750.f_6130[iParam0]), iParam1);
}

bool func_64(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_1369750.f_6130[iParam0], iParam1);
}

float func_65(char* sParam0)
{
	unk_0xC42A779360572EA7(sParam0);
	return (unk_0x4E0DD18900B7ACAE(1) / 2f);
}

void func_66()
{
	unk_0x0A74F1E9CF777638(1);
	if (unk_0x607776744A243309() || unk_0x71364F510A1CB69F())
	{
		unk_0x0A74F1E9CF777638(7);
	}
	unk_0xF997724AC8A71261(0);
}

void func_67(char* sParam0)
{
	unk_0x0BAAED7962F122D5(sParam0);
}

float func_68()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x47C01C0E6F4C1D06())
	{
	}
	return fVar0;
}

float func_69(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_70(int iParam0)
{
	if (func_30())
	{
		return;
	}
	if (!Global_14513.f_1 == 1)
	{
		if (func_31(0))
		{
			func_27(iParam0);
		}
		unk_0x2BCFB39E86340DAA(&Global_2384, 2);
	}
}

void func_71(var uParam0)
{
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558)
	{
		uParam0->f_561 = 0;
		uParam0->f_558 = (uParam0->f_572 - 1);
	}
}

bool func_72()
{
	return Global_93271.f_1;
}

void func_73(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, var uParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, var uParam16, bool bParam17)
{
	func_543(uParam0, uParam1, iParam2, iParam3, iParam4, iParam5, &iParam6, uParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, uParam16, bParam17);
}

int func_74(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9)
{
	if (!func_251(uParam1, 5))
	{
		unk_0x135C61E339DABBAC(1);
		func_175(uParam1, func_179(iParam0), iParam4, (iParam5 - 1), iParam6, iParam7, fParam8);
		func_204(uParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 358, 0, 358, 0);
		func_211(uParam1, 5, 1);
		settimera(0);
	}
	if (!func_251(uParam1, 6))
	{
		if (func_171(&(uParam1->f_26), 0, 0))
		{
			func_211(uParam1, 6, 1);
		}
		else
		{
			return 2;
		}
	}
	if (func_251(uParam1, 27) && unk_0x65A878D380D59179())
	{
		if (!func_251(uParam1, 26))
		{
			func_204(uParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 358, 0, 358, 0);
		}
		func_211(uParam1, 27, 0);
	}
	if (timera() > 1000)
	{
		if (*iParam9)
		{
			if (unk_0x65A878D380D59179())
			{
				func_93(uParam2, iParam0);
				func_89(uParam1);
			}
			else if (func_76(&iLocal_542, 0))
			{
				iLocal_542 = 0;
				*iParam9 = 0;
				func_204(uParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 211, "HUD_INPUT68", 358, 0);
			}
		}
		else
		{
			if (!func_251(uParam1, 10))
			{
				unk_0xE11F00B4AC919F45(-1, "BASE_JUMP_PASSED", "HUD_AWARDS", 1);
				func_211(uParam1, 10, 1);
			}
			func_45(&(uParam1->f_26), 0, 1065353216, 0, 1, 0);
			func_89(uParam1);
		}
		if (*iParam9)
		{
			if (unk_0x65A878D380D59179())
			{
				if (!func_251(uParam1, 28) && func_75(&uLocal_105))
				{
					func_211(uParam1, 28, 1);
					func_204(uParam1, 0, 202, "HUD_INPUT53", 217, "SCLB_PROFILE", 358, 0, 358, 0);
				}
			}
			if (func_316(uParam3, 7, 1000))
			{
				*iParam9 = 0;
				func_204(uParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 211, "HUD_INPUT68", 358, 0);
			}
		}
		else if (func_316(uParam3, 5, 1000))
		{
			func_71(&(uParam1->f_26));
			return 1;
		}
		else if (func_316(uParam3, 4, 1000))
		{
			return 0;
		}
		else if ((!*iParam9 && func_316(uParam3, 8, 1000)) && (!unk_0x65A878D380D59179() || func_251(uParam1, 26)))
		{
			*iParam9 = 1;
			if (unk_0x65A878D380D59179())
			{
				if (func_75(&uLocal_105))
				{
					func_211(uParam1, 28, 1);
					func_204(uParam1, 0, 202, "HUD_INPUT53", 217, "SCLB_PROFILE", 358, 0, 358, 0);
				}
				else
				{
					func_211(uParam1, 28, 0);
					func_204(uParam1, 0, 202, "HUD_INPUT53", 358, 0, 358, 0, 358, 0);
				}
			}
		}
	}
	return 2;
}

int func_75(var uParam0)
{
	if ((unk_0x05EFB6A616B6FADE(uParam0->f_42, 1) && Global_1835392.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_76(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1840924.f_2 + 5 < unk_0x817B152F7462D506() && Global_1840924.f_2 > 0)
	{
		func_88(&Global_1840924);
		func_88(&(Global_1840924.f_49));
		*iParam0 = 0;
		Global_1840924.f_2 = 0;
		func_87(0);
	}
	Global_1840924.f_2 = unk_0x817B152F7462D506();
	iVar1 = -1;
	if (unk_0x7DD04831D0FC44CA())
	{
		if (unk_0x9E9A8D0D36258975() == 0)
		{
			iVar1 = unk_0xB1A16D9A90A45A1C();
		}
	}
	if ((unk_0x7DD04831D0FC44CA() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_85() && unk_0x18F86E07E41D913F()))
	{
		if (unk_0xF737D6F364465A12())
		{
			func_82(&(Global_1840924.f_3), func_84(&(Global_1840924.f_3)));
			if (!unk_0x05EFB6A616B6FADE(*iParam0, 4))
			{
				unk_0x2BCFB39E86340DAA(iParam0, 4);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_80(&(Global_1840924.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				_set_warning_message_2("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 2)
			{
				_set_warning_message_2("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 1)
			{
				_set_warning_message_2("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 5)
			{
				_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (!func_85())
			{
				_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			if (!unk_0x05EFB6A616B6FADE(*iParam0, 0))
			{
				if (!unk_0xD73B1037F6BD4B90(2, 201))
				{
					unk_0x2BCFB39E86340DAA(iParam0, 0);
				}
			}
			else if (unk_0x4E6A396CA4DB68F6(2, 201))
			{
				func_88(&(Global_1840924.f_49));
				func_88(&Global_1840924);
				*iParam0 = 0;
				Global_1840924.f_2 = 0;
				func_87(0);
				return 1;
			}
		}
	}
	else
	{
		func_82(&(Global_1840924.f_3), func_84(&(Global_1840924.f_3)));
		if ((func_79(&(Global_1840924.f_49)) && !func_77(&(Global_1840924.f_49), 2000, 1)) && !unk_0x18F86E07E41D913F())
		{
			unk_0x2BCFB39E86340DAA(iParam0, 3);
			StringCopy(&(Global_1840924.f_3.f_1), "", 64);
			func_80(&(Global_1840924.f_3), 0);
		}
		else if (!unk_0x05EFB6A616B6FADE(*iParam0, 3))
		{
			if (!unk_0x05EFB6A616B6FADE(*iParam0, 1))
			{
				unk_0xFB058145776F9CB1(0);
				unk_0x2BCFB39E86340DAA(iParam0, 1);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_80(&(Global_1840924.f_3), 0);
			}
		}
		if (func_79(&Global_1840924))
		{
			if (!func_77(&Global_1840924, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!unk_0x18F86E07E41D913F())
				{
					if (unk_0xC0026E91066F2C12())
					{
						_set_warning_message_2("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1, 0);
					}
					else
					{
						_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
					}
					if (!unk_0x2F161E7C6520CC0A())
					{
						if (!unk_0x05EFB6A616B6FADE(*iParam0, 0))
						{
							if (!unk_0xD73B1037F6BD4B90(2, 201))
							{
								unk_0x2BCFB39E86340DAA(iParam0, 0);
							}
						}
						else if (unk_0x4E6A396CA4DB68F6(2, 201))
						{
							func_88(&Global_1840924);
							*iParam0 = 0;
							Global_1840924.f_2 = 0;
							func_87(0);
							return 1;
						}
					}
				}
				else
				{
					func_88(&Global_1840924);
					*iParam0 = 0;
					Global_1840924.f_2 = 0;
					func_87(0);
					return 1;
				}
			}
			else if (unk_0x05EFB6A616B6FADE(*iParam0, 3))
			{
				if (unk_0xC0026E91066F2C12())
				{
					_set_warning_message_2("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				else
				{
					_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				if (!unk_0x05EFB6A616B6FADE(*iParam0, 0))
				{
					if (!unk_0xD73B1037F6BD4B90(2, 201))
					{
						unk_0x2BCFB39E86340DAA(iParam0, 0);
					}
				}
				else if (unk_0x4E6A396CA4DB68F6(2, 201))
				{
					func_88(&(Global_1840924.f_49));
					func_88(&Global_1840924);
					*iParam0 = 0;
					Global_1840924.f_2 = 0;
					func_87(0);
					return 1;
				}
			}
			else
			{
				if (unk_0xC0026E91066F2C12())
				{
					_set_warning_message_2("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				else
				{
					_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				if (!unk_0x2F161E7C6520CC0A())
				{
					if (!unk_0x05EFB6A616B6FADE(*iParam0, 0))
					{
						if (!unk_0xD73B1037F6BD4B90(2, 201))
						{
							unk_0x2BCFB39E86340DAA(iParam0, 0);
						}
					}
					else if (unk_0x4E6A396CA4DB68F6(2, 201))
					{
						func_88(&(Global_1840924.f_49));
						func_88(&Global_1840924);
						*iParam0 = 0;
						Global_1840924.f_2 = 0;
						func_87(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_77(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_78(uParam0, bParam2, 0);
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

void func_78(var uParam0, bool bParam1, bool bParam2)
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

bool func_79(var uParam0)
{
	return uParam0->f_1;
}

void func_80(var uParam0, bool bParam1)
{
	func_81(uParam0);
	if (bParam1)
	{
		func_87(0);
	}
	uParam0->f_35 = 1;
}

void func_81(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_82(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_83(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			unk_0x353C61A0CC047CBD(&(uParam0->f_1));
			unk_0xCDA87E1DA52C8C9D(uParam0->f_33);
			unk_0xCDA87E1DA52C8C9D(uParam0->f_34);
			unk_0x520E731543F2632E(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0x353C61A0CC047CBD(&(uParam0->f_1));
			unk_0xCDA87E1DA52C8C9D(uParam0->f_33);
			unk_0x520E731543F2632E(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0x353C61A0CC047CBD(&(uParam0->f_1));
			unk_0xC327C023FDA37F2E(&(uParam0->f_17));
			unk_0xCDA87E1DA52C8C9D(uParam0->f_33);
			unk_0xCDA87E1DA52C8C9D(uParam0->f_34);
			unk_0x520E731543F2632E(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0x353C61A0CC047CBD(&(uParam0->f_1));
			unk_0xC327C023FDA37F2E(&(uParam0->f_17));
			unk_0x520E731543F2632E(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0x353C61A0CC047CBD(&(uParam0->f_1));
			unk_0x90182C5171067861(uParam0->f_33, 70);
			unk_0x520E731543F2632E(uParam0->f_41);
		}
		else
		{
			unk_0x353C61A0CC047CBD(&(uParam0->f_1));
			unk_0x520E731543F2632E(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_83(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_84(var uParam0)
{
	return uParam0->f_35;
}

int func_85()
{
	if (func_86())
	{
		return 0;
	}
	if (unk_0x4F3E20635369D110() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_86()
{
	return Global_2458691;
}

void func_87(bool bParam0)
{
	unk_0x783C50B0DAB1C767();
	if (bParam0)
	{
		unk_0x2F4B73C2B0106D15();
	}
}

void func_88(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_89(var uParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	if (!func_92(uParam0))
	{
		return;
	}
	unk_0xE9F9BA9108F437C7(*uParam0, 255, 255, 255, 0, 0);
	if (unk_0x1BFD4084A40BF7E1(2))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_3)
		{
			if (uParam0->f_3[iVar0] != 358)
			{
				uParam0->f_12[iVar0] = unk_0x7391BCD755BD8577(2, uParam0->f_3[iVar0], true);
			}
			iVar0++;
		}
		func_90(&(uParam0->f_1), 4);
	}
	if (!func_23(uParam0->f_1, 4))
	{
		unk_0x31A9E530D137684F(*uParam0, "SET_CLEAR_SPACE");
		unk_0xD8B5988E85F72BE5(200f);
		unk_0x271C1332F482646C();
		unk_0x31A9E530D137684F(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x271C1332F482646C();
		fVar1 = 0f;
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (!unk_0x429D45A6C6520026(uParam0->f_21[iVar2]))
			{
				if (!unk_0x429D45A6C6520026(uParam0->f_12[iVar2 + 4]))
				{
					unk_0x31A9E530D137684F(*uParam0, "SET_DATA_SLOT");
					unk_0xD8B5988E85F72BE5(fVar1);
					func_9(uParam0->f_12[iVar2 + 4]);
					func_9(uParam0->f_12[iVar2]);
					func_14(uParam0->f_21[iVar2]);
					unk_0x271C1332F482646C();
				}
				else
				{
					unk_0x31A9E530D137684F(*uParam0, "SET_DATA_SLOT");
					unk_0xD8B5988E85F72BE5(fVar1);
					func_9(uParam0->f_12[iVar2]);
					func_14(uParam0->f_21[iVar2]);
					unk_0x271C1332F482646C();
				}
				fVar1 = (fVar1 + 1f);
			}
			iVar2++;
		}
		unk_0x31A9E530D137684F(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xD8B5988E85F72BE5(to_float(uParam0->f_2));
		unk_0x271C1332F482646C();
		unk_0x31A9E530D137684F(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0xD8B5988E85F72BE5(0f);
		unk_0xD8B5988E85F72BE5(0f);
		unk_0xD8B5988E85F72BE5(0f);
		unk_0xD8B5988E85F72BE5(80f);
		unk_0x271C1332F482646C();
		func_21(&(uParam0->f_1), 4);
	}
}

void func_90(var uParam0, int iParam1)
{
	func_91(uParam0, iParam1);
}

void func_91(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_92(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x0FA486DE15EB3004(*uParam0))
		{
			func_21(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_93(var uParam0, int iParam1)
{
	func_94(uParam0, &uLocal_105);
}

void func_94(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	int iVar3;
	bool bVar4;
	bool bVar5;
	struct<8> Var6;
	char[] cVar7[8];
	int iVar8[3];
	int iVar9;
	struct<13> Var10;
	var uVar11;
	vector3 vVar12;
	vector3 vVar13;
	bool bVar14;
	
	func_170(&(Global_1840924.f_49), 1, 0);
	unk_0x657F3224D1A882F4();
	func_169();
	func_70(0);
	unk_0x74BF5F6EEF62D5A9();
	func_167(1);
	unk_0xD8C147DA332E7F06(10);
	func_166(1);
	func_165(1);
	if (!func_162())
	{
		if (!unk_0x2F8EAF18929E1E59("LEADERBOARD_SCENE"))
		{
			unk_0x8969D02DEDC106D2("LEADERBOARD_SCENE");
		}
	}
	if (!unk_0x05EFB6A616B6FADE(uParam1->f_42, 3))
	{
		*uParam0 = func_161();
		unk_0x2BCFB39E86340DAA(&(uParam1->f_42), 3);
	}
	Var10 = { func_56(unk_0xD4E735F4B6A956AC()) };
	if (unk_0x0FA486DE15EB3004(*uParam0))
	{
		if (((!unk_0x0A68AE586CCE49F6() || !unk_0x65A878D380D59179()) || (!unk_0x67AA88F93B931038() && unk_0x4E64773FA9BA7A47())) || Global_1835392.f_2832 != 0)
		{
			if (!unk_0x65A878D380D59179())
			{
				if (Global_1835392.f_2829 != 2)
				{
					unk_0xFA57C719261AA55D(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 2;
				}
			}
			else if (!unk_0x67AA88F93B931038() && unk_0x4E64773FA9BA7A47())
			{
				if (Global_1835392.f_2829 != 3)
				{
					unk_0xFA57C719261AA55D(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 3;
				}
			}
			else if (!unk_0x0A68AE586CCE49F6())
			{
				if (Global_1835392.f_2829 != 4)
				{
					unk_0xFA57C719261AA55D(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 4;
				}
			}
			else if (Global_1835392.f_2832 != 0)
			{
				if (Global_1835392.f_2829 != 5)
				{
					unk_0xFA57C719261AA55D(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 5;
				}
			}
			if (!unk_0x05EFB6A616B6FADE(uParam1->f_42, 1))
			{
				unk_0x31A9E530D137684F(*uParam0, "CLEAR_ALL_SLOTS");
				unk_0x271C1332F482646C();
				func_160(*uParam0, Global_1835392.f_2780);
				if (unk_0x445EC9E7EACB710E(&(Global_1835392.f_2780.f_1)))
				{
					if (!func_159(uParam1->f_44))
					{
						if (Global_1835392.f_2780.f_26 > 0)
						{
							Var6 = { Global_1835392.f_2780.f_9 };
							func_158(*uParam0, &(Global_1835392.f_2780.f_1), &cVar7, &Var6, Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_158(*uParam0, &(Global_1835392.f_2780.f_1), &cVar7, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835392.f_2780.f_27)
					{
						StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
						if (Global_1835392.f_2780.f_26 > 0)
						{
							func_158(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_158(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
						if (Global_1835392.f_2780.f_26 > 0)
						{
							func_158(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_158(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					func_157(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
				}
				iVar9 = 0;
				unk_0x2BCFB39E86340DAA(&iVar9, 4);
				func_156(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				unk_0x2BCFB39E86340DAA(&iVar9, 5);
				func_156(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				unk_0x2BCFB39E86340DAA(&iVar9, 6);
				func_156(*uParam0, &iVar3, iVar9, 1, 1);
				unk_0x2BCFB39E86340DAA(&(uParam1->f_42), 1);
				func_155(*uParam0);
				unk_0xFA57C719261AA55D(&(uParam1->f_42), 2);
				unk_0x135C61E339DABBAC(1);
			}
			else
			{
				func_155(*uParam0);
			}
		}
		else
		{
			if (Global_1835392.f_2829 != 1)
			{
				unk_0xFA57C719261AA55D(&(uParam1->f_42), 1);
				Global_1835392.f_2829 = 1;
			}
			if (!func_119(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				unk_0xFA57C719261AA55D(&(uParam1->f_42), 1);
				if (!unk_0x05EFB6A616B6FADE(uParam1->f_42, 0))
				{
					unk_0x31A9E530D137684F(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0x271C1332F482646C();
					func_160(*uParam0, Global_1835392.f_2780);
					if (unk_0x445EC9E7EACB710E(&(Global_1835392.f_2780.f_1)))
					{
						if (!func_159(uParam1->f_44))
						{
							if (Global_1835392.f_2780.f_26 > 0)
							{
								Var6 = { Global_1835392.f_2780.f_9 };
								func_158(*uParam0, &(Global_1835392.f_2780.f_1), &cVar7, &Var6, 1, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_158(*uParam0, &(Global_1835392.f_2780.f_1), &cVar7, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835392.f_2780.f_27)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_158(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_158(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_158(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_158(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						func_157(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
					}
					unk_0x2BCFB39E86340DAA(&(uParam1->f_42), 0);
					unk_0xFA57C719261AA55D(&(uParam1->f_42), 2);
				}
				iVar3 = 0;
				iVar0 = 0;
				if (Global_1835392.f_2825 == -1)
				{
					StringCopy(&vVar12, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							unk_0x2BCFB39E86340DAA(&iVar9, 4);
							func_156(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							unk_0x2BCFB39E86340DAA(&iVar9, 5);
							func_156(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							unk_0x2BCFB39E86340DAA(&iVar9, 6);
							func_156(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						unk_0x2BCFB39E86340DAA(&iVar9, 7);
						func_118(*uParam0, iVar3, iVar9, &vVar12);
						iVar3++;
						iVar0++;
					}
					Global_1835392.f_2825 = 1;
					func_88(&(Global_1835392.f_2823));
				}
				else if (func_77(&(Global_1835392.f_2823), 300, 0))
				{
					StringCopy(&vVar13, "SC_LB_DL", 24);
					StringIntConCat(&vVar13, Global_1835392.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							unk_0x2BCFB39E86340DAA(&iVar9, 4);
							func_156(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							unk_0x2BCFB39E86340DAA(&iVar9, 5);
							func_156(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							unk_0x2BCFB39E86340DAA(&iVar9, 6);
							func_156(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						unk_0x2BCFB39E86340DAA(&iVar9, 7);
						func_118(*uParam0, iVar3, iVar9, &vVar13);
						iVar3++;
						iVar0++;
					}
					Global_1835392.f_2825++;
					if (Global_1835392.f_2825 > 3)
					{
						Global_1835392.f_2825 = 0;
					}
					func_88(&(Global_1835392.f_2823));
				}
				func_155(*uParam0);
			}
			else
			{
				unk_0xFA57C719261AA55D(&(uParam1->f_42), 0);
				if (!unk_0x05EFB6A616B6FADE(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					unk_0x31A9E530D137684F(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0x271C1332F482646C();
					func_160(*uParam0, Global_1835392.f_2780);
					if (unk_0x445EC9E7EACB710E(&(Global_1835392.f_2780.f_1)))
					{
						if (!func_159(uParam1->f_44))
						{
							if (Global_1835392.f_2780.f_26 > 0)
							{
								Var6 = { Global_1835392.f_2780.f_9 };
								func_158(*uParam0, &(Global_1835392.f_2780.f_1), &cVar7, &Var6, 1, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_158(*uParam0, &(Global_1835392.f_2780.f_1), &cVar7, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835392.f_2780.f_27)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_158(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_158(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_158(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_158(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						func_157(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
					}
					if (!unk_0x05EFB6A616B6FADE(uParam1->f_42, 6))
					{
						func_117(&Global_1839723);
						func_113(uParam1, &Global_1839723);
						func_112(uParam1, &Global_1839723);
					}
					iVar3 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835392.f_2704[0] > 1 || (Global_1835392.f_2704[0] > 0 && Global_1835392.f_2775[0] != -1)) || (((Global_1835392.f_2704[0] > 0 && Global_1835392.f_2780.f_27) && func_159(uParam1->f_44)) && Global_1835392.f_2775[0] != -1))
					{
						uParam1->f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar14 = false;
							if (Global_1839723[iVar0 /*100*/].f_75 == 1)
							{
								if (!iVar8[0])
								{
									iVar9 = 0;
									unk_0x2BCFB39E86340DAA(&iVar9, 4);
									func_156(*uParam0, &iVar3, iVar9, 0, 0);
									iVar8[0] = 1;
								}
							}
							else if (Global_1839723[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar8[1])
								{
									iVar9 = 0;
									unk_0x2BCFB39E86340DAA(&iVar9, 5);
									if ((Global_1835392.f_2704[1] < 1 && Global_1835392.f_2775[1] == -1) && !(((Global_1835392.f_2704[1] > 0 && Global_1835392.f_2780.f_27) && func_159(uParam1->f_44)) && Global_1835392.f_2775[1] != -1))
									{
										func_156(*uParam0, &iVar3, iVar9, 1, 0);
										bVar14 = true;
									}
									else
									{
										func_156(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[1] = 1;
								}
							}
							else if (Global_1839723[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar8[2])
								{
									iVar9 = 0;
									unk_0x2BCFB39E86340DAA(&iVar9, 6);
									if (!unk_0xD711DD98E3A47F79())
									{
										bVar14 = true;
									}
									else if (!unk_0xABC298FC92D5899A())
									{
										bVar14 = true;
									}
									if ((Global_1835392.f_2704[2] < 2 && Global_1835392.f_2775[2] == -1) && !(((Global_1835392.f_2704[2] > 0 && Global_1835392.f_2780.f_27) && func_159(uParam1->f_44)) && Global_1835392.f_2775[2] != -1))
									{
										bVar14 = true;
									}
									if (bVar14)
									{
										func_156(*uParam0, &iVar3, iVar9, 1, 0);
									}
									else
									{
										func_156(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[2] = 1;
								}
							}
							if (func_111(Global_1839723[iVar0 /*100*/].f_32))
							{
								if (func_159(uParam1->f_44))
								{
									unk_0xDDF5DC5A133E8D57(unk_0xD4E735F4B6A956AC(), &uVar11);
									if (!Global_1839723[iVar0 /*100*/].f_74 && unk_0x3CAC2741CC1A631F(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar11))
									{
										bVar14 = true;
									}
								}
								if (!bVar14)
								{
									iVar9 = 0;
									if (!Global_1835392.f_2780.f_27)
									{
										if (func_110(&(Global_1839723[iVar0 /*100*/].f_32), &Var10))
										{
											unk_0x2BCFB39E86340DAA(&iVar9, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar4 = true;
												uParam1->f_246.f_1 = iVar0;
												unk_0x2BCFB39E86340DAA(&iVar9, 3);
											}
										}
									}
									if (func_159(uParam1->f_44))
									{
										Var6 = { Global_1839723[iVar0 /*100*/] };
										if (!unk_0x429D45A6C6520026(&(Global_1839723[iVar0 /*100*/].f_84)) && !unk_0x3CAC2741CC1A631F(&(Global_1839723[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&Var6, "/", 64);
											StringConCat(&Var6, &(Global_1839723[iVar0 /*100*/].f_84), 64);
										}
										func_109(*uParam0, iVar3, iVar9, Global_1839723[iVar0 /*100*/].f_59, &Var6, &(Global_1839723[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839723[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_109(*uParam0, iVar3, iVar9, Global_1839723[iVar0 /*100*/].f_59, &(Global_1839723[iVar0 /*100*/]), &(Global_1839723[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839723[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1835392.f_2708)
									{
										bVar5 = false;
										if (unk_0x05EFB6A616B6FADE(Global_1835392.f_2770, iVar1))
										{
											if (unk_0x05EFB6A616B6FADE(Global_1835392.f_2768, iVar1))
											{
												if (Global_1835392.f_2754[iVar1] == Global_1839723[iVar0 /*100*/].f_67[iVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_103(Global_1835392.f_2780, iVar1, Global_1839723[iVar0 /*100*/].f_67[iVar1], 0, Global_1839723[iVar0 /*100*/].f_58);
											}
											else
											{
												func_103(Global_1835392.f_2780, iVar1, Global_1839723[iVar0 /*100*/].f_67[iVar1], Global_1839723[iVar0 /*100*/].f_74, Global_1839723[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (unk_0x05EFB6A616B6FADE(Global_1835392.f_2768, iVar1))
											{
												if (Global_1835392.f_2761[iVar1] == Global_1839723[iVar0 /*100*/].f_67[iVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_100(Global_1835392.f_2780, iVar1, Global_1839723[iVar0 /*100*/].f_60[iVar1], 0);
											}
											else
											{
												func_100(Global_1835392.f_2780, iVar1, Global_1839723[iVar0 /*100*/].f_60[iVar1], Global_1839723[iVar0 /*100*/].f_74);
											}
										}
										iVar1++;
									}
									func_99();
									uVar2[(Global_1839723[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_1839723[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_1839723[iVar0 /*100*/].f_59 > 2)
										{
											unk_0x2BCFB39E86340DAA(&iVar9, 2);
											unk_0x2BCFB39E86340DAA(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_98(*uParam0, (iVar3 - 1), iVar9);
										}
									}
									iVar3++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar9 = 0;
						unk_0x2BCFB39E86340DAA(&iVar9, 4);
						func_156(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						unk_0x2BCFB39E86340DAA(&iVar9, 5);
						func_156(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						unk_0x2BCFB39E86340DAA(&iVar9, 6);
						func_156(*uParam0, &iVar3, iVar9, 1, 0);
					}
					unk_0x2BCFB39E86340DAA(&(uParam1->f_42), 1);
					unk_0xFA57C719261AA55D(&(uParam1->f_42), 2);
					func_155(*uParam0);
					unk_0x135C61E339DABBAC(1);
					if (uParam1->f_246.f_1 == -1 && !bVar4 == 1)
					{
						if (Global_1835392.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							unk_0x2BCFB39E86340DAA(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_98(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_155(*uParam0);
					func_95(uParam0, uParam1);
				}
			}
		}
	}
}

void func_95(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	
	iVar1 = uParam1->f_246.f_1;
	if (unk_0x0B9F814BC8D14042(2))
	{
		unk_0x238F4C0DD5EC6FE7();
		unk_0x9EA8CBEA7355649E(2, 239);
		unk_0x9EA8CBEA7355649E(2, 240);
		unk_0x9EA8CBEA7355649E(2, 237);
		unk_0x9EA8CBEA7355649E(2, 238);
		unk_0xD481A812073CCF02(2, 200, 1);
		if (unk_0x1190AB7024CBD8CB(2, 241))
		{
			unk_0x3DC384F10CED76C5(2, 188, 1f);
		}
		if (unk_0x1190AB7024CBD8CB(2, 242))
		{
			unk_0x3DC384F10CED76C5(2, 187, 1f);
		}
		if (unk_0x66B05A01FAE2443D(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_246.f_187[0])
				{
					if (iVar3 <= (uParam1->f_246.f_187[0] + uParam1->f_246.f_187[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_246.f_1 != iVar3)
				{
					uParam1->f_246.f_1 = iVar3;
					unk_0xE11F00B4AC919F45(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					unk_0x3DC384F10CED76C5(2, 217, 1f);
				}
			}
		}
	}
	if (!unk_0x0B9F814BC8D14042(2))
	{
		func_97(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!unk_0x05EFB6A616B6FADE(uParam1->f_246, 0))
		{
			if ((unk_0xD73B1037F6BD4B90(2, 188) || unk_0x1190AB7024CBD8CB(2, 188)) || iVar6 < -100)
			{
				unk_0xE11F00B4AC919F45(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				unk_0x2BCFB39E86340DAA(&(uParam1->f_246), 0);
				func_88(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_96(uParam1, 188))
		{
			unk_0xFA57C719261AA55D(&(uParam1->f_246), 0);
		}
		if (!unk_0x05EFB6A616B6FADE(uParam1->f_246, 1))
		{
			if ((unk_0xD73B1037F6BD4B90(2, 187) || unk_0x1190AB7024CBD8CB(2, 187)) || iVar6 > 100)
			{
				unk_0xE11F00B4AC919F45(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1++;
				unk_0x2BCFB39E86340DAA(&(uParam1->f_246), 1);
				func_88(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_96(uParam1, 187))
		{
			unk_0xFA57C719261AA55D(&(uParam1->f_246), 1);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_246.f_1 < 0)
		{
			uParam1->f_246.f_1 = (uParam1->f_246.f_2 - 1);
		}
		if (uParam1->f_246.f_1 >= uParam1->f_246.f_2)
		{
			uParam1->f_246.f_1 = 0;
		}
	}
	if (!unk_0x05EFB6A616B6FADE(uParam1->f_246, 3))
	{
		if ((unk_0xD73B1037F6BD4B90(2, 204) || unk_0x53E955948D35BDB5(2, 204)) || unk_0xDF0ADAD7E584090D(2, 237))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_246), 3);
			func_88(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_96(uParam1, 204))
	{
		unk_0xFA57C719261AA55D(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				unk_0xFA57C719261AA55D(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
				func_98(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			unk_0x2BCFB39E86340DAA(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_98(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			unk_0xFA57C719261AA55D(&(uParam1->f_42), 2);
		}
		if (func_111(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!unk_0x05EFB6A616B6FADE(uParam1->f_246, 2))
			{
				if (unk_0xD73B1037F6BD4B90(2, 217) || unk_0x53E955948D35BDB5(2, 217))
				{
					if (!unk_0x2F161E7C6520CC0A())
					{
						unk_0xE11F00B4AC919F45(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						unk_0x2BCFB39E86340DAA(&(uParam1->f_246), 2);
						unk_0x2DF066FE1AB27021(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!unk_0xD73B1037F6BD4B90(2, 217))
			{
				unk_0xFA57C719261AA55D(&(uParam1->f_246), 2);
			}
		}
	}
}

int func_96(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_97(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!unk_0xD73B1037F6BD4B90(2, iParam1) && !unk_0x1190AB7024CBD8CB(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_77(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!unk_0xD73B1037F6BD4B90(2, iParam1) && !unk_0x1190AB7024CBD8CB(2, iParam1)) || func_77(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_97(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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

void func_98(int iParam0, int iParam1, int iParam2)
{
	unk_0x31A9E530D137684F(iParam0, "SET_SLOT_STATE");
	unk_0x380580A1A1667F69(iParam1);
	unk_0x380580A1A1667F69(iParam2);
	unk_0x271C1332F482646C();
}

void func_99()
{
	unk_0x271C1332F482646C();
}

void func_100(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, float fParam15, bool bParam16)
{
	switch (Param0.f_29[iParam14])
	{
		case 4:
			if (bParam16)
			{
				unk_0x390B339C943A8A54("NUMBER");
				unk_0x1757EE80C206FA5E(fParam15, 2);
				unk_0xD481829E3E36543B();
			}
			else
			{
				unk_0x390B339C943A8A54("SC_LB_EMPTY");
				unk_0xD481829E3E36543B();
			}
			break;
		
		case 12:
			if (bParam16)
			{
				unk_0x390B339C943A8A54("NUMBER");
				unk_0xCDA87E1DA52C8C9D(floor(fParam15));
				unk_0xD481829E3E36543B();
			}
			else
			{
				unk_0x390B339C943A8A54("SC_LB_EMPTY");
				unk_0xD481829E3E36543B();
			}
			break;
		
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam16)
			{
				if (Param0.f_29[iParam14] == 18 || Param0.f_29[iParam14] == 20)
				{
					fParam15 = (fParam15 * -1f);
				}
				if (!unk_0xED306E4067508929())
				{
					if (Param0.f_29[iParam14] == 19 || Param0.f_29[iParam14] == 20)
					{
						fParam15 = func_102(fParam15);
					}
					else
					{
						fParam15 = func_101(fParam15);
					}
				}
				unk_0x390B339C943A8A54("NUMBER");
				unk_0x1757EE80C206FA5E(fParam15, 2);
				unk_0xD481829E3E36543B();
			}
			else
			{
				unk_0x390B339C943A8A54("SC_LB_EMPTY");
				unk_0xD481829E3E36543B();
			}
			break;
		
		case 0:
			break;
	}
}

float func_101(float fParam0)
{
	return (fParam0 / 0.3048f);
}

float func_102(float fParam0)
{
	return (fParam0 / 1609.344f);
}

void func_103(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, bool bParam16, bool bParam17)
{
	struct<4> Var0;
	
	if (iParam15 == 2147483647 || iParam15 == -2147483647)
	{
		bParam16 = false;
	}
	StringCopy(&Var0, "", 16);
	switch (Param0.f_29[iParam14])
	{
		case 5:
			if (bParam16)
			{
				unk_0x390B339C943A8A54("NUMBER");
				unk_0xCDA87E1DA52C8C9D(iParam15);
				unk_0xD481829E3E36543B();
			}
			else
			{
				unk_0x390B339C943A8A54("SC_LB_EMPTY");
				unk_0xD481829E3E36543B();
			}
			break;
		
		case 7:
			if (bParam16)
			{
				unk_0x390B339C943A8A54("NUMBER");
				unk_0xCDA87E1DA52C8C9D(-iParam15);
				unk_0xD481829E3E36543B();
			}
			else
			{
				unk_0x390B339C943A8A54("SC_LB_EMPTY");
				unk_0xD481829E3E36543B();
			}
			break;
		
		case 1:
		case 9:
		case 11:
			if (bParam16)
			{
				if (Param0.f_29[iParam14] == 11 && iParam15 < 0)
				{
					iParam15 = (iParam15 * -1);
				}
				if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					unk_0x390B339C943A8A54("STRING");
					unk_0x90182C5171067861(iParam15, 14);
					unk_0xD481829E3E36543B();
				}
				else if (Param0.f_29[iParam14] == 9)
				{
					unk_0x390B339C943A8A54("STRING");
					unk_0x90182C5171067861(iParam15, 6);
					unk_0xD481829E3E36543B();
				}
				else
				{
					unk_0x390B339C943A8A54("STRING");
					unk_0x90182C5171067861(iParam15, 2055);
					unk_0xD481829E3E36543B();
				}
			}
			else
			{
				unk_0x390B339C943A8A54("SC_LB_EMPTY");
				unk_0xD481829E3E36543B();
			}
			break;
		
		case 6:
			if (bParam16)
			{
				if (iParam15 == 2147483647)
				{
					unk_0x390B339C943A8A54("SC_LB_EMPTY");
					unk_0xD481829E3E36543B();
				}
				else if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					unk_0x390B339C943A8A54("STRING");
					unk_0x90182C5171067861(iParam15, 14);
					unk_0xD481829E3E36543B();
				}
				else
				{
					unk_0x390B339C943A8A54("STRING");
					unk_0x90182C5171067861(iParam15, 2055);
					unk_0xD481829E3E36543B();
				}
			}
			else
			{
				unk_0x390B339C943A8A54("SC_LB_EMPTY");
				unk_0xD481829E3E36543B();
			}
			break;
		
		case 2:
		case 10:
			if (bParam16)
			{
				iParam15 = (iParam15 * -1);
				if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					unk_0x390B339C943A8A54("STRING");
					unk_0x90182C5171067861(iParam15, 14);
					unk_0xD481829E3E36543B();
				}
				else if (Param0.f_29[iParam14] == 10)
				{
					unk_0x390B339C943A8A54("STRING");
					unk_0x90182C5171067861(iParam15, 6);
					unk_0xD481829E3E36543B();
				}
				else
				{
					unk_0x390B339C943A8A54("STRING");
					unk_0x90182C5171067861(iParam15, 2055);
					unk_0xD481829E3E36543B();
				}
			}
			else
			{
				unk_0x390B339C943A8A54("SC_LB_EMPTY");
				unk_0xD481829E3E36543B();
			}
			break;
		
		case 3:
			if (bParam17)
			{
				if (unk_0x891603A00E496EF0(iParam15))
				{
					unk_0x390B339C943A8A54("SCLB_VEH_CUST");
					unk_0x4FDA9E6EF359F8A9(unk_0x8270D74D082831DE(iParam15));
					unk_0xD481829E3E36543B();
				}
				else
				{
					unk_0x390B339C943A8A54("SC_LB_EMPTY");
					unk_0xD481829E3E36543B();
				}
			}
			else if (unk_0x891603A00E496EF0(iParam15))
			{
				unk_0x390B339C943A8A54(unk_0x8270D74D082831DE(iParam15));
				unk_0xD481829E3E36543B();
			}
			else
			{
				unk_0x390B339C943A8A54("SC_LB_EMPTY");
				unk_0xD481829E3E36543B();
			}
			break;
		
		case 8:
			if (func_108(iParam15) != 0)
			{
				unk_0x390B339C943A8A54(func_105(func_108(iParam15), 0));
				unk_0xD481829E3E36543B();
			}
			else
			{
				unk_0x390B339C943A8A54("SC_LB_EMPTY");
				unk_0xD481829E3E36543B();
			}
			break;
		
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam16)
			{
				if (Param0.f_29[iParam14] == 14 || Param0.f_29[iParam14] == 16)
				{
					iParam15 = (iParam15 * -1);
				}
				if (!unk_0xED306E4067508929())
				{
					if (Param0.f_29[iParam14] == 15 || Param0.f_29[iParam14] == 16)
					{
						iParam15 = floor(func_102(to_float(iParam15)));
					}
					else
					{
						iParam15 = floor(func_101(to_float(iParam15)));
					}
				}
				unk_0x390B339C943A8A54("NUMBER");
				unk_0xCDA87E1DA52C8C9D(iParam15);
				unk_0xD481829E3E36543B();
			}
			else
			{
				unk_0x390B339C943A8A54("SC_LB_EMPTY");
				unk_0xD481829E3E36543B();
			}
			break;
		
		case 21:
			if (iParam15 > 20)
			{
				unk_0x390B339C943A8A54("SC_LB_EMPTY");
				unk_0xD481829E3E36543B();
			}
			else
			{
				Var0 = { func_104(iParam15) };
				unk_0x390B339C943A8A54(&Var0);
				unk_0xD481829E3E36543B();
			}
			break;
		
		case 0:
			break;
	}
}

struct<4> func_104(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "ARENA_C_SL", 16);
	if (iParam0 > 20)
	{
		StringCopy(&Var0, "**INVALID**", 16);
		return Var0;
	}
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

char* func_105(int iParam0, bool bParam1)
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case 1742569970:
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case -1474608608:
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case 527765612:
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case -165357558:
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case -1372674932:
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_railgun"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case joaat("weapon_machete"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case joaat("weapon_machinepistol"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case joaat("weapon_flashlight"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case joaat("weapon_dbshotgun"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case joaat("weapon_compactrifle"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case joaat("weapon_switchblade"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case joaat("weapon_revolver"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case 317205821:
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case -853065399:
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case 125959754:
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case -1121678507:
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case -1169823560:
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case -1810795771:
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case 419712736:
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case joaat("weapon_cougar"):
			return "WT_RAGE";
			break;
		
		case -159960575:
			return "WT_VEH_WEP";
			break;
		
		case -1075685676:
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case 2024373456:
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case 177293209:
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case -608341376:
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case 961495388:
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case -86904375:
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case 1432025498:
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case -1768145561:
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case -2009644972:
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case 1785463520:
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case -879347409:
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case -2066285827:
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case -1746263880:
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		case 940833800:
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		
		case -1355376991:
			if (bParam1)
			{
				return "WTU_RAYPISTOL";
			}
			else
			{
				return "WT_RAYPISTOL";
			}
			break;
		
		case 1198256469:
			if (bParam1)
			{
				return "WTU_RAYCARBINE";
			}
			else
			{
				return "WT_RAYCARBINE";
			}
			break;
		
		case -1238556825:
			if (bParam1)
			{
				return "WTU_RAYMINIGUN";
			}
			else
			{
				return "WT_RAYMINIGUN";
			}
			break;
		
		default:
			if (func_107(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_106(&(Var0.f_31));
				}
				else
				{
					return func_106(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_106(var uParam0)
{
	return uParam0;
}

int func_107(int iParam0, var uParam1)
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

int func_108(int iParam0)
{
	if (iParam0 == 600)
	{
		return joaat("weapon_railgun");
	}
	else if (iParam0 == 500)
	{
		return joaat("weapon_minigun");
	}
	else if (iParam0 == 400)
	{
		return joaat("weapon_mg");
	}
	else if (iParam0 == 401)
	{
		return joaat("weapon_combatmg");
	}
	else if (iParam0 == 402)
	{
		return -572349828;
	}
	else if (iParam0 == 300)
	{
		return joaat("weapon_assaultrifle");
	}
	else if (iParam0 == 301)
	{
		return joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 302)
	{
		return joaat("weapon_advancedrifle");
	}
	else if (iParam0 == 303)
	{
		return -947031628;
	}
	else if (iParam0 == 200)
	{
		return joaat("weapon_pumpshotgun");
	}
	else if (iParam0 == 201)
	{
		return joaat("weapon_sawnoffshotgun");
	}
	else if (iParam0 == 202)
	{
		return joaat("weapon_assaultshotgun");
	}
	else if (iParam0 == 203)
	{
		return joaat("weapon_bullpupshotgun");
	}
	else if (iParam0 == 100)
	{
		return joaat("weapon_microsmg");
	}
	else if (iParam0 == 101)
	{
		return joaat("weapon_smg");
	}
	else if (iParam0 == 102)
	{
		return joaat("weapon_assaultsmg");
	}
	else if (iParam0 == 0)
	{
		return joaat("weapon_pistol");
	}
	else if (iParam0 == 1)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iParam0 == 2)
	{
		return joaat("weapon_appistol");
	}
	else if (iParam0 == 3)
	{
		return joaat("weapon_pistol50");
	}
	return 0;
}

void func_109(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5)
{
	unk_0x31A9E530D137684F(iParam0, "SET_SLOT");
	unk_0x380580A1A1667F69(iParam1);
	unk_0x380580A1A1667F69(iParam2);
	if (iParam3 > 0)
	{
		unk_0x390B339C943A8A54("NUMBER");
		unk_0xCDA87E1DA52C8C9D(iParam3);
		unk_0xD481829E3E36543B();
	}
	else
	{
		unk_0x390B339C943A8A54("SC_LB_EMPTY");
		unk_0xD481829E3E36543B();
	}
	unk_0x0BAAED7962F122D5(sParam4);
	unk_0x0BAAED7962F122D5(sParam5);
}

int func_110(var uParam0, var uParam1)
{
	if (!func_111(*uParam0))
	{
		return 0;
	}
	if (!func_111(*uParam1))
	{
		return 0;
	}
	if (unk_0xC9C6FA9E6066F480(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_111(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x09BF290B57B95740(&uParam0, 13);
}

void func_112(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar3;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!unk_0x05EFB6A616B6FADE(uParam0->f_42, 5) && !unk_0x05EFB6A616B6FADE(uParam0->f_42, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((uParam1[iVar0 /*100*/])->f_75 != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if ((uParam1[iVar1 /*100*/])->f_75 != 0)
					{
						if ((uParam1[iVar1 /*100*/])->f_75 < (uParam1[iVar0 /*100*/])->f_75)
						{
							uVar3 = (uParam1[iVar1 /*100*/])->f_75;
							(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
							(uParam1[iVar0 /*100*/])->f_75 = uVar3;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_75 == (uParam1[iVar0 /*100*/])->f_75)
						{
							if ((uParam1[iVar1 /*100*/])->f_59 != -1)
							{
								if ((uParam1[iVar1 /*100*/])->f_59 < (uParam1[iVar0 /*100*/])->f_59 || (uParam1[iVar0 /*100*/])->f_59 == -1)
								{
									uVar3 = (uParam1[iVar1 /*100*/])->f_75;
									(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
									(uParam1[iVar0 /*100*/])->f_75 = uVar3;
									Var2 = { *(uParam1[iVar1 /*100*/]) };
									*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
									*(uParam1[iVar0 /*100*/]) = { Var2 };
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_113(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0x05EFB6A616B6FADE(uParam0->f_42, 5) && !unk_0x05EFB6A616B6FADE(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_116(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_116(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_116(uParam1, iVar3, &uVar2, 2))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_114(uParam1);
	}
}

void func_114(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835392.f_2704[iVar0] = 0;
		Global_1835392.f_2775[iVar0] = -1;
		iVar0++;
	}
	Var3 = { func_56(unk_0xD4E735F4B6A956AC()) };
	if (unk_0xE238AA6539810EEE(Global_1835392.f_2826))
	{
		iVar4 = unk_0x9BB29DF8DCAD91D0(Global_1835392.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar4)
		{
			if (iVar0 < 12)
			{
				func_115(&Global_1839593);
				iVar2 = 0;
				unk_0x8002503FDB1250F1(Global_1835392.f_2826, iVar0, &Global_1839593);
				*(uParam0[iVar0 /*100*/]) = { Global_1839593.f_1 };
				(uParam0[iVar0 /*100*/])->f_16 = { Global_1839593.f_17 };
				(uParam0[iVar0 /*100*/])->f_32 = { Global_1839593.f_33 };
				(uParam0[iVar0 /*100*/])->f_45 = { Global_1839593.f_46 };
				(uParam0[iVar0 /*100*/])->f_58 = Global_1839593.f_59;
				(uParam0[iVar0 /*100*/])->f_59 = Global_1839593.f_60;
				Global_1835392.f_2708 = Global_1839593.f_62;
				Global_1835392.f_2769 = Global_1839593.f_63;
				iVar2 = 0;
				if (unk_0x05EFB6A616B6FADE(Global_1839593.f_61, 1))
				{
					iVar2 = 1;
				}
				else if (unk_0x05EFB6A616B6FADE(Global_1839593.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (unk_0x05EFB6A616B6FADE(Global_1839593.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_1835392.f_2704[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_75 = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_59 != -1)
				{
					if (unk_0x05EFB6A616B6FADE(Global_1839593.f_61, 0))
					{
						(uParam0[iVar0 /*100*/])->f_74 = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_74 = 0;
					}
					if (func_110(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
					{
						Global_1835392.f_2775[(iVar2 - 1)] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < Global_1839593.f_62)
				{
					if (unk_0x05EFB6A616B6FADE(Global_1839593.f_63, iVar1))
					{
						(uParam0[iVar0 /*100*/])->f_67[iVar1] = Global_1839593.f_97[iVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_60[iVar1] = Global_1839593.f_64[iVar1];
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_115(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_17), "", 64);
	uParam0->f_33 = { Var0 };
	uParam0->f_46 = { Var0 };
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		uParam0->f_64[iVar1] = 0f;
		uParam0->f_97[iVar1] = 0;
		iVar1++;
	}
}

int func_116(var uParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	if (*uParam2 == 0)
	{
		if (Global_1835392[iParam3 /*901*/][0 /*75*/].f_59 > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][0 /*75*/] };
			Global_1839536[iParam3 /*16*/] = { Global_1835392[iParam3 /*901*/][0 /*75*/] };
			Global_1839536.f_49[iParam3] = Global_1835392[iParam3 /*901*/][0 /*75*/].f_67[Global_1835392.f_2779];
			Global_1839536.f_53[iParam3] = Global_1835392[iParam3 /*901*/][0 /*75*/].f_60[Global_1835392.f_2779];
			*uParam2++;
			return 1;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_1835392.f_2775[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][Global_1835392.f_2775[iParam3] /*75*/] };
			*uParam2++;
			return 1;
		}
		else
		{
			if (Global_1835392.f_2775[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], unk_0xB330C43B9B7B1724(unk_0xD4E735F4B6A956AC()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { func_56(unk_0xD4E735F4B6A956AC()) };
				(uParam0[iParam1 /*100*/])->f_59 = -1;
				(uParam0[iParam1 /*100*/])->f_67[0] = -1;
				(uParam0[iParam1 /*100*/])->f_67[1] = -1;
				(uParam0[iParam1 /*100*/])->f_67[2] = -1;
				(uParam0[iParam1 /*100*/])->f_67[3] = -1;
				(uParam0[iParam1 /*100*/])->f_60[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[3] = -1f;
				*uParam2++;
				return 1;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_1835392.f_2775[iParam3] - iVar0) >= 1)
		{
			if (Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] - iVar0) /*75*/].f_59 > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	else
	{
		iVar0 = floor(to_float((*uParam2 / 2)));
		if ((Global_1835392.f_2775[iParam3] + iVar0) < 12 && (Global_1835392.f_2775[iParam3] + iVar0) > 0)
		{
			if (Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] + iVar0) /*75*/].f_59 > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	*uParam2++;
	return 0;
}

void func_117(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 12)
	{
		StringCopy(uParam0[iVar1 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar1 /*100*/])->f_16), "", 64);
		(uParam0[iVar1 /*100*/])->f_32 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_45 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_58 = 0;
		(uParam0[iVar1 /*100*/])->f_59 = 0;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			(uParam0[iVar1 /*100*/])->f_60[iVar2] = 0f;
			(uParam0[iVar1 /*100*/])->f_67[iVar2] = 0;
			iVar2++;
		}
		(uParam0[iVar1 /*100*/])->f_75 = 0;
		(uParam0[iVar1 /*100*/])->f_74 = 0;
		(uParam0[iVar1 /*100*/])->f_76 = 0;
		(uParam0[iVar1 /*100*/])->f_77 = 0;
		(uParam0[iVar1 /*100*/])->f_78 = 0;
		(uParam0[iVar1 /*100*/])->f_79 = 0;
		StringCopy(&((uParam0[iVar1 /*100*/])->f_80), "", 16);
		iVar1++;
	}
	func_88(&(Global_1835392.f_2830));
}

void func_118(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	unk_0x2BCFB39E86340DAA(&iParam2, 7);
	unk_0x31A9E530D137684F(iParam0, "SET_SLOT");
	unk_0x380580A1A1667F69(iParam1);
	unk_0x380580A1A1667F69(iParam2);
	unk_0x390B339C943A8A54(sParam3);
	unk_0xC4A386982AF76F10();
	unk_0x271C1332F482646C();
}

int func_119(var uParam0)
{
	if (!Global_1835388)
	{
		if (!func_79(&(Global_1835392.f_2827)))
		{
			func_78(&(Global_1835392.f_2827), 1, 0);
			return 0;
		}
		else if (!func_77(&(Global_1835392.f_2827), 1000, 1))
		{
			return 0;
		}
	}
	if (((!unk_0x0A68AE586CCE49F6() || !unk_0x65A878D380D59179()) || (!unk_0x67AA88F93B931038() && unk_0x4E64773FA9BA7A47())) || Global_1835392.f_2832 != 0)
	{
		unk_0xFA57C719261AA55D(&(uParam0->f_42), 4);
		return 1;
	}
	if (!unk_0x05EFB6A616B6FADE(uParam0->f_42, 4))
	{
		func_154(uParam0);
		unk_0x2BCFB39E86340DAA(&(uParam0->f_42), 4);
		return 0;
	}
	else if (unk_0x05EFB6A616B6FADE(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_152(uParam0))
	{
		return 0;
	}
	if (!func_150(uParam0))
	{
		return 0;
	}
	if (!func_136(uParam0))
	{
		return 0;
	}
	if (!unk_0x05EFB6A616B6FADE(uParam0->f_42, 6))
	{
		func_117(&Global_1839723);
		func_113(uParam0, &Global_1839723);
		func_112(uParam0, &Global_1839723);
		unk_0x2BCFB39E86340DAA(&(uParam0->f_42), 6);
	}
	if (!unk_0x05EFB6A616B6FADE(uParam0->f_42, 7))
	{
		if (!func_79(&(Global_1835392.f_2830)))
		{
			func_78(&(Global_1835392.f_2830), 1, 0);
		}
		else if (func_77(&(Global_1835392.f_2830), 30000, 1))
		{
			unk_0x2BCFB39E86340DAA(&(uParam0->f_42), 7);
		}
		if (func_133(&Global_1839723))
		{
		}
		else
		{
			return 0;
		}
		if (func_130(&Global_1839723))
		{
		}
		else
		{
			return 0;
		}
		if (func_124(&Global_1839723))
		{
			func_120(&Global_1839723);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_42), 7);
			func_120(&Global_1839723);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_120(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_123(Global_1835392.f_2826);
	if (Global_1838577.f_81[iVar2] != 0)
	{
		func_122(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_115(&Global_1839593);
		if ((uParam0[iVar0 /*100*/])->f_75 != 0)
		{
			Global_1839593 = Global_1835392.f_2826;
			Global_1839593.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (unk_0x3CAC2741CC1A631F(&((uParam0[iVar0 /*100*/])->f_16), ""))
			{
				Global_1839593.f_17 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1839593.f_17 = { (uParam0[iVar0 /*100*/])->f_16 };
			}
			Global_1839593.f_33 = { (uParam0[iVar0 /*100*/])->f_32 };
			if (func_111((uParam0[iVar0 /*100*/])->f_45))
			{
				Global_1839593.f_46 = { (uParam0[iVar0 /*100*/])->f_45 };
			}
			else
			{
				Global_1839593.f_46 = { (uParam0[iVar0 /*100*/])->f_32 };
			}
			Global_1839593.f_59 = (uParam0[iVar0 /*100*/])->f_58;
			Global_1839593.f_60 = (uParam0[iVar0 /*100*/])->f_59;
			Global_1839593.f_62 = Global_1835392.f_2708;
			Global_1839593.f_63 = Global_1835392.f_2770;
			if ((uParam0[iVar0 /*100*/])->f_74)
			{
				unk_0x2BCFB39E86340DAA(&(Global_1839593.f_61), 0);
			}
			else
			{
				unk_0xFA57C719261AA55D(&(Global_1839593.f_61), 0);
			}
			unk_0x2BCFB39E86340DAA(&(Global_1839593.f_61), (uParam0[iVar0 /*100*/])->f_75);
			iVar1 = 0;
			while (iVar1 < Global_1839593.f_62)
			{
				if (unk_0x05EFB6A616B6FADE(Global_1839593.f_63, iVar1))
				{
					Global_1839593.f_97[iVar1] = (uParam0[iVar0 /*100*/])->f_67[iVar1];
				}
				else
				{
					Global_1839593.f_64[iVar1] = (uParam0[iVar0 /*100*/])->f_60[iVar1];
				}
				iVar1++;
			}
			Global_1838577.f_81[iVar2] = Global_1835392.f_2826;
			unk_0xE7216A76B0CB9082(&Global_1839593);
		}
		iVar0++;
	}
	Global_1838577.f_87[iVar2 /*3*/] = { func_121(unk_0xD4E735F4B6A956AC()) };
}

Vector3 func_121(int iParam0)
{
	return unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iParam0), 0);
}

void func_122(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (unk_0xE238AA6539810EEE(Global_1838577.f_81[iParam1]))
		{
			unk_0x8EB97754A72EE2C6(Global_1838577.f_81[iParam1]);
		}
		Global_1838577.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (unk_0xE238AA6539810EEE(iParam0))
		{
			unk_0x8EB97754A72EE2C6(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1838577.f_81[iVar0] == iParam0)
			{
				Global_1838577.f_81[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_123(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838577.f_81[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838577.f_81[iVar0] == 0)
		{
			return iVar0;
		}
		else if (unk_0xE238AA6539810EEE(Global_1838577.f_81[iVar0]))
		{
			iVar3 = unk_0xDF68ACCB73A36F1E(Global_1838577.f_81[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_124(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_128(uParam0);
			if (unk_0x7DD04831D0FC44CA() && !unk_0x804C0CBA285C7A35(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_111((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_127(&((uParam0[iVar0 /*100*/])->f_32), &Global_1841022))
					{
						Global_1841022[Global_1841022.f_206 /*13*/] = { (uParam0[iVar0 /*100*/])->f_32 };
						Global_1841022.f_206++;
					}
				}
				iVar0++;
			}
			if (Global_1841022.f_206 > 0)
			{
				(uParam0[0 /*100*/])->f_76 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_76 = 3;
			}
			break;
		
		case 1:
			if (func_125(&((uParam0[1 /*100*/])->f_76), &(Global_1841022.f_206), &Global_1841022, &(Global_1841022.f_157)))
			{
				(uParam0[0 /*100*/])->f_76 = 2;
			}
			break;
		
		case 2:
			if (Global_1841022.f_206 > 12)
			{
				Global_1841022.f_206 = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_1841022.f_206)
				{
					if (func_111((uParam0[iVar0 /*100*/])->f_32) && func_111(Global_1841022[iVar1 /*13*/]))
					{
						if (unk_0xC9C6FA9E6066F480(&((uParam0[iVar0 /*100*/])->f_32), &(Global_1841022[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_80 = { Global_1841022.f_157[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0 /*100*/])->f_76 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_125(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	int iVar1;
	
	switch (*uParam0)
	{
		case 0:
			if (unk_0x6FF245A37E5E8629())
			{
			}
			else
			{
				unk_0xAF0CFB88A4BC9992();
				unk_0x80FBAAFF25B583E5(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x6FF245A37E5E8629())
			{
				if (unk_0xBEE904BDA7074917())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			iVar1 = 0;
			while (iVar1 < *uParam1)
			{
				if (unk_0xE5DB0483155418A6(uParam2[iVar1 /*13*/], &uVar0))
				{
					func_126(&uVar0, uParam3[iVar1 /*4*/]);
				}
				iVar1++;
			}
			if (unk_0x6FF245A37E5E8629())
			{
				unk_0xE7D9C3381366C7FB();
			}
			else
			{
				unk_0xAF0CFB88A4BC9992();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_126(var uParam0, char* sParam1)
{
	unk_0x728192F7FED00EAE(uParam0, 35, sParam1);
}

int func_127(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_111(*(uParam1[iVar0 /*13*/])))
		{
			if (unk_0xC9C6FA9E6066F480(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_128(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_129(&(Global_1841022[iVar0 /*13*/]));
		StringCopy(&(Global_1841022.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_76 > 0)
	{
		(uParam0[0 /*100*/])->f_76 = 0;
		(uParam0[1 /*100*/])->f_76 = 0;
		if (!unk_0x6FF245A37E5E8629())
		{
			unk_0xAF0CFB88A4BC9992();
		}
	}
	if (unk_0x6FF245A37E5E8629())
	{
		unk_0xE7D9C3381366C7FB();
	}
	Global_1841022.f_206 = 0;
}

void func_129(var uParam0)
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

int func_130(var uParam0)
{
	int iVar0;
	
	if (unk_0x47C01C0E6F4C1D06())
	{
		return 1;
	}
	else if (unk_0x29A02C184A66D25E() || unk_0x7DD04831D0FC44CA())
	{
		if (!func_132(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_131(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_131(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_111(*uParam1))
			{
				if (!unk_0xDFC6830CBDE1C3AE(uParam1))
				{
					if (unk_0x29A02C184A66D25E() || unk_0x7DD04831D0FC44CA())
					{
						if (unk_0x96CFABF92FD41A94(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (unk_0x365C4466BC171A2D())
					{
						if (unk_0x96CFABF92FD41A94(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, unk_0xA788DB0DF5938ECF(uParam1), 64);
						if (unk_0x332D85764ED0503F())
						{
						}
						else if (unk_0x7DD04831D0FC44CA())
						{
						}
						else if (unk_0x47C01C0E6F4C1D06())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, unk_0xB330C43B9B7B1724(unk_0x10F064641B66DA2D(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0xDFC6830CBDE1C3AE(uParam1))
			{
				if (!unk_0x1FE0D8BBA2A97FDF())
				{
					if (unk_0x2FABB060BC2FF8FA())
					{
						StringCopy(sParam2, unk_0xA788DB0DF5938ECF(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, unk_0xB330C43B9B7B1724(unk_0x10F064641B66DA2D(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_132(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x29A02C184A66D25E() && !unk_0x7DD04831D0FC44CA())
	{
		return 1;
	}
	if ((uParam0[0 /*100*/])->f_78 == 2)
	{
		return 1;
	}
	switch ((uParam0[0 /*100*/])->f_78)
	{
		case 0:
			Global_1835392.f_3183 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_1835392.f_2833[iVar1 /*16*/]), "", 64);
				func_129(&(Global_1835392.f_3026[iVar1 /*13*/]));
				if (func_111((uParam0[iVar1 /*100*/])->f_32))
				{
					Global_1835392.f_3026[Global_1835392.f_3183 /*13*/] = { (uParam0[iVar1 /*100*/])->f_32 };
					Global_1835392.f_3183++;
				}
				iVar1++;
			}
			if (Global_1835392.f_3183 > 0)
			{
				(uParam0[0 /*100*/])->f_79 = unk_0x195FF700EC376BED(&(Global_1835392.f_3026), Global_1835392.f_3183);
				(uParam0[0 /*100*/])->f_78 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0xA8BCB82D2AC8A3F5((uParam0[0 /*100*/])->f_79, &(Global_1835392.f_2833), Global_1835392.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_111((uParam0[iVar1 /*100*/])->f_32))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_1835392.f_2833[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else if (iVar0 == -1)
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			(uParam0[0 /*100*/])->f_79 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_133(var uParam0)
{
	int iVar0;
	
	if (unk_0x29A02C184A66D25E() || unk_0x7DD04831D0FC44CA())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_135(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_1835392.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_134(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_134(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0x429D45A6C6520026(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xC111517DD4F2CB14(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_111(Var0))
			{
				if (!unk_0xDFC6830CBDE1C3AE(&Var0))
				{
					if ((unk_0x365C4466BC171A2D() || unk_0x29A02C184A66D25E()) || unk_0x7DD04831D0FC44CA())
					{
						if (unk_0x96CFABF92FD41A94(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, unk_0xA788DB0DF5938ECF(&Var0), 64);
						if (unk_0x332D85764ED0503F())
						{
						}
						else if (unk_0x7DD04831D0FC44CA())
						{
						}
						else if (unk_0x47C01C0E6F4C1D06())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, unk_0xB330C43B9B7B1724(unk_0x10F064641B66DA2D(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0xDFC6830CBDE1C3AE(&Var0))
			{
				if (!unk_0x1FE0D8BBA2A97FDF())
				{
					if (unk_0x2FABB060BC2FF8FA())
					{
						StringCopy(sParam17, unk_0xA788DB0DF5938ECF(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, unk_0xB330C43B9B7B1724(unk_0x10F064641B66DA2D(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_135(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!unk_0x29A02C184A66D25E() && !unk_0x7DD04831D0FC44CA())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0x429D45A6C6520026(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xC111517DD4F2CB14(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_111(Var1[0 /*13*/]))
			{
				if (!unk_0xDFC6830CBDE1C3AE(&(Var1[0 /*13*/])))
				{
					*uParam4 = unk_0x195FF700EC376BED(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, unk_0xB330C43B9B7B1724(unk_0x10F064641B66DA2D(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0xA8BCB82D2AC8A3F5(*uParam4, uParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *(uParam3[0 /*16*/]) };
				*uParam0 = 2;
			}
			else if (iVar0 == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			*uParam4 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_136(var uParam0)
{
	struct<97> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	struct<13> Var12;
	
	Var0.f_19.f_1 = 4;
	iVar5 = -1;
	iVar9 = 2;
	Var12 = { func_56(unk_0xD4E735F4B6A956AC()) };
	switch ((*uParam0)[iVar9])
	{
		case 0:
			Global_1835392.f_2775[iVar9] = -1;
			Global_1835392.f_2704[iVar9] = 0;
			Global_1835013.f_374 = -1;
			if (unk_0xD1832FEBE50B1AB1())
			{
				if (unk_0xE0B3F7A8017F6425(&Var12))
				{
					if (unk_0xE087FDE0E2FA8ADF(&(uParam0->f_7), 35, &Var12))
					{
						uParam0->f_44.f_2 = uParam0->f_7;
						uParam0->f_44.f_1 = 3;
						(*uParam0)[iVar9] = 1;
						return 0;
					}
				}
				else
				{
					(*uParam0)[iVar9] = 3;
					return 1;
				}
			}
			else
			{
				(*uParam0)[iVar9] = 3;
				return 1;
			}
			break;
		
		case 1:
			uParam0->f_44.f_1 = 3;
			Var1 = uParam0->f_44;
			Var1.f_1 = uParam0->f_44.f_1;
			if (func_148(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var12, func_149(), 0, 0, 0))
			{
				func_147(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x61209D54A5FA61B1(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar7 = 0;
						iVar2 = 0;
						if (func_149())
						{
							iVar7 = 0;
							while (iVar7 < Var1.f_3)
							{
								unk_0x80417E8346C8DA5B(iVar7, &Var0);
								if (Global_1835013.f_374 < 0)
								{
									if (func_110(&Var0, &Var12) || func_110(&Var0, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var0.f_96;
									}
								}
								if (iVar5 < 0)
								{
									if (unk_0x05EFB6A616B6FADE(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0xB3F340A373AB32FB(iVar7, 0))
										{
											iVar5 = iVar7;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0xEA904336324A0B10(iVar7, 0))
									{
										iVar5 = iVar7;
									}
								}
								func_146(&Var0);
								iVar7++;
							}
							if (iVar5 < 0)
							{
								iVar5 = Var1.f_3;
							}
						}
						iVar7 = 0;
						unk_0x80417E8346C8DA5B(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_1835392.f_2704[iVar9] < 12)
							{
								if (func_149() && iVar5 == 0)
								{
									func_145(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Var0.f_96);
									Global_1835392.f_2775[iVar9] = 0;
									Global_1835392.f_2704[iVar9]++;
								}
								if (func_149() && (func_110(&Var0, &Var12) || func_110(&Var0, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_110(&Var0, &Var12))
									{
										iVar5 = 0;
										Global_1835392.f_2775[iVar9] = 0;
									}
									MemCopy(&(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
									Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_32 = { Var0 };
									Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_59 = Var0.f_96;
									if (func_144(uParam0->f_44))
									{
										iVar4 = unk_0xB3F340A373AB32FB(0, Global_1835392.f_2709);
										if (iVar4 == 1)
										{
											Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_58 = 0;
										}
									}
									if (func_159(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1835392.f_2708)
									{
										if (unk_0x05EFB6A616B6FADE(Global_1835392.f_2769, Global_1835392.f_2710[iVar3]))
										{
											Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_67[iVar3] = unk_0xB3F340A373AB32FB(0, Global_1835392.f_2710[iVar3]);
										}
										else
										{
											Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_60[iVar3] = unk_0xEA904336324A0B10(0, Global_1835392.f_2710[iVar3]);
										}
										iVar3++;
									}
									Global_1835392.f_2704[iVar9]++;
								}
								bVar8 = true;
							}
						}
						if (!bVar8)
						{
							Global_1835392.f_2704[iVar9]++;
						}
						if (!func_149())
						{
							iVar5 = Var1.f_5;
						}
						if (iVar5 > 6)
						{
							iVar6 = (iVar5 - 6);
						}
						else if (bVar8)
						{
							iVar6 = 1;
						}
						else
						{
							iVar6 = 0;
						}
						iVar7 = iVar6;
						func_146(&Var0);
						iVar7 = iVar6;
						while (iVar7 <= (Var1.f_3 - 1))
						{
							unk_0x80417E8346C8DA5B(iVar7, &Var0);
							if (Global_1835392.f_2704[iVar9] < 12 && Var0.f_96 > 1)
							{
								if (func_149() && iVar5 == iVar7)
								{
									if (!func_110(&(Global_1835392[iVar9 /*901*/][0 /*75*/].f_32), &Var12))
									{
										func_145(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Var0.f_96);
										Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
										Global_1835392.f_2704[iVar9]++;
									}
								}
								if (func_149() && (func_110(&Var0, &Var12) || func_110(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[iVar9] < 12)
								{
									if (func_111(Var0) && !func_110(&Var0, &(Global_1835392[iVar9 /*901*/][0 /*75*/].f_32)))
									{
										if (func_110(&Var0, &Var12))
										{
											if (Global_1835392.f_2775[iVar9] < 0)
											{
												Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
											}
										}
										MemCopy(&(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
										Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_32 = { Var0 };
										Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_59 = Var0.f_96;
										Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_74 = 1;
										if (func_144(uParam0->f_44))
										{
											iVar4 = unk_0xB3F340A373AB32FB(iVar7, Global_1835392.f_2709);
											if (iVar4 == 1)
											{
												Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_58 = 0;
											}
										}
										if (func_159(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										iVar2 = 0;
										while (iVar2 < Global_1835392.f_2708)
										{
											if (unk_0x05EFB6A616B6FADE(Global_1835392.f_2769, Global_1835392.f_2710[iVar2]))
											{
												Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_67[iVar2] = unk_0xB3F340A373AB32FB(iVar7, Global_1835392.f_2710[iVar2]);
											}
											else
											{
												Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_60[iVar2] = unk_0xEA904336324A0B10(iVar7, Global_1835392.f_2710[iVar2]);
											}
											iVar2++;
										}
										Global_1835392.f_2704[iVar9]++;
									}
								}
							}
							func_146(&Var0);
							iVar7++;
						}
						unk_0x27BFAFBB668CCC49();
						func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar8)
						{
							if (Global_1835392.f_2775[iVar9] == -1 && func_149())
							{
								if (Global_1835392.f_2704[iVar9] >= 1)
								{
									func_145(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Global_1835392[iVar9 /*901*/][(Global_1835392.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_145(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), 1);
								}
								Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
								Global_1835392.f_2704[iVar9]++;
							}
							(*uParam0)[iVar9] = 3;
						}
						else
						{
							(*uParam0)[iVar9] = 2;
						}
					}
					else
					{
						if (!bVar8)
						{
							Global_1835392.f_2704[iVar9]++;
						}
						unk_0x27BFAFBB668CCC49();
						func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2775[iVar9] = -1;
						(*uParam0)[iVar9] = 2;
					}
				}
				else
				{
					func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2775[iVar9] = -1;
					(*uParam0)[iVar9] = 2;
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2832), iVar9);
				}
			}
			break;
		
		case 2:
			if (Global_1835392.f_2775[iVar9] == -1)
			{
				iVar11 = 11;
			}
			else
			{
				iVar11 = 1;
			}
			uParam0->f_44.f_1 = 3;
			Var1 = uParam0->f_44;
			Var1.f_1 = uParam0->f_44.f_1;
			if (func_138(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar11))
			{
				func_147(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x61209D54A5FA61B1(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar2 = 0;
						while (iVar2 < Var1.f_3)
						{
							unk_0x80417E8346C8DA5B(iVar2, &Var0);
							bVar10 = false;
							if (Global_1835392[iVar9 /*901*/][0 /*75*/].f_59 > 1 || Global_1835392[iVar9 /*901*/][0 /*75*/].f_59 <= 0)
							{
								bVar10 = true;
							}
							if (Global_1835392.f_2704[iVar9] < 12 || bVar10)
							{
								if (func_149() && (func_110(&Var0, &Var12) || func_110(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (iVar2 == 0 || bVar10)
								{
									MemCopy(&(Global_1835392[iVar9 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_1835392[iVar9 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_1835392[iVar9 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_144(uParam0->f_44))
									{
										iVar4 = unk_0xB3F340A373AB32FB(0, Global_1835392.f_2709);
										if (iVar4 == 1)
										{
											Global_1835392[iVar9 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar9 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_159(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar9 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[iVar9 /*901*/][0 /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1835392.f_2708)
									{
										if (unk_0x05EFB6A616B6FADE(Global_1835392.f_2769, Global_1835392.f_2710[iVar3]))
										{
											Global_1835392[iVar9 /*901*/][0 /*75*/].f_67[iVar3] = unk_0xB3F340A373AB32FB(0, Global_1835392.f_2710[iVar3]);
										}
										else
										{
											Global_1835392[iVar9 /*901*/][0 /*75*/].f_60[iVar3] = unk_0xEA904336324A0B10(0, Global_1835392.f_2710[iVar3]);
										}
										iVar3++;
									}
									if (Global_1835392.f_2704[iVar9] == 0)
									{
										if (bVar10)
										{
										}
										else
										{
											Global_1835392.f_2704[iVar9]++;
										}
									}
								}
								else if (Global_1835392.f_2704[iVar9] < 12)
								{
									MemCopy(&(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
									Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_32 = { Var0 };
									if (func_144(uParam0->f_44))
									{
										iVar4 = unk_0xB3F340A373AB32FB(iVar2, Global_1835392.f_2709);
										if (iVar4 == 1)
										{
											Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_58 = 0;
										}
									}
									if (func_159(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_59 = Var0.f_96;
									Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1835392.f_2708)
									{
										if (unk_0x05EFB6A616B6FADE(Global_1835392.f_2769, Global_1835392.f_2710[iVar3]))
										{
											Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_67[iVar3] = unk_0xB3F340A373AB32FB(iVar2, Global_1835392.f_2710[iVar3]);
										}
										else
										{
											Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_60[iVar3] = unk_0xEA904336324A0B10(iVar2, Global_1835392.f_2710[iVar3]);
										}
										iVar3++;
									}
									if (iVar2 != 0)
									{
										Global_1835392.f_2704[iVar9]++;
									}
								}
							}
							func_146(&Var0);
							iVar2++;
						}
					}
					unk_0x27BFAFBB668CCC49();
					func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar9] = 3;
				}
				else
				{
					unk_0x27BFAFBB668CCC49();
					func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2832), iVar9);
					Global_1835392.f_2704[iVar9] = 0;
					(*uParam0)[iVar9] = 3;
				}
				if (Global_1835392.f_2775[iVar9] == -1 && func_149())
				{
					if (Global_1835392.f_2704[iVar9] >= 1)
					{
						func_145(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Global_1835392[iVar9 /*901*/][(Global_1835392.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_145(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), 1);
					}
					Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
					Global_1835392.f_2704[iVar9]++;
				}
			}
			break;
		
		case 3:
			func_137(iVar9, Global_1835013.f_374);
			(*uParam0)[iVar9] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_137(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((func_149() && Global_1835392.f_2704[iParam0] > Global_1835392.f_2775[iParam0]) && Global_1835392.f_2775[iParam0] >= 0)
	{
		if (iParam1 != Global_1835392[iParam0 /*901*/][Global_1835392.f_2775[iParam0] /*75*/].f_59)
		{
			iVar0 = 0;
			while (iVar0 < Global_1835392.f_2704[iParam0])
			{
				if (iVar0 != Global_1835392.f_2775[iParam0])
				{
					if (Global_1835392[iParam0 /*901*/][iVar0 /*75*/].f_59 >= Global_1835392[iParam0 /*901*/][Global_1835392.f_2775[iParam0] /*75*/].f_59)
					{
						if (Global_1835392[iParam0 /*901*/][iVar0 /*75*/].f_59 < iParam1 || iParam1 == -1)
						{
							Global_1835392[iParam0 /*901*/][iVar0 /*75*/].f_59++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_149())
		{
		}
		if (Global_1835392.f_2704[iParam0] <= Global_1835392.f_2775[iParam0])
		{
		}
		if (Global_1835392.f_2775[iParam0] < 0)
		{
		}
	}
}

int func_138(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_141() && !func_140())
			{
				func_139(*uParam2);
				if (unk_0x3A741D3894FC38DE(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0xB93D32722647751E(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x70D2FE87735B5F6D(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_139(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67)
{
	Global_1835008 = 1;
	func_170(&(Global_1835008.f_1), 1, 0);
	Global_1835008.f_3 = Param0;
	Global_1835008.f_4 = Param0.f_1;
}

int func_140()
{
	if (unk_0xD1ABB20CFF127CCC() && !func_162())
	{
		return 1;
	}
	return 0;
}

int func_141()
{
	if (unk_0xF1DD1C47B93AF5FB() || Global_1835008)
	{
		func_142();
		return 1;
	}
	return 0;
}

void func_142()
{
	if (func_77(&(Global_1835008.f_1), 120000, 1))
	{
		unk_0xCC3146CA1B3ED1CD(Global_1835008.f_3, Global_1835008.f_4, -1);
		Global_1835008 = 0;
		func_88(&(Global_1835008.f_1));
	}
}

void func_143(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1835008 = 0;
	func_88(&(Global_1835008.f_1));
	unk_0xCC3146CA1B3ED1CD(*uParam2, uParam2->f_1, -1);
}

int func_144(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_145(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_159(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_1835013.f_355}, 16);
		sParam1->f_32 = { Global_1835013.f_361 };
		MemCopy(&(sParam1->f_16), {Global_1835013.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, unk_0xB330C43B9B7B1724(unk_0xD4E735F4B6A956AC()), 64);
		sParam1->f_32 = { func_56(unk_0xD4E735F4B6A956AC()) };
	}
	sParam1->f_59 = iParam2;
	if (func_144(uParam0->f_44))
	{
		iVar0 = Global_1835013.f_211.f_36[Global_1835392.f_2709];
		if (iVar0 == 1)
		{
			sParam1->f_58 = 1;
		}
		else
		{
			sParam1->f_58 = 0;
		}
	}
	sParam1->f_74 = 1;
	iVar1 = 0;
	while (iVar1 < Global_1835392.f_2708)
	{
		if (unk_0x05EFB6A616B6FADE(Global_1835013.f_142.f_2, Global_1835392.f_2710[iVar1]))
		{
			sParam1->f_67[iVar1] = Global_1835013.f_211.f_36[Global_1835392.f_2710[iVar1]];
		}
		else
		{
			sParam1->f_60[iVar1] = Global_1835013.f_211.f_3[Global_1835392.f_2710[iVar1]];
		}
		iVar1++;
	}
}

void func_146(var uParam0)
{
	int iVar0;
	
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
	StringCopy(&(uParam0->f_13), "", 24);
	uParam0->f_19 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_85 = 0;
	StringCopy(&(uParam0->f_86), "", 32);
	StringCopy(&(uParam0->f_94), "", 8);
	uParam0->f_96 = 0;
	uParam0->f_97 = 0;
}

void func_147(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_148(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1835013.f_211.f_36[0];
	uVar1 = Global_1835013.f_211.f_3[0];
	if (bParam6)
	{
		uVar0 = iParam7;
		uVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_141() && !func_140())
			{
				func_139(*uParam2);
				if (bParam5)
				{
					if (unk_0x05EFB6A616B6FADE(Global_1835013.f_142.f_2, 0))
					{
						if (unk_0x7A0009CE1A2CD030(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (unk_0x3FB3C88E6D82D05E(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (unk_0xFC7B53DCF4763694(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0xB93D32722647751E(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x70D2FE87735B5F6D(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_149()
{
	if (Global_1835388 && Global_1835389)
	{
		return 1;
	}
	return 0;
}

int func_150(var uParam0)
{
	struct<20> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<13> Var10;
	
	Var0.f_19.f_1 = 4;
	iVar4 = -1;
	iVar9 = 1;
	Var10 = { func_56(unk_0xD4E735F4B6A956AC()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar3 = unk_0x3B1559F29706DE5C();
			Global_1835392.f_2775[1] = -1;
			Global_1835013.f_374 = -1;
			Global_1835392.f_2704[iVar9] = 0;
			if (iVar3 > 0)
			{
				if (func_149())
				{
					iVar8 = 0;
				}
				else
				{
					iVar8 = 1;
				}
				if (func_151(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], iVar8, 0, 100))
				{
					func_147(&Var1, &(uParam0->f_44));
					if (uParam0->f_5 && unk_0x61209D54A5FA61B1(&Var1))
					{
						if (func_149())
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < Var1.f_3)
							{
								if (iVar4 < 0)
								{
									unk_0x80417E8346C8DA5B(iVar6, &Var0);
									if (func_159(uParam0->f_44))
									{
										if (Global_1835013.f_374 < 0)
										{
											if (func_110(&Var0, &(Global_1835013.f_361)))
											{
												Global_1835013.f_374 = Var0.f_96;
											}
										}
									}
									if (unk_0x05EFB6A616B6FADE(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0xB3F340A373AB32FB(iVar6, 0))
										{
											iVar4 = iVar6;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0xEA904336324A0B10(iVar6, 0))
									{
										iVar4 = iVar6;
									}
									func_146(&Var0);
								}
								iVar6++;
							}
							if (iVar4 < 0)
							{
								iVar4 = Var1.f_3;
							}
						}
						iVar6 = 0;
						if (func_149() && iVar4 == 0)
						{
							if (Global_1835392.f_2704[iVar9] < 12)
							{
								func_145(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), 1);
								Global_1835392.f_2775[iVar9] = 0;
								Global_1835392.f_2704[iVar9]++;
							}
						}
						if (Var1.f_3 > 0)
						{
							unk_0x80417E8346C8DA5B(0, &Var0);
							if (func_149() && (func_110(&Var0, &Var10) || func_110(&Var0, &(Global_1835013.f_361))))
							{
							}
							else if (func_111(Var0) && Global_1835392.f_2704[iVar9] < 12)
							{
								if (func_110(&Var0, &Var10))
								{
									iVar4 = 0;
									Global_1835392.f_2775[1] = 0;
								}
								MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
								Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_32 = { Var0 };
								Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_59 = 1;
								if (func_144(uParam0->f_44))
								{
									iVar7 = unk_0xB3F340A373AB32FB(0, Global_1835392.f_2709);
									if (iVar7 == 1)
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_58 = 1;
									}
									else
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_58 = 0;
									}
								}
								if (func_159(uParam0->f_44))
								{
									MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_74 = 1;
								iVar2 = 0;
								while (iVar2 < Global_1835392.f_2708)
								{
									if (unk_0x05EFB6A616B6FADE(Global_1835392.f_2769, Global_1835392.f_2710[iVar2]))
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_67[iVar2] = unk_0xB3F340A373AB32FB(0, Global_1835392.f_2710[iVar2]);
									}
									else
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_60[iVar2] = unk_0xEA904336324A0B10(0, Global_1835392.f_2710[iVar2]);
									}
									iVar2++;
								}
								Global_1835392.f_2704[1]++;
							}
							else
							{
								func_146(&Var0);
								unk_0x27BFAFBB668CCC49();
								func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_1835392.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1835392.f_2775[iVar9] == -1 && func_149())
								{
									if (Global_1835392.f_2704[iVar9] >= 1)
									{
										func_145(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Global_1835392[iVar9 /*901*/][(Global_1835392.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_145(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), 1);
									}
									Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
									Global_1835392.f_2704[iVar9]++;
								}
								return 0;
							}
							func_146(&Var0);
						}
						else
						{
							Global_1835392.f_2704[1] = 0;
							func_146(&Var0);
							unk_0x27BFAFBB668CCC49();
							func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_1835392.f_2775[iVar9] == -1 && func_149())
							{
								if (Global_1835392.f_2704[iVar9] >= 1)
								{
									func_145(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Global_1835392[iVar9 /*901*/][(Global_1835392.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_145(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), 1);
								}
								Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
								Global_1835392.f_2704[iVar9]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_149())
						{
							iVar4 = Var1.f_5;
						}
						if (iVar4 > 6)
						{
							iVar5 = (iVar4 - 6);
						}
						else
						{
							iVar5 = 1;
						}
						iVar6 = iVar5;
						iVar6 = iVar5;
						while (iVar6 <= (Var1.f_3 - 1))
						{
							unk_0x80417E8346C8DA5B(iVar6, &Var0);
							if (Global_1835392.f_2704[iVar9] < 12 && Var0.f_96 > 1)
							{
								if (func_149() && iVar4 == iVar6)
								{
									if (!func_110(&(Global_1835392[iVar9 /*901*/][0 /*75*/].f_32), &Var10))
									{
										func_145(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Var0.f_96);
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_59 = iVar6 + 1;
										Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
										Global_1835392.f_2704[iVar9]++;
									}
								}
								if (func_149() && (func_110(&Var0, &Var10) || func_110(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[1] < 12)
								{
									if (func_111(Var0) && !func_110(&Var0, &(Global_1835392[iVar9 /*901*/][0 /*75*/].f_32)))
									{
										if (func_110(&Var0, &Var10))
										{
											if (Global_1835392.f_2775[1] < 0)
											{
												Global_1835392.f_2775[1] = Global_1835392.f_2704[1];
											}
										}
										MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/]), {Var0.f_13}, 16);
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_32 = { Var0 };
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_59 = iVar6 + 1;
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_74 = 1;
										if (func_144(uParam0->f_44))
										{
											iVar7 = unk_0xB3F340A373AB32FB(iVar6, Global_1835392.f_2709);
											if (iVar7 == 1)
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_159(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										while (iVar2 < Global_1835392.f_2708)
										{
											if (unk_0x05EFB6A616B6FADE(Global_1835392.f_2769, Global_1835392.f_2710[iVar2]))
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_67[iVar2] = unk_0xB3F340A373AB32FB(iVar6, Global_1835392.f_2710[iVar2]);
											}
											else
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_60[iVar2] = unk_0xEA904336324A0B10(iVar6, Global_1835392.f_2710[iVar2]);
											}
											iVar2++;
										}
										Global_1835392.f_2704[1]++;
									}
								}
							}
							func_146(&Var0);
							iVar6++;
						}
						unk_0x27BFAFBB668CCC49();
						func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_1835392.f_2775[iVar9] == -1 && func_149())
						{
							if (Global_1835392.f_2704[iVar9] >= 1)
							{
								func_145(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Global_1835392[iVar9 /*901*/][(Global_1835392.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_145(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), 1);
							}
							Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
							Global_1835392.f_2704[iVar9]++;
						}
						return 0;
					}
					else
					{
						func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2832), 1);
						return 0;
					}
				}
			}
			else
			{
				func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_1835392.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_137(iVar9, Global_1835013.f_374);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_151(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_141() && !func_140())
			{
				func_139(*uParam2);
				if (leaderboards2_read_friends_by_row(uParam2, uParam3, uParam4, iParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0xB93D32722647751E(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x70D2FE87735B5F6D(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_152(var uParam0)
{
	struct<13> Var0;
	struct<97> Var1;
	struct<6> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	
	Var1.f_19.f_1 = 4;
	iVar6 = -1;
	iVar10 = 0;
	Var0 = { func_56(unk_0xD4E735F4B6A956AC()) };
	switch ((*uParam0)[iVar10])
	{
		case 0:
			Global_1835392.f_2775[iVar10] = -1;
			Global_1835392.f_2704[iVar10] = 0;
			Global_1835013.f_374 = -1;
			Global_1835389 = 0;
			if (func_153(uParam0->f_44))
			{
				if (!Global_1835389)
				{
					Global_1835389 = 1;
				}
			}
			else if (Global_1835389)
			{
				Global_1835389 = 0;
			}
			if (!Global_1835389)
			{
			}
			if (func_148(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_149(), 0, 0, 0))
			{
				func_147(&Var2, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x61209D54A5FA61B1(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar8 = 0;
						iVar3 = 0;
						if (func_149())
						{
							iVar8 = 0;
							while (iVar8 < Var2.f_3)
							{
								unk_0x80417E8346C8DA5B(iVar8, &Var1);
								if (Global_1835013.f_374 < 0)
								{
									if (func_110(&Var1, &Var0) || func_110(&Var1, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var1.f_96;
									}
								}
								if (iVar6 < 0)
								{
									if (unk_0x05EFB6A616B6FADE(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0xB3F340A373AB32FB(iVar8, 0))
										{
											iVar6 = iVar8;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0xEA904336324A0B10(iVar8, 0))
									{
										iVar6 = iVar8;
									}
								}
								func_146(&Var1);
								iVar8++;
							}
							if (iVar6 < 0)
							{
								iVar6 = Var2.f_3;
							}
						}
						iVar8 = 0;
						unk_0x80417E8346C8DA5B(0, &Var1);
						if (Var1.f_96 <= 1)
						{
							if (Global_1835392.f_2704[iVar10] < 12)
							{
								if (func_149() && iVar6 == 0)
								{
									func_145(uParam0, &(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), Var1.f_96);
									Global_1835392.f_2775[iVar10] = 0;
									Global_1835392.f_2704[iVar10]++;
								}
								if (func_149() && (func_110(&Var1, &Var0) || func_110(&Var1, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_110(&Var1, &Var0))
									{
										iVar6 = 0;
										Global_1835392.f_2775[iVar10] = 0;
									}
									MemCopy(&(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), {Var1.f_13}, 16);
									Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_32 = { Var1 };
									Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_59 = Var1.f_96;
									if (func_144(uParam0->f_44))
									{
										iVar5 = unk_0xB3F340A373AB32FB(0, Global_1835392.f_2709);
										if (iVar5 == 1)
										{
											Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_58 = 0;
										}
									}
									if (func_159(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_74 = 1;
									iVar3 = 0;
									while (iVar3 < Global_1835392.f_2708)
									{
										if (unk_0x05EFB6A616B6FADE(Global_1835392.f_2769, Global_1835392.f_2710[iVar3]))
										{
											Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_67[iVar3] = unk_0xB3F340A373AB32FB(0, Global_1835392.f_2710[iVar3]);
										}
										else
										{
											Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_60[iVar3] = unk_0xEA904336324A0B10(0, Global_1835392.f_2710[iVar3]);
										}
										iVar3++;
									}
									Global_1835392.f_2704[iVar10]++;
								}
								bVar9 = true;
							}
						}
						if (!bVar9)
						{
							Global_1835392.f_2704[iVar10]++;
						}
						if (!func_149())
						{
							iVar6 = Var2.f_5;
						}
						if (iVar6 > 6)
						{
							iVar7 = (iVar6 - 6);
						}
						else if (bVar9)
						{
							iVar7 = 1;
						}
						else
						{
							iVar7 = 0;
						}
						iVar8 = iVar7;
						func_146(&Var1);
						iVar8 = iVar7;
						while (iVar8 <= (Var2.f_3 - 1))
						{
							unk_0x80417E8346C8DA5B(iVar8, &Var1);
							if (Global_1835392.f_2704[iVar10] < 12 && Var1.f_96 > 1)
							{
								if (func_149() && iVar6 == iVar8)
								{
									if (!func_110(&(Global_1835392[iVar10 /*901*/][0 /*75*/].f_32), &Var1))
									{
										func_145(uParam0, &(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), Var1.f_96);
										Global_1835392.f_2775[iVar10] = Global_1835392.f_2704[iVar10];
										Global_1835392.f_2704[iVar10]++;
									}
								}
								if (func_149() && (func_110(&Var1, &Var0) || func_110(&Var1, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[iVar10] < 12)
								{
									if (func_111(Var1) && !func_110(&(Global_1835392[iVar10 /*901*/][0 /*75*/].f_32), &Var1))
									{
										if (func_110(&Var1, &Var0))
										{
											if (Global_1835392.f_2775[iVar10] < 0)
											{
												Global_1835392.f_2775[iVar10] = Global_1835392.f_2704[iVar10];
											}
										}
										MemCopy(&(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), {Var1.f_13}, 16);
										Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_32 = { Var1 };
										Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_59 = Var1.f_96;
										Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_74 = 1;
										if (func_144(uParam0->f_44))
										{
											iVar5 = unk_0xB3F340A373AB32FB(iVar8, Global_1835392.f_2709);
											if (iVar5 == 1)
											{
												Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_58 = 0;
											}
										}
										if (func_159(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar3 = 0;
										iVar3 = 0;
										while (iVar3 < Global_1835392.f_2708)
										{
											if (unk_0x05EFB6A616B6FADE(Global_1835392.f_2769, Global_1835392.f_2710[iVar3]))
											{
												Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_67[iVar3] = unk_0xB3F340A373AB32FB(iVar8, Global_1835392.f_2710[iVar3]);
											}
											else
											{
												Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_60[iVar3] = unk_0xEA904336324A0B10(iVar8, Global_1835392.f_2710[iVar3]);
											}
											iVar3++;
										}
										Global_1835392.f_2704[iVar10]++;
									}
								}
							}
							func_146(&Var1);
							iVar8++;
						}
						unk_0x27BFAFBB668CCC49();
						func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar9)
						{
							if (Global_1835392.f_2775[iVar10] == -1 && func_149())
							{
								if (Global_1835392.f_2704[iVar10] >= 1)
								{
									func_145(uParam0, &(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), Global_1835392[iVar10 /*901*/][(Global_1835392.f_2704[iVar10] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_145(uParam0, &(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), 1);
								}
								Global_1835392.f_2775[iVar10] = Global_1835392.f_2704[iVar10];
								Global_1835392.f_2704[iVar10]++;
							}
							(*uParam0)[iVar10] = 2;
						}
						else
						{
							(*uParam0)[iVar10] = 1;
						}
					}
					else
					{
						if (!bVar9)
						{
							Global_1835392.f_2704[iVar10]++;
						}
						unk_0x27BFAFBB668CCC49();
						func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2775[iVar10] = -1;
						(*uParam0)[iVar10] = 1;
					}
				}
				else
				{
					func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2775[iVar10] = -1;
					(*uParam0)[iVar10] = 1;
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2832), iVar10);
				}
			}
			break;
		
		case 1:
			if (Global_1835392.f_2775[iVar10] == -1)
			{
				iVar12 = 11;
			}
			else
			{
				iVar12 = 1;
			}
			if (func_138(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar12))
			{
				func_147(&Var2, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x61209D54A5FA61B1(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar3 = 0;
						while (iVar3 < Var2.f_3)
						{
							unk_0x80417E8346C8DA5B(iVar3, &Var1);
							if (func_149() && (func_110(&Var1, &Var0) || func_110(&Var1, &(Global_1835013.f_361))))
							{
							}
							else
							{
								bVar11 = false;
								if (Global_1835392[iVar10 /*901*/][0 /*75*/].f_59 > 1 || Global_1835392[iVar10 /*901*/][0 /*75*/].f_59 <= 0)
								{
									bVar11 = true;
								}
								if (Global_1835392.f_2704[iVar10] < 12 || bVar11)
								{
									if (iVar3 == 0 || bVar11)
									{
										MemCopy(&(Global_1835392[iVar10 /*901*/][0 /*75*/]), {Var1.f_13}, 16);
										Global_1835392[iVar10 /*901*/][0 /*75*/].f_32 = { Var1 };
										Global_1835392[iVar10 /*901*/][0 /*75*/].f_59 = Var1.f_96;
										if (func_144(uParam0->f_44))
										{
											iVar5 = unk_0xB3F340A373AB32FB(0, Global_1835392.f_2709);
											if (iVar5 == 1)
											{
												Global_1835392[iVar10 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar10 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_159(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar10 /*901*/][0 /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835392[iVar10 /*901*/][0 /*75*/].f_74 = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_1835392.f_2708)
										{
											if (unk_0x05EFB6A616B6FADE(Global_1835392.f_2769, Global_1835392.f_2710[iVar4]))
											{
												Global_1835392[iVar10 /*901*/][iVar3 /*75*/].f_67[iVar4] = unk_0xB3F340A373AB32FB(iVar3, Global_1835392.f_2710[iVar4]);
											}
											else
											{
												Global_1835392[iVar10 /*901*/][iVar3 /*75*/].f_60[iVar4] = unk_0xEA904336324A0B10(iVar3, Global_1835392.f_2710[iVar4]);
											}
											iVar4++;
										}
										if (Global_1835392.f_2704[iVar10] == 0)
										{
											if (bVar11)
											{
											}
											else
											{
												Global_1835392.f_2704[iVar10]++;
											}
										}
										else if (Global_1835392.f_2704[iVar10] == 1 && Global_1835392.f_2775[iVar10] == -1)
										{
											Global_1835392.f_2704[iVar10]++;
										}
									}
									else if (Global_1835392.f_2704[iVar10] < 12)
									{
										MemCopy(&(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), {Var1.f_13}, 16);
										Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_32 = { Var1 };
										if (func_144(uParam0->f_44))
										{
											iVar5 = unk_0xB3F340A373AB32FB(iVar3, Global_1835392.f_2709);
											if (iVar5 == 1)
											{
												Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_58 = 0;
											}
										}
										if (func_159(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_59 = Var1.f_96;
										Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_74 = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_1835392.f_2708)
										{
											if (unk_0x05EFB6A616B6FADE(Global_1835392.f_2769, Global_1835392.f_2710[iVar4]))
											{
												Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_67[iVar4] = unk_0xB3F340A373AB32FB(iVar3, Global_1835392.f_2710[iVar4]);
											}
											else
											{
												Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_60[iVar4] = unk_0xEA904336324A0B10(iVar3, Global_1835392.f_2710[iVar4]);
											}
											iVar4++;
										}
										if (iVar3 != 0)
										{
											Global_1835392.f_2704[iVar10]++;
										}
									}
								}
							}
							func_146(&Var1);
							iVar3++;
						}
					}
					unk_0x27BFAFBB668CCC49();
					func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar10] = 2;
				}
				else
				{
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2832), iVar10);
					func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2704[iVar10] = 0;
					(*uParam0)[iVar10] = 2;
					Global_1835392.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_1835392.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1835392.f_2775[iVar10] == -1 && func_149())
			{
				if (Global_1835392.f_2704[iVar10] >= 1)
				{
					func_145(uParam0, &(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), Global_1835392[iVar10 /*901*/][(Global_1835392.f_2704[iVar10] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_145(uParam0, &(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), 1);
				}
				Global_1835392.f_2775[iVar10] = Global_1835392.f_2704[iVar10];
				Global_1835392.f_2704[iVar10]++;
			}
			break;
		
		case 2:
			func_137(iVar10, Global_1835013.f_374);
			(*uParam0)[iVar10] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_153(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65)
{
	int iVar0;
	
	if (Global_1835388)
	{
		if (Global_1835013.f_5 != 0)
		{
			if (Global_1835013.f_5 == Param0)
			{
				if (Global_1835013.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!unk_0x3CAC2741CC1A631F(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !unk_0x3CAC2741CC1A631F(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
						{
							return 0;
						}
						iVar0++;
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_154(var uParam0)
{
	int iVar0;
	
	if (unk_0xE238AA6539810EEE(Global_1835392.f_2826))
	{
		iVar0 = unk_0xDF68ACCB73A36F1E(Global_1835392.f_2826);
		if (iVar0 < 300000)
		{
			unk_0x2BCFB39E86340DAA(&(uParam0->f_42), 5);
		}
		else
		{
			unk_0xFA57C719261AA55D(&(uParam0->f_42), 5);
			func_122(Global_1835392.f_2826, -1);
		}
	}
}

void func_155(int iParam0)
{
	if (unk_0x0FA486DE15EB3004(iParam0))
	{
		unk_0xE9F9BA9108F437C7(iParam0, 255, 255, 255, 0, 0);
	}
}

void func_156(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char* sVar0;
	struct<2> Var1;
	struct<16> Var2;
	bool bVar3;
	struct<13> Var4;
	int iVar5;
	struct<13> Var6;
	int iVar7;
	
	sVar0 = "";
	if (unk_0x05EFB6A616B6FADE(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (unk_0x05EFB6A616B6FADE(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (unk_0x05EFB6A616B6FADE(iParam2, 6))
	{
		*iParam1++;
		if (unk_0x18F86E07E41D913F() && unk_0xD1832FEBE50B1AB1())
		{
			if (unk_0x7DD04831D0FC44CA() && !unk_0x804C0CBA285C7A35(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var4 = { func_56(unk_0xD4E735F4B6A956AC()) };
				if (unk_0xE0B3F7A8017F6425(&Var4))
				{
					unk_0xE087FDE0E2FA8ADF(&Var1, 35, &Var4);
					if (!unk_0x429D45A6C6520026(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var2 = { Var1.f_1 };
						bVar3 = true;
					}
					else
					{
						sVar0 = "SCLB_CREW";
					}
				}
				else
				{
					sVar0 = "SCLB_CREW";
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW";
		}
	}
	unk_0x31A9E530D137684F(iParam0, "SET_SLOT");
	unk_0x380580A1A1667F69(*iParam1);
	unk_0x380580A1A1667F69(iParam2);
	if (bVar3)
	{
		unk_0x390B339C943A8A54(sVar0);
		unk_0x42360C300250E797(&Var2);
		unk_0xD481829E3E36543B();
	}
	else
	{
		unk_0x390B339C943A8A54(sVar0);
		unk_0xD481829E3E36543B();
	}
	unk_0x271C1332F482646C();
	*iParam1++;
	if (bParam4)
	{
		iVar5 = 0;
		unk_0x2BCFB39E86340DAA(&iVar5, 7);
		unk_0x31A9E530D137684F(iParam0, "SET_SLOT");
		unk_0x380580A1A1667F69(*iParam1);
		unk_0x380580A1A1667F69(iVar5);
		if (!unk_0x18F86E07E41D913F())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!unk_0x0A68AE586CCE49F6())
		{
			sVar0 = "SCLB_NO_ROS";
		}
		else if (Global_1835392.f_2832 != 0)
		{
			sVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			sVar0 = "HUD_PERM";
		}
		unk_0x390B339C943A8A54(sVar0);
		unk_0xC4A386982AF76F10();
		unk_0x271C1332F482646C();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (unk_0x05EFB6A616B6FADE(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (unk_0x05EFB6A616B6FADE(iParam2, 5))
		{
			if (unk_0x3B1559F29706DE5C() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (unk_0x05EFB6A616B6FADE(iParam2, 6))
		{
			if (unk_0xD711DD98E3A47F79())
			{
				if (unk_0xABC298FC92D5899A())
				{
					if (unk_0x18F86E07E41D913F() && unk_0xD1832FEBE50B1AB1())
					{
						if (unk_0x7DD04831D0FC44CA() && !unk_0x804C0CBA285C7A35(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var6 = { func_56(unk_0xD4E735F4B6A956AC()) };
							if (unk_0xE0B3F7A8017F6425(&Var6))
							{
								unk_0xE087FDE0E2FA8ADF(&Var1, 35, &Var6);
								if (!unk_0x429D45A6C6520026(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb";
									Var2 = { Var1.f_1 };
									bVar3 = true;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc";
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa";
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa";
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe";
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd";
			}
		}
		iVar7 = 0;
		unk_0x2BCFB39E86340DAA(&iVar7, 7);
		unk_0x31A9E530D137684F(iParam0, "SET_SLOT");
		unk_0x380580A1A1667F69(*iParam1);
		unk_0x380580A1A1667F69(iVar7);
		if (bVar3)
		{
			unk_0x390B339C943A8A54(sVar0);
			unk_0x42360C300250E797(&Var2);
			unk_0xC4A386982AF76F10();
		}
		else
		{
			unk_0x390B339C943A8A54(sVar0);
			unk_0xC4A386982AF76F10();
		}
		unk_0x271C1332F482646C();
		*iParam1++;
	}
}

void func_157(int iParam0, char* sParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	unk_0x31A9E530D137684F(iParam0, "SET_TITLE");
	unk_0x390B339C943A8A54(sParam1);
	unk_0xD481829E3E36543B();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		unk_0x390B339C943A8A54(uParam2[iVar0 /*6*/]);
		unk_0xD481829E3E36543B();
		iVar0++;
	}
	unk_0x271C1332F482646C();
}

void func_158(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	unk_0x31A9E530D137684F(iParam0, "SET_MULTIPLAYER_TITLE");
	unk_0x390B339C943A8A54(sParam1);
	if (!unk_0x429D45A6C6520026(sParam2))
	{
		unk_0x4FDA9E6EF359F8A9(sParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!unk_0x429D45A6C6520026(sParam3))
			{
				unk_0x42360C300250E797(sParam3);
			}
		}
		else if (!unk_0x429D45A6C6520026(sParam3))
		{
			unk_0x4FDA9E6EF359F8A9(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!unk_0x429D45A6C6520026(sParam3))
			{
				unk_0x42360C300250E797(sParam3);
			}
		}
		else if (!unk_0x429D45A6C6520026(sParam3))
		{
			unk_0x4FDA9E6EF359F8A9(sParam3);
		}
		unk_0xCDA87E1DA52C8C9D(iParam5);
	}
	unk_0xD481829E3E36543B();
	unk_0x271C1332F482646C();
}

int func_159(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_160(int iParam0, int iParam1)
{
	unk_0x31A9E530D137684F(iParam0, "SET_DISPLAY_TYPE");
	unk_0x380580A1A1667F69(iParam1);
	unk_0x271C1332F482646C();
}

int func_161()
{
	return unk_0xB00CD6895BDB01A0("SC_LEADERBOARD");
}

bool func_162()
{
	return func_163(unk_0xD4E735F4B6A956AC());
}

int func_163(int iParam0)
{
	switch (func_164(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 40:
		case 35:
		case 38:
		case 41:
			return 0;
		
		default:
	}
	return 1;
}

int func_164(int iParam0)
{
	return Global_1589747[iParam0 /*790*/].f_196;
}

void func_165(int iParam0)
{
	Global_1315696 = iParam0;
}

void func_166(int iParam0)
{
	Global_1369750.f_1079 = iParam0;
}

void func_167(bool bParam0)
{
	if (bParam0)
	{
		func_169();
	}
	func_168(4, -1);
	func_168(6, -1);
	func_168(7, -1);
	func_168(3, -1);
	func_168(1, -1);
	func_168(2, -1);
	func_168(11, -1);
	func_168(13, -1);
	func_168(14, -1);
	func_168(16, -1);
}

void func_168(int iParam0, int iParam1)
{
	unk_0x2BCFB39E86340DAA(&(Global_1368245.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1368245.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_169()
{
	Global_2524719.f_4519 = 0;
}

void func_170(var uParam0, bool bParam1, bool bParam2)
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

int func_171(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_174(uParam0);
	func_173(uParam0);
	if (unk_0x3CAC2741CC1A631F(&(uParam0->f_550), "SPR_RESULT") || (unk_0x3CAC2741CC1A631F(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		unk_0x8000C77B5F336760("MPHud", false);
	}
	if (uParam0->f_1 == 0)
	{
		unk_0x8000C77B5F336760("CommonMenu", false);
		unk_0x8000C77B5F336760("MPLeaderboard", false);
		unk_0x8000C77B5F336760("MPHud", false);
		uParam0->f_1 = unk_0xB00CD6895BDB01A0("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0x0116B05B49B8129C("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0x0FA486DE15EB3004(uParam0->f_1) || !unk_0x87DF091EDFE6D083("CommonMenu")) || !unk_0x87DF091EDFE6D083("MPLeaderboard")) || !unk_0x87DF091EDFE6D083("MPHud"))
		{
			wait(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!unk_0x0FA486DE15EB3004(uParam0->f_4))
			{
				wait(0);
			}
		}
	}
	else
	{
		if (((!unk_0x0FA486DE15EB3004(uParam0->f_1) || !unk_0x87DF091EDFE6D083("CommonMenu")) || !unk_0x87DF091EDFE6D083("MPLeaderboard")) || !unk_0x87DF091EDFE6D083("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!unk_0x0FA486DE15EB3004(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_172(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_46(uParam0, 1);
		}
		else
		{
			func_46(uParam0, 0);
		}
	}
	Global_71466 = 1;
	return 1;
}

void func_172(var uParam0)
{
	unk_0x31A9E530D137684F(uParam0->f_4, "CLEAR_ALL");
	unk_0x271C1332F482646C();
	if (unk_0x47C01C0E6F4C1D06())
	{
		unk_0x31A9E530D137684F(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x233A5B4A35140C6B(true);
		unk_0x271C1332F482646C();
	}
	unk_0x31A9E530D137684F(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x380580A1A1667F69(2);
	func_9(unk_0x7391BCD755BD8577(2, 188, true));
	func_14("ES_HELP_TU");
	unk_0x271C1332F482646C();
	unk_0x31A9E530D137684F(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x380580A1A1667F69(1);
	func_9(unk_0x7391BCD755BD8577(2, 187, true));
	func_14("ES_HELP_TD");
	unk_0x271C1332F482646C();
	unk_0x31A9E530D137684F(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x380580A1A1667F69(0);
	func_9(unk_0x7391BCD755BD8577(2, 202, true));
	func_14("ES_HELP_AB");
	unk_0x271C1332F482646C();
	unk_0x31A9E530D137684F(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x271C1332F482646C();
}

void func_173(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0x38DFCC31D902E792(0);
	unk_0xFD5A6B90A46ACED0(1f, func_60(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			unk_0xC42A779360572EA7("STRING");
			unk_0xC327C023FDA37F2E(&(uParam0->f_13));
			fVar0 = unk_0x4E0DD18900B7ACAE(1);
		}
		else
		{
			unk_0xC42A779360572EA7(&(uParam0->f_13));
			fVar0 = unk_0x4E0DD18900B7ACAE(1);
		}
	}
	else
	{
		unk_0xC42A779360572EA7("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					unk_0xCDA87E1DA52C8C9D(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0x4FDA9E6EF359F8A9(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0xC327C023FDA37F2E(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0x4E0DD18900B7ACAE(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_174(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

void func_175(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, var uParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_251(uParam0, 4))
	{
		return;
	}
	else
	{
		func_178(&(uParam0->f_26));
		func_177(&(uParam0->f_26), "BJ_SC_PASS", sParam1, 0);
		func_211(uParam0, 4, 1);
	}
	*uParam5 = 0;
	if (iParam3 > 1)
	{
		if (iParam2 == iParam3)
		{
			iVar0 = ceil((100f * fParam6));
		}
	}
	iVar3 = ceil((IntToFloat(iParam2 * 30) * fParam6));
	iVar1 = ceil((fParam6 * 50f));
	iVar2 = ceil(((fParam6 * 1.5f) * to_float(iParam4)));
	*uParam5 = (((iVar1 + iVar2) + iVar0) + iVar3);
	if (iParam3 > 1)
	{
		if (iVar0 > 0)
		{
			func_176(&(uParam0->f_26), 3, "BJ_SC_ALLG_RWD", "", iVar0, 0, 2, 0);
		}
		else
		{
			func_176(&(uParam0->f_26), 3, "BJ_SC_ALLG_RWD", "", 0, 0, 1, 0);
		}
		func_176(&(uParam0->f_26), 2, "BJ_SC_GATES", "", iParam2, iParam3, 0, 0);
	}
	func_176(&(uParam0->f_26), 11, "BJ_SC_LAND_ACC", "", iParam4, 0, 0, 0);
	if (iParam3 > 1)
	{
		func_176(&(uParam0->f_26), 3, "BJ_SC_GATE_RWD", "", iVar3, 0, 0, 0);
	}
	func_176(&(uParam0->f_26), 3, "BJ_SC_ACC_RWD", "", round(((50f + (1.5f * IntToFloat(iParam4))) * fParam6)), 0, 0, 0);
	func_176(&(uParam0->f_26), 3, "BJ_SC_TOT_RWD", "", *uParam5, 0, 0, 0);
}

void func_176(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = iParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_177(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_178(var uParam0)
{
	func_174(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

char* func_179(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BJ_JUMP_01";
		
		case 1:
			return "BJ_JUMP_02";
		
		case 2:
			return "BJ_JUMP_03";
		
		case 3:
			return "BJ_JUMP_04";
		
		case 4:
			return "BJ_JUMP_05";
		
		case 5:
			return "BJ_JUMP_06";
		
		case 6:
			return "BJ_JUMP_07";
		
		case 7:
			return "BJ_JUMP_08";
		
		case 8:
			return "BJ_JUMP_09";
		
		case 9:
			return "BJ_JUMP_10";
		
		case 10:
			return "BJ_JUMP_11";
		
		case 11:
			return "BJ_JUMP_12";
		
		case 12:
			return "BJ_JUMP_13";
		
		default:
	}
	return "";
}

int func_180(int iParam0, int iParam1, float fParam2, int iParam3)
{
	if (Global_1835013.f_1 && !Global_1835013.f_2)
	{
		func_189(iParam0, iParam1, fParam2, iParam3);
		Global_1835013.f_2 = 1;
	}
	if (func_181(&uLocal_105))
	{
		Global_1835388 = 1;
		return 1;
	}
	return 0;
}

int func_181(var uParam0)
{
	struct<98> Var0;
	struct<4> Var1;
	struct<37> Var2;
	struct<13> Var3;
	int iVar4;
	
	Var0.f_19.f_1 = 4;
	Var2.f_3 = 32;
	Var2.f_36 = 32;
	if (func_159(uParam0->f_44))
	{
		Var3 = { Global_1835013.f_361 };
	}
	else
	{
		Var3 = { func_56(unk_0xD4E735F4B6A956AC()) };
	}
	switch (Global_1835013)
	{
		case 0:
			if (func_188(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var3))
			{
				func_147(&Var1, &(uParam0->f_44));
				Global_1835013.f_142 = uParam0->f_44;
				Global_1835013.f_142.f_1 = unk_0x202B9213EA09E38A(uParam0->f_44, 0);
				iVar4 = 0;
				while (iVar4 < Global_1835013.f_142.f_1)
				{
					if (!func_187(uParam0->f_44, iVar4))
					{
						if (func_186(uParam0->f_44, 4, iVar4))
						{
							unk_0x2BCFB39E86340DAA(&(Global_1835013.f_142.f_2), iVar4);
						}
						else
						{
							unk_0xFA57C719261AA55D(&(Global_1835013.f_142.f_2), iVar4);
						}
					}
					iVar4++;
				}
				if (uParam0->f_5 && unk_0x61209D54A5FA61B1(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						unk_0x80417E8346C8DA5B(0, &Var0);
						if (Var0.f_97 != Global_1835013.f_142.f_1)
						{
						}
						if (!func_111(Var0))
						{
							Global_1835013.f_4 = 1;
						}
						else
						{
							iVar4 = 0;
							while (iVar4 < Global_1835013.f_142.f_1)
							{
								if (!func_187(uParam0->f_44, iVar4))
								{
									if (func_186(uParam0->f_44, 4, iVar4))
									{
										Global_1835013.f_73.f_36[iVar4] = unk_0xB3F340A373AB32FB(0, iVar4);
										if (Global_1835013.f_73.f_36[iVar4] == -1)
										{
											if (iVar4 > Var0.f_97)
											{
												Global_1835013.f_73.f_36[iVar4] = 0;
											}
										}
									}
									else
									{
										Global_1835013.f_73.f_3[iVar4] = unk_0xEA904336324A0B10(0, iVar4);
										if (Global_1835013.f_73.f_3[iVar4] == -1f)
										{
											if (iVar4 > Var0.f_97)
											{
												Global_1835013.f_73.f_3[iVar4] = 0f;
											}
										}
									}
								}
								iVar4++;
							}
						}
					}
					else
					{
						Global_1835013.f_4 = 1;
					}
					unk_0x27BFAFBB668CCC49();
				}
				else
				{
					Global_1835013.f_4 = 1;
				}
				Global_1835013 = 1;
				func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 1:
			Global_1835013.f_1 = 1;
			if (Global_1835013.f_2)
			{
				func_185();
				if (Global_1835013.f_4)
				{
					if (func_184(uParam0->f_44))
					{
						Global_1835013 = 3;
					}
					else
					{
						Global_1835013 = 2;
					}
				}
				else
				{
					Global_1835013 = 2;
				}
			}
			break;
		
		case 2:
			unk_0xA9AAC60BD7D133A3(&(Global_1835013.f_73), &(Global_1835013.f_142), &(Global_1835013.f_211));
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 3:
			Global_1835013.f_211 = { Global_1835013.f_142 };
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 4:
			if (unk_0x4C9BACA8D249CB13() && func_183())
			{
				if (func_182())
				{
					Global_1835013 = 99;
				}
				else
				{
					Global_1835013 = 999;
					return 1;
				}
			}
			else
			{
				Global_1835013 = 999;
				return 1;
			}
			break;
		
		case 99:
			if (func_184(uParam0->f_44))
			{
				Global_1835013.f_280 = { Global_1835013.f_142 };
			}
			else
			{
				Var2 = Global_1835013.f_142;
				Var2.f_1 = Global_1835013.f_142.f_1;
				Var2.f_2 = Global_1835013.f_142.f_2;
				unk_0xA9AAC60BD7D133A3(&Var2, &(Global_1835013.f_142), &(Global_1835013.f_280));
			}
			Global_1835013 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_148(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var3, 1, 1, Global_1835013.f_280.f_36[0], Global_1835013.f_280.f_3[0]))
			{
				func_147(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x61209D54A5FA61B1(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						unk_0x80417E8346C8DA5B(0, &Var0);
						if (unk_0x3CAC2741CC1A631F(&(Var0.f_13), ""))
						{
							Global_968147.f_1 = -1;
						}
						else
						{
							Global_968147.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_968147.f_1 = -1;
					}
					unk_0x27BFAFBB668CCC49();
				}
				else
				{
					Global_968147.f_1 = -1;
				}
				Global_1835013 = 999;
				func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

bool func_182()
{
	return unk_0x05EFB6A616B6FADE(Global_959568.f_8, 1);
}

var func_183()
{
	return Global_2456479.f_3;
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return 1;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return 1;
	}
	return 0;
}

void func_185()
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

int func_186(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == 190)
	{
		if (iParam2 == 0)
		{
			return 0;
		}
	}
	if (iParam0 == 203)
	{
		if (iParam2 == 3 || iParam2 == 6)
		{
			return 0;
		}
	}
	if (iParam0 == 912)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 791)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	if (iParam0 == 780)
	{
		if (iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 777)
	{
		if (iParam2 == 3 || iParam2 == 7)
		{
			return 0;
		}
	}
	if (iParam0 == 1200)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	iVar0 = unk_0xD596EDBCF771440E(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_187(int iParam0, int iParam1)
{
	if (unk_0x009FA85D2AA88858(iParam0, 4, iParam1) == 156)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 912:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 780:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 1200:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_188(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_141() && !func_140())
			{
				func_139(*uParam2);
				if (unk_0x0E243387CC6BAAED(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0xB93D32722647751E(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x70D2FE87735B5F6D(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_189(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<6> Var0[1];
	struct<8> Var1[1];
	
	StringCopy(&(Var1[0 /*8*/]), "Location", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_01", 24);
			break;
		
		case 1:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_02", 24);
			break;
		
		case 2:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_03", 24);
			break;
		
		case 3:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_04", 24);
			break;
		
		case 4:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_05", 24);
			break;
		
		case 5:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_06", 24);
			break;
		
		case 6:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_07", 24);
			break;
		
		case 7:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_08", 24);
			break;
		
		case 8:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_09", 24);
			break;
		
		case 9:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_10", 24);
			break;
		
		case 10:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_11", 24);
			break;
		
		case 11:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_12", 24);
			break;
		
		case 12:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_13", 24);
			break;
	}
	if (func_191(274, &Var0, &Var1, 1, -1, 1, 0))
	{
		func_190(274, 131, iParam3, 0f, 0);
		if (iParam1 == 100)
		{
			func_190(274, 98, 1, 0f, 0);
		}
		else
		{
			func_190(274, 98, 0, 0f, 0);
		}
		func_190(274, 109, 1, 0f, 0);
		func_190(274, 8, iParam3, 0f, 0);
		func_190(274, 93, 0, fParam2, 0);
	}
}

void func_190(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		unk_0x13BE64B38F002613(iParam1, iParam2, fParam3);
	}
	if (!Global_1835013.f_3)
	{
		Global_1835013.f_142 = iParam0;
		Global_1835013.f_142.f_1 = unk_0x202B9213EA09E38A(Global_1835013.f_142, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_1835013.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_186(iParam0, 4, iVar1))
				{
					unk_0x2BCFB39E86340DAA(&(Global_1835013.f_142.f_2), iVar1);
				}
				else
				{
					unk_0xFA57C719261AA55D(&(Global_1835013.f_142.f_2), iVar1);
				}
			}
			else
			{
				unk_0xFA57C719261AA55D(&(Global_1835013.f_142.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1835013.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == unk_0x009FA85D2AA88858(iParam0, 4, iVar1))
		{
			iVar0 = iVar1;
			iVar1 = 32;
		}
		iVar1++;
	}
	Global_1835013.f_142.f_36[iVar0] = iParam2;
	Global_1835013.f_142.f_3[iVar0] = fParam3;
	if (iParam2 != 0)
	{
		unk_0x2BCFB39E86340DAA(&(Global_1835013.f_142.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		unk_0xFA57C719261AA55D(&(Global_1835013.f_142.f_2), iVar0);
	}
}

int func_191(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
				Var2 = { func_56(unk_0xD4E735F4B6A956AC()) };
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

void func_192(int iParam0)
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&vVar0, "BJUMP_01", 24);
			break;
		
		case 1:
			StringCopy(&vVar0, "BJUMP_02", 24);
			break;
		
		case 2:
			StringCopy(&vVar0, "BJUMP_03", 24);
			break;
		
		case 3:
			StringCopy(&vVar0, "BJUMP_04", 24);
			break;
		
		case 4:
			StringCopy(&vVar0, "BJUMP_05", 24);
			break;
		
		case 5:
			StringCopy(&vVar0, "BJUMP_06", 24);
			break;
		
		case 6:
			StringCopy(&vVar0, "BJUMP_07", 24);
			break;
		
		case 7:
			StringCopy(&vVar0, "BJUMP_08", 24);
			break;
		
		case 8:
			StringCopy(&vVar0, "BJUMP_09", 24);
			break;
		
		case 9:
			StringCopy(&vVar0, "BJUMP_10", 24);
			break;
		
		case 10:
			StringCopy(&vVar0, "BJUMP_11", 24);
			break;
		
		case 11:
			StringCopy(&vVar0, "BJUMP_12", 24);
			break;
		
		case 12:
			StringCopy(&vVar0, "BJUMP_13", 24);
			break;
	}
	func_193(&uLocal_105, 85, &vVar0, func_179(iParam0), iParam0, -1, 0, 0);
}

void func_193(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<8> Var0;
	struct<8> Var1;
	int iVar2;
	struct<6> Var3;
	
	if (!unk_0x429D45A6C6520026(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_1835392.f_2769 = 0;
	Global_1835392.f_2770 = 0;
	Global_1835392.f_2768 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_202())
				{
					uParam0->f_44 = 826;
				}
				else
				{
					uParam0->f_44 = 815;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_202())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!unk_0x429D45A6C6520026(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0x429D45A6C6520026(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835392.f_2780.f_26 = -1;
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_202())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 3;
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_202())
				{
					uParam0->f_44 = 827;
				}
				else
				{
					uParam0->f_44 = 824;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_202())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!unk_0x429D45A6C6520026(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!unk_0x429D45A6C6520026(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_202())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 5;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 6;
					Global_1835392.f_2708 = 2;
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 5;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					Global_1835392.f_2709 = 6;
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_202())
				{
					uParam0->f_44 = 828;
				}
				else
				{
					uParam0->f_44 = 825;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 2;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					unk_0xDDF5DC5A133E8D57(unk_0xD4E735F4B6A956AC(), &Var3);
					MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), {Var3}, 8);
					Global_1835392.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_202())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[2 /*16*/].f_8 = { Var1 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!unk_0x429D45A6C6520026(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!unk_0x429D45A6C6520026(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_202())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					Global_1835392.f_2709 = 4;
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_202())
				{
					uParam0->f_44 = 928;
				}
				else
				{
					uParam0->f_44 = 849;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_202())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!unk_0x429D45A6C6520026(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!unk_0x429D45A6C6520026(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_202())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 0;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 0;
					Global_1835392.f_2708 = 1;
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 2;
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_202())
				{
					uParam0->f_44 = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_44 = 975;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_202())
				{
					Global_1835392.f_2780.f_26 = iParam5;
					if (!unk_0x429D45A6C6520026(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0x429D45A6C6520026(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835392.f_2780.f_26 = -1;
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_202())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 3;
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			break;
		
		case 1:
			if (iParam4 == 0)
			{
				uParam0->f_44 = 762;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!unk_0x429D45A6C6520026(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				unk_0xFA57C719261AA55D(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				unk_0xFA57C719261AA55D(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 1)
			{
				uParam0->f_44 = 822;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!unk_0x429D45A6C6520026(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				unk_0xFA57C719261AA55D(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				unk_0xFA57C719261AA55D(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_44 = 823;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!unk_0x429D45A6C6520026(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				unk_0xFA57C719261AA55D(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				unk_0xFA57C719261AA55D(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			break;
		
		case 11:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 7;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 94:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 7;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 92:
			uParam0->f_44 = 811;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), "CMSW", 64);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 0;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_MONEY", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 4;
			Global_1835392.f_2710[4] = 6;
			Global_1835392.f_2708 = 5;
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 6;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 6;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		
		case 15:
			uParam0->f_44 = 749;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_ARM", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 0;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0xFA57C719261AA55D(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 4;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 14:
			uParam0->f_44 = 190;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			if (iParam4 == -1)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_DARTS", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 7;
			Global_1835392.f_2710[2] = 5;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			unk_0xFA57C719261AA55D(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 12:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			if (unk_0x429D45A6C6520026(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_1835392.f_2780.f_9), iParam4 + 1, 64);
			}
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 9;
			Global_1835392.f_2710[2] = 7;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 2;
			Global_1835392.f_2708 = 5;
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		
		case 87:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 9;
			Global_1835392.f_2710[2] = 7;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 2;
			Global_1835392.f_2708 = 5;
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		
		case 13:
			uParam0->f_44 = 912;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEb", 32);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEc", 32);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_SMG", 64);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_ASSAULT", 64);
					break;
				
				case 3:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				
				case 4:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_LMG", 64);
					break;
				
				case 5:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_HEAVY", 64);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_ACC", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 2;
			Global_1835392.f_2710[2] = 1;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			unk_0xFA57C719261AA55D(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0xFA57C719261AA55D(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 4;
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 4;
			break;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
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
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_44 = 203;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_1835392.f_2780.f_9), {func_201(iParam1)}, 16);
			Global_1835392.f_2780.f_25 = 0;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 7;
			Global_1835392.f_2708 = 2;
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			Global_1835392.f_2780.f_28 = 4;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 8;
			break;
		
		case 69:
		case 71:
		case 70:
			uParam0->f_44 = 202;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			Global_1835392.f_2780.f_25 = 0;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 0;
			Global_1835392.f_2710[2] = 0;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 1;
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 2;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 0;
			Global_1835392.f_2780.f_29[3] = 0;
			break;
		
		case 80:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835392.f_2710[0] = 3;
			Global_1835392.f_2708 = 1;
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 1;
			break;
		
		case 3:
			uParam0->f_44 = 791;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!unk_0x429D45A6C6520026(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_44 = 1200;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!unk_0x429D45A6C6520026(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 1;
				Global_1835392.f_2710[2] = 4;
				Global_1835392.f_2710[3] = 5;
				Global_1835392.f_2710[4] = 6;
				Global_1835392.f_2708 = 3;
				unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				unk_0xFA57C719261AA55D(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				Global_1835392.f_2780.f_28 = 6;
				Global_1835392.f_2780.f_29[0] = 5;
				Global_1835392.f_2780.f_29[1] = 11;
				Global_1835392.f_2780.f_29[2] = 4;
				Global_1835392.f_2780.f_29[3] = 5;
				Global_1835392.f_2780.f_29[4] = 5;
			}
			else if (Global_4456448.f_61 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!unk_0x429D45A6C6520026(sParam3))
				{
					if (Global_4456448.f_2 == 5)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4456448.f_2 == 5)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 1;
				Global_1835392.f_2710[2] = 2;
				Global_1835392.f_2710[3] = 0;
				Global_1835392.f_2708 = 3;
				unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 2;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 5;
			}
			else
			{
				uParam0->f_44 = 780;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!unk_0x429D45A6C6520026(sParam3))
				{
					if (Global_4456448.f_2 == 5)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4456448.f_2 == 5)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_200(Global_4456448.f_152990) || func_197(Global_4456448.f_152990))
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 2;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2708 = 2;
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else if (func_196(Global_4456448.f_152990))
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 2;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2708 = 2;
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 2;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
				}
			}
			break;
		
		case 8:
			uParam0->f_44 = 795;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!unk_0x429D45A6C6520026(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2768), 1);
			Global_1835392.f_2754[1] = -1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 11;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 85:
			uParam0->f_44 = 274;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!unk_0x429D45A6C6520026(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_TOTCASH", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 3;
			Global_1835392.f_2708 = 2;
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			break;
		
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_44 = 965;
							break;
						
						case 9:
							uParam0->f_44 = 966;
							break;
						
						case 4:
							uParam0->f_44 = 967;
							break;
						
						case 8:
							uParam0->f_44 = 968;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!unk_0x429D45A6C6520026(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_44 = 969;
							break;
						
						case 2:
							uParam0->f_44 = 970;
							break;
						
						case 3:
							uParam0->f_44 = 973;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!unk_0x429D45A6C6520026(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					unk_0xFA57C719261AA55D(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 4;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				
				case 7:
					uParam0->f_44 = 971;
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!unk_0x429D45A6C6520026(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					unk_0xFA57C719261AA55D(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 4;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_44 = 972;
							break;
						
						case 5:
							uParam0->f_44 = 974;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!unk_0x429D45A6C6520026(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 2;
					Global_1835392.f_2710[3] = 1;
					Global_1835392.f_2708 = 4;
					unk_0xFA57C719261AA55D(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 12;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
			}
			break;
		
		case 83:
			uParam0->f_44 = 192;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!unk_0x429D45A6C6520026(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 4;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			unk_0xFA57C719261AA55D(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_29[0] = 17;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 82:
			uParam0->f_44 = 850;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!unk_0x429D45A6C6520026(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 4;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 2;
			Global_1835392.f_2708 = 4;
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_29[0] = 10;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 84:
			uParam0->f_44 = 820;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!unk_0x429D45A6C6520026(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 4;
			Global_1835392.f_2710[5] = 3;
			Global_1835392.f_2708 = 6;
			unk_0xFA57C719261AA55D(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0xFA57C719261AA55D(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 9;
			Global_1835392.f_2780.f_29[2] = 4;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			Global_1835392.f_2780.f_29[5] = 5;
			break;
		
		case 86:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!unk_0x429D45A6C6520026(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2708 = 1;
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 1;
			break;
		
		case 91:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835392.f_2780 = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
				Global_1835392.f_2710[0] = 3;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 1;
				Global_1835392.f_2710[3] = 0;
				Global_1835392.f_2709 = 6;
				Global_1835392.f_2708 = 2;
				unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				Global_1835392.f_2780.f_28 = 4;
				Global_1835392.f_2780.f_29[0] = 1;
				Global_1835392.f_2780.f_29[1] = 3;
			}
			else
			{
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
				Global_1835392.f_2710[0] = 3;
				Global_1835392.f_2710[1] = 2;
				Global_1835392.f_2710[2] = 4;
				Global_1835392.f_2710[3] = 1;
				Global_1835392.f_2709 = 4;
				Global_1835392.f_2708 = 3;
				unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 1;
				Global_1835392.f_2780.f_29[1] = 1;
				Global_1835392.f_2780.f_29[2] = 3;
			}
			Global_1835392.f_2779 = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 1:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 2:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 3:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 4:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 5:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 6:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 7:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 8:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
		
		case 888:
			uParam0->f_44 = 1201;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "ArenaMode", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 3;
			MemCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), {func_195(iParam4)}, 8);
			Global_1835392.f_2708 = 4;
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			switch (iParam4)
			{
				case 1:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_BUZZ", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_1835392.f_2780.f_29[3] = 9;
					break;
				
				case 2:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_CARN", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 3:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_FLAGW", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_FLAGS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 4:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_WRECK", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 5:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_BOMBB", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_POINTS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_GOALS", 24);
					break;
				
				case 6:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_GAMEM", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_CPOINTS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 7:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_MNSTR", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 8:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_HOTB", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_PASSES", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_1835392.f_2780.f_29[3] = 9;
					break;
				
				case 9:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_TAGT", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TAGS", 24);
					break;
			}
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2708 = 4;
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 889:
			uParam0->f_44 = 1202;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_CAREER", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_CARPT", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MATCHES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TITLE", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 4;
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2708 = 4;
			Global_1835392.f_2780.f_28 = 5;
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0xFA57C719261AA55D(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 4;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 21;
			break;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < Global_1835392.f_2708)
	{
		if (unk_0x05EFB6A616B6FADE(Global_1835392.f_2769, Global_1835392.f_2710[iVar2]))
		{
			unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2770), iVar2);
		}
		iVar2++;
	}
	Global_1835392.f_2826 = func_194(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

int func_194(struct<8> Param0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam1, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_159(iParam1))
	{
		if (bParam5)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam2, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam3, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam4, 64);
	return unk_0xFEB6EEC0545AF7AA(&cVar0);
}

struct<6> func_195(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "BuzzerBeater", 24);
			break;
		
		case 2:
			StringCopy(&Var0, "Carnage", 24);
			break;
		
		case 3:
			StringCopy(&Var0, "FlagWar", 24);
			break;
		
		case 4:
			StringCopy(&Var0, "WreckIt", 24);
			break;
		
		case 5:
			StringCopy(&Var0, "BombBall", 24);
			break;
		
		case 6:
			StringCopy(&Var0, "GamesMasters", 24);
			break;
		
		case 7:
			StringCopy(&Var0, "Monsters", 24);
			break;
		
		case 8:
			StringCopy(&Var0, "HotBomb", 24);
			break;
		
		case 9:
			StringCopy(&Var0, "TagTeam", 24);
			break;
		
		default:
			break;
	}
	return Var0;
}

bool func_196(int iParam0)
{
	return iParam0 == 74;
}

var func_197(int iParam0)
{
	return (func_199(iParam0) || func_198(iParam0));
}

bool func_198(int iParam0)
{
	return iParam0 == 44;
}

bool func_199(int iParam0)
{
	return iParam0 == 45;
}

bool func_200(int iParam0)
{
	return iParam0 == 12;
}

struct<6> func_201(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0", 24);
			break;
		
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1", 24);
			break;
		
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2", 24);
			break;
		
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3", 24);
			break;
		
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4", 24);
			break;
		
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5", 24);
			break;
		
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6", 24);
			break;
		
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7", 24);
			break;
		
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8", 24);
			break;
		
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9", 24);
			break;
		
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10", 24);
			break;
		
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11", 24);
			break;
		
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12", 24);
			break;
		
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13", 24);
			break;
		
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14", 24);
			break;
		
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15", 24);
			break;
		
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16", 24);
			break;
		
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17", 24);
			break;
		
		case 206:
			StringCopy(&Var0, "HUD_MG_RANGE18", 24);
			break;
		
		case 207:
			StringCopy(&Var0, "HUD_MG_RANGE19", 24);
			break;
		
		case 208:
			StringCopy(&Var0, "HUD_MG_RANGE20", 24);
			break;
		
		case 209:
			StringCopy(&Var0, "HUD_MG_RANGE21", 24);
			break;
	}
	return Var0;
}

int func_202()
{
	if ((((((((((Global_4456448.f_53220 == 1 || Global_4456448.f_53220 == 3) || Global_4456448.f_53220 == 5) || Global_4456448.f_53220 == 7) || Global_4456448.f_53220 == 19) || Global_4456448.f_53220 == 8) || Global_4456448.f_53220 == 9) || Global_4456448.f_53220 == 11) || Global_4456448.f_53220 == 13) || Global_4456448.f_53220 == 21) || Global_4456448.f_53220 == 23)
	{
		return 1;
	}
	return 0;
}

bool func_203()
{
	return unk_0x18F86E07E41D913F();
}

void func_204(var uParam0, bool bParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x0116B05B49B8129C("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_3[0] = iParam2;
	uParam0->f_3[1] = iParam4;
	uParam0->f_3[2] = iParam6;
	uParam0->f_3[3] = iParam8;
	uParam0->f_3[4] = 358;
	uParam0->f_3[5] = 358;
	uParam0->f_3[6] = 358;
	uParam0->f_3[7] = 358;
	uParam0->f_12[0] = func_205(iParam2 != 358, unk_0x7391BCD755BD8577(2, iParam2, true), "");
	uParam0->f_12[1] = func_205(iParam4 != 358, unk_0x7391BCD755BD8577(2, iParam4, true), "");
	uParam0->f_12[2] = func_205(iParam6 != 358, unk_0x7391BCD755BD8577(2, iParam6, true), "");
	uParam0->f_12[3] = func_205(iParam8 != 358, unk_0x7391BCD755BD8577(2, iParam8, true), "");
	uParam0->f_12[4] = 0;
	uParam0->f_12[5] = 0;
	uParam0->f_12[6] = 0;
	uParam0->f_12[7] = 0;
	uParam0->f_21[0] = sParam3;
	uParam0->f_21[1] = sParam5;
	uParam0->f_21[2] = iParam7;
	uParam0->f_21[3] = iParam9;
	if (bParam1)
	{
		uParam0->f_2 = 1;
	}
	else
	{
		uParam0->f_2 = 0;
	}
	if (unk_0x0FA486DE15EB3004(*uParam0))
	{
		func_21(&(uParam0->f_1), 1);
	}
}

char* func_205(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_206()
{
	func_207(unk_0xA19140A5C42D8715(), "GENERIC_CURSE_MED", 24);
}

void func_207(int iParam0, char* sParam1, int iParam2)
{
	unk_0xE85BD4A26C0DFACA(iParam0, sParam1, func_208(iParam2), 1);
}

int func_208(int iParam0)
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

int func_209()
{
	if (func_44(0))
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

void func_210(int iParam0, int iParam1)
{
	Global_93271.f_7 = iParam0;
	Global_93271.f_8 = iParam1;
}

void func_211(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0x2BCFB39E86340DAA(&(uParam0->f_603), iParam1);
	}
	else
	{
		unk_0xFA57C719261AA55D(&(uParam0->f_603), iParam1);
	}
}

int func_212(var uParam0, int iParam1, var uParam2, var uParam3, float fParam4)
{
	int iVar0;
	
	if (iParam1 > 1 && *uParam0 == (iParam1 - 1))
	{
		iVar0 = 100;
	}
	else
	{
		iVar0 = 0;
	}
	*uParam3 = 0;
	*uParam3 = (*uParam3 + ceil(((fParam4 * 50f) + (fParam4 * IntToFloat(iVar0)))));
	*uParam3 = (*uParam3 + ceil(((fParam4 * 1.5f) * to_float(*uParam2))));
	func_213(func_411(), 1, *uParam3, 0, 0);
	return 1;
}

void func_213(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_214(Global_106070.f_28022[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

int func_214(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_244();
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
					func_351(99, 1);
					func_243(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_243(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_243(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_227(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_223(5))
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
							func_243(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_243(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_243(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_223(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_243(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_243(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_243(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_243(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_243(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_243(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_243(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_243(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_243(joaat("sp2_money_spent_property"), iParam3);
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
									func_243(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_243(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_243(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_243(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_243(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_243(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_223(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_243(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_243(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_243(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_243(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_243(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_243(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_222(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_351(95, iParam3);
					break;
				
				case 1:
					func_351(97, iParam3);
					break;
				
				case 2:
					func_351(96, iParam3);
					break;
			}
			func_351(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_217(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_217(iVar1);
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
					func_243(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_243(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_243(joaat("sp2_total_cash_earned"), iParam3);
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
	func_216(iParam0);
	if (Global_36117 == 15)
	{
		func_215(0);
	}
	return 1;
}

void func_215(bool bParam0)
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

void func_216(int iParam0)
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

void func_217(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_220(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_220(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_220(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_220(137, 0, -1, 1);
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
	else if (unk_0x05EFB6A616B6FADE(Global_106070.f_20536.f_471, iParam0) || unk_0x05EFB6A616B6FADE(Global_2097152[func_219() /*12745*/].f_8178.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xFA57C719261AA55D(&(Global_106070.f_20536.f_471), iParam0);
		unk_0xFA57C719261AA55D(&(Global_2097152[func_219() /*12745*/].f_8178.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x59FF6261546DDD52("COUP_RED");
		unk_0x4FDA9E6EF359F8A9(func_218(iParam0));
		unk_0x595B8132C1F20265(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_218(int iParam0)
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

int func_219()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_220(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_221();
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

int func_221()
{
	return Global_1312736;
}

void func_222(int iParam0)
{
	func_351(93, iParam0);
	func_351(29, iParam0);
	func_351(30, iParam0);
}

bool func_223(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_224(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_224(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_224(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_224(137, -1, -1);
	}
	if (!unk_0x4C9BACA8D249CB13())
	{
		return unk_0x05EFB6A616B6FADE(Global_106070.f_20536.f_471, iParam0);
	}
	return unk_0x05EFB6A616B6FADE(Global_2097152[func_219() /*12745*/].f_8178.f_10, iParam0);
}

int func_224(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_221();
	}
	iVar1 = func_226(iParam0, iParam1);
	uVar2 = func_225(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x07EEB31CF063DAB7(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_225(int iParam0)
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

int func_226(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_221();
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

int func_227(bool bParam0)
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
		func_242(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_228(27, 1);
	return 1;
}

int func_228(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_229(iParam0, iParam1);
}

int func_229(int iParam0, int iParam1)
{
	if (func_241(14) && !func_240(iParam0))
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
	if (func_239(&Global_4268566))
	{
		if (func_237(&Global_4268566, iParam0))
		{
			return 0;
		}
		if (func_230(&Global_4268566, iParam0))
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

int func_230(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x16E6CF5D5B848918(iParam1))
	{
		return 0;
	}
	if (func_241(14) && !func_240(iParam1))
	{
		return 0;
	}
	if (func_237(uParam0, iParam1))
	{
		return 0;
	}
	if (func_236(uParam0) < 0f)
	{
		func_235(uParam0, 0);
	}
	func_233(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_231(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_231(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x16E6CF5D5B848918(iParam1))
	{
		return 0;
	}
	if (func_241(14) && !func_240(iParam1))
	{
		return 0;
	}
	if (func_237(uParam0, iParam1))
	{
		return 0;
	}
	if (func_236(uParam0) < 0f)
	{
		func_235(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_232(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_232(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_233(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_234(uParam0, iVar0);
		iVar0++;
	}
	func_235(uParam0, (Global_4268565 - 0.5f));
}

void func_234(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_235(var uParam0, float fParam1)
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

float func_236(var uParam0)
{
	return uParam0->f_80;
}

bool func_237(var uParam0, int iParam1)
{
	return func_238(uParam0, iParam1) != -1;
}

int func_238(var uParam0, int iParam1)
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

bool func_239(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_240(int iParam0)
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

bool func_241(int iParam0)
{
	return Global_36117 == iParam0;
}

int func_242(int iParam0, int iParam1)
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

void func_243(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x2AD48F3CEBA882E9(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x93180BE33E7149EF(iParam0, iVar0, 1);
}

void func_244()
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

void func_245(int iParam0, int iParam1, int iParam2)
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
		func_220((891 + iParam0), 1, -1, 1);
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
		func_246();
	}
}

void func_246()
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
		func_242(13, floor(Global_106070.f_10166.f_3853));
	}
	if (!unk_0xC253B4B0BD2DE4DD())
	{
		if (!Global_71205)
		{
			if (func_247() == 2 == 0 && !unk_0x4C9BACA8D249CB13())
			{
				if (unk_0x4F3E20635369D110())
				{
					Global_105804 = 0;
				}
				if (!Global_56181)
				{
					func_209();
				}
			}
		}
	}
}

int func_247()
{
	return Global_25459;
}

void func_248(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_106070.f_9057.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_106070.f_9057.f_99.f_58[iParam0] = iParam1;
}

int func_249(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106070.f_9057.f_99.f_58[iParam0];
}

void func_250(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0x05EFB6A616B6FADE(Global_25834[iVar0 /*23*/].f_11, 20))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x2BCFB39E86340DAA(&(Global_25834[iVar0 /*23*/].f_11), 20);
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_25834[iVar0 /*23*/].f_11), 20);
	}
	if (Global_25831 == 1)
	{
		Global_25832 = 1;
	}
	Global_25831 = 1;
	unk_0x2BCFB39E86340DAA(&(Global_25834[iVar0 /*23*/].f_11), 20);
}

bool func_251(var uParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(uParam0->f_603, iParam1);
}

int func_252()
{
	return unk_0xB00CD6895BDB01A0("MP_BIG_MESSAGE_FREEMODE");
}

void func_253(vector3 vParam0, int iParam1, int iParam2, int iParam3, var uParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	vector3 vVar13;
	vector3 vVar14;
	float fVar15;
	int iVar16;
	vector3 vVar17;
	vector3 vVar18;
	
	iVar0 = unk_0xA19140A5C42D8715();
	iVar1 = 0;
	bVar2 = unk_0x4915F4759304D5CF(iVar0);
	if (bVar2)
	{
		*iParam3 = 2;
		return;
	}
	iVar3 = unk_0xFCD57A307851D560(iVar0);
	uVar4 = unk_0x7411307DC842AAB1(iVar0);
	bVar5 = unk_0x26D28D230F871E8D(iVar0);
	bVar6 = unk_0x685AE6AF34B35D3B(iVar0);
	bVar7 = unk_0xDC5D81351D6A4DDB(iParam1);
	bVar8 = (bVar7 && unk_0x1C20350746ED9672(iVar0, iParam1));
	bVar9 = ((bVar7 && !unk_0x4915F4759304D5CF(iParam2)) && unk_0xC556072C29E00F04(iVar0, iParam2));
	bVar10 = (bVar7 && unk_0xF515D4FED124BAAE(iParam1, &iVar1));
	bVar11 = ((bVar10 && !unk_0x7112137033807390(iVar1, 0)) && unk_0x1C20350746ED9672(iVar0, iVar1));
	bVar12 = (!bVar7 && !func_414(vParam0));
	if (bVar12)
	{
		vVar13 = { unk_0xE2BBD32891C18569(iVar0, 1) };
		vVar14 = { vVar13 - vParam0 };
		fVar15 = sqrt(((vVar14.x * vVar14.x) + (vVar14.y * vVar14.y)));
		*fParam5 = fVar15;
		if ((vVar14.z < 5f && vVar14.z > -2f) && fVar15 < 15f)
		{
			*uParam4 = func_256(ceil(((100f * (15f - fVar15)) / 15f)) + 4, 0, 100);
			*iParam3 = 1;
		}
		else
		{
			*iParam3 = 3;
		}
	}
	if (bVar7)
	{
		if (func_254(iParam1, iParam2))
		{
			*fParam5 = 0f;
			*uParam4 = 100;
			*iParam3 = 1;
		}
		else
		{
			*uParam4 = 0;
			*iParam3 = 3;
		}
	}
	if (bVar10)
	{
		unk_0xF515D4FED124BAAE(iParam1, &iVar16);
		vVar17 = { unk_0xE2BBD32891C18569(iVar0, 1) };
		vVar18 = { unk_0xE2BBD32891C18569(iVar16, 1) };
	}
}

int func_254(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	vector3 vVar5;
	
	if ((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && unk_0xDC5D81351D6A4DDB(iParam0)) && unk_0x1095F403F52B42E1(iParam0, 0))
	{
		vVar3 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
		if (func_355(unk_0x8F474E419F56E48D(iParam0)))
		{
			iVar4 = 0;
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar1 = unk_0x995B4AEAB482F838(iParam0, iVar4);
				if (unk_0xDC5D81351D6A4DDB(iVar1))
				{
					vVar2 = { unk_0xE2BBD32891C18569(iParam0, 1) };
					if (unk_0x1C20350746ED9672(unk_0xA19140A5C42D8715(), iVar1))
					{
						return 1;
					}
				}
				iVar4++;
			}
		}
		if (unk_0xDC5D81351D6A4DDB(iParam0))
		{
			unk_0xF515D4FED124BAAE(iParam0, &iVar0);
			if ((unk_0x1C20350746ED9672(unk_0xA19140A5C42D8715(), iParam0) || unk_0xC556072C29E00F04(unk_0xA19140A5C42D8715(), iParam0)) || ((unk_0xDC5D81351D6A4DDB(iParam1) && !unk_0x7112137033807390(iParam1, 0)) && unk_0xC556072C29E00F04(unk_0xA19140A5C42D8715(), iParam1)))
			{
				if (vVar2.z < vVar3.z)
				{
					return 1;
				}
			}
		}
		if (unk_0xDC5D81351D6A4DDB(iVar0))
		{
			if (!unk_0x7112137033807390(iVar0, 0))
			{
				if (unk_0x1C20350746ED9672(unk_0xA19140A5C42D8715(), iVar0))
				{
					return 1;
				}
				else if (unk_0xC556072C29E00F04(unk_0xA19140A5C42D8715(), iVar0))
				{
					vVar5 = { unk_0x61141C81AF57CBDC(iVar0, unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1)) };
					vVar5.x = func_255((unk_0x69C0BB7D03EE045D(vVar5.x) - 1.305f), 0f);
					if (vVar5.y >= 0f)
					{
						vVar5.y = func_255((vVar5.y - 5.98f), 0f);
					}
					else
					{
						vVar5.y = func_255((-vVar5.y - 6.21f), 0f);
					}
					if (vVar5.y == 0f && vVar5.x == 0f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

float func_255(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_256(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_257(vector3 vParam0, int iParam1, var uParam2, var uParam3)
{
	float fVar0;
	int iVar1;
	
	if (!func_445(&iParam1))
	{
		return;
	}
	fVar0 = func_444(&iParam1);
	if (fVar0 > 1.4f)
	{
		return;
	}
	iVar1 = (170 - ceil(((170f * fVar0) / 1.4f)));
	unk_0xC0BA7F3D0AB2E224(6, vParam0, 0f, 0f, 1f, 0f, 0f, 0f, 4f, 4f, 4f, 240, 200, 80, iVar1, 0, 0, 2, 0, 0, 0, 0);
	unk_0xC0BA7F3D0AB2E224(6, vParam0, 0f, 0f, 1f, 0f, 0f, 0f, 9f, 9f, 9f, 240, 200, 80, iVar1, 0, 0, 2, 0, 0, 0, 0);
	unk_0xC0BA7F3D0AB2E224(6, vParam0, 0f, 0f, 1f, 0f, 0f, 0f, 14f, 14f, 14f, 240, 200, 80, iVar1, 0, 0, 2, 0, 0, 0, 0);
}

void func_258(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_356(uParam1);
	if (func_448(func_449(iParam2)))
	{
		if (!func_251(uParam0, 0))
		{
			if (iParam3 > 1)
			{
				func_328("BJ_MG_MTOBJ", 7500, 1);
			}
			else if (iVar0 != 0)
			{
				if (func_355(iVar0))
				{
					func_328("BJ_MG_TRAIN", 7500, 1);
				}
				else
				{
					func_328("BJ_MG_BOAT", 7500, 1);
				}
			}
			else
			{
				func_328("BJ_MG_STOBJ", 7500, 1);
			}
			func_211(uParam0, 0, 1);
		}
	}
	if (func_325("BJ_FALLHLP") && Global_17228.f_135)
	{
		unk_0x135C61E339DABBAC(1);
		func_211(uParam0, 1, 0);
	}
	if (!func_251(uParam0, 1) && !Global_17228.f_135)
	{
		unk_0xAA10A03449829D04(0);
		unk_0x135C61E339DABBAC(1);
		func_326("BJ_FALLHLP", -1);
		func_211(uParam0, 1, 1);
	}
	else if (!func_251(uParam0, 2))
	{
		if (unk_0xFCD57A307851D560(unk_0xA19140A5C42D8715()) == 1 || unk_0xFCD57A307851D560(unk_0xA19140A5C42D8715()) == 2)
		{
			unk_0x135C61E339DABBAC(1);
			if (unk_0x0B9F814BC8D14042(0))
			{
				func_326("BJ_PARAHLP_KM", 10000);
			}
			else
			{
				func_326("BJ_PARAHLP", 10000);
			}
			func_211(uParam0, 2, 1);
		}
	}
	else if (!func_251(uParam0, 3))
	{
		if (unk_0xFCD57A307851D560(unk_0xA19140A5C42D8715()) == -1 || unk_0xFCD57A307851D560(unk_0xA19140A5C42D8715()) == 3)
		{
			unk_0x135C61E339DABBAC(1);
			func_211(uParam0, 3, 1);
		}
	}
}

void func_259(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	var uVar5;
	vector3 vVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (unk_0xDC5D81351D6A4DDB(unk_0x081BDD4B3367CE5E(unk_0xA19140A5C42D8715())))
		{
			vVar0 = { unk_0x39D039D3B0625870(unk_0x081BDD4B3367CE5E(unk_0xA19140A5C42D8715()), 0) };
		}
		else
		{
			vVar0 = { unk_0x39D039D3B0625870(unk_0xA19140A5C42D8715(), 1) };
		}
		fVar7 = vVar0.y;
		vVar1 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
		vVar1.z = 0f;
	}
	if (unk_0xDC5D81351D6A4DDB(*iParam0) && unk_0x1095F403F52B42E1(*iParam0, 0))
	{
		vVar2 = { unk_0xE2BBD32891C18569(*iParam0, 1) };
		vVar2.z = 0f;
		vVar6 = { unk_0x57323E573695B13F(*iParam0) };
	}
	if (unk_0x1095F403F52B42E1(*iParam0, 0))
	{
		unk_0x7092C71D84CB4207(*iParam0, &vVar3, &uVar5, &uVar5, &uVar5);
		vVar3.z = 0f;
	}
	vVar4 = { vVar1 - vVar2 };
	vVar4.z = 0f;
	fVar9 = unk_0x69C0BB7D03EE045D(func_263(vVar4, vVar3));
	if (func_262(*iParam0))
	{
		fVar8 = func_47((fVar7 - (fVar9 / fVar7)), 2f, 3f);
	}
	else
	{
		fVar8 = func_47((fVar7 + (fVar9 / fVar7)), 3f, 10f);
	}
	uVar10 = func_47(func_260(vVar6.y, fVar8, 0.5f), vVar6.y, fVar7);
	vVar6.y = func_260(vVar6.y, fVar8, 0.5f);
	if (((unk_0xDC5D81351D6A4DDB(*iParam0) && unk_0x1095F403F52B42E1(*iParam0, 0)) && vVar6.y > 2f) && vVar6.y < unk_0xC3B6F3872400A86D(*iParam0))
	{
		unk_0xCA1C59B7923856BC(unk_0xB0D49A1F9F054602(*iParam0, -1, 0), uVar10);
	}
}

float func_260(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	fVar0 = ((1f - cos(func_261((fParam2 * 3.141593f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_261(float fParam0)
{
	return (fParam0 * 57.29578f);
}

int func_262(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		vVar0 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
	}
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		unk_0x7092C71D84CB4207(iParam0, &vVar4, &uVar2, &uVar2, &vVar1);
	}
	vVar3 = { vVar0 - vVar1 };
	vVar3.z = 0f;
	vVar4.z = 0f;
	fVar5 = func_263(vVar3, vVar4);
	if (fVar5 < 0f)
	{
		return 1;
	}
	return 0;
}

float func_263(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

float func_264(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		vVar0 = { unk_0xE2BBD32891C18569(iParam0, 1) };
	}
	else
	{
		vVar0 = { unk_0xE2BBD32891C18569(iParam0, 0) };
	}
	if (!unk_0x7112137033807390(iParam1, 0))
	{
		vVar1 = { unk_0xE2BBD32891C18569(iParam1, 1) };
	}
	else
	{
		vVar1 = { unk_0xE2BBD32891C18569(iParam1, 0) };
	}
	return unk_0x499324B3EF19C288(vVar0, vVar1, bParam2);
}

Vector3 func_265(int iParam0, vector3 vParam1)
{
	var uVar0;
	
	vParam1.z = (vParam1.z + 0.15f);
	if (unk_0x8F7BA8E028ADF980(vParam1, &uVar0, 0, 0))
	{
		vParam1.z = uVar0;
	}
	if (func_266(iParam0))
	{
		unk_0x4299736016AECE26(iParam0, vParam1, 1, 0, 0, 1);
	}
	return vParam1;
}

bool func_266(int iParam0)
{
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 0;
	}
	return !unk_0x7112137033807390(iParam0, 0);
}

void func_267(int iParam0, var uParam1)
{
	var uVar0[6];
	var uVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	if (!func_445(iParam0))
	{
		func_469(iParam0);
	}
	if (func_444(iParam0) < 1f)
	{
		return;
	}
	if (unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		return;
	}
	iVar4 = unk_0x751DA0D8357E8793(unk_0xA19140A5C42D8715(), &uVar0, -1);
	iVar5 = 0;
	while (iVar5 < 6)
	{
		if ((unk_0xDC5D81351D6A4DDB((*uParam1)[iVar5]) && !unk_0x7112137033807390((*uParam1)[iVar5], 0)) && !unk_0x4915F4759304D5CF((*uParam1)[iVar5]))
		{
			if (func_269((*uParam1)[iVar5], &uVar0) == -1)
			{
				func_268(uParam1[iVar5]);
			}
			else
			{
				vVar2 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) - unk_0xE2BBD32891C18569((*uParam1)[iVar5], 1) };
				fVar3 = ((vVar2.x * vVar2.x) + (vVar2.y * vVar2.y));
				if (vVar2.z * vVar2.z) < (3f * fVar3)
				{
					func_268(uParam1[iVar5]);
				}
			}
		}
		iVar5++;
	}
	if (iVar4 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if ((((unk_0xDC5D81351D6A4DDB(uVar0[iVar5]) && !unk_0x7112137033807390(uVar0[iVar5], 0)) && !unk_0x4915F4759304D5CF(uVar0[iVar5])) && unk_0x1CD7BDCAD03C3774(uVar0[iVar5])) && !unk_0x5D7DFE2058701942(uVar0[iVar5], 1))
			{
				if (func_269(uVar0[iVar5], uParam1) == -1)
				{
					vVar2 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) - unk_0xE2BBD32891C18569(uVar0[iVar5], 1) };
					fVar3 = ((vVar2.x * vVar2.x) + (vVar2.y * vVar2.y));
					if (vVar2.z * vVar2.z) > (3f * fVar3)
					{
						bVar7 = false;
						iVar6 = 0;
						while (iVar6 < *uParam1)
						{
							if (!unk_0xDC5D81351D6A4DDB((*uParam1)[iVar6]) || unk_0x4915F4759304D5CF((*uParam1)[iVar6]))
							{
								(*uParam1)[iVar6] = uVar0[iVar5];
								unk_0x2F89329397A277BC(&uVar1);
								unk_0x3F01127ECD227890(0, "oddjobs@basejump@", "ped_a_intro", 8f, -8f, -1, 0, 0, 0, 0, 0);
								unk_0x3F01127ECD227890(0, "oddjobs@basejump@", "ped_a_loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
								unk_0x301F42EEE3C40328(uVar1);
								unk_0xE1072FA2FECBAD96(uVar0[iVar5], uVar1);
								unk_0x3A95A0A3221D4208(&uVar1);
								iVar6 = *uParam1;
								bVar7 = true;
							}
							iVar6++;
						}
						if (!bVar7)
						{
							return;
						}
					}
				}
			}
			iVar5++;
		}
	}
}

void func_268(var uParam0)
{
	unk_0x9568B1B58F78FF36(*uParam0);
	unk_0x3F01127ECD227890(*uParam0, "oddjobs@basejump@", "ped_a_exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
	*uParam0 = 0;
}

int func_269(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (unk_0xDC5D81351D6A4DDB((*uParam1)[iVar0]))
			{
				if (iParam0 == (*uParam1)[iVar0])
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

void func_270(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, var uParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, bool bParam30, bool bParam31, bool bParam32, bool bParam33, bool bParam34, int iParam35, var uParam36)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	unk_0x004B024E6F8A1666(*uParam36);
	func_364();
	func_363();
	func_479();
	func_42(&(uParam2->f_26));
	*iParam19 = 0;
	*iParam21 = 0;
	*uParam25 = { 0f, 0f, 0f };
	*iParam22 = -1;
	*uParam29 = 0;
	*bParam30 = 0;
	func_315(uParam2);
	if (func_445(iParam24))
	{
		func_441(iParam24);
	}
	if (func_445(iParam23))
	{
		func_441(iParam23);
	}
	if (unk_0xDC5D81351D6A4DDB(*iParam7))
	{
		if (func_355(func_356(uParam0)))
		{
			unk_0xBEEB0585E7242BCC(iParam7);
		}
		else
		{
			if (!unk_0x7112137033807390(*iParam7, 0))
			{
				iVar1 = unk_0xB0D49A1F9F054602(*iParam7, -1, 0);
				if (unk_0xDC5D81351D6A4DDB(iVar1))
				{
					unk_0x680F17660351F21B(&iVar1);
				}
			}
			unk_0x4C842FAB634AC89E(iParam7);
		}
	}
	iVar2 = 0;
	while (iVar2 < *iParam5)
	{
		if (unk_0xDC5D81351D6A4DDB((*iParam5)[iVar2]) && !unk_0x7112137033807390((*iParam5)[iVar2], 0))
		{
			unk_0x9568B1B58F78FF36((*iParam5)[iVar2]);
			(*iParam5)[iVar2] = 0;
		}
		iVar2++;
	}
	if (unk_0xDC5D81351D6A4DDB(*iParam8))
	{
		unk_0x4C842FAB634AC89E(iParam8);
	}
	if (unk_0xDC5D81351D6A4DDB(*iParam9))
	{
		if (!func_314(*iParam9) && unk_0xDC5D81351D6A4DDB(unk_0xB0D49A1F9F054602(*iParam9, -1, 0)))
		{
			iVar3 = unk_0xB0D49A1F9F054602(*iParam9, -1, 0);
			unk_0x680F17660351F21B(&iVar3);
		}
		unk_0x4C842FAB634AC89E(iParam9);
	}
	if (!unk_0x7112137033807390(*iParam4, 0))
	{
		unk_0x7E4E83D33161D01A(iParam4);
	}
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
	{
		iVar0 = unk_0xD1A189C6C27EE0CA(unk_0xA19140A5C42D8715());
		if (unk_0xDC5D81351D6A4DDB(iVar0))
		{
			unk_0xFDF7EE94DCA5AD87(unk_0xA19140A5C42D8715(), 1);
			unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), unk_0xE2BBD32891C18569(iVar0, 1) + Vector(0f, 0f, 2f), 1, 0, 0, 1);
			if (unk_0xDC5D81351D6A4DDB(*iParam6) && iVar0 == *iParam6)
			{
				unk_0x6E90449226476EA8(*iParam6);
				func_274(*iParam6, func_313(iParam20), func_312(iParam20), 24, 0);
				unk_0xE192BEF245E3374D(iVar0, 0f, 0f, 0f);
				unk_0x4299736016AECE26(iVar0, func_313(iParam20), 1, 0, 0, 1);
				unk_0x99F546A9200EA026(iVar0, 1084227584);
				unk_0x92DDCF53AA47A63D(iVar0, func_312(iParam20));
			}
			else
			{
				if (!unk_0x4943BEEC19289B8E(iVar0))
				{
					unk_0x1F7948851FB36E88(iVar0, true, 0);
				}
				unk_0x4C842FAB634AC89E(&iVar0);
			}
		}
	}
	*iParam15 = 0;
	*iParam17 = 0;
	*iParam18 = 1;
	*uParam26 = 0f;
	*uParam27 = 0f;
	*uParam28 = 0f;
	*bParam31 = 0;
	*bParam32 = 0;
	*bParam33 = 0;
	*bParam34 = 0;
	*iParam35 = 0;
	if (*iParam16 > -1)
	{
		unk_0xD8A6B72846870D9C(*uParam11);
		unk_0xD8A6B72846870D9C(*uParam12);
		*iParam16 = -1;
	}
	if (unk_0xCE3CB618AFE55EFB(iParam13))
	{
		unk_0xE1623437A3194332(&iParam13);
	}
	if (unk_0xCE3CB618AFE55EFB(iParam14))
	{
		unk_0xE1623437A3194332(&iParam14);
	}
	iVar4 = 0;
	while (iVar4 < *iParam10)
	{
		if (unk_0xDC5D81351D6A4DDB((*iParam10)[iVar4]) && !unk_0x7112137033807390((*iParam10)[iVar4], 0))
		{
			unk_0x117F5CD9634D61A9((*iParam10)[iVar4], 1f);
			unk_0x98D1B1BD9C3AA456((*iParam10)[iVar4], 0, 1);
		}
		(*iParam10)[iVar4] = 0;
		iVar4++;
	}
	func_273(uParam2);
	*iParam3 = 0;
	func_272();
	func_271();
	unk_0x9662BE461F9FDF9E(800);
}

void func_271()
{
	Global_25603 = 1;
}

void func_272()
{
	int iVar0;
	
	Local_98.f_66 = -1;
	Local_98.f_67 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_98.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_98.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_98.f_9[iVar0 /*7*/].f_5 = 0;
		Local_98.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_98.f_5 = 0;
	Local_98.f_5.f_1 = -1f;
	Local_98.f_5.f_2 = 0;
	Local_98 = 0;
	Local_98.f_1 = 0;
}

void func_273(var uParam0)
{
	uParam0->f_603 = 0;
}

void func_274(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)
{
	struct<60> Var0;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0) && unk_0x1095F403F52B42E1(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (unk_0xDC5D81351D6A4DDB(Global_70024.f_484[25]) && unk_0x1095F403F52B42E1(Global_70024.f_484[25], 0))
			{
				if (Global_70024.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((unk_0x05ECE2F25303B711(iParam0) || unk_0x8F474E419F56E48D(iParam0) == joaat("bus")) || unk_0x8F474E419F56E48D(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_311(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_306(iParam0, &Var0);
		if (func_305(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { unk_0xE2BBD32891C18569(iParam0, 1) };
			fParam2 = unk_0x552C823E1D2A019C(iParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0xFEB6EEC0545AF7AA(unk_0x61D2332983ACC05C()) != joaat("vehicle_gen_controller"))
			{
				Global_71012 = unk_0xFEB6EEC0545AF7AA(unk_0x61D2332983ACC05C());
			}
		}
		func_298(iParam3, &Var0, vParam1, fParam2, func_304(iParam0));
		func_275(iParam3, iParam0, 0);
	}
}

void func_275(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_295(&(Global_70024.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0x05EFB6A616B6FADE(Global_70024.f_555[0 /*21*/].f_9, 12) && !unk_0x05EFB6A616B6FADE(Global_70024.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_70024.f_555[0 /*21*/].f_4 != unk_0x8F474E419F56E48D(iParam1))
		{
			return;
		}
	}
	if (Global_70931 != -1 && Global_70931 != iParam0)
	{
		return;
	}
	if (unk_0xDC5D81351D6A4DDB(iParam1))
	{
		if (unk_0x1095F403F52B42E1(iParam1, 0))
		{
			if (!unk_0x4943BEEC19289B8E(iParam1))
			{
				unk_0x1F7948851FB36E88(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_106070.f_32605.f_4801 = func_503();
			}
			if (iParam1 != Global_70024.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_294(iParam0);
					if ((unk_0xDC5D81351D6A4DDB(iVar0) && unk_0x1095F403F52B42E1(iVar0, 0)) && iParam1 != iVar0)
					{
						func_276(iVar0, 145);
					}
				}
				Global_70930 = iParam1;
				Global_70931 = iParam0;
				Global_70932 = iParam2;
			}
		}
	}
}

void func_276(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_277(iParam0))
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
	func_306(iParam0, &(Global_106070.f_32605.f_5510));
}

int func_277(int iParam0)
{
	if ((((((((((!unk_0xDC5D81351D6A4DDB(iParam0) || !unk_0x1095F403F52B42E1(iParam0, 0)) || func_292(iParam0, 0, 0)) || func_292(iParam0, 1, 0)) || func_292(iParam0, 2, 0)) || func_304(iParam0) != 145) || func_291(iParam0)) || func_290(iParam0)) || func_289(iParam0)) || func_288(iParam0)) || !func_278(unk_0x8F474E419F56E48D(iParam0)))
	{
		if (func_290(iParam0))
		{
		}
		if (func_290(iParam0))
		{
		}
		if (func_292(iParam0, 0, 0))
		{
		}
		if (func_292(iParam0, 1, 0))
		{
		}
		if (func_292(iParam0, 2, 0))
		{
		}
		if (func_304(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_278(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_279(iParam0, 0))
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

int func_279(int iParam0, bool bParam1)
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
		if (!func_287())
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
		if ((((!func_286() && !func_285()) && !func_284()) && !func_283()) && !func_287())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x29A02C184A66D25E() || unk_0x47C01C0E6F4C1D06()) || unk_0x7DD04831D0FC44CA())
		{
		}
		else if (!func_284())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_282(iParam0))
		{
			return 0;
		}
	}
	if (!func_280(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_280(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_281())
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

int func_281()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

int func_282(int iParam0)
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

int func_283()
{
	return 0;
}

int func_284()
{
	return 1;
}

int func_285()
{
	return 1;
}

int func_286()
{
	if (unk_0x05BEBC245254F6F2(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_287()
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

int func_288(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x8F474E419F56E48D(iParam0);
	sVar1 = unk_0xC5D229CE54955E47(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3CAC2741CC1A631F(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_279(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_289(int iParam0)
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

int func_290(int iParam0)
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

int func_291(int iParam0)
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

int func_292(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xDC5D81351D6A4DDB(iParam0) || !unk_0x1095F403F52B42E1(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_293(iParam1, iVar0, &sVar1, &iVar2))
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

int func_293(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_294(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_70024.f_139[iParam0];
}

int func_295(var uParam0, int iParam1)
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
			uParam0->f_4 = func_296(0, 1);
			uParam0->f_12 = 0;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 20);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_296(0, 1);
			uParam0->f_12 = 0;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 20);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_296(1, 1);
			uParam0->f_12 = 1;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 20);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_296(1, 2);
			uParam0->f_12 = 1;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 19);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_296(1, 1);
			uParam0->f_12 = 1;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 20);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_296(1, 2);
			uParam0->f_12 = 1;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 19);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_296(2, 1);
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 20);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_296(2, 1);
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 20);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_296(2, 1);
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
			if (func_287())
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
			if (func_287())
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
		if (!func_305(Global_106070.f_32605.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_305(Global_106070.f_2355.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106070.f_2355.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_106070.f_2355.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x05EFB6A616B6FADE(uParam0->f_9, 20))
	{
		if (!func_305(Global_106070.f_2355.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106070.f_2355.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_106070.f_2355.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_296(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_37(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_297(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_297(int iParam0, var uParam1, int iParam2)
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

void func_298(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)
{
	if (func_295(&(Global_70024.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x05EFB6A616B6FADE(Global_70024.f_555[0 /*21*/].f_9, 10))
		{
			func_303(iParam0);
			func_302(uParam1, &(Global_106070.f_32605.f_69[Global_70024.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0x05EFB6A616B6FADE(Global_70024.f_555[0 /*21*/].f_9, 11))
			{
				Global_106070.f_32605.f_1864[Global_70024.f_555[0 /*21*/].f_14 /*3*/] = { vParam2 };
				Global_106070.f_32605.f_1934[Global_70024.f_555[0 /*21*/].f_14] = fParam3;
			}
			else
			{
				Global_106070.f_32605.f_1864[Global_70024.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_106070.f_32605.f_1934[Global_70024.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_106070.f_32605.f_1958[Global_70024.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_299(iParam0, 1);
		}
	}
}

void func_299(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_301(iParam0, 0))
		{
			func_300(iParam0, 1, 0);
			func_300(iParam0, 2, 0);
			func_300(iParam0, 3, 0);
			func_300(iParam0, 4, 0);
			func_300(iParam0, 0, 1);
			Global_70024[iParam0] = 1;
		}
	}
	else
	{
		func_300(iParam0, 0, 0);
	}
}

void func_300(int iParam0, int iParam1, bool bParam2)
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

bool func_301(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_106070.f_32605[iParam0], iParam1);
}

void func_302(var uParam0, var uParam1)
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

void func_303(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_295(&(Global_70024.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xDC5D81351D6A4DDB(Global_70024.f_139[iParam0]))
		{
			unk_0x1F7948851FB36E88(Global_70024.f_139[iParam0], true, 1);
			unk_0x792676988A48387F(&(Global_70024.f_139[iParam0]));
			Global_70024.f_139[iParam0] = 0;
		}
		if (unk_0x05EFB6A616B6FADE(Global_70024.f_555[0 /*21*/].f_9, 13))
		{
			func_299(iParam0, 0);
		}
	}
}

int func_304(int iParam0)
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

bool func_305(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_306(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		func_310(uParam1);
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
		if (uParam1->f_65 == -1 && !func_309(uParam1->f_66))
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
		func_308(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xED6D3EA61B44622B(iParam0, iVar0 + 1))
			{
				unk_0x2BCFB39E86340DAA(&(uParam1->f_77), func_307(iVar0 + 1));
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

int func_307(int iParam0)
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

int func_308(int iParam0, var uParam1, var uParam2)
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

int func_309(int iParam0)
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

void func_310(var uParam0)
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

void func_311(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_303(iParam0);
	func_299(iParam0, 0);
}

float func_312(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 192.1528f;
		
		case 1:
			return 144.2205f;
		
		case 2:
			return 82.0341f;
		
		case 3:
			return 134.9389f;
		
		case 4:
			return 241.8704f;
		
		case 5:
			return 342.318f;
		
		case 6:
			return 174.9318f;
		
		case 7:
			return 186.4915f;
		
		case 8:
			return 93.0806f;
		
		case 9:
			return 213.7284f;
		
		case 10:
			return 55.5964f;
		
		case 11:
			return 61.2421f;
		
		case 12:
			return 304.1476f;
		
		default:
	}
	return 0f;
	return 0f;
}

Vector3 func_313(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -835.2823f, -1303.246f, 4.0004f;
		
		case 1:
			return 1236.613f, 143.0208f, 80.8622f;
		
		case 2:
			return 2463.523f, 1495.492f, 34.8794f;
		
		case 3:
			return -262.0742f, 6590.702f, 0.9787f;
		
		case 4:
			return -45.396f, -784.1727f, 43.2721f;
		
		case 5:
			return -182.8192f, -890.5899f, 28.3452f;
		
		case 6:
			return -1236.648f, 4557.094f, 185.7374f;
		
		case 7:
			return -731.5519f, 4497.153f, 75.5991f;
		
		case 8:
			return -790.7881f, 293.895f, 84.7917f;
		
		case 9:
			return -1426.048f, 4408.049f, 46.1198f;
		
		case 10:
			return 2491.808f, 5001.821f, 44.1871f;
		
		case 11:
			return 1067.101f, -198.2404f, 68.6323f;
		
		case 12:
			return -762.3691f, 4301.332f, 145.2817f;
		
		default:
	}
	return 0f, 0f, 0f;
	return 0f, 0f, 0f;
}

int func_314(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (unk_0x7112137033807390(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x1095F403F52B42E1(iParam0, 0))
		{
			if (!unk_0x463E3A48A46C9195(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_315(int iParam0)
{
	if (*uParam0 != 0)
	{
		unk_0x86795B44CE5FE021(uParam0);
		*iParam0 = 0;
	}
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_12[0] = 0;
	iParam0->f_12[1] = 0;
	iParam0->f_12[2] = 0;
	iParam0->f_12[3] = 0;
	iParam0->f_12[4] = 0;
	iParam0->f_12[5] = 0;
	iParam0->f_12[6] = 0;
	iParam0->f_12[7] = 0;
	iParam0->f_3[0] = 358;
	iParam0->f_3[1] = 358;
	iParam0->f_3[2] = 358;
	iParam0->f_3[3] = 358;
	iParam0->f_3[4] = 358;
	iParam0->f_3[5] = 358;
	iParam0->f_3[6] = 358;
	iParam0->f_3[7] = 358;
	iParam0->f_21[0] = 0;
	iParam0->f_21[1] = 0;
	iParam0->f_21[2] = 0;
	iParam0->f_21[3] = 0;
}

int func_316(var uParam0, int iParam1, int iParam2)
{
	if ((unk_0xFD34717937104F1C() - uParam0->f_5) > iParam2)
	{
		uParam0->f_4 = unk_0xFD34717937104F1C();
	}
	uParam0->f_5 = unk_0xFD34717937104F1C();
	if ((unk_0xFD34717937104F1C() - uParam0->f_4) > iParam2)
	{
		if (unk_0x05EFB6A616B6FADE(uParam0->f_2, iParam1) && !unk_0x05EFB6A616B6FADE(uParam0->f_3, iParam1))
		{
			uParam0->f_4 = unk_0xFD34717937104F1C();
			return 1;
		}
	}
	return 0;
}

int func_317(var uParam0, int iParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, var uParam5, var uParam6)
{
	vector3 vVar0;
	
	switch (uParam0->f_3)
	{
		case 0:
			if (func_444(iParam1) >= 0f)
			{
				vParam4.z = func_47(vParam4.z, -8.909f, 8.909f);
				uParam5->f_2 = (uParam5->f_2 + vParam4.z);
				vVar0 = { func_446(vParam3, vParam4.z) };
				unk_0x1D7183E3760DB4E5(func_416(uParam0, 0), vParam2 + vVar0, *uParam5, *uParam6, 300, 1, 1, 2);
				unk_0xD21CD2A6F93F44A6(func_416(uParam0, 1), func_416(uParam0, 0), floor((1000f * (1.1f - 0f))), 2, 1);
				uParam0->f_3 = 1;
			}
			break;
		
		case 1:
			if (func_444(iParam1) >= 0f)
			{
				unk_0xD87B76260C547F31(0f);
				unk_0xAA32DD4848CF93E0(0f, 1065353216);
				unk_0x8E88E73F74A9FF79(false, 1, floor((1000f * (1.1f - 0f))), 0, 0, 0);
				uParam0->f_3 = 2;
			}
			break;
		
		case 2:
			if (func_444(iParam1) >= 1.1f)
			{
				uParam0->f_3 = 3;
				return 1;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_318(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar1 = func_416(uParam1, 0);
	iVar2 = func_416(uParam1, 1);
	unk_0x6F05C2B0A1DB4CAA(iVar2, func_319());
	vVar3 = { unk_0x3201284584C7CD83(iParam0, 2f, -0.3f, -7.7824f) };
	unk_0x057123F3A835FE47(iVar2, vVar3);
	vVar0 = { unk_0x21AC08654FDAADC9(iVar1, 2) };
	vVar0.x = 0f;
	unk_0xC831502E35848BE4(iVar2, vVar0, 2);
	unk_0xF62A5A3CB8DB2402(iVar2, unk_0x3EC5C28A5B7DA7B8(iVar1));
	unk_0x8E88E73F74A9FF79(true, 0, 3000, 1, 0, 0);
	uParam1->f_3 = 0;
	func_359(iParam2);
}

float func_319()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		return 0.5f;
	}
	return 0.84f;
}

int func_320(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, vector3 vParam6, vector3 vParam7)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	iVar0 = func_416(uParam1, 0);
	vVar1 = { func_323(uParam2) };
	if (unk_0x8300DAA4A7C3C9F8())
	{
		vVar1.y = (vVar1.y * -1f);
	}
	if (!unk_0x0B9F814BC8D14042(2))
	{
		uParam5->f_2 = (uParam5->f_2 - ((vVar1.x * unk_0xDE089748C4C76C96()) * 100f));
		*uParam5 = (*uParam5 + ((vVar1.y * unk_0xDE089748C4C76C96()) * 100f));
		if (unk_0x69C0BB7D03EE045D(uParam5->f_2) > 0.001f)
		{
			uParam5->f_2 = (uParam5->f_2 - ((uParam5->f_2 * unk_0xDE089748C4C76C96()) * 4f));
		}
		else
		{
			uParam5->f_2 = 0f;
		}
		if (unk_0x69C0BB7D03EE045D(*uParam5) > 0.001f)
		{
			*uParam5 = (*uParam5 - ((*uParam5 * unk_0xDE089748C4C76C96()) * 5f));
		}
		else
		{
			*uParam5 = 0f;
		}
	}
	else
	{
		uParam5->f_2 = (-vVar1.x * 130f);
		*uParam5 = (vVar1.y * 130f);
	}
	uParam4->f_2 = (uParam4->f_2 + (uParam5->f_2 * unk_0xDE089748C4C76C96()));
	if (uParam4->f_2 > (0.5f * 43.7465f))
	{
		uParam4->f_2 = (0.5f * 43.7465f);
		uParam5->f_2 = 0f;
	}
	else if (uParam4->f_2 < (-0.5f * 43.7465f))
	{
		uParam4->f_2 = (-0.5f * 43.7465f);
		uParam5->f_2 = 0f;
	}
	*uParam4 = (*uParam4 + (*uParam5 * unk_0xDE089748C4C76C96()));
	if (*uParam4 > (0.5f * 21.6f))
	{
		*uParam4 = (0.5f * 21.6f);
		*uParam5 = 0f;
	}
	else if (*uParam4 < (-0.5f * 21.6f))
	{
		*uParam4 = (-0.5f * 21.6f);
		*uParam5 = 0f;
	}
	vVar2 = { func_446(vParam7, uParam4->f_2) };
	unk_0x057123F3A835FE47(iVar0, vParam6 + vVar2);
	unk_0xC831502E35848BE4(iVar0, (-33f + *uParam4), 0f, ((-88.515f + func_447(uParam0)) + uParam4->f_2), 2);
	unk_0x6F05C2B0A1DB4CAA(iVar0, func_319());
	if (!unk_0x3A83743561B4F70C() || !func_445(iParam3))
	{
		func_359(iParam3);
	}
	else
	{
		if (!unk_0xE06AA0996C4E4E03())
		{
			func_322("BJ_VLOOKHLP");
		}
		if (func_445(iParam3) && func_444(iParam3) > 0.5f)
		{
			if (func_321(uParam2, 1))
			{
				func_441(iParam3);
				unk_0x10B1942032BDB32B(iVar0);
				return 1;
			}
		}
	}
	return 0;
}

bool func_321(var uParam0, int iParam1)
{
	return (unk_0x05EFB6A616B6FADE(uParam0->f_2, iParam1) && !unk_0x05EFB6A616B6FADE(uParam0->f_3, iParam1));
}

void func_322(char* sParam0)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 1, true, -1);
}

Vector3 func_323(var uParam0)
{
	return *uParam0, uParam0->f_1, 0f;
}

void func_324(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = (0.006f * sin((((0.25f * 0.5f) * to_float(unk_0xFD34717937104F1C())) + 1.5f)));
	fVar1 = (0.006f * sin((((0.25f * 0.4f) * to_float(unk_0xFD34717937104F1C())) + 3f)));
	fVar2 = (0.006f * sin(((0.25f * 1f) * to_float(unk_0xFD34717937104F1C()))));
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		unk_0x4299736016AECE26(iParam0, vParam1 + Vector(fVar2, fVar1, fVar0), 1, 0, 0, 1);
	}
}

int func_325(char* sParam0)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	return unk_0x3D94488A86ABB03F(0);
}

void func_326(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, true, iParam1);
}

void func_327(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (unk_0x2F8EAF18929E1E59("BASEJUMPS_PREP_FOR_JUMP_ON_FOOT"))
		{
			unk_0x5AD7D03C214BDA88("BASEJUMPS_PREP_FOR_JUMP_ON_FOOT");
			func_211(uParam0, 20, 0);
		}
	}
	else if (unk_0x2F8EAF18929E1E59("BASEJUMPS_PREP_FOR_JUMP_MOTO"))
	{
		unk_0x5AD7D03C214BDA88("BASEJUMPS_PREP_FOR_JUMP_MOTO");
		func_211(uParam0, 20, 0);
	}
}

void func_328(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xD291E4BC830D587A(sParam0);
	unk_0x1D594DA1FE749C88(iParam1, 1);
}

struct<4> func_329(int iParam0)
{
	struct<4> Var0;
	
	switch (iParam0)
	{
		case 3:
		case 12:
		case 6:
			StringCopy(&Var0, "BJ_OBJ_JCL", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "BJ_OBJ_JDB", 16);
			break;
		
		case 5:
			StringCopy(&Var0, "BJ_OBJ_JCR", 16);
			break;
		
		case 8:
			StringCopy(&Var0, "BJ_OBJ_JB", 16);
			break;
		
		default:
			break;
	}
	return Var0;
}

void func_330(int iParam0, float fParam1)
{
	if (!func_445(iParam0))
	{
		func_40(iParam0, fParam1);
	}
}

void func_331(int iParam0, int iParam1)
{
	if (func_445(iParam0))
	{
		if (func_333(iParam0, (7.5f * IntToFloat(*iParam1))))
		{
			*iParam1++;
			func_207(unk_0xA19140A5C42D8715(), "BASEJUMP_ABOUT_TO_JUMP", 24);
		}
	}
	else if (!func_332())
	{
		func_330(iParam0, 0f);
	}
}

int func_332()
{
	if (Global_15822 != 0 || unk_0x904275961B875DEB())
	{
		return 1;
	}
	return 0;
}

int func_333(int iParam0, float fParam1)
{
	if (func_334(iParam0, fParam1))
	{
		func_441(iParam0);
		return 1;
	}
	return 0;
}

int func_334(int iParam0, float fParam1)
{
	if (func_445(iParam0))
	{
		if (func_444(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_335(var uParam0)
{
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), uParam0, 1);
		if ((((*uParam0 != 0 && *uParam0 != joaat("weapon_unarmed")) && *uParam0 != joaat("weapon_electric_fence")) && *uParam0 != joaat("gadget_parachute")) && *uParam0 != joaat("object"))
		{
			unk_0xF0188A1B49D79AF7(unk_0xA19140A5C42D8715(), joaat("weapon_unarmed"), -1, false, true);
		}
		unk_0xD481A812073CCF02(0, 37, 1);
		unk_0xD481A812073CCF02(0, 66, 1);
		unk_0xD481A812073CCF02(0, 67, 1);
		unk_0xD481A812073CCF02(0, 68, 1);
		unk_0xD481A812073CCF02(0, 99, 1);
		unk_0xD481A812073CCF02(0, 100, 1);
		unk_0xD8C147DA332E7F06(19);
	}
}

int func_336(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, int iParam6, int iParam7, var uParam8, int iParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, var uParam16, var uParam17, var uParam18, bool bParam19, bool bParam20, float fParam21)
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	
	vVar4 = { func_357(uParam0, *iParam6) };
	bVar15 = *iParam6 == (iParam9 - 1);
	(*iParam3)[0] = (*iParam3)[0];
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		unk_0x7092C71D84CB4207(unk_0xA19140A5C42D8715(), &vVar0, &uVar1, &uVar2, &vVar3);
	}
	if (bVar15)
	{
		if (unk_0xDC5D81351D6A4DDB(iParam1) && !unk_0x7112137033807390(iParam1, 0))
		{
			vVar9 = { unk_0x3201284584C7CD83(iParam1, func_358(uParam0)) };
			fVar14 = (vVar9.z - vVar4.z);
			if (bParam20)
			{
				if (unk_0xCE3CB618AFE55EFB(*iParam11))
				{
					unk_0x382EC7CC6BB2D812(*iParam11, vVar9);
				}
				else
				{
					*iParam11 = unk_0xA70969818F182A36(vVar9);
					unk_0x570128B7829A8EAA(*iParam11, 5);
					unk_0x575CF00E129E0CE1(*iParam11, 1.2f);
					unk_0xC4F12E446CCE89F5(*iParam11, "BJ_BLIP_TGT");
				}
			}
			vVar10 = { func_357(uParam0, 0) };
			vVar9.z = (vVar10.z + fVar14);
			vVar4 = { vVar9 };
		}
		else if (func_356(uParam0) != 0)
		{
			vVar9 = { func_357(uParam0, 0) };
			vVar4 = { vVar9 };
		}
		else
		{
			vVar9 = { vVar4 };
		}
		vVar6 = { vVar3 - vVar4 };
		if (func_356(uParam0) == 0)
		{
			unk_0xC0BA7F3D0AB2E224(6, vVar9, 0f, 0f, 1f, 0f, 0f, 0f, 4f, 4f, 4f, 240, 200, 80, func_345(vVar9, 170, 200), 0, 0, 2, 0, 0, 0, 0);
			unk_0xC0BA7F3D0AB2E224(6, vVar9, 0f, 0f, 1f, 0f, 0f, 0f, 9f, 9f, 9f, 240, 200, 80, func_345(vVar9, 170, 200), 0, 0, 2, 0, 0, 0, 0);
			unk_0xC0BA7F3D0AB2E224(6, vVar9, 0f, 0f, 1f, 0f, 0f, 0f, 14f, 14f, 14f, 240, 200, 80, func_345(vVar9, 170, 200), 0, 0, 2, 0, 0, 0, 0);
		}
		if (*iParam7 != -1)
		{
			unk_0xD8A6B72846870D9C(*uParam4);
			*iParam7 = -1;
		}
	}
	else
	{
		unk_0x1C828C4226A9FADF(134, &iVar17, &iVar18, &iVar19, &uVar20);
		vVar6 = { vVar3 - vVar4 };
		vVar5 = { func_357(uParam0, *iParam6 + 1) };
		unk_0xC0BA7F3D0AB2E224(6, vVar4, func_458(vVar6), 0f, 0f, 0f, 14f, 14f, 14f, 240, 200, 80, func_345(vVar4, 25, 200), 0, 0, 2, 0, 0, 0, 0);
		if (*iParam7 != *iParam6)
		{
			if (*iParam7 >= 0)
			{
				unk_0xD8A6B72846870D9C(*uParam4);
				*uParam4 = 0;
				if (*iParam7 < (iParam9 - 2))
				{
					unk_0xD8A6B72846870D9C(*uParam5);
					*uParam4 = 0;
				}
			}
			*uParam4 = unk_0x9A447B9A7D604B57(15, vVar4, vVar5, 9f, iVar17, iVar18, iVar19, func_345(vVar9, 25, ceil((200f * (to_float(113) / to_float(170))))), 0);
			if (*iParam6 < (iParam9 - 2))
			{
				*uParam5 = unk_0x9A447B9A7D604B57(15, vVar5, func_357(uParam0, *iParam6 + 2), (9f * 0.5f), iVar17, iVar18, iVar19, func_345(vVar9, 25, ceil((200f * (to_float(113) / to_float(170))))), 0);
			}
			*iParam7 = *iParam6;
		}
		if (*iParam6 + 1 == (iParam9 - 1))
		{
			unk_0xC0BA7F3D0AB2E224(6, vVar5, 0f, 0f, 1f, 0f, 0f, 0f, (0.5f * 4f), (0.5f * 4f), (0.5f * 4f), 240, 200, 80, func_345(vVar5, 170, 200), 0, 0, 2, 0, 0, 0, 0);
			unk_0xC0BA7F3D0AB2E224(6, vVar5, 0f, 0f, 1f, 0f, 0f, 0f, (0.5f * 9f), (0.5f * 9f), (0.5f * 9f), 240, 200, 80, func_345(vVar5, 170, 200), 0, 0, 2, 0, 0, 0, 0);
			unk_0xC0BA7F3D0AB2E224(6, vVar5, 0f, 0f, 1f, 0f, 0f, 0f, (0.5f * 14f), (0.5f * 14f), (0.5f * 14f), 240, 200, 80, func_345(vVar5, 170, 200), 0, 0, 2, 0, 0, 0, 0);
		}
		else
		{
			unk_0xC0BA7F3D0AB2E224(6, vVar5, func_458(vVar3 - vVar5), 0f, 0f, 0f, (0.5f * 14f), (0.5f * 14f), (0.5f * 14f), 240, 200, 80, func_345(vVar5, 25, 200), 0, 0, 2, 0, 0, 0, 0);
		}
		if (*uParam4 != 0)
		{
			unk_0x42DE3521421FBEB0(*uParam4, iVar17, iVar18, iVar19, func_345(vVar4, 25, ceil((200f * (to_float(113) / to_float(170))))));
		}
		if (*uParam5 != 0)
		{
			unk_0x42DE3521421FBEB0(*uParam5, iVar17, iVar18, iVar19, func_345(vVar5, 25, ceil((200f * (to_float(113) / to_float(170))))));
		}
	}
	if (!bParam19)
	{
		return 0;
	}
	if ((unk_0xFCD57A307851D560(unk_0xA19140A5C42D8715()) == 0 || unk_0xFCD57A307851D560(unk_0xA19140A5C42D8715()) == 1) || (unk_0xFCD57A307851D560(unk_0xA19140A5C42D8715()) == 2 && !unk_0xD73B1037F6BD4B90(0, 80)))
	{
		if (!unk_0x36A24DCE1A72E2C1(vVar4, &uVar21, &uVar22))
		{
			if (iLocal_543)
			{
				func_343(vVar4, uParam15, uParam16, uParam17);
				if (func_445(&iLocal_545))
				{
					func_441(&iLocal_545);
				}
			}
			else if (func_445(&iLocal_545))
			{
				if (func_341(&iLocal_545) > 0.5f)
				{
					func_441(&iLocal_545);
					iLocal_543 = 1;
				}
			}
			else
			{
				func_469(&iLocal_545);
			}
		}
		else if (iLocal_543)
		{
			func_343(vVar4, uParam15, uParam16, uParam17);
			if (func_445(&iLocal_545))
			{
				if (func_341(&iLocal_545) > 0.5f)
				{
					func_441(&iLocal_545);
					iLocal_543 = 0;
				}
			}
			else
			{
				func_469(&iLocal_545);
			}
		}
		else if (func_445(&iLocal_545))
		{
			func_441(&iLocal_545);
		}
	}
	else
	{
		iLocal_543 = 0;
	}
	if (func_340(iParam14, uParam18, &iParam1))
	{
		if (unk_0xCE3CB618AFE55EFB(*iParam11))
		{
			unk_0xE1623437A3194332(iParam11);
		}
		if (unk_0xCE3CB618AFE55EFB(*iParam12))
		{
			unk_0xE1623437A3194332(iParam12);
		}
		if (!bVar15)
		{
			return 2;
		}
		fVar12 = sqrt(((vVar6.x * vVar6.x) + (vVar6.y * vVar6.y)));
		if (((vVar6.z < 5f && vVar6.z > -2f) && fVar12 < 15f) || func_254(iParam1, iParam2))
		{
			*uParam10 = func_256(ceil(((100f * (15f - fVar12)) / 15f)) + 4, 0, 100);
			return 1;
		}
		else
		{
			return 3;
		}
	}
	else if (func_339())
	{
		if (unk_0xC11BDE184F74FF98(unk_0xD4E735F4B6A956AC()))
		{
			unk_0xEF06BE39D11763FC(unk_0xD4E735F4B6A956AC(), 0);
		}
	}
	else if (!bVar15)
	{
		fVar11 = vmag2(vVar6);
		if (fVar11 < (22f * 22f))
		{
			if (fVar11 < (10f * 10f))
			{
				bVar16 = true;
			}
			else if (func_263(vVar0, -vVar6 / FtoV(sqrt(fVar11))) < 0.08f)
			{
				bVar16 = true;
			}
			if (bVar16)
			{
				*uParam8++;
				func_338(iParam13, 1);
				func_213(func_411(), 1, floor((30f * fParam21)), 0, 0);
				iLocal_544 = 0;
			}
			if (!bVar16 && !iLocal_544)
			{
				iLocal_544 = 1;
			}
		}
		else if (unk_0xFCD57A307851D560(unk_0xA19140A5C42D8715()) == 0 || unk_0xFCD57A307851D560(unk_0xA19140A5C42D8715()) == -1)
		{
			if (vVar6.z < -22f)
			{
				func_338(iParam13, 0);
				bVar16 = true;
			}
		}
		else
		{
			vVar8 = { unk_0xFA0A034A8C86C35E(unk_0xA19140A5C42D8715()) };
			vVar8.z = 0f;
			vVar8 = { func_458(vVar8) };
			vVar7 = { -vVar6.x, -vVar6.y, 0f };
			vVar7 = { func_458(vVar7) };
			fVar13 = ((vVar3.z - 32f) + (32f * func_337(vVar8, vVar7)));
			fVar12 = sqrt(((vVar6.x * vVar6.x) + (vVar6.y * vVar6.y)));
			if ((vVar3.z - fVar13) < fVar12)
			{
				fVar13 = (fVar13 - (0.05f * ((fVar13 - vVar3.z) + fVar12)));
				if (fVar13 < (vVar4.z - 22f))
				{
					func_338(iParam13, 0);
					bVar16 = true;
				}
			}
		}
		if (iLocal_544)
		{
			if (vmag2(vVar6) >= (22f * 22f))
			{
				*uParam8++;
				func_338(iParam13, 1);
				func_213(func_411(), 1, floor((30f * fParam21)), 0, 0);
				bVar16 = true;
				iLocal_544 = 0;
			}
		}
		if (bVar16)
		{
			*iParam6++;
			if (unk_0xCE3CB618AFE55EFB(*iParam11))
			{
				unk_0xE1623437A3194332(iParam11);
			}
			if (unk_0xCE3CB618AFE55EFB(*iParam12))
			{
				*iParam11 = *iParam12;
				*iParam12 = 0;
				unk_0x575CF00E129E0CE1(*iParam11, 1.2f);
				if (*iParam6 >= (iParam9 - 1))
				{
					unk_0xC4F12E446CCE89F5(*iParam11, "BJ_BLIP_TGT");
				}
				else
				{
					unk_0xC4F12E446CCE89F5(*iParam11, "BJ_BLIP_CHK");
				}
			}
			if (*iParam6 < (iParam9 - 1))
			{
				if (!unk_0xCE3CB618AFE55EFB(*iParam12))
				{
					*iParam12 = unk_0xA70969818F182A36(func_357(uParam0, *iParam6 + 1));
					unk_0x570128B7829A8EAA(*iParam12, 5);
					unk_0x575CF00E129E0CE1(*iParam12, 0.7f);
					if (*iParam6 + 1 >= (iParam9 - 1))
					{
						unk_0xC4F12E446CCE89F5(*iParam12, "BJ_BLIP_TGT");
					}
					else
					{
						unk_0xC4F12E446CCE89F5(*iParam12, "BJ_BLIP_CHK");
					}
				}
			}
			else
			{
				*iParam12 = 0;
			}
			unk_0x8CBE3882704F529D(unk_0xA19140A5C42D8715(), func_357(uParam0, *iParam6), -1, 0, 2);
		}
	}
	return 0;
}

float func_337(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return ((Param0 * Param2) + (Param0.f_1 * Param2.f_1));
}

void func_338(var uParam0, bool bParam1)
{
	*uParam0 = unk_0x7A3ECD08D6D1D554();
	if (bParam1)
	{
		unk_0xE11F00B4AC919F45(*uParam0, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 1);
	}
	else
	{
		func_328("BJ_MISSED", 7500, 1);
		unk_0xE11F00B4AC919F45(*uParam0, "CHECKPOINT_MISSED", "HUD_MINI_GAME_SOUNDSET", 1);
	}
}

int func_339()
{
	if (((unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715()) && (unk_0xFCD57A307851D560(unk_0xA19140A5C42D8715()) == 3 || unk_0xFCD57A307851D560(unk_0xA19140A5C42D8715()) == -1)) && unk_0xDB684DA32A9BAB5E(unk_0xA19140A5C42D8715()) > 50f) && !unk_0x41680BA6546EE751(unk_0xD4E735F4B6A956AC()))
	{
		return 1;
	}
	return 0;
}

bool func_340(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		return 1;
	}
	iVar0 = unk_0xA19140A5C42D8715();
	if (!*uParam1)
	{
		iVar1 = unk_0x7411307DC842AAB1(iVar0);
		if (iVar1 != -1 && !unk_0x26D28D230F871E8D(iVar0))
		{
			*uParam1 = 1;
			*uParam0 = iVar1;
		}
	}
	return (((unk_0x4374EED90C523366(unk_0xA19140A5C42D8715()) || (unk_0xFCD57A307851D560(iVar0) == 3 && !unk_0x26D28D230F871E8D(iVar0))) || (unk_0xFCD57A307851D560(iVar0) == -1 && !unk_0x26D28D230F871E8D(iVar0))) || (((unk_0xDC5D81351D6A4DDB(*iParam2) && !unk_0x4915F4759304D5CF(iVar0)) && !unk_0x7112137033807390(*iParam2, 0)) && unk_0x1C20350746ED9672(iVar0, *iParam2)));
}

float func_341(int iParam0)
{
	if (func_445(iParam0))
	{
		if (func_342(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_41(unk_0x05EFB6A616B6FADE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

bool func_342(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(*iParam0, 2);
}

void func_343(vector3 vParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	var uVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	
	if (unk_0x36A24DCE1A72E2C1(vParam0, &uVar0, &uVar1))
	{
	}
	fVar4 = 0f;
	fVar5 = 0.05f;
	fVar6 = 0.05f;
	func_344(vParam0, &fVar2, &fVar3);
	if (fVar2 != 0f && fVar3 != 0f)
	{
		if (fVar2 >= 0.7999f)
		{
			fVar4 = 90f;
		}
		else if (fVar2 <= 0.2f)
		{
			fVar4 = -90f;
		}
		else if (fVar3 <= 0.2f)
		{
			fVar4 = 0f;
		}
		else if (fVar3 >= 0.7999f)
		{
			fVar4 = 180f;
		}
		unk_0xD89F7C25FE53EC3D(&iVar8, &iVar9);
		fVar7 = (to_float(iVar8) / to_float(iVar9));
		if (fVar4 == 0f || fVar4 == 180f)
		{
			fVar5 = ((0.05f * 16f) / 9f);
			fVar6 = (0.05f / fVar7);
		}
		else
		{
			fVar5 = 0.05f;
			fVar6 = (0.05f * ((16f / 9f) / fVar7));
		}
		if ((fVar4 != *uParam3 || (*uParam1 == 0f && *uParam2 == 0f)) || (unk_0x69C0BB7D03EE045D((fVar2 - *uParam1)) < 0.04f && unk_0x69C0BB7D03EE045D((fVar3 - *uParam2)) < 0.04f))
		{
			unk_0xE56EDA9982C42132("basejumping", "Arrow_Pointer", fVar2, fVar3, fVar6, fVar5, fVar4, 240, 200, 80, 170, 0);
		}
		*uParam3 = fVar4;
	}
	*uParam1 = fVar2;
	*uParam2 = fVar3;
}

void func_344(vector3 vParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	if (!func_305(vParam0, 0f, 0f, 0f, 0))
	{
		unk_0x4D124AD152C22536(vParam0, &fVar0, &fVar1);
	}
	if (fVar0 >= 0.5f)
	{
		vVar2.x = (fVar0 - 0.5f);
	}
	else
	{
		vVar2.x = (0.5f - fVar0);
	}
	if (fVar1 >= 0.5f)
	{
		vVar2.y = (fVar1 - 0.5f);
	}
	else
	{
		vVar2.y = (0.5f - fVar1);
	}
	vVar2.z = 0f;
	func_458(vVar2);
	vVar2.x = (vVar2.x * 0.75f);
	vVar2.y = (vVar2.y * 0.75f);
	if (fVar0 >= 0.5f)
	{
		fVar0 = (0.5f + vVar2.x);
	}
	else
	{
		fVar0 = (0.5f - vVar2.x);
	}
	if (fVar1 >= 0.5f)
	{
		fVar1 = (0.5f + vVar2.y);
	}
	else
	{
		fVar1 = (0.5f - vVar2.y);
	}
	*uParam1 = fVar0;
	*uParam2 = fVar1;
}

int func_345(vector3 vParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = 100f;
	iVar1 = 50;
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		fVar2 = unk_0x499324B3EF19C288(vParam0, unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), true);
		if (fVar2 > fVar0)
		{
			iVar1 = iParam2;
		}
		else
		{
			fVar3 = ((fVar0 - fVar2) / fVar0);
			iVar1 = (iParam2 - ceil((IntToFloat((iParam2 - iParam1)) * fVar3)));
		}
	}
	if (iVar1 < iParam1)
	{
		iVar1 = iParam1;
	}
	return iVar1;
}

void func_346(int iParam0)
{
	if (func_445(iParam0) && func_444(iParam0) > 7.5f)
	{
		func_441(iParam0);
	}
}

int func_347(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		return 0;
	}
	if (unk_0x47A53E3686340604(unk_0xA19140A5C42D8715()))
	{
		*uParam2 = 1;
		return 1;
	}
	vVar1 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
	{
		iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 1);
		if (unk_0x26D28D230F871E8D(iVar0))
		{
			return 0;
		}
		else if (!unk_0x8F7BA8E028ADF980(unk_0xE2BBD32891C18569(iVar0, 1), &fVar3, 0, 0))
		{
			return 0;
		}
		else if (vVar1.z >= (fVar3 + 1.5f))
		{
			return 0;
		}
	}
	if (unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715()))
	{
		return 0;
	}
	else if (!unk_0x8F7BA8E028ADF980(vVar1, &fVar3, 0, 0))
	{
		return 0;
	}
	else if (vVar1.z >= (fVar3 + 1.5f))
	{
		return 0;
	}
	vVar2 = { func_357(uParam0, 0) };
	if (vVar1.z < (vVar2.z + 5f))
	{
		*uParam2 = 1;
		return 1;
	}
	if (iParam1 == 5)
	{
		if (vVar1.z < 288f)
		{
			*uParam2 = 1;
			return 1;
		}
	}
	else if (iParam1 == 4)
	{
		if (vVar1.z < 305f)
		{
			*uParam2 = 1;
			return 1;
		}
	}
	else if (iParam1 == 8)
	{
		if (vVar1.z < 227f)
		{
			*uParam2 = 1;
			return 1;
		}
	}
	else if (iParam1 == 6 || iParam1 == 12)
	{
		if (vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), func_456(iParam1)) > 3600f)
		{
			*uParam2 = 1;
			return 1;
		}
	}
	return 0;
}

int func_348()
{
	if (unk_0x1F7BAD75218F1A2C(unk_0x9F302D755A846102()) == 4)
	{
		return 1;
	}
	return 0;
}

var func_349(var uParam0)
{
	return uParam0->f_84;
}

void func_350(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	if (!unk_0x1095F403F52B42E1(*iParam0, 0))
	{
		return;
	}
	vVar2 = { unk_0xE2BBD32891C18569(*iParam0, 1) };
	fVar4 = unk_0xC3B6F3872400A86D(*iParam0);
	iVar1 = unk_0xB0D49A1F9F054602(*iParam0, -1, 0);
	unk_0xB29E08C7AB729BAD(*iParam0, false);
	unk_0x2F89329397A277BC(&uVar0);
	if (!bParam1)
	{
		unk_0xD776C8F3311B26BC(0, *iParam0, unk_0xE2BBD32891C18569(*iParam0, 1), 4, 0f, 786469, 2f, 0f, 1);
	}
	unk_0xD776C8F3311B26BC(0, *iParam0, vVar2 + Vector(5f, 5f, 5f) * unk_0xFA0A034A8C86C35E(*iParam0) + Vector(20f, 0f, 0f), 4, (0.3f * fVar4), 786469, 5f, 10f, 1);
	vVar3 = { Vector(1000f, 1000f, 1000f) * unk_0xFA0A034A8C86C35E(*iParam0) };
	vVar3.z = 200f;
	unk_0xD776C8F3311B26BC(0, *iParam0, vVar2 + vVar3, 4, fVar4, 262144, 15f, 10f, 1);
	unk_0x301F42EEE3C40328(uVar0);
	unk_0x9568B1B58F78FF36(iVar1);
	unk_0xE1072FA2FECBAD96(iVar1, uVar0);
	unk_0x3A95A0A3221D4208(&uVar0);
}

void func_351(int iParam0, int iParam1)
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

void func_352(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x962CF6A9EA6FDCAC(unk_0xA6580F898F4E801C(), true, 0);
	}
	unk_0x8E1BB215B75D51A5(1);
	func_401(0, 1, iParam2, 0, 0);
	if (bParam1)
	{
		unk_0xDC374DA4DC566237(true);
		unk_0x85685830EFB9A55E(true);
	}
	func_541(23, 0);
}

int func_353(int iParam0)
{
	switch (iParam0)
	{
		case joaat("bmx"):
		case joaat("scorcher"):
		case joaat("tribike"):
		case joaat("tribike2"):
		case joaat("tribike3"):
		case joaat("vader"):
		case joaat("akuma"):
		case joaat("bagger"):
		case joaat("ruffian"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("blazer"):
		case joaat("blazer2"):
		case joaat("cruiser"):
		case joaat("hexer"):
		case joaat("nemesis"):
		case joaat("pcj"):
		case joaat("policeb"):
			return 1;
		
		default:
	}
	return 0;
}

int func_354(var uParam0)
{
	return *uParam0;
}

int func_355(int iParam0)
{
	switch (iParam0)
	{
		case joaat("freight"):
		case 868868440:
			return 1;
		
		default:
	}
	return 0;
}

int func_356(var uParam0)
{
	return uParam0->f_1;
}

Vector3 func_357(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 12)
	{
		return 0f, 0f, 0f;
	}
	return uParam0->f_12[iParam1 /*3*/];
}

Vector3 func_358(var uParam0)
{
	return uParam0->f_6;
}

void func_359(int iParam0)
{
	func_40(iParam0, 0f);
}

int func_360(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_361(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_362(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

void func_363()
{
	int iVar0;
	
	unk_0x5C8DDE741D7E264C();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1838577.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_364()
{
	struct<68> Var0;
	
	Global_1835013 = 0;
	Global_1835013.f_1 = 0;
	Global_1835013.f_2 = 0;
	Global_1835013.f_3 = 0;
	Global_1835013.f_4 = 0;
	func_365(&(Global_1835013.f_73));
	func_365(&(Global_1835013.f_142));
	func_365(&(Global_1835013.f_211));
	func_365(&(Global_1835013.f_280));
	StringCopy(&(Global_1835013.f_349), "", 24);
	StringCopy(&(Global_1835013.f_355), "", 24);
	func_129(&(Global_1835013.f_361));
	Global_1835013.f_374 = -1;
	Global_1835388 = 0;
	Global_1835389 = 0;
	Var0.f_2.f_1 = 4;
	Global_1835013.f_5 = { Var0 };
}

void func_365(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

bool func_366(var uParam0)
{
	return uParam0->f_83;
}

int func_367(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, var uParam11, var uParam12)
{
	if (unk_0x4EFA8CFA30651DD4(func_416(uParam3, 1)))
	{
		func_359(iParam5);
	}
	if (!*uParam10)
	{
		if (func_445(iParam7) && func_444(iParam7) >= func_388(uParam0))
		{
			func_350(iParam2, 0);
			func_441(iParam7);
			*uParam10 = 1;
		}
	}
	else if (unk_0x1095F403F52B42E1(*iParam2, 0))
	{
		unk_0xCDB02C039175DA49(*iParam2, 0.7f);
	}
	if (func_445(iParam5) && func_444(iParam5) > 0.2f)
	{
		func_441(iParam5);
		func_441(iParam6);
		return 1;
	}
	if (!func_445(iParam6))
	{
		func_469(iParam6);
	}
	else if ((uParam12 && unk_0x3A83743561B4F70C()) || (func_444(iParam6) > 0.5f && func_321(uParam4, 2)))
	{
		*uParam11 = 1;
		func_441(iParam5);
		func_441(iParam6);
		return 1;
	}
	unk_0xD8C147DA332E7F06(2);
	if (func_445(iParam8))
	{
		if (func_449(iParam1) != 0)
		{
			func_441(iParam8);
		}
		else if (func_444(iParam8) > func_409(iParam1, iParam9))
		{
			switch (iParam9)
			{
				case 0:
					unk_0x3F01127ECD227890(unk_0xA19140A5C42D8715(), "amb@world_human_hiker_standing@male@idle_a", "idle_a", 8f, -1.4f, -1, 48, 0, 0, 0, 0);
					break;
				
				case 1:
					unk_0x3F01127ECD227890(unk_0xA19140A5C42D8715(), "amb@world_human_muscle_flex@arms_at_side@base", "base", 8f, -1.4f, -1, 48, 0.681f, 0, 0, 0);
					break;
				
				case 2:
					unk_0x3F01127ECD227890(unk_0xA19140A5C42D8715(), "playidles_cold", "blow_hands", 8f, -1.4f, -1, 48, 0.537f, 0, 0, 0);
					break;
			}
			func_441(iParam8);
		}
	}
	if (unk_0x3A83743561B4F70C())
	{
		func_368();
	}
	else
	{
		func_359(iParam6);
	}
	return 0;
}

void func_368()
{
	struct<6> Var0;
	int iVar1;
	
	iVar1 = Global_106070.f_18939;
	func_369(Var0, 0, 0, 0, 0, iVar1);
}

void func_369(struct<6> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (Global_71459 != 6)
	{
		if (Global_71461 == -1)
		{
			if (func_383(1, Param0))
			{
				if (Global_71462 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_21 > fVar0)
				{
					Global_71461 = unk_0xFD34717937104F1C();
					vLocal_22 = { unk_0x376AC8BC5AF45434(15) };
					fLocal_21 = 0f;
				}
				else
				{
					fLocal_21 = (fLocal_21 + unk_0xDE089748C4C76C96());
				}
			}
			else
			{
				fLocal_21 = 0f;
			}
		}
		else
		{
			if (!func_383(0, Param0))
			{
				Global_71461 = (unk_0xFD34717937104F1C() - 9000);
			}
			unk_0xD8C147DA332E7F06(7);
			unk_0xD8C147DA332E7F06(6);
			unk_0xD8C147DA332E7F06(8);
			unk_0xD8C147DA332E7F06(9);
			iVar1 = (unk_0xFD34717937104F1C() - Global_71461);
			if (iVar1 < 9000 && !unk_0x71364F510A1CB69F())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = ceil(((to_float(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = ceil(((to_float(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_71459)
				{
					case 3:
					case 5:
						if (iParam1 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.07f;
						}
						else if (iParam2 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.077f;
						}
						else if (iParam3 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.05f;
						}
						else if (iParam4 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.035f;
						}
						else
						{
							fVar5 = 0f;
							fVar6 = -0.014f;
						}
						break;
					
					default:
						fVar5 = 0f;
						fVar6 = -0.014f;
						break;
				}
				unk_0xCD282E433560A509(82, 66);
				unk_0x6F2FE3F2B8CE9390(1);
				unk_0x38DFCC31D902E792(2);
				iVar11 = func_411();
				if (Global_71462 == 1 && Global_71460 == 62)
				{
					iVar11 = Global_106070.f_2355.f_539.f_4302;
				}
				switch (iVar11)
				{
					case 0:
						unk_0x1C828C4226A9FADF(143, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					case 1:
						unk_0x1C828C4226A9FADF(144, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					case 2:
						unk_0x1C828C4226A9FADF(145, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					default:
						iVar7 = 240;
						iVar8 = 200;
						iVar9 = 80;
				}
				unk_0xA6D7328EAA8CB61E(iVar7, iVar8, iVar9, iVar2);
				unk_0x85AFD3602DD5A943();
				Var4 = { func_372(Global_71460, Global_71462, iParam5) };
				if (fVar6 == -0.014f)
				{
				}
				unk_0xE4C207949B93A9C7(fVar5, fVar6, 0f, 0.01f);
				unk_0xFD5A6B90A46ACED0(0.67f, 0.67f);
				if (!unk_0x7D67DDE730F596C5() && !unk_0xB8698B5AFA4DC05D())
				{
					fLocal_24 = 0.14f;
				}
				else
				{
					fLocal_24 = 0.17f;
				}
				if (fVar6 == -0.014f)
				{
					if (func_371(&Var4) > fLocal_24)
					{
						if (unk_0xC9A7EEAA81FA9DF2(15))
						{
							unk_0xACDF25AEEEFD68FD(15, vLocal_22.x, (vLocal_22.y + fLocal_23));
							Global_71464 = 1;
						}
					}
				}
				unk_0x7C25BC565D364568(&Var4);
				unk_0xB435CE12BEF0DBF7(fVar5, fVar6, 0);
				unk_0x0DA2C67B1175034B();
				if (Global_71463 == 1)
				{
					func_370();
					fLocal_21 = 0f;
				}
			}
			else
			{
				func_370();
				fLocal_21 = 0f;
			}
		}
	}
}

void func_370()
{
	if (Global_71459 != 6)
	{
	}
	if (Global_71464)
	{
		unk_0xE355C64541455AE8(15);
		Global_71464 = 0;
		Global_17367.f_8091 = 0;
	}
	Global_71459 = 6;
	Global_71461 = -1;
	Global_71460 = -1;
}

float func_371(char* sParam0)
{
	unk_0xC42A779360572EA7(sParam0);
	return unk_0x4E0DD18900B7ACAE(1);
}

struct<2> func_372(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_382(iParam0) };
			break;
		
		case 7:
			Var0 = { func_380(iParam0) };
			break;
		
		case 3:
			iVar1 = iParam0;
			switch (iVar1)
			{
				case 0:
					Var0 = { func_379(iParam2) };
					break;
				
				case 8:
					Var0 = { func_378(iParam2) };
					break;
				
				case 7:
					Var0 = { func_377(iParam2) };
					break;
				
				case 10:
					Var0 = { func_376(iParam2) };
					break;
				
				case 5:
					Var0 = { func_375(iParam2) };
					break;
				
				case 4:
					Var0 = { func_374(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_373(iVar1), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_373(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
			break;
		
		case 1:
			return "MG_DART";
			break;
		
		case 2:
			return "MG_GOLF";
			break;
		
		case 3:
			return "MG_HUNT";
			break;
		
		case 4:
			return "MG_OFFR";
			break;
		
		case 5:
			return "MG_PILO";
			break;
		
		case 6:
			return "MG_RMPG";
			break;
		
		case 7:
			return "MG_SERA";
			break;
		
		case 8:
			return "MG_SRAC";
			break;
		
		case 9:
			return "MG_STRP";
			break;
		
		case 10:
			return "MG_STNT";
			break;
		
		case 11:
			return "MG_SHTR";
			break;
		
		case 12:
			return "MG_TAXI";
			break;
		
		case 13:
			return "MG_TENN";
			break;
		
		case 14:
			return "MG_TOWI";
			break;
		
		case 15:
			return "MG_TRFA";
			break;
		
		case 16:
			return "MG_TRFG";
			break;
		
		case 17:
			return "MG_TRIA";
			break;
		
		case 18:
			return "MG_YOGA";
			break;
		
		case 19:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_374(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0x429D45A6C6520026(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_375(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0x429D45A6C6520026(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_376(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0x429D45A6C6520026(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_377(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0x429D45A6C6520026(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_378(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0x429D45A6C6520026(&cVar1) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_379(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0x429D45A6C6520026(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_380(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_381(iParam0) };
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

struct<2> func_381(int iParam0)
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

struct<2> func_382(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_84115[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_106070.f_9057.f_99.f_205[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

int func_383(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (((!func_385(0) || Global_71474) || Global_71463 == 1) || !unk_0x3A83743561B4F70C())
	{
		return 0;
	}
	switch (Global_71459)
	{
		case 0:
			if (unk_0x3CAC2741CC1A631F(&uParam1, "NONE") || unk_0x429D45A6C6520026(&uParam1))
			{
				Global_71459 = 3;
			}
			else
			{
				Global_71459 = 1;
			}
			break;
		
		case 1:
			if (unk_0x7974D616EF03E483())
			{
				Global_71459 = 2;
			}
			break;
		
		case 2:
			if (unk_0x5CA3186381FC012C())
			{
				Global_71459 = 4;
				return 1;
			}
			else if (!unk_0x99E48E2CD778F380())
			{
				Global_71459 = 3;
			}
			break;
		
		case 3:
			if (unk_0x5CA3186381FC012C())
			{
			}
			else
			{
				Global_71459 = 5;
				return 1;
			}
			break;
		
		case 4:
			if (unk_0x5CA3186381FC012C())
			{
				return 1;
			}
			else if (iParam0 == 1)
			{
				Global_71459 = 5;
			}
			break;
		
		case 5:
			if ((unk_0x5CA3186381FC012C() || func_31(0)) || func_384(1))
			{
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_384(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17228.f_4 && Global_17228.f_104 == 4);
	}
	return Global_17228.f_4;
}

int func_385(int iParam0)
{
	if (Global_36117 == 15)
	{
		return 0;
	}
	if (func_386(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_386(int iParam0)
{
	return func_387(iParam0, Global_36117);
}

int func_387(int iParam0, int iParam1)
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

float func_388(var uParam0)
{
	return uParam0->f_80;
}

int func_389(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_398(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_390(sParam2, iParam3, 0);
}

int func_390(char* sParam0, int iParam1, bool bParam2)
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
					func_397();
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
		if (func_396(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_395();
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
				func_394();
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
				if (func_393())
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
			if (func_28())
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
			func_392();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_391();
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
		func_397();
	}
	return 0;
}

void func_391()
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

void func_392()
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

int func_393()
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

void func_394()
{
	if (func_241(14))
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
		Global_14513 = func_411();
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

void func_395()
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

bool func_396(int iParam0, int iParam1)
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

void func_397()
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

void func_398(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

var func_399(var uParam0)
{
	return uParam0->f_4;
}

void func_400(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, var uParam7)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	iVar0 = func_416(uParam0, 0);
	if (unk_0xDC5D81351D6A4DDB(iParam5) && !unk_0x7112137033807390(iParam5, 0))
	{
		*uParam2 = { 10.2986f, 0f, 8.909f };
		*uParam4 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -cos((-97.4239f + func_447(uParam1))), sin((-97.4239f + func_447(uParam1)))) };
		*uParam3 = { unk_0x3201284584C7CD83(iParam5, 1.12046f, -0.317773f, 1.3385f) };
		vVar1 = { func_446(*uParam4, uParam2->f_2) };
		vVar3 = { *uParam3 + vVar1 };
		*uParam6 = { (-33f + *uParam2), 0f, (-88.515f + func_447(uParam1)) };
		*uParam7 = 26f;
		vVar2 = { *uParam6 };
		vVar2.z = (vVar2.z + uParam2->f_2);
		unk_0x057123F3A835FE47(iVar0, vVar3);
		unk_0xC831502E35848BE4(iVar0, vVar2, 2);
		unk_0xF62A5A3CB8DB2402(iVar0, *uParam7);
		unk_0x6F05C2B0A1DB4CAA(iVar0, func_319());
	}
	unk_0x930701157A4B9374(iVar0, true);
	unk_0x8E88E73F74A9FF79(true, 0, 3000, 1, 0, 0);
}

void func_401(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		unk_0xC97ACA9456A064F3(unk_0xD4E735F4B6A956AC());
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 1);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 1);
		func_408(1);
		unk_0x158181F81A221D70();
		unk_0xD8EA6395AE60BF4A();
		if (Global_14513.f_1 > 3)
		{
			if (unk_0xB39808C1DCE0DCFA())
			{
				unk_0xA8B97F91CBDE376C(false);
			}
			if (!func_28())
			{
				Global_14513.f_1 = 3;
			}
			Global_15822 = 5;
		}
		func_407(1, iParam3, iParam2, 0);
		Global_56187 = 1;
		Global_68497 = 1;
		Global_71203 = 1;
	}
	else
	{
		func_408(0);
		unk_0x21727E2C492FE1B3();
		Global_56187 = 0;
		if (bParam1)
		{
			unk_0x1A81FD78261DCFCD();
		}
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 0);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 0);
		func_407(0, iParam3, iParam2, 0);
		if (unk_0x4C9BACA8D249CB13())
		{
			if ((((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_405(unk_0xD4E735F4B6A956AC())) && !func_403(unk_0xD4E735F4B6A956AC(), 0)) && !func_402()) && !bParam4)
			{
				unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), false);
			}
		}
		else if ((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_405(unk_0xD4E735F4B6A956AC())) && !bParam4)
		{
			unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), false);
		}
		Global_71203 = 0;
	}
}

bool func_402()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 14);
}

bool func_403(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_404(-1, 0) == 8;
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

int func_404(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_221();
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

int func_405(int iParam0)
{
	if (func_403(iParam0, 0))
	{
		return 1;
	}
	if (func_406())
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

bool func_406()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

int func_407(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_408(int iParam0)
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

float func_409(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 0:
					return 6f;
				
				case 1:
					return 7.3f;
				
				case 2:
					return 6.8f;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 4.2f;
				
				case 1:
					return 5.5f;
				
				case 2:
					return 5f;
				
				default:
			}
			break;
		
		case 5:
			return 0f;
		
		case 6:
			return 0f;
		
		case 12:
			return 0f;
	}
	return 0f;
}

int func_410(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 3000;
		
		case 6:
			return 1500;
		
		case 12:
			return 2000;
		
		default:
	}
	return 0;
}

int func_411()
{
	func_412();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_412()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_36(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_35(unk_0xA19140A5C42D8715());
			if (func_37(iVar0) && (!func_241(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_37(Global_106070.f_2355.f_539.f_4301))
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

float func_413(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return unk_0x0C1B8F3F6EFDC58B((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

int func_414(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_415(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return -120.0078f, -976.4348f, 295.2008f;
		
		case 6:
			return -1242.709f, 4539.658f, 185.6828f;
		
		case 12:
			return -768.0306f, 4330.409f, 147.6768f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_416(var uParam0, int iParam1)
{
	if (iParam1 >= 2)
	{
		return 0;
	}
	return (*uParam0)[iParam1];
}

void func_417(int iParam0, int iParam1, int iParam2)
{
	unk_0x962CF6A9EA6FDCAC(unk_0xA6580F898F4E801C(), false, iParam0);
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		unk_0x341AA026B031328A(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), 15f);
	}
	unk_0x8E1BB215B75D51A5(iParam1);
	func_27(0);
	func_401(1, 1, iParam2, 0, 0);
	unk_0xDC374DA4DC566237(false);
	unk_0x85685830EFB9A55E(false);
	func_541(23, 1);
}

void func_418(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		return;
	}
	if (func_414(func_440(uParam0)))
	{
	}
	else
	{
		unk_0x413F34FCFABEDE4B(func_440(uParam0), func_439(uParam0), false, 1);
	}
	iVar3 = 0;
	while (iVar3 < 12)
	{
		if (!func_414(func_357(uParam0, iVar3)))
		{
			*uParam2 = iVar3 + 1;
		}
		else
		{
			iVar3 = 999999;
		}
		iVar3++;
	}
	unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 0);
	unk_0xB20B772FD9DE1847(unk_0xA19140A5C42D8715(), joaat("weapon_unarmed"), false);
	unk_0xF0188A1B49D79AF7(unk_0xA19140A5C42D8715(), joaat("gadget_parachute"), 1, false, false);
	unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), false);
	if (iParam13 == 4)
	{
		iVar1 = unk_0xC409B91AC4749F88();
		if (unk_0xDC5D81351D6A4DDB(iVar1))
		{
			if (unk_0x7112137033807390(iVar1, 0))
			{
				unk_0x4C842FAB634AC89E(&iVar1);
			}
			else
			{
				vVar2 = { unk_0xE2BBD32891C18569(iVar1, 1) };
				if (((((vVar2.z > 320f && vVar2.z < 340f) && vVar2.x > -103f) && vVar2.x < -45f) && vVar2.y > -850f) && vVar2.y < -787f)
				{
					unk_0x4299736016AECE26(iVar1, -89.794f, -742.6727f, 43.7472f, 1, 0, 0, 1);
					unk_0x92DDCF53AA47A63D(iVar1, -109.33f);
					unk_0xC53974682AC939A9(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 3)
	{
		iVar1 = unk_0xC409B91AC4749F88();
		if (unk_0xDC5D81351D6A4DDB(iVar1))
		{
			if (unk_0x7112137033807390(iVar1, 0))
			{
				unk_0x4C842FAB634AC89E(&iVar1);
			}
			else
			{
				vVar2 = { unk_0xE2BBD32891C18569(iVar1, 1) };
				if (((((vVar2.z > 689.4f && vVar2.z < 701.8875f) && vVar2.x > 404.6f) && vVar2.x < 413.4f) && vVar2.y > 5700.6f) && vVar2.y < 5711.9f)
				{
					unk_0x4299736016AECE26(iVar1, -215.2838f, 6543.57f, 10.0967f, 1, 0, 0, 1);
					unk_0x92DDCF53AA47A63D(iVar1, 145.5732f);
					unk_0xC53974682AC939A9(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 5)
	{
		iVar1 = unk_0xC409B91AC4749F88();
		if (unk_0xDC5D81351D6A4DDB(iVar1))
		{
			if (unk_0x7112137033807390(iVar1, 0))
			{
				unk_0x4C842FAB634AC89E(&iVar1);
			}
			else
			{
				vVar2 = { unk_0xE2BBD32891C18569(iVar1, 1) };
				if (((((vVar2.z > 294.5f && vVar2.z < 298.9f) && vVar2.x > -121.3f) && vVar2.x < -116.5f) && vVar2.y > -978.1f) && vVar2.y < -973.2f)
				{
					unk_0x4299736016AECE26(iVar1, -118.1021f, -947.3954f, 27.3296f, 1, 0, 0, 1);
					unk_0x92DDCF53AA47A63D(iVar1, 341.9614f);
					unk_0xC53974682AC939A9(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 6)
	{
		iVar1 = unk_0xC409B91AC4749F88();
		if (unk_0xDC5D81351D6A4DDB(iVar1))
		{
			if (unk_0x7112137033807390(iVar1, 0))
			{
				unk_0x4C842FAB634AC89E(&iVar1);
			}
			else
			{
				vVar2 = { unk_0xE2BBD32891C18569(iVar1, 1) };
				if (((((vVar2.z > 182.7f && vVar2.z < 202.7f) && vVar2.x > -1252.7f) && vVar2.x < -1227.9f) && vVar2.y > 4525.8f) && vVar2.y < 4549.3f)
				{
					unk_0x4299736016AECE26(iVar1, -1237.022f, 4559.404f, 185.9418f, 1, 0, 0, 1);
					unk_0x92DDCF53AA47A63D(iVar1, 172.2123f);
					unk_0xC53974682AC939A9(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 8)
	{
		iVar1 = unk_0xC409B91AC4749F88();
		if (unk_0xDC5D81351D6A4DDB(iVar1))
		{
			if (unk_0x7112137033807390(iVar1, 0))
			{
				unk_0x4C842FAB634AC89E(&iVar1);
			}
			else
			{
				vVar2 = { unk_0xE2BBD32891C18569(iVar1, 1) };
				if (((((vVar2.z > 230f && vVar2.z < 244.5f) && vVar2.x > -809.6f) && vVar2.x < -747.7f) && vVar2.y > 310.6f) && vVar2.y < 346.6f)
				{
					unk_0x4299736016AECE26(iVar1, -1351.805f, 133.95f, 55.2558f, 1, 0, 0, 1);
					unk_0x92DDCF53AA47A63D(iVar1, 0.8373f);
					unk_0xC53974682AC939A9(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 12)
	{
		iVar1 = unk_0xC409B91AC4749F88();
		if (unk_0xDC5D81351D6A4DDB(iVar1))
		{
			if (unk_0x7112137033807390(iVar1, 0))
			{
				unk_0x4C842FAB634AC89E(&iVar1);
			}
			else
			{
				vVar2 = { unk_0xE2BBD32891C18569(iVar1, 1) };
				if (((((vVar2.z > 143.6f && vVar2.z < 154.5f) && vVar2.x > -777f) && vVar2.x < -758.9f) && vVar2.y > 4328.3f) && vVar2.y < 4344f)
				{
					unk_0x4299736016AECE26(iVar1, -765.8775f, 4294.807f, 145.6581f, 1, 0, 0, 1);
					unk_0x92DDCF53AA47A63D(iVar1, 349.2306f);
					unk_0xC53974682AC939A9(iVar1, 1);
				}
			}
		}
	}
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 0);
		unk_0xB20B772FD9DE1847(unk_0xA19140A5C42D8715(), joaat("weapon_unarmed"), false);
		unk_0xF0188A1B49D79AF7(unk_0xA19140A5C42D8715(), joaat("gadget_parachute"), 1, false, false);
	}
	iVar0 = func_449(iParam13);
	if (iVar0 != 0)
	{
		if (!unk_0x7112137033807390(*iParam3, 0) || unk_0xDC5D81351D6A4DDB(*iParam3))
		{
			unk_0x9CBCA0C1A4935577(*iParam3);
			unk_0x4299736016AECE26(*iParam3, func_456(iParam13), 1, 0, 0, 1);
			unk_0x92DDCF53AA47A63D(*iParam3, func_447(uParam0));
		}
		else
		{
			*iParam3 = unk_0x48CFBECB146FD1A1(iVar0, func_456(iParam13), func_447(uParam0), 1, 1, 0);
		}
		if (func_448(iVar0))
		{
			if (!unk_0xDC5D81351D6A4DDB(*iParam8) || unk_0x7112137033807390(*iParam8, 0))
			{
				*iParam8 = unk_0x91A7C8CA5E332C03(*iParam3, 26, iParam10, -1, 1, true);
				unk_0x241F3D2BEEB0124B(*iParam8, 0);
				func_438(*iParam8, iParam13);
				unk_0x33CF95E95A476FB9(*iParam8, true);
			}
			unk_0xB9C8D26C759B93D1("SKY_DIVING_SHAKE", 0.15f);
			func_436(uParam1, *iParam8, func_437(iParam13));
			func_433(uParam1, unk_0xA19140A5C42D8715(), func_435());
			unk_0xCDB02C039175DA49(*iParam3, 0.7f);
			unk_0xB29E08C7AB729BAD(*iParam3, true);
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				if (!unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), *iParam3, 0))
				{
					unk_0xF334C9B245CD323D(unk_0xA19140A5C42D8715(), 1, 1);
					unk_0xB29E08C7AB729BAD(unk_0xA19140A5C42D8715(), false);
					unk_0x692D5500D82E4F5D(unk_0xA19140A5C42D8715(), *iParam3, 2);
				}
				else if (func_432(unk_0xA19140A5C42D8715(), *iParam3) == 1)
				{
					unk_0xB29E08C7AB729BAD(unk_0xA19140A5C42D8715(), false);
					unk_0x692D5500D82E4F5D(unk_0xA19140A5C42D8715(), *iParam3, 2);
				}
			}
			if (!unk_0x7112137033807390(*iParam3, 0))
			{
				*iParam14 = unk_0x70788DC3D80C9DEB(0f, 0f, 0f, 0f, 0f, 0f, 2);
				unk_0x460F6BE568AFE564(*iParam14, *iParam3, unk_0x4F9AEAB2CC029A5C(*iParam3, "Chassis"));
				unk_0xE5565DEAABF9D588(unk_0xA19140A5C42D8715(), *iParam14, "oddjobs@basejump@", "Heli_door_loop", 4f, -4f, 65, 0, 1148846080, 0);
				unk_0xDA16255FBFC16B28(*iParam14, 1);
			}
			func_469(iParam12);
		}
		else if (func_353(iVar0))
		{
			func_433(uParam1, unk_0xA19140A5C42D8715(), func_435());
			unk_0xB29E08C7AB729BAD(unk_0xA19140A5C42D8715(), false);
			unk_0x692D5500D82E4F5D(unk_0xA19140A5C42D8715(), *iParam3, -1);
			unk_0x49BE0FDDF14A305A(unk_0xA19140A5C42D8715(), 0, 4096, -1);
			func_469(iParam12);
		}
	}
	else
	{
		func_433(uParam1, unk_0xA19140A5C42D8715(), func_435());
		if (func_366(uParam0))
		{
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1) || unk_0xEE7357B459939B0F(unk_0xA19140A5C42D8715())))
			{
				unk_0xFDF7EE94DCA5AD87(unk_0xA19140A5C42D8715(), 1);
			}
			unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), func_456(iParam13), 1, 0, 0, 1);
			unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), func_447(uParam0));
			unk_0xB3E1967E66494060(unk_0xA19140A5C42D8715(), -1);
			if (unk_0xDC5D81351D6A4DDB(*iParam3))
			{
				iVar4 = -1;
				while (iVar4 <= (unk_0xD63FAD81FAF5E0CB(*iParam3) - 1))
				{
					if (!unk_0x588F5E48C78F1C73(*iParam3, iVar4, 0))
					{
						iVar5 = unk_0xB0D49A1F9F054602(*iParam3, iVar4, 0);
						unk_0x680F17660351F21B(&iVar5);
					}
					iVar4++;
				}
				unk_0x4C842FAB634AC89E(iParam3);
			}
		}
	}
	unk_0xB0D7019224A3A443(unk_0xA19140A5C42D8715(), 177, 1);
	unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 36, true);
	if (func_514(uParam0) != 0)
	{
		func_428(uParam0, iParam5, iParam13);
	}
	if (func_427(uParam0) != 0)
	{
		func_424(uParam0, iParam7);
	}
	iVar0 = func_356(uParam0);
	if (func_355(iVar0))
	{
		unk_0x813EA4BD19A19ED8();
		unk_0x356500C85E11485E(0);
	}
	else if (iVar0 != 0)
	{
		unk_0xFDD15D670AD33E10(func_357(uParam0, 0), 100f, 1, 0, 0, false);
		if (unk_0xDC5D81351D6A4DDB(*iParam4) && unk_0x7112137033807390(*iParam4, 0))
		{
			unk_0x4C842FAB634AC89E(iParam4);
		}
		if (!unk_0xDC5D81351D6A4DDB(*iParam4))
		{
			*iParam4 = unk_0x48CFBECB146FD1A1(iVar0, func_357(uParam0, 0), func_423(uParam0), 1, 1, 0);
			if (func_422(func_356(uParam0)))
			{
				unk_0xEA847E35BAC71F2A(*iParam4, 11);
			}
			else if (func_421(func_356(uParam0)))
			{
				unk_0x6202B241A8864FC2(*iParam4, 1, true);
				unk_0xEA847E35BAC71F2A(*iParam4, 6);
				unk_0x6EB2D9504928F849(*iParam4, 2);
				unk_0x3410E30103DD6B81(200f);
				unk_0xA45E1AA8B9CF45AD(*iParam4, 1000);
			}
			unk_0x98D1B1BD9C3AA456(*iParam4, 1, 1);
		}
		else if (!unk_0x7112137033807390(*iParam4, 0))
		{
			unk_0x9CBCA0C1A4935577(*iParam4);
			unk_0x4299736016AECE26(*iParam4, func_357(uParam0, 0), 1, 0, 0, 1);
			unk_0x92DDCF53AA47A63D(*iParam4, func_423(uParam0));
		}
		if (func_422(func_356(uParam0)))
		{
			if (unk_0xDC5D81351D6A4DDB(*iParam6) && unk_0x7112137033807390(*iParam6, 0))
			{
				unk_0x4C842FAB634AC89E(iParam6);
			}
			if (!unk_0xDC5D81351D6A4DDB(*iParam6))
			{
				*iParam6 = unk_0x48CFBECB146FD1A1(joaat("trflat"), unk_0x3201284584C7CD83(*iParam4, 0f, -10f, 0f), func_423(uParam0), 1, 1, 0);
				unk_0x98D1B1BD9C3AA456(*iParam6, 1, 1);
				unk_0xA45E1AA8B9CF45AD(*iParam6, 2000);
			}
			else if (!unk_0x7112137033807390(*iParam6, 0))
			{
				unk_0x9CBCA0C1A4935577(*iParam6);
			}
			if (!unk_0xD53D19F97BC843F7(*iParam4))
			{
				unk_0x1000CED8F8C4B6AB(*iParam4, *iParam6, 1065353216);
			}
		}
		if (unk_0xDC5D81351D6A4DDB(*iParam9) && unk_0x7112137033807390(*iParam9, 0))
		{
			unk_0x680F17660351F21B(iParam9);
		}
		if (!unk_0xDC5D81351D6A4DDB(*iParam9))
		{
			*iParam9 = unk_0x91A7C8CA5E332C03(*iParam4, 26, iParam11, -1, 1, true);
			unk_0x1F7948851FB36E88(*iParam9, true, 0);
			unk_0x1F4E5EFBFE503FB3(*iParam9, 1);
			func_420(*iParam9, iParam13);
			if (iParam13 == 0)
			{
				func_419(uParam1, 2, *iParam9, "EX3MERC1", 0, 1);
			}
		}
		else
		{
			unk_0x6259CDB47862A4F3(*iParam9, unk_0xD91DB46E38B776E5(*iParam9), 0);
			unk_0x921C58C1C5187C4B(*iParam9);
			unk_0x9568B1B58F78FF36(*iParam9);
			if (!unk_0xE0FD180CD24C0B67(*iParam9, *iParam4, 0) || unk_0xB0D49A1F9F054602(*iParam4, -1, 0) != *iParam9)
			{
				if (unk_0x5D7DFE2058701942(*iParam9, 1))
				{
					unk_0xFDF7EE94DCA5AD87(*iParam9, 1);
				}
				unk_0x692D5500D82E4F5D(*iParam9, *iParam4, -1);
			}
		}
		unk_0x98D1B1BD9C3AA456(*iParam9, 1, 1);
	}
	if (func_411() == 0)
	{
		unk_0x72A0FF8C49CFFC0D(unk_0xA19140A5C42D8715(), 9, 5, 0, 0);
	}
	else if (func_411() == 1)
	{
		unk_0x72A0FF8C49CFFC0D(unk_0xA19140A5C42D8715(), 8, 1, 0, 0);
	}
	else if (func_411() == 2)
	{
		unk_0x72A0FF8C49CFFC0D(unk_0xA19140A5C42D8715(), 8, 3, 0, 0);
	}
}

void func_419(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_420(int iParam0, int iParam1)
{
	if (unk_0x7112137033807390(iParam0, 0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			unk_0x72A0FF8C49CFFC0D(iParam0, 0, 1, 0, 0);
			unk_0x72A0FF8C49CFFC0D(iParam0, 3, 0, 0, 0);
			unk_0x72A0FF8C49CFFC0D(iParam0, 4, 0, 2, 0);
			unk_0x8757CF4763C139B6(iParam0, 0);
			unk_0x73774776D23F43BA(iParam0, 1, 1, 0, false);
			break;
		
		case 5:
			unk_0x72A0FF8C49CFFC0D(iParam0, 0, 0, 1, 0);
			unk_0x72A0FF8C49CFFC0D(iParam0, 2, 0, 1, 0);
			unk_0x72A0FF8C49CFFC0D(iParam0, 3, 1, 2, 0);
			unk_0x72A0FF8C49CFFC0D(iParam0, 4, 1, 1, 0);
			unk_0x8757CF4763C139B6(iParam0, 0);
			unk_0x8757CF4763C139B6(iParam0, 1);
			break;
		
		case 7:
			unk_0x72A0FF8C49CFFC0D(iParam0, 0, 0, 1, 0);
			unk_0x72A0FF8C49CFFC0D(iParam0, 3, 0, 2, 0);
			unk_0x72A0FF8C49CFFC0D(iParam0, 4, 0, 2, 0);
			unk_0x72A0FF8C49CFFC0D(iParam0, 8, 0, 1, 0);
			unk_0x73774776D23F43BA(iParam0, 0, 0, 2, false);
			break;
	}
}

int func_421(int iParam0)
{
	switch (iParam0)
	{
		case joaat("seashark"):
		case joaat("seashark2"):
		case joaat("dinghy"):
		case joaat("jetmax"):
		case joaat("marquis"):
		case joaat("squalo"):
		case joaat("suntrap"):
		case joaat("tropic"):
		case joaat("predator"):
			return 1;
		
		default:
	}
	return 0;
}

int func_422(int iParam0)
{
	switch (iParam0)
	{
		case joaat("hauler"):
		case joaat("biff"):
		case joaat("packer"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("phantom"):
		case joaat("pounder"):
			return 1;
		
		default:
	}
	return 0;
}

var func_423(var uParam0)
{
	return uParam0->f_77;
}

void func_424(var uParam0, int iParam1)
{
	if (!unk_0xDC5D81351D6A4DDB(*iParam1))
	{
		*iParam1 = unk_0x48CFBECB146FD1A1(func_427(uParam0), func_426(uParam0), func_425(uParam0), 1, 1, 0);
	}
	else if (unk_0x7112137033807390(*iParam1, 0))
	{
		unk_0x4C842FAB634AC89E(iParam1);
		*iParam1 = unk_0x48CFBECB146FD1A1(func_427(uParam0), func_426(uParam0), func_425(uParam0), 1, 1, 0);
	}
	else
	{
		unk_0x9CBCA0C1A4935577(*iParam1);
	}
}

var func_425(var uParam0)
{
	return uParam0->f_79;
}

Vector3 func_426(var uParam0)
{
	return uParam0->f_9;
}

int func_427(var uParam0)
{
	return uParam0->f_3;
}

void func_428(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xDC5D81351D6A4DDB(*uParam1))
	{
		if (!func_314(*uParam1) && unk_0xDC5D81351D6A4DDB(unk_0xB0D49A1F9F054602(*uParam1, -1, 0)))
		{
			iVar1 = unk_0xB0D49A1F9F054602(*uParam1, -1, 0);
		}
		iVar2 = *uParam1;
	}
	iVar0 = func_431(iParam2);
	if (iVar0 != 0)
	{
		if (!unk_0xDC5D81351D6A4DDB(iVar2))
		{
			iVar2 = unk_0x48CFBECB146FD1A1(func_514(uParam0), func_430(uParam0), func_429(uParam0), 1, 1, 0);
		}
		else
		{
			unk_0x4299736016AECE26(iVar2, func_430(uParam0), 1, 0, 0, 1);
			unk_0x92DDCF53AA47A63D(iVar2, func_429(uParam0));
		}
		unk_0xB29E08C7AB729BAD(iVar2, true);
		if (!unk_0xDC5D81351D6A4DDB(iVar1))
		{
			iVar1 = unk_0x91A7C8CA5E332C03(iVar2, 26, iVar0, -1, 1, true);
		}
		unk_0x241F3D2BEEB0124B(iVar1, 0);
		func_438(iVar1, iParam2);
	}
	else
	{
		if (!unk_0xDC5D81351D6A4DDB(iVar2))
		{
			iVar2 = unk_0x48CFBECB146FD1A1(func_514(uParam0), func_430(uParam0), func_429(uParam0), 1, 1, 0);
		}
		else
		{
			unk_0x4299736016AECE26(iVar2, func_430(uParam0), 1, 0, 0, 1);
			unk_0x92DDCF53AA47A63D(iVar2, func_429(uParam0));
		}
		unk_0xB29E08C7AB729BAD(iVar2, true);
		if (!unk_0xDC5D81351D6A4DDB(iVar1))
		{
			iVar1 = unk_0x91A7C8CA5E332C03(iVar2, 26, joaat("s_m_y_pilot_01"), -1, 1, true);
		}
		unk_0x241F3D2BEEB0124B(iVar1, 0);
		unk_0x73774776D23F43BA(iVar1, 0, 2, 0, false);
		unk_0x73774776D23F43BA(iVar1, 1, 0, 0, false);
	}
	unk_0xC19EDC1D7179164C(iVar2, true, 1, 0);
	unk_0xCDB02C039175DA49(iVar2, 0.7f);
	unk_0x9568B1B58F78FF36(iVar1);
	unk_0xB3E1967E66494060(iVar1, -1);
	*uParam1 = iVar2;
}

var func_429(var uParam0)
{
	return uParam0->f_78;
}

Vector3 func_430(var uParam0)
{
	return uParam0->f_70;
}

int func_431(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("s_m_y_pilot_01");
		
		case 1:
			return joaat("s_m_y_pilot_01");
		
		case 2:
			return joaat("s_m_y_pilot_01");
		
		case 3:
			return joaat("s_m_y_pilot_01");
		
		case 7:
			return joaat("a_m_y_hippy_01");
		
		case 9:
			return joaat("s_m_y_pilot_01");
		
		case 10:
			return joaat("s_m_y_pilot_01");
		
		case 11:
			return joaat("a_m_m_genfat_02");
		
		default:
	}
	return 0;
}

int func_432(int iParam0, int iParam1)
{
	if (!unk_0x7112137033807390(iParam0, 0) && !unk_0x7112137033807390(iParam1, 0))
	{
		if (unk_0xB10F7FE89663CB5B(iParam0, iParam1))
		{
			if (unk_0xB0D49A1F9F054602(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0xB0D49A1F9F054602(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0xB0D49A1F9F054602(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0xB0D49A1F9F054602(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

void func_433(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = func_434();
	if (!unk_0x4915F4759304D5CF(iParam1))
	{
		func_419(uParam0, iVar0, iParam1, sParam2, 1, 1);
	}
	else
	{
		func_419(uParam0, iVar0, 0, sParam2, 0, 1);
	}
}

int func_434()
{
	if (func_411() == 1)
	{
		return 2;
	}
	if (func_411() == 2)
	{
		return 3;
	}
	return 1;
}

char* func_435()
{
	int iVar0;
	
	iVar0 = func_35(unk_0xA19140A5C42D8715());
	switch (iVar0)
	{
		case 0:
			return "MICHAEL";
		
		case 2:
			return "TREVOR";
		
		case 1:
			return "FRANKLIN";
		
		default:
	}
	return "";
}

void func_436(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (!unk_0x4915F4759304D5CF(iParam1))
	{
		func_419(uParam0, iVar0, iParam1, sParam2, 1, 1);
	}
	else
	{
		func_419(uParam0, iVar0, 0, sParam2, 0, 1);
	}
}

char* func_437(int iParam0)
{
	return "EXT1HELIPILOT";
}

void func_438(int iParam0, int iParam1)
{
	if (unk_0x7112137033807390(iParam0, 0))
	{
		return;
	}
	switch (iParam1)
	{
		case 7:
			unk_0x72A0FF8C49CFFC0D(iParam0, 0, 0, 1, 0);
			unk_0x72A0FF8C49CFFC0D(iParam0, 2, 1, 0, 0);
			unk_0x72A0FF8C49CFFC0D(iParam0, 3, 0, 0, 0);
			unk_0x72A0FF8C49CFFC0D(iParam0, 4, 0, 0, 0);
			unk_0x72A0FF8C49CFFC0D(iParam0, 8, 1, 0, 0);
			unk_0x73774776D23F43BA(iParam0, 1, 0, 0, false);
			break;
		
		case 11:
			unk_0x72A0FF8C49CFFC0D(iParam0, 0, 1, 0, 0);
			unk_0x72A0FF8C49CFFC0D(iParam0, 2, 2, 0, 0);
			unk_0x72A0FF8C49CFFC0D(iParam0, 3, 1, 0, 0);
			unk_0x72A0FF8C49CFFC0D(iParam0, 4, 0, 2, 0);
			unk_0x73774776D23F43BA(iParam0, 0, 1, 2, false);
			unk_0x73774776D23F43BA(iParam0, 1, 1, 0, false);
			break;
	}
}

Vector3 func_439(var uParam0)
{
	return uParam0->f_67;
}

Vector3 func_440(var uParam0)
{
	return uParam0->f_64;
}

void func_441(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

int func_442(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	char cVar0[64];
	
	if (!func_448(func_449(iParam3)))
	{
		unk_0x9DD14AD9D3FAB583(func_456(iParam3));
	}
	if (func_445(iParam1))
	{
		if (func_444(iParam1) >= 5f)
		{
			return 1;
		}
	}
	else
	{
		func_330(iParam1, 0f);
	}
	if (unk_0x71364F510A1CB69F())
	{
		if (!unk_0xD3512CB88BB3513F())
		{
			return 0;
		}
	}
	if (func_448(func_449(iParam3)))
	{
		if (!unk_0x39C2D9AB77873F84("veh@helicopter@rps@base"))
		{
			return 0;
		}
	}
	if (func_409(iParam3, 0) > 0f)
	{
		switch (iParam4)
		{
			case 0:
				StringCopy(&cVar0, "amb@world_human_hiker_standing@male@idle_a", 64);
				break;
			
			case 1:
				StringCopy(&cVar0, "amb@world_human_muscle_flex@arms_at_side@base", 64);
				break;
			
			case 2:
				StringCopy(&cVar0, "playidles_cold", 64);
				break;
		}
		if (!unk_0x39C2D9AB77873F84(&cVar0))
		{
			return 0;
		}
	}
	if (func_443(uParam0))
	{
		if (unk_0x0FA486DE15EB3004(*uParam2))
		{
			if (unk_0xD744813D9841CA9A(2))
			{
				if (unk_0x87DF091EDFE6D083("basejumping"))
				{
					if (((unk_0x39C2D9AB77873F84("oddjobs@basejump@") && unk_0x39C2D9AB77873F84("skydive@freefall")) && unk_0x39C2D9AB77873F84("skydive@parachute@chute")) && unk_0x39C2D9AB77873F84("skydive@parachute@"))
					{
						if (unk_0x715EA6F049E0AB94(0))
						{
							if (!bParam5 || unk_0x71364F510A1CB69F())
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_443(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0x7FC99CCC73354033((*uParam0)[iVar0]))
			{
				if (!unk_0x7FC99CCC73354033((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

float func_444(int iParam0)
{
	if (func_445(iParam0))
	{
		if (func_342(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_41(unk_0x05EFB6A616B6FADE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

bool func_445(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(*iParam0, 1);
}

Vector3 func_446(vector3 vParam0, float fParam1)
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

float func_447(var uParam0)
{
	return uParam0->f_76;
}

int func_448(int iParam0)
{
	switch (iParam0)
	{
		case joaat("annihilator"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("polmav"):
		case joaat("skylift"):
			return 1;
		
		default:
	}
	return 0;
}

int func_449(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 7:
		case 9:
		case 10:
		case 11:
			return joaat("maverick");
			break;
		
		case 4:
			return joaat("bati");
			break;
	}
	return 0;
}

void func_450(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	
	func_26(1);
	unk_0x578D0810E6A7D73C(0);
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0x82416ADE738F7F1F(unk_0xA19140A5C42D8715(), 2f);
	}
	switch (iParam1)
	{
		case 0:
			unk_0xF66A39BBE7B3C278(-901.2005f, 4422.489f, 19.3471f, -906.842f, 4424.97f, 300.017f, 0, 1, 1, 1);
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 5:
			break;
		
		case 6:
			break;
		
		case 7:
			break;
		
		case 8:
			func_455(1, 1);
			break;
		
		case 9:
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	if (unk_0x71364F510A1CB69F())
	{
		unk_0xFDD15D670AD33E10(func_456(iParam1), 5000f, 1, 0, 0, false);
	}
	unk_0x6A633E13B2A856AE("BJUMP", 2);
	iVar0 = func_449(iParam1);
	if (iVar0 != 0)
	{
		if (func_448(iVar0))
		{
			unk_0x6D68030C791111E0("veh@helicopter@rps@base");
			*uParam3 = func_431(iParam1);
			func_453(uParam2, *uParam3);
		}
		func_453(uParam2, iVar0);
	}
	if (func_514(uParam0) != 0)
	{
		func_453(uParam2, func_514(uParam0));
		if (func_431(iParam1) != 0)
		{
			func_453(uParam2, func_431(iParam1));
		}
		else
		{
			func_453(uParam2, joaat("s_m_y_pilot_01"));
		}
	}
	iVar1 = func_356(uParam0);
	if (iVar1 != 0)
	{
		*uParam4 = func_452(iParam1);
		func_453(uParam2, *uParam4);
		func_453(uParam2, iVar1);
		func_453(uParam2, joaat("trflat"));
	}
	if (func_355(iVar1))
	{
		func_453(uParam2, joaat("freight"));
		func_453(uParam2, joaat("freightcar"));
		func_453(uParam2, joaat("freightgrain"));
		func_453(uParam2, joaat("freightcont1"));
		func_453(uParam2, joaat("freightcont2"));
		func_453(uParam2, joaat("tankercar"));
		func_453(uParam2, 868868440);
	}
	if (func_427(uParam0) != 0)
	{
		func_453(uParam2, func_427(uParam0));
	}
	*uParam5 = func_161();
	func_451(uParam2);
	unk_0x6D68030C791111E0("oddjobs@basejump@");
	unk_0x6D68030C791111E0("skydive@freefall");
	unk_0x6D68030C791111E0("skydive@parachute@chute");
	unk_0x6D68030C791111E0("skydive@parachute@");
	unk_0x8000C77B5F336760("basejumping", false);
	if (func_409(iParam1, 0) > 0f)
	{
		*uParam6 = unk_0x22C775856F4633CA(0, 2);
		switch (*uParam6)
		{
			case 0:
				unk_0x6D68030C791111E0("amb@world_human_hiker_standing@male@idle_a");
				break;
			
			case 1:
				unk_0x6D68030C791111E0("amb@world_human_muscle_flex@arms_at_side@base");
				break;
			}
	}
	if (func_449(iParam1) == 0)
	{
		unk_0x9DD14AD9D3FAB583(func_456(iParam1));
	}
}

void func_451(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0xCACEBBBEAD8F262E((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_452(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("a_m_y_beach_01");
		
		case 5:
			return joaat("s_m_m_trucker_01");
		
		case 7:
			return joaat("a_m_y_beach_01");
		
		default:
	}
	return 0;
}

int func_453(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_454(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_454(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_455(int iParam0, int iParam1)
{
	unk_0x2BCFB39E86340DAA(&Global_25617, iParam0);
	StringCopy(&(Global_25618[iParam0 /*6*/]), unk_0x61D2332983ACC05C(), 24);
	Global_25673[iParam0] = iParam1;
}

Vector3 func_456(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1152.053f, -1857.884f, 204.0663f;
		
		case 1:
			return 885.114f, -437.352f, 529.867f;
		
		case 2:
			return 2034.912f, 1971.051f, 582.7461f;
		
		case 3:
			return 409.7498f, 5703.525f, 695.17f;
		
		case 4:
			return -74.9632f, -827.4467f, 324.9521f;
		
		case 5:
			return -117.6998f, -975.571f, 295f;
		
		case 6:
			return -1243.784f, 4534.163f, 184.8471f;
		
		case 7:
			return -359.1f, 4119.5f, 304.1f;
		
		case 8:
			return -807.073f, 330.8846f, 232.6766f;
		
		case 9:
			return -1286.99f, 3668.922f, 1072.466f;
		
		case 10:
			return 1018.441f, 3956.706f, 1354f;
		
		case 11:
			return 1627.196f, -421.7584f, 1321.484f;
		
		case 12:
			return -766.5999f, 4334.805f, 147.1205f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_457(int iParam0)
{
	if (unk_0x71364F510A1CB69F())
	{
		if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), func_456(iParam0), 15f, 15f, 15f, 0, 1, 0))
		{
			return 1;
		}
		unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), func_456(iParam0), 0, 0, 0, 1);
		if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), func_456(iParam0), 15f, 15f, 15f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_458(vector3 vParam0)
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

Vector3 func_459(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -21.7965f, -0.0328f, 70.0438f;
		
		case 1:
			return -26.5541f, 0.0092f, -86.4416f;
		
		case 2:
			return -11.2825f, 0.0213f, 148.5283f;
		
		case 3:
			return -39.935f, 0f, 12.8174f;
		
		case 4:
			return 0.9749f, 0f, -5.2236f;
		
		case 5:
			return -12.889f, 0f, 1.6227f;
		
		case 6:
			return -48.5605f, 0f, 160.4909f;
		
		case 7:
			return -37.0509f, 0.0324f, 24.0288f;
		
		case 8:
			return -17.4118f, 0f, 117.7175f;
		
		case 9:
			return -15.4633f, 0.0328f, -5.1142f;
		
		case 10:
			return -20.9567f, 0f, 170.5743f;
		
		case 11:
			return 1.9344f, 0f, -55.2084f;
		
		case 12:
			return -46.0342f, 0f, 37.5935f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_460(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	
	vVar0 = { func_468(uParam1) };
	vVar1 = { func_467(uParam1) };
	fVar2 = func_466(uParam1);
	if (!unk_0x37B568B777BC65F9(func_416(uParam0, 0)))
	{
		func_465(uParam0, 0, unk_0x74677C414DD7F53C(26379945, vVar0, vVar1, 65f, 0, 2), 1);
	}
	else
	{
		unk_0x057123F3A835FE47(func_416(uParam0, 0), vVar0);
		unk_0xC831502E35848BE4(func_416(uParam0, 0), vVar1, 2);
	}
	unk_0xF62A5A3CB8DB2402(func_416(uParam0, 0), fVar2);
	unk_0x930701157A4B9374(func_416(uParam0, 0), true);
	if (bParam3)
	{
		vVar3 = { vVar0 };
		vVar3.z = (vVar3.z + 8f);
		unk_0x1D7183E3760DB4E5(func_416(uParam0, 0), vVar3, vVar1, fVar2, func_464(iParam2), 1, 1, 2);
	}
	vVar0 = { func_463(uParam1) };
	vVar1 = { func_462(uParam1) };
	fVar2 = func_461(uParam1);
	if (!unk_0x37B568B777BC65F9(func_416(uParam0, 1)))
	{
		func_465(uParam0, 1, unk_0x74677C414DD7F53C(26379945, vVar0, vVar1, 65f, 0, 2), 1);
	}
	else
	{
		unk_0x057123F3A835FE47(func_416(uParam0, 1), vVar0);
		unk_0xC831502E35848BE4(func_416(uParam0, 1), vVar1, 2);
	}
	unk_0xF62A5A3CB8DB2402(func_416(uParam0, 1), fVar2);
	if (!unk_0x71364F510A1CB69F())
	{
		unk_0xD21CD2A6F93F44A6(func_416(uParam0, 1), func_416(uParam0, 0), func_464(iParam2), 1, 1);
	}
	unk_0x8E88E73F74A9FF79(true, 0, 3000, 1, 0, 0);
	unk_0xB9C8D26C759B93D1("HAND_SHAKE", 0.2f);
	unk_0xDC374DA4DC566237(false);
	unk_0x85685830EFB9A55E(false);
}

float func_461(var uParam0)
{
	return uParam0->f_82;
}

Vector3 func_462(var uParam0)
{
	return uParam0->f_58;
}

Vector3 func_463(var uParam0)
{
	return uParam0->f_55;
}

int func_464(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 12:
			return 6000;
			break;
	}
	return 10000;
}

void func_465(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 >= 2)
	{
		return;
	}
	if (iParam3 && !unk_0x37B568B777BC65F9(iParam2))
	{
		return;
	}
	(*uParam0)[iParam1] = iParam2;
}

var func_466(var uParam0)
{
	return uParam0->f_81;
}

Vector3 func_467(var uParam0)
{
	return uParam0->f_52;
}

Vector3 func_468(var uParam0)
{
	return uParam0->f_49;
}

void func_469(int iParam0)
{
	if (!func_445(iParam0))
	{
		func_359(iParam0);
	}
}

void func_470(vector3 vParam0, float fParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_295(&(Global_70024.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x499324B3EF19C288(vParam0, Global_70024.f_555[0 /*21*/], bParam2) <= fParam1)
			{
				func_471(iVar0);
			}
		}
		iVar0++;
	}
}

void func_471(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_295(&(Global_70024.f_555[0 /*21*/]), iParam0))
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
			if (((((iParam0 == 24 && func_301(iParam0, 0)) && Global_70933.f_66 == 0) && Global_106070.f_32605.f_1958[Global_70024.f_555[0 /*21*/].f_14] != 0) && Global_106070.f_32605.f_1958[Global_70024.f_555[0 /*21*/].f_14] > 3) && (!func_472(0, Global_70024.f_555[0 /*21*/].f_12) || !func_472(1, Global_70024.f_555[0 /*21*/].f_12)))
			{
				func_302(&(Global_106070.f_32605.f_69[Global_70024.f_555[0 /*21*/].f_14 /*78*/]), &Global_70933);
				Global_71011 = Global_106070.f_32605.f_5591;
			}
			func_299(iParam0, 0);
		}
	}
}

int func_472(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_473(&(Global_106070.f_32605.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_279(Global_106070.f_32605.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_473(var uParam0)
{
	return *uParam0;
}

void func_474(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_104710 && iParam1)
	{
		if (func_325(sParam0) && !unk_0xAFDDC5FA1BD87C18())
		{
			unk_0x135C61E339DABBAC(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_106070.f_20382.f_145)
	{
		if (unk_0x3CAC2741CC1A631F(sParam0, &(Global_106070.f_20382[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_106070.f_20382.f_145 - 2))
			{
				func_477(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_476((Global_106070.f_20382.f_145 - 1));
			Global_106070.f_20382.f_145 = (Global_106070.f_20382.f_145 - 1);
			func_475();
			return;
		}
		iVar0++;
	}
}

void func_475()
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

void func_476(int iParam0)
{
	StringCopy(&(Global_106070.f_20382[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_106070.f_20382[iParam0 /*16*/].f_4), "", 16);
	Global_106070.f_20382[iParam0 /*16*/].f_8 = 0;
	Global_106070.f_20382[iParam0 /*16*/].f_9 = 0;
	Global_106070.f_20382[iParam0 /*16*/].f_11 = 0;
	Global_106070.f_20382[iParam0 /*16*/].f_10 = -1;
	Global_106070.f_20382[iParam0 /*16*/].f_12 = 0;
	Global_106070.f_20382[iParam0 /*16*/].f_13 = 0;
	Global_106070.f_20382[iParam0 /*16*/].f_14 = 0;
	Global_106070.f_20382[iParam0 /*16*/].f_15 = 0;
}

void func_477(int iParam0, int iParam1)
{
	Global_106070.f_20382[iParam0 /*16*/] = { Global_106070.f_20382[iParam1 /*16*/] };
	Global_106070.f_20382[iParam0 /*16*/].f_4 = { Global_106070.f_20382[iParam1 /*16*/].f_4 };
	Global_106070.f_20382[iParam0 /*16*/].f_8 = Global_106070.f_20382[iParam1 /*16*/].f_8;
	Global_106070.f_20382[iParam0 /*16*/].f_10 = Global_106070.f_20382[iParam1 /*16*/].f_10;
	Global_106070.f_20382[iParam0 /*16*/].f_9 = Global_106070.f_20382[iParam1 /*16*/].f_9;
	Global_106070.f_20382[iParam0 /*16*/].f_11 = Global_106070.f_20382[iParam1 /*16*/].f_11;
	Global_106070.f_20382[iParam0 /*16*/].f_12 = Global_106070.f_20382[iParam1 /*16*/].f_12;
	Global_106070.f_20382[iParam0 /*16*/].f_13 = Global_106070.f_20382[iParam1 /*16*/].f_13;
	Global_106070.f_20382[iParam0 /*16*/].f_14 = Global_106070.f_20382[iParam1 /*16*/].f_14;
	Global_106070.f_20382[iParam0 /*16*/].f_15 = Global_106070.f_20382[iParam1 /*16*/].f_15;
}

void func_478(bool bParam0)
{
	if (bParam0)
	{
		unk_0xC1D3387D1E48090E(0);
		unk_0xDD63978CC283FA2D(1);
		unk_0x95DFD5DB6041DFE5(0);
		func_17(1);
		Global_88585 = 1;
	}
	else
	{
		unk_0xC1D3387D1E48090E(1);
		unk_0xDD63978CC283FA2D(0);
		unk_0x95DFD5DB6041DFE5(1);
		func_17(0);
		Global_88585 = 0;
	}
}

void func_479()
{
	func_480(&uLocal_105, 0);
}

void func_480(var uParam0, int iParam1)
{
	if (uParam0->f_4 != 0)
	{
		func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if ((((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0) || iParam1 == 1)
	{
		func_484(uParam0);
		func_483(uParam0);
		func_117(&Global_1839723);
	}
	if (Global_1835392.f_2708 != 0 || Global_1835392.f_3184)
	{
		func_481();
	}
	if (unk_0x2F8EAF18929E1E59("LEADERBOARD_SCENE"))
	{
		unk_0x5AD7D03C214BDA88("LEADERBOARD_SCENE");
	}
	if (unk_0x18F86E07E41D913F())
	{
		func_88(&(Global_1840924.f_49));
	}
	Global_2524719.f_3954 = 0;
}

void func_481()
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_1835392[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_1835392.f_2704[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2708 = 0;
	Global_1835392.f_2709 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1835392.f_2710[iVar0] = 0;
		StringCopy(&(Global_1835392.f_2717[iVar0 /*6*/]), "", 24);
		Global_1835392.f_2754[iVar0] = 0;
		Global_1835392.f_2761[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2768 = 0;
	Global_1835392.f_2769 = 0;
	Global_1835392.f_2770 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835392.f_2771[iVar0] = 0;
		Global_1835392.f_2775[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2779 = 0;
	func_482(&(Global_1835392.f_2780));
	func_88(&(Global_1835392.f_2823));
	Global_1835392.f_2825 = -1;
	Global_1835392.f_2826 = 0;
	func_88(&(Global_1835392.f_2827));
	Global_1835392.f_2829 = 0;
	func_88(&(Global_1835392.f_2830));
	Global_1835392.f_2832 = 0;
	Global_1835392.f_2780.f_28 = 0;
	Global_1835392.f_2780.f_27 = 0;
	Global_1835392.f_3184 = 0;
}

void func_482(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_25 = 1;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_29[iVar0] = 0;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_483(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_88(&(uParam0->f_246.f_3));
	uParam0->f_246.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_246.f_6[iVar0 /*15*/] = -1;
		uParam0->f_246.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_246.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_246.f_187[iVar0] = 0;
		iVar0++;
	}
}

void func_484(var uParam0)
{
	int iVar0;
	struct<35> Var1;
	
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_44.f_1 = 0;
	uParam0->f_44.f_2 = 0;
	uParam0->f_44.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_113[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

void func_485()
{
	Global_17228.f_5 = 1;
}

void func_486(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 < 11)
	{
		if (!func_251(uParam0, 19))
		{
			if ((iParam1 == 4 && !bParam3) && (unk_0x3A83743561B4F70C() || unk_0x3BE8B7AEED1A3971()))
			{
				if (func_488(func_489(iParam2, 19), "", &(uParam0->f_603), 19))
				{
				}
			}
		}
		if (!func_251(uParam0, 20))
		{
			if (iParam1 > 4)
			{
				if (func_488(func_489(iParam2, 20), func_489(iParam2, 19), &(uParam0->f_603), 20))
				{
				}
			}
		}
		else if (!func_251(uParam0, 21))
		{
			if (iParam1 == 9)
			{
				if (func_488(func_489(iParam2, 21), func_489(iParam2, 20), &(uParam0->f_603), 21))
				{
				}
			}
			else if (iParam1 == 8)
			{
				if (func_488(func_489(iParam2, 21), func_489(iParam2, 20), &(uParam0->f_603), 21))
				{
				}
			}
		}
		else if (!func_251(uParam0, 22))
		{
			if (iParam1 == 9)
			{
				iVar0 = unk_0xFCD57A307851D560(unk_0xA19140A5C42D8715());
				if (iVar0 == 1 || iVar0 == 2)
				{
					if (func_488(func_489(iParam2, 22), func_489(iParam2, 21), &(uParam0->f_603), 22))
					{
					}
				}
			}
		}
		else if (iParam1 == 10 && !func_251(uParam0, 23))
		{
			func_487(func_489(iParam2, 22), &(uParam0->f_603), 23);
		}
		else if (!func_251(uParam0, 23) && !unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			unk_0xD5F220F24F05898F();
		}
	}
}

void func_487(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x05EFB6A616B6FADE(*iParam1, iParam2))
	{
		unk_0x5AD7D03C214BDA88(sParam0);
		unk_0x2BCFB39E86340DAA(iParam1, iParam2);
	}
}

int func_488(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!unk_0x429D45A6C6520026(sParam1))
	{
		if (unk_0x2F8EAF18929E1E59(sParam1))
		{
			unk_0x5AD7D03C214BDA88(sParam1);
		}
	}
	if (!unk_0x05EFB6A616B6FADE(*iParam2, iParam3))
	{
		if (unk_0x8969D02DEDC106D2(sParam0))
		{
			unk_0x2BCFB39E86340DAA(iParam2, iParam3);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

char* func_489(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam1)
	{
		case 19:
			return "BASEJUMPS_OVERVIEW_CUTSCENE";
		
		case 20:
			if (func_448(func_449(iParam0)))
			{
				sVar0 = "BASEJUMPS_PREP_FOR_JUMP_HELI";
			}
			else if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && func_353(unk_0x8F474E419F56E48D(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0))))
			{
				sVar0 = "BASEJUMPS_PREP_FOR_JUMP_MOTO";
			}
			else
			{
				sVar0 = "BASEJUMPS_PREP_FOR_JUMP_ON_FOOT";
			}
			return sVar0;
		
		case 21:
			return "BASEJUMPS_SKYDIVE";
		
		case 22:
			return "BASEJUMPS_OPEN_PARACHUTE";
		
		default:
	}
	return "";
}

void func_490(var uParam0, int iParam1)
{
	if (iParam1 < 11)
	{
		if (!func_251(uParam0, 15))
		{
			if (iParam1 >= 4 && (unk_0x3A83743561B4F70C() || unk_0x3BE8B7AEED1A3971()))
			{
				if (func_492(func_493(11), &(uParam0->f_603), 11))
				{
					func_491(func_493(15), &(uParam0->f_603), 15);
				}
			}
		}
		else if (!func_251(uParam0, 16))
		{
			if (iParam1 == 9)
			{
				if (func_492(func_493(12), &(uParam0->f_603), 12))
				{
					func_491(func_493(16), &(uParam0->f_603), 16);
				}
			}
			else if (iParam1 == 8)
			{
				if (func_492(func_493(12), &(uParam0->f_603), 12))
				{
					func_491(func_493(16), &(uParam0->f_603), 16);
				}
			}
		}
		else if (iParam1 == 10 && !func_251(uParam0, 17))
		{
			if (func_492(func_493(13), &(uParam0->f_603), 13))
			{
				func_491(func_493(17), &(uParam0->f_603), 17);
			}
		}
	}
}

int func_491(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x05EFB6A616B6FADE(*iParam1, iParam2))
	{
		if (unk_0x7B5129A25EE58E36(sParam0))
		{
			if (unk_0x9444470D6D9ADB88(sParam0))
			{
				unk_0x2BCFB39E86340DAA(iParam1, iParam2);
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_492(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x05EFB6A616B6FADE(*iParam1, iParam2))
	{
		if (unk_0x7B5129A25EE58E36(sParam0))
		{
			unk_0x2BCFB39E86340DAA(iParam1, iParam2);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

char* func_493(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 11:
			return "OJBJ_START";
		
		case 16:
		case 12:
			return "OJBJ_JUMPED";
		
		case 17:
		case 13:
			return "OJBJ_LANDED";
		
		case 18:
		case 14:
			return "OJBJ_STOP";
		
		default:
	}
	return "";
}

void func_494(var uParam0)
{
	struct<2> Var0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	unk_0xDB3170D9CA83AF72(0);
	unk_0xDB3170D9CA83AF72(2);
	func_501(&uVar1, &uVar2, &iVar3, &iVar4, unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()), unk_0x0B9F814BC8D14042(2));
	Var0 = (to_float(iVar3) / 128f);
	Var0.f_1 = (to_float(iVar4) / -128f);
	func_498(uParam0, Var0, Var0.f_1);
	func_497(uParam0);
	if (unk_0xD73B1037F6BD4B90(2, 224))
	{
		func_496(uParam0, 0, 1);
	}
	if (unk_0xD73B1037F6BD4B90(0, 22) || unk_0x1190AB7024CBD8CB(0, 22))
	{
		func_496(uParam0, 1, 1);
	}
	if (func_495())
	{
		func_496(uParam0, 2, 1);
	}
	if (unk_0x1190AB7024CBD8CB(2, 22))
	{
		func_496(uParam0, 3, 1);
	}
	if (unk_0xD73B1037F6BD4B90(2, 216))
	{
		func_496(uParam0, 4, 1);
	}
	if (unk_0xD73B1037F6BD4B90(2, 215) || unk_0x1190AB7024CBD8CB(2, 200))
	{
		func_496(uParam0, 5, 1);
	}
	if (unk_0xD73B1037F6BD4B90(2, 201))
	{
		func_496(uParam0, 6, 1);
	}
	if (unk_0xD73B1037F6BD4B90(2, 202))
	{
		func_496(uParam0, 7, 1);
	}
	if (unk_0xD73B1037F6BD4B90(2, 211))
	{
		func_496(uParam0, 8, 1);
	}
}

int func_495()
{
	if (unk_0xD1ABB20CFF127CCC())
	{
		return 0;
	}
	if (unk_0xD73B1037F6BD4B90(0, 18) || unk_0xD73B1037F6BD4B90(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_496(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0x2BCFB39E86340DAA(&(uParam0->f_2), iParam1);
	}
	else
	{
		unk_0xFA57C719261AA55D(&(uParam0->f_2), iParam1);
	}
}

void func_497(var uParam0)
{
	uParam0->f_3 = uParam0->f_2;
	uParam0->f_2 = 0;
}

void func_498(var uParam0, var uParam1, var uParam2)
{
	func_500(uParam0, uParam1);
	func_499(uParam0, uParam2);
}

void func_499(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1;
}

void func_500(var uParam0, var uParam1)
{
	*uParam0 = uParam1;
}

void func_501(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (bParam5 == 0)
	{
		if (bParam4)
		{
			fVar0 = unk_0x418992ECF9808661(0, 218);
			fVar1 = unk_0x418992ECF9808661(0, 219);
			fVar2 = unk_0x418992ECF9808661(0, 220);
			fVar3 = unk_0x418992ECF9808661(0, 221);
		}
		else
		{
			fVar0 = unk_0x8CBB8AEBE6D8962B(0, 218);
			fVar1 = unk_0x8CBB8AEBE6D8962B(0, 219);
			fVar2 = unk_0x8CBB8AEBE6D8962B(0, 220);
			fVar3 = unk_0x8CBB8AEBE6D8962B(0, 221);
		}
	}
	else if (bParam4)
	{
		fVar0 = unk_0xB641B72602719CC8(0, 218);
		fVar1 = unk_0xB641B72602719CC8(0, 219);
		fVar2 = unk_0xB641B72602719CC8(0, 220);
		fVar3 = unk_0xB641B72602719CC8(0, 221);
	}
	else
	{
		fVar0 = unk_0xFD229B5CB86E0CC4(0, 218);
		fVar1 = unk_0xFD229B5CB86E0CC4(0, 219);
		fVar2 = unk_0xFD229B5CB86E0CC4(0, 220);
		fVar3 = unk_0xFD229B5CB86E0CC4(0, 221);
	}
	*uParam0 = round((128f * fVar0));
	*uParam1 = round((128f * fVar1));
	*uParam2 = round((128f * fVar2));
	*uParam3 = round((128f * fVar3));
}

void func_502()
{
	unk_0xD481A812073CCF02(0, 81, 1);
	unk_0xD481A812073CCF02(0, 82, 1);
	unk_0xD481A812073CCF02(0, 85, 1);
	unk_0xD481A812073CCF02(0, 37, 1);
	unk_0xD481A812073CCF02(0, 12, 1);
	unk_0xD481A812073CCF02(0, 13, 1);
	unk_0xD481A812073CCF02(0, 14, 1);
	unk_0xD481A812073CCF02(0, 15, 1);
	unk_0xD481A812073CCF02(0, 16, 1);
	unk_0xD481A812073CCF02(0, 17, 1);
	unk_0xD481A812073CCF02(0, 25, 1);
	unk_0xD481A812073CCF02(0, 24, 1);
	unk_0xD481A812073CCF02(0, 50, 1);
	unk_0xD481A812073CCF02(0, 53, 1);
	unk_0xD481A812073CCF02(0, 54, 1);
	unk_0xD8C147DA332E7F06(19);
	unk_0xD8C147DA332E7F06(2);
	unk_0xD8C147DA332E7F06(14);
	unk_0xD8C147DA332E7F06(16);
	unk_0xD8C147DA332E7F06(6);
	unk_0xD8C147DA332E7F06(7);
	unk_0xD8C147DA332E7F06(8);
	unk_0xD8C147DA332E7F06(9);
}

var func_503()
{
	var uVar0;
	
	func_513(&uVar0, unk_0xC5B07C33AC7BB174());
	func_512(&uVar0, unk_0x65DA628D62901275());
	func_511(&uVar0, unk_0x34CEB9721AC6A0A9());
	func_506(&uVar0, unk_0xC9A0B68BA813CF99());
	func_505(&uVar0, unk_0x897D202BD69186D5());
	func_504(&uVar0, unk_0x56EBDF0E39D83471());
	return uVar0;
}

void func_504(var uParam0, int iParam1)
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

void func_505(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_506(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_510(*uParam0);
	iVar1 = func_508(*uParam0);
	if (iParam1 < 1 || iParam1 > func_507(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_507(int iParam0, int iParam1)
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

var func_508(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_509(unk_0x05EFB6A616B6FADE(iParam0, 31), -1, 1)) + 2011;
}

int func_509(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_510(var uParam0)
{
	return uParam0 & 15;
}

void func_511(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_512(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_513(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_514(var uParam0)
{
	return uParam0->f_2;
}

void func_515(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_35(unk_0xA19140A5C42D8715());
	switch (iParam1)
	{
		case 0:
			func_540(uParam0, 125);
			func_539(uParam0, joaat("squalo"));
			func_538(uParam0, 41.0737f);
			func_537(uParam0, 0);
			func_536(uParam0, 0f, 0f, 0f);
			func_535(uParam0, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0, -1039.712f, -1731.145f, 1f);
			func_529(uParam0, 317.8872f);
			func_528(uParam0, 0f, -2f, 0f);
			func_527(uParam0, "BJ_01P");
			func_525(uParam0, func_526(0));
			func_524(uParam0, func_459(0));
			func_523(uParam0, 53.4142f);
			func_522(uParam0, -1151.402f, -1864.369f, 214.9385f);
			func_521(uParam0, -55.1298f, -0.0328f, -19.7985f);
			func_520(uParam0, 39.6124f);
			func_519(uParam0, 0);
			func_518(uParam0, 0);
			func_517(uParam0, 0f, 0f, 0f);
			func_516(uParam0, 0f, 0f, 0f);
			break;
		
		case 1:
			func_540(uParam0, 126);
			func_539(uParam0, 0);
			func_538(uParam0, 10.5f);
			func_537(uParam0, 0);
			func_536(uParam0, 0f, 0f, 0f);
			func_535(uParam0, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0, 978.232f, -397.611f, 416.607f);
			func_530(uParam0, 1, 873.389f, -183.851f, 302.972f);
			func_530(uParam0, 2, 1082.347f, -86.822f, 174.287f);
			func_530(uParam0, 3, 1151.098f, 124.6955f, 81.4805f);
			func_529(uParam0, 0f);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, "BJ_02P");
			func_525(uParam0, func_526(1));
			func_524(uParam0, func_459(1));
			func_523(uParam0, 52.5984f);
			func_522(uParam0, 886.5799f, -442.7917f, 535.8002f);
			func_521(uParam0, -41.778f, 0.0092f, -13.8287f);
			func_520(uParam0, 41.3305f);
			func_519(uParam0, 0);
			func_518(uParam0, 0);
			func_517(uParam0, 0f, 0f, 0f);
			func_516(uParam0, 0f, 0f, 0f);
			break;
		
		case 2:
			func_540(uParam0, 127);
			func_539(uParam0, 0);
			func_538(uParam0, 289.2623f);
			func_537(uParam0, 0);
			func_536(uParam0, 0f, 0f, 0f);
			func_535(uParam0, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0, 2028.516f, 1759.102f, 424.7939f);
			func_530(uParam0, 1, 2230.78f, 1600.25f, 318.384f);
			func_530(uParam0, 2, 2410.55f, 1739.71f, 253.494f);
			func_530(uParam0, 3, 2273.787f, 1885.168f, 152.702f);
			func_530(uParam0, 4, 2111.912f, 1887.456f, 92.5308f);
			func_529(uParam0, 0f);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, "BJ_03P");
			func_525(uParam0, func_526(2));
			func_524(uParam0, func_459(2));
			func_523(uParam0, 31.9702f);
			func_522(uParam0, 2038.807f, 1971.563f, 591.7618f);
			func_521(uParam0, -79.6953f, 0.0213f, 159.6313f);
			func_520(uParam0, 50.8804f);
			func_519(uParam0, 0);
			func_518(uParam0, 0);
			func_517(uParam0, 0f, 0f, 0f);
			func_516(uParam0, 0f, 0f, 0f);
			break;
		
		case 3:
			func_540(uParam0, 128);
			func_539(uParam0, 0);
			func_538(uParam0, 60.1427f);
			func_537(uParam0, joaat("frogger"));
			func_536(uParam0, 402.6013f, 5736.451f, 696.3928f);
			func_535(uParam0, 119.8889f);
			func_534(uParam0, 5f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0, 320.69f, 5808.49f, 550.56f);
			func_530(uParam0, 1, 220.59f, 5943.149f, 415.514f);
			func_530(uParam0, 2, 30.63f, 6117.63f, 227.9f);
			func_530(uParam0, 3, -80.95f, 6440.43f, 100.48f);
			func_530(uParam0, 4, -273.773f, 6633.584f, 6.533f);
			func_529(uParam0, 0f);
			func_528(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_527(uParam0, "BJ_04M");
			}
			else if (iVar0 == 1)
			{
				func_527(uParam0, "BJ_04F");
			}
			else
			{
				func_527(uParam0, "BJ_04T");
			}
			func_525(uParam0, func_526(3));
			func_524(uParam0, func_459(3));
			func_523(uParam0, 44.3626f);
			func_522(uParam0, 409.9299f, 5701.477f, 696.7185f);
			func_521(uParam0, -5.0705f, 0f, 20.8267f);
			func_520(uParam0, 43.8549f);
			func_519(uParam0, 0);
			func_518(uParam0, 1);
			func_517(uParam0, 0f, 0f, 0f);
			func_516(uParam0, 0f, 0f, 0f);
			break;
		
		case 4:
			func_540(uParam0, 129);
			func_539(uParam0, 0);
			func_538(uParam0, 1.8891f);
			func_537(uParam0, joaat("skylift"));
			func_536(uParam0, -75.3f, -823.9f, 329.2f);
			func_535(uParam0, 150f);
			func_534(uParam0, 4f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0, -77.2067f, -444.208f, 37f);
			func_529(uParam0, 0f);
			func_528(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_527(uParam0, "BJ_05M");
			}
			else if (iVar0 == 1)
			{
				func_527(uParam0, "BJ_05F");
			}
			else
			{
				func_527(uParam0, "BJ_05T");
			}
			func_525(uParam0, func_526(4));
			func_524(uParam0, func_459(4));
			func_523(uParam0, 26.7726f);
			func_522(uParam0, -111.8981f, -862.3896f, 334.5773f);
			func_521(uParam0, -5.4775f, 0.0397f, -29.0222f);
			func_520(uParam0, 30.0131f);
			func_519(uParam0, 0);
			func_518(uParam0, 0);
			func_517(uParam0, 0f, 0f, 0f);
			func_516(uParam0, 0f, 0f, 0f);
			break;
		
		case 5:
			func_540(uParam0, 130);
			func_539(uParam0, joaat("hauler"));
			func_538(uParam0, 358.9586f);
			func_537(uParam0, 0);
			func_536(uParam0, 0f, 0f, 0f);
			func_535(uParam0, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0, -96.9738f, -662.5833f, 34.7843f);
			func_529(uParam0, -18.6f);
			func_528(uParam0, 0f, -6f, 0f);
			if (iVar0 == 0)
			{
				func_527(uParam0, "BJ_06M");
			}
			else if (iVar0 == 1)
			{
				func_527(uParam0, "BJ_06F");
			}
			else
			{
				func_527(uParam0, "BJ_06T");
			}
			func_525(uParam0, func_526(5));
			func_524(uParam0, func_459(5));
			func_523(uParam0, 55.7667f);
			func_522(uParam0, -117.2447f, -977.6218f, 297.0984f);
			func_521(uParam0, -7.6574f, 0f, 0.8528f);
			func_520(uParam0, 60f);
			func_519(uParam0, 0);
			func_518(uParam0, 1);
			func_517(uParam0, 0f, 0f, 0f);
			func_516(uParam0, 0f, 0f, 0f);
			break;
		
		case 6:
			func_540(uParam0, 131);
			func_539(uParam0, 0);
			func_538(uParam0, 164.6178f);
			func_537(uParam0, 0);
			func_536(uParam0, 0f, 0f, 0f);
			func_535(uParam0, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, joaat("blazer"));
			func_532(uParam0, -1310.948f, 4330.126f, 7.2444f);
			func_531(uParam0, 87.84f);
			func_530(uParam0, 0, -1246.49f, 4482.091f, 100.349f);
			func_530(uParam0, 1, -1309.67f, 4400.428f, 50.542f);
			func_530(uParam0, 2, -1304.67f, 4348.428f, 5.75f);
			func_529(uParam0, 0f);
			func_528(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_527(uParam0, "BJ_07M");
			}
			else if (iVar0 == 1)
			{
				func_527(uParam0, "BJ_07F");
			}
			else
			{
				func_527(uParam0, "BJ_07T");
			}
			func_525(uParam0, func_526(6));
			func_524(uParam0, func_459(6));
			func_523(uParam0, 47.1789f);
			func_522(uParam0, -1242.731f, 4536.298f, 186.6862f);
			func_521(uParam0, -13.6409f, 0f, 172.0553f);
			func_520(uParam0, 47.1789f);
			func_519(uParam0, 0);
			func_518(uParam0, 1);
			func_517(uParam0, 0f, 0f, 0f);
			func_516(uParam0, 0f, 0f, 0f);
			break;
		
		case 7:
			func_540(uParam0, 132);
			func_539(uParam0, joaat("freight"));
			func_538(uParam0, 112.6f);
			func_537(uParam0, 0);
			func_536(uParam0, 0f, 0f, 0f);
			func_535(uParam0, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0, -487.5452f, 4252.192f, 87.712f);
			func_529(uParam0, 10.8894f);
			func_528(uParam0, 0f, -20f, 4f);
			func_527(uParam0, "BJ_08P");
			func_525(uParam0, func_526(7));
			func_524(uParam0, func_459(7));
			func_523(uParam0, 24.3623f);
			func_522(uParam0, -337.5233f, 4110.16f, 315.6679f);
			func_521(uParam0, -29.1422f, 0.0324f, 47.5813f);
			func_520(uParam0, 37.0424f);
			func_519(uParam0, 0);
			func_518(uParam0, 0);
			func_517(uParam0, 0f, 0f, 0f);
			func_516(uParam0, 0f, 0f, 0f);
			break;
		
		case 8:
			func_540(uParam0, 133);
			func_539(uParam0, 0);
			func_538(uParam0, 104.207f);
			func_537(uParam0, 0);
			func_536(uParam0, 0f, 0f, 0f);
			func_535(uParam0, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0, -1154.443f, 204.1726f, 64.4915f);
			func_529(uParam0, 0f);
			func_528(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_527(uParam0, "BJ_09M");
			}
			else if (iVar0 == 1)
			{
				func_527(uParam0, "BJ_09F");
			}
			else
			{
				func_527(uParam0, "BJ_09T");
			}
			func_525(uParam0, func_526(8));
			func_524(uParam0, func_459(8));
			func_523(uParam0, 50f);
			func_522(uParam0, -805.2963f, 332.5761f, 234.6604f);
			func_521(uParam0, -19.7458f, 0f, 116.6405f);
			func_520(uParam0, 55.2882f);
			func_519(uParam0, 0);
			func_518(uParam0, 1);
			func_517(uParam0, 0f, 0f, 0f);
			func_516(uParam0, 0f, 0f, 0f);
			break;
		
		case 9:
			func_540(uParam0, 134);
			func_539(uParam0, 0);
			func_538(uParam0, 329.4791f);
			func_537(uParam0, 0);
			func_536(uParam0, 0f, 0f, 0f);
			func_535(uParam0, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, joaat("blazer"));
			func_532(uParam0, -818.3042f, 4405.675f, 20.1095f);
			func_531(uParam0, -89.36f);
			func_530(uParam0, 0, -1200f, 3616f, 964f);
			func_530(uParam0, 1, -1240f, 3307f, 854f);
			func_530(uParam0, 2, -1552f, 3456f, 655f);
			func_530(uParam0, 3, -1616f, 3808f, 505f);
			func_530(uParam0, 4, -1157.684f, 4128.348f, 288.607f);
			func_530(uParam0, 5, -1063.995f, 4246.137f, 163.291f);
			func_530(uParam0, 6, -938.541f, 4360.14f, 82.372f);
			func_530(uParam0, 7, -828.1418f, 4413.562f, 20.062f);
			func_529(uParam0, 0f);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, "BJ_10P");
			func_525(uParam0, func_526(9));
			func_524(uParam0, func_459(9));
			func_523(uParam0, 31.7648f);
			func_522(uParam0, -1286.976f, 3660.137f, 1082.208f);
			func_521(uParam0, -47.0453f, 0.0328f, -13.4198f);
			func_520(uParam0, 39.6786f);
			func_519(uParam0, 0);
			func_518(uParam0, 0);
			func_517(uParam0, 0f, 0f, 0f);
			func_516(uParam0, 0f, 0f, 0f);
			break;
		
		case 10:
			func_540(uParam0, 135);
			func_539(uParam0, 0);
			func_538(uParam0, 0f);
			func_537(uParam0, 0);
			func_536(uParam0, 0f, 0f, 0f);
			func_535(uParam0, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0, 1239.342f, 4008.389f, 1135.372f);
			func_530(uParam0, 1, 1374.479f, 4156.592f, 1019.694f);
			func_530(uParam0, 2, 1391.31f, 4362.621f, 909.212f);
			func_530(uParam0, 3, 1240.832f, 4598.044f, 758.002f);
			func_530(uParam0, 4, 1382.169f, 4377.629f, 600.013f);
			func_530(uParam0, 5, 1624.116f, 4207.519f, 471.225f);
			func_530(uParam0, 6, 1910.345f, 4175.518f, 362.862f);
			func_530(uParam0, 7, 2236.975f, 4282.967f, 218.116f);
			func_530(uParam0, 8, 2330.282f, 4534.43f, 90f);
			func_530(uParam0, 9, 2473.344f, 4715.347f, 33.524f);
			func_529(uParam0, 0f);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, "BJ_11P");
			func_525(uParam0, func_526(10));
			func_524(uParam0, func_459(10));
			func_523(uParam0, 27.2187f);
			func_522(uParam0, 1012.673f, 3960.436f, 1367.701f);
			func_521(uParam0, -54.7868f, 0f, -90.128f);
			func_520(uParam0, 35.5634f);
			func_519(uParam0, 0);
			func_518(uParam0, 0);
			func_517(uParam0, 0f, 0f, 0f);
			func_516(uParam0, 0f, 0f, 0f);
			break;
		
		case 11:
			func_540(uParam0, 136);
			func_539(uParam0, 0);
			func_538(uParam0, 24.92f);
			func_537(uParam0, 0);
			func_536(uParam0, 0f, 0f, 0f);
			func_535(uParam0, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, joaat("sanchez"));
			func_532(uParam0, 1280.933f, -50.6157f, 61.8195f);
			func_531(uParam0, 130.39f);
			func_530(uParam0, 0, 1829.46f, -260.665f, 1141.852f);
			func_530(uParam0, 1, 1816.46f, -10.665f, 1033.084f);
			func_530(uParam0, 2, 1688.46f, 218.335f, 924.307f);
			func_530(uParam0, 3, 1503.46f, 382.335f, 815.529f);
			func_530(uParam0, 4, 1554.46f, 598.335f, 706.751f);
			func_530(uParam0, 5, 1813.46f, 724.335f, 597.973f);
			func_530(uParam0, 6, 1975.46f, 519.335f, 486.196f);
			func_530(uParam0, 7, 1946.46f, 125.335f, 364.417f);
			func_530(uParam0, 8, 1663.46f, -15.665f, 241.64f);
			func_530(uParam0, 9, 1396.64f, -62.665f, 118f);
			func_530(uParam0, 10, 1278.5f, -41.05f, 61.7f);
			func_529(uParam0, 0f);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, "BJ_12P");
			func_525(uParam0, func_526(11));
			func_524(uParam0, func_459(11));
			func_523(uParam0, 18.9374f);
			func_522(uParam0, 1628.156f, -431.2605f, 1332.761f);
			func_521(uParam0, -54.5827f, 0f, -2.0463f);
			func_520(uParam0, 56.4495f);
			func_519(uParam0, 0);
			func_518(uParam0, 0);
			func_517(uParam0, 0f, 0f, 0f);
			func_516(uParam0, 0f, 0f, 0f);
			break;
		
		case 12:
			func_540(uParam0, 137);
			func_539(uParam0, 0);
			func_538(uParam0, 359.2885f);
			func_537(uParam0, 0);
			func_536(uParam0, 0f, 0f, 0f);
			func_535(uParam0, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, joaat("sanchez"));
			func_532(uParam0, -885.2659f, 4433.592f, 20.381f);
			func_531(uParam0, 104.35f);
			func_530(uParam0, 0, -771.9196f, 4400.453f, 60.5786f);
			func_530(uParam0, 1, -892.6581f, 4427.487f, 19.8561f);
			func_529(uParam0, 0f);
			func_528(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_527(uParam0, "BJ_13M");
			}
			else if (iVar0 == 1)
			{
				func_527(uParam0, "BJ_13F");
			}
			else
			{
				func_527(uParam0, "BJ_13T");
			}
			func_525(uParam0, func_526(12));
			func_524(uParam0, func_459(12));
			func_523(uParam0, 48.3921f);
			func_522(uParam0, -765.6544f, 4332.836f, 149.0282f);
			func_521(uParam0, -18.0357f, 0f, 6.0212f);
			func_520(uParam0, 48.3921f);
			func_519(uParam0, 0);
			func_518(uParam0, 1);
			func_517(uParam0, 0f, 0f, 0f);
			func_516(uParam0, 0f, 0f, 0f);
			break;
	}
}

void func_516(var uParam0, vector3 vParam1)
{
	uParam0->f_67 = { vParam1 };
}

void func_517(var uParam0, vector3 vParam1)
{
	uParam0->f_64 = { vParam1 };
}

void func_518(var uParam0, int iParam1)
{
	uParam0->f_84 = iParam1;
}

void func_519(var uParam0, int iParam1)
{
	uParam0->f_83 = iParam1;
}

void func_520(var uParam0, float fParam1)
{
	uParam0->f_82 = fParam1;
}

void func_521(var uParam0, vector3 vParam1)
{
	uParam0->f_58 = { vParam1 };
}

void func_522(var uParam0, vector3 vParam1)
{
	uParam0->f_55 = { vParam1 };
}

void func_523(var uParam0, float fParam1)
{
	uParam0->f_81 = fParam1;
}

void func_524(var uParam0, vector3 vParam1)
{
	uParam0->f_52 = { vParam1 };
}

void func_525(var uParam0, vector3 vParam1)
{
	uParam0->f_49 = { vParam1 };
}

Vector3 func_526(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1143.586f, -1859.747f, 208.3878f;
		
		case 1:
			return 877.5864f, -436.3322f, 536.9036f;
		
		case 2:
			return 2041.231f, 1978.98f, 585.9358f;
		
		case 3:
			return 405.2326f, 5705.887f, 697.2318f;
		
		case 4:
			return -103.8901f, -870.8046f, 298.7574f;
		
		case 5:
			return -118.2569f, -975.1133f, 297.3781f;
		
		case 6:
			return -1237.465f, 4526.661f, 181.7929f;
		
		case 7:
			return -357.7932f, 4107.914f, 314.8059f;
		
		case 8:
			return -809.6324f, 331.3331f, 233.2818f;
		
		case 9:
			return -1286.926f, 3660.203f, 1076.051f;
		
		case 10:
			return 1022.178f, 3975.738f, 1362.533f;
		
		case 11:
			return 1608.553f, -434.5186f, 1321.916f;
		
		case 12:
			return -756.3533f, 4341.521f, 143.8134f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_527(var uParam0, char* sParam1)
{
	uParam0->f_4 = sParam1;
}

void func_528(var uParam0, vector3 vParam1)
{
	uParam0->f_6 = { vParam1 };
}

void func_529(var uParam0, float fParam1)
{
	uParam0->f_77 = fParam1;
}

void func_530(var uParam0, int iParam1, vector3 vParam2)
{
	if (iParam1 < 0 || iParam1 >= 12)
	{
		return;
	}
	uParam0->f_12[iParam1 /*3*/] = { vParam2 };
}

void func_531(var uParam0, float fParam1)
{
	uParam0->f_79 = fParam1;
}

void func_532(var uParam0, vector3 vParam1)
{
	uParam0->f_9 = { vParam1 };
}

void func_533(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_534(var uParam0, float fParam1)
{
	uParam0->f_80 = fParam1;
}

void func_535(var uParam0, float fParam1)
{
	uParam0->f_78 = fParam1;
}

void func_536(var uParam0, vector3 vParam1)
{
	uParam0->f_70 = { vParam1 };
}

void func_537(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_538(var uParam0, float fParam1)
{
	uParam0->f_76 = fParam1;
}

void func_539(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_540(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_541(int iParam0, bool bParam1)
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

void func_542(int iParam0)
{
	func_370();
	Global_71460 = iParam0;
	Global_71459 = 0;
	Global_71462 = 3;
}

void func_543(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, int iParam6, var uParam7, int iParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, int iParam15, var uParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_364();
	func_363();
	func_479();
	func_549(uParam1);
	func_541(23, 0);
	func_548(*uParam1);
	unk_0x004B024E6F8A1666(*uParam16);
	unk_0xEEF61BF551977B0E("OJBJ_START");
	unk_0xEEF61BF551977B0E("OJBJ_JUMPED");
	unk_0xEEF61BF551977B0E("OJBJ_LANDED");
	unk_0x9444470D6D9ADB88("OJBJ_STOP");
	unk_0x5AD7D03C214BDA88("BASEJUMPS_OPEN_PARACHUTE");
	unk_0x5AD7D03C214BDA88("BASEJUMPS_PREP_FOR_JUMP_ON_FOOT");
	unk_0x5AD7D03C214BDA88("BASEJUMPS_PREP_FOR_JUMP_MOTO");
	unk_0x5AD7D03C214BDA88("BASEJUMPS_SKYDIVE");
	unk_0x5AD7D03C214BDA88("BASEJUMPS_OPEN_PARACHUTE");
	unk_0xD5F220F24F05898F();
	uParam11 = uParam11;
	Global_88584 = 0;
	Global_88585 = 0;
	Global_88586 = 0;
	func_20(0, 1);
	func_18(0, 1);
	func_17(0);
	unk_0x95DFD5DB6041DFE5(1);
	unk_0xDD63978CC283FA2D(0);
	unk_0xD7148FA4D977807B(0);
	while (unk_0x607776744A243309())
	{
		wait(0);
	}
	if (unk_0x5B1F43E517A1588D())
	{
		unk_0xF3D41ED309762C0D(1);
	}
	if (unk_0xCE3CB618AFE55EFB(iParam13))
	{
		unk_0xE1623437A3194332(&iParam13);
	}
	if (unk_0xCE3CB618AFE55EFB(iParam14))
	{
		unk_0xE1623437A3194332(&iParam14);
	}
	func_370();
	func_26(0);
	unk_0xD2A87BEA7696858B(unk_0xD4E735F4B6A956AC(), false);
	func_547(1, 1);
	if (func_414(func_440(uParam0)))
	{
	}
	else
	{
		unk_0x783C742AEB66A134();
	}
	unk_0x4004C3CB2300135E();
	func_545(uParam7);
	func_271();
	unk_0xC6B90106C92A44C9(0f, 0, 21);
	unk_0xCA539D02BA6DD396(0);
	func_210(0, 0);
	unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
	if (iParam15 == 5)
	{
		unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 146, false);
	}
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()) && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		unk_0xB0D7019224A3A443(unk_0xA19140A5C42D8715(), 177, 0);
		unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 36, false);
		unk_0xEF06BE39D11763FC(unk_0xD4E735F4B6A956AC(), 0);
		unk_0x2058F6F3F79110DC(unk_0xA19140A5C42D8715(), 0);
		if (!bParam17)
		{
			unk_0x581CF279D6A7E3D6(unk_0xA19140A5C42D8715(), joaat("gadget_parachute"));
		}
		unk_0x82416ADE738F7F1F(unk_0xA19140A5C42D8715(), 1f);
		unk_0x241F3D2BEEB0124B(unk_0xA19140A5C42D8715(), 1);
	}
	iVar1 = 0;
	while (iVar1 < *uParam10)
	{
		if (unk_0xDC5D81351D6A4DDB((*uParam10)[iVar1]) && !unk_0x7112137033807390((*uParam10)[iVar1], 0))
		{
			unk_0x9568B1B58F78FF36((*uParam10)[iVar1]);
			(*uParam10)[iVar1] = 0;
		}
		iVar1++;
	}
	if ((unk_0xDC5D81351D6A4DDB(*iParam6) && *iParam6 != unk_0xC409B91AC4749F88()) && !unk_0x7112137033807390(*iParam6, 0))
	{
		unk_0x6E90449226476EA8(*iParam6);
		func_274(*iParam6, func_313(iParam15), func_312(iParam15), 24, 0);
	}
	if (!unk_0x4915F4759304D5CF(*iParam8))
	{
		if (!unk_0x1A8481A7E865EC7C(*iParam8))
		{
			unk_0x680F17660351F21B(iParam8);
		}
		else
		{
			unk_0x7E4E83D33161D01A(iParam8);
		}
	}
	if (!unk_0x4915F4759304D5CF(*uParam9))
	{
		unk_0x9568B1B58F78FF36(*uParam9);
		unk_0x1F4E5EFBFE503FB3(*uParam9, 1);
	}
	if (unk_0xDC5D81351D6A4DDB(*iParam2))
	{
		if (func_448(func_449(iParam15)))
		{
			if ((!unk_0x7112137033807390(*iParam2, 0) && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715())) && unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), *iParam2, 0))
			{
				unk_0xFDF7EE94DCA5AD87(unk_0xA19140A5C42D8715(), 1);
			}
			if (!unk_0x1A8481A7E865EC7C(*iParam2))
			{
				unk_0x4C842FAB634AC89E(iParam2);
			}
			else
			{
				unk_0x792676988A48387F(iParam2);
			}
		}
		else
		{
			unk_0x792676988A48387F(iParam2);
		}
	}
	if (unk_0xDC5D81351D6A4DDB(*uParam3))
	{
		if (func_355(func_356(uParam0)))
		{
			unk_0x04BDC8349B85502E(uParam3, 0);
			unk_0x356500C85E11485E(1);
		}
	}
	if (unk_0xDC5D81351D6A4DDB(*iParam4) && !unk_0x7112137033807390(*iParam4, 0))
	{
		iVar0 = unk_0xB0D49A1F9F054602(*iParam4, -1, 0);
		if (unk_0xDC5D81351D6A4DDB(iVar0))
		{
			unk_0x680F17660351F21B(&iVar0);
		}
		unk_0x4C842FAB634AC89E(iParam4);
	}
	iVar2 = 0;
	while (iVar2 < *uParam5)
	{
		if (unk_0xDC5D81351D6A4DDB((*uParam5)[iVar2]) && !unk_0x7112137033807390((*uParam5)[iVar2], 0))
		{
			unk_0x117F5CD9634D61A9((*uParam5)[iVar2], 1f);
			unk_0x98D1B1BD9C3AA456((*uParam5)[iVar2], 0, 1);
		}
		iVar2++;
	}
	*iParam12 = 1;
	unk_0x135C61E339DABBAC(1);
	unk_0x8E88E73F74A9FF79(false, 0, 3000, 1, 0, 0);
	unk_0xDC374DA4DC566237(true);
	unk_0x85685830EFB9A55E(true);
	unk_0x578D0810E6A7D73C(1);
	func_544();
	unk_0x65227735B3827631(false);
	Global_106070.f_18939 = -1;
	unk_0x8F1A9FE6D91AAFEB();
}

void func_544()
{
	Global_17228.f_5 = 0;
}

void func_545(var uParam0)
{
	func_546(uParam0, 0);
	func_546(uParam0, 1);
	func_546(uParam0, 2);
}

void func_546(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_547(int iParam0, bool bParam1)
{
	if (unk_0x05EFB6A616B6FADE(Global_25617, iParam0))
	{
		if (!bParam1)
		{
			unk_0xFA57C719261AA55D(&Global_25617, iParam0);
			StringCopy(&(Global_25618[iParam0 /*6*/]), "NULL", 24);
			Global_25673[iParam0] = bParam1;
		}
	}
}

void func_548(var uParam0)
{
	unk_0x86795B44CE5FE021(&uParam0);
}

void func_549(var uParam0)
{
	func_548(*uParam0);
}

