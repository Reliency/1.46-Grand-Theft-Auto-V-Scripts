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
	var uLocal_46 = 0;
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1000;
	var uLocal_55 = 1000;
	var uLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
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
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	bool bLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	vector3 vLocal_77 = { 0f, 0f, 0f };
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	bool bLocal_86 = 0;
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 1132396544;
	var uLocal_93 = 1132396544;
	var uLocal_94 = 1132396544;
	var uLocal_95 = 0;
	var uLocal_96 = -1082130432;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 8;
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
	var uLocal_156 = -1;
	var uLocal_157 = 1092616192;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	int iLocal_160 = 0;
	struct<21> Local_161 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_162[15];
	int iLocal_163 = 0;
	float fLocal_164 = 0f;
	struct<2> Local_165 = { 0, 16 } ;
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
	vector3 vLocal_230[1] = {{ 0f, 0f, 0f } };
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235[3] = { 0, 0, 0 };
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	struct<418> Local_238 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_239 = -1;
	var uLocal_240 = -1;
	var uLocal_241 = -1;
	var uLocal_242 = -1;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	struct<32> Local_251 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	var uLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	var uLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	bool bLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	bool bLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	vector3 vLocal_283 = { 0f, 0f, 0f };
	vector3 vLocal_284 = { 0f, 0f, 0f };
	vector3 vLocal_285 = { 0f, 0f, 0f };
	vector3 vLocal_286 = { 0f, 0f, 0f };
	vector3 vLocal_287 = { 0f, 0f, 0f };
	vector3 vLocal_288 = { 0f, 0f, 0f };
	vector3 vLocal_289 = { 0f, 0f, 0f };
	vector3 vLocal_290 = { 0f, 0f, 0f };
	vector3 vLocal_291 = { 0f, 0f, 0f };
	vector3 vLocal_292 = { 0f, 0f, 0f };
	vector3 vLocal_293 = { 0f, 0f, 0f };
	vector3 vLocal_294 = { 0f, 0f, 0f };
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	vector3 vLocal_298 = { 0f, 0f, 0f };
	vector3 vLocal_299 = { 0f, 0f, 0f };
	vector3 vLocal_300 = { 0f, 0f, 0f };
	vector3 vLocal_301 = { 0f, 0f, 0f };
	vector3 vLocal_302 = { 0f, 0f, 0f };
	float fLocal_303 = 0f;
	float fLocal_304 = 0f;
	float fLocal_305 = 0f;
	float fLocal_306 = 0f;
	float fLocal_307 = 0f;
	int iLocal_308 = 0;
	char cLocal_309[16] = "";
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	char cLocal_312[64] = "";
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	char cLocal_321[64] = "";
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	char cLocal_330[64] = "";
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	char cLocal_339[64] = "";
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	vector3 vLocal_348 = { 0f, 0f, 0f };
	vector3 vLocal_349 = { 0f, 0f, 0f };
	float fLocal_350 = 0f;
	bool bLocal_351 = 0;
	struct<28> Local_352 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 5;
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
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 1097859072;
	var uLocal_401 = 1500;
	var uLocal_402 = 45;
	var uLocal_403 = 1103626240;
	var uLocal_404 = 5;
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
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_71 = unk_0x99F9E6870B7B7C2D();
	iLocal_72 = unk_0x09990A2B9C8684F0();
	vLocal_77 = { 500f, 500f, 500f };
	iLocal_253 = joaat("a_f_y_genhot_01");
	iLocal_254 = joaat("a_f_y_bevhills_01");
	iLocal_255 = joaat("ambulance");
	iLocal_256 = joaat("bison");
	iLocal_263 = 1;
	iLocal_264 = 1000;
	vLocal_283 = { 1358.822f, -1547.396f, 53.7793f };
	vLocal_284 = { 1358.822f, -1547.396f, 53.7793f };
	vLocal_285 = { -694.2758f, -1119.447f, 13.525f };
	vLocal_286 = { -683.1272f, -1102.185f, 13.5257f };
	vLocal_287 = { 410.2629f, -1399.16f, 28.4017f };
	vLocal_288 = { 371.3834f, -1482.955f, 28.3418f };
	vLocal_289 = { 404.8026f, -1416.294f, 28.435f };
	vLocal_290 = { 406.612f, -1419.937f, 29.00375f };
	vLocal_291 = { -682.5392f, -1109.082f, 13.6729f };
	vLocal_292 = { -688.6727f, -1117.512f, 13.52498f };
	vLocal_293 = { -667.136f, -1046.06f, 15.9174f };
	vLocal_294 = { -703.1228f, -1142.432f, 9.8127f };
	vLocal_298 = { -701.2533f, -1080.285f, 12.2884f };
	vLocal_299 = { -687.8794f, -1108.073f, 13.5257f };
	vLocal_300 = { -703.0013f, -1084.073f, 12.1105f };
	fLocal_303 = 25.0227f;
	fLocal_304 = 226.3085f;
	fLocal_305 = -128.2329f;
	fLocal_306 = 238.4969f;
	fLocal_307 = 212.7682f;
	StringCopy(&cLocal_309, "taxi_oj_fc_2", 16);
	StringCopy(&cLocal_312, "amb@world_human_hang_out_street@male_c@idle_a", 64);
	StringCopy(&cLocal_321, "amb@world_human_hang_out_street@male_c@exit", 64);
	StringCopy(&cLocal_330, "amb@world_human_hang_out_street@female_hold_arm@idle_a", 64);
	StringCopy(&cLocal_339, "amb@world_human_hang_out_street@female_hold_arm@exit", 64);
	vLocal_348 = { -727.111f, -1046.357f, 11.43926f };
	vLocal_349 = { -642.6097f, -1085.538f, 28.42921f };
	fLocal_350 = 76.75f;
	iLocal_396 = 786468;
	iLocal_397 = 1;
	if (unk_0x5EBD03AF78E7B4DB(67))
	{
		func_452(2);
		func_448();
	}
	unk_0xD07EE91CE9B6D4CF(1);
	func_434();
	while (true)
	{
		if (unk_0xDC5D81351D6A4DDB(Local_238.f_2))
		{
			func_8();
		}
		else
		{
			func_1(&Local_238);
		}
		wait(0);
	}
}

void func_1(var uParam0)
{
	uParam0->f_2 = unk_0xA19140A5C42D8715();
	func_6(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0xA19140A5C42D8715());
	if (iVar1 == 0)
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	else if (iVar1 == 2)
	{
		iVar0 = joaat("sp2_dist_driving_car");
	}
	else if (iVar1 == 1)
	{
		iVar0 = joaat("sp1_dist_driving_car");
	}
	else
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	return iVar0;
}

