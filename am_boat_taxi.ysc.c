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
	struct<22> Local_95 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0 } ;
	vector3 vLocal_96[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 12;
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
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 1065353216;
	int iLocal_791 = 0;
	int iLocal_792 = 0;
	vector3 vLocal_793 = { 0f, 0f, 0f };
	float fLocal_794 = 0f;
	var uLocal_795 = 16;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	bool bLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	int iLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	float fLocal_966 = 0f;
	float fLocal_967 = 0f;
	float fLocal_968 = 0f;
	float fLocal_969 = 0f;
	struct<21> Local_970 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_963 = 15000;
	if (unk_0x4C9BACA8D249CB13())
	{
		if (!func_145(ScriptParam_970))
		{
			func_140();
		}
	}
	while (true)
	{
		func_139();
		if (func_129())
		{
			func_140();
		}
		if (unk_0xEB97F9F181CDFD2C() != bLocal_960)
		{
			func_140();
		}
		switch (func_128(unk_0xD60943E3BE730BF0()))
		{
			case 0:
				if (func_127() == 1)
				{
					func_126();
					func_125();
					vLocal_96[unk_0xD60943E3BE730BF0() /*3*/] = 1;
				}
				else if (func_127() == 4)
				{
					vLocal_96[unk_0xD60943E3BE730BF0() /*3*/] = 3;
				}
				break;
			
			case 1:
				func_98();
				if (func_127() == 1)
				{
					func_72();
				}
				else if (func_127() == 4)
				{
					vLocal_96[unk_0xD60943E3BE730BF0() /*3*/] = 3;
				}
				if (func_70(Local_95.f_2))
				{
					if (!unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), unk_0xE2BBD32891C18569(unk_0xBEA1D935EBAA95F3(Local_95.f_2), 1), 200f, 200f, 200f, 0, 1, 0))
					{
						vLocal_96[unk_0xD60943E3BE730BF0() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_69(&(Local_95.f_18));
				if (func_68(&(Local_95.f_18)))
				{
					vLocal_96[unk_0xD60943E3BE730BF0() /*3*/] = 4;
				}
				break;
			
			case 2:
				vLocal_96[unk_0xD60943E3BE730BF0() /*3*/] = 4;
			
			case 4:
				func_140();
				break;
		}
		if (unk_0x45F99485D7E1C29A())
		{
			switch (func_127())
			{
				case 0:
					if (func_66(&(Local_95.f_16), 10000, 0))
					{
						if (!unk_0x05EFB6A616B6FADE(Local_95, 12))
						{
							Local_95.f_4 = unk_0xD4E735F4B6A956AC();
							Local_95.f_5 = func_65();
							Local_95.f_10 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0) + Vector(0f, 5f, 0f) };
							Local_95.f_7 = { func_63(Local_95.f_5) };
							unk_0x2BCFB39E86340DAA(&Local_95, 12);
						}
						if (func_38())
						{
							func_126();
							Local_95.f_1 = 1;
						}
					}
					func_34();
					break;
				
				case 1:
					func_33();
					func_32();
					func_30();
					func_34();
					if (func_1())
					{
						Local_95.f_1 = 4;
					}
					break;
				
				case 4:
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

int func_2()
{
	var uVar0;
	var uVar1;
	
	if (func_29())
	{
		if (Local_95.f_21 >= 0 || Local_95.f_21 <= 3)
		{
			func_6(func_23(9), 7, 3, 1);
		}
		return 1;
	}
	if (Local_95.f_21 >= 0 || Local_95.f_21 <= 3)
	{
		if (unk_0x83A1DA4E6C55E952(Local_95.f_2))
		{
			if (!func_70(Local_95.f_2))
			{
				if (unk_0xE425570A0FBF8517(Local_95.f_2, &uVar0) == unk_0xD4E735F4B6A956AC())
				{
					func_5(1, 600000);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
		if (unk_0x83A1DA4E6C55E952(Local_95.f_3))
		{
			if (func_4(Local_95.f_3))
			{
				if (unk_0xE425570A0FBF8517(Local_95.f_3, &uVar1) == unk_0xD4E735F4B6A956AC())
				{
					func_5(1, 600000);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
		if (!func_3(unk_0xD4E735F4B6A956AC(), 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0, bool bParam1, bool bParam2)
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

int func_4(var uParam0)
{
	if (unk_0x83A1DA4E6C55E952(uParam0))
	{
		return unk_0x4915F4759304D5CF(unk_0x8A5B683BACF7B78C(uParam0));
	}
	return 1;
}

void func_5(int iParam0, int iParam1)
{
	if (Global_2437022.f_3872[iParam0] < iParam1)
	{
		Global_2437022.f_3872[iParam0] = iParam1;
	}
	unk_0x2BCFB39E86340DAA(&(Global_2437022.f_3871), iParam0);
}

void func_6(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_22(iParam1), 16);
	StringCopy(&Var1, func_21(iParam2), 16);
	switch (iParam1)
	{
		case 0:
			iVar2 = 1287308202;
			break;
		
		case 1:
			iVar2 = 691372038;
			break;
		
		case 2:
			iVar2 = 1480707108;
			break;
		
		case 3:
			iVar2 = 1512499951;
			break;
		
		case 4:
			iVar2 = 562283735;
			break;
		
		case 5:
			iVar2 = -154732333;
			break;
		
		case 6:
			iVar2 = -1362660491;
			break;
		
		case 7:
			iVar2 = 645708827;
			break;
		
		case 8:
			iVar2 = 767907967;
			break;
		
		case 9:
			iVar2 = -1970151306;
			break;
		
		case 10:
			iVar2 = 718859568;
			break;
		
		case 11:
			iVar2 = -1955564771;
			break;
		
		case 12:
			iVar2 = 892388724;
			break;
		
		case 13:
			iVar2 = -1426920838;
			break;
		
		case 14:
			iVar2 = -664597565;
			break;
		
		case 15:
			iVar2 = 1864522104;
			break;
		
		case 16:
			iVar2 = 215608230;
			break;
		
		case 17:
			iVar2 = -1100963799;
			break;
	}
	if (func_20())
	{
		func_7(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
		Global_4262927[iVar3 /*80*/].f_13.f_40 = { Var0 };
		Global_4262927[iVar3 /*80*/].f_13.f_44 = { Var1 };
	}
	else
	{
		unk_0x4F7E5FD76186605D(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_7(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_20())
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
				func_8(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_8(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -597978445:
			if (iParam1 > 0)
			{
				func_8(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
			func_8(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_8(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_20())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_19()) || unk_0x64BE694244417BDA())
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
			*uParam0 = func_15(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_14(1, iParam4);
			Global_4263477 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_9(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_9(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x2BCFB39E86340DAA(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_10(iParam0);
	}
}

void func_10(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_20())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_13(iParam0))
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
		func_11(&(Global_4262927[iParam0 /*80*/]));
	}
}

void func_11(var uParam0)
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
	func_12(&(uParam0->f_13));
	func_12(&(uParam0->f_13.f_13));
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

void func_12(var uParam0)
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

int func_13(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_5 == 1;
	}
	return 0;
}

void func_14(int iParam0, int iParam1)
{
	Global_2460521 = iParam1;
	Global_2460520 = iParam0;
}

int func_15(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4262927[iVar0 /*80*/].f_61.f_2 == 0)
		{
			if (!func_20())
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
				func_16(Global_4262927[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_16(struct<62> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_18(vVar0.y);
	if ((Global_262145.f_23427 && !Global_262145.f_23428) && !Global_262145.f_23429)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_17();
		unk_0x04F37AFC39D93909(1, &vVar0, 35, iVar1);
	}
}

void func_17()
{
	unk_0xD75A4240F0AD8613("AM_ARENA_SHP");
}

var func_18(int iParam0)
{
	var uVar0;
	
	unk_0x2BCFB39E86340DAA(&uVar0, iParam0);
	return uVar0;
}

int func_19()
{
	return Global_1312736;
}

int func_20()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

char* func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		case 13:
			return "REFUNDAPPEA";
		
		case 14:
			return "AMMO_DROP_REF";
		
		case 15:
			return "ORBITAL_MANUAL";
		
		case 16:
			return "ORBITAL_AUTO";
		
		case 17:
			return "ARENA_SPEC_BOX";
		
		default:
	}
	return "DEFAULT";
}

int func_23(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_28(iParam0) >= 0)
	{
		iVar0 = func_28(iParam0);
	}
	else
	{
		iVar0 = func_24(iParam0);
	}
	return iVar0;
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000;
			break;
		
		case 10:
			return 5000;
			break;
		
		case 11:
			return 8000;
			break;
		
		case 8:
			return 1000;
			break;
		
		case 0:
			return 500;
			break;
		
		case 9:
			return 250;
			break;
		
		case 13:
			return 1000;
			break;
		
		case 12:
			return 7500;
			break;
		
		case 2:
			return 1000;
			break;
		
		case 14:
			return 500;
			break;
		
		case 20:
			if (func_25())
			{
				return 0;
			}
			if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 1)
			{
				return 200;
			}
			else if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 2)
			{
				return 400;
			}
			else if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 3)
			{
				return 600;
			}
			else if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 4)
			{
				return 800;
			}
			else if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 5)
			{
				return 1000;
			}
			break;
		
		case 6:
			return 500;
			break;
		
		case 22:
			return 200;
			break;
		
		case 23:
			return 400;
			break;
		
		case 24:
			return 700;
			break;
		
		case 25:
			return 100;
			break;
		
		case 26:
			return 1000;
			break;
		
		case 57:
			return 700;
			break;
		
		case 35:
			return 5000;
			break;
		
		case 15:
			return 0;
			break;
		
		case 17:
			return 0;
			break;
		
		case 18:
			return 0;
			break;
		
		case 19:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 39:
			return 200;
			break;
		
		case 40:
			return 1000;
		
		case 41:
			return 750;
		
		case 42:
			return 0;
	}
	return 0;
}

bool func_25()
{
	return unk_0x05EFB6A616B6FADE(func_26(6424, -1, 0), 19);
}

int func_26(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_27(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_27(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_6534;
			break;
		
		case 10:
			return Global_262145.f_4117;
			break;
		
		case 11:
			return Global_262145.f_4118;
			break;
		
		case 8:
			return Global_262145.f_4115;
			break;
		
		case 0:
			return Global_262145.f_4101;
			break;
		
		case 9:
			return Global_262145.f_4116;
			break;
		
		case 13:
			return Global_262145.f_4120;
			break;
		
		case 12:
			return Global_262145.f_4119;
			break;
		
		case 2:
			return Global_262145.f_4111;
			break;
		
		case 14:
			return Global_262145.f_4121;
			break;
		
		case 20:
			if (func_25())
			{
				return 0;
			}
			if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 1)
			{
				return Global_262145.f_6541;
			}
			else if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 2)
			{
				return Global_262145.f_6542;
			}
			else if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 3)
			{
				return Global_262145.f_6543;
			}
			else if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 4)
			{
				return Global_262145.f_6544;
			}
			else if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 5)
			{
				return Global_262145.f_6545;
			}
			break;
		
		case 6:
			return Global_262145.f_4114;
			break;
		
		case 22:
			return Global_262145.f_4127;
			break;
		
		case 23:
			return Global_262145.f_4128;
			break;
		
		case 24:
			return Global_262145.f_4129;
			break;
		
		case 25:
			return Global_262145.f_4130;
			break;
		
		case 26:
			return Global_262145.f_4131;
			break;
		
		case 35:
			return Global_262145.f_7110;
			break;
		
		case 15:
			return Global_262145.f_6535;
			break;
		
		case 17:
			return Global_262145.f_6535;
			break;
		
		case 18:
			return Global_262145.f_6535;
			break;
		
		case 19:
			return Global_262145.f_6535;
			break;
		
		case 21:
			return Global_262145.f_6535;
			break;
		
		case 36:
			return Global_262145.f_7575;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_12759;
			break;
		
		case 41:
			return Global_262145.f_12760;
			break;
		
		case 42:
			return Global_262145.f_12761;
			break;
		
		case 43:
			return Global_262145.f_15302;
			break;
		
		case 44:
			return Global_262145.f_15304;
			break;
		
		case 57:
			return Global_262145.f_4129;
			break;
		
		case 58:
			return Global_262145.f_24690;
			break;
	}
	return 0;
}

bool func_29()
{
	return Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_196 != 0;
}

void func_30()
{
	if (!unk_0x45F99485D7E1C29A())
	{
		return;
	}
	if (Local_95.f_20 != 7)
	{
		if (func_4(Local_95.f_3) || !func_70(Local_95.f_2))
		{
			Local_95.f_20 = 7;
		}
		else if (!unk_0xE0FD180CD24C0B67(unk_0x8A5B683BACF7B78C(Local_95.f_3), unk_0xBEA1D935EBAA95F3(Local_95.f_2), 0))
		{
			Local_95.f_20 = 7;
		}
	}
	if (!func_4(Local_95.f_3) && func_70(Local_95.f_2))
	{
		if (Local_95.f_20 != 1)
		{
			if (unk_0x24A1A7BF4ED94B71(unk_0xBEA1D935EBAA95F3(Local_95.f_2)) <= 600 || unk_0x24A1A7BF4ED94B71(unk_0x8A5B683BACF7B78C(Local_95.f_3)) <= 150)
			{
				Local_95.f_20 = 1;
			}
		}
		switch (Local_95.f_20)
		{
			case 2:
				if (Local_95.f_21 == 3)
				{
					Local_95.f_20 = 4;
				}
				else if (Local_95.f_21 == 5)
				{
					Local_95.f_20 = 7;
				}
				else if (!unk_0x05EFB6A616B6FADE(Local_95, 7) && unk_0x10E54C268D1B3FED(unk_0x8A5B683BACF7B78C(Local_95.f_3), unk_0xA19140A5C42D8715(), 10f, 10f, 10f, 0, 1, 0))
				{
					Local_95.f_20 = 3;
				}
				break;
			
			case 4:
				unk_0x2BCFB39E86340DAA(&iLocal_97, 8);
				if (unk_0xD9C213BBD19D77F0(unk_0xBEA1D935EBAA95F3(Local_95.f_2)) <= 0)
				{
					Local_95.f_20 = 3;
					unk_0xFA57C719261AA55D(&iLocal_97, 8);
				}
				else if (!unk_0x05EFB6A616B6FADE(Local_95, 7) && unk_0xA60C975CBAB69F34(unk_0x8A5B683BACF7B78C(Local_95.f_3), Local_95.f_7, 10f, 10f, 10f, 0, 1, 0))
				{
					Local_95.f_20 = 5;
				}
				break;
			
			case 5:
				if ((unk_0xD9C213BBD19D77F0(unk_0xBEA1D935EBAA95F3(Local_95.f_2)) <= 0 && !unk_0x1C20350746ED9672(unk_0xA19140A5C42D8715(), unk_0xBEA1D935EBAA95F3(Local_95.f_2))) && func_31(unk_0xA19140A5C42D8715(), unk_0xBEA1D935EBAA95F3(Local_95.f_2), 1) >= 10f)
				{
					Local_95.f_20 = 6;
				}
				break;
			
			case 3:
				if (unk_0xD9C213BBD19D77F0(unk_0xBEA1D935EBAA95F3(Local_95.f_2)) >= 1)
				{
					Local_95.f_20 = 4;
				}
				break;
			
			case 6:
				if ((unk_0xD9C213BBD19D77F0(unk_0xBEA1D935EBAA95F3(Local_95.f_2)) <= 0 && !unk_0x1C20350746ED9672(unk_0xA19140A5C42D8715(), unk_0xBEA1D935EBAA95F3(Local_95.f_2))) && func_31(unk_0xA19140A5C42D8715(), unk_0xBEA1D935EBAA95F3(Local_95.f_2), 1) >= 10f)
				{
					if (unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_95.f_3), 242628503) == 1)
					{
						Local_95.f_20 = 7;
					}
				}
				break;
			
			case 1:
				if (unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_95.f_3), 242628503) == 1 && func_31(unk_0xA19140A5C42D8715(), unk_0x8A5B683BACF7B78C(Local_95.f_3), 1) >= 10f)
				{
					Local_95.f_20 = 7;
				}
				break;
			
			case 7:
				break;
			}
	}
}

float func_31(int iParam0, int iParam1, int iParam2)
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
	return unk_0x499324B3EF19C288(vVar0, vVar1, iParam2);
}

