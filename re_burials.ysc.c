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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52[2] = { 0, 0 };
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57[2] = { 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	vector3 vLocal_72 = { 0f, 0f, 0f };
	vector3 vLocal_73[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_74 = { 0f, 0f, 0f };
	vector3 vLocal_75 = { 0f, 0f, 0f };
	vector3 vLocal_76 = { 0f, 0f, 0f };
	float fLocal_77 = 0f;
	float fLocal_78[2] = { 0f, 0f };
	float fLocal_79 = 0f;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	vector3 vLocal_85 = { 0f, 0f, 0f };
	int iLocal_86 = 0;
	int iLocal_87[2] = { 0, 0 };
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	bool bLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	bool bLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	vector3 vLocal_113 = { 0f, 0f, 0f };
	vector3 vLocal_114 = { 0f, 0f, 0f };
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	bool bLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	struct<6> Local_120 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_121 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	bool bLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	var uLocal_138 = 16;
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
	int iLocal_303 = 0;
	struct<2> Local_304 = { 0, 5 } ;
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
	var uLocal_320 = 5;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	iLocal_18 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_45 = -1f;
	vLocal_85 = { 154.92f, 6841.12f, 19.14f };
	iLocal_99 = 200;
	vLocal_113 = { -1161.199f, 934.5912f, 196.7591f };
	vLocal_114 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_120, "", 24);
	if (unk_0x5EBD03AF78E7B4DB(11))
	{
		if (!unk_0x4915F4759304D5CF(iLocal_51))
		{
			if (unk_0x749F5228DEB730FF(iLocal_51))
			{
				unk_0xF8136E11BE4BEAC3(iLocal_51);
			}
		}
		func_206();
	}
	if (func_164(ScriptParam_304.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_161(-1);
	}
	else
	{
		unk_0x8F1A9FE6D91AAFEB();
	}
	while (true)
	{
		wait(0);
		if (unk_0x1F85F8C7CC4639AE() || iLocal_105)
		{
			if (!func_160())
			{
				if (func_159())
				{
					func_206();
				}
			}
			unk_0x4789FEFEDF029858("RE_BU", 0);
			switch (iLocal_46)
			{
				case 0:
					if (func_147())
					{
						func_206();
					}
					if (!iLocal_60)
					{
						func_146();
					}
					else
					{
						func_145();
					}
					if (bLocal_50)
					{
						iLocal_122 = 1;
						iLocal_46 = 1;
					}
					break;
				
				case 1:
					if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
					{
						func_144();
						switch (iLocal_47)
						{
							case 0:
								func_134();
								iLocal_47 = 1;
								break;
							
							case 1:
								if ((!func_127(iLocal_52[0], &iLocal_102, &uLocal_101, iLocal_100, iLocal_103, 7f, 0) && !func_127(iLocal_52[1], &iLocal_102, &uLocal_101, iLocal_100, iLocal_103, 7f, 0)) && !func_126())
								{
									switch (iLocal_48)
									{
										case 0:
											func_125();
											if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_72, 50f, 35f, 50f, false, true, 0))
											{
												func_124();
											}
											if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_72, 80f, 65f, 50f, false, true, 0))
											{
												func_123();
											}
											if (!unk_0x7112137033807390(iLocal_54, 0))
											{
												if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 281.9148f, 6816.345f, 4.3197f, 48.3924f, 6885.921f, 43.0037f, 226.5f, 0, true, 0) || unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_74 - Vector(0f, 0f, 7f), 20f, 15f, 50f, false, true, 0))
												{
													func_122();
													if (unk_0xCE3CB618AFE55EFB(iLocal_88))
													{
														unk_0x264E87C905AE790B(iLocal_88, false);
													}
													iLocal_58 = 0;
													while (iLocal_58 <= 1)
													{
														if (unk_0xCE3CB618AFE55EFB(iLocal_87[iLocal_58]))
														{
															unk_0x264E87C905AE790B(iLocal_87[iLocal_58], false);
														}
														iLocal_58++;
													}
													if (!func_160())
													{
														func_113(1);
													}
												}
											}
											break;
									}
								}
								else
								{
									func_122();
									iLocal_47 = 2;
								}
								break;
							
							case 2:
								if ((func_127(iLocal_52[0], &iLocal_102, &uLocal_101, iLocal_100, iLocal_103, 7f, 0) || func_127(iLocal_52[1], &iLocal_102, &uLocal_101, iLocal_100, iLocal_103, 7f, 0)) || iLocal_103)
								{
									iLocal_103 = 1;
									if (!func_160())
									{
										func_113(1);
									}
									if (unk_0xCE3CB618AFE55EFB(iLocal_88))
									{
										unk_0x264E87C905AE790B(iLocal_88, true);
									}
									iLocal_58 = 0;
									while (iLocal_58 <= 1)
									{
										if (unk_0xCE3CB618AFE55EFB(iLocal_87[iLocal_58]))
										{
											unk_0x264E87C905AE790B(iLocal_87[iLocal_58], true);
										}
										iLocal_58++;
									}
									switch (iLocal_102)
									{
										case 0:
											func_112();
											break;
										
										case 1:
											func_112();
											break;
										
										case 2:
											func_112();
											break;
										
										case 3:
											func_112();
											break;
										
										case 4:
											func_112();
											break;
										
										case 5:
											func_112();
											break;
										}
								}
								if (func_126())
								{
									iLocal_69 = 1;
									if (unk_0xCE3CB618AFE55EFB(iLocal_88))
									{
										unk_0x264E87C905AE790B(iLocal_88, true);
									}
									iLocal_58 = 0;
									while (iLocal_58 <= 1)
									{
										if (unk_0xCE3CB618AFE55EFB(iLocal_87[iLocal_58]))
										{
											unk_0x264E87C905AE790B(iLocal_87[iLocal_58], true);
										}
										iLocal_58++;
									}
									if (!func_111())
									{
										switch (iLocal_49)
										{
											case 1:
												func_108();
												break;
											
											case 3:
												func_107();
												break;
											
											case 4:
												func_106();
												break;
											
											case 5:
												func_104();
												wait(0);
												if (!unk_0x4915F4759304D5CF(iLocal_52[0]))
												{
													func_102(iLocal_52[0], "GENERIC_WAR_CRY", 24);
												}
												else if (!unk_0x4915F4759304D5CF(iLocal_52[1]))
												{
													func_102(iLocal_52[1], "GENERIC_WAR_CRY", 24);
												}
												func_112();
												break;
											
											case 6:
												func_104();
												wait(0);
												if (!unk_0x4915F4759304D5CF(iLocal_52[0]))
												{
													func_102(iLocal_52[0], "GENERIC_SHOCKED_HIGH", 24);
												}
												else if (!unk_0x4915F4759304D5CF(iLocal_52[1]))
												{
													func_102(iLocal_52[1], "GENERIC_SHOCKED_HIGH", 24);
												}
												func_112();
												break;
										}
									}
									else
									{
										func_104();
										wait(0);
										iVar0 = 0;
										while (iVar0 < iLocal_52)
										{
											if (!unk_0x4915F4759304D5CF(iLocal_52[iVar0]))
											{
												unk_0x5999C3F8663B8F28(iLocal_52[iVar0], 5, 0f, 0);
												unk_0x33B5487515BD13D5(iLocal_52[iVar0], unk_0xA19140A5C42D8715(), 1000f, -1, 0, 0);
												unk_0xD738221C247C8B71(iLocal_52[iVar0], true);
												if (unk_0xDC5D81351D6A4DDB(iLocal_56))
												{
													if (unk_0xF797E4DD45066C88(iLocal_56))
													{
														unk_0xF334C9B245CD323D(iLocal_56, 1, true);
													}
												}
												if (unk_0xCE3CB618AFE55EFB(iLocal_87[iVar0]))
												{
													unk_0xE1623437A3194332(&(iLocal_87[iVar0]));
												}
											}
											iVar0++;
										}
										iLocal_47 = 3;
									}
								}
								break;
							
							case 3:
								if (!bLocal_104)
								{
									func_101();
								}
								if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
								{
									func_86();
								}
								break;
							
							case 4:
								func_85();
								if (!unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_85, 100f, 100f, 100f, true, true, 0))
								{
									unk_0xBF6EED5D6E0CD9BF(1f);
									if (unk_0xDC5D81351D6A4DDB(iLocal_52[0]) && unk_0xDC5D81351D6A4DDB(iLocal_52[1]))
									{
										unk_0x7E4E83D33161D01A(&(iLocal_52[0]));
										unk_0x7E4E83D33161D01A(&(iLocal_52[1]));
									}
								}
								if (!unk_0xDC5D81351D6A4DDB(iLocal_53))
								{
									if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_113, 200f, 200f, 200f, true, true, 0))
									{
										unk_0xCACEBBBEAD8F262E(joaat("s_m_m_highsec_01"));
										unk_0xCACEBBBEAD8F262E(joaat("granger"));
										if (unk_0x7FC99CCC73354033(joaat("s_m_m_highsec_01")) && unk_0x7FC99CCC73354033(joaat("granger")))
										{
											iLocal_55 = unk_0x48CFBECB146FD1A1(joaat("granger"), -1155.043f, 942.9685f, 197.4921f, 161.1247f, true, true, false);
											unk_0xA45E1AA8B9CF45AD(iLocal_55, 200);
											unk_0x117F5CD9634D61A9(iLocal_55, 1.5f);
											iLocal_53 = unk_0x91A7C8CA5E332C03(iLocal_55, 26, joaat("s_m_m_highsec_01"), -1, 1, true);
											unk_0x72A0FF8C49CFFC0D(iLocal_53, 0, 0, 2, 0);
											unk_0x72A0FF8C49CFFC0D(iLocal_53, 3, 0, 0, 0);
											unk_0x72A0FF8C49CFFC0D(iLocal_53, 4, 0, 0, 0);
											unk_0xF0188A1B49D79AF7(iLocal_53, joaat("weapon_pistol"), -1, true, true);
											unk_0xDFA901280292A2FB(iLocal_53, iLocal_137);
										}
									}
								}
								if (!unk_0x4915F4759304D5CF(iLocal_51))
								{
									if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
									{
										if (unk_0xD63FAD81FAF5E0CB(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)) < 1)
										{
											if (!iLocal_106)
											{
												func_81(0);
												func_104();
												wait(0);
												func_70(&uLocal_138, "REBU2AU", "REBU2_WV", 4, 0, 0, 0);
												iLocal_106 = 1;
											}
										}
									}
									else
									{
										iLocal_106 = 0;
									}
									if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_113, Global_22, true, true, 0) && unk_0x10E54C268D1B3FED(iLocal_51, unk_0xA19140A5C42D8715(), 10f, 10f, 10f, 0, 1, 0))
									{
										if (unk_0x749F5228DEB730FF(iLocal_51))
										{
											if (unk_0xCE3CB618AFE55EFB(iLocal_111))
											{
												unk_0xE1623437A3194332(&iLocal_111);
											}
											if (unk_0xCE3CB618AFE55EFB(iLocal_112))
											{
												unk_0xE1623437A3194332(&iLocal_112);
											}
											if (func_69())
											{
												iLocal_47 = 5;
											}
											else
											{
												iLocal_47 = 6;
											}
										}
									}
									else
									{
										func_64();
										func_63();
										func_62();
										func_58();
										func_57();
										func_51();
										if (func_50(vLocal_113))
										{
											func_81(0);
											func_104();
											wait(0);
											func_70(&uLocal_138, "REBU2AU", "REBU2_CULT", 4, 0, 0, 0);
										}
										if (func_49())
										{
											func_81(0);
											func_104();
											wait(0);
											func_70(&uLocal_138, "REBU2AU", "REBU2_NEAR", 4, 0, 0, 0);
										}
									}
								}
								break;
							
							case 5:
								func_85();
								if (func_48(1, 0, 1))
								{
									func_47();
								}
								if (bLocal_98)
								{
									iLocal_47 = 8;
								}
								break;
							
							case 6:
								func_85();
								if (func_48(1, 0, 1))
								{
									func_46();
								}
								if (bLocal_98)
								{
									iLocal_47 = 8;
								}
								break;
							
							case 8:
								func_13();
								break;
							
							case 7:
								func_11();
								if (unk_0xDC5D81351D6A4DDB(iLocal_56))
								{
									if (unk_0xF797E4DD45066C88(iLocal_56))
									{
										if (!unk_0x4915F4759304D5CF(iLocal_52[0]))
										{
											if (unk_0x411C28019DEA5CEF(iLocal_52[0], "random@burial", "a_burial_stop", 3))
											{
												if (unk_0xE5B5A1FFAA0834BD(iLocal_52[0], "random@burial", "a_burial_stop") > 0.355f)
												{
													unk_0xF334C9B245CD323D(iLocal_56, 1, true);
												}
											}
											else
											{
												unk_0xF334C9B245CD323D(iLocal_56, 1, true);
											}
										}
									}
								}
								if (unk_0x4915F4759304D5CF(iLocal_52[0]) || unk_0x4915F4759304D5CF(iLocal_52[1]))
								{
									bLocal_117 = true;
								}
								if (bLocal_117)
								{
									if (unk_0x1095F403F52B42E1(iLocal_54, 0))
									{
										if (!unk_0x4915F4759304D5CF(iLocal_52[0]))
										{
											unk_0x57BAE9F63852E6FF(iLocal_52[0]);
											if (unk_0x5860446BFB759B77(iLocal_52[0], iLocal_54, -1, 0, false) || unk_0x5860446BFB759B77(iLocal_52[0], iLocal_54, 0, 0, false))
											{
												if (!iLocal_124)
												{
													unk_0x9568B1B58F78FF36(iLocal_52[0]);
													if (unk_0xDC5D81351D6A4DDB(iLocal_56))
													{
														if (unk_0xF797E4DD45066C88(iLocal_56))
														{
															unk_0xF334C9B245CD323D(iLocal_56, 1, true);
														}
													}
													unk_0x2F89329397A277BC(&iLocal_59);
													unk_0x53FF9BDD8529ACD2(0);
													unk_0xBB2EBD7F469C8767(0, unk_0x3201284584C7CD83(iLocal_54, -0.5f, 0.5f, 0f), unk_0xA19140A5C42D8715(), 3f, true, 0.5f, 4f, true, 0, 0, -957453492, 20000);
													unk_0xA2EBCD9385E56019(0, iLocal_54, -1, -1, 3f, 9, 0);
													unk_0x5175E271E03B40D8(0, iLocal_54, unk_0xA19140A5C42D8715(), 8, 30f, 262144, -1f, 10f, 1);
													unk_0x301F42EEE3C40328(iLocal_59);
													unk_0xE1072FA2FECBAD96(iLocal_52[0], iLocal_59);
													unk_0x3A95A0A3221D4208(&iLocal_59);
													unk_0xD738221C247C8B71(iLocal_52[0], true);
													unk_0x3FB92963BD0665CB(iLocal_54, 1);
													iLocal_124 = 1;
												}
												else if (unk_0xF9D4EF1338E38AFB(iLocal_52[0], 242628503) == 1)
												{
													if (unk_0x5100CFEF9EA1B0E5(iLocal_52[0]) == 3)
													{
														if (!unk_0x10E54C268D1B3FED(iLocal_52[0], unk_0xA19140A5C42D8715(), 10f, 10f, 10f, 0, 1, 0) && !unk_0xA60C975CBAB69F34(iLocal_52[0], vLocal_74, 10f, 10f, 10f, false, true, 0))
														{
															unk_0x7E4E83D33161D01A(&(iLocal_52[0]));
														}
													}
												}
											}
											else
											{
												unk_0xDA4D3941AFF8EF12(iLocal_52[0], unk_0xA19140A5C42D8715(), 0, 16);
												unk_0xD738221C247C8B71(iLocal_52[0], true);
											}
										}
										if (!unk_0x4915F4759304D5CF(iLocal_52[1]))
										{
											unk_0x57BAE9F63852E6FF(iLocal_52[1]);
											if (unk_0x5860446BFB759B77(iLocal_52[1], iLocal_54, -1, 0, false) || unk_0x5860446BFB759B77(iLocal_52[1], iLocal_54, 0, 0, false))
											{
												if (!iLocal_124)
												{
													unk_0x9568B1B58F78FF36(iLocal_52[1]);
													unk_0x2F89329397A277BC(&iLocal_59);
													unk_0x53FF9BDD8529ACD2(0);
													unk_0xBB2EBD7F469C8767(0, unk_0x3201284584C7CD83(iLocal_54, -0.5f, 0.5f, 0f), unk_0xA19140A5C42D8715(), 3f, true, 0.5f, 4f, true, 0, 0, -957453492, 20000);
													unk_0xA2EBCD9385E56019(0, iLocal_54, -1, -1, 3f, 9, 0);
													unk_0x5175E271E03B40D8(0, iLocal_54, unk_0xA19140A5C42D8715(), 8, 30f, 262144, -1f, 10f, 1);
													unk_0x301F42EEE3C40328(iLocal_59);
													unk_0xE1072FA2FECBAD96(iLocal_52[1], iLocal_59);
													unk_0x3A95A0A3221D4208(&iLocal_59);
													unk_0xD738221C247C8B71(iLocal_52[1], true);
													unk_0x3FB92963BD0665CB(iLocal_54, 1);
													iLocal_124 = 1;
												}
												else if (unk_0xF9D4EF1338E38AFB(iLocal_52[1], 242628503) == 1)
												{
													if (unk_0x5100CFEF9EA1B0E5(iLocal_52[1]) == 3)
													{
														if (!unk_0x10E54C268D1B3FED(iLocal_52[1], unk_0xA19140A5C42D8715(), 10f, 10f, 10f, 0, 1, 0) && !unk_0xA60C975CBAB69F34(iLocal_52[1], vLocal_74, 10f, 10f, 10f, false, true, 0))
														{
															unk_0x7E4E83D33161D01A(&(iLocal_52[1]));
														}
													}
												}
											}
											else
											{
												unk_0xDA4D3941AFF8EF12(iLocal_52[1], unk_0xA19140A5C42D8715(), 0, 16);
												unk_0xD738221C247C8B71(iLocal_52[1], true);
											}
										}
									}
								}
								break;
							
							case 9:
								break;
						}
						if ((func_10() && !func_9()) && iLocal_47 != 9)
						{
							if (!unk_0x4915F4759304D5CF(iLocal_51))
							{
								if (unk_0xA60C975CBAB69F34(iLocal_51, vLocal_114, 5f, 5f, 5f, false, true, 0))
								{
									func_8(0);
									wait(0);
									func_104();
									iLocal_47 = 9;
								}
							}
						}
						if (func_6())
						{
							if (unk_0xDC5D81351D6A4DDB(iLocal_51))
							{
								unk_0x680F17660351F21B(&iLocal_51);
							}
							func_13();
						}
						if (func_5())
						{
							func_4();
						}
						func_2();
						if (iLocal_47 != 3)
						{
							if (func_1())
							{
								unk_0x9444470D6D9ADB88("RE6_BOTH_DEAD");
								if (!iLocal_68)
								{
									settimera(0);
									iLocal_84 = unk_0xFD34717937104F1C() + 8500;
									iLocal_68 = 1;
								}
								if (!unk_0x4915F4759304D5CF(iLocal_51))
								{
									if (unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_51, 20f, 20f, 20f, 0, 1, 1))
									{
										if (func_70(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
										{
											iLocal_47 = 3;
										}
									}
								}
							}
						}
						if (((iLocal_47 == 1 || iLocal_47 == 2) || iLocal_47 == 3) || iLocal_47 == 7)
						{
							if (!unk_0x4915F4759304D5CF(iLocal_51))
							{
								if (!bLocal_104)
								{
									if (unk_0xF9D4EF1338E38AFB(iLocal_51, 1785177548) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_51, 1785177548) != 0)
									{
										unk_0x836A6A722DEA63F1(iLocal_51);
										iLocal_303 = unk_0x70788DC3D80C9DEB(vLocal_72, -2f, -4f, 18f, 2);
										unk_0xE5565DEAABF9D588(iLocal_51, iLocal_303, "random@burial", "b_burial", 1000f, -4f, 1, 24592, 1148846080, 0);
										unk_0x341C49A9159E80FB(iLocal_57[0], iLocal_303, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
										unk_0x341C49A9159E80FB(iLocal_57[1], iLocal_303, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
										unk_0xDA16255FBFC16B28(iLocal_303, true);
										unk_0xD738221C247C8B71(iLocal_51, true);
									}
									if (unk_0x463E3A48A46C9195(iLocal_51))
									{
										unk_0x31BE5698CEB2831B(iLocal_51, 1);
										unk_0x92C40FD8A8A4ACAC(iLocal_51, 1);
										unk_0x6259CDB47862A4F3(iLocal_51, 0, 0);
									}
								}
								if ((unk_0xAD001F5D569438EC(iLocal_51) || unk_0x6C55C22D72D438C8(iLocal_51)) || (iLocal_99 - unk_0x24A1A7BF4ED94B71(iLocal_51)) >= 50)
								{
									unk_0x31BE5698CEB2831B(iLocal_51, 1);
									unk_0x92C40FD8A8A4ACAC(iLocal_51, 1);
									unk_0x6259CDB47862A4F3(iLocal_51, 0, 0);
								}
								if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && !unk_0x7112137033807390(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 0))
								{
									if (unk_0xEAA5CEF8875FEEED(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)) < 5f)
									{
									}
									else if (unk_0xC556072C29E00F04(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), iLocal_51))
									{
										unk_0x31BE5698CEB2831B(iLocal_51, 1);
										unk_0x92C40FD8A8A4ACAC(iLocal_51, 1);
										unk_0x6259CDB47862A4F3(iLocal_51, 0, 0);
									}
								}
								if (!unk_0x7112137033807390(iLocal_54, 0))
								{
									if (unk_0xC556072C29E00F04(iLocal_54, iLocal_51))
									{
										unk_0x31BE5698CEB2831B(iLocal_51, 1);
										unk_0x92C40FD8A8A4ACAC(iLocal_51, 1);
										unk_0x6259CDB47862A4F3(iLocal_51, 0, 0);
									}
								}
							}
						}
					}
					break;
			}
		}
		else
		{
			func_206();
		}
	}
}