int func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_4(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_4(int iParam0)
{
	if (func_5(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_5(int iParam0)
{
	return iParam0 < 3;
}

void func_6(var uParam0)
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_3(unk_0xA19140A5C42D8715());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, unk_0xA19140A5C42D8715(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, unk_0xA19140A5C42D8715(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, unk_0xA19140A5C42D8715(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, unk_0xA19140A5C42D8715(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_7(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_7(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_8()
{
	if (func_433(&Local_238))
	{
		func_432(&Local_238);
		if (unk_0xCE3CB618AFE55EFB(Local_251.f_4))
		{
			unk_0xE1623437A3194332(&(Local_251.f_4));
		}
		if (func_431(&Local_238, 0))
		{
			func_429();
		}
	}
	else
	{
		func_428(&Local_238);
		if (Local_238.f_410 < 28)
		{
			func_394(&Local_238, &uLocal_398);
			func_393(&Local_238);
			func_392(&Local_238, &uLocal_265, 0);
		}
		if (Local_238.f_410 > 2)
		{
			if (!func_391(&Local_238))
			{
				func_360();
			}
			else
			{
				func_351(&Local_238, "Taxi Not Driveable", func_359(&Local_238));
			}
		}
		if (Local_238.f_410 >= 21 && !iLocal_272)
		{
			func_339();
		}
		if (iLocal_274)
		{
			unk_0x5FEB5D55B0DE217B(0.8f);
		}
		if (Local_238.f_410 == 9 || Local_238.f_410 == 17)
		{
			func_315(&Local_238, 0, 0);
		}
		switch (Local_238.f_410)
		{
			case 0:
				func_312();
				func_311(&Local_238, 16, 4f, 0);
				func_309(&Local_238, vLocal_283, vLocal_284, "TaxiKeyla", iLocal_253, 41.1334f, 15f);
				func_308(&Local_238);
				func_307(&Local_238, 1);
				break;
			
			case 1:
				if (func_305())
				{
					func_304();
					func_284();
					func_283(&(vLocal_230[0 /*3*/]), "TAXI_SC_BN_04", 100);
					func_282(&Local_238, &vLocal_230);
					func_281(&Local_238);
					unk_0x413F34FCFABEDE4B(vLocal_287, vLocal_288, false, 1);
					Local_238.f_14 = { vLocal_283 };
					func_307(&Local_238, 3);
				}
				break;
			
			case 3:
				if (func_276(&Local_238, 1))
				{
					if (!unk_0x7112137033807390(Local_238.f_3, 0))
					{
						unk_0x72A0FF8C49CFFC0D(Local_238.f_3, 0, 0, 1, 0);
						unk_0x72A0FF8C49CFFC0D(Local_238.f_3, 2, 1, 2, 0);
						unk_0x72A0FF8C49CFFC0D(Local_238.f_3, 3, 0, 2, 0);
						unk_0x72A0FF8C49CFFC0D(Local_238.f_3, 4, 1, 3, 0);
						unk_0x72A0FF8C49CFFC0D(Local_238.f_3, 8, 1, 0, 0);
					}
					func_275(&Local_238, 1, 0);
					unk_0x94E87D83163B4BEB("TAXI_Escapee", &(Local_251.f_30));
					unk_0x80E7C4A78224C8F9(255, Local_251.f_30, Local_238.f_413);
					unk_0x80E7C4A78224C8F9(255, Local_251.f_30, 1862763509);
					unk_0x68184E06469338F4(1346.9f, -1606.52f, 31.16f, 1457.25f, -1508.19f, 83.05f, false, 1);
					func_307(&Local_238, 5);
				}
				break;
			
			case 5:
				if (func_256(&Local_238, 0, 1109393408))
				{
					func_255();
					func_307(&Local_238, 6);
				}
				break;
			
			case 6:
				if (func_254(&Local_238))
				{
					func_250(&Local_238, 9, 1, 0, 0);
					func_249(&Local_238);
					Local_238.f_17 = { 485.2039f, -1418.064f, 28.2112f };
					func_248();
					func_247(392.8545f, -1379.577f, 29.2837f, 0, 50f);
					func_307(&Local_238, 17);
				}
				if (unk_0x1095F403F52B42E1(Local_238.f_4, 0))
				{
					if (!unk_0xE0FD180CD24C0B67(Local_238.f_2, Local_238.f_4, 0))
					{
						func_245(&Local_238);
						func_307(&Local_238, 5);
					}
				}
				break;
			
			case 17:
				func_244(&Local_238, &(Local_238.f_9));
				if (!unk_0xDC5D81351D6A4DDB(Local_251.f_3))
				{
					if (func_243())
					{
						func_242(&Local_251, vLocal_290, fLocal_305);
					}
				}
				else
				{
					func_241(&Local_238, &Local_251);
				}
				if (func_215(&Local_238, 9f, 1097859072, 1117782016))
				{
					if (unk_0xB0AFFBAC284CC858(Local_238.f_9))
					{
						unk_0x3E46F0AAE4B470FB(Local_238.f_9, false);
					}
					unk_0xE1623437A3194332(&(Local_238.f_9));
					func_307(&Local_238, 19);
				}
				break;
			
			case 19:
				if (func_208())
				{
					if (!func_207())
					{
						func_250(&Local_238, 139, 1, 0, 0);
						iLocal_274 = 1;
						func_307(&Local_238, 9);
					}
				}
				break;
			
			case 9:
				func_241(&Local_238, &Local_251);
				func_206();
				if (func_205(Local_251.f_2, Local_251.f_3))
				{
					func_204(&Local_238, 2, 0);
					unk_0xE22D243EDC645A26(Local_251.f_2, 1);
					unk_0x3B7A32E04BBE59A5(Local_251.f_2, 6, true);
					unk_0x3B7A32E04BBE59A5(Local_251.f_2, 17, true);
					func_275(&Local_238, 1, 0);
					Local_251.f_5 = unk_0x24A1A7BF4ED94B71(Local_251.f_3);
					Local_251.f_15 = unk_0x2F78D19B3446544E(Local_251.f_3);
					Local_251.f_16 = unk_0xC9396A3FD9FCE75E(Local_251.f_3);
					func_311(&Local_238, 13, 0f, 0);
					func_311(&Local_238, 20, 0f, 0);
					unk_0xFF54548CCE498035(vLocal_293, vLocal_294);
					iLocal_261 = unk_0xF66A39BBE7B3C278(vLocal_293, vLocal_294, 0, 1, 1, 1);
					unk_0xB9514DB95C310944(false);
					func_307(&Local_238, 13);
				}
				break;
			
			case 13:
				func_206();
				func_241(&Local_238, &Local_251);
				func_244(&Local_238, &(Local_251.f_4));
				if (func_203(&Local_238))
				{
					if (func_202(Local_251.f_2, Local_251.f_4))
					{
						func_250(&Local_238, 51, 1, 0, 0);
						func_307(&Local_238, 25);
					}
					func_198(&Local_238);
					func_195(Local_251.f_3, 291.0313f, -1476.446f, 28.2945f, 15f, &Local_352, 2);
					if (func_155())
					{
						if (unk_0x41BB5FB9EEE7A9E4(Local_251.f_3))
						{
							unk_0xF648DB179A6E71BF(Local_251.f_3);
							unk_0xD2BB05DE6C584878(0, "taxi_oj_fc3");
						}
						func_153(&uLocal_45, 0, 0);
						func_152();
						func_307(&Local_238, 20);
					}
				}
				break;
			
			case 20:
				if (func_151())
				{
					if (func_130())
					{
						func_307(&Local_238, 14);
					}
				}
				break;
			
			case 14:
				func_129(&Local_238, &(Local_238.f_43));
				if (unk_0x1095F403F52B42E1(Local_251.f_3, 0))
				{
					if ((unk_0xA60C975CBAB69F34(Local_251.f_3, vLocal_285, 20f, 20f, 60f, true, true, 0) && unk_0xEAA5CEF8875FEEED(Local_251.f_3) < 5f) || Local_251.f_31 > 2)
					{
						if (!unk_0x7112137033807390(iLocal_257, 0))
						{
							unk_0x9568B1B58F78FF36(iLocal_257);
							unk_0x4299736016AECE26(iLocal_257, vLocal_292, 1, false, 0, 1);
						}
						func_250(&Local_238, 37, 1, 0, 0);
						func_307(&Local_238, 21);
					}
				}
				break;
			
			case 21:
				func_129(&Local_238, &(Local_238.f_43));
				func_128(&Local_238, Local_251.f_2, 1, 1);
				func_128(&Local_238, iLocal_257, 0, 0);
				func_244(&Local_238, &(Local_238.f_9));
				if (unk_0xCE3CB618AFE55EFB(Local_251.f_4))
				{
					unk_0xE1623437A3194332(&(Local_251.f_4));
					Local_238.f_17 = { vLocal_286 };
				}
				else if (!unk_0xCE3CB618AFE55EFB(Local_238.f_9))
				{
					Local_238.f_9 = func_126(Local_238.f_17, 1);
				}
				if (unk_0x1095F403F52B42E1(Local_238.f_4, 0))
				{
					if (unk_0xE0FD180CD24C0B67(Local_238.f_2, Local_238.f_4, 0))
					{
						if (unk_0xA60C975CBAB69F34(Local_238.f_4, -684.526f, -1105.76f, 13.52571f, 1f, 1f, 2f, !Local_238.f_140, true, 0))
						{
						}
						if (unk_0x54F6F5A823224519(Local_238.f_4, -685.0081f, -1101.297f, 13.527f, -678.677f, -1110.64f, 15.5871f, 2.25f, 0, true, 0) || unk_0x54F6F5A823224519(Local_238.f_4, -704.1705f, -1115.226f, 13.525f, -700.2585f, -1121.292f, 15.4336f, 2.25f, 0, true, 0))
						{
							if (unk_0x54F6F5A823224519(Local_238.f_4, -685.0081f, -1101.297f, 13.527f, -678.677f, -1110.64f, 15.5871f, 2.25f, 0, true, 0))
							{
								iLocal_231 = 0;
							}
							else
							{
								iLocal_231 = 1;
							}
							Local_238.f_35 = 60f;
							Local_238.f_417 = 143;
							Local_238.f_416 = 143;
							iLocal_274 = 0;
							func_307(&Local_238, 22);
						}
					}
				}
				break;
			
			case 22:
				func_128(&Local_238, Local_251.f_2, 0, 1);
				func_128(&Local_238, iLocal_257, 0, 0);
				if (!unk_0x4915F4759304D5CF(Local_238.f_3))
				{
					if (unk_0x1095F403F52B42E1(Local_238.f_4, 0))
					{
						if (Local_251.f_31 != 6)
						{
							if (func_122(&Local_238, 1, 3f))
							{
								iLocal_273 = 1;
								unk_0xE1623437A3194332(&(Local_238.f_9));
								func_307(&Local_238, 27);
							}
						}
						else
						{
							if (!unk_0xCE3CB618AFE55EFB(Local_238.f_9))
							{
								Local_238.f_9 = func_126(Local_238.f_17, 1);
							}
							if (func_215(&Local_238, 8f, 1097859072, 1117782016) || func_122(&Local_238, 1, 1084227584))
							{
								unk_0xE1623437A3194332(&(Local_238.f_9));
								func_307(&Local_238, 27);
							}
						}
					}
				}
				break;
			
			case 25:
				func_128(&Local_238, Local_251.f_2, 0, 1);
				func_128(&Local_238, iLocal_257, 0, 0);
				if (unk_0x91347D2A80F38492(unk_0xA6580F898F4E801C()) < 1)
				{
					func_250(&Local_238, 37, 1, 0, 0);
					func_307(&Local_238, 27);
				}
				break;
			
			case 27:
				func_128(&Local_238, Local_251.f_2, 0, 1);
				func_128(&Local_238, iLocal_257, 0, 0);
				if (!unk_0x4915F4759304D5CF(Local_238.f_3))
				{
					if (unk_0xCE3CB618AFE55EFB(Local_251.f_4))
					{
						unk_0xE1623437A3194332(&(Local_251.f_4));
					}
					unk_0xB9509A39A48644C4("TAXI_OBJ_DRIVE");
					if (Local_251.f_9 > 2)
					{
						Local_238.f_56 = -10;
					}
					else if (Local_251.f_9 == 0)
					{
						Local_238.f_56 = 7;
						func_121(&Local_238, 0);
					}
					else
					{
						Local_238.f_56 = 4;
					}
					func_119(&Local_238);
					func_115(&Local_238);
					func_114(&Local_238);
					func_307(&Local_238, 29);
				}
				break;
			
			case 29:
				unk_0xB9509A39A48644C4("TAXI_OBJ_DRIVE");
				if (func_81(&Local_238, &uLocal_405))
				{
					func_55(&Local_238);
					func_307(&Local_238, 28);
				}
				break;
			
			case 28:
				if (iLocal_272 || iLocal_271)
				{
					func_307(&Local_238, 30);
				}
				break;
			
			case 30:
				unk_0xB9509A39A48644C4("TAXI_OBJ_DRIVE");
				if ((!unk_0x4915F4759304D5CF(Local_238.f_3) && unk_0xDEAEC99031DCB92A(iLocal_257, Local_238.f_3, 1)) && unk_0xDEAEC99031DCB92A(Local_251.f_2, Local_238.f_3, 1))
				{
					if (iLocal_277 || timera() > 20000)
					{
						func_52(1, &Local_238, 1);
						func_448();
					}
					else
					{
						iLocal_236 = unk_0x4C059EBFED753303(vLocal_291, 10f, joaat("ambulance"), 0);
						if (unk_0x1095F403F52B42E1(iLocal_236, 0))
						{
							iLocal_277 = 1;
						}
						iLocal_258 = unk_0x0EF06F8835DF897A(vLocal_291, 5f, 5f, 5f, -1);
						if (!unk_0x4915F4759304D5CF(iLocal_258))
						{
							iLocal_277 = 1;
						}
						if (!iLocal_278)
						{
							if (unk_0x4E27F73A7FFC8871(5, vLocal_291, 1, 0f, &uLocal_262, 0, 0))
							{
								settimera(0);
								iLocal_278 = 1;
							}
						}
					}
				}
				if (func_50(vLocal_291, 1) > 100f || func_48(Local_238.f_3, unk_0xA19140A5C42D8715()) > 100f)
				{
					func_52(1, &Local_238, 1);
					func_448();
				}
				else if ((unk_0x4915F4759304D5CF(Local_238.f_3) || unk_0xDEAEC99031DCB92A(iLocal_257, unk_0xA19140A5C42D8715(), 1)) || unk_0xDEAEC99031DCB92A(Local_251.f_2, unk_0xA19140A5C42D8715(), 1))
				{
					if (!unk_0x4915F4759304D5CF(Local_238.f_3))
					{
						unk_0x1F4E5EFBFE503FB3(Local_238.f_3, true);
						unk_0x9568B1B58F78FF36(Local_238.f_3);
						unk_0x3A95A0A3221D4208(&iLocal_232);
						unk_0x2F89329397A277BC(&iLocal_232);
						unk_0xCE889E9ADEDDE843(0, 2000);
						unk_0x1659AF2827EC9D40(0, Local_238.f_17, 1000f, -1, 0, 0);
						unk_0x301F42EEE3C40328(iLocal_232);
						unk_0xE1072FA2FECBAD96(Local_238.f_3, iLocal_232);
						unk_0x3A95A0A3221D4208(&iLocal_232);
						unk_0xD738221C247C8B71(Local_238.f_3, true);
					}
					if (!unk_0x4915F4759304D5CF(iLocal_257))
					{
						unk_0x1F4E5EFBFE503FB3(iLocal_257, true);
						unk_0x9568B1B58F78FF36(iLocal_257);
						unk_0x3A95A0A3221D4208(&iLocal_232);
						unk_0x2F89329397A277BC(&iLocal_232);
						unk_0xCE889E9ADEDDE843(0, 1000);
						unk_0x1659AF2827EC9D40(0, Local_238.f_17, 1000f, -1, 0, 0);
						unk_0x301F42EEE3C40328(iLocal_232);
						unk_0xE1072FA2FECBAD96(iLocal_257, iLocal_232);
						unk_0x3A95A0A3221D4208(&iLocal_232);
						unk_0xD738221C247C8B71(iLocal_257, true);
					}
					if (!unk_0x4915F4759304D5CF(Local_251.f_2))
					{
						unk_0x1F4E5EFBFE503FB3(Local_251.f_2, true);
						unk_0x3A95A0A3221D4208(&iLocal_232);
						unk_0x2F89329397A277BC(&iLocal_232);
						if (bLocal_275)
						{
							unk_0x3F01127ECD227890(0, "MOVE_DUCK_FOR_COVER", "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						unk_0xB3E1967E66494060(0, 500);
						unk_0x1659AF2827EC9D40(0, Local_238.f_17, 1000f, -1, 0, 0);
						unk_0x301F42EEE3C40328(iLocal_232);
						unk_0xE1072FA2FECBAD96(Local_251.f_2, iLocal_232);
						unk_0x3A95A0A3221D4208(&iLocal_232);
						unk_0xD738221C247C8B71(Local_251.f_2, true);
					}
					func_52(1, &Local_238, 1);
					func_448();
				}
				else if ((iLocal_271 && !func_207()) && (unk_0xFD34717937104F1C() - iLocal_267) > 500)
				{
					if (!unk_0x4915F4759304D5CF(Local_238.f_3))
					{
						unk_0x1F4E5EFBFE503FB3(Local_238.f_3, true);
						unk_0x9568B1B58F78FF36(Local_238.f_3);
						unk_0x3A95A0A3221D4208(&iLocal_232);
						unk_0x2F89329397A277BC(&iLocal_232);
						unk_0xC2BB1787159395F9(0, unk_0xA19140A5C42D8715(), -1, -957453492);
						unk_0x301F42EEE3C40328(iLocal_232);
						unk_0xE1072FA2FECBAD96(Local_238.f_3, iLocal_232);
						unk_0x3A95A0A3221D4208(&iLocal_232);
						unk_0xD738221C247C8B71(Local_238.f_3, true);
					}
					if (!unk_0x4915F4759304D5CF(iLocal_257))
					{
						unk_0x1F4E5EFBFE503FB3(iLocal_257, true);
						unk_0x9568B1B58F78FF36(iLocal_257);
						unk_0x3A95A0A3221D4208(&iLocal_232);
						unk_0x2F89329397A277BC(&iLocal_232);
						unk_0xCE889E9ADEDDE843(0, 1000);
						unk_0x1659AF2827EC9D40(0, Local_238.f_17, 1000f, -1, 0, 0);
						unk_0x301F42EEE3C40328(iLocal_232);
						unk_0xE1072FA2FECBAD96(iLocal_257, iLocal_232);
						unk_0x3A95A0A3221D4208(&iLocal_232);
						unk_0xD738221C247C8B71(iLocal_257, true);
					}
					if (!unk_0x4915F4759304D5CF(Local_251.f_2))
					{
						unk_0x1F4E5EFBFE503FB3(Local_251.f_2, true);
						unk_0x9568B1B58F78FF36(Local_251.f_2);
						unk_0x3A95A0A3221D4208(&iLocal_232);
						unk_0x2F89329397A277BC(&iLocal_232);
						unk_0xB3E1967E66494060(0, 500);
						unk_0x1659AF2827EC9D40(0, Local_238.f_17, 1000f, -1, 0, 0);
						unk_0x301F42EEE3C40328(iLocal_232);
						unk_0xE1072FA2FECBAD96(Local_251.f_2, iLocal_232);
						unk_0x3A95A0A3221D4208(&iLocal_232);
						unk_0xD738221C247C8B71(Local_251.f_2, true);
					}
					func_9(&Local_238, 1);
					func_448();
				}
				break;
			}
	}
}

void func_9(var uParam0, bool bParam1)
{
	func_432(uParam0);
	if (func_207())
	{
		func_46();
	}
	func_44();
	unk_0x4F93066CECE72793();
	unk_0x135C61E339DABBAC(1);
	func_40(0);
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		unk_0x0BE3742BB3253F0E(uParam0->f_4, false);
		unk_0x66B55FD5AB9DEACD(uParam0->f_4);
		unk_0x1EDE128D9797328A(uParam0->f_4);
	}
	func_36(uParam0->f_14, 1);
	func_247(uParam0->f_14, 1, 1114636288);
	func_35(&(uParam0->f_244), 3);
	unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 32, true);
	if (func_32())
	{
		unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
	}
	unk_0x8E1BB215B75D51A5(1);
	func_22(0, 1, 1, 0, 0);
	unk_0xDC374DA4DC566237(true);
	unk_0x85685830EFB9A55E(true);
	if (unk_0x37B568B777BC65F9(*uParam0))
	{
		unk_0x77F0486CE0E598D5(*uParam0, 0);
		unk_0x8E88E73F74A9FF79(false, false, 3000, 1, 0, 0);
		unk_0xB9514DB95C310944(true);
	}
	if (func_21(Global_106070.f_19069, 4))
	{
		func_19(&(Global_106070.f_19069), 4);
		unk_0xFC00A668AFC2126D(func_18(), false);
	}
	if (bParam1)
	{
		func_17(uParam0);
	}
	func_16(uParam0);
	unk_0x4DC885EA8D6AF7FC("gestures@m@standing@casual");
	unk_0x4DC885EA8D6AF7FC("oddjobs@taxi@");
	unk_0x4DC885EA8D6AF7FC("oddjobs@towingcome_here");
	if (unk_0x18F86E07E41D913F())
	{
		func_14(uParam0->f_411);
	}
	if (!unk_0x02B9944258987761(unk_0xA6580F898F4E801C()))
	{
		unk_0x962CF6A9EA6FDCAC(unk_0xA6580F898F4E801C(), true, 0);
	}
	unk_0x4CA80915EDAE5C7E(round((func_10(&iLocal_82) * 1000f)), 12, 0);
}

float func_10(var uParam0)
{
	if (func_13(uParam0))
	{
		if (func_12(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_11(unk_0x05EFB6A616B6FADE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_11(bool bParam0)
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

bool func_12(var uParam0)
{
	return unk_0x05EFB6A616B6FADE(*uParam0, 2);
}

bool func_13(var uParam0)
{
	return unk_0x05EFB6A616B6FADE(*uParam0, 1);
}

void func_14(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_15(iParam0)}, 6);
		if (!unk_0x7032042E5696FFD7(&uVar0))
		{
		}
	}
}

struct<8> func_15(int iParam0)
{
	struct<8> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		
		case 4:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		
		case 6:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		
		case 7:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		
		case 8:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		
		case 9:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_16(var uParam0)
{
	unk_0x68A8A5048E18500B(uParam0->f_51[0]);
}

void func_17(var uParam0)
{
	if (unk_0xDC5D81351D6A4DDB(uParam0->f_3))
	{
		if (!unk_0x7112137033807390(uParam0->f_3, 0))
		{
			if (!unk_0x5D7DFE2058701942(uParam0->f_3, 0))
			{
				unk_0xDFF3E4D2D9D51DAE(uParam0->f_3);
			}
			unk_0x1F4E5EFBFE503FB3(uParam0->f_3, false);
			unk_0x80E7C4A78224C8F9(255, uParam0->f_413, 1862763509);
			if (unk_0x411C28019DEA5CEF(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0xED3CB2E0519060F1(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
			}
			else if (unk_0x411C28019DEA5CEF(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0xED3CB2E0519060F1(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
			}
			if (unk_0x411C28019DEA5CEF(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0xED3CB2E0519060F1(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
			}
			if (unk_0x411C28019DEA5CEF(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0xED3CB2E0519060F1(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -8f);
			}
			unk_0x7E4E83D33161D01A(&(uParam0->f_3));
		}
	}
}

int func_18()
{
	return joaat("taxi");
}

void func_19(var uParam0, int iParam1)
{
	func_20(uParam0, iParam1);
}

void func_20(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_21(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_22(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		unk_0xC97ACA9456A064F3(unk_0xD4E735F4B6A956AC());
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 1);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 1);
		func_31(1);
		unk_0x158181F81A221D70();
		unk_0xD8EA6395AE60BF4A();
		if (Global_14513.f_1 > 3)
		{
			if (unk_0xB39808C1DCE0DCFA())
			{
				unk_0xA8B97F91CBDE376C(false);
			}
			if (!func_30())
			{
				Global_14513.f_1 = 3;
			}
			Global_15822 = 5;
		}
		func_29(1, iParam3, iParam2, 0);
		Global_56187 = 1;
		Global_68497 = 1;
		Global_71203 = 1;
	}
	else
	{
		func_31(0);
		unk_0x21727E2C492FE1B3();
		Global_56187 = 0;
		if (bParam1)
		{
			unk_0x1A81FD78261DCFCD();
		}
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 0);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 0);
		func_29(0, iParam3, iParam2, 0);
		if (unk_0x4C9BACA8D249CB13())
		{
			if ((((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_27(unk_0xD4E735F4B6A956AC())) && !func_24(unk_0xD4E735F4B6A956AC(), 0)) && !func_23()) && !bParam4)
			{
				unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), false);
			}
		}
		else if ((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_27(unk_0xD4E735F4B6A956AC())) && !bParam4)
		{
			unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), false);
		}
		Global_71203 = 0;
	}
}

bool func_23()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 14);
}

bool func_24(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_25(-1, 0) == 8;
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

int func_25(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_26();
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

int func_26()
{
	return Global_1312736;
}

int func_27(int iParam0)
{
	if (func_24(iParam0, 0))
	{
		return 1;
	}
	if (func_28())
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

bool func_28()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

int func_29(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_30()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_31(int iParam0)
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

int func_32()
{
	if (!func_34() && !func_33())
	{
		if (!unk_0xECEC0B592ADDCDE7(unk_0xA6580F898F4E801C()))
		{
			return 1;
		}
	}
	return 0;
}

int func_33()
{
	if (unk_0x8B1574454E8C2421(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_34()
{
	if (unk_0x8B1574454E8C2421(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_35(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_36(vector3 vParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!func_38(vParam0, func_39(), 0))
	{
		vVar0 = { func_37(vParam0, 1f, -30f, -30f, -10f) };
		vVar1 = { func_37(vParam0, 1f, 30f, 30f, 10f) };
		unk_0x413F34FCFABEDE4B(vVar0, vVar1, bParam1, 1);
	}
}

Vector3 func_37(vector3 vParam0, float fParam1, struct<2> Param2, float fParam3)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	fVar1 = fParam1;
	fVar2 = cos(fVar1);
	fVar3 = sin(fVar1);
	vVar0.x = ((Param2 * fVar2) + (Param2.f_1 * fVar3));
	vVar0.y = ((Param2.f_1 * fVar2) - (Param2 * fVar3));
	vVar4 = { vParam0 + vVar0 };
	return vVar4;
}

bool func_38(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_39()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_40(int iParam0)
{
	if (func_43())
	{
		return;
	}
	if (Global_14681)
	{
		func_41(0, 0);
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
	if (!func_30())
	{
		Global_14513.f_1 = 3;
	}
}

void func_41(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_42(0))
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

int func_42(int iParam0)
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

bool func_43()
{
	return unk_0x05EFB6A616B6FADE(Global_1678593, 19);
}

void func_44()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_90260[iVar0 /*17*/] && !Global_90260[iVar0 /*17*/].f_1)
		{
			if (Global_90260[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_90260[iVar0 /*17*/].f_5 != 88 && Global_90260[iVar0 /*17*/].f_5 != 89) && Global_90260[iVar0 /*17*/].f_5 != 92)
				{
					func_45(Global_90260[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_45(int iParam0, bool bParam1)
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

void func_46()
{
	Global_14688 = 0;
	func_47();
}

void func_47()
{
	unk_0xB4E5B1A6FE923ECB();
	Global_16833 = 0;
	if (unk_0x904275961B875DEB())
	{
		unk_0xA8B97F91CBDE376C(false);
		Global_15822 = 6;
	}
}

float func_48(int iParam0, int iParam1)
{
	return func_49(iParam0, iParam1, 1);
}

float func_49(int iParam0, int iParam1, bool bParam2)
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

float func_50(vector3 vParam0, bool bParam1)
{
	return func_51(unk_0xEE978C39384D834F(unk_0xA6580F898F4E801C()), vParam0, bParam1);
}

float func_51(int iParam0, vector3 vParam1, bool bParam2)
{
	if (unk_0x7112137033807390(iParam0, 0))
	{
		return -1f;
	}
	return unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(iParam0, true), vParam1, bParam2);
}

void func_52(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_55(uParam1);
		if (!unk_0x4915F4759304D5CF(uParam1->f_3))
		{
			unk_0x13E0A8160525AE55(uParam1->f_3, 317, true);
		}
	}
	else
	{
		func_53(1, 0);
	}
	func_9(uParam1, bParam2);
}

void func_53(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_106070.f_19069.f_22[0]++;
			func_54("Fares Completed ++ = ", Global_106070.f_19069.f_22[0]);
			break;
		
		case 1:
			Global_106070.f_19069.f_22[1]++;
			func_54("Fares Failed ++ = ", Global_106070.f_19069.f_22[1]);
			break;
		
		case 2:
			Global_106070.f_19069.f_22[2]++;
			func_54("Fares Accepted ++ ", Global_106070.f_19069.f_22[2]);
			break;
		
		case 3:
			Global_106070.f_19069.f_22[3]++;
			func_54("Fares Expired ++ ", Global_106070.f_19069.f_22[3]);
			break;
		
		case 13:
			Global_106070.f_19069.f_22[13]++;
			func_54("Passengers run ++ = ", Global_106070.f_19069.f_22[13]);
			break;
		
		case 14:
			Global_106070.f_19069.f_22[14]++;
			func_54("Passenger Forced to Pay ++ = ", Global_106070.f_19069.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_106070.f_19069.f_22[4])
				{
					Global_106070.f_19069.f_22[4] = iParam1;
					func_54("This distance ", iParam1);
					func_54(" is longer than current best", Global_106070.f_19069.f_22[4]);
				}
				else
				{
					func_54("Longest Distance Not Beat ", Global_106070.f_19069.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_106070.f_19069.f_22[5] = (Global_106070.f_19069.f_22[5] + iParam1);
			func_54("Total Distance w/ Passenger = ", Global_106070.f_19069.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_106070.f_19069.f_22[6]++;
			}
			else
			{
				Global_106070.f_19069.f_22[6] = (Global_106070.f_19069.f_22[6] + iParam1);
			}
			func_54("Wanted Levels ++ = ", Global_106070.f_19069.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_106070.f_19069.f_22[7] = (Global_106070.f_19069.f_22[7] + iParam1);
			}
			else
			{
				Global_106070.f_19069.f_22[7]++;
			}
			func_54("Wanted Levels Lost = ", Global_106070.f_19069.f_22[7]);
			break;
		
		case 8:
			Global_106070.f_19069.f_22[8]++;
			func_54("Taxis wrecked ++ = ", Global_106070.f_19069.f_22[8]);
			break;
		
		case 9:
			Global_106070.f_19069.f_22[9]++;
			func_54("Horn Honked ++ = ", Global_106070.f_19069.f_22[9]);
			break;
		
		case 10:
			Global_106070.f_19069.f_22[10] = (Global_106070.f_19069.f_22[10] + iParam1);
			func_54("Total Money Earned = ", Global_106070.f_19069.f_22[10]);
			break;
		
		case 11:
			Global_106070.f_19069.f_22[11] = (Global_106070.f_19069.f_22[11] + iParam1);
			func_54("Total Tips Earned = ", Global_106070.f_19069.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_106070.f_19069.f_22[12])
			{
				Global_106070.f_19069.f_22[12] = iParam1;
				func_54("New Highest Tip = ", Global_106070.f_19069.f_22[12]);
			}
			else
			{
				func_54("Highest Tip Not Reached = ", Global_106070.f_19069.f_22[12]);
			}
			break;
	}
}

void func_54(char* sParam0, int iParam1)
{
}

void func_55(int iParam0)
{
	func_53(0, 0);
	if (iParam0->f_411 != 9)
	{
		func_452(1);
		func_67(15, 1);
	}
	func_65(&(Global_106070.f_19069), 1024);
	if (!func_21(Global_106070.f_19069, 64))
	{
		func_56(func_63(func_64(iParam0)), 0, 0);
	}
}

void func_56(int iParam0, int iParam1, int iParam2)
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
		func_62((891 + iParam0), 1, -1, 1);
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
		func_57();
	}
}

void func_57()
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
		func_61(13, floor(Global_106070.f_10166.f_3853));
	}
	if (!unk_0xC253B4B0BD2DE4DD())
	{
		if (!Global_71205)
		{
			if (func_60() == 2 == 0 && !unk_0x4C9BACA8D249CB13())
			{
				if (unk_0x4F3E20635369D110())
				{
					Global_105804 = 0;
				}
				if (!Global_56181)
				{
					func_58();
				}
			}
		}
	}
}

int func_58()
{
	if (func_59(0))
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

bool func_59(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

int func_60()
{
	return Global_25459;
}

int func_61(int iParam0, int iParam1)
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

int func_62(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_26();
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

int func_63(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 2:
			iVar0 = 201;
			break;
		
		case 3:
			iVar0 = 202;
			break;
		
		case 4:
			iVar0 = 203;
			break;
		
		case 5:
			iVar0 = 204;
			break;
		
		case 6:
			iVar0 = 205;
			break;
		
		case 7:
			iVar0 = 206;
			break;
		
		case 8:
			iVar0 = 207;
			break;
		
		case 9:
			break;
		
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

int func_64(var uParam0)
{
	return uParam0->f_411;
}

void func_65(var uParam0, int iParam1)
{
	func_66(uParam0, iParam1);
}

void func_66(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_67(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_68(iParam0, iParam1);
}

int func_68(int iParam0, int iParam1)
{
	if (func_80(14) && !func_79(iParam0))
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
	if (func_78(&Global_4268566))
	{
		if (func_76(&Global_4268566, iParam0))
		{
			return 0;
		}
		if (func_69(&Global_4268566, iParam0))
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

int func_69(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x16E6CF5D5B848918(iParam1))
	{
		return 0;
	}
	if (func_80(14) && !func_79(iParam1))
	{
		return 0;
	}
	if (func_76(uParam0, iParam1))
	{
		return 0;
	}
	if (func_75(uParam0) < 0f)
	{
		func_74(uParam0, 0);
	}
	func_72(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_70(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_70(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x16E6CF5D5B848918(iParam1))
	{
		return 0;
	}
	if (func_80(14) && !func_79(iParam1))
	{
		return 0;
	}
	if (func_76(uParam0, iParam1))
	{
		return 0;
	}
	if (func_75(uParam0) < 0f)
	{
		func_74(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_71(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_71(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_72(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_73(uParam0, iVar0);
		iVar0++;
	}
	func_74(uParam0, (Global_4268565 - 0.5f));
}

void func_73(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_74(var uParam0, float fParam1)
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

float func_75(var uParam0)
{
	return uParam0->f_80;
}

bool func_76(var uParam0, int iParam1)
{
	return func_77(uParam0, iParam1) != -1;
}

int func_77(var uParam0, int iParam1)
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

bool func_78(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_79(int iParam0)
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

bool func_80(int iParam0)
{
	return Global_36117 == iParam0;
}

int func_81(int iParam0, var uParam1)
{
	switch (iLocal_160)
	{
		case 0:
			if (!func_207() && func_112(iParam0, 0) > 1f)
			{
				if (func_32())
				{
					unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
				}
				func_111(iParam0);
				func_19(&(Global_106070.f_19069), 4096);
				func_108(uParam1, "TAXI_FARE_TITLE", iParam0->f_50, iParam0->f_56, ((iParam0->f_50 + iParam0->f_56) + iParam0->f_105), iParam0->f_105, func_110(iParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0xE11F00B4AC919F45(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", false);
				func_107(1);
				iLocal_160 = 6;
			}
			break;
		
		case 6:
			if (!func_101(uParam1, 0))
			{
				func_82(iParam0);
				func_311(iParam0, 0, 0, 0);
				func_107(0);
				iLocal_160 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_82(int iParam0)
{
	int iVar0;
	
	iVar0 = ((iParam0->f_50 + iParam0->f_56) + iParam0->f_105);
	if (iVar0 > 0)
	{
		func_83(func_99(), 21, iVar0, 0, 0);
		func_53(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_83(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_84(Global_106070.f_28022[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

int func_84(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_98();
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
					func_97(99, 1);
					func_96(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_96(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_96(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_95(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_91(5))
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
							func_96(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_96(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_96(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_91(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_96(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_96(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_96(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_96(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_96(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_96(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_96(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_96(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_96(joaat("sp2_money_spent_property"), iParam3);
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
									func_96(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_96(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_96(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_96(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_96(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_96(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_91(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_96(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_96(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_96(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_96(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_96(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_96(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_90(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_97(95, iParam3);
					break;
				
				case 1:
					func_97(97, iParam3);
					break;
				
				case 2:
					func_97(96, iParam3);
					break;
			}
			func_97(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_87(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_87(iVar1);
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
					func_96(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_96(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_96(joaat("sp2_total_cash_earned"), iParam3);
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
	func_86(iParam0);
	if (Global_36117 == 15)
	{
		func_85(0);
	}
	return 1;
}

void func_85(bool bParam0)
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

void func_86(int iParam0)
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

void func_87(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_62(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_62(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_62(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_62(137, 0, -1, 1);
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
	else if (unk_0x05EFB6A616B6FADE(Global_106070.f_20536.f_471, iParam0) || unk_0x05EFB6A616B6FADE(Global_2097152[func_89() /*12745*/].f_8178.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xFA57C719261AA55D(&(Global_106070.f_20536.f_471), iParam0);
		unk_0xFA57C719261AA55D(&(Global_2097152[func_89() /*12745*/].f_8178.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x59FF6261546DDD52("COUP_RED");
		unk_0x4FDA9E6EF359F8A9(func_88(iParam0));
		unk_0x595B8132C1F20265(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_88(int iParam0)
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

int func_89()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_90(int iParam0)
{
	func_97(93, iParam0);
	func_97(29, iParam0);
	func_97(30, iParam0);
}

bool func_91(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_92(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_92(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_92(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_92(137, -1, -1);
	}
	if (!unk_0x4C9BACA8D249CB13())
	{
		return unk_0x05EFB6A616B6FADE(Global_106070.f_20536.f_471, iParam0);
	}
	return unk_0x05EFB6A616B6FADE(Global_2097152[func_89() /*12745*/].f_8178.f_10, iParam0);
}

int func_92(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	iVar1 = func_94(iParam0, iParam1);
	uVar2 = func_93(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x07EEB31CF063DAB7(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_93(int iParam0)
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

int func_94(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_26();
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

int func_95(bool bParam0)
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
		func_61(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_67(27, 1);
	return 1;
}

void func_96(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x2AD48F3CEBA882E9(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x93180BE33E7149EF(iParam0, iVar0, 1);
}

void func_97(int iParam0, int iParam1)
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

void func_98()
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

int func_99()
{
	func_100();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_100()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_4(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_3(unk_0xA19140A5C42D8715());
			if (func_5(iVar0) && (!func_80(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_5(Global_106070.f_2355.f_539.f_4301))
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

int func_101(var uParam0, int iParam1)
{
	if (!func_13(&(uParam0->f_2)))
	{
		func_105(&(uParam0->f_2));
	}
	unk_0xD8C147DA332E7F06(14);
	unk_0xE9F9BA9108F437C7(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0xDF0ADAD7E584090D(2, 201) || uParam0->f_8)
		{
			if (!func_13(&(uParam0->f_5)))
			{
				func_105(&(uParam0->f_5));
				func_104(uParam0, 1051260355);
			}
		}
		if (func_13(&(uParam0->f_5)))
		{
			if (func_103(&(uParam0->f_5)) > 0.33f)
			{
				func_102(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_103(&(uParam0->f_2)) * 1000f) > to_float(uParam0->f_1)
	{
		if (!func_13(&(uParam0->f_5)))
		{
			func_105(&(uParam0->f_5));
			func_104(uParam0, 1051260355);
		}
		else if (func_103(&(uParam0->f_5)) > 0.33f)
		{
			func_102(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_102(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_103(var uParam0)
{
	if (func_13(uParam0))
	{
		if (func_12(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_11(unk_0x05EFB6A616B6FADE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_104(var uParam0, float fParam1)
{
	unk_0x31A9E530D137684F(*uParam0, "SHARD_ANIM_OUT");
	unk_0x380580A1A1667F69(uParam0->f_9);
	unk_0xD8B5988E85F72BE5(fParam1);
	unk_0x271C1332F482646C();
}

void func_105(int iParam0)
{
	func_106(iParam0, 0f);
}

void func_106(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_11(unk_0x05EFB6A616B6FADE(*iParam0, 4)) - fParam1);
	unk_0x2BCFB39E86340DAA(iParam0, 1);
	unk_0xFA57C719261AA55D(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_107(int iParam0)
{
	Global_71465 = iParam0;
	Global_71466 = iParam0;
}

void func_108(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0x31A9E530D137684F(*uParam0, func_109());
	unk_0x390B339C943A8A54("STRING");
	unk_0xBA9FB571BCB6C1BD(iParam9);
	unk_0x4FDA9E6EF359F8A9(iParam1);
	unk_0xD481829E3E36543B();
	unk_0x390B339C943A8A54(sParam7);
	unk_0xCDA87E1DA52C8C9D(iParam2);
	unk_0xCDA87E1DA52C8C9D(iParam3);
	unk_0x4FDA9E6EF359F8A9(iParam6);
	unk_0xCDA87E1DA52C8C9D(iParam5);
	unk_0xCDA87E1DA52C8C9D(iParam4);
	unk_0xD481829E3E36543B();
	unk_0x271C1332F482646C();
	func_105(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_109()
{
	if (unk_0x4C9BACA8D249CB13())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_110(int iParam0)
{
	char* sVar0;
	
	switch (iParam0->f_411)
	{
		case 0:
			sVar0 = "TAXI_SC_BN_02";
			break;
		
		case 1:
			sVar0 = "TAXI_SC_BN_01";
			break;
		
		case 2:
			sVar0 = "TAXI_SC_BN_03";
			break;
		
		case 3:
			sVar0 = "TAXI_SC_BN_12";
			break;
		
		case 4:
			sVar0 = "TAXI_SC_BN_08";
			break;
		
		case 5:
			sVar0 = "TAXI_SC_BN_07";
			break;
		
		case 6:
			sVar0 = "TAXI_SC_KO";
			break;
		
		case 7:
			sVar0 = "TAXI_SC_BN_10";
			break;
		
		case 8:
			sVar0 = "TAXI_SC_BN_04";
			break;
	}
	return sVar0;
}

void func_111(int iParam0)
{
	int iVar0;
	
	Local_161.f_1 = to_float(iParam0->f_50);
	Local_161.f_2 = to_float(iParam0->f_56);
	func_53(11, iParam0->f_56);
	func_53(12, iParam0->f_56);
	iLocal_57[1] = iParam0->f_56;
	iLocal_57[2] = iParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_60)
	{
		Local_161.f_4[iVar0 /*3*/] = { iParam0->f_60[iVar0 /*3*/] };
		if (unk_0x05EFB6A616B6FADE(Local_161.f_4[iVar0 /*3*/], 2))
		{
			Local_161.f_3 = (Local_161.f_3 + IntToFloat(iParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_161 = iParam0->f_411;
	Local_161.f_20 = ((Local_161.f_1 + Local_161.f_2) + Local_161.f_3);
}

float func_112(int iParam0, int iParam1)
{
	if (!func_13(&(iParam0->f_146[iParam1 /*3*/])))
	{
		func_113(&(iParam0->f_146[iParam1 /*3*/]));
	}
	return func_103(&(iParam0->f_146[iParam1 /*3*/]));
}

void func_113(int iParam0)
{
	if (!func_13(iParam0))
	{
		func_105(iParam0);
	}
}

void func_114(int iParam0)
{
	if (iParam0->f_56 >= iParam0->f_59)
	{
		iParam0->f_56 = ceil((IntToFloat(iParam0->f_50) * 0.4f));
	}
	else if (iParam0->f_56 < iParam0->f_59 && iParam0->f_56 >= iParam0->f_58)
	{
		iParam0->f_56 = ceil((IntToFloat(iParam0->f_50) * 0.15f));
	}
	else
	{
		iParam0->f_56 = 0;
	}
	if (!func_21(iParam0->f_55, 1))
	{
		func_65(&(iParam0->f_55), 1);
	}
}

void func_115(int iParam0)
{
	func_117();
	unk_0x4F93066CECE72793();
	if (iParam0->f_56 < iParam0->f_58)
	{
		if (iParam0->f_411 == 0)
		{
			func_250(iParam0, 105, 1, 0, 0);
		}
		else
		{
			func_250(iParam0, 103, 1, 0, 0);
		}
		func_116(1);
	}
	else if (iParam0->f_56 >= iParam0->f_59)
	{
		func_250(iParam0, 101, 1, 0, 0);
	}
	else
	{
		func_250(iParam0, 102, 1, 0, 0);
	}
	func_311(iParam0, 16, 4f, 0);
}

void func_116(int iParam0)
{
	Global_104780.f_221 = iParam0;
}

void func_117()
{
	Global_14688 = 0;
	func_118();
}

void func_118()
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

void func_119(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_120(fVar0);
	iLocal_57[4] = ceil(fVar0);
	iLocal_57[5] = ceil(fVar0);
	func_53(4, ceil(fVar0));
	func_53(5, ceil(fVar0));
	uParam0->f_50 = ceil((fVar0 * 100f));
}

float func_120(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_121(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0x2BCFB39E86340DAA(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

int func_122(var uParam0, bool bParam1, float fParam2)
{
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (unk_0xE0FD180CD24C0B67(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_42(1))
			{
				func_40(0);
			}
			if (func_32())
			{
				func_125();
				return 1;
			}
			else if (func_123(uParam0->f_4, fParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0x962CF6A9EA6FDCAC(unk_0xA6580F898F4E801C(), false, 256);
				}
				else
				{
					unk_0x962CF6A9EA6FDCAC(unk_0xA6580F898F4E801C(), false, 0);
				}
			}
			unk_0x7CE8BDE02895D2F9(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_123(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_124(iParam0);
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

void func_124(int iParam0)
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

void func_125()
{
	if (unk_0x53B0513B47405A70(unk_0xD4E735F4B6A956AC()))
	{
		unk_0xB8C9A9ECCE440A3A(unk_0xD4E735F4B6A956AC());
	}
}

int func_126(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xA70969818F182A36(vParam0);
	unk_0x575CF00E129E0CE1(iVar0, func_127(unk_0x4C9BACA8D249CB13(), 1f, 1f));
	unk_0x3E46F0AAE4B470FB(iVar0, bParam1);
	return iVar0;
}

float func_127(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_128(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (unk_0xDC5D81351D6A4DDB(iParam1))
	{
		if (bParam2)
		{
			if (!unk_0x7112137033807390(iParam1, 0))
			{
				if (unk_0x97B2B0016AD3C7C6(iParam1))
				{
					if (unk_0xBCF615B6673B73ED(unk_0xA19140A5C42D8715()))
					{
						if (Local_238.f_109 == 0)
						{
							func_351(&Local_238, "Driver jacked the fiance", 7);
						}
					}
				}
			}
		}
		if (unk_0x4915F4759304D5CF(iParam1))
		{
			if (bParam3)
			{
				if (!unk_0x7112137033807390(iLocal_257, 0))
				{
					unk_0x9568B1B58F78FF36(iLocal_257);
					unk_0x33B5487515BD13D5(iLocal_257, unk_0xA19140A5C42D8715(), 100f, 20000, 0, 0);
					unk_0xD738221C247C8B71(iLocal_257, true);
				}
				func_351(iParam0, "Target injured.", 13);
			}
			else
			{
				if (!unk_0x7112137033807390(Local_251.f_2, 0))
				{
					unk_0x9568B1B58F78FF36(Local_251.f_2);
					unk_0x33B5487515BD13D5(Local_251.f_2, unk_0xA19140A5C42D8715(), 100f, 20000, 0, 0);
					unk_0xD738221C247C8B71(Local_251.f_2, true);
				}
				func_351(iParam0, "Mistress injured.", 14);
			}
		}
		else if (unk_0xF524BFB878FD8057(unk_0xD4E735F4B6A956AC()))
		{
			if ((unk_0xDAA9E4FC4EBF1081(iParam1, joaat("weapon_stungun"), 0) || unk_0xDAA9E4FC4EBF1081(iParam1, 0, 2)) || unk_0xDAA9E4FC4EBF1081(iParam1, 0, 1))
			{
				if (!unk_0x7112137033807390(iLocal_257, 0))
				{
					unk_0x9568B1B58F78FF36(iLocal_257);
					unk_0x33B5487515BD13D5(iLocal_257, unk_0xA19140A5C42D8715(), 100f, 20000, 0, 0);
					unk_0xD738221C247C8B71(iLocal_257, true);
				}
				if (!unk_0x7112137033807390(Local_251.f_2, 0))
				{
					unk_0x9568B1B58F78FF36(Local_251.f_2);
					unk_0x33B5487515BD13D5(Local_251.f_2, unk_0xA19140A5C42D8715(), 100f, 20000, 0, 0);
					unk_0xD738221C247C8B71(Local_251.f_2, true);
				}
				func_351(iParam0, "Passenger injured by player with weapon.", 14);
			}
			if (!bParam3)
			{
				unk_0x111B48287EFA117B(unk_0xD4E735F4B6A956AC());
			}
		}
	}
}

void func_129(int iParam0, var uParam1)
{
	unk_0xB13032FADD612FC1(iParam0->f_428, uParam1, -1);
	iParam0->f_41 = (*uParam1 - iParam0->f_42);
}

int func_130()
{
	vector3 vVar0;
	
	func_150();
	if (iLocal_416 < 3 && iLocal_416 > 0)
	{
		if (func_146(iLocal_264))
		{
			iLocal_416 = 3;
		}
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_257))
	{
		if (!unk_0x4915F4759304D5CF(iLocal_257))
		{
			vVar0 = { unk_0xE2BBD32891C18569(iLocal_257, true) };
		}
	}
	switch (iLocal_416)
	{
		case 0:
			if (func_145(1, 1, 1) && !Local_238.f_142)
			{
				iLocal_264 = unk_0xFD34717937104F1C();
				func_143(&uLocal_355);
				func_142(&Local_352, -1, 1);
				func_247(vLocal_299, 0, 15f);
				func_247(vLocal_300, 0, 15f);
				func_141(&Local_238, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
				func_140();
				func_311(&Local_238, 19, 0, 0);
				iLocal_416 = 1;
			}
			else
			{
				func_139("TX_FC CAN_PLAYER_START_CUTSCENE returns false", &(Local_238.f_78), 1000);
			}
			break;
		
		case 1:
			if (func_112(&Local_238, 19) > 0.5f)
			{
				func_138(0, 0, 1);
				unk_0x01AF8CB960828C2B(vLocal_299, 30f, 0, 0, 0, 0, false, 0);
				unk_0x01AF8CB960828C2B(vLocal_300, 30f, 0, 0, 0, 0, false, 0);
				unk_0x3521B10FB737CE36(vLocal_299, 30f, 0);
				unk_0x3521B10FB737CE36(vLocal_300, 30f, 0);
				func_136(vLocal_299, 1114636288, 1);
				func_136(vLocal_300, 1114636288, 1);
				unk_0x413F34FCFABEDE4B(vLocal_293, vLocal_294, false, 1);
				func_250(&Local_238, 35, 1, 1, 0);
				unk_0x057123F3A835FE47(Local_238, func_135(0));
				unk_0xC831502E35848BE4(Local_238, func_134(0), 2);
				unk_0xF62A5A3CB8DB2402(Local_238, 44.5167f);
				unk_0xBC1542DDC31676C2(Local_238, "HAND_SHAKE", 0.1f);
				unk_0x930701157A4B9374(Local_238, true);
				unk_0x8E88E73F74A9FF79(true, false, 3000, 1, 0, 0);
				if (unk_0x1095F403F52B42E1(Local_251.f_3, 0))
				{
					unk_0x4299736016AECE26(Local_251.f_3, vLocal_298, 1, false, 0, 1);
					unk_0x92DDCF53AA47A63D(Local_251.f_3, fLocal_304);
					if (unk_0xD6FE88A324557906(&cLocal_309, vLocal_298, &iLocal_266))
					{
					}
					if (unk_0x6012E99594BAA748(&cLocal_309, iLocal_266, &uLocal_295))
					{
					}
					if (!unk_0x7112137033807390(Local_251.f_2, 0))
					{
						unk_0xD9EF65DC6B9C0145(Local_251.f_2, Local_251.f_3, &cLocal_309, iLocal_397, iLocal_266 + 4, 0, -1, -1f, 0, 1073741824);
					}
				}
				func_311(&Local_238, 19, 0, 0);
				iLocal_416 = 2;
			}
			break;
		
		case 2:
			if (func_112(&Local_238, 19) > 5f)
			{
				func_311(&Local_238, 19, 0, 0);
				iLocal_416 = 4;
			}
			else if (func_112(&Local_238, 19) > 4.7f)
			{
				if (func_133())
				{
					if (!iLocal_282)
					{
						unk_0xE60B9F9B48D4783F("CamPushInNeutral", 0, 0);
						unk_0xE11F00B4AC919F45(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_282 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (unk_0x1095F403F52B42E1(Local_251.f_3, 0))
			{
				unk_0x4299736016AECE26(Local_251.f_3, vLocal_285, 1, false, 0, 1);
				unk_0x92DDCF53AA47A63D(Local_251.f_3, fLocal_307);
				unk_0xF648DB179A6E71BF(Local_251.f_3);
			}
			func_311(&Local_238, 19, 0, 0);
			iLocal_416 = 4;
			break;
		
		case 4:
			if (unk_0x1095F403F52B42E1(Local_238.f_4, 0))
			{
				Local_238.f_141 = 0;
				unk_0x70C1F5AA59767FE6(800);
				unk_0xD87B76260C547F31(0f);
				unk_0xAA32DD4848CF93E0(0f, 1065353216);
				if (unk_0x1095F403F52B42E1(Local_251.f_3, 0))
				{
					unk_0x4299736016AECE26(Local_251.f_3, vLocal_285, 1, false, 0, 1);
					unk_0x92DDCF53AA47A63D(Local_251.f_3, fLocal_307);
					unk_0xF648DB179A6E71BF(Local_251.f_3);
					if (!unk_0x7112137033807390(Local_251.f_2, 0))
					{
						unk_0x836A6A722DEA63F1(Local_251.f_2);
						unk_0x4299736016AECE26(Local_251.f_2, -691.1571f, -1117.732f, 13.52498f, 1, false, 0, 1);
						unk_0x92DDCF53AA47A63D(Local_251.f_2, -49.27436f);
					}
				}
				unk_0x77F0486CE0E598D5(Local_238, 0);
				unk_0x77F0486CE0E598D5(iLocal_237, 0);
				func_131(1, 1, 1);
				unk_0x8E88E73F74A9FF79(false, false, 3000, 1, 0, 0);
				while (!unk_0x3A83743561B4F70C())
				{
					wait(0);
				}
				func_204(&Local_238, 19, 0);
				iLocal_416 = 5;
				return 1;
			}
			break;
	}
	return 0;
}

void func_131(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x962CF6A9EA6FDCAC(unk_0xA6580F898F4E801C(), true, 0);
	}
	unk_0x8E1BB215B75D51A5(1);
	func_22(0, 1, iParam2, 0, 0);
	if (bParam1)
	{
		unk_0xDC374DA4DC566237(true);
		unk_0x85685830EFB9A55E(true);
	}
	func_132(23, 0);
}

void func_132(int iParam0, bool bParam1)
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

int func_133()
{
	if (unk_0x1F7BAD75218F1A2C(unk_0x9F302D755A846102()) == 4)
	{
		return 1;
	}
	return 0;
}

Vector3 func_134(int iParam0)
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			vVar0 = { 1.9027f, 0f, 170.5764f };
			break;
	}
	return vVar0;
}

Vector3 func_135(int iParam0)
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			vVar0 = { -686.0368f, -1073.22f, 16.1762f };
			break;
	}
	return vVar0;
}

void func_136(vector3 vParam0, float fParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	unk_0xB40E9D1C648558DD(vParam0, &vVar1, &fVar0, 1, 1077936128, 0);
	vVar2 = { func_37(vVar1, func_137(fVar0), fParam1, fParam1, 5f) };
	vVar3 = { func_37(vVar1, fVar0, fParam1, fParam1, -5f) };
	vVar3.z = (vVar3.z - 22f);
	vVar2.z = (vVar2.z + 22f);
	if (bParam2)
	{
		unk_0x68184E06469338F4(vVar3, vVar2, false, 1);
	}
	else
	{
		unk_0x387E83E60256EA18(vVar3, vVar2, true);
	}
}

float func_137(float fParam0)
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

void func_138(int iParam0, int iParam1, int iParam2)
{
	unk_0x962CF6A9EA6FDCAC(unk_0xA6580F898F4E801C(), false, iParam0);
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		unk_0x341AA026B031328A(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), 15f);
	}
	unk_0x8E1BB215B75D51A5(iParam1);
	func_40(0);
	func_22(1, 1, iParam2, 0, 0);
	unk_0xDC374DA4DC566237(false);
	unk_0x85685830EFB9A55E(false);
	func_132(23, 1);
}

void func_139(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0xFD34717937104F1C() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0xFD34717937104F1C();
}

void func_140()
{
	int iVar0;
	
	iLocal_257 = unk_0x35C6E06B120EB2E3(26, iLocal_254, vLocal_291, fLocal_303, 1, true);
	unk_0x2E591DECDC7041D0(iLocal_257, 5);
	unk_0x72A0FF8C49CFFC0D(iLocal_257, 3, 1, 2, 0);
	unk_0x72A0FF8C49CFFC0D(iLocal_257, 4, 0, 1, 0);
	unk_0x72A0FF8C49CFFC0D(iLocal_257, 2, 1, 2, 0);
	unk_0x13E0A8160525AE55(iLocal_257, 20, true);
	func_7(&(Local_238.f_244), 5, iLocal_257, "TaxiCarrie", 0, 1);
	if (!unk_0x7112137033807390(iLocal_257, 0))
	{
		unk_0x92DDCF53AA47A63D(iLocal_257, fLocal_303);
		unk_0x3A95A0A3221D4208(&iVar0);
		unk_0x2F89329397A277BC(&iVar0);
		unk_0xB3E1967E66494060(0, 2500);
		unk_0x3F01127ECD227890(0, "oddjobs@towingcome_here", "come_here_idle_a", 8f, -1.5f, 2000, 0, 0, 0, 0, 0);
		unk_0xBF83D5CD662ABC16(0, vLocal_292, 1f, 0, 0, 786603, -1082130432);
		unk_0x301F42EEE3C40328(iVar0);
		unk_0xE1072FA2FECBAD96(iLocal_257, iVar0);
		unk_0x3A95A0A3221D4208(&iVar0);
	}
}

void func_141(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	if (!unk_0x37B568B777BC65F9(*uParam0))
	{
		*uParam0 = unk_0x74677C414DD7F53C(26379945, vParam1, vParam2, fParam3, 0, 2);
	}
}

void func_142(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = -1;
	}
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

void func_143(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_144(), 24);
		iVar0++;
	}
	unk_0x4F93066CECE72793();
	func_46();
}

var func_144()
{
	var uVar0;
	
	return uVar0;
}

int func_145(bool bParam0, bool bParam1, bool bParam2)
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

int func_146(int iParam0)
{
	if (func_149() && unk_0xFD34717937104F1C() >= iParam0 + 1000)
	{
		unk_0x9662BE461F9FDF9E(500);
		while (!unk_0x71364F510A1CB69F())
		{
			wait(0);
		}
		func_40(0);
		func_147();
		return 1;
	}
	return 0;
}

void func_147()
{
	Global_14688 = 0;
	func_148();
}

void func_148()
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

int func_149()
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

void func_150()
{
	if (func_34())
	{
		unk_0xE38A3C362F1CFBF3("appInternet");
	}
	if (func_33())
	{
		unk_0xE38A3C362F1CFBF3("appCamera");
	}
	if (func_42(1))
	{
		func_40(0);
	}
}

int func_151()
{
	if (!unk_0x7FC99CCC73354033(iLocal_254))
	{
		return 0;
	}
	if (!unk_0x39C2D9AB77873F84("MOVE_DUCK_FOR_COVER"))
	{
		func_139("TAXI_ASSETS_STREAMED - Loading MOVE_DUCK_FOR_COVER", &iLocal_263, 1000);
		return 0;
	}
	return 1;
}

void func_152()
{
	unk_0xCACEBBBEAD8F262E(iLocal_254);
	unk_0x6D68030C791111E0("MOVE_DUCK_FOR_COVER");
	unk_0x6D68030C791111E0(&cLocal_312);
	unk_0x6D68030C791111E0(&cLocal_321);
	unk_0x6D68030C791111E0(&cLocal_330);
	unk_0x6D68030C791111E0(&cLocal_339);
}

void func_153(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x4C9BACA8D249CB13())
	{
		if (unk_0x05EFB6A616B6FADE(Global_2524719.f_4577, 26))
		{
			return;
		}
	}
	if (unk_0xECD112E8A7AB2E8A())
	{
		unk_0xEB60EF2E9051E817(iParam2);
		unk_0xEF9AD7817AAF81A5("FocusIn");
		unk_0x5AD7D03C214BDA88("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xE60B9F9B48D4783F("FocusOut", 0, 0);
			unk_0xE11F00B4AC919F45(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	unk_0xB9514DB95C310944(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x7032042E5696FFD7(sVar0))
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x7032042E5696FFD7(uParam0->f_3))
	{
		if (func_154(uParam0->f_3))
		{
			unk_0x135C61E339DABBAC(1);
		}
	}
	if (!unk_0x7032042E5696FFD7(sVar0))
	{
		if (func_154(sVar0))
		{
			unk_0x135C61E339DABBAC(1);
		}
	}
}

int func_154(char* sParam0)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	return unk_0x3D94488A86ABB03F(0);
}

int func_155()
{
	if (func_112(&Local_238, 20) > 2f)
	{
		if (!Local_238.f_142)
		{
			func_184(&Local_238, &Local_251, (unk_0xFD34717937104F1C() - iLocal_308) > 15000, 0);
		}
	}
	if (unk_0x1095F403F52B42E1(Local_251.f_3, 0))
	{
		if (unk_0x1095F403F52B42E1(Local_238.f_4, 0))
		{
			if (unk_0x54F6F5A823224519(Local_238.f_4, vLocal_348, vLocal_349, fLocal_350, 0, true, 0))
			{
				unk_0x0185AEECD1FF63F3(Local_238.f_4, 5f, 1, 0);
				return 1;
			}
		}
		func_156(&uLocal_45, Local_251.f_3, 0, 0, 1, 1, 1);
		func_129(&Local_238, &(Local_238.f_43));
		if (!iLocal_270)
		{
			if (!unk_0x7112137033807390(Local_251.f_2, 0))
			{
				if (!unk_0xB2C707E9E3A0E44D(Local_251.f_3) && IntToFloat((unk_0xFD34717937104F1C() - iLocal_308)) > unk_0x4B598DA325B2F140(120, "txm_fc_h1_"))
				{
					unk_0xE49301B2B6F420DE(Local_251.f_2, Local_251.f_3, vLocal_298, 28f, 0, Local_251.f_1, iLocal_396, 13.75f, -1f);
					iLocal_270 = 1;
				}
			}
		}
	}
	return 0;
}

void func_156(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_157(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_157(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_158(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_158(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xECD112E8A7AB2E8A())
	{
		if (unk_0xFD34717937104F1C() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (unk_0x7032042E5696FFD7(iVar0))
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_154(iVar0))
	{
		func_183();
	}
	if (func_182(iParam1) && unk_0x7E65E323A95E4187(iParam1))
	{
		iVar1 = 0;
		if (unk_0x281590680327CDEA(iParam1))
		{
			unk_0x45B5AAC4D9D5763D(unk_0xA2EA4BA455370F3C(iParam1));
			unk_0xBE54C1ECA23D5353(unk_0xA2EA4BA455370F3C(iParam1), 1);
			if (unk_0x6FEA5E9BDB249F54(unk_0xA2EA4BA455370F3C(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xFAC06EE780B57279(iParam1))
		{
			unk_0x2ACE38F0D5FED9B1(unk_0xB86D86A5DBBC79F0(iParam1));
			if (unk_0xA058EBCB7A8E4B6F(unk_0xB86D86A5DBBC79F0(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x92D42293DA8F9805(iParam1))
		{
			unk_0xD63516D4F476260E(unk_0x63F4756F241D86B8(iParam1));
			if (unk_0xFFEADF112F60E796(unk_0x63F4756F241D86B8(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xECD112E8A7AB2E8A())
		{
			if (func_177(uParam0, bParam5, bParam7, 0))
			{
				func_174(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_163(iVar0))
				{
					if ((unk_0x7032042E5696FFD7(uParam0->f_3) && !unk_0x7032042E5696FFD7(iVar0)) && unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
					{
						if ((iVar1 && !unk_0xE06AA0996C4E4E03()) && uParam6)
						{
							if (!func_154(iVar0))
							{
								func_162(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x3CAC2741CC1A631F("CMN_HINT", iVar0))
								{
									func_161(1);
								}
							}
						}
					}
				}
			}
			else if (func_163(iVar0))
			{
				if (unk_0x7032042E5696FFD7(uParam0->f_3) && !unk_0x7032042E5696FFD7(iVar0))
				{
					if (((unk_0x1A8481A7E865EC7C(iParam1) && iVar1) && !unk_0xE06AA0996C4E4E03()) && uParam6)
					{
						if (!func_154(iVar0))
						{
							func_162(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x3CAC2741CC1A631F("CMN_HINT", iVar0))
							{
								func_161(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x7032042E5696FFD7(sParam3))
			{
				if (func_154(sParam3))
				{
					unk_0x135C61E339DABBAC(1);
				}
			}
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
			{
				if (unk_0x5BEFAE930E36AE54(unk_0xA19140A5C42D8715()))
				{
					if (unk_0x1F7BAD75218F1A2C(3) == 3 || unk_0x1F7BAD75218F1A2C(3) == 4)
					{
						func_153(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5BFF0F72CC04E4DA(unk_0xA19140A5C42D8715()))
				{
					if (unk_0x1F7BAD75218F1A2C(6) == 3 || unk_0x1F7BAD75218F1A2C(6) == 4)
					{
						func_153(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA22CC9D85ECBCC81(unk_0xA19140A5C42D8715()))
				{
					if (unk_0x1F7BAD75218F1A2C(4) == 3 || unk_0x1F7BAD75218F1A2C(4) == 4)
					{
						func_153(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xE13F2DC045CFCEA3(unk_0xA19140A5C42D8715()))
				{
					if (unk_0x1F7BAD75218F1A2C(5) == 3 || unk_0x1F7BAD75218F1A2C(5) == 4)
					{
						func_153(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xE3DA5E98850626D0(unk_0xA19140A5C42D8715()))
				{
					if (unk_0x1F7BAD75218F1A2C(2) == 3 || unk_0x1F7BAD75218F1A2C(2) == 4)
					{
						func_153(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF58C434FFA1FB5F6() == 3 || unk_0xF58C434FFA1FB5F6() == 4)
				{
					func_153(uParam0, iVar0, 1);
				}
			}
			if (!func_177(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_160(uParam0))
				{
					func_159(uParam0);
				}
			}
		}
	}
	else
	{
		func_153(uParam0, iVar0, 0);
	}
}

void func_159(var uParam0)
{
	if (func_182(unk_0xA19140A5C42D8715()))
	{
		unk_0x53FF9BDD8529ACD2(unk_0xA19140A5C42D8715());
	}
	if (unk_0xECD112E8A7AB2E8A())
	{
		unk_0xB9514DB95C310944(true);
		unk_0xEB60EF2E9051E817(0);
		unk_0x5AD7D03C214BDA88("HINT_CAM_SCENE");
		unk_0xEF9AD7817AAF81A5("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xE60B9F9B48D4783F("FocusOut", 0, 0);
			unk_0xE11F00B4AC919F45(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_160(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0xFD34717937104F1C()
		{
			return 1;
		}
	}
	return 0;
}

int func_161(bool bParam0)
{
	switch (Global_36117)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_106070.f_10021.f_100++;
			}
			return Global_106070.f_10021.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_106070.f_10021.f_101++;
			}
			return Global_106070.f_10021.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_106070.f_10021.f_102++;
			}
			return Global_106070.f_10021.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_162(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, true, iParam1);
}

int func_163(char* sParam0)
{
	if (!func_164(1, 1, 0))
	{
		if ((!unk_0x429D45A6C6520026(sParam0) && func_154(sParam0)) || func_154("CMN_HINT"))
		{
			unk_0x135C61E339DABBAC(1);
		}
		return 0;
	}
	switch (Global_36117)
	{
		case 0:
		case 3:
			if (func_161(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_161(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_161(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_164(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x47C3DC461C758C29())
	{
		return 0;
	}
	if (func_42(0))
	{
		return 0;
	}
	if (func_173())
	{
		return 0;
	}
	if (unk_0x2B21DC45DEAA4B80())
	{
		return 0;
	}
	if (Global_68494)
	{
		return 0;
	}
	if (unk_0x8B1574454E8C2421(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53362)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
		{
			if (unk_0x5BEFAE930E36AE54(unk_0xA19140A5C42D8715()))
			{
				if (unk_0x1F7BAD75218F1A2C(3) == 3 || unk_0x1F7BAD75218F1A2C(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5BFF0F72CC04E4DA(unk_0xA19140A5C42D8715()))
			{
				if (unk_0x1F7BAD75218F1A2C(6) == 3 || unk_0x1F7BAD75218F1A2C(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA22CC9D85ECBCC81(unk_0xA19140A5C42D8715()))
			{
				if (unk_0x1F7BAD75218F1A2C(4) == 3 || unk_0x1F7BAD75218F1A2C(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xE13F2DC045CFCEA3(unk_0xA19140A5C42D8715()))
			{
				if (unk_0x1F7BAD75218F1A2C(5) == 3 || unk_0x1F7BAD75218F1A2C(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xE3DA5E98850626D0(unk_0xA19140A5C42D8715()))
			{
				if (unk_0x1F7BAD75218F1A2C(2) == 3 || unk_0x1F7BAD75218F1A2C(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF58C434FFA1FB5F6() == 3 || unk_0xF58C434FFA1FB5F6() == 4)
			{
				return 0;
			}
			if (unk_0xD65D00F75F683302())
			{
				return 0;
			}
		}
	}
	if ((func_172() || func_171(Global_4456448.f_152990)) || func_170())
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
			iVar1 = func_169(unk_0xA19140A5C42D8715(), 0);
			if (((unk_0x39CF954DC56E2A1F(iVar0, iVar1) || (unk_0x8F474E419F56E48D(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x8F474E419F56E48D(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x8F474E419F56E48D(iVar0) == -1693015116 && iVar1 == 0) && func_168(iVar0, 10)) && unk_0x22D95AF01E737CA1(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (func_165(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	return 1;
}

int func_165(int iParam0)
{
	if (iParam0 != func_167())
	{
		if (func_166(iParam0, 1, 1))
		{
			return Global_2423801[iParam0 /*413*/].f_309.f_4 != -1;
		}
		else if ((Global_1312857 && iParam0 == unk_0xD4E735F4B6A956AC()) && func_166(iParam0, 1, 0))
		{
			return Global_2423801[iParam0 /*413*/].f_309.f_4 != -1;
		}
	}
	return 0;
}

int func_166(int iParam0, bool bParam1, bool bParam2)
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

int func_167()
{
	return -1;
}

int func_168(int iParam0, int iParam1)
{
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		if (unk_0x857E88DF0C8EDB8B(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x512BC25CDBC94246(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_169(int iParam0, int iParam1)
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

var func_170()
{
	return Global_2448386.f_16;
}

bool func_171(int iParam0)
{
	return iParam0 == 51;
}

var func_172()
{
	return Global_2448386.f_15;
}

bool func_173()
{
	return unk_0xFD34717937104F1C() <= Global_17367.f_5873 + 100;
}

void func_174(var uParam0, int iParam1, vector3 vParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1316807 == 1)
	{
		return;
	}
	if (unk_0x7112137033807390(iParam1, 0))
	{
		func_153(uParam0, 0, 0);
	}
	if (func_38(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0x281590680327CDEA(iParam1))
		{
			iVar0 = unk_0xA2EA4BA455370F3C(iParam1);
			if (!unk_0x5D7DFE2058701942(iVar0, 0))
			{
				if (unk_0xC085874FDE5FE33A(iVar0))
				{
					if (!func_175())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x18F3A53F9DAFB8C9(iVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xB9514DB95C310944(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x39102BE90DA2BED2(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x22DD1D053CFF9707(unk_0xA19140A5C42D8715(), iParam1, -1, iVar3, iVar4);
	unk_0xE60B9F9B48D4783F("FocusIn", 0, 0);
	unk_0x8969D02DEDC106D2("HINT_CAM_SCENE");
	unk_0xE11F00B4AC919F45(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0xFD34717937104F1C();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_175()
{
	return func_176(unk_0xD4E735F4B6A956AC());
}

int func_176(int iParam0)
{
	if (unk_0x8F474E419F56E48D(unk_0xEE978C39384D834F(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_177(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0xFD34717937104F1C() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
				{
					if (func_181(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xFD34717937104F1C();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_180(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xFD34717937104F1C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_180(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xFD34717937104F1C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_181(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xFD34717937104F1C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_160(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0xFD34717937104F1C() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
					{
						if (!func_181(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xFD34717937104F1C();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_180(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xFD34717937104F1C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_180(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xFD34717937104F1C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_181(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xFD34717937104F1C();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
				{
					if (!func_181(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_180(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_180(bParam1, bParam2, bParam3) || unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1) || unk_0x335966F23521FB8D(unk_0xA19140A5C42D8715(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_181(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0xFD34717937104F1C() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
					{
						if (func_179(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_178(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1) || func_178(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1) || unk_0x335966F23521FB8D(unk_0xA19140A5C42D8715(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_179(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_160(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_164(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_183();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_178(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_164(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		if (!unk_0xFBBCA633CD1A088B(unk_0xD4E735F4B6A956AC()))
		{
			unk_0xD481A812073CCF02(0, 140, 1);
			unk_0xD481A812073CCF02(0, 80, 1);
			if (unk_0x63247BC34C80F88C(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_179(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_164(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0xD481A812073CCF02(0, 80, 1);
		if (unk_0x0D635A6EE4806B7F())
		{
			if (unk_0x63247BC34C80F88C(0, 80))
			{
				unk_0xB9514DB95C310944(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_180(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_164(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		if (!unk_0xFBBCA633CD1A088B(unk_0xD4E735F4B6A956AC()))
		{
			unk_0xD481A812073CCF02(0, 140, 1);
			unk_0xD481A812073CCF02(0, 80, 1);
			if (unk_0x1190AB7024CBD8CB(0, 80) && unk_0xFD34717937104F1C() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_181(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_164(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0xD481A812073CCF02(0, 80, 1);
		if (unk_0x0D635A6EE4806B7F())
		{
			if (unk_0x1190AB7024CBD8CB(0, 80) && unk_0xFD34717937104F1C() > Global_116)
			{
				unk_0xB9514DB95C310944(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_182(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (unk_0xFAC06EE780B57279(iParam0))
		{
			if (unk_0x1095F403F52B42E1(unk_0xB86D86A5DBBC79F0(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x281590680327CDEA(iParam0))
		{
			if (!unk_0x4915F4759304D5CF(unk_0xA2EA4BA455370F3C(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x92D42293DA8F9805(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_183()
{
	unk_0x2BCFB39E86340DAA(&Global_2384, 4);
}

void func_184(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!unk_0x7112137033807390(uParam1->f_2, 0))
	{
		if (unk_0xDEAEC99031DCB92A(uParam1->f_2, unk_0xA19140A5C42D8715(), 0))
		{
			func_351(iParam0, "Taxi shot up the car", 12);
		}
	}
	else
	{
		func_351(iParam0, "Followee died", 13);
	}
	if ((unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0 && unk_0x1095F403F52B42E1(uParam1->f_3, 0)) && !unk_0x7112137033807390(uParam1->f_2, 0))
	{
		unk_0x4123165906C17D87(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
		unk_0xD738221C247C8B71(uParam1->f_2, true);
		func_351(iParam0, "Player went wanted", 4);
	}
	func_193(iParam0, uParam1);
	if (unk_0x1095F403F52B42E1(uParam1->f_3, 0) && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (bParam3)
		{
			if (func_192(&(uParam1->f_3)))
			{
				unk_0x79BEC9B6187EBB45(unk_0xE2BBD32891C18569(uParam1->f_3, true), 22.5f, 255, 0, 0, 60);
			}
			else if (func_191(&(uParam1->f_3)))
			{
				unk_0x79BEC9B6187EBB45(unk_0xE2BBD32891C18569(uParam1->f_3, true), func_190(&(uParam1->f_3)), 255, 0, 0, 60);
			}
			else if (func_189(&(uParam1->f_3)))
			{
				unk_0x79BEC9B6187EBB45(unk_0xE2BBD32891C18569(uParam1->f_3, true), 13f, 125, 0, 125, 60);
			}
		}
		if ((unk_0x2F78D19B3446544E(uParam1->f_3) < uParam1->f_15 || unk_0xDEAEC99031DCB92A(uParam1->f_3, unk_0xA19140A5C42D8715(), 1)) || unk_0xC9396A3FD9FCE75E(uParam1->f_3) < uParam1->f_16)
		{
			if (unk_0xDEAEC99031DCB92A(uParam1->f_3, unk_0xA19140A5C42D8715(), 0))
			{
				func_351(iParam0, "Taxi shot up the car", 12);
			}
			if (func_112(iParam0, 13) > 5f)
			{
				func_188(iParam0, uParam1, 1);
			}
			else
			{
				uParam1->f_15 = unk_0x2F78D19B3446544E(uParam1->f_3);
				uParam1->f_5 = unk_0x24A1A7BF4ED94B71(uParam1->f_3);
				uParam1->f_16 = unk_0xC9396A3FD9FCE75E(uParam1->f_3);
			}
		}
		if (func_49(iParam0->f_4, uParam1->f_3, 1) >= 120f)
		{
			if (func_49(iParam0->f_4, uParam1->f_3, 1) >= 480f)
			{
				func_250(iParam0, 143, 0, 0, 0);
				func_351(iParam0, "Taxi let the Chasee lose him", 2);
			}
			else if (!uParam1->f_21)
			{
				if ((func_187(&(iParam0->f_409), unk_0xE2BBD32891C18569(iParam0->f_4, true), unk_0xE2BBD32891C18569(uParam1->f_3, true), 0) == -1 && func_49(iParam0->f_4, uParam1->f_3, 1) >= 150f) && func_112(iParam0, 8) > 10f)
				{
					uParam1->f_21 = 1;
					uParam1->f_23 = 0;
					uParam1->f_9++;
					func_311(iParam0, 8, 0, 0);
					if (uParam1->f_9 > 3)
					{
						if (unk_0x1095F403F52B42E1(uParam1->f_3, 0) && !unk_0x7112137033807390(uParam1->f_2, 0))
						{
							unk_0x4123165906C17D87(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
							unk_0xD738221C247C8B71(uParam1->f_2, true);
						}
						func_351(iParam0, "Taxi let the Chasee lose him", 2);
					}
					else if (uParam1->f_9 == 3)
					{
						func_186(iParam0, 6, 1);
					}
					else
					{
						func_186(iParam0, 1, 1);
					}
					func_250(iParam0, 13, 1, 0, 0);
				}
			}
			else if (unk_0x58DE86018EA47551(iParam0->f_4, uParam1->f_3, 17))
			{
				uParam1->f_21 = 0;
				func_311(iParam0, 8, 0, 0);
			}
			else if (func_49(iParam0->f_4, uParam1->f_3, 1) >= 300f)
			{
				func_250(iParam0, 143, 0, 0, 0);
				func_351(iParam0, "Taxi let the Chasee lose him", 2);
			}
		}
		else if (((func_49(iParam0->f_4, uParam1->f_3, 1) < 22.5f && func_192(&(uParam1->f_3))) || (func_49(iParam0->f_4, uParam1->f_3, 1) < 13f && func_189(&(uParam1->f_3)))) || (func_49(iParam0->f_4, uParam1->f_3, 1) < func_190(&(uParam1->f_3)) && func_191(&(uParam1->f_3))))
		{
			if (!uParam1->f_22 || func_185(iParam0, 21))
			{
				if ((unk_0x58DE86018EA47551(iParam0->f_4, uParam1->f_3, 17) && func_112(iParam0, 8) > 10f) && bParam2)
				{
					uParam1->f_22 = 1;
					uParam1->f_23 = 0;
					uParam1->f_8++;
					uParam1->f_9++;
					func_311(iParam0, 8, 0, 0);
					if (!func_185(iParam0, 21))
					{
						func_311(iParam0, 21, 0, 0);
					}
					if (uParam1->f_9 > 3)
					{
						if (!func_207())
						{
							if (unk_0x1095F403F52B42E1(uParam1->f_3, 0) && !unk_0x7112137033807390(uParam1->f_2, 0))
							{
								unk_0x4123165906C17D87(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
								unk_0xD738221C247C8B71(uParam1->f_2, true);
							}
							func_351(iParam0, "Taxi was ID'd by the Chasee", 3);
						}
						else
						{
							func_147();
						}
					}
					else if (uParam1->f_9 == 3)
					{
						func_186(iParam0, 3, 1);
					}
					else
					{
						func_186(iParam0, 2, 1);
					}
					if (func_49(iParam0->f_4, uParam1->f_3, 1) < 15f)
					{
						if (!func_207())
						{
							func_250(iParam0, 143, 0, 0, 0);
							func_46();
							if (unk_0x1095F403F52B42E1(uParam1->f_3, 0) && !unk_0x7112137033807390(uParam1->f_2, 0))
							{
								unk_0x4123165906C17D87(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
								unk_0xD738221C247C8B71(uParam1->f_2, true);
							}
							func_351(iParam0, "Taxi was ID'd by the Chasee", 3);
						}
						else
						{
							func_147();
						}
					}
					else if (uParam1->f_9 <= 3)
					{
						func_250(iParam0, 13, 1, 0, 0);
					}
					uParam1->f_15 = unk_0x2F78D19B3446544E(uParam1->f_3);
				}
			}
		}
		else
		{
			if (func_185(iParam0, 21))
			{
				func_204(iParam0, 21, 0);
			}
			if (uParam1->f_22)
			{
				if (func_49(iParam0->f_4, uParam1->f_3, 1) > 22.5f)
				{
					uParam1->f_22 = 0;
					func_311(iParam0, 8, 0, 0);
				}
			}
			if (uParam1->f_21)
			{
				if (func_49(iParam0->f_4, uParam1->f_3, 1) < 150f && unk_0x58DE86018EA47551(iParam0->f_4, uParam1->f_3, 17))
				{
					uParam1->f_21 = 0;
					func_311(iParam0, 8, 0, 0);
				}
			}
			if (!uParam1->f_23)
			{
				if (!uParam1->f_21 && !uParam1->f_22)
				{
					uParam1->f_23 = 1;
					func_186(iParam0, 8, 1);
					func_250(iParam0, 13, 1, 0, 0);
					func_311(iParam0, 8, 0, 0);
				}
			}
			else
			{
				if (iParam0->f_80 > iParam0->f_101)
				{
					uParam1->f_24 = 1;
				}
				if ((!uParam1->f_24 && !uParam1->f_21) && !uParam1->f_22)
				{
					if (func_112(iParam0, 8) > 15f && !func_207())
					{
						func_186(iParam0, 9, 1);
						func_250(iParam0, 13, 1, 0, 0);
						func_311(iParam0, 8, 0, 0);
					}
				}
			}
		}
	}
}

bool func_185(int iParam0, int iParam1)
{
	return func_13(&(iParam0->f_146[iParam1 /*3*/]));
}

void func_186(int iParam0, int iParam1, bool bParam2)
{
	iParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

int func_187(var uParam0, vector3 vParam1, vector3 vParam2, bool bParam3)
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x931DC90E31FA1705(vParam1, vParam2, 511, 0, 7);
		if (bParam3)
		{
		}
	}
	else
	{
		iVar4 = unk_0x7C00B4755E048785(*uParam0, &iVar2, &uVar0, &uVar1, &uVar3);
		if (iVar4 == 2)
		{
			if (bParam3)
			{
			}
			if (iVar2 == 0)
			{
				*uParam0 = 0;
				return iVar2;
			}
			else
			{
				if (bParam3)
				{
				}
				*uParam0 = 0;
				return iVar2;
			}
		}
		else if (iVar4 == 0)
		{
			if (bParam3)
			{
			}
			*uParam0 = 0;
		}
	}
	return -1;
}

void func_188(int iParam0, var uParam1, bool bParam2)
{
	uParam1->f_6++;
	uParam1->f_9++;
	if (uParam1->f_6 >= 1)
	{
		if (!func_207())
		{
			func_275(iParam0, 0, 1);
			if (unk_0x1095F403F52B42E1(uParam1->f_3, 0) && !unk_0x7112137033807390(uParam1->f_2, 0))
			{
				unk_0x4123165906C17D87(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
				unk_0xD738221C247C8B71(uParam1->f_2, true);
			}
			func_351(iParam0, "Taxi was ID'd by the Chasee", 3);
		}
		else
		{
			func_147();
		}
	}
	else
	{
		func_311(iParam0, 13, 0, 0);
		unk_0xDCB46BFC2265476A(uParam1->f_3);
		func_186(iParam0, 10, 1);
		func_275(iParam0, 1, 0);
	}
	if (bParam2)
	{
	}
}

int func_189(var uParam0)
{
	if (unk_0x1095F403F52B42E1(*uParam0, 0))
	{
		if (unk_0x097275D546C9735F(*uParam0) || unk_0xEAA5CEF8875FEEED(*uParam0) < 4f)
		{
			return 1;
		}
	}
	return 0;
}

float func_190(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar2 = 22.5f;
	fVar3 = 13f;
	if (unk_0x1095F403F52B42E1(*uParam0, 0))
	{
		fVar1 = unk_0xEAA5CEF8875FEEED(*uParam0);
	}
	fVar0 = ((((fVar1 - 4f) / 11f) * (fVar2 - fVar3)) + fVar3);
	return fVar0;
}

int func_191(var uParam0)
{
	if (unk_0x1095F403F52B42E1(*uParam0, 0))
	{
		if (unk_0xEAA5CEF8875FEEED(*uParam0) >= 4f && unk_0xEAA5CEF8875FEEED(*uParam0) < 15f)
		{
			return 1;
		}
	}
	return 0;
}

int func_192(var uParam0)
{
	if (unk_0x1095F403F52B42E1(*uParam0, 0))
	{
		if (unk_0xEAA5CEF8875FEEED(*uParam0) >= 15f)
		{
			return 1;
		}
	}
	return 0;
}

void func_193(int iParam0, var uParam1)
{
	if (unk_0x1095F403F52B42E1(uParam1->f_3, 0) && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (func_49(iParam0->f_4, uParam1->f_3, 1) < 120f)
		{
			if (iParam0->f_414 == 6 || iParam0->f_414 == 1)
			{
				if (func_194(iParam0) == 13)
				{
					func_117();
				}
			}
		}
		if (func_49(iParam0->f_4, uParam1->f_3, 1) >= 22.5f)
		{
			if (iParam0->f_414 == 3 || iParam0->f_414 == 2)
			{
				if (func_194(iParam0) == 13)
				{
					func_117();
				}
			}
		}
	}
}

int func_194(int iParam0)
{
	return iParam0->f_416;
}

void func_195(int iParam0, vector3 vParam1, float fParam2, var uParam3, int iParam4)
{
	if (!func_207())
	{
		if (unk_0x1095F403F52B42E1(iParam0, 0))
		{
			if (func_51(iParam0, vParam1, 1) < fParam2)
			{
				if (func_197(uParam3))
				{
					func_196(uParam3, iParam4, -1);
				}
			}
		}
	}
}

void func_196(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

bool func_197(var uParam0)
{
	return *uParam0 == 0;
}

void func_198(int iParam0)
{
	if (func_201(iParam0))
	{
		func_199(iParam0);
	}
}

void func_199(var uParam0)
{
	if (unk_0x61D1CE85B7C84825() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0x7D8590E7AD7006E8();
			func_204(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_112(uParam0, 20) > 3f)
				{
					func_250(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_21(uParam0->f_81, 262144) || !func_21(uParam0->f_81, 1048576))
				{
					if (func_112(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_250(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_21(uParam0->f_82, 67108864))
				{
					if (func_112(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_250(uParam0, 85, 1, 0, 0);
						func_204(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_112(uParam0, 20) > 8f)
				{
					func_250(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_21(uParam0->f_81, 262144) || func_21(uParam0->f_82, 67108864))
			{
				if (!func_185(uParam0, 22))
				{
					func_200(uParam0, 22);
				}
			}
			if (func_185(uParam0, 22) && func_112(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_21(uParam0->f_81, 1048576))
					{
						func_250(uParam0, 84, 1, 0, 0);
						func_204(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_21(uParam0->f_82, 134217728))
					{
						func_250(uParam0, 85, 1, 0, 0);
						func_204(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

void func_200(var uParam0, int iParam1)
{
	func_113(&(uParam0->f_146[iParam1 /*3*/]));
}

bool func_201(var uParam0)
{
	return uParam0->f_120;
}

int func_202(int iParam0, int iParam1)
{
	if (unk_0x91347D2A80F38492(unk_0xA6580F898F4E801C()) < 1)
	{
		if (unk_0x4915F4759304D5CF(iParam0))
		{
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				if (unk_0xDEAEC99031DCB92A(iParam0, unk_0xA19140A5C42D8715(), 1))
				{
					unk_0xF10B3BC4F73177E5(unk_0xA6580F898F4E801C(), 1, 0);
					unk_0xDF341226C0B8BAC3(unk_0xA6580F898F4E801C(), 0);
					if (unk_0xCE3CB618AFE55EFB(iParam1))
					{
						unk_0xE1623437A3194332(&iParam1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_203(int iParam0)
{
	if (unk_0x1095F403F52B42E1(iParam0->f_4, 0))
	{
		if (unk_0xB0D49A1F9F054602(iParam0->f_4, -1, 0) == unk_0xA19140A5C42D8715())
		{
			return 1;
		}
	}
	return 0;
}

void func_204(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			func_102(&(iParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_102(&(iParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

int func_205(int iParam0, int iParam1)
{
	if (unk_0x1095F403F52B42E1(iParam1, 0))
	{
		if (!unk_0x4915F4759304D5CF(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_206()
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 402.42f, -1457.19f, 28.82f };
	vVar1 = { -701.25f, -1080.29f, 12.29f };
	if (vVar1.x <= vVar0.x)
	{
		vLocal_301.x = vVar1.x;
		vLocal_302.x = vVar0.x;
	}
	else
	{
		vLocal_301.x = vVar0.x;
		vLocal_302.x = vVar1.x;
	}
	if (vVar1.y <= vVar0.y)
	{
		vLocal_301.y = vVar1.y;
		vLocal_302.y = vVar0.y;
	}
	else
	{
		vLocal_301.y = vVar0.y;
		vLocal_302.y = vVar1.y;
	}
	vLocal_301 = { vLocal_301 - Vector(20f, 20f, 20f) };
	vLocal_302 = { vLocal_302 + Vector(20f, 20f, 20f) };
	unk_0x7E393C5E27D0ACA8(vLocal_301.x, vLocal_301.y, vLocal_302.x, vLocal_302.y);
}

int func_207()
{
	if (Global_15822 != 0 || unk_0x904275961B875DEB())
	{
		return 1;
	}
	return 0;
}

int func_208()
{
	func_150();
	if (iLocal_417 < 9 && iLocal_417 > 2)
	{
		if (func_146(iLocal_264))
		{
			iLocal_417 = 9;
		}
	}
	switch (iLocal_417)
	{
		case 0:
			if (func_145(1, 1, 1))
			{
				iLocal_264 = unk_0xFD34717937104F1C();
				func_138(256, 0, 1);
				func_143(&uLocal_355);
				func_142(&Local_352, 2, 0);
				if (func_214(&Local_251, vLocal_289, fLocal_306))
				{
					unk_0x68184E06469338F4(1346.9f, -1606.52f, 31.16f, 1457.25f, -1508.19f, 83.05f, true, 1);
					func_141(&Local_238, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
					func_250(&Local_238, 138, 1, 0, 0);
					iLocal_417 = 1;
				}
			}
			break;
		
		case 1:
			if (func_112(&Local_238, 19) > 3f)
			{
				if (!unk_0x4915F4759304D5CF(Local_251.f_2))
				{
					unk_0x1F4E5EFBFE503FB3(Local_251.f_2, true);
					unk_0x9568B1B58F78FF36(Local_251.f_2);
					if (unk_0x1095F403F52B42E1(Local_251.f_3, 0))
					{
						unk_0x3A95A0A3221D4208(&iLocal_232);
						unk_0x2F89329397A277BC(&iLocal_232);
						unk_0xA2EBCD9385E56019(0, Local_251.f_3, 20000, -1, 1f, 1, 0);
						unk_0x3F01127ECD227890(0, "veh@truck@ds@base", "start_engine", 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0x301F42EEE3C40328(iLocal_232);
						unk_0xE1072FA2FECBAD96(Local_251.f_2, iLocal_232);
						unk_0x14293208022014FA(Local_251.f_3, 1);
					}
				}
				unk_0xBAAFB49544432ABD(unk_0xA19140A5C42D8715(), Local_238.f_17);
				unk_0x057123F3A835FE47(Local_238, func_213(0));
				unk_0xC831502E35848BE4(Local_238, func_212(0), 2);
				unk_0xF62A5A3CB8DB2402(Local_238, 17.2f);
				unk_0xBC1542DDC31676C2(Local_238, "HAND_SHAKE", 0.1f);
				unk_0x930701157A4B9374(Local_238, true);
				unk_0x8E88E73F74A9FF79(true, false, 3000, 1, 0, 0);
				func_311(&Local_238, 19, 0, 0);
				iLocal_417 = 2;
			}
			break;
		
		case 2:
			iLocal_237 = unk_0x74677C414DD7F53C(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
			unk_0x057123F3A835FE47(iLocal_237, func_213(4));
			unk_0xC831502E35848BE4(iLocal_237, func_212(0), 2);
			unk_0xF62A5A3CB8DB2402(iLocal_237, 17.2f);
			unk_0xBC1542DDC31676C2(iLocal_237, "HAND_SHAKE", 0.1f);
			unk_0xD21CD2A6F93F44A6(iLocal_237, Local_238, 6000, 1, 1);
			func_311(&Local_238, 19, 0, 0);
			iLocal_417 = 3;
			break;
		
		case 3:
			if (func_112(&Local_238, 19) > 7.85f && !iLocal_279)
			{
				if (func_194(&Local_238) > 10)
				{
					func_209();
				}
				iLocal_279 = 1;
			}
			if (func_112(&Local_238, 19) > 8f && iLocal_279)
			{
				unk_0x057123F3A835FE47(Local_238, func_213(2));
				unk_0xA62406CE1190BF91(Local_238, Local_251.f_3, 0f, 0f, 0f, 1);
				unk_0xF62A5A3CB8DB2402(Local_238, 35f);
				unk_0xBC1542DDC31676C2(Local_238, "HAND_SHAKE", 0.2f);
				unk_0x930701157A4B9374(Local_238, true);
				unk_0x8E88E73F74A9FF79(true, false, 3000, 1, 0, 0);
				func_311(&Local_238, 19, 0, 0);
				iLocal_417 = 4;
			}
			break;
		
		case 4:
			unk_0x057123F3A835FE47(iLocal_237, func_213(2));
			unk_0xA62406CE1190BF91(iLocal_237, Local_251.f_3, 0f, 0f, 0f, 1);
			unk_0xF62A5A3CB8DB2402(iLocal_237, 45f);
			unk_0xBC1542DDC31676C2(iLocal_237, "HAND_SHAKE", 0.2f);
			unk_0xD21CD2A6F93F44A6(iLocal_237, Local_238, 10000, 1, 1);
			func_311(&Local_238, 19, 0, 0);
			iLocal_417 = 11;
			break;
		
		case 9:
			if (!unk_0x7112137033807390(Local_251.f_2, 0) && !unk_0x7112137033807390(Local_251.f_3, 0))
			{
				if (!unk_0x5D7DFE2058701942(Local_251.f_2, 0))
				{
					unk_0x692D5500D82E4F5D(Local_251.f_2, Local_251.f_3, -1);
				}
				unk_0x625FB4B0328423D9(Local_251.f_3, 10f);
				func_105(&(Local_251.f_27));
				func_311(&Local_238, 19, 2f, 0);
				iLocal_417 = 11;
				if (!bLocal_268)
				{
					func_209();
				}
			}
			break;
		
		case 11:
			if ((unk_0xFD34717937104F1C() % 1000) < 50)
			{
			}
			if (unk_0x37A8EF89184DBA23(413.8f, -1416.19f, 29.26f, 5f, 1230099731, 0))
			{
				unk_0x7954F628CA598930(1230099731, 413.8f, -1416.19f, 29.26f, false, 0.85f, 0);
			}
			if (func_112(&Local_238, 19) > 4f)
			{
				unk_0x70C1F5AA59767FE6(800);
				unk_0xD87B76260C547F31(0f);
				unk_0xAA32DD4848CF93E0(0f, 1065353216);
				func_105(&(Local_251.f_27));
				unk_0x77F0486CE0E598D5(Local_238, 0);
				unk_0x77F0486CE0E598D5(iLocal_237, 0);
				func_131(1, 1, 1);
				unk_0x8E88E73F74A9FF79(false, false, 3000, 1, 0, 0);
				func_204(&Local_238, 19, 0);
				iLocal_417 = 12;
			}
			else if (func_112(&Local_238, 19) > 3.7f)
			{
				if (func_133())
				{
					if (!iLocal_281)
					{
						unk_0xE60B9F9B48D4783F("CamPushInNeutral", 0, 0);
						unk_0xE11F00B4AC919F45(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_281 = 1;
					}
				}
			}
			break;
		
		case 12:
			return 1;
			break;
	}
	return 0;
}

void func_209()
{
	bLocal_268 = true;
	if (!unk_0x4915F4759304D5CF(Local_251.f_2))
	{
		if (unk_0x1095F403F52B42E1(Local_251.f_3, 0))
		{
			if (unk_0xE0FD180CD24C0B67(Local_251.f_2, Local_251.f_3, 0))
			{
				unk_0x4299736016AECE26(Local_251.f_3, 406.612f, -1419.937f, 29.00375f, 1, false, 0, 1);
				unk_0xDFA901280292A2FB(Local_251.f_2, Local_251.f_30);
				unk_0x3B7A32E04BBE59A5(Local_251.f_2, 1, true);
				unk_0x3B7A32E04BBE59A5(Local_251.f_2, 6, false);
				unk_0x3B7A32E04BBE59A5(Local_251.f_2, 17, false);
				unk_0x3B7A32E04BBE59A5(Local_251.f_2, 3, false);
				unk_0xF26F4E13A8AEC5EB(Local_251.f_2, 500f);
				unk_0x3677CB0D846A1308(Local_251.f_2, 500f);
				unk_0x326A31228591B95C(Local_251.f_2, 500f);
				unk_0x1F4E5EFBFE503FB3(Local_251.f_2, true);
				unk_0xA45E1AA8B9CF45AD(Local_251.f_3, 500);
				unk_0xA45E1AA8B9CF45AD(Local_251.f_2, 500);
				unk_0x98D1B1BD9C3AA456(Local_251.f_3, true, 1);
				unk_0x98D1B1BD9C3AA456(Local_251.f_2, true, 1);
				if (!unk_0xCE3CB618AFE55EFB(Local_251.f_4))
				{
					Local_251.f_4 = func_210(Local_251.f_3, 0, 0);
				}
				unk_0x1F4E5EFBFE503FB3(Local_251.f_2, true);
				unk_0x4ABEB615D66A01A9(Local_251.f_3, 120, "txm_fc_h1_", 1);
				unk_0xD136D67FFCAC2A13(Local_251.f_3, 0.8f);
				iLocal_308 = unk_0xFD34717937104F1C();
			}
		}
	}
}

int func_210(int iParam0, bool bParam1, bool bParam2)
{
	return func_211(iParam0, !bParam1, bParam2);
}

int func_211(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x6A15DD6A863D5E27(iParam0);
	if (unk_0xFAC06EE780B57279(iParam0))
	{
		unk_0x575CF00E129E0CE1(iVar0, func_127(unk_0x4C9BACA8D249CB13(), 1f, 1f));
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
		unk_0x575CF00E129E0CE1(iVar0, func_127(unk_0x4C9BACA8D249CB13(), 0.7f, 0.7f));
		unk_0xF46EDCACB3804F87(iVar0, bParam1);
	}
	else if (unk_0x92D42293DA8F9805(iParam0))
	{
		unk_0x575CF00E129E0CE1(iVar0, func_127(unk_0x4C9BACA8D249CB13(), 0.7f, 0.7f));
	}
	return iVar0;
}

Vector3 func_212(int iParam0)
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			vVar0 = { -0.7535f, -0.0475f, 91.9877f };
			break;
		
		case 1:
			vVar0 = { 4.2328f, 0f, 165.0072f };
			break;
		
		case 2:
			vVar0 = { -0.3221f, 0f, 68.7635f };
			break;
		
		case 3:
			vVar0 = { -0.3614f, 0f, -145.1533f };
			break;
		
		case 4:
			vVar0 = { -5.4284f, 0f, 1.8065f };
			break;
		
		case 5:
			vVar0 = { 1.2038f, 0f, 68.7635f };
			break;
		
		case 6:
			vVar0 = { -2.1877f, 0f, 71.1648f };
			break;
	}
	return vVar0;
}

Vector3 func_213(int iParam0)
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			vVar0 = { 495.4f, -1416.8f, 30.2f };
			break;
		
		case 1:
			vVar0 = { 429.6911f, -1385.415f, 29.7266f };
			break;
		
		case 2:
			vVar0 = { 417.9f, -1419.4f, 30.6f };
			break;
		
		case 3:
			vVar0 = { 426.754f, -1386.51f, 29.6201f };
			break;
		
		case 4:
			vVar0 = { 493.7f, -1416.9f, 30.2f };
			break;
		
		case 5:
			vVar0 = { 450.0146f, -1414.523f, 34.4507f };
			break;
		
		case 6:
			vVar0 = { 448.2621f, -1413.842f, 34.4501f };
			break;
	}
	return vVar0;
}

int func_214(var uParam0, vector3 vParam1, float fParam2)
{
	if (!unk_0xDC5D81351D6A4DDB(uParam0->f_2))
	{
		uParam0->f_2 = unk_0x35C6E06B120EB2E3(26, *uParam0, vParam1, fParam2, 1, true);
	}
	func_7(&(Local_238.f_244), 4, uParam0->f_2, "TaxiJames", 0, 1);
	unk_0x4FE3554969185993(uParam0->f_2, "TaxiJames");
	if (!unk_0x7112137033807390(iLocal_257, 0))
	{
		unk_0x13E0A8160525AE55(iLocal_257, 20, true);
	}
	if (!unk_0x7112137033807390(uParam0->f_2, 0))
	{
		unk_0x72A0FF8C49CFFC0D(uParam0->f_2, 0, 1, 0, 0);
		unk_0x72A0FF8C49CFFC0D(uParam0->f_2, 3, 0, 0, 0);
		unk_0x72A0FF8C49CFFC0D(uParam0->f_2, 4, 0, 1, 0);
		unk_0x72A0FF8C49CFFC0D(uParam0->f_2, 8, 0, 0, 0);
		unk_0x72A0FF8C49CFFC0D(uParam0->f_2, 11, 0, 1, 0);
		unk_0xDFA901280292A2FB(uParam0->f_2, uParam0->f_30);
		unk_0x3B7A32E04BBE59A5(uParam0->f_2, 1, true);
		unk_0x3B7A32E04BBE59A5(uParam0->f_2, 6, true);
		unk_0x3B7A32E04BBE59A5(uParam0->f_2, 17, true);
		unk_0x3B7A32E04BBE59A5(uParam0->f_2, 3, false);
		unk_0xF26F4E13A8AEC5EB(uParam0->f_2, 300f);
		unk_0x3677CB0D846A1308(uParam0->f_2, 300f);
		unk_0x326A31228591B95C(uParam0->f_2, 300f);
		unk_0x1F4E5EFBFE503FB3(uParam0->f_2, true);
	}
	return 1;
}

int func_215(var uParam0, float fParam1, float fParam2, float fParam3)
{
	if ((((unk_0x3A83743561B4F70C() && !unk_0x3BE8B7AEED1A3971()) && !unk_0x607776744A243309()) && !unk_0x71364F510A1CB69F()) && !uParam0->f_142)
	{
		if (func_227(uParam0))
		{
			func_129(uParam0, &(uParam0->f_43));
			func_222(uParam0);
			func_221(uParam0);
			func_198(uParam0);
			func_220(uParam0, fParam2, fParam3);
			func_218(uParam0);
			return func_216(uParam0, fParam1);
		}
	}
	return 0;
}

int func_216(var uParam0, float fParam1)
{
	if (func_64(uParam0) == 2)
	{
		if (unk_0xA60C975CBAB69F34(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0))
		{
		}
		if (((func_217(uParam0->f_4, uParam0->f_17, 1) <= (fParam1 + 1f) && unk_0x91347D2A80F38492(unk_0xA6580F898F4E801C()) < 1) && func_145(1, 1, 1)) && unk_0x678F978B0FAD24D2(uParam0->f_4))
		{
			return func_122(uParam0, 1, fParam1);
		}
	}
	else if (((unk_0xA60C975CBAB69F34(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0) && unk_0x91347D2A80F38492(unk_0xA6580F898F4E801C()) < 1) && func_145(1, 1, 1)) && unk_0x678F978B0FAD24D2(uParam0->f_4))
	{
		return func_122(uParam0, 1, fParam1);
	}
	return 0;
}

float func_217(int iParam0, vector3 vParam1, bool bParam2)
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

void func_218(var uParam0)
{
	float fVar0;
	
	if ((func_219(uParam0) && func_21(uParam0->f_81, 67108864)) && unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 0)
	{
		if ((unk_0xFD34717937104F1C() - iLocal_89) >= 10000)
		{
			fVar0 = func_50(uParam0->f_17, 1);
			if (fVar0 > fLocal_87)
			{
				iLocal_88++;
			}
			else
			{
				iLocal_88 = 0;
			}
			fLocal_87 = fVar0;
			iLocal_89 = unk_0xFD34717937104F1C();
		}
		if (iLocal_88 >= 2 && !func_207())
		{
			func_250(uParam0, 136, 1, 0, 1);
			iLocal_88 = 0;
		}
		if ((unk_0xFD34717937104F1C() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((unk_0xFD34717937104F1C() % 4000) < 50)
		{
			if (!func_219(uParam0))
			{
			}
			if (!func_21(uParam0->f_81, 67108864))
			{
			}
		}
		if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0)
		{
			if (iLocal_88 > 0)
			{
				iLocal_88 = 0;
			}
		}
	}
}

int func_219(var uParam0)
{
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (!unk_0x4915F4759304D5CF(uParam0->f_3))
		{
			if (unk_0xE0FD180CD24C0B67(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_220(var uParam0, float fParam1, float fParam2)
{
	if (func_219(uParam0) && func_21(uParam0->f_44, 4))
	{
		if ((unk_0x097275D546C9735F(uParam0->f_4) || unk_0xEAA5CEF8875FEEED(uParam0->f_4) < 3f) && func_203(uParam0))
		{
			if (!func_185(uParam0, 2))
			{
				func_200(uParam0, 2);
			}
			else if (func_219(uParam0))
			{
				if (func_112(uParam0, 2) > fParam1 && !func_185(uParam0, 14))
				{
					if (func_34())
					{
						func_250(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_250(uParam0, 48, 1, 0, 0);
					}
					func_311(uParam0, 2, 0, 0);
					if (func_185(uParam0, 10))
					{
						func_311(uParam0, 10, 0, 0);
					}
				}
				if (!func_185(uParam0, 3))
				{
					func_311(uParam0, 3, 0, 0);
				}
				else if (func_112(uParam0, 3) >= fParam2)
				{
					func_204(uParam0, 3, 0);
					func_351(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_185(uParam0, 2))
			{
				func_204(uParam0, 2, 0);
			}
			if (func_185(uParam0, 3))
			{
				func_204(uParam0, 3, 0);
			}
		}
	}
}

void func_221(var uParam0)
{
	if (unk_0x0099F119B7ADB4B3(unk_0xA6580F898F4E801C()) && !func_21(uParam0->f_44, 2))
	{
		func_65(&(uParam0->f_44), 2);
	}
	else if (!unk_0x0099F119B7ADB4B3(unk_0xA6580F898F4E801C()) && func_21(uParam0->f_44, 2))
	{
		func_19(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_53(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_250(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + ceil(5f));
	}
}

void func_222(var uParam0)
{
	if (!func_21(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0x91347D2A80F38492(unk_0xA6580F898F4E801C()) >= 1)
				{
					if (func_112(uParam0, 9) > 1f)
					{
						func_226(uParam0, unk_0x91347D2A80F38492(unk_0xA6580F898F4E801C()));
						if (uParam0->f_410 != 22)
						{
							func_250(uParam0, 50, 1, 1, 0);
						}
						func_311(uParam0, 9, 0, 0);
						if (unk_0xCE3CB618AFE55EFB(uParam0->f_9))
						{
							unk_0xE8C2974337833D20(uParam0->f_9, 0);
							unk_0x3E46F0AAE4B470FB(uParam0->f_9, false);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_207() && func_112(uParam0, 9) > 4f)
				{
					func_250(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_225("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_250(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0x91347D2A80F38492(unk_0xA6580F898F4E801C()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0x122A8778D4027A82(unk_0xA6580F898F4E801C(), func_224(uParam0)))
				{
					func_226(uParam0, unk_0x91347D2A80F38492(unk_0xA6580F898F4E801C()));
					func_53(6, 0);
				}
				if (!func_223(uParam0))
				{
					if (!unk_0x904275961B875DEB())
					{
						if (func_112(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_250(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0x91347D2A80F38492(unk_0xA6580F898F4E801C()) < 1)
				{
					if (func_225("TAXI_OBJ_POL", 0, 0))
					{
						unk_0x4F93066CECE72793();
					}
					if (unk_0xCE3CB618AFE55EFB(uParam0->f_9))
					{
						unk_0xE8C2974337833D20(uParam0->f_9, 255);
						unk_0x3E46F0AAE4B470FB(uParam0->f_9, true);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_207())
				{
					if (uParam0->f_410 != 22)
					{
						func_250(uParam0, 53, 1, 0, 1);
					}
					func_53(7, func_224(uParam0));
					func_226(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_207())
				{
					func_204(uParam0, 9, 0);
					func_311(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_223(var uParam0)
{
	return uParam0->f_110;
}

int func_224(var uParam0)
{
	return uParam0->f_106;
}

bool func_225(char* sParam0, int iParam1, int iParam2)
{
	unk_0x783C05630CCAF363(sParam0);
	if (iParam1 == 1)
	{
		unk_0x4FDA9E6EF359F8A9(iParam2);
	}
	return unk_0x0818E99A91733016();
}

void func_226(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

int func_227(var uParam0)
{
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (!unk_0x4915F4759304D5CF(uParam0->f_3))
		{
			if (!unk_0xE0FD180CD24C0B67(uParam0->f_3, uParam0->f_4, 1) && !unk_0x3D77D31E25961596(uParam0->f_3))
			{
				func_351(uParam0, "Passenger left car.", 9);
			}
			else if (func_237(uParam0))
			{
				if (func_225("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0xB9509A39A48644C4("TAXI_OBJ_PICKUP");
				}
				if (unk_0x3A83743561B4F70C())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0xFD34717937104F1C() % 1000) < 50)
				{
				}
				func_228(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_228(var uParam0, bool bParam1)
{
	func_236(uParam0, uParam0->f_3);
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (!unk_0xE0FD180CD24C0B67(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_185(uParam0, 14))
			{
				if (func_207())
				{
					func_235(1);
				}
				func_186(uParam0, 11, 1);
				func_230(uParam0, 1);
				func_311(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_219(uParam0))
				{
					if ((unk_0xFD34717937104F1C() % 1000) < 50)
					{
					}
					if (unk_0x5D7DFE2058701942(uParam0->f_2, 0))
					{
						if (func_112(uParam0, 15) > 5f)
						{
							func_311(uParam0, 15, 0f, 1);
						}
					}
					if (func_112(uParam0, 14) > 20f)
					{
						func_351(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_112(uParam0, 14) > 20f)
				{
					if (func_229(uParam0->f_4, 1) > 40f)
					{
						func_351(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_351(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_229(int iParam0, bool bParam1)
{
	return func_49(unk_0xEE978C39384D834F(unk_0xA6580F898F4E801C()), iParam0, bParam1);
}

void func_230(var uParam0, bool bParam1)
{
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xCE3CB618AFE55EFB(uParam0->f_8))
			{
				unk_0xE8C2974337833D20(uParam0->f_8, 0);
				unk_0x3E46F0AAE4B470FB(uParam0->f_8, false);
				func_234(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xCE3CB618AFE55EFB(uParam0->f_9))
			{
				unk_0xE8C2974337833D20(uParam0->f_9, 0);
				unk_0x3E46F0AAE4B470FB(uParam0->f_9, false);
				unk_0x4F93066CECE72793();
				if (func_219(uParam0))
				{
					func_250(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_234(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_231(uParam0, 0, 0);
		}
		else if (unk_0xCE3CB618AFE55EFB(uParam0->f_10))
		{
			unk_0xE1623437A3194332(&(uParam0->f_10));
			if (unk_0xCE3CB618AFE55EFB(uParam0->f_8))
			{
				unk_0xE8C2974337833D20(uParam0->f_8, 255);
				unk_0x3E46F0AAE4B470FB(uParam0->f_8, true);
			}
			else if (unk_0xCE3CB618AFE55EFB(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0xE8C2974337833D20(uParam0->f_9, 0);
					unk_0x3E46F0AAE4B470FB(uParam0->f_9, false);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0xE8C2974337833D20(uParam0->f_9, 255);
					unk_0x3E46F0AAE4B470FB(uParam0->f_9, true);
				}
			}
			unk_0x4F93066CECE72793();
		}
	}
}

void func_231(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_432(uParam0);
	}
	if (!unk_0xCE3CB618AFE55EFB(uParam0->f_10))
	{
		uParam0->f_10 = func_211(uParam0->f_4, 1, 0);
		unk_0xC4F12E446CCE89F5(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0x3E46F0AAE4B470FB(uParam0->f_10, true);
		func_232(uParam0);
		if (bParam2)
		{
			unk_0x4F93066CECE72793();
			func_250(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_232(var uParam0)
{
	func_311(uParam0, 14, 0, 0);
	func_233();
}

void func_233()
{
	int iVar0;
	
	iVar0 = unk_0xC409B91AC4749F88();
	if (unk_0x1095F403F52B42E1(iVar0, 0))
	{
		unk_0x6020229E34827A69(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_234(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_21(*uParam1, iParam2))
	{
		unk_0x4F93066CECE72793();
		func_250(uParam0, iParam3, 1, 0, 0);
		func_65(uParam1, iParam2);
	}
}

void func_235(int iParam0)
{
	Global_16833 = iParam0;
}

void func_236(var uParam0, int iParam1)
{
	if (unk_0xDC5D81351D6A4DDB(iParam1))
	{
		if (!unk_0x4915F4759304D5CF(iParam1))
		{
			if (unk_0xF524BFB878FD8057(unk_0xD4E735F4B6A956AC()))
			{
				if ((unk_0xDAA9E4FC4EBF1081(iParam1, joaat("weapon_stungun"), 0) || unk_0xDAA9E4FC4EBF1081(iParam1, 0, 2)) || unk_0xDAA9E4FC4EBF1081(iParam1, 0, 1))
				{
					func_351(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0x111B48287EFA117B(unk_0xD4E735F4B6A956AC());
			}
		}
	}
}

int func_237(var uParam0)
{
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (unk_0xB0D49A1F9F054602(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_185(uParam0, 14))
			{
				func_238(uParam0);
			}
			func_230(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_238(var uParam0)
{
	func_204(uParam0, 14, 0);
	func_204(uParam0, 15, 0);
	func_240();
	if (func_239())
	{
		func_235(0);
	}
}

int func_239()
{
	if (Global_16833 == 1)
	{
		return 1;
	}
	return 0;
}

void func_240()
{
	int iVar0;
	
	iVar0 = unk_0xC409B91AC4749F88();
	if (unk_0x1095F403F52B42E1(iVar0, 0))
	{
		unk_0x6020229E34827A69(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_241(int iParam0, var uParam1)
{
	func_128(iParam0, uParam1->f_2, 1, 1);
	if (unk_0x1095F403F52B42E1(uParam1->f_3, 0))
	{
		if (unk_0xDEAEC99031DCB92A(uParam1->f_3, unk_0xA19140A5C42D8715(), 1))
		{
			if (!func_207())
			{
				func_351(&Local_238, "Target's vehicle has been damaged by the player", 3);
			}
			else
			{
				func_147();
			}
		}
	}
	else if (!func_207())
	{
		func_351(&Local_238, "Target's vehicle isn't driveable", 13);
	}
	else
	{
		func_147();
	}
}

int func_242(var uParam0, vector3 vParam1, float fParam2)
{
	uParam0->f_17 = { vParam1 };
	uParam0->f_10 = fParam2;
	uParam0->f_3 = unk_0x48CFBECB146FD1A1(uParam0->f_1, uParam0->f_17, uParam0->f_10, true, true, false);
	unk_0xFC00A668AFC2126D(uParam0->f_1, true);
	unk_0xA5DE74AE39867B03(uParam0->f_1);
	iLocal_235[0] = unk_0x48CFBECB146FD1A1(iLocal_255, 404.9912f, -1423.974f, 28.4638f, 227.5235f, true, true, false);
	iLocal_235[1] = unk_0x48CFBECB146FD1A1(iLocal_255, 402.2958f, -1427.018f, 28.4632f, 226.6982f, true, true, false);
	iLocal_235[2] = unk_0x48CFBECB146FD1A1(iLocal_256, 398.415f, -1428.167f, 28.4504f, 226.4081f, true, true, false);
	unk_0x14293208022014FA(iLocal_235[0], 2);
	unk_0x14293208022014FA(iLocal_235[1], 2);
	unk_0x14293208022014FA(iLocal_235[2], 2);
	unk_0xAA8C8977AD74EDE5(iLocal_235[0], "BRAVEST");
	unk_0xAA8C8977AD74EDE5(iLocal_235[1], "BOLDEST");
	unk_0xAA8C8977AD74EDE5(iLocal_235[2], "BADDEST");
	unk_0x6259CDB47862A4F3(uParam0->f_3, 800, 0);
	unk_0xAA8C8977AD74EDE5(uParam0->f_3, "PUSSYWAG");
	unk_0x1D63F9FDAAC001A5(uParam0->f_3, 1);
	unk_0xB951B11EFBC5850D(uParam0->f_3, 1);
	uParam0->f_15 = unk_0x2F78D19B3446544E(uParam0->f_3);
	uParam0->f_31 = 1;
	unk_0x83055D7E96024509(uParam0->f_3, true);
	func_247(Local_238.f_14, 1, 1114636288);
	func_247(vLocal_299, 1, 15f);
	func_247(vLocal_300, 1, 15f);
	unk_0x14293208022014FA(uParam0->f_3, 2);
	return 1;
}

int func_243()
{
	if (!unk_0x7FC99CCC73354033(Local_251))
	{
		func_139("TAXI_ASSETS_FC_STAGE_02 - Loading escape ped", &iLocal_263, 1000);
		return 0;
	}
	if (!unk_0x7FC99CCC73354033(Local_251.f_1))
	{
		func_139("TAXI_ASSETS_FC_STAGE_02 - Loading escape car", &iLocal_263, 1000);
		return 0;
	}
	if (!unk_0x7FC99CCC73354033(iLocal_255))
	{
		func_139("TAXI_ASSETS_FC_STAGE_02 - Loading ambulance", &iLocal_263, 1000);
		return 0;
	}
	if (!unk_0x7FC99CCC73354033(iLocal_256))
	{
		func_139("TAXI_ASSETS_FC_STAGE_02 - Loading hospital car 2", &iLocal_263, 1000);
		return 0;
	}
	if (!unk_0x6F4A062113883115(120, "txm_fc_h1_"))
	{
		func_139("TAXI_ASSETS_FC_STAGE_02 - Vehicle Recording Loading txm_fc_h1_...", &iLocal_263, 1000);
		return 0;
	}
	if (!unk_0x6F4A062113883115(0, "taxi_oj_fc3"))
	{
		func_139("TAXI_ASSETS_FC_STAGE_02 - Vehicle Recording Loading taxi_oj_fc3...", &iLocal_263, 1000);
		return 0;
	}
	if (!unk_0xF8882C5CDED0257A(&cLocal_309))
	{
		func_139("TAXI_ASSETS_FC_STAGE_02 - Way point Recording Loading taxi_oj_fc...", &iLocal_263, 1000);
		return 0;
	}
	if (!unk_0x39C2D9AB77873F84("veh@truck@ds@base"))
	{
		return 0;
	}
	return 1;
}

void func_244(int iParam0, var uParam1)
{
	if (unk_0x1095F403F52B42E1(iParam0->f_4, 0))
	{
		if (!unk_0xE0FD180CD24C0B67(iParam0->f_2, iParam0->f_4, 0))
		{
			if (!func_185(iParam0, 14))
			{
				if (unk_0xCE3CB618AFE55EFB(*uParam1) && unk_0x1C05D741948BDE08(*uParam1) > 0)
				{
					unk_0xE8C2974337833D20(*uParam1, 0);
				}
				func_231(iParam0, 0, 0);
				func_250(iParam0, 2, 1, 0, 0);
			}
			else if (func_112(iParam0, 14) > 20f)
			{
				func_351(iParam0, "Player not in taxi - HANDLE BLIPS", 8);
			}
		}
		else
		{
			if (func_185(iParam0, 14))
			{
				func_311(iParam0, 2, 0, 0);
				func_238(iParam0);
			}
			if (unk_0xCE3CB618AFE55EFB(iParam0->f_10))
			{
				unk_0xE1623437A3194332(&(iParam0->f_10));
			}
			if ((unk_0xCE3CB618AFE55EFB(*uParam1) && unk_0x1C05D741948BDE08(*uParam1) < 255) && unk_0x91347D2A80F38492(unk_0xA6580F898F4E801C()) < 1)
			{
				unk_0xE8C2974337833D20(*uParam1, 255);
				unk_0x3E46F0AAE4B470FB(*uParam1, true);
			}
		}
	}
}

void func_245(var uParam0)
{
	func_246(uParam0, 1000);
	if (!unk_0x7112137033807390(uParam0->f_3, 0) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0x836A6A722DEA63F1(uParam0->f_3);
		unk_0x0177431263151C4E(uParam0->f_3, unk_0xA19140A5C42D8715(), 0);
	}
	func_147();
	func_238(uParam0);
}

void func_246(var uParam0, int iParam1)
{
	if (unk_0x37B568B777BC65F9(*uParam0))
	{
		unk_0x77F0486CE0E598D5(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0x8E88E73F74A9FF79(false, true, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0x8E88E73F74A9FF79(false, false, 3000, 1, 0, 0);
	}
}

void func_247(vector3 vParam0, bool bParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { func_37(vParam0, 1f, -fParam2, -fParam2, -fParam2) };
	vVar1 = { func_37(vParam0, 1f, fParam2, fParam2, fParam2) };
	vVar0.z = (vVar0.z - 22f);
	vVar1.z = (vVar1.z + 22f);
	if (!bParam1)
	{
		unk_0x68184E06469338F4(vVar0, vVar1, false, 1);
	}
	else
	{
		unk_0x387E83E60256EA18(vVar0, vVar1, true);
		unk_0xD9F4F897224699B4();
	}
}

void func_248()
{
	func_65(&(Local_238.f_55), 2);
	func_65(&(Local_238.f_55), 4);
	func_65(&(Local_238.f_55), 16);
	func_65(&(Local_238.f_55), 64);
	func_65(&(Local_238.f_55), 256);
	func_65(&(Local_238.f_55), 512);
	func_65(&(Local_238.f_55), 1024);
	func_65(&(Local_238.f_55), 2048);
	func_65(&(Local_238.f_55), 1073741824);
	func_65(&(Local_238.f_55), 8388608);
	func_65(&(Local_238.f_55), 33554432);
	func_65(&(Local_238.f_55), 16777216);
	func_65(&(Local_238.f_55), 4096);
	func_65(&(Local_238.f_100), 8);
	func_65(&(Local_238.f_100), 2048);
	func_65(&(Local_238.f_100), 256);
	func_65(&uLocal_398, 2);
}

void func_249(var uParam0)
{
	unk_0x111B48287EFA117B(unk_0xD4E735F4B6A956AC());
	unk_0x962CF6A9EA6FDCAC(unk_0xA6580F898F4E801C(), true, 0);
	func_246(uParam0, 1000);
}

void func_250(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_311(iParam0, 16, 4f, 0);
		if (func_251(iParam0))
		{
			func_46();
		}
	}
	func_275(iParam0, iParam2, bParam3);
}

int func_251(var uParam0)
{
	vector3 vVar0;
	struct<6> Var1;
	
	StringCopy(&vVar0, uParam0->f_143, 24);
	if (func_207())
	{
		Var1 = { func_253() };
		if (!unk_0x429D45A6C6520026(&Var1))
		{
			StringConCat(&vVar0, "_obj1", 24);
			if (unk_0x3CAC2741CC1A631F(&Var1, &vVar0))
			{
				return 1;
			}
			StringCopy(&vVar0, uParam0->f_143, 24);
			StringConCat(&vVar0, "_gret1", 24);
			func_252(&vVar0);
			if (unk_0x3CAC2741CC1A631F(&Var1, &vVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_252(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_253()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15822 == 4)
	{
		return Global_15441;
	}
	return Var0;
}

int func_254(var uParam0)
{
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (!unk_0x4915F4759304D5CF(uParam0->f_3))
		{
			if ((unk_0x3D77D31E25961596(uParam0->f_3) && (unk_0xFD34717937104F1C() - iLocal_81) > 500) || unk_0xE0FD180CD24C0B67(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_255()
{
	unk_0xCACEBBBEAD8F262E(Local_251);
	unk_0xCACEBBBEAD8F262E(Local_251.f_1);
	unk_0xCACEBBBEAD8F262E(iLocal_255);
	unk_0xCACEBBBEAD8F262E(iLocal_256);
	unk_0x5C2A13372076C38C(120, "txm_fc_h1_");
	unk_0x5C2A13372076C38C(0, "taxi_oj_fc3");
	unk_0x247955A7AC51D6E6(&cLocal_309);
	unk_0x6D68030C791111E0("veh@truck@ds@base");
}

int func_256(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (!unk_0xE0FD180CD24C0B67(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0xFD34717937104F1C() % 1000) < 50)
			{
			}
			func_228(uParam0, 1);
			if (func_32())
			{
				unk_0x962CF6A9EA6FDCAC(unk_0xA6580F898F4E801C(), true, 0);
			}
			if (unk_0xF9D4EF1338E38AFB(uParam0->f_3, 2106541073) == 1 || unk_0xF9D4EF1338E38AFB(uParam0->f_3, 2106541073) == 0)
			{
				unk_0x836A6A722DEA63F1(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_79 = 0;
				unk_0x0177431263151C4E(uParam0->f_3, unk_0xA19140A5C42D8715(), 0);
			}
		}
		else if (unk_0x122A8778D4027A82(unk_0xA6580F898F4E801C(), 0))
		{
			func_273(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0x3A95A0A3221D4208(&iVar3);
				unk_0x2F89329397A277BC(&iVar3);
				unk_0x956B3CF461C0C1C9(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0x0177431263151C4E(0, uParam0->f_4, 0);
				unk_0x301F42EEE3C40328(iVar3);
				unk_0xE1072FA2FECBAD96(uParam0->f_3, iVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_185(uParam0, 14))
			{
				func_238(uParam0);
				func_230(uParam0, 0);
			}
			if (func_185(uParam0, 9))
			{
				func_204(uParam0, 9, 0);
				unk_0x4F93066CECE72793();
				if (unk_0xCE3CB618AFE55EFB(uParam0->f_8))
				{
					unk_0xE8C2974337833D20(uParam0->f_8, 255);
					unk_0x3E46F0AAE4B470FB(uParam0->f_8, true);
				}
			}
			if (!unk_0x7112137033807390(uParam0->f_3, 0))
			{
				fVar4 = ((unk_0xEAA5CEF8875FEEED(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_272(uParam0, uParam0->f_3) > 300f)
				{
					func_351(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0xF9D4EF1338E38AFB(uParam0->f_3, 242628503) != 1 || ((func_49(unk_0xA19140A5C42D8715(), uParam0->f_3, 1) < 20f && func_217(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_217(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_269(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_268(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_86)
							{
								uParam0->f_7 = func_267(uParam0->f_4, uParam0->f_3);
								iVar0 = func_266(uParam0, &iVar1);
								if (!unk_0x7112137033807390(iVar0, 0))
								{
									if (iVar1 == uParam0->f_7)
									{
										if (uParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (uParam0->f_7 == 2)
										{
											iVar2 = 131072;
										}
										unk_0xCB482EF95FAE4D73(iVar0, 0, iVar2);
									}
									else
									{
										unk_0xCB482EF95FAE4D73(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0x5860446BFB759B77(uParam0->f_3, uParam0->f_4, 0, 0, false))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0x7112137033807390(iVar0, 0))
											{
												unk_0xCB482EF95FAE4D73(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0x9568B1B58F78FF36(uParam0->f_3);
							unk_0xA2EBCD9385E56019(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0x79BEC9B6187EBB45(unk_0xE2BBD32891C18569(uParam0->f_3, true), fVar4, 0, 0, 255, 150);
							}
							if (!func_203(uParam0))
							{
								unk_0x9568B1B58F78FF36(uParam0->f_3);
							}
							else if (((unk_0xF9D4EF1338E38AFB(uParam0->f_3, 242628503) != 1 && unk_0xF9D4EF1338E38AFB(uParam0->f_3, 242628503) != 0) && unk_0xF9D4EF1338E38AFB(uParam0->f_3, 242628503) != 7) && func_272(uParam0, uParam0->f_3) > 8f)
							{
								unk_0x3A95A0A3221D4208(&(uParam0->f_243));
								unk_0x2F89329397A277BC(&(uParam0->f_243));
								unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0x3F01127ECD227890(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0x3F01127ECD227890(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0x301F42EEE3C40328(uParam0->f_243);
								unk_0xE1072FA2FECBAD96(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0x411C28019DEA5CEF(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x39AA033597761444(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_86)
						{
							if (func_49(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_265(uParam0, 1))
								{
									unk_0x836A6A722DEA63F1(uParam0->f_3);
									func_351(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_264(uParam0->f_4))
								{
									unk_0x836A6A722DEA63F1(uParam0->f_3);
									func_351(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_262(uParam0);
						if (func_272(uParam0, uParam0->f_3) < fVar4 || func_32())
						{
							if (unk_0xE0FD180CD24C0B67(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_258(uParam0))
								{
									func_257(uParam0);
									iLocal_81 = unk_0xFD34717937104F1C();
									unk_0x13E0A8160525AE55(uParam0->f_3, 26, true);
									func_204(uParam0, 5, 0);
									unk_0x89DDBC94D1BF5F10();
									unk_0xB13032FADD612FC1(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0xFC03CFA3CE79D871(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0x79BEC9B6187EBB45(unk_0xE2BBD32891C18569(uParam0->f_3, true), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_257(var uParam0)
{
	if (unk_0xCE3CB618AFE55EFB(uParam0->f_8))
	{
		unk_0x3E46F0AAE4B470FB(uParam0->f_8, false);
		unk_0xE1623437A3194332(&(uParam0->f_8));
	}
}

int func_258(var uParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	
	func_139("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar6 = -1;
	if (!unk_0x7112137033807390(uParam0->f_3, 0) && !unk_0x7112137033807390(uParam0->f_4, 0))
	{
		func_150();
	}
	if (bLocal_86)
	{
		iLocal_78 = 10;
	}
	if ((iLocal_78 < 7 && iLocal_78 > 0) && !bLocal_86)
	{
		if (func_146(iLocal_80))
		{
			iLocal_78 = 7;
		}
	}
	switch (iLocal_78)
	{
		case 0:
			if (func_122(uParam0, 0, 1084227584) && func_145(1, 1, 1))
			{
				if (func_265(uParam0, 1))
				{
					iLocal_80 = unk_0xFD34717937104F1C();
					settimera(0);
					iLocal_78 = 1;
				}
				else
				{
					func_351(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (timera() > 500)
			{
				uParam0->f_7 = func_267(uParam0->f_4, uParam0->f_3);
				iVar3 = func_266(uParam0, &iVar4);
				if (!unk_0x7112137033807390(iVar3, 0))
				{
					if (iVar4 == uParam0->f_7)
					{
						if (uParam0->f_7 == 1)
						{
							iVar5 = 262144;
						}
						else
						{
							iVar5 = 131072;
						}
						unk_0xCB482EF95FAE4D73(iVar3, 0, iVar5);
					}
					else
					{
						unk_0xCB482EF95FAE4D73(iVar3, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0x5860446BFB759B77(uParam0->f_3, uParam0->f_4, 0, 0, false))
					{
						uParam0->f_7 = 0;
						if (!unk_0x7112137033807390(iVar3, 0))
						{
							unk_0xCB482EF95FAE4D73(iVar3, 0, 4096);
						}
					}
				}
				iLocal_78 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_7 == 0)
			{
				vVar2 = { 1.5f, 0f, -0.6422f };
				vVar0 = { -1.4309f, 3.958f, 3.5037f };
				vVar1 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else if (uParam0->f_7 == 2)
			{
				vVar2 = { 1.5f, -1f, -0.6422f };
				vVar0 = { 1.4309f, 3.958f, 0.5037f };
				vVar1 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else
			{
				vVar2 = { -1.5f, -1f, -0.6422f };
				vVar0 = { -1.4823f, 4.2333f, 0.5939f };
				vVar1 = { -0.4718f, 1.4282f, 0.3619f };
			}
			iVar6 = func_187(&(uParam0->f_409), unk_0x3201284584C7CD83(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0x3201284584C7CD83(uParam0->f_4, vVar0), 1);
			if (iVar6 == 1)
			{
				vVar0.z = (vVar0.z + 1.5f);
				if (uParam0->f_7 == 2)
				{
					vVar1 = { 0.7632f, 1.4884f, 0.4369f };
				}
			}
			if (iVar6 != -1)
			{
				func_138(0, 0, 1);
				unk_0x3521B10FB737CE36(unk_0xE2BBD32891C18569(uParam0->f_4, true), 3f, 0);
				unk_0x39F8A3E01BC1A69B(unk_0xE2BBD32891C18569(uParam0->f_4, true), 25f, 0);
				unk_0x135C61E339DABBAC(1);
				unk_0x4F93066CECE72793();
				func_117();
				func_275(uParam0, 0, 0);
				vVar7 = { unk_0x3201284584C7CD83(uParam0->f_4, vVar2) };
				unk_0x4299736016AECE26(uParam0->f_3, vVar7, 1, false, 0, 1);
				unk_0x92DDCF53AA47A63D(uParam0->f_3, func_260(uParam0));
				func_141(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0x057123F3A835FE47(*uParam0, unk_0x3201284584C7CD83(uParam0->f_4, vVar0));
				unk_0xA62406CE1190BF91(*uParam0, uParam0->f_4, vVar1, 1);
				unk_0x930701157A4B9374(*uParam0, true);
				unk_0x8E88E73F74A9FF79(true, false, 3000, 1, 0, 0);
				unk_0x3A3E4B7C6FBE305D(uParam0->f_3, 0, 0);
				unk_0xA2EBCD9385E56019(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_78 = 5;
			}
			break;
		
		case 5:
			func_139("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (timera() > 3500)
			{
				iLocal_78 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0x7112137033807390(uParam0->f_3, 0) && !unk_0x7112137033807390(uParam0->f_4, 0))
			{
				if (!unk_0x5D7DFE2058701942(uParam0->f_3, 0))
				{
					unk_0x692D5500D82E4F5D(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0x6B6894ACFD0185EF(uParam0->f_4, func_259(uParam0->f_7), 1);
				}
				unk_0x8E88E73F74A9FF79(false, false, 3000, 1, 0, 0);
				unk_0x77F0486CE0E598D5(*uParam0, 0);
				unk_0x77F0486CE0E598D5(uParam0->f_1, 0);
				unk_0xD87B76260C547F31(0f);
				unk_0xAA32DD4848CF93E0(0f, 1065353216);
				unk_0x70C1F5AA59767FE6(800);
				unk_0x135C61E339DABBAC(1);
				unk_0x4F93066CECE72793();
				func_117();
				func_275(uParam0, 0, 0);
				iLocal_78 = 8;
			}
			break;
		
		case 8:
			if (unk_0x3A83743561B4F70C() && !unk_0x3BE8B7AEED1A3971())
			{
				func_131(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0x8E88E73F74A9FF79(false, false, 3000, 1, 0, 0);
			unk_0x77F0486CE0E598D5(*uParam0, 0);
			unk_0x77F0486CE0E598D5(uParam0->f_1, 0);
			unk_0xD87B76260C547F31(0f);
			unk_0xAA32DD4848CF93E0(0f, 1065353216);
			func_131(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0x7112137033807390(uParam0->f_3, 0) && !unk_0x7112137033807390(uParam0->f_4, 0))
			{
				if (unk_0x3D77D31E25961596(uParam0->f_3) || unk_0x5D7DFE2058701942(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0xF9D4EF1338E38AFB(unk_0xA19140A5C42D8715(), -1794415470) != 1 && unk_0xF9D4EF1338E38AFB(unk_0xA19140A5C42D8715(), -1794415470) != 0)
				{
					unk_0xA2EBCD9385E56019(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

int func_259(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		case 0:
			return 1;
		
		case -1:
			return 0;
		
		default:
	}
	return 2;
}

float func_260(var uParam0)
{
	float fVar0;
	vector3 vVar1;
	
	fVar0 = 0f;
	vVar1 = { func_39() };
	if (uParam0->f_7 == 2)
	{
		vVar1 = { unk_0x3201284584C7CD83(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		vVar1 = { unk_0x3201284584C7CD83(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_261(unk_0xE2BBD32891C18569(uParam0->f_3, true), vVar1);
	return fVar0;
}

float func_261(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3)
{
	return unk_0x0C1B8F3F6EFDC58B((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_262(var uParam0)
{
	int iVar0;
	
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (!unk_0x4915F4759304D5CF(uParam0->f_3))
		{
			if (func_229(uParam0->f_3, 1) > 30f || func_263(uParam0))
			{
				if (unk_0xF9D4EF1338E38AFB(uParam0->f_3, -1794415470) == 1 || unk_0xF9D4EF1338E38AFB(uParam0->f_3, 242628503) == 1)
				{
					unk_0x3A95A0A3221D4208(&iVar0);
					unk_0x2F89329397A277BC(&iVar0);
					unk_0x0177431263151C4E(0, uParam0->f_4, 0);
					unk_0x3F01127ECD227890(0, "misscommon@response", "screw_you", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x956B3CF461C0C1C9(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0x301F42EEE3C40328(iVar0);
					unk_0xE1072FA2FECBAD96(uParam0->f_3, iVar0);
					func_351(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_263(var uParam0)
{
	if ((unk_0xEAA5CEF8875FEEED(uParam0->f_4) > 3f && func_112(uParam0, 5) > 15f) || unk_0xEE9EA5C5862BBFA3(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_264(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0xB7223494EA10AF2F(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0xB7223494EA10AF2F(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0xB7223494EA10AF2F(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0xB7223494EA10AF2F(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0x425CD7B17352316F(unk_0x8F474E419F56E48D(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0x39FC9AD10285F177(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0x39FC9AD10285F177(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0x39FC9AD10285F177(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0x39FC9AD10285F177(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

int func_265(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar1;
	
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0xB0D49A1F9F054602(uParam0->f_4, 1, 0);
		iVar0[1] = unk_0xB0D49A1F9F054602(uParam0->f_4, 2, 0);
		iVar0[2] = unk_0xB0D49A1F9F054602(uParam0->f_4, 0, 0);
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (unk_0xDC5D81351D6A4DDB(iVar0[iVar1]))
			{
				if (unk_0x7112137033807390(iVar0[iVar1], 0))
				{
					if (iVar1 == 0)
					{
						uParam0->f_7 = 1;
						if (bParam1)
						{
						}
					}
					else if (iVar1 == 1)
					{
						uParam0->f_7 = 2;
						if (bParam1)
						{
						}
					}
					else
					{
						uParam0->f_7 = 0;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return 0;
				}
			}
			iVar1++;
		}
		if ((unk_0xFD34717937104F1C() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_266(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		iVar0 = unk_0xB0D49A1F9F054602(uParam0->f_4, 1, 0);
		if (unk_0xDC5D81351D6A4DDB(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0xB0D49A1F9F054602(uParam0->f_4, 2, 0);
			if (unk_0xDC5D81351D6A4DDB(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0xB0D49A1F9F054602(uParam0->f_4, 0, 0);
				if (unk_0xDC5D81351D6A4DDB(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_267(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = unk_0xD63FAD81FAF5E0CB(iParam0);
	vVar0 = { unk_0x61141C81AF57CBDC(iParam0, unk_0xE2BBD32891C18569(iParam1, true)) };
	if (unk_0x8F474E419F56E48D(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0x8F474E419F56E48D(iParam0) == joaat("sentinel2"))
	{
		iVar2 = 1;
	}
	if (iVar2 == 1)
	{
		iVar1 = 0;
	}
	else if (vVar0.x > 0f)
	{
		if (unk_0x5860446BFB759B77(iParam1, iParam0, 2, 0, false))
		{
			iVar1 = 2;
		}
		else if (unk_0x5860446BFB759B77(iParam1, iParam0, 1, 0, false))
		{
			iVar1 = 1;
		}
		else
		{
			iVar1 = -2;
		}
	}
	else if (unk_0x5860446BFB759B77(iParam1, iParam0, 1, 0, false))
	{
		iVar1 = 1;
	}
	else if (unk_0x5860446BFB759B77(iParam1, iParam0, 2, 0, false))
	{
		iVar1 = 2;
	}
	else
	{
		iVar1 = -2;
	}
	return iVar1;
}

int func_268(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x7112137033807390(uParam0->f_3, 0))
	{
		if (!unk_0xCDDABFAF231CF3DD(uParam0->f_3) && func_229(uParam0->f_3, 1) < fParam2)
		{
			if (!func_185(uParam0, 5))
			{
				func_311(uParam0, 5, 0, 0);
			}
		}
		else if (func_185(uParam0, 5))
		{
			func_204(uParam0, 5, 0);
		}
		if (((func_112(uParam0, 5) > IntToFloat(iParam1) && unk_0xEAA5CEF8875FEEED(uParam0->f_4) < fParam4) && !unk_0xCDDABFAF231CF3DD(uParam0->f_3)) || func_229(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_269(var uParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	
	iVar8 = unk_0x4F9AEAB2CC029A5C(uParam0->f_4, "windscreen");
	if (iVar8 == -1)
	{
		iVar8 = unk_0x4F9AEAB2CC029A5C(uParam0->f_4, "windscreen_f");
	}
	if (iVar8 != -1)
	{
		vVar2 = { unk_0xB31A4B66C16032CC(uParam0->f_4, iVar8) };
		vVar2 = { unk_0x61141C81AF57CBDC(uParam0->f_4, vVar2) };
		vVar2.y = (vVar2.y + 1f);
	}
	else
	{
		vVar2 = { 0f, 1f, 1f };
	}
	vVar0 = { unk_0x3201284584C7CD83(uParam0->f_4, vVar2) };
	vVar1 = { unk_0x3201284584C7CD83(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x29D902B60F2CD9AB(vVar0, vVar1, 0, 0, 255, 255);
	switch (iLocal_79)
	{
		case 0:
			unk_0x1F4E5EFBFE503FB3(uParam0->f_3, true);
			iLocal_79 = 1;
			break;
		
		case 1:
			if ((func_49(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0x69C0BB7D03EE045D((vVar0.z - vVar1.z)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0x931DC90E31FA1705(vVar0, vVar1, 511, 0, 7);
				}
				else
				{
					iVar7 = unk_0x7C00B4755E048785(uParam0->f_409, &iVar5, &uVar3, &uVar4, &uVar6);
					if (iVar7 == 2)
					{
						if (iVar5 == 0)
						{
							iLocal_79 = 2;
						}
						uParam0->f_409 = 0;
					}
					else if (iVar7 == 0)
					{
						uParam0->f_409 = 0;
					}
				}
			}
			else if (unk_0xF9D4EF1338E38AFB(uParam0->f_3, 242628503) != 1 && unk_0xF9D4EF1338E38AFB(uParam0->f_3, 242628503) != 0)
			{
				unk_0x3A95A0A3221D4208(&(uParam0->f_243));
				unk_0x2F89329397A277BC(&(uParam0->f_243));
				unk_0x3F01127ECD227890(0, "oddjobs@taxi@", "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
				unk_0x4C9989F866EF6731(uParam0->f_243, 1);
				unk_0x301F42EEE3C40328(uParam0->f_243);
				unk_0xE1072FA2FECBAD96(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0x4F93066CECE72793();
			if (uParam0->f_411 != 9)
			{
				if (!func_21(uParam0->f_44, 128))
				{
					func_250(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_270(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0x9568B1B58F78FF36(uParam0->f_3);
			unk_0x22DD1D053CFF9707(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0x3A95A0A3221D4208(&(uParam0->f_243));
			unk_0x2F89329397A277BC(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0x3F01127ECD227890(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0x3F01127ECD227890(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
			unk_0x301F42EEE3C40328(uParam0->f_243);
			unk_0xE1072FA2FECBAD96(uParam0->f_3, uParam0->f_243);
			unk_0x3A95A0A3221D4208(&(uParam0->f_243));
			iLocal_79 = 3;
			break;
		
		case 3:
			iLocal_79 = 0;
			if (unk_0x411C28019DEA5CEF(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x39AA033597761444(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_270(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x85AF6DC3641E2442(iParam0, sParam1, sParam2, func_271(iParam3), 0);
}

int func_271(int iParam0)
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

float func_272(var uParam0, int iParam1)
{
	if (!unk_0x7112137033807390(iParam1, 0))
	{
		if (func_203(uParam0))
		{
			return func_49(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_273(var uParam0)
{
	func_236(uParam0, uParam0->f_3);
	if (func_203(uParam0))
	{
		if (func_185(uParam0, 14))
		{
			func_238(uParam0);
			if (unk_0xCE3CB618AFE55EFB(uParam0->f_10))
			{
				unk_0xE1623437A3194332(&(uParam0->f_10));
			}
		}
	}
	if (!func_185(uParam0, 9))
	{
		if (unk_0xCE3CB618AFE55EFB(uParam0->f_8))
		{
			unk_0xE8C2974337833D20(uParam0->f_8, 0);
			unk_0x3E46F0AAE4B470FB(uParam0->f_8, false);
		}
		func_311(uParam0, 9, 0, 0);
		func_274("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_274(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xD291E4BC830D587A(sParam0);
	unk_0x1D594DA1FE749C88(iParam1, 1);
}

void func_275(int iParam0, int iParam1, bool bParam2)
{
	iParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_46();
		func_311(iParam0, 16, 4f, 0);
		unk_0x4F93066CECE72793();
	}
}

int func_276(var uParam0, int iParam1)
{
	if (!unk_0xD744813D9841CA9A(2))
	{
		return 0;
	}
	func_280(12);
	if (func_21(uParam0->f_44, 8))
	{
		if (!func_21(uParam0->f_44, 128))
		{
			if (unk_0xBCF615B6673B73ED(unk_0xA19140A5C42D8715()) && !func_21(uParam0->f_44, 256))
			{
				func_65(&(uParam0->f_44), 256);
			}
			if (func_21(uParam0->f_44, 256) && unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				func_250(uParam0, 135, 1, 0, 1);
				func_65(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_279(uParam0, iParam1))
	{
		if (func_229(uParam0->f_3, 1) < 35f)
		{
			if (!func_21(uParam0->f_44, 8))
			{
				unk_0x0177431263151C4E(uParam0->f_3, unk_0xA19140A5C42D8715(), 0);
				func_250(uParam0, 133, 1, 0, 1);
				func_65(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0x4915F4759304D5CF(uParam0->f_3) || unk_0x8B9D3A1A7C2D3C6B(uParam0->f_3)) || func_229(uParam0->f_3, 1) > 400f)
		{
			func_351(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0xCAEB6CE71A2C7212(uParam0->f_2, 0);
		unk_0x0BE3742BB3253F0E(uParam0->f_4, true);
		if (unk_0xB0D49A1F9F054602(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			unk_0x5941346047B1E7C4(uParam0->f_4);
			func_277(uParam0);
			func_53(2, 0);
			bLocal_86 = true;
			func_113(&iLocal_82);
			return 1;
		}
		else
		{
			func_351(uParam0, "No Taxi", 21);
			func_162("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_277(var uParam0)
{
	if (!unk_0x7112137033807390(uParam0->f_4, 0))
	{
		if (func_278())
		{
		}
	}
}

int func_278()
{
	if (unk_0x05EFB6A616B6FADE(unk_0x22C775856F4633CA(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_279(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
			if (unk_0x1095F403F52B42E1(iVar0, 0))
			{
				iVar1 = unk_0x8F474E419F56E48D(iVar0);
				bVar2 = func_264(iVar0);
				bVar3 = true;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar1 == joaat("rhino") || iVar1 == joaat("ratloader")) || iVar1 == joaat("surfer")) || iVar1 == joaat("surfer2")) || iVar1 == joaat("armytanker")) || iVar1 == joaat("barracks")) || iVar1 == joaat("barracks2")) || iVar1 == joaat("crusader")) || iVar1 == joaat("utillitruck")) || iVar1 == joaat("utillitruck2")) || iVar1 == joaat("utillitruck3")) || iVar1 == joaat("airtug")) || iVar1 == joaat("caddy")) || iVar1 == joaat("caddy2")) || iVar1 == joaat("dloader")) || iVar1 == joaat("docktug")) || iVar1 == joaat("flatbed")) || iVar1 == joaat("ripley")) || iVar1 == joaat("romero")) || iVar1 == joaat("towtruck")) || iVar1 == joaat("towtruck2")) || iVar1 == joaat("airbus")) || iVar1 == joaat("bus")) || iVar1 == joaat("coach")) || iVar1 == joaat("rentalbus")) || iVar1 == joaat("tourbus")) || iVar1 == joaat("riot")) || iVar1 == joaat("trash")) || iVar1 == joaat("benson")) || iVar1 == joaat("biff")) || iVar1 == joaat("hauler")) || iVar1 == joaat("packer")) || iVar1 == joaat("phantom")) || iVar1 == joaat("pounder")) || iVar1 == joaat("bulldozer")) || iVar1 == joaat("handler")) || iVar1 == joaat("tiptruck2")) || iVar1 == joaat("cutter")) || iVar1 == joaat("dump")) || iVar1 == joaat("mixer")) || iVar1 == joaat("mixer2")) || iVar1 == joaat("rubble")) || iVar1 == joaat("scrap")) || iVar1 == joaat("tiptruck")) || iVar1 == joaat("camper")) || iVar1 == joaat("taco")) || iVar1 == joaat("boxville")) || iVar1 == joaat("boxville2")) || iVar1 == joaat("boxville3")) || iVar1 == joaat("burrito")) || iVar1 == joaat("burrito2")) || iVar1 == joaat("burrito3")) || iVar1 == joaat("burrito4")) || iVar1 == joaat("gburrito")) || iVar1 == joaat("journey")) || iVar1 == joaat("mule")) || iVar1 == joaat("mule2")) || iVar1 == joaat("pony")) || iVar1 == joaat("rumpo")) || iVar1 == joaat("rumpo2")) || iVar1 == joaat("speedo")) || iVar1 == joaat("speedo2")) || iVar1 == joaat("youga")) || iVar1 == joaat("mower")) || iVar1 == joaat("tractor")) || iVar1 == joaat("tractor2")) || iVar1 == joaat("fbi")) || iVar1 == joaat("fbi2")) || iVar1 == joaat("pranger")) || iVar1 == joaat("ambulance")) || iVar1 == joaat("dilettante2")) || iVar1 == 1938952078) || iVar1 == joaat("lguard")) || iVar1 == joaat("dune")) || iVar1 == joaat("pbus")) || iVar1 == joaat("police")) || iVar1 == joaat("police2")) || iVar1 == joaat("police3")) || iVar1 == joaat("police4")) || iVar1 == joaat("policeb")) || iVar1 == joaat("policet")) || iVar1 == joaat("sheriff")) || iVar1 == joaat("sheriff2")) || iVar1 == joaat("stockade"))
				{
					bVar3 = false;
				}
				if (uParam0->f_411 == 7)
				{
					if (iVar1 == joaat("bodhi2"))
					{
						bVar3 = false;
					}
				}
				bVar4 = false;
				if (unk_0x425CD7B17352316F(iVar1))
				{
					if (unk_0xB0D49A1F9F054602(iVar0, -1, 0) == unk_0xA19140A5C42D8715())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0xD63FAD81FAF5E0CB(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_21(uParam0->f_44, 64))
					{
						if (unk_0xD744813D9841CA9A(2))
						{
							func_162("TX_VIP_DMGD", -1);
							if (func_154("TX_VIP_DMGD"))
							{
								func_65(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_21(uParam0->f_44, 32))
					{
						if (unk_0xD744813D9841CA9A(2))
						{
							func_162("TX_VIP_CAR", -1);
							if (func_154("TX_VIP_CAR"))
							{
								func_65(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_21(uParam0->f_44, 16))
					{
						if (unk_0xD744813D9841CA9A(2))
						{
							func_162("TX_VIP_SMALL", -1);
							if (func_154("TX_VIP_SMALL"))
							{
								func_65(&(uParam0->f_44), 16);
							}
						}
					}
					return 0;
				}
				return 1;
			}
		}
		else
		{
			func_19(&(uParam0->f_44), 16);
			func_19(&(uParam0->f_44), 64);
			func_19(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

void func_280(int iParam0)
{
	var uVar0;
	vector3 vVar1[24];
	
	if (unk_0x365C4466BC171A2D() || unk_0x29A02C184A66D25E())
	{
		uVar0 = iParam0;
		unk_0x14D4D10C8FD9E0DD(8, &uVar0, 1, 1);
	}
	else if (unk_0x332D85764ED0503F() || unk_0x7DD04831D0FC44CA())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x5182FF270C9DCEBC(8, &cVar1);
	}
}

void func_281(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_20(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_282(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			unk_0xFA57C719261AA55D(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0x2BCFB39E86340DAA(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0xFA57C719261AA55D(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_283(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_284()
{
	Local_165 = 0;
	func_301(47641, 47616, 1);
	func_301(47377, 47353, 1);
	func_301(47291, 47266, 1);
	func_301(47194, 47170, 1);
	func_301(47060, 47039, 1);
	func_301(46986, 46961, 1);
	func_301(46819, 46795, 1);
}

int func_285(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_351(iParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_286(var uParam0)
{
	if (unk_0xDC5D81351D6A4DDB(uParam0->f_4))
	{
		if (func_288(uParam0->f_4))
		{
			func_287(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_287(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_288(int iParam0)
{
	if (!unk_0x1095F403F52B42E1(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x2F78D19B3446544E(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0xEB9F2352179A557A(iParam0, 0, 40000) || unk_0xEB9F2352179A557A(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_289(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_351(iParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_290(var uParam0)
{
	if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0)
	{
		if (func_291(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_291(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_292(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_287(uParam0, 11);
	return 1;
}

int func_293(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0->f_4))
	{
		if (unk_0x4374EED90C523366(iParam0->f_4) && !unk_0x678F978B0FAD24D2(iParam0->f_4))
		{
			if (!func_185(iParam0, 25))
			{
				func_311(iParam0, 25, 0, 0);
			}
			else if (func_112(iParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_185(iParam0, 25))
		{
			func_204(iParam0, 25, 0);
		}
	}
	return 0;
}

int func_294(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_351(iParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_295(var uParam0)
{
	if (!unk_0x7112137033807390(uParam0->f_4, 0))
	{
		if (unk_0x048D67718BE95EFE(uParam0->f_4))
		{
			if (unk_0xEB9F2352179A557A(uParam0->f_4, 0, 40000) || unk_0xEB9F2352179A557A(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_296(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_351(iParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_297(var uParam0)
{
	if (!unk_0x7112137033807390(uParam0->f_4, 0))
	{
		if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
		{
			if (unk_0x097275D546C9735F(uParam0->f_4))
			{
				if (func_291(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_298(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_351(iParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_299(var uParam0)
{
	if (unk_0xDC5D81351D6A4DDB(uParam0->f_4))
	{
		if (func_300(uParam0->f_4))
		{
			func_287(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_300(int iParam0)
{
	if (!unk_0x1095F403F52B42E1(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x2F78D19B3446544E(iParam0) == 0f)
	{
		if (!unk_0x1095F403F52B42E1(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0xEB9F2352179A557A(iParam0, 0, 40000) || unk_0xEB9F2352179A557A(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_301(int iParam0, int iParam1, bool bParam2)
{
	if (Local_165 >= 16)
	{
		Local_165 = 16;
		return;
	}
	Local_165.f_1[Local_165 /*4*/] = 0;
	func_66(&(Local_165.f_1[Local_165 /*4*/]), 1);
	if (bParam2)
	{
		func_66(&(Local_165.f_1[Local_165 /*4*/]), 2);
	}
	Local_165.f_1[Local_165 /*4*/].f_2 = iParam0;
	Local_165.f_1[Local_165 /*4*/].f_3 = iParam1;
	Local_165++;
}

int func_302(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_351(iParam0, "Passenger injured.", 15);
	return 1;
}

int func_303(var uParam0)
{
	if (unk_0xDC5D81351D6A4DDB(uParam0->f_3))
	{
		if ((unk_0x4915F4759304D5CF(uParam0->f_3) || unk_0x7112137033807390(uParam0->f_3, 0)) || unk_0x463E3A48A46C9195(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_304()
{
	Local_162[5 /*10*/] = 5;
	Local_162[5 /*10*/].f_1 = 0;
	Local_162[5 /*10*/].f_2 = "TX_SPEED_N";
	Local_162[5 /*10*/].f_9 = 78;
	Local_162[0 /*10*/] = 5;
	Local_162[0 /*10*/].f_1 = 0;
	Local_162[0 /*10*/].f_2 = "TX_AIR_N";
	Local_162[0 /*10*/].f_9 = 76;
	Local_162[2 /*10*/] = 5;
	Local_162[2 /*10*/].f_1 = 0;
	Local_162[2 /*10*/].f_2 = "TX_QSTOP_N";
	Local_162[2 /*10*/].f_9 = 21;
	Local_162[1 /*10*/] = 10;
	Local_162[1 /*10*/].f_1 = 0;
	Local_162[1 /*10*/].f_2 = "TX_DRIFT_N";
	Local_162[1 /*10*/].f_9 = 71;
	Local_162[4 /*10*/] = 10;
	Local_162[4 /*10*/].f_1 = 0;
	Local_162[4 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_162[4 /*10*/].f_9 = 79;
	Local_162[6 /*10*/] = 10;
	Local_162[6 /*10*/].f_1 = 0;
	Local_162[6 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_162[6 /*10*/].f_9 = 80;
	Local_162[9 /*10*/] = 15;
	Local_162[9 /*10*/].f_1 = 0;
	Local_162[9 /*10*/].f_2 = "TX_HITRUN_N";
	Local_162[9 /*10*/].f_9 = 82;
	Local_162[8 /*10*/] = 15;
	Local_162[8 /*10*/].f_1 = 0;
	Local_162[8 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_162[8 /*10*/].f_9 = 72;
	Local_162[7 /*10*/] = 15;
	Local_162[7 /*10*/].f_1 = 0;
	Local_162[7 /*10*/].f_2 = "TX_ROLL_N";
	Local_162[7 /*10*/].f_9 = 74;
	Local_162[11 /*10*/] = 5;
	Local_162[11 /*10*/].f_1 = 0;
	Local_162[11 /*10*/].f_2 = "TX_SWERVE_N";
	Local_162[11 /*10*/].f_9 = 70;
	Local_162[12 /*10*/] = 5;
	Local_162[12 /*10*/].f_1 = 0;
	Local_162[12 /*10*/].f_2 = "TX_REVERSE_N";
	Local_162[12 /*10*/].f_9 = 69;
	Local_162[13 /*10*/] = 10;
	Local_162[13 /*10*/].f_1 = 0;
	Local_162[13 /*10*/].f_2 = "TX_OFFROAD_N";
	Local_162[13 /*10*/].f_9 = 67;
	Local_162[14 /*10*/] = 10;
	Local_162[14 /*10*/].f_1 = 0;
	Local_162[14 /*10*/].f_2 = "TX_NEARMIS_N";
	Local_162[14 /*10*/].f_9 = 75;
}

int func_305()
{
	if (!unk_0x7FC99CCC73354033(iLocal_253))
	{
		return 0;
	}
	if (!unk_0x39C2D9AB77873F84("gestures@m@standing@casual"))
	{
		return 0;
	}
	if (!func_306(&iLocal_263, 0))
	{
		func_139("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_263, 1000);
		return 0;
	}
	return 1;
}

int func_306(int iParam0, bool bParam1)
{
	if (!unk_0x7FC99CCC73354033(func_18()))
	{
		func_139("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0x39C2D9AB77873F84("gestures@m@standing@casual"))
		{
			func_139("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0x39C2D9AB77873F84("oddjobs@taxi@"))
	{
		func_139("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x39C2D9AB77873F84("oddjobs@towingcome_here"))
	{
		func_139("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x39C2D9AB77873F84("misscommon@response"))
	{
		func_139("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xD744813D9841CA9A(2))
	{
		func_139("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_307(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			iParam0->f_123 = "TRS_STREAMING";
			break;
		
		case 2:
			iParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		
		case 3:
			iParam0->f_123 = " TRS_SPAWNING ";
			break;
		
		case 4:
			iParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		
		case 5:
			iParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		
		case 6:
			iParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		
		case 7:
			iParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		
		case 8:
			iParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		
		case 9:
			iParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		
		case 10:
			iParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		
		case 18:
			iParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		
		case 11:
			iParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		
		case 19:
			iParam0->f_123 = " TRS_CUTSCENE ";
			break;
		
		case 20:
			iParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		
		case 13:
			iParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		
		case 12:
			iParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		
		case 14:
			iParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		
		case 15:
			iParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		
		case 16:
			iParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		
		case 17:
			iParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		
		case 22:
			iParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		
		case 25:
			iParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		
		case 26:
			iParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		
		case 24:
			iParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		
		case 27:
			iParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		
		case 23:
			iParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		
		case 28:
			iParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		
		case 29:
			iParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		
		case 30:
			iParam0->f_123 = " TRS_CLEANUP ";
			break;
		
		case 21:
			iParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		
		default:
			iParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	iParam0->f_410 = iParam1;
}

int func_308(var uParam0)
{
	if (!unk_0x4915F4759304D5CF(uParam0->f_3))
	{
		uParam0->f_8 = func_210(uParam0->f_3, 0, 0);
		unk_0xFE046D9ED16748E7(1, 0f);
		unk_0x3E46F0AAE4B470FB(uParam0->f_8, true);
		unk_0xC4F12E446CCE89F5(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x22DD1D053CFF9707(uParam0->f_3, unk_0xA19140A5C42D8715(), -1, 2048, 4);
	}
	return 1;
}

int func_309(var uParam0, vector3 vParam1, vector3 vParam2, char* sParam3, int iParam4, float fParam5, float fParam6)
{
	if (!unk_0xDC5D81351D6A4DDB(uParam0->f_3))
	{
		func_310(uParam0, uParam0->f_14);
		uParam0->f_11 = { vParam1 };
		uParam0->f_14 = { vParam2 };
		func_36(uParam0->f_14, 0);
		unk_0x3521B10FB737CE36(uParam0->f_14, 2f, 0);
		func_247(uParam0->f_14, 0, fParam6);
		if (iParam4 == 0)
		{
			uParam0->f_3 = unk_0x06031220D387D5BC(uParam0->f_11);
		}
		else if (unk_0xDC5D81351D6A4DDB(Global_104780.f_225[0]))
		{
			uParam0->f_3 = Global_104780.f_225[0];
			unk_0x1F7948851FB36E88(uParam0->f_3, true, 1);
		}
		else
		{
			uParam0->f_3 = unk_0x35C6E06B120EB2E3(26, iParam4, uParam0->f_11, fParam5, 1, true);
		}
		func_7(&(uParam0->f_244), 3, uParam0->f_3, sParam3, 0, 1);
		unk_0x4FE3554969185993(uParam0->f_3, sParam3);
		unk_0xB0D7019224A3A443(uParam0->f_3, 112, true);
		if (!unk_0x4915F4759304D5CF(uParam0->f_3))
		{
			unk_0xA45E1AA8B9CF45AD(uParam0->f_3, 250);
			unk_0x13E0A8160525AE55(uParam0->f_3, 32, false);
			unk_0x13E0A8160525AE55(uParam0->f_3, 104, true);
			unk_0x13E0A8160525AE55(uParam0->f_3, 177, true);
			unk_0x13E0A8160525AE55(uParam0->f_3, 116, false);
			unk_0x94E87D83163B4BEB("TAXI_Passenger", &(uParam0->f_413));
			unk_0x80E7C4A78224C8F9(1, uParam0->f_413, 1862763509);
			unk_0x80E7C4A78224C8F9(2, uParam0->f_413, -1533126372);
			unk_0xDFA901280292A2FB(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_310(var uParam0, vector3 vParam1)
{
	uParam0->f_51[0] = unk_0x0477993AA6A894D2(vParam1, 20f, 5f, 0);
}

void func_311(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_106(&(iParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_105(&(iParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_106(&(iParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_105(&(iParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_312()
{
	unk_0xCACEBBBEAD8F262E(iLocal_253);
	func_314(0);
	uLocal_405 = func_313();
	unk_0x6D68030C791111E0("gestures@m@standing@casual");
}

int func_313()
{
	return unk_0xB00CD6895BDB01A0("MIDSIZED_MESSAGE");
}

void func_314(bool bParam0)
{
	unk_0xCACEBBBEAD8F262E(func_18());
	if (bParam0)
	{
		unk_0x6D68030C791111E0("gestures@m@standing@casual");
	}
	unk_0x6D68030C791111E0("oddjobs@taxi@");
	unk_0x6D68030C791111E0("oddjobs@towingcome_here");
	unk_0x6D68030C791111E0("misscommon@response");
	unk_0x6A633E13B2A856AE("TAXI", 2);
	if (!func_21(Global_106070.f_19069, 128))
	{
		func_65(&(Global_106070.f_19069), 128);
	}
}

void func_315(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) == 0)
		{
			if (bParam2)
			{
				if (func_112(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_250(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_250(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_311(uParam0, 10, 0f, 1);
				}
			}
			else if (func_112(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_250(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_250(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_311(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_112(uParam0, 10) > 30f)
		{
			if (!func_207())
			{
				if (uParam0->f_112)
				{
					func_250(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_250(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_311(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_21(uParam0->f_100, 64))
	{
		if (!func_13(&(Local_162[5 /*10*/].f_6)))
		{
			func_113(&(Local_162[5 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[5 /*10*/].f_6)) > 6f)
		{
			if (func_338(uParam0))
			{
				if (uParam0->f_113)
				{
					func_250(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_250(uParam0, Local_162[5 /*10*/].f_9, 1, 0, 0);
				}
				func_337(uParam0, 1);
				func_335(5, uParam0);
				func_334(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 1))
	{
		if (!func_13(&(Local_162[0 /*10*/].f_6)))
		{
			func_113(&(Local_162[0 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[0 /*10*/].f_6)) > 5f)
		{
			if (func_333(uParam0))
			{
				func_337(uParam0, 1);
				func_335(0, uParam0);
				if (uParam0->f_113)
				{
					func_250(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_250(uParam0, Local_162[0 /*10*/].f_9, 1, 0, 0);
				}
				func_334(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 2))
	{
		if (!func_13(&(Local_162[1 /*10*/].f_6)))
		{
			func_113(&(Local_162[1 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[1 /*10*/].f_6)) > 5f)
		{
			if (func_332(uParam0))
			{
				func_337(uParam0, 1);
				func_335(1, uParam0);
				if (uParam0->f_113)
				{
					func_250(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_250(uParam0, Local_162[1 /*10*/].f_9, 1, 0, 0);
				}
				func_334(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 2048))
	{
		if (!func_13(&(Local_162[8 /*10*/].f_6)))
		{
			if (unk_0xDC5D81351D6A4DDB(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x24A1A7BF4ED94B71(uParam0->f_4);
				func_113(&(Local_162[8 /*10*/].f_6));
			}
		}
		else if (func_103(&(Local_162[8 /*10*/].f_6)) > 7f || Local_162[8 /*10*/].f_1 == 0)
		{
			if (func_331(uParam0))
			{
				func_337(uParam0, 1);
				func_335(8, uParam0);
				func_334(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 128))
	{
		if (!func_13(&(Local_162[6 /*10*/].f_6)))
		{
			func_113(&(Local_162[6 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[6 /*10*/].f_6)) > 5f)
		{
			if (func_330(uParam0))
			{
				func_337(uParam0, 1);
				func_335(6, uParam0);
				if (uParam0->f_113)
				{
					func_250(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_250(uParam0, Local_162[6 /*10*/].f_9, 1, 0, 0);
				}
				func_334(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 32))
	{
		if (!func_13(&(Local_162[4 /*10*/].f_6)))
		{
			func_113(&(Local_162[4 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[4 /*10*/].f_6)) > 4f)
		{
			if (func_329(uParam0))
			{
				func_337(uParam0, 1);
				func_335(4, uParam0);
				if (uParam0->f_113)
				{
					func_250(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_250(uParam0, Local_162[4 /*10*/].f_9, 1, 0, 0);
				}
				func_334(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 256))
	{
		if (!func_13(&(Local_162[7 /*10*/].f_6)))
		{
			func_113(&(Local_162[7 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[7 /*10*/].f_6)) > 5f || Local_162[7 /*10*/].f_1 == 0)
		{
			if (func_328(uParam0))
			{
				func_335(7, uParam0);
				func_337(uParam0, 1);
				if (uParam0->f_113)
				{
					func_250(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_250(uParam0, Local_162[7 /*10*/].f_9, 1, 0, 1);
				}
				func_334(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 8))
	{
		if (!func_13(&(Local_162[9 /*10*/].f_6)))
		{
			func_113(&(Local_162[9 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[9 /*10*/].f_6)) <= 7f)
		{
			unk_0x111B48287EFA117B(unk_0xD4E735F4B6A956AC());
		}
		else if (func_103(&(Local_162[9 /*10*/].f_6)) > 7f || Local_162[9 /*10*/].f_1 == 0)
		{
			if (func_327(uParam0))
			{
				func_337(uParam0, 1);
				func_335(9, uParam0);
				if (uParam0->f_113)
				{
					func_250(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_250(uParam0, Local_162[9 /*10*/].f_9, 1, 0, 1);
				}
				func_334(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 16384))
	{
		if (!func_13(&(Local_162[13 /*10*/].f_6)))
		{
			func_113(&(Local_162[13 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[13 /*10*/].f_6)) > 10f)
		{
			if (func_321(uParam0))
			{
				func_337(uParam0, 1);
				func_335(13, uParam0);
				if (uParam0->f_113)
				{
					func_250(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_250(uParam0, Local_162[13 /*10*/].f_9, 1, 0, 0);
				}
				func_334(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 32768))
	{
		if (!func_13(&(Local_162[14 /*10*/].f_6)))
		{
			func_113(&(Local_162[14 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[14 /*10*/].f_6)) > 7f)
		{
			if (func_320(uParam0))
			{
				func_337(uParam0, 1);
				func_335(14, uParam0);
				if (uParam0->f_113)
				{
					func_250(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_250(uParam0, Local_162[14 /*10*/].f_9, 1, 0, 0);
				}
				func_334(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 4096))
	{
		if (!func_13(&(Local_162[11 /*10*/].f_6)))
		{
			func_113(&(Local_162[11 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[11 /*10*/].f_6)) > 8f)
		{
			if (func_319(uParam0))
			{
				func_337(uParam0, 1);
				func_335(11, uParam0);
				if (uParam0->f_113)
				{
					func_250(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_250(uParam0, Local_162[11 /*10*/].f_9, 1, 0, 0);
				}
				func_334(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 8192))
	{
		if (!func_13(&(Local_162[12 /*10*/].f_6)))
		{
			func_113(&(Local_162[12 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[12 /*10*/].f_6)) > 5f)
		{
			if (func_318(uParam0))
			{
				func_337(uParam0, 1);
				func_335(12, uParam0);
				if (uParam0->f_113)
				{
					func_250(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_250(uParam0, Local_162[12 /*10*/].f_9, 1, 0, 0);
				}
				func_334(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 4))
	{
		if (!func_13(&(Local_162[2 /*10*/].f_6)))
		{
			func_317(&(Local_162[2 /*10*/].f_6), 0f);
		}
		else if (func_103(&(Local_162[2 /*10*/].f_6)) > 5f)
		{
			if (func_316(uParam0))
			{
				if (uParam0->f_113)
				{
					func_250(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_250(uParam0, Local_162[2 /*10*/].f_9, 1, 0, 0);
				}
				func_337(uParam0, 1);
				func_335(2, uParam0);
				func_334(uParam0);
			}
		}
	}
}

int func_316(var uParam0)
{
	float fVar0;
	
	if (!unk_0x4915F4759304D5CF(uParam0->f_2))
	{
		if ((!unk_0x9661F58DC617631D(uParam0->f_2) && !func_13(&(Local_162[0 /*10*/].f_3))) && !func_13(&(Local_162[1 /*10*/].f_3)))
		{
			if (!func_13(&(Local_162[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0xEAA5CEF8875FEEED(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_113(&(Local_162[2 /*10*/].f_3));
				}
			}
			else if (func_103(&(Local_162[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0xEAA5CEF8875FEEED(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_102(&(Local_162[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_102(&(Local_162[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_317(int iParam0, float fParam1)
{
	if (!func_13(iParam0))
	{
		func_106(iParam0, fParam1);
	}
}

int func_318(var uParam0)
{
	vector3 vVar0;
	
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		vVar0 = { unk_0x39D039D3B0625870(uParam0->f_4, 1) };
		if (vVar0.y < -10f && !func_13(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_13(&(Local_162[12 /*10*/].f_3)))
			{
				func_113(&(Local_162[12 /*10*/].f_3));
			}
			else if (func_103(&(Local_162[12 /*10*/].f_3)) > 5f)
			{
				func_102(&(Local_162[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_102(&(Local_162[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_319(var uParam0)
{
	vector3 vVar0;
	
	if ((((((unk_0x1095F403F52B42E1(uParam0->f_4, 0) && !func_13(&(Local_162[0 /*10*/].f_3))) && !func_13(&(Local_162[1 /*10*/].f_3))) && !func_13(&(Local_162[5 /*10*/].f_3))) && !func_13(&(Local_162[9 /*10*/].f_3))) && !func_13(&(Local_162[7 /*10*/].f_3))) && !func_13(&(Local_162[8 /*10*/].f_3)))
	{
		vVar0 = { unk_0x39D039D3B0625870(uParam0->f_4, 1) };
		if (unk_0x69C0BB7D03EE045D(vVar0.x) > 2.5f && !func_13(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_13(&(Local_162[11 /*10*/].f_3)))
			{
				func_113(&(Local_162[11 /*10*/].f_3));
				fLocal_164 = vVar0.x;
			}
			else if (func_103(&(Local_162[11 /*10*/].f_3)) < 1.5f && (unk_0x69C0BB7D03EE045D(fLocal_164) - unk_0x69C0BB7D03EE045D(vVar0.x)) < 0f)
			{
				func_102(&(Local_162[11 /*10*/].f_3));
				return 1;
			}
			else if (func_103(&(Local_162[11 /*10*/].f_3)) >= 1.5f)
			{
				func_102(&(Local_162[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_320(var uParam0)
{
	if (((((unk_0x1095F403F52B42E1(uParam0->f_4, 0) && !func_13(&(Local_162[0 /*10*/].f_3))) && !func_13(&(Local_162[8 /*10*/].f_3))) && !func_13(&(Local_162[5 /*10*/].f_3))) && !func_13(&(Local_162[9 /*10*/].f_3))) && !func_13(&(Local_162[7 /*10*/].f_3)))
	{
		if (!func_13(&(Local_162[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0xEB67B4270D12F60E(unk_0xE2BBD32891C18569(uParam0->f_4, true), 10f, 0, 260);
			if (unk_0xDC5D81351D6A4DDB(uParam0->f_5))
			{
				if ((unk_0xEAA5CEF8875FEEED(uParam0->f_4) > 15f && func_49(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x7112137033807390(uParam0->f_5, 0) && !unk_0x588F5E48C78F1C73(uParam0->f_5, -1, 0)))
				{
					func_113(&(Local_162[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_103(&(Local_162[14 /*10*/].f_3)) < 1.5f && func_49(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0x6C55C22D72D438C8(uParam0->f_5))
		{
			func_102(&(Local_162[14 /*10*/].f_3));
			return 1;
		}
		else if (func_103(&(Local_162[14 /*10*/].f_3)) >= 1.5f)
		{
			func_102(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0x6C55C22D72D438C8(uParam0->f_5))
		{
			func_102(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_321(var uParam0)
{
	if (((unk_0x1095F403F52B42E1(uParam0->f_4, 0) && !func_13(&(Local_162[9 /*10*/].f_3))) && !func_13(&(Local_162[7 /*10*/].f_3))) && !func_13(&(Local_162[4 /*10*/].f_3)))
	{
		if (!func_322(uParam0->f_4) && unk_0xEAA5CEF8875FEEED(uParam0->f_4) > 15f)
		{
			if (!func_13(&(Local_162[13 /*10*/].f_3)))
			{
				func_113(&(Local_162[13 /*10*/].f_3));
			}
			else if (func_103(&(Local_162[13 /*10*/].f_3)) > 5f)
			{
				func_102(&(Local_162[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_102(&(Local_162[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_322(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	float fVar9;
	
	unk_0x5D260ECB08BF5B88(unk_0xE2BBD32891C18569(iParam0, true), 1, &vVar0, 1, 3f, 0f);
	unk_0x5D260ECB08BF5B88(unk_0xE2BBD32891C18569(iParam0, true), 2, &vVar1, 1, 3f, 0f);
	unk_0xF3DFF37E04D42116(vVar0, -1, &vVar2);
	fVar9 = vmag(vVar2 - vVar0);
	vVar3 = { func_326((vVar1.x - vVar0.x), (vVar1.y - vVar0.y), 0f) };
	vVar4 = { func_325(vVar3, 0) * Vector(fVar9, fVar9, fVar9) };
	vVar3 = { vVar3 * Vector(2f, 2f, 2f) };
	vVar5 = { vVar0 - vVar3 + vVar4 };
	vVar6 = { vVar0 - vVar3 - vVar4 };
	vVar7 = { vVar1 + vVar3 + vVar4 };
	vVar8 = { vVar1 + vVar3 - vVar4 };
	vVar8 = { vVar8 };
	return func_323(unk_0xE2BBD32891C18569(iParam0, true), vVar5, vVar6, vVar7);
}

int func_323(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	vParam0.z = 0f;
	vParam1.z = 0f;
	vParam2.z = 0f;
	vParam3.z = 0f;
	vVar0 = { func_326(vParam2 - vParam1) };
	vVar1 = { func_326(vParam3 - vParam1) };
	fVar2 = func_324(vParam0, vVar0);
	fVar3 = func_324(vParam1, vVar0);
	fVar4 = func_324(vParam2, vVar0);
	fVar5 = func_324(vParam0, vVar1);
	fVar6 = func_324(vParam1, vVar1);
	fVar7 = func_324(vParam3, vVar1);
	if (fVar3 > fVar4)
	{
		fVar8 = fVar3;
		fVar3 = fVar4;
		fVar4 = fVar8;
	}
	if (fVar2 < fVar3 || fVar2 > fVar4)
	{
		return 0;
	}
	if (fVar6 > fVar7)
	{
		fVar9 = fVar6;
		fVar6 = fVar7;
		fVar7 = fVar9;
	}
	if (fVar5 < fVar6 || fVar5 > fVar7)
	{
		return 0;
	}
	return 1;
}

float func_324(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_325(vector3 vParam0, int iParam1)
{
	vector3 vVar0;
	
	switch (iParam1)
	{
		case 0:
			vVar0.x = -vParam0.y;
			vVar0.y = vParam0.x;
			break;
		
		case 1:
			vVar0.x = -vParam0.x;
			vVar0.y = -vParam0.y;
			break;
		
		case 2:
			vVar0.x = vParam0.y;
			vVar0.y = -vParam0.x;
			break;
	}
	vVar0.z = vParam0.z;
	return vVar0;
}

Vector3 func_326(vector3 vParam0)
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

int func_327(var uParam0)
{
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (unk_0xB0D49A1F9F054602(uParam0->f_4, -1, 0) == unk_0xA19140A5C42D8715())
		{
			if (unk_0xF524BFB878FD8057(unk_0xD4E735F4B6A956AC()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_328(var uParam0)
{
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (unk_0xB0D49A1F9F054602(uParam0->f_4, -1, 0) == unk_0xA19140A5C42D8715())
		{
			if (unk_0xEE9EA5C5862BBFA3(uParam0->f_4))
			{
				if (!iLocal_163)
				{
					if (unk_0x83ED9EAE6B660383(uParam0->f_4) <= -145f || unk_0x83ED9EAE6B660383(uParam0->f_4) >= 145f)
					{
						iLocal_163 = 1;
					}
				}
			}
			else if (iLocal_163)
			{
				if (unk_0x83ED9EAE6B660383(uParam0->f_4) <= 35f && unk_0x83ED9EAE6B660383(uParam0->f_4) >= -35f)
				{
					iLocal_163 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_329(var uParam0)
{
	int iVar0;
	
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		iVar0 = unk_0x516E54B08EC3C5A2(unk_0xD4E735F4B6A956AC());
		if (iVar0 == 0)
		{
			if (!func_13(&(Local_162[4 /*10*/].f_3)))
			{
				func_113(&(Local_162[4 /*10*/].f_3));
			}
			else if (func_103(&(Local_162[4 /*10*/].f_3)) > 2f)
			{
				func_102(&(Local_162[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_102(&(Local_162[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_330(var uParam0)
{
	int iVar0;
	
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		iVar0 = unk_0x979D31722AEEC6AF(unk_0xD4E735F4B6A956AC());
		if (iVar0 == 0)
		{
			if (!func_13(&(Local_162[6 /*10*/].f_3)))
			{
				func_113(&(Local_162[6 /*10*/].f_3));
			}
			else if (func_103(&(Local_162[6 /*10*/].f_3)) > 3.5f)
			{
				func_102(&(Local_162[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_102(&(Local_162[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_331(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (unk_0xFD2A0C4CDE18D862(uParam0->f_4))
		{
			iVar0 = unk_0x24A1A7BF4ED94B71(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0xDCB46BFC2265476A(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_250(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_250(uParam0, 72, 1, 0, 1);
				}
				func_102(&(Local_162[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_332(var uParam0)
{
	vector3 vVar0;
	
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		vVar0 = { unk_0x39D039D3B0625870(uParam0->f_4, 1) };
		if (unk_0x69C0BB7D03EE045D(vVar0.x) > 3f && !func_13(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_13(&(Local_162[1 /*10*/].f_3)))
			{
				func_113(&(Local_162[1 /*10*/].f_3));
			}
			else if (func_103(&(Local_162[1 /*10*/].f_3)) > 1.2f)
			{
				func_102(&(Local_162[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_102(&(Local_162[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_333(var uParam0)
{
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (!unk_0x678F978B0FAD24D2(uParam0->f_4) && unk_0x26D28D230F871E8D(uParam0->f_4))
		{
			if (!func_13(&(Local_162[0 /*10*/].f_3)))
			{
				func_113(&(Local_162[0 /*10*/].f_3));
			}
			else if (func_103(&(Local_162[0 /*10*/].f_3)) > 0.7f)
			{
				func_102(&(Local_162[0 /*10*/].f_3));
				func_105(&(Local_162[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_102(&(Local_162[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_334(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_13(&(Local_162[iVar0 /*10*/].f_6)))
		{
			func_105(&(Local_162[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_311(uParam0, 10, 0f, 1);
	unk_0x111B48287EFA117B(unk_0xD4E735F4B6A956AC());
}

void func_335(int iParam0, var uParam1)
{
	Local_162[iParam0 /*10*/].f_1++;
	func_336(uParam1, iParam0);
	func_102(&(Local_162[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_336(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_162[iParam1 /*10*/]);
}

void func_337(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_338(var uParam0)
{
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (unk_0xEAA5CEF8875FEEED(uParam0->f_4) > 25f)
		{
			if (!func_13(&(Local_162[5 /*10*/].f_3)))
			{
				func_113(&(Local_162[5 /*10*/].f_3));
			}
			else if (func_103(&(Local_162[5 /*10*/].f_3)) > 3.5f)
			{
				func_102(&(Local_162[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_102(&(Local_162[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_339()
{
	vector3 vVar0;
	
	func_139("UPDATE_FINAL_SCENE()", &iLocal_263, 1000);
	if ((Local_238.f_410 >= 28 && !iLocal_272) && ((unk_0xDEAEC99031DCB92A(Local_238.f_3, unk_0xA19140A5C42D8715(), 1) || unk_0xDEAEC99031DCB92A(iLocal_257, unk_0xA19140A5C42D8715(), 1)) || unk_0xDEAEC99031DCB92A(Local_251.f_2, unk_0xA19140A5C42D8715(), 1)))
	{
		iLocal_272 = 1;
	}
	else if (!unk_0x7112137033807390(Local_238.f_3, 0))
	{
		if (unk_0xDEAEC99031DCB92A(Local_251.f_2, Local_238.f_3, 1) && iLocal_415 < 6)
		{
			iLocal_272 = 1;
		}
	}
	if (iLocal_415 >= 4)
	{
		if (func_229(Local_238.f_3, 1) < 3f && !iLocal_271)
		{
			if (!func_207())
			{
				func_342(&(Local_238.f_244), Local_238.f_144, "txm4_aggro", 8, 0, 0, 0);
				unk_0x9C24BCD3EFB3BF4C(Local_238.f_3, unk_0xA19140A5C42D8715(), -1, 0);
				iLocal_267 = unk_0xFD34717937104F1C();
				iLocal_271 = 1;
			}
			else if (!iLocal_280)
			{
				func_147();
				iLocal_280 = 1;
			}
		}
	}
	switch (iLocal_415)
	{
		case 0:
			if ((!unk_0x7112137033807390(Local_251.f_2, 0) && !unk_0x7112137033807390(Local_238.f_3, 0)) && !unk_0x7112137033807390(iLocal_257, 0))
			{
				unk_0x94E87D83163B4BEB("TAXI_Whore", &iLocal_260);
				iLocal_259 = unk_0x35546CE87C5336BC(Local_238.f_3);
				unk_0x80E7C4A78224C8F9(255, Local_251.f_30, iLocal_260);
				unk_0x80E7C4A78224C8F9(255, Local_251.f_30, iLocal_259);
				unk_0xDFA901280292A2FB(Local_251.f_2, Local_251.f_30);
				unk_0xDFA901280292A2FB(iLocal_257, iLocal_260);
				unk_0x1F4E5EFBFE503FB3(Local_251.f_2, true);
				unk_0x3B7A32E04BBE59A5(Local_251.f_2, 17, true);
				unk_0x6259CDB47862A4F3(Local_251.f_2, 130, 0);
				unk_0x2C3F3D88E305DCA7(Local_251.f_2, 1);
				unk_0x80B6201B269FC581(Local_251.f_2, true);
				unk_0x9568B1B58F78FF36(Local_251.f_2);
				unk_0x1F4E5EFBFE503FB3(iLocal_257, true);
				unk_0x3B7A32E04BBE59A5(iLocal_257, 17, true);
				unk_0x6259CDB47862A4F3(iLocal_257, 130, 0);
				unk_0x2C3F3D88E305DCA7(iLocal_257, 1);
				unk_0x80B6201B269FC581(iLocal_257, true);
				unk_0x9568B1B58F78FF36(iLocal_257);
				iLocal_415 = 1;
			}
			break;
		
		case 1:
			if (((!unk_0x7112137033807390(Local_251.f_2, 0) && !unk_0x7112137033807390(Local_238.f_3, 0)) && !unk_0x7112137033807390(iLocal_257, 0)) && !unk_0x7112137033807390(Local_251.f_3, 0))
			{
				unk_0x3A95A0A3221D4208(&iLocal_232);
				unk_0x2F89329397A277BC(&iLocal_232);
				unk_0x0177431263151C4E(0, iLocal_257, 0);
				unk_0x3F01127ECD227890(0, &cLocal_312, "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x3F01127ECD227890(0, &cLocal_321, "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x301F42EEE3C40328(iLocal_232);
				unk_0xE1072FA2FECBAD96(Local_251.f_2, iLocal_232);
				unk_0x3A95A0A3221D4208(&iLocal_232);
				unk_0x3A95A0A3221D4208(&iLocal_233);
				unk_0x2F89329397A277BC(&iLocal_233);
				unk_0x0177431263151C4E(0, Local_251.f_2, 0);
				unk_0x3F01127ECD227890(0, &cLocal_330, "idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x301F42EEE3C40328(iLocal_233);
				unk_0xE1072FA2FECBAD96(iLocal_257, iLocal_233);
				unk_0x3A95A0A3221D4208(&iLocal_233);
				iLocal_415 = 2;
			}
			break;
		
		case 2:
			if (iLocal_273)
			{
				if (!unk_0x7112137033807390(iLocal_257, 0) && !unk_0x7112137033807390(Local_238.f_3, 0))
				{
					unk_0xDFA901280292A2FB(Local_238.f_3, iLocal_259);
					unk_0x1F4E5EFBFE503FB3(Local_238.f_3, true);
					unk_0x3B7A32E04BBE59A5(Local_238.f_3, 13, true);
					unk_0x6909FCF0DF666AF6(Local_238.f_3, 100);
					unk_0xD461381B293D9B46(Local_238.f_3, 100);
					unk_0x6259CDB47862A4F3(Local_238.f_3, 105, 0);
					unk_0x9568B1B58F78FF36(Local_238.f_3);
					unk_0x3A95A0A3221D4208(&iLocal_234);
					unk_0x2F89329397A277BC(&iLocal_234);
					unk_0xB3E1967E66494060(0, 5000);
					func_341(&Local_238, -691.48f, -1113.31f, 13.53f);
					unk_0xBB2EBD7F469C8767(0, func_340(iLocal_231), iLocal_257, 3f, true, 0.5f, 4f, true, 0, 0, -957453492, 20000);
					unk_0xC2BB1787159395F9(0, iLocal_257, -1, -957453492);
					unk_0x301F42EEE3C40328(iLocal_234);
					unk_0xE1072FA2FECBAD96(Local_238.f_3, iLocal_234);
					unk_0x3A95A0A3221D4208(&iLocal_234);
					iLocal_269 = 1;
					unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 256);
					unk_0xF0188A1B49D79AF7(Local_238.f_3, joaat("weapon_pistol"), 100, true, true);
					iLocal_415 = 3;
				}
			}
			else if (!iLocal_276)
			{
				if (!unk_0x4915F4759304D5CF(Local_251.f_2) && !unk_0x4915F4759304D5CF(iLocal_257))
				{
					if (func_229(Local_251.f_2, 1) < 2f || func_229(iLocal_257, 1) < 2f)
					{
						unk_0x9568B1B58F78FF36(Local_251.f_2);
						unk_0x9568B1B58F78FF36(iLocal_257);
						unk_0x22DD1D053CFF9707(Local_251.f_2, unk_0xA19140A5C42D8715(), -1, 2048, 4);
						unk_0x3A95A0A3221D4208(&iLocal_232);
						unk_0x2F89329397A277BC(&iLocal_232);
						unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
						unk_0x301F42EEE3C40328(iLocal_232);
						unk_0xE1072FA2FECBAD96(Local_251.f_2, iLocal_232);
						unk_0x22DD1D053CFF9707(iLocal_257, unk_0xA19140A5C42D8715(), -1, 2048, 4);
						unk_0x3A95A0A3221D4208(&iLocal_233);
						unk_0x2F89329397A277BC(&iLocal_233);
						unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
						unk_0x301F42EEE3C40328(iLocal_233);
						unk_0xE1072FA2FECBAD96(iLocal_257, iLocal_233);
						iLocal_276 = 1;
					}
				}
				else
				{
					if (unk_0x4915F4759304D5CF(Local_251.f_2))
					{
					}
					else
					{
						unk_0x9568B1B58F78FF36(Local_251.f_2);
						unk_0x33B5487515BD13D5(Local_251.f_2, unk_0xA19140A5C42D8715(), 100f, 20000, 0, 0);
					}
					if (unk_0x4915F4759304D5CF(iLocal_257))
					{
					}
					else
					{
						unk_0x9568B1B58F78FF36(iLocal_257);
						unk_0x33B5487515BD13D5(iLocal_257, unk_0xA19140A5C42D8715(), 100f, 20000, 0, 0);
					}
				}
			}
			break;
		
		case 3:
			func_139("UPDATE_FINAL_SCENE - FINAL_SCENE_WAIT_FOR_DIALOGUE", &iLocal_263, 1000);
			if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0) && !unk_0x7112137033807390(Local_238.f_3, 0))
			{
				if (unk_0xF9D4EF1338E38AFB(Local_238.f_3, 242628503) == 1)
				{
					if (unk_0x5100CFEF9EA1B0E5(Local_238.f_3) > 0 && iLocal_269)
					{
						unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
						iLocal_269 = 0;
					}
				}
			}
			else
			{
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
			}
			if (((!unk_0x4915F4759304D5CF(iLocal_257) && unk_0x80C8B831B972D6A0(iLocal_257)) && !unk_0x7112137033807390(Local_251.f_2, 0)) && !bLocal_275)
			{
				unk_0x22DD1D053CFF9707(Local_251.f_2, Local_238.f_3, -1, 2048, 4);
				unk_0x3A95A0A3221D4208(&iLocal_232);
				unk_0x2F89329397A277BC(&iLocal_232);
				unk_0xB3E1967E66494060(0, 500);
				unk_0x3F01127ECD227890(0, "MOVE_DUCK_FOR_COVER", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x3F01127ECD227890(0, "MOVE_DUCK_FOR_COVER", "loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x0177431263151C4E(0, Local_238.f_3, 0);
				unk_0x301F42EEE3C40328(iLocal_232);
				unk_0xE1072FA2FECBAD96(Local_251.f_2, iLocal_232);
				bLocal_275 = true;
			}
			if (!unk_0x7112137033807390(Local_238.f_3, 0) && !unk_0x7112137033807390(Local_251.f_2, 0))
			{
				if (unk_0x5100CFEF9EA1B0E5(Local_238.f_3) > 2)
				{
					func_250(&Local_238, 58, 1, 0, 0);
					unk_0x3A95A0A3221D4208(&iLocal_234);
					unk_0x2F89329397A277BC(&iLocal_234);
					unk_0x53FF9BDD8529ACD2(0);
					unk_0x9C24BCD3EFB3BF4C(0, Local_251.f_2, 2000, 0);
					unk_0x301F42EEE3C40328(iLocal_234);
					unk_0xE1072FA2FECBAD96(Local_238.f_3, iLocal_234);
					iLocal_415 = 4;
				}
			}
			break;
		
		case 4:
			func_139("FINAL_SCENE_KILL_WOMAN", &iLocal_263, 1000);
			if (unk_0x7112137033807390(iLocal_257, 0))
			{
				if (!unk_0x7112137033807390(Local_251.f_2, 0))
				{
					if (!unk_0x7112137033807390(Local_238.f_3, 0))
					{
						unk_0x3A95A0A3221D4208(&iLocal_233);
						unk_0x2F89329397A277BC(&iLocal_233);
						unk_0xBB2EBD7F469C8767(0, -691.48f, -1113.31f, 13.53f, Local_251.f_2, 1f, false, 0.5f, 4f, true, 0, 0, -957453492, 20000);
						unk_0x9C24BCD3EFB3BF4C(0, Local_251.f_2, -1, 1);
						unk_0x301F42EEE3C40328(iLocal_233);
						unk_0xE1072FA2FECBAD96(Local_238.f_3, iLocal_233);
					}
				}
				iLocal_415 = 6;
			}
			break;
		
		case 6:
			func_139("FINAL_SCENE_KILL_MAN", &iLocal_263, 1000);
			if (!func_207())
			{
				if (!unk_0x7112137033807390(Local_238.f_3, 0) && !unk_0x7112137033807390(Local_251.f_2, 0))
				{
					unk_0xC2BB1787159395F9(Local_238.f_3, Local_251.f_2, -1, -957453492);
					iLocal_415 = 7;
				}
			}
			break;
		
		case 7:
			func_139("FINAL_SCENE_FLEE", &iLocal_263, 1000);
			if (unk_0x7112137033807390(Local_251.f_2, 0) && !unk_0x7112137033807390(Local_238.f_3, 0))
			{
				vVar0 = { unk_0xE2BBD32891C18569(Local_251.f_2, false) };
				unk_0x2F89329397A277BC(&iLocal_234);
				unk_0x70AE6CE773639435(0, vVar0, 1000, 0, 0);
				unk_0x60EE6BD0F9B51FFC(0, 0);
				unk_0xB3E1967E66494060(0, 500);
				unk_0x1659AF2827EC9D40(0, -691.48f, -1113.31f, 13.53f, 1000f, -1, 0, 0);
				unk_0x301F42EEE3C40328(iLocal_234);
				unk_0xE1072FA2FECBAD96(Local_238.f_3, iLocal_234);
				unk_0x3A95A0A3221D4208(&iLocal_234);
				unk_0xD738221C247C8B71(Local_238.f_3, true);
				iLocal_272 = 1;
			}
			break;
	}
}

Vector3 func_340(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -691.48f, -1113.31f, 13.53f;
		
		case 1:
			return -691.48f, -1113.31f, 13.53f;
		
		default:
	}
	return -691.48f, -1113.31f, 13.53f;
}

void func_341(var uParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
	{
		if (!unk_0x7112137033807390(uParam0->f_3, 0))
		{
			vVar0 = { unk_0x3201284584C7CD83(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			vVar1 = { unk_0x3201284584C7CD83(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (unk_0x499324B3EF19C288(vVar0, vParam1, false) < unk_0x499324B3EF19C288(vVar1, vParam1, false) && unk_0x5860446BFB759B77(uParam0->f_3, uParam0->f_4, 1, 0, false))
			{
				unk_0xFBA5AC89E66201B2(0, uParam0->f_4, 131584);
			}
			else if (unk_0x499324B3EF19C288(vVar0, vParam1, false) >= unk_0x499324B3EF19C288(vVar1, vParam1, false) && unk_0x5860446BFB759B77(uParam0->f_3, uParam0->f_4, 2, 0, false))
			{
				unk_0xFBA5AC89E66201B2(0, uParam0->f_4, 262656);
			}
			else
			{
				unk_0xFBA5AC89E66201B2(0, uParam0->f_4, 512);
			}
		}
	}
}

int func_342(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_350(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_343(sParam2, iParam3, 0);
}

int func_343(char* sParam0, int iParam1, bool bParam2)
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
					func_148();
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
		if (func_349(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_348();
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
				func_347();
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
				if (func_346())
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
			if (func_30())
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
			func_345();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_344();
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
		func_148();
	}
	return 0;
}

void func_344()
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

void func_345()
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

int func_346()
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

void func_347()
{
	if (func_80(14))
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
		Global_14513 = func_99();
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

void func_348()
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

bool func_349(int iParam0, int iParam1)
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

void func_350(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_351(int iParam0, char* sParam1, int iParam2)
{
	vector3 vVar0;
	
	func_147();
	func_452(2);
	vVar0 = { func_358() };
	if ((!unk_0x429D45A6C6520026(&vVar0) && func_207()) && !unk_0x3CAC2741CC1A631F(&vVar0, "NULL"))
	{
	}
	else
	{
		unk_0x4F93066CECE72793();
		unk_0x135C61E339DABBAC(1);
		StringCopy(&vVar0, iParam0->f_143, 24);
		if (!unk_0x7112137033807390(iParam0->f_3, 0))
		{
			if (!func_219(iParam0))
			{
				if (unk_0x411C28019DEA5CEF(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0xED3CB2E0519060F1(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
				}
				else if (unk_0x411C28019DEA5CEF(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0xED3CB2E0519060F1(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
				}
				else if (unk_0x411C28019DEA5CEF(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0xED3CB2E0519060F1(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
				}
			}
		}
		iParam0->f_109 = 1;
		iParam0->f_121 = sParam1;
		iParam0->f_415 = iParam2;
		func_311(iParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&vVar0, "_aband2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				func_356(iParam0, &vVar0);
			}
			else if (!unk_0x4915F4759304D5CF(iParam0->f_3))
			{
				func_270(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (iParam0->f_115)
			{
				StringConCat(&vVar0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_aggro", 24);
			}
			func_356(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam0->f_415 == 15)
		{
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&vVar0, "_lost1", 24);
			func_356(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&vVar0, "_spotd1", 24);
			func_356(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&vVar0, "_wntd1", 24);
			func_356(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&vVar0, "_spook", 24);
			func_356(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_219(iParam0))
			{
				if (unk_0x097275D546C9735F(iParam0->f_4))
				{
					func_353(iParam0, 4096, 0);
				}
				else
				{
					func_353(iParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&vVar0, "_hit2", 24);
			func_356(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&vVar0, "_jak", 24);
			func_356(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&vVar0, "_shot2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_shot1", 24);
				}
				func_356(iParam0, &vVar0);
			}
			else if (!unk_0x4915F4759304D5CF(iParam0->f_3))
			{
				func_270(iParam0->f_3, "CALL_COPS_COMMIT", iParam0->f_145, 4);
			}
			unk_0xF10B3BC4F73177E5(unk_0xD4E735F4B6A956AC(), 1, 0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_356(iParam0, &vVar0);
			unk_0xF10B3BC4F73177E5(unk_0xD4E735F4B6A956AC(), 1, 0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_356(iParam0, &vVar0);
			unk_0xF10B3BC4F73177E5(unk_0xD4E735F4B6A956AC(), 1, 0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_53(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_356(iParam0, &vVar0);
			}
			else if (!unk_0x4915F4759304D5CF(iParam0->f_3))
			{
				func_270(iParam0->f_3, "GENERIC_INSULT_MED", iParam0->f_145, 4);
			}
			func_353(iParam0, 0, 0);
			func_356(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_53(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_356(iParam0, &vVar0);
			}
			else if (!unk_0x4915F4759304D5CF(iParam0->f_3))
			{
				func_270(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			func_356(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_53(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_356(iParam0, &vVar0);
			}
			else if (!unk_0x4915F4759304D5CF(iParam0->f_3))
			{
				func_270(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&vVar0, "OJTX_QUIT_", 24);
			func_352(&vVar0);
			func_342(&(iParam0->f_244), "OJTXAUD", &vVar0, 7, 0, 0, 0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (iParam0->f_115)
			{
				StringConCat(&vVar0, "_aband2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_fail1", 24);
			}
			func_356(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&vVar0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				if (iParam0->f_410 > 5)
				{
					func_356(iParam0, &vVar0);
				}
			}
			else if (!unk_0x4915F4759304D5CF(iParam0->f_3))
			{
				func_270(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_53(3, 0);
		}
		func_311(iParam0, 3, 0f, 1);
	}
}

void func_352(char* sParam0)
{
	switch (func_3(unk_0xA19140A5C42D8715()))
	{
		case 0:
			StringConCat(sParam0, "M", 24);
			break;
		
		case 2:
			StringConCat(sParam0, "T", 24);
			break;
		
		case 1:
			StringConCat(sParam0, "F", 24);
			break;
		
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

void func_353(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x7112137033807390(uParam0->f_3, 0))
	{
		unk_0x1F4E5EFBFE503FB3(uParam0->f_3, false);
		unk_0xDCB46BFC2265476A(uParam0->f_3);
		unk_0xC2C4AE9DB4A0BEF3(uParam0->f_3, 3, false);
		unk_0x3B7A32E04BBE59A5(uParam0->f_3, 17, true);
		unk_0x9568B1B58F78FF36(uParam0->f_3);
		if ((func_51(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_355(uParam0->f_29)) && !bParam2)
		{
			func_354(uParam0);
		}
		else
		{
			unk_0xC2C4AE9DB4A0BEF3(uParam0->f_3, 1024, true);
			unk_0xC2C4AE9DB4A0BEF3(uParam0->f_3, 131072, true);
			unk_0x2F89329397A277BC(&iVar0);
			unk_0xCB482EF95FAE4D73(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0x1CBE3F8ED90509B2(0, 1193033728, 0);
			}
			else
			{
				unk_0x33B5487515BD13D5(0, unk_0xA19140A5C42D8715(), 1000f, -1, 0, 0);
			}
			unk_0x00135C6A6DDEC2EA(0, 0);
			unk_0x301F42EEE3C40328(iVar0);
			unk_0xE1072FA2FECBAD96(uParam0->f_3, iVar0);
			unk_0x3A95A0A3221D4208(&iVar0);
		}
		unk_0xD738221C247C8B71(uParam0->f_3, true);
	}
}

void func_354(var uParam0)
{
	int iVar0;
	
	if (!unk_0x7112137033807390(uParam0->f_3, 0))
	{
		if (func_38(func_39(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0x92DDCF53AA47A63D(uParam0->f_3, 84.9058f);
				unk_0xD738221C247C8B71(uParam0->f_3, true);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x92DDCF53AA47A63D(uParam0->f_3, 68.3138f);
				unk_0xD738221C247C8B71(uParam0->f_3, true);
			}
			else
			{
				unk_0x1CBE3F8ED90509B2(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0x9568B1B58F78FF36(uParam0->f_3);
			unk_0x3A95A0A3221D4208(&iVar0);
			unk_0x2F89329397A277BC(&iVar0);
			unk_0xCB482EF95FAE4D73(0, 0, 0);
			unk_0x00135C6A6DDEC2EA(0, 0);
			unk_0x956B3CF461C0C1C9(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0x0EEB301CAA50A123(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0xAE78871D9D6411E7(0, 1);
				unk_0x956B3CF461C0C1C9(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0x47D73A216DD513C8(0, 151.7794f, 0);
				unk_0x0EEB301CAA50A123(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xB62205D12F35BF49(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0xB62205D12F35BF49(0, uParam0->f_29, 15f, 20000);
				unk_0x1CBE3F8ED90509B2(0, 1193033728, 0);
			}
			else
			{
				unk_0x3F01127ECD227890(0, "oddjobs@taxi@", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x3F01127ECD227890(0, "gestures@m@standing@casual", "gesture_pleased", 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0xCFA037D3F2BAF3E3(uParam0->f_29, 15f, 1))
			{
				unk_0xB62205D12F35BF49(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0x1CBE3F8ED90509B2(0, 1193033728, 0);
			}
			unk_0x301F42EEE3C40328(iVar0);
			unk_0xE1072FA2FECBAD96(uParam0->f_3, iVar0);
			unk_0x3A95A0A3221D4208(&iVar0);
		}
		unk_0xD738221C247C8B71(uParam0->f_3, true);
	}
}

int func_355(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_356(var uParam0, char* sParam1)
{
	if (func_357(uParam0))
	{
		func_342(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_357(var uParam0)
{
	if (!unk_0x7112137033807390(uParam0->f_3, 0))
	{
		if (func_49(unk_0xA19140A5C42D8715(), uParam0->f_3, 1) < 40f && !unk_0xCDDABFAF231CF3DD(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_358()
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

int func_359(var uParam0)
{
	return uParam0->f_118;
}

void func_360()
{
	func_390(&Local_238);
	if (func_389(&Local_238, &Local_352))
	{
		switch (Local_352.f_27)
		{
			case 0:
				if (Local_238.f_410 == 17)
				{
					if (!func_388(&Local_238))
					{
						if (func_387("TAXI_OBJ_FTC1") || unk_0xCE3CB618AFE55EFB(Local_238.f_9))
						{
							Local_352.f_27++;
						}
						else if (func_194(&Local_238) != 10)
						{
							func_250(&Local_238, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_194(&Local_238) > 10 && func_194(&Local_238) != 15) && !func_388(&Local_238))
				{
					func_250(&Local_238, 15, 1, 0, 0);
					func_200(&Local_238, 7);
				}
				break;
			}
	}
	func_361(&Local_238, &uLocal_355, &Local_352, bLocal_351);
}

int func_361(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_369(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_185(uParam0, 2))
	{
		if (func_368(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0xFD34717937104F1C() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_367(uParam0))
				{
					uParam2->f_7 = { func_366(uParam1) };
					func_342(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_207())
				{
					uParam2->f_13 = { func_253() };
					if (unk_0x3CAC2741CC1A631F(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_66(&(uParam2->f_26), round(pow(2f, to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_364(uParam1);
					func_311(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_223(uParam0))
				{
					if (func_207())
					{
						func_311(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_363() };
						if (unk_0x91347D2A80F38492(unk_0xA6580F898F4E801C()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_207())
				{
					uParam2->f_19 = { func_358() };
				}
				else
				{
					func_66(&(uParam2->f_26), round(pow(2f, to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_364(uParam1);
					func_311(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_185(uParam0, 14) && !func_207()) && !func_223(uParam0)) && func_112(uParam0, 18) > 1f)
				{
					func_311(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_207())
				{
					if (func_112(uParam0, 18) > 1f)
					{
						if (!unk_0x429D45A6C6520026(&(uParam2->f_1)))
						{
							func_362(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_207())
				{
					func_66(&(uParam2->f_26), round(pow(2f, to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_364(uParam1);
					func_311(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_362(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_350(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_343(sParam2, iParam4, 0);
}

struct<6> func_363()
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

void func_364(var uParam0)
{
	int iVar0;
	
	iVar0 = func_365(uParam0);
	if (iVar0 > -1)
	{
		func_19(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_19(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_65(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_144(), 24);
	}
}

int func_365(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_21((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_366(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_21((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_65(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_367(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_225("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_225("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_225("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_225("TX_OBJ_GYB_DO", 0, 0) || func_225("TAXI_OBJ_GYB", 0, 0)) || func_225("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_225("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_225("TX_OBJ_CYI_DO", 0, 0) || func_225("TAXI_OBJ_CYI_01", 0, 0)) || func_225("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_225("TX_OBJ_GYN_DO", 0, 0) || func_225("TAXI_OBJ_GYN", 0, 0)) || func_225("TAXI_OBJ_GYN_TG", 0, 0)) || func_225("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_225("TAXI_OBJ_CC1", 0, 0) || func_225("TAXI_OBJ_CC2", 0, 0)) || func_225("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_225("TAXI_OBJ_FTC1", 0, 0) || func_225("TAXI_OBJ_FTC2", 0, 0)) || func_225("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_225("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_225("TAXI_OBJ_GETRUN", 0, 0) || func_225("TAXI_OBJ_DRIVE", 0, 0)) || func_225("TAXI_OBJ_RETURN", 0, 0)) || func_225("TAXI_OBJ_POL", 0, 0)) || func_225("TAXI_OBJ_RUNOUT", 0, 0)) || func_225("TAXI_OBJ_POL", 0, 0));
}

int func_368(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_21((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_369(var uParam0, var uParam1)
{
	vector3 vVar0;
	char cVar1[48];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[8];
	bool bVar6;
	
	if (func_367(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_185(uParam0, 14))
	{
		StringCopy(&vVar0, uParam0->f_143, 24);
		switch (func_194(uParam0))
		{
			case 55:
				StringConCat(&vVar0, "_lvMe1", 24);
				cVar1 = { vVar0 };
				func_386(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				func_385(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_311(uParam0, 16, 0, 0);
				func_384(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_207())
				{
					if (uParam0->f_115)
					{
						StringConCat(&vVar0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_retrn1", 24);
					}
					if (uParam0->f_411 != 9)
					{
						func_383(uParam0, &vVar0, 0, 0, 8);
					}
				}
				else
				{
					func_380(uParam0, vVar0, func_382(uParam0, 2));
				}
				if (func_21(uParam0->f_98, 4))
				{
					func_311(uParam0, 16, 0, 0);
					func_275(uParam0, 0, 0);
				}
				func_234(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_112(uParam0, 16) > 1f)
				{
					func_235(1);
					if (uParam0->f_411 == 9)
					{
						func_274("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_274("TAXI_VIP_RETURN", 7500, 1);
					}
					func_311(uParam0, 16, 0, 0);
					func_275(uParam0, 0, 0);
				}
				break;
			
			case 65:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aggro", 24);
				}
				uParam0->f_107++;
				if (uParam0->f_411 != 9)
				{
					func_383(uParam0, &vVar0, 0, 1, 8);
				}
				else if (!unk_0x4915F4759304D5CF(uParam0->f_3))
				{
					func_270(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_112(uParam0, 16) > func_127(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_207()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&vVar0, uParam0->f_143, 24);
		switch (func_194(uParam0))
		{
			case 142:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_383(uParam0, &vVar0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&vVar0, "_lvMe2", 24);
				cVar1 = { vVar0 };
				func_386(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				func_385(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_311(uParam0, 16, 0, 0);
				func_384(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_342(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_250(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_311(uParam0, 16, 0, 0);
				func_250(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&vVar0, "_hail1", 24);
				cVar1 = { vVar0 };
				if (!func_21(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_386(&(uParam0->f_99), 4, &cVar1, 0, 1, 0);
						func_385(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
					}
					else
					{
						func_383(uParam0, &vVar0, 0, 0, 8);
					}
				}
				func_311(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_274("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_274("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&vVar0, "_obj1", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xCE3CB618AFE55EFB(uParam0->f_9))
					{
						uParam0->f_9 = func_126(uParam0->f_17, 1);
					}
					else if (unk_0x1C05D741948BDE08(uParam0->f_9) == 0)
					{
						unk_0xE8C2974337833D20(uParam0->f_9, 255);
						unk_0x382EC7CC6BB2D812(uParam0->f_9, uParam0->f_17);
						unk_0x3E46F0AAE4B470FB(uParam0->f_9, true);
					}
				}
				func_250(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 9:
				if ((uParam0->f_101 == 1 || uParam0->f_411 == 2) || uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_gret1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&vVar0, "_gret1", 24);
							break;
						
						case 0:
							StringConCat(&vVar0, "_gret2", 24);
							break;
						
						case 2:
							StringConCat(&vVar0, "_gret3", 24);
							break;
						
						default:
							StringConCat(&vVar0, "_gret4", 24);
							break;
						}
				}
				func_252(&vVar0);
				if (uParam0->f_411 != 9)
				{
					func_383(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					func_270(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xCE3CB618AFE55EFB(uParam0->f_9))
					{
						uParam0->f_9 = func_126(uParam0->f_17, 1);
					}
					else if (unk_0x1C05D741948BDE08(uParam0->f_9) == 0)
					{
						unk_0xE8C2974337833D20(uParam0->f_9, 255);
						unk_0x382EC7CC6BB2D812(uParam0->f_9, uParam0->f_17);
						unk_0x3E46F0AAE4B470FB(uParam0->f_9, true);
					}
				}
				func_250(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&vVar0, "_dest2", 24);
				func_379(uParam0, 33554432, vVar0, "", 1, 8);
				func_311(uParam0, 16, 0, 0);
				func_250(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_207())
				{
					func_378(uParam0, 0);
					func_65(&(uParam0->f_44), 4);
					func_311(uParam0, 16, 0, 0);
					func_250(uParam0, 13, 0, 0, 0);
				}
				break;
			
			case 14:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&vVar0, "_bant2", 24);
						break;
					
					case 1:
						StringConCat(&vVar0, "_bant1", 24);
						break;
					
					case 2:
						StringConCat(&vVar0, "_bant3", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_bant1", 24);
						break;
				}
				func_252(&vVar0);
				func_376(vVar0, uParam1);
				func_311(uParam0, 16, 0, 0);
				func_311(uParam0, 11, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_112(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&vVar0, "_ban1", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant1", 24);
						func_252(&vVar0);
					}
					func_376(vVar0, uParam1);
					func_65(&(uParam0->f_81), 67108864);
					func_311(uParam0, 16, 0, 0);
					func_311(uParam0, 11, 0, 0);
					func_275(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_112(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&vVar0, "_ban2", 24);
					}
					else if (uParam0->f_411 == 1)
					{
						StringConCat(&vVar0, "_banter", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant2", 24);
						if (uParam0->f_411 != 6)
						{
							func_252(&vVar0);
						}
					}
					func_376(vVar0, uParam1);
					func_311(uParam0, 11, 0, 0);
					func_311(uParam0, 16, 0, 0);
					func_275(uParam0, 0, 0);
				}
				break;
			
			case 17:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_ban3", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant3", 24);
					func_252(&vVar0);
				}
				func_376(vVar0, uParam1);
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 18:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant4", 24);
				}
				func_252(&vVar0);
				func_376(vVar0, uParam1);
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 19:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant5", 24);
				}
				func_252(&vVar0);
				func_376(vVar0, uParam1);
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&vVar0, "_dest2b", 24);
				func_252(&vVar0);
				func_376(vVar0, uParam1);
				func_311(uParam0, 16, 0, 0);
				func_311(uParam0, 11, 0, 0);
				func_275(uParam0, 0, 0);
				func_65(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&vVar0, "_seePt1", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				func_250(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&vVar0, "_talk", 24);
				StringIntConCat(&vVar0, 1, 24);
				func_252(&vVar0);
				func_383(uParam0, &vVar0, 1, 0, 8);
				break;
			
			case 89:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&vVar0, "_deal1", 24);
						break;
					
					case 1:
						StringConCat(&vVar0, "_deal1", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_deal1", 24);
						break;
				}
				func_383(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&vVar0, "_ig1c", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 27:
				StringConCat(&vVar0, "_bTime", 24);
				if (uParam0->f_411 == 2)
				{
					iVar3 = 8;
				}
				else
				{
					iVar3 = 3;
				}
				iVar2 = 0;
				while (iVar2 < iVar3)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 5:
								case 6:
								case 7:
									iVar5[iVar2] = 0;
									break;
								
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_411 == 2)
				{
					func_375(&(uParam0->f_90), 8, &vVar0, &iVar5, 1, 0);
				}
				else
				{
					func_375(&(uParam0->f_90), 3, &vVar0, &iVar5, 1, 0);
				}
				func_376(vVar0, uParam1);
				func_384(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_311(uParam0, 16, 0, 0);
				func_311(uParam0, 6, 0f, 1);
				func_275(uParam0, 0, 0);
				break;
			
			case 26:
				StringConCat(&vVar0, "_gTime", 24);
				iVar2 = 0;
				while (iVar2 < 8)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 4:
								case 5:
								case 7:
									iVar5[iVar2] = 0;
									break;
								
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_411 == 2)
				{
					func_375(&(uParam0->f_89), 8, &vVar0, &iVar5, 1, 0);
				}
				else
				{
					func_375(&(uParam0->f_89), 3, &vVar0, &iVar5, 1, 0);
				}
				func_376(vVar0, uParam1);
				func_384(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 1);
				func_311(uParam0, 16, 0, 0);
				func_311(uParam0, 6, 0f, 1);
				func_275(uParam0, 0, 0);
				break;
			
			case 12:
				func_274("TAXI_OBJ_GYB", 3500, 1);
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_274("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_274("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_274("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 28:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&vVar0, "_dest1A", 24);
						break;
					
					case 1:
						StringConCat(&vVar0, "_dest1B", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_dest1A", 24);
						break;
				}
				func_383(uParam0, &vVar0, 0, 0, 8);
				func_250(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_21(uParam0->f_98, 268435456))
				{
					func_274("TAXI_OBJ_CYI_01", 7500, 1);
					func_65(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&vVar0, "_rCar1", 24);
				func_252(&vVar0);
				func_376(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&vVar0, "_rCar2", 24);
				func_252(&vVar0);
				func_376(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&vVar0, "_rCar3", 24);
				func_252(&vVar0);
				func_376(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 33:
				func_274("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_21(uParam0->f_82, 8192))
				{
					if (func_112(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&vVar0, "_airBr1", 24);
						func_252(&vVar0);
						if (uParam0->f_411 == 5)
						{
							func_376(vVar0, uParam1);
						}
						else
						{
							func_383(uParam0, &vVar0, 0, 0, 8);
						}
						func_65(&(uParam0->f_82), 8192);
						func_311(uParam0, 16, 0, 0);
						func_311(uParam0, 11, 0, 0);
						func_275(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_21(uParam0->f_82, 16384))
				{
					StringConCat(&vVar0, "_seeD1", 24);
					func_252(&vVar0);
					func_383(uParam0, &vVar0, 0, 0, 8);
					func_65(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_21(uParam0->f_82, 32768))
				{
					StringConCat(&vVar0, "_seeD2", 24);
					func_252(&vVar0);
					func_383(uParam0, &vVar0, 0, 0, 8);
					func_65(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&vVar0, "_done1", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				func_250(uParam0, 46, 1, 0, 0);
				break;
			
			case 138:
				if (uParam0->f_101 == 1)
				{
					StringConCat(&vVar0, "_ftc1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&vVar0, "_ftc1", 24);
							break;
						
						case 0:
							StringConCat(&vVar0, "_ftc2", 24);
							break;
						
						case 2:
							StringConCat(&vVar0, "_ftc3", 24);
							break;
						
						default:
							StringConCat(&vVar0, "_ftc3", 24);
							break;
						}
				}
				func_252(&vVar0);
				func_383(uParam0, &vVar0, 0, 0, 8);
				func_250(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_275(uParam0, 0, 0);
				break;
			
			case 139:
				func_274("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_250(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&vVar0, "_dOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = unk_0x22C775856F4633CA(0, 120);
				if (!func_21(uParam0->f_82, 268435456))
				{
					if (iVar4 > 80)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else if (iVar4 > 40)
					{
						StringConCat(&cVar1, "_2", 24);
					}
					else
					{
						StringConCat(&cVar1, "_3", 24);
					}
					func_65(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 > 80)
				{
					StringConCat(&cVar1, "_4", 24);
				}
				else if (iVar4 > 40)
				{
					StringConCat(&cVar1, "_5", 24);
				}
				else
				{
					StringConCat(&cVar1, "_6", 24);
				}
				func_385(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&vVar0, "_bdOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = unk_0x22C775856F4633CA(0, 100);
				if (!func_21(uParam0->f_82, 268435456))
				{
					if (iVar4 < 50)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else
					{
						StringConCat(&cVar1, "_2", 24);
					}
					func_65(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 < 50)
				{
					StringConCat(&cVar1, "_3", 24);
				}
				else
				{
					StringConCat(&cVar1, "_4", 24);
				}
				func_385(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&vVar0, "_dr2P", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&vVar0, "_dr2N", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&vVar0, "_dOff2", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				func_250(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_274("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_275(uParam0, 0, 0);
				func_250(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&vVar0, "_dOff3", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				func_250(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_207())
				{
					func_274("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_275(uParam0, 0, 0);
					func_250(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_274("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_275(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_21(uParam0->f_81, 1))
				{
					func_374(uParam0, 1, vVar0, "_sick1", 8);
					func_19(&(uParam0->f_81), 2);
				}
				else if (!func_21(uParam0->f_81, 2))
				{
					func_374(uParam0, 2, vVar0, "_sick2", 8);
					func_19(&(uParam0->f_81), 1);
				}
				func_384(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_21(uParam0->f_82, 2097152))
				{
					StringConCat(&vVar0, "_nopke1", 24);
				}
				else if (!func_21(uParam0->f_82, 4194304))
				{
					StringConCat(&vVar0, "_nopke2", 24);
				}
				func_65(&(uParam0->f_81), 2097152);
				func_383(uParam0, &vVar0, 0, 0, 8);
				func_311(uParam0, 16, 0, 0);
				func_384(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 1);
				func_275(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&vVar0, "_Puke1", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				func_384(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				break;
			
			case 63:
				StringConCat(&vVar0, "_PkStp2", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				func_384(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&vVar0, "_PkStp1", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				func_384(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				break;
			
			case 64:
				StringConCat(&vVar0, "_PukeR1", 24);
				func_252(&vVar0);
				func_383(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_21(uParam0->f_81, 4))
				{
					func_374(uParam0, 4, vVar0, "_turns1", 8);
				}
				else if (!func_21(uParam0->f_81, 8))
				{
					func_374(uParam0, 8, vVar0, "_turns2", 8);
				}
				else
				{
					func_374(uParam0, 8, vVar0, "_turns3", 8);
					func_19(&(uParam0->f_81), 4);
					func_19(&(uParam0->f_81), 8);
				}
				func_384(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_373(uParam0))
				{
					func_380(uParam0, vVar0, func_382(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x4915F4759304D5CF(uParam0->f_3))
					{
						func_270(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_carHt", 24);
					cVar1 = { vVar0 };
					func_386(&(uParam0->f_95), 5, &cVar1, 1, 0, 1);
					func_342(&(uParam0->f_244), uParam0->f_144, &cVar1, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&vVar0, "_carHt1", 24);
					cVar1 = { vVar0 };
					if (uParam0->f_411 == 0)
					{
						func_386(&(uParam0->f_95), 8, &cVar1, 1, 1, 0);
					}
					else
					{
						func_386(&(uParam0->f_95), 5, &cVar1, 1, 1, 0);
					}
					func_385(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				}
				func_384(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&vVar0, "_genPnHi", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_21(uParam0->f_83, 128))
				{
					StringConCat(&vVar0, "_nMiss1", 24);
					func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_65(&(uParam0->f_83), 128);
					func_19(&(uParam0->f_83), 256);
					func_311(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 256))
				{
					StringConCat(&vVar0, "_nMiss2", 24);
					func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_65(&(uParam0->f_83), 256);
					func_19(&(uParam0->f_83), 512);
					func_311(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 512))
				{
					StringConCat(&vVar0, "_nMiss3", 24);
					func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_65(&(uParam0->f_83), 512);
					func_19(&(uParam0->f_83), 128);
					func_311(uParam0, 16, 0, 0);
				}
				func_275(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_21(uParam0->f_83, 1))
				{
					StringConCat(&vVar0, "_air1", 24);
					if (bVar6)
					{
						func_252(&vVar0);
					}
					func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_65(&(uParam0->f_83), 1);
					func_19(&(uParam0->f_83), 2);
					func_311(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 2))
				{
					StringConCat(&vVar0, "_air2", 24);
					if (bVar6)
					{
						func_252(&vVar0);
					}
					func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_65(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_19(&(uParam0->f_83), 4);
					}
					else
					{
						func_19(&(uParam0->f_83), 1);
					}
					func_311(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 4))
				{
					StringConCat(&vVar0, "_air3", 24);
					if (bVar6)
					{
						func_252(&vVar0);
					}
					func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_65(&(uParam0->f_83), 4);
					func_19(&(uParam0->f_83), 1);
					func_311(uParam0, 16, 0, 0);
				}
				func_384(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 79:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_21(uParam0->f_81, 4096))
				{
					func_379(uParam0, 4096, vVar0, "_sideW1", bVar6, 8);
				}
				else if (!func_21(uParam0->f_81, 8192))
				{
					func_379(uParam0, 8192, vVar0, "_sideW2", bVar6, 8);
				}
				func_384(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_21(uParam0->f_81, 16384))
				{
					func_379(uParam0, 16384, vVar0, "_opLne1", bVar6, 8);
				}
				else if (!func_21(uParam0->f_81, 32768))
				{
					func_379(uParam0, 32768, vVar0, "_opLne2", bVar6, 8);
				}
				func_384(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_21(uParam0->f_82, 8))
					{
						func_372(uParam0, 8, vVar0, "_bored1", 8, 0);
					}
					else if (!func_21(uParam0->f_82, 16))
					{
						func_372(uParam0, 16, vVar0, "_bored2", 8, 0);
					}
					else if (!func_21(uParam0->f_82, 32))
					{
						func_372(uParam0, 32, vVar0, "_bored3", 8, 0);
					}
					func_384(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
					func_275(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_good1", 24);
					cVar1 = { vVar0 };
					func_386(&(uParam0->f_93), 6, &cVar1, 0, 1, 0);
					func_385(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
					func_384(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
					func_311(uParam0, 16, 0, 0);
					func_275(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&vVar0, "_EtoB1", 24);
				cVar1 = { vVar0 };
				func_386(&(uParam0->f_96), 2, &cVar1, 0, 1, 0);
				func_385(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_384(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&vVar0, "_BtoE1", 24);
				cVar1 = { vVar0 };
				func_386(&(uParam0->f_97), 2, &cVar1, 0, 1, 0);
				func_385(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_384(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_21(uParam0->f_81, 65536))
				{
					func_379(uParam0, 65536, vVar0, "_runLit1", 1, 8);
				}
				else if (!func_21(uParam0->f_81, 131072))
				{
					func_379(uParam0, 131072, vVar0, "_runLit2", 1, 8);
				}
				func_275(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_373(uParam0))
				{
					func_380(uParam0, vVar0, func_382(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x4915F4759304D5CF(uParam0->f_3))
					{
						func_270(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_21(uParam0->f_83, 8))
				{
					StringConCat(&vVar0, "_hitR1", 24);
					func_252(&vVar0);
					func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_65(&(uParam0->f_83), 8);
					func_19(&(uParam0->f_83), 16);
					func_311(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 16))
				{
					StringConCat(&vVar0, "_hitR2", 24);
					func_252(&vVar0);
					func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_65(&(uParam0->f_83), 16);
					func_19(&(uParam0->f_83), 32);
					func_311(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 32))
				{
					StringConCat(&vVar0, "_hitR3", 24);
					func_252(&vVar0);
					func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_65(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_19(&(uParam0->f_83), 64);
					}
					else
					{
						func_19(&(uParam0->f_83), 8);
					}
					func_311(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 64))
				{
					StringConCat(&vVar0, "_hitR4", 24);
					func_252(&vVar0);
					func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_65(&(uParam0->f_83), 64);
					func_19(&(uParam0->f_83), 8);
					func_311(uParam0, 16, 0, 0);
				}
				func_384(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_207())
				{
					if (uParam0->f_115)
					{
						StringConCat(&vVar0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_aggro", 24);
					}
					func_383(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_380(uParam0, vVar0, func_382(uParam0, 65));
					func_275(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_207())
				{
					if (uParam0->f_411 == 4)
					{
						StringCopy(&vVar0, "tm6_shoot", 24);
					}
					else if (uParam0->f_115)
					{
						StringConCat(&vVar0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&vVar0, "_shoot", 24);
					}
					func_383(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_380(uParam0, vVar0, func_382(uParam0, 66));
					func_275(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_207())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&vVar0, "_warnC1", 24);
								func_383(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&vVar0, "_warnF1", 24);
								func_383(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&vVar0, "_far1", 24);
								func_383(uParam0, &vVar0, 0, 0, 8);
								func_384(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
								break;
							
							case 2:
								StringConCat(&vVar0, "_close1", 24);
								func_383(uParam0, &vVar0, 0, 0, 8);
								func_384(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
								break;
							
							case 10:
								StringConCat(&vVar0, "_hit1", 24);
								func_383(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&vVar0, "_good1", 24);
								cVar1 = { vVar0 };
								func_386(&(uParam0->f_93), 6, &cVar1, 1, 1, 0);
								func_385(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
								func_384(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
								func_311(uParam0, 16, 0, 0);
								func_275(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_58)
								{
									StringConCat(&vVar0, "_sBant1", 24);
									cVar1 = { vVar0 };
									func_383(uParam0, &vVar0, 0, 0, 8);
									func_311(uParam0, 16, 0, 0);
									func_311(uParam0, 11, 0, 0);
									func_275(uParam0, 0, 0);
									if (!iLocal_60)
									{
										iLocal_58 = 1;
									}
								}
								else
								{
									if (!iLocal_59)
									{
										StringConCat(&vVar0, "_bant3", 24);
										iLocal_59 = 1;
									}
									else
									{
										StringConCat(&vVar0, "_bant2", 24);
										iLocal_60 = 1;
									}
									func_252(&vVar0);
									func_383(uParam0, &vVar0, 0, 0, 8);
									func_311(uParam0, 16, 0, 0);
									func_311(uParam0, 11, 0, 0);
									func_275(uParam0, 0, 0);
									iLocal_58 = 0;
								}
								break;
							
							case 7:
								StringConCat(&vVar0, "_done1", 24);
								func_383(uParam0, &vVar0, 0, 0, 8);
								break;
						}
						func_250(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&vVar0, "_speed1", 24);
				cVar1 = { vVar0 };
				func_386(&(uParam0->f_87), 6, &cVar1, 1, 1, 0);
				func_385(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_384(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_21(uParam0->f_82, 1))
				{
					func_372(uParam0, 1, vVar0, "_close1", 8, 0);
				}
				else if (!func_21(uParam0->f_82, 2))
				{
					func_372(uParam0, 2, vVar0, "_close2", 8, 0);
				}
				else if (!func_21(uParam0->f_82, 4))
				{
					func_372(uParam0, 4, vVar0, "_close3", 8, 0);
				}
				func_275(uParam0, 0, 0);
				break;
			
			case 48:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_stop2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_stop1", 24);
				}
				cVar1 = { vVar0 };
				func_386(&(uParam0->f_86), 4, &cVar1, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_385(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				}
				else if (!unk_0x4915F4759304D5CF(uParam0->f_3))
				{
					func_270(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_311(uParam0, 16, 0, 0);
				func_384(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_373(uParam0))
				{
					func_380(uParam0, vVar0, func_382(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x4915F4759304D5CF(uParam0->f_3))
					{
						func_270(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&vVar0, "_roll1", 24);
					func_371(uParam0, vVar0, 8);
				}
				func_384(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_21(uParam0->f_83, 1024))
				{
					func_65(&(uParam0->f_83), 1024);
					func_311(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv1", 24);
					func_252(&vVar0);
					func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 2048))
				{
					func_65(&(uParam0->f_83), 2048);
					func_311(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv2", 24);
					func_252(&vVar0);
					func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 4096))
				{
					func_65(&(uParam0->f_83), 4096);
					func_311(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv3", 24);
					func_252(&vVar0);
					func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				func_275(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_21(uParam0->f_82, 1024))
				{
					func_372(uParam0, 1024, vVar0, "_rvrs1", 8, 1);
					func_19(&(uParam0->f_82), 2048);
				}
				else if (!func_21(uParam0->f_82, 2048))
				{
					func_372(uParam0, 2048, vVar0, "_rvrs2", 8, 1);
				}
				func_275(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&vVar0, "_ofrd1", 24);
				cVar1 = { vVar0 };
				func_386(&(uParam0->f_88), 4, &cVar1, 0, 1, 0);
				func_385(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_384(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&vVar0, "_ofrdch1", 24);
				func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&vVar0, "_losPol1", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				func_250(uParam0, 52, 1, 0, 0);
				break;
			
			case 50:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_lsPo1", 24);
				}
				if (uParam0->f_411 != 9)
				{
					func_383(uParam0, &vVar0, 0, 0, 8);
				}
				else if (!unk_0x4915F4759304D5CF(uParam0->f_3))
				{
					func_270(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_373(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&vVar0, "_copBa1", 24);
						cVar1 = { vVar0 };
						cVar1 = { vVar0 };
						func_383(uParam0, &vVar0, 0, 0, 8);
						func_250(uParam0, 52, 1, 0, 0);
						func_311(uParam0, 16, 0, 0);
					}
					else
					{
						if (uParam0->f_411 == 5 && uParam0->f_410 > 9)
						{
							StringConCat(&vVar0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&vVar0, "_copBa1", 24);
						}
						cVar1 = { vVar0 };
						func_383(uParam0, &vVar0, 0, 0, 8);
						func_311(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&vVar0, "_copBa1", 24);
					cVar1 = { vVar0 };
					func_386(&(uParam0->f_85), 6, &cVar1, 1, 1, 0);
					func_385(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
					func_311(uParam0, 16, 0, 0);
					func_275(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&vVar0, "_evdeP1", 24);
				func_384(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_383(uParam0, &vVar0, 0, 0, 8);
				func_311(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0x91347D2A80F38492(unk_0xA6580F898F4E801C()) >= 1)
				{
					func_274("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_275(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&vVar0, "_cpFz1", 24);
				func_252(&vVar0);
				func_383(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_21(uParam0->f_81, 262144))
				{
					func_379(uParam0, 262144, vVar0, "_rdCh1", 1, 8);
				}
				else if (!func_21(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_379(uParam0, 1048576, vVar0, "_rdCh2", 1, 8);
					}
					else
					{
						func_379(uParam0, 1048576, vVar0, "_rdCh2", 0, 8);
					}
				}
				func_384(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_21(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_370(uParam0, 67108864, vVar0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_21(uParam0->f_82, 134217728))
				{
					func_370(uParam0, 134217728, vVar0, "_rdFv1", 0, 7);
				}
				func_384(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&vVar0, "_rdneu1", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&vVar0, "_rdtip1", 24);
				cVar1 = { vVar0 };
				StringConCat(&cVar1, "_", 24);
				StringIntConCat(&cVar1, uParam0->f_418.f_3, 24);
				func_385(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 100:
				func_274("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_275(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_horn", 24);
					func_383(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&vVar0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_252(&vVar0);
				}
				func_65(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_383(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&vVar0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_252(&vVar0);
				}
				func_65(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_383(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 103:
				if (uParam0->f_411 == 4)
				{
					StringConCat(&vVar0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&vVar0, "_thank3", 24);
				}
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_252(&vVar0);
				}
				func_65(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_383(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_21(uParam0->f_82, 65536))
				{
					if (func_112(uParam0, 11) > uParam0->f_36)
					{
						switch (uParam0->f_102)
						{
							case 0:
								StringConCat(&vVar0, "_ccba2", 24);
								break;
							
							case 1:
								StringConCat(&vVar0, "_ccba1", 24);
								break;
							
							default:
								StringConCat(&vVar0, "_ccba1", 24);
								break;
						}
						func_252(&vVar0);
						func_376(vVar0, uParam1);
						func_65(&(uParam0->f_82), 65536);
						func_311(uParam0, 16, 0, 0);
						func_311(uParam0, 11, 0, 0);
						func_275(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_21(uParam0->f_82, 131072))
				{
					if (func_112(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&vVar0, "_ccbb1", 24);
						func_252(&vVar0);
						func_376(vVar0, uParam1);
						func_65(&(uParam0->f_82), 131072);
						func_311(uParam0, 16, 0, 0);
						func_311(uParam0, 11, 0, 0);
						func_275(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_21(uParam0->f_82, 8388608))
				{
					StringConCat(&vVar0, "_close1", 24);
					func_65(&(uParam0->f_82), 8388608);
				}
				else if (!func_21(uParam0->f_82, 16777216))
				{
					StringConCat(&vVar0, "_close2", 24);
					func_65(&(uParam0->f_82), 16777216);
				}
				else if (!func_21(uParam0->f_82, 33554432))
				{
					StringConCat(&vVar0, "_close3", 24);
					func_65(&(uParam0->f_82), 33554432);
				}
				func_376(vVar0, uParam1);
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&vVar0, "_kill1", 24);
					cVar1 = { vVar0 };
					func_386(&(uParam0->f_93), 6, &cVar1, 1, 1, 1);
					func_252(&vVar0);
					func_385(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&vVar0, "_cheat1", 24);
					func_383(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					StringConCat(&vVar0, "_kill1", 24);
					func_383(uParam0, &vVar0, 0, 0, 8);
				}
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&vVar0, "_wndw2", 24);
				func_376(vVar0, uParam1);
				func_311(uParam0, 16, 0, 0);
				func_311(uParam0, 11, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&vVar0, "_wndw0", 24);
				func_376(vVar0, uParam1);
				func_311(uParam0, 16, 0, 0);
				func_311(uParam0, 11, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&vVar0, "_wndw1", 24);
				func_376(vVar0, uParam1);
				func_311(uParam0, 16, 0, 0);
				func_311(uParam0, 11, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&vVar0, "_csite1", 24);
				func_252(&vVar0);
				func_383(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&vVar0, "_fair1", 24);
				func_252(&vVar0);
				func_383(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&vVar0, "_AlCk1", 24);
				cVar1 = { vVar0 };
				func_386(&(uParam0->f_91), 5, &cVar1, 1, 1, 0);
				func_385(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&vVar0, "_eggG1", 24);
				cVar1 = { vVar0 };
				func_386(&(uParam0->f_92), 5, &cVar1, 1, 1, 0);
				func_385(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&vVar0, "_goons1", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&vVar0, "_oRun1", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&vVar0, "_gotG1", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&vVar0, "_getA1", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&vVar0, "_gnawy1", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&vVar0, "_grl1", 24);
				func_252(&vVar0);
				func_383(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&vVar0, "_figt1", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&vVar0, "_gEgg1", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&vVar0, "_gEgg3", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&vVar0, "_gEgg2", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&vVar0, "_gLeav1", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&vVar0, "_aKill1", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&vVar0, "_gHelp1", 24);
				func_252(&vVar0);
				func_383(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&vVar0, "_gDest1", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				func_250(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&vVar0, "_gKO1", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&vVar0, "_gThank1", 24);
				func_65(&(uParam0->f_81), 2097152);
				func_383(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&vVar0, "_gDriv1", 24);
				func_252(&vVar0);
				func_376(vVar0, uParam1);
				func_65(&(uParam0->f_81), 67108864);
				func_311(uParam0, 16, 0, 0);
				func_311(uParam0, 11, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&vVar0, "_cash1", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_21(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_379(uParam0, 33554432, vVar0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x4915F4759304D5CF(uParam0->f_3))
					{
						func_270(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_250(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&vVar0, "_foot", 24);
				func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_21(uParam0->f_81, 268435456))
				{
					func_379(uParam0, 268435456, vVar0, "_kPay1", 1, 8);
				}
				func_250(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_274("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_275(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_21(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_379(uParam0, 4194304, vVar0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0x4915F4759304D5CF(uParam0->f_3))
						{
							func_270(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_379(uParam0, 4194304, vVar0, "_mPay1", 1, 8);
					}
				}
				func_250(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_274("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_275(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&vVar0, "_runoff", 24);
				func_342(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_311(uParam0, 16, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_21(uParam0->f_81, 16777216))
				{
					func_379(uParam0, 16777216, vVar0, "_ret1", 1, 8);
				}
				func_275(uParam0, 0, 0);
				break;
			
			case 88:
				func_274("TAXI_TIEFLEE", 7500, 1);
				func_275(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_21(uParam0->f_98, 536870912))
				{
					func_274("TAXI_OBJ_CYI_1B", 7500, 1);
					func_65(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_275(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&vVar0, "_joke1", 24);
				func_252(&vVar0);
				func_383(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 136:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_wronglz", 24);
				}
				else if (uParam0->f_116)
				{
					StringConCat(&vVar0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_wrong", 24);
				}
				func_383(uParam0, &vVar0, 0, 0, 8);
				func_275(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&vVar0, "_shout", 24);
				func_383(uParam0, &vVar0, 0, 0, 8);
				func_275(uParam0, 0, 0);
				break;
			
			case 135:
				if (uParam0->f_411 == 4)
				{
					StringCopy(&vVar0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&vVar0, "_jack", 24);
				}
				func_383(uParam0, &vVar0, 0, 0, 8);
				func_275(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&vVar0, "_getCar", 24);
				func_383(uParam0, &vVar0, 1, 0, 8);
				func_250(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_274("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_250(uParam0, 0, 0, 0, 0);
				func_275(uParam0, 0, 0);
				break;
			}
	}
}

void func_370(var uParam0, int iParam1, vector3 vParam2, var uParam3, var uParam4, var uParam5, char* sParam6, bool bParam7, int iParam8)
{
	func_65(&(uParam0->f_82), iParam1);
	func_311(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_252(&vParam2);
	}
	func_342(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam8, 0, 0, 0);
}

void func_371(var uParam0, struct<6> Param1, int iParam2)
{
	vector3 vVar0[24];
	
	cVar0 = { Param1 };
	if (!func_21(uParam0->f_82, 64))
	{
		func_65(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_21(uParam0->f_82, 128))
	{
		func_65(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x22C775856F4633CA(1, 3), 24);
	}
	func_385(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam2, 0, 0);
	func_311(uParam0, 16, 0, 0);
}

void func_372(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7, bool bParam8)
{
	func_65(&(uParam0->f_82), iParam1);
	func_311(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam8)
		{
			func_252(&vParam2);
		}
	}
	func_342(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam7, 0, 0, 0);
}

int func_373(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_374(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7)
{
	func_65(&(uParam0->f_81), iParam1);
	func_311(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	func_342(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam7, 0, 0, 0);
}

void func_375(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = to_float(iVar2);
		iVar1 = round(pow(2f, fVar0));
		if (!func_291(*uParam0, iVar1))
		{
			func_66(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_252(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_376(char[24] cParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_377(uParam1);
	if (iVar0 > -1)
	{
		*(uParam1[iVar0 /*8*/]) = { cParam0 };
		func_65(&((uParam1[iVar0 /*8*/])->f_7), 2);
	}
}

int func_377(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x429D45A6C6520026(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_378(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_274("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_274("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_274("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_274("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_274("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_274("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_274("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_274("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_274("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_274("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_274("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_274("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_274("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_274("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_274("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_274("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_274("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_274("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_274("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_274("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_379(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, bool bParam7, int iParam8)
{
	func_65(&(uParam0->f_81), iParam1);
	func_311(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_252(&vParam2);
	}
	func_342(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam8, 0, 0, 0);
}

void func_380(var uParam0, char[12] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char* sParam5)
{
	func_311(uParam0, 16, 0, 0);
	func_311(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam5, 24);
	if (!unk_0x4915F4759304D5CF(uParam0->f_3))
	{
		unk_0x5746E1C0B9380990(uParam0->f_3, &cParam1, func_381(uParam0));
	}
}

char* func_381(var uParam0)
{
	char* sVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TaxiFelipe";
			break;
		
		case 1:
			sVar0 = "TaxiOtis";
			break;
		
		case 2:
			sVar0 = "TaxiKwak";
			break;
		
		case 3:
			sVar0 = "TaxiWalter";
			break;
		
		case 4:
			sVar0 = "TaxiMiranda";
			break;
		
		case 5:
			sVar0 = "TaxiDerrick";
			break;
		
		case 6:
			sVar0 = "TaxiAlonzo";
			break;
		
		case 7:
			sVar0 = "TaxiDarren";
			break;
		
		case 8:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_382(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 72:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ACRH";
				
				case 1:
					return "_ACRH";
				
				case 2:
					return "_ACAA";
				
				case 3:
					return "_ACRH";
				
				case 4:
					return "_AEAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					return "_ACAA";
				
				case 7:
					return "_ACAA";
				
				case 8:
					return "_ACRH";
				
				default:
			}
			return "_ACRH";
			break;
		
		case 82:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AHIT";
				
				case 1:
					return "_AHIT";
				
				case 2:
					return "_AEAA";
				
				case 3:
					return "_ADAA";
				
				case 4:
					return "_AFAA";
				
				case 5:
					return "_AFAA";
				
				case 6:
					return "_AEAA";
				
				case 7:
					return "_AHAA";
				
				case 8:
					return "_AEAA";
				
				default:
			}
			return "_AHIT";
			break;
		
		case 74:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AROL";
				
				case 1:
					return "_AROL";
				
				case 2:
					return "_AHAA";
				
				case 3:
					return "_AROL";
				
				case 4:
					return "_AGAA";
				
				case 5:
					return "_AROL";
				
				case 6:
					return "_AROL";
				
				case 7:
					return "_AROL";
				
				case 8:
					return "_AROL";
				
				default:
			}
			return "_AROL";
			break;
		
		case 65:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ABAA";
				
				case 1:
					return "_FUAA";
				
				case 2:
					return "_AFAA";
				
				case 3:
					return "_DBAA";
				
				case 4:
					return "_DLAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				
				case 7:
					return "_DBAA";
				
				case 8:
					return "_EFAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 66:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AEAA";
				
				case 1:
					return "_ACAA";
				
				case 2:
					return "_AJAA";
				
				case 3:
					return "_AHAA";
				
				case 4:
					return "_AHAA";
				
				case 5:
					return "_AIAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				
				case 7:
					return "_AUAA";
				
				case 8:
					return "_AHAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 2:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AAAA";
				
				case 1:
					return "_AAAA";
				
				case 2:
					return "_ADAA";
				
				case 3:
					return "_ABAA";
				
				case 4:
					return "_AAAA";
				
				case 5:
					return "_ABAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				
				case 7:
					return "_BUAA";
				
				case 8:
					return "_ADAA";
				
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

int func_383(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_311(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_311(uParam0, 17, 0f, 1);
	}
	func_275(uParam0, iParam2, 0);
	return func_342(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_384(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam5)
{
	if (iParam0 == 0)
	{
		if (func_21(*uParam2, 2))
		{
			if (!bParam5)
			{
				*uParam1 = (*uParam1 - 2);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 8)
	{
		if (func_21(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_21(*uParam2, 4))
		{
			if (!func_21(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_19(uParam2, 4096);
			}
		}
		else if (func_21(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_21(*uParam2, 512))
		{
			if (!func_21(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_19(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_21(*uParam2, 16))
		{
			if (!func_21(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_19(uParam2, 4096);
			}
		}
		else if (func_21(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_21(*uParam2, 64))
		{
			if (!func_21(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_19(uParam2, 4096);
			}
		}
		else if (func_21(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_21(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_21(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_21(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_21(*uParam2, 8192))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_21(*uParam2, 16384))
		{
			if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 11)
	{
		if (func_21(*uParam2, 32768))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_21(*uParam2, 65536))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_21(*uParam2, 131072))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_21(*uParam2, 262144))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_21(*uParam2, 524288))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_21(*uParam2, 1048576))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_21(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_21(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_21(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_21(*uParam2, 67108864))
		{
			if (func_21(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_21(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_21(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_21(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_21(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_385(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_350(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_343(sParam2, iParam4, 0);
}

void func_386(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = to_float(iVar2);
		iVar1 = round(pow(2f, fVar0));
		if (!func_291(*uParam0, iVar1))
		{
			func_66(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_252(sParam2);
				}
				else
				{
					func_252(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

int func_387(char* sParam0)
{
	if (!unk_0x7032042E5696FFD7(sParam0))
	{
		if (func_225(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_388(var uParam0)
{
	if (func_207())
	{
		return 1;
	}
	if (func_185(uParam0, 17))
	{
		return 1;
	}
	if (func_185(uParam0, 14))
	{
		return 1;
	}
	if (func_223(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_389(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_185(uParam0, 9));
}

void func_390(var uParam0)
{
	if (func_185(uParam0, 17))
	{
		if (!func_185(uParam0, 14))
		{
			if (!func_223(uParam0))
			{
				if (!func_207())
				{
					func_204(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_391(var uParam0)
{
	return uParam0->f_117;
}

void func_392(var uParam0, var uParam1, bool bParam2)
{
	if (!func_21(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0x429D45A6C6520026(&(uParam0->f_124)) && func_207())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_207())
				{
					StringCopy(&(uParam0->f_124), func_144(), 24);
					uParam0->f_56 = (uParam0->f_56 + uParam0->f_57);
					if (uParam0->f_56 < 0)
					{
						uParam0->f_56 = 0;
					}
					uParam0->f_57 = 0;
					*uParam1 = 0;
					if (bParam2)
					{
					}
				}
				break;
			}
	}
}

void func_393(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0xDC5D81351D6A4DDB(uParam0->f_4))
		{
			if (Local_165 > 0 && !func_291(Local_165.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_165 - 1))
				{
					if (func_291(Local_165.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_165.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_291(Local_165.f_1[iVar0 /*4*/], 4))
							{
								func_66(&(Local_165.f_1[iVar0 /*4*/]), 4);
								Local_165.f_1[iVar0 /*4*/].f_1 = unk_0xFD34717937104F1C();
							}
						}
						else
						{
							func_20(&(Local_165.f_1[iVar0 /*4*/]), 12);
						}
						if (func_291(Local_165.f_1[iVar0 /*4*/], 4) && !func_291(Local_165.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_165.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_165.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_66(&(Local_165.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_351(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_394(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_185(uParam0, 27))
	{
		func_200(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_112(uParam0, 27) > 5f)
	{
		if (func_421(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_311(uParam0, 27, 0, 0);
			func_311(uParam0, 10, 0, 0);
			func_419(uParam0, &uVar0, uParam1);
		}
		func_416(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_395(uParam0);
	}
	if ((((!unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()) && (unk_0x37B568B777BC65F9(*uParam0) && !unk_0xC3553172354FFB69(*uParam0))) && (unk_0x37B568B777BC65F9(uParam0->f_1) && !unk_0xC3553172354FFB69(uParam0->f_1))) && !unk_0x8187CC9EB2D7CFE6()) && !func_207())
	{
		if (func_112(uParam0, 26) > 10f)
		{
			func_204(uParam0, 26, 0);
			unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
		}
	}
	else if (func_185(uParam0, 26))
	{
		func_204(uParam0, 26, 0);
	}
	return 0;
}

void func_395(var uParam0)
{
	if (!func_415(uParam0->f_429))
	{
		uParam0->f_429 = func_414();
		func_405(&(uParam0->f_429), 0, 0, unk_0x22C775856F4633CA(4, 7), 0, 0, 0);
	}
	else if (func_396(uParam0->f_429))
	{
		func_351(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_396(int iParam0)
{
	return func_397(func_414(), iParam0);
}

int func_397(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_415(iParam1) || !func_415(iParam0))
	{
		return 1;
	}
	iVar0 = func_403(iParam0);
	iVar1 = func_403(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_402(iParam0);
	iVar1 = func_402(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_401(iParam0);
	iVar1 = func_401(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_400(iParam0);
	iVar1 = func_400(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_399(iParam0);
	iVar1 = func_399(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_398(iParam0);
	iVar1 = func_398(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_398(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_399(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_400(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_401(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_402(int iParam0)
{
	return iParam0 & 15;
}

var func_403(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_404(unk_0x05EFB6A616B6FADE(iParam0, 31), -1, 1)) + 2011;
}

int func_404(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_405(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_403(*uParam0);
	iVar1 = func_402(*uParam0);
	iVar2 = func_401(*uParam0);
	iVar3 = func_400(*uParam0);
	iVar4 = func_399(*uParam0);
	iVar5 = func_398(*uParam0);
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
	iVar6 = func_413(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_413(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_406(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_406(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_412(uParam0, iParam1);
	func_411(uParam0, iParam2);
	func_410(uParam0, iParam3);
	func_409(uParam0, iParam5);
	func_408(uParam0, iParam4);
	func_407(uParam0, iParam6);
}

void func_407(var uParam0, int iParam1)
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

void func_408(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_402(*uParam0);
	iVar1 = func_403(*uParam0);
	if (iParam1 < 1 || iParam1 > func_413(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_409(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_410(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_411(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_412(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_413(int iParam0, int iParam1)
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

int func_414()
{
	var uVar0;
	
	func_412(&uVar0, unk_0xC5B07C33AC7BB174());
	func_411(&uVar0, unk_0x65DA628D62901275());
	func_410(&uVar0, unk_0x34CEB9721AC6A0A9());
	func_408(&uVar0, unk_0xC9A0B68BA813CF99());
	func_409(&uVar0, unk_0x897D202BD69186D5());
	func_407(&uVar0, unk_0x56EBDF0E39D83471());
	return uVar0;
}

int func_415(int iParam0)
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
	iVar0 = func_398(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_399(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_400(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_403(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_402(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_401(iParam0);
	if (iVar5 < 1 || iVar5 > func_413(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_416(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_418()) && !func_203(uParam0)) || ((uParam0->f_411 != 9 && func_279(uParam0, 1)) && !func_203(uParam0)))
		{
			uVar0 = func_417(uParam0->f_4);
			unk_0x69C8D2CAA0701F42(&uVar0);
			uParam0->f_4 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
			unk_0x1F7948851FB36E88(uParam0->f_4, true, 0);
			func_238(uParam0);
			func_230(uParam0, 0);
		}
	}
}

var func_417(var uParam0)
{
	return uParam0;
}

int func_418()
{
	int iVar0;
	
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
			if (unk_0x1095F403F52B42E1(iVar0, 0))
			{
				if (unk_0xB0D49A1F9F054602(iVar0, -1, 0) == unk_0xA19140A5C42D8715())
				{
					if (unk_0xD3C4AB5E628133C1(iVar0, func_18()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_419(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_420(uParam0, 0, 1))
			{
				func_351(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_420(uParam0, 0, 4))
			{
				func_351(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_420(uParam0, 0, 8))
			{
				func_351(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_420(uParam0, 1, 1))
			{
				func_351(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_420(uParam0, 0, 1))
			{
				func_351(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_21(*uParam2, 2) && func_219(uParam0))
			{
				func_351(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_420(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0x7112137033807390(uParam0->f_3, 0))
	{
		if (!unk_0xCDDABFAF231CF3DD(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_250(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_250(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_421(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xA19140A5C42D8715();
	if (!unk_0x7112137033807390(iVar0, 0) && !unk_0x7112137033807390(iParam0, 0))
	{
		if (!func_21(*uParam2, 1))
		{
			if (func_427(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_21(*uParam2, 2))
		{
			if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_21(*uParam2, 4))
		{
			if (func_425(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_21(*uParam2, 8))
		{
			if (func_424(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_21(*uParam2, 128);
		if (bParam4)
		{
			if (func_422(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_21(*uParam2, 16))
		{
			if (func_422(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (iParam7 && unk_0xDEAEC99031DCB92A(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_422(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_73)
		{
			iLocal_74 = unk_0x24A1A7BF4ED94B71(iParam0);
			bLocal_73 = true;
		}
		iLocal_75 = unk_0x24A1A7BF4ED94B71(iParam0);
		iLocal_76 = (iLocal_74 - iLocal_75);
		iVar0 = unk_0xC409B91AC4749F88();
		if (!unk_0x7112137033807390(iVar0, 0))
		{
			if (unk_0xDEAEC99031DCB92A(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_76) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_73)
		{
			if (unk_0xDEAEC99031DCB92A(iParam0, unk_0xA19140A5C42D8715(), 1))
			{
				if (IntToFloat(iLocal_76) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xDEAEC99031DCB92A(iParam0, unk_0xA19140A5C42D8715(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0xC409B91AC4749F88();
		if (!unk_0x7112137033807390(iVar1, 0))
		{
			if (unk_0xDEAEC99031DCB92A(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x7112137033807390(iParam0, 0))
		{
			if (unk_0x97B2B0016AD3C7C6(iParam0))
			{
				if (unk_0xA8D84E6AD4EB2356(iParam0) == unk_0xA19140A5C42D8715())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x6625F609B391348E(unk_0xA19140A5C42D8715()))
		{
			if (unk_0xA60C975CBAB69F34(iParam0, unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (unk_0xF524BFB878FD8057(unk_0xD4E735F4B6A956AC()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x51421B7F2A039FED(unk_0xA19140A5C42D8715()))
	{
		if (unk_0x9910CE19E16B00A7(iParam0))
		{
			return 1;
		}
	}
	if (func_423(unk_0xA19140A5C42D8715(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x685AE6AF34B35D3B(iParam0) && func_229(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x5D7DFE2058701942(iParam0, 0))
		{
			if (unk_0xC556072C29E00F04(unk_0xA19140A5C42D8715(), unk_0xCAEB6CE71A2C7212(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0xC556072C29E00F04(unk_0xA19140A5C42D8715(), iParam0))
		{
			return 1;
		}
		if (!unk_0x7112137033807390(iParam1, 0))
		{
			if (unk_0xDEAEC99031DCB92A(iParam1, unk_0xA19140A5C42D8715(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_423(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xF990CFC0F1D94A39(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x41CA0CDBE31A440F(iParam0))
		{
			if (vdist(unk_0xE2BBD32891C18569(iParam0, true), unk_0xE2BBD32891C18569(iParam1, true)) < 2.5f)
			{
				if (unk_0xC42DE41AEED00E7B(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_424(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x852B8F739A2072BE(iParam0, 4))
	{
		if (unk_0x41CA0CDBE31A440F(iParam0) && !unk_0x07F5A0B42D3F3491(iParam0))
		{
			if (unk_0xA60C975CBAB69F34(iParam1, unk_0xE2BBD32891C18569(iParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_425(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!unk_0x7112137033807390(iParam1, 0))
	{
		vVar0 = { unk_0xE2BBD32891C18569(iParam1, true) };
	}
	if (unk_0x9809FE4B550B1EFE(vVar0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xB3CB9098064F83A7(vVar0, to_float(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x852B8F739A2072BE(iParam0, 2))
	{
		if (unk_0x41CA0CDBE31A440F(iParam0))
		{
			if (unk_0xA60C975CBAB69F34(iParam1, unk_0xE2BBD32891C18569(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (unk_0xC42DE41AEED00E7B(unk_0xA2EA4BA455370F3C(iParam1), iParam0, 120f) && unk_0x58DE86018EA47551(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x5D7DFE2058701942(unk_0xA2EA4BA455370F3C(iParam1), 0))
			{
				iVar1 = unk_0xCAEB6CE71A2C7212(unk_0xA2EA4BA455370F3C(iParam1), 0);
			}
			if (unk_0x1CD6AC2CF787DFCB(iParam0) || func_426(iVar1))
			{
				if (unk_0xA60C975CBAB69F34(iParam1, unk_0xE2BBD32891C18569(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (unk_0xC42DE41AEED00E7B(unk_0xA2EA4BA455370F3C(iParam1), iParam0, 120f) && unk_0x58DE86018EA47551(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x0AF5F990243ADDFB((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_426(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (unk_0x1095F403F52B42E1(iParam0, 0))
		{
			if (unk_0xB0D49A1F9F054602(iParam0, -1, 0) != 0)
			{
				if (unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_49(unk_0xA19140A5C42D8715(), iParam0, 1) < 40f)
						{
							if (unk_0x779AE368CB4F1259(unk_0xD4E735F4B6A956AC(), &iVar1))
							{
								if ((unk_0xFAC06EE780B57279(iVar1) && unk_0xB86D86A5DBBC79F0(iVar1) == iParam0) || (unk_0x281590680327CDEA(iVar1) && unk_0xA2EA4BA455370F3C(iVar1) == unk_0xB0D49A1F9F054602(iParam0, -1, 0)))
								{
									if ((unk_0x2206F47E5C82D52C(unk_0xA19140A5C42D8715()) && unk_0xD73B1037F6BD4B90(0, 24)) || (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && unk_0xD73B1037F6BD4B90(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_427(int iParam0, var uParam1)
{
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		if (unk_0x852B8F739A2072BE(unk_0xA19140A5C42D8715(), 6))
		{
			if (unk_0x669ABFB25D991447(unk_0xD4E735F4B6A956AC(), iParam0) || unk_0x7591AFB11E7EDDA0(unk_0xD4E735F4B6A956AC(), iParam0))
			{
				if (unk_0xC42DE41AEED00E7B(iParam0, unk_0xA19140A5C42D8715(), 90f))
				{
					if (func_229(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0xFD34717937104F1C();
						}
						else if ((unk_0xFD34717937104F1C() - uParam1->f_1) > uParam1->f_3)
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

void func_428(var uParam0)
{
	if (!func_21(uParam0->f_98, 2))
	{
		if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
		{
			if (func_51(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0x01AF8CB960828C2B(uParam0->f_17, 25f, 0, 0, 0, 0, false, 0);
				func_65(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_429()
{
	func_430(&Local_238);
	func_452(2);
	func_448();
}

void func_430(var uParam0)
{
	func_52(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_452(2);
	}
}

int func_431(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_207() && func_112(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x7112137033807390(uParam0->f_3, 0))
		{
			if (unk_0x1095F403F52B42E1(uParam0->f_4, 0))
			{
				if (unk_0xE0FD180CD24C0B67(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_64(uParam0) == 0 || func_291(uParam0->f_85, 32))
					{
						if (!unk_0x097275D546C9735F(uParam0->f_4))
						{
							func_353(uParam0, 4160, 0);
						}
						else
						{
							func_353(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_353(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_353(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_353(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0xFD34717937104F1C() % 1000) < 50)
	{
	}
	return 0;
}

void func_432(var uParam0)
{
	if (unk_0xCE3CB618AFE55EFB(uParam0->f_8))
	{
		unk_0xE1623437A3194332(&(uParam0->f_8));
	}
	if (unk_0xCE3CB618AFE55EFB(uParam0->f_9))
	{
		unk_0xE1623437A3194332(&(uParam0->f_9));
	}
	if (unk_0xCE3CB618AFE55EFB(uParam0->f_10))
	{
		unk_0xE1623437A3194332(&(uParam0->f_10));
	}
}

int func_433(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_434()
{
	func_437(&Local_238, 8);
	Local_238.f_410 = 0;
	func_436(&Local_238, 3, 6);
	Local_238.f_23 = { 1412.324f, -1518.315f, 58.4644f };
	Local_238.f_33 = 114.1f;
	Local_238.f_26 = { vLocal_286 };
	Local_238.f_34 = 95.93f;
	func_435(&Local_238, &Local_251);
	Local_251 = joaat("s_m_m_doctor_01");
	Local_251.f_1 = joaat("bison");
}

void func_435(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = Global_106070.f_19069.f_39[uParam0->f_411];
	uParam1->f_20 = 1;
	uParam1->f_32 = -1817882002;
	uParam1->f_12 = (0.7f - (0.6f * IntToFloat(iVar0)));
	uParam1->f_13 = (0.8f - (0.6f * IntToFloat(iVar0)));
	uParam1->f_14 = (24f + IntToFloat((10 * iVar0)));
}

void func_436(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_437(var uParam0, int iParam1)
{
	func_447(1);
	func_240();
	func_6(&(uParam0->f_244));
	func_446(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_21(Global_106070.f_19069, 4))
	{
		func_65(&(Global_106070.f_19069), 4);
	}
	func_441(uParam0);
	func_439(uParam0);
	unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 32, false);
	uParam0->f_102 = (func_438(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0x6A633E13B2A856AE("TAXI", 2);
}

int func_438(int iParam0)
{
	return Global_106070.f_19069.f_39[iParam0];
}

void func_439(var uParam0)
{
	switch (func_64(uParam0))
	{
		case 0:
			func_440(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_440(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_440(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_440(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_440(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_440(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_440(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_440(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_440(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_440(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_440(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_441(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_445(uParam0, 3);
			func_444(uParam0, 14);
			break;
		
		case 1:
			func_445(uParam0, 14);
			func_444(uParam0, 8);
			break;
		
		case 2:
			func_445(uParam0, 8);
			func_444(uParam0, 7);
			break;
		
		case 3:
			func_445(uParam0, 15);
			func_444(uParam0, 6);
			break;
		
		case 4:
			func_445(uParam0, 0);
			func_444(uParam0, 3);
			break;
		
		case 5:
			func_445(uParam0, 6);
			func_444(uParam0, 7);
			break;
		
		case 6:
			func_445(uParam0, 8);
			func_444(uParam0, 15);
			break;
		
		case 7:
			func_445(uParam0, 8);
			func_444(uParam0, 14);
			break;
		
		case 8:
			func_445(uParam0, 7);
			func_444(uParam0, 15);
			break;
		
		case 9:
			func_445(uParam0, unk_0x22C775856F4633CA(0, 17));
			iVar0 = func_443((uParam0->f_418.f_2 + unk_0x22C775856F4633CA(1, 17)), 0, 16);
			func_444(uParam0, iVar0);
			func_442(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_442(var uParam0)
{
	switch (uParam0->f_418.f_2)
	{
		case 2:
		case 8:
			uParam0->f_418.f_3 = 1;
			break;
		
		case 0:
		case 3:
		case 5:
		case 9:
		case 15:
			uParam0->f_418.f_3 = 2;
			break;
		
		case 4:
		case 10:
			uParam0->f_418.f_3 = 3;
			break;
		
		case 1:
		case 6:
		case 13:
			uParam0->f_418.f_3 = 4;
			break;
		
		case 11:
			uParam0->f_418.f_3 = 5;
			break;
		
		case 12:
		case 14:
			uParam0->f_418.f_3 = 6;
			break;
		
		case 7:
			uParam0->f_418.f_3 = 7;
			break;
	}
}

int func_443(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 > iParam2)
	{
		return -1;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_444(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_445(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_446(var uParam0)
{
	uParam0->f_2 = unk_0xA19140A5C42D8715();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_39() };
	uParam0->f_17 = { func_39() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_204(uParam0, 32, 0);
}

void func_447(bool bParam0)
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

void func_448()
{
	unk_0x413F34FCFABEDE4B(vLocal_287, vLocal_288, true, 1);
	unk_0x413F34FCFABEDE4B(vLocal_293, vLocal_294, true, 1);
	func_136(vLocal_299, 60f, 0);
	func_136(vLocal_300, 60f, 0);
	unk_0xD9F4F897224699B4();
	unk_0xE70AC26DFC59863A(iLocal_261, 0);
	unk_0x3E11F609741642B7(iLocal_260);
	unk_0x3E11F609741642B7(iLocal_259);
	unk_0xDC253F6738C56280(&cLocal_309);
	func_247(385.1685f, -1372.719f, 29.8554f, 1, 50f);
	func_451();
	func_450();
	func_449();
	unk_0xFC00A668AFC2126D(Local_251.f_1, false);
	func_153(&uLocal_45, 0, 0);
	unk_0x8F1A9FE6D91AAFEB();
}

void func_449()
{
	unk_0xA5DE74AE39867B03(iLocal_254);
	unk_0x4DC885EA8D6AF7FC("MOVE_DUCK_FOR_COVER");
	unk_0x4DC885EA8D6AF7FC(&cLocal_312);
	unk_0x4DC885EA8D6AF7FC(&cLocal_321);
	unk_0x4DC885EA8D6AF7FC(&cLocal_330);
	unk_0x4DC885EA8D6AF7FC(&cLocal_339);
}

void func_450()
{
	unk_0xA5DE74AE39867B03(Local_251);
	unk_0xA5DE74AE39867B03(Local_251.f_1);
	unk_0xA5DE74AE39867B03(iLocal_255);
	unk_0xA5DE74AE39867B03(iLocal_256);
	unk_0xDC253F6738C56280(&cLocal_309);
	unk_0x4DC885EA8D6AF7FC("veh@truck@ds@base");
}

void func_451()
{
	unk_0xA5DE74AE39867B03(iLocal_253);
	unk_0x4DC885EA8D6AF7FC("gestures@m@standing@casual");
}

void func_452(int iParam0)
{
	Global_104780.f_22 = iParam0;
}

