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
	vector3 vLocal_45 = { 0f, 0f, 0f };
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	vector3 vLocal_55 = { 0f, 0f, 0f };
	vector3 vLocal_56 = { 0f, 0f, 0f };
	float fLocal_57 = 0f;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	char* sLocal_65 = NULL;
	float fLocal_66 = 0f;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	float fLocal_74 = 0f;
	vector3 vLocal_75 = { 0f, 0f, 0f };
	vector3 vLocal_76 = { 0f, 0f, 0f };
	float fLocal_77 = 0f;
	bool bLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	vector3 vLocal_81 = { 0f, 0f, 0f };
	int iLocal_82 = 0;
	vector3 vLocal_83[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	float fLocal_93[5] = { 0f, 0f, 0f, 0f, 0f };
	float fLocal_94 = 0f;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 16;
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
	int iLocal_266 = 0;
	struct<100> Local_267 = { 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1 } ;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	struct<2> Local_274 = { 0, 5 } ;
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
	var uLocal_290 = 5;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
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
	vLocal_45 = { 500f, 500f, 500f };
	iLocal_60 = -1;
	iLocal_61 = 2050;
	iLocal_62 = -1;
	iLocal_63 = -1;
	sLocal_65 = "CC_SUBSTR";
	fLocal_66 = 125f;
	iLocal_67 = 1;
	iLocal_69 = 263;
	fLocal_77 = 4f;
	bLocal_78 = true;
	iLocal_79 = 6;
	iLocal_80 = 18;
	iLocal_82 = -1;
	bLocal_96 = true;
	iLocal_97 = 1;
	vLocal_56 = { ScriptParam_274.f_1[0 /*3*/] };
	vLocal_56 = { vLocal_56 };
	iLocal_54 = iLocal_54;
	Local_52 = { Local_52 };
	bVar0 = false;
	if (unk_0x5EBD03AF78E7B4DB(82))
	{
		func_145(1);
	}
	iLocal_53 = unk_0xEE978C39384D834F(unk_0xD4E735F4B6A956AC());
	iLocal_59 = 0;
	func_143(&Global_104721, 0);
	func_137();
	unk_0xB636914AC5F265E9(1);
	if (func_136(uLocal_58, 1))
	{
		iLocal_64 = 10;
	}
	else
	{
		iLocal_64 = 9;
	}
	while (!Global_31887)
	{
		wait(0);
	}
	if (!func_136(uLocal_58, 8))
	{
		if (!func_134(iLocal_64))
		{
			if (func_133(0, iLocal_63))
			{
				func_145(0);
			}
			else
			{
				func_145(1);
			}
		}
	}
	if (iLocal_63 != -1)
	{
		if (!func_133(0, iLocal_63))
		{
			bLocal_78 = false;
		}
	}
	if (func_136(uLocal_58, 8388608))
	{
		func_145(1);
	}
	if (func_136(uLocal_58, 524288) && (func_132() && !func_131()))
	{
		func_145(1);
	}
	if (unk_0x8B1574454E8C2421(unk_0xB09979570758BDAD()) > 1 && !func_136(uLocal_58, 4194304))
	{
		if (iLocal_69 != 263)
		{
			func_130(iLocal_69, 1, 0);
			iLocal_69 = 263;
		}
		func_129(10);
	}
	while (true)
	{
		if (!func_136(uLocal_58, 268435456))
		{
			fVar1 = 0f;
			if (unk_0x8F7BA8E028ADF980(ScriptParam_274.f_1[0 /*3*/], &fVar1, 0, 0))
			{
				if (fVar1 != 0f)
				{
					ScriptParam_274.f_1[0 /*3*/].f_2 = fVar1;
					func_128(&uLocal_58, 268435456);
				}
			}
		}
		iLocal_53 = unk_0xEE978C39384D834F(unk_0xD4E735F4B6A956AC());
		if (func_136(uLocal_58, 1048576))
		{
			if (unk_0x7112137033807390(iLocal_53, 0))
			{
				func_145(1);
			}
		}
		if (unk_0xDC5D81351D6A4DDB(iLocal_53) && !unk_0x7112137033807390(iLocal_53, 0))
		{
			vLocal_55 = { unk_0xE2BBD32891C18569(iLocal_53, true) };
			fLocal_57 = vdist2(vLocal_55, ScriptParam_274.f_1[0 /*3*/]);
			fLocal_57 = fLocal_57;
			vLocal_75 = { vLocal_55 };
			vLocal_76 = { ScriptParam_274.f_1[0 /*3*/] };
			vLocal_75.z = 0f;
			vLocal_76.z = 0f;
			fLocal_74 = vdist2(vLocal_75, vLocal_76);
			switch (iLocal_59)
			{
				case 0:
					if (func_134(iLocal_64) || (func_136(uLocal_58, 16) && !func_136(uLocal_58, 524288)))
					{
						iLocal_62 = -1;
						func_124();
						func_129(1);
					}
					else
					{
						if (fLocal_74 > (fLocal_66 * fLocal_66))
						{
							if (iLocal_69 != 263)
							{
								func_130(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
							func_129(10);
						}
						if ((vLocal_55.z - ScriptParam_274.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_122() && fLocal_57 > ((fLocal_77 * 1.5f) * (fLocal_77 * 1.5f)))
					{
						iLocal_67 = iLocal_67;
						func_129(3);
					}
					else
					{
						func_124();
					}
					break;
				
				case 3:
					if (unk_0xB3ADBAEA60664F46())
					{
						func_145(1);
						return;
					}
					if (!func_134(iLocal_64))
					{
						if (!func_136(uLocal_58, 8))
						{
							bVar2 = true;
							if (unk_0x3CAC2741CC1A631F(&(Global_93232.f_3), &Local_52))
							{
								Local_52 = { Local_51 };
								bVar2 = false;
							}
							if (bVar2)
							{
								func_145(0);
								break;
							}
						}
					}
					if (!func_136(uLocal_58, 4))
					{
						func_111();
						func_128(&uLocal_58, 4);
					}
					if (fLocal_74 > (fLocal_66 * fLocal_66) && !Global_93266)
					{
						if (iLocal_69 != 263)
						{
							if (func_110(6) && !func_109(iLocal_69))
							{
							}
							else
							{
								func_130(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
						}
						func_129(10);
					}
					else
					{
						Local_52 = { Local_51 };
						bVar3 = !func_136(uLocal_58, 64);
						func_143(&uLocal_58, 128);
						if (!func_108(3) && !Global_93266)
						{
							if (func_136(uLocal_58, 2097152))
							{
								if ((!func_136(uLocal_58, 1) || !unk_0xDC5D81351D6A4DDB(func_107())) && !Global_93266)
								{
									func_129(10);
									break;
								}
							}
						}
						if (func_136(uLocal_58, 524288) && (func_132() && !func_131()))
						{
							func_145(1);
						}
						if (func_106())
						{
							func_145(1);
						}
						if ((!func_98(6) || Global_105117) || func_97())
						{
							bVar3 = false;
						}
						if (!bLocal_78)
						{
							func_95(&uLocal_58, 128);
							bVar3 = false;
						}
						if (func_136(uLocal_58, 1))
						{
							if (!func_94())
							{
								func_95(&uLocal_58, 128);
								bVar3 = false;
							}
						}
						if (func_93(1))
						{
							bVar3 = false;
						}
						if (Global_71205)
						{
							bVar3 = false;
						}
						if (func_92())
						{
							bVar3 = false;
						}
						if (unk_0x47C3DC461C758C29())
						{
							bVar3 = false;
						}
						if (func_91() || func_90(8, -1))
						{
							bVar3 = false;
						}
						if (!unk_0x783F4B81000DAFE2(unk_0xD4E735F4B6A956AC()))
						{
							bVar3 = false;
						}
						if (!unk_0xECEC0B592ADDCDE7(unk_0xD4E735F4B6A956AC()))
						{
							bVar3 = false;
						}
						if (func_89(0) || func_88())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (!unk_0xA60C975CBAB69F34(iLocal_53, ScriptParam_274.f_1[0 /*3*/], fLocal_77, fLocal_77, 2f, false, true, iLocal_67))
							{
								bVar3 = false;
							}
							iVar4 = unk_0x34CEB9721AC6A0A9();
							if (iLocal_79 > iLocal_80)
							{
								if (iVar4 < iLocal_79 && iVar4 >= iLocal_80)
								{
									func_95(&uLocal_58, 128);
									bVar3 = false;
									if (fLocal_57 < ((fLocal_77 * fLocal_77) + 4f))
									{
										if (!func_136(uLocal_58, 134217728))
										{
											func_87("MG_NA_TIME", iLocal_79, iLocal_80);
											func_95(&uLocal_58, 134217728);
										}
									}
									else
									{
										func_143(&uLocal_58, 134217728);
									}
								}
							}
							else if (iVar4 < iLocal_79 || iVar4 >= iLocal_80)
							{
								func_95(&uLocal_58, 128);
								bVar3 = false;
								if (fLocal_57 < ((fLocal_77 * fLocal_77) + 4f))
								{
									if (!func_136(uLocal_58, 134217728))
									{
										func_87("MG_NA_TIME", iLocal_79, iLocal_80);
										func_95(&uLocal_58, 134217728);
									}
								}
								else
								{
									func_143(&uLocal_58, 134217728);
								}
							}
							if (!unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								unk_0x9EA8CBEA7355649E(0, 51);
								if (func_86(iLocal_54))
								{
									if (iLocal_60 == -1)
									{
										func_85(&iLocal_60, 4, sLocal_65, 0, 0, 0, 0);
										func_95(&uLocal_58, 2048);
									}
									else if (!func_136(uLocal_58, 2048) || !unk_0xE06AA0996C4E4E03())
									{
										func_84(&iLocal_60);
										func_143(&uLocal_58, 2048);
									}
									if (func_82(iLocal_60, 1))
									{
										sLocal_65 = sLocal_65;
										func_84(&iLocal_60);
										func_143(&uLocal_58, 2048);
										unk_0xD75A4240F0AD8613(&Local_52);
										unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 56);
										func_129(5);
									}
								}
								else
								{
									sLocal_65 = sLocal_65;
									func_84(&iLocal_60);
									func_143(&uLocal_58, 2048);
									unk_0xD75A4240F0AD8613(&Local_52);
									unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 56);
									func_129(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_60 != -1)
							{
								func_84(&iLocal_60);
								func_143(&uLocal_58, 2048);
								unk_0x135C61E339DABBAC(0);
							}
						}
					}
					func_50();
					break;
				
				case 5:
					unk_0x9EA8CBEA7355649E(0, 51);
					if (unk_0xB1FDFCECA75CE4A7(&Local_52))
					{
						if (iLocal_60 != -1)
						{
							func_84(&iLocal_60);
						}
						iVar5 = 2;
						bVar0 = false;
						if (func_136(uLocal_58, 1))
						{
							if (func_110(6) || func_110(7))
							{
								iVar5 = 1;
								bVar0 = true;
							}
						}
						if (iVar5 != 1)
						{
							iVar5 = func_47(&iLocal_62, 6, iLocal_64, 0, 0);
						}
						if (iVar5 == 1)
						{
							if (!unk_0x7112137033807390(iLocal_54, 0))
							{
								unk_0x792676988A48387F(&iLocal_54);
							}
							if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
							{
								unk_0xDEE4574BA71257AB(unk_0xD4E735F4B6A956AC());
							}
							func_46();
							if (Global_37271)
							{
								func_37(unk_0xA19140A5C42D8715());
							}
							unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 56);
							iLocal_50 = func_36();
							func_95(&uLocal_58, 2);
							func_129(6);
							func_32(&iLocal_71);
							if (iLocal_63 != -1)
							{
								func_31(iLocal_63);
								func_29(func_30(iLocal_63), 0, 0);
							}
						}
						else if (iVar5 == 2)
						{
							func_28();
						}
						else if (iVar5 == 0)
						{
							func_129(10);
						}
					}
					else
					{
						func_28();
					}
					break;
				
				case 6:
					if (func_136(Global_104721, 262144))
					{
						func_143(&Global_104721, 262144);
						func_27();
					}
					if (func_136(uLocal_58, 2097152))
					{
						if (!func_108(3) && !unk_0x2BCD0524CDEE1FD2(iLocal_50))
						{
							func_129(10);
						}
					}
					if (!unk_0x2BCD0524CDEE1FD2(iLocal_50))
					{
						unk_0x4CA80915EDAE5C7E(round((func_23(&iLocal_71) * 1000f)), iLocal_63, 0);
						func_22(&iLocal_71);
						func_143(&uLocal_58, 256);
						func_21();
						if (bVar0)
						{
							func_143(&uLocal_58, 2);
						}
						else if (func_136(uLocal_58, 2))
						{
							if (func_136(Global_104721, 0))
							{
								func_20(&iLocal_62);
								iLocal_62 = -1;
								func_143(&uLocal_58, 2);
							}
							else
							{
								func_20(&iLocal_62);
								iLocal_62 = -1;
								func_143(&uLocal_58, 2);
							}
						}
						func_129(0);
						if (iLocal_63 != -1)
						{
							if (func_136(Global_104721, 0))
							{
								unk_0x5D84F5C14E1207BE(func_30(iLocal_63), 0, Global_93269, 0);
								func_19(func_30(iLocal_63), 0, Global_93269, 1, 0);
							}
							else
							{
								unk_0x5D84F5C14E1207BE(func_30(iLocal_63), 0, Global_93269, 0);
								func_19(func_30(iLocal_63), 0, Global_93269, 0, 0);
							}
						}
						func_5();
						func_143(&Global_104721, 0);
						if (func_136(uLocal_58, 16777216))
						{
							func_145(1);
						}
						if (iLocal_63 != -1)
						{
							if (Global_106070.f_9057)
							{
								if (!func_133(0, iLocal_63))
								{
									func_145(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_129(0);
					break;
				
				case 10:
					func_145(1);
					break;
				
				case 9:
					if (fLocal_74 > (fLocal_66 * fLocal_66))
					{
						if (iLocal_69 != 263)
						{
							func_130(iLocal_69, 1, 0);
							iLocal_69 = 263;
						}
						func_129(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_69 != 263)
					{
						func_130(iLocal_69, 0, 0);
					}
					if (iLocal_60 != -1)
					{
						func_84(&iLocal_60);
					}
					if (!unk_0x429D45A6C6520026(sLocal_65))
					{
						if (func_1(sLocal_65))
						{
							unk_0x135C61E339DABBAC(1);
						}
					}
					func_129(4);
					break;
				
				case 4:
					if ((iLocal_68 % 150) == 0)
					{
						if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
						{
							if (iLocal_70 == 2)
							{
								if (iLocal_70 == 2)
								{
									if (func_134(iLocal_64) && func_133(0, iLocal_63))
									{
										func_137();
										if (iLocal_69 != 263)
										{
											func_130(iLocal_69, 1, 0);
										}
										func_129(0);
									}
								}
							}
							else if (iLocal_70 == 0)
							{
								if (fLocal_74 > (fLocal_66 * fLocal_66))
								{
									if (iLocal_69 != 263)
									{
										func_130(iLocal_69, 1, 0);
										iLocal_69 = 263;
									}
									func_129(10);
								}
							}
							else if (iLocal_70 == 1)
							{
								if (fLocal_74 > ((80f + 5f) * (80f + 5f)))
								{
									func_137();
									if (iLocal_69 != 263)
									{
										func_130(iLocal_69, 1, 0);
									}
									func_129(0);
								}
							}
						}
						else
						{
							func_130(iLocal_69, 1, 0);
						}
					}
					else
					{
						iLocal_68++;
					}
					break;
				}
		}
		wait(0);
	}
}

int func_1(char* sParam0)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	return unk_0x3D94488A86ABB03F(0);
}

void func_2()
{
	char* sVar0;
	
	func_3(&(Local_267.f_71));
	func_3(&(Local_267.f_77));
	func_3(&(Local_267.f_99));
	unk_0x4DC885EA8D6AF7FC("amb@world_human_hang_out_street@male_a@idle_a");
	unk_0x4DC885EA8D6AF7FC("amb@world_human_hang_out_street@male_b@idle_a");
	unk_0x4DC885EA8D6AF7FC("amb@world_human_hang_out_street@male_c@idle_a");
	unk_0x4DC885EA8D6AF7FC("amb@world_human_aa_smoke@male@idle_a");
	unk_0x4DC885EA8D6AF7FC("random@street_race");
	unk_0x4DC885EA8D6AF7FC("gestures@m@standing@casual");
	switch (iLocal_82)
	{
		case 0:
			sVar0 = "CanyonCliffs_Start";
			break;
		
		case 1:
			sVar0 = "RidgeRun_Start";
			break;
		
		case 3:
			sVar0 = "ValleyTrail_Start";
			break;
		
		case 4:
			sVar0 = "LakesideSplash_Start";
			break;
		
		case 5:
			sVar0 = "EcoFriendly_Start";
			break;
		
		case 2:
			sVar0 = "MinewardSpiral_Start";
			break;
	}
	if (!unk_0x429D45A6C6520026(sVar0))
	{
		if (unk_0x97AA049940DBD81F(sVar0))
		{
			if (unk_0x63D3995CEC2213BA(sVar0))
			{
				unk_0xF10C7DDEAC709758(sVar0, false);
			}
		}
	}
}

void func_3(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0xA5DE74AE39867B03((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_4()
{
}

void func_5()
{
	if (func_136(Global_106070.f_18988, 1))
	{
		func_143(&(Global_106070.f_18988), 1);
		func_18();
		func_8();
		func_6();
	}
}

int func_6()
{
	if (func_7(0))
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

bool func_7(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

void func_8()
{
	if (Global_106070.f_18988.f_18 < Global_106070.f_18988.f_19[iLocal_82] || Global_106070.f_18988.f_19[iLocal_82] == 0)
	{
		Global_106070.f_18988.f_19[iLocal_82] = Global_106070.f_18988.f_18;
		Global_106070.f_18988.f_18 = 999;
	}
	if (iLocal_82 == Global_106070.f_18988.f_1 || Global_106070.f_18988.f_1 == -1)
	{
		if (Global_106070.f_18988.f_1 != 5)
		{
			Global_106070.f_18988.f_1++;
			switch (Global_106070.f_18988.f_1)
			{
				case 1:
					func_130(70, 1, 0);
					func_17(70, 1);
					func_130(71, 1, 0);
					break;
				
				case 2:
					func_130(70, 1, 0);
					func_17(70, 1);
					func_130(71, 1, 0);
					func_17(71, 1);
					func_130(72, 1, 0);
					break;
				
				case 3:
					func_130(70, 1, 0);
					func_17(70, 1);
					func_130(71, 1, 0);
					func_17(71, 1);
					func_130(72, 1, 0);
					func_17(72, 1);
					func_130(73, 1, 0);
					break;
				
				case 4:
					func_130(70, 1, 0);
					func_17(70, 1);
					func_130(71, 1, 0);
					func_17(71, 1);
					func_130(72, 1, 0);
					func_17(72, 1);
					func_130(73, 1, 0);
					func_17(73, 1);
					func_130(74, 1, 0);
					break;
				
				case 5:
					func_130(70, 1, 0);
					func_17(70, 1);
					func_130(71, 1, 0);
					func_17(71, 1);
					func_130(72, 1, 0);
					func_17(72, 1);
					func_130(73, 1, 0);
					func_17(73, 1);
					func_130(74, 1, 0);
					func_17(74, 1);
					func_130(75, 1, 0);
					break;
			}
			func_14("OFFR_NEW", 0, 0, -1, 10000, 7, 0, 0, 0);
		}
		else
		{
			func_130(70, 1, 0);
			func_17(70, 1);
			func_130(71, 1, 0);
			func_17(71, 1);
			func_130(73, 1, 0);
			func_17(73, 1);
			func_130(74, 1, 0);
			func_17(74, 1);
			func_130(75, 1, 0);
			func_17(75, 1);
			func_130(72, 1, 0);
			func_17(72, 1);
		}
		switch (Global_106070.f_18988.f_1)
		{
			case 0:
				func_13(70);
				func_9(71);
				break;
			
			case 1:
				func_13(71);
				func_9(72);
				break;
			
			case 2:
				func_13(72);
				func_9(73);
				break;
			
			case 3:
				func_13(73);
				func_9(74);
				break;
			
			case 4:
				func_13(74);
				func_9(75);
				break;
			
			case 5:
				func_13(75);
				break;
			}
	}
}

void func_9(int iParam0)
{
	func_12(iParam0, 1, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_10(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0x05EFB6A616B6FADE(Global_25834[iVar0 /*23*/].f_11, 4))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x2BCFB39E86340DAA(&(Global_25834[iVar0 /*23*/].f_11), 4);
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_25834[iVar0 /*23*/].f_11), 4);
	}
	if (Global_25831 == 1)
	{
		Global_25832 = 1;
	}
	Global_25831 = 1;
	unk_0x2BCFB39E86340DAA(&(Global_25834[iVar0 /*23*/].f_11), 18);
}

void func_11(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0x05EFB6A616B6FADE(Global_25834[iVar0 /*23*/].f_11, 5))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x2BCFB39E86340DAA(&(Global_25834[iVar0 /*23*/].f_11), 5);
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_25834[iVar0 /*23*/].f_11), 5);
	}
	if (Global_25831 == 1)
	{
		Global_25832 = 1;
	}
	Global_25831 = 1;
	unk_0x2BCFB39E86340DAA(&(Global_25834[iVar0 /*23*/].f_11), 18);
}

void func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0x05EFB6A616B6FADE(Global_25834[iVar0 /*23*/].f_11, 6))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x2BCFB39E86340DAA(&(Global_25834[iVar0 /*23*/].f_11), 6);
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_25834[iVar0 /*23*/].f_11), 6);
	}
	if (bParam2)
	{
		unk_0x2BCFB39E86340DAA(&(Global_25834[iVar0 /*23*/].f_11), 11);
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_25834[iVar0 /*23*/].f_11), 11);
	}
	if (Global_25831 == 1)
	{
		Global_25832 = 1;
	}
	Global_25831 = 1;
	unk_0x2BCFB39E86340DAA(&(Global_25834[iVar0 /*23*/].f_11), 18);
}

void func_13(int iParam0)
{
	func_12(iParam0, 0, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_14(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_15(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_15(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_16();
	}
}

void func_16()
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

void func_17(int iParam0, bool bParam1)
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

void func_18()
{
	unk_0x4004C3CB2300135E();
	unk_0x47DFCAE191D4CA34();
	switch (iLocal_82)
	{
		case 0:
			unk_0xE724181C8BE2BA29(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, 1);
			break;
		
		case 1:
			unk_0xE724181C8BE2BA29(-509.1254f, 1987.582f, 205.3305f, -948.5215f, 2752.741f, 25.35144f, 300f, 1);
			break;
		
		case 3:
			unk_0xE724181C8BE2BA29(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 1);
			break;
		
		case 4:
			break;
		
		case 5:
			unk_0xE724181C8BE2BA29(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 1);
			break;
		
		case 2:
			unk_0xE724181C8BE2BA29(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 1);
			break;
	}
}

void func_19(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (unk_0x429D45A6C6520026(&Global_90397))
	{
		return;
	}
	if (unk_0xCEB43E897180EFFF(sParam0, &Global_90397, 0, -1) != 0)
	{
		return;
	}
	unk_0x70D5564B24C33858(sParam0, iParam1, iParam2, iParam3, iParam4, Global_87504);
	StringCopy(&Global_90397, "", 64);
}

void func_20(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_36079)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_36078 = 0;
	Global_36080 = 0;
	Global_36117 = 15;
	Global_56178 = 0;
	Global_56179 = 0;
}

void func_21()
{
	vector3 vVar0[24];
	
	if (unk_0x365C4466BC171A2D() || unk_0x29A02C184A66D25E())
	{
		unk_0x14D4D10C8FD9E0DD(StackVal, 0, 0, 0);
	}
	else if (unk_0x332D85764ED0503F() || unk_0x7DD04831D0FC44CA())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x5182FF270C9DCEBC(0, &cVar0);
	}
}

void func_22(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_23(int iParam0)
{
	if (func_26(iParam0))
	{
		if (func_25(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_24(unk_0x05EFB6A616B6FADE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_24(bool bParam0)
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

bool func_25(var uParam0)
{
	return unk_0x05EFB6A616B6FADE(*uParam0, 2);
}

bool func_26(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(*iParam0, 1);
}

int func_27()
{
	func_8();
	return 1;
}

void func_28()
{
}

void func_29(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x429D45A6C6520026(&Global_90397))
	{
		unk_0x70D5564B24C33858(&Global_90397, 0, 0, 0, 1, 0);
		StringCopy(&Global_90397, "", 64);
	}
	StringCopy(&Global_90397, sParam0, 64);
	unk_0x68A0B28BF08CE0B0(sParam0, iParam1, iParam2, func_7(0));
}

char* func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_31(int iParam0)
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

void func_32(int iParam0)
{
	if (!func_26(iParam0))
	{
		func_35(iParam0);
	}
	else
	{
		func_33(iParam0);
	}
}

void func_33(int iParam0)
{
	func_34(iParam0, 0f);
}

void func_34(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_24(unk_0x05EFB6A616B6FADE(*iParam0, 4)) - fParam1);
	unk_0x2BCFB39E86340DAA(iParam0, 1);
	unk_0xFA57C719261AA55D(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_35(int iParam0)
{
	if (!func_26(iParam0))
	{
		func_33(iParam0);
	}
}

int func_36()
{
	struct<18> Var0;
	int iVar1;
	int iVar2;
	
	unk_0x135C61E339DABBAC(1);
	Var0.f_4 = 5;
	Var0.f_10 = 5;
	Var0 = iLocal_82;
	Var0.f_1 = { vLocal_81 };
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Var0.f_4)
	{
		Var0.f_4[iVar1] = Local_267[iVar1 /*14*/];
		Var0.f_10[iVar1] = Local_267[iVar1 /*14*/].f_1;
		iVar1++;
	}
	Var0.f_16 = Local_267.f_83;
	Var0.f_17 = Local_267.f_83.f_1;
	unk_0xE60B9F9B48D4783F("SwitchSceneNeutral", 0, 1);
	wait(400);
	iVar2 = start_new_script_with_args(&Local_51, &Var0, 18, iLocal_61);
	unk_0x4659F4154D948B01(&Local_51);
	return iVar2;
}

void func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return;
	}
	iVar0 = func_45(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_37058[iVar0 /*5*/];
		func_40(1, iVar1, 1);
		return;
	}
	iVar2 = func_39(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_38(iVar2);
}

void func_38(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_37032[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_37032[iParam0 /*5*/].f_1 == unk_0xA19140A5C42D8715())
		{
			Global_37269 = 0;
		}
	}
	Global_37032[iParam0 /*5*/] = 13;
	Global_37032[iParam0 /*5*/].f_1 = 0;
	Global_37032[iParam0 /*5*/].f_2 = 0;
	Global_37032[iParam0 /*5*/].f_3 = 0;
	Global_37032[iParam0 /*5*/].f_4 = 0;
	Global_37031 = (Global_37031 - 1);
	if (Global_37031 < 0)
	{
		Global_37031 = 0;
	}
}

int func_39(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_37032[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_40(int iParam0, int iParam1, int iParam2)
{
	func_41(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_43(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_42();
	if (iVar0 == -1)
	{
		return;
	}
	Global_37139[iVar0 /*6*/] = iParam0;
	Global_37139[iVar0 /*6*/].f_1 = iParam1;
	Global_37139[iVar0 /*6*/].f_2 = iParam2;
	Global_37139[iVar0 /*6*/].f_3 = iParam3;
	Global_37139[iVar0 /*6*/].f_4 = iParam4;
	Global_37139[iVar0 /*6*/].f_5 = iParam5;
}

int func_42()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_37139[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_43(int iParam0, int iParam1, int iParam2)
{
	if (func_44(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_44(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_37139[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_37139[iVar0 /*6*/])
			{
				if (iParam1 == Global_37139[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_45(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_37058[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_37058[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_46()
{
	if (Global_3188[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3188[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3188[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3188[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3188[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3188[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0xFA57C719261AA55D(&Global_2383, 25);
	unk_0x2BCFB39E86340DAA(&Global_2384, 11);
}

int func_47(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_49(0))
		{
			return 0;
		}
		Global_36081++;
		*iParam0 = Global_36081;
		unk_0xEF06BE39D11763FC(unk_0xA6580F898F4E801C(), 0);
		Global_17228.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xA5DD4141C1E70561(8);
		}
		Global_36117 = iParam2;
		Global_36079 = *iParam0;
		Global_36080 = iParam4;
		Global_36078 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_36078 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_36078)
			{
				if (Global_36084[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_36079 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_134(iParam2))
		{
			return 0;
		}
		if (Global_36078 == 8)
		{
			return 0;
		}
		Global_36081++;
		*iParam0 = Global_36081;
		Global_36084[Global_36078 /*4*/] = Global_36081;
		Global_36084[Global_36078 /*4*/].f_1 = iParam1;
		Global_36084[Global_36078 /*4*/].f_2 = iParam2;
		Global_36084[Global_36078 /*4*/].f_3 = 0;
		Global_36078++;
		if (iParam4 != 0)
		{
			func_48(iParam0, iParam4);
		}
	}
	return 2;
}

void func_48(var uParam0, int iParam1)
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

int func_49(int iParam0)
{
	if (Global_36117 == 15)
	{
		return 0;
	}
	if (func_134(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_50()
{
	float fVar0;
	
	fVar0 = vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vLocal_81);
	if (fVar0 < 62500f)
	{
		func_74();
		func_71();
		if (iLocal_97)
		{
			if (fVar0 < 64f)
			{
				func_70();
				iLocal_97 = 0;
			}
		}
		if (fVar0 < 400f)
		{
			func_54();
		}
	}
	if (!iLocal_98)
	{
		if (func_52())
		{
			iLocal_98 = 1;
			func_51();
		}
	}
}

void func_51()
{
	iLocal_46++;
}

int func_52()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_53())
	{
		if (!unk_0xDC5D81351D6A4DDB(Local_267[iVar0 /*14*/]) || !unk_0xDC5D81351D6A4DDB(Local_267[iVar0 /*14*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	if (!unk_0xDC5D81351D6A4DDB(Local_267.f_83) || !unk_0xDC5D81351D6A4DDB(Local_267.f_83.f_1))
	{
		return 0;
	}
	return 1;
}

int func_53()
{
	switch (iLocal_82)
	{
		case 0:
		case 3:
		case 5:
		case 2:
			return 5;
			break;
		
		case 1:
		case 4:
			return 4;
			break;
	}
	return 0;
}

void func_54()
{
	int iVar0;
	char* sVar1;
	
	if (!func_26(&iLocal_90))
	{
		func_35(&iLocal_90);
		return;
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_95) && !unk_0x7112137033807390(iLocal_95, 0))
	{
		if (unk_0xF59ACE94F067B46D(iLocal_95))
		{
			return;
		}
	}
	if (func_23(&iLocal_90) >= 8f)
	{
		iVar0 = (unk_0x22C775856F4633CA(0, 65535) % 3) + 1;
		if (iVar0 > 0 && iVar0 <= 3)
		{
			if (unk_0x7112137033807390(Local_267[(iVar0 - 1) /*14*/], 0))
			{
				return;
			}
			switch (iVar0)
			{
				case 1:
					sVar1 = "ORR_GUY1";
					break;
				
				case 2:
					sVar1 = "ORR_GUY2";
					break;
				
				case 3:
					sVar1 = "ORR_GUY3";
					break;
			}
			func_55(&uLocal_101, "ORRAUD", sVar1, 3, 0, 0, 0);
			func_33(&iLocal_90);
		}
	}
}

int func_55(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_69(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_56(sParam2, iParam3, 0);
}

int func_56(char* sParam0, int iParam1, bool bParam2)
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
					func_68();
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
		func_67();
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
				func_61();
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
				if (func_60())
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
			if (func_59())
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
			func_58();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_57();
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
		func_68();
	}
	return 0;
}

void func_57()
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

void func_58()
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

int func_59()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_60()
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

void func_61()
{
	if (func_110(14))
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
		Global_14513 = func_62();
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

var func_62()
{
	func_63();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_63()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_66(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_65(unk_0xA19140A5C42D8715());
			if (func_64(iVar0) && (!func_110(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_64(Global_106070.f_2355.f_539.f_4301))
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

bool func_64(int iParam0)
{
	return iParam0 < 3;
}

int func_65(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_66(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_66(int iParam0)
{
	if (func_64(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_67()
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

void func_68()
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

void func_69(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_70()
{
	int iVar0;
	
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) && !unk_0x7112137033807390(Local_267.f_83, 0))
	{
		iVar0 = unk_0x34CEB9721AC6A0A9();
		if (iVar0 <= iLocal_79 && iVar0 >= iLocal_80)
		{
			iLocal_97 = 0;
			return;
		}
		unk_0x39102BE90DA2BED2(Local_267.f_83, 0f, 0f, 0.75f, 1, 2000, 2000, 2000, 0);
	}
}

void func_71()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x34CEB9721AC6A0A9();
	if (iVar0 <= iLocal_79 && iVar0 >= iLocal_80)
	{
		iLocal_266 = 0;
		return;
	}
	if (!unk_0x7112137033807390(iLocal_95, 0) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		switch (iLocal_266)
		{
			case 0:
				if (vdist2(unk_0xE2BBD32891C18569(iLocal_95, true), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true)) < 64f && !unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					iLocal_99 = 0;
					iLocal_100 = 0;
					iLocal_266 = 1;
				}
				break;
			
			case 1:
				unk_0x2F89329397A277BC(&iVar1);
				unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 0, 2);
				unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
				unk_0x301F42EEE3C40328(iVar1);
				unk_0xE1072FA2FECBAD96(iLocal_95, iVar1);
				unk_0x3A95A0A3221D4208(&iVar1);
				iLocal_266 = 2;
				break;
			
			case 2:
				if ((unk_0xF9D4EF1338E38AFB(iLocal_95, 242628503) != 1 || unk_0xC42DE41AEED00E7B(iLocal_95, unk_0xA19140A5C42D8715(), 20f)) && !unk_0x904275961B875DEB())
				{
					unk_0x0177431263151C4E(iLocal_95, unk_0xA19140A5C42D8715(), -1);
					if (!iLocal_100)
					{
						func_72(iLocal_95, "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_72(iLocal_95, "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_266 = 3;
				}
				break;
			
			case 3:
				if (!unk_0xF59ACE94F067B46D(iLocal_95))
				{
					func_33(&iLocal_87);
					unk_0x3F01127ECD227890(iLocal_95, "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0, 0);
					iLocal_266 = 4;
				}
				break;
			
			case 4:
				if (vdist2(unk_0xE2BBD32891C18569(iLocal_95, true), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true)) > 225f)
				{
					unk_0x2F89329397A277BC(&iVar2);
					unk_0x47D73A216DD513C8(0, Local_267.f_83.f_9, 1000);
					unk_0x3F01127ECD227890(0, Local_267.f_83.f_12, Local_267.f_83.f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0x301F42EEE3C40328(iVar2);
					unk_0xE1072FA2FECBAD96(iLocal_95, iVar2);
					unk_0x3A95A0A3221D4208(&iVar2);
					iLocal_266 = 0;
				}
				if (func_26(&iLocal_87))
				{
					if (func_23(&iLocal_87) >= 5f && !iLocal_99)
					{
						iLocal_99 = 1;
						iLocal_266 = 1;
					}
					else if (func_23(&iLocal_87) >= 10f && !iLocal_100)
					{
						iLocal_100 = 1;
						iLocal_266 = 1;
					}
				}
				break;
			
			case 5:
				break;
			}
	}
}

void func_72(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x85AF6DC3641E2442(iParam0, sParam1, sParam2, func_73(iParam3), 0);
}

int func_73(int iParam0)
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

void func_74()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (unk_0xDC5D81351D6A4DDB(Local_267[iVar2 /*14*/].f_1) && unk_0xDC5D81351D6A4DDB(Local_267[iVar2 /*14*/]))
		{
			if (func_79(Local_267[iVar2 /*14*/], 1, 0, 0, 0) || unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), Local_267[iVar2 /*14*/].f_1, 1))
			{
				func_77();
				func_76(iLocal_69);
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
			}
			if (!unk_0x4915F4759304D5CF(Local_267[iVar2 /*14*/]))
			{
				if (func_26(&(vLocal_83[iVar2 /*3*/])))
				{
					if (func_23(&(vLocal_83[iVar2 /*3*/])) > fLocal_93[iVar2])
					{
						if (unk_0x1095F403F52B42E1(Local_267[iVar2 /*14*/].f_1, 0) && unk_0xE0FD180CD24C0B67(Local_267[iVar2 /*14*/], Local_267[iVar2 /*14*/].f_1, 0))
						{
							iVar0 = unk_0x22C775856F4633CA(250, 500);
							iVar1 = unk_0x22C775856F4633CA(250, 500);
							unk_0x2F89329397A277BC(&iVar3);
							unk_0x95015EE4AAC98495(0, Local_267[iVar2 /*14*/].f_1, 1, iVar0);
							unk_0x95015EE4AAC98495(0, Local_267[iVar2 /*14*/].f_1, 31, iVar1);
							unk_0x301F42EEE3C40328(iVar3);
							if (!unk_0x4915F4759304D5CF(Local_267[iVar2 /*14*/]))
							{
								unk_0xE1072FA2FECBAD96(Local_267[iVar2 /*14*/], iVar3);
							}
							unk_0x3A95A0A3221D4208(&iVar3);
						}
						func_33(&(vLocal_83[iVar2 /*3*/]));
						fLocal_93[iVar2] = unk_0xF59B9063EDAC7451(0f, 3f);
					}
				}
				else
				{
					func_35(&(vLocal_83[iVar2 /*3*/]));
				}
			}
			if (!unk_0x7112137033807390(Local_267[iVar2 /*14*/], 0))
			{
				if ((unk_0xC556072C29E00F04(unk_0xA19140A5C42D8715(), Local_267[iVar2 /*14*/]) && !unk_0x685AE6AF34B35D3B(Local_267[iVar2 /*14*/])) && !unk_0xC35EE16DB41A098F(Local_267[iVar2 /*14*/]))
				{
					Local_267[iVar2 /*14*/].f_11 = 1;
				}
				else if (Local_267[iVar2 /*14*/].f_11)
				{
					unk_0x2F89329397A277BC(&iVar3);
					unk_0x47D73A216DD513C8(0, Local_267[iVar2 /*14*/].f_9, 1000);
					unk_0x3F01127ECD227890(0, Local_267[iVar2 /*14*/].f_12, Local_267[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0x301F42EEE3C40328(iVar3);
					unk_0xE1072FA2FECBAD96(Local_267[iVar2 /*14*/], iVar3);
					unk_0x3A95A0A3221D4208(&iVar3);
					Local_267[iVar2 /*14*/].f_11 = 0;
				}
				if (unk_0x685AE6AF34B35D3B(Local_267[iVar2 /*14*/]) || unk_0xC35EE16DB41A098F(Local_267[iVar2 /*14*/]))
				{
					if (!Local_267[iVar2 /*14*/].f_10 && (unk_0x685AE6AF34B35D3B(Local_267[iVar2 /*14*/]) || unk_0xC35EE16DB41A098F(Local_267[iVar2 /*14*/])))
					{
						Local_267.f_101++;
					}
					Local_267[iVar2 /*14*/].f_10 = 1;
				}
				else if (Local_267[iVar2 /*14*/].f_10)
				{
					unk_0x2F89329397A277BC(&iVar3);
					unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 1000);
					unk_0x3F01127ECD227890(0, "gestures@m@standing@casual", func_75(), 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x47D73A216DD513C8(0, Local_267[iVar2 /*14*/].f_9, 1000);
					unk_0x3F01127ECD227890(0, Local_267[iVar2 /*14*/].f_12, Local_267[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0x301F42EEE3C40328(iVar3);
					unk_0xE1072FA2FECBAD96(Local_267[iVar2 /*14*/], iVar3);
					unk_0x3A95A0A3221D4208(&iVar3);
					Local_267[iVar2 /*14*/].f_10 = 0;
				}
			}
		}
		iVar2++;
	}
	if (unk_0xDC5D81351D6A4DDB(Local_267.f_83.f_1) && unk_0xDC5D81351D6A4DDB(Local_267.f_83))
	{
		if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), Local_267.f_83.f_1, 0))
		{
			iLocal_54 = Local_267.f_83.f_1;
		}
		if (func_79(Local_267.f_83, 1, 0, 0, 0))
		{
			func_77();
			func_76(iLocal_69);
			unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
		}
		if (!unk_0x4915F4759304D5CF(Local_267.f_83))
		{
			if (func_26(&iLocal_84))
			{
				if (func_23(&iLocal_84) > fLocal_94)
				{
					if (unk_0x1095F403F52B42E1(Local_267.f_83.f_1, 0) && unk_0xE0FD180CD24C0B67(Local_267.f_83, Local_267.f_83.f_1, 0))
					{
						iVar0 = unk_0x22C775856F4633CA(250, 500);
						iVar1 = unk_0x22C775856F4633CA(250, 500);
						unk_0x2F89329397A277BC(&iVar3);
						unk_0x95015EE4AAC98495(0, Local_267.f_83.f_1, 1, iVar0);
						unk_0x95015EE4AAC98495(0, Local_267.f_83.f_1, 31, iVar1);
						unk_0x301F42EEE3C40328(iVar3);
						if (!unk_0x4915F4759304D5CF(Local_267.f_83))
						{
							unk_0xE1072FA2FECBAD96(Local_267.f_83, iVar3);
						}
						unk_0x3A95A0A3221D4208(&iVar3);
					}
					func_33(&iLocal_84);
					fLocal_94 = unk_0xF59B9063EDAC7451(0f, 3f);
				}
			}
			else
			{
				func_35(&iLocal_84);
			}
		}
		if (!unk_0x7112137033807390(Local_267.f_83, 0))
		{
			if ((unk_0xC556072C29E00F04(unk_0xA19140A5C42D8715(), Local_267.f_83) && !unk_0x685AE6AF34B35D3B(Local_267.f_83)) && !unk_0xC35EE16DB41A098F(Local_267.f_83))
			{
				Local_267.f_83.f_11 = 1;
			}
			else if (Local_267.f_83.f_11)
			{
				unk_0x2F89329397A277BC(&iVar3);
				unk_0x47D73A216DD513C8(0, Local_267.f_83.f_9, 1000);
				unk_0x3F01127ECD227890(0, Local_267.f_83.f_12, Local_267.f_83.f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x301F42EEE3C40328(iVar3);
				unk_0xE1072FA2FECBAD96(Local_267.f_83, iVar3);
				unk_0x3A95A0A3221D4208(&iVar3);
				Local_267.f_83.f_11 = 0;
			}
			if (unk_0x685AE6AF34B35D3B(Local_267.f_83) || unk_0xC35EE16DB41A098F(Local_267.f_83))
			{
				if (!Local_267.f_83.f_10)
				{
					Local_267.f_101++;
				}
				Local_267.f_83.f_10 = 1;
			}
			else if (Local_267.f_83.f_10)
			{
				unk_0x2F89329397A277BC(&iVar3);
				unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 1000);
				unk_0x3F01127ECD227890(0, "gestures@m@standing@casual", func_75(), 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x47D73A216DD513C8(0, Local_267.f_83.f_9, 1000);
				unk_0x3F01127ECD227890(0, Local_267.f_83.f_12, Local_267.f_83.f_13, 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x301F42EEE3C40328(iVar3);
				unk_0xE1072FA2FECBAD96(Local_267.f_83, iVar3);
				unk_0x3A95A0A3221D4208(&iVar3);
				iLocal_266 = 4;
				func_33(&iLocal_87);
				Local_267.f_83.f_10 = 0;
			}
		}
	}
}

char* func_75()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = (unk_0x22C775856F4633CA(0, 65535) % 2);
	switch (iVar0)
	{
		case 0:
			sVar1 = "gesture_what_hard";
			break;
		
		case 1:
		default:
			sVar1 = "gesture_what_soft";
			break;
	}
	return sVar1;
}

void func_76(int iParam0)
{
	if (iLocal_59 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_130(iParam0, 0, 0);
		}
		iLocal_69 = 263;
		func_84(&iLocal_60);
		iLocal_59 = 9;
	}
}

void func_77()
{
	int iVar0[10];
	int iVar1;
	int iVar2;
	
	unk_0x751DA0D8357E8793(unk_0xA19140A5C42D8715(), &iVar0, -1);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (unk_0xDC5D81351D6A4DDB(iVar0[iVar2]) && !unk_0x4915F4759304D5CF(iVar0[iVar2]))
		{
			if (unk_0x852B8F739A2072BE(unk_0xA19140A5C42D8715(), 4))
			{
				unk_0x33B5487515BD13D5(iVar0[iVar2], unk_0xA19140A5C42D8715(), 100f, -1, 0, 0);
			}
			else
			{
				unk_0x2F89329397A277BC(&iVar1);
				unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), unk_0x22C775856F4633CA(300, 900));
				unk_0xDA4D3941AFF8EF12(0, unk_0xA19140A5C42D8715(), 0, 0);
				unk_0x301F42EEE3C40328(iVar1);
				unk_0xE1072FA2FECBAD96(iVar0[iVar2], iVar1);
				unk_0x3A95A0A3221D4208(&iVar1);
			}
		}
		iVar2++;
	}
	switch (Global_106070.f_18988.f_1)
	{
		case 0:
			func_78(0);
			break;
		
		case 1:
			func_78(0);
			break;
		
		case 3:
			func_78(0);
			break;
		
		case 4:
			func_78(0);
			break;
		
		case 5:
			func_78(0);
			break;
		
		case 2:
			func_78(0);
			break;
	}
}

void func_78(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_70 = iParam0;
	iLocal_68 = 0;
	iLocal_59 = 7;
}

int func_79(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = unk_0xA19140A5C42D8715();
	if (Local_267.f_101 >= 3)
	{
		return 1;
	}
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (!unk_0x4915F4759304D5CF(iParam0))
		{
			vVar1 = { unk_0xE2BBD32891C18569(iParam0, true) };
			if (bParam1)
			{
				if (unk_0xDEAEC99031DCB92A(iParam0, unk_0xA19140A5C42D8715(), 1))
				{
					return 1;
				}
			}
			if (bParam2)
			{
				if (unk_0x967743032563101F(iParam0, iVar0))
				{
					return 1;
				}
			}
			if (bParam4)
			{
				if (unk_0xC556072C29E00F04(iVar0, iParam0))
				{
					return 1;
				}
			}
			if (bParam3)
			{
				if (unk_0x669ABFB25D991447(unk_0xD4E735F4B6A956AC(), iParam0) || unk_0x7591AFB11E7EDDA0(unk_0xD4E735F4B6A956AC(), iParam0))
				{
					if (func_80(iParam0, 1) < 20f)
					{
						return 1;
					}
				}
			}
			if (unk_0x5D7DFE2058701942(iParam0, 0))
			{
				if (unk_0xDEAEC99031DCB92A(unk_0xCAEB6CE71A2C7212(iParam0, 0), iVar0, 1))
				{
					return 1;
				}
			}
			if (unk_0x8B9D3A1A7C2D3C6B(iParam0))
			{
				return 1;
			}
			if (unk_0x852B8F739A2072BE(iVar0, 4))
			{
				if (unk_0x41CA0CDBE31A440F(iVar0))
				{
					if (unk_0xA60C975CBAB69F34(iParam0, unk_0xE2BBD32891C18569(iVar0, true), 45f, 45f, 45f, false, true, 0))
					{
						return 1;
					}
				}
			}
			if (unk_0x9809FE4B550B1EFE(vVar1, 4f, 1))
			{
				return 1;
			}
			if (unk_0x0AF5F990243ADDFB((vVar1.x - 5f), (vVar1.y - 5f), (vVar1.z - 5f), (vVar1.x + 5f), (vVar1.y + 5f), (vVar1.z + 5f), 0))
			{
				return 1;
			}
			if (unk_0x97B2B0016AD3C7C6(iParam0))
			{
				if (unk_0xA8D84E6AD4EB2356(iParam0) == iVar0)
				{
					return 1;
				}
			}
			if ((unk_0x6D7FFF527E125F24(-1, vVar1, 25f) && !unk_0x6D7FFF527E125F24(11, vVar1, 25f)) && !unk_0x6D7FFF527E125F24(13, vVar1, 25f))
			{
				return 1;
			}
			unk_0xDCB46BFC2265476A(iParam0);
		}
		else if (bParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_80(int iParam0, bool bParam1)
{
	return func_81(unk_0xEE978C39384D834F(unk_0xA6580F898F4E801C()), iParam0, bParam1);
}

float func_81(int iParam0, int iParam1, bool bParam2)
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

int func_82(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_83(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x58E3CCF930D23BD5(unk_0xA6580F898F4E801C()))
	{
		return 0;
	}
	if (func_89(0))
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

int func_83(int iParam0)
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

void func_84(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_83(*iParam0);
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

void func_85(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8B1574454E8C2421(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x47C3DC461C758C29())
	{
		if (!*iParam0 == -1)
		{
			func_84(iParam0);
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

int func_86(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0) && unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iParam0, 0))
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_87(char* sParam0, int iParam1, int iParam2)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0xCDA87E1DA52C8C9D(iParam1);
	unk_0xCDA87E1DA52C8C9D(iParam2);
	unk_0x9E55AC8543FF8836(0, 0, true, -1);
}

var func_88()
{
	return Global_68494;
}

int func_89(int iParam0)
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

bool func_91()
{
	return unk_0xFD34717937104F1C() <= Global_17367.f_5873 + 100;
}

int func_92()
{
	if (unk_0x8B1574454E8C2421(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_93(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17228.f_4 && Global_17228.f_104 == 4);
	}
	return Global_17228.f_4;
}

int func_94()
{
	return 1;
}

void func_95(var uParam0, int iParam1)
{
	func_96(uParam0, iParam1);
}

void func_96(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_97()
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		return 0;
	}
	unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		return ((((bVar1 && unk_0xD73B1037F6BD4B90(0, 69)) || (bVar1 && unk_0xD73B1037F6BD4B90(0, 70))) || (bVar1 && unk_0xD73B1037F6BD4B90(0, 68))) || unk_0xFBBCA633CD1A088B(unk_0xD4E735F4B6A956AC()));
	}
	return (((((bVar1 && unk_0xD73B1037F6BD4B90(0, 24)) || (bVar1 && unk_0xD73B1037F6BD4B90(0, 25))) || (bVar1 && unk_0xD73B1037F6BD4B90(0, 47))) || unk_0x8DBEC2BE62488A34(unk_0xA19140A5C42D8715())) || unk_0xFBBCA633CD1A088B(unk_0xD4E735F4B6A956AC()));
}

int func_98(int iParam0)
{
	int iVar0;
	
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
		{
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				iVar0 = func_62();
				if (!func_64(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC()) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x3D77D31E25961596(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0)) || func_105()) || Global_105117) || Global_25461) || func_104()) || func_90(8, -1)) || func_103()) || func_102()) || func_101()) || func_92()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1) || func_105()) || Global_25461) || func_104()) || func_90(8, -1)) || func_101()) || func_103()) || func_102()) || func_92()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC()) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x3D77D31E25961596(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0)) || func_105()) || Global_105117) || Global_25461) || func_104()) || func_90(8, -1)) || func_101()) || func_103()) || func_102()) || func_92()) || Global_106070.f_7660.f_919[iVar0] == 5) || Global_36664 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715()) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0)) || func_105()) || Global_105117) || Global_25461) || func_104()) || func_90(8, -1)) || func_103()) || func_102()) || func_92()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_105() || unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0) || func_90(8, -1)) || func_92()) || func_100()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_90(8, -1) || func_103()) || func_102()) || func_100()) || func_99())
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
							if ((((((((((((((unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0) || unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || func_105()) || Global_25461) || func_104()) || func_90(8, -1)) || func_102()) || func_101()) || func_92()) || Global_106070.f_7660.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0) || !unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC())) || !unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC())) || !unk_0x3A83743561B4F70C()) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || func_105()) || func_102()) || Global_105117) || Global_25461) || func_104()) || Global_37271) || func_90(8, -1)) || func_101()) || func_100()) || func_92()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0) || !unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC())) || !unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC())) || !unk_0x3A83743561B4F70C()) || unk_0x122A8778D4027A82(unk_0xD4E735F4B6A956AC(), 0)) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1)) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0x443A3698D0CD9D06(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || func_105()) || Global_105117) || Global_25461) || func_104()) || func_90(8, -1)) || func_101()) || func_100()) || func_103()) || func_102()) || func_92())
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