int func_1()
{
	if (!bLocal_104)
	{
		if (!unk_0xDC5D81351D6A4DDB(iLocal_52[0]) && !unk_0xDC5D81351D6A4DDB(iLocal_52[1]))
		{
			return 1;
		}
		if (unk_0xDC5D81351D6A4DDB(iLocal_52[0]) && unk_0xDC5D81351D6A4DDB(iLocal_52[1]))
		{
			if (unk_0x4915F4759304D5CF(iLocal_52[0]) && unk_0x4915F4759304D5CF(iLocal_52[1]))
			{
				return 1;
			}
			if (unk_0x7DEF3BB6E15971EA(iLocal_52[0]) && unk_0x7DEF3BB6E15971EA(iLocal_52[1]))
			{
				return 1;
			}
		}
		if (unk_0xDC5D81351D6A4DDB(iLocal_52[0]) && !unk_0xDC5D81351D6A4DDB(iLocal_52[1]))
		{
			if (unk_0x4915F4759304D5CF(iLocal_52[0]))
			{
				return 1;
			}
		}
		if (unk_0xDC5D81351D6A4DDB(iLocal_52[1]) && !unk_0xDC5D81351D6A4DDB(iLocal_52[0]))
		{
			if (unk_0x4915F4759304D5CF(iLocal_52[1]))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_2()
{
	if (unk_0x4915F4759304D5CF(iLocal_52[0]))
	{
		if (unk_0xCE3CB618AFE55EFB(iLocal_87[0]))
		{
			if (unk_0xDC5D81351D6A4DDB(iLocal_56))
			{
				if (unk_0xF797E4DD45066C88(iLocal_56))
				{
					unk_0xF334C9B245CD323D(iLocal_56, 1, true);
				}
			}
			func_3(&uLocal_138, 4);
			unk_0xE1623437A3194332(&(iLocal_87[0]));
		}
	}
	if (unk_0x4915F4759304D5CF(iLocal_52[1]))
	{
		if (unk_0xCE3CB618AFE55EFB(iLocal_87[1]))
		{
			func_3(&uLocal_138, 3);
			unk_0xE1623437A3194332(&(iLocal_87[1]));
		}
	}
	if (unk_0x4915F4759304D5CF(iLocal_51))
	{
		if (!unk_0x7112137033807390(iLocal_51, 0))
		{
		}
		if (unk_0xCE3CB618AFE55EFB(iLocal_88))
		{
			func_3(&uLocal_138, 5);
			unk_0xE1623437A3194332(&iLocal_88);
		}
	}
}

void func_3(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_4()
{
	unk_0x9444470D6D9ADB88("RE6_END");
	func_206();
}

int func_5()
{
	if (unk_0x4915F4759304D5CF(iLocal_51))
	{
		return 1;
	}
	return 0;
}

int func_6()
{
	if (Global_25695)
	{
		func_7(4);
		return 1;
	}
	return 0;
}

void func_7(int iParam0)
{
	Global_106056 = iParam0;
}

void func_8(int iParam0)
{
	Global_16833 = iParam0;
}

int func_9()
{
	if (Global_106070.f_24967.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_10()
{
	return Global_25694;
}

void func_11()
{
	if (!unk_0x4915F4759304D5CF(iLocal_51))
	{
		if (!unk_0x4915F4759304D5CF(iLocal_52[0]) || !unk_0x4915F4759304D5CF(iLocal_52[1]))
		{
			if (!func_12())
			{
				switch (iLocal_128)
				{
					case 0:
						if (iLocal_84 < unk_0xFD34717937104F1C())
						{
							if (func_70(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_84 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(3500, 5000));
								iLocal_128++;
							}
						}
						break;
					
					case 1:
						if (iLocal_84 < unk_0xFD34717937104F1C())
						{
							if (func_70(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_84 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(3500, 5000));
								iLocal_128++;
							}
						}
						break;
					
					case 2:
						if (iLocal_84 < unk_0xFD34717937104F1C())
						{
							if (func_70(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_84 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(3500, 5000));
								iLocal_128++;
							}
						}
						break;
					
					case 3:
						if (iLocal_84 < unk_0xFD34717937104F1C())
						{
							if (func_70(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_84 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(3500, 5000));
								iLocal_128 = 0;
							}
						}
						break;
					}
				}
			}
	}
}

int func_12()
{
	if (Global_15822 != 0 || unk_0x904275961B875DEB())
	{
		return 1;
	}
	return 0;
}

void func_13()
{
	while (!func_45())
	{
		wait(0);
	}
	if (!func_6())
	{
		if (func_44() == 0)
		{
			func_41(-1199050901, 6, 1, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_44() == 1)
		{
			func_41(1082655975, 6, 2, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_44() == 2)
		{
			func_41(-2100435596, 6, 4, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
	}
	unk_0x209E9FD79CA91034(unk_0xD4E735F4B6A956AC(), 1);
	func_17(-1, 0);
	func_14();
	func_206();
}

void func_14()
{
	func_15();
}

int func_15()
{
	if (func_16(0))
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

bool func_16(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

void func_17(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_38(iParam0))
	{
		func_37(iParam0, iParam1);
		if (!func_36(51))
		{
			func_27("RE_REWARD", 1, 0, 4000, 10000, func_30(), 0, 138, 0);
			func_26(51);
		}
		if (func_25(iParam0))
		{
			Global_106070.f_24967.f_2 = 3;
		}
		if (func_24(iParam0, iParam1) != 322)
		{
			func_18(func_24(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_106058 = iParam1;
		if (Global_106056 == 0)
		{
			if (((Global_106059 == 1 || Global_106059 == 5) || Global_106059 == 11) || Global_106059 == 25)
			{
				func_7(2);
			}
			else if ((Global_106059 == 26 || Global_106059 == 8) || Global_106059 == 17)
			{
				func_7(7);
			}
			else
			{
				func_7(1);
			}
		}
	}
}

void func_18(int iParam0, var uParam1, var uParam2)
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
		func_22((891 + iParam0), 1, -1, 1);
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
		func_19();
	}
}

void func_19()
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
		func_21(13, floor(Global_106070.f_10166.f_3853));
	}
	if (!unk_0xC253B4B0BD2DE4DD())
	{
		if (!Global_71205)
		{
			if (func_20() == 2 == 0 && !unk_0x4C9BACA8D249CB13())
			{
				if (unk_0x4F3E20635369D110())
				{
					Global_105804 = 0;
				}
				if (!Global_56181)
				{
					func_15();
				}
			}
		}
	}
}

int func_20()
{
	return Global_25459;
}

int func_21(int iParam0, int iParam1)
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

int func_22(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_23();
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

int func_23()
{
	return Global_1312736;
}

int func_24(int iParam0, int iParam1)
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

int func_25(int iParam0)
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

void func_26(int iParam0)
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

void func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_28(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_28(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_29();
	}
}

void func_29()
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

int func_30()
{
	func_31();
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

void func_31()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_35(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_34(unk_0xA19140A5C42D8715());
			if (func_33(iVar0) && (!func_32(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_33(Global_106070.f_2355.f_539.f_4301))
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

bool func_32(int iParam0)
{
	return Global_36117 == iParam0;
}

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_36(int iParam0)
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

void func_37(int iParam0, int iParam1)
{
	unk_0x2BCFB39E86340DAA(&(Global_106070.f_24967.f_8[iParam0]), iParam1);
}

int func_38(int iParam0)
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

int func_39()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x61D2332983ACC05C(), 64);
	uVar1 = func_40(Var0);
	return uVar1;
}

int func_40(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	int iVar1;
	
	if (func_16(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (unk_0x05EFB6A616B6FADE(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != iParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_106070.f_7660.f_136 < 9)
	{
		Var0 = iParam0;
		if (Global_106070.f_7660.f_911 == Var0)
		{
			Global_106070.f_7660.f_911 = -1;
		}
		Var0.f_3 = func_43(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0xFD34717937104F1C() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0xFA57C719261AA55D(&(Var0.f_1), 1);
		unk_0xFA57C719261AA55D(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			unk_0x2BCFB39E86340DAA(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			unk_0x2BCFB39E86340DAA(&(Var0.f_1), 10);
		}
		Global_106070.f_7660[Global_106070.f_7660.f_136 /*15*/] = { Var0 };
		Global_106070.f_7660.f_136++;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (unk_0x05EFB6A616B6FADE(iParam2, iVar1))
			{
				func_42(iVar1);
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

void func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_33(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_106070.f_7660.f_136)
	{
		if (unk_0x05EFB6A616B6FADE(Global_106070.f_7660[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_106070.f_7660[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_106070.f_7660[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_106070.f_7660.f_764)
	{
		if (unk_0x05EFB6A616B6FADE(Global_106070.f_7660.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_106070.f_7660.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_106070.f_7660.f_919[iParam0] = iVar1;
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_44()
{
	func_31();
	return Global_106070.f_2355.f_539.f_4301;
}

int func_45()
{
	return 1;
}

void func_46()
{
	switch (iLocal_110)
	{
		case 0:
			if (!unk_0x4915F4759304D5CF(iLocal_51) && unk_0x1095F403F52B42E1(iLocal_55, 0))
			{
				if (unk_0x749F5228DEB730FF(iLocal_51))
				{
					unk_0xF8136E11BE4BEAC3(iLocal_51);
				}
				unk_0x1F4E5EFBFE503FB3(iLocal_51, false);
				unk_0x96BFF0680C7B6FD5(iLocal_51, true);
				unk_0x2F89329397A277BC(&iLocal_59);
				unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), 5000, 2048, 2);
				unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
				unk_0xA2EBCD9385E56019(0, iLocal_55, -1, 0, 1f, 1, 0);
				unk_0x301F42EEE3C40328(iLocal_59);
				unk_0xE1072FA2FECBAD96(iLocal_51, iLocal_59);
				unk_0x3A95A0A3221D4208(&iLocal_59);
				unk_0xD738221C247C8B71(iLocal_51, true);
				func_104();
				wait(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
			}
			iLocal_110++;
			break;
		
		case 1:
			if (unk_0x1095F403F52B42E1(iLocal_55, 0))
			{
				if (unk_0xE0FD180CD24C0B67(iLocal_51, iLocal_55, 0))
				{
					if (!unk_0x4915F4759304D5CF(iLocal_53))
					{
						unk_0x731722E696597BD1(iLocal_53, iLocal_54, 10f, 786599);
						unk_0xD738221C247C8B71(iLocal_53, true);
					}
					unk_0x3FB92963BD0665CB(iLocal_55, 1);
					iLocal_110++;
				}
			}
			break;
		
		case 2:
			iLocal_110++;
			break;
		
		case 3:
			iLocal_110++;
			break;
		
		case 4:
			if (!func_12())
			{
				iLocal_110++;
			}
			break;
		
		case 5:
			settimera(0);
			func_13();
			break;
	}
}

void func_47()
{
	switch (iLocal_110)
	{
		case 0:
			unk_0x80E7C4A78224C8F9(255, iLocal_137, 1862763509);
			unk_0x80E7C4A78224C8F9(255, 1862763509, iLocal_137);
			if (!unk_0x7112137033807390(unk_0xC409B91AC4749F88(), 0))
			{
				unk_0x0185AEECD1FF63F3(unk_0xC409B91AC4749F88(), 5f, 2, 0);
				if (!unk_0x4915F4759304D5CF(iLocal_51) && unk_0x1095F403F52B42E1(iLocal_55, 0))
				{
					if (unk_0x749F5228DEB730FF(iLocal_51))
					{
						unk_0xF8136E11BE4BEAC3(iLocal_51);
					}
					unk_0x1F4E5EFBFE503FB3(iLocal_51, false);
					unk_0x96BFF0680C7B6FD5(iLocal_51, true);
					unk_0x2F89329397A277BC(&iLocal_59);
					unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), 5000, 2048, 2);
					unk_0xA2EBCD9385E56019(0, iLocal_55, -1, 0, 1f, 1, 0);
					unk_0x301F42EEE3C40328(iLocal_59);
					unk_0xE1072FA2FECBAD96(iLocal_51, iLocal_59);
					unk_0x3A95A0A3221D4208(&iLocal_59);
					unk_0xD738221C247C8B71(iLocal_51, true);
					func_104();
					wait(0);
					func_70(&uLocal_138, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
				}
			}
			wait(2700);
			unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
			iLocal_110++;
			break;
		
		case 1:
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && !unk_0xE3DA5E98850626D0(unk_0xA19140A5C42D8715()))
			{
				if (!unk_0x7112137033807390(unk_0xC409B91AC4749F88(), 0))
				{
					if (!unk_0x39FC9AD10285F177(unk_0xC409B91AC4749F88(), 1))
					{
						if (unk_0xE41D5662D64E9DAF(unk_0xC409B91AC4749F88(), 1) > 0.1f)
						{
							if (func_44() == 0)
							{
								func_70(&uLocal_138, "REBU2AU", "REBU2_DOOR0", 4, 0, 0, 0);
							}
							if (func_44() == 1)
							{
								func_70(&uLocal_138, "REBU2AU", "REBU2_DOOR1", 4, 0, 0, 0);
							}
							if (func_44() == 2)
							{
								func_70(&uLocal_138, "REBU2AU", "REBU2_DOOR2", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			iLocal_110++;
			break;
		
		case 2:
			if (unk_0x1095F403F52B42E1(iLocal_55, 0))
			{
				if (unk_0xE0FD180CD24C0B67(iLocal_51, iLocal_55, 0))
				{
					if (!unk_0x4915F4759304D5CF(iLocal_53))
					{
						unk_0x731722E696597BD1(iLocal_53, iLocal_55, 10f, 786599);
						unk_0xD738221C247C8B71(iLocal_53, true);
					}
					unk_0x3FB92963BD0665CB(iLocal_55, 1);
					iLocal_110++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				bLocal_98 = true;
			}
			break;
	}
}

int func_48(bool bParam0, bool bParam1, bool bParam2)
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

int func_49()
{
	if (func_44() == 2)
	{
		if (func_10())
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

int func_50(vector3 vParam0)
{
	if (func_44() == 2)
	{
		if (func_10() && !Global_25697)
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

void func_51()
{
	if (!unk_0x4915F4759304D5CF(iLocal_51))
	{
		if ((((((func_55("REBU2_LV2_2") || func_55("REBU2_LV2_3")) || func_55("REBU2_LV2_4")) || func_55("REBU2_LV2_5")) || func_55("REBU2_LV2_6")) || func_55("REBU2_LV2_7")) || func_55("REBU2_LV2_8"))
		{
			unk_0x1701009E85B15DA4(iLocal_51, 1, 1);
			unk_0x53FF9BDD8529ACD2(iLocal_51);
		}
		if (func_55("REBU2_LV2_9") || iLocal_66 > 1)
		{
			unk_0x1701009E85B15DA4(iLocal_51, 0, 1);
		}
	}
	if (func_69() && !func_12())
	{
		if (!func_52())
		{
			func_81(1);
		}
		switch (iLocal_66)
		{
			case 0:
				func_70(&uLocal_138, "REBU2AU", "REBU2_LV2", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 1:
				iLocal_67 = unk_0xFD34717937104F1C() + 1500;
				iLocal_66++;
				break;
			
			case 2:
				if (iLocal_67 < unk_0xFD34717937104F1C())
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT0", 4, 0, 0, 0);
					iLocal_66++;
				}
				break;
			
			case 3:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT0M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT0F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT0T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 4:
				iLocal_67 = unk_0xFD34717937104F1C() + 500;
				iLocal_66++;
				break;
			
			case 5:
				if (iLocal_67 < unk_0xFD34717937104F1C())
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT1", 4, 0, 0, 0);
					iLocal_66++;
				}
				break;
			
			case 6:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT1M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT1F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT1T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 7:
				func_70(&uLocal_138, "REBU2AU", "REBU2_BANT2", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 8:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT2M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT2F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT2T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 9:
				func_70(&uLocal_138, "REBU2AU", "REBU2_BANT3", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 10:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT3M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT3F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT3T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 11:
				func_70(&uLocal_138, "REBU2AU", "REBU2_BANT4", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 12:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT4M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT4F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT4T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 13:
				func_70(&uLocal_138, "REBU2AU", "REBU2_BANT5", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 14:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT5M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT5F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT5T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 15:
				func_70(&uLocal_138, "REBU2AU", "REBU2_BANT6", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 16:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT6M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT6F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT6T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 17:
				iLocal_67 = unk_0xFD34717937104F1C() + 1000;
				iLocal_66++;
				break;
			
			case 18:
				if (iLocal_67 < unk_0xFD34717937104F1C())
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT7", 4, 0, 0, 0);
					iLocal_66++;
				}
				break;
			
			case 19:
				iLocal_67 = unk_0xFD34717937104F1C() + 2500;
				iLocal_66++;
				break;
			
			case 20:
				if (iLocal_67 < unk_0xFD34717937104F1C())
				{
					if (func_44() == 0)
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_BANT7M", 4, 0, 0, 0);
					}
					else if (func_44() == 1)
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_BANT7F", 4, 0, 0, 0);
					}
					else if (func_44() == 2)
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_BANT7T", 4, 0, 0, 0);
					}
					iLocal_66++;
				}
				break;
			}
	}
}

int func_52()
{
	if (((((((((func_53("REBU2_WV") || func_53("REBU2_UNS1")) || func_53("REBU2_UNS2")) || func_53("REBU2_CULT")) || func_53("REBU2_NEAR")) || func_53("REBU2_WRONG")) || func_53("REBU2_STOP")) || func_53("REBU2_GETOUT")) || func_53("REBU2_JACK")) || func_53("REBU2_SHOOT"))
	{
		return 1;
	}
	return 0;
}

int func_53(char* sParam0)
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_54()}, 4);
		if (unk_0x3CAC2741CC1A631F(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_54()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15822 == 4)
	{
		return Global_15441;
	}
	return Var0;
}

int func_55(char* sParam0)
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_56()}, 4);
		if (unk_0x3CAC2741CC1A631F(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_56()
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

void func_57()
{
	if (!unk_0x4915F4759304D5CF(iLocal_51))
	{
		if (!iLocal_107)
		{
			if (!unk_0x7112137033807390(unk_0xC409B91AC4749F88(), 0))
			{
				if (!unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), unk_0xC409B91AC4749F88(), 1) && unk_0xE0FD180CD24C0B67(iLocal_51, unk_0xC409B91AC4749F88(), 0))
				{
					if (!func_53("REBU2_LV2"))
					{
						func_81(0);
						func_104();
						wait(0);
						func_70(&uLocal_138, "REBU2AU", "REBU2_GETOUT", 4, 0, 0, 0);
						iLocal_107 = 1;
					}
				}
			}
		}
		else if (!unk_0x7112137033807390(unk_0xC409B91AC4749F88(), 0))
		{
			if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), unk_0xC409B91AC4749F88(), 0) && unk_0xE0FD180CD24C0B67(iLocal_51, unk_0xC409B91AC4749F88(), 0))
			{
				iLocal_107 = 0;
			}
		}
		if (!iLocal_108)
		{
			if (unk_0xBCF615B6673B73ED(unk_0xA19140A5C42D8715()))
			{
				func_81(0);
				func_104();
				wait(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_JACK", 4, 0, 0, 0);
				iLocal_108 = 1;
			}
		}
		else if (!unk_0xBCF615B6673B73ED(unk_0xA19140A5C42D8715()))
		{
			iLocal_108 = 0;
		}
		if (!iLocal_109)
		{
			if (unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715()))
			{
				func_81(0);
				func_104();
				wait(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_SHOOT", 4, 0, 0, 0);
				iLocal_109 = 1;
			}
		}
		else if (unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715()))
		{
			iLocal_109 = 0;
		}
	}
}

void func_58()
{
	if (!unk_0x4915F4759304D5CF(iLocal_51))
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
		{
			if (!func_61())
			{
				if (unk_0x749F5228DEB730FF(iLocal_51))
				{
					unk_0xF8136E11BE4BEAC3(iLocal_51);
				}
				if (unk_0xF9D4EF1338E38AFB(iLocal_51, 1227113341) != 1 && unk_0xF9D4EF1338E38AFB(iLocal_51, 1227113341) != 0)
				{
					unk_0x8F65948C5AFB744E(iLocal_51, unk_0xA19140A5C42D8715(), -1, 6f, 2f, 1073741824, 0);
				}
				if (unk_0x5D7DFE2058701942(iLocal_51, 0))
				{
					unk_0xCB482EF95FAE4D73(iLocal_51, 0, 4194304);
				}
				if (!iLocal_106)
				{
					func_81(0);
					func_104();
					wait(0);
					iLocal_106 = 1;
					if (!func_60())
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_UNS1", 4, 0, 0, 0);
					}
					else
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_UNS2", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				iLocal_106 = 0;
				if (((unk_0xF9D4EF1338E38AFB(iLocal_51, 1227113341) == 1 || unk_0xF9D4EF1338E38AFB(iLocal_51, 1227113341) == 0) || unk_0xF9D4EF1338E38AFB(iLocal_51, 242628503) == 1) || unk_0xF9D4EF1338E38AFB(iLocal_51, 242628503) == 0)
				{
					unk_0x9568B1B58F78FF36(iLocal_51);
				}
			}
		}
		else if (((!unk_0x749F5228DEB730FF(iLocal_51) && !unk_0x5D7DFE2058701942(iLocal_51, 0)) && unk_0xF9D4EF1338E38AFB(iLocal_51, 242628503) != 1) && unk_0xF9D4EF1338E38AFB(iLocal_51, 242628503) != 0)
		{
			unk_0x9854E4DB9C72017F(iLocal_51, func_59());
			unk_0xC860991D1C5AD4F0(iLocal_51, 1);
			unk_0x9EA5DDDDB1899B3B(iLocal_51, 0);
		}
	}
}

int func_59()
{
	return unk_0x64C831B843E08AC9(unk_0xA6580F898F4E801C());
}

int func_60()
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

int func_61()
{
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		if (unk_0x1095F403F52B42E1(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 0))
		{
			if (((((!unk_0x5BFF0F72CC04E4DA(unk_0xA19140A5C42D8715()) && !unk_0xA22CC9D85ECBCC81(unk_0xA19140A5C42D8715())) && !unk_0x5BEFAE930E36AE54(unk_0xA19140A5C42D8715())) && !unk_0xE13F2DC045CFCEA3(unk_0xA19140A5C42D8715())) && !unk_0xC64BD920A5A82BC0(unk_0xA19140A5C42D8715())) && !unk_0x52BDE3D9BF787D4C(unk_0xA19140A5C42D8715(), joaat("rhino")))
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
			if ((((!unk_0x7C197233F79C2CB8(unk_0x8F474E419F56E48D(unk_0xDF069A8A4CCE674E(unk_0xA19140A5C42D8715()))) && !unk_0xCA8C103FCD316F89(unk_0x8F474E419F56E48D(unk_0xDF069A8A4CCE674E(unk_0xA19140A5C42D8715())))) && !unk_0x71852D4EBD08275F(unk_0x8F474E419F56E48D(unk_0xDF069A8A4CCE674E(unk_0xA19140A5C42D8715())))) && !unk_0x289FBFAD3E416C48(unk_0x8F474E419F56E48D(unk_0xDF069A8A4CCE674E(unk_0xA19140A5C42D8715())))) && unk_0x8F474E419F56E48D(unk_0xDF069A8A4CCE674E(unk_0xA19140A5C42D8715())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_62()
{
	if (!unk_0x4915F4759304D5CF(iLocal_51))
	{
		if (unk_0x2206F47E5C82D52C(iLocal_51))
		{
			if (!iLocal_130)
			{
				iLocal_131 = unk_0xFD34717937104F1C();
				iLocal_130 = 1;
			}
			else
			{
				iLocal_132 = unk_0xFD34717937104F1C();
			}
		}
		else
		{
			iLocal_130 = 0;
		}
	}
	if ((iLocal_132 - iLocal_131) > 180000)
	{
		if (!unk_0x4915F4759304D5CF(iLocal_51))
		{
			if (unk_0x749F5228DEB730FF(iLocal_51))
			{
				unk_0xF8136E11BE4BEAC3(iLocal_51);
				if (unk_0xA60C975CBAB69F34(iLocal_51, vLocal_113, 100f, 100f, 100f, false, true, 0))
				{
					unk_0x956B3CF461C0C1C9(iLocal_51, 1740.797f, 4648.756f, 42.6529f, 1f, -1, 1048576000, 0, 1193033728);
					unk_0xD738221C247C8B71(iLocal_51, true);
				}
				func_104();
				wait(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_WK", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_63()
{
	if (unk_0x9661F58DC617631D(unk_0xA19140A5C42D8715()))
	{
		if (!iLocal_133)
		{
			iLocal_134 = unk_0xFD34717937104F1C();
			iLocal_133 = 1;
		}
		else
		{
			iLocal_135 = unk_0xFD34717937104F1C();
		}
	}
	else
	{
		iLocal_133 = 0;
	}
	if ((iLocal_135 - iLocal_134) > 120000)
	{
		if (!unk_0x4915F4759304D5CF(iLocal_51))
		{
			if (unk_0x749F5228DEB730FF(iLocal_51))
			{
				unk_0xF8136E11BE4BEAC3(iLocal_51);
				if (unk_0xA60C975CBAB69F34(iLocal_51, vLocal_113, 100f, 100f, 100f, false, true, 0))
				{
					unk_0x956B3CF461C0C1C9(iLocal_51, vLocal_113, 1f, -1, 1048576000, 0, 1193033728);
					unk_0xD738221C247C8B71(iLocal_51, true);
				}
				else
				{
					unk_0xCB482EF95FAE4D73(iLocal_51, 0, 4194304);
				}
				func_104();
				wait(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_QM", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_64()
{
	if (!unk_0x4915F4759304D5CF(iLocal_51))
	{
		if (unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_51, 8f, 8f, 8f, 0, 1, 0) || unk_0xDB6C89A68AC7B303(unk_0xA19140A5C42D8715()))
		{
			if ((unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && !unk_0xE0FD180CD24C0B67(iLocal_51, unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 0)) && !unk_0xDB6C89A68AC7B303(unk_0xA19140A5C42D8715()))
			{
				if (!unk_0xCE3CB618AFE55EFB(iLocal_88))
				{
					iLocal_88 = func_67(iLocal_51, 0, 145);
				}
				if (unk_0xCE3CB618AFE55EFB(iLocal_111))
				{
					unk_0xE1623437A3194332(&iLocal_111);
				}
			}
			else
			{
				if (!unk_0x2206F47E5C82D52C(unk_0xA19140A5C42D8715()))
				{
					if (unk_0xCE3CB618AFE55EFB(iLocal_88))
					{
						unk_0xE1623437A3194332(&iLocal_88);
					}
				}
				if (!unk_0xCE3CB618AFE55EFB(iLocal_111))
				{
					iLocal_111 = func_65(vLocal_113, 1);
				}
			}
		}
		else if (!unk_0xCE3CB618AFE55EFB(iLocal_88))
		{
			iLocal_88 = func_67(iLocal_51, 0, 145);
		}
		if (!unk_0x749F5228DEB730FF(iLocal_51))
		{
			if (!unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_51, 8f, 8f, 8f, 0, 1, 0))
			{
				unk_0x9568B1B58F78FF36(iLocal_51);
				unk_0x9854E4DB9C72017F(iLocal_51, func_59());
				unk_0xC860991D1C5AD4F0(iLocal_51, 1);
				unk_0x9EA5DDDDB1899B3B(iLocal_51, 0);
			}
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
			{
				unk_0x9568B1B58F78FF36(iLocal_51);
				unk_0x9854E4DB9C72017F(iLocal_51, func_59());
				unk_0xC860991D1C5AD4F0(iLocal_51, 1);
				unk_0x9EA5DDDDB1899B3B(iLocal_51, 0);
			}
		}
		if (!unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_51, 150f, 150f, 150f, 0, 1, 0))
		{
			func_4();
		}
	}
}

int func_65(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xA70969818F182A36(vParam0);
	unk_0x575CF00E129E0CE1(iVar0, func_66(unk_0x4C9BACA8D249CB13(), 1f, 1f));
	unk_0x3E46F0AAE4B470FB(iVar0, bParam1);
	return iVar0;
}

float func_66(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_67(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_68(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xCE3CB618AFE55EFB(iVar0)) && unk_0x445EC9E7EACB710E(&(Global_106070.f_28022[iParam2 /*29*/].f_3)))
	{
		unk_0xC4F12E446CCE89F5(iVar0, &(Global_106070.f_28022[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_68(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x6A15DD6A863D5E27(iParam0);
	if (unk_0xFAC06EE780B57279(iParam0))
	{
		unk_0x575CF00E129E0CE1(iVar0, func_66(unk_0x4C9BACA8D249CB13(), 1f, 1f));
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
		unk_0x575CF00E129E0CE1(iVar0, func_66(unk_0x4C9BACA8D249CB13(), 0.7f, 0.7f));
		unk_0xF46EDCACB3804F87(iVar0, bParam1);
	}
	else if (unk_0x92D42293DA8F9805(iParam0))
	{
		unk_0x575CF00E129E0CE1(iVar0, func_66(unk_0x4C9BACA8D249CB13(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_69()
{
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		iLocal_129 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
		if (unk_0x1095F403F52B42E1(iLocal_129, 0))
		{
			if (!unk_0x4915F4759304D5CF(iLocal_51))
			{
				if (unk_0xB10F7FE89663CB5B(iLocal_51, iLocal_129))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_70(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_80(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_71(sParam2, iParam3, 0);
}

int func_71(char* sParam0, int iParam1, bool bParam2)
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
					func_79();
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
		if (func_78(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_77();
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
				func_76();
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
				if (func_75())
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
			if (func_74())
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
			func_73();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_72();
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
		func_79();
	}
	return 0;
}

void func_72()
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

void func_73()
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

int func_74()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_75()
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

void func_76()
{
	if (func_32(14))
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
		Global_14513 = func_44();
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

void func_77()
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

bool func_78(int iParam0, int iParam1)
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

void func_79()
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

void func_80(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_81(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_119)
		{
			if (!unk_0x429D45A6C6520026(&Local_121))
			{
				if (func_84(&uLocal_138, "REBU2AU", &Local_121, &Local_120, 8, 0, 0))
				{
					iLocal_119 = 0;
				}
			}
			else
			{
				iLocal_119 = 0;
			}
		}
	}
	else if ((!iLocal_119 && func_12()) && !func_52())
	{
		Local_121 = { func_54() };
		Local_120 = { func_56() };
		func_82();
		iLocal_119 = 1;
	}
}

void func_82()
{
	Global_14688 = 0;
	func_83();
}

void func_83()
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

bool func_84(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_80(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_71(sParam2, iParam4, 0);
}

void func_85()
{
	if (unk_0xDC5D81351D6A4DDB(iLocal_51))
	{
		if (!unk_0x4915F4759304D5CF(iLocal_51))
		{
			unk_0xB0D7019224A3A443(iLocal_51, 394, true);
		}
		if (unk_0xDEAEC99031DCB92A(iLocal_51, unk_0xA19140A5C42D8715(), 1))
		{
			if (!unk_0x4915F4759304D5CF(iLocal_51))
			{
				unk_0x33B5487515BD13D5(iLocal_51, unk_0xA19140A5C42D8715(), 150f, -1, 0, 0);
				unk_0xD738221C247C8B71(iLocal_51, true);
			}
			if (!unk_0x4915F4759304D5CF(iLocal_53))
			{
				unk_0x80E7C4A78224C8F9(5, iLocal_137, 1862763509);
				unk_0xDA4D3941AFF8EF12(iLocal_53, unk_0xA19140A5C42D8715(), 0, 16);
				unk_0xD738221C247C8B71(iLocal_53, true);
			}
			func_104();
			wait(0);
			func_70(&uLocal_138, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_49 = 4;
		}
		if (unk_0xDC5D81351D6A4DDB(iLocal_53))
		{
			if (unk_0xDEAEC99031DCB92A(iLocal_53, unk_0xA19140A5C42D8715(), 1))
			{
				if (!unk_0x4915F4759304D5CF(iLocal_51))
				{
					unk_0x33B5487515BD13D5(iLocal_51, unk_0xA19140A5C42D8715(), 150f, -1, 0, 0);
					unk_0xD738221C247C8B71(iLocal_51, true);
				}
				if (!unk_0x4915F4759304D5CF(iLocal_53))
				{
					unk_0x80E7C4A78224C8F9(5, iLocal_137, 1862763509);
					unk_0xDA4D3941AFF8EF12(iLocal_53, unk_0xA19140A5C42D8715(), 0, 16);
					unk_0xD738221C247C8B71(iLocal_53, true);
				}
				func_104();
				wait(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
				func_4();
				iLocal_49 = 4;
			}
		}
	}
	if (!unk_0x4915F4759304D5CF(iLocal_51))
	{
		if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 1)
		{
			unk_0x33B5487515BD13D5(iLocal_51, unk_0xA19140A5C42D8715(), 150f, -1, 0, 0);
			unk_0xD738221C247C8B71(iLocal_51, true);
			func_104();
			wait(0);
			func_70(&uLocal_138, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_49 = 4;
		}
	}
}

void func_86()
{
	int iVar0;
	
	if (!unk_0x4915F4759304D5CF(iLocal_51))
	{
		if ((unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_51, 1.2f, 1.2f, 5f, 0, 1, 0) && unk_0x2206F47E5C82D52C(unk_0xA19140A5C42D8715())) && !unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715()))
		{
			if (func_48(1, 0, 1))
			{
				bLocal_104 = true;
				if (!iLocal_89)
				{
					func_93(1, 1, 1, 0, 0);
					unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 24);
					unk_0x135C61E339DABBAC(1);
					unk_0x85685830EFB9A55E(false);
					unk_0xDC374DA4DC566237(false);
					unk_0x065673561216B3C6(unk_0xA19140A5C42D8715(), true);
					if (unk_0xDC5D81351D6A4DDB(unk_0xC409B91AC4749F88()))
					{
						unk_0x1F7948851FB36E88(unk_0xC409B91AC4749F88(), true, 0);
						if (unk_0x463E3A48A46C9195(unk_0xC409B91AC4749F88()))
						{
							func_92(unk_0xC409B91AC4749F88());
							unk_0x70B1045E099298C1(unk_0xC409B91AC4749F88(), 200f);
						}
						if (unk_0x10E54C268D1B3FED(unk_0xC409B91AC4749F88(), iLocal_51, 5f, 5f, 5f, 0, 1, 0) || unk_0xA60C975CBAB69F34(unk_0xC409B91AC4749F88(), vLocal_74, 5f, 5f, 5f, false, true, 0))
						{
							unk_0x4299736016AECE26(unk_0xC409B91AC4749F88(), unk_0xE2BBD32891C18569(iLocal_51, true) - Vector(0f, 3f, 5f), 0, false, 0, 1);
							if (!unk_0x7112137033807390(unk_0xC409B91AC4749F88(), 0))
							{
								unk_0x99F546A9200EA026(unk_0xC409B91AC4749F88(), 1084227584);
							}
						}
					}
					if (unk_0xDC5D81351D6A4DDB(iLocal_54))
					{
						if (unk_0x463E3A48A46C9195(iLocal_54))
						{
							func_92(iLocal_54);
							unk_0x70B1045E099298C1(iLocal_54, 200f);
						}
						if (unk_0x10E54C268D1B3FED(iLocal_54, iLocal_51, 8f, 8f, 8f, 0, 1, 0))
						{
							unk_0x4299736016AECE26(iLocal_54, vLocal_74, 0, false, 0, 1);
							if (!unk_0x7112137033807390(iLocal_54, 0))
							{
								unk_0x99F546A9200EA026(iLocal_54, 1084227584);
							}
						}
					}
					if (!unk_0x4915F4759304D5CF(iLocal_51))
					{
						iLocal_129 = unk_0xEB67B4270D12F60E(unk_0xE2BBD32891C18569(iLocal_51, true), 5f, 0, 2);
						if (!unk_0x7112137033807390(iLocal_129, 0))
						{
							if (unk_0x463E3A48A46C9195(iLocal_129))
							{
								func_92(iLocal_129);
								unk_0x70B1045E099298C1(iLocal_129, 200f);
							}
							unk_0x4299736016AECE26(iLocal_129, unk_0xE2BBD32891C18569(iLocal_51, true) + Vector(0f, 5f, 5f), 1, false, 0, 1);
						}
					}
					unk_0x341AA026B031328A(vLocal_72, 10f);
					unk_0x9827D9AC8985F888(vLocal_72, 10f, 0);
					unk_0x01AF8CB960828C2B(vLocal_72, 4.5f, 0, 0, 0, 0, false, 0);
					unk_0x4299736016AECE26(iLocal_51, vLocal_72, 1, false, 0, 1);
					unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), vLocal_72, 1, false, 0, 1);
					if (!unk_0x4915F4759304D5CF(iLocal_51))
					{
					}
					iVar0 = 0;
					while (iVar0 < iLocal_52)
					{
						if (unk_0xDC5D81351D6A4DDB(iLocal_52[iVar0]))
						{
							if (unk_0xA60C975CBAB69F34(iLocal_52[iVar0], unk_0xE2BBD32891C18569(iLocal_51, false), 1.5f, 1.5f, 1.5f, false, true, 0))
							{
								unk_0x680F17660351F21B(&(iLocal_52[iVar0]));
							}
						}
						iVar0++;
					}
					if (!unk_0x4915F4759304D5CF(iLocal_51))
					{
						iLocal_303 = unk_0x70788DC3D80C9DEB(163.449f, 6839.993f, 18.88f, 0f, 0f, 0f, 2);
						iLocal_71 = unk_0x57FC10C74CC15F22("DEFAULT_ANIMATED_CAMERA", false);
						unk_0xF84EE501E63C86CF(iLocal_71, iLocal_303, "untie_cam", "random@burial");
						unk_0x836A6A722DEA63F1(unk_0xA19140A5C42D8715());
						unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 162.6699f, 6839.238f, 18.8314f, 0, false, 0, 1);
						unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 18.2311f);
						unk_0x6259CDB47862A4F3(iLocal_51, 200, 0);
						unk_0x31BE5698CEB2831B(iLocal_51, 0);
						unk_0x92C40FD8A8A4ACAC(iLocal_51, 0);
						unk_0x836A6A722DEA63F1(iLocal_51);
						unk_0xE5565DEAABF9D588(iLocal_51, iLocal_303, "random@burial", "untie_ped", 1000f, -1000f, 4, 0, 1148846080, 0);
						unk_0x3A3E4B7C6FBE305D(iLocal_51, 0, 0);
						unk_0xE5565DEAABF9D588(unk_0xA19140A5C42D8715(), iLocal_303, "random@burial", "untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0x3A3E4B7C6FBE305D(unk_0xA19140A5C42D8715(), 0, 0);
						unk_0x341C49A9159E80FB(iLocal_57[0], iLocal_303, "untie_legstie", "random@burial", 1000f, -1000f, 0, 1148846080);
						unk_0x341C49A9159E80FB(iLocal_57[1], iLocal_303, "untie_wristtie", "random@burial", 1000f, -1000f, 0, 1148846080);
						unk_0x930701157A4B9374(iLocal_71, true);
						unk_0x8E88E73F74A9FF79(true, false, 3000, 1, 0, 0);
						iLocal_94 = unk_0xFD34717937104F1C();
						iLocal_89 = 1;
					}
				}
			}
		}
	}
	if (iLocal_89 && !iLocal_91)
	{
		unk_0x74BF5F6EEF62D5A9();
		if (unk_0xFE5DE0C3200E00F2(iLocal_303))
		{
			if ((unk_0x33CECDD9E141E18E(iLocal_303) > 0.115f && unk_0x33CECDD9E141E18E(iLocal_303) < 0.12f) || (unk_0x33CECDD9E141E18E(iLocal_303) > 0.355f && unk_0x33CECDD9E141E18E(iLocal_303) < 0.36f))
			{
				unk_0xE11F00B4AC919F45(-1, "ROPE_CUT", "ROPE_CUT_SOUNDSET", true);
			}
			if (unk_0x33CECDD9E141E18E(iLocal_303) > 0.6f)
			{
				if (!iLocal_90)
				{
					func_104();
					wait(0);
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_UNT", 4, 0, 0, 0))
					{
						iLocal_90 = 1;
					}
				}
			}
		}
		iLocal_93 = unk_0xFD34717937104F1C();
		if (((iLocal_93 - iLocal_94) > 9700 && !iLocal_97) && unk_0x06EBD57CD6085DD1() == 4)
		{
			unk_0xE60B9F9B48D4783F("CamPushInNeutral", 0, 0);
			unk_0xE11F00B4AC919F45(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
			iLocal_97 = 1;
		}
		if ((iLocal_93 - iLocal_94) > 10000)
		{
			iLocal_91 = 1;
		}
		if (func_90(1000))
		{
			func_104();
			unk_0x9662BE461F9FDF9E(800);
			while (unk_0x607776744A243309())
			{
				wait(0);
			}
			iLocal_91 = 1;
			bLocal_92 = true;
		}
	}
	if (iLocal_91 && !bLocal_96)
	{
		unk_0x85685830EFB9A55E(true);
		unk_0xDC374DA4DC566237(true);
		unk_0x71ABFE3795D5D0C2(iLocal_303, 1f);
		unk_0x836A6A722DEA63F1(unk_0xA19140A5C42D8715());
		unk_0x3A3E4B7C6FBE305D(unk_0xA19140A5C42D8715(), 0, 0);
		unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 162.5284f, 6839.658f, 18.8198f, 1, false, 0, 1);
		unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), 256.7693f);
		if (!unk_0x4915F4759304D5CF(iLocal_51))
		{
			unk_0x836A6A722DEA63F1(iLocal_51);
			unk_0x3A3E4B7C6FBE305D(iLocal_51, 0, 0);
			unk_0x2D2E827C6C3D6D26(iLocal_51, 1);
			unk_0x4299736016AECE26(iLocal_51, 164.4963f, 6839.333f, 18.9657f, 1, false, 0, 1);
			unk_0x92DDCF53AA47A63D(iLocal_51, 73.449f);
		}
		unk_0xD87B76260C547F31(26.1578f);
		unk_0xAA32DD4848CF93E0(-8.1198f, 1065353216);
		unk_0x930701157A4B9374(iLocal_71, false);
		unk_0x8E88E73F74A9FF79(false, false, 3000, 1, 0, 0);
		unk_0x77F0486CE0E598D5(iLocal_71, 0);
		unk_0x065673561216B3C6(unk_0xA19140A5C42D8715(), false);
		if (bLocal_92)
		{
			unk_0x70C1F5AA59767FE6(800);
			while (unk_0x3BE8B7AEED1A3971())
			{
				wait(0);
			}
		}
		bLocal_96 = true;
	}
	if (!unk_0x4915F4759304D5CF(iLocal_51))
	{
		if (bLocal_96)
		{
			if (!iLocal_95)
			{
				if (!func_12())
				{
					if (func_44() == 0)
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_HM0", 4, 0, 0, 0);
					}
					if (func_44() == 1)
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_HM1", 4, 0, 0, 0);
					}
					if (func_44() == 2)
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_HM2", 4, 0, 0, 0);
					}
					unk_0x80E7C4A78224C8F9(1, iLocal_137, 1862763509);
					unk_0x80E7C4A78224C8F9(1, 1862763509, iLocal_137);
					unk_0x2F89329397A277BC(&iLocal_59);
					unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 2048, 2);
					unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 4000);
					if (unk_0x1095F403F52B42E1(unk_0xC409B91AC4749F88(), 0))
					{
						if (unk_0x10E54C268D1B3FED(iLocal_51, unk_0xC409B91AC4749F88(), 20f, 20f, 20f, 0, 1, 0) && unk_0xD63FAD81FAF5E0CB(unk_0xC409B91AC4749F88()) > 0)
						{
							unk_0xA2EBCD9385E56019(0, unk_0xC409B91AC4749F88(), -1, 0, 1f, 1, 0);
						}
						else if (!unk_0x749F5228DEB730FF(iLocal_51))
						{
							unk_0x9854E4DB9C72017F(iLocal_51, func_59());
							unk_0xC860991D1C5AD4F0(iLocal_51, 1);
							unk_0x9EA5DDDDB1899B3B(iLocal_51, 0);
						}
					}
					else if (!unk_0x749F5228DEB730FF(iLocal_51))
					{
						unk_0x9854E4DB9C72017F(iLocal_51, func_59());
						unk_0xC860991D1C5AD4F0(iLocal_51, 1);
						unk_0x9EA5DDDDB1899B3B(iLocal_51, 0);
					}
					unk_0x301F42EEE3C40328(iLocal_59);
					unk_0xE1072FA2FECBAD96(iLocal_51, iLocal_59);
					unk_0x3A95A0A3221D4208(&iLocal_59);
					if (unk_0xCE3CB618AFE55EFB(iLocal_88))
					{
						unk_0xE1623437A3194332(&iLocal_88);
					}
					if (!unk_0xCE3CB618AFE55EFB(iLocal_111))
					{
						iLocal_111 = func_65(vLocal_113, 1);
					}
					if (func_44() == 2 && !func_9())
					{
						if (!unk_0xCE3CB618AFE55EFB(iLocal_112))
						{
							iLocal_112 = func_65(vLocal_114, 0);
							unk_0x7DB79A42AADE120F(iLocal_112, 269);
							func_88();
						}
					}
					func_87();
					iLocal_105 = 1;
					iLocal_95 = 1;
					settimera(0);
					unk_0xF54514EACB543898(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 0);
					unk_0x413F34FCFABEDE4B(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, false, 1);
					func_93(0, 1, 1, 0, 0);
					unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 4);
					unk_0xDCB46BFC2265476A(unk_0xA19140A5C42D8715());
					iLocal_47 = 4;
				}
			}
		}
	}
}

void func_87()
{
	if (!func_9())
	{
		if (func_44() == 2)
		{
			Global_25694 = 1;
		}
	}
}

void func_88()
{
	if (func_44() == 2)
	{
		if (!Global_25696)
		{
			func_89("CULT_BLIP_HELP", -1);
			Global_25696 = 1;
		}
	}
}

void func_89(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, true, iParam1);
}

int func_90(int iParam0)
{
	if (unk_0x3A83743561B4F70C())
	{
		if ((unk_0xFD34717937104F1C() - Global_28) > iParam0)
		{
			Global_27 = unk_0xFD34717937104F1C();
		}
		Global_28 = unk_0xFD34717937104F1C();
		if ((unk_0xFD34717937104F1C() - Global_27) > iParam0)
		{
			if (func_91())
			{
				Global_27 = unk_0xFD34717937104F1C();
				return 1;
			}
		}
	}
	return 0;
}

int func_91()
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

void func_92(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (!unk_0x7112137033807390(iParam0, 0))
		{
			if (unk_0x463E3A48A46C9195(iParam0))
			{
				unk_0xA0DD3F6A83C651FC(iParam0);
				unk_0x6259CDB47862A4F3(iParam0, unk_0x24A1A7BF4ED94B71(iParam0) + 200, 0);
				unk_0x70B1045E099298C1(iParam0, (unk_0x2F78D19B3446544E(iParam0) + 200f));
				unk_0xD27FC0157E8C1AD1(iParam0, (unk_0xC9396A3FD9FCE75E(iParam0) + 200f));
				unk_0x341AA026B031328A(unk_0xE2BBD32891C18569(iParam0, true), 5f);
				unk_0xFDD15D670AD33E10(unk_0xE2BBD32891C18569(iParam0, true), 2.5f, 1, 0, 0, false);
			}
		}
	}
}

void func_93(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		unk_0xC97ACA9456A064F3(unk_0xD4E735F4B6A956AC());
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 1);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 1);
		func_100(1);
		unk_0x158181F81A221D70();
		unk_0xD8EA6395AE60BF4A();
		if (Global_14513.f_1 > 3)
		{
			if (unk_0xB39808C1DCE0DCFA())
			{
				unk_0xA8B97F91CBDE376C(false);
			}
			if (!func_74())
			{
				Global_14513.f_1 = 3;
			}
			Global_15822 = 5;
		}
		func_99(1, iParam3, iParam2, 0);
		Global_56187 = 1;
		Global_68497 = 1;
		Global_71203 = 1;
	}
	else
	{
		func_100(0);
		unk_0x21727E2C492FE1B3();
		Global_56187 = 0;
		if (bParam1)
		{
			unk_0x1A81FD78261DCFCD();
		}
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 0);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 0);
		func_99(0, iParam3, iParam2, 0);
		if (unk_0x4C9BACA8D249CB13())
		{
			if ((((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_97(unk_0xD4E735F4B6A956AC())) && !func_95(unk_0xD4E735F4B6A956AC(), 0)) && !func_94()) && !bParam4)
			{
				unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), false);
			}
		}
		else if ((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_97(unk_0xD4E735F4B6A956AC())) && !bParam4)
		{
			unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), false);
		}
		Global_71203 = 0;
	}
}

bool func_94()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 14);
}

bool func_95(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_96(-1, 0) == 8;
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

int func_96(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_23();
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

int func_97(int iParam0)
{
	if (func_95(iParam0, 0))
	{
		return 1;
	}
	if (func_98())
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

bool func_98()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

int func_99(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_100(int iParam0)
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

void func_101()
{
	if (!unk_0x7112137033807390(iLocal_51, 0))
	{
		switch (iLocal_128)
		{
			case 0:
				if (iLocal_84 < unk_0xFD34717937104F1C())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(4000, 5500));
						iLocal_128++;
					}
				}
				break;
			
			case 1:
				if (iLocal_84 < unk_0xFD34717937104F1C())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(4000, 5500));
						iLocal_128++;
					}
				}
				break;
			
			case 2:
				if (iLocal_84 < unk_0xFD34717937104F1C())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(4000, 5500));
						iLocal_128++;
					}
				}
				break;
			
			case 3:
				if (iLocal_84 < unk_0xFD34717937104F1C())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(4000, 5500));
						iLocal_128 = 0;
					}
				}
				break;
			}
	}
}

void func_102(int iParam0, char* sParam1, int iParam2)
{
	unk_0xE85BD4A26C0DFACA(iParam0, sParam1, func_103(iParam2), 1);
}

int func_103(int iParam0)
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

void func_104()
{
	Global_14688 = 0;
	func_105();
}

void func_105()
{
	unk_0xB4E5B1A6FE923ECB();
	Global_16833 = 0;
	if (unk_0x904275961B875DEB())
	{
		unk_0xA8B97F91CBDE376C(false);
		Global_15822 = 6;
	}
}

void func_106()
{
	if (!iLocal_61 && unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_85, 30f, 30f, 30f, false, true, 0))
	{
		if (!unk_0x4915F4759304D5CF(iLocal_52[1]))
		{
			if (func_70(&uLocal_138, "REBU2AU", "REBU2_ATVF", 4, 0, 0, 0))
			{
				iLocal_61 = 1;
			}
		}
	}
	if (unk_0x1095F403F52B42E1(iLocal_54, 0))
	{
		if (!unk_0x4915F4759304D5CF(iLocal_52[0]))
		{
			unk_0x5175E271E03B40D8(iLocal_52[0], iLocal_54, unk_0xA19140A5C42D8715(), 8, 30f, 262144, -1f, 10f, 1);
			unk_0xD738221C247C8B71(iLocal_52[0], true);
		}
		if (!unk_0x4915F4759304D5CF(iLocal_52[1]))
		{
			unk_0xA2EBCD9385E56019(iLocal_52[1], iLocal_54, -1, 0, 3f, 1, 0);
			unk_0xD738221C247C8B71(iLocal_52[1], true);
		}
	}
	else
	{
		iLocal_58 = 0;
		while (iLocal_58 <= 1)
		{
			if (!unk_0x4915F4759304D5CF(iLocal_52[iLocal_58]))
			{
				unk_0x33B5487515BD13D5(iLocal_52[iLocal_58], unk_0xA19140A5C42D8715(), 250f, -1, 0, 0);
				unk_0xD738221C247C8B71(iLocal_52[iLocal_58], true);
			}
			iLocal_58++;
		}
	}
	wait(0);
	func_4();
}

void func_107()
{
	if (!unk_0x4915F4759304D5CF(iLocal_52[0]) && !unk_0x4915F4759304D5CF(iLocal_52[1]))
	{
		if (!unk_0x80C8B831B972D6A0(iLocal_52[0]) && !unk_0x80C8B831B972D6A0(iLocal_52[1]))
		{
			if (func_70(&uLocal_138, "REBU2AU", "REBU2_VH", 4, 0, 0, 0))
			{
				if (!unk_0x41CA0CDBE31A440F(iLocal_52[1]))
				{
					unk_0x9568B1B58F78FF36(iLocal_52[1]);
					unk_0xC2BB1787159395F9(iLocal_52[1], unk_0xA19140A5C42D8715(), -1, -957453492);
				}
			}
		}
	}
	iLocal_47 = 7;
}

void func_108()
{
	float fVar0;
	
	if (!unk_0x4915F4759304D5CF(iLocal_52[0]) && !unk_0x4915F4759304D5CF(iLocal_52[1]))
	{
		if (!iLocal_63)
		{
			if (!iLocal_62)
			{
				unk_0x2F89329397A277BC(&iLocal_59);
				unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 2048, 2);
				unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
				unk_0x301F42EEE3C40328(iLocal_59);
				unk_0xE1072FA2FECBAD96(iLocal_52[1], iLocal_59);
				unk_0x3A95A0A3221D4208(&iLocal_59);
				iLocal_62 = 1;
			}
			if (unk_0xC42DE41AEED00E7B(iLocal_52[1], unk_0xA19140A5C42D8715(), 90f))
			{
				func_104();
				wait(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_GUY", 4, 0, 0, 0);
				if (!unk_0x4915F4759304D5CF(iLocal_52[0]) && !unk_0x4915F4759304D5CF(iLocal_52[1]))
				{
					fVar0 = func_110(iLocal_52[0], unk_0xA19140A5C42D8715(), 1);
					if (fVar0 > 5f)
					{
						fVar0 = (fVar0 - 2f);
					}
					else
					{
						fVar0 = (fVar0 - 0.5f);
					}
					unk_0xF334C9B245CD323D(iLocal_56, 0, true);
					unk_0x96B71B23D409A3DB(iLocal_56, iLocal_52[0], unk_0xF622A022C26057AA(iLocal_52[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					unk_0x9568B1B58F78FF36(iLocal_52[0]);
					unk_0x2F89329397A277BC(&iLocal_59);
					unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 2048, 2);
					unk_0x3F01127ECD227890(0, "random@burial", "a_burial_stop", 8f, -4f, 2000, 0, 0, 0, 0, 0);
					unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
					unk_0x301F42EEE3C40328(iLocal_59);
					unk_0xE1072FA2FECBAD96(iLocal_52[0], iLocal_59);
					unk_0x3A95A0A3221D4208(&iLocal_59);
					unk_0xB20B772FD9DE1847(iLocal_52[1], joaat("weapon_sawnoffshotgun"), true);
					unk_0x9568B1B58F78FF36(iLocal_52[1]);
					unk_0x2F89329397A277BC(&iLocal_59);
					unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 2048, 2);
					unk_0x8F65948C5AFB744E(0, unk_0xA19140A5C42D8715(), -1, fVar0, 1f, 1073741824, 0);
					unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
					unk_0x301F42EEE3C40328(iLocal_59);
					unk_0xE1072FA2FECBAD96(iLocal_52[1], iLocal_59);
					unk_0x3A95A0A3221D4208(&iLocal_59);
					iLocal_63 = 1;
				}
			}
		}
		if (unk_0xDC5D81351D6A4DDB(iLocal_56))
		{
			if (unk_0xF797E4DD45066C88(iLocal_56))
			{
				if (unk_0x411C28019DEA5CEF(iLocal_52[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0xE5B5A1FFAA0834BD(iLocal_52[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						unk_0xF334C9B245CD323D(iLocal_56, 1, true);
					}
				}
			}
		}
		if (iLocal_63 && !iLocal_125)
		{
			if (func_70(&uLocal_138, "REBU2AU", "REBU2_WHO", 4, 0, 0, 0))
			{
				unk_0x2F89329397A277BC(&iLocal_59);
				unk_0x9295936F52859375(0, unk_0xA19140A5C42D8715(), unk_0xA19140A5C42D8715(), 1f, 0, 3.5f, 1082130432, 1, 0, -957453492);
				unk_0x9C24BCD3EFB3BF4C(0, unk_0xA19140A5C42D8715(), -1, 0);
				unk_0x301F42EEE3C40328(iLocal_59);
				unk_0xE1072FA2FECBAD96(iLocal_52[1], iLocal_59);
				unk_0x3A95A0A3221D4208(&iLocal_59);
				unk_0x9444470D6D9ADB88("RE6_START");
				iLocal_125 = 1;
			}
		}
		if (iLocal_125 && !iLocal_126)
		{
			if (func_70(&uLocal_138, "REBU2AU", "REBU2_WAR", 4, 0, 0, 0))
			{
				if (unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_52[0], 30f, 30f, 30f, 0, 1, 0) && unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_52[1], 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0x9C24BCD3EFB3BF4C(iLocal_52[0], unk_0xA19140A5C42D8715(), -1, 0);
				}
				iLocal_126 = 1;
				settimerb(0);
			}
		}
		if (iLocal_126 && !bLocal_127)
		{
			if (timerb() > 15000 && !func_12())
			{
				if (unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_52[0], 30f, 30f, 30f, 0, 1, 0) && unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_52[1], 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0x0177431263151C4E(iLocal_52[0], unk_0xA19140A5C42D8715(), 0);
					unk_0x0177431263151C4E(iLocal_52[1], unk_0xA19140A5C42D8715(), 0);
					func_70(&uLocal_138, "REBU2AU", "REBU2_SHO", 4, 0, 0, 0);
					bLocal_127 = true;
				}
			}
		}
		if (((!iLocal_64 && iLocal_125) && !unk_0x4915F4759304D5CF(iLocal_52[0])) && !unk_0x4915F4759304D5CF(iLocal_52[1]))
		{
			if (unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_52[0], 30f, 30f, 30f, 0, 1, 0) && unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_52[1], 30f, 30f, 30f, 0, 1, 0))
			{
				if (!func_12())
				{
					if (func_109())
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_FO", 4, 0, 0, 0);
					}
					else
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				unk_0x2F89329397A277BC(&iLocal_59);
				unk_0x8F65948C5AFB744E(0, iLocal_52[1], -1, 2f, 1f, 1073741824, 0);
				unk_0x0177431263151C4E(0, iLocal_52[1], 0);
				unk_0x0EEB301CAA50A123(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				unk_0x301F42EEE3C40328(iLocal_59);
				unk_0xE1072FA2FECBAD96(iLocal_52[0], iLocal_59);
				unk_0x3A95A0A3221D4208(&iLocal_59);
				unk_0x2F89329397A277BC(&iLocal_59);
				unk_0x8F65948C5AFB744E(0, iLocal_52[0], -1, 2f, 1f, 1073741824, 0);
				unk_0x0177431263151C4E(0, iLocal_52[0], 0);
				unk_0x0EEB301CAA50A123(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				unk_0x301F42EEE3C40328(iLocal_59);
				unk_0xE1072FA2FECBAD96(iLocal_52[1], iLocal_59);
				unk_0x3A95A0A3221D4208(&iLocal_59);
				settimerb(15000);
				iLocal_115 = 0;
				iLocal_126 = 1;
				iLocal_64 = 1;
			}
		}
		if (bLocal_127)
		{
			func_11();
			func_112();
		}
		if (((unk_0x85E4CC19842B6048(iLocal_52[0], unk_0xA19140A5C42D8715()) || unk_0x85E4CC19842B6048(iLocal_52[1], unk_0xA19140A5C42D8715())) || unk_0xCCF89CDD3583210D(unk_0xD4E735F4B6A956AC(), iLocal_52[0])) || unk_0xCCF89CDD3583210D(unk_0xD4E735F4B6A956AC(), iLocal_52[1]))
		{
			if (unk_0x852B8F739A2072BE(unk_0xA19140A5C42D8715(), 4) && !unk_0x852B8F739A2072BE(unk_0xA19140A5C42D8715(), 3))
			{
				if (unk_0x2206F47E5C82D52C(unk_0xA19140A5C42D8715()))
				{
					if (!iLocal_70)
					{
						func_104();
						wait(0);
						if (func_70(&uLocal_138, "REBU2AU", "REBU2_GUN", 4, 0, 0, 0))
						{
							iLocal_70 = 1;
							func_112();
						}
					}
				}
			}
			if (unk_0x852B8F739A2072BE(unk_0xA19140A5C42D8715(), 3) && !unk_0x852B8F739A2072BE(unk_0xA19140A5C42D8715(), 4))
			{
				if (unk_0x2206F47E5C82D52C(unk_0xA19140A5C42D8715()))
				{
					if (!iLocal_70)
					{
						func_104();
						wait(0);
						if (func_70(&uLocal_138, "REBU2AU", "REBU2_WEP", 4, 0, 0, 0))
						{
							iLocal_70 = 1;
							func_112();
						}
					}
				}
			}
			if (unk_0xFBBCA633CD1A088B(unk_0xD4E735F4B6A956AC()) || unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715()))
			{
				func_112();
			}
		}
	}
}

int func_109()
{
	if (unk_0x05EFB6A616B6FADE(unk_0x22C775856F4633CA(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

float func_110(int iParam0, int iParam1, bool bParam2)
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

int func_111()
{
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			if (unk_0x1095F403F52B42E1(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 0))
			{
				if ((((unk_0x52BDE3D9BF787D4C(unk_0xA19140A5C42D8715(), joaat("rhino")) || unk_0x7C72DB6F19F878D7(unk_0xA19140A5C42D8715())) || unk_0x52BDE3D9BF787D4C(unk_0xA19140A5C42D8715(), joaat("annihilator"))) || unk_0x52BDE3D9BF787D4C(unk_0xA19140A5C42D8715(), joaat("buzzard"))) || unk_0x47A53E3686340604(unk_0xA19140A5C42D8715()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_112()
{
	func_11();
	unk_0x9444470D6D9ADB88("RE6_START");
	if (!iLocal_115)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_52[0]))
		{
			if (!unk_0x4915F4759304D5CF(iLocal_52[0]))
			{
				unk_0xB0D7019224A3A443(iLocal_52[0], 156, true);
				if (unk_0xDC5D81351D6A4DDB(iLocal_56))
				{
					unk_0x57BAE9F63852E6FF(iLocal_52[0]);
					if (unk_0xF797E4DD45066C88(iLocal_56))
					{
						if (!iLocal_64)
						{
							unk_0xF334C9B245CD323D(iLocal_56, 0, true);
							unk_0x96B71B23D409A3DB(iLocal_56, iLocal_52[0], unk_0xF622A022C26057AA(iLocal_52[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							unk_0x9568B1B58F78FF36(iLocal_52[0]);
							unk_0x2F89329397A277BC(&iLocal_59);
							unk_0x53FF9BDD8529ACD2(0);
							unk_0x3F01127ECD227890(0, "random@burial", "a_burial_stop", 8f, -8f, 2000, 0, 0, 0, 0, 0);
							unk_0xDA4D3941AFF8EF12(0, unk_0xA19140A5C42D8715(), 0, 16);
							unk_0x301F42EEE3C40328(iLocal_59);
							unk_0xE1072FA2FECBAD96(iLocal_52[0], iLocal_59);
							unk_0x3A95A0A3221D4208(&iLocal_59);
							unk_0xD738221C247C8B71(iLocal_52[0], true);
							unk_0x3A3E4B7C6FBE305D(iLocal_52[0], 0, 0);
							iLocal_115 = 1;
						}
					}
					else
					{
						unk_0x2F89329397A277BC(&iLocal_59);
						unk_0x53FF9BDD8529ACD2(0);
						unk_0xDA4D3941AFF8EF12(0, unk_0xA19140A5C42D8715(), 0, 16);
						unk_0x301F42EEE3C40328(iLocal_59);
						unk_0xE1072FA2FECBAD96(iLocal_52[0], iLocal_59);
						unk_0x3A95A0A3221D4208(&iLocal_59);
						unk_0xD738221C247C8B71(iLocal_52[0], true);
						iLocal_115 = 1;
					}
				}
			}
			else
			{
				iLocal_115 = 1;
			}
		}
		else
		{
			iLocal_115 = 1;
		}
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_56))
	{
		if (unk_0xF797E4DD45066C88(iLocal_56))
		{
			if (!unk_0x4915F4759304D5CF(iLocal_52[0]))
			{
				if (unk_0x411C28019DEA5CEF(iLocal_52[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0xE5B5A1FFAA0834BD(iLocal_52[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						unk_0xF334C9B245CD323D(iLocal_56, 1, true);
					}
				}
			}
		}
	}
	if (!iLocal_116)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_52[1]))
		{
			if (!unk_0x4915F4759304D5CF(iLocal_52[1]))
			{
				unk_0xB0D7019224A3A443(iLocal_52[1], 156, true);
				unk_0x57BAE9F63852E6FF(iLocal_52[1]);
				unk_0x2F89329397A277BC(&iLocal_59);
				unk_0x53FF9BDD8529ACD2(0);
				unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 500);
				unk_0xDA4D3941AFF8EF12(0, unk_0xA19140A5C42D8715(), 0, 16);
				unk_0x301F42EEE3C40328(iLocal_59);
				unk_0xE1072FA2FECBAD96(iLocal_52[1], iLocal_59);
				unk_0x3A95A0A3221D4208(&iLocal_59);
				unk_0xD738221C247C8B71(iLocal_52[1], true);
				iLocal_116 = 1;
			}
			else
			{
				iLocal_116 = 1;
			}
		}
		else
		{
			iLocal_116 = 1;
		}
	}
	if (iLocal_116 && iLocal_115)
	{
		iLocal_84 = unk_0xFD34717937104F1C() + 8500;
		settimera(0);
		iLocal_47 = 7;
	}
}

int func_113(int iParam0)
{
	if (func_116())
	{
		Global_106060 = 1;
		Global_106057 = unk_0xFD34717937104F1C();
		if (func_25(Global_106059))
		{
			func_114(0);
		}
		unk_0x9E212A43A08FF3F9(1, "RE_TITLE");
		if (iParam0 && func_25(Global_106059))
		{
			unk_0xE134853379787E6A();
		}
		return 1;
	}
	return 0;
}

void func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_106070.f_24967.f_2 < 3)
			{
				if (!unk_0x90A6E668DB47D464())
				{
					func_89(func_115(iParam0), -1);
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
					func_89(func_115(iParam0), -1);
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
					func_89(func_115(iParam0), -1);
					Global_106070.f_24967.f_4++;
					unk_0x2BCFB39E86340DAA(&Global_106066, 2);
				}
			}
			break;
	}
}

char* func_115(int iParam0)
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

int func_116()
{
	switch (func_117(&Global_25518, 0, 5, 0, unk_0xFCB3E4B16B4A9EC1()))
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

int func_117(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_121(0))
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
		if (!func_119(iParam2))
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
			func_118(uParam0, iParam4);
		}
	}
	return 2;
}

void func_118(var uParam0, int iParam1)
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

bool func_119(int iParam0)
{
	return func_120(iParam0, Global_36117);
}

int func_120(int iParam0, int iParam1)
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

int func_121(int iParam0)
{
	if (Global_36117 == 15)
	{
		return 0;
	}
	if (func_119(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_122()
{
	if (unk_0xCE3CB618AFE55EFB(iLocal_123))
	{
		unk_0xE1623437A3194332(&iLocal_123);
	}
	if (!unk_0xCE3CB618AFE55EFB(iLocal_88))
	{
		if (!unk_0x7112137033807390(iLocal_51, 0))
		{
			iLocal_88 = func_67(iLocal_51, 0, 145);
		}
	}
	iLocal_58 = 0;
	while (iLocal_58 <= 1)
	{
		if (!unk_0xCE3CB618AFE55EFB(iLocal_87[iLocal_58]))
		{
			if (!unk_0x7112137033807390(iLocal_52[iLocal_58], 0))
			{
				iLocal_87[iLocal_58] = func_67(iLocal_52[iLocal_58], 1, 145);
			}
		}
		iLocal_58++;
	}
}

void func_123()
{
	if (!unk_0x4915F4759304D5CF(iLocal_51))
	{
		switch (iLocal_128)
		{
			case 0:
				if (iLocal_84 < unk_0xFD34717937104F1C())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(4500, 6500));
						iLocal_128++;
					}
				}
				break;
			
			case 1:
				if (iLocal_84 < unk_0xFD34717937104F1C())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(4500, 6500));
						iLocal_128++;
					}
				}
				break;
			
			case 2:
				if (iLocal_84 < unk_0xFD34717937104F1C())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(4500, 6500));
						iLocal_128++;
					}
				}
				break;
			
			case 3:
				if (iLocal_84 < unk_0xFD34717937104F1C())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0xFD34717937104F1C() + unk_0x22C775856F4633CA(4500, 6500));
						iLocal_128 = 0;
					}
				}
				break;
			}
	}
}

void func_124()
{
	switch (iLocal_86)
	{
		case 0:
			if (func_70(&uLocal_138, "REBU2AU", "REBU2_CH1", 4, 0, 0, 0))
			{
				iLocal_86++;
			}
			break;
		
		case 1:
			if (!func_12())
			{
				if (func_70(&uLocal_138, "REBU2AU", "REBU2_CH2", 4, 0, 0, 0))
				{
					iLocal_86++;
				}
			}
			break;
		
		case 2:
			if (!func_12())
			{
				if (func_70(&uLocal_138, "REBU2AU", "REBU2_CH3", 4, 0, 0, 0))
				{
					iLocal_86++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				if (func_70(&uLocal_138, "REBU2AU", "REBU2_CH4", 4, 0, 0, 0))
				{
					iLocal_86++;
				}
			}
			break;
		
		case 4:
			iLocal_84 = unk_0xFD34717937104F1C() + 3000;
			iLocal_86++;
			break;
		
		case 5:
			break;
	}
}

void func_125()
{
	if (unk_0xDC5D81351D6A4DDB(iLocal_56))
	{
		if (unk_0xF797E4DD45066C88(iLocal_56))
		{
			if (!unk_0x4915F4759304D5CF(iLocal_52[0]))
			{
				if (unk_0x411C28019DEA5CEF(iLocal_52[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0xE5B5A1FFAA0834BD(iLocal_52[0], "random@burial", "a_burial_stop") > 0.124f && unk_0xE5B5A1FFAA0834BD(iLocal_52[0], "random@burial", "a_burial") < 0.127f)
					{
						unk_0xF593FC0961E061E6("scr_burial_dirt", iLocal_56, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
					}
				}
				if (unk_0x411C28019DEA5CEF(iLocal_52[0], "random@burial", "a_burial", 3))
				{
					if (((((unk_0xE5B5A1FFAA0834BD(iLocal_52[0], "random@burial", "a_burial") > 0.04f && unk_0xE5B5A1FFAA0834BD(iLocal_52[0], "random@burial", "a_burial") < 0.043f) || (unk_0xE5B5A1FFAA0834BD(iLocal_52[0], "random@burial", "a_burial") > 0.24f && unk_0xE5B5A1FFAA0834BD(iLocal_52[0], "random@burial", "a_burial") < 0.243f)) || (unk_0xE5B5A1FFAA0834BD(iLocal_52[0], "random@burial", "a_burial") > 0.44f && unk_0xE5B5A1FFAA0834BD(iLocal_52[0], "random@burial", "a_burial") < 0.443f)) || (unk_0xE5B5A1FFAA0834BD(iLocal_52[0], "random@burial", "a_burial") > 0.64f && unk_0xE5B5A1FFAA0834BD(iLocal_52[0], "random@burial", "a_burial") < 0.643f)) || (unk_0xE5B5A1FFAA0834BD(iLocal_52[0], "random@burial", "a_burial") > 0.84f && unk_0xE5B5A1FFAA0834BD(iLocal_52[0], "random@burial", "a_burial") < 0.843f))
					{
						unk_0xF593FC0961E061E6("scr_burial_dirt", iLocal_56, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
					}
				}
			}
		}
	}
}

int func_126()
{
	if (!iLocal_103)
	{
		if (unk_0x9809FE4B550B1EFE(vLocal_74, 100f, 1) || unk_0x9809FE4B550B1EFE(vLocal_74, 100f, 1))
		{
			if (unk_0x4915F4759304D5CF(iLocal_52[0]) || unk_0x4915F4759304D5CF(iLocal_52[1]))
			{
				iLocal_49 = 1;
				return 1;
			}
			else if (!unk_0x9809FE4B550B1EFE(vLocal_74, 100f, 1) || !unk_0x9809FE4B550B1EFE(vLocal_74, 100f, 1))
			{
				iLocal_49 = 1;
				return 1;
			}
		}
		if (((((((((unk_0x0E79878CB3E71F79(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_smokegrenade"), 1) || unk_0x0E79878CB3E71F79(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenade"), 1)) || unk_0x0E79878CB3E71F79(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_stickybomb"), 1)) || unk_0x0E79878CB3E71F79(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher"), 1)) || unk_0x0E79878CB3E71F79(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher_smoke"), 1)) || unk_0x0E79878CB3E71F79(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_rpg"), 1)) || unk_0x0E79878CB3E71F79(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_molotov"), 1)) || unk_0x0510543C0447D02F(2, vLocal_74 - Vector(100f, 100f, 100f), vLocal_74 + Vector(100f, 100f, 100f))) || unk_0x0510543C0447D02F(4, vLocal_74 - Vector(100f, 100f, 100f), vLocal_74 + Vector(100f, 100f, 100f))) || unk_0x0510543C0447D02F(0, vLocal_74 - Vector(100f, 100f, 100f), vLocal_74 + Vector(100f, 100f, 100f)))
		{
			iLocal_49 = 1;
			return 1;
		}
		if (unk_0xDC5D81351D6A4DDB(iLocal_54))
		{
			if (!unk_0x7112137033807390(iLocal_54, 0))
			{
				if (unk_0xDEAEC99031DCB92A(iLocal_54, unk_0xA19140A5C42D8715(), 1) || unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_54, 0))
				{
					unk_0xDCB46BFC2265476A(iLocal_54);
					func_112();
					iLocal_49 = 3;
					return 1;
				}
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					if (unk_0x52BDE3D9BF787D4C(unk_0xA19140A5C42D8715(), joaat("towtruck")) || unk_0x52BDE3D9BF787D4C(unk_0xA19140A5C42D8715(), joaat("towtruck2")))
					{
						if (unk_0xDF44B80BAA1F87F7(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), iLocal_54))
						{
							func_112();
							iLocal_49 = 3;
							return 1;
						}
					}
				}
			}
		}
		if (!iLocal_69)
		{
			if (!unk_0x4915F4759304D5CF(iLocal_52[0]) && !unk_0x4915F4759304D5CF(iLocal_52[1]))
			{
				if ((((unk_0x85E4CC19842B6048(iLocal_52[0], unk_0xA19140A5C42D8715()) || unk_0x85E4CC19842B6048(iLocal_52[1], unk_0xA19140A5C42D8715())) || unk_0xCCF89CDD3583210D(unk_0xD4E735F4B6A956AC(), iLocal_52[0])) || unk_0xCCF89CDD3583210D(unk_0xD4E735F4B6A956AC(), iLocal_52[1])) || unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_74 - Vector(0f, 0f, 7f), 20f, 15f, 35f, false, true, 0))
				{
					if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_74 - Vector(0f, 0f, 7f), 28f, 18f, 35f, false, true, 0))
					{
						iLocal_49 = 1;
						return 1;
					}
				}
			}
		}
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			if (!unk_0x4915F4759304D5CF(iLocal_52[0]) && !unk_0x4915F4759304D5CF(iLocal_52[1]))
			{
				if (!unk_0x7112137033807390(unk_0xC409B91AC4749F88(), 0))
				{
					if (unk_0xC556072C29E00F04(unk_0xC409B91AC4749F88(), iLocal_52[0]) || unk_0xC556072C29E00F04(unk_0xC409B91AC4749F88(), iLocal_52[1]))
					{
						iLocal_49 = 5;
						return 1;
					}
				}
			}
		}
		if (!unk_0x4915F4759304D5CF(iLocal_51))
		{
			if (unk_0xDEAEC99031DCB92A(iLocal_51, unk_0xA19140A5C42D8715(), 0) || unk_0x090D7069CA715CAA(iLocal_51, joaat("weapon_stungun"), 0))
			{
				iLocal_49 = 4;
				return 1;
			}
		}
		else
		{
			iLocal_49 = 4;
			return 1;
		}
		if (unk_0x7112137033807390(iLocal_52[0], 0) || unk_0x7112137033807390(iLocal_52[1], 0))
		{
			iLocal_49 = 6;
			return 1;
		}
		if (iLocal_69)
		{
			return 1;
		}
	}
	return 0;
}

int func_127(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	bVar2 = false;
	if (!unk_0x7112137033807390(iParam0, 0) && !bParam4)
	{
		if (unk_0x2206F47E5C82D52C(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		if (!unk_0x7112137033807390(iParam0, 0) && !bParam4)
		{
			vVar3 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) };
			vVar4 = { unk_0xE2BBD32891C18569(iParam0, true) };
			fVar5 = vdist(vVar3, vVar4);
			if (!unk_0x05EFB6A616B6FADE(iParam3, 3))
			{
				if (func_133(iParam0, iParam6))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_131(iParam0);
					return 1;
				}
			}
			if (!unk_0x05EFB6A616B6FADE(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0x9809FE4B550B1EFE(vVar4, fParam5, 1))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_131(iParam0);
					return 1;
				}
				if (unk_0x0AF5F990243ADDFB(vVar4 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), vVar4 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_131(iParam0);
					return 1;
				}
			}
			if (!unk_0x05EFB6A616B6FADE(iParam3, 2))
			{
				fVar0 = unk_0xE430B9C6C2A954DD(unk_0xA19140A5C42D8715());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0x852B8F739A2072BE(unk_0xA19140A5C42D8715(), 6))
				{
					if (unk_0x7591AFB11E7EDDA0(unk_0xD4E735F4B6A956AC(), iParam0) || unk_0x669ABFB25D991447(unk_0xD4E735F4B6A956AC(), iParam0))
					{
						if (fVar5 < fVar0)
						{
							if (unk_0x58DE86018EA47551(iParam0, unk_0xA19140A5C42D8715(), 17))
							{
								func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_132("	aggro Ped knows player is pointing gun\n");
								func_128("		lockOnTimer = ", *uParam2);
								func_132("\n");
								func_128("		time since not LockedOn = ", (unk_0xFD34717937104F1C() - iLocal_19));
								func_132("\n");
								bVar2 = true;
								if (unk_0xFD34717937104F1C() > (iLocal_19 + *uParam2))
								{
									func_132("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_131(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!unk_0x05EFB6A616B6FADE(iParam3, 0))
			{
				if (unk_0x122A8778D4027A82(unk_0xD4E735F4B6A956AC(), 0))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_131(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_19 = unk_0xFD34717937104F1C();
	}
	return 0;
}

void func_128(char* sParam0, int iParam1)
{
	func_130(sParam0);
	func_129(iParam1);
}

void func_129(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_130(char* sParam0)
{
	if (unk_0x3CAC2741CC1A631F(sParam0, sParam0))
	{
	}
}

void func_131(int iParam0)
{
	unk_0x68995A99EFE15C73(iParam0);
}

void func_132(char* sParam0)
{
	func_130(sParam0);
}

int func_133(int iParam0, int iParam1)
{
	if (unk_0x2206F47E5C82D52C(unk_0xA19140A5C42D8715()))
	{
		if (unk_0xDEAEC99031DCB92A(iParam0, unk_0xA19140A5C42D8715(), 1))
		{
			return 1;
		}
	}
	else if (unk_0xDEAEC99031DCB92A(iParam0, unk_0xA19140A5C42D8715(), 1))
	{
		if ((unk_0xF49CB145FAD56CFD(iParam0) - unk_0x24A1A7BF4ED94B71(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_134()
{
	vector3 vVar0;
	vector3 vVar1;
	
	func_136(39, 1);
	func_136(40, 1);
	func_136(41, 1);
	func_136(42, 1);
	func_136(43, 1);
	func_136(44, 1);
	unk_0xF66A39BBE7B3C278(vLocal_113 - Vector(20f, 40f, 40f), vLocal_113 + Vector(20f, 40f, 40f), 0, 1, 1, 1);
	unk_0xF66A39BBE7B3C278(vLocal_72 - Vector(20f, 50f, 60f), vLocal_72 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	unk_0xFC00A668AFC2126D(iLocal_83, true);
	unk_0x60DEFBFF740D4C09(5, false);
	unk_0x60DEFBFF740D4C09(3, false);
	unk_0xBF6EED5D6E0CD9BF(0f);
	iLocal_51 = unk_0x35C6E06B120EB2E3(26, iLocal_80, vLocal_72, fLocal_77, 1, true);
	unk_0x1F4E5EFBFE503FB3(iLocal_51, true);
	unk_0x96BFF0680C7B6FD5(iLocal_51, false);
	unk_0xC2C4AE9DB4A0BEF3(iLocal_51, 2, false);
	unk_0xC2C4AE9DB4A0BEF3(iLocal_51, 128, true);
	unk_0x3B7A32E04BBE59A5(iLocal_51, 1, false);
	unk_0x3B7A32E04BBE59A5(iLocal_51, 6, false);
	unk_0x13E0A8160525AE55(iLocal_51, 206, true);
	unk_0x13E0A8160525AE55(iLocal_51, 318, false);
	unk_0x13E0A8160525AE55(iLocal_51, 118, false);
	unk_0x13E0A8160525AE55(iLocal_51, 208, true);
	unk_0xA5DE74AE39867B03(iLocal_80);
	unk_0x6259CDB47862A4F3(iLocal_51, iLocal_99, 0);
	unk_0xCB6F83EEDBCC77C4(unk_0xA19140A5C42D8715(), 0);
	unk_0x94E87D83163B4BEB("rghKidnappers", &iLocal_136);
	unk_0x94E87D83163B4BEB("rghVictim", &iLocal_137);
	unk_0xDFA901280292A2FB(iLocal_51, iLocal_137);
	iLocal_58 = 0;
	while (iLocal_58 <= 1)
	{
		iLocal_52[iLocal_58] = unk_0x35C6E06B120EB2E3(26, iLocal_81, vLocal_73[iLocal_58 /*3*/], fLocal_78[iLocal_58], 1, true);
		unk_0x1F4E5EFBFE503FB3(iLocal_52[iLocal_58], true);
		unk_0xB6544ED6F57109F3(iLocal_52[iLocal_58], 1);
		unk_0x3B7A32E04BBE59A5(iLocal_52[iLocal_58], 0, true);
		unk_0xC2C4AE9DB4A0BEF3(iLocal_52[iLocal_58], 2, false);
		unk_0xC2C4AE9DB4A0BEF3(iLocal_52[iLocal_58], 128, true);
		unk_0x13E0A8160525AE55(iLocal_52[iLocal_58], 42, true);
		unk_0x8AA21BBDA4DB2C4F(iLocal_52[0], 2);
		unk_0x3B7A32E04BBE59A5(iLocal_52[0], 50, true);
		unk_0x6909FCF0DF666AF6(iLocal_52[iLocal_58], 50);
		unk_0xD461381B293D9B46(iLocal_52[iLocal_58], 13);
		unk_0x98D1B1BD9C3AA456(iLocal_52[iLocal_58], true, 1);
		unk_0xDFA901280292A2FB(iLocal_52[iLocal_58], iLocal_136);
		unk_0x8C26EBB3525646D4(iLocal_52[iLocal_58], unk_0x22C775856F4633CA(800, 2000));
		iLocal_58++;
	}
	unk_0xA5DE74AE39867B03(iLocal_82);
	unk_0xA5DE74AE39867B03(iLocal_81);
	unk_0x6909FCF0DF666AF6(iLocal_52[1], 100);
	unk_0x38881C31FB76F987(iLocal_52[1], -687903391);
	unk_0x80E7C4A78224C8F9(5, iLocal_136, 1862763509);
	unk_0xF0188A1B49D79AF7(iLocal_52[0], joaat("weapon_pistol"), -1, false, true);
	unk_0xF0188A1B49D79AF7(iLocal_52[1], joaat("weapon_sawnoffshotgun"), -1, false, true);
	iLocal_54 = unk_0x48CFBECB146FD1A1(iLocal_83, vLocal_74, fLocal_79, true, true, false);
	unk_0x99F546A9200EA026(iLocal_54, 1084227584);
	unk_0x6EB2D9504928F849(iLocal_54, 3);
	unk_0xD6B4F40F1425E83F(iLocal_54, 5, 0, 0);
	unk_0xA5DE74AE39867B03(iLocal_83);
	iLocal_56 = unk_0xFCFC8CC5FF74580D(joaat("prop_ld_shovel"), vLocal_85, true, true, false);
	unk_0xA5DE74AE39867B03(joaat("prop_ld_shovel"));
	iLocal_57[0] = unk_0xFCFC8CC5FF74580D(joaat("p_arm_bind_cut_s"), vLocal_85, true, true, false);
	iLocal_57[1] = unk_0xFCFC8CC5FF74580D(joaat("p_arm_bind_cut_s"), vLocal_85 + Vector(1f, 1f, 1f), true, true, false);
	unk_0xCACEBBBEAD8F262E(joaat("p_arm_bind_cut_s"));
	unk_0x96B71B23D409A3DB(iLocal_56, iLocal_52[0], unk_0xF622A022C26057AA(iLocal_52[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	unk_0x72A0FF8C49CFFC0D(iLocal_52[0], 0, 0, 0, 0);
	unk_0x72A0FF8C49CFFC0D(iLocal_52[0], 3, 0, 1, 0);
	unk_0x72A0FF8C49CFFC0D(iLocal_52[0], 4, 1, 0, 0);
	unk_0x72A0FF8C49CFFC0D(iLocal_52[1], 0, 0, 2, 0);
	unk_0x72A0FF8C49CFFC0D(iLocal_52[1], 3, 2, 1, 0);
	unk_0x72A0FF8C49CFFC0D(iLocal_52[1], 4, 1, 1, 0);
	vVar0 = { vLocal_72 };
	vVar1 = { -2f, -4f, 18f };
	iLocal_303 = unk_0x70788DC3D80C9DEB(vVar0, vVar1, 2);
	unk_0xE5565DEAABF9D588(iLocal_51, iLocal_303, "random@burial", "b_burial", 4f, -4f, 1, 0, 1148846080, 0);
	unk_0x341C49A9159E80FB(iLocal_57[0], iLocal_303, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
	unk_0x341C49A9159E80FB(iLocal_57[1], iLocal_303, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
	unk_0xDA16255FBFC16B28(iLocal_303, true);
	unk_0xD738221C247C8B71(iLocal_51, true);
	unk_0x3F01127ECD227890(iLocal_52[0], "random@burial", "a_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0x3F01127ECD227890(iLocal_52[1], "random@burial", "c_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0x0D0784EB08BB4C22(iLocal_52[0], vLocal_75, vLocal_76, 2.75f, 0, 0);
	unk_0x0D0784EB08BB4C22(iLocal_52[1], vLocal_75, vLocal_76, 2.75f, 0, 0);
	if (func_44() == 0)
	{
		func_135(&uLocal_138, 0, unk_0xA19140A5C42D8715(), "MICHAEL", 0, 1);
	}
	else if (func_44() == 1)
	{
		func_135(&uLocal_138, 1, unk_0xA19140A5C42D8715(), "FRANKLIN", 0, 1);
	}
	else if (func_44() == 2)
	{
		func_135(&uLocal_138, 2, unk_0xA19140A5C42D8715(), "TREVOR", 0, 1);
	}
	unk_0x4FE3554969185993(iLocal_52[0], "A_M_M_HillBilly_02_WHITE_MINI_03");
	unk_0x4FE3554969185993(iLocal_52[1], "A_M_M_HillBilly_02_WHITE_MINI_02");
	unk_0x4FE3554969185993(iLocal_51, "KIDNAPPEDFEMALE");
	func_135(&uLocal_138, 4, iLocal_52[0], "KIDNAPPER2", 0, 1);
	func_135(&uLocal_138, 3, iLocal_52[1], "KIDNAPPER1", 0, 1);
	func_135(&uLocal_138, 5, iLocal_51, "KIDNAPPEDFEMALE", 0, 1);
}

void func_135(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_136(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_143(iParam0, 2, 1))
		{
			func_142(iParam0, 2, 1);
		}
	}
	else if (func_143(iParam0, 2, 1))
	{
		func_137(iParam0, 2, 1);
	}
}

void func_137(int iParam0, int iParam1, bool bParam2)
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
		if (func_20() == 0)
		{
			iVar0 = func_140(func_141(iParam0), -1, 0);
			unk_0xFA57C719261AA55D(&iVar0, iParam1);
			func_138(func_141(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_106070.f_668[iParam0]), iParam1);
	}
}

void func_138(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_139(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
}

int func_139(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_23();
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

int func_140(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_139(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_141(int iParam0)
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

void func_142(int iParam0, int iParam1, bool bParam2)
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
		if (func_20() == 0)
		{
			iVar0 = func_140(func_141(iParam0), -1, 0);
			unk_0x2BCFB39E86340DAA(&iVar0, iParam1);
			func_138(func_141(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x2BCFB39E86340DAA(&(Global_106070.f_668[iParam0]), iParam1);
	}
}

int func_143(int iParam0, int iParam1, bool bParam2)
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
		if (func_20() == 0)
		{
			return unk_0x05EFB6A616B6FADE(func_140(func_141(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x05EFB6A616B6FADE(Global_106070.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_144()
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

void func_145()
{
	unk_0xCACEBBBEAD8F262E(iLocal_80);
	unk_0xCACEBBBEAD8F262E(iLocal_82);
	unk_0xCACEBBBEAD8F262E(iLocal_81);
	unk_0xCACEBBBEAD8F262E(iLocal_83);
	unk_0xCACEBBBEAD8F262E(joaat("prop_ld_shovel"));
	unk_0xCACEBBBEAD8F262E(joaat("p_arm_bind_cut_s"));
	unk_0x6D68030C791111E0("random@burial");
	unk_0x788BCD68EF8935BE();
	unk_0x61346376C1469A0E("ROPE_CUT", false, -1);
	unk_0x7B5129A25EE58E36("RE6_BOTH_DEAD_OS");
	if (((((((((unk_0x7FC99CCC73354033(iLocal_80) && unk_0x7FC99CCC73354033(iLocal_82)) && unk_0x7FC99CCC73354033(iLocal_81)) && unk_0x7FC99CCC73354033(iLocal_83)) && unk_0x7FC99CCC73354033(joaat("prop_ld_shovel"))) && unk_0x7FC99CCC73354033(joaat("p_arm_bind_cut_s"))) && unk_0x39C2D9AB77873F84("random@burial")) && unk_0x5488D97A1366CE04()) && unk_0x61346376C1469A0E("ROPE_CUT", false, -1)) && unk_0x7B5129A25EE58E36("RE6_BOTH_DEAD_OS"))
	{
		bLocal_50 = true;
	}
	else
	{
		unk_0xCACEBBBEAD8F262E(iLocal_80);
		unk_0xCACEBBBEAD8F262E(iLocal_82);
		unk_0xCACEBBBEAD8F262E(iLocal_81);
		unk_0xCACEBBBEAD8F262E(iLocal_83);
		unk_0xCACEBBBEAD8F262E(joaat("prop_ld_shovel"));
		unk_0xCACEBBBEAD8F262E(joaat("p_arm_bind_cut_s"));
		unk_0x6D68030C791111E0("random@burial");
		unk_0x788BCD68EF8935BE();
		unk_0x61346376C1469A0E("ROPE_CUT", false, -1);
		unk_0x7B5129A25EE58E36("RE6_BOTH_DEAD_OS");
	}
}

void func_146()
{
	iLocal_80 = joaat("u_f_y_mistress");
	iLocal_81 = joaat("a_m_m_salton_01");
	iLocal_82 = joaat("a_m_m_salton_01");
	iLocal_83 = joaat("bison");
	vLocal_72 = { 163.4486f, 6839.993f, 18.86f };
	fLocal_77 = 0f;
	vLocal_73[0 /*3*/] = { 162.8193f, 6837.257f, 18.9614f };
	fLocal_78[0] = 297.0056f;
	vLocal_73[1 /*3*/] = { 162.5046f, 6841.68f, 18.8426f };
	fLocal_78[1] = 193.3866f;
	vLocal_74 = { 169.3462f, 6837.805f, 19.1421f };
	fLocal_79 = 265.6862f;
	vLocal_75 = { 164.0896f, 6836.923f, 19.03899f };
	vLocal_76 = { 168.9638f, 6834.302f, 24.99057f };
	iLocal_60 = 1;
}

int func_147()
{
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vLocal_44) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0x57323E573695B13F(unk_0xA19140A5C42D8715())) > 1369f && !func_158())
		{
			return 0;
		}
	}
	if (func_154())
	{
		return 1;
	}
	if (func_148(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_148(float fParam0, bool bParam1)
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
		if (func_33(func_44()))
		{
			iVar5 = func_30();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0x05EFB6A616B6FADE(Global_106070.f_18546[iVar1 /*6*/], 2) && !unk_0x05EFB6A616B6FADE(Global_106070.f_18546[iVar1 /*6*/], 3))
				{
					func_149(iVar1, &Var0);
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

void func_149(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_150(uParam1, "Abigail1", func_152(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 1:
			func_150(uParam1, "Abigail2", func_152(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 2:
			func_150(uParam1, "Barry1", func_152(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 3:
			func_150(uParam1, "Barry2", func_152(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 4:
			func_150(uParam1, "Barry3", func_152(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 5:
			func_150(uParam1, "Barry3A", func_152(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 6:
			func_150(uParam1, "Barry3C", func_152(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 7:
			func_150(uParam1, "Barry4", func_152(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_151(iParam0), 0, 0);
			break;
		
		case 8:
			func_150(uParam1, "Dreyfuss1", func_152(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 9:
			func_150(uParam1, "Epsilon1", func_152(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 10:
			func_150(uParam1, "Epsilon2", func_152(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 11:
			func_150(uParam1, "Epsilon3", func_152(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 12:
			func_150(uParam1, "Epsilon4", func_152(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 13:
			func_150(uParam1, "Epsilon5", func_152(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 14:
			func_150(uParam1, "Epsilon6", func_152(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 15:
			func_150(uParam1, "Epsilon7", func_152(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 16:
			func_150(uParam1, "Epsilon8", func_152(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 17:
			func_150(uParam1, "Extreme1", func_152(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 18:
			func_150(uParam1, "Extreme2", func_152(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 19:
			func_150(uParam1, "Extreme3", func_152(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 20:
			func_150(uParam1, "Extreme4", func_152(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 21:
			func_150(uParam1, "Fanatic1", func_152(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_151(iParam0), 1, 0);
			break;
		
		case 22:
			func_150(uParam1, "Fanatic2", func_152(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_151(iParam0), 1, 0);
			break;
		
		case 23:
			func_150(uParam1, "Fanatic3", func_152(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_151(iParam0), 0, 1);
			break;
		
		case 24:
			func_150(uParam1, "Hao1", func_152(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_151(iParam0), 0, 1);
			break;
		
		case 25:
			func_150(uParam1, "Hunting1", func_152(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 26:
			func_150(uParam1, "Hunting2", func_152(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 27:
			func_150(uParam1, "Josh1", func_152(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 28:
			func_150(uParam1, "Josh2", func_152(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 29:
			func_150(uParam1, "Josh3", func_152(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 30:
			func_150(uParam1, "Josh4", func_152(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 31:
			func_150(uParam1, "Maude1", func_152(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 32:
			func_150(uParam1, "Minute1", func_152(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 33:
			func_150(uParam1, "Minute2", func_152(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 34:
			func_150(uParam1, "Minute3", func_152(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 35:
			func_150(uParam1, "MrsPhilips1", func_152(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 36:
			func_150(uParam1, "MrsPhilips2", func_152(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 37:
			func_150(uParam1, "Nigel1", func_152(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 38:
			func_150(uParam1, "Nigel1A", func_152(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 39:
			func_150(uParam1, "Nigel1B", func_152(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_151(iParam0), 1, 1);
			break;
		
		case 40:
			func_150(uParam1, "Nigel1C", func_152(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_151(iParam0), 1, 1);
			break;
		
		case 41:
			func_150(uParam1, "Nigel1D", func_152(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_151(iParam0), 1, 1);
			break;
		
		case 42:
			func_150(uParam1, "Nigel2", func_152(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 43:
			func_150(uParam1, "Nigel3", func_152(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 44:
			func_150(uParam1, "Omega1", func_152(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 45:
			func_150(uParam1, "Omega2", func_152(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 46:
			func_150(uParam1, "Paparazzo1", func_152(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 47:
			func_150(uParam1, "Paparazzo2", func_152(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 48:
			func_150(uParam1, "Paparazzo3", func_152(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 49:
			func_150(uParam1, "Paparazzo3A", func_152(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 50:
			func_150(uParam1, "Paparazzo3B", func_152(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 51:
			func_150(uParam1, "Paparazzo4", func_152(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 52:
			func_150(uParam1, "Rampage1", func_152(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 54:
			func_150(uParam1, "Rampage3", func_152(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 55:
			func_150(uParam1, "Rampage4", func_152(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 56:
			func_150(uParam1, "Rampage5", func_152(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 53:
			func_150(uParam1, "Rampage2", func_152(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 57:
			func_150(uParam1, "TheLastOne", func_152(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 58:
			func_150(uParam1, "Tonya1", func_152(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 59:
			func_150(uParam1, "Tonya2", func_152(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 60:
			func_150(uParam1, "Tonya3", func_152(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 61:
			func_150(uParam1, "Tonya4", func_152(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 62:
			func_150(uParam1, "Tonya5", func_152(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_150(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_151(int iParam0)
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

struct<2> func_152(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_153(iParam0) };
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

struct<2> func_153(int iParam0)
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

int func_154()
{
	if (func_157() && !func_158())
	{
		return 1;
	}
	if (func_156() && func_155())
	{
		return 1;
	}
	return 0;
}

bool func_155()
{
	return Global_105788 > 0;
}

int func_156()
{
	if (Global_90249 != -1)
	{
		return 1;
	}
	return 0;
}

int func_157()
{
	if (Global_90249 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_84115[Global_90249 /*34*/].f_15, 20);
	}
	return 0;
}

int func_158()
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

int func_159()
{
	if (!func_119(5))
	{
		return 1;
	}
	if (func_154())
	{
		return 1;
	}
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (vmag2(unk_0x57323E573695B13F(unk_0xA19140A5C42D8715())) > 1369f && !func_158())
		{
			return 0;
		}
	}
	if (func_148(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_160()
{
	if ((Global_106059 == func_39() && unk_0x62558A57CB60EE71()) && Global_106060)
	{
		return 1;
	}
	return 0;
}

void func_161(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_163(iParam0);
	unk_0x7B9D98D1F4280B24(0);
	unk_0x509F44AFDE7B1FCA(1);
	Global_106056 = 0;
	func_162();
}

void func_162()
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

void func_163(int iParam0)
{
	Global_106059 = iParam0;
}

int func_164(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_39();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_205())
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
			if (vmag2(unk_0x57323E573695B13F(unk_0xA19140A5C42D8715())) > 1369f && !func_158())
			{
				return 0;
			}
		}
		if (!Global_106070.f_9057)
		{
			return 0;
		}
		if (func_16(0))
		{
			return 0;
		}
		if (func_154())
		{
			return 0;
		}
		if (func_204())
		{
			return 0;
		}
		if (Global_106059 != -1)
		{
			return 0;
		}
		if (func_33(func_44()))
		{
			if (func_148(100f, 1) != -1)
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
		if (!func_203(iParam1))
		{
			return 0;
		}
		if (func_33(func_44()))
		{
			if (func_202(func_44()) == 4 || func_202(func_44()) == 5)
			{
				return 0;
			}
		}
		if (func_33(func_44()))
		{
			if (!func_201(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_200(Global_106070.f_24967.f_43[iParam1]))
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
		if (func_199())
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
		if (!func_190(4))
		{
			return 0;
		}
		if (!func_119(5))
		{
			return 0;
		}
		if (func_189(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_189(0, 0))
		{
			return 0;
		}
		if (Global_25605)
		{
			return 0;
		}
		if (func_203(30) && !func_189(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_33(func_44()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_106070.f_2355.f_539.f_2280[iVar2 /*3*/] };
				iVar4 = Global_106070.f_2355.f_539.f_2276[iVar2];
				if (func_188(iVar4))
				{
					if (func_166(iVar2))
					{
						if (!func_165(vVar3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), false), vVar3) < (210f * 210f))
							{
								if (func_44() != iVar2)
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

bool func_165(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_166(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_106070.f_2355.f_539.f_2276[iParam0];
	return func_167(iVar0);
}

int func_167(int iParam0)
{
	return func_168(iParam0, 1);
}

int func_168(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_188(iParam0))
	{
		return 0;
	}
	func_169(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_169(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_170(func_181(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_170(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_180(iParam0, iParam1))
	{
		iVar0 = func_179(iParam1);
		iVar1 = func_177(iParam0);
		iVar2 = (func_177(iParam0) - func_177(iParam1));
		iVar3 = (func_179(iParam0) - func_179(iParam1));
		iVar4 = (func_176(iParam0) - func_176(iParam1));
		iVar5 = (func_175(iParam0) - func_175(iParam1));
		iVar6 = (func_174(iParam0) - func_174(iParam1));
		iVar7 = (func_173(iParam0) - func_173(iParam1));
	}
	else
	{
		iVar0 = func_179(iParam0);
		iVar1 = func_177(iParam1);
		iVar2 = (func_177(iParam1) - func_177(iParam0));
		iVar3 = (func_179(iParam1) - func_179(iParam0));
		iVar4 = (func_176(iParam1) - func_176(iParam0));
		iVar5 = (func_175(iParam1) - func_175(iParam0));
		iVar6 = (func_174(iParam1) - func_174(iParam0));
		iVar7 = (func_173(iParam1) - func_173(iParam0));
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
		iVar4 = (iVar4 + func_172(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_171(to_float(iVar0 + 1), 0f, 12f));
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

float func_171(float fParam0, float fParam1, float fParam2)
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

int func_172(int iParam0, int iParam1)
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

int func_173(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_174(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_175(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_176(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_177(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_178(unk_0x05EFB6A616B6FADE(iParam0, 31), -1, 1)) + 2011;
}

int func_178(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_179(int iParam0)
{
	return iParam0 & 15;
}

int func_180(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_188(iParam1) || !func_188(iParam0))
	{
		return 1;
	}
	iVar0 = func_177(iParam0);
	iVar1 = func_177(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_179(iParam0);
	iVar1 = func_179(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_176(iParam0);
	iVar1 = func_176(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_175(iParam0);
	iVar1 = func_175(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_174(iParam0);
	iVar1 = func_174(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
	iVar1 = func_173(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_181()
{
	var uVar0;
	
	func_187(&uVar0, unk_0xC5B07C33AC7BB174());
	func_186(&uVar0, unk_0x65DA628D62901275());
	func_185(&uVar0, unk_0x34CEB9721AC6A0A9());
	func_184(&uVar0, unk_0xC9A0B68BA813CF99());
	func_183(&uVar0, unk_0x897D202BD69186D5());
	func_182(&uVar0, unk_0x56EBDF0E39D83471());
	return uVar0;
}

void func_182(var uParam0, int iParam1)
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

void func_183(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_184(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_179(*uParam0);
	iVar1 = func_177(*uParam0);
	if (iParam1 < 1 || iParam1 > func_172(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_185(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_186(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_187(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_188(int iParam0)
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
	iVar0 = func_173(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_174(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_175(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_177(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_179(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_176(iParam0);
	if (iVar5 < 1 || iVar5 > func_172(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_189(int iParam0, int iParam1)
{
	if (unk_0x05EFB6A616B6FADE(Global_106070.f_24967.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_190(int iParam0)
{
	int iVar0;
	
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
		{
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				iVar0 = func_44();
				if (!func_33(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC()) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x3D77D31E25961596(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0)) || func_198()) || Global_105117) || Global_25461) || func_197()) || func_78(8, -1)) || func_196()) || func_195()) || func_194()) || func_193()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1) || func_198()) || Global_25461) || func_197()) || func_78(8, -1)) || func_194()) || func_196()) || func_195()) || func_193()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC()) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x3D77D31E25961596(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0)) || func_198()) || Global_105117) || Global_25461) || func_197()) || func_78(8, -1)) || func_194()) || func_196()) || func_195()) || func_193()) || Global_106070.f_7660.f_919[iVar0] == 5) || Global_36664 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715()) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0)) || func_198()) || Global_105117) || Global_25461) || func_197()) || func_78(8, -1)) || func_196()) || func_195()) || func_193()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_198() || unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0) || func_78(8, -1)) || func_193()) || func_192()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_78(8, -1) || func_196()) || func_195()) || func_192()) || func_191())
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
							if ((((((((((((((unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0) || unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || func_198()) || Global_25461) || func_197()) || func_78(8, -1)) || func_195()) || func_194()) || func_193()) || Global_106070.f_7660.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0) || !unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC())) || !unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC())) || !unk_0x3A83743561B4F70C()) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || func_198()) || func_195()) || Global_105117) || Global_25461) || func_197()) || Global_37271) || func_78(8, -1)) || func_194()) || func_192()) || func_193()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0) || !unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC())) || !unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC())) || !unk_0x3A83743561B4F70C()) || unk_0x122A8778D4027A82(unk_0xD4E735F4B6A956AC(), 0)) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1)) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0x443A3698D0CD9D06(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || func_198()) || Global_105117) || Global_25461) || func_197()) || func_78(8, -1)) || func_194()) || func_192()) || func_196()) || func_195()) || func_193())
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

var func_191()
{
	return Global_93271.f_1;
}

int func_192()
{
	if (Global_90249 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_84115[Global_90249 /*34*/].f_15, 13);
	}
	return 0;
}

int func_193()
{
	if (unk_0x8B1574454E8C2421(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_194()
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

bool func_195()
{
	return Global_93284.f_328 > 0;
}

bool func_196()
{
	return Global_93284.f_327 > 0;
}

var func_197()
{
	return Global_1312857;
}

int func_198()
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		return Global_90805.f_44 == 1;
	}
	return 0;
}

int func_199()
{
	func_76();
	if (Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_200(int iParam0)
{
	return func_180(func_181(), iParam0);
}

int func_201(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_44();
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

int func_202(int iParam0)
{
	if (!func_33(iParam0))
	{
		return 7;
	}
	return Global_106070.f_7660.f_919[iParam0];
}

bool func_203(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_205())
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

int func_204()
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

int func_205()
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

void func_206()
{
	int iVar0;
	
	if (iLocal_122)
	{
		func_219(0);
		unk_0x4004C3CB2300135E();
		unk_0xEEF61BF551977B0E("RE6_BOTH_DEAD_OS");
		if (iLocal_115 || iLocal_125)
		{
			if (Global_25698)
			{
				unk_0x9444470D6D9ADB88("AC_STOP");
			}
			else
			{
				unk_0x9444470D6D9ADB88("RE6_END");
			}
		}
		func_218();
		unk_0x80E7C4A78224C8F9(255, iLocal_137, 1862763509);
		unk_0x80E7C4A78224C8F9(255, 1862763509, iLocal_137);
		if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			if (!unk_0x4915F4759304D5CF(iLocal_51))
			{
				unk_0x13E0A8160525AE55(iLocal_51, 317, true);
				if (!unk_0x5D7DFE2058701942(iLocal_51, 0))
				{
					unk_0xDFF3E4D2D9D51DAE(iLocal_51);
				}
				if (unk_0x749F5228DEB730FF(iLocal_51))
				{
					unk_0xF8136E11BE4BEAC3(iLocal_51);
				}
				unk_0x1F4E5EFBFE503FB3(iLocal_51, false);
				unk_0x96BFF0680C7B6FD5(iLocal_51, true);
			}
			else if (!unk_0x7112137033807390(iLocal_51, 0))
			{
				unk_0x31BE5698CEB2831B(iLocal_51, 1);
				unk_0x92C40FD8A8A4ACAC(iLocal_51, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_52)
		{
			if (!unk_0x4915F4759304D5CF(iLocal_52[iVar0]) && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				unk_0x57BAE9F63852E6FF(iLocal_52[iVar0]);
				if (iLocal_63 || iLocal_70)
				{
					unk_0xDA4D3941AFF8EF12(iLocal_52[iVar0], unk_0xA19140A5C42D8715(), 0, 16);
				}
				else
				{
					unk_0x33B5487515BD13D5(iLocal_52[iVar0], unk_0xA19140A5C42D8715(), 1000f, -1, 0, 0);
					func_104();
				}
				unk_0xD738221C247C8B71(iLocal_52[iVar0], true);
			}
			iVar0++;
		}
		unk_0xC0AC848E56940C34(&(iLocal_57[0]));
		unk_0xC0AC848E56940C34(&(iLocal_57[1]));
		if (unk_0xDC5D81351D6A4DDB(iLocal_54))
		{
			unk_0x792676988A48387F(&iLocal_54);
		}
		if (unk_0xDC5D81351D6A4DDB(iLocal_56))
		{
			if (unk_0xF797E4DD45066C88(iLocal_56))
			{
				unk_0xF334C9B245CD323D(iLocal_56, 1, true);
			}
			unk_0xAA1FF14A8DC5C352(&iLocal_56);
		}
		if (unk_0xCE3CB618AFE55EFB(iLocal_123))
		{
			unk_0xE1623437A3194332(&iLocal_123);
		}
		iLocal_58 = 0;
		while (iLocal_58 <= 1)
		{
			if (unk_0xCE3CB618AFE55EFB(iLocal_87[iLocal_58]))
			{
				unk_0xE1623437A3194332(&(iLocal_87[iLocal_58]));
			}
			iLocal_58++;
		}
		if (unk_0xCE3CB618AFE55EFB(iLocal_88))
		{
			unk_0xE1623437A3194332(&iLocal_88);
		}
		if (unk_0x37B568B777BC65F9(iLocal_71))
		{
			unk_0x77F0486CE0E598D5(iLocal_71, 0);
		}
		unk_0x60DEFBFF740D4C09(5, true);
		unk_0x60DEFBFF740D4C09(3, true);
		unk_0xBF6EED5D6E0CD9BF(1f);
		unk_0x413F34FCFABEDE4B(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, true, 1);
	}
	func_207(-1);
	unk_0x8F1A9FE6D91AAFEB();
}

void func_207(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_160())
	{
		func_211(iParam0);
		unk_0x9E212A43A08FF3F9(0, 0);
		Global_106061 = unk_0xFD34717937104F1C();
		func_210(30000);
		StringCopy(&cVar0, func_209(Global_106059, 1), 64);
		if (func_38(Global_106059) > 0)
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
	func_208(&Global_25518);
	Global_106060 = 0;
	func_163(-1);
}

void func_208(var uParam0)
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

char* func_209(int iParam0, bool bParam1)
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

void func_210(int iParam0)
{
	Global_36668 = (unk_0xFD34717937104F1C() + iParam0);
}

void func_211(int iParam0)
{
	func_212(iParam0, 0, func_217(iParam0));
}

void func_212(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_181();
	func_215(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_214(iParam0, &uVar0);
	Var1 = { func_213(&uVar0) };
}

struct<16> func_213(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_175(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_174(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_173(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_176(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_179(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_177(*uParam0), 64);
	return Var0;
}

void func_214(int iParam0, var uParam1)
{
	Global_106070.f_24967.f_43[iParam0] = *uParam1;
}

void func_215(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_177(*uParam0);
	iVar1 = func_179(*uParam0);
	iVar2 = func_176(*uParam0);
	iVar3 = func_175(*uParam0);
	iVar4 = func_174(*uParam0);
	iVar5 = func_173(*uParam0);
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
	iVar6 = func_172(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_172(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_216(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_216(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_187(uParam0, iParam1);
	func_186(uParam0, iParam2);
	func_185(uParam0, iParam3);
	func_183(uParam0, iParam5);
	func_184(uParam0, iParam4);
	func_182(uParam0, iParam6);
}

int func_217(int iParam0)
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

void func_218()
{
	Global_25694 = 0;
	Global_25695 = 0;
	Global_25697 = 0;
	Global_25698 = 0;
	Global_25699 = 0;
}

void func_219(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		func_136(iVar0, bParam0);
		iVar0++;
	}
}

