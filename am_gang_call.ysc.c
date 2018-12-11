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
	struct<55> Local_95 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	var uLocal_96 = 0;
	struct<5> Local_97[32];
	int iLocal_98 = 0;
	int iLocal_99[3] = { 0, 0, 0 };
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	vector3 vLocal_105 = { 0f, 0f, 0f };
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 16;
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
	var uLocal_284[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	struct<21> Local_289 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_20 = "NULL";
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
	iLocal_101 = -1;
	iLocal_104 = -1;
	if (unk_0x4C9BACA8D249CB13())
	{
		func_538(ScriptParam_289);
	}
	while (true)
	{
		func_537();
		if (func_527())
		{
			func_524();
		}
		iLocal_106 = unk_0xFFCC7EBF88BDEE54();
		func_515();
		func_512();
		func_507();
		func_506();
		switch (func_505(unk_0x8D4ED2C97DFF2321()))
		{
			case 0:
				if (func_504() == 1)
				{
					Local_97[unk_0x8D4ED2C97DFF2321() /*5*/] = 1;
				}
				else if (func_504() == 4)
				{
					Local_97[unk_0x8D4ED2C97DFF2321() /*5*/] = 3;
				}
				break;
			
			case 1:
				if (func_504() == 1)
				{
					func_498();
				}
				else if (func_504() == 0)
				{
					func_492();
					Local_97[unk_0x8D4ED2C97DFF2321() /*5*/] = 0;
				}
				else if (func_504() == 4)
				{
					Local_97[unk_0x8D4ED2C97DFF2321() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_467();
				func_465(&(Local_95.f_54));
				if (func_464(&(Local_95.f_54)))
				{
					iVar0 = 0;
					while (iVar0 < func_463(iLocal_101))
					{
						func_467();
						iVar0++;
					}
					Local_97[unk_0x8D4ED2C97DFF2321() /*5*/] = 4;
				}
				break;
			
			case 2:
				Local_97[unk_0x8D4ED2C97DFF2321() /*5*/] = 4;
			
			case 4:
				func_254();
				break;
		}
		if (unk_0x45F99485D7E1C29A())
		{
			func_252();
			func_251();
			func_250();
			switch (func_504())
			{
				case 0:
					func_249();
					if (func_245())
					{
						if (!unk_0x7112137033807390(unk_0xEE978C39384D834F(iLocal_103), 0))
						{
							func_243(unk_0xEE978C39384D834F(iLocal_103));
						}
						else
						{
							Local_95.f_36 = { vLocal_105 };
						}
						unk_0xFA57C719261AA55D(&(Local_95.f_2), 6);
						Local_95 = 1;
					}
					break;
				
				case 1:
					if (func_60())
					{
						func_59();
						func_58();
					}
					func_40();
					break;
				
				case 4:
					break;
			}
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (func_504() < 4)
	{
		if (func_22())
		{
			iLocal_107 = 0;
			iVar0 = 0;
			while (iVar0 <= (func_463(iLocal_101) - 1))
			{
				func_2();
				iVar0++;
			}
			Local_95 = 4;
		}
	}
}

void func_2()
{
	var uVar0;
	struct<14> Var1;
	
	if (unk_0x05EFB6A616B6FADE(Local_95.f_10[iLocal_107 /*7*/].f_2, 1) || unk_0x05EFB6A616B6FADE(Local_95.f_10[iLocal_107 /*7*/].f_2, 6))
	{
		if (unk_0x83A1DA4E6C55E952(Local_95.f_10[iLocal_107 /*7*/]))
		{
			if (unk_0xDC5D81351D6A4DDB(unk_0x8A5B683BACF7B78C(Local_95.f_10[iLocal_107 /*7*/])))
			{
				if (unk_0x7112137033807390(unk_0x8A5B683BACF7B78C(Local_95.f_10[iLocal_107 /*7*/]), 0))
				{
					if (!unk_0x05EFB6A616B6FADE(Local_95.f_10[iLocal_107 /*7*/].f_2, 6))
					{
						if (iLocal_101 == 0)
						{
							Local_95.f_48++;
							if (!unk_0x05EFB6A616B6FADE(Local_95.f_2, 12))
							{
								if (unk_0xE425570A0FBF8517(Local_95.f_10[iLocal_107 /*7*/], &uVar0) == iLocal_103)
								{
									unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 12);
								}
							}
							if ((Local_95.f_42 == iLocal_107 && !unk_0x05EFB6A616B6FADE(Local_95.f_2, 5)) || Local_95.f_48 == func_463(iLocal_101))
							{
								Var1.f_2 = -48152463;
								Var1.f_10 = iLocal_103;
								Var1.f_11 = iLocal_102;
								if (func_463(iLocal_101) > 1)
								{
									Var1.f_12 = unk_0x1483A8AE554B8B2B(1);
								}
								else
								{
									Var1.f_12 = unk_0x1483A8AE554B8B2B(0);
								}
								Var1.f_3 = Local_95.f_43;
								func_20(Var1, func_21(1));
								if (Local_95.f_42 == iLocal_107)
								{
									unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 5);
								}
							}
							else if (!unk_0x05EFB6A616B6FADE(Local_95.f_2, 5))
							{
								Var1.f_2 = -1771971111;
								Var1.f_11 = iLocal_102;
								func_20(Var1, func_21(1));
							}
						}
						unk_0x2BCFB39E86340DAA(&(Local_95.f_10[iLocal_107 /*7*/].f_2), 6);
					}
				}
				else
				{
					if (!unk_0x05EFB6A616B6FADE(Local_95.f_10[iLocal_107 /*7*/].f_2, 5))
					{
						unk_0x2BCFB39E86340DAA(&iLocal_98, 2);
					}
					unk_0x2BCFB39E86340DAA(&iLocal_98, 1);
				}
			}
		}
	}
	else
	{
		unk_0x2BCFB39E86340DAA(&iLocal_98, 1);
		unk_0x2BCFB39E86340DAA(&iLocal_98, 2);
	}
	func_3(iLocal_107);
	iLocal_107++;
	if (iLocal_107 >= func_463(iLocal_101))
	{
		iLocal_107 = 0;
		if (unk_0x05EFB6A616B6FADE(Local_95.f_1, 0))
		{
			if (!unk_0x05EFB6A616B6FADE(iLocal_98, 1))
			{
				if (!unk_0x05EFB6A616B6FADE(Local_95.f_1, 1))
				{
					unk_0x2BCFB39E86340DAA(&(Local_95.f_1), 1);
				}
			}
			if (!unk_0x05EFB6A616B6FADE(iLocal_98, 2))
			{
				if (!unk_0x05EFB6A616B6FADE(Local_95.f_1, 9))
				{
					unk_0x2BCFB39E86340DAA(&(Local_95.f_1), 9);
				}
			}
		}
		unk_0xFA57C719261AA55D(&iLocal_98, 1);
		unk_0xFA57C719261AA55D(&iLocal_98, 2);
	}
}

void func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (unk_0x45F99485D7E1C29A())
	{
		if (unk_0x83A1DA4E6C55E952(Local_95.f_10[iParam0 /*7*/]))
		{
			iVar0 = unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]);
			if (!unk_0x7112137033807390(iVar0, 0))
			{
				if (!unk_0x05EFB6A616B6FADE(Local_95.f_10[iParam0 /*7*/].f_2, 9))
				{
					bVar2 = false;
					switch (Local_95.f_10[iParam0 /*7*/].f_1)
					{
						case 0:
							if (func_19(iVar0, 3))
							{
								bVar2 = true;
							}
							break;
					}
					if (bVar2)
					{
						unk_0x2BCFB39E86340DAA(&(Local_95.f_10[iParam0 /*7*/].f_2), 9);
					}
				}
				switch (Local_95.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						if (Local_95.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!unk_0x05EFB6A616B6FADE(Local_95.f_10[iParam0 /*7*/].f_2, 7))
							{
								if ((((unk_0xFD23BED97E9C72A9(iVar0) == 2 || (Global_2423801[iLocal_103 /*413*/].f_236 != -1 && func_18(Global_2423801[iLocal_103 /*413*/].f_236) == 4)) || Global_1589747[iLocal_103 /*790*/].f_663) || func_16(iLocal_103, 0)) || func_9(iLocal_103))
								{
									Local_95.f_10[iParam0 /*7*/].f_3 = iLocal_106;
									unk_0x2BCFB39E86340DAA(&(Local_95.f_10[iParam0 /*7*/].f_2), 7);
								}
							}
							else if ((((unk_0xFD23BED97E9C72A9(iVar0) != 2 && Global_2423801[iLocal_103 /*413*/].f_236 == -1) && !Global_1589747[iLocal_103 /*790*/].f_663) && !func_16(iLocal_103, 0)) && !func_9(iLocal_103))
							{
								unk_0xFA57C719261AA55D(&(Local_95.f_10[iParam0 /*7*/].f_2), 7);
							}
							else if (unk_0x1893BEC593409B02(iLocal_106, Local_95.f_10[iParam0 /*7*/].f_3) > 10000 || unk_0xFD23BED97E9C72A9(iVar0) != 2)
							{
								if (!unk_0x05EFB6A616B6FADE(Local_95.f_2, 10))
								{
									unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 10);
									Local_95.f_39 = { func_8(iLocal_103) };
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < func_463(iLocal_101))
									{
										func_7(iVar1, 3);
										iVar1++;
									}
								}
							}
							if (unk_0x05EFB6A616B6FADE(Local_95.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!unk_0x05EFB6A616B6FADE(Local_95.f_10[iParam0 /*7*/].f_2, 3))
								{
									if (unk_0xE51A575102B2A3C7(iVar0) == 3f && !unk_0x70F79B0BFBB1E7AC(iVar0, 118, 1))
									{
										unk_0x2BCFB39E86340DAA(&(Local_95.f_10[iParam0 /*7*/].f_2), 3);
									}
								}
							}
						}
						if (unk_0x05EFB6A616B6FADE(Local_95.f_2, 1))
						{
							unk_0x2BCFB39E86340DAA(&(Local_95.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_103, 1, 1))
						{
							if (!unk_0x05EFB6A616B6FADE(Local_95.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (func_5(unk_0xE2BBD32891C18569(iVar0, 1), unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iLocal_103), 1), 25f) || !func_5(unk_0xE2BBD32891C18569(iVar0, 1), unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iLocal_103), 1), 625f))
								{
									unk_0x2BCFB39E86340DAA(&(Local_95.f_10[iParam0 /*7*/].f_2), 2);
								}
							}
							if (func_4(unk_0xE2BBD32891C18569(iVar0, 1), unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iLocal_103), 1)) || (unk_0xBCF615B6673B73ED(iVar0) && unk_0x6F76A9CFCCD125F5(iVar0) == unk_0xEE978C39384D834F(iLocal_103)))
							{
								func_7(iParam0, 2);
							}
						}
						break;
					
					case 2:
						if (unk_0x05EFB6A616B6FADE(Local_95.f_2, 1))
						{
							unk_0x2BCFB39E86340DAA(&(Local_95.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_103, 1, 1))
						{
							if (!func_4(unk_0xE2BBD32891C18569(iVar0, 1), unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iLocal_103), 1)) && !(unk_0xBCF615B6673B73ED(iVar0) && unk_0x6F76A9CFCCD125F5(iVar0) == unk_0xEE978C39384D834F(iLocal_103)))
							{
								func_7(iParam0, 1);
							}
						}
						break;
					
					case 3:
						if (Local_95.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!unk_0x05EFB6A616B6FADE(Local_95.f_10[iParam0 /*7*/].f_2, 4))
							{
								if (unk_0x70F79B0BFBB1E7AC(iVar0, 118, 1))
								{
									unk_0x2BCFB39E86340DAA(&(Local_95.f_10[iParam0 /*7*/].f_2), 4);
								}
							}
						}
						break;
					
					case 4:
						break;
					}
				}
			}
	}
}

int func_4(vector3 vParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (unk_0x69C0BB7D03EE045D((vParam1.z - vParam0.z)) < 2f)
	{
		vVar0.x = vParam0.x;
		vVar0.y = vParam0.y;
		vVar1.x = vParam1.x;
		vVar1.y = vParam1.y;
		if (func_5(vVar0, vVar1, 2f))
		{
			return 1;
		}
	}
	return 0;
}

int func_5(vector3 vParam0, vector3 vParam1, float fParam2)
{
	if (vdist2(vParam0, vParam1) < fParam2)
	{
		return 1;
	}
	return 0;
}

int func_6(int iParam0, bool bParam1, bool bParam2)
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

void func_7(int iParam0, int iParam1)
{
	Local_95.f_10[iParam0 /*7*/].f_5 = iParam1;
}

Vector3 func_8(int iParam0)
{
	return unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iParam0), 0);
}

int func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC77FA683E9BB485B(iParam0))
	{
		if (func_14(iParam0, 1))
		{
			iVar0 = unk_0xEE978C39384D834F(iParam0);
			iVar1 = func_11(iParam0);
			if (unk_0xDC5D81351D6A4DDB(iVar1))
			{
				if (unk_0x1095F403F52B42E1(iVar1, 0))
				{
					if (unk_0xE0FD180CD24C0B67(iVar0, iVar1, 0))
					{
						return func_10(iVar1);
					}
				}
			}
		}
	}
	return 0;
}

int func_10(int iParam0)
{
	int iVar0;
	
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		if (unk_0xDE26AC7E7C308E75("MPBitset", 3) && unk_0xAEAF59799C2F26E4(iParam0, "MPBitset"))
		{
			iVar0 = unk_0xBB4F5216F3FCA8EA(iParam0, "MPBitset");
			if (unk_0x05EFB6A616B6FADE(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_11(int iParam0)
{
	if (func_14(iParam0, 1))
	{
		return Global_2524719.f_4883.f_216[func_12(iParam0)];
	}
	return 0;
}

int func_12(int iParam0)
{
	if (iParam0 != func_13())
	{
		return Global_1625435[iParam0 /*560*/].f_11;
	}
	return func_13();
}

int func_13()
{
	return -1;
}

bool func_14(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_15(iParam0))
		{
			return 0;
		}
	}
	return Global_1625435[iParam0 /*560*/].f_11 != func_13();
}

int func_15(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_13())
		{
			return Global_1625435[iParam0 /*560*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_16(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_6(iParam0, 1, 1))
	{
		iVar0 = unk_0xEE978C39384D834F(iParam0);
		if (unk_0x5D7DFE2058701942(iVar0, iParam1))
		{
			if (func_17(unk_0xCAEB6CE71A2C7212(iVar0, iParam1), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_17(int iParam0, bool bParam1)
{
	if (Global_71205)
	{
		if (unk_0xDC5D81351D6A4DDB(iParam0) && (!bParam1 || unk_0x1095F403F52B42E1(iParam0, 0)))
		{
			if (unk_0xAEAF59799C2F26E4(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_18(int iParam0)
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

int func_19(int iParam0, int iParam1)
{
	if (unk_0xDE26AC7E7C308E75("AttributeDamage", 3))
	{
		if (unk_0xAEAF59799C2F26E4(iParam0, "AttributeDamage"))
		{
			if (unk_0x05EFB6A616B6FADE(unk_0xBB4F5216F3FCA8EA(iParam0, "AttributeDamage"), iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_20(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 713068249;
	Param0.f_1 = unk_0xD4E735F4B6A956AC();
	if (!iParam13 == 0)
	{
		unk_0x04F37AFC39D93909(1, &Param0, 14, iParam13);
	}
}

int func_21(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x48908CAFF1B58FF8())
	{
		if (unk_0xA08F374047C715E8(unk_0xDF1881EF65347257(iVar1)))
		{
			iVar2 = unk_0x9279C21787650C40(unk_0xDF1881EF65347257(iVar1));
			if (func_6(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xD4E735F4B6A956AC() || iParam0)
				{
					unk_0x2BCFB39E86340DAA(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_22()
{
	if (unk_0x05EFB6A616B6FADE(Local_95.f_1, 0))
	{
		if (iLocal_101 == 1)
		{
			if (unk_0x05EFB6A616B6FADE(Local_95.f_1, 4))
			{
				unk_0x2BCFB39E86340DAA(&(Local_95.f_3), 11);
				return 1;
			}
		}
		else if (unk_0x05EFB6A616B6FADE(Local_95.f_1, 1))
		{
			unk_0x2BCFB39E86340DAA(&(Local_95.f_3), 0);
			return 1;
		}
	}
	else if (unk_0x05EFB6A616B6FADE(Local_95.f_1, 2))
	{
		unk_0x2BCFB39E86340DAA(&(Local_95.f_3), 1);
		unk_0x2BCFB39E86340DAA(&Global_1646078, iLocal_101);
		return 1;
	}
	if (unk_0x05EFB6A616B6FADE(Local_95.f_3, 12))
	{
		return 1;
	}
	if (iLocal_101 == 0)
	{
		if (unk_0x05EFB6A616B6FADE(Local_95.f_2, 2))
		{
			unk_0x2BCFB39E86340DAA(&(Local_95.f_3), 2);
			return 1;
		}
		if (unk_0x05EFB6A616B6FADE(Local_95.f_2, 8))
		{
			unk_0x2BCFB39E86340DAA(&(Local_95.f_3), 8);
			return 1;
		}
		if (unk_0x05EFB6A616B6FADE(Local_95.f_2, 5))
		{
			unk_0x2BCFB39E86340DAA(&(Local_95.f_3), 3);
			return 1;
		}
		if (unk_0x05EFB6A616B6FADE(Local_95.f_2, 9))
		{
			unk_0x2BCFB39E86340DAA(&(Local_95.f_3), 9);
			return 1;
		}
		if (unk_0x05EFB6A616B6FADE(Local_95.f_1, 15))
		{
			unk_0x2BCFB39E86340DAA(&(Local_95.f_3), 10);
			return 1;
		}
	}
	if (!func_6(iLocal_103, 0, 1))
	{
		if (iLocal_101 != 0 || !unk_0x05EFB6A616B6FADE(Local_95.f_2, 1))
		{
			unk_0x2BCFB39E86340DAA(&(Local_95.f_3), 4);
			return 1;
		}
	}
	else
	{
		if (func_38(iLocal_103, 129))
		{
			unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 13);
			unk_0x2BCFB39E86340DAA(&(Local_95.f_3), 8);
			return 1;
		}
		if (func_38(iLocal_103, 131) || unk_0x05EFB6A616B6FADE(Global_1625435[iLocal_103 /*560*/].f_1, 11))
		{
			unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 13);
			unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_38(iLocal_103, 136) || (func_37(unk_0xD4E735F4B6A956AC(), 24) && func_36(iLocal_103)))
		{
			unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_38(iLocal_103, 146))
		{
			unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_35(unk_0xD4E735F4B6A956AC()) && ((func_33(unk_0xD4E735F4B6A956AC()) == 148 || func_33(unk_0xD4E735F4B6A956AC()) == 142) || func_33(unk_0xD4E735F4B6A956AC()) == 164))
		{
			unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_33(unk_0xD4E735F4B6A956AC()) == 153)
		{
			unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_31(unk_0xD4E735F4B6A956AC()) && func_33(unk_0xD4E735F4B6A956AC()) == 170)
		{
			unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_33(unk_0xD4E735F4B6A956AC()) == 167)
		{
			unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_33(unk_0xD4E735F4B6A956AC()) == 168)
		{
			unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_31(unk_0xD4E735F4B6A956AC()) && func_33(unk_0xD4E735F4B6A956AC()) == 238)
		{
			unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_31(unk_0xD4E735F4B6A956AC()) && func_33(unk_0xD4E735F4B6A956AC()) == 249)
		{
			unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 8);
			return 1;
		}
		if (unk_0x7112137033807390(unk_0xEE978C39384D834F(iLocal_103), 0))
		{
			if (iLocal_101 == 1)
			{
				if (unk_0x05EFB6A616B6FADE(Local_95.f_1, 0))
				{
					unk_0x2BCFB39E86340DAA(&(Local_95.f_3), 6);
					return 1;
				}
			}
		}
		else
		{
			if (iLocal_101 == 1)
			{
				if (func_38(iLocal_103, 146))
				{
					unk_0x2BCFB39E86340DAA(&(Local_95.f_3), 7);
					return 1;
				}
				if (!unk_0x05EFB6A616B6FADE(Local_95.f_1, 16))
				{
					if (unk_0x1893BEC593409B02(iLocal_106, Local_95.f_9) > func_30())
					{
						unk_0x2BCFB39E86340DAA(&(Local_95.f_3), 7);
						return 1;
					}
				}
				if (func_27())
				{
					unk_0x2BCFB39E86340DAA(&(Local_95.f_3), 7);
					return 1;
				}
				if (func_23(iLocal_103, func_12(iLocal_102), 1))
				{
					unk_0x2BCFB39E86340DAA(&(Local_95.f_3), 7);
					return 1;
				}
			}
			if (iLocal_104 != unk_0xFEB6EEC0545AF7AA(unk_0xB330C43B9B7B1724(iLocal_103)))
			{
				unk_0x2BCFB39E86340DAA(&(Local_95.f_3), 5);
				return 1;
			}
		}
	}
	return 0;
}

bool func_23(int iParam0, int iParam1, bool bParam2)
{
	return func_24(iParam0, iParam1, bParam2, 1);
}

