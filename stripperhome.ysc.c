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
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	var uLocal_74[1] = { 0 };
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	var uLocal_78 = 16;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
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
	int iLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	int iLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	int iLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	int iLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	int iLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	int iLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	int iLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 1097859072;
	var uLocal_267 = 1500;
	var uLocal_268 = 45;
	var uLocal_269 = 1103626240;
	var uLocal_270 = 5;
	int iLocal_271[1] = { 0 };
	char* sLocal_272 = NULL;
	char* sLocal_273 = NULL;
	var uLocal_274 = 1;
	var uLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	var uLocal_278[1] = { 0 };
	int iLocal_279[4] = { 0, 0, 0, 0 };
	struct<9> Local_280 = { 0, 0, 0, 0, 0, 0, 0, 21, 6 } ;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	int iLocal_284 = 0;
	vector3 vLocal_285 = { 0f, 0f, 0f };
	vector3 vLocal_286 = { 0f, 0f, 0f };
	vector3 vLocal_287 = { 0f, 0f, 0f };
	vector3 vLocal_288 = { 0f, 0f, 0f };
	vector3 vLocal_289 = { 0f, 0f, 0f };
	vector3 vLocal_290 = { 0f, 0f, 0f };
	vector3 vLocal_291 = { 0f, 0f, 0f };
	vector3 vLocal_292 = { 0f, 0f, 0f };
	float fLocal_293 = 0f;
	float fLocal_294 = 0f;
	float fLocal_295 = 0f;
	float fLocal_296 = 0f;
	int iLocal_297 = 0;
	var uLocal_298 = 0;
	int iLocal_299 = 0;
	var uLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	bool bLocal_303 = 0;
	bool bLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	struct<5> Local_308 = { 1, 0, 0, 0, 0 } ;
	var uLocal_309 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
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
	vLocal_63 = { 500f, 500f, 500f };
	fLocal_296 = -1f;
	iLocal_299 = -1;
	bLocal_303 = true;
	unk_0x4659F4154D948B01("stripperhome");
	unk_0xD07EE91CE9B6D4CF(1);
	unk_0x7D3B1139A6B57FE1(unk_0xD4E735F4B6A956AC(), 1);
	if (unk_0x5EBD03AF78E7B4DB(75))
	{
		func_290();
	}
	bLocal_304 = ScriptParam_308.f_5;
	if (bLocal_304)
	{
		unk_0x1B0D16DC60698F88(32, 0, -1);
		func_285(0, -1, 0);
		unk_0x7F2854D39965C275(1);
		unk_0x2F3193E06C2EFF44(0);
	}
	uLocal_74[0] = ScriptParam_308[0];
	Global_105095.f_1 = uLocal_74[0];
	bVar0 = false;
	bVar1 = true;
	iVar2 = unk_0x34CEB9721AC6A0A9();
	if (func_284() && ScriptParam_308.f_4)
	{
		bVar1 = false;
		if (iVar2 > 14 && iVar2 < 22)
		{
			bVar0 = true;
		}
	}
	while (((!func_255(&ScriptParam_308, bVar0) && iLocal_72 != 6) && iLocal_72 != 5) && (iLocal_72 != -1 || !func_254(uLocal_300, 1024)))
	{
		func_246(0);
		wait(0);
	}
	unk_0xA5DE74AE39867B03(func_245(0, 0));
	unk_0xA5DE74AE39867B03(func_245(1, 0));
	if (!bVar1)
	{
		iLocal_72 = 2;
	}
	while (true)
	{
		wait(0);
		if (iLocal_302 > 0)
		{
			func_243();
			iLocal_302 = (iLocal_302 - round((unk_0xDE089748C4C76C96() * 1000f)));
		}
		switch (iLocal_72)
		{
			case -1:
				func_242();
				break;
			
			case 0:
				func_203(1);
				break;
			
			case 1:
				func_106();
				break;
			
			case 2:
				func_203(0);
				break;
			
			case 3:
				func_88();
				break;
			
			case 4:
				func_37(bLocal_303);
				break;
			
			case 5:
				func_11();
				break;
			
			case 6:
				if (!func_10(&iLocal_258))
				{
					func_7(&iLocal_258);
				}
				else if (func_1(&iLocal_258, 7.5f))
				{
					func_290();
				}
				break;
		}
	}
}

int func_1(int iParam0, float fParam1)
{
	if (func_3(iParam0, fParam1))
	{
		func_2(iParam0);
		return 1;
	}
	return 0;
}

void func_2(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

int func_3(int iParam0, float fParam1)
{
	if (func_10(iParam0))
	{
		if (func_4(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_4(int iParam0)
{
	if (func_10(iParam0))
	{
		if (func_6(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_5(unk_0x05EFB6A616B6FADE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_5(bool bParam0)
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

bool func_6(var uParam0)
{
	return unk_0x05EFB6A616B6FADE(*uParam0, 2);
}

void func_7(int iParam0)
{
	if (!func_10(iParam0))
	{
		func_8(iParam0);
	}
}

void func_8(int iParam0)
{
	func_9(iParam0, 0f);
}

void func_9(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_5(unk_0x05EFB6A616B6FADE(*iParam0, 4)) - fParam1);
	unk_0x2BCFB39E86340DAA(iParam0, 1);
	unk_0xFA57C719261AA55D(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_10(var uParam0)
{
	return unk_0x05EFB6A616B6FADE(*uParam0, 1);
}

void func_11()
{
	if (!func_254(uLocal_300, 8192))
	{
		if (func_36())
		{
			func_26();
		}
		else
		{
			iLocal_72 = 6;
		}
	}
	if (func_254(uLocal_300, 16384))
	{
		if (func_12())
		{
			iLocal_72 = 6;
		}
	}
}

int func_12()
{
	if (unk_0x7112137033807390(iLocal_271[0], 0))
	{
		return 1;
	}
	if (func_254(uLocal_300, 8192))
	{
		unk_0xB0D7019224A3A443(iLocal_271[0], 60, true);
		if (unk_0xA60C975CBAB69F34(iLocal_271[0], 96.8033f, -1287.597f, 28.2688f, 5f, 5f, 2f, false, true, 1) || func_25(unk_0xA19140A5C42D8715(), 96.8033f, -1287.597f, 28.2688f, 1) > 100f)
		{
			if (unk_0x37A8EF89184DBA23(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), 0))
			{
				unk_0x7954F628CA598930(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, 1, 0f, 0);
			}
			if (unk_0x37B568B777BC65F9(iLocal_279[0]))
			{
				if (unk_0xD8AE52C8418BED79(iLocal_279[0]))
				{
					func_13(1, 1, 0);
					unk_0x8E88E73F74A9FF79(false, false, 3000, 1, 0, 0);
					unk_0x77F0486CE0E598D5(iLocal_279[0], 1);
				}
			}
			unk_0x680F17660351F21B(&(iLocal_271[0]));
			return 1;
		}
	}
	return 0;
}

void func_13(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x962CF6A9EA6FDCAC(unk_0xA6580F898F4E801C(), true, 0);
	}
	unk_0x8E1BB215B75D51A5(1);
	func_15(0, 1, iParam2, 0, 0);
	if (bParam1)
	{
		unk_0xDC374DA4DC566237(true);
		unk_0x85685830EFB9A55E(true);
	}
	func_14(23, 0);
}

void func_14(int iParam0, bool bParam1)
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

void func_15(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		unk_0xC97ACA9456A064F3(unk_0xD4E735F4B6A956AC());
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 1);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 1);
		func_24(1);
		unk_0x158181F81A221D70();
		unk_0xD8EA6395AE60BF4A();
		if (Global_14513.f_1 > 3)
		{
			if (unk_0xB39808C1DCE0DCFA())
			{
				unk_0xA8B97F91CBDE376C(false);
			}
			if (!func_23())
			{
				Global_14513.f_1 = 3;
			}
			Global_15822 = 5;
		}
		func_22(1, iParam3, iParam2, 0);
		Global_56187 = 1;
		Global_68497 = 1;
		Global_71203 = 1;
	}
	else
	{
		func_24(0);
		unk_0x21727E2C492FE1B3();
		Global_56187 = 0;
		if (bParam1)
		{
			unk_0x1A81FD78261DCFCD();
		}
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 0);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 0);
		func_22(0, iParam3, iParam2, 0);
		if (unk_0x4C9BACA8D249CB13())
		{
			if ((((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_20(unk_0xD4E735F4B6A956AC())) && !func_17(unk_0xD4E735F4B6A956AC(), 0)) && !func_16()) && !bParam4)
			{
				unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), false);
			}
		}
		else if ((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_20(unk_0xD4E735F4B6A956AC())) && !bParam4)
		{
			unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), false);
		}
		Global_71203 = 0;
	}
}

bool func_16()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 14);
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, bool bParam1)
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

int func_19()
{
	return Global_1312736;
}

int func_20(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_21())
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

bool func_21()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

int func_22(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_23()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_24(int iParam0)
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

float func_25(int iParam0, vector3 vParam1, bool bParam2)
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

void func_26()
{
	int iVar0;
	
	func_29();
	if (unk_0x37A8EF89184DBA23(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), 0))
	{
		unk_0x7954F628CA598930(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, 0, 0f, 0);
	}
	func_27(&uLocal_300, 16384);
	unk_0xB29E08C7AB729BAD(iLocal_271[0], false);
	unk_0x13E0A8160525AE55(iLocal_271[0], 104, true);
	unk_0x2F89329397A277BC(&iVar0);
	unk_0x956B3CF461C0C1C9(0, 98.2041f, -1291.252f, 28.2688f, 1f, -1, 0.25f, 1, 1193033728);
	unk_0x956B3CF461C0C1C9(0, 107.6303f, -1304.742f, 27.7688f, 1f, -1, 0.25f, 0, 1193033728);
	unk_0x3F01127ECD227890(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, 15000, 1, 0, 0, 0, 0);
	unk_0x301F42EEE3C40328(iVar0);
	unk_0xE1072FA2FECBAD96(iLocal_271[0], iVar0);
	unk_0x3A95A0A3221D4208(&iVar0);
	func_27(&uLocal_300, 8192);
}

void func_27(var uParam0, int iParam1)
{
	func_28(uParam0, iParam1);
}

void func_28(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_29()
{
	if (!unk_0xCDDABFAF231CF3DD(iLocal_271[0]) && func_35(1, 0, 1))
	{
		func_30(0, 0, 0);
		iLocal_279[0] = unk_0x4AD86AC07DD005D4("DEFAULT_SCRIPTED_CAMERA", 90.1007f, -1281.573f, 28.6661f, 2.4422f, 0f, -113.4013f, 45f, 1, 2);
		unk_0x8E88E73F74A9FF79(true, false, 3000, 1, 0, 0);
	}
}

void func_30(int iParam0, int iParam1, int iParam2)
{
	unk_0x962CF6A9EA6FDCAC(unk_0xA6580F898F4E801C(), false, iParam0);
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		unk_0x341AA026B031328A(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), 15f);
	}
	unk_0x8E1BB215B75D51A5(iParam1);
	func_31(0);
	func_15(1, 1, iParam2, 0, 0);
	unk_0xDC374DA4DC566237(false);
	unk_0x85685830EFB9A55E(false);
	func_14(23, 1);
}

void func_31(int iParam0)
{
	if (func_34())
	{
		return;
	}
	if (Global_14681)
	{
		func_32(0, 0);
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
	if (!func_23())
	{
		Global_14513.f_1 = 3;
	}
}

void func_32(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_33(0))
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

int func_33(int iParam0)
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

bool func_34()
{
	return unk_0x05EFB6A616B6FADE(Global_1678593, 19);
}

int func_35(bool bParam0, bool bParam1, bool bParam2)
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

int func_36()
{
	if ((uLocal_74[0] == 8 || uLocal_74[0] == 9) || func_25(iLocal_271[0], 96.12f, -1284.91f, 29.43f, 1) > 10f)
	{
		return 0;
	}
	return 1;
}

void func_37(bool bParam0)
{
	vector3 vVar0;
	var uVar1;
	int iVar2;
	
	func_64();
	if (bParam0)
	{
		vVar0 = { vLocal_287 };
	}
	else
	{
		func_63(&vVar0, &uVar1, 0);
	}
	func_60(vVar0);
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		if (unk_0x5D7DFE2058701942(iLocal_271[0], 0))
		{
			iVar2 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
			if (unk_0xDC5D81351D6A4DDB(iVar2) && !unk_0x7112137033807390(iVar2, 0))
			{
				if (iLocal_305)
				{
					if (func_58(iVar2, 4f, 1, 1056964608, 0, 1, 0))
					{
						func_57();
						unk_0xCB482EF95FAE4D73(iLocal_271[0], 0, 16777216);
						func_38();
					}
				}
				else if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vVar0, 4f, 4f, 2f, true, true, 2))
				{
					iLocal_305 = 1;
				}
			}
		}
	}
}

void func_38()
{
	func_56();
	func_49(295, 0, 0);
	func_39(0);
	func_290();
}