void func_32()
{
	switch (Local_95.f_21)
	{
		case 0:
			if (unk_0x05EFB6A616B6FADE(Local_95, 8) || unk_0xD9C213BBD19D77F0(unk_0xBEA1D935EBAA95F3(Local_95.f_2)) > 0)
			{
				Local_95.f_21 = 1;
			}
			break;
		
		case 1:
			if (unk_0x83A1DA4E6C55E952(Local_95.f_2))
			{
				if (unk_0xD9C213BBD19D77F0(unk_0xBEA1D935EBAA95F3(Local_95.f_2)) > 0)
				{
					Local_95.f_21 = 2;
				}
			}
			break;
		
		case 2:
			if (unk_0xD9C213BBD19D77F0(unk_0xBEA1D935EBAA95F3(Local_95.f_2)) > 0)
			{
				Local_95.f_21 = 3;
			}
			else if (unk_0x05EFB6A616B6FADE(Local_95, 10))
			{
				Local_95.f_21 = 4;
			}
			break;
		
		case 3:
			if (unk_0x83A1DA4E6C55E952(Local_95.f_2))
			{
				if (unk_0xD9C213BBD19D77F0(unk_0xBEA1D935EBAA95F3(Local_95.f_2)) <= 0)
				{
					Local_95.f_21 = 1;
				}
				else if (unk_0x05EFB6A616B6FADE(Local_95, 10))
				{
					Local_95.f_21 = 4;
				}
			}
			break;
		
		case 4:
			if (unk_0x83A1DA4E6C55E952(Local_95.f_2))
			{
				if ((unk_0xD9C213BBD19D77F0(unk_0xBEA1D935EBAA95F3(Local_95.f_2)) <= 0 && !unk_0x1C20350746ED9672(unk_0xA19140A5C42D8715(), unk_0xBEA1D935EBAA95F3(Local_95.f_2))) && func_31(unk_0xA19140A5C42D8715(), unk_0xBEA1D935EBAA95F3(Local_95.f_2), 1) >= 10f)
				{
					Local_95.f_21 = 5;
				}
			}
			break;
		
		case 5:
			break;
	}
}