int func_24(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 != func_13() && iParam0 != func_13())
	{
		if (!bParam2)
		{
			if (func_26(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_1625435[iParam0 /*560*/].f_11 != func_13())
		{
			if (iParam1 == Global_1625435[iParam0 /*560*/].f_11)
			{
				return func_25(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_25(int iParam0, int iParam1)
{
	if (func_15(iParam0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_409 == iParam1;
	}
	return 0;
}

int func_26(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_13())
	{
		if (iParam0 != func_13())
		{
			if (Global_1625435[iParam0 /*560*/].f_11 != func_13())
			{
				if (Global_1625435[iParam0 /*560*/].f_11 == iParam0)
				{
					if (Global_1625435[iParam0 /*560*/].f_11.f_409 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

int func_27()
{
	if (((func_29(iLocal_103, 1, 0) || func_37(iLocal_103, 0)) || func_37(iLocal_103, 7)) || func_28(iLocal_103))
	{
		return 1;
	}
	return 0;
}

bool func_28(int iParam0)
{
	return Global_1589747[iParam0 /*790*/].f_196 != 0;
}

int func_29(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_13())
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

int func_30()
{
	if (Local_95.f_52)
	{
		return 300000;
	}
	return 120000;
}

int func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_32(iParam0, 9);
	}
	return 0;
}

bool func_32(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_11.f_4, iParam1);
}

int func_33(int iParam0)
{
	if (func_34(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_33;
	}
	return -1;
}

int func_34(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_33 != -1 || (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_35(int iParam0)
{
	if (func_15(iParam0))
	{
		if (func_31(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_36(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_1, 4);
}

bool func_37(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_208, iParam1);
}

int func_38(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/] == iParam1)
	{
		return func_39(iParam0);
	}
	return 0;
}

int func_39(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_1625435[iVar0 /*560*/].f_1, 0);
	}
	return 0;
}

void func_40()
{
	func_51();
	if (iLocal_101 != 1)
	{
		func_2();
	}
	func_41();
}

void func_41()
{
	int iVar0;
	
	if (func_6(unk_0x1483A8AE554B8B2B(iLocal_108), 0, 1))
	{
		if (iLocal_101 == 1)
		{
			if (unk_0x1483A8AE554B8B2B(iLocal_108) == iLocal_103)
			{
				if (!unk_0x05EFB6A616B6FADE(Local_95.f_1, 16))
				{
					if (unk_0x05EFB6A616B6FADE(Local_97[iLocal_108 /*5*/].f_1, 3))
					{
						unk_0x2BCFB39E86340DAA(&(Local_95.f_1), 16);
					}
				}
			}
		}
		else
		{
			if (!unk_0x05EFB6A616B6FADE(Local_95.f_1, 11))
			{
				if (func_47(unk_0x1483A8AE554B8B2B(iLocal_108)))
				{
					if (!unk_0x05EFB6A616B6FADE(Local_95.f_4, iLocal_108))
					{
						unk_0x2BCFB39E86340DAA(&(Local_95.f_1), 11);
						unk_0x2BCFB39E86340DAA(&(Local_95.f_4), iLocal_108);
					}
				}
				else if (unk_0x05EFB6A616B6FADE(Local_95.f_4, iLocal_108))
				{
					unk_0x2BCFB39E86340DAA(&(Local_95.f_1), 11);
					unk_0xFA57C719261AA55D(&(Local_95.f_4), iLocal_108);
				}
			}
			else if (unk_0x05EFB6A616B6FADE(Local_97[iLocal_108 /*5*/].f_1, 2))
			{
				unk_0xFA57C719261AA55D(&(Local_95.f_1), 11);
			}
			if (iLocal_101 == 0)
			{
				if (unk_0x05EFB6A616B6FADE(Local_97[iLocal_108 /*5*/].f_1, 0))
				{
					if (Local_97[iLocal_108 /*5*/].f_2 != -1)
					{
						if (!unk_0x05EFB6A616B6FADE(Local_95.f_2, 1))
						{
							unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 1);
							Local_95.f_42 = Local_97[iLocal_108 /*5*/].f_2;
							Local_95.f_43 = Local_97[iLocal_108 /*5*/].f_3;
							if (!func_46())
							{
								func_45();
							}
						}
					}
					else if (!unk_0x05EFB6A616B6FADE(Local_95.f_2, 9))
					{
						if (!func_46())
						{
							func_44();
						}
						iVar0 = 0;
						while (iVar0 < func_463(iLocal_101))
						{
							func_7(iVar0, 3);
							iVar0++;
						}
						unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 9);
						unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 1);
					}
				}
				if (func_46())
				{
					if (!unk_0x05EFB6A616B6FADE(iLocal_98, 17))
					{
						if (unk_0x05EFB6A616B6FADE(Local_97[iLocal_108 /*5*/].f_1, 5))
						{
							func_45();
							unk_0x2BCFB39E86340DAA(&iLocal_98, 17);
						}
						else if (unk_0x05EFB6A616B6FADE(Local_97[iLocal_108 /*5*/].f_1, 6))
						{
							func_44();
							unk_0x2BCFB39E86340DAA(&iLocal_98, 17);
						}
					}
				}
				if (!unk_0x05EFB6A616B6FADE(Local_97[iLocal_108 /*5*/].f_1, 1))
				{
					if (!unk_0x05EFB6A616B6FADE(iLocal_98, 3))
					{
						unk_0x2BCFB39E86340DAA(&iLocal_98, 3);
					}
				}
				else if (unk_0x1483A8AE554B8B2B(iLocal_108) == iLocal_103)
				{
					if (iLocal_101 == 0)
					{
						if (!unk_0x05EFB6A616B6FADE(Local_95.f_2, 1))
						{
							if (!unk_0x05EFB6A616B6FADE(Local_95.f_2, 6))
							{
								unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 6);
							}
						}
					}
				}
			}
		}
	}
	iLocal_108++;
	if (iLocal_108 >= 32)
	{
		iLocal_108 = 0;
		if (iLocal_101 == 0)
		{
			if (!unk_0x05EFB6A616B6FADE(iLocal_98, 3))
			{
				func_43();
			}
			else
			{
				func_42();
			}
			unk_0xFA57C719261AA55D(&iLocal_98, 3);
		}
	}
}

void func_42()
{
	if (unk_0x05EFB6A616B6FADE(Local_95.f_2, 3))
	{
		unk_0xFA57C719261AA55D(&(Local_95.f_2), 3);
	}
}

void func_43()
{
	if (!unk_0x05EFB6A616B6FADE(Local_95.f_2, 3))
	{
		Local_95.f_6 = iLocal_106;
		unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 3);
	}
}

void func_44()
{
	struct<14> Var0;
	
	Var0.f_2 = -1369961623;
	Var0.f_10 = iLocal_103;
	Var0.f_11 = iLocal_102;
	func_20(Var0, func_21(1));
}

void func_45()
{
	struct<14> Var0;
	
	Var0.f_2 = -210487359;
	Var0.f_10 = iLocal_103;
	Var0.f_11 = iLocal_102;
	if (func_463(iLocal_101) > 1)
	{
		Var0.f_12 = unk_0x1483A8AE554B8B2B(1);
	}
	else
	{
		Var0.f_12 = unk_0x1483A8AE554B8B2B(0);
	}
	Var0.f_3 = Local_95.f_43;
	func_20(Var0, func_21(1));
}

int func_46()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

bool func_47(int iParam0)
{
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		return func_50();
	}
	return unk_0x05EFB6A616B6FADE(Global_1368245.f_241.f_136[func_49(10) /*33*/][iParam0], func_48(10));
}

int func_48(int iParam0)
{
	return (iParam0 % 32);
}

int func_49(int iParam0)
{
	return (iParam0 / 32);
}

var func_50()
{
	return Global_1312416;
}

void func_51()
{
	int iVar0;
	
	if (iLocal_101 == 0)
	{
		if (unk_0x05EFB6A616B6FADE(Local_95.f_2, 3))
		{
			if (unk_0x1893BEC593409B02(iLocal_106, Local_95.f_6) > 10000)
			{
				if (unk_0x05EFB6A616B6FADE(Local_95.f_2, 1))
				{
					unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 2);
				}
			}
		}
		if (unk_0x05EFB6A616B6FADE(Local_95.f_1, 8))
		{
			if (!unk_0x05EFB6A616B6FADE(Local_95.f_2, 1))
			{
				if (func_55())
				{
					unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 6);
					func_54();
				}
			}
		}
		if (!unk_0x05EFB6A616B6FADE(Local_95.f_1, 0))
		{
			if (func_6(iLocal_103, 1, 1))
			{
				iVar0 = unk_0xEE978C39384D834F(iLocal_103);
				if (func_53(iVar0))
				{
					func_243(iVar0);
				}
			}
		}
		if (!unk_0x05EFB6A616B6FADE(Local_95.f_2, 1))
		{
			if (!func_6(iLocal_103, 1, 1) || func_28(iLocal_103))
			{
				unk_0x2BCFB39E86340DAA(&(Local_95.f_1), 15);
			}
		}
	}
	if (unk_0x05EFB6A616B6FADE(Local_95.f_1, 0))
	{
		if (unk_0x05EFB6A616B6FADE(Local_95.f_1, 5))
		{
			if (!unk_0x05EFB6A616B6FADE(Local_95.f_1, 4))
			{
				if (unk_0x1893BEC593409B02(iLocal_106, Local_95.f_5) > 600000)
				{
					unk_0x2BCFB39E86340DAA(&(Local_95.f_1), 4);
				}
			}
		}
		if (!unk_0x05EFB6A616B6FADE(Local_95.f_3, 12))
		{
			if (func_52())
			{
				unk_0x2BCFB39E86340DAA(&(Local_95.f_3), 12);
			}
		}
	}
}

int func_52()
{
	switch (Local_95.f_10[0 /*7*/].f_1)
	{
		case 0:
			if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_653 == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_653 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_53(int iParam0)
{
	if (unk_0x4915F4759304D5CF(iParam0))
	{
	}
	if (unk_0x05EFB6A616B6FADE(Local_95.f_1, 17))
	{
		if (!unk_0x4374EED90C523366(iParam0))
		{
			return 1;
		}
	}
	if (!func_5(Local_95.f_36, unk_0xE2BBD32891C18569(iParam0, 1), 625f))
	{
		return 1;
	}
	return 0;
}

void func_54()
{
	func_492();
	Local_95 = 0;
}

int func_55()
{
	if ((((((((unk_0x05EFB6A616B6FADE(Local_95.f_2, 6) || unk_0xD32647D293B05ADD(iLocal_103)) || func_29(iLocal_103, 1, 0)) || func_57(iLocal_103)) || func_37(iLocal_103, 0)) || func_37(iLocal_103, 7)) || func_28(iLocal_103)) || Global_2423801[iLocal_103 /*413*/].f_238) || func_56(unk_0xEE978C39384D834F(iLocal_103), joaat("titan")))
	{
		return 1;
	}
	if (iLocal_103 != -1)
	{
		if (unk_0x05EFB6A616B6FADE(Local_97[iLocal_103 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_56(int iParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (!unk_0x4915F4759304D5CF(iParam0))
		{
			if (unk_0x8A29BBDF4603E52B(iParam0))
			{
				iVar0 = unk_0xCAEB6CE71A2C7212(iParam0, 0);
				if (unk_0xDC5D81351D6A4DDB(iVar0))
				{
					if (unk_0x8F474E419F56E48D(iVar0) == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_57(int iParam0)
{
	if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_22, 14))
	{
		return 1;
	}
	if (unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_273.f_22, 11))
	{
		return 1;
	}
	return 0;
}

void func_58()
{
	if (!unk_0x05EFB6A616B6FADE(Local_95.f_1, 5))
	{
		Local_95.f_5 = iLocal_106;
		unk_0x2BCFB39E86340DAA(&(Local_95.f_1), 5);
	}
}

void func_59()
{
	if (unk_0x05EFB6A616B6FADE(Local_95.f_1, 5))
	{
		unk_0xFA57C719261AA55D(&(Local_95.f_1), 5);
	}
}

int func_60()
{
	bool bVar0;
	
	if (unk_0x05EFB6A616B6FADE(Local_95.f_1, 0))
	{
		return 0;
	}
	else
	{
		bVar0 = false;
		if (func_245())
		{
			if (iLocal_101 == 1)
			{
				bVar0 = true;
			}
			else if (func_240())
			{
				if (func_237())
				{
					if (func_236())
					{
						bVar0 = true;
					}
					else if (func_234(func_235(iLocal_101)))
					{
						if (func_66())
						{
							bVar0 = true;
						}
					}
				}
			}
		}
		if (bVar0)
		{
			func_58();
			if (func_61())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_61()
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x45F99485D7E1C29A())
	{
		if (unk_0x05EFB6A616B6FADE(Local_95.f_1, 0))
		{
			return 1;
		}
		else
		{
			switch (iLocal_101)
			{
				case 0:
					iVar0 = 0;
					while (iVar0 < func_463(iLocal_101))
					{
						if ((!unk_0x83A1DA4E6C55E952(Local_95.f_10[iVar0 /*7*/]) && !unk_0x05EFB6A616B6FADE(Local_95.f_10[iVar0 /*7*/].f_2, 1)) && !unk_0x05EFB6A616B6FADE(Local_95.f_10[iVar0 /*7*/].f_2, 6))
						{
							func_62(iVar0, func_65(iLocal_101), Local_95.f_32, Local_95.f_35);
						}
						iVar0++;
					}
					break;
			}
			if (iLocal_101 != 1)
			{
				iVar0 = 0;
				while (iVar0 < func_463(iLocal_101))
				{
					if (!unk_0x83A1DA4E6C55E952(Local_95.f_10[iVar0 /*7*/]))
					{
						if (!unk_0x05EFB6A616B6FADE(Local_95.f_10[iVar0 /*7*/].f_2, 6))
						{
							return 0;
						}
					}
					iVar0++;
				}
			}
			unk_0x2BCFB39E86340DAA(&iLocal_98, 1);
			unk_0x2BCFB39E86340DAA(&iLocal_98, 2);
			unk_0x2BCFB39E86340DAA(&iLocal_98, 3);
			unk_0x2BCFB39E86340DAA(&iLocal_98, 4);
			unk_0x2BCFB39E86340DAA(&(Local_95.f_1), 0);
			unk_0x2BCFB39E86340DAA(&Global_1646079, iLocal_101);
			return 1;
		}
	}
	return 0;
}

void func_62(int iParam0, var uParam1, vector3 vParam2, float fParam3)
{
	if (unk_0x45F99485D7E1C29A())
	{
		if (!unk_0x83A1DA4E6C55E952(Local_95.f_10[iParam0 /*7*/]))
		{
			if (unk_0xEBCEB76159738410(0) < unk_0xBCC2AC37F56D2149(false, 0))
			{
				if (unk_0x94D82D856BD4DE54(1))
				{
					if (func_234(func_235(iLocal_101)))
					{
						if (func_64(&(Local_95.f_10[iParam0 /*7*/]), 7, func_235(iLocal_101), vParam2, fParam3, 1, 1, 1))
						{
							Local_95.f_10[iParam0 /*7*/].f_1 = iLocal_101;
							Local_95.f_10[iParam0 /*7*/].f_4 = uParam1;
							func_63(iParam0);
						}
					}
				}
			}
		}
	}
}

void func_63(int iParam0)
{
	char cVar0[16];
	
	if (!unk_0x05EFB6A616B6FADE(Local_95.f_10[iParam0 /*7*/].f_2, 1))
	{
		if (!unk_0x7112137033807390(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 0))
		{
			if (Local_95.f_10[iParam0 /*7*/].f_4 == 0)
			{
				unk_0xDFA901280292A2FB(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), Global_1574983);
				unk_0xF6C91427D7EB8D1E(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 1);
				unk_0x43E60411043B4C52(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 0);
			}
			unk_0xD6CDDEFB0FD5B191(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 0, 0, 0, 0, 0, 0, 1, 0);
			unk_0xF19FB7DA7E62392D(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 2);
			unk_0x3B7A32E04BBE59A5(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 13, 1);
			unk_0x3B7A32E04BBE59A5(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 41, 1);
			unk_0x3B7A32E04BBE59A5(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 20, 1);
			unk_0x13E0A8160525AE55(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 132, true);
			unk_0x13E0A8160525AE55(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 118, false);
			unk_0x13E0A8160525AE55(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 311, true);
			unk_0xEA45F8224FC3C7AD(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 300f, 10);
			unk_0xD738221C247C8B71(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 1);
			StringCopy(&cVar0, "gang ", 16);
			StringIntConCat(&cVar0, iParam0, 16);
			unk_0xC4C22DDB26872744(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), &cVar0);
			switch (Local_95.f_10[iParam0 /*7*/].f_4)
			{
				case 0:
					func_7(iParam0, 1);
					unk_0x3B7A32E04BBE59A5(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 0, 0);
					unk_0x3B7A32E04BBE59A5(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 2, 0);
					unk_0x8AA21BBDA4DB2C4F(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 2);
					unk_0xF63074D1E750B871(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 0);
					unk_0x90683BECDF939A74(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 0, -1, 0);
					unk_0x13E0A8160525AE55(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 32, true);
					unk_0xC2C4AE9DB4A0BEF3(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 4, false);
					unk_0xC2C4AE9DB4A0BEF3(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 1024, true);
					unk_0xC2C4AE9DB4A0BEF3(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 128, true);
					unk_0xC2C4AE9DB4A0BEF3(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 32, false);
					unk_0xC2C4AE9DB4A0BEF3(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 8, false);
					unk_0xC2C4AE9DB4A0BEF3(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 64, false);
					unk_0xC2C4AE9DB4A0BEF3(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 256, true);
					unk_0xC2C4AE9DB4A0BEF3(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 1, false);
					unk_0xC2C4AE9DB4A0BEF3(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 2, true);
					unk_0xC2C4AE9DB4A0BEF3(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 16, true);
					if (!unk_0x05EFB6A616B6FADE(Local_95.f_10[iParam0 /*7*/].f_2, 0))
					{
						unk_0x2BCFB39E86340DAA(&(Local_95.f_10[iParam0 /*7*/].f_2), 2);
					}
					unk_0xC2C4AE9DB4A0BEF3(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 512, true);
					unk_0x3B7A32E04BBE59A5(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 17, 0);
					unk_0xF0188A1B49D79AF7(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), joaat("weapon_knife"), 1, true, true);
					unk_0x8C26EBB3525646D4(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 0);
					unk_0x22DD1D053CFF9707(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), unk_0xEE978C39384D834F(iLocal_103), -1, 0, 2);
					unk_0xB390EBEB3914DEA2(Local_95.f_10[iParam0 /*7*/], 1);
					break;
			}
			unk_0x6259CDB47862A4F3(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), round((Global_262145.f_153 * IntToFloat(unk_0x24A1A7BF4ED94B71(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]))))), 0);
			if (!unk_0x05EFB6A616B6FADE(Local_95.f_1, 8))
			{
				unk_0x2BCFB39E86340DAA(&(Local_95.f_1), 8);
			}
			unk_0x2BCFB39E86340DAA(&(Local_95.f_10[iParam0 /*7*/].f_2), 1);
		}
	}
}

int func_64(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, int iParam7)
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

int func_65(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
	}
	return 0;
}

int func_66()
{
	struct<6> Var0;
	
	if (unk_0x05EFB6A616B6FADE(Local_95.f_1, 3))
	{
		return 1;
	}
	else
	{
		switch (iLocal_101)
		{
			case 0:
				if (unk_0xC77FA683E9BB485B(iLocal_103) && func_6(iLocal_103, 1, 1))
				{
					Var0.f_5 = 1115815936;
					Var0.f_13 = 2;
					Var0.f_20 = 2;
					Var0.f_32 = -1082130432;
					Var0.f_34 = 1;
					Var0 = { unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iLocal_103), 1) };
					Var0.f_5 = 20f;
					if (func_67(Local_95.f_36, 40f, &(Local_95.f_32), &(Local_95.f_35), &Var0))
					{
						unk_0x2BCFB39E86340DAA(&(Local_95.f_1), 3);
						return 1;
					}
				}
				else
				{
					unk_0x33DAE96AF716DE07();
					unk_0xA159862FCB5DEB38();
					if (Global_2405070.f_2455)
					{
						unk_0xDC06FA69497D1E3B();
						Global_2405070.f_2455 = 0;
					}
				}
				break;
			}
	}
	return 0;
}

int func_67(vector3 vParam0, float fParam1, var uParam2, var uParam3, var uParam4)
{
	struct<17> Var0;
	struct<18> Var1;
	vector3 vVar2;
	
	if (uParam4->f_5 > (fParam1 - 20f))
	{
		uParam4->f_5 = (fParam1 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var1.f_16 = 1;
	Var1.f_22 = 1;
	Var1.f_23 = 1;
	Var1.f_24 = 1;
	Var1 = { vParam0 };
	Var1.f_3 = uParam4->f_11;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 0;
	Var1.f_15 = 0;
	Var1.f_16 = 1;
	Var1.f_17 = 0;
	if (func_68(&Var1, uParam4, &Var0))
	{
		if ((uParam4->f_12 > 0f && uParam4->f_7) && uParam4->f_8)
		{
			vVar2 = { vParam0 - Var0[0 /*3*/] };
			if (vVar2.z > uParam4->f_12)
			{
				Var0[0 /*3*/] = { vParam0 };
				Var0.f_16[0] = uParam4->f_11;
			}
		}
		*uParam2 = { Var0[0 /*3*/] };
		*uParam3 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_68(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar11;
	var uVar12;
	bool bVar13;
	struct<56> Var14;
	bool bVar15;
	
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2405070.f_2449 == *uParam0 || !Global_2405070.f_2449.f_1 == uParam0->f_1) || !Global_2405070.f_2449.f_2 == uParam0->f_2) || !Global_2405070.f_2452 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2405070.f_2463 == uParam0->f_8 || !Global_2405070.f_2463.f_1 == uParam0->f_8.f_1) || !Global_2405070.f_2463.f_2 == uParam0->f_8.f_2) || !Global_2405070.f_2466 == uParam0->f_11) || !Global_2405070.f_2466.f_1 == uParam0->f_11.f_1) || !Global_2405070.f_2466.f_2 == uParam0->f_11.f_2)
			{
				bVar13 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2405070.f_2463 == uParam0->f_8 || !Global_2405070.f_2463.f_1 == uParam0->f_8.f_1) || !Global_2405070.f_2463.f_2 == uParam0->f_8.f_2) || !Global_2405070.f_2466 == uParam0->f_11) || !Global_2405070.f_2466.f_1 == uParam0->f_11.f_1) || !Global_2405070.f_2466.f_2 == uParam0->f_11.f_2) || !Global_2405070.f_2469 == uParam0->f_14)
			{
				bVar13 = true;
			}
			break;
	}
	if (bVar13)
	{
		if (Global_2405070.f_2447 == 1)
		{
			if (unk_0x2BCD0524CDEE1FD2(Global_2405070.f_2456))
			{
				if (Global_2405070.f_2456 == unk_0xFCB3E4B16B4A9EC1())
				{
					if (unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), Global_2405070.f_2453) < func_233(0))
					{
						return 0;
					}
				}
				else if (unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), Global_2405070.f_2453) < func_233(0))
				{
					return 0;
				}
			}
			unk_0x33DAE96AF716DE07();
			unk_0xA159862FCB5DEB38();
			func_232();
		}
		Global_2405070.f_2447 = 0;
	}
	else if (unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), Global_2405070.f_2453) > func_233(0))
	{
		Global_2405070.f_2454 = unk_0xFFCC7EBF88BDEE54();
		func_226();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_11;
			}
			else
			{
				fVar2 = uParam0->f_11;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_11.f_1;
			}
			else
			{
				fVar3 = uParam0->f_11.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar2 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar3 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	unk_0x7E393C5E27D0ACA8(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		vVar6 = { *uParam0 };
	}
	else
	{
		vVar6 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	vVar7 = { vVar6 + Vector(-0.1f, -0.1f, -0.1f) };
	vVar8 = { vVar6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2405070.f_2447)
	{
		unk_0x33DAE96AF716DE07();
		unk_0xA159862FCB5DEB38();
		func_232();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (vmag(*uParam0) > 0f)
			{
				if (func_225(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0x09185DE6D14F4400())
		{
			Global_2405070.f_2470 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405070.f_2449 = { *uParam0 };
					Global_2405070.f_2452 = uParam0->f_4;
					break;
				
				case 1:
					Global_2405070.f_2463 = { uParam0->f_8 };
					Global_2405070.f_2466 = { uParam0->f_11 };
					Global_2405070.f_2469 = 0f;
					Global_2405070.f_2449 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2405070.f_2463 = { uParam0->f_8 };
					Global_2405070.f_2466 = { uParam0->f_11 };
					Global_2405070.f_2469 = uParam0->f_14;
					Global_2405070.f_2449 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_224(vVar6.x, vVar6.y);
			}
			Global_2405070.f_2448 = 1;
			Global_2405070.f_2447 = 1;
			Global_2405070.f_2454 = unk_0xFFCC7EBF88BDEE54();
			Global_2405070.f_2453 = unk_0xFFCC7EBF88BDEE54();
			Global_2405070.f_2456 = unk_0xFCB3E4B16B4A9EC1();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2405070.f_2447)
	{
		if (Global_2405070.f_2448 == 1)
		{
			if (unk_0x789CFCFF551BAB0A(fVar2, fVar3, fVar4, fVar5) || unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), Global_2405070.f_2454) > 5000)
			{
				Global_2405070.f_2454 = unk_0xFFCC7EBF88BDEE54();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { vVar6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_10 = 1;
					Var14.f_13 = 1;
					Var14.f_15 = 1;
					Var14.f_16 = 1;
					Var14.f_31 = 1;
					Var14.f_34 = joaat("tailgater");
					Var14.f_38 = 2;
					Var14.f_45 = 2;
					Var14.f_49 = 1123024896;
					Var14.f_53 = 999;
					Var14.f_54 = 1176256410;
					Var14.f_55 = 1;
					Var14.f_56 = 1;
					Var14.f_57 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_11 = uParam1->f_9;
					Var14.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var14.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_19 = { *uParam0 };
							Var14.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = 0f;
							break;
						
						case 2:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = uParam0->f_14;
							break;
					}
					Var14.f_26 = uParam0->f_7;
					Var14.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var14.f_30 = 1;
						Var14.f_32 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_38[iVar9 /*3*/] = { uParam1->f_13[iVar9 /*3*/] };
						Var14.f_45[iVar9] = uParam1->f_20[iVar9];
						iVar9++;
					}
					Var14.f_51 = uParam1->f_30;
					Var14.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var14.f_10 = 0;
					}
					if (func_223(Global_4456448.f_152990))
					{
						Var14.f_9 = 1;
					}
					func_198(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_197(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405070.f_2448 = 9;
				}
				else
				{
					Global_2405070.f_2448 = 2;
				}
			}
		}
		if (Global_2405070.f_2448 == 2)
		{
			if ((unk_0xD31D74D9E100B4BE(vVar7, vVar8) || unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), Global_2405070.f_2454) > 15000) || unk_0x5D33E29E6187BD30(vVar7, vVar8) == 0)
			{
				Global_2405070.f_2454 = unk_0xFFCC7EBF88BDEE54();
				if (uParam0->f_5 && !func_194(unk_0xD4E735F4B6A956AC(), 0))
				{
					Global_2405070.f_2448 = 3;
				}
				else
				{
					Global_2405070.f_2448 = 4;
				}
			}
			else if (unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), Global_2405070.f_2458) > 7000)
			{
				func_193(vVar6.x, vVar6.y);
			}
		}
		if (Global_2405070.f_2448 == 3)
		{
			if (func_192() || unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), Global_2405070.f_2454) > 10000)
			{
				Global_2405070.f_2454 = unk_0xFFCC7EBF88BDEE54();
				Global_2405070.f_2448 = 4;
			}
		}
		if (Global_2405070.f_2448 == 4)
		{
			if (unk_0x09185DE6D14F4400())
			{
				unk_0x33DAE96AF716DE07();
				unk_0xA159862FCB5DEB38();
			}
			else
			{
				iVar0 = 0;
				func_226();
				if (uParam0->f_5)
				{
					if (vmag(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (unk_0x5F1D9DF2677B4311(unk_0xD4E735F4B6A956AC(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2405070.f_2454 = unk_0xFFCC7EBF88BDEE54();
								Global_2405070.f_2448 = 5;
							}
							break;
						
						case 1:
							func_191(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
							if (unk_0x8C63526E7547557E(unk_0xD4E735F4B6A956AC(), vVar10, vVar11, uVar12, *uParam1, iVar0))
							{
								Global_2405070.f_2454 = unk_0xFFCC7EBF88BDEE54();
								Global_2405070.f_2448 = 5;
							}
							break;
						
						case 2:
							if (unk_0x8C63526E7547557E(unk_0xD4E735F4B6A956AC(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2405070.f_2454 = unk_0xFFCC7EBF88BDEE54();
								Global_2405070.f_2448 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2405070.f_2454 = unk_0xFFCC7EBF88BDEE54();
					Global_2405070.f_2448 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0xE204094E4283E36C(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_191(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
							unk_0xEAE53779DB574724(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0xEAE53779DB574724(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2405070.f_2448 == 5)
		{
			if (func_120(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2405070.f_2474.f_5)
				{
					Global_2405070.f_2454 = unk_0xFFCC7EBF88BDEE54();
					Global_2405070.f_2448 = 6;
				}
				else
				{
					Global_2405070.f_2454 = unk_0xFFCC7EBF88BDEE54();
					if (!uParam0->f_5)
					{
						if (!vmag(*uParam1) == 0f)
						{
							vVar1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = unk_0x0C1B8F3F6EFDC58B(vVar1.x, vVar1.y);
						}
					}
					Global_2405070.f_2448 = 9;
				}
			}
			else if (unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), Global_2405070.f_2454) > 20000)
			{
				unk_0x33DAE96AF716DE07();
				unk_0xA159862FCB5DEB38();
				Global_2405070.f_2454 = unk_0xFFCC7EBF88BDEE54();
				Global_2405070.f_2448 = 8;
			}
		}
		if (Global_2405070.f_2448 == 6)
		{
			iVar0 = 0;
			Global_2405070.f_2474.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_119(uParam0->f_4))
				{
					if (unk_0x893915B076B1DDF7(unk_0x988A25F5907E93F0(vVar6)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_118(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x893915B076B1DDF7(unk_0x988A25F5907E93F0(vVar6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2405070.f_2454 = unk_0xFFCC7EBF88BDEE54();
			Global_2405070.f_2448 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0xE204094E4283E36C(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_191(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
					unk_0xEAE53779DB574724(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0xEAE53779DB574724(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2405070.f_2448 == 7)
		{
			if (func_120(uParam2, uParam0, uParam1, 1))
			{
				if (vmag(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (vmag(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!vmag(Global_2405070.f_2608[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_197(Global_2405070.f_2608[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405070.f_2608[iVar9 /*3*/] };
										}
										break;
									
									case 1:
										if (func_116(Global_2405070.f_2608[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405070.f_2608[iVar9 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x0C4DF083566CCC1C(Global_2405070.f_2608[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2405070.f_2608[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (vmag(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								vVar1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								vVar1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_71(&vVar1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { vVar1 };
					}
				}
				Global_2405070.f_2454 = unk_0xFFCC7EBF88BDEE54();
				if (!vmag(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						vVar1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_16[iVar9] = unk_0x0C1B8F3F6EFDC58B(vVar1.x, vVar1.y);
						iVar9++;
					}
				}
				Global_2405070.f_2448 = 9;
			}
			else if (unk_0x1893BEC593409B02(unk_0xFFCC7EBF88BDEE54(), Global_2405070.f_2454) > 20000)
			{
				Global_2405070.f_2454 = unk_0xFFCC7EBF88BDEE54();
				Global_2405070.f_2448 = 8;
			}
		}
		if (Global_2405070.f_2448 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_70(Global_2405070.f_483))
				{
				}
			}
			else if (Global_2405070.f_2474.f_2)
			{
				func_69(uParam2, &(Global_2405070.f_2474.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2405070.f_2449 };
				func_71(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_2405070.f_2454 = unk_0xFFCC7EBF88BDEE54();
			Global_2405070.f_2448 = 9;
		}
		if (Global_2405070.f_2448 == 9)
		{
			Global_2405070.f_2447 = 0;
			unk_0x33DAE96AF716DE07();
			unk_0xA159862FCB5DEB38();
			func_232();
			return 1;
		}
		Global_2405070.f_2453 = unk_0xFFCC7EBF88BDEE54();
	}
	return 0;
}

void func_69(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_70(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_71(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	vector3 vVar0;
	var uVar1;
	struct<56> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_10 = 1;
	Var2.f_13 = 1;
	Var2.f_15 = 1;
	Var2.f_16 = 1;
	Var2.f_31 = 1;
	Var2.f_34 = joaat("tailgater");
	Var2.f_38 = 2;
	Var2.f_45 = 2;
	Var2.f_49 = 1123024896;
	Var2.f_53 = 999;
	Var2.f_54 = 1176256410;
	Var2.f_55 = 1;
	Var2.f_56 = 1;
	Var2.f_57 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						vVar7 = { *uParam5 };
						if (func_119(uParam5->f_4) || !unk_0x893915B076B1DDF7(unk_0x988A25F5907E93F0(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 1:
						vVar7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_118(uParam5->f_8, uParam5->f_11, 0f) || !unk_0x893915B076B1DDF7(unk_0x988A25F5907E93F0(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 2:
						vVar7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_118(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x893915B076B1DDF7(unk_0x988A25F5907E93F0(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_75(*uParam0, &vVar0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		vVar0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_10 = 0;
		}
		else
		{
			Var2.f_10 = 1;
		}
		Var2.f_13 = uParam5->f_15;
		Var2.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var2.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var2.f_18 = 1;
			Var2.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_19 = { *uParam5 };
					Var2.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = 0f;
					break;
				
				case 2:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_38[iVar4 /*3*/] = { uParam6->f_13[iVar4 /*3*/] };
			Var2.f_45[iVar4] = uParam6->f_20[iVar4];
			iVar4++;
		}
		Var2.f_51 = uParam6->f_30;
		Var2.f_55 = uParam5->f_16;
		if (func_73(unk_0xD4E735F4B6A956AC(), 0))
		{
			Var2.f_9 = 1;
		}
		func_198(&vVar0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				vVar8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			
			case 1:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_11 };
				break;
			
			case 2:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_11 };
				fVar10 = uParam5->f_14;
				break;
		}
		if (!func_72(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
		{
			if (func_75(*uParam0, &vVar0, iVar6, iParam3, 0))
			{
				if (!func_72(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						vVar0 = { vVar8 };
					}
					if (unk_0x8F7BA8E028ADF980(vVar0, &uVar3, 0, 0))
					{
						vVar0.z = uVar3;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					vVar0 = { vVar8 };
				}
				if (unk_0x8F7BA8E028ADF980(vVar0, &uVar3, 0, 0))
				{
					vVar0.z = uVar3;
				}
			}
		}
	}
	*uParam0 = { vVar0 };
	Global_2405070.f_658 = 1;
}

int func_72(vector3 vParam0, int iParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	switch (iParam1)
	{
		case 0:
			if (vdist(vParam0, vParam2) <= fParam4)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_116(vParam0, vParam2, vParam3, 0, 0);
			break;
		
		case 2:
			return unk_0x0C4DF083566CCC1C(vParam0, vParam2, vParam3, fParam4, 0, 1);
			break;
	}
	return 0;
}

int func_73(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
			if (unk_0x8F474E419F56E48D(iVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_13())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1 && Global_2423801[iParam0 /*413*/].f_309.f_7 != func_13())
			{
				return func_74(Global_2423801[iParam0 /*413*/].f_309.f_4) == 12;
			}
		}
	}
	return 0;
}

int func_74(int iParam0)
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

int func_75(vector3 vParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_115(vParam0, uParam1))
	{
		if (func_76(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (unk_0x1EB91C63EC75FAAD(vParam0, 0, uParam1, iParam2))
	{
		if (func_76(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_76(vector3 vParam0, var uParam1, int iParam2, bool bParam3)
{
	float fVar0;
	var uVar1;
	var uVar2;
	
	fVar0 = vdist(vParam0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_96(Global_2405070.f_506, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!func_83(*uParam1, 1056964608))
			{
				if (!func_77(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_77(var uParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { *uParam0 };
	iVar2 = func_82(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411257[iVar2])
	{
		if (func_81(vVar1, &(Global_2410113[iVar2 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_78(&vVar1, Global_2410113[iVar2 /*127*/][iVar0 /*7*/], Global_2410113[iVar2 /*127*/][iVar0 /*7*/].f_3, Global_2410113[iVar2 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411257[8])
	{
		if (func_81(vVar1, &(Global_2410113[8 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_78(&vVar1, Global_2410113[8 /*127*/][iVar0 /*7*/], Global_2410113[8 /*127*/][iVar0 /*7*/].f_3, Global_2410113[8 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_78(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, float fParam4, bool bParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	vector3 vVar11;
	
	vVar0 = { vParam2 - vParam1 };
	vVar0.z = 0f;
	vVar1 = { *uParam0 - vParam1 };
	vVar1.z = 0f;
	vVar2 = { func_80(0f, 0f, 1f, vVar0) };
	vVar2 = { vVar2 / FtoV(vmag(vVar2)) };
	fVar3 = (vmag(vVar1) * sin(unk_0x772D91F28C9D2EDC(vVar0.x, vVar0.y, vVar1.x, vVar1.y)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_79(vVar2, vVar1) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_79(vVar2, vVar1) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar4 = { *uParam0 + vVar2 };
		fVar6 = vdist(vParam1.x, vParam1.y, 0f, vParam2.x, vParam2.y, 0f);
		vVar7 = { vParam1 + vParam2 / Vector(2f, 2f, 2f) };
		vVar7.z = 0f;
		vVar2 = { func_80(0f, 0f, 1f, vVar0) };
		vVar2 = { vVar2 / FtoV(vmag(vVar2)) };
		vVar2 = { vVar2 * FtoV((fParam3 * 0.5f)) };
		vVar8 = { vVar7 - vVar2 };
		vVar9 = { vVar7 + vVar2 };
		vVar10 = { vVar9 - vVar8 };
		vVar10.z = 0f;
		vVar11 = { *uParam0 - vVar8 };
		vVar11.z = 0f;
		vVar2 = { func_80(0f, 0f, 1f, vVar10) };
		vVar2 = { vVar2 / FtoV(vmag(vVar2)) };
		fVar3 = (vmag(vVar11) * sin(unk_0x772D91F28C9D2EDC(vVar10.x, vVar10.y, vVar11.x, vVar11.y)));
		if (!bParam5)
		{
			if (func_79(vVar2, vVar11) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_79(vVar2, vVar11) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar5 = { *uParam0 + vVar2 };
		if (vdist(vVar4, *uParam0, uParam0->f_1, 0f) < vdist(vVar5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { vVar4 };
		}
		else
		{
			*uParam0 = { vVar5 };
		}
	}
}

float func_79(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_80(vector3 vParam0, vector3 vParam1)
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

bool func_81(vector3 vParam0, var uParam1)
{
	return unk_0x0C4DF083566CCC1C(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_82(struct<2> Param0, var uParam1)
{
	if (Param0.f_1 > Global_2411267[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411267[1])
	{
		if (Param0 < Global_2411271[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411267[2])
	{
		if (Param0 < Global_2411271[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411271[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411271[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_83(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	if (func_93(unk_0xD4E735F4B6A956AC(), 1))
	{
		if (Global_4456448.f_59274 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_59274)
			{
				if (Global_4456448.f_59275[iVar0 /*80*/].f_7 != 0)
				{
					if (func_84(vParam0, Global_4456448.f_59275[iVar0 /*80*/], Global_4456448.f_59275[iVar0 /*80*/].f_6, Global_4456448.f_59275[iVar0 /*80*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_55666 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_55666)
			{
				if (Global_4456448.f_55669[iVar0 /*149*/].f_16 != 0)
				{
					if (func_84(vParam0, Global_4456448.f_55669[iVar0 /*149*/], Global_4456448.f_55669[iVar0 /*149*/].f_3, Global_4456448.f_55669[iVar0 /*149*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_79604 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_79604)
			{
				if (Global_4456448.f_79608[iVar0 /*217*/].f_12 != 0)
				{
					if (func_84(vParam0, Global_4456448.f_79608[iVar0 /*217*/], Global_4456448.f_79608[iVar0 /*217*/].f_3, Global_4456448.f_79608[iVar0 /*217*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_84(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (vdist(vParam0, vParam1) < func_92(iParam3, 1008981770))
	{
		func_85(vParam1, fParam2, iParam3, &vVar0, &vVar1, &fVar2, fParam4);
		if (unk_0x0C4DF083566CCC1C(vParam0, vVar0, vVar1, fVar2, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_85(vector3 vParam0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	vVar0 = { 0f, 1f, 0f };
	func_91(&vVar0, 0f, 0f, fParam1);
	vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
	func_86(iParam2, &vVar1, &vVar2, 1086324736, 1080033280, 1077936128);
	vVar3 = { vParam0 + vVar0 * FtoV((vVar2.y + fParam6)) };
	vVar3.z = (vVar3.z - ((0.5f * unk_0x69C0BB7D03EE045D((vVar2.z - vVar1.z))) + fParam6));
	vVar4 = { vParam0 - vVar0 * FtoV(((vVar1.y * -1f) + fParam6)) };
	vVar4.z = (vVar4.z + ((0.5f * unk_0x69C0BB7D03EE045D((vVar2.z - vVar1.z))) + fParam6));
	*uParam3 = { vVar3 };
	*uParam4 = { vVar4 };
	*uParam5 = unk_0x69C0BB7D03EE045D((vVar2.x - vVar1.x));
}

void func_86(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x3F0E621C9C312804(iParam0))
	{
		unk_0xDFCF5BB9A4E3B293(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_89(iParam0);
		if (iVar0 != 0)
		{
			func_87(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (vmag(*uParam1) <= 0.01f || vmag(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_87(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_88(iParam0, &Global_1315792);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x3F0E621C9C312804(Global_1315792[iVar0]))
		{
			unk_0xDFCF5BB9A4E3B293(Global_1315792[iVar0], &(Global_1315796[iVar0 /*3*/]), &(Global_1315803[iVar0 /*3*/]));
		}
		if (vmag(Global_1315796[iVar0 /*3*/]) <= 0.01f || vmag(Global_1315803[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315796[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315803[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315796[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315803[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315796[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315803[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315810[iVar0] = (Global_1315803[iVar0 /*3*/] - Global_1315796[iVar0 /*3*/]);
		Global_1315813[iVar0] = (Global_1315803[iVar0 /*3*/].f_1 - Global_1315796[iVar0 /*3*/].f_1);
		Global_1315816[iVar0] = (Global_1315803[iVar0 /*3*/].f_2 - Global_1315796[iVar0 /*3*/].f_2);
		if (Global_1315810[iVar0] > Global_1315819)
		{
			Global_1315819 = Global_1315810[iVar0];
		}
		if (Global_1315816[iVar0] > Global_1315820)
		{
			Global_1315820 = Global_1315816[iVar0];
		}
		iVar0++;
	}
	Global_1315821 = (Global_1315819 * -0.5f);
	Global_1315824 = (Global_1315819 * 0.5f);
	Global_1315821.f_1 = ((((0.5f * Global_1315813[0]) + Global_1315813[1]) + Global_1315792.f_3) * -1f);
	Global_1315824.f_1 = (0.5f * Global_1315813[0]);
	Global_1315821.f_2 = (Global_1315816[0] * -0.5f);
	Global_1315824.f_2 = (Global_1315816[0] * 0.5f);
	*uParam1 = { Global_1315821 };
	*uParam2 = { Global_1315824 };
}

void func_88(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = 387748548;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = 177270108;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = 433954513;
			(*uParam1)[1] = -1881846085;
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_89(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_90(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_90(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_91(var uParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = cos(vParam1.x);
	fVar1 = sin(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = cos(vParam1.y);
	fVar1 = sin(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = cos(vParam1.z);
	fVar1 = sin(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

float func_92(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_86(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
	vVar2 = { vVar1 - vVar0 };
	fVar3 = (sqrt(((((vVar2.x * 0.5f) * (vVar2.x * 0.5f)) + ((vVar2.y * 0.5f) * (vVar2.y * 0.5f))) + ((vVar2.z * 0.5f) * (vVar2.z * 0.5f)))) + fParam1);
	return fVar3;
}

int func_93(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_94(iParam0))
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

bool func_94(int iParam0)
{
	return func_95(iParam0);
}

bool func_95(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_13.f_1, 0);
}

int func_96(vector3 vParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_109(vParam0))
	{
		if (func_108(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_99(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_98(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (vdist(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_97(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

void func_97(var uParam0, vector3 vParam1, float fParam2, float fParam3, bool bParam4, float fParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { *uParam0 - vParam1 };
	vVar0.z = 0f;
	if (vmag(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_91(&vVar0, 0f, 0f, unk_0xF59B9063EDAC7451(0f, 360f));
		}
		else
		{
			func_91(&vVar0, 0f, 0f, fParam5);
		}
	}
	vVar0 = { vVar0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		vVar1 = { vParam1 + vVar0 };
	}
	else
	{
		vVar1 = { vParam1 - vVar0 };
	}
	*uParam0 = vVar1.x;
	uParam0->f_1 = vVar1.y;
}

int func_98(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (vdist(vParam0, Global_2405070.f_2719[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_99(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	
	if (func_104(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_101(&vVar2, &(Global_2405070.f_362[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_104(vVar2, &uVar1) || func_100(vVar2))
			{
				vVar2 = { *uParam0 };
				func_101(&vVar2, &(Global_2405070.f_362[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

int func_100(vector3 vParam0)
{
	float fVar0;
	
	if (Global_2405070.f_587 > 0f)
	{
		fVar0 = vdist(vParam0, Global_2405070.f_584);
		if (fVar0 < Global_2405070.f_587)
		{
			return 1;
		}
	}
	return 0;
}

void func_101(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_103(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405070.f_2717) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_103(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_103(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_97(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405070.f_2717) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_102(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_78(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_102(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	vVar0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1);
	fVar2 = (*uParam0 - Param3);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	vVar0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				vVar0.x = (Param1 - fParam5);
			}
			else
			{
				vVar0.x = (Param3 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			vVar0.y = (Param1.f_1 - fParam5);
		}
		else
		{
			vVar0.y = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			vVar0.x = (Param3 + fParam5);
		}
		else
		{
			vVar0.x = (Param1 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		vVar0.y = (Param3.f_1 + fParam5);
	}
	else
	{
		vVar0.y = (Param1.f_1 - fParam5);
	}
	*uParam0 = { vVar0 };
}

Vector3 func_103(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, float fParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1;
	
	switch (iParam4)
	{
		case 0:
			func_97(&vParam0, vParam1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_102(&vParam0, vParam1, vParam2, fParam5, bParam6);
			break;
		
		case 2:
			func_78(&vParam0, vParam1, vParam2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x5D260ECB08BF5B88(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_197(vVar1, vParam1, fParam3, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_116(vVar1, vParam1, vParam2, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 2:
				if (!unk_0x0C4DF083566CCC1C(vVar1, vParam1, vParam2, fParam3, 0, 1))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

int func_104(vector3 vParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_107())
	{
		return 0;
	}
	iVar1 = func_106();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405070.f_362[iVar0 /*12*/].f_9 == 1)
		{
			if (func_105(vParam0, &(Global_2405070.f_362[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_105(vector3 vParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_197(vParam0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2405070.f_2717) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_116(vParam0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return unk_0x0C4DF083566CCC1C(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0);
			}
			else if (bParam3)
			{
				if (unk_0x0C4DF083566CCC1C(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(vParam0.z < uParam1->f_2 && vParam0.z < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (unk_0x0C4DF083566CCC1C(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(vParam0.z > uParam1->f_2 && vParam0.z > uParam1->f_3.f_2))
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
				return unk_0x0C4DF083566CCC1C(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_106()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405070.f_362[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_107()
{
	return Global_1668658.f_28;
}

int func_108(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2409942[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409942[iVar0 /*17*/].f_16))
			{
				if (func_105(*uParam0, &(Global_2409942[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409942[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409942[iVar0 /*17*/].f_13 };
						}
						else
						{
							vVar1 = { *uParam0 };
							func_101(&vVar1, &(Global_2409942[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_108(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_101(&vVar1, &(Global_2409942[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { vVar1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_109(vector3 vParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if (!Global_2405070.f_509 && !Global_2405070.f_510)
	{
		if (!Global_2405070.f_44.f_314)
		{
			if (!func_113(unk_0xD4E735F4B6A956AC(), 1))
			{
				return 1;
			}
			if (!func_112(vParam0, 1008981770))
			{
				if (!func_108(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_108(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_111(vParam0, 1008981770);
				if (iVar0 > -1)
				{
					vVar1 = { func_110(&(Global_2405070.f_44[iVar0 /*12*/])) };
					if (!func_108(&vVar1, 0, 0, 0, 1))
					{
						if (!func_108(&vParam0, 0, 0, 0, 1))
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

Vector3 func_110(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_111(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405070.f_44[iVar0 /*12*/].f_9)
		{
			if (func_105(vParam0, &(Global_2405070.f_44[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_112(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405070.f_44[iVar0 /*12*/].f_9)
		{
			if (func_105(vParam0, &(Global_2405070.f_44[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_113(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_114(iParam0) != 0;
	}
	return func_93(iParam0, bParam1);
}

int func_114(int iParam0)
{
	if (func_6(iParam0, 0, 1))
	{
		return Global_2423801[iParam0 /*413*/].f_1;
	}
	return 0;
}

int func_115(vector3 vParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2405070.f_2245 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405070.f_2245)
		{
			fVar3 = vdist(Global_2405070.f_2246[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam1 = { Global_2405070.f_2246[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_116(vector3 vParam0, vector3 vParam1, vector3 vParam2, bool bParam3, bool bParam4)
{
	func_117(&vParam1, &vParam2);
	if (((!vParam0.x >= vParam1.x || !vParam0.y >= vParam1.y) || !vParam0.x <= vParam2.x) || !vParam0.y <= vParam2.y)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (vParam0.z >= vParam1.z)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (vParam0.z <= vParam2.z)
		{
			return 1;
		}
	}
	else if (vParam0.z >= vParam1.z && vParam0.z <= vParam2.z)
	{
		return 1;
	}
	return 0;
}

void func_117(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_118(vector3 vParam0, vector3 vParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (vParam0.x > vParam1.x)
	{
		vVar1.x = vParam0.x;
		vVar0.x = vParam1.x;
	}
	else
	{
		vVar1.x = vParam1.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam1.y)
	{
		vVar1.y = vParam0.y;
		vVar0.y = vParam1.y;
	}
	else
	{
		vVar1.y = vParam1.y;
		vVar0.y = vParam0.y;
	}
	if (vParam0.z > vParam1.z)
	{
		vVar1.z = vParam0.z;
		vVar0.z = vParam1.z;
	}
	else
	{
		vVar1.z = vParam1.z;
		vVar0.z = vParam0.z;
	}
	if (vmag(vVar1 - vVar0) > 100f)
	{
		return 1;
	}
	if (fParam2 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_119(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_120(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Global_2405070.f_2474.f_1 == 0 && Global_2405070.f_2474 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0xFEB3EA484969FD35(&(Global_2405070.f_2474.f_1)))
			{
				case 0:
					func_189(uParam1, uParam2);
					if (!Global_2405070.f_2474.f_2)
					{
						if (uParam2->f_7 && Global_2405070.f_549.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2405070.f_2449 };
							}
							if (uParam1->f_5 && func_70(Global_2405070.f_483))
							{
								if (!Global_2405070.f_2474.f_5)
								{
									Global_2405070.f_2474.f_5 = 1;
								}
								else
								{
									func_71(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_71(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = unk_0xF59B9063EDAC7451(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_189(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0x09185DE6D14F4400())
		{
			if (!unk_0xF1BD73859D1783E3())
			{
				if (unk_0x56F658241CD127BB())
				{
					func_189(uParam1, uParam2);
					Global_2405070.f_2474.f_1 = unk_0xB354785863ABE0AB();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0xA159862FCB5DEB38();
				func_189(uParam1, uParam2);
				if (!Global_2405070.f_2474.f_2)
				{
					Global_2405070.f_2474.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_186(Global_2405070.f_549, &(Global_2405070.f_2474.f_57), &(Global_2405070.f_2474.f_90));
	}
	if (uParam2->f_7 && !Global_2405070.f_2474.f_4)
	{
		Global_2405070.f_2474.f_4 = 1;
		func_128(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_2405070.f_2474.f_1 > 0 || Global_2405070.f_2474 > 0)
	{
		if (uParam1->f_5 || unk_0x09185DE6D14F4400())
		{
			iVar2 = 0;
			while (iVar2 < Global_2405070.f_2474.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_2405070.f_2474.f_3)
					{
						iVar2 = Global_2405070.f_2474.f_3 + 1;
					}
					if (iVar2 > (Global_2405070.f_2474.f_1 - 1))
					{
						iVar2 = (Global_2405070.f_2474.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0xE095D40B0F22C4B3(iVar2, &vVar0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						unk_0x2CE521E7F770F972(iVar2, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = unk_0xE89FEB357F24E9EA(iVar2);
					}
					else
					{
						unk_0xD4732115F1038B86(iVar2, &iVar3);
					}
					func_128(vVar0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_2405070.f_2474.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_2405070.f_2474.f_1;
		}
		if (Global_2405070.f_2474.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_2405070.f_2871)
			{
				func_122(&(Global_2405070.f_2474.f_6[0 /*10*/]), &(Global_2405070.f_2474.f_6[1 /*10*/]), &(Global_2405070.f_2474.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_70(Global_2405070.f_483))
			{
				if (Global_2405070.f_2474.f_2)
				{
					func_69(uParam0, &(Global_2405070.f_2474.f_6));
					func_121(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405070.f_2449 };
					func_71(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = unk_0xF59B9063EDAC7451(0f, 360f);
					func_121(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2405070.f_2474.f_2)
			{
				func_69(uParam0, &(Global_2405070.f_2474.f_6));
				func_121(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = unk_0x22C775856F4633CA(0, Global_2405070.f_2474.f_1);
				unk_0xE095D40B0F22C4B3(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_77(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_121(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405070.f_2449 };
					func_71(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = unk_0xF59B9063EDAC7451(0f, 360f);
					func_121(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2405070.f_2449 };
				func_71(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = unk_0xF59B9063EDAC7451(0f, 360f);
				func_121(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2405070.f_2449 };
		if (uParam1->f_5 && func_70(Global_2405070.f_483))
		{
			if (!Global_2405070.f_2474.f_5)
			{
				Global_2405070.f_2474.f_5 = 1;
			}
			else
			{
				func_71(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_71(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = unk_0xF59B9063EDAC7451(0f, 360f);
		func_121(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_121(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405070.f_2608[(3 - iVar0) /*3*/] = { Global_2405070.f_2608[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2405070.f_2608[0 /*3*/] = { vParam0 };
}

void func_122(var uParam0, var uParam1, var uParam2)
{
	if (func_70(Global_2405070.f_483) && func_127() < 4096)
	{
		func_126(uParam0, 0f);
		func_126(uParam1, uParam0->f_2);
		func_126(uParam2, uParam1->f_2);
	}
	else
	{
		func_125(uParam0);
		func_124(uParam2, uParam0->f_4);
		func_123(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_123(var uParam0, vector3 vParam1, vector3 vParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407969[iVar0 /*10*/] > 0)
		{
			fVar2 = vdist(Global_2407969[iVar0 /*10*/].f_4, vParam1);
			fVar3 = vdist(Global_2407969[iVar0 /*10*/].f_4, vParam2);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2407969[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2407969[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_124(var uParam0, vector3 vParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407969[iVar0 /*10*/] > 0)
		{
			fVar2 = vdist(Global_2407969[iVar0 /*10*/].f_4, vParam1);
			fVar2 = (fVar2 * Global_2407969[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2407969[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_125(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407969[iVar0 /*10*/] > 0)
		{
			if (Global_2407969[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2407969[iVar0 /*10*/].f_1;
				Var2 = { Global_2407969[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_126(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407969[iVar0 /*10*/] > 0)
		{
			if (Global_2407969[iVar0 /*10*/].f_2 < fVar1 && Global_2407969[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2407969[iVar0 /*10*/].f_2;
				Var2 = { Global_2407969[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_127()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407969[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2407969[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_128(vector3 vParam0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	bool bVar13;
	int iVar14;
	vector3 vVar15;
	vector3 vVar16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam2->f_5)
	{
		if (Global_2405070.f_483 == 1)
		{
			if (unk_0x69C0BB7D03EE045D((Global_2405070.f_506.f_2 - vParam0.z)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (func_183(unk_0xD4E735F4B6A956AC()))
		{
			if (iParam5 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!func_182(vParam0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!unk_0x8F23A5E1A63A6980(unk_0xA19140A5C42D8715(), vParam0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!unk_0x8F23A5E1A63A6980(unk_0xA19140A5C42D8715(), vParam0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!func_181(vParam0, uParam3->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (vmag(uParam3->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!vdist(vParam0, uParam3->f_13[iVar11 /*3*/]) > uParam3->f_20[iVar11])
			{
				bVar13 = false;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((vmag(uParam3->f_23) > 0f && vmag(uParam3->f_26) > 0f) && uParam3->f_29 > 0f)
		{
			if (unk_0x0C4DF083566CCC1C(vParam0, uParam3->f_23, uParam3->f_26, uParam3->f_29, 0, 1))
			{
				bVar13 = false;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (func_175(vParam0, fParam1, uParam2->f_15, func_180(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2405070.f_3;
		}
	}
	else if (!func_172(vParam0, 25f, unk_0xD4E735F4B6A956AC(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_168(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_168(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2405070.f_690)
		{
			vVar12 = { Global_2405070.f_506 };
			if (Global_2405070.f_483 == 26)
			{
				vVar12 = { Global_2405070.f_549.f_18 };
			}
			if (!func_98(vParam0, 0.5f))
			{
				if (func_109(vVar12))
				{
					if (!func_108(&vParam0, 0, 0, 0, 1) && !func_167(&vParam0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_167(&vParam0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_166(vParam0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(func_165(unk_0xD4E735F4B6A956AC()) && func_164(unk_0xD4E735F4B6A956AC())))
		{
			if (!func_163(&vParam0, &(Global_2405070.f_2474.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!func_164(unk_0xD4E735F4B6A956AC()))
		{
			if (!func_162(vParam0, &(Global_2405070.f_2474.f_57), &(Global_2405070.f_2474.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_161(vParam0))
	{
		if (uParam2->f_5)
		{
			if (func_70(Global_2405070.f_483))
			{
				if (func_112(vParam0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (func_160(vParam0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2405070.f_44.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (unk_0x893915B076B1DDF7(unk_0x988A25F5907E93F0(vParam0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (unk_0x893915B076B1DDF7(unk_0x988A25F5907E93F0(vParam0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2405070.f_690)
		{
			if (!func_99(&vParam0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_77(&vParam0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = func_111(vParam0, 1008981770);
		if (iVar14 > -1)
		{
			func_159(vParam0, &vVar15, &vVar16, &fVar17);
			if (!func_154(&(Global_2405070.f_44[iVar14 /*12*/]), vVar15, vVar16, fVar17))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_83(vParam0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam3->f_33)
	{
		if (unk_0x5ACD8081B0AC1F22(vParam0.x, vParam0.y, (vParam0.z + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam3->f_34)
	{
		if (unk_0x85A65397E2224648(vParam0.x, vParam0.y, (vParam0.z + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (func_153(vParam0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var19.f_2 = 1176256410;
	bVar20 = false;
	bVar21 = false;
	if (Global_2405070.f_2871 && uParam2->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_21)
			{
				fVar0 = func_145(vParam0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = func_145(vParam0, Global_2405070.f_2449, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_70(Global_2405070.f_483) && iVar8 < 4096)
			{
				Var19.f_2 = func_143(vParam0);
			}
			uVar7 = func_134(vParam0, 1, 0, 0, 0);
			Var19.f_4 = { vParam0 };
			Var19.f_7 = fParam1;
			Var19 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = uVar7;
			func_133(Var19);
			Global_2405070.f_2474.f_2 = 1;
		}
	}
	else
	{
		iVar18 = 0;
		while (iVar18 < 5)
		{
			if (iVar8 >= Global_2405070.f_2474.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_21)
						{
							fVar0 = func_145(vParam0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = func_145(vParam0, Global_2405070.f_2449, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((func_70(Global_2405070.f_483) && iVar8 == Global_2405070.f_2474.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = func_143(vParam0);
							bVar21 = true;
						}
						if (fVar2 < Global_2405070.f_2474.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { vParam0 };
							Var19.f_7 = fParam1;
							Var19 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_132(Var19, iVar18);
							Global_2405070.f_2474.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2405070.f_2474.f_6[iVar18 /*10*/] || (iVar8 == Global_2405070.f_2474.f_6[iVar18 /*10*/] && fVar0 > Global_2405070.f_2474.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_1 = fVar0;
						func_132(Var19, iVar18);
						Global_2405070.f_2474.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_130(vParam0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_134(vParam0, 1, 1, 1, 1);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_129(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_129(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_2405070.f_2474.f_6[iVar18 /*10*/] || (iVar8 == Global_2405070.f_2474.f_6[iVar18 /*10*/] && fVar3 > Global_2405070.f_2474.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_3 = fVar3;
						func_132(Var19, iVar18);
						Global_2405070.f_2474.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

float func_129(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_130(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam2 && !bParam4)
	{
		if (func_6(unk_0xD4E735F4B6A956AC(), 1, 1))
		{
			if (!unk_0x71364F510A1CB69F())
			{
				if (unk_0x317672E799676CA5(vParam0, fParam1))
				{
					fVar4 = vdist2(vParam0, unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_6(iVar1, 1, 1))
		{
			if (!func_194(iVar1, 0) && unk_0xBC6A832F36065FDF(unk_0xD4E735F4B6A956AC(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0xD4E735F4B6A956AC()))
				{
					if (func_131(iVar1) || !bParam6)
					{
						if (!bParam4)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0xE46ECB9FD23D3264(iVar1) != unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()))) || unk_0xE46ECB9FD23D3264(iVar1) == -1)
							{
								if (unk_0xAB4CCE25F269AC90(iVar1, vParam0, fParam1))
								{
									fVar4 = vdist2(vParam0, unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0xE46ECB9FD23D3264(iVar1) != iParam5 || unk_0xE46ECB9FD23D3264(iVar1) == -1)
						{
							if (unk_0xAB4CCE25F269AC90(iVar1, vParam0, fParam1))
							{
								fVar4 = vdist2(vParam0, unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return sqrt(fVar3);
	}
	return -1f;
}

int func_131(int iParam0)
{
	if (unk_0xD9755B4480864A6A(unk_0xEE978C39384D834F(iParam0)) || Global_2423801[iParam0 /*413*/].f_245)
	{
		return 1;
	}
	return 0;
}

void func_132(struct<10> Param0, int iParam1)
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2405070.f_2474.f_6[iParam1 /*10*/] };
	Global_2405070.f_2474.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_132(Var0, iParam1 + 1);
	}
}

void func_133(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	Var1.f_2 = 1176256410;
	iVar2 = func_127();
	if (Param0 > iVar2)
	{
		iVar2 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407969[iVar0 /*10*/] < iVar2)
		{
			Global_2407969[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407969[iVar0 /*10*/] == 0)
		{
			Global_2407969[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar3 = 9999.9f;
	iVar4 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407969[iVar0 /*10*/] > 0)
		{
			if (Global_2407969[iVar0 /*10*/].f_1 < fVar3)
			{
				fVar3 = Global_2407969[iVar0 /*10*/].f_1;
				iVar4 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar4 > -1)
	{
		Global_2407969[iVar4 /*10*/] = { Param0 };
	}
}

float func_134(vector3 vParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar7 = iVar0;
		if (func_6(iVar7, 1, 1))
		{
			if (!iVar7 == unk_0xD4E735F4B6A956AC() || iParam3 == 1)
			{
				bVar4 = false;
				if (bParam1)
				{
					if (func_135(iVar7))
					{
						bVar4 = true;
					}
				}
				if (bParam2)
				{
					if (unk_0xE46ECB9FD23D3264(iVar7) == unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()))
					{
						if (!unk_0xE46ECB9FD23D3264(iVar7) == -1 || !func_113(unk_0xD4E735F4B6A956AC(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0xBC6A832F36065FDF(unk_0xD4E735F4B6A956AC(), iVar7) || !bParam4)
					{
						if (func_131(iVar7))
						{
							vVar5 = { func_8(iVar7) };
							if (!iVar7 == unk_0xD4E735F4B6A956AC())
							{
								vVar6 = { unk_0xC0B294E4D9407824(unk_0xEE978C39384D834F(iVar7)) };
							}
							else
							{
								vVar6 = { vVar5 };
							}
							if (!bParam4)
							{
								if (vVar5.z < -100f)
								{
									vVar5.z = vParam0.z;
								}
								if (vVar6.z < -100f)
								{
									vVar6.z = vParam0.z;
								}
							}
							fVar1 = unk_0x499324B3EF19C288(vParam0, vVar5, 1);
							fVar2 = unk_0x499324B3EF19C288(vParam0, vVar6, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

int func_135(int iParam0)
{
	if (func_6(iParam0, 0, 1))
	{
		if (!func_141(iParam0))
		{
			if (unk_0xBC6A832F36065FDF(unk_0xD4E735F4B6A956AC(), iParam0))
			{
				if (!unk_0xE46ECB9FD23D3264(iParam0) == unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()))
				{
					if (func_93(unk_0xD4E735F4B6A956AC(), 1))
					{
						if (!func_140(unk_0xE46ECB9FD23D3264(iParam0), unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0xE46ECB9FD23D3264(iParam0) == -1 && unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) == -1)
				{
					if (!func_93(unk_0xD4E735F4B6A956AC(), 1))
					{
						if (!func_136(iParam0))
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
		}
	}
	return 0;
}

int func_136(int iParam0)
{
	if (func_139(unk_0xD4E735F4B6A956AC(), iParam0))
	{
		return 1;
	}
	Global_2503649 = { func_138(iParam0) };
	if (unk_0x6053E2C13442D6D7(&Global_2503649))
	{
		return 1;
	}
	if (func_137(unk_0xD4E735F4B6A956AC(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_137(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_12(iParam0);
	if (!iVar0 == func_13())
	{
		if (iVar0 == func_12(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_138(int iParam0)
{
	struct<13> Var0;
	
	unk_0xE05C4303C26882C4(iParam0, &Var0, 13);
	return Var0;
}

int func_139(int iParam0, int iParam1)
{
	if (unk_0xD1832FEBE50B1AB1())
	{
		Global_2503649 = { func_138(iParam0) };
		Global_2503662 = { func_138(iParam1) };
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

int func_140(int iParam0, int iParam1, int iParam2)
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

int func_141(int iParam0)
{
	if (func_194(iParam0, 0))
	{
		return 1;
	}
	if (func_142())
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

bool func_142()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

float func_143(vector3 vParam0)
{
	var uVar0;
	
	return func_144(vParam0, &(Global_2405070.f_44), &uVar0);
}

float func_144(vector3 vParam0, var uParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = vdist(*(uParam1[iVar0 /*12*/]), vParam0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2405070.f_2717) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (vParam0.x < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - vParam0.x));
					}
					else if (vParam0.x > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (vParam0.y < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - vParam0.y));
					}
					else if (vParam0.y > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (vParam0.z < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - vParam0.z));
					}
					else if (vParam0.z > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam2 = iVar3;
	return fVar2;
}

float func_145(vector3 vParam0, vector3 vParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam5 > 0)
	{
		fVar1 = (to_float(iParam5) / to_float(8));
	}
	if (bParam2)
	{
		fVar0 = func_129(vdist(vParam0, vParam1), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam6 = 1E+07f;
	fVar4 = func_134(vParam0, 1, 0, 0, 1);
	fVar0 = func_129(fVar4, 0f, func_152(), func_150(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_148(vParam0);
	fVar0 = func_129(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) == -1 && !func_113(unk_0xD4E735F4B6A956AC(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_147(vParam0, unk_0xD4E735F4B6A956AC(), 0);
	fVar0 = func_129(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (func_146(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_129(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_129(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam4)
	{
		fVar0 = func_129(vdist(Global_2405070.f_506, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_146(vector3 vParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	iVar1 = unk_0x5017B1E2B481ACC7(vParam0, 1, &uVar3, &uVar2, 1, 3f, 0f);
	if (unk_0x462BCCFC27C23896(iVar1))
	{
		unk_0x71C5C1FE45545D92(iVar1, &vVar0);
		*uParam1 = vdist(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*uParam2 = unk_0x69C0BB7D03EE045D((vParam0.z - vVar0.z));
		return 1;
	}
	return 0;
}

float func_147(vector3 vParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_6(iParam1, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam1 == iVar2 || iParam2 == 1)
			{
				iVar3 = iVar2;
				if (func_6(iVar3, 0, 1))
				{
					if (unk_0xE46ECB9FD23D3264(iVar3) != unk_0xE46ECB9FD23D3264(iParam1) || (unk_0xE46ECB9FD23D3264(iVar3) == -1 && unk_0xE46ECB9FD23D3264(iParam1) == -1))
					{
						if (Global_2417554.f_261[iVar2])
						{
							fVar1 = vdist(Global_2417554.f_131[iVar2 /*3*/], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_148(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var uVar4[32];
	int iVar5;
	
	iVar5 = unk_0x751DA0D8357E8793(unk_0xA19140A5C42D8715(), &uVar4, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar5)
	{
		if (unk_0xDC5D81351D6A4DDB(uVar4[iVar2]))
		{
			if (!unk_0x7112137033807390(uVar4[iVar2], 0))
			{
				if (func_149(uVar4[iVar2]))
				{
					vVar3 = { unk_0xE2BBD32891C18569(uVar4[iVar2], 1) };
					fVar1 = unk_0x499324B3EF19C288(vParam0, vVar3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

int func_149(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x35546CE87C5336BC(iParam0);
	switch (unk_0x56FFED01CE97CAC0(iVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0x164FCCE36A36BD28(Global_1574948[unk_0xD4E735F4B6A956AC()]))
	{
		switch (unk_0x56FFED01CE97CAC0(iVar0, Global_1574948[unk_0xD4E735F4B6A956AC()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/] == 0)
	{
		iVar1 = unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (unk_0x164FCCE36A36BD28(Global_1574658[iVar1]))
			{
				switch (unk_0x56FFED01CE97CAC0(iVar0, Global_1574658[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_150()
{
	if (func_151())
	{
		if ((unk_0xCA8C103FCD316F89(Global_2405070.f_44.f_67) || unk_0x7C197233F79C2CB8(Global_2405070.f_44.f_67)) || Global_2405070.f_44.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_151()
{
	if (Global_2405070.f_44.f_65 && !Global_2405070.f_44.f_301)
	{
		if (!func_141(unk_0xD4E735F4B6A956AC()))
		{
			return 1;
		}
	}
	return 0;
}

float func_152()
{
	if (func_151())
	{
		if ((unk_0xCA8C103FCD316F89(Global_2405070.f_44.f_67) || unk_0x7C197233F79C2CB8(Global_2405070.f_44.f_67)) || Global_2405070.f_44.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_153(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)
{
	float fVar0;
	
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && unk_0x85A65397E2224648(vParam0, fParam5)) || (fVar0 > 0f && unk_0x5ACD8081B0AC1F22(vParam0, fVar0))) || ((iParam2 == 1 && fParam6 > 0f) && unk_0xC980951B35C111AE(vParam0, fParam6, 0))) || ((iParam1 == 1 && fParam7 > 0f) && unk_0xC980951B35C111AE(vParam0, fParam7, 1)))
	{
		return 1;
	}
	return 0;
}

int func_154(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_158(*uParam0, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_157(*uParam0, uParam0->f_3, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_155(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_155(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, vector3 vParam4, float fParam5)
{
	vector3 vVar0[8];
	int iVar1;
	
	func_156(vParam0, vParam1, fParam2, &vVar0);
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0x0C4DF083566CCC1C(vVar0[iVar1 /*3*/], vParam3, vParam4, fParam5, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_156(vector3 vParam0, vector3 vParam1, float fParam2, var uParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	var uVar3;
	
	if (vParam0.z == vParam1.z)
	{
		vParam1.z = (vParam1.z + 0.01f);
	}
	vVar0 = { vParam0 - vParam1 };
	vVar1 = { func_80(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar1 = { vVar1 / FtoV(vmag(vVar1)) };
	vVar1 = { vVar1 * FtoV((fParam2 * 0.5f)) };
	if (vParam0.z > vParam1.z)
	{
		uVar2 = vParam1.z;
		uVar3 = vParam0.z;
	}
	else
	{
		uVar2 = vParam0.z;
		uVar3 = vParam1.z;
	}
	*(uParam3[0 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[1 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[2 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[3 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[4 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) + vVar1 };
	*(uParam3[5 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[6 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[7 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) + vVar1 };
}

int func_157(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	vector3 vVar0[8];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[1 /*3*/] = { vParam0.x, vParam0.y, vParam1.z };
	vVar0[2 /*3*/] = { vParam0.x, vParam1.y, vParam1.z };
	vVar0[3 /*3*/] = { vParam0.x, vParam1.y, vParam0.z };
	vVar0[4 /*3*/] = { vParam1.x, vParam0.y, vParam0.z };
	vVar0[5 /*3*/] = { vParam1.x, vParam0.y, vParam1.z };
	vVar0[6 /*3*/] = { vParam1.x, vParam1.y, vParam1.z };
	vVar0[7 /*3*/] = { vParam1.x, vParam1.y, vParam0.z };
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0x0C4DF083566CCC1C(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_158(vector3 vParam0, float fParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	vector3 vVar0[4];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0 + Vector(0f, fParam1, 0f) };
	vVar0[1 /*3*/] = { vParam0 + Vector(0f, (-1f * fParam1), 0f) };
	vVar0[2 /*3*/] = { vParam0 + Vector(0f, 0f, fParam1) };
	vVar0[3 /*3*/] = { vParam0 + Vector(0f, 0f, (-1f * fParam1)) };
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!unk_0x0C4DF083566CCC1C(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_159(vector3 vParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { vParam0 };
	iVar2 = func_82(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411257[iVar2])
	{
		if (func_81(vVar1, &(Global_2410113[iVar2 /*127*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2410113[iVar2 /*127*/][iVar0 /*7*/] };
			*uParam2 = { Global_2410113[iVar2 /*127*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2410113[iVar2 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411257[8])
	{
		if (func_81(vVar1, &(Global_2410113[8 /*127*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2410113[8 /*127*/][iVar0 /*7*/] };
			*uParam2 = { Global_2410113[8 /*127*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2410113[8 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_160(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2405070.f_44.f_55)
	{
		if (unk_0x893915B076B1DDF7(Global_2405070.f_44.f_56))
		{
			if (!unk_0x92270AFB0B51829C(vParam0))
			{
				iVar0 = unk_0x988A25F5907E93F0(vParam0);
				if (unk_0x893915B076B1DDF7(iVar0))
				{
					iVar1 = unk_0xBB36C97DC15359BA(iVar0);
					if (!iVar1 == Global_2405070.f_44.f_57)
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
	}
	return 1;
}

int func_161(vector3 vParam0)
{
	switch (Global_2405070.f_2470)
	{
		case 0:
			return func_197(vParam0, Global_2405070.f_2449, Global_2405070.f_2452, 0, 0);
			break;
		
		case 1:
			return func_116(vParam0, Global_2405070.f_2463, Global_2405070.f_2466, 0, 0);
			break;
		
		case 2:
			return unk_0x0C4DF083566CCC1C(vParam0, Global_2405070.f_2463, Global_2405070.f_2466, Global_2405070.f_2469, 0, 1);
			break;
	}
	return 0;
}

int func_162(vector3 vParam0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (vdist(*(uParam1[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		vVar2 = { *(uParam2[iVar1 /*10*/]) };
		vVar3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (unk_0x0C4DF083566CCC1C(vParam0, vVar2, vVar3, fVar4, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_163(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (vdist((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_97(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_164(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_28(iParam0))
			{
				if (Global_1589747[iParam0 /*790*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_165(int iParam0)
{
	if (func_93(iParam0, 1))
	{
		if (Global_1589747[iParam0 /*790*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_166(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (vdist2(Global_2405070.f_2608[iVar0 /*3*/], vParam0) < (fParam1 * fParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_167(var uParam0, bool bParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_100(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar2 = unk_0xF59B9063EDAC7451(0.01f, 360f);
			func_97(&vVar1, Global_2405070.f_584, Global_2405070.f_587, 1036831949, 0, fVar2);
			if (func_104(vVar1, &uVar0) || func_100(vVar1))
			{
				vVar1 = { *uParam0 };
				func_97(&vVar1, Global_2405070.f_584, Global_2405070.f_587, 1036831949, 1, fVar2);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_168(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_6(unk_0xD4E735F4B6A956AC(), 1, 1))
		{
			if (!unk_0x71364F510A1CB69F())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x499324B3EF19C288(func_169(unk_0xD4E735F4B6A956AC()), vParam0, 1) <= (fVar2 + fParam1))
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
		if (func_6(iVar1, 1, 1))
		{
			if (!func_194(iVar1, 0) && unk_0xBC6A832F36065FDF(unk_0xD4E735F4B6A956AC(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0xD4E735F4B6A956AC()))
				{
					if ((func_131(iVar1) || !bParam8) && !Global_2423801[iVar1 /*413*/].f_259)
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
								if (unk_0x499324B3EF19C288(func_169(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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
							if (unk_0x499324B3EF19C288(func_169(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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

Vector3 func_169(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_171() && Global_1589747[iVar0 /*790*/].f_761) && !func_170(Global_1589747[iVar0 /*790*/].f_762))
	{
		return Global_1589747[iVar0 /*790*/].f_762;
	}
	return func_8(iParam0);
}

int func_170(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_171()
{
	return Global_2448386.f_16;
}

int func_172(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_174(vParam0, fParam1, iParam2, iParam3, 0) || func_173(vParam0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_173(vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam1 == iVar0 || iParam2 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2417554.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_84(vParam0, Global_2417554.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2417554.f_427[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417554.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_6(iVar2, 0, 1) && func_6(iParam1, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_174(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam2, 0, 1))
				{
					if (unk_0xE46ECB9FD23D3264(iVar1) == unk_0xE46ECB9FD23D3264(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam2, 0, 1))
				{
					if (Global_2417554.f_261[iVar0])
					{
						if (vdist(Global_2417554.f_131[iVar0 /*3*/], vParam0) < fParam1)
						{
							return 1;
						}
					}
					else if (vdist(func_8(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417554.f_261[iVar0])
				{
					if (vdist(Global_2417554.f_131[iVar0 /*3*/], vParam0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_6(iVar1, 0, 1))
				{
					if (vdist(func_8(iVar1), vParam0) < 1f)
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

int func_175(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)
{
	Global_2405070.f_3 = 0;
	if (!func_172(vParam0, 0.5f, unk_0xD4E735F4B6A956AC(), 0, 0))
	{
		Global_2405070.f_3++;
		if (bParam3)
		{
			if (func_225(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2405070.f_3 = (Global_2405070.f_3 + Global_2405070.f_2);
				if (!func_179(vParam0, fParam10))
				{
					Global_2405070.f_3++;
					if (!func_83(vParam0, 1056964608))
					{
						Global_2405070.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2405070.f_3 = (Global_2405070.f_3 + Global_2405070.f_2);
			}
		}
		else if (!bParam2)
		{
			if (func_225(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2405070.f_3 = (Global_2405070.f_3 + Global_2405070.f_2);
				if (!func_179(vParam0, fParam10))
				{
					Global_2405070.f_3++;
					if (!func_176(vParam0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_2405070.f_3++;
						if (!func_83(vParam0, 1056964608))
						{
							Global_2405070.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2405070.f_3 = (Global_2405070.f_3 + Global_2405070.f_2);
			}
		}
		else if (func_225(vParam0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_2405070.f_3 = (Global_2405070.f_3 + Global_2405070.f_2);
			if (!func_179(vParam0, fParam10))
			{
				Global_2405070.f_3++;
				if (!func_176(vParam0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_2405070.f_3++;
					if (!func_83(vParam0, 1056964608))
					{
						Global_2405070.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2405070.f_3 = (Global_2405070.f_3 + Global_2405070.f_2);
		}
	}
	return 0;
}

int func_176(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0xD4E735F4B6A956AC() == iVar1)
		{
			if ((func_6(iVar1, 1, 1) && func_131(iVar1)) && unk_0xBC6A832F36065FDF(unk_0xD4E735F4B6A956AC(), iVar1))
			{
				if (!func_178(unk_0xD4E735F4B6A956AC(), iVar1, -2, 0))
				{
					if (func_177(func_8(iVar1), vParam0, fParam1, fParam2, fParam3, fParam4))
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

bool func_177(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	vVar0.x = sin(fParam2);
	vVar0.y = cos(fParam2);
	vVar0.z = 0f;
	vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam3, fParam3, fParam3) };
	vVar1 = { vParam1 + vVar0 };
	vVar1.z = vParam1.z;
	vVar1.z = (vVar1.z + fParam5);
	vParam1.z = (vParam1.z + fParam5);
	return unk_0x0C4DF083566CCC1C(vParam0, vParam1, vVar1, fParam4, 0, 1);
}

bool func_178(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xE46ECB9FD23D3264(iParam0) == -1 && unk_0xE46ECB9FD23D3264(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xE46ECB9FD23D3264(iParam0) == unk_0xE46ECB9FD23D3264(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xE46ECB9FD23D3264(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xE46ECB9FD23D3264(iParam0) == iParam2;
	}
	return unk_0xE46ECB9FD23D3264(iParam0) == iParam2;
}

int func_179(vector3 vParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_6(iVar1, 1, 1) && func_131(iVar1)) && unk_0xBC6A832F36065FDF(unk_0xD4E735F4B6A956AC(), iVar1))
		{
			if ((unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) == -1 && unk_0xE46ECB9FD23D3264(iVar1) == -1) && !func_113(unk_0xD4E735F4B6A956AC(), 1))
			{
				return 0;
			}
			else if ((unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) == -1 && !unk_0xD4E735F4B6A956AC() == iVar1) || !func_178(unk_0xD4E735F4B6A956AC(), iVar1, -2, 0))
			{
				if (vdist(vParam0, func_8(iVar1)) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_180(int iParam0)
{
	if ((Global_2405070.f_483 == 9 || Global_2405070.f_483 == 9) || (Global_2405070.f_483 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_181(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0xD4E735F4B6A956AC() != iVar1) || iParam6 == 0)
		{
			if (func_6(iVar1, bParam2, bParam3))
			{
				if (unk_0xBC6A832F36065FDF(unk_0xD4E735F4B6A956AC(), iVar1))
				{
					if (!bParam5 || (!unk_0x4915F4759304D5CF(unk_0xEE978C39384D834F(iVar1)) && func_131(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) != unk_0xE46ECB9FD23D3264(iVar1))) || unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) == -1)
						{
							if (((unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) == -1 && iParam7) && bParam4) && func_136(iVar1))
							{
							}
							else if (unk_0xDC5D81351D6A4DDB(unk_0xEE978C39384D834F(iVar1)))
							{
								if (unk_0x499324B3EF19C288(func_8(iVar1), vParam0, 1) < fParam1)
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

int func_182(vector3 vParam0, float fParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 1, 1))
			{
				if ((!func_194(iVar1, 0) && unk_0xBC6A832F36065FDF(unk_0xD4E735F4B6A956AC(), iVar1)) && iVar1 != unk_0xD4E735F4B6A956AC())
				{
					fVar2 = iParam2;
					if (fParam3 > 0f)
					{
						if (!unk_0xE46ECB9FD23D3264(iVar1) == -1)
						{
							if (unk_0xE46ECB9FD23D3264(iVar1) == unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()))
							{
								fVar2 = fParam3;
							}
						}
					}
					if (unk_0xE46ECB9FD23D3264(iVar1) == iVar3)
					{
						if (unk_0x499324B3EF19C288(func_8(iVar1), vParam0, 1) <= (fVar2 + fParam1))
						{
							if (unk_0xAB4CCE25F269AC90(iVar1, vParam0, fParam1))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_183(int iParam0)
{
	if (((func_113(iParam0, 1) || func_185(iParam0)) || func_34(iParam0, 0)) || func_184(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_184(int iParam0)
{
	if (!func_6(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1589747[iParam0 /*790*/].f_35;
}

int func_185(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1625435[iVar0 /*560*/] != -1;
	}
	return 0;
}

void func_186(vector3 vParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var4;
	vector3 vVar5;
	vector3 vVar6;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var4 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!unk_0x05EFB6A616B6FADE(Global_2359721[iVar1 /*26*/].f_12, 11))
			{
				if (vmag(*(uParam1[iVar0 /*4*/])) == 0f || vdist(Global_2359721[iVar1 /*26*/].f_3, vParam0) < vdist(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_2359721[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2359721[iVar1 /*26*/].f_6.f_2;
					func_188(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (vmag(*(uParam1[iVar0 /*4*/])) == 0f || vdist(Global_262145.f_5945[iVar1 /*3*/], vParam0) < vdist(*(uParam1[iVar0 /*4*/]), vParam0))
			{
				Var3 = { Global_262145.f_5945[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_188(&Var3, uParam1, iVar0);
				iVar0 = *uParam1;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam1)
			{
				if (vmag(*(uParam1[iVar0 /*4*/])) == 0f || vdist(Global_262145.f_5991[iVar1 /*19*/][iVar2 /*3*/], vParam0) < vdist(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_262145.f_5991[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_188(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			vVar5 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			vVar6 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (vmag(*(uParam2[iVar0 /*10*/])) == 0f || vdist(vVar5, vParam0) < vdist(vVar6, vParam0))
			{
				Var4 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var4.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var4.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var4.f_7 = { Global_2359397[iVar1 /*3*/] };
				func_187(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_187(var uParam0, var uParam1, int iParam2)
{
	Global_2412262 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_187(&Global_2412262, uParam1, iParam2 + 1);
	}
}

void func_188(var uParam0, var uParam1, int iParam2)
{
	Global_2412258 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_188(&Global_2412258, uParam1, iParam2 + 1);
	}
}

void func_189(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (Global_2405070.f_2245 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405070.f_2245)
		{
			if (func_190(Global_2405070.f_2246[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_2405070.f_2246[iVar0 /*4*/].f_3;
				if (vmag(*uParam1) > 0.01f)
				{
					vVar1 = { *uParam1 - Global_2405070.f_2246[iVar0 /*4*/] };
					fVar2 = unk_0x0C1B8F3F6EFDC58B(vVar1.x, vVar1.y);
				}
				func_128(Global_2405070.f_2246[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, -1);
				Global_2405070.f_2474++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405070.f_2871)
	{
		func_122(&(Global_2405070.f_2474.f_6[0 /*10*/]), &(Global_2405070.f_2474.f_6[1 /*10*/]), &(Global_2405070.f_2474.f_6[2 /*10*/]));
	}
}

int func_190(vector3 vParam0, var uParam1)
{
	switch (uParam1->f_7)
	{
		case 0:
			return func_72(vParam0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
		
		case 1:
		case 2:
			return func_72(vParam0, uParam1->f_7, uParam1->f_8, uParam1->f_11, uParam1->f_14);
		
		default:
	}
	return 0;
}

void func_191(vector3 vParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4)
{
	float fVar0;
	
	func_117(&vParam0, &vParam1);
	fVar0 = (vParam1.x - vParam0.x);
	*uParam2 = (vParam0.x + (fVar0 * 0.5f));
	uParam2->f_1 = vParam0.y;
	uParam2->f_2 = vParam0.z;
	*uParam3 = *uParam2;
	uParam3->f_1 = vParam1.y;
	uParam3->f_2 = vParam1.z;
	*uParam4 = (fVar0 * 0.5f);
}

var func_192()
{
	return Global_1310987.f_4;
}

void func_193(var uParam0, var uParam1)
{
	func_232();
	func_224(uParam0, uParam1);
}

bool func_194(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_195(-1, 0) == 8;
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

int func_195(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_196();
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

int func_196()
{
	return Global_1312736;
}

bool func_197(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3 && bParam4)
	{
		vParam0.z = 0f;
		vParam1.z = 0f;
		return vdist(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam3)
	{
		if (vParam0.z > vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return vdist(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam4)
	{
		if (vParam0.z < vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return vdist(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	return vdist(vParam0, vParam1) < (fParam2 + 0.01f);
}

void func_198(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2405070.f_1737 > 0)
	{
		iVar0 = 0;
		while (func_220(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_199(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_199(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	vector3 vVar25;
	var uVar26;
	vector3 vVar27;
	float fVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!vmag(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_96(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_219(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	iVar8 = 1;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		iVar8 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		iVar8 = 0;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2412272.f_162 = 0;
	Global_2412272.f_163 = 0;
	Global_2412272.f_164 = -99;
	Global_2412272.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2412272[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2412272.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_89(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = unk_0x5017B1E2B481ACC7(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (unk_0x462BCCFC27C23896(iVar6))
		{
			unk_0x71C5C1FE45545D92(iVar6, &vVar1);
			bVar10 = false;
			if (Global_2412272.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2412272.f_165 = { vVar1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0xE8509487D07FBBAB(iVar6)) || unk_0x09586DC2AC6A64B7(iVar6))
			{
				unk_0xB5645494B7AC0437(vVar1, &uVar4, &uVar5);
				if (vdist(vVar1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_167(&vVar1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_218(vVar1))
									{
										vVar1 = { func_214(vVar1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51) };
										if (vmag(vVar1) > 0f)
										{
											if (!func_83(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (vVar1.z <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_213(vVar1, uParam2))
														{
															if ((uParam2->f_48 && !func_219(&vVar1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (vmag(vVar1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && vdist(vVar1.x, vVar1.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_209(vVar1, fVar2, uParam2->f_34, unk_0xD4E735F4B6A956AC(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_96(uParam2->f_35, &vVar1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!func_208(vVar1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_225(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_225(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_206(vVar1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = func_205(vVar1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412272.f_162)
																										{
																											Global_2412272[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2412272.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2412272.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412272.f_162 == 0)
																									{
																										Global_2412272[0 /*3*/] = { vVar1 };
																										Global_2412272.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412272.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (vdist2(vVar1, uParam2->f_35) < vdist2(Global_2412272[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_204(vVar1, fVar2, iVar14);
																													iVar14 = Global_2412272.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2412272.f_162++;
																									if (Global_2412272.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412272.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412272[Global_2412272.f_162 /*3*/] = { vVar1 };
																									Global_2412272.f_121[Global_2412272.f_162] = fVar2;
																									Global_2412272.f_162++;
																									if (func_213(vVar1, uParam2))
																									{
																										Global_2412272.f_163++;
																									}
																									if (Global_2412272.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412272.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { vVar1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { vVar1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2412272.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412272[0 /*3*/] };
						*uParam1 = Global_2412272.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412272.f_163 > 0 && !Global_2412272.f_163 == Global_2412272.f_162)
						{
							func_202(0, uParam2);
						}
						iVar24 = unk_0x22C775856F4633CA(0, Global_2412272.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						vVar25 = { Global_2412272[0 /*3*/] };
						uVar26 = Global_2412272.f_121[0];
						Global_2412272[0 /*3*/] = { Global_2412272[iVar24 /*3*/] };
						Global_2412272.f_121[0] = Global_2412272.f_121[iVar24];
						Global_2412272[iVar24 /*3*/] = { vVar25 };
						Global_2412272.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2412272[0 /*3*/] };
						*uParam1 = Global_2412272.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_201(iVar13, *uParam0, &iVar0, &vVar1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						vVar27 = { vVar1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_96(uParam2->f_35, &vVar27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_219(&vVar27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { vVar27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_200(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412272.f_164 = iVar6;
	}
	return 0;
}

void func_200(var uParam0, var uParam1, var uParam2, vector3 vParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = vdist(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_172(*(uParam0[iVar2 /*4*/]), 5f, unk_0xD4E735F4B6A956AC(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_201(int iParam0, vector3 vParam1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = unk_0x22C775856F4633CA((1 + iParam0), (40 + iParam0));
		unk_0xE23D832FD873880A(vParam1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10);
		*uParam3 = { func_214(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51) };
		if (!func_218(*uParam3))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_202(int iParam0, var uParam1)
{
	if (!func_213(Global_2412272[iParam0 /*3*/], uParam1))
	{
		Global_2412272.f_162 = (Global_2412272.f_162 - 1);
		func_203(iParam0);
		if (Global_2412272.f_162 > Global_2412272.f_163)
		{
			func_202(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_202(iParam0 + 1, uParam1);
	}
}

void func_203(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412272[iParam0 /*3*/] = { Global_2412272[iParam0 + 1 /*3*/] };
			Global_2412272.f_121[iParam0] = Global_2412272.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_204(vector3 vParam0, float fParam1, int iParam2)
{
	vector3 vVar0;
	var uVar1;
	
	vVar0 = { Global_2412272[iParam2 /*3*/] };
	uVar1 = Global_2412272.f_121[iParam2];
	Global_2412272[iParam2 /*3*/] = { vParam0 };
	Global_2412272.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2412272.f_162 && iParam2 < 39)
	{
		if (vmag(vVar0) > 0f)
		{
			func_204(vVar0, uVar1, iParam2 + 1);
		}
	}
}

int func_205(vector3 vParam0, float fParam1, float fParam2)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (func_135(iVar3))
		{
			vVar1 = { func_8(iVar3) };
			fVar5 = vdist(vParam0, vVar1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_206(vector3 vParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && unk_0xD4E735F4B6A956AC() != iVar1) || iParam7 == 0)
		{
			if (func_6(iVar1, bParam3, bParam4))
			{
				if (unk_0xBC6A832F36065FDF(unk_0xD4E735F4B6A956AC(), iVar1))
				{
					if (!bParam6 || (!unk_0x4915F4759304D5CF(unk_0xEE978C39384D834F(iVar1)) && func_131(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) != unk_0xE46ECB9FD23D3264(iVar1))) || unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) == -1)
						{
							if (((unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) == -1 && iParam8) && bParam5) && func_136(iVar1))
							{
							}
							else if (unk_0xDC5D81351D6A4DDB(unk_0xEE978C39384D834F(iVar1)))
							{
								fVar2 = 0.1f;
								if (unk_0x5D7DFE2058701942(unk_0xEE978C39384D834F(iVar1), 0))
								{
									iVar3 = unk_0xCAEB6CE71A2C7212(unk_0xEE978C39384D834F(iVar1), 0);
									if (unk_0xDC5D81351D6A4DDB(iVar3) && !unk_0x7112137033807390(iVar3, 0))
									{
										iVar4 = unk_0x8F474E419F56E48D(iVar3);
										vVar5 = { unk_0xE2BBD32891C18569(iVar3, 0) };
										fVar6 = unk_0x552C823E1D2A019C(iVar3);
										if (func_207(vParam0, fParam1, iParam2, vVar5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_84(func_8(iVar1), vParam0, fParam1, iParam2, fVar2))
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

int func_207(vector3 vParam0, float fParam1, int iParam2, vector3 vParam3, float fParam4, int iParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (func_84(vParam0, vParam3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_86(iParam2, &vVar2, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar4 = { 0f, vVar3.y, 0f };
	func_91(&vVar4, 0f, 0f, fParam1);
	vVar5 = { 0f, vVar2.y, 0f };
	func_91(&vVar5, 0f, 0f, fParam1);
	vVar6 = { (unk_0x69C0BB7D03EE045D((vVar3.x - vVar2.x)) * 0.5f), 0f, 0f };
	func_91(&vVar6, 0f, 0f, fParam1);
	vVar1[0 /*3*/] = { vParam0 + vVar4 + vVar6 };
	vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0.5f * unk_0x69C0BB7D03EE045D((vVar3.z - vVar2.z))));
	vVar1[1 /*3*/] = { vParam0 + vVar4 - vVar6 };
	vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0.5f * unk_0x69C0BB7D03EE045D((vVar3.z - vVar2.z))));
	vVar1[2 /*3*/] = { vParam0 + vVar5 + vVar6 };
	vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0.5f * unk_0x69C0BB7D03EE045D((vVar3.z - vVar2.z))));
	vVar1[3 /*3*/] = { vParam0 + vVar5 - vVar6 };
	vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0.5f * unk_0x69C0BB7D03EE045D((vVar3.z - vVar2.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_84(vVar1[iVar0 /*3*/], vParam3, fParam4, iParam5, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam6)
	{
		if (func_207(vParam3, fParam4, iParam5, vParam0, fParam1, iParam2, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_208(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = unk_0xEB67B4270D12F60E(vParam0, 30f, 0, iVar0);
	if (unk_0xDC5D81351D6A4DDB(iVar1) && !unk_0x7112137033807390(iVar1, 0))
	{
		iVar2 = unk_0x8F474E419F56E48D(iVar1);
		vVar3 = { unk_0xE2BBD32891C18569(iVar1, 0) };
		fVar4 = unk_0x552C823E1D2A019C(iVar1);
		if (func_207(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0xEB67B4270D12F60E(vParam0, 30f, 0, iVar0);
	if (unk_0xDC5D81351D6A4DDB(iVar1) && !unk_0x7112137033807390(iVar1, 0))
	{
		iVar2 = unk_0x8F474E419F56E48D(iVar1);
		vVar3 = { unk_0xE2BBD32891C18569(iVar1, 0) };
		fVar4 = unk_0x552C823E1D2A019C(iVar1);
		if (func_207(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_209(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_212(vParam0, fParam1, iParam2, iParam3, iParam4) || func_210(vParam0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_210(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_211(vParam0, iParam2, Global_2417554.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2417554.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_207(vParam0, fParam1, iParam2, Global_2417554.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2417554.f_427[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417554.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_6(iVar2, 0, 1) && func_6(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_211(vector3 vParam0, int iParam1, vector3 vParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_92(iParam1, 1008981770);
	fVar1 = func_92(iParam3, 1008981770);
	fVar2 = vdist(vParam0, vParam2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_212(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 0, 1) && func_6(iParam3, 0, 1))
			{
				if (Global_2417554.f_261[iVar0])
				{
					if (func_84(Global_2417554.f_131[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_84(func_8(iVar1), vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417554.f_261[iVar0])
			{
				if (func_84(Global_2417554.f_131[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_6(iVar1, 0, 0))
			{
				if (unk_0xDC5D81351D6A4DDB(unk_0xEE978C39384D834F(iVar1)))
				{
					if (func_84(func_8(iVar1), vParam0, fParam1, iParam2, 1036831949))
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

int func_213(vector3 vParam0, var uParam1)
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_197(vParam0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_116(vParam0, uParam1->f_19, uParam1->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x0C4DF083566CCC1C(vParam0, uParam1->f_19, uParam1->f_22, uParam1->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_214(vector3 vParam0, float fParam1, int iParam2, bool bParam3, vector3 vParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11)
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	vector3 vVar11;
	vector3 vVar12;
	vector3 vVar13;
	
	if (bParam11)
	{
		if (vmag(vParam4) > 0f)
		{
			if (!func_217(vParam0, *fParam1, vParam4))
			{
				*fParam1 = (*fParam1 + 180f);
			}
		}
		return vParam0;
	}
	unk_0xB5645494B7AC0437(vParam0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		unk_0x7085BC35C02B7DAF(vParam0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
		if (iVar4 == iVar5)
		{
			*uParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar4 + iVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
			if (unk_0x7C197233F79C2CB8(iParam7) && func_216(vParam0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *uParam8)
		{
			*fParam1 = (*fParam1 + 180f);
			if (*fParam1 > 360f)
			{
				*fParam1 = (*fParam1 + -360f);
			}
		}
		if (*fParam1 <= 90f || *fParam1 > 270f)
		{
			bVar8 = true;
		}
		else
		{
			bVar8 = false;
		}
		bVar9 = false;
		if (bVar8)
		{
			if (iVar4 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar4)
			{
				bVar9 = true;
			}
		}
		else if (iVar5 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar5)
		{
			bVar9 = true;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (to_float(iVar4) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * to_float(iVar4));
				}
				if (bVar9)
				{
					if (iVar4 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
					}
				}
				else if (iVar4 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (to_float(iVar5) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * to_float(iVar5));
				}
				if (bVar9)
				{
					if (iVar5 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
					}
				}
				else if (iVar5 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar7 = (fVar7 + (0.95f * fVar6));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -0.5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + (4.2f * -0.5f));
			}
			if (!iParam7 == 0)
			{
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_215(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_215(iParam7, 1.5f);
				}
				if (fVar10 > 1.8f)
				{
					fVar7 = (fVar7 + ((fVar10 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (vmag(vParam4) > 0f)
	{
		if (!func_217(vParam0, *fParam1, vParam4))
		{
			if (bParam3 || ((uVar2 & 1024 != 0 || vParam0.z == 0f) && bParam6))
			{
				*fParam1 = (*fParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	vVar0 = { unk_0x2F230B37E9FFF23F(vParam0, *fParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (unk_0x6FC264123C92DF6C(vParam0, *fParam1, &vVar11))
		{
			vVar12 = { vVar11 - vParam0 };
			if (!iParam7 == 0)
			{
				vVar13 = { vVar12 / FtoV(vmag(vVar12)) };
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_215(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_215(iParam7, 1.5f);
				}
				vVar13 = { vVar13 * FtoV((fVar10 * 0.5f)) };
				vVar12 = { vVar12 - vVar13 };
				vVar11 = { vParam0 + vVar12 };
			}
			vVar13 = { vVar0 - vVar11 };
			vVar0 = { vVar11 };
		}
	}
	return vVar0;
}

float func_215(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_86(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_216(vector3 vParam0)
{
	float fVar0;
	
	if (unk_0x8F7BA8E028ADF980(vParam0.x, vParam0.y, (vParam0.z + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - vParam0.z);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_217(vector3 vParam0, float fParam1, vector3 vParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 0f, 1f, 0f };
	func_91(&vVar0, 0f, 0f, fParam1);
	vVar1 = { vParam2 - vParam0 };
	if (func_79(vVar1, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_218(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_82(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2411979[iVar1])
	{
		if (func_81(vParam0, &(Global_2411276[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411979[8])
	{
		if (func_81(vParam0, &(Global_2411276[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_219(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405070.f_26.f_17)
	{
		switch (Global_2405070.f_26.f_16)
		{
			case 0:
				if (func_197(*uParam0, Global_2405070.f_26.f_9, Global_2405070.f_26.f_15, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_116(*uParam0, Global_2405070.f_26.f_9, Global_2405070.f_26.f_12, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x0C4DF083566CCC1C(*uParam0, Global_2405070.f_26.f_9, Global_2405070.f_26.f_12, Global_2405070.f_26.f_15, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_103(*uParam0, Global_2405070.f_26.f_9, Global_2405070.f_26.f_12, Global_2405070.f_26.f_15, Global_2405070.f_26.f_16, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_220(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	vector3 vVar13;
	var uVar14;
	
	if (Global_2405070.f_1737 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!vmag(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_96(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_219(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2412272.f_162 = 0;
		Global_2412272.f_163 = 0;
		iVar4 = 0;
		while (iVar4 < 40)
		{
			Global_2412272[iVar4 /*3*/] = { 0f, 0f, 0f };
			Global_2412272.f_121[iVar4] = 0f;
			iVar4++;
		}
		func_221(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405070.f_1737)
		{
			iVar1 = Global_2405070.f_2143[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				vVar2 = { Global_2405070.f_1738[iVar1 /*4*/] };
				fVar3 = Global_2405070.f_1738[iVar1 /*4*/].f_3;
				if (vmag(vVar2) > 0f)
				{
					if ((uParam2->f_57 && vdist(vVar2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && vdist(vVar2.x, vVar2.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_209(vVar2, fVar3, uParam2->f_34, unk_0xD4E735F4B6A956AC(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_96(uParam2->f_35, &vVar2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar5 = uParam2->f_31;
										bVar6 = true;
										iVar7 = 1;
										fVar8 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											fVar8 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar8 = (fVar8 * 0.375f);
											}
										}
										else
										{
											bVar6 = true;
											iVar7 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar8 = (fVar8 * 0.375f);
												}
											}
										}
										bVar9 = false;
										if (!func_208(vVar2, fVar3, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_225(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar9 = true;
												}
											}
											else if (func_225(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_206(vVar2, fVar3, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar9 = true;
											}
										}
										if (bVar9)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar11 = 0f;
												if (uParam2->f_52)
												{
													iVar10 = func_205(vVar2, uParam2->f_54, &fVar11);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar10 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar10 < uParam2->f_53)
														{
															iVar4 = 0;
															while (iVar4 < Global_2412272.f_162)
															{
																Global_2412272[iVar4 /*3*/] = { 0f, 0f, 0f };
																Global_2412272.f_121[iVar4] = 0f;
																iVar4++;
															}
															Global_2412272.f_162 = 0;
															uParam2->f_53 = iVar10;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412272.f_162 == 0)
														{
															Global_2412272[0 /*3*/] = { vVar2 };
															Global_2412272.f_121[0] = fVar3;
														}
														else
														{
															iVar4 = 0;
															while (iVar4 < Global_2412272.f_162 + 1)
															{
																if (iVar4 < 40)
																{
																	if (vdist2(vVar2, uParam2->f_35) < vdist2(Global_2412272[iVar4 /*3*/], uParam2->f_35))
																	{
																		func_204(vVar2, fVar3, iVar4);
																		iVar4 = Global_2412272.f_162 + 1;
																	}
																}
																iVar4++;
															}
														}
														Global_2412272.f_162++;
														if (Global_2412272.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405070.f_1737;
															}
															else if (Global_2412272.f_162 == 40)
															{
																iVar0 = Global_2405070.f_1737;
															}
														}
													}
													else
													{
														Global_2412272[Global_2412272.f_162 /*3*/] = { vVar2 };
														Global_2412272.f_121[Global_2412272.f_162] = fVar3;
														Global_2412272.f_162++;
														if (Global_2412272.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405070.f_1737;
															}
															else if (Global_2412272.f_162 == 40)
															{
																iVar0 = Global_2405070.f_1737;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { vVar2 };
												*uParam1 = fVar3;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { vVar2 };
										*uParam1 = fVar3;
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
		if (Global_2412272.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412272[0 /*3*/] };
				*uParam1 = Global_2412272.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412272.f_163 > 0 && !Global_2412272.f_163 == Global_2412272.f_162)
				{
					func_202(0, uParam2);
				}
				iVar12 = unk_0x22C775856F4633CA(0, Global_2412272.f_162);
				vVar13 = { Global_2412272[0 /*3*/] };
				uVar14 = Global_2412272.f_121[0];
				Global_2412272[0 /*3*/] = { Global_2412272[iVar12 /*3*/] };
				Global_2412272.f_121[0] = Global_2412272.f_121[iVar12];
				Global_2412272[iVar12 /*3*/] = { vVar13 };
				Global_2412272.f_121[iVar12] = uVar14;
				*uParam0 = { Global_2412272[0 /*3*/] };
				*uParam1 = Global_2412272.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_221(vector3 vParam0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405070.f_1737)
	{
		uVar1 = func_222(vParam0, fVar0, &fVar0);
		Global_2405070.f_2143[iVar2] = uVar1;
		iVar2++;
	}
}

int func_222(vector3 vParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405070.f_1737)
	{
		fVar2 = vdist2(vParam0, Global_2405070.f_1738[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

bool func_223(int iParam0)
{
	return iParam0 == 50;
}

void func_224(var uParam0, var uParam1)
{
	unk_0x8F2787F344F8B973(uParam0, uParam1, 0.1f);
	Global_2405070.f_2457 = unk_0xFCB3E4B16B4A9EC1();
	Global_2405070.f_2455 = 1;
	Global_2405070.f_2458 = unk_0xFFCC7EBF88BDEE54();
}

int func_225(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_181(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_168(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405070.f_2++;
	return 1;
}

void func_226()
{
	func_231();
	func_230();
	func_229();
	func_228();
	func_227();
}

void func_227()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 128)
	{
		Global_2407969[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_228()
{
	struct<10> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_2405070.f_2474.f_90[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_229()
{
	struct<4> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_2405070.f_2474.f_57[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_230()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Global_2405070.f_2474.f_6[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_231()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2405070.f_2474 = { Var0 };
}

void func_232()
{
	if (Global_2405070.f_2455)
	{
		if (unk_0xFCB3E4B16B4A9EC1() == Global_2405070.f_2457)
		{
			unk_0xDC06FA69497D1E3B();
		}
		else
		{
			unk_0xDC06FA69497D1E3B();
		}
		Global_2405070.f_2455 = 0;
	}
}

int func_233(bool bParam0)
{
	if (unk_0x71364F510A1CB69F())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

bool func_234(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xCACEBBBEAD8F262E(iParam0);
	return unk_0x7FC99CCC73354033(iParam0);
}

int func_235(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Local_95.f_49;
			break;
	}
	return 0;
}

int func_236()
{
	if (iLocal_101 == 0)
	{
		if (unk_0x05EFB6A616B6FADE(Local_95.f_2, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_237()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	var uVar9;
	
	if (!unk_0x05EFB6A616B6FADE(Local_95.f_2, 0))
	{
		unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 0);
		if (iLocal_101 != 0)
		{
			return 1;
		}
		else if (func_6(iLocal_103, 1, 1))
		{
			if (unk_0xBCC2AC37F56D2149(false, 0) - unk_0xEBCEB76159738410(0)) >= func_463(iLocal_101)
			{
				if (unk_0x94D82D856BD4DE54(func_463(iLocal_101)))
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = unk_0xEE978C39384D834F(iLocal_103);
					iVar3 = unk_0x751DA0D8357E8793(iVar2, &uLocal_284, -1);
					bVar4 = true;
					iVar0 = 0;
					while (iVar0 < iVar3)
					{
						if (bVar4)
						{
							iVar5 = -1;
							bVar4 = false;
							iVar1 = 0;
							while (iVar1 < func_463(iLocal_101))
							{
								if (iVar5 == -1)
								{
									if (((!unk_0x83A1DA4E6C55E952(Local_95.f_10[iVar1 /*7*/]) && !unk_0x05EFB6A616B6FADE(Local_95.f_10[iVar1 /*7*/].f_2, 1)) && !unk_0x05EFB6A616B6FADE(Local_95.f_10[iVar1 /*7*/].f_2, 6)) && !unk_0x05EFB6A616B6FADE(Local_95.f_10[iVar1 /*7*/].f_2, 8))
									{
										iVar5 = iVar1;
										bVar4 = true;
									}
								}
								iVar1++;
							}
							if (iVar5 != -1)
							{
								if (unk_0xDC5D81351D6A4DDB(uLocal_284[iVar0]))
								{
									if (!unk_0x7112137033807390(uLocal_284[iVar0], 0))
									{
										if (!unk_0xC085874FDE5FE33A(uLocal_284[iVar0]))
										{
											if (func_239(unk_0x8F474E419F56E48D(uLocal_284[iVar0])))
											{
												if (!unk_0x4943BEEC19289B8E(uLocal_284[iVar0]))
												{
													if (!unk_0x5D7DFE2058701942(uLocal_284[iVar0], 0))
													{
														if (func_5(unk_0xE2BBD32891C18569(uLocal_284[iVar0], 1), unk_0xE2BBD32891C18569(iVar2, 1), 625f))
														{
															unk_0x1F7948851FB36E88(uLocal_284[iVar0], 1, 0);
															Local_95.f_10[iVar5 /*7*/].f_6 = iVar0;
															unk_0x2BCFB39E86340DAA(&(Local_95.f_10[iVar5 /*7*/].f_2), 8);
															if (!unk_0x05EFB6A616B6FADE(Local_95.f_1, 12))
															{
																Local_95.f_8 = iLocal_106;
																unk_0x2BCFB39E86340DAA(&(Local_95.f_1), 12);
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
						iVar0++;
					}
				}
			}
		}
	}
	else if (unk_0x05EFB6A616B6FADE(Local_95.f_1, 12))
	{
		iVar6 = 0;
		iVar7 = 0;
		bVar8 = false;
		iVar6 = 0;
		while (iVar6 < func_463(iLocal_101))
		{
			if (unk_0x05EFB6A616B6FADE(Local_95.f_10[iVar6 /*7*/].f_2, 1) || unk_0x05EFB6A616B6FADE(Local_95.f_10[iVar6 /*7*/].f_2, 6))
			{
				iVar7++;
			}
			else if (unk_0x05EFB6A616B6FADE(Local_95.f_10[iVar6 /*7*/].f_2, 8))
			{
				if (!unk_0x7112137033807390(uLocal_284[Local_95.f_10[iVar6 /*7*/].f_6], 0))
				{
					if (unk_0x4943BEEC19289B8E(uLocal_284[Local_95.f_10[iVar6 /*7*/].f_6]))
					{
						if (!unk_0xB540EEBB14C48518(uLocal_284[Local_95.f_10[iVar6 /*7*/].f_6]))
						{
							unk_0x39926DD5354848E1(uLocal_284[Local_95.f_10[iVar6 /*7*/].f_6]);
							bVar8 = true;
						}
						else
						{
							unk_0x1C09E70D9D927D95(uLocal_284[Local_95.f_10[iVar6 /*7*/].f_6], 1);
							Local_95.f_10[iVar6 /*7*/] = unk_0xADF0D7F44D12DC49(uLocal_284[Local_95.f_10[iVar6 /*7*/].f_6]);
							unk_0x2F16A8714FE53E5C(Local_95.f_10[iVar6 /*7*/], 1);
							unk_0x2BCFB39E86340DAA(&(Local_95.f_10[iVar6 /*7*/].f_2), 0);
							Local_95.f_10[iVar6 /*7*/].f_1 = iLocal_101;
							Local_95.f_10[iVar6 /*7*/].f_4 = func_65(iLocal_101);
							func_63(iVar6);
							unk_0xFA57C719261AA55D(&(Local_95.f_10[iVar6 /*7*/].f_2), 8);
							iVar7++;
						}
					}
					else
					{
						bVar8 = true;
					}
				}
			}
			iVar6++;
		}
		if (!bVar8 || unk_0x1893BEC593409B02(iLocal_106, Local_95.f_8) > 5000)
		{
			if (iVar7 >= func_463(iLocal_101))
			{
				unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 4);
			}
			iVar6 = 0;
			while (iVar6 < 16)
			{
				uLocal_284[iVar6] = uVar9;
				iVar6++;
			}
			iVar6 = 0;
			while (iVar6 < func_463(iLocal_101))
			{
				if (unk_0x05EFB6A616B6FADE(Local_95.f_10[iVar6 /*7*/].f_2, 8))
				{
					func_238(&(Local_95.f_10[iVar6 /*7*/]));
					unk_0xFA57C719261AA55D(&(Local_95.f_10[iVar6 /*7*/].f_2), 8);
				}
				iVar6++;
			}
			unk_0xFA57C719261AA55D(&(Local_95.f_1), 12);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_238(var uParam0)
{
	int iVar0;
	
	if (unk_0xAABBF7FA3E338B30(*uParam0))
	{
		iVar0 = unk_0x1C3E3FC5D339FC8C(*uParam0);
		unk_0x69C8D2CAA0701F42(&iVar0);
	}
}

int func_239(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01"))
	{
		return 0;
	}
	return 1;
}

int func_240()
{
	if (unk_0x05EFB6A616B6FADE(Local_95.f_1, 6))
	{
		return 1;
	}
	else if (iLocal_101 == 0)
	{
		Local_95.f_49 = func_241(Local_95.f_36, 1);
		unk_0x2BCFB39E86340DAA(&(Local_95.f_1), 6);
		return 1;
	}
	else
	{
		unk_0x2BCFB39E86340DAA(&(Local_95.f_1), 6);
		return 1;
	}
	return 0;
}

int func_241(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	if (func_242(vParam0, 1301f, -1696f, 300f, 350f, 0))
	{
		return joaat("g_m_y_mexgoon_01");
	}
	else if (func_242(vParam0, 1100f, -196f, 300f, 350f, 0) || func_242(vParam0, 77f, 3657f, 100f, 150f, 0))
	{
		return joaat("g_m_y_lost_01");
	}
	else if (func_242(vParam0, 208f, -1835f, 200f, 250f, 0))
	{
		return joaat("g_m_y_ballaorig_01");
	}
	else if (func_242(vParam0, -26f, -1450f, 200f, 250f, 0))
	{
		return joaat("g_m_y_famca_01");
	}
	else if (func_242(vParam0, -654f, -922f, 300f, 350f, 0))
	{
		return joaat("g_m_y_korean_02");
	}
	else if (func_242(vParam0, 1840f, 3657f, 450f, 500f, 0))
	{
		return joaat("a_m_m_hillbilly_02");
	}
	else if (func_242(vParam0, 550f, -1885f, 200f, 250f, 0))
	{
		return joaat("g_m_y_salvagoon_01");
	}
	else if (iParam1 == 1)
	{
		iVar0 = unk_0x22C775856F4633CA(0, 100);
		if (iVar0 < 33)
		{
			return joaat("mp_g_m_pros_01");
		}
		else if (iVar0 >= 66)
		{
			return joaat("g_m_m_armgoon_01");
		}
		else
		{
			return joaat("g_m_m_chigoon_01");
		}
		if (vParam0.y > 800f)
		{
			iVar0 = unk_0x22C775856F4633CA(0, 100);
			if (iVar0 < 33)
			{
				return joaat("a_m_m_hillbilly_02");
			}
		}
	}
	return joaat("mp_g_m_pros_01");
}

bool func_242(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3)
{
	return unk_0x499324B3EF19C288(vParam0, vParam1, iParam3) <= fParam2;
}

void func_243(int iParam0)
{
	if (unk_0x4915F4759304D5CF(iParam0))
	{
	}
	Local_95.f_36 = { unk_0xE2BBD32891C18569(iParam0, 1) };
	if (func_244(iParam0, 0))
	{
		unk_0x2BCFB39E86340DAA(&(Local_95.f_1), 17);
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Local_95.f_1), 17);
	}
}

int func_244(int iParam0, int iParam1)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (!unk_0x7112137033807390(iParam0, 0) || iParam1)
		{
			if (unk_0x4374EED90C523366(iParam0))
			{
				if (unk_0x0FD5C826D2659CD1(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_245()
{
	bool bVar0;
	
	if (unk_0x45F99485D7E1C29A())
	{
		if (unk_0x05EFB6A616B6FADE(Local_95.f_1, 7))
		{
			return 1;
		}
		else
		{
			bVar0 = false;
			switch (iLocal_101)
			{
				case 0:
					if (unk_0x05EFB6A616B6FADE(Local_95.f_2, 11))
					{
						if (func_6(iLocal_103, 1, 1))
						{
							if (vdist2(func_8(iLocal_103), Local_95.f_39) > 625f)
							{
								unk_0xFA57C719261AA55D(&(Local_95.f_2), 11);
								unk_0xFA57C719261AA55D(&iLocal_98, 8);
							}
						}
					}
					else
					{
						if (func_6(iLocal_103, 1, 1))
						{
							bVar0 = true;
							if (func_248())
							{
								bVar0 = false;
							}
						}
						if (bVar0)
						{
							func_58();
						}
						else
						{
							func_59();
						}
						if (unk_0x05EFB6A616B6FADE(Local_95.f_1, 5))
						{
							if (func_247())
							{
								func_59();
								unk_0x2BCFB39E86340DAA(&(Local_95.f_1), 7);
							}
						}
					}
					break;
				
				case 1:
					if (func_6(iLocal_103, 1, 1))
					{
						bVar0 = true;
						if (func_246())
						{
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						func_58();
					}
					else
					{
						func_59();
					}
					if (unk_0x05EFB6A616B6FADE(Local_95.f_1, 5))
					{
						if (unk_0x1893BEC593409B02(iLocal_106, Local_95.f_5) > 30000)
						{
							func_59();
							unk_0x2BCFB39E86340DAA(&(Local_95.f_1), 7);
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_246()
{
	int iVar0;
	
	iVar0 = unk_0xEE978C39384D834F(iLocal_103);
	if (((((unk_0x26D28D230F871E8D(iVar0) || unk_0x4374EED90C523366(iVar0)) || func_29(iLocal_103, 1, 0)) || func_37(iLocal_103, 0)) || func_37(iLocal_103, 7)) || func_28(iLocal_103))
	{
		return 1;
	}
	if (func_113(iLocal_103, 1))
	{
		if (iLocal_103 > -1)
		{
			if (Global_1589747[iLocal_103 /*790*/] != 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_247()
{
	if (!unk_0x05EFB6A616B6FADE(Local_95.f_1, 18))
	{
		if (unk_0x1893BEC593409B02(iLocal_106, Local_95.f_5) > 5000)
		{
			unk_0x2BCFB39E86340DAA(&(Local_95.f_1), 18);
			return 1;
		}
	}
	else if (unk_0x1893BEC593409B02(iLocal_106, Local_95.f_5) > 60000)
	{
		return 1;
	}
	return 0;
}

int func_248()
{
	int iVar0;
	
	iVar0 = unk_0xEE978C39384D834F(iLocal_103);
	if (((((((((unk_0xEAA5CEF8875FEEED(iVar0) > 10f || unk_0x26D28D230F871E8D(iVar0)) || unk_0x4374EED90C523366(iVar0)) || func_29(iLocal_103, 1, 0)) || func_57(iLocal_103)) || func_37(iLocal_103, 0)) || func_37(iLocal_103, 7)) || func_28(iLocal_103)) || Global_2423801[iLocal_103 /*413*/].f_238) || func_56(unk_0xEE978C39384D834F(iLocal_103), joaat("titan")))
	{
		return 1;
	}
	if (func_113(iLocal_103, 1))
	{
		if (iLocal_103 > -1)
		{
			if (Global_1589747[iLocal_103 /*790*/] != 1)
			{
				return 1;
			}
		}
	}
	if (iLocal_103 != -1)
	{
		if (unk_0x05EFB6A616B6FADE(Local_97[iLocal_103 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_249()
{
	if (!unk_0x05EFB6A616B6FADE(Local_95.f_1, 14))
	{
		Local_95.f_9 = iLocal_106;
		unk_0x2BCFB39E86340DAA(&(Local_95.f_1), 14);
	}
}

void func_250()
{
	if (Local_95.f_44 != Local_97[iLocal_102 /*5*/].f_4)
	{
		Local_95.f_44 = Local_97[iLocal_102 /*5*/].f_4;
	}
}

void func_251()
{
	if (!unk_0x05EFB6A616B6FADE(Local_95.f_1, 10))
	{
		Local_95.f_45 = func_463(iLocal_101);
		Local_95.f_46 = 0;
		Local_95.f_47 = 0;
		unk_0x2BCFB39E86340DAA(&(Local_95.f_1), 10);
	}
}

void func_252()
{
	func_253();
	if (!unk_0x05EFB6A616B6FADE(Local_95.f_1, 8))
	{
		if (unk_0x05EFB6A616B6FADE(Local_95.f_2, 7))
		{
			if (unk_0x1893BEC593409B02(iLocal_106, Local_95.f_7) > 300000)
			{
				unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 8);
			}
		}
	}
}

void func_253()
{
	if (!unk_0x05EFB6A616B6FADE(Local_95.f_2, 7))
	{
		Local_95.f_7 = iLocal_106;
		unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 7);
	}
}

void func_254()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0x2BCFB39E86340DAA(&iLocal_98, 7);
	if (unk_0x05EFB6A616B6FADE(Local_95.f_3, 1))
	{
	}
	if (unk_0x05EFB6A616B6FADE(Local_95.f_3, 2))
	{
	}
	if (unk_0x05EFB6A616B6FADE(Local_95.f_3, 3))
	{
	}
	if (unk_0x05EFB6A616B6FADE(Local_95.f_3, 9))
	{
	}
	if (unk_0x05EFB6A616B6FADE(Local_95.f_3, 4))
	{
	}
	if (unk_0x05EFB6A616B6FADE(Local_95.f_3, 5))
	{
	}
	if (unk_0x05EFB6A616B6FADE(Local_95.f_3, 11))
	{
		if (unk_0xD4E735F4B6A956AC() == iLocal_102)
		{
			unk_0xFA57C719261AA55D(&iLocal_98, 7);
			if (Local_95.f_50 || Local_95.f_52)
			{
				unk_0x2BCFB39E86340DAA(&iLocal_98, 7);
			}
			else if (func_365("MPCT_MERts", "FM_MERRYWEATHER", 85))
			{
				unk_0x2BCFB39E86340DAA(&iLocal_98, 7);
			}
		}
	}
	if (unk_0x05EFB6A616B6FADE(Local_95.f_3, 6))
	{
		if (unk_0xD4E735F4B6A956AC() == iLocal_102)
		{
			unk_0xFA57C719261AA55D(&iLocal_98, 7);
			if (Local_95.f_50 || Local_95.f_52)
			{
				unk_0x2BCFB39E86340DAA(&iLocal_98, 7);
			}
			else if (func_365("MPCT_MERtd", "FM_MERRYWEATHER", 85))
			{
				unk_0x2BCFB39E86340DAA(&iLocal_98, 7);
			}
		}
	}
	if (unk_0x05EFB6A616B6FADE(Local_95.f_3, 7))
	{
		if (unk_0xD4E735F4B6A956AC() == iLocal_102)
		{
			unk_0xFA57C719261AA55D(&iLocal_98, 7);
			if (func_333())
			{
				if (!Local_95.f_50)
				{
					if (Local_95.f_52)
					{
						iLocal_285 = func_332(Local_95.f_53);
					}
					else
					{
						iLocal_285 = func_328(12);
					}
					if (iLocal_285 > 0)
					{
						func_326(iLocal_285, 1, 0, 0f);
						func_311(iLocal_285, 4, 1, 1);
					}
					unk_0x2BCFB39E86340DAA(&iLocal_98, 7);
				}
				else
				{
					unk_0x2BCFB39E86340DAA(&iLocal_98, 7);
				}
			}
		}
	}
	if (unk_0x05EFB6A616B6FADE(Local_95.f_3, 0))
	{
		if (unk_0xD4E735F4B6A956AC() == iLocal_102)
		{
			if (!unk_0x05EFB6A616B6FADE(Local_95.f_2, 1))
			{
				unk_0xFA57C719261AA55D(&iLocal_98, 7);
				if (func_365("MPCT_mugfail", "LAMAR", 19))
				{
					unk_0x2BCFB39E86340DAA(&iLocal_98, 7);
				}
			}
		}
		else if (unk_0xD4E735F4B6A956AC() == iLocal_103)
		{
			if (unk_0x05EFB6A616B6FADE(Local_95.f_2, 1))
			{
				if (unk_0x05EFB6A616B6FADE(Local_95.f_2, 12))
				{
					iVar0 = round((IntToFloat(Global_262145.f_6531) * Global_262145.f_4293));
					func_270(0, "XPT_MEDIUMT", -1859646258, 757237446, iVar0, 1, -1, 0);
					func_256(47, 1);
				}
			}
		}
	}
	if (unk_0x05EFB6A616B6FADE(Local_95.f_3, 8))
	{
		if (unk_0xD4E735F4B6A956AC() == iLocal_102)
		{
			unk_0xFA57C719261AA55D(&iLocal_98, 7);
			if (func_333())
			{
				if (iLocal_101 == 0)
				{
					iLocal_285 = (func_328(2) * func_463(iLocal_101));
					iVar1 = 3;
				}
				else
				{
					if (Local_95.f_52)
					{
						iLocal_285 = func_332(Local_95.f_53);
					}
					else
					{
						iLocal_285 = func_328(12);
					}
					iVar1 = 4;
				}
				if (!Local_95.f_50)
				{
					if (iLocal_285 > 0)
					{
						func_326(iLocal_285, 1, 0, 0f);
						func_311(iLocal_285, iVar1, 1, 0);
					}
					unk_0x2BCFB39E86340DAA(&iLocal_98, 7);
				}
				else
				{
					unk_0x2BCFB39E86340DAA(&iLocal_98, 7);
				}
			}
		}
	}
	if (unk_0x05EFB6A616B6FADE(Local_95.f_3, 10))
	{
		if (unk_0xD4E735F4B6A956AC() == iLocal_102)
		{
			unk_0xFA57C719261AA55D(&iLocal_98, 7);
			if (func_333())
			{
				if (iLocal_101 == 0)
				{
					iLocal_285 = (func_328(2) * func_463(iLocal_101));
					iVar2 = 3;
				}
				else
				{
					if (Local_95.f_52)
					{
						iLocal_285 = func_332(Local_95.f_53);
					}
					else
					{
						iLocal_285 = func_328(12);
					}
					iVar2 = 4;
				}
				if (!Local_95.f_50)
				{
					if (iLocal_285 > 0)
					{
						func_326(iLocal_285, 1, 0, 0f);
						func_311(iLocal_285, iVar2, 1, 0);
					}
					unk_0x2BCFB39E86340DAA(&iLocal_98, 7);
				}
				else
				{
					unk_0x2BCFB39E86340DAA(&iLocal_98, 7);
				}
			}
		}
	}
	if (unk_0x05EFB6A616B6FADE(iLocal_98, 7))
	{
		func_255();
	}
}

void func_255()
{
	unk_0xFA57C719261AA55D(&(Global_1589747[unk_0x8D4ED2C97DFF2321() /*790*/].f_143), iLocal_101);
	Global_1589747[unk_0x8D4ED2C97DFF2321() /*790*/].f_144 = -1;
	if (iLocal_101 == 1)
	{
		if (unk_0x1300A1C84690C199(uLocal_283))
		{
			unk_0x2E5E25A43D4582A2(uLocal_283);
		}
	}
	func_492();
	func_524();
}

int func_256(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_257(iParam0, iParam1);
}

int func_257(int iParam0, int iParam1)
{
	if (func_269(14) && !func_268(iParam0))
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
	if (func_267(&Global_4268566))
	{
		if (func_265(&Global_4268566, iParam0))
		{
			return 0;
		}
		if (func_258(&Global_4268566, iParam0))
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

int func_258(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x16E6CF5D5B848918(iParam1))
	{
		return 0;
	}
	if (func_269(14) && !func_268(iParam1))
	{
		return 0;
	}
	if (func_265(uParam0, iParam1))
	{
		return 0;
	}
	if (func_264(uParam0) < 0f)
	{
		func_263(uParam0, 0);
	}
	func_261(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_259(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_259(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x16E6CF5D5B848918(iParam1))
	{
		return 0;
	}
	if (func_269(14) && !func_268(iParam1))
	{
		return 0;
	}
	if (func_265(uParam0, iParam1))
	{
		return 0;
	}
	if (func_264(uParam0) < 0f)
	{
		func_263(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_260(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_260(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_261(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_262(uParam0, iVar0);
		iVar0++;
	}
	func_263(uParam0, (Global_4268565 - 0.5f));
}

void func_262(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_263(var uParam0, float fParam1)
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

float func_264(var uParam0)
{
	return uParam0->f_80;
}

bool func_265(var uParam0, int iParam1)
{
	return func_266(uParam0, iParam1) != -1;
}

int func_266(var uParam0, int iParam1)
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

bool func_267(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_268(int iParam0)
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

bool func_269(int iParam0)
{
	return Global_36117 == iParam0;
}

var func_270(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_271(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_271(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_272(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_272(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_310(unk_0xD4E735F4B6A956AC()) || func_309(unk_0xD4E735F4B6A956AC()))
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
	else if (func_307() || func_305(unk_0xD4E735F4B6A956AC()))
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
	if (func_304(sParam2))
	{
	}
	if (func_303())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_301(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_300(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_298(0, &iVar1);
					break;
				
				case 3:
					func_298(1, &iVar1);
					break;
				
				case 1:
					func_296(&iVar1);
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
			func_293(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_282((func_292(unk_0xD4E735F4B6A956AC()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x300F50ED36AA0A0C(iVar1, iParam8, iParam9);
				if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_2 != -1)
				{
					func_293(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_277(iVar1);
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
				func_273((func_275(unk_0xD4E735F4B6A956AC()) + iVar1));
			}
			else
			{
				func_273((func_275(unk_0xD4E735F4B6A956AC()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_273(int iParam0)
{
	if (func_303())
	{
		Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_5 = iParam0;
		func_274(joaat("mpply_globalxp"), iParam0);
	}
}

void func_274(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, 1);
	}
}

int func_275(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xD4E735F4B6A956AC())
			{
				return func_276(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589747[iParam0 /*790*/].f_211.f_5;
			}
		}
		else
		{
			return func_276(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_276(int iParam0)
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

void func_277(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_138(unk_0xD4E735F4B6A956AC()) };
	if (unk_0xD1832FEBE50B1AB1())
	{
		if (unk_0xE0B3F7A8017F6425(&Var0))
		{
			iVar1 = func_280(func_281(&Var0));
			if (iVar1 == 0)
			{
				func_279(&Global_1378824, iParam0);
				func_278(joaat("mpply_crew_local_xp_0"), Global_1378824);
			}
			else if (iVar1 == 1)
			{
				func_279(&Global_1378825, iParam0);
				func_278(joaat("mpply_crew_local_xp_1"), Global_1378825);
			}
			else if (iVar1 == 2)
			{
				func_279(&Global_1378826, iParam0);
				func_278(joaat("mpply_crew_local_xp_2"), Global_1378826);
			}
			else if (iVar1 == 3)
			{
				func_279(&Global_1378827, iParam0);
				func_278(joaat("mpply_crew_local_xp_3"), Global_1378827);
			}
			else if (iVar1 == 4)
			{
				func_279(&Global_1378828, iParam0);
				func_278(joaat("mpply_crew_local_xp_4"), Global_1378828);
			}
		}
	}
}

void func_278(int iParam0, int iParam1)
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

void func_279(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_280(int iParam0)
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

int func_281(var uParam0)
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

void func_282(int iParam0, int iParam1, int iParam2)
{
	if (func_303())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9490 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1378945[func_291(-1)])
				{
					unk_0x300F50ED36AA0A0C(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1378945[func_291(-1)])
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
		if (func_290(unk_0xD4E735F4B6A956AC()))
		{
			Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_1 = iParam0;
			Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_211.f_6 = func_288(iParam0, 1);
		}
		func_287(639, iParam0, -1, 1);
		func_286(640, func_288(iParam0, 1), -1, 1, 0);
		Global_1378945[func_291(-1)] = iParam0;
		func_283(7, 0);
	}
}

void func_283(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_285(iParam0, iParam1))
	{
		iVar0 = func_284();
		Global_2458086[iVar0] = iParam0;
	}
}

int func_284()
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

int func_285(int iParam0, var uParam1)
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

void func_286(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_291(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
}

void func_287(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2535519[iParam0 /*3*/][func_291(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1378885[func_291(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1378891[func_291(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1378897[func_291(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1378903[func_291(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1378861[func_291(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1378867[func_291(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1378873[func_291(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1378879[func_291(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1378837[func_291(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1378843[func_291(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1378849[func_291(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1378855[func_291(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1378909[func_291(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1378915[func_291(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1378921[func_291(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1378927[func_291(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1378933[func_291(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1378939[func_291(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1378945[func_291(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1378951[func_291(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2568104[0 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2568104[1 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2568104[2 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2568104[3 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_2568229[func_291(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1378957[func_291(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1378963[func_291(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1378969[func_291(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1378975[func_291(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2568165[0 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2568165[1 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2568165[2 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2568165[3 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2568165[4 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2568232[0 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2568232[1 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2568232[2 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2568232[3 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2568232[4 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2568248[0 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2568248[1 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2568248[2 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2568248[3 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2568248[4 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2568165[5 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2568104[4 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2568264[func_291(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2568273[func_291(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2568267[func_291(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2568276[func_291(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2568270[func_291(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2568279[func_291(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2568282[func_291(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2568165[6 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2568104[5 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2568165[7 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2568104[6 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2568165[8 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2568104[7 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2568165[9 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2568104[8 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2568165[10 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2568104[9 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2568165[11 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2568104[10 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2568165[12 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2568104[11 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2568165[13 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2568104[12 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2568165[14 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2568104[13 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2568165[15 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2568104[14 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2568165[16 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2568104[15 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2568165[17 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2568104[16 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2568104[17 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2568104[18 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2568104[19 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_288(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_289(iParam0, 0);
}

int func_289(int iParam0, int iParam1)
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

int func_290(int iParam0)
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

int func_291(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_196();
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

int func_292(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xD4E735F4B6A956AC())
			{
				return Global_1378945[func_291(-1)];
			}
			else if (func_290(iParam0))
			{
				return Global_1589747[iParam0 /*790*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1378945[func_291(-1)];
	}
	return 0;
}

void func_293(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_295(iParam0, func_291(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_294(iParam0))
	{
		func_286(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_287(iParam0, iVar0, iParam2, 1);
	}
}

int func_294(int iParam0)
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

int func_295(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_291(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_296(int iParam0)
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
				if (unk_0xE46ECB9FD23D3264(iVar5) == iVar1 || func_140(unk_0xE46ECB9FD23D3264(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xD4E735F4B6A956AC())
					{
						if (func_139(unk_0xD4E735F4B6A956AC(), iVar5))
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
		iVar6 = round((func_297(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_297(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_297(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_298(bool bParam0, int iParam1)
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
				if (func_6(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xD4E735F4B6A956AC())
					{
						iVar1++;
						if (func_139(unk_0xD4E735F4B6A956AC(), iVar4))
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
			if (func_6(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xD4E735F4B6A956AC())
				{
					if (func_299(unk_0xD4E735F4B6A956AC(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_139(unk_0xD4E735F4B6A956AC(), iVar4))
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
		iVar5 = round((func_297(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_297(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_299(int iParam0, int iParam1)
{
	return vdist(func_8(iParam0), func_8(iParam1));
	return 0f;
}

int func_300(int iParam0)
{
	int iVar0;
	
	if (unk_0x5140B71AC6379F52() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_297(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_301(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x69E48309C7AE810E(iParam0) > func_292(unk_0xD4E735F4B6A956AC()))
		{
			iParam0 = -func_292(unk_0xD4E735F4B6A956AC());
		}
	}
	if (func_302(8000, 0, 0) > 0)
	{
		if (func_302(8000, 0, 0) < (iParam0 + func_292(unk_0xD4E735F4B6A956AC())))
		{
			iParam0 = (func_302(8000, 0, 0) - func_292(unk_0xD4E735F4B6A956AC()));
		}
	}
	return iParam0;
}

int func_302(int iParam0, bool bParam1, int iParam2)
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

int func_303()
{
	return 1;
}

int func_304(char* sParam0)
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

int func_305(int iParam0)
{
	return func_306(func_33(iParam0));
}

int func_306(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_307()
{
	if (unk_0xD8B89B387D170E27())
	{
		return func_171();
	}
	return func_308(Global_4456448.f_130782);
}

int func_308(int iParam0)
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

bool func_309(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 2;
}

bool func_310(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 7;
}

void func_311(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_325(iParam1), 16);
	StringCopy(&Var1, func_324(iParam2), 16);
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
	if (func_46())
	{
		func_312(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
		Global_4262927[iVar3 /*80*/].f_13.f_40 = { Var0 };
		Global_4262927[iVar3 /*80*/].f_13.f_44 = { Var1 };
	}
	else
	{
		unk_0x4F7E5FD76186605D(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_312(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_46())
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
				func_313(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_313(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -597978445:
			if (iParam1 > 0)
			{
				func_313(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
			func_313(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_313(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_46())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_196()) || unk_0x64BE694244417BDA())
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
			*uParam0 = func_320(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_319(1, iParam4);
			Global_4263477 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_314(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_314(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x2BCFB39E86340DAA(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_315(iParam0);
	}
}

void func_315(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_46())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_318(iParam0))
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
		func_316(&(Global_4262927[iParam0 /*80*/]));
	}
}

void func_316(var uParam0)
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
	func_317(&(uParam0->f_13));
	func_317(&(uParam0->f_13.f_13));
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

void func_317(var uParam0)
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

int func_318(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_5 == 1;
	}
	return 0;
}

void func_319(int iParam0, int iParam1)
{
	Global_2460521 = iParam1;
	Global_2460520 = iParam0;
}

int func_320(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4262927[iVar0 /*80*/].f_61.f_2 == 0)
		{
			if (!func_46())
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
				func_321(Global_4262927[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_321(struct<62> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_323(vVar0.y);
	if ((Global_262145.f_23427 && !Global_262145.f_23428) && !Global_262145.f_23429)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_322();
		unk_0x04F37AFC39D93909(1, &vVar0, 35, iVar1);
	}
}

void func_322()
{
	unk_0xD75A4240F0AD8613("AM_ARENA_SHP");
}

var func_323(int iParam0)
{
	var uVar0;
	
	unk_0x2BCFB39E86340DAA(&uVar0, iParam0);
	return uVar0;
}

char* func_324(int iParam0)
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

char* func_325(int iParam0)
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

void func_326(int iParam0, int iParam1, int iParam2, float fParam3)
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
		func_327(iVar1, 0);
	}
}

void func_327(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_328(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_331(iParam0) >= 0)
	{
		iVar0 = func_331(iParam0);
	}
	else
	{
		iVar0 = func_329(iParam0);
	}
	return iVar0;
}

int func_329(int iParam0)
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
			if (func_330())
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

bool func_330()
{
	return unk_0x05EFB6A616B6FADE(func_295(6424, -1, 0), 19);
}

int func_331(int iParam0)
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
			if (func_330())
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

int func_332(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_23315;
		
		case 2:
			return Global_262145.f_23316;
		
		case 3:
			return Global_262145.f_23317;
		
		default:
	}
	return 9999999;
}

int func_333()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	if (Local_95.f_50 || Local_95.f_52)
	{
		if (!Local_95.f_51)
		{
			if (!unk_0x05EFB6A616B6FADE(Local_95.f_3, 7))
			{
				func_334("HS_UNABLE", iLocal_103, 0, 0, 0, 1, 1, 0);
			}
		}
		return 1;
	}
	switch (iLocal_101)
	{
		case 0:
			sVar0 = "MPCT_muglost";
			sVar1 = "LAMAR";
			iVar2 = 19;
			break;
		
		case 1:
			sVar0 = "MPCT_MERloc";
			sVar1 = "FM_MERRYWEATHER";
			iVar2 = 85;
			break;
	}
	if (func_365(sVar0, sVar1, iVar2))
	{
		return 1;
	}
	return 0;
}

int func_334(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = unk_0xE46ECB9FD23D3264(iParam1);
	if (unk_0xBC6A832F36065FDF(unk_0xD4E735F4B6A956AC(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0xB330C43B9B7B1724(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0xB330C43B9B7B1724(iParam1), 64);
		}
		if (unk_0x429D45A6C6520026(&Var2))
		{
		}
		unk_0x59FF6261546DDD52(sParam0);
		if ((iVar1 != -1 && unk_0xD8B89B387D170E27()) && iVar1 < 4)
		{
			if (Global_4456448.f_125859[iVar1] != -1)
			{
				unk_0xBA9FB571BCB6C1BD(func_363(iVar1, iParam1, 0));
			}
			else
			{
				unk_0xBA9FB571BCB6C1BD(func_342(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			unk_0xBA9FB571BCB6C1BD(func_342(iParam1, -2, 1, 0, 0));
		}
		unk_0xC327C023FDA37F2E(func_340(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x42A1DBBDEF9F85FF(0, 1);
		}
		else
		{
			Global_2503649 = { func_138(iParam1) };
			if (unk_0xE087FDE0E2FA8ADF(&Global_2503579, 35, &Global_2503649))
			{
				iVar3 = 0;
				if (unk_0x3CAC2741CC1A631F(&(Global_2503579.f_22), "Leader") && Global_2503579.f_30 == 0)
				{
					iVar3 = 1;
				}
				if (Global_2503579.f_21 > 0)
				{
					iVar4 = 0;
				}
				else
				{
					iVar4 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var2 = { func_339(&Var2) };
					}
					iVar0 = unk_0x6CA5B2BD422CA926(iVar4, unk_0x634D48A84780E8DD(&Global_2503579, 35), &(Global_2503579.f_17), Global_2503579.f_30, iVar3, 0, Global_2503579, &Var2, Global_1314014, Global_1314015, Global_1314016);
				}
				else
				{
					iVar0 = unk_0xBFE46928D2942C50(iVar4, unk_0x634D48A84780E8DD(&Global_2503579, 35), &(Global_2503579.f_17), Global_2503579.f_30, iVar3, 0, Global_2503579, Global_1314014, Global_1314015, Global_1314016);
				}
			}
			else
			{
				iVar0 = unk_0x42A1DBBDEF9F85FF(0, 1);
			}
		}
		func_335(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_335(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_338() || !unk_0xD8B89B387D170E27()) || !func_194(unk_0xD4E735F4B6A956AC(), 0))
	{
		return;
	}
	iVar0 = func_336(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1663381.f_5[iVar0 /*53*/] = iParam0;
		Global_1663381.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1663381.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1663381.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1663381.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1663381.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1663381.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_336(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1663381 - 1))
	{
		if (iParam0 > Global_1663381.f_5[iVar0 /*53*/].f_1)
		{
			func_337(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1663381++;
	if (Global_1663381 > 5)
	{
		Global_1663381 = 5;
		return Global_1663381;
	}
	return (Global_1663381 - 1);
}

void func_337(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1663381.f_5[iVar0 /*53*/] = { Global_1663381.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_338()
{
	return unk_0x05BEBC245254F6F2(-1762644250);
}

struct<16> func_339(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_340(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_341(&cVar0);
}

var func_341(char[4] cParam0)
{
	return cParam0;
}

int func_342(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_141(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0xE46ECB9FD23D3264(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_125859[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_141(unk_0xD4E735F4B6A956AC()) || (func_362() && func_361())) && !unk_0x05EFB6A616B6FADE(Global_2524719.f_4577, 31)) && !bParam4)
	{
		iVar1 = func_360();
		if (unk_0xDC5D81351D6A4DDB(iVar1))
		{
			if (unk_0xC085874FDE5FE33A(iVar1))
			{
				if (unk_0x77065AD41B64E946(iVar1) != -1)
				{
					if (func_6(unk_0x77065AD41B64E946(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xD8B89B387D170E27()) && iParam1 < 4)
						{
							if (Global_4456448.f_125859[iParam1] != -1)
							{
								return func_363(iParam1, iParam0, 0);
							}
							else
							{
								return func_352(iParam0, unk_0x77065AD41B64E946(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_352(iParam0, unk_0x77065AD41B64E946(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xD8B89B387D170E27()) && iParam1 < 4)
			{
				if (Global_4456448.f_125859[iParam1] != -1)
				{
					return func_363(iParam1, iParam0, 0);
				}
				else
				{
					return func_343(0, -1, 0);
				}
			}
			else
			{
				return func_343(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xD8B89B387D170E27()) && iParam1 < 4)
	{
		if (Global_4456448.f_125859[iParam1] != -1)
		{
			return func_363(iParam1, iParam0, 0);
		}
		else
		{
			return func_352(iParam0, unk_0xD4E735F4B6A956AC(), iParam1, bParam2, bParam3);
		}
	}
	return func_352(iParam0, unk_0xD4E735F4B6A956AC(), iParam1, bParam2, bParam3);
}

int func_343(bool bParam0, int iParam1, bool bParam2)
{
	return func_344(unk_0xD4E735F4B6A956AC(), bParam0, iParam1, bParam2);
}

int func_344(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xC77FA683E9BB485B(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0xE46ECB9FD23D3264(iParam0);
	if (func_350() && Global_1378988.f_1)
	{
		if (bParam1)
		{
			return func_349(iParam2, iVar0);
		}
		else
		{
			return func_349(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_140(iVar0, iParam2, 0) && !unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_348(1);
				}
				else
				{
					return func_348(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x05EFB6A616B6FADE(Global_4456448.f_4, 20))
			{
				return func_345(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_345(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_348(1);
	}
	return func_348(0);
}

int func_345(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_347(iParam0, iParam1, iParam3);
	if (func_346(Global_4456448.f_130782, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_346(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_152990 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8906[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_347(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_140(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_348(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_349(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_347(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_350()
{
	if (func_351() && unk_0xD8B89B387D170E27())
	{
		return 1;
	}
	return 0;
}

bool func_351()
{
	return unk_0x05EFB6A616B6FADE(Global_4456448.f_146776, 12);
}

int func_352(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xE46ECB9FD23D3264(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1589747[iVar2 /*790*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_357(1))
			{
				iVar3 = func_356(iParam0);
				if (!iVar3 == -1)
				{
					return func_354(iVar3);
				}
			}
			if ((func_178(iParam1, iParam0, iVar0, 0) && !unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 18)) || ((func_140(unk_0xE46ECB9FD23D3264(iParam1), unk_0xE46ECB9FD23D3264(iParam0), 0) && unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 23)) && !unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 18)))
			{
				return func_348(1);
			}
			else if (unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 26))
			{
				return func_353(1);
			}
			else
			{
				return func_344(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574393 || Global_1574384) || Global_1589747[iParam0 /*790*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574393 == 1 && Global_1574403 == 0))
			{
				return func_348(1);
			}
			else
			{
				return func_344(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574388 && Global_1573886.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_356(iParam0);
	if (!iVar4 == -1)
	{
		return func_354(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_353(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_354(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_355(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_355(int iParam0)
{
	return Global_2417554.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_356(int iParam0)
{
	if (!iParam0 == func_13())
	{
		if (func_14(iParam0, 1))
		{
			return Global_2417554.f_2071.f_11[func_12(iParam0)];
		}
	}
	return -1;
}

int func_357(int iParam0)
{
	if ((func_359() || func_358()) || (func_171() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_358()
{
	return Global_2448386.f_15;
}

var func_359()
{
	return Global_2448386.f_14;
}

var func_360()
{
	return Global_2359302.f_2;
}

bool func_361()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 4);
}

bool func_362()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 14);
}

int func_363(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969023.f_13[iParam0];
	if (func_357(1))
	{
		iVar2 = func_356(iParam1);
		if (!iVar2 == -1)
		{
			return func_354(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0x05EFB6A616B6FADE(Global_4456448.f_104[iParam0 /*10693*/].f_5532[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_13())
	{
		if (Global_4456448.f_125859[iParam0] != -1 && Global_4456448.f_125859[iParam0] <= 4)
		{
			if (Global_4456448.f_125859[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_125859[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_125859[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_125859[iParam0] == 4)
			{
				if (unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_125859[iParam0];
			}
		}
		else
		{
			iVar0 = func_344(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0x05EFB6A616B6FADE(Global_4456448.f_21, 13))
		{
			iVar0 = func_364(iParam0);
		}
		if (unk_0x05EFB6A616B6FADE(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0x05EFB6A616B6FADE(Global_4456448.f_15, 26) && !func_140(iParam0, unk_0xE46ECB9FD23D3264(iParam1), 0))
		{
			iVar0 = func_353(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_364(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_153033;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_153034;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_153035;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_153036;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

int func_365(char* sParam0, char* sParam1, int iParam2)
{
	if (!unk_0x3CAC2741CC1A631F(sParam0, "NULL"))
	{
		if (!unk_0x05EFB6A616B6FADE(iLocal_100, 0))
		{
			func_462(&uLocal_118, 3, 0, sParam1, 0, 1);
			if (func_367(&uLocal_118, iParam2, "CT_AUD", sParam0, 0, 0))
			{
				unk_0x2BCFB39E86340DAA(&iLocal_100, 0);
			}
		}
		else if (!unk_0x05EFB6A616B6FADE(iLocal_100, 1))
		{
			if (func_366(0))
			{
				unk_0x2BCFB39E86340DAA(&iLocal_100, 1);
			}
		}
		else if (!func_366(0))
		{
			iLocal_100 = 0;
			return 1;
		}
	}
	return 0;
}

int func_366(int iParam0)
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

int func_367(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_460())
	{
		return 0;
	}
	if (func_459())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_368(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_368(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x429D45A6C6520026(sParam2))
	{
		return 0;
	}
	if (unk_0xC5E273061032AD53(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x429D45A6C6520026(sParam3))
	{
		return 0;
	}
	if (unk_0xC5E273061032AD53(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0xFEB6EEC0545AF7AA(unk_0x61D2332983ACC05C());
	iVar1 = func_458(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x429D45A6C6520026(sParam7))
	{
		iVar2 = unk_0xFEB6EEC0545AF7AA(sParam7);
	}
	if (func_457(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_452(iParam6))
	{
		return 0;
	}
	if (func_449(iVar0, iVar1, iVar2))
	{
		if (func_448())
		{
			return 0;
		}
		func_447();
		return func_375(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_374(iParam4))
	{
		return 0;
	}
	func_369(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_369(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1361724.f_40.f_1 = iParam0;
	Global_1361724.f_40.f_2 = iParam1;
	Global_1361724.f_40.f_3 = iParam2;
	StringCopy(&(Global_1361724.f_40.f_4), sParam3, 16);
	Global_1361724.f_40.f_8 = iParam4;
	Global_1361724.f_40.f_9 = iParam5;
	Global_1361724.f_40.f_14 = iParam6;
	func_370(iParam4);
	func_447();
	Global_1361724.f_40.f_13 = unk_0x8039F92D4B9C6B71(unk_0xFFCC7EBF88BDEE54(), 7000);
}

void func_370(int iParam0)
{
	if (func_373(iParam0))
	{
		func_372();
		return;
	}
	func_371();
}

void func_371()
{
	Global_1361724.f_40.f_10 = 0;
}

void func_372()
{
	Global_1361724.f_40.f_10 = 1;
}

int func_373(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_374(int iParam0)
{
	return iParam0 > Global_1361724.f_40.f_8;
}

int func_375(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_446();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_443(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_440(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_443(uParam0, sParam3, sParam4);
		}
		return func_423(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_422(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_412(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_411(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_376(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_376(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_410();
	bVar0 = true;
	if (func_378(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_377(120000);
		return 1;
	}
	return 0;
}

void func_377(int iParam0)
{
	Global_1361724.f_40.f_11 = unk_0x8039F92D4B9C6B71(unk_0xFFCC7EBF88BDEE54(), iParam0);
	Global_1361724.f_40.f_12 = 1;
}

int func_378(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xB330C43B9B7B1724(iVar0);
		iVar1 = func_404(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x9F92451379B11BF2(unk_0xFFCC7EBF88BDEE54(), Global_1361724.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_403(sParam5, bParam6, &iVar3);
	uVar5 = func_401(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x429D45A6C6520026(sParam8))
	{
		iVar6++;
		if (!unk_0x429D45A6C6520026(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x3CAC2741CC1A631F(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0x05EFB6A616B6FADE(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x05EFB6A616B6FADE(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x429D45A6C6520026(sVar2))
	{
		bVar12 = func_400(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_382(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x05EFB6A616B6FADE(iParam4, 0))
	{
		func_381();
	}
	func_410();
	func_380();
	func_379();
	return 1;
}

void func_379()
{
	Global_1361724.f_57 = 0;
	Global_1361724.f_57.f_1 = 0;
}

void func_380()
{
	Global_1361724.f_40 = 3;
}

void func_381()
{
	unk_0x2BCFB39E86340DAA(&Global_2383, 8);
}

int func_382(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_383(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3090 = iParam6;
			unk_0x2BCFB39E86340DAA(&Global_4268330, 0);
		}
		return 1;
	}
	return 0;
}

int func_383(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x3CAC2741CC1A631F(sParam14, sParam15))
	{
	}
	func_394();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14513 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14513 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14513 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			if (unk_0xFF12F654A8561928(unk_0xA19140A5C42D8715()))
			{
				return 0;
			}
		}
		if (Global_4268315 == 1)
		{
			return 0;
		}
		if (unk_0x8B1574454E8C2421(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x8B1574454E8C2421(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_393() == 0)
	{
		func_391();
		return 0;
	}
	func_390(Global_4268314);
	StringCopy(&(Global_4267065[Global_4268314 /*104*/]), sParam1, 64);
	Global_4267065[Global_4268314 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4267065[Global_4268314 /*104*/].f_24 = iParam2;
	}
	Global_4267065[Global_4268314 /*104*/].f_25 = iParam7;
	Global_4267065[Global_4268314 /*104*/].f_26 = uParam8;
	Global_4267065[Global_4268314 /*104*/].f_29 = uParam9;
	Global_4267065[Global_4268314 /*104*/].f_30 = uParam12;
	Global_4267065[Global_4268314 /*104*/].f_31 = uParam11;
	Global_4267065[Global_4268314 /*104*/].f_28 = 0;
	Global_4267065[Global_4268314 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4267065[Global_4268314 /*104*/].f_33), sParam4, 64);
	Global_4267065[Global_4268314 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4267065[Global_4268314 /*104*/].f_50), sParam5, 64);
	Global_4267065[Global_4268314 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4267065[Global_4268314 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4267065[Global_4268314 /*104*/].f_83), sParam15, 64);
	func_394();
	switch (iParam16)
	{
		case 3:
			Global_4267065[Global_4268314 /*104*/].f_99[Global_14513] = 1;
			break;
		
		case 0:
			Global_4267065[Global_4268314 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4267065[Global_4268314 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4267065[Global_4268314 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14513)
		{
			case 0:
				func_389(0);
				break;
			
			case 1:
				func_389(1);
				break;
			
			case 2:
				func_389(2);
				break;
			
			case 3:
				func_389(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4268315 = 1;
				break;
			
			case 0:
				Global_4268315 = 1;
				break;
			
			case 2:
				Global_4268315 = 1;
				break;
			
			case 1:
				Global_4268315 = 1;
				break;
			}
	}
	Global_16891[Global_4268314] = 0;
	if (bParam10)
	{
		func_394();
		if (Global_14456)
		{
			StringCopy(&Global_14502, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14513)
			{
				case 0:
					StringCopy(&Global_14502, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14502, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14502, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14502, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_388())
			{
				unk_0xE11F00B4AC919F45(-1, "Text_Arrive_Tone", &Global_14502, 1);
			}
		}
	}
	if (!Global_14682)
	{
		if (Global_14513.f_1 == 6)
		{
			func_387(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_384(1);
			func_387(Global_14494, "DISPLAY_VIEW", 1f, to_float(Global_14493), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_384(int iParam0)
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
	
	Global_16890 = 0;
	Global_2988 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2952[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_269(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2390[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2390[iVar1 /*15*/].f_4)
					{
						if (Global_2952[iVar0] == 0)
						{
							Global_2916[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x05EFB6A616B6FADE(Global_2384, 3))
								{
									iVar2 = 42;
									Global_14685 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14685 = 0;
								}
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_386(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(iVar2);
								unk_0x271C1332F482646C();
							}
							if (Global_2458186)
							{
								if (iVar1 == 14)
								{
									func_385(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2952[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2390[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2390[iVar1 /*15*/].f_4)
					{
						if (Global_2952[iVar0] == 0)
						{
							Global_2916[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_106070.f_14113[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_106070.f_14113[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_106070.f_14113[iVar3 /*104*/].f_99[Global_14513] == 1)
											{
												Global_16890++;
											}
										}
									}
									iVar3++;
								}
								func_385(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(Global_16890), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_71205)
								{
									iVar4 = 0;
									iVar4 = Global_4267064;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4267065[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4267065[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4267065[iVar5 /*104*/].f_99[Global_14513] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_385(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14513)
									{
										case 0:
											iVar6 = Global_37276;
											break;
										
										case 1:
											iVar6 = Global_37277;
											break;
										
										case 2:
											iVar6 = Global_37278;
											break;
										
										default:
											break;
									}
									func_385(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_385(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_386(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(Global_2389);
								unk_0x271C1332F482646C();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x05EFB6A616B6FADE(Global_2384, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_386(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(iVar7);
								unk_0x271C1332F482646C();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x05EFB6A616B6FADE(Global_2384, 3))
								{
									iVar8 = 42;
									Global_14685 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14685 = 0;
								}
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_386(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(iVar8);
								unk_0x271C1332F482646C();
							}
							else if (iVar1 == 8)
							{
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_386(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(42);
								unk_0x271C1332F482646C();
							}
							else if ((iVar1 == 23 && unk_0x3CAC2741CC1A631F(&(Global_2390[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x05EFB6A616B6FADE(Global_2384, 6))
							{
								unk_0x31A9E530D137684F(Global_14494, "SET_DATA_SLOT");
								unk_0x380580A1A1667F69(1);
								unk_0x380580A1A1667F69(iVar0);
								unk_0x380580A1A1667F69(Global_2390[iVar1 /*15*/].f_10);
								unk_0x380580A1A1667F69(0);
								func_386(&(Global_2390[iVar1 /*15*/]));
								unk_0x380580A1A1667F69(42);
								unk_0x271C1332F482646C();
							}
							else if (Global_2390[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1624079.f_1;
								func_385(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_385(Global_14494, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2390[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2952[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_385(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x31A9E530D137684F(uParam0, sParam1);
	unk_0x380580A1A1667F69(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam6));
	}
	if (!unk_0x429D45A6C6520026(sParam7))
	{
		func_386(sParam7);
	}
	if (!unk_0x429D45A6C6520026(sParam8))
	{
		func_386(sParam8);
	}
	if (!unk_0x429D45A6C6520026(sParam9))
	{
		func_386(sParam9);
	}
	if (!unk_0x429D45A6C6520026(sParam10))
	{
		func_386(sParam10);
	}
	if (!unk_0x429D45A6C6520026(sParam11))
	{
		func_386(sParam11);
	}
	unk_0x271C1332F482646C();
}

void func_386(char* sParam0)
{
	unk_0x390B339C943A8A54(sParam0);
	unk_0xD481829E3E36543B();
}

void func_387(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x31A9E530D137684F(uParam0, sParam1);
	unk_0x380580A1A1667F69(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x380580A1A1667F69(round(fParam6));
	}
	unk_0x271C1332F482646C();
}

bool func_388()
{
	return Global_1312857;
}

void func_389(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_106070.f_14023[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_390(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0xC5B07C33AC7BB174();
	iVar1 = unk_0x65DA628D62901275();
	iVar2 = unk_0x34CEB9721AC6A0A9();
	iVar3 = unk_0xC9A0B68BA813CF99();
	uVar4 = unk_0x897D202BD69186D5() + 1;
	iVar5 = unk_0x56EBDF0E39D83471();
	Global_4267065[iParam0 /*104*/].f_18 = iVar0;
	Global_4267065[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4267065[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4267065[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4267065[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4267065[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_391()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4268314 = 11;
	Global_4267065[Global_4268314 /*104*/].f_18 = -1;
	Global_4267065[Global_4268314 /*104*/].f_18.f_1 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_2 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_3 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_392(Global_4267065[iVar2 /*104*/].f_18, Global_4267065[Global_4268314 /*104*/].f_18))
		{
			Global_4268314 = iVar2;
		}
		iVar2++;
	}
	Global_4267065[Global_4268314 /*104*/].f_24 = 1;
}

int func_392(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_393()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4267065[iVar2 /*104*/].f_24 == 0)
		{
			Global_4268314 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4268314 = 11;
	Global_4267065[Global_4268314 /*104*/].f_18 = -1;
	Global_4267065[Global_4268314 /*104*/].f_18.f_1 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_2 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_3 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4267065[iVar2 /*104*/].f_24 == 0 || Global_4267065[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_392(Global_4267065[iVar2 /*104*/].f_18, Global_4267065[Global_4268314 /*104*/].f_18))
			{
				Global_4268314 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4268314 == 11)
	{
		return 0;
	}
	Global_4267065[Global_4268314 /*104*/].f_99[0] = 0;
	Global_4267065[Global_4268314 /*104*/].f_99[1] = 0;
	Global_4267065[Global_4268314 /*104*/].f_99[2] = 0;
	return 1;
}

void func_394()
{
	if (func_269(14))
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
		Global_14513 = func_395();
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

var func_395()
{
	func_396();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_396()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_399(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_398(unk_0xA19140A5C42D8715());
			if (func_397(iVar0) && (!func_269(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_397(Global_106070.f_2355.f_539.f_4301))
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

bool func_397(int iParam0)
{
	return iParam0 < 3;
}

int func_398(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_399(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_399(int iParam0)
{
	if (func_397(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_400(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_383(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3090 = iParam10;
			unk_0x2BCFB39E86340DAA(&Global_4268330, 0);
		}
		return 1;
	}
	return 0;
}

int func_401(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_402(2, iParam1);
	return iParam0;
}

void func_402(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_403(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0x429D45A6C6520026(sParam0))
	{
		return sLocal_20;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, sLocal_20))
	{
		return sLocal_20;
	}
	func_402(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x08791BD93D5986C6(sParam0);
}

int func_404(int iParam0)
{
	int iVar0;
	
	iVar0 = func_407(iParam0);
	if (iVar0 == -1)
	{
		func_405(iParam0, 1);
		return 0;
	}
	Global_1379953[iVar0 /*5*/].f_4 = 1;
	return Global_1379953[iVar0 /*5*/].f_2;
}

void func_405(int iParam0, bool bParam1)
{
	if (!func_6(iParam0, 0, 1))
	{
		return;
	}
	if (func_407(iParam0) != -1)
	{
		return;
	}
	if (Global_1380116)
	{
		if (iParam0 == Global_1380116.f_1)
		{
			return;
		}
	}
	if (func_406(iParam0))
	{
		return;
	}
	if (Global_1380154 >= 32)
	{
		return;
	}
	Global_1380121[Global_1380154] = iParam0;
	Global_1380154++;
	if (bParam1)
	{
	}
}

int func_406(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1380154)
	{
		if (Global_1380121[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_407(int iParam0)
{
	int iVar0;
	
	if (!func_6(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1380114 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1380114)
	{
		if (Global_1379953[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x07D08EE9B44B4EE9(Global_1379953[iVar0 /*5*/].f_2) && unk_0x2C58CFA8E806E25E(Global_1379953[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_408(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_408(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1380114)
	{
		return;
	}
	if (unk_0x07D08EE9B44B4EE9(Global_1379953[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1379953[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0x18167C9C4C1E9195(Global_1379953[iParam0 /*5*/].f_2), 64);
			unk_0x422B7FAC2AC425AD(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0xAAA14DE52F34B110(Global_1379953[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1380114)
	{
		Global_1379953[iVar2 /*5*/] = { Global_1379953[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_409(&(Global_1379953[iVar2 /*5*/]));
	Global_1380114 = (Global_1380114 - 1);
}

void func_409(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_13();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x4C9BACA8D249CB13())
	{
		uParam0->f_3 = unk_0xFFCC7EBF88BDEE54();
	}
}

void func_410()
{
	Global_1361724.f_40.f_9 = 4;
}

int func_411(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_410();
	bVar0 = false;
	return func_378(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_412(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_413(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_413(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xB330C43B9B7B1724(iVar0);
		iVar1 = func_404(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x9F92451379B11BF2(unk_0xFFCC7EBF88BDEE54(), Global_1361724.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16883 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_403(sParam5, bParam6, &iVar3);
	uVar5 = func_401(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x429D45A6C6520026(sParam8))
	{
		iVar6++;
		if (!unk_0x429D45A6C6520026(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x3CAC2741CC1A631F(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0x05EFB6A616B6FADE(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x05EFB6A616B6FADE(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x429D45A6C6520026(sVar2))
	{
		bVar12 = func_421(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_415(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x05EFB6A616B6FADE(iParam4, 0))
	{
		func_381();
	}
	func_414();
	func_380();
	func_379();
	return 1;
}

void func_414()
{
	Global_1361724.f_40.f_9 = 3;
}

int func_415(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xFA57C719261AA55D(&Global_2383, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_416(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3090 = iParam6;
			Global_2993[3 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
			Global_3070 = iParam0;
			unk_0x2BCFB39E86340DAA(&Global_2383, 1);
			unk_0x2BCFB39E86340DAA(&Global_2383, 7);
		}
		return 1;
	}
	return 0;
}

int func_416(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x3CAC2741CC1A631F(sParam14, sParam15))
	{
	}
	func_394();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14513 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14513 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14513 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			if (unk_0xFF12F654A8561928(unk_0xA19140A5C42D8715()))
			{
				return 0;
			}
		}
		if (Global_106070.f_14023[Global_14513 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x8B1574454E8C2421(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x8B1574454E8C2421(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_420() == 0)
	{
		func_418();
		return 0;
	}
	func_417(Global_16889);
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/]), sParam1, 64);
	Global_106070.f_14113[Global_16889 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_106070.f_14113[Global_16889 /*104*/].f_24 = iParam2;
	}
	Global_106070.f_14113[Global_16889 /*104*/].f_25 = iParam7;
	Global_106070.f_14113[Global_16889 /*104*/].f_26 = uParam8;
	Global_106070.f_14113[Global_16889 /*104*/].f_29 = uParam9;
	Global_106070.f_14113[Global_16889 /*104*/].f_30 = uParam12;
	Global_106070.f_14113[Global_16889 /*104*/].f_31 = uParam11;
	Global_106070.f_14113[Global_16889 /*104*/].f_28 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_33), sParam4, 64);
	Global_106070.f_14113[Global_16889 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_50), sParam5, 64);
	Global_106070.f_14113[Global_16889 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_83), sParam15, 64);
	if (unk_0x05EFB6A616B6FADE(Global_2383, 10))
	{
		Global_106070.f_14113[Global_16889 /*104*/].f_99[0] = 1;
		Global_106070.f_14113[Global_16889 /*104*/].f_99[1] = 1;
		Global_106070.f_14113[Global_16889 /*104*/].f_99[2] = 1;
		Global_3089 = 4;
		func_389(0);
		func_389(2);
		func_389(1);
	}
	else
	{
		func_394();
		switch (iParam16)
		{
			case 3:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[Global_14513] = 1;
				break;
			
			case 0:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14513)
			{
				case 0:
					func_389(0);
					Global_3089 = 0;
					break;
				
				case 1:
					func_389(1);
					Global_3089 = 1;
					break;
				
				case 2:
					func_389(2);
					Global_3089 = 2;
					break;
				
				case 3:
					func_389(3);
					Global_3089 = 3;
					break;
				
				default:
					Global_3089 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x05EFB6A616B6FADE(Global_2383, 10))
		{
			Global_106070.f_14023[0 /*20*/].f_17 = 1;
			Global_106070.f_14023[1 /*20*/].f_17 = 1;
			Global_106070.f_14023[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_106070.f_14023[Global_14513 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_106070.f_14023[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_106070.f_14023[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_106070.f_14023[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16891[Global_16889] = 0;
	if (bParam10)
	{
		func_394();
		if (Global_14456)
		{
			StringCopy(&Global_14502, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14513)
			{
				case 0:
					StringCopy(&Global_14502, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14502, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14502, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14502, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_388())
			{
				unk_0xE11F00B4AC919F45(-1, "Text_Arrive_Tone", &Global_14502, 1);
			}
		}
	}
	if (!Global_14682)
	{
		if (Global_14513.f_1 == 6)
		{
			func_387(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_384(1);
			func_387(Global_14494, "DISPLAY_VIEW", 1f, to_float(Global_14493), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_417(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0xC5B07C33AC7BB174();
	iVar1 = unk_0x65DA628D62901275();
	iVar2 = unk_0x34CEB9721AC6A0A9();
	iVar3 = unk_0xC9A0B68BA813CF99();
	uVar4 = unk_0x897D202BD69186D5() + 1;
	iVar5 = unk_0x56EBDF0E39D83471();
	Global_106070.f_14113[iParam0 /*104*/].f_18 = iVar0;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_418()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71205)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16889 = 34;
	Global_106070.f_14113[Global_16889 /*104*/].f_18 = -1;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_1 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_2 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_3 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_419(Global_106070.f_14113[iVar2 /*104*/].f_18, Global_106070.f_14113[Global_16889 /*104*/].f_18))
		{
			Global_16889 = iVar2;
		}
		iVar2++;
	}
	Global_106070.f_14113[Global_16889 /*104*/].f_24 = 1;
}

int func_419(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_420()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71205)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_106070.f_14113[iVar2 /*104*/].f_24 == 0)
		{
			Global_16889 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16889 = 34;
	Global_106070.f_14113[Global_16889 /*104*/].f_18 = -1;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_1 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_2 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_3 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_106070.f_14113[iVar2 /*104*/].f_24 == 0 || Global_106070.f_14113[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_419(Global_106070.f_14113[iVar2 /*104*/].f_18, Global_106070.f_14113[Global_16889 /*104*/].f_18))
			{
				Global_16889 = iVar2;
			}
		}
		if (Global_106070.f_14113[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_16889 == 34)
	{
		return 0;
	}
	Global_106070.f_14113[Global_16889 /*104*/].f_99[0] = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_99[1] = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_99[2] = 0;
	return 1;
}

int func_421(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0xFA57C719261AA55D(&Global_2383, 10);
	iVar0 = 3;
	if (func_416(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3090 = iParam10;
			Global_2993[3 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
			Global_3070 = iParam0;
			StringCopy(&Global_3071, sParam5, 64);
			unk_0x2BCFB39E86340DAA(&Global_2383, 1);
			unk_0x2BCFB39E86340DAA(&Global_2383, 7);
		}
		return 1;
	}
	return 0;
}

int func_422(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
	}
	if (unk_0x331BE13D31DFA36A(unk_0xA19140A5C42D8715()))
	{
		return 0;
	}
	func_414();
	bVar0 = true;
	if (func_413(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_377(120000);
		return 1;
	}
	return 0;
}

int func_423(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (unk_0x331BE13D31DFA36A(unk_0xA19140A5C42D8715()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0x05EFB6A616B6FADE(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x05EFB6A616B6FADE(iParam4, 4))
	{
		bVar0 = func_439(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_429(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x05EFB6A616B6FADE(iParam4, 3))
		{
			func_428(1);
		}
		if (unk_0x05EFB6A616B6FADE(iParam4, 5))
		{
			func_427(1);
		}
		func_426();
		func_380();
		func_425();
		func_424();
		return 1;
	}
	return 0;
}

void func_424()
{
	Global_2533659 = 0;
}

void func_425()
{
	Global_1361724.f_57 = 1;
	Global_1361724.f_57.f_1 = 0;
}

void func_426()
{
	Global_1361724.f_40.f_9 = 1;
}

void func_427(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x2BCFB39E86340DAA(&Global_2385, 0);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_2385, 0);
	}
}

void func_428(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x2BCFB39E86340DAA(&Global_2383, 20);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_2383, 20);
	}
}

int func_429(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_438(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_430(sParam3, iParam4, bParam7);
}

int func_430(char* sParam0, int iParam1, bool bParam2)
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
					func_437();
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
		if (func_436(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_435();
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
				if (func_434())
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
			if (func_433())
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
			func_432();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_431();
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
		func_437();
	}
	return 0;
}

void func_431()
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

void func_432()
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

int func_433()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_434()
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

void func_435()
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

bool func_436(int iParam0, int iParam1)
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

void func_437()
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

void func_438(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_439(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_438(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15870 = 1;
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
	return func_430(sParam3, iParam4, bParam7);
}

int func_440(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
	}
	if (unk_0x331BE13D31DFA36A(unk_0xA19140A5C42D8715()))
	{
		return 0;
	}
	if (func_442(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_441();
		func_426();
		func_380();
		func_425();
		func_424();
		return 1;
	}
	return 0;
}

void func_441()
{
	Global_16840 = 0;
}

bool func_442(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_438(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15870 = 0;
	Global_15829 = 1;
	Global_15836 = 0;
	Global_15831 = 1;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_15827 = 0;
	Global_15874 = 1;
	Global_15876 = 0;
	StringCopy(&Global_15970, sParam5, 24);
	Global_2621441 = 0;
	return func_430(sParam3, iParam4, bParam8);
}

int func_443(var uParam0, char* sParam1, char* sParam2)
{
	if (func_445(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_444();
		func_380();
		func_425();
		return 1;
	}
	return 0;
}

void func_444()
{
	Global_1361724.f_40.f_9 = 2;
}

bool func_445(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_438(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_430(sParam2, iParam3, 0);
}

void func_446()
{
	Global_1361724.f_55 = Global_1361724.f_40.f_1;
	Global_1361724.f_55.f_1 = Global_1361724.f_40.f_10;
}

void func_447()
{
	Global_1361724.f_40 = 1;
}

bool func_448()
{
	return Global_1361724.f_40 == 1;
}

int func_449(int iParam0, int iParam1, int iParam2)
{
	if (!func_450(iParam0))
	{
		return 0;
	}
	if (Global_1361724.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1361724.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_450(int iParam0)
{
	if (!func_451())
	{
		return 0;
	}
	if (!Global_1361724.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_451()
{
	if (Global_1361724.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_452(int iParam0)
{
	if (func_456())
	{
		return 0;
	}
	if (func_455())
	{
		return 0;
	}
	if (func_366(0))
	{
		return 0;
	}
	if (Global_1312466.f_18 != 0)
	{
		return 0;
	}
	if (Global_1654543 || func_454())
	{
		return 0;
	}
	if (!unk_0x05EFB6A616B6FADE(iParam0, 6))
	{
		if (func_453())
		{
			return 0;
		}
	}
	return 1;
}

bool func_453()
{
	return unk_0x9F92451379B11BF2(unk_0xFFCC7EBF88BDEE54(), Global_1378623);
}

int func_454()
{
	if (Global_4254407.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_455()
{
	return Global_1361724.f_40 == 3;
}

bool func_456()
{
	return func_433();
}

int func_457(int iParam0, int iParam1, int iParam2)
{
	if (!func_455())
	{
		return 0;
	}
	return func_449(iParam0, iParam1, iParam2);
}

int func_458(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0xFEB6EEC0545AF7AA(&cVar0);
}

bool func_459()
{
	return Global_2530962.f_1;
}

int func_460()
{
	if (Global_1361912.f_2)
	{
		return 1;
	}
	return func_461();
}

bool func_461()
{
	return func_456();
}

void func_462(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_463(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_464(var uParam0)
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

void func_465(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x45F99485D7E1C29A())
		{
			func_466(uParam0, 0, 0);
		}
	}
}

void func_466(var uParam0, bool bParam1, bool bParam2)
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

void func_467()
{
	if (unk_0xAABBF7FA3E338B30(Local_95.f_10[iLocal_109 /*7*/]) && !unk_0x7112137033807390(unk_0x8A5B683BACF7B78C(Local_95.f_10[iLocal_109 /*7*/]), 0))
	{
		if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			if (func_5(unk_0xE2BBD32891C18569(unk_0x8A5B683BACF7B78C(Local_95.f_10[iLocal_109 /*7*/]), 1), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1), 50625f))
			{
				if (!unk_0x05EFB6A616B6FADE(iLocal_98, 4))
				{
					unk_0x2BCFB39E86340DAA(&iLocal_98, 4);
				}
			}
			else if (!unk_0x05EFB6A616B6FADE(iLocal_98, 5))
			{
				if (Local_95.f_42 != -1)
				{
					if (iLocal_109 == Local_95.f_42)
					{
						if (!unk_0x05EFB6A616B6FADE(iLocal_98, 5))
						{
							unk_0x2BCFB39E86340DAA(&iLocal_98, 5);
						}
					}
				}
			}
		}
	}
	func_468(iLocal_109);
	iLocal_109++;
	if (iLocal_109 >= func_463(iLocal_101))
	{
		if ((!unk_0x05EFB6A616B6FADE(iLocal_98, 4) && unk_0x05EFB6A616B6FADE(Local_95.f_1, 8)) || unk_0x05EFB6A616B6FADE(iLocal_98, 5))
		{
			if (!unk_0x05EFB6A616B6FADE(Local_97[unk_0x8D4ED2C97DFF2321() /*5*/].f_1, 1))
			{
				unk_0x2BCFB39E86340DAA(&(Local_97[unk_0x8D4ED2C97DFF2321() /*5*/].f_1), 1);
			}
		}
		else if (unk_0x05EFB6A616B6FADE(Local_97[unk_0x8D4ED2C97DFF2321() /*5*/].f_1, 1))
		{
			unk_0xFA57C719261AA55D(&(Local_97[unk_0x8D4ED2C97DFF2321() /*5*/].f_1), 1);
		}
		unk_0xFA57C719261AA55D(&iLocal_98, 4);
		unk_0xFA57C719261AA55D(&iLocal_98, 5);
		iLocal_109 = 0;
	}
}

void func_468(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar2 = 0;
	vVar3 = { 0f, 0f, 0f };
	bVar4 = false;
	if (unk_0x83A1DA4E6C55E952(Local_95.f_10[iParam0 /*7*/]))
	{
		iVar0 = unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]);
		if (iLocal_101 == 0)
		{
			if (unk_0xD4E735F4B6A956AC() == iLocal_103)
			{
				if (Local_95.f_10[iParam0 /*7*/].f_4 == 0)
				{
					if (Local_95.f_10[iParam0 /*7*/].f_5 == 2)
					{
						bVar4 = true;
					}
				}
			}
		}
		if (unk_0xD4E735F4B6A956AC() == iLocal_102)
		{
			if (unk_0x05EFB6A616B6FADE(Local_95.f_10[iParam0 /*7*/].f_2, 1))
			{
				if (!unk_0x05EFB6A616B6FADE(iLocal_99[iParam0], 0))
				{
					unk_0x2BCFB39E86340DAA(&Global_1573338, 0);
					unk_0x2BCFB39E86340DAA(&(iLocal_99[iParam0]), 0);
				}
				if (!unk_0x05EFB6A616B6FADE(Local_95.f_10[iParam0 /*7*/].f_2, 9))
				{
					if (!unk_0x05EFB6A616B6FADE(iLocal_99[iParam0], 1))
					{
						bVar4 = true;
					}
				}
				else if (unk_0x05EFB6A616B6FADE(iLocal_99[iParam0], 1))
				{
					unk_0xFA57C719261AA55D(&(iLocal_99[iParam0]), 1);
				}
			}
		}
		if (bVar4)
		{
			if (unk_0x83A1DA4E6C55E952(Local_95.f_10[iParam0 /*7*/]))
			{
				if (!unk_0xABF0452BE64AD290(Local_95.f_10[iParam0 /*7*/]))
				{
					unk_0xEDB53D3BCBFC886E(Local_95.f_10[iParam0 /*7*/]);
				}
			}
		}
		if (unk_0xABF0452BE64AD290(Local_95.f_10[iParam0 /*7*/]))
		{
			if (unk_0xD4E735F4B6A956AC() == iLocal_102)
			{
				if (!unk_0x05EFB6A616B6FADE(Local_95.f_10[iParam0 /*7*/].f_2, 9) && !unk_0x05EFB6A616B6FADE(iLocal_99[iParam0], 1))
				{
					if (unk_0xC7363F94C9EEC404(iVar0, unk_0xD4E735F4B6A956AC()))
					{
						switch (Local_95.f_10[iParam0 /*7*/].f_1)
						{
							case 0:
								func_491(iVar0, 3);
								break;
						}
						unk_0x2BCFB39E86340DAA(&(iLocal_99[iParam0]), 1);
					}
				}
			}
			if (!unk_0x7112137033807390(iVar0, 0) && !unk_0x4915F4759304D5CF(iVar0))
			{
				switch (Local_95.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						unk_0xB0D7019224A3A443(iVar0, 187, 1);
						if (Local_95.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (unk_0x05EFB6A616B6FADE(Local_95.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!unk_0x05EFB6A616B6FADE(Local_95.f_10[iParam0 /*7*/].f_2, 3))
								{
									unk_0x4BA42BD797F0E898(iVar0, 3f);
									unk_0x1F4E5EFBFE503FB3(iVar0, 1);
									unk_0x13E0A8160525AE55(iVar0, 118, false);
								}
							}
						}
						if (unk_0xD4E735F4B6A956AC() == iLocal_103 && func_5(unk_0xE2BBD32891C18569(iVar0, 1), unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iLocal_103), 1), 25f))
						{
							unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4575), 0);
						}
						else
						{
							unk_0xFA57C719261AA55D(&(Global_2524719.f_4575), 0);
						}
						if (!unk_0x8B9D3A1A7C2D3C6B(iVar0))
						{
							if (!unk_0xAA99590BCC62DC13(iVar0, 29))
							{
								if (func_6(iLocal_103, 1, 1))
								{
									if (!unk_0x05EFB6A616B6FADE(Local_95.f_2, 13))
									{
										if (func_490(iLocal_103) && !unk_0xF0F0F135A933B6B0(unk_0xEE978C39384D834F(iLocal_103)))
										{
											if (!func_489(iVar0, -1794415470))
											{
												if (func_488(iVar0))
												{
													iVar1 = unk_0xCAEB6CE71A2C7212(unk_0xEE978C39384D834F(iLocal_103), 0);
													if (unk_0xDC5D81351D6A4DDB(iVar1))
													{
														if (unk_0x1095F403F52B42E1(iVar1, 0))
														{
														}
														if (!unk_0x33C6DD82FBC75104(iVar1, func_487(unk_0xEE978C39384D834F(iLocal_103), 0)))
														{
															unk_0xA2EBCD9385E56019(iVar0, iVar1, -1, func_486(unk_0xEE978C39384D834F(iLocal_103), iVar1), func_485(iParam0), 1179977, 0);
														}
													}
												}
											}
										}
										else if (!(unk_0xBCF615B6673B73ED(iVar0) && unk_0x6F76A9CFCCD125F5(iVar0) == unk_0xEE978C39384D834F(iLocal_103)) && !unk_0x5D7DFE2058701942(iVar0, 1))
										{
											if (func_489(iVar0, -1794415470))
											{
												unk_0x9568B1B58F78FF36(iVar0);
											}
											if (!func_489(iVar0, 1227113341))
											{
												if (func_488(iVar0))
												{
													unk_0x8F65948C5AFB744E(iVar0, unk_0xEE978C39384D834F(iLocal_103), -1, 0f, func_485(iParam0), 1073741824, 0);
												}
											}
											else
											{
												unk_0xB0D7019224A3A443(iVar0, 151, 1);
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (unk_0xD4E735F4B6A956AC() == iLocal_103 && func_5(unk_0xE2BBD32891C18569(iVar0, 1), unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iLocal_103), 1), 25f))
						{
							unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4575), 0);
						}
						else
						{
							unk_0xFA57C719261AA55D(&(Global_2524719.f_4575), 0);
						}
						if (unk_0xD4E735F4B6A956AC() == iLocal_103)
						{
							if (!unk_0x05EFB6A616B6FADE(Local_97[unk_0x8D4ED2C97DFF2321() /*5*/].f_1, 0))
							{
								if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
								{
									if ((func_4(unk_0xE2BBD32891C18569(iVar0, 1), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1)) && (unk_0x2206F47E5C82D52C(unk_0xA19140A5C42D8715()) || unk_0xF0F0F135A933B6B0(unk_0xA19140A5C42D8715()))) || (unk_0xBCF615B6673B73ED(iVar0) && unk_0x6F76A9CFCCD125F5(iVar0) == unk_0xA19140A5C42D8715()))
									{
										iVar2 = func_483(unk_0xD4E735F4B6A956AC());
										fVar5 = (to_float(Global_262145.f_6539) / 100f);
										iVar2 = round((to_float(iVar2) * fVar5));
										iVar6 = func_482(unk_0xD4E735F4B6A956AC());
										if (iVar6 > 100)
										{
											iVar6 = 100;
										}
										if (iVar2 > (iVar6 * Global_262145.f_6540))
										{
											iVar2 = (iVar6 * Global_262145.f_6540);
										}
										if (iVar2 > 0)
										{
											unk_0x2BCFB39E86340DAA(&iLocal_98, 16);
										}
										unk_0x304801A759FBBEEE(unk_0xA19140A5C42D8715(), 5000, 10000, 4);
										if (!(unk_0xBCF615B6673B73ED(iVar0) && unk_0x6F76A9CFCCD125F5(iVar0) == unk_0xEE978C39384D834F(iLocal_103)))
										{
											vVar3 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) - unk_0xE2BBD32891C18569(iVar0, 1) };
											vVar3 = { func_481(vVar3) };
											vVar3.x = (vVar3.x * 3f);
											vVar3.y = (vVar3.y * 3f);
											vVar3.z = (vVar3.z * 3f);
											unk_0xFAE5E5AC968944E8(unk_0xA19140A5C42D8715(), 1, vVar3, 0f, 0f, 0.5f, 0, 0, 1, 1, 0, 1);
										}
										unk_0xC2C4AE9DB4A0BEF3(iVar0, 512, false);
										unk_0x3B7A32E04BBE59A5(iVar0, 17, 1);
										if (((unk_0x5D7DFE2058701942(iVar0, 1) || unk_0xBCF615B6673B73ED(iVar0)) && func_479(iVar0)) && func_487(iVar0, 0) == -1)
										{
											unk_0xC2C4AE9DB4A0BEF3(iVar0, 2, true);
											unk_0x3B7A32E04BBE59A5(iVar0, 3, 0);
											unk_0x3B7A32E04BBE59A5(iVar0, 6, 1);
										}
										else
										{
											unk_0x9568B1B58F78FF36(iVar0);
											unk_0x33B5487515BD13D5(iVar0, unk_0xA19140A5C42D8715(), 10000f, -1, 1, 0);
										}
										Local_97[unk_0x8D4ED2C97DFF2321() /*5*/].f_3 = iVar2;
										if (iVar2 > 0)
										{
											Local_97[unk_0x8D4ED2C97DFF2321() /*5*/].f_2 = iParam0;
										}
										else
										{
											Local_97[unk_0x8D4ED2C97DFF2321() /*5*/].f_2 = -1;
										}
										unk_0xDFA901280292A2FB(iVar0, Global_1574988);
										unk_0x2BCFB39E86340DAA(&(Local_97[unk_0x8D4ED2C97DFF2321() /*5*/].f_1), 0);
										unk_0x2BCFB39E86340DAA(&(Global_2524719.f_4575), 2);
									}
								}
							}
						}
						break;
					
					case 3:
						if (unk_0x1F30A95E273DC3ED(iVar0, 187))
						{
							unk_0xB0D7019224A3A443(iVar0, 187, 0);
						}
						if (Local_95.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!unk_0x05EFB6A616B6FADE(Local_95.f_10[iParam0 /*7*/].f_2, 4))
							{
								unk_0x1F4E5EFBFE503FB3(iVar0, 0);
								unk_0x13E0A8160525AE55(iVar0, 118, true);
							}
						}
						if (!(unk_0xBCF615B6673B73ED(iVar0) && unk_0x6F76A9CFCCD125F5(iVar0) == unk_0xEE978C39384D834F(iLocal_103)))
						{
							if (!unk_0x8B9D3A1A7C2D3C6B(iVar0))
							{
								if (func_488(iVar0))
								{
									if ((unk_0x5D7DFE2058701942(iVar0, 1) || unk_0xBCF615B6673B73ED(iVar0)) && !unk_0x05EFB6A616B6FADE(Local_95.f_2, 10))
									{
										if (!func_489(iVar0, -258271821) && !func_489(iVar0, -1273030092))
										{
											if (unk_0x8A29BBDF4603E52B(iVar0))
											{
												iVar7 = unk_0xCAEB6CE71A2C7212(iVar0, 1);
												iVar8 = unk_0x8F474E419F56E48D(iVar7);
												if (unk_0x05EFB6A616B6FADE(Local_95.f_2, 13))
												{
													unk_0x3B7A32E04BBE59A5(iVar0, 17, 1);
													unk_0x3B7A32E04BBE59A5(iVar0, 6, 0);
													unk_0x3B7A32E04BBE59A5(iVar0, 1, 0);
												}
												else if (unk_0x7C197233F79C2CB8(iVar8))
												{
													unk_0x3DF8D785133D0B17(iVar0, iVar7, 0, unk_0xA19140A5C42D8715(), 0f, 0f, 0f, 8, 20f, 0f, -1f, 80, 80, -1f, 0);
												}
												else if (unk_0xCA8C103FCD316F89(iVar8))
												{
													unk_0xC4AC94A41BB71F0C(iVar0, iVar7, 0, unk_0xA19140A5C42D8715(), 0f, 0f, 0f, 8, 25f, 0f, -1f, 80, 80, 1);
												}
												else if (unk_0x8F474E419F56E48D(iVar7) == joaat("taxi"))
												{
													unk_0xC2C4AE9DB4A0BEF3(iVar0, 2, false);
													unk_0x3B7A32E04BBE59A5(iVar0, 3, 1);
													unk_0x3B7A32E04BBE59A5(iVar0, 6, 0);
													unk_0x33B5487515BD13D5(iVar0, unk_0xEE978C39384D834F(iLocal_103), 10000f, -1, 1, 0);
												}
												else
												{
													unk_0x731722E696597BD1(iVar0, unk_0xCAEB6CE71A2C7212(iVar0, 1), 60f, 786468);
												}
											}
										}
									}
									else if (!func_489(iVar0, 1805844857))
									{
										if (func_6(iLocal_103, 1, 1))
										{
											unk_0x33B5487515BD13D5(iVar0, unk_0xEE978C39384D834F(iLocal_103), 10000f, -1, 1, 0);
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_477(Local_95.f_10[iParam0 /*7*/], 0);
						break;
				}
				if (unk_0x05EFB6A616B6FADE(Local_95.f_2, 13))
				{
					unk_0x9568B1B58F78FF36(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]));
					unk_0x3B7A32E04BBE59A5(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 17, 1);
					unk_0x3B7A32E04BBE59A5(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 6, 0);
					unk_0x3B7A32E04BBE59A5(unk_0x8A5B683BACF7B78C(Local_95.f_10[iParam0 /*7*/]), 1, 0);
				}
				func_469(iVar0);
			}
		}
	}
}

void func_469(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x05EFB6A616B6FADE(iLocal_98, 16))
	{
		iVar0 = Local_97[unk_0x8D4ED2C97DFF2321() /*5*/].f_3;
		iVar1 = func_470(iVar0);
		if (iVar1 == 1)
		{
			unk_0xFA57C719261AA55D(&iLocal_98, 15);
			unk_0xFA57C719261AA55D(&iLocal_98, 16);
			if (!func_46())
			{
				unk_0x51B1A2935C05DED4(iVar0, 0, 0);
			}
			if (iVar0 > Global_262145.f_7951)
			{
				iVar0 = Global_262145.f_7951;
			}
			unk_0x8C26EBB3525646D4(iParam0, iVar0);
			unk_0x2BCFB39E86340DAA(&(Local_97[unk_0x8D4ED2C97DFF2321() /*5*/].f_1), 5);
		}
		else if (iVar1 == 0)
		{
			unk_0xFA57C719261AA55D(&iLocal_98, 15);
			unk_0xFA57C719261AA55D(&iLocal_98, 16);
			unk_0x2BCFB39E86340DAA(&(Local_97[unk_0x8D4ED2C97DFF2321() /*5*/].f_1), 6);
		}
		else
		{
			return;
		}
	}
}

int func_470(int iParam0)
{
	if (func_46())
	{
		if (func_473(iParam0))
		{
			if (func_472(iLocal_286) == 2)
			{
				unk_0x7D3EC9370CE8AE07(func_471(iLocal_286));
				unk_0x51B1A2935C05DED4(iParam0, 0, 0);
				func_315(iLocal_286);
				return 1;
			}
			else
			{
				func_315(iLocal_286);
				return 0;
			}
		}
	}
	else
	{
		return 1;
	}
	return -1;
}

int func_471(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61;
	}
	return -1;
}

int func_472(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_2;
	}
	return 0;
}

int func_473(int iParam0)
{
	if (!unk_0x05EFB6A616B6FADE(iLocal_98, 15))
	{
		func_313(&iLocal_286, -1135378931, 537254313, 1474183246, 1839532116, iParam0, 4, 3);
		func_476(&uLocal_287, 0, 0);
		unk_0x2BCFB39E86340DAA(&iLocal_98, 15);
	}
	else if (func_475(iLocal_286) || func_474(&uLocal_287, 10000, 0))
	{
		return 1;
	}
	return 0;
}

int func_474(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_466(uParam0, bParam2, 0);
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

int func_475(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_2 != 1;
	}
	return 0;
}

void func_476(var uParam0, bool bParam1, bool bParam2)
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

void func_477(var uParam0, bool bParam1)
{
	if (unk_0x83A1DA4E6C55E952(uParam0))
	{
		if (unk_0xABF0452BE64AD290(uParam0))
		{
			if (!func_478(uParam0))
			{
				if (unk_0x05EFB6A616B6FADE(Local_95.f_2, 13))
				{
					unk_0x9568B1B58F78FF36(unk_0x8A5B683BACF7B78C(uParam0));
					unk_0x3B7A32E04BBE59A5(unk_0x8A5B683BACF7B78C(uParam0), 17, 1);
					unk_0x3B7A32E04BBE59A5(unk_0x8A5B683BACF7B78C(uParam0), 6, 0);
					unk_0x3B7A32E04BBE59A5(unk_0x8A5B683BACF7B78C(uParam0), 1, 0);
				}
				else
				{
					if (bParam1)
					{
						unk_0x9568B1B58F78FF36(unk_0x8A5B683BACF7B78C(uParam0));
					}
					unk_0x3B7A32E04BBE59A5(unk_0x8A5B683BACF7B78C(uParam0), 6, 1);
					unk_0x3B7A32E04BBE59A5(unk_0x8A5B683BACF7B78C(uParam0), 1, 1);
				}
			}
		}
		func_238(&uParam0);
	}
}

int func_478(var uParam0)
{
	if (unk_0x83A1DA4E6C55E952(uParam0))
	{
		return unk_0x4915F4759304D5CF(unk_0x8A5B683BACF7B78C(uParam0));
	}
	return 1;
}

int func_479(int iParam0)
{
	int iVar0;
	
	if (unk_0x5D7DFE2058701942(iParam0, 1))
	{
		iVar0 = unk_0xCAEB6CE71A2C7212(iParam0, 1);
	}
	if (unk_0xBCF615B6673B73ED(iParam0))
	{
		iVar0 = unk_0xDF069A8A4CCE674E(iParam0);
	}
	if (!unk_0xDC5D81351D6A4DDB(iVar0))
	{
		if (func_490(iLocal_103))
		{
			iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xEE978C39384D834F(iLocal_103), 1);
		}
	}
	if (unk_0xDC5D81351D6A4DDB(iVar0))
	{
		if (func_480(iVar0))
		{
			return 0;
		}
		if (unk_0x5BEFAE930E36AE54(iParam0) || unk_0x71852D4EBD08275F(unk_0x8F474E419F56E48D(iVar0)))
		{
			if (!unk_0x4374EED90C523366(iVar0))
			{
				return 0;
			}
		}
		if (unk_0x8F474E419F56E48D(iVar0) == -1881846085)
		{
			return 0;
		}
	}
	return 1;
}

int func_480(int iParam0)
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

Vector3 func_481(vector3 vParam0)
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

var func_482(int iParam0)
{
	return Global_1589747[iParam0 /*790*/].f_211.f_6;
}

int func_483(int iParam0)
{
	var uVar0;
	
	uVar0 = func_484(iParam0);
	return uVar0;
}

int func_484(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0xD4E735F4B6A956AC())
		{
			return unk_0xCCADB536D2A7894D(-1);
		}
		else if (func_290(iParam0))
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

float func_485(int iParam0)
{
	if (!unk_0x05EFB6A616B6FADE(Local_95.f_10[iParam0 /*7*/].f_2, 2))
	{
		return 1f;
	}
	return 3f;
}

int func_486(int iParam0, int iParam1)
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

int func_487(int iParam0, int iParam1)
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

int func_488(int iParam0)
{
	if ((!unk_0x4915F4759304D5CF(iParam0) && !unk_0x97722E4EBB9BA577(iParam0, 0)) && !unk_0x685AE6AF34B35D3B(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_489(int iParam0, int iParam1)
{
	if (unk_0xF9D4EF1338E38AFB(iParam0, iParam1) == 1 || unk_0xF9D4EF1338E38AFB(iParam0, iParam1) == 0)
	{
		return 1;
	}
	return 0;
}

int func_490(int iParam0)
{
	if (unk_0xC201ED53739EE092(iParam0))
	{
		return 0;
	}
	if (unk_0x8A29BBDF4603E52B(unk_0xEE978C39384D834F(iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_491(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xAEAF59799C2F26E4(iParam0, "AttributeDamage"))
	{
		iVar0 = unk_0xBB4F5216F3FCA8EA(iParam0, "AttributeDamage");
	}
	unk_0x2BCFB39E86340DAA(&iVar0, iParam1);
	unk_0x6D61CED849FB898E(iParam0, "AttributeDamage", iVar0);
}

void func_492()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = unk_0x05EFB6A616B6FADE(Local_95.f_2, 6);
	bVar1 = unk_0x05EFB6A616B6FADE(Local_95.f_2, 10);
	func_497();
	if (iLocal_101 != 1)
	{
		if (unk_0x05EFB6A616B6FADE(Local_95.f_3, 12))
		{
			func_494();
		}
	}
	if (unk_0xCE3CB618AFE55EFB(iLocal_110))
	{
		func_493(&iLocal_110);
	}
	iVar3 = 0;
	while (iVar3 < func_463(iLocal_101))
	{
		iLocal_99[iVar3] = 0;
		iVar3++;
	}
	if (unk_0x45F99485D7E1C29A())
	{
		Local_95.f_42 = -1;
		Local_95.f_5 = iLocal_106;
		Local_95.f_6 = iLocal_106;
		Local_95.f_7 = iLocal_106;
		Local_95.f_1 = 0;
		Local_95.f_4 = 0;
		Local_95.f_2 = 0;
		iVar3 = 0;
		while (iVar3 < func_463(iLocal_101))
		{
			bVar2 = unk_0x05EFB6A616B6FADE(Local_95.f_10[iVar3 /*7*/].f_2, 6);
			Local_95.f_10[iVar3 /*7*/].f_2 = 0;
			Local_95.f_10[iVar3 /*7*/].f_6 = -1;
			if (bVar2)
			{
				unk_0x2BCFB39E86340DAA(&(Local_95.f_10[iVar3 /*7*/].f_2), 6);
			}
			iVar3++;
		}
	}
	Local_97[unk_0x8D4ED2C97DFF2321() /*5*/].f_1 = 0;
	Local_97[unk_0x8D4ED2C97DFF2321() /*5*/].f_2 = -1;
	iLocal_98 = 0;
	if (bVar0)
	{
		unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 6);
	}
	if (bVar1)
	{
		unk_0x2BCFB39E86340DAA(&(Local_95.f_2), 11);
		unk_0x2BCFB39E86340DAA(&iLocal_98, 8);
	}
	unk_0x2BCFB39E86340DAA(&iLocal_98, 4);
	unk_0x2BCFB39E86340DAA(&iLocal_98, 11);
}

void func_493(int iParam0)
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

void func_494()
{
	switch (iLocal_101)
	{
		case 0:
			func_496(&(Global_1574996[3]));
			break;
		
		case 1:
			func_495();
			break;
	}
}

void func_495()
{
	int iVar0;
	
	if (unk_0x4C9BACA8D249CB13())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			unk_0x80E7C4A78224C8F9(3, Global_1574948[iVar0], -1467815081);
			unk_0x80E7C4A78224C8F9(3, -1467815081, Global_1574948[iVar0]);
			iVar0++;
		}
	}
}

void func_496(var uParam0)
{
	int iVar0;
	
	if (unk_0x4C9BACA8D249CB13())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			unk_0x80E7C4A78224C8F9(3, Global_1574948[iVar0], *uParam0);
			unk_0x80E7C4A78224C8F9(3, *uParam0, Global_1574948[iVar0]);
			iVar0++;
		}
	}
}

void func_497()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_463(iLocal_101))
	{
		bVar1 = false;
		if (iLocal_101 == 0)
		{
			if (!unk_0x05EFB6A616B6FADE(Local_95.f_2, 1))
			{
				bVar1 = true;
			}
		}
		func_477(Local_95.f_10[iVar0 /*7*/], bVar1);
		iVar0++;
	}
}

void func_498()
{
	func_499();
	if (iLocal_101 != 1)
	{
		func_467();
	}
}

void func_499()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_463(iLocal_101))
	{
		if (unk_0x83A1DA4E6C55E952(Local_95.f_10[iVar0 /*7*/]))
		{
			if (unk_0xABF0452BE64AD290(Local_95.f_10[iVar0 /*7*/]))
			{
				iVar1 = unk_0x8A5B683BACF7B78C(Local_95.f_10[iVar0 /*7*/]);
				if (!unk_0x7112137033807390(iVar1, 0))
				{
					unk_0xB0D7019224A3A443(iVar1, 151, 1);
				}
			}
		}
		iVar0++;
	}
	if (Global_2524719.f_1692)
	{
	}
	if (iLocal_101 == 1)
	{
		if (unk_0xD4E735F4B6A956AC() == iLocal_103)
		{
			if (unk_0x05EFB6A616B6FADE(Local_95.f_1, 0))
			{
				if (!unk_0x1300A1C84690C199(uLocal_283))
				{
					if (func_6(iLocal_103, 1, 1))
					{
						if (Local_95.f_50)
						{
							unk_0xB992A47FF58D1555(15, unk_0xEE978C39384D834F(iLocal_103), 4, 0f, &uLocal_283, -1467815081, 0);
						}
						else if (Local_95.f_52)
						{
							unk_0xB992A47FF58D1555(16, unk_0xEE978C39384D834F(iLocal_103), 4, 0f, &uLocal_283, -1467815081, Local_95.f_53);
						}
						else
						{
							unk_0xB992A47FF58D1555(14, unk_0xEE978C39384D834F(iLocal_103), 4, 0f, &uLocal_283, 0, 0);
						}
					}
				}
				if (Global_2524719.f_1692)
				{
					if (!unk_0x05EFB6A616B6FADE(Local_97[unk_0x8D4ED2C97DFF2321() /*5*/].f_1, 3))
					{
						unk_0x2BCFB39E86340DAA(&(Local_97[unk_0x8D4ED2C97DFF2321() /*5*/].f_1), 3);
					}
				}
			}
		}
	}
	else if (iLocal_101 == 0)
	{
		if (Local_95.f_42 != -1)
		{
			if (unk_0xAABBF7FA3E338B30(Local_95.f_10[Local_95.f_42 /*7*/]))
			{
				if (!unk_0x7112137033807390(unk_0x8A5B683BACF7B78C(Local_95.f_10[Local_95.f_42 /*7*/]), 0) && !func_503(unk_0x8A5B683BACF7B78C(Local_95.f_10[Local_95.f_42 /*7*/])))
				{
					if (Local_95.f_10[Local_95.f_42 /*7*/].f_5 == 3)
					{
						func_500(Local_95.f_10[Local_95.f_42 /*7*/], &iLocal_110, -1082130432, 0, 1, 0, 0, -1, -1, 1);
						if (unk_0xCE3CB618AFE55EFB(iLocal_110))
						{
							if (!unk_0x05EFB6A616B6FADE(iLocal_98, 6))
							{
								unk_0xC4F12E446CCE89F5(iLocal_110, "FM_MGR_BLP");
								unk_0x2BCFB39E86340DAA(&iLocal_98, 6);
							}
						}
					}
				}
				else if (unk_0xCE3CB618AFE55EFB(iLocal_110))
				{
					func_493(&iLocal_110);
				}
			}
			if (unk_0xD4E735F4B6A956AC() == iLocal_102)
			{
				if (!unk_0x05EFB6A616B6FADE(iLocal_98, 14))
				{
					if (func_365("MPCT_mugsuc", "LAMAR", 19))
					{
						unk_0x2BCFB39E86340DAA(&iLocal_98, 14);
					}
				}
			}
		}
	}
}

void func_500(var uParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0x83A1DA4E6C55E952(uParam0))
	{
		if (func_502())
		{
			Global_2437022 = unk_0xD4E735F4B6A956AC();
		}
		if (bParam3)
		{
			func_501(unk_0x8A5B683BACF7B78C(uParam0), iParam1, 1, Global_2437022, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_501(unk_0x8A5B683BACF7B78C(uParam0), iParam1, -1, Global_2437022, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0xCE3CB618AFE55EFB(*iParam1))
	{
		func_493(iParam1);
	}
}

int func_501(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
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

bool func_502()
{
	return Global_1312834;
}

int func_503(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5D7DFE2058701942(iParam0, 0))
	{
		iVar0 = unk_0xCAEB6CE71A2C7212(iParam0, 0);
		if (unk_0x1095F403F52B42E1(iVar0, 0))
		{
			if (unk_0xDE26AC7E7C308E75("MPBitset", 3))
			{
				if (unk_0xAEAF59799C2F26E4(iVar0, "MPBitset"))
				{
					iVar1 = unk_0xBB4F5216F3FCA8EA(iVar0, "MPBitset");
				}
				if (unk_0x05EFB6A616B6FADE(iVar1, 12))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_504()
{
	return Local_95;
}

int func_505(int iParam0)
{
	return Local_97[iParam0 /*5*/];
}

void func_506()
{
	if (unk_0xD4E735F4B6A956AC() == iLocal_103)
	{
		if (Global_25609)
		{
			if (!unk_0x05EFB6A616B6FADE(Local_97[iLocal_108 /*5*/].f_1, 4))
			{
				unk_0x2BCFB39E86340DAA(&(Local_97[iLocal_108 /*5*/].f_1), 4);
			}
		}
		else
		{
			unk_0xFA57C719261AA55D(&(Local_97[iLocal_108 /*5*/].f_1), 4);
		}
	}
}

void func_507()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0xD4E735F4B6A956AC() == iLocal_102)
	{
		if (unk_0x05EFB6A616B6FADE(Global_1573338, 0))
		{
			unk_0xFA57C719261AA55D(&Global_1573338, 0);
			bVar0 = true;
		}
		if (!unk_0x05EFB6A616B6FADE(Local_97[iLocal_102 /*5*/].f_1, 2))
		{
			if (unk_0x05EFB6A616B6FADE(Local_95.f_1, 11))
			{
				unk_0x2BCFB39E86340DAA(&(Local_97[iLocal_102 /*5*/].f_1), 2);
				bVar0 = true;
			}
		}
		else if (!unk_0x05EFB6A616B6FADE(Local_95.f_1, 11))
		{
			unk_0xFA57C719261AA55D(&(Local_97[iLocal_102 /*5*/].f_1), 2);
		}
		if (bVar0)
		{
			Local_97[unk_0x8D4ED2C97DFF2321() /*5*/].f_4 = func_511();
			func_508(Local_97[unk_0x8D4ED2C97DFF2321() /*5*/].f_4);
		}
	}
	else if (Local_97[unk_0x8D4ED2C97DFF2321() /*5*/].f_4 != Local_95.f_44)
	{
		Local_97[unk_0x8D4ED2C97DFF2321() /*5*/].f_4 = Local_95.f_44;
		func_508(Local_97[unk_0x8D4ED2C97DFF2321() /*5*/].f_4);
		bVar0 = true;
	}
}

void func_508(int iParam0)
{
	switch (iLocal_101)
	{
		case 0:
			func_510(&(Global_1574996[3]), iParam0);
			break;
		
		case 1:
			func_509(iParam0);
			break;
	}
}

void func_509(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x05EFB6A616B6FADE(iParam0, iVar0))
		{
			unk_0x80E7C4A78224C8F9(1, Global_1574948[iVar0], -1467815081);
			unk_0x80E7C4A78224C8F9(1, -1467815081, Global_1574948[iVar0]);
		}
		else
		{
			unk_0x80E7C4A78224C8F9(3, Global_1574948[iVar0], -1467815081);
			unk_0x80E7C4A78224C8F9(3, -1467815081, Global_1574948[iVar0]);
		}
		iVar0++;
	}
}

void func_510(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x05EFB6A616B6FADE(iParam1, iVar0))
		{
			unk_0x80E7C4A78224C8F9(1, Global_1574948[iVar0], *uParam0);
			unk_0x80E7C4A78224C8F9(1, *uParam0, Global_1574948[iVar0]);
		}
		else
		{
			unk_0x80E7C4A78224C8F9(3, Global_1574948[iVar0], *uParam0);
			unk_0x80E7C4A78224C8F9(3, *uParam0, Global_1574948[iVar0]);
		}
		iVar0++;
	}
}

int func_511()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iLocal_101 == 1 || iLocal_101 == 0)
		{
			if (iLocal_102 == unk_0x1483A8AE554B8B2B(iVar1))
			{
				unk_0x2BCFB39E86340DAA(&iVar0, iVar1);
			}
		}
		else if (unk_0xD4E735F4B6A956AC() == unk_0x1483A8AE554B8B2B(iVar1))
		{
			unk_0x2BCFB39E86340DAA(&iVar0, iVar1);
		}
		else if (func_6(unk_0x1483A8AE554B8B2B(iVar1), 0, 1))
		{
			if (func_47(unk_0x1483A8AE554B8B2B(iVar1)))
			{
				unk_0x2BCFB39E86340DAA(&iVar0, iVar1);
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_512()
{
	switch (iLocal_101)
	{
		case 0:
			if (!unk_0x05EFB6A616B6FADE(iLocal_98, 11))
			{
				if (unk_0xD4E735F4B6A956AC() == iLocal_102)
				{
					if (func_6(iLocal_103, 1, 1))
					{
						func_334("GC_TCK_60", iLocal_103, 0, 0, 0, 1, 1, 0);
						unk_0x2BCFB39E86340DAA(&iLocal_98, 11);
					}
				}
			}
			if (!unk_0x05EFB6A616B6FADE(iLocal_98, 12))
			{
				if (unk_0x05EFB6A616B6FADE(Local_95.f_1, 8))
				{
					if (unk_0xD4E735F4B6A956AC() == iLocal_102)
					{
						if (func_6(iLocal_103, 1, 1))
						{
							func_334("GC_TCK_62", iLocal_103, 0, 0, 0, 1, 1, 0);
							unk_0x2BCFB39E86340DAA(&iLocal_98, 12);
						}
					}
				}
			}
			if (unk_0x05EFB6A616B6FADE(Local_95.f_2, 10))
			{
				if (!unk_0x05EFB6A616B6FADE(iLocal_98, 8))
				{
					if (unk_0xD4E735F4B6A956AC() == iLocal_102)
					{
						if (func_6(iLocal_103, 1, 1))
						{
							func_334("GC_TCK_65", iLocal_103, 0, 0, 0, 1, 1, 0);
							unk_0x2BCFB39E86340DAA(&iLocal_98, 8);
						}
					}
				}
			}
			else if (!unk_0x05EFB6A616B6FADE(iLocal_98, 13))
			{
				if (!unk_0x05EFB6A616B6FADE(Local_95.f_2, 11))
				{
					if (unk_0x05EFB6A616B6FADE(Local_95.f_1, 8))
					{
						if (unk_0x05EFB6A616B6FADE(Local_95.f_2, 6))
						{
							if (unk_0xD4E735F4B6A956AC() == iLocal_102)
							{
								if (func_6(iLocal_103, 1, 1))
								{
									func_334("GC_TCK_63", iLocal_103, 0, 0, 0, 1, 1, 0);
									unk_0x2BCFB39E86340DAA(&iLocal_98, 13);
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x05EFB6A616B6FADE(iLocal_98, 11))
			{
				if (unk_0xD4E735F4B6A956AC() == iLocal_102)
				{
					if (func_6(iLocal_103, 1, 1))
					{
						if (Local_95.f_50)
						{
							func_334("HS_SUCC", iLocal_103, 0, 0, 0, 1, 1, 0);
						}
						else if (Local_95.f_52)
						{
							func_334("GO_ASS_SUCC", iLocal_103, 0, 0, 0, 1, 1, 0);
						}
						else
						{
							func_334("GC_TCK_70", iLocal_103, 0, 0, 0, 1, 1, 0);
						}
						unk_0x2BCFB39E86340DAA(&iLocal_98, 11);
					}
				}
				else if (unk_0xD4E735F4B6A956AC() == iLocal_103)
				{
					if (func_6(iLocal_102, 1, 1))
					{
						if (Local_95.f_50)
						{
							if (Local_95.f_51)
							{
								func_514("HS_A_SUCC", 1);
							}
							else
							{
								func_334("HS_SENT", iLocal_102, 0, 0, 0, 1, 1, 0);
							}
						}
						else if (Local_95.f_52)
						{
							func_334("GO_ASS_SENT", iLocal_102, 0, 0, 0, 1, 1, 0);
						}
						else
						{
							func_334("GC_TCK_71", iLocal_102, 0, 0, 0, 1, 1, 0);
						}
						unk_0x2BCFB39E86340DAA(&iLocal_98, 11);
					}
				}
			}
			if (!unk_0x05EFB6A616B6FADE(iLocal_98, 10))
			{
				if (unk_0x05EFB6A616B6FADE(Local_95.f_1, 0))
				{
					if (unk_0x05EFB6A616B6FADE(Local_95.f_3, 6))
					{
						if (unk_0xD4E735F4B6A956AC() == iLocal_102)
						{
							if (func_6(iLocal_103, 0, 1))
							{
								func_513(-1);
								if (Local_95.f_50)
								{
									if (!Local_95.f_51)
									{
										func_334("HS_KILLED", iLocal_103, 0, 0, 0, 1, 1, 0);
									}
								}
								else if (Local_95.f_52)
								{
									func_334("GO_ASS_KILL", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								else
								{
									func_334("GC_TCK_73", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								unk_0x2BCFB39E86340DAA(&iLocal_98, 10);
							}
						}
					}
				}
			}
			if (!unk_0x05EFB6A616B6FADE(iLocal_98, 9))
			{
				if (unk_0x05EFB6A616B6FADE(Local_95.f_1, 0))
				{
					if (unk_0x05EFB6A616B6FADE(Local_95.f_3, 7))
					{
						if (unk_0xD4E735F4B6A956AC() == iLocal_102)
						{
							if (func_6(iLocal_103, 0, 1))
							{
								if (Local_95.f_50)
								{
									func_334("HS_ESCAPED", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								else if (Local_95.f_52)
								{
									func_334("GO_ASS_ESC", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								else
								{
									func_334("GC_TCK_75", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								unk_0x2BCFB39E86340DAA(&iLocal_98, 9);
							}
						}
					}
				}
			}
			break;
	}
}

void func_513(int iParam0)
{
	if (Global_1574384)
	{
		if (Global_1574388 && Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/] != 148)
		{
			if (Global_1573886.f_14 == unk_0x1483A8AE554B8B2B(iParam0))
			{
				Global_1623784++;
			}
		}
		else
		{
			Global_1623784++;
		}
	}
}

int func_514(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x59FF6261546DDD52(sParam0);
	iVar0 = unk_0x42A1DBBDEF9F85FF(0, 1);
	func_335(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_515()
{
	if (unk_0xBCC2AC37F56D2149(false, 0) != Local_95.f_45)
	{
		if (func_523(Local_95.f_45, 0, 1))
		{
			if (unk_0xEBCEB76159738410(0) <= Local_95.f_45)
			{
				unk_0x7F2854D39965C275(Local_95.f_45);
			}
		}
	}
	if (unk_0xA373CB83DA86BA00(false, 0) != Local_95.f_46)
	{
		if (func_522(Local_95.f_45, 0, 1))
		{
			if (unk_0x1F9D434D8B61A3BC(0) <= Local_95.f_46)
			{
				unk_0xA721D9ED3827732A(Local_95.f_46);
			}
		}
	}
	if (unk_0x2FC83B1E3A760AA3(false, 0) != Local_95.f_47)
	{
		if (func_516(Local_95.f_45, 0, 1))
		{
			if (unk_0x00E17033DC065534(0) <= Local_95.f_47)
			{
				unk_0xC0E0EC37CC7BA185(Local_95.f_47);
			}
		}
	}
}

bool func_516(int iParam0, bool bParam1, bool bParam2)
{
	return func_517(2, iParam0, 1, bParam1, bParam2);
}

int func_517(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x05EFB6A616B6FADE(Global_1380171, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_521(iParam0) - func_520(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_520(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_521(iParam0) - func_519(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_520(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_521(iParam0) - func_520(iParam0, 1));
		}
		if (!bParam4 && Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/] != 3)
		{
			iVar1 = (iVar1 - func_518(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_518(int iParam0)
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

int func_519(int iParam0)
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

int func_520(int iParam0, bool bParam1)
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

int func_521(int iParam0)
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

bool func_522(int iParam0, bool bParam1, bool bParam2)
{
	return func_517(1, iParam0, 1, bParam1, bParam2);
}

bool func_523(int iParam0, bool bParam1, bool bParam2)
{
	return func_517(0, iParam0, 1, bParam1, bParam2);
}

void func_524()
{
	if (Local_95.f_50)
	{
		if (unk_0xD4E735F4B6A956AC() == iLocal_102)
		{
			func_526(9);
		}
		else if (unk_0xD4E735F4B6A956AC() == iLocal_103)
		{
			func_526(13);
		}
	}
	else if (Local_95.f_52)
	{
	}
	func_525();
}

void func_525()
{
	unk_0x8F1A9FE6D91AAFEB();
}

void func_526(int iParam0)
{
	unk_0xFA57C719261AA55D(&(Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_5), iParam0);
}

int func_527()
{
	var uVar0;
	
	func_534(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			return 1;
		}
	}
	if (func_533())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_532())
	{
		return 1;
	}
	if (func_531(157))
	{
		if (!func_530())
		{
			return 1;
		}
	}
	if (func_531(155))
	{
		return 1;
	}
	if (!unk_0x18F86E07E41D913F())
	{
		return 1;
	}
	if (func_528() != 0)
	{
		if (unk_0x8B1574454E8C2421(func_528()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_528()
{
	switch (func_529())
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

int func_529()
{
	return Global_25459;
}

bool func_530()
{
	return Global_2448386.f_587;
}

int func_531(int iParam0)
{
	if (unk_0xF10AFD11E6EE81BF(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_532()
{
	return Global_2458191;
}

bool func_533()
{
	return Global_2448386.f_582;
}

void func_534(var uParam0)
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
					func_535(iVar0);
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

void func_535(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x8866A4E42CDA3EF1(1, iParam0, &vVar0, 3))
	{
		if (func_6(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xEE978C39384D834F(vVar0.y);
			if (unk_0xDC5D81351D6A4DDB(iVar1))
			{
				if (unk_0x5D7DFE2058701942(iVar1, 0))
				{
					iVar2 = unk_0xCAEB6CE71A2C7212(iVar1, 0);
					if (unk_0xEB1A41F6F719807C(iVar2, vVar0.z) && unk_0xB592B7A61F21E7A5())
					{
						if (func_536(iVar2, &bVar3))
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

int func_536(int iParam0, var uParam1)
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

void func_537()
{
	wait(0);
}

void func_538(struct<21> Param0)
{
	func_544(32, Param0);
	func_543(0, -1, 0);
	unk_0xF82A3961787FA0A4(&Local_95, 56);
	unk_0x8BFA7A7AB1D02137(&Local_97, 161);
	unk_0x2F3193E06C2EFF44(0);
	if (!func_542())
	{
		func_255();
	}
	iLocal_101 = Param0.f_16;
	iLocal_102 = unk_0x1483A8AE554B8B2B(Param0.f_17);
	if (unk_0xC77FA683E9BB485B(iLocal_102))
	{
	}
	iLocal_103 = unk_0x1483A8AE554B8B2B(Param0.f_18);
	if (unk_0xC77FA683E9BB485B(iLocal_103))
	{
		iLocal_104 = unk_0xFEB6EEC0545AF7AA(unk_0xB330C43B9B7B1724(iLocal_103));
	}
	if (func_541(iLocal_102, 9) && iLocal_101 == 1)
	{
		Local_95.f_50 = 1;
		if (func_541(iLocal_103, 13))
		{
			Local_95.f_51 = 1;
		}
	}
	if (iLocal_101 == 1)
	{
		if (func_540(iLocal_102))
		{
			Local_95.f_52 = 1;
			Local_95.f_53 = func_539(iLocal_102);
		}
	}
	vLocal_105 = { Param0.f_10 };
	if (iLocal_101 == 1)
	{
		if (unk_0xD4E735F4B6A956AC() == iLocal_102)
		{
			unk_0x2BCFB39E86340DAA(&Global_1573338, 0);
		}
	}
	Global_1646078 = 0;
	Global_1646079 = 0;
	if (iLocal_101 == 1)
	{
		Global_2524719.f_1692 = 0;
	}
	Local_97[unk_0x8D4ED2C97DFF2321() /*5*/] = 0;
}

var func_539(int iParam0)
{
	return Global_1589747[iParam0 /*790*/].f_183.f_4;
}

bool func_540(int iParam0)
{
	return Global_1589747[iParam0 /*790*/].f_183 != func_13();
}

bool func_541(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_11.f_5, iParam1);
}

int func_542()
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
		if (func_533())
		{
			return 0;
		}
		if (func_531(155))
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

int func_543(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBF19BA6420EC428C();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_525();
			}
			else
			{
				return 0;
			}
		}
		if (!func_502())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x4C9BACA8D249CB13())
				{
					if (!bParam2)
					{
						func_525();
					}
					else
					{
						return 0;
					}
				}
				if (func_533())
				{
					if (!bParam2)
					{
						func_525();
					}
					else
					{
						return 0;
					}
				}
				if (func_531(155))
				{
					if (!bParam2)
					{
						func_525();
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
					func_525();
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
				func_525();
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
			func_525();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_544(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		func_525();
	}
	unk_0x1B0D16DC60698F88(iParam0, 0, Param1.f_16);
}