var func_99()
{
	return Global_93271.f_1;
}

int func_100()
{
	if (Global_90249 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_84115[Global_90249 /*34*/].f_15, 13);
	}
	return 0;
}

int func_101()
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

bool func_102()
{
	return Global_93284.f_328 > 0;
}

bool func_103()
{
	return Global_93284.f_327 > 0;
}

var func_104()
{
	return Global_1312857;
}

int func_105()
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		return Global_90805.f_44 == 1;
	}
	return 0;
}

int func_106()
{
	if (unk_0x8B1574454E8C2421(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_107()
{
	return Global_89159;
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_110(6) || func_110(7))
			{
				return 1;
			}
			else
			{
				return func_108(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_134(5))
			{
				if (func_98(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0xCE3CB618AFE55EFB(Global_25834[iVar0 /*23*/].f_19);
}

bool func_110(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_111()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x34CEB9721AC6A0A9();
	if ((iVar0 <= iLocal_79 && iVar0 >= iLocal_80) || unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) != 0)
	{
		return;
	}
	if (bLocal_96)
	{
		func_121();
		func_120();
		switch (iLocal_82)
		{
			case 0:
				func_119(-1930.38f, 4441.9f, 38.12f, 260.86f, -1933.442f, 4440.866f, 37.2504f, 184.125f);
				func_119(-1931.24f, 4440.26f, 38.05f, 257.2117f, -1932.795f, 4438.275f, 37.402f, 78.7749f);
				func_119(-1935.01f, 4442.57f, 37.48f, 263.59f, -1934.964f, 4438.306f, 37.1741f, 297.2304f);
				func_119(-1935.5f, 4440.32f, 37.48f, 258.09f, -1937.251f, 4438.761f, 36.9256f, 23.8377f);
				func_119(-1939.63f, 4440.46f, 37.25f, 253.32f, -1938.319f, 4439.913f, 36.7166f, 250.6112f);
				func_118(-1939.564f, 4443.306f, 36.3803f, 262.3551f, -1936.208f, 4444.125f, 36.8594f, 123.8187f);
				break;
			
			case 1:
				func_119(-520.2097f, 2010.816f, 203.6035f, 17.0169f, -517.2971f, 2008.383f, 204.0454f, 2.9896f);
				func_119(-516.9937f, 2013.98f, 203.5907f, 19.3803f, -517.1741f, 2010.813f, 203.8412f, 125.7555f);
				func_119(-518.3414f, 2005.449f, 204.1878f, 20.7231f, -519.0882f, 2013.649f, 203.3304f, 195.7951f);
				func_119(-514.8247f, 2008.574f, 204.3629f, 20.2278f, -514.2933f, 2004.923f, 204.5935f, 126.8655f);
				func_118(-516.1545f, 1999.374f, 204.7715f, 18.7907f, -515.4201f, 2003.622f, 204.5549f, 1.757f);
				break;
			
			case 3:
				func_119(-225.41f, 4227.53f, 44.45f, 82.7f, -231.9795f, 4226.31f, 43.8587f, 353.3938f);
				func_119(-233.16f, 4225.81f, 44.29f, 76.66f, -231.3181f, 4229.25f, 43.8681f, 179.3787f);
				func_119(-233.33f, 4228.89f, 44.35f, 80.88f, -229.4769f, 4226.102f, 43.8909f, 311.8915f);
				func_119(-229.58f, 4225.21f, 44.34f, 75.78f, -227.6066f, 4228.867f, 43.9069f, 186.6535f);
				func_119(-228.85f, 4227.71f, 44.57f, 83.38f, -226.7015f, 4226.683f, 43.8597f, 28.0083f);
				func_118(-225.6736f, 4224.503f, 43.8435f, 77.7579f, -227.2893f, 4224.699f, 43.8335f, 36.55f);
				break;
			
			case 4:
				func_119(1608.91f, 3845.06f, 33.94f, 307.24f, 1610.476f, 3839.163f, 32.9854f, 29.8332f);
				func_119(1606.2f, 3838.41f, 33.62f, 307.44f, 1612.908f, 3841.492f, 32.9721f, 78.3f);
				func_119(1610.47f, 3842.26f, 33.61f, 311.44f, 1608.097f, 3842.676f, 33.3217f, 198.5355f);
				func_119(1604.49f, 3840.42f, 34.18f, 308.19f, 1608.427f, 3837.368f, 32.9989f, 9.9463f);
				func_118(1603.405f, 3836.324f, 33.1144f, 305.055f, 1605.788f, 3840.236f, 33.2826f, 288.7775f);
				break;
			
			case 5:
				func_119(2046.772f, 2130.442f, 91.9486f, 233.1493f, 2036.123f, 2133.981f, 92.615f, 260.0519f);
				func_119(2045.344f, 2126.352f, 91.9358f, 236.3633f, 2044.422f, 2128.961f, 92.088f, 47.8797f);
				func_119(2036.512f, 2137.807f, 92.6507f, 237.2446f, 2041.778f, 2131.354f, 92.4544f, 226.7534f);
				func_119(2041.739f, 2134.324f, 92.4013f, 232.956f, 2039.603f, 2132.563f, 92.6648f, 61.0834f);
				func_119(2039.775f, 2130.025f, 92.5324f, 241.6337f, 2038.744f, 2134.523f, 92.6235f, 128.98f);
				func_118(2030.898f, 2134.197f, 92.5014f, 249.4471f, 2036.58f, 2135.382f, 92.605f, 233.2111f);
				break;
			
			case 2:
				func_119(2992.58f, 2786.28f, 43.21f, 26.81f, 2998.772f, 2777.392f, 42.1008f, 29.7228f);
				func_119(2995.76f, 2787.72f, 43.26f, 33.42f, 2993.12f, 2779.783f, 42.3128f, 286.9825f);
				func_119(2994.91f, 2779.79f, 42.73f, 11.43f, 2999.253f, 2783.97f, 42.5421f, 108.7426f);
				func_119(2999.44f, 2781.11f, 43.11f, 23.89f, 2997.582f, 2787.476f, 42.6953f, 157.4885f);
				func_119(3000.06f, 2775.26f, 42.47f, 17.16f, 2994.719f, 2784.905f, 42.6444f, 213.8879f);
				func_118(2995.525f, 2775.522f, 41.98f, 4.3249f, 2993.511f, 2776.948f, 42.0941f, 305.3785f);
				break;
		}
		switch (iLocal_82)
		{
			case 0:
				sVar1 = "CanyonCliffs_Start";
				break;
			
			case 1:
				sVar1 = "RidgeRun_Start";
				break;
			
			case 3:
				sVar1 = "ValleyTrail_Start";
				break;
			
			case 4:
				sVar1 = "LakesideSplash_Start";
				break;
			
			case 5:
				sVar1 = "EcoFriendly_Start";
				break;
			
			case 2:
				sVar1 = "MinewardSpiral_Start";
				break;
		}
		if (!unk_0x429D45A6C6520026(sVar1))
		{
			if (unk_0x97AA049940DBD81F(sVar1))
			{
				if (!unk_0x63D3995CEC2213BA(sVar1))
				{
					unk_0xF10C7DDEAC709758(sVar1, true);
				}
			}
		}
	}
	func_112();
}

void func_112()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	
	if (fLocal_74 > 9f)
	{
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < Local_267)
		{
			if (!func_117(Local_267[iVar5 /*14*/].f_2))
			{
				Local_267[iVar5 /*14*/].f_1 = unk_0x48CFBECB146FD1A1(func_116(0), Local_267[iVar5 /*14*/].f_2, Local_267[iVar5 /*14*/].f_5, true, true, false);
				unk_0x99F546A9200EA026(Local_267[iVar5 /*14*/].f_1, 1084227584);
				unk_0x0BE3742BB3253F0E(Local_267[iVar5 /*14*/].f_1, true);
				if (func_117(Local_267[iVar5 /*14*/].f_6))
				{
					Local_267[iVar5 /*14*/] = unk_0x91A7C8CA5E332C03(Local_267[iVar5 /*14*/].f_1, 4, func_115(), -1, 1, true);
					unk_0xC19EDC1D7179164C(Local_267[iVar5 /*14*/].f_1, true, false, 0);
				}
				else
				{
					Local_267[iVar5 /*14*/] = unk_0x35C6E06B120EB2E3(4, func_115(), Local_267[iVar5 /*14*/].f_6, Local_267[iVar5 /*14*/].f_9, 1, true);
					iVar1 = iVar5;
					switch (iVar1)
					{
						case 0:
						case 3:
							sVar4 = "idle_a";
							break;
						
						case 1:
						case 4:
							sVar4 = "idle_b";
							break;
						
						default:
							sVar4 = "idle_c";
							break;
					}
					iVar2 = iVar5;
					switch (iVar2)
					{
						case 0:
						case 4:
							sVar3 = "amb@world_human_hang_out_street@male_a@idle_a";
							break;
						
						case 1:
						case 3:
							sVar3 = "amb@world_human_hang_out_street@male_b@idle_a";
							break;
						
						case 2:
						case 5:
							sVar3 = "amb@world_human_hang_out_street@male_c@idle_a";
							break;
					}
					Local_267[iVar5 /*14*/].f_12 = sVar3;
					Local_267[iVar5 /*14*/].f_13 = sVar4;
					unk_0x2F89329397A277BC(&iVar0);
					unk_0x4AABC2A9FCCE3C8F(0, unk_0x22C775856F4633CA(100, 500));
					unk_0x3F01127ECD227890(0, sVar3, sVar4, 8f, -8f, -1, 8193, unk_0xF59B9063EDAC7451(0f, 1f), 0, 0, 0);
					unk_0x301F42EEE3C40328(iVar0);
					unk_0xE1072FA2FECBAD96(Local_267[iVar5 /*14*/], iVar0);
					unk_0x3A95A0A3221D4208(&iVar0);
				}
				unk_0x241F3D2BEEB0124B(Local_267[iVar5 /*14*/], 1);
				unk_0x49BE0FDDF14A305A(Local_267[iVar5 /*14*/], 1, 4096, -1);
			}
			iVar5++;
		}
		Local_267.f_83.f_1 = unk_0x48CFBECB146FD1A1(func_116(1), Local_267.f_83.f_2, Local_267.f_83.f_5, true, true, false);
		unk_0x99F546A9200EA026(Local_267.f_83.f_1, 1084227584);
		unk_0x0BE3742BB3253F0E(Local_267.f_83.f_1, true);
		if (func_117(Local_267.f_83.f_6))
		{
			Local_267.f_83 = unk_0x91A7C8CA5E332C03(Local_267.f_83.f_1, 4, func_115(), -1, 1, true);
			unk_0xC19EDC1D7179164C(Local_267.f_83.f_1, true, false, 0);
		}
		else
		{
			Local_267.f_83 = unk_0x35C6E06B120EB2E3(4, func_115(), Local_267.f_83.f_6, Local_267.f_83.f_9, 1, true);
			iVar1 = (unk_0x22C775856F4633CA(0, 65535) % 3);
			switch (iVar1)
			{
				case 0:
					sVar4 = "idle_a";
					break;
				
				case 1:
					sVar4 = "idle_b";
					break;
				
				default:
					sVar4 = "idle_c";
					break;
			}
			Local_267.f_83.f_12 = "amb@world_human_aa_smoke@male@idle_a";
			Local_267.f_83.f_13 = sVar4;
			unk_0x2F89329397A277BC(&iVar0);
			unk_0xB3E1967E66494060(0, func_114((unk_0x22C775856F4633CA(0, 65535) % 1000), 1, 1000));
			unk_0x3F01127ECD227890(0, "amb@world_human_aa_smoke@male@idle_a", sVar4, 8f, -8f, -1, 1, unk_0xF59B9063EDAC7451(0f, 1f), 0, 0, 0);
			unk_0x301F42EEE3C40328(iVar0);
			unk_0xE1072FA2FECBAD96(Local_267.f_83, iVar0);
			unk_0x3A95A0A3221D4208(&iVar0);
		}
	}
	else if (fLocal_74 < 225f)
	{
	}
	iLocal_95 = Local_267.f_83;
	if (!unk_0x7112137033807390(Local_267[0 /*14*/], 0))
	{
		func_113(&uLocal_101, 1, Local_267[0 /*14*/], "MALE1", 0, 1);
	}
	if (!unk_0x7112137033807390(Local_267[1 /*14*/], 0))
	{
		func_113(&uLocal_101, 2, Local_267[1 /*14*/], "MALE2", 0, 1);
	}
	if (!unk_0x7112137033807390(Local_267[2 /*14*/], 0))
	{
		func_113(&uLocal_101, 3, Local_267[3 /*14*/], "MALE3", 0, 1);
	}
	if (!func_26(&iLocal_90))
	{
		func_35(&iLocal_90);
	}
	else
	{
		func_33(&iLocal_90);
	}
}

void func_113(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_114(int iParam0, int iParam1, int iParam2)
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

int func_115()
{
	return joaat("a_m_y_motox_01");
}

int func_116(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Local_267.f_71)
	{
		if (unk_0x671704836D893828(Local_267.f_71[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iLocal_82 == 1)
	{
		if (!bParam0)
		{
			iVar0 = (iVar0 - 1);
		}
	}
	iVar0 = unk_0x22C775856F4633CA(0, iVar0);
	if (Local_267.f_71[iVar0] == 0)
	{
		if (Local_267.f_71[0] == 0)
		{
			switch (iLocal_82)
			{
				case 0:
					return joaat("sanchez");
					break;
				
				case 1:
					return joaat("mesa");
					break;
				
				case 3:
					return joaat("sanchez");
					break;
				
				case 4:
					return joaat("sanchez");
					break;
				
				case 5:
					return joaat("mesa");
					break;
				
				case 2:
					return joaat("sanchez");
					break;
			}
		}
		else
		{
			return Local_267.f_71[0];
		}
	}
	return Local_267.f_71[iVar0];
}

int func_117(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_118(vector3 vParam0, float fParam1, vector3 vParam2, float fParam3)
{
	if (func_117(Local_267.f_83.f_2))
	{
		Local_267.f_83.f_2 = { vParam0 };
		Local_267.f_83.f_5 = fParam1;
		Local_267.f_83.f_6 = { vParam2 };
		Local_267.f_83.f_9 = fParam3;
	}
}

void func_119(vector3 vParam0, float fParam1, vector3 vParam2, float fParam3)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Local_267)
	{
		if (!bVar1 && func_117(Local_267[iVar0 /*14*/].f_2))
		{
			Local_267[iVar0 /*14*/].f_2 = { vParam0 };
			Local_267[iVar0 /*14*/].f_5 = fParam1;
			Local_267[iVar0 /*14*/].f_6 = { vParam2 };
			Local_267[iVar0 /*14*/].f_9 = fParam3;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
	}
}

void func_120()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_267)
	{
		Local_267[iVar0 /*14*/].f_2 = { 0f, 0f, 0f };
		Local_267[iVar0 /*14*/].f_5 = 0f;
		iVar0++;
	}
	Local_267.f_83.f_2 = { 0f, 0f, 0f };
	Local_267.f_83.f_5 = 0f;
}

void func_121()
{
	switch (iLocal_82)
	{
		case 0:
			unk_0xE537EBD7B736A4E2(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, 1, false, 1);
			unk_0x01AF8CB960828C2B(-227.43f, 3888.9f, 36.41f, 50f, 1, 0, 0, 0, false, 0);
			unk_0x66E6A13BAFFFB63C("WORLD_HUMAN_HIKER", 0);
			break;
		
		case 1:
			unk_0xE537EBD7B736A4E2(-509.1254f, 1987.582f, 205.3305f, -948.5215f, 2752.741f, 25.35144f, 300f, 0, false, 1);
			break;
		
		case 3:
			unk_0x66E6A13BAFFFB63C("WORLD_VEHICLE_DRIVE_SOLO", 0);
			unk_0xE537EBD7B736A4E2(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 1, false, 1);
			unk_0x982F1A2D170EDD0F(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 0, 0, 0, 0, 0, 0);
			unk_0xE537EBD7B736A4E2(-196.58f, 4217.64f, 50.083f, -202.574f, 4210.926f, 40.0262f, 10f, 1, false, 1);
			unk_0x66E6A13BAFFFB63C("WORLD_HUMAN_HIKER", 0);
			unk_0x66E6A13BAFFFB63C("WORLD_VEHICLE_EMPTY", 0);
			unk_0x66E6A13BAFFFB63C("WORLD_MOUNTAIN_LION_WANDER", 0);
			break;
		
		case 4:
			unk_0x66E6A13BAFFFB63C("WORLD_VEHICLE_DRIVE_SOLO", 0);
			unk_0x66E6A13BAFFFB63C("WORLD_VEHICLE_EMPTY", 1);
			unk_0x66E6A13BAFFFB63C("WORLD_VEHICLE_BIKE_OFF_ROAD_RACE", 1);
			break;
		
		case 5:
			unk_0x66E6A13BAFFFB63C("WORLD_VEHICLE_BICYCLE_MOUNTAIN", 0);
			unk_0xE537EBD7B736A4E2(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 100f, 1, false, 1);
			unk_0x982F1A2D170EDD0F(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 0, 0, 0, 0, 0, 0);
			break;
		
		case 2:
			unk_0xF10C7DDEAC709758("QUARRY", false);
			unk_0xE537EBD7B736A4E2(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 1, false, 1);
			unk_0x982F1A2D170EDD0F(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 0, 0, 0, 0, 0, 0);
			break;
	}
}

bool func_122()
{
	return ((((((((func_123(&(Local_267.f_71)) && func_123(&(Local_267.f_77))) && func_123(&(Local_267.f_99))) && unk_0x39C2D9AB77873F84("amb@world_human_hang_out_street@male_a@idle_a")) && unk_0x39C2D9AB77873F84("amb@world_human_hang_out_street@male_b@idle_a")) && unk_0x39C2D9AB77873F84("amb@world_human_hang_out_street@male_c@idle_a")) && unk_0x39C2D9AB77873F84("amb@world_human_aa_smoke@male@idle_a")) && unk_0x39C2D9AB77873F84("random@street_race")) && unk_0x39C2D9AB77873F84("gestures@m@standing@casual"));
}

int func_123(var uParam0)
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

void func_124()
{
	char cVar0[64];
	
	func_126(&(Local_267.f_77), joaat("a_m_y_motox_01"));
	func_126(&(Local_267.f_99), joaat("a_m_y_motox_01"));
	switch (iLocal_82)
	{
		case 0:
			func_126(&(Local_267.f_71), joaat("sanchez"));
			func_126(&(Local_267.f_71), joaat("blazer"));
			break;
		
		case 1:
			func_126(&(Local_267.f_71), joaat("mesa"));
			func_126(&(Local_267.f_71), joaat("bjxl"));
			func_126(&(Local_267.f_71), joaat("patriot"));
			func_126(&(Local_267.f_71), joaat("dubsta2"));
			func_126(&(Local_267.f_71), joaat("bfinjection"));
			break;
		
		case 3:
			func_126(&(Local_267.f_71), joaat("sanchez"));
			func_126(&(Local_267.f_71), joaat("blazer"));
			break;
		
		case 4:
			func_126(&(Local_267.f_71), joaat("sanchez"));
			func_126(&(Local_267.f_71), joaat("blazer"));
			break;
		
		case 5:
			func_126(&(Local_267.f_71), joaat("mesa"));
			func_126(&(Local_267.f_71), joaat("bfinjection"));
			func_126(&(Local_267.f_71), joaat("bjxl"));
			func_126(&(Local_267.f_71), joaat("sadler"));
			func_126(&(Local_267.f_71), joaat("rebel"));
			break;
		
		case 2:
			func_126(&(Local_267.f_71), joaat("sanchez"));
			func_126(&(Local_267.f_71), joaat("blazer"));
			break;
	}
	unk_0x6D68030C791111E0("amb@world_human_hang_out_street@male_a@idle_a");
	unk_0x6D68030C791111E0("amb@world_human_hang_out_street@male_b@idle_a");
	unk_0x6D68030C791111E0("amb@world_human_hang_out_street@male_c@idle_a");
	unk_0x6D68030C791111E0("amb@world_human_aa_smoke@male@idle_a");
	unk_0x6D68030C791111E0("random@street_race");
	unk_0x6D68030C791111E0("gestures@m@standing@casual");
	if (iLocal_82 == 0)
	{
		unk_0xCACEBBBEAD8F262E(-253064476);
		unk_0xCACEBBBEAD8F262E(1512136012);
	}
	StringCopy(&cVar0, "offroadrace", 64);
	switch (iLocal_82)
	{
		case 0:
			StringIntConCat(&cVar0, 1, 64);
			break;
		
		case 1:
			StringIntConCat(&cVar0, 2, 64);
			break;
		
		case 2:
			StringIntConCat(&cVar0, 6, 64);
			break;
		
		case 3:
			StringIntConCat(&cVar0, 3, 64);
			break;
		
		case 4:
			StringIntConCat(&cVar0, 4, 64);
			break;
		
		case 5:
			StringIntConCat(&cVar0, 5, 64);
			break;
	}
	StringConCat(&cVar0, "car", 64);
	unk_0x5C2A13372076C38C(1, &cVar0);
	func_125(&(Local_267.f_77));
	func_125(&(Local_267.f_71));
	func_125(&(Local_267.f_99));
}

void func_125(var uParam0)
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

int func_126(var uParam0, int iParam1)
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
	iVar1 = func_127(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_127(var uParam0)
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

void func_128(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_129(int iParam0)
{
	iLocal_59 = iParam0;
}

void func_130(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0x05EFB6A616B6FADE(Global_25834[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x05EFB6A616B6FADE(Global_25834[iVar0 /*23*/].f_11, 0))
	{
		unk_0x2BCFB39E86340DAA(&(Global_25834[iVar0 /*23*/].f_11), 18);
		if (Global_25831 == 1)
		{
			Global_25832 = 1;
		}
		Global_25831 = 1;
	}
	if (bParam1)
	{
		unk_0x2BCFB39E86340DAA(&(Global_25834[iVar0 /*23*/].f_11), 0);
		unk_0x2BCFB39E86340DAA(&(Global_25834[iVar0 /*23*/].f_11), 15);
		unk_0x2BCFB39E86340DAA(&(Global_25834[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_25834[iVar0 /*23*/].f_11), 0);
		unk_0xFA57C719261AA55D(&(Global_25834[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x05EFB6A616B6FADE(Global_25834[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xCE3CB618AFE55EFB(Global_25834[iVar0 /*23*/].f_19))
		{
			unk_0xB0A6D0CDCFC41141(1);
			unk_0xE1623437A3194332(&(Global_25834[iVar0 /*23*/].f_19));
			unk_0xB0A6D0CDCFC41141(0);
		}
	}
}

int func_131()
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

int func_132()
{
	if (Global_90249 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_84115[Global_90249 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_133(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0x05EFB6A616B6FADE(Global_106070.f_9057.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

bool func_134(int iParam0)
{
	return func_135(iParam0, Global_36117);
}

int func_135(int iParam0, int iParam1)
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

bool func_136(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_137()
{
	StringCopy(&Local_51, "Offroad_Races", 64);
	unk_0xB636914AC5F265E9(1);
	fLocal_77 = (6f + 4f);
	iLocal_63 = 4;
	func_95(&uLocal_58, 4194304);
	iLocal_61 = 25000;
	iLocal_54 = 0;
	iLocal_79 = 0;
	iLocal_80 = 25;
	iLocal_67 = 0;
	iLocal_82 = func_141(vLocal_56, &vLocal_81);
	iLocal_69 = func_140(iLocal_82);
	fLocal_66 = (to_float(func_139(iLocal_69)) + 5f);
	if (func_133(0, iLocal_63))
	{
		bLocal_96 = true;
	}
	else
	{
		func_76(iLocal_69);
		bLocal_96 = false;
	}
	if (iLocal_82 > Global_106070.f_18988.f_1)
	{
		if (func_109(func_140(iLocal_82)))
		{
		}
		iLocal_69 = 263;
		func_76(iLocal_69);
	}
	if (!func_109(func_140(iLocal_82)) && unk_0x3A83743561B4F70C())
	{
		if (iLocal_69 != 263)
		{
			if (func_138(iLocal_69, 1))
			{
				iLocal_69 = 263;
			}
		}
		func_76(iLocal_69);
	}
	if (iLocal_82 == 2)
	{
		iLocal_79 = 20;
		iLocal_80 = 3;
	}
	if (iLocal_82 == 1 || iLocal_82 == 5)
	{
		sLocal_65 = "PLAY_OFFROAD_V";
	}
	else
	{
		sLocal_65 = "PLAY_OFFROAD_M";
	}
}

bool func_138(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	if (bParam1)
	{
		return unk_0x05EFB6A616B6FADE(Global_25834[iVar0 /*23*/].f_11, 15);
	}
	return unk_0x05EFB6A616B6FADE(Global_25834[iVar0 /*23*/].f_11, 0);
}

int func_139(int iParam0)
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 70;
		
		case 1:
			return 71;
		
		case 3:
			return 73;
		
		case 4:
			return 74;
		
		case 5:
			return 75;
		
		case 2:
			return 72;
		
		default:
	}
	return 263;
}

int func_141(vector3 vParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1[7];
	float fVar2;
	int iVar3;
	float fVar4;
	
	iVar0 = 0;
	vVar1[0 /*3*/] = { func_142(0) };
	vVar1[1 /*3*/] = { func_142(1) };
	vVar1[3 /*3*/] = { func_142(3) };
	vVar1[4 /*3*/] = { func_142(4) };
	vVar1[5 /*3*/] = { func_142(5) };
	vVar1[2 /*3*/] = { func_142(2) };
	vVar1[6 /*3*/] = { func_142(6) };
	fVar2 = vdist2(vParam0, vVar1[0 /*3*/]);
	iVar3 = 0;
	fVar4 = 0f;
	iVar3 = 1;
	while (iVar3 <= (7 - 1))
	{
		fVar4 = vdist2(vParam0, vVar1[iVar3 /*3*/]);
		if (fVar4 < fVar2)
		{
			iVar0 = iVar3;
			fVar2 = fVar4;
		}
		iVar3++;
	}
	*uParam1 = { vVar1[iVar0 /*3*/] };
	return iVar0;
}

Vector3 func_142(int iParam0)
{
	if (iParam0 >= 7 || iParam0 <= -1)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -1939.483f, 4443.953f, 37.3474f;
		
		case 1:
			return -516.9256f, 2008.014f, 204.0998f;
		
		case 3:
			return -223.6755f, 4224.644f, 43.7304f;
		
		case 4:
			return 1606.578f, 3841.188f, 33.2931f;
		
		case 5:
			return 2037.664f, 2137.386f, 92.7095f;
		
		case 2:
			return 2996.776f, 2774.085f, 43.26f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_143(var uParam0, int iParam1)
{
	func_144(uParam0, iParam1);
}

void func_144(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_145(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_69 != 263)
		{
			func_130(iLocal_69, 0, 0);
		}
	}
	func_84(&iLocal_60);
	if (func_136(uLocal_58, 2))
	{
		func_5();
		func_143(&uLocal_58, 2);
		func_20(&iLocal_62);
	}
	iLocal_62 = -1;
	func_146();
	unk_0x8F1A9FE6D91AAFEB();
}

void func_146()
{
	func_143(&uLocal_58, 4);
	func_147();
	if (unk_0x2BCD0524CDEE1FD2(iLocal_50))
	{
		unk_0xD64F781E7AD4BE57(iLocal_50, 3);
	}
	if (!unk_0x7032042E5696FFD7(&Local_52))
	{
		if (unk_0x245B8CF1349B3FDF(&Local_52) != 0)
		{
			unk_0x4659F4154D948B01(&Local_52);
		}
	}
}

void func_147()
{
}