void func_39(bool bParam0)
{
	struct<8> Var0[3];
	struct<6> Var1[3];
	
	if (!func_46())
	{
		return;
	}
	if (!iLocal_67)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Location", 32);
	StringCopy(&(Var0[2 /*8*/]), "Type", 32);
	if (bParam0)
	{
		StringCopy(&(Var1[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	}
	StringCopy(&(Var1[1 /*6*/]), "City", 24);
	StringCopy(&(Var1[2 /*6*/]), "????", 24);
	if (func_44(200, &Var1, &Var0, 3, -1, 0, 0))
	{
		unk_0x13BE64B38F002613(131, func_43(), 0f);
		unk_0x13BE64B38F002613(108, func_42(), 0f);
		unk_0x13BE64B38F002613(102, func_41(), 0f);
		unk_0x13BE64B38F002613(8, func_40(), 0f);
	}
	iLocal_64 = 0;
	iLocal_65 = 0;
	iLocal_66 = 0;
	iLocal_67 = 0;
}

int func_40()
{
	return iLocal_65;
}

int func_41()
{
	return iLocal_66;
}

int func_42()
{
	return iLocal_64;
}

int func_43()
{
	return 0;
}

int func_44(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
				Var2 = { func_45(unk_0xD4E735F4B6A956AC()) };
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

struct<13> func_45(int iParam0)
{
	struct<13> Var0;
	
	unk_0xE05C4303C26882C4(iParam0, &Var0, 13);
	return Var0;
}

int func_46()
{
	if ((unk_0x18F86E07E41D913F() && unk_0xC29B8FF8374918FD()) && func_47())
	{
		return 1;
	}
	return 0;
}

int func_47()
{
	if (func_48())
	{
		return 0;
	}
	if (unk_0x4F3E20635369D110() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_48()
{
	return Global_2458691;
}

void func_49(int iParam0, int iParam1, int iParam2)
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
		func_55((891 + iParam0), 1, -1, 1);
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
		func_50();
	}
}

void func_50()
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
		func_54(13, floor(Global_106070.f_10166.f_3853));
	}
	if (!unk_0xC253B4B0BD2DE4DD())
	{
		if (!Global_71205)
		{
			if (func_53() == 2 == 0 && !unk_0x4C9BACA8D249CB13())
			{
				if (unk_0x4F3E20635369D110())
				{
					Global_105804 = 0;
				}
				if (!Global_56181)
				{
					func_51();
				}
			}
		}
	}
}

int func_51()
{
	if (func_52(0))
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

bool func_52(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

int func_53()
{
	return Global_25459;
}

int func_54(int iParam0, int iParam1)
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

int func_55(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_19();
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

void func_56()
{
	iLocal_66++;
	iLocal_67 = 1;
}

void func_57()
{
	if (unk_0xDC5D81351D6A4DDB(iLocal_271[0]) && !unk_0x7112137033807390(iLocal_271[0], 0))
	{
		unk_0x605FF8F1D0D5E4DE(iLocal_271[0], true);
		if (unk_0x749F5228DEB730FF(iLocal_271[0]))
		{
			unk_0xF8136E11BE4BEAC3(iLocal_271[0]);
		}
	}
}

int func_58(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_59(iParam0);
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

void func_59(int iParam0)
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

void func_60(vector3 vParam0)
{
	int iVar0;
	
	if (unk_0xCE3CB618AFE55EFB(iLocal_277))
	{
		unk_0xE1623437A3194332(&iLocal_277);
	}
	if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		return;
	}
	iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
	if (unk_0xDC5D81351D6A4DDB(iVar0) && !unk_0x7112137033807390(iVar0, 0))
	{
		if (unk_0x5D7DFE2058701942(iLocal_271[0], 0))
		{
			if (unk_0xE0FD180CD24C0B67(iLocal_271[0], unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 0))
			{
				if (!unk_0xCE3CB618AFE55EFB(iLocal_276))
				{
					iLocal_276 = func_61(vParam0, 1);
				}
			}
		}
	}
}

int func_61(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xA70969818F182A36(vParam0);
	unk_0x575CF00E129E0CE1(iVar0, func_62(unk_0x4C9BACA8D249CB13(), 1f, 1f));
	unk_0x3E46F0AAE4B470FB(iVar0, bParam1);
	return iVar0;
}

float func_62(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_63(var uParam0, var uParam1, bool bParam2)
{
	vLocal_290 = { vLocal_290 };
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (!bParam2)
			{
				*uParam0 = { 92.8829f, -1281.123f, 28.1845f };
				*uParam1 = 15f;
			}
			else
			{
				*uParam0 = { vLocal_289 };
				*uParam1 = fLocal_293;
			}
			vLocal_290 = { *uParam0 };
			break;
		
		case 8:
			if (!bParam2)
			{
				*uParam0 = { -1615.991f, 187.4827f, 59.1337f };
				*uParam1 = 217.5474f;
			}
			else
			{
				*uParam0 = { vLocal_289 };
				*uParam1 = fLocal_293;
			}
			vLocal_290 = { *uParam0 };
			break;
		
		case 9:
			if (!bParam2)
			{
				*uParam0 = { 1538.432f, 3776.85f, 33.5178f };
				*uParam1 = 225.8821f;
			}
			else
			{
				*uParam0 = { vLocal_289 };
				*uParam1 = fLocal_293;
			}
			vLocal_290 = { *uParam0 };
			break;
	}
}

void func_64()
{
	if (unk_0x4915F4759304D5CF(iLocal_271[0]))
	{
		if (!unk_0xDC5D81351D6A4DDB(iLocal_271[0]))
		{
		}
		else if (unk_0x7112137033807390(iLocal_271[0], 0))
		{
		}
		func_65(0);
	}
}

void func_65(int iParam0)
{
	if ((uLocal_74[0] > -1 && uLocal_74[0] < 10) && iParam0 != 2)
	{
		func_86(uLocal_74[0], (func_87(uLocal_74[0]) / 2));
	}
	func_84();
	switch (iParam0)
	{
		case 0:
			func_82("SCLUB_HOME_D", uLocal_74[0]);
			func_86(uLocal_74[0], 0);
			func_71(uLocal_74[0], 1);
			iLocal_72 = 6;
			break;
		
		case 1:
			unk_0x4F93066CECE72793();
			func_66("SCLUB_HOME_A", uLocal_74[0], 0);
			iLocal_72 = 5;
			break;
		
		case 2:
			iLocal_72 = 5;
			break;
		
		case 4:
			func_82("SCLUB_HOME_D3", uLocal_74[0]);
			iLocal_72 = 6;
			break;
		
		case 3:
			if (func_25(iLocal_271[0], 92.5861f, -1282.86f, 28.2548f, 1) < 10f)
			{
				iLocal_72 = 5;
			}
			else
			{
				iLocal_72 = 6;
			}
			break;
	}
}

void func_66(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	MemCopy(&iVar0, {func_70(iParam1)}, 6);
	if (!func_69(sParam0, &iVar0))
	{
		if (!bParam2)
		{
			func_68(sParam0, &iVar0, -1);
		}
		else
		{
			func_67(sParam0, &iVar0);
		}
	}
}

void func_67(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x4FDA9E6EF359F8A9(iParam1);
	unk_0x9E55AC8543FF8836(0, 1, true, -1);
}

void func_68(char* sParam0, int iParam1, int iParam2)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x4FDA9E6EF359F8A9(iParam1);
	unk_0x9E55AC8543FF8836(0, 0, true, iParam2);
}

int func_69(char* sParam0, int iParam1)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	unk_0x4FDA9E6EF359F8A9(iParam1);
	return unk_0x3D94488A86ABB03F(0);
}

struct<4> func_70(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "SCLUB_NM_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

void func_71(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_27(&(Global_106070.f_243[func_74() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
	else
	{
		func_72(&(Global_106070.f_243[func_74() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
}

void func_72(var uParam0, int iParam1)
{
	func_73(uParam0, iParam1);
}

void func_73(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_74()
{
	int iVar0;
	
	iVar0 = func_76();
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
			switch (func_75(-1))
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

int func_75(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
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

int func_76()
{
	func_77();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_77()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_81(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_80(unk_0xA19140A5C42D8715());
			if (func_79(iVar0) && (!func_78(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_79(Global_106070.f_2355.f_539.f_4301))
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

bool func_78(int iParam0)
{
	return Global_36117 == iParam0;
}

bool func_79(int iParam0)
{
	return iParam0 < 3;
}

int func_80(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_81(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_81(int iParam0)
{
	if (func_79(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_82(char* sParam0, int iParam1)
{
	int iVar0;
	
	MemCopy(&iVar0, {func_70(iParam1)}, 6);
	func_83(sParam0, &iVar0, 7500, 1);
}

void func_83(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xD291E4BC830D587A(sParam0);
	unk_0x4FDA9E6EF359F8A9(iParam1);
	unk_0x1D594DA1FE749C88(iParam2, 1);
}

void func_84()
{
	if (unk_0xCE3CB618AFE55EFB(iLocal_277))
	{
		unk_0xE1623437A3194332(&iLocal_277);
	}
	if (unk_0xCE3CB618AFE55EFB(iLocal_276))
	{
		unk_0xE1623437A3194332(&iLocal_276);
	}
	func_85();
}

void func_85()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0xCE3CB618AFE55EFB(uLocal_278[iVar0]))
		{
			unk_0xE1623437A3194332(&(uLocal_278[iVar0]));
		}
		iVar0++;
	}
}

void func_86(int iParam0, int iParam1)
{
	Global_106070.f_243[func_74() /*53*/].f_2[iParam0 /*5*/] = iParam1;
}

int func_87(int iParam0)
{
	return Global_106070.f_243[func_74() /*53*/].f_2[iParam0 /*5*/];
}

void func_88()
{
	func_64();
	func_84();
	switch (iLocal_77)
	{
		case 0:
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				if (unk_0x5D7DFE2058701942(iLocal_271[0], 0))
				{
					if (!func_105("SCLUB_SECLUDED"))
					{
						func_104("SCLUB_SECLUDED");
					}
					if (func_103() && unk_0xEAA5CEF8875FEEED(unk_0xA19140A5C42D8715()) == 0f)
					{
						unk_0x135C61E339DABBAC(1);
						unk_0x6D68030C791111E0(func_98(iLocal_271[0], 0, 0));
						iLocal_77 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (func_91())
			{
				iLocal_77 = 2;
			}
			break;
		
		case 2:
			if (unk_0xF9D4EF1338E38AFB(unk_0xA19140A5C42D8715(), 242628503) != 1)
			{
				func_243();
				if (unk_0x34CEB9721AC6A0A9() > 20 || unk_0x34CEB9721AC6A0A9() < 4)
				{
					bLocal_303 = false;
				}
				unk_0x4DBE174154203AFA(iLocal_45);
				func_89(bLocal_303);
				iLocal_72 = 4;
			}
			break;
	}
}

void func_89(bool bParam0)
{
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_82("SCLUB_HOME_GO", uLocal_74[0]);
			}
			else
			{
				func_90("SCLUB_CLUB_GO", 7500, 1);
			}
			break;
		
		case 8:
		case 9:
			func_90("SCLUB_HOME_GO3", 7500, 1);
			break;
	}
}

void func_90(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xD291E4BC830D587A(sParam0);
	unk_0x1D594DA1FE749C88(iParam1, 1);
}

int func_91()
{
	if (unk_0x39C2D9AB77873F84(func_98(iLocal_271[0], 0, 0)))
	{
		func_92(iLocal_271[0], 0, 1, -1, 1);
		func_92(unk_0xA19140A5C42D8715(), 0, 0, -1, 1);
		return 1;
	}
	return 0;
}

void func_92(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
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
	iLocal_45 = unk_0x06EBD57CD6085DD1();
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1) && func_97(0, 1))
	{
		if (iLocal_45 != 4)
		{
			unk_0x4DBE174154203AFA(4);
		}
	}
	bVar1 = func_96(iVar0);
	sVar2 = func_98(iParam0, 0, 0);
	if (!unk_0x39C2D9AB77873F84(sVar2))
	{
		unk_0x6D68030C791111E0(sVar2);
	}
	else
	{
		unk_0x2F89329397A277BC(&iVar3);
		unk_0x3F01127ECD227890(0, sVar2, func_93(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0, 0, 0, 0);
		unk_0x3F01127ECD227890(0, sVar2, func_93(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x3F01127ECD227890(0, sVar2, func_93(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		unk_0x3F01127ECD227890(0, sVar2, func_93(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x3F01127ECD227890(0, sVar2, func_93(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0, 0, 0, 0);
		unk_0x301F42EEE3C40328(iVar3);
		unk_0xE1072FA2FECBAD96(iParam0, iVar3);
		if (bParam4)
		{
			unk_0x3A95A0A3221D4208(&iVar3);
		}
	}
}

char* func_93(int iParam0, bool bParam1, bool bParam2, bool bParam3)
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
						sVar0 = func_95(18);
					}
					else
					{
						sVar0 = func_95(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_95(8);
				}
				else
				{
					sVar0 = func_95(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_94(18);
				}
				else
				{
					sVar0 = func_94(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_94(8);
			}
			else
			{
				sVar0 = func_94(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_95(19);
					}
					else
					{
						sVar0 = func_95(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_95(9);
				}
				else
				{
					sVar0 = func_95(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_94(19);
				}
				else
				{
					sVar0 = func_94(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_94(9);
			}
			else
			{
				sVar0 = func_94(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_95(20);
					}
					else
					{
						sVar0 = func_95(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_95(10);
				}
				else
				{
					sVar0 = func_95(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_94(20);
				}
				else
				{
					sVar0 = func_94(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_94(10);
			}
			else
			{
				sVar0 = func_94(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_95(21);
					}
					else
					{
						sVar0 = func_95(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_95(11);
				}
				else
				{
					sVar0 = func_95(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_94(21);
				}
				else
				{
					sVar0 = func_94(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_94(11);
			}
			else
			{
				sVar0 = func_94(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_95(22);
					}
					else
					{
						sVar0 = func_95(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_95(12);
				}
				else
				{
					sVar0 = func_95(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_94(22);
				}
				else
				{
					sVar0 = func_94(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_94(12);
			}
			else
			{
				sVar0 = func_94(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_95(3);
				}
				else
				{
					sVar0 = func_95(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_94(3);
			}
			else
			{
				sVar0 = func_94(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_94(int iParam0)
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

char* func_95(int iParam0)
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

int func_96(int iParam0)
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

bool func_97(bool bParam0, bool bParam1)
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

var func_98(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		iVar0 = unk_0xCAEB6CE71A2C7212(iParam0, 1);
		if (unk_0x1095F403F52B42E1(iVar0, 0))
		{
			if (func_96(iVar0))
			{
				if ((!func_97(0, 1) || iParam2) && !bParam1)
				{
					return func_102();
				}
				else
				{
					return func_101();
				}
			}
		}
	}
	if ((!func_97(0, 1) || iParam2) && !bParam1)
	{
		return func_100();
	}
	return func_99();
}

char* func_99()
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_100()
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_101()
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_102()
{
	return "mini@prostitutes@sexlow_veh";
}

int func_103()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	vector3 vVar5;
	var uVar6;
	vector3 vVar7;
	float fVar8;
	int iVar9;
	
	fVar4 = 25f;
	func_63(&vVar5, &uVar6, 0);
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			iVar2 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
		}
		vVar3 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) };
		if (unk_0x5AED11AE1D358697(vVar3, &vVar7, 1077936128, 0))
		{
			fVar8 = vdist(vVar3, vVar7);
			if (fVar8 <= 10f)
			{
				return 0;
			}
		}
		if (vdist(vVar3, vLocal_287) < 20f || vdist(vVar3, vVar5) < 20f)
		{
			return 0;
		}
		if (unk_0xF0AB7FB93B889653(vVar3 - Vector(20f, 20f, 20f), vVar3 + Vector(20f, 20f, 20f)))
		{
			return 0;
		}
		unk_0x00A7785CBA069915(vVar3, fVar4, 1, 1, &iVar0, 0, 0, -1);
		if (!iVar0 == 0)
		{
			if (!unk_0x7112137033807390(iVar0, 0))
			{
				if (unk_0x58DE86018EA47551(iVar0, unk_0xA19140A5C42D8715(), 17))
				{
					return 0;
				}
			}
		}
		else
		{
			iVar1 = unk_0x4C059EBFED753303(vVar3, fVar4, 0, -1);
			if (!iVar1 == 0)
			{
				if (!iVar1 == iVar2)
				{
					if (unk_0x1095F403F52B42E1(iVar1, 0))
					{
						iVar0 = unk_0xB0D49A1F9F054602(iVar1, -1, 0);
						if (!iVar0 == 0)
						{
							return 0;
						}
					}
				}
			}
		}
		iVar9 = unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715());
		if (!iVar9 == 0)
		{
			return 0;
		}
	}
	return 1;
}

void func_104(char* sParam0)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 1, true, -1);
}

int func_105(char* sParam0)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	return unk_0x3D94488A86ABB03F(0);
}

void func_106()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_73 < 12 && iLocal_73 >= 2)
	{
		if (func_201(3000))
		{
			unk_0x9662BE461F9FDF9E(1000);
			iLocal_73 = 12;
		}
	}
	if (!bLocal_69 && iLocal_73 >= 5)
	{
		iVar0 = unk_0x790FE12EE7CA9A03();
		if (unk_0x1095F403F52B42E1(iVar0, 0) && !unk_0x7112137033807390(iVar0, 0))
		{
			if (unk_0x8F474E419F56E48D(iVar0) == joaat("blimp2"))
			{
				bLocal_69 = false;
			}
			else if (unk_0x05ECE2F25303B711(unk_0x790FE12EE7CA9A03()) && uLocal_74[0] == 5)
			{
				bLocal_69 = func_198(&uLocal_68, -865f, 516.3f, 90f, 1, 15f);
			}
			else if (func_197(unk_0x790FE12EE7CA9A03()))
			{
				bLocal_69 = func_198(&uLocal_68, vLocal_292, 1, fLocal_294);
			}
			else
			{
				bLocal_69 = func_198(&uLocal_68, vLocal_287, 1, fLocal_294);
			}
		}
	}
	if (iLocal_73 > 0 && iLocal_73 < 13)
	{
		unk_0x74BF5F6EEF62D5A9();
	}
	switch (iLocal_73)
	{
		case 0:
			unk_0x135C61E339DABBAC(1);
			unk_0x4F93066CECE72793();
			func_84();
			unk_0x61346376C1469A0E("TIME_LAPSE", false, -1);
			func_30(56, 1, 0);
			if (!func_254(uLocal_300, 131072))
			{
				func_27(&uLocal_300, 131072);
			}
			if (!func_254(uLocal_300, 256))
			{
				func_196();
				func_27(&uLocal_300, 256);
			}
			if (!func_254(uLocal_300, 32768))
			{
				unk_0x6D68030C791111E0(func_195());
				func_27(&uLocal_300, 32768);
			}
			if (!func_254(uLocal_300, 256))
			{
				unk_0x6D68030C791111E0(func_194());
				func_27(&uLocal_300, 256);
			}
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				iLocal_307 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
				func_193(unk_0xA19140A5C42D8715(), iLocal_307);
				iLocal_73 = 1;
			}
			else
			{
				func_57();
				func_191(unk_0xA19140A5C42D8715(), vLocal_285);
				func_191(iLocal_271[0], vLocal_286);
				iLocal_73 = 2;
			}
			func_189();
			break;
		
		case 1:
			if (!unk_0x7112137033807390(iLocal_307, 0))
			{
				if (vdist(unk_0xE2BBD32891C18569(iLocal_307, true), vLocal_287) < 2f)
				{
					func_57();
					func_191(unk_0xA19140A5C42D8715(), vLocal_285);
					func_191(iLocal_271[0], vLocal_286);
					unk_0x99D88BBC8B927586();
					iLocal_73 = 2;
				}
				else if (unk_0xFD34717937104F1C() >= 10000)
				{
					iLocal_73 = 13;
				}
			}
			break;
		
		case 2:
			if (!unk_0xD8AE52C8418BED79(iLocal_279[0]))
			{
				unk_0x930701157A4B9374(iLocal_279[0], true);
				unk_0x8E88E73F74A9FF79(true, false, 3000, 1, 0, 0);
				if (!unk_0x7112137033807390(iLocal_307, 0))
				{
					if (unk_0x8F474E419F56E48D(iLocal_307) == joaat("blimp2"))
					{
						unk_0x7C73A424F1117528(iLocal_307, false, 0);
					}
				}
				func_8(&iLocal_252);
				iLocal_73 = 3;
			}
			break;
		
		case 3:
			if (func_188(&iLocal_252) > 1f)
			{
				unk_0xD21CD2A6F93F44A6(iLocal_279[1], iLocal_279[0], 6000, 1, 1);
				func_187(&Local_280, 1, 0, 2000, 1, 1, 0, 1);
				iVar1 = unk_0x34CEB9721AC6A0A9();
				iLocal_297 = iVar1 + 8;
				if (iLocal_297 > 23)
				{
					iLocal_297 = (iLocal_297 - 24);
				}
				Local_280.f_7 = iVar1;
				Local_280.f_8 = iLocal_297;
				func_2(&iLocal_252);
				iLocal_73 = 4;
			}
			break;
		
		case 4:
			if (!unk_0x4EFA8CFA30651DD4(iLocal_279[1]) && unk_0xD8AE52C8418BED79(iLocal_279[1]))
			{
				if (!func_254(uLocal_298, 512))
				{
					if (unk_0xDC5D81351D6A4DDB(iLocal_307) && !unk_0x7112137033807390(iLocal_307, 0))
					{
						unk_0xC53974682AC939A9(iLocal_307, 1);
					}
					func_184(unk_0xA19140A5C42D8715(), func_186());
					unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), func_183());
					func_165();
					func_27(&uLocal_298, 512);
				}
				else if (!func_254(uLocal_298, 2048))
				{
					if (unk_0x7112137033807390(iLocal_271[0], 0))
					{
					}
					if (!func_164() && !unk_0xF59ACE94F067B46D(iLocal_271[0]))
					{
						func_165();
						if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
						{
							unk_0x68995A99EFE15C73(unk_0xA19140A5C42D8715());
							unk_0xE85BD4A26C0DFACA(unk_0xA19140A5C42D8715(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
						}
						func_27(&uLocal_298, 2048);
						func_8(&iLocal_252);
						sLocal_273 = func_163();
						iLocal_73 = 5;
					}
				}
			}
			break;
		
		case 5:
			if (func_188(&iLocal_252) > 1f)
			{
				if (func_138(iLocal_297, 0, sLocal_273, "", &Local_280, (func_188(&iLocal_252) * 0.2f), 0))
				{
					if (!func_164())
					{
						if (unk_0xDC5D81351D6A4DDB(iLocal_307))
						{
							if (unk_0x8F474E419F56E48D(iLocal_307) != joaat("blimp2"))
							{
								unk_0xFDD15D670AD33E10(vLocal_286, 20f, 1, 0, 0, false);
							}
						}
						else
						{
							unk_0xFDD15D670AD33E10(vLocal_286, 20f, 1, 0, 0, false);
						}
						if (unk_0xDC5D81351D6A4DDB(iLocal_271[0]))
						{
							unk_0x7C73A424F1117528(iLocal_271[0], false, 0);
						}
						unk_0xF3523AED1A1355F8(unk_0xA19140A5C42D8715(), 0);
						func_8(&iLocal_252);
						iLocal_73 = 6;
					}
				}
			}
			break;
		
		case 6:
			unk_0xB20B772FD9DE1847(unk_0xA19140A5C42D8715(), joaat("weapon_unarmed"), true);
			if (func_188(&iLocal_252) > 1.5f)
			{
				if (bLocal_69)
				{
					func_136(&uLocal_68);
				}
				func_8(&iLocal_252);
				iLocal_73 = 7;
			}
			break;
		
		case 7:
			if (!unk_0xD8AE52C8418BED79(iLocal_279[2]))
			{
				unk_0x1A81FD78261DCFCD();
				unk_0xB341B5578B9002DF(true);
				unk_0xF24BBF976F1AC2B6(1);
				unk_0xD21CD2A6F93F44A6(iLocal_279[2], iLocal_279[1], 6000, 1, 1);
				func_8(&iLocal_252);
				iLocal_73 = 8;
			}
			break;
		
		case 8:
			if (!func_254(uLocal_300, 262144))
			{
				if (func_188(&iLocal_252) >= 1.25f)
				{
					func_135();
				}
			}
			if (func_188(&iLocal_252) > 6f)
			{
				unk_0x930701157A4B9374(iLocal_279[3], true);
				if (!unk_0x7112137033807390(iLocal_307, 0))
				{
					if (unk_0x8F474E419F56E48D(iLocal_307) == joaat("blimp2"))
					{
						unk_0x7C73A424F1117528(iLocal_307, true, 0);
					}
					unk_0x1F7948851FB36E88(iLocal_307, true, 1);
					unk_0x70B1045E099298C1(iLocal_307, 1000f);
					unk_0xD27FC0157E8C1AD1(iLocal_307, 1000f);
					unk_0x9CBCA0C1A4935577(iLocal_307);
				}
				func_8(&iLocal_252);
				iLocal_73 = 10;
			}
			break;
		
		case 10:
			if (func_188(&iLocal_252) > 2f)
			{
				unk_0xCE2F428A0EEBBE18(0, 0, 3, 0);
				iLocal_73 = 13;
			}
			break;
		
		case 12:
			if (unk_0x71364F510A1CB69F() && !unk_0x607776744A243309())
			{
				if (!func_254(uLocal_300, 262144))
				{
					unk_0xA9EDDD9B48E5790C(unk_0xD4E735F4B6A956AC(), vLocal_289, fLocal_293, false, true, 1);
					func_135();
				}
				if (!unk_0x7112137033807390(iLocal_307, 0))
				{
					if (unk_0x8F474E419F56E48D(iLocal_307) == joaat("blimp2"))
					{
						unk_0x7C73A424F1117528(iLocal_307, true, 0);
					}
				}
				unk_0xB20B772FD9DE1847(unk_0xA19140A5C42D8715(), joaat("weapon_unarmed"), true);
				if (!unk_0x7112137033807390(iLocal_307, 0))
				{
					unk_0x1F7948851FB36E88(iLocal_307, true, 1);
					unk_0x70B1045E099298C1(iLocal_307, 1000f);
					unk_0xD27FC0157E8C1AD1(iLocal_307, 1000f);
					unk_0x9CBCA0C1A4935577(iLocal_307);
				}
				func_8(&iLocal_252);
				iLocal_73 = 13;
			}
			break;
		
		case 13:
			if (!unk_0x607776744A243309() && func_188(&iLocal_252) >= 1f)
			{
				func_13(1, 1, 0);
				unk_0x6259CDB47862A4F3(unk_0xA19140A5C42D8715(), unk_0xF49CB145FAD56CFD(unk_0xA19140A5C42D8715()), 0);
				unk_0x4870A43AD588B216(unk_0xD4E735F4B6A956AC(), 30, 1);
				if (unk_0x934175823EA79DA0(unk_0xA19140A5C42D8715(), func_81(0)))
				{
					func_134();
				}
				unk_0xE724181C8BE2BA29(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), 15f, 1);
				if (!unk_0x7112137033807390(iLocal_307, 0))
				{
					unk_0x1F7948851FB36E88(iLocal_307, true, 1);
					if (unk_0x8F474E419F56E48D(iLocal_307) != joaat("blimp2"))
					{
						unk_0x4299736016AECE26(iLocal_307, vLocal_287, 1, false, 0, 1);
						unk_0x92DDCF53AA47A63D(iLocal_307, fLocal_294);
						if (unk_0x05ECE2F25303B711(iLocal_307) && uLocal_74[0] == 5)
						{
							unk_0x4299736016AECE26(iLocal_307, -865f, 516.3f, 90f, 1, false, 0, 1);
							unk_0x92DDCF53AA47A63D(iLocal_307, 15f);
						}
						else if (func_197(iLocal_307))
						{
							unk_0x4299736016AECE26(iLocal_307, vLocal_292, 1, false, 0, 1);
							unk_0x92DDCF53AA47A63D(iLocal_307, fLocal_295);
						}
						unk_0x99F546A9200EA026(iLocal_307, 1084227584);
					}
				}
				if (!unk_0x71364F510A1CB69F())
				{
					func_187(&Local_280, 0, 0, 2000, 1, 0, 0, 1);
				}
				else
				{
					unk_0xECA32C9B36BC4E3E(8, 0, 0);
					func_132(to_float(8));
					unk_0x70C1F5AA59767FE6(2000);
					unk_0xD87B76260C547F31(0f);
					unk_0xAA32DD4848CF93E0(0f, 1065353216);
					func_187(&Local_280, 0, 0, 2000, 1, 1, 0, 1);
				}
				if (unk_0xDC5D81351D6A4DDB(iLocal_271[0]))
				{
					unk_0x680F17660351F21B(&(iLocal_271[0]));
				}
				if (!func_131(uLocal_74[0], -1))
				{
					if (uLocal_74[0] == 5)
					{
						func_66("SCLUB_PHON_HELP_ALT", uLocal_74[0], 0);
					}
					else
					{
						func_66("SCLUB_PHON_HELP", uLocal_74[0], 0);
					}
					func_117(uLocal_74[0], 1, -1);
					wait(4000);
				}
				func_115(uLocal_74[0]);
				iVar2 = func_114(uLocal_74[0]);
				if (iVar2 <= 2)
				{
					iVar3 = func_113(uLocal_74[0]);
					iVar4 = func_112(iVar2);
					func_107(-384575792, iVar3, iVar4, 3, func_111(), func_110(uLocal_74[0]), 60000, 10000, -1, 0, -1, 0, 1);
				}
				func_38();
			}
			break;
	}
}

int func_107(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<14> Var0;
	
	if (func_52(0))
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 < 0)
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
	if (iParam5 < 3)
	{
		if (unk_0x05EFB6A616B6FADE(iParam4, iParam5))
		{
			return 0;
		}
	}
	if (iParam4 < 1 || iParam4 > 7)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 83 || iParam2 == 83)
	{
		return 0;
	}
	if (Global_106070.f_7660.f_764 < 8)
	{
		Var0 = iParam0;
		Var0.f_3 = func_109(iParam3);
		Var0.f_4 = (unk_0xFD34717937104F1C() + iParam6);
		Var0.f_5 = iParam7;
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam4;
		Var0.f_6 = iParam5;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_13 = iParam12;
		unk_0xFA57C719261AA55D(&(Var0.f_1), 0);
		Global_106070.f_7660.f_651[Global_106070.f_7660.f_764 /*14*/] = { Var0 };
		Global_106070.f_7660.f_764++;
		func_108(0);
		func_108(1);
		func_108(2);
		return 1;
	}
	return 0;
}

void func_108(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_79(iParam0))
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

int func_109(int iParam0)
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

int func_110(int iParam0)
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

int func_111()
{
	func_77();
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

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
	}
	return -1;
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 4:
			return 2;
			break;
		
		case 5:
			return 3;
			break;
		
		case 8:
			return 4;
			break;
		
		case 9:
			return 5;
			break;
	}
	return -1;
}

int func_114(int iParam0)
{
	return Global_106070.f_243[func_74() /*53*/].f_2[iParam0 /*5*/].f_2;
}

void func_115(int iParam0)
{
	if (func_114(iParam0) < 0)
	{
		func_116(iParam0, 0);
	}
	Global_106070.f_243[func_74() /*53*/].f_2[iParam0 /*5*/].f_2++;
}

void func_116(int iParam0, int iParam1)
{
	Global_106070.f_243[func_74() /*53*/].f_2[iParam0 /*5*/].f_2 = iParam1;
}

void func_117(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_74();
	}
	if (func_130(iParam2) == 4)
	{
	}
	bVar0 = Global_106070.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (unk_0x4C9BACA8D249CB13())
		{
			if (!func_129(func_110(iParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_129(func_110(iParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_106070.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_128(iParam0, 0);
			func_125(func_110(iParam0), func_130(iParam2), 1);
			iVar1 = unk_0x22C775856F4633CA(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					unk_0x2BCFB39E86340DAA(&(Global_2097152[func_124() /*12745*/].f_8178.f_1272), iParam0);
					func_121(15, 0);
					break;
			}
			func_120(iVar1);
			func_119(iParam0, iVar1);
			Global_105064.f_15[iParam0] = unk_0xFD34717937104F1C();
		}
	}
	else if (bVar0)
	{
		func_118(func_110(iParam0), func_130(iParam2));
	}
}

void func_118(int iParam0, int iParam1)
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

void func_119(int iParam0, int iParam1)
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

void func_120(int iParam0)
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

void func_121(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_123(iParam0, iParam1))
	{
		iVar0 = func_122();
		Global_2458086[iVar0] = iParam0;
	}
}

int func_122()
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

int func_123(int iParam0, var uParam1)
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

int func_124()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_125(int iParam0, int iParam1, bool bParam2)
{
	Global_3069 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 145)
	{
		func_127();
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
						func_126();
					}
				}
				else
				{
					Global_2993[1 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
					Global_2993[1 /*6*/].f_5 = iParam1;
					func_126();
				}
			}
			else
			{
				Global_2993[1 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
				Global_2993[1 /*6*/].f_5 = iParam1;
				func_126();
			}
		}
	}
}

void func_126()
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

void func_127()
{
	if (func_78(14))
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
		Global_14513 = func_76();
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

void func_128(int iParam0, int iParam1)
{
	Global_106070.f_243[func_74() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_129(int iParam0, int iParam1)
{
	if (Global_106070.f_28022[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0)
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

bool func_131(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_74();
	}
	return Global_106070.f_243[iParam1 /*53*/].f_2[iParam0 /*5*/].f_4;
}

void func_132(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_10(&(Global_106070.f_18075.f_175[iVar0 /*19*/].f_5)))
		{
			func_133(&(Global_106070.f_18075.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_10(&(Global_106070.f_18075.f_362[iVar1 /*3*/])))
		{
			func_133(&(Global_106070.f_18075.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0xE0251BC492F9DF12();
}

void func_133(int iParam0, float fParam1)
{
	if (func_10(iParam0))
	{
		func_9(iParam0, (func_4(iParam0) + fParam1));
	}
}

void func_134()
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

void func_135()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x39C2D9AB77873F84(sLocal_272))
	{
	}
	else
	{
		iVar0 = unk_0x22C775856F4633CA(0, 50000);
		unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
		unk_0x2F89329397A277BC(&iVar1);
		unk_0x956B3CF461C0C1C9(0, vLocal_289, 1f, -1, 0.25f, 0, fLocal_293);
		if (iVar0 < 15000)
		{
			unk_0x3F01127ECD227890(0, sLocal_272, "fidget_rub_hands", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		else if (iVar0 >= 15000 && iVar0 < 35000)
		{
			unk_0x3F01127ECD227890(0, sLocal_272, "fidget_rub_chin", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		else
		{
			unk_0x3F01127ECD227890(0, sLocal_272, "fidget_arm_swing", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		unk_0x301F42EEE3C40328(iVar1);
		unk_0xE1072FA2FECBAD96(unk_0xA19140A5C42D8715(), iVar1);
		unk_0x3A95A0A3221D4208(&iVar1);
		func_27(&uLocal_300, 262144);
	}
}

void func_136(var uParam0)
{
	int iVar0;
	
	iVar0 = *uParam0;
	if (unk_0xDC5D81351D6A4DDB(iVar0))
	{
		if (!func_137(iVar0))
		{
			unk_0xDCFB67537602326F(iVar0, true, 0);
			unk_0x7C73A424F1117528(iVar0, true, 0);
			unk_0xB29E08C7AB729BAD(iVar0, false);
		}
	}
}

int func_137(int iParam0)
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

int func_138(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_162();
			iVar4 = func_162();
			func_161(&iVar4, iParam0);
			func_160(&iVar4, iParam1);
			func_159(&iVar4, 0);
			if (func_157(*uParam4, iVar4))
			{
				func_152(&iVar4, 0, 0, 0, 1, 0, 0);
			}
			func_149(*uParam4, iVar4, &iVar0, &iVar1, &iVar2, &uVar5, &uVar6, &uVar7);
			uParam4->f_11 = ((iVar0 + iVar1 * 60) + (iVar2 + iParam6) * 3600);
			func_132((to_float(uParam4->f_11) / 3600f));
			unk_0xBE2EAB9CDF084E63(0.6f);
			unk_0xF24BBF976F1AC2B6(0);
			unk_0xB341B5578B9002DF(false);
			func_148();
			uParam4->f_10 = unk_0x7A3ECD08D6D1D554();
			unk_0xE11F00B4AC919F45(uParam4->f_10, "TIME_LAPSE_MASTER", 0, true);
			unk_0x8969D02DEDC106D2("TOD_SHIFT_SCENE");
			func_147();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if (fParam5 >= 0.5f)
			{
				if (uParam4->f_3 == 1)
				{
					if (unk_0xFEB6EEC0545AF7AA(sParam2) != 0)
					{
						unk_0x3E3FCB801A0CF08C(sParam2, 1f);
					}
					if (unk_0xFEB6EEC0545AF7AA(sParam3) != 0)
					{
						unk_0x33AC9FBB9379D463();
						unk_0xED840DDE8ACB4375(sParam3, 0);
					}
					uParam4->f_3 = 2;
				}
			}
			if (fParam5 >= 0.99f || fParam5 == -1f)
			{
				iVar4 = *uParam4;
				func_152(&iVar4, uParam4->f_11, 0, 0, 0, 0, 0);
				unk_0xF7B6117C03C77578(func_146(iVar4), func_145(iVar4), func_144(iVar4));
				unk_0x5DE59A67B5F326CF(uParam4->f_10);
				unk_0xE6A25047617E459F("TIME_LAPSE");
				return 1;
			}
			fVar10 = fParam5;
			fVar8 = 0.1f;
			fVar9 = 0.9f;
			fVar11 = func_143(((fVar10 - fVar8) / (fVar9 - fVar8)), 0f, 1f);
			iVar3 = round((IntToFloat(uParam4->f_11) * fVar11));
			iVar4 = *uParam4;
			func_152(&iVar4, iVar3, 0, 0, 0, 0, 0);
			unk_0xF7B6117C03C77578(func_146(iVar4), func_145(iVar4), func_144(iVar4));
			if (func_142(iVar4) != unk_0xC9A0B68BA813CF99())
			{
				unk_0xEF4DD17EE03972CA(func_142(iVar4), func_141(iVar4), func_139(iVar4));
			}
			func_243();
			unk_0x794E43B900906407(6);
			break;
	}
	return 0;
}

int func_139(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_140(unk_0x05EFB6A616B6FADE(iParam0, 31), -1, 1)) + 2011;
}

int func_140(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_141(int iParam0)
{
	return iParam0 & 15;
}

int func_142(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

float func_143(float fParam0, float fParam1, float fParam2)
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

int func_144(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_145(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_146(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

void func_147()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		unk_0xDB2661401914B2FA(Global_106070.f_14113[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

int func_148()
{
	int iVar0;
	
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		return 0;
	}
	if (!unk_0x8A29BBDF4603E52B(unk_0xA19140A5C42D8715()))
	{
		return 0;
	}
	iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
	if (!unk_0x7112137033807390(iVar0, 0))
	{
		return 0;
	}
	unk_0x11D8017AF1DF991E(iVar0, "OFF");
	return 1;
}

void func_149(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_157(iParam0, iParam1))
	{
		iVar0 = func_141(iParam1);
		iVar1 = func_139(iParam0);
		iVar2 = (func_139(iParam0) - func_139(iParam1));
		iVar3 = (func_141(iParam0) - func_141(iParam1));
		iVar4 = (func_142(iParam0) - func_142(iParam1));
		iVar5 = (func_146(iParam0) - func_146(iParam1));
		iVar6 = (func_145(iParam0) - func_145(iParam1));
		iVar7 = (func_144(iParam0) - func_144(iParam1));
	}
	else
	{
		iVar0 = func_141(iParam0);
		iVar1 = func_139(iParam1);
		iVar2 = (func_139(iParam1) - func_139(iParam0));
		iVar3 = (func_141(iParam1) - func_141(iParam0));
		iVar4 = (func_142(iParam1) - func_142(iParam0));
		iVar5 = (func_146(iParam1) - func_146(iParam0));
		iVar6 = (func_145(iParam1) - func_145(iParam0));
		iVar7 = (func_144(iParam1) - func_144(iParam0));
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
		iVar4 = (iVar4 + func_151(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_150(to_float(iVar0 + 1), 0f, 12f));
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

float func_150(float fParam0, float fParam1, float fParam2)
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

int func_151(int iParam0, int iParam1)
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

void func_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_139(*iParam0);
	iVar1 = func_141(*iParam0);
	iVar2 = func_142(*iParam0);
	iVar3 = func_146(*iParam0);
	iVar4 = func_145(*iParam0);
	iVar5 = func_144(*iParam0);
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
	iVar6 = func_151(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_151(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_153(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_153(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_159(uParam0, iParam1);
	func_160(uParam0, iParam2);
	func_161(uParam0, iParam3);
	func_156(uParam0, iParam5);
	func_155(uParam0, iParam4);
	func_154(uParam0, iParam6);
}

void func_154(var uParam0, int iParam1)
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

void func_155(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_141(*uParam0);
	iVar1 = func_139(*uParam0);
	if (iParam1 < 1 || iParam1 > func_151(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_156(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

int func_157(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_158(iParam1) || !func_158(iParam0))
	{
		return 1;
	}
	iVar0 = func_139(iParam0);
	iVar1 = func_139(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_141(iParam0);
	iVar1 = func_141(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_142(iParam0);
	iVar1 = func_142(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_146(iParam0);
	iVar1 = func_146(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_145(iParam0);
	iVar1 = func_145(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	iVar1 = func_144(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_158(int iParam0)
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
	iVar0 = func_144(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_145(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_146(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_139(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_141(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_142(iParam0);
	if (iVar5 < 1 || iVar5 > func_151(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_159(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 66060288);
	*iParam0 = (*iParam0 || shift_left(iParam1, 20));
}

void func_160(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || shift_left(iParam1, 14));
}

void func_161(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15872);
	*iParam0 = (*iParam0 || shift_left(iParam1, 9));
}

int func_162()
{
	var uVar0;
	
	func_159(&uVar0, unk_0xC5B07C33AC7BB174());
	func_160(&uVar0, unk_0x65DA628D62901275());
	func_161(&uVar0, unk_0x34CEB9721AC6A0A9());
	func_155(&uVar0, unk_0xC9A0B68BA813CF99());
	func_156(&uVar0, unk_0x897D202BD69186D5());
	func_154(&uVar0, unk_0x56EBDF0E39D83471());
	return uVar0;
}

char* func_163()
{
	char* sVar0;
	
	switch (uLocal_74[0])
	{
		case 0:
			sVar0 = "CLEARING";
			break;
		
		case 1:
			sVar0 = "OVERCAST";
			break;
		
		case 4:
			sVar0 = "CLOUDS";
			break;
		
		case 5:
			sVar0 = "CLEAR";
			break;
		
		case 8:
			sVar0 = "EXTRASUNNY";
			break;
		
		case 9:
			sVar0 = "RAIN";
			break;
		
		default:
			sVar0 = "EXTRASUNNY";
			break;
	}
	return sVar0;
}

int func_164()
{
	if (Global_15822 != 0 || unk_0x904275961B875DEB())
	{
		return 1;
	}
	return 0;
}

void func_165()
{
	if (!unk_0x7112137033807390(iLocal_271[0], 0))
	{
		if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
		{
			func_181(&uLocal_78, 1, 0, func_182(uLocal_74[0]), 0, 1);
			func_168("SC_SEX", 0, 0, 0);
		}
		else
		{
			func_166(iLocal_271[0], "SEX_ORAL", 10);
		}
	}
}

void func_166(int iParam0, char* sParam1, int iParam2)
{
	unk_0xE85BD4A26C0DFACA(iParam0, sParam1, func_167(iParam2), 1);
}

int func_167(int iParam0)
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

int func_168(char* sParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<6> Var0;
	char[] cVar1[8];
	
	if (func_180())
	{
		StringCopy(&Var0, sParam0, 24);
		if (bParam1)
		{
			func_179(&Var0, bParam2);
		}
		else
		{
			Var0 = { func_178(Var0) };
		}
		if (bParam3)
		{
			cVar1 = "SCAUD";
		}
		else
		{
			cVar1 = "SHAUD";
		}
		if (func_169(&uLocal_78, cVar1, &Var0, 7, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_169(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_177(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_170(sParam2, iParam3, 0);
}

int func_170(char* sParam0, int iParam1, bool bParam2)
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
					func_176();
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
		if (func_175(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_174();
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
				func_127();
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
				if (func_173())
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
			if (func_23())
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
			func_172();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_171();
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
		func_176();
	}
	return 0;
}

void func_171()
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

void func_172()
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

int func_173()
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

void func_174()
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

bool func_175(int iParam0, int iParam1)
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

void func_176()
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

void func_177(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

struct<6> func_178(char[24] cParam0)
{
	int iVar0;
	
	StringConCat(&cParam0, "_", 24);
	iVar0 = uLocal_74[0];
	StringIntConCat(&cParam0, iVar0, 24);
	return cParam0;
}

void func_179(char* sParam0, bool bParam1)
{
	StringConCat(sParam0, "_", 24);
	if (func_76() == 2)
	{
		StringConCat(sParam0, "T", 24);
	}
	else if (func_76() == 0)
	{
		StringConCat(sParam0, "M", 24);
	}
	else if (func_76() == 1)
	{
		StringConCat(sParam0, "F", 24);
	}
	if (bParam1)
	{
		*sParam0 = { func_178(*sParam0) };
	}
}

int func_180()
{
	if ((unk_0x8187CC9EB2D7CFE6() || unk_0x904275961B875DEB()) || Global_15822 != 0)
	{
		return 0;
	}
	return 1;
}

void func_181(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

char* func_182(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Juliet";
			break;
		
		case 1:
			return "Nikki";
			break;
		
		case 2:
			return "Chastity";
			break;
		
		case 3:
			return "Cheetah";
			break;
		
		case 4:
			return "Sapphire";
			break;
		
		case 5:
			return "Infernus";
			break;
		
		case 6:
			return "Fufu";
			break;
		
		case 7:
			return "Peach";
			break;
		
		case 8:
			return "TaxiLiz";
			break;
		
		case 9:
			return "REHH2Hiker";
			break;
	}
	return "Invalid name";
}

float func_183()
{
	switch (uLocal_74[0])
	{
		case 1:
			return 325.6f;
			break;
		
		case 0:
			return 52.89f;
			break;
		
		case 4:
			return 14.5f;
			break;
		
		case 5:
			return 43.85f;
			break;
		
		case 8:
			return 193.5f;
			break;
		
		case 9:
			return 233.2f;
			break;
	}
	return 0f;
}

Vector3 func_184(int iParam0, vector3 vParam1)
{
	var uVar0;
	
	vParam1.z = (vParam1.z + 0.15f);
	if (unk_0x8F7BA8E028ADF980(vParam1, &uVar0, 0, 0))
	{
		vParam1.z = uVar0;
	}
	if (func_185(iParam0))
	{
		unk_0x4299736016AECE26(iParam0, vParam1, 1, false, 0, 1);
	}
	return vParam1;
}

bool func_185(int iParam0)
{
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 0;
	}
	return !unk_0x7112137033807390(iParam0, 0);
}

Vector3 func_186()
{
	switch (uLocal_74[0])
	{
		case 1:
			return 130.7462f, -1896.513f, 22.3246f;
			break;
		
		case 0:
			return -162.4315f, -1635.107f, 32.6529f;
			break;
		
		case 4:
			return -197.6542f, 92.3329f, 68.5846f;
			break;
		
		case 5:
			return -848.9675f, 510.048f, 89.8218f;
			break;
		
		case 8:
			return -28.5266f, -1565.793f, 28.918f;
			break;
		
		case 9:
			return 3315.045f, 5174.08f, 17.6765f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_187(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()), 64);
	}
	if (!unk_0x5CA3186381FC012C())
	{
		unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			unk_0x7D10B65F1B81F403(unk_0xA19140A5C42D8715(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0xCE2F428A0EEBBE18(0, 0, 3, 0);
	}
	else
	{
		unk_0x8E88E73F74A9FF79(bParam1, bParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		unk_0x135C61E339DABBAC(1);
	}
	else
	{
		if (unk_0x37B568B777BC65F9(uParam0->f_4))
		{
			if (unk_0xC3553172354FFB69(uParam0->f_4))
			{
				unk_0x930701157A4B9374(uParam0->f_4, false);
			}
			unk_0x77F0486CE0E598D5(uParam0->f_4, 1);
		}
		if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			unk_0x7C73A424F1117528(unk_0xA19140A5C42D8715(), true, 0);
		}
		iVar0 = unk_0xC409B91AC4749F88();
		if (unk_0xDC5D81351D6A4DDB(iVar0))
		{
			unk_0x7C73A424F1117528(iVar0, true, 0);
		}
		unk_0xE6A25047617E459F("TIME_LAPSE");
		if (unk_0x2F8EAF18929E1E59("TOD_SHIFT_SCENE"))
		{
			unk_0x5DE59A67B5F326CF(uParam0->f_10);
			unk_0xE6A25047617E459F("TIME_LAPSE");
			unk_0x5AD7D03C214BDA88("TOD_SHIFT_SCENE");
		}
	}
	func_15(bParam1, 1, 0, 0, 0);
	func_147();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0xF7B6117C03C77578(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0xF7B6117C03C77578(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (unk_0x71364F510A1CB69F())
		{
			unk_0x70C1F5AA59767FE6(250);
		}
	}
	if (!bParam1)
	{
		if (Global_106070.f_32605.f_4801 != -15)
		{
			Global_106070.f_32605.f_4801 = func_162();
		}
	}
}

float func_188(int iParam0)
{
	if (func_10(iParam0))
	{
		if (func_6(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_5(unk_0x05EFB6A616B6FADE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_189()
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2[4];
	var uVar3[4];
	
	func_190(&vVar1, &vVar2, &uVar3);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x37B568B777BC65F9(iLocal_279[iVar0]))
		{
			iLocal_279[iVar0] = unk_0x74677C414DD7F53C(26379945, vVar1[iVar0 /*3*/], vVar2[iVar0 /*3*/], uVar3[iVar0], 0, 2);
			unk_0xBC1542DDC31676C2(iLocal_279[iVar0], "HAND_SHAKE", 0.3f);
		}
		iVar0++;
	}
	Local_280.f_4 = unk_0x57FC10C74CC15F22("DEFAULT_SPLINE_CAMERA", false);
	unk_0xD07B71F12856EB70(Local_280.f_4, vVar1[0 /*3*/], vVar2[0 /*3*/], 6000, 3, 2);
	unk_0xD07B71F12856EB70(Local_280.f_4, vVar1[1 /*3*/], vVar2[1 /*3*/], 6000, 3, 2);
	unk_0xF62A5A3CB8DB2402(Local_280.f_4, uVar3[0]);
}

void func_190(var uParam0, var uParam1, var uParam2)
{
	switch (uLocal_74[0])
	{
		case 1:
			*(uParam0[0 /*3*/]) = { 140.9085f, -1885.527f, 25.6959f };
			*(uParam1[0 /*3*/]) = { -9.0308f, 0f, 126.3829f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 141.712f, -1884.935f, 30.7241f };
			*(uParam1[1 /*3*/]) = { 4.7025f, 0f, 129.5531f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 139.1899f, -1885.865f, 24.96737f };
			*(uParam1[2 /*3*/]) = { -3.535496f, 0.081819f, 135.1308f };
			(*uParam2)[2] = 50f;
			*(uParam0[3 /*3*/]) = { 133.9669f, -1893.292f, 23.9573f };
			*(uParam1[3 /*3*/]) = { -1.8669f, -0.0329f, -5.5828f };
			(*uParam2)[3] = 50f;
			break;
		
		case 0:
			*(uParam0[0 /*3*/]) = { -186.5408f, -1629.328f, 35.8275f };
			*(uParam1[0 /*3*/]) = { -1.5588f, 0f, -118.8025f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -186.1923f, -1629.505f, 48.7132f };
			*(uParam1[1 /*3*/]) = { -1.2745f, 0f, -116.9616f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -184.9595f, -1632.193f, 36.32303f };
			*(uParam1[2 /*3*/]) = { -3.262451f, 0.073971f, -100.6756f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -164.7078f, -1632.25f, 34.0944f };
			*(uParam1[3 /*3*/]) = { -3.7303f, 0.0222f, 108.1824f };
			(*uParam2)[3] = 40f;
			break;
		
		case 4:
			*(uParam0[0 /*3*/]) = { -208.6886f, 112.8581f, 73.0855f };
			*(uParam1[0 /*3*/]) = { -0.1055f, 0f, -156.0082f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -208.9068f, 113.3747f, 85.2889f };
			*(uParam1[1 /*3*/]) = { 3.8438f, 0f, -157.0767f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -206.2357f, 106.941f, 72.07555f };
			*(uParam1[2 /*3*/]) = { -11.58381f, 0.084975f, -158.9702f };
			(*uParam2)[2] = 45f;
			*(uParam0[3 /*3*/]) = { -197.6886f, 94.7063f, 69.814f };
			*(uParam1[3 /*3*/]) = { 0.5155f, -0.0266f, 48.8652f };
			(*uParam2)[3] = 45f;
			break;
		
		case 5:
			*(uParam0[0 /*3*/]) = { -871.6285f, 520.8466f, 93.1945f };
			*(uParam1[0 /*3*/]) = { -0.1377f, -1.3933f, -105.9309f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -871.5255f, 521.1066f, 104.6356f };
			*(uParam1[1 /*3*/]) = { 3.1118f, -1.3933f, -105.9309f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -866.6436f, 514.6121f, 92.90275f };
			*(uParam1[2 /*3*/]) = { -5.957637f, -1.324997f, -101.9062f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -849.5522f, 514.2322f, 91.0095f };
			*(uParam1[3 /*3*/]) = { -1.626f, -1.3198f, 92.3739f };
			(*uParam2)[3] = 40f;
			break;
		
		case 8:
			*(uParam0[0 /*3*/]) = { -27.698f, -1584.646f, 31.1034f };
			*(uParam1[0 /*3*/]) = { 0.0044f, 0f, -1.9117f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -27.698f, -1584.646f, 40.4849f };
			*(uParam1[1 /*3*/]) = { 7.981f, 0f, -1.9117f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -28.63904f, -1579.74f, 30.82423f };
			*(uParam1[2 /*3*/]) = { -7.527712f, 0.030218f, -14.33051f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -28.6719f, -1568.09f, 29.7492f };
			*(uParam1[3 /*3*/]) = { -1.5414f, 0f, -168.6005f };
			(*uParam2)[3] = 40f;
			break;
		
		case 9:
			*(uParam0[0 /*3*/]) = { 3323.631f, 5148.861f, 20.9592f };
			*(uParam1[0 /*3*/]) = { 1.1547f, 1.0064f, 21.8733f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 3323.844f, 5148.672f, 28.2303f };
			*(uParam1[1 /*3*/]) = { 11.4168f, 1.0064f, 22.8025f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 3328.904f, 5157.818f, 20.5799f };
			*(uParam1[2 /*3*/]) = { -3.634001f, 1.039937f, 30.44809f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { 3315.368f, 5171.771f, 18.9066f };
			*(uParam1[3 /*3*/]) = { -2.8773f, 1.0064f, -103.0585f };
			(*uParam2)[3] = 40f;
			break;
	}
}

void func_191(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		unk_0xF3523AED1A1355F8(iParam0, 1);
		if (unk_0xF9D4EF1338E38AFB(iParam0, 242628503) != 1)
		{
			unk_0x3A95A0A3221D4208(&iLocal_306);
			unk_0x2F89329397A277BC(&iLocal_306);
			if (unk_0x5D7DFE2058701942(iParam0, 0))
			{
				unk_0xCB482EF95FAE4D73(0, 0, 16777216);
			}
			if (iParam0 == unk_0xA19140A5C42D8715())
			{
				fVar0 = vdist(unk_0xE2BBD32891C18569(iParam0, true), vLocal_285);
				fVar1 = vdist(unk_0xE2BBD32891C18569(iParam0, true), vLocal_286);
				if (fVar1 < fVar0)
				{
					unk_0x0177431263151C4E(0, iLocal_271[0], 0);
				}
				else if (!unk_0x429D45A6C6520026(func_192()))
				{
					unk_0xBE77CE5FAB8E1BD3(0, func_192(), 0, 552, -1);
				}
				else
				{
					unk_0x956B3CF461C0C1C9(0, vLocal_285, 1f, -1, 0.25f, 64, 1193033728);
				}
			}
			if (iParam0 != unk_0xA19140A5C42D8715())
			{
				if (!unk_0x429D45A6C6520026(func_192()))
				{
					unk_0xBE77CE5FAB8E1BD3(0, func_192(), 0, 546, -1);
				}
				else
				{
					unk_0x956B3CF461C0C1C9(0, vParam1, 1f, -1, 0.25f, 1, 1193033728);
				}
				if (func_25(iParam0, vParam1, 1) > 5f)
				{
					unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
					unk_0x3F01127ECD227890(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xB3E1967E66494060(0, unk_0x22C775856F4633CA(3000, 6000));
					unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
					unk_0x3F01127ECD227890(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xB3E1967E66494060(0, unk_0x22C775856F4633CA(3000, 6000));
					unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
					unk_0x3F01127ECD227890(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x3F01127ECD227890(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, -1, 0, 0, 0, 0, 0);
				}
			}
			unk_0x301F42EEE3C40328(iLocal_306);
			unk_0xE1072FA2FECBAD96(iParam0, iLocal_306);
		}
	}
}

char* func_192()
{
	char* sVar0;
	
	if (uLocal_74[0] == 1)
	{
		sVar0 = "BC_NIKKI_H_F";
	}
	return sVar0;
}

void func_193(int iParam0, int iParam1)
{
	if (!unk_0x4915F4759304D5CF(iParam0) && !unk_0x7112137033807390(iParam1, 0))
	{
		unk_0xACD687595DC10DD1(iParam0, iParam1, vLocal_287, fLocal_294, 3, 1092616192, 0);
	}
}

char* func_194()
{
	return "mini@strip_club@idles@bouncer@base";
}

char* func_195()
{
	if (func_76() == 0)
	{
		return "facials@p_m_zero@variations@happy";
	}
	else if (func_76() == 1)
	{
		return "facials@p_m_one@variations@happy";
	}
	else if (func_76() == 2)
	{
		return "facials@p_m_two@variations@happy";
	}
	return "facials@p_m_zero@variations@happy";
}

void func_196()
{
	sLocal_272 = "move_p_m_one_idles@generic";
	unk_0x6D68030C791111E0(sLocal_272);
}

int func_197(int iParam0)
{
	if (unk_0xD3C4AB5E628133C1(iParam0, joaat("blimp")))
	{
		return 1;
	}
	else if (unk_0xD3C4AB5E628133C1(iParam0, joaat("cargobob")))
	{
		return 1;
	}
	else if (unk_0xD3C4AB5E628133C1(iParam0, joaat("cargobob2")))
	{
		return 1;
	}
	else if (unk_0xD3C4AB5E628133C1(iParam0, joaat("cargobob3")))
	{
		return 1;
	}
	else if (unk_0xD3C4AB5E628133C1(iParam0, joaat("buzzard")))
	{
		return 1;
	}
	else if (unk_0xD3C4AB5E628133C1(iParam0, joaat("buzzard2")))
	{
		return 1;
	}
	else if (unk_0xD3C4AB5E628133C1(iParam0, joaat("maverick")))
	{
		return 1;
	}
	else if (unk_0xD3C4AB5E628133C1(iParam0, joaat("polmav")))
	{
		return 1;
	}
	else if (unk_0xD3C4AB5E628133C1(iParam0, joaat("annihilator")))
	{
		return 1;
	}
	else if (unk_0xD3C4AB5E628133C1(iParam0, joaat("frogger")))
	{
		return 1;
	}
	else if (unk_0xD3C4AB5E628133C1(iParam0, joaat("frogger2")))
	{
		return 1;
	}
	return 0;
}

int func_198(var uParam0, vector3 vParam1, bool bParam2, float fParam3)
{
	if (func_200(uParam0))
	{
		unk_0x5295DD2937F76AD3(*uParam0);
		if (!func_199(vParam1))
		{
			unk_0x4299736016AECE26(*uParam0, vParam1, 1, false, 0, 1);
			if (bParam2)
			{
				unk_0x92DDCF53AA47A63D(*uParam0, fParam3);
			}
			unk_0x99F546A9200EA026(*uParam0, 1084227584);
		}
		return 1;
	}
	return 0;
}

int func_199(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_200(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0xC409B91AC4749F88();
	if (unk_0xDC5D81351D6A4DDB(iVar0))
	{
		if (!func_137(iVar0))
		{
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && unk_0x10E54C268D1B3FED(iVar0, unk_0xA19140A5C42D8715(), vLocal_63, 0, 1, 0))
			{
				unk_0x5295DD2937F76AD3(iVar0);
				unk_0xDCFB67537602326F(iVar0, false, 0);
				unk_0x7C73A424F1117528(iVar0, false, 0);
				unk_0xB29E08C7AB729BAD(iVar0, true);
				unk_0x1F7948851FB36E88(iVar0, true, 1);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

int func_201(int iParam0)
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
			if (func_202())
			{
				Global_27 = unk_0xFD34717937104F1C();
				return 1;
			}
		}
	}
	return 0;
}

int func_202()
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

void func_203(bool bParam0)
{
	struct<4> Var0;
	float fVar1;
	
	func_64();
	if (unk_0x7112137033807390(iLocal_271[0], 0))
	{
		return;
	}
	unk_0x413F34FCFABEDE4B(vLocal_287 + Vector(0f, 1f, 1f) * Vector(10f, 10f, 10f), vLocal_287 + Vector(0f, -1f, -1f) * Vector(10f, 10f, 10f), false, 1);
	fVar1 = vdist(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), unk_0xE2BBD32891C18569(iLocal_271[0], true));
	if (iLocal_75 != 9)
	{
		if (((fVar1 >= (200f / 2f) && func_180()) && !func_254(uLocal_300, 2)) || func_241(iLocal_271[0], 0))
		{
			if (unk_0xCE3CB618AFE55EFB(iLocal_277))
			{
				unk_0xE1623437A3194332(&iLocal_277);
			}
			if (unk_0xCE3CB618AFE55EFB(iLocal_276))
			{
				unk_0xE1623437A3194332(&iLocal_276);
			}
			func_238(0);
			func_82("SCLUB_HOME_R", uLocal_74[0]);
			iLocal_75 = 9;
		}
	}
	if (unk_0x122A8778D4027A82(unk_0xD4E735F4B6A956AC(), 0))
	{
		if (iLocal_75 != 8)
		{
			if (unk_0xCE3CB618AFE55EFB(iLocal_277))
			{
				unk_0xE1623437A3194332(&iLocal_277);
			}
			if (unk_0xCE3CB618AFE55EFB(iLocal_276))
			{
				unk_0xE1623437A3194332(&iLocal_276);
			}
			iLocal_75 = 8;
		}
	}
	if (func_227(iLocal_271[0], &uLocal_264, &iLocal_261))
	{
		func_65(4);
	}
	if (iLocal_75 <= 1)
	{
		func_246(1);
	}
	switch (iLocal_75)
	{
		case 0:
			iLocal_76 = 0;
			if (func_180())
			{
				if (!func_254(uLocal_300, 1))
				{
					unk_0xB29E08C7AB729BAD(iLocal_271[0], true);
					func_82("SCLUB_HOME_MEET", uLocal_74[0]);
					func_238(0);
					func_27(&uLocal_300, 1);
				}
				iLocal_75 = 1;
			}
			break;
		
		case 1:
			iLocal_76 = 1;
			Var0 = { func_70(uLocal_74[0]) };
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				iLocal_307 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
				iLocal_301 = unk_0x24A1A7BF4ED94B71(iLocal_307);
			}
			if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), unk_0xE2BBD32891C18569(iLocal_271[0], true), 3f, 3f, 3f, false, true, 0) || (unk_0x1095F403F52B42E1(iLocal_307, 0) && func_226(iLocal_307, iLocal_271[0], 1) <= 10f))
			{
				unk_0xB29E08C7AB729BAD(iLocal_271[0], false);
				if (unk_0xDC5D81351D6A4DDB(iLocal_307) && (unk_0xD63FAD81FAF5E0CB(iLocal_307) < 1 || (!bParam0 && !unk_0x425CD7B17352316F(unk_0x8F474E419F56E48D(iLocal_307)))))
				{
					if (!func_69("SCLUB_SMALL_CAR", &Var0))
					{
						func_66("SCLUB_SMALL_CAR", uLocal_74[0], 0);
						func_166(iLocal_271[0], "NEED_A_VEHICLE", 10);
					}
				}
				else
				{
					unk_0x135C61E339DABBAC(1);
					unk_0x9568B1B58F78FF36(iLocal_271[0]);
					func_224();
					if (!func_254(uLocal_300, 2))
					{
						func_27(&uLocal_300, 2);
					}
					func_223();
					func_84();
					func_216(39, 1);
					func_216(40, 1);
					func_216(41, 1);
					func_216(42, 1);
					func_216(43, 1);
					func_216(44, 1);
					iLocal_75 = 2;
				}
			}
			else if (func_69("SCLUB_SMALL_CAR", &Var0))
			{
				unk_0x135C61E339DABBAC(1);
			}
			break;
		
		case 2:
			iLocal_76 = 2;
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				if (unk_0x5D7DFE2058701942(iLocal_271[0], 0))
				{
					iLocal_75 = 3;
				}
			}
			else
			{
				func_166(iLocal_271[0], "NEED_A_VEHICLE", 10);
				iLocal_75 = 3;
			}
			break;
		
		case 3:
			iLocal_76 = 3;
			func_213();
			if (!func_164())
			{
				if (func_180())
				{
					unk_0x68184E06469338F4(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), false, 1);
					unk_0x413F34FCFABEDE4B(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), false, 1);
					unk_0x01AF8CB960828C2B(vLocal_287, 10f, 0, 0, 0, 0, false, 0);
					unk_0x3521B10FB737CE36(vLocal_287, 10f, 0);
					iLocal_284 = unk_0xF66A39BBE7B3C278(vLocal_287 - Vector(35f, 35f, 35f), vLocal_287 + Vector(35f, 35f, 35f), 0, 1, 1, 1);
					func_8(&iLocal_243);
					if (bParam0)
					{
						func_89(1);
						func_212();
					}
					else
					{
						iLocal_72 = 3;
					}
				}
			}
			break;
		
		case 4:
			iLocal_76 = 4;
			func_209(fVar1, vLocal_288);
			func_204();
			if ((func_4(&iLocal_255) > 45f || vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vLocal_291) > (100f * 100f)) && func_25(unk_0xA19140A5C42D8715(), vLocal_288, 1) > 100f)
			{
				if (uLocal_74[0] == 8)
				{
					func_168("SC_WALK", 0, 0, 0);
				}
				else
				{
					func_166(iLocal_271[0], "GENERIC_FUCK_YOU", 10);
				}
				func_65(3);
			}
			else if (func_241(iLocal_271[0], 1))
			{
				if (unk_0xCE3CB618AFE55EFB(iLocal_277))
				{
					unk_0xE1623437A3194332(&iLocal_277);
				}
				if (unk_0xCE3CB618AFE55EFB(iLocal_276))
				{
					unk_0xE1623437A3194332(&iLocal_276);
				}
				func_238(0);
				func_82("SCLUB_HOME_R", uLocal_74[0]);
				iLocal_75 = 9;
			}
			else if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_287, 3f, 3f, 2f, true, true, 2) || unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_286, 5f, 5f, 2f, true, true, 1))
			{
				if (func_35(1, 0, 1))
				{
					iLocal_72 = 1;
				}
			}
			else if (!unk_0x2206F47E5C82D52C(unk_0xA19140A5C42D8715()))
			{
				func_212();
			}
			break;
		
		case 5:
			iLocal_76 = 5;
			func_209(fVar1, vLocal_287);
			func_204();
			func_224();
			if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_287, 1f, 1f, 2f, true, true, 2))
			{
				iLocal_75 = 6;
			}
			else
			{
				if (unk_0x2206F47E5C82D52C(unk_0xA19140A5C42D8715()))
				{
					func_212();
				}
				else
				{
					func_60(vLocal_287);
				}
				if (func_105("SCLUB_HOME_WALK"))
				{
					unk_0x135C61E339DABBAC(1);
				}
			}
			break;
		
		case 6:
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				if (unk_0xDC5D81351D6A4DDB(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)))
				{
					if (func_58(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 3f, 2, 0.5f, 0, 1, 0))
					{
						func_57();
						func_191(iLocal_271[0], vLocal_286);
						if (uLocal_74[0] == 9 || uLocal_74[0] == 8)
						{
							func_168("SC_GO_DOOR", 0, 0, 0);
						}
						else
						{
							func_168("SC_FOLLOWD", 0, 0, 1);
						}
						iLocal_75 = 7;
					}
				}
			}
			else if (unk_0x2206F47E5C82D52C(unk_0xA19140A5C42D8715()))
			{
				unk_0x836A6A722DEA63F1(iLocal_271[0]);
				func_212();
				unk_0x135C61E339DABBAC(1);
			}
			break;
		
		case 7:
			iLocal_76 = 7;
			if ((!func_164() && !unk_0x8187CC9EB2D7CFE6()) && !func_254(uLocal_300, 2048))
			{
				Var0 = { func_70(uLocal_74[0]) };
				func_83("SCLUB_FOLLOW_H", &Var0, 7500, 1);
				func_84();
				func_238(0);
				func_27(&uLocal_300, 2048);
			}
			if ((unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_288, 5f, 5f, 2f, false, true, 1) || unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_286, 5f, 5f, 2f, false, true, 1)) && unk_0x2206F47E5C82D52C(unk_0xA19140A5C42D8715()))
			{
				if (func_35(1, 0, 1))
				{
					iLocal_72 = 1;
				}
			}
			break;
		
		case 8:
			if ((!func_254(uLocal_298, 4096) && !func_164()) && !unk_0xF59ACE94F067B46D(iLocal_271[0]))
			{
				if (iLocal_76 > 1 || vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), unk_0xE2BBD32891C18569(iLocal_271[0], true)) < (3f * 3f))
				{
					func_166(iLocal_271[0], "GENERIC_FRIGHTENED_MED", 10);
					func_27(&uLocal_298, 4096);
				}
			}
			if (!unk_0x122A8778D4027A82(unk_0xD4E735F4B6A956AC(), 0))
			{
				iLocal_75 = iLocal_76;
			}
			break;
		
		case 9:
			if (fVar1 > 200f)
			{
				func_65(1);
			}
			else if (fVar1 <= (200f / 2f) && !func_241(iLocal_271[0], 1))
			{
				unk_0x4F93066CECE72793();
				iLocal_75 = iLocal_76;
				if (unk_0x2206F47E5C82D52C(unk_0xA19140A5C42D8715()))
				{
					func_212();
				}
			}
			break;
	}
}

void func_204()
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!func_254(uLocal_300, 16))
	{
		if (func_205())
		{
			func_27(&uLocal_300, 16);
		}
		else
		{
			return;
		}
	}
	sVar0 = func_98(iLocal_271[0], 0, 0);
	if (!func_254(uLocal_300, 8))
	{
		if (!func_254(uLocal_300, 4))
		{
			if (!func_254(uLocal_298, 256))
			{
				if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
				{
					func_168("SC_BJ", 0, 0, 0);
				}
				func_27(&uLocal_298, 256);
			}
			else
			{
				unk_0x6D68030C791111E0(sVar0);
				func_27(&uLocal_300, 4);
			}
		}
		else if (unk_0x39C2D9AB77873F84(sVar0))
		{
			func_92(iLocal_271[0], 1, 1, -1, 1);
			unk_0xD738221C247C8B71(iLocal_271[0], true);
			func_7(&iLocal_252);
			func_27(&uLocal_300, 8);
		}
	}
	else if (func_254(uLocal_300, 4))
	{
		iVar1 = 0;
		bVar2 = unk_0x411C28019DEA5CEF(iLocal_271[0], sVar0, func_93(4, 1, 1, func_96(iLocal_307)), 3);
		bVar3 = unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715());
		bVar4 = unk_0xF9D4EF1338E38AFB(iLocal_271[0], 242628503) == 7;
		bVar5 = unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0);
		bVar6 = false;
		if (bVar5)
		{
			if (unk_0xDC5D81351D6A4DDB(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)) && !unk_0x7112137033807390(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 0))
			{
				bVar6 = (unk_0xFD2A0C4CDE18D862(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)) && unk_0xEAA5CEF8875FEEED(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)) > 5f);
			}
		}
		if ((((!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) || func_4(&iLocal_252) > 35f) || vdist(vLocal_287, unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true)) < 75f) || bVar3) || bVar6)
		{
			if (!bVar4 && !bVar2)
			{
				unk_0x3F01127ECD227890(iLocal_271[0], sVar0, func_93(4, 1, 1, func_96(iLocal_307)), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			if (bVar3)
			{
				iLocal_302 = 2000;
			}
			iVar1 = 1;
		}
		else if (bVar4)
		{
			iVar1 = 1;
		}
		if (bVar2)
		{
			func_243();
		}
		if ((iVar1 && bVar4) && !bVar2)
		{
			if (!bVar3 && bVar5)
			{
				if (bVar6)
				{
					unk_0x6259CDB47862A4F3(unk_0xA19140A5C42D8715(), (unk_0x24A1A7BF4ED94B71(unk_0xA19140A5C42D8715()) - ceil((IntToFloat(unk_0xF49CB145FAD56CFD(unk_0xA19140A5C42D8715())) * 0.1f))), 0);
					func_166(unk_0xA19140A5C42D8715(), "GENERIC_CURSE_HIGH", 10);
				}
				else
				{
					func_166(unk_0xA19140A5C42D8715(), "SEX_CLIMAX", 10);
				}
				func_27(&uLocal_298, 128);
			}
			unk_0x4DC885EA8D6AF7FC(sVar0);
			func_72(&uLocal_300, 4);
		}
		if (!func_254(uLocal_298, 64))
		{
			if (func_4(&iLocal_252) > 10f)
			{
				func_166(unk_0xA19140A5C42D8715(), "SEX_GENERIC", 10);
				func_166(iLocal_271[0], "SEX_ORAL", 10);
				func_27(&uLocal_298, 64);
			}
		}
		unk_0xCAFB88D6C0B52307();
		func_243();
	}
}

int func_205()
{
	vector3 vVar0;
	var uVar1;
	
	if (!func_180())
	{
		return 0;
	}
	func_63(&vVar0, &uVar1, 0);
	if (((vdist(vLocal_287, unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true)) > (75f * 2f) && vdist(vVar0, unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true)) > (75f / 2f)) && func_114(uLocal_74[0]) > 1) && func_206())
	{
		return 1;
	}
	return 0;
}

int func_206()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		return 0;
	}
	iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
	if (unk_0x1095F403F52B42E1(iVar0, 0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iVar0);
		if (func_208(iVar1, 0) && func_207(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_207(int iParam0)
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

int func_208(int iParam0, bool bParam1)
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

void func_209(float fParam0, vector3 vParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (!func_254(uLocal_298, 262144))
	{
		if (func_211(iLocal_271[0]))
		{
			if (uLocal_74[0] == 8)
			{
				func_168("SC_STEALC", 0, 0, 0);
			}
			else
			{
				func_166(iLocal_271[0], "GENERIC_SHOCKED_MED", 10);
			}
			func_8(&iLocal_246);
			func_27(&uLocal_298, 262144);
		}
	}
	else if (func_4(&iLocal_246) > 10f)
	{
		func_72(&uLocal_298, 262144);
		func_8(&iLocal_246);
	}
	if ((fParam0 > 5f || !func_180()) || func_254(uLocal_300, 4))
	{
		return;
	}
	if (!func_254(uLocal_298, 1) && !func_254(uLocal_298, 128))
	{
		if (vdist(vParam1, unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true)) < 75f)
		{
			if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
			{
				if (func_168("SC_NEAR", 0, 0, 0))
				{
					func_27(&uLocal_298, 1);
				}
			}
			else
			{
				func_27(&uLocal_298, 1);
			}
			unk_0x01AF8CB960828C2B(vLocal_287, 5f, 0, 0, 0, 0, false, 0);
		}
	}
	if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		return;
	}
	iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
	if (!unk_0x1095F403F52B42E1(iVar0, 0))
	{
		if (!func_254(uLocal_298, 16))
		{
			func_166(iLocal_271[0], "NEED_A_VEHICLE", 10);
			func_27(&uLocal_298, 16);
			func_8(&iLocal_243);
		}
		if (!func_254(uLocal_298, 4))
		{
			func_72(&uLocal_298, 4);
		}
		if (!func_254(uLocal_298, 8))
		{
			func_72(&uLocal_298, 8);
		}
	}
	else
	{
		fVar1 = unk_0xEAA5CEF8875FEEED(iVar0);
		fVar2 = unk_0xC3B6F3872400A86D(iVar0);
		if (fVar1 < (fVar2 * 0.9f) || fVar1 > (fVar2 * 0.1f))
		{
			func_8(&iLocal_249);
		}
		if (!func_254(uLocal_298, 4))
		{
			if (func_4(&iLocal_243) > 15f && func_4(&iLocal_249) > 5f)
			{
				func_166(iLocal_271[0], "DRIVEN_FAST", 10);
				func_27(&uLocal_298, 4);
				func_8(&iLocal_243);
			}
		}
		else if (func_4(&iLocal_243) < 5f)
		{
			func_72(&uLocal_298, 4);
			func_8(&iLocal_243);
		}
		if (!func_254(uLocal_298, 8))
		{
			if (func_4(&iLocal_243) > 15f && func_4(&iLocal_249) > 5f)
			{
				func_166(iLocal_271[0], "DRIVEN_SLOW", 10);
				func_27(&uLocal_298, 4);
				func_8(&iLocal_243);
			}
		}
		else if (func_4(&iLocal_243) < 5f)
		{
			func_72(&uLocal_298, 8);
			func_8(&iLocal_243);
		}
		if (!func_254(uLocal_298, 131072))
		{
			if (func_210(iLocal_271[0], &iLocal_301))
			{
				if (func_4(&iLocal_246) > 5f)
				{
					func_166(iLocal_271[0], "CRASH_GENERIC_DRIVEN", 10);
					func_27(&uLocal_298, 131072);
					func_8(&iLocal_243);
				}
			}
		}
		else if (func_4(&iLocal_246) > 5f)
		{
			func_72(&uLocal_298, 131072);
			func_8(&iLocal_246);
		}
		if (!func_254(uLocal_298, 65536))
		{
			if (func_4(&iLocal_243) > 30f || (func_4(&iLocal_243) > 10f && !func_254(uLocal_298, 32)))
			{
				func_166(iLocal_271[0], "BOOTY_FLIRT", 10);
				func_27(&uLocal_298, 32);
				func_27(&uLocal_298, 524288);
				func_8(&iLocal_243);
			}
			else if (func_254(uLocal_298, 524288))
			{
				if (!unk_0xF59ACE94F067B46D(iLocal_271[0]) && func_4(&iLocal_243) > 4f)
				{
					func_166(unk_0xA19140A5C42D8715(), "BOOTY_FLIRT_RESP", 10);
					func_72(&uLocal_298, 524288);
				}
			}
		}
	}
}

int func_210(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
	if (unk_0x1095F403F52B42E1(iVar0, 0))
	{
		if (unk_0xB10F7FE89663CB5B(iParam0, iVar0))
		{
			if (unk_0xFD2A0C4CDE18D862(iVar0))
			{
				iVar1 = unk_0x24A1A7BF4ED94B71(iVar0);
				iVar2 = (*iParam1 - iVar1);
				*iParam1 = iVar1;
				unk_0xDCB46BFC2265476A(iVar0);
				if (iVar2 > 10)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_211(int iParam0)
{
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		if (unk_0x5EC525CDAB7A21A8(108, unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), 10f) && unk_0x581D3C560D601491(iParam0, unk_0xA19140A5C42D8715()))
		{
			return 1;
		}
	}
	return 0;
}

void func_212()
{
	func_85();
	func_8(&iLocal_243);
	if (unk_0x2206F47E5C82D52C(unk_0xA19140A5C42D8715()))
	{
		if (unk_0xCE3CB618AFE55EFB(iLocal_276))
		{
			unk_0xE1623437A3194332(&iLocal_276);
		}
		if (!unk_0xCE3CB618AFE55EFB(iLocal_277))
		{
			iLocal_277 = func_61(vLocal_288, 0);
		}
		func_8(&iLocal_255);
		vLocal_291 = { unk_0xE2BBD32891C18569(iLocal_271[0], true) };
		iLocal_75 = 4;
	}
	else
	{
		func_8(&iLocal_246);
		func_60(vLocal_287);
		iLocal_75 = 5;
	}
}

void func_213()
{
	if (!func_254(uLocal_298, 1024))
	{
		if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0) && unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			if (func_214(uLocal_74[0]))
			{
				if (!func_164())
				{
					func_166(iLocal_271[0], "NICE_CAR", 10);
					func_27(&uLocal_298, 1024);
				}
			}
		}
	}
}

int func_214(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
	if (unk_0x1095F403F52B42E1(iVar0, 0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iVar0);
		if (func_215(iParam0, iVar1))
		{
			return 1;
		}
	}
	return 0;
}

int func_215(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("manana"):
		case joaat("tornado"):
		case joaat("tornado3"):
		case joaat("tornado4"):
		case joaat("ztype"):
		case joaat("regina"):
			if (iParam0 == 0)
			{
				return 1;
			}
			break;
		
		case joaat("blista"):
		case joaat("surge"):
		case joaat("dilettante"):
		case joaat("penumbra"):
		case joaat("asterope"):
			if (iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("dominator"):
		case joaat("gauntlet"):
		case joaat("phoenix"):
		case joaat("sabregt"):
		case joaat("bullet"):
		case joaat("banshee"):
		case joaat("peyote"):
		case joaat("buffalo"):
		case joaat("buffalo2"):
			if (iParam0 == 2)
			{
				return 1;
			}
			break;
		
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("jb700"):
		case joaat("stingergt"):
		case joaat("monroe"):
		case joaat("comet2"):
		case joaat("oracle"):
		case joaat("oracle2"):
		case joaat("intruder"):
		case joaat("jackal"):
		case joaat("exemplar"):
		case joaat("felon"):
		case joaat("superd"):
		case joaat("infernus"):
		case joaat("entityxf"):
		case joaat("adder"):
		case joaat("vacca"):
			if (iParam0 == 3 || iParam0 == 5)
			{
				return 1;
			}
			break;
		
		case joaat("baller"):
		case joaat("bison"):
		case joaat("dubsta"):
		case joaat("granger"):
		case joaat("patriot"):
		case joaat("baller2"):
		case joaat("bjxl"):
		case joaat("cavalcade"):
		case joaat("cavalcade2"):
		case joaat("gresley"):
		case joaat("landstalker"):
		case joaat("mesa"):
		case joaat("rancherxl"):
		case joaat("sandking"):
		case joaat("rebel"):
		case joaat("stretch"):
		case joaat("romero"):
		case joaat("coach"):
		case joaat("bus"):
			if (iParam0 == 4 || iParam0 == 7)
			{
				return 1;
			}
			break;
		
		case joaat("surano"):
		case joaat("rapidgt2"):
		case joaat("ninef2"):
		case joaat("zion2"):
		case joaat("tornado2"):
		case joaat("sentinel2"):
		case joaat("issi2"):
		case joaat("felon2"):
			if (iParam0 == 6 || iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("vader"):
		case joaat("akuma"):
		case joaat("bagger"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("double"):
		case joaat("hexer"):
		case joaat("nemesis"):
		case joaat("ruffian"):
			if (iParam0 == 8)
			{
				return 1;
			}
			break;
		
		case joaat("fbi"):
		case joaat("taxi"):
		case joaat("pranger"):
		case joaat("ambulance"):
		case joaat("police3"):
			if (iParam0 == 9)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_216(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_222(iParam0, 2, 1))
		{
			func_221(iParam0, 2, 1);
		}
	}
	else if (func_222(iParam0, 2, 1))
	{
		func_217(iParam0, 2, 1);
	}
}

void func_217(int iParam0, int iParam1, bool bParam2)
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
		if (func_53() == 0)
		{
			iVar0 = func_219(func_220(iParam0), -1, 0);
			unk_0xFA57C719261AA55D(&iVar0, iParam1);
			func_218(func_220(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_106070.f_668[iParam0]), iParam1);
	}
}

void func_218(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_75(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
}

int func_219(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_75(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_220(int iParam0)
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

void func_221(int iParam0, int iParam1, bool bParam2)
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
		if (func_53() == 0)
		{
			iVar0 = func_219(func_220(iParam0), -1, 0);
			unk_0x2BCFB39E86340DAA(&iVar0, iParam1);
			func_218(func_220(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x2BCFB39E86340DAA(&(Global_106070.f_668[iParam0]), iParam1);
	}
}

int func_222(int iParam0, int iParam1, bool bParam2)
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
		if (func_53() == 0)
		{
			return unk_0x05EFB6A616B6FADE(func_219(func_220(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x05EFB6A616B6FADE(Global_106070.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_223()
{
	if (uLocal_74[0] == 8)
	{
		func_168("SC_GREET", 0, 0, 0);
	}
	else
	{
		func_166(iLocal_271[0], "GENERIC_HI_FLIRTY", 10);
	}
}

void func_224()
{
	if (!unk_0x749F5228DEB730FF(iLocal_271[0]) && vdist(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), unk_0xE2BBD32891C18569(iLocal_271[0], true)) < 10f)
	{
		unk_0x9854E4DB9C72017F(iLocal_271[0], func_225());
		unk_0x9EA5DDDDB1899B3B(iLocal_271[0], 0);
	}
}

int func_225()
{
	return unk_0x64C831B843E08AC9(unk_0xA6580F898F4E801C());
}

float func_226(int iParam0, int iParam1, bool bParam2)
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

int func_227(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	
	if (!func_10(iParam2))
	{
		func_7(iParam2);
	}
	if (func_4(iParam2) > 3f)
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			iVar1 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
		}
		if (func_230(iParam0, iVar1, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_228(&uVar0);
			if (unk_0xDC5D81351D6A4DDB(iParam0))
			{
				if (!unk_0x7112137033807390(iParam0, 0))
				{
					if (!unk_0x164FCCE36A36BD28(iLocal_70))
					{
						unk_0x94E87D83163B4BEB("BootyCall", &iLocal_70);
					}
					unk_0x80E7C4A78224C8F9(2, iLocal_70, 1862763509);
					unk_0x80E7C4A78224C8F9(2, 1862763509, iLocal_70);
					unk_0xDFA901280292A2FB(iParam0, iLocal_70);
					unk_0x33B5487515BD13D5(iParam0, unk_0xA19140A5C42D8715(), 500f, -1, 0, 0);
				}
			}
			func_8(iParam2);
			return 1;
		}
	}
	return 0;
}

void func_228(var uParam0)
{
	switch (*uParam0)
	{
		case 1:
		case 4:
		case 16:
			func_229(1);
			break;
		
		case 2:
			break;
	}
}

void func_229(bool bParam0)
{
	Global_105064 = 0;
	Global_105064.f_1 = -1;
	Global_105064.f_2 = -1;
	if (bParam0)
	{
		func_120(-1);
	}
}

int func_230(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xA19140A5C42D8715();
	if (!unk_0x7112137033807390(iVar0, 0) && !unk_0x7112137033807390(iParam0, 0))
	{
		if (!func_254(*uParam2, 1))
		{
			if (func_237(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_254(*uParam2, 2))
		{
			if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_254(*uParam2, 4))
		{
			if (func_235(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_254(*uParam2, 8))
		{
			if (func_234(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_254(*uParam2, 128);
		if (bParam4)
		{
			if (func_231(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_254(*uParam2, 16))
		{
			if (func_231(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
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

int func_231(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_59)
		{
			iLocal_60 = unk_0x24A1A7BF4ED94B71(iParam0);
			bLocal_59 = true;
		}
		iLocal_61 = unk_0x24A1A7BF4ED94B71(iParam0);
		iLocal_62 = (iLocal_60 - iLocal_61);
		iVar0 = unk_0xC409B91AC4749F88();
		if (!unk_0x7112137033807390(iVar0, 0))
		{
			if (unk_0xDEAEC99031DCB92A(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_59)
		{
			if (unk_0xDEAEC99031DCB92A(iParam0, unk_0xA19140A5C42D8715(), 1))
			{
				if (IntToFloat(iLocal_62) > 100f)
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
	if (func_233(unk_0xA19140A5C42D8715(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x685AE6AF34B35D3B(iParam0) && func_232(iParam0, 1) < 1.5f)
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

float func_232(int iParam0, bool bParam1)
{
	return func_226(unk_0xEE978C39384D834F(unk_0xA6580F898F4E801C()), iParam0, bParam1);
}

int func_233(int iParam0, int iParam1)
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

int func_234(int iParam0, int iParam1, var uParam2)
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

int func_235(int iParam0, int iParam1, var uParam2, bool bParam3)
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
			if (unk_0x1CD6AC2CF787DFCB(iParam0) || func_236(iVar1))
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

int func_236(int iParam0)
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
						if (func_226(unk_0xA19140A5C42D8715(), iParam0, 1) < 40f)
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

int func_237(int iParam0, var uParam1)
{
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		if (unk_0x852B8F739A2072BE(unk_0xA19140A5C42D8715(), 6))
		{
			if (unk_0x669ABFB25D991447(unk_0xD4E735F4B6A956AC(), iParam0) || unk_0x7591AFB11E7EDDA0(unk_0xD4E735F4B6A956AC(), iParam0))
			{
				if (unk_0xC42DE41AEED00E7B(iParam0, unk_0xA19140A5C42D8715(), 90f))
				{
					if (func_232(iParam0, 1) < uParam1->f_2)
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

void func_238(int iParam0)
{
	struct<4> Var0;
	
	if (unk_0xCE3CB618AFE55EFB(uLocal_278[iParam0]))
	{
		unk_0xE1623437A3194332(&(uLocal_278[iParam0]));
	}
	uLocal_278[iParam0] = func_239(iLocal_271[iParam0], 0, 145);
	Var0 = { func_70(uLocal_74[iParam0]) };
	unk_0xC4F12E446CCE89F5(uLocal_278[iParam0], &Var0);
}

int func_239(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_240(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xCE3CB618AFE55EFB(iVar0)) && unk_0x445EC9E7EACB710E(&(Global_106070.f_28022[iParam2 /*29*/].f_3)))
	{
		unk_0xC4F12E446CCE89F5(iVar0, &(Global_106070.f_28022[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_240(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x6A15DD6A863D5E27(iParam0);
	if (unk_0xFAC06EE780B57279(iParam0))
	{
		unk_0x575CF00E129E0CE1(iVar0, func_62(unk_0x4C9BACA8D249CB13(), 1f, 1f));
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
		unk_0x575CF00E129E0CE1(iVar0, func_62(unk_0x4C9BACA8D249CB13(), 0.7f, 0.7f));
		unk_0xF46EDCACB3804F87(iVar0, bParam1);
	}
	else if (unk_0x92D42293DA8F9805(iParam0))
	{
		unk_0x575CF00E129E0CE1(iVar0, func_62(unk_0x4C9BACA8D249CB13(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_241(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	float fVar3;
	
	vVar0 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) };
	vVar1 = { unk_0xE2BBD32891C18569(iParam0, true) };
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		iVar2 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
		if (unk_0x0575FD6A26D0F7B9(iParam0) == func_225())
		{
			if (unk_0x1095F403F52B42E1(iVar2, 0))
			{
				if (!unk_0xE0FD180CD24C0B67(iParam0, iVar2, 0) && vdist(vVar0, vVar1) > 10f)
				{
					return 1;
				}
			}
		}
	}
	if (iParam1 && func_254(uLocal_300, 2))
	{
		fVar3 = unk_0x69C0BB7D03EE045D((vVar0.z - vVar1.z));
		if (fVar3 > 8f)
		{
			return 1;
		}
	}
	return 0;
}

void func_242()
{
	if (!unk_0x7112137033807390(iLocal_271[0], 0))
	{
		if (!unk_0xE6F861B0A4D50CE0())
		{
			func_184(iLocal_271[0], unk_0x2F230B37E9FFF23F(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), unk_0x552C823E1D2A019C(unk_0xA19140A5C42D8715()), 0f, 2f, 0f));
			iLocal_72 = 1;
			iLocal_73 = 0;
		}
	}
}

void func_243()
{
	unk_0x906EA681A50D5E9C();
	func_244();
}

void func_244()
{
	Global_17228.f_134 = 1;
}

int func_245(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_01");
		}
		else
		{
			return joaat("s_f_y_stripper_01");
		}
	}
	else if (iParam0 == 1)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_02");
		}
		else
		{
			return joaat("s_f_y_stripper_02");
		}
	}
	return 0;
}

void func_246(bool bParam0)
{
	struct<8> Var0;
	
	if (!func_158(iLocal_71))
	{
		iLocal_71 = func_162();
		func_152(&iLocal_71, 0, 0, unk_0x22C775856F4633CA(5, 7), 0, 0, 0);
	}
	else if (bParam0)
	{
		if (!func_254(uLocal_300, 512))
		{
			if (func_253(iLocal_71) && unk_0xCDDABFAF231CF3DD(iLocal_271[0]))
			{
				if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
				{
					StringCopy(&Var0, "SC_CANCEL_", 64);
					StringIntConCat(&Var0, uLocal_74[0], 64);
					func_181(&uLocal_78, 1, 0, func_182(uLocal_74[0]), 0, 1);
					func_252(&uLocal_78, func_110(uLocal_74[0]), "SHAUD", &Var0, 7, 0, 0, 1);
				}
				else
				{
					func_250();
				}
				func_249(iLocal_271[0]);
				func_27(&uLocal_300, 512);
			}
		}
		else if (func_248())
		{
			func_72(&uLocal_300, 512);
		}
		else if ((!func_164() && func_247()) && !func_248())
		{
			func_229(1);
			func_65(2);
		}
	}
}

int func_247()
{
	if (Global_15822 == 0)
	{
		return 1;
	}
	return 0;
}

int func_248()
{
	if (Global_15871 == 1 || Global_16838 == 1)
	{
		return 1;
	}
	return 0;
}

void func_249(int iParam0)
{
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		unk_0xF3523AED1A1355F8(iParam0, 1);
		if (unk_0xF9D4EF1338E38AFB(iParam0, 242628503) != 1)
		{
			unk_0x3A95A0A3221D4208(&iLocal_306);
			unk_0x2F89329397A277BC(&iLocal_306);
			unk_0x913393C0B05EDF6C(0, 8000);
			unk_0x956B3CF461C0C1C9(0, vLocal_286, 1.5f, -1, 0.25f, 0, 1193033728);
			unk_0x301F42EEE3C40328(iLocal_306);
			unk_0xE1072FA2FECBAD96(iParam0, iLocal_306);
		}
	}
}

void func_250()
{
	int iVar0;
	
	if (func_251())
	{
		return;
	}
	iVar0 = func_113(uLocal_74[0]);
	func_107(-384575792, iVar0, 6, 3, func_111(), func_110(uLocal_74[0]), 0, 10000, -1, 0, -1, 0, 1);
}

int func_251()
{
	if (func_53() == 0)
	{
		return 1;
	}
	return 0;
}

int func_252(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_177(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_170(sParam3, iParam4, bParam7);
}

bool func_253(int iParam0)
{
	return func_157(func_162(), iParam0);
}

bool func_254(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_255(var uParam0, bool bParam1)
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	char cVar3[64];
	struct<16> Var4;
	struct<8> Var5;
	
	func_283();
	func_63(&vVar0, &fVar1, bParam1);
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		if (fLocal_296 == -1f)
		{
			fLocal_296 = vdist(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vVar0);
		}
		if (iLocal_299 == -1)
		{
			iLocal_299 = uParam0->f_3;
		}
		if (!func_254(uLocal_300, 32))
		{
			func_279(&uLocal_274, func_281((*uParam0)[0], 0));
			func_278(&uLocal_274);
			func_27(&uLocal_300, 32);
			unk_0x6D68030C791111E0("mini@strip_club@idles@stripper");
			unk_0x6D68030C791111E0("gestures@f@standing@casual");
			func_277();
			return 0;
		}
		else if ((!func_276(&uLocal_274) || !unk_0x39C2D9AB77873F84("mini@strip_club@idles@stripper")) || !func_275())
		{
			return 0;
		}
		if (bLocal_304)
		{
			if (!unk_0x94D82D856BD4DE54(1))
			{
				return 0;
			}
		}
		if (!func_254(uLocal_300, 1024))
		{
			uLocal_74[0] = (*uParam0)[0];
			iLocal_271[0] = unk_0x35C6E06B120EB2E3(26, func_281((*uParam0)[0], 0), vVar0, fVar1, 1, true);
			func_269(iLocal_271[0], uLocal_74[0], 0);
			unk_0x1F4E5EFBFE503FB3(iLocal_271[iVar2], true);
			unk_0xD738221C247C8B71(iLocal_271[0], true);
			unk_0x80B6201B269FC581(iLocal_271[0], true);
			func_265(iLocal_271[0]);
			unk_0x3F01127ECD227890(iLocal_271[0], "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -1.5f, -1, 1, 0, 0, 0, 0);
			unk_0x22DD1D053CFF9707(iLocal_271[iVar2], unk_0xA19140A5C42D8715(), -1, 2048, 4);
			unk_0x9EA5DDDDB1899B3B(iLocal_271[0], 0);
			unk_0x4FE3554969185993(iLocal_271[0], func_182((*uParam0)[0]));
			func_181(&uLocal_78, 1, iLocal_271[0], func_182((*uParam0)[0]), 0, 1);
			func_27(&uLocal_300, 1024);
		}
		if (vdist(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vVar0) > 100f)
		{
			if (func_180())
			{
				if (!func_254(uLocal_300, 1))
				{
					func_264(bParam1);
					func_238(0);
					func_27(&uLocal_300, 1);
				}
			}
			if (!func_254(uLocal_300, 64) && !func_254(uLocal_300, 512))
			{
				if (func_263(func_110((*uParam0)[0])))
				{
					StringCopy(&cVar3, "BC_PLYRC_", 64);
					if (func_76() == 2)
					{
						func_181(&uLocal_78, 0, unk_0xA19140A5C42D8715(), "TREVOR", 0, 1);
						StringConCat(&cVar3, "T", 64);
					}
					else if (func_76() == 0)
					{
						func_181(&uLocal_78, 0, unk_0xA19140A5C42D8715(), "MICHAEL", 0, 1);
						StringConCat(&cVar3, "M", 64);
					}
					else if (func_76() == 1)
					{
						func_181(&uLocal_78, 0, unk_0xA19140A5C42D8715(), "FRANKLIN", 0, 1);
						StringConCat(&cVar3, "F", 64);
					}
					func_181(&uLocal_78, 3, 0, func_182((*uParam0)[0]), 0, 1);
					Var4 = { func_262() };
					func_257(&uLocal_78, func_110((*uParam0)[0]), "BCAUD", &cVar3, &cVar3, &Var4, &Var4, 12, 1, 0, 0, 0);
					func_27(&uLocal_300, 64);
				}
				if (func_158(iLocal_71))
				{
					if (func_253(iLocal_71))
					{
						if ((*uParam0)[0] == 8 || (*uParam0)[0] == 9)
						{
							StringCopy(&Var5, "SC_CANCEL_", 64);
							StringIntConCat(&Var5, (*uParam0)[0], 64);
							func_181(&uLocal_78, 1, 0, func_182((*uParam0)[0]), 0, 1);
							func_252(&uLocal_78, func_110((*uParam0)[0]), "SHAUD", &Var5, 12, 0, 0, 1);
						}
						else
						{
							func_250();
						}
						func_27(&uLocal_300, 512);
					}
				}
			}
			else if (func_248())
			{
				func_72(&uLocal_300, 64);
				func_72(&uLocal_300, 512);
			}
			else if ((!func_164() && func_247()) && !func_248())
			{
				func_256((*uParam0)[0]);
				func_229(1);
				func_65(2);
			}
			if (!func_254(uLocal_300, 128))
			{
				if (!func_33(0))
				{
					func_66("SCLUB_HOME_C_H", uLocal_74[0], 0);
					func_27(&uLocal_300, 128);
				}
			}
			if (vdist(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vVar0) > (fLocal_296 + (200f * 3f)))
			{
				func_65(1);
			}
			else if (vdist(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vVar0) < fLocal_296)
			{
				fLocal_296 = vdist(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vVar0);
			}
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (func_76() == 2)
	{
		func_181(&uLocal_78, 0, unk_0xA19140A5C42D8715(), "TREVOR", 0, 1);
	}
	else if (func_76() == 0)
	{
		func_181(&uLocal_78, 0, unk_0xA19140A5C42D8715(), "MICHAEL", 0, 1);
	}
	else if (func_76() == 1)
	{
		func_181(&uLocal_78, 0, unk_0xA19140A5C42D8715(), "FRANKLIN", 0, 1);
	}
	return 1;
}

void func_256(int iParam0)
{
	if (Global_106070.f_243[func_74() /*53*/].f_2[iParam0 /*5*/].f_1 < 0)
	{
		Global_106070.f_243[func_74() /*53*/].f_2[iParam0 /*5*/].f_1 = 0;
	}
	Global_106070.f_243[func_74() /*53*/].f_2[iParam0 /*5*/].f_1++;
}

int func_257(var uParam0, int iParam1, char* sParam2, char[4] cParam3, char[4] cParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	
	func_177(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_261();
	if (iParam8 == 1)
	{
		Global_15834 = 1;
	}
	else
	{
		Global_15834 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	func_259(2, &uVar0, &uVar1, cParam3, cParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_258(&uVar0, &uVar1, iParam7, bParam11);
}

int func_258(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_15823 = 0;
	if (Global_15822 == 0 || Global_15824 == 2)
	{
		if (Global_15822 != 0)
		{
			if (iParam2 > Global_15824)
			{
				if (bParam3 == 0)
				{
					unk_0xA8B97F91CBDE376C(false);
					Global_14513.f_1 = 3;
					Global_15822 = 0;
					Global_15823 = 1;
					Global_15875 = 0;
					Global_15818 = 0;
					Global_15819 = 0;
				}
				else
				{
					func_176();
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
		if (func_175(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_174();
		Global_15111 = { Global_15276 };
		Global_15828 = Global_15829;
		Global_15835 = Global_15836;
		Global_2621442 = Global_2621441;
		Global_15837 = { Global_15853 };
		Global_15830 = Global_15831;
		Global_16812 = Global_16813;
		Global_16820 = { Global_16826 };
		Global_16818 = Global_16819;
		Global_16814 = Global_16815;
		Global_16816 = Global_16817;
		Global_15441.f_368 = Global_16809;
		Global_15441.f_369 = Global_16810;
		Global_15441.f_370 = Global_16811;
		Global_15818 = Global_15819;
		Global_15820 = Global_15821;
		if (Global_16080 == 0)
		{
			Global_15976[0 /*6*/] = { Global_16002[0 /*6*/] };
			Global_15976[1 /*6*/] = { Global_16002[1 /*6*/] };
			Global_16028[0 /*6*/] = { Global_16054[0 /*6*/] };
			Global_16028[1 /*6*/] = { Global_16054[1 /*6*/] };
			Global_15989[0 /*6*/] = { Global_16015[0 /*6*/] };
			Global_15989[1 /*6*/] = { Global_16015[1 /*6*/] };
			Global_16041[0 /*6*/] = { Global_16067[0 /*6*/] };
			Global_16041[1 /*6*/] = { Global_16067[1 /*6*/] };
		}
		if (Global_15828)
		{
			unk_0xFA57C719261AA55D(&Global_2383, 20);
			unk_0xFA57C719261AA55D(&Global_2384, 17);
			unk_0xFA57C719261AA55D(&Global_2385, 0);
			if (bParam3)
			{
				func_127();
				if (Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_173())
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
					if (Global_16080 == 0)
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
			}
			if (func_23())
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
			}
			func_172();
			Global_15832 = bParam3;
		}
		Global_15824 = iParam2;
		if (Global_15818 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15818)
			{
				StringCopy(&(Global_15441.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15441.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14688 = 0;
		func_171();
		return 1;
	}
	if (Global_15822 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15824 || iParam2 == Global_15824)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_176();
	}
	return 0;
}

void func_259(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_260(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_260(var uParam0)
{
	Global_15819 = uParam0;
	Global_15829 = 1;
	Global_15836 = 0;
	Global_15831 = 0;
	Global_16813 = 0;
	Global_16819 = 0;
	Global_2621441 = 0;
}

void func_261()
{
	Global_15870 = 0;
	Global_15829 = 1;
	Global_15836 = 0;
	Global_15831 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_15836 = 0;
	Global_16819 = 0;
	Global_15827 = 0;
	Global_15874 = 0;
	Global_15876 = 0;
	Global_2621441 = 0;
}

struct<16> func_262()
{
	struct<16> Var0;
	
	StringCopy(&Var0, "BC_DECR_", 64);
	StringIntConCat(&Var0, uLocal_74[0], 64);
	return Var0;
}

int func_263(int iParam0)
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

void func_264(bool bParam0)
{
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_82("SCLUB_HOME_MEE4", uLocal_74[0]);
			}
			else
			{
				func_82("SCLUB_HOME_MEET", uLocal_74[0]);
			}
			break;
		
		case 8:
			func_82("SCLUB_HOME_LIZ", uLocal_74[0]);
			break;
		
		case 9:
			func_82("SCLUB_HOME_HITCH", uLocal_74[0]);
			break;
	}
}

void func_265(int iParam0)
{
	if (unk_0x8F474E419F56E48D(iParam0) == joaat("s_f_y_stripper_02"))
	{
		func_268(iParam0, 2, unk_0x22C775856F4633CA(0, 3));
		func_267(iParam0, 2, unk_0x22C775856F4633CA(0, 3));
		func_266(iParam0, 0, 0);
	}
}

void func_266(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x7B3C42A5388EEB3E(iParam0, 6, iParam1, iParam2))
	{
		unk_0x72A0FF8C49CFFC0D(iParam0, 6, iParam1, iParam2, 0);
	}
}

void func_267(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x7B3C42A5388EEB3E(iParam0, 3, iParam1, iParam2))
	{
		unk_0x72A0FF8C49CFFC0D(iParam0, 3, iParam1, iParam2, 0);
	}
}

void func_268(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x7B3C42A5388EEB3E(iParam0, 8, iParam1, iParam2))
	{
		unk_0x72A0FF8C49CFFC0D(iParam0, 8, iParam1, iParam2, 0);
	}
}

void func_269(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		unk_0xA0DEC6E1399EE624(iParam0);
		bVar0 = false;
		if (unk_0x8F474E419F56E48D(iParam0) == joaat("mp_f_stripperlite"))
		{
			bVar0 = true;
		}
		switch (iParam1)
		{
			case 0:
				if (bVar0)
				{
					func_274(iParam0, 1, 0);
					func_273(iParam0, 1, 0);
					func_267(iParam0, 1, 0);
					func_272(iParam0, 1, 0);
					func_271(iParam0, 1, -1, -1);
				}
				else
				{
					func_274(iParam0, 1, 1);
					func_273(iParam0, 2, 0);
					func_267(iParam0, 0, 0);
					func_272(iParam0, 0, 0);
					func_268(iParam0, 1, 0);
					func_270(iParam0, 0, 0);
					func_271(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 1:
				if (bVar0)
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 0, 0);
					func_267(iParam0, 0, 0);
					func_272(iParam0, 0, 0);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 0, 0);
					func_267(iParam0, 0, 0);
					func_272(iParam0, 0, 0);
					func_266(iParam0, 4, 0);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, 0, 4);
				}
				break;
			
			case 2:
				if (bVar0)
				{
					func_274(iParam0, 1, 0);
					func_273(iParam0, 1, 1);
					func_267(iParam0, 1, 0);
					func_272(iParam0, 1, 0);
					func_271(iParam0, 1, -1, -1);
				}
				else
				{
					func_274(iParam0, 0, 1);
					func_273(iParam0, 1, 1);
					func_267(iParam0, 1, 0);
					func_272(iParam0, 1, 1);
					func_268(iParam0, 1, 0);
					func_270(iParam0, 1, 0);
					func_271(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 3:
				if (bVar0)
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 0, 1);
					func_267(iParam0, 0, 1);
					func_272(iParam0, 0, 1);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 2, 0);
					func_267(iParam0, 0, 2);
					func_272(iParam0, 1, 1);
					func_266(iParam0, 0, 0);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, 2, 0);
				}
				break;
			
			case 4:
				if (bVar0)
				{
					func_274(iParam0, 1, 0);
					func_273(iParam0, 1, 0);
					func_267(iParam0, 1, 0);
					func_272(iParam0, 1, 0);
					func_271(iParam0, 1, -1, -1);
				}
				else
				{
					func_274(iParam0, 1, 0);
					func_273(iParam0, 2, 1);
					func_267(iParam0, 1, 2);
					func_272(iParam0, 0, 2);
					func_268(iParam0, 1, 0);
					func_270(iParam0, 1, 2);
					func_271(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 5:
				if (bVar0)
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 0, 0);
					func_267(iParam0, 0, 0);
					func_272(iParam0, 0, 0);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_274(iParam0, 1, 1);
					func_273(iParam0, 1, 0);
					func_267(iParam0, 0, 1);
					func_272(iParam0, 0, 2);
					func_266(iParam0, 2, 0);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, 1, 2);
				}
				break;
			
			case 6:
				if (bVar0)
				{
					func_274(iParam0, 1, 0);
					func_273(iParam0, 1, 0);
					func_267(iParam0, 1, 0);
					func_272(iParam0, 1, 0);
					func_271(iParam0, 1, -1, -1);
				}
				else
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 1, 0);
					func_267(iParam0, 0, 1);
					func_272(iParam0, 0, 1);
					func_268(iParam0, 1, 0);
					func_270(iParam0, 0, 1);
					func_271(iParam0, bParam2, 0, 1);
				}
				break;
			
			case 7:
				if (bVar0)
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 0, 1);
					func_267(iParam0, 0, 0);
					func_272(iParam0, 0, 0);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_274(iParam0, 1, 0);
					func_273(iParam0, 0, 2);
					func_267(iParam0, 1, 1);
					func_272(iParam0, 0, 1);
					func_266(iParam0, 0, 0);
					func_268(iParam0, 1, 0);
					func_271(iParam0, bParam2, 0, 0);
				}
				break;
			
			case 8:
				unk_0x72A0FF8C49CFFC0D(iParam0, 3, 2, 0, 0);
				unk_0x72A0FF8C49CFFC0D(iParam0, 4, 0, 1, 0);
				break;
			
			case 9:
				unk_0x72A0FF8C49CFFC0D(iParam0, 0, 0, 1, 0);
				unk_0x72A0FF8C49CFFC0D(iParam0, 2, 0, 1, 0);
				unk_0x72A0FF8C49CFFC0D(iParam0, 3, 0, 0, 0);
				unk_0x72A0FF8C49CFFC0D(iParam0, 4, 0, 1, 0);
				unk_0x72A0FF8C49CFFC0D(iParam0, 8, 1, 0, 0);
				unk_0x72A0FF8C49CFFC0D(iParam0, 10, 0, 0, 0);
				break;
			}
	}
}

void func_270(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x7B3C42A5388EEB3E(iParam0, 11, iParam1, iParam2))
	{
		unk_0x72A0FF8C49CFFC0D(iParam0, 11, iParam1, iParam2, 0);
	}
}

void func_271(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (unk_0x7112137033807390(iParam0, 0))
	{
		return;
	}
	iVar0 = unk_0x8F474E419F56E48D(iParam0);
	if (iVar0 == func_245(0, 0) || iVar0 == func_245(0, 1))
	{
		if (bParam1)
		{
			func_267(iParam0, 2, 0);
			func_268(iParam0, 1, 0);
		}
	}
	else if (iVar0 == func_245(1, 0) || iVar0 == func_245(1, 1))
	{
		if (bParam1)
		{
			func_267(iParam0, 0, iParam2);
			func_266(iParam0, iParam3, 0);
			func_268(iParam0, 1, 0);
		}
	}
	else if (iVar0 == joaat("mp_f_stripperlite"))
	{
		if (bParam1)
		{
			func_268(iParam0, 1, 0);
		}
	}
}

void func_272(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x7B3C42A5388EEB3E(iParam0, 4, iParam1, iParam2))
	{
		unk_0x72A0FF8C49CFFC0D(iParam0, 4, iParam1, iParam2, 0);
	}
}

void func_273(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x7B3C42A5388EEB3E(iParam0, 2, iParam1, iParam2))
	{
		unk_0x72A0FF8C49CFFC0D(iParam0, 2, iParam1, iParam2, 0);
	}
}

void func_274(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x7B3C42A5388EEB3E(iParam0, 0, iParam1, iParam2))
	{
		unk_0x72A0FF8C49CFFC0D(iParam0, 0, iParam1, iParam2, 0);
	}
}

int func_275()
{
	if (unk_0x429D45A6C6520026(func_192()))
	{
		return 1;
	}
	else if (unk_0xF8882C5CDED0257A(func_192()))
	{
		return 1;
	}
	return 0;
}

int func_276(var uParam0)
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

void func_277()
{
	if (!unk_0x429D45A6C6520026(func_192()))
	{
		unk_0x247955A7AC51D6E6(func_192());
	}
}

void func_278(var uParam0)
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

int func_279(var uParam0, int iParam1)
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
	iVar1 = func_280(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_280(var uParam0)
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

int func_281(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		return joaat("mp_f_stripperlite");
	}
	iVar0 = func_110(iParam0);
	if (iVar0 != 145)
	{
		return func_282(iVar0);
	}
	return func_245(0, 0);
}

int func_282(int iParam0)
{
	if (!func_79(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_283()
{
	switch (uLocal_74[0])
	{
		case 1:
			vLocal_285 = { 128.1002f, -1895.001f, 22.4811f };
			vLocal_286 = { 128.1059f, -1896.819f, 22.6792f };
			vLocal_287 = { 133.9411f, -1881.89f, 22.5257f };
			vLocal_288 = { 130.1663f, -1893.057f, 22.3748f };
			vLocal_289 = { 133.4958f, -1891.641f, 22.4252f };
			fLocal_293 = 330.5705f;
			fLocal_294 = 244f;
			vLocal_292 = { 146.293f, -1888.049f, 22.2193f };
			fLocal_295 = fLocal_294;
			break;
		
		case 0:
			vLocal_285 = { -161.9628f, -1636.501f, 33.0339f };
			vLocal_286 = { -159.9415f, -1637.307f, 33.0339f };
			vLocal_287 = { -178.6316f, -1629.522f, 32.1789f };
			vLocal_288 = { -166.1453f, -1633.102f, 32.6574f };
			vLocal_289 = { -166.6636f, -1633.229f, 32.6567f };
			fLocal_293 = 108.072f;
			fLocal_294 = 180.9811f;
			vLocal_292 = { vLocal_287 };
			fLocal_295 = fLocal_294;
			break;
		
		case 4:
			vLocal_285 = { -198.3824f, 87.8785f, 68.7436f };
			vLocal_286 = { -197.2292f, 86.3497f, 68.7561f };
			vLocal_287 = { -200.9078f, 113.537f, 68.5518f };
			vLocal_288 = { -200.1384f, 96.9809f, 68.5203f };
			vLocal_289 = { -199.5068f, 95.7042f, 68.5193f };
			fLocal_293 = 48.99f;
			fLocal_294 = 64.3f;
			vLocal_292 = { vLocal_287 };
			fLocal_295 = fLocal_294;
			break;
		
		case 5:
			vLocal_285 = { -849.0348f, 510.6906f, 89.8218f };
			vLocal_286 = { -849.0408f, 508.5767f, 89.8218f };
			vLocal_287 = { -846.1005f, 520.2202f, 89.6217f };
			vLocal_288 = { -851.8972f, 512.73f, 89.6217f };
			vLocal_289 = { -851.8746f, 513.6746f, 89.6217f };
			fLocal_293 = 92.365f;
			fLocal_294 = 293f;
			vLocal_292 = { -860.4819f, 514.2496f, 88.1473f };
			fLocal_295 = fLocal_294;
			break;
		
		case 8:
			vLocal_285 = { -28.2427f, -1555.892f, 29.6918f };
			vLocal_286 = { -24.8589f, -1556.846f, 29.6819f };
			vLocal_287 = { -41.8174f, -1575.609f, 28.2831f };
			vLocal_288 = { -25.3404f, -1556.341f, 29.6919f };
			vLocal_289 = { -27.7382f, -1570.572f, 29.3f };
			fLocal_293 = 181.352f;
			fLocal_294 = 47.9206f;
			vLocal_292 = { vLocal_287 };
			fLocal_295 = fLocal_294;
			break;
		
		case 9:
			vLocal_285 = { 3313.487f, 5175.831f, 18.619f };
			vLocal_286 = { 3310.816f, 5176.331f, 18.619f };
			vLocal_287 = { 3334.321f, 5161.122f, 17.2996f };
			vLocal_288 = { 3317.788f, 5171.707f, 17.4471f };
			vLocal_289 = { 3318.076f, 5171.805f, 17.4385f };
			fLocal_293 = 236.4579f;
			vLocal_292 = { 3322.927f, 5148.607f, 17.3141f };
			fLocal_295 = 310.8648f;
			break;
	}
}

int func_284()
{
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bLocal_304)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_285(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBF19BA6420EC428C();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_289();
			}
			else
			{
				return 0;
			}
		}
		if (!func_288())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x4C9BACA8D249CB13())
				{
					if (!bParam2)
					{
						func_289();
					}
					else
					{
						return 0;
					}
				}
				if (func_287())
				{
					if (!bParam2)
					{
						func_289();
					}
					else
					{
						return 0;
					}
				}
				if (func_286(155))
				{
					if (!bParam2)
					{
						func_289();
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
					func_289();
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
				func_289();
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
			func_289();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_286(int iParam0)
{
	if (unk_0xF10AFD11E6EE81BF(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_287()
{
	return Global_2448386.f_582;
}

bool func_288()
{
	return Global_1312834;
}

void func_289()
{
	unk_0x8F1A9FE6D91AAFEB();
}

void func_290()
{
	unk_0x8C094FAE1DF5295C(0);
	unk_0x41D876A92FF28E00();
	func_84();
	unk_0x4F93066CECE72793();
	unk_0xE70AC26DFC59863A(iLocal_284, 0);
	unk_0x413F34FCFABEDE4B(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), true, 1);
	unk_0xE724181C8BE2BA29(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), 15f, 1);
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
	}
	unk_0x8E88E73F74A9FF79(false, false, 3000, 1, 0, 0);
	if (unk_0xDC5D81351D6A4DDB(iLocal_271[0]))
	{
		if (!unk_0x7112137033807390(iLocal_271[0], 0))
		{
			if (!func_254(uLocal_300, 8192))
			{
				unk_0x1CBE3F8ED90509B2(iLocal_271[0], 1193033728, 0);
			}
			unk_0xD738221C247C8B71(iLocal_271[0], true);
			if (!unk_0x164FCCE36A36BD28(iLocal_70))
			{
				unk_0x94E87D83163B4BEB("BootyCall", &iLocal_70);
			}
			unk_0x80E7C4A78224C8F9(2, iLocal_70, 1862763509);
			unk_0x80E7C4A78224C8F9(2, 1862763509, iLocal_70);
			unk_0xDFA901280292A2FB(iLocal_271[0], iLocal_70);
		}
		unk_0x7E4E83D33161D01A(&(iLocal_271[0]));
	}
	if (iLocal_299 != -1)
	{
		func_292(&iLocal_299);
	}
	if (bLocal_69)
	{
		func_136(&uLocal_68);
	}
	unk_0x7D3B1139A6B57FE1(unk_0xD4E735F4B6A956AC(), 0);
	func_119(uLocal_74[0], -1);
	Global_105064 = 0;
	func_291(0);
	unk_0x8F1A9FE6D91AAFEB();
}

void func_291(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		func_216(iVar0, bParam0);
		iVar0++;
	}
}

void func_292(int iParam0)
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