void func_33()
{
	int iVar0;
	int iVar1;
	
	unk_0xFA57C719261AA55D(&Local_95, 9);
	iVar0 = 0;
	while (iVar0 < unk_0x48908CAFF1B58FF8())
	{
		if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(iVar0)))
		{
			iVar1 = unk_0x9279C21787650C40(unk_0xDF1881EF65347257(iVar0));
			if (func_3(iVar1, 1, 1))
			{
				if (func_70(Local_95.f_2))
				{
					if (!unk_0x05EFB6A616B6FADE(Local_95, 8))
					{
						if (unk_0xA60C975CBAB69F34(unk_0xBEA1D935EBAA95F3(Local_95.f_2), Local_95.f_10, (10f * 1.5f), (10f * 1.5f), (10f * 1.5f), 0, 1, 0))
						{
							unk_0x2BCFB39E86340DAA(&Local_95, 8);
						}
					}
					if (!unk_0x05EFB6A616B6FADE(Local_95, 7) || unk_0x05EFB6A616B6FADE(Local_95, 11))
					{
						if (!unk_0x05EFB6A616B6FADE(Local_95, 10))
						{
							if (unk_0xA60C975CBAB69F34(unk_0xBEA1D935EBAA95F3(Local_95.f_2), Local_95.f_7, (10f * 1.5f), (10f * 1.5f), (10f * 1.5f), 0, 1, 0))
							{
								unk_0x2BCFB39E86340DAA(&Local_95, 10);
							}
						}
					}
					if (!unk_0x05EFB6A616B6FADE(Local_95, 9))
					{
						if (unk_0x05EFB6A616B6FADE(vLocal_96[iVar0 /*3*/].f_1, 6))
						{
							unk_0x2BCFB39E86340DAA(&Local_95, 9);
							unk_0xFA57C719261AA55D(&(vLocal_96[iVar0 /*3*/].f_1), 6);
						}
					}
					if (Local_95.f_20 != 3)
					{
						if (unk_0x05EFB6A616B6FADE(vLocal_96[iVar0 /*3*/].f_1, 5))
						{
							Local_95.f_20 = 3;
							unk_0xFA57C719261AA55D(&(vLocal_96[iVar0 /*3*/].f_1), 5);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_34()
{
	vector3 vVar0;
	var uVar1;
	
	if ((Local_95.f_21 <= 2 || Local_95.f_20 == 2) || Local_95.f_20 == 3)
	{
		vVar0 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
		if ((!unk_0x26F67500F153320A(vVar0, &uVar1) || func_36()) || func_35())
		{
			Local_95.f_1 = 4;
		}
	}
}

int func_35()
{
	if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 2631.833f, 4526.624f, -10f, -380.1435f, 3906.702f, 78.484f, 1200f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 1731.902f, -123.8468f, 137.2596f, 2079.203f, 798.3421f, 249.3267f, 600f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 252.5025f, 855.094f, 148.1213f, -393.3539f, 695.785f, 272.1867f, 500f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_36()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), func_37(iVar0), 50f, 50f, 50f, 0, 1, 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_37(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 709.8127f, 6699.78f, 0f;
		
		case 1:
			return 1551.805f, 6686.052f, 0f;
		
		case 2:
			return 3260.507f, 5309.454f, 0f;
		
		case 3:
			return 3788.334f, 3812.693f, 0f;
		
		case 4:
			return 2945.665f, 1773.192f, 0f;
		
		case 5:
			return 2866.816f, -658.5848f, 0f;
		
		case 6:
			return 2342.881f, -2167.953f, 0f;
		
		case 7:
			return 1215.167f, -2728.054f, 0f;
		
		case 8:
			return 1305.229f, -3364.572f, 0f;
		
		case 9:
			return 293.8953f, -3361.616f, 0f;
		
		case 10:
			return -484.948f, -2940.643f, 0f;
		
		case 11:
			return -1387.61f, -1704.374f, 0f;
		
		case 12:
			return -1566.04f, -1312.232f, 0f;
		
		case 13:
			return -1920.23f, -849.6466f, 0f;
		
		case 14:
			return -2876.76f, -74.3269f, 0f;
		
		case 15:
			return -3133.45f, 604.7179f, 0f;
		
		case 16:
			return -3286.57f, 1285.372f, 0f;
		
		case 17:
			return -3205.53f, 3285.199f, 0f;
		
		case 18:
			return -2520.42f, 4240.671f, 0f;
		
		case 19:
			return -909.632f, 5830.909f, 0f;
		
		case 20:
			return -325.109f, 6584.622f, 0f;
		
		default:
	}
	return -673.5316f, 6175.048f, 0f;
}

int func_38()
{
	if (unk_0x36DEA7E26CBAB441(1, 1, 0, 0))
	{
		if (func_62(joaat("dinghy2")) && func_62(joaat("s_m_y_blackops_01")))
		{
			if (func_41() && func_39())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_39()
{
	if ((!unk_0x83A1DA4E6C55E952(Local_95.f_3) && func_62(joaat("s_m_y_blackops_01"))) && unk_0x83A1DA4E6C55E952(Local_95.f_2))
	{
		if (func_70(Local_95.f_2))
		{
			if (func_40(&(Local_95.f_3), Local_95.f_2, 22, joaat("s_m_y_blackops_01"), -1, 1, 1, 1))
			{
				unk_0x72A0FF8C49CFFC0D(unk_0x8A5B683BACF7B78C(Local_95.f_3), 0, 0, 1, 0);
				unk_0x72A0FF8C49CFFC0D(unk_0x8A5B683BACF7B78C(Local_95.f_3), 2, 1, 0, 0);
				unk_0x72A0FF8C49CFFC0D(unk_0x8A5B683BACF7B78C(Local_95.f_3), 3, 0, 1, 0);
				unk_0x72A0FF8C49CFFC0D(unk_0x8A5B683BACF7B78C(Local_95.f_3), 4, 0, 2, 0);
				unk_0x72A0FF8C49CFFC0D(unk_0x8A5B683BACF7B78C(Local_95.f_3), 8, 1, 0, 0);
				unk_0x72A0FF8C49CFFC0D(unk_0x8A5B683BACF7B78C(Local_95.f_3), 9, 0, 0, 0);
				if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/] != 0)
				{
					unk_0xDFA901280292A2FB(unk_0x8A5B683BACF7B78C(Local_95.f_3), Global_1574981);
				}
				else
				{
					unk_0xDFA901280292A2FB(unk_0x8A5B683BACF7B78C(Local_95.f_3), Global_1574664[2 /*94*/][2 /*31*/][2 /*10*/][2 /*3*/][0]);
				}
				unk_0xD738221C247C8B71(unk_0x8A5B683BACF7B78C(Local_95.f_3), 1);
				unk_0x1F4E5EFBFE503FB3(unk_0x8A5B683BACF7B78C(Local_95.f_3), 1);
				unk_0x6259CDB47862A4F3(unk_0x8A5B683BACF7B78C(Local_95.f_3), round((200f * Global_262145.f_153)), 0);
				unk_0xC35C0EB12F3FFC86(unk_0x8A5B683BACF7B78C(Local_95.f_3), 0);
				unk_0x13E0A8160525AE55(unk_0x8A5B683BACF7B78C(Local_95.f_3), 255, true);
			}
		}
	}
	if (!unk_0x83A1DA4E6C55E952(Local_95.f_3))
	{
		return 0;
	}
	unk_0xA5DE74AE39867B03(joaat("s_m_y_blackops_01"));
	return 1;
}

int func_40(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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

int func_41()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	
	if (!unk_0x83A1DA4E6C55E952(Local_95.f_2))
	{
		if (func_62(joaat("dinghy2")))
		{
			if (!unk_0x05EFB6A616B6FADE(iLocal_97, 10))
			{
				func_59(&vLocal_793, &fLocal_794);
				if (unk_0x604284C2FC63077C(vLocal_793 + Vector(2f, 0f, 0f), vLocal_793 - Vector(10f, 0f, 0f), &vLocal_793))
				{
					if (func_43(vLocal_793, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
					{
						vVar2 = { vLocal_793 + Vector(12f, 0f, 0f) };
						iLocal_791 = unk_0x1638D11E5ADADAF6(vVar2, 10f, 10f, 25f, 0f, 0f, -1f, 2, 1, 0, 4);
						if (iLocal_791 == 0)
						{
							return 0;
						}
						else
						{
							unk_0x2BCFB39E86340DAA(&iLocal_97, 10);
						}
					}
				}
			}
			else if (unk_0x7C00B4755E048785(iLocal_791, &iLocal_792, &uVar0, &uVar0, &uVar1) == 2)
			{
				iLocal_791 = 0;
				if (iLocal_792 == 0)
				{
					if (func_42(&(Local_95.f_2), joaat("dinghy2"), vLocal_793, fLocal_794, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						unk_0x9367024F29ABB6AC(unk_0xBEA1D935EBAA95F3(Local_95.f_2), 1);
						unk_0xC19EDC1D7179164C(unk_0xBEA1D935EBAA95F3(Local_95.f_2), 1, 1, 0);
						unk_0x625FB4B0328423D9(unk_0xBEA1D935EBAA95F3(Local_95.f_2), 12f);
						unk_0x3FB92963BD0665CB(unk_0xBEA1D935EBAA95F3(Local_95.f_2), 1);
						unk_0xEAF1F3E17588C851(unk_0xBEA1D935EBAA95F3(Local_95.f_2), 0);
					}
				}
				else
				{
					iLocal_792 = 0;
					unk_0xFA57C719261AA55D(&iLocal_97, 10);
				}
			}
			else if (unk_0x7C00B4755E048785(iLocal_791, &iLocal_792, &uVar0, &uVar0, &uVar1) == 0)
			{
				iLocal_791 = 0;
				unk_0xFA57C719261AA55D(&iLocal_97, 10);
			}
		}
	}
	if (!unk_0x83A1DA4E6C55E952(Local_95.f_2))
	{
		return 0;
	}
	unk_0xA5DE74AE39867B03(joaat("dinghy2"));
	return 1;
}

int func_42(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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

int func_43(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2405070.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x85A65397E2224648(vParam0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0x5ACD8081B0AC1F22(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || unk_0x5ACD8081B0AC1F22(vParam0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0xC980951B35C111AE(vParam0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (bParam11)
	{
		if (unk_0x06D718FC71673E5A(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (fParam12 > 0f)
	{
		if (func_52(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_44(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405070.f_2++;
	return 1;
}

int func_44(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_3(unk_0xD4E735F4B6A956AC(), 1, 1))
		{
			if (!unk_0x71364F510A1CB69F())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x499324B3EF19C288(func_48(unk_0xD4E735F4B6A956AC()), vParam0, 1) <= (fVar2 + fParam1))
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
		if (func_3(iVar1, 1, 1))
		{
			if (!func_46(iVar1, 0) && unk_0xBC6A832F36065FDF(unk_0xD4E735F4B6A956AC(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0xD4E735F4B6A956AC()))
				{
					if ((func_45(iVar1) || !bParam8) && !Global_2423801[iVar1 /*413*/].f_259)
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
								if (unk_0x499324B3EF19C288(func_48(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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
							if (unk_0x499324B3EF19C288(func_48(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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

int func_45(int iParam0)
{
	if (unk_0xD9755B4480864A6A(unk_0xEE978C39384D834F(iParam0)) || Global_2423801[iParam0 /*413*/].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_46(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_47(-1, 0) == 8;
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

int func_47(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

Vector3 func_48(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_51() && Global_1589747[iVar0 /*790*/].f_761) && !func_50(Global_1589747[iVar0 /*790*/].f_762))
	{
		return Global_1589747[iVar0 /*790*/].f_762;
	}
	return func_49(iParam0);
}

Vector3 func_49(int iParam0)
{
	return unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iParam0), 0);
}

int func_50(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_51()
{
	return Global_2448386.f_16;
}

int func_52(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0xD4E735F4B6A956AC() != iVar1) || iParam6 == 0)
		{
			if (func_3(iVar1, bParam2, bParam3))
			{
				if (unk_0xBC6A832F36065FDF(unk_0xD4E735F4B6A956AC(), iVar1))
				{
					if (!bParam5 || (!unk_0x4915F4759304D5CF(unk_0xEE978C39384D834F(iVar1)) && func_45(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) != unk_0xE46ECB9FD23D3264(iVar1))) || unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) == -1)
						{
							if (((unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) == -1 && uParam7) && bParam4) && func_53(iVar1))
							{
							}
							else if (unk_0xDC5D81351D6A4DDB(unk_0xEE978C39384D834F(iVar1)))
							{
								if (unk_0x499324B3EF19C288(func_49(iVar1), vParam0, 1) < fParam1)
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

int func_53(int iParam0)
{
	if (func_58(unk_0xD4E735F4B6A956AC(), iParam0))
	{
		return 1;
	}
	Global_2503649 = { func_57(iParam0) };
	if (unk_0x6053E2C13442D6D7(&Global_2503649))
	{
		return 1;
	}
	if (func_54(unk_0xD4E735F4B6A956AC(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_54(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_56(iParam0);
	if (!iVar0 == func_55())
	{
		if (iVar0 == func_56(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_55()
{
	return -1;
}

int func_56(int iParam0)
{
	if (iParam0 != func_55())
	{
		return Global_1625435[iParam0 /*560*/].f_11;
	}
	return func_55();
}

struct<13> func_57(int iParam0)
{
	struct<13> Var0;
	
	unk_0xE05C4303C26882C4(iParam0, &Var0, 13);
	return Var0;
}

int func_58(int iParam0, int iParam1)
{
	if (unk_0xD1832FEBE50B1AB1())
	{
		Global_2503649 = { func_57(iParam0) };
		Global_2503662 = { func_57(iParam1) };
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

void func_59(var uParam0, var uParam1)
{
	*uParam0 = { func_60(Local_95.f_10, (100f / 2f), 100f, 10f) };
	*uParam1 = unk_0x0C1B8F3F6EFDC58B((Local_95.f_10 - *uParam0), (Local_95.f_10.f_1 - uParam0->f_1));
}

Vector3 func_60(vector3 vParam0, float fParam1, float fParam2, float fParam3)
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { unk_0xF59B9063EDAC7451(-1f, 1f), unk_0xF59B9063EDAC7451(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	vVar0 = { func_61(vVar0, unk_0xF59B9063EDAC7451(fParam1, fParam2)) };
	vVar0.z = unk_0xF59B9063EDAC7451(-fVar1, fVar1);
	return vParam0 + vVar0;
}

Vector3 func_61(vector3 vParam0, float fParam1)
{
	float fVar0;
	
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

bool func_62(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xCACEBBBEAD8F262E(iParam0);
	return unk_0x7FC99CCC73354033(iParam0);
}

Vector3 func_63(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 0f;
	fVar4 = 10000f;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				fVar3 = unk_0x499324B3EF19C288(Local_95.f_10, func_37(iVar0), 1);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			vVar2 = { func_37(iVar1) };
			Local_95.f_6 = func_64(iVar1);
			Local_95.f_6 = func_64(iVar1);
			Local_95.f_13 = { Local_95.f_10, 8000f, 0f };
			return vVar2;
			break;
		
		case 1:
			iVar0 = 5;
			while (iVar0 <= 9)
			{
				fVar3 = unk_0x499324B3EF19C288(Local_95.f_10, func_37(iVar0), 1);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			vVar2 = { func_37(iVar1) };
			Local_95.f_6 = func_64(iVar1);
			Local_95.f_6 = func_64(iVar1);
			Local_95.f_13 = { 5000f, Local_95.f_10.f_1, 0f };
			return vVar2;
			break;
		
		case 2:
			iVar0 = 10;
			while (iVar0 <= 14)
			{
				fVar3 = unk_0x499324B3EF19C288(Local_95.f_10, func_37(iVar0), 1);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			vVar2 = { func_37(iVar1) };
			Local_95.f_6 = func_64(iVar1);
			Local_95.f_6 = func_64(iVar1);
			Local_95.f_13 = { Local_95.f_10, -5000f, 0f };
			return vVar2;
			break;
		
		case 3:
			iVar0 = 15;
			while (iVar0 <= 20)
			{
				fVar3 = unk_0x499324B3EF19C288(Local_95.f_10, func_37(iVar0), 1);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			vVar2 = { func_37(iVar1) };
			Local_95.f_6 = func_64(iVar1);
			Local_95.f_6 = func_64(iVar1);
			Local_95.f_13 = { -5000f, Local_95.f_10.f_1, 0f };
			return vVar2;
			break;
	}
	return -1392.428f, -1661.61f, 0f;
}

float func_64(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156.0512f;
		
		case 1:
			return 186.4808f;
		
		case 2:
			return 65.4787f;
		
		case 3:
			return 56.421f;
		
		case 4:
			return 76.4749f;
		
		case 5:
			return 79.1503f;
		
		case 6:
			return 24.8224f;
		
		case 7:
			return 27.7851f;
		
		case 8:
			return 32.1401f;
		
		case 9:
			return 329.6803f;
		
		case 10:
			return 328.7837f;
		
		case 11:
			return 283.9666f;
		
		case 12:
			return 295.5786f;
		
		case 13:
			return 314.4354f;
		
		case 14:
			return 0.4088f;
		
		case 15:
			return 287.0804f;
		
		case 16:
			return 249.5385f;
		
		case 17:
			return 270.7522f;
		
		case 18:
			return 260.8947f;
		
		case 19:
			return 248.4225f;
		
		case 20:
			return 233.6563f;
		
		default:
	}
	return 228.6098f;
}

int func_65()
{
	vector3 vVar0;
	
	vVar0 = { func_49(unk_0xD4E735F4B6A956AC()) };
	if (vVar0.y >= 0f && vVar0.x >= 0f)
	{
		return 0;
	}
	else if (vVar0.y < 0f && vVar0.x >= 0f)
	{
		return 1;
	}
	else if (vVar0.y < 0f && vVar0.x < 0f)
	{
		return 2;
	}
	else if (vVar0.y >= 0f && vVar0.x < 0f)
	{
		return 3;
	}
	return -1;
}

int func_66(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_67(uParam0, bParam2, 0);
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

void func_67(var uParam0, bool bParam1, bool bParam2)
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

int func_68(var uParam0)
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

void func_69(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x45F99485D7E1C29A())
		{
			func_67(uParam0, 0, 0);
		}
	}
}

int func_70(var uParam0)
{
	if (unk_0x83A1DA4E6C55E952(uParam0))
	{
		return !func_71(unk_0xBEA1D935EBAA95F3(uParam0));
	}
	return 0;
}

int func_71(int iParam0)
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

void func_72()
{
	if (func_3(unk_0xD4E735F4B6A956AC(), 1, 1))
	{
		if (Local_95.f_21 == 5)
		{
			vLocal_96[unk_0xD60943E3BE730BF0() /*3*/].f_2 = 5;
		}
		switch (vLocal_96[unk_0xD60943E3BE730BF0() /*3*/].f_2)
		{
			case 0:
				func_95();
				if (Local_95.f_21 > 0)
				{
					vLocal_96[unk_0xD60943E3BE730BF0() /*3*/].f_2 = 1;
				}
				break;
			
			case 1:
				if (func_70(Local_95.f_2))
				{
					func_125();
					if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), unk_0xBEA1D935EBAA95F3(Local_95.f_2), 0))
					{
						func_94();
						vLocal_96[unk_0xD60943E3BE730BF0() /*3*/].f_2 = 3;
						unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
						unk_0xFA57C719261AA55D(&(vLocal_96[unk_0xD60943E3BE730BF0() /*3*/].f_1), 0);
					}
				}
				break;
			
			case 2:
				if (func_70(Local_95.f_2))
				{
					if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), unk_0xBEA1D935EBAA95F3(Local_95.f_2), 0))
					{
						vLocal_96[unk_0xD60943E3BE730BF0() /*3*/].f_2 = 3;
						unk_0xFA57C719261AA55D(&(vLocal_96[unk_0xD60943E3BE730BF0() /*3*/].f_1), 5);
						unk_0x2BCFB39E86340DAA(&(vLocal_96[unk_0xD60943E3BE730BF0() /*3*/].f_1), 6);
						if (Local_95.f_21 >= 4)
						{
							vLocal_96[unk_0xD60943E3BE730BF0() /*3*/].f_2 = 4;
						}
					}
					else
					{
						vLocal_96[unk_0xD60943E3BE730BF0() /*3*/].f_2 = 1;
					}
				}
				break;
			
			case 3:
				if (func_70(Local_95.f_2))
				{
					if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), unk_0xBEA1D935EBAA95F3(Local_95.f_2), 0))
					{
						if (Local_95.f_21 >= 4)
						{
							vLocal_96[unk_0xD60943E3BE730BF0() /*3*/].f_2 = 4;
						}
						func_93();
					}
					else
					{
						vLocal_96[unk_0xD60943E3BE730BF0() /*3*/].f_2 = 1;
					}
				}
				break;
			
			case 4:
				if (func_70(Local_95.f_2))
				{
					if (!unk_0x05EFB6A616B6FADE(iLocal_97, 3))
					{
						if (unk_0xEAA5CEF8875FEEED(unk_0xBEA1D935EBAA95F3(Local_95.f_2)) < 3f)
						{
							unk_0xCB482EF95FAE4D73(unk_0xA19140A5C42D8715(), 0, 0);
							unk_0x2BCFB39E86340DAA(&iLocal_97, 3);
						}
					}
					if ((!unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), unk_0xBEA1D935EBAA95F3(Local_95.f_2), 0) && !unk_0x1C20350746ED9672(unk_0xA19140A5C42D8715(), unk_0xBEA1D935EBAA95F3(Local_95.f_2))) && func_31(unk_0xA19140A5C42D8715(), unk_0xBEA1D935EBAA95F3(Local_95.f_2), 1) >= 10f)
					{
						vLocal_96[unk_0xD60943E3BE730BF0() /*3*/].f_2 = 5;
					}
				}
				break;
			
			case 5:
				func_140();
				break;
		}
		func_73();
	}
}

void func_73()
{
	int iVar0;
	struct<9> Var1;
	
	if (unk_0x0FA486DE15EB3004(uLocal_103))
	{
		if (func_88(1, 1))
		{
			if (((vLocal_96[unk_0xD60943E3BE730BF0() /*3*/].f_2 == 1 || vLocal_96[unk_0xD60943E3BE730BF0() /*3*/].f_2 == 2) || vLocal_96[unk_0xD60943E3BE730BF0() /*3*/].f_2 == 3) || vLocal_96[unk_0xD60943E3BE730BF0() /*3*/].f_2 == 4)
			{
				iVar0 = 1;
				Var1 = { func_87() };
				func_85(&uLocal_104);
				if (vLocal_96[unk_0xD60943E3BE730BF0() /*3*/].f_2 == 1)
				{
					if (func_70(Local_95.f_2))
					{
						if ((unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), unk_0xBEA1D935EBAA95F3(Local_95.f_2), 10f, 10f, 3f, 0, 1, 0) && !unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0)) && !func_84(unk_0xBEA1D935EBAA95F3(Local_95.f_2), 0))
						{
							func_83(unk_0x7391BCD755BD8577(2, 23, true), "BTX_ENTER", &uLocal_104, 0);
						}
					}
				}
				else
				{
					iVar0 = 0;
				}
				if (iVar0 == 1)
				{
					func_93();
					func_82(1);
					func_74(&uLocal_103, &Var1, &uLocal_104, func_81(&uLocal_104));
				}
			}
		}
	}
	else
	{
		uLocal_103 = unk_0xB00CD6895BDB01A0("instructional_buttons");
	}
}

void func_74(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 1 || unk_0x1BFD4084A40BF7E1(2))
	{
		*uParam2 = 0;
		if (unk_0x0FA486DE15EB3004(*uParam0))
		{
			if (unk_0x47C01C0E6F4C1D06())
			{
				unk_0x31A9E530D137684F(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x233A5B4A35140C6B(false);
				unk_0x271C1332F482646C();
			}
			unk_0x31A9E530D137684F(*uParam0, "CLEAR_ALL");
			unk_0x271C1332F482646C();
		}
		func_80(uParam2);
	}
	if (Global_1315696 < 2)
	{
		func_79(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0x0FA486DE15EB3004(*uParam0))
		{
			*uParam0 = unk_0xB00CD6895BDB01A0("instructional_buttons");
		}
		if (unk_0x0FA486DE15EB3004(*uParam0))
		{
			unk_0xEEBD65BF77C64926(*uParam0, "CLEAR_ALL");
			if (unk_0x47C01C0E6F4C1D06())
			{
				unk_0x31A9E530D137684F(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x233A5B4A35140C6B(true);
				unk_0x271C1332F482646C();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_680)
			{
				if (unk_0x05EFB6A616B6FADE(uParam2->f_676, iVar0))
				{
					unk_0x31A9E530D137684F(*uParam0, "SET_DATA_SLOT");
					unk_0x380580A1A1667F69(iVar0);
					if (!unk_0x05EFB6A616B6FADE(uParam2->f_677, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*56*/].f_53;
						iVar2 = uParam2->f_1[iVar0 /*56*/].f_54;
						iVar3 = uParam2->f_1[iVar0 /*56*/].f_55;
						func_78(unk_0x7391BCD755BD8577(iVar1, iVar2, true));
						if (iVar3 < 358)
						{
							func_78(unk_0x7391BCD755BD8577(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*56*/].f_53;
						iVar5 = uParam2->f_1[iVar0 /*56*/].f_54;
						func_78(unk_0xDD4AF94EF709B596(iVar4, iVar5, true));
					}
					if (unk_0x05EFB6A616B6FADE(uParam2->f_674, iVar0))
					{
						unk_0x390B339C943A8A54(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0x90182C5171067861(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0xCDA87E1DA52C8C9D(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0xD481829E3E36543B();
					}
					else if (unk_0x05EFB6A616B6FADE(uParam2->f_675, iVar0))
					{
						unk_0x390B339C943A8A54(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0xC327C023FDA37F2E(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0xD481829E3E36543B();
					}
					else
					{
						func_77(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0x47C01C0E6F4C1D06())
					{
						if (unk_0x05EFB6A616B6FADE(uParam2->f_678, iVar0))
						{
							unk_0x233A5B4A35140C6B(true);
							unk_0x380580A1A1667F69(uParam2->f_1[iVar0 /*56*/].f_54);
						}
						else
						{
							unk_0x233A5B4A35140C6B(false);
							unk_0x380580A1A1667F69(358);
						}
					}
					unk_0x271C1332F482646C();
				}
				else
				{
					unk_0x31A9E530D137684F(*uParam0, "SET_DATA_SLOT");
					unk_0x380580A1A1667F69(iVar0);
					func_78(&(uParam2->f_1[iVar0 /*56*/]));
					if (!unk_0x429D45A6C6520026(&(uParam2->f_1[iVar0 /*56*/].f_16)))
					{
						func_78(&(uParam2->f_1[iVar0 /*56*/].f_16));
					}
					if (unk_0x05EFB6A616B6FADE(uParam2->f_674, iVar0))
					{
						unk_0x390B339C943A8A54(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0x90182C5171067861(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0xCDA87E1DA52C8C9D(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0xD481829E3E36543B();
					}
					else if (unk_0x05EFB6A616B6FADE(uParam2->f_675, iVar0))
					{
						unk_0x390B339C943A8A54(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0xC327C023FDA37F2E(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0xD481829E3E36543B();
					}
					else
					{
						func_77(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0x47C01C0E6F4C1D06())
					{
						unk_0x233A5B4A35140C6B(false);
						unk_0x380580A1A1667F69(358);
					}
					unk_0x271C1332F482646C();
				}
				iVar0++;
			}
			unk_0x31A9E530D137684F(*uParam0, "SET_MAX_WIDTH");
			unk_0xD8B5988E85F72BE5(uParam2->f_686);
			unk_0x271C1332F482646C();
			unk_0x31A9E530D137684F(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x380580A1A1667F69(0);
			unk_0x271C1332F482646C();
			*uParam2 = 1;
		}
	}
	uParam2->f_682 = 0.05f;
	uParam2->f_683 = 0.045f;
	uParam2->f_684 = 0f;
	uParam2->f_685 = 0f;
	if (*uParam2 == 1)
	{
		func_76(*uParam0, uParam1);
	}
	func_75();
}

void func_75()
{
	unk_0xD8C147DA332E7F06(7);
	unk_0xD8C147DA332E7F06(6);
	unk_0xD8C147DA332E7F06(8);
	unk_0xD8C147DA332E7F06(9);
}

void func_76(var uParam0, var uParam1)
{
	unk_0xE9F9BA9108F437C7(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_77(char* sParam0)
{
	unk_0x390B339C943A8A54(sParam0);
	unk_0xD481829E3E36543B();
}

void func_78(char* sParam0)
{
	unk_0x0BAAED7962F122D5(sParam0);
}

void func_79(int iParam0)
{
	Global_1315696 = iParam0;
}

void func_80(var uParam0)
{
	uParam0->f_679 = 0;
}

int func_81(var uParam0)
{
	return uParam0->f_679;
}

void func_82(int iParam0)
{
	Global_1369750.f_1079 = iParam0;
}

void func_83(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	int iVar0;
	
	if (uParam2->f_680 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_680;
	StringCopy(&(uParam2->f_1[iVar0 /*56*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*56*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*56*/].f_32), sParam1, 16);
	uParam2->f_680++;
}

int func_84(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		iVar1 = unk_0xD63FAD81FAF5E0CB(iParam0) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (unk_0x588F5E48C78F1C73(iParam0, (iVar0 - 1), 0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				iVar2 = unk_0xB0D49A1F9F054602(iParam0, (iVar0 - 1), 0);
				if (unk_0x4915F4759304D5CF(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

void func_85(var uParam0)
{
	func_86(uParam0);
	uParam0->f_679 = 1;
}

void func_86(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*56*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*56*/].f_36 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_37), "", 64);
		uParam0->f_1[iVar0 /*56*/].f_53 = 2;
		uParam0->f_1[iVar0 /*56*/].f_54 = 358;
		uParam0->f_1[iVar0 /*56*/].f_55 = 358;
		iVar0++;
	}
	uParam0->f_674 = 0;
	uParam0->f_675 = 0;
	uParam0->f_676 = 0;
	uParam0->f_678 = 0;
	uParam0->f_677 = 0;
	uParam0->f_679 = 0;
	uParam0->f_680 = 0;
	uParam0->f_682 = 0f;
	uParam0->f_683 = 0f;
	uParam0->f_684 = 0f;
	uParam0->f_685 = 0f;
	uParam0->f_686 = 1f;
}

struct<9> func_87()
{
	struct<9> Var0;
	
	Var0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

int func_88(int iParam0, int iParam1)
{
	if (unk_0xD1ABB20CFF127CCC())
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (func_92())
		{
			return 0;
		}
	}
	if (func_29())
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		if (func_91(0))
		{
			return 0;
		}
	}
	if (func_90(8, -1))
	{
		return 0;
	}
	if (unk_0x2F161E7C6520CC0A())
	{
		return 0;
	}
	if (func_89())
	{
		return 0;
	}
	if (Global_53362)
	{
		return 0;
	}
	if (Global_68494)
	{
		return 0;
	}
	if (unk_0x4EAEDDFEDE3BEE19())
	{
		return 0;
	}
	if (Global_1312782)
	{
		return 0;
	}
	if (Global_1574174)
	{
		return 0;
	}
	return 1;
}

bool func_89()
{
	return Global_1312857;
}

bool func_90(int iParam0, int iParam1)
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

int func_91(int iParam0)
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

bool func_92()
{
	return unk_0xFD34717937104F1C() <= Global_17367.f_5873 + 100;
}

void func_93()
{
	Global_2535232.f_258 = 1;
}

void func_94()
{
	if (unk_0xCE3CB618AFE55EFB(iLocal_99))
	{
		unk_0xE1623437A3194332(&iLocal_99);
	}
}

void func_95()
{
	int iVar0;
	
	if (!unk_0xE06AA0996C4E4E03())
	{
		iVar0 = func_26(1190, -1, 0);
		if (!unk_0x05EFB6A616B6FADE(iVar0, 15))
		{
			func_97("BTX_HELP1", -1);
			unk_0x2BCFB39E86340DAA(&iVar0, 15);
			func_96(1190, iVar0, -1, 1, 0);
		}
	}
}

void func_96(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_27(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
}

void func_97(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, 1, iParam1);
}

void func_98()
{
	if (!func_4(Local_95.f_3) && func_70(Local_95.f_2))
	{
		if (unk_0xABF0452BE64AD290(Local_95.f_3) || (!unk_0x8F01F94322569B77(Local_95.f_3) && unk_0x45F99485D7E1C29A()))
		{
			func_123();
			func_102();
			if (func_101(Local_95.f_3))
			{
				unk_0xB0D7019224A3A443(unk_0x8A5B683BACF7B78C(Local_95.f_3), 323, 1);
			}
			switch (Local_95.f_20)
			{
				case 0:
					break;
				
				case 2:
					if (unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_95.f_3), -1273030092) != 1 && unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_95.f_3), -1273030092) != 0)
					{
						unk_0xD4A86DC516DB158F(unk_0x8A5B683BACF7B78C(Local_95.f_3), unk_0xBEA1D935EBAA95F3(Local_95.f_2), 0, unk_0xA19140A5C42D8715(), 0f, 0f, 0f, 4, 12f, 786469, 10f, 1071);
					}
					break;
				
				case 4:
					func_100(unk_0xE2BBD32891C18569(unk_0xBEA1D935EBAA95F3(Local_95.f_2), 0), Local_95.f_7);
					unk_0x7E393C5E27D0ACA8(fLocal_966, fLocal_968, fLocal_967, fLocal_969);
					if (unk_0x789CFCFF551BAB0A(fLocal_966, fLocal_968, fLocal_967, fLocal_969))
					{
						if (unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_95.f_3), 242628503) != 1 && unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_95.f_3), 242628503) != 0)
						{
							unk_0xE1072FA2FECBAD96(unk_0x8A5B683BACF7B78C(Local_95.f_3), uLocal_102);
						}
					}
					break;
				
				case 5:
					if (unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_95.f_3), -1273030092) != 1 && unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_95.f_3), -1273030092) != 0)
					{
						unk_0xD776C8F3311B26BC(unk_0x8A5B683BACF7B78C(Local_95.f_3), unk_0xBEA1D935EBAA95F3(Local_95.f_2), unk_0xE2BBD32891C18569(unk_0xBEA1D935EBAA95F3(Local_95.f_2), 1), 5, 5f, 1076625579, 2f, 1f, 1);
					}
					break;
				
				case 3:
					if (unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_95.f_3), -1273030092) != 1 && unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_95.f_3), -1273030092) != 0)
					{
						unk_0xD776C8F3311B26BC(unk_0x8A5B683BACF7B78C(Local_95.f_3), unk_0xBEA1D935EBAA95F3(Local_95.f_2), unk_0xE2BBD32891C18569(unk_0xBEA1D935EBAA95F3(Local_95.f_2), 1), 5, 5f, 1076625579, 2f, 1f, 1);
					}
					break;
				
				case 1:
					if (!unk_0x05EFB6A616B6FADE(vLocal_96[unk_0xD60943E3BE730BF0() /*3*/].f_1, 7))
					{
						if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), unk_0xBEA1D935EBAA95F3(Local_95.f_2), 0) || unk_0x1C20350746ED9672(unk_0xA19140A5C42D8715(), unk_0xBEA1D935EBAA95F3(Local_95.f_2)))
						{
							unk_0x1CCA743B14705812(unk_0x8A5B683BACF7B78C(Local_95.f_3), 0);
							unk_0xD5236C38FDF763FC(unk_0x8A5B683BACF7B78C(Local_95.f_3), 0);
							unk_0xC2C4AE9DB4A0BEF3(unk_0x8A5B683BACF7B78C(Local_95.f_3), 2, false);
							unk_0xE1072FA2FECBAD96(unk_0x8A5B683BACF7B78C(Local_95.f_3), uLocal_100);
						}
						else
						{
							unk_0x1CCA743B14705812(unk_0x8A5B683BACF7B78C(Local_95.f_3), 0);
							unk_0xD5236C38FDF763FC(unk_0x8A5B683BACF7B78C(Local_95.f_3), 0);
							unk_0xC2C4AE9DB4A0BEF3(unk_0x8A5B683BACF7B78C(Local_95.f_3), 2, true);
							unk_0xE1072FA2FECBAD96(unk_0x8A5B683BACF7B78C(Local_95.f_3), uLocal_101);
						}
						unk_0x2BCFB39E86340DAA(&(vLocal_96[unk_0xD60943E3BE730BF0() /*3*/].f_1), 7);
					}
					break;
				
				case 6:
					if (unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_95.f_3), 242628503) != 1 && unk_0xF9D4EF1338E38AFB(unk_0x8A5B683BACF7B78C(Local_95.f_3), 242628503) != 0)
					{
						unk_0xE1072FA2FECBAD96(unk_0x8A5B683BACF7B78C(Local_95.f_3), uLocal_101);
					}
					break;
				
				case 7:
					if (unk_0x83A1DA4E6C55E952(Local_95.f_2))
					{
						func_99(&(Local_95.f_2));
					}
					if (unk_0x83A1DA4E6C55E952(Local_95.f_3))
					{
						unk_0xD738221C247C8B71(unk_0x8A5B683BACF7B78C(Local_95.f_3), 1);
						func_99(&(Local_95.f_3));
					}
					break;
				}
			}
	}
}

void func_99(var uParam0)
{
	var uVar0;
	
	if (unk_0xAABBF7FA3E338B30(*uParam0))
	{
		uVar0 = unk_0x1C3E3FC5D339FC8C(*uParam0);
		unk_0x69C8D2CAA0701F42(&uVar0);
	}
}

void func_100(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3)
{
	if (Param0 < Param2)
	{
		fLocal_966 = (Param0 - 25f);
		fLocal_967 = (Param2 + 25f);
	}
	else if (Param0 > Param2)
	{
		fLocal_966 = (Param2 - 25f);
		fLocal_967 = (Param0 + 25f);
	}
	if (Param0.f_1 < Param2.f_1)
	{
		fLocal_968 = (Param0.f_1 - 25f);
		fLocal_969 = (Param2.f_1 + 25f);
	}
	else if (Param0.f_1 > Param2.f_1)
	{
		fLocal_968 = (Param2.f_1 - 25f);
		fLocal_969 = (Param0.f_1 + 25f);
	}
}

int func_101(var uParam0)
{
	if (unk_0x83A1DA4E6C55E952(uParam0))
	{
		unk_0xEDB53D3BCBFC886E(uParam0);
		return unk_0xABF0452BE64AD290(uParam0);
	}
	return 0;
}

void func_102()
{
	int iVar0;
	struct<2> Var1;
	
	if (!unk_0x05EFB6A616B6FADE(iLocal_97, 4))
	{
		if (unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), unk_0x8A5B683BACF7B78C(Local_95.f_3), 15f, 15f, 15f, 0, 1, 0))
		{
			func_122(&uLocal_795, 8, unk_0x8A5B683BACF7B78C(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_106(&uLocal_795, "FMAMBAU", "FMA_BPDA", 12, 0, 0, 1))
			{
				unk_0x22DD1D053CFF9707(unk_0x8A5B683BACF7B78C(Local_95.f_3), unk_0xA19140A5C42D8715(), 5000, 0, 2);
				unk_0x2BCFB39E86340DAA(&iLocal_97, 4);
			}
		}
	}
	if (!unk_0x05EFB6A616B6FADE(iLocal_97, 6))
	{
		if (Local_95.f_20 == 4)
		{
			func_122(&uLocal_795, 8, unk_0x8A5B683BACF7B78C(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_106(&uLocal_795, "FMAMBAU", "FMA_BPDA3", 12, 0, 0, 1))
			{
				unk_0x22DD1D053CFF9707(unk_0x8A5B683BACF7B78C(Local_95.f_3), unk_0xA19140A5C42D8715(), 5000, 0, 2);
				unk_0x2BCFB39E86340DAA(&iLocal_97, 6);
			}
		}
	}
	if (!unk_0x05EFB6A616B6FADE(iLocal_97, 5))
	{
		if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), Local_95.f_7, (10f * 2f), (10f * 2f), (10f * 2f), 0, 1, 0))
		{
			func_122(&uLocal_795, 8, unk_0x8A5B683BACF7B78C(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_106(&uLocal_795, "FMAMBAU", "FMA_BPDA6", 12, 0, 0, 1))
			{
				unk_0x22DD1D053CFF9707(unk_0x8A5B683BACF7B78C(Local_95.f_3), unk_0xA19140A5C42D8715(), 5000, 0, 2);
				unk_0x2BCFB39E86340DAA(&iLocal_97, 5);
			}
		}
	}
	if (!unk_0x05EFB6A616B6FADE(iLocal_97, 7))
	{
		if (Local_95.f_20 == 5)
		{
			func_122(&uLocal_795, 8, unk_0x8A5B683BACF7B78C(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_106(&uLocal_795, "FMAMBAU", "FMA_BPDA7", 12, 0, 0, 1))
			{
				unk_0x22DD1D053CFF9707(unk_0x8A5B683BACF7B78C(Local_95.f_3), unk_0xA19140A5C42D8715(), 5000, 0, 2);
				unk_0x2BCFB39E86340DAA(&iLocal_97, 7);
			}
		}
	}
	if (!unk_0x05EFB6A616B6FADE(iLocal_97, 8))
	{
		func_122(&uLocal_795, 8, unk_0x8A5B683BACF7B78C(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
		if (func_106(&uLocal_795, "FMAMBAU", "FMA_BPDA4", 12, 0, 0, 1))
		{
			unk_0x22DD1D053CFF9707(unk_0x8A5B683BACF7B78C(Local_95.f_3), unk_0xA19140A5C42D8715(), 5000, 0, 2);
			unk_0x2BCFB39E86340DAA(&iLocal_97, 8);
		}
	}
	if (Local_95.f_20 == 3)
	{
		if (func_66(&uLocal_961, 30000, 0))
		{
			func_122(&uLocal_795, 8, unk_0x8A5B683BACF7B78C(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_106(&uLocal_795, "FMAMBAU", "FMA_BPDA2", 12, 0, 0, 1))
			{
				unk_0x22DD1D053CFF9707(unk_0x8A5B683BACF7B78C(Local_95.f_3), unk_0xA19140A5C42D8715(), 5000, 0, 2);
				func_105(&uLocal_961, 0, 0);
			}
		}
	}
	if (Local_95.f_20 == 4)
	{
		if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) <= 0)
		{
			if (func_66(&uLocal_964, iLocal_963, 0))
			{
				iVar0 = unk_0x22C775856F4633CA(0, 17);
				StringCopy(&Var1, "", 16);
				if (!unk_0x05EFB6A616B6FADE(iLocal_98, iVar0))
				{
					switch (iVar0)
					{
						case 0:
							StringCopy(&Var1, "FMA_BPDA5", 16);
							break;
						
						case 1:
							StringCopy(&Var1, "FMA_BPDA5b", 16);
							break;
						
						case 2:
							StringCopy(&Var1, "FMA_BPDA5c", 16);
							break;
						
						case 3:
							StringCopy(&Var1, "FMA_BPDA5d", 16);
							break;
						
						case 4:
							StringCopy(&Var1, "FMA_BPDA5e", 16);
							break;
						
						case 5:
							StringCopy(&Var1, "FMA_BPDA5f", 16);
							break;
						
						case 6:
							StringCopy(&Var1, "FMA_BPDA5g", 16);
							break;
						
						case 7:
							StringCopy(&Var1, "FMA_BPDA5h", 16);
							break;
						
						case 8:
							StringCopy(&Var1, "FMA_BPDA5i", 16);
							break;
						
						case 9:
							StringCopy(&Var1, "FMA_BPDA5j", 16);
							break;
						
						case 10:
							StringCopy(&Var1, "FMA_BPDA5k", 16);
							break;
						
						case 11:
							StringCopy(&Var1, "FMA_BPDA5l", 16);
							break;
						
						case 12:
							StringCopy(&Var1, "FMA_BPDA5m", 16);
							break;
						
						case 13:
							StringCopy(&Var1, "FMA_BPDA5n", 16);
							break;
						
						case 14:
							StringCopy(&Var1, "FMA_BPDA5o", 16);
							break;
						
						case 15:
							StringCopy(&Var1, "FMA_BPDA5p", 16);
							break;
						
						case 16:
							StringCopy(&Var1, "FMA_BPDA5q", 16);
							break;
					}
					if (!unk_0x429D45A6C6520026(&Var1))
					{
						func_122(&uLocal_795, 8, unk_0x8A5B683BACF7B78C(Local_95.f_3), "FM_DRIVER_BOAT", 0, 1);
						if (func_106(&uLocal_795, "FMAMBAU", &Var1, 12, 0, 0, 1))
						{
							func_105(&uLocal_964, 0, 0);
							unk_0x2BCFB39E86340DAA(&iLocal_98, iVar0);
							unk_0x22DD1D053CFF9707(unk_0x8A5B683BACF7B78C(Local_95.f_3), unk_0xA19140A5C42D8715(), 5000, 0, 2);
							iLocal_963 = (unk_0x22C775856F4633CA(20000, 30001) + iVar0 * 500);
						}
					}
				}
			}
		}
	}
	if (!func_4(Local_95.f_3))
	{
		if (func_70(Local_95.f_2))
		{
			if (!unk_0xF59ACE94F067B46D(unk_0x8A5B683BACF7B78C(Local_95.f_3)) && !unk_0xACF7649F30E8644E(unk_0x8A5B683BACF7B78C(Local_95.f_3)))
			{
				if (unk_0xDEAEC99031DCB92A(unk_0xBEA1D935EBAA95F3(Local_95.f_2), unk_0xA19140A5C42D8715(), 1) || unk_0xDEAEC99031DCB92A(unk_0x8A5B683BACF7B78C(Local_95.f_3), unk_0xA19140A5C42D8715(), 1))
				{
					switch (unk_0x22C775856F4633CA(0, 6))
					{
						case 0:
							func_103(unk_0x8A5B683BACF7B78C(Local_95.f_3), "GENERIC_SHOCKED_MED", 3);
							break;
						
						case 1:
							func_103(unk_0x8A5B683BACF7B78C(Local_95.f_3), "GENERIC_SHOCKED_HIGH", 3);
							break;
						
						case 2:
							func_103(unk_0x8A5B683BACF7B78C(Local_95.f_3), "GENERIC_FRIGHTENED_MED", 3);
							break;
						
						case 3:
							func_103(unk_0x8A5B683BACF7B78C(Local_95.f_3), "GENERIC_FRIGHTENED_HIGH", 3);
							break;
						
						case 4:
							func_103(unk_0x8A5B683BACF7B78C(Local_95.f_3), "GENERIC_CURSE_MED", 3);
							break;
						
						case 5:
							func_103(unk_0x8A5B683BACF7B78C(Local_95.f_3), "GENERIC_CURSE_HIGH", 3);
							break;
					}
					unk_0xDCB46BFC2265476A(unk_0xBEA1D935EBAA95F3(Local_95.f_2));
					unk_0xDCB46BFC2265476A(unk_0x8A5B683BACF7B78C(Local_95.f_3));
				}
			}
			else
			{
				unk_0xDCB46BFC2265476A(unk_0xBEA1D935EBAA95F3(Local_95.f_2));
				unk_0xDCB46BFC2265476A(unk_0x8A5B683BACF7B78C(Local_95.f_3));
			}
		}
	}
}

void func_103(int iParam0, char* sParam1, int iParam2)
{
	unk_0xE85BD4A26C0DFACA(iParam0, sParam1, func_104(iParam2), 1);
}

int func_104(int iParam0)
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

void func_105(var uParam0, bool bParam1, bool bParam2)
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

bool func_106(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_121(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_107(sParam2, iParam3, 0);
}

int func_107(char* sParam0, int iParam1, bool bParam2)
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
					func_120();
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
		if (func_90(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_119();
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
				func_112();
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
				if (func_111())
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
			if (func_110())
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
			func_109();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_108();
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
		func_120();
	}
	return 0;
}

void func_108()
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

void func_109()
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

int func_110()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_111()
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

void func_112()
{
	if (func_118(14))
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
		Global_14513 = func_113();
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

var func_113()
{
	func_114();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_114()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_117(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_116(unk_0xA19140A5C42D8715());
			if (func_115(iVar0) && (!func_118(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_115(Global_106070.f_2355.f_539.f_4301))
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

bool func_115(int iParam0)
{
	return iParam0 < 3;
}

int func_116(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_117(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_117(int iParam0)
{
	if (func_115(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_118(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_119()
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

void func_120()
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

void func_121(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_122(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_123()
{
	unk_0x0B756FF7161B9AB0("MobileRadioInGame", 0);
	if (func_3(unk_0xD4E735F4B6A956AC(), 1, 1))
	{
		if (unk_0xB10F7FE89663CB5B(unk_0xA19140A5C42D8715(), unk_0xBEA1D935EBAA95F3(Local_95.f_2)) && !func_124(unk_0xA19140A5C42D8715(), unk_0xBEA1D935EBAA95F3(Local_95.f_2), -1))
		{
			unk_0x0B756FF7161B9AB0("MobileRadioInGame", 1);
		}
	}
}

int func_124(int iParam0, int iParam1, int iParam2)
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

void func_125()
{
	if (!unk_0xCE3CB618AFE55EFB(iLocal_99))
	{
		if (func_70(Local_95.f_2))
		{
			iLocal_99 = unk_0x6A15DD6A863D5E27(unk_0xBEA1D935EBAA95F3(Local_95.f_2));
			unk_0x7DB79A42AADE120F(iLocal_99, 356);
			unk_0xC4F12E446CCE89F5(iLocal_99, "BTX_BLIP");
			unk_0x0798CD089167D3C1(iLocal_99, 1);
			unk_0x1B5988A07C8647C3(iLocal_99, 6);
		}
	}
}

void func_126()
{
	if (func_70(Local_95.f_2))
	{
		unk_0x2F89329397A277BC(&uLocal_102);
		unk_0xD4A86DC516DB158F(0, unk_0xBEA1D935EBAA95F3(Local_95.f_2), 0, 0, Local_95.f_7, 4, 12f, 786469, 10f, 1071);
		unk_0x301F42EEE3C40328(uLocal_102);
		unk_0x2F89329397A277BC(&uLocal_101);
		unk_0xD776C8F3311B26BC(0, unk_0xBEA1D935EBAA95F3(Local_95.f_2), Local_95.f_13, 4, 12f, 786469, 0f, 0f, 1);
		unk_0x731722E696597BD1(0, unk_0xBEA1D935EBAA95F3(Local_95.f_2), 12f, 786469);
		unk_0x301F42EEE3C40328(uLocal_101);
		unk_0x2F89329397A277BC(&uLocal_100);
		unk_0xCB482EF95FAE4D73(0, 0, 64);
		if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			unk_0x33B5487515BD13D5(0, unk_0xA19140A5C42D8715(), 300f, -1, 0, 0);
		}
		else
		{
			unk_0x1CBE3F8ED90509B2(0, 1193033728, 0);
		}
		unk_0x301F42EEE3C40328(uLocal_100);
	}
}

int func_127()
{
	return Local_95.f_1;
}

int func_128(int iParam0)
{
	return vLocal_96[iParam0 /*3*/];
}

int func_129()
{
	var uVar0;
	
	func_136(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			return 1;
		}
	}
	if (func_135())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_134())
	{
		return 1;
	}
	if (func_133(157))
	{
		if (!func_132())
		{
			return 1;
		}
	}
	if (func_133(155))
	{
		return 1;
	}
	if (!unk_0x18F86E07E41D913F())
	{
		return 1;
	}
	if (func_130() != 0)
	{
		if (unk_0x8B1574454E8C2421(func_130()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_130()
{
	switch (func_131())
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

int func_131()
{
	return Global_25459;
}

bool func_132()
{
	return Global_2448386.f_587;
}

int func_133(int iParam0)
{
	if (unk_0xF10AFD11E6EE81BF(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_134()
{
	return Global_2458191;
}

bool func_135()
{
	return Global_2448386.f_582;
}

void func_136(var uParam0)
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
					func_137(iVar0);
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

void func_137(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x8866A4E42CDA3EF1(1, iParam0, &vVar0, 3))
	{
		if (func_3(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xEE978C39384D834F(vVar0.y);
			if (unk_0xDC5D81351D6A4DDB(iVar1))
			{
				if (unk_0x5D7DFE2058701942(iVar1, 0))
				{
					iVar2 = unk_0xCAEB6CE71A2C7212(iVar1, 0);
					if (unk_0xEB1A41F6F719807C(iVar2, vVar0.z) && unk_0xB592B7A61F21E7A5())
					{
						if (func_138(iVar2, &bVar3))
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

int func_138(int iParam0, var uParam1)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (!unk_0x4943BEEC19289B8E(iParam0))
		{
			if (unk_0xCC01DCC72D8B9E39(iParam0))
			{
				if (!unk_0x289FBFAD3E416C48(unk_0x8F474E419F56E48D(iParam0)))
				{
					unk_0x1F7948851FB36E88(iParam0, 0, 1);
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

void func_139()
{
	wait(0);
}

void func_140()
{
	func_94();
	if (unk_0x4C9BACA8D249CB13())
	{
		if (Local_95.f_20 == 7)
		{
			if (func_70(Local_95.f_2) && !func_4(Local_95.f_3))
			{
				unk_0xE1072FA2FECBAD96(unk_0x8A5B683BACF7B78C(Local_95.f_3), uLocal_101);
			}
			if (unk_0x83A1DA4E6C55E952(Local_95.f_2))
			{
				if (unk_0xABF0452BE64AD290(Local_95.f_2))
				{
					func_99(&(Local_95.f_2));
				}
			}
			if (unk_0x83A1DA4E6C55E952(Local_95.f_3))
			{
				if (unk_0xABF0452BE64AD290(Local_95.f_3))
				{
					func_99(&(Local_95.f_3));
				}
			}
		}
	}
	func_143(func_144(1, 1), 9, func_55());
	func_142();
	unk_0x86795B44CE5FE021(&uLocal_103);
	func_141();
}

void func_141()
{
	unk_0x8F1A9FE6D91AAFEB();
}

void func_142()
{
	unk_0x3A95A0A3221D4208(&uLocal_100);
	unk_0x3A95A0A3221D4208(&uLocal_101);
	unk_0x3A95A0A3221D4208(&uLocal_102);
}

void func_143(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0 = 1124974988;
	Var0.f_1 = unk_0xD4E735F4B6A956AC();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x04F37AFC39D93909(1, &Var0, 6, iParam0);
	}
}

int func_144(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x1483A8AE554B8B2B(iVar1);
		if (func_3(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xD4E735F4B6A956AC() || iParam0)
			{
				if (bParam1)
				{
					unk_0x2BCFB39E86340DAA(&uVar0, iVar1);
				}
				else if (!func_46(iVar2, 0))
				{
					unk_0x2BCFB39E86340DAA(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_145(struct<21> Param0)
{
	func_149(32, Param0);
	unk_0x7F2854D39965C275(1);
	unk_0xA721D9ED3827732A(1);
	func_147(0, -1, 0);
	unk_0xF82A3961787FA0A4(&Local_95, 22);
	unk_0x8BFA7A7AB1D02137(&vLocal_96, 97);
	if (!func_146())
	{
		return 0;
	}
	unk_0x2F3193E06C2EFF44(0);
	if (unk_0x45F99485D7E1C29A())
	{
		Local_95.f_4 = unk_0xD4E735F4B6A956AC();
		Local_95.f_5 = func_65();
		Local_95.f_10 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0) + Vector(0f, 5f, 0f) };
		Local_95.f_7 = { func_63(Local_95.f_5) };
	}
	unk_0x2BCFB39E86340DAA(&iLocal_97, 8);
	bLocal_960 = unk_0xEB97F9F181CDFD2C();
	vLocal_96[unk_0xD60943E3BE730BF0() /*3*/] = 0;
	return 1;
}

int func_146()
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
		if (func_135())
		{
			return 0;
		}
		if (func_133(155))
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

int func_147(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBF19BA6420EC428C();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_141();
			}
			else
			{
				return 0;
			}
		}
		if (!func_148())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x4C9BACA8D249CB13())
				{
					if (!bParam2)
					{
						func_141();
					}
					else
					{
						return 0;
					}
				}
				if (func_135())
				{
					if (!bParam2)
					{
						func_141();
					}
					else
					{
						return 0;
					}
				}
				if (func_133(155))
				{
					if (!bParam2)
					{
						func_141();
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
					func_141();
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
				func_141();
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
			func_141();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_148()
{
	return Global_1312834;
}

void func_149(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		func_141();
	}
	unk_0x1B0D16DC60698F88(iParam0, 0, Param1.f_16);
}

